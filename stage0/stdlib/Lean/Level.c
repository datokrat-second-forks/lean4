// Lean compiler output
// Module: Lean.Level
// Imports: public import Init.Data.Array.QSort public import Lean.Data.PersistentHashSet public import Lean.Hygiene public import Init.Data.Option.Coe import Init.Data.Nat.Internal.Linear
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
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint32_t lean_uint64_to_uint32(uint64_t);
uint64_t lean_uint32_to_uint64(uint32_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
lean_object* lean_uint32_to_nat(uint32_t);
uint64_t lean_uint64_land(uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lean_Name_reprPrec___boxed(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_imax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_imax___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Level_instInhabitedData_default;
LEAN_EXPORT uint64_t l_Lean_Level_instInhabitedData;
LEAN_EXPORT uint8_t l_Lean_Level_instBEqData_beq(uint64_t, uint64_t);
LEAN_EXPORT lean_object* l_Lean_Level_instBEqData_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Level_instBEqData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_instBEqData_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Level_instBEqData___closed__0 = (const lean_object*)&l_Lean_Level_instBEqData___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Level_instBEqData = (const lean_object*)&l_Lean_Level_instBEqData___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Level_Data_hash(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Level_Data_hash___boxed(lean_object*);
LEAN_EXPORT uint32_t l_Lean_Level_Data_depth(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Level_Data_depth___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_Data_hasMVar(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Level_Data_hasMVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_Data_hasParam(uint64_t);
LEAN_EXPORT lean_object* l_Lean_Level_Data_hasParam___boxed(lean_object*);
uint64_t lean_level_mk_data(uint64_t, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Level_mkData___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instReprData___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_instReprData___lam__0___closed__0 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__0_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " (hasParam := "};
static const lean_object* l_Lean_instReprData___lam__0___closed__1 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__1_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_instReprData___lam__0___closed__2 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__2_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_instReprData___lam__0___closed__3 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__3_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " (hasMVar := "};
static const lean_object* l_Lean_instReprData___lam__0___closed__4 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__4_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Level.mkData "};
static const lean_object* l_Lean_instReprData___lam__0___closed__5 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__5_value;
static const lean_string_object l_Lean_instReprData___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " (depth := "};
static const lean_object* l_Lean_instReprData___lam__0___closed__6 = (const lean_object*)&l_Lean_instReprData___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_instReprData___lam__0(uint64_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprData___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprData___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprData___closed__0 = (const lean_object*)&l_Lean_instReprData___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprData = (const lean_object*)&l_Lean_instReprData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLevelMVarId_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLevelMVarId;
LEAN_EXPORT uint8_t l_Lean_instBEqLevelMVarId_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instBEqLevelMVarId_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqLevelMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqLevelMVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqLevelMVarId___closed__0 = (const lean_object*)&l_Lean_instBEqLevelMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqLevelMVarId = (const lean_object*)&l_Lean_instBEqLevelMVarId___closed__0_value;
static lean_once_cell_t l_Lean_instHashableLevelMVarId_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_instHashableLevelMVarId_hash___closed__0;
LEAN_EXPORT uint64_t l_Lean_instHashableLevelMVarId_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instHashableLevelMVarId_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_instHashableLevelMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableLevelMVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instHashableLevelMVarId___closed__0 = (const lean_object*)&l_Lean_instHashableLevelMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instHashableLevelMVarId = (const lean_object*)&l_Lean_instHashableLevelMVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprLevelMVarId_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_instReprLevelMVarId_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__0 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_instReprLevelMVarId_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__1 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__2 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__3 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_instReprLevelMVarId_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__4 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__5 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__3_value),((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__6 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instReprLevelMVarId_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__7;
static const lean_string_object l_Lean_instReprLevelMVarId_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__8 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lean_instReprLevelMVarId_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__9;
static lean_once_cell_t l_Lean_instReprLevelMVarId_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__10;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__11 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_instReprLevelMVarId_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_instReprLevelMVarId_repr___redArg___closed__12 = (const lean_object*)&l_Lean_instReprLevelMVarId_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLevelMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLevelMVarId_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLevelMVarId___closed__0 = (const lean_object*)&l_Lean_instReprLevelMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLevelMVarId = (const lean_object*)&l_Lean_instReprLevelMVarId___closed__0_value;
static const lean_closure_object l_Lean_instReprLMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_reprPrec___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLMVarId___closed__0 = (const lean_object*)&l_Lean_instReprLMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLMVarId = (const lean_object*)&l_Lean_instReprLMVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdSet_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdSet;
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdSet;
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LMVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_insert(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LMVarIdSet_insert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LMVarIdSet_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_size___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_LMVarIdSet_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_LMVarIdSet_toList_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_LMVarIdSet_toList_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_toList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_toList___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LMVarIdSet_toArray_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LMVarIdSet_toArray_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___redArg();
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LMVarIdMap_contains___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_contains___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_LMVarIdMap_contains(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_contains___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_get_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_get_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_get_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_get_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_zero_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_zero_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_succ_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_succ_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_max_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_max_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_imax_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_imax_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_param_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_param_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_mvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_mvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_zero___override;
static lean_once_cell_t l_Lean_Level_data___override___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Level_data___override___closed__0;
LEAN_EXPORT uint64_t l_Lean_Level_data___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_data___override___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_succ___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_max___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_imax___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_param___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_mvar___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedLevel_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedLevel;
static const lean_string_object l_Lean_instReprLevel_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Level.zero"};
static const lean_object* l_Lean_instReprLevel_repr___closed__0 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__1 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__1_value;
static lean_once_cell_t l_Lean_instReprLevel_repr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLevel_repr___closed__2;
static lean_once_cell_t l_Lean_instReprLevel_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprLevel_repr___closed__3;
static const lean_string_object l_Lean_instReprLevel_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Level.succ"};
static const lean_object* l_Lean_instReprLevel_repr___closed__4 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__5 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__5_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLevel_repr___closed__6 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__6_value;
static const lean_string_object l_Lean_instReprLevel_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Level.max"};
static const lean_object* l_Lean_instReprLevel_repr___closed__7 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__7_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__7_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__8 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__8_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__8_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLevel_repr___closed__9 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__9_value;
static const lean_string_object l_Lean_instReprLevel_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Level.imax"};
static const lean_object* l_Lean_instReprLevel_repr___closed__10 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__10_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__10_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__11 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__11_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__11_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLevel_repr___closed__12 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__12_value;
static const lean_string_object l_Lean_instReprLevel_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Level.param"};
static const lean_object* l_Lean_instReprLevel_repr___closed__13 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__13_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__13_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__14 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__14_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLevel_repr___closed__15 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__15_value;
static const lean_string_object l_Lean_instReprLevel_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Lean.Level.mvar"};
static const lean_object* l_Lean_instReprLevel_repr___closed__16 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__16_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__16_value)}};
static const lean_object* l_Lean_instReprLevel_repr___closed__17 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__17_value;
static const lean_ctor_object l_Lean_instReprLevel_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_instReprLevel_repr___closed__17_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instReprLevel_repr___closed__18 = (const lean_object*)&l_Lean_instReprLevel_repr___closed__18_value;
LEAN_EXPORT lean_object* l_Lean_instReprLevel_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprLevel_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprLevel_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprLevel___closed__0 = (const lean_object*)&l_Lean_instReprLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprLevel = (const lean_object*)&l_Lean_instReprLevel___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Level_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Level_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Level_instHashable___closed__0 = (const lean_object*)&l_Lean_Level_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Level_instHashable = (const lean_object*)&l_Lean_Level_instHashable___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Level_depth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_depth___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_hasMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hasMVar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_hasParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hasParam___boxed(lean_object*);
LEAN_EXPORT uint32_t lean_level_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hashEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_level_has_mvar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hasMVarEx___boxed(lean_object*);
LEAN_EXPORT uint8_t lean_level_has_param(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_hasParamEx___boxed(lean_object*);
LEAN_EXPORT uint32_t lean_level_depth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_depthEx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_levelZero;
LEAN_EXPORT lean_object* l_Lean_mkLevelMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelSucc(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelMax(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelIMax(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Level_one___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_one___closed__0;
LEAN_EXPORT lean_object* l_Lean_Level_one;
LEAN_EXPORT lean_object* l_Lean_levelOne;
LEAN_EXPORT lean_object* l_Lean_mkLevelZeroEx___redArg();
LEAN_EXPORT lean_object* l_Lean_mkLevelZeroEx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lean_level_mk_zero(lean_object*);
LEAN_EXPORT lean_object* lean_level_mk_succ(lean_object*);
LEAN_EXPORT lean_object* lean_level_mk_mvar(lean_object*);
LEAN_EXPORT lean_object* lean_level_mk_param(lean_object*);
LEAN_EXPORT lean_object* lean_level_mk_max(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_level_mk_imax(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isZero(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isZero___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isSucc(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isSucc___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isMax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isMax___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isIMax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isIMax___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isMaxIMax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isMaxIMax___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isParam(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isParam___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isMVar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Level_mvarId_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Level_mvarId_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Lean.Level"};
static const lean_object* l_Lean_Level_mvarId_x21___closed__0 = (const lean_object*)&l_Lean_Level_mvarId_x21___closed__0_value;
static const lean_string_object l_Lean_Level_mvarId_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.Level.mvarId!"};
static const lean_object* l_Lean_Level_mvarId_x21___closed__1 = (const lean_object*)&l_Lean_Level_mvarId_x21___closed__1_value;
static const lean_string_object l_Lean_Level_mvarId_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "metavariable expected"};
static const lean_object* l_Lean_Level_mvarId_x21___closed__2 = (const lean_object*)&l_Lean_Level_mvarId_x21___closed__2_value;
static lean_once_cell_t l_Lean_Level_mvarId_x21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_mvarId_x21___closed__3;
LEAN_EXPORT lean_object* l_Lean_Level_mvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_mvarId_x21___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isNeverZero(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isNeverZero___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isAlwaysZero(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isAlwaysZero___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ofNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instOfNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instOfNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_addOffsetAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_addOffset(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isExplicit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isExplicit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getOffsetAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getOffsetAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getOffset(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getLevelOffset(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getLevelOffset___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_toNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_toNat___boxed(lean_object*);
uint8_t lean_level_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Level_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Level_instBEq___closed__0 = (const lean_object*)&l_Lean_Level_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Level_instBEq = (const lean_object*)&l_Lean_Level_instBEq___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Level_occurs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_occurs___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorToNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_ctorToNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_normLtAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_normLtAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_normLtAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_normLtAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_normLt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_normLt___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isAlreadyNormalizedCheap(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isAlreadyNormalizedCheap___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkIMaxAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_accMax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkMaxAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkMaxAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_skipExplicit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_skipExplicit___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Level_normalize_spec__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Level_normalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Level_normalize___closed__0 = (const lean_object*)&l_Lean_Level_normalize___closed__0_value;
static const lean_string_object l_Lean_Level_normalize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Level_normalize___closed__2 = (const lean_object*)&l_Lean_Level_normalize___closed__2_value;
static const lean_string_object l_Lean_Level_normalize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Level.normalize"};
static const lean_object* l_Lean_Level_normalize___closed__1 = (const lean_object*)&l_Lean_Level_normalize___closed__1_value;
static lean_once_cell_t l_Lean_Level_normalize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_normalize___closed__3;
LEAN_EXPORT lean_object* l_Lean_Level_normalize(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_normalize___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_isEquiv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_isEquiv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_dec(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_dec___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_leaf_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_leaf_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_num_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_num_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_offset_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_offset_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_maxNode_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_maxNode_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imaxNode_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imaxNode_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_succ(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_max(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imax(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Level_PP_toResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Level_PP_toResult___closed__0 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__0_value;
static const lean_string_object l_Lean_Level_PP_toResult___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Level_PP_toResult___closed__1 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__1_value;
static const lean_ctor_object l_Lean_Level_PP_toResult___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_toResult___closed__1_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l_Lean_Level_PP_toResult___closed__2 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__2_value;
static const lean_ctor_object l_Lean_Level_PP_toResult___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Level_PP_toResult___closed__2_value)}};
static const lean_object* l_Lean_Level_PP_toResult___closed__3 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__3_value;
static const lean_string_object l_Lean_Level_PP_toResult___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\?u"};
static const lean_object* l_Lean_Level_PP_toResult___closed__4 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__4_value;
static const lean_ctor_object l_Lean_Level_PP_toResult___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_toResult___closed__4_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 157, 98, 226, 186, 76, 191)}};
static const lean_object* l_Lean_Level_PP_toResult___closed__5 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__5_value;
static const lean_string_object l_Lean_Level_PP_toResult___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_Lean_Level_PP_toResult___closed__6 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__6_value;
static const lean_ctor_object l_Lean_Level_PP_toResult___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_toResult___closed__6_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_Lean_Level_PP_toResult___closed__7 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__7_value;
static const lean_string_object l_Lean_Level_PP_toResult___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "\?_mvar"};
static const lean_object* l_Lean_Level_PP_toResult___closed__8 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__8_value;
static const lean_ctor_object l_Lean_Level_PP_toResult___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_toResult___closed__8_value),LEAN_SCALAR_PTR_LITERAL(49, 72, 57, 220, 81, 200, 89, 8)}};
static const lean_object* l_Lean_Level_PP_toResult___closed__9 = (const lean_object*)&l_Lean_Level_PP_toResult___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Level_PP_toResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_toResult___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0_value;
static lean_once_cell_t l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1;
static lean_once_cell_t l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2;
static const lean_ctor_object l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0_value)}};
static const lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__3 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__3_value;
static const lean_ctor_object l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprData___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__4 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Level_PP_Result_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " + "};
static const lean_object* l_Lean_Level_PP_Result_format___closed__0 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__0_value;
static const lean_ctor_object l_Lean_Level_PP_Result_format___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_format___closed__0_value)}};
static const lean_object* l_Lean_Level_PP_Result_format___closed__1 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__1_value;
static const lean_string_object l_Lean_Level_PP_Result_format___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l_Lean_Level_PP_Result_format___closed__2 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__2_value;
static const lean_ctor_object l_Lean_Level_PP_Result_format___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_format___closed__2_value)}};
static const lean_object* l_Lean_Level_PP_Result_format___closed__3 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__3_value;
static const lean_string_object l_Lean_Level_PP_Result_format___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "imax"};
static const lean_object* l_Lean_Level_PP_Result_format___closed__4 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__4_value;
static const lean_ctor_object l_Lean_Level_PP_Result_format___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_format___closed__4_value)}};
static const lean_object* l_Lean_Level_PP_Result_format___closed__5 = (const lean_object*)&l_Lean_Level_PP_Result_format___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_format(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_Result_formatLst(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_format___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__0;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__4 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__4_value;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Level"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__3 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__3_value;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__2 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__2_value;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__1 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__1_value;
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__5_value_aux_0),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__5_value_aux_1),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__5_value_aux_2),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__4_value),LEAN_SCALAR_PTR_LITERAL(67, 200, 57, 231, 14, 244, 115, 229)}};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__5 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__5_value;
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__6;
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__7;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "addLit"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__8 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__8_value;
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__9_value_aux_0),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__9_value_aux_1),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__9_value_aux_2),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__8_value),LEAN_SCALAR_PTR_LITERAL(53, 243, 225, 2, 30, 243, 80, 174)}};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__9 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__9_value;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__10 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__10_value;
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__11_value_aux_0),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__11_value_aux_1),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__11_value_aux_2),((lean_object*)&l_Lean_Level_PP_Result_format___closed__2_value),LEAN_SCALAR_PTR_LITERAL(106, 181, 1, 145, 170, 142, 100, 97)}};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__11 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__11_value;
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__12;
static const lean_string_object l_Lean_Level_PP_Result_quote___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__13 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__13_value;
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__14 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__14_value;
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__15;
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__16_value_aux_0),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__16_value_aux_1),((lean_object*)&l_Lean_Level_PP_Result_quote___closed__3_value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Level_PP_Result_quote___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Level_PP_Result_quote___closed__16_value_aux_2),((lean_object*)&l_Lean_Level_PP_Result_format___closed__4_value),LEAN_SCALAR_PTR_LITERAL(124, 169, 176, 27, 219, 169, 119, 28)}};
static const lean_object* l_Lean_Level_PP_Result_quote___closed__16 = (const lean_object*)&l_Lean_Level_PP_Result_quote___closed__16_value;
static lean_once_cell_t l_Lean_Level_PP_Result_quote___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Level_PP_Result_quote___closed__17;
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_quote(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_quote___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_format(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Level_instToFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_instToFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Level_instToFormat___closed__0 = (const lean_object*)&l_Lean_Level_instToFormat___closed__0_value;
static const lean_closure_object l_Lean_Level_instToFormat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_instToFormat___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Level_instToFormat___closed__0_value)} };
static const lean_object* l_Lean_Level_instToFormat___closed__1 = (const lean_object*)&l_Lean_Level_instToFormat___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Level_instToFormat = (const lean_object*)&l_Lean_Level_instToFormat___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Level_instToString___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Level_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_instToString___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Level_instToFormat___closed__0_value)} };
static const lean_object* l_Lean_Level_instToString___closed__0 = (const lean_object*)&l_Lean_Level_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Level_instToString = (const lean_object*)&l_Lean_Level_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Level_quote(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_quote___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instQuoteMkStr1___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Level_instQuoteMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Level_instQuoteMkStr1___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Level_instToFormat___closed__0_value)} };
static const lean_object* l_Lean_Level_instQuoteMkStr1___closed__0 = (const lean_object*)&l_Lean_Level_instQuoteMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Level_instQuoteMkStr1 = (const lean_object*)&l_Lean_Level_instQuoteMkStr1___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelMax_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_simpLevelMax_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_simpLevelMax_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelIMaxCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_simpLevelIMax_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_simpLevelIMax_x27___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.Lean.Level.0.Lean.Level.updateSucc!Impl"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__0_value;
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "succ level expected"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__1 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__1_value;
static lean_once_cell_t l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "_private.Lean.Level.0.Lean.Level.updateMax!Impl"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__0_value;
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "max level expected"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__1 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__1_value;
static lean_once_cell_t l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.Lean.Level.0.Lean.Level.updateIMax!Impl"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__0 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__0_value;
static const lean_string_object l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "imax level expected"};
static const lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__1 = (const lean_object*)&l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__1_value;
static lean_once_cell_t l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_mkNaryMax(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_substParams_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_substParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getParamSubst(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_getParamSubst___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_instantiateParams(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_geq_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isIMax_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isIMax_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_geq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_geq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_collectMVars(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_find_x3f_visit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Level_any(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Level_any___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_toLevel(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_toLevel___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Nat_imax(lean_object* v_n_1_, lean_object* v_m_2_){
_start:
{
lean_object* v___x_3_; uint8_t v___x_4_; 
v___x_3_ = lean_unsigned_to_nat(0u);
v___x_4_ = lean_nat_dec_eq(v_m_2_, v___x_3_);
if (v___x_4_ == 0)
{
uint8_t v___x_5_; 
v___x_5_ = lean_nat_dec_le(v_n_1_, v_m_2_);
if (v___x_5_ == 0)
{
lean_inc(v_n_1_);
return v_n_1_;
}
else
{
lean_inc(v_m_2_);
return v_m_2_;
}
}
else
{
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Nat_imax___boxed(lean_object* v_n_6_, lean_object* v_m_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Nat_imax(v_n_6_, v_m_7_);
lean_dec(v_m_7_);
lean_dec(v_n_6_);
return v_res_8_;
}
}
static uint64_t _init_l_Lean_Level_instInhabitedData_default(void){
_start:
{
uint64_t v___x_9_; 
v___x_9_ = 0ULL;
return v___x_9_;
}
}
static uint64_t _init_l_Lean_Level_instInhabitedData(void){
_start:
{
uint64_t v___x_10_; 
v___x_10_ = 0ULL;
return v___x_10_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_instBEqData_beq(uint64_t v_x_11_, uint64_t v_x_12_){
_start:
{
uint8_t v___x_13_; 
v___x_13_ = lean_uint64_dec_eq(v_x_11_, v_x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instBEqData_beq___boxed(lean_object* v_x_14_, lean_object* v_x_15_){
_start:
{
uint64_t v_x_31__boxed_16_; uint64_t v_x_32__boxed_17_; uint8_t v_res_18_; lean_object* v_r_19_; 
v_x_31__boxed_16_ = lean_unbox_uint64(v_x_14_);
lean_dec_ref(v_x_14_);
v_x_32__boxed_17_ = lean_unbox_uint64(v_x_15_);
lean_dec_ref(v_x_15_);
v_res_18_ = l_Lean_Level_instBEqData_beq(v_x_31__boxed_16_, v_x_32__boxed_17_);
v_r_19_ = lean_box(v_res_18_);
return v_r_19_;
}
}
LEAN_EXPORT uint64_t l_Lean_Level_Data_hash(uint64_t v_c_22_){
_start:
{
uint32_t v___x_23_; uint64_t v___x_24_; 
v___x_23_ = lean_uint64_to_uint32(v_c_22_);
v___x_24_ = lean_uint32_to_uint64(v___x_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_Data_hash___boxed(lean_object* v_c_25_){
_start:
{
uint64_t v_c_boxed_26_; uint64_t v_res_27_; lean_object* v_r_28_; 
v_c_boxed_26_ = lean_unbox_uint64(v_c_25_);
lean_dec_ref(v_c_25_);
v_res_27_ = l_Lean_Level_Data_hash(v_c_boxed_26_);
v_r_28_ = lean_box_uint64(v_res_27_);
return v_r_28_;
}
}
LEAN_EXPORT uint32_t l_Lean_Level_Data_depth(uint64_t v_c_29_){
_start:
{
uint64_t v___x_30_; uint64_t v___x_31_; uint32_t v___x_32_; 
v___x_30_ = 40ULL;
v___x_31_ = lean_uint64_shift_right(v_c_29_, v___x_30_);
v___x_32_ = lean_uint64_to_uint32(v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_Data_depth___boxed(lean_object* v_c_33_){
_start:
{
uint64_t v_c_boxed_34_; uint32_t v_res_35_; lean_object* v_r_36_; 
v_c_boxed_34_ = lean_unbox_uint64(v_c_33_);
lean_dec_ref(v_c_33_);
v_res_35_ = l_Lean_Level_Data_depth(v_c_boxed_34_);
v_r_36_ = lean_box_uint32(v_res_35_);
return v_r_36_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_Data_hasMVar(uint64_t v_c_37_){
_start:
{
uint64_t v___x_38_; uint64_t v___x_39_; uint64_t v___x_40_; uint64_t v___x_41_; uint8_t v___x_42_; 
v___x_38_ = 32ULL;
v___x_39_ = lean_uint64_shift_right(v_c_37_, v___x_38_);
v___x_40_ = 1ULL;
v___x_41_ = lean_uint64_land(v___x_39_, v___x_40_);
v___x_42_ = lean_uint64_dec_eq(v___x_41_, v___x_40_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_Data_hasMVar___boxed(lean_object* v_c_43_){
_start:
{
uint64_t v_c_boxed_44_; uint8_t v_res_45_; lean_object* v_r_46_; 
v_c_boxed_44_ = lean_unbox_uint64(v_c_43_);
lean_dec_ref(v_c_43_);
v_res_45_ = l_Lean_Level_Data_hasMVar(v_c_boxed_44_);
v_r_46_ = lean_box(v_res_45_);
return v_r_46_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_Data_hasParam(uint64_t v_c_47_){
_start:
{
uint64_t v___x_48_; uint64_t v___x_49_; uint64_t v___x_50_; uint64_t v___x_51_; uint8_t v___x_52_; 
v___x_48_ = 33ULL;
v___x_49_ = lean_uint64_shift_right(v_c_47_, v___x_48_);
v___x_50_ = 1ULL;
v___x_51_ = lean_uint64_land(v___x_49_, v___x_50_);
v___x_52_ = lean_uint64_dec_eq(v___x_51_, v___x_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_Data_hasParam___boxed(lean_object* v_c_53_){
_start:
{
uint64_t v_c_boxed_54_; uint8_t v_res_55_; lean_object* v_r_56_; 
v_c_boxed_54_ = lean_unbox_uint64(v_c_53_);
lean_dec_ref(v_c_53_);
v_res_55_ = l_Lean_Level_Data_hasParam(v_c_boxed_54_);
v_r_56_ = lean_box(v_res_55_);
return v_r_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mkData___boxed(lean_object* v_h_61_, lean_object* v_depth_62_, lean_object* v_hasMVar_63_, lean_object* v_hasParam_64_){
_start:
{
uint64_t v_h_boxed_65_; uint8_t v_hasMVar_boxed_66_; uint8_t v_hasParam_boxed_67_; uint64_t v_res_68_; lean_object* v_r_69_; 
v_h_boxed_65_ = lean_unbox_uint64(v_h_61_);
lean_dec_ref(v_h_61_);
v_hasMVar_boxed_66_ = lean_unbox(v_hasMVar_63_);
v_hasParam_boxed_67_ = lean_unbox(v_hasParam_64_);
v_res_68_ = lean_level_mk_data(v_h_boxed_65_, v_depth_62_, v_hasMVar_boxed_66_, v_hasParam_boxed_67_);
v_r_69_ = lean_box_uint64(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprData___lam__0(uint64_t v_v_77_, lean_object* v_prec_78_){
_start:
{
lean_object* v_r_80_; lean_object* v___y_84_; lean_object* v___y_85_; lean_object* v_r_90_; lean_object* v___y_97_; lean_object* v___y_98_; lean_object* v_r_103_; lean_object* v___x_109_; uint64_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v_r_113_; uint32_t v___x_114_; uint32_t v___x_115_; uint8_t v___x_116_; 
v___x_109_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__5));
v___x_110_ = l_Lean_Level_Data_hash(v_v_77_);
v___x_111_ = lean_uint64_to_nat(v___x_110_);
v___x_112_ = l_Nat_reprFast(v___x_111_);
v_r_113_ = lean_string_append(v___x_109_, v___x_112_);
lean_dec_ref(v___x_112_);
v___x_114_ = l_Lean_Level_Data_depth(v_v_77_);
v___x_115_ = 0;
v___x_116_ = lean_uint32_dec_eq(v___x_114_, v___x_115_);
if (v___x_116_ == 0)
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v_r_123_; 
v___x_117_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__6));
v___x_118_ = lean_string_append(v_r_113_, v___x_117_);
v___x_119_ = lean_uint32_to_nat(v___x_114_);
v___x_120_ = l_Nat_reprFast(v___x_119_);
v___x_121_ = lean_string_append(v___x_118_, v___x_120_);
lean_dec_ref(v___x_120_);
v___x_122_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__0));
v_r_123_ = lean_string_append(v___x_121_, v___x_122_);
v_r_103_ = v_r_123_;
goto v___jp_102_;
}
else
{
v_r_103_ = v_r_113_;
goto v___jp_102_;
}
v___jp_79_:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_81_, 0, v_r_80_);
v___x_82_ = l_Repr_addAppParen(v___x_81_, v_prec_78_);
return v___x_82_;
}
v___jp_83_:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v_r_88_; 
v___x_86_ = lean_string_append(v___y_84_, v___y_85_);
v___x_87_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__0));
v_r_88_ = lean_string_append(v___x_86_, v___x_87_);
v_r_80_ = v_r_88_;
goto v___jp_79_;
}
v___jp_89_:
{
uint8_t v___x_91_; 
v___x_91_ = l_Lean_Level_Data_hasParam(v_v_77_);
if (v___x_91_ == 0)
{
v_r_80_ = v_r_90_;
goto v___jp_79_;
}
else
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__1));
v___x_93_ = lean_string_append(v_r_90_, v___x_92_);
if (v___x_91_ == 0)
{
lean_object* v___x_94_; 
v___x_94_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__2));
v___y_84_ = v___x_93_;
v___y_85_ = v___x_94_;
goto v___jp_83_;
}
else
{
lean_object* v___x_95_; 
v___x_95_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__3));
v___y_84_ = v___x_93_;
v___y_85_ = v___x_95_;
goto v___jp_83_;
}
}
}
v___jp_96_:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v_r_101_; 
v___x_99_ = lean_string_append(v___y_97_, v___y_98_);
v___x_100_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__0));
v_r_101_ = lean_string_append(v___x_99_, v___x_100_);
v_r_90_ = v_r_101_;
goto v___jp_89_;
}
v___jp_102_:
{
uint8_t v___x_104_; 
v___x_104_ = l_Lean_Level_Data_hasMVar(v_v_77_);
if (v___x_104_ == 0)
{
v_r_90_ = v_r_103_;
goto v___jp_89_;
}
else
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__4));
v___x_106_ = lean_string_append(v_r_103_, v___x_105_);
if (v___x_104_ == 0)
{
lean_object* v___x_107_; 
v___x_107_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__2));
v___y_97_ = v___x_106_;
v___y_98_ = v___x_107_;
goto v___jp_96_;
}
else
{
lean_object* v___x_108_; 
v___x_108_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__3));
v___y_97_ = v___x_106_;
v___y_98_ = v___x_108_;
goto v___jp_96_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprData___lam__0___boxed(lean_object* v_v_124_, lean_object* v_prec_125_){
_start:
{
uint64_t v_v_boxed_126_; lean_object* v_res_127_; 
v_v_boxed_126_ = lean_unbox_uint64(v_v_124_);
lean_dec_ref(v_v_124_);
v_res_127_ = l_Lean_instReprData___lam__0(v_v_boxed_126_, v_prec_125_);
lean_dec(v_prec_125_);
return v_res_127_;
}
}
static lean_object* _init_l_Lean_instInhabitedLevelMVarId_default(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_box(0);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_instInhabitedLevelMVarId(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_box(0);
return v___x_131_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqLevelMVarId_beq(lean_object* v_x_132_, lean_object* v_x_133_){
_start:
{
uint8_t v___x_134_; 
v___x_134_ = lean_name_eq(v_x_132_, v_x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqLevelMVarId_beq___boxed(lean_object* v_x_135_, lean_object* v_x_136_){
_start:
{
uint8_t v_res_137_; lean_object* v_r_138_; 
v_res_137_ = l_Lean_instBEqLevelMVarId_beq(v_x_135_, v_x_136_);
lean_dec(v_x_136_);
lean_dec(v_x_135_);
v_r_138_ = lean_box(v_res_137_);
return v_r_138_;
}
}
static uint64_t _init_l_Lean_instHashableLevelMVarId_hash___closed__0(void){
_start:
{
uint64_t v___x_141_; uint64_t v___x_142_; uint64_t v___x_143_; 
v___x_141_ = 1723ULL;
v___x_142_ = 0ULL;
v___x_143_ = lean_uint64_mix_hash(v___x_142_, v___x_141_);
return v___x_143_;
}
}
LEAN_EXPORT uint64_t l_Lean_instHashableLevelMVarId_hash(lean_object* v_x_144_){
_start:
{
uint64_t v___x_145_; 
v___x_145_ = 0ULL;
if (lean_obj_tag(v_x_144_) == 0)
{
uint64_t v___x_146_; 
v___x_146_ = lean_uint64_once(&l_Lean_instHashableLevelMVarId_hash___closed__0, &l_Lean_instHashableLevelMVarId_hash___closed__0_once, _init_l_Lean_instHashableLevelMVarId_hash___closed__0);
return v___x_146_;
}
else
{
uint64_t v_hash_147_; uint64_t v___x_148_; 
v_hash_147_ = lean_ctor_get_uint64(v_x_144_, sizeof(void*)*2);
v___x_148_ = lean_uint64_mix_hash(v___x_145_, v_hash_147_);
return v___x_148_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instHashableLevelMVarId_hash___boxed(lean_object* v_x_149_){
_start:
{
uint64_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = l_Lean_instHashableLevelMVarId_hash(v_x_149_);
lean_dec(v_x_149_);
v_r_151_ = lean_box_uint64(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_instReprLevelMVarId_repr_spec__0(lean_object* v_a_154_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_nat_to_int(v_a_154_);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_unsigned_to_nat(8u);
v___x_170_ = lean_nat_to_int(v___x_169_);
return v___x_170_;
}
}
static lean_object* _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = ((lean_object*)(l_Lean_instReprLevelMVarId_repr___redArg___closed__0));
v___x_173_ = lean_string_length(v___x_172_);
return v___x_173_;
}
}
static lean_object* _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_obj_once(&l_Lean_instReprLevelMVarId_repr___redArg___closed__9, &l_Lean_instReprLevelMVarId_repr___redArg___closed__9_once, _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__9);
v___x_175_ = lean_nat_to_int(v___x_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr___redArg(lean_object* v_x_180_){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_181_ = ((lean_object*)(l_Lean_instReprLevelMVarId_repr___redArg___closed__6));
v___x_182_ = lean_obj_once(&l_Lean_instReprLevelMVarId_repr___redArg___closed__7, &l_Lean_instReprLevelMVarId_repr___redArg___closed__7_once, _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__7);
v___x_183_ = lean_unsigned_to_nat(0u);
v___x_184_ = l_Lean_Name_reprPrec(v_x_180_, v___x_183_);
v___x_185_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_182_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
v___x_186_ = 0;
v___x_187_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_187_, 0, v___x_185_);
lean_ctor_set_uint8(v___x_187_, sizeof(void*)*1, v___x_186_);
v___x_188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_188_, 0, v___x_181_);
lean_ctor_set(v___x_188_, 1, v___x_187_);
v___x_189_ = lean_obj_once(&l_Lean_instReprLevelMVarId_repr___redArg___closed__10, &l_Lean_instReprLevelMVarId_repr___redArg___closed__10_once, _init_l_Lean_instReprLevelMVarId_repr___redArg___closed__10);
v___x_190_ = ((lean_object*)(l_Lean_instReprLevelMVarId_repr___redArg___closed__11));
v___x_191_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v___x_188_);
v___x_192_ = ((lean_object*)(l_Lean_instReprLevelMVarId_repr___redArg___closed__12));
v___x_193_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_191_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
v___x_194_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_189_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_195_, 0, v___x_194_);
lean_ctor_set_uint8(v___x_195_, sizeof(void*)*1, v___x_186_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr(lean_object* v_x_196_, lean_object* v_prec_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lean_instReprLevelMVarId_repr___redArg(v_x_196_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLevelMVarId_repr___boxed(lean_object* v_x_199_, lean_object* v_prec_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_instReprLevelMVarId_repr(v_x_199_, v_prec_200_);
lean_dec(v_prec_200_);
return v_res_201_;
}
}
static lean_object* _init_l_Lean_instInhabitedLMVarIdSet_default(void){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_box(1);
return v___x_206_;
}
}
static lean_object* _init_l_Lean_instInhabitedLMVarIdSet(void){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = lean_box(1);
return v___x_207_;
}
}
static lean_object* _init_l_Lean_instEmptyCollectionLMVarIdSet(void){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = lean_box(1);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg___lam__0(lean_object* v_f_209_, lean_object* v_a_210_, lean_object* v_b_211_, lean_object* v_c_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = lean_apply_2(v_f_209_, v_a_210_, v_c_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg___lam__1(lean_object* v_toPure_214_, lean_object* v_____do__lift_215_){
_start:
{
lean_object* v_a_216_; lean_object* v___x_217_; 
v_a_216_ = lean_ctor_get(v_____do__lift_215_, 0);
lean_inc(v_a_216_);
lean_dec_ref(v_____do__lift_215_);
v___x_217_ = lean_apply_2(v_toPure_214_, lean_box(0), v_a_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg___lam__2(lean_object* v_inst_218_, lean_object* v_00_u03b2_219_, lean_object* v_s_220_, lean_object* v_init_221_, lean_object* v_f_222_){
_start:
{
lean_object* v_toApplicative_223_; lean_object* v_toBind_224_; lean_object* v_toPure_225_; lean_object* v___f_226_; lean_object* v___x_227_; lean_object* v___f_228_; lean_object* v___x_229_; 
v_toApplicative_223_ = lean_ctor_get(v_inst_218_, 0);
v_toBind_224_ = lean_ctor_get(v_inst_218_, 1);
lean_inc(v_toBind_224_);
v_toPure_225_ = lean_ctor_get(v_toApplicative_223_, 1);
lean_inc(v_toPure_225_);
v___f_226_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_226_, 0, v_f_222_);
v___x_227_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_218_, v___f_226_, v_init_221_, v_s_220_);
v___f_228_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_228_, 0, v_toPure_225_);
v___x_229_ = lean_apply_4(v_toBind_224_, lean_box(0), lean_box(0), v___x_227_, v___f_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg(lean_object* v_inst_230_){
_start:
{
lean_object* v___f_231_; 
v___f_231_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_231_, 0, v_inst_230_);
return v___f_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdSetLMVarIdOfMonad(lean_object* v_m_232_, lean_object* v_inst_233_){
_start:
{
lean_object* v___f_234_; 
v___f_234_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_234_, 0, v_inst_233_);
return v___f_234_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___redArg(lean_object* v_k_235_, lean_object* v_t_236_){
_start:
{
if (lean_obj_tag(v_t_236_) == 0)
{
lean_object* v_k_237_; lean_object* v_l_238_; lean_object* v_r_239_; uint8_t v___x_240_; 
v_k_237_ = lean_ctor_get(v_t_236_, 1);
v_l_238_ = lean_ctor_get(v_t_236_, 3);
v_r_239_ = lean_ctor_get(v_t_236_, 4);
v___x_240_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_235_, v_k_237_);
switch(v___x_240_)
{
case 0:
{
v_t_236_ = v_l_238_;
goto _start;
}
case 1:
{
uint8_t v___x_242_; 
v___x_242_ = 1;
return v___x_242_;
}
default: 
{
v_t_236_ = v_r_239_;
goto _start;
}
}
}
else
{
uint8_t v___x_244_; 
v___x_244_ = 0;
return v___x_244_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___redArg___boxed(lean_object* v_k_245_, lean_object* v_t_246_){
_start:
{
uint8_t v_res_247_; lean_object* v_r_248_; 
v_res_247_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___redArg(v_k_245_, v_t_246_);
lean_dec(v_t_246_);
lean_dec(v_k_245_);
v_r_248_ = lean_box(v_res_247_);
return v_r_248_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LMVarIdSet_insert_spec__1___redArg(lean_object* v_k_249_, lean_object* v_v_250_, lean_object* v_t_251_){
_start:
{
if (lean_obj_tag(v_t_251_) == 0)
{
lean_object* v_size_252_; lean_object* v_k_253_; lean_object* v_v_254_; lean_object* v_l_255_; lean_object* v_r_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_536_; 
v_size_252_ = lean_ctor_get(v_t_251_, 0);
v_k_253_ = lean_ctor_get(v_t_251_, 1);
v_v_254_ = lean_ctor_get(v_t_251_, 2);
v_l_255_ = lean_ctor_get(v_t_251_, 3);
v_r_256_ = lean_ctor_get(v_t_251_, 4);
v_isSharedCheck_536_ = !lean_is_exclusive(v_t_251_);
if (v_isSharedCheck_536_ == 0)
{
v___x_258_ = v_t_251_;
v_isShared_259_ = v_isSharedCheck_536_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_r_256_);
lean_inc(v_l_255_);
lean_inc(v_v_254_);
lean_inc(v_k_253_);
lean_inc(v_size_252_);
lean_dec(v_t_251_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_536_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
uint8_t v___x_260_; 
v___x_260_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_249_, v_k_253_);
switch(v___x_260_)
{
case 0:
{
lean_object* v_impl_261_; lean_object* v___x_262_; 
lean_dec(v_size_252_);
v_impl_261_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LMVarIdSet_insert_spec__1___redArg(v_k_249_, v_v_250_, v_l_255_);
v___x_262_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_256_) == 0)
{
lean_object* v_size_263_; lean_object* v_size_264_; lean_object* v_k_265_; lean_object* v_v_266_; lean_object* v_l_267_; lean_object* v_r_268_; lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v_size_263_ = lean_ctor_get(v_r_256_, 0);
v_size_264_ = lean_ctor_get(v_impl_261_, 0);
lean_inc(v_size_264_);
v_k_265_ = lean_ctor_get(v_impl_261_, 1);
lean_inc(v_k_265_);
v_v_266_ = lean_ctor_get(v_impl_261_, 2);
lean_inc(v_v_266_);
v_l_267_ = lean_ctor_get(v_impl_261_, 3);
lean_inc(v_l_267_);
v_r_268_ = lean_ctor_get(v_impl_261_, 4);
lean_inc(v_r_268_);
v___x_269_ = lean_unsigned_to_nat(3u);
v___x_270_ = lean_nat_mul(v___x_269_, v_size_263_);
v___x_271_ = lean_nat_dec_lt(v___x_270_, v_size_264_);
lean_dec(v___x_270_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_275_; 
lean_dec(v_r_268_);
lean_dec(v_l_267_);
lean_dec(v_v_266_);
lean_dec(v_k_265_);
v___x_272_ = lean_nat_add(v___x_262_, v_size_264_);
lean_dec(v_size_264_);
v___x_273_ = lean_nat_add(v___x_272_, v_size_263_);
lean_dec(v___x_272_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 3, v_impl_261_);
lean_ctor_set(v___x_258_, 0, v___x_273_);
v___x_275_ = v___x_258_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_276_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_276_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_276_, 3, v_impl_261_);
lean_ctor_set(v_reuseFailAlloc_276_, 4, v_r_256_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
else
{
lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_342_; 
v_isSharedCheck_342_ = !lean_is_exclusive(v_impl_261_);
if (v_isSharedCheck_342_ == 0)
{
lean_object* v_unused_343_; lean_object* v_unused_344_; lean_object* v_unused_345_; lean_object* v_unused_346_; lean_object* v_unused_347_; 
v_unused_343_ = lean_ctor_get(v_impl_261_, 4);
lean_dec(v_unused_343_);
v_unused_344_ = lean_ctor_get(v_impl_261_, 3);
lean_dec(v_unused_344_);
v_unused_345_ = lean_ctor_get(v_impl_261_, 2);
lean_dec(v_unused_345_);
v_unused_346_ = lean_ctor_get(v_impl_261_, 1);
lean_dec(v_unused_346_);
v_unused_347_ = lean_ctor_get(v_impl_261_, 0);
lean_dec(v_unused_347_);
v___x_278_ = v_impl_261_;
v_isShared_279_ = v_isSharedCheck_342_;
goto v_resetjp_277_;
}
else
{
lean_dec(v_impl_261_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_342_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v_size_280_; lean_object* v_size_281_; lean_object* v_k_282_; lean_object* v_v_283_; lean_object* v_l_284_; lean_object* v_r_285_; lean_object* v___x_286_; lean_object* v___x_287_; uint8_t v___x_288_; 
v_size_280_ = lean_ctor_get(v_l_267_, 0);
v_size_281_ = lean_ctor_get(v_r_268_, 0);
v_k_282_ = lean_ctor_get(v_r_268_, 1);
v_v_283_ = lean_ctor_get(v_r_268_, 2);
v_l_284_ = lean_ctor_get(v_r_268_, 3);
v_r_285_ = lean_ctor_get(v_r_268_, 4);
v___x_286_ = lean_unsigned_to_nat(2u);
v___x_287_ = lean_nat_mul(v___x_286_, v_size_280_);
v___x_288_ = lean_nat_dec_lt(v_size_281_, v___x_287_);
lean_dec(v___x_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_317_; 
lean_inc(v_r_285_);
lean_inc(v_l_284_);
lean_inc(v_v_283_);
lean_inc(v_k_282_);
v_isSharedCheck_317_ = !lean_is_exclusive(v_r_268_);
if (v_isSharedCheck_317_ == 0)
{
lean_object* v_unused_318_; lean_object* v_unused_319_; lean_object* v_unused_320_; lean_object* v_unused_321_; lean_object* v_unused_322_; 
v_unused_318_ = lean_ctor_get(v_r_268_, 4);
lean_dec(v_unused_318_);
v_unused_319_ = lean_ctor_get(v_r_268_, 3);
lean_dec(v_unused_319_);
v_unused_320_ = lean_ctor_get(v_r_268_, 2);
lean_dec(v_unused_320_);
v_unused_321_ = lean_ctor_get(v_r_268_, 1);
lean_dec(v_unused_321_);
v_unused_322_ = lean_ctor_get(v_r_268_, 0);
lean_dec(v_unused_322_);
v___x_290_ = v_r_268_;
v_isShared_291_ = v_isSharedCheck_317_;
goto v_resetjp_289_;
}
else
{
lean_dec(v_r_268_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_317_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___y_295_; lean_object* v___y_296_; lean_object* v___y_297_; lean_object* v___x_305_; lean_object* v___y_307_; 
v___x_292_ = lean_nat_add(v___x_262_, v_size_264_);
lean_dec(v_size_264_);
v___x_293_ = lean_nat_add(v___x_292_, v_size_263_);
lean_dec(v___x_292_);
v___x_305_ = lean_nat_add(v___x_262_, v_size_280_);
if (lean_obj_tag(v_l_284_) == 0)
{
lean_object* v_size_315_; 
v_size_315_ = lean_ctor_get(v_l_284_, 0);
lean_inc(v_size_315_);
v___y_307_ = v_size_315_;
goto v___jp_306_;
}
else
{
lean_object* v___x_316_; 
v___x_316_ = lean_unsigned_to_nat(0u);
v___y_307_ = v___x_316_;
goto v___jp_306_;
}
v___jp_294_:
{
lean_object* v___x_298_; lean_object* v___x_300_; 
v___x_298_ = lean_nat_add(v___y_295_, v___y_297_);
lean_dec(v___y_297_);
lean_dec(v___y_295_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 4, v_r_256_);
lean_ctor_set(v___x_290_, 3, v_r_285_);
lean_ctor_set(v___x_290_, 2, v_v_254_);
lean_ctor_set(v___x_290_, 1, v_k_253_);
lean_ctor_set(v___x_290_, 0, v___x_298_);
v___x_300_ = v___x_290_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_298_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_304_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_304_, 3, v_r_285_);
lean_ctor_set(v_reuseFailAlloc_304_, 4, v_r_256_);
v___x_300_ = v_reuseFailAlloc_304_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
lean_object* v___x_302_; 
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 4, v___x_300_);
lean_ctor_set(v___x_278_, 3, v___y_296_);
lean_ctor_set(v___x_278_, 2, v_v_283_);
lean_ctor_set(v___x_278_, 1, v_k_282_);
lean_ctor_set(v___x_278_, 0, v___x_293_);
v___x_302_ = v___x_278_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_293_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v_k_282_);
lean_ctor_set(v_reuseFailAlloc_303_, 2, v_v_283_);
lean_ctor_set(v_reuseFailAlloc_303_, 3, v___y_296_);
lean_ctor_set(v_reuseFailAlloc_303_, 4, v___x_300_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
v___jp_306_:
{
lean_object* v___x_308_; lean_object* v___x_310_; 
v___x_308_ = lean_nat_add(v___x_305_, v___y_307_);
lean_dec(v___y_307_);
lean_dec(v___x_305_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 4, v_l_284_);
lean_ctor_set(v___x_258_, 3, v_l_267_);
lean_ctor_set(v___x_258_, 2, v_v_266_);
lean_ctor_set(v___x_258_, 1, v_k_265_);
lean_ctor_set(v___x_258_, 0, v___x_308_);
v___x_310_ = v___x_258_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_308_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v_k_265_);
lean_ctor_set(v_reuseFailAlloc_314_, 2, v_v_266_);
lean_ctor_set(v_reuseFailAlloc_314_, 3, v_l_267_);
lean_ctor_set(v_reuseFailAlloc_314_, 4, v_l_284_);
v___x_310_ = v_reuseFailAlloc_314_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
lean_object* v___x_311_; 
v___x_311_ = lean_nat_add(v___x_262_, v_size_263_);
if (lean_obj_tag(v_r_285_) == 0)
{
lean_object* v_size_312_; 
v_size_312_ = lean_ctor_get(v_r_285_, 0);
lean_inc(v_size_312_);
v___y_295_ = v___x_311_;
v___y_296_ = v___x_310_;
v___y_297_ = v_size_312_;
goto v___jp_294_;
}
else
{
lean_object* v___x_313_; 
v___x_313_ = lean_unsigned_to_nat(0u);
v___y_295_ = v___x_311_;
v___y_296_ = v___x_310_;
v___y_297_ = v___x_313_;
goto v___jp_294_;
}
}
}
}
}
else
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
lean_del_object(v___x_258_);
v___x_323_ = lean_nat_add(v___x_262_, v_size_264_);
lean_dec(v_size_264_);
v___x_324_ = lean_nat_add(v___x_323_, v_size_263_);
lean_dec(v___x_323_);
v___x_325_ = lean_nat_add(v___x_262_, v_size_263_);
v___x_326_ = lean_nat_add(v___x_325_, v_size_281_);
lean_dec(v___x_325_);
lean_inc_ref(v_r_256_);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 4, v_r_256_);
lean_ctor_set(v___x_278_, 3, v_r_268_);
lean_ctor_set(v___x_278_, 2, v_v_254_);
lean_ctor_set(v___x_278_, 1, v_k_253_);
lean_ctor_set(v___x_278_, 0, v___x_326_);
v___x_328_ = v___x_278_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v___x_326_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_341_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_341_, 3, v_r_268_);
lean_ctor_set(v_reuseFailAlloc_341_, 4, v_r_256_);
v___x_328_ = v_reuseFailAlloc_341_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
v_isSharedCheck_335_ = !lean_is_exclusive(v_r_256_);
if (v_isSharedCheck_335_ == 0)
{
lean_object* v_unused_336_; lean_object* v_unused_337_; lean_object* v_unused_338_; lean_object* v_unused_339_; lean_object* v_unused_340_; 
v_unused_336_ = lean_ctor_get(v_r_256_, 4);
lean_dec(v_unused_336_);
v_unused_337_ = lean_ctor_get(v_r_256_, 3);
lean_dec(v_unused_337_);
v_unused_338_ = lean_ctor_get(v_r_256_, 2);
lean_dec(v_unused_338_);
v_unused_339_ = lean_ctor_get(v_r_256_, 1);
lean_dec(v_unused_339_);
v_unused_340_ = lean_ctor_get(v_r_256_, 0);
lean_dec(v_unused_340_);
v___x_330_ = v_r_256_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_dec(v_r_256_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 4, v___x_328_);
lean_ctor_set(v___x_330_, 3, v_l_267_);
lean_ctor_set(v___x_330_, 2, v_v_266_);
lean_ctor_set(v___x_330_, 1, v_k_265_);
lean_ctor_set(v___x_330_, 0, v___x_324_);
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_324_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v_k_265_);
lean_ctor_set(v_reuseFailAlloc_334_, 2, v_v_266_);
lean_ctor_set(v_reuseFailAlloc_334_, 3, v_l_267_);
lean_ctor_set(v_reuseFailAlloc_334_, 4, v___x_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_348_; 
v_l_348_ = lean_ctor_get(v_impl_261_, 3);
lean_inc(v_l_348_);
if (lean_obj_tag(v_l_348_) == 0)
{
lean_object* v_r_349_; lean_object* v_k_350_; lean_object* v_v_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_362_; 
v_r_349_ = lean_ctor_get(v_impl_261_, 4);
v_k_350_ = lean_ctor_get(v_impl_261_, 1);
v_v_351_ = lean_ctor_get(v_impl_261_, 2);
v_isSharedCheck_362_ = !lean_is_exclusive(v_impl_261_);
if (v_isSharedCheck_362_ == 0)
{
lean_object* v_unused_363_; lean_object* v_unused_364_; 
v_unused_363_ = lean_ctor_get(v_impl_261_, 3);
lean_dec(v_unused_363_);
v_unused_364_ = lean_ctor_get(v_impl_261_, 0);
lean_dec(v_unused_364_);
v___x_353_ = v_impl_261_;
v_isShared_354_ = v_isSharedCheck_362_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_r_349_);
lean_inc(v_v_351_);
lean_inc(v_k_350_);
lean_dec(v_impl_261_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_362_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_355_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_349_);
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 3, v_r_349_);
lean_ctor_set(v___x_353_, 2, v_v_254_);
lean_ctor_set(v___x_353_, 1, v_k_253_);
lean_ctor_set(v___x_353_, 0, v___x_262_);
v___x_357_ = v___x_353_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_361_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_361_, 3, v_r_349_);
lean_ctor_set(v_reuseFailAlloc_361_, 4, v_r_349_);
v___x_357_ = v_reuseFailAlloc_361_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_359_; 
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 4, v___x_357_);
lean_ctor_set(v___x_258_, 3, v_l_348_);
lean_ctor_set(v___x_258_, 2, v_v_351_);
lean_ctor_set(v___x_258_, 1, v_k_350_);
lean_ctor_set(v___x_258_, 0, v___x_355_);
v___x_359_ = v___x_258_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_355_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_k_350_);
lean_ctor_set(v_reuseFailAlloc_360_, 2, v_v_351_);
lean_ctor_set(v_reuseFailAlloc_360_, 3, v_l_348_);
lean_ctor_set(v_reuseFailAlloc_360_, 4, v___x_357_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v_r_365_; 
v_r_365_ = lean_ctor_get(v_impl_261_, 4);
lean_inc(v_r_365_);
if (lean_obj_tag(v_r_365_) == 0)
{
lean_object* v_k_366_; lean_object* v_v_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_390_; 
v_k_366_ = lean_ctor_get(v_impl_261_, 1);
v_v_367_ = lean_ctor_get(v_impl_261_, 2);
v_isSharedCheck_390_ = !lean_is_exclusive(v_impl_261_);
if (v_isSharedCheck_390_ == 0)
{
lean_object* v_unused_391_; lean_object* v_unused_392_; lean_object* v_unused_393_; 
v_unused_391_ = lean_ctor_get(v_impl_261_, 4);
lean_dec(v_unused_391_);
v_unused_392_ = lean_ctor_get(v_impl_261_, 3);
lean_dec(v_unused_392_);
v_unused_393_ = lean_ctor_get(v_impl_261_, 0);
lean_dec(v_unused_393_);
v___x_369_ = v_impl_261_;
v_isShared_370_ = v_isSharedCheck_390_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_v_367_);
lean_inc(v_k_366_);
lean_dec(v_impl_261_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_390_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v_k_371_; lean_object* v_v_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_386_; 
v_k_371_ = lean_ctor_get(v_r_365_, 1);
v_v_372_ = lean_ctor_get(v_r_365_, 2);
v_isSharedCheck_386_ = !lean_is_exclusive(v_r_365_);
if (v_isSharedCheck_386_ == 0)
{
lean_object* v_unused_387_; lean_object* v_unused_388_; lean_object* v_unused_389_; 
v_unused_387_ = lean_ctor_get(v_r_365_, 4);
lean_dec(v_unused_387_);
v_unused_388_ = lean_ctor_get(v_r_365_, 3);
lean_dec(v_unused_388_);
v_unused_389_ = lean_ctor_get(v_r_365_, 0);
lean_dec(v_unused_389_);
v___x_374_ = v_r_365_;
v_isShared_375_ = v_isSharedCheck_386_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_v_372_);
lean_inc(v_k_371_);
lean_dec(v_r_365_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_386_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_376_; lean_object* v___x_378_; 
v___x_376_ = lean_unsigned_to_nat(3u);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 4, v_l_348_);
lean_ctor_set(v___x_374_, 3, v_l_348_);
lean_ctor_set(v___x_374_, 2, v_v_367_);
lean_ctor_set(v___x_374_, 1, v_k_366_);
lean_ctor_set(v___x_374_, 0, v___x_262_);
v___x_378_ = v___x_374_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_385_, 1, v_k_366_);
lean_ctor_set(v_reuseFailAlloc_385_, 2, v_v_367_);
lean_ctor_set(v_reuseFailAlloc_385_, 3, v_l_348_);
lean_ctor_set(v_reuseFailAlloc_385_, 4, v_l_348_);
v___x_378_ = v_reuseFailAlloc_385_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_380_; 
if (v_isShared_370_ == 0)
{
lean_ctor_set(v___x_369_, 4, v_l_348_);
lean_ctor_set(v___x_369_, 2, v_v_254_);
lean_ctor_set(v___x_369_, 1, v_k_253_);
lean_ctor_set(v___x_369_, 0, v___x_262_);
v___x_380_ = v___x_369_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_384_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_384_, 3, v_l_348_);
lean_ctor_set(v_reuseFailAlloc_384_, 4, v_l_348_);
v___x_380_ = v_reuseFailAlloc_384_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
lean_object* v___x_382_; 
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 4, v___x_380_);
lean_ctor_set(v___x_258_, 3, v___x_378_);
lean_ctor_set(v___x_258_, 2, v_v_372_);
lean_ctor_set(v___x_258_, 1, v_k_371_);
lean_ctor_set(v___x_258_, 0, v___x_376_);
v___x_382_ = v___x_258_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v___x_376_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v_k_371_);
lean_ctor_set(v_reuseFailAlloc_383_, 2, v_v_372_);
lean_ctor_set(v_reuseFailAlloc_383_, 3, v___x_378_);
lean_ctor_set(v_reuseFailAlloc_383_, 4, v___x_380_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
}
else
{
lean_object* v___x_394_; lean_object* v___x_396_; 
v___x_394_ = lean_unsigned_to_nat(2u);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 4, v_r_365_);
lean_ctor_set(v___x_258_, 3, v_impl_261_);
lean_ctor_set(v___x_258_, 0, v___x_394_);
v___x_396_ = v___x_258_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v___x_394_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_397_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_397_, 3, v_impl_261_);
lean_ctor_set(v_reuseFailAlloc_397_, 4, v_r_365_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
}
case 1:
{
lean_object* v___x_399_; 
lean_dec(v_v_254_);
lean_dec(v_k_253_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 2, v_v_250_);
lean_ctor_set(v___x_258_, 1, v_k_249_);
v___x_399_ = v___x_258_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_size_252_);
lean_ctor_set(v_reuseFailAlloc_400_, 1, v_k_249_);
lean_ctor_set(v_reuseFailAlloc_400_, 2, v_v_250_);
lean_ctor_set(v_reuseFailAlloc_400_, 3, v_l_255_);
lean_ctor_set(v_reuseFailAlloc_400_, 4, v_r_256_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
default: 
{
lean_object* v_impl_401_; lean_object* v___x_402_; 
lean_dec(v_size_252_);
v_impl_401_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LMVarIdSet_insert_spec__1___redArg(v_k_249_, v_v_250_, v_r_256_);
v___x_402_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_255_) == 0)
{
lean_object* v_size_403_; lean_object* v_size_404_; lean_object* v_k_405_; lean_object* v_v_406_; lean_object* v_l_407_; lean_object* v_r_408_; lean_object* v___x_409_; lean_object* v___x_410_; uint8_t v___x_411_; 
v_size_403_ = lean_ctor_get(v_l_255_, 0);
v_size_404_ = lean_ctor_get(v_impl_401_, 0);
lean_inc(v_size_404_);
v_k_405_ = lean_ctor_get(v_impl_401_, 1);
lean_inc(v_k_405_);
v_v_406_ = lean_ctor_get(v_impl_401_, 2);
lean_inc(v_v_406_);
v_l_407_ = lean_ctor_get(v_impl_401_, 3);
lean_inc(v_l_407_);
v_r_408_ = lean_ctor_get(v_impl_401_, 4);
lean_inc(v_r_408_);
v___x_409_ = lean_unsigned_to_nat(3u);
v___x_410_ = lean_nat_mul(v___x_409_, v_size_403_);
v___x_411_ = lean_nat_dec_lt(v___x_410_, v_size_404_);
lean_dec(v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_415_; 
lean_dec(v_r_408_);
lean_dec(v_l_407_);
lean_dec(v_v_406_);
lean_dec(v_k_405_);
v___x_412_ = lean_nat_add(v___x_402_, v_size_403_);
v___x_413_ = lean_nat_add(v___x_412_, v_size_404_);
lean_dec(v_size_404_);
lean_dec(v___x_412_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 4, v_impl_401_);
lean_ctor_set(v___x_258_, 0, v___x_413_);
v___x_415_ = v___x_258_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_413_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_416_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_416_, 3, v_l_255_);
lean_ctor_set(v_reuseFailAlloc_416_, 4, v_impl_401_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
else
{
lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_480_; 
v_isSharedCheck_480_ = !lean_is_exclusive(v_impl_401_);
if (v_isSharedCheck_480_ == 0)
{
lean_object* v_unused_481_; lean_object* v_unused_482_; lean_object* v_unused_483_; lean_object* v_unused_484_; lean_object* v_unused_485_; 
v_unused_481_ = lean_ctor_get(v_impl_401_, 4);
lean_dec(v_unused_481_);
v_unused_482_ = lean_ctor_get(v_impl_401_, 3);
lean_dec(v_unused_482_);
v_unused_483_ = lean_ctor_get(v_impl_401_, 2);
lean_dec(v_unused_483_);
v_unused_484_ = lean_ctor_get(v_impl_401_, 1);
lean_dec(v_unused_484_);
v_unused_485_ = lean_ctor_get(v_impl_401_, 0);
lean_dec(v_unused_485_);
v___x_418_ = v_impl_401_;
v_isShared_419_ = v_isSharedCheck_480_;
goto v_resetjp_417_;
}
else
{
lean_dec(v_impl_401_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_480_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v_size_420_; lean_object* v_k_421_; lean_object* v_v_422_; lean_object* v_l_423_; lean_object* v_r_424_; lean_object* v_size_425_; lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; 
v_size_420_ = lean_ctor_get(v_l_407_, 0);
v_k_421_ = lean_ctor_get(v_l_407_, 1);
v_v_422_ = lean_ctor_get(v_l_407_, 2);
v_l_423_ = lean_ctor_get(v_l_407_, 3);
v_r_424_ = lean_ctor_get(v_l_407_, 4);
v_size_425_ = lean_ctor_get(v_r_408_, 0);
v___x_426_ = lean_unsigned_to_nat(2u);
v___x_427_ = lean_nat_mul(v___x_426_, v_size_425_);
v___x_428_ = lean_nat_dec_lt(v_size_420_, v___x_427_);
lean_dec(v___x_427_);
if (v___x_428_ == 0)
{
lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_456_; 
lean_inc(v_r_424_);
lean_inc(v_l_423_);
lean_inc(v_v_422_);
lean_inc(v_k_421_);
v_isSharedCheck_456_ = !lean_is_exclusive(v_l_407_);
if (v_isSharedCheck_456_ == 0)
{
lean_object* v_unused_457_; lean_object* v_unused_458_; lean_object* v_unused_459_; lean_object* v_unused_460_; lean_object* v_unused_461_; 
v_unused_457_ = lean_ctor_get(v_l_407_, 4);
lean_dec(v_unused_457_);
v_unused_458_ = lean_ctor_get(v_l_407_, 3);
lean_dec(v_unused_458_);
v_unused_459_ = lean_ctor_get(v_l_407_, 2);
lean_dec(v_unused_459_);
v_unused_460_ = lean_ctor_get(v_l_407_, 1);
lean_dec(v_unused_460_);
v_unused_461_ = lean_ctor_get(v_l_407_, 0);
lean_dec(v_unused_461_);
v___x_430_ = v_l_407_;
v_isShared_431_ = v_isSharedCheck_456_;
goto v_resetjp_429_;
}
else
{
lean_dec(v_l_407_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_456_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___y_435_; lean_object* v___y_436_; lean_object* v___y_437_; lean_object* v___y_446_; 
v___x_432_ = lean_nat_add(v___x_402_, v_size_403_);
v___x_433_ = lean_nat_add(v___x_432_, v_size_404_);
lean_dec(v_size_404_);
if (lean_obj_tag(v_l_423_) == 0)
{
lean_object* v_size_454_; 
v_size_454_ = lean_ctor_get(v_l_423_, 0);
lean_inc(v_size_454_);
v___y_446_ = v_size_454_;
goto v___jp_445_;
}
else
{
lean_object* v___x_455_; 
v___x_455_ = lean_unsigned_to_nat(0u);
v___y_446_ = v___x_455_;
goto v___jp_445_;
}
v___jp_434_:
{
lean_object* v___x_438_; lean_object* v___x_440_; 
v___x_438_ = lean_nat_add(v___y_435_, v___y_437_);
lean_dec(v___y_437_);
lean_dec(v___y_435_);
if (v_isShared_431_ == 0)
{
lean_ctor_set(v___x_430_, 4, v_r_408_);
lean_ctor_set(v___x_430_, 3, v_r_424_);
lean_ctor_set(v___x_430_, 2, v_v_406_);
lean_ctor_set(v___x_430_, 1, v_k_405_);
lean_ctor_set(v___x_430_, 0, v___x_438_);
v___x_440_ = v___x_430_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_k_405_);
lean_ctor_set(v_reuseFailAlloc_444_, 2, v_v_406_);
lean_ctor_set(v_reuseFailAlloc_444_, 3, v_r_424_);
lean_ctor_set(v_reuseFailAlloc_444_, 4, v_r_408_);
v___x_440_ = v_reuseFailAlloc_444_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
lean_object* v___x_442_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 4, v___x_440_);
lean_ctor_set(v___x_418_, 3, v___y_436_);
lean_ctor_set(v___x_418_, 2, v_v_422_);
lean_ctor_set(v___x_418_, 1, v_k_421_);
lean_ctor_set(v___x_418_, 0, v___x_433_);
v___x_442_ = v___x_418_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v_k_421_);
lean_ctor_set(v_reuseFailAlloc_443_, 2, v_v_422_);
lean_ctor_set(v_reuseFailAlloc_443_, 3, v___y_436_);
lean_ctor_set(v_reuseFailAlloc_443_, 4, v___x_440_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
v___jp_445_:
{
lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_447_ = lean_nat_add(v___x_432_, v___y_446_);
lean_dec(v___y_446_);
lean_dec(v___x_432_);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 4, v_l_423_);
lean_ctor_set(v___x_258_, 0, v___x_447_);
v___x_449_ = v___x_258_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v___x_447_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_453_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_453_, 3, v_l_255_);
lean_ctor_set(v_reuseFailAlloc_453_, 4, v_l_423_);
v___x_449_ = v_reuseFailAlloc_453_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_450_; 
v___x_450_ = lean_nat_add(v___x_402_, v_size_425_);
if (lean_obj_tag(v_r_424_) == 0)
{
lean_object* v_size_451_; 
v_size_451_ = lean_ctor_get(v_r_424_, 0);
lean_inc(v_size_451_);
v___y_435_ = v___x_450_;
v___y_436_ = v___x_449_;
v___y_437_ = v_size_451_;
goto v___jp_434_;
}
else
{
lean_object* v___x_452_; 
v___x_452_ = lean_unsigned_to_nat(0u);
v___y_435_ = v___x_450_;
v___y_436_ = v___x_449_;
v___y_437_ = v___x_452_;
goto v___jp_434_;
}
}
}
}
}
else
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_466_; 
lean_del_object(v___x_258_);
v___x_462_ = lean_nat_add(v___x_402_, v_size_403_);
v___x_463_ = lean_nat_add(v___x_462_, v_size_404_);
lean_dec(v_size_404_);
v___x_464_ = lean_nat_add(v___x_462_, v_size_420_);
lean_dec(v___x_462_);
lean_inc_ref(v_l_255_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 4, v_l_407_);
lean_ctor_set(v___x_418_, 3, v_l_255_);
lean_ctor_set(v___x_418_, 2, v_v_254_);
lean_ctor_set(v___x_418_, 1, v_k_253_);
lean_ctor_set(v___x_418_, 0, v___x_464_);
v___x_466_ = v___x_418_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_464_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_479_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_479_, 3, v_l_255_);
lean_ctor_set(v_reuseFailAlloc_479_, 4, v_l_407_);
v___x_466_ = v_reuseFailAlloc_479_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_473_; 
v_isSharedCheck_473_ = !lean_is_exclusive(v_l_255_);
if (v_isSharedCheck_473_ == 0)
{
lean_object* v_unused_474_; lean_object* v_unused_475_; lean_object* v_unused_476_; lean_object* v_unused_477_; lean_object* v_unused_478_; 
v_unused_474_ = lean_ctor_get(v_l_255_, 4);
lean_dec(v_unused_474_);
v_unused_475_ = lean_ctor_get(v_l_255_, 3);
lean_dec(v_unused_475_);
v_unused_476_ = lean_ctor_get(v_l_255_, 2);
lean_dec(v_unused_476_);
v_unused_477_ = lean_ctor_get(v_l_255_, 1);
lean_dec(v_unused_477_);
v_unused_478_ = lean_ctor_get(v_l_255_, 0);
lean_dec(v_unused_478_);
v___x_468_ = v_l_255_;
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
else
{
lean_dec(v_l_255_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_471_; 
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 4, v_r_408_);
lean_ctor_set(v___x_468_, 3, v___x_466_);
lean_ctor_set(v___x_468_, 2, v_v_406_);
lean_ctor_set(v___x_468_, 1, v_k_405_);
lean_ctor_set(v___x_468_, 0, v___x_463_);
v___x_471_ = v___x_468_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_463_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_k_405_);
lean_ctor_set(v_reuseFailAlloc_472_, 2, v_v_406_);
lean_ctor_set(v_reuseFailAlloc_472_, 3, v___x_466_);
lean_ctor_set(v_reuseFailAlloc_472_, 4, v_r_408_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_486_; 
v_l_486_ = lean_ctor_get(v_impl_401_, 3);
lean_inc(v_l_486_);
if (lean_obj_tag(v_l_486_) == 0)
{
lean_object* v_r_487_; lean_object* v_k_488_; lean_object* v_v_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_512_; 
v_r_487_ = lean_ctor_get(v_impl_401_, 4);
v_k_488_ = lean_ctor_get(v_impl_401_, 1);
v_v_489_ = lean_ctor_get(v_impl_401_, 2);
v_isSharedCheck_512_ = !lean_is_exclusive(v_impl_401_);
if (v_isSharedCheck_512_ == 0)
{
lean_object* v_unused_513_; lean_object* v_unused_514_; 
v_unused_513_ = lean_ctor_get(v_impl_401_, 3);
lean_dec(v_unused_513_);
v_unused_514_ = lean_ctor_get(v_impl_401_, 0);
lean_dec(v_unused_514_);
v___x_491_ = v_impl_401_;
v_isShared_492_ = v_isSharedCheck_512_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_r_487_);
lean_inc(v_v_489_);
lean_inc(v_k_488_);
lean_dec(v_impl_401_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_512_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v_k_493_; lean_object* v_v_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_508_; 
v_k_493_ = lean_ctor_get(v_l_486_, 1);
v_v_494_ = lean_ctor_get(v_l_486_, 2);
v_isSharedCheck_508_ = !lean_is_exclusive(v_l_486_);
if (v_isSharedCheck_508_ == 0)
{
lean_object* v_unused_509_; lean_object* v_unused_510_; lean_object* v_unused_511_; 
v_unused_509_ = lean_ctor_get(v_l_486_, 4);
lean_dec(v_unused_509_);
v_unused_510_ = lean_ctor_get(v_l_486_, 3);
lean_dec(v_unused_510_);
v_unused_511_ = lean_ctor_get(v_l_486_, 0);
lean_dec(v_unused_511_);
v___x_496_ = v_l_486_;
v_isShared_497_ = v_isSharedCheck_508_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_v_494_);
lean_inc(v_k_493_);
lean_dec(v_l_486_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_508_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_498_; lean_object* v___x_500_; 
v___x_498_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_487_, 2);
if (v_isShared_497_ == 0)
{
lean_ctor_set(v___x_496_, 4, v_r_487_);
lean_ctor_set(v___x_496_, 3, v_r_487_);
lean_ctor_set(v___x_496_, 2, v_v_254_);
lean_ctor_set(v___x_496_, 1, v_k_253_);
lean_ctor_set(v___x_496_, 0, v___x_402_);
v___x_500_ = v___x_496_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_507_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_507_, 3, v_r_487_);
lean_ctor_set(v_reuseFailAlloc_507_, 4, v_r_487_);
v___x_500_ = v_reuseFailAlloc_507_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
lean_object* v___x_502_; 
lean_inc(v_r_487_);
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 3, v_r_487_);
lean_ctor_set(v___x_491_, 0, v___x_402_);
v___x_502_ = v___x_491_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_506_, 1, v_k_488_);
lean_ctor_set(v_reuseFailAlloc_506_, 2, v_v_489_);
lean_ctor_set(v_reuseFailAlloc_506_, 3, v_r_487_);
lean_ctor_set(v_reuseFailAlloc_506_, 4, v_r_487_);
v___x_502_ = v_reuseFailAlloc_506_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
lean_object* v___x_504_; 
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 4, v___x_502_);
lean_ctor_set(v___x_258_, 3, v___x_500_);
lean_ctor_set(v___x_258_, 2, v_v_494_);
lean_ctor_set(v___x_258_, 1, v_k_493_);
lean_ctor_set(v___x_258_, 0, v___x_498_);
v___x_504_ = v___x_258_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_498_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v_k_493_);
lean_ctor_set(v_reuseFailAlloc_505_, 2, v_v_494_);
lean_ctor_set(v_reuseFailAlloc_505_, 3, v___x_500_);
lean_ctor_set(v_reuseFailAlloc_505_, 4, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
}
else
{
lean_object* v_r_515_; 
v_r_515_ = lean_ctor_get(v_impl_401_, 4);
lean_inc(v_r_515_);
if (lean_obj_tag(v_r_515_) == 0)
{
lean_object* v_k_516_; lean_object* v_v_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_528_; 
v_k_516_ = lean_ctor_get(v_impl_401_, 1);
v_v_517_ = lean_ctor_get(v_impl_401_, 2);
v_isSharedCheck_528_ = !lean_is_exclusive(v_impl_401_);
if (v_isSharedCheck_528_ == 0)
{
lean_object* v_unused_529_; lean_object* v_unused_530_; lean_object* v_unused_531_; 
v_unused_529_ = lean_ctor_get(v_impl_401_, 4);
lean_dec(v_unused_529_);
v_unused_530_ = lean_ctor_get(v_impl_401_, 3);
lean_dec(v_unused_530_);
v_unused_531_ = lean_ctor_get(v_impl_401_, 0);
lean_dec(v_unused_531_);
v___x_519_ = v_impl_401_;
v_isShared_520_ = v_isSharedCheck_528_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_v_517_);
lean_inc(v_k_516_);
lean_dec(v_impl_401_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_528_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_521_ = lean_unsigned_to_nat(3u);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 4, v_l_486_);
lean_ctor_set(v___x_519_, 2, v_v_254_);
lean_ctor_set(v___x_519_, 1, v_k_253_);
lean_ctor_set(v___x_519_, 0, v___x_402_);
v___x_523_ = v___x_519_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___x_402_);
lean_ctor_set(v_reuseFailAlloc_527_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_527_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_527_, 3, v_l_486_);
lean_ctor_set(v_reuseFailAlloc_527_, 4, v_l_486_);
v___x_523_ = v_reuseFailAlloc_527_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
lean_object* v___x_525_; 
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 4, v_r_515_);
lean_ctor_set(v___x_258_, 3, v___x_523_);
lean_ctor_set(v___x_258_, 2, v_v_517_);
lean_ctor_set(v___x_258_, 1, v_k_516_);
lean_ctor_set(v___x_258_, 0, v___x_521_);
v___x_525_ = v___x_258_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_526_, 1, v_k_516_);
lean_ctor_set(v_reuseFailAlloc_526_, 2, v_v_517_);
lean_ctor_set(v_reuseFailAlloc_526_, 3, v___x_523_);
lean_ctor_set(v_reuseFailAlloc_526_, 4, v_r_515_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
else
{
lean_object* v___x_532_; lean_object* v___x_534_; 
v___x_532_ = lean_unsigned_to_nat(2u);
if (v_isShared_259_ == 0)
{
lean_ctor_set(v___x_258_, 4, v_impl_401_);
lean_ctor_set(v___x_258_, 3, v_r_515_);
lean_ctor_set(v___x_258_, 0, v___x_532_);
v___x_534_ = v___x_258_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_532_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_k_253_);
lean_ctor_set(v_reuseFailAlloc_535_, 2, v_v_254_);
lean_ctor_set(v_reuseFailAlloc_535_, 3, v_r_515_);
lean_ctor_set(v_reuseFailAlloc_535_, 4, v_impl_401_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
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
lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_537_ = lean_unsigned_to_nat(1u);
v___x_538_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
lean_ctor_set(v___x_538_, 1, v_k_249_);
lean_ctor_set(v___x_538_, 2, v_v_250_);
lean_ctor_set(v___x_538_, 3, v_t_251_);
lean_ctor_set(v___x_538_, 4, v_t_251_);
return v___x_538_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_insert(lean_object* v_s_539_, lean_object* v_mvarId_540_){
_start:
{
uint8_t v___x_541_; 
v___x_541_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___redArg(v_mvarId_540_, v_s_539_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_box(0);
v___x_543_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LMVarIdSet_insert_spec__1___redArg(v_mvarId_540_, v___x_542_, v_s_539_);
return v___x_543_;
}
else
{
lean_dec(v_mvarId_540_);
return v_s_539_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0(lean_object* v_00_u03b2_544_, lean_object* v_k_545_, lean_object* v_t_546_){
_start:
{
uint8_t v___x_547_; 
v___x_547_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___redArg(v_k_545_, v_t_546_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___boxed(lean_object* v_00_u03b2_548_, lean_object* v_k_549_, lean_object* v_t_550_){
_start:
{
uint8_t v_res_551_; lean_object* v_r_552_; 
v_res_551_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0(v_00_u03b2_548_, v_k_549_, v_t_550_);
lean_dec(v_t_550_);
lean_dec(v_k_549_);
v_r_552_ = lean_box(v_res_551_);
return v_r_552_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LMVarIdSet_insert_spec__1(lean_object* v_00_u03b2_553_, lean_object* v_k_554_, lean_object* v_v_555_, lean_object* v_t_556_, lean_object* v_hl_557_){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LMVarIdSet_insert_spec__1___redArg(v_k_554_, v_v_555_, v_t_556_);
return v___x_558_;
}
}
LEAN_EXPORT uint8_t l_Lean_LMVarIdSet_contains(lean_object* v_s_559_, lean_object* v_mvarId_560_){
_start:
{
uint8_t v___x_561_; 
v___x_561_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___redArg(v_mvarId_560_, v_s_559_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_contains___boxed(lean_object* v_s_562_, lean_object* v_mvarId_563_){
_start:
{
uint8_t v_res_564_; lean_object* v_r_565_; 
v_res_564_ = l_Lean_LMVarIdSet_contains(v_s_562_, v_mvarId_563_);
lean_dec(v_mvarId_563_);
lean_dec(v_s_562_);
v_r_565_ = lean_box(v_res_564_);
return v_r_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_size(lean_object* v_s_566_){
_start:
{
if (lean_obj_tag(v_s_566_) == 0)
{
lean_object* v_size_567_; 
v_size_567_ = lean_ctor_get(v_s_566_, 0);
lean_inc(v_size_567_);
return v_size_567_;
}
else
{
lean_object* v___x_568_; 
v___x_568_ = lean_unsigned_to_nat(0u);
return v___x_568_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_size___boxed(lean_object* v_s_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lean_LMVarIdSet_size(v_s_569_);
lean_dec(v_s_569_);
return v_res_570_;
}
}
LEAN_EXPORT uint8_t l_Lean_LMVarIdSet_isEmpty(lean_object* v_s_571_){
_start:
{
if (lean_obj_tag(v_s_571_) == 0)
{
uint8_t v___x_572_; 
v___x_572_ = 0;
return v___x_572_;
}
else
{
uint8_t v___x_573_; 
v___x_573_ = 1;
return v___x_573_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_isEmpty___boxed(lean_object* v_s_574_){
_start:
{
uint8_t v_res_575_; lean_object* v_r_576_; 
v_res_575_ = l_Lean_LMVarIdSet_isEmpty(v_s_574_);
lean_dec(v_s_574_);
v_r_576_ = lean_box(v_res_575_);
return v_r_576_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_LMVarIdSet_toList_spec__0(lean_object* v_init_577_, lean_object* v_x_578_){
_start:
{
if (lean_obj_tag(v_x_578_) == 0)
{
lean_object* v_k_579_; lean_object* v_l_580_; lean_object* v_r_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v_k_579_ = lean_ctor_get(v_x_578_, 1);
v_l_580_ = lean_ctor_get(v_x_578_, 3);
v_r_581_ = lean_ctor_get(v_x_578_, 4);
v___x_582_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_LMVarIdSet_toList_spec__0(v_init_577_, v_r_581_);
lean_inc(v_k_579_);
v___x_583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_583_, 0, v_k_579_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v_init_577_ = v___x_583_;
v_x_578_ = v_l_580_;
goto _start;
}
else
{
return v_init_577_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_LMVarIdSet_toList_spec__0___boxed(lean_object* v_init_585_, lean_object* v_x_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_LMVarIdSet_toList_spec__0(v_init_585_, v_x_586_);
lean_dec(v_x_586_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_toList(lean_object* v_s_588_){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = lean_box(0);
v___x_590_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_LMVarIdSet_toList_spec__0(v___x_589_, v_s_588_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_toList___boxed(lean_object* v_s_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_LMVarIdSet_toList(v_s_591_);
lean_dec(v_s_591_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LMVarIdSet_toArray_spec__0_spec__0(lean_object* v_init_593_, lean_object* v_x_594_){
_start:
{
if (lean_obj_tag(v_x_594_) == 0)
{
lean_object* v_k_595_; lean_object* v_l_596_; lean_object* v_r_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v_k_595_ = lean_ctor_get(v_x_594_, 1);
lean_inc(v_k_595_);
v_l_596_ = lean_ctor_get(v_x_594_, 3);
lean_inc(v_l_596_);
v_r_597_ = lean_ctor_get(v_x_594_, 4);
lean_inc(v_r_597_);
lean_dec_ref_known(v_x_594_, 5);
v___x_598_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LMVarIdSet_toArray_spec__0_spec__0(v_init_593_, v_l_596_);
v___x_599_ = lean_array_push(v___x_598_, v_k_595_);
v_init_593_ = v___x_599_;
v_x_594_ = v_r_597_;
goto _start;
}
else
{
return v_init_593_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdSet_toArray(lean_object* v_s_601_){
_start:
{
lean_object* v___y_603_; 
if (lean_obj_tag(v_s_601_) == 0)
{
lean_object* v_size_606_; 
v_size_606_ = lean_ctor_get(v_s_601_, 0);
lean_inc(v_size_606_);
v___y_603_ = v_size_606_;
goto v___jp_602_;
}
else
{
lean_object* v___x_607_; 
v___x_607_ = lean_unsigned_to_nat(0u);
v___y_603_ = v___x_607_;
goto v___jp_602_;
}
v___jp_602_:
{
lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_604_ = lean_mk_empty_array_with_capacity(v___y_603_);
lean_dec(v___y_603_);
v___x_605_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LMVarIdSet_toArray_spec__0_spec__0(v___x_604_, v_s_601_);
return v___x_605_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LMVarIdSet_toArray_spec__0(lean_object* v_init_608_, lean_object* v_t_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_LMVarIdSet_toArray_spec__0_spec__0(v_init_608_, v_t_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___redArg(){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = lean_box(1);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap___redArg___boxed(lean_object* v___dummy_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lean_instEmptyCollectionLMVarIdMap___redArg();
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_instEmptyCollectionLMVarIdMap(lean_object* v_00_u03b1_615_){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = lean_box(1);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___redArg___lam__0(lean_object* v_f_617_, lean_object* v_a_618_, lean_object* v_b_619_, lean_object* v_c_620_){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v_a_618_);
lean_ctor_set(v___x_621_, 1, v_b_619_);
v___x_622_ = lean_apply_2(v_f_617_, v___x_621_, v_c_620_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___redArg___lam__2(lean_object* v_inst_623_, lean_object* v_00_u03b2_624_, lean_object* v_s_625_, lean_object* v_init_626_, lean_object* v_f_627_){
_start:
{
lean_object* v_toApplicative_628_; lean_object* v_toBind_629_; lean_object* v_toPure_630_; lean_object* v___f_631_; lean_object* v___x_632_; lean_object* v___f_633_; lean_object* v___x_634_; 
v_toApplicative_628_ = lean_ctor_get(v_inst_623_, 0);
v_toBind_629_ = lean_ctor_get(v_inst_623_, 1);
lean_inc(v_toBind_629_);
v_toPure_630_ = lean_ctor_get(v_toApplicative_628_, 1);
lean_inc(v_toPure_630_);
v___f_631_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_631_, 0, v_f_627_);
v___x_632_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_623_, v___f_631_, v_init_626_, v_s_625_);
v___f_633_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdSetLMVarIdOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_633_, 0, v_toPure_630_);
v___x_634_ = lean_apply_4(v_toBind_629_, lean_box(0), lean_box(0), v___x_632_, v___f_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___redArg(lean_object* v_inst_635_){
_start:
{
lean_object* v___f_636_; 
v___f_636_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_636_, 0, v_inst_635_);
return v___f_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad(lean_object* v_m_637_, lean_object* v_00_u03b1_638_, lean_object* v_inst_639_){
_start:
{
lean_object* v___f_640_; 
v___f_640_ = lean_alloc_closure((void*)(l_Lean_instForInLMVarIdMapProdLMVarIdOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_640_, 0, v_inst_639_);
return v___f_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap___redArg(){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = lean_box(1);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap___redArg___boxed(lean_object* v___dummy_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lean_instInhabitedLMVarIdMap___redArg();
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedLMVarIdMap(lean_object* v_00_u03b1_645_){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = lean_box(1);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_insert___redArg(lean_object* v_s_647_, lean_object* v_mvarId_648_, lean_object* v_a_649_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LMVarIdSet_insert_spec__1___redArg(v_mvarId_648_, v_a_649_, v_s_647_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_insert(lean_object* v_00_u03b1_651_, lean_object* v_s_652_, lean_object* v_mvarId_653_, lean_object* v_a_654_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_LMVarIdSet_insert_spec__1___redArg(v_mvarId_653_, v_a_654_, v_s_652_);
return v___x_655_;
}
}
LEAN_EXPORT uint8_t l_Lean_LMVarIdMap_contains___redArg(lean_object* v_s_656_, lean_object* v_mvarId_657_){
_start:
{
uint8_t v___x_658_; 
v___x_658_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___redArg(v_mvarId_657_, v_s_656_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_contains___redArg___boxed(lean_object* v_s_659_, lean_object* v_mvarId_660_){
_start:
{
uint8_t v_res_661_; lean_object* v_r_662_; 
v_res_661_ = l_Lean_LMVarIdMap_contains___redArg(v_s_659_, v_mvarId_660_);
lean_dec(v_mvarId_660_);
lean_dec(v_s_659_);
v_r_662_ = lean_box(v_res_661_);
return v_r_662_;
}
}
LEAN_EXPORT uint8_t l_Lean_LMVarIdMap_contains(lean_object* v_00_u03b1_663_, lean_object* v_s_664_, lean_object* v_mvarId_665_){
_start:
{
uint8_t v___x_666_; 
v___x_666_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_LMVarIdSet_insert_spec__0___redArg(v_mvarId_665_, v_s_664_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_contains___boxed(lean_object* v_00_u03b1_667_, lean_object* v_s_668_, lean_object* v_mvarId_669_){
_start:
{
uint8_t v_res_670_; lean_object* v_r_671_; 
v_res_670_ = l_Lean_LMVarIdMap_contains(v_00_u03b1_667_, v_s_668_, v_mvarId_669_);
lean_dec(v_mvarId_669_);
lean_dec(v_s_668_);
v_r_671_ = lean_box(v_res_670_);
return v_r_671_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0___redArg(lean_object* v_t_672_, lean_object* v_k_673_){
_start:
{
if (lean_obj_tag(v_t_672_) == 0)
{
lean_object* v_k_674_; lean_object* v_v_675_; lean_object* v_l_676_; lean_object* v_r_677_; uint8_t v___x_678_; 
v_k_674_ = lean_ctor_get(v_t_672_, 1);
v_v_675_ = lean_ctor_get(v_t_672_, 2);
v_l_676_ = lean_ctor_get(v_t_672_, 3);
v_r_677_ = lean_ctor_get(v_t_672_, 4);
v___x_678_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_673_, v_k_674_);
switch(v___x_678_)
{
case 0:
{
v_t_672_ = v_l_676_;
goto _start;
}
case 1:
{
lean_object* v___x_680_; 
lean_inc(v_v_675_);
v___x_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_680_, 0, v_v_675_);
return v___x_680_;
}
default: 
{
v_t_672_ = v_r_677_;
goto _start;
}
}
}
else
{
lean_object* v___x_682_; 
v___x_682_ = lean_box(0);
return v___x_682_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0___redArg___boxed(lean_object* v_t_683_, lean_object* v_k_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0___redArg(v_t_683_, v_k_684_);
lean_dec(v_k_684_);
lean_dec(v_t_683_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_get_x3f___redArg(lean_object* v_s_686_, lean_object* v_mvarId_687_){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0___redArg(v_s_686_, v_mvarId_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_get_x3f___redArg___boxed(lean_object* v_s_689_, lean_object* v_mvarId_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lean_LMVarIdMap_get_x3f___redArg(v_s_689_, v_mvarId_690_);
lean_dec(v_mvarId_690_);
lean_dec(v_s_689_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_get_x3f(lean_object* v_00_u03b1_692_, lean_object* v_s_693_, lean_object* v_mvarId_694_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0___redArg(v_s_693_, v_mvarId_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_LMVarIdMap_get_x3f___boxed(lean_object* v_00_u03b1_696_, lean_object* v_s_697_, lean_object* v_mvarId_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lean_LMVarIdMap_get_x3f(v_00_u03b1_696_, v_s_697_, v_mvarId_698_);
lean_dec(v_mvarId_698_);
lean_dec(v_s_697_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0(lean_object* v_00_u03b4_700_, lean_object* v_t_701_, lean_object* v_k_702_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0___redArg(v_t_701_, v_k_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0___boxed(lean_object* v_00_u03b4_704_, lean_object* v_t_705_, lean_object* v_k_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_LMVarIdMap_get_x3f_spec__0(v_00_u03b4_704_, v_t_705_, v_k_706_);
lean_dec(v_k_706_);
lean_dec(v_t_705_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorIdx(lean_object* v_x_708_){
_start:
{
switch(lean_obj_tag(v_x_708_))
{
case 0:
{
lean_object* v___x_709_; 
v___x_709_ = lean_unsigned_to_nat(0u);
return v___x_709_;
}
case 1:
{
lean_object* v___x_710_; 
v___x_710_ = lean_unsigned_to_nat(1u);
return v___x_710_;
}
case 2:
{
lean_object* v___x_711_; 
v___x_711_ = lean_unsigned_to_nat(2u);
return v___x_711_;
}
case 3:
{
lean_object* v___x_712_; 
v___x_712_ = lean_unsigned_to_nat(3u);
return v___x_712_;
}
case 4:
{
lean_object* v___x_713_; 
v___x_713_ = lean_unsigned_to_nat(4u);
return v___x_713_;
}
default: 
{
lean_object* v___x_714_; 
v___x_714_ = lean_unsigned_to_nat(5u);
return v___x_714_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorIdx___boxed(lean_object* v_x_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lean_Level_ctorIdx(v_x_715_);
lean_dec(v_x_715_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim___redArg(lean_object* v_t_717_, lean_object* v_k_718_){
_start:
{
switch(lean_obj_tag(v_t_717_))
{
case 0:
{
return v_k_718_;
}
case 2:
{
lean_object* v_a_719_; lean_object* v_a_720_; lean_object* v___x_721_; 
v_a_719_ = lean_ctor_get(v_t_717_, 0);
lean_inc(v_a_719_);
v_a_720_ = lean_ctor_get(v_t_717_, 1);
lean_inc(v_a_720_);
lean_dec_ref_known(v_t_717_, 2);
v___x_721_ = lean_apply_2(v_k_718_, v_a_719_, v_a_720_);
return v___x_721_;
}
case 3:
{
lean_object* v_a_722_; lean_object* v_a_723_; lean_object* v___x_724_; 
v_a_722_ = lean_ctor_get(v_t_717_, 0);
lean_inc(v_a_722_);
v_a_723_ = lean_ctor_get(v_t_717_, 1);
lean_inc(v_a_723_);
lean_dec_ref_known(v_t_717_, 2);
v___x_724_ = lean_apply_2(v_k_718_, v_a_722_, v_a_723_);
return v___x_724_;
}
default: 
{
lean_object* v_a_725_; lean_object* v___x_726_; 
v_a_725_ = lean_ctor_get(v_t_717_, 0);
lean_inc(v_a_725_);
lean_dec(v_t_717_);
v___x_726_ = lean_apply_1(v_k_718_, v_a_725_);
return v___x_726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim(lean_object* v_motive_727_, lean_object* v_ctorIdx_728_, lean_object* v_t_729_, lean_object* v_h_730_, lean_object* v_k_731_){
_start:
{
lean_object* v___x_732_; 
v___x_732_ = l_Lean_Level_ctorElim___redArg(v_t_729_, v_k_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorElim___boxed(lean_object* v_motive_733_, lean_object* v_ctorIdx_734_, lean_object* v_t_735_, lean_object* v_h_736_, lean_object* v_k_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_Level_ctorElim(v_motive_733_, v_ctorIdx_734_, v_t_735_, v_h_736_, v_k_737_);
lean_dec(v_ctorIdx_734_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_zero_elim___redArg(lean_object* v_t_739_, lean_object* v_zero_740_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = l_Lean_Level_ctorElim___redArg(v_t_739_, v_zero_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_zero_elim(lean_object* v_motive_742_, lean_object* v_t_743_, lean_object* v_h_744_, lean_object* v_zero_745_){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = l_Lean_Level_ctorElim___redArg(v_t_743_, v_zero_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_succ_elim___redArg(lean_object* v_t_747_, lean_object* v_succ_748_){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = l_Lean_Level_ctorElim___redArg(v_t_747_, v_succ_748_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_succ_elim(lean_object* v_motive_750_, lean_object* v_t_751_, lean_object* v_h_752_, lean_object* v_succ_753_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_Lean_Level_ctorElim___redArg(v_t_751_, v_succ_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_max_elim___redArg(lean_object* v_t_755_, lean_object* v_max_756_){
_start:
{
lean_object* v___x_757_; 
v___x_757_ = l_Lean_Level_ctorElim___redArg(v_t_755_, v_max_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_max_elim(lean_object* v_motive_758_, lean_object* v_t_759_, lean_object* v_h_760_, lean_object* v_max_761_){
_start:
{
lean_object* v___x_762_; 
v___x_762_ = l_Lean_Level_ctorElim___redArg(v_t_759_, v_max_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_imax_elim___redArg(lean_object* v_t_763_, lean_object* v_imax_764_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_Lean_Level_ctorElim___redArg(v_t_763_, v_imax_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_imax_elim(lean_object* v_motive_766_, lean_object* v_t_767_, lean_object* v_h_768_, lean_object* v_imax_769_){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = l_Lean_Level_ctorElim___redArg(v_t_767_, v_imax_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_param_elim___redArg(lean_object* v_t_771_, lean_object* v_param_772_){
_start:
{
lean_object* v___x_773_; 
v___x_773_ = l_Lean_Level_ctorElim___redArg(v_t_771_, v_param_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_param_elim(lean_object* v_motive_774_, lean_object* v_t_775_, lean_object* v_h_776_, lean_object* v_param_777_){
_start:
{
lean_object* v___x_778_; 
v___x_778_ = l_Lean_Level_ctorElim___redArg(v_t_775_, v_param_777_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mvar_elim___redArg(lean_object* v_t_779_, lean_object* v_mvar_780_){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = l_Lean_Level_ctorElim___redArg(v_t_779_, v_mvar_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mvar_elim(lean_object* v_motive_782_, lean_object* v_t_783_, lean_object* v_h_784_, lean_object* v_mvar_785_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l_Lean_Level_ctorElim___redArg(v_t_783_, v_mvar_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___redArg(lean_object* v_t_787_, lean_object* v_zero_788_, lean_object* v_succ_789_, lean_object* v_max_790_, lean_object* v_imax_791_, lean_object* v_param_792_, lean_object* v_mvar_793_){
_start:
{
switch(lean_obj_tag(v_t_787_))
{
case 0:
{
lean_dec(v_mvar_793_);
lean_dec(v_param_792_);
lean_dec(v_imax_791_);
lean_dec(v_max_790_);
lean_dec(v_succ_789_);
lean_inc(v_zero_788_);
return v_zero_788_;
}
case 1:
{
lean_object* v_a_794_; lean_object* v___x_795_; 
lean_dec(v_mvar_793_);
lean_dec(v_param_792_);
lean_dec(v_imax_791_);
lean_dec(v_max_790_);
v_a_794_ = lean_ctor_get(v_t_787_, 0);
lean_inc(v_a_794_);
lean_dec_ref_known(v_t_787_, 1);
v___x_795_ = lean_apply_1(v_succ_789_, v_a_794_);
return v___x_795_;
}
case 2:
{
lean_object* v_a_796_; lean_object* v_a_797_; lean_object* v___x_798_; 
lean_dec(v_mvar_793_);
lean_dec(v_param_792_);
lean_dec(v_imax_791_);
lean_dec(v_succ_789_);
v_a_796_ = lean_ctor_get(v_t_787_, 0);
lean_inc(v_a_796_);
v_a_797_ = lean_ctor_get(v_t_787_, 1);
lean_inc(v_a_797_);
lean_dec_ref_known(v_t_787_, 2);
v___x_798_ = lean_apply_2(v_max_790_, v_a_796_, v_a_797_);
return v___x_798_;
}
case 3:
{
lean_object* v_a_799_; lean_object* v_a_800_; lean_object* v___x_801_; 
lean_dec(v_mvar_793_);
lean_dec(v_param_792_);
lean_dec(v_max_790_);
lean_dec(v_succ_789_);
v_a_799_ = lean_ctor_get(v_t_787_, 0);
lean_inc(v_a_799_);
v_a_800_ = lean_ctor_get(v_t_787_, 1);
lean_inc(v_a_800_);
lean_dec_ref_known(v_t_787_, 2);
v___x_801_ = lean_apply_2(v_imax_791_, v_a_799_, v_a_800_);
return v___x_801_;
}
case 4:
{
lean_object* v_a_802_; lean_object* v___x_803_; 
lean_dec(v_mvar_793_);
lean_dec(v_imax_791_);
lean_dec(v_max_790_);
lean_dec(v_succ_789_);
v_a_802_ = lean_ctor_get(v_t_787_, 0);
lean_inc(v_a_802_);
lean_dec_ref_known(v_t_787_, 1);
v___x_803_ = lean_apply_1(v_param_792_, v_a_802_);
return v___x_803_;
}
default: 
{
lean_object* v_a_804_; lean_object* v___x_805_; 
lean_dec(v_param_792_);
lean_dec(v_imax_791_);
lean_dec(v_max_790_);
lean_dec(v_succ_789_);
v_a_804_ = lean_ctor_get(v_t_787_, 0);
lean_inc(v_a_804_);
lean_dec_ref_known(v_t_787_, 1);
v___x_805_ = lean_apply_1(v_mvar_793_, v_a_804_);
return v___x_805_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___redArg___boxed(lean_object* v_t_806_, lean_object* v_zero_807_, lean_object* v_succ_808_, lean_object* v_max_809_, lean_object* v_imax_810_, lean_object* v_param_811_, lean_object* v_mvar_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lean_Level_casesOn___override___redArg(v_t_806_, v_zero_807_, v_succ_808_, v_max_809_, v_imax_810_, v_param_811_, v_mvar_812_);
lean_dec(v_zero_807_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override(lean_object* v_motive_814_, lean_object* v_t_815_, lean_object* v_zero_816_, lean_object* v_succ_817_, lean_object* v_max_818_, lean_object* v_imax_819_, lean_object* v_param_820_, lean_object* v_mvar_821_){
_start:
{
switch(lean_obj_tag(v_t_815_))
{
case 0:
{
lean_dec(v_mvar_821_);
lean_dec(v_param_820_);
lean_dec(v_imax_819_);
lean_dec(v_max_818_);
lean_dec(v_succ_817_);
lean_inc(v_zero_816_);
return v_zero_816_;
}
case 1:
{
lean_object* v_a_822_; lean_object* v___x_823_; 
lean_dec(v_mvar_821_);
lean_dec(v_param_820_);
lean_dec(v_imax_819_);
lean_dec(v_max_818_);
v_a_822_ = lean_ctor_get(v_t_815_, 0);
lean_inc(v_a_822_);
lean_dec_ref_known(v_t_815_, 1);
v___x_823_ = lean_apply_1(v_succ_817_, v_a_822_);
return v___x_823_;
}
case 2:
{
lean_object* v_a_824_; lean_object* v_a_825_; lean_object* v___x_826_; 
lean_dec(v_mvar_821_);
lean_dec(v_param_820_);
lean_dec(v_imax_819_);
lean_dec(v_succ_817_);
v_a_824_ = lean_ctor_get(v_t_815_, 0);
lean_inc(v_a_824_);
v_a_825_ = lean_ctor_get(v_t_815_, 1);
lean_inc(v_a_825_);
lean_dec_ref_known(v_t_815_, 2);
v___x_826_ = lean_apply_2(v_max_818_, v_a_824_, v_a_825_);
return v___x_826_;
}
case 3:
{
lean_object* v_a_827_; lean_object* v_a_828_; lean_object* v___x_829_; 
lean_dec(v_mvar_821_);
lean_dec(v_param_820_);
lean_dec(v_max_818_);
lean_dec(v_succ_817_);
v_a_827_ = lean_ctor_get(v_t_815_, 0);
lean_inc(v_a_827_);
v_a_828_ = lean_ctor_get(v_t_815_, 1);
lean_inc(v_a_828_);
lean_dec_ref_known(v_t_815_, 2);
v___x_829_ = lean_apply_2(v_imax_819_, v_a_827_, v_a_828_);
return v___x_829_;
}
case 4:
{
lean_object* v_a_830_; lean_object* v___x_831_; 
lean_dec(v_mvar_821_);
lean_dec(v_imax_819_);
lean_dec(v_max_818_);
lean_dec(v_succ_817_);
v_a_830_ = lean_ctor_get(v_t_815_, 0);
lean_inc(v_a_830_);
lean_dec_ref_known(v_t_815_, 1);
v___x_831_ = lean_apply_1(v_param_820_, v_a_830_);
return v___x_831_;
}
default: 
{
lean_object* v_a_832_; lean_object* v___x_833_; 
lean_dec(v_param_820_);
lean_dec(v_imax_819_);
lean_dec(v_max_818_);
lean_dec(v_succ_817_);
v_a_832_ = lean_ctor_get(v_t_815_, 0);
lean_inc(v_a_832_);
lean_dec_ref_known(v_t_815_, 1);
v___x_833_ = lean_apply_1(v_mvar_821_, v_a_832_);
return v___x_833_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_casesOn___override___boxed(lean_object* v_motive_834_, lean_object* v_t_835_, lean_object* v_zero_836_, lean_object* v_succ_837_, lean_object* v_max_838_, lean_object* v_imax_839_, lean_object* v_param_840_, lean_object* v_mvar_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_Lean_Level_casesOn___override(v_motive_834_, v_t_835_, v_zero_836_, v_succ_837_, v_max_838_, v_imax_839_, v_param_840_, v_mvar_841_);
lean_dec(v_zero_836_);
return v_res_842_;
}
}
static lean_object* _init_l_Lean_Level_zero___override(void){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = lean_box(0);
return v___x_843_;
}
}
static uint64_t _init_l_Lean_Level_data___override___closed__0(void){
_start:
{
uint8_t v___x_844_; lean_object* v___x_845_; uint64_t v___x_846_; uint64_t v___x_847_; 
v___x_844_ = 0;
v___x_845_ = lean_unsigned_to_nat(0u);
v___x_846_ = 2221ULL;
v___x_847_ = lean_level_mk_data(v___x_846_, v___x_845_, v___x_844_, v___x_844_);
return v___x_847_;
}
}
LEAN_EXPORT uint64_t l_Lean_Level_data___override(lean_object* v_x_848_){
_start:
{
switch(lean_obj_tag(v_x_848_))
{
case 0:
{
uint64_t v___x_849_; 
v___x_849_ = lean_uint64_once(&l_Lean_Level_data___override___closed__0, &l_Lean_Level_data___override___closed__0_once, _init_l_Lean_Level_data___override___closed__0);
return v___x_849_;
}
case 2:
{
uint64_t v_data_850_; 
v_data_850_ = lean_ctor_get_uint64(v_x_848_, sizeof(void*)*2);
return v_data_850_;
}
case 3:
{
uint64_t v_data_851_; 
v_data_851_ = lean_ctor_get_uint64(v_x_848_, sizeof(void*)*2);
return v_data_851_;
}
default: 
{
uint64_t v_data_852_; 
v_data_852_ = lean_ctor_get_uint64(v_x_848_, sizeof(void*)*1);
return v_data_852_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_data___override___boxed(lean_object* v_x_853_){
_start:
{
uint64_t v_res_854_; lean_object* v_r_855_; 
v_res_854_ = l_Lean_Level_data___override(v_x_853_);
lean_dec(v_x_853_);
v_r_855_ = lean_box_uint64(v_res_854_);
return v_r_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_succ___override(lean_object* v_a_856_){
_start:
{
uint64_t v___x_857_; uint64_t v___x_858_; uint64_t v___x_859_; uint64_t v___x_860_; uint32_t v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; uint8_t v___x_866_; uint64_t v___x_867_; lean_object* v___x_868_; 
v___x_857_ = 2243ULL;
v___x_858_ = l_Lean_Level_data___override(v_a_856_);
v___x_859_ = l_Lean_Level_Data_hash(v___x_858_);
v___x_860_ = lean_uint64_mix_hash(v___x_857_, v___x_859_);
v___x_861_ = l_Lean_Level_Data_depth(v___x_858_);
v___x_862_ = lean_uint32_to_nat(v___x_861_);
v___x_863_ = lean_unsigned_to_nat(1u);
v___x_864_ = lean_nat_add(v___x_862_, v___x_863_);
lean_dec(v___x_862_);
v___x_865_ = l_Lean_Level_Data_hasMVar(v___x_858_);
v___x_866_ = l_Lean_Level_Data_hasParam(v___x_858_);
v___x_867_ = lean_level_mk_data(v___x_860_, v___x_864_, v___x_865_, v___x_866_);
v___x_868_ = lean_alloc_ctor(1, 1, 8);
lean_ctor_set(v___x_868_, 0, v_a_856_);
lean_ctor_set_uint64(v___x_868_, sizeof(void*)*1, v___x_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_max___override(lean_object* v_a_869_, lean_object* v_a_870_){
_start:
{
uint64_t v___x_871_; uint64_t v___x_872_; uint64_t v___x_873_; uint64_t v___x_874_; uint64_t v___x_875_; uint64_t v___x_876_; uint64_t v___x_877_; lean_object* v___y_879_; uint8_t v___y_880_; uint8_t v___y_881_; lean_object* v___y_885_; uint8_t v___y_886_; lean_object* v___y_890_; uint32_t v___x_895_; lean_object* v___x_896_; uint32_t v___x_897_; lean_object* v___x_898_; uint8_t v___x_899_; 
v___x_871_ = 2251ULL;
v___x_872_ = l_Lean_Level_data___override(v_a_869_);
v___x_873_ = l_Lean_Level_Data_hash(v___x_872_);
v___x_874_ = l_Lean_Level_data___override(v_a_870_);
v___x_875_ = l_Lean_Level_Data_hash(v___x_874_);
v___x_876_ = lean_uint64_mix_hash(v___x_873_, v___x_875_);
v___x_877_ = lean_uint64_mix_hash(v___x_871_, v___x_876_);
v___x_895_ = l_Lean_Level_Data_depth(v___x_872_);
v___x_896_ = lean_uint32_to_nat(v___x_895_);
v___x_897_ = l_Lean_Level_Data_depth(v___x_874_);
v___x_898_ = lean_uint32_to_nat(v___x_897_);
v___x_899_ = lean_nat_dec_le(v___x_896_, v___x_898_);
if (v___x_899_ == 0)
{
lean_dec(v___x_898_);
v___y_890_ = v___x_896_;
goto v___jp_889_;
}
else
{
lean_dec(v___x_896_);
v___y_890_ = v___x_898_;
goto v___jp_889_;
}
v___jp_878_:
{
uint64_t v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_level_mk_data(v___x_877_, v___y_879_, v___y_880_, v___y_881_);
v___x_883_ = lean_alloc_ctor(2, 2, 8);
lean_ctor_set(v___x_883_, 0, v_a_869_);
lean_ctor_set(v___x_883_, 1, v_a_870_);
lean_ctor_set_uint64(v___x_883_, sizeof(void*)*2, v___x_882_);
return v___x_883_;
}
v___jp_884_:
{
uint8_t v___x_887_; 
v___x_887_ = l_Lean_Level_Data_hasParam(v___x_872_);
if (v___x_887_ == 0)
{
uint8_t v___x_888_; 
v___x_888_ = l_Lean_Level_Data_hasParam(v___x_874_);
v___y_879_ = v___y_885_;
v___y_880_ = v___y_886_;
v___y_881_ = v___x_888_;
goto v___jp_878_;
}
else
{
v___y_879_ = v___y_885_;
v___y_880_ = v___y_886_;
v___y_881_ = v___x_887_;
goto v___jp_878_;
}
}
v___jp_889_:
{
lean_object* v___x_891_; lean_object* v___x_892_; uint8_t v___x_893_; 
v___x_891_ = lean_unsigned_to_nat(1u);
v___x_892_ = lean_nat_add(v___y_890_, v___x_891_);
lean_dec(v___y_890_);
v___x_893_ = l_Lean_Level_Data_hasMVar(v___x_872_);
if (v___x_893_ == 0)
{
uint8_t v___x_894_; 
v___x_894_ = l_Lean_Level_Data_hasMVar(v___x_874_);
v___y_885_ = v___x_892_;
v___y_886_ = v___x_894_;
goto v___jp_884_;
}
else
{
v___y_885_ = v___x_892_;
v___y_886_ = v___x_893_;
goto v___jp_884_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_imax___override(lean_object* v_a_900_, lean_object* v_a_901_){
_start:
{
uint64_t v___x_902_; uint64_t v___x_903_; uint64_t v___x_904_; uint64_t v___x_905_; uint64_t v___x_906_; uint64_t v___x_907_; uint64_t v___x_908_; lean_object* v___y_910_; uint8_t v___y_911_; uint8_t v___y_912_; lean_object* v___y_916_; uint8_t v___y_917_; lean_object* v___y_921_; uint32_t v___x_926_; lean_object* v___x_927_; uint32_t v___x_928_; lean_object* v___x_929_; uint8_t v___x_930_; 
v___x_902_ = 2267ULL;
v___x_903_ = l_Lean_Level_data___override(v_a_900_);
v___x_904_ = l_Lean_Level_Data_hash(v___x_903_);
v___x_905_ = l_Lean_Level_data___override(v_a_901_);
v___x_906_ = l_Lean_Level_Data_hash(v___x_905_);
v___x_907_ = lean_uint64_mix_hash(v___x_904_, v___x_906_);
v___x_908_ = lean_uint64_mix_hash(v___x_902_, v___x_907_);
v___x_926_ = l_Lean_Level_Data_depth(v___x_903_);
v___x_927_ = lean_uint32_to_nat(v___x_926_);
v___x_928_ = l_Lean_Level_Data_depth(v___x_905_);
v___x_929_ = lean_uint32_to_nat(v___x_928_);
v___x_930_ = lean_nat_dec_le(v___x_927_, v___x_929_);
if (v___x_930_ == 0)
{
lean_dec(v___x_929_);
v___y_921_ = v___x_927_;
goto v___jp_920_;
}
else
{
lean_dec(v___x_927_);
v___y_921_ = v___x_929_;
goto v___jp_920_;
}
v___jp_909_:
{
uint64_t v___x_913_; lean_object* v___x_914_; 
v___x_913_ = lean_level_mk_data(v___x_908_, v___y_910_, v___y_911_, v___y_912_);
v___x_914_ = lean_alloc_ctor(3, 2, 8);
lean_ctor_set(v___x_914_, 0, v_a_900_);
lean_ctor_set(v___x_914_, 1, v_a_901_);
lean_ctor_set_uint64(v___x_914_, sizeof(void*)*2, v___x_913_);
return v___x_914_;
}
v___jp_915_:
{
uint8_t v___x_918_; 
v___x_918_ = l_Lean_Level_Data_hasParam(v___x_903_);
if (v___x_918_ == 0)
{
uint8_t v___x_919_; 
v___x_919_ = l_Lean_Level_Data_hasParam(v___x_905_);
v___y_910_ = v___y_916_;
v___y_911_ = v___y_917_;
v___y_912_ = v___x_919_;
goto v___jp_909_;
}
else
{
v___y_910_ = v___y_916_;
v___y_911_ = v___y_917_;
v___y_912_ = v___x_918_;
goto v___jp_909_;
}
}
v___jp_920_:
{
lean_object* v___x_922_; lean_object* v___x_923_; uint8_t v___x_924_; 
v___x_922_ = lean_unsigned_to_nat(1u);
v___x_923_ = lean_nat_add(v___y_921_, v___x_922_);
lean_dec(v___y_921_);
v___x_924_ = l_Lean_Level_Data_hasMVar(v___x_903_);
if (v___x_924_ == 0)
{
uint8_t v___x_925_; 
v___x_925_ = l_Lean_Level_Data_hasMVar(v___x_905_);
v___y_916_ = v___x_923_;
v___y_917_ = v___x_925_;
goto v___jp_915_;
}
else
{
v___y_916_ = v___x_923_;
v___y_917_ = v___x_924_;
goto v___jp_915_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_param___override(lean_object* v_a_931_){
_start:
{
uint64_t v___x_932_; uint64_t v___y_934_; 
v___x_932_ = 2239ULL;
if (lean_obj_tag(v_a_931_) == 0)
{
uint64_t v___x_941_; 
v___x_941_ = 1723ULL;
v___y_934_ = v___x_941_;
goto v___jp_933_;
}
else
{
uint64_t v_hash_942_; 
v_hash_942_ = lean_ctor_get_uint64(v_a_931_, sizeof(void*)*2);
v___y_934_ = v_hash_942_;
goto v___jp_933_;
}
v___jp_933_:
{
uint64_t v___x_935_; lean_object* v___x_936_; uint8_t v___x_937_; uint8_t v___x_938_; uint64_t v___x_939_; lean_object* v___x_940_; 
v___x_935_ = lean_uint64_mix_hash(v___x_932_, v___y_934_);
v___x_936_ = lean_unsigned_to_nat(0u);
v___x_937_ = 0;
v___x_938_ = 1;
v___x_939_ = lean_level_mk_data(v___x_935_, v___x_936_, v___x_937_, v___x_938_);
v___x_940_ = lean_alloc_ctor(4, 1, 8);
lean_ctor_set(v___x_940_, 0, v_a_931_);
lean_ctor_set_uint64(v___x_940_, sizeof(void*)*1, v___x_939_);
return v___x_940_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mvar___override(lean_object* v_a_943_){
_start:
{
uint64_t v___x_944_; uint64_t v___x_945_; uint64_t v___x_946_; lean_object* v___x_947_; uint8_t v___x_948_; uint8_t v___x_949_; uint64_t v___x_950_; lean_object* v___x_951_; 
v___x_944_ = 2237ULL;
v___x_945_ = l_Lean_instHashableLevelMVarId_hash(v_a_943_);
v___x_946_ = lean_uint64_mix_hash(v___x_944_, v___x_945_);
v___x_947_ = lean_unsigned_to_nat(0u);
v___x_948_ = 1;
v___x_949_ = 0;
v___x_950_ = lean_level_mk_data(v___x_946_, v___x_947_, v___x_948_, v___x_949_);
v___x_951_ = lean_alloc_ctor(5, 1, 8);
lean_ctor_set(v___x_951_, 0, v_a_943_);
lean_ctor_set_uint64(v___x_951_, sizeof(void*)*1, v___x_950_);
return v___x_951_;
}
}
static lean_object* _init_l_Lean_instInhabitedLevel_default(void){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = lean_box(0);
return v___x_952_;
}
}
static lean_object* _init_l_Lean_instInhabitedLevel(void){
_start:
{
lean_object* v___x_953_; 
v___x_953_ = lean_box(0);
return v___x_953_;
}
}
static lean_object* _init_l_Lean_instReprLevel_repr___closed__2(void){
_start:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = lean_unsigned_to_nat(2u);
v___x_958_ = lean_nat_to_int(v___x_957_);
return v___x_958_;
}
}
static lean_object* _init_l_Lean_instReprLevel_repr___closed__3(void){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_959_ = lean_unsigned_to_nat(1u);
v___x_960_ = lean_nat_to_int(v___x_959_);
return v___x_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLevel_repr(lean_object* v_x_991_, lean_object* v_prec_992_){
_start:
{
lean_object* v___y_994_; 
switch(lean_obj_tag(v_x_991_))
{
case 0:
{
lean_object* v___x_1000_; uint8_t v___x_1001_; 
v___x_1000_ = lean_unsigned_to_nat(1024u);
v___x_1001_ = lean_nat_dec_le(v___x_1000_, v_prec_992_);
if (v___x_1001_ == 0)
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_994_ = v___x_1002_;
goto v___jp_993_;
}
else
{
lean_object* v___x_1003_; 
v___x_1003_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_994_ = v___x_1003_;
goto v___jp_993_;
}
}
case 1:
{
lean_object* v_a_1004_; lean_object* v___x_1005_; lean_object* v___y_1007_; uint8_t v___x_1015_; 
v_a_1004_ = lean_ctor_get(v_x_991_, 0);
lean_inc(v_a_1004_);
lean_dec_ref_known(v_x_991_, 1);
v___x_1005_ = lean_unsigned_to_nat(1024u);
v___x_1015_ = lean_nat_dec_le(v___x_1005_, v_prec_992_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1016_; 
v___x_1016_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_1007_ = v___x_1016_;
goto v___jp_1006_;
}
else
{
lean_object* v___x_1017_; 
v___x_1017_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_1007_ = v___x_1017_;
goto v___jp_1006_;
}
v___jp_1006_:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; uint8_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1008_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__6));
v___x_1009_ = l_Lean_instReprLevel_repr(v_a_1004_, v___x_1005_);
v___x_1010_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1008_);
lean_ctor_set(v___x_1010_, 1, v___x_1009_);
lean_inc(v___y_1007_);
v___x_1011_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___y_1007_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = 0;
v___x_1013_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1013_, 0, v___x_1011_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*1, v___x_1012_);
v___x_1014_ = l_Repr_addAppParen(v___x_1013_, v_prec_992_);
return v___x_1014_;
}
}
case 2:
{
lean_object* v_a_1018_; lean_object* v_a_1019_; lean_object* v___x_1020_; lean_object* v___y_1022_; uint8_t v___x_1034_; 
v_a_1018_ = lean_ctor_get(v_x_991_, 0);
lean_inc(v_a_1018_);
v_a_1019_ = lean_ctor_get(v_x_991_, 1);
lean_inc(v_a_1019_);
lean_dec_ref_known(v_x_991_, 2);
v___x_1020_ = lean_unsigned_to_nat(1024u);
v___x_1034_ = lean_nat_dec_le(v___x_1020_, v_prec_992_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; 
v___x_1035_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_1022_ = v___x_1035_;
goto v___jp_1021_;
}
else
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_1022_ = v___x_1036_;
goto v___jp_1021_;
}
v___jp_1021_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; uint8_t v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1023_ = lean_box(1);
v___x_1024_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__9));
v___x_1025_ = l_Lean_instReprLevel_repr(v_a_1018_, v___x_1020_);
v___x_1026_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___x_1026_);
lean_ctor_set(v___x_1027_, 1, v___x_1023_);
v___x_1028_ = l_Lean_instReprLevel_repr(v_a_1019_, v___x_1020_);
v___x_1029_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
lean_inc(v___y_1022_);
v___x_1030_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___y_1022_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___x_1031_ = 0;
v___x_1032_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1032_, 0, v___x_1030_);
lean_ctor_set_uint8(v___x_1032_, sizeof(void*)*1, v___x_1031_);
v___x_1033_ = l_Repr_addAppParen(v___x_1032_, v_prec_992_);
return v___x_1033_;
}
}
case 3:
{
lean_object* v_a_1037_; lean_object* v_a_1038_; lean_object* v___x_1039_; lean_object* v___y_1041_; uint8_t v___x_1053_; 
v_a_1037_ = lean_ctor_get(v_x_991_, 0);
lean_inc(v_a_1037_);
v_a_1038_ = lean_ctor_get(v_x_991_, 1);
lean_inc(v_a_1038_);
lean_dec_ref_known(v_x_991_, 2);
v___x_1039_ = lean_unsigned_to_nat(1024u);
v___x_1053_ = lean_nat_dec_le(v___x_1039_, v_prec_992_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1054_; 
v___x_1054_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_1041_ = v___x_1054_;
goto v___jp_1040_;
}
else
{
lean_object* v___x_1055_; 
v___x_1055_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_1041_ = v___x_1055_;
goto v___jp_1040_;
}
v___jp_1040_:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; uint8_t v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1042_ = lean_box(1);
v___x_1043_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__12));
v___x_1044_ = l_Lean_instReprLevel_repr(v_a_1037_, v___x_1039_);
v___x_1045_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1043_);
lean_ctor_set(v___x_1045_, 1, v___x_1044_);
v___x_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
lean_ctor_set(v___x_1046_, 1, v___x_1042_);
v___x_1047_ = l_Lean_instReprLevel_repr(v_a_1038_, v___x_1039_);
v___x_1048_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1046_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
lean_inc(v___y_1041_);
v___x_1049_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___y_1041_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = 0;
v___x_1051_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1051_, 0, v___x_1049_);
lean_ctor_set_uint8(v___x_1051_, sizeof(void*)*1, v___x_1050_);
v___x_1052_ = l_Repr_addAppParen(v___x_1051_, v_prec_992_);
return v___x_1052_;
}
}
case 4:
{
lean_object* v_a_1056_; lean_object* v___y_1058_; lean_object* v___x_1067_; uint8_t v___x_1068_; 
v_a_1056_ = lean_ctor_get(v_x_991_, 0);
lean_inc(v_a_1056_);
lean_dec_ref_known(v_x_991_, 1);
v___x_1067_ = lean_unsigned_to_nat(1024u);
v___x_1068_ = lean_nat_dec_le(v___x_1067_, v_prec_992_);
if (v___x_1068_ == 0)
{
lean_object* v___x_1069_; 
v___x_1069_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_1058_ = v___x_1069_;
goto v___jp_1057_;
}
else
{
lean_object* v___x_1070_; 
v___x_1070_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_1058_ = v___x_1070_;
goto v___jp_1057_;
}
v___jp_1057_:
{
lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; uint8_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1059_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__15));
v___x_1060_ = lean_unsigned_to_nat(1024u);
v___x_1061_ = l_Lean_Name_reprPrec(v_a_1056_, v___x_1060_);
v___x_1062_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1059_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
lean_inc(v___y_1058_);
v___x_1063_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___y_1058_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = 0;
v___x_1065_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1065_, 0, v___x_1063_);
lean_ctor_set_uint8(v___x_1065_, sizeof(void*)*1, v___x_1064_);
v___x_1066_ = l_Repr_addAppParen(v___x_1065_, v_prec_992_);
return v___x_1066_;
}
}
default: 
{
lean_object* v_a_1071_; lean_object* v___y_1073_; lean_object* v___x_1082_; uint8_t v___x_1083_; 
v_a_1071_ = lean_ctor_get(v_x_991_, 0);
lean_inc(v_a_1071_);
lean_dec_ref_known(v_x_991_, 1);
v___x_1082_ = lean_unsigned_to_nat(1024u);
v___x_1083_ = lean_nat_dec_le(v___x_1082_, v_prec_992_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1084_; 
v___x_1084_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__2, &l_Lean_instReprLevel_repr___closed__2_once, _init_l_Lean_instReprLevel_repr___closed__2);
v___y_1073_ = v___x_1084_;
goto v___jp_1072_;
}
else
{
lean_object* v___x_1085_; 
v___x_1085_ = lean_obj_once(&l_Lean_instReprLevel_repr___closed__3, &l_Lean_instReprLevel_repr___closed__3_once, _init_l_Lean_instReprLevel_repr___closed__3);
v___y_1073_ = v___x_1085_;
goto v___jp_1072_;
}
v___jp_1072_:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; uint8_t v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1074_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__18));
v___x_1075_ = lean_unsigned_to_nat(1024u);
v___x_1076_ = l_Lean_Name_reprPrec(v_a_1071_, v___x_1075_);
v___x_1077_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1074_);
lean_ctor_set(v___x_1077_, 1, v___x_1076_);
lean_inc(v___y_1073_);
v___x_1078_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___y_1073_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = 0;
v___x_1080_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1080_, 0, v___x_1078_);
lean_ctor_set_uint8(v___x_1080_, sizeof(void*)*1, v___x_1079_);
v___x_1081_ = l_Repr_addAppParen(v___x_1080_, v_prec_992_);
return v___x_1081_;
}
}
}
v___jp_993_:
{
lean_object* v___x_995_; lean_object* v___x_996_; uint8_t v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_995_ = ((lean_object*)(l_Lean_instReprLevel_repr___closed__1));
lean_inc(v___y_994_);
v___x_996_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_996_, 0, v___y_994_);
lean_ctor_set(v___x_996_, 1, v___x_995_);
v___x_997_ = 0;
v___x_998_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_998_, 0, v___x_996_);
lean_ctor_set_uint8(v___x_998_, sizeof(void*)*1, v___x_997_);
v___x_999_ = l_Repr_addAppParen(v___x_998_, v_prec_992_);
return v___x_999_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprLevel_repr___boxed(lean_object* v_x_1086_, lean_object* v_prec_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l_Lean_instReprLevel_repr(v_x_1086_, v_prec_1087_);
lean_dec(v_prec_1087_);
return v_res_1088_;
}
}
LEAN_EXPORT uint64_t l_Lean_Level_hash(lean_object* v_u_1091_){
_start:
{
uint64_t v___x_1092_; uint64_t v___x_1093_; 
v___x_1092_ = l_Lean_Level_data___override(v_u_1091_);
v___x_1093_ = l_Lean_Level_Data_hash(v___x_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hash___boxed(lean_object* v_u_1094_){
_start:
{
uint64_t v_res_1095_; lean_object* v_r_1096_; 
v_res_1095_ = l_Lean_Level_hash(v_u_1094_);
lean_dec(v_u_1094_);
v_r_1096_ = lean_box_uint64(v_res_1095_);
return v_r_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_depth(lean_object* v_u_1099_){
_start:
{
uint64_t v___x_1100_; uint32_t v___x_1101_; lean_object* v___x_1102_; 
v___x_1100_ = l_Lean_Level_data___override(v_u_1099_);
v___x_1101_ = l_Lean_Level_Data_depth(v___x_1100_);
v___x_1102_ = lean_uint32_to_nat(v___x_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_depth___boxed(lean_object* v_u_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Lean_Level_depth(v_u_1103_);
lean_dec(v_u_1103_);
return v_res_1104_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_hasMVar(lean_object* v_u_1105_){
_start:
{
uint64_t v___x_1106_; uint8_t v___x_1107_; 
v___x_1106_ = l_Lean_Level_data___override(v_u_1105_);
v___x_1107_ = l_Lean_Level_Data_hasMVar(v___x_1106_);
return v___x_1107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hasMVar___boxed(lean_object* v_u_1108_){
_start:
{
uint8_t v_res_1109_; lean_object* v_r_1110_; 
v_res_1109_ = l_Lean_Level_hasMVar(v_u_1108_);
lean_dec(v_u_1108_);
v_r_1110_ = lean_box(v_res_1109_);
return v_r_1110_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_hasParam(lean_object* v_u_1111_){
_start:
{
uint64_t v___x_1112_; uint8_t v___x_1113_; 
v___x_1112_ = l_Lean_Level_data___override(v_u_1111_);
v___x_1113_ = l_Lean_Level_Data_hasParam(v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hasParam___boxed(lean_object* v_u_1114_){
_start:
{
uint8_t v_res_1115_; lean_object* v_r_1116_; 
v_res_1115_ = l_Lean_Level_hasParam(v_u_1114_);
lean_dec(v_u_1114_);
v_r_1116_ = lean_box(v_res_1115_);
return v_r_1116_;
}
}
LEAN_EXPORT uint32_t lean_level_hash(lean_object* v_u_1117_){
_start:
{
uint64_t v___x_1118_; uint32_t v___x_1119_; 
v___x_1118_ = l_Lean_Level_hash(v_u_1117_);
lean_dec(v_u_1117_);
v___x_1119_ = lean_uint64_to_uint32(v___x_1118_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hashEx___boxed(lean_object* v_u_1120_){
_start:
{
uint32_t v_res_1121_; lean_object* v_r_1122_; 
v_res_1121_ = lean_level_hash(v_u_1120_);
v_r_1122_ = lean_box_uint32(v_res_1121_);
return v_r_1122_;
}
}
LEAN_EXPORT uint8_t lean_level_has_mvar(lean_object* v_u_1123_){
_start:
{
uint8_t v___x_1124_; 
v___x_1124_ = l_Lean_Level_hasMVar(v_u_1123_);
lean_dec(v_u_1123_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hasMVarEx___boxed(lean_object* v_u_1125_){
_start:
{
uint8_t v_res_1126_; lean_object* v_r_1127_; 
v_res_1126_ = lean_level_has_mvar(v_u_1125_);
v_r_1127_ = lean_box(v_res_1126_);
return v_r_1127_;
}
}
LEAN_EXPORT uint8_t lean_level_has_param(lean_object* v_u_1128_){
_start:
{
uint8_t v___x_1129_; 
v___x_1129_ = l_Lean_Level_hasParam(v_u_1128_);
lean_dec(v_u_1128_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_hasParamEx___boxed(lean_object* v_u_1130_){
_start:
{
uint8_t v_res_1131_; lean_object* v_r_1132_; 
v_res_1131_ = lean_level_has_param(v_u_1130_);
v_r_1132_ = lean_box(v_res_1131_);
return v_r_1132_;
}
}
LEAN_EXPORT uint32_t lean_level_depth(lean_object* v_u_1133_){
_start:
{
uint64_t v___x_1134_; uint32_t v___x_1135_; 
v___x_1134_ = l_Lean_Level_data___override(v_u_1133_);
lean_dec(v_u_1133_);
v___x_1135_ = l_Lean_Level_Data_depth(v___x_1134_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_depthEx___boxed(lean_object* v_u_1136_){
_start:
{
uint32_t v_res_1137_; lean_object* v_r_1138_; 
v_res_1137_ = lean_level_depth(v_u_1136_);
v_r_1138_ = lean_box_uint32(v_res_1137_);
return v_r_1138_;
}
}
static lean_object* _init_l_Lean_levelZero(void){
_start:
{
lean_object* v___x_1139_; 
v___x_1139_ = lean_box(0);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelMVar(lean_object* v_mvarId_1140_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lean_Level_mvar___override(v_mvarId_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelParam(lean_object* v_name_1142_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_Level_param___override(v_name_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelSucc(lean_object* v_u_1144_){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = l_Lean_Level_succ___override(v_u_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelMax(lean_object* v_u_1146_, lean_object* v_v_1147_){
_start:
{
lean_object* v___x_1148_; 
v___x_1148_ = l_Lean_Level_max___override(v_u_1146_, v_v_1147_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelIMax(lean_object* v_u_1149_, lean_object* v_v_1150_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = l_Lean_Level_imax___override(v_u_1149_, v_v_1150_);
return v___x_1151_;
}
}
static lean_object* _init_l_Lean_Level_one___closed__0(void){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1152_ = lean_box(0);
v___x_1153_ = l_Lean_Level_succ___override(v___x_1152_);
return v___x_1153_;
}
}
static lean_object* _init_l_Lean_Level_one(void){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = lean_obj_once(&l_Lean_Level_one___closed__0, &l_Lean_Level_one___closed__0_once, _init_l_Lean_Level_one___closed__0);
return v___x_1154_;
}
}
static lean_object* _init_l_Lean_levelOne(void){
_start:
{
lean_object* v___x_1155_; 
v___x_1155_ = lean_obj_once(&l_Lean_Level_one___closed__0, &l_Lean_Level_one___closed__0_once, _init_l_Lean_Level_one___closed__0);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelZeroEx___redArg(){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_box(0);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelZeroEx___redArg___boxed(lean_object* v___dummy_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Lean_mkLevelZeroEx___redArg();
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_zero(lean_object* v_x_1160_){
_start:
{
lean_object* v___x_1161_; 
v___x_1161_ = lean_box(0);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_succ(lean_object* v_u_1162_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l_Lean_Level_succ___override(v_u_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_mvar(lean_object* v_mvarId_1164_){
_start:
{
lean_object* v___x_1165_; 
v___x_1165_ = l_Lean_Level_mvar___override(v_mvarId_1164_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_param(lean_object* v_name_1166_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Lean_Level_param___override(v_name_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_max(lean_object* v_u_1168_, lean_object* v_v_1169_){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_Lean_Level_max___override(v_u_1168_, v_v_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* lean_level_mk_imax(lean_object* v_u_1171_, lean_object* v_v_1172_){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = l_Lean_Level_imax___override(v_u_1171_, v_v_1172_);
return v___x_1173_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isZero(lean_object* v_x_1174_){
_start:
{
if (lean_obj_tag(v_x_1174_) == 0)
{
uint8_t v___x_1175_; 
v___x_1175_ = 1;
return v___x_1175_;
}
else
{
uint8_t v___x_1176_; 
v___x_1176_ = 0;
return v___x_1176_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isZero___boxed(lean_object* v_x_1177_){
_start:
{
uint8_t v_res_1178_; lean_object* v_r_1179_; 
v_res_1178_ = l_Lean_Level_isZero(v_x_1177_);
lean_dec(v_x_1177_);
v_r_1179_ = lean_box(v_res_1178_);
return v_r_1179_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isSucc(lean_object* v_x_1180_){
_start:
{
if (lean_obj_tag(v_x_1180_) == 1)
{
uint8_t v___x_1181_; 
v___x_1181_ = 1;
return v___x_1181_;
}
else
{
uint8_t v___x_1182_; 
v___x_1182_ = 0;
return v___x_1182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isSucc___boxed(lean_object* v_x_1183_){
_start:
{
uint8_t v_res_1184_; lean_object* v_r_1185_; 
v_res_1184_ = l_Lean_Level_isSucc(v_x_1183_);
lean_dec(v_x_1183_);
v_r_1185_ = lean_box(v_res_1184_);
return v_r_1185_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isMax(lean_object* v_x_1186_){
_start:
{
if (lean_obj_tag(v_x_1186_) == 2)
{
uint8_t v___x_1187_; 
v___x_1187_ = 1;
return v___x_1187_;
}
else
{
uint8_t v___x_1188_; 
v___x_1188_ = 0;
return v___x_1188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isMax___boxed(lean_object* v_x_1189_){
_start:
{
uint8_t v_res_1190_; lean_object* v_r_1191_; 
v_res_1190_ = l_Lean_Level_isMax(v_x_1189_);
lean_dec(v_x_1189_);
v_r_1191_ = lean_box(v_res_1190_);
return v_r_1191_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isIMax(lean_object* v_x_1192_){
_start:
{
if (lean_obj_tag(v_x_1192_) == 3)
{
uint8_t v___x_1193_; 
v___x_1193_ = 1;
return v___x_1193_;
}
else
{
uint8_t v___x_1194_; 
v___x_1194_ = 0;
return v___x_1194_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isIMax___boxed(lean_object* v_x_1195_){
_start:
{
uint8_t v_res_1196_; lean_object* v_r_1197_; 
v_res_1196_ = l_Lean_Level_isIMax(v_x_1195_);
lean_dec(v_x_1195_);
v_r_1197_ = lean_box(v_res_1196_);
return v_r_1197_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isMaxIMax(lean_object* v_x_1198_){
_start:
{
switch(lean_obj_tag(v_x_1198_))
{
case 2:
{
uint8_t v___x_1199_; 
v___x_1199_ = 1;
return v___x_1199_;
}
case 3:
{
uint8_t v___x_1200_; 
v___x_1200_ = 1;
return v___x_1200_;
}
default: 
{
uint8_t v___x_1201_; 
v___x_1201_ = 0;
return v___x_1201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isMaxIMax___boxed(lean_object* v_x_1202_){
_start:
{
uint8_t v_res_1203_; lean_object* v_r_1204_; 
v_res_1203_ = l_Lean_Level_isMaxIMax(v_x_1202_);
lean_dec(v_x_1202_);
v_r_1204_ = lean_box(v_res_1203_);
return v_r_1204_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isParam(lean_object* v_x_1205_){
_start:
{
if (lean_obj_tag(v_x_1205_) == 4)
{
uint8_t v___x_1206_; 
v___x_1206_ = 1;
return v___x_1206_;
}
else
{
uint8_t v___x_1207_; 
v___x_1207_ = 0;
return v___x_1207_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isParam___boxed(lean_object* v_x_1208_){
_start:
{
uint8_t v_res_1209_; lean_object* v_r_1210_; 
v_res_1209_ = l_Lean_Level_isParam(v_x_1208_);
lean_dec(v_x_1208_);
v_r_1210_ = lean_box(v_res_1209_);
return v_r_1210_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isMVar(lean_object* v_x_1211_){
_start:
{
if (lean_obj_tag(v_x_1211_) == 5)
{
uint8_t v___x_1212_; 
v___x_1212_ = 1;
return v___x_1212_;
}
else
{
uint8_t v___x_1213_; 
v___x_1213_ = 0;
return v___x_1213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isMVar___boxed(lean_object* v_x_1214_){
_start:
{
uint8_t v_res_1215_; lean_object* v_r_1216_; 
v_res_1215_ = l_Lean_Level_isMVar(v_x_1214_);
lean_dec(v_x_1214_);
v_r_1216_ = lean_box(v_res_1215_);
return v_r_1216_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Level_mvarId_x21_spec__0(lean_object* v_msg_1217_){
_start:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1218_ = lean_box(0);
v___x_1219_ = lean_panic_fn_borrowed(v___x_1218_, v_msg_1217_);
return v___x_1219_;
}
}
static lean_object* _init_l_Lean_Level_mvarId_x21___closed__3(void){
_start:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1223_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__2));
v___x_1224_ = lean_unsigned_to_nat(19u);
v___x_1225_ = lean_unsigned_to_nat(225u);
v___x_1226_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__1));
v___x_1227_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__0));
v___x_1228_ = l_mkPanicMessageWithDecl(v___x_1227_, v___x_1226_, v___x_1225_, v___x_1224_, v___x_1223_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mvarId_x21(lean_object* v_x_1229_){
_start:
{
if (lean_obj_tag(v_x_1229_) == 5)
{
lean_object* v_a_1230_; 
v_a_1230_ = lean_ctor_get(v_x_1229_, 0);
lean_inc(v_a_1230_);
return v_a_1230_;
}
else
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = lean_obj_once(&l_Lean_Level_mvarId_x21___closed__3, &l_Lean_Level_mvarId_x21___closed__3_once, _init_l_Lean_Level_mvarId_x21___closed__3);
v___x_1232_ = l_panic___at___00Lean_Level_mvarId_x21_spec__0(v___x_1231_);
return v___x_1232_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mvarId_x21___boxed(lean_object* v_x_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_Lean_Level_mvarId_x21(v_x_1233_);
lean_dec(v_x_1233_);
return v_res_1234_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isNeverZero(lean_object* v_x_1235_){
_start:
{
switch(lean_obj_tag(v_x_1235_))
{
case 0:
{
uint8_t v___x_1236_; 
v___x_1236_ = 0;
return v___x_1236_;
}
case 1:
{
uint8_t v___x_1237_; 
v___x_1237_ = 1;
return v___x_1237_;
}
case 2:
{
lean_object* v_a_1238_; lean_object* v_a_1239_; uint8_t v___x_1240_; 
v_a_1238_ = lean_ctor_get(v_x_1235_, 0);
v_a_1239_ = lean_ctor_get(v_x_1235_, 1);
v___x_1240_ = l_Lean_Level_isNeverZero(v_a_1238_);
if (v___x_1240_ == 0)
{
v_x_1235_ = v_a_1239_;
goto _start;
}
else
{
return v___x_1240_;
}
}
case 3:
{
lean_object* v_a_1242_; 
v_a_1242_ = lean_ctor_get(v_x_1235_, 1);
v_x_1235_ = v_a_1242_;
goto _start;
}
default: 
{
uint8_t v___x_1244_; 
v___x_1244_ = 0;
return v___x_1244_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isNeverZero___boxed(lean_object* v_x_1245_){
_start:
{
uint8_t v_res_1246_; lean_object* v_r_1247_; 
v_res_1246_ = l_Lean_Level_isNeverZero(v_x_1245_);
lean_dec(v_x_1245_);
v_r_1247_ = lean_box(v_res_1246_);
return v_r_1247_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isAlwaysZero(lean_object* v_x_1248_){
_start:
{
switch(lean_obj_tag(v_x_1248_))
{
case 0:
{
uint8_t v___x_1249_; 
v___x_1249_ = 1;
return v___x_1249_;
}
case 2:
{
lean_object* v_a_1250_; lean_object* v_a_1251_; uint8_t v___x_1252_; 
v_a_1250_ = lean_ctor_get(v_x_1248_, 0);
v_a_1251_ = lean_ctor_get(v_x_1248_, 1);
v___x_1252_ = l_Lean_Level_isAlwaysZero(v_a_1250_);
if (v___x_1252_ == 0)
{
return v___x_1252_;
}
else
{
v_x_1248_ = v_a_1251_;
goto _start;
}
}
case 3:
{
lean_object* v_a_1254_; 
v_a_1254_ = lean_ctor_get(v_x_1248_, 1);
v_x_1248_ = v_a_1254_;
goto _start;
}
default: 
{
uint8_t v___x_1256_; 
v___x_1256_ = 0;
return v___x_1256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isAlwaysZero___boxed(lean_object* v_x_1257_){
_start:
{
uint8_t v_res_1258_; lean_object* v_r_1259_; 
v_res_1258_ = l_Lean_Level_isAlwaysZero(v_x_1257_);
lean_dec(v_x_1257_);
v_r_1259_ = lean_box(v_res_1258_);
return v_r_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ofNat(lean_object* v_x_1260_){
_start:
{
lean_object* v_zero_1261_; uint8_t v_isZero_1262_; 
v_zero_1261_ = lean_unsigned_to_nat(0u);
v_isZero_1262_ = lean_nat_dec_eq(v_x_1260_, v_zero_1261_);
if (v_isZero_1262_ == 1)
{
lean_object* v___x_1263_; 
v___x_1263_ = lean_box(0);
return v___x_1263_;
}
else
{
lean_object* v_one_1264_; lean_object* v_n_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
v_one_1264_ = lean_unsigned_to_nat(1u);
v_n_1265_ = lean_nat_sub(v_x_1260_, v_one_1264_);
v___x_1266_ = l_Lean_Level_ofNat(v_n_1265_);
lean_dec(v_n_1265_);
v___x_1267_ = l_Lean_Level_succ___override(v___x_1266_);
return v___x_1267_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ofNat___boxed(lean_object* v_x_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lean_Level_ofNat(v_x_1268_);
lean_dec(v_x_1268_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instOfNat(lean_object* v_n_1270_){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = l_Lean_Level_ofNat(v_n_1270_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instOfNat___boxed(lean_object* v_n_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_Level_instOfNat(v_n_1272_);
lean_dec(v_n_1272_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_addOffsetAux(lean_object* v_x_1274_, lean_object* v_x_1275_){
_start:
{
lean_object* v_zero_1276_; uint8_t v_isZero_1277_; 
v_zero_1276_ = lean_unsigned_to_nat(0u);
v_isZero_1277_ = lean_nat_dec_eq(v_x_1274_, v_zero_1276_);
if (v_isZero_1277_ == 1)
{
lean_dec(v_x_1274_);
return v_x_1275_;
}
else
{
lean_object* v_one_1278_; lean_object* v_n_1279_; lean_object* v___x_1280_; 
v_one_1278_ = lean_unsigned_to_nat(1u);
v_n_1279_ = lean_nat_sub(v_x_1274_, v_one_1278_);
lean_dec(v_x_1274_);
v___x_1280_ = l_Lean_Level_succ___override(v_x_1275_);
v_x_1274_ = v_n_1279_;
v_x_1275_ = v___x_1280_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_addOffset(lean_object* v_u_1282_, lean_object* v_n_1283_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l_Lean_Level_addOffsetAux(v_n_1283_, v_u_1282_);
return v___x_1284_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isExplicit(lean_object* v_x_1285_){
_start:
{
switch(lean_obj_tag(v_x_1285_))
{
case 0:
{
uint8_t v___x_1286_; 
v___x_1286_ = 1;
return v___x_1286_;
}
case 1:
{
lean_object* v_a_1287_; uint8_t v___x_1288_; 
v_a_1287_ = lean_ctor_get(v_x_1285_, 0);
v___x_1288_ = l_Lean_Level_hasMVar(v_a_1287_);
if (v___x_1288_ == 0)
{
uint8_t v___x_1289_; 
v___x_1289_ = l_Lean_Level_hasParam(v_a_1287_);
if (v___x_1289_ == 0)
{
v_x_1285_ = v_a_1287_;
goto _start;
}
else
{
return v___x_1288_;
}
}
else
{
uint8_t v___x_1291_; 
v___x_1291_ = 0;
return v___x_1291_;
}
}
default: 
{
uint8_t v___x_1292_; 
v___x_1292_ = 0;
return v___x_1292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isExplicit___boxed(lean_object* v_x_1293_){
_start:
{
uint8_t v_res_1294_; lean_object* v_r_1295_; 
v_res_1294_ = l_Lean_Level_isExplicit(v_x_1293_);
lean_dec(v_x_1293_);
v_r_1295_ = lean_box(v_res_1294_);
return v_r_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getOffsetAux(lean_object* v_x_1296_, lean_object* v_x_1297_){
_start:
{
if (lean_obj_tag(v_x_1296_) == 1)
{
lean_object* v_a_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v_a_1298_ = lean_ctor_get(v_x_1296_, 0);
v___x_1299_ = lean_unsigned_to_nat(1u);
v___x_1300_ = lean_nat_add(v_x_1297_, v___x_1299_);
lean_dec(v_x_1297_);
v_x_1296_ = v_a_1298_;
v_x_1297_ = v___x_1300_;
goto _start;
}
else
{
return v_x_1297_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getOffsetAux___boxed(lean_object* v_x_1302_, lean_object* v_x_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Lean_Level_getOffsetAux(v_x_1302_, v_x_1303_);
lean_dec(v_x_1302_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getOffset(lean_object* v_lvl_1305_){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1306_ = lean_unsigned_to_nat(0u);
v___x_1307_ = l_Lean_Level_getOffsetAux(v_lvl_1305_, v___x_1306_);
return v___x_1307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getOffset___boxed(lean_object* v_lvl_1308_){
_start:
{
lean_object* v_res_1309_; 
v_res_1309_ = l_Lean_Level_getOffset(v_lvl_1308_);
lean_dec(v_lvl_1308_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getLevelOffset(lean_object* v_x_1310_){
_start:
{
if (lean_obj_tag(v_x_1310_) == 1)
{
lean_object* v_a_1311_; 
v_a_1311_ = lean_ctor_get(v_x_1310_, 0);
v_x_1310_ = v_a_1311_;
goto _start;
}
else
{
lean_inc(v_x_1310_);
return v_x_1310_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getLevelOffset___boxed(lean_object* v_x_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lean_Level_getLevelOffset(v_x_1313_);
lean_dec(v_x_1313_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_toNat(lean_object* v_lvl_1315_){
_start:
{
lean_object* v___x_1316_; 
v___x_1316_ = l_Lean_Level_getLevelOffset(v_lvl_1315_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = l_Lean_Level_getOffset(v_lvl_1315_);
v___x_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
return v___x_1318_;
}
else
{
lean_object* v___x_1319_; 
lean_dec(v___x_1316_);
v___x_1319_ = lean_box(0);
return v___x_1319_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_toNat___boxed(lean_object* v_lvl_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_Lean_Level_toNat(v_lvl_1320_);
lean_dec(v_lvl_1320_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_beq___boxed(lean_object* v_a_1324_, lean_object* v_b_1325_){
_start:
{
uint8_t v_res_1326_; lean_object* v_r_1327_; 
v_res_1326_ = lean_level_eq(v_a_1324_, v_b_1325_);
lean_dec(v_b_1325_);
lean_dec(v_a_1324_);
v_r_1327_ = lean_box(v_res_1326_);
return v_r_1327_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_occurs(lean_object* v_x_1330_, lean_object* v_x_1331_){
_start:
{
switch(lean_obj_tag(v_x_1331_))
{
case 1:
{
lean_object* v_a_1332_; uint8_t v___x_1333_; 
v_a_1332_ = lean_ctor_get(v_x_1331_, 0);
v___x_1333_ = lean_level_eq(v_x_1330_, v_x_1331_);
if (v___x_1333_ == 0)
{
v_x_1331_ = v_a_1332_;
goto _start;
}
else
{
return v___x_1333_;
}
}
case 2:
{
lean_object* v_a_1335_; lean_object* v_a_1336_; uint8_t v___y_1338_; uint8_t v___x_1340_; 
v_a_1335_ = lean_ctor_get(v_x_1331_, 0);
v_a_1336_ = lean_ctor_get(v_x_1331_, 1);
v___x_1340_ = lean_level_eq(v_x_1330_, v_x_1331_);
if (v___x_1340_ == 0)
{
uint8_t v___x_1341_; 
v___x_1341_ = l_Lean_Level_occurs(v_x_1330_, v_a_1335_);
v___y_1338_ = v___x_1341_;
goto v___jp_1337_;
}
else
{
v___y_1338_ = v___x_1340_;
goto v___jp_1337_;
}
v___jp_1337_:
{
if (v___y_1338_ == 0)
{
v_x_1331_ = v_a_1336_;
goto _start;
}
else
{
return v___y_1338_;
}
}
}
case 3:
{
lean_object* v_a_1342_; lean_object* v_a_1343_; uint8_t v___y_1345_; uint8_t v___x_1347_; 
v_a_1342_ = lean_ctor_get(v_x_1331_, 0);
v_a_1343_ = lean_ctor_get(v_x_1331_, 1);
v___x_1347_ = lean_level_eq(v_x_1330_, v_x_1331_);
if (v___x_1347_ == 0)
{
uint8_t v___x_1348_; 
v___x_1348_ = l_Lean_Level_occurs(v_x_1330_, v_a_1342_);
v___y_1345_ = v___x_1348_;
goto v___jp_1344_;
}
else
{
v___y_1345_ = v___x_1347_;
goto v___jp_1344_;
}
v___jp_1344_:
{
if (v___y_1345_ == 0)
{
v_x_1331_ = v_a_1343_;
goto _start;
}
else
{
return v___y_1345_;
}
}
}
default: 
{
uint8_t v___x_1349_; 
v___x_1349_ = lean_level_eq(v_x_1330_, v_x_1331_);
return v___x_1349_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_occurs___boxed(lean_object* v_x_1350_, lean_object* v_x_1351_){
_start:
{
uint8_t v_res_1352_; lean_object* v_r_1353_; 
v_res_1352_ = l_Lean_Level_occurs(v_x_1350_, v_x_1351_);
lean_dec(v_x_1351_);
lean_dec(v_x_1350_);
v_r_1353_ = lean_box(v_res_1352_);
return v_r_1353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorToNat(lean_object* v_x_1354_){
_start:
{
switch(lean_obj_tag(v_x_1354_))
{
case 0:
{
lean_object* v___x_1355_; 
v___x_1355_ = lean_unsigned_to_nat(0u);
return v___x_1355_;
}
case 1:
{
lean_object* v___x_1356_; 
v___x_1356_ = lean_unsigned_to_nat(3u);
return v___x_1356_;
}
case 2:
{
lean_object* v___x_1357_; 
v___x_1357_ = lean_unsigned_to_nat(4u);
return v___x_1357_;
}
case 3:
{
lean_object* v___x_1358_; 
v___x_1358_ = lean_unsigned_to_nat(5u);
return v___x_1358_;
}
case 4:
{
lean_object* v___x_1359_; 
v___x_1359_ = lean_unsigned_to_nat(1u);
return v___x_1359_;
}
default: 
{
lean_object* v___x_1360_; 
v___x_1360_ = lean_unsigned_to_nat(2u);
return v___x_1360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_ctorToNat___boxed(lean_object* v_x_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Lean_Level_ctorToNat(v_x_1361_);
lean_dec(v_x_1361_);
return v_res_1362_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_normLtAux(lean_object* v_x_1363_, lean_object* v_x_1364_, lean_object* v_x_1365_, lean_object* v_x_1366_){
_start:
{
lean_object* v_l_u2081_1368_; lean_object* v_k_u2081_1369_; lean_object* v_l_u2082_1370_; lean_object* v_k_u2082_1371_; lean_object* v_l_u2081_1376_; lean_object* v_k_u2081_1377_; lean_object* v_l_u2082_1378_; lean_object* v_k_u2082_1379_; 
switch(lean_obj_tag(v_x_1363_))
{
case 1:
{
lean_object* v_a_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; 
v_a_1385_ = lean_ctor_get(v_x_1363_, 0);
v___x_1386_ = lean_unsigned_to_nat(1u);
v___x_1387_ = lean_nat_add(v_x_1364_, v___x_1386_);
lean_dec(v_x_1364_);
v_x_1363_ = v_a_1385_;
v_x_1364_ = v___x_1387_;
goto _start;
}
case 2:
{
switch(lean_obj_tag(v_x_1365_))
{
case 1:
{
lean_object* v_a_1389_; 
v_a_1389_ = lean_ctor_get(v_x_1365_, 0);
v_l_u2081_1368_ = v_x_1363_;
v_k_u2081_1369_ = v_x_1364_;
v_l_u2082_1370_ = v_a_1389_;
v_k_u2082_1371_ = v_x_1366_;
goto v___jp_1367_;
}
case 2:
{
lean_object* v_a_1390_; lean_object* v_a_1391_; lean_object* v_a_1392_; lean_object* v_a_1393_; uint8_t v___x_1397_; 
v_a_1390_ = lean_ctor_get(v_x_1363_, 0);
v_a_1391_ = lean_ctor_get(v_x_1363_, 1);
v_a_1392_ = lean_ctor_get(v_x_1365_, 0);
v_a_1393_ = lean_ctor_get(v_x_1365_, 1);
v___x_1397_ = lean_level_eq(v_x_1363_, v_x_1365_);
if (v___x_1397_ == 0)
{
uint8_t v___x_1398_; 
lean_dec(v_x_1366_);
lean_dec(v_x_1364_);
v___x_1398_ = lean_level_eq(v_a_1390_, v_a_1392_);
if (v___x_1398_ == 0)
{
goto v___jp_1394_;
}
else
{
if (v___x_1397_ == 0)
{
lean_object* v___x_1399_; 
v___x_1399_ = lean_unsigned_to_nat(0u);
v_x_1363_ = v_a_1391_;
v_x_1364_ = v___x_1399_;
v_x_1365_ = v_a_1393_;
v_x_1366_ = v___x_1399_;
goto _start;
}
else
{
goto v___jp_1394_;
}
}
}
else
{
uint8_t v___x_1401_; 
v___x_1401_ = lean_nat_dec_lt(v_x_1364_, v_x_1366_);
lean_dec(v_x_1366_);
lean_dec(v_x_1364_);
return v___x_1401_;
}
v___jp_1394_:
{
lean_object* v___x_1395_; 
v___x_1395_ = lean_unsigned_to_nat(0u);
v_x_1363_ = v_a_1390_;
v_x_1364_ = v___x_1395_;
v_x_1365_ = v_a_1392_;
v_x_1366_ = v___x_1395_;
goto _start;
}
}
default: 
{
v_l_u2081_1376_ = v_x_1363_;
v_k_u2081_1377_ = v_x_1364_;
v_l_u2082_1378_ = v_x_1365_;
v_k_u2082_1379_ = v_x_1366_;
goto v___jp_1375_;
}
}
}
case 3:
{
switch(lean_obj_tag(v_x_1365_))
{
case 1:
{
lean_object* v_a_1402_; 
v_a_1402_ = lean_ctor_get(v_x_1365_, 0);
v_l_u2081_1368_ = v_x_1363_;
v_k_u2081_1369_ = v_x_1364_;
v_l_u2082_1370_ = v_a_1402_;
v_k_u2082_1371_ = v_x_1366_;
goto v___jp_1367_;
}
case 3:
{
lean_object* v_a_1403_; lean_object* v_a_1404_; lean_object* v_a_1405_; lean_object* v_a_1406_; uint8_t v___x_1410_; 
v_a_1403_ = lean_ctor_get(v_x_1363_, 0);
v_a_1404_ = lean_ctor_get(v_x_1363_, 1);
v_a_1405_ = lean_ctor_get(v_x_1365_, 0);
v_a_1406_ = lean_ctor_get(v_x_1365_, 1);
v___x_1410_ = lean_level_eq(v_x_1363_, v_x_1365_);
if (v___x_1410_ == 0)
{
uint8_t v___x_1411_; 
lean_dec(v_x_1366_);
lean_dec(v_x_1364_);
v___x_1411_ = lean_level_eq(v_a_1403_, v_a_1405_);
if (v___x_1411_ == 0)
{
goto v___jp_1407_;
}
else
{
if (v___x_1410_ == 0)
{
lean_object* v___x_1412_; 
v___x_1412_ = lean_unsigned_to_nat(0u);
v_x_1363_ = v_a_1404_;
v_x_1364_ = v___x_1412_;
v_x_1365_ = v_a_1406_;
v_x_1366_ = v___x_1412_;
goto _start;
}
else
{
goto v___jp_1407_;
}
}
}
else
{
uint8_t v___x_1414_; 
v___x_1414_ = lean_nat_dec_lt(v_x_1364_, v_x_1366_);
lean_dec(v_x_1366_);
lean_dec(v_x_1364_);
return v___x_1414_;
}
v___jp_1407_:
{
lean_object* v___x_1408_; 
v___x_1408_ = lean_unsigned_to_nat(0u);
v_x_1363_ = v_a_1403_;
v_x_1364_ = v___x_1408_;
v_x_1365_ = v_a_1405_;
v_x_1366_ = v___x_1408_;
goto _start;
}
}
default: 
{
v_l_u2081_1376_ = v_x_1363_;
v_k_u2081_1377_ = v_x_1364_;
v_l_u2082_1378_ = v_x_1365_;
v_k_u2082_1379_ = v_x_1366_;
goto v___jp_1375_;
}
}
}
case 4:
{
switch(lean_obj_tag(v_x_1365_))
{
case 1:
{
lean_object* v_a_1415_; 
v_a_1415_ = lean_ctor_get(v_x_1365_, 0);
v_l_u2081_1368_ = v_x_1363_;
v_k_u2081_1369_ = v_x_1364_;
v_l_u2082_1370_ = v_a_1415_;
v_k_u2082_1371_ = v_x_1366_;
goto v___jp_1367_;
}
case 4:
{
lean_object* v_a_1416_; lean_object* v_a_1417_; uint8_t v___x_1418_; 
v_a_1416_ = lean_ctor_get(v_x_1363_, 0);
v_a_1417_ = lean_ctor_get(v_x_1365_, 0);
v___x_1418_ = lean_name_eq(v_a_1416_, v_a_1417_);
if (v___x_1418_ == 0)
{
uint8_t v___x_1419_; 
lean_dec(v_x_1366_);
lean_dec(v_x_1364_);
v___x_1419_ = l_Lean_Name_lt(v_a_1416_, v_a_1417_);
return v___x_1419_;
}
else
{
uint8_t v___x_1420_; 
v___x_1420_ = lean_nat_dec_lt(v_x_1364_, v_x_1366_);
lean_dec(v_x_1366_);
lean_dec(v_x_1364_);
return v___x_1420_;
}
}
default: 
{
v_l_u2081_1376_ = v_x_1363_;
v_k_u2081_1377_ = v_x_1364_;
v_l_u2082_1378_ = v_x_1365_;
v_k_u2082_1379_ = v_x_1366_;
goto v___jp_1375_;
}
}
}
case 5:
{
switch(lean_obj_tag(v_x_1365_))
{
case 1:
{
lean_object* v_a_1421_; 
v_a_1421_ = lean_ctor_get(v_x_1365_, 0);
v_l_u2081_1368_ = v_x_1363_;
v_k_u2081_1369_ = v_x_1364_;
v_l_u2082_1370_ = v_a_1421_;
v_k_u2082_1371_ = v_x_1366_;
goto v___jp_1367_;
}
case 5:
{
lean_object* v_a_1422_; lean_object* v_a_1423_; uint8_t v___x_1424_; 
v_a_1422_ = lean_ctor_get(v_x_1363_, 0);
v_a_1423_ = lean_ctor_get(v_x_1365_, 0);
v___x_1424_ = lean_name_eq(v_a_1422_, v_a_1423_);
if (v___x_1424_ == 0)
{
uint8_t v___x_1425_; 
lean_dec(v_x_1366_);
lean_dec(v_x_1364_);
v___x_1425_ = l_Lean_Name_lt(v_a_1422_, v_a_1423_);
return v___x_1425_;
}
else
{
uint8_t v___x_1426_; 
v___x_1426_ = lean_nat_dec_lt(v_x_1364_, v_x_1366_);
lean_dec(v_x_1366_);
lean_dec(v_x_1364_);
return v___x_1426_;
}
}
default: 
{
v_l_u2081_1376_ = v_x_1363_;
v_k_u2081_1377_ = v_x_1364_;
v_l_u2082_1378_ = v_x_1365_;
v_k_u2082_1379_ = v_x_1366_;
goto v___jp_1375_;
}
}
}
default: 
{
if (lean_obj_tag(v_x_1365_) == 1)
{
lean_object* v_a_1427_; 
v_a_1427_ = lean_ctor_get(v_x_1365_, 0);
v_l_u2081_1368_ = v_x_1363_;
v_k_u2081_1369_ = v_x_1364_;
v_l_u2082_1370_ = v_a_1427_;
v_k_u2082_1371_ = v_x_1366_;
goto v___jp_1367_;
}
else
{
v_l_u2081_1376_ = v_x_1363_;
v_k_u2081_1377_ = v_x_1364_;
v_l_u2082_1378_ = v_x_1365_;
v_k_u2082_1379_ = v_x_1366_;
goto v___jp_1375_;
}
}
}
v___jp_1367_:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1372_ = lean_unsigned_to_nat(1u);
v___x_1373_ = lean_nat_add(v_k_u2082_1371_, v___x_1372_);
lean_dec(v_k_u2082_1371_);
v_x_1363_ = v_l_u2081_1368_;
v_x_1364_ = v_k_u2081_1369_;
v_x_1365_ = v_l_u2082_1370_;
v_x_1366_ = v___x_1373_;
goto _start;
}
v___jp_1375_:
{
uint8_t v___x_1380_; 
v___x_1380_ = lean_level_eq(v_l_u2081_1376_, v_l_u2082_1378_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; lean_object* v___x_1382_; uint8_t v___x_1383_; 
lean_dec(v_k_u2082_1379_);
lean_dec(v_k_u2081_1377_);
v___x_1381_ = l_Lean_Level_ctorToNat(v_l_u2081_1376_);
v___x_1382_ = l_Lean_Level_ctorToNat(v_l_u2082_1378_);
v___x_1383_ = lean_nat_dec_lt(v___x_1381_, v___x_1382_);
lean_dec(v___x_1382_);
lean_dec(v___x_1381_);
return v___x_1383_;
}
else
{
uint8_t v___x_1384_; 
v___x_1384_ = lean_nat_dec_lt(v_k_u2081_1377_, v_k_u2082_1379_);
lean_dec(v_k_u2082_1379_);
lean_dec(v_k_u2081_1377_);
return v___x_1384_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_normLtAux___boxed(lean_object* v_x_1428_, lean_object* v_x_1429_, lean_object* v_x_1430_, lean_object* v_x_1431_){
_start:
{
uint8_t v_res_1432_; lean_object* v_r_1433_; 
v_res_1432_ = l_Lean_Level_normLtAux(v_x_1428_, v_x_1429_, v_x_1430_, v_x_1431_);
lean_dec(v_x_1430_);
lean_dec(v_x_1428_);
v_r_1433_ = lean_box(v_res_1432_);
return v_r_1433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_normLtAux_match__1_splitter___redArg(lean_object* v_x_1434_, lean_object* v_x_1435_, lean_object* v_x_1436_, lean_object* v_x_1437_, lean_object* v_h__1_1438_, lean_object* v_h__2_1439_, lean_object* v_h__3_1440_, lean_object* v_h__4_1441_, lean_object* v_h__5_1442_, lean_object* v_h__6_1443_, lean_object* v_h__7_1444_){
_start:
{
switch(lean_obj_tag(v_x_1434_))
{
case 1:
{
lean_object* v_a_1445_; lean_object* v___x_1446_; 
lean_dec(v_h__7_1444_);
lean_dec(v_h__6_1443_);
lean_dec(v_h__5_1442_);
lean_dec(v_h__4_1441_);
lean_dec(v_h__3_1440_);
lean_dec(v_h__2_1439_);
v_a_1445_ = lean_ctor_get(v_x_1434_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v_x_1434_, 1);
v___x_1446_ = lean_apply_4(v_h__1_1438_, v_a_1445_, v_x_1435_, v_x_1436_, v_x_1437_);
return v___x_1446_;
}
case 2:
{
lean_dec(v_h__6_1443_);
lean_dec(v_h__5_1442_);
lean_dec(v_h__4_1441_);
lean_dec(v_h__1_1438_);
switch(lean_obj_tag(v_x_1436_))
{
case 1:
{
lean_object* v_a_1447_; lean_object* v___x_1448_; 
lean_dec(v_h__7_1444_);
lean_dec(v_h__3_1440_);
v_a_1447_ = lean_ctor_get(v_x_1436_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v_x_1436_, 1);
v___x_1448_ = lean_apply_5(v_h__2_1439_, v_x_1434_, v_x_1435_, v_a_1447_, v_x_1437_, lean_box(0));
return v___x_1448_;
}
case 2:
{
lean_object* v_a_1449_; lean_object* v_a_1450_; lean_object* v_a_1451_; lean_object* v_a_1452_; lean_object* v___x_1453_; 
lean_dec(v_h__7_1444_);
lean_dec(v_h__2_1439_);
v_a_1449_ = lean_ctor_get(v_x_1434_, 0);
lean_inc(v_a_1449_);
v_a_1450_ = lean_ctor_get(v_x_1434_, 1);
lean_inc(v_a_1450_);
lean_dec_ref_known(v_x_1434_, 2);
v_a_1451_ = lean_ctor_get(v_x_1436_, 0);
lean_inc(v_a_1451_);
v_a_1452_ = lean_ctor_get(v_x_1436_, 1);
lean_inc(v_a_1452_);
lean_dec_ref_known(v_x_1436_, 2);
v___x_1453_ = lean_apply_6(v_h__3_1440_, v_a_1449_, v_a_1450_, v_x_1435_, v_a_1451_, v_a_1452_, v_x_1437_);
return v___x_1453_;
}
default: 
{
lean_object* v___x_1454_; 
lean_dec(v_h__3_1440_);
lean_dec(v_h__2_1439_);
v___x_1454_ = lean_apply_10(v_h__7_1444_, v_x_1434_, v_x_1435_, v_x_1436_, v_x_1437_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1454_;
}
}
}
case 3:
{
lean_dec(v_h__6_1443_);
lean_dec(v_h__5_1442_);
lean_dec(v_h__3_1440_);
lean_dec(v_h__1_1438_);
switch(lean_obj_tag(v_x_1436_))
{
case 1:
{
lean_object* v_a_1455_; lean_object* v___x_1456_; 
lean_dec(v_h__7_1444_);
lean_dec(v_h__4_1441_);
v_a_1455_ = lean_ctor_get(v_x_1436_, 0);
lean_inc(v_a_1455_);
lean_dec_ref_known(v_x_1436_, 1);
v___x_1456_ = lean_apply_5(v_h__2_1439_, v_x_1434_, v_x_1435_, v_a_1455_, v_x_1437_, lean_box(0));
return v___x_1456_;
}
case 3:
{
lean_object* v_a_1457_; lean_object* v_a_1458_; lean_object* v_a_1459_; lean_object* v_a_1460_; lean_object* v___x_1461_; 
lean_dec(v_h__7_1444_);
lean_dec(v_h__2_1439_);
v_a_1457_ = lean_ctor_get(v_x_1434_, 0);
lean_inc(v_a_1457_);
v_a_1458_ = lean_ctor_get(v_x_1434_, 1);
lean_inc(v_a_1458_);
lean_dec_ref_known(v_x_1434_, 2);
v_a_1459_ = lean_ctor_get(v_x_1436_, 0);
lean_inc(v_a_1459_);
v_a_1460_ = lean_ctor_get(v_x_1436_, 1);
lean_inc(v_a_1460_);
lean_dec_ref_known(v_x_1436_, 2);
v___x_1461_ = lean_apply_6(v_h__4_1441_, v_a_1457_, v_a_1458_, v_x_1435_, v_a_1459_, v_a_1460_, v_x_1437_);
return v___x_1461_;
}
default: 
{
lean_object* v___x_1462_; 
lean_dec(v_h__4_1441_);
lean_dec(v_h__2_1439_);
v___x_1462_ = lean_apply_10(v_h__7_1444_, v_x_1434_, v_x_1435_, v_x_1436_, v_x_1437_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1462_;
}
}
}
case 4:
{
lean_dec(v_h__6_1443_);
lean_dec(v_h__4_1441_);
lean_dec(v_h__3_1440_);
lean_dec(v_h__1_1438_);
switch(lean_obj_tag(v_x_1436_))
{
case 1:
{
lean_object* v_a_1463_; lean_object* v___x_1464_; 
lean_dec(v_h__7_1444_);
lean_dec(v_h__5_1442_);
v_a_1463_ = lean_ctor_get(v_x_1436_, 0);
lean_inc(v_a_1463_);
lean_dec_ref_known(v_x_1436_, 1);
v___x_1464_ = lean_apply_5(v_h__2_1439_, v_x_1434_, v_x_1435_, v_a_1463_, v_x_1437_, lean_box(0));
return v___x_1464_;
}
case 4:
{
lean_object* v_a_1465_; lean_object* v_a_1466_; lean_object* v___x_1467_; 
lean_dec(v_h__7_1444_);
lean_dec(v_h__2_1439_);
v_a_1465_ = lean_ctor_get(v_x_1434_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v_x_1434_, 1);
v_a_1466_ = lean_ctor_get(v_x_1436_, 0);
lean_inc(v_a_1466_);
lean_dec_ref_known(v_x_1436_, 1);
v___x_1467_ = lean_apply_4(v_h__5_1442_, v_a_1465_, v_x_1435_, v_a_1466_, v_x_1437_);
return v___x_1467_;
}
default: 
{
lean_object* v___x_1468_; 
lean_dec(v_h__5_1442_);
lean_dec(v_h__2_1439_);
v___x_1468_ = lean_apply_10(v_h__7_1444_, v_x_1434_, v_x_1435_, v_x_1436_, v_x_1437_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1468_;
}
}
}
case 5:
{
lean_dec(v_h__5_1442_);
lean_dec(v_h__4_1441_);
lean_dec(v_h__3_1440_);
lean_dec(v_h__1_1438_);
switch(lean_obj_tag(v_x_1436_))
{
case 1:
{
lean_object* v_a_1469_; lean_object* v___x_1470_; 
lean_dec(v_h__7_1444_);
lean_dec(v_h__6_1443_);
v_a_1469_ = lean_ctor_get(v_x_1436_, 0);
lean_inc(v_a_1469_);
lean_dec_ref_known(v_x_1436_, 1);
v___x_1470_ = lean_apply_5(v_h__2_1439_, v_x_1434_, v_x_1435_, v_a_1469_, v_x_1437_, lean_box(0));
return v___x_1470_;
}
case 5:
{
lean_object* v_a_1471_; lean_object* v_a_1472_; lean_object* v___x_1473_; 
lean_dec(v_h__7_1444_);
lean_dec(v_h__2_1439_);
v_a_1471_ = lean_ctor_get(v_x_1434_, 0);
lean_inc(v_a_1471_);
lean_dec_ref_known(v_x_1434_, 1);
v_a_1472_ = lean_ctor_get(v_x_1436_, 0);
lean_inc(v_a_1472_);
lean_dec_ref_known(v_x_1436_, 1);
v___x_1473_ = lean_apply_4(v_h__6_1443_, v_a_1471_, v_x_1435_, v_a_1472_, v_x_1437_);
return v___x_1473_;
}
default: 
{
lean_object* v___x_1474_; 
lean_dec(v_h__6_1443_);
lean_dec(v_h__2_1439_);
v___x_1474_ = lean_apply_10(v_h__7_1444_, v_x_1434_, v_x_1435_, v_x_1436_, v_x_1437_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1474_;
}
}
}
default: 
{
lean_dec(v_h__6_1443_);
lean_dec(v_h__5_1442_);
lean_dec(v_h__4_1441_);
lean_dec(v_h__3_1440_);
lean_dec(v_h__1_1438_);
if (lean_obj_tag(v_x_1436_) == 1)
{
lean_object* v_a_1475_; lean_object* v___x_1476_; 
lean_dec(v_h__7_1444_);
v_a_1475_ = lean_ctor_get(v_x_1436_, 0);
lean_inc(v_a_1475_);
lean_dec_ref_known(v_x_1436_, 1);
v___x_1476_ = lean_apply_5(v_h__2_1439_, v_x_1434_, v_x_1435_, v_a_1475_, v_x_1437_, lean_box(0));
return v___x_1476_;
}
else
{
lean_object* v___x_1477_; 
lean_dec(v_h__2_1439_);
v___x_1477_ = lean_apply_10(v_h__7_1444_, v_x_1434_, v_x_1435_, v_x_1436_, v_x_1437_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_normLtAux_match__1_splitter(lean_object* v_motive_1478_, lean_object* v_x_1479_, lean_object* v_x_1480_, lean_object* v_x_1481_, lean_object* v_x_1482_, lean_object* v_h__1_1483_, lean_object* v_h__2_1484_, lean_object* v_h__3_1485_, lean_object* v_h__4_1486_, lean_object* v_h__5_1487_, lean_object* v_h__6_1488_, lean_object* v_h__7_1489_){
_start:
{
switch(lean_obj_tag(v_x_1479_))
{
case 1:
{
lean_object* v_a_1490_; lean_object* v___x_1491_; 
lean_dec(v_h__7_1489_);
lean_dec(v_h__6_1488_);
lean_dec(v_h__5_1487_);
lean_dec(v_h__4_1486_);
lean_dec(v_h__3_1485_);
lean_dec(v_h__2_1484_);
v_a_1490_ = lean_ctor_get(v_x_1479_, 0);
lean_inc(v_a_1490_);
lean_dec_ref_known(v_x_1479_, 1);
v___x_1491_ = lean_apply_4(v_h__1_1483_, v_a_1490_, v_x_1480_, v_x_1481_, v_x_1482_);
return v___x_1491_;
}
case 2:
{
lean_dec(v_h__6_1488_);
lean_dec(v_h__5_1487_);
lean_dec(v_h__4_1486_);
lean_dec(v_h__1_1483_);
switch(lean_obj_tag(v_x_1481_))
{
case 1:
{
lean_object* v_a_1492_; lean_object* v___x_1493_; 
lean_dec(v_h__7_1489_);
lean_dec(v_h__3_1485_);
v_a_1492_ = lean_ctor_get(v_x_1481_, 0);
lean_inc(v_a_1492_);
lean_dec_ref_known(v_x_1481_, 1);
v___x_1493_ = lean_apply_5(v_h__2_1484_, v_x_1479_, v_x_1480_, v_a_1492_, v_x_1482_, lean_box(0));
return v___x_1493_;
}
case 2:
{
lean_object* v_a_1494_; lean_object* v_a_1495_; lean_object* v_a_1496_; lean_object* v_a_1497_; lean_object* v___x_1498_; 
lean_dec(v_h__7_1489_);
lean_dec(v_h__2_1484_);
v_a_1494_ = lean_ctor_get(v_x_1479_, 0);
lean_inc(v_a_1494_);
v_a_1495_ = lean_ctor_get(v_x_1479_, 1);
lean_inc(v_a_1495_);
lean_dec_ref_known(v_x_1479_, 2);
v_a_1496_ = lean_ctor_get(v_x_1481_, 0);
lean_inc(v_a_1496_);
v_a_1497_ = lean_ctor_get(v_x_1481_, 1);
lean_inc(v_a_1497_);
lean_dec_ref_known(v_x_1481_, 2);
v___x_1498_ = lean_apply_6(v_h__3_1485_, v_a_1494_, v_a_1495_, v_x_1480_, v_a_1496_, v_a_1497_, v_x_1482_);
return v___x_1498_;
}
default: 
{
lean_object* v___x_1499_; 
lean_dec(v_h__3_1485_);
lean_dec(v_h__2_1484_);
v___x_1499_ = lean_apply_10(v_h__7_1489_, v_x_1479_, v_x_1480_, v_x_1481_, v_x_1482_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1499_;
}
}
}
case 3:
{
lean_dec(v_h__6_1488_);
lean_dec(v_h__5_1487_);
lean_dec(v_h__3_1485_);
lean_dec(v_h__1_1483_);
switch(lean_obj_tag(v_x_1481_))
{
case 1:
{
lean_object* v_a_1500_; lean_object* v___x_1501_; 
lean_dec(v_h__7_1489_);
lean_dec(v_h__4_1486_);
v_a_1500_ = lean_ctor_get(v_x_1481_, 0);
lean_inc(v_a_1500_);
lean_dec_ref_known(v_x_1481_, 1);
v___x_1501_ = lean_apply_5(v_h__2_1484_, v_x_1479_, v_x_1480_, v_a_1500_, v_x_1482_, lean_box(0));
return v___x_1501_;
}
case 3:
{
lean_object* v_a_1502_; lean_object* v_a_1503_; lean_object* v_a_1504_; lean_object* v_a_1505_; lean_object* v___x_1506_; 
lean_dec(v_h__7_1489_);
lean_dec(v_h__2_1484_);
v_a_1502_ = lean_ctor_get(v_x_1479_, 0);
lean_inc(v_a_1502_);
v_a_1503_ = lean_ctor_get(v_x_1479_, 1);
lean_inc(v_a_1503_);
lean_dec_ref_known(v_x_1479_, 2);
v_a_1504_ = lean_ctor_get(v_x_1481_, 0);
lean_inc(v_a_1504_);
v_a_1505_ = lean_ctor_get(v_x_1481_, 1);
lean_inc(v_a_1505_);
lean_dec_ref_known(v_x_1481_, 2);
v___x_1506_ = lean_apply_6(v_h__4_1486_, v_a_1502_, v_a_1503_, v_x_1480_, v_a_1504_, v_a_1505_, v_x_1482_);
return v___x_1506_;
}
default: 
{
lean_object* v___x_1507_; 
lean_dec(v_h__4_1486_);
lean_dec(v_h__2_1484_);
v___x_1507_ = lean_apply_10(v_h__7_1489_, v_x_1479_, v_x_1480_, v_x_1481_, v_x_1482_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1507_;
}
}
}
case 4:
{
lean_dec(v_h__6_1488_);
lean_dec(v_h__4_1486_);
lean_dec(v_h__3_1485_);
lean_dec(v_h__1_1483_);
switch(lean_obj_tag(v_x_1481_))
{
case 1:
{
lean_object* v_a_1508_; lean_object* v___x_1509_; 
lean_dec(v_h__7_1489_);
lean_dec(v_h__5_1487_);
v_a_1508_ = lean_ctor_get(v_x_1481_, 0);
lean_inc(v_a_1508_);
lean_dec_ref_known(v_x_1481_, 1);
v___x_1509_ = lean_apply_5(v_h__2_1484_, v_x_1479_, v_x_1480_, v_a_1508_, v_x_1482_, lean_box(0));
return v___x_1509_;
}
case 4:
{
lean_object* v_a_1510_; lean_object* v_a_1511_; lean_object* v___x_1512_; 
lean_dec(v_h__7_1489_);
lean_dec(v_h__2_1484_);
v_a_1510_ = lean_ctor_get(v_x_1479_, 0);
lean_inc(v_a_1510_);
lean_dec_ref_known(v_x_1479_, 1);
v_a_1511_ = lean_ctor_get(v_x_1481_, 0);
lean_inc(v_a_1511_);
lean_dec_ref_known(v_x_1481_, 1);
v___x_1512_ = lean_apply_4(v_h__5_1487_, v_a_1510_, v_x_1480_, v_a_1511_, v_x_1482_);
return v___x_1512_;
}
default: 
{
lean_object* v___x_1513_; 
lean_dec(v_h__5_1487_);
lean_dec(v_h__2_1484_);
v___x_1513_ = lean_apply_10(v_h__7_1489_, v_x_1479_, v_x_1480_, v_x_1481_, v_x_1482_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1513_;
}
}
}
case 5:
{
lean_dec(v_h__5_1487_);
lean_dec(v_h__4_1486_);
lean_dec(v_h__3_1485_);
lean_dec(v_h__1_1483_);
switch(lean_obj_tag(v_x_1481_))
{
case 1:
{
lean_object* v_a_1514_; lean_object* v___x_1515_; 
lean_dec(v_h__7_1489_);
lean_dec(v_h__6_1488_);
v_a_1514_ = lean_ctor_get(v_x_1481_, 0);
lean_inc(v_a_1514_);
lean_dec_ref_known(v_x_1481_, 1);
v___x_1515_ = lean_apply_5(v_h__2_1484_, v_x_1479_, v_x_1480_, v_a_1514_, v_x_1482_, lean_box(0));
return v___x_1515_;
}
case 5:
{
lean_object* v_a_1516_; lean_object* v_a_1517_; lean_object* v___x_1518_; 
lean_dec(v_h__7_1489_);
lean_dec(v_h__2_1484_);
v_a_1516_ = lean_ctor_get(v_x_1479_, 0);
lean_inc(v_a_1516_);
lean_dec_ref_known(v_x_1479_, 1);
v_a_1517_ = lean_ctor_get(v_x_1481_, 0);
lean_inc(v_a_1517_);
lean_dec_ref_known(v_x_1481_, 1);
v___x_1518_ = lean_apply_4(v_h__6_1488_, v_a_1516_, v_x_1480_, v_a_1517_, v_x_1482_);
return v___x_1518_;
}
default: 
{
lean_object* v___x_1519_; 
lean_dec(v_h__6_1488_);
lean_dec(v_h__2_1484_);
v___x_1519_ = lean_apply_10(v_h__7_1489_, v_x_1479_, v_x_1480_, v_x_1481_, v_x_1482_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1519_;
}
}
}
default: 
{
lean_dec(v_h__6_1488_);
lean_dec(v_h__5_1487_);
lean_dec(v_h__4_1486_);
lean_dec(v_h__3_1485_);
lean_dec(v_h__1_1483_);
if (lean_obj_tag(v_x_1481_) == 1)
{
lean_object* v_a_1520_; lean_object* v___x_1521_; 
lean_dec(v_h__7_1489_);
v_a_1520_ = lean_ctor_get(v_x_1481_, 0);
lean_inc(v_a_1520_);
lean_dec_ref_known(v_x_1481_, 1);
v___x_1521_ = lean_apply_5(v_h__2_1484_, v_x_1479_, v_x_1480_, v_a_1520_, v_x_1482_, lean_box(0));
return v___x_1521_;
}
else
{
lean_object* v___x_1522_; 
lean_dec(v_h__2_1484_);
v___x_1522_ = lean_apply_10(v_h__7_1489_, v_x_1479_, v_x_1480_, v_x_1481_, v_x_1482_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_1522_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Level_normLt(lean_object* v_l_u2081_1523_, lean_object* v_l_u2082_1524_){
_start:
{
lean_object* v___x_1525_; uint8_t v___x_1526_; 
v___x_1525_ = lean_unsigned_to_nat(0u);
v___x_1526_ = l_Lean_Level_normLtAux(v_l_u2081_1523_, v___x_1525_, v_l_u2082_1524_, v___x_1525_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_normLt___boxed(lean_object* v_l_u2081_1527_, lean_object* v_l_u2082_1528_){
_start:
{
uint8_t v_res_1529_; lean_object* v_r_1530_; 
v_res_1529_ = l_Lean_Level_normLt(v_l_u2081_1527_, v_l_u2082_1528_);
lean_dec(v_l_u2082_1528_);
lean_dec(v_l_u2081_1527_);
v_r_1530_ = lean_box(v_res_1529_);
return v_r_1530_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isAlreadyNormalizedCheap(lean_object* v_x_1531_){
_start:
{
switch(lean_obj_tag(v_x_1531_))
{
case 0:
{
uint8_t v___x_1532_; 
v___x_1532_ = 1;
return v___x_1532_;
}
case 4:
{
uint8_t v___x_1533_; 
v___x_1533_ = 1;
return v___x_1533_;
}
case 5:
{
uint8_t v___x_1534_; 
v___x_1534_ = 1;
return v___x_1534_;
}
case 1:
{
lean_object* v_a_1535_; 
v_a_1535_ = lean_ctor_get(v_x_1531_, 0);
v_x_1531_ = v_a_1535_;
goto _start;
}
default: 
{
uint8_t v___x_1537_; 
v___x_1537_ = 0;
return v___x_1537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isAlreadyNormalizedCheap___boxed(lean_object* v_x_1538_){
_start:
{
uint8_t v_res_1539_; lean_object* v_r_1540_; 
v_res_1539_ = l_Lean_Level_isAlreadyNormalizedCheap(v_x_1538_);
lean_dec(v_x_1538_);
v_r_1540_ = lean_box(v_res_1539_);
return v_r_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkIMaxAux(lean_object* v_x_1541_, lean_object* v_x_1542_){
_start:
{
lean_object* v_u_u2081_1544_; lean_object* v_u_u2082_1545_; 
if (lean_obj_tag(v_x_1542_) == 0)
{
lean_dec(v_x_1541_);
return v_x_1542_;
}
else
{
switch(lean_obj_tag(v_x_1541_))
{
case 0:
{
return v_x_1542_;
}
case 1:
{
lean_object* v_a_1548_; 
v_a_1548_ = lean_ctor_get(v_x_1541_, 0);
if (lean_obj_tag(v_a_1548_) == 0)
{
lean_dec_ref_known(v_x_1541_, 1);
return v_x_1542_;
}
else
{
v_u_u2081_1544_ = v_x_1541_;
v_u_u2082_1545_ = v_x_1542_;
goto v___jp_1543_;
}
}
default: 
{
v_u_u2081_1544_ = v_x_1541_;
v_u_u2082_1545_ = v_x_1542_;
goto v___jp_1543_;
}
}
}
v___jp_1543_:
{
uint8_t v___x_1546_; 
v___x_1546_ = lean_level_eq(v_u_u2081_1544_, v_u_u2082_1545_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Lean_Level_imax___override(v_u_u2081_1544_, v_u_u2082_1545_);
return v___x_1547_;
}
else
{
lean_dec(v_u_u2082_1545_);
return v_u_u2081_1544_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux(lean_object* v_normalize_1549_, lean_object* v_x_1550_, uint8_t v_x_1551_, lean_object* v_x_1552_){
_start:
{
if (lean_obj_tag(v_x_1550_) == 2)
{
lean_object* v_a_1553_; lean_object* v_a_1554_; lean_object* v___x_1555_; 
v_a_1553_ = lean_ctor_get(v_x_1550_, 0);
lean_inc(v_a_1553_);
v_a_1554_ = lean_ctor_get(v_x_1550_, 1);
lean_inc(v_a_1554_);
lean_dec_ref_known(v_x_1550_, 2);
lean_inc_ref(v_normalize_1549_);
v___x_1555_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux(v_normalize_1549_, v_a_1553_, v_x_1551_, v_x_1552_);
v_x_1550_ = v_a_1554_;
v_x_1552_ = v___x_1555_;
goto _start;
}
else
{
if (v_x_1551_ == 0)
{
lean_object* v___x_1557_; uint8_t v___x_1558_; 
lean_inc_ref(v_normalize_1549_);
v___x_1557_ = lean_apply_1(v_normalize_1549_, v_x_1550_);
v___x_1558_ = 1;
v_x_1550_ = v___x_1557_;
v_x_1551_ = v___x_1558_;
goto _start;
}
else
{
lean_object* v___x_1560_; 
lean_dec_ref(v_normalize_1549_);
v___x_1560_ = lean_array_push(v_x_1552_, v_x_1550_);
return v___x_1560_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___boxed(lean_object* v_normalize_1561_, lean_object* v_x_1562_, lean_object* v_x_1563_, lean_object* v_x_1564_){
_start:
{
uint8_t v_x_31__boxed_1565_; lean_object* v_res_1566_; 
v_x_31__boxed_1565_ = lean_unbox(v_x_1563_);
v_res_1566_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux(v_normalize_1561_, v_x_1562_, v_x_31__boxed_1565_, v_x_1564_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_accMax(lean_object* v_result_1567_, lean_object* v_prev_1568_, lean_object* v_offset_1569_){
_start:
{
uint8_t v___x_1570_; 
v___x_1570_ = l_Lean_Level_isZero(v_result_1567_);
if (v___x_1570_ == 0)
{
lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1571_ = l_Lean_Level_addOffsetAux(v_offset_1569_, v_prev_1568_);
v___x_1572_ = l_Lean_Level_max___override(v_result_1567_, v___x_1571_);
return v___x_1572_;
}
else
{
lean_object* v___x_1573_; 
lean_dec(v_result_1567_);
v___x_1573_ = l_Lean_Level_addOffsetAux(v_offset_1569_, v_prev_1568_);
return v___x_1573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkMaxAux(lean_object* v_lvls_1574_, lean_object* v_extraK_1575_, lean_object* v_i_1576_, lean_object* v_prev_1577_, lean_object* v_prevK_1578_, lean_object* v_result_1579_){
_start:
{
lean_object* v___x_1580_; uint8_t v___x_1581_; 
v___x_1580_ = lean_array_get_size(v_lvls_1574_);
v___x_1581_ = lean_nat_dec_lt(v_i_1576_, v___x_1580_);
if (v___x_1581_ == 0)
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
lean_dec(v_i_1576_);
v___x_1582_ = lean_nat_add(v_extraK_1575_, v_prevK_1578_);
lean_dec(v_prevK_1578_);
v___x_1583_ = l___private_Lean_Level_0__Lean_Level_accMax(v_result_1579_, v_prev_1577_, v___x_1582_);
return v___x_1583_;
}
else
{
lean_object* v_lvl_1584_; lean_object* v_curr_1585_; lean_object* v_currK_1586_; uint8_t v___x_1587_; 
v_lvl_1584_ = lean_array_fget_borrowed(v_lvls_1574_, v_i_1576_);
v_curr_1585_ = l_Lean_Level_getLevelOffset(v_lvl_1584_);
v_currK_1586_ = l_Lean_Level_getOffset(v_lvl_1584_);
v___x_1587_ = lean_level_eq(v_curr_1585_, v_prev_1577_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1588_ = lean_unsigned_to_nat(1u);
v___x_1589_ = lean_nat_add(v_i_1576_, v___x_1588_);
lean_dec(v_i_1576_);
v___x_1590_ = lean_nat_add(v_extraK_1575_, v_prevK_1578_);
lean_dec(v_prevK_1578_);
v___x_1591_ = l___private_Lean_Level_0__Lean_Level_accMax(v_result_1579_, v_prev_1577_, v___x_1590_);
v_i_1576_ = v___x_1589_;
v_prev_1577_ = v_curr_1585_;
v_prevK_1578_ = v_currK_1586_;
v_result_1579_ = v___x_1591_;
goto _start;
}
else
{
lean_object* v___x_1593_; lean_object* v___x_1594_; 
lean_dec(v_prevK_1578_);
lean_dec(v_prev_1577_);
v___x_1593_ = lean_unsigned_to_nat(1u);
v___x_1594_ = lean_nat_add(v_i_1576_, v___x_1593_);
lean_dec(v_i_1576_);
v_i_1576_ = v___x_1594_;
v_prev_1577_ = v_curr_1585_;
v_prevK_1578_ = v_currK_1586_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_mkMaxAux___boxed(lean_object* v_lvls_1596_, lean_object* v_extraK_1597_, lean_object* v_i_1598_, lean_object* v_prev_1599_, lean_object* v_prevK_1600_, lean_object* v_result_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l___private_Lean_Level_0__Lean_Level_mkMaxAux(v_lvls_1596_, v_extraK_1597_, v_i_1598_, v_prev_1599_, v_prevK_1600_, v_result_1601_);
lean_dec(v_extraK_1597_);
lean_dec_ref(v_lvls_1596_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_skipExplicit(lean_object* v_lvls_1603_, lean_object* v_i_1604_){
_start:
{
lean_object* v___x_1605_; uint8_t v___x_1606_; 
v___x_1605_ = lean_array_get_size(v_lvls_1603_);
v___x_1606_ = lean_nat_dec_lt(v_i_1604_, v___x_1605_);
if (v___x_1606_ == 0)
{
return v_i_1604_;
}
else
{
lean_object* v_lvl_1607_; lean_object* v___x_1608_; uint8_t v___x_1609_; 
v_lvl_1607_ = lean_array_fget_borrowed(v_lvls_1603_, v_i_1604_);
v___x_1608_ = l_Lean_Level_getLevelOffset(v_lvl_1607_);
v___x_1609_ = l_Lean_Level_isZero(v___x_1608_);
lean_dec(v___x_1608_);
if (v___x_1609_ == 0)
{
return v_i_1604_;
}
else
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = lean_unsigned_to_nat(1u);
v___x_1611_ = lean_nat_add(v_i_1604_, v___x_1610_);
lean_dec(v_i_1604_);
v_i_1604_ = v___x_1611_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_skipExplicit___boxed(lean_object* v_lvls_1613_, lean_object* v_i_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l___private_Lean_Level_0__Lean_Level_skipExplicit(v_lvls_1613_, v_i_1614_);
lean_dec_ref(v_lvls_1613_);
return v_res_1615_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux(lean_object* v_lvls_1616_, lean_object* v_maxExplicit_1617_, lean_object* v_i_1618_){
_start:
{
lean_object* v___x_1619_; uint8_t v___x_1620_; 
v___x_1619_ = lean_array_get_size(v_lvls_1616_);
v___x_1620_ = lean_nat_dec_lt(v_i_1618_, v___x_1619_);
if (v___x_1620_ == 0)
{
lean_dec(v_i_1618_);
return v___x_1620_;
}
else
{
lean_object* v_lvl_1621_; lean_object* v___x_1622_; uint8_t v___x_1623_; 
v_lvl_1621_ = lean_array_fget_borrowed(v_lvls_1616_, v_i_1618_);
v___x_1622_ = l_Lean_Level_getOffset(v_lvl_1621_);
v___x_1623_ = lean_nat_dec_le(v_maxExplicit_1617_, v___x_1622_);
lean_dec(v___x_1622_);
if (v___x_1623_ == 0)
{
lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1624_ = lean_unsigned_to_nat(1u);
v___x_1625_ = lean_nat_add(v_i_1618_, v___x_1624_);
lean_dec(v_i_1618_);
v_i_1618_ = v___x_1625_;
goto _start;
}
else
{
lean_dec(v_i_1618_);
return v___x_1623_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux___boxed(lean_object* v_lvls_1627_, lean_object* v_maxExplicit_1628_, lean_object* v_i_1629_){
_start:
{
uint8_t v_res_1630_; lean_object* v_r_1631_; 
v_res_1630_ = l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux(v_lvls_1627_, v_maxExplicit_1628_, v_i_1629_);
lean_dec(v_maxExplicit_1628_);
lean_dec_ref(v_lvls_1627_);
v_r_1631_ = lean_box(v_res_1630_);
return v_r_1631_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed(lean_object* v_lvls_1632_, lean_object* v_firstNonExplicit_1633_){
_start:
{
lean_object* v___x_1634_; uint8_t v___x_1635_; 
v___x_1634_ = lean_unsigned_to_nat(0u);
v___x_1635_ = lean_nat_dec_eq(v_firstNonExplicit_1633_, v___x_1634_);
if (v___x_1635_ == 0)
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v_max_1640_; uint8_t v___x_1641_; 
v___x_1636_ = lean_box(0);
v___x_1637_ = lean_unsigned_to_nat(1u);
v___x_1638_ = lean_nat_sub(v_firstNonExplicit_1633_, v___x_1637_);
v___x_1639_ = lean_array_get_borrowed(v___x_1636_, v_lvls_1632_, v___x_1638_);
lean_dec(v___x_1638_);
v_max_1640_ = l_Lean_Level_getOffset(v___x_1639_);
v___x_1641_ = l___private_Lean_Level_0__Lean_Level_isExplicitSubsumedAux(v_lvls_1632_, v_max_1640_, v_firstNonExplicit_1633_);
lean_dec(v_max_1640_);
return v___x_1641_;
}
else
{
uint8_t v___x_1642_; 
lean_dec(v_firstNonExplicit_1633_);
v___x_1642_ = 0;
return v___x_1642_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed___boxed(lean_object* v_lvls_1643_, lean_object* v_firstNonExplicit_1644_){
_start:
{
uint8_t v_res_1645_; lean_object* v_r_1646_; 
v_res_1645_ = l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed(v_lvls_1643_, v_firstNonExplicit_1644_);
lean_dec_ref(v_lvls_1643_);
v_r_1646_ = lean_box(v_res_1645_);
return v_r_1646_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Level_normalize_spec__2(lean_object* v_msg_1647_){
_start:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1648_ = lean_box(0);
v___x_1649_ = lean_panic_fn_borrowed(v___x_1648_, v_msg_1647_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg(lean_object* v_hi_1650_, lean_object* v_pivot_1651_, lean_object* v_as_1652_, lean_object* v_i_1653_, lean_object* v_k_1654_){
_start:
{
uint8_t v___x_1655_; 
v___x_1655_ = lean_nat_dec_lt(v_k_1654_, v_hi_1650_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
lean_dec(v_k_1654_);
v___x_1656_ = lean_array_fswap(v_as_1652_, v_i_1653_, v_hi_1650_);
v___x_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1657_, 0, v_i_1653_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
return v___x_1657_;
}
else
{
lean_object* v___x_1658_; uint8_t v___x_1659_; 
v___x_1658_ = lean_array_fget_borrowed(v_as_1652_, v_k_1654_);
v___x_1659_ = l_Lean_Level_normLt(v___x_1658_, v_pivot_1651_);
if (v___x_1659_ == 0)
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = lean_unsigned_to_nat(1u);
v___x_1661_ = lean_nat_add(v_k_1654_, v___x_1660_);
lean_dec(v_k_1654_);
v_k_1654_ = v___x_1661_;
goto _start;
}
else
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1663_ = lean_array_fswap(v_as_1652_, v_i_1653_, v_k_1654_);
v___x_1664_ = lean_unsigned_to_nat(1u);
v___x_1665_ = lean_nat_add(v_i_1653_, v___x_1664_);
lean_dec(v_i_1653_);
v___x_1666_ = lean_nat_add(v_k_1654_, v___x_1664_);
lean_dec(v_k_1654_);
v_as_1652_ = v___x_1663_;
v_i_1653_ = v___x_1665_;
v_k_1654_ = v___x_1666_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg___boxed(lean_object* v_hi_1668_, lean_object* v_pivot_1669_, lean_object* v_as_1670_, lean_object* v_i_1671_, lean_object* v_k_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg(v_hi_1668_, v_pivot_1669_, v_as_1670_, v_i_1671_, v_k_1672_);
lean_dec(v_pivot_1669_);
lean_dec(v_hi_1668_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(lean_object* v_n_1674_, lean_object* v_as_1675_, lean_object* v_lo_1676_, lean_object* v_hi_1677_){
_start:
{
lean_object* v___y_1679_; uint8_t v___x_1689_; 
v___x_1689_ = lean_nat_dec_lt(v_lo_1676_, v_hi_1677_);
if (v___x_1689_ == 0)
{
lean_dec(v_lo_1676_);
return v_as_1675_;
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v_mid_1692_; lean_object* v___y_1694_; lean_object* v___y_1700_; lean_object* v___x_1705_; lean_object* v___x_1706_; uint8_t v___x_1707_; 
v___x_1690_ = lean_nat_add(v_lo_1676_, v_hi_1677_);
v___x_1691_ = lean_unsigned_to_nat(1u);
v_mid_1692_ = lean_nat_shiftr(v___x_1690_, v___x_1691_);
lean_dec(v___x_1690_);
v___x_1705_ = lean_array_fget_borrowed(v_as_1675_, v_mid_1692_);
v___x_1706_ = lean_array_fget_borrowed(v_as_1675_, v_lo_1676_);
v___x_1707_ = l_Lean_Level_normLt(v___x_1705_, v___x_1706_);
if (v___x_1707_ == 0)
{
v___y_1700_ = v_as_1675_;
goto v___jp_1699_;
}
else
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_array_fswap(v_as_1675_, v_lo_1676_, v_mid_1692_);
v___y_1700_ = v___x_1708_;
goto v___jp_1699_;
}
v___jp_1693_:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; uint8_t v___x_1697_; 
v___x_1695_ = lean_array_fget_borrowed(v___y_1694_, v_mid_1692_);
v___x_1696_ = lean_array_fget_borrowed(v___y_1694_, v_hi_1677_);
v___x_1697_ = l_Lean_Level_normLt(v___x_1695_, v___x_1696_);
if (v___x_1697_ == 0)
{
lean_dec(v_mid_1692_);
v___y_1679_ = v___y_1694_;
goto v___jp_1678_;
}
else
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_array_fswap(v___y_1694_, v_mid_1692_, v_hi_1677_);
lean_dec(v_mid_1692_);
v___y_1679_ = v___x_1698_;
goto v___jp_1678_;
}
}
v___jp_1699_:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; uint8_t v___x_1703_; 
v___x_1701_ = lean_array_fget_borrowed(v___y_1700_, v_hi_1677_);
v___x_1702_ = lean_array_fget_borrowed(v___y_1700_, v_lo_1676_);
v___x_1703_ = l_Lean_Level_normLt(v___x_1701_, v___x_1702_);
if (v___x_1703_ == 0)
{
v___y_1694_ = v___y_1700_;
goto v___jp_1693_;
}
else
{
lean_object* v___x_1704_; 
v___x_1704_ = lean_array_fswap(v___y_1700_, v_lo_1676_, v_hi_1677_);
v___y_1694_ = v___x_1704_;
goto v___jp_1693_;
}
}
}
v___jp_1678_:
{
lean_object* v_pivot_1680_; lean_object* v___x_1681_; lean_object* v_fst_1682_; lean_object* v_snd_1683_; uint8_t v___x_1684_; 
v_pivot_1680_ = lean_array_fget(v___y_1679_, v_hi_1677_);
lean_inc_n(v_lo_1676_, 2);
v___x_1681_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg(v_hi_1677_, v_pivot_1680_, v___y_1679_, v_lo_1676_, v_lo_1676_);
lean_dec(v_pivot_1680_);
v_fst_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc(v_fst_1682_);
v_snd_1683_ = lean_ctor_get(v___x_1681_, 1);
lean_inc(v_snd_1683_);
lean_dec_ref(v___x_1681_);
v___x_1684_ = lean_nat_dec_le(v_hi_1677_, v_fst_1682_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1685_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(v_n_1674_, v_snd_1683_, v_lo_1676_, v_fst_1682_);
v___x_1686_ = lean_unsigned_to_nat(1u);
v___x_1687_ = lean_nat_add(v_fst_1682_, v___x_1686_);
lean_dec(v_fst_1682_);
v_as_1675_ = v___x_1685_;
v_lo_1676_ = v___x_1687_;
goto _start;
}
else
{
lean_dec(v_fst_1682_);
lean_dec(v_lo_1676_);
return v_snd_1683_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg___boxed(lean_object* v_n_1709_, lean_object* v_as_1710_, lean_object* v_lo_1711_, lean_object* v_hi_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(v_n_1709_, v_as_1710_, v_lo_1711_, v_hi_1712_);
lean_dec(v_hi_1712_);
lean_dec(v_n_1709_);
return v_res_1713_;
}
}
static lean_object* _init_l_Lean_Level_normalize___closed__3(void){
_start:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1718_ = ((lean_object*)(l_Lean_Level_normalize___closed__2));
v___x_1719_ = lean_unsigned_to_nat(11u);
v___x_1720_ = lean_unsigned_to_nat(433u);
v___x_1721_ = ((lean_object*)(l_Lean_Level_normalize___closed__1));
v___x_1722_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__0));
v___x_1723_ = l_mkPanicMessageWithDecl(v___x_1722_, v___x_1721_, v___x_1720_, v___x_1719_, v___x_1718_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_normalize(lean_object* v_l_1724_){
_start:
{
uint8_t v___x_1725_; 
v___x_1725_ = l_Lean_Level_isAlreadyNormalizedCheap(v_l_1724_);
if (v___x_1725_ == 0)
{
lean_object* v_k_1726_; lean_object* v_u_1727_; 
v_k_1726_ = l_Lean_Level_getOffset(v_l_1724_);
v_u_1727_ = l_Lean_Level_getLevelOffset(v_l_1724_);
switch(lean_obj_tag(v_u_1727_))
{
case 2:
{
lean_object* v_a_1728_; lean_object* v_a_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v_lvls_1733_; lean_object* v_lvls_1734_; lean_object* v___x_1735_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1745_; lean_object* v___x_1749_; lean_object* v___y_1751_; lean_object* v___y_1752_; uint8_t v___x_1754_; 
v_a_1728_ = lean_ctor_get(v_u_1727_, 0);
lean_inc(v_a_1728_);
v_a_1729_ = lean_ctor_get(v_u_1727_, 1);
lean_inc(v_a_1729_);
lean_dec_ref_known(v_u_1727_, 2);
v___x_1730_ = lean_box(0);
v___x_1731_ = lean_unsigned_to_nat(0u);
v___x_1732_ = ((lean_object*)(l_Lean_Level_normalize___closed__0));
v_lvls_1733_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(v_a_1728_, v___x_1725_, v___x_1732_);
v_lvls_1734_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(v_a_1729_, v___x_1725_, v_lvls_1733_);
v___x_1735_ = lean_unsigned_to_nat(1u);
v___x_1749_ = lean_array_get_size(v_lvls_1734_);
v___x_1754_ = lean_nat_dec_eq(v___x_1749_, v___x_1731_);
if (v___x_1754_ == 0)
{
lean_object* v___x_1755_; lean_object* v___y_1757_; uint8_t v___x_1759_; 
v___x_1755_ = lean_nat_sub(v___x_1749_, v___x_1735_);
v___x_1759_ = lean_nat_dec_le(v___x_1731_, v___x_1755_);
if (v___x_1759_ == 0)
{
lean_inc(v___x_1755_);
v___y_1757_ = v___x_1755_;
goto v___jp_1756_;
}
else
{
v___y_1757_ = v___x_1731_;
goto v___jp_1756_;
}
v___jp_1756_:
{
uint8_t v___x_1758_; 
v___x_1758_ = lean_nat_dec_le(v___y_1757_, v___x_1755_);
if (v___x_1758_ == 0)
{
lean_dec(v___x_1755_);
lean_inc(v___y_1757_);
v___y_1751_ = v___y_1757_;
v___y_1752_ = v___y_1757_;
goto v___jp_1750_;
}
else
{
v___y_1751_ = v___y_1757_;
v___y_1752_ = v___x_1755_;
goto v___jp_1750_;
}
}
}
else
{
v___y_1745_ = v_lvls_1734_;
goto v___jp_1744_;
}
v___jp_1736_:
{
lean_object* v_lvl_u2081_1739_; lean_object* v_prev_1740_; lean_object* v_prevK_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v_lvl_u2081_1739_ = lean_array_get_borrowed(v___x_1730_, v___y_1737_, v___y_1738_);
v_prev_1740_ = l_Lean_Level_getLevelOffset(v_lvl_u2081_1739_);
v_prevK_1741_ = l_Lean_Level_getOffset(v_lvl_u2081_1739_);
v___x_1742_ = lean_nat_add(v___y_1738_, v___x_1735_);
lean_dec(v___y_1738_);
v___x_1743_ = l___private_Lean_Level_0__Lean_Level_mkMaxAux(v___y_1737_, v_k_1726_, v___x_1742_, v_prev_1740_, v_prevK_1741_, v___x_1730_);
lean_dec(v_k_1726_);
lean_dec_ref(v___y_1737_);
return v___x_1743_;
}
v___jp_1744_:
{
lean_object* v_firstNonExplicit_1746_; uint8_t v___x_1747_; 
v_firstNonExplicit_1746_ = l___private_Lean_Level_0__Lean_Level_skipExplicit(v___y_1745_, v___x_1731_);
lean_inc(v_firstNonExplicit_1746_);
v___x_1747_ = l___private_Lean_Level_0__Lean_Level_isExplicitSubsumed(v___y_1745_, v_firstNonExplicit_1746_);
if (v___x_1747_ == 0)
{
lean_object* v___x_1748_; 
v___x_1748_ = lean_nat_sub(v_firstNonExplicit_1746_, v___x_1735_);
lean_dec(v_firstNonExplicit_1746_);
v___y_1737_ = v___y_1745_;
v___y_1738_ = v___x_1748_;
goto v___jp_1736_;
}
else
{
v___y_1737_ = v___y_1745_;
v___y_1738_ = v_firstNonExplicit_1746_;
goto v___jp_1736_;
}
}
v___jp_1750_:
{
lean_object* v___x_1753_; 
v___x_1753_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(v___x_1749_, v_lvls_1734_, v___y_1751_, v___y_1752_);
lean_dec(v___y_1752_);
v___y_1745_ = v___x_1753_;
goto v___jp_1744_;
}
}
case 3:
{
lean_object* v_a_1760_; lean_object* v_a_1761_; uint8_t v___x_1762_; 
v_a_1760_ = lean_ctor_get(v_u_1727_, 0);
lean_inc(v_a_1760_);
v_a_1761_ = lean_ctor_get(v_u_1727_, 1);
lean_inc(v_a_1761_);
lean_dec_ref_known(v_u_1727_, 2);
v___x_1762_ = l_Lean_Level_isNeverZero(v_a_1761_);
if (v___x_1762_ == 0)
{
lean_object* v_l_u2081_1763_; lean_object* v_l_u2082_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v_l_u2081_1763_ = l_Lean_Level_normalize(v_a_1760_);
lean_dec(v_a_1760_);
v_l_u2082_1764_ = l_Lean_Level_normalize(v_a_1761_);
lean_dec(v_a_1761_);
v___x_1765_ = l___private_Lean_Level_0__Lean_Level_mkIMaxAux(v_l_u2081_1763_, v_l_u2082_1764_);
v___x_1766_ = l_Lean_Level_addOffsetAux(v_k_1726_, v___x_1765_);
return v___x_1766_;
}
else
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1767_ = l_Lean_Level_max___override(v_a_1760_, v_a_1761_);
v___x_1768_ = l_Lean_Level_normalize(v___x_1767_);
lean_dec(v___x_1767_);
v___x_1769_ = l_Lean_Level_addOffsetAux(v_k_1726_, v___x_1768_);
return v___x_1769_;
}
}
default: 
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
lean_dec(v_u_1727_);
lean_dec(v_k_1726_);
v___x_1770_ = lean_obj_once(&l_Lean_Level_normalize___closed__3, &l_Lean_Level_normalize___closed__3_once, _init_l_Lean_Level_normalize___closed__3);
v___x_1771_ = l_panic___at___00Lean_Level_normalize_spec__2(v___x_1770_);
return v___x_1771_;
}
}
}
else
{
lean_inc(v_l_1724_);
return v_l_1724_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(lean_object* v_x_1772_, uint8_t v_x_1773_, lean_object* v_x_1774_){
_start:
{
if (lean_obj_tag(v_x_1772_) == 2)
{
lean_object* v_a_1775_; lean_object* v_a_1776_; lean_object* v___x_1777_; 
v_a_1775_ = lean_ctor_get(v_x_1772_, 0);
lean_inc(v_a_1775_);
v_a_1776_ = lean_ctor_get(v_x_1772_, 1);
lean_inc(v_a_1776_);
lean_dec_ref_known(v_x_1772_, 2);
v___x_1777_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(v_a_1775_, v_x_1773_, v_x_1774_);
v_x_1772_ = v_a_1776_;
v_x_1774_ = v___x_1777_;
goto _start;
}
else
{
if (v_x_1773_ == 0)
{
lean_object* v___x_1779_; uint8_t v___x_1780_; 
v___x_1779_ = l_Lean_Level_normalize(v_x_1772_);
lean_dec(v_x_1772_);
v___x_1780_ = 1;
v_x_1772_ = v___x_1779_;
v_x_1773_ = v___x_1780_;
goto _start;
}
else
{
lean_object* v___x_1782_; 
v___x_1782_ = lean_array_push(v_x_1774_, v_x_1772_);
return v___x_1782_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0___boxed(lean_object* v_x_1783_, lean_object* v_x_1784_, lean_object* v_x_1785_){
_start:
{
uint8_t v_x_483__boxed_1786_; lean_object* v_res_1787_; 
v_x_483__boxed_1786_ = lean_unbox(v_x_1784_);
v_res_1787_ = l___private_Lean_Level_0__Lean_Level_getMaxArgsAux___at___00Lean_Level_normalize_spec__0(v_x_1783_, v_x_483__boxed_1786_, v_x_1785_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_normalize___boxed(lean_object* v_l_1788_){
_start:
{
lean_object* v_res_1789_; 
v_res_1789_ = l_Lean_Level_normalize(v_l_1788_);
lean_dec(v_l_1788_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1(lean_object* v_n_1790_, lean_object* v_as_1791_, lean_object* v_lo_1792_, lean_object* v_hi_1793_, lean_object* v_w_1794_, lean_object* v_hlo_1795_, lean_object* v_hhi_1796_){
_start:
{
lean_object* v___x_1797_; 
v___x_1797_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___redArg(v_n_1790_, v_as_1791_, v_lo_1792_, v_hi_1793_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1___boxed(lean_object* v_n_1798_, lean_object* v_as_1799_, lean_object* v_lo_1800_, lean_object* v_hi_1801_, lean_object* v_w_1802_, lean_object* v_hlo_1803_, lean_object* v_hhi_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1(v_n_1798_, v_as_1799_, v_lo_1800_, v_hi_1801_, v_w_1802_, v_hlo_1803_, v_hhi_1804_);
lean_dec(v_hi_1801_);
lean_dec(v_n_1798_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1(lean_object* v_n_1806_, lean_object* v_lo_1807_, lean_object* v_hi_1808_, lean_object* v_hhi_1809_, lean_object* v_pivot_1810_, lean_object* v_as_1811_, lean_object* v_i_1812_, lean_object* v_k_1813_, lean_object* v_ilo_1814_, lean_object* v_ik_1815_, lean_object* v_w_1816_){
_start:
{
lean_object* v___x_1817_; 
v___x_1817_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___redArg(v_hi_1808_, v_pivot_1810_, v_as_1811_, v_i_1812_, v_k_1813_);
return v___x_1817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1___boxed(lean_object* v_n_1818_, lean_object* v_lo_1819_, lean_object* v_hi_1820_, lean_object* v_hhi_1821_, lean_object* v_pivot_1822_, lean_object* v_as_1823_, lean_object* v_i_1824_, lean_object* v_k_1825_, lean_object* v_ilo_1826_, lean_object* v_ik_1827_, lean_object* v_w_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Level_normalize_spec__1_spec__1(v_n_1818_, v_lo_1819_, v_hi_1820_, v_hhi_1821_, v_pivot_1822_, v_as_1823_, v_i_1824_, v_k_1825_, v_ilo_1826_, v_ik_1827_, v_w_1828_);
lean_dec(v_pivot_1822_);
lean_dec(v_hi_1820_);
lean_dec(v_lo_1819_);
lean_dec(v_n_1818_);
return v_res_1829_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_isEquiv(lean_object* v_u_1830_, lean_object* v_v_1831_){
_start:
{
uint8_t v___x_1832_; 
v___x_1832_ = lean_level_eq(v_u_1830_, v_v_1831_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; lean_object* v___x_1834_; uint8_t v___x_1835_; 
v___x_1833_ = l_Lean_Level_normalize(v_u_1830_);
v___x_1834_ = l_Lean_Level_normalize(v_v_1831_);
v___x_1835_ = lean_level_eq(v___x_1833_, v___x_1834_);
lean_dec(v___x_1834_);
lean_dec(v___x_1833_);
return v___x_1835_;
}
else
{
return v___x_1832_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_isEquiv___boxed(lean_object* v_u_1836_, lean_object* v_v_1837_){
_start:
{
uint8_t v_res_1838_; lean_object* v_r_1839_; 
v_res_1838_ = l_Lean_Level_isEquiv(v_u_1836_, v_v_1837_);
lean_dec(v_v_1837_);
lean_dec(v_u_1836_);
v_r_1839_ = lean_box(v_res_1838_);
return v_r_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_dec(lean_object* v_x_1840_){
_start:
{
lean_object* v_l_u2081_1842_; lean_object* v_l_u2082_1843_; 
switch(lean_obj_tag(v_x_1840_))
{
case 0:
{
lean_object* v___x_1856_; 
v___x_1856_ = lean_box(0);
return v___x_1856_;
}
case 1:
{
lean_object* v_a_1857_; lean_object* v___x_1858_; 
v_a_1857_ = lean_ctor_get(v_x_1840_, 0);
lean_inc(v_a_1857_);
v___x_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1858_, 0, v_a_1857_);
return v___x_1858_;
}
case 2:
{
lean_object* v_a_1859_; lean_object* v_a_1860_; 
v_a_1859_ = lean_ctor_get(v_x_1840_, 0);
v_a_1860_ = lean_ctor_get(v_x_1840_, 1);
v_l_u2081_1842_ = v_a_1859_;
v_l_u2082_1843_ = v_a_1860_;
goto v___jp_1841_;
}
case 3:
{
lean_object* v_a_1861_; lean_object* v_a_1862_; 
v_a_1861_ = lean_ctor_get(v_x_1840_, 0);
v_a_1862_ = lean_ctor_get(v_x_1840_, 1);
v_l_u2081_1842_ = v_a_1861_;
v_l_u2082_1843_ = v_a_1862_;
goto v___jp_1841_;
}
default: 
{
lean_object* v___x_1863_; 
v___x_1863_ = lean_box(0);
return v___x_1863_;
}
}
v___jp_1841_:
{
lean_object* v___x_1844_; 
v___x_1844_ = l_Lean_Level_dec(v_l_u2081_1842_);
if (lean_obj_tag(v___x_1844_) == 0)
{
return v___x_1844_;
}
else
{
lean_object* v_val_1845_; lean_object* v___x_1846_; 
v_val_1845_ = lean_ctor_get(v___x_1844_, 0);
lean_inc(v_val_1845_);
lean_dec_ref_known(v___x_1844_, 1);
v___x_1846_ = l_Lean_Level_dec(v_l_u2082_1843_);
if (lean_obj_tag(v___x_1846_) == 0)
{
lean_dec(v_val_1845_);
return v___x_1846_;
}
else
{
lean_object* v_val_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1855_; 
v_val_1847_ = lean_ctor_get(v___x_1846_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1846_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1849_ = v___x_1846_;
v_isShared_1850_ = v_isSharedCheck_1855_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_val_1847_);
lean_dec(v___x_1846_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1855_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v___x_1851_; lean_object* v___x_1853_; 
v___x_1851_ = l_Lean_Level_max___override(v_val_1845_, v_val_1847_);
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 0, v___x_1851_);
v___x_1853_ = v___x_1849_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v___x_1851_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_dec___boxed(lean_object* v_x_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lean_Level_dec(v_x_1864_);
lean_dec(v_x_1864_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorIdx(lean_object* v_x_1866_){
_start:
{
switch(lean_obj_tag(v_x_1866_))
{
case 0:
{
lean_object* v___x_1867_; 
v___x_1867_ = lean_unsigned_to_nat(0u);
return v___x_1867_;
}
case 1:
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_unsigned_to_nat(1u);
return v___x_1868_;
}
case 2:
{
lean_object* v___x_1869_; 
v___x_1869_ = lean_unsigned_to_nat(2u);
return v___x_1869_;
}
case 3:
{
lean_object* v___x_1870_; 
v___x_1870_ = lean_unsigned_to_nat(3u);
return v___x_1870_;
}
default: 
{
lean_object* v___x_1871_; 
v___x_1871_ = lean_unsigned_to_nat(4u);
return v___x_1871_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorIdx___boxed(lean_object* v_x_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_Lean_Level_PP_Result_ctorIdx(v_x_1872_);
lean_dec_ref(v_x_1872_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim___redArg(lean_object* v_t_1874_, lean_object* v_k_1875_){
_start:
{
if (lean_obj_tag(v_t_1874_) == 2)
{
lean_object* v_a_1876_; lean_object* v_a_1877_; lean_object* v___x_1878_; 
v_a_1876_ = lean_ctor_get(v_t_1874_, 0);
lean_inc_ref(v_a_1876_);
v_a_1877_ = lean_ctor_get(v_t_1874_, 1);
lean_inc(v_a_1877_);
lean_dec_ref_known(v_t_1874_, 2);
v___x_1878_ = lean_apply_2(v_k_1875_, v_a_1876_, v_a_1877_);
return v___x_1878_;
}
else
{
lean_object* v_a_1879_; lean_object* v___x_1880_; 
v_a_1879_ = lean_ctor_get(v_t_1874_, 0);
lean_inc(v_a_1879_);
lean_dec_ref(v_t_1874_);
v___x_1880_ = lean_apply_1(v_k_1875_, v_a_1879_);
return v___x_1880_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim(lean_object* v_motive__1_1881_, lean_object* v_ctorIdx_1882_, lean_object* v_t_1883_, lean_object* v_h_1884_, lean_object* v_k_1885_){
_start:
{
lean_object* v___x_1886_; 
v___x_1886_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1883_, v_k_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_ctorElim___boxed(lean_object* v_motive__1_1887_, lean_object* v_ctorIdx_1888_, lean_object* v_t_1889_, lean_object* v_h_1890_, lean_object* v_k_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l_Lean_Level_PP_Result_ctorElim(v_motive__1_1887_, v_ctorIdx_1888_, v_t_1889_, v_h_1890_, v_k_1891_);
lean_dec(v_ctorIdx_1888_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_leaf_elim___redArg(lean_object* v_t_1893_, lean_object* v_leaf_1894_){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1893_, v_leaf_1894_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_leaf_elim(lean_object* v_motive__1_1896_, lean_object* v_t_1897_, lean_object* v_h_1898_, lean_object* v_leaf_1899_){
_start:
{
lean_object* v___x_1900_; 
v___x_1900_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1897_, v_leaf_1899_);
return v___x_1900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_num_elim___redArg(lean_object* v_t_1901_, lean_object* v_num_1902_){
_start:
{
lean_object* v___x_1903_; 
v___x_1903_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1901_, v_num_1902_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_num_elim(lean_object* v_motive__1_1904_, lean_object* v_t_1905_, lean_object* v_h_1906_, lean_object* v_num_1907_){
_start:
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1905_, v_num_1907_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_offset_elim___redArg(lean_object* v_t_1909_, lean_object* v_offset_1910_){
_start:
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1909_, v_offset_1910_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_offset_elim(lean_object* v_motive__1_1912_, lean_object* v_t_1913_, lean_object* v_h_1914_, lean_object* v_offset_1915_){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1913_, v_offset_1915_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_maxNode_elim___redArg(lean_object* v_t_1917_, lean_object* v_maxNode_1918_){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1917_, v_maxNode_1918_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_maxNode_elim(lean_object* v_motive__1_1920_, lean_object* v_t_1921_, lean_object* v_h_1922_, lean_object* v_maxNode_1923_){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1921_, v_maxNode_1923_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imaxNode_elim___redArg(lean_object* v_t_1925_, lean_object* v_imaxNode_1926_){
_start:
{
lean_object* v___x_1927_; 
v___x_1927_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1925_, v_imaxNode_1926_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imaxNode_elim(lean_object* v_motive__1_1928_, lean_object* v_t_1929_, lean_object* v_h_1930_, lean_object* v_imaxNode_1931_){
_start:
{
lean_object* v___x_1932_; 
v___x_1932_ = l_Lean_Level_PP_Result_ctorElim___redArg(v_t_1929_, v_imaxNode_1931_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_succ(lean_object* v_x_1933_){
_start:
{
switch(lean_obj_tag(v_x_1933_))
{
case 2:
{
lean_object* v_a_1934_; lean_object* v_a_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1944_; 
v_a_1934_ = lean_ctor_get(v_x_1933_, 0);
v_a_1935_ = lean_ctor_get(v_x_1933_, 1);
v_isSharedCheck_1944_ = !lean_is_exclusive(v_x_1933_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1937_ = v_x_1933_;
v_isShared_1938_ = v_isSharedCheck_1944_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_a_1935_);
lean_inc(v_a_1934_);
lean_dec(v_x_1933_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1944_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1939_ = lean_unsigned_to_nat(1u);
v___x_1940_ = lean_nat_add(v_a_1935_, v___x_1939_);
lean_dec(v_a_1935_);
if (v_isShared_1938_ == 0)
{
lean_ctor_set(v___x_1937_, 1, v___x_1940_);
v___x_1942_ = v___x_1937_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v_a_1934_);
lean_ctor_set(v_reuseFailAlloc_1943_, 1, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
case 1:
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1954_; 
v_a_1945_ = lean_ctor_get(v_x_1933_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v_x_1933_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1947_ = v_x_1933_;
v_isShared_1948_ = v_isSharedCheck_1954_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v_x_1933_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1954_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1952_; 
v___x_1949_ = lean_unsigned_to_nat(1u);
v___x_1950_ = lean_nat_add(v_a_1945_, v___x_1949_);
lean_dec(v_a_1945_);
if (v_isShared_1948_ == 0)
{
lean_ctor_set(v___x_1947_, 0, v___x_1950_);
v___x_1952_ = v___x_1947_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v___x_1950_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
default: 
{
lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1955_ = lean_unsigned_to_nat(1u);
v___x_1956_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1956_, 0, v_x_1933_);
lean_ctor_set(v___x_1956_, 1, v___x_1955_);
return v___x_1956_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_max(lean_object* v_x_1957_, lean_object* v_x_1958_){
_start:
{
if (lean_obj_tag(v_x_1958_) == 3)
{
lean_object* v_a_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1967_; 
v_a_1959_ = lean_ctor_get(v_x_1958_, 0);
v_isSharedCheck_1967_ = !lean_is_exclusive(v_x_1958_);
if (v_isSharedCheck_1967_ == 0)
{
v___x_1961_ = v_x_1958_;
v_isShared_1962_ = v_isSharedCheck_1967_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_a_1959_);
lean_dec(v_x_1958_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1967_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1963_; lean_object* v___x_1965_; 
v___x_1963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1963_, 0, v_x_1957_);
lean_ctor_set(v___x_1963_, 1, v_a_1959_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 0, v___x_1963_);
v___x_1965_ = v___x_1961_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
else
{
lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1968_ = lean_box(0);
v___x_1969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1969_, 0, v_x_1958_);
lean_ctor_set(v___x_1969_, 1, v___x_1968_);
v___x_1970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1970_, 0, v_x_1957_);
lean_ctor_set(v___x_1970_, 1, v___x_1969_);
v___x_1971_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1970_);
return v___x_1971_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_imax(lean_object* v_x_1972_, lean_object* v_x_1973_){
_start:
{
if (lean_obj_tag(v_x_1973_) == 4)
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1982_; 
v_a_1974_ = lean_ctor_get(v_x_1973_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v_x_1973_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1976_ = v_x_1973_;
v_isShared_1977_ = v_isSharedCheck_1982_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v_x_1973_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1982_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1978_; lean_object* v___x_1980_; 
v___x_1978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1978_, 0, v_x_1972_);
lean_ctor_set(v___x_1978_, 1, v_a_1974_);
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 0, v___x_1978_);
v___x_1980_ = v___x_1976_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v___x_1978_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
else
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1983_ = lean_box(0);
v___x_1984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1984_, 0, v_x_1973_);
lean_ctor_set(v___x_1984_, 1, v___x_1983_);
v___x_1985_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1985_, 0, v_x_1972_);
lean_ctor_set(v___x_1985_, 1, v___x_1984_);
v___x_1986_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1986_, 0, v___x_1985_);
return v___x_1986_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_toResult(lean_object* v_l_2005_, lean_object* v_a_2006_){
_start:
{
switch(lean_obj_tag(v_l_2005_))
{
case 0:
{
lean_object* v___x_2007_; 
v___x_2007_ = ((lean_object*)(l_Lean_Level_PP_toResult___closed__0));
return v___x_2007_;
}
case 1:
{
lean_object* v_a_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; 
v_a_2008_ = lean_ctor_get(v_l_2005_, 0);
lean_inc(v_a_2008_);
lean_dec_ref_known(v_l_2005_, 1);
v___x_2009_ = l_Lean_Level_PP_toResult(v_a_2008_, v_a_2006_);
v___x_2010_ = l_Lean_Level_PP_Result_succ(v___x_2009_);
return v___x_2010_;
}
case 2:
{
lean_object* v_a_2011_; lean_object* v_a_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; 
v_a_2011_ = lean_ctor_get(v_l_2005_, 0);
lean_inc(v_a_2011_);
v_a_2012_ = lean_ctor_get(v_l_2005_, 1);
lean_inc(v_a_2012_);
lean_dec_ref_known(v_l_2005_, 2);
v___x_2013_ = l_Lean_Level_PP_toResult(v_a_2011_, v_a_2006_);
v___x_2014_ = l_Lean_Level_PP_toResult(v_a_2012_, v_a_2006_);
v___x_2015_ = l_Lean_Level_PP_Result_max(v___x_2013_, v___x_2014_);
return v___x_2015_;
}
case 3:
{
lean_object* v_a_2016_; lean_object* v_a_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v_a_2016_ = lean_ctor_get(v_l_2005_, 0);
lean_inc(v_a_2016_);
v_a_2017_ = lean_ctor_get(v_l_2005_, 1);
lean_inc(v_a_2017_);
lean_dec_ref_known(v_l_2005_, 2);
v___x_2018_ = l_Lean_Level_PP_toResult(v_a_2016_, v_a_2006_);
v___x_2019_ = l_Lean_Level_PP_toResult(v_a_2017_, v_a_2006_);
v___x_2020_ = l_Lean_Level_PP_Result_imax(v___x_2018_, v___x_2019_);
return v___x_2020_;
}
case 4:
{
lean_object* v_a_2021_; lean_object* v___x_2022_; 
v_a_2021_ = lean_ctor_get(v_l_2005_, 0);
lean_inc(v_a_2021_);
lean_dec_ref_known(v_l_2005_, 1);
v___x_2022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2022_, 0, v_a_2021_);
return v___x_2022_;
}
default: 
{
uint8_t v_mvars_2023_; 
v_mvars_2023_ = lean_ctor_get_uint8(v_a_2006_, sizeof(void*)*1);
if (v_mvars_2023_ == 0)
{
lean_object* v___x_2024_; 
lean_dec_ref_known(v_l_2005_, 1);
v___x_2024_ = ((lean_object*)(l_Lean_Level_PP_toResult___closed__3));
return v___x_2024_;
}
else
{
lean_object* v_a_2025_; lean_object* v_lIndex_x3f_2026_; lean_object* v___x_2027_; 
v_a_2025_ = lean_ctor_get(v_l_2005_, 0);
lean_inc_n(v_a_2025_, 2);
lean_dec_ref_known(v_l_2005_, 1);
v_lIndex_x3f_2026_ = lean_ctor_get(v_a_2006_, 0);
lean_inc_ref(v_lIndex_x3f_2026_);
v___x_2027_ = lean_apply_1(v_lIndex_x3f_2026_, v_a_2025_);
if (lean_obj_tag(v___x_2027_) == 1)
{
lean_object* v_val_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2039_; 
lean_dec(v_a_2025_);
v_val_2028_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2030_ = v___x_2027_;
v_isShared_2031_ = v_isSharedCheck_2039_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_val_2028_);
lean_dec(v___x_2027_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2039_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2037_; 
v___x_2032_ = ((lean_object*)(l_Lean_Level_PP_toResult___closed__5));
v___x_2033_ = lean_unsigned_to_nat(1u);
v___x_2034_ = lean_nat_add(v_val_2028_, v___x_2033_);
lean_dec(v_val_2028_);
v___x_2035_ = l_Lean_Name_num___override(v___x_2032_, v___x_2034_);
if (v_isShared_2031_ == 0)
{
lean_ctor_set_tag(v___x_2030_, 0);
lean_ctor_set(v___x_2030_, 0, v___x_2035_);
v___x_2037_ = v___x_2030_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2035_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
else
{
lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; 
lean_dec(v___x_2027_);
v___x_2040_ = ((lean_object*)(l_Lean_Level_PP_toResult___closed__7));
v___x_2041_ = ((lean_object*)(l_Lean_Level_PP_toResult___closed__9));
v___x_2042_ = l_Lean_Name_replacePrefix(v_a_2025_, v___x_2040_, v___x_2041_);
v___x_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
return v___x_2043_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_toResult___boxed(lean_object* v_l_2044_, lean_object* v_a_2045_){
_start:
{
lean_object* v_res_2046_; 
v_res_2046_ = l_Lean_Level_PP_toResult(v_l_2044_, v_a_2045_);
lean_dec_ref(v_a_2045_);
return v_res_2046_;
}
}
static lean_object* _init_l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1(void){
_start:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; 
v___x_2048_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0));
v___x_2049_ = lean_string_length(v___x_2048_);
return v___x_2049_;
}
}
static lean_object* _init_l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2(void){
_start:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___x_2050_ = lean_obj_once(&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1, &l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1_once, _init_l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__1);
v___x_2051_ = lean_nat_to_int(v___x_2050_);
return v___x_2051_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(lean_object* v_x_2056_, uint8_t v_x_2057_){
_start:
{
if (v_x_2057_ == 0)
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; uint8_t v___x_2064_; lean_object* v___x_2065_; 
v___x_2058_ = lean_obj_once(&l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2, &l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2_once, _init_l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__2);
v___x_2059_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__3));
v___x_2060_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
lean_ctor_set(v___x_2060_, 1, v_x_2056_);
v___x_2061_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__4));
v___x_2062_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2060_);
lean_ctor_set(v___x_2062_, 1, v___x_2061_);
v___x_2063_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2058_);
lean_ctor_set(v___x_2063_, 1, v___x_2062_);
v___x_2064_ = 0;
v___x_2065_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2065_, 0, v___x_2063_);
lean_ctor_set_uint8(v___x_2065_, sizeof(void*)*1, v___x_2064_);
return v___x_2065_;
}
else
{
return v_x_2056_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___boxed(lean_object* v_x_2066_, lean_object* v_x_2067_){
_start:
{
uint8_t v_x_57__boxed_2068_; lean_object* v_res_2069_; 
v_x_57__boxed_2068_ = lean_unbox(v_x_2067_);
v_res_2069_ = l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(v_x_2066_, v_x_57__boxed_2068_);
return v_res_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_format(lean_object* v_x_2079_, uint8_t v_x_2080_){
_start:
{
switch(lean_obj_tag(v_x_2079_))
{
case 0:
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2090_; 
v_a_2081_ = lean_ctor_get(v_x_2079_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v_x_2079_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2083_ = v_x_2079_;
v_isShared_2084_ = v_isSharedCheck_2090_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v_x_2079_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2090_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
uint8_t v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2088_; 
v___x_2085_ = 1;
v___x_2086_ = l_Lean_Name_toString(v_a_2081_, v___x_2085_);
if (v_isShared_2084_ == 0)
{
lean_ctor_set_tag(v___x_2083_, 3);
lean_ctor_set(v___x_2083_, 0, v___x_2086_);
v___x_2088_ = v___x_2083_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v___x_2086_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
case 1:
{
lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2099_; 
v_a_2091_ = lean_ctor_get(v_x_2079_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v_x_2079_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2093_ = v_x_2079_;
v_isShared_2094_ = v_isSharedCheck_2099_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v_x_2079_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2099_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2095_; lean_object* v___x_2097_; 
v___x_2095_ = l_Nat_reprFast(v_a_2091_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set_tag(v___x_2093_, 3);
lean_ctor_set(v___x_2093_, 0, v___x_2095_);
v___x_2097_ = v___x_2093_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v___x_2095_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
case 2:
{
lean_object* v_a_2100_; lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2120_; 
v_a_2100_ = lean_ctor_get(v_x_2079_, 0);
v_a_2101_ = lean_ctor_get(v_x_2079_, 1);
v_isSharedCheck_2120_ = !lean_is_exclusive(v_x_2079_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2103_ = v_x_2079_;
v_isShared_2104_ = v_isSharedCheck_2120_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_inc(v_a_2100_);
lean_dec(v_x_2079_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2120_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v_zero_2105_; uint8_t v_isZero_2106_; 
v_zero_2105_ = lean_unsigned_to_nat(0u);
v_isZero_2106_ = lean_nat_dec_eq(v_a_2101_, v_zero_2105_);
if (v_isZero_2106_ == 1)
{
lean_del_object(v___x_2103_);
lean_dec(v_a_2101_);
v_x_2079_ = v_a_2100_;
goto _start;
}
else
{
lean_object* v_one_2108_; lean_object* v_n_2109_; lean_object* v_f_x27_2110_; lean_object* v___x_2111_; lean_object* v___x_2113_; 
v_one_2108_ = lean_unsigned_to_nat(1u);
v_n_2109_ = lean_nat_sub(v_a_2101_, v_one_2108_);
lean_dec(v_a_2101_);
v_f_x27_2110_ = l_Lean_Level_PP_Result_format(v_a_2100_, v_isZero_2106_);
v___x_2111_ = ((lean_object*)(l_Lean_Level_PP_Result_format___closed__1));
if (v_isShared_2104_ == 0)
{
lean_ctor_set_tag(v___x_2103_, 5);
lean_ctor_set(v___x_2103_, 1, v___x_2111_);
lean_ctor_set(v___x_2103_, 0, v_f_x27_2110_);
v___x_2113_ = v___x_2103_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_f_x27_2110_);
lean_ctor_set(v_reuseFailAlloc_2119_, 1, v___x_2111_);
v___x_2113_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2114_ = lean_nat_add(v_n_2109_, v_one_2108_);
lean_dec(v_n_2109_);
v___x_2115_ = l_Nat_reprFast(v___x_2114_);
v___x_2116_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2115_);
v___x_2117_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2113_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___x_2118_ = l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(v___x_2117_, v_x_2080_);
return v___x_2118_;
}
}
}
}
case 3:
{
lean_object* v_a_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; uint8_t v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
v_a_2121_ = lean_ctor_get(v_x_2079_, 0);
lean_inc(v_a_2121_);
lean_dec_ref_known(v_x_2079_, 1);
v___x_2122_ = ((lean_object*)(l_Lean_Level_PP_Result_format___closed__3));
v___x_2123_ = l___private_Lean_Level_0__Lean_Level_PP_Result_formatLst(v_a_2121_);
v___x_2124_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2122_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = 0;
v___x_2126_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2126_, 0, v___x_2124_);
lean_ctor_set_uint8(v___x_2126_, sizeof(void*)*1, v___x_2125_);
v___x_2127_ = l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(v___x_2126_, v_x_2080_);
return v___x_2127_;
}
default: 
{
lean_object* v_a_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; uint8_t v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v_a_2128_ = lean_ctor_get(v_x_2079_, 0);
lean_inc(v_a_2128_);
lean_dec_ref_known(v_x_2079_, 1);
v___x_2129_ = ((lean_object*)(l_Lean_Level_PP_Result_format___closed__5));
v___x_2130_ = l___private_Lean_Level_0__Lean_Level_PP_Result_formatLst(v_a_2128_);
v___x_2131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2129_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = 0;
v___x_2133_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2133_, 0, v___x_2131_);
lean_ctor_set_uint8(v___x_2133_, sizeof(void*)*1, v___x_2132_);
v___x_2134_ = l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse(v___x_2133_, v_x_2080_);
return v___x_2134_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_PP_Result_formatLst(lean_object* v_x_2135_){
_start:
{
if (lean_obj_tag(v_x_2135_) == 0)
{
lean_object* v___x_2136_; 
v___x_2136_ = lean_box(0);
return v___x_2136_;
}
else
{
lean_object* v_head_2137_; lean_object* v_tail_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2150_; 
v_head_2137_ = lean_ctor_get(v_x_2135_, 0);
v_tail_2138_ = lean_ctor_get(v_x_2135_, 1);
v_isSharedCheck_2150_ = !lean_is_exclusive(v_x_2135_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2140_ = v_x_2135_;
v_isShared_2141_ = v_isSharedCheck_2150_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_tail_2138_);
lean_inc(v_head_2137_);
lean_dec(v_x_2135_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2150_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2142_; uint8_t v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2146_; 
v___x_2142_ = lean_box(1);
v___x_2143_ = 0;
v___x_2144_ = l_Lean_Level_PP_Result_format(v_head_2137_, v___x_2143_);
if (v_isShared_2141_ == 0)
{
lean_ctor_set_tag(v___x_2140_, 5);
lean_ctor_set(v___x_2140_, 1, v___x_2144_);
lean_ctor_set(v___x_2140_, 0, v___x_2142_);
v___x_2146_ = v___x_2140_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v___x_2142_);
lean_ctor_set(v_reuseFailAlloc_2149_, 1, v___x_2144_);
v___x_2146_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___x_2147_ = l___private_Lean_Level_0__Lean_Level_PP_Result_formatLst(v_tail_2138_);
v___x_2148_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2146_);
lean_ctor_set(v___x_2148_, 1, v___x_2147_);
return v___x_2148_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_format___boxed(lean_object* v_x_2151_, lean_object* v_x_2152_){
_start:
{
uint8_t v_x_270__boxed_2153_; lean_object* v_res_2154_; 
v_x_270__boxed_2153_ = lean_unbox(v_x_2152_);
v_res_2154_ = l_Lean_Level_PP_Result_format(v_x_2151_, v_x_270__boxed_2153_);
return v_res_2154_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__0(void){
_start:
{
uint8_t v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2155_ = 0;
v___x_2156_ = lean_box(0);
v___x_2157_ = l_Lean_SourceInfo_fromRef(v___x_2156_, v___x_2155_);
return v___x_2157_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__6(void){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2167_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_PP_parenIfFalse___closed__0));
v___x_2168_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_2169_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2168_);
lean_ctor_set(v___x_2169_, 1, v___x_2167_);
return v___x_2169_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__7(void){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2170_ = ((lean_object*)(l_Lean_instReprData___lam__0___closed__0));
v___x_2171_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_2172_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2171_);
lean_ctor_set(v___x_2172_, 1, v___x_2170_);
return v___x_2172_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__12(void){
_start:
{
lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2185_ = ((lean_object*)(l_Lean_Level_PP_Result_format___closed__2));
v___x_2186_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_2187_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
lean_ctor_set(v___x_2187_, 1, v___x_2185_);
return v___x_2187_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__15(void){
_start:
{
lean_object* v___x_2191_; 
v___x_2191_ = l_Array_mkArray0___redArg();
return v___x_2191_;
}
}
static lean_object* _init_l_Lean_Level_PP_Result_quote___closed__17(void){
_start:
{
lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2197_ = ((lean_object*)(l_Lean_Level_PP_Result_format___closed__4));
v___x_2198_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_2199_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2198_);
lean_ctor_set(v___x_2199_, 1, v___x_2197_);
return v___x_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_quote(lean_object* v_r_2200_, lean_object* v_prec_2201_){
_start:
{
lean_object* v_s_2203_; 
switch(lean_obj_tag(v_r_2200_))
{
case 0:
{
lean_object* v_a_2211_; lean_object* v___x_2212_; 
v_a_2211_ = lean_ctor_get(v_r_2200_, 0);
lean_inc(v_a_2211_);
lean_dec_ref_known(v_r_2200_, 1);
v___x_2212_ = l_Lean_mkIdent(v_a_2211_);
return v___x_2212_;
}
case 1:
{
lean_object* v_a_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v_a_2213_ = lean_ctor_get(v_r_2200_, 0);
lean_inc(v_a_2213_);
lean_dec_ref_known(v_r_2200_, 1);
v___x_2214_ = l_Nat_reprFast(v_a_2213_);
v___x_2215_ = lean_box(2);
v___x_2216_ = l_Lean_Syntax_mkNumLit(v___x_2214_, v___x_2215_);
return v___x_2216_;
}
case 2:
{
lean_object* v_a_2217_; lean_object* v_a_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2241_; 
v_a_2217_ = lean_ctor_get(v_r_2200_, 0);
v_a_2218_ = lean_ctor_get(v_r_2200_, 1);
v_isSharedCheck_2241_ = !lean_is_exclusive(v_r_2200_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2220_ = v_r_2200_;
v_isShared_2221_ = v_isSharedCheck_2241_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_a_2218_);
lean_inc(v_a_2217_);
lean_dec(v_r_2200_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2241_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v_zero_2222_; uint8_t v_isZero_2223_; 
v_zero_2222_ = lean_unsigned_to_nat(0u);
v_isZero_2223_ = lean_nat_dec_eq(v_a_2218_, v_zero_2222_);
if (v_isZero_2223_ == 1)
{
lean_del_object(v___x_2220_);
lean_dec(v_a_2218_);
v_r_2200_ = v_a_2217_;
goto _start;
}
else
{
lean_object* v_one_2225_; lean_object* v_n_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2234_; 
v_one_2225_ = lean_unsigned_to_nat(1u);
v_n_2226_ = lean_nat_sub(v_a_2218_, v_one_2225_);
lean_dec(v_a_2218_);
v___x_2227_ = lean_box(0);
v___x_2228_ = l_Lean_SourceInfo_fromRef(v___x_2227_, v_isZero_2223_);
v___x_2229_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__9));
v___x_2230_ = lean_unsigned_to_nat(65u);
v___x_2231_ = l_Lean_Level_PP_Result_quote(v_a_2217_, v___x_2230_);
v___x_2232_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__10));
lean_inc(v___x_2228_);
if (v_isShared_2221_ == 0)
{
lean_ctor_set(v___x_2220_, 1, v___x_2232_);
lean_ctor_set(v___x_2220_, 0, v___x_2228_);
v___x_2234_ = v___x_2220_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v___x_2228_);
lean_ctor_set(v_reuseFailAlloc_2240_, 1, v___x_2232_);
v___x_2234_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2235_ = lean_nat_add(v_n_2226_, v_one_2225_);
lean_dec(v_n_2226_);
v___x_2236_ = l_Nat_reprFast(v___x_2235_);
v___x_2237_ = lean_box(2);
v___x_2238_ = l_Lean_Syntax_mkNumLit(v___x_2236_, v___x_2237_);
v___x_2239_ = l_Lean_Syntax_node3(v___x_2228_, v___x_2229_, v___x_2231_, v___x_2234_, v___x_2238_);
v_s_2203_ = v___x_2239_;
goto v___jp_2202_;
}
}
}
}
case 3:
{
lean_object* v_a_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; size_t v_sz_2249_; size_t v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v_a_2242_ = lean_ctor_get(v_r_2200_, 0);
lean_inc(v_a_2242_);
lean_dec_ref_known(v_r_2200_, 1);
v___x_2243_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_2244_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__11));
v___x_2245_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__12, &l_Lean_Level_PP_Result_quote___closed__12_once, _init_l_Lean_Level_PP_Result_quote___closed__12);
v___x_2246_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__14));
v___x_2247_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__15, &l_Lean_Level_PP_Result_quote___closed__15_once, _init_l_Lean_Level_PP_Result_quote___closed__15);
v___x_2248_ = lean_array_mk(v_a_2242_);
v_sz_2249_ = lean_array_size(v___x_2248_);
v___x_2250_ = ((size_t)0ULL);
v___x_2251_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0(v_sz_2249_, v___x_2250_, v___x_2248_);
v___x_2252_ = l_Array_append___redArg(v___x_2247_, v___x_2251_);
lean_dec_ref(v___x_2251_);
v___x_2253_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2253_, 0, v___x_2243_);
lean_ctor_set(v___x_2253_, 1, v___x_2246_);
lean_ctor_set(v___x_2253_, 2, v___x_2252_);
v___x_2254_ = l_Lean_Syntax_node2(v___x_2243_, v___x_2244_, v___x_2245_, v___x_2253_);
v_s_2203_ = v___x_2254_;
goto v___jp_2202_;
}
default: 
{
lean_object* v_a_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; size_t v_sz_2262_; size_t v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v_a_2255_ = lean_ctor_get(v_r_2200_, 0);
lean_inc(v_a_2255_);
lean_dec_ref_known(v_r_2200_, 1);
v___x_2256_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_2257_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__16));
v___x_2258_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__17, &l_Lean_Level_PP_Result_quote___closed__17_once, _init_l_Lean_Level_PP_Result_quote___closed__17);
v___x_2259_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__14));
v___x_2260_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__15, &l_Lean_Level_PP_Result_quote___closed__15_once, _init_l_Lean_Level_PP_Result_quote___closed__15);
v___x_2261_ = lean_array_mk(v_a_2255_);
v_sz_2262_ = lean_array_size(v___x_2261_);
v___x_2263_ = ((size_t)0ULL);
v___x_2264_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0(v_sz_2262_, v___x_2263_, v___x_2261_);
v___x_2265_ = l_Array_append___redArg(v___x_2260_, v___x_2264_);
lean_dec_ref(v___x_2264_);
v___x_2266_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2256_);
lean_ctor_set(v___x_2266_, 1, v___x_2259_);
lean_ctor_set(v___x_2266_, 2, v___x_2265_);
v___x_2267_ = l_Lean_Syntax_node2(v___x_2256_, v___x_2257_, v___x_2258_, v___x_2266_);
v_s_2203_ = v___x_2267_;
goto v___jp_2202_;
}
}
v___jp_2202_:
{
lean_object* v___x_2204_; uint8_t v___x_2205_; 
v___x_2204_ = lean_unsigned_to_nat(0u);
v___x_2205_ = lean_nat_dec_lt(v___x_2204_, v_prec_2201_);
if (v___x_2205_ == 0)
{
return v_s_2203_;
}
else
{
lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2206_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__0, &l_Lean_Level_PP_Result_quote___closed__0_once, _init_l_Lean_Level_PP_Result_quote___closed__0);
v___x_2207_ = ((lean_object*)(l_Lean_Level_PP_Result_quote___closed__5));
v___x_2208_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__6, &l_Lean_Level_PP_Result_quote___closed__6_once, _init_l_Lean_Level_PP_Result_quote___closed__6);
v___x_2209_ = lean_obj_once(&l_Lean_Level_PP_Result_quote___closed__7, &l_Lean_Level_PP_Result_quote___closed__7_once, _init_l_Lean_Level_PP_Result_quote___closed__7);
v___x_2210_ = l_Lean_Syntax_node3(v___x_2206_, v___x_2207_, v___x_2208_, v_s_2203_, v___x_2209_);
return v___x_2210_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0(size_t v_sz_2268_, size_t v_i_2269_, lean_object* v_bs_2270_){
_start:
{
uint8_t v___x_2271_; 
v___x_2271_ = lean_usize_dec_lt(v_i_2269_, v_sz_2268_);
if (v___x_2271_ == 0)
{
return v_bs_2270_;
}
else
{
lean_object* v_v_2272_; lean_object* v___x_2273_; lean_object* v_bs_x27_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; size_t v___x_2277_; size_t v___x_2278_; lean_object* v___x_2279_; 
v_v_2272_ = lean_array_uget(v_bs_2270_, v_i_2269_);
v___x_2273_ = lean_unsigned_to_nat(0u);
v_bs_x27_2274_ = lean_array_uset(v_bs_2270_, v_i_2269_, v___x_2273_);
v___x_2275_ = lean_unsigned_to_nat(1024u);
v___x_2276_ = l_Lean_Level_PP_Result_quote(v_v_2272_, v___x_2275_);
v___x_2277_ = ((size_t)1ULL);
v___x_2278_ = lean_usize_add(v_i_2269_, v___x_2277_);
v___x_2279_ = lean_array_uset(v_bs_x27_2274_, v_i_2269_, v___x_2276_);
v_i_2269_ = v___x_2278_;
v_bs_2270_ = v___x_2279_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0___boxed(lean_object* v_sz_2281_, lean_object* v_i_2282_, lean_object* v_bs_2283_){
_start:
{
size_t v_sz_boxed_2284_; size_t v_i_boxed_2285_; lean_object* v_res_2286_; 
v_sz_boxed_2284_ = lean_unbox_usize(v_sz_2281_);
lean_dec(v_sz_2281_);
v_i_boxed_2285_ = lean_unbox_usize(v_i_2282_);
lean_dec(v_i_2282_);
v_res_2286_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Level_PP_Result_quote_spec__0(v_sz_boxed_2284_, v_i_boxed_2285_, v_bs_2283_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_PP_Result_quote___boxed(lean_object* v_r_2287_, lean_object* v_prec_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l_Lean_Level_PP_Result_quote(v_r_2287_, v_prec_2288_);
lean_dec(v_prec_2288_);
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_format(lean_object* v_u_2290_, uint8_t v_mvars_2291_, lean_object* v_lIndex_x3f_2292_){
_start:
{
lean_object* v___x_2293_; lean_object* v___x_2294_; uint8_t v___x_2295_; lean_object* v___x_2296_; 
v___x_2293_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2293_, 0, v_lIndex_x3f_2292_);
lean_ctor_set_uint8(v___x_2293_, sizeof(void*)*1, v_mvars_2291_);
v___x_2294_ = l_Lean_Level_PP_toResult(v_u_2290_, v___x_2293_);
lean_dec_ref_known(v___x_2293_, 1);
v___x_2295_ = 1;
v___x_2296_ = l_Lean_Level_PP_Result_format(v___x_2294_, v___x_2295_);
return v___x_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_format___boxed(lean_object* v_u_2297_, lean_object* v_mvars_2298_, lean_object* v_lIndex_x3f_2299_){
_start:
{
uint8_t v_mvars_boxed_2300_; lean_object* v_res_2301_; 
v_mvars_boxed_2300_ = lean_unbox(v_mvars_2298_);
v_res_2301_ = l_Lean_Level_format(v_u_2297_, v_mvars_boxed_2300_, v_lIndex_x3f_2299_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__0(lean_object* v_x_2302_){
_start:
{
lean_object* v___x_2303_; 
v___x_2303_ = lean_box(0);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__0___boxed(lean_object* v_x_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l_Lean_Level_instToFormat___lam__0(v_x_2304_);
lean_dec(v_x_2304_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instToFormat___lam__1(lean_object* v___f_2306_, lean_object* v_u_2307_){
_start:
{
uint8_t v___x_2308_; lean_object* v___x_2309_; 
v___x_2308_ = 1;
v___x_2309_ = l_Lean_Level_format(v_u_2307_, v___x_2308_, v___f_2306_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instToString___lam__1(lean_object* v___f_2314_, lean_object* v_u_2315_){
_start:
{
uint8_t v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2316_ = 1;
v___x_2317_ = l_Lean_Level_format(v_u_2315_, v___x_2316_, v___f_2314_);
v___x_2318_ = l_Std_Format_defWidth;
v___x_2319_ = lean_unsigned_to_nat(0u);
v___x_2320_ = l_Std_Format_pretty(v___x_2317_, v___x_2318_, v___x_2319_, v___x_2319_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_quote(lean_object* v_u_2324_, lean_object* v_prec_2325_, uint8_t v_mvars_2326_, lean_object* v_lIndex_x3f_2327_){
_start:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2328_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2328_, 0, v_lIndex_x3f_2327_);
lean_ctor_set_uint8(v___x_2328_, sizeof(void*)*1, v_mvars_2326_);
v___x_2329_ = l_Lean_Level_PP_toResult(v_u_2324_, v___x_2328_);
lean_dec_ref_known(v___x_2328_, 1);
v___x_2330_ = l_Lean_Level_PP_Result_quote(v___x_2329_, v_prec_2325_);
return v___x_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_quote___boxed(lean_object* v_u_2331_, lean_object* v_prec_2332_, lean_object* v_mvars_2333_, lean_object* v_lIndex_x3f_2334_){
_start:
{
uint8_t v_mvars_boxed_2335_; lean_object* v_res_2336_; 
v_mvars_boxed_2335_ = lean_unbox(v_mvars_2333_);
v_res_2336_ = l_Lean_Level_quote(v_u_2331_, v_prec_2332_, v_mvars_boxed_2335_, v_lIndex_x3f_2334_);
lean_dec(v_prec_2332_);
return v_res_2336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instQuoteMkStr1___lam__1(lean_object* v___f_2337_, lean_object* v_u_2338_){
_start:
{
lean_object* v___x_2339_; uint8_t v___x_2340_; lean_object* v___x_2341_; 
v___x_2339_ = lean_unsigned_to_nat(0u);
v___x_2340_ = 1;
v___x_2341_ = l_Lean_Level_quote(v_u_2338_, v___x_2339_, v___x_2340_, v___f_2337_);
return v___x_2341_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(lean_object* v_u_2345_, lean_object* v_v_2346_){
_start:
{
uint8_t v___y_2348_; uint8_t v___x_2354_; 
v___x_2354_ = l_Lean_Level_isExplicit(v_v_2346_);
if (v___x_2354_ == 0)
{
v___y_2348_ = v___x_2354_;
goto v___jp_2347_;
}
else
{
lean_object* v___x_2355_; lean_object* v___x_2356_; uint8_t v___x_2357_; 
v___x_2355_ = l_Lean_Level_getOffset(v_v_2346_);
v___x_2356_ = l_Lean_Level_getOffset(v_u_2345_);
v___x_2357_ = lean_nat_dec_le(v___x_2355_, v___x_2356_);
lean_dec(v___x_2356_);
lean_dec(v___x_2355_);
v___y_2348_ = v___x_2357_;
goto v___jp_2347_;
}
v___jp_2347_:
{
uint8_t v___x_2349_; 
v___x_2349_ = 1;
if (v___y_2348_ == 0)
{
if (lean_obj_tag(v_u_2345_) == 2)
{
lean_object* v_a_2350_; lean_object* v_a_2351_; uint8_t v___x_2352_; 
v_a_2350_ = lean_ctor_get(v_u_2345_, 0);
v_a_2351_ = lean_ctor_get(v_u_2345_, 1);
v___x_2352_ = lean_level_eq(v_v_2346_, v_a_2350_);
if (v___x_2352_ == 0)
{
uint8_t v___x_2353_; 
v___x_2353_ = lean_level_eq(v_v_2346_, v_a_2351_);
return v___x_2353_;
}
else
{
return v___x_2349_;
}
}
else
{
return v___y_2348_;
}
}
else
{
return v___x_2349_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0___boxed(lean_object* v_u_2358_, lean_object* v_v_2359_){
_start:
{
uint8_t v_res_2360_; lean_object* v_r_2361_; 
v_res_2360_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_u_2358_, v_v_2359_);
lean_dec(v_v_2359_);
lean_dec(v_u_2358_);
v_r_2361_ = lean_box(v_res_2360_);
return v_r_2361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore(lean_object* v_u_2362_, lean_object* v_v_2363_, lean_object* v_elseK_2364_){
_start:
{
uint8_t v___x_2365_; 
v___x_2365_ = lean_level_eq(v_u_2362_, v_v_2363_);
if (v___x_2365_ == 0)
{
uint8_t v___x_2366_; 
v___x_2366_ = l_Lean_Level_isZero(v_u_2362_);
if (v___x_2366_ == 0)
{
uint8_t v___x_2367_; 
v___x_2367_ = l_Lean_Level_isZero(v_v_2363_);
if (v___x_2367_ == 0)
{
uint8_t v___x_2368_; 
v___x_2368_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_u_2362_, v_v_2363_);
if (v___x_2368_ == 0)
{
uint8_t v___x_2369_; 
v___x_2369_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_v_2363_, v_u_2362_);
if (v___x_2369_ == 0)
{
lean_object* v___x_2370_; lean_object* v___x_2371_; uint8_t v___x_2372_; 
v___x_2370_ = l_Lean_Level_getLevelOffset(v_u_2362_);
v___x_2371_ = l_Lean_Level_getLevelOffset(v_v_2363_);
v___x_2372_ = lean_level_eq(v___x_2370_, v___x_2371_);
lean_dec(v___x_2371_);
lean_dec(v___x_2370_);
if (v___x_2372_ == 0)
{
lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2373_ = lean_box(0);
v___x_2374_ = lean_apply_1(v_elseK_2364_, v___x_2373_);
return v___x_2374_;
}
else
{
lean_object* v___x_2375_; lean_object* v___x_2376_; uint8_t v___x_2377_; 
lean_dec_ref(v_elseK_2364_);
v___x_2375_ = l_Lean_Level_getOffset(v_v_2363_);
v___x_2376_ = l_Lean_Level_getOffset(v_u_2362_);
v___x_2377_ = lean_nat_dec_le(v___x_2375_, v___x_2376_);
lean_dec(v___x_2376_);
lean_dec(v___x_2375_);
if (v___x_2377_ == 0)
{
lean_inc(v_v_2363_);
return v_v_2363_;
}
else
{
lean_inc(v_u_2362_);
return v_u_2362_;
}
}
}
else
{
lean_dec_ref(v_elseK_2364_);
lean_inc(v_v_2363_);
return v_v_2363_;
}
}
else
{
lean_dec_ref(v_elseK_2364_);
lean_inc(v_u_2362_);
return v_u_2362_;
}
}
else
{
lean_dec_ref(v_elseK_2364_);
lean_inc(v_u_2362_);
return v_u_2362_;
}
}
else
{
lean_dec_ref(v_elseK_2364_);
lean_inc(v_v_2363_);
return v_v_2363_;
}
}
else
{
lean_dec_ref(v_elseK_2364_);
lean_inc(v_u_2362_);
return v_u_2362_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelMaxCore___boxed(lean_object* v_u_2378_, lean_object* v_v_2379_, lean_object* v_elseK_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore(v_u_2378_, v_v_2379_, v_elseK_2380_);
lean_dec(v_v_2379_);
lean_dec(v_u_2378_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelMax_x27(lean_object* v_u_2382_, lean_object* v_v_2383_){
_start:
{
uint8_t v___x_2384_; 
v___x_2384_ = lean_level_eq(v_u_2382_, v_v_2383_);
if (v___x_2384_ == 0)
{
uint8_t v___x_2385_; 
v___x_2385_ = l_Lean_Level_isZero(v_u_2382_);
if (v___x_2385_ == 0)
{
uint8_t v___x_2386_; 
v___x_2386_ = l_Lean_Level_isZero(v_v_2383_);
if (v___x_2386_ == 0)
{
uint8_t v___x_2387_; 
v___x_2387_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_u_2382_, v_v_2383_);
if (v___x_2387_ == 0)
{
uint8_t v___x_2388_; 
v___x_2388_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_v_2383_, v_u_2382_);
if (v___x_2388_ == 0)
{
lean_object* v___x_2389_; lean_object* v___x_2390_; uint8_t v___x_2391_; 
v___x_2389_ = l_Lean_Level_getLevelOffset(v_u_2382_);
v___x_2390_ = l_Lean_Level_getLevelOffset(v_v_2383_);
v___x_2391_ = lean_level_eq(v___x_2389_, v___x_2390_);
lean_dec(v___x_2390_);
lean_dec(v___x_2389_);
if (v___x_2391_ == 0)
{
lean_object* v___x_2392_; 
v___x_2392_ = l_Lean_Level_max___override(v_u_2382_, v_v_2383_);
return v___x_2392_;
}
else
{
lean_object* v___x_2393_; lean_object* v___x_2394_; uint8_t v___x_2395_; 
v___x_2393_ = l_Lean_Level_getOffset(v_v_2383_);
v___x_2394_ = l_Lean_Level_getOffset(v_u_2382_);
v___x_2395_ = lean_nat_dec_le(v___x_2393_, v___x_2394_);
lean_dec(v___x_2394_);
lean_dec(v___x_2393_);
if (v___x_2395_ == 0)
{
lean_dec(v_u_2382_);
return v_v_2383_;
}
else
{
lean_dec(v_v_2383_);
return v_u_2382_;
}
}
}
else
{
lean_dec(v_u_2382_);
return v_v_2383_;
}
}
else
{
lean_dec(v_v_2383_);
return v_u_2382_;
}
}
else
{
lean_dec(v_v_2383_);
return v_u_2382_;
}
}
else
{
lean_dec(v_u_2382_);
return v_v_2383_;
}
}
else
{
lean_dec(v_v_2383_);
return v_u_2382_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_simpLevelMax_x27(lean_object* v_u_2396_, lean_object* v_v_2397_, lean_object* v_d_2398_){
_start:
{
uint8_t v___x_2399_; 
v___x_2399_ = lean_level_eq(v_u_2396_, v_v_2397_);
if (v___x_2399_ == 0)
{
uint8_t v___x_2400_; 
v___x_2400_ = l_Lean_Level_isZero(v_u_2396_);
if (v___x_2400_ == 0)
{
uint8_t v___x_2401_; 
v___x_2401_ = l_Lean_Level_isZero(v_v_2397_);
if (v___x_2401_ == 0)
{
uint8_t v___x_2402_; 
v___x_2402_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_u_2396_, v_v_2397_);
if (v___x_2402_ == 0)
{
uint8_t v___x_2403_; 
v___x_2403_ = l___private_Lean_Level_0__Lean_mkLevelMaxCore___lam__0(v_v_2397_, v_u_2396_);
if (v___x_2403_ == 0)
{
lean_object* v___x_2404_; lean_object* v___x_2405_; uint8_t v___x_2406_; 
v___x_2404_ = l_Lean_Level_getLevelOffset(v_u_2396_);
v___x_2405_ = l_Lean_Level_getLevelOffset(v_v_2397_);
v___x_2406_ = lean_level_eq(v___x_2404_, v___x_2405_);
lean_dec(v___x_2405_);
lean_dec(v___x_2404_);
if (v___x_2406_ == 0)
{
lean_inc(v_d_2398_);
return v_d_2398_;
}
else
{
lean_object* v___x_2407_; lean_object* v___x_2408_; uint8_t v___x_2409_; 
v___x_2407_ = l_Lean_Level_getOffset(v_v_2397_);
v___x_2408_ = l_Lean_Level_getOffset(v_u_2396_);
v___x_2409_ = lean_nat_dec_le(v___x_2407_, v___x_2408_);
lean_dec(v___x_2408_);
lean_dec(v___x_2407_);
if (v___x_2409_ == 0)
{
lean_inc(v_v_2397_);
return v_v_2397_;
}
else
{
lean_inc(v_u_2396_);
return v_u_2396_;
}
}
}
else
{
lean_inc(v_v_2397_);
return v_v_2397_;
}
}
else
{
lean_inc(v_u_2396_);
return v_u_2396_;
}
}
else
{
lean_inc(v_u_2396_);
return v_u_2396_;
}
}
else
{
lean_inc(v_v_2397_);
return v_v_2397_;
}
}
else
{
lean_inc(v_u_2396_);
return v_u_2396_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_simpLevelMax_x27___boxed(lean_object* v_u_2410_, lean_object* v_v_2411_, lean_object* v_d_2412_){
_start:
{
lean_object* v_res_2413_; 
v_res_2413_ = l_Lean_simpLevelMax_x27(v_u_2410_, v_v_2411_, v_d_2412_);
lean_dec(v_d_2412_);
lean_dec(v_v_2411_);
lean_dec(v_u_2410_);
return v_res_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_mkLevelIMaxCore(lean_object* v_u_2414_, lean_object* v_v_2415_, lean_object* v_elseK_2416_){
_start:
{
uint8_t v___x_2417_; 
v___x_2417_ = l_Lean_Level_isNeverZero(v_v_2415_);
if (v___x_2417_ == 0)
{
uint8_t v___x_2418_; 
v___x_2418_ = l_Lean_Level_isZero(v_v_2415_);
if (v___x_2418_ == 0)
{
uint8_t v___x_2419_; 
v___x_2419_ = l_Lean_Level_isZero(v_u_2414_);
if (v___x_2419_ == 0)
{
uint8_t v___x_2420_; 
v___x_2420_ = lean_level_eq(v_u_2414_, v_v_2415_);
lean_dec(v_v_2415_);
if (v___x_2420_ == 0)
{
lean_object* v___x_2421_; lean_object* v___x_2422_; 
lean_dec(v_u_2414_);
v___x_2421_ = lean_box(0);
v___x_2422_ = lean_apply_1(v_elseK_2416_, v___x_2421_);
return v___x_2422_;
}
else
{
lean_dec_ref(v_elseK_2416_);
return v_u_2414_;
}
}
else
{
lean_dec_ref(v_elseK_2416_);
lean_dec(v_u_2414_);
return v_v_2415_;
}
}
else
{
lean_dec_ref(v_elseK_2416_);
lean_dec(v_u_2414_);
return v_v_2415_;
}
}
else
{
lean_object* v___x_2423_; 
lean_dec_ref(v_elseK_2416_);
v___x_2423_ = l_Lean_mkLevelMax_x27(v_u_2414_, v_v_2415_);
return v___x_2423_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkLevelIMax_x27(lean_object* v_u_2424_, lean_object* v_v_2425_){
_start:
{
uint8_t v___x_2426_; 
v___x_2426_ = l_Lean_Level_isNeverZero(v_v_2425_);
if (v___x_2426_ == 0)
{
uint8_t v___x_2427_; 
v___x_2427_ = l_Lean_Level_isZero(v_v_2425_);
if (v___x_2427_ == 0)
{
uint8_t v___x_2428_; 
v___x_2428_ = l_Lean_Level_isZero(v_u_2424_);
if (v___x_2428_ == 0)
{
uint8_t v___x_2429_; 
v___x_2429_ = lean_level_eq(v_u_2424_, v_v_2425_);
if (v___x_2429_ == 0)
{
lean_object* v___x_2430_; 
v___x_2430_ = l_Lean_Level_imax___override(v_u_2424_, v_v_2425_);
return v___x_2430_;
}
else
{
lean_dec(v_v_2425_);
return v_u_2424_;
}
}
else
{
lean_dec(v_u_2424_);
return v_v_2425_;
}
}
else
{
lean_dec(v_u_2424_);
return v_v_2425_;
}
}
else
{
lean_object* v___x_2431_; 
v___x_2431_ = l_Lean_mkLevelMax_x27(v_u_2424_, v_v_2425_);
return v___x_2431_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_simpLevelIMax_x27(lean_object* v_u_2432_, lean_object* v_v_2433_, lean_object* v_d_2434_){
_start:
{
uint8_t v___x_2435_; 
v___x_2435_ = l_Lean_Level_isNeverZero(v_v_2433_);
if (v___x_2435_ == 0)
{
uint8_t v___x_2436_; 
v___x_2436_ = l_Lean_Level_isZero(v_v_2433_);
if (v___x_2436_ == 0)
{
uint8_t v___x_2437_; 
v___x_2437_ = l_Lean_Level_isZero(v_u_2432_);
if (v___x_2437_ == 0)
{
uint8_t v___x_2438_; 
v___x_2438_ = lean_level_eq(v_u_2432_, v_v_2433_);
lean_dec(v_v_2433_);
if (v___x_2438_ == 0)
{
lean_dec(v_u_2432_);
lean_inc(v_d_2434_);
return v_d_2434_;
}
else
{
return v_u_2432_;
}
}
else
{
lean_dec(v_u_2432_);
return v_v_2433_;
}
}
else
{
lean_dec(v_u_2432_);
return v_v_2433_;
}
}
else
{
lean_object* v___x_2439_; 
v___x_2439_ = l_Lean_mkLevelMax_x27(v_u_2432_, v_v_2433_);
return v___x_2439_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_simpLevelIMax_x27___boxed(lean_object* v_u_2440_, lean_object* v_v_2441_, lean_object* v_d_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_Lean_simpLevelIMax_x27(v_u_2440_, v_v_2441_, v_d_2442_);
lean_dec(v_d_2442_);
return v_res_2443_;
}
}
static lean_object* _init_l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2(void){
_start:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2446_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__1));
v___x_2447_ = lean_unsigned_to_nat(14u);
v___x_2448_ = lean_unsigned_to_nat(596u);
v___x_2449_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__0));
v___x_2450_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__0));
v___x_2451_ = l_mkPanicMessageWithDecl(v___x_2450_, v___x_2449_, v___x_2448_, v___x_2447_, v___x_2446_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl(lean_object* v_lvl_2452_, lean_object* v_newLvl_2453_){
_start:
{
if (lean_obj_tag(v_lvl_2452_) == 1)
{
lean_object* v_a_2454_; size_t v___x_2455_; size_t v___x_2456_; uint8_t v___x_2457_; 
v_a_2454_ = lean_ctor_get(v_lvl_2452_, 0);
v___x_2455_ = lean_ptr_addr(v_a_2454_);
v___x_2456_ = lean_ptr_addr(v_newLvl_2453_);
v___x_2457_ = lean_usize_dec_eq(v___x_2455_, v___x_2456_);
if (v___x_2457_ == 0)
{
lean_object* v___x_2458_; 
v___x_2458_ = l_Lean_Level_succ___override(v_newLvl_2453_);
return v___x_2458_;
}
else
{
lean_dec(v_newLvl_2453_);
lean_inc_ref(v_lvl_2452_);
return v_lvl_2452_;
}
}
else
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
lean_dec(v_newLvl_2453_);
v___x_2459_ = lean_box(0);
v___x_2460_ = lean_obj_once(&l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2, &l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2_once, _init_l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___closed__2);
v___x_2461_ = l_panic___redArg(v___x_2459_, v___x_2460_);
return v___x_2461_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl___boxed(lean_object* v_lvl_2462_, lean_object* v_newLvl_2463_){
_start:
{
lean_object* v_res_2464_; 
v_res_2464_ = l___private_Lean_Level_0__Lean_Level_updateSucc_x21Impl(v_lvl_2462_, v_newLvl_2463_);
lean_dec(v_lvl_2462_);
return v_res_2464_;
}
}
static lean_object* _init_l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2(void){
_start:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; 
v___x_2467_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__1));
v___x_2468_ = lean_unsigned_to_nat(19u);
v___x_2469_ = lean_unsigned_to_nat(607u);
v___x_2470_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__0));
v___x_2471_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__0));
v___x_2472_ = l_mkPanicMessageWithDecl(v___x_2471_, v___x_2470_, v___x_2469_, v___x_2468_, v___x_2467_);
return v___x_2472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl(lean_object* v_lvl_2473_, lean_object* v_newLhs_2474_, lean_object* v_newRhs_2475_){
_start:
{
if (lean_obj_tag(v_lvl_2473_) == 2)
{
lean_object* v_a_2476_; lean_object* v_a_2477_; size_t v___x_2478_; size_t v___x_2479_; uint8_t v___x_2480_; 
v_a_2476_ = lean_ctor_get(v_lvl_2473_, 0);
v_a_2477_ = lean_ctor_get(v_lvl_2473_, 1);
v___x_2478_ = lean_ptr_addr(v_a_2476_);
v___x_2479_ = lean_ptr_addr(v_newLhs_2474_);
v___x_2480_ = lean_usize_dec_eq(v___x_2478_, v___x_2479_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; 
v___x_2481_ = l_Lean_mkLevelMax_x27(v_newLhs_2474_, v_newRhs_2475_);
return v___x_2481_;
}
else
{
size_t v___x_2482_; size_t v___x_2483_; uint8_t v___x_2484_; 
v___x_2482_ = lean_ptr_addr(v_a_2477_);
v___x_2483_ = lean_ptr_addr(v_newRhs_2475_);
v___x_2484_ = lean_usize_dec_eq(v___x_2482_, v___x_2483_);
if (v___x_2484_ == 0)
{
lean_object* v___x_2485_; 
v___x_2485_ = l_Lean_mkLevelMax_x27(v_newLhs_2474_, v_newRhs_2475_);
return v___x_2485_;
}
else
{
lean_object* v___x_2486_; 
v___x_2486_ = l_Lean_simpLevelMax_x27(v_newLhs_2474_, v_newRhs_2475_, v_lvl_2473_);
lean_dec(v_newRhs_2475_);
lean_dec(v_newLhs_2474_);
return v___x_2486_;
}
}
}
else
{
lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; 
lean_dec(v_newRhs_2475_);
lean_dec(v_newLhs_2474_);
v___x_2487_ = lean_box(0);
v___x_2488_ = lean_obj_once(&l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2, &l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2_once, _init_l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___closed__2);
v___x_2489_ = l_panic___redArg(v___x_2487_, v___x_2488_);
return v___x_2489_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl___boxed(lean_object* v_lvl_2490_, lean_object* v_newLhs_2491_, lean_object* v_newRhs_2492_){
_start:
{
lean_object* v_res_2493_; 
v_res_2493_ = l___private_Lean_Level_0__Lean_Level_updateMax_x21Impl(v_lvl_2490_, v_newLhs_2491_, v_newRhs_2492_);
lean_dec(v_lvl_2490_);
return v_res_2493_;
}
}
static lean_object* _init_l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2(void){
_start:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2496_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__1));
v___x_2497_ = lean_unsigned_to_nat(20u);
v___x_2498_ = lean_unsigned_to_nat(618u);
v___x_2499_ = ((lean_object*)(l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__0));
v___x_2500_ = ((lean_object*)(l_Lean_Level_mvarId_x21___closed__0));
v___x_2501_ = l_mkPanicMessageWithDecl(v___x_2500_, v___x_2499_, v___x_2498_, v___x_2497_, v___x_2496_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl(lean_object* v_lvl_2502_, lean_object* v_newLhs_2503_, lean_object* v_newRhs_2504_){
_start:
{
if (lean_obj_tag(v_lvl_2502_) == 3)
{
lean_object* v_a_2505_; lean_object* v_a_2506_; size_t v___x_2507_; size_t v___x_2508_; uint8_t v___x_2509_; 
v_a_2505_ = lean_ctor_get(v_lvl_2502_, 0);
v_a_2506_ = lean_ctor_get(v_lvl_2502_, 1);
v___x_2507_ = lean_ptr_addr(v_a_2505_);
v___x_2508_ = lean_ptr_addr(v_newLhs_2503_);
v___x_2509_ = lean_usize_dec_eq(v___x_2507_, v___x_2508_);
if (v___x_2509_ == 0)
{
lean_object* v___x_2510_; 
v___x_2510_ = l_Lean_mkLevelIMax_x27(v_newLhs_2503_, v_newRhs_2504_);
return v___x_2510_;
}
else
{
size_t v___x_2511_; size_t v___x_2512_; uint8_t v___x_2513_; 
v___x_2511_ = lean_ptr_addr(v_a_2506_);
v___x_2512_ = lean_ptr_addr(v_newRhs_2504_);
v___x_2513_ = lean_usize_dec_eq(v___x_2511_, v___x_2512_);
if (v___x_2513_ == 0)
{
lean_object* v___x_2514_; 
v___x_2514_ = l_Lean_mkLevelIMax_x27(v_newLhs_2503_, v_newRhs_2504_);
return v___x_2514_;
}
else
{
lean_object* v___x_2515_; 
v___x_2515_ = l_Lean_simpLevelIMax_x27(v_newLhs_2503_, v_newRhs_2504_, v_lvl_2502_);
return v___x_2515_;
}
}
}
else
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
lean_dec(v_newRhs_2504_);
lean_dec(v_newLhs_2503_);
v___x_2516_ = lean_box(0);
v___x_2517_ = lean_obj_once(&l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2, &l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2_once, _init_l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___closed__2);
v___x_2518_ = l_panic___redArg(v___x_2516_, v___x_2517_);
return v___x_2518_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl___boxed(lean_object* v_lvl_2519_, lean_object* v_newLhs_2520_, lean_object* v_newRhs_2521_){
_start:
{
lean_object* v_res_2522_; 
v_res_2522_ = l___private_Lean_Level_0__Lean_Level_updateIMax_x21Impl(v_lvl_2519_, v_newLhs_2520_, v_newRhs_2521_);
lean_dec(v_lvl_2519_);
return v_res_2522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_mkNaryMax(lean_object* v_x_2523_){
_start:
{
if (lean_obj_tag(v_x_2523_) == 0)
{
lean_object* v___x_2524_; 
v___x_2524_ = lean_box(0);
return v___x_2524_;
}
else
{
lean_object* v_tail_2525_; 
v_tail_2525_ = lean_ctor_get(v_x_2523_, 1);
if (lean_obj_tag(v_tail_2525_) == 0)
{
lean_object* v_head_2526_; 
v_head_2526_ = lean_ctor_get(v_x_2523_, 0);
lean_inc(v_head_2526_);
lean_dec_ref_known(v_x_2523_, 2);
return v_head_2526_;
}
else
{
lean_object* v_head_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; 
lean_inc(v_tail_2525_);
v_head_2527_ = lean_ctor_get(v_x_2523_, 0);
lean_inc(v_head_2527_);
lean_dec_ref_known(v_x_2523_, 2);
v___x_2528_ = l_Lean_Level_mkNaryMax(v_tail_2525_);
v___x_2529_ = l_Lean_mkLevelMax_x27(v_head_2527_, v___x_2528_);
return v___x_2529_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_substParams_go(lean_object* v_s_2530_, lean_object* v_u_2531_){
_start:
{
switch(lean_obj_tag(v_u_2531_))
{
case 0:
{
lean_dec_ref(v_s_2530_);
return v_u_2531_;
}
case 1:
{
lean_object* v_a_2532_; uint8_t v___x_2533_; 
v_a_2532_ = lean_ctor_get(v_u_2531_, 0);
v___x_2533_ = l_Lean_Level_hasParam(v_u_2531_);
if (v___x_2533_ == 0)
{
lean_dec_ref(v_s_2530_);
return v_u_2531_;
}
else
{
lean_object* v___x_2534_; size_t v___x_2535_; size_t v___x_2536_; uint8_t v___x_2537_; 
lean_inc(v_a_2532_);
v___x_2534_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2530_, v_a_2532_);
v___x_2535_ = lean_ptr_addr(v_a_2532_);
v___x_2536_ = lean_ptr_addr(v___x_2534_);
v___x_2537_ = lean_usize_dec_eq(v___x_2535_, v___x_2536_);
if (v___x_2537_ == 0)
{
lean_object* v___x_2538_; 
lean_dec_ref_known(v_u_2531_, 1);
v___x_2538_ = l_Lean_Level_succ___override(v___x_2534_);
return v___x_2538_;
}
else
{
lean_dec(v___x_2534_);
return v_u_2531_;
}
}
}
case 2:
{
lean_object* v_a_2539_; lean_object* v_a_2540_; uint8_t v___x_2541_; 
v_a_2539_ = lean_ctor_get(v_u_2531_, 0);
v_a_2540_ = lean_ctor_get(v_u_2531_, 1);
v___x_2541_ = l_Lean_Level_hasParam(v_u_2531_);
if (v___x_2541_ == 0)
{
lean_dec_ref(v_s_2530_);
return v_u_2531_;
}
else
{
lean_object* v___x_2542_; lean_object* v___x_2543_; size_t v___x_2544_; size_t v___x_2545_; uint8_t v___x_2546_; 
lean_inc(v_a_2539_);
lean_inc_ref(v_s_2530_);
v___x_2542_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2530_, v_a_2539_);
lean_inc(v_a_2540_);
v___x_2543_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2530_, v_a_2540_);
v___x_2544_ = lean_ptr_addr(v_a_2539_);
v___x_2545_ = lean_ptr_addr(v___x_2542_);
v___x_2546_ = lean_usize_dec_eq(v___x_2544_, v___x_2545_);
if (v___x_2546_ == 0)
{
lean_object* v___x_2547_; 
lean_dec_ref_known(v_u_2531_, 2);
v___x_2547_ = l_Lean_mkLevelMax_x27(v___x_2542_, v___x_2543_);
return v___x_2547_;
}
else
{
size_t v___x_2548_; size_t v___x_2549_; uint8_t v___x_2550_; 
v___x_2548_ = lean_ptr_addr(v_a_2540_);
v___x_2549_ = lean_ptr_addr(v___x_2543_);
v___x_2550_ = lean_usize_dec_eq(v___x_2548_, v___x_2549_);
if (v___x_2550_ == 0)
{
lean_object* v___x_2551_; 
lean_dec_ref_known(v_u_2531_, 2);
v___x_2551_ = l_Lean_mkLevelMax_x27(v___x_2542_, v___x_2543_);
return v___x_2551_;
}
else
{
lean_object* v___x_2552_; 
v___x_2552_ = l_Lean_simpLevelMax_x27(v___x_2542_, v___x_2543_, v_u_2531_);
lean_dec_ref_known(v_u_2531_, 2);
lean_dec(v___x_2543_);
lean_dec(v___x_2542_);
return v___x_2552_;
}
}
}
}
case 3:
{
lean_object* v_a_2553_; lean_object* v_a_2554_; uint8_t v___x_2555_; 
v_a_2553_ = lean_ctor_get(v_u_2531_, 0);
v_a_2554_ = lean_ctor_get(v_u_2531_, 1);
v___x_2555_ = l_Lean_Level_hasParam(v_u_2531_);
if (v___x_2555_ == 0)
{
lean_dec_ref(v_s_2530_);
return v_u_2531_;
}
else
{
lean_object* v___x_2556_; lean_object* v___x_2557_; size_t v___x_2558_; size_t v___x_2559_; uint8_t v___x_2560_; 
lean_inc(v_a_2553_);
lean_inc_ref(v_s_2530_);
v___x_2556_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2530_, v_a_2553_);
lean_inc(v_a_2554_);
v___x_2557_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2530_, v_a_2554_);
v___x_2558_ = lean_ptr_addr(v_a_2553_);
v___x_2559_ = lean_ptr_addr(v___x_2556_);
v___x_2560_ = lean_usize_dec_eq(v___x_2558_, v___x_2559_);
if (v___x_2560_ == 0)
{
lean_object* v___x_2561_; 
lean_dec_ref_known(v_u_2531_, 2);
v___x_2561_ = l_Lean_mkLevelIMax_x27(v___x_2556_, v___x_2557_);
return v___x_2561_;
}
else
{
size_t v___x_2562_; size_t v___x_2563_; uint8_t v___x_2564_; 
v___x_2562_ = lean_ptr_addr(v_a_2554_);
v___x_2563_ = lean_ptr_addr(v___x_2557_);
v___x_2564_ = lean_usize_dec_eq(v___x_2562_, v___x_2563_);
if (v___x_2564_ == 0)
{
lean_object* v___x_2565_; 
lean_dec_ref_known(v_u_2531_, 2);
v___x_2565_ = l_Lean_mkLevelIMax_x27(v___x_2556_, v___x_2557_);
return v___x_2565_;
}
else
{
lean_object* v___x_2566_; 
v___x_2566_ = l_Lean_simpLevelIMax_x27(v___x_2556_, v___x_2557_, v_u_2531_);
lean_dec_ref_known(v_u_2531_, 2);
return v___x_2566_;
}
}
}
}
case 4:
{
lean_object* v_a_2567_; lean_object* v___x_2568_; 
v_a_2567_ = lean_ctor_get(v_u_2531_, 0);
lean_inc(v_a_2567_);
v___x_2568_ = lean_apply_1(v_s_2530_, v_a_2567_);
if (lean_obj_tag(v___x_2568_) == 0)
{
return v_u_2531_;
}
else
{
lean_object* v_val_2569_; 
lean_dec_ref_known(v_u_2531_, 1);
v_val_2569_ = lean_ctor_get(v___x_2568_, 0);
lean_inc(v_val_2569_);
lean_dec_ref_known(v___x_2568_, 1);
return v_val_2569_;
}
}
default: 
{
lean_dec_ref(v_s_2530_);
return v_u_2531_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_substParams(lean_object* v_u_2570_, lean_object* v_s_2571_){
_start:
{
lean_object* v___x_2572_; 
v___x_2572_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v_s_2571_, v_u_2570_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getParamSubst(lean_object* v_x_2573_, lean_object* v_x_2574_, lean_object* v_x_2575_){
_start:
{
if (lean_obj_tag(v_x_2573_) == 1)
{
if (lean_obj_tag(v_x_2574_) == 1)
{
lean_object* v_head_2576_; lean_object* v_tail_2577_; lean_object* v_head_2578_; lean_object* v_tail_2579_; uint8_t v___x_2580_; 
v_head_2576_ = lean_ctor_get(v_x_2573_, 0);
v_tail_2577_ = lean_ctor_get(v_x_2573_, 1);
v_head_2578_ = lean_ctor_get(v_x_2574_, 0);
v_tail_2579_ = lean_ctor_get(v_x_2574_, 1);
v___x_2580_ = lean_name_eq(v_head_2576_, v_x_2575_);
if (v___x_2580_ == 0)
{
v_x_2573_ = v_tail_2577_;
v_x_2574_ = v_tail_2579_;
goto _start;
}
else
{
lean_object* v___x_2582_; 
lean_inc(v_head_2578_);
v___x_2582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2582_, 0, v_head_2578_);
return v___x_2582_;
}
}
else
{
lean_object* v___x_2583_; 
v___x_2583_ = lean_box(0);
return v___x_2583_;
}
}
else
{
lean_object* v___x_2584_; 
v___x_2584_ = lean_box(0);
return v___x_2584_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_getParamSubst___boxed(lean_object* v_x_2585_, lean_object* v_x_2586_, lean_object* v_x_2587_){
_start:
{
lean_object* v_res_2588_; 
v_res_2588_ = l_Lean_Level_getParamSubst(v_x_2585_, v_x_2586_, v_x_2587_);
lean_dec(v_x_2587_);
lean_dec(v_x_2586_);
lean_dec(v_x_2585_);
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_instantiateParams(lean_object* v_u_2589_, lean_object* v_paramNames_2590_, lean_object* v_vs_2591_){
_start:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2592_ = lean_alloc_closure((void*)(l_Lean_Level_getParamSubst___boxed), 3, 2);
lean_closure_set(v___x_2592_, 0, v_paramNames_2590_);
lean_closure_set(v___x_2592_, 1, v_vs_2591_);
v___x_2593_ = l___private_Lean_Level_0__Lean_Level_substParams_go(v___x_2592_, v_u_2589_);
return v___x_2593_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Level_0__Lean_Level_geq_go(lean_object* v_u_2594_, lean_object* v_v_2595_){
_start:
{
uint8_t v___y_2597_; uint8_t v___y_2611_; lean_object* v_u_u2081_2613_; lean_object* v_u_u2082_2614_; lean_object* v_v_2615_; uint8_t v___x_2618_; 
v___x_2618_ = lean_level_eq(v_u_2594_, v_v_2595_);
if (v___x_2618_ == 0)
{
switch(lean_obj_tag(v_v_2595_))
{
case 0:
{
uint8_t v___x_2619_; 
v___x_2619_ = 1;
return v___x_2619_;
}
case 2:
{
lean_object* v_a_2620_; lean_object* v_a_2621_; uint8_t v___x_2622_; 
v_a_2620_ = lean_ctor_get(v_v_2595_, 0);
v_a_2621_ = lean_ctor_get(v_v_2595_, 1);
v___x_2622_ = l___private_Lean_Level_0__Lean_Level_geq_go(v_u_2594_, v_a_2620_);
if (v___x_2622_ == 0)
{
return v___x_2622_;
}
else
{
v_v_2595_ = v_a_2621_;
goto _start;
}
}
case 1:
{
switch(lean_obj_tag(v_u_2594_))
{
case 2:
{
lean_object* v_a_2624_; lean_object* v_a_2625_; 
v_a_2624_ = lean_ctor_get(v_u_2594_, 0);
v_a_2625_ = lean_ctor_get(v_u_2594_, 1);
v_u_u2081_2613_ = v_a_2624_;
v_u_u2082_2614_ = v_a_2625_;
v_v_2615_ = v_v_2595_;
goto v___jp_2612_;
}
case 3:
{
lean_object* v_a_2626_; 
v_a_2626_ = lean_ctor_get(v_u_2594_, 1);
v_u_2594_ = v_a_2626_;
goto _start;
}
case 1:
{
lean_object* v_a_2628_; lean_object* v_a_2629_; 
v_a_2628_ = lean_ctor_get(v_v_2595_, 0);
v_a_2629_ = lean_ctor_get(v_u_2594_, 0);
v_u_2594_ = v_a_2629_;
v_v_2595_ = v_a_2628_;
goto _start;
}
default: 
{
goto v___jp_2601_;
}
}
}
default: 
{
switch(lean_obj_tag(v_u_2594_))
{
case 2:
{
lean_object* v_a_2631_; lean_object* v_a_2632_; 
v_a_2631_ = lean_ctor_get(v_u_2594_, 0);
v_a_2632_ = lean_ctor_get(v_u_2594_, 1);
v_u_u2081_2613_ = v_a_2631_;
v_u_u2082_2614_ = v_a_2632_;
v_v_2615_ = v_v_2595_;
goto v___jp_2612_;
}
case 3:
{
lean_object* v_a_2633_; 
v_a_2633_ = lean_ctor_get(v_u_2594_, 1);
v_u_2594_ = v_a_2633_;
goto _start;
}
default: 
{
goto v___jp_2601_;
}
}
}
}
}
else
{
return v___x_2618_;
}
v___jp_2596_:
{
if (v___y_2597_ == 0)
{
return v___y_2597_;
}
else
{
lean_object* v___x_2598_; lean_object* v___x_2599_; uint8_t v___x_2600_; 
v___x_2598_ = l_Lean_Level_getOffset(v_v_2595_);
v___x_2599_ = l_Lean_Level_getOffset(v_u_2594_);
v___x_2600_ = lean_nat_dec_le(v___x_2598_, v___x_2599_);
lean_dec(v___x_2599_);
lean_dec(v___x_2598_);
return v___x_2600_;
}
}
v___jp_2601_:
{
if (lean_obj_tag(v_v_2595_) == 3)
{
lean_object* v_a_2602_; lean_object* v_a_2603_; uint8_t v___x_2604_; 
v_a_2602_ = lean_ctor_get(v_v_2595_, 0);
v_a_2603_ = lean_ctor_get(v_v_2595_, 1);
v___x_2604_ = l___private_Lean_Level_0__Lean_Level_geq_go(v_u_2594_, v_a_2602_);
if (v___x_2604_ == 0)
{
return v___x_2604_;
}
else
{
v_v_2595_ = v_a_2603_;
goto _start;
}
}
else
{
lean_object* v_v_x27_2606_; lean_object* v___x_2607_; uint8_t v___x_2608_; 
v_v_x27_2606_ = l_Lean_Level_getLevelOffset(v_v_2595_);
v___x_2607_ = l_Lean_Level_getLevelOffset(v_u_2594_);
v___x_2608_ = lean_level_eq(v___x_2607_, v_v_x27_2606_);
lean_dec(v___x_2607_);
if (v___x_2608_ == 0)
{
uint8_t v___x_2609_; 
v___x_2609_ = l_Lean_Level_isZero(v_v_x27_2606_);
lean_dec(v_v_x27_2606_);
v___y_2597_ = v___x_2609_;
goto v___jp_2596_;
}
else
{
lean_dec(v_v_x27_2606_);
v___y_2597_ = v___x_2608_;
goto v___jp_2596_;
}
}
}
v___jp_2610_:
{
if (v___y_2611_ == 0)
{
goto v___jp_2601_;
}
else
{
return v___y_2611_;
}
}
v___jp_2612_:
{
uint8_t v___x_2616_; 
v___x_2616_ = l___private_Lean_Level_0__Lean_Level_geq_go(v_u_u2081_2613_, v_v_2615_);
if (v___x_2616_ == 0)
{
uint8_t v___x_2617_; 
v___x_2617_ = l___private_Lean_Level_0__Lean_Level_geq_go(v_u_u2082_2614_, v_v_2615_);
v___y_2611_ = v___x_2617_;
goto v___jp_2610_;
}
else
{
v___y_2611_ = v___x_2616_;
goto v___jp_2610_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go___boxed(lean_object* v_u_2635_, lean_object* v_v_2636_){
_start:
{
uint8_t v_res_2637_; lean_object* v_r_2638_; 
v_res_2637_ = l___private_Lean_Level_0__Lean_Level_geq_go(v_u_2635_, v_v_2636_);
lean_dec(v_v_2636_);
lean_dec(v_u_2635_);
v_r_2638_ = lean_box(v_res_2637_);
return v_r_2638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go_match__1_splitter___redArg(lean_object* v_u_2639_, lean_object* v_v_2640_, lean_object* v_h__1_2641_, lean_object* v_h__2_2642_, lean_object* v_h__3_2643_, lean_object* v_h__4_2644_, lean_object* v_h__5_2645_, lean_object* v_h__6_2646_){
_start:
{
switch(lean_obj_tag(v_v_2640_))
{
case 0:
{
lean_object* v___x_2647_; 
lean_dec(v_h__6_2646_);
lean_dec(v_h__5_2645_);
lean_dec(v_h__4_2644_);
lean_dec(v_h__3_2643_);
lean_dec(v_h__2_2642_);
v___x_2647_ = lean_apply_1(v_h__1_2641_, v_u_2639_);
return v___x_2647_;
}
case 2:
{
lean_object* v_a_2648_; lean_object* v_a_2649_; lean_object* v___x_2650_; 
lean_dec(v_h__6_2646_);
lean_dec(v_h__5_2645_);
lean_dec(v_h__4_2644_);
lean_dec(v_h__3_2643_);
lean_dec(v_h__1_2641_);
v_a_2648_ = lean_ctor_get(v_v_2640_, 0);
lean_inc(v_a_2648_);
v_a_2649_ = lean_ctor_get(v_v_2640_, 1);
lean_inc(v_a_2649_);
lean_dec_ref_known(v_v_2640_, 2);
v___x_2650_ = lean_apply_3(v_h__2_2642_, v_u_2639_, v_a_2648_, v_a_2649_);
return v___x_2650_;
}
case 1:
{
lean_dec(v_h__2_2642_);
lean_dec(v_h__1_2641_);
switch(lean_obj_tag(v_u_2639_))
{
case 2:
{
lean_object* v_a_2651_; lean_object* v_a_2652_; lean_object* v___x_2653_; 
lean_dec(v_h__6_2646_);
lean_dec(v_h__5_2645_);
lean_dec(v_h__4_2644_);
v_a_2651_ = lean_ctor_get(v_u_2639_, 0);
lean_inc(v_a_2651_);
v_a_2652_ = lean_ctor_get(v_u_2639_, 1);
lean_inc(v_a_2652_);
lean_dec_ref_known(v_u_2639_, 2);
v___x_2653_ = lean_apply_5(v_h__3_2643_, v_a_2651_, v_a_2652_, v_v_2640_, lean_box(0), lean_box(0));
return v___x_2653_;
}
case 3:
{
lean_object* v_a_2654_; lean_object* v_a_2655_; lean_object* v___x_2656_; 
lean_dec(v_h__6_2646_);
lean_dec(v_h__5_2645_);
lean_dec(v_h__3_2643_);
v_a_2654_ = lean_ctor_get(v_u_2639_, 0);
lean_inc(v_a_2654_);
v_a_2655_ = lean_ctor_get(v_u_2639_, 1);
lean_inc(v_a_2655_);
lean_dec_ref_known(v_u_2639_, 2);
v___x_2656_ = lean_apply_5(v_h__4_2644_, v_a_2654_, v_a_2655_, v_v_2640_, lean_box(0), lean_box(0));
return v___x_2656_;
}
case 1:
{
lean_object* v_a_2657_; lean_object* v_a_2658_; lean_object* v___x_2659_; 
lean_dec(v_h__6_2646_);
lean_dec(v_h__4_2644_);
lean_dec(v_h__3_2643_);
v_a_2657_ = lean_ctor_get(v_v_2640_, 0);
lean_inc(v_a_2657_);
lean_dec_ref_known(v_v_2640_, 1);
v_a_2658_ = lean_ctor_get(v_u_2639_, 0);
lean_inc(v_a_2658_);
lean_dec_ref_known(v_u_2639_, 1);
v___x_2659_ = lean_apply_2(v_h__5_2645_, v_a_2658_, v_a_2657_);
return v___x_2659_;
}
default: 
{
lean_object* v___x_2660_; 
lean_dec(v_h__5_2645_);
lean_dec(v_h__4_2644_);
lean_dec(v_h__3_2643_);
v___x_2660_ = lean_apply_7(v_h__6_2646_, v_u_2639_, v_v_2640_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2660_;
}
}
}
default: 
{
lean_dec(v_h__5_2645_);
lean_dec(v_h__2_2642_);
lean_dec(v_h__1_2641_);
switch(lean_obj_tag(v_u_2639_))
{
case 2:
{
lean_object* v_a_2661_; lean_object* v_a_2662_; lean_object* v___x_2663_; 
lean_dec(v_h__6_2646_);
lean_dec(v_h__4_2644_);
v_a_2661_ = lean_ctor_get(v_u_2639_, 0);
lean_inc(v_a_2661_);
v_a_2662_ = lean_ctor_get(v_u_2639_, 1);
lean_inc(v_a_2662_);
lean_dec_ref_known(v_u_2639_, 2);
v___x_2663_ = lean_apply_5(v_h__3_2643_, v_a_2661_, v_a_2662_, v_v_2640_, lean_box(0), lean_box(0));
return v___x_2663_;
}
case 3:
{
lean_object* v_a_2664_; lean_object* v_a_2665_; lean_object* v___x_2666_; 
lean_dec(v_h__6_2646_);
lean_dec(v_h__3_2643_);
v_a_2664_ = lean_ctor_get(v_u_2639_, 0);
lean_inc(v_a_2664_);
v_a_2665_ = lean_ctor_get(v_u_2639_, 1);
lean_inc(v_a_2665_);
lean_dec_ref_known(v_u_2639_, 2);
v___x_2666_ = lean_apply_5(v_h__4_2644_, v_a_2664_, v_a_2665_, v_v_2640_, lean_box(0), lean_box(0));
return v___x_2666_;
}
default: 
{
lean_object* v___x_2667_; 
lean_dec(v_h__4_2644_);
lean_dec(v_h__3_2643_);
v___x_2667_ = lean_apply_7(v_h__6_2646_, v_u_2639_, v_v_2640_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2667_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_geq_go_match__1_splitter(lean_object* v_motive_2668_, lean_object* v_u_2669_, lean_object* v_v_2670_, lean_object* v_h__1_2671_, lean_object* v_h__2_2672_, lean_object* v_h__3_2673_, lean_object* v_h__4_2674_, lean_object* v_h__5_2675_, lean_object* v_h__6_2676_){
_start:
{
switch(lean_obj_tag(v_v_2670_))
{
case 0:
{
lean_object* v___x_2677_; 
lean_dec(v_h__6_2676_);
lean_dec(v_h__5_2675_);
lean_dec(v_h__4_2674_);
lean_dec(v_h__3_2673_);
lean_dec(v_h__2_2672_);
v___x_2677_ = lean_apply_1(v_h__1_2671_, v_u_2669_);
return v___x_2677_;
}
case 2:
{
lean_object* v_a_2678_; lean_object* v_a_2679_; lean_object* v___x_2680_; 
lean_dec(v_h__6_2676_);
lean_dec(v_h__5_2675_);
lean_dec(v_h__4_2674_);
lean_dec(v_h__3_2673_);
lean_dec(v_h__1_2671_);
v_a_2678_ = lean_ctor_get(v_v_2670_, 0);
lean_inc(v_a_2678_);
v_a_2679_ = lean_ctor_get(v_v_2670_, 1);
lean_inc(v_a_2679_);
lean_dec_ref_known(v_v_2670_, 2);
v___x_2680_ = lean_apply_3(v_h__2_2672_, v_u_2669_, v_a_2678_, v_a_2679_);
return v___x_2680_;
}
case 1:
{
lean_dec(v_h__2_2672_);
lean_dec(v_h__1_2671_);
switch(lean_obj_tag(v_u_2669_))
{
case 2:
{
lean_object* v_a_2681_; lean_object* v_a_2682_; lean_object* v___x_2683_; 
lean_dec(v_h__6_2676_);
lean_dec(v_h__5_2675_);
lean_dec(v_h__4_2674_);
v_a_2681_ = lean_ctor_get(v_u_2669_, 0);
lean_inc(v_a_2681_);
v_a_2682_ = lean_ctor_get(v_u_2669_, 1);
lean_inc(v_a_2682_);
lean_dec_ref_known(v_u_2669_, 2);
v___x_2683_ = lean_apply_5(v_h__3_2673_, v_a_2681_, v_a_2682_, v_v_2670_, lean_box(0), lean_box(0));
return v___x_2683_;
}
case 3:
{
lean_object* v_a_2684_; lean_object* v_a_2685_; lean_object* v___x_2686_; 
lean_dec(v_h__6_2676_);
lean_dec(v_h__5_2675_);
lean_dec(v_h__3_2673_);
v_a_2684_ = lean_ctor_get(v_u_2669_, 0);
lean_inc(v_a_2684_);
v_a_2685_ = lean_ctor_get(v_u_2669_, 1);
lean_inc(v_a_2685_);
lean_dec_ref_known(v_u_2669_, 2);
v___x_2686_ = lean_apply_5(v_h__4_2674_, v_a_2684_, v_a_2685_, v_v_2670_, lean_box(0), lean_box(0));
return v___x_2686_;
}
case 1:
{
lean_object* v_a_2687_; lean_object* v_a_2688_; lean_object* v___x_2689_; 
lean_dec(v_h__6_2676_);
lean_dec(v_h__4_2674_);
lean_dec(v_h__3_2673_);
v_a_2687_ = lean_ctor_get(v_v_2670_, 0);
lean_inc(v_a_2687_);
lean_dec_ref_known(v_v_2670_, 1);
v_a_2688_ = lean_ctor_get(v_u_2669_, 0);
lean_inc(v_a_2688_);
lean_dec_ref_known(v_u_2669_, 1);
v___x_2689_ = lean_apply_2(v_h__5_2675_, v_a_2688_, v_a_2687_);
return v___x_2689_;
}
default: 
{
lean_object* v___x_2690_; 
lean_dec(v_h__5_2675_);
lean_dec(v_h__4_2674_);
lean_dec(v_h__3_2673_);
v___x_2690_ = lean_apply_7(v_h__6_2676_, v_u_2669_, v_v_2670_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2690_;
}
}
}
default: 
{
lean_dec(v_h__5_2675_);
lean_dec(v_h__2_2672_);
lean_dec(v_h__1_2671_);
switch(lean_obj_tag(v_u_2669_))
{
case 2:
{
lean_object* v_a_2691_; lean_object* v_a_2692_; lean_object* v___x_2693_; 
lean_dec(v_h__6_2676_);
lean_dec(v_h__4_2674_);
v_a_2691_ = lean_ctor_get(v_u_2669_, 0);
lean_inc(v_a_2691_);
v_a_2692_ = lean_ctor_get(v_u_2669_, 1);
lean_inc(v_a_2692_);
lean_dec_ref_known(v_u_2669_, 2);
v___x_2693_ = lean_apply_5(v_h__3_2673_, v_a_2691_, v_a_2692_, v_v_2670_, lean_box(0), lean_box(0));
return v___x_2693_;
}
case 3:
{
lean_object* v_a_2694_; lean_object* v_a_2695_; lean_object* v___x_2696_; 
lean_dec(v_h__6_2676_);
lean_dec(v_h__3_2673_);
v_a_2694_ = lean_ctor_get(v_u_2669_, 0);
lean_inc(v_a_2694_);
v_a_2695_ = lean_ctor_get(v_u_2669_, 1);
lean_inc(v_a_2695_);
lean_dec_ref_known(v_u_2669_, 2);
v___x_2696_ = lean_apply_5(v_h__4_2674_, v_a_2694_, v_a_2695_, v_v_2670_, lean_box(0), lean_box(0));
return v___x_2696_;
}
default: 
{
lean_object* v___x_2697_; 
lean_dec(v_h__4_2674_);
lean_dec(v_h__3_2673_);
v___x_2697_ = lean_apply_7(v_h__6_2676_, v_u_2669_, v_v_2670_, lean_box(0), lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_2697_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isIMax_match__1_splitter___redArg(lean_object* v_x_2698_, lean_object* v_h__1_2699_, lean_object* v_h__2_2700_){
_start:
{
if (lean_obj_tag(v_x_2698_) == 3)
{
lean_object* v_a_2701_; lean_object* v_a_2702_; lean_object* v___x_2703_; 
lean_dec(v_h__2_2700_);
v_a_2701_ = lean_ctor_get(v_x_2698_, 0);
lean_inc(v_a_2701_);
v_a_2702_ = lean_ctor_get(v_x_2698_, 1);
lean_inc(v_a_2702_);
lean_dec_ref_known(v_x_2698_, 2);
v___x_2703_ = lean_apply_2(v_h__1_2699_, v_a_2701_, v_a_2702_);
return v___x_2703_;
}
else
{
lean_object* v___x_2704_; 
lean_dec(v_h__1_2699_);
v___x_2704_ = lean_apply_2(v_h__2_2700_, v_x_2698_, lean_box(0));
return v___x_2704_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_isIMax_match__1_splitter(lean_object* v_motive_2705_, lean_object* v_x_2706_, lean_object* v_h__1_2707_, lean_object* v_h__2_2708_){
_start:
{
if (lean_obj_tag(v_x_2706_) == 3)
{
lean_object* v_a_2709_; lean_object* v_a_2710_; lean_object* v___x_2711_; 
lean_dec(v_h__2_2708_);
v_a_2709_ = lean_ctor_get(v_x_2706_, 0);
lean_inc(v_a_2709_);
v_a_2710_ = lean_ctor_get(v_x_2706_, 1);
lean_inc(v_a_2710_);
lean_dec_ref_known(v_x_2706_, 2);
v___x_2711_ = lean_apply_2(v_h__1_2707_, v_a_2709_, v_a_2710_);
return v___x_2711_;
}
else
{
lean_object* v___x_2712_; 
lean_dec(v_h__1_2707_);
v___x_2712_ = lean_apply_2(v_h__2_2708_, v_x_2706_, lean_box(0));
return v___x_2712_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Level_geq(lean_object* v_u_2713_, lean_object* v_v_2714_){
_start:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; uint8_t v___x_2717_; 
v___x_2715_ = l_Lean_Level_normalize(v_u_2713_);
v___x_2716_ = l_Lean_Level_normalize(v_v_2714_);
v___x_2717_ = l___private_Lean_Level_0__Lean_Level_geq_go(v___x_2715_, v___x_2716_);
lean_dec(v___x_2716_);
lean_dec(v___x_2715_);
return v___x_2717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_geq___boxed(lean_object* v_u_2718_, lean_object* v_v_2719_){
_start:
{
uint8_t v_res_2720_; lean_object* v_r_2721_; 
v_res_2720_ = l_Lean_Level_geq(v_u_2718_, v_v_2719_);
lean_dec(v_v_2719_);
lean_dec(v_u_2718_);
v_r_2721_ = lean_box(v_res_2720_);
return v_r_2721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Level_collectMVars(lean_object* v_u_2722_, lean_object* v_s_2723_){
_start:
{
lean_object* v_u_2725_; lean_object* v_v_2726_; 
switch(lean_obj_tag(v_u_2722_))
{
case 1:
{
lean_object* v_a_2729_; 
v_a_2729_ = lean_ctor_get(v_u_2722_, 0);
lean_inc(v_a_2729_);
lean_dec_ref_known(v_u_2722_, 1);
v_u_2722_ = v_a_2729_;
goto _start;
}
case 2:
{
lean_object* v_a_2731_; lean_object* v_a_2732_; 
v_a_2731_ = lean_ctor_get(v_u_2722_, 0);
lean_inc(v_a_2731_);
v_a_2732_ = lean_ctor_get(v_u_2722_, 1);
lean_inc(v_a_2732_);
lean_dec_ref_known(v_u_2722_, 2);
v_u_2725_ = v_a_2731_;
v_v_2726_ = v_a_2732_;
goto v___jp_2724_;
}
case 3:
{
lean_object* v_a_2733_; lean_object* v_a_2734_; 
v_a_2733_ = lean_ctor_get(v_u_2722_, 0);
lean_inc(v_a_2733_);
v_a_2734_ = lean_ctor_get(v_u_2722_, 1);
lean_inc(v_a_2734_);
lean_dec_ref_known(v_u_2722_, 2);
v_u_2725_ = v_a_2733_;
v_v_2726_ = v_a_2734_;
goto v___jp_2724_;
}
case 5:
{
lean_object* v_a_2735_; lean_object* v___x_2736_; 
v_a_2735_ = lean_ctor_get(v_u_2722_, 0);
lean_inc(v_a_2735_);
lean_dec_ref_known(v_u_2722_, 1);
v___x_2736_ = l_Lean_LMVarIdSet_insert(v_s_2723_, v_a_2735_);
return v___x_2736_;
}
default: 
{
lean_dec(v_u_2722_);
return v_s_2723_;
}
}
v___jp_2724_:
{
lean_object* v___x_2727_; 
v___x_2727_ = l_Lean_Level_collectMVars(v_v_2726_, v_s_2723_);
v_u_2722_ = v_u_2725_;
v_s_2723_ = v___x_2727_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Level_0__Lean_Level_find_x3f_visit(lean_object* v_p_2737_, lean_object* v_u_2738_){
_start:
{
lean_object* v_u_2740_; lean_object* v_v_2741_; lean_object* v___x_2744_; uint8_t v___x_2745_; 
lean_inc_ref(v_p_2737_);
lean_inc(v_u_2738_);
v___x_2744_ = lean_apply_1(v_p_2737_, v_u_2738_);
v___x_2745_ = lean_unbox(v___x_2744_);
if (v___x_2745_ == 0)
{
switch(lean_obj_tag(v_u_2738_))
{
case 1:
{
lean_object* v_a_2746_; 
v_a_2746_ = lean_ctor_get(v_u_2738_, 0);
lean_inc(v_a_2746_);
lean_dec_ref_known(v_u_2738_, 1);
v_u_2738_ = v_a_2746_;
goto _start;
}
case 2:
{
lean_object* v_a_2748_; lean_object* v_a_2749_; 
v_a_2748_ = lean_ctor_get(v_u_2738_, 0);
lean_inc(v_a_2748_);
v_a_2749_ = lean_ctor_get(v_u_2738_, 1);
lean_inc(v_a_2749_);
lean_dec_ref_known(v_u_2738_, 2);
v_u_2740_ = v_a_2748_;
v_v_2741_ = v_a_2749_;
goto v___jp_2739_;
}
case 3:
{
lean_object* v_a_2750_; lean_object* v_a_2751_; 
v_a_2750_ = lean_ctor_get(v_u_2738_, 0);
lean_inc(v_a_2750_);
v_a_2751_ = lean_ctor_get(v_u_2738_, 1);
lean_inc(v_a_2751_);
lean_dec_ref_known(v_u_2738_, 2);
v_u_2740_ = v_a_2750_;
v_v_2741_ = v_a_2751_;
goto v___jp_2739_;
}
default: 
{
lean_object* v___x_2752_; 
lean_dec(v_u_2738_);
lean_dec_ref(v_p_2737_);
v___x_2752_ = lean_box(0);
return v___x_2752_;
}
}
}
else
{
lean_object* v___x_2753_; 
lean_dec_ref(v_p_2737_);
v___x_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2753_, 0, v_u_2738_);
return v___x_2753_;
}
v___jp_2739_:
{
lean_object* v___x_2742_; 
lean_inc_ref(v_p_2737_);
v___x_2742_ = l___private_Lean_Level_0__Lean_Level_find_x3f_visit(v_p_2737_, v_u_2740_);
if (lean_obj_tag(v___x_2742_) == 0)
{
v_u_2738_ = v_v_2741_;
goto _start;
}
else
{
lean_dec(v_v_2741_);
lean_dec_ref(v_p_2737_);
return v___x_2742_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_find_x3f(lean_object* v_u_2754_, lean_object* v_p_2755_){
_start:
{
lean_object* v___x_2756_; 
v___x_2756_ = l___private_Lean_Level_0__Lean_Level_find_x3f_visit(v_p_2755_, v_u_2754_);
return v___x_2756_;
}
}
LEAN_EXPORT uint8_t l_Lean_Level_any(lean_object* v_u_2757_, lean_object* v_p_2758_){
_start:
{
lean_object* v___x_2759_; 
v___x_2759_ = l___private_Lean_Level_0__Lean_Level_find_x3f_visit(v_p_2758_, v_u_2757_);
if (lean_obj_tag(v___x_2759_) == 0)
{
uint8_t v___x_2760_; 
v___x_2760_ = 0;
return v___x_2760_;
}
else
{
uint8_t v___x_2761_; 
lean_dec_ref_known(v___x_2759_, 1);
v___x_2761_ = 1;
return v___x_2761_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Level_any___boxed(lean_object* v_u_2762_, lean_object* v_p_2763_){
_start:
{
uint8_t v_res_2764_; lean_object* v_r_2765_; 
v_res_2764_ = l_Lean_Level_any(v_u_2762_, v_p_2763_);
v_r_2765_ = lean_box(v_res_2764_);
return v_r_2765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Nat_toLevel(lean_object* v_n_2766_){
_start:
{
lean_object* v___x_2767_; 
v___x_2767_ = l_Lean_Level_ofNat(v_n_2766_);
return v___x_2767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Nat_toLevel___boxed(lean_object* v_n_2768_){
_start:
{
lean_object* v_res_2769_; 
v_res_2769_ = l_Lean_Nat_toLevel(v_n_2768_);
lean_dec(v_n_2768_);
return v_res_2769_;
}
}
lean_object* runtime_initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_PersistentHashSet(uint8_t builtin);
lean_object* runtime_initialize_Lean_Hygiene(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Level(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PersistentHashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Hygiene(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Level_instInhabitedData_default = _init_l_Lean_Level_instInhabitedData_default();
l_Lean_Level_instInhabitedData = _init_l_Lean_Level_instInhabitedData();
l_Lean_instInhabitedLevelMVarId_default = _init_l_Lean_instInhabitedLevelMVarId_default();
lean_mark_persistent(l_Lean_instInhabitedLevelMVarId_default);
l_Lean_instInhabitedLevelMVarId = _init_l_Lean_instInhabitedLevelMVarId();
lean_mark_persistent(l_Lean_instInhabitedLevelMVarId);
l_Lean_instInhabitedLMVarIdSet_default = _init_l_Lean_instInhabitedLMVarIdSet_default();
lean_mark_persistent(l_Lean_instInhabitedLMVarIdSet_default);
l_Lean_instInhabitedLMVarIdSet = _init_l_Lean_instInhabitedLMVarIdSet();
lean_mark_persistent(l_Lean_instInhabitedLMVarIdSet);
l_Lean_instEmptyCollectionLMVarIdSet = _init_l_Lean_instEmptyCollectionLMVarIdSet();
lean_mark_persistent(l_Lean_instEmptyCollectionLMVarIdSet);
l_Lean_Level_zero___override = _init_l_Lean_Level_zero___override();
lean_mark_persistent(l_Lean_Level_zero___override);
l_Lean_instInhabitedLevel_default = _init_l_Lean_instInhabitedLevel_default();
lean_mark_persistent(l_Lean_instInhabitedLevel_default);
l_Lean_instInhabitedLevel = _init_l_Lean_instInhabitedLevel();
lean_mark_persistent(l_Lean_instInhabitedLevel);
l_Lean_levelZero = _init_l_Lean_levelZero();
lean_mark_persistent(l_Lean_levelZero);
l_Lean_Level_one = _init_l_Lean_Level_one();
lean_mark_persistent(l_Lean_Level_one);
l_Lean_levelOne = _init_l_Lean_levelOne();
lean_mark_persistent(l_Lean_levelOne);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Level(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* initialize_Lean_Data_PersistentHashSet(uint8_t builtin);
lean_object* initialize_Lean_Hygiene(uint8_t builtin);
lean_object* initialize_Init_Data_Option_Coe(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Level(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_PersistentHashSet(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Hygiene(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_Coe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Level(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Level(builtin);
}
#ifdef __cplusplus
}
#endif
