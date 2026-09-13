// Lean compiler output
// Module: Lean.Util.LeanOptions
// Imports: public import Lean.Data.Json.FromToJson.Basic
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
lean_object* l_String_quote(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_NameMap_fromJson_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_NameMap_toJson___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofBool_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofBool_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofNat_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofNat_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedLeanOptionValue_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_instInhabitedLeanOptionValue_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedLeanOptionValue_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedLeanOptionValue_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedLeanOptionValue_default___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedLeanOptionValue_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedLeanOptionValue_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedLeanOptionValue_default = (const lean_object*)&l_Lean_instInhabitedLeanOptionValue_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedLeanOptionValue = (const lean_object*)&l_Lean_instInhabitedLeanOptionValue_default___closed__1_value;
static const lean_string_object l_Lean_instReprLeanOptionValue_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.LeanOptionValue.ofString"};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__0 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__1 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__1_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__2 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__2_value;
static lean_once_cell_t l_Lean_instReprLeanOptionValue_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOptionValue_repr___closed__3;
static lean_once_cell_t l_Lean_instReprLeanOptionValue_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOptionValue_repr___closed__4;
static const lean_string_object l_Lean_instReprLeanOptionValue_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.LeanOptionValue.ofBool"};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__5 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__5_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__5_value)}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__6 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__6_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__7 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__7_value;
static const lean_string_object l_Lean_instReprLeanOptionValue_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.LeanOptionValue.ofNat"};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__8 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__8_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__8_value)}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__9 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__9_value;
static const lean_ctor_object l_Lean_instReprLeanOptionValue_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLeanOptionValue_repr___closed__10 = (const lean_object*)&l_Lean_instReprLeanOptionValue_repr___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptionValue_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptionValue_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLeanOptionValue_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instReprLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLeanOptionValue = (const lean_object*)&l_Lean_instReprLeanOptionValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofDataValue_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_toDataValue(lean_object*);
static const lean_closure_object l_Lean_instValueLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LeanOptionValue_toDataValue, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instValueLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instValueLeanOptionValue___closed__0_value;
static const lean_closure_object l_Lean_instValueLeanOptionValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LeanOptionValue_ofDataValue_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instValueLeanOptionValue___closed__1 = (const lean_object*)&l_Lean_instValueLeanOptionValue___closed__1_value;
static const lean_ctor_object l_Lean_instValueLeanOptionValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instValueLeanOptionValue___closed__0_value),((lean_object*)&l_Lean_instValueLeanOptionValue___closed__1_value)}};
static const lean_object* l_Lean_instValueLeanOptionValue___closed__2 = (const lean_object*)&l_Lean_instValueLeanOptionValue___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_instValueLeanOptionValue = (const lean_object*)&l_Lean_instValueLeanOptionValue___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instCoeStringLeanOptionValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instCoeStringLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeStringLeanOptionValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeStringLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instCoeStringLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeStringLeanOptionValue = (const lean_object*)&l_Lean_instCoeStringLeanOptionValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instCoeBoolLeanOptionValue___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instCoeBoolLeanOptionValue___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instCoeBoolLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeBoolLeanOptionValue___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeBoolLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instCoeBoolLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeBoolLeanOptionValue = (const lean_object*)&l_Lean_instCoeBoolLeanOptionValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instCoeNatLeanOptionValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instCoeNatLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instCoeNatLeanOptionValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instCoeNatLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instCoeNatLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instCoeNatLeanOptionValue = (const lean_object*)&l_Lean_instCoeNatLeanOptionValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instOfNatLeanOptionValue(lean_object*);
static const lean_string_object l_Lean_instFromJsonLeanOptionValue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "invalid LeanOptionValue type"};
static const lean_object* l_Lean_instFromJsonLeanOptionValue___lam__0___closed__0 = (const lean_object*)&l_Lean_instFromJsonLeanOptionValue___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonLeanOptionValue___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instFromJsonLeanOptionValue___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instFromJsonLeanOptionValue___lam__0___closed__1 = (const lean_object*)&l_Lean_instFromJsonLeanOptionValue___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_instFromJsonLeanOptionValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instFromJsonLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonLeanOptionValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instFromJsonLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonLeanOptionValue = (const lean_object*)&l_Lean_instFromJsonLeanOptionValue___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonLeanOptionValue___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToJsonLeanOptionValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonLeanOptionValue___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonLeanOptionValue___closed__0 = (const lean_object*)&l_Lean_instToJsonLeanOptionValue___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonLeanOptionValue = (const lean_object*)&l_Lean_instToJsonLeanOptionValue___closed__0_value;
static const lean_string_object l_Lean_LeanOptionValue_asCliFlagValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\""};
static const lean_object* l_Lean_LeanOptionValue_asCliFlagValue___closed__0 = (const lean_object*)&l_Lean_LeanOptionValue_asCliFlagValue___closed__0_value;
static const lean_string_object l_Lean_LeanOptionValue_asCliFlagValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_LeanOptionValue_asCliFlagValue___closed__1 = (const lean_object*)&l_Lean_LeanOptionValue_asCliFlagValue___closed__1_value;
static const lean_string_object l_Lean_LeanOptionValue_asCliFlagValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_LeanOptionValue_asCliFlagValue___closed__2 = (const lean_object*)&l_Lean_LeanOptionValue_asCliFlagValue___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_asCliFlagValue(lean_object*);
static const lean_ctor_object l_Lean_instInhabitedLeanOption_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedLeanOptionValue_default___closed__1_value)}};
static const lean_object* l_Lean_instInhabitedLeanOption_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedLeanOption_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedLeanOption_default = (const lean_object*)&l_Lean_instInhabitedLeanOption_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedLeanOption = (const lean_object*)&l_Lean_instInhabitedLeanOption_default___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprLeanOption_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprLeanOption_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__9 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__10 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lean_instReprLeanOption_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__12;
static const lean_string_object l_Lean_instReprLeanOption_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__13 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__13_value;
static lean_once_cell_t l_Lean_instReprLeanOption_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__14;
static lean_once_cell_t l_Lean_instReprLeanOption_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__15;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__16 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_instReprLeanOption_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__13_value)}};
static const lean_object* l_Lean_instReprLeanOption_repr___redArg___closed__17 = (const lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLeanOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLeanOption_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLeanOption___closed__0 = (const lean_object*)&l_Lean_instReprLeanOption___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLeanOption = (const lean_object*)&l_Lean_instReprLeanOption___closed__0_value;
static const lean_string_object l_Lean_LeanOption_asCliArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-D"};
static const lean_object* l_Lean_LeanOption_asCliArg___closed__0 = (const lean_object*)&l_Lean_LeanOption_asCliArg___closed__0_value;
static const lean_string_object l_Lean_LeanOption_asCliArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_Lean_LeanOption_asCliArg___closed__1 = (const lean_object*)&l_Lean_LeanOption_asCliArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_LeanOption_asCliArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedLeanOptions_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLeanOptions;
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__1_value;
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__2 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__5_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__2_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__6 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2(lean_object*, lean_object*);
static const lean_string_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__0_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__1 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__1_value;
static const lean_string_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__2 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__2_value;
static const lean_string_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__3 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__3_value;
static lean_once_cell_t l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4;
static lean_once_cell_t l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5;
static const lean_ctor_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__2_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__6 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__6_value;
static const lean_ctor_object l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__3_value)}};
static const lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__7 = (const lean_object*)&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprLeanOptions_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "values"};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instReprLeanOptions_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprLeanOptions_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprLeanOptions_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__2_value),((lean_object*)&l_Lean_instReprLeanOption_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_instReprLeanOptions_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__4;
static const lean_string_object l_Lean_instReprLeanOptions_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.TreeMap.ofList "};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprLeanOptions_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprLeanOptions_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprLeanOptions_repr___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLeanOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLeanOptions_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLeanOptions___closed__0 = (const lean_object*)&l_Lean_instReprLeanOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLeanOptions = (const lean_object*)&l_Lean_instReprLeanOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLeanOptions;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_ofArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_ofArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_append___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_append___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_LeanOptions_append___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LeanOptions_append___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LeanOptions_append___closed__0 = (const lean_object*)&l_Lean_LeanOptions_append___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LeanOptions_append(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instAppendLeanOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LeanOptions_append, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instAppendLeanOptions___closed__0 = (const lean_object*)&l_Lean_instAppendLeanOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instAppendLeanOptions = (const lean_object*)&l_Lean_instAppendLeanOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LeanOptions_appendArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_appendArray___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instHAppendLeanOptionsArrayLeanOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LeanOptions_appendArray___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHAppendLeanOptionsArrayLeanOption___closed__0 = (const lean_object*)&l_Lean_instHAppendLeanOptionsArrayLeanOption___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHAppendLeanOptionsArrayLeanOption = (const lean_object*)&l_Lean_instHAppendLeanOptionsArrayLeanOption___closed__0_value;
static const lean_string_object l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_toOptions_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_toOptions(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_fromOptions_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LeanOptions_fromOptions_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonLeanOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instFromJsonLeanOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonLeanOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instFromJsonLeanOptionValue___closed__0_value)} };
static const lean_object* l_Lean_instFromJsonLeanOptions___closed__0 = (const lean_object*)&l_Lean_instFromJsonLeanOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonLeanOptions = (const lean_object*)&l_Lean_instFromJsonLeanOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonLeanOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instToJsonLeanOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonLeanOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_instToJsonLeanOptionValue___closed__0_value)} };
static const lean_object* l_Lean_instToJsonLeanOptions___closed__0 = (const lean_object*)&l_Lean_instToJsonLeanOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonLeanOptions = (const lean_object*)&l_Lean_instToJsonLeanOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
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
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_LeanOptionValue_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
switch(lean_obj_tag(v_t_7_))
{
case 0:
{
lean_object* v_s_9_; lean_object* v___x_10_; 
v_s_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc_ref(v_s_9_);
lean_dec_ref_known(v_t_7_, 1);
v___x_10_ = lean_apply_1(v_k_8_, v_s_9_);
return v___x_10_;
}
case 1:
{
uint8_t v_b_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v_b_11_ = lean_ctor_get_uint8(v_t_7_, 0);
lean_dec_ref_known(v_t_7_, 0);
v___x_12_ = lean_box(v_b_11_);
v___x_13_ = lean_apply_1(v_k_8_, v___x_12_);
return v___x_13_;
}
default: 
{
lean_object* v_n_14_; lean_object* v___x_15_; 
v_n_14_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_n_14_);
lean_dec_ref_known(v_t_7_, 1);
v___x_15_ = lean_apply_1(v_k_8_, v_n_14_);
return v___x_15_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_18_, v_k_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ctorElim___boxed(lean_object* v_motive_22_, lean_object* v_ctorIdx_23_, lean_object* v_t_24_, lean_object* v_h_25_, lean_object* v_k_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_LeanOptionValue_ctorElim(v_motive_22_, v_ctorIdx_23_, v_t_24_, v_h_25_, v_k_26_);
lean_dec(v_ctorIdx_23_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofString_elim___redArg(lean_object* v_t_28_, lean_object* v_ofString_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_28_, v_ofString_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofString_elim(lean_object* v_motive_31_, lean_object* v_t_32_, lean_object* v_h_33_, lean_object* v_ofString_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_32_, v_ofString_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofBool_elim___redArg(lean_object* v_t_36_, lean_object* v_ofBool_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_36_, v_ofBool_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofBool_elim(lean_object* v_motive_39_, lean_object* v_t_40_, lean_object* v_h_41_, lean_object* v_ofBool_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_40_, v_ofBool_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofNat_elim___redArg(lean_object* v_t_44_, lean_object* v_ofNat_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_44_, v_ofNat_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofNat_elim(lean_object* v_motive_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_ofNat_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_LeanOptionValue_ctorElim___redArg(v_t_48_, v_ofNat_50_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_instReprLeanOptionValue_repr___closed__3(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_unsigned_to_nat(2u);
v___x_64_ = lean_nat_to_int(v___x_63_);
return v___x_64_;
}
}
static lean_object* _init_l_Lean_instReprLeanOptionValue_repr___closed__4(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = lean_unsigned_to_nat(1u);
v___x_66_ = lean_nat_to_int(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptionValue_repr(lean_object* v_x_79_, lean_object* v_prec_80_){
_start:
{
switch(lean_obj_tag(v_x_79_))
{
case 0:
{
lean_object* v_s_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_101_; 
v_s_81_ = lean_ctor_get(v_x_79_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_79_);
if (v_isSharedCheck_101_ == 0)
{
v___x_83_ = v_x_79_;
v_isShared_84_ = v_isSharedCheck_101_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_s_81_);
lean_dec(v_x_79_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_101_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___y_86_; lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = lean_unsigned_to_nat(1024u);
v___x_98_ = lean_nat_dec_le(v___x_97_, v_prec_80_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; 
v___x_99_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__3, &l_Lean_instReprLeanOptionValue_repr___closed__3_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__3);
v___y_86_ = v___x_99_;
goto v___jp_85_;
}
else
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__4, &l_Lean_instReprLeanOptionValue_repr___closed__4_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__4);
v___y_86_ = v___x_100_;
goto v___jp_85_;
}
v___jp_85_:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_87_ = ((lean_object*)(l_Lean_instReprLeanOptionValue_repr___closed__2));
v___x_88_ = l_String_quote(v_s_81_);
if (v_isShared_84_ == 0)
{
lean_ctor_set_tag(v___x_83_, 3);
lean_ctor_set(v___x_83_, 0, v___x_88_);
v___x_90_ = v___x_83_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_96_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_91_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_87_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
lean_inc(v___y_86_);
v___x_92_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_92_, 0, v___y_86_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = 0;
v___x_94_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_94_, 0, v___x_92_);
lean_ctor_set_uint8(v___x_94_, sizeof(void*)*1, v___x_93_);
v___x_95_ = l_Repr_addAppParen(v___x_94_, v_prec_80_);
return v___x_95_;
}
}
}
}
case 1:
{
uint8_t v_b_102_; lean_object* v___y_104_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_b_102_ = lean_ctor_get_uint8(v_x_79_, 0);
lean_dec_ref_known(v_x_79_, 0);
v___x_112_ = lean_unsigned_to_nat(1024u);
v___x_113_ = lean_nat_dec_le(v___x_112_, v_prec_80_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__3, &l_Lean_instReprLeanOptionValue_repr___closed__3_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__3);
v___y_104_ = v___x_114_;
goto v___jp_103_;
}
else
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__4, &l_Lean_instReprLeanOptionValue_repr___closed__4_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__4);
v___y_104_ = v___x_115_;
goto v___jp_103_;
}
v___jp_103_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_105_ = ((lean_object*)(l_Lean_instReprLeanOptionValue_repr___closed__7));
v___x_106_ = l_Bool_repr___redArg(v_b_102_);
v___x_107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_105_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
lean_inc(v___y_104_);
v___x_108_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_108_, 0, v___y_104_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = 0;
v___x_110_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*1, v___x_109_);
v___x_111_ = l_Repr_addAppParen(v___x_110_, v_prec_80_);
return v___x_111_;
}
}
default: 
{
lean_object* v_n_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_136_; 
v_n_116_ = lean_ctor_get(v_x_79_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v_x_79_);
if (v_isSharedCheck_136_ == 0)
{
v___x_118_ = v_x_79_;
v_isShared_119_ = v_isSharedCheck_136_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_n_116_);
lean_dec(v_x_79_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_136_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___y_121_; lean_object* v___x_132_; uint8_t v___x_133_; 
v___x_132_ = lean_unsigned_to_nat(1024u);
v___x_133_ = lean_nat_dec_le(v___x_132_, v_prec_80_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; 
v___x_134_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__3, &l_Lean_instReprLeanOptionValue_repr___closed__3_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__3);
v___y_121_ = v___x_134_;
goto v___jp_120_;
}
else
{
lean_object* v___x_135_; 
v___x_135_ = lean_obj_once(&l_Lean_instReprLeanOptionValue_repr___closed__4, &l_Lean_instReprLeanOptionValue_repr___closed__4_once, _init_l_Lean_instReprLeanOptionValue_repr___closed__4);
v___y_121_ = v___x_135_;
goto v___jp_120_;
}
v___jp_120_:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_122_ = ((lean_object*)(l_Lean_instReprLeanOptionValue_repr___closed__10));
v___x_123_ = l_Nat_reprFast(v_n_116_);
if (v_isShared_119_ == 0)
{
lean_ctor_set_tag(v___x_118_, 3);
lean_ctor_set(v___x_118_, 0, v___x_123_);
v___x_125_ = v___x_118_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_123_);
v___x_125_ = v_reuseFailAlloc_131_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_122_);
lean_ctor_set(v___x_126_, 1, v___x_125_);
lean_inc(v___y_121_);
v___x_127_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_127_, 0, v___y_121_);
lean_ctor_set(v___x_127_, 1, v___x_126_);
v___x_128_ = 0;
v___x_129_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_129_, 0, v___x_127_);
lean_ctor_set_uint8(v___x_129_, sizeof(void*)*1, v___x_128_);
v___x_130_ = l_Repr_addAppParen(v___x_129_, v_prec_80_);
return v___x_130_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptionValue_repr___boxed(lean_object* v_x_137_, lean_object* v_prec_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_instReprLeanOptionValue_repr(v_x_137_, v_prec_138_);
lean_dec(v_prec_138_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_ofDataValue_x3f(lean_object* v_x_142_){
_start:
{
switch(lean_obj_tag(v_x_142_))
{
case 0:
{
lean_object* v_v_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_151_; 
v_v_143_ = lean_ctor_get(v_x_142_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v_x_142_);
if (v_isSharedCheck_151_ == 0)
{
v___x_145_ = v_x_142_;
v_isShared_146_ = v_isSharedCheck_151_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_v_143_);
lean_dec(v_x_142_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_151_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_v_143_);
v___x_148_ = v_reuseFailAlloc_150_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_149_; 
v___x_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
return v___x_149_;
}
}
}
case 1:
{
uint8_t v_v_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_160_; 
v_v_152_ = lean_ctor_get_uint8(v_x_142_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v_x_142_);
if (v_isSharedCheck_160_ == 0)
{
v___x_154_ = v_x_142_;
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
else
{
lean_dec(v_x_142_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_159_, 0, v_v_152_);
v___x_157_ = v_reuseFailAlloc_159_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
lean_object* v___x_158_; 
v___x_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
}
}
case 3:
{
lean_object* v_v_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_169_; 
v_v_161_ = lean_ctor_get(v_x_142_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v_x_142_);
if (v_isSharedCheck_169_ == 0)
{
v___x_163_ = v_x_142_;
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_v_161_);
lean_dec(v_x_142_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_166_; 
if (v_isShared_164_ == 0)
{
lean_ctor_set_tag(v___x_163_, 2);
v___x_166_ = v___x_163_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_v_161_);
v___x_166_ = v_reuseFailAlloc_168_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_167_; 
v___x_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
return v___x_167_;
}
}
}
default: 
{
lean_object* v___x_170_; 
lean_dec_ref(v_x_142_);
v___x_170_ = lean_box(0);
return v___x_170_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_toDataValue(lean_object* v_x_171_){
_start:
{
switch(lean_obj_tag(v_x_171_))
{
case 0:
{
lean_object* v_s_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
v_s_172_ = lean_ctor_get(v_x_171_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v_x_171_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v_x_171_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_s_172_);
lean_dec(v_x_171_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_s_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
case 1:
{
uint8_t v_b_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_187_; 
v_b_180_ = lean_ctor_get_uint8(v_x_171_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v_x_171_);
if (v_isSharedCheck_187_ == 0)
{
v___x_182_ = v_x_171_;
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
else
{
lean_dec(v_x_171_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_186_, 0, v_b_180_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
default: 
{
lean_object* v_n_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
v_n_188_ = lean_ctor_get(v_x_171_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v_x_171_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v_x_171_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_n_188_);
lean_dec(v_x_171_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
lean_ctor_set_tag(v___x_190_, 3);
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_n_188_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeStringLeanOptionValue___lam__0(lean_object* v_s_202_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_203_, 0, v_s_202_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeBoolLeanOptionValue___lam__0(uint8_t v_b_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_207_, 0, v_b_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeBoolLeanOptionValue___lam__0___boxed(lean_object* v_b_208_){
_start:
{
uint8_t v_b_boxed_209_; lean_object* v_res_210_; 
v_b_boxed_209_ = lean_unbox(v_b_208_);
v_res_210_ = l_Lean_instCoeBoolLeanOptionValue___lam__0(v_b_boxed_209_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_instCoeNatLeanOptionValue___lam__0(lean_object* v_n_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_214_, 0, v_n_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_instOfNatLeanOptionValue(lean_object* v_n_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_218_, 0, v_n_217_);
return v___x_218_;
}
}
static lean_object* _init_l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2(void){
_start:
{
lean_object* v_natZero_222_; lean_object* v_intZero_223_; 
v_natZero_222_ = lean_unsigned_to_nat(0u);
v_intZero_223_ = lean_nat_to_int(v_natZero_222_);
return v_intZero_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonLeanOptionValue___lam__0(lean_object* v_x_224_){
_start:
{
switch(lean_obj_tag(v_x_224_))
{
case 3:
{
lean_object* v_s_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_235_; 
v_s_227_ = lean_ctor_get(v_x_224_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v_x_224_);
if (v_isSharedCheck_235_ == 0)
{
v___x_229_ = v_x_224_;
v_isShared_230_ = v_isSharedCheck_235_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_s_227_);
lean_dec(v_x_224_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_235_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
lean_ctor_set_tag(v___x_229_, 0);
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_s_227_);
v___x_232_ = v_reuseFailAlloc_234_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
lean_object* v___x_233_; 
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
return v___x_233_;
}
}
}
case 1:
{
uint8_t v_b_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_244_; 
v_b_236_ = lean_ctor_get_uint8(v_x_224_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v_x_224_);
if (v_isSharedCheck_244_ == 0)
{
v___x_238_ = v_x_224_;
v_isShared_239_ = v_isSharedCheck_244_;
goto v_resetjp_237_;
}
else
{
lean_dec(v_x_224_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_244_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_241_; 
if (v_isShared_239_ == 0)
{
v___x_241_ = v___x_238_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, 0, v_b_236_);
v___x_241_ = v_reuseFailAlloc_243_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
lean_object* v___x_242_; 
v___x_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
}
}
case 2:
{
lean_object* v_n_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_260_; 
v_n_245_ = lean_ctor_get(v_x_224_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v_x_224_);
if (v_isSharedCheck_260_ == 0)
{
v___x_247_ = v_x_224_;
v_isShared_248_ = v_isSharedCheck_260_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_n_245_);
lean_dec(v_x_224_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_260_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v_mantissa_249_; lean_object* v_exponent_250_; lean_object* v_natZero_251_; lean_object* v_intZero_252_; uint8_t v_isNeg_253_; 
v_mantissa_249_ = lean_ctor_get(v_n_245_, 0);
lean_inc(v_mantissa_249_);
v_exponent_250_ = lean_ctor_get(v_n_245_, 1);
lean_inc(v_exponent_250_);
lean_dec_ref(v_n_245_);
v_natZero_251_ = lean_unsigned_to_nat(0u);
v_intZero_252_ = lean_obj_once(&l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2, &l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2_once, _init_l_Lean_instFromJsonLeanOptionValue___lam__0___closed__2);
v_isNeg_253_ = lean_int_dec_lt(v_mantissa_249_, v_intZero_252_);
if (v_isNeg_253_ == 0)
{
uint8_t v___x_254_; 
v___x_254_ = lean_nat_dec_eq(v_exponent_250_, v_natZero_251_);
lean_dec(v_exponent_250_);
if (v___x_254_ == 0)
{
lean_dec(v_mantissa_249_);
lean_del_object(v___x_247_);
goto v___jp_225_;
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; 
v_a_255_ = lean_nat_abs(v_mantissa_249_);
lean_dec(v_mantissa_249_);
if (v_isShared_248_ == 0)
{
lean_ctor_set(v___x_247_, 0, v_a_255_);
v___x_257_ = v___x_247_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_255_);
v___x_257_ = v_reuseFailAlloc_259_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_258_; 
v___x_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
return v___x_258_;
}
}
}
else
{
lean_dec(v_exponent_250_);
lean_dec(v_mantissa_249_);
lean_del_object(v___x_247_);
goto v___jp_225_;
}
}
}
default: 
{
lean_dec(v_x_224_);
goto v___jp_225_;
}
}
v___jp_225_:
{
lean_object* v___x_226_; 
v___x_226_ = ((lean_object*)(l_Lean_instFromJsonLeanOptionValue___lam__0___closed__1));
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonLeanOptionValue___lam__0(lean_object* v_x_263_){
_start:
{
switch(lean_obj_tag(v_x_263_))
{
case 0:
{
lean_object* v_s_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
v_s_264_ = lean_ctor_get(v_x_263_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v_x_263_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_s_264_);
lean_dec(v_x_263_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
lean_ctor_set_tag(v___x_266_, 3);
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_s_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
case 1:
{
uint8_t v_b_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
v_b_272_ = lean_ctor_get_uint8(v_x_263_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v_x_263_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_dec(v_x_263_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_278_, 0, v_b_272_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
default: 
{
lean_object* v_n_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_288_; 
v_n_280_ = lean_ctor_get(v_x_263_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v_x_263_);
if (v_isSharedCheck_288_ == 0)
{
v___x_282_ = v_x_263_;
v_isShared_283_ = v_isSharedCheck_288_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_n_280_);
lean_dec(v_x_263_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_288_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_286_; 
v___x_284_ = l_Lean_JsonNumber_fromNat(v_n_280_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_284_);
v___x_286_ = v___x_282_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___x_284_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptionValue_asCliFlagValue(lean_object* v_x_294_){
_start:
{
switch(lean_obj_tag(v_x_294_))
{
case 0:
{
lean_object* v_s_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_s_295_ = lean_ctor_get(v_x_294_, 0);
lean_inc_ref(v_s_295_);
lean_dec_ref_known(v_x_294_, 1);
v___x_296_ = ((lean_object*)(l_Lean_LeanOptionValue_asCliFlagValue___closed__0));
v___x_297_ = lean_string_append(v___x_296_, v_s_295_);
lean_dec_ref(v_s_295_);
v___x_298_ = lean_string_append(v___x_297_, v___x_296_);
return v___x_298_;
}
case 1:
{
uint8_t v_b_299_; 
v_b_299_ = lean_ctor_get_uint8(v_x_294_, 0);
lean_dec_ref_known(v_x_294_, 0);
if (v_b_299_ == 0)
{
lean_object* v___x_300_; 
v___x_300_ = ((lean_object*)(l_Lean_LeanOptionValue_asCliFlagValue___closed__1));
return v___x_300_;
}
else
{
lean_object* v___x_301_; 
v___x_301_ = ((lean_object*)(l_Lean_LeanOptionValue_asCliFlagValue___closed__2));
return v___x_301_;
}
}
default: 
{
lean_object* v_n_302_; lean_object* v___x_303_; 
v_n_302_ = lean_ctor_get(v_x_294_, 0);
lean_inc(v_n_302_);
lean_dec_ref_known(v_x_294_, 1);
v___x_303_ = l_Nat_reprFast(v_n_302_);
return v___x_303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprLeanOption_repr_spec__0(lean_object* v_a_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = lean_nat_to_int(v_a_309_);
return v___x_310_;
}
}
static lean_object* _init_l_Lean_instReprLeanOption_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_324_ = lean_unsigned_to_nat(8u);
v___x_325_ = lean_nat_to_int(v___x_324_);
return v___x_325_;
}
}
static lean_object* _init_l_Lean_instReprLeanOption_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_unsigned_to_nat(9u);
v___x_333_ = lean_nat_to_int(v___x_332_);
return v___x_333_;
}
}
static lean_object* _init_l_Lean_instReprLeanOption_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__0));
v___x_336_ = lean_string_length(v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l_Lean_instReprLeanOption_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_obj_once(&l_Lean_instReprLeanOption_repr___redArg___closed__14, &l_Lean_instReprLeanOption_repr___redArg___closed__14_once, _init_l_Lean_instReprLeanOption_repr___redArg___closed__14);
v___x_338_ = lean_nat_to_int(v___x_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr___redArg(lean_object* v_x_343_){
_start:
{
lean_object* v_name_344_; lean_object* v_value_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_379_; 
v_name_344_ = lean_ctor_get(v_x_343_, 0);
v_value_345_ = lean_ctor_get(v_x_343_, 1);
v_isSharedCheck_379_ = !lean_is_exclusive(v_x_343_);
if (v_isSharedCheck_379_ == 0)
{
v___x_347_ = v_x_343_;
v_isShared_348_ = v_isSharedCheck_379_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_value_345_);
lean_inc(v_name_344_);
lean_dec(v_x_343_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_379_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_349_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__5));
v___x_350_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__6));
v___x_351_ = lean_obj_once(&l_Lean_instReprLeanOption_repr___redArg___closed__7, &l_Lean_instReprLeanOption_repr___redArg___closed__7_once, _init_l_Lean_instReprLeanOption_repr___redArg___closed__7);
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = l_Lean_Name_reprPrec(v_name_344_, v___x_352_);
if (v_isShared_348_ == 0)
{
lean_ctor_set_tag(v___x_347_, 4);
lean_ctor_set(v___x_347_, 1, v___x_353_);
lean_ctor_set(v___x_347_, 0, v___x_351_);
v___x_355_ = v___x_347_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_351_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v___x_353_);
v___x_355_ = v_reuseFailAlloc_378_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
uint8_t v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_356_ = 0;
v___x_357_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_357_, 0, v___x_355_);
lean_ctor_set_uint8(v___x_357_, sizeof(void*)*1, v___x_356_);
v___x_358_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_358_, 0, v___x_350_);
lean_ctor_set(v___x_358_, 1, v___x_357_);
v___x_359_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__9));
v___x_360_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_360_, 0, v___x_358_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
v___x_361_ = lean_box(1);
v___x_362_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_362_, 0, v___x_360_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
v___x_363_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__11));
v___x_364_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_364_, 0, v___x_362_);
lean_ctor_set(v___x_364_, 1, v___x_363_);
v___x_365_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v___x_349_);
v___x_366_ = lean_obj_once(&l_Lean_instReprLeanOption_repr___redArg___closed__12, &l_Lean_instReprLeanOption_repr___redArg___closed__12_once, _init_l_Lean_instReprLeanOption_repr___redArg___closed__12);
v___x_367_ = l_Lean_instReprLeanOptionValue_repr(v_value_345_, v___x_352_);
v___x_368_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_366_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_369_, 0, v___x_368_);
lean_ctor_set_uint8(v___x_369_, sizeof(void*)*1, v___x_356_);
v___x_370_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_365_);
lean_ctor_set(v___x_370_, 1, v___x_369_);
v___x_371_ = lean_obj_once(&l_Lean_instReprLeanOption_repr___redArg___closed__15, &l_Lean_instReprLeanOption_repr___redArg___closed__15_once, _init_l_Lean_instReprLeanOption_repr___redArg___closed__15);
v___x_372_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__16));
v___x_373_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
lean_ctor_set(v___x_373_, 1, v___x_370_);
v___x_374_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__17));
v___x_375_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_373_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
v___x_376_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_376_, 0, v___x_371_);
lean_ctor_set(v___x_376_, 1, v___x_375_);
v___x_377_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_377_, 0, v___x_376_);
lean_ctor_set_uint8(v___x_377_, sizeof(void*)*1, v___x_356_);
return v___x_377_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr(lean_object* v_x_380_, lean_object* v_prec_381_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = l_Lean_instReprLeanOption_repr___redArg(v_x_380_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOption_repr___boxed(lean_object* v_x_383_, lean_object* v_prec_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_instReprLeanOption_repr(v_x_383_, v_prec_384_);
lean_dec(v_prec_384_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOption_asCliArg(lean_object* v_o_390_){
_start:
{
lean_object* v_name_391_; lean_object* v_value_392_; lean_object* v___x_393_; uint8_t v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v_name_391_ = lean_ctor_get(v_o_390_, 0);
lean_inc(v_name_391_);
v_value_392_ = lean_ctor_get(v_o_390_, 1);
lean_inc_ref(v_value_392_);
lean_dec_ref(v_o_390_);
v___x_393_ = ((lean_object*)(l_Lean_LeanOption_asCliArg___closed__0));
v___x_394_ = 1;
v___x_395_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_391_, v___x_394_);
v___x_396_ = lean_string_append(v___x_393_, v___x_395_);
lean_dec_ref(v___x_395_);
v___x_397_ = ((lean_object*)(l_Lean_LeanOption_asCliArg___closed__1));
v___x_398_ = lean_string_append(v___x_396_, v___x_397_);
v___x_399_ = l_Lean_LeanOptionValue_asCliFlagValue(v_value_392_);
v___x_400_ = lean_string_append(v___x_398_, v___x_399_);
lean_dec_ref(v___x_399_);
return v___x_400_;
}
}
static lean_object* _init_l_Lean_instInhabitedLeanOptions_default(void){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = lean_box(1);
return v___x_401_;
}
}
static lean_object* _init_l_Lean_instInhabitedLeanOptions(void){
_start:
{
lean_object* v___x_402_; 
v___x_402_ = lean_box(1);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2_spec__3(lean_object* v_x_403_, lean_object* v_x_404_, lean_object* v_x_405_){
_start:
{
if (lean_obj_tag(v_x_405_) == 0)
{
lean_dec(v_x_403_);
return v_x_404_;
}
else
{
lean_object* v_head_406_; lean_object* v_tail_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_416_; 
v_head_406_ = lean_ctor_get(v_x_405_, 0);
v_tail_407_ = lean_ctor_get(v_x_405_, 1);
v_isSharedCheck_416_ = !lean_is_exclusive(v_x_405_);
if (v_isSharedCheck_416_ == 0)
{
v___x_409_ = v_x_405_;
v_isShared_410_ = v_isSharedCheck_416_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_tail_407_);
lean_inc(v_head_406_);
lean_dec(v_x_405_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_416_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
lean_inc(v_x_403_);
if (v_isShared_410_ == 0)
{
lean_ctor_set_tag(v___x_409_, 5);
lean_ctor_set(v___x_409_, 1, v_x_403_);
lean_ctor_set(v___x_409_, 0, v_x_404_);
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_x_404_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_x_403_);
v___x_412_ = v_reuseFailAlloc_415_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
lean_object* v___x_413_; 
v___x_413_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
lean_ctor_set(v___x_413_, 1, v_head_406_);
v_x_404_ = v___x_413_;
v_x_405_ = v_tail_407_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2(lean_object* v_x_417_, lean_object* v_x_418_){
_start:
{
if (lean_obj_tag(v_x_417_) == 0)
{
lean_object* v___x_419_; 
lean_dec(v_x_418_);
v___x_419_ = lean_box(0);
return v___x_419_;
}
else
{
lean_object* v_tail_420_; 
v_tail_420_ = lean_ctor_get(v_x_417_, 1);
if (lean_obj_tag(v_tail_420_) == 0)
{
lean_object* v_head_421_; 
lean_dec(v_x_418_);
v_head_421_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_head_421_);
lean_dec_ref_known(v_x_417_, 2);
return v_head_421_;
}
else
{
lean_object* v_head_422_; lean_object* v___x_423_; 
lean_inc(v_tail_420_);
v_head_422_ = lean_ctor_get(v_x_417_, 0);
lean_inc(v_head_422_);
lean_dec_ref_known(v_x_417_, 2);
v___x_423_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2_spec__3(v_x_418_, v_head_422_, v_tail_420_);
return v___x_423_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__0));
v___x_430_ = lean_string_length(v___x_429_);
return v___x_430_;
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; 
v___x_431_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3, &l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3_once, _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__3);
v___x_432_ = lean_nat_to_int(v___x_431_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(lean_object* v_x_437_){
_start:
{
lean_object* v_fst_438_; lean_object* v_snd_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_462_; 
v_fst_438_ = lean_ctor_get(v_x_437_, 0);
v_snd_439_ = lean_ctor_get(v_x_437_, 1);
v_isSharedCheck_462_ = !lean_is_exclusive(v_x_437_);
if (v_isSharedCheck_462_ == 0)
{
v___x_441_ = v_x_437_;
v_isShared_442_ = v_isSharedCheck_462_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_snd_439_);
lean_inc(v_fst_438_);
lean_dec(v_x_437_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_462_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v___x_443_ = lean_unsigned_to_nat(0u);
v___x_444_ = l_Lean_Name_reprPrec(v_fst_438_, v___x_443_);
v___x_445_ = lean_box(0);
if (v_isShared_442_ == 0)
{
lean_ctor_set_tag(v___x_441_, 1);
lean_ctor_set(v___x_441_, 1, v___x_445_);
lean_ctor_set(v___x_441_, 0, v___x_444_);
v___x_447_ = v___x_441_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_444_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v___x_445_);
v___x_447_ = v_reuseFailAlloc_461_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; lean_object* v___x_460_; 
v___x_448_ = l_Lean_instReprLeanOptionValue_repr(v_snd_439_, v___x_443_);
v___x_449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
lean_ctor_set(v___x_449_, 1, v___x_447_);
v___x_450_ = l_List_reverse___redArg(v___x_449_);
v___x_451_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__1));
v___x_452_ = l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1_spec__2(v___x_450_, v___x_451_);
v___x_453_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4, &l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4_once, _init_l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__4);
v___x_454_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__5));
v___x_455_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_452_);
v___x_456_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__6));
v___x_457_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_455_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v___x_458_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_453_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___x_459_ = 0;
v___x_460_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_460_, 0, v___x_458_);
lean_ctor_set_uint8(v___x_460_, sizeof(void*)*1, v___x_459_);
return v___x_460_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4_spec__6(lean_object* v_x_463_, lean_object* v_x_464_, lean_object* v_x_465_){
_start:
{
if (lean_obj_tag(v_x_465_) == 0)
{
lean_dec(v_x_463_);
return v_x_464_;
}
else
{
lean_object* v_head_466_; lean_object* v_tail_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_477_; 
v_head_466_ = lean_ctor_get(v_x_465_, 0);
v_tail_467_ = lean_ctor_get(v_x_465_, 1);
v_isSharedCheck_477_ = !lean_is_exclusive(v_x_465_);
if (v_isSharedCheck_477_ == 0)
{
v___x_469_ = v_x_465_;
v_isShared_470_ = v_isSharedCheck_477_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_tail_467_);
lean_inc(v_head_466_);
lean_dec(v_x_465_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_477_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_472_; 
lean_inc(v_x_463_);
if (v_isShared_470_ == 0)
{
lean_ctor_set_tag(v___x_469_, 5);
lean_ctor_set(v___x_469_, 1, v_x_463_);
lean_ctor_set(v___x_469_, 0, v_x_464_);
v___x_472_ = v___x_469_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_x_464_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v_x_463_);
v___x_472_ = v_reuseFailAlloc_476_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(v_head_466_);
v___x_474_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_472_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
v_x_464_ = v___x_474_;
v_x_465_ = v_tail_467_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4(lean_object* v_x_478_, lean_object* v_x_479_, lean_object* v_x_480_){
_start:
{
if (lean_obj_tag(v_x_480_) == 0)
{
lean_dec(v_x_478_);
return v_x_479_;
}
else
{
lean_object* v_head_481_; lean_object* v_tail_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_492_; 
v_head_481_ = lean_ctor_get(v_x_480_, 0);
v_tail_482_ = lean_ctor_get(v_x_480_, 1);
v_isSharedCheck_492_ = !lean_is_exclusive(v_x_480_);
if (v_isSharedCheck_492_ == 0)
{
v___x_484_ = v_x_480_;
v_isShared_485_ = v_isSharedCheck_492_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_tail_482_);
lean_inc(v_head_481_);
lean_dec(v_x_480_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_492_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
lean_inc(v_x_478_);
if (v_isShared_485_ == 0)
{
lean_ctor_set_tag(v___x_484_, 5);
lean_ctor_set(v___x_484_, 1, v_x_478_);
lean_ctor_set(v___x_484_, 0, v_x_479_);
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_x_479_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_x_478_);
v___x_487_ = v_reuseFailAlloc_491_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(v_head_481_);
v___x_489_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v___x_490_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4_spec__6(v_x_478_, v___x_489_, v_tail_482_);
return v___x_490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2(lean_object* v_x_493_, lean_object* v_x_494_){
_start:
{
if (lean_obj_tag(v_x_493_) == 0)
{
lean_object* v___x_495_; 
lean_dec(v_x_494_);
v___x_495_ = lean_box(0);
return v___x_495_;
}
else
{
lean_object* v_tail_496_; 
v_tail_496_ = lean_ctor_get(v_x_493_, 1);
if (lean_obj_tag(v_tail_496_) == 0)
{
lean_object* v_head_497_; lean_object* v___x_498_; 
lean_dec(v_x_494_);
v_head_497_ = lean_ctor_get(v_x_493_, 0);
lean_inc(v_head_497_);
lean_dec_ref_known(v_x_493_, 2);
v___x_498_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(v_head_497_);
return v___x_498_;
}
else
{
lean_object* v_head_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
lean_inc(v_tail_496_);
v_head_499_ = lean_ctor_get(v_x_493_, 0);
lean_inc(v_head_499_);
lean_dec_ref_known(v_x_493_, 2);
v___x_500_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(v_head_499_);
v___x_501_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2_spec__4(v_x_494_, v___x_500_, v_tail_496_);
return v___x_501_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_507_ = ((lean_object*)(l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__2));
v___x_508_ = lean_string_length(v___x_507_);
return v___x_508_;
}
}
static lean_object* _init_l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = lean_obj_once(&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4, &l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4_once, _init_l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__4);
v___x_510_ = lean_nat_to_int(v___x_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg(lean_object* v_a_515_){
_start:
{
if (lean_obj_tag(v_a_515_) == 0)
{
lean_object* v___x_516_; 
v___x_516_ = ((lean_object*)(l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__1));
return v___x_516_;
}
else
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; lean_object* v___x_526_; 
v___x_517_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg___closed__1));
v___x_518_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__2(v_a_515_, v___x_517_);
v___x_519_ = lean_obj_once(&l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5, &l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5_once, _init_l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__5);
v___x_520_ = ((lean_object*)(l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__6));
v___x_521_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
lean_ctor_set(v___x_521_, 1, v___x_518_);
v___x_522_ = ((lean_object*)(l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg___closed__7));
v___x_523_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_523_, 0, v___x_521_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_524_, 0, v___x_519_);
lean_ctor_set(v___x_524_, 1, v___x_523_);
v___x_525_ = 0;
v___x_526_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_526_, 0, v___x_524_);
lean_ctor_set_uint8(v___x_526_, sizeof(void*)*1, v___x_525_);
return v___x_526_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0(lean_object* v_init_527_, lean_object* v_x_528_){
_start:
{
if (lean_obj_tag(v_x_528_) == 0)
{
lean_object* v_k_529_; lean_object* v_v_530_; lean_object* v_l_531_; lean_object* v_r_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v_k_529_ = lean_ctor_get(v_x_528_, 1);
v_v_530_ = lean_ctor_get(v_x_528_, 2);
v_l_531_ = lean_ctor_get(v_x_528_, 3);
v_r_532_ = lean_ctor_get(v_x_528_, 4);
v___x_533_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0(v_init_527_, v_r_532_);
lean_inc(v_v_530_);
lean_inc(v_k_529_);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v_k_529_);
lean_ctor_set(v___x_534_, 1, v_v_530_);
v___x_535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
lean_ctor_set(v___x_535_, 1, v___x_533_);
v_init_527_ = v___x_535_;
v_x_528_ = v_l_531_;
goto _start;
}
else
{
return v_init_527_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0___boxed(lean_object* v_init_537_, lean_object* v_x_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0(v_init_537_, v_x_538_);
lean_dec(v_x_538_);
return v_res_539_;
}
}
static lean_object* _init_l_Lean_instReprLeanOptions_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_unsigned_to_nat(10u);
v___x_550_ = lean_nat_to_int(v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___redArg(lean_object* v_x_554_){
_start:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_555_ = ((lean_object*)(l_Lean_instReprLeanOptions_repr___redArg___closed__3));
v___x_556_ = lean_obj_once(&l_Lean_instReprLeanOptions_repr___redArg___closed__4, &l_Lean_instReprLeanOptions_repr___redArg___closed__4_once, _init_l_Lean_instReprLeanOptions_repr___redArg___closed__4);
v___x_557_ = lean_unsigned_to_nat(0u);
v___x_558_ = ((lean_object*)(l_Lean_instReprLeanOptions_repr___redArg___closed__6));
v___x_559_ = lean_box(0);
v___x_560_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_instReprLeanOptions_repr_spec__0(v___x_559_, v_x_554_);
v___x_561_ = l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg(v___x_560_);
v___x_562_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_558_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
v___x_563_ = l_Repr_addAppParen(v___x_562_, v___x_557_);
v___x_564_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_556_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_565_ = 0;
v___x_566_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_566_, 0, v___x_564_);
lean_ctor_set_uint8(v___x_566_, sizeof(void*)*1, v___x_565_);
v___x_567_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_567_, 0, v___x_555_);
lean_ctor_set(v___x_567_, 1, v___x_566_);
v___x_568_ = lean_obj_once(&l_Lean_instReprLeanOption_repr___redArg___closed__15, &l_Lean_instReprLeanOption_repr___redArg___closed__15_once, _init_l_Lean_instReprLeanOption_repr___redArg___closed__15);
v___x_569_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__16));
v___x_570_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
lean_ctor_set(v___x_570_, 1, v___x_567_);
v___x_571_ = ((lean_object*)(l_Lean_instReprLeanOption_repr___redArg___closed__17));
v___x_572_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_570_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
v___x_573_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_568_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___x_574_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_574_, 0, v___x_573_);
lean_ctor_set_uint8(v___x_574_, sizeof(void*)*1, v___x_565_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___redArg___boxed(lean_object* v_x_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lean_instReprLeanOptions_repr___redArg(v_x_575_);
lean_dec(v_x_575_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr(lean_object* v_x_577_, lean_object* v_prec_578_){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = l_Lean_instReprLeanOptions_repr___redArg(v_x_577_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLeanOptions_repr___boxed(lean_object* v_x_580_, lean_object* v_prec_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lean_instReprLeanOptions_repr(v_x_580_, v_prec_581_);
lean_dec(v_prec_581_);
lean_dec(v_x_580_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1(lean_object* v_a_583_, lean_object* v_n_584_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___redArg(v_a_583_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1___boxed(lean_object* v_a_586_, lean_object* v_n_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_List_repr___at___00Lean_instReprLeanOptions_repr_spec__1(v_a_586_, v_n_587_);
lean_dec(v_n_587_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1(lean_object* v_x_589_, lean_object* v_x_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___redArg(v_x_589_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1___boxed(lean_object* v_x_592_, lean_object* v_x_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Prod_repr___at___00List_repr___at___00Lean_instReprLeanOptions_repr_spec__1_spec__1(v_x_592_, v_x_593_);
lean_dec(v_x_593_);
return v_res_594_;
}
}
static lean_object* _init_l_Lean_instEmptyCollectionLeanOptions(void){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = lean_box(1);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(lean_object* v_as_598_, size_t v_i_599_, size_t v_stop_600_, lean_object* v_b_601_){
_start:
{
uint8_t v___x_602_; 
v___x_602_ = lean_usize_dec_eq(v_i_599_, v_stop_600_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; lean_object* v_name_604_; lean_object* v_value_605_; lean_object* v___x_606_; size_t v___x_607_; size_t v___x_608_; 
v___x_603_ = lean_array_uget_borrowed(v_as_598_, v_i_599_);
v_name_604_ = lean_ctor_get(v___x_603_, 0);
v_value_605_ = lean_ctor_get(v___x_603_, 1);
lean_inc_ref(v_value_605_);
lean_inc(v_name_604_);
v___x_606_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_604_, v_value_605_, v_b_601_);
v___x_607_ = ((size_t)1ULL);
v___x_608_ = lean_usize_add(v_i_599_, v___x_607_);
v_i_599_ = v___x_608_;
v_b_601_ = v___x_606_;
goto _start;
}
else
{
return v_b_601_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0___boxed(lean_object* v_as_610_, lean_object* v_i_611_, lean_object* v_stop_612_, lean_object* v_b_613_){
_start:
{
size_t v_i_boxed_614_; size_t v_stop_boxed_615_; lean_object* v_res_616_; 
v_i_boxed_614_ = lean_unbox_usize(v_i_611_);
lean_dec(v_i_611_);
v_stop_boxed_615_ = lean_unbox_usize(v_stop_612_);
lean_dec(v_stop_612_);
v_res_616_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(v_as_610_, v_i_boxed_614_, v_stop_boxed_615_, v_b_613_);
lean_dec_ref(v_as_610_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_ofArray(lean_object* v_opts_617_){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; uint8_t v___x_621_; 
v___x_618_ = lean_box(1);
v___x_619_ = lean_unsigned_to_nat(0u);
v___x_620_ = lean_array_get_size(v_opts_617_);
v___x_621_ = lean_nat_dec_lt(v___x_619_, v___x_620_);
if (v___x_621_ == 0)
{
return v___x_618_;
}
else
{
uint8_t v___x_622_; 
v___x_622_ = lean_nat_dec_le(v___x_620_, v___x_620_);
if (v___x_622_ == 0)
{
if (v___x_621_ == 0)
{
return v___x_618_;
}
else
{
size_t v___x_623_; size_t v___x_624_; lean_object* v___x_625_; 
v___x_623_ = ((size_t)0ULL);
v___x_624_ = lean_usize_of_nat(v___x_620_);
v___x_625_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(v_opts_617_, v___x_623_, v___x_624_, v___x_618_);
return v___x_625_;
}
}
else
{
size_t v___x_626_; size_t v___x_627_; lean_object* v___x_628_; 
v___x_626_ = ((size_t)0ULL);
v___x_627_ = lean_usize_of_nat(v___x_620_);
v___x_628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(v_opts_617_, v___x_626_, v___x_627_, v___x_618_);
return v___x_628_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_ofArray___boxed(lean_object* v_opts_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Lean_LeanOptions_ofArray(v_opts_629_);
lean_dec_ref(v_opts_629_);
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_append___lam__0(lean_object* v_x_631_, lean_object* v_x_632_, lean_object* v_b_633_){
_start:
{
lean_inc_ref(v_b_633_);
return v_b_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_append___lam__0___boxed(lean_object* v_x_634_, lean_object* v_x_635_, lean_object* v_b_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Lean_LeanOptions_append___lam__0(v_x_634_, v_x_635_, v_b_636_);
lean_dec_ref(v_b_636_);
lean_dec_ref(v_x_635_);
lean_dec(v_x_634_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_append(lean_object* v_self_639_, lean_object* v_new_640_){
_start:
{
lean_object* v___f_641_; lean_object* v___x_642_; 
v___f_641_ = ((lean_object*)(l_Lean_LeanOptions_append___closed__0));
v___x_642_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(v___f_641_, v_self_639_, v_new_640_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_appendArray(lean_object* v_self_645_, lean_object* v_new_646_){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; uint8_t v___x_649_; 
v___x_647_ = lean_unsigned_to_nat(0u);
v___x_648_ = lean_array_get_size(v_new_646_);
v___x_649_ = lean_nat_dec_lt(v___x_647_, v___x_648_);
if (v___x_649_ == 0)
{
return v_self_645_;
}
else
{
uint8_t v___x_650_; 
v___x_650_ = lean_nat_dec_le(v___x_648_, v___x_648_);
if (v___x_650_ == 0)
{
if (v___x_649_ == 0)
{
return v_self_645_;
}
else
{
size_t v___x_651_; size_t v___x_652_; lean_object* v___x_653_; 
v___x_651_ = ((size_t)0ULL);
v___x_652_ = lean_usize_of_nat(v___x_648_);
v___x_653_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(v_new_646_, v___x_651_, v___x_652_, v_self_645_);
return v___x_653_;
}
}
else
{
size_t v___x_654_; size_t v___x_655_; lean_object* v___x_656_; 
v___x_654_ = ((size_t)0ULL);
v___x_655_ = lean_usize_of_nat(v___x_648_);
v___x_656_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LeanOptions_ofArray_spec__0(v_new_646_, v___x_654_, v___x_655_, v_self_645_);
return v___x_656_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_appendArray___boxed(lean_object* v_self_657_, lean_object* v_new_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Lean_LeanOptions_appendArray(v_self_657_, v_new_658_);
lean_dec_ref(v_new_658_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0(lean_object* v_o_665_, lean_object* v_k_666_, lean_object* v_v_667_){
_start:
{
lean_object* v_map_668_; uint8_t v_hasTrace_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_682_; 
v_map_668_ = lean_ctor_get(v_o_665_, 0);
v_hasTrace_669_ = lean_ctor_get_uint8(v_o_665_, sizeof(void*)*1);
v_isSharedCheck_682_ = !lean_is_exclusive(v_o_665_);
if (v_isSharedCheck_682_ == 0)
{
v___x_671_ = v_o_665_;
v_isShared_672_ = v_isSharedCheck_682_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_map_668_);
lean_dec(v_o_665_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_682_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; 
lean_inc(v_k_666_);
v___x_673_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_666_, v_v_667_, v_map_668_);
if (v_hasTrace_669_ == 0)
{
lean_object* v___x_674_; uint8_t v___x_675_; lean_object* v___x_677_; 
v___x_674_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0___closed__1));
v___x_675_ = l_Lean_Name_isPrefixOf(v___x_674_, v_k_666_);
lean_dec(v_k_666_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_673_);
v___x_677_ = v___x_671_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_673_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_ctor_set_uint8(v___x_677_, sizeof(void*)*1, v___x_675_);
return v___x_677_;
}
}
else
{
lean_object* v___x_680_; 
lean_dec(v_k_666_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_673_);
v___x_680_ = v___x_671_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_673_);
lean_ctor_set_uint8(v_reuseFailAlloc_681_, sizeof(void*)*1, v_hasTrace_669_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_toOptions_spec__1(lean_object* v_init_683_, lean_object* v_x_684_){
_start:
{
if (lean_obj_tag(v_x_684_) == 0)
{
lean_object* v_k_685_; lean_object* v_v_686_; lean_object* v_l_687_; lean_object* v_r_688_; lean_object* v___x_689_; lean_object* v_a_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v_k_685_ = lean_ctor_get(v_x_684_, 1);
lean_inc(v_k_685_);
v_v_686_ = lean_ctor_get(v_x_684_, 2);
lean_inc(v_v_686_);
v_l_687_ = lean_ctor_get(v_x_684_, 3);
lean_inc(v_l_687_);
v_r_688_ = lean_ctor_get(v_x_684_, 4);
lean_inc(v_r_688_);
lean_dec_ref_known(v_x_684_, 5);
v___x_689_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_toOptions_spec__1(v_init_683_, v_l_687_);
v_a_690_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_a_690_);
lean_dec_ref(v___x_689_);
v___x_691_ = l_Lean_LeanOptionValue_toDataValue(v_v_686_);
v___x_692_ = l_Lean_Options_set___at___00Lean_LeanOptions_toOptions_spec__0(v_a_690_, v_k_685_, v___x_691_);
v_init_683_ = v___x_692_;
v_x_684_ = v_r_688_;
goto _start;
}
else
{
lean_object* v___x_694_; 
v___x_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_694_, 0, v_init_683_);
return v___x_694_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_toOptions(lean_object* v_leanOptions_695_){
_start:
{
lean_object* v_options_696_; lean_object* v___x_697_; lean_object* v_a_698_; 
v_options_696_ = l_Lean_Options_empty;
v___x_697_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_toOptions_spec__1(v_options_696_, v_leanOptions_695_);
v_a_698_ = lean_ctor_get(v___x_697_, 0);
lean_inc(v_a_698_);
lean_dec_ref(v___x_697_);
return v_a_698_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_fromOptions_x3f_spec__0(lean_object* v_init_699_, lean_object* v_x_700_){
_start:
{
if (lean_obj_tag(v_x_700_) == 0)
{
lean_object* v_k_701_; lean_object* v_v_702_; lean_object* v_l_703_; lean_object* v_r_704_; lean_object* v___x_705_; 
v_k_701_ = lean_ctor_get(v_x_700_, 1);
lean_inc(v_k_701_);
v_v_702_ = lean_ctor_get(v_x_700_, 2);
lean_inc(v_v_702_);
v_l_703_ = lean_ctor_get(v_x_700_, 3);
lean_inc(v_l_703_);
v_r_704_ = lean_ctor_get(v_x_700_, 4);
lean_inc(v_r_704_);
lean_dec_ref_known(v_x_700_, 5);
v___x_705_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_fromOptions_x3f_spec__0(v_init_699_, v_l_703_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_dec(v_r_704_);
lean_dec(v_v_702_);
lean_dec(v_k_701_);
return v___x_705_;
}
else
{
lean_object* v_val_706_; lean_object* v_a_707_; lean_object* v___x_708_; 
v_val_706_ = lean_ctor_get(v___x_705_, 0);
lean_inc(v_val_706_);
lean_dec_ref_known(v___x_705_, 1);
v_a_707_ = lean_ctor_get(v_val_706_, 0);
lean_inc(v_a_707_);
lean_dec(v_val_706_);
v___x_708_ = l_Lean_LeanOptionValue_ofDataValue_x3f(v_v_702_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v___x_709_; 
lean_dec(v_a_707_);
lean_dec(v_r_704_);
lean_dec(v_k_701_);
v___x_709_ = lean_box(0);
return v___x_709_;
}
else
{
lean_object* v_val_710_; lean_object* v___x_711_; 
v_val_710_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_val_710_);
lean_dec_ref_known(v___x_708_, 1);
v___x_711_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_701_, v_val_710_, v_a_707_);
v_init_699_ = v___x_711_;
v_x_700_ = v_r_704_;
goto _start;
}
}
}
else
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_713_, 0, v_init_699_);
v___x_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
return v___x_714_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LeanOptions_fromOptions_x3f(lean_object* v_options_715_){
_start:
{
lean_object* v_map_716_; lean_object* v_values_717_; lean_object* v___x_718_; 
v_map_716_ = lean_ctor_get(v_options_715_, 0);
lean_inc(v_map_716_);
lean_dec_ref(v_options_715_);
v_values_717_ = lean_box(1);
v___x_718_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_LeanOptions_fromOptions_x3f_spec__0(v_values_717_, v_map_716_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v___x_719_; 
v___x_719_ = lean_box(0);
return v___x_719_;
}
else
{
lean_object* v_val_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_728_; 
v_val_720_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_728_ == 0)
{
v___x_722_ = v___x_718_;
v_isShared_723_ = v_isSharedCheck_728_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_val_720_);
lean_dec(v___x_718_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_728_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v_a_724_; lean_object* v___x_726_; 
v_a_724_ = lean_ctor_get(v_val_720_, 0);
lean_inc(v_a_724_);
lean_dec(v_val_720_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 0, v_a_724_);
v___x_726_ = v___x_722_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_724_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonLeanOptions___lam__0(lean_object* v___f_729_, lean_object* v_j_730_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l_Lean_NameMap_fromJson_x3f___redArg(v___f_729_, v_j_730_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_739_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_739_ == 0)
{
v___x_734_ = v___x_731_;
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_a_732_);
lean_dec(v___x_731_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_739_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v___x_737_; 
if (v_isShared_735_ == 0)
{
v___x_737_ = v___x_734_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v_a_732_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
else
{
lean_object* v_a_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_747_; 
v_a_740_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_747_ == 0)
{
v___x_742_ = v___x_731_;
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_a_740_);
lean_dec(v___x_731_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_747_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___x_745_; 
if (v_isShared_743_ == 0)
{
v___x_745_ = v___x_742_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_740_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonLeanOptions___lam__0(lean_object* v___f_751_, lean_object* v_options_752_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = l_Lean_NameMap_toJson___redArg(v___f_751_, v_options_752_);
return v___x_753_;
}
}
lean_object* runtime_initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_LeanOptions(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedLeanOptions_default = _init_l_Lean_instInhabitedLeanOptions_default();
lean_mark_persistent(l_Lean_instInhabitedLeanOptions_default);
l_Lean_instInhabitedLeanOptions = _init_l_Lean_instInhabitedLeanOptions();
lean_mark_persistent(l_Lean_instInhabitedLeanOptions);
l_Lean_instEmptyCollectionLeanOptions = _init_l_Lean_instEmptyCollectionLeanOptions();
lean_mark_persistent(l_Lean_instEmptyCollectionLeanOptions);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_LeanOptions(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Json_FromToJson_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_LeanOptions(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Json_FromToJson_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_LeanOptions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_LeanOptions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_LeanOptions(builtin);
}
#ifdef __cplusplus
}
#endif
