// Lean compiler output
// Module: Lake.Build.Key
// Imports: public import Init.Data.Order import Lake.Util.Name import Init.Data.String.Search import Init.Data.Iterators.Consumers
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
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_stringToLegalOrSimpleName(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lake_Name_eraseHead(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_module_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_module_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_package_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_package_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModule_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModule_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_facet_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_facet_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lake_instInhabitedBuildKey_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_instInhabitedBuildKey_default___closed__0 = (const lean_object*)&l_Lake_instInhabitedBuildKey_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedBuildKey_default = (const lean_object*)&l_Lake_instInhabitedBuildKey_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instInhabitedBuildKey = (const lean_object*)&l_Lake_instInhabitedBuildKey_default___closed__0_value;
static const lean_string_object l_Lake_instReprBuildKey_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lake.BuildKey.module"};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__0 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__0_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__0_value)}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__1 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__1_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__2 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__2_value;
static lean_once_cell_t l_Lake_instReprBuildKey_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildKey_repr___closed__3;
static lean_once_cell_t l_Lake_instReprBuildKey_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_instReprBuildKey_repr___closed__4;
static const lean_string_object l_Lake_instReprBuildKey_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lake.BuildKey.package"};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__5 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__5_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__5_value)}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__6 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__6_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__7 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__7_value;
static const lean_string_object l_Lake_instReprBuildKey_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lake.BuildKey.packageModule"};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__8 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__8_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__8_value)}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__9 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__9_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__10 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__10_value;
static const lean_string_object l_Lake_instReprBuildKey_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lake.BuildKey.packageTarget"};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__11 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__11_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__11_value)}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__12 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__12_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__13 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__13_value;
static const lean_string_object l_Lake_instReprBuildKey_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lake.BuildKey.facet"};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__14 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__14_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__14_value)}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__15 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__15_value;
static const lean_ctor_object l_Lake_instReprBuildKey_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_instReprBuildKey_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lake_instReprBuildKey_repr___closed__16 = (const lean_object*)&l_Lake_instReprBuildKey_repr___closed__16_value;
LEAN_EXPORT lean_object* l_Lake_instReprBuildKey_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instReprBuildKey_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instReprBuildKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instReprBuildKey_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instReprBuildKey___closed__0 = (const lean_object*)&l_Lake_instReprBuildKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instReprBuildKey = (const lean_object*)&l_Lake_instReprBuildKey___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBuildKey_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBuildKey_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBuildKey(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBuildKey___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_instHashableBuildKey_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_instHashableBuildKey_hash___closed__0;
static lean_once_cell_t l_Lake_instHashableBuildKey_hash___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lake_instHashableBuildKey_hash___closed__1;
LEAN_EXPORT uint64_t l_Lake_instHashableBuildKey_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instHashableBuildKey_hash___boxed(lean_object*);
static const lean_closure_object l_Lake_instHashableBuildKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instHashableBuildKey_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instHashableBuildKey___closed__0 = (const lean_object*)&l_Lake_instHashableBuildKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instHashableBuildKey = (const lean_object*)&l_Lake_instHashableBuildKey___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_instCoeBuildKey___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_instCoeBuildKey___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_PartialBuildKey_instCoeBuildKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_PartialBuildKey_instCoeBuildKey___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PartialBuildKey_instCoeBuildKey___closed__0 = (const lean_object*)&l_Lake_PartialBuildKey_instCoeBuildKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_PartialBuildKey_instCoeBuildKey = (const lean_object*)&l_Lake_PartialBuildKey_instCoeBuildKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_PartialBuildKey_instRepr = (const lean_object*)&l_Lake_instReprBuildKey___closed__0_value;
static const lean_ctor_object l_Lake_PartialBuildKey_instInhabited___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_PartialBuildKey_instInhabited___closed__0 = (const lean_object*)&l_Lake_PartialBuildKey_instInhabited___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_PartialBuildKey_instInhabited = (const lean_object*)&l_Lake_PartialBuildKey_instInhabited___closed__0_value;
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1;
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "ill-formed target: default package targets are not supported in partial build keys"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__2 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__2_value;
static const lean_ctor_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__2_value)}};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__3 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "ill-formed target: too many '/'"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__0 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__0_value)}};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__1 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__1_value;
static const lean_array_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__2 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__2_value;
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "ill-formed target: expected module name after '+'"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__3 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__3_value;
static const lean_ctor_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__3_value)}};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__4 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__4_value;
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5_value;
static lean_once_cell_t l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6;
static const lean_ctor_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_PartialBuildKey_instInhabited___closed__0_value)}};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___boxed(lean_object*);
static const lean_string_object l_panic___at___00Lake_PartialBuildKey_parse_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_panic___at___00Lake_PartialBuildKey_parse_spec__2___closed__0 = (const lean_object*)&l_panic___at___00Lake_PartialBuildKey_parse_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lake_PartialBuildKey_parse_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "ill-formed target: empty facet"};
static const lean_object* l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__0 = (const lean_object*)&l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__0_value;
static const lean_ctor_object l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__0_value)}};
static const lean_object* l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__1 = (const lean_object*)&l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3(lean_object*, lean_object*);
static const lean_array_object l_Lake_PartialBuildKey_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__0 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__0_value;
static const lean_string_object l_Lake_PartialBuildKey_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lake.Build.Key"};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__1 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__1_value;
static const lean_string_object l_Lake_PartialBuildKey_parse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lake.PartialBuildKey.parse"};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__2 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__2_value;
static const lean_string_object l_Lake_PartialBuildKey_parse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__3 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__3_value;
static lean_once_cell_t l_Lake_PartialBuildKey_parse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_PartialBuildKey_parse___closed__4;
static const lean_string_object l_Lake_PartialBuildKey_parse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "ill-formed target: empty string"};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__5 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__5_value;
static const lean_ctor_object l_Lake_PartialBuildKey_parse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_PartialBuildKey_parse___closed__5_value)}};
static const lean_object* l_Lake_PartialBuildKey_parse___closed__6 = (const lean_object*)&l_Lake_PartialBuildKey_parse___closed__6_value;
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_parse(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName___boxed(lean_object*);
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "/+"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__0 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__0_value;
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__1 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__1_value;
static const lean_string_object l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__2 = (const lean_object*)&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(lean_object*);
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_toString(lean_object*);
static const lean_closure_object l_Lake_PartialBuildKey_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_PartialBuildKey_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_PartialBuildKey_instToString___closed__0 = (const lean_object*)&l_Lake_PartialBuildKey_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_PartialBuildKey_instToString = (const lean_object*)&l_Lake_PartialBuildKey_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_BuildKey_moduleFacet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageFacet(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModuleFacet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_targetFacet(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_customTarget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_toSimpleString(lean_object*);
static const lean_closure_object l_Lake_BuildKey_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_BuildKey_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_BuildKey_instToString___closed__0 = (const lean_object*)&l_Lake_BuildKey_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_BuildKey_instToString = (const lean_object*)&l_Lake_BuildKey_instToString___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_BuildKey_quickCmp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_quickCmp___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_instReprBuildKey_repr_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_instReprBuildKey_repr_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__4_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__10_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__10_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__13_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__13_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__16_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__16_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorIdx(lean_object* v_x_1_){
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
default: 
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorIdx___boxed(lean_object* v_x_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lake_BuildKey_ctorIdx(v_x_7_);
lean_dec_ref(v_x_7_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim___redArg(lean_object* v_t_9_, lean_object* v_k_10_){
_start:
{
switch(lean_obj_tag(v_t_9_))
{
case 2:
{
lean_object* v_package_11_; lean_object* v_module_12_; lean_object* v___x_13_; 
v_package_11_ = lean_ctor_get(v_t_9_, 0);
lean_inc(v_package_11_);
v_module_12_ = lean_ctor_get(v_t_9_, 1);
lean_inc(v_module_12_);
lean_dec_ref_known(v_t_9_, 2);
v___x_13_ = lean_apply_2(v_k_10_, v_package_11_, v_module_12_);
return v___x_13_;
}
case 3:
{
lean_object* v_package_14_; lean_object* v_target_15_; lean_object* v___x_16_; 
v_package_14_ = lean_ctor_get(v_t_9_, 0);
lean_inc(v_package_14_);
v_target_15_ = lean_ctor_get(v_t_9_, 1);
lean_inc(v_target_15_);
lean_dec_ref_known(v_t_9_, 2);
v___x_16_ = lean_apply_2(v_k_10_, v_package_14_, v_target_15_);
return v___x_16_;
}
case 4:
{
lean_object* v_target_17_; lean_object* v_facet_18_; lean_object* v___x_19_; 
v_target_17_ = lean_ctor_get(v_t_9_, 0);
lean_inc_ref(v_target_17_);
v_facet_18_ = lean_ctor_get(v_t_9_, 1);
lean_inc(v_facet_18_);
lean_dec_ref_known(v_t_9_, 2);
v___x_19_ = lean_apply_2(v_k_10_, v_target_17_, v_facet_18_);
return v___x_19_;
}
default: 
{
lean_object* v_module_20_; lean_object* v___x_21_; 
v_module_20_ = lean_ctor_get(v_t_9_, 0);
lean_inc(v_module_20_);
lean_dec_ref(v_t_9_);
v___x_21_ = lean_apply_1(v_k_10_, v_module_20_);
return v___x_21_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim(lean_object* v_motive_22_, lean_object* v_ctorIdx_23_, lean_object* v_t_24_, lean_object* v_h_25_, lean_object* v_k_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lake_BuildKey_ctorElim___redArg(v_t_24_, v_k_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_ctorElim___boxed(lean_object* v_motive_28_, lean_object* v_ctorIdx_29_, lean_object* v_t_30_, lean_object* v_h_31_, lean_object* v_k_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lake_BuildKey_ctorElim(v_motive_28_, v_ctorIdx_29_, v_t_30_, v_h_31_, v_k_32_);
lean_dec(v_ctorIdx_29_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_module_elim___redArg(lean_object* v_t_34_, lean_object* v_module_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_Lake_BuildKey_ctorElim___redArg(v_t_34_, v_module_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_module_elim(lean_object* v_motive_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_module_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lake_BuildKey_ctorElim___redArg(v_t_38_, v_module_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_package_elim___redArg(lean_object* v_t_42_, lean_object* v_package_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lake_BuildKey_ctorElim___redArg(v_t_42_, v_package_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_package_elim(lean_object* v_motive_45_, lean_object* v_t_46_, lean_object* v_h_47_, lean_object* v_package_48_){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lake_BuildKey_ctorElim___redArg(v_t_46_, v_package_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModule_elim___redArg(lean_object* v_t_50_, lean_object* v_packageModule_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lake_BuildKey_ctorElim___redArg(v_t_50_, v_packageModule_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModule_elim(lean_object* v_motive_53_, lean_object* v_t_54_, lean_object* v_h_55_, lean_object* v_packageModule_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lake_BuildKey_ctorElim___redArg(v_t_54_, v_packageModule_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageTarget_elim___redArg(lean_object* v_t_58_, lean_object* v_packageTarget_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lake_BuildKey_ctorElim___redArg(v_t_58_, v_packageTarget_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageTarget_elim(lean_object* v_motive_61_, lean_object* v_t_62_, lean_object* v_h_63_, lean_object* v_packageTarget_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = l_Lake_BuildKey_ctorElim___redArg(v_t_62_, v_packageTarget_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_facet_elim___redArg(lean_object* v_t_66_, lean_object* v_facet_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lake_BuildKey_ctorElim___redArg(v_t_66_, v_facet_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_facet_elim(lean_object* v_motive_69_, lean_object* v_t_70_, lean_object* v_h_71_, lean_object* v_facet_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lake_BuildKey_ctorElim___redArg(v_t_70_, v_facet_72_);
return v___x_73_;
}
}
static lean_object* _init_l_Lake_instReprBuildKey_repr___closed__3(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_unsigned_to_nat(2u);
v___x_85_ = lean_nat_to_int(v___x_84_);
return v___x_85_;
}
}
static lean_object* _init_l_Lake_instReprBuildKey_repr___closed__4(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = lean_unsigned_to_nat(1u);
v___x_87_ = lean_nat_to_int(v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildKey_repr(lean_object* v_x_112_, lean_object* v_prec_113_){
_start:
{
switch(lean_obj_tag(v_x_112_))
{
case 0:
{
lean_object* v_module_114_; lean_object* v___y_116_; lean_object* v___x_125_; uint8_t v___x_126_; 
v_module_114_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_module_114_);
lean_dec_ref_known(v_x_112_, 1);
v___x_125_ = lean_unsigned_to_nat(1024u);
v___x_126_ = lean_nat_dec_le(v___x_125_, v_prec_113_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; 
v___x_127_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__3, &l_Lake_instReprBuildKey_repr___closed__3_once, _init_l_Lake_instReprBuildKey_repr___closed__3);
v___y_116_ = v___x_127_;
goto v___jp_115_;
}
else
{
lean_object* v___x_128_; 
v___x_128_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__4, &l_Lake_instReprBuildKey_repr___closed__4_once, _init_l_Lake_instReprBuildKey_repr___closed__4);
v___y_116_ = v___x_128_;
goto v___jp_115_;
}
v___jp_115_:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_117_ = ((lean_object*)(l_Lake_instReprBuildKey_repr___closed__2));
v___x_118_ = lean_unsigned_to_nat(1024u);
v___x_119_ = l_Lean_Name_reprPrec(v_module_114_, v___x_118_);
v___x_120_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_117_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
lean_inc(v___y_116_);
v___x_121_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_121_, 0, v___y_116_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = 0;
v___x_123_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_123_, 0, v___x_121_);
lean_ctor_set_uint8(v___x_123_, sizeof(void*)*1, v___x_122_);
v___x_124_ = l_Repr_addAppParen(v___x_123_, v_prec_113_);
return v___x_124_;
}
}
case 1:
{
lean_object* v_package_129_; lean_object* v___y_131_; lean_object* v___x_140_; uint8_t v___x_141_; 
v_package_129_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_package_129_);
lean_dec_ref_known(v_x_112_, 1);
v___x_140_ = lean_unsigned_to_nat(1024u);
v___x_141_ = lean_nat_dec_le(v___x_140_, v_prec_113_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; 
v___x_142_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__3, &l_Lake_instReprBuildKey_repr___closed__3_once, _init_l_Lake_instReprBuildKey_repr___closed__3);
v___y_131_ = v___x_142_;
goto v___jp_130_;
}
else
{
lean_object* v___x_143_; 
v___x_143_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__4, &l_Lake_instReprBuildKey_repr___closed__4_once, _init_l_Lake_instReprBuildKey_repr___closed__4);
v___y_131_ = v___x_143_;
goto v___jp_130_;
}
v___jp_130_:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; uint8_t v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_132_ = ((lean_object*)(l_Lake_instReprBuildKey_repr___closed__7));
v___x_133_ = lean_unsigned_to_nat(1024u);
v___x_134_ = l_Lean_Name_reprPrec(v_package_129_, v___x_133_);
v___x_135_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_135_, 0, v___x_132_);
lean_ctor_set(v___x_135_, 1, v___x_134_);
lean_inc(v___y_131_);
v___x_136_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_136_, 0, v___y_131_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = 0;
v___x_138_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_138_, 0, v___x_136_);
lean_ctor_set_uint8(v___x_138_, sizeof(void*)*1, v___x_137_);
v___x_139_ = l_Repr_addAppParen(v___x_138_, v_prec_113_);
return v___x_139_;
}
}
case 2:
{
lean_object* v_package_144_; lean_object* v_module_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_169_; 
v_package_144_ = lean_ctor_get(v_x_112_, 0);
v_module_145_ = lean_ctor_get(v_x_112_, 1);
v_isSharedCheck_169_ = !lean_is_exclusive(v_x_112_);
if (v_isSharedCheck_169_ == 0)
{
v___x_147_ = v_x_112_;
v_isShared_148_ = v_isSharedCheck_169_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_module_145_);
lean_inc(v_package_144_);
lean_dec(v_x_112_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_169_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___y_150_; lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_165_ = lean_unsigned_to_nat(1024u);
v___x_166_ = lean_nat_dec_le(v___x_165_, v_prec_113_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
v___x_167_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__3, &l_Lake_instReprBuildKey_repr___closed__3_once, _init_l_Lake_instReprBuildKey_repr___closed__3);
v___y_150_ = v___x_167_;
goto v___jp_149_;
}
else
{
lean_object* v___x_168_; 
v___x_168_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__4, &l_Lake_instReprBuildKey_repr___closed__4_once, _init_l_Lake_instReprBuildKey_repr___closed__4);
v___y_150_ = v___x_168_;
goto v___jp_149_;
}
v___jp_149_:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_151_ = lean_box(1);
v___x_152_ = ((lean_object*)(l_Lake_instReprBuildKey_repr___closed__10));
v___x_153_ = lean_unsigned_to_nat(1024u);
v___x_154_ = l_Lean_Name_reprPrec(v_package_144_, v___x_153_);
if (v_isShared_148_ == 0)
{
lean_ctor_set_tag(v___x_147_, 5);
lean_ctor_set(v___x_147_, 1, v___x_154_);
lean_ctor_set(v___x_147_, 0, v___x_152_);
v___x_156_ = v___x_147_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v___x_152_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v___x_154_);
v___x_156_ = v_reuseFailAlloc_164_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; uint8_t v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_157_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___x_151_);
v___x_158_ = l_Lean_Name_reprPrec(v_module_145_, v___x_153_);
v___x_159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_159_, 0, v___x_157_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
lean_inc(v___y_150_);
v___x_160_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_160_, 0, v___y_150_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
v___x_161_ = 0;
v___x_162_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_162_, 0, v___x_160_);
lean_ctor_set_uint8(v___x_162_, sizeof(void*)*1, v___x_161_);
v___x_163_ = l_Repr_addAppParen(v___x_162_, v_prec_113_);
return v___x_163_;
}
}
}
}
case 3:
{
lean_object* v_package_170_; lean_object* v_target_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_195_; 
v_package_170_ = lean_ctor_get(v_x_112_, 0);
v_target_171_ = lean_ctor_get(v_x_112_, 1);
v_isSharedCheck_195_ = !lean_is_exclusive(v_x_112_);
if (v_isSharedCheck_195_ == 0)
{
v___x_173_ = v_x_112_;
v_isShared_174_ = v_isSharedCheck_195_;
goto v_resetjp_172_;
}
else
{
lean_inc(v_target_171_);
lean_inc(v_package_170_);
lean_dec(v_x_112_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_195_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___y_176_; lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = lean_unsigned_to_nat(1024u);
v___x_192_ = lean_nat_dec_le(v___x_191_, v_prec_113_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; 
v___x_193_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__3, &l_Lake_instReprBuildKey_repr___closed__3_once, _init_l_Lake_instReprBuildKey_repr___closed__3);
v___y_176_ = v___x_193_;
goto v___jp_175_;
}
else
{
lean_object* v___x_194_; 
v___x_194_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__4, &l_Lake_instReprBuildKey_repr___closed__4_once, _init_l_Lake_instReprBuildKey_repr___closed__4);
v___y_176_ = v___x_194_;
goto v___jp_175_;
}
v___jp_175_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_177_ = lean_box(1);
v___x_178_ = ((lean_object*)(l_Lake_instReprBuildKey_repr___closed__13));
v___x_179_ = lean_unsigned_to_nat(1024u);
v___x_180_ = l_Lean_Name_reprPrec(v_package_170_, v___x_179_);
if (v_isShared_174_ == 0)
{
lean_ctor_set_tag(v___x_173_, 5);
lean_ctor_set(v___x_173_, 1, v___x_180_);
lean_ctor_set(v___x_173_, 0, v___x_178_);
v___x_182_ = v___x_173_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_178_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v___x_180_);
v___x_182_ = v_reuseFailAlloc_190_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
lean_ctor_set(v___x_183_, 1, v___x_177_);
v___x_184_ = l_Lean_Name_reprPrec(v_target_171_, v___x_179_);
v___x_185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_183_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
lean_inc(v___y_176_);
v___x_186_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_186_, 0, v___y_176_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = 0;
v___x_188_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_188_, 0, v___x_186_);
lean_ctor_set_uint8(v___x_188_, sizeof(void*)*1, v___x_187_);
v___x_189_ = l_Repr_addAppParen(v___x_188_, v_prec_113_);
return v___x_189_;
}
}
}
}
default: 
{
lean_object* v_target_196_; lean_object* v_facet_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_220_; 
v_target_196_ = lean_ctor_get(v_x_112_, 0);
v_facet_197_ = lean_ctor_get(v_x_112_, 1);
v_isSharedCheck_220_ = !lean_is_exclusive(v_x_112_);
if (v_isSharedCheck_220_ == 0)
{
v___x_199_ = v_x_112_;
v_isShared_200_ = v_isSharedCheck_220_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_facet_197_);
lean_inc(v_target_196_);
lean_dec(v_x_112_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_220_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; lean_object* v___y_203_; uint8_t v___x_217_; 
v___x_201_ = lean_unsigned_to_nat(1024u);
v___x_217_ = lean_nat_dec_le(v___x_201_, v_prec_113_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; 
v___x_218_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__3, &l_Lake_instReprBuildKey_repr___closed__3_once, _init_l_Lake_instReprBuildKey_repr___closed__3);
v___y_203_ = v___x_218_;
goto v___jp_202_;
}
else
{
lean_object* v___x_219_; 
v___x_219_ = lean_obj_once(&l_Lake_instReprBuildKey_repr___closed__4, &l_Lake_instReprBuildKey_repr___closed__4_once, _init_l_Lake_instReprBuildKey_repr___closed__4);
v___y_203_ = v___x_219_;
goto v___jp_202_;
}
v___jp_202_:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_208_; 
v___x_204_ = lean_box(1);
v___x_205_ = ((lean_object*)(l_Lake_instReprBuildKey_repr___closed__16));
v___x_206_ = l_Lake_instReprBuildKey_repr(v_target_196_, v___x_201_);
if (v_isShared_200_ == 0)
{
lean_ctor_set_tag(v___x_199_, 5);
lean_ctor_set(v___x_199_, 1, v___x_206_);
lean_ctor_set(v___x_199_, 0, v___x_205_);
v___x_208_ = v___x_199_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_205_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v___x_206_);
v___x_208_ = v_reuseFailAlloc_216_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
lean_ctor_set(v___x_209_, 1, v___x_204_);
v___x_210_ = l_Lean_Name_reprPrec(v_facet_197_, v___x_201_);
v___x_211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_209_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
lean_inc(v___y_203_);
v___x_212_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_212_, 0, v___y_203_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = 0;
v___x_214_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_214_, 0, v___x_212_);
lean_ctor_set_uint8(v___x_214_, sizeof(void*)*1, v___x_213_);
v___x_215_ = l_Repr_addAppParen(v___x_214_, v_prec_113_);
return v___x_215_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instReprBuildKey_repr___boxed(lean_object* v_x_221_, lean_object* v_prec_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lake_instReprBuildKey_repr(v_x_221_, v_prec_222_);
lean_dec(v_prec_222_);
return v_res_223_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBuildKey_decEq(lean_object* v_x_226_, lean_object* v_x_227_){
_start:
{
switch(lean_obj_tag(v_x_226_))
{
case 0:
{
if (lean_obj_tag(v_x_227_) == 0)
{
lean_object* v_module_228_; lean_object* v_module_229_; uint8_t v___x_230_; 
v_module_228_ = lean_ctor_get(v_x_226_, 0);
v_module_229_ = lean_ctor_get(v_x_227_, 0);
v___x_230_ = lean_name_eq(v_module_228_, v_module_229_);
return v___x_230_;
}
else
{
uint8_t v___x_231_; 
v___x_231_ = 0;
return v___x_231_;
}
}
case 1:
{
if (lean_obj_tag(v_x_227_) == 1)
{
lean_object* v_package_232_; lean_object* v_package_233_; uint8_t v___x_234_; 
v_package_232_ = lean_ctor_get(v_x_226_, 0);
v_package_233_ = lean_ctor_get(v_x_227_, 0);
v___x_234_ = lean_name_eq(v_package_232_, v_package_233_);
return v___x_234_;
}
else
{
uint8_t v___x_235_; 
v___x_235_ = 0;
return v___x_235_;
}
}
case 2:
{
if (lean_obj_tag(v_x_227_) == 2)
{
lean_object* v_package_236_; lean_object* v_module_237_; lean_object* v_package_238_; lean_object* v_module_239_; uint8_t v___x_240_; 
v_package_236_ = lean_ctor_get(v_x_226_, 0);
v_module_237_ = lean_ctor_get(v_x_226_, 1);
v_package_238_ = lean_ctor_get(v_x_227_, 0);
v_module_239_ = lean_ctor_get(v_x_227_, 1);
v___x_240_ = lean_name_eq(v_package_236_, v_package_238_);
if (v___x_240_ == 0)
{
return v___x_240_;
}
else
{
uint8_t v___x_241_; 
v___x_241_ = lean_name_eq(v_module_237_, v_module_239_);
return v___x_241_;
}
}
else
{
uint8_t v___x_242_; 
v___x_242_ = 0;
return v___x_242_;
}
}
case 3:
{
if (lean_obj_tag(v_x_227_) == 3)
{
lean_object* v_package_243_; lean_object* v_target_244_; lean_object* v_package_245_; lean_object* v_target_246_; uint8_t v___x_247_; 
v_package_243_ = lean_ctor_get(v_x_226_, 0);
v_target_244_ = lean_ctor_get(v_x_226_, 1);
v_package_245_ = lean_ctor_get(v_x_227_, 0);
v_target_246_ = lean_ctor_get(v_x_227_, 1);
v___x_247_ = lean_name_eq(v_package_243_, v_package_245_);
if (v___x_247_ == 0)
{
return v___x_247_;
}
else
{
uint8_t v___x_248_; 
v___x_248_ = lean_name_eq(v_target_244_, v_target_246_);
return v___x_248_;
}
}
else
{
uint8_t v___x_249_; 
v___x_249_ = 0;
return v___x_249_;
}
}
default: 
{
if (lean_obj_tag(v_x_227_) == 4)
{
lean_object* v_target_250_; lean_object* v_facet_251_; lean_object* v_target_252_; lean_object* v_facet_253_; uint8_t v_inst_254_; 
v_target_250_ = lean_ctor_get(v_x_226_, 0);
v_facet_251_ = lean_ctor_get(v_x_226_, 1);
v_target_252_ = lean_ctor_get(v_x_227_, 0);
v_facet_253_ = lean_ctor_get(v_x_227_, 1);
v_inst_254_ = l_Lake_instDecidableEqBuildKey_decEq(v_target_250_, v_target_252_);
if (v_inst_254_ == 0)
{
return v_inst_254_;
}
else
{
uint8_t v___x_255_; 
v___x_255_ = lean_name_eq(v_facet_251_, v_facet_253_);
return v___x_255_;
}
}
else
{
uint8_t v___x_256_; 
v___x_256_ = 0;
return v___x_256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBuildKey_decEq___boxed(lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
uint8_t v_res_259_; lean_object* v_r_260_; 
v_res_259_ = l_Lake_instDecidableEqBuildKey_decEq(v_x_257_, v_x_258_);
lean_dec_ref(v_x_258_);
lean_dec_ref(v_x_257_);
v_r_260_ = lean_box(v_res_259_);
return v_r_260_;
}
}
LEAN_EXPORT uint8_t l_Lake_instDecidableEqBuildKey(lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
uint8_t v___x_263_; 
v___x_263_ = l_Lake_instDecidableEqBuildKey_decEq(v_x_261_, v_x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lake_instDecidableEqBuildKey___boxed(lean_object* v_x_264_, lean_object* v_x_265_){
_start:
{
uint8_t v_res_266_; lean_object* v_r_267_; 
v_res_266_ = l_Lake_instDecidableEqBuildKey(v_x_264_, v_x_265_);
lean_dec_ref(v_x_265_);
lean_dec_ref(v_x_264_);
v_r_267_ = lean_box(v_res_266_);
return v_r_267_;
}
}
static uint64_t _init_l_Lake_instHashableBuildKey_hash___closed__0(void){
_start:
{
uint64_t v___x_268_; uint64_t v___x_269_; uint64_t v___x_270_; 
v___x_268_ = 1723ULL;
v___x_269_ = 0ULL;
v___x_270_ = lean_uint64_mix_hash(v___x_269_, v___x_268_);
return v___x_270_;
}
}
static uint64_t _init_l_Lake_instHashableBuildKey_hash___closed__1(void){
_start:
{
uint64_t v___x_271_; uint64_t v___x_272_; uint64_t v___x_273_; 
v___x_271_ = 1723ULL;
v___x_272_ = 1ULL;
v___x_273_ = lean_uint64_mix_hash(v___x_272_, v___x_271_);
return v___x_273_;
}
}
LEAN_EXPORT uint64_t l_Lake_instHashableBuildKey_hash(lean_object* v_x_274_){
_start:
{
switch(lean_obj_tag(v_x_274_))
{
case 0:
{
lean_object* v_module_275_; uint64_t v___x_276_; 
v_module_275_ = lean_ctor_get(v_x_274_, 0);
v___x_276_ = 0ULL;
if (lean_obj_tag(v_module_275_) == 0)
{
uint64_t v___x_277_; 
v___x_277_ = lean_uint64_once(&l_Lake_instHashableBuildKey_hash___closed__0, &l_Lake_instHashableBuildKey_hash___closed__0_once, _init_l_Lake_instHashableBuildKey_hash___closed__0);
return v___x_277_;
}
else
{
uint64_t v_hash_278_; uint64_t v___x_279_; 
v_hash_278_ = lean_ctor_get_uint64(v_module_275_, sizeof(void*)*2);
v___x_279_ = lean_uint64_mix_hash(v___x_276_, v_hash_278_);
return v___x_279_;
}
}
case 1:
{
lean_object* v_package_280_; uint64_t v___x_281_; 
v_package_280_ = lean_ctor_get(v_x_274_, 0);
v___x_281_ = 1ULL;
if (lean_obj_tag(v_package_280_) == 0)
{
uint64_t v___x_282_; 
v___x_282_ = lean_uint64_once(&l_Lake_instHashableBuildKey_hash___closed__1, &l_Lake_instHashableBuildKey_hash___closed__1_once, _init_l_Lake_instHashableBuildKey_hash___closed__1);
return v___x_282_;
}
else
{
uint64_t v_hash_283_; uint64_t v___x_284_; 
v_hash_283_ = lean_ctor_get_uint64(v_package_280_, sizeof(void*)*2);
v___x_284_ = lean_uint64_mix_hash(v___x_281_, v_hash_283_);
return v___x_284_;
}
}
case 2:
{
lean_object* v_package_285_; lean_object* v_module_286_; uint64_t v___x_287_; uint64_t v___y_289_; 
v_package_285_ = lean_ctor_get(v_x_274_, 0);
v_module_286_ = lean_ctor_get(v_x_274_, 1);
v___x_287_ = 2ULL;
if (lean_obj_tag(v_package_285_) == 0)
{
uint64_t v___x_295_; 
v___x_295_ = 1723ULL;
v___y_289_ = v___x_295_;
goto v___jp_288_;
}
else
{
uint64_t v_hash_296_; 
v_hash_296_ = lean_ctor_get_uint64(v_package_285_, sizeof(void*)*2);
v___y_289_ = v_hash_296_;
goto v___jp_288_;
}
v___jp_288_:
{
uint64_t v___x_290_; 
v___x_290_ = lean_uint64_mix_hash(v___x_287_, v___y_289_);
if (lean_obj_tag(v_module_286_) == 0)
{
uint64_t v___x_291_; uint64_t v___x_292_; 
v___x_291_ = 1723ULL;
v___x_292_ = lean_uint64_mix_hash(v___x_290_, v___x_291_);
return v___x_292_;
}
else
{
uint64_t v_hash_293_; uint64_t v___x_294_; 
v_hash_293_ = lean_ctor_get_uint64(v_module_286_, sizeof(void*)*2);
v___x_294_ = lean_uint64_mix_hash(v___x_290_, v_hash_293_);
return v___x_294_;
}
}
}
case 3:
{
lean_object* v_package_297_; lean_object* v_target_298_; uint64_t v___x_299_; uint64_t v___y_301_; 
v_package_297_ = lean_ctor_get(v_x_274_, 0);
v_target_298_ = lean_ctor_get(v_x_274_, 1);
v___x_299_ = 3ULL;
if (lean_obj_tag(v_package_297_) == 0)
{
uint64_t v___x_307_; 
v___x_307_ = 1723ULL;
v___y_301_ = v___x_307_;
goto v___jp_300_;
}
else
{
uint64_t v_hash_308_; 
v_hash_308_ = lean_ctor_get_uint64(v_package_297_, sizeof(void*)*2);
v___y_301_ = v_hash_308_;
goto v___jp_300_;
}
v___jp_300_:
{
uint64_t v___x_302_; 
v___x_302_ = lean_uint64_mix_hash(v___x_299_, v___y_301_);
if (lean_obj_tag(v_target_298_) == 0)
{
uint64_t v___x_303_; uint64_t v___x_304_; 
v___x_303_ = 1723ULL;
v___x_304_ = lean_uint64_mix_hash(v___x_302_, v___x_303_);
return v___x_304_;
}
else
{
uint64_t v_hash_305_; uint64_t v___x_306_; 
v_hash_305_ = lean_ctor_get_uint64(v_target_298_, sizeof(void*)*2);
v___x_306_ = lean_uint64_mix_hash(v___x_302_, v_hash_305_);
return v___x_306_;
}
}
}
default: 
{
lean_object* v_target_309_; lean_object* v_facet_310_; uint64_t v___x_311_; uint64_t v___x_312_; uint64_t v___x_313_; 
v_target_309_ = lean_ctor_get(v_x_274_, 0);
v_facet_310_ = lean_ctor_get(v_x_274_, 1);
v___x_311_ = 4ULL;
v___x_312_ = l_Lake_instHashableBuildKey_hash(v_target_309_);
v___x_313_ = lean_uint64_mix_hash(v___x_311_, v___x_312_);
if (lean_obj_tag(v_facet_310_) == 0)
{
uint64_t v___x_314_; uint64_t v___x_315_; 
v___x_314_ = 1723ULL;
v___x_315_ = lean_uint64_mix_hash(v___x_313_, v___x_314_);
return v___x_315_;
}
else
{
uint64_t v_hash_316_; uint64_t v___x_317_; 
v_hash_316_ = lean_ctor_get_uint64(v_facet_310_, sizeof(void*)*2);
v___x_317_ = lean_uint64_mix_hash(v___x_313_, v_hash_316_);
return v___x_317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_instHashableBuildKey_hash___boxed(lean_object* v_x_318_){
_start:
{
uint64_t v_res_319_; lean_object* v_r_320_; 
v_res_319_ = l_Lake_instHashableBuildKey_hash(v_x_318_);
lean_dec_ref(v_x_318_);
v_r_320_ = lean_box_uint64(v_res_319_);
return v_r_320_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_instCoeBuildKey___lam__0(lean_object* v_key_323_){
_start:
{
lean_inc_ref(v_key_323_);
return v_key_323_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_instCoeBuildKey___lam__0___boxed(lean_object* v_key_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lake_PartialBuildKey_instCoeBuildKey___lam__0(v_key_324_);
lean_dec_ref(v_key_324_);
return v_res_325_;
}
}
static lean_object* _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_334_ = lean_string_utf8_byte_size(v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(lean_object* v_pkg_338_, lean_object* v_target_339_){
_start:
{
lean_object* v_str_340_; lean_object* v_startInclusive_341_; lean_object* v_endExclusive_342_; lean_object* v___x_348_; lean_object* v___x_349_; uint8_t v___x_350_; 
v_str_340_ = lean_ctor_get(v_target_339_, 0);
v_startInclusive_341_ = lean_ctor_get(v_target_339_, 1);
v_endExclusive_342_ = lean_ctor_get(v_target_339_, 2);
v___x_348_ = lean_nat_sub(v_endExclusive_342_, v_startInclusive_341_);
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = lean_nat_dec_eq(v___x_348_, v___x_349_);
if (v___x_350_ == 0)
{
lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_351_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_352_ = lean_obj_once(&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1, &l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1_once, _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1);
v___x_353_ = lean_nat_dec_le(v___x_352_, v___x_348_);
lean_dec(v___x_348_);
if (v___x_353_ == 0)
{
goto v___jp_343_;
}
else
{
uint8_t v___x_354_; 
v___x_354_ = lean_string_memcmp(v_str_340_, v___x_351_, v_startInclusive_341_, v___x_349_, v___x_352_);
if (v___x_354_ == 0)
{
goto v___jp_343_;
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v_target_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_355_ = lean_unsigned_to_nat(1u);
v___x_356_ = l_String_Slice_Pos_nextn(v_target_339_, v___x_349_, v___x_355_);
v___x_357_ = lean_nat_add(v_startInclusive_341_, v___x_356_);
lean_dec(v___x_356_);
v___x_358_ = lean_string_utf8_extract_fast(v_str_340_, v___x_357_, v_endExclusive_342_);
lean_dec(v___x_357_);
v_target_359_ = l_Lake_stringToLegalOrSimpleName(v___x_358_);
v___x_360_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_360_, 0, v_pkg_338_);
lean_ctor_set(v___x_360_, 1, v_target_359_);
v___x_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
return v___x_361_;
}
}
}
else
{
lean_object* v___x_362_; 
lean_dec(v___x_348_);
lean_dec(v_pkg_338_);
v___x_362_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__3));
return v___x_362_;
}
v___jp_343_:
{
lean_object* v___x_344_; lean_object* v_target_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_344_ = lean_string_utf8_extract_fast(v_str_340_, v_startInclusive_341_, v_endExclusive_342_);
v_target_345_ = l_Lake_stringToLegalOrSimpleName(v___x_344_);
v___x_346_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_346_, 0, v_pkg_338_);
lean_ctor_set(v___x_346_, 1, v_target_345_);
v___x_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
return v___x_347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___boxed(lean_object* v_pkg_363_, lean_object* v_target_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(v_pkg_363_, v_target_364_);
lean_dec_ref(v_target_364_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg(){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___closed__0));
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___boxed(lean_object* v___dummy_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg();
return v_res_371_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0(void){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg();
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0(lean_object* v_s_373_){
_start:
{
lean_object* v___x_374_; 
v___x_374_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___boxed(lean_object* v_s_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0(v_s_375_);
lean_dec_ref(v_s_375_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg(lean_object* v_s_377_, lean_object* v___x_378_, lean_object* v___x_379_, lean_object* v_a_380_, lean_object* v_b_381_){
_start:
{
lean_object* v_it_383_; lean_object* v_startInclusive_384_; lean_object* v_endExclusive_385_; 
if (lean_obj_tag(v_a_380_) == 0)
{
lean_object* v_currPos_389_; lean_object* v_searcher_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_413_; 
v_currPos_389_ = lean_ctor_get(v_a_380_, 0);
v_searcher_390_ = lean_ctor_get(v_a_380_, 1);
v_isSharedCheck_413_ = !lean_is_exclusive(v_a_380_);
if (v_isSharedCheck_413_ == 0)
{
v___x_392_ = v_a_380_;
v_isShared_393_ = v_isSharedCheck_413_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_searcher_390_);
lean_inc(v_currPos_389_);
lean_dec(v_a_380_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_413_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
uint8_t v_decide_394_; 
v_decide_394_ = lean_nat_dec_eq(v_searcher_390_, v___x_379_);
if (v_decide_394_ == 0)
{
uint32_t v___x_395_; uint32_t v___x_396_; uint8_t v___x_397_; 
v___x_395_ = 47;
v___x_396_ = lean_string_utf8_get_fast(v_s_377_, v_searcher_390_);
v___x_397_ = lean_uint32_dec_eq(v___x_396_, v___x_395_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; lean_object* v___x_400_; 
v___x_398_ = lean_string_utf8_next_fast(v_s_377_, v_searcher_390_);
lean_dec(v_searcher_390_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 1, v___x_398_);
v___x_400_ = v___x_392_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_currPos_389_);
lean_ctor_set(v_reuseFailAlloc_402_, 1, v___x_398_);
v___x_400_ = v_reuseFailAlloc_402_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
v_a_380_ = v___x_400_;
goto _start;
}
}
else
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v_slice_406_; lean_object* v_nextIt_408_; 
v___x_403_ = lean_string_utf8_next_fast(v_s_377_, v_searcher_390_);
v___x_404_ = lean_nat_sub(v___x_403_, v_searcher_390_);
v___x_405_ = lean_nat_add(v_searcher_390_, v___x_404_);
lean_dec(v___x_404_);
v_slice_406_ = l_String_Slice_subslice_x21(v___x_378_, v_currPos_389_, v_searcher_390_);
lean_inc(v___x_405_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 1, v___x_405_);
lean_ctor_set(v___x_392_, 0, v___x_405_);
v_nextIt_408_ = v___x_392_;
goto v_reusejp_407_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_405_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v___x_405_);
v_nextIt_408_ = v_reuseFailAlloc_411_;
goto v_reusejp_407_;
}
v_reusejp_407_:
{
lean_object* v_startInclusive_409_; lean_object* v_endExclusive_410_; 
v_startInclusive_409_ = lean_ctor_get(v_slice_406_, 0);
lean_inc(v_startInclusive_409_);
v_endExclusive_410_ = lean_ctor_get(v_slice_406_, 1);
lean_inc(v_endExclusive_410_);
lean_dec_ref(v_slice_406_);
v_it_383_ = v_nextIt_408_;
v_startInclusive_384_ = v_startInclusive_409_;
v_endExclusive_385_ = v_endExclusive_410_;
goto v___jp_382_;
}
}
}
else
{
lean_object* v___x_412_; 
lean_del_object(v___x_392_);
lean_dec(v_searcher_390_);
v___x_412_ = lean_box(1);
lean_inc(v___x_379_);
v_it_383_ = v___x_412_;
v_startInclusive_384_ = v_currPos_389_;
v_endExclusive_385_ = v___x_379_;
goto v___jp_382_;
}
}
}
else
{
lean_dec(v___x_379_);
lean_dec_ref(v_s_377_);
return v_b_381_;
}
v___jp_382_:
{
lean_object* v___x_386_; lean_object* v___x_387_; 
lean_inc_ref(v_s_377_);
v___x_386_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_386_, 0, v_s_377_);
lean_ctor_set(v___x_386_, 1, v_startInclusive_384_);
lean_ctor_set(v___x_386_, 2, v_endExclusive_385_);
v___x_387_ = lean_array_push(v_b_381_, v___x_386_);
v_a_380_ = v_it_383_;
v_b_381_ = v___x_387_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg___boxed(lean_object* v_s_414_, lean_object* v___x_415_, lean_object* v___x_416_, lean_object* v_a_417_, lean_object* v_b_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg(v_s_414_, v___x_415_, v___x_416_, v_a_417_, v_b_418_);
lean_dec_ref(v___x_415_);
return v_res_419_;
}
}
static lean_object* _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5));
v___x_430_ = lean_string_utf8_byte_size(v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget(lean_object* v_s_433_){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_436_ = lean_unsigned_to_nat(0u);
v___x_437_ = lean_string_utf8_byte_size(v_s_433_);
lean_inc_ref(v_s_433_);
v___x_438_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_438_, 0, v_s_433_);
lean_ctor_set(v___x_438_, 1, v___x_436_);
lean_ctor_set(v___x_438_, 2, v___x_437_);
v___x_439_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___closed__0);
v___x_440_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__2));
v___x_441_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg(v_s_433_, v___x_438_, v___x_437_, v___x_439_, v___x_440_);
lean_dec_ref_known(v___x_438_, 3);
v___x_442_ = lean_array_to_list(v___x_441_);
if (lean_obj_tag(v___x_442_) == 1)
{
lean_object* v_head_443_; lean_object* v_tail_444_; 
v_head_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_head_443_);
v_tail_444_ = lean_ctor_get(v___x_442_, 1);
lean_inc(v_tail_444_);
lean_dec_ref_known(v___x_442_, 2);
if (lean_obj_tag(v_tail_444_) == 0)
{
lean_object* v_str_448_; lean_object* v_startInclusive_449_; lean_object* v_endExclusive_450_; lean_object* v___x_467_; uint8_t v___x_468_; 
v_str_448_ = lean_ctor_get(v_head_443_, 0);
v_startInclusive_449_ = lean_ctor_get(v_head_443_, 1);
v_endExclusive_450_ = lean_ctor_get(v_head_443_, 2);
v___x_467_ = lean_nat_sub(v_endExclusive_450_, v_startInclusive_449_);
v___x_468_ = lean_nat_dec_eq(v___x_467_, v___x_436_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_469_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5));
v___x_470_ = lean_obj_once(&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6, &l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6_once, _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6);
v___x_471_ = lean_nat_dec_le(v___x_470_, v___x_467_);
lean_dec(v___x_467_);
if (v___x_471_ == 0)
{
goto v___jp_451_;
}
else
{
uint8_t v___x_472_; 
v___x_472_ = lean_string_memcmp(v_str_448_, v___x_469_, v_startInclusive_449_, v___x_436_, v___x_470_);
if (v___x_472_ == 0)
{
goto v___jp_451_;
}
else
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v___x_477_; 
lean_inc(v_endExclusive_450_);
lean_inc(v_startInclusive_449_);
lean_inc_ref(v_str_448_);
v___x_473_ = lean_unsigned_to_nat(1u);
v___x_474_ = l_String_Slice_Pos_nextn(v_head_443_, v___x_436_, v___x_473_);
lean_dec(v_head_443_);
v___x_475_ = lean_nat_add(v_startInclusive_449_, v___x_474_);
lean_dec(v___x_474_);
lean_dec(v_startInclusive_449_);
v___x_476_ = lean_nat_sub(v_endExclusive_450_, v___x_475_);
v___x_477_ = lean_nat_dec_eq(v___x_476_, v___x_436_);
lean_dec(v___x_476_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_478_ = lean_string_utf8_extract_fast(v_str_448_, v___x_475_, v_endExclusive_450_);
lean_dec(v_endExclusive_450_);
lean_dec(v___x_475_);
lean_dec_ref(v_str_448_);
v___x_479_ = l_Lake_stringToLegalOrSimpleName(v___x_478_);
v___x_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
v___x_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
else
{
lean_object* v___x_482_; 
lean_dec(v___x_475_);
lean_dec(v_endExclusive_450_);
lean_dec_ref(v_str_448_);
v___x_482_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7));
return v___x_482_;
}
}
}
}
else
{
lean_object* v___x_483_; 
lean_dec(v___x_467_);
lean_dec(v_head_443_);
v___x_483_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__7));
return v___x_483_;
}
v___jp_451_:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; 
v___x_452_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_453_ = lean_obj_once(&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1, &l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1_once, _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__1);
v___x_454_ = lean_nat_sub(v_endExclusive_450_, v_startInclusive_449_);
v___x_455_ = lean_nat_dec_le(v___x_453_, v___x_454_);
lean_dec(v___x_454_);
if (v___x_455_ == 0)
{
goto v___jp_445_;
}
else
{
uint8_t v___x_456_; 
v___x_456_ = lean_string_memcmp(v_str_448_, v___x_452_, v_startInclusive_449_, v___x_436_, v___x_453_);
if (v___x_456_ == 0)
{
goto v___jp_445_;
}
else
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
lean_inc(v_endExclusive_450_);
lean_inc(v_startInclusive_449_);
lean_inc_ref(v_str_448_);
v___x_457_ = lean_unsigned_to_nat(1u);
v___x_458_ = l_String_Slice_Pos_nextn(v_head_443_, v___x_436_, v___x_457_);
lean_dec(v_head_443_);
v___x_459_ = lean_nat_add(v_startInclusive_449_, v___x_458_);
lean_dec(v___x_458_);
lean_dec(v_startInclusive_449_);
v___x_460_ = lean_nat_sub(v_endExclusive_450_, v___x_459_);
v___x_461_ = lean_nat_dec_eq(v___x_460_, v___x_436_);
lean_dec(v___x_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_462_ = lean_string_utf8_extract_fast(v_str_448_, v___x_459_, v_endExclusive_450_);
lean_dec(v_endExclusive_450_);
lean_dec(v___x_459_);
lean_dec_ref(v_str_448_);
v___x_463_ = l_Lake_stringToLegalOrSimpleName(v___x_462_);
v___x_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
v___x_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
return v___x_465_;
}
else
{
lean_object* v___x_466_; 
lean_dec(v___x_459_);
lean_dec(v_endExclusive_450_);
lean_dec_ref(v_str_448_);
v___x_466_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__4));
return v___x_466_;
}
}
}
}
}
else
{
lean_object* v_head_484_; lean_object* v_tail_485_; lean_object* v_str_487_; lean_object* v_startInclusive_488_; lean_object* v_endExclusive_489_; 
v_head_484_ = lean_ctor_get(v_tail_444_, 0);
lean_inc(v_head_484_);
v_tail_485_ = lean_ctor_get(v_tail_444_, 1);
lean_inc(v_tail_485_);
lean_dec_ref_known(v_tail_444_, 2);
if (lean_obj_tag(v_tail_485_) == 0)
{
lean_object* v_str_497_; lean_object* v_startInclusive_498_; lean_object* v_endExclusive_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; uint8_t v___x_503_; 
v_str_497_ = lean_ctor_get(v_head_443_, 0);
lean_inc_ref(v_str_497_);
v_startInclusive_498_ = lean_ctor_get(v_head_443_, 1);
lean_inc(v_startInclusive_498_);
v_endExclusive_499_ = lean_ctor_get(v_head_443_, 2);
lean_inc(v_endExclusive_499_);
v___x_500_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5));
v___x_501_ = lean_obj_once(&l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6, &l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6_once, _init_l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__6);
v___x_502_ = lean_nat_sub(v_endExclusive_499_, v_startInclusive_498_);
v___x_503_ = lean_nat_dec_le(v___x_501_, v___x_502_);
lean_dec(v___x_502_);
if (v___x_503_ == 0)
{
lean_dec(v_head_443_);
v_str_487_ = v_str_497_;
v_startInclusive_488_ = v_startInclusive_498_;
v_endExclusive_489_ = v_endExclusive_499_;
goto v___jp_486_;
}
else
{
uint8_t v___x_504_; 
v___x_504_ = lean_string_memcmp(v_str_497_, v___x_500_, v_startInclusive_498_, v___x_436_, v___x_501_);
if (v___x_504_ == 0)
{
lean_dec(v_head_443_);
v_str_487_ = v_str_497_;
v_startInclusive_488_ = v_startInclusive_498_;
v_endExclusive_489_ = v_endExclusive_499_;
goto v___jp_486_;
}
else
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_505_ = lean_unsigned_to_nat(1u);
v___x_506_ = l_String_Slice_Pos_nextn(v_head_443_, v___x_436_, v___x_505_);
lean_dec(v_head_443_);
v___x_507_ = lean_nat_add(v_startInclusive_498_, v___x_506_);
lean_dec(v___x_506_);
lean_dec(v_startInclusive_498_);
v_str_487_ = v_str_497_;
v_startInclusive_488_ = v___x_507_;
v_endExclusive_489_ = v_endExclusive_499_;
goto v___jp_486_;
}
}
}
else
{
lean_dec(v_tail_485_);
lean_dec(v_head_484_);
lean_dec(v_head_443_);
goto v___jp_434_;
}
v___jp_486_:
{
lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_490_ = lean_nat_sub(v_endExclusive_489_, v_startInclusive_488_);
v___x_491_ = lean_nat_dec_eq(v___x_490_, v___x_436_);
lean_dec(v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = lean_string_utf8_extract_fast(v_str_487_, v_startInclusive_488_, v_endExclusive_489_);
lean_dec(v_endExclusive_489_);
lean_dec(v_startInclusive_488_);
lean_dec_ref(v_str_487_);
v___x_493_ = l_Lake_stringToLegalOrSimpleName(v___x_492_);
v___x_494_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(v___x_493_, v_head_484_);
lean_dec(v_head_484_);
return v___x_494_;
}
else
{
lean_object* v___x_495_; lean_object* v___x_496_; 
lean_dec(v_endExclusive_489_);
lean_dec(v_startInclusive_488_);
lean_dec_ref(v_str_487_);
v___x_495_ = lean_box(0);
v___x_496_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(v___x_495_, v_head_484_);
lean_dec(v_head_484_);
return v___x_496_;
}
}
}
v___jp_445_:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = lean_box(0);
v___x_447_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget(v___x_446_, v_head_443_);
lean_dec(v_head_443_);
return v___x_447_;
}
}
else
{
lean_dec(v___x_442_);
goto v___jp_434_;
}
v___jp_434_:
{
lean_object* v___x_435_; 
v___x_435_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__1));
return v___x_435_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1(lean_object* v_s_508_, lean_object* v___x_509_, lean_object* v___x_510_, lean_object* v_inst_511_, lean_object* v_R_512_, lean_object* v_a_513_, lean_object* v_b_514_){
_start:
{
lean_object* v___x_515_; 
v___x_515_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___redArg(v_s_508_, v___x_509_, v___x_510_, v_a_513_, v_b_514_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1___boxed(lean_object* v_s_516_, lean_object* v___x_517_, lean_object* v___x_518_, lean_object* v_inst_519_, lean_object* v_R_520_, lean_object* v_a_521_, lean_object* v_b_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__1(v_s_516_, v___x_517_, v___x_518_, v_inst_519_, v_R_520_, v_a_521_, v_b_522_);
lean_dec_ref(v___x_517_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg(){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget_spec__0___redArg___closed__0));
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg___boxed(lean_object* v___dummy_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg();
return v_res_527_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0(void){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___redArg();
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0(lean_object* v_s_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___boxed(lean_object* v_s_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0(v_s_531_);
lean_dec_ref(v_s_531_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lake_PartialBuildKey_parse_spec__2(lean_object* v_msg_534_){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_535_ = ((lean_object*)(l_panic___at___00Lake_PartialBuildKey_parse_spec__2___closed__0));
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
v___x_537_ = lean_panic_fn_borrowed(v___x_536_, v_msg_534_);
lean_dec_ref_known(v___x_536_, 1);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg(lean_object* v_s_538_, lean_object* v___x_539_, lean_object* v___x_540_, lean_object* v_a_541_, lean_object* v_b_542_){
_start:
{
lean_object* v_it_544_; lean_object* v_startInclusive_545_; lean_object* v_endExclusive_546_; 
if (lean_obj_tag(v_a_541_) == 0)
{
lean_object* v_currPos_551_; lean_object* v_searcher_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_575_; 
v_currPos_551_ = lean_ctor_get(v_a_541_, 0);
v_searcher_552_ = lean_ctor_get(v_a_541_, 1);
v_isSharedCheck_575_ = !lean_is_exclusive(v_a_541_);
if (v_isSharedCheck_575_ == 0)
{
v___x_554_ = v_a_541_;
v_isShared_555_ = v_isSharedCheck_575_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_searcher_552_);
lean_inc(v_currPos_551_);
lean_dec(v_a_541_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_575_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
uint8_t v_decide_556_; 
v_decide_556_ = lean_nat_dec_eq(v_searcher_552_, v___x_540_);
if (v_decide_556_ == 0)
{
uint32_t v___x_557_; uint32_t v___x_558_; uint8_t v___x_559_; 
v___x_557_ = 58;
v___x_558_ = lean_string_utf8_get_fast(v_s_538_, v_searcher_552_);
v___x_559_ = lean_uint32_dec_eq(v___x_558_, v___x_557_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_560_ = lean_string_utf8_next_fast(v_s_538_, v_searcher_552_);
lean_dec(v_searcher_552_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v___x_560_);
v___x_562_ = v___x_554_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_currPos_551_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v___x_560_);
v___x_562_ = v_reuseFailAlloc_564_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
v_a_541_ = v___x_562_;
goto _start;
}
}
else
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v_slice_568_; lean_object* v_nextIt_570_; 
v___x_565_ = lean_string_utf8_next_fast(v_s_538_, v_searcher_552_);
v___x_566_ = lean_nat_sub(v___x_565_, v_searcher_552_);
v___x_567_ = lean_nat_add(v_searcher_552_, v___x_566_);
lean_dec(v___x_566_);
v_slice_568_ = l_String_Slice_subslice_x21(v___x_539_, v_currPos_551_, v_searcher_552_);
lean_inc(v___x_567_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v___x_567_);
lean_ctor_set(v___x_554_, 0, v___x_567_);
v_nextIt_570_ = v___x_554_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v___x_567_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v___x_567_);
v_nextIt_570_ = v_reuseFailAlloc_573_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v_startInclusive_571_; lean_object* v_endExclusive_572_; 
v_startInclusive_571_ = lean_ctor_get(v_slice_568_, 0);
lean_inc(v_startInclusive_571_);
v_endExclusive_572_ = lean_ctor_get(v_slice_568_, 1);
lean_inc(v_endExclusive_572_);
lean_dec_ref(v_slice_568_);
v_it_544_ = v_nextIt_570_;
v_startInclusive_545_ = v_startInclusive_571_;
v_endExclusive_546_ = v_endExclusive_572_;
goto v___jp_543_;
}
}
}
else
{
lean_object* v___x_574_; 
lean_del_object(v___x_554_);
lean_dec(v_searcher_552_);
v___x_574_ = lean_box(1);
lean_inc(v___x_540_);
v_it_544_ = v___x_574_;
v_startInclusive_545_ = v_currPos_551_;
v_endExclusive_546_ = v___x_540_;
goto v___jp_543_;
}
}
}
else
{
lean_dec(v___x_540_);
lean_dec_ref(v_s_538_);
return v_b_542_;
}
v___jp_543_:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
lean_inc_ref(v_s_538_);
v___x_547_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_547_, 0, v_s_538_);
lean_ctor_set(v___x_547_, 1, v_startInclusive_545_);
lean_ctor_set(v___x_547_, 2, v_endExclusive_546_);
v___x_548_ = l_String_Slice_toString(v___x_547_);
lean_dec_ref_known(v___x_547_, 3);
v___x_549_ = lean_array_push(v_b_542_, v___x_548_);
v_a_541_ = v_it_544_;
v_b_542_ = v___x_549_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg___boxed(lean_object* v_s_576_, lean_object* v___x_577_, lean_object* v___x_578_, lean_object* v_a_579_, lean_object* v_b_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg(v_s_576_, v___x_577_, v___x_578_, v_a_579_, v_b_580_);
lean_dec_ref(v___x_577_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3(lean_object* v_x_585_, lean_object* v_x_586_){
_start:
{
if (lean_obj_tag(v_x_586_) == 0)
{
lean_object* v___x_587_; 
v___x_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_587_, 0, v_x_585_);
return v___x_587_;
}
else
{
lean_object* v_head_588_; lean_object* v_tail_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_602_; 
v_head_588_ = lean_ctor_get(v_x_586_, 0);
v_tail_589_ = lean_ctor_get(v_x_586_, 1);
v_isSharedCheck_602_ = !lean_is_exclusive(v_x_586_);
if (v_isSharedCheck_602_ == 0)
{
v___x_591_ = v_x_586_;
v_isShared_592_ = v_isSharedCheck_602_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_tail_589_);
lean_inc(v_head_588_);
lean_dec(v_x_586_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_602_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_593_; lean_object* v___x_594_; uint8_t v___x_595_; 
v___x_593_ = lean_string_utf8_byte_size(v_head_588_);
v___x_594_ = lean_unsigned_to_nat(0u);
v___x_595_ = lean_nat_dec_eq(v___x_593_, v___x_594_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; lean_object* v___x_598_; 
v___x_596_ = l_Lake_stringToLegalOrSimpleName(v_head_588_);
if (v_isShared_592_ == 0)
{
lean_ctor_set_tag(v___x_591_, 4);
lean_ctor_set(v___x_591_, 1, v___x_596_);
lean_ctor_set(v___x_591_, 0, v_x_585_);
v___x_598_ = v___x_591_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_x_585_);
lean_ctor_set(v_reuseFailAlloc_600_, 1, v___x_596_);
v___x_598_ = v_reuseFailAlloc_600_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
v_x_585_ = v___x_598_;
v_x_586_ = v_tail_589_;
goto _start;
}
}
else
{
lean_object* v___x_601_; 
lean_del_object(v___x_591_);
lean_dec(v_tail_589_);
lean_dec(v_head_588_);
lean_dec_ref(v_x_585_);
v___x_601_ = ((lean_object*)(l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3___closed__1));
return v___x_601_;
}
}
}
}
}
static lean_object* _init_l_Lake_PartialBuildKey_parse___closed__4(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_608_ = ((lean_object*)(l_Lake_PartialBuildKey_parse___closed__3));
v___x_609_ = lean_unsigned_to_nat(4u);
v___x_610_ = lean_unsigned_to_nat(62u);
v___x_611_ = ((lean_object*)(l_Lake_PartialBuildKey_parse___closed__2));
v___x_612_ = ((lean_object*)(l_Lake_PartialBuildKey_parse___closed__1));
v___x_613_ = l_mkPanicMessageWithDecl(v___x_612_, v___x_611_, v___x_610_, v___x_609_, v___x_608_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_parse(lean_object* v_s_617_){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_618_ = lean_string_utf8_byte_size(v_s_617_);
v___x_619_ = lean_unsigned_to_nat(0u);
v___x_620_ = lean_nat_dec_eq(v___x_618_, v___x_619_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
lean_inc_ref(v_s_617_);
v___x_621_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_621_, 0, v_s_617_);
lean_ctor_set(v___x_621_, 1, v___x_619_);
lean_ctor_set(v___x_621_, 2, v___x_618_);
v___x_622_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_PartialBuildKey_parse_spec__0___closed__0);
v___x_623_ = ((lean_object*)(l_Lake_PartialBuildKey_parse___closed__0));
v___x_624_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg(v_s_617_, v___x_621_, v___x_618_, v___x_622_, v___x_623_);
lean_dec_ref_known(v___x_621_, 3);
v___x_625_ = lean_array_to_list(v___x_624_);
if (lean_obj_tag(v___x_625_) == 0)
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = lean_obj_once(&l_Lake_PartialBuildKey_parse___closed__4, &l_Lake_PartialBuildKey_parse___closed__4_once, _init_l_Lake_PartialBuildKey_parse___closed__4);
v___x_627_ = l_panic___at___00Lake_PartialBuildKey_parse_spec__2(v___x_626_);
return v___x_627_;
}
else
{
lean_object* v_head_628_; lean_object* v_tail_629_; lean_object* v___x_630_; 
v_head_628_ = lean_ctor_get(v___x_625_, 0);
lean_inc(v_head_628_);
v_tail_629_ = lean_ctor_get(v___x_625_, 1);
lean_inc(v_tail_629_);
lean_dec_ref_known(v___x_625_, 2);
v___x_630_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget(v_head_628_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_638_; 
lean_dec(v_tail_629_);
v_a_631_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_638_ == 0)
{
v___x_633_ = v___x_630_;
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_630_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_636_; 
if (v_isShared_634_ == 0)
{
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_a_631_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
else
{
lean_object* v_a_639_; lean_object* v___x_640_; 
v_a_639_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_639_);
lean_dec_ref_known(v___x_630_, 1);
v___x_640_ = l_List_foldlM___at___00Lake_PartialBuildKey_parse_spec__3(v_a_639_, v_tail_629_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_648_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_648_ == 0)
{
v___x_643_ = v___x_640_;
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v___x_640_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_646_; 
if (v_isShared_644_ == 0)
{
v___x_646_ = v___x_643_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_641_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
else
{
lean_object* v_a_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_656_; 
v_a_649_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_656_ == 0)
{
v___x_651_ = v___x_640_;
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_a_649_);
lean_dec(v___x_640_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
if (v_isShared_652_ == 0)
{
v___x_654_ = v___x_651_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_a_649_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
}
}
}
else
{
lean_object* v___x_657_; 
lean_dec_ref(v_s_617_);
v___x_657_ = ((lean_object*)(l_Lake_PartialBuildKey_parse___closed__6));
return v___x_657_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1(lean_object* v_s_658_, lean_object* v___x_659_, lean_object* v___x_660_, lean_object* v_inst_661_, lean_object* v_R_662_, lean_object* v_a_663_, lean_object* v_b_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___redArg(v_s_658_, v___x_659_, v___x_660_, v_a_663_, v_b_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1___boxed(lean_object* v_s_666_, lean_object* v___x_667_, lean_object* v___x_668_, lean_object* v_inst_669_, lean_object* v_R_670_, lean_object* v_a_671_, lean_object* v_b_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_PartialBuildKey_parse_spec__1(v_s_666_, v___x_667_, v___x_668_, v_inst_669_, v_R_670_, v_a_671_, v_b_672_);
lean_dec_ref(v___x_667_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(lean_object* v_p_674_){
_start:
{
switch(lean_obj_tag(v_p_674_))
{
case 0:
{
return v_p_674_;
}
case 2:
{
lean_object* v_pre_675_; 
v_pre_675_ = lean_ctor_get(v_p_674_, 0);
if (lean_obj_tag(v_pre_675_) == 0)
{
return v_pre_675_;
}
else
{
lean_inc(v_pre_675_);
return v_pre_675_;
}
}
default: 
{
lean_inc(v_p_674_);
return v_p_674_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName___boxed(lean_object* v_p_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(v_p_676_);
lean_dec(v_p_676_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(lean_object* v_a_681_){
_start:
{
switch(lean_obj_tag(v_a_681_))
{
case 0:
{
lean_object* v_module_682_; lean_object* v___x_683_; uint8_t v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v_module_682_ = lean_ctor_get(v_a_681_, 0);
lean_inc(v_module_682_);
lean_dec_ref_known(v_a_681_, 1);
v___x_683_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_684_ = 1;
v___x_685_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_682_, v___x_684_);
v___x_686_ = lean_string_append(v___x_683_, v___x_685_);
lean_dec_ref(v___x_685_);
return v___x_686_;
}
case 1:
{
lean_object* v_package_687_; lean_object* v___x_688_; 
v_package_687_ = lean_ctor_get(v_a_681_, 0);
lean_inc(v_package_687_);
lean_dec_ref_known(v_a_681_, 1);
v___x_688_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(v_package_687_);
lean_dec(v_package_687_);
if (lean_obj_tag(v___x_688_) == 0)
{
lean_object* v___x_689_; 
v___x_689_ = ((lean_object*)(l_panic___at___00Lake_PartialBuildKey_parse_spec__2___closed__0));
return v___x_689_;
}
else
{
lean_object* v___x_690_; uint8_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_690_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5));
v___x_691_ = 1;
v___x_692_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_688_, v___x_691_);
v___x_693_ = lean_string_append(v___x_690_, v___x_692_);
lean_dec_ref(v___x_692_);
return v___x_693_;
}
}
case 2:
{
lean_object* v_package_694_; lean_object* v_module_695_; lean_object* v___x_696_; 
v_package_694_ = lean_ctor_get(v_a_681_, 0);
lean_inc(v_package_694_);
v_module_695_ = lean_ctor_get(v_a_681_, 1);
lean_inc(v_module_695_);
lean_dec_ref_known(v_a_681_, 2);
v___x_696_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(v_package_694_);
lean_dec(v_package_694_);
if (lean_obj_tag(v___x_696_) == 0)
{
lean_object* v___x_697_; uint8_t v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_697_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_698_ = 1;
v___x_699_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_695_, v___x_698_);
v___x_700_ = lean_string_append(v___x_697_, v___x_699_);
lean_dec_ref(v___x_699_);
return v___x_700_;
}
else
{
uint8_t v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_701_ = 1;
v___x_702_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_696_, v___x_701_);
v___x_703_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__0));
v___x_704_ = lean_string_append(v___x_702_, v___x_703_);
v___x_705_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_695_, v___x_701_);
v___x_706_ = lean_string_append(v___x_704_, v___x_705_);
lean_dec_ref(v___x_705_);
return v___x_706_;
}
}
case 3:
{
lean_object* v_package_707_; lean_object* v_target_708_; lean_object* v___x_709_; 
v_package_707_ = lean_ctor_get(v_a_681_, 0);
lean_inc(v_package_707_);
v_target_708_ = lean_ctor_get(v_a_681_, 1);
lean_inc(v_target_708_);
lean_dec_ref_known(v_a_681_, 2);
v___x_709_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_getPkgName(v_package_707_);
lean_dec(v_package_707_);
if (lean_obj_tag(v___x_709_) == 0)
{
uint8_t v___x_710_; lean_object* v___x_711_; 
v___x_710_ = 1;
v___x_711_ = l_Lean_Name_toString(v_target_708_, v___x_710_);
return v___x_711_;
}
else
{
uint8_t v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_712_ = 1;
v___x_713_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_709_, v___x_712_);
v___x_714_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__1));
v___x_715_ = lean_string_append(v___x_713_, v___x_714_);
v___x_716_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_target_708_, v___x_712_);
v___x_717_ = lean_string_append(v___x_715_, v___x_716_);
lean_dec_ref(v___x_716_);
return v___x_717_;
}
}
default: 
{
lean_object* v_target_718_; lean_object* v_facet_719_; uint8_t v___x_720_; 
v_target_718_ = lean_ctor_get(v_a_681_, 0);
lean_inc_ref(v_target_718_);
v_facet_719_ = lean_ctor_get(v_a_681_, 1);
lean_inc(v_facet_719_);
lean_dec_ref_known(v_a_681_, 2);
v___x_720_ = l_Lean_Name_isAnonymous(v_facet_719_);
if (v___x_720_ == 0)
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_721_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_target_718_);
v___x_722_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__2));
v___x_723_ = lean_string_append(v___x_721_, v___x_722_);
v___x_724_ = 1;
v___x_725_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_facet_719_, v___x_724_);
v___x_726_ = lean_string_append(v___x_723_, v___x_725_);
lean_dec_ref(v___x_725_);
return v___x_726_;
}
else
{
lean_dec(v_facet_719_);
v_a_681_ = v_target_718_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_toString(lean_object* v_self_728_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_self_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_moduleFacet(lean_object* v_module_732_, lean_object* v_facet_733_){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_734_, 0, v_module_732_);
v___x_735_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
lean_ctor_set(v___x_735_, 1, v_facet_733_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageFacet(lean_object* v_package_736_, lean_object* v_facet_737_){
_start:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_738_, 0, v_package_736_);
v___x_739_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
lean_ctor_set(v___x_739_, 1, v_facet_737_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_packageModuleFacet(lean_object* v_package_740_, lean_object* v_module_741_, lean_object* v_facet_742_){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_743_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_743_, 0, v_package_740_);
lean_ctor_set(v___x_743_, 1, v_module_741_);
v___x_744_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_743_);
lean_ctor_set(v___x_744_, 1, v_facet_742_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_targetFacet(lean_object* v_package_745_, lean_object* v_target_746_, lean_object* v_facet_747_){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_748_, 0, v_package_745_);
lean_ctor_set(v___x_748_, 1, v_target_746_);
v___x_749_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_748_);
lean_ctor_set(v___x_749_, 1, v_facet_747_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_customTarget(lean_object* v_package_750_, lean_object* v_target_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_752_, 0, v_package_750_);
lean_ctor_set(v___x_752_, 1, v_target_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_toString(lean_object* v_x_753_){
_start:
{
switch(lean_obj_tag(v_x_753_))
{
case 0:
{
lean_object* v_module_754_; lean_object* v___x_755_; uint8_t v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v_module_754_ = lean_ctor_get(v_x_753_, 0);
lean_inc(v_module_754_);
lean_dec_ref_known(v_x_753_, 1);
v___x_755_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parsePackageTarget___closed__0));
v___x_756_ = 1;
v___x_757_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_754_, v___x_756_);
v___x_758_ = lean_string_append(v___x_755_, v___x_757_);
lean_dec_ref(v___x_757_);
return v___x_758_;
}
case 1:
{
lean_object* v_package_759_; lean_object* v___x_760_; lean_object* v___x_761_; uint8_t v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v_package_759_ = lean_ctor_get(v_x_753_, 0);
lean_inc(v_package_759_);
lean_dec_ref_known(v_x_753_, 1);
v___x_760_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_parse_parseTarget___closed__5));
v___x_761_ = l_Lean_Name_getPrefix(v_package_759_);
lean_dec(v_package_759_);
v___x_762_ = 1;
v___x_763_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_761_, v___x_762_);
v___x_764_ = lean_string_append(v___x_760_, v___x_763_);
lean_dec_ref(v___x_763_);
return v___x_764_;
}
case 2:
{
lean_object* v_package_765_; lean_object* v_module_766_; lean_object* v___x_767_; uint8_t v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v_package_765_ = lean_ctor_get(v_x_753_, 0);
lean_inc(v_package_765_);
v_module_766_ = lean_ctor_get(v_x_753_, 1);
lean_inc(v_module_766_);
lean_dec_ref_known(v_x_753_, 2);
v___x_767_ = l_Lean_Name_getPrefix(v_package_765_);
lean_dec(v_package_765_);
v___x_768_ = 1;
v___x_769_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_767_, v___x_768_);
v___x_770_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__0));
v___x_771_ = lean_string_append(v___x_769_, v___x_770_);
v___x_772_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_766_, v___x_768_);
v___x_773_ = lean_string_append(v___x_771_, v___x_772_);
lean_dec_ref(v___x_772_);
return v___x_773_;
}
case 3:
{
lean_object* v_package_774_; lean_object* v_target_775_; lean_object* v___x_776_; uint8_t v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v_package_774_ = lean_ctor_get(v_x_753_, 0);
lean_inc(v_package_774_);
v_target_775_ = lean_ctor_get(v_x_753_, 1);
lean_inc(v_target_775_);
lean_dec_ref_known(v_x_753_, 2);
v___x_776_ = l_Lean_Name_getPrefix(v_package_774_);
lean_dec(v_package_774_);
v___x_777_ = 1;
v___x_778_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_776_, v___x_777_);
v___x_779_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__1));
v___x_780_ = lean_string_append(v___x_778_, v___x_779_);
v___x_781_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_target_775_, v___x_777_);
v___x_782_ = lean_string_append(v___x_780_, v___x_781_);
lean_dec_ref(v___x_781_);
return v___x_782_;
}
default: 
{
lean_object* v_target_783_; lean_object* v_facet_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v_target_783_ = lean_ctor_get(v_x_753_, 0);
lean_inc_ref(v_target_783_);
v_facet_784_ = lean_ctor_get(v_x_753_, 1);
lean_inc(v_facet_784_);
lean_dec_ref_known(v_x_753_, 2);
v___x_785_ = l_Lake_BuildKey_toString(v_target_783_);
v___x_786_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__2));
v___x_787_ = lean_string_append(v___x_785_, v___x_786_);
v___x_788_ = l_Lake_Name_eraseHead(v_facet_784_);
v___x_789_ = 1;
v___x_790_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_788_, v___x_789_);
v___x_791_ = lean_string_append(v___x_787_, v___x_790_);
lean_dec_ref(v___x_790_);
return v___x_791_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_toSimpleString(lean_object* v_x_792_){
_start:
{
lean_object* v_p_794_; lean_object* v_m_795_; 
switch(lean_obj_tag(v_x_792_))
{
case 0:
{
lean_object* v_module_803_; uint8_t v___x_804_; lean_object* v___x_805_; 
v_module_803_ = lean_ctor_get(v_x_792_, 0);
lean_inc(v_module_803_);
lean_dec_ref_known(v_x_792_, 1);
v___x_804_ = 1;
v___x_805_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_803_, v___x_804_);
return v___x_805_;
}
case 1:
{
lean_object* v_package_806_; lean_object* v___x_807_; uint8_t v___x_808_; lean_object* v___x_809_; 
v_package_806_ = lean_ctor_get(v_x_792_, 0);
lean_inc(v_package_806_);
lean_dec_ref_known(v_x_792_, 1);
v___x_807_ = l_Lean_Name_getPrefix(v_package_806_);
lean_dec(v_package_806_);
v___x_808_ = 1;
v___x_809_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_807_, v___x_808_);
return v___x_809_;
}
case 4:
{
lean_object* v_target_810_; lean_object* v_facet_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; uint8_t v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v_target_810_ = lean_ctor_get(v_x_792_, 0);
lean_inc_ref(v_target_810_);
v_facet_811_ = lean_ctor_get(v_x_792_, 1);
lean_inc(v_facet_811_);
lean_dec_ref_known(v_x_792_, 2);
v___x_812_ = l_Lake_BuildKey_toSimpleString(v_target_810_);
v___x_813_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__2));
v___x_814_ = lean_string_append(v___x_812_, v___x_813_);
v___x_815_ = l_Lake_Name_eraseHead(v_facet_811_);
v___x_816_ = 1;
v___x_817_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_815_, v___x_816_);
v___x_818_ = lean_string_append(v___x_814_, v___x_817_);
lean_dec_ref(v___x_817_);
return v___x_818_;
}
default: 
{
lean_object* v_package_819_; lean_object* v_module_820_; 
v_package_819_ = lean_ctor_get(v_x_792_, 0);
lean_inc(v_package_819_);
v_module_820_ = lean_ctor_get(v_x_792_, 1);
lean_inc(v_module_820_);
lean_dec_ref(v_x_792_);
v_p_794_ = v_package_819_;
v_m_795_ = v_module_820_;
goto v___jp_793_;
}
}
v___jp_793_:
{
lean_object* v___x_796_; uint8_t v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_796_ = l_Lean_Name_getPrefix(v_p_794_);
lean_dec(v_p_794_);
v___x_797_ = 1;
v___x_798_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_796_, v___x_797_);
v___x_799_ = ((lean_object*)(l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go___closed__1));
v___x_800_ = lean_string_append(v___x_798_, v___x_799_);
v___x_801_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_m_795_, v___x_797_);
v___x_802_ = lean_string_append(v___x_800_, v___x_801_);
lean_dec_ref(v___x_801_);
return v___x_802_;
}
}
}
LEAN_EXPORT uint8_t l_Lake_BuildKey_quickCmp(lean_object* v_k_823_, lean_object* v_k_x27_824_){
_start:
{
switch(lean_obj_tag(v_k_823_))
{
case 0:
{
if (lean_obj_tag(v_k_x27_824_) == 0)
{
lean_object* v_module_825_; lean_object* v_module_826_; uint8_t v___x_827_; 
v_module_825_ = lean_ctor_get(v_k_823_, 0);
v_module_826_ = lean_ctor_get(v_k_x27_824_, 0);
v___x_827_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_module_825_, v_module_826_);
return v___x_827_;
}
else
{
uint8_t v___x_828_; 
v___x_828_ = 0;
return v___x_828_;
}
}
case 1:
{
switch(lean_obj_tag(v_k_x27_824_))
{
case 0:
{
uint8_t v___x_829_; 
v___x_829_ = 2;
return v___x_829_;
}
case 1:
{
lean_object* v_package_830_; lean_object* v_package_831_; uint8_t v___x_832_; 
v_package_830_ = lean_ctor_get(v_k_823_, 0);
v_package_831_ = lean_ctor_get(v_k_x27_824_, 0);
v___x_832_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_package_830_, v_package_831_);
return v___x_832_;
}
default: 
{
uint8_t v___x_833_; 
v___x_833_ = 0;
return v___x_833_;
}
}
}
case 2:
{
switch(lean_obj_tag(v_k_x27_824_))
{
case 4:
{
uint8_t v___x_834_; 
v___x_834_ = 0;
return v___x_834_;
}
case 3:
{
uint8_t v___x_835_; 
v___x_835_ = 0;
return v___x_835_;
}
case 2:
{
lean_object* v_package_836_; lean_object* v_module_837_; lean_object* v_package_838_; lean_object* v_module_839_; uint8_t v___x_840_; 
v_package_836_ = lean_ctor_get(v_k_823_, 0);
v_module_837_ = lean_ctor_get(v_k_823_, 1);
v_package_838_ = lean_ctor_get(v_k_x27_824_, 0);
v_module_839_ = lean_ctor_get(v_k_x27_824_, 1);
v___x_840_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_module_837_, v_module_839_);
if (v___x_840_ == 1)
{
uint8_t v___x_841_; 
v___x_841_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_package_836_, v_package_838_);
return v___x_841_;
}
else
{
return v___x_840_;
}
}
default: 
{
uint8_t v___x_842_; 
v___x_842_ = 2;
return v___x_842_;
}
}
}
case 3:
{
switch(lean_obj_tag(v_k_x27_824_))
{
case 4:
{
uint8_t v___x_843_; 
v___x_843_ = 0;
return v___x_843_;
}
case 3:
{
lean_object* v_package_844_; lean_object* v_target_845_; lean_object* v_package_846_; lean_object* v_target_847_; uint8_t v___x_848_; 
v_package_844_ = lean_ctor_get(v_k_823_, 0);
v_target_845_ = lean_ctor_get(v_k_823_, 1);
v_package_846_ = lean_ctor_get(v_k_x27_824_, 0);
v_target_847_ = lean_ctor_get(v_k_x27_824_, 1);
v___x_848_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_package_844_, v_package_846_);
if (v___x_848_ == 1)
{
uint8_t v___x_849_; 
v___x_849_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_target_845_, v_target_847_);
return v___x_849_;
}
else
{
return v___x_848_;
}
}
default: 
{
uint8_t v___x_850_; 
v___x_850_ = 2;
return v___x_850_;
}
}
}
default: 
{
if (lean_obj_tag(v_k_x27_824_) == 4)
{
lean_object* v_target_851_; lean_object* v_facet_852_; lean_object* v_target_853_; lean_object* v_facet_854_; uint8_t v___x_855_; 
v_target_851_ = lean_ctor_get(v_k_823_, 0);
v_facet_852_ = lean_ctor_get(v_k_823_, 1);
v_target_853_ = lean_ctor_get(v_k_x27_824_, 0);
v_facet_854_ = lean_ctor_get(v_k_x27_824_, 1);
v___x_855_ = l_Lake_BuildKey_quickCmp(v_target_851_, v_target_853_);
if (v___x_855_ == 1)
{
uint8_t v___x_856_; 
v___x_856_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_facet_852_, v_facet_854_);
return v___x_856_;
}
else
{
return v___x_855_;
}
}
else
{
uint8_t v___x_857_; 
v___x_857_ = 2;
return v___x_857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_quickCmp___boxed(lean_object* v_k_858_, lean_object* v_k_x27_859_){
_start:
{
uint8_t v_res_860_; lean_object* v_r_861_; 
v_res_860_ = l_Lake_BuildKey_quickCmp(v_k_858_, v_k_x27_859_);
lean_dec_ref(v_k_x27_859_);
lean_dec_ref(v_k_858_);
v_r_861_ = lean_box(v_res_860_);
return v_r_861_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_instReprBuildKey_repr_match__1_splitter___redArg(lean_object* v_x_862_, lean_object* v_h__1_863_, lean_object* v_h__2_864_, lean_object* v_h__3_865_, lean_object* v_h__4_866_, lean_object* v_h__5_867_){
_start:
{
switch(lean_obj_tag(v_x_862_))
{
case 0:
{
lean_object* v_module_868_; lean_object* v___x_869_; 
lean_dec(v_h__5_867_);
lean_dec(v_h__4_866_);
lean_dec(v_h__3_865_);
lean_dec(v_h__2_864_);
v_module_868_ = lean_ctor_get(v_x_862_, 0);
lean_inc(v_module_868_);
lean_dec_ref_known(v_x_862_, 1);
v___x_869_ = lean_apply_1(v_h__1_863_, v_module_868_);
return v___x_869_;
}
case 1:
{
lean_object* v_package_870_; lean_object* v___x_871_; 
lean_dec(v_h__5_867_);
lean_dec(v_h__4_866_);
lean_dec(v_h__3_865_);
lean_dec(v_h__1_863_);
v_package_870_ = lean_ctor_get(v_x_862_, 0);
lean_inc(v_package_870_);
lean_dec_ref_known(v_x_862_, 1);
v___x_871_ = lean_apply_1(v_h__2_864_, v_package_870_);
return v___x_871_;
}
case 2:
{
lean_object* v_package_872_; lean_object* v_module_873_; lean_object* v___x_874_; 
lean_dec(v_h__5_867_);
lean_dec(v_h__4_866_);
lean_dec(v_h__2_864_);
lean_dec(v_h__1_863_);
v_package_872_ = lean_ctor_get(v_x_862_, 0);
lean_inc(v_package_872_);
v_module_873_ = lean_ctor_get(v_x_862_, 1);
lean_inc(v_module_873_);
lean_dec_ref_known(v_x_862_, 2);
v___x_874_ = lean_apply_2(v_h__3_865_, v_package_872_, v_module_873_);
return v___x_874_;
}
case 3:
{
lean_object* v_package_875_; lean_object* v_target_876_; lean_object* v___x_877_; 
lean_dec(v_h__5_867_);
lean_dec(v_h__3_865_);
lean_dec(v_h__2_864_);
lean_dec(v_h__1_863_);
v_package_875_ = lean_ctor_get(v_x_862_, 0);
lean_inc(v_package_875_);
v_target_876_ = lean_ctor_get(v_x_862_, 1);
lean_inc(v_target_876_);
lean_dec_ref_known(v_x_862_, 2);
v___x_877_ = lean_apply_2(v_h__4_866_, v_package_875_, v_target_876_);
return v___x_877_;
}
default: 
{
lean_object* v_target_878_; lean_object* v_facet_879_; lean_object* v___x_880_; 
lean_dec(v_h__4_866_);
lean_dec(v_h__3_865_);
lean_dec(v_h__2_864_);
lean_dec(v_h__1_863_);
v_target_878_ = lean_ctor_get(v_x_862_, 0);
lean_inc_ref(v_target_878_);
v_facet_879_ = lean_ctor_get(v_x_862_, 1);
lean_inc(v_facet_879_);
lean_dec_ref_known(v_x_862_, 2);
v___x_880_ = lean_apply_2(v_h__5_867_, v_target_878_, v_facet_879_);
return v___x_880_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_instReprBuildKey_repr_match__1_splitter(lean_object* v_motive_881_, lean_object* v_x_882_, lean_object* v_h__1_883_, lean_object* v_h__2_884_, lean_object* v_h__3_885_, lean_object* v_h__4_886_, lean_object* v_h__5_887_){
_start:
{
switch(lean_obj_tag(v_x_882_))
{
case 0:
{
lean_object* v_module_888_; lean_object* v___x_889_; 
lean_dec(v_h__5_887_);
lean_dec(v_h__4_886_);
lean_dec(v_h__3_885_);
lean_dec(v_h__2_884_);
v_module_888_ = lean_ctor_get(v_x_882_, 0);
lean_inc(v_module_888_);
lean_dec_ref_known(v_x_882_, 1);
v___x_889_ = lean_apply_1(v_h__1_883_, v_module_888_);
return v___x_889_;
}
case 1:
{
lean_object* v_package_890_; lean_object* v___x_891_; 
lean_dec(v_h__5_887_);
lean_dec(v_h__4_886_);
lean_dec(v_h__3_885_);
lean_dec(v_h__1_883_);
v_package_890_ = lean_ctor_get(v_x_882_, 0);
lean_inc(v_package_890_);
lean_dec_ref_known(v_x_882_, 1);
v___x_891_ = lean_apply_1(v_h__2_884_, v_package_890_);
return v___x_891_;
}
case 2:
{
lean_object* v_package_892_; lean_object* v_module_893_; lean_object* v___x_894_; 
lean_dec(v_h__5_887_);
lean_dec(v_h__4_886_);
lean_dec(v_h__2_884_);
lean_dec(v_h__1_883_);
v_package_892_ = lean_ctor_get(v_x_882_, 0);
lean_inc(v_package_892_);
v_module_893_ = lean_ctor_get(v_x_882_, 1);
lean_inc(v_module_893_);
lean_dec_ref_known(v_x_882_, 2);
v___x_894_ = lean_apply_2(v_h__3_885_, v_package_892_, v_module_893_);
return v___x_894_;
}
case 3:
{
lean_object* v_package_895_; lean_object* v_target_896_; lean_object* v___x_897_; 
lean_dec(v_h__5_887_);
lean_dec(v_h__3_885_);
lean_dec(v_h__2_884_);
lean_dec(v_h__1_883_);
v_package_895_ = lean_ctor_get(v_x_882_, 0);
lean_inc(v_package_895_);
v_target_896_ = lean_ctor_get(v_x_882_, 1);
lean_inc(v_target_896_);
lean_dec_ref_known(v_x_882_, 2);
v___x_897_ = lean_apply_2(v_h__4_886_, v_package_895_, v_target_896_);
return v___x_897_;
}
default: 
{
lean_object* v_target_898_; lean_object* v_facet_899_; lean_object* v___x_900_; 
lean_dec(v_h__4_886_);
lean_dec(v_h__3_885_);
lean_dec(v_h__2_884_);
lean_dec(v_h__1_883_);
v_target_898_ = lean_ctor_get(v_x_882_, 0);
lean_inc_ref(v_target_898_);
v_facet_899_ = lean_ctor_get(v_x_882_, 1);
lean_inc(v_facet_899_);
lean_dec_ref_known(v_x_882_, 2);
v___x_900_ = lean_apply_2(v_h__5_887_, v_target_898_, v_facet_899_);
return v___x_900_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__1_splitter___redArg(lean_object* v_k_x27_901_, lean_object* v_h__1_902_, lean_object* v_h__2_903_){
_start:
{
if (lean_obj_tag(v_k_x27_901_) == 0)
{
lean_object* v_module_904_; lean_object* v___x_905_; 
lean_dec(v_h__2_903_);
v_module_904_ = lean_ctor_get(v_k_x27_901_, 0);
lean_inc(v_module_904_);
lean_dec_ref_known(v_k_x27_901_, 1);
v___x_905_ = lean_apply_1(v_h__1_902_, v_module_904_);
return v___x_905_;
}
else
{
lean_object* v___x_906_; 
lean_dec(v_h__1_902_);
v___x_906_ = lean_apply_2(v_h__2_903_, v_k_x27_901_, lean_box(0));
return v___x_906_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__1_splitter(lean_object* v_motive_907_, lean_object* v_k_x27_908_, lean_object* v_h__1_909_, lean_object* v_h__2_910_){
_start:
{
if (lean_obj_tag(v_k_x27_908_) == 0)
{
lean_object* v_module_911_; lean_object* v___x_912_; 
lean_dec(v_h__2_910_);
v_module_911_ = lean_ctor_get(v_k_x27_908_, 0);
lean_inc(v_module_911_);
lean_dec_ref_known(v_k_x27_908_, 1);
v___x_912_ = lean_apply_1(v_h__1_909_, v_module_911_);
return v___x_912_;
}
else
{
lean_object* v___x_913_; 
lean_dec(v_h__1_909_);
v___x_913_ = lean_apply_2(v_h__2_910_, v_k_x27_908_, lean_box(0));
return v___x_913_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__4_splitter___redArg(lean_object* v_k_x27_914_, lean_object* v_h__1_915_, lean_object* v_h__2_916_, lean_object* v_h__3_917_){
_start:
{
switch(lean_obj_tag(v_k_x27_914_))
{
case 0:
{
lean_object* v_module_918_; lean_object* v___x_919_; 
lean_dec(v_h__3_917_);
lean_dec(v_h__2_916_);
v_module_918_ = lean_ctor_get(v_k_x27_914_, 0);
lean_inc(v_module_918_);
lean_dec_ref_known(v_k_x27_914_, 1);
v___x_919_ = lean_apply_1(v_h__1_915_, v_module_918_);
return v___x_919_;
}
case 1:
{
lean_object* v_package_920_; lean_object* v___x_921_; 
lean_dec(v_h__3_917_);
lean_dec(v_h__1_915_);
v_package_920_ = lean_ctor_get(v_k_x27_914_, 0);
lean_inc(v_package_920_);
lean_dec_ref_known(v_k_x27_914_, 1);
v___x_921_ = lean_apply_1(v_h__2_916_, v_package_920_);
return v___x_921_;
}
default: 
{
lean_object* v___x_922_; 
lean_dec(v_h__2_916_);
lean_dec(v_h__1_915_);
v___x_922_ = lean_apply_3(v_h__3_917_, v_k_x27_914_, lean_box(0), lean_box(0));
return v___x_922_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__4_splitter(lean_object* v_motive_923_, lean_object* v_k_x27_924_, lean_object* v_h__1_925_, lean_object* v_h__2_926_, lean_object* v_h__3_927_){
_start:
{
switch(lean_obj_tag(v_k_x27_924_))
{
case 0:
{
lean_object* v_module_928_; lean_object* v___x_929_; 
lean_dec(v_h__3_927_);
lean_dec(v_h__2_926_);
v_module_928_ = lean_ctor_get(v_k_x27_924_, 0);
lean_inc(v_module_928_);
lean_dec_ref_known(v_k_x27_924_, 1);
v___x_929_ = lean_apply_1(v_h__1_925_, v_module_928_);
return v___x_929_;
}
case 1:
{
lean_object* v_package_930_; lean_object* v___x_931_; 
lean_dec(v_h__3_927_);
lean_dec(v_h__1_925_);
v_package_930_ = lean_ctor_get(v_k_x27_924_, 0);
lean_inc(v_package_930_);
lean_dec_ref_known(v_k_x27_924_, 1);
v___x_931_ = lean_apply_1(v_h__2_926_, v_package_930_);
return v___x_931_;
}
default: 
{
lean_object* v___x_932_; 
lean_dec(v_h__2_926_);
lean_dec(v_h__1_925_);
v___x_932_ = lean_apply_3(v_h__3_927_, v_k_x27_924_, lean_box(0), lean_box(0));
return v___x_932_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__10_splitter___redArg(lean_object* v_k_x27_933_, lean_object* v_h__1_934_, lean_object* v_h__2_935_, lean_object* v_h__3_936_, lean_object* v_h__4_937_){
_start:
{
switch(lean_obj_tag(v_k_x27_933_))
{
case 4:
{
lean_object* v_target_938_; lean_object* v_facet_939_; lean_object* v___x_940_; 
lean_dec(v_h__4_937_);
lean_dec(v_h__3_936_);
lean_dec(v_h__2_935_);
v_target_938_ = lean_ctor_get(v_k_x27_933_, 0);
lean_inc_ref(v_target_938_);
v_facet_939_ = lean_ctor_get(v_k_x27_933_, 1);
lean_inc(v_facet_939_);
lean_dec_ref_known(v_k_x27_933_, 2);
v___x_940_ = lean_apply_2(v_h__1_934_, v_target_938_, v_facet_939_);
return v___x_940_;
}
case 3:
{
lean_object* v_package_941_; lean_object* v_target_942_; lean_object* v___x_943_; 
lean_dec(v_h__4_937_);
lean_dec(v_h__3_936_);
lean_dec(v_h__1_934_);
v_package_941_ = lean_ctor_get(v_k_x27_933_, 0);
lean_inc(v_package_941_);
v_target_942_ = lean_ctor_get(v_k_x27_933_, 1);
lean_inc(v_target_942_);
lean_dec_ref_known(v_k_x27_933_, 2);
v___x_943_ = lean_apply_2(v_h__2_935_, v_package_941_, v_target_942_);
return v___x_943_;
}
case 2:
{
lean_object* v_package_944_; lean_object* v_module_945_; lean_object* v___x_946_; 
lean_dec(v_h__4_937_);
lean_dec(v_h__2_935_);
lean_dec(v_h__1_934_);
v_package_944_ = lean_ctor_get(v_k_x27_933_, 0);
lean_inc(v_package_944_);
v_module_945_ = lean_ctor_get(v_k_x27_933_, 1);
lean_inc(v_module_945_);
lean_dec_ref_known(v_k_x27_933_, 2);
v___x_946_ = lean_apply_2(v_h__3_936_, v_package_944_, v_module_945_);
return v___x_946_;
}
default: 
{
lean_object* v___x_947_; 
lean_dec(v_h__3_936_);
lean_dec(v_h__2_935_);
lean_dec(v_h__1_934_);
v___x_947_ = lean_apply_4(v_h__4_937_, v_k_x27_933_, lean_box(0), lean_box(0), lean_box(0));
return v___x_947_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__10_splitter(lean_object* v_motive_948_, lean_object* v_k_x27_949_, lean_object* v_h__1_950_, lean_object* v_h__2_951_, lean_object* v_h__3_952_, lean_object* v_h__4_953_){
_start:
{
switch(lean_obj_tag(v_k_x27_949_))
{
case 4:
{
lean_object* v_target_954_; lean_object* v_facet_955_; lean_object* v___x_956_; 
lean_dec(v_h__4_953_);
lean_dec(v_h__3_952_);
lean_dec(v_h__2_951_);
v_target_954_ = lean_ctor_get(v_k_x27_949_, 0);
lean_inc_ref(v_target_954_);
v_facet_955_ = lean_ctor_get(v_k_x27_949_, 1);
lean_inc(v_facet_955_);
lean_dec_ref_known(v_k_x27_949_, 2);
v___x_956_ = lean_apply_2(v_h__1_950_, v_target_954_, v_facet_955_);
return v___x_956_;
}
case 3:
{
lean_object* v_package_957_; lean_object* v_target_958_; lean_object* v___x_959_; 
lean_dec(v_h__4_953_);
lean_dec(v_h__3_952_);
lean_dec(v_h__1_950_);
v_package_957_ = lean_ctor_get(v_k_x27_949_, 0);
lean_inc(v_package_957_);
v_target_958_ = lean_ctor_get(v_k_x27_949_, 1);
lean_inc(v_target_958_);
lean_dec_ref_known(v_k_x27_949_, 2);
v___x_959_ = lean_apply_2(v_h__2_951_, v_package_957_, v_target_958_);
return v___x_959_;
}
case 2:
{
lean_object* v_package_960_; lean_object* v_module_961_; lean_object* v___x_962_; 
lean_dec(v_h__4_953_);
lean_dec(v_h__2_951_);
lean_dec(v_h__1_950_);
v_package_960_ = lean_ctor_get(v_k_x27_949_, 0);
lean_inc(v_package_960_);
v_module_961_ = lean_ctor_get(v_k_x27_949_, 1);
lean_inc(v_module_961_);
lean_dec_ref_known(v_k_x27_949_, 2);
v___x_962_ = lean_apply_2(v_h__3_952_, v_package_960_, v_module_961_);
return v___x_962_;
}
default: 
{
lean_object* v___x_963_; 
lean_dec(v_h__3_952_);
lean_dec(v_h__2_951_);
lean_dec(v_h__1_950_);
v___x_963_ = lean_apply_4(v_h__4_953_, v_k_x27_949_, lean_box(0), lean_box(0), lean_box(0));
return v___x_963_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___redArg(uint8_t v_x_964_, lean_object* v_h__1_965_, lean_object* v_h__2_966_){
_start:
{
if (v_x_964_ == 1)
{
lean_object* v___x_967_; lean_object* v___x_968_; 
lean_dec(v_h__2_966_);
v___x_967_ = lean_box(0);
v___x_968_ = lean_apply_1(v_h__1_965_, v___x_967_);
return v___x_968_;
}
else
{
lean_object* v___x_969_; lean_object* v___x_970_; 
lean_dec(v_h__1_965_);
v___x_969_ = lean_box(v_x_964_);
v___x_970_ = lean_apply_2(v_h__2_966_, v___x_969_, lean_box(0));
return v___x_970_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___redArg___boxed(lean_object* v_x_971_, lean_object* v_h__1_972_, lean_object* v_h__2_973_){
_start:
{
uint8_t v_x_13__boxed_974_; lean_object* v_res_975_; 
v_x_13__boxed_974_ = lean_unbox(v_x_971_);
v_res_975_ = l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___redArg(v_x_13__boxed_974_, v_h__1_972_, v_h__2_973_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter(lean_object* v_motive_976_, uint8_t v_x_977_, lean_object* v_h__1_978_, lean_object* v_h__2_979_){
_start:
{
if (v_x_977_ == 1)
{
lean_object* v___x_980_; lean_object* v___x_981_; 
lean_dec(v_h__2_979_);
v___x_980_ = lean_box(0);
v___x_981_ = lean_apply_1(v_h__1_978_, v___x_980_);
return v___x_981_;
}
else
{
lean_object* v___x_982_; lean_object* v___x_983_; 
lean_dec(v_h__1_978_);
v___x_982_ = lean_box(v_x_977_);
v___x_983_ = lean_apply_2(v_h__2_979_, v___x_982_, lean_box(0));
return v___x_983_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter___boxed(lean_object* v_motive_984_, lean_object* v_x_985_, lean_object* v_h__1_986_, lean_object* v_h__2_987_){
_start:
{
uint8_t v_x_24__boxed_988_; lean_object* v_res_989_; 
v_x_24__boxed_988_ = lean_unbox(v_x_985_);
v_res_989_ = l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__7_splitter(v_motive_984_, v_x_24__boxed_988_, v_h__1_986_, v_h__2_987_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__13_splitter___redArg(lean_object* v_k_x27_990_, lean_object* v_h__1_991_, lean_object* v_h__2_992_, lean_object* v_h__3_993_){
_start:
{
switch(lean_obj_tag(v_k_x27_990_))
{
case 4:
{
lean_object* v_target_994_; lean_object* v_facet_995_; lean_object* v___x_996_; 
lean_dec(v_h__3_993_);
lean_dec(v_h__2_992_);
v_target_994_ = lean_ctor_get(v_k_x27_990_, 0);
lean_inc_ref(v_target_994_);
v_facet_995_ = lean_ctor_get(v_k_x27_990_, 1);
lean_inc(v_facet_995_);
lean_dec_ref_known(v_k_x27_990_, 2);
v___x_996_ = lean_apply_2(v_h__1_991_, v_target_994_, v_facet_995_);
return v___x_996_;
}
case 3:
{
lean_object* v_package_997_; lean_object* v_target_998_; lean_object* v___x_999_; 
lean_dec(v_h__3_993_);
lean_dec(v_h__1_991_);
v_package_997_ = lean_ctor_get(v_k_x27_990_, 0);
lean_inc(v_package_997_);
v_target_998_ = lean_ctor_get(v_k_x27_990_, 1);
lean_inc(v_target_998_);
lean_dec_ref_known(v_k_x27_990_, 2);
v___x_999_ = lean_apply_2(v_h__2_992_, v_package_997_, v_target_998_);
return v___x_999_;
}
default: 
{
lean_object* v___x_1000_; 
lean_dec(v_h__2_992_);
lean_dec(v_h__1_991_);
v___x_1000_ = lean_apply_3(v_h__3_993_, v_k_x27_990_, lean_box(0), lean_box(0));
return v___x_1000_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__13_splitter(lean_object* v_motive_1001_, lean_object* v_k_x27_1002_, lean_object* v_h__1_1003_, lean_object* v_h__2_1004_, lean_object* v_h__3_1005_){
_start:
{
switch(lean_obj_tag(v_k_x27_1002_))
{
case 4:
{
lean_object* v_target_1006_; lean_object* v_facet_1007_; lean_object* v___x_1008_; 
lean_dec(v_h__3_1005_);
lean_dec(v_h__2_1004_);
v_target_1006_ = lean_ctor_get(v_k_x27_1002_, 0);
lean_inc_ref(v_target_1006_);
v_facet_1007_ = lean_ctor_get(v_k_x27_1002_, 1);
lean_inc(v_facet_1007_);
lean_dec_ref_known(v_k_x27_1002_, 2);
v___x_1008_ = lean_apply_2(v_h__1_1003_, v_target_1006_, v_facet_1007_);
return v___x_1008_;
}
case 3:
{
lean_object* v_package_1009_; lean_object* v_target_1010_; lean_object* v___x_1011_; 
lean_dec(v_h__3_1005_);
lean_dec(v_h__1_1003_);
v_package_1009_ = lean_ctor_get(v_k_x27_1002_, 0);
lean_inc(v_package_1009_);
v_target_1010_ = lean_ctor_get(v_k_x27_1002_, 1);
lean_inc(v_target_1010_);
lean_dec_ref_known(v_k_x27_1002_, 2);
v___x_1011_ = lean_apply_2(v_h__2_1004_, v_package_1009_, v_target_1010_);
return v___x_1011_;
}
default: 
{
lean_object* v___x_1012_; 
lean_dec(v_h__2_1004_);
lean_dec(v_h__1_1003_);
v___x_1012_ = lean_apply_3(v_h__3_1005_, v_k_x27_1002_, lean_box(0), lean_box(0));
return v___x_1012_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__16_splitter___redArg(lean_object* v_k_x27_1013_, lean_object* v_h__1_1014_, lean_object* v_h__2_1015_){
_start:
{
if (lean_obj_tag(v_k_x27_1013_) == 4)
{
lean_object* v_target_1016_; lean_object* v_facet_1017_; lean_object* v___x_1018_; 
lean_dec(v_h__2_1015_);
v_target_1016_ = lean_ctor_get(v_k_x27_1013_, 0);
lean_inc_ref(v_target_1016_);
v_facet_1017_ = lean_ctor_get(v_k_x27_1013_, 1);
lean_inc(v_facet_1017_);
lean_dec_ref_known(v_k_x27_1013_, 2);
v___x_1018_ = lean_apply_2(v_h__1_1014_, v_target_1016_, v_facet_1017_);
return v___x_1018_;
}
else
{
lean_object* v___x_1019_; 
lean_dec(v_h__1_1014_);
v___x_1019_ = lean_apply_2(v_h__2_1015_, v_k_x27_1013_, lean_box(0));
return v___x_1019_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Key_0__Lake_BuildKey_quickCmp_match__16_splitter(lean_object* v_motive_1020_, lean_object* v_k_x27_1021_, lean_object* v_h__1_1022_, lean_object* v_h__2_1023_){
_start:
{
if (lean_obj_tag(v_k_x27_1021_) == 4)
{
lean_object* v_target_1024_; lean_object* v_facet_1025_; lean_object* v___x_1026_; 
lean_dec(v_h__2_1023_);
v_target_1024_ = lean_ctor_get(v_k_x27_1021_, 0);
lean_inc_ref(v_target_1024_);
v_facet_1025_ = lean_ctor_get(v_k_x27_1021_, 1);
lean_inc(v_facet_1025_);
lean_dec_ref_known(v_k_x27_1021_, 2);
v___x_1026_ = lean_apply_2(v_h__1_1022_, v_target_1024_, v_facet_1025_);
return v___x_1026_;
}
else
{
lean_object* v___x_1027_; 
lean_dec(v_h__1_1022_);
v___x_1027_ = lean_apply_2(v_h__2_1023_, v_k_x27_1021_, lean_box(0));
return v___x_1027_;
}
}
}
lean_object* runtime_initialize_Init_Data_Order(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Name(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Key(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Init_Data_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Key(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Order(uint8_t builtin);
lean_object* initialize_Lake_Util_Name(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Key(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Key(builtin);
}
#ifdef __cplusplus
}
#endif
