// Lean compiler output
// Module: Lake.Util.Log
// Imports: public import Lean.Data.Json public import Lake.Util.Error public import Lake.Util.EStateT public import Lean.Message public import Lake.Util.Lift import Init.Data.String.TakeDrop import Init.Data.String.Modify
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
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_putStrLn(lean_object*, lean_object*);
lean_object* l_Lean_mkErrorStringWithPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lake_EResult_result_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_get_stdout();
lean_object* lean_get_stderr();
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_ReaderT_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lake_EResult_toProd(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lake_EResult_toProd_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EResult_toExcept___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_IO_setStderr___boxed(lean_object*, lean_object*);
lean_object* l_IO_setStdout___boxed(lean_object*, lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* l_IO_mkRef___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_FS_Stream_ofBuffer(lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* lean_stream_of_handle(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Array_toJson___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Array_fromJson_x3f___redArg(lean_object*, lean_object*);
lean_object* l_instMonadStateOfStateTOfMonad___redArg(lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonadStateOfOfPure___redArg(lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instReprVerbosity_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.Verbosity.quiet"};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__0 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprVerbosity_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerbosity_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__1 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__1_value;
static const lean_string_object l_Lake_instReprVerbosity_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lake.Verbosity.normal"};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__2 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__2_value;
static const lean_ctor_object l_Lake_instReprVerbosity_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerbosity_repr___closed__2_value)}};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__3 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__3_value;
static const lean_string_object l_Lake_instReprVerbosity_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lake.Verbosity.verbose"};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__4 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__4_value;
static const lean_ctor_object l_Lake_instReprVerbosity_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprVerbosity_repr___closed__4_value)}};
static const lean_object* l_Lake_instReprVerbosity_repr___closed__5 = (const lean_object*)&l_Lake_instReprVerbosity_repr___closed__5_value;
static lean_once_cell_t l_Lake_instReprVerbosity_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerbosity_repr___closed__6;
static lean_once_cell_t l_Lake_instReprVerbosity_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprVerbosity_repr___closed__7;
LEAN_EXPORT lean_object* l_Lake_instReprVerbosity_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprVerbosity_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprVerbosity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprVerbosity_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprVerbosity___closed__0 = (const lean_object*)&l_Lake_instReprVerbosity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprVerbosity = (const lean_object*)&l_Lake_instReprVerbosity___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_Verbosity_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqVerbosity(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqVerbosity___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instOrdVerbosity_ord(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instOrdVerbosity_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instOrdVerbosity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instOrdVerbosity_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instOrdVerbosity___closed__0 = (const lean_object*)&l_Lake_instOrdVerbosity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instOrdVerbosity = (const lean_object*)&l_Lake_instOrdVerbosity___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instLTVerbosity;
LEAN_EXPORT lean_object* l_Lake_instLEVerbosity;
LEAN_EXPORT uint8_t l_Lake_instMinVerbosity___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instMinVerbosity___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMinVerbosity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMinVerbosity___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMinVerbosity___closed__0 = (const lean_object*)&l_Lake_instMinVerbosity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMinVerbosity = (const lean_object*)&l_Lake_instMinVerbosity___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instMaxVerbosity___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instMaxVerbosity___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMaxVerbosity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMaxVerbosity___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMaxVerbosity___closed__0 = (const lean_object*)&l_Lake_instMaxVerbosity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMaxVerbosity = (const lean_object*)&l_Lake_instMaxVerbosity___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instInhabitedVerbosity;
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instReprAnsiMode_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lake.AnsiMode.auto"};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__0 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprAnsiMode_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprAnsiMode_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__1 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__1_value;
static const lean_string_object l_Lake_instReprAnsiMode_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lake.AnsiMode.ansi"};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__2 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__2_value;
static const lean_ctor_object l_Lake_instReprAnsiMode_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprAnsiMode_repr___closed__2_value)}};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__3 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__3_value;
static const lean_string_object l_Lake_instReprAnsiMode_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.AnsiMode.noAnsi"};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__4 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__4_value;
static const lean_ctor_object l_Lake_instReprAnsiMode_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprAnsiMode_repr___closed__4_value)}};
static const lean_object* l_Lake_instReprAnsiMode_repr___closed__5 = (const lean_object*)&l_Lake_instReprAnsiMode_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_instReprAnsiMode_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprAnsiMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprAnsiMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprAnsiMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprAnsiMode___closed__0 = (const lean_object*)&l_Lake_instReprAnsiMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprAnsiMode = (const lean_object*)&l_Lake_instReprAnsiMode___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_AnsiMode_isEnabled(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_AnsiMode_isEnabled___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Ansi_chalk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "\033[1;"};
static const lean_object* l_Lake_Ansi_chalk___closed__0 = (const lean_object*)&l_Lake_Ansi_chalk___closed__0_value;
static const lean_string_object l_Lake_Ansi_chalk___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lake_Ansi_chalk___closed__1 = (const lean_object*)&l_Lake_Ansi_chalk___closed__1_value;
static const lean_string_object l_Lake_Ansi_chalk___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\033[m"};
static const lean_object* l_Lake_Ansi_chalk___closed__2 = (const lean_object*)&l_Lake_Ansi_chalk___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_Ansi_chalk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Ansi_chalk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stdout_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stdout_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stderr_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stderr_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stream_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_stream_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_get(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeStreamOutStream___lam__0(lean_object*);
static const lean_closure_object l_Lake_instCoeStreamOutStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoeStreamOutStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeStreamOutStream___closed__0 = (const lean_object*)&l_Lake_instCoeStreamOutStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeStreamOutStream = (const lean_object*)&l_Lake_instCoeStreamOutStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instCoeHandleOutStream___lam__0(lean_object*);
static const lean_closure_object l_Lake_instCoeHandleOutStream___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoeHandleOutStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeHandleOutStream___closed__0 = (const lean_object*)&l_Lake_instCoeHandleOutStream___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeHandleOutStream = (const lean_object*)&l_Lake_instCoeHandleOutStream___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instInhabitedLogLevel_default;
LEAN_EXPORT uint8_t l_Lake_instInhabitedLogLevel;
static const lean_string_object l_Lake_instReprLogLevel_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lake.LogLevel.trace"};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__0 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprLogLevel_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLogLevel_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__1 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__1_value;
static const lean_string_object l_Lake_instReprLogLevel_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lake.LogLevel.info"};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__2 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__2_value;
static const lean_ctor_object l_Lake_instReprLogLevel_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLogLevel_repr___closed__2_value)}};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__3 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__3_value;
static const lean_string_object l_Lake_instReprLogLevel_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lake.LogLevel.warning"};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__4 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__4_value;
static const lean_ctor_object l_Lake_instReprLogLevel_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLogLevel_repr___closed__4_value)}};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__5 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__5_value;
static const lean_string_object l_Lake_instReprLogLevel_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lake.LogLevel.error"};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__6 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__6_value;
static const lean_ctor_object l_Lake_instReprLogLevel_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprLogLevel_repr___closed__6_value)}};
static const lean_object* l_Lake_instReprLogLevel_repr___closed__7 = (const lean_object*)&l_Lake_instReprLogLevel_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_instReprLogLevel_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprLogLevel_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprLogLevel_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprLogLevel___closed__0 = (const lean_object*)&l_Lake_instReprLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprLogLevel = (const lean_object*)&l_Lake_instReprLogLevel___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_LogLevel_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqLogLevel(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqLogLevel___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instOrdLogLevel_ord(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instOrdLogLevel_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instOrdLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instOrdLogLevel_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instOrdLogLevel___closed__0 = (const lean_object*)&l_Lake_instOrdLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instOrdLogLevel = (const lean_object*)&l_Lake_instOrdLogLevel___closed__0_value;
static const lean_string_object l_Lake_instToJsonLogLevel_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__0 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__0_value;
static const lean_ctor_object l_Lake_instToJsonLogLevel_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__0_value)}};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__1 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__1_value;
static const lean_string_object l_Lake_instToJsonLogLevel_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "info"};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__2 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__2_value;
static const lean_ctor_object l_Lake_instToJsonLogLevel_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__2_value)}};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__3 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__3_value;
static const lean_string_object l_Lake_instToJsonLogLevel_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "warning"};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__4 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__4_value;
static const lean_ctor_object l_Lake_instToJsonLogLevel_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__4_value)}};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__5 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__5_value;
static const lean_string_object l_Lake_instToJsonLogLevel_toJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__6 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__6_value;
static const lean_ctor_object l_Lake_instToJsonLogLevel_toJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__6_value)}};
static const lean_object* l_Lake_instToJsonLogLevel_toJson___closed__7 = (const lean_object*)&l_Lake_instToJsonLogLevel_toJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_instToJsonLogLevel_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lake_instToJsonLogLevel_toJson___boxed(lean_object*);
static const lean_closure_object l_Lake_instToJsonLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToJsonLogLevel_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToJsonLogLevel___closed__0 = (const lean_object*)&l_Lake_instToJsonLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToJsonLogLevel = (const lean_object*)&l_Lake_instToJsonLogLevel___closed__0_value;
static const lean_string_object l_Lake_instFromJsonLogLevel_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__0 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__0_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__0_value)}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__1 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__1_value;
static const lean_string_object l_Lake_instFromJsonLogLevel_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__2 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__2_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__2_value)}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__3 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__3_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__4 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__4_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__5 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__5_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__6 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__6_value;
static const lean_ctor_object l_Lake_instFromJsonLogLevel_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lake_instFromJsonLogLevel_fromJson___closed__7 = (const lean_object*)&l_Lake_instFromJsonLogLevel_fromJson___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_instFromJsonLogLevel_fromJson(lean_object*);
static const lean_closure_object l_Lake_instFromJsonLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instFromJsonLogLevel_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instFromJsonLogLevel___closed__0 = (const lean_object*)&l_Lake_instFromJsonLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instFromJsonLogLevel = (const lean_object*)&l_Lake_instFromJsonLogLevel___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instLTLogLevel;
LEAN_EXPORT lean_object* l_Lake_instLELogLevel;
LEAN_EXPORT uint8_t l_Lake_instMinLogLevel___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instMinLogLevel___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMinLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMinLogLevel___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMinLogLevel___closed__0 = (const lean_object*)&l_Lake_instMinLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMinLogLevel = (const lean_object*)&l_Lake_instMinLogLevel___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instMaxLogLevel___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_instMaxLogLevel___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMaxLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMaxLogLevel___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMaxLogLevel___closed__0 = (const lean_object*)&l_Lake_instMaxLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMaxLogLevel = (const lean_object*)&l_Lake_instMaxLogLevel___closed__0_value;
LEAN_EXPORT uint32_t l_Lake_LogLevel_icon(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_icon___boxed(lean_object*);
static const lean_string_object l_Lake_LogLevel_ansiColor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "33"};
static const lean_object* l_Lake_LogLevel_ansiColor___closed__0 = (const lean_object*)&l_Lake_LogLevel_ansiColor___closed__0_value;
static const lean_string_object l_Lake_LogLevel_ansiColor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "31"};
static const lean_object* l_Lake_LogLevel_ansiColor___closed__1 = (const lean_object*)&l_Lake_LogLevel_ansiColor___closed__1_value;
static const lean_string_object l_Lake_LogLevel_ansiColor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "34"};
static const lean_object* l_Lake_LogLevel_ansiColor___closed__2 = (const lean_object*)&l_Lake_LogLevel_ansiColor___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_LogLevel_ansiColor(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ansiColor___boxed(lean_object*);
LEAN_EXPORT lean_object* l_String_mapAux___at___00Lake_LogLevel_ofString_x3f_spec__0(lean_object*, lean_object*);
static const lean_ctor_object l_Lake_LogLevel_ofString_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__0 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__0_value;
static const lean_ctor_object l_Lake_LogLevel_ofString_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__1 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__1_value;
static const lean_string_object l_Lake_LogLevel_ofString_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "information"};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__2 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__2_value;
static const lean_string_object l_Lake_LogLevel_ofString_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "warn"};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__3 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__3_value;
static const lean_ctor_object l_Lake_LogLevel_ofString_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__4 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__4_value;
static const lean_ctor_object l_Lake_LogLevel_ofString_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_LogLevel_ofString_x3f___closed__5 = (const lean_object*)&l_Lake_LogLevel_ofString_x3f___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogLevel_toString(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Util_Log_0__Lake_instToStringLogLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LogLevel_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Util_Log_0__Lake_instToStringLogLevel___closed__0 = (const lean_object*)&l___private_Lake_Util_Log_0__Lake_instToStringLogLevel___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lake_Util_Log_0__Lake_instToStringLogLevel = (const lean_object*)&l___private_Lake_Util_Log_0__Lake_instToStringLogLevel___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_LogLevel_ofMessageSeverity(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofMessageSeverity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_LogLevel_toMessageSeverity(uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogLevel_toMessageSeverity___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Verbosity_minLogLv(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Verbosity_minLogLv___boxed(lean_object*);
static const lean_string_object l_Lake_instInhabitedLogEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_instInhabitedLogEntry_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedLogEntry_default___closed__0_value;
static const lean_ctor_object l_Lake_instInhabitedLogEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_instInhabitedLogEntry_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_instInhabitedLogEntry_default___closed__1 = (const lean_object*)&l_Lake_instInhabitedLogEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedLogEntry_default = (const lean_object*)&l_Lake_instInhabitedLogEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedLogEntry = (const lean_object*)&l_Lake_instInhabitedLogEntry_default___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lake_instToJsonLogEntry_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lake_instToJsonLogEntry_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "level"};
static const lean_object* l_Lake_instToJsonLogEntry_toJson___closed__0 = (const lean_object*)&l_Lake_instToJsonLogEntry_toJson___closed__0_value;
static const lean_string_object l_Lake_instToJsonLogEntry_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lake_instToJsonLogEntry_toJson___closed__1 = (const lean_object*)&l_Lake_instToJsonLogEntry_toJson___closed__1_value;
static const lean_array_object l_Lake_instToJsonLogEntry_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_instToJsonLogEntry_toJson___closed__2 = (const lean_object*)&l_Lake_instToJsonLogEntry_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_instToJsonLogEntry_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToJsonLogEntry_toJson___boxed(lean_object*);
static const lean_closure_object l_Lake_instToJsonLogEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToJsonLogEntry_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToJsonLogEntry___closed__0 = (const lean_object*)&l_Lake_instToJsonLogEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToJsonLogEntry = (const lean_object*)&l_Lake_instToJsonLogEntry___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_instFromJsonLogEntry_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__0 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__0_value;
static const lean_string_object l_Lake_instFromJsonLogEntry_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "LogEntry"};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__1 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__1_value;
static const lean_ctor_object l_Lake_instFromJsonLogEntry_fromJson___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_instFromJsonLogEntry_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__2_value_aux_0),((lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(32, 96, 108, 55, 70, 212, 138, 58)}};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__2 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__2_value;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__3;
static const lean_string_object l_Lake_instFromJsonLogEntry_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__4 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__4_value;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__5;
static const lean_ctor_object l_Lake_instFromJsonLogEntry_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instToJsonLogEntry_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(248, 87, 114, 95, 43, 103, 70, 253)}};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__6 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__6_value;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__7;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__8;
static const lean_string_object l_Lake_instFromJsonLogEntry_fromJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__9 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__9_value;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__10;
static const lean_ctor_object l_Lake_instFromJsonLogEntry_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instToJsonLogEntry_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(149, 62, 76, 216, 222, 7, 163, 13)}};
static const lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__11 = (const lean_object*)&l_Lake_instFromJsonLogEntry_fromJson___closed__11_value;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__12;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__13;
static lean_once_cell_t l_Lake_instFromJsonLogEntry_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instFromJsonLogEntry_fromJson___closed__14;
LEAN_EXPORT lean_object* l_Lake_instFromJsonLogEntry_fromJson(lean_object*);
static const lean_closure_object l_Lake_instFromJsonLogEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instFromJsonLogEntry_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instFromJsonLogEntry___closed__0 = (const lean_object*)&l_Lake_instFromJsonLogEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instFromJsonLogEntry = (const lean_object*)&l_Lake_instFromJsonLogEntry___closed__0_value;
static const lean_string_object l_Lake_LogEntry_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lake_LogEntry_toString___closed__0 = (const lean_object*)&l_Lake_LogEntry_toString___closed__0_value;
static const lean_string_object l_Lake_LogEntry_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lake_LogEntry_toString___closed__1 = (const lean_object*)&l_Lake_LogEntry_toString___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_LogEntry_toString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_LogEntry_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToStringLogEntry___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToStringLogEntry___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instToStringLogEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToStringLogEntry___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToStringLogEntry___closed__0 = (const lean_object*)&l_Lake_instToStringLogEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToStringLogEntry = (const lean_object*)&l_Lake_instToStringLogEntry___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LogEntry_trace(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogEntry_info(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogEntry_warning(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogEntry_error(lean_object*);
static const lean_string_object l_Lake_LogEntry_ofSerialMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":\n"};
static const lean_object* l_Lake_LogEntry_ofSerialMessage___closed__0 = (const lean_object*)&l_Lake_LogEntry_ofSerialMessage___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofSerialMessage(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofMessage(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofMessage___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logVerbose___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logVerbose(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logVerbose___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logInfo___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logWarning___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logWarning(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logError___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logError(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logSerialMessage___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logSerialMessage(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logMessage___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logMessage___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logMessage(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_logToStream(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_logToStream___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_instInhabitedOfPure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_instInhabitedOfPure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_error___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_error___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_error(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_logEntry(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutStream_logEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___redArg(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_ignoreLog___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLogT_ignoreLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_instInhabitedLog_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_instInhabitedLog_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedLog_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedLog_default = (const lean_object*)&l_Lake_instInhabitedLog_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedLog = (const lean_object*)&l_Lake_instInhabitedLog_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToJsonLog___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instToJsonLog___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToJsonLog___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instToJsonLogEntry___closed__0_value)} };
static const lean_object* l_Lake_instToJsonLog___closed__0 = (const lean_object*)&l_Lake_instToJsonLog___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToJsonLog = (const lean_object*)&l_Lake_instToJsonLog___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instFromJsonLog___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instFromJsonLog___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instFromJsonLog___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lake_instFromJsonLogEntry___closed__0_value)} };
static const lean_object* l_Lake_instFromJsonLog___closed__0 = (const lean_object*)&l_Lake_instFromJsonLog___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instFromJsonLog = (const lean_object*)&l_Lake_instFromJsonLog___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Log_instInhabitedPos_default;
LEAN_EXPORT lean_object* l_Lake_Log_instInhabitedPos;
LEAN_EXPORT uint8_t l_Lake_Log_instDecidableEqPos_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_instDecidableEqPos_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_instDecidableEqPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_instDecidableEqPos___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instOfNatPos;
LEAN_EXPORT uint8_t l_Lake_instOrdPos___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instOrdPos___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instOrdPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instOrdPos___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instOrdPos___closed__0 = (const lean_object*)&l_Lake_instOrdPos___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instOrdPos = (const lean_object*)&l_Lake_instOrdPos___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instLTPos;
LEAN_EXPORT uint8_t l_Lake_instDecidableRelPosLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableRelPosLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instLEPos;
LEAN_EXPORT uint8_t l_Lake_instDecidableRelPosLe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableRelPosLe___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMinPos___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMinPos___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMinPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMinPos___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMinPos___closed__0 = (const lean_object*)&l_Lake_instMinPos___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMinPos = (const lean_object*)&l_Lake_instMinPos___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instMaxPos___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMaxPos___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMaxPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMaxPos___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMaxPos___closed__0 = (const lean_object*)&l_Lake_instMaxPos___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instMaxPos = (const lean_object*)&l_Lake_instMaxPos___closed__0_value;
static const lean_array_object l_Lake_Log_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Log_empty___closed__0 = (const lean_object*)&l_Lake_Log_empty___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Log_empty = (const lean_object*)&l_Lake_Log_empty___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Log_instEmptyCollection = (const lean_object*)&l_Lake_Log_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Log_size(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_size___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_isEmpty___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_hasEntries(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_hasEntries___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_endPos(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_endPos___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_append___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Log_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Log_append___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_instAppend___closed__0 = (const lean_object*)&l_Lake_Log_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Log_instAppend = (const lean_object*)&l_Lake_Log_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Log_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_dropFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_dropFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_takeFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_takeFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_split(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_toString___boxed(lean_object*);
static const lean_closure_object l_Lake_Log_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Log_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_instToString___closed__0 = (const lean_object*)&l_Lake_Log_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Log_instToString = (const lean_object*)&l_Lake_Log_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Log_replay___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_replay___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_replay(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_filter___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Log_filter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__0 = (const lean_object*)&l_Lake_Log_filter___closed__0_value;
static const lean_closure_object l_Lake_Log_filter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__1 = (const lean_object*)&l_Lake_Log_filter___closed__1_value;
static const lean_closure_object l_Lake_Log_filter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__2 = (const lean_object*)&l_Lake_Log_filter___closed__2_value;
static const lean_closure_object l_Lake_Log_filter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__3 = (const lean_object*)&l_Lake_Log_filter___closed__3_value;
static const lean_closure_object l_Lake_Log_filter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__4 = (const lean_object*)&l_Lake_Log_filter___closed__4_value;
static const lean_closure_object l_Lake_Log_filter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__5 = (const lean_object*)&l_Lake_Log_filter___closed__5_value;
static const lean_closure_object l_Lake_Log_filter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Log_filter___closed__6 = (const lean_object*)&l_Lake_Log_filter___closed__6_value;
static const lean_ctor_object l_Lake_Log_filter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Log_filter___closed__0_value),((lean_object*)&l_Lake_Log_filter___closed__1_value)}};
static const lean_object* l_Lake_Log_filter___closed__7 = (const lean_object*)&l_Lake_Log_filter___closed__7_value;
static const lean_ctor_object l_Lake_Log_filter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Log_filter___closed__7_value),((lean_object*)&l_Lake_Log_filter___closed__2_value),((lean_object*)&l_Lake_Log_filter___closed__3_value),((lean_object*)&l_Lake_Log_filter___closed__4_value),((lean_object*)&l_Lake_Log_filter___closed__5_value)}};
static const lean_object* l_Lake_Log_filter___closed__8 = (const lean_object*)&l_Lake_Log_filter___closed__8_value;
static const lean_ctor_object l_Lake_Log_filter___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Log_filter___closed__8_value),((lean_object*)&l_Lake_Log_filter___closed__6_value)}};
static const lean_object* l_Lake_Log_filter___closed__9 = (const lean_object*)&l_Lake_Log_filter___closed__9_value;
LEAN_EXPORT lean_object* l_Lake_Log_filter(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_any___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_any___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_any(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_any___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0(lean_object*, size_t, size_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Log_maxLv(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Log_maxLv___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_pushLogEntry___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_pushLogEntry___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_pushLogEntry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_ofMonadState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_MonadLog_ofMonadState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLog___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLog___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLog(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLog___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLogPos___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLogPos___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLogPos___redArg___closed__0 = (const lean_object*)&l_Lake_getLogPos___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLogPos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeLog___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lake_takeLog___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_takeLog___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_takeLog___redArg___closed__0 = (const lean_object*)&l_Lake_takeLog___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_takeLog___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeLog(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeLogFrom___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeLogFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_takeLogFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_dropLogFrom(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_extractLog(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withExtractLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_throwIfLogs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_errorWithLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_withLoggedIO___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "stdout/stderr:\n"};
static const lean_object* l_Lake_withLoggedIO___redArg___lam__3___closed__0 = (const lean_object*)&l_Lake_withLoggedIO___redArg___lam__3___closed__0_value;
static const lean_string_object l_Lake_withLoggedIO___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lake_withLoggedIO___redArg___lam__3___closed__1 = (const lean_object*)&l_Lake_withLoggedIO___redArg___lam__3___closed__1_value;
static const lean_string_object l_Lake_withLoggedIO___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lake_withLoggedIO___redArg___lam__3___closed__2 = (const lean_object*)&l_Lake_withLoggedIO___redArg___lam__3___closed__2_value;
static const lean_string_object l_Lake_withLoggedIO___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lake_withLoggedIO___redArg___lam__3___closed__3 = (const lean_object*)&l_Lake_withLoggedIO___redArg___lam__3___closed__3_value;
static lean_once_cell_t l_Lake_withLoggedIO___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_withLoggedIO___redArg___lam__3___closed__4;
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_withLoggedIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_withLoggedIO___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_withLoggedIO___redArg___closed__0 = (const lean_object*)&l_Lake_withLoggedIO___redArg___closed__0_value;
static lean_once_cell_t l_Lake_withLoggedIO___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_withLoggedIO___redArg___closed__1;
static lean_once_cell_t l_Lake_withLoggedIO___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_withLoggedIO___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_withLoggedIO(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_error___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_error___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_error(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_monadError___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_monadError___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_monadError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_failure___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_failure___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_failure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELog_alternative(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLogLogTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLogLogTOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_LogT_run_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LogT_run_x27___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LogT_run_x27___redArg___closed__0 = (const lean_object*)&l_Lake_LogT_run_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLogELogTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLogELogTOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadErrorELogTOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadErrorELogTOfMonad___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___closed__0 = (const lean_object*)&l_Lake_instMonadErrorELogTOfMonad___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_ELogT_run_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_toExcept___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_ELogT_run_x27___redArg___closed__0 = (const lean_object*)&l_Lake_ELogT_run_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_ELogT_toLogT___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_toProd, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_ELogT_toLogT___redArg___closed__0 = (const lean_object*)&l_Lake_ELogT_toLogT___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_ELogT_toLogT_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_toProd_x3f, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_ELogT_toLogT_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_ELogT_toLogT_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_ELogT_run_x3f_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_EResult_result_x3f___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lake_ELogT_run_x3f_x27___redArg___closed__0 = (const lean_object*)&l_Lake_ELogT_run_x3f_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_instMonadLiftIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_instMonadLiftIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LogIO_instMonadLiftIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LogIO_instMonadLiftIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LogIO_instMonadLiftIO___closed__0 = (const lean_object*)&l_Lake_LogIO_instMonadLiftIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_LogIO_instMonadLiftIO = (const lean_object*)&l_Lake_LogIO_instMonadLiftIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_captureLog___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LogIO_captureLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadError___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadError___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LoggerIO_instMonadError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LoggerIO_instMonadError___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LoggerIO_instMonadError___closed__0 = (const lean_object*)&l_Lake_LoggerIO_instMonadError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_LoggerIO_instMonadError = (const lean_object*)&l_Lake_LoggerIO_instMonadError___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LoggerIO_instMonadLiftIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LoggerIO_instMonadLiftIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LoggerIO_instMonadLiftIO___closed__0 = (const lean_object*)&l_Lake_LoggerIO_instMonadLiftIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_LoggerIO_instMonadLiftIO = (const lean_object*)&l_Lake_LoggerIO_instMonadLiftIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LoggerIO_instMonadLiftLogIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LoggerIO_instMonadLiftLogIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___closed__0 = (const lean_object*)&l_Lake_LoggerIO_instMonadLiftLogIO___closed__0_value;
static lean_once_cell_t l_Lake_LoggerIO_instMonadLiftLogIO___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___closed__1;
static lean_once_cell_t l_Lake_LoggerIO_instMonadLiftLogIO___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___closed__2;
static lean_once_cell_t l_Lake_LoggerIO_instMonadLiftLogIO___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___closed__3;
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO;
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lake_Verbosity_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lake_Verbosity_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lake_Verbosity_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___redArg(lean_object* v_quiet_23_){
_start:
{
lean_inc(v_quiet_23_);
return v_quiet_23_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___redArg___boxed(lean_object* v_quiet_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lake_Verbosity_quiet_elim___redArg(v_quiet_24_);
lean_dec(v_quiet_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_quiet_29_){
_start:
{
lean_inc(v_quiet_29_);
return v_quiet_29_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_quiet_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_quiet_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lake_Verbosity_quiet_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_quiet_33_);
lean_dec(v_quiet_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___redArg(lean_object* v_normal_36_){
_start:
{
lean_inc(v_normal_36_);
return v_normal_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___redArg___boxed(lean_object* v_normal_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lake_Verbosity_normal_elim___redArg(v_normal_37_);
lean_dec(v_normal_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_normal_42_){
_start:
{
lean_inc(v_normal_42_);
return v_normal_42_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_normal_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_normal_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lake_Verbosity_normal_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_normal_46_);
lean_dec(v_normal_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___redArg(lean_object* v_verbose_49_){
_start:
{
lean_inc(v_verbose_49_);
return v_verbose_49_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___redArg___boxed(lean_object* v_verbose_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lake_Verbosity_verbose_elim___redArg(v_verbose_50_);
lean_dec(v_verbose_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_verbose_55_){
_start:
{
lean_inc(v_verbose_55_);
return v_verbose_55_;
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_verbose_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_verbose_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lake_Verbosity_verbose_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_verbose_59_);
lean_dec(v_verbose_59_);
return v_res_61_;
}
}
static lean_object* _init_l_Lake_instReprVerbosity_repr___closed__6(void){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_unsigned_to_nat(2u);
v___x_72_ = lean_nat_to_int(v___x_71_);
return v___x_72_;
}
}
static lean_object* _init_l_Lake_instReprVerbosity_repr___closed__7(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = lean_unsigned_to_nat(1u);
v___x_74_ = lean_nat_to_int(v___x_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerbosity_repr(uint8_t v_x_75_, lean_object* v_prec_76_){
_start:
{
lean_object* v___y_78_; lean_object* v___y_85_; lean_object* v___y_92_; 
switch(v_x_75_)
{
case 0:
{
lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_98_ = lean_unsigned_to_nat(1024u);
v___x_99_ = lean_nat_dec_le(v___x_98_, v_prec_76_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_78_ = v___x_100_;
goto v___jp_77_;
}
else
{
lean_object* v___x_101_; 
v___x_101_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_78_ = v___x_101_;
goto v___jp_77_;
}
}
case 1:
{
lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_102_ = lean_unsigned_to_nat(1024u);
v___x_103_ = lean_nat_dec_le(v___x_102_, v_prec_76_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; 
v___x_104_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_85_ = v___x_104_;
goto v___jp_84_;
}
else
{
lean_object* v___x_105_; 
v___x_105_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_85_ = v___x_105_;
goto v___jp_84_;
}
}
default: 
{
lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_106_ = lean_unsigned_to_nat(1024u);
v___x_107_ = lean_nat_dec_le(v___x_106_, v_prec_76_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_92_ = v___x_108_;
goto v___jp_91_;
}
else
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_92_ = v___x_109_;
goto v___jp_91_;
}
}
}
v___jp_77_:
{
lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_79_ = ((lean_object*)(l_Lake_instReprVerbosity_repr___closed__1));
lean_inc(v___y_78_);
v___x_80_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_80_, 0, v___y_78_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = 0;
v___x_82_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_82_, 0, v___x_80_);
lean_ctor_set_uint8(v___x_82_, sizeof(void*)*1, v___x_81_);
v___x_83_ = l_Repr_addAppParen(v___x_82_, v_prec_76_);
return v___x_83_;
}
v___jp_84_:
{
lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_86_ = ((lean_object*)(l_Lake_instReprVerbosity_repr___closed__3));
lean_inc(v___y_85_);
v___x_87_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_87_, 0, v___y_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = 0;
v___x_89_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_89_, 0, v___x_87_);
lean_ctor_set_uint8(v___x_89_, sizeof(void*)*1, v___x_88_);
v___x_90_ = l_Repr_addAppParen(v___x_89_, v_prec_76_);
return v___x_90_;
}
v___jp_91_:
{
lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_93_ = ((lean_object*)(l_Lake_instReprVerbosity_repr___closed__5));
lean_inc(v___y_92_);
v___x_94_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_94_, 0, v___y_92_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
v___x_95_ = 0;
v___x_96_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_96_, 0, v___x_94_);
lean_ctor_set_uint8(v___x_96_, sizeof(void*)*1, v___x_95_);
v___x_97_ = l_Repr_addAppParen(v___x_96_, v_prec_76_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprVerbosity_repr___boxed(lean_object* v_x_110_, lean_object* v_prec_111_){
_start:
{
uint8_t v_x_171__boxed_112_; lean_object* v_res_113_; 
v_x_171__boxed_112_ = lean_unbox(v_x_110_);
v_res_113_ = l_Lake_instReprVerbosity_repr(v_x_171__boxed_112_, v_prec_111_);
lean_dec(v_prec_111_);
return v_res_113_;
}
}
LEAN_EXPORT uint8_t l_Lake_Verbosity_ofNat(lean_object* v_n_116_){
_start:
{
lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_nat_dec_le(v_n_116_, v___x_117_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(1u);
v___x_120_ = lean_nat_dec_le(v_n_116_, v___x_119_);
if (v___x_120_ == 0)
{
uint8_t v___x_121_; 
v___x_121_ = 2;
return v___x_121_;
}
else
{
uint8_t v___x_122_; 
v___x_122_ = 1;
return v___x_122_;
}
}
else
{
uint8_t v___x_123_; 
v___x_123_ = 0;
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_ofNat___boxed(lean_object* v_n_124_){
_start:
{
uint8_t v_res_125_; lean_object* v_r_126_; 
v_res_125_ = l_Lake_Verbosity_ofNat(v_n_124_);
lean_dec(v_n_124_);
v_r_126_ = lean_box(v_res_125_);
return v_r_126_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqVerbosity(uint8_t v_x_127_, uint8_t v_y_128_){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; 
v___x_129_ = l_Lake_Verbosity_ctorIdx(v_x_127_);
v___x_130_ = l_Lake_Verbosity_ctorIdx(v_y_128_);
v___x_131_ = lean_nat_dec_eq(v___x_129_, v___x_130_);
lean_dec(v___x_130_);
lean_dec(v___x_129_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqVerbosity___boxed(lean_object* v_x_132_, lean_object* v_y_133_){
_start:
{
uint8_t v_x_20__boxed_134_; uint8_t v_y_21__boxed_135_; uint8_t v_res_136_; lean_object* v_r_137_; 
v_x_20__boxed_134_ = lean_unbox(v_x_132_);
v_y_21__boxed_135_ = lean_unbox(v_y_133_);
v_res_136_ = l_Lake_instDecidableEqVerbosity(v_x_20__boxed_134_, v_y_21__boxed_135_);
v_r_137_ = lean_box(v_res_136_);
return v_r_137_;
}
}
LEAN_EXPORT uint8_t l_Lake_instOrdVerbosity_ord(uint8_t v_x_138_, uint8_t v_y_139_){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_140_ = l_Lake_Verbosity_ctorIdx(v_x_138_);
v___x_141_ = l_Lake_Verbosity_ctorIdx(v_y_139_);
v___x_142_ = lean_nat_dec_lt(v___x_140_, v___x_141_);
if (v___x_142_ == 0)
{
uint8_t v___x_143_; 
v___x_143_ = lean_nat_dec_eq(v___x_140_, v___x_141_);
lean_dec(v___x_141_);
lean_dec(v___x_140_);
if (v___x_143_ == 0)
{
uint8_t v___x_144_; 
v___x_144_ = 2;
return v___x_144_;
}
else
{
uint8_t v___x_145_; 
v___x_145_ = 1;
return v___x_145_;
}
}
else
{
uint8_t v___x_146_; 
lean_dec(v___x_141_);
lean_dec(v___x_140_);
v___x_146_ = 0;
return v___x_146_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instOrdVerbosity_ord___boxed(lean_object* v_x_147_, lean_object* v_y_148_){
_start:
{
uint8_t v_x_30__boxed_149_; uint8_t v_y_31__boxed_150_; uint8_t v_res_151_; lean_object* v_r_152_; 
v_x_30__boxed_149_ = lean_unbox(v_x_147_);
v_y_31__boxed_150_ = lean_unbox(v_y_148_);
v_res_151_ = l_Lake_instOrdVerbosity_ord(v_x_30__boxed_149_, v_y_31__boxed_150_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
static lean_object* _init_l_Lake_instLTVerbosity(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_box(0);
return v___x_155_;
}
}
static lean_object* _init_l_Lake_instLEVerbosity(void){
_start:
{
lean_object* v___x_156_; 
v___x_156_ = lean_box(0);
return v___x_156_;
}
}
LEAN_EXPORT uint8_t l_Lake_instMinVerbosity___lam__0(uint8_t v_x_157_, uint8_t v_y_158_){
_start:
{
uint8_t v___x_159_; 
v___x_159_ = l_Lake_instOrdVerbosity_ord(v_x_157_, v_y_158_);
if (v___x_159_ == 2)
{
return v_y_158_;
}
else
{
return v_x_157_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMinVerbosity___lam__0___boxed(lean_object* v_x_160_, lean_object* v_y_161_){
_start:
{
uint8_t v_x_boxed_162_; uint8_t v_y_boxed_163_; uint8_t v_res_164_; lean_object* v_r_165_; 
v_x_boxed_162_ = lean_unbox(v_x_160_);
v_y_boxed_163_ = lean_unbox(v_y_161_);
v_res_164_ = l_Lake_instMinVerbosity___lam__0(v_x_boxed_162_, v_y_boxed_163_);
v_r_165_ = lean_box(v_res_164_);
return v_r_165_;
}
}
LEAN_EXPORT uint8_t l_Lake_instMaxVerbosity___lam__0(uint8_t v_x_168_, uint8_t v_y_169_){
_start:
{
uint8_t v___x_170_; 
v___x_170_ = l_Lake_instOrdVerbosity_ord(v_x_168_, v_y_169_);
if (v___x_170_ == 2)
{
return v_x_168_;
}
else
{
return v_y_169_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMaxVerbosity___lam__0___boxed(lean_object* v_x_171_, lean_object* v_y_172_){
_start:
{
uint8_t v_x_boxed_173_; uint8_t v_y_boxed_174_; uint8_t v_res_175_; lean_object* v_r_176_; 
v_x_boxed_173_ = lean_unbox(v_x_171_);
v_y_boxed_174_ = lean_unbox(v_y_172_);
v_res_175_ = l_Lake_instMaxVerbosity___lam__0(v_x_boxed_173_, v_y_boxed_174_);
v_r_176_ = lean_box(v_res_175_);
return v_r_176_;
}
}
static uint8_t _init_l_Lake_instInhabitedVerbosity(void){
_start:
{
uint8_t v___x_179_; 
v___x_179_ = 1;
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorIdx(uint8_t v_x_180_){
_start:
{
switch(v_x_180_)
{
case 0:
{
lean_object* v___x_181_; 
v___x_181_ = lean_unsigned_to_nat(0u);
return v___x_181_;
}
case 1:
{
lean_object* v___x_182_; 
v___x_182_ = lean_unsigned_to_nat(1u);
return v___x_182_;
}
default: 
{
lean_object* v___x_183_; 
v___x_183_ = lean_unsigned_to_nat(2u);
return v___x_183_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorIdx___boxed(lean_object* v_x_184_){
_start:
{
uint8_t v_x_boxed_185_; lean_object* v_res_186_; 
v_x_boxed_185_ = lean_unbox(v_x_184_);
v_res_186_ = l_Lake_AnsiMode_ctorIdx(v_x_boxed_185_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___redArg(lean_object* v_k_187_){
_start:
{
lean_inc(v_k_187_);
return v_k_187_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___redArg___boxed(lean_object* v_k_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lake_AnsiMode_ctorElim___redArg(v_k_188_);
lean_dec(v_k_188_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim(lean_object* v_motive_190_, lean_object* v_ctorIdx_191_, uint8_t v_t_192_, lean_object* v_h_193_, lean_object* v_k_194_){
_start:
{
lean_inc(v_k_194_);
return v_k_194_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ctorElim___boxed(lean_object* v_motive_195_, lean_object* v_ctorIdx_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_k_199_){
_start:
{
uint8_t v_t_boxed_200_; lean_object* v_res_201_; 
v_t_boxed_200_ = lean_unbox(v_t_197_);
v_res_201_ = l_Lake_AnsiMode_ctorElim(v_motive_195_, v_ctorIdx_196_, v_t_boxed_200_, v_h_198_, v_k_199_);
lean_dec(v_k_199_);
lean_dec(v_ctorIdx_196_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___redArg(lean_object* v_auto_202_){
_start:
{
lean_inc(v_auto_202_);
return v_auto_202_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___redArg___boxed(lean_object* v_auto_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lake_AnsiMode_auto_elim___redArg(v_auto_203_);
lean_dec(v_auto_203_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim(lean_object* v_motive_205_, uint8_t v_t_206_, lean_object* v_h_207_, lean_object* v_auto_208_){
_start:
{
lean_inc(v_auto_208_);
return v_auto_208_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_auto_elim___boxed(lean_object* v_motive_209_, lean_object* v_t_210_, lean_object* v_h_211_, lean_object* v_auto_212_){
_start:
{
uint8_t v_t_boxed_213_; lean_object* v_res_214_; 
v_t_boxed_213_ = lean_unbox(v_t_210_);
v_res_214_ = l_Lake_AnsiMode_auto_elim(v_motive_209_, v_t_boxed_213_, v_h_211_, v_auto_212_);
lean_dec(v_auto_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___redArg(lean_object* v_ansi_215_){
_start:
{
lean_inc(v_ansi_215_);
return v_ansi_215_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___redArg___boxed(lean_object* v_ansi_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lake_AnsiMode_ansi_elim___redArg(v_ansi_216_);
lean_dec(v_ansi_216_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim(lean_object* v_motive_218_, uint8_t v_t_219_, lean_object* v_h_220_, lean_object* v_ansi_221_){
_start:
{
lean_inc(v_ansi_221_);
return v_ansi_221_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_ansi_elim___boxed(lean_object* v_motive_222_, lean_object* v_t_223_, lean_object* v_h_224_, lean_object* v_ansi_225_){
_start:
{
uint8_t v_t_boxed_226_; lean_object* v_res_227_; 
v_t_boxed_226_ = lean_unbox(v_t_223_);
v_res_227_ = l_Lake_AnsiMode_ansi_elim(v_motive_222_, v_t_boxed_226_, v_h_224_, v_ansi_225_);
lean_dec(v_ansi_225_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___redArg(lean_object* v_noAnsi_228_){
_start:
{
lean_inc(v_noAnsi_228_);
return v_noAnsi_228_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___redArg___boxed(lean_object* v_noAnsi_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lake_AnsiMode_noAnsi_elim___redArg(v_noAnsi_229_);
lean_dec(v_noAnsi_229_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim(lean_object* v_motive_231_, uint8_t v_t_232_, lean_object* v_h_233_, lean_object* v_noAnsi_234_){
_start:
{
lean_inc(v_noAnsi_234_);
return v_noAnsi_234_;
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_noAnsi_elim___boxed(lean_object* v_motive_235_, lean_object* v_t_236_, lean_object* v_h_237_, lean_object* v_noAnsi_238_){
_start:
{
uint8_t v_t_boxed_239_; lean_object* v_res_240_; 
v_t_boxed_239_ = lean_unbox(v_t_236_);
v_res_240_ = l_Lake_AnsiMode_noAnsi_elim(v_motive_235_, v_t_boxed_239_, v_h_237_, v_noAnsi_238_);
lean_dec(v_noAnsi_238_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprAnsiMode_repr(uint8_t v_x_250_, lean_object* v_prec_251_){
_start:
{
lean_object* v___y_253_; lean_object* v___y_260_; lean_object* v___y_267_; 
switch(v_x_250_)
{
case 0:
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = lean_unsigned_to_nat(1024u);
v___x_274_ = lean_nat_dec_le(v___x_273_, v_prec_251_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; 
v___x_275_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_253_ = v___x_275_;
goto v___jp_252_;
}
else
{
lean_object* v___x_276_; 
v___x_276_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_253_ = v___x_276_;
goto v___jp_252_;
}
}
case 1:
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = lean_unsigned_to_nat(1024u);
v___x_278_ = lean_nat_dec_le(v___x_277_, v_prec_251_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; 
v___x_279_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_260_ = v___x_279_;
goto v___jp_259_;
}
else
{
lean_object* v___x_280_; 
v___x_280_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_260_ = v___x_280_;
goto v___jp_259_;
}
}
default: 
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = lean_unsigned_to_nat(1024u);
v___x_282_ = lean_nat_dec_le(v___x_281_, v_prec_251_);
if (v___x_282_ == 0)
{
lean_object* v___x_283_; 
v___x_283_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_267_ = v___x_283_;
goto v___jp_266_;
}
else
{
lean_object* v___x_284_; 
v___x_284_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_267_ = v___x_284_;
goto v___jp_266_;
}
}
}
v___jp_252_:
{
lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_254_ = ((lean_object*)(l_Lake_instReprAnsiMode_repr___closed__1));
lean_inc(v___y_253_);
v___x_255_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_255_, 0, v___y_253_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = 0;
v___x_257_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_257_, 0, v___x_255_);
lean_ctor_set_uint8(v___x_257_, sizeof(void*)*1, v___x_256_);
v___x_258_ = l_Repr_addAppParen(v___x_257_, v_prec_251_);
return v___x_258_;
}
v___jp_259_:
{
lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_261_ = ((lean_object*)(l_Lake_instReprAnsiMode_repr___closed__3));
lean_inc(v___y_260_);
v___x_262_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_262_, 0, v___y_260_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = 0;
v___x_264_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set_uint8(v___x_264_, sizeof(void*)*1, v___x_263_);
v___x_265_ = l_Repr_addAppParen(v___x_264_, v_prec_251_);
return v___x_265_;
}
v___jp_266_:
{
lean_object* v___x_268_; lean_object* v___x_269_; uint8_t v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_268_ = ((lean_object*)(l_Lake_instReprAnsiMode_repr___closed__5));
lean_inc(v___y_267_);
v___x_269_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_269_, 0, v___y_267_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___x_270_ = 0;
v___x_271_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_271_, 0, v___x_269_);
lean_ctor_set_uint8(v___x_271_, sizeof(void*)*1, v___x_270_);
v___x_272_ = l_Repr_addAppParen(v___x_271_, v_prec_251_);
return v___x_272_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprAnsiMode_repr___boxed(lean_object* v_x_285_, lean_object* v_prec_286_){
_start:
{
uint8_t v_x_167__boxed_287_; lean_object* v_res_288_; 
v_x_167__boxed_287_ = lean_unbox(v_x_285_);
v_res_288_ = l_Lake_instReprAnsiMode_repr(v_x_167__boxed_287_, v_prec_286_);
lean_dec(v_prec_286_);
return v_res_288_;
}
}
LEAN_EXPORT uint8_t l_Lake_AnsiMode_isEnabled(lean_object* v_out_291_, uint8_t v_x_292_){
_start:
{
switch(v_x_292_)
{
case 0:
{
lean_object* v_isTty_294_; lean_object* v___x_295_; uint8_t v___x_296_; 
v_isTty_294_ = lean_ctor_get(v_out_291_, 5);
lean_inc_ref(v_isTty_294_);
lean_dec_ref(v_out_291_);
v___x_295_ = lean_apply_1(v_isTty_294_, lean_box(0));
v___x_296_ = lean_unbox(v___x_295_);
return v___x_296_;
}
case 1:
{
uint8_t v___x_297_; 
lean_dec_ref(v_out_291_);
v___x_297_ = 1;
return v___x_297_;
}
default: 
{
uint8_t v___x_298_; 
lean_dec_ref(v_out_291_);
v___x_298_ = 0;
return v___x_298_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_AnsiMode_isEnabled___boxed(lean_object* v_out_299_, lean_object* v_x_300_, lean_object* v___y_301_){
_start:
{
uint8_t v_x_80__boxed_302_; uint8_t v_res_303_; lean_object* v_r_304_; 
v_x_80__boxed_302_ = lean_unbox(v_x_300_);
v_res_303_ = l_Lake_AnsiMode_isEnabled(v_out_299_, v_x_80__boxed_302_);
v_r_304_ = lean_box(v_res_303_);
return v_r_304_;
}
}
LEAN_EXPORT lean_object* l_Lake_Ansi_chalk(lean_object* v_colorCode_308_, lean_object* v_text_309_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_310_ = ((lean_object*)(l_Lake_Ansi_chalk___closed__0));
v___x_311_ = lean_string_append(v___x_310_, v_colorCode_308_);
v___x_312_ = ((lean_object*)(l_Lake_Ansi_chalk___closed__1));
v___x_313_ = lean_string_append(v___x_311_, v___x_312_);
v___x_314_ = lean_string_append(v___x_313_, v_text_309_);
v___x_315_ = ((lean_object*)(l_Lake_Ansi_chalk___closed__2));
v___x_316_ = lean_string_append(v___x_314_, v___x_315_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lake_Ansi_chalk___boxed(lean_object* v_colorCode_317_, lean_object* v_text_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lake_Ansi_chalk(v_colorCode_317_, v_text_318_);
lean_dec_ref(v_text_318_);
lean_dec_ref(v_colorCode_317_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorIdx(lean_object* v_x_320_){
_start:
{
switch(lean_obj_tag(v_x_320_))
{
case 0:
{
lean_object* v___x_321_; 
v___x_321_ = lean_unsigned_to_nat(0u);
return v___x_321_;
}
case 1:
{
lean_object* v___x_322_; 
v___x_322_ = lean_unsigned_to_nat(1u);
return v___x_322_;
}
default: 
{
lean_object* v___x_323_; 
v___x_323_ = lean_unsigned_to_nat(2u);
return v___x_323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorIdx___boxed(lean_object* v_x_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lake_OutStream_ctorIdx(v_x_324_);
lean_dec(v_x_324_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim___redArg(lean_object* v_t_326_, lean_object* v_k_327_){
_start:
{
if (lean_obj_tag(v_t_326_) == 2)
{
lean_object* v_s_328_; lean_object* v___x_329_; 
v_s_328_ = lean_ctor_get(v_t_326_, 0);
lean_inc_ref(v_s_328_);
lean_dec_ref_known(v_t_326_, 1);
v___x_329_ = lean_apply_1(v_k_327_, v_s_328_);
return v___x_329_;
}
else
{
lean_dec(v_t_326_);
return v_k_327_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim(lean_object* v_motive_330_, lean_object* v_ctorIdx_331_, lean_object* v_t_332_, lean_object* v_h_333_, lean_object* v_k_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = l_Lake_OutStream_ctorElim___redArg(v_t_332_, v_k_334_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_ctorElim___boxed(lean_object* v_motive_336_, lean_object* v_ctorIdx_337_, lean_object* v_t_338_, lean_object* v_h_339_, lean_object* v_k_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lake_OutStream_ctorElim(v_motive_336_, v_ctorIdx_337_, v_t_338_, v_h_339_, v_k_340_);
lean_dec(v_ctorIdx_337_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stdout_elim___redArg(lean_object* v_t_342_, lean_object* v_stdout_343_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = l_Lake_OutStream_ctorElim___redArg(v_t_342_, v_stdout_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stdout_elim(lean_object* v_motive_345_, lean_object* v_t_346_, lean_object* v_h_347_, lean_object* v_stdout_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Lake_OutStream_ctorElim___redArg(v_t_346_, v_stdout_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stderr_elim___redArg(lean_object* v_t_350_, lean_object* v_stderr_351_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l_Lake_OutStream_ctorElim___redArg(v_t_350_, v_stderr_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stderr_elim(lean_object* v_motive_353_, lean_object* v_t_354_, lean_object* v_h_355_, lean_object* v_stderr_356_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l_Lake_OutStream_ctorElim___redArg(v_t_354_, v_stderr_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stream_elim___redArg(lean_object* v_t_358_, lean_object* v_stream_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lake_OutStream_ctorElim___redArg(v_t_358_, v_stream_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_stream_elim(lean_object* v_motive_361_, lean_object* v_t_362_, lean_object* v_h_363_, lean_object* v_stream_364_){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_Lake_OutStream_ctorElim___redArg(v_t_362_, v_stream_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_get(lean_object* v_x_366_){
_start:
{
switch(lean_obj_tag(v_x_366_))
{
case 0:
{
lean_object* v___x_368_; 
v___x_368_ = lean_get_stdout();
return v___x_368_;
}
case 1:
{
lean_object* v___x_369_; 
v___x_369_ = lean_get_stderr();
return v___x_369_;
}
default: 
{
lean_object* v_s_370_; 
v_s_370_ = lean_ctor_get(v_x_366_, 0);
lean_inc_ref(v_s_370_);
return v_s_370_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_get___boxed(lean_object* v_x_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lake_OutStream_get(v_x_371_);
lean_dec(v_x_371_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeStreamOutStream___lam__0(lean_object* v_s_374_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_375_, 0, v_s_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeHandleOutStream___lam__0(lean_object* v_h_378_){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_stream_of_handle(v_h_378_);
v___x_380_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorIdx(uint8_t v_x_383_){
_start:
{
switch(v_x_383_)
{
case 0:
{
lean_object* v___x_384_; 
v___x_384_ = lean_unsigned_to_nat(0u);
return v___x_384_;
}
case 1:
{
lean_object* v___x_385_; 
v___x_385_ = lean_unsigned_to_nat(1u);
return v___x_385_;
}
case 2:
{
lean_object* v___x_386_; 
v___x_386_ = lean_unsigned_to_nat(2u);
return v___x_386_;
}
default: 
{
lean_object* v___x_387_; 
v___x_387_ = lean_unsigned_to_nat(3u);
return v___x_387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorIdx___boxed(lean_object* v_x_388_){
_start:
{
uint8_t v_x_boxed_389_; lean_object* v_res_390_; 
v_x_boxed_389_ = lean_unbox(v_x_388_);
v_res_390_ = l_Lake_LogLevel_ctorIdx(v_x_boxed_389_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___redArg(lean_object* v_k_391_){
_start:
{
lean_inc(v_k_391_);
return v_k_391_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___redArg___boxed(lean_object* v_k_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lake_LogLevel_ctorElim___redArg(v_k_392_);
lean_dec(v_k_392_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim(lean_object* v_motive_394_, lean_object* v_ctorIdx_395_, uint8_t v_t_396_, lean_object* v_h_397_, lean_object* v_k_398_){
_start:
{
lean_inc(v_k_398_);
return v_k_398_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ctorElim___boxed(lean_object* v_motive_399_, lean_object* v_ctorIdx_400_, lean_object* v_t_401_, lean_object* v_h_402_, lean_object* v_k_403_){
_start:
{
uint8_t v_t_boxed_404_; lean_object* v_res_405_; 
v_t_boxed_404_ = lean_unbox(v_t_401_);
v_res_405_ = l_Lake_LogLevel_ctorElim(v_motive_399_, v_ctorIdx_400_, v_t_boxed_404_, v_h_402_, v_k_403_);
lean_dec(v_k_403_);
lean_dec(v_ctorIdx_400_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___redArg(lean_object* v_trace_406_){
_start:
{
lean_inc(v_trace_406_);
return v_trace_406_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___redArg___boxed(lean_object* v_trace_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lake_LogLevel_trace_elim___redArg(v_trace_407_);
lean_dec(v_trace_407_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim(lean_object* v_motive_409_, uint8_t v_t_410_, lean_object* v_h_411_, lean_object* v_trace_412_){
_start:
{
lean_inc(v_trace_412_);
return v_trace_412_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_trace_elim___boxed(lean_object* v_motive_413_, lean_object* v_t_414_, lean_object* v_h_415_, lean_object* v_trace_416_){
_start:
{
uint8_t v_t_boxed_417_; lean_object* v_res_418_; 
v_t_boxed_417_ = lean_unbox(v_t_414_);
v_res_418_ = l_Lake_LogLevel_trace_elim(v_motive_413_, v_t_boxed_417_, v_h_415_, v_trace_416_);
lean_dec(v_trace_416_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___redArg(lean_object* v_info_419_){
_start:
{
lean_inc(v_info_419_);
return v_info_419_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___redArg___boxed(lean_object* v_info_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lake_LogLevel_info_elim___redArg(v_info_420_);
lean_dec(v_info_420_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim(lean_object* v_motive_422_, uint8_t v_t_423_, lean_object* v_h_424_, lean_object* v_info_425_){
_start:
{
lean_inc(v_info_425_);
return v_info_425_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_info_elim___boxed(lean_object* v_motive_426_, lean_object* v_t_427_, lean_object* v_h_428_, lean_object* v_info_429_){
_start:
{
uint8_t v_t_boxed_430_; lean_object* v_res_431_; 
v_t_boxed_430_ = lean_unbox(v_t_427_);
v_res_431_ = l_Lake_LogLevel_info_elim(v_motive_426_, v_t_boxed_430_, v_h_428_, v_info_429_);
lean_dec(v_info_429_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___redArg(lean_object* v_warning_432_){
_start:
{
lean_inc(v_warning_432_);
return v_warning_432_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___redArg___boxed(lean_object* v_warning_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lake_LogLevel_warning_elim___redArg(v_warning_433_);
lean_dec(v_warning_433_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim(lean_object* v_motive_435_, uint8_t v_t_436_, lean_object* v_h_437_, lean_object* v_warning_438_){
_start:
{
lean_inc(v_warning_438_);
return v_warning_438_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_warning_elim___boxed(lean_object* v_motive_439_, lean_object* v_t_440_, lean_object* v_h_441_, lean_object* v_warning_442_){
_start:
{
uint8_t v_t_boxed_443_; lean_object* v_res_444_; 
v_t_boxed_443_ = lean_unbox(v_t_440_);
v_res_444_ = l_Lake_LogLevel_warning_elim(v_motive_439_, v_t_boxed_443_, v_h_441_, v_warning_442_);
lean_dec(v_warning_442_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___redArg(lean_object* v_error_445_){
_start:
{
lean_inc(v_error_445_);
return v_error_445_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___redArg___boxed(lean_object* v_error_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lake_LogLevel_error_elim___redArg(v_error_446_);
lean_dec(v_error_446_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim(lean_object* v_motive_448_, uint8_t v_t_449_, lean_object* v_h_450_, lean_object* v_error_451_){
_start:
{
lean_inc(v_error_451_);
return v_error_451_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_error_elim___boxed(lean_object* v_motive_452_, lean_object* v_t_453_, lean_object* v_h_454_, lean_object* v_error_455_){
_start:
{
uint8_t v_t_boxed_456_; lean_object* v_res_457_; 
v_t_boxed_456_ = lean_unbox(v_t_453_);
v_res_457_ = l_Lake_LogLevel_error_elim(v_motive_452_, v_t_boxed_456_, v_h_454_, v_error_455_);
lean_dec(v_error_455_);
return v_res_457_;
}
}
static uint8_t _init_l_Lake_instInhabitedLogLevel_default(void){
_start:
{
uint8_t v___x_458_; 
v___x_458_ = 0;
return v___x_458_;
}
}
static uint8_t _init_l_Lake_instInhabitedLogLevel(void){
_start:
{
uint8_t v___x_459_; 
v___x_459_ = 0;
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprLogLevel_repr(uint8_t v_x_472_, lean_object* v_prec_473_){
_start:
{
lean_object* v___y_475_; lean_object* v___y_482_; lean_object* v___y_489_; lean_object* v___y_496_; 
switch(v_x_472_)
{
case 0:
{
lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_502_ = lean_unsigned_to_nat(1024u);
v___x_503_ = lean_nat_dec_le(v___x_502_, v_prec_473_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; 
v___x_504_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_475_ = v___x_504_;
goto v___jp_474_;
}
else
{
lean_object* v___x_505_; 
v___x_505_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_475_ = v___x_505_;
goto v___jp_474_;
}
}
case 1:
{
lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_506_ = lean_unsigned_to_nat(1024u);
v___x_507_ = lean_nat_dec_le(v___x_506_, v_prec_473_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; 
v___x_508_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_482_ = v___x_508_;
goto v___jp_481_;
}
else
{
lean_object* v___x_509_; 
v___x_509_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_482_ = v___x_509_;
goto v___jp_481_;
}
}
case 2:
{
lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_510_ = lean_unsigned_to_nat(1024u);
v___x_511_ = lean_nat_dec_le(v___x_510_, v_prec_473_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; 
v___x_512_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_489_ = v___x_512_;
goto v___jp_488_;
}
else
{
lean_object* v___x_513_; 
v___x_513_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_489_ = v___x_513_;
goto v___jp_488_;
}
}
default: 
{
lean_object* v___x_514_; uint8_t v___x_515_; 
v___x_514_ = lean_unsigned_to_nat(1024u);
v___x_515_ = lean_nat_dec_le(v___x_514_, v_prec_473_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; 
v___x_516_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__6, &l_Lake_instReprVerbosity_repr___closed__6_once, _init_l_Lake_instReprVerbosity_repr___closed__6);
v___y_496_ = v___x_516_;
goto v___jp_495_;
}
else
{
lean_object* v___x_517_; 
v___x_517_ = lean_obj_once(&l_Lake_instReprVerbosity_repr___closed__7, &l_Lake_instReprVerbosity_repr___closed__7_once, _init_l_Lake_instReprVerbosity_repr___closed__7);
v___y_496_ = v___x_517_;
goto v___jp_495_;
}
}
}
v___jp_474_:
{
lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_476_ = ((lean_object*)(l_Lake_instReprLogLevel_repr___closed__1));
lean_inc(v___y_475_);
v___x_477_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_477_, 0, v___y_475_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = 0;
v___x_479_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_479_, 0, v___x_477_);
lean_ctor_set_uint8(v___x_479_, sizeof(void*)*1, v___x_478_);
v___x_480_ = l_Repr_addAppParen(v___x_479_, v_prec_473_);
return v___x_480_;
}
v___jp_481_:
{
lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_483_ = ((lean_object*)(l_Lake_instReprLogLevel_repr___closed__3));
lean_inc(v___y_482_);
v___x_484_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_484_, 0, v___y_482_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = 0;
v___x_486_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_486_, 0, v___x_484_);
lean_ctor_set_uint8(v___x_486_, sizeof(void*)*1, v___x_485_);
v___x_487_ = l_Repr_addAppParen(v___x_486_, v_prec_473_);
return v___x_487_;
}
v___jp_488_:
{
lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_490_ = ((lean_object*)(l_Lake_instReprLogLevel_repr___closed__5));
lean_inc(v___y_489_);
v___x_491_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_491_, 0, v___y_489_);
lean_ctor_set(v___x_491_, 1, v___x_490_);
v___x_492_ = 0;
v___x_493_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set_uint8(v___x_493_, sizeof(void*)*1, v___x_492_);
v___x_494_ = l_Repr_addAppParen(v___x_493_, v_prec_473_);
return v___x_494_;
}
v___jp_495_:
{
lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_497_ = ((lean_object*)(l_Lake_instReprLogLevel_repr___closed__7));
lean_inc(v___y_496_);
v___x_498_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_498_, 0, v___y_496_);
lean_ctor_set(v___x_498_, 1, v___x_497_);
v___x_499_ = 0;
v___x_500_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set_uint8(v___x_500_, sizeof(void*)*1, v___x_499_);
v___x_501_ = l_Repr_addAppParen(v___x_500_, v_prec_473_);
return v___x_501_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprLogLevel_repr___boxed(lean_object* v_x_518_, lean_object* v_prec_519_){
_start:
{
uint8_t v_x_221__boxed_520_; lean_object* v_res_521_; 
v_x_221__boxed_520_ = lean_unbox(v_x_518_);
v_res_521_ = l_Lake_instReprLogLevel_repr(v_x_221__boxed_520_, v_prec_519_);
lean_dec(v_prec_519_);
return v_res_521_;
}
}
LEAN_EXPORT uint8_t l_Lake_LogLevel_ofNat(lean_object* v_n_524_){
_start:
{
lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_525_ = lean_unsigned_to_nat(1u);
v___x_526_ = lean_nat_dec_le(v_n_524_, v___x_525_);
if (v___x_526_ == 0)
{
lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_527_ = lean_unsigned_to_nat(2u);
v___x_528_ = lean_nat_dec_le(v_n_524_, v___x_527_);
if (v___x_528_ == 0)
{
uint8_t v___x_529_; 
v___x_529_ = 3;
return v___x_529_;
}
else
{
uint8_t v___x_530_; 
v___x_530_ = 2;
return v___x_530_;
}
}
else
{
lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_531_ = lean_unsigned_to_nat(0u);
v___x_532_ = lean_nat_dec_le(v_n_524_, v___x_531_);
if (v___x_532_ == 0)
{
uint8_t v___x_533_; 
v___x_533_ = 1;
return v___x_533_;
}
else
{
uint8_t v___x_534_; 
v___x_534_ = 0;
return v___x_534_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofNat___boxed(lean_object* v_n_535_){
_start:
{
uint8_t v_res_536_; lean_object* v_r_537_; 
v_res_536_ = l_Lake_LogLevel_ofNat(v_n_535_);
lean_dec(v_n_535_);
v_r_537_ = lean_box(v_res_536_);
return v_r_537_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqLogLevel(uint8_t v_x_538_, uint8_t v_y_539_){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; uint8_t v___x_542_; 
v___x_540_ = l_Lake_LogLevel_ctorIdx(v_x_538_);
v___x_541_ = l_Lake_LogLevel_ctorIdx(v_y_539_);
v___x_542_ = lean_nat_dec_eq(v___x_540_, v___x_541_);
lean_dec(v___x_541_);
lean_dec(v___x_540_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqLogLevel___boxed(lean_object* v_x_543_, lean_object* v_y_544_){
_start:
{
uint8_t v_x_20__boxed_545_; uint8_t v_y_21__boxed_546_; uint8_t v_res_547_; lean_object* v_r_548_; 
v_x_20__boxed_545_ = lean_unbox(v_x_543_);
v_y_21__boxed_546_ = lean_unbox(v_y_544_);
v_res_547_ = l_Lake_instDecidableEqLogLevel(v_x_20__boxed_545_, v_y_21__boxed_546_);
v_r_548_ = lean_box(v_res_547_);
return v_r_548_;
}
}
LEAN_EXPORT uint8_t l_Lake_instOrdLogLevel_ord(uint8_t v_x_549_, uint8_t v_y_550_){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_551_ = l_Lake_LogLevel_ctorIdx(v_x_549_);
v___x_552_ = l_Lake_LogLevel_ctorIdx(v_y_550_);
v___x_553_ = lean_nat_dec_lt(v___x_551_, v___x_552_);
if (v___x_553_ == 0)
{
uint8_t v___x_554_; 
v___x_554_ = lean_nat_dec_eq(v___x_551_, v___x_552_);
lean_dec(v___x_552_);
lean_dec(v___x_551_);
if (v___x_554_ == 0)
{
uint8_t v___x_555_; 
v___x_555_ = 2;
return v___x_555_;
}
else
{
uint8_t v___x_556_; 
v___x_556_ = 1;
return v___x_556_;
}
}
else
{
uint8_t v___x_557_; 
lean_dec(v___x_552_);
lean_dec(v___x_551_);
v___x_557_ = 0;
return v___x_557_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instOrdLogLevel_ord___boxed(lean_object* v_x_558_, lean_object* v_y_559_){
_start:
{
uint8_t v_x_30__boxed_560_; uint8_t v_y_31__boxed_561_; uint8_t v_res_562_; lean_object* v_r_563_; 
v_x_30__boxed_560_ = lean_unbox(v_x_558_);
v_y_31__boxed_561_ = lean_unbox(v_y_559_);
v_res_562_ = l_Lake_instOrdLogLevel_ord(v_x_30__boxed_560_, v_y_31__boxed_561_);
v_r_563_ = lean_box(v_res_562_);
return v_r_563_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonLogLevel_toJson(uint8_t v_x_578_){
_start:
{
switch(v_x_578_)
{
case 0:
{
lean_object* v___x_579_; 
v___x_579_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__1));
return v___x_579_;
}
case 1:
{
lean_object* v___x_580_; 
v___x_580_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__3));
return v___x_580_;
}
case 2:
{
lean_object* v___x_581_; 
v___x_581_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__5));
return v___x_581_;
}
default: 
{
lean_object* v___x_582_; 
v___x_582_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__7));
return v___x_582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonLogLevel_toJson___boxed(lean_object* v_x_583_){
_start:
{
uint8_t v_x_88__boxed_584_; lean_object* v_res_585_; 
v_x_88__boxed_584_ = lean_unbox(v_x_583_);
v_res_585_ = l_Lake_instToJsonLogLevel_toJson(v_x_88__boxed_584_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lake_instFromJsonLogLevel_fromJson(lean_object* v_json_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lean_Json_getTag_x3f(v_json_606_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v___x_608_; 
v___x_608_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__1));
return v___x_608_;
}
else
{
lean_object* v_val_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
v_val_609_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_val_609_);
lean_dec_ref_known(v___x_607_, 1);
v___x_610_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__6));
v___x_611_ = lean_string_dec_eq(v_val_609_, v___x_610_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; uint8_t v___x_613_; 
v___x_612_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__0));
v___x_613_ = lean_string_dec_eq(v_val_609_, v___x_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_614_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__2));
v___x_615_ = lean_string_dec_eq(v_val_609_, v___x_614_);
if (v___x_615_ == 0)
{
lean_object* v___x_616_; uint8_t v___x_617_; 
v___x_616_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__4));
v___x_617_ = lean_string_dec_eq(v_val_609_, v___x_616_);
lean_dec(v_val_609_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; 
v___x_618_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__3));
return v___x_618_;
}
else
{
lean_object* v___x_619_; 
v___x_619_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__4));
return v___x_619_;
}
}
else
{
lean_object* v___x_620_; 
lean_dec(v_val_609_);
v___x_620_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__5));
return v___x_620_;
}
}
else
{
lean_object* v___x_621_; 
lean_dec(v_val_609_);
v___x_621_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__6));
return v___x_621_;
}
}
else
{
lean_object* v___x_622_; 
lean_dec(v_val_609_);
v___x_622_ = ((lean_object*)(l_Lake_instFromJsonLogLevel_fromJson___closed__7));
return v___x_622_;
}
}
}
}
static lean_object* _init_l_Lake_instLTLogLevel(void){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = lean_box(0);
return v___x_625_;
}
}
static lean_object* _init_l_Lake_instLELogLevel(void){
_start:
{
lean_object* v___x_626_; 
v___x_626_ = lean_box(0);
return v___x_626_;
}
}
LEAN_EXPORT uint8_t l_Lake_instMinLogLevel___lam__0(uint8_t v_x_627_, uint8_t v_y_628_){
_start:
{
uint8_t v___x_629_; 
v___x_629_ = l_Lake_instOrdLogLevel_ord(v_x_627_, v_y_628_);
if (v___x_629_ == 2)
{
return v_y_628_;
}
else
{
return v_x_627_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMinLogLevel___lam__0___boxed(lean_object* v_x_630_, lean_object* v_y_631_){
_start:
{
uint8_t v_x_boxed_632_; uint8_t v_y_boxed_633_; uint8_t v_res_634_; lean_object* v_r_635_; 
v_x_boxed_632_ = lean_unbox(v_x_630_);
v_y_boxed_633_ = lean_unbox(v_y_631_);
v_res_634_ = l_Lake_instMinLogLevel___lam__0(v_x_boxed_632_, v_y_boxed_633_);
v_r_635_ = lean_box(v_res_634_);
return v_r_635_;
}
}
LEAN_EXPORT uint8_t l_Lake_instMaxLogLevel___lam__0(uint8_t v_x_638_, uint8_t v_y_639_){
_start:
{
uint8_t v___x_640_; 
v___x_640_ = l_Lake_instOrdLogLevel_ord(v_x_638_, v_y_639_);
if (v___x_640_ == 2)
{
return v_x_638_;
}
else
{
return v_y_639_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMaxLogLevel___lam__0___boxed(lean_object* v_x_641_, lean_object* v_y_642_){
_start:
{
uint8_t v_x_boxed_643_; uint8_t v_y_boxed_644_; uint8_t v_res_645_; lean_object* v_r_646_; 
v_x_boxed_643_ = lean_unbox(v_x_641_);
v_y_boxed_644_ = lean_unbox(v_y_642_);
v_res_645_ = l_Lake_instMaxLogLevel___lam__0(v_x_boxed_643_, v_y_boxed_644_);
v_r_646_ = lean_box(v_res_645_);
return v_r_646_;
}
}
LEAN_EXPORT uint32_t l_Lake_LogLevel_icon(uint8_t v_x_649_){
_start:
{
switch(v_x_649_)
{
case 2:
{
uint32_t v___x_650_; 
v___x_650_ = 9888;
return v___x_650_;
}
case 3:
{
uint32_t v___x_651_; 
v___x_651_ = 10006;
return v___x_651_;
}
default: 
{
uint32_t v___x_652_; 
v___x_652_ = 8505;
return v___x_652_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_icon___boxed(lean_object* v_x_653_){
_start:
{
uint8_t v_x_33__boxed_654_; uint32_t v_res_655_; lean_object* v_r_656_; 
v_x_33__boxed_654_ = lean_unbox(v_x_653_);
v_res_655_ = l_Lake_LogLevel_icon(v_x_33__boxed_654_);
v_r_656_ = lean_box_uint32(v_res_655_);
return v_r_656_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ansiColor(uint8_t v_x_660_){
_start:
{
switch(v_x_660_)
{
case 2:
{
lean_object* v___x_661_; 
v___x_661_ = ((lean_object*)(l_Lake_LogLevel_ansiColor___closed__0));
return v___x_661_;
}
case 3:
{
lean_object* v___x_662_; 
v___x_662_ = ((lean_object*)(l_Lake_LogLevel_ansiColor___closed__1));
return v___x_662_;
}
default: 
{
lean_object* v___x_663_; 
v___x_663_ = ((lean_object*)(l_Lake_LogLevel_ansiColor___closed__2));
return v___x_663_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ansiColor___boxed(lean_object* v_x_664_){
_start:
{
uint8_t v_x_36__boxed_665_; lean_object* v_res_666_; 
v_x_36__boxed_665_ = lean_unbox(v_x_664_);
v_res_666_ = l_Lake_LogLevel_ansiColor(v_x_36__boxed_665_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00Lake_LogLevel_ofString_x3f_spec__0(lean_object* v_s_667_, lean_object* v_p_668_){
_start:
{
uint32_t v___y_670_; lean_object* v___x_675_; uint8_t v_decide_676_; 
v___x_675_ = lean_string_utf8_byte_size(v_s_667_);
v_decide_676_ = lean_nat_dec_eq(v_p_668_, v___x_675_);
if (v_decide_676_ == 0)
{
uint32_t v___x_677_; uint8_t v___y_679_; uint32_t v___x_682_; uint8_t v___x_683_; 
v___x_677_ = lean_string_utf8_get_fast(v_s_667_, v_p_668_);
v___x_682_ = 65;
v___x_683_ = lean_uint32_dec_le(v___x_682_, v___x_677_);
if (v___x_683_ == 0)
{
v___y_679_ = v___x_683_;
goto v___jp_678_;
}
else
{
uint32_t v___x_684_; uint8_t v___x_685_; 
v___x_684_ = 90;
v___x_685_ = lean_uint32_dec_le(v___x_677_, v___x_684_);
v___y_679_ = v___x_685_;
goto v___jp_678_;
}
v___jp_678_:
{
if (v___y_679_ == 0)
{
v___y_670_ = v___x_677_;
goto v___jp_669_;
}
else
{
uint32_t v___x_680_; uint32_t v___x_681_; 
v___x_680_ = 32;
v___x_681_ = lean_uint32_add(v___x_677_, v___x_680_);
v___y_670_ = v___x_681_;
goto v___jp_669_;
}
}
}
else
{
lean_dec(v_p_668_);
return v_s_667_;
}
v___jp_669_:
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
lean_inc(v_p_668_);
v___x_671_ = lean_string_utf8_set(v_s_667_, v_p_668_, v___y_670_);
v___x_672_ = l_Char_utf8Size(v___y_670_);
v___x_673_ = lean_nat_add(v_p_668_, v___x_672_);
lean_dec(v___x_672_);
lean_dec(v_p_668_);
v_s_667_ = v___x_671_;
v_p_668_ = v___x_673_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofString_x3f(lean_object* v_s_700_){
_start:
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_705_ = lean_unsigned_to_nat(0u);
v___x_706_ = l_String_mapAux___at___00Lake_LogLevel_ofString_x3f_spec__0(v_s_700_, v___x_705_);
v___x_707_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__0));
v___x_708_ = lean_string_dec_eq(v___x_706_, v___x_707_);
if (v___x_708_ == 0)
{
lean_object* v___x_709_; uint8_t v___x_710_; 
v___x_709_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__2));
v___x_710_ = lean_string_dec_eq(v___x_706_, v___x_709_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; uint8_t v___x_712_; 
v___x_711_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__2));
v___x_712_ = lean_string_dec_eq(v___x_706_, v___x_711_);
if (v___x_712_ == 0)
{
lean_object* v___x_713_; uint8_t v___x_714_; 
v___x_713_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__3));
v___x_714_ = lean_string_dec_eq(v___x_706_, v___x_713_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; uint8_t v___x_716_; 
v___x_715_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__4));
v___x_716_ = lean_string_dec_eq(v___x_706_, v___x_715_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; uint8_t v___x_718_; 
v___x_717_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__6));
v___x_718_ = lean_string_dec_eq(v___x_706_, v___x_717_);
lean_dec_ref(v___x_706_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; 
v___x_719_ = lean_box(0);
return v___x_719_;
}
else
{
lean_object* v___x_720_; 
v___x_720_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__4));
return v___x_720_;
}
}
else
{
lean_dec_ref(v___x_706_);
goto v___jp_703_;
}
}
else
{
lean_dec_ref(v___x_706_);
goto v___jp_703_;
}
}
else
{
lean_dec_ref(v___x_706_);
goto v___jp_701_;
}
}
else
{
lean_dec_ref(v___x_706_);
goto v___jp_701_;
}
}
else
{
lean_object* v___x_721_; 
lean_dec_ref(v___x_706_);
v___x_721_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__5));
return v___x_721_;
}
v___jp_701_:
{
lean_object* v___x_702_; 
v___x_702_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__0));
return v___x_702_;
}
v___jp_703_:
{
lean_object* v___x_704_; 
v___x_704_ = ((lean_object*)(l_Lake_LogLevel_ofString_x3f___closed__1));
return v___x_704_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_toString(uint8_t v_x_722_){
_start:
{
switch(v_x_722_)
{
case 0:
{
lean_object* v___x_723_; 
v___x_723_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__0));
return v___x_723_;
}
case 1:
{
lean_object* v___x_724_; 
v___x_724_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__2));
return v___x_724_;
}
case 2:
{
lean_object* v___x_725_; 
v___x_725_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__4));
return v___x_725_;
}
default: 
{
lean_object* v___x_726_; 
v___x_726_ = ((lean_object*)(l_Lake_instToJsonLogLevel_toJson___closed__6));
return v___x_726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_toString___boxed(lean_object* v_x_727_){
_start:
{
uint8_t v_x_36__boxed_728_; lean_object* v_res_729_; 
v_x_36__boxed_728_ = lean_unbox(v_x_727_);
v_res_729_ = l_Lake_LogLevel_toString(v_x_36__boxed_728_);
return v_res_729_;
}
}
LEAN_EXPORT uint8_t l_Lake_LogLevel_ofMessageSeverity(uint8_t v_x_732_){
_start:
{
switch(v_x_732_)
{
case 0:
{
uint8_t v___x_733_; 
v___x_733_ = 1;
return v___x_733_;
}
case 1:
{
uint8_t v___x_734_; 
v___x_734_ = 2;
return v___x_734_;
}
default: 
{
uint8_t v___x_735_; 
v___x_735_ = 3;
return v___x_735_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_ofMessageSeverity___boxed(lean_object* v_x_736_){
_start:
{
uint8_t v_x_25__boxed_737_; uint8_t v_res_738_; lean_object* v_r_739_; 
v_x_25__boxed_737_ = lean_unbox(v_x_736_);
v_res_738_ = l_Lake_LogLevel_ofMessageSeverity(v_x_25__boxed_737_);
v_r_739_ = lean_box(v_res_738_);
return v_r_739_;
}
}
LEAN_EXPORT uint8_t l_Lake_LogLevel_toMessageSeverity(uint8_t v_x_740_){
_start:
{
switch(v_x_740_)
{
case 2:
{
uint8_t v___x_741_; 
v___x_741_ = 1;
return v___x_741_;
}
case 3:
{
uint8_t v___x_742_; 
v___x_742_ = 2;
return v___x_742_;
}
default: 
{
uint8_t v___x_743_; 
v___x_743_ = 0;
return v___x_743_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogLevel_toMessageSeverity___boxed(lean_object* v_x_744_){
_start:
{
uint8_t v_x_30__boxed_745_; uint8_t v_res_746_; lean_object* v_r_747_; 
v_x_30__boxed_745_ = lean_unbox(v_x_744_);
v_res_746_ = l_Lake_LogLevel_toMessageSeverity(v_x_30__boxed_745_);
v_r_747_ = lean_box(v_res_746_);
return v_r_747_;
}
}
LEAN_EXPORT uint8_t l_Lake_Verbosity_minLogLv(uint8_t v_x_748_){
_start:
{
switch(v_x_748_)
{
case 0:
{
uint8_t v___x_749_; 
v___x_749_ = 2;
return v___x_749_;
}
case 1:
{
uint8_t v___x_750_; 
v___x_750_ = 1;
return v___x_750_;
}
default: 
{
uint8_t v___x_751_; 
v___x_751_ = 0;
return v___x_751_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Verbosity_minLogLv___boxed(lean_object* v_x_752_){
_start:
{
uint8_t v_x_25__boxed_753_; uint8_t v_res_754_; lean_object* v_r_755_; 
v_x_25__boxed_753_ = lean_unbox(v_x_752_);
v_res_754_ = l_Lake_Verbosity_minLogLv(v_x_25__boxed_753_);
v_r_755_ = lean_box(v_res_754_);
return v_r_755_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lake_instToJsonLogEntry_toJson_spec__0(lean_object* v_a_762_, lean_object* v_a_763_){
_start:
{
if (lean_obj_tag(v_a_762_) == 0)
{
lean_object* v___x_764_; 
v___x_764_ = lean_array_to_list(v_a_763_);
return v___x_764_;
}
else
{
lean_object* v_head_765_; lean_object* v_tail_766_; lean_object* v___x_767_; 
v_head_765_ = lean_ctor_get(v_a_762_, 0);
lean_inc(v_head_765_);
v_tail_766_ = lean_ctor_get(v_a_762_, 1);
lean_inc(v_tail_766_);
lean_dec_ref_known(v_a_762_, 2);
v___x_767_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_763_, v_head_765_);
v_a_762_ = v_tail_766_;
v_a_763_ = v___x_767_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonLogEntry_toJson(lean_object* v_x_773_){
_start:
{
uint8_t v_level_774_; lean_object* v_message_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v_level_774_ = lean_ctor_get_uint8(v_x_773_, sizeof(void*)*1);
v_message_775_ = lean_ctor_get(v_x_773_, 0);
v___x_776_ = ((lean_object*)(l_Lake_instToJsonLogEntry_toJson___closed__0));
v___x_777_ = l_Lake_instToJsonLogLevel_toJson(v_level_774_);
v___x_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_776_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
v___x_779_ = lean_box(0);
v___x_780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_778_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
v___x_781_ = ((lean_object*)(l_Lake_instToJsonLogEntry_toJson___closed__1));
lean_inc_ref(v_message_775_);
v___x_782_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_782_, 0, v_message_775_);
v___x_783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_781_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
lean_ctor_set(v___x_784_, 1, v___x_779_);
v___x_785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
lean_ctor_set(v___x_785_, 1, v___x_779_);
v___x_786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_780_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = ((lean_object*)(l_Lake_instToJsonLogEntry_toJson___closed__2));
v___x_788_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lake_instToJsonLogEntry_toJson_spec__0(v___x_786_, v___x_787_);
v___x_789_ = l_Lean_Json_mkObj(v___x_788_);
lean_dec(v___x_788_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonLogEntry_toJson___boxed(lean_object* v_x_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lake_instToJsonLogEntry_toJson(v_x_790_);
lean_dec_ref(v_x_790_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0(lean_object* v_j_794_, lean_object* v_k_795_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = l_Lean_Json_getObjValD(v_j_794_, v_k_795_);
v___x_797_ = l_Lake_instFromJsonLogLevel_fromJson(v___x_796_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0___boxed(lean_object* v_j_798_, lean_object* v_k_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0(v_j_798_, v_k_799_);
lean_dec_ref(v_k_799_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1(lean_object* v_j_801_, lean_object* v_k_802_){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_803_ = l_Lean_Json_getObjValD(v_j_801_, v_k_802_);
v___x_804_ = l_Lean_Json_getStr_x3f(v___x_803_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1___boxed(lean_object* v_j_805_, lean_object* v_k_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1(v_j_805_, v_k_806_);
lean_dec_ref(v_k_806_);
return v_res_807_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__3(void){
_start:
{
uint8_t v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = 1;
v___x_814_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__2));
v___x_815_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_814_, v___x_813_);
return v___x_815_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__5(void){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_817_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__4));
v___x_818_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__3, &l_Lake_instFromJsonLogEntry_fromJson___closed__3_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__3);
v___x_819_ = lean_string_append(v___x_818_, v___x_817_);
return v___x_819_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__7(void){
_start:
{
uint8_t v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_822_ = 1;
v___x_823_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__6));
v___x_824_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_823_, v___x_822_);
return v___x_824_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__8(void){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_825_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__7, &l_Lake_instFromJsonLogEntry_fromJson___closed__7_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__7);
v___x_826_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__5, &l_Lake_instFromJsonLogEntry_fromJson___closed__5_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__5);
v___x_827_ = lean_string_append(v___x_826_, v___x_825_);
return v___x_827_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__10(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__9));
v___x_830_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__8, &l_Lake_instFromJsonLogEntry_fromJson___closed__8_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__8);
v___x_831_ = lean_string_append(v___x_830_, v___x_829_);
return v___x_831_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__12(void){
_start:
{
uint8_t v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_834_ = 1;
v___x_835_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__11));
v___x_836_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_835_, v___x_834_);
return v___x_836_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__13(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__12, &l_Lake_instFromJsonLogEntry_fromJson___closed__12_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__12);
v___x_838_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__5, &l_Lake_instFromJsonLogEntry_fromJson___closed__5_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__5);
v___x_839_ = lean_string_append(v___x_838_, v___x_837_);
return v___x_839_;
}
}
static lean_object* _init_l_Lake_instFromJsonLogEntry_fromJson___closed__14(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_840_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__9));
v___x_841_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__13, &l_Lake_instFromJsonLogEntry_fromJson___closed__13_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__13);
v___x_842_ = lean_string_append(v___x_841_, v___x_840_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lake_instFromJsonLogEntry_fromJson(lean_object* v_json_843_){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = ((lean_object*)(l_Lake_instToJsonLogEntry_toJson___closed__0));
lean_inc(v_json_843_);
v___x_845_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__0(v_json_843_, v___x_844_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_855_; 
lean_dec(v_json_843_);
v_a_846_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_855_ == 0)
{
v___x_848_ = v___x_845_;
v_isShared_849_ = v_isSharedCheck_855_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_845_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_855_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_853_; 
v___x_850_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__10, &l_Lake_instFromJsonLogEntry_fromJson___closed__10_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__10);
v___x_851_ = lean_string_append(v___x_850_, v_a_846_);
lean_dec(v_a_846_);
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 0, v___x_851_);
v___x_853_ = v___x_848_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v___x_851_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
else
{
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
lean_dec(v_json_843_);
v_a_856_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_845_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_845_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
lean_ctor_set_tag(v___x_858_, 0);
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_a_864_ = lean_ctor_get(v___x_845_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_845_, 1);
v___x_865_ = ((lean_object*)(l_Lake_instToJsonLogEntry_toJson___closed__1));
v___x_866_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_instFromJsonLogEntry_fromJson_spec__1(v_json_843_, v___x_865_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_876_; 
lean_dec(v_a_864_);
v_a_867_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_876_ == 0)
{
v___x_869_ = v___x_866_;
v_isShared_870_ = v_isSharedCheck_876_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_866_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_876_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_874_; 
v___x_871_ = lean_obj_once(&l_Lake_instFromJsonLogEntry_fromJson___closed__14, &l_Lake_instFromJsonLogEntry_fromJson___closed__14_once, _init_l_Lake_instFromJsonLogEntry_fromJson___closed__14);
v___x_872_ = lean_string_append(v___x_871_, v_a_867_);
lean_dec(v_a_867_);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 0, v___x_872_);
v___x_874_ = v___x_869_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
else
{
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_dec(v_a_864_);
v_a_877_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_866_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_866_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set_tag(v___x_879_, 0);
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_894_; 
v_a_885_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_894_ == 0)
{
v___x_887_ = v___x_866_;
v_isShared_888_ = v_isSharedCheck_894_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_866_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_894_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_889_; uint8_t v___x_890_; lean_object* v___x_892_; 
v___x_889_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_889_, 0, v_a_885_);
v___x_890_ = lean_unbox(v_a_864_);
lean_dec(v_a_864_);
lean_ctor_set_uint8(v___x_889_, sizeof(void*)*1, v___x_890_);
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_889_);
v___x_892_ = v___x_887_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_889_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_toString(lean_object* v_self_899_, uint8_t v_useAnsi_900_){
_start:
{
if (v_useAnsi_900_ == 0)
{
uint8_t v_level_901_; lean_object* v_message_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_level_901_ = lean_ctor_get_uint8(v_self_899_, sizeof(void*)*1);
v_message_902_ = lean_ctor_get(v_self_899_, 0);
v___x_903_ = l_Lake_LogLevel_toString(v_level_901_);
v___x_904_ = ((lean_object*)(l_Lake_instFromJsonLogEntry_fromJson___closed__9));
v___x_905_ = lean_string_append(v___x_903_, v___x_904_);
v___x_906_ = lean_string_append(v___x_905_, v_message_902_);
return v___x_906_;
}
else
{
uint8_t v_level_907_; lean_object* v_message_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v_pre_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_level_907_ = lean_ctor_get_uint8(v_self_899_, sizeof(void*)*1);
v_message_908_ = lean_ctor_get(v_self_899_, 0);
v___x_909_ = l_Lake_LogLevel_ansiColor(v_level_907_);
v___x_910_ = l_Lake_LogLevel_toString(v_level_907_);
v___x_911_ = ((lean_object*)(l_Lake_LogEntry_toString___closed__0));
v___x_912_ = lean_string_append(v___x_910_, v___x_911_);
v_pre_913_ = l_Lake_Ansi_chalk(v___x_909_, v___x_912_);
lean_dec_ref(v___x_912_);
lean_dec_ref(v___x_909_);
v___x_914_ = ((lean_object*)(l_Lake_LogEntry_toString___closed__1));
v___x_915_ = lean_string_append(v_pre_913_, v___x_914_);
v___x_916_ = lean_string_append(v___x_915_, v_message_908_);
return v___x_916_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_toString___boxed(lean_object* v_self_917_, lean_object* v_useAnsi_918_){
_start:
{
uint8_t v_useAnsi_boxed_919_; lean_object* v_res_920_; 
v_useAnsi_boxed_919_ = lean_unbox(v_useAnsi_918_);
v_res_920_ = l_Lake_LogEntry_toString(v_self_917_, v_useAnsi_boxed_919_);
lean_dec_ref(v_self_917_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToStringLogEntry___lam__0(lean_object* v_self_921_){
_start:
{
uint8_t v___x_922_; lean_object* v___x_923_; 
v___x_922_ = 0;
v___x_923_ = l_Lake_LogEntry_toString(v_self_921_, v___x_922_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToStringLogEntry___lam__0___boxed(lean_object* v_self_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Lake_instToStringLogEntry___lam__0(v_self_924_);
lean_dec_ref(v_self_924_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_trace(lean_object* v_message_928_){
_start:
{
uint8_t v___x_929_; lean_object* v___x_930_; 
v___x_929_ = 0;
v___x_930_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_930_, 0, v_message_928_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*1, v___x_929_);
return v___x_930_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_info(lean_object* v_message_931_){
_start:
{
uint8_t v___x_932_; lean_object* v___x_933_; 
v___x_932_ = 1;
v___x_933_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_933_, 0, v_message_931_);
lean_ctor_set_uint8(v___x_933_, sizeof(void*)*1, v___x_932_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_warning(lean_object* v_message_934_){
_start:
{
uint8_t v___x_935_; lean_object* v___x_936_; 
v___x_935_ = 2;
v___x_936_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_936_, 0, v_message_934_);
lean_ctor_set_uint8(v___x_936_, sizeof(void*)*1, v___x_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_error(lean_object* v_message_937_){
_start:
{
uint8_t v___x_938_; lean_object* v___x_939_; 
v___x_938_ = 3;
v___x_939_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_939_, 0, v_message_937_);
lean_ctor_set_uint8(v___x_939_, sizeof(void*)*1, v___x_938_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofSerialMessage(lean_object* v_msg_941_){
_start:
{
lean_object* v_toBaseMessage_942_; lean_object* v_fileName_943_; lean_object* v_pos_944_; uint8_t v_severity_945_; lean_object* v_caption_946_; lean_object* v_data_947_; lean_object* v___y_949_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v_startInclusive_958_; lean_object* v_endExclusive_959_; lean_object* v___x_960_; uint8_t v___x_961_; 
v_toBaseMessage_942_ = lean_ctor_get(v_msg_941_, 0);
lean_inc_ref(v_toBaseMessage_942_);
lean_dec_ref(v_msg_941_);
v_fileName_943_ = lean_ctor_get(v_toBaseMessage_942_, 0);
lean_inc_ref(v_fileName_943_);
v_pos_944_ = lean_ctor_get(v_toBaseMessage_942_, 1);
lean_inc_ref(v_pos_944_);
v_severity_945_ = lean_ctor_get_uint8(v_toBaseMessage_942_, sizeof(void*)*5 + 1);
v_caption_946_ = lean_ctor_get(v_toBaseMessage_942_, 3);
lean_inc_ref(v_caption_946_);
v_data_947_ = lean_ctor_get(v_toBaseMessage_942_, 4);
lean_inc(v_data_947_);
lean_dec_ref(v_toBaseMessage_942_);
v___x_954_ = lean_unsigned_to_nat(0u);
v___x_955_ = lean_string_utf8_byte_size(v_caption_946_);
v___x_956_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_956_, 0, v_caption_946_);
lean_ctor_set(v___x_956_, 1, v___x_954_);
lean_ctor_set(v___x_956_, 2, v___x_955_);
v___x_957_ = l_String_Slice_trimAscii(v___x_956_);
v_startInclusive_958_ = lean_ctor_get(v___x_957_, 1);
lean_inc(v_startInclusive_958_);
v_endExclusive_959_ = lean_ctor_get(v___x_957_, 2);
lean_inc(v_endExclusive_959_);
v___x_960_ = lean_nat_sub(v_endExclusive_959_, v_startInclusive_958_);
lean_dec(v_startInclusive_958_);
lean_dec(v_endExclusive_959_);
v___x_961_ = lean_nat_dec_eq(v___x_960_, v___x_954_);
lean_dec(v___x_960_);
if (v___x_961_ == 0)
{
lean_object* v___x_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_975_; 
v___x_962_ = l_String_Slice_toString(v___x_957_);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_975_ == 0)
{
lean_object* v_unused_976_; lean_object* v_unused_977_; lean_object* v_unused_978_; 
v_unused_976_ = lean_ctor_get(v___x_957_, 2);
lean_dec(v_unused_976_);
v_unused_977_ = lean_ctor_get(v___x_957_, 1);
lean_dec(v_unused_977_);
v_unused_978_ = lean_ctor_get(v___x_957_, 0);
lean_dec(v_unused_978_);
v___x_964_ = v___x_957_;
v_isShared_965_ = v_isSharedCheck_975_;
goto v_resetjp_963_;
}
else
{
lean_dec(v___x_957_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_975_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_966_ = ((lean_object*)(l_Lake_LogEntry_ofSerialMessage___closed__0));
v___x_967_ = lean_string_append(v___x_962_, v___x_966_);
v___x_968_ = lean_string_utf8_byte_size(v_data_947_);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 2, v___x_968_);
lean_ctor_set(v___x_964_, 1, v___x_954_);
lean_ctor_set(v___x_964_, 0, v_data_947_);
v___x_970_ = v___x_964_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_data_947_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_974_, 2, v___x_968_);
v___x_970_ = v_reuseFailAlloc_974_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_971_ = l_String_Slice_trimAscii(v___x_970_);
v___x_972_ = l_String_Slice_toString(v___x_971_);
lean_dec_ref(v___x_971_);
v___x_973_ = lean_string_append(v___x_967_, v___x_972_);
lean_dec_ref(v___x_972_);
v___y_949_ = v___x_973_;
goto v___jp_948_;
}
}
}
else
{
lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_991_; 
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; lean_object* v_unused_993_; lean_object* v_unused_994_; 
v_unused_992_ = lean_ctor_get(v___x_957_, 2);
lean_dec(v_unused_992_);
v_unused_993_ = lean_ctor_get(v___x_957_, 1);
lean_dec(v_unused_993_);
v_unused_994_ = lean_ctor_get(v___x_957_, 0);
lean_dec(v_unused_994_);
v___x_980_ = v___x_957_;
v_isShared_981_ = v_isSharedCheck_991_;
goto v_resetjp_979_;
}
else
{
lean_dec(v___x_957_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_991_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_982_ = lean_string_utf8_byte_size(v_data_947_);
if (v_isShared_981_ == 0)
{
lean_ctor_set(v___x_980_, 2, v___x_982_);
lean_ctor_set(v___x_980_, 1, v___x_954_);
lean_ctor_set(v___x_980_, 0, v_data_947_);
v___x_984_ = v___x_980_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_data_947_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v___x_954_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v___x_982_);
v___x_984_ = v_reuseFailAlloc_990_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_985_; lean_object* v_str_986_; lean_object* v_startInclusive_987_; lean_object* v_endExclusive_988_; lean_object* v___x_989_; 
v___x_985_ = l_String_Slice_trimAscii(v___x_984_);
v_str_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc_ref(v_str_986_);
v_startInclusive_987_ = lean_ctor_get(v___x_985_, 1);
lean_inc(v_startInclusive_987_);
v_endExclusive_988_ = lean_ctor_get(v___x_985_, 2);
lean_inc(v_endExclusive_988_);
lean_dec_ref(v___x_985_);
v___x_989_ = lean_string_utf8_extract_fast(v_str_986_, v_startInclusive_987_, v_endExclusive_988_);
lean_dec(v_endExclusive_988_);
lean_dec(v_startInclusive_987_);
lean_dec_ref(v_str_986_);
v___y_949_ = v___x_989_;
goto v___jp_948_;
}
}
}
v___jp_948_:
{
uint8_t v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_950_ = l_Lake_LogLevel_ofMessageSeverity(v_severity_945_);
v___x_951_ = lean_box(0);
v___x_952_ = l_Lean_mkErrorStringWithPos(v_fileName_943_, v_pos_944_, v___y_949_, v___x_951_, v___x_951_, v___x_951_);
lean_dec_ref(v___y_949_);
v___x_953_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_953_, 0, v___x_952_);
lean_ctor_set_uint8(v___x_953_, sizeof(void*)*1, v___x_950_);
return v___x_953_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofMessage(lean_object* v_msg_995_){
_start:
{
lean_object* v_fileName_997_; lean_object* v_pos_998_; uint8_t v_severity_999_; lean_object* v_caption_1000_; lean_object* v_data_1001_; lean_object* v___x_1002_; lean_object* v___y_1004_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v_startInclusive_1013_; lean_object* v_endExclusive_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; 
v_fileName_997_ = lean_ctor_get(v_msg_995_, 0);
lean_inc_ref(v_fileName_997_);
v_pos_998_ = lean_ctor_get(v_msg_995_, 1);
lean_inc_ref(v_pos_998_);
v_severity_999_ = lean_ctor_get_uint8(v_msg_995_, sizeof(void*)*5 + 1);
v_caption_1000_ = lean_ctor_get(v_msg_995_, 3);
lean_inc_ref(v_caption_1000_);
v_data_1001_ = lean_ctor_get(v_msg_995_, 4);
lean_inc(v_data_1001_);
lean_dec_ref(v_msg_995_);
v___x_1002_ = l_Lean_MessageData_toString(v_data_1001_);
v___x_1009_ = lean_unsigned_to_nat(0u);
v___x_1010_ = lean_string_utf8_byte_size(v_caption_1000_);
v___x_1011_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1011_, 0, v_caption_1000_);
lean_ctor_set(v___x_1011_, 1, v___x_1009_);
lean_ctor_set(v___x_1011_, 2, v___x_1010_);
v___x_1012_ = l_String_Slice_trimAscii(v___x_1011_);
v_startInclusive_1013_ = lean_ctor_get(v___x_1012_, 1);
lean_inc(v_startInclusive_1013_);
v_endExclusive_1014_ = lean_ctor_get(v___x_1012_, 2);
lean_inc(v_endExclusive_1014_);
v___x_1015_ = lean_nat_sub(v_endExclusive_1014_, v_startInclusive_1013_);
lean_dec(v_startInclusive_1013_);
lean_dec(v_endExclusive_1014_);
v___x_1016_ = lean_nat_dec_eq(v___x_1015_, v___x_1009_);
lean_dec(v___x_1015_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1030_; 
v___x_1017_ = l_String_Slice_toString(v___x_1012_);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1030_ == 0)
{
lean_object* v_unused_1031_; lean_object* v_unused_1032_; lean_object* v_unused_1033_; 
v_unused_1031_ = lean_ctor_get(v___x_1012_, 2);
lean_dec(v_unused_1031_);
v_unused_1032_ = lean_ctor_get(v___x_1012_, 1);
lean_dec(v_unused_1032_);
v_unused_1033_ = lean_ctor_get(v___x_1012_, 0);
lean_dec(v_unused_1033_);
v___x_1019_ = v___x_1012_;
v_isShared_1020_ = v_isSharedCheck_1030_;
goto v_resetjp_1018_;
}
else
{
lean_dec(v___x_1012_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1030_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1025_; 
v___x_1021_ = ((lean_object*)(l_Lake_LogEntry_ofSerialMessage___closed__0));
v___x_1022_ = lean_string_append(v___x_1017_, v___x_1021_);
v___x_1023_ = lean_string_utf8_byte_size(v___x_1002_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set(v___x_1019_, 2, v___x_1023_);
lean_ctor_set(v___x_1019_, 1, v___x_1009_);
lean_ctor_set(v___x_1019_, 0, v___x_1002_);
v___x_1025_ = v___x_1019_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1029_, 1, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1029_, 2, v___x_1023_);
v___x_1025_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = l_String_Slice_trimAscii(v___x_1025_);
v___x_1027_ = l_String_Slice_toString(v___x_1026_);
lean_dec_ref(v___x_1026_);
v___x_1028_ = lean_string_append(v___x_1022_, v___x_1027_);
lean_dec_ref(v___x_1027_);
v___y_1004_ = v___x_1028_;
goto v___jp_1003_;
}
}
}
else
{
lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1046_; 
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1046_ == 0)
{
lean_object* v_unused_1047_; lean_object* v_unused_1048_; lean_object* v_unused_1049_; 
v_unused_1047_ = lean_ctor_get(v___x_1012_, 2);
lean_dec(v_unused_1047_);
v_unused_1048_ = lean_ctor_get(v___x_1012_, 1);
lean_dec(v_unused_1048_);
v_unused_1049_ = lean_ctor_get(v___x_1012_, 0);
lean_dec(v_unused_1049_);
v___x_1035_ = v___x_1012_;
v_isShared_1036_ = v_isSharedCheck_1046_;
goto v_resetjp_1034_;
}
else
{
lean_dec(v___x_1012_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1046_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v___x_1039_; 
v___x_1037_ = lean_string_utf8_byte_size(v___x_1002_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 2, v___x_1037_);
lean_ctor_set(v___x_1035_, 1, v___x_1009_);
lean_ctor_set(v___x_1035_, 0, v___x_1002_);
v___x_1039_ = v___x_1035_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1002_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1045_, 2, v___x_1037_);
v___x_1039_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1040_; lean_object* v_str_1041_; lean_object* v_startInclusive_1042_; lean_object* v_endExclusive_1043_; lean_object* v___x_1044_; 
v___x_1040_ = l_String_Slice_trimAscii(v___x_1039_);
v_str_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc_ref(v_str_1041_);
v_startInclusive_1042_ = lean_ctor_get(v___x_1040_, 1);
lean_inc(v_startInclusive_1042_);
v_endExclusive_1043_ = lean_ctor_get(v___x_1040_, 2);
lean_inc(v_endExclusive_1043_);
lean_dec_ref(v___x_1040_);
v___x_1044_ = lean_string_utf8_extract_fast(v_str_1041_, v_startInclusive_1042_, v_endExclusive_1043_);
lean_dec(v_endExclusive_1043_);
lean_dec(v_startInclusive_1042_);
lean_dec_ref(v_str_1041_);
v___y_1004_ = v___x_1044_;
goto v___jp_1003_;
}
}
}
v___jp_1003_:
{
uint8_t v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1005_ = l_Lake_LogLevel_ofMessageSeverity(v_severity_999_);
v___x_1006_ = lean_box(0);
v___x_1007_ = l_Lean_mkErrorStringWithPos(v_fileName_997_, v_pos_998_, v___y_1004_, v___x_1006_, v___x_1006_, v___x_1006_);
lean_dec_ref(v___y_1004_);
v___x_1008_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set_uint8(v___x_1008_, sizeof(void*)*1, v___x_1005_);
return v___x_1008_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogEntry_ofMessage___boxed(lean_object* v_msg_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lake_LogEntry_ofMessage(v_msg_1050_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lake_logVerbose___redArg(lean_object* v_inst_1053_, lean_object* v_message_1054_){
_start:
{
uint8_t v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1055_ = 0;
v___x_1056_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1056_, 0, v_message_1054_);
lean_ctor_set_uint8(v___x_1056_, sizeof(void*)*1, v___x_1055_);
v___x_1057_ = lean_apply_1(v_inst_1053_, v___x_1056_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l_Lake_logVerbose(lean_object* v_m_1058_, lean_object* v_inst_1059_, lean_object* v_inst_1060_, lean_object* v_message_1061_){
_start:
{
uint8_t v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1062_ = 0;
v___x_1063_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1063_, 0, v_message_1061_);
lean_ctor_set_uint8(v___x_1063_, sizeof(void*)*1, v___x_1062_);
v___x_1064_ = lean_apply_1(v_inst_1060_, v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lake_logVerbose___boxed(lean_object* v_m_1065_, lean_object* v_inst_1066_, lean_object* v_inst_1067_, lean_object* v_message_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lake_logVerbose(v_m_1065_, v_inst_1066_, v_inst_1067_, v_message_1068_);
lean_dec_ref(v_inst_1066_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lake_logInfo___redArg(lean_object* v_inst_1070_, lean_object* v_message_1071_){
_start:
{
uint8_t v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1072_ = 1;
v___x_1073_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1073_, 0, v_message_1071_);
lean_ctor_set_uint8(v___x_1073_, sizeof(void*)*1, v___x_1072_);
v___x_1074_ = lean_apply_1(v_inst_1070_, v___x_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Lake_logInfo(lean_object* v_m_1075_, lean_object* v_inst_1076_, lean_object* v_inst_1077_, lean_object* v_message_1078_){
_start:
{
uint8_t v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1079_ = 1;
v___x_1080_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1080_, 0, v_message_1078_);
lean_ctor_set_uint8(v___x_1080_, sizeof(void*)*1, v___x_1079_);
v___x_1081_ = lean_apply_1(v_inst_1077_, v___x_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lake_logInfo___boxed(lean_object* v_m_1082_, lean_object* v_inst_1083_, lean_object* v_inst_1084_, lean_object* v_message_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lake_logInfo(v_m_1082_, v_inst_1083_, v_inst_1084_, v_message_1085_);
lean_dec_ref(v_inst_1083_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lake_logWarning___redArg(lean_object* v_inst_1087_, lean_object* v_message_1088_){
_start:
{
uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1089_ = 2;
v___x_1090_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1090_, 0, v_message_1088_);
lean_ctor_set_uint8(v___x_1090_, sizeof(void*)*1, v___x_1089_);
v___x_1091_ = lean_apply_1(v_inst_1087_, v___x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lake_logWarning(lean_object* v_m_1092_, lean_object* v_inst_1093_, lean_object* v_message_1094_){
_start:
{
uint8_t v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1095_ = 2;
v___x_1096_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1096_, 0, v_message_1094_);
lean_ctor_set_uint8(v___x_1096_, sizeof(void*)*1, v___x_1095_);
v___x_1097_ = lean_apply_1(v_inst_1093_, v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lake_logError___redArg(lean_object* v_inst_1098_, lean_object* v_message_1099_){
_start:
{
uint8_t v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1100_ = 3;
v___x_1101_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1101_, 0, v_message_1099_);
lean_ctor_set_uint8(v___x_1101_, sizeof(void*)*1, v___x_1100_);
v___x_1102_ = lean_apply_1(v_inst_1098_, v___x_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lake_logError(lean_object* v_m_1103_, lean_object* v_inst_1104_, lean_object* v_message_1105_){
_start:
{
uint8_t v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1106_ = 3;
v___x_1107_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1107_, 0, v_message_1105_);
lean_ctor_set_uint8(v___x_1107_, sizeof(void*)*1, v___x_1106_);
v___x_1108_ = lean_apply_1(v_inst_1104_, v___x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Lake_logSerialMessage___redArg(lean_object* v_msg_1109_, lean_object* v_inst_1110_, lean_object* v_inst_1111_){
_start:
{
lean_object* v_toBaseMessage_1112_; lean_object* v_toApplicative_1113_; uint8_t v_isSilent_1114_; 
v_toBaseMessage_1112_ = lean_ctor_get(v_msg_1109_, 0);
v_toApplicative_1113_ = lean_ctor_get(v_inst_1110_, 0);
lean_inc_ref(v_toApplicative_1113_);
lean_dec_ref(v_inst_1110_);
v_isSilent_1114_ = lean_ctor_get_uint8(v_toBaseMessage_1112_, sizeof(void*)*5 + 2);
if (v_isSilent_1114_ == 0)
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
lean_dec_ref(v_toApplicative_1113_);
v___x_1115_ = l_Lake_LogEntry_ofSerialMessage(v_msg_1109_);
v___x_1116_ = lean_apply_1(v_inst_1111_, v___x_1115_);
return v___x_1116_;
}
else
{
lean_object* v_toPure_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
lean_dec(v_inst_1111_);
lean_dec_ref(v_msg_1109_);
v_toPure_1117_ = lean_ctor_get(v_toApplicative_1113_, 1);
lean_inc(v_toPure_1117_);
lean_dec_ref(v_toApplicative_1113_);
v___x_1118_ = lean_box(0);
v___x_1119_ = lean_apply_2(v_toPure_1117_, lean_box(0), v___x_1118_);
return v___x_1119_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_logSerialMessage(lean_object* v_m_1120_, lean_object* v_msg_1121_, lean_object* v_inst_1122_, lean_object* v_inst_1123_){
_start:
{
lean_object* v_toBaseMessage_1124_; lean_object* v_toApplicative_1125_; uint8_t v_isSilent_1126_; 
v_toBaseMessage_1124_ = lean_ctor_get(v_msg_1121_, 0);
v_toApplicative_1125_ = lean_ctor_get(v_inst_1122_, 0);
lean_inc_ref(v_toApplicative_1125_);
lean_dec_ref(v_inst_1122_);
v_isSilent_1126_ = lean_ctor_get_uint8(v_toBaseMessage_1124_, sizeof(void*)*5 + 2);
if (v_isSilent_1126_ == 0)
{
lean_object* v___x_1127_; lean_object* v___x_1128_; 
lean_dec_ref(v_toApplicative_1125_);
v___x_1127_ = l_Lake_LogEntry_ofSerialMessage(v_msg_1121_);
v___x_1128_ = lean_apply_1(v_inst_1123_, v___x_1127_);
return v___x_1128_;
}
else
{
lean_object* v_toPure_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
lean_dec(v_inst_1123_);
lean_dec_ref(v_msg_1121_);
v_toPure_1129_ = lean_ctor_get(v_toApplicative_1125_, 1);
lean_inc(v_toPure_1129_);
lean_dec_ref(v_toApplicative_1125_);
v___x_1130_ = lean_box(0);
v___x_1131_ = lean_apply_2(v_toPure_1129_, lean_box(0), v___x_1130_);
return v___x_1131_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_logMessage___redArg___lam__0(lean_object* v_inst_1132_, lean_object* v_____do__lift_1133_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_apply_1(v_inst_1132_, v_____do__lift_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lake_logMessage___redArg(lean_object* v_msg_1135_, lean_object* v_inst_1136_, lean_object* v_inst_1137_, lean_object* v_inst_1138_){
_start:
{
uint8_t v_isSilent_1139_; 
v_isSilent_1139_ = lean_ctor_get_uint8(v_msg_1135_, sizeof(void*)*5 + 2);
if (v_isSilent_1139_ == 0)
{
lean_object* v_toBind_1140_; lean_object* v___f_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v_toBind_1140_ = lean_ctor_get(v_inst_1136_, 1);
lean_inc(v_toBind_1140_);
lean_dec_ref(v_inst_1136_);
v___f_1141_ = lean_alloc_closure((void*)(l_Lake_logMessage___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1141_, 0, v_inst_1137_);
v___x_1142_ = lean_alloc_closure((void*)(l_Lake_LogEntry_ofMessage___boxed), 2, 1);
lean_closure_set(v___x_1142_, 0, v_msg_1135_);
v___x_1143_ = lean_apply_2(v_inst_1138_, lean_box(0), v___x_1142_);
v___x_1144_ = lean_apply_4(v_toBind_1140_, lean_box(0), lean_box(0), v___x_1143_, v___f_1141_);
return v___x_1144_;
}
else
{
lean_object* v_toApplicative_1145_; lean_object* v_toPure_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v_toApplicative_1145_ = lean_ctor_get(v_inst_1136_, 0);
lean_inc_ref(v_toApplicative_1145_);
lean_dec(v_inst_1138_);
lean_dec(v_inst_1137_);
lean_dec_ref(v_inst_1136_);
lean_dec_ref(v_msg_1135_);
v_toPure_1146_ = lean_ctor_get(v_toApplicative_1145_, 1);
lean_inc(v_toPure_1146_);
lean_dec_ref(v_toApplicative_1145_);
v___x_1147_ = lean_box(0);
v___x_1148_ = lean_apply_2(v_toPure_1146_, lean_box(0), v___x_1147_);
return v___x_1148_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_logMessage(lean_object* v_m_1149_, lean_object* v_msg_1150_, lean_object* v_inst_1151_, lean_object* v_inst_1152_, lean_object* v_inst_1153_){
_start:
{
uint8_t v_isSilent_1154_; 
v_isSilent_1154_ = lean_ctor_get_uint8(v_msg_1150_, sizeof(void*)*5 + 2);
if (v_isSilent_1154_ == 0)
{
lean_object* v_toBind_1155_; lean_object* v___f_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
v_toBind_1155_ = lean_ctor_get(v_inst_1151_, 1);
lean_inc(v_toBind_1155_);
lean_dec_ref(v_inst_1151_);
v___f_1156_ = lean_alloc_closure((void*)(l_Lake_logMessage___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1156_, 0, v_inst_1152_);
v___x_1157_ = lean_alloc_closure((void*)(l_Lake_LogEntry_ofMessage___boxed), 2, 1);
lean_closure_set(v___x_1157_, 0, v_msg_1150_);
v___x_1158_ = lean_apply_2(v_inst_1153_, lean_box(0), v___x_1157_);
v___x_1159_ = lean_apply_4(v_toBind_1155_, lean_box(0), lean_box(0), v___x_1158_, v___f_1156_);
return v___x_1159_;
}
else
{
lean_object* v_toApplicative_1160_; lean_object* v_toPure_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v_toApplicative_1160_ = lean_ctor_get(v_inst_1151_, 0);
lean_inc_ref(v_toApplicative_1160_);
lean_dec(v_inst_1153_);
lean_dec(v_inst_1152_);
lean_dec_ref(v_inst_1151_);
lean_dec_ref(v_msg_1150_);
v_toPure_1161_ = lean_ctor_get(v_toApplicative_1160_, 1);
lean_inc(v_toPure_1161_);
lean_dec_ref(v_toApplicative_1160_);
v___x_1162_ = lean_box(0);
v___x_1163_ = lean_apply_2(v_toPure_1161_, lean_box(0), v___x_1162_);
return v___x_1163_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_logToStream(lean_object* v_e_1164_, lean_object* v_out_1165_, uint8_t v_minLv_1166_, uint8_t v_useAnsi_1167_){
_start:
{
uint8_t v_level_1169_; uint8_t v___x_1170_; 
v_level_1169_ = lean_ctor_get_uint8(v_e_1164_, sizeof(void*)*1);
v___x_1170_ = l_Lake_instOrdLogLevel_ord(v_minLv_1166_, v_level_1169_);
if (v___x_1170_ == 2)
{
lean_object* v___x_1171_; 
lean_dec_ref(v_out_1165_);
v___x_1171_ = lean_box(0);
return v___x_1171_;
}
else
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = l_Lake_LogEntry_toString(v_e_1164_, v_useAnsi_1167_);
v___x_1173_ = l_IO_FS_Stream_putStrLn(v_out_1165_, v___x_1172_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1174_);
lean_dec_ref_known(v___x_1173_, 1);
return v_a_1174_;
}
else
{
lean_object* v___x_1175_; 
lean_dec_ref_known(v___x_1173_, 1);
v___x_1175_ = lean_box(0);
return v___x_1175_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_logToStream___boxed(lean_object* v_e_1176_, lean_object* v_out_1177_, lean_object* v_minLv_1178_, lean_object* v_useAnsi_1179_, lean_object* v___y_1180_){
_start:
{
uint8_t v_minLv_boxed_1181_; uint8_t v_useAnsi_boxed_1182_; lean_object* v_res_1183_; 
v_minLv_boxed_1181_ = lean_unbox(v_minLv_1178_);
v_useAnsi_boxed_1182_ = lean_unbox(v_useAnsi_1179_);
v_res_1183_ = l_Lake_logToStream(v_e_1176_, v_out_1177_, v_minLv_boxed_1181_, v_useAnsi_boxed_1182_);
lean_dec_ref(v_e_1176_);
return v_res_1183_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg___lam__0(lean_object* v_inst_1184_, lean_object* v_x_1185_){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1186_ = lean_box(0);
v___x_1187_ = lean_apply_2(v_inst_1184_, lean_box(0), v___x_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg___lam__0___boxed(lean_object* v_inst_1188_, lean_object* v_x_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lake_MonadLog_nop___redArg___lam__0(v_inst_1188_, v_x_1189_);
lean_dec_ref(v_x_1189_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop___redArg(lean_object* v_inst_1191_){
_start:
{
lean_object* v___f_1192_; 
v___f_1192_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1192_, 0, v_inst_1191_);
return v___f_1192_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_nop(lean_object* v_m_1193_, lean_object* v_inst_1194_){
_start:
{
lean_object* v___f_1195_; 
v___f_1195_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1195_, 0, v_inst_1194_);
return v___f_1195_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_instInhabitedOfPure___redArg(lean_object* v_inst_1196_){
_start:
{
lean_object* v___f_1197_; 
v___f_1197_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1197_, 0, v_inst_1196_);
return v___f_1197_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_instInhabitedOfPure(lean_object* v_m_1198_, lean_object* v_inst_1199_){
_start:
{
lean_object* v___f_1200_; 
v___f_1200_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1200_, 0, v_inst_1199_);
return v___f_1200_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift___redArg___lam__0(lean_object* v_self_1201_, lean_object* v_inst_1202_, lean_object* v_e_1203_){
_start:
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1204_ = lean_apply_1(v_self_1201_, v_e_1203_);
v___x_1205_ = lean_apply_2(v_inst_1202_, lean_box(0), v___x_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift___redArg(lean_object* v_inst_1206_, lean_object* v_self_1207_){
_start:
{
lean_object* v___f_1208_; 
v___f_1208_ = lean_alloc_closure((void*)(l_Lake_MonadLog_lift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1208_, 0, v_self_1207_);
lean_closure_set(v___f_1208_, 1, v_inst_1206_);
return v___f_1208_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_lift(lean_object* v_m_1209_, lean_object* v_n_1210_, lean_object* v_inst_1211_, lean_object* v_self_1212_){
_start:
{
lean_object* v___f_1213_; 
v___f_1213_ = lean_alloc_closure((void*)(l_Lake_MonadLog_lift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1213_, 0, v_self_1212_);
lean_closure_set(v___f_1213_, 1, v_inst_1211_);
return v___f_1213_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift___redArg___lam__0(lean_object* v_methods_1214_, lean_object* v_inst_1215_, lean_object* v_e_1216_){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = lean_apply_1(v_methods_1214_, v_e_1216_);
v___x_1218_ = lean_apply_2(v_inst_1215_, lean_box(0), v___x_1217_);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift___redArg(lean_object* v_inst_1219_, lean_object* v_methods_1220_){
_start:
{
lean_object* v___f_1221_; 
v___f_1221_ = lean_alloc_closure((void*)(l_Lake_MonadLog_instOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1221_, 0, v_methods_1220_);
lean_closure_set(v___f_1221_, 1, v_inst_1219_);
return v___f_1221_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_instOfMonadLift(lean_object* v_m_1222_, lean_object* v_n_1223_, lean_object* v_inst_1224_, lean_object* v_methods_1225_){
_start:
{
lean_object* v___f_1226_; 
v___f_1226_ = lean_alloc_closure((void*)(l_Lake_MonadLog_instOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1226_, 0, v_methods_1225_);
lean_closure_set(v___f_1226_, 1, v_inst_1224_);
return v___f_1226_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___lam__0(lean_object* v_out_1227_, uint8_t v_minLv_1228_, uint8_t v_useAnsi_1229_, lean_object* v_inst_1230_, lean_object* v_e_1231_){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1232_ = lean_box(v_minLv_1228_);
v___x_1233_ = lean_box(v_useAnsi_1229_);
v___x_1234_ = lean_alloc_closure((void*)(l_Lake_logToStream___boxed), 5, 4);
lean_closure_set(v___x_1234_, 0, v_e_1231_);
lean_closure_set(v___x_1234_, 1, v_out_1227_);
lean_closure_set(v___x_1234_, 2, v___x_1232_);
lean_closure_set(v___x_1234_, 3, v___x_1233_);
v___x_1235_ = lean_apply_2(v_inst_1230_, lean_box(0), v___x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___lam__0___boxed(lean_object* v_out_1236_, lean_object* v_minLv_1237_, lean_object* v_useAnsi_1238_, lean_object* v_inst_1239_, lean_object* v_e_1240_){
_start:
{
uint8_t v_minLv_boxed_1241_; uint8_t v_useAnsi_boxed_1242_; lean_object* v_res_1243_; 
v_minLv_boxed_1241_ = lean_unbox(v_minLv_1237_);
v_useAnsi_boxed_1242_ = lean_unbox(v_useAnsi_1238_);
v_res_1243_ = l_Lake_MonadLog_stream___redArg___lam__0(v_out_1236_, v_minLv_boxed_1241_, v_useAnsi_boxed_1242_, v_inst_1239_, v_e_1240_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg(lean_object* v_inst_1244_, lean_object* v_out_1245_, uint8_t v_minLv_1246_, uint8_t v_useAnsi_1247_){
_start:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___f_1250_; 
v___x_1248_ = lean_box(v_minLv_1246_);
v___x_1249_ = lean_box(v_useAnsi_1247_);
v___f_1250_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stream___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1250_, 0, v_out_1245_);
lean_closure_set(v___f_1250_, 1, v___x_1248_);
lean_closure_set(v___f_1250_, 2, v___x_1249_);
lean_closure_set(v___f_1250_, 3, v_inst_1244_);
return v___f_1250_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___redArg___boxed(lean_object* v_inst_1251_, lean_object* v_out_1252_, lean_object* v_minLv_1253_, lean_object* v_useAnsi_1254_){
_start:
{
uint8_t v_minLv_boxed_1255_; uint8_t v_useAnsi_boxed_1256_; lean_object* v_res_1257_; 
v_minLv_boxed_1255_ = lean_unbox(v_minLv_1253_);
v_useAnsi_boxed_1256_ = lean_unbox(v_useAnsi_1254_);
v_res_1257_ = l_Lake_MonadLog_stream___redArg(v_inst_1251_, v_out_1252_, v_minLv_boxed_1255_, v_useAnsi_boxed_1256_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream(lean_object* v_m_1258_, lean_object* v_inst_1259_, lean_object* v_out_1260_, uint8_t v_minLv_1261_, uint8_t v_useAnsi_1262_){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___f_1265_; 
v___x_1263_ = lean_box(v_minLv_1261_);
v___x_1264_ = lean_box(v_useAnsi_1262_);
v___f_1265_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stream___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1265_, 0, v_out_1260_);
lean_closure_set(v___f_1265_, 1, v___x_1263_);
lean_closure_set(v___f_1265_, 2, v___x_1264_);
lean_closure_set(v___f_1265_, 3, v_inst_1259_);
return v___f_1265_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stream___boxed(lean_object* v_m_1266_, lean_object* v_inst_1267_, lean_object* v_out_1268_, lean_object* v_minLv_1269_, lean_object* v_useAnsi_1270_){
_start:
{
uint8_t v_minLv_boxed_1271_; uint8_t v_useAnsi_boxed_1272_; lean_object* v_res_1273_; 
v_minLv_boxed_1271_ = lean_unbox(v_minLv_1269_);
v_useAnsi_boxed_1272_ = lean_unbox(v_useAnsi_1270_);
v_res_1273_ = l_Lake_MonadLog_stream(v_m_1266_, v_inst_1267_, v_out_1268_, v_minLv_boxed_1271_, v_useAnsi_boxed_1272_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_error___redArg___lam__0(lean_object* v_failure_1274_, lean_object* v_x_1275_){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_apply_1(v_failure_1274_, lean_box(0));
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_error___redArg(lean_object* v_inst_1277_, lean_object* v_inst_1278_, lean_object* v_msg_1279_){
_start:
{
lean_object* v_toApplicative_1280_; lean_object* v_failure_1281_; lean_object* v_toSeqRight_1282_; lean_object* v___f_1283_; uint8_t v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v_toApplicative_1280_ = lean_ctor_get(v_inst_1277_, 0);
lean_inc_ref(v_toApplicative_1280_);
v_failure_1281_ = lean_ctor_get(v_inst_1277_, 1);
lean_inc(v_failure_1281_);
lean_dec_ref(v_inst_1277_);
v_toSeqRight_1282_ = lean_ctor_get(v_toApplicative_1280_, 4);
lean_inc(v_toSeqRight_1282_);
lean_dec_ref(v_toApplicative_1280_);
v___f_1283_ = lean_alloc_closure((void*)(l_Lake_MonadLog_error___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1283_, 0, v_failure_1281_);
v___x_1284_ = 3;
v___x_1285_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1285_, 0, v_msg_1279_);
lean_ctor_set_uint8(v___x_1285_, sizeof(void*)*1, v___x_1284_);
v___x_1286_ = lean_apply_1(v_inst_1278_, v___x_1285_);
v___x_1287_ = lean_apply_4(v_toSeqRight_1282_, lean_box(0), lean_box(0), v___x_1286_, v___f_1283_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_error(lean_object* v_m_1288_, lean_object* v_00_u03b1_1289_, lean_object* v_inst_1290_, lean_object* v_inst_1291_, lean_object* v_msg_1292_){
_start:
{
lean_object* v_toApplicative_1293_; lean_object* v_failure_1294_; lean_object* v_toSeqRight_1295_; lean_object* v___f_1296_; uint8_t v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v_toApplicative_1293_ = lean_ctor_get(v_inst_1290_, 0);
lean_inc_ref(v_toApplicative_1293_);
v_failure_1294_ = lean_ctor_get(v_inst_1290_, 1);
lean_inc(v_failure_1294_);
lean_dec_ref(v_inst_1290_);
v_toSeqRight_1295_ = lean_ctor_get(v_toApplicative_1293_, 4);
lean_inc(v_toSeqRight_1295_);
lean_dec_ref(v_toApplicative_1293_);
v___f_1296_ = lean_alloc_closure((void*)(l_Lake_MonadLog_error___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1296_, 0, v_failure_1294_);
v___x_1297_ = 3;
v___x_1298_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1298_, 0, v_msg_1292_);
lean_ctor_set_uint8(v___x_1298_, sizeof(void*)*1, v___x_1297_);
v___x_1299_ = lean_apply_1(v_inst_1291_, v___x_1298_);
v___x_1300_ = lean_apply_4(v_toSeqRight_1295_, lean_box(0), lean_box(0), v___x_1299_, v___f_1296_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logEntry(lean_object* v_self_1301_, lean_object* v_e_1302_, uint8_t v_minLv_1303_, uint8_t v_ansiMode_1304_){
_start:
{
lean_object* v___x_1306_; uint8_t v___x_1307_; lean_object* v___x_1308_; 
v___x_1306_ = l_Lake_OutStream_get(v_self_1301_);
lean_inc_ref(v___x_1306_);
v___x_1307_ = l_Lake_AnsiMode_isEnabled(v___x_1306_, v_ansiMode_1304_);
v___x_1308_ = l_Lake_logToStream(v_e_1302_, v___x_1306_, v_minLv_1303_, v___x_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logEntry___boxed(lean_object* v_self_1309_, lean_object* v_e_1310_, lean_object* v_minLv_1311_, lean_object* v_ansiMode_1312_, lean_object* v___y_1313_){
_start:
{
uint8_t v_minLv_boxed_1314_; uint8_t v_ansiMode_boxed_1315_; lean_object* v_res_1316_; 
v_minLv_boxed_1314_ = lean_unbox(v_minLv_1311_);
v_ansiMode_boxed_1315_ = lean_unbox(v_ansiMode_1312_);
v_res_1316_ = l_Lake_OutStream_logEntry(v_self_1309_, v_e_1310_, v_minLv_boxed_1314_, v_ansiMode_boxed_1315_);
lean_dec_ref(v_e_1310_);
lean_dec(v_self_1309_);
return v_res_1316_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___lam__0(lean_object* v_out_1317_, uint8_t v_minLv_1318_, uint8_t v_ansiMode_1319_, lean_object* v_inst_1320_, lean_object* v_e_1321_){
_start:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1322_ = lean_box(v_minLv_1318_);
v___x_1323_ = lean_box(v_ansiMode_1319_);
v___x_1324_ = lean_alloc_closure((void*)(l_Lake_OutStream_logEntry___boxed), 5, 4);
lean_closure_set(v___x_1324_, 0, v_out_1317_);
lean_closure_set(v___x_1324_, 1, v_e_1321_);
lean_closure_set(v___x_1324_, 2, v___x_1322_);
lean_closure_set(v___x_1324_, 3, v___x_1323_);
v___x_1325_ = lean_apply_2(v_inst_1320_, lean_box(0), v___x_1324_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___lam__0___boxed(lean_object* v_out_1326_, lean_object* v_minLv_1327_, lean_object* v_ansiMode_1328_, lean_object* v_inst_1329_, lean_object* v_e_1330_){
_start:
{
uint8_t v_minLv_boxed_1331_; uint8_t v_ansiMode_boxed_1332_; lean_object* v_res_1333_; 
v_minLv_boxed_1331_ = lean_unbox(v_minLv_1327_);
v_ansiMode_boxed_1332_ = lean_unbox(v_ansiMode_1328_);
v_res_1333_ = l_Lake_OutStream_logger___redArg___lam__0(v_out_1326_, v_minLv_boxed_1331_, v_ansiMode_boxed_1332_, v_inst_1329_, v_e_1330_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg(lean_object* v_inst_1334_, lean_object* v_out_1335_, uint8_t v_minLv_1336_, uint8_t v_ansiMode_1337_){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___f_1340_; 
v___x_1338_ = lean_box(v_minLv_1336_);
v___x_1339_ = lean_box(v_ansiMode_1337_);
v___f_1340_ = lean_alloc_closure((void*)(l_Lake_OutStream_logger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1340_, 0, v_out_1335_);
lean_closure_set(v___f_1340_, 1, v___x_1338_);
lean_closure_set(v___f_1340_, 2, v___x_1339_);
lean_closure_set(v___f_1340_, 3, v_inst_1334_);
return v___f_1340_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___redArg___boxed(lean_object* v_inst_1341_, lean_object* v_out_1342_, lean_object* v_minLv_1343_, lean_object* v_ansiMode_1344_){
_start:
{
uint8_t v_minLv_boxed_1345_; uint8_t v_ansiMode_boxed_1346_; lean_object* v_res_1347_; 
v_minLv_boxed_1345_ = lean_unbox(v_minLv_1343_);
v_ansiMode_boxed_1346_ = lean_unbox(v_ansiMode_1344_);
v_res_1347_ = l_Lake_OutStream_logger___redArg(v_inst_1341_, v_out_1342_, v_minLv_boxed_1345_, v_ansiMode_boxed_1346_);
return v_res_1347_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger(lean_object* v_m_1348_, lean_object* v_inst_1349_, lean_object* v_out_1350_, uint8_t v_minLv_1351_, uint8_t v_ansiMode_1352_){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___f_1355_; 
v___x_1353_ = lean_box(v_minLv_1351_);
v___x_1354_ = lean_box(v_ansiMode_1352_);
v___f_1355_ = lean_alloc_closure((void*)(l_Lake_OutStream_logger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1355_, 0, v_out_1350_);
lean_closure_set(v___f_1355_, 1, v___x_1353_);
lean_closure_set(v___f_1355_, 2, v___x_1354_);
lean_closure_set(v___f_1355_, 3, v_inst_1349_);
return v___f_1355_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_logger___boxed(lean_object* v_m_1356_, lean_object* v_inst_1357_, lean_object* v_out_1358_, lean_object* v_minLv_1359_, lean_object* v_ansiMode_1360_){
_start:
{
uint8_t v_minLv_boxed_1361_; uint8_t v_ansiMode_boxed_1362_; lean_object* v_res_1363_; 
v_minLv_boxed_1361_ = lean_unbox(v_minLv_1359_);
v_ansiMode_boxed_1362_ = lean_unbox(v_ansiMode_1360_);
v_res_1363_ = l_Lake_OutStream_logger(v_m_1356_, v_inst_1357_, v_out_1358_, v_minLv_boxed_1361_, v_ansiMode_boxed_1362_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___lam__0(lean_object* v___x_1364_, uint8_t v_minLv_1365_, uint8_t v_ansiMode_1366_, lean_object* v_inst_1367_, lean_object* v_e_1368_){
_start:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1369_ = lean_box(v_minLv_1365_);
v___x_1370_ = lean_box(v_ansiMode_1366_);
v___x_1371_ = lean_alloc_closure((void*)(l_Lake_OutStream_logEntry___boxed), 5, 4);
lean_closure_set(v___x_1371_, 0, v___x_1364_);
lean_closure_set(v___x_1371_, 1, v_e_1368_);
lean_closure_set(v___x_1371_, 2, v___x_1369_);
lean_closure_set(v___x_1371_, 3, v___x_1370_);
v___x_1372_ = lean_apply_2(v_inst_1367_, lean_box(0), v___x_1371_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___lam__0___boxed(lean_object* v___x_1373_, lean_object* v_minLv_1374_, lean_object* v_ansiMode_1375_, lean_object* v_inst_1376_, lean_object* v_e_1377_){
_start:
{
uint8_t v_minLv_boxed_1378_; uint8_t v_ansiMode_boxed_1379_; lean_object* v_res_1380_; 
v_minLv_boxed_1378_ = lean_unbox(v_minLv_1374_);
v_ansiMode_boxed_1379_ = lean_unbox(v_ansiMode_1375_);
v_res_1380_ = l_Lake_MonadLog_stdout___redArg___lam__0(v___x_1373_, v_minLv_boxed_1378_, v_ansiMode_boxed_1379_, v_inst_1376_, v_e_1377_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg(lean_object* v_inst_1381_, uint8_t v_minLv_1382_, uint8_t v_ansiMode_1383_){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___f_1387_; 
v___x_1384_ = lean_box(0);
v___x_1385_ = lean_box(v_minLv_1382_);
v___x_1386_ = lean_box(v_ansiMode_1383_);
v___f_1387_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stdout___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1387_, 0, v___x_1384_);
lean_closure_set(v___f_1387_, 1, v___x_1385_);
lean_closure_set(v___f_1387_, 2, v___x_1386_);
lean_closure_set(v___f_1387_, 3, v_inst_1381_);
return v___f_1387_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___redArg___boxed(lean_object* v_inst_1388_, lean_object* v_minLv_1389_, lean_object* v_ansiMode_1390_){
_start:
{
uint8_t v_minLv_boxed_1391_; uint8_t v_ansiMode_boxed_1392_; lean_object* v_res_1393_; 
v_minLv_boxed_1391_ = lean_unbox(v_minLv_1389_);
v_ansiMode_boxed_1392_ = lean_unbox(v_ansiMode_1390_);
v_res_1393_ = l_Lake_MonadLog_stdout___redArg(v_inst_1388_, v_minLv_boxed_1391_, v_ansiMode_boxed_1392_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout(lean_object* v_m_1394_, lean_object* v_inst_1395_, uint8_t v_minLv_1396_, uint8_t v_ansiMode_1397_){
_start:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___f_1401_; 
v___x_1398_ = lean_box(0);
v___x_1399_ = lean_box(v_minLv_1396_);
v___x_1400_ = lean_box(v_ansiMode_1397_);
v___f_1401_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stdout___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1401_, 0, v___x_1398_);
lean_closure_set(v___f_1401_, 1, v___x_1399_);
lean_closure_set(v___f_1401_, 2, v___x_1400_);
lean_closure_set(v___f_1401_, 3, v_inst_1395_);
return v___f_1401_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stdout___boxed(lean_object* v_m_1402_, lean_object* v_inst_1403_, lean_object* v_minLv_1404_, lean_object* v_ansiMode_1405_){
_start:
{
uint8_t v_minLv_boxed_1406_; uint8_t v_ansiMode_boxed_1407_; lean_object* v_res_1408_; 
v_minLv_boxed_1406_ = lean_unbox(v_minLv_1404_);
v_ansiMode_boxed_1407_ = lean_unbox(v_ansiMode_1405_);
v_res_1408_ = l_Lake_MonadLog_stdout(v_m_1402_, v_inst_1403_, v_minLv_boxed_1406_, v_ansiMode_boxed_1407_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___redArg(lean_object* v_inst_1409_, uint8_t v_minLv_1410_, uint8_t v_ansiMode_1411_){
_start:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___f_1415_; 
v___x_1412_ = lean_box(1);
v___x_1413_ = lean_box(v_minLv_1410_);
v___x_1414_ = lean_box(v_ansiMode_1411_);
v___f_1415_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stdout___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1415_, 0, v___x_1412_);
lean_closure_set(v___f_1415_, 1, v___x_1413_);
lean_closure_set(v___f_1415_, 2, v___x_1414_);
lean_closure_set(v___f_1415_, 3, v_inst_1409_);
return v___f_1415_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___redArg___boxed(lean_object* v_inst_1416_, lean_object* v_minLv_1417_, lean_object* v_ansiMode_1418_){
_start:
{
uint8_t v_minLv_boxed_1419_; uint8_t v_ansiMode_boxed_1420_; lean_object* v_res_1421_; 
v_minLv_boxed_1419_ = lean_unbox(v_minLv_1417_);
v_ansiMode_boxed_1420_ = lean_unbox(v_ansiMode_1418_);
v_res_1421_ = l_Lake_MonadLog_stderr___redArg(v_inst_1416_, v_minLv_boxed_1419_, v_ansiMode_boxed_1420_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr(lean_object* v_m_1422_, lean_object* v_inst_1423_, uint8_t v_minLv_1424_, uint8_t v_ansiMode_1425_){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___f_1429_; 
v___x_1426_ = lean_box(1);
v___x_1427_ = lean_box(v_minLv_1424_);
v___x_1428_ = lean_box(v_ansiMode_1425_);
v___f_1429_ = lean_alloc_closure((void*)(l_Lake_MonadLog_stdout___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1429_, 0, v___x_1426_);
lean_closure_set(v___f_1429_, 1, v___x_1427_);
lean_closure_set(v___f_1429_, 2, v___x_1428_);
lean_closure_set(v___f_1429_, 3, v_inst_1423_);
return v___f_1429_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_stderr___boxed(lean_object* v_m_1430_, lean_object* v_inst_1431_, lean_object* v_minLv_1432_, lean_object* v_ansiMode_1433_){
_start:
{
uint8_t v_minLv_boxed_1434_; uint8_t v_ansiMode_boxed_1435_; lean_object* v_res_1436_; 
v_minLv_boxed_1434_ = lean_unbox(v_minLv_1432_);
v_ansiMode_boxed_1435_ = lean_unbox(v_ansiMode_1433_);
v_res_1436_ = l_Lake_MonadLog_stderr(v_m_1430_, v_inst_1431_, v_minLv_boxed_1434_, v_ansiMode_boxed_1435_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___lam__0(lean_object* v_val_1437_, uint8_t v_minLv_1438_, uint8_t v_val_1439_, lean_object* v_inst_1440_, lean_object* v_e_1441_){
_start:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1442_ = lean_box(v_minLv_1438_);
v___x_1443_ = lean_box(v_val_1439_);
v___x_1444_ = lean_alloc_closure((void*)(l_Lake_logToStream___boxed), 5, 4);
lean_closure_set(v___x_1444_, 0, v_e_1441_);
lean_closure_set(v___x_1444_, 1, v_val_1437_);
lean_closure_set(v___x_1444_, 2, v___x_1442_);
lean_closure_set(v___x_1444_, 3, v___x_1443_);
v___x_1445_ = lean_apply_2(v_inst_1440_, lean_box(0), v___x_1444_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___lam__0___boxed(lean_object* v_val_1446_, lean_object* v_minLv_1447_, lean_object* v_val_1448_, lean_object* v_inst_1449_, lean_object* v_e_1450_){
_start:
{
uint8_t v_minLv_boxed_1451_; uint8_t v_val_106__boxed_1452_; lean_object* v_res_1453_; 
v_minLv_boxed_1451_ = lean_unbox(v_minLv_1447_);
v_val_106__boxed_1452_ = lean_unbox(v_val_1448_);
v_res_1453_ = l_Lake_OutStream_getLogger___redArg___lam__0(v_val_1446_, v_minLv_boxed_1451_, v_val_106__boxed_1452_, v_inst_1449_, v_e_1450_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg(lean_object* v_inst_1454_, lean_object* v_out_1455_, uint8_t v_minLv_1456_, uint8_t v_ansiMode_1457_){
_start:
{
lean_object* v___x_1459_; uint8_t v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___f_1463_; 
v___x_1459_ = l_Lake_OutStream_get(v_out_1455_);
lean_inc_ref(v___x_1459_);
v___x_1460_ = l_Lake_AnsiMode_isEnabled(v___x_1459_, v_ansiMode_1457_);
v___x_1461_ = lean_box(v_minLv_1456_);
v___x_1462_ = lean_box(v___x_1460_);
v___f_1463_ = lean_alloc_closure((void*)(l_Lake_OutStream_getLogger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1463_, 0, v___x_1459_);
lean_closure_set(v___f_1463_, 1, v___x_1461_);
lean_closure_set(v___f_1463_, 2, v___x_1462_);
lean_closure_set(v___f_1463_, 3, v_inst_1454_);
return v___f_1463_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___redArg___boxed(lean_object* v_inst_1464_, lean_object* v_out_1465_, lean_object* v_minLv_1466_, lean_object* v_ansiMode_1467_, lean_object* v___y_1468_){
_start:
{
uint8_t v_minLv_boxed_1469_; uint8_t v_ansiMode_boxed_1470_; lean_object* v_res_1471_; 
v_minLv_boxed_1469_ = lean_unbox(v_minLv_1466_);
v_ansiMode_boxed_1470_ = lean_unbox(v_ansiMode_1467_);
v_res_1471_ = l_Lake_OutStream_getLogger___redArg(v_inst_1464_, v_out_1465_, v_minLv_boxed_1469_, v_ansiMode_boxed_1470_);
lean_dec(v_out_1465_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger(lean_object* v_m_1472_, lean_object* v_inst_1473_, lean_object* v_out_1474_, uint8_t v_minLv_1475_, uint8_t v_ansiMode_1476_){
_start:
{
lean_object* v___x_1478_; uint8_t v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___f_1482_; 
v___x_1478_ = l_Lake_OutStream_get(v_out_1474_);
lean_inc_ref(v___x_1478_);
v___x_1479_ = l_Lake_AnsiMode_isEnabled(v___x_1478_, v_ansiMode_1476_);
v___x_1480_ = lean_box(v_minLv_1475_);
v___x_1481_ = lean_box(v___x_1479_);
v___f_1482_ = lean_alloc_closure((void*)(l_Lake_OutStream_getLogger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1482_, 0, v___x_1478_);
lean_closure_set(v___f_1482_, 1, v___x_1480_);
lean_closure_set(v___f_1482_, 2, v___x_1481_);
lean_closure_set(v___f_1482_, 3, v_inst_1473_);
return v___f_1482_;
}
}
LEAN_EXPORT lean_object* l_Lake_OutStream_getLogger___boxed(lean_object* v_m_1483_, lean_object* v_inst_1484_, lean_object* v_out_1485_, lean_object* v_minLv_1486_, lean_object* v_ansiMode_1487_, lean_object* v___y_1488_){
_start:
{
uint8_t v_minLv_boxed_1489_; uint8_t v_ansiMode_boxed_1490_; lean_object* v_res_1491_; 
v_minLv_boxed_1489_ = lean_unbox(v_minLv_1486_);
v_ansiMode_boxed_1490_ = lean_unbox(v_ansiMode_1487_);
v_res_1491_ = l_Lake_OutStream_getLogger(v_m_1483_, v_inst_1484_, v_out_1485_, v_minLv_boxed_1489_, v_ansiMode_boxed_1490_);
lean_dec(v_out_1485_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0(lean_object* v_inst_1492_, lean_object* v_inst_1493_, lean_object* v_x_1494_){
_start:
{
lean_object* v___x_1495_; 
v___x_1495_ = lean_apply_2(v_inst_1492_, lean_box(0), v_inst_1493_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0___boxed(lean_object* v_inst_1496_, lean_object* v_inst_1497_, lean_object* v_x_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0(v_inst_1496_, v_inst_1497_, v_x_1498_);
lean_dec(v_x_1498_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure___redArg(lean_object* v_inst_1500_, lean_object* v_inst_1501_){
_start:
{
lean_object* v___f_1502_; lean_object* v___x_1503_; 
v___f_1502_ = lean_alloc_closure((void*)(l_Lake_MonadLogT_instInhabitedOfPure___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1502_, 0, v_inst_1500_);
lean_closure_set(v___f_1502_, 1, v_inst_1501_);
v___x_1503_ = lean_alloc_closure((void*)(l_ReaderT_mk___boxed), 5, 4);
lean_closure_set(v___x_1503_, 0, lean_box(0));
lean_closure_set(v___x_1503_, 1, lean_box(0));
lean_closure_set(v___x_1503_, 2, lean_box(0));
lean_closure_set(v___x_1503_, 3, v___f_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instInhabitedOfPure(lean_object* v_n_1504_, lean_object* v_00_u03b1_1505_, lean_object* v_m_1506_, lean_object* v_inst_1507_, lean_object* v_inst_1508_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_Lake_MonadLogT_instInhabitedOfPure___redArg(v_inst_1507_, v_inst_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__0(lean_object* v_e_1510_, lean_object* v_inst_1511_, lean_object* v_a_1512_){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1513_ = lean_apply_1(v_a_1512_, v_e_1510_);
v___x_1514_ = lean_apply_2(v_inst_1511_, lean_box(0), v___x_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1(lean_object* v_inst_1515_, lean_object* v_inst_1516_, lean_object* v_e_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v_toApplicative_1519_; lean_object* v_toBind_1520_; lean_object* v_toPure_1521_; lean_object* v___f_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; 
v_toApplicative_1519_ = lean_ctor_get(v_inst_1515_, 0);
lean_inc_ref(v_toApplicative_1519_);
v_toBind_1520_ = lean_ctor_get(v_inst_1515_, 1);
lean_inc(v_toBind_1520_);
lean_dec_ref(v_inst_1515_);
v_toPure_1521_ = lean_ctor_get(v_toApplicative_1519_, 1);
lean_inc(v_toPure_1521_);
lean_dec_ref(v_toApplicative_1519_);
v___f_1522_ = lean_alloc_closure((void*)(l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1522_, 0, v_e_1517_);
lean_closure_set(v___f_1522_, 1, v_inst_1516_);
lean_inc(v___y_1518_);
v___x_1523_ = lean_apply_2(v_toPure_1521_, lean_box(0), v___y_1518_);
v___x_1524_ = lean_apply_4(v_toBind_1520_, lean_box(0), lean_box(0), v___x_1523_, v___f_1522_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1___boxed(lean_object* v_inst_1525_, lean_object* v_inst_1526_, lean_object* v_e_1527_, lean_object* v___y_1528_){
_start:
{
lean_object* v_res_1529_; 
v_res_1529_ = l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1(v_inst_1525_, v_inst_1526_, v_e_1527_, v___y_1528_);
lean_dec(v___y_1528_);
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg(lean_object* v_inst_1530_, lean_object* v_inst_1531_){
_start:
{
lean_object* v___f_1532_; 
v___f_1532_ = lean_alloc_closure((void*)(l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1532_, 0, v_inst_1530_);
lean_closure_set(v___f_1532_, 1, v_inst_1531_);
return v___f_1532_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT(lean_object* v_n_1533_, lean_object* v_m_1534_, lean_object* v_inst_1535_, lean_object* v_inst_1536_){
_start:
{
lean_object* v___f_1537_; 
v___f_1537_ = lean_alloc_closure((void*)(l_Lake_MonadLogT_instMonadLogOfMonadOfMonadLiftT___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1537_, 0, v_inst_1535_);
lean_closure_set(v___f_1537_, 1, v_inst_1536_);
return v___f_1537_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___redArg(lean_object* v_f_1538_, lean_object* v_self_1539_, lean_object* v___y_1540_){
_start:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; 
lean_inc(v___y_1540_);
v___x_1541_ = lean_apply_1(v_f_1538_, v___y_1540_);
v___x_1542_ = lean_apply_1(v_self_1539_, v___x_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___redArg___boxed(lean_object* v_f_1543_, lean_object* v_self_1544_, lean_object* v___y_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Lake_MonadLogT_adaptMethods___redArg(v_f_1543_, v_self_1544_, v___y_1545_);
lean_dec(v___y_1545_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods(lean_object* v_n_1547_, lean_object* v_m_1548_, lean_object* v_m_x27_1549_, lean_object* v_00_u03b1_1550_, lean_object* v_inst_1551_, lean_object* v_f_1552_, lean_object* v_self_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; 
lean_inc(v___y_1554_);
v___x_1555_ = lean_apply_1(v_f_1552_, v___y_1554_);
v___x_1556_ = lean_apply_1(v_self_1553_, v___x_1555_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_adaptMethods___boxed(lean_object* v_n_1557_, lean_object* v_m_1558_, lean_object* v_m_x27_1559_, lean_object* v_00_u03b1_1560_, lean_object* v_inst_1561_, lean_object* v_f_1562_, lean_object* v_self_1563_, lean_object* v___y_1564_){
_start:
{
lean_object* v_res_1565_; 
v_res_1565_ = l_Lake_MonadLogT_adaptMethods(v_n_1557_, v_m_1558_, v_m_x27_1559_, v_00_u03b1_1560_, v_inst_1561_, v_f_1562_, v_self_1563_, v___y_1564_);
lean_dec(v___y_1564_);
lean_dec_ref(v_inst_1561_);
return v_res_1565_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_ignoreLog___redArg(lean_object* v_inst_1566_, lean_object* v_self_1567_){
_start:
{
lean_object* v___f_1568_; lean_object* v___x_1569_; 
v___f_1568_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1568_, 0, v_inst_1566_);
v___x_1569_ = lean_apply_1(v_self_1567_, v___f_1568_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLogT_ignoreLog(lean_object* v_m_1570_, lean_object* v_n_1571_, lean_object* v_00_u03b1_1572_, lean_object* v_inst_1573_, lean_object* v_self_1574_){
_start:
{
lean_object* v___f_1575_; lean_object* v___x_1576_; 
v___f_1575_ = lean_alloc_closure((void*)(l_Lake_MonadLog_nop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1575_, 0, v_inst_1573_);
v___x_1576_ = lean_apply_1(v_self_1574_, v___f_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonLog___lam__0(lean_object* v___x_1581_, lean_object* v_x_1582_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = l_Lean_Array_toJson___redArg(v___x_1581_, v_x_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lake_instFromJsonLog___lam__0(lean_object* v___x_1587_, lean_object* v_x_1588_){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Lean_Array_fromJson_x3f___redArg(v___x_1587_, v_x_1588_);
if (lean_obj_tag(v___x_1589_) == 0)
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
v_a_1590_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1589_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1589_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1590_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
v_a_1598_ = lean_ctor_get(v___x_1589_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1589_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1589_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1589_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
}
static lean_object* _init_l_Lake_Log_instInhabitedPos_default(void){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = lean_unsigned_to_nat(0u);
return v___x_1609_;
}
}
static lean_object* _init_l_Lake_Log_instInhabitedPos(void){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = lean_unsigned_to_nat(0u);
return v___x_1610_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_instDecidableEqPos_decEq(lean_object* v_x_1611_, lean_object* v_x_1612_){
_start:
{
uint8_t v___x_1613_; 
v___x_1613_ = lean_nat_dec_eq(v_x_1611_, v_x_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_instDecidableEqPos_decEq___boxed(lean_object* v_x_1614_, lean_object* v_x_1615_){
_start:
{
uint8_t v_res_1616_; lean_object* v_r_1617_; 
v_res_1616_ = l_Lake_Log_instDecidableEqPos_decEq(v_x_1614_, v_x_1615_);
lean_dec(v_x_1615_);
lean_dec(v_x_1614_);
v_r_1617_ = lean_box(v_res_1616_);
return v_r_1617_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_instDecidableEqPos(lean_object* v_x_1618_, lean_object* v_x_1619_){
_start:
{
uint8_t v___x_1620_; 
v___x_1620_ = lean_nat_dec_eq(v_x_1618_, v_x_1619_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_instDecidableEqPos___boxed(lean_object* v_x_1621_, lean_object* v_x_1622_){
_start:
{
uint8_t v_res_1623_; lean_object* v_r_1624_; 
v_res_1623_ = l_Lake_Log_instDecidableEqPos(v_x_1621_, v_x_1622_);
lean_dec(v_x_1622_);
lean_dec(v_x_1621_);
v_r_1624_ = lean_box(v_res_1623_);
return v_r_1624_;
}
}
static lean_object* _init_l_Lake_instOfNatPos(void){
_start:
{
lean_object* v___x_1625_; 
v___x_1625_ = lean_unsigned_to_nat(0u);
return v___x_1625_;
}
}
LEAN_EXPORT uint8_t l_Lake_instOrdPos___lam__0(lean_object* v_x1_1626_, lean_object* v_x2_1627_){
_start:
{
uint8_t v___x_1628_; 
v___x_1628_ = lean_nat_dec_lt(v_x1_1626_, v_x2_1627_);
if (v___x_1628_ == 0)
{
uint8_t v___x_1629_; 
v___x_1629_ = lean_nat_dec_eq(v_x1_1626_, v_x2_1627_);
if (v___x_1629_ == 0)
{
uint8_t v___x_1630_; 
v___x_1630_ = 2;
return v___x_1630_;
}
else
{
uint8_t v___x_1631_; 
v___x_1631_ = 1;
return v___x_1631_;
}
}
else
{
uint8_t v___x_1632_; 
v___x_1632_ = 0;
return v___x_1632_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instOrdPos___lam__0___boxed(lean_object* v_x1_1633_, lean_object* v_x2_1634_){
_start:
{
uint8_t v_res_1635_; lean_object* v_r_1636_; 
v_res_1635_ = l_Lake_instOrdPos___lam__0(v_x1_1633_, v_x2_1634_);
lean_dec(v_x2_1634_);
lean_dec(v_x1_1633_);
v_r_1636_ = lean_box(v_res_1635_);
return v_r_1636_;
}
}
static lean_object* _init_l_Lake_instLTPos(void){
_start:
{
lean_object* v___x_1639_; 
v___x_1639_ = lean_box(0);
return v___x_1639_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableRelPosLt(lean_object* v_a_1640_, lean_object* v_b_1641_){
_start:
{
uint8_t v___x_1642_; 
v___x_1642_ = lean_nat_dec_lt(v_a_1640_, v_b_1641_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableRelPosLt___boxed(lean_object* v_a_1643_, lean_object* v_b_1644_){
_start:
{
uint8_t v_res_1645_; lean_object* v_r_1646_; 
v_res_1645_ = l_Lake_instDecidableRelPosLt(v_a_1643_, v_b_1644_);
lean_dec(v_b_1644_);
lean_dec(v_a_1643_);
v_r_1646_ = lean_box(v_res_1645_);
return v_r_1646_;
}
}
static lean_object* _init_l_Lake_instLEPos(void){
_start:
{
lean_object* v___x_1647_; 
v___x_1647_ = lean_box(0);
return v___x_1647_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableRelPosLe(lean_object* v_a_1648_, lean_object* v_b_1649_){
_start:
{
uint8_t v___x_1650_; 
v___x_1650_ = lean_nat_dec_le(v_a_1648_, v_b_1649_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableRelPosLe___boxed(lean_object* v_a_1651_, lean_object* v_b_1652_){
_start:
{
uint8_t v_res_1653_; lean_object* v_r_1654_; 
v_res_1653_ = l_Lake_instDecidableRelPosLe(v_a_1651_, v_b_1652_);
lean_dec(v_b_1652_);
lean_dec(v_a_1651_);
v_r_1654_ = lean_box(v_res_1653_);
return v_r_1654_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMinPos___lam__0(lean_object* v_x_1655_, lean_object* v_y_1656_){
_start:
{
uint8_t v___x_1657_; 
v___x_1657_ = lean_nat_dec_le(v_x_1655_, v_y_1656_);
if (v___x_1657_ == 0)
{
lean_inc(v_y_1656_);
return v_y_1656_;
}
else
{
lean_inc(v_x_1655_);
return v_x_1655_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMinPos___lam__0___boxed(lean_object* v_x_1658_, lean_object* v_y_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l_Lake_instMinPos___lam__0(v_x_1658_, v_y_1659_);
lean_dec(v_y_1659_);
lean_dec(v_x_1658_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMaxPos___lam__0(lean_object* v_x_1663_, lean_object* v_y_1664_){
_start:
{
uint8_t v___x_1665_; 
v___x_1665_ = lean_nat_dec_le(v_x_1663_, v_y_1664_);
if (v___x_1665_ == 0)
{
lean_inc(v_x_1663_);
return v_x_1663_;
}
else
{
lean_inc(v_y_1664_);
return v_y_1664_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMaxPos___lam__0___boxed(lean_object* v_x_1666_, lean_object* v_y_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l_Lake_instMaxPos___lam__0(v_x_1666_, v_y_1667_);
lean_dec(v_y_1667_);
lean_dec(v_x_1666_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_size(lean_object* v_log_1675_){
_start:
{
lean_object* v___x_1676_; 
v___x_1676_ = lean_array_get_size(v_log_1675_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_size___boxed(lean_object* v_log_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Lake_Log_size(v_log_1677_);
lean_dec_ref(v_log_1677_);
return v_res_1678_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_isEmpty(lean_object* v_log_1679_){
_start:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; uint8_t v___x_1682_; 
v___x_1680_ = lean_array_get_size(v_log_1679_);
v___x_1681_ = lean_unsigned_to_nat(0u);
v___x_1682_ = lean_nat_dec_eq(v___x_1680_, v___x_1681_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_isEmpty___boxed(lean_object* v_log_1683_){
_start:
{
uint8_t v_res_1684_; lean_object* v_r_1685_; 
v_res_1684_ = l_Lake_Log_isEmpty(v_log_1683_);
lean_dec_ref(v_log_1683_);
v_r_1685_ = lean_box(v_res_1684_);
return v_r_1685_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_hasEntries(lean_object* v_log_1686_){
_start:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; uint8_t v___x_1689_; 
v___x_1687_ = lean_array_get_size(v_log_1686_);
v___x_1688_ = lean_unsigned_to_nat(0u);
v___x_1689_ = lean_nat_dec_eq(v___x_1687_, v___x_1688_);
if (v___x_1689_ == 0)
{
uint8_t v___x_1690_; 
v___x_1690_ = 1;
return v___x_1690_;
}
else
{
uint8_t v___x_1691_; 
v___x_1691_ = 0;
return v___x_1691_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_hasEntries___boxed(lean_object* v_log_1692_){
_start:
{
uint8_t v_res_1693_; lean_object* v_r_1694_; 
v_res_1693_ = l_Lake_Log_hasEntries(v_log_1692_);
lean_dec_ref(v_log_1692_);
v_r_1694_ = lean_box(v_res_1693_);
return v_r_1694_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_endPos(lean_object* v_log_1695_){
_start:
{
lean_object* v___x_1696_; 
v___x_1696_ = lean_array_get_size(v_log_1695_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_endPos___boxed(lean_object* v_log_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l_Lake_Log_endPos(v_log_1697_);
lean_dec_ref(v_log_1697_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_push(lean_object* v_log_1699_, lean_object* v_e_1700_){
_start:
{
lean_object* v___x_1701_; 
v___x_1701_ = lean_array_push(v_log_1699_, v_e_1700_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_append(lean_object* v_log_1702_, lean_object* v_o_1703_){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = l_Array_append___redArg(v_log_1702_, v_o_1703_);
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_append___boxed(lean_object* v_log_1705_, lean_object* v_o_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l_Lake_Log_append(v_log_1705_, v_o_1706_);
lean_dec_ref(v_o_1706_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_extract(lean_object* v_log_1710_, lean_object* v_start_1711_, lean_object* v_stop_1712_){
_start:
{
lean_object* v___x_1713_; 
v___x_1713_ = l_Array_extract___redArg(v_log_1710_, v_start_1711_, v_stop_1712_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_extract___boxed(lean_object* v_log_1714_, lean_object* v_start_1715_, lean_object* v_stop_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_Lake_Log_extract(v_log_1714_, v_start_1715_, v_stop_1716_);
lean_dec_ref(v_log_1714_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_dropFrom(lean_object* v_log_1718_, lean_object* v_pos_1719_){
_start:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Array_shrink___redArg(v_log_1718_, v_pos_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_dropFrom___boxed(lean_object* v_log_1721_, lean_object* v_pos_1722_){
_start:
{
lean_object* v_res_1723_; 
v_res_1723_ = l_Lake_Log_dropFrom(v_log_1721_, v_pos_1722_);
lean_dec(v_pos_1722_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_takeFrom(lean_object* v_log_1724_, lean_object* v_pos_1725_){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; 
v___x_1726_ = lean_array_get_size(v_log_1724_);
v___x_1727_ = l_Array_extract___redArg(v_log_1724_, v_pos_1725_, v___x_1726_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_takeFrom___boxed(lean_object* v_log_1728_, lean_object* v_pos_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l_Lake_Log_takeFrom(v_log_1728_, v_pos_1729_);
lean_dec_ref(v_log_1728_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_split(lean_object* v_log_1731_, lean_object* v_pos_1732_){
_start:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
lean_inc_ref(v_log_1731_);
v___x_1733_ = l_Array_shrink___redArg(v_log_1731_, v_pos_1732_);
v___x_1734_ = lean_array_get_size(v_log_1731_);
v___x_1735_ = l_Array_extract___redArg(v_log_1731_, v_pos_1732_, v___x_1734_);
lean_dec_ref(v_log_1731_);
v___x_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1733_);
lean_ctor_set(v___x_1736_, 1, v___x_1735_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0(lean_object* v_as_1738_, size_t v_i_1739_, size_t v_stop_1740_, lean_object* v_b_1741_){
_start:
{
uint8_t v___x_1742_; 
v___x_1742_ = lean_usize_dec_eq(v_i_1739_, v_stop_1740_);
if (v___x_1742_ == 0)
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; size_t v___x_1748_; size_t v___x_1749_; 
v___x_1743_ = lean_array_uget_borrowed(v_as_1738_, v_i_1739_);
v___x_1744_ = l_Lake_LogEntry_toString(v___x_1743_, v___x_1742_);
v___x_1745_ = lean_string_append(v_b_1741_, v___x_1744_);
lean_dec_ref(v___x_1744_);
v___x_1746_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___closed__0));
v___x_1747_ = lean_string_append(v___x_1745_, v___x_1746_);
v___x_1748_ = ((size_t)1ULL);
v___x_1749_ = lean_usize_add(v_i_1739_, v___x_1748_);
v_i_1739_ = v___x_1749_;
v_b_1741_ = v___x_1747_;
goto _start;
}
else
{
return v_b_1741_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0___boxed(lean_object* v_as_1751_, lean_object* v_i_1752_, lean_object* v_stop_1753_, lean_object* v_b_1754_){
_start:
{
size_t v_i_boxed_1755_; size_t v_stop_boxed_1756_; lean_object* v_res_1757_; 
v_i_boxed_1755_ = lean_unbox_usize(v_i_1752_);
lean_dec(v_i_1752_);
v_stop_boxed_1756_ = lean_unbox_usize(v_stop_1753_);
lean_dec(v_stop_1753_);
v_res_1757_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0(v_as_1751_, v_i_boxed_1755_, v_stop_boxed_1756_, v_b_1754_);
lean_dec_ref(v_as_1751_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_toString(lean_object* v_log_1758_){
_start:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; uint8_t v___x_1762_; 
v___x_1759_ = ((lean_object*)(l_Lake_instInhabitedLogEntry_default___closed__0));
v___x_1760_ = lean_unsigned_to_nat(0u);
v___x_1761_ = lean_array_get_size(v_log_1758_);
v___x_1762_ = lean_nat_dec_lt(v___x_1760_, v___x_1761_);
if (v___x_1762_ == 0)
{
return v___x_1759_;
}
else
{
uint8_t v___x_1763_; 
v___x_1763_ = lean_nat_dec_le(v___x_1761_, v___x_1761_);
if (v___x_1763_ == 0)
{
if (v___x_1762_ == 0)
{
return v___x_1759_;
}
else
{
size_t v___x_1764_; size_t v___x_1765_; lean_object* v___x_1766_; 
v___x_1764_ = ((size_t)0ULL);
v___x_1765_ = lean_usize_of_nat(v___x_1761_);
v___x_1766_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0(v_log_1758_, v___x_1764_, v___x_1765_, v___x_1759_);
return v___x_1766_;
}
}
else
{
size_t v___x_1767_; size_t v___x_1768_; lean_object* v___x_1769_; 
v___x_1767_ = ((size_t)0ULL);
v___x_1768_ = lean_usize_of_nat(v___x_1761_);
v___x_1769_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_toString_spec__0(v_log_1758_, v___x_1767_, v___x_1768_, v___x_1759_);
return v___x_1769_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_toString___boxed(lean_object* v_log_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l_Lake_Log_toString(v_log_1770_);
lean_dec_ref(v_log_1770_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_replay___redArg___lam__0(lean_object* v_logger_1774_, lean_object* v_x_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v___x_1777_; 
v___x_1777_ = lean_apply_1(v_logger_1774_, v___y_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_replay___redArg(lean_object* v_inst_1778_, lean_object* v_logger_1779_, lean_object* v_log_1780_){
_start:
{
lean_object* v_toApplicative_1781_; lean_object* v_toPure_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; 
v_toApplicative_1781_ = lean_ctor_get(v_inst_1778_, 0);
v_toPure_1782_ = lean_ctor_get(v_toApplicative_1781_, 1);
v___x_1783_ = lean_unsigned_to_nat(0u);
v___x_1784_ = lean_array_get_size(v_log_1780_);
v___x_1785_ = lean_box(0);
v___x_1786_ = lean_nat_dec_lt(v___x_1783_, v___x_1784_);
if (v___x_1786_ == 0)
{
lean_object* v___x_1787_; 
lean_inc(v_toPure_1782_);
lean_dec_ref(v_log_1780_);
lean_dec(v_logger_1779_);
lean_dec_ref(v_inst_1778_);
v___x_1787_ = lean_apply_2(v_toPure_1782_, lean_box(0), v___x_1785_);
return v___x_1787_;
}
else
{
lean_object* v___f_1788_; uint8_t v___x_1789_; 
v___f_1788_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1788_, 0, v_logger_1779_);
v___x_1789_ = lean_nat_dec_le(v___x_1784_, v___x_1784_);
if (v___x_1789_ == 0)
{
if (v___x_1786_ == 0)
{
lean_object* v___x_1790_; 
lean_inc(v_toPure_1782_);
lean_dec_ref(v___f_1788_);
lean_dec_ref(v_log_1780_);
lean_dec_ref(v_inst_1778_);
v___x_1790_ = lean_apply_2(v_toPure_1782_, lean_box(0), v___x_1785_);
return v___x_1790_;
}
else
{
size_t v___x_1791_; size_t v___x_1792_; lean_object* v___x_1793_; 
v___x_1791_ = ((size_t)0ULL);
v___x_1792_ = lean_usize_of_nat(v___x_1784_);
v___x_1793_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1778_, v___f_1788_, v_log_1780_, v___x_1791_, v___x_1792_, v___x_1785_);
return v___x_1793_;
}
}
else
{
size_t v___x_1794_; size_t v___x_1795_; lean_object* v___x_1796_; 
v___x_1794_ = ((size_t)0ULL);
v___x_1795_ = lean_usize_of_nat(v___x_1784_);
v___x_1796_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1778_, v___f_1788_, v_log_1780_, v___x_1794_, v___x_1795_, v___x_1785_);
return v___x_1796_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_replay(lean_object* v_m_1797_, lean_object* v_inst_1798_, lean_object* v_logger_1799_, lean_object* v_log_1800_){
_start:
{
lean_object* v_toApplicative_1801_; lean_object* v_toPure_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; uint8_t v___x_1806_; 
v_toApplicative_1801_ = lean_ctor_get(v_inst_1798_, 0);
v_toPure_1802_ = lean_ctor_get(v_toApplicative_1801_, 1);
v___x_1803_ = lean_unsigned_to_nat(0u);
v___x_1804_ = lean_array_get_size(v_log_1800_);
v___x_1805_ = lean_box(0);
v___x_1806_ = lean_nat_dec_lt(v___x_1803_, v___x_1804_);
if (v___x_1806_ == 0)
{
lean_object* v___x_1807_; 
lean_inc(v_toPure_1802_);
lean_dec_ref(v_log_1800_);
lean_dec(v_logger_1799_);
lean_dec_ref(v_inst_1798_);
v___x_1807_ = lean_apply_2(v_toPure_1802_, lean_box(0), v___x_1805_);
return v___x_1807_;
}
else
{
lean_object* v___f_1808_; uint8_t v___x_1809_; 
v___f_1808_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1808_, 0, v_logger_1799_);
v___x_1809_ = lean_nat_dec_le(v___x_1804_, v___x_1804_);
if (v___x_1809_ == 0)
{
if (v___x_1806_ == 0)
{
lean_object* v___x_1810_; 
lean_inc(v_toPure_1802_);
lean_dec_ref(v___f_1808_);
lean_dec_ref(v_log_1800_);
lean_dec_ref(v_inst_1798_);
v___x_1810_ = lean_apply_2(v_toPure_1802_, lean_box(0), v___x_1805_);
return v___x_1810_;
}
else
{
size_t v___x_1811_; size_t v___x_1812_; lean_object* v___x_1813_; 
v___x_1811_ = ((size_t)0ULL);
v___x_1812_ = lean_usize_of_nat(v___x_1804_);
v___x_1813_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1798_, v___f_1808_, v_log_1800_, v___x_1811_, v___x_1812_, v___x_1805_);
return v___x_1813_;
}
}
else
{
size_t v___x_1814_; size_t v___x_1815_; lean_object* v___x_1816_; 
v___x_1814_ = ((size_t)0ULL);
v___x_1815_ = lean_usize_of_nat(v___x_1804_);
v___x_1816_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1798_, v___f_1808_, v_log_1800_, v___x_1814_, v___x_1815_, v___x_1805_);
return v___x_1816_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_filter___lam__0(lean_object* v_f_1817_, lean_object* v_x1_1818_, lean_object* v_x2_1819_){
_start:
{
lean_object* v___x_1820_; uint8_t v___x_1821_; 
lean_inc_ref(v_x2_1819_);
v___x_1820_ = lean_apply_1(v_f_1817_, v_x2_1819_);
v___x_1821_ = lean_unbox(v___x_1820_);
if (v___x_1821_ == 0)
{
lean_dec_ref(v_x2_1819_);
return v_x1_1818_;
}
else
{
lean_object* v___x_1822_; 
v___x_1822_ = lean_array_push(v_x1_1818_, v_x2_1819_);
return v___x_1822_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_filter(lean_object* v_f_1842_, lean_object* v_log_1843_){
_start:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; uint8_t v___x_1848_; 
v___x_1844_ = lean_unsigned_to_nat(0u);
v___x_1845_ = lean_array_get_size(v_log_1843_);
v___x_1846_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_1847_ = ((lean_object*)(l_Lake_Log_filter___closed__9));
v___x_1848_ = lean_nat_dec_lt(v___x_1844_, v___x_1845_);
if (v___x_1848_ == 0)
{
lean_dec_ref(v_log_1843_);
lean_dec_ref(v_f_1842_);
return v___x_1846_;
}
else
{
lean_object* v___f_1849_; uint8_t v___x_1850_; 
v___f_1849_ = lean_alloc_closure((void*)(l_Lake_Log_filter___lam__0), 3, 1);
lean_closure_set(v___f_1849_, 0, v_f_1842_);
v___x_1850_ = lean_nat_dec_le(v___x_1845_, v___x_1845_);
if (v___x_1850_ == 0)
{
if (v___x_1848_ == 0)
{
lean_dec_ref(v___f_1849_);
lean_dec_ref(v_log_1843_);
return v___x_1846_;
}
else
{
size_t v___x_1851_; size_t v___x_1852_; lean_object* v___x_1853_; 
v___x_1851_ = ((size_t)0ULL);
v___x_1852_ = lean_usize_of_nat(v___x_1845_);
v___x_1853_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1847_, v___f_1849_, v_log_1843_, v___x_1851_, v___x_1852_, v___x_1846_);
return v___x_1853_;
}
}
else
{
size_t v___x_1854_; size_t v___x_1855_; lean_object* v___x_1856_; 
v___x_1854_ = ((size_t)0ULL);
v___x_1855_ = lean_usize_of_nat(v___x_1845_);
v___x_1856_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1847_, v___f_1849_, v_log_1843_, v___x_1854_, v___x_1855_, v___x_1846_);
return v___x_1856_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_Log_any___lam__0(lean_object* v_f_1857_, lean_object* v_x_1858_){
_start:
{
lean_object* v___x_1859_; uint8_t v___x_1860_; 
v___x_1859_ = lean_apply_1(v_f_1857_, v_x_1858_);
v___x_1860_ = lean_unbox(v___x_1859_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lake_Log_any___lam__0___boxed(lean_object* v_f_1861_, lean_object* v_x_1862_){
_start:
{
uint8_t v_res_1863_; lean_object* v_r_1864_; 
v_res_1863_ = l_Lake_Log_any___lam__0(v_f_1861_, v_x_1862_);
v_r_1864_ = lean_box(v_res_1863_);
return v_r_1864_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_any(lean_object* v_f_1865_, lean_object* v_log_1866_){
_start:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; uint8_t v___x_1870_; 
v___x_1867_ = lean_unsigned_to_nat(0u);
v___x_1868_ = lean_array_get_size(v_log_1866_);
v___x_1869_ = ((lean_object*)(l_Lake_Log_filter___closed__9));
v___x_1870_ = lean_nat_dec_lt(v___x_1867_, v___x_1868_);
if (v___x_1870_ == 0)
{
lean_dec_ref(v_log_1866_);
lean_dec_ref(v_f_1865_);
return v___x_1870_;
}
else
{
if (v___x_1870_ == 0)
{
lean_dec_ref(v_log_1866_);
lean_dec_ref(v_f_1865_);
return v___x_1870_;
}
else
{
lean_object* v___f_1871_; size_t v___x_1872_; size_t v___x_1873_; lean_object* v___x_1874_; uint8_t v___x_1875_; 
v___f_1871_ = lean_alloc_closure((void*)(l_Lake_Log_any___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1871_, 0, v_f_1865_);
v___x_1872_ = ((size_t)0ULL);
v___x_1873_ = lean_usize_of_nat(v___x_1868_);
v___x_1874_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_1869_, v___f_1871_, v_log_1866_, v___x_1872_, v___x_1873_);
v___x_1875_ = lean_unbox(v___x_1874_);
lean_dec(v___x_1874_);
return v___x_1875_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_any___boxed(lean_object* v_f_1876_, lean_object* v_log_1877_){
_start:
{
uint8_t v_res_1878_; lean_object* v_r_1879_; 
v_res_1878_ = l_Lake_Log_any(v_f_1876_, v_log_1877_);
v_r_1879_ = lean_box(v_res_1878_);
return v_r_1879_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0(lean_object* v_as_1880_, size_t v_i_1881_, size_t v_stop_1882_, uint8_t v_b_1883_){
_start:
{
uint8_t v___y_1885_; uint8_t v___x_1889_; 
v___x_1889_ = lean_usize_dec_eq(v_i_1881_, v_stop_1882_);
if (v___x_1889_ == 0)
{
lean_object* v___x_1890_; uint8_t v_level_1891_; uint8_t v___x_1892_; 
v___x_1890_ = lean_array_uget_borrowed(v_as_1880_, v_i_1881_);
v_level_1891_ = lean_ctor_get_uint8(v___x_1890_, sizeof(void*)*1);
v___x_1892_ = l_Lake_instOrdLogLevel_ord(v_b_1883_, v_level_1891_);
if (v___x_1892_ == 2)
{
if (v___x_1889_ == 0)
{
v___y_1885_ = v_b_1883_;
goto v___jp_1884_;
}
else
{
v___y_1885_ = v_level_1891_;
goto v___jp_1884_;
}
}
else
{
v___y_1885_ = v_level_1891_;
goto v___jp_1884_;
}
}
else
{
return v_b_1883_;
}
v___jp_1884_:
{
size_t v___x_1886_; size_t v___x_1887_; 
v___x_1886_ = ((size_t)1ULL);
v___x_1887_ = lean_usize_add(v_i_1881_, v___x_1886_);
v_i_1881_ = v___x_1887_;
v_b_1883_ = v___y_1885_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0___boxed(lean_object* v_as_1893_, lean_object* v_i_1894_, lean_object* v_stop_1895_, lean_object* v_b_1896_){
_start:
{
size_t v_i_boxed_1897_; size_t v_stop_boxed_1898_; uint8_t v_b_boxed_1899_; uint8_t v_res_1900_; lean_object* v_r_1901_; 
v_i_boxed_1897_ = lean_unbox_usize(v_i_1894_);
lean_dec(v_i_1894_);
v_stop_boxed_1898_ = lean_unbox_usize(v_stop_1895_);
lean_dec(v_stop_1895_);
v_b_boxed_1899_ = lean_unbox(v_b_1896_);
v_res_1900_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0(v_as_1893_, v_i_boxed_1897_, v_stop_boxed_1898_, v_b_boxed_1899_);
lean_dec_ref(v_as_1893_);
v_r_1901_ = lean_box(v_res_1900_);
return v_r_1901_;
}
}
LEAN_EXPORT uint8_t l_Lake_Log_maxLv(lean_object* v_log_1902_){
_start:
{
uint8_t v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; uint8_t v___x_1906_; 
v___x_1903_ = 0;
v___x_1904_ = lean_unsigned_to_nat(0u);
v___x_1905_ = lean_array_get_size(v_log_1902_);
v___x_1906_ = lean_nat_dec_lt(v___x_1904_, v___x_1905_);
if (v___x_1906_ == 0)
{
return v___x_1903_;
}
else
{
uint8_t v___x_1907_; 
v___x_1907_ = lean_nat_dec_le(v___x_1905_, v___x_1905_);
if (v___x_1907_ == 0)
{
if (v___x_1906_ == 0)
{
return v___x_1903_;
}
else
{
size_t v___x_1908_; size_t v___x_1909_; uint8_t v___x_1910_; 
v___x_1908_ = ((size_t)0ULL);
v___x_1909_ = lean_usize_of_nat(v___x_1905_);
v___x_1910_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0(v_log_1902_, v___x_1908_, v___x_1909_, v___x_1903_);
return v___x_1910_;
}
}
else
{
size_t v___x_1911_; size_t v___x_1912_; uint8_t v___x_1913_; 
v___x_1911_ = ((size_t)0ULL);
v___x_1912_ = lean_usize_of_nat(v___x_1905_);
v___x_1913_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Log_maxLv_spec__0(v_log_1902_, v___x_1911_, v___x_1912_, v___x_1903_);
return v___x_1913_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Log_maxLv___boxed(lean_object* v_log_1914_){
_start:
{
uint8_t v_res_1915_; lean_object* v_r_1916_; 
v_res_1915_ = l_Lake_Log_maxLv(v_log_1914_);
lean_dec_ref(v_log_1914_);
v_r_1916_ = lean_box(v_res_1915_);
return v_r_1916_;
}
}
LEAN_EXPORT lean_object* l_Lake_pushLogEntry___redArg___lam__0(lean_object* v_e_1917_, lean_object* v_s_1918_){
_start:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1919_ = lean_box(0);
v___x_1920_ = lean_array_push(v_s_1918_, v_e_1917_);
v___x_1921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1921_, 0, v___x_1919_);
lean_ctor_set(v___x_1921_, 1, v___x_1920_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lake_pushLogEntry___redArg(lean_object* v_inst_1922_, lean_object* v_e_1923_){
_start:
{
lean_object* v_modifyGet_1924_; lean_object* v___f_1925_; lean_object* v___x_1926_; 
v_modifyGet_1924_ = lean_ctor_get(v_inst_1922_, 2);
lean_inc(v_modifyGet_1924_);
lean_dec_ref(v_inst_1922_);
v___f_1925_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1925_, 0, v_e_1923_);
v___x_1926_ = lean_apply_2(v_modifyGet_1924_, lean_box(0), v___f_1925_);
return v___x_1926_;
}
}
LEAN_EXPORT lean_object* l_Lake_pushLogEntry(lean_object* v_m_1927_, lean_object* v_inst_1928_, lean_object* v_e_1929_){
_start:
{
lean_object* v_modifyGet_1930_; lean_object* v___f_1931_; lean_object* v___x_1932_; 
v_modifyGet_1930_ = lean_ctor_get(v_inst_1928_, 2);
lean_inc(v_modifyGet_1930_);
lean_dec_ref(v_inst_1928_);
v___f_1931_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1931_, 0, v_e_1929_);
v___x_1932_ = lean_apply_2(v_modifyGet_1930_, lean_box(0), v___f_1931_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_ofMonadState___redArg(lean_object* v_inst_1933_){
_start:
{
lean_object* v___x_1934_; 
v___x_1934_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry), 3, 2);
lean_closure_set(v___x_1934_, 0, lean_box(0));
lean_closure_set(v___x_1934_, 1, v_inst_1933_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Lake_MonadLog_ofMonadState(lean_object* v_m_1935_, lean_object* v_inst_1936_){
_start:
{
lean_object* v___x_1937_; 
v___x_1937_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry), 3, 2);
lean_closure_set(v___x_1937_, 0, lean_box(0));
lean_closure_set(v___x_1937_, 1, v_inst_1936_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLog___redArg(lean_object* v_inst_1938_){
_start:
{
lean_object* v_get_1939_; 
v_get_1939_ = lean_ctor_get(v_inst_1938_, 0);
lean_inc(v_get_1939_);
return v_get_1939_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLog___redArg___boxed(lean_object* v_inst_1940_){
_start:
{
lean_object* v_res_1941_; 
v_res_1941_ = l_Lake_getLog___redArg(v_inst_1940_);
lean_dec_ref(v_inst_1940_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLog(lean_object* v_m_1942_, lean_object* v_inst_1943_){
_start:
{
lean_object* v_get_1944_; 
v_get_1944_ = lean_ctor_get(v_inst_1943_, 0);
lean_inc(v_get_1944_);
return v_get_1944_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLog___boxed(lean_object* v_m_1945_, lean_object* v_inst_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l_Lake_getLog(v_m_1945_, v_inst_1946_);
lean_dec_ref(v_inst_1946_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg___lam__0(lean_object* v_x_1948_){
_start:
{
lean_object* v___x_1949_; 
v___x_1949_ = lean_array_get_size(v_x_1948_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg___lam__0___boxed(lean_object* v_x_1950_){
_start:
{
lean_object* v_res_1951_; 
v_res_1951_ = l_Lake_getLogPos___redArg___lam__0(v_x_1950_);
lean_dec_ref(v_x_1950_);
return v_res_1951_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLogPos___redArg(lean_object* v_inst_1953_, lean_object* v_inst_1954_){
_start:
{
lean_object* v_map_1955_; lean_object* v_get_1956_; lean_object* v___f_1957_; lean_object* v___x_1958_; 
v_map_1955_ = lean_ctor_get(v_inst_1953_, 0);
lean_inc(v_map_1955_);
lean_dec_ref(v_inst_1953_);
v_get_1956_ = lean_ctor_get(v_inst_1954_, 0);
lean_inc(v_get_1956_);
lean_dec_ref(v_inst_1954_);
v___f_1957_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_1958_ = lean_apply_4(v_map_1955_, lean_box(0), lean_box(0), v___f_1957_, v_get_1956_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLogPos(lean_object* v_m_1959_, lean_object* v_inst_1960_, lean_object* v_inst_1961_){
_start:
{
lean_object* v_map_1962_; lean_object* v_get_1963_; lean_object* v___f_1964_; lean_object* v___x_1965_; 
v_map_1962_ = lean_ctor_get(v_inst_1960_, 0);
lean_inc(v_map_1962_);
lean_dec_ref(v_inst_1960_);
v_get_1963_ = lean_ctor_get(v_inst_1961_, 0);
lean_inc(v_get_1963_);
lean_dec_ref(v_inst_1961_);
v___f_1964_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_1965_ = lean_apply_4(v_map_1962_, lean_box(0), lean_box(0), v___f_1964_, v_get_1963_);
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLog___redArg___lam__0(lean_object* v_log_1966_){
_start:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_1968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1968_, 0, v_log_1966_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLog___redArg(lean_object* v_inst_1970_){
_start:
{
lean_object* v_modifyGet_1971_; lean_object* v___f_1972_; lean_object* v___x_1973_; 
v_modifyGet_1971_ = lean_ctor_get(v_inst_1970_, 2);
lean_inc(v_modifyGet_1971_);
lean_dec_ref(v_inst_1970_);
v___f_1972_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_1973_ = lean_apply_2(v_modifyGet_1971_, lean_box(0), v___f_1972_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLog(lean_object* v_m_1974_, lean_object* v_inst_1975_){
_start:
{
lean_object* v_modifyGet_1976_; lean_object* v___f_1977_; lean_object* v___x_1978_; 
v_modifyGet_1976_ = lean_ctor_get(v_inst_1975_, 2);
lean_inc(v_modifyGet_1976_);
lean_dec_ref(v_inst_1975_);
v___f_1977_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_1978_ = lean_apply_2(v_modifyGet_1976_, lean_box(0), v___f_1977_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLogFrom___redArg___lam__0(lean_object* v_pos_1979_, lean_object* v_log_1980_){
_start:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1981_ = lean_array_get_size(v_log_1980_);
lean_inc(v_pos_1979_);
v___x_1982_ = l_Array_extract___redArg(v_log_1980_, v_pos_1979_, v___x_1981_);
v___x_1983_ = l_Array_shrink___redArg(v_log_1980_, v_pos_1979_);
lean_dec(v_pos_1979_);
v___x_1984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1982_);
lean_ctor_set(v___x_1984_, 1, v___x_1983_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLogFrom___redArg(lean_object* v_inst_1985_, lean_object* v_pos_1986_){
_start:
{
lean_object* v_modifyGet_1987_; lean_object* v___f_1988_; lean_object* v___x_1989_; 
v_modifyGet_1987_ = lean_ctor_get(v_inst_1985_, 2);
lean_inc(v_modifyGet_1987_);
lean_dec_ref(v_inst_1985_);
v___f_1988_ = lean_alloc_closure((void*)(l_Lake_takeLogFrom___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1988_, 0, v_pos_1986_);
v___x_1989_ = lean_apply_2(v_modifyGet_1987_, lean_box(0), v___f_1988_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Lake_takeLogFrom(lean_object* v_m_1990_, lean_object* v_inst_1991_, lean_object* v_pos_1992_){
_start:
{
lean_object* v_modifyGet_1993_; lean_object* v___f_1994_; lean_object* v___x_1995_; 
v_modifyGet_1993_ = lean_ctor_get(v_inst_1991_, 2);
lean_inc(v_modifyGet_1993_);
lean_dec_ref(v_inst_1991_);
v___f_1994_ = lean_alloc_closure((void*)(l_Lake_takeLogFrom___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1994_, 0, v_pos_1992_);
v___x_1995_ = lean_apply_2(v_modifyGet_1993_, lean_box(0), v___f_1994_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg___lam__0(lean_object* v_pos_1996_, lean_object* v_s_1997_){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1998_ = lean_box(0);
v___x_1999_ = l_Array_shrink___redArg(v_s_1997_, v_pos_1996_);
v___x_2000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1998_);
lean_ctor_set(v___x_2000_, 1, v___x_1999_);
return v___x_2000_;
}
}
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg___lam__0___boxed(lean_object* v_pos_2001_, lean_object* v_s_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l_Lake_dropLogFrom___redArg___lam__0(v_pos_2001_, v_s_2002_);
lean_dec(v_pos_2001_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_Lake_dropLogFrom___redArg(lean_object* v_inst_2004_, lean_object* v_pos_2005_){
_start:
{
lean_object* v_modifyGet_2006_; lean_object* v___f_2007_; lean_object* v___x_2008_; 
v_modifyGet_2006_ = lean_ctor_get(v_inst_2004_, 2);
lean_inc(v_modifyGet_2006_);
lean_dec_ref(v_inst_2004_);
v___f_2007_ = lean_alloc_closure((void*)(l_Lake_dropLogFrom___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2007_, 0, v_pos_2005_);
v___x_2008_ = lean_apply_2(v_modifyGet_2006_, lean_box(0), v___f_2007_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Lake_dropLogFrom(lean_object* v_m_2009_, lean_object* v_inst_2010_, lean_object* v_pos_2011_){
_start:
{
lean_object* v_modifyGet_2012_; lean_object* v___f_2013_; lean_object* v___x_2014_; 
v_modifyGet_2012_ = lean_ctor_get(v_inst_2010_, 2);
lean_inc(v_modifyGet_2012_);
lean_dec_ref(v_inst_2010_);
v___f_2013_ = lean_alloc_closure((void*)(l_Lake_dropLogFrom___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2013_, 0, v_pos_2011_);
v___x_2014_ = lean_apply_2(v_modifyGet_2012_, lean_box(0), v___f_2013_);
return v___x_2014_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__1(lean_object* v_iniPos_2015_, lean_object* v_toPure_2016_, lean_object* v_log_2017_){
_start:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2018_ = lean_array_get_size(v_log_2017_);
v___x_2019_ = l_Array_extract___redArg(v_log_2017_, v_iniPos_2015_, v___x_2018_);
v___x_2020_ = lean_apply_2(v_toPure_2016_, lean_box(0), v___x_2019_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__1___boxed(lean_object* v_iniPos_2021_, lean_object* v_toPure_2022_, lean_object* v_log_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l_Lake_extractLog___redArg___lam__1(v_iniPos_2021_, v_toPure_2022_, v_log_2023_);
lean_dec_ref(v_log_2023_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__0(lean_object* v_toBind_2025_, lean_object* v_get_2026_, lean_object* v___f_2027_, lean_object* v_____r_2028_){
_start:
{
lean_object* v___x_2029_; 
v___x_2029_ = lean_apply_4(v_toBind_2025_, lean_box(0), lean_box(0), v_get_2026_, v___f_2027_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg___lam__2(lean_object* v_toPure_2030_, lean_object* v_toBind_2031_, lean_object* v_get_2032_, lean_object* v_x_2033_, lean_object* v_iniPos_2034_){
_start:
{
lean_object* v___f_2035_; lean_object* v___f_2036_; lean_object* v___x_2037_; 
v___f_2035_ = lean_alloc_closure((void*)(l_Lake_extractLog___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2035_, 0, v_iniPos_2034_);
lean_closure_set(v___f_2035_, 1, v_toPure_2030_);
lean_inc(v_toBind_2031_);
v___f_2036_ = lean_alloc_closure((void*)(l_Lake_extractLog___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2036_, 0, v_toBind_2031_);
lean_closure_set(v___f_2036_, 1, v_get_2032_);
lean_closure_set(v___f_2036_, 2, v___f_2035_);
v___x_2037_ = lean_apply_4(v_toBind_2031_, lean_box(0), lean_box(0), v_x_2033_, v___f_2036_);
return v___x_2037_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog___redArg(lean_object* v_inst_2038_, lean_object* v_inst_2039_, lean_object* v_x_2040_){
_start:
{
lean_object* v_toApplicative_2041_; lean_object* v_toFunctor_2042_; lean_object* v_toBind_2043_; lean_object* v_toPure_2044_; lean_object* v_map_2045_; lean_object* v_get_2046_; lean_object* v___f_2047_; lean_object* v___f_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v_toApplicative_2041_ = lean_ctor_get(v_inst_2038_, 0);
lean_inc_ref(v_toApplicative_2041_);
v_toFunctor_2042_ = lean_ctor_get(v_toApplicative_2041_, 0);
lean_inc_ref(v_toFunctor_2042_);
v_toBind_2043_ = lean_ctor_get(v_inst_2038_, 1);
lean_inc_n(v_toBind_2043_, 2);
lean_dec_ref(v_inst_2038_);
v_toPure_2044_ = lean_ctor_get(v_toApplicative_2041_, 1);
lean_inc(v_toPure_2044_);
lean_dec_ref(v_toApplicative_2041_);
v_map_2045_ = lean_ctor_get(v_toFunctor_2042_, 0);
lean_inc(v_map_2045_);
lean_dec_ref(v_toFunctor_2042_);
v_get_2046_ = lean_ctor_get(v_inst_2039_, 0);
lean_inc_n(v_get_2046_, 2);
lean_dec_ref(v_inst_2039_);
v___f_2047_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2048_ = lean_alloc_closure((void*)(l_Lake_extractLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2048_, 0, v_toPure_2044_);
lean_closure_set(v___f_2048_, 1, v_toBind_2043_);
lean_closure_set(v___f_2048_, 2, v_get_2046_);
lean_closure_set(v___f_2048_, 3, v_x_2040_);
v___x_2049_ = lean_apply_4(v_map_2045_, lean_box(0), lean_box(0), v___f_2047_, v_get_2046_);
v___x_2050_ = lean_apply_4(v_toBind_2043_, lean_box(0), lean_box(0), v___x_2049_, v___f_2048_);
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l_Lake_extractLog(lean_object* v_m_2051_, lean_object* v_inst_2052_, lean_object* v_inst_2053_, lean_object* v_x_2054_){
_start:
{
lean_object* v_toApplicative_2055_; lean_object* v_toFunctor_2056_; lean_object* v_toBind_2057_; lean_object* v_toPure_2058_; lean_object* v_map_2059_; lean_object* v_get_2060_; lean_object* v___f_2061_; lean_object* v___f_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v_toApplicative_2055_ = lean_ctor_get(v_inst_2052_, 0);
lean_inc_ref(v_toApplicative_2055_);
v_toFunctor_2056_ = lean_ctor_get(v_toApplicative_2055_, 0);
lean_inc_ref(v_toFunctor_2056_);
v_toBind_2057_ = lean_ctor_get(v_inst_2052_, 1);
lean_inc_n(v_toBind_2057_, 2);
lean_dec_ref(v_inst_2052_);
v_toPure_2058_ = lean_ctor_get(v_toApplicative_2055_, 1);
lean_inc(v_toPure_2058_);
lean_dec_ref(v_toApplicative_2055_);
v_map_2059_ = lean_ctor_get(v_toFunctor_2056_, 0);
lean_inc(v_map_2059_);
lean_dec_ref(v_toFunctor_2056_);
v_get_2060_ = lean_ctor_get(v_inst_2053_, 0);
lean_inc_n(v_get_2060_, 2);
lean_dec_ref(v_inst_2053_);
v___f_2061_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2062_ = lean_alloc_closure((void*)(l_Lake_extractLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2062_, 0, v_toPure_2058_);
lean_closure_set(v___f_2062_, 1, v_toBind_2057_);
lean_closure_set(v___f_2062_, 2, v_get_2060_);
lean_closure_set(v___f_2062_, 3, v_x_2054_);
v___x_2063_ = lean_apply_4(v_map_2059_, lean_box(0), lean_box(0), v___f_2061_, v_get_2060_);
v___x_2064_ = lean_apply_4(v_toBind_2057_, lean_box(0), lean_box(0), v___x_2063_, v___f_2062_);
return v___x_2064_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__1(lean_object* v_iniPos_2065_, lean_object* v_a_2066_, lean_object* v_toPure_2067_, lean_object* v_log_2068_){
_start:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2069_ = lean_array_get_size(v_log_2068_);
v___x_2070_ = l_Array_extract___redArg(v_log_2068_, v_iniPos_2065_, v___x_2069_);
v___x_2071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2071_, 0, v_a_2066_);
lean_ctor_set(v___x_2071_, 1, v___x_2070_);
v___x_2072_ = lean_apply_2(v_toPure_2067_, lean_box(0), v___x_2071_);
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__1___boxed(lean_object* v_iniPos_2073_, lean_object* v_a_2074_, lean_object* v_toPure_2075_, lean_object* v_log_2076_){
_start:
{
lean_object* v_res_2077_; 
v_res_2077_ = l_Lake_withExtractLog___redArg___lam__1(v_iniPos_2073_, v_a_2074_, v_toPure_2075_, v_log_2076_);
lean_dec_ref(v_log_2076_);
return v_res_2077_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__0(lean_object* v_iniPos_2078_, lean_object* v_toPure_2079_, lean_object* v_toBind_2080_, lean_object* v_get_2081_, lean_object* v_a_2082_){
_start:
{
lean_object* v___f_2083_; lean_object* v___x_2084_; 
v___f_2083_ = lean_alloc_closure((void*)(l_Lake_withExtractLog___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2083_, 0, v_iniPos_2078_);
lean_closure_set(v___f_2083_, 1, v_a_2082_);
lean_closure_set(v___f_2083_, 2, v_toPure_2079_);
v___x_2084_ = lean_apply_4(v_toBind_2080_, lean_box(0), lean_box(0), v_get_2081_, v___f_2083_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg___lam__2(lean_object* v_toPure_2085_, lean_object* v_toBind_2086_, lean_object* v_get_2087_, lean_object* v_x_2088_, lean_object* v_iniPos_2089_){
_start:
{
lean_object* v___f_2090_; lean_object* v___x_2091_; 
lean_inc(v_toBind_2086_);
v___f_2090_ = lean_alloc_closure((void*)(l_Lake_withExtractLog___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2090_, 0, v_iniPos_2089_);
lean_closure_set(v___f_2090_, 1, v_toPure_2085_);
lean_closure_set(v___f_2090_, 2, v_toBind_2086_);
lean_closure_set(v___f_2090_, 3, v_get_2087_);
v___x_2091_ = lean_apply_4(v_toBind_2086_, lean_box(0), lean_box(0), v_x_2088_, v___f_2090_);
return v___x_2091_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog___redArg(lean_object* v_inst_2092_, lean_object* v_inst_2093_, lean_object* v_x_2094_){
_start:
{
lean_object* v_toApplicative_2095_; lean_object* v_toFunctor_2096_; lean_object* v_toBind_2097_; lean_object* v_toPure_2098_; lean_object* v_map_2099_; lean_object* v_get_2100_; lean_object* v___f_2101_; lean_object* v___f_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; 
v_toApplicative_2095_ = lean_ctor_get(v_inst_2092_, 0);
lean_inc_ref(v_toApplicative_2095_);
v_toFunctor_2096_ = lean_ctor_get(v_toApplicative_2095_, 0);
lean_inc_ref(v_toFunctor_2096_);
v_toBind_2097_ = lean_ctor_get(v_inst_2092_, 1);
lean_inc_n(v_toBind_2097_, 2);
lean_dec_ref(v_inst_2092_);
v_toPure_2098_ = lean_ctor_get(v_toApplicative_2095_, 1);
lean_inc(v_toPure_2098_);
lean_dec_ref(v_toApplicative_2095_);
v_map_2099_ = lean_ctor_get(v_toFunctor_2096_, 0);
lean_inc(v_map_2099_);
lean_dec_ref(v_toFunctor_2096_);
v_get_2100_ = lean_ctor_get(v_inst_2093_, 0);
lean_inc_n(v_get_2100_, 2);
lean_dec_ref(v_inst_2093_);
v___f_2101_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2102_ = lean_alloc_closure((void*)(l_Lake_withExtractLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2102_, 0, v_toPure_2098_);
lean_closure_set(v___f_2102_, 1, v_toBind_2097_);
lean_closure_set(v___f_2102_, 2, v_get_2100_);
lean_closure_set(v___f_2102_, 3, v_x_2094_);
v___x_2103_ = lean_apply_4(v_map_2099_, lean_box(0), lean_box(0), v___f_2101_, v_get_2100_);
v___x_2104_ = lean_apply_4(v_toBind_2097_, lean_box(0), lean_box(0), v___x_2103_, v___f_2102_);
return v___x_2104_;
}
}
LEAN_EXPORT lean_object* l_Lake_withExtractLog(lean_object* v_m_2105_, lean_object* v_00_u03b1_2106_, lean_object* v_inst_2107_, lean_object* v_inst_2108_, lean_object* v_x_2109_){
_start:
{
lean_object* v_toApplicative_2110_; lean_object* v_toFunctor_2111_; lean_object* v_toBind_2112_; lean_object* v_toPure_2113_; lean_object* v_map_2114_; lean_object* v_get_2115_; lean_object* v___f_2116_; lean_object* v___f_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v_toApplicative_2110_ = lean_ctor_get(v_inst_2107_, 0);
lean_inc_ref(v_toApplicative_2110_);
v_toFunctor_2111_ = lean_ctor_get(v_toApplicative_2110_, 0);
lean_inc_ref(v_toFunctor_2111_);
v_toBind_2112_ = lean_ctor_get(v_inst_2107_, 1);
lean_inc_n(v_toBind_2112_, 2);
lean_dec_ref(v_inst_2107_);
v_toPure_2113_ = lean_ctor_get(v_toApplicative_2110_, 1);
lean_inc(v_toPure_2113_);
lean_dec_ref(v_toApplicative_2110_);
v_map_2114_ = lean_ctor_get(v_toFunctor_2111_, 0);
lean_inc(v_map_2114_);
lean_dec_ref(v_toFunctor_2111_);
v_get_2115_ = lean_ctor_get(v_inst_2108_, 0);
lean_inc_n(v_get_2115_, 2);
lean_dec_ref(v_inst_2108_);
v___f_2116_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2117_ = lean_alloc_closure((void*)(l_Lake_withExtractLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2117_, 0, v_toPure_2113_);
lean_closure_set(v___f_2117_, 1, v_toBind_2112_);
lean_closure_set(v___f_2117_, 2, v_get_2115_);
lean_closure_set(v___f_2117_, 3, v_x_2109_);
v___x_2118_ = lean_apply_4(v_map_2114_, lean_box(0), lean_box(0), v___f_2116_, v_get_2115_);
v___x_2119_ = lean_apply_4(v_toBind_2112_, lean_box(0), lean_box(0), v___x_2118_, v___f_2117_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__1(lean_object* v_iniPos_2120_, lean_object* v_inst_2121_, lean_object* v_toPure_2122_, lean_object* v_a_2123_, lean_object* v_endPos_2124_){
_start:
{
uint8_t v___x_2125_; 
v___x_2125_ = lean_nat_dec_eq(v_iniPos_2120_, v_endPos_2124_);
if (v___x_2125_ == 0)
{
lean_object* v_throw_2126_; lean_object* v___x_2127_; 
lean_dec(v_a_2123_);
lean_dec(v_toPure_2122_);
v_throw_2126_ = lean_ctor_get(v_inst_2121_, 0);
lean_inc(v_throw_2126_);
lean_dec_ref(v_inst_2121_);
v___x_2127_ = lean_apply_2(v_throw_2126_, lean_box(0), v_iniPos_2120_);
return v___x_2127_;
}
else
{
lean_object* v___x_2128_; 
lean_dec_ref(v_inst_2121_);
lean_dec(v_iniPos_2120_);
v___x_2128_ = lean_apply_2(v_toPure_2122_, lean_box(0), v_a_2123_);
return v___x_2128_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__1___boxed(lean_object* v_iniPos_2129_, lean_object* v_inst_2130_, lean_object* v_toPure_2131_, lean_object* v_a_2132_, lean_object* v_endPos_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = l_Lake_throwIfLogs___redArg___lam__1(v_iniPos_2129_, v_inst_2130_, v_toPure_2131_, v_a_2132_, v_endPos_2133_);
lean_dec(v_endPos_2133_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__0(lean_object* v_iniPos_2135_, lean_object* v_inst_2136_, lean_object* v_toPure_2137_, lean_object* v_toBind_2138_, lean_object* v___x_2139_, lean_object* v_a_2140_){
_start:
{
lean_object* v___f_2141_; lean_object* v___x_2142_; 
v___f_2141_ = lean_alloc_closure((void*)(l_Lake_throwIfLogs___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_2141_, 0, v_iniPos_2135_);
lean_closure_set(v___f_2141_, 1, v_inst_2136_);
lean_closure_set(v___f_2141_, 2, v_toPure_2137_);
lean_closure_set(v___f_2141_, 3, v_a_2140_);
v___x_2142_ = lean_apply_4(v_toBind_2138_, lean_box(0), lean_box(0), v___x_2139_, v___f_2141_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg___lam__2(lean_object* v_inst_2143_, lean_object* v_toPure_2144_, lean_object* v_toBind_2145_, lean_object* v___x_2146_, lean_object* v_x_2147_, lean_object* v_iniPos_2148_){
_start:
{
lean_object* v___f_2149_; lean_object* v___x_2150_; 
lean_inc(v_toBind_2145_);
v___f_2149_ = lean_alloc_closure((void*)(l_Lake_throwIfLogs___redArg___lam__0), 6, 5);
lean_closure_set(v___f_2149_, 0, v_iniPos_2148_);
lean_closure_set(v___f_2149_, 1, v_inst_2143_);
lean_closure_set(v___f_2149_, 2, v_toPure_2144_);
lean_closure_set(v___f_2149_, 3, v_toBind_2145_);
lean_closure_set(v___f_2149_, 4, v___x_2146_);
v___x_2150_ = lean_apply_4(v_toBind_2145_, lean_box(0), lean_box(0), v_x_2147_, v___f_2149_);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs___redArg(lean_object* v_inst_2151_, lean_object* v_inst_2152_, lean_object* v_inst_2153_, lean_object* v_x_2154_){
_start:
{
lean_object* v_toApplicative_2155_; lean_object* v_toFunctor_2156_; lean_object* v_toBind_2157_; lean_object* v_toPure_2158_; lean_object* v_map_2159_; lean_object* v_get_2160_; lean_object* v___f_2161_; lean_object* v___x_2162_; lean_object* v___f_2163_; lean_object* v___x_2164_; 
v_toApplicative_2155_ = lean_ctor_get(v_inst_2151_, 0);
lean_inc_ref(v_toApplicative_2155_);
v_toFunctor_2156_ = lean_ctor_get(v_toApplicative_2155_, 0);
lean_inc_ref(v_toFunctor_2156_);
v_toBind_2157_ = lean_ctor_get(v_inst_2151_, 1);
lean_inc_n(v_toBind_2157_, 2);
lean_dec_ref(v_inst_2151_);
v_toPure_2158_ = lean_ctor_get(v_toApplicative_2155_, 1);
lean_inc(v_toPure_2158_);
lean_dec_ref(v_toApplicative_2155_);
v_map_2159_ = lean_ctor_get(v_toFunctor_2156_, 0);
lean_inc(v_map_2159_);
lean_dec_ref(v_toFunctor_2156_);
v_get_2160_ = lean_ctor_get(v_inst_2152_, 0);
lean_inc(v_get_2160_);
lean_dec_ref(v_inst_2152_);
v___f_2161_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_2162_ = lean_apply_4(v_map_2159_, lean_box(0), lean_box(0), v___f_2161_, v_get_2160_);
lean_inc(v___x_2162_);
v___f_2163_ = lean_alloc_closure((void*)(l_Lake_throwIfLogs___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2163_, 0, v_inst_2153_);
lean_closure_set(v___f_2163_, 1, v_toPure_2158_);
lean_closure_set(v___f_2163_, 2, v_toBind_2157_);
lean_closure_set(v___f_2163_, 3, v___x_2162_);
lean_closure_set(v___f_2163_, 4, v_x_2154_);
v___x_2164_ = lean_apply_4(v_toBind_2157_, lean_box(0), lean_box(0), v___x_2162_, v___f_2163_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l_Lake_throwIfLogs(lean_object* v_m_2165_, lean_object* v_00_u03b1_2166_, lean_object* v_inst_2167_, lean_object* v_inst_2168_, lean_object* v_inst_2169_, lean_object* v_x_2170_){
_start:
{
lean_object* v_toApplicative_2171_; lean_object* v_toFunctor_2172_; lean_object* v_toBind_2173_; lean_object* v_toPure_2174_; lean_object* v_map_2175_; lean_object* v_get_2176_; lean_object* v___f_2177_; lean_object* v___x_2178_; lean_object* v___f_2179_; lean_object* v___x_2180_; 
v_toApplicative_2171_ = lean_ctor_get(v_inst_2167_, 0);
lean_inc_ref(v_toApplicative_2171_);
v_toFunctor_2172_ = lean_ctor_get(v_toApplicative_2171_, 0);
lean_inc_ref(v_toFunctor_2172_);
v_toBind_2173_ = lean_ctor_get(v_inst_2167_, 1);
lean_inc_n(v_toBind_2173_, 2);
lean_dec_ref(v_inst_2167_);
v_toPure_2174_ = lean_ctor_get(v_toApplicative_2171_, 1);
lean_inc(v_toPure_2174_);
lean_dec_ref(v_toApplicative_2171_);
v_map_2175_ = lean_ctor_get(v_toFunctor_2172_, 0);
lean_inc(v_map_2175_);
lean_dec_ref(v_toFunctor_2172_);
v_get_2176_ = lean_ctor_get(v_inst_2168_, 0);
lean_inc(v_get_2176_);
lean_dec_ref(v_inst_2168_);
v___f_2177_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_2178_ = lean_apply_4(v_map_2175_, lean_box(0), lean_box(0), v___f_2177_, v_get_2176_);
lean_inc(v___x_2178_);
v___f_2179_ = lean_alloc_closure((void*)(l_Lake_throwIfLogs___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2179_, 0, v_inst_2169_);
lean_closure_set(v___f_2179_, 1, v_toPure_2174_);
lean_closure_set(v___f_2179_, 2, v_toBind_2173_);
lean_closure_set(v___f_2179_, 3, v___x_2178_);
lean_closure_set(v___f_2179_, 4, v_x_2170_);
v___x_2180_ = lean_apply_4(v_toBind_2173_, lean_box(0), lean_box(0), v___x_2178_, v___f_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__1(lean_object* v_throw_2181_, lean_object* v_iniPos_2182_, lean_object* v_x_2183_){
_start:
{
lean_object* v___x_2184_; 
v___x_2184_ = lean_apply_2(v_throw_2181_, lean_box(0), v_iniPos_2182_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__1___boxed(lean_object* v_throw_2185_, lean_object* v_iniPos_2186_, lean_object* v_x_2187_){
_start:
{
lean_object* v_res_2188_; 
v_res_2188_ = l_Lake_withLogErrorPos___redArg___lam__1(v_throw_2185_, v_iniPos_2186_, v_x_2187_);
lean_dec(v_x_2187_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg___lam__0(lean_object* v_inst_2189_, lean_object* v_self_2190_, lean_object* v_iniPos_2191_){
_start:
{
lean_object* v_throw_2192_; lean_object* v_tryCatch_2193_; lean_object* v___f_2194_; lean_object* v___x_2195_; 
v_throw_2192_ = lean_ctor_get(v_inst_2189_, 0);
lean_inc(v_throw_2192_);
v_tryCatch_2193_ = lean_ctor_get(v_inst_2189_, 1);
lean_inc(v_tryCatch_2193_);
lean_dec_ref(v_inst_2189_);
v___f_2194_ = lean_alloc_closure((void*)(l_Lake_withLogErrorPos___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2194_, 0, v_throw_2192_);
lean_closure_set(v___f_2194_, 1, v_iniPos_2191_);
v___x_2195_ = lean_apply_3(v_tryCatch_2193_, lean_box(0), v_self_2190_, v___f_2194_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos___redArg(lean_object* v_inst_2196_, lean_object* v_inst_2197_, lean_object* v_inst_2198_, lean_object* v_self_2199_){
_start:
{
lean_object* v_toApplicative_2200_; lean_object* v_toFunctor_2201_; lean_object* v_toBind_2202_; lean_object* v_map_2203_; lean_object* v_get_2204_; lean_object* v___f_2205_; lean_object* v___f_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v_toApplicative_2200_ = lean_ctor_get(v_inst_2196_, 0);
v_toFunctor_2201_ = lean_ctor_get(v_toApplicative_2200_, 0);
lean_inc_ref(v_toFunctor_2201_);
v_toBind_2202_ = lean_ctor_get(v_inst_2196_, 1);
lean_inc(v_toBind_2202_);
lean_dec_ref(v_inst_2196_);
v_map_2203_ = lean_ctor_get(v_toFunctor_2201_, 0);
lean_inc(v_map_2203_);
lean_dec_ref(v_toFunctor_2201_);
v_get_2204_ = lean_ctor_get(v_inst_2197_, 0);
lean_inc(v_get_2204_);
lean_dec_ref(v_inst_2197_);
v___f_2205_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2206_ = lean_alloc_closure((void*)(l_Lake_withLogErrorPos___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2206_, 0, v_inst_2198_);
lean_closure_set(v___f_2206_, 1, v_self_2199_);
v___x_2207_ = lean_apply_4(v_map_2203_, lean_box(0), lean_box(0), v___f_2205_, v_get_2204_);
v___x_2208_ = lean_apply_4(v_toBind_2202_, lean_box(0), lean_box(0), v___x_2207_, v___f_2206_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLogErrorPos(lean_object* v_m_2209_, lean_object* v_00_u03b1_2210_, lean_object* v_inst_2211_, lean_object* v_inst_2212_, lean_object* v_inst_2213_, lean_object* v_self_2214_){
_start:
{
lean_object* v_toApplicative_2215_; lean_object* v_toFunctor_2216_; lean_object* v_toBind_2217_; lean_object* v_map_2218_; lean_object* v_get_2219_; lean_object* v___f_2220_; lean_object* v___f_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v_toApplicative_2215_ = lean_ctor_get(v_inst_2211_, 0);
v_toFunctor_2216_ = lean_ctor_get(v_toApplicative_2215_, 0);
lean_inc_ref(v_toFunctor_2216_);
v_toBind_2217_ = lean_ctor_get(v_inst_2211_, 1);
lean_inc(v_toBind_2217_);
lean_dec_ref(v_inst_2211_);
v_map_2218_ = lean_ctor_get(v_toFunctor_2216_, 0);
lean_inc(v_map_2218_);
lean_dec_ref(v_toFunctor_2216_);
v_get_2219_ = lean_ctor_get(v_inst_2212_, 0);
lean_inc(v_get_2219_);
lean_dec_ref(v_inst_2212_);
v___f_2220_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2221_ = lean_alloc_closure((void*)(l_Lake_withLogErrorPos___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2221_, 0, v_inst_2213_);
lean_closure_set(v___f_2221_, 1, v_self_2214_);
v___x_2222_ = lean_apply_4(v_map_2218_, lean_box(0), lean_box(0), v___f_2220_, v_get_2219_);
v___x_2223_ = lean_apply_4(v_toBind_2217_, lean_box(0), lean_box(0), v___x_2222_, v___f_2221_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__1(lean_object* v_toPure_2224_, lean_object* v_x_2225_){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2226_ = lean_box(0);
v___x_2227_ = lean_apply_2(v_toPure_2224_, lean_box(0), v___x_2226_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__1___boxed(lean_object* v_toPure_2228_, lean_object* v_x_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_Lake_errorWithLog___redArg___lam__1(v_toPure_2228_, v_x_2229_);
lean_dec(v_x_2229_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__0(lean_object* v_throw_2231_, lean_object* v_iniPos_2232_, lean_object* v_____r_2233_){
_start:
{
lean_object* v___x_2234_; 
v___x_2234_ = lean_apply_2(v_throw_2231_, lean_box(0), v_iniPos_2232_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg___lam__2(lean_object* v_inst_2235_, lean_object* v_self_2236_, lean_object* v___f_2237_, lean_object* v_toBind_2238_, lean_object* v_iniPos_2239_){
_start:
{
lean_object* v_throw_2240_; lean_object* v_tryCatch_2241_; lean_object* v___f_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v_throw_2240_ = lean_ctor_get(v_inst_2235_, 0);
lean_inc(v_throw_2240_);
v_tryCatch_2241_ = lean_ctor_get(v_inst_2235_, 1);
lean_inc(v_tryCatch_2241_);
lean_dec_ref(v_inst_2235_);
v___f_2242_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2242_, 0, v_throw_2240_);
lean_closure_set(v___f_2242_, 1, v_iniPos_2239_);
v___x_2243_ = lean_apply_3(v_tryCatch_2241_, lean_box(0), v_self_2236_, v___f_2237_);
v___x_2244_ = lean_apply_4(v_toBind_2238_, lean_box(0), lean_box(0), v___x_2243_, v___f_2242_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog___redArg(lean_object* v_inst_2245_, lean_object* v_inst_2246_, lean_object* v_inst_2247_, lean_object* v_self_2248_){
_start:
{
lean_object* v_toApplicative_2249_; lean_object* v_toFunctor_2250_; lean_object* v_toBind_2251_; lean_object* v_toPure_2252_; lean_object* v_map_2253_; lean_object* v_get_2254_; lean_object* v___f_2255_; lean_object* v___f_2256_; lean_object* v___f_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v_toApplicative_2249_ = lean_ctor_get(v_inst_2245_, 0);
lean_inc_ref(v_toApplicative_2249_);
v_toFunctor_2250_ = lean_ctor_get(v_toApplicative_2249_, 0);
lean_inc_ref(v_toFunctor_2250_);
v_toBind_2251_ = lean_ctor_get(v_inst_2245_, 1);
lean_inc_n(v_toBind_2251_, 2);
lean_dec_ref(v_inst_2245_);
v_toPure_2252_ = lean_ctor_get(v_toApplicative_2249_, 1);
lean_inc(v_toPure_2252_);
lean_dec_ref(v_toApplicative_2249_);
v_map_2253_ = lean_ctor_get(v_toFunctor_2250_, 0);
lean_inc(v_map_2253_);
lean_dec_ref(v_toFunctor_2250_);
v_get_2254_ = lean_ctor_get(v_inst_2246_, 0);
lean_inc(v_get_2254_);
lean_dec_ref(v_inst_2246_);
v___f_2255_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2256_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2256_, 0, v_toPure_2252_);
v___f_2257_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2257_, 0, v_inst_2247_);
lean_closure_set(v___f_2257_, 1, v_self_2248_);
lean_closure_set(v___f_2257_, 2, v___f_2256_);
lean_closure_set(v___f_2257_, 3, v_toBind_2251_);
v___x_2258_ = lean_apply_4(v_map_2253_, lean_box(0), lean_box(0), v___f_2255_, v_get_2254_);
v___x_2259_ = lean_apply_4(v_toBind_2251_, lean_box(0), lean_box(0), v___x_2258_, v___f_2257_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Lake_errorWithLog(lean_object* v_m_2260_, lean_object* v_00_u03b2_2261_, lean_object* v_inst_2262_, lean_object* v_inst_2263_, lean_object* v_inst_2264_, lean_object* v_self_2265_){
_start:
{
lean_object* v_toApplicative_2266_; lean_object* v_toFunctor_2267_; lean_object* v_toBind_2268_; lean_object* v_toPure_2269_; lean_object* v_map_2270_; lean_object* v_get_2271_; lean_object* v___f_2272_; lean_object* v___f_2273_; lean_object* v___f_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v_toApplicative_2266_ = lean_ctor_get(v_inst_2262_, 0);
lean_inc_ref(v_toApplicative_2266_);
v_toFunctor_2267_ = lean_ctor_get(v_toApplicative_2266_, 0);
lean_inc_ref(v_toFunctor_2267_);
v_toBind_2268_ = lean_ctor_get(v_inst_2262_, 1);
lean_inc_n(v_toBind_2268_, 2);
lean_dec_ref(v_inst_2262_);
v_toPure_2269_ = lean_ctor_get(v_toApplicative_2266_, 1);
lean_inc(v_toPure_2269_);
lean_dec_ref(v_toApplicative_2266_);
v_map_2270_ = lean_ctor_get(v_toFunctor_2267_, 0);
lean_inc(v_map_2270_);
lean_dec_ref(v_toFunctor_2267_);
v_get_2271_ = lean_ctor_get(v_inst_2263_, 0);
lean_inc(v_get_2271_);
lean_dec_ref(v_inst_2263_);
v___f_2272_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2273_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2273_, 0, v_toPure_2269_);
v___f_2274_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2274_, 0, v_inst_2264_);
lean_closure_set(v___f_2274_, 1, v_self_2265_);
lean_closure_set(v___f_2274_, 2, v___f_2273_);
lean_closure_set(v___f_2274_, 3, v_toBind_2268_);
v___x_2275_ = lean_apply_4(v_map_2270_, lean_box(0), lean_box(0), v___f_2272_, v_get_2271_);
v___x_2276_ = lean_apply_4(v_toBind_2268_, lean_box(0), lean_box(0), v___x_2275_, v___f_2274_);
return v___x_2276_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__0(lean_object* v_x_2277_){
_start:
{
lean_object* v_fst_2278_; 
v_fst_2278_ = lean_ctor_get(v_x_2277_, 0);
lean_inc(v_fst_2278_);
return v_fst_2278_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__0___boxed(lean_object* v_x_2279_){
_start:
{
lean_object* v_res_2280_; 
v_res_2280_ = l_Lake_withLoggedIO___redArg___lam__0(v_x_2279_);
lean_dec_ref(v_x_2279_);
return v_res_2280_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__1(lean_object* v_buf_2281_){
_start:
{
lean_object* v___x_2283_; 
v___x_2283_ = lean_st_ref_get(v_buf_2281_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__1___boxed(lean_object* v_buf_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l_Lake_withLoggedIO___redArg___lam__1(v_buf_2284_);
lean_dec(v_buf_2284_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__2(lean_object* v_toPure_2287_, lean_object* v_a_2288_, lean_object* v_____r_2289_){
_start:
{
lean_object* v___x_2290_; 
v___x_2290_ = lean_apply_2(v_toPure_2287_, lean_box(0), v_a_2288_);
return v___x_2290_;
}
}
static lean_object* _init_l_Lake_withLoggedIO___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2295_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___lam__3___closed__3));
v___x_2296_ = lean_unsigned_to_nat(46u);
v___x_2297_ = lean_unsigned_to_nat(193u);
v___x_2298_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___lam__3___closed__2));
v___x_2299_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___lam__3___closed__1));
v___x_2300_ = l_mkPanicMessageWithDecl(v___x_2299_, v___x_2298_, v___x_2297_, v___x_2296_, v___x_2295_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__3(lean_object* v___x_2301_, lean_object* v_inst_2302_, lean_object* v_toBind_2303_, lean_object* v___f_2304_, lean_object* v_toPure_2305_, lean_object* v_a_2306_, lean_object* v_buf_2307_){
_start:
{
lean_object* v___y_2309_; lean_object* v_data_2322_; uint8_t v___x_2323_; 
v_data_2322_ = lean_ctor_get(v_buf_2307_, 0);
lean_inc_ref(v_data_2322_);
lean_dec_ref(v_buf_2307_);
v___x_2323_ = lean_string_validate_utf8(v_data_2322_);
if (v___x_2323_ == 0)
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
lean_dec_ref(v_data_2322_);
v___x_2324_ = ((lean_object*)(l_Lake_instInhabitedLogEntry_default___closed__0));
v___x_2325_ = lean_obj_once(&l_Lake_withLoggedIO___redArg___lam__3___closed__4, &l_Lake_withLoggedIO___redArg___lam__3___closed__4_once, _init_l_Lake_withLoggedIO___redArg___lam__3___closed__4);
v___x_2326_ = l_panic___redArg(v___x_2324_, v___x_2325_);
v___y_2309_ = v___x_2326_;
goto v___jp_2308_;
}
else
{
lean_object* v___x_2327_; 
v___x_2327_ = lean_string_from_utf8_unchecked(v_data_2322_);
v___y_2309_ = v___x_2327_;
goto v___jp_2308_;
}
v___jp_2308_:
{
lean_object* v___x_2310_; uint8_t v___x_2311_; 
v___x_2310_ = lean_string_utf8_byte_size(v___y_2309_);
v___x_2311_ = lean_nat_dec_eq(v___x_2310_, v___x_2301_);
if (v___x_2311_ == 0)
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; uint8_t v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
lean_dec(v_a_2306_);
lean_dec(v_toPure_2305_);
v___x_2312_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___lam__3___closed__0));
v___x_2313_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2313_, 0, v___y_2309_);
lean_ctor_set(v___x_2313_, 1, v___x_2301_);
lean_ctor_set(v___x_2313_, 2, v___x_2310_);
v___x_2314_ = l_String_Slice_trimAscii(v___x_2313_);
v___x_2315_ = l_String_Slice_toString(v___x_2314_);
lean_dec_ref(v___x_2314_);
v___x_2316_ = lean_string_append(v___x_2312_, v___x_2315_);
lean_dec_ref(v___x_2315_);
v___x_2317_ = 1;
v___x_2318_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2318_, 0, v___x_2316_);
lean_ctor_set_uint8(v___x_2318_, sizeof(void*)*1, v___x_2317_);
v___x_2319_ = lean_apply_1(v_inst_2302_, v___x_2318_);
v___x_2320_ = lean_apply_4(v_toBind_2303_, lean_box(0), lean_box(0), v___x_2319_, v___f_2304_);
return v___x_2320_;
}
else
{
lean_object* v___x_2321_; 
lean_dec_ref(v___y_2309_);
lean_dec(v___f_2304_);
lean_dec(v_toBind_2303_);
lean_dec(v_inst_2302_);
lean_dec(v___x_2301_);
v___x_2321_ = lean_apply_2(v_toPure_2305_, lean_box(0), v_a_2306_);
return v___x_2321_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__4(lean_object* v_toPure_2328_, lean_object* v___x_2329_, lean_object* v_inst_2330_, lean_object* v_toBind_2331_, lean_object* v_inst_2332_, lean_object* v___f_2333_, lean_object* v_a_2334_){
_start:
{
lean_object* v___f_2335_; lean_object* v___f_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
lean_inc(v_a_2334_);
lean_inc(v_toPure_2328_);
v___f_2335_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2335_, 0, v_toPure_2328_);
lean_closure_set(v___f_2335_, 1, v_a_2334_);
lean_inc(v_toBind_2331_);
v___f_2336_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__3), 7, 6);
lean_closure_set(v___f_2336_, 0, v___x_2329_);
lean_closure_set(v___f_2336_, 1, v_inst_2330_);
lean_closure_set(v___f_2336_, 2, v_toBind_2331_);
lean_closure_set(v___f_2336_, 3, v___f_2335_);
lean_closure_set(v___f_2336_, 4, v_toPure_2328_);
lean_closure_set(v___f_2336_, 5, v_a_2334_);
v___x_2337_ = lean_apply_2(v_inst_2332_, lean_box(0), v___f_2333_);
v___x_2338_ = lean_apply_4(v_toBind_2331_, lean_box(0), lean_box(0), v___x_2337_, v___f_2336_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__5(lean_object* v_stderr_2339_, lean_object* v_inst_2340_, lean_object* v_mapConst_2341_, lean_object* v_____r_2342_){
_start:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2343_ = lean_alloc_closure((void*)(l_IO_setStderr___boxed), 2, 1);
lean_closure_set(v___x_2343_, 0, v_stderr_2339_);
v___x_2344_ = lean_apply_2(v_inst_2340_, lean_box(0), v___x_2343_);
v___x_2345_ = lean_box(0);
v___x_2346_ = lean_apply_4(v_mapConst_2341_, lean_box(0), lean_box(0), v___x_2345_, v___x_2344_);
return v___x_2346_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__6(lean_object* v___x_2347_, lean_object* v_x_2348_){
_start:
{
lean_inc(v___x_2347_);
return v___x_2347_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__6___boxed(lean_object* v___x_2349_, lean_object* v_x_2350_){
_start:
{
lean_object* v_res_2351_; 
v_res_2351_ = l_Lake_withLoggedIO___redArg___lam__6(v___x_2349_, v_x_2350_);
lean_dec(v_x_2350_);
lean_dec(v___x_2349_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__7(lean_object* v_toFunctor_2352_, lean_object* v_inst_2353_, lean_object* v_stdout_2354_, lean_object* v_toBind_2355_, lean_object* v_inst_2356_, lean_object* v_x_2357_, lean_object* v___f_2358_, lean_object* v___f_2359_, lean_object* v_stderr_2360_){
_start:
{
lean_object* v_map_2361_; lean_object* v_mapConst_2362_; lean_object* v___f_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___f_2369_; lean_object* v_y_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
v_map_2361_ = lean_ctor_get(v_toFunctor_2352_, 0);
lean_inc(v_map_2361_);
v_mapConst_2362_ = lean_ctor_get(v_toFunctor_2352_, 1);
lean_inc_n(v_mapConst_2362_, 2);
lean_dec_ref(v_toFunctor_2352_);
lean_inc(v_inst_2353_);
v___f_2363_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__5), 4, 3);
lean_closure_set(v___f_2363_, 0, v_stderr_2360_);
lean_closure_set(v___f_2363_, 1, v_inst_2353_);
lean_closure_set(v___f_2363_, 2, v_mapConst_2362_);
v___x_2364_ = lean_alloc_closure((void*)(l_IO_setStdout___boxed), 2, 1);
lean_closure_set(v___x_2364_, 0, v_stdout_2354_);
v___x_2365_ = lean_apply_2(v_inst_2353_, lean_box(0), v___x_2364_);
v___x_2366_ = lean_box(0);
v___x_2367_ = lean_apply_4(v_mapConst_2362_, lean_box(0), lean_box(0), v___x_2366_, v___x_2365_);
lean_inc(v_toBind_2355_);
v___x_2368_ = lean_apply_4(v_toBind_2355_, lean_box(0), lean_box(0), v___x_2367_, v___f_2363_);
v___f_2369_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__6___boxed), 2, 1);
lean_closure_set(v___f_2369_, 0, v___x_2368_);
v_y_2370_ = lean_apply_4(v_inst_2356_, lean_box(0), lean_box(0), v_x_2357_, v___f_2369_);
v___x_2371_ = lean_apply_4(v_map_2361_, lean_box(0), lean_box(0), v___f_2358_, v_y_2370_);
v___x_2372_ = lean_apply_4(v_toBind_2355_, lean_box(0), lean_box(0), v___x_2371_, v___f_2359_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__8(lean_object* v_toFunctor_2373_, lean_object* v_inst_2374_, lean_object* v_toBind_2375_, lean_object* v_inst_2376_, lean_object* v_x_2377_, lean_object* v___f_2378_, lean_object* v___f_2379_, lean_object* v___x_2380_, lean_object* v_stdout_2381_){
_start:
{
lean_object* v___f_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; 
lean_inc(v_toBind_2375_);
lean_inc(v_inst_2374_);
v___f_2382_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__7), 9, 8);
lean_closure_set(v___f_2382_, 0, v_toFunctor_2373_);
lean_closure_set(v___f_2382_, 1, v_inst_2374_);
lean_closure_set(v___f_2382_, 2, v_stdout_2381_);
lean_closure_set(v___f_2382_, 3, v_toBind_2375_);
lean_closure_set(v___f_2382_, 4, v_inst_2376_);
lean_closure_set(v___f_2382_, 5, v_x_2377_);
lean_closure_set(v___f_2382_, 6, v___f_2378_);
lean_closure_set(v___f_2382_, 7, v___f_2379_);
v___x_2383_ = lean_alloc_closure((void*)(l_IO_setStderr___boxed), 2, 1);
lean_closure_set(v___x_2383_, 0, v___x_2380_);
v___x_2384_ = lean_apply_2(v_inst_2374_, lean_box(0), v___x_2383_);
v___x_2385_ = lean_apply_4(v_toBind_2375_, lean_box(0), lean_box(0), v___x_2384_, v___f_2382_);
return v___x_2385_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg___lam__9(lean_object* v_toPure_2386_, lean_object* v___x_2387_, lean_object* v_inst_2388_, lean_object* v_toBind_2389_, lean_object* v_inst_2390_, lean_object* v_toFunctor_2391_, lean_object* v_inst_2392_, lean_object* v_x_2393_, lean_object* v___f_2394_, lean_object* v_buf_2395_){
_start:
{
lean_object* v___f_2396_; lean_object* v___f_2397_; lean_object* v___x_2398_; lean_object* v___f_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
lean_inc(v_buf_2395_);
v___f_2396_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2396_, 0, v_buf_2395_);
lean_inc_n(v_inst_2390_, 2);
lean_inc_n(v_toBind_2389_, 2);
v___f_2397_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__4), 7, 6);
lean_closure_set(v___f_2397_, 0, v_toPure_2386_);
lean_closure_set(v___f_2397_, 1, v___x_2387_);
lean_closure_set(v___f_2397_, 2, v_inst_2388_);
lean_closure_set(v___f_2397_, 3, v_toBind_2389_);
lean_closure_set(v___f_2397_, 4, v_inst_2390_);
lean_closure_set(v___f_2397_, 5, v___f_2396_);
v___x_2398_ = l_IO_FS_Stream_ofBuffer(v_buf_2395_);
lean_inc_ref(v___x_2398_);
v___f_2399_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__8), 9, 8);
lean_closure_set(v___f_2399_, 0, v_toFunctor_2391_);
lean_closure_set(v___f_2399_, 1, v_inst_2390_);
lean_closure_set(v___f_2399_, 2, v_toBind_2389_);
lean_closure_set(v___f_2399_, 3, v_inst_2392_);
lean_closure_set(v___f_2399_, 4, v_x_2393_);
lean_closure_set(v___f_2399_, 5, v___f_2394_);
lean_closure_set(v___f_2399_, 6, v___f_2397_);
lean_closure_set(v___f_2399_, 7, v___x_2398_);
v___x_2400_ = lean_alloc_closure((void*)(l_IO_setStdout___boxed), 2, 1);
lean_closure_set(v___x_2400_, 0, v___x_2398_);
v___x_2401_ = lean_apply_2(v_inst_2390_, lean_box(0), v___x_2400_);
v___x_2402_ = lean_apply_4(v_toBind_2389_, lean_box(0), lean_box(0), v___x_2401_, v___f_2399_);
return v___x_2402_;
}
}
static lean_object* _init_l_Lake_withLoggedIO___redArg___closed__1(void){
_start:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; 
v___x_2404_ = lean_unsigned_to_nat(0u);
v___x_2405_ = l_ByteArray_empty;
v___x_2406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2406_, 0, v___x_2405_);
lean_ctor_set(v___x_2406_, 1, v___x_2404_);
return v___x_2406_;
}
}
static lean_object* _init_l_Lake_withLoggedIO___redArg___closed__2(void){
_start:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2407_ = lean_obj_once(&l_Lake_withLoggedIO___redArg___closed__1, &l_Lake_withLoggedIO___redArg___closed__1_once, _init_l_Lake_withLoggedIO___redArg___closed__1);
v___x_2408_ = lean_alloc_closure((void*)(l_IO_mkRef___boxed), 3, 2);
lean_closure_set(v___x_2408_, 0, lean_box(0));
lean_closure_set(v___x_2408_, 1, v___x_2407_);
return v___x_2408_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO___redArg(lean_object* v_inst_2409_, lean_object* v_inst_2410_, lean_object* v_inst_2411_, lean_object* v_inst_2412_, lean_object* v_x_2413_){
_start:
{
lean_object* v_toApplicative_2414_; lean_object* v_toBind_2415_; lean_object* v_toFunctor_2416_; lean_object* v_toPure_2417_; lean_object* v___f_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___f_2422_; lean_object* v___x_2423_; 
v_toApplicative_2414_ = lean_ctor_get(v_inst_2409_, 0);
lean_inc_ref(v_toApplicative_2414_);
v_toBind_2415_ = lean_ctor_get(v_inst_2409_, 1);
lean_inc_n(v_toBind_2415_, 2);
lean_dec_ref(v_inst_2409_);
v_toFunctor_2416_ = lean_ctor_get(v_toApplicative_2414_, 0);
lean_inc_ref(v_toFunctor_2416_);
v_toPure_2417_ = lean_ctor_get(v_toApplicative_2414_, 1);
lean_inc(v_toPure_2417_);
lean_dec_ref(v_toApplicative_2414_);
v___f_2418_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___closed__0));
v___x_2419_ = lean_unsigned_to_nat(0u);
v___x_2420_ = lean_obj_once(&l_Lake_withLoggedIO___redArg___closed__2, &l_Lake_withLoggedIO___redArg___closed__2_once, _init_l_Lake_withLoggedIO___redArg___closed__2);
lean_inc(v_inst_2410_);
v___x_2421_ = lean_apply_2(v_inst_2410_, lean_box(0), v___x_2420_);
v___f_2422_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__9), 10, 9);
lean_closure_set(v___f_2422_, 0, v_toPure_2417_);
lean_closure_set(v___f_2422_, 1, v___x_2419_);
lean_closure_set(v___f_2422_, 2, v_inst_2411_);
lean_closure_set(v___f_2422_, 3, v_toBind_2415_);
lean_closure_set(v___f_2422_, 4, v_inst_2410_);
lean_closure_set(v___f_2422_, 5, v_toFunctor_2416_);
lean_closure_set(v___f_2422_, 6, v_inst_2412_);
lean_closure_set(v___f_2422_, 7, v_x_2413_);
lean_closure_set(v___f_2422_, 8, v___f_2418_);
v___x_2423_ = lean_apply_4(v_toBind_2415_, lean_box(0), lean_box(0), v___x_2421_, v___f_2422_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lake_withLoggedIO(lean_object* v_m_2424_, lean_object* v_00_u03b1_2425_, lean_object* v_inst_2426_, lean_object* v_inst_2427_, lean_object* v_inst_2428_, lean_object* v_inst_2429_, lean_object* v_x_2430_){
_start:
{
lean_object* v_toApplicative_2431_; lean_object* v_toBind_2432_; lean_object* v_toFunctor_2433_; lean_object* v_toPure_2434_; lean_object* v___f_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___f_2439_; lean_object* v___x_2440_; 
v_toApplicative_2431_ = lean_ctor_get(v_inst_2426_, 0);
lean_inc_ref(v_toApplicative_2431_);
v_toBind_2432_ = lean_ctor_get(v_inst_2426_, 1);
lean_inc_n(v_toBind_2432_, 2);
lean_dec_ref(v_inst_2426_);
v_toFunctor_2433_ = lean_ctor_get(v_toApplicative_2431_, 0);
lean_inc_ref(v_toFunctor_2433_);
v_toPure_2434_ = lean_ctor_get(v_toApplicative_2431_, 1);
lean_inc(v_toPure_2434_);
lean_dec_ref(v_toApplicative_2431_);
v___f_2435_ = ((lean_object*)(l_Lake_withLoggedIO___redArg___closed__0));
v___x_2436_ = lean_unsigned_to_nat(0u);
v___x_2437_ = lean_obj_once(&l_Lake_withLoggedIO___redArg___closed__2, &l_Lake_withLoggedIO___redArg___closed__2_once, _init_l_Lake_withLoggedIO___redArg___closed__2);
lean_inc(v_inst_2427_);
v___x_2438_ = lean_apply_2(v_inst_2427_, lean_box(0), v___x_2437_);
v___f_2439_ = lean_alloc_closure((void*)(l_Lake_withLoggedIO___redArg___lam__9), 10, 9);
lean_closure_set(v___f_2439_, 0, v_toPure_2434_);
lean_closure_set(v___f_2439_, 1, v___x_2436_);
lean_closure_set(v___f_2439_, 2, v_inst_2428_);
lean_closure_set(v___f_2439_, 3, v_toBind_2432_);
lean_closure_set(v___f_2439_, 4, v_inst_2427_);
lean_closure_set(v___f_2439_, 5, v_toFunctor_2433_);
lean_closure_set(v___f_2439_, 6, v_inst_2429_);
lean_closure_set(v___f_2439_, 7, v_x_2430_);
lean_closure_set(v___f_2439_, 8, v___f_2435_);
v___x_2440_ = lean_apply_4(v_toBind_2432_, lean_box(0), lean_box(0), v___x_2438_, v___f_2439_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_error___redArg___lam__3(lean_object* v_inst_2441_, lean_object* v___x_2442_, lean_object* v___f_2443_, lean_object* v_toBind_2444_, lean_object* v_iniPos_2445_){
_start:
{
lean_object* v_throw_2446_; lean_object* v_tryCatch_2447_; lean_object* v___f_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v_throw_2446_ = lean_ctor_get(v_inst_2441_, 0);
lean_inc(v_throw_2446_);
v_tryCatch_2447_ = lean_ctor_get(v_inst_2441_, 1);
lean_inc(v_tryCatch_2447_);
lean_dec_ref(v_inst_2441_);
v___f_2448_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2448_, 0, v_throw_2446_);
lean_closure_set(v___f_2448_, 1, v_iniPos_2445_);
v___x_2449_ = lean_apply_3(v_tryCatch_2447_, lean_box(0), v___x_2442_, v___f_2443_);
v___x_2450_ = lean_apply_4(v_toBind_2444_, lean_box(0), lean_box(0), v___x_2449_, v___f_2448_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_error___redArg(lean_object* v_inst_2451_, lean_object* v_inst_2452_, lean_object* v_inst_2453_, lean_object* v_inst_2454_, lean_object* v_msg_2455_){
_start:
{
lean_object* v_toApplicative_2456_; lean_object* v_toFunctor_2457_; lean_object* v_toBind_2458_; lean_object* v_toPure_2459_; lean_object* v_map_2460_; lean_object* v_get_2461_; lean_object* v___f_2462_; uint8_t v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___f_2466_; lean_object* v___f_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v_toApplicative_2456_ = lean_ctor_get(v_inst_2451_, 0);
lean_inc_ref(v_toApplicative_2456_);
v_toFunctor_2457_ = lean_ctor_get(v_toApplicative_2456_, 0);
lean_inc_ref(v_toFunctor_2457_);
v_toBind_2458_ = lean_ctor_get(v_inst_2451_, 1);
lean_inc_n(v_toBind_2458_, 2);
lean_dec_ref(v_inst_2451_);
v_toPure_2459_ = lean_ctor_get(v_toApplicative_2456_, 1);
lean_inc(v_toPure_2459_);
lean_dec_ref(v_toApplicative_2456_);
v_map_2460_ = lean_ctor_get(v_toFunctor_2457_, 0);
lean_inc(v_map_2460_);
lean_dec_ref(v_toFunctor_2457_);
v_get_2461_ = lean_ctor_get(v_inst_2453_, 0);
lean_inc(v_get_2461_);
lean_dec_ref(v_inst_2453_);
v___f_2462_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_2463_ = 3;
v___x_2464_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2464_, 0, v_msg_2455_);
lean_ctor_set_uint8(v___x_2464_, sizeof(void*)*1, v___x_2463_);
v___x_2465_ = lean_apply_1(v_inst_2452_, v___x_2464_);
v___f_2466_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2466_, 0, v_toPure_2459_);
v___f_2467_ = lean_alloc_closure((void*)(l_Lake_ELog_error___redArg___lam__3), 5, 4);
lean_closure_set(v___f_2467_, 0, v_inst_2454_);
lean_closure_set(v___f_2467_, 1, v___x_2465_);
lean_closure_set(v___f_2467_, 2, v___f_2466_);
lean_closure_set(v___f_2467_, 3, v_toBind_2458_);
v___x_2468_ = lean_apply_4(v_map_2460_, lean_box(0), lean_box(0), v___f_2462_, v_get_2461_);
v___x_2469_ = lean_apply_4(v_toBind_2458_, lean_box(0), lean_box(0), v___x_2468_, v___f_2467_);
return v___x_2469_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_error(lean_object* v_m_2470_, lean_object* v_00_u03b1_2471_, lean_object* v_inst_2472_, lean_object* v_inst_2473_, lean_object* v_inst_2474_, lean_object* v_inst_2475_, lean_object* v_msg_2476_){
_start:
{
lean_object* v_toApplicative_2477_; lean_object* v_toFunctor_2478_; lean_object* v_toBind_2479_; lean_object* v_toPure_2480_; lean_object* v_map_2481_; lean_object* v_get_2482_; lean_object* v___f_2483_; uint8_t v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___f_2487_; lean_object* v___f_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v_toApplicative_2477_ = lean_ctor_get(v_inst_2472_, 0);
lean_inc_ref(v_toApplicative_2477_);
v_toFunctor_2478_ = lean_ctor_get(v_toApplicative_2477_, 0);
lean_inc_ref(v_toFunctor_2478_);
v_toBind_2479_ = lean_ctor_get(v_inst_2472_, 1);
lean_inc_n(v_toBind_2479_, 2);
lean_dec_ref(v_inst_2472_);
v_toPure_2480_ = lean_ctor_get(v_toApplicative_2477_, 1);
lean_inc(v_toPure_2480_);
lean_dec_ref(v_toApplicative_2477_);
v_map_2481_ = lean_ctor_get(v_toFunctor_2478_, 0);
lean_inc(v_map_2481_);
lean_dec_ref(v_toFunctor_2478_);
v_get_2482_ = lean_ctor_get(v_inst_2474_, 0);
lean_inc(v_get_2482_);
lean_dec_ref(v_inst_2474_);
v___f_2483_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___x_2484_ = 3;
v___x_2485_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2485_, 0, v_msg_2476_);
lean_ctor_set_uint8(v___x_2485_, sizeof(void*)*1, v___x_2484_);
v___x_2486_ = lean_apply_1(v_inst_2473_, v___x_2485_);
v___f_2487_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2487_, 0, v_toPure_2480_);
v___f_2488_ = lean_alloc_closure((void*)(l_Lake_ELog_error___redArg___lam__3), 5, 4);
lean_closure_set(v___f_2488_, 0, v_inst_2475_);
lean_closure_set(v___f_2488_, 1, v___x_2486_);
lean_closure_set(v___f_2488_, 2, v___f_2487_);
lean_closure_set(v___f_2488_, 3, v_toBind_2479_);
v___x_2489_ = lean_apply_4(v_map_2481_, lean_box(0), lean_box(0), v___f_2483_, v_get_2482_);
v___x_2490_ = lean_apply_4(v_toBind_2479_, lean_box(0), lean_box(0), v___x_2489_, v___f_2488_);
return v___x_2490_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_monadError___redArg___lam__4(lean_object* v_inst_2491_, lean_object* v_inst_2492_, lean_object* v_inst_2493_, lean_object* v_inst_2494_, lean_object* v___f_2495_, lean_object* v_00_u03b1_2496_, lean_object* v___y_2497_){
_start:
{
lean_object* v_toApplicative_2498_; lean_object* v_toFunctor_2499_; lean_object* v_toBind_2500_; lean_object* v_toPure_2501_; lean_object* v_map_2502_; lean_object* v_get_2503_; uint8_t v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___f_2507_; lean_object* v___f_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v_toApplicative_2498_ = lean_ctor_get(v_inst_2491_, 0);
lean_inc_ref(v_toApplicative_2498_);
v_toFunctor_2499_ = lean_ctor_get(v_toApplicative_2498_, 0);
lean_inc_ref(v_toFunctor_2499_);
v_toBind_2500_ = lean_ctor_get(v_inst_2491_, 1);
lean_inc_n(v_toBind_2500_, 2);
lean_dec_ref(v_inst_2491_);
v_toPure_2501_ = lean_ctor_get(v_toApplicative_2498_, 1);
lean_inc(v_toPure_2501_);
lean_dec_ref(v_toApplicative_2498_);
v_map_2502_ = lean_ctor_get(v_toFunctor_2499_, 0);
lean_inc(v_map_2502_);
lean_dec_ref(v_toFunctor_2499_);
v_get_2503_ = lean_ctor_get(v_inst_2492_, 0);
lean_inc(v_get_2503_);
lean_dec_ref(v_inst_2492_);
v___x_2504_ = 3;
v___x_2505_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2505_, 0, v___y_2497_);
lean_ctor_set_uint8(v___x_2505_, sizeof(void*)*1, v___x_2504_);
v___x_2506_ = lean_apply_1(v_inst_2493_, v___x_2505_);
v___f_2507_ = lean_alloc_closure((void*)(l_Lake_errorWithLog___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2507_, 0, v_toPure_2501_);
v___f_2508_ = lean_alloc_closure((void*)(l_Lake_ELog_error___redArg___lam__3), 5, 4);
lean_closure_set(v___f_2508_, 0, v_inst_2494_);
lean_closure_set(v___f_2508_, 1, v___x_2506_);
lean_closure_set(v___f_2508_, 2, v___f_2507_);
lean_closure_set(v___f_2508_, 3, v_toBind_2500_);
v___x_2509_ = lean_apply_4(v_map_2502_, lean_box(0), lean_box(0), v___f_2495_, v_get_2503_);
v___x_2510_ = lean_apply_4(v_toBind_2500_, lean_box(0), lean_box(0), v___x_2509_, v___f_2508_);
return v___x_2510_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_monadError___redArg(lean_object* v_inst_2511_, lean_object* v_inst_2512_, lean_object* v_inst_2513_, lean_object* v_inst_2514_){
_start:
{
lean_object* v___f_2515_; lean_object* v___f_2516_; 
v___f_2515_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2516_ = lean_alloc_closure((void*)(l_Lake_ELog_monadError___redArg___lam__4), 7, 5);
lean_closure_set(v___f_2516_, 0, v_inst_2511_);
lean_closure_set(v___f_2516_, 1, v_inst_2513_);
lean_closure_set(v___f_2516_, 2, v_inst_2512_);
lean_closure_set(v___f_2516_, 3, v_inst_2514_);
lean_closure_set(v___f_2516_, 4, v___f_2515_);
return v___f_2516_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_monadError(lean_object* v_m_2517_, lean_object* v_inst_2518_, lean_object* v_inst_2519_, lean_object* v_inst_2520_, lean_object* v_inst_2521_){
_start:
{
lean_object* v___f_2522_; lean_object* v___f_2523_; 
v___f_2522_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2523_ = lean_alloc_closure((void*)(l_Lake_ELog_monadError___redArg___lam__4), 7, 5);
lean_closure_set(v___f_2523_, 0, v_inst_2518_);
lean_closure_set(v___f_2523_, 1, v_inst_2520_);
lean_closure_set(v___f_2523_, 2, v_inst_2519_);
lean_closure_set(v___f_2523_, 3, v_inst_2521_);
lean_closure_set(v___f_2523_, 4, v___f_2522_);
return v___f_2523_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_failure___redArg___lam__1(lean_object* v_inst_2524_, lean_object* v_____do__lift_2525_){
_start:
{
lean_object* v_throw_2526_; lean_object* v___x_2527_; 
v_throw_2526_ = lean_ctor_get(v_inst_2524_, 0);
lean_inc(v_throw_2526_);
lean_dec_ref(v_inst_2524_);
v___x_2527_ = lean_apply_2(v_throw_2526_, lean_box(0), v_____do__lift_2525_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_failure___redArg(lean_object* v_inst_2528_, lean_object* v_inst_2529_, lean_object* v_inst_2530_){
_start:
{
lean_object* v_toApplicative_2531_; lean_object* v_toFunctor_2532_; lean_object* v_toBind_2533_; lean_object* v_map_2534_; lean_object* v_get_2535_; lean_object* v___f_2536_; lean_object* v___f_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v_toApplicative_2531_ = lean_ctor_get(v_inst_2528_, 0);
v_toFunctor_2532_ = lean_ctor_get(v_toApplicative_2531_, 0);
lean_inc_ref(v_toFunctor_2532_);
v_toBind_2533_ = lean_ctor_get(v_inst_2528_, 1);
lean_inc(v_toBind_2533_);
lean_dec_ref(v_inst_2528_);
v_map_2534_ = lean_ctor_get(v_toFunctor_2532_, 0);
lean_inc(v_map_2534_);
lean_dec_ref(v_toFunctor_2532_);
v_get_2535_ = lean_ctor_get(v_inst_2529_, 0);
lean_inc(v_get_2535_);
lean_dec_ref(v_inst_2529_);
v___f_2536_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2537_ = lean_alloc_closure((void*)(l_Lake_ELog_failure___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2537_, 0, v_inst_2530_);
v___x_2538_ = lean_apply_4(v_map_2534_, lean_box(0), lean_box(0), v___f_2536_, v_get_2535_);
v___x_2539_ = lean_apply_4(v_toBind_2533_, lean_box(0), lean_box(0), v___x_2538_, v___f_2537_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_failure(lean_object* v_m_2540_, lean_object* v_00_u03b1_2541_, lean_object* v_inst_2542_, lean_object* v_inst_2543_, lean_object* v_inst_2544_){
_start:
{
lean_object* v_toApplicative_2545_; lean_object* v_toFunctor_2546_; lean_object* v_toBind_2547_; lean_object* v_map_2548_; lean_object* v_get_2549_; lean_object* v___f_2550_; lean_object* v___f_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; 
v_toApplicative_2545_ = lean_ctor_get(v_inst_2542_, 0);
v_toFunctor_2546_ = lean_ctor_get(v_toApplicative_2545_, 0);
lean_inc_ref(v_toFunctor_2546_);
v_toBind_2547_ = lean_ctor_get(v_inst_2542_, 1);
lean_inc(v_toBind_2547_);
lean_dec_ref(v_inst_2542_);
v_map_2548_ = lean_ctor_get(v_toFunctor_2546_, 0);
lean_inc(v_map_2548_);
lean_dec_ref(v_toFunctor_2546_);
v_get_2549_ = lean_ctor_get(v_inst_2543_, 0);
lean_inc(v_get_2549_);
lean_dec_ref(v_inst_2543_);
v___f_2550_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
v___f_2551_ = lean_alloc_closure((void*)(l_Lake_ELog_failure___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2551_, 0, v_inst_2544_);
v___x_2552_ = lean_apply_4(v_map_2548_, lean_box(0), lean_box(0), v___f_2550_, v_get_2549_);
v___x_2553_ = lean_apply_4(v_toBind_2547_, lean_box(0), lean_box(0), v___x_2552_, v___f_2551_);
return v___x_2553_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__0(lean_object* v_y_2554_, lean_object* v_____r_2555_){
_start:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_box(0);
v___x_2557_ = lean_apply_1(v_y_2554_, v___x_2556_);
return v___x_2557_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__1(lean_object* v_errPos_2558_, lean_object* v_s_2559_){
_start:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2560_ = lean_box(0);
v___x_2561_ = l_Array_shrink___redArg(v_s_2559_, v_errPos_2558_);
v___x_2562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2560_);
lean_ctor_set(v___x_2562_, 1, v___x_2561_);
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__1___boxed(lean_object* v_errPos_2563_, lean_object* v_s_2564_){
_start:
{
lean_object* v_res_2565_; 
v_res_2565_ = l_Lake_ELog_orElse___redArg___lam__1(v_errPos_2563_, v_s_2564_);
lean_dec(v_errPos_2563_);
return v_res_2565_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg___lam__2(lean_object* v_inst_2566_, lean_object* v_toBind_2567_, lean_object* v___f_2568_, lean_object* v_errPos_2569_){
_start:
{
lean_object* v_modifyGet_2570_; lean_object* v___f_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v_modifyGet_2570_ = lean_ctor_get(v_inst_2566_, 2);
lean_inc(v_modifyGet_2570_);
lean_dec_ref(v_inst_2566_);
v___f_2571_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2571_, 0, v_errPos_2569_);
v___x_2572_ = lean_apply_2(v_modifyGet_2570_, lean_box(0), v___f_2571_);
v___x_2573_ = lean_apply_4(v_toBind_2567_, lean_box(0), lean_box(0), v___x_2572_, v___f_2568_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse___redArg(lean_object* v_inst_2574_, lean_object* v_inst_2575_, lean_object* v_inst_2576_, lean_object* v_x_2577_, lean_object* v_y_2578_){
_start:
{
lean_object* v_toBind_2579_; lean_object* v_tryCatch_2580_; lean_object* v___f_2581_; lean_object* v___f_2582_; lean_object* v___x_2583_; 
v_toBind_2579_ = lean_ctor_get(v_inst_2574_, 1);
lean_inc(v_toBind_2579_);
lean_dec_ref(v_inst_2574_);
v_tryCatch_2580_ = lean_ctor_get(v_inst_2576_, 1);
lean_inc(v_tryCatch_2580_);
lean_dec_ref(v_inst_2576_);
v___f_2581_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2581_, 0, v_y_2578_);
v___f_2582_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2582_, 0, v_inst_2575_);
lean_closure_set(v___f_2582_, 1, v_toBind_2579_);
lean_closure_set(v___f_2582_, 2, v___f_2581_);
v___x_2583_ = lean_apply_3(v_tryCatch_2580_, lean_box(0), v_x_2577_, v___f_2582_);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_orElse(lean_object* v_m_2584_, lean_object* v_00_u03b1_2585_, lean_object* v_inst_2586_, lean_object* v_inst_2587_, lean_object* v_inst_2588_, lean_object* v_x_2589_, lean_object* v_y_2590_){
_start:
{
lean_object* v_toBind_2591_; lean_object* v_tryCatch_2592_; lean_object* v___f_2593_; lean_object* v___f_2594_; lean_object* v___x_2595_; 
v_toBind_2591_ = lean_ctor_get(v_inst_2586_, 1);
lean_inc(v_toBind_2591_);
lean_dec_ref(v_inst_2586_);
v_tryCatch_2592_ = lean_ctor_get(v_inst_2588_, 1);
lean_inc(v_tryCatch_2592_);
lean_dec_ref(v_inst_2588_);
v___f_2593_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2593_, 0, v_y_2590_);
v___f_2594_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2594_, 0, v_inst_2587_);
lean_closure_set(v___f_2594_, 1, v_toBind_2591_);
lean_closure_set(v___f_2594_, 2, v___f_2593_);
v___x_2595_ = lean_apply_3(v_tryCatch_2592_, lean_box(0), v_x_2589_, v___f_2594_);
return v___x_2595_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__2(lean_object* v_toApplicative_2596_, lean_object* v_inst_2597_, lean_object* v___f_2598_, lean_object* v_toBind_2599_, lean_object* v___f_2600_, lean_object* v_00_u03b1_2601_){
_start:
{
lean_object* v_toFunctor_2602_; lean_object* v_map_2603_; lean_object* v_get_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; 
v_toFunctor_2602_ = lean_ctor_get(v_toApplicative_2596_, 0);
lean_inc_ref(v_toFunctor_2602_);
lean_dec_ref(v_toApplicative_2596_);
v_map_2603_ = lean_ctor_get(v_toFunctor_2602_, 0);
lean_inc(v_map_2603_);
lean_dec_ref(v_toFunctor_2602_);
v_get_2604_ = lean_ctor_get(v_inst_2597_, 0);
lean_inc(v_get_2604_);
lean_dec_ref(v_inst_2597_);
v___x_2605_ = lean_apply_4(v_map_2603_, lean_box(0), lean_box(0), v___f_2598_, v_get_2604_);
v___x_2606_ = lean_apply_4(v_toBind_2599_, lean_box(0), lean_box(0), v___x_2605_, v___f_2600_);
return v___x_2606_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__0(lean_object* v___y_2607_, lean_object* v_____r_2608_){
_start:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2609_ = lean_box(0);
v___x_2610_ = lean_apply_1(v___y_2607_, v___x_2609_);
return v___x_2610_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg___lam__4(lean_object* v_inst_2611_, lean_object* v_inst_2612_, lean_object* v_toBind_2613_, lean_object* v_00_u03b1_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_){
_start:
{
lean_object* v_tryCatch_2617_; lean_object* v___f_2618_; lean_object* v___f_2619_; lean_object* v___x_2620_; 
v_tryCatch_2617_ = lean_ctor_get(v_inst_2611_, 1);
lean_inc(v_tryCatch_2617_);
lean_dec_ref(v_inst_2611_);
v___f_2618_ = lean_alloc_closure((void*)(l_Lake_ELog_alternative___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2618_, 0, v___y_2616_);
v___f_2619_ = lean_alloc_closure((void*)(l_Lake_ELog_orElse___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2619_, 0, v_inst_2612_);
lean_closure_set(v___f_2619_, 1, v_toBind_2613_);
lean_closure_set(v___f_2619_, 2, v___f_2618_);
v___x_2620_ = lean_apply_3(v_tryCatch_2617_, lean_box(0), v___y_2615_, v___f_2619_);
return v___x_2620_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_alternative___redArg(lean_object* v_inst_2621_, lean_object* v_inst_2622_, lean_object* v_inst_2623_){
_start:
{
lean_object* v_toApplicative_2624_; lean_object* v_toBind_2625_; lean_object* v___f_2626_; lean_object* v___f_2627_; lean_object* v___f_2628_; lean_object* v___f_2629_; lean_object* v___x_2630_; 
v_toApplicative_2624_ = lean_ctor_get(v_inst_2621_, 0);
lean_inc_ref_n(v_toApplicative_2624_, 2);
v_toBind_2625_ = lean_ctor_get(v_inst_2621_, 1);
lean_inc_n(v_toBind_2625_, 2);
lean_dec_ref(v_inst_2621_);
v___f_2626_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
lean_inc_ref(v_inst_2623_);
v___f_2627_ = lean_alloc_closure((void*)(l_Lake_ELog_failure___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2627_, 0, v_inst_2623_);
lean_inc_ref(v_inst_2622_);
v___f_2628_ = lean_alloc_closure((void*)(l_Lake_ELog_alternative___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2628_, 0, v_toApplicative_2624_);
lean_closure_set(v___f_2628_, 1, v_inst_2622_);
lean_closure_set(v___f_2628_, 2, v___f_2626_);
lean_closure_set(v___f_2628_, 3, v_toBind_2625_);
lean_closure_set(v___f_2628_, 4, v___f_2627_);
v___f_2629_ = lean_alloc_closure((void*)(l_Lake_ELog_alternative___redArg___lam__4), 6, 3);
lean_closure_set(v___f_2629_, 0, v_inst_2623_);
lean_closure_set(v___f_2629_, 1, v_inst_2622_);
lean_closure_set(v___f_2629_, 2, v_toBind_2625_);
v___x_2630_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2630_, 0, v_toApplicative_2624_);
lean_ctor_set(v___x_2630_, 1, v___f_2628_);
lean_ctor_set(v___x_2630_, 2, v___f_2629_);
return v___x_2630_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELog_alternative(lean_object* v_m_2631_, lean_object* v_inst_2632_, lean_object* v_inst_2633_, lean_object* v_inst_2634_){
_start:
{
lean_object* v_toApplicative_2635_; lean_object* v_toBind_2636_; lean_object* v___f_2637_; lean_object* v___f_2638_; lean_object* v___f_2639_; lean_object* v___f_2640_; lean_object* v___x_2641_; 
v_toApplicative_2635_ = lean_ctor_get(v_inst_2632_, 0);
lean_inc_ref_n(v_toApplicative_2635_, 2);
v_toBind_2636_ = lean_ctor_get(v_inst_2632_, 1);
lean_inc_n(v_toBind_2636_, 2);
lean_dec_ref(v_inst_2632_);
v___f_2637_ = ((lean_object*)(l_Lake_getLogPos___redArg___closed__0));
lean_inc_ref(v_inst_2634_);
v___f_2638_ = lean_alloc_closure((void*)(l_Lake_ELog_failure___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2638_, 0, v_inst_2634_);
lean_inc_ref(v_inst_2633_);
v___f_2639_ = lean_alloc_closure((void*)(l_Lake_ELog_alternative___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2639_, 0, v_toApplicative_2635_);
lean_closure_set(v___f_2639_, 1, v_inst_2633_);
lean_closure_set(v___f_2639_, 2, v___f_2637_);
lean_closure_set(v___f_2639_, 3, v_toBind_2636_);
lean_closure_set(v___f_2639_, 4, v___f_2638_);
v___f_2640_ = lean_alloc_closure((void*)(l_Lake_ELog_alternative___redArg___lam__4), 6, 3);
lean_closure_set(v___f_2640_, 0, v_inst_2634_);
lean_closure_set(v___f_2640_, 1, v_inst_2633_);
lean_closure_set(v___f_2640_, 2, v_toBind_2636_);
v___x_2641_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2641_, 0, v_toApplicative_2635_);
lean_ctor_set(v___x_2641_, 1, v___f_2639_);
lean_ctor_set(v___x_2641_, 2, v___f_2640_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLogLogTOfMonad___redArg(lean_object* v_inst_2642_){
_start:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2643_ = l_instMonadStateOfStateTOfMonad___redArg(v_inst_2642_);
v___x_2644_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry), 3, 2);
lean_closure_set(v___x_2644_, 0, lean_box(0));
lean_closure_set(v___x_2644_, 1, v___x_2643_);
return v___x_2644_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLogLogTOfMonad(lean_object* v_m_2645_, lean_object* v_inst_2646_){
_start:
{
lean_object* v___x_2647_; 
v___x_2647_ = l_Lake_instMonadLogLogTOfMonad___redArg(v_inst_2646_);
return v___x_2647_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run___redArg(lean_object* v_self_2648_, lean_object* v_log_2649_){
_start:
{
lean_object* v___x_2650_; 
v___x_2650_ = lean_apply_1(v_self_2648_, v_log_2649_);
return v___x_2650_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run(lean_object* v_m_2651_, lean_object* v_00_u03b1_2652_, lean_object* v_self_2653_, lean_object* v_log_2654_){
_start:
{
lean_object* v___x_2655_; 
v___x_2655_ = lean_apply_1(v_self_2653_, v_log_2654_);
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg___lam__0(lean_object* v_x_2656_){
_start:
{
lean_object* v_fst_2657_; 
v_fst_2657_ = lean_ctor_get(v_x_2656_, 0);
lean_inc(v_fst_2657_);
return v_fst_2657_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg___lam__0___boxed(lean_object* v_x_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_Lake_LogT_run_x27___redArg___lam__0(v_x_2658_);
lean_dec_ref(v_x_2658_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27___redArg(lean_object* v_inst_2661_, lean_object* v_self_2662_, lean_object* v_log_2663_){
_start:
{
lean_object* v_map_2664_; lean_object* v___f_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; 
v_map_2664_ = lean_ctor_get(v_inst_2661_, 0);
lean_inc(v_map_2664_);
lean_dec_ref(v_inst_2661_);
v___f_2665_ = ((lean_object*)(l_Lake_LogT_run_x27___redArg___closed__0));
v___x_2666_ = lean_apply_1(v_self_2662_, v_log_2663_);
v___x_2667_ = lean_apply_4(v_map_2664_, lean_box(0), lean_box(0), v___f_2665_, v___x_2666_);
return v___x_2667_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_run_x27(lean_object* v_m_2668_, lean_object* v_00_u03b1_2669_, lean_object* v_inst_2670_, lean_object* v_self_2671_, lean_object* v_log_2672_){
_start:
{
lean_object* v_map_2673_; lean_object* v___f_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v_map_2673_ = lean_ctor_get(v_inst_2670_, 0);
lean_inc(v_map_2673_);
lean_dec_ref(v_inst_2670_);
v___f_2674_ = ((lean_object*)(l_Lake_LogT_run_x27___redArg___closed__0));
v___x_2675_ = lean_apply_1(v_self_2671_, v_log_2672_);
v___x_2676_ = lean_apply_4(v_map_2673_, lean_box(0), lean_box(0), v___f_2674_, v___x_2675_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__1(lean_object* v_toPure_2677_, lean_object* v_fst_2678_, lean_object* v_____r_2679_){
_start:
{
lean_object* v___x_2680_; 
v___x_2680_ = lean_apply_2(v_toPure_2677_, lean_box(0), v_fst_2678_);
return v___x_2680_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__0(lean_object* v_toPure_2681_, lean_object* v_set_2682_, lean_object* v_toBind_2683_, lean_object* v_____x_2684_){
_start:
{
lean_object* v_fst_2685_; lean_object* v_snd_2686_; lean_object* v___f_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; 
v_fst_2685_ = lean_ctor_get(v_____x_2684_, 0);
lean_inc(v_fst_2685_);
v_snd_2686_ = lean_ctor_get(v_____x_2684_, 1);
lean_inc(v_snd_2686_);
lean_dec_ref(v_____x_2684_);
v___f_2687_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2687_, 0, v_toPure_2681_);
lean_closure_set(v___f_2687_, 1, v_fst_2685_);
v___x_2688_ = lean_apply_1(v_set_2682_, v_snd_2686_);
v___x_2689_ = lean_apply_4(v_toBind_2683_, lean_box(0), lean_box(0), v___x_2688_, v___f_2687_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg___lam__2(lean_object* v_self_2690_, lean_object* v_inst_2691_, lean_object* v_toBind_2692_, lean_object* v___f_2693_, lean_object* v_____do__lift_2694_){
_start:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2695_ = lean_apply_1(v_self_2690_, v_____do__lift_2694_);
v___x_2696_ = lean_apply_2(v_inst_2691_, lean_box(0), v___x_2695_);
v___x_2697_ = lean_apply_4(v_toBind_2692_, lean_box(0), lean_box(0), v___x_2696_, v___f_2693_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___redArg(lean_object* v_inst_2698_, lean_object* v_inst_2699_, lean_object* v_inst_2700_, lean_object* v_self_2701_){
_start:
{
lean_object* v_toApplicative_2702_; lean_object* v_toBind_2703_; lean_object* v_set_2704_; lean_object* v_modifyGet_2705_; lean_object* v_toPure_2706_; lean_object* v___f_2707_; lean_object* v___x_2708_; lean_object* v___f_2709_; lean_object* v___f_2710_; lean_object* v___x_2711_; 
v_toApplicative_2702_ = lean_ctor_get(v_inst_2698_, 0);
lean_inc_ref(v_toApplicative_2702_);
v_toBind_2703_ = lean_ctor_get(v_inst_2698_, 1);
lean_inc_n(v_toBind_2703_, 3);
lean_dec_ref(v_inst_2698_);
v_set_2704_ = lean_ctor_get(v_inst_2699_, 1);
lean_inc(v_set_2704_);
v_modifyGet_2705_ = lean_ctor_get(v_inst_2699_, 2);
lean_inc(v_modifyGet_2705_);
lean_dec_ref(v_inst_2699_);
v_toPure_2706_ = lean_ctor_get(v_toApplicative_2702_, 1);
lean_inc(v_toPure_2706_);
lean_dec_ref(v_toApplicative_2702_);
v___f_2707_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_2708_ = lean_apply_2(v_modifyGet_2705_, lean_box(0), v___f_2707_);
v___f_2709_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2709_, 0, v_toPure_2706_);
lean_closure_set(v___f_2709_, 1, v_set_2704_);
lean_closure_set(v___f_2709_, 2, v_toBind_2703_);
v___f_2710_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2710_, 0, v_self_2701_);
lean_closure_set(v___f_2710_, 1, v_inst_2700_);
lean_closure_set(v___f_2710_, 2, v_toBind_2703_);
lean_closure_set(v___f_2710_, 3, v___f_2709_);
v___x_2711_ = lean_apply_4(v_toBind_2703_, lean_box(0), lean_box(0), v___x_2708_, v___f_2710_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun(lean_object* v_n_2712_, lean_object* v_m_2713_, lean_object* v_00_u03b1_2714_, lean_object* v_inst_2715_, lean_object* v_inst_2716_, lean_object* v_inst_2717_, lean_object* v_inst_2718_, lean_object* v_self_2719_){
_start:
{
lean_object* v_toApplicative_2720_; lean_object* v_toBind_2721_; lean_object* v_set_2722_; lean_object* v_modifyGet_2723_; lean_object* v_toPure_2724_; lean_object* v___f_2725_; lean_object* v___x_2726_; lean_object* v___f_2727_; lean_object* v___f_2728_; lean_object* v___x_2729_; 
v_toApplicative_2720_ = lean_ctor_get(v_inst_2715_, 0);
lean_inc_ref(v_toApplicative_2720_);
v_toBind_2721_ = lean_ctor_get(v_inst_2715_, 1);
lean_inc_n(v_toBind_2721_, 3);
lean_dec_ref(v_inst_2715_);
v_set_2722_ = lean_ctor_get(v_inst_2716_, 1);
lean_inc(v_set_2722_);
v_modifyGet_2723_ = lean_ctor_get(v_inst_2716_, 2);
lean_inc(v_modifyGet_2723_);
lean_dec_ref(v_inst_2716_);
v_toPure_2724_ = lean_ctor_get(v_toApplicative_2720_, 1);
lean_inc(v_toPure_2724_);
lean_dec_ref(v_toApplicative_2720_);
v___f_2725_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_2726_ = lean_apply_2(v_modifyGet_2723_, lean_box(0), v___f_2725_);
v___f_2727_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2727_, 0, v_toPure_2724_);
lean_closure_set(v___f_2727_, 1, v_set_2722_);
lean_closure_set(v___f_2727_, 2, v_toBind_2721_);
v___f_2728_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2728_, 0, v_self_2719_);
lean_closure_set(v___f_2728_, 1, v_inst_2717_);
lean_closure_set(v___f_2728_, 2, v_toBind_2721_);
lean_closure_set(v___f_2728_, 3, v___f_2727_);
v___x_2729_ = lean_apply_4(v_toBind_2721_, lean_box(0), lean_box(0), v___x_2726_, v___f_2728_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_takeAndRun___boxed(lean_object* v_n_2730_, lean_object* v_m_2731_, lean_object* v_00_u03b1_2732_, lean_object* v_inst_2733_, lean_object* v_inst_2734_, lean_object* v_inst_2735_, lean_object* v_inst_2736_, lean_object* v_self_2737_){
_start:
{
lean_object* v_res_2738_; 
v_res_2738_ = l_Lake_LogT_takeAndRun(v_n_2730_, v_m_2731_, v_00_u03b1_2732_, v_inst_2733_, v_inst_2734_, v_inst_2735_, v_inst_2736_, v_self_2737_);
lean_dec(v_inst_2736_);
return v_res_2738_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg___lam__2(lean_object* v_toPure_2739_, lean_object* v___x_2740_, lean_object* v_toBind_2741_, lean_object* v_inst_2742_, lean_object* v___f_2743_, lean_object* v_____x_2744_){
_start:
{
lean_object* v_fst_2745_; lean_object* v_snd_2746_; lean_object* v___f_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; uint8_t v___x_2750_; 
v_fst_2745_ = lean_ctor_get(v_____x_2744_, 0);
lean_inc(v_fst_2745_);
v_snd_2746_ = lean_ctor_get(v_____x_2744_, 1);
lean_inc(v_snd_2746_);
lean_dec_ref(v_____x_2744_);
lean_inc(v_toPure_2739_);
v___f_2747_ = lean_alloc_closure((void*)(l_Lake_LogT_takeAndRun___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2747_, 0, v_toPure_2739_);
lean_closure_set(v___f_2747_, 1, v_fst_2745_);
v___x_2748_ = lean_array_get_size(v_snd_2746_);
v___x_2749_ = lean_box(0);
v___x_2750_ = lean_nat_dec_lt(v___x_2740_, v___x_2748_);
if (v___x_2750_ == 0)
{
lean_object* v___x_2751_; lean_object* v___x_2752_; 
lean_dec(v_snd_2746_);
lean_dec(v___f_2743_);
lean_dec_ref(v_inst_2742_);
v___x_2751_ = lean_apply_2(v_toPure_2739_, lean_box(0), v___x_2749_);
v___x_2752_ = lean_apply_4(v_toBind_2741_, lean_box(0), lean_box(0), v___x_2751_, v___f_2747_);
return v___x_2752_;
}
else
{
size_t v___x_2753_; size_t v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
lean_dec(v_toPure_2739_);
v___x_2753_ = ((size_t)0ULL);
v___x_2754_ = lean_usize_of_nat(v___x_2748_);
v___x_2755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_2742_, v___f_2743_, v_snd_2746_, v___x_2753_, v___x_2754_, v___x_2749_);
v___x_2756_ = lean_apply_4(v_toBind_2741_, lean_box(0), lean_box(0), v___x_2755_, v___f_2747_);
return v___x_2756_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg___lam__2___boxed(lean_object* v_toPure_2757_, lean_object* v___x_2758_, lean_object* v_toBind_2759_, lean_object* v_inst_2760_, lean_object* v___f_2761_, lean_object* v_____x_2762_){
_start:
{
lean_object* v_res_2763_; 
v_res_2763_ = l_Lake_LogT_replayLog___redArg___lam__2(v_toPure_2757_, v___x_2758_, v_toBind_2759_, v_inst_2760_, v___f_2761_, v_____x_2762_);
lean_dec(v___x_2758_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog___redArg(lean_object* v_inst_2764_, lean_object* v_logger_2765_, lean_object* v_inst_2766_, lean_object* v_self_2767_){
_start:
{
lean_object* v_toApplicative_2768_; lean_object* v_toBind_2769_; lean_object* v_toPure_2770_; lean_object* v___f_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___f_2776_; lean_object* v___x_2777_; 
v_toApplicative_2768_ = lean_ctor_get(v_inst_2764_, 0);
v_toBind_2769_ = lean_ctor_get(v_inst_2764_, 1);
lean_inc_n(v_toBind_2769_, 2);
v_toPure_2770_ = lean_ctor_get(v_toApplicative_2768_, 1);
lean_inc(v_toPure_2770_);
v___f_2771_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2771_, 0, v_logger_2765_);
v___x_2772_ = lean_unsigned_to_nat(0u);
v___x_2773_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_2774_ = lean_apply_1(v_self_2767_, v___x_2773_);
v___x_2775_ = lean_apply_2(v_inst_2766_, lean_box(0), v___x_2774_);
v___f_2776_ = lean_alloc_closure((void*)(l_Lake_LogT_replayLog___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_2776_, 0, v_toPure_2770_);
lean_closure_set(v___f_2776_, 1, v___x_2772_);
lean_closure_set(v___f_2776_, 2, v_toBind_2769_);
lean_closure_set(v___f_2776_, 3, v_inst_2764_);
lean_closure_set(v___f_2776_, 4, v___f_2771_);
v___x_2777_ = lean_apply_4(v_toBind_2769_, lean_box(0), lean_box(0), v___x_2775_, v___f_2776_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogT_replayLog(lean_object* v_n_2778_, lean_object* v_m_2779_, lean_object* v_00_u03b1_2780_, lean_object* v_inst_2781_, lean_object* v_logger_2782_, lean_object* v_inst_2783_, lean_object* v_self_2784_){
_start:
{
lean_object* v_toApplicative_2785_; lean_object* v_toBind_2786_; lean_object* v_toPure_2787_; lean_object* v___f_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___f_2793_; lean_object* v___x_2794_; 
v_toApplicative_2785_ = lean_ctor_get(v_inst_2781_, 0);
v_toBind_2786_ = lean_ctor_get(v_inst_2781_, 1);
lean_inc_n(v_toBind_2786_, 2);
v_toPure_2787_ = lean_ctor_get(v_toApplicative_2785_, 1);
lean_inc(v_toPure_2787_);
v___f_2788_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_2788_, 0, v_logger_2782_);
v___x_2789_ = lean_unsigned_to_nat(0u);
v___x_2790_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_2791_ = lean_apply_1(v_self_2784_, v___x_2790_);
v___x_2792_ = lean_apply_2(v_inst_2783_, lean_box(0), v___x_2791_);
v___f_2793_ = lean_alloc_closure((void*)(l_Lake_LogT_replayLog___redArg___lam__2___boxed), 6, 5);
lean_closure_set(v___f_2793_, 0, v_toPure_2787_);
lean_closure_set(v___f_2793_, 1, v___x_2789_);
lean_closure_set(v___f_2793_, 2, v_toBind_2786_);
lean_closure_set(v___f_2793_, 3, v_inst_2781_);
lean_closure_set(v___f_2793_, 4, v___f_2788_);
v___x_2794_ = lean_apply_4(v_toBind_2786_, lean_box(0), lean_box(0), v___x_2792_, v___f_2793_);
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLogELogTOfMonad___redArg(lean_object* v_inst_2795_){
_start:
{
lean_object* v_toApplicative_2796_; lean_object* v_toPure_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v_toApplicative_2796_ = lean_ctor_get(v_inst_2795_, 0);
lean_inc_ref(v_toApplicative_2796_);
lean_dec_ref(v_inst_2795_);
v_toPure_2797_ = lean_ctor_get(v_toApplicative_2796_, 1);
lean_inc(v_toPure_2797_);
lean_dec_ref(v_toApplicative_2796_);
v___x_2798_ = l_Lake_EStateT_instMonadStateOfOfPure___redArg(v_toPure_2797_);
v___x_2799_ = lean_alloc_closure((void*)(l_Lake_pushLogEntry), 3, 2);
lean_closure_set(v___x_2799_, 0, lean_box(0));
lean_closure_set(v___x_2799_, 1, v___x_2798_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLogELogTOfMonad(lean_object* v_m_2800_, lean_object* v_inst_2801_){
_start:
{
lean_object* v___x_2802_; 
v___x_2802_ = l_Lake_instMonadLogELogTOfMonad___redArg(v_inst_2801_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__0(lean_object* v_x_2803_){
_start:
{
if (lean_obj_tag(v_x_2803_) == 0)
{
lean_object* v_a_2804_; lean_object* v_a_2805_; lean_object* v___x_2807_; uint8_t v_isShared_2808_; uint8_t v_isSharedCheck_2813_; 
v_a_2804_ = lean_ctor_get(v_x_2803_, 0);
v_a_2805_ = lean_ctor_get(v_x_2803_, 1);
v_isSharedCheck_2813_ = !lean_is_exclusive(v_x_2803_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2807_ = v_x_2803_;
v_isShared_2808_ = v_isSharedCheck_2813_;
goto v_resetjp_2806_;
}
else
{
lean_inc(v_a_2805_);
lean_inc(v_a_2804_);
lean_dec(v_x_2803_);
v___x_2807_ = lean_box(0);
v_isShared_2808_ = v_isSharedCheck_2813_;
goto v_resetjp_2806_;
}
v_resetjp_2806_:
{
lean_object* v___x_2809_; lean_object* v___x_2811_; 
v___x_2809_ = lean_array_get_size(v_a_2804_);
lean_dec(v_a_2804_);
if (v_isShared_2808_ == 0)
{
lean_ctor_set(v___x_2807_, 0, v___x_2809_);
v___x_2811_ = v___x_2807_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v___x_2809_);
lean_ctor_set(v_reuseFailAlloc_2812_, 1, v_a_2805_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
else
{
lean_object* v_a_2814_; lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2822_; 
v_a_2814_ = lean_ctor_get(v_x_2803_, 0);
v_a_2815_ = lean_ctor_get(v_x_2803_, 1);
v_isSharedCheck_2822_ = !lean_is_exclusive(v_x_2803_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2817_ = v_x_2803_;
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_inc(v_a_2814_);
lean_dec(v_x_2803_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2820_; 
if (v_isShared_2818_ == 0)
{
v___x_2820_ = v___x_2817_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v_a_2814_);
lean_ctor_set(v_reuseFailAlloc_2821_, 1, v_a_2815_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__1(lean_object* v_a_2823_, lean_object* v_toPure_2824_, lean_object* v_____do__lift_2825_){
_start:
{
if (lean_obj_tag(v_____do__lift_2825_) == 0)
{
lean_object* v_a_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2834_; 
v_a_2826_ = lean_ctor_get(v_____do__lift_2825_, 1);
v_isSharedCheck_2834_ = !lean_is_exclusive(v_____do__lift_2825_);
if (v_isSharedCheck_2834_ == 0)
{
lean_object* v_unused_2835_; 
v_unused_2835_ = lean_ctor_get(v_____do__lift_2825_, 0);
lean_dec(v_unused_2835_);
v___x_2828_ = v_____do__lift_2825_;
v_isShared_2829_ = v_isSharedCheck_2834_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_a_2826_);
lean_dec(v_____do__lift_2825_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2834_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2831_; 
if (v_isShared_2829_ == 0)
{
lean_ctor_set_tag(v___x_2828_, 1);
lean_ctor_set(v___x_2828_, 0, v_a_2823_);
v___x_2831_ = v___x_2828_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2823_);
lean_ctor_set(v_reuseFailAlloc_2833_, 1, v_a_2826_);
v___x_2831_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
lean_object* v___x_2832_; 
v___x_2832_ = lean_apply_2(v_toPure_2824_, lean_box(0), v___x_2831_);
return v___x_2832_;
}
}
}
else
{
lean_object* v_a_2836_; lean_object* v_a_2837_; lean_object* v___x_2839_; uint8_t v_isShared_2840_; uint8_t v_isSharedCheck_2845_; 
lean_dec(v_a_2823_);
v_a_2836_ = lean_ctor_get(v_____do__lift_2825_, 0);
v_a_2837_ = lean_ctor_get(v_____do__lift_2825_, 1);
v_isSharedCheck_2845_ = !lean_is_exclusive(v_____do__lift_2825_);
if (v_isSharedCheck_2845_ == 0)
{
v___x_2839_ = v_____do__lift_2825_;
v_isShared_2840_ = v_isSharedCheck_2845_;
goto v_resetjp_2838_;
}
else
{
lean_inc(v_a_2837_);
lean_inc(v_a_2836_);
lean_dec(v_____do__lift_2825_);
v___x_2839_ = lean_box(0);
v_isShared_2840_ = v_isSharedCheck_2845_;
goto v_resetjp_2838_;
}
v_resetjp_2838_:
{
lean_object* v___x_2842_; 
if (v_isShared_2840_ == 0)
{
v___x_2842_ = v___x_2839_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_a_2836_);
lean_ctor_set(v_reuseFailAlloc_2844_, 1, v_a_2837_);
v___x_2842_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
lean_object* v___x_2843_; 
v___x_2843_ = lean_apply_2(v_toPure_2824_, lean_box(0), v___x_2842_);
return v___x_2843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__2(lean_object* v_toPure_2846_, lean_object* v___x_2847_, lean_object* v_____do__lift_2848_){
_start:
{
if (lean_obj_tag(v_____do__lift_2848_) == 0)
{
lean_object* v___x_2849_; 
v___x_2849_ = lean_apply_2(v_toPure_2846_, lean_box(0), v_____do__lift_2848_);
return v___x_2849_;
}
else
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2858_; 
v_a_2850_ = lean_ctor_get(v_____do__lift_2848_, 1);
v_isSharedCheck_2858_ = !lean_is_exclusive(v_____do__lift_2848_);
if (v_isSharedCheck_2858_ == 0)
{
lean_object* v_unused_2859_; 
v_unused_2859_ = lean_ctor_get(v_____do__lift_2848_, 0);
lean_dec(v_unused_2859_);
v___x_2852_ = v_____do__lift_2848_;
v_isShared_2853_ = v_isSharedCheck_2858_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v_____do__lift_2848_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2858_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
lean_ctor_set_tag(v___x_2852_, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2847_);
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v___x_2847_);
lean_ctor_set(v_reuseFailAlloc_2857_, 1, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
lean_object* v___x_2856_; 
v___x_2856_ = lean_apply_2(v_toPure_2846_, lean_box(0), v___x_2855_);
return v___x_2856_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__3(lean_object* v_toPure_2860_, lean_object* v___x_2861_, lean_object* v_toBind_2862_, lean_object* v_____do__lift_2863_){
_start:
{
if (lean_obj_tag(v_____do__lift_2863_) == 0)
{
lean_object* v_a_2864_; lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2879_; 
v_a_2864_ = lean_ctor_get(v_____do__lift_2863_, 0);
v_a_2865_ = lean_ctor_get(v_____do__lift_2863_, 1);
v_isSharedCheck_2879_ = !lean_is_exclusive(v_____do__lift_2863_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2867_ = v_____do__lift_2863_;
v_isShared_2868_ = v_isSharedCheck_2879_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_inc(v_a_2864_);
lean_dec(v_____do__lift_2863_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2879_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___f_2869_; lean_object* v___x_2870_; lean_object* v___f_2871_; lean_object* v___x_2872_; lean_object* v___x_2874_; 
lean_inc_n(v_toPure_2860_, 2);
v___f_2869_ = lean_alloc_closure((void*)(l_Lake_instMonadErrorELogTOfMonad___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2869_, 0, v_a_2864_);
lean_closure_set(v___f_2869_, 1, v_toPure_2860_);
v___x_2870_ = lean_box(0);
v___f_2871_ = lean_alloc_closure((void*)(l_Lake_instMonadErrorELogTOfMonad___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2871_, 0, v_toPure_2860_);
lean_closure_set(v___f_2871_, 1, v___x_2870_);
v___x_2872_ = lean_array_push(v_a_2865_, v___x_2861_);
if (v_isShared_2868_ == 0)
{
lean_ctor_set(v___x_2867_, 1, v___x_2872_);
lean_ctor_set(v___x_2867_, 0, v___x_2870_);
v___x_2874_ = v___x_2867_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v___x_2870_);
lean_ctor_set(v_reuseFailAlloc_2878_, 1, v___x_2872_);
v___x_2874_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2875_ = lean_apply_2(v_toPure_2860_, lean_box(0), v___x_2874_);
lean_inc(v_toBind_2862_);
v___x_2876_ = lean_apply_4(v_toBind_2862_, lean_box(0), lean_box(0), v___x_2875_, v___f_2871_);
v___x_2877_ = lean_apply_4(v_toBind_2862_, lean_box(0), lean_box(0), v___x_2876_, v___f_2869_);
return v___x_2877_;
}
}
}
else
{
lean_object* v_a_2880_; lean_object* v_a_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2889_; 
lean_dec(v_toBind_2862_);
lean_dec_ref(v___x_2861_);
v_a_2880_ = lean_ctor_get(v_____do__lift_2863_, 0);
v_a_2881_ = lean_ctor_get(v_____do__lift_2863_, 1);
v_isSharedCheck_2889_ = !lean_is_exclusive(v_____do__lift_2863_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2883_ = v_____do__lift_2863_;
v_isShared_2884_ = v_isSharedCheck_2889_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_a_2881_);
lean_inc(v_a_2880_);
lean_dec(v_____do__lift_2863_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2889_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v___x_2886_; 
if (v_isShared_2884_ == 0)
{
v___x_2886_ = v___x_2883_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v_a_2880_);
lean_ctor_set(v_reuseFailAlloc_2888_, 1, v_a_2881_);
v___x_2886_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2885_;
}
v_reusejp_2885_:
{
lean_object* v___x_2887_; 
v___x_2887_ = lean_apply_2(v_toPure_2860_, lean_box(0), v___x_2886_);
return v___x_2887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg___lam__4(lean_object* v_toFunctor_2890_, lean_object* v_toPure_2891_, lean_object* v_toBind_2892_, lean_object* v___f_2893_, lean_object* v_00_u03b1_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v_map_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2910_; 
v_map_2897_ = lean_ctor_get(v_toFunctor_2890_, 0);
v_isSharedCheck_2910_ = !lean_is_exclusive(v_toFunctor_2890_);
if (v_isSharedCheck_2910_ == 0)
{
lean_object* v_unused_2911_; 
v_unused_2911_ = lean_ctor_get(v_toFunctor_2890_, 1);
lean_dec(v_unused_2911_);
v___x_2899_ = v_toFunctor_2890_;
v_isShared_2900_ = v_isSharedCheck_2910_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_map_2897_);
lean_dec(v_toFunctor_2890_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2910_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
uint8_t v___x_2901_; lean_object* v___x_2902_; lean_object* v___f_2903_; lean_object* v___x_2905_; 
v___x_2901_ = 3;
v___x_2902_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2902_, 0, v___y_2895_);
lean_ctor_set_uint8(v___x_2902_, sizeof(void*)*1, v___x_2901_);
lean_inc(v_toBind_2892_);
lean_inc(v_toPure_2891_);
v___f_2903_ = lean_alloc_closure((void*)(l_Lake_instMonadErrorELogTOfMonad___redArg___lam__3), 4, 3);
lean_closure_set(v___f_2903_, 0, v_toPure_2891_);
lean_closure_set(v___f_2903_, 1, v___x_2902_);
lean_closure_set(v___f_2903_, 2, v_toBind_2892_);
lean_inc_ref(v___y_2896_);
if (v_isShared_2900_ == 0)
{
lean_ctor_set(v___x_2899_, 1, v___y_2896_);
lean_ctor_set(v___x_2899_, 0, v___y_2896_);
v___x_2905_ = v___x_2899_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v___y_2896_);
lean_ctor_set(v_reuseFailAlloc_2909_, 1, v___y_2896_);
v___x_2905_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2906_ = lean_apply_2(v_toPure_2891_, lean_box(0), v___x_2905_);
v___x_2907_ = lean_apply_4(v_map_2897_, lean_box(0), lean_box(0), v___f_2893_, v___x_2906_);
v___x_2908_ = lean_apply_4(v_toBind_2892_, lean_box(0), lean_box(0), v___x_2907_, v___f_2903_);
return v___x_2908_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad___redArg(lean_object* v_inst_2913_){
_start:
{
lean_object* v_toApplicative_2914_; lean_object* v_toBind_2915_; lean_object* v_toFunctor_2916_; lean_object* v_toPure_2917_; lean_object* v___f_2918_; lean_object* v___f_2919_; 
v_toApplicative_2914_ = lean_ctor_get(v_inst_2913_, 0);
lean_inc_ref(v_toApplicative_2914_);
v_toBind_2915_ = lean_ctor_get(v_inst_2913_, 1);
lean_inc(v_toBind_2915_);
lean_dec_ref(v_inst_2913_);
v_toFunctor_2916_ = lean_ctor_get(v_toApplicative_2914_, 0);
lean_inc_ref(v_toFunctor_2916_);
v_toPure_2917_ = lean_ctor_get(v_toApplicative_2914_, 1);
lean_inc(v_toPure_2917_);
lean_dec_ref(v_toApplicative_2914_);
v___f_2918_ = ((lean_object*)(l_Lake_instMonadErrorELogTOfMonad___redArg___closed__0));
v___f_2919_ = lean_alloc_closure((void*)(l_Lake_instMonadErrorELogTOfMonad___redArg___lam__4), 7, 4);
lean_closure_set(v___f_2919_, 0, v_toFunctor_2916_);
lean_closure_set(v___f_2919_, 1, v_toPure_2917_);
lean_closure_set(v___f_2919_, 2, v_toBind_2915_);
lean_closure_set(v___f_2919_, 3, v___f_2918_);
return v___f_2919_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadErrorELogTOfMonad(lean_object* v_m_2920_, lean_object* v_inst_2921_){
_start:
{
lean_object* v___x_2922_; 
v___x_2922_ = l_Lake_instMonadErrorELogTOfMonad___redArg(v_inst_2921_);
return v___x_2922_;
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__1(lean_object* v___y_2923_, lean_object* v___x_2924_, lean_object* v_toPure_2925_, lean_object* v_____do__lift_2926_){
_start:
{
if (lean_obj_tag(v_____do__lift_2926_) == 0)
{
lean_object* v_a_2927_; lean_object* v___x_2928_; 
lean_dec(v_toPure_2925_);
v_a_2927_ = lean_ctor_get(v_____do__lift_2926_, 1);
lean_inc(v_a_2927_);
lean_dec_ref_known(v_____do__lift_2926_, 2);
v___x_2928_ = lean_apply_2(v___y_2923_, v___x_2924_, v_a_2927_);
return v___x_2928_;
}
else
{
lean_object* v_a_2929_; lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2938_; 
lean_dec(v___y_2923_);
v_a_2929_ = lean_ctor_get(v_____do__lift_2926_, 0);
v_a_2930_ = lean_ctor_get(v_____do__lift_2926_, 1);
v_isSharedCheck_2938_ = !lean_is_exclusive(v_____do__lift_2926_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2932_ = v_____do__lift_2926_;
v_isShared_2933_ = v_isSharedCheck_2938_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_a_2930_);
lean_inc(v_a_2929_);
lean_dec(v_____do__lift_2926_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2938_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2935_; 
if (v_isShared_2933_ == 0)
{
v___x_2935_ = v___x_2932_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_a_2929_);
lean_ctor_set(v_reuseFailAlloc_2937_, 1, v_a_2930_);
v___x_2935_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
lean_object* v___x_2936_; 
v___x_2936_ = lean_apply_2(v_toPure_2925_, lean_box(0), v___x_2935_);
return v___x_2936_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__0(lean_object* v_toPure_2939_, lean_object* v___y_2940_, lean_object* v_toBind_2941_, lean_object* v_____do__lift_2942_){
_start:
{
if (lean_obj_tag(v_____do__lift_2942_) == 0)
{
lean_object* v___x_2943_; 
lean_dec(v_toBind_2941_);
lean_dec(v___y_2940_);
v___x_2943_ = lean_apply_2(v_toPure_2939_, lean_box(0), v_____do__lift_2942_);
return v___x_2943_;
}
else
{
lean_object* v_a_2944_; lean_object* v_a_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2957_; 
v_a_2944_ = lean_ctor_get(v_____do__lift_2942_, 0);
v_a_2945_ = lean_ctor_get(v_____do__lift_2942_, 1);
v_isSharedCheck_2957_ = !lean_is_exclusive(v_____do__lift_2942_);
if (v_isSharedCheck_2957_ == 0)
{
v___x_2947_ = v_____do__lift_2942_;
v_isShared_2948_ = v_isSharedCheck_2957_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_a_2945_);
lean_inc(v_a_2944_);
lean_dec(v_____do__lift_2942_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2957_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2949_; lean_object* v___f_2950_; lean_object* v___x_2951_; lean_object* v___x_2953_; 
v___x_2949_ = lean_box(0);
lean_inc(v_toPure_2939_);
v___f_2950_ = lean_alloc_closure((void*)(l_Lake_instAlternativeELogTOfMonad___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2950_, 0, v___y_2940_);
lean_closure_set(v___f_2950_, 1, v___x_2949_);
lean_closure_set(v___f_2950_, 2, v_toPure_2939_);
v___x_2951_ = l_Array_shrink___redArg(v_a_2945_, v_a_2944_);
lean_dec(v_a_2944_);
if (v_isShared_2948_ == 0)
{
lean_ctor_set_tag(v___x_2947_, 0);
lean_ctor_set(v___x_2947_, 1, v___x_2951_);
lean_ctor_set(v___x_2947_, 0, v___x_2949_);
v___x_2953_ = v___x_2947_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v___x_2949_);
lean_ctor_set(v_reuseFailAlloc_2956_, 1, v___x_2951_);
v___x_2953_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = lean_apply_2(v_toPure_2939_, lean_box(0), v___x_2953_);
v___x_2955_ = lean_apply_4(v_toBind_2941_, lean_box(0), lean_box(0), v___x_2954_, v___f_2950_);
return v___x_2955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__2(lean_object* v_toPure_2958_, lean_object* v_toBind_2959_, lean_object* v_00_u03b1_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
lean_object* v___f_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
lean_inc(v_toBind_2959_);
v___f_2964_ = lean_alloc_closure((void*)(l_Lake_instAlternativeELogTOfMonad___redArg___lam__0), 4, 3);
lean_closure_set(v___f_2964_, 0, v_toPure_2958_);
lean_closure_set(v___f_2964_, 1, v___y_2962_);
lean_closure_set(v___f_2964_, 2, v_toBind_2959_);
v___x_2965_ = lean_apply_1(v___y_2961_, v___y_2963_);
v___x_2966_ = lean_apply_4(v_toBind_2959_, lean_box(0), lean_box(0), v___x_2965_, v___f_2964_);
return v___x_2966_;
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__3(lean_object* v_toPure_2967_, lean_object* v_____do__lift_2968_){
_start:
{
if (lean_obj_tag(v_____do__lift_2968_) == 0)
{
lean_object* v_a_2969_; lean_object* v_a_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_2978_; 
v_a_2969_ = lean_ctor_get(v_____do__lift_2968_, 0);
v_a_2970_ = lean_ctor_get(v_____do__lift_2968_, 1);
v_isSharedCheck_2978_ = !lean_is_exclusive(v_____do__lift_2968_);
if (v_isSharedCheck_2978_ == 0)
{
v___x_2972_ = v_____do__lift_2968_;
v_isShared_2973_ = v_isSharedCheck_2978_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_a_2970_);
lean_inc(v_a_2969_);
lean_dec(v_____do__lift_2968_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_2978_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v___x_2975_; 
if (v_isShared_2973_ == 0)
{
lean_ctor_set_tag(v___x_2972_, 1);
v___x_2975_ = v___x_2972_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v_a_2969_);
lean_ctor_set(v_reuseFailAlloc_2977_, 1, v_a_2970_);
v___x_2975_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
lean_object* v___x_2976_; 
v___x_2976_ = lean_apply_2(v_toPure_2967_, lean_box(0), v___x_2975_);
return v___x_2976_;
}
}
}
else
{
lean_object* v_a_2979_; lean_object* v_a_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2988_; 
v_a_2979_ = lean_ctor_get(v_____do__lift_2968_, 0);
v_a_2980_ = lean_ctor_get(v_____do__lift_2968_, 1);
v_isSharedCheck_2988_ = !lean_is_exclusive(v_____do__lift_2968_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2982_ = v_____do__lift_2968_;
v_isShared_2983_ = v_isSharedCheck_2988_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_a_2980_);
lean_inc(v_a_2979_);
lean_dec(v_____do__lift_2968_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2988_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2985_; 
if (v_isShared_2983_ == 0)
{
v___x_2985_ = v___x_2982_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2979_);
lean_ctor_set(v_reuseFailAlloc_2987_, 1, v_a_2980_);
v___x_2985_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
lean_object* v___x_2986_; 
v___x_2986_ = lean_apply_2(v_toPure_2967_, lean_box(0), v___x_2985_);
return v___x_2986_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg___lam__4(lean_object* v_toFunctor_2989_, lean_object* v_toPure_2990_, lean_object* v___f_2991_, lean_object* v_toBind_2992_, lean_object* v___f_2993_, lean_object* v_00_u03b1_2994_, lean_object* v___y_2995_){
_start:
{
lean_object* v_map_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3006_; 
v_map_2996_ = lean_ctor_get(v_toFunctor_2989_, 0);
v_isSharedCheck_3006_ = !lean_is_exclusive(v_toFunctor_2989_);
if (v_isSharedCheck_3006_ == 0)
{
lean_object* v_unused_3007_; 
v_unused_3007_ = lean_ctor_get(v_toFunctor_2989_, 1);
lean_dec(v_unused_3007_);
v___x_2998_ = v_toFunctor_2989_;
v_isShared_2999_ = v_isSharedCheck_3006_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_map_2996_);
lean_dec(v_toFunctor_2989_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3006_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
lean_inc_ref(v___y_2995_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 1, v___y_2995_);
lean_ctor_set(v___x_2998_, 0, v___y_2995_);
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3005_; 
v_reuseFailAlloc_3005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3005_, 0, v___y_2995_);
lean_ctor_set(v_reuseFailAlloc_3005_, 1, v___y_2995_);
v___x_3001_ = v_reuseFailAlloc_3005_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3002_ = lean_apply_2(v_toPure_2990_, lean_box(0), v___x_3001_);
v___x_3003_ = lean_apply_4(v_map_2996_, lean_box(0), lean_box(0), v___f_2991_, v___x_3002_);
v___x_3004_ = lean_apply_4(v_toBind_2992_, lean_box(0), lean_box(0), v___x_3003_, v___f_2993_);
return v___x_3004_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad___redArg(lean_object* v_inst_3008_){
_start:
{
lean_object* v_toApplicative_3009_; lean_object* v_toBind_3010_; lean_object* v_toFunctor_3011_; lean_object* v_toPure_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3030_; 
v_toApplicative_3009_ = lean_ctor_get(v_inst_3008_, 0);
lean_inc_ref(v_toApplicative_3009_);
v_toBind_3010_ = lean_ctor_get(v_inst_3008_, 1);
lean_inc(v_toBind_3010_);
lean_dec_ref(v_inst_3008_);
v_toFunctor_3011_ = lean_ctor_get(v_toApplicative_3009_, 0);
v_toPure_3012_ = lean_ctor_get(v_toApplicative_3009_, 1);
v_isSharedCheck_3030_ = !lean_is_exclusive(v_toApplicative_3009_);
if (v_isSharedCheck_3030_ == 0)
{
lean_object* v_unused_3031_; lean_object* v_unused_3032_; lean_object* v_unused_3033_; 
v_unused_3031_ = lean_ctor_get(v_toApplicative_3009_, 4);
lean_dec(v_unused_3031_);
v_unused_3032_ = lean_ctor_get(v_toApplicative_3009_, 3);
lean_dec(v_unused_3032_);
v_unused_3033_ = lean_ctor_get(v_toApplicative_3009_, 2);
lean_dec(v_unused_3033_);
v___x_3014_ = v_toApplicative_3009_;
v_isShared_3015_ = v_isSharedCheck_3030_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_toPure_3012_);
lean_inc(v_toFunctor_3011_);
lean_dec(v_toApplicative_3009_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3030_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___f_3016_; lean_object* v___f_3017_; lean_object* v___f_3018_; lean_object* v___f_3019_; lean_object* v___f_3020_; lean_object* v___f_3021_; lean_object* v___f_3022_; lean_object* v___f_3023_; lean_object* v___x_3024_; lean_object* v___f_3025_; lean_object* v___x_3027_; 
v___f_3016_ = ((lean_object*)(l_Lake_instMonadErrorELogTOfMonad___redArg___closed__0));
lean_inc_n(v_toBind_3010_, 4);
lean_inc_n(v_toPure_3012_, 7);
v___f_3017_ = lean_alloc_closure((void*)(l_Lake_instAlternativeELogTOfMonad___redArg___lam__2), 6, 2);
lean_closure_set(v___f_3017_, 0, v_toPure_3012_);
lean_closure_set(v___f_3017_, 1, v_toBind_3010_);
v___f_3018_ = lean_alloc_closure((void*)(l_Lake_instAlternativeELogTOfMonad___redArg___lam__3), 2, 1);
lean_closure_set(v___f_3018_, 0, v_toPure_3012_);
lean_inc_ref_n(v_toFunctor_3011_, 2);
v___f_3019_ = lean_alloc_closure((void*)(l_Lake_instAlternativeELogTOfMonad___redArg___lam__4), 7, 5);
lean_closure_set(v___f_3019_, 0, v_toFunctor_3011_);
lean_closure_set(v___f_3019_, 1, v_toPure_3012_);
lean_closure_set(v___f_3019_, 2, v___f_3016_);
lean_closure_set(v___f_3019_, 3, v_toBind_3010_);
lean_closure_set(v___f_3019_, 4, v___f_3018_);
v___f_3020_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_3020_, 0, v_toPure_3012_);
lean_closure_set(v___f_3020_, 1, v_toBind_3010_);
v___f_3021_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_3021_, 0, v_toPure_3012_);
lean_closure_set(v___f_3021_, 1, v_toBind_3010_);
v___f_3022_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_3022_, 0, v_toPure_3012_);
lean_closure_set(v___f_3022_, 1, v___f_3020_);
v___f_3023_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_3023_, 0, v_toFunctor_3011_);
lean_closure_set(v___f_3023_, 1, v_toPure_3012_);
lean_closure_set(v___f_3023_, 2, v_toBind_3010_);
v___x_3024_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_3011_);
v___f_3025_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_3025_, 0, v_toPure_3012_);
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 4, v___f_3021_);
lean_ctor_set(v___x_3014_, 3, v___f_3022_);
lean_ctor_set(v___x_3014_, 2, v___f_3023_);
lean_ctor_set(v___x_3014_, 1, v___f_3025_);
lean_ctor_set(v___x_3014_, 0, v___x_3024_);
v___x_3027_ = v___x_3014_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v___x_3024_);
lean_ctor_set(v_reuseFailAlloc_3029_, 1, v___f_3025_);
lean_ctor_set(v_reuseFailAlloc_3029_, 2, v___f_3023_);
lean_ctor_set(v_reuseFailAlloc_3029_, 3, v___f_3022_);
lean_ctor_set(v_reuseFailAlloc_3029_, 4, v___f_3021_);
v___x_3027_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
lean_object* v___x_3028_; 
v___x_3028_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3027_);
lean_ctor_set(v___x_3028_, 1, v___f_3019_);
lean_ctor_set(v___x_3028_, 2, v___f_3017_);
return v___x_3028_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instAlternativeELogTOfMonad(lean_object* v_m_3034_, lean_object* v_inst_3035_){
_start:
{
lean_object* v___x_3036_; 
v___x_3036_ = l_Lake_instAlternativeELogTOfMonad___redArg(v_inst_3035_);
return v___x_3036_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run___redArg(lean_object* v_self_3037_, lean_object* v_log_3038_){
_start:
{
lean_object* v___x_3039_; 
v___x_3039_ = lean_apply_1(v_self_3037_, v_log_3038_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run(lean_object* v_m_3040_, lean_object* v_00_u03b1_3041_, lean_object* v_self_3042_, lean_object* v_log_3043_){
_start:
{
lean_object* v___x_3044_; 
v___x_3044_ = lean_apply_1(v_self_3042_, v_log_3043_);
return v___x_3044_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x27___redArg(lean_object* v_inst_3046_, lean_object* v_self_3047_, lean_object* v_log_3048_){
_start:
{
lean_object* v_map_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
v_map_3049_ = lean_ctor_get(v_inst_3046_, 0);
lean_inc(v_map_3049_);
lean_dec_ref(v_inst_3046_);
v___x_3050_ = ((lean_object*)(l_Lake_ELogT_run_x27___redArg___closed__0));
v___x_3051_ = lean_apply_1(v_self_3047_, v_log_3048_);
v___x_3052_ = lean_apply_4(v_map_3049_, lean_box(0), lean_box(0), v___x_3050_, v___x_3051_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x27(lean_object* v_m_3053_, lean_object* v_00_u03b1_3054_, lean_object* v_inst_3055_, lean_object* v_self_3056_, lean_object* v_log_3057_){
_start:
{
lean_object* v_map_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; 
v_map_3058_ = lean_ctor_get(v_inst_3055_, 0);
lean_inc(v_map_3058_);
lean_dec_ref(v_inst_3055_);
v___x_3059_ = ((lean_object*)(l_Lake_ELogT_run_x27___redArg___closed__0));
v___x_3060_ = lean_apply_1(v_self_3056_, v_log_3057_);
v___x_3061_ = lean_apply_4(v_map_3058_, lean_box(0), lean_box(0), v___x_3059_, v___x_3060_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT___redArg(lean_object* v_inst_3063_, lean_object* v_self_3064_, lean_object* v___y_3065_){
_start:
{
lean_object* v_map_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; 
v_map_3066_ = lean_ctor_get(v_inst_3063_, 0);
lean_inc(v_map_3066_);
lean_dec_ref(v_inst_3063_);
v___x_3067_ = ((lean_object*)(l_Lake_ELogT_toLogT___redArg___closed__0));
v___x_3068_ = lean_apply_1(v_self_3064_, v___y_3065_);
v___x_3069_ = lean_apply_4(v_map_3066_, lean_box(0), lean_box(0), v___x_3067_, v___x_3068_);
return v___x_3069_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT(lean_object* v_m_3070_, lean_object* v_00_u03b1_3071_, lean_object* v_inst_3072_, lean_object* v_self_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v_map_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v_map_3075_ = lean_ctor_get(v_inst_3072_, 0);
lean_inc(v_map_3075_);
lean_dec_ref(v_inst_3072_);
v___x_3076_ = ((lean_object*)(l_Lake_ELogT_toLogT___redArg___closed__0));
v___x_3077_ = lean_apply_1(v_self_3073_, v___y_3074_);
v___x_3078_ = lean_apply_4(v_map_3075_, lean_box(0), lean_box(0), v___x_3076_, v___x_3077_);
return v___x_3078_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT_x3f___redArg(lean_object* v_inst_3080_, lean_object* v_self_3081_, lean_object* v___y_3082_){
_start:
{
lean_object* v_map_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
v_map_3083_ = lean_ctor_get(v_inst_3080_, 0);
lean_inc(v_map_3083_);
lean_dec_ref(v_inst_3080_);
v___x_3084_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3085_ = lean_apply_1(v_self_3081_, v___y_3082_);
v___x_3086_ = lean_apply_4(v_map_3083_, lean_box(0), lean_box(0), v___x_3084_, v___x_3085_);
return v___x_3086_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_toLogT_x3f(lean_object* v_m_3087_, lean_object* v_00_u03b1_3088_, lean_object* v_inst_3089_, lean_object* v_self_3090_, lean_object* v___y_3091_){
_start:
{
lean_object* v_map_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v_map_3092_ = lean_ctor_get(v_inst_3089_, 0);
lean_inc(v_map_3092_);
lean_dec_ref(v_inst_3089_);
v___x_3093_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3094_ = lean_apply_1(v_self_3090_, v___y_3091_);
v___x_3095_ = lean_apply_4(v_map_3092_, lean_box(0), lean_box(0), v___x_3093_, v___x_3094_);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f___redArg(lean_object* v_inst_3096_, lean_object* v_self_3097_, lean_object* v_log_3098_){
_start:
{
lean_object* v_map_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v_map_3099_ = lean_ctor_get(v_inst_3096_, 0);
lean_inc(v_map_3099_);
lean_dec_ref(v_inst_3096_);
v___x_3100_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3101_ = lean_apply_1(v_self_3097_, v_log_3098_);
v___x_3102_ = lean_apply_4(v_map_3099_, lean_box(0), lean_box(0), v___x_3100_, v___x_3101_);
return v___x_3102_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f(lean_object* v_m_3103_, lean_object* v_00_u03b1_3104_, lean_object* v_inst_3105_, lean_object* v_self_3106_, lean_object* v_log_3107_){
_start:
{
lean_object* v_map_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v_map_3108_ = lean_ctor_get(v_inst_3105_, 0);
lean_inc(v_map_3108_);
lean_dec_ref(v_inst_3105_);
v___x_3109_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3110_ = lean_apply_1(v_self_3106_, v_log_3107_);
v___x_3111_ = lean_apply_4(v_map_3108_, lean_box(0), lean_box(0), v___x_3109_, v___x_3110_);
return v___x_3111_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f_x27___redArg(lean_object* v_inst_3113_, lean_object* v_self_3114_, lean_object* v_log_3115_){
_start:
{
lean_object* v_map_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v_map_3116_ = lean_ctor_get(v_inst_3113_, 0);
lean_inc(v_map_3116_);
lean_dec_ref(v_inst_3113_);
v___x_3117_ = ((lean_object*)(l_Lake_ELogT_run_x3f_x27___redArg___closed__0));
v___x_3118_ = lean_apply_1(v_self_3114_, v_log_3115_);
v___x_3119_ = lean_apply_4(v_map_3116_, lean_box(0), lean_box(0), v___x_3117_, v___x_3118_);
return v___x_3119_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_run_x3f_x27(lean_object* v_m_3120_, lean_object* v_00_u03b1_3121_, lean_object* v_inst_3122_, lean_object* v_self_3123_, lean_object* v_log_3124_){
_start:
{
lean_object* v_map_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v_map_3125_ = lean_ctor_get(v_inst_3122_, 0);
lean_inc(v_map_3125_);
lean_dec_ref(v_inst_3122_);
v___x_3126_ = ((lean_object*)(l_Lake_ELogT_run_x3f_x27___redArg___closed__0));
v___x_3127_ = lean_apply_1(v_self_3123_, v_log_3124_);
v___x_3128_ = lean_apply_4(v_map_3125_, lean_box(0), lean_box(0), v___x_3126_, v___x_3127_);
return v___x_3128_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg___lam__0(lean_object* v_f_3129_, lean_object* v_____x_3130_){
_start:
{
lean_object* v_fst_3131_; lean_object* v_snd_3132_; lean_object* v___x_3133_; 
v_fst_3131_ = lean_ctor_get(v_____x_3130_, 0);
lean_inc(v_fst_3131_);
v_snd_3132_ = lean_ctor_get(v_____x_3130_, 1);
lean_inc(v_snd_3132_);
lean_dec_ref(v_____x_3130_);
v___x_3133_ = lean_apply_2(v_f_3129_, v_fst_3131_, v_snd_3132_);
return v___x_3133_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg___lam__1(lean_object* v_toPure_3134_, lean_object* v_toBind_3135_, lean_object* v___f_3136_, lean_object* v_____do__lift_3137_){
_start:
{
if (lean_obj_tag(v_____do__lift_3137_) == 0)
{
lean_object* v_a_3138_; lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3147_; 
lean_dec(v___f_3136_);
lean_dec(v_toBind_3135_);
v_a_3138_ = lean_ctor_get(v_____do__lift_3137_, 0);
v_a_3139_ = lean_ctor_get(v_____do__lift_3137_, 1);
v_isSharedCheck_3147_ = !lean_is_exclusive(v_____do__lift_3137_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3141_ = v_____do__lift_3137_;
v_isShared_3142_ = v_isSharedCheck_3147_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_inc(v_a_3138_);
lean_dec(v_____do__lift_3137_);
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
v_reuseFailAlloc_3146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3138_);
lean_ctor_set(v_reuseFailAlloc_3146_, 1, v_a_3139_);
v___x_3144_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3143_;
}
v_reusejp_3143_:
{
lean_object* v___x_3145_; 
v___x_3145_ = lean_apply_2(v_toPure_3134_, lean_box(0), v___x_3144_);
return v___x_3145_;
}
}
}
else
{
lean_object* v_a_3148_; lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3161_; 
v_a_3148_ = lean_ctor_get(v_____do__lift_3137_, 0);
v_a_3149_ = lean_ctor_get(v_____do__lift_3137_, 1);
v_isSharedCheck_3161_ = !lean_is_exclusive(v_____do__lift_3137_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3151_ = v_____do__lift_3137_;
v_isShared_3152_ = v_isSharedCheck_3161_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_inc(v_a_3148_);
lean_dec(v_____do__lift_3137_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3161_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3157_; 
v___x_3153_ = lean_array_get_size(v_a_3149_);
lean_inc(v_a_3148_);
v___x_3154_ = l_Array_extract___redArg(v_a_3149_, v_a_3148_, v___x_3153_);
v___x_3155_ = l_Array_shrink___redArg(v_a_3149_, v_a_3148_);
lean_dec(v_a_3148_);
if (v_isShared_3152_ == 0)
{
lean_ctor_set_tag(v___x_3151_, 0);
lean_ctor_set(v___x_3151_, 1, v___x_3155_);
lean_ctor_set(v___x_3151_, 0, v___x_3154_);
v___x_3157_ = v___x_3151_;
goto v_reusejp_3156_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v___x_3154_);
lean_ctor_set(v_reuseFailAlloc_3160_, 1, v___x_3155_);
v___x_3157_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3156_;
}
v_reusejp_3156_:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___x_3158_ = lean_apply_2(v_toPure_3134_, lean_box(0), v___x_3157_);
v___x_3159_ = lean_apply_4(v_toBind_3135_, lean_box(0), lean_box(0), v___x_3158_, v___f_3136_);
return v___x_3159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog___redArg(lean_object* v_inst_3162_, lean_object* v_f_3163_, lean_object* v_self_3164_, lean_object* v___y_3165_){
_start:
{
lean_object* v_toApplicative_3166_; lean_object* v_toBind_3167_; lean_object* v_toPure_3168_; lean_object* v___f_3169_; lean_object* v___f_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v_toApplicative_3166_ = lean_ctor_get(v_inst_3162_, 0);
lean_inc_ref(v_toApplicative_3166_);
v_toBind_3167_ = lean_ctor_get(v_inst_3162_, 1);
lean_inc_n(v_toBind_3167_, 2);
lean_dec_ref(v_inst_3162_);
v_toPure_3168_ = lean_ctor_get(v_toApplicative_3166_, 1);
lean_inc(v_toPure_3168_);
lean_dec_ref(v_toApplicative_3166_);
v___f_3169_ = lean_alloc_closure((void*)(l_Lake_ELogT_catchLog___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3169_, 0, v_f_3163_);
v___f_3170_ = lean_alloc_closure((void*)(l_Lake_ELogT_catchLog___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3170_, 0, v_toPure_3168_);
lean_closure_set(v___f_3170_, 1, v_toBind_3167_);
lean_closure_set(v___f_3170_, 2, v___f_3169_);
v___x_3171_ = lean_apply_1(v_self_3164_, v___y_3165_);
v___x_3172_ = lean_apply_4(v_toBind_3167_, lean_box(0), lean_box(0), v___x_3171_, v___f_3170_);
return v___x_3172_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_catchLog(lean_object* v_m_3173_, lean_object* v_00_u03b1_3174_, lean_object* v_inst_3175_, lean_object* v_f_3176_, lean_object* v_self_3177_, lean_object* v___y_3178_){
_start:
{
lean_object* v_toApplicative_3179_; lean_object* v_toBind_3180_; lean_object* v_toPure_3181_; lean_object* v___f_3182_; lean_object* v___f_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; 
v_toApplicative_3179_ = lean_ctor_get(v_inst_3175_, 0);
lean_inc_ref(v_toApplicative_3179_);
v_toBind_3180_ = lean_ctor_get(v_inst_3175_, 1);
lean_inc_n(v_toBind_3180_, 2);
lean_dec_ref(v_inst_3175_);
v_toPure_3181_ = lean_ctor_get(v_toApplicative_3179_, 1);
lean_inc(v_toPure_3181_);
lean_dec_ref(v_toApplicative_3179_);
v___f_3182_ = lean_alloc_closure((void*)(l_Lake_ELogT_catchLog___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3182_, 0, v_f_3176_);
v___f_3183_ = lean_alloc_closure((void*)(l_Lake_ELogT_catchLog___redArg___lam__1), 4, 3);
lean_closure_set(v___f_3183_, 0, v_toPure_3181_);
lean_closure_set(v___f_3183_, 1, v_toBind_3180_);
lean_closure_set(v___f_3183_, 2, v___f_3182_);
v___x_3184_ = lean_apply_1(v_self_3177_, v___y_3178_);
v___x_3185_ = lean_apply_4(v_toBind_3180_, lean_box(0), lean_box(0), v___x_3184_, v___f_3183_);
return v___x_3185_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__1(lean_object* v_toPure_3186_, lean_object* v_a_3187_, lean_object* v_____r_3188_){
_start:
{
lean_object* v___x_3189_; 
v___x_3189_ = lean_apply_2(v_toPure_3186_, lean_box(0), v_a_3187_);
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__0(lean_object* v_inst_3190_, lean_object* v_a_3191_, lean_object* v_____r_3192_){
_start:
{
lean_object* v_throw_3193_; lean_object* v___x_3194_; 
v_throw_3193_ = lean_ctor_get(v_inst_3190_, 0);
lean_inc(v_throw_3193_);
lean_dec_ref(v_inst_3190_);
v___x_3194_ = lean_apply_2(v_throw_3193_, lean_box(0), v_a_3191_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__2(lean_object* v_toPure_3195_, lean_object* v_set_3196_, lean_object* v_toBind_3197_, lean_object* v_inst_3198_, lean_object* v_____do__lift_3199_){
_start:
{
if (lean_obj_tag(v_____do__lift_3199_) == 0)
{
lean_object* v_a_3200_; lean_object* v_a_3201_; lean_object* v___f_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
lean_dec_ref(v_inst_3198_);
v_a_3200_ = lean_ctor_get(v_____do__lift_3199_, 0);
lean_inc(v_a_3200_);
v_a_3201_ = lean_ctor_get(v_____do__lift_3199_, 1);
lean_inc(v_a_3201_);
lean_dec_ref_known(v_____do__lift_3199_, 2);
v___f_3202_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3202_, 0, v_toPure_3195_);
lean_closure_set(v___f_3202_, 1, v_a_3200_);
v___x_3203_ = lean_apply_1(v_set_3196_, v_a_3201_);
v___x_3204_ = lean_apply_4(v_toBind_3197_, lean_box(0), lean_box(0), v___x_3203_, v___f_3202_);
return v___x_3204_;
}
else
{
lean_object* v_a_3205_; lean_object* v_a_3206_; lean_object* v___f_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
lean_dec(v_toPure_3195_);
v_a_3205_ = lean_ctor_get(v_____do__lift_3199_, 0);
lean_inc(v_a_3205_);
v_a_3206_ = lean_ctor_get(v_____do__lift_3199_, 1);
lean_inc(v_a_3206_);
lean_dec_ref_known(v_____do__lift_3199_, 2);
v___f_3207_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3207_, 0, v_inst_3198_);
lean_closure_set(v___f_3207_, 1, v_a_3205_);
v___x_3208_ = lean_apply_1(v_set_3196_, v_a_3206_);
v___x_3209_ = lean_apply_4(v_toBind_3197_, lean_box(0), lean_box(0), v___x_3208_, v___f_3207_);
return v___x_3209_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg___lam__3(lean_object* v_self_3210_, lean_object* v_inst_3211_, lean_object* v_toBind_3212_, lean_object* v___f_3213_, lean_object* v_____do__lift_3214_){
_start:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3215_ = lean_apply_1(v_self_3210_, v_____do__lift_3214_);
v___x_3216_ = lean_apply_2(v_inst_3211_, lean_box(0), v___x_3215_);
v___x_3217_ = lean_apply_4(v_toBind_3212_, lean_box(0), lean_box(0), v___x_3216_, v___f_3213_);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun___redArg(lean_object* v_inst_3218_, lean_object* v_inst_3219_, lean_object* v_inst_3220_, lean_object* v_inst_3221_, lean_object* v_self_3222_){
_start:
{
lean_object* v_toApplicative_3223_; lean_object* v_toBind_3224_; lean_object* v_set_3225_; lean_object* v_modifyGet_3226_; lean_object* v_toPure_3227_; lean_object* v___f_3228_; lean_object* v___x_3229_; lean_object* v___f_3230_; lean_object* v___f_3231_; lean_object* v___x_3232_; 
v_toApplicative_3223_ = lean_ctor_get(v_inst_3218_, 0);
lean_inc_ref(v_toApplicative_3223_);
v_toBind_3224_ = lean_ctor_get(v_inst_3218_, 1);
lean_inc_n(v_toBind_3224_, 3);
lean_dec_ref(v_inst_3218_);
v_set_3225_ = lean_ctor_get(v_inst_3219_, 1);
lean_inc(v_set_3225_);
v_modifyGet_3226_ = lean_ctor_get(v_inst_3219_, 2);
lean_inc(v_modifyGet_3226_);
lean_dec_ref(v_inst_3219_);
v_toPure_3227_ = lean_ctor_get(v_toApplicative_3223_, 1);
lean_inc(v_toPure_3227_);
lean_dec_ref(v_toApplicative_3223_);
v___f_3228_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_3229_ = lean_apply_2(v_modifyGet_3226_, lean_box(0), v___f_3228_);
v___f_3230_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3230_, 0, v_toPure_3227_);
lean_closure_set(v___f_3230_, 1, v_set_3225_);
lean_closure_set(v___f_3230_, 2, v_toBind_3224_);
lean_closure_set(v___f_3230_, 3, v_inst_3220_);
v___f_3231_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3231_, 0, v_self_3222_);
lean_closure_set(v___f_3231_, 1, v_inst_3221_);
lean_closure_set(v___f_3231_, 2, v_toBind_3224_);
lean_closure_set(v___f_3231_, 3, v___f_3230_);
v___x_3232_ = lean_apply_4(v_toBind_3224_, lean_box(0), lean_box(0), v___x_3229_, v___f_3231_);
return v___x_3232_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_takeAndRun(lean_object* v_n_3233_, lean_object* v_m_3234_, lean_object* v_00_u03b1_3235_, lean_object* v_inst_3236_, lean_object* v_inst_3237_, lean_object* v_inst_3238_, lean_object* v_inst_3239_, lean_object* v_self_3240_){
_start:
{
lean_object* v_toApplicative_3241_; lean_object* v_toBind_3242_; lean_object* v_set_3243_; lean_object* v_modifyGet_3244_; lean_object* v_toPure_3245_; lean_object* v___f_3246_; lean_object* v___x_3247_; lean_object* v___f_3248_; lean_object* v___f_3249_; lean_object* v___x_3250_; 
v_toApplicative_3241_ = lean_ctor_get(v_inst_3236_, 0);
lean_inc_ref(v_toApplicative_3241_);
v_toBind_3242_ = lean_ctor_get(v_inst_3236_, 1);
lean_inc_n(v_toBind_3242_, 3);
lean_dec_ref(v_inst_3236_);
v_set_3243_ = lean_ctor_get(v_inst_3237_, 1);
lean_inc(v_set_3243_);
v_modifyGet_3244_ = lean_ctor_get(v_inst_3237_, 2);
lean_inc(v_modifyGet_3244_);
lean_dec_ref(v_inst_3237_);
v_toPure_3245_ = lean_ctor_get(v_toApplicative_3241_, 1);
lean_inc(v_toPure_3245_);
lean_dec_ref(v_toApplicative_3241_);
v___f_3246_ = ((lean_object*)(l_Lake_takeLog___redArg___closed__0));
v___x_3247_ = lean_apply_2(v_modifyGet_3244_, lean_box(0), v___f_3246_);
v___f_3248_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__2), 5, 4);
lean_closure_set(v___f_3248_, 0, v_toPure_3245_);
lean_closure_set(v___f_3248_, 1, v_set_3243_);
lean_closure_set(v___f_3248_, 2, v_toBind_3242_);
lean_closure_set(v___f_3248_, 3, v_inst_3238_);
v___f_3249_ = lean_alloc_closure((void*)(l_Lake_ELogT_takeAndRun___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3249_, 0, v_self_3240_);
lean_closure_set(v___f_3249_, 1, v_inst_3239_);
lean_closure_set(v___f_3249_, 2, v_toBind_3242_);
lean_closure_set(v___f_3249_, 3, v___f_3248_);
v___x_3250_ = lean_apply_4(v_toBind_3242_, lean_box(0), lean_box(0), v___x_3247_, v___f_3249_);
return v___x_3250_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__2(lean_object* v_toPure_3251_, lean_object* v_x_3252_){
_start:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3253_ = lean_box(0);
v___x_3254_ = lean_apply_2(v_toPure_3251_, lean_box(0), v___x_3253_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__0(lean_object* v_a_3255_, lean_object* v_toPure_3256_, lean_object* v_x_3257_){
_start:
{
lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3258_, 0, v_a_3255_);
v___x_3259_ = lean_apply_2(v_toPure_3256_, lean_box(0), v___x_3258_);
return v___x_3259_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__1(lean_object* v_toPure_3260_, lean_object* v___x_3261_, lean_object* v_toSeqRight_3262_, lean_object* v_inst_3263_, lean_object* v___f_3264_, lean_object* v___f_3265_, lean_object* v___f_3266_, lean_object* v_____do__lift_3267_){
_start:
{
if (lean_obj_tag(v_____do__lift_3267_) == 0)
{
lean_object* v_a_3268_; lean_object* v_a_3269_; lean_object* v___f_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; uint8_t v___x_3273_; 
lean_dec(v___f_3266_);
lean_dec(v___f_3265_);
v_a_3268_ = lean_ctor_get(v_____do__lift_3267_, 0);
lean_inc(v_a_3268_);
v_a_3269_ = lean_ctor_get(v_____do__lift_3267_, 1);
lean_inc(v_a_3269_);
lean_dec_ref_known(v_____do__lift_3267_, 2);
lean_inc(v_toPure_3260_);
v___f_3270_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3270_, 0, v_a_3268_);
lean_closure_set(v___f_3270_, 1, v_toPure_3260_);
v___x_3271_ = lean_array_get_size(v_a_3269_);
v___x_3272_ = lean_box(0);
v___x_3273_ = lean_nat_dec_lt(v___x_3261_, v___x_3271_);
if (v___x_3273_ == 0)
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
lean_dec(v_a_3269_);
lean_dec(v___f_3264_);
lean_dec_ref(v_inst_3263_);
v___x_3274_ = lean_apply_2(v_toPure_3260_, lean_box(0), v___x_3272_);
v___x_3275_ = lean_apply_4(v_toSeqRight_3262_, lean_box(0), lean_box(0), v___x_3274_, v___f_3270_);
return v___x_3275_;
}
else
{
size_t v___x_3276_; size_t v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; 
lean_dec(v_toPure_3260_);
v___x_3276_ = ((size_t)0ULL);
v___x_3277_ = lean_usize_of_nat(v___x_3271_);
v___x_3278_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3263_, v___f_3264_, v_a_3269_, v___x_3276_, v___x_3277_, v___x_3272_);
v___x_3279_ = lean_apply_4(v_toSeqRight_3262_, lean_box(0), lean_box(0), v___x_3278_, v___f_3270_);
return v___x_3279_;
}
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; uint8_t v___x_3283_; 
lean_dec(v___f_3264_);
v_a_3280_ = lean_ctor_get(v_____do__lift_3267_, 1);
lean_inc(v_a_3280_);
lean_dec_ref_known(v_____do__lift_3267_, 2);
v___x_3281_ = lean_array_get_size(v_a_3280_);
v___x_3282_ = lean_box(0);
v___x_3283_ = lean_nat_dec_lt(v___x_3261_, v___x_3281_);
if (v___x_3283_ == 0)
{
lean_object* v___x_3284_; lean_object* v___x_3285_; 
lean_dec(v_a_3280_);
lean_dec(v___f_3266_);
lean_dec_ref(v_inst_3263_);
v___x_3284_ = lean_apply_2(v_toPure_3260_, lean_box(0), v___x_3282_);
v___x_3285_ = lean_apply_4(v_toSeqRight_3262_, lean_box(0), lean_box(0), v___x_3284_, v___f_3265_);
return v___x_3285_;
}
else
{
size_t v___x_3286_; size_t v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
lean_dec(v_toPure_3260_);
v___x_3286_ = ((size_t)0ULL);
v___x_3287_ = lean_usize_of_nat(v___x_3281_);
v___x_3288_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3263_, v___f_3266_, v_a_3280_, v___x_3286_, v___x_3287_, v___x_3282_);
v___x_3289_ = lean_apply_4(v_toSeqRight_3262_, lean_box(0), lean_box(0), v___x_3288_, v___f_3265_);
return v___x_3289_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg___lam__1___boxed(lean_object* v_toPure_3290_, lean_object* v___x_3291_, lean_object* v_toSeqRight_3292_, lean_object* v_inst_3293_, lean_object* v___f_3294_, lean_object* v___f_3295_, lean_object* v___f_3296_, lean_object* v_____do__lift_3297_){
_start:
{
lean_object* v_res_3298_; 
v_res_3298_ = l_Lake_ELogT_replayLog_x3f___redArg___lam__1(v_toPure_3290_, v___x_3291_, v_toSeqRight_3292_, v_inst_3293_, v___f_3294_, v___f_3295_, v___f_3296_, v_____do__lift_3297_);
lean_dec(v___x_3291_);
return v_res_3298_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f___redArg(lean_object* v_inst_3299_, lean_object* v_logger_3300_, lean_object* v_inst_3301_, lean_object* v_self_3302_){
_start:
{
lean_object* v_toApplicative_3303_; lean_object* v_toBind_3304_; lean_object* v_toPure_3305_; lean_object* v_toSeqRight_3306_; lean_object* v___f_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___f_3312_; lean_object* v___f_3313_; lean_object* v___x_3314_; 
v_toApplicative_3303_ = lean_ctor_get(v_inst_3299_, 0);
v_toBind_3304_ = lean_ctor_get(v_inst_3299_, 1);
lean_inc(v_toBind_3304_);
v_toPure_3305_ = lean_ctor_get(v_toApplicative_3303_, 1);
lean_inc_n(v_toPure_3305_, 2);
v_toSeqRight_3306_ = lean_ctor_get(v_toApplicative_3303_, 4);
lean_inc(v_toSeqRight_3306_);
v___f_3307_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3307_, 0, v_logger_3300_);
v___x_3308_ = lean_unsigned_to_nat(0u);
v___x_3309_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3310_ = lean_apply_1(v_self_3302_, v___x_3309_);
v___x_3311_ = lean_apply_2(v_inst_3301_, lean_box(0), v___x_3310_);
v___f_3312_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3312_, 0, v_toPure_3305_);
lean_inc_ref(v___f_3307_);
v___f_3313_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog_x3f___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_3313_, 0, v_toPure_3305_);
lean_closure_set(v___f_3313_, 1, v___x_3308_);
lean_closure_set(v___f_3313_, 2, v_toSeqRight_3306_);
lean_closure_set(v___f_3313_, 3, v_inst_3299_);
lean_closure_set(v___f_3313_, 4, v___f_3307_);
lean_closure_set(v___f_3313_, 5, v___f_3312_);
lean_closure_set(v___f_3313_, 6, v___f_3307_);
v___x_3314_ = lean_apply_4(v_toBind_3304_, lean_box(0), lean_box(0), v___x_3311_, v___f_3313_);
return v___x_3314_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog_x3f(lean_object* v_n_3315_, lean_object* v_m_3316_, lean_object* v_00_u03b1_3317_, lean_object* v_inst_3318_, lean_object* v_logger_3319_, lean_object* v_inst_3320_, lean_object* v_self_3321_){
_start:
{
lean_object* v_toApplicative_3322_; lean_object* v_toBind_3323_; lean_object* v_toPure_3324_; lean_object* v_toSeqRight_3325_; lean_object* v___f_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___f_3331_; lean_object* v___f_3332_; lean_object* v___x_3333_; 
v_toApplicative_3322_ = lean_ctor_get(v_inst_3318_, 0);
v_toBind_3323_ = lean_ctor_get(v_inst_3318_, 1);
lean_inc(v_toBind_3323_);
v_toPure_3324_ = lean_ctor_get(v_toApplicative_3322_, 1);
lean_inc_n(v_toPure_3324_, 2);
v_toSeqRight_3325_ = lean_ctor_get(v_toApplicative_3322_, 4);
lean_inc(v_toSeqRight_3325_);
v___f_3326_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3326_, 0, v_logger_3319_);
v___x_3327_ = lean_unsigned_to_nat(0u);
v___x_3328_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3329_ = lean_apply_1(v_self_3321_, v___x_3328_);
v___x_3330_ = lean_apply_2(v_inst_3320_, lean_box(0), v___x_3329_);
v___f_3331_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog_x3f___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3331_, 0, v_toPure_3324_);
lean_inc_ref(v___f_3326_);
v___f_3332_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog_x3f___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_3332_, 0, v_toPure_3324_);
lean_closure_set(v___f_3332_, 1, v___x_3327_);
lean_closure_set(v___f_3332_, 2, v_toSeqRight_3325_);
lean_closure_set(v___f_3332_, 3, v_inst_3318_);
lean_closure_set(v___f_3332_, 4, v___f_3326_);
lean_closure_set(v___f_3332_, 5, v___f_3331_);
lean_closure_set(v___f_3332_, 6, v___f_3326_);
v___x_3333_ = lean_apply_4(v_toBind_3323_, lean_box(0), lean_box(0), v___x_3330_, v___f_3332_);
return v___x_3333_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__3(lean_object* v_toPure_3334_, lean_object* v_a_3335_, lean_object* v_x_3336_){
_start:
{
lean_object* v___x_3337_; 
v___x_3337_ = lean_apply_2(v_toPure_3334_, lean_box(0), v_a_3335_);
return v___x_3337_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__0(lean_object* v_toApplicative_3338_, lean_object* v_toPure_3339_, lean_object* v___x_3340_, lean_object* v_toSeqRight_3341_, lean_object* v_inst_3342_, lean_object* v___f_3343_, lean_object* v___f_3344_, lean_object* v___f_3345_, lean_object* v_____do__lift_3346_){
_start:
{
if (lean_obj_tag(v_____do__lift_3346_) == 0)
{
lean_object* v_a_3347_; lean_object* v_a_3348_; lean_object* v_toPure_3349_; lean_object* v___f_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; uint8_t v___x_3353_; 
lean_dec(v___f_3345_);
lean_dec(v___f_3344_);
v_a_3347_ = lean_ctor_get(v_____do__lift_3346_, 0);
lean_inc(v_a_3347_);
v_a_3348_ = lean_ctor_get(v_____do__lift_3346_, 1);
lean_inc(v_a_3348_);
lean_dec_ref_known(v_____do__lift_3346_, 2);
v_toPure_3349_ = lean_ctor_get(v_toApplicative_3338_, 1);
lean_inc(v_toPure_3349_);
lean_dec_ref(v_toApplicative_3338_);
v___f_3350_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog___redArg___lam__3), 3, 2);
lean_closure_set(v___f_3350_, 0, v_toPure_3339_);
lean_closure_set(v___f_3350_, 1, v_a_3347_);
v___x_3351_ = lean_array_get_size(v_a_3348_);
v___x_3352_ = lean_box(0);
v___x_3353_ = lean_nat_dec_lt(v___x_3340_, v___x_3351_);
if (v___x_3353_ == 0)
{
lean_object* v___x_3354_; lean_object* v___x_3355_; 
lean_dec(v_a_3348_);
lean_dec(v___f_3343_);
lean_dec_ref(v_inst_3342_);
v___x_3354_ = lean_apply_2(v_toPure_3349_, lean_box(0), v___x_3352_);
v___x_3355_ = lean_apply_4(v_toSeqRight_3341_, lean_box(0), lean_box(0), v___x_3354_, v___f_3350_);
return v___x_3355_;
}
else
{
size_t v___x_3356_; size_t v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; 
lean_dec(v_toPure_3349_);
v___x_3356_ = ((size_t)0ULL);
v___x_3357_ = lean_usize_of_nat(v___x_3351_);
v___x_3358_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3342_, v___f_3343_, v_a_3348_, v___x_3356_, v___x_3357_, v___x_3352_);
v___x_3359_ = lean_apply_4(v_toSeqRight_3341_, lean_box(0), lean_box(0), v___x_3358_, v___f_3350_);
return v___x_3359_;
}
}
else
{
lean_object* v_a_3360_; lean_object* v_toPure_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; uint8_t v___x_3364_; 
lean_dec(v___f_3343_);
lean_dec(v_toPure_3339_);
v_a_3360_ = lean_ctor_get(v_____do__lift_3346_, 1);
lean_inc(v_a_3360_);
lean_dec_ref_known(v_____do__lift_3346_, 2);
v_toPure_3361_ = lean_ctor_get(v_toApplicative_3338_, 1);
lean_inc(v_toPure_3361_);
lean_dec_ref(v_toApplicative_3338_);
v___x_3362_ = lean_array_get_size(v_a_3360_);
v___x_3363_ = lean_box(0);
v___x_3364_ = lean_nat_dec_lt(v___x_3340_, v___x_3362_);
if (v___x_3364_ == 0)
{
lean_object* v___x_3365_; lean_object* v___x_3366_; 
lean_dec(v_a_3360_);
lean_dec(v___f_3345_);
lean_dec_ref(v_inst_3342_);
v___x_3365_ = lean_apply_2(v_toPure_3361_, lean_box(0), v___x_3363_);
v___x_3366_ = lean_apply_4(v_toSeqRight_3341_, lean_box(0), lean_box(0), v___x_3365_, v___f_3344_);
return v___x_3366_;
}
else
{
size_t v___x_3367_; size_t v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; 
lean_dec(v_toPure_3361_);
v___x_3367_ = ((size_t)0ULL);
v___x_3368_ = lean_usize_of_nat(v___x_3362_);
v___x_3369_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3342_, v___f_3345_, v_a_3360_, v___x_3367_, v___x_3368_, v___x_3363_);
v___x_3370_ = lean_apply_4(v_toSeqRight_3341_, lean_box(0), lean_box(0), v___x_3369_, v___f_3344_);
return v___x_3370_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg___lam__0___boxed(lean_object* v_toApplicative_3371_, lean_object* v_toPure_3372_, lean_object* v___x_3373_, lean_object* v_toSeqRight_3374_, lean_object* v_inst_3375_, lean_object* v___f_3376_, lean_object* v___f_3377_, lean_object* v___f_3378_, lean_object* v_____do__lift_3379_){
_start:
{
lean_object* v_res_3380_; 
v_res_3380_ = l_Lake_ELogT_replayLog___redArg___lam__0(v_toApplicative_3371_, v_toPure_3372_, v___x_3373_, v_toSeqRight_3374_, v_inst_3375_, v___f_3376_, v___f_3377_, v___f_3378_, v_____do__lift_3379_);
lean_dec(v___x_3373_);
return v_res_3380_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog___redArg(lean_object* v_inst_3381_, lean_object* v_inst_3382_, lean_object* v_logger_3383_, lean_object* v_inst_3384_, lean_object* v_self_3385_){
_start:
{
lean_object* v_toApplicative_3386_; lean_object* v_toApplicative_3387_; lean_object* v_toBind_3388_; lean_object* v_failure_3389_; lean_object* v_toPure_3390_; lean_object* v_toSeqRight_3391_; lean_object* v___f_3392_; lean_object* v___f_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___f_3398_; lean_object* v___x_3399_; 
v_toApplicative_3386_ = lean_ctor_get(v_inst_3381_, 0);
lean_inc_ref(v_toApplicative_3386_);
v_toApplicative_3387_ = lean_ctor_get(v_inst_3382_, 0);
lean_inc_ref(v_toApplicative_3387_);
v_toBind_3388_ = lean_ctor_get(v_inst_3382_, 1);
lean_inc(v_toBind_3388_);
v_failure_3389_ = lean_ctor_get(v_inst_3381_, 1);
lean_inc(v_failure_3389_);
lean_dec_ref(v_inst_3381_);
v_toPure_3390_ = lean_ctor_get(v_toApplicative_3386_, 1);
lean_inc(v_toPure_3390_);
v_toSeqRight_3391_ = lean_ctor_get(v_toApplicative_3386_, 4);
lean_inc(v_toSeqRight_3391_);
lean_dec_ref(v_toApplicative_3386_);
v___f_3392_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3392_, 0, v_logger_3383_);
v___f_3393_ = lean_alloc_closure((void*)(l_Lake_MonadLog_error___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3393_, 0, v_failure_3389_);
v___x_3394_ = lean_unsigned_to_nat(0u);
v___x_3395_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3396_ = lean_apply_1(v_self_3385_, v___x_3395_);
v___x_3397_ = lean_apply_2(v_inst_3384_, lean_box(0), v___x_3396_);
lean_inc_ref(v___f_3392_);
v___f_3398_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_3398_, 0, v_toApplicative_3387_);
lean_closure_set(v___f_3398_, 1, v_toPure_3390_);
lean_closure_set(v___f_3398_, 2, v___x_3394_);
lean_closure_set(v___f_3398_, 3, v_toSeqRight_3391_);
lean_closure_set(v___f_3398_, 4, v_inst_3382_);
lean_closure_set(v___f_3398_, 5, v___f_3392_);
lean_closure_set(v___f_3398_, 6, v___f_3393_);
lean_closure_set(v___f_3398_, 7, v___f_3392_);
v___x_3399_ = lean_apply_4(v_toBind_3388_, lean_box(0), lean_box(0), v___x_3397_, v___f_3398_);
return v___x_3399_;
}
}
LEAN_EXPORT lean_object* l_Lake_ELogT_replayLog(lean_object* v_n_3400_, lean_object* v_m_3401_, lean_object* v_00_u03b1_3402_, lean_object* v_inst_3403_, lean_object* v_inst_3404_, lean_object* v_logger_3405_, lean_object* v_inst_3406_, lean_object* v_self_3407_){
_start:
{
lean_object* v_toApplicative_3408_; lean_object* v_toApplicative_3409_; lean_object* v_toBind_3410_; lean_object* v_failure_3411_; lean_object* v_toPure_3412_; lean_object* v_toSeqRight_3413_; lean_object* v___f_3414_; lean_object* v___f_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___f_3420_; lean_object* v___x_3421_; 
v_toApplicative_3408_ = lean_ctor_get(v_inst_3403_, 0);
lean_inc_ref(v_toApplicative_3408_);
v_toApplicative_3409_ = lean_ctor_get(v_inst_3404_, 0);
lean_inc_ref(v_toApplicative_3409_);
v_toBind_3410_ = lean_ctor_get(v_inst_3404_, 1);
lean_inc(v_toBind_3410_);
v_failure_3411_ = lean_ctor_get(v_inst_3403_, 1);
lean_inc(v_failure_3411_);
lean_dec_ref(v_inst_3403_);
v_toPure_3412_ = lean_ctor_get(v_toApplicative_3408_, 1);
lean_inc(v_toPure_3412_);
v_toSeqRight_3413_ = lean_ctor_get(v_toApplicative_3408_, 4);
lean_inc(v_toSeqRight_3413_);
lean_dec_ref(v_toApplicative_3408_);
v___f_3414_ = lean_alloc_closure((void*)(l_Lake_Log_replay___redArg___lam__0), 3, 1);
lean_closure_set(v___f_3414_, 0, v_logger_3405_);
v___f_3415_ = lean_alloc_closure((void*)(l_Lake_MonadLog_error___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3415_, 0, v_failure_3411_);
v___x_3416_ = lean_unsigned_to_nat(0u);
v___x_3417_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3418_ = lean_apply_1(v_self_3407_, v___x_3417_);
v___x_3419_ = lean_apply_2(v_inst_3406_, lean_box(0), v___x_3418_);
lean_inc_ref(v___f_3414_);
v___f_3420_ = lean_alloc_closure((void*)(l_Lake_ELogT_replayLog___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_3420_, 0, v_toApplicative_3409_);
lean_closure_set(v___f_3420_, 1, v_toPure_3412_);
lean_closure_set(v___f_3420_, 2, v___x_3416_);
lean_closure_set(v___f_3420_, 3, v_toSeqRight_3413_);
lean_closure_set(v___f_3420_, 4, v_inst_3404_);
lean_closure_set(v___f_3420_, 5, v___f_3414_);
lean_closure_set(v___f_3420_, 6, v___f_3415_);
lean_closure_set(v___f_3420_, 7, v___f_3414_);
v___x_3421_ = lean_apply_4(v_toBind_3410_, lean_box(0), lean_box(0), v___x_3419_, v___f_3420_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___lam__0(lean_object* v_val_3422_, uint8_t v_outLv_3423_, uint8_t v_val_3424_, lean_object* v_inst_3425_, lean_object* v_e_3426_){
_start:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3427_ = lean_box(v_outLv_3423_);
v___x_3428_ = lean_box(v_val_3424_);
v___x_3429_ = lean_alloc_closure((void*)(l_Lake_logToStream___boxed), 5, 4);
lean_closure_set(v___x_3429_, 0, v_e_3426_);
lean_closure_set(v___x_3429_, 1, v_val_3422_);
lean_closure_set(v___x_3429_, 2, v___x_3427_);
lean_closure_set(v___x_3429_, 3, v___x_3428_);
v___x_3430_ = lean_apply_2(v_inst_3425_, lean_box(0), v___x_3429_);
return v___x_3430_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___lam__0___boxed(lean_object* v_val_3431_, lean_object* v_outLv_3432_, lean_object* v_val_3433_, lean_object* v_inst_3434_, lean_object* v_e_3435_){
_start:
{
uint8_t v_outLv_boxed_3436_; uint8_t v_val_45__boxed_3437_; lean_object* v_res_3438_; 
v_outLv_boxed_3436_ = lean_unbox(v_outLv_3432_);
v_val_45__boxed_3437_ = lean_unbox(v_val_3433_);
v_res_3438_ = l_Lake_LogConfig_getLogger___redArg___lam__0(v_val_3431_, v_outLv_boxed_3436_, v_val_45__boxed_3437_, v_inst_3434_, v_e_3435_);
return v_res_3438_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg(lean_object* v_inst_3439_, lean_object* v_self_3440_){
_start:
{
uint8_t v_outLv_3442_; uint8_t v_ansiMode_3443_; lean_object* v_out_3444_; lean_object* v___x_3445_; uint8_t v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___f_3449_; 
v_outLv_3442_ = lean_ctor_get_uint8(v_self_3440_, sizeof(void*)*1 + 1);
v_ansiMode_3443_ = lean_ctor_get_uint8(v_self_3440_, sizeof(void*)*1 + 2);
v_out_3444_ = lean_ctor_get(v_self_3440_, 0);
v___x_3445_ = l_Lake_OutStream_get(v_out_3444_);
lean_inc_ref(v___x_3445_);
v___x_3446_ = l_Lake_AnsiMode_isEnabled(v___x_3445_, v_ansiMode_3443_);
v___x_3447_ = lean_box(v_outLv_3442_);
v___x_3448_ = lean_box(v___x_3446_);
v___f_3449_ = lean_alloc_closure((void*)(l_Lake_LogConfig_getLogger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_3449_, 0, v___x_3445_);
lean_closure_set(v___f_3449_, 1, v___x_3447_);
lean_closure_set(v___f_3449_, 2, v___x_3448_);
lean_closure_set(v___f_3449_, 3, v_inst_3439_);
return v___f_3449_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___redArg___boxed(lean_object* v_inst_3450_, lean_object* v_self_3451_, lean_object* v___y_3452_){
_start:
{
lean_object* v_res_3453_; 
v_res_3453_ = l_Lake_LogConfig_getLogger___redArg(v_inst_3450_, v_self_3451_);
lean_dec_ref(v_self_3451_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger(lean_object* v_m_3454_, lean_object* v_inst_3455_, lean_object* v_self_3456_){
_start:
{
uint8_t v_outLv_3458_; uint8_t v_ansiMode_3459_; lean_object* v_out_3460_; lean_object* v___x_3461_; uint8_t v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___f_3465_; 
v_outLv_3458_ = lean_ctor_get_uint8(v_self_3456_, sizeof(void*)*1 + 1);
v_ansiMode_3459_ = lean_ctor_get_uint8(v_self_3456_, sizeof(void*)*1 + 2);
v_out_3460_ = lean_ctor_get(v_self_3456_, 0);
v___x_3461_ = l_Lake_OutStream_get(v_out_3460_);
lean_inc_ref(v___x_3461_);
v___x_3462_ = l_Lake_AnsiMode_isEnabled(v___x_3461_, v_ansiMode_3459_);
v___x_3463_ = lean_box(v_outLv_3458_);
v___x_3464_ = lean_box(v___x_3462_);
v___f_3465_ = lean_alloc_closure((void*)(l_Lake_LogConfig_getLogger___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_3465_, 0, v___x_3461_);
lean_closure_set(v___f_3465_, 1, v___x_3463_);
lean_closure_set(v___f_3465_, 2, v___x_3464_);
lean_closure_set(v___f_3465_, 3, v_inst_3455_);
return v___f_3465_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogConfig_getLogger___boxed(lean_object* v_m_3466_, lean_object* v_inst_3467_, lean_object* v_self_3468_, lean_object* v___y_3469_){
_start:
{
lean_object* v_res_3470_; 
v_res_3470_ = l_Lake_LogConfig_getLogger(v_m_3466_, v_inst_3467_, v_self_3468_);
lean_dec_ref(v_self_3468_);
return v_res_3470_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_instMonadLiftIO___lam__0(lean_object* v_00_u03b1_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_){
_start:
{
lean_object* v___x_3475_; 
v___x_3475_ = lean_apply_1(v___y_3472_, lean_box(0));
if (lean_obj_tag(v___x_3475_) == 0)
{
lean_object* v_a_3476_; lean_object* v___x_3477_; 
v_a_3476_ = lean_ctor_get(v___x_3475_, 0);
lean_inc(v_a_3476_);
lean_dec_ref_known(v___x_3475_, 1);
v___x_3477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3477_, 0, v_a_3476_);
lean_ctor_set(v___x_3477_, 1, v___y_3473_);
return v___x_3477_;
}
else
{
lean_object* v_a_3478_; lean_object* v___x_3479_; uint8_t v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; 
v_a_3478_ = lean_ctor_get(v___x_3475_, 0);
lean_inc(v_a_3478_);
lean_dec_ref_known(v___x_3475_, 1);
v___x_3479_ = lean_io_error_to_string(v_a_3478_);
v___x_3480_ = 3;
v___x_3481_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3481_, 0, v___x_3479_);
lean_ctor_set_uint8(v___x_3481_, sizeof(void*)*1, v___x_3480_);
v___x_3482_ = lean_array_get_size(v___y_3473_);
v___x_3483_ = lean_array_push(v___y_3473_, v___x_3481_);
v___x_3484_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3484_, 0, v___x_3482_);
lean_ctor_set(v___x_3484_, 1, v___x_3483_);
return v___x_3484_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_instMonadLiftIO___lam__0___boxed(lean_object* v_00_u03b1_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_){
_start:
{
lean_object* v_res_3489_; 
v_res_3489_ = l_Lake_LogIO_instMonadLiftIO___lam__0(v_00_u03b1_3485_, v___y_3486_, v___y_3487_);
return v_res_3489_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___lam__0(lean_object* v_val_3492_, uint8_t v___y_3493_, uint8_t v_val_3494_, lean_object* v_x_3495_, lean_object* v___y_3496_){
_start:
{
lean_object* v___x_3498_; 
v___x_3498_ = l_Lake_logToStream(v___y_3496_, v_val_3492_, v___y_3493_, v_val_3494_);
return v___x_3498_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___lam__0___boxed(lean_object* v_val_3499_, lean_object* v___y_3500_, lean_object* v_val_3501_, lean_object* v_x_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_){
_start:
{
uint8_t v___y_681__boxed_3505_; uint8_t v_val_682__boxed_3506_; lean_object* v_res_3507_; 
v___y_681__boxed_3505_ = lean_unbox(v___y_3500_);
v_val_682__boxed_3506_ = lean_unbox(v_val_3501_);
v_res_3507_ = l_Lake_LogIO_toBaseIO___redArg___lam__0(v_val_3499_, v___y_681__boxed_3505_, v_val_682__boxed_3506_, v_x_3502_, v___y_3503_);
lean_dec_ref(v___y_3503_);
return v_res_3507_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg(lean_object* v_self_3508_, lean_object* v_cfg_3509_){
_start:
{
uint8_t v___y_3512_; lean_object* v___y_3513_; lean_object* v___x_3515_; lean_object* v___y_3517_; uint8_t v___y_3518_; uint8_t v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; uint8_t v___y_3522_; uint8_t v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3539_; lean_object* v___y_3540_; uint8_t v___y_3541_; lean_object* v___y_3544_; uint8_t v___y_3545_; uint8_t v___y_3546_; lean_object* v___y_3547_; uint8_t v___y_3548_; lean_object* v___y_3549_; uint8_t v___y_3550_; lean_object* v___y_3552_; lean_object* v___y_3553_; uint8_t v___y_3554_; lean_object* v___x_3563_; lean_object* v___x_3564_; 
v___x_3515_ = l_instMonadBaseIO;
v___x_3563_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3564_ = lean_apply_2(v_self_3508_, v___x_3563_, lean_box(0));
if (lean_obj_tag(v___x_3564_) == 0)
{
lean_object* v_a_3565_; lean_object* v_a_3566_; lean_object* v___x_3567_; uint8_t v___x_3568_; 
v_a_3565_ = lean_ctor_get(v___x_3564_, 0);
lean_inc(v_a_3565_);
v_a_3566_ = lean_ctor_get(v___x_3564_, 1);
lean_inc(v_a_3566_);
lean_dec_ref_known(v___x_3564_, 2);
v___x_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3567_, 0, v_a_3565_);
v___x_3568_ = 0;
v___y_3552_ = v_a_3566_;
v___y_3553_ = v___x_3567_;
v___y_3554_ = v___x_3568_;
goto v___jp_3551_;
}
else
{
lean_object* v_a_3569_; lean_object* v___x_3570_; uint8_t v___x_3571_; 
v_a_3569_ = lean_ctor_get(v___x_3564_, 1);
lean_inc(v_a_3569_);
lean_dec_ref_known(v___x_3564_, 2);
v___x_3570_ = lean_box(0);
v___x_3571_ = 1;
v___y_3552_ = v_a_3569_;
v___y_3553_ = v___x_3570_;
v___y_3554_ = v___x_3571_;
goto v___jp_3551_;
}
v___jp_3511_:
{
if (v___y_3512_ == 0)
{
return v___y_3513_;
}
else
{
lean_object* v___x_3514_; 
lean_dec(v___y_3513_);
v___x_3514_ = lean_box(0);
return v___x_3514_;
}
}
v___jp_3516_:
{
lean_object* v___x_3523_; uint8_t v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; uint8_t v___x_3527_; 
v___x_3523_ = l_Lake_OutStream_get(v___y_3521_);
lean_inc_ref(v___x_3523_);
v___x_3524_ = l_Lake_AnsiMode_isEnabled(v___x_3523_, v___y_3518_);
v___x_3525_ = lean_unsigned_to_nat(0u);
v___x_3526_ = lean_array_get_size(v___y_3517_);
v___x_3527_ = lean_nat_dec_lt(v___x_3525_, v___x_3526_);
if (v___x_3527_ == 0)
{
lean_dec_ref(v___x_3523_);
lean_dec_ref(v___y_3517_);
v___y_3512_ = v___y_3519_;
v___y_3513_ = v___y_3520_;
goto v___jp_3511_;
}
else
{
lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___f_3530_; lean_object* v___x_3531_; size_t v___x_3532_; size_t v___x_3533_; lean_object* v___x_482__overap_3534_; lean_object* v___x_3535_; 
v___x_3528_ = lean_box(v___y_3522_);
v___x_3529_ = lean_box(v___x_3524_);
v___f_3530_ = lean_alloc_closure((void*)(l_Lake_LogIO_toBaseIO___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_3530_, 0, v___x_3523_);
lean_closure_set(v___f_3530_, 1, v___x_3528_);
lean_closure_set(v___f_3530_, 2, v___x_3529_);
v___x_3531_ = lean_box(0);
v___x_3532_ = ((size_t)0ULL);
v___x_3533_ = lean_usize_of_nat(v___x_3526_);
v___x_482__overap_3534_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3515_, v___f_3530_, v___y_3517_, v___x_3532_, v___x_3533_, v___x_3531_);
v___x_3535_ = lean_apply_1(v___x_482__overap_3534_, lean_box(0));
v___y_3512_ = v___y_3519_;
v___y_3513_ = v___y_3520_;
goto v___jp_3511_;
}
}
v___jp_3536_:
{
uint8_t v___x_3542_; 
v___x_3542_ = 0;
v___y_3517_ = v___y_3538_;
v___y_3518_ = v___y_3537_;
v___y_3519_ = v___y_3541_;
v___y_3520_ = v___y_3539_;
v___y_3521_ = v___y_3540_;
v___y_3522_ = v___x_3542_;
goto v___jp_3516_;
}
v___jp_3543_:
{
if (v___y_3546_ == 0)
{
if (v___y_3550_ == 0)
{
v___y_3517_ = v___y_3544_;
v___y_3518_ = v___y_3545_;
v___y_3519_ = v___y_3550_;
v___y_3520_ = v___y_3547_;
v___y_3521_ = v___y_3549_;
v___y_3522_ = v___y_3548_;
goto v___jp_3516_;
}
else
{
v___y_3537_ = v___y_3545_;
v___y_3538_ = v___y_3544_;
v___y_3539_ = v___y_3547_;
v___y_3540_ = v___y_3549_;
v___y_3541_ = v___y_3550_;
goto v___jp_3536_;
}
}
else
{
v___y_3537_ = v___y_3545_;
v___y_3538_ = v___y_3544_;
v___y_3539_ = v___y_3547_;
v___y_3540_ = v___y_3549_;
v___y_3541_ = v___y_3546_;
goto v___jp_3536_;
}
}
v___jp_3551_:
{
uint8_t v_failLv_3555_; uint8_t v_outLv_3556_; uint8_t v_ansiMode_3557_; lean_object* v_out_3558_; uint8_t v___x_3559_; uint8_t v___x_3560_; 
v_failLv_3555_ = lean_ctor_get_uint8(v_cfg_3509_, sizeof(void*)*1);
v_outLv_3556_ = lean_ctor_get_uint8(v_cfg_3509_, sizeof(void*)*1 + 1);
v_ansiMode_3557_ = lean_ctor_get_uint8(v_cfg_3509_, sizeof(void*)*1 + 2);
v_out_3558_ = lean_ctor_get(v_cfg_3509_, 0);
v___x_3559_ = l_Lake_Log_maxLv(v___y_3552_);
v___x_3560_ = l_Lake_instOrdLogLevel_ord(v_failLv_3555_, v___x_3559_);
if (v___x_3560_ == 2)
{
uint8_t v___x_3561_; 
v___x_3561_ = 0;
v___y_3544_ = v___y_3552_;
v___y_3545_ = v_ansiMode_3557_;
v___y_3546_ = v___y_3554_;
v___y_3547_ = v___y_3553_;
v___y_3548_ = v_outLv_3556_;
v___y_3549_ = v_out_3558_;
v___y_3550_ = v___x_3561_;
goto v___jp_3543_;
}
else
{
uint8_t v___x_3562_; 
v___x_3562_ = 1;
v___y_3544_ = v___y_3552_;
v___y_3545_ = v_ansiMode_3557_;
v___y_3546_ = v___y_3554_;
v___y_3547_ = v___y_3553_;
v___y_3548_ = v_outLv_3556_;
v___y_3549_ = v_out_3558_;
v___y_3550_ = v___x_3562_;
goto v___jp_3543_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___redArg___boxed(lean_object* v_self_3572_, lean_object* v_cfg_3573_, lean_object* v___y_3574_){
_start:
{
lean_object* v_res_3575_; 
v_res_3575_ = l_Lake_LogIO_toBaseIO___redArg(v_self_3572_, v_cfg_3573_);
lean_dec_ref(v_cfg_3573_);
return v_res_3575_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO(lean_object* v_00_u03b1_3576_, lean_object* v_self_3577_, lean_object* v_cfg_3578_){
_start:
{
uint8_t v___y_3581_; lean_object* v___y_3582_; lean_object* v___x_3584_; lean_object* v___y_3586_; uint8_t v___y_3587_; uint8_t v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3590_; uint8_t v___y_3591_; uint8_t v___y_3606_; lean_object* v___y_3607_; lean_object* v___y_3608_; lean_object* v___y_3609_; uint8_t v___y_3610_; lean_object* v___y_3613_; uint8_t v___y_3614_; uint8_t v___y_3615_; lean_object* v___y_3616_; uint8_t v___y_3617_; lean_object* v___y_3618_; uint8_t v___y_3619_; lean_object* v___y_3621_; lean_object* v___y_3622_; uint8_t v___y_3623_; lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3584_ = l_instMonadBaseIO;
v___x_3632_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3633_ = lean_apply_2(v_self_3577_, v___x_3632_, lean_box(0));
if (lean_obj_tag(v___x_3633_) == 0)
{
lean_object* v_a_3634_; lean_object* v_a_3635_; lean_object* v___x_3636_; uint8_t v___x_3637_; 
v_a_3634_ = lean_ctor_get(v___x_3633_, 0);
lean_inc(v_a_3634_);
v_a_3635_ = lean_ctor_get(v___x_3633_, 1);
lean_inc(v_a_3635_);
lean_dec_ref_known(v___x_3633_, 2);
v___x_3636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3636_, 0, v_a_3634_);
v___x_3637_ = 0;
v___y_3621_ = v_a_3635_;
v___y_3622_ = v___x_3636_;
v___y_3623_ = v___x_3637_;
goto v___jp_3620_;
}
else
{
lean_object* v_a_3638_; lean_object* v___x_3639_; uint8_t v___x_3640_; 
v_a_3638_ = lean_ctor_get(v___x_3633_, 1);
lean_inc(v_a_3638_);
lean_dec_ref_known(v___x_3633_, 2);
v___x_3639_ = lean_box(0);
v___x_3640_ = 1;
v___y_3621_ = v_a_3638_;
v___y_3622_ = v___x_3639_;
v___y_3623_ = v___x_3640_;
goto v___jp_3620_;
}
v___jp_3580_:
{
if (v___y_3581_ == 0)
{
return v___y_3582_;
}
else
{
lean_object* v___x_3583_; 
lean_dec(v___y_3582_);
v___x_3583_ = lean_box(0);
return v___x_3583_;
}
}
v___jp_3585_:
{
lean_object* v___x_3592_; uint8_t v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; uint8_t v___x_3596_; 
v___x_3592_ = l_Lake_OutStream_get(v___y_3590_);
lean_inc_ref(v___x_3592_);
v___x_3593_ = l_Lake_AnsiMode_isEnabled(v___x_3592_, v___y_3587_);
v___x_3594_ = lean_unsigned_to_nat(0u);
v___x_3595_ = lean_array_get_size(v___y_3586_);
v___x_3596_ = lean_nat_dec_lt(v___x_3594_, v___x_3595_);
if (v___x_3596_ == 0)
{
lean_dec_ref(v___x_3592_);
lean_dec_ref(v___y_3586_);
v___y_3581_ = v___y_3588_;
v___y_3582_ = v___y_3589_;
goto v___jp_3580_;
}
else
{
lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___f_3599_; lean_object* v___x_3600_; size_t v___x_3601_; size_t v___x_3602_; lean_object* v___x_596__overap_3603_; lean_object* v___x_3604_; 
v___x_3597_ = lean_box(v___y_3591_);
v___x_3598_ = lean_box(v___x_3593_);
v___f_3599_ = lean_alloc_closure((void*)(l_Lake_LogIO_toBaseIO___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_3599_, 0, v___x_3592_);
lean_closure_set(v___f_3599_, 1, v___x_3597_);
lean_closure_set(v___f_3599_, 2, v___x_3598_);
v___x_3600_ = lean_box(0);
v___x_3601_ = ((size_t)0ULL);
v___x_3602_ = lean_usize_of_nat(v___x_3595_);
v___x_596__overap_3603_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3584_, v___f_3599_, v___y_3586_, v___x_3601_, v___x_3602_, v___x_3600_);
v___x_3604_ = lean_apply_1(v___x_596__overap_3603_, lean_box(0));
v___y_3581_ = v___y_3588_;
v___y_3582_ = v___y_3589_;
goto v___jp_3580_;
}
}
v___jp_3605_:
{
uint8_t v___x_3611_; 
v___x_3611_ = 0;
v___y_3586_ = v___y_3607_;
v___y_3587_ = v___y_3606_;
v___y_3588_ = v___y_3610_;
v___y_3589_ = v___y_3608_;
v___y_3590_ = v___y_3609_;
v___y_3591_ = v___x_3611_;
goto v___jp_3585_;
}
v___jp_3612_:
{
if (v___y_3615_ == 0)
{
if (v___y_3619_ == 0)
{
v___y_3586_ = v___y_3613_;
v___y_3587_ = v___y_3614_;
v___y_3588_ = v___y_3619_;
v___y_3589_ = v___y_3616_;
v___y_3590_ = v___y_3618_;
v___y_3591_ = v___y_3617_;
goto v___jp_3585_;
}
else
{
v___y_3606_ = v___y_3614_;
v___y_3607_ = v___y_3613_;
v___y_3608_ = v___y_3616_;
v___y_3609_ = v___y_3618_;
v___y_3610_ = v___y_3619_;
goto v___jp_3605_;
}
}
else
{
v___y_3606_ = v___y_3614_;
v___y_3607_ = v___y_3613_;
v___y_3608_ = v___y_3616_;
v___y_3609_ = v___y_3618_;
v___y_3610_ = v___y_3615_;
goto v___jp_3605_;
}
}
v___jp_3620_:
{
uint8_t v_failLv_3624_; uint8_t v_outLv_3625_; uint8_t v_ansiMode_3626_; lean_object* v_out_3627_; uint8_t v___x_3628_; uint8_t v___x_3629_; 
v_failLv_3624_ = lean_ctor_get_uint8(v_cfg_3578_, sizeof(void*)*1);
v_outLv_3625_ = lean_ctor_get_uint8(v_cfg_3578_, sizeof(void*)*1 + 1);
v_ansiMode_3626_ = lean_ctor_get_uint8(v_cfg_3578_, sizeof(void*)*1 + 2);
v_out_3627_ = lean_ctor_get(v_cfg_3578_, 0);
v___x_3628_ = l_Lake_Log_maxLv(v___y_3621_);
v___x_3629_ = l_Lake_instOrdLogLevel_ord(v_failLv_3624_, v___x_3628_);
if (v___x_3629_ == 2)
{
uint8_t v___x_3630_; 
v___x_3630_ = 0;
v___y_3613_ = v___y_3621_;
v___y_3614_ = v_ansiMode_3626_;
v___y_3615_ = v___y_3623_;
v___y_3616_ = v___y_3622_;
v___y_3617_ = v_outLv_3625_;
v___y_3618_ = v_out_3627_;
v___y_3619_ = v___x_3630_;
goto v___jp_3612_;
}
else
{
uint8_t v___x_3631_; 
v___x_3631_ = 1;
v___y_3613_ = v___y_3621_;
v___y_3614_ = v_ansiMode_3626_;
v___y_3615_ = v___y_3623_;
v___y_3616_ = v___y_3622_;
v___y_3617_ = v_outLv_3625_;
v___y_3618_ = v_out_3627_;
v___y_3619_ = v___x_3631_;
goto v___jp_3612_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_toBaseIO___boxed(lean_object* v_00_u03b1_3641_, lean_object* v_self_3642_, lean_object* v_cfg_3643_, lean_object* v___y_3644_){
_start:
{
lean_object* v_res_3645_; 
v_res_3645_ = l_Lake_LogIO_toBaseIO(v_00_u03b1_3641_, v_self_3642_, v_cfg_3643_);
lean_dec_ref(v_cfg_3643_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_captureLog___redArg(lean_object* v_inst_3646_, lean_object* v_self_3647_, lean_object* v_log_3648_){
_start:
{
lean_object* v_map_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; 
v_map_3649_ = lean_ctor_get(v_inst_3646_, 0);
lean_inc(v_map_3649_);
lean_dec_ref(v_inst_3646_);
v___x_3650_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3651_ = lean_apply_1(v_self_3647_, v_log_3648_);
v___x_3652_ = lean_apply_4(v_map_3649_, lean_box(0), lean_box(0), v___x_3650_, v___x_3651_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Lake_LogIO_captureLog(lean_object* v_m_3653_, lean_object* v_00_u03b1_3654_, lean_object* v_inst_3655_, lean_object* v_self_3656_, lean_object* v_log_3657_){
_start:
{
lean_object* v_map_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; 
v_map_3658_ = lean_ctor_get(v_inst_3655_, 0);
lean_inc(v_map_3658_);
lean_dec_ref(v_inst_3655_);
v___x_3659_ = ((lean_object*)(l_Lake_ELogT_toLogT_x3f___redArg___closed__0));
v___x_3660_ = lean_apply_1(v_self_3656_, v_log_3657_);
v___x_3661_ = lean_apply_4(v_map_3658_, lean_box(0), lean_box(0), v___x_3659_, v___x_3660_);
return v___x_3661_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadError___lam__0(lean_object* v_00_u03b1_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_){
_start:
{
uint8_t v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; 
v___x_3666_ = 3;
v___x_3667_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3667_, 0, v___y_3663_);
lean_ctor_set_uint8(v___x_3667_, sizeof(void*)*1, v___x_3666_);
lean_inc_ref(v___y_3664_);
v___x_3668_ = lean_apply_2(v___y_3664_, v___x_3667_, lean_box(0));
v___x_3669_ = lean_box(0);
v___x_3670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3670_, 0, v___x_3669_);
return v___x_3670_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadError___lam__0___boxed(lean_object* v_00_u03b1_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l_Lake_LoggerIO_instMonadError___lam__0(v_00_u03b1_3671_, v___y_3672_, v___y_3673_);
lean_dec_ref(v___y_3673_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftIO___lam__0(lean_object* v_00_u03b1_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_){
_start:
{
lean_object* v___x_3682_; 
v___x_3682_ = lean_apply_1(v___y_3679_, lean_box(0));
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3690_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3685_ = v___x_3682_;
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3682_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3688_; 
if (v_isShared_3686_ == 0)
{
v___x_3688_ = v___x_3685_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3683_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
else
{
lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3703_; 
v_a_3691_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3693_ = v___x_3682_;
v_isShared_3694_ = v_isSharedCheck_3703_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_dec(v___x_3682_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3703_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
lean_object* v___x_3695_; uint8_t v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3701_; 
v___x_3695_ = lean_io_error_to_string(v_a_3691_);
v___x_3696_ = 3;
v___x_3697_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3697_, 0, v___x_3695_);
lean_ctor_set_uint8(v___x_3697_, sizeof(void*)*1, v___x_3696_);
lean_inc_ref(v___y_3680_);
v___x_3698_ = lean_apply_2(v___y_3680_, v___x_3697_, lean_box(0));
v___x_3699_ = lean_box(0);
if (v_isShared_3694_ == 0)
{
lean_ctor_set(v___x_3693_, 0, v___x_3699_);
v___x_3701_ = v___x_3693_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v___x_3699_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftIO___lam__0___boxed(lean_object* v_00_u03b1_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_){
_start:
{
lean_object* v_res_3708_; 
v_res_3708_ = l_Lake_LoggerIO_instMonadLiftIO___lam__0(v_00_u03b1_3704_, v___y_3705_, v___y_3706_);
lean_dec_ref(v___y_3706_);
return v_res_3708_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__0(lean_object* v_x_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_){
_start:
{
lean_object* v___x_3715_; lean_object* v___x_3716_; 
lean_inc_ref(v___y_3713_);
v___x_3715_ = lean_apply_2(v___y_3713_, v___y_3712_, lean_box(0));
v___x_3716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3715_);
return v___x_3716_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__0___boxed(lean_object* v_x_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_){
_start:
{
lean_object* v_res_3721_; 
v_res_3721_ = l_Lake_LoggerIO_instMonadLiftLogIO___lam__0(v_x_3717_, v___y_3718_, v___y_3719_);
lean_dec_ref(v___y_3719_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__2(lean_object* v___x_3722_, lean_object* v___f_3723_, lean_object* v___f_3724_, lean_object* v_00_u03b1_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_){
_start:
{
lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
v___x_3729_ = lean_unsigned_to_nat(0u);
v___x_3730_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3731_ = lean_apply_2(v___y_3726_, v___x_3730_, lean_box(0));
if (lean_obj_tag(v___x_3731_) == 0)
{
lean_object* v_a_3732_; lean_object* v_a_3733_; lean_object* v___x_3734_; uint8_t v___x_3735_; 
lean_dec_ref(v___f_3724_);
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
lean_inc(v_a_3732_);
v_a_3733_ = lean_ctor_get(v___x_3731_, 1);
lean_inc(v_a_3733_);
lean_dec_ref_known(v___x_3731_, 2);
v___x_3734_ = lean_array_get_size(v_a_3733_);
v___x_3735_ = lean_nat_dec_lt(v___x_3729_, v___x_3734_);
if (v___x_3735_ == 0)
{
lean_object* v___x_3736_; 
lean_dec(v_a_3733_);
lean_dec_ref(v___f_3723_);
lean_dec_ref(v___x_3722_);
v___x_3736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3736_, 0, v_a_3732_);
return v___x_3736_;
}
else
{
lean_object* v___x_3737_; size_t v___x_3738_; size_t v___x_3739_; lean_object* v___x_1309__overap_3740_; lean_object* v___x_3741_; 
v___x_3737_ = lean_box(0);
v___x_3738_ = ((size_t)0ULL);
v___x_3739_ = lean_usize_of_nat(v___x_3734_);
v___x_1309__overap_3740_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3722_, v___f_3723_, v_a_3733_, v___x_3738_, v___x_3739_, v___x_3737_);
lean_inc_ref(v___y_3727_);
v___x_3741_ = lean_apply_2(v___x_1309__overap_3740_, v___y_3727_, lean_box(0));
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3748_; 
v_isSharedCheck_3748_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3748_ == 0)
{
lean_object* v_unused_3749_; 
v_unused_3749_ = lean_ctor_get(v___x_3741_, 0);
lean_dec(v_unused_3749_);
v___x_3743_ = v___x_3741_;
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
else
{
lean_dec(v___x_3741_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3748_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3746_; 
if (v_isShared_3744_ == 0)
{
lean_ctor_set(v___x_3743_, 0, v_a_3732_);
v___x_3746_ = v___x_3743_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v_a_3732_);
v___x_3746_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
return v___x_3746_;
}
}
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
lean_dec(v_a_3732_);
v_a_3750_ = lean_ctor_get(v___x_3741_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3741_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___x_3741_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
}
else
{
lean_object* v_a_3758_; lean_object* v___x_3759_; uint8_t v___x_3760_; 
lean_dec_ref(v___f_3723_);
v_a_3758_ = lean_ctor_get(v___x_3731_, 1);
lean_inc(v_a_3758_);
lean_dec_ref_known(v___x_3731_, 2);
v___x_3759_ = lean_array_get_size(v_a_3758_);
v___x_3760_ = lean_nat_dec_lt(v___x_3729_, v___x_3759_);
if (v___x_3760_ == 0)
{
lean_object* v___x_3761_; lean_object* v___x_3762_; 
lean_dec(v_a_3758_);
lean_dec_ref(v___f_3724_);
lean_dec_ref(v___x_3722_);
v___x_3761_ = lean_box(0);
v___x_3762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3761_);
return v___x_3762_;
}
else
{
lean_object* v___x_3763_; size_t v___x_3764_; size_t v___x_3765_; lean_object* v___x_1325__overap_3766_; lean_object* v___x_3767_; 
v___x_3763_ = lean_box(0);
v___x_3764_ = ((size_t)0ULL);
v___x_3765_ = lean_usize_of_nat(v___x_3759_);
v___x_1325__overap_3766_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3722_, v___f_3724_, v_a_3758_, v___x_3764_, v___x_3765_, v___x_3763_);
lean_inc_ref(v___y_3727_);
v___x_3767_ = lean_apply_2(v___x_1325__overap_3766_, v___y_3727_, lean_box(0));
if (lean_obj_tag(v___x_3767_) == 0)
{
lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3774_; 
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3767_);
if (v_isSharedCheck_3774_ == 0)
{
lean_object* v_unused_3775_; 
v_unused_3775_ = lean_ctor_get(v___x_3767_, 0);
lean_dec(v_unused_3775_);
v___x_3769_ = v___x_3767_;
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
else
{
lean_dec(v___x_3767_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3772_; 
if (v_isShared_3770_ == 0)
{
lean_ctor_set_tag(v___x_3769_, 1);
lean_ctor_set(v___x_3769_, 0, v___x_3763_);
v___x_3772_ = v___x_3769_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v___x_3763_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
else
{
lean_object* v_a_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3783_; 
v_a_3776_ = lean_ctor_get(v___x_3767_, 0);
v_isSharedCheck_3783_ = !lean_is_exclusive(v___x_3767_);
if (v_isSharedCheck_3783_ == 0)
{
v___x_3778_ = v___x_3767_;
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_a_3776_);
lean_dec(v___x_3767_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3781_; 
if (v_isShared_3779_ == 0)
{
v___x_3781_ = v___x_3778_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3782_; 
v_reuseFailAlloc_3782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3782_, 0, v_a_3776_);
v___x_3781_ = v_reuseFailAlloc_3782_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
return v___x_3781_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_instMonadLiftLogIO___lam__2___boxed(lean_object* v___x_3784_, lean_object* v___f_3785_, lean_object* v___f_3786_, lean_object* v_00_u03b1_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_){
_start:
{
lean_object* v_res_3791_; 
v_res_3791_ = l_Lake_LoggerIO_instMonadLiftLogIO___lam__2(v___x_3784_, v___f_3785_, v___f_3786_, v_00_u03b1_3787_, v___y_3788_, v___y_3789_);
lean_dec_ref(v___y_3789_);
return v_res_3791_;
}
}
static lean_object* _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__1(void){
_start:
{
lean_object* v___x_3793_; 
v___x_3793_ = l_instMonadEIO___redArg();
return v___x_3793_;
}
}
static lean_object* _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__2(void){
_start:
{
lean_object* v___x_3794_; lean_object* v___x_3795_; 
v___x_3794_ = lean_obj_once(&l_Lake_LoggerIO_instMonadLiftLogIO___closed__1, &l_Lake_LoggerIO_instMonadLiftLogIO___closed__1_once, _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__1);
v___x_3795_ = l_ReaderT_instMonad___redArg(v___x_3794_);
return v___x_3795_;
}
}
static lean_object* _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__3(void){
_start:
{
lean_object* v___f_3796_; lean_object* v___x_3797_; lean_object* v___f_3798_; 
v___f_3796_ = ((lean_object*)(l_Lake_LoggerIO_instMonadLiftLogIO___closed__0));
v___x_3797_ = lean_obj_once(&l_Lake_LoggerIO_instMonadLiftLogIO___closed__2, &l_Lake_LoggerIO_instMonadLiftLogIO___closed__2_once, _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__2);
v___f_3798_ = lean_alloc_closure((void*)(l_Lake_LoggerIO_instMonadLiftLogIO___lam__2___boxed), 7, 3);
lean_closure_set(v___f_3798_, 0, v___x_3797_);
lean_closure_set(v___f_3798_, 1, v___f_3796_);
lean_closure_set(v___f_3798_, 2, v___f_3796_);
return v___f_3798_;
}
}
static lean_object* _init_l_Lake_LoggerIO_instMonadLiftLogIO(void){
_start:
{
lean_object* v___f_3799_; 
v___f_3799_ = lean_obj_once(&l_Lake_LoggerIO_instMonadLiftLogIO___closed__3, &l_Lake_LoggerIO_instMonadLiftLogIO___closed__3_once, _init_l_Lake_LoggerIO_instMonadLiftLogIO___closed__3);
return v___f_3799_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___lam__0(lean_object* v_val_3800_, uint8_t v_outLv_3801_, uint8_t v_val_3802_, lean_object* v_e_3803_){
_start:
{
lean_object* v___x_3805_; 
v___x_3805_ = l_Lake_logToStream(v_e_3803_, v_val_3800_, v_outLv_3801_, v_val_3802_);
return v___x_3805_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___lam__0___boxed(lean_object* v_val_3806_, lean_object* v_outLv_3807_, lean_object* v_val_3808_, lean_object* v_e_3809_, lean_object* v___y_3810_){
_start:
{
uint8_t v_outLv_boxed_3811_; uint8_t v_val_179__boxed_3812_; lean_object* v_res_3813_; 
v_outLv_boxed_3811_ = lean_unbox(v_outLv_3807_);
v_val_179__boxed_3812_ = lean_unbox(v_val_3808_);
v_res_3813_ = l_Lake_LoggerIO_toBaseIO___redArg___lam__0(v_val_3806_, v_outLv_boxed_3811_, v_val_179__boxed_3812_, v_e_3809_);
lean_dec_ref(v_e_3809_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg(lean_object* v_self_3814_, lean_object* v_cfg_3815_){
_start:
{
uint8_t v_outLv_3817_; uint8_t v_ansiMode_3818_; lean_object* v_out_3819_; lean_object* v___x_3820_; uint8_t v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___f_3824_; lean_object* v___x_3825_; 
v_outLv_3817_ = lean_ctor_get_uint8(v_cfg_3815_, sizeof(void*)*1 + 1);
v_ansiMode_3818_ = lean_ctor_get_uint8(v_cfg_3815_, sizeof(void*)*1 + 2);
v_out_3819_ = lean_ctor_get(v_cfg_3815_, 0);
v___x_3820_ = l_Lake_OutStream_get(v_out_3819_);
lean_inc_ref(v___x_3820_);
v___x_3821_ = l_Lake_AnsiMode_isEnabled(v___x_3820_, v_ansiMode_3818_);
v___x_3822_ = lean_box(v_outLv_3817_);
v___x_3823_ = lean_box(v___x_3821_);
v___f_3824_ = lean_alloc_closure((void*)(l_Lake_LoggerIO_toBaseIO___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3824_, 0, v___x_3820_);
lean_closure_set(v___f_3824_, 1, v___x_3822_);
lean_closure_set(v___f_3824_, 2, v___x_3823_);
v___x_3825_ = lean_apply_2(v_self_3814_, v___f_3824_, lean_box(0));
if (lean_obj_tag(v___x_3825_) == 0)
{
lean_object* v_a_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3833_; 
v_a_3826_ = lean_ctor_get(v___x_3825_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v___x_3825_);
if (v_isSharedCheck_3833_ == 0)
{
v___x_3828_ = v___x_3825_;
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_a_3826_);
lean_dec(v___x_3825_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3831_; 
if (v_isShared_3829_ == 0)
{
lean_ctor_set_tag(v___x_3828_, 1);
v___x_3831_ = v___x_3828_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v_a_3826_);
v___x_3831_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
return v___x_3831_;
}
}
}
else
{
lean_object* v___x_3834_; 
lean_dec_ref_known(v___x_3825_, 1);
v___x_3834_ = lean_box(0);
return v___x_3834_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___redArg___boxed(lean_object* v_self_3835_, lean_object* v_cfg_3836_, lean_object* v___y_3837_){
_start:
{
lean_object* v_res_3838_; 
v_res_3838_ = l_Lake_LoggerIO_toBaseIO___redArg(v_self_3835_, v_cfg_3836_);
lean_dec_ref(v_cfg_3836_);
return v_res_3838_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO(lean_object* v_00_u03b1_3839_, lean_object* v_self_3840_, lean_object* v_cfg_3841_){
_start:
{
uint8_t v_outLv_3843_; uint8_t v_ansiMode_3844_; lean_object* v_out_3845_; lean_object* v___x_3846_; uint8_t v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___f_3850_; lean_object* v___x_3851_; 
v_outLv_3843_ = lean_ctor_get_uint8(v_cfg_3841_, sizeof(void*)*1 + 1);
v_ansiMode_3844_ = lean_ctor_get_uint8(v_cfg_3841_, sizeof(void*)*1 + 2);
v_out_3845_ = lean_ctor_get(v_cfg_3841_, 0);
v___x_3846_ = l_Lake_OutStream_get(v_out_3845_);
lean_inc_ref(v___x_3846_);
v___x_3847_ = l_Lake_AnsiMode_isEnabled(v___x_3846_, v_ansiMode_3844_);
v___x_3848_ = lean_box(v_outLv_3843_);
v___x_3849_ = lean_box(v___x_3847_);
v___f_3850_ = lean_alloc_closure((void*)(l_Lake_LoggerIO_toBaseIO___redArg___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3850_, 0, v___x_3846_);
lean_closure_set(v___f_3850_, 1, v___x_3848_);
lean_closure_set(v___f_3850_, 2, v___x_3849_);
v___x_3851_ = lean_apply_2(v_self_3840_, v___f_3850_, lean_box(0));
if (lean_obj_tag(v___x_3851_) == 0)
{
lean_object* v_a_3852_; lean_object* v___x_3854_; uint8_t v_isShared_3855_; uint8_t v_isSharedCheck_3859_; 
v_a_3852_ = lean_ctor_get(v___x_3851_, 0);
v_isSharedCheck_3859_ = !lean_is_exclusive(v___x_3851_);
if (v_isSharedCheck_3859_ == 0)
{
v___x_3854_ = v___x_3851_;
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
else
{
lean_inc(v_a_3852_);
lean_dec(v___x_3851_);
v___x_3854_ = lean_box(0);
v_isShared_3855_ = v_isSharedCheck_3859_;
goto v_resetjp_3853_;
}
v_resetjp_3853_:
{
lean_object* v___x_3857_; 
if (v_isShared_3855_ == 0)
{
lean_ctor_set_tag(v___x_3854_, 1);
v___x_3857_ = v___x_3854_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v_a_3852_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
}
else
{
lean_object* v___x_3860_; 
lean_dec_ref_known(v___x_3851_, 1);
v___x_3860_ = lean_box(0);
return v___x_3860_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_toBaseIO___boxed(lean_object* v_00_u03b1_3861_, lean_object* v_self_3862_, lean_object* v_cfg_3863_, lean_object* v___y_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_Lake_LoggerIO_toBaseIO(v_00_u03b1_3861_, v_self_3862_, v_cfg_3863_);
lean_dec_ref(v_cfg_3863_);
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___lam__0(lean_object* v_val_3866_, lean_object* v_e_3867_){
_start:
{
lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; 
v___x_3869_ = lean_st_ref_take(v_val_3866_);
v___x_3870_ = lean_array_push(v___x_3869_, v_e_3867_);
v___x_3871_ = lean_st_ref_put(v_val_3866_, v___x_3870_);
return v___x_3871_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___lam__0___boxed(lean_object* v_val_3872_, lean_object* v_e_3873_, lean_object* v___y_3874_){
_start:
{
lean_object* v_res_3875_; 
v_res_3875_ = l_Lake_LoggerIO_captureLog___redArg___lam__0(v_val_3872_, v_e_3873_);
lean_dec(v_val_3872_);
return v_res_3875_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg(lean_object* v_self_3876_){
_start:
{
lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v_val_3885_; lean_object* v___f_3896_; lean_object* v___x_3897_; 
v___x_3882_ = ((lean_object*)(l_Lake_Log_empty___closed__0));
v___x_3883_ = lean_st_mk_ref(v___x_3882_);
lean_inc(v___x_3883_);
v___f_3896_ = lean_alloc_closure((void*)(l_Lake_LoggerIO_captureLog___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3896_, 0, v___x_3883_);
v___x_3897_ = lean_apply_2(v_self_3876_, v___f_3896_, lean_box(0));
if (lean_obj_tag(v___x_3897_) == 0)
{
lean_object* v_a_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3905_; 
v_a_3898_ = lean_ctor_get(v___x_3897_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3897_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3900_ = v___x_3897_;
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_a_3898_);
lean_dec(v___x_3897_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
lean_ctor_set_tag(v___x_3900_, 1);
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_a_3898_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
v_val_3885_ = v___x_3903_;
goto v___jp_3884_;
}
}
}
else
{
lean_object* v_a_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3913_; 
v_a_3906_ = lean_ctor_get(v___x_3897_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v___x_3897_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3908_ = v___x_3897_;
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_a_3906_);
lean_dec(v___x_3897_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
lean_object* v___x_3911_; 
if (v_isShared_3909_ == 0)
{
lean_ctor_set_tag(v___x_3908_, 0);
v___x_3911_ = v___x_3908_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v_a_3906_);
v___x_3911_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
v_val_3885_ = v___x_3911_;
goto v___jp_3884_;
}
}
}
v___jp_3878_:
{
lean_object* v___x_3881_; 
v___x_3881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3881_, 0, v___y_3880_);
lean_ctor_set(v___x_3881_, 1, v___y_3879_);
return v___x_3881_;
}
v___jp_3884_:
{
lean_object* v___x_3886_; 
v___x_3886_ = lean_st_ref_get(v___x_3883_);
lean_dec(v___x_3883_);
if (lean_obj_tag(v_val_3885_) == 0)
{
lean_object* v___x_3887_; 
lean_dec_ref_known(v_val_3885_, 1);
v___x_3887_ = lean_box(0);
v___y_3879_ = v___x_3886_;
v___y_3880_ = v___x_3887_;
goto v___jp_3878_;
}
else
{
lean_object* v_a_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3895_; 
v_a_3888_ = lean_ctor_get(v_val_3885_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v_val_3885_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3890_ = v_val_3885_;
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_a_3888_);
lean_dec(v_val_3885_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3893_; 
if (v_isShared_3891_ == 0)
{
v___x_3893_ = v___x_3890_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3888_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
v___y_3879_ = v___x_3886_;
v___y_3880_ = v___x_3893_;
goto v___jp_3878_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___redArg___boxed(lean_object* v_self_3914_, lean_object* v___y_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Lake_LoggerIO_captureLog___redArg(v_self_3914_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog(lean_object* v_00_u03b1_3917_, lean_object* v_self_3918_){
_start:
{
lean_object* v___x_3920_; 
v___x_3920_ = l_Lake_LoggerIO_captureLog___redArg(v_self_3918_);
return v___x_3920_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_captureLog___boxed(lean_object* v_00_u03b1_3921_, lean_object* v_self_3922_, lean_object* v___y_3923_){
_start:
{
lean_object* v_res_3924_; 
v_res_3924_ = l_Lake_LoggerIO_captureLog(v_00_u03b1_3921_, v_self_3922_);
return v_res_3924_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___redArg(lean_object* v_self_3925_){
_start:
{
lean_object* v___x_3927_; 
v___x_3927_ = l_Lake_LoggerIO_captureLog___redArg(v_self_3925_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___redArg___boxed(lean_object* v_self_3928_, lean_object* v___y_3929_){
_start:
{
lean_object* v_res_3930_; 
v_res_3930_ = l_Lake_LoggerIO_run_x3f___redArg(v_self_3928_);
return v_res_3930_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f(lean_object* v_00_u03b1_3931_, lean_object* v_self_3932_){
_start:
{
lean_object* v___x_3934_; 
v___x_3934_ = l_Lake_LoggerIO_captureLog___redArg(v_self_3932_);
return v___x_3934_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f___boxed(lean_object* v_00_u03b1_3935_, lean_object* v_self_3936_, lean_object* v___y_3937_){
_start:
{
lean_object* v_res_3938_; 
v_res_3938_ = l_Lake_LoggerIO_run_x3f(v_00_u03b1_3935_, v_self_3936_);
return v_res_3938_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___redArg(lean_object* v_self_3939_, lean_object* v_logger_3940_){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = lean_apply_2(v_self_3939_, v_logger_3940_, lean_box(0));
if (lean_obj_tag(v___x_3942_) == 0)
{
lean_object* v_a_3943_; lean_object* v___x_3945_; uint8_t v_isShared_3946_; uint8_t v_isSharedCheck_3950_; 
v_a_3943_ = lean_ctor_get(v___x_3942_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v___x_3942_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3945_ = v___x_3942_;
v_isShared_3946_ = v_isSharedCheck_3950_;
goto v_resetjp_3944_;
}
else
{
lean_inc(v_a_3943_);
lean_dec(v___x_3942_);
v___x_3945_ = lean_box(0);
v_isShared_3946_ = v_isSharedCheck_3950_;
goto v_resetjp_3944_;
}
v_resetjp_3944_:
{
lean_object* v___x_3948_; 
if (v_isShared_3946_ == 0)
{
lean_ctor_set_tag(v___x_3945_, 1);
v___x_3948_ = v___x_3945_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_a_3943_);
v___x_3948_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
return v___x_3948_;
}
}
}
else
{
lean_object* v___x_3951_; 
lean_dec_ref_known(v___x_3942_, 1);
v___x_3951_ = lean_box(0);
return v___x_3951_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___redArg___boxed(lean_object* v_self_3952_, lean_object* v_logger_3953_, lean_object* v___y_3954_){
_start:
{
lean_object* v_res_3955_; 
v_res_3955_ = l_Lake_LoggerIO_run_x3f_x27___redArg(v_self_3952_, v_logger_3953_);
return v_res_3955_;
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27(lean_object* v_00_u03b1_3956_, lean_object* v_self_3957_, lean_object* v_logger_3958_){
_start:
{
lean_object* v___x_3960_; 
v___x_3960_ = lean_apply_2(v_self_3957_, v_logger_3958_, lean_box(0));
if (lean_obj_tag(v___x_3960_) == 0)
{
lean_object* v_a_3961_; lean_object* v___x_3963_; uint8_t v_isShared_3964_; uint8_t v_isSharedCheck_3968_; 
v_a_3961_ = lean_ctor_get(v___x_3960_, 0);
v_isSharedCheck_3968_ = !lean_is_exclusive(v___x_3960_);
if (v_isSharedCheck_3968_ == 0)
{
v___x_3963_ = v___x_3960_;
v_isShared_3964_ = v_isSharedCheck_3968_;
goto v_resetjp_3962_;
}
else
{
lean_inc(v_a_3961_);
lean_dec(v___x_3960_);
v___x_3963_ = lean_box(0);
v_isShared_3964_ = v_isSharedCheck_3968_;
goto v_resetjp_3962_;
}
v_resetjp_3962_:
{
lean_object* v___x_3966_; 
if (v_isShared_3964_ == 0)
{
lean_ctor_set_tag(v___x_3963_, 1);
v___x_3966_ = v___x_3963_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v_a_3961_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
}
else
{
lean_object* v___x_3969_; 
lean_dec_ref_known(v___x_3960_, 1);
v___x_3969_ = lean_box(0);
return v___x_3969_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LoggerIO_run_x3f_x27___boxed(lean_object* v_00_u03b1_3970_, lean_object* v_self_3971_, lean_object* v_logger_3972_, lean_object* v___y_3973_){
_start:
{
lean_object* v_res_3974_; 
v_res_3974_ = l_Lake_LoggerIO_run_x3f_x27(v_00_u03b1_3970_, v_self_3971_, v_logger_3972_);
return v_res_3974_;
}
}
lean_object* runtime_initialize_Lean_Data_Json(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Error(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_EStateT(uint8_t builtin);
lean_object* runtime_initialize_Lean_Message(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Lift(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Modify(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_Log(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_EStateT(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Lift(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_instLTVerbosity = _init_l_Lake_instLTVerbosity();
lean_mark_persistent(l_Lake_instLTVerbosity);
l_Lake_instLEVerbosity = _init_l_Lake_instLEVerbosity();
lean_mark_persistent(l_Lake_instLEVerbosity);
l_Lake_instInhabitedVerbosity = _init_l_Lake_instInhabitedVerbosity();
l_Lake_instInhabitedLogLevel_default = _init_l_Lake_instInhabitedLogLevel_default();
l_Lake_instInhabitedLogLevel = _init_l_Lake_instInhabitedLogLevel();
l_Lake_instLTLogLevel = _init_l_Lake_instLTLogLevel();
lean_mark_persistent(l_Lake_instLTLogLevel);
l_Lake_instLELogLevel = _init_l_Lake_instLELogLevel();
lean_mark_persistent(l_Lake_instLELogLevel);
l_Lake_Log_instInhabitedPos_default = _init_l_Lake_Log_instInhabitedPos_default();
lean_mark_persistent(l_Lake_Log_instInhabitedPos_default);
l_Lake_Log_instInhabitedPos = _init_l_Lake_Log_instInhabitedPos();
lean_mark_persistent(l_Lake_Log_instInhabitedPos);
l_Lake_instOfNatPos = _init_l_Lake_instOfNatPos();
lean_mark_persistent(l_Lake_instOfNatPos);
l_Lake_instLTPos = _init_l_Lake_instLTPos();
lean_mark_persistent(l_Lake_instLTPos);
l_Lake_instLEPos = _init_l_Lake_instLEPos();
lean_mark_persistent(l_Lake_instLEPos);
l_Lake_LoggerIO_instMonadLiftLogIO = _init_l_Lake_LoggerIO_instMonadLiftLogIO();
lean_mark_persistent(l_Lake_LoggerIO_instMonadLiftLogIO);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_Log(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
lean_object* initialize_Lake_Util_Error(uint8_t builtin);
lean_object* initialize_Lake_Util_EStateT(uint8_t builtin);
lean_object* initialize_Lean_Message(uint8_t builtin);
lean_object* initialize_Lake_Util_Lift(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Modify(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_Log(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Error(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_EStateT(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Lift(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Modify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_Log(builtin);
}
#ifdef __cplusplus
}
#endif
