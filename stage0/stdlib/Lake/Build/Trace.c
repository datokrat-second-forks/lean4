// Lean compiler output
// Module: Lake.Build.Trace
// Imports: public import Lean.Data.Json import Init.Data.Nat.Fold meta import Init.Data.Nat.Fold public import Lake.Util.String public import Init.Data.String.Search public import Init.Data.String.Extra import Init.Data.Option.Coe
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
lean_object* lean_nat_to_int(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint8_t lean_uint8_sub(uint8_t, uint8_t);
uint64_t lean_uint8_to_uint64(uint8_t);
uint64_t lean_uint64_add(uint64_t, uint64_t);
lean_object* l_instMonadLiftT___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_List_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_metadata(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_IO_FS_instReprSystemTime_repr___redArg(lean_object*);
uint8_t l_Lake_isHex(lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lake_lowerHexUInt64(uint64_t);
lean_object* l_String_quote(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_System_FilePath_pathExists___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_IO_FS_instOrdSystemTime_ord(lean_object*, lean_object*);
lean_object* l_IO_FS_readBinFile(lean_object*);
uint64_t lean_byte_array_hash(lean_object*);
lean_object* l_String_crlfToLf(lean_object*);
uint64_t lean_string_hash(lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_IO_FS_instOrdSystemTime_ord___boxed(lean_object*, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_IO_FS_instBEqSystemTime_beq(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instCheckExistsFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_System_FilePath_pathExists___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCheckExistsFilePath___closed__0 = (const lean_object*)&l_Lake_instCheckExistsFilePath___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCheckExistsFilePath = (const lean_object*)&l_Lake_instCheckExistsFilePath___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_computeTrace___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceList___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceList(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_mixTraceArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_mixTraceArray___redArg___closed__0 = (const lean_object*)&l_Lake_mixTraceArray___redArg___closed__0_value;
static const lean_closure_object l_Lake_mixTraceArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_mixTraceArray___redArg___closed__1 = (const lean_object*)&l_Lake_mixTraceArray___redArg___closed__1_value;
static const lean_closure_object l_Lake_mixTraceArray___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_mixTraceArray___redArg___closed__2 = (const lean_object*)&l_Lake_mixTraceArray___redArg___closed__2_value;
static const lean_closure_object l_Lake_mixTraceArray___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_mixTraceArray___redArg___closed__3 = (const lean_object*)&l_Lake_mixTraceArray___redArg___closed__3_value;
static const lean_closure_object l_Lake_mixTraceArray___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_mixTraceArray___redArg___closed__4 = (const lean_object*)&l_Lake_mixTraceArray___redArg___closed__4_value;
static const lean_closure_object l_Lake_mixTraceArray___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_mixTraceArray___redArg___closed__5 = (const lean_object*)&l_Lake_mixTraceArray___redArg___closed__5_value;
static const lean_closure_object l_Lake_mixTraceArray___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_mixTraceArray___redArg___closed__6 = (const lean_object*)&l_Lake_mixTraceArray___redArg___closed__6_value;
static const lean_ctor_object l_Lake_mixTraceArray___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_mixTraceArray___redArg___closed__0_value),((lean_object*)&l_Lake_mixTraceArray___redArg___closed__1_value)}};
static const lean_object* l_Lake_mixTraceArray___redArg___closed__7 = (const lean_object*)&l_Lake_mixTraceArray___redArg___closed__7_value;
static const lean_ctor_object l_Lake_mixTraceArray___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_mixTraceArray___redArg___closed__7_value),((lean_object*)&l_Lake_mixTraceArray___redArg___closed__2_value),((lean_object*)&l_Lake_mixTraceArray___redArg___closed__3_value),((lean_object*)&l_Lake_mixTraceArray___redArg___closed__4_value),((lean_object*)&l_Lake_mixTraceArray___redArg___closed__5_value)}};
static const lean_object* l_Lake_mixTraceArray___redArg___closed__8 = (const lean_object*)&l_Lake_mixTraceArray___redArg___closed__8_value;
static const lean_ctor_object l_Lake_mixTraceArray___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_mixTraceArray___redArg___closed__8_value),((lean_object*)&l_Lake_mixTraceArray___redArg___closed__6_value)}};
static const lean_object* l_Lake_mixTraceArray___redArg___closed__9 = (const lean_object*)&l_Lake_mixTraceArray___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mixTraceArray(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeListTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instComputeTraceListOfMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftT___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instComputeTraceListOfMonad___redArg___closed__0 = (const lean_object*)&l_Lake_instComputeTraceListOfMonad___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprHash_repr_spec__0(lean_object*);
static const lean_string_object l_Lake_instReprHash_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lake_instReprHash_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprHash_repr___redArg___closed__0_value;
static const lean_string_object l_Lake_instReprHash_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Lake_instReprHash_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprHash_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprHash_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprHash_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprHash_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprHash_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprHash_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprHash_repr___redArg___closed__2_value)}};
static const lean_object* l_Lake_instReprHash_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprHash_repr___redArg___closed__3_value;
static const lean_string_object l_Lake_instReprHash_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lake_instReprHash_repr___redArg___closed__4 = (const lean_object*)&l_Lake_instReprHash_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lake_instReprHash_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprHash_repr___redArg___closed__4_value)}};
static const lean_object* l_Lake_instReprHash_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprHash_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprHash_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprHash_repr___redArg___closed__3_value),((lean_object*)&l_Lake_instReprHash_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprHash_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprHash_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__7;
static const lean_string_object l_Lake_instReprHash_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lake_instReprHash_repr___redArg___closed__8 = (const lean_object*)&l_Lake_instReprHash_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__9;
static lean_once_cell_t l_Lake_instReprHash_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprHash_repr___redArg___closed__10;
static const lean_ctor_object l_Lake_instReprHash_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprHash_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprHash_repr___redArg___closed__11 = (const lean_object*)&l_Lake_instReprHash_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lake_instReprHash_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprHash_repr___redArg___closed__8_value)}};
static const lean_object* l_Lake_instReprHash_repr___redArg___closed__12 = (const lean_object*)&l_Lake_instReprHash_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___redArg(uint64_t);
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprHash___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprHash_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprHash___closed__0 = (const lean_object*)&l_Lake_instReprHash___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprHash = (const lean_object*)&l_Lake_instReprHash___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqHash_decEq(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqHash_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqHash(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqHash___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_instHashable___lam__0(uint64_t);
LEAN_EXPORT lean_object* l_Lake_Hash_instHashable___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_Hash_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Hash_instHashable___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Hash_instHashable___closed__0 = (const lean_object*)&l_Lake_Hash_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Hash_instHashable = (const lean_object*)&l_Lake_Hash_instHashable___closed__0_value;
LEAN_EXPORT uint64_t l_Lake_Hash_nil;
LEAN_EXPORT uint64_t l_Lake_Hash_instNilTrace;
LEAN_EXPORT uint64_t l_Lake_Hash_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofNat___boxed(lean_object*);
static const lean_string_object l_Lake_Hash_ofJsonNumber_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "number is not a natural"};
static const lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__0 = (const lean_object*)&l_Lake_Hash_ofJsonNumber_x3f___closed__0_value;
static const lean_ctor_object l_Lake_Hash_ofJsonNumber_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Hash_ofJsonNumber_x3f___closed__0_value)}};
static const lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__1 = (const lean_object*)&l_Lake_Hash_ofJsonNumber_x3f___closed__1_value;
static lean_once_cell_t l_Lake_Hash_ofJsonNumber_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__2;
static lean_once_cell_t l_Lake_Hash_ofJsonNumber_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__3;
static const lean_string_object l_Lake_Hash_ofJsonNumber_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "number too big"};
static const lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__4 = (const lean_object*)&l_Lake_Hash_ofJsonNumber_x3f___closed__4_value;
static const lean_ctor_object l_Lake_Hash_ofJsonNumber_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Hash_ofJsonNumber_x3f___closed__4_value)}};
static const lean_object* l_Lake_Hash_ofJsonNumber_x3f___closed__5 = (const lean_object*)&l_Lake_Hash_ofJsonNumber_x3f___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_Hash_ofJsonNumber_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofJsonNumber_x3f___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofHex(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_hex(uint64_t);
LEAN_EXPORT lean_object* l_Lake_Hash_hex___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofDecimal_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_mix(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lake_Hash_mix___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Hash_instMixTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Hash_mix___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Hash_instMixTrace___closed__0 = (const lean_object*)&l_Lake_Hash_instMixTrace___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Hash_instMixTrace = (const lean_object*)&l_Lake_Hash_instMixTrace___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Hash_toString(uint64_t);
LEAN_EXPORT lean_object* l_Lake_Hash_toString___boxed(lean_object*);
static const lean_closure_object l_Lake_Hash_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Hash_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Hash_instToString___closed__0 = (const lean_object*)&l_Lake_Hash_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Hash_instToString = (const lean_object*)&l_Lake_Hash_instToString___closed__0_value;
LEAN_EXPORT uint64_t l_Lake_Hash_ofHashable___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofHashable___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofHashable(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofHashable___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofString___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofText(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofText___boxed(lean_object*);
LEAN_EXPORT uint64_t l_Lake_Hash_ofByteArray(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_ofByteArray___boxed(lean_object*);
static lean_once_cell_t l_Lake_Hash_ofBool___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_Hash_ofBool___closed__0;
static lean_once_cell_t l_Lake_Hash_ofBool___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_Hash_ofBool___closed__1;
LEAN_EXPORT uint64_t l_Lake_Hash_ofBool(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Hash_ofBool___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Hash_toJson(uint64_t);
LEAN_EXPORT lean_object* l_Lake_Hash_toJson___boxed(lean_object*);
static const lean_closure_object l_Lake_Hash_instToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Hash_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Hash_instToJson___closed__0 = (const lean_object*)&l_Lake_Hash_instToJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Hash_instToJson = (const lean_object*)&l_Lake_Hash_instToJson___closed__0_value;
static const lean_string_object l_Lake_Hash_fromJson_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "invalid hash: expected hexadecimal string"};
static const lean_object* l_Lake_Hash_fromJson_x3f___closed__0 = (const lean_object*)&l_Lake_Hash_fromJson_x3f___closed__0_value;
static const lean_ctor_object l_Lake_Hash_fromJson_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Hash_fromJson_x3f___closed__0_value)}};
static const lean_object* l_Lake_Hash_fromJson_x3f___closed__1 = (const lean_object*)&l_Lake_Hash_fromJson_x3f___closed__1_value;
static const lean_string_object l_Lake_Hash_fromJson_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "invalid hash: expected hexadecimal string of length 16"};
static const lean_object* l_Lake_Hash_fromJson_x3f___closed__2 = (const lean_object*)&l_Lake_Hash_fromJson_x3f___closed__2_value;
static const lean_ctor_object l_Lake_Hash_fromJson_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Hash_fromJson_x3f___closed__2_value)}};
static const lean_object* l_Lake_Hash_fromJson_x3f___closed__3 = (const lean_object*)&l_Lake_Hash_fromJson_x3f___closed__3_value;
static const lean_string_object l_Lake_Hash_fromJson_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "invalid hash: "};
static const lean_object* l_Lake_Hash_fromJson_x3f___closed__4 = (const lean_object*)&l_Lake_Hash_fromJson_x3f___closed__4_value;
static const lean_string_object l_Lake_Hash_fromJson_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "invalid hash: expected string or number"};
static const lean_object* l_Lake_Hash_fromJson_x3f___closed__5 = (const lean_object*)&l_Lake_Hash_fromJson_x3f___closed__5_value;
static const lean_ctor_object l_Lake_Hash_fromJson_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Hash_fromJson_x3f___closed__5_value)}};
static const lean_object* l_Lake_Hash_fromJson_x3f___closed__6 = (const lean_object*)&l_Lake_Hash_fromJson_x3f___closed__6_value;
LEAN_EXPORT lean_object* l_Lake_Hash_fromJson_x3f(lean_object*);
static const lean_closure_object l_Lake_Hash_instFromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Hash_fromJson_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Hash_instFromJson___closed__0 = (const lean_object*)&l_Lake_Hash_instFromJson___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Hash_instFromJson = (const lean_object*)&l_Lake_Hash_instFromJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_pureHash___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_pureHash___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_pureHash(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_pureHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeHash___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeHash(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lake_instComputeHashIdOfHashable___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashIdOfHashable___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashIdOfHashable___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashIdOfHashable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instComputeHashFilePathIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_computeBinFileHash___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instComputeHashFilePathIO___closed__0 = (const lean_object*)&l_Lake_instComputeHashFilePathIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instComputeHashFilePathIO = (const lean_object*)&l_Lake_instComputeHashFilePathIO___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instCoeTextFilePathFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instCoeTextFilePathFilePath___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instCoeTextFilePathFilePath___closed__0 = (const lean_object*)&l_Lake_instCoeTextFilePathFilePath___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instCoeTextFilePathFilePath = (const lean_object*)&l_Lake_instCoeTextFilePathFilePath___closed__0_value;
static const lean_closure_object l_Lake_instComputeHashTextFilePathIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_computeTextFileHash___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instComputeHashTextFilePathIO___closed__0 = (const lean_object*)&l_Lake_instComputeHashTextFilePathIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instComputeHashTextFilePathIO = (const lean_object*)&l_Lake_instComputeHashTextFilePathIO___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToStringTextFilePath = (const lean_object*)&l_Lake_instCoeTextFilePathFilePath___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_computeFileHash(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_computeFileHash___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__0(uint64_t, lean_object*, uint64_t);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_computeArrayHash___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(187, 6, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* l_Lake_computeArrayHash___redArg___boxed__const__1 = (const lean_object*)&l_Lake_computeArrayHash___redArg___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeArrayHash(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instBEqMTime_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instBEqMTime_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instBEqMTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instBEqMTime_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instBEqMTime___closed__0 = (const lean_object*)&l_Lake_instBEqMTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instBEqMTime = (const lean_object*)&l_Lake_instBEqMTime___closed__0_value;
static lean_once_cell_t l_Lake_MTime_instOfNat___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_MTime_instOfNat___closed__0;
LEAN_EXPORT lean_object* l_Lake_MTime_instOfNat;
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_MTime_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MTime_instRepr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MTime_instRepr___closed__0 = (const lean_object*)&l_Lake_MTime_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MTime_instRepr = (const lean_object*)&l_Lake_MTime_instRepr___closed__0_value;
static const lean_closure_object l_Lake_MTime_instOrd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instOrdSystemTime_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MTime_instOrd___closed__0 = (const lean_object*)&l_Lake_MTime_instOrd___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MTime_instOrd = (const lean_object*)&l_Lake_MTime_instOrd___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MTime_instLT;
LEAN_EXPORT lean_object* l_Lake_MTime_instLE;
LEAN_EXPORT lean_object* l_Lake_MTime_instMin___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instMin___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_MTime_instMin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MTime_instMin___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MTime_instMin___closed__0 = (const lean_object*)&l_Lake_MTime_instMin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MTime_instMin = (const lean_object*)&l_Lake_MTime_instMin___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MTime_instMax___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_instMax___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_MTime_instMax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_MTime_instMax___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_MTime_instMax___closed__0 = (const lean_object*)&l_Lake_MTime_instMax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_MTime_instMax = (const lean_object*)&l_Lake_MTime_instMax___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_MTime_instNilTrace;
LEAN_EXPORT const lean_object* l_Lake_MTime_instMixTrace = (const lean_object*)&l_Lake_MTime_instMax___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getFileMTime(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getFileMTime___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instGetMTimeFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getFileMTime___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instGetMTimeFilePath___closed__0 = (const lean_object*)&l_Lake_instGetMTimeFilePath___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instGetMTimeFilePath = (const lean_object*)&l_Lake_instGetMTimeFilePath___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instGetMTimeTextFilePath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instGetMTimeTextFilePath___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instGetMTimeTextFilePath___closed__0 = (const lean_object*)&l_Lake_instGetMTimeTextFilePath___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instGetMTimeTextFilePath = (const lean_object*)&l_Lake_instGetMTimeTextFilePath___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_instReprBuildTrace_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caption"};
static const lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__0 = (const lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lake_instReprBuildTrace_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__1 = (const lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_instReprBuildTrace_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__2 = (const lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lake_instReprBuildTrace_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__2_value),((lean_object*)&l_Lake_instReprHash_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__3 = (const lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__4;
static const lean_string_object l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2_value;
static const lean_string_object l_Lake_instReprBuildTrace_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inputs"};
static const lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__5 = (const lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lake_instReprBuildTrace_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__5_value)}};
static const lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__6 = (const lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__7;
static const lean_ctor_object l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0_value;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5;
static lean_once_cell_t l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6;
static const lean_ctor_object l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__7_value;
static const lean_string_object l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__8_value;
static const lean_string_object l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__9 = (const lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__9_value;
static const lean_ctor_object l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__9_value)}};
static const lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__10 = (const lean_object*)&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0(lean_object*);
static const lean_string_object l_Lake_instReprBuildTrace_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hash"};
static const lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__8 = (const lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lake_instReprBuildTrace_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__8_value)}};
static const lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__9 = (const lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__10;
static const lean_string_object l_Lake_instReprBuildTrace_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mtime"};
static const lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__11 = (const lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lake_instReprBuildTrace_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__11_value)}};
static const lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__12 = (const lean_object*)&l_Lake_instReprBuildTrace_repr___redArg___closed__12_value;
static lean_once_cell_t l_Lake_instReprBuildTrace_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildTrace_repr___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprBuildTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprBuildTrace_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprBuildTrace___closed__0 = (const lean_object*)&l_Lake_instReprBuildTrace___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprBuildTrace = (const lean_object*)&l_Lake_instReprBuildTrace___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withCaption(lean_object*, lean_object*);
static const lean_array_object l_Lake_BuildTrace_withoutInputs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_BuildTrace_withoutInputs___closed__0 = (const lean_object*)&l_Lake_BuildTrace_withoutInputs___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withoutInputs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_BuildTrace_instCoeHash___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "<hash>"};
static const lean_object* l_Lake_BuildTrace_instCoeHash___lam__0___closed__0 = (const lean_object*)&l_Lake_BuildTrace_instCoeHash___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash___lam__0(uint64_t);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_BuildTrace_instCoeHash___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildTrace_instCoeHash___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_BuildTrace_instCoeHash___closed__0 = (const lean_object*)&l_Lake_BuildTrace_instCoeHash___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_BuildTrace_instCoeHash = (const lean_object*)&l_Lake_BuildTrace_instCoeHash___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofMTime(lean_object*, lean_object*);
static const lean_string_object l_Lake_BuildTrace_instCoeMTime___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "<mtime>"};
static const lean_object* l_Lake_BuildTrace_instCoeMTime___lam__0___closed__0 = (const lean_object*)&l_Lake_BuildTrace_instCoeMTime___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeMTime___lam__0(lean_object*);
static const lean_closure_object l_Lake_BuildTrace_instCoeMTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildTrace_instCoeMTime___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_BuildTrace_instCoeMTime___closed__0 = (const lean_object*)&l_Lake_BuildTrace_instCoeMTime___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_BuildTrace_instCoeMTime = (const lean_object*)&l_Lake_BuildTrace_instCoeMTime___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_nil(lean_object*);
static const lean_string_object l_Lake_BuildTrace_instNilTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<nil>"};
static const lean_object* l_Lake_BuildTrace_instNilTrace___closed__0 = (const lean_object*)&l_Lake_BuildTrace_instNilTrace___closed__0_value;
static lean_once_cell_t l_Lake_BuildTrace_instNilTrace___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_BuildTrace_instNilTrace___closed__1;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instNilTrace;
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_mix(lean_object*, lean_object*);
static const lean_closure_object l_Lake_BuildTrace_instMixTrace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildTrace_mix, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_BuildTrace_instMixTrace___closed__0 = (const lean_object*)&l_Lake_BuildTrace_instMixTrace___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_BuildTrace_instMixTrace = (const lean_object*)&l_Lake_BuildTrace_instMixTrace___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstHash___redArg(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstHash(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstTime___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstTime(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeTrace___redArg(lean_object* v_inst_3_, lean_object* v_inst_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_apply_1(v_inst_3_, v_a_5_);
v___x_7_ = lean_apply_2(v_inst_4_, lean_box(0), v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeTrace(lean_object* v_00_u03b1_8_, lean_object* v_m_9_, lean_object* v_00_u03c4_10_, lean_object* v_n_11_, lean_object* v_inst_12_, lean_object* v_inst_13_, lean_object* v_a_14_){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_apply_1(v_inst_12_, v_a_14_);
v___x_16_ = lean_apply_2(v_inst_13_, lean_box(0), v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___redArg(lean_object* v_inst_17_){
_start:
{
lean_inc(v_inst_17_);
return v_inst_17_;
}
}
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___redArg___boxed(lean_object* v_inst_18_){
_start:
{
lean_object* v_res_19_; 
v_res_19_ = l_Lake_inhabitedOfNilTrace___redArg(v_inst_18_);
lean_dec(v_inst_18_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace(lean_object* v_00_u03b1_20_, lean_object* v_inst_21_){
_start:
{
lean_inc(v_inst_21_);
return v_inst_21_;
}
}
LEAN_EXPORT lean_object* l_Lake_inhabitedOfNilTrace___boxed(lean_object* v_00_u03b1_22_, lean_object* v_inst_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lake_inhabitedOfNilTrace(v_00_u03b1_22_, v_inst_23_);
lean_dec(v_inst_23_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceList___redArg(lean_object* v_inst_25_, lean_object* v_inst_26_, lean_object* v_traces_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_List_foldl___redArg(v_inst_25_, v_inst_26_, v_traces_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceList(lean_object* v_00_u03c4_29_, lean_object* v_inst_30_, lean_object* v_inst_31_, lean_object* v_traces_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_List_foldl___redArg(v_inst_30_, v_inst_31_, v_traces_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___redArg___lam__0(lean_object* v_inst_34_, lean_object* v_x1_35_, lean_object* v_x2_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_apply_2(v_inst_34_, v_x1_35_, v_x2_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceArray___redArg(lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_traces_59_){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; uint8_t v___x_63_; 
v___x_60_ = lean_unsigned_to_nat(0u);
v___x_61_ = lean_array_get_size(v_traces_59_);
v___x_62_ = ((lean_object*)(l_Lake_mixTraceArray___redArg___closed__9));
v___x_63_ = lean_nat_dec_lt(v___x_60_, v___x_61_);
if (v___x_63_ == 0)
{
lean_dec_ref(v_traces_59_);
lean_dec(v_inst_57_);
return v_inst_58_;
}
else
{
lean_object* v___f_64_; uint8_t v___x_65_; 
v___f_64_ = lean_alloc_closure((void*)(l_Lake_mixTraceArray___redArg___lam__0), 3, 1);
lean_closure_set(v___f_64_, 0, v_inst_57_);
v___x_65_ = lean_nat_dec_le(v___x_61_, v___x_61_);
if (v___x_65_ == 0)
{
if (v___x_63_ == 0)
{
lean_dec_ref(v___f_64_);
lean_dec_ref(v_traces_59_);
return v_inst_58_;
}
else
{
size_t v___x_66_; size_t v___x_67_; lean_object* v___x_68_; 
v___x_66_ = ((size_t)0ULL);
v___x_67_ = lean_usize_of_nat(v___x_61_);
v___x_68_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_62_, v___f_64_, v_traces_59_, v___x_66_, v___x_67_, v_inst_58_);
return v___x_68_;
}
}
else
{
size_t v___x_69_; size_t v___x_70_; lean_object* v___x_71_; 
v___x_69_ = ((size_t)0ULL);
v___x_70_ = lean_usize_of_nat(v___x_61_);
v___x_71_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_62_, v___f_64_, v_traces_59_, v___x_69_, v___x_70_, v_inst_58_);
return v___x_71_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_mixTraceArray(lean_object* v_00_u03c4_72_, lean_object* v_inst_73_, lean_object* v_inst_74_, lean_object* v_traces_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lake_mixTraceArray___redArg(v_inst_73_, v_inst_74_, v_traces_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg___lam__0(lean_object* v_inst_77_, lean_object* v_ts_78_, lean_object* v_toPure_79_, lean_object* v_____do__lift_80_){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_apply_2(v_inst_77_, v_ts_78_, v_____do__lift_80_);
v___x_82_ = lean_apply_2(v_toPure_79_, lean_box(0), v___x_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg___lam__1(lean_object* v_inst_83_, lean_object* v_toPure_84_, lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_toBind_87_, lean_object* v_ts_88_, lean_object* v_t_89_){
_start:
{
lean_object* v___f_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___f_90_ = lean_alloc_closure((void*)(l_Lake_computeListTrace___redArg___lam__0), 4, 3);
lean_closure_set(v___f_90_, 0, v_inst_83_);
lean_closure_set(v___f_90_, 1, v_ts_88_);
lean_closure_set(v___f_90_, 2, v_toPure_84_);
v___x_91_ = lean_apply_1(v_inst_85_, v_t_89_);
v___x_92_ = lean_apply_2(v_inst_86_, lean_box(0), v___x_91_);
v___x_93_ = lean_apply_4(v_toBind_87_, lean_box(0), lean_box(0), v___x_92_, v___f_90_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace___redArg(lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v_inst_96_, lean_object* v_inst_97_, lean_object* v_inst_98_, lean_object* v_as_99_){
_start:
{
lean_object* v_toApplicative_100_; lean_object* v_toBind_101_; lean_object* v_toPure_102_; lean_object* v___f_103_; lean_object* v___x_104_; 
v_toApplicative_100_ = lean_ctor_get(v_inst_98_, 0);
v_toBind_101_ = lean_ctor_get(v_inst_98_, 1);
v_toPure_102_ = lean_ctor_get(v_toApplicative_100_, 1);
lean_inc(v_toBind_101_);
lean_inc(v_toPure_102_);
v___f_103_ = lean_alloc_closure((void*)(l_Lake_computeListTrace___redArg___lam__1), 7, 5);
lean_closure_set(v___f_103_, 0, v_inst_94_);
lean_closure_set(v___f_103_, 1, v_toPure_102_);
lean_closure_set(v___f_103_, 2, v_inst_96_);
lean_closure_set(v___f_103_, 3, v_inst_97_);
lean_closure_set(v___f_103_, 4, v_toBind_101_);
v___x_104_ = l_List_foldlM___redArg(v_inst_98_, v___f_103_, v_inst_95_, v_as_99_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeListTrace(lean_object* v_00_u03c4_105_, lean_object* v_00_u03b1_106_, lean_object* v_m_107_, lean_object* v_inst_108_, lean_object* v_inst_109_, lean_object* v_inst_110_, lean_object* v_n_111_, lean_object* v_inst_112_, lean_object* v_inst_113_, lean_object* v_as_114_){
_start:
{
lean_object* v_toApplicative_115_; lean_object* v_toBind_116_; lean_object* v_toPure_117_; lean_object* v___f_118_; lean_object* v___x_119_; 
v_toApplicative_115_ = lean_ctor_get(v_inst_113_, 0);
v_toBind_116_ = lean_ctor_get(v_inst_113_, 1);
v_toPure_117_ = lean_ctor_get(v_toApplicative_115_, 1);
lean_inc(v_toBind_116_);
lean_inc(v_toPure_117_);
v___f_118_ = lean_alloc_closure((void*)(l_Lake_computeListTrace___redArg___lam__1), 7, 5);
lean_closure_set(v___f_118_, 0, v_inst_108_);
lean_closure_set(v___f_118_, 1, v_toPure_117_);
lean_closure_set(v___f_118_, 2, v_inst_110_);
lean_closure_set(v___f_118_, 3, v_inst_112_);
lean_closure_set(v___f_118_, 4, v_toBind_116_);
v___x_119_ = l_List_foldlM___redArg(v_inst_113_, v___f_118_, v_inst_109_, v_as_114_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad___redArg(lean_object* v_inst_121_, lean_object* v_inst_122_, lean_object* v_inst_123_, lean_object* v_inst_124_){
_start:
{
lean_object* v___f_125_; lean_object* v___x_126_; 
v___f_125_ = ((lean_object*)(l_Lake_instComputeTraceListOfMonad___redArg___closed__0));
v___x_126_ = lean_alloc_closure((void*)(l_Lake_computeListTrace), 10, 9);
lean_closure_set(v___x_126_, 0, lean_box(0));
lean_closure_set(v___x_126_, 1, lean_box(0));
lean_closure_set(v___x_126_, 2, lean_box(0));
lean_closure_set(v___x_126_, 3, v_inst_121_);
lean_closure_set(v___x_126_, 4, v_inst_122_);
lean_closure_set(v___x_126_, 5, v_inst_123_);
lean_closure_set(v___x_126_, 6, lean_box(0));
lean_closure_set(v___x_126_, 7, v___f_125_);
lean_closure_set(v___x_126_, 8, v_inst_124_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceListOfMonad(lean_object* v_00_u03c4_127_, lean_object* v_00_u03b1_128_, lean_object* v_m_129_, lean_object* v_inst_130_, lean_object* v_inst_131_, lean_object* v_inst_132_, lean_object* v_inst_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lake_instComputeTraceListOfMonad___redArg(v_inst_130_, v_inst_131_, v_inst_132_, v_inst_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace___redArg(lean_object* v_inst_135_, lean_object* v_inst_136_, lean_object* v_inst_137_, lean_object* v_inst_138_, lean_object* v_inst_139_, lean_object* v_as_140_){
_start:
{
lean_object* v_toApplicative_141_; lean_object* v_toBind_142_; lean_object* v_toPure_143_; lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; 
v_toApplicative_141_ = lean_ctor_get(v_inst_139_, 0);
v_toBind_142_ = lean_ctor_get(v_inst_139_, 1);
v_toPure_143_ = lean_ctor_get(v_toApplicative_141_, 1);
v___x_144_ = lean_unsigned_to_nat(0u);
v___x_145_ = lean_array_get_size(v_as_140_);
v___x_146_ = lean_nat_dec_lt(v___x_144_, v___x_145_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; 
lean_inc(v_toPure_143_);
lean_dec_ref(v_as_140_);
lean_dec_ref(v_inst_139_);
lean_dec(v_inst_138_);
lean_dec(v_inst_137_);
lean_dec(v_inst_135_);
v___x_147_ = lean_apply_2(v_toPure_143_, lean_box(0), v_inst_136_);
return v___x_147_;
}
else
{
lean_object* v___f_148_; uint8_t v___x_149_; 
lean_inc(v_toBind_142_);
lean_inc(v_toPure_143_);
v___f_148_ = lean_alloc_closure((void*)(l_Lake_computeListTrace___redArg___lam__1), 7, 5);
lean_closure_set(v___f_148_, 0, v_inst_135_);
lean_closure_set(v___f_148_, 1, v_toPure_143_);
lean_closure_set(v___f_148_, 2, v_inst_137_);
lean_closure_set(v___f_148_, 3, v_inst_138_);
lean_closure_set(v___f_148_, 4, v_toBind_142_);
v___x_149_ = lean_nat_dec_le(v___x_145_, v___x_145_);
if (v___x_149_ == 0)
{
if (v___x_146_ == 0)
{
lean_object* v___x_150_; 
lean_inc(v_toPure_143_);
lean_dec_ref(v___f_148_);
lean_dec_ref(v_as_140_);
lean_dec_ref(v_inst_139_);
v___x_150_ = lean_apply_2(v_toPure_143_, lean_box(0), v_inst_136_);
return v___x_150_;
}
else
{
size_t v___x_151_; size_t v___x_152_; lean_object* v___x_153_; 
v___x_151_ = ((size_t)0ULL);
v___x_152_ = lean_usize_of_nat(v___x_145_);
v___x_153_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_139_, v___f_148_, v_as_140_, v___x_151_, v___x_152_, v_inst_136_);
return v___x_153_;
}
}
else
{
size_t v___x_154_; size_t v___x_155_; lean_object* v___x_156_; 
v___x_154_ = ((size_t)0ULL);
v___x_155_ = lean_usize_of_nat(v___x_145_);
v___x_156_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_139_, v___f_148_, v_as_140_, v___x_154_, v___x_155_, v_inst_136_);
return v___x_156_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayTrace(lean_object* v_00_u03c4_157_, lean_object* v_00_u03b1_158_, lean_object* v_m_159_, lean_object* v_inst_160_, lean_object* v_inst_161_, lean_object* v_inst_162_, lean_object* v_n_163_, lean_object* v_inst_164_, lean_object* v_inst_165_, lean_object* v_as_166_){
_start:
{
lean_object* v_toApplicative_167_; lean_object* v_toBind_168_; lean_object* v_toPure_169_; lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v___x_172_; 
v_toApplicative_167_ = lean_ctor_get(v_inst_165_, 0);
v_toBind_168_ = lean_ctor_get(v_inst_165_, 1);
v_toPure_169_ = lean_ctor_get(v_toApplicative_167_, 1);
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = lean_array_get_size(v_as_166_);
v___x_172_ = lean_nat_dec_lt(v___x_170_, v___x_171_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
lean_inc(v_toPure_169_);
lean_dec_ref(v_as_166_);
lean_dec_ref(v_inst_165_);
lean_dec(v_inst_164_);
lean_dec(v_inst_162_);
lean_dec(v_inst_160_);
v___x_173_ = lean_apply_2(v_toPure_169_, lean_box(0), v_inst_161_);
return v___x_173_;
}
else
{
lean_object* v___f_174_; uint8_t v___x_175_; 
lean_inc(v_toBind_168_);
lean_inc(v_toPure_169_);
v___f_174_ = lean_alloc_closure((void*)(l_Lake_computeListTrace___redArg___lam__1), 7, 5);
lean_closure_set(v___f_174_, 0, v_inst_160_);
lean_closure_set(v___f_174_, 1, v_toPure_169_);
lean_closure_set(v___f_174_, 2, v_inst_162_);
lean_closure_set(v___f_174_, 3, v_inst_164_);
lean_closure_set(v___f_174_, 4, v_toBind_168_);
v___x_175_ = lean_nat_dec_le(v___x_171_, v___x_171_);
if (v___x_175_ == 0)
{
if (v___x_172_ == 0)
{
lean_object* v___x_176_; 
lean_inc(v_toPure_169_);
lean_dec_ref(v___f_174_);
lean_dec_ref(v_as_166_);
lean_dec_ref(v_inst_165_);
v___x_176_ = lean_apply_2(v_toPure_169_, lean_box(0), v_inst_161_);
return v___x_176_;
}
else
{
size_t v___x_177_; size_t v___x_178_; lean_object* v___x_179_; 
v___x_177_ = ((size_t)0ULL);
v___x_178_ = lean_usize_of_nat(v___x_171_);
v___x_179_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_165_, v___f_174_, v_as_166_, v___x_177_, v___x_178_, v_inst_161_);
return v___x_179_;
}
}
else
{
size_t v___x_180_; size_t v___x_181_; lean_object* v___x_182_; 
v___x_180_ = ((size_t)0ULL);
v___x_181_ = lean_usize_of_nat(v___x_171_);
v___x_182_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_165_, v___f_174_, v_as_166_, v___x_180_, v___x_181_, v_inst_161_);
return v___x_182_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad___redArg(lean_object* v_inst_183_, lean_object* v_inst_184_, lean_object* v_inst_185_, lean_object* v_inst_186_){
_start:
{
lean_object* v___f_187_; lean_object* v___x_188_; 
v___f_187_ = ((lean_object*)(l_Lake_instComputeTraceListOfMonad___redArg___closed__0));
v___x_188_ = lean_alloc_closure((void*)(l_Lake_computeArrayTrace), 10, 9);
lean_closure_set(v___x_188_, 0, lean_box(0));
lean_closure_set(v___x_188_, 1, lean_box(0));
lean_closure_set(v___x_188_, 2, lean_box(0));
lean_closure_set(v___x_188_, 3, v_inst_183_);
lean_closure_set(v___x_188_, 4, v_inst_184_);
lean_closure_set(v___x_188_, 5, v_inst_185_);
lean_closure_set(v___x_188_, 6, lean_box(0));
lean_closure_set(v___x_188_, 7, v___f_187_);
lean_closure_set(v___x_188_, 8, v_inst_186_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceArrayOfMonad(lean_object* v_00_u03c4_189_, lean_object* v_00_u03b1_190_, lean_object* v_m_191_, lean_object* v_inst_192_, lean_object* v_inst_193_, lean_object* v_inst_194_, lean_object* v_inst_195_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_Lake_instComputeTraceArrayOfMonad___redArg(v_inst_192_, v_inst_193_, v_inst_194_, v_inst_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_instReprHash_repr_spec__0(lean_object* v_a_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_nat_to_int(v_a_197_);
return v___x_198_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(7u);
v___x_213_ = lean_nat_to_int(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = ((lean_object*)(l_Lake_instReprHash_repr___redArg___closed__0));
v___x_216_ = lean_string_length(v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_l_Lake_instReprHash_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__9, &l_Lake_instReprHash_repr___redArg___closed__9_once, _init_l_Lake_instReprHash_repr___redArg___closed__9);
v___x_218_ = lean_nat_to_int(v___x_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___redArg(uint64_t v_x_223_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_224_ = ((lean_object*)(l_Lake_instReprHash_repr___redArg___closed__6));
v___x_225_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__7, &l_Lake_instReprHash_repr___redArg___closed__7_once, _init_l_Lake_instReprHash_repr___redArg___closed__7);
v___x_226_ = lean_uint64_to_nat(v_x_223_);
v___x_227_ = l_Nat_reprFast(v___x_226_);
v___x_228_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
v___x_229_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_225_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = 0;
v___x_231_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set_uint8(v___x_231_, sizeof(void*)*1, v___x_230_);
v___x_232_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_224_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__10, &l_Lake_instReprHash_repr___redArg___closed__10_once, _init_l_Lake_instReprHash_repr___redArg___closed__10);
v___x_234_ = ((lean_object*)(l_Lake_instReprHash_repr___redArg___closed__11));
v___x_235_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
lean_ctor_set(v___x_235_, 1, v___x_232_);
v___x_236_ = ((lean_object*)(l_Lake_instReprHash_repr___redArg___closed__12));
v___x_237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_233_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*1, v___x_230_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___redArg___boxed(lean_object* v_x_240_){
_start:
{
uint64_t v_x_147__boxed_241_; lean_object* v_res_242_; 
v_x_147__boxed_241_ = lean_unbox_uint64(v_x_240_);
lean_dec_ref(v_x_240_);
v_res_242_ = l_Lake_instReprHash_repr___redArg(v_x_147__boxed_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr(uint64_t v_x_243_, lean_object* v_prec_244_){
_start:
{
lean_object* v___x_245_; 
v___x_245_ = l_Lake_instReprHash_repr___redArg(v_x_243_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprHash_repr___boxed(lean_object* v_x_246_, lean_object* v_prec_247_){
_start:
{
uint64_t v_x_206__boxed_248_; lean_object* v_res_249_; 
v_x_206__boxed_248_ = lean_unbox_uint64(v_x_246_);
lean_dec_ref(v_x_246_);
v_res_249_ = l_Lake_instReprHash_repr(v_x_206__boxed_248_, v_prec_247_);
lean_dec(v_prec_247_);
return v_res_249_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqHash_decEq(uint64_t v_x_252_, uint64_t v_x_253_){
_start:
{
uint8_t v___x_254_; 
v___x_254_ = lean_uint64_dec_eq(v_x_252_, v_x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqHash_decEq___boxed(lean_object* v_x_255_, lean_object* v_x_256_){
_start:
{
uint64_t v_x_31__boxed_257_; uint64_t v_x_32__boxed_258_; uint8_t v_res_259_; lean_object* v_r_260_; 
v_x_31__boxed_257_ = lean_unbox_uint64(v_x_255_);
lean_dec_ref(v_x_255_);
v_x_32__boxed_258_ = lean_unbox_uint64(v_x_256_);
lean_dec_ref(v_x_256_);
v_res_259_ = l_Lake_instDecidableEqHash_decEq(v_x_31__boxed_257_, v_x_32__boxed_258_);
v_r_260_ = lean_box(v_res_259_);
return v_r_260_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqHash(uint64_t v_x_261_, uint64_t v_x_262_){
_start:
{
uint8_t v___x_263_; 
v___x_263_ = lean_uint64_dec_eq(v_x_261_, v_x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqHash___boxed(lean_object* v_x_264_, lean_object* v_x_265_){
_start:
{
uint64_t v_x_6__boxed_266_; uint64_t v_x_7__boxed_267_; uint8_t v_res_268_; lean_object* v_r_269_; 
v_x_6__boxed_266_ = lean_unbox_uint64(v_x_264_);
lean_dec_ref(v_x_264_);
v_x_7__boxed_267_ = lean_unbox_uint64(v_x_265_);
lean_dec_ref(v_x_265_);
v_res_268_ = l_Lake_instDecidableEqHash(v_x_6__boxed_266_, v_x_7__boxed_267_);
v_r_269_ = lean_box(v_res_268_);
return v_r_269_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_instHashable___lam__0(uint64_t v_self_270_){
_start:
{
return v_self_270_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_instHashable___lam__0___boxed(lean_object* v_self_271_){
_start:
{
uint64_t v_self_boxed_272_; uint64_t v_res_273_; lean_object* v_r_274_; 
v_self_boxed_272_ = lean_unbox_uint64(v_self_271_);
lean_dec_ref(v_self_271_);
v_res_273_ = l_Lake_Hash_instHashable___lam__0(v_self_boxed_272_);
v_r_274_ = lean_box_uint64(v_res_273_);
return v_r_274_;
}
}
static uint64_t _init_l_Lake_Hash_nil(void){
_start:
{
uint64_t v___x_277_; 
v___x_277_ = 1723ULL;
return v___x_277_;
}
}
static uint64_t _init_l_Lake_Hash_instNilTrace(void){
_start:
{
uint64_t v___x_278_; 
v___x_278_ = 1723ULL;
return v___x_278_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofNat(lean_object* v_n_279_){
_start:
{
uint64_t v___x_280_; 
v___x_280_ = lean_uint64_of_nat(v_n_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofNat___boxed(lean_object* v_n_281_){
_start:
{
uint64_t v_res_282_; lean_object* v_r_283_; 
v_res_282_ = l_Lake_Hash_ofNat(v_n_281_);
lean_dec(v_n_281_);
v_r_283_ = lean_box_uint64(v_res_282_);
return v_r_283_;
}
}
static lean_object* _init_l_Lake_Hash_ofJsonNumber_x3f___closed__2(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_unsigned_to_nat(0u);
v___x_288_ = lean_nat_to_int(v___x_287_);
return v___x_288_;
}
}
static lean_object* _init_l_Lake_Hash_ofJsonNumber_x3f___closed__3(void){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = lean_cstr_to_nat("18446744073709551616");
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofJsonNumber_x3f(lean_object* v_n_293_){
_start:
{
lean_object* v_mantissa_296_; lean_object* v_exponent_297_; lean_object* v___x_298_; uint8_t v___x_299_; 
v_mantissa_296_ = lean_ctor_get(v_n_293_, 0);
v_exponent_297_ = lean_ctor_get(v_n_293_, 1);
v___x_298_ = lean_unsigned_to_nat(0u);
v___x_299_ = lean_nat_dec_eq(v_exponent_297_, v___x_298_);
if (v___x_299_ == 0)
{
goto v___jp_294_;
}
else
{
lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_300_ = lean_obj_once(&l_Lake_Hash_ofJsonNumber_x3f___closed__2, &l_Lake_Hash_ofJsonNumber_x3f___closed__2_once, _init_l_Lake_Hash_ofJsonNumber_x3f___closed__2);
v___x_301_ = lean_int_dec_le(v___x_300_, v_mantissa_296_);
if (v___x_301_ == 0)
{
goto v___jp_294_;
}
else
{
lean_object* v___x_302_; lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_302_ = l_Int_toNat(v_mantissa_296_);
v___x_303_ = lean_obj_once(&l_Lake_Hash_ofJsonNumber_x3f___closed__3, &l_Lake_Hash_ofJsonNumber_x3f___closed__3_once, _init_l_Lake_Hash_ofJsonNumber_x3f___closed__3);
v___x_304_ = lean_nat_dec_lt(v___x_302_, v___x_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; 
lean_dec(v___x_302_);
v___x_305_ = ((lean_object*)(l_Lake_Hash_ofJsonNumber_x3f___closed__5));
return v___x_305_;
}
else
{
uint64_t v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_306_ = lean_uint64_of_nat(v___x_302_);
lean_dec(v___x_302_);
v___x_307_ = lean_box_uint64(v___x_306_);
v___x_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
return v___x_308_;
}
}
}
v___jp_294_:
{
lean_object* v___x_295_; 
v___x_295_ = ((lean_object*)(l_Lake_Hash_ofJsonNumber_x3f___closed__1));
return v___x_295_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofJsonNumber_x3f___boxed(lean_object* v_n_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_309_);
lean_dec_ref(v_n_309_);
return v_res_310_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg(lean_object* v_s_311_, lean_object* v_n_312_, lean_object* v_j_313_, uint64_t v_a_314_){
_start:
{
lean_object* v_zero_315_; uint8_t v_isZero_316_; 
v_zero_315_ = lean_unsigned_to_nat(0u);
v_isZero_316_ = lean_nat_dec_eq(v_j_313_, v_zero_315_);
if (v_isZero_316_ == 1)
{
lean_dec(v_j_313_);
return v_a_314_;
}
else
{
lean_object* v_one_317_; lean_object* v_n_318_; lean_object* v___x_319_; uint8_t v_c_320_; uint8_t v___x_321_; uint8_t v___x_322_; 
v_one_317_ = lean_unsigned_to_nat(1u);
v_n_318_ = lean_nat_sub(v_j_313_, v_one_317_);
v___x_319_ = lean_nat_sub(v_n_312_, v_j_313_);
lean_dec(v_j_313_);
v_c_320_ = lean_string_get_byte_fast(v_s_311_, v___x_319_);
v___x_321_ = 57;
v___x_322_ = lean_uint8_dec_le(v_c_320_, v___x_321_);
if (v___x_322_ == 0)
{
uint8_t v___x_323_; uint8_t v___x_324_; 
v___x_323_ = 97;
v___x_324_ = lean_uint8_dec_le(v___x_323_, v_c_320_);
if (v___x_324_ == 0)
{
uint64_t v___x_325_; uint64_t v___x_326_; uint8_t v___x_327_; uint8_t v___x_328_; uint64_t v___x_329_; uint64_t v___x_330_; 
v___x_325_ = 4ULL;
v___x_326_ = lean_uint64_shift_left(v_a_314_, v___x_325_);
v___x_327_ = 55;
v___x_328_ = lean_uint8_sub(v_c_320_, v___x_327_);
v___x_329_ = lean_uint8_to_uint64(v___x_328_);
v___x_330_ = lean_uint64_add(v___x_326_, v___x_329_);
v_j_313_ = v_n_318_;
v_a_314_ = v___x_330_;
goto _start;
}
else
{
uint64_t v___x_332_; uint64_t v___x_333_; uint8_t v___x_334_; uint8_t v___x_335_; uint64_t v___x_336_; uint64_t v___x_337_; 
v___x_332_ = 4ULL;
v___x_333_ = lean_uint64_shift_left(v_a_314_, v___x_332_);
v___x_334_ = 87;
v___x_335_ = lean_uint8_sub(v_c_320_, v___x_334_);
v___x_336_ = lean_uint8_to_uint64(v___x_335_);
v___x_337_ = lean_uint64_add(v___x_333_, v___x_336_);
v_j_313_ = v_n_318_;
v_a_314_ = v___x_337_;
goto _start;
}
}
else
{
uint64_t v___x_339_; uint64_t v___x_340_; uint8_t v___x_341_; uint8_t v___x_342_; uint64_t v___x_343_; uint64_t v___x_344_; 
v___x_339_ = 4ULL;
v___x_340_ = lean_uint64_shift_left(v_a_314_, v___x_339_);
v___x_341_ = 48;
v___x_342_ = lean_uint8_sub(v_c_320_, v___x_341_);
v___x_343_ = lean_uint8_to_uint64(v___x_342_);
v___x_344_ = lean_uint64_add(v___x_340_, v___x_343_);
v_j_313_ = v_n_318_;
v_a_314_ = v___x_344_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg___boxed(lean_object* v_s_346_, lean_object* v_n_347_, lean_object* v_j_348_, lean_object* v_a_349_){
_start:
{
uint64_t v_a_246__boxed_350_; uint64_t v_res_351_; lean_object* v_r_352_; 
v_a_246__boxed_350_ = lean_unbox_uint64(v_a_349_);
lean_dec_ref(v_a_349_);
v_res_351_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg(v_s_346_, v_n_347_, v_j_348_, v_a_246__boxed_350_);
lean_dec(v_n_347_);
lean_dec_ref(v_s_346_);
v_r_352_ = lean_box_uint64(v_res_351_);
return v_r_352_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofHex(lean_object* v_s_353_){
_start:
{
lean_object* v___x_354_; uint64_t v___x_355_; uint64_t v___x_356_; 
v___x_354_ = lean_string_utf8_byte_size(v_s_353_);
v___x_355_ = 0ULL;
v___x_356_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg(v_s_353_, v___x_354_, v___x_354_, v___x_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex___boxed(lean_object* v_s_357_){
_start:
{
uint64_t v_res_358_; lean_object* v_r_359_; 
v_res_358_ = l_Lake_Hash_ofHex(v_s_357_);
lean_dec_ref(v_s_357_);
v_r_359_ = lean_box_uint64(v_res_358_);
return v_r_359_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0(lean_object* v_s_360_, lean_object* v_n_361_, lean_object* v_j_362_, lean_object* v_a_363_, uint64_t v_a_364_){
_start:
{
uint64_t v___x_365_; 
v___x_365_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___redArg(v_s_360_, v_n_361_, v_j_362_, v_a_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0___boxed(lean_object* v_s_366_, lean_object* v_n_367_, lean_object* v_j_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
uint64_t v_a_310__boxed_371_; uint64_t v_res_372_; lean_object* v_r_373_; 
v_a_310__boxed_371_ = lean_unbox_uint64(v_a_370_);
lean_dec_ref(v_a_370_);
v_res_372_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lake_Hash_ofHex_spec__0(v_s_366_, v_n_367_, v_j_368_, v_a_369_, v_a_310__boxed_371_);
lean_dec(v_n_367_);
lean_dec_ref(v_s_366_);
v_r_373_ = lean_box_uint64(v_res_372_);
return v_r_373_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex_x3f(lean_object* v_s_374_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_375_ = lean_string_utf8_byte_size(v_s_374_);
v___x_376_ = lean_unsigned_to_nat(16u);
v___x_377_ = lean_nat_dec_eq(v___x_375_, v___x_376_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; 
v___x_378_ = lean_box(0);
return v___x_378_;
}
else
{
uint8_t v___x_379_; 
v___x_379_ = l_Lake_isHex(v_s_374_);
if (v___x_379_ == 0)
{
lean_object* v___x_380_; 
v___x_380_ = lean_box(0);
return v___x_380_;
}
else
{
uint64_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_381_ = l_Lake_Hash_ofHex(v_s_374_);
v___x_382_ = lean_box_uint64(v___x_381_);
v___x_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
return v___x_383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofHex_x3f___boxed(lean_object* v_s_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lake_Hash_ofHex_x3f(v_s_384_);
lean_dec_ref(v_s_384_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_hex(uint64_t v_self_386_){
_start:
{
lean_object* v___x_387_; 
v___x_387_ = l_Lake_lowerHexUInt64(v_self_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_hex___boxed(lean_object* v_self_388_){
_start:
{
uint64_t v_self_boxed_389_; lean_object* v_res_390_; 
v_self_boxed_389_ = lean_unbox_uint64(v_self_388_);
lean_dec_ref(v_self_388_);
v_res_390_ = l_Lake_Hash_hex(v_self_boxed_389_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofDecimal_x3f(lean_object* v_s_391_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_392_ = lean_unsigned_to_nat(0u);
v___x_393_ = lean_string_utf8_byte_size(v_s_391_);
v___x_394_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_394_, 0, v_s_391_);
lean_ctor_set(v___x_394_, 1, v___x_392_);
lean_ctor_set(v___x_394_, 2, v___x_393_);
v___x_395_ = l_String_Slice_toNat_x3f(v___x_394_);
lean_dec_ref_known(v___x_394_, 3);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v___x_396_; 
v___x_396_ = lean_box(0);
return v___x_396_;
}
else
{
lean_object* v_val_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_406_; 
v_val_397_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_406_ == 0)
{
v___x_399_ = v___x_395_;
v_isShared_400_ = v_isSharedCheck_406_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_val_397_);
lean_dec(v___x_395_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_406_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
uint64_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_404_; 
v___x_401_ = lean_uint64_of_nat(v_val_397_);
lean_dec(v_val_397_);
v___x_402_ = lean_box_uint64(v___x_401_);
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 0, v___x_402_);
v___x_404_ = v___x_399_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v___x_402_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f(lean_object* v_s_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lake_Hash_ofHex_x3f(v_s_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofString_x3f___boxed(lean_object* v_s_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lake_Hash_ofString_x3f(v_s_409_);
lean_dec_ref(v_s_409_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f(lean_object* v_hashFile_411_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_IO_FS_readFile(v_hashFile_411_);
if (lean_obj_tag(v___x_413_) == 0)
{
lean_object* v_a_414_; lean_object* v___x_415_; 
v_a_414_ = lean_ctor_get(v___x_413_, 0);
lean_inc(v_a_414_);
lean_dec_ref_known(v___x_413_, 1);
v___x_415_ = l_Lake_Hash_ofHex_x3f(v_a_414_);
lean_dec(v_a_414_);
return v___x_415_;
}
else
{
lean_object* v___x_416_; 
lean_dec_ref_known(v___x_413_, 1);
v___x_416_ = lean_box(0);
return v___x_416_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_load_x3f___boxed(lean_object* v_hashFile_417_, lean_object* v___y_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lake_Hash_load_x3f(v_hashFile_417_);
lean_dec_ref(v_hashFile_417_);
return v_res_419_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_mix(uint64_t v_h1_420_, uint64_t v_h2_421_){
_start:
{
uint64_t v___x_422_; 
v___x_422_ = lean_uint64_mix_hash(v_h1_420_, v_h2_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_mix___boxed(lean_object* v_h1_423_, lean_object* v_h2_424_){
_start:
{
uint64_t v_h1_boxed_425_; uint64_t v_h2_boxed_426_; uint64_t v_res_427_; lean_object* v_r_428_; 
v_h1_boxed_425_ = lean_unbox_uint64(v_h1_423_);
lean_dec_ref(v_h1_423_);
v_h2_boxed_426_ = lean_unbox_uint64(v_h2_424_);
lean_dec_ref(v_h2_424_);
v_res_427_ = l_Lake_Hash_mix(v_h1_boxed_425_, v_h2_boxed_426_);
v_r_428_ = lean_box_uint64(v_res_427_);
return v_r_428_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toString(uint64_t v_self_431_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lake_lowerHexUInt64(v_self_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toString___boxed(lean_object* v_self_433_){
_start:
{
uint64_t v_self_boxed_434_; lean_object* v_res_435_; 
v_self_boxed_434_ = lean_unbox_uint64(v_self_433_);
lean_dec_ref(v_self_433_);
v_res_435_ = l_Lake_Hash_toString(v_self_boxed_434_);
return v_res_435_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofHashable___redArg(lean_object* v_inst_438_, lean_object* v_a_439_){
_start:
{
uint64_t v___x_440_; lean_object* v___x_441_; uint64_t v___x_442_; uint64_t v___x_443_; 
v___x_440_ = 1723ULL;
v___x_441_ = lean_apply_1(v_inst_438_, v_a_439_);
v___x_442_ = lean_unbox_uint64(v___x_441_);
lean_dec_ref(v___x_441_);
v___x_443_ = lean_uint64_mix_hash(v___x_440_, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofHashable___redArg___boxed(lean_object* v_inst_444_, lean_object* v_a_445_){
_start:
{
uint64_t v_res_446_; lean_object* v_r_447_; 
v_res_446_ = l_Lake_Hash_ofHashable___redArg(v_inst_444_, v_a_445_);
v_r_447_ = lean_box_uint64(v_res_446_);
return v_r_447_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofHashable(lean_object* v_00_u03b1_448_, lean_object* v_inst_449_, lean_object* v_a_450_){
_start:
{
uint64_t v___x_451_; lean_object* v___x_452_; uint64_t v___x_453_; uint64_t v___x_454_; 
v___x_451_ = 1723ULL;
v___x_452_ = lean_apply_1(v_inst_449_, v_a_450_);
v___x_453_ = lean_unbox_uint64(v___x_452_);
lean_dec_ref(v___x_452_);
v___x_454_ = lean_uint64_mix_hash(v___x_451_, v___x_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofHashable___boxed(lean_object* v_00_u03b1_455_, lean_object* v_inst_456_, lean_object* v_a_457_){
_start:
{
uint64_t v_res_458_; lean_object* v_r_459_; 
v_res_458_ = l_Lake_Hash_ofHashable(v_00_u03b1_455_, v_inst_456_, v_a_457_);
v_r_459_ = lean_box_uint64(v_res_458_);
return v_r_459_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofString(lean_object* v_str_460_){
_start:
{
uint64_t v___x_461_; uint64_t v___x_462_; uint64_t v___x_463_; 
v___x_461_ = 1723ULL;
v___x_462_ = lean_string_hash(v_str_460_);
v___x_463_ = lean_uint64_mix_hash(v___x_461_, v___x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofString___boxed(lean_object* v_str_464_){
_start:
{
uint64_t v_res_465_; lean_object* v_r_466_; 
v_res_465_ = l_Lake_Hash_ofString(v_str_464_);
lean_dec_ref(v_str_464_);
v_r_466_ = lean_box_uint64(v_res_465_);
return v_r_466_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofText(lean_object* v_str_467_){
_start:
{
lean_object* v___x_468_; uint64_t v___x_469_; uint64_t v___x_470_; uint64_t v___x_471_; 
v___x_468_ = l_String_crlfToLf(v_str_467_);
v___x_469_ = 1723ULL;
v___x_470_ = lean_string_hash(v___x_468_);
lean_dec_ref(v___x_468_);
v___x_471_ = lean_uint64_mix_hash(v___x_469_, v___x_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofText___boxed(lean_object* v_str_472_){
_start:
{
uint64_t v_res_473_; lean_object* v_r_474_; 
v_res_473_ = l_Lake_Hash_ofText(v_str_472_);
lean_dec_ref(v_str_472_);
v_r_474_ = lean_box_uint64(v_res_473_);
return v_r_474_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofByteArray(lean_object* v_bytes_475_){
_start:
{
uint64_t v___x_476_; uint64_t v___x_477_; uint64_t v___x_478_; 
v___x_476_ = 1723ULL;
v___x_477_ = lean_byte_array_hash(v_bytes_475_);
v___x_478_ = lean_uint64_mix_hash(v___x_476_, v___x_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofByteArray___boxed(lean_object* v_bytes_479_){
_start:
{
uint64_t v_res_480_; lean_object* v_r_481_; 
v_res_480_ = l_Lake_Hash_ofByteArray(v_bytes_479_);
lean_dec_ref(v_bytes_479_);
v_r_481_ = lean_box_uint64(v_res_480_);
return v_r_481_;
}
}
static uint64_t _init_l_Lake_Hash_ofBool___closed__0(void){
_start:
{
uint64_t v___x_482_; uint64_t v___x_483_; uint64_t v___x_484_; 
v___x_482_ = 13ULL;
v___x_483_ = 1723ULL;
v___x_484_ = lean_uint64_mix_hash(v___x_483_, v___x_482_);
return v___x_484_;
}
}
static uint64_t _init_l_Lake_Hash_ofBool___closed__1(void){
_start:
{
uint64_t v___x_485_; uint64_t v___x_486_; uint64_t v___x_487_; 
v___x_485_ = 11ULL;
v___x_486_ = 1723ULL;
v___x_487_ = lean_uint64_mix_hash(v___x_486_, v___x_485_);
return v___x_487_;
}
}
LEAN_EXPORT uint64_t l_Lake_Hash_ofBool(uint8_t v_b_488_){
_start:
{
if (v_b_488_ == 0)
{
uint64_t v___x_489_; 
v___x_489_ = lean_uint64_once(&l_Lake_Hash_ofBool___closed__0, &l_Lake_Hash_ofBool___closed__0_once, _init_l_Lake_Hash_ofBool___closed__0);
return v___x_489_;
}
else
{
uint64_t v___x_490_; 
v___x_490_ = lean_uint64_once(&l_Lake_Hash_ofBool___closed__1, &l_Lake_Hash_ofBool___closed__1_once, _init_l_Lake_Hash_ofBool___closed__1);
return v___x_490_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_ofBool___boxed(lean_object* v_b_491_){
_start:
{
uint8_t v_b_boxed_492_; uint64_t v_res_493_; lean_object* v_r_494_; 
v_b_boxed_492_ = lean_unbox(v_b_491_);
v_res_493_ = l_Lake_Hash_ofBool(v_b_boxed_492_);
v_r_494_ = lean_box_uint64(v_res_493_);
return v_r_494_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toJson(uint64_t v_self_495_){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_496_ = l_Lake_lowerHexUInt64(v_self_495_);
v___x_497_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_toJson___boxed(lean_object* v_self_498_){
_start:
{
uint64_t v_self_boxed_499_; lean_object* v_res_500_; 
v_self_boxed_499_ = lean_unbox_uint64(v_self_498_);
lean_dec_ref(v_self_498_);
v_res_500_ = l_Lake_Hash_toJson(v_self_boxed_499_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_Lake_Hash_fromJson_x3f(lean_object* v_json_513_){
_start:
{
switch(lean_obj_tag(v_json_513_))
{
case 3:
{
lean_object* v_s_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_529_; 
v_s_514_ = lean_ctor_get(v_json_513_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v_json_513_);
if (v_isSharedCheck_529_ == 0)
{
v___x_516_ = v_json_513_;
v_isShared_517_ = v_isSharedCheck_529_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_s_514_);
lean_dec(v_json_513_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_529_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
uint8_t v___x_518_; 
v___x_518_ = l_Lake_isHex(v_s_514_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; 
lean_del_object(v___x_516_);
lean_dec_ref(v_s_514_);
v___x_519_ = ((lean_object*)(l_Lake_Hash_fromJson_x3f___closed__1));
return v___x_519_;
}
else
{
lean_object* v___x_520_; lean_object* v___x_521_; uint8_t v___x_522_; 
v___x_520_ = lean_string_utf8_byte_size(v_s_514_);
v___x_521_ = lean_unsigned_to_nat(16u);
v___x_522_ = lean_nat_dec_eq(v___x_520_, v___x_521_);
if (v___x_522_ == 0)
{
lean_object* v___x_523_; 
lean_del_object(v___x_516_);
lean_dec_ref(v_s_514_);
v___x_523_ = ((lean_object*)(l_Lake_Hash_fromJson_x3f___closed__3));
return v___x_523_;
}
else
{
uint64_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
v___x_524_ = l_Lake_Hash_ofHex(v_s_514_);
lean_dec_ref(v_s_514_);
v___x_525_ = lean_box_uint64(v___x_524_);
if (v_isShared_517_ == 0)
{
lean_ctor_set_tag(v___x_516_, 1);
lean_ctor_set(v___x_516_, 0, v___x_525_);
v___x_527_ = v___x_516_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v___x_525_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
}
case 2:
{
lean_object* v_n_530_; lean_object* v___x_531_; 
v_n_530_ = lean_ctor_get(v_json_513_, 0);
lean_inc_ref(v_n_530_);
lean_dec_ref_known(v_json_513_, 1);
v___x_531_ = l_Lake_Hash_ofJsonNumber_x3f(v_n_530_);
lean_dec_ref(v_n_530_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_541_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_541_ == 0)
{
v___x_534_ = v___x_531_;
v_isShared_535_ = v_isSharedCheck_541_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_541_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_536_ = ((lean_object*)(l_Lake_Hash_fromJson_x3f___closed__4));
v___x_537_ = lean_string_append(v___x_536_, v_a_532_);
lean_dec(v_a_532_);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v___x_537_);
v___x_539_ = v___x_534_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v___x_537_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
else
{
return v___x_531_;
}
}
default: 
{
lean_object* v___x_542_; 
lean_dec(v_json_513_);
v___x_542_ = ((lean_object*)(l_Lake_Hash_fromJson_x3f___closed__6));
return v___x_542_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___redArg(lean_object* v_inst_545_){
_start:
{
lean_inc(v_inst_545_);
return v_inst_545_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___redArg___boxed(lean_object* v_inst_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lake_instComputeTraceHashOfComputeHash___redArg(v_inst_546_);
lean_dec(v_inst_546_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash(lean_object* v_00_u03b1_548_, lean_object* v_m_549_, lean_object* v_inst_550_){
_start:
{
lean_inc(v_inst_550_);
return v_inst_550_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeTraceHashOfComputeHash___boxed(lean_object* v_00_u03b1_551_, lean_object* v_m_552_, lean_object* v_inst_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Lake_instComputeTraceHashOfComputeHash(v_00_u03b1_551_, v_m_552_, v_inst_553_);
lean_dec(v_inst_553_);
return v_res_554_;
}
}
LEAN_EXPORT uint64_t l_Lake_pureHash___redArg(lean_object* v_inst_555_, lean_object* v_a_556_){
_start:
{
lean_object* v___x_557_; uint64_t v___x_558_; 
v___x_557_ = lean_apply_1(v_inst_555_, v_a_556_);
v___x_558_ = lean_unbox_uint64(v___x_557_);
lean_dec_ref(v___x_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lake_pureHash___redArg___boxed(lean_object* v_inst_559_, lean_object* v_a_560_){
_start:
{
uint64_t v_res_561_; lean_object* v_r_562_; 
v_res_561_ = l_Lake_pureHash___redArg(v_inst_559_, v_a_560_);
v_r_562_ = lean_box_uint64(v_res_561_);
return v_r_562_;
}
}
LEAN_EXPORT uint64_t l_Lake_pureHash(lean_object* v_00_u03b1_563_, lean_object* v_inst_564_, lean_object* v_a_565_){
_start:
{
lean_object* v___x_566_; uint64_t v___x_567_; 
v___x_566_ = lean_apply_1(v_inst_564_, v_a_565_);
v___x_567_ = lean_unbox_uint64(v___x_566_);
lean_dec_ref(v___x_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lake_pureHash___boxed(lean_object* v_00_u03b1_568_, lean_object* v_inst_569_, lean_object* v_a_570_){
_start:
{
uint64_t v_res_571_; lean_object* v_r_572_; 
v_res_571_ = l_Lake_pureHash(v_00_u03b1_568_, v_inst_569_, v_a_570_);
v_r_572_ = lean_box_uint64(v_res_571_);
return v_r_572_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeHash___redArg(lean_object* v_inst_573_, lean_object* v_inst_574_, lean_object* v_a_575_){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = lean_apply_1(v_inst_573_, v_a_575_);
v___x_577_ = lean_apply_2(v_inst_574_, lean_box(0), v___x_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeHash(lean_object* v_00_u03b1_578_, lean_object* v_m_579_, lean_object* v_n_580_, lean_object* v_inst_581_, lean_object* v_inst_582_, lean_object* v_a_583_){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = lean_apply_1(v_inst_581_, v_a_583_);
v___x_585_ = lean_apply_2(v_inst_582_, lean_box(0), v___x_584_);
return v___x_585_;
}
}
LEAN_EXPORT uint64_t l_Lake_instComputeHashIdOfHashable___redArg___lam__0(lean_object* v_inst_586_, lean_object* v_a_587_){
_start:
{
uint64_t v___x_588_; lean_object* v___x_589_; uint64_t v___x_590_; uint64_t v___x_591_; 
v___x_588_ = 1723ULL;
v___x_589_ = lean_apply_1(v_inst_586_, v_a_587_);
v___x_590_ = lean_unbox_uint64(v___x_589_);
lean_dec_ref(v___x_589_);
v___x_591_ = lean_uint64_mix_hash(v___x_588_, v___x_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashIdOfHashable___redArg___lam__0___boxed(lean_object* v_inst_592_, lean_object* v_a_593_){
_start:
{
uint64_t v_res_594_; lean_object* v_r_595_; 
v_res_594_ = l_Lake_instComputeHashIdOfHashable___redArg___lam__0(v_inst_592_, v_a_593_);
v_r_595_ = lean_box_uint64(v_res_594_);
return v_r_595_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashIdOfHashable___redArg(lean_object* v_inst_596_){
_start:
{
lean_object* v___f_597_; 
v___f_597_ = lean_alloc_closure((void*)(l_Lake_instComputeHashIdOfHashable___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_597_, 0, v_inst_596_);
return v___f_597_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashIdOfHashable(lean_object* v_00_u03b1_598_, lean_object* v_inst_599_){
_start:
{
lean_object* v___f_600_; 
v___f_600_ = lean_alloc_closure((void*)(l_Lake_instComputeHashIdOfHashable___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_600_, 0, v_inst_599_);
return v___f_600_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash(lean_object* v_file_601_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_IO_FS_readBinFile(v_file_601_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_615_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_615_ == 0)
{
v___x_606_ = v___x_603_;
v_isShared_607_ = v_isSharedCheck_615_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_603_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_615_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
uint64_t v___x_608_; uint64_t v___x_609_; uint64_t v___x_610_; lean_object* v___x_611_; lean_object* v___x_613_; 
v___x_608_ = 1723ULL;
v___x_609_ = lean_byte_array_hash(v_a_604_);
lean_dec(v_a_604_);
v___x_610_ = lean_uint64_mix_hash(v___x_608_, v___x_609_);
v___x_611_ = lean_box_uint64(v___x_610_);
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v___x_611_);
v___x_613_ = v___x_606_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v___x_611_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
else
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
v_a_616_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_603_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_603_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_616_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeBinFileHash___boxed(lean_object* v_file_624_, lean_object* v___y_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lake_computeBinFileHash(v_file_624_);
lean_dec_ref(v_file_624_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash(lean_object* v_file_629_){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = l_IO_FS_readFile(v_file_629_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_644_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_644_ == 0)
{
v___x_634_ = v___x_631_;
v_isShared_635_ = v_isSharedCheck_644_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_631_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_644_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; uint64_t v___x_637_; uint64_t v___x_638_; uint64_t v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v___x_636_ = l_String_crlfToLf(v_a_632_);
lean_dec(v_a_632_);
v___x_637_ = 1723ULL;
v___x_638_ = lean_string_hash(v___x_636_);
lean_dec_ref(v___x_636_);
v___x_639_ = lean_uint64_mix_hash(v___x_637_, v___x_638_);
v___x_640_ = lean_box_uint64(v___x_639_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v___x_640_);
v___x_642_ = v___x_634_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
v_a_645_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_631_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_631_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
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
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeTextFileHash___boxed(lean_object* v_file_653_, lean_object* v___y_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l_Lake_computeTextFileHash(v_file_653_);
lean_dec_ref(v_file_653_);
return v_res_655_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath___lam__0(lean_object* v_x_656_){
_start:
{
lean_inc_ref(v_x_656_);
return v_x_656_;
}
}
LEAN_EXPORT lean_object* l_Lake_instCoeTextFilePathFilePath___lam__0___boxed(lean_object* v_x_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lake_instCoeTextFilePathFilePath___lam__0(v_x_657_);
lean_dec_ref(v_x_657_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeFileHash(lean_object* v_file_664_, uint8_t v_text_665_){
_start:
{
if (v_text_665_ == 0)
{
lean_object* v___x_667_; 
v___x_667_ = l_Lake_computeBinFileHash(v_file_664_);
return v___x_667_;
}
else
{
lean_object* v___x_668_; 
v___x_668_ = l_Lake_computeTextFileHash(v_file_664_);
return v___x_668_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeFileHash___boxed(lean_object* v_file_669_, lean_object* v_text_670_, lean_object* v___y_671_){
_start:
{
uint8_t v_text_boxed_672_; lean_object* v_res_673_; 
v_text_boxed_672_ = lean_unbox(v_text_670_);
v_res_673_ = l_Lake_computeFileHash(v_file_669_, v_text_boxed_672_);
lean_dec_ref(v_file_669_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__0(uint64_t v_ts_674_, lean_object* v_toPure_675_, uint64_t v_____do__lift_676_){
_start:
{
uint64_t v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_677_ = lean_uint64_mix_hash(v_ts_674_, v_____do__lift_676_);
v___x_678_ = lean_box_uint64(v___x_677_);
v___x_679_ = lean_apply_2(v_toPure_675_, lean_box(0), v___x_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__0___boxed(lean_object* v_ts_680_, lean_object* v_toPure_681_, lean_object* v_____do__lift_682_){
_start:
{
uint64_t v_ts_boxed_683_; uint64_t v_____do__lift_88__boxed_684_; lean_object* v_res_685_; 
v_ts_boxed_683_ = lean_unbox_uint64(v_ts_680_);
lean_dec_ref(v_ts_680_);
v_____do__lift_88__boxed_684_ = lean_unbox_uint64(v_____do__lift_682_);
lean_dec_ref(v_____do__lift_682_);
v_res_685_ = l_Lake_computeArrayHash___redArg___lam__0(v_ts_boxed_683_, v_toPure_681_, v_____do__lift_88__boxed_684_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__1(lean_object* v_toPure_686_, lean_object* v_inst_687_, lean_object* v_toBind_688_, uint64_t v_ts_689_, lean_object* v_t_690_){
_start:
{
lean_object* v___x_691_; lean_object* v___f_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_691_ = lean_box_uint64(v_ts_689_);
v___f_692_ = lean_alloc_closure((void*)(l_Lake_computeArrayHash___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_692_, 0, v___x_691_);
lean_closure_set(v___f_692_, 1, v_toPure_686_);
v___x_693_ = lean_apply_1(v_inst_687_, v_t_690_);
v___x_694_ = lean_apply_4(v_toBind_688_, lean_box(0), lean_box(0), v___x_693_, v___f_692_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg___lam__1___boxed(lean_object* v_toPure_695_, lean_object* v_inst_696_, lean_object* v_toBind_697_, lean_object* v_ts_698_, lean_object* v_t_699_){
_start:
{
uint64_t v_ts_boxed_700_; lean_object* v_res_701_; 
v_ts_boxed_700_ = lean_unbox_uint64(v_ts_698_);
lean_dec_ref(v_ts_698_);
v_res_701_ = l_Lake_computeArrayHash___redArg___lam__1(v_toPure_695_, v_inst_696_, v_toBind_697_, v_ts_boxed_700_, v_t_699_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash___redArg(lean_object* v_inst_704_, lean_object* v_inst_705_, lean_object* v_as_706_){
_start:
{
lean_object* v_toApplicative_707_; lean_object* v_toBind_708_; lean_object* v_toPure_709_; lean_object* v___x_710_; lean_object* v___x_711_; uint8_t v___x_712_; 
v_toApplicative_707_ = lean_ctor_get(v_inst_705_, 0);
v_toBind_708_ = lean_ctor_get(v_inst_705_, 1);
v_toPure_709_ = lean_ctor_get(v_toApplicative_707_, 1);
v___x_710_ = lean_unsigned_to_nat(0u);
v___x_711_ = lean_array_get_size(v_as_706_);
v___x_712_ = lean_nat_dec_lt(v___x_710_, v___x_711_);
if (v___x_712_ == 0)
{
lean_object* v___x_713_; lean_object* v___x_714_; 
lean_inc(v_toPure_709_);
lean_dec_ref(v_as_706_);
lean_dec_ref(v_inst_705_);
lean_dec(v_inst_704_);
v___x_713_ = ((lean_object*)(l_Lake_computeArrayHash___redArg___boxed__const__1));
v___x_714_ = lean_apply_2(v_toPure_709_, lean_box(0), v___x_713_);
return v___x_714_;
}
else
{
lean_object* v___f_715_; size_t v___x_716_; size_t v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; 
lean_inc(v_toBind_708_);
lean_inc(v_toPure_709_);
v___f_715_ = lean_alloc_closure((void*)(l_Lake_computeArrayHash___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_715_, 0, v_toPure_709_);
lean_closure_set(v___f_715_, 1, v_inst_704_);
lean_closure_set(v___f_715_, 2, v_toBind_708_);
v___x_716_ = ((size_t)0ULL);
v___x_717_ = lean_usize_of_nat(v___x_711_);
v___x_718_ = ((lean_object*)(l_Lake_computeArrayHash___redArg___boxed__const__1));
v___x_719_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_705_, v___f_715_, v_as_706_, v___x_716_, v___x_717_, v___x_718_);
return v___x_719_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeArrayHash(lean_object* v_00_u03b1_720_, lean_object* v_m_721_, lean_object* v_inst_722_, lean_object* v_inst_723_, lean_object* v_as_724_){
_start:
{
lean_object* v_toApplicative_725_; lean_object* v_toBind_726_; lean_object* v_toPure_727_; lean_object* v___x_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v_toApplicative_725_ = lean_ctor_get(v_inst_723_, 0);
v_toBind_726_ = lean_ctor_get(v_inst_723_, 1);
v_toPure_727_ = lean_ctor_get(v_toApplicative_725_, 1);
v___x_728_ = lean_unsigned_to_nat(0u);
v___x_729_ = lean_array_get_size(v_as_724_);
v___x_730_ = lean_nat_dec_lt(v___x_728_, v___x_729_);
if (v___x_730_ == 0)
{
lean_object* v___x_731_; lean_object* v___x_732_; 
lean_inc(v_toPure_727_);
lean_dec_ref(v_as_724_);
lean_dec_ref(v_inst_723_);
lean_dec(v_inst_722_);
v___x_731_ = ((lean_object*)(l_Lake_computeArrayHash___redArg___boxed__const__1));
v___x_732_ = lean_apply_2(v_toPure_727_, lean_box(0), v___x_731_);
return v___x_732_;
}
else
{
lean_object* v___f_733_; size_t v___x_734_; size_t v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
lean_inc(v_toBind_726_);
lean_inc(v_toPure_727_);
v___f_733_ = lean_alloc_closure((void*)(l_Lake_computeArrayHash___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_733_, 0, v_toPure_727_);
lean_closure_set(v___f_733_, 1, v_inst_722_);
lean_closure_set(v___f_733_, 2, v_toBind_726_);
v___x_734_ = ((size_t)0ULL);
v___x_735_ = lean_usize_of_nat(v___x_729_);
v___x_736_ = ((lean_object*)(l_Lake_computeArrayHash___redArg___boxed__const__1));
v___x_737_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_723_, v___f_733_, v_as_724_, v___x_734_, v___x_735_, v___x_736_);
return v___x_737_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad___redArg(lean_object* v_inst_738_, lean_object* v_inst_739_){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = lean_alloc_closure((void*)(l_Lake_computeArrayHash), 5, 4);
lean_closure_set(v___x_740_, 0, lean_box(0));
lean_closure_set(v___x_740_, 1, lean_box(0));
lean_closure_set(v___x_740_, 2, v_inst_738_);
lean_closure_set(v___x_740_, 3, v_inst_739_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_Lake_instComputeHashArrayOfMonad(lean_object* v_00_u03b1_741_, lean_object* v_m_742_, lean_object* v_inst_743_, lean_object* v_inst_744_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = lean_alloc_closure((void*)(l_Lake_computeArrayHash), 5, 4);
lean_closure_set(v___x_745_, 0, lean_box(0));
lean_closure_set(v___x_745_, 1, lean_box(0));
lean_closure_set(v___x_745_, 2, v_inst_743_);
lean_closure_set(v___x_745_, 3, v_inst_744_);
return v___x_745_;
}
}
LEAN_EXPORT uint8_t l_Lake_instBEqMTime_beq(lean_object* v_x_746_, lean_object* v_x_747_){
_start:
{
uint8_t v___x_748_; 
v___x_748_ = l_IO_FS_instBEqSystemTime_beq(v_x_746_, v_x_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lake_instBEqMTime_beq___boxed(lean_object* v_x_749_, lean_object* v_x_750_){
_start:
{
uint8_t v_res_751_; lean_object* v_r_752_; 
v_res_751_ = l_Lake_instBEqMTime_beq(v_x_749_, v_x_750_);
lean_dec_ref(v_x_750_);
lean_dec_ref(v_x_749_);
v_r_752_ = lean_box(v_res_751_);
return v_r_752_;
}
}
static lean_object* _init_l_Lake_MTime_instOfNat___closed__0(void){
_start:
{
uint32_t v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_755_ = 0;
v___x_756_ = lean_obj_once(&l_Lake_Hash_ofJsonNumber_x3f___closed__2, &l_Lake_Hash_ofJsonNumber_x3f___closed__2_once, _init_l_Lake_Hash_ofJsonNumber_x3f___closed__2);
v___x_757_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_757_, 0, v___x_756_);
lean_ctor_set_uint32(v___x_757_, sizeof(void*)*1, v___x_755_);
return v___x_757_;
}
}
static lean_object* _init_l_Lake_MTime_instOfNat(void){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = lean_obj_once(&l_Lake_MTime_instOfNat___closed__0, &l_Lake_MTime_instOfNat___closed__0_once, _init_l_Lake_MTime_instOfNat___closed__0);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___lam__0(lean_object* v_x_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_IO_FS_instReprSystemTime_repr___redArg(v_x_759_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instRepr___lam__0___boxed(lean_object* v_x_762_, lean_object* v___y_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lake_MTime_instRepr___lam__0(v_x_762_, v___y_763_);
lean_dec(v___y_763_);
lean_dec_ref(v_x_762_);
return v_res_764_;
}
}
static lean_object* _init_l_Lake_MTime_instLT(void){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = lean_box(0);
return v___x_769_;
}
}
static lean_object* _init_l_Lake_MTime_instLE(void){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = lean_box(0);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMin___lam__0(lean_object* v_x_771_, lean_object* v_y_772_){
_start:
{
uint8_t v___x_773_; 
v___x_773_ = l_IO_FS_instOrdSystemTime_ord(v_x_771_, v_y_772_);
if (v___x_773_ == 2)
{
lean_inc_ref(v_y_772_);
return v_y_772_;
}
else
{
lean_inc_ref(v_x_771_);
return v_x_771_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMin___lam__0___boxed(lean_object* v_x_774_, lean_object* v_y_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Lake_MTime_instMin___lam__0(v_x_774_, v_y_775_);
lean_dec_ref(v_y_775_);
lean_dec_ref(v_x_774_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMax___lam__0(lean_object* v_x_779_, lean_object* v_y_780_){
_start:
{
uint8_t v___x_781_; 
v___x_781_ = l_IO_FS_instOrdSystemTime_ord(v_x_779_, v_y_780_);
if (v___x_781_ == 2)
{
lean_inc_ref(v_x_779_);
return v_x_779_;
}
else
{
lean_inc_ref(v_y_780_);
return v_y_780_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_instMax___lam__0___boxed(lean_object* v_x_782_, lean_object* v_y_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_Lake_MTime_instMax___lam__0(v_x_782_, v_y_783_);
lean_dec_ref(v_y_783_);
lean_dec_ref(v_x_782_);
return v_res_784_;
}
}
static lean_object* _init_l_Lake_MTime_instNilTrace(void){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = lean_obj_once(&l_Lake_MTime_instOfNat___closed__0, &l_Lake_MTime_instOfNat___closed__0_once, _init_l_Lake_MTime_instOfNat___closed__0);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___redArg(lean_object* v_inst_789_){
_start:
{
lean_inc_ref(v_inst_789_);
return v_inst_789_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___redArg___boxed(lean_object* v_inst_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___redArg(v_inst_790_);
lean_dec_ref(v_inst_790_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime(lean_object* v_00_u03b1_792_, lean_object* v_inst_793_){
_start:
{
lean_inc_ref(v_inst_793_);
return v_inst_793_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime___boxed(lean_object* v_00_u03b1_794_, lean_object* v_inst_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l___private_Lake_Build_Trace_0__Lake_instComputeTraceIOMTimeOfGetMTime(v_00_u03b1_794_, v_inst_795_);
lean_dec_ref(v_inst_795_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lake_getFileMTime(lean_object* v_file_797_){
_start:
{
lean_object* v___x_799_; 
v___x_799_ = lean_io_metadata(v_file_797_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_808_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_808_ == 0)
{
v___x_802_ = v___x_799_;
v_isShared_803_ = v_isSharedCheck_808_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_799_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_808_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v_modified_804_; lean_object* v___x_806_; 
v_modified_804_ = lean_ctor_get(v_a_800_, 1);
lean_inc_ref(v_modified_804_);
lean_dec(v_a_800_);
if (v_isShared_803_ == 0)
{
lean_ctor_set(v___x_802_, 0, v_modified_804_);
v___x_806_ = v___x_802_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_modified_804_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
else
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
v_a_809_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v___x_799_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_799_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_814_; 
if (v_isShared_812_ == 0)
{
v___x_814_ = v___x_811_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_a_809_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getFileMTime___boxed(lean_object* v_file_817_, lean_object* v___y_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lake_getFileMTime(v_file_817_);
lean_dec_ref(v_file_817_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath___lam__0(lean_object* v_x_822_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = lean_io_metadata(v_x_822_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_833_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_833_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_833_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_833_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v_modified_829_; lean_object* v___x_831_; 
v_modified_829_ = lean_ctor_get(v_a_825_, 1);
lean_inc_ref(v_modified_829_);
lean_dec(v_a_825_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v_modified_829_);
v___x_831_ = v___x_827_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_modified_829_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
else
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
v_a_834_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_824_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_824_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instGetMTimeTextFilePath___lam__0___boxed(lean_object* v_x_842_, lean_object* v___y_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lake_instGetMTimeTextFilePath___lam__0(v_x_842_);
lean_dec_ref(v_x_842_);
return v_res_844_;
}
}
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___redArg(lean_object* v_inst_847_, lean_object* v_info_848_, lean_object* v_self_849_){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = lean_apply_2(v_inst_847_, v_info_848_, lean_box(0));
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_a_852_; uint8_t v___x_853_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_851_, 1);
v___x_853_ = l_IO_FS_instOrdSystemTime_ord(v_self_849_, v_a_852_);
lean_dec(v_a_852_);
if (v___x_853_ == 0)
{
uint8_t v___x_854_; 
v___x_854_ = 1;
return v___x_854_;
}
else
{
uint8_t v___x_855_; 
v___x_855_ = 0;
return v___x_855_;
}
}
else
{
uint8_t v___x_856_; 
lean_dec_ref_known(v___x_851_, 1);
v___x_856_ = 0;
return v___x_856_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___redArg___boxed(lean_object* v_inst_857_, lean_object* v_info_858_, lean_object* v_self_859_, lean_object* v___y_860_){
_start:
{
uint8_t v_res_861_; lean_object* v_r_862_; 
v_res_861_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_857_, v_info_858_, v_self_859_);
lean_dec_ref(v_self_859_);
v_r_862_ = lean_box(v_res_861_);
return v_r_862_;
}
}
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate(lean_object* v_i_863_, lean_object* v_inst_864_, lean_object* v_info_865_, lean_object* v_self_866_){
_start:
{
uint8_t v___x_868_; 
v___x_868_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_864_, v_info_865_, v_self_866_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___boxed(lean_object* v_i_869_, lean_object* v_inst_870_, lean_object* v_info_871_, lean_object* v_self_872_, lean_object* v___y_873_){
_start:
{
uint8_t v_res_874_; lean_object* v_r_875_; 
v_res_874_ = l_Lake_MTime_checkUpToDate(v_i_869_, v_inst_870_, v_info_871_, v_self_872_);
lean_dec_ref(v_self_872_);
v_r_875_ = lean_box(v_res_874_);
return v_r_875_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = lean_unsigned_to_nat(11u);
v___x_886_ = lean_nat_to_int(v___x_885_);
return v___x_886_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = lean_unsigned_to_nat(10u);
v___x_894_ = lean_nat_to_int(v___x_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1(lean_object* v_x_898_, lean_object* v_x_899_, lean_object* v_x_900_){
_start:
{
if (lean_obj_tag(v_x_900_) == 0)
{
lean_dec(v_x_898_);
return v_x_899_;
}
else
{
lean_object* v_head_901_; lean_object* v_tail_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_912_; 
v_head_901_ = lean_ctor_get(v_x_900_, 0);
v_tail_902_ = lean_ctor_get(v_x_900_, 1);
v_isSharedCheck_912_ = !lean_is_exclusive(v_x_900_);
if (v_isSharedCheck_912_ == 0)
{
v___x_904_ = v_x_900_;
v_isShared_905_ = v_isSharedCheck_912_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_tail_902_);
lean_inc(v_head_901_);
lean_dec(v_x_900_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_912_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
lean_inc(v_x_898_);
if (v_isShared_905_ == 0)
{
lean_ctor_set_tag(v___x_904_, 5);
lean_ctor_set(v___x_904_, 1, v_x_898_);
lean_ctor_set(v___x_904_, 0, v_x_899_);
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_x_899_);
lean_ctor_set(v_reuseFailAlloc_911_, 1, v_x_898_);
v___x_907_ = v_reuseFailAlloc_911_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_908_ = l_Lake_instReprBuildTrace_repr___redArg(v_head_901_);
v___x_909_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_907_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1_spec__2(v_x_898_, v___x_909_, v_tail_902_);
return v___x_910_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0(lean_object* v_x_913_, lean_object* v_x_914_){
_start:
{
if (lean_obj_tag(v_x_913_) == 0)
{
lean_object* v___x_915_; 
lean_dec(v_x_914_);
v___x_915_ = lean_box(0);
return v___x_915_;
}
else
{
lean_object* v_tail_916_; 
v_tail_916_ = lean_ctor_get(v_x_913_, 1);
if (lean_obj_tag(v_tail_916_) == 0)
{
lean_object* v_head_917_; lean_object* v___x_918_; 
lean_dec(v_x_914_);
v_head_917_ = lean_ctor_get(v_x_913_, 0);
lean_inc(v_head_917_);
lean_dec_ref_known(v_x_913_, 2);
v___x_918_ = l_Lake_instReprBuildTrace_repr___redArg(v_head_917_);
return v___x_918_;
}
else
{
lean_object* v_head_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
lean_inc(v_tail_916_);
v_head_919_ = lean_ctor_get(v_x_913_, 0);
lean_inc(v_head_919_);
lean_dec_ref_known(v_x_913_, 2);
v___x_920_ = l_Lake_instReprBuildTrace_repr___redArg(v_head_919_);
v___x_921_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1(v_x_914_, v___x_920_, v_tail_916_);
return v___x_921_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_923_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__0));
v___x_924_ = lean_string_length(v___x_923_);
return v___x_924_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__5);
v___x_926_ = lean_nat_to_int(v___x_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0(lean_object* v_xs_935_){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; uint8_t v___x_938_; 
v___x_936_ = lean_array_get_size(v_xs_935_);
v___x_937_ = lean_unsigned_to_nat(0u);
v___x_938_ = lean_nat_dec_eq(v___x_936_, v___x_937_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_939_ = lean_array_to_list(v_xs_935_);
v___x_940_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__3));
v___x_941_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0(v___x_939_, v___x_940_);
v___x_942_ = lean_obj_once(&l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6, &l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6_once, _init_l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__6);
v___x_943_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__7));
v___x_944_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_943_);
lean_ctor_set(v___x_944_, 1, v___x_941_);
v___x_945_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__8));
v___x_946_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_944_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
v___x_947_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_947_, 0, v___x_942_);
lean_ctor_set(v___x_947_, 1, v___x_946_);
v___x_948_ = l_Std_Format_fill(v___x_947_);
return v___x_948_;
}
else
{
lean_object* v___x_949_; 
lean_dec_ref(v_xs_935_);
v___x_949_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__10));
return v___x_949_;
}
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = lean_unsigned_to_nat(8u);
v___x_954_ = lean_nat_to_int(v___x_953_);
return v___x_954_;
}
}
static lean_object* _init_l_Lake_instReprBuildTrace_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = lean_unsigned_to_nat(9u);
v___x_959_ = lean_nat_to_int(v___x_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr___redArg(lean_object* v_x_960_){
_start:
{
lean_object* v_caption_961_; lean_object* v_inputs_962_; uint64_t v_hash_963_; lean_object* v_mtime_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; uint8_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v_caption_961_ = lean_ctor_get(v_x_960_, 0);
lean_inc_ref(v_caption_961_);
v_inputs_962_ = lean_ctor_get(v_x_960_, 1);
lean_inc_ref(v_inputs_962_);
v_hash_963_ = lean_ctor_get_uint64(v_x_960_, sizeof(void*)*3);
v_mtime_964_ = lean_ctor_get(v_x_960_, 2);
lean_inc_ref(v_mtime_964_);
lean_dec_ref(v_x_960_);
v___x_965_ = ((lean_object*)(l_Lake_instReprHash_repr___redArg___closed__5));
v___x_966_ = ((lean_object*)(l_Lake_instReprBuildTrace_repr___redArg___closed__3));
v___x_967_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__4, &l_Lake_instReprBuildTrace_repr___redArg___closed__4_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__4);
v___x_968_ = l_String_quote(v_caption_961_);
v___x_969_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
v___x_970_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_967_);
lean_ctor_set(v___x_970_, 1, v___x_969_);
v___x_971_ = 0;
v___x_972_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set_uint8(v___x_972_, sizeof(void*)*1, v___x_971_);
v___x_973_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_966_);
lean_ctor_set(v___x_973_, 1, v___x_972_);
v___x_974_ = ((lean_object*)(l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0___closed__2));
v___x_975_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_973_);
lean_ctor_set(v___x_975_, 1, v___x_974_);
v___x_976_ = lean_box(1);
v___x_977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_975_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = ((lean_object*)(l_Lake_instReprBuildTrace_repr___redArg___closed__6));
v___x_979_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_979_, 0, v___x_977_);
lean_ctor_set(v___x_979_, 1, v___x_978_);
v___x_980_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_979_);
lean_ctor_set(v___x_980_, 1, v___x_965_);
v___x_981_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__7, &l_Lake_instReprBuildTrace_repr___redArg___closed__7_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__7);
v___x_982_ = l_Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0(v_inputs_962_);
v___x_983_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_981_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_984_, 0, v___x_983_);
lean_ctor_set_uint8(v___x_984_, sizeof(void*)*1, v___x_971_);
v___x_985_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_980_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
lean_ctor_set(v___x_986_, 1, v___x_974_);
v___x_987_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
lean_ctor_set(v___x_987_, 1, v___x_976_);
v___x_988_ = ((lean_object*)(l_Lake_instReprBuildTrace_repr___redArg___closed__9));
v___x_989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_989_, 0, v___x_987_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_989_);
lean_ctor_set(v___x_990_, 1, v___x_965_);
v___x_991_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__10, &l_Lake_instReprBuildTrace_repr___redArg___closed__10_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__10);
v___x_992_ = l_Lake_instReprHash_repr___redArg(v_hash_963_);
v___x_993_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_991_);
lean_ctor_set(v___x_993_, 1, v___x_992_);
v___x_994_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_994_, 0, v___x_993_);
lean_ctor_set_uint8(v___x_994_, sizeof(void*)*1, v___x_971_);
v___x_995_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_990_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
lean_ctor_set(v___x_996_, 1, v___x_974_);
v___x_997_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_996_);
lean_ctor_set(v___x_997_, 1, v___x_976_);
v___x_998_ = ((lean_object*)(l_Lake_instReprBuildTrace_repr___redArg___closed__12));
v___x_999_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_997_);
lean_ctor_set(v___x_999_, 1, v___x_998_);
v___x_1000_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
lean_ctor_set(v___x_1000_, 1, v___x_965_);
v___x_1001_ = lean_obj_once(&l_Lake_instReprBuildTrace_repr___redArg___closed__13, &l_Lake_instReprBuildTrace_repr___redArg___closed__13_once, _init_l_Lake_instReprBuildTrace_repr___redArg___closed__13);
v___x_1002_ = l_IO_FS_instReprSystemTime_repr___redArg(v_mtime_964_);
lean_dec_ref(v_mtime_964_);
v___x_1003_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1001_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
lean_ctor_set_uint8(v___x_1004_, sizeof(void*)*1, v___x_971_);
v___x_1005_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1000_);
lean_ctor_set(v___x_1005_, 1, v___x_1004_);
v___x_1006_ = lean_obj_once(&l_Lake_instReprHash_repr___redArg___closed__10, &l_Lake_instReprHash_repr___redArg___closed__10_once, _init_l_Lake_instReprHash_repr___redArg___closed__10);
v___x_1007_ = ((lean_object*)(l_Lake_instReprHash_repr___redArg___closed__11));
v___x_1008_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
lean_ctor_set(v___x_1008_, 1, v___x_1005_);
v___x_1009_ = ((lean_object*)(l_Lake_instReprHash_repr___redArg___closed__12));
v___x_1010_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1008_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
v___x_1011_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1006_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
lean_ctor_set_uint8(v___x_1012_, sizeof(void*)*1, v___x_971_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_instReprBuildTrace_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_1013_, lean_object* v_x_1014_, lean_object* v_x_1015_){
_start:
{
if (lean_obj_tag(v_x_1015_) == 0)
{
lean_dec(v_x_1013_);
return v_x_1014_;
}
else
{
lean_object* v_head_1016_; lean_object* v_tail_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1027_; 
v_head_1016_ = lean_ctor_get(v_x_1015_, 0);
v_tail_1017_ = lean_ctor_get(v_x_1015_, 1);
v_isSharedCheck_1027_ = !lean_is_exclusive(v_x_1015_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1019_ = v_x_1015_;
v_isShared_1020_ = v_isSharedCheck_1027_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_tail_1017_);
lean_inc(v_head_1016_);
lean_dec(v_x_1015_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1027_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
lean_inc(v_x_1013_);
if (v_isShared_1020_ == 0)
{
lean_ctor_set_tag(v___x_1019_, 5);
lean_ctor_set(v___x_1019_, 1, v_x_1013_);
lean_ctor_set(v___x_1019_, 0, v_x_1014_);
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_x_1014_);
lean_ctor_set(v_reuseFailAlloc_1026_, 1, v_x_1013_);
v___x_1022_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = l_Lake_instReprBuildTrace_repr___redArg(v_head_1016_);
v___x_1024_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v_x_1014_ = v___x_1024_;
v_x_1015_ = v_tail_1017_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr(lean_object* v_x_1028_, lean_object* v_prec_1029_){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = l_Lake_instReprBuildTrace_repr___redArg(v_x_1028_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildTrace_repr___boxed(lean_object* v_x_1031_, lean_object* v_prec_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_Lake_instReprBuildTrace_repr(v_x_1031_, v_prec_1032_);
lean_dec(v_prec_1032_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withCaption(lean_object* v_caption_1036_, lean_object* v_self_1037_){
_start:
{
lean_object* v_inputs_1038_; uint64_t v_hash_1039_; lean_object* v_mtime_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1047_; 
v_inputs_1038_ = lean_ctor_get(v_self_1037_, 1);
v_hash_1039_ = lean_ctor_get_uint64(v_self_1037_, sizeof(void*)*3);
v_mtime_1040_ = lean_ctor_get(v_self_1037_, 2);
v_isSharedCheck_1047_ = !lean_is_exclusive(v_self_1037_);
if (v_isSharedCheck_1047_ == 0)
{
lean_object* v_unused_1048_; 
v_unused_1048_ = lean_ctor_get(v_self_1037_, 0);
lean_dec(v_unused_1048_);
v___x_1042_ = v_self_1037_;
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_mtime_1040_);
lean_inc(v_inputs_1038_);
lean_dec(v_self_1037_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 0, v_caption_1036_);
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_caption_1036_);
lean_ctor_set(v_reuseFailAlloc_1046_, 1, v_inputs_1038_);
lean_ctor_set(v_reuseFailAlloc_1046_, 2, v_mtime_1040_);
lean_ctor_set_uint64(v_reuseFailAlloc_1046_, sizeof(void*)*3, v_hash_1039_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_withoutInputs(lean_object* v_self_1051_){
_start:
{
lean_object* v_caption_1052_; uint64_t v_hash_1053_; lean_object* v_mtime_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1062_; 
v_caption_1052_ = lean_ctor_get(v_self_1051_, 0);
v_hash_1053_ = lean_ctor_get_uint64(v_self_1051_, sizeof(void*)*3);
v_mtime_1054_ = lean_ctor_get(v_self_1051_, 2);
v_isSharedCheck_1062_ = !lean_is_exclusive(v_self_1051_);
if (v_isSharedCheck_1062_ == 0)
{
lean_object* v_unused_1063_; 
v_unused_1063_ = lean_ctor_get(v_self_1051_, 1);
lean_dec(v_unused_1063_);
v___x_1056_ = v_self_1051_;
v_isShared_1057_ = v_isSharedCheck_1062_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_mtime_1054_);
lean_inc(v_caption_1052_);
lean_dec(v_self_1051_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1062_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1058_ = ((lean_object*)(l_Lake_BuildTrace_withoutInputs___closed__0));
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 1, v___x_1058_);
v___x_1060_ = v___x_1056_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_caption_1052_);
lean_ctor_set(v_reuseFailAlloc_1061_, 1, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1061_, 2, v_mtime_1054_);
lean_ctor_set_uint64(v_reuseFailAlloc_1061_, sizeof(void*)*3, v_hash_1053_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash(uint64_t v_hash_1064_, lean_object* v_caption_1065_){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1066_ = ((lean_object*)(l_Lake_BuildTrace_withoutInputs___closed__0));
v___x_1067_ = lean_obj_once(&l_Lake_MTime_instOfNat___closed__0, &l_Lake_MTime_instOfNat___closed__0_once, _init_l_Lake_MTime_instOfNat___closed__0);
v___x_1068_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1068_, 0, v_caption_1065_);
lean_ctor_set(v___x_1068_, 1, v___x_1066_);
lean_ctor_set(v___x_1068_, 2, v___x_1067_);
lean_ctor_set_uint64(v___x_1068_, sizeof(void*)*3, v_hash_1064_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofHash___boxed(lean_object* v_hash_1069_, lean_object* v_caption_1070_){
_start:
{
uint64_t v_hash_boxed_1071_; lean_object* v_res_1072_; 
v_hash_boxed_1071_ = lean_unbox_uint64(v_hash_1069_);
lean_dec_ref(v_hash_1069_);
v_res_1072_ = l_Lake_BuildTrace_ofHash(v_hash_boxed_1071_, v_caption_1070_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash___lam__0(uint64_t v_hash_1074_){
_start:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1075_ = ((lean_object*)(l_Lake_BuildTrace_instCoeHash___lam__0___closed__0));
v___x_1076_ = ((lean_object*)(l_Lake_BuildTrace_withoutInputs___closed__0));
v___x_1077_ = lean_obj_once(&l_Lake_MTime_instOfNat___closed__0, &l_Lake_MTime_instOfNat___closed__0_once, _init_l_Lake_MTime_instOfNat___closed__0);
v___x_1078_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1078_, 0, v___x_1075_);
lean_ctor_set(v___x_1078_, 1, v___x_1076_);
lean_ctor_set(v___x_1078_, 2, v___x_1077_);
lean_ctor_set_uint64(v___x_1078_, sizeof(void*)*3, v_hash_1074_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeHash___lam__0___boxed(lean_object* v_hash_1079_){
_start:
{
uint64_t v_hash_boxed_1080_; lean_object* v_res_1081_; 
v_hash_boxed_1080_ = lean_unbox_uint64(v_hash_1079_);
lean_dec_ref(v_hash_1079_);
v_res_1081_ = l_Lake_BuildTrace_instCoeHash___lam__0(v_hash_boxed_1080_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_ofMTime(lean_object* v_mtime_1084_, lean_object* v_caption_1085_){
_start:
{
lean_object* v___x_1086_; uint64_t v___x_1087_; lean_object* v___x_1088_; 
v___x_1086_ = ((lean_object*)(l_Lake_BuildTrace_withoutInputs___closed__0));
v___x_1087_ = 1723ULL;
v___x_1088_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1088_, 0, v_caption_1085_);
lean_ctor_set(v___x_1088_, 1, v___x_1086_);
lean_ctor_set(v___x_1088_, 2, v_mtime_1084_);
lean_ctor_set_uint64(v___x_1088_, sizeof(void*)*3, v___x_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instCoeMTime___lam__0(lean_object* v_mtime_1090_){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; uint64_t v___x_1093_; lean_object* v___x_1094_; 
v___x_1091_ = ((lean_object*)(l_Lake_BuildTrace_instCoeMTime___lam__0___closed__0));
v___x_1092_ = ((lean_object*)(l_Lake_BuildTrace_withoutInputs___closed__0));
v___x_1093_ = 1723ULL;
v___x_1094_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1094_, 0, v___x_1091_);
lean_ctor_set(v___x_1094_, 1, v___x_1092_);
lean_ctor_set(v___x_1094_, 2, v_mtime_1090_);
lean_ctor_set_uint64(v___x_1094_, sizeof(void*)*3, v___x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_nil(lean_object* v_caption_1097_){
_start:
{
lean_object* v___x_1098_; uint64_t v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1098_ = ((lean_object*)(l_Lake_BuildTrace_withoutInputs___closed__0));
v___x_1099_ = 1723ULL;
v___x_1100_ = lean_obj_once(&l_Lake_MTime_instOfNat___closed__0, &l_Lake_MTime_instOfNat___closed__0_once, _init_l_Lake_MTime_instOfNat___closed__0);
v___x_1101_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1101_, 0, v_caption_1097_);
lean_ctor_set(v___x_1101_, 1, v___x_1098_);
lean_ctor_set(v___x_1101_, 2, v___x_1100_);
lean_ctor_set_uint64(v___x_1101_, sizeof(void*)*3, v___x_1099_);
return v___x_1101_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instNilTrace___closed__1(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = ((lean_object*)(l_Lake_BuildTrace_instNilTrace___closed__0));
v___x_1104_ = l_Lake_BuildTrace_nil(v___x_1103_);
return v___x_1104_;
}
}
static lean_object* _init_l_Lake_BuildTrace_instNilTrace(void){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = lean_obj_once(&l_Lake_BuildTrace_instNilTrace___closed__1, &l_Lake_BuildTrace_instNilTrace___closed__1_once, _init_l_Lake_BuildTrace_instNilTrace___closed__1);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___redArg(lean_object* v_inst_1106_, lean_object* v_inst_1107_, lean_object* v_inst_1108_, lean_object* v_inst_1109_, lean_object* v_info_1110_){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
lean_inc(v_info_1110_);
v___x_1112_ = lean_apply_1(v_inst_1107_, v_info_1110_);
v___x_1113_ = lean_apply_3(v_inst_1108_, lean_box(0), v___x_1112_, lean_box(0));
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v_a_1114_; lean_object* v___x_1115_; 
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc(v_a_1114_);
lean_dec_ref_known(v___x_1113_, 1);
lean_inc(v_info_1110_);
v___x_1115_ = lean_apply_2(v_inst_1109_, v_info_1110_, lean_box(0));
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1127_; 
v_a_1116_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1118_ = v___x_1115_;
v_isShared_1119_ = v_isSharedCheck_1127_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1115_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1127_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; uint64_t v___x_1123_; lean_object* v___x_1125_; 
v___x_1120_ = lean_apply_1(v_inst_1106_, v_info_1110_);
v___x_1121_ = ((lean_object*)(l_Lake_BuildTrace_withoutInputs___closed__0));
v___x_1122_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_1122_, 0, v___x_1120_);
lean_ctor_set(v___x_1122_, 1, v___x_1121_);
lean_ctor_set(v___x_1122_, 2, v_a_1116_);
v___x_1123_ = lean_unbox_uint64(v_a_1114_);
lean_dec(v_a_1114_);
lean_ctor_set_uint64(v___x_1122_, sizeof(void*)*3, v___x_1123_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 0, v___x_1122_);
v___x_1125_ = v___x_1118_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1122_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
else
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
lean_dec(v_a_1114_);
lean_dec(v_info_1110_);
lean_dec_ref(v_inst_1106_);
v_a_1128_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1115_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___x_1115_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
else
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1143_; 
lean_dec(v_info_1110_);
lean_dec_ref(v_inst_1109_);
lean_dec_ref(v_inst_1106_);
v_a_1136_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1138_ = v___x_1113_;
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1113_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1141_; 
if (v_isShared_1139_ == 0)
{
v___x_1141_ = v___x_1138_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1136_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___redArg___boxed(lean_object* v_inst_1144_, lean_object* v_inst_1145_, lean_object* v_inst_1146_, lean_object* v_inst_1147_, lean_object* v_info_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lake_BuildTrace_compute___redArg(v_inst_1144_, v_inst_1145_, v_inst_1146_, v_inst_1147_, v_info_1148_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute(lean_object* v_00_u03b1_1151_, lean_object* v_m_1152_, lean_object* v_inst_1153_, lean_object* v_inst_1154_, lean_object* v_inst_1155_, lean_object* v_inst_1156_, lean_object* v_info_1157_){
_start:
{
lean_object* v___x_1159_; 
v___x_1159_ = l_Lake_BuildTrace_compute___redArg(v_inst_1153_, v_inst_1154_, v_inst_1155_, v_inst_1156_, v_info_1157_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_compute___boxed(lean_object* v_00_u03b1_1160_, lean_object* v_m_1161_, lean_object* v_inst_1162_, lean_object* v_inst_1163_, lean_object* v_inst_1164_, lean_object* v_inst_1165_, lean_object* v_info_1166_, lean_object* v___y_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lake_BuildTrace_compute(v_00_u03b1_1160_, v_m_1161_, v_inst_1162_, v_inst_1163_, v_inst_1164_, v_inst_1165_, v_info_1166_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime___redArg(lean_object* v_inst_1169_, lean_object* v_inst_1170_, lean_object* v_inst_1171_, lean_object* v_inst_1172_){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = lean_alloc_closure((void*)(l_Lake_BuildTrace_compute___boxed), 8, 6);
lean_closure_set(v___x_1173_, 0, lean_box(0));
lean_closure_set(v___x_1173_, 1, lean_box(0));
lean_closure_set(v___x_1173_, 2, v_inst_1169_);
lean_closure_set(v___x_1173_, 3, v_inst_1170_);
lean_closure_set(v___x_1173_, 4, v_inst_1171_);
lean_closure_set(v___x_1173_, 5, v_inst_1172_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_instComputeTraceIOOfToStringOfComputeHashOfMonadLiftTOfGetMTime(lean_object* v_00_u03b1_1174_, lean_object* v_m_1175_, lean_object* v_inst_1176_, lean_object* v_inst_1177_, lean_object* v_inst_1178_, lean_object* v_inst_1179_){
_start:
{
lean_object* v___x_1180_; 
v___x_1180_ = lean_alloc_closure((void*)(l_Lake_BuildTrace_compute___boxed), 8, 6);
lean_closure_set(v___x_1180_, 0, lean_box(0));
lean_closure_set(v___x_1180_, 1, lean_box(0));
lean_closure_set(v___x_1180_, 2, v_inst_1176_);
lean_closure_set(v___x_1180_, 3, v_inst_1177_);
lean_closure_set(v___x_1180_, 4, v_inst_1178_);
lean_closure_set(v___x_1180_, 5, v_inst_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_mix(lean_object* v_t1_1181_, lean_object* v_t2_1182_){
_start:
{
lean_object* v_caption_1183_; lean_object* v_inputs_1184_; uint64_t v_hash_1185_; lean_object* v_mtime_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1201_; 
v_caption_1183_ = lean_ctor_get(v_t1_1181_, 0);
v_inputs_1184_ = lean_ctor_get(v_t1_1181_, 1);
v_hash_1185_ = lean_ctor_get_uint64(v_t1_1181_, sizeof(void*)*3);
v_mtime_1186_ = lean_ctor_get(v_t1_1181_, 2);
v_isSharedCheck_1201_ = !lean_is_exclusive(v_t1_1181_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1188_ = v_t1_1181_;
v_isShared_1189_ = v_isSharedCheck_1201_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_mtime_1186_);
lean_inc(v_inputs_1184_);
lean_inc(v_caption_1183_);
lean_dec(v_t1_1181_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1201_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
uint64_t v_hash_1190_; lean_object* v_mtime_1191_; lean_object* v___x_1192_; uint64_t v___x_1193_; uint8_t v___x_1194_; 
v_hash_1190_ = lean_ctor_get_uint64(v_t2_1182_, sizeof(void*)*3);
v_mtime_1191_ = lean_ctor_get(v_t2_1182_, 2);
lean_inc_ref(v_mtime_1191_);
v___x_1192_ = lean_array_push(v_inputs_1184_, v_t2_1182_);
v___x_1193_ = lean_uint64_mix_hash(v_hash_1185_, v_hash_1190_);
v___x_1194_ = l_IO_FS_instOrdSystemTime_ord(v_mtime_1186_, v_mtime_1191_);
if (v___x_1194_ == 2)
{
lean_object* v___x_1196_; 
lean_dec_ref(v_mtime_1191_);
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 1, v___x_1192_);
v___x_1196_ = v___x_1188_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_caption_1183_);
lean_ctor_set(v_reuseFailAlloc_1197_, 1, v___x_1192_);
lean_ctor_set(v_reuseFailAlloc_1197_, 2, v_mtime_1186_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_ctor_set_uint64(v___x_1196_, sizeof(void*)*3, v___x_1193_);
return v___x_1196_;
}
}
else
{
lean_object* v___x_1199_; 
lean_dec_ref(v_mtime_1186_);
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 2, v_mtime_1191_);
lean_ctor_set(v___x_1188_, 1, v___x_1192_);
v___x_1199_ = v___x_1188_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_caption_1183_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v___x_1192_);
lean_ctor_set(v_reuseFailAlloc_1200_, 2, v_mtime_1191_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
lean_ctor_set_uint64(v___x_1199_, sizeof(void*)*3, v___x_1193_);
return v___x_1199_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstHash___redArg(lean_object* v_inst_1204_, lean_object* v_info_1205_, uint64_t v_hash_1206_, lean_object* v_self_1207_){
_start:
{
uint64_t v_hash_1209_; uint8_t v___x_1210_; 
v_hash_1209_ = lean_ctor_get_uint64(v_self_1207_, sizeof(void*)*3);
v___x_1210_ = lean_uint64_dec_eq(v_hash_1206_, v_hash_1209_);
if (v___x_1210_ == 0)
{
lean_dec(v_info_1205_);
lean_dec_ref(v_inst_1204_);
return v___x_1210_;
}
else
{
lean_object* v___x_1211_; uint8_t v___x_1212_; 
v___x_1211_ = lean_apply_2(v_inst_1204_, v_info_1205_, lean_box(0));
v___x_1212_ = lean_unbox(v___x_1211_);
return v___x_1212_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___redArg___boxed(lean_object* v_inst_1213_, lean_object* v_info_1214_, lean_object* v_hash_1215_, lean_object* v_self_1216_, lean_object* v___y_1217_){
_start:
{
uint64_t v_hash_boxed_1218_; uint8_t v_res_1219_; lean_object* v_r_1220_; 
v_hash_boxed_1218_ = lean_unbox_uint64(v_hash_1215_);
lean_dec_ref(v_hash_1215_);
v_res_1219_ = l_Lake_BuildTrace_checkAgainstHash___redArg(v_inst_1213_, v_info_1214_, v_hash_boxed_1218_, v_self_1216_);
lean_dec_ref(v_self_1216_);
v_r_1220_ = lean_box(v_res_1219_);
return v_r_1220_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstHash(lean_object* v_i_1221_, lean_object* v_inst_1222_, lean_object* v_info_1223_, uint64_t v_hash_1224_, lean_object* v_self_1225_){
_start:
{
uint8_t v___x_1227_; 
v___x_1227_ = l_Lake_BuildTrace_checkAgainstHash___redArg(v_inst_1222_, v_info_1223_, v_hash_1224_, v_self_1225_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstHash___boxed(lean_object* v_i_1228_, lean_object* v_inst_1229_, lean_object* v_info_1230_, lean_object* v_hash_1231_, lean_object* v_self_1232_, lean_object* v___y_1233_){
_start:
{
uint64_t v_hash_boxed_1234_; uint8_t v_res_1235_; lean_object* v_r_1236_; 
v_hash_boxed_1234_ = lean_unbox_uint64(v_hash_1231_);
lean_dec_ref(v_hash_1231_);
v_res_1235_ = l_Lake_BuildTrace_checkAgainstHash(v_i_1228_, v_inst_1229_, v_info_1230_, v_hash_boxed_1234_, v_self_1232_);
lean_dec_ref(v_self_1232_);
v_r_1236_ = lean_box(v_res_1235_);
return v_r_1236_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstTime___redArg(lean_object* v_inst_1237_, lean_object* v_info_1238_, lean_object* v_self_1239_){
_start:
{
lean_object* v_mtime_1241_; uint8_t v___x_1242_; 
v_mtime_1241_ = lean_ctor_get(v_self_1239_, 2);
v___x_1242_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1237_, v_info_1238_, v_mtime_1241_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___redArg___boxed(lean_object* v_inst_1243_, lean_object* v_info_1244_, lean_object* v_self_1245_, lean_object* v___y_1246_){
_start:
{
uint8_t v_res_1247_; lean_object* v_r_1248_; 
v_res_1247_ = l_Lake_BuildTrace_checkAgainstTime___redArg(v_inst_1243_, v_info_1244_, v_self_1245_);
lean_dec_ref(v_self_1245_);
v_r_1248_ = lean_box(v_res_1247_);
return v_r_1248_;
}
}
LEAN_EXPORT uint8_t l_Lake_BuildTrace_checkAgainstTime(lean_object* v_i_1249_, lean_object* v_inst_1250_, lean_object* v_info_1251_, lean_object* v_self_1252_){
_start:
{
lean_object* v_mtime_1254_; uint8_t v___x_1255_; 
v_mtime_1254_ = lean_ctor_get(v_self_1252_, 2);
v___x_1255_ = l_Lake_MTime_checkUpToDate___redArg(v_inst_1250_, v_info_1251_, v_mtime_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildTrace_checkAgainstTime___boxed(lean_object* v_i_1256_, lean_object* v_inst_1257_, lean_object* v_info_1258_, lean_object* v_self_1259_, lean_object* v___y_1260_){
_start:
{
uint8_t v_res_1261_; lean_object* v_r_1262_; 
v_res_1261_ = l_Lake_BuildTrace_checkAgainstTime(v_i_1256_, v_inst_1257_, v_info_1258_, v_self_1259_);
lean_dec_ref(v_self_1259_);
v_r_1262_ = lean_box(v_res_1261_);
return v_r_1262_;
}
}
lean_object* runtime_initialize_Lean_Data_Json(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Fold(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_String(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Extra(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Trace(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_Hash_nil = _init_l_Lake_Hash_nil();
l_Lake_Hash_instNilTrace = _init_l_Lake_Hash_instNilTrace();
l_Lake_MTime_instOfNat = _init_l_Lake_MTime_instOfNat();
lean_mark_persistent(l_Lake_MTime_instOfNat);
l_Lake_MTime_instLT = _init_l_Lake_MTime_instLT();
lean_mark_persistent(l_Lake_MTime_instLT);
l_Lake_MTime_instLE = _init_l_Lake_MTime_instLE();
lean_mark_persistent(l_Lake_MTime_instLE);
l_Lake_MTime_instNilTrace = _init_l_Lake_MTime_instNilTrace();
lean_mark_persistent(l_Lake_MTime_instNilTrace);
l_Lake_BuildTrace_instNilTrace = _init_l_Lake_BuildTrace_instNilTrace();
lean_mark_persistent(l_Lake_BuildTrace_instNilTrace);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_Nat_Fold(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Trace(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Fold(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Fold(uint8_t builtin);
lean_object* initialize_Lake_Util_String(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Extra(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Trace(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_String(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Trace(builtin);
}
#ifdef __cplusplus
}
#endif
