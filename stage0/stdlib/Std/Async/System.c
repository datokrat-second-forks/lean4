// Lean compiler output
// Module: Std.Async.System
// Imports: public import Std.Time public import Std.Internal.UV.System public import Std.Data.HashMap
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
lean_object* l_System_instDecidableEqFilePath___boxed(lean_object*, lean_object*);
lean_object* l_String_hash___boxed(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instForInOfForIn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uv_os_environ();
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_uv_hrtime();
lean_object* lean_uint64_to_nat(uint64_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_uv_os_tmpdir();
lean_object* lean_uv_os_uname();
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_uv_cpu_info();
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
lean_object* lean_uv_uptime();
lean_object* lean_uv_os_get_passwd();
lean_object* lean_uv_os_getenv(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_uv_os_get_group(uint64_t);
lean_object* lean_uv_os_homedir();
lean_object* l_Rat_ofInt(lean_object*);
lean_object* lean_uv_os_unsetenv(lean_object*);
lean_object* lean_uv_os_setenv(lean_object*, lean_object*);
lean_object* lean_uv_os_gethostname();
LEAN_EXPORT lean_object* l_Std_Async_System_instInhabitedGroupId_default;
LEAN_EXPORT lean_object* l_Std_Async_System_instInhabitedGroupId;
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqGroupId_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqGroupId_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqGroupId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqGroupId___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_System_instOrdGroupId_ord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instOrdGroupId_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_System_instOrdGroupId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_System_instOrdGroupId_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_instOrdGroupId___closed__0 = (const lean_object*)&l_Std_Async_System_instOrdGroupId___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instOrdGroupId = (const lean_object*)&l_Std_Async_System_instOrdGroupId___closed__0_value;
static const lean_string_object l_Std_Async_System_instReprGroupId___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "GroupId.mk "};
static const lean_object* l_Std_Async_System_instReprGroupId___lam__0___closed__0 = (const lean_object*)&l_Std_Async_System_instReprGroupId___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Async_System_instReprGroupId___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprGroupId___lam__0___closed__0_value)}};
static const lean_object* l_Std_Async_System_instReprGroupId___lam__0___closed__1 = (const lean_object*)&l_Std_Async_System_instReprGroupId___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_System_instReprGroupId___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprGroupId___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_System_instReprGroupId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_System_instReprGroupId___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_instReprGroupId___closed__0 = (const lean_object*)&l_Std_Async_System_instReprGroupId___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instReprGroupId = (const lean_object*)&l_Std_Async_System_instReprGroupId___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_System_instInhabitedUserId_default;
LEAN_EXPORT lean_object* l_Std_Async_System_instInhabitedUserId;
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqUserId_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqUserId_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqUserId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqUserId___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_System_instOrdUserId_ord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instOrdUserId_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_System_instOrdUserId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_System_instOrdUserId_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_instOrdUserId___closed__0 = (const lean_object*)&l_Std_Async_System_instOrdUserId___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instOrdUserId = (const lean_object*)&l_Std_Async_System_instOrdUserId___closed__0_value;
static const lean_string_object l_Std_Async_System_instReprUserId___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UserId.mk "};
static const lean_object* l_Std_Async_System_instReprUserId___lam__0___closed__0 = (const lean_object*)&l_Std_Async_System_instReprUserId___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Async_System_instReprUserId___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprUserId___lam__0___closed__0_value)}};
static const lean_object* l_Std_Async_System_instReprUserId___lam__0___closed__1 = (const lean_object*)&l_Std_Async_System_instReprUserId___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Async_System_instReprUserId___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprUserId___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_System_instReprUserId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_System_instReprUserId___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_instReprUserId___closed__0 = (const lean_object*)&l_Std_Async_System_instReprUserId___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instReprUserId = (const lean_object*)&l_Std_Async_System_instReprUserId___closed__0_value;
static const lean_string_object l_Std_Async_System_instInhabitedSystemUser_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Async_System_instInhabitedSystemUser_default___closed__0 = (const lean_object*)&l_Std_Async_System_instInhabitedSystemUser_default___closed__0_value;
static const lean_ctor_object l_Std_Async_System_instInhabitedSystemUser_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_System_instInhabitedSystemUser_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_Async_System_instInhabitedSystemUser_default___closed__1 = (const lean_object*)&l_Std_Async_System_instInhabitedSystemUser_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instInhabitedSystemUser_default = (const lean_object*)&l_Std_Async_System_instInhabitedSystemUser_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instInhabitedSystemUser = (const lean_object*)&l_Std_Async_System_instInhabitedSystemUser_default___closed__1_value;
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqSystemUser_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqSystemUser_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqSystemUser(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqSystemUser___boxed(lean_object*, lean_object*);
static const lean_string_object l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__1_value;
static const lean_string_object l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__3 = (const lean_object*)&l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "FilePath.mk "};
static const lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3___closed__0 = (const lean_object*)&l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3___closed__1 = (const lean_object*)&l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Async_System_instReprSystemUser_repr_spec__4(lean_object*);
static const lean_string_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__0 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__0_value;
static const lean_string_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "username"};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__1 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__2 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__2_value)}};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__3 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__4 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__3_value),((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__6 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__6_value;
static lean_once_cell_t l_Std_Async_System_instReprSystemUser_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__7;
static const lean_string_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__8 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__9 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "userId"};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__10 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__11 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Async_System_instReprSystemUser_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__12;
static const lean_string_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "groupId"};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__13 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__14 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__14_value;
static lean_once_cell_t l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15;
static const lean_string_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "shell"};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__16 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__16_value;
static const lean_ctor_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__16_value)}};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__17 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__17_value;
static lean_once_cell_t l_Std_Async_System_instReprSystemUser_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__18;
static const lean_string_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "homeDir"};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__19 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__19_value;
static const lean_ctor_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__19_value)}};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__20 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__20_value;
static const lean_string_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__21 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__21_value;
static lean_once_cell_t l_Std_Async_System_instReprSystemUser_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__22;
static lean_once_cell_t l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23;
static const lean_ctor_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__24 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__24_value;
static const lean_ctor_object l_Std_Async_System_instReprSystemUser_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__21_value)}};
static const lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg___closed__25 = (const lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__25_value;
LEAN_EXPORT lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprSystemUser_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprSystemUser_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_System_instReprSystemUser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_System_instReprSystemUser_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_instReprSystemUser___closed__0 = (const lean_object*)&l_Std_Async_System_instReprSystemUser___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instReprSystemUser = (const lean_object*)&l_Std_Async_System_instReprSystemUser___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__0_value;
static const lean_ctor_object l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__1_value;
static const lean_string_object l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__2_value;
static lean_once_cell_t l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__3;
static lean_once_cell_t l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__4;
static const lean_ctor_object l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__5_value;
static const lean_ctor_object l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__2_value)}};
static const lean_object* l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__6_value;
static const lean_string_object l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__7_value;
static const lean_ctor_object l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__7_value)}};
static const lean_object* l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__8_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0(lean_object*);
static const lean_string_object l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "groupName"};
static const lean_object* l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__0 = (const lean_object*)&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__1 = (const lean_object*)&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__2 = (const lean_object*)&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__2_value),((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__3 = (const lean_object*)&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__4;
static const lean_string_object l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "members"};
static const lean_object* l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__5 = (const lean_object*)&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__6 = (const lean_object*)&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Async_System_instReprGroupInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprGroupInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprGroupInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_System_instReprGroupInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_System_instReprGroupInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_instReprGroupInfo___closed__0 = (const lean_object*)&l_Std_Async_System_instReprGroupInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instReprGroupInfo = (const lean_object*)&l_Std_Async_System_instReprGroupInfo___closed__0_value;
static const lean_array_object l_Std_Async_System_instInhabitedGroupInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Async_System_instInhabitedGroupInfo_default___closed__0 = (const lean_object*)&l_Std_Async_System_instInhabitedGroupInfo_default___closed__0_value;
static const lean_ctor_object l_Std_Async_System_instInhabitedGroupInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_System_instInhabitedSystemUser_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_System_instInhabitedGroupInfo_default___closed__0_value)}};
static const lean_object* l_Std_Async_System_instInhabitedGroupInfo_default___closed__1 = (const lean_object*)&l_Std_Async_System_instInhabitedGroupInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instInhabitedGroupInfo_default = (const lean_object*)&l_Std_Async_System_instInhabitedGroupInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instInhabitedGroupInfo = (const lean_object*)&l_Std_Async_System_instInhabitedGroupInfo_default___closed__1_value;
static lean_once_cell_t l_Std_Async_System_instInhabitedCPUTimes_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instInhabitedCPUTimes_default___closed__0;
static lean_once_cell_t l_Std_Async_System_instInhabitedCPUTimes_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instInhabitedCPUTimes_default___closed__1;
LEAN_EXPORT lean_object* l_Std_Async_System_instInhabitedCPUTimes_default;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Async_System_instInhabitedCPUTimes_default_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instInhabitedCPUTimes;
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqCPUTimes_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqCPUTimes_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqCPUTimes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqCPUTimes___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "userTime"};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__0 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__1 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__2 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__2_value),((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__3 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "interruptTime"};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__4 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__5 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__5_value;
static lean_once_cell_t l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__6;
static lean_once_cell_t l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7;
static const lean_string_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "idleTime"};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__8 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__8_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__8_value)}};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__9 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__9_value;
static const lean_string_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "systemTime"};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__10 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__10_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__10_value)}};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__11 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__11_value;
static lean_once_cell_t l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__12;
static const lean_string_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "niceTime"};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__13 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__13_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__13_value)}};
static const lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__14 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__14_value;
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUTimes_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUTimes_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_System_instReprCPUTimes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_System_instReprCPUTimes_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_instReprCPUTimes___closed__0 = (const lean_object*)&l_Std_Async_System_instReprCPUTimes___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instReprCPUTimes = (const lean_object*)&l_Std_Async_System_instReprCPUTimes___closed__0_value;
static lean_once_cell_t l_Std_Async_System_instInhabitedCPUInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instInhabitedCPUInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Std_Async_System_instInhabitedCPUInfo_default;
LEAN_EXPORT lean_object* l_Std_Async_System_instInhabitedCPUInfo;
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqCPUInfo_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqCPUInfo_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqCPUInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqCPUInfo___boxed(lean_object*, lean_object*);
static const lean_string_object l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "model"};
static const lean_object* l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__0 = (const lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__1 = (const lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__2 = (const lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__2_value),((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__3 = (const lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "speed"};
static const lean_object* l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__4 = (const lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__5 = (const lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__5_value;
static const lean_string_object l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "times"};
static const lean_object* l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__6 = (const lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__6_value;
static const lean_ctor_object l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__6_value)}};
static const lean_object* l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__7 = (const lean_object*)&l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_System_instReprCPUInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_System_instReprCPUInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_instReprCPUInfo___closed__0 = (const lean_object*)&l_Std_Async_System_instReprCPUInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instReprCPUInfo = (const lean_object*)&l_Std_Async_System_instReprCPUInfo___closed__0_value;
static const lean_string_object l_Std_Async_System_instReprOSInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg___closed__0 = (const lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Async_System_instReprOSInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg___closed__1 = (const lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_System_instReprOSInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg___closed__2 = (const lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Async_System_instReprOSInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__2_value),((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg___closed__3 = (const lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__3_value;
static lean_once_cell_t l_Std_Async_System_instReprOSInfo_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg___closed__4;
static const lean_string_object l_Std_Async_System_instReprOSInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "release"};
static const lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg___closed__5 = (const lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__5_value;
static const lean_ctor_object l_Std_Async_System_instReprOSInfo_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg___closed__6 = (const lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__6_value;
static const lean_string_object l_Std_Async_System_instReprOSInfo_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg___closed__7 = (const lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__7_value;
static const lean_ctor_object l_Std_Async_System_instReprOSInfo_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__7_value)}};
static const lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg___closed__8 = (const lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__8_value;
static const lean_string_object l_Std_Async_System_instReprOSInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "machine"};
static const lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg___closed__9 = (const lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__9_value;
static const lean_ctor_object l_Std_Async_System_instReprOSInfo_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__9_value)}};
static const lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg___closed__10 = (const lean_object*)&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprOSInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprOSInfo_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_System_instReprOSInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_System_instReprOSInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_instReprOSInfo___closed__0 = (const lean_object*)&l_Std_Async_System_instReprOSInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instReprOSInfo = (const lean_object*)&l_Std_Async_System_instReprOSInfo___closed__0_value;
static const lean_ctor_object l_Std_Async_System_instInhabitedOSInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_System_instInhabitedSystemUser_default___closed__0_value),((lean_object*)&l_Std_Async_System_instInhabitedSystemUser_default___closed__0_value),((lean_object*)&l_Std_Async_System_instInhabitedSystemUser_default___closed__0_value),((lean_object*)&l_Std_Async_System_instInhabitedSystemUser_default___closed__0_value)}};
static const lean_object* l_Std_Async_System_instInhabitedOSInfo_default___closed__0 = (const lean_object*)&l_Std_Async_System_instInhabitedOSInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instInhabitedOSInfo_default = (const lean_object*)&l_Std_Async_System_instInhabitedOSInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instInhabitedOSInfo = (const lean_object*)&l_Std_Async_System_instInhabitedOSInfo_default___closed__0_value;
static lean_once_cell_t l_Std_Async_System_instInhabitedEnvironment_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instInhabitedEnvironment_default___closed__0;
static lean_once_cell_t l_Std_Async_System_instInhabitedEnvironment_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_instInhabitedEnvironment_default___closed__1;
LEAN_EXPORT lean_object* l_Std_Async_System_instInhabitedEnvironment_default;
LEAN_EXPORT lean_object* l_Std_Async_System_instInhabitedEnvironment;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Async_System_instReprEnvironment_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Async_System_instReprEnvironment_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Async_System_instReprEnvironment_repr_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Async_System_instReprEnvironment_repr_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__2;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__3;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__1(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__3;
static lean_once_cell_t l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__4;
static const lean_ctor_object l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Std_Async_System_instReprEnvironment_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "toHashMap"};
static const lean_object* l_Std_Async_System_instReprEnvironment_repr___redArg___closed__0 = (const lean_object*)&l_Std_Async_System_instReprEnvironment_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Async_System_instReprEnvironment_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprEnvironment_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Async_System_instReprEnvironment_repr___redArg___closed__1 = (const lean_object*)&l_Std_Async_System_instReprEnvironment_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Async_System_instReprEnvironment_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Async_System_instReprEnvironment_repr___redArg___closed__1_value)}};
static const lean_object* l_Std_Async_System_instReprEnvironment_repr___redArg___closed__2 = (const lean_object*)&l_Std_Async_System_instReprEnvironment_repr___redArg___closed__2_value;
static const lean_ctor_object l_Std_Async_System_instReprEnvironment_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprEnvironment_repr___redArg___closed__2_value),((lean_object*)&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5_value)}};
static const lean_object* l_Std_Async_System_instReprEnvironment_repr___redArg___closed__3 = (const lean_object*)&l_Std_Async_System_instReprEnvironment_repr___redArg___closed__3_value;
static const lean_string_object l_Std_Async_System_instReprEnvironment_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.HashMap.ofList "};
static const lean_object* l_Std_Async_System_instReprEnvironment_repr___redArg___closed__4 = (const lean_object*)&l_Std_Async_System_instReprEnvironment_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Async_System_instReprEnvironment_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Async_System_instReprEnvironment_repr___redArg___closed__4_value)}};
static const lean_object* l_Std_Async_System_instReprEnvironment_repr___redArg___closed__5 = (const lean_object*)&l_Std_Async_System_instReprEnvironment_repr___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Async_System_instReprEnvironment_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprEnvironment_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_instReprEnvironment_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_System_instReprEnvironment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_System_instReprEnvironment_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_instReprEnvironment___closed__0 = (const lean_object*)&l_Std_Async_System_instReprEnvironment___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Async_System_instReprEnvironment = (const lean_object*)&l_Std_Async_System_instReprEnvironment___closed__0_value;
static const lean_closure_object l_Std_Async_System_Environment_get_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_Environment_get_x3f___closed__0 = (const lean_object*)&l_Std_Async_System_Environment_get_x3f___closed__0_value;
static lean_once_cell_t l_Std_Async_System_Environment_get_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Async_System_Environment_get_x3f___closed__1;
LEAN_EXPORT lean_object* l_Std_Async_System_Environment_get_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_Environment_get_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getSystemInfo();
LEAN_EXPORT lean_object* l_Std_Async_System_getSystemInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getCPUInfo();
LEAN_EXPORT lean_object* l_Std_Async_System_getCPUInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getUpTime();
LEAN_EXPORT lean_object* l_Std_Async_System_getUpTime___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getHighResolutionTime();
LEAN_EXPORT lean_object* l_Std_Async_System_getHighResolutionTime___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getHostName();
LEAN_EXPORT lean_object* l_Std_Async_System_getHostName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_setEnvVar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_setEnvVar___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getEnvVar(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getEnvVar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_unsetEnvVar(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_unsetEnvVar___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Async_System_getEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_getEnv___closed__0 = (const lean_object*)&l_Std_Async_System_getEnv___closed__0_value;
static const lean_closure_object l_Std_Async_System_getEnv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_getEnv___closed__1 = (const lean_object*)&l_Std_Async_System_getEnv___closed__1_value;
static const lean_closure_object l_Std_Async_System_getEnv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_getEnv___closed__2 = (const lean_object*)&l_Std_Async_System_getEnv___closed__2_value;
static const lean_closure_object l_Std_Async_System_getEnv___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_getEnv___closed__3 = (const lean_object*)&l_Std_Async_System_getEnv___closed__3_value;
static const lean_closure_object l_Std_Async_System_getEnv___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_getEnv___closed__4 = (const lean_object*)&l_Std_Async_System_getEnv___closed__4_value;
static const lean_closure_object l_Std_Async_System_getEnv___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_getEnv___closed__5 = (const lean_object*)&l_Std_Async_System_getEnv___closed__5_value;
static const lean_closure_object l_Std_Async_System_getEnv___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_getEnv___closed__6 = (const lean_object*)&l_Std_Async_System_getEnv___closed__6_value;
static const lean_ctor_object l_Std_Async_System_getEnv___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_System_getEnv___closed__0_value),((lean_object*)&l_Std_Async_System_getEnv___closed__1_value)}};
static const lean_object* l_Std_Async_System_getEnv___closed__7 = (const lean_object*)&l_Std_Async_System_getEnv___closed__7_value;
static const lean_ctor_object l_Std_Async_System_getEnv___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_System_getEnv___closed__7_value),((lean_object*)&l_Std_Async_System_getEnv___closed__2_value),((lean_object*)&l_Std_Async_System_getEnv___closed__3_value),((lean_object*)&l_Std_Async_System_getEnv___closed__4_value),((lean_object*)&l_Std_Async_System_getEnv___closed__5_value)}};
static const lean_object* l_Std_Async_System_getEnv___closed__8 = (const lean_object*)&l_Std_Async_System_getEnv___closed__8_value;
static const lean_ctor_object l_Std_Async_System_getEnv___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Async_System_getEnv___closed__8_value),((lean_object*)&l_Std_Async_System_getEnv___closed__6_value)}};
static const lean_object* l_Std_Async_System_getEnv___closed__9 = (const lean_object*)&l_Std_Async_System_getEnv___closed__9_value;
static const lean_closure_object l_Std_Async_System_getEnv___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_instForIn_x27InferInstanceMembershipOfMonad___redArg___lam__0, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_System_getEnv___closed__9_value)} };
static const lean_object* l_Std_Async_System_getEnv___closed__10 = (const lean_object*)&l_Std_Async_System_getEnv___closed__10_value;
static const lean_closure_object l_Std_Async_System_getEnv___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instForInOfForIn_x27___redArg___lam__1, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Std_Async_System_getEnv___closed__10_value)} };
static const lean_object* l_Std_Async_System_getEnv___closed__11 = (const lean_object*)&l_Std_Async_System_getEnv___closed__11_value;
LEAN_EXPORT lean_object* l_Std_Async_System_getEnv();
LEAN_EXPORT lean_object* l_Std_Async_System_getEnv___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getHomeDir();
LEAN_EXPORT lean_object* l_Std_Async_System_getHomeDir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getTmpDir();
LEAN_EXPORT lean_object* l_Std_Async_System_getTmpDir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getCurrentUser();
LEAN_EXPORT lean_object* l_Std_Async_System_getCurrentUser___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00Std_Async_System_getGroup_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00Std_Async_System_getGroup_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getGroup___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getGroup___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Async_System_getGroup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Async_System_getGroup___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Async_System_getGroup___closed__0 = (const lean_object*)&l_Std_Async_System_getGroup___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Async_System_getGroup(lean_object*);
LEAN_EXPORT lean_object* l_Std_Async_System_getGroup___boxed(lean_object*, lean_object*);
static lean_object* _init_l_Std_Async_System_instInhabitedGroupId_default(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_unsigned_to_nat(0u);
return v___x_1_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedGroupId(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqGroupId_decEq(lean_object* v_x_3_, lean_object* v_x_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_nat_dec_eq(v_x_3_, v_x_4_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqGroupId_decEq___boxed(lean_object* v_x_6_, lean_object* v_x_7_){
_start:
{
uint8_t v_res_8_; lean_object* v_r_9_; 
v_res_8_ = l_Std_Async_System_instDecidableEqGroupId_decEq(v_x_6_, v_x_7_);
lean_dec(v_x_7_);
lean_dec(v_x_6_);
v_r_9_ = lean_box(v_res_8_);
return v_r_9_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqGroupId(lean_object* v_x_10_, lean_object* v_x_11_){
_start:
{
uint8_t v___x_12_; 
v___x_12_ = lean_nat_dec_eq(v_x_10_, v_x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqGroupId___boxed(lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
uint8_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Std_Async_System_instDecidableEqGroupId(v_x_13_, v_x_14_);
lean_dec(v_x_14_);
lean_dec(v_x_13_);
v_r_16_ = lean_box(v_res_15_);
return v_r_16_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instOrdGroupId_ord(lean_object* v_x_17_, lean_object* v_x_18_){
_start:
{
uint8_t v___x_19_; 
v___x_19_ = lean_nat_dec_lt(v_x_17_, v_x_18_);
if (v___x_19_ == 0)
{
uint8_t v___x_20_; 
v___x_20_ = lean_nat_dec_eq(v_x_17_, v_x_18_);
if (v___x_20_ == 0)
{
uint8_t v___x_21_; 
v___x_21_ = 2;
return v___x_21_;
}
else
{
uint8_t v___x_22_; 
v___x_22_ = 1;
return v___x_22_;
}
}
else
{
uint8_t v___x_23_; 
v___x_23_ = 0;
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instOrdGroupId_ord___boxed(lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = l_Std_Async_System_instOrdGroupId_ord(v_x_24_, v_x_25_);
lean_dec(v_x_25_);
lean_dec(v_x_24_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprGroupId___lam__0(lean_object* v_g_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_35_ = ((lean_object*)(l_Std_Async_System_instReprGroupId___lam__0___closed__1));
v___x_36_ = l_Nat_reprFast(v_g_33_);
v___x_37_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
v___x_38_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_35_);
lean_ctor_set(v___x_38_, 1, v___x_37_);
v___x_39_ = l_Repr_addAppParen(v___x_38_, v___y_34_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprGroupId___lam__0___boxed(lean_object* v_g_40_, lean_object* v___y_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Std_Async_System_instReprGroupId___lam__0(v_g_40_, v___y_41_);
lean_dec(v___y_41_);
return v_res_42_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedUserId_default(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_unsigned_to_nat(0u);
return v___x_45_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedUserId(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_unsigned_to_nat(0u);
return v___x_46_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqUserId_decEq(lean_object* v_x_47_, lean_object* v_x_48_){
_start:
{
uint8_t v___x_49_; 
v___x_49_ = lean_nat_dec_eq(v_x_47_, v_x_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqUserId_decEq___boxed(lean_object* v_x_50_, lean_object* v_x_51_){
_start:
{
uint8_t v_res_52_; lean_object* v_r_53_; 
v_res_52_ = l_Std_Async_System_instDecidableEqUserId_decEq(v_x_50_, v_x_51_);
lean_dec(v_x_51_);
lean_dec(v_x_50_);
v_r_53_ = lean_box(v_res_52_);
return v_r_53_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqUserId(lean_object* v_x_54_, lean_object* v_x_55_){
_start:
{
uint8_t v___x_56_; 
v___x_56_ = lean_nat_dec_eq(v_x_54_, v_x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqUserId___boxed(lean_object* v_x_57_, lean_object* v_x_58_){
_start:
{
uint8_t v_res_59_; lean_object* v_r_60_; 
v_res_59_ = l_Std_Async_System_instDecidableEqUserId(v_x_57_, v_x_58_);
lean_dec(v_x_58_);
lean_dec(v_x_57_);
v_r_60_ = lean_box(v_res_59_);
return v_r_60_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instOrdUserId_ord(lean_object* v_x_61_, lean_object* v_x_62_){
_start:
{
uint8_t v___x_63_; 
v___x_63_ = lean_nat_dec_lt(v_x_61_, v_x_62_);
if (v___x_63_ == 0)
{
uint8_t v___x_64_; 
v___x_64_ = lean_nat_dec_eq(v_x_61_, v_x_62_);
if (v___x_64_ == 0)
{
uint8_t v___x_65_; 
v___x_65_ = 2;
return v___x_65_;
}
else
{
uint8_t v___x_66_; 
v___x_66_ = 1;
return v___x_66_;
}
}
else
{
uint8_t v___x_67_; 
v___x_67_ = 0;
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instOrdUserId_ord___boxed(lean_object* v_x_68_, lean_object* v_x_69_){
_start:
{
uint8_t v_res_70_; lean_object* v_r_71_; 
v_res_70_ = l_Std_Async_System_instOrdUserId_ord(v_x_68_, v_x_69_);
lean_dec(v_x_69_);
lean_dec(v_x_68_);
v_r_71_ = lean_box(v_res_70_);
return v_r_71_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprUserId___lam__0(lean_object* v_u_77_, lean_object* v___y_78_){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_79_ = ((lean_object*)(l_Std_Async_System_instReprUserId___lam__0___closed__1));
v___x_80_ = l_Nat_reprFast(v_u_77_);
v___x_81_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_79_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = l_Repr_addAppParen(v___x_82_, v___y_78_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprUserId___lam__0___boxed(lean_object* v_u_84_, lean_object* v___y_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Std_Async_System_instReprUserId___lam__0(v_u_84_, v___y_85_);
lean_dec(v___y_85_);
return v_res_86_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqSystemUser_decEq(lean_object* v_x_95_, lean_object* v_x_96_){
_start:
{
lean_object* v_username_97_; lean_object* v_userId_98_; lean_object* v_groupId_99_; lean_object* v_shell_100_; lean_object* v_homeDir_101_; lean_object* v_username_102_; lean_object* v_userId_103_; lean_object* v_groupId_104_; lean_object* v_shell_105_; lean_object* v_homeDir_106_; uint8_t v___x_107_; 
v_username_97_ = lean_ctor_get(v_x_95_, 0);
lean_inc_ref(v_username_97_);
v_userId_98_ = lean_ctor_get(v_x_95_, 1);
lean_inc(v_userId_98_);
v_groupId_99_ = lean_ctor_get(v_x_95_, 2);
lean_inc(v_groupId_99_);
v_shell_100_ = lean_ctor_get(v_x_95_, 3);
lean_inc(v_shell_100_);
v_homeDir_101_ = lean_ctor_get(v_x_95_, 4);
lean_inc(v_homeDir_101_);
lean_dec_ref(v_x_95_);
v_username_102_ = lean_ctor_get(v_x_96_, 0);
lean_inc_ref(v_username_102_);
v_userId_103_ = lean_ctor_get(v_x_96_, 1);
lean_inc(v_userId_103_);
v_groupId_104_ = lean_ctor_get(v_x_96_, 2);
lean_inc(v_groupId_104_);
v_shell_105_ = lean_ctor_get(v_x_96_, 3);
lean_inc(v_shell_105_);
v_homeDir_106_ = lean_ctor_get(v_x_96_, 4);
lean_inc(v_homeDir_106_);
lean_dec_ref(v_x_96_);
v___x_107_ = lean_string_dec_eq(v_username_97_, v_username_102_);
lean_dec_ref(v_username_102_);
lean_dec_ref(v_username_97_);
if (v___x_107_ == 0)
{
lean_dec(v_homeDir_106_);
lean_dec(v_shell_105_);
lean_dec(v_groupId_104_);
lean_dec(v_userId_103_);
lean_dec(v_homeDir_101_);
lean_dec(v_shell_100_);
lean_dec(v_groupId_99_);
lean_dec(v_userId_98_);
return v___x_107_;
}
else
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = lean_alloc_closure((void*)(l_Std_Async_System_instDecidableEqUserId___boxed), 2, 0);
v___x_109_ = l_Option_instDecidableEq___redArg(v___x_108_, v_userId_98_, v_userId_103_);
if (v___x_109_ == 0)
{
lean_dec(v_homeDir_106_);
lean_dec(v_shell_105_);
lean_dec(v_groupId_104_);
lean_dec(v_homeDir_101_);
lean_dec(v_shell_100_);
lean_dec(v_groupId_99_);
return v___x_109_;
}
else
{
lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_110_ = lean_alloc_closure((void*)(l_Std_Async_System_instDecidableEqGroupId___boxed), 2, 0);
v___x_111_ = l_Option_instDecidableEq___redArg(v___x_110_, v_groupId_99_, v_groupId_104_);
if (v___x_111_ == 0)
{
lean_dec(v_homeDir_106_);
lean_dec(v_shell_105_);
lean_dec(v_homeDir_101_);
lean_dec(v_shell_100_);
return v___x_111_;
}
else
{
lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_112_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___x_113_ = l_Option_instDecidableEq___redArg(v___x_112_, v_shell_100_, v_shell_105_);
if (v___x_113_ == 0)
{
lean_dec(v_homeDir_106_);
lean_dec(v_homeDir_101_);
return v___x_113_;
}
else
{
lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_114_ = lean_alloc_closure((void*)(l_System_instDecidableEqFilePath___boxed), 2, 0);
v___x_115_ = l_Option_instDecidableEq___redArg(v___x_114_, v_homeDir_101_, v_homeDir_106_);
return v___x_115_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqSystemUser_decEq___boxed(lean_object* v_x_116_, lean_object* v_x_117_){
_start:
{
uint8_t v_res_118_; lean_object* v_r_119_; 
v_res_118_ = l_Std_Async_System_instDecidableEqSystemUser_decEq(v_x_116_, v_x_117_);
v_r_119_ = lean_box(v_res_118_);
return v_r_119_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqSystemUser(lean_object* v_x_120_, lean_object* v_x_121_){
_start:
{
uint8_t v___x_122_; 
v___x_122_ = l_Std_Async_System_instDecidableEqSystemUser_decEq(v_x_120_, v_x_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqSystemUser___boxed(lean_object* v_x_123_, lean_object* v_x_124_){
_start:
{
uint8_t v_res_125_; lean_object* v_r_126_; 
v_res_125_ = l_Std_Async_System_instDecidableEqSystemUser(v_x_123_, v_x_124_);
v_r_126_ = lean_box(v_res_125_);
return v_r_126_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0(lean_object* v_x_133_, lean_object* v_x_134_){
_start:
{
if (lean_obj_tag(v_x_133_) == 0)
{
lean_object* v___x_135_; 
v___x_135_ = ((lean_object*)(l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__1));
return v___x_135_;
}
else
{
lean_object* v_val_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_151_; 
v_val_136_ = lean_ctor_get(v_x_133_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v_x_133_);
if (v_isSharedCheck_151_ == 0)
{
v___x_138_ = v_x_133_;
v_isShared_139_ = v_isSharedCheck_151_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_val_136_);
lean_dec(v_x_133_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_151_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_145_; 
v___x_140_ = ((lean_object*)(l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__3));
v___x_141_ = lean_unsigned_to_nat(1024u);
v___x_142_ = ((lean_object*)(l_Std_Async_System_instReprUserId___lam__0___closed__1));
v___x_143_ = l_Nat_reprFast(v_val_136_);
if (v_isShared_139_ == 0)
{
lean_ctor_set_tag(v___x_138_, 3);
lean_ctor_set(v___x_138_, 0, v___x_143_);
v___x_145_ = v___x_138_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_143_);
v___x_145_ = v_reuseFailAlloc_150_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_142_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = l_Repr_addAppParen(v___x_146_, v___x_141_);
v___x_148_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_140_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = l_Repr_addAppParen(v___x_148_, v_x_134_);
return v___x_149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___boxed(lean_object* v_x_152_, lean_object* v_x_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0(v_x_152_, v_x_153_);
lean_dec(v_x_153_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__1(lean_object* v_x_155_, lean_object* v_x_156_){
_start:
{
if (lean_obj_tag(v_x_155_) == 0)
{
lean_object* v___x_157_; 
v___x_157_ = ((lean_object*)(l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__1));
return v___x_157_;
}
else
{
lean_object* v_val_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_173_; 
v_val_158_ = lean_ctor_get(v_x_155_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v_x_155_);
if (v_isSharedCheck_173_ == 0)
{
v___x_160_ = v_x_155_;
v_isShared_161_ = v_isSharedCheck_173_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_val_158_);
lean_dec(v_x_155_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_173_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_167_; 
v___x_162_ = ((lean_object*)(l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__3));
v___x_163_ = lean_unsigned_to_nat(1024u);
v___x_164_ = ((lean_object*)(l_Std_Async_System_instReprGroupId___lam__0___closed__1));
v___x_165_ = l_Nat_reprFast(v_val_158_);
if (v_isShared_161_ == 0)
{
lean_ctor_set_tag(v___x_160_, 3);
lean_ctor_set(v___x_160_, 0, v___x_165_);
v___x_167_ = v___x_160_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_165_);
v___x_167_ = v_reuseFailAlloc_172_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_168_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_164_);
lean_ctor_set(v___x_168_, 1, v___x_167_);
v___x_169_ = l_Repr_addAppParen(v___x_168_, v___x_163_);
v___x_170_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_162_);
lean_ctor_set(v___x_170_, 1, v___x_169_);
v___x_171_ = l_Repr_addAppParen(v___x_170_, v_x_156_);
return v___x_171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__1___boxed(lean_object* v_x_174_, lean_object* v_x_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__1(v_x_174_, v_x_175_);
lean_dec(v_x_175_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__2(lean_object* v_x_177_, lean_object* v_x_178_){
_start:
{
if (lean_obj_tag(v_x_177_) == 0)
{
lean_object* v___x_179_; 
v___x_179_ = ((lean_object*)(l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__1));
return v___x_179_;
}
else
{
lean_object* v_val_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_191_; 
v_val_180_ = lean_ctor_get(v_x_177_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v_x_177_);
if (v_isSharedCheck_191_ == 0)
{
v___x_182_ = v_x_177_;
v_isShared_183_ = v_isSharedCheck_191_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_val_180_);
lean_dec(v_x_177_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_191_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_187_; 
v___x_184_ = ((lean_object*)(l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__3));
v___x_185_ = l_String_quote(v_val_180_);
if (v_isShared_183_ == 0)
{
lean_ctor_set_tag(v___x_182_, 3);
lean_ctor_set(v___x_182_, 0, v___x_185_);
v___x_187_ = v___x_182_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_185_);
v___x_187_ = v_reuseFailAlloc_190_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_184_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = l_Repr_addAppParen(v___x_188_, v_x_178_);
return v___x_189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__2___boxed(lean_object* v_x_192_, lean_object* v_x_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__2(v_x_192_, v_x_193_);
lean_dec(v_x_193_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3(lean_object* v_x_198_, lean_object* v_x_199_){
_start:
{
if (lean_obj_tag(v_x_198_) == 0)
{
lean_object* v___x_200_; 
v___x_200_ = ((lean_object*)(l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__1));
return v___x_200_;
}
else
{
lean_object* v_val_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_216_; 
v_val_201_ = lean_ctor_get(v_x_198_, 0);
v_isSharedCheck_216_ = !lean_is_exclusive(v_x_198_);
if (v_isSharedCheck_216_ == 0)
{
v___x_203_ = v_x_198_;
v_isShared_204_ = v_isSharedCheck_216_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_val_201_);
lean_dec(v_x_198_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_216_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_205_ = ((lean_object*)(l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0___closed__3));
v___x_206_ = lean_unsigned_to_nat(1024u);
v___x_207_ = ((lean_object*)(l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3___closed__1));
v___x_208_ = l_String_quote(v_val_201_);
if (v_isShared_204_ == 0)
{
lean_ctor_set_tag(v___x_203_, 3);
lean_ctor_set(v___x_203_, 0, v___x_208_);
v___x_210_ = v___x_203_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_208_);
v___x_210_ = v_reuseFailAlloc_215_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_207_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___x_212_ = l_Repr_addAppParen(v___x_211_, v___x_206_);
v___x_213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_205_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
v___x_214_ = l_Repr_addAppParen(v___x_213_, v_x_199_);
return v___x_214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3___boxed(lean_object* v_x_217_, lean_object* v_x_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3(v_x_217_, v_x_218_);
lean_dec(v_x_218_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Async_System_instReprSystemUser_repr_spec__4(lean_object* v_a_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_nat_to_int(v_a_220_);
return v___x_221_;
}
}
static lean_object* _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = lean_unsigned_to_nat(12u);
v___x_236_ = lean_nat_to_int(v___x_235_);
return v___x_236_;
}
}
static lean_object* _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_243_ = lean_unsigned_to_nat(10u);
v___x_244_ = lean_nat_to_int(v___x_243_);
return v___x_244_;
}
}
static lean_object* _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = lean_unsigned_to_nat(11u);
v___x_249_ = lean_nat_to_int(v___x_248_);
return v___x_249_;
}
}
static lean_object* _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = lean_unsigned_to_nat(9u);
v___x_254_ = lean_nat_to_int(v___x_253_);
return v___x_254_;
}
}
static lean_object* _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__0));
v___x_260_ = lean_string_length(v___x_259_);
return v___x_260_;
}
}
static lean_object* _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__22, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__22_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__22);
v___x_262_ = lean_nat_to_int(v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprSystemUser_repr___redArg(lean_object* v_x_267_){
_start:
{
lean_object* v_username_268_; lean_object* v_userId_269_; lean_object* v_groupId_270_; lean_object* v_shell_271_; lean_object* v_homeDir_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; uint8_t v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_username_268_ = lean_ctor_get(v_x_267_, 0);
lean_inc_ref(v_username_268_);
v_userId_269_ = lean_ctor_get(v_x_267_, 1);
lean_inc(v_userId_269_);
v_groupId_270_ = lean_ctor_get(v_x_267_, 2);
lean_inc(v_groupId_270_);
v_shell_271_ = lean_ctor_get(v_x_267_, 3);
lean_inc(v_shell_271_);
v_homeDir_272_ = lean_ctor_get(v_x_267_, 4);
lean_inc(v_homeDir_272_);
lean_dec_ref(v_x_267_);
v___x_273_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5));
v___x_274_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__6));
v___x_275_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__7, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__7_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__7);
v___x_276_ = l_String_quote(v_username_268_);
v___x_277_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
v___x_278_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_275_);
lean_ctor_set(v___x_278_, 1, v___x_277_);
v___x_279_ = 0;
v___x_280_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_280_, 0, v___x_278_);
lean_ctor_set_uint8(v___x_280_, sizeof(void*)*1, v___x_279_);
v___x_281_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_281_, 0, v___x_274_);
lean_ctor_set(v___x_281_, 1, v___x_280_);
v___x_282_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__9));
v___x_283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_281_);
lean_ctor_set(v___x_283_, 1, v___x_282_);
v___x_284_ = lean_box(1);
v___x_285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_285_, 0, v___x_283_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
v___x_286_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__11));
v___x_287_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_285_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
v___x_288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
lean_ctor_set(v___x_288_, 1, v___x_273_);
v___x_289_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__12, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__12_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__12);
v___x_290_ = lean_unsigned_to_nat(0u);
v___x_291_ = l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__0(v_userId_269_, v___x_290_);
v___x_292_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_289_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_293_, 0, v___x_292_);
lean_ctor_set_uint8(v___x_293_, sizeof(void*)*1, v___x_279_);
v___x_294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_288_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set(v___x_295_, 1, v___x_282_);
v___x_296_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
lean_ctor_set(v___x_296_, 1, v___x_284_);
v___x_297_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__14));
v___x_298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_296_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
v___x_299_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
lean_ctor_set(v___x_299_, 1, v___x_273_);
v___x_300_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15);
v___x_301_ = l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__1(v_groupId_270_, v___x_290_);
v___x_302_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_302_, 0, v___x_300_);
lean_ctor_set(v___x_302_, 1, v___x_301_);
v___x_303_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_303_, 0, v___x_302_);
lean_ctor_set_uint8(v___x_303_, sizeof(void*)*1, v___x_279_);
v___x_304_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_299_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v___x_305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v___x_282_);
v___x_306_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
lean_ctor_set(v___x_306_, 1, v___x_284_);
v___x_307_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__17));
v___x_308_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_308_, 0, v___x_306_);
lean_ctor_set(v___x_308_, 1, v___x_307_);
v___x_309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_308_);
lean_ctor_set(v___x_309_, 1, v___x_273_);
v___x_310_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__18, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__18_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__18);
v___x_311_ = l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__2(v_shell_271_, v___x_290_);
v___x_312_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_310_);
lean_ctor_set(v___x_312_, 1, v___x_311_);
v___x_313_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_313_, 0, v___x_312_);
lean_ctor_set_uint8(v___x_313_, sizeof(void*)*1, v___x_279_);
v___x_314_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_314_, 0, v___x_309_);
lean_ctor_set(v___x_314_, 1, v___x_313_);
v___x_315_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
lean_ctor_set(v___x_315_, 1, v___x_282_);
v___x_316_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
lean_ctor_set(v___x_316_, 1, v___x_284_);
v___x_317_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__20));
v___x_318_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_316_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
v___x_319_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v___x_273_);
v___x_320_ = l_Option_repr___at___00Std_Async_System_instReprSystemUser_repr_spec__3(v_homeDir_272_, v___x_290_);
v___x_321_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_321_, 0, v___x_300_);
lean_ctor_set(v___x_321_, 1, v___x_320_);
v___x_322_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set_uint8(v___x_322_, sizeof(void*)*1, v___x_279_);
v___x_323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_319_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23);
v___x_325_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__24));
v___x_326_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
lean_ctor_set(v___x_326_, 1, v___x_323_);
v___x_327_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__25));
v___x_328_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_326_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
v___x_329_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_329_, 0, v___x_324_);
lean_ctor_set(v___x_329_, 1, v___x_328_);
v___x_330_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_330_, 0, v___x_329_);
lean_ctor_set_uint8(v___x_330_, sizeof(void*)*1, v___x_279_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprSystemUser_repr(lean_object* v_x_331_, lean_object* v_prec_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Std_Async_System_instReprSystemUser_repr___redArg(v_x_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprSystemUser_repr___boxed(lean_object* v_x_334_, lean_object* v_prec_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Std_Async_System_instReprSystemUser_repr(v_x_334_, v_prec_335_);
lean_dec(v_prec_335_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0___lam__0(lean_object* v___y_339_){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = l_String_quote(v___y_339_);
v___x_341_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_342_, lean_object* v_x_343_, lean_object* v_x_344_){
_start:
{
if (lean_obj_tag(v_x_344_) == 0)
{
lean_dec(v_x_342_);
return v_x_343_;
}
else
{
lean_object* v_head_345_; lean_object* v_tail_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_357_; 
v_head_345_ = lean_ctor_get(v_x_344_, 0);
v_tail_346_ = lean_ctor_get(v_x_344_, 1);
v_isSharedCheck_357_ = !lean_is_exclusive(v_x_344_);
if (v_isSharedCheck_357_ == 0)
{
v___x_348_ = v_x_344_;
v_isShared_349_ = v_isSharedCheck_357_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_tail_346_);
lean_inc(v_head_345_);
lean_dec(v_x_344_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_357_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
lean_inc(v_x_342_);
if (v_isShared_349_ == 0)
{
lean_ctor_set_tag(v___x_348_, 5);
lean_ctor_set(v___x_348_, 1, v_x_342_);
lean_ctor_set(v___x_348_, 0, v_x_343_);
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_x_343_);
lean_ctor_set(v_reuseFailAlloc_356_, 1, v_x_342_);
v___x_351_ = v_reuseFailAlloc_356_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = l_String_quote(v_head_345_);
v___x_353_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
v___x_354_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_351_);
lean_ctor_set(v___x_354_, 1, v___x_353_);
v_x_343_ = v___x_354_;
v_x_344_ = v_tail_346_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0_spec__1(lean_object* v_x_358_, lean_object* v_x_359_, lean_object* v_x_360_){
_start:
{
if (lean_obj_tag(v_x_360_) == 0)
{
lean_dec(v_x_358_);
return v_x_359_;
}
else
{
lean_object* v_head_361_; lean_object* v_tail_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_373_; 
v_head_361_ = lean_ctor_get(v_x_360_, 0);
v_tail_362_ = lean_ctor_get(v_x_360_, 1);
v_isSharedCheck_373_ = !lean_is_exclusive(v_x_360_);
if (v_isSharedCheck_373_ == 0)
{
v___x_364_ = v_x_360_;
v_isShared_365_ = v_isSharedCheck_373_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_tail_362_);
lean_inc(v_head_361_);
lean_dec(v_x_360_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_373_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
lean_inc(v_x_358_);
if (v_isShared_365_ == 0)
{
lean_ctor_set_tag(v___x_364_, 5);
lean_ctor_set(v___x_364_, 1, v_x_358_);
lean_ctor_set(v___x_364_, 0, v_x_359_);
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_x_359_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v_x_358_);
v___x_367_ = v_reuseFailAlloc_372_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_368_ = l_String_quote(v_head_361_);
v___x_369_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
v___x_370_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_367_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
v___x_371_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0_spec__1_spec__2(v_x_358_, v___x_370_, v_tail_362_);
return v___x_371_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0(lean_object* v_x_374_, lean_object* v_x_375_){
_start:
{
if (lean_obj_tag(v_x_374_) == 0)
{
lean_object* v___x_376_; 
lean_dec(v_x_375_);
v___x_376_ = lean_box(0);
return v___x_376_;
}
else
{
lean_object* v_tail_377_; 
v_tail_377_ = lean_ctor_get(v_x_374_, 1);
if (lean_obj_tag(v_tail_377_) == 0)
{
lean_object* v_head_378_; lean_object* v___x_379_; 
lean_dec(v_x_375_);
v_head_378_ = lean_ctor_get(v_x_374_, 0);
lean_inc(v_head_378_);
lean_dec_ref_known(v_x_374_, 2);
v___x_379_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0___lam__0(v_head_378_);
return v___x_379_;
}
else
{
lean_object* v_head_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
lean_inc(v_tail_377_);
v_head_380_ = lean_ctor_get(v_x_374_, 0);
lean_inc(v_head_380_);
lean_dec_ref_known(v_x_374_, 2);
v___x_381_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0___lam__0(v_head_380_);
v___x_382_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0_spec__1(v_x_375_, v___x_381_, v_tail_377_);
return v___x_382_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = ((lean_object*)(l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__0));
v___x_389_ = lean_string_length(v___x_388_);
return v___x_389_;
}
}
static lean_object* _init_l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__4(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_obj_once(&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__3, &l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__3);
v___x_391_ = lean_nat_to_int(v___x_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0(lean_object* v_xs_399_){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; uint8_t v___x_402_; 
v___x_400_ = lean_array_get_size(v_xs_399_);
v___x_401_ = lean_unsigned_to_nat(0u);
v___x_402_ = lean_nat_dec_eq(v___x_400_, v___x_401_);
if (v___x_402_ == 0)
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_403_ = lean_array_to_list(v_xs_399_);
v___x_404_ = ((lean_object*)(l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__1));
v___x_405_ = l_Std_Format_joinSep___at___00Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0_spec__0(v___x_403_, v___x_404_);
v___x_406_ = lean_obj_once(&l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__4, &l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__4_once, _init_l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__4);
v___x_407_ = ((lean_object*)(l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__5));
v___x_408_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_408_, 0, v___x_407_);
lean_ctor_set(v___x_408_, 1, v___x_405_);
v___x_409_ = ((lean_object*)(l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__6));
v___x_410_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_410_, 0, v___x_408_);
lean_ctor_set(v___x_410_, 1, v___x_409_);
v___x_411_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_406_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
v___x_412_ = l_Std_Format_fill(v___x_411_);
return v___x_412_;
}
else
{
lean_object* v___x_413_; 
lean_dec_ref(v_xs_399_);
v___x_413_ = ((lean_object*)(l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__8));
return v___x_413_;
}
}
}
static lean_object* _init_l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = lean_unsigned_to_nat(13u);
v___x_424_ = lean_nat_to_int(v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprGroupInfo_repr___redArg(lean_object* v_x_428_){
_start:
{
lean_object* v_groupName_429_; lean_object* v_groupId_430_; lean_object* v_members_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v_groupName_429_ = lean_ctor_get(v_x_428_, 0);
lean_inc_ref(v_groupName_429_);
v_groupId_430_ = lean_ctor_get(v_x_428_, 1);
lean_inc(v_groupId_430_);
v_members_431_ = lean_ctor_get(v_x_428_, 2);
lean_inc_ref(v_members_431_);
lean_dec_ref(v_x_428_);
v___x_432_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5));
v___x_433_ = ((lean_object*)(l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__3));
v___x_434_ = lean_obj_once(&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__4, &l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__4_once, _init_l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__4);
v___x_435_ = l_String_quote(v_groupName_429_);
v___x_436_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
v___x_437_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_434_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = 0;
v___x_439_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set_uint8(v___x_439_, sizeof(void*)*1, v___x_438_);
v___x_440_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_440_, 0, v___x_433_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__9));
v___x_442_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_440_);
lean_ctor_set(v___x_442_, 1, v___x_441_);
v___x_443_ = lean_box(1);
v___x_444_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_442_);
lean_ctor_set(v___x_444_, 1, v___x_443_);
v___x_445_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__14));
v___x_446_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_444_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
v___x_447_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
lean_ctor_set(v___x_447_, 1, v___x_432_);
v___x_448_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15);
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = ((lean_object*)(l_Std_Async_System_instReprGroupId___lam__0___closed__1));
v___x_451_ = l_Nat_reprFast(v_groupId_430_);
v___x_452_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
v___x_453_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_450_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = l_Repr_addAppParen(v___x_453_, v___x_449_);
v___x_455_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_448_);
lean_ctor_set(v___x_455_, 1, v___x_454_);
v___x_456_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_456_, 0, v___x_455_);
lean_ctor_set_uint8(v___x_456_, sizeof(void*)*1, v___x_438_);
v___x_457_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_447_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v___x_458_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v___x_441_);
v___x_459_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
lean_ctor_set(v___x_459_, 1, v___x_443_);
v___x_460_ = ((lean_object*)(l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__6));
v___x_461_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_461_, 0, v___x_459_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
v___x_462_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
lean_ctor_set(v___x_462_, 1, v___x_432_);
v___x_463_ = l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0(v_members_431_);
v___x_464_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_448_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_465_, 0, v___x_464_);
lean_ctor_set_uint8(v___x_465_, sizeof(void*)*1, v___x_438_);
v___x_466_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_466_, 0, v___x_462_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
v___x_467_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23);
v___x_468_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__24));
v___x_469_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
lean_ctor_set(v___x_469_, 1, v___x_466_);
v___x_470_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__25));
v___x_471_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_469_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
v___x_472_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_467_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
v___x_473_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_473_, 0, v___x_472_);
lean_ctor_set_uint8(v___x_473_, sizeof(void*)*1, v___x_438_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprGroupInfo_repr(lean_object* v_x_474_, lean_object* v_prec_475_){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = l_Std_Async_System_instReprGroupInfo_repr___redArg(v_x_474_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprGroupInfo_repr___boxed(lean_object* v_x_477_, lean_object* v_prec_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Std_Async_System_instReprGroupInfo_repr(v_x_477_, v_prec_478_);
lean_dec(v_prec_478_);
return v_res_479_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedCPUTimes_default___closed__0(void){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = l_Std_Time_Internal_instInhabitedUnitVal_default___redArg();
return v___x_490_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedCPUTimes_default___closed__1(void){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_491_ = lean_obj_once(&l_Std_Async_System_instInhabitedCPUTimes_default___closed__0, &l_Std_Async_System_instInhabitedCPUTimes_default___closed__0_once, _init_l_Std_Async_System_instInhabitedCPUTimes_default___closed__0);
v___x_492_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
lean_ctor_set(v___x_492_, 2, v___x_491_);
lean_ctor_set(v___x_492_, 3, v___x_491_);
lean_ctor_set(v___x_492_, 4, v___x_491_);
return v___x_492_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedCPUTimes_default(void){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = lean_obj_once(&l_Std_Async_System_instInhabitedCPUTimes_default___closed__1, &l_Std_Async_System_instInhabitedCPUTimes_default___closed__1_once, _init_l_Std_Async_System_instInhabitedCPUTimes_default___closed__1);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Std_Async_System_instInhabitedCPUTimes_default_spec__0(lean_object* v_a_494_){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_495_ = lean_nat_to_int(v_a_494_);
v___x_496_ = l_Rat_ofInt(v___x_495_);
return v___x_496_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedCPUTimes(void){
_start:
{
lean_object* v___x_497_; 
v___x_497_ = l_Std_Async_System_instInhabitedCPUTimes_default;
return v___x_497_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqCPUTimes_decEq(lean_object* v_x_498_, lean_object* v_x_499_){
_start:
{
lean_object* v_userTime_500_; lean_object* v_niceTime_501_; lean_object* v_systemTime_502_; lean_object* v_idleTime_503_; lean_object* v_interruptTime_504_; lean_object* v_userTime_505_; lean_object* v_niceTime_506_; lean_object* v_systemTime_507_; lean_object* v_idleTime_508_; lean_object* v_interruptTime_509_; uint8_t v___x_510_; 
v_userTime_500_ = lean_ctor_get(v_x_498_, 0);
v_niceTime_501_ = lean_ctor_get(v_x_498_, 1);
v_systemTime_502_ = lean_ctor_get(v_x_498_, 2);
v_idleTime_503_ = lean_ctor_get(v_x_498_, 3);
v_interruptTime_504_ = lean_ctor_get(v_x_498_, 4);
v_userTime_505_ = lean_ctor_get(v_x_499_, 0);
v_niceTime_506_ = lean_ctor_get(v_x_499_, 1);
v_systemTime_507_ = lean_ctor_get(v_x_499_, 2);
v_idleTime_508_ = lean_ctor_get(v_x_499_, 3);
v_interruptTime_509_ = lean_ctor_get(v_x_499_, 4);
v___x_510_ = lean_int_dec_eq(v_userTime_500_, v_userTime_505_);
if (v___x_510_ == 0)
{
return v___x_510_;
}
else
{
uint8_t v___x_511_; 
v___x_511_ = lean_int_dec_eq(v_niceTime_501_, v_niceTime_506_);
if (v___x_511_ == 0)
{
return v___x_511_;
}
else
{
uint8_t v___x_512_; 
v___x_512_ = lean_int_dec_eq(v_systemTime_502_, v_systemTime_507_);
if (v___x_512_ == 0)
{
return v___x_512_;
}
else
{
uint8_t v___x_513_; 
v___x_513_ = lean_int_dec_eq(v_idleTime_503_, v_idleTime_508_);
if (v___x_513_ == 0)
{
return v___x_513_;
}
else
{
uint8_t v___x_514_; 
v___x_514_ = lean_int_dec_eq(v_interruptTime_504_, v_interruptTime_509_);
return v___x_514_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqCPUTimes_decEq___boxed(lean_object* v_x_515_, lean_object* v_x_516_){
_start:
{
uint8_t v_res_517_; lean_object* v_r_518_; 
v_res_517_ = l_Std_Async_System_instDecidableEqCPUTimes_decEq(v_x_515_, v_x_516_);
lean_dec_ref(v_x_516_);
lean_dec_ref(v_x_515_);
v_r_518_ = lean_box(v_res_517_);
return v_r_518_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqCPUTimes(lean_object* v_x_519_, lean_object* v_x_520_){
_start:
{
uint8_t v___x_521_; 
v___x_521_ = l_Std_Async_System_instDecidableEqCPUTimes_decEq(v_x_519_, v_x_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqCPUTimes___boxed(lean_object* v_x_522_, lean_object* v_x_523_){
_start:
{
uint8_t v_res_524_; lean_object* v_r_525_; 
v_res_524_ = l_Std_Async_System_instDecidableEqCPUTimes(v_x_522_, v_x_523_);
lean_dec_ref(v_x_523_);
lean_dec_ref(v_x_522_);
v_r_525_ = lean_box(v_res_524_);
return v_r_525_;
}
}
static lean_object* _init_l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = lean_unsigned_to_nat(17u);
v___x_539_ = lean_nat_to_int(v___x_538_);
return v___x_539_;
}
}
static lean_object* _init_l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_540_ = lean_unsigned_to_nat(0u);
v___x_541_ = lean_nat_to_int(v___x_540_);
return v___x_541_;
}
}
static lean_object* _init_l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_unsigned_to_nat(14u);
v___x_549_ = lean_nat_to_int(v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg(lean_object* v_x_553_){
_start:
{
lean_object* v_userTime_554_; lean_object* v_niceTime_555_; lean_object* v_systemTime_556_; lean_object* v_idleTime_557_; lean_object* v_interruptTime_558_; lean_object* v___y_560_; lean_object* v___y_561_; uint8_t v___y_562_; lean_object* v___y_563_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___y_578_; lean_object* v___y_579_; lean_object* v___y_580_; uint8_t v___y_581_; lean_object* v___y_582_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___y_603_; lean_object* v___y_604_; uint8_t v___y_605_; lean_object* v___y_606_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v___y_626_; uint8_t v___y_627_; lean_object* v___y_628_; lean_object* v___y_647_; lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v_userTime_554_ = lean_ctor_get(v_x_553_, 0);
v_niceTime_555_ = lean_ctor_get(v_x_553_, 1);
v_systemTime_556_ = lean_ctor_get(v_x_553_, 2);
v_idleTime_557_ = lean_ctor_get(v_x_553_, 3);
v_interruptTime_558_ = lean_ctor_get(v_x_553_, 4);
v___x_574_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5));
v___x_575_ = ((lean_object*)(l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__3));
v___x_576_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__7, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__7_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__7);
v___x_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = lean_obj_once(&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7, &l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7_once, _init_l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7);
v___x_669_ = lean_int_dec_lt(v_userTime_554_, v___x_668_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = l_Int_repr(v_userTime_554_);
v___x_671_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
v___y_647_ = v___x_671_;
goto v___jp_646_;
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_672_ = l_Int_repr(v_userTime_554_);
v___x_673_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
v___x_674_ = l_Repr_addAppParen(v___x_673_, v___x_667_);
v___y_647_ = v___x_674_;
goto v___jp_646_;
}
v___jp_559_:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
lean_inc(v___y_560_);
v___x_564_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_564_, 0, v___y_560_);
lean_ctor_set(v___x_564_, 1, v___y_563_);
v___x_565_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_565_, 0, v___x_564_);
lean_ctor_set_uint8(v___x_565_, sizeof(void*)*1, v___y_562_);
v___x_566_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_566_, 0, v___y_561_);
lean_ctor_set(v___x_566_, 1, v___x_565_);
v___x_567_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23);
v___x_568_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__24));
v___x_569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
lean_ctor_set(v___x_569_, 1, v___x_566_);
v___x_570_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__25));
v___x_571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_569_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v___x_572_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_567_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
v___x_573_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set_uint8(v___x_573_, sizeof(void*)*1, v___y_562_);
return v___x_573_;
}
v___jp_577_:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_583_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_576_);
lean_ctor_set(v___x_583_, 1, v___y_582_);
v___x_584_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_584_, 0, v___x_583_);
lean_ctor_set_uint8(v___x_584_, sizeof(void*)*1, v___y_581_);
v___x_585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_585_, 0, v___y_579_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
lean_inc(v___y_578_);
v___x_586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
lean_ctor_set(v___x_586_, 1, v___y_578_);
lean_inc(v___y_580_);
v___x_587_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
lean_ctor_set(v___x_587_, 1, v___y_580_);
v___x_588_ = ((lean_object*)(l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__5));
v___x_589_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_587_);
lean_ctor_set(v___x_589_, 1, v___x_588_);
v___x_590_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
lean_ctor_set(v___x_590_, 1, v___x_574_);
v___x_591_ = lean_obj_once(&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__6, &l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__6_once, _init_l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__6);
v___x_592_ = lean_unsigned_to_nat(0u);
v___x_593_ = lean_obj_once(&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7, &l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7_once, _init_l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7);
v___x_594_ = lean_int_dec_lt(v_interruptTime_558_, v___x_593_);
if (v___x_594_ == 0)
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = l_Int_repr(v_interruptTime_558_);
v___x_596_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
v___y_560_ = v___x_591_;
v___y_561_ = v___x_590_;
v___y_562_ = v___y_581_;
v___y_563_ = v___x_596_;
goto v___jp_559_;
}
else
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_597_ = l_Int_repr(v_interruptTime_558_);
v___x_598_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
v___x_599_ = l_Repr_addAppParen(v___x_598_, v___x_592_);
v___y_560_ = v___x_591_;
v___y_561_ = v___x_590_;
v___y_562_ = v___y_581_;
v___y_563_ = v___x_599_;
goto v___jp_559_;
}
}
v___jp_600_:
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; uint8_t v___x_617_; 
lean_inc(v___y_604_);
v___x_607_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_607_, 0, v___y_604_);
lean_ctor_set(v___x_607_, 1, v___y_606_);
v___x_608_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_608_, 0, v___x_607_);
lean_ctor_set_uint8(v___x_608_, sizeof(void*)*1, v___y_605_);
v___x_609_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_609_, 0, v___y_602_);
lean_ctor_set(v___x_609_, 1, v___x_608_);
lean_inc(v___y_601_);
v___x_610_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
lean_ctor_set(v___x_610_, 1, v___y_601_);
lean_inc(v___y_603_);
v___x_611_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
lean_ctor_set(v___x_611_, 1, v___y_603_);
v___x_612_ = ((lean_object*)(l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__9));
v___x_613_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_611_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
v___x_614_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
lean_ctor_set(v___x_614_, 1, v___x_574_);
v___x_615_ = lean_unsigned_to_nat(0u);
v___x_616_ = lean_obj_once(&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7, &l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7_once, _init_l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7);
v___x_617_ = lean_int_dec_lt(v_idleTime_557_, v___x_616_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_618_ = l_Int_repr(v_idleTime_557_);
v___x_619_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
v___y_578_ = v___y_601_;
v___y_579_ = v___x_614_;
v___y_580_ = v___y_603_;
v___y_581_ = v___y_605_;
v___y_582_ = v___x_619_;
goto v___jp_577_;
}
else
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_620_ = l_Int_repr(v_idleTime_557_);
v___x_621_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_621_, 0, v___x_620_);
v___x_622_ = l_Repr_addAppParen(v___x_621_, v___x_615_);
v___y_578_ = v___y_601_;
v___y_579_ = v___x_614_;
v___y_580_ = v___y_603_;
v___y_581_ = v___y_605_;
v___y_582_ = v___x_622_;
goto v___jp_577_;
}
}
v___jp_623_:
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; 
v___x_629_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_629_, 0, v___x_576_);
lean_ctor_set(v___x_629_, 1, v___y_628_);
v___x_630_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_630_, 0, v___x_629_);
lean_ctor_set_uint8(v___x_630_, sizeof(void*)*1, v___y_627_);
v___x_631_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_631_, 0, v___y_625_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
lean_inc(v___y_624_);
v___x_632_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
lean_ctor_set(v___x_632_, 1, v___y_624_);
lean_inc(v___y_626_);
v___x_633_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_632_);
lean_ctor_set(v___x_633_, 1, v___y_626_);
v___x_634_ = ((lean_object*)(l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__11));
v___x_635_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_633_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
lean_ctor_set(v___x_636_, 1, v___x_574_);
v___x_637_ = lean_obj_once(&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__12, &l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__12_once, _init_l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__12);
v___x_638_ = lean_unsigned_to_nat(0u);
v___x_639_ = lean_obj_once(&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7, &l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7_once, _init_l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7);
v___x_640_ = lean_int_dec_lt(v_systemTime_556_, v___x_639_);
if (v___x_640_ == 0)
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = l_Int_repr(v_systemTime_556_);
v___x_642_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
v___y_601_ = v___y_624_;
v___y_602_ = v___x_636_;
v___y_603_ = v___y_626_;
v___y_604_ = v___x_637_;
v___y_605_ = v___y_627_;
v___y_606_ = v___x_642_;
goto v___jp_600_;
}
else
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_643_ = l_Int_repr(v_systemTime_556_);
v___x_644_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_644_, 0, v___x_643_);
v___x_645_ = l_Repr_addAppParen(v___x_644_, v___x_638_);
v___y_601_ = v___y_624_;
v___y_602_ = v___x_636_;
v___y_603_ = v___y_626_;
v___y_604_ = v___x_637_;
v___y_605_ = v___y_627_;
v___y_606_ = v___x_645_;
goto v___jp_600_;
}
}
v___jp_646_:
{
lean_object* v___x_648_; uint8_t v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_648_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_576_);
lean_ctor_set(v___x_648_, 1, v___y_647_);
v___x_649_ = 0;
v___x_650_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_650_, 0, v___x_648_);
lean_ctor_set_uint8(v___x_650_, sizeof(void*)*1, v___x_649_);
v___x_651_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_575_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__9));
v___x_653_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_651_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v___x_654_ = lean_box(1);
v___x_655_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_653_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
v___x_656_ = ((lean_object*)(l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__14));
v___x_657_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_657_, 0, v___x_655_);
lean_ctor_set(v___x_657_, 1, v___x_656_);
v___x_658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v___x_574_);
v___x_659_ = lean_unsigned_to_nat(0u);
v___x_660_ = lean_obj_once(&l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7, &l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7_once, _init_l_Std_Async_System_instReprCPUTimes_repr___redArg___closed__7);
v___x_661_ = lean_int_dec_lt(v_niceTime_555_, v___x_660_);
if (v___x_661_ == 0)
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = l_Int_repr(v_niceTime_555_);
v___x_663_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_663_, 0, v___x_662_);
v___y_624_ = v___x_652_;
v___y_625_ = v___x_658_;
v___y_626_ = v___x_654_;
v___y_627_ = v___x_649_;
v___y_628_ = v___x_663_;
goto v___jp_623_;
}
else
{
lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_664_ = l_Int_repr(v_niceTime_555_);
v___x_665_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
v___x_666_ = l_Repr_addAppParen(v___x_665_, v___x_659_);
v___y_624_ = v___x_652_;
v___y_625_ = v___x_658_;
v___y_626_ = v___x_654_;
v___y_627_ = v___x_649_;
v___y_628_ = v___x_666_;
goto v___jp_623_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUTimes_repr___redArg___boxed(lean_object* v_x_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Std_Async_System_instReprCPUTimes_repr___redArg(v_x_675_);
lean_dec_ref(v_x_675_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUTimes_repr(lean_object* v_x_677_, lean_object* v_prec_678_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Std_Async_System_instReprCPUTimes_repr___redArg(v_x_677_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUTimes_repr___boxed(lean_object* v_x_680_, lean_object* v_prec_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Std_Async_System_instReprCPUTimes_repr(v_x_680_, v_prec_681_);
lean_dec(v_prec_681_);
lean_dec_ref(v_x_680_);
return v_res_682_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedCPUInfo_default___closed__0(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_685_ = l_Std_Async_System_instInhabitedCPUTimes_default;
v___x_686_ = lean_unsigned_to_nat(0u);
v___x_687_ = ((lean_object*)(l_Std_Async_System_instInhabitedSystemUser_default___closed__0));
v___x_688_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
lean_ctor_set(v___x_688_, 1, v___x_686_);
lean_ctor_set(v___x_688_, 2, v___x_685_);
return v___x_688_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedCPUInfo_default(void){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = lean_obj_once(&l_Std_Async_System_instInhabitedCPUInfo_default___closed__0, &l_Std_Async_System_instInhabitedCPUInfo_default___closed__0_once, _init_l_Std_Async_System_instInhabitedCPUInfo_default___closed__0);
return v___x_689_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedCPUInfo(void){
_start:
{
lean_object* v___x_690_; 
v___x_690_ = l_Std_Async_System_instInhabitedCPUInfo_default;
return v___x_690_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqCPUInfo_decEq(lean_object* v_x_691_, lean_object* v_x_692_){
_start:
{
lean_object* v_model_693_; lean_object* v_speed_694_; lean_object* v_times_695_; lean_object* v_model_696_; lean_object* v_speed_697_; lean_object* v_times_698_; uint8_t v___x_699_; 
v_model_693_ = lean_ctor_get(v_x_691_, 0);
v_speed_694_ = lean_ctor_get(v_x_691_, 1);
v_times_695_ = lean_ctor_get(v_x_691_, 2);
v_model_696_ = lean_ctor_get(v_x_692_, 0);
v_speed_697_ = lean_ctor_get(v_x_692_, 1);
v_times_698_ = lean_ctor_get(v_x_692_, 2);
v___x_699_ = lean_string_dec_eq(v_model_693_, v_model_696_);
if (v___x_699_ == 0)
{
return v___x_699_;
}
else
{
uint8_t v___x_700_; 
v___x_700_ = lean_nat_dec_eq(v_speed_694_, v_speed_697_);
if (v___x_700_ == 0)
{
return v___x_700_;
}
else
{
uint8_t v___x_701_; 
v___x_701_ = l_Std_Async_System_instDecidableEqCPUTimes_decEq(v_times_695_, v_times_698_);
return v___x_701_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqCPUInfo_decEq___boxed(lean_object* v_x_702_, lean_object* v_x_703_){
_start:
{
uint8_t v_res_704_; lean_object* v_r_705_; 
v_res_704_ = l_Std_Async_System_instDecidableEqCPUInfo_decEq(v_x_702_, v_x_703_);
lean_dec_ref(v_x_703_);
lean_dec_ref(v_x_702_);
v_r_705_ = lean_box(v_res_704_);
return v_r_705_;
}
}
LEAN_EXPORT uint8_t l_Std_Async_System_instDecidableEqCPUInfo(lean_object* v_x_706_, lean_object* v_x_707_){
_start:
{
uint8_t v___x_708_; 
v___x_708_ = l_Std_Async_System_instDecidableEqCPUInfo_decEq(v_x_706_, v_x_707_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instDecidableEqCPUInfo___boxed(lean_object* v_x_709_, lean_object* v_x_710_){
_start:
{
uint8_t v_res_711_; lean_object* v_r_712_; 
v_res_711_ = l_Std_Async_System_instDecidableEqCPUInfo(v_x_709_, v_x_710_);
lean_dec_ref(v_x_710_);
lean_dec_ref(v_x_709_);
v_r_712_ = lean_box(v_res_711_);
return v_r_712_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUInfo_repr___redArg(lean_object* v_x_728_){
_start:
{
lean_object* v_model_729_; lean_object* v_speed_730_; lean_object* v_times_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v_model_729_ = lean_ctor_get(v_x_728_, 0);
lean_inc_ref(v_model_729_);
v_speed_730_ = lean_ctor_get(v_x_728_, 1);
lean_inc(v_speed_730_);
v_times_731_ = lean_ctor_get(v_x_728_, 2);
lean_inc_ref(v_times_731_);
lean_dec_ref(v_x_728_);
v___x_732_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5));
v___x_733_ = ((lean_object*)(l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__3));
v___x_734_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__18, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__18_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__18);
v___x_735_ = l_String_quote(v_model_729_);
v___x_736_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
v___x_737_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_737_, 0, v___x_734_);
lean_ctor_set(v___x_737_, 1, v___x_736_);
v___x_738_ = 0;
v___x_739_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_739_, 0, v___x_737_);
lean_ctor_set_uint8(v___x_739_, sizeof(void*)*1, v___x_738_);
v___x_740_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_740_, 0, v___x_733_);
lean_ctor_set(v___x_740_, 1, v___x_739_);
v___x_741_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__9));
v___x_742_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_740_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = lean_box(1);
v___x_744_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_742_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = ((lean_object*)(l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__5));
v___x_746_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_744_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
v___x_747_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
lean_ctor_set(v___x_747_, 1, v___x_732_);
v___x_748_ = l_Nat_reprFast(v_speed_730_);
v___x_749_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
v___x_750_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_734_);
lean_ctor_set(v___x_750_, 1, v___x_749_);
v___x_751_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_751_, 0, v___x_750_);
lean_ctor_set_uint8(v___x_751_, sizeof(void*)*1, v___x_738_);
v___x_752_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_747_);
lean_ctor_set(v___x_752_, 1, v___x_751_);
v___x_753_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
lean_ctor_set(v___x_753_, 1, v___x_741_);
v___x_754_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
lean_ctor_set(v___x_754_, 1, v___x_743_);
v___x_755_ = ((lean_object*)(l_Std_Async_System_instReprCPUInfo_repr___redArg___closed__7));
v___x_756_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_756_, 0, v___x_754_);
lean_ctor_set(v___x_756_, 1, v___x_755_);
v___x_757_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
lean_ctor_set(v___x_757_, 1, v___x_732_);
v___x_758_ = l_Std_Async_System_instReprCPUTimes_repr___redArg(v_times_731_);
lean_dec_ref(v_times_731_);
v___x_759_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_759_, 0, v___x_734_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
v___x_760_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_760_, 0, v___x_759_);
lean_ctor_set_uint8(v___x_760_, sizeof(void*)*1, v___x_738_);
v___x_761_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_761_, 0, v___x_757_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
v___x_762_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23);
v___x_763_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__24));
v___x_764_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
lean_ctor_set(v___x_764_, 1, v___x_761_);
v___x_765_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__25));
v___x_766_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_767_, 0, v___x_762_);
lean_ctor_set(v___x_767_, 1, v___x_766_);
v___x_768_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_768_, 0, v___x_767_);
lean_ctor_set_uint8(v___x_768_, sizeof(void*)*1, v___x_738_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUInfo_repr(lean_object* v_x_769_, lean_object* v_prec_770_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_Std_Async_System_instReprCPUInfo_repr___redArg(v_x_769_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprCPUInfo_repr___boxed(lean_object* v_x_772_, lean_object* v_prec_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Std_Async_System_instReprCPUInfo_repr(v_x_772_, v_prec_773_);
lean_dec(v_prec_773_);
return v_res_774_;
}
}
static lean_object* _init_l_Std_Async_System_instReprOSInfo_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = lean_unsigned_to_nat(8u);
v___x_787_ = lean_nat_to_int(v___x_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprOSInfo_repr___redArg(lean_object* v_x_797_){
_start:
{
lean_object* v_name_798_; lean_object* v_release_799_; lean_object* v_version_800_; lean_object* v_machine_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; uint8_t v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v_name_798_ = lean_ctor_get(v_x_797_, 0);
lean_inc_ref(v_name_798_);
v_release_799_ = lean_ctor_get(v_x_797_, 1);
lean_inc_ref(v_release_799_);
v_version_800_ = lean_ctor_get(v_x_797_, 2);
lean_inc_ref(v_version_800_);
v_machine_801_ = lean_ctor_get(v_x_797_, 3);
lean_inc_ref(v_machine_801_);
lean_dec_ref(v_x_797_);
v___x_802_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__5));
v___x_803_ = ((lean_object*)(l_Std_Async_System_instReprOSInfo_repr___redArg___closed__3));
v___x_804_ = lean_obj_once(&l_Std_Async_System_instReprOSInfo_repr___redArg___closed__4, &l_Std_Async_System_instReprOSInfo_repr___redArg___closed__4_once, _init_l_Std_Async_System_instReprOSInfo_repr___redArg___closed__4);
v___x_805_ = l_String_quote(v_name_798_);
v___x_806_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
v___x_807_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_804_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = 0;
v___x_809_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_809_, 0, v___x_807_);
lean_ctor_set_uint8(v___x_809_, sizeof(void*)*1, v___x_808_);
v___x_810_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_803_);
lean_ctor_set(v___x_810_, 1, v___x_809_);
v___x_811_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__9));
v___x_812_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_812_, 0, v___x_810_);
lean_ctor_set(v___x_812_, 1, v___x_811_);
v___x_813_ = lean_box(1);
v___x_814_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_812_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
v___x_815_ = ((lean_object*)(l_Std_Async_System_instReprOSInfo_repr___redArg___closed__6));
v___x_816_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_816_, 0, v___x_814_);
lean_ctor_set(v___x_816_, 1, v___x_815_);
v___x_817_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_816_);
lean_ctor_set(v___x_817_, 1, v___x_802_);
v___x_818_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__15);
v___x_819_ = l_String_quote(v_release_799_);
v___x_820_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_820_, 0, v___x_819_);
v___x_821_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_821_, 0, v___x_818_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
v___x_822_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_822_, 0, v___x_821_);
lean_ctor_set_uint8(v___x_822_, sizeof(void*)*1, v___x_808_);
v___x_823_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_823_, 0, v___x_817_);
lean_ctor_set(v___x_823_, 1, v___x_822_);
v___x_824_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
lean_ctor_set(v___x_824_, 1, v___x_811_);
v___x_825_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_824_);
lean_ctor_set(v___x_825_, 1, v___x_813_);
v___x_826_ = ((lean_object*)(l_Std_Async_System_instReprOSInfo_repr___redArg___closed__8));
v___x_827_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_825_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
v___x_828_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
lean_ctor_set(v___x_828_, 1, v___x_802_);
v___x_829_ = l_String_quote(v_version_800_);
v___x_830_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
v___x_831_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_818_);
lean_ctor_set(v___x_831_, 1, v___x_830_);
v___x_832_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_832_, 0, v___x_831_);
lean_ctor_set_uint8(v___x_832_, sizeof(void*)*1, v___x_808_);
v___x_833_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_833_, 0, v___x_828_);
lean_ctor_set(v___x_833_, 1, v___x_832_);
v___x_834_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
lean_ctor_set(v___x_834_, 1, v___x_811_);
v___x_835_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
lean_ctor_set(v___x_835_, 1, v___x_813_);
v___x_836_ = ((lean_object*)(l_Std_Async_System_instReprOSInfo_repr___redArg___closed__10));
v___x_837_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_835_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
v___x_838_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_837_);
lean_ctor_set(v___x_838_, 1, v___x_802_);
v___x_839_ = l_String_quote(v_machine_801_);
v___x_840_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
v___x_841_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_841_, 0, v___x_818_);
lean_ctor_set(v___x_841_, 1, v___x_840_);
v___x_842_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_842_, 0, v___x_841_);
lean_ctor_set_uint8(v___x_842_, sizeof(void*)*1, v___x_808_);
v___x_843_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_843_, 0, v___x_838_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
v___x_844_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23);
v___x_845_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__24));
v___x_846_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_846_, 0, v___x_845_);
lean_ctor_set(v___x_846_, 1, v___x_843_);
v___x_847_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__25));
v___x_848_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_846_);
lean_ctor_set(v___x_848_, 1, v___x_847_);
v___x_849_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_849_, 0, v___x_844_);
lean_ctor_set(v___x_849_, 1, v___x_848_);
v___x_850_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_850_, 0, v___x_849_);
lean_ctor_set_uint8(v___x_850_, sizeof(void*)*1, v___x_808_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprOSInfo_repr(lean_object* v_x_851_, lean_object* v_prec_852_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Std_Async_System_instReprOSInfo_repr___redArg(v_x_851_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprOSInfo_repr___boxed(lean_object* v_x_854_, lean_object* v_prec_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l_Std_Async_System_instReprOSInfo_repr(v_x_854_, v_prec_855_);
lean_dec(v_prec_855_);
return v_res_856_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedEnvironment_default___closed__0(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = lean_box(0);
v___x_864_ = lean_unsigned_to_nat(16u);
v___x_865_ = lean_mk_array(v___x_864_, v___x_863_);
return v___x_865_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedEnvironment_default___closed__1(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_866_ = lean_obj_once(&l_Std_Async_System_instInhabitedEnvironment_default___closed__0, &l_Std_Async_System_instInhabitedEnvironment_default___closed__0_once, _init_l_Std_Async_System_instInhabitedEnvironment_default___closed__0);
v___x_867_ = lean_unsigned_to_nat(0u);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
lean_ctor_set(v___x_868_, 1, v___x_866_);
return v___x_868_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedEnvironment_default(void){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = lean_obj_once(&l_Std_Async_System_instInhabitedEnvironment_default___closed__1, &l_Std_Async_System_instInhabitedEnvironment_default___closed__1_once, _init_l_Std_Async_System_instInhabitedEnvironment_default___closed__1);
return v___x_869_;
}
}
static lean_object* _init_l_Std_Async_System_instInhabitedEnvironment(void){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Std_Async_System_instInhabitedEnvironment_default;
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Async_System_instReprEnvironment_repr_spec__1(lean_object* v_x_871_, lean_object* v_x_872_){
_start:
{
if (lean_obj_tag(v_x_872_) == 0)
{
lean_inc(v_x_871_);
return v_x_871_;
}
else
{
lean_object* v_key_873_; lean_object* v_value_874_; lean_object* v_tail_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v_key_873_ = lean_ctor_get(v_x_872_, 0);
v_value_874_ = lean_ctor_get(v_x_872_, 1);
v_tail_875_ = lean_ctor_get(v_x_872_, 2);
v___x_876_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Async_System_instReprEnvironment_repr_spec__1(v_x_871_, v_tail_875_);
lean_inc(v_value_874_);
lean_inc(v_key_873_);
v___x_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_877_, 0, v_key_873_);
lean_ctor_set(v___x_877_, 1, v_value_874_);
v___x_878_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_878_, 0, v___x_877_);
lean_ctor_set(v___x_878_, 1, v___x_876_);
return v___x_878_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Async_System_instReprEnvironment_repr_spec__1___boxed(lean_object* v_x_879_, lean_object* v_x_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Async_System_instReprEnvironment_repr_spec__1(v_x_879_, v_x_880_);
lean_dec(v_x_880_);
lean_dec(v_x_879_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Async_System_instReprEnvironment_repr_spec__2(lean_object* v_as_882_, size_t v_i_883_, size_t v_stop_884_, lean_object* v_b_885_){
_start:
{
uint8_t v___x_886_; 
v___x_886_ = lean_usize_dec_eq(v_i_883_, v_stop_884_);
if (v___x_886_ == 0)
{
size_t v___x_887_; size_t v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_887_ = ((size_t)1ULL);
v___x_888_ = lean_usize_sub(v_i_883_, v___x_887_);
v___x_889_ = lean_array_uget_borrowed(v_as_882_, v___x_888_);
v___x_890_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Std_Async_System_instReprEnvironment_repr_spec__1(v_b_885_, v___x_889_);
lean_dec(v_b_885_);
v_i_883_ = v___x_888_;
v_b_885_ = v___x_890_;
goto _start;
}
else
{
return v_b_885_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Async_System_instReprEnvironment_repr_spec__2___boxed(lean_object* v_as_892_, lean_object* v_i_893_, lean_object* v_stop_894_, lean_object* v_b_895_){
_start:
{
size_t v_i_boxed_896_; size_t v_stop_boxed_897_; lean_object* v_res_898_; 
v_i_boxed_896_ = lean_unbox_usize(v_i_893_);
lean_dec(v_i_893_);
v_stop_boxed_897_ = lean_unbox_usize(v_stop_894_);
lean_dec(v_stop_894_);
v_res_898_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Async_System_instReprEnvironment_repr_spec__2(v_as_892_, v_i_boxed_896_, v_stop_boxed_897_, v_b_895_);
lean_dec_ref(v_as_892_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0_spec__1_spec__4(lean_object* v_x_899_, lean_object* v_x_900_, lean_object* v_x_901_){
_start:
{
if (lean_obj_tag(v_x_901_) == 0)
{
lean_dec(v_x_899_);
return v_x_900_;
}
else
{
lean_object* v_head_902_; lean_object* v_tail_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_912_; 
v_head_902_ = lean_ctor_get(v_x_901_, 0);
v_tail_903_ = lean_ctor_get(v_x_901_, 1);
v_isSharedCheck_912_ = !lean_is_exclusive(v_x_901_);
if (v_isSharedCheck_912_ == 0)
{
v___x_905_ = v_x_901_;
v_isShared_906_ = v_isSharedCheck_912_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_tail_903_);
lean_inc(v_head_902_);
lean_dec(v_x_901_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_912_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
lean_inc(v_x_899_);
if (v_isShared_906_ == 0)
{
lean_ctor_set_tag(v___x_905_, 5);
lean_ctor_set(v___x_905_, 1, v_x_899_);
lean_ctor_set(v___x_905_, 0, v_x_900_);
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_x_900_);
lean_ctor_set(v_reuseFailAlloc_911_, 1, v_x_899_);
v___x_908_ = v_reuseFailAlloc_911_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
lean_object* v___x_909_; 
v___x_909_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
lean_ctor_set(v___x_909_, 1, v_head_902_);
v_x_900_ = v___x_909_;
v_x_901_ = v_tail_903_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0_spec__1(lean_object* v_x_913_, lean_object* v_x_914_){
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
lean_object* v_head_917_; 
lean_dec(v_x_914_);
v_head_917_ = lean_ctor_get(v_x_913_, 0);
lean_inc(v_head_917_);
lean_dec_ref_known(v_x_913_, 2);
return v_head_917_;
}
else
{
lean_object* v_head_918_; lean_object* v___x_919_; 
lean_inc(v_tail_916_);
v_head_918_ = lean_ctor_get(v_x_913_, 0);
lean_inc(v_head_918_);
lean_dec_ref_known(v_x_913_, 2);
v___x_919_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0_spec__1_spec__4(v_x_914_, v_head_918_, v_tail_916_);
return v___x_919_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_922_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__0));
v___x_923_ = lean_string_length(v___x_922_);
return v___x_923_;
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__2, &l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__2_once, _init_l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__2);
v___x_925_ = lean_nat_to_int(v___x_924_);
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg(lean_object* v_x_930_){
_start:
{
lean_object* v_fst_931_; lean_object* v_snd_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_956_; 
v_fst_931_ = lean_ctor_get(v_x_930_, 0);
v_snd_932_ = lean_ctor_get(v_x_930_, 1);
v_isSharedCheck_956_ = !lean_is_exclusive(v_x_930_);
if (v_isSharedCheck_956_ == 0)
{
v___x_934_ = v_x_930_;
v_isShared_935_ = v_isSharedCheck_956_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_snd_932_);
lean_inc(v_fst_931_);
lean_dec(v_x_930_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_956_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_940_; 
v___x_936_ = l_String_quote(v_fst_931_);
v___x_937_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
v___x_938_ = lean_box(0);
if (v_isShared_935_ == 0)
{
lean_ctor_set_tag(v___x_934_, 1);
lean_ctor_set(v___x_934_, 1, v___x_938_);
lean_ctor_set(v___x_934_, 0, v___x_937_);
v___x_940_ = v___x_934_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v___x_938_);
v___x_940_ = v_reuseFailAlloc_955_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; uint8_t v___x_953_; lean_object* v___x_954_; 
v___x_941_ = l_String_quote(v_snd_932_);
v___x_942_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_942_, 0, v___x_941_);
v___x_943_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
lean_ctor_set(v___x_943_, 1, v___x_940_);
v___x_944_ = l_List_reverse___redArg(v___x_943_);
v___x_945_ = ((lean_object*)(l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__1));
v___x_946_ = l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0_spec__1(v___x_944_, v___x_945_);
v___x_947_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__3, &l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__3_once, _init_l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__3);
v___x_948_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__4));
v___x_949_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
lean_ctor_set(v___x_949_, 1, v___x_946_);
v___x_950_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg___closed__5));
v___x_951_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_951_, 0, v___x_949_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_947_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = 0;
v___x_954_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_954_, 0, v___x_952_);
lean_ctor_set_uint8(v___x_954_, sizeof(void*)*1, v___x_953_);
return v___x_954_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__1_spec__3_spec__7(lean_object* v_x_957_, lean_object* v_x_958_, lean_object* v_x_959_){
_start:
{
if (lean_obj_tag(v_x_959_) == 0)
{
lean_dec(v_x_957_);
return v_x_958_;
}
else
{
lean_object* v_head_960_; lean_object* v_tail_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_971_; 
v_head_960_ = lean_ctor_get(v_x_959_, 0);
v_tail_961_ = lean_ctor_get(v_x_959_, 1);
v_isSharedCheck_971_ = !lean_is_exclusive(v_x_959_);
if (v_isSharedCheck_971_ == 0)
{
v___x_963_ = v_x_959_;
v_isShared_964_ = v_isSharedCheck_971_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_tail_961_);
lean_inc(v_head_960_);
lean_dec(v_x_959_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_971_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
lean_inc(v_x_957_);
if (v_isShared_964_ == 0)
{
lean_ctor_set_tag(v___x_963_, 5);
lean_ctor_set(v___x_963_, 1, v_x_957_);
lean_ctor_set(v___x_963_, 0, v_x_958_);
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_x_958_);
lean_ctor_set(v_reuseFailAlloc_970_, 1, v_x_957_);
v___x_966_ = v_reuseFailAlloc_970_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg(v_head_960_);
v___x_968_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_966_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v_x_958_ = v___x_968_;
v_x_959_ = v_tail_961_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__1_spec__3(lean_object* v_x_972_, lean_object* v_x_973_, lean_object* v_x_974_){
_start:
{
if (lean_obj_tag(v_x_974_) == 0)
{
lean_dec(v_x_972_);
return v_x_973_;
}
else
{
lean_object* v_head_975_; lean_object* v_tail_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_986_; 
v_head_975_ = lean_ctor_get(v_x_974_, 0);
v_tail_976_ = lean_ctor_get(v_x_974_, 1);
v_isSharedCheck_986_ = !lean_is_exclusive(v_x_974_);
if (v_isSharedCheck_986_ == 0)
{
v___x_978_ = v_x_974_;
v_isShared_979_ = v_isSharedCheck_986_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_tail_976_);
lean_inc(v_head_975_);
lean_dec(v_x_974_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_986_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_981_; 
lean_inc(v_x_972_);
if (v_isShared_979_ == 0)
{
lean_ctor_set_tag(v___x_978_, 5);
lean_ctor_set(v___x_978_, 1, v_x_972_);
lean_ctor_set(v___x_978_, 0, v_x_973_);
v___x_981_ = v___x_978_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_x_973_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v_x_972_);
v___x_981_ = v_reuseFailAlloc_985_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_982_ = l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg(v_head_975_);
v___x_983_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_981_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__1_spec__3_spec__7(v_x_972_, v___x_983_, v_tail_976_);
return v___x_984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__1(lean_object* v_x_987_, lean_object* v_x_988_){
_start:
{
if (lean_obj_tag(v_x_987_) == 0)
{
lean_object* v___x_989_; 
lean_dec(v_x_988_);
v___x_989_ = lean_box(0);
return v___x_989_;
}
else
{
lean_object* v_tail_990_; 
v_tail_990_ = lean_ctor_get(v_x_987_, 1);
if (lean_obj_tag(v_tail_990_) == 0)
{
lean_object* v_head_991_; lean_object* v___x_992_; 
lean_dec(v_x_988_);
v_head_991_ = lean_ctor_get(v_x_987_, 0);
lean_inc(v_head_991_);
lean_dec_ref_known(v_x_987_, 2);
v___x_992_ = l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg(v_head_991_);
return v___x_992_;
}
else
{
lean_object* v_head_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
lean_inc(v_tail_990_);
v_head_993_ = lean_ctor_get(v_x_987_, 0);
lean_inc(v_head_993_);
lean_dec_ref_known(v_x_987_, 2);
v___x_994_ = l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg(v_head_993_);
v___x_995_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__1_spec__3(v_x_988_, v___x_994_, v_tail_990_);
return v___x_995_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = ((lean_object*)(l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__2));
v___x_1001_ = lean_string_length(v___x_1000_);
return v___x_1001_;
}
}
static lean_object* _init_l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1002_ = lean_obj_once(&l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__3, &l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__3_once, _init_l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__3);
v___x_1003_ = lean_nat_to_int(v___x_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg(lean_object* v_a_1006_){
_start:
{
if (lean_obj_tag(v_a_1006_) == 0)
{
lean_object* v___x_1007_; 
v___x_1007_ = ((lean_object*)(l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__1));
return v___x_1007_;
}
else
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; lean_object* v___x_1017_; 
v___x_1008_ = ((lean_object*)(l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__1));
v___x_1009_ = l_Std_Format_joinSep___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__1(v_a_1006_, v___x_1008_);
v___x_1010_ = lean_obj_once(&l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__4, &l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__4_once, _init_l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__4);
v___x_1011_ = ((lean_object*)(l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg___closed__5));
v___x_1012_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
lean_ctor_set(v___x_1012_, 1, v___x_1009_);
v___x_1013_ = ((lean_object*)(l_Array_repr___at___00Std_Async_System_instReprGroupInfo_repr_spec__0___closed__6));
v___x_1014_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1012_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1010_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = 0;
v___x_1017_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1017_, 0, v___x_1015_);
lean_ctor_set_uint8(v___x_1017_, sizeof(void*)*1, v___x_1016_);
return v___x_1017_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprEnvironment_repr___redArg(lean_object* v_x_1030_){
_start:
{
lean_object* v_buckets_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1063_; 
v_buckets_1031_ = lean_ctor_get(v_x_1030_, 1);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_x_1030_);
if (v_isSharedCheck_1063_ == 0)
{
lean_object* v_unused_1064_; 
v_unused_1064_ = lean_ctor_get(v_x_1030_, 0);
lean_dec(v_unused_1064_);
v___x_1033_ = v_x_1030_;
v_isShared_1034_ = v_isSharedCheck_1063_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_buckets_1031_);
lean_dec(v_x_1030_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1063_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___y_1040_; lean_object* v___x_1057_; lean_object* v___x_1058_; uint8_t v___x_1059_; 
v___x_1035_ = ((lean_object*)(l_Std_Async_System_instReprEnvironment_repr___redArg___closed__3));
v___x_1036_ = lean_obj_once(&l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__4, &l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__4_once, _init_l_Std_Async_System_instReprGroupInfo_repr___redArg___closed__4);
v___x_1037_ = lean_unsigned_to_nat(0u);
v___x_1038_ = ((lean_object*)(l_Std_Async_System_instReprEnvironment_repr___redArg___closed__5));
v___x_1057_ = lean_box(0);
v___x_1058_ = lean_array_get_size(v_buckets_1031_);
v___x_1059_ = lean_nat_dec_lt(v___x_1037_, v___x_1058_);
if (v___x_1059_ == 0)
{
lean_dec_ref(v_buckets_1031_);
v___y_1040_ = v___x_1057_;
goto v___jp_1039_;
}
else
{
size_t v___x_1060_; size_t v___x_1061_; lean_object* v___x_1062_; 
v___x_1060_ = lean_usize_of_nat(v___x_1058_);
v___x_1061_ = ((size_t)0ULL);
v___x_1062_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Std_Async_System_instReprEnvironment_repr_spec__2(v_buckets_1031_, v___x_1060_, v___x_1061_, v___x_1057_);
lean_dec_ref(v_buckets_1031_);
v___y_1040_ = v___x_1062_;
goto v___jp_1039_;
}
v___jp_1039_:
{
lean_object* v___x_1041_; lean_object* v___x_1043_; 
v___x_1041_ = l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg(v___y_1040_);
if (v_isShared_1034_ == 0)
{
lean_ctor_set_tag(v___x_1033_, 5);
lean_ctor_set(v___x_1033_, 1, v___x_1041_);
lean_ctor_set(v___x_1033_, 0, v___x_1038_);
v___x_1043_ = v___x_1033_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v___x_1041_);
v___x_1043_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; uint8_t v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1044_ = l_Repr_addAppParen(v___x_1043_, v___x_1037_);
v___x_1045_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1036_);
lean_ctor_set(v___x_1045_, 1, v___x_1044_);
v___x_1046_ = 0;
v___x_1047_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1047_, 0, v___x_1045_);
lean_ctor_set_uint8(v___x_1047_, sizeof(void*)*1, v___x_1046_);
v___x_1048_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1035_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
v___x_1049_ = lean_obj_once(&l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23, &l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23_once, _init_l_Std_Async_System_instReprSystemUser_repr___redArg___closed__23);
v___x_1050_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__24));
v___x_1051_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
lean_ctor_set(v___x_1051_, 1, v___x_1048_);
v___x_1052_ = ((lean_object*)(l_Std_Async_System_instReprSystemUser_repr___redArg___closed__25));
v___x_1053_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1051_);
lean_ctor_set(v___x_1053_, 1, v___x_1052_);
v___x_1054_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1049_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
lean_ctor_set_uint8(v___x_1055_, sizeof(void*)*1, v___x_1046_);
return v___x_1055_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprEnvironment_repr(lean_object* v_x_1065_, lean_object* v_prec_1066_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Std_Async_System_instReprEnvironment_repr___redArg(v_x_1065_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_instReprEnvironment_repr___boxed(lean_object* v_x_1068_, lean_object* v_prec_1069_){
_start:
{
lean_object* v_res_1070_; 
v_res_1070_ = l_Std_Async_System_instReprEnvironment_repr(v_x_1068_, v_prec_1069_);
lean_dec(v_prec_1069_);
return v_res_1070_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0(lean_object* v_a_1071_, lean_object* v_n_1072_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___redArg(v_a_1071_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0___boxed(lean_object* v_a_1074_, lean_object* v_n_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0(v_a_1074_, v_n_1075_);
lean_dec(v_n_1075_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0(lean_object* v_x_1077_, lean_object* v_x_1078_){
_start:
{
lean_object* v___x_1079_; 
v___x_1079_ = l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___redArg(v_x_1077_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0___boxed(lean_object* v_x_1080_, lean_object* v_x_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l_Prod_repr___at___00List_repr___at___00Std_Async_System_instReprEnvironment_repr_spec__0_spec__0(v_x_1080_, v_x_1081_);
lean_dec(v_x_1081_);
return v_res_1082_;
}
}
static lean_object* _init_l_Std_Async_System_Environment_get_x3f___closed__1(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___f_1087_; 
v___x_1086_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___f_1087_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1087_, 0, v___x_1086_);
return v___f_1087_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_Environment_get_x3f(lean_object* v_env_1088_, lean_object* v_key_1089_){
_start:
{
lean_object* v___x_1090_; lean_object* v___f_1091_; lean_object* v___x_1092_; 
v___x_1090_ = ((lean_object*)(l_Std_Async_System_Environment_get_x3f___closed__0));
v___f_1091_ = lean_obj_once(&l_Std_Async_System_Environment_get_x3f___closed__1, &l_Std_Async_System_Environment_get_x3f___closed__1_once, _init_l_Std_Async_System_Environment_get_x3f___closed__1);
v___x_1092_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_1091_, v___x_1090_, v_env_1088_, v_key_1089_);
return v___x_1092_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_Environment_get_x3f___boxed(lean_object* v_env_1093_, lean_object* v_key_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Std_Async_System_Environment_get_x3f(v_env_1093_, v_key_1094_);
lean_dec_ref(v_env_1093_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getSystemInfo(){
_start:
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_uv_os_uname();
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1116_; 
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1100_ = v___x_1097_;
v_isShared_1101_ = v_isSharedCheck_1116_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1097_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1116_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v_sysname_1102_; lean_object* v_release_1103_; lean_object* v_version_1104_; lean_object* v_machine_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1115_; 
v_sysname_1102_ = lean_ctor_get(v_a_1098_, 0);
v_release_1103_ = lean_ctor_get(v_a_1098_, 1);
v_version_1104_ = lean_ctor_get(v_a_1098_, 2);
v_machine_1105_ = lean_ctor_get(v_a_1098_, 3);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_a_1098_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1107_ = v_a_1098_;
v_isShared_1108_ = v_isSharedCheck_1115_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_machine_1105_);
lean_inc(v_version_1104_);
lean_inc(v_release_1103_);
lean_inc(v_sysname_1102_);
lean_dec(v_a_1098_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1115_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_sysname_1102_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v_release_1103_);
lean_ctor_set(v_reuseFailAlloc_1114_, 2, v_version_1104_);
lean_ctor_set(v_reuseFailAlloc_1114_, 3, v_machine_1105_);
v___x_1110_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
lean_object* v___x_1112_; 
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 0, v___x_1110_);
v___x_1112_ = v___x_1100_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1110_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
}
else
{
lean_object* v_a_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
v_a_1117_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1124_ == 0)
{
v___x_1119_ = v___x_1097_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_a_1117_);
lean_dec(v___x_1097_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_a_1117_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getSystemInfo___boxed(lean_object* v___y_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Std_Async_System_getSystemInfo();
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0_spec__0(size_t v_sz_1127_, size_t v_i_1128_, lean_object* v_bs_1129_){
_start:
{
uint8_t v___x_1130_; 
v___x_1130_ = lean_usize_dec_lt(v_i_1128_, v_sz_1127_);
if (v___x_1130_ == 0)
{
return v_bs_1129_;
}
else
{
lean_object* v_v_1131_; lean_object* v_times_1132_; lean_object* v_model_1133_; uint64_t v_speed_1134_; uint64_t v_user_1135_; uint64_t v_nice_1136_; uint64_t v_sys_1137_; uint64_t v_idle_1138_; uint64_t v_irq_1139_; lean_object* v___x_1140_; lean_object* v_bs_x27_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; size_t v___x_1155_; size_t v___x_1156_; lean_object* v___x_1157_; 
v_v_1131_ = lean_array_uget_borrowed(v_bs_1129_, v_i_1128_);
v_times_1132_ = lean_ctor_get(v_v_1131_, 1);
v_model_1133_ = lean_ctor_get(v_v_1131_, 0);
lean_inc_ref(v_model_1133_);
v_speed_1134_ = lean_ctor_get_uint64(v_v_1131_, sizeof(void*)*2);
v_user_1135_ = lean_ctor_get_uint64(v_times_1132_, 0);
v_nice_1136_ = lean_ctor_get_uint64(v_times_1132_, 8);
v_sys_1137_ = lean_ctor_get_uint64(v_times_1132_, 16);
v_idle_1138_ = lean_ctor_get_uint64(v_times_1132_, 24);
v_irq_1139_ = lean_ctor_get_uint64(v_times_1132_, 32);
v___x_1140_ = lean_unsigned_to_nat(0u);
v_bs_x27_1141_ = lean_array_uset(v_bs_1129_, v_i_1128_, v___x_1140_);
v___x_1142_ = lean_uint64_to_nat(v_speed_1134_);
v___x_1143_ = lean_uint64_to_nat(v_user_1135_);
v___x_1144_ = lean_nat_to_int(v___x_1143_);
v___x_1145_ = lean_uint64_to_nat(v_nice_1136_);
v___x_1146_ = lean_nat_to_int(v___x_1145_);
v___x_1147_ = lean_uint64_to_nat(v_sys_1137_);
v___x_1148_ = lean_nat_to_int(v___x_1147_);
v___x_1149_ = lean_uint64_to_nat(v_idle_1138_);
v___x_1150_ = lean_nat_to_int(v___x_1149_);
v___x_1151_ = lean_uint64_to_nat(v_irq_1139_);
v___x_1152_ = lean_nat_to_int(v___x_1151_);
v___x_1153_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1144_);
lean_ctor_set(v___x_1153_, 1, v___x_1146_);
lean_ctor_set(v___x_1153_, 2, v___x_1148_);
lean_ctor_set(v___x_1153_, 3, v___x_1150_);
lean_ctor_set(v___x_1153_, 4, v___x_1152_);
v___x_1154_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1154_, 0, v_model_1133_);
lean_ctor_set(v___x_1154_, 1, v___x_1142_);
lean_ctor_set(v___x_1154_, 2, v___x_1153_);
v___x_1155_ = ((size_t)1ULL);
v___x_1156_ = lean_usize_add(v_i_1128_, v___x_1155_);
v___x_1157_ = lean_array_uset(v_bs_x27_1141_, v_i_1128_, v___x_1154_);
v_i_1128_ = v___x_1156_;
v_bs_1129_ = v___x_1157_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0_spec__0___boxed(lean_object* v_sz_1159_, lean_object* v_i_1160_, lean_object* v_bs_1161_){
_start:
{
size_t v_sz_boxed_1162_; size_t v_i_boxed_1163_; lean_object* v_res_1164_; 
v_sz_boxed_1162_ = lean_unbox_usize(v_sz_1159_);
lean_dec(v_sz_1159_);
v_i_boxed_1163_ = lean_unbox_usize(v_i_1160_);
lean_dec(v_i_1160_);
v_res_1164_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0_spec__0(v_sz_boxed_1162_, v_i_boxed_1163_, v_bs_1161_);
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0(size_t v_sz_1165_, size_t v_i_1166_, lean_object* v_bs_1167_){
_start:
{
uint8_t v___x_1168_; 
v___x_1168_ = lean_usize_dec_lt(v_i_1166_, v_sz_1165_);
if (v___x_1168_ == 0)
{
return v_bs_1167_;
}
else
{
lean_object* v_v_1169_; lean_object* v_times_1170_; lean_object* v_model_1171_; uint64_t v_speed_1172_; uint64_t v_user_1173_; uint64_t v_nice_1174_; uint64_t v_sys_1175_; uint64_t v_idle_1176_; uint64_t v_irq_1177_; lean_object* v___x_1178_; lean_object* v_bs_x27_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; size_t v___x_1193_; size_t v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v_v_1169_ = lean_array_uget_borrowed(v_bs_1167_, v_i_1166_);
v_times_1170_ = lean_ctor_get(v_v_1169_, 1);
v_model_1171_ = lean_ctor_get(v_v_1169_, 0);
lean_inc_ref(v_model_1171_);
v_speed_1172_ = lean_ctor_get_uint64(v_v_1169_, sizeof(void*)*2);
v_user_1173_ = lean_ctor_get_uint64(v_times_1170_, 0);
v_nice_1174_ = lean_ctor_get_uint64(v_times_1170_, 8);
v_sys_1175_ = lean_ctor_get_uint64(v_times_1170_, 16);
v_idle_1176_ = lean_ctor_get_uint64(v_times_1170_, 24);
v_irq_1177_ = lean_ctor_get_uint64(v_times_1170_, 32);
v___x_1178_ = lean_unsigned_to_nat(0u);
v_bs_x27_1179_ = lean_array_uset(v_bs_1167_, v_i_1166_, v___x_1178_);
v___x_1180_ = lean_uint64_to_nat(v_speed_1172_);
v___x_1181_ = lean_uint64_to_nat(v_user_1173_);
v___x_1182_ = lean_nat_to_int(v___x_1181_);
v___x_1183_ = lean_uint64_to_nat(v_nice_1174_);
v___x_1184_ = lean_nat_to_int(v___x_1183_);
v___x_1185_ = lean_uint64_to_nat(v_sys_1175_);
v___x_1186_ = lean_nat_to_int(v___x_1185_);
v___x_1187_ = lean_uint64_to_nat(v_idle_1176_);
v___x_1188_ = lean_nat_to_int(v___x_1187_);
v___x_1189_ = lean_uint64_to_nat(v_irq_1177_);
v___x_1190_ = lean_nat_to_int(v___x_1189_);
v___x_1191_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1182_);
lean_ctor_set(v___x_1191_, 1, v___x_1184_);
lean_ctor_set(v___x_1191_, 2, v___x_1186_);
lean_ctor_set(v___x_1191_, 3, v___x_1188_);
lean_ctor_set(v___x_1191_, 4, v___x_1190_);
v___x_1192_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1192_, 0, v_model_1171_);
lean_ctor_set(v___x_1192_, 1, v___x_1180_);
lean_ctor_set(v___x_1192_, 2, v___x_1191_);
v___x_1193_ = ((size_t)1ULL);
v___x_1194_ = lean_usize_add(v_i_1166_, v___x_1193_);
v___x_1195_ = lean_array_uset(v_bs_x27_1179_, v_i_1166_, v___x_1192_);
v___x_1196_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0_spec__0(v_sz_1165_, v___x_1194_, v___x_1195_);
return v___x_1196_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0___boxed(lean_object* v_sz_1197_, lean_object* v_i_1198_, lean_object* v_bs_1199_){
_start:
{
size_t v_sz_boxed_1200_; size_t v_i_boxed_1201_; lean_object* v_res_1202_; 
v_sz_boxed_1200_ = lean_unbox_usize(v_sz_1197_);
lean_dec(v_sz_1197_);
v_i_boxed_1201_ = lean_unbox_usize(v_i_1198_);
lean_dec(v_i_1198_);
v_res_1202_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0(v_sz_boxed_1200_, v_i_boxed_1201_, v_bs_1199_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getCPUInfo(){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = lean_uv_cpu_info();
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1215_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1215_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1215_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
size_t v_sz_1209_; size_t v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1213_; 
v_sz_1209_ = lean_array_size(v_a_1205_);
v___x_1210_ = ((size_t)0ULL);
v___x_1211_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Std_Async_System_getCPUInfo_spec__0(v_sz_1209_, v___x_1210_, v_a_1205_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v___x_1211_);
v___x_1213_ = v___x_1207_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v___x_1211_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
else
{
lean_object* v_a_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1223_; 
v_a_1216_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1223_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1223_ == 0)
{
v___x_1218_ = v___x_1204_;
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_a_1216_);
lean_dec(v___x_1204_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1223_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v___x_1221_; 
if (v_isShared_1219_ == 0)
{
v___x_1221_ = v___x_1218_;
goto v_reusejp_1220_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v_a_1216_);
v___x_1221_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1220_;
}
v_reusejp_1220_:
{
return v___x_1221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getCPUInfo___boxed(lean_object* v___y_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l_Std_Async_System_getCPUInfo();
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getUpTime(){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = lean_uv_uptime();
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1238_; 
v_a_1228_ = lean_ctor_get(v___x_1227_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1230_ = v___x_1227_;
v_isShared_1231_ = v_isSharedCheck_1238_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1227_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1238_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
uint64_t v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1236_; 
v___x_1232_ = lean_unbox_uint64(v_a_1228_);
lean_dec(v_a_1228_);
v___x_1233_ = lean_uint64_to_nat(v___x_1232_);
v___x_1234_ = lean_nat_to_int(v___x_1233_);
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 0, v___x_1234_);
v___x_1236_ = v___x_1230_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v___x_1234_);
v___x_1236_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
return v___x_1236_;
}
}
}
else
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1246_; 
v_a_1239_ = lean_ctor_get(v___x_1227_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1241_ = v___x_1227_;
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1227_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1244_; 
if (v_isShared_1242_ == 0)
{
v___x_1244_ = v___x_1241_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_a_1239_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getUpTime___boxed(lean_object* v___y_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Std_Async_System_getUpTime();
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getHighResolutionTime(){
_start:
{
lean_object* v___x_1250_; 
v___x_1250_ = lean_uv_hrtime();
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1261_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1253_ = v___x_1250_;
v_isShared_1254_ = v_isSharedCheck_1261_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_a_1251_);
lean_dec(v___x_1250_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1261_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
uint64_t v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1259_; 
v___x_1255_ = lean_unbox_uint64(v_a_1251_);
lean_dec(v_a_1251_);
v___x_1256_ = lean_uint64_to_nat(v___x_1255_);
v___x_1257_ = lean_nat_to_int(v___x_1256_);
if (v_isShared_1254_ == 0)
{
lean_ctor_set(v___x_1253_, 0, v___x_1257_);
v___x_1259_ = v___x_1253_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___x_1257_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
else
{
lean_object* v_a_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1269_; 
v_a_1262_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1264_ = v___x_1250_;
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_a_1262_);
lean_dec(v___x_1250_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1267_; 
if (v_isShared_1265_ == 0)
{
v___x_1267_ = v___x_1264_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_a_1262_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getHighResolutionTime___boxed(lean_object* v___y_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l_Std_Async_System_getHighResolutionTime();
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getHostName(){
_start:
{
lean_object* v___x_1273_; 
v___x_1273_ = lean_uv_os_gethostname();
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getHostName___boxed(lean_object* v___y_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l_Std_Async_System_getHostName();
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_setEnvVar(lean_object* v_name_1276_, lean_object* v_value_1277_){
_start:
{
lean_object* v___x_1279_; 
v___x_1279_ = lean_uv_os_setenv(v_name_1276_, v_value_1277_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_setEnvVar___boxed(lean_object* v_name_1280_, lean_object* v_value_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l_Std_Async_System_setEnvVar(v_name_1280_, v_value_1281_);
lean_dec_ref(v_value_1281_);
lean_dec_ref(v_name_1280_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getEnvVar(lean_object* v_name_1284_){
_start:
{
lean_object* v___x_1286_; 
v___x_1286_ = lean_uv_os_getenv(v_name_1284_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getEnvVar___boxed(lean_object* v_name_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Std_Async_System_getEnvVar(v_name_1287_);
lean_dec_ref(v_name_1287_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_unsetEnvVar(lean_object* v_name_1290_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = lean_uv_os_unsetenv(v_name_1290_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_unsetEnvVar___boxed(lean_object* v_name_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l_Std_Async_System_unsetEnvVar(v_name_1293_);
lean_dec_ref(v_name_1293_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getEnv(){
_start:
{
lean_object* v___x_1320_; lean_object* v___f_1321_; lean_object* v___x_1322_; 
v___x_1320_ = ((lean_object*)(l_Std_Async_System_Environment_get_x3f___closed__0));
v___f_1321_ = ((lean_object*)(l_Std_Async_System_getEnv___closed__11));
v___x_1322_ = lean_uv_os_environ();
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1342_; 
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1325_ = v___x_1322_;
v_isShared_1326_ = v_isSharedCheck_1342_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1322_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1342_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___f_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1340_; 
v___f_1327_ = lean_obj_once(&l_Std_Async_System_Environment_get_x3f___closed__1, &l_Std_Async_System_Environment_get_x3f___closed__1_once, _init_l_Std_Async_System_Environment_get_x3f___closed__1);
v___x_1328_ = lean_array_get_size(v_a_1323_);
v___x_1329_ = lean_unsigned_to_nat(0u);
v___x_1330_ = lean_unsigned_to_nat(4u);
v___x_1331_ = lean_nat_mul(v___x_1328_, v___x_1330_);
v___x_1332_ = lean_unsigned_to_nat(3u);
v___x_1333_ = lean_nat_div(v___x_1331_, v___x_1332_);
lean_dec(v___x_1331_);
v___x_1334_ = l_Nat_nextPowerOfTwo(v___x_1333_);
lean_dec(v___x_1333_);
v___x_1335_ = lean_box(0);
v___x_1336_ = lean_mk_array(v___x_1334_, v___x_1335_);
v___x_1337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1337_, 0, v___x_1329_);
lean_ctor_set(v___x_1337_, 1, v___x_1336_);
v___x_1338_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___redArg(v___f_1321_, v___f_1327_, v___x_1320_, v___x_1337_, v_a_1323_);
if (v_isShared_1326_ == 0)
{
lean_ctor_set(v___x_1325_, 0, v___x_1338_);
v___x_1340_ = v___x_1325_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
v_a_1343_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1322_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1322_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getEnv___boxed(lean_object* v___y_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Std_Async_System_getEnv();
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getHomeDir(){
_start:
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_uv_os_homedir();
if (lean_obj_tag(v___x_1354_) == 0)
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1362_; 
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1357_ = v___x_1354_;
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1354_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1360_; 
if (v_isShared_1358_ == 0)
{
v___x_1360_ = v___x_1357_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v_a_1355_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
else
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
v_a_1363_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1354_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1354_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getHomeDir___boxed(lean_object* v___y_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Std_Async_System_getHomeDir();
return v_res_1372_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getTmpDir(){
_start:
{
lean_object* v___x_1374_; 
v___x_1374_ = lean_uv_os_tmpdir();
if (lean_obj_tag(v___x_1374_) == 0)
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
v_a_1375_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1374_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1374_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
v_a_1383_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1374_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1374_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getTmpDir___boxed(lean_object* v___y_1391_){
_start:
{
lean_object* v_res_1392_; 
v_res_1392_ = l_Std_Async_System_getTmpDir();
return v_res_1392_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getCurrentUser(){
_start:
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_uv_os_get_passwd();
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; lean_object* v___x_1397_; uint8_t v_isShared_1398_; uint8_t v_isSharedCheck_1454_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1397_ = v___x_1394_;
v_isShared_1398_ = v_isSharedCheck_1454_;
goto v_resetjp_1396_;
}
else
{
lean_inc(v_a_1395_);
lean_dec(v___x_1394_);
v___x_1397_ = lean_box(0);
v_isShared_1398_ = v_isSharedCheck_1454_;
goto v_resetjp_1396_;
}
v_resetjp_1396_:
{
lean_object* v_username_1399_; lean_object* v_uid_1400_; lean_object* v_gid_1401_; lean_object* v_shell_1402_; lean_object* v_homedir_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1453_; 
v_username_1399_ = lean_ctor_get(v_a_1395_, 0);
v_uid_1400_ = lean_ctor_get(v_a_1395_, 1);
v_gid_1401_ = lean_ctor_get(v_a_1395_, 2);
v_shell_1402_ = lean_ctor_get(v_a_1395_, 3);
v_homedir_1403_ = lean_ctor_get(v_a_1395_, 4);
v_isSharedCheck_1453_ = !lean_is_exclusive(v_a_1395_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1405_ = v_a_1395_;
v_isShared_1406_ = v_isSharedCheck_1453_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_homedir_1403_);
lean_inc(v_shell_1402_);
lean_inc(v_gid_1401_);
lean_inc(v_uid_1400_);
lean_inc(v_username_1399_);
lean_dec(v_a_1395_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1453_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1418_; lean_object* v___y_1419_; lean_object* v___y_1430_; 
if (lean_obj_tag(v_uid_1400_) == 0)
{
lean_object* v___x_1442_; 
v___x_1442_ = lean_box(0);
v___y_1430_ = v___x_1442_;
goto v___jp_1429_;
}
else
{
lean_object* v_val_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1452_; 
v_val_1443_ = lean_ctor_get(v_uid_1400_, 0);
v_isSharedCheck_1452_ = !lean_is_exclusive(v_uid_1400_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1445_ = v_uid_1400_;
v_isShared_1446_ = v_isSharedCheck_1452_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_val_1443_);
lean_dec(v_uid_1400_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1452_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
uint64_t v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1450_; 
v___x_1447_ = lean_unbox_uint64(v_val_1443_);
lean_dec(v_val_1443_);
v___x_1448_ = lean_uint64_to_nat(v___x_1447_);
if (v_isShared_1446_ == 0)
{
lean_ctor_set(v___x_1445_, 0, v___x_1448_);
v___x_1450_ = v___x_1445_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v___x_1448_);
v___x_1450_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
v___y_1430_ = v___x_1450_;
goto v___jp_1429_;
}
}
}
v___jp_1407_:
{
lean_object* v___x_1412_; 
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 4, v___y_1410_);
lean_ctor_set(v___x_1405_, 2, v___y_1408_);
lean_ctor_set(v___x_1405_, 1, v___y_1409_);
v___x_1412_ = v___x_1405_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_username_1399_);
lean_ctor_set(v_reuseFailAlloc_1416_, 1, v___y_1409_);
lean_ctor_set(v_reuseFailAlloc_1416_, 2, v___y_1408_);
lean_ctor_set(v_reuseFailAlloc_1416_, 3, v_shell_1402_);
lean_ctor_set(v_reuseFailAlloc_1416_, 4, v___y_1410_);
v___x_1412_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1414_; 
if (v_isShared_1398_ == 0)
{
lean_ctor_set(v___x_1397_, 0, v___x_1412_);
v___x_1414_ = v___x_1397_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1412_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
v___jp_1417_:
{
if (lean_obj_tag(v_homedir_1403_) == 0)
{
lean_object* v___x_1420_; 
v___x_1420_ = lean_box(0);
v___y_1408_ = v___y_1419_;
v___y_1409_ = v___y_1418_;
v___y_1410_ = v___x_1420_;
goto v___jp_1407_;
}
else
{
lean_object* v_val_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
v_val_1421_ = lean_ctor_get(v_homedir_1403_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v_homedir_1403_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v_homedir_1403_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_val_1421_);
lean_dec(v_homedir_1403_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_val_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
v___y_1408_ = v___y_1419_;
v___y_1409_ = v___y_1418_;
v___y_1410_ = v___x_1426_;
goto v___jp_1407_;
}
}
}
}
v___jp_1429_:
{
if (lean_obj_tag(v_gid_1401_) == 0)
{
lean_object* v___x_1431_; 
v___x_1431_ = lean_box(0);
v___y_1418_ = v___y_1430_;
v___y_1419_ = v___x_1431_;
goto v___jp_1417_;
}
else
{
lean_object* v_val_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1441_; 
v_val_1432_ = lean_ctor_get(v_gid_1401_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v_gid_1401_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1434_ = v_gid_1401_;
v_isShared_1435_ = v_isSharedCheck_1441_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_val_1432_);
lean_dec(v_gid_1401_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1441_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
uint64_t v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1436_ = lean_unbox_uint64(v_val_1432_);
lean_dec(v_val_1432_);
v___x_1437_ = lean_uint64_to_nat(v___x_1436_);
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 0, v___x_1437_);
v___x_1439_ = v___x_1434_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
v___y_1418_ = v___y_1430_;
v___y_1419_ = v___x_1439_;
goto v___jp_1417_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
v_a_1455_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1394_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1394_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getCurrentUser___boxed(lean_object* v___y_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_Std_Async_System_getCurrentUser();
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00Std_Async_System_getGroup_spec__0___redArg(lean_object* v_a_1465_, lean_object* v_f_1466_){
_start:
{
if (lean_obj_tag(v_a_1465_) == 0)
{
lean_object* v___x_1467_; 
lean_dec(v_f_1466_);
v___x_1467_ = lean_box(0);
return v___x_1467_;
}
else
{
lean_object* v_val_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1476_; 
v_val_1468_ = lean_ctor_get(v_a_1465_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v_a_1465_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1470_ = v_a_1465_;
v_isShared_1471_ = v_isSharedCheck_1476_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_val_1468_);
lean_dec(v_a_1465_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1476_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1472_; lean_object* v___x_1474_; 
v___x_1472_ = lean_apply_1(v_f_1466_, v_val_1468_);
if (v_isShared_1471_ == 0)
{
lean_ctor_set(v___x_1470_, 0, v___x_1472_);
v___x_1474_ = v___x_1470_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v___x_1472_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00Std_Async_System_getGroup_spec__0(lean_object* v_00_u03b1_1477_, lean_object* v_00_u03b2_1478_, lean_object* v_a_1479_, lean_object* v_f_1480_){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = l_Functor_mapRev___at___00Std_Async_System_getGroup_spec__0___redArg(v_a_1479_, v_f_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getGroup___lam__0(lean_object* v_group_1482_){
_start:
{
lean_object* v_groupname_1483_; uint64_t v_gid_1484_; lean_object* v_members_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v_groupname_1483_ = lean_ctor_get(v_group_1482_, 0);
v_gid_1484_ = lean_ctor_get_uint64(v_group_1482_, sizeof(void*)*2);
v_members_1485_ = lean_ctor_get(v_group_1482_, 1);
v___x_1486_ = lean_uint64_to_nat(v_gid_1484_);
lean_inc_ref(v_members_1485_);
lean_inc_ref(v_groupname_1483_);
v___x_1487_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1487_, 0, v_groupname_1483_);
lean_ctor_set(v___x_1487_, 1, v___x_1486_);
lean_ctor_set(v___x_1487_, 2, v_members_1485_);
return v___x_1487_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getGroup___lam__0___boxed(lean_object* v_group_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l_Std_Async_System_getGroup___lam__0(v_group_1488_);
lean_dec_ref(v_group_1488_);
return v_res_1489_;
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getGroup(lean_object* v_groupId_1491_){
_start:
{
lean_object* v___f_1493_; uint64_t v___x_1494_; lean_object* v___x_1495_; 
v___f_1493_ = ((lean_object*)(l_Std_Async_System_getGroup___closed__0));
v___x_1494_ = lean_uint64_of_nat(v_groupId_1491_);
v___x_1495_ = lean_uv_os_get_group(v___x_1494_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1504_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1498_ = v___x_1495_;
v_isShared_1499_ = v_isSharedCheck_1504_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1495_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1504_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1500_; lean_object* v___x_1502_; 
v___x_1500_ = l_Functor_mapRev___at___00Std_Async_System_getGroup_spec__0___redArg(v_a_1496_, v___f_1493_);
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 0, v___x_1500_);
v___x_1502_ = v___x_1498_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v___x_1500_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
v_a_1505_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1495_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1495_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Async_System_getGroup___boxed(lean_object* v_groupId_1513_, lean_object* v___y_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Std_Async_System_getGroup(v_groupId_1513_);
lean_dec(v_groupId_1513_);
return v_res_1515_;
}
}
lean_object* runtime_initialize_Std_Time(uint8_t builtin);
lean_object* runtime_initialize_Std_Internal_UV_System(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Async_System(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Std_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_UV_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_Async_System_instInhabitedGroupId_default = _init_l_Std_Async_System_instInhabitedGroupId_default();
lean_mark_persistent(l_Std_Async_System_instInhabitedGroupId_default);
l_Std_Async_System_instInhabitedGroupId = _init_l_Std_Async_System_instInhabitedGroupId();
lean_mark_persistent(l_Std_Async_System_instInhabitedGroupId);
l_Std_Async_System_instInhabitedUserId_default = _init_l_Std_Async_System_instInhabitedUserId_default();
lean_mark_persistent(l_Std_Async_System_instInhabitedUserId_default);
l_Std_Async_System_instInhabitedUserId = _init_l_Std_Async_System_instInhabitedUserId();
lean_mark_persistent(l_Std_Async_System_instInhabitedUserId);
l_Std_Async_System_instInhabitedCPUTimes_default = _init_l_Std_Async_System_instInhabitedCPUTimes_default();
lean_mark_persistent(l_Std_Async_System_instInhabitedCPUTimes_default);
l_Std_Async_System_instInhabitedCPUTimes = _init_l_Std_Async_System_instInhabitedCPUTimes();
lean_mark_persistent(l_Std_Async_System_instInhabitedCPUTimes);
l_Std_Async_System_instInhabitedCPUInfo_default = _init_l_Std_Async_System_instInhabitedCPUInfo_default();
lean_mark_persistent(l_Std_Async_System_instInhabitedCPUInfo_default);
l_Std_Async_System_instInhabitedCPUInfo = _init_l_Std_Async_System_instInhabitedCPUInfo();
lean_mark_persistent(l_Std_Async_System_instInhabitedCPUInfo);
l_Std_Async_System_instInhabitedEnvironment_default = _init_l_Std_Async_System_instInhabitedEnvironment_default();
lean_mark_persistent(l_Std_Async_System_instInhabitedEnvironment_default);
l_Std_Async_System_instInhabitedEnvironment = _init_l_Std_Async_System_instInhabitedEnvironment();
lean_mark_persistent(l_Std_Async_System_instInhabitedEnvironment);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Async_System(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Std_Time(uint8_t builtin);
lean_object* initialize_Std_Internal_UV_System(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Async_System(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Time(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_UV_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Async_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Async_System(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Async_System(builtin);
}
#ifdef __cplusplus
}
#endif
