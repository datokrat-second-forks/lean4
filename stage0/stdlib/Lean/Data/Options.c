// Lean compiler output
// Module: Lean.Data.Options
// Imports: public import Lean.ImportingFlag public import Lean.Data.KVMap public import Lean.Data.NameMap.Basic import Init.Data.ToString.Macro
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
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_data_value_to_string(lean_object*);
lean_object* l_Lean_Name_instToString___lam__0(lean_object*);
lean_object* l_instToStringProd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameMap_toList___redArg(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_initializing();
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instBEqDataValue_beq___boxed(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_Const_beq___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedDataValue_default;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_find_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_NameMap_keys___redArg(lean_object*);
static const lean_ctor_object l_Lean_Options_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Options_empty___closed__0 = (const lean_object*)&l_Lean_Options_empty___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Options_empty = (const lean_object*)&l_Lean_Options_empty___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Options_getEmpty___redArg();
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Options_getEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lean_options_get_empty(lean_object*);
LEAN_EXPORT const lean_object* l_Lean_Options_instInhabited = (const lean_object*)&l_Lean_Options_empty___closed__0_value;
static const lean_closure_object l_Lean_Options_instToString___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Options_instToString___private__1___closed__0 = (const lean_object*)&l_Lean_Options_instToString___private__1___closed__0_value;
static const lean_closure_object l_Lean_Options_instToString___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lean_data_value_to_string, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Options_instToString___private__1___closed__1 = (const lean_object*)&l_Lean_Options_instToString___private__1___closed__1_value;
static const lean_closure_object l_Lean_Options_instToString___private__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringProd___redArg___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Options_instToString___private__1___closed__0_value),((lean_object*)&l_Lean_Options_instToString___private__1___closed__1_value)} };
static const lean_object* l_Lean_Options_instToString___private__1___closed__2 = (const lean_object*)&l_Lean_Options_instToString___private__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Options_instToString___private__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_instToString___private__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_instToString___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_instToString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Options_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Options_instToString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Options_instToString___closed__0 = (const lean_object*)&l_Lean_Options_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Options_instToString = (const lean_object*)&l_Lean_Options_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Options_instBEq___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqDataValue_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Options_instBEq___private__1___closed__0 = (const lean_object*)&l_Lean_Options_instBEq___private__1___closed__0_value;
static const lean_closure_object l_Lean_Options_instBEq___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Options_instBEq___private__1___closed__1 = (const lean_object*)&l_Lean_Options_instBEq___private__1___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Options_instBEq___private__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_instBEq___private__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Options_instBEq___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_instBEq___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Options_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Options_instBEq___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Options_instBEq___closed__0 = (const lean_object*)&l_Lean_Options_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Options_instBEq = (const lean_object*)&l_Lean_Options_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Options_instEmptyCollection = (const lean_object*)&l_Lean_Options_empty___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Options_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_find_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_find(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_find___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_get_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_get_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_get_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_get___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_get(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Options_getBool(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_getBool___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Options_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_contains___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_insert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_insert___closed__0 = (const lean_object*)&l_Lean_Options_insert___closed__0_value;
static const lean_ctor_object l_Lean_Options_insert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_insert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_insert___closed__1 = (const lean_object*)&l_Lean_Options_insert___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_setBool(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_setBool___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Options_erase_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Options_erase_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_erase___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_mergeBy(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instInhabitedOptionDeprecation_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_instInhabitedOptionDeprecation_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedOptionDeprecation_default___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedOptionDeprecation_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedOptionDeprecation_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_instInhabitedOptionDeprecation_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedOptionDeprecation_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedOptionDeprecation_default = (const lean_object*)&l_Lean_instInhabitedOptionDeprecation_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedOptionDeprecation = (const lean_object*)&l_Lean_instInhabitedOptionDeprecation_default___closed__1_value;
static const lean_string_object l_Lean_OptionDecl_declName___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__0 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value;
static const lean_string_object l_Lean_OptionDecl_declName___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__1 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value;
static const lean_string_object l_Lean_OptionDecl_declName___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__2 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__2_value;
static const lean_string_object l_Lean_OptionDecl_declName___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__3 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__4 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__4_value;
static const lean_array_object l_Lean_OptionDecl_declName___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__5 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__5_value;
static const lean_string_object l_Lean_OptionDecl_declName___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__6 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__7 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__7_value;
static const lean_string_object l_Lean_OptionDecl_declName___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__8 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__9 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__9_value;
static const lean_string_object l_Lean_OptionDecl_declName___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__10 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__11 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__12;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__13;
static const lean_string_object l_Lean_OptionDecl_declName___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__14 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value;
static const lean_string_object l_Lean_OptionDecl_declName___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__15 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__15_value;
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__16_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__16_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_OptionDecl_declName___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__16_value_aux_2),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__16 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__16_value;
static const lean_string_object l_Lean_OptionDecl_declName___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_OptionDecl_declName___autoParam___closed__17 = (const lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__17_value;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__18;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__19;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__20;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__21;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__22;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__23;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__24;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__25;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__26;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__27;
static lean_once_cell_t l_Lean_OptionDecl_declName___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_OptionDecl_declName___autoParam___closed__28;
LEAN_EXPORT lean_object* l_Lean_OptionDecl_declName___autoParam;
static const lean_string_object l_Lean_instInhabitedOptionDecl_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "instInhabitedOptionDecl"};
static const lean_object* l_Lean_instInhabitedOptionDecl_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedOptionDecl_default___closed__0_value;
static const lean_string_object l_Lean_instInhabitedOptionDecl_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lean_instInhabitedOptionDecl_default___closed__1 = (const lean_object*)&l_Lean_instInhabitedOptionDecl_default___closed__1_value;
static const lean_ctor_object l_Lean_instInhabitedOptionDecl_default___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instInhabitedOptionDecl_default___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instInhabitedOptionDecl_default___closed__2_value_aux_0),((lean_object*)&l_Lean_instInhabitedOptionDecl_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(119, 13, 8, 149, 203, 82, 241, 178)}};
static const lean_ctor_object l_Lean_instInhabitedOptionDecl_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instInhabitedOptionDecl_default___closed__2_value_aux_1),((lean_object*)&l_Lean_instInhabitedOptionDecl_default___closed__1_value),LEAN_SCALAR_PTR_LITERAL(9, 172, 126, 56, 195, 32, 77, 110)}};
static const lean_object* l_Lean_instInhabitedOptionDecl_default___closed__2 = (const lean_object*)&l_Lean_instInhabitedOptionDecl_default___closed__2_value;
static lean_once_cell_t l_Lean_instInhabitedOptionDecl_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedOptionDecl_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedOptionDecl_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedOptionDecl;
static const lean_string_object l_Lean_OptionDecl_fullDescr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 218, .m_capacity = 218, .m_length = 217, .m_data = "This is a backwards compatibility option, intended to help migrating to new Lean releases. It may be removed without further notice 6 months after their introduction. Please report an issue if you rely on this option."};
static const lean_object* l_Lean_OptionDecl_fullDescr___closed__0 = (const lean_object*)&l_Lean_OptionDecl_fullDescr___closed__0_value;
static const lean_string_object l_Lean_OptionDecl_fullDescr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "backward"};
static const lean_object* l_Lean_OptionDecl_fullDescr___closed__1 = (const lean_object*)&l_Lean_OptionDecl_fullDescr___closed__1_value;
static const lean_ctor_object l_Lean_OptionDecl_fullDescr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_fullDescr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 196, 98, 49, 58, 220, 29, 220)}};
static const lean_object* l_Lean_OptionDecl_fullDescr___closed__2 = (const lean_object*)&l_Lean_OptionDecl_fullDescr___closed__2_value;
static const lean_string_object l_Lean_OptionDecl_fullDescr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l_Lean_OptionDecl_fullDescr___closed__3 = (const lean_object*)&l_Lean_OptionDecl_fullDescr___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_OptionDecl_fullDescr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedOptionDecls;
LEAN_EXPORT uint8_t l_Lean_OptionDecls_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_OptionDecls_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_OptionDecls_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_OptionDecls_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_OptionDecls_find_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_OptionDecls_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_OptionDecls_foldl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInOptionDeclsProdNameOptionDeclOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInOptionDeclsProdNameOptionDeclOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInOptionDeclsProdNameOptionDeclOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instForInOptionDeclsProdNameOptionDeclOfMonad(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_initFn_00___x40_Lean_Data_Options_1188237450____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_initFn_00___x40_Lean_Data_Options_1188237450____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_optionDeclsRef;
static const lean_string_object l_Lean_registerOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "Failed to register option: Options can only be registered during initialization"};
static const lean_object* l_Lean_registerOption___closed__0 = (const lean_object*)&l_Lean_registerOption___closed__0_value;
static lean_once_cell_t l_Lean_registerOption___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerOption___closed__1;
static const lean_string_object l_Lean_registerOption___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Invalid option declaration `"};
static const lean_object* l_Lean_registerOption___closed__2 = (const lean_object*)&l_Lean_registerOption___closed__2_value;
static const lean_string_object l_Lean_registerOption___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "`: Option already exists"};
static const lean_object* l_Lean_registerOption___closed__3 = (const lean_object*)&l_Lean_registerOption___closed__3_value;
LEAN_EXPORT lean_object* lean_register_option(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getOptionDecls();
LEAN_EXPORT lean_object* l_Lean_getOptionDecls___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getOptionDeclsArray___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_getOptionDeclsArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getOptionDeclsArray___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getOptionDeclsArray___closed__0 = (const lean_object*)&l_Lean_getOptionDeclsArray___closed__0_value;
static const lean_array_object l_Lean_getOptionDeclsArray___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getOptionDeclsArray___closed__1 = (const lean_object*)&l_Lean_getOptionDeclsArray___closed__1_value;
LEAN_EXPORT lean_object* lean_get_option_decls_array();
LEAN_EXPORT lean_object* l_Lean_getOptionDeclsArray___boxed(lean_object*);
static const lean_string_object l_Lean_getOptionDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Unknown option `"};
static const lean_object* l_Lean_getOptionDecl___closed__0 = (const lean_object*)&l_Lean_getOptionDecl___closed__0_value;
static const lean_string_object l_Lean_getOptionDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getOptionDecl___closed__1 = (const lean_object*)&l_Lean_getOptionDecl___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_getOptionDecl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getOptionDecl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getOptionDefaultValue(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getOptionDefaultValue___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getOptionDescr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getOptionDescr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadOptionsOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadOptionsOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBoolOption___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBoolOption___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBoolOption___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_getBoolOption___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBoolOption(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_getBoolOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getNatOption___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getNatOption___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getNatOption___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getNatOption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadWithOptionsOfMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadWithOptionsOfMonadFunctor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadWithOptionsOfMonadFunctor___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadWithOptionsOfMonadFunctor(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_withInPattern___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "_inPattern"};
static const lean_object* l_Lean_withInPattern___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_withInPattern___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_withInPattern___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_withInPattern___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(133, 19, 88, 13, 241, 130, 160, 23)}};
static const lean_object* l_Lean_withInPattern___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_withInPattern___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_withInPattern___redArg___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withInPattern___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withInPattern___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_withInPattern___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withInPattern(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Options_getInPattern(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_getInPattern___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedOption_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedOption_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_options_get_bool(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Option_getBool___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Data_Options_0__Lean_Option_updateBool_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Data_Options_0__Lean_Option_updateBool_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_options_update_bool(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Option_updateBool___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___auto__1;
LEAN_EXPORT lean_object* l_Lean_Option_register___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Option_registerBuiltinOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__0 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__0_value;
static const lean_string_object l_Lean_Option_registerBuiltinOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "registerBuiltinOption"};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__1 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__1_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__2_value_aux_0),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(54, 183, 132, 140, 253, 175, 101, 43)}};
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__2_value_aux_1),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 128, 225, 170, 242, 224, 12, 82)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__2 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__2_value;
static const lean_string_object l_Lean_Option_registerBuiltinOption___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__3 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__3_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__4 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value;
static const lean_string_object l_Lean_Option_registerBuiltinOption___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__5 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__5_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__5_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__6 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__6_value;
static const lean_string_object l_Lean_Option_registerBuiltinOption___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__7 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__7_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__7_value),LEAN_SCALAR_PTR_LITERAL(229, 56, 215, 222, 243, 187, 251, 54)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__8 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__8_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__8_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__9 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__9_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__6_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__9_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__10 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__10_value;
static const lean_string_object l_Lean_Option_registerBuiltinOption___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "visibility"};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__11 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__11_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__11_value),LEAN_SCALAR_PTR_LITERAL(70, 205, 25, 140, 55, 50, 241, 254)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__12 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__12_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__12_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__13 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__13_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__6_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__13_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__14 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__14_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__10_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__14_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__15 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__15_value;
static const lean_string_object l_Lean_Option_registerBuiltinOption___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "register_builtin_option"};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__16 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__16_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__16_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__17 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__17_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__15_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__17_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__18 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__18_value;
static const lean_string_object l_Lean_Option_registerBuiltinOption___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__19 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__19_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__19_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__20 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__20_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__20_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__21 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__21_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__18_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__21_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__22 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__22_value;
static const lean_string_object l_Lean_Option_registerBuiltinOption___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__23 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__23_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__23_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__24 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__24_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__22_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__24_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__25 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__25_value;
static const lean_string_object l_Lean_Option_registerBuiltinOption___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__26 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__26_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__26_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__27 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__27_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__28 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__28_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__25_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__28_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__29 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__29_value;
static const lean_string_object l_Lean_Option_registerBuiltinOption___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__30 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__30_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__30_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__31 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__31_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__29_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__31_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__32 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__32_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__32_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__28_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__33 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__33_value;
static const lean_ctor_object l_Lean_Option_registerBuiltinOption___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__2_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__33_value)}};
static const lean_object* l_Lean_Option_registerBuiltinOption___closed__34 = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__34_value;
LEAN_EXPORT const lean_object* l_Lean_Option_registerBuiltinOption = (const lean_object*)&l_Lean_Option_registerBuiltinOption___closed__34_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "initializeKeyword"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__0 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__0_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "builtin_initialize"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__1 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__1_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__2 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__2_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__3 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__3_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__4 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__4_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Lean.Option"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__5 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__5_value;
static lean_once_cell_t l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__6;
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(54, 183, 132, 140, 253, 175, 101, 43)}};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__7 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__7_value;
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__8 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__8_value;
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__7_value)}};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__9 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__9_value;
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__10 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__10_value;
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__8_value),((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__10_value)}};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__11 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__11_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__12 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__12_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__13 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__13_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__14 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__14_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__15 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__15_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.Option.register"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__16 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__16_value;
static lean_once_cell_t l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__17;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "register"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__18 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__18_value;
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__19_value_aux_0),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(54, 183, 132, 140, 253, 175, 101, 43)}};
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__19_value_aux_1),((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(127, 81, 22, 2, 70, 205, 7, 158)}};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__19 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__19_value;
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__20 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__20_value;
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__21 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__21_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__22 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__22_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__23 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__23_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__24 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__24_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "initialize"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__25 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__25_value;
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__26_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__26_value_aux_1),((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__26_value_aux_2),((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(55, 206, 156, 211, 241, 221, 187, 166)}};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__26 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__26_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__27 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__27_value;
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__28_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__28_value_aux_1),((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__28_value_aux_2),((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__28 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__28_value;
static lean_once_cell_t l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29;
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structInst"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__0 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__0_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__1_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__1_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 43, 73, 62, 118, 124, 31, 28)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__1 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__1_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__2 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__2_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__3 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__3_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__4_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__4_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__3_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__4 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__4_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__5 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__5_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__6_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__6_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__5_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__6 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__6_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__7 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__7_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__8 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__8_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__8_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__9 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__9_value;
static lean_once_cell_t l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__10;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__11 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__11_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12_value_aux_2),((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Option.Decl"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__13 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__13_value;
static lean_once_cell_t l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__14;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Decl"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__15 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__15_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__16_value_aux_0),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(54, 183, 132, 140, 253, 175, 101, 43)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__15_value),LEAN_SCALAR_PTR_LITERAL(16, 81, 68, 143, 61, 155, 11, 11)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__16 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__16_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__17 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__17_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__16_value)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__18 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__18_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__19 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__19_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__17_value),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__19_value)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__20 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__20_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__21 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__21_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__22 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__22_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__23 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__23_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__24_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__24_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__24_value_aux_2),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__23_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__24 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__24_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "structInstField"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__25 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__25_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__26_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__26_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__26_value_aux_2),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__25_value),LEAN_SCALAR_PTR_LITERAL(50, 77, 20, 88, 28, 210, 230, 84)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__26 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__26_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "structInstLVal"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__27 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__27_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__28_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__28_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__28_value_aux_2),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__27_value),LEAN_SCALAR_PTR_LITERAL(185, 133, 6, 147, 6, 183, 100, 198)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__28 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__28_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "deprecation\?"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__29 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__29_value;
static lean_once_cell_t l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__30;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__29_value),LEAN_SCALAR_PTR_LITERAL(163, 80, 239, 206, 134, 73, 163, 23)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__31 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__31_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structInstFieldDef"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__32 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__32_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__33_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__33_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__33_value_aux_2),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__32_value),LEAN_SCALAR_PTR_LITERAL(81, 102, 39, 227, 176, 252, 65, 103)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__33 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__33_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__34 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__34_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__35 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__35_value;
static lean_once_cell_t l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__35_value),LEAN_SCALAR_PTR_LITERAL(37, 202, 7, 33, 103, 74, 114, 212)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__37 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__37_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__38_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__38_value_aux_0),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__35_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__38 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__38_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__39 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__39_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__39_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__40 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__40_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "since"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__41 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__41_value;
static lean_once_cell_t l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__42;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__41_value),LEAN_SCALAR_PTR_LITERAL(227, 79, 129, 16, 148, 113, 14, 88)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__43 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__43_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__44 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__44_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "text\?"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__45 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__45_value;
static lean_once_cell_t l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__46;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__45_value),LEAN_SCALAR_PTR_LITERAL(119, 11, 87, 192, 206, 66, 232, 28)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__47 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__47_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "newName\?"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__48 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__48_value;
static lean_once_cell_t l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__49;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__48_value),LEAN_SCALAR_PTR_LITERAL(77, 105, 171, 104, 123, 82, 208, 222)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__50 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__50_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optEllipsis"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__51 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__51_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__52_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__52_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__52_value_aux_2),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__51_value),LEAN_SCALAR_PTR_LITERAL(13, 1, 242, 203, 207, 188, 181, 160)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__52 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__52_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__53 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__53_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__54 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__54_value;
static lean_once_cell_t l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__55;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__54_value),LEAN_SCALAR_PTR_LITERAL(73, 239, 30, 105, 8, 60, 178, 241)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__56 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__56_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__57_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__57_value_aux_0),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__54_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__57 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__57_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__57_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__58 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__58_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__58_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__59 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__59_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__38_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__60 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__60_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__61 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__61_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__62 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__62_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__63_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__63_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__63_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__63_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__63_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__63_value_aux_2),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__62_value),LEAN_SCALAR_PTR_LITERAL(103, 149, 207, 196, 17, 4, 77, 74)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__63 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__63_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__64 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__64_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__65_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__65_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__65_value_aux_0),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__65_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__65_value_aux_1),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__65_value_aux_2),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__64_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__65 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__65_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__66 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__66_value;
static lean_once_cell_t l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__67;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__66_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__68 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__68_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__69_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__69_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__69_value_aux_0),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(54, 183, 132, 140, 253, 175, 101, 43)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__69_value_aux_1),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__66_value),LEAN_SCALAR_PTR_LITERAL(189, 181, 26, 9, 96, 98, 157, 222)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__69 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__69_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__69_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__70 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__70_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__70_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__71 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__71_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__72 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__72_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__72_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__73 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__73_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\"\""};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__74 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__74_value;
static const lean_string_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "deprecated"};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__75 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__75_value;
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__76_value_aux_0),((lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__75_value),LEAN_SCALAR_PTR_LITERAL(71, 123, 37, 172, 84, 157, 83, 143)}};
static const lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__76 = (const lean_object*)&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__76_value;
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Option_registerOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "registerOption"};
static const lean_object* l_Lean_Option_registerOption___closed__0 = (const lean_object*)&l_Lean_Option_registerOption___closed__0_value;
static const lean_ctor_object l_Lean_Option_registerOption___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Option_registerOption___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_registerOption___closed__1_value_aux_0),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(54, 183, 132, 140, 253, 175, 101, 43)}};
static const lean_ctor_object l_Lean_Option_registerOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_registerOption___closed__1_value_aux_1),((lean_object*)&l_Lean_Option_registerOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 95, 60, 142, 241, 184, 36, 53)}};
static const lean_object* l_Lean_Option_registerOption___closed__1 = (const lean_object*)&l_Lean_Option_registerOption___closed__1_value;
static const lean_ctor_object l_Lean_Option_registerOption___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__27_value),LEAN_SCALAR_PTR_LITERAL(113, 135, 0, 93, 130, 217, 220, 132)}};
static const lean_object* l_Lean_Option_registerOption___closed__2 = (const lean_object*)&l_Lean_Option_registerOption___closed__2_value;
static const lean_ctor_object l_Lean_Option_registerOption___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Option_registerOption___closed__2_value)}};
static const lean_object* l_Lean_Option_registerOption___closed__3 = (const lean_object*)&l_Lean_Option_registerOption___closed__3_value;
static const lean_string_object l_Lean_Option_registerOption___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "register_option"};
static const lean_object* l_Lean_Option_registerOption___closed__4 = (const lean_object*)&l_Lean_Option_registerOption___closed__4_value;
static const lean_ctor_object l_Lean_Option_registerOption___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Option_registerOption___closed__4_value)}};
static const lean_object* l_Lean_Option_registerOption___closed__5 = (const lean_object*)&l_Lean_Option_registerOption___closed__5_value;
static const lean_ctor_object l_Lean_Option_registerOption___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerOption___closed__3_value),((lean_object*)&l_Lean_Option_registerOption___closed__5_value)}};
static const lean_object* l_Lean_Option_registerOption___closed__6 = (const lean_object*)&l_Lean_Option_registerOption___closed__6_value;
static const lean_ctor_object l_Lean_Option_registerOption___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerOption___closed__6_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__21_value)}};
static const lean_object* l_Lean_Option_registerOption___closed__7 = (const lean_object*)&l_Lean_Option_registerOption___closed__7_value;
static const lean_ctor_object l_Lean_Option_registerOption___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerOption___closed__7_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__24_value)}};
static const lean_object* l_Lean_Option_registerOption___closed__8 = (const lean_object*)&l_Lean_Option_registerOption___closed__8_value;
static const lean_ctor_object l_Lean_Option_registerOption___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerOption___closed__8_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__28_value)}};
static const lean_object* l_Lean_Option_registerOption___closed__9 = (const lean_object*)&l_Lean_Option_registerOption___closed__9_value;
static const lean_ctor_object l_Lean_Option_registerOption___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerOption___closed__9_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__31_value)}};
static const lean_object* l_Lean_Option_registerOption___closed__10 = (const lean_object*)&l_Lean_Option_registerOption___closed__10_value;
static const lean_ctor_object l_Lean_Option_registerOption___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__4_value),((lean_object*)&l_Lean_Option_registerOption___closed__10_value),((lean_object*)&l_Lean_Option_registerBuiltinOption___closed__28_value)}};
static const lean_object* l_Lean_Option_registerOption___closed__11 = (const lean_object*)&l_Lean_Option_registerOption___closed__11_value;
static const lean_ctor_object l_Lean_Option_registerOption___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Option_registerOption___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_Option_registerOption___closed__11_value)}};
static const lean_object* l_Lean_Option_registerOption___closed__12 = (const lean_object*)&l_Lean_Option_registerOption___closed__12_value;
LEAN_EXPORT const lean_object* l_Lean_Option_registerOption = (const lean_object*)&l_Lean_Option_registerOption___closed__12_value;
LEAN_EXPORT uint8_t l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__0 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__0_value;
static const lean_closure_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__1___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_OptionDecl_declName___autoParam___closed__0_value)} };
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__1 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__1_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 172, .m_capacity = 172, .m_length = 171, .m_data = "do not set the `deprecation\?` field directly; it is an internal implementation detail. Deprecate the option with a `@[deprecated \"...\" (since := \"...\")]` attribute instead"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__2 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__2_value;
static const lean_string_object l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 107, .m_capacity = 107, .m_length = 106, .m_data = "remove the `deprecation\?` field: it is populated automatically from the option's `@[deprecated]` attribute"};
static const lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__3 = (const lean_object*)&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Options_getEmpty___redArg(){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = ((lean_object*)(l_Lean_Options_empty));
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Options_getEmpty___redArg___boxed(lean_object* v___dummy_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l___private_Lean_Data_Options_0__Lean_Options_getEmpty___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* lean_options_get_empty(lean_object* v_x_9_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = ((lean_object*)(l_Lean_Options_empty));
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instToString___private__1(lean_object* v_o_17_){
_start:
{
lean_object* v_map_18_; lean_object* v___f_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v_map_18_ = lean_ctor_get(v_o_17_, 0);
v___f_19_ = ((lean_object*)(l_Lean_Options_instToString___private__1___closed__2));
v___x_20_ = l_Lean_NameMap_toList___redArg(v_map_18_);
v___x_21_ = l_List_toString___redArg(v___f_19_, v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instToString___private__1___boxed(lean_object* v_o_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Options_instToString___private__1(v_o_22_);
lean_dec_ref(v_o_22_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instToString___lam__0(lean_object* v_o_24_){
_start:
{
lean_object* v_map_25_; lean_object* v___f_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v_map_25_ = lean_ctor_get(v_o_24_, 0);
v___f_26_ = ((lean_object*)(l_Lean_Options_instToString___private__1___closed__2));
v___x_27_ = l_Lean_NameMap_toList___redArg(v_map_25_);
v___x_28_ = l_List_toString___redArg(v___f_26_, v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instToString___lam__0___boxed(lean_object* v_o_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Options_instToString___lam__0(v_o_29_);
lean_dec_ref(v_o_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg___lam__0(lean_object* v_f_33_, lean_object* v_a_34_, lean_object* v_b_35_, lean_object* v_c_36_){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_37_, 0, v_a_34_);
lean_ctor_set(v___x_37_, 1, v_b_35_);
v___x_38_ = lean_apply_2(v_f_33_, v___x_37_, v_c_36_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg___lam__1(lean_object* v_toPure_39_, lean_object* v_____do__lift_40_){
_start:
{
lean_object* v_a_41_; lean_object* v___x_42_; 
v_a_41_ = lean_ctor_get(v_____do__lift_40_, 0);
lean_inc(v_a_41_);
lean_dec_ref(v_____do__lift_40_);
v___x_42_ = lean_apply_2(v_toPure_39_, lean_box(0), v_a_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg(lean_object* v_inst_43_, lean_object* v_o_44_, lean_object* v_init_45_, lean_object* v_f_46_){
_start:
{
lean_object* v_toApplicative_47_; lean_object* v_map_48_; lean_object* v_toBind_49_; lean_object* v_toPure_50_; lean_object* v___f_51_; lean_object* v___x_52_; lean_object* v___f_53_; lean_object* v___x_54_; 
v_toApplicative_47_ = lean_ctor_get(v_inst_43_, 0);
v_map_48_ = lean_ctor_get(v_o_44_, 0);
lean_inc(v_map_48_);
lean_dec_ref(v_o_44_);
v_toBind_49_ = lean_ctor_get(v_inst_43_, 1);
lean_inc(v_toBind_49_);
v_toPure_50_ = lean_ctor_get(v_toApplicative_47_, 1);
lean_inc(v_toPure_50_);
v___f_51_ = lean_alloc_closure((void*)(l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_51_, 0, v_f_46_);
v___x_52_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_43_, v___f_51_, v_init_45_, v_map_48_);
v___f_53_ = lean_alloc_closure((void*)(l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_53_, 0, v_toPure_50_);
v___x_54_ = lean_apply_4(v_toBind_49_, lean_box(0), lean_box(0), v___x_52_, v___f_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___private__1(lean_object* v_m_55_, lean_object* v_inst_56_, lean_object* v_00_u03b2_57_, lean_object* v_o_58_, lean_object* v_init_59_, lean_object* v_f_60_){
_start:
{
lean_object* v_toApplicative_61_; lean_object* v_map_62_; lean_object* v_toBind_63_; lean_object* v_toPure_64_; lean_object* v___f_65_; lean_object* v___x_66_; lean_object* v___f_67_; lean_object* v___x_68_; 
v_toApplicative_61_ = lean_ctor_get(v_inst_56_, 0);
v_map_62_ = lean_ctor_get(v_o_58_, 0);
lean_inc(v_map_62_);
lean_dec_ref(v_o_58_);
v_toBind_63_ = lean_ctor_get(v_inst_56_, 1);
lean_inc(v_toBind_63_);
v_toPure_64_ = lean_ctor_get(v_toApplicative_61_, 1);
lean_inc(v_toPure_64_);
v___f_65_ = lean_alloc_closure((void*)(l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_65_, 0, v_f_60_);
v___x_66_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_56_, v___f_65_, v_init_59_, v_map_62_);
v___f_67_ = lean_alloc_closure((void*)(l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_67_, 0, v_toPure_64_);
v___x_68_ = lean_apply_4(v_toBind_63_, lean_box(0), lean_box(0), v___x_66_, v___f_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___redArg___lam__2(lean_object* v_inst_69_, lean_object* v_00_u03b2_70_, lean_object* v_o_71_, lean_object* v_init_72_, lean_object* v_f_73_){
_start:
{
lean_object* v_toApplicative_74_; lean_object* v_map_75_; lean_object* v_toBind_76_; lean_object* v_toPure_77_; lean_object* v___f_78_; lean_object* v___x_79_; lean_object* v___f_80_; lean_object* v___x_81_; 
v_toApplicative_74_ = lean_ctor_get(v_inst_69_, 0);
v_map_75_ = lean_ctor_get(v_o_71_, 0);
lean_inc(v_map_75_);
lean_dec_ref(v_o_71_);
v_toBind_76_ = lean_ctor_get(v_inst_69_, 1);
lean_inc(v_toBind_76_);
v_toPure_77_ = lean_ctor_get(v_toApplicative_74_, 1);
lean_inc(v_toPure_77_);
v___f_78_ = lean_alloc_closure((void*)(l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_78_, 0, v_f_73_);
v___x_79_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_69_, v___f_78_, v_init_72_, v_map_75_);
v___f_80_ = lean_alloc_closure((void*)(l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_80_, 0, v_toPure_77_);
v___x_81_ = lean_apply_4(v_toBind_76_, lean_box(0), lean_box(0), v___x_79_, v___f_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad___redArg(lean_object* v_inst_82_){
_start:
{
lean_object* v___f_83_; 
v___f_83_ = lean_alloc_closure((void*)(l_Lean_Options_instForInProdNameDataValueOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_83_, 0, v_inst_82_);
return v___f_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instForInProdNameDataValueOfMonad(lean_object* v_m_84_, lean_object* v_inst_85_){
_start:
{
lean_object* v___f_86_; 
v___f_86_ = lean_alloc_closure((void*)(l_Lean_Options_instForInProdNameDataValueOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_86_, 0, v_inst_85_);
return v___f_86_;
}
}
LEAN_EXPORT uint8_t l_Lean_Options_instBEq___private__1(lean_object* v_o1_89_, lean_object* v_o2_90_){
_start:
{
lean_object* v_map_91_; lean_object* v_map_92_; lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; 
v_map_91_ = lean_ctor_get(v_o1_89_, 0);
lean_inc(v_map_91_);
lean_dec_ref(v_o1_89_);
v_map_92_ = lean_ctor_get(v_o2_90_, 0);
lean_inc(v_map_92_);
lean_dec_ref(v_o2_90_);
v___x_93_ = ((lean_object*)(l_Lean_Options_instBEq___private__1___closed__0));
v___x_94_ = ((lean_object*)(l_Lean_Options_instBEq___private__1___closed__1));
v___x_95_ = l_Std_DTreeMap_Internal_Impl_Const_beq___redArg(v___x_94_, v___x_93_, v_map_91_, v_map_92_);
return v___x_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instBEq___private__1___boxed(lean_object* v_o1_96_, lean_object* v_o2_97_){
_start:
{
uint8_t v_res_98_; lean_object* v_r_99_; 
v_res_98_ = l_Lean_Options_instBEq___private__1(v_o1_96_, v_o2_97_);
v_r_99_ = lean_box(v_res_98_);
return v_r_99_;
}
}
LEAN_EXPORT uint8_t l_Lean_Options_instBEq___lam__0(lean_object* v_o1_100_, lean_object* v_o2_101_){
_start:
{
lean_object* v_map_102_; lean_object* v_map_103_; lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v_map_102_ = lean_ctor_get(v_o1_100_, 0);
lean_inc(v_map_102_);
lean_dec_ref(v_o1_100_);
v_map_103_ = lean_ctor_get(v_o2_101_, 0);
lean_inc(v_map_103_);
lean_dec_ref(v_o2_101_);
v___x_104_ = ((lean_object*)(l_Lean_Options_instBEq___private__1___closed__0));
v___x_105_ = ((lean_object*)(l_Lean_Options_instBEq___private__1___closed__1));
v___x_106_ = l_Std_DTreeMap_Internal_Impl_Const_beq___redArg(v___x_105_, v___x_104_, v_map_102_, v_map_103_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_instBEq___lam__0___boxed(lean_object* v_o1_107_, lean_object* v_o2_108_){
_start:
{
uint8_t v_res_109_; lean_object* v_r_110_; 
v_res_109_ = l_Lean_Options_instBEq___lam__0(v_o1_107_, v_o2_108_);
v_r_110_ = lean_box(v_res_109_);
return v_r_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_find_x3f(lean_object* v_o_114_, lean_object* v_k_115_){
_start:
{
lean_object* v_map_116_; lean_object* v___x_117_; 
v_map_116_ = lean_ctor_get(v_o_114_, 0);
v___x_117_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_116_, v_k_115_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_find_x3f___boxed(lean_object* v_o_118_, lean_object* v_k_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lean_Options_find_x3f(v_o_118_, v_k_119_);
lean_dec(v_k_119_);
lean_dec_ref(v_o_118_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_find(lean_object* v_o_121_, lean_object* v_k_122_){
_start:
{
lean_object* v_map_123_; lean_object* v___x_124_; 
v_map_123_ = lean_ctor_get(v_o_121_, 0);
v___x_124_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_123_, v_k_122_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_find___boxed(lean_object* v_o_125_, lean_object* v_k_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lean_Options_find(v_o_125_, v_k_126_);
lean_dec(v_k_126_);
lean_dec_ref(v_o_125_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_get_x3f___redArg(lean_object* v_inst_128_, lean_object* v_o_129_, lean_object* v_k_130_){
_start:
{
lean_object* v_map_131_; lean_object* v_ofDataValue_x3f_132_; lean_object* v___x_133_; 
v_map_131_ = lean_ctor_get(v_o_129_, 0);
v_ofDataValue_x3f_132_ = lean_ctor_get(v_inst_128_, 1);
lean_inc_ref(v_ofDataValue_x3f_132_);
lean_dec_ref(v_inst_128_);
v___x_133_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_131_, v_k_130_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v___x_134_; 
lean_dec_ref(v_ofDataValue_x3f_132_);
v___x_134_ = lean_box(0);
return v___x_134_;
}
else
{
lean_object* v_val_135_; lean_object* v___x_136_; 
v_val_135_ = lean_ctor_get(v___x_133_, 0);
lean_inc(v_val_135_);
lean_dec_ref_known(v___x_133_, 1);
v___x_136_ = lean_apply_1(v_ofDataValue_x3f_132_, v_val_135_);
return v___x_136_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_get_x3f___redArg___boxed(lean_object* v_inst_137_, lean_object* v_o_138_, lean_object* v_k_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_Options_get_x3f___redArg(v_inst_137_, v_o_138_, v_k_139_);
lean_dec(v_k_139_);
lean_dec_ref(v_o_138_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_get_x3f(lean_object* v_00_u03b1_141_, lean_object* v_inst_142_, lean_object* v_o_143_, lean_object* v_k_144_){
_start:
{
lean_object* v_map_145_; lean_object* v_ofDataValue_x3f_146_; lean_object* v___x_147_; 
v_map_145_ = lean_ctor_get(v_o_143_, 0);
v_ofDataValue_x3f_146_ = lean_ctor_get(v_inst_142_, 1);
lean_inc_ref(v_ofDataValue_x3f_146_);
lean_dec_ref(v_inst_142_);
v___x_147_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_145_, v_k_144_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v___x_148_; 
lean_dec_ref(v_ofDataValue_x3f_146_);
v___x_148_ = lean_box(0);
return v___x_148_;
}
else
{
lean_object* v_val_149_; lean_object* v___x_150_; 
v_val_149_ = lean_ctor_get(v___x_147_, 0);
lean_inc(v_val_149_);
lean_dec_ref_known(v___x_147_, 1);
v___x_150_ = lean_apply_1(v_ofDataValue_x3f_146_, v_val_149_);
return v___x_150_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_get_x3f___boxed(lean_object* v_00_u03b1_151_, lean_object* v_inst_152_, lean_object* v_o_153_, lean_object* v_k_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Options_get_x3f(v_00_u03b1_151_, v_inst_152_, v_o_153_, v_k_154_);
lean_dec(v_k_154_);
lean_dec_ref(v_o_153_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_get___redArg(lean_object* v_inst_156_, lean_object* v_o_157_, lean_object* v_k_158_, lean_object* v_defVal_159_){
_start:
{
lean_object* v_map_160_; lean_object* v_ofDataValue_x3f_161_; lean_object* v___x_162_; 
v_map_160_ = lean_ctor_get(v_o_157_, 0);
v_ofDataValue_x3f_161_ = lean_ctor_get(v_inst_156_, 1);
lean_inc_ref(v_ofDataValue_x3f_161_);
lean_dec_ref(v_inst_156_);
v___x_162_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_160_, v_k_158_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_dec_ref(v_ofDataValue_x3f_161_);
lean_inc(v_defVal_159_);
return v_defVal_159_;
}
else
{
lean_object* v_val_163_; lean_object* v___x_164_; 
v_val_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_val_163_);
lean_dec_ref_known(v___x_162_, 1);
v___x_164_ = lean_apply_1(v_ofDataValue_x3f_161_, v_val_163_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_inc(v_defVal_159_);
return v_defVal_159_;
}
else
{
lean_object* v_val_165_; 
v_val_165_ = lean_ctor_get(v___x_164_, 0);
lean_inc(v_val_165_);
lean_dec_ref_known(v___x_164_, 1);
return v_val_165_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_get___redArg___boxed(lean_object* v_inst_166_, lean_object* v_o_167_, lean_object* v_k_168_, lean_object* v_defVal_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lean_Options_get___redArg(v_inst_166_, v_o_167_, v_k_168_, v_defVal_169_);
lean_dec(v_defVal_169_);
lean_dec(v_k_168_);
lean_dec_ref(v_o_167_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_get(lean_object* v_00_u03b1_171_, lean_object* v_inst_172_, lean_object* v_o_173_, lean_object* v_k_174_, lean_object* v_defVal_175_){
_start:
{
lean_object* v_map_176_; lean_object* v_ofDataValue_x3f_177_; lean_object* v___x_178_; 
v_map_176_ = lean_ctor_get(v_o_173_, 0);
v_ofDataValue_x3f_177_ = lean_ctor_get(v_inst_172_, 1);
lean_inc_ref(v_ofDataValue_x3f_177_);
lean_dec_ref(v_inst_172_);
v___x_178_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_176_, v_k_174_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_dec_ref(v_ofDataValue_x3f_177_);
lean_inc(v_defVal_175_);
return v_defVal_175_;
}
else
{
lean_object* v_val_179_; lean_object* v___x_180_; 
v_val_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_val_179_);
lean_dec_ref_known(v___x_178_, 1);
v___x_180_ = lean_apply_1(v_ofDataValue_x3f_177_, v_val_179_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_inc(v_defVal_175_);
return v_defVal_175_;
}
else
{
lean_object* v_val_181_; 
v_val_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_val_181_);
lean_dec_ref_known(v___x_180_, 1);
return v_val_181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_get___boxed(lean_object* v_00_u03b1_182_, lean_object* v_inst_183_, lean_object* v_o_184_, lean_object* v_k_185_, lean_object* v_defVal_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l_Lean_Options_get(v_00_u03b1_182_, v_inst_183_, v_o_184_, v_k_185_, v_defVal_186_);
lean_dec(v_defVal_186_);
lean_dec(v_k_185_);
lean_dec_ref(v_o_184_);
return v_res_187_;
}
}
LEAN_EXPORT uint8_t l_Lean_Options_getBool(lean_object* v_o_188_, lean_object* v_k_189_, uint8_t v_defVal_190_){
_start:
{
lean_object* v_map_191_; lean_object* v___x_192_; 
v_map_191_ = lean_ctor_get(v_o_188_, 0);
v___x_192_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_191_, v_k_189_);
if (lean_obj_tag(v___x_192_) == 0)
{
return v_defVal_190_;
}
else
{
lean_object* v_val_193_; 
v_val_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc(v_val_193_);
lean_dec_ref_known(v___x_192_, 1);
if (lean_obj_tag(v_val_193_) == 1)
{
uint8_t v_v_194_; 
v_v_194_ = lean_ctor_get_uint8(v_val_193_, 0);
lean_dec_ref_known(v_val_193_, 0);
return v_v_194_;
}
else
{
lean_dec(v_val_193_);
return v_defVal_190_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_getBool___boxed(lean_object* v_o_195_, lean_object* v_k_196_, lean_object* v_defVal_197_){
_start:
{
uint8_t v_defVal_boxed_198_; uint8_t v_res_199_; lean_object* v_r_200_; 
v_defVal_boxed_198_ = lean_unbox(v_defVal_197_);
v_res_199_ = l_Lean_Options_getBool(v_o_195_, v_k_196_, v_defVal_boxed_198_);
lean_dec(v_k_196_);
lean_dec_ref(v_o_195_);
v_r_200_ = lean_box(v_res_199_);
return v_r_200_;
}
}
LEAN_EXPORT uint8_t l_Lean_Options_contains(lean_object* v_o_201_, lean_object* v_k_202_){
_start:
{
lean_object* v_map_203_; uint8_t v___x_204_; 
v_map_203_ = lean_ctor_get(v_o_201_, 0);
v___x_204_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_k_202_, v_map_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_contains___boxed(lean_object* v_o_205_, lean_object* v_k_206_){
_start:
{
uint8_t v_res_207_; lean_object* v_r_208_; 
v_res_207_ = l_Lean_Options_contains(v_o_205_, v_k_206_);
lean_dec(v_k_206_);
lean_dec_ref(v_o_205_);
v_r_208_ = lean_box(v_res_207_);
return v_r_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_insert(lean_object* v_o_212_, lean_object* v_k_213_, lean_object* v_v_214_){
_start:
{
lean_object* v_map_215_; uint8_t v_hasTrace_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_229_; 
v_map_215_ = lean_ctor_get(v_o_212_, 0);
v_hasTrace_216_ = lean_ctor_get_uint8(v_o_212_, sizeof(void*)*1);
v_isSharedCheck_229_ = !lean_is_exclusive(v_o_212_);
if (v_isSharedCheck_229_ == 0)
{
v___x_218_ = v_o_212_;
v_isShared_219_ = v_isSharedCheck_229_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_map_215_);
lean_dec(v_o_212_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_229_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_220_; 
lean_inc(v_k_213_);
v___x_220_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_213_, v_v_214_, v_map_215_);
if (v_hasTrace_216_ == 0)
{
lean_object* v___x_221_; uint8_t v___x_222_; lean_object* v___x_224_; 
v___x_221_ = ((lean_object*)(l_Lean_Options_insert___closed__1));
v___x_222_ = l_Lean_Name_isPrefixOf(v___x_221_, v_k_213_);
lean_dec(v_k_213_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 0, v___x_220_);
v___x_224_ = v___x_218_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_220_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
lean_ctor_set_uint8(v___x_224_, sizeof(void*)*1, v___x_222_);
return v___x_224_;
}
}
else
{
lean_object* v___x_227_; 
lean_dec(v_k_213_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 0, v___x_220_);
v___x_227_ = v___x_218_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_220_);
lean_ctor_set_uint8(v_reuseFailAlloc_228_, sizeof(void*)*1, v_hasTrace_216_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___redArg(lean_object* v_inst_230_, lean_object* v_o_231_, lean_object* v_k_232_, lean_object* v_v_233_){
_start:
{
lean_object* v_toDataValue_234_; lean_object* v_map_235_; uint8_t v_hasTrace_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_250_; 
v_toDataValue_234_ = lean_ctor_get(v_inst_230_, 0);
lean_inc_ref(v_toDataValue_234_);
lean_dec_ref(v_inst_230_);
v_map_235_ = lean_ctor_get(v_o_231_, 0);
v_hasTrace_236_ = lean_ctor_get_uint8(v_o_231_, sizeof(void*)*1);
v_isSharedCheck_250_ = !lean_is_exclusive(v_o_231_);
if (v_isSharedCheck_250_ == 0)
{
v___x_238_ = v_o_231_;
v_isShared_239_ = v_isSharedCheck_250_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_map_235_);
lean_dec(v_o_231_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_250_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = lean_apply_1(v_toDataValue_234_, v_v_233_);
lean_inc(v_k_232_);
v___x_241_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_232_, v___x_240_, v_map_235_);
if (v_hasTrace_236_ == 0)
{
lean_object* v___x_242_; uint8_t v___x_243_; lean_object* v___x_245_; 
v___x_242_ = ((lean_object*)(l_Lean_Options_insert___closed__1));
v___x_243_ = l_Lean_Name_isPrefixOf(v___x_242_, v_k_232_);
lean_dec(v_k_232_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 0, v___x_241_);
v___x_245_ = v___x_238_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_241_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
lean_ctor_set_uint8(v___x_245_, sizeof(void*)*1, v___x_243_);
return v___x_245_;
}
}
else
{
lean_object* v___x_248_; 
lean_dec(v_k_232_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 0, v___x_241_);
v___x_248_ = v___x_238_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v___x_241_);
lean_ctor_set_uint8(v_reuseFailAlloc_249_, sizeof(void*)*1, v_hasTrace_236_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set(lean_object* v_00_u03b1_251_, lean_object* v_inst_252_, lean_object* v_o_253_, lean_object* v_k_254_, lean_object* v_v_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lean_Options_set___redArg(v_inst_252_, v_o_253_, v_k_254_, v_v_255_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_setBool(lean_object* v_o_257_, lean_object* v_k_258_, uint8_t v_v_259_){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_260_ = l_Lean_KVMap_instValueBool;
v___x_261_ = lean_box(v_v_259_);
v___x_262_ = l_Lean_Options_set___redArg(v___x_260_, v_o_257_, v_k_258_, v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_setBool___boxed(lean_object* v_o_263_, lean_object* v_k_264_, lean_object* v_v_265_){
_start:
{
uint8_t v_v_boxed_266_; lean_object* v_res_267_; 
v_v_boxed_266_ = lean_unbox(v_v_265_);
v_res_267_ = l_Lean_Options_setBool(v_o_263_, v_k_264_, v_v_boxed_266_);
return v_res_267_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Options_erase_spec__0(lean_object* v_x_268_){
_start:
{
if (lean_obj_tag(v_x_268_) == 0)
{
uint8_t v___x_269_; 
v___x_269_ = 0;
return v___x_269_;
}
else
{
lean_object* v_head_270_; lean_object* v_tail_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v_head_270_ = lean_ctor_get(v_x_268_, 0);
v_tail_271_ = lean_ctor_get(v_x_268_, 1);
v___x_272_ = ((lean_object*)(l_Lean_Options_insert___closed__1));
v___x_273_ = l_Lean_Name_isPrefixOf(v___x_272_, v_head_270_);
if (v___x_273_ == 0)
{
v_x_268_ = v_tail_271_;
goto _start;
}
else
{
return v___x_273_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Options_erase_spec__0___boxed(lean_object* v_x_275_){
_start:
{
uint8_t v_res_276_; lean_object* v_r_277_; 
v_res_276_ = l_List_any___at___00Lean_Options_erase_spec__0(v_x_275_);
lean_dec(v_x_275_);
v_r_277_ = lean_box(v_res_276_);
return v_r_277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_erase(lean_object* v_o_278_, lean_object* v_k_279_){
_start:
{
lean_object* v_map_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_290_; 
v_map_280_ = lean_ctor_get(v_o_278_, 0);
v_isSharedCheck_290_ = !lean_is_exclusive(v_o_278_);
if (v_isSharedCheck_290_ == 0)
{
v___x_282_ = v_o_278_;
v_isShared_283_ = v_isSharedCheck_290_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_map_280_);
lean_dec(v_o_278_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_290_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_285_; uint8_t v___x_286_; lean_object* v___x_288_; 
lean_inc(v_map_280_);
v___x_284_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_NameMap_erase_spec__0___redArg(v_k_279_, v_map_280_);
v___x_285_ = l_Lean_NameMap_keys___redArg(v_map_280_);
lean_dec(v_map_280_);
v___x_286_ = l_List_any___at___00Lean_Options_erase_spec__0(v___x_285_);
lean_dec(v___x_285_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_284_);
v___x_288_ = v___x_282_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v___x_284_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
lean_ctor_set_uint8(v___x_288_, sizeof(void*)*1, v___x_286_);
return v___x_288_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_erase___boxed(lean_object* v_o_291_, lean_object* v_k_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lean_Options_erase(v_o_291_, v_k_292_);
lean_dec(v_k_292_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_mergeBy(lean_object* v_f_294_, lean_object* v_o1_295_, lean_object* v_o2_296_){
_start:
{
lean_object* v_map_297_; uint8_t v_hasTrace_298_; lean_object* v_map_299_; uint8_t v_hasTrace_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_311_; 
v_map_297_ = lean_ctor_get(v_o1_295_, 0);
lean_inc(v_map_297_);
v_hasTrace_298_ = lean_ctor_get_uint8(v_o1_295_, sizeof(void*)*1);
lean_dec_ref(v_o1_295_);
v_map_299_ = lean_ctor_get(v_o2_296_, 0);
v_hasTrace_300_ = lean_ctor_get_uint8(v_o2_296_, sizeof(void*)*1);
v_isSharedCheck_311_ = !lean_is_exclusive(v_o2_296_);
if (v_isSharedCheck_311_ == 0)
{
v___x_302_ = v_o2_296_;
v_isShared_303_ = v_isSharedCheck_311_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_map_299_);
lean_dec(v_o2_296_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_311_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; 
v___x_304_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_mergeWith_spec__1_spec__1___redArg(v_f_294_, v_map_297_, v_map_299_);
if (v_hasTrace_298_ == 0)
{
lean_object* v___x_306_; 
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 0, v___x_304_);
v___x_306_ = v___x_302_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_304_);
lean_ctor_set_uint8(v_reuseFailAlloc_307_, sizeof(void*)*1, v_hasTrace_300_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
else
{
lean_object* v___x_309_; 
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 0, v___x_304_);
v___x_309_ = v___x_302_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_304_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_ctor_set_uint8(v___x_309_, sizeof(void*)*1, v_hasTrace_298_);
return v___x_309_;
}
}
}
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__12(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__10));
v___x_345_ = l_Lean_mkAtom(v___x_344_);
return v___x_345_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__13(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__12, &l_Lean_OptionDecl_declName___autoParam___closed__12_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__12);
v___x_347_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__5));
v___x_348_ = lean_array_push(v___x_347_, v___x_346_);
return v___x_348_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__18(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_357_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__17));
v___x_358_ = l_Lean_mkAtom(v___x_357_);
return v___x_358_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__19(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_359_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__18, &l_Lean_OptionDecl_declName___autoParam___closed__18_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__18);
v___x_360_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__5));
v___x_361_ = lean_array_push(v___x_360_, v___x_359_);
return v___x_361_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__20(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_362_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__19, &l_Lean_OptionDecl_declName___autoParam___closed__19_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__19);
v___x_363_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__16));
v___x_364_ = lean_box(2);
v___x_365_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v___x_363_);
lean_ctor_set(v___x_365_, 2, v___x_362_);
return v___x_365_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__21(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_366_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__20, &l_Lean_OptionDecl_declName___autoParam___closed__20_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__20);
v___x_367_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__13, &l_Lean_OptionDecl_declName___autoParam___closed__13_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__13);
v___x_368_ = lean_array_push(v___x_367_, v___x_366_);
return v___x_368_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__22(void){
_start:
{
lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_369_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__21, &l_Lean_OptionDecl_declName___autoParam___closed__21_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__21);
v___x_370_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__11));
v___x_371_ = lean_box(2);
v___x_372_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
lean_ctor_set(v___x_372_, 1, v___x_370_);
lean_ctor_set(v___x_372_, 2, v___x_369_);
return v___x_372_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__23(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_373_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__22, &l_Lean_OptionDecl_declName___autoParam___closed__22_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__22);
v___x_374_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__5));
v___x_375_ = lean_array_push(v___x_374_, v___x_373_);
return v___x_375_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__24(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_376_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__23, &l_Lean_OptionDecl_declName___autoParam___closed__23_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__23);
v___x_377_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__9));
v___x_378_ = lean_box(2);
v___x_379_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
lean_ctor_set(v___x_379_, 1, v___x_377_);
lean_ctor_set(v___x_379_, 2, v___x_376_);
return v___x_379_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__25(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_380_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__24, &l_Lean_OptionDecl_declName___autoParam___closed__24_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__24);
v___x_381_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__5));
v___x_382_ = lean_array_push(v___x_381_, v___x_380_);
return v___x_382_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__26(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_383_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__25, &l_Lean_OptionDecl_declName___autoParam___closed__25_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__25);
v___x_384_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__7));
v___x_385_ = lean_box(2);
v___x_386_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
lean_ctor_set(v___x_386_, 1, v___x_384_);
lean_ctor_set(v___x_386_, 2, v___x_383_);
return v___x_386_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__27(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_387_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__26, &l_Lean_OptionDecl_declName___autoParam___closed__26_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__26);
v___x_388_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__5));
v___x_389_ = lean_array_push(v___x_388_, v___x_387_);
return v___x_389_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam___closed__28(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_390_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__27, &l_Lean_OptionDecl_declName___autoParam___closed__27_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__27);
v___x_391_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__4));
v___x_392_ = lean_box(2);
v___x_393_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v___x_391_);
lean_ctor_set(v___x_393_, 2, v___x_390_);
return v___x_393_;
}
}
static lean_object* _init_l_Lean_OptionDecl_declName___autoParam(void){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__28, &l_Lean_OptionDecl_declName___autoParam___closed__28_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__28);
return v___x_394_;
}
}
static lean_object* _init_l_Lean_instInhabitedOptionDecl_default___closed__3(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_401_ = lean_box(0);
v___x_402_ = ((lean_object*)(l_Lean_instInhabitedOptionDeprecation_default___closed__0));
v___x_403_ = l_Lean_instInhabitedDataValue_default;
v___x_404_ = ((lean_object*)(l_Lean_instInhabitedOptionDecl_default___closed__2));
v___x_405_ = lean_box(0);
v___x_406_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
lean_ctor_set(v___x_406_, 1, v___x_404_);
lean_ctor_set(v___x_406_, 2, v___x_403_);
lean_ctor_set(v___x_406_, 3, v___x_402_);
lean_ctor_set(v___x_406_, 4, v___x_401_);
return v___x_406_;
}
}
static lean_object* _init_l_Lean_instInhabitedOptionDecl_default(void){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lean_obj_once(&l_Lean_instInhabitedOptionDecl_default___closed__3, &l_Lean_instInhabitedOptionDecl_default___closed__3_once, _init_l_Lean_instInhabitedOptionDecl_default___closed__3);
return v___x_407_;
}
}
static lean_object* _init_l_Lean_instInhabitedOptionDecl(void){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lean_instInhabitedOptionDecl_default;
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_OptionDecl_fullDescr(lean_object* v_self_414_){
_start:
{
lean_object* v_descr_416_; lean_object* v_name_419_; lean_object* v_descr_420_; lean_object* v___x_421_; uint8_t v___x_422_; 
v_name_419_ = lean_ctor_get(v_self_414_, 0);
lean_inc(v_name_419_);
v_descr_420_ = lean_ctor_get(v_self_414_, 3);
lean_inc_ref(v_descr_420_);
lean_dec_ref(v_self_414_);
v___x_421_ = ((lean_object*)(l_Lean_OptionDecl_fullDescr___closed__2));
v___x_422_ = l_Lean_Name_isPrefixOf(v___x_421_, v_name_419_);
lean_dec(v_name_419_);
if (v___x_422_ == 0)
{
return v_descr_420_;
}
else
{
lean_object* v___x_423_; lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_423_ = lean_string_utf8_byte_size(v_descr_420_);
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = lean_nat_dec_eq(v___x_423_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; lean_object* v_descr_427_; 
v___x_426_ = ((lean_object*)(l_Lean_OptionDecl_fullDescr___closed__3));
v_descr_427_ = lean_string_append(v_descr_420_, v___x_426_);
v_descr_416_ = v_descr_427_;
goto v___jp_415_;
}
else
{
v_descr_416_ = v_descr_420_;
goto v___jp_415_;
}
}
v___jp_415_:
{
lean_object* v___x_417_; lean_object* v_descr_418_; 
v___x_417_ = ((lean_object*)(l_Lean_OptionDecl_fullDescr___closed__0));
v_descr_418_ = lean_string_append(v_descr_416_, v___x_417_);
return v_descr_418_;
}
}
}
static lean_object* _init_l_Lean_instInhabitedOptionDecls(void){
_start:
{
lean_object* v___x_428_; 
v___x_428_ = lean_box(1);
return v___x_428_;
}
}
LEAN_EXPORT uint8_t l_Lean_OptionDecls_contains(lean_object* v_decls_429_, lean_object* v_name_430_){
_start:
{
uint8_t v___x_431_; 
v___x_431_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_name_430_, v_decls_429_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_OptionDecls_contains___boxed(lean_object* v_decls_432_, lean_object* v_name_433_){
_start:
{
uint8_t v_res_434_; lean_object* v_r_435_; 
v_res_434_ = l_Lean_OptionDecls_contains(v_decls_432_, v_name_433_);
lean_dec(v_name_433_);
lean_dec(v_decls_432_);
v_r_435_ = lean_box(v_res_434_);
return v_r_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_OptionDecls_insert(lean_object* v_decls_436_, lean_object* v_name_437_, lean_object* v_decl_438_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_437_, v_decl_438_, v_decls_436_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_OptionDecls_find_x3f(lean_object* v_decls_440_, lean_object* v_name_441_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_decls_440_, v_name_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_OptionDecls_find_x3f___boxed(lean_object* v_decls_443_, lean_object* v_name_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_OptionDecls_find_x3f(v_decls_443_, v_name_444_);
lean_dec(v_name_444_);
lean_dec(v_decls_443_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_OptionDecls_foldl___redArg(lean_object* v_f_446_, lean_object* v_init_447_, lean_object* v_decls_448_){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v_f_446_, v_init_447_, v_decls_448_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_OptionDecls_foldl(lean_object* v_00_u03c3_450_, lean_object* v_f_451_, lean_object* v_init_452_, lean_object* v_decls_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v_f_451_, v_init_452_, v_decls_453_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInOptionDeclsProdNameOptionDeclOfMonad___redArg___lam__0(lean_object* v_f_455_, lean_object* v_a_456_, lean_object* v_b_457_, lean_object* v_c_458_){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_459_, 0, v_a_456_);
lean_ctor_set(v___x_459_, 1, v_b_457_);
v___x_460_ = lean_apply_2(v_f_455_, v___x_459_, v_c_458_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInOptionDeclsProdNameOptionDeclOfMonad___redArg___lam__2(lean_object* v_inst_461_, lean_object* v_00_u03b2_462_, lean_object* v_decls_463_, lean_object* v_init_464_, lean_object* v_f_465_){
_start:
{
lean_object* v_toApplicative_466_; lean_object* v_toBind_467_; lean_object* v_toPure_468_; lean_object* v___f_469_; lean_object* v___x_470_; lean_object* v___f_471_; lean_object* v___x_472_; 
v_toApplicative_466_ = lean_ctor_get(v_inst_461_, 0);
v_toBind_467_ = lean_ctor_get(v_inst_461_, 1);
lean_inc(v_toBind_467_);
v_toPure_468_ = lean_ctor_get(v_toApplicative_466_, 1);
lean_inc(v_toPure_468_);
v___f_469_ = lean_alloc_closure((void*)(l_Lean_instForInOptionDeclsProdNameOptionDeclOfMonad___redArg___lam__0), 4, 1);
lean_closure_set(v___f_469_, 0, v_f_465_);
v___x_470_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_461_, v___f_469_, v_init_464_, v_decls_463_);
v___f_471_ = lean_alloc_closure((void*)(l_Lean_Options_instForInProdNameDataValueOfMonad___private__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_471_, 0, v_toPure_468_);
v___x_472_ = lean_apply_4(v_toBind_467_, lean_box(0), lean_box(0), v___x_470_, v___f_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInOptionDeclsProdNameOptionDeclOfMonad___redArg(lean_object* v_inst_473_){
_start:
{
lean_object* v___f_474_; 
v___f_474_ = lean_alloc_closure((void*)(l_Lean_instForInOptionDeclsProdNameOptionDeclOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_474_, 0, v_inst_473_);
return v___f_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_instForInOptionDeclsProdNameOptionDeclOfMonad(lean_object* v_m_475_, lean_object* v_inst_476_){
_start:
{
lean_object* v___f_477_; 
v___f_477_ = lean_alloc_closure((void*)(l_Lean_instForInOptionDeclsProdNameOptionDeclOfMonad___redArg___lam__2), 5, 1);
lean_closure_set(v___f_477_, 0, v_inst_476_);
return v___f_477_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_initFn_00___x40_Lean_Data_Options_1188237450____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_479_ = lean_box(1);
v___x_480_ = lean_st_mk_ref(v___x_479_);
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v___x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_initFn_00___x40_Lean_Data_Options_1188237450____hygCtx___hyg_2____boxed(lean_object* v___y_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l___private_Lean_Data_Options_0__Lean_initFn_00___x40_Lean_Data_Options_1188237450____hygCtx___hyg_2_();
return v_res_483_;
}
}
static lean_object* _init_l_Lean_registerOption___closed__1(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = ((lean_object*)(l_Lean_registerOption___closed__0));
v___x_486_ = lean_mk_io_user_error(v___x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* lean_register_option(lean_object* v_name_489_, lean_object* v_decl_490_){
_start:
{
uint8_t v___x_492_; 
v___x_492_ = l_Lean_initializing();
if (v___x_492_ == 0)
{
lean_object* v___x_493_; lean_object* v___x_494_; 
lean_dec_ref(v_decl_490_);
lean_dec(v_name_489_);
v___x_493_ = lean_obj_once(&l_Lean_registerOption___closed__1, &l_Lean_registerOption___closed__1_once, _init_l_Lean_registerOption___closed__1);
v___x_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
else
{
lean_object* v___x_495_; lean_object* v___x_496_; uint8_t v___x_497_; 
v___x_495_ = l___private_Lean_Data_Options_0__Lean_optionDeclsRef;
v___x_496_ = lean_st_ref_get(v___x_495_);
v___x_497_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_name_489_, v___x_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_498_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_489_, v_decl_490_, v___x_496_);
v___x_499_ = lean_box(0);
v___x_500_ = lean_st_ref_swap(v___x_495_, v___x_498_);
lean_dec(v___x_500_);
v___x_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_501_, 0, v___x_499_);
return v___x_501_;
}
else
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
lean_dec(v___x_496_);
lean_dec_ref(v_decl_490_);
v___x_502_ = ((lean_object*)(l_Lean_registerOption___closed__2));
v___x_503_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_489_, v___x_497_);
v___x_504_ = lean_string_append(v___x_502_, v___x_503_);
lean_dec_ref(v___x_503_);
v___x_505_ = ((lean_object*)(l_Lean_registerOption___closed__3));
v___x_506_ = lean_string_append(v___x_504_, v___x_505_);
v___x_507_ = lean_mk_io_user_error(v___x_506_);
v___x_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
return v___x_508_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerOption___boxed(lean_object* v_name_509_, lean_object* v_decl_510_, lean_object* v___y_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = lean_register_option(v_name_509_, v_decl_510_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_getOptionDecls(){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_514_ = l___private_Lean_Data_Options_0__Lean_optionDeclsRef;
v___x_515_ = lean_st_ref_get(v___x_514_);
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_getOptionDecls___boxed(lean_object* v___y_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lean_getOptionDecls();
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_getOptionDeclsArray___lam__0(lean_object* v_r_519_, lean_object* v_k_520_, lean_object* v_v_521_){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_522_, 0, v_k_520_);
lean_ctor_set(v___x_522_, 1, v_v_521_);
v___x_523_ = lean_array_push(v_r_519_, v___x_522_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* lean_get_option_decls_array(){
_start:
{
lean_object* v___f_528_; lean_object* v___x_529_; lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_539_; 
v___f_528_ = ((lean_object*)(l_Lean_getOptionDeclsArray___closed__0));
v___x_529_ = l_Lean_getOptionDecls();
v_a_530_ = lean_ctor_get(v___x_529_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_529_);
if (v_isSharedCheck_539_ == 0)
{
v___x_532_ = v___x_529_;
v_isShared_533_ = v_isSharedCheck_539_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_529_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_539_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_537_; 
v___x_534_ = ((lean_object*)(l_Lean_getOptionDeclsArray___closed__1));
v___x_535_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v___f_528_, v___x_534_, v_a_530_);
if (v_isShared_533_ == 0)
{
lean_ctor_set(v___x_532_, 0, v___x_535_);
v___x_537_ = v___x_532_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___x_535_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getOptionDeclsArray___boxed(lean_object* v___y_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = lean_get_option_decls_array();
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_getOptionDecl(lean_object* v_name_544_){
_start:
{
lean_object* v___x_546_; lean_object* v_a_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_566_; 
v___x_546_ = l_Lean_getOptionDecls();
v_a_547_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_566_ == 0)
{
v___x_549_ = v___x_546_;
v_isShared_550_ = v_isSharedCheck_566_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_a_547_);
lean_dec(v___x_546_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_566_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; 
v___x_551_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_547_, v_name_544_);
lean_dec(v_a_547_);
if (lean_obj_tag(v___x_551_) == 1)
{
lean_object* v_val_552_; lean_object* v___x_554_; 
lean_dec(v_name_544_);
v_val_552_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_val_552_);
lean_dec_ref_known(v___x_551_, 1);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 0, v_val_552_);
v___x_554_ = v___x_549_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_val_552_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
else
{
lean_object* v___x_556_; uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_564_; 
lean_dec(v___x_551_);
v___x_556_ = ((lean_object*)(l_Lean_getOptionDecl___closed__0));
v___x_557_ = 1;
v___x_558_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_544_, v___x_557_);
v___x_559_ = lean_string_append(v___x_556_, v___x_558_);
lean_dec_ref(v___x_558_);
v___x_560_ = ((lean_object*)(l_Lean_getOptionDecl___closed__1));
v___x_561_ = lean_string_append(v___x_559_, v___x_560_);
v___x_562_ = lean_mk_io_user_error(v___x_561_);
if (v_isShared_550_ == 0)
{
lean_ctor_set_tag(v___x_549_, 1);
lean_ctor_set(v___x_549_, 0, v___x_562_);
v___x_564_ = v___x_549_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getOptionDecl___boxed(lean_object* v_name_567_, lean_object* v___y_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lean_getOptionDecl(v_name_567_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_getOptionDefaultValue(lean_object* v_name_570_){
_start:
{
lean_object* v___x_572_; 
v___x_572_ = l_Lean_getOptionDecl(v_name_570_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_581_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_581_ == 0)
{
v___x_575_ = v___x_572_;
v_isShared_576_ = v_isSharedCheck_581_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_572_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_581_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v_defValue_577_; lean_object* v___x_579_; 
v_defValue_577_ = lean_ctor_get(v_a_573_, 2);
lean_inc_ref(v_defValue_577_);
lean_dec(v_a_573_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v_defValue_577_);
v___x_579_ = v___x_575_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v_defValue_577_);
v___x_579_ = v_reuseFailAlloc_580_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
return v___x_579_;
}
}
}
else
{
lean_object* v_a_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_589_; 
v_a_582_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_589_ == 0)
{
v___x_584_ = v___x_572_;
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_a_582_);
lean_dec(v___x_572_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_589_;
goto v_resetjp_583_;
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_a_582_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getOptionDefaultValue___boxed(lean_object* v_name_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_getOptionDefaultValue(v_name_590_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_getOptionDescr(lean_object* v_name_593_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Lean_getOptionDecl(v_name_593_);
if (lean_obj_tag(v___x_595_) == 0)
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_604_; 
v_a_596_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_604_ == 0)
{
v___x_598_ = v___x_595_;
v_isShared_599_ = v_isSharedCheck_604_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_595_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_604_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v_descr_600_; lean_object* v___x_602_; 
v_descr_600_ = lean_ctor_get(v_a_596_, 3);
lean_inc_ref(v_descr_600_);
lean_dec(v_a_596_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v_descr_600_);
v___x_602_ = v___x_598_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_descr_600_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
v_a_605_ = lean_ctor_get(v___x_595_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_595_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_595_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getOptionDescr___boxed(lean_object* v_name_613_, lean_object* v___y_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lean_getOptionDescr(v_name_613_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadOptionsOfMonadLift___redArg(lean_object* v_inst_616_, lean_object* v_inst_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = lean_apply_2(v_inst_616_, lean_box(0), v_inst_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadOptionsOfMonadLift(lean_object* v_m_619_, lean_object* v_n_620_, lean_object* v_inst_621_, lean_object* v_inst_622_){
_start:
{
lean_object* v___x_623_; 
v___x_623_ = lean_apply_2(v_inst_621_, lean_box(0), v_inst_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBoolOption___redArg___lam__0(lean_object* v_k_624_, lean_object* v_toPure_625_, uint8_t v_defValue_626_, lean_object* v_opts_627_){
_start:
{
lean_object* v_map_628_; lean_object* v___x_629_; 
v_map_628_ = lean_ctor_get(v_opts_627_, 0);
v___x_629_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_628_, v_k_624_);
if (lean_obj_tag(v___x_629_) == 0)
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_box(v_defValue_626_);
v___x_631_ = lean_apply_2(v_toPure_625_, lean_box(0), v___x_630_);
return v___x_631_;
}
else
{
lean_object* v_val_632_; 
v_val_632_ = lean_ctor_get(v___x_629_, 0);
lean_inc(v_val_632_);
lean_dec_ref_known(v___x_629_, 1);
if (lean_obj_tag(v_val_632_) == 1)
{
uint8_t v_v_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v_v_633_ = lean_ctor_get_uint8(v_val_632_, 0);
lean_dec_ref_known(v_val_632_, 0);
v___x_634_ = lean_box(v_v_633_);
v___x_635_ = lean_apply_2(v_toPure_625_, lean_box(0), v___x_634_);
return v___x_635_;
}
else
{
lean_object* v___x_636_; lean_object* v___x_637_; 
lean_dec(v_val_632_);
v___x_636_ = lean_box(v_defValue_626_);
v___x_637_ = lean_apply_2(v_toPure_625_, lean_box(0), v___x_636_);
return v___x_637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getBoolOption___redArg___lam__0___boxed(lean_object* v_k_638_, lean_object* v_toPure_639_, lean_object* v_defValue_640_, lean_object* v_opts_641_){
_start:
{
uint8_t v_defValue_boxed_642_; lean_object* v_res_643_; 
v_defValue_boxed_642_ = lean_unbox(v_defValue_640_);
v_res_643_ = l_Lean_getBoolOption___redArg___lam__0(v_k_638_, v_toPure_639_, v_defValue_boxed_642_, v_opts_641_);
lean_dec_ref(v_opts_641_);
lean_dec(v_k_638_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBoolOption___redArg(lean_object* v_inst_644_, lean_object* v_inst_645_, lean_object* v_k_646_, uint8_t v_defValue_647_){
_start:
{
lean_object* v_toApplicative_648_; lean_object* v_toBind_649_; lean_object* v_toPure_650_; lean_object* v___x_651_; lean_object* v___f_652_; lean_object* v___x_653_; 
v_toApplicative_648_ = lean_ctor_get(v_inst_644_, 0);
lean_inc_ref(v_toApplicative_648_);
v_toBind_649_ = lean_ctor_get(v_inst_644_, 1);
lean_inc(v_toBind_649_);
lean_dec_ref(v_inst_644_);
v_toPure_650_ = lean_ctor_get(v_toApplicative_648_, 1);
lean_inc(v_toPure_650_);
lean_dec_ref(v_toApplicative_648_);
v___x_651_ = lean_box(v_defValue_647_);
v___f_652_ = lean_alloc_closure((void*)(l_Lean_getBoolOption___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_652_, 0, v_k_646_);
lean_closure_set(v___f_652_, 1, v_toPure_650_);
lean_closure_set(v___f_652_, 2, v___x_651_);
v___x_653_ = lean_apply_4(v_toBind_649_, lean_box(0), lean_box(0), v_inst_645_, v___f_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBoolOption___redArg___boxed(lean_object* v_inst_654_, lean_object* v_inst_655_, lean_object* v_k_656_, lean_object* v_defValue_657_){
_start:
{
uint8_t v_defValue_boxed_658_; lean_object* v_res_659_; 
v_defValue_boxed_658_ = lean_unbox(v_defValue_657_);
v_res_659_ = l_Lean_getBoolOption___redArg(v_inst_654_, v_inst_655_, v_k_656_, v_defValue_boxed_658_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBoolOption(lean_object* v_m_660_, lean_object* v_inst_661_, lean_object* v_inst_662_, lean_object* v_k_663_, uint8_t v_defValue_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = l_Lean_getBoolOption___redArg(v_inst_661_, v_inst_662_, v_k_663_, v_defValue_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBoolOption___boxed(lean_object* v_m_666_, lean_object* v_inst_667_, lean_object* v_inst_668_, lean_object* v_k_669_, lean_object* v_defValue_670_){
_start:
{
uint8_t v_defValue_boxed_671_; lean_object* v_res_672_; 
v_defValue_boxed_671_ = lean_unbox(v_defValue_670_);
v_res_672_ = l_Lean_getBoolOption(v_m_666_, v_inst_667_, v_inst_668_, v_k_669_, v_defValue_boxed_671_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_getNatOption___redArg___lam__0(lean_object* v_k_673_, lean_object* v_toPure_674_, lean_object* v_defValue_675_, lean_object* v_opts_676_){
_start:
{
lean_object* v_map_677_; lean_object* v___x_678_; 
v_map_677_ = lean_ctor_get(v_opts_676_, 0);
v___x_678_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_677_, v_k_673_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v___x_679_; 
v___x_679_ = lean_apply_2(v_toPure_674_, lean_box(0), v_defValue_675_);
return v___x_679_;
}
else
{
lean_object* v_val_680_; 
v_val_680_ = lean_ctor_get(v___x_678_, 0);
lean_inc(v_val_680_);
lean_dec_ref_known(v___x_678_, 1);
if (lean_obj_tag(v_val_680_) == 3)
{
lean_object* v_v_681_; lean_object* v___x_682_; 
lean_dec(v_defValue_675_);
v_v_681_ = lean_ctor_get(v_val_680_, 0);
lean_inc(v_v_681_);
lean_dec_ref_known(v_val_680_, 1);
v___x_682_ = lean_apply_2(v_toPure_674_, lean_box(0), v_v_681_);
return v___x_682_;
}
else
{
lean_object* v___x_683_; 
lean_dec(v_val_680_);
v___x_683_ = lean_apply_2(v_toPure_674_, lean_box(0), v_defValue_675_);
return v___x_683_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getNatOption___redArg___lam__0___boxed(lean_object* v_k_684_, lean_object* v_toPure_685_, lean_object* v_defValue_686_, lean_object* v_opts_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lean_getNatOption___redArg___lam__0(v_k_684_, v_toPure_685_, v_defValue_686_, v_opts_687_);
lean_dec_ref(v_opts_687_);
lean_dec(v_k_684_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l_Lean_getNatOption___redArg(lean_object* v_inst_689_, lean_object* v_inst_690_, lean_object* v_k_691_, lean_object* v_defValue_692_){
_start:
{
lean_object* v_toApplicative_693_; lean_object* v_toBind_694_; lean_object* v_toPure_695_; lean_object* v___f_696_; lean_object* v___x_697_; 
v_toApplicative_693_ = lean_ctor_get(v_inst_689_, 0);
lean_inc_ref(v_toApplicative_693_);
v_toBind_694_ = lean_ctor_get(v_inst_689_, 1);
lean_inc(v_toBind_694_);
lean_dec_ref(v_inst_689_);
v_toPure_695_ = lean_ctor_get(v_toApplicative_693_, 1);
lean_inc(v_toPure_695_);
lean_dec_ref(v_toApplicative_693_);
v___f_696_ = lean_alloc_closure((void*)(l_Lean_getNatOption___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_696_, 0, v_k_691_);
lean_closure_set(v___f_696_, 1, v_toPure_695_);
lean_closure_set(v___f_696_, 2, v_defValue_692_);
v___x_697_ = lean_apply_4(v_toBind_694_, lean_box(0), lean_box(0), v_inst_690_, v___f_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_getNatOption(lean_object* v_m_698_, lean_object* v_inst_699_, lean_object* v_inst_700_, lean_object* v_k_701_, lean_object* v_defValue_702_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = l_Lean_getNatOption___redArg(v_inst_699_, v_inst_700_, v_k_701_, v_defValue_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadWithOptionsOfMonadFunctor___redArg___lam__0(lean_object* v_inst_704_, lean_object* v_f_705_, lean_object* v_00_u03b2_706_, lean_object* v___y_707_){
_start:
{
lean_object* v___x_708_; 
v___x_708_ = lean_apply_3(v_inst_704_, lean_box(0), v_f_705_, v___y_707_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadWithOptionsOfMonadFunctor___redArg___lam__1(lean_object* v_inst_709_, lean_object* v_inst_710_, lean_object* v_00_u03b1_711_, lean_object* v_f_712_, lean_object* v_x_713_){
_start:
{
lean_object* v___f_714_; lean_object* v___x_715_; 
v___f_714_ = lean_alloc_closure((void*)(l_Lean_instMonadWithOptionsOfMonadFunctor___redArg___lam__0), 4, 2);
lean_closure_set(v___f_714_, 0, v_inst_709_);
lean_closure_set(v___f_714_, 1, v_f_712_);
v___x_715_ = lean_apply_3(v_inst_710_, lean_box(0), v___f_714_, v_x_713_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadWithOptionsOfMonadFunctor___redArg(lean_object* v_inst_716_, lean_object* v_inst_717_){
_start:
{
lean_object* v___f_718_; 
v___f_718_ = lean_alloc_closure((void*)(l_Lean_instMonadWithOptionsOfMonadFunctor___redArg___lam__1), 5, 2);
lean_closure_set(v___f_718_, 0, v_inst_717_);
lean_closure_set(v___f_718_, 1, v_inst_716_);
return v___f_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadWithOptionsOfMonadFunctor(lean_object* v_m_719_, lean_object* v_n_720_, lean_object* v_inst_721_, lean_object* v_inst_722_){
_start:
{
lean_object* v___f_723_; 
v___f_723_ = lean_alloc_closure((void*)(l_Lean_instMonadWithOptionsOfMonadFunctor___redArg___lam__1), 5, 2);
lean_closure_set(v___f_723_, 0, v_inst_722_);
lean_closure_set(v___f_723_, 1, v_inst_721_);
return v___f_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_withInPattern___redArg___lam__0(lean_object* v___x_727_, lean_object* v_o_728_){
_start:
{
lean_object* v___x_729_; uint8_t v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_729_ = ((lean_object*)(l_Lean_withInPattern___redArg___lam__0___closed__1));
v___x_730_ = 1;
v___x_731_ = lean_box(v___x_730_);
v___x_732_ = l_Lean_Options_set___redArg(v___x_727_, v_o_728_, v___x_729_, v___x_731_);
return v___x_732_;
}
}
static lean_object* _init_l_Lean_withInPattern___redArg___closed__0(void){
_start:
{
lean_object* v___x_733_; lean_object* v___f_734_; 
v___x_733_ = l_Lean_KVMap_instValueBool;
v___f_734_ = lean_alloc_closure((void*)(l_Lean_withInPattern___redArg___lam__0), 2, 1);
lean_closure_set(v___f_734_, 0, v___x_733_);
return v___f_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_withInPattern___redArg(lean_object* v_inst_735_, lean_object* v_x_736_){
_start:
{
lean_object* v___f_737_; lean_object* v___x_738_; 
v___f_737_ = lean_obj_once(&l_Lean_withInPattern___redArg___closed__0, &l_Lean_withInPattern___redArg___closed__0_once, _init_l_Lean_withInPattern___redArg___closed__0);
v___x_738_ = lean_apply_3(v_inst_735_, lean_box(0), v___f_737_, v_x_736_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_withInPattern(lean_object* v_m_739_, lean_object* v_00_u03b1_740_, lean_object* v_inst_741_, lean_object* v_x_742_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l_Lean_withInPattern___redArg(v_inst_741_, v_x_742_);
return v___x_743_;
}
}
LEAN_EXPORT uint8_t l_Lean_Options_getInPattern(lean_object* v_o_744_){
_start:
{
lean_object* v_map_745_; lean_object* v___x_746_; uint8_t v___x_747_; lean_object* v___x_748_; 
v_map_745_ = lean_ctor_get(v_o_744_, 0);
v___x_746_ = ((lean_object*)(l_Lean_withInPattern___redArg___lam__0___closed__1));
v___x_747_ = 0;
v___x_748_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_745_, v___x_746_);
if (lean_obj_tag(v___x_748_) == 0)
{
return v___x_747_;
}
else
{
lean_object* v_val_749_; 
v_val_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_val_749_);
lean_dec_ref_known(v___x_748_, 1);
if (lean_obj_tag(v_val_749_) == 1)
{
uint8_t v_v_750_; 
v_v_750_ = lean_ctor_get_uint8(v_val_749_, 0);
lean_dec_ref_known(v_val_749_, 0);
return v_v_750_;
}
else
{
lean_dec(v_val_749_);
return v___x_747_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_getInPattern___boxed(lean_object* v_o_751_){
_start:
{
uint8_t v_res_752_; lean_object* v_r_753_; 
v_res_752_ = l_Lean_Options_getInPattern(v_o_751_);
lean_dec_ref(v_o_751_);
v_r_753_ = lean_box(v_res_752_);
return v_r_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedOption_default___redArg(lean_object* v_inst_754_){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_755_ = lean_box(0);
v___x_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
lean_ctor_set(v___x_756_, 1, v_inst_754_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedOption_default(lean_object* v_00_u03b1_757_, lean_object* v_inst_758_){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = l_Lean_instInhabitedOption_default___redArg(v_inst_758_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedOption___redArg(lean_object* v_inst_760_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lean_instInhabitedOption_default___redArg(v_inst_760_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedOption(lean_object* v_a_762_, lean_object* v_inst_763_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_Lean_instInhabitedOption_default___redArg(v_inst_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___redArg(lean_object* v_inst_765_, lean_object* v_opts_766_, lean_object* v_opt_767_){
_start:
{
lean_object* v_name_768_; lean_object* v_map_769_; lean_object* v_ofDataValue_x3f_770_; lean_object* v___x_771_; 
v_name_768_ = lean_ctor_get(v_opt_767_, 0);
v_map_769_ = lean_ctor_get(v_opts_766_, 0);
v_ofDataValue_x3f_770_ = lean_ctor_get(v_inst_765_, 1);
lean_inc_ref(v_ofDataValue_x3f_770_);
lean_dec_ref(v_inst_765_);
v___x_771_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_769_, v_name_768_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v___x_772_; 
lean_dec_ref(v_ofDataValue_x3f_770_);
v___x_772_ = lean_box(0);
return v___x_772_;
}
else
{
lean_object* v_val_773_; lean_object* v___x_774_; 
v_val_773_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_val_773_);
lean_dec_ref_known(v___x_771_, 1);
v___x_774_ = lean_apply_1(v_ofDataValue_x3f_770_, v_val_773_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___redArg___boxed(lean_object* v_inst_775_, lean_object* v_opts_776_, lean_object* v_opt_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lean_Option_get_x3f___redArg(v_inst_775_, v_opts_776_, v_opt_777_);
lean_dec_ref(v_opt_777_);
lean_dec_ref(v_opts_776_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f(lean_object* v_00_u03b1_779_, lean_object* v_inst_780_, lean_object* v_opts_781_, lean_object* v_opt_782_){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = l_Lean_Option_get_x3f___redArg(v_inst_780_, v_opts_781_, v_opt_782_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___boxed(lean_object* v_00_u03b1_784_, lean_object* v_inst_785_, lean_object* v_opts_786_, lean_object* v_opt_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lean_Option_get_x3f(v_00_u03b1_784_, v_inst_785_, v_opts_786_, v_opt_787_);
lean_dec_ref(v_opt_787_);
lean_dec_ref(v_opts_786_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___redArg(lean_object* v_inst_789_, lean_object* v_opts_790_, lean_object* v_opt_791_){
_start:
{
lean_object* v_name_792_; lean_object* v_defValue_793_; lean_object* v_map_794_; lean_object* v_ofDataValue_x3f_795_; lean_object* v___x_796_; 
v_name_792_ = lean_ctor_get(v_opt_791_, 0);
v_defValue_793_ = lean_ctor_get(v_opt_791_, 1);
v_map_794_ = lean_ctor_get(v_opts_790_, 0);
v_ofDataValue_x3f_795_ = lean_ctor_get(v_inst_789_, 1);
lean_inc_ref(v_ofDataValue_x3f_795_);
lean_dec_ref(v_inst_789_);
v___x_796_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_794_, v_name_792_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_dec_ref(v_ofDataValue_x3f_795_);
lean_inc(v_defValue_793_);
return v_defValue_793_;
}
else
{
lean_object* v_val_797_; lean_object* v___x_798_; 
v_val_797_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_val_797_);
lean_dec_ref_known(v___x_796_, 1);
v___x_798_ = lean_apply_1(v_ofDataValue_x3f_795_, v_val_797_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_inc(v_defValue_793_);
return v_defValue_793_;
}
else
{
lean_object* v_val_799_; 
v_val_799_ = lean_ctor_get(v___x_798_, 0);
lean_inc(v_val_799_);
lean_dec_ref_known(v___x_798_, 1);
return v_val_799_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___redArg___boxed(lean_object* v_inst_800_, lean_object* v_opts_801_, lean_object* v_opt_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lean_Option_get___redArg(v_inst_800_, v_opts_801_, v_opt_802_);
lean_dec_ref(v_opt_802_);
lean_dec_ref(v_opts_801_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get(lean_object* v_00_u03b1_804_, lean_object* v_inst_805_, lean_object* v_opts_806_, lean_object* v_opt_807_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_Option_get___redArg(v_inst_805_, v_opts_806_, v_opt_807_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___boxed(lean_object* v_00_u03b1_809_, lean_object* v_inst_810_, lean_object* v_opts_811_, lean_object* v_opt_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lean_Option_get(v_00_u03b1_809_, v_inst_810_, v_opts_811_, v_opt_812_);
lean_dec_ref(v_opt_812_);
lean_dec_ref(v_opts_811_);
return v_res_813_;
}
}
LEAN_EXPORT uint8_t lean_options_get_bool(lean_object* v_opts_814_, lean_object* v_name_815_, uint8_t v_defValue_816_){
_start:
{
lean_object* v_map_817_; lean_object* v___x_818_; 
v_map_817_ = lean_ctor_get(v_opts_814_, 0);
lean_inc(v_map_817_);
lean_dec_ref(v_opts_814_);
v___x_818_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_817_, v_name_815_);
lean_dec(v_name_815_);
lean_dec(v_map_817_);
if (lean_obj_tag(v___x_818_) == 0)
{
return v_defValue_816_;
}
else
{
lean_object* v_val_819_; 
v_val_819_ = lean_ctor_get(v___x_818_, 0);
lean_inc(v_val_819_);
lean_dec_ref_known(v___x_818_, 1);
if (lean_obj_tag(v_val_819_) == 1)
{
uint8_t v_v_820_; 
v_v_820_ = lean_ctor_get_uint8(v_val_819_, 0);
lean_dec_ref_known(v_val_819_, 0);
return v_v_820_;
}
else
{
lean_dec(v_val_819_);
return v_defValue_816_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Option_getBool___boxed(lean_object* v_opts_821_, lean_object* v_name_822_, lean_object* v_defValue_823_){
_start:
{
uint8_t v_defValue_boxed_824_; uint8_t v_res_825_; lean_object* v_r_826_; 
v_defValue_boxed_824_ = lean_unbox(v_defValue_823_);
v_res_825_ = lean_options_get_bool(v_opts_821_, v_name_822_, v_defValue_boxed_824_);
v_r_826_ = lean_box(v_res_825_);
return v_r_826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___redArg___lam__0(lean_object* v_inst_827_, lean_object* v_opt_828_, lean_object* v_toPure_829_, lean_object* v_____do__lift_830_){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = l_Lean_Option_get___redArg(v_inst_827_, v_____do__lift_830_, v_opt_828_);
v___x_832_ = lean_apply_2(v_toPure_829_, lean_box(0), v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___redArg___lam__0___boxed(lean_object* v_inst_833_, lean_object* v_opt_834_, lean_object* v_toPure_835_, lean_object* v_____do__lift_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lean_Option_getM___redArg___lam__0(v_inst_833_, v_opt_834_, v_toPure_835_, v_____do__lift_836_);
lean_dec_ref(v_____do__lift_836_);
lean_dec_ref(v_opt_834_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___redArg(lean_object* v_inst_838_, lean_object* v_inst_839_, lean_object* v_inst_840_, lean_object* v_opt_841_){
_start:
{
lean_object* v_toApplicative_842_; lean_object* v_toBind_843_; lean_object* v_toPure_844_; lean_object* v___f_845_; lean_object* v___x_846_; 
v_toApplicative_842_ = lean_ctor_get(v_inst_838_, 0);
lean_inc_ref(v_toApplicative_842_);
v_toBind_843_ = lean_ctor_get(v_inst_838_, 1);
lean_inc(v_toBind_843_);
lean_dec_ref(v_inst_838_);
v_toPure_844_ = lean_ctor_get(v_toApplicative_842_, 1);
lean_inc(v_toPure_844_);
lean_dec_ref(v_toApplicative_842_);
v___f_845_ = lean_alloc_closure((void*)(l_Lean_Option_getM___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_845_, 0, v_inst_840_);
lean_closure_set(v___f_845_, 1, v_opt_841_);
lean_closure_set(v___f_845_, 2, v_toPure_844_);
v___x_846_ = lean_apply_4(v_toBind_843_, lean_box(0), lean_box(0), v_inst_839_, v___f_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM(lean_object* v_m_847_, lean_object* v_00_u03b1_848_, lean_object* v_inst_849_, lean_object* v_inst_850_, lean_object* v_inst_851_, lean_object* v_opt_852_){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = l_Lean_Option_getM___redArg(v_inst_849_, v_inst_850_, v_inst_851_, v_opt_852_);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___redArg(lean_object* v_inst_854_, lean_object* v_opts_855_, lean_object* v_opt_856_, lean_object* v_val_857_){
_start:
{
lean_object* v_name_858_; lean_object* v___x_859_; 
v_name_858_ = lean_ctor_get(v_opt_856_, 0);
lean_inc(v_name_858_);
lean_dec_ref(v_opt_856_);
v___x_859_ = l_Lean_Options_set___redArg(v_inst_854_, v_opts_855_, v_name_858_, v_val_857_);
return v___x_859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set(lean_object* v_00_u03b1_860_, lean_object* v_inst_861_, lean_object* v_opts_862_, lean_object* v_opt_863_, lean_object* v_val_864_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = l_Lean_Option_set___redArg(v_inst_861_, v_opts_862_, v_opt_863_, v_val_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Data_Options_0__Lean_Option_updateBool_spec__0(lean_object* v_o_866_, lean_object* v_k_867_, uint8_t v_v_868_){
_start:
{
lean_object* v_map_869_; uint8_t v_hasTrace_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_884_; 
v_map_869_ = lean_ctor_get(v_o_866_, 0);
v_hasTrace_870_ = lean_ctor_get_uint8(v_o_866_, sizeof(void*)*1);
v_isSharedCheck_884_ = !lean_is_exclusive(v_o_866_);
if (v_isSharedCheck_884_ == 0)
{
v___x_872_ = v_o_866_;
v_isShared_873_ = v_isSharedCheck_884_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_map_869_);
lean_dec(v_o_866_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_884_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_874_, 0, v_v_868_);
lean_inc(v_k_867_);
v___x_875_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_867_, v___x_874_, v_map_869_);
if (v_hasTrace_870_ == 0)
{
lean_object* v___x_876_; uint8_t v___x_877_; lean_object* v___x_879_; 
v___x_876_ = ((lean_object*)(l_Lean_Options_insert___closed__1));
v___x_877_ = l_Lean_Name_isPrefixOf(v___x_876_, v_k_867_);
lean_dec(v_k_867_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 0, v___x_875_);
v___x_879_ = v___x_872_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_875_);
v___x_879_ = v_reuseFailAlloc_880_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_ctor_set_uint8(v___x_879_, sizeof(void*)*1, v___x_877_);
return v___x_879_;
}
}
else
{
lean_object* v___x_882_; 
lean_dec(v_k_867_);
if (v_isShared_873_ == 0)
{
lean_ctor_set(v___x_872_, 0, v___x_875_);
v___x_882_ = v___x_872_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v___x_875_);
lean_ctor_set_uint8(v_reuseFailAlloc_883_, sizeof(void*)*1, v_hasTrace_870_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00__private_Lean_Data_Options_0__Lean_Option_updateBool_spec__0___boxed(lean_object* v_o_885_, lean_object* v_k_886_, lean_object* v_v_887_){
_start:
{
uint8_t v_v_boxed_888_; lean_object* v_res_889_; 
v_v_boxed_888_ = lean_unbox(v_v_887_);
v_res_889_ = l_Lean_Options_set___at___00__private_Lean_Data_Options_0__Lean_Option_updateBool_spec__0(v_o_885_, v_k_886_, v_v_boxed_888_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* lean_options_update_bool(lean_object* v_opts_890_, lean_object* v_name_891_, uint8_t v_val_892_){
_start:
{
lean_object* v___x_893_; 
v___x_893_ = l_Lean_Options_set___at___00__private_Lean_Data_Options_0__Lean_Option_updateBool_spec__0(v_opts_890_, v_name_891_, v_val_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Option_updateBool___boxed(lean_object* v_opts_894_, lean_object* v_name_895_, lean_object* v_val_896_){
_start:
{
uint8_t v_val_boxed_897_; lean_object* v_res_898_; 
v_val_boxed_897_ = lean_unbox(v_val_896_);
v_res_898_ = lean_options_update_bool(v_opts_894_, v_name_895_, v_val_boxed_897_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet___redArg(lean_object* v_inst_899_, lean_object* v_opts_900_, lean_object* v_opt_901_, lean_object* v_val_902_){
_start:
{
lean_object* v_name_903_; lean_object* v_map_904_; uint8_t v___x_905_; 
v_name_903_ = lean_ctor_get(v_opt_901_, 0);
v_map_904_ = lean_ctor_get(v_opts_900_, 0);
v___x_905_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_name_903_, v_map_904_);
if (v___x_905_ == 0)
{
lean_object* v___x_906_; 
v___x_906_ = l_Lean_Option_set___redArg(v_inst_899_, v_opts_900_, v_opt_901_, v_val_902_);
return v___x_906_;
}
else
{
lean_dec(v_val_902_);
lean_dec_ref(v_opt_901_);
lean_dec_ref(v_inst_899_);
return v_opts_900_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_setIfNotSet(lean_object* v_00_u03b1_907_, lean_object* v_inst_908_, lean_object* v_opts_909_, lean_object* v_opt_910_, lean_object* v_val_911_){
_start:
{
lean_object* v___x_912_; 
v___x_912_ = l_Lean_Option_setIfNotSet___redArg(v_inst_908_, v_opts_909_, v_opt_910_, v_val_911_);
return v___x_912_;
}
}
static lean_object* _init_l_Lean_Option_register___auto__1(void){
_start:
{
lean_object* v___x_913_; 
v___x_913_ = lean_obj_once(&l_Lean_OptionDecl_declName___autoParam___closed__28, &l_Lean_OptionDecl_declName___autoParam___closed__28_once, _init_l_Lean_OptionDecl_declName___autoParam___closed__28);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___redArg(lean_object* v_inst_914_, lean_object* v_name_915_, lean_object* v_decl_916_, lean_object* v_ref_917_){
_start:
{
lean_object* v_toDataValue_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_948_; 
v_toDataValue_919_ = lean_ctor_get(v_inst_914_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v_inst_914_);
if (v_isSharedCheck_948_ == 0)
{
lean_object* v_unused_949_; 
v_unused_949_ = lean_ctor_get(v_inst_914_, 1);
lean_dec(v_unused_949_);
v___x_921_ = v_inst_914_;
v_isShared_922_ = v_isSharedCheck_948_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_toDataValue_919_);
lean_dec(v_inst_914_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_948_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v_defValue_923_; lean_object* v_descr_924_; lean_object* v_deprecation_x3f_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v_defValue_923_ = lean_ctor_get(v_decl_916_, 0);
lean_inc_n(v_defValue_923_, 2);
v_descr_924_ = lean_ctor_get(v_decl_916_, 1);
lean_inc_ref(v_descr_924_);
v_deprecation_x3f_925_ = lean_ctor_get(v_decl_916_, 2);
lean_inc(v_deprecation_x3f_925_);
lean_dec_ref(v_decl_916_);
v___x_926_ = lean_apply_1(v_toDataValue_919_, v_defValue_923_);
lean_inc_n(v_name_915_, 2);
v___x_927_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_927_, 0, v_name_915_);
lean_ctor_set(v___x_927_, 1, v_ref_917_);
lean_ctor_set(v___x_927_, 2, v___x_926_);
lean_ctor_set(v___x_927_, 3, v_descr_924_);
lean_ctor_set(v___x_927_, 4, v_deprecation_x3f_925_);
v___x_928_ = lean_register_option(v_name_915_, v___x_927_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_938_; 
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_938_ == 0)
{
lean_object* v_unused_939_; 
v_unused_939_ = lean_ctor_get(v___x_928_, 0);
lean_dec(v_unused_939_);
v___x_930_ = v___x_928_;
v_isShared_931_ = v_isSharedCheck_938_;
goto v_resetjp_929_;
}
else
{
lean_dec(v___x_928_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_938_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 1, v_defValue_923_);
lean_ctor_set(v___x_921_, 0, v_name_915_);
v___x_933_ = v___x_921_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_name_915_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v_defValue_923_);
v___x_933_ = v_reuseFailAlloc_937_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
lean_object* v___x_935_; 
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 0, v___x_933_);
v___x_935_ = v___x_930_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_933_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec(v_defValue_923_);
lean_del_object(v___x_921_);
lean_dec(v_name_915_);
v_a_940_ = lean_ctor_get(v___x_928_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_928_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_928_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___redArg___boxed(lean_object* v_inst_950_, lean_object* v_name_951_, lean_object* v_decl_952_, lean_object* v_ref_953_, lean_object* v___y_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_Lean_Option_register___redArg(v_inst_950_, v_name_951_, v_decl_952_, v_ref_953_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register(lean_object* v_00_u03b1_956_, lean_object* v_inst_957_, lean_object* v_name_958_, lean_object* v_decl_959_, lean_object* v_ref_960_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = l_Lean_Option_register___redArg(v_inst_957_, v_name_958_, v_decl_959_, v_ref_960_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___boxed(lean_object* v_00_u03b1_963_, lean_object* v_inst_964_, lean_object* v_name_965_, lean_object* v_decl_966_, lean_object* v_ref_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lean_Option_register(v_00_u03b1_963_, v_inst_964_, v_name_965_, v_decl_966_, v_ref_967_);
return v_res_969_;
}
}
static lean_object* _init_l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__6(void){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__5));
v___x_1058_ = l_String_toRawSubstring_x27(v___x_1057_);
return v___x_1058_;
}
}
static lean_object* _init_l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__17(void){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1078_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__16));
v___x_1079_ = l_String_toRawSubstring_x27(v___x_1078_);
return v___x_1079_;
}
}
static lean_object* _init_l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29(void){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = l_Array_mkArray0___redArg();
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1(lean_object* v_x_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; uint8_t v___x_1112_; 
v___x_1110_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__0));
v___x_1111_ = ((lean_object*)(l_Lean_Option_registerBuiltinOption___closed__2));
lean_inc(v_x_1107_);
v___x_1112_ = l_Lean_Syntax_isOfKind(v_x_1107_, v___x_1111_);
if (v___x_1112_ == 0)
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
lean_dec(v_x_1107_);
v___x_1113_ = lean_box(1);
v___x_1114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
lean_ctor_set(v___x_1114_, 1, v___y_1109_);
return v___x_1114_;
}
else
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v_name_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___y_1126_; lean_object* v___y_1127_; lean_object* v___y_1128_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1148_; lean_object* v___y_1149_; lean_object* v___y_1150_; lean_object* v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v___y_1214_; lean_object* v___y_1215_; lean_object* v___y_1216_; lean_object* v___y_1217_; lean_object* v___y_1218_; lean_object* v___y_1219_; lean_object* v___y_1220_; lean_object* v___y_1221_; lean_object* v___y_1222_; lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v___y_1232_; lean_object* v___y_1233_; lean_object* v___y_1249_; lean_object* v___x_1260_; 
v___x_1115_ = lean_unsigned_to_nat(0u);
v___x_1116_ = l_Lean_Syntax_getArg(v_x_1107_, v___x_1115_);
v___x_1117_ = lean_unsigned_to_nat(1u);
v___x_1118_ = l_Lean_Syntax_getArg(v_x_1107_, v___x_1117_);
v___x_1119_ = lean_unsigned_to_nat(3u);
v_name_1120_ = l_Lean_Syntax_getArg(v_x_1107_, v___x_1119_);
v___x_1121_ = lean_unsigned_to_nat(5u);
v___x_1122_ = l_Lean_Syntax_getArg(v_x_1107_, v___x_1121_);
v___x_1123_ = lean_unsigned_to_nat(7u);
v___x_1124_ = l_Lean_Syntax_getArg(v_x_1107_, v___x_1123_);
lean_dec(v_x_1107_);
v___x_1260_ = l_Lean_Syntax_getOptional_x3f(v___x_1118_);
lean_dec(v___x_1118_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v___x_1261_; 
v___x_1261_ = lean_box(0);
v___y_1249_ = v___x_1261_;
goto v___jp_1248_;
}
else
{
lean_object* v_val_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1269_; 
v_val_1262_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1264_ = v___x_1260_;
v_isShared_1265_ = v_isSharedCheck_1269_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_val_1262_);
lean_dec(v___x_1260_);
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
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v_val_1262_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
v___y_1249_ = v___x_1267_;
goto v___jp_1248_;
}
}
}
v___jp_1125_:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
lean_inc_n(v___y_1130_, 2);
lean_inc_n(v___y_1137_, 6);
v___x_1139_ = l_Lean_Syntax_node2(v___y_1137_, v___y_1130_, v___y_1138_, v___x_1124_);
v___x_1140_ = l_Lean_Syntax_node2(v___y_1137_, v___y_1131_, v___y_1127_, v___x_1139_);
v___x_1141_ = l_Lean_Syntax_node1(v___y_1137_, v___y_1126_, v___x_1140_);
v___x_1142_ = l_Lean_Syntax_node2(v___y_1137_, v___y_1129_, v___x_1141_, v___y_1133_);
v___x_1143_ = l_Lean_Syntax_node1(v___y_1137_, v___y_1130_, v___x_1142_);
v___x_1144_ = l_Lean_Syntax_node1(v___y_1137_, v___y_1132_, v___x_1143_);
lean_inc(v___y_1135_);
v___x_1145_ = l_Lean_Syntax_node4(v___y_1137_, v___y_1135_, v___y_1136_, v___y_1128_, v___y_1134_, v___x_1144_);
v___x_1146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1145_);
lean_ctor_set(v___x_1146_, 1, v___y_1109_);
return v___x_1146_;
}
v___jp_1147_:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_inc_ref(v___y_1155_);
v___x_1160_ = l_Array_append___redArg(v___y_1155_, v___y_1159_);
lean_dec_ref(v___y_1159_);
lean_inc_n(v___y_1150_, 3);
lean_inc_n(v___y_1158_, 12);
v___x_1161_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1161_, 0, v___y_1158_);
lean_ctor_set(v___x_1161_, 1, v___y_1150_);
lean_ctor_set(v___x_1161_, 2, v___x_1160_);
lean_inc_n(v___y_1154_, 5);
lean_inc(v___y_1149_);
v___x_1162_ = l_Lean_Syntax_node7(v___y_1158_, v___y_1149_, v___y_1153_, v___y_1154_, v___x_1161_, v___y_1154_, v___y_1154_, v___y_1154_, v___y_1154_);
v___x_1163_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__0));
lean_inc_ref(v___y_1148_);
lean_inc_ref_n(v___y_1152_, 6);
v___x_1164_ = l_Lean_Name_mkStr4(v___x_1110_, v___y_1152_, v___y_1148_, v___x_1163_);
v___x_1165_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__1));
v___x_1166_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1166_, 0, v___y_1158_);
lean_ctor_set(v___x_1166_, 1, v___x_1165_);
v___x_1167_ = l_Lean_Syntax_node1(v___y_1158_, v___x_1164_, v___x_1166_);
v___x_1168_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__14));
v___x_1169_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__2));
v___x_1170_ = l_Lean_Name_mkStr4(v___x_1110_, v___y_1152_, v___x_1168_, v___x_1169_);
v___x_1171_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__3));
v___x_1172_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___y_1158_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__4));
v___x_1174_ = l_Lean_Name_mkStr4(v___x_1110_, v___y_1152_, v___x_1168_, v___x_1173_);
v___x_1175_ = lean_obj_once(&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__6, &l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__6_once, _init_l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__6);
v___x_1176_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__7));
lean_inc_n(v___y_1151_, 2);
lean_inc_n(v___y_1157_, 2);
v___x_1177_ = l_Lean_addMacroScope(v___y_1157_, v___x_1176_, v___y_1151_);
v___x_1178_ = lean_box(0);
v___x_1179_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__11));
v___x_1180_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1180_, 0, v___y_1158_);
lean_ctor_set(v___x_1180_, 1, v___x_1175_);
lean_ctor_set(v___x_1180_, 2, v___x_1177_);
lean_ctor_set(v___x_1180_, 3, v___x_1179_);
v___x_1181_ = l_Lean_Syntax_node1(v___y_1158_, v___y_1150_, v___x_1122_);
lean_inc(v___x_1174_);
v___x_1182_ = l_Lean_Syntax_node2(v___y_1158_, v___x_1174_, v___x_1180_, v___x_1181_);
v___x_1183_ = l_Lean_Syntax_node2(v___y_1158_, v___x_1170_, v___x_1172_, v___x_1182_);
v___x_1184_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__12));
v___x_1185_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___y_1158_);
lean_ctor_set(v___x_1185_, 1, v___x_1184_);
lean_inc(v_name_1120_);
v___x_1186_ = l_Lean_Syntax_node3(v___y_1158_, v___y_1150_, v_name_1120_, v___x_1183_, v___x_1185_);
v___x_1187_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__13));
v___x_1188_ = l_Lean_Name_mkStr4(v___x_1110_, v___y_1152_, v___x_1168_, v___x_1187_);
v___x_1189_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__14));
v___x_1190_ = l_Lean_Name_mkStr4(v___x_1110_, v___y_1152_, v___x_1168_, v___x_1189_);
v___x_1191_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__15));
v___x_1192_ = l_Lean_Name_mkStr4(v___x_1110_, v___y_1152_, v___x_1168_, v___x_1191_);
v___x_1193_ = lean_obj_once(&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__17, &l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__17_once, _init_l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__17);
v___x_1194_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__19));
v___x_1195_ = l_Lean_addMacroScope(v___y_1157_, v___x_1194_, v___y_1151_);
v___x_1196_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__21));
v___x_1197_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1197_, 0, v___y_1158_);
lean_ctor_set(v___x_1197_, 1, v___x_1193_);
lean_ctor_set(v___x_1197_, 2, v___x_1195_);
lean_ctor_set(v___x_1197_, 3, v___x_1196_);
v___x_1198_ = l_Lean_TSyntax_getId(v_name_1120_);
lean_dec(v_name_1120_);
lean_inc(v___x_1198_);
v___x_1199_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_1178_, v___x_1198_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lean_quoteNameMk(v___x_1198_);
v___y_1126_ = v___x_1192_;
v___y_1127_ = v___x_1197_;
v___y_1128_ = v___x_1167_;
v___y_1129_ = v___x_1190_;
v___y_1130_ = v___y_1150_;
v___y_1131_ = v___x_1174_;
v___y_1132_ = v___x_1188_;
v___y_1133_ = v___y_1154_;
v___y_1134_ = v___x_1186_;
v___y_1135_ = v___y_1156_;
v___y_1136_ = v___x_1162_;
v___y_1137_ = v___y_1158_;
v___y_1138_ = v___x_1200_;
goto v___jp_1125_;
}
else
{
lean_object* v_val_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
lean_dec(v___x_1198_);
v_val_1201_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_val_1201_);
lean_dec_ref_known(v___x_1199_, 1);
v___x_1202_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__22));
lean_inc_ref(v___y_1152_);
v___x_1203_ = l_Lean_Name_mkStr4(v___x_1110_, v___y_1152_, v___x_1168_, v___x_1202_);
v___x_1204_ = ((lean_object*)(l_Lean_getOptionDecl___closed__1));
v___x_1205_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__23));
v___x_1206_ = lean_string_intercalate(v___x_1205_, v_val_1201_);
v___x_1207_ = lean_string_append(v___x_1204_, v___x_1206_);
lean_dec_ref(v___x_1206_);
v___x_1208_ = lean_box(2);
v___x_1209_ = l_Lean_Syntax_mkNameLit(v___x_1207_, v___x_1208_);
v___x_1210_ = lean_mk_empty_array_with_capacity(v___x_1117_);
v___x_1211_ = lean_array_push(v___x_1210_, v___x_1209_);
v___x_1212_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1208_);
lean_ctor_set(v___x_1212_, 1, v___x_1203_);
lean_ctor_set(v___x_1212_, 2, v___x_1211_);
v___y_1126_ = v___x_1192_;
v___y_1127_ = v___x_1197_;
v___y_1128_ = v___x_1167_;
v___y_1129_ = v___x_1190_;
v___y_1130_ = v___y_1150_;
v___y_1131_ = v___x_1174_;
v___y_1132_ = v___x_1188_;
v___y_1133_ = v___y_1154_;
v___y_1134_ = v___x_1186_;
v___y_1135_ = v___y_1156_;
v___y_1136_ = v___x_1162_;
v___y_1137_ = v___y_1158_;
v___y_1138_ = v___x_1212_;
goto v___jp_1125_;
}
}
v___jp_1213_:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
lean_inc_ref_n(v___y_1220_, 2);
v___x_1225_ = l_Array_append___redArg(v___y_1220_, v___y_1224_);
lean_dec_ref(v___y_1224_);
lean_inc_n(v___y_1216_, 2);
lean_inc_n(v___y_1223_, 2);
v___x_1226_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1226_, 0, v___y_1223_);
lean_ctor_set(v___x_1226_, 1, v___y_1216_);
lean_ctor_set(v___x_1226_, 2, v___x_1225_);
v___x_1227_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1227_, 0, v___y_1223_);
lean_ctor_set(v___x_1227_, 1, v___y_1216_);
lean_ctor_set(v___x_1227_, 2, v___y_1220_);
if (lean_obj_tag(v___y_1219_) == 1)
{
lean_object* v_val_1228_; lean_object* v___x_1229_; 
v_val_1228_ = lean_ctor_get(v___y_1219_, 0);
lean_inc(v_val_1228_);
lean_dec_ref_known(v___y_1219_, 1);
v___x_1229_ = l_Array_mkArray1___redArg(v_val_1228_);
v___y_1148_ = v___y_1214_;
v___y_1149_ = v___y_1215_;
v___y_1150_ = v___y_1216_;
v___y_1151_ = v___y_1217_;
v___y_1152_ = v___y_1218_;
v___y_1153_ = v___x_1226_;
v___y_1154_ = v___x_1227_;
v___y_1155_ = v___y_1220_;
v___y_1156_ = v___y_1221_;
v___y_1157_ = v___y_1222_;
v___y_1158_ = v___y_1223_;
v___y_1159_ = v___x_1229_;
goto v___jp_1147_;
}
else
{
lean_object* v___x_1230_; 
lean_dec(v___y_1219_);
v___x_1230_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__5));
v___y_1148_ = v___y_1214_;
v___y_1149_ = v___y_1215_;
v___y_1150_ = v___y_1216_;
v___y_1151_ = v___y_1217_;
v___y_1152_ = v___y_1218_;
v___y_1153_ = v___x_1226_;
v___y_1154_ = v___x_1227_;
v___y_1155_ = v___y_1220_;
v___y_1156_ = v___y_1221_;
v___y_1157_ = v___y_1222_;
v___y_1158_ = v___y_1223_;
v___y_1159_ = v___x_1230_;
goto v___jp_1147_;
}
}
v___jp_1231_:
{
lean_object* v_quotContext_1234_; lean_object* v_currMacroScope_1235_; lean_object* v_ref_1236_; uint8_t v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v_quotContext_1234_ = lean_ctor_get(v___y_1108_, 1);
v_currMacroScope_1235_ = lean_ctor_get(v___y_1108_, 2);
v_ref_1236_ = lean_ctor_get(v___y_1108_, 5);
v___x_1237_ = 0;
v___x_1238_ = l_Lean_SourceInfo_fromRef(v_ref_1236_, v___x_1237_);
v___x_1239_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__1));
v___x_1240_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__24));
v___x_1241_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__26));
v___x_1242_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__28));
v___x_1243_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__9));
v___x_1244_ = lean_obj_once(&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29, &l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29_once, _init_l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29);
if (lean_obj_tag(v___y_1233_) == 1)
{
lean_object* v_val_1245_; lean_object* v___x_1246_; 
v_val_1245_ = lean_ctor_get(v___y_1233_, 0);
lean_inc(v_val_1245_);
lean_dec_ref_known(v___y_1233_, 1);
v___x_1246_ = l_Array_mkArray1___redArg(v_val_1245_);
v___y_1214_ = v___x_1240_;
v___y_1215_ = v___x_1242_;
v___y_1216_ = v___x_1243_;
v___y_1217_ = v_currMacroScope_1235_;
v___y_1218_ = v___x_1239_;
v___y_1219_ = v___y_1232_;
v___y_1220_ = v___x_1244_;
v___y_1221_ = v___x_1241_;
v___y_1222_ = v_quotContext_1234_;
v___y_1223_ = v___x_1238_;
v___y_1224_ = v___x_1246_;
goto v___jp_1213_;
}
else
{
lean_object* v___x_1247_; 
lean_dec(v___y_1233_);
v___x_1247_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__5));
v___y_1214_ = v___x_1240_;
v___y_1215_ = v___x_1242_;
v___y_1216_ = v___x_1243_;
v___y_1217_ = v_currMacroScope_1235_;
v___y_1218_ = v___x_1239_;
v___y_1219_ = v___y_1232_;
v___y_1220_ = v___x_1244_;
v___y_1221_ = v___x_1241_;
v___y_1222_ = v_quotContext_1234_;
v___y_1223_ = v___x_1238_;
v___y_1224_ = v___x_1247_;
goto v___jp_1213_;
}
}
v___jp_1248_:
{
lean_object* v___x_1250_; 
v___x_1250_ = l_Lean_Syntax_getOptional_x3f(v___x_1116_);
lean_dec(v___x_1116_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v___x_1251_; 
v___x_1251_ = lean_box(0);
v___y_1232_ = v___y_1249_;
v___y_1233_ = v___x_1251_;
goto v___jp_1231_;
}
else
{
lean_object* v_val_1252_; lean_object* v___x_1254_; uint8_t v_isShared_1255_; uint8_t v_isSharedCheck_1259_; 
v_val_1252_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1259_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1254_ = v___x_1250_;
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
else
{
lean_inc(v_val_1252_);
lean_dec(v___x_1250_);
v___x_1254_ = lean_box(0);
v_isShared_1255_ = v_isSharedCheck_1259_;
goto v_resetjp_1253_;
}
v_resetjp_1253_:
{
lean_object* v___x_1257_; 
if (v_isShared_1255_ == 0)
{
v___x_1257_ = v___x_1254_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v_val_1252_);
v___x_1257_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
v___y_1232_ = v___y_1249_;
v___y_1233_ = v___x_1257_;
goto v___jp_1231_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___boxed(lean_object* v_x_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1(v_x_1270_, v___y_1271_, v___y_1272_);
lean_dec_ref(v___y_1271_);
return v_res_1273_;
}
}
static lean_object* _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__10(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1297_ = ((lean_object*)(l_Lean_instInhabitedOptionDeprecation_default___closed__0));
v___x_1298_ = l_String_toRawSubstring_x27(v___x_1297_);
return v___x_1298_;
}
}
static lean_object* _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__14(void){
_start:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1308_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__13));
v___x_1309_ = l_String_toRawSubstring_x27(v___x_1308_);
return v___x_1309_;
}
}
static lean_object* _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__30(void){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1347_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__29));
v___x_1348_ = l_String_toRawSubstring_x27(v___x_1347_);
return v___x_1348_;
}
}
static lean_object* _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__35));
v___x_1360_ = l_String_toRawSubstring_x27(v___x_1359_);
return v___x_1360_;
}
}
static lean_object* _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__42(void){
_start:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1373_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__41));
v___x_1374_ = l_String_toRawSubstring_x27(v___x_1373_);
return v___x_1374_;
}
}
static lean_object* _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__46(void){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1379_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__45));
v___x_1380_ = l_String_toRawSubstring_x27(v___x_1379_);
return v___x_1380_;
}
}
static lean_object* _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__49(void){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__48));
v___x_1385_ = l_String_toRawSubstring_x27(v___x_1384_);
return v___x_1385_;
}
}
static lean_object* _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__55(void){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__54));
v___x_1397_ = l_String_toRawSubstring_x27(v___x_1396_);
return v___x_1397_;
}
}
static lean_object* _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__67(void){
_start:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1428_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__66));
v___x_1429_ = l_String_toRawSubstring_x27(v___x_1428_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation(lean_object* v_attr_1450_, lean_object* v_type_1451_, lean_object* v_decl_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v___y_1456_; lean_object* v___y_1457_; lean_object* v_newName_1458_; lean_object* v_quotContext_1459_; lean_object* v_currMacroScope_1460_; lean_object* v_ref_1461_; lean_object* v___y_1462_; lean_object* v___y_1561_; lean_object* v___y_1562_; lean_object* v_text_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1616_; lean_object* v___y_1617_; lean_object* v_since_1618_; lean_object* v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1647_; lean_object* v___y_1648_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v___x_1666_; uint8_t v___x_1667_; 
v___x_1666_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__76));
lean_inc(v_attr_1450_);
v___x_1667_ = l_Lean_Syntax_isOfKind(v_attr_1450_, v___x_1666_);
if (v___x_1667_ == 0)
{
lean_object* v___x_1668_; 
lean_dec(v_type_1451_);
lean_dec(v_attr_1450_);
v___x_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1668_, 0, v_decl_1452_);
lean_ctor_set(v___x_1668_, 1, v___y_1454_);
return v___x_1668_;
}
else
{
lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___y_1672_; lean_object* v_text_x3f_1673_; lean_object* v___y_1674_; lean_object* v___y_1675_; lean_object* v_id_x3f_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___x_1693_; uint8_t v___x_1694_; 
v___x_1669_ = lean_unsigned_to_nat(0u);
v___x_1670_ = lean_unsigned_to_nat(1u);
v___x_1693_ = l_Lean_Syntax_getArg(v_attr_1450_, v___x_1670_);
v___x_1694_ = l_Lean_Syntax_isNone(v___x_1693_);
if (v___x_1694_ == 0)
{
uint8_t v___x_1695_; 
lean_inc(v___x_1693_);
v___x_1695_ = l_Lean_Syntax_matchesNull(v___x_1693_, v___x_1670_);
if (v___x_1695_ == 0)
{
lean_object* v___x_1696_; 
lean_dec(v___x_1693_);
lean_dec(v_type_1451_);
lean_dec(v_attr_1450_);
v___x_1696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1696_, 0, v_decl_1452_);
lean_ctor_set(v___x_1696_, 1, v___y_1454_);
return v___x_1696_;
}
else
{
lean_object* v_id_x3f_1697_; lean_object* v___x_1698_; 
v_id_x3f_1697_ = l_Lean_Syntax_getArg(v___x_1693_, v___x_1669_);
lean_dec(v___x_1693_);
v___x_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1698_, 0, v_id_x3f_1697_);
v_id_x3f_1682_ = v___x_1698_;
v___y_1683_ = v___y_1453_;
v___y_1684_ = v___y_1454_;
goto v___jp_1681_;
}
}
else
{
lean_object* v___x_1699_; 
lean_dec(v___x_1693_);
v___x_1699_ = lean_box(0);
v_id_x3f_1682_ = v___x_1699_;
v___y_1683_ = v___y_1453_;
v___y_1684_ = v___y_1454_;
goto v___jp_1681_;
}
v___jp_1671_:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; uint8_t v___x_1678_; 
v___x_1676_ = lean_unsigned_to_nat(3u);
v___x_1677_ = l_Lean_Syntax_getArg(v_attr_1450_, v___x_1676_);
v___x_1678_ = l_Lean_Syntax_isNone(v___x_1677_);
if (v___x_1678_ == 0)
{
uint8_t v___x_1679_; 
v___x_1679_ = l_Lean_Syntax_matchesNull(v___x_1677_, v___x_1670_);
if (v___x_1679_ == 0)
{
lean_object* v___x_1680_; 
lean_dec(v_text_x3f_1673_);
lean_dec(v___y_1672_);
lean_dec(v_type_1451_);
lean_dec(v_attr_1450_);
v___x_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1680_, 0, v_decl_1452_);
lean_ctor_set(v___x_1680_, 1, v___y_1675_);
return v___x_1680_;
}
else
{
v___y_1647_ = v___x_1676_;
v___y_1648_ = v_text_x3f_1673_;
v___y_1649_ = v___y_1672_;
v___y_1650_ = v___y_1674_;
v___y_1651_ = v___y_1675_;
goto v___jp_1646_;
}
}
else
{
lean_dec(v___x_1677_);
v___y_1647_ = v___x_1676_;
v___y_1648_ = v_text_x3f_1673_;
v___y_1649_ = v___y_1672_;
v___y_1650_ = v___y_1674_;
v___y_1651_ = v___y_1675_;
goto v___jp_1646_;
}
}
v___jp_1681_:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; uint8_t v___x_1687_; 
v___x_1685_ = lean_unsigned_to_nat(2u);
v___x_1686_ = l_Lean_Syntax_getArg(v_attr_1450_, v___x_1685_);
v___x_1687_ = l_Lean_Syntax_isNone(v___x_1686_);
if (v___x_1687_ == 0)
{
uint8_t v___x_1688_; 
lean_inc(v___x_1686_);
v___x_1688_ = l_Lean_Syntax_matchesNull(v___x_1686_, v___x_1670_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; 
lean_dec(v___x_1686_);
lean_dec(v_id_x3f_1682_);
lean_dec(v_type_1451_);
lean_dec(v_attr_1450_);
v___x_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1689_, 0, v_decl_1452_);
lean_ctor_set(v___x_1689_, 1, v___y_1684_);
return v___x_1689_;
}
else
{
lean_object* v_text_x3f_1690_; lean_object* v___x_1691_; 
v_text_x3f_1690_ = l_Lean_Syntax_getArg(v___x_1686_, v___x_1669_);
lean_dec(v___x_1686_);
v___x_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1691_, 0, v_text_x3f_1690_);
v___y_1672_ = v_id_x3f_1682_;
v_text_x3f_1673_ = v___x_1691_;
v___y_1674_ = v___y_1683_;
v___y_1675_ = v___y_1684_;
goto v___jp_1671_;
}
}
else
{
lean_object* v___x_1692_; 
lean_dec(v___x_1686_);
v___x_1692_ = lean_box(0);
v___y_1672_ = v_id_x3f_1682_;
v_text_x3f_1673_ = v___x_1692_;
v___y_1674_ = v___y_1683_;
v___y_1675_ = v___y_1684_;
goto v___jp_1671_;
}
}
}
v___jp_1455_:
{
uint8_t v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1463_ = 0;
v___x_1464_ = l_Lean_SourceInfo_fromRef(v_ref_1461_, v___x_1463_);
v___x_1465_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__1));
v___x_1466_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__2));
lean_inc_n(v___x_1464_, 48);
v___x_1467_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1464_);
lean_ctor_set(v___x_1467_, 1, v___x_1466_);
v___x_1468_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__9));
v___x_1469_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__4));
v___x_1470_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__6));
v___x_1471_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__7));
v___x_1472_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1472_, 0, v___x_1464_);
lean_ctor_set(v___x_1472_, 1, v___x_1471_);
v___x_1473_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__9));
v___x_1474_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__10, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__10_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__10);
v___x_1475_ = lean_box(0);
lean_inc_n(v_currMacroScope_1460_, 6);
lean_inc_n(v_quotContext_1459_, 6);
v___x_1476_ = l_Lean_addMacroScope(v_quotContext_1459_, v___x_1475_, v_currMacroScope_1460_);
v___x_1477_ = lean_box(0);
v___x_1478_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__11));
v___x_1479_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1464_);
lean_ctor_set(v___x_1479_, 1, v___x_1474_);
lean_ctor_set(v___x_1479_, 2, v___x_1476_);
lean_ctor_set(v___x_1479_, 3, v___x_1478_);
v___x_1480_ = l_Lean_Syntax_node1(v___x_1464_, v___x_1473_, v___x_1479_);
v___x_1481_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1470_, v___x_1472_, v___x_1480_);
v___x_1482_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__3));
v___x_1483_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1464_);
lean_ctor_set(v___x_1483_, 1, v___x_1482_);
v___x_1484_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12));
v___x_1485_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__14, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__14_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__14);
v___x_1486_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__16));
v___x_1487_ = l_Lean_addMacroScope(v_quotContext_1459_, v___x_1486_, v_currMacroScope_1460_);
v___x_1488_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__20));
v___x_1489_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1464_);
lean_ctor_set(v___x_1489_, 1, v___x_1485_);
lean_ctor_set(v___x_1489_, 2, v___x_1487_);
lean_ctor_set(v___x_1489_, 3, v___x_1488_);
v___x_1490_ = l_Lean_Syntax_node1(v___x_1464_, v___x_1468_, v_type_1451_);
v___x_1491_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1484_, v___x_1489_, v___x_1490_);
v___x_1492_ = l_Lean_Syntax_node1(v___x_1464_, v___x_1468_, v___x_1491_);
v___x_1493_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__21));
v___x_1494_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1464_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = l_Lean_Syntax_node5(v___x_1464_, v___x_1469_, v___x_1481_, v_decl_1452_, v___x_1483_, v___x_1492_, v___x_1494_);
v___x_1496_ = l_Lean_Syntax_node1(v___x_1464_, v___x_1468_, v___x_1495_);
v___x_1497_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__22));
v___x_1498_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1464_);
lean_ctor_set(v___x_1498_, 1, v___x_1497_);
v___x_1499_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1468_, v___x_1496_, v___x_1498_);
v___x_1500_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__24));
v___x_1501_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__26));
v___x_1502_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__28));
v___x_1503_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__30, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__30_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__30);
v___x_1504_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__31));
v___x_1505_ = l_Lean_addMacroScope(v_quotContext_1459_, v___x_1504_, v_currMacroScope_1460_);
v___x_1506_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1464_);
lean_ctor_set(v___x_1506_, 1, v___x_1503_);
lean_ctor_set(v___x_1506_, 2, v___x_1505_);
lean_ctor_set(v___x_1506_, 3, v___x_1477_);
v___x_1507_ = lean_obj_once(&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29, &l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29_once, _init_l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29);
v___x_1508_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1464_);
lean_ctor_set(v___x_1508_, 1, v___x_1468_);
lean_ctor_set(v___x_1508_, 2, v___x_1507_);
lean_inc_ref_n(v___x_1508_, 19);
v___x_1509_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1502_, v___x_1506_, v___x_1508_);
v___x_1510_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__33));
v___x_1511_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__34));
v___x_1512_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1464_);
lean_ctor_set(v___x_1512_, 1, v___x_1511_);
v___x_1513_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36);
v___x_1514_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__37));
v___x_1515_ = l_Lean_addMacroScope(v_quotContext_1459_, v___x_1514_, v_currMacroScope_1460_);
v___x_1516_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__40));
v___x_1517_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1464_);
lean_ctor_set(v___x_1517_, 1, v___x_1513_);
lean_ctor_set(v___x_1517_, 2, v___x_1515_);
lean_ctor_set(v___x_1517_, 3, v___x_1516_);
v___x_1518_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__42, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__42_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__42);
v___x_1519_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__43));
v___x_1520_ = l_Lean_addMacroScope(v_quotContext_1459_, v___x_1519_, v_currMacroScope_1460_);
v___x_1521_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1464_);
lean_ctor_set(v___x_1521_, 1, v___x_1518_);
lean_ctor_set(v___x_1521_, 2, v___x_1520_);
lean_ctor_set(v___x_1521_, 3, v___x_1477_);
v___x_1522_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1502_, v___x_1521_, v___x_1508_);
lean_inc_ref_n(v___x_1512_, 3);
v___x_1523_ = l_Lean_Syntax_node3(v___x_1464_, v___x_1510_, v___x_1512_, v___x_1508_, v___y_1456_);
v___x_1524_ = l_Lean_Syntax_node3(v___x_1464_, v___x_1468_, v___x_1508_, v___x_1508_, v___x_1523_);
v___x_1525_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1501_, v___x_1522_, v___x_1524_);
v___x_1526_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__44));
v___x_1527_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1464_);
lean_ctor_set(v___x_1527_, 1, v___x_1526_);
v___x_1528_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__46, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__46_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__46);
v___x_1529_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__47));
v___x_1530_ = l_Lean_addMacroScope(v_quotContext_1459_, v___x_1529_, v_currMacroScope_1460_);
v___x_1531_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1464_);
lean_ctor_set(v___x_1531_, 1, v___x_1528_);
lean_ctor_set(v___x_1531_, 2, v___x_1530_);
lean_ctor_set(v___x_1531_, 3, v___x_1477_);
v___x_1532_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1502_, v___x_1531_, v___x_1508_);
v___x_1533_ = l_Lean_Syntax_node3(v___x_1464_, v___x_1510_, v___x_1512_, v___x_1508_, v___y_1457_);
v___x_1534_ = l_Lean_Syntax_node3(v___x_1464_, v___x_1468_, v___x_1508_, v___x_1508_, v___x_1533_);
v___x_1535_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1501_, v___x_1532_, v___x_1534_);
v___x_1536_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__49, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__49_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__49);
v___x_1537_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__50));
v___x_1538_ = l_Lean_addMacroScope(v_quotContext_1459_, v___x_1537_, v_currMacroScope_1460_);
v___x_1539_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1464_);
lean_ctor_set(v___x_1539_, 1, v___x_1536_);
lean_ctor_set(v___x_1539_, 2, v___x_1538_);
lean_ctor_set(v___x_1539_, 3, v___x_1477_);
v___x_1540_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1502_, v___x_1539_, v___x_1508_);
v___x_1541_ = l_Lean_Syntax_node3(v___x_1464_, v___x_1510_, v___x_1512_, v___x_1508_, v_newName_1458_);
v___x_1542_ = l_Lean_Syntax_node3(v___x_1464_, v___x_1468_, v___x_1508_, v___x_1508_, v___x_1541_);
v___x_1543_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1501_, v___x_1540_, v___x_1542_);
lean_inc_ref(v___x_1527_);
v___x_1544_ = l_Lean_Syntax_node5(v___x_1464_, v___x_1468_, v___x_1525_, v___x_1527_, v___x_1535_, v___x_1527_, v___x_1543_);
v___x_1545_ = l_Lean_Syntax_node1(v___x_1464_, v___x_1500_, v___x_1544_);
v___x_1546_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__52));
v___x_1547_ = l_Lean_Syntax_node1(v___x_1464_, v___x_1546_, v___x_1508_);
v___x_1548_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__53));
v___x_1549_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1464_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
lean_inc_ref(v___x_1549_);
lean_inc(v___x_1547_);
lean_inc_ref(v___x_1467_);
v___x_1550_ = l_Lean_Syntax_node6(v___x_1464_, v___x_1465_, v___x_1467_, v___x_1508_, v___x_1545_, v___x_1547_, v___x_1508_, v___x_1549_);
v___x_1551_ = l_Lean_Syntax_node1(v___x_1464_, v___x_1468_, v___x_1550_);
v___x_1552_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1484_, v___x_1517_, v___x_1551_);
v___x_1553_ = l_Lean_Syntax_node3(v___x_1464_, v___x_1510_, v___x_1512_, v___x_1508_, v___x_1552_);
v___x_1554_ = l_Lean_Syntax_node3(v___x_1464_, v___x_1468_, v___x_1508_, v___x_1508_, v___x_1553_);
v___x_1555_ = l_Lean_Syntax_node2(v___x_1464_, v___x_1501_, v___x_1509_, v___x_1554_);
v___x_1556_ = l_Lean_Syntax_node1(v___x_1464_, v___x_1468_, v___x_1555_);
v___x_1557_ = l_Lean_Syntax_node1(v___x_1464_, v___x_1500_, v___x_1556_);
v___x_1558_ = l_Lean_Syntax_node6(v___x_1464_, v___x_1465_, v___x_1467_, v___x_1499_, v___x_1557_, v___x_1547_, v___x_1508_, v___x_1549_);
v___x_1559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
lean_ctor_set(v___x_1559_, 1, v___y_1462_);
return v___x_1559_;
}
v___jp_1560_:
{
if (lean_obj_tag(v___y_1562_) == 0)
{
lean_object* v_quotContext_1566_; lean_object* v_currMacroScope_1567_; lean_object* v_ref_1568_; uint8_t v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v_quotContext_1566_ = lean_ctor_get(v___y_1564_, 1);
v_currMacroScope_1567_ = lean_ctor_get(v___y_1564_, 2);
v_ref_1568_ = lean_ctor_get(v___y_1564_, 5);
v___x_1569_ = 0;
v___x_1570_ = l_Lean_SourceInfo_fromRef(v_ref_1568_, v___x_1569_);
v___x_1571_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__55, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__55_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__55);
v___x_1572_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__56));
lean_inc_n(v_currMacroScope_1567_, 2);
lean_inc_n(v_quotContext_1566_, 2);
v___x_1573_ = l_Lean_addMacroScope(v_quotContext_1566_, v___x_1572_, v_currMacroScope_1567_);
v___x_1574_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__59));
v___x_1575_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1570_);
lean_ctor_set(v___x_1575_, 1, v___x_1571_);
lean_ctor_set(v___x_1575_, 2, v___x_1573_);
lean_ctor_set(v___x_1575_, 3, v___x_1574_);
v___y_1456_ = v___y_1561_;
v___y_1457_ = v_text_1563_;
v_newName_1458_ = v___x_1575_;
v_quotContext_1459_ = v_quotContext_1566_;
v_currMacroScope_1460_ = v_currMacroScope_1567_;
v_ref_1461_ = v_ref_1568_;
v___y_1462_ = v___y_1565_;
goto v___jp_1455_;
}
else
{
lean_object* v_val_1576_; lean_object* v_quotContext_1577_; lean_object* v_currMacroScope_1578_; lean_object* v_ref_1579_; uint8_t v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
v_val_1576_ = lean_ctor_get(v___y_1562_, 0);
lean_inc(v_val_1576_);
lean_dec_ref_known(v___y_1562_, 1);
v_quotContext_1577_ = lean_ctor_get(v___y_1564_, 1);
v_currMacroScope_1578_ = lean_ctor_get(v___y_1564_, 2);
v_ref_1579_ = lean_ctor_get(v___y_1564_, 5);
v___x_1580_ = 0;
v___x_1581_ = l_Lean_SourceInfo_fromRef(v_ref_1579_, v___x_1580_);
v___x_1582_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12));
v___x_1583_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36);
v___x_1584_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__37));
lean_inc_n(v_currMacroScope_1578_, 4);
lean_inc_n(v_quotContext_1577_, 4);
v___x_1585_ = l_Lean_addMacroScope(v_quotContext_1577_, v___x_1584_, v_currMacroScope_1578_);
v___x_1586_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__61));
lean_inc_n(v___x_1581_, 11);
v___x_1587_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1587_, 0, v___x_1581_);
lean_ctor_set(v___x_1587_, 1, v___x_1583_);
lean_ctor_set(v___x_1587_, 2, v___x_1585_);
lean_ctor_set(v___x_1587_, 3, v___x_1586_);
v___x_1588_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__9));
v___x_1589_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__63));
v___x_1590_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__65));
v___x_1591_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__6));
v___x_1592_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__7));
v___x_1593_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1581_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__9));
v___x_1595_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__10, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__10_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__10);
v___x_1596_ = lean_box(0);
v___x_1597_ = l_Lean_addMacroScope(v_quotContext_1577_, v___x_1596_, v_currMacroScope_1578_);
v___x_1598_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__10));
v___x_1599_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1581_);
lean_ctor_set(v___x_1599_, 1, v___x_1595_);
lean_ctor_set(v___x_1599_, 2, v___x_1597_);
lean_ctor_set(v___x_1599_, 3, v___x_1598_);
v___x_1600_ = l_Lean_Syntax_node1(v___x_1581_, v___x_1594_, v___x_1599_);
v___x_1601_ = l_Lean_Syntax_node2(v___x_1581_, v___x_1591_, v___x_1593_, v___x_1600_);
v___x_1602_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__21));
v___x_1603_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1603_, 0, v___x_1581_);
lean_ctor_set(v___x_1603_, 1, v___x_1602_);
v___x_1604_ = l_Lean_Syntax_node3(v___x_1581_, v___x_1590_, v___x_1601_, v_val_1576_, v___x_1603_);
v___x_1605_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__23));
v___x_1606_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1581_);
lean_ctor_set(v___x_1606_, 1, v___x_1605_);
v___x_1607_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__67, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__67_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__67);
v___x_1608_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__68));
v___x_1609_ = l_Lean_addMacroScope(v_quotContext_1577_, v___x_1608_, v_currMacroScope_1578_);
v___x_1610_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__71));
v___x_1611_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1581_);
lean_ctor_set(v___x_1611_, 1, v___x_1607_);
lean_ctor_set(v___x_1611_, 2, v___x_1609_);
lean_ctor_set(v___x_1611_, 3, v___x_1610_);
v___x_1612_ = l_Lean_Syntax_node3(v___x_1581_, v___x_1589_, v___x_1604_, v___x_1606_, v___x_1611_);
v___x_1613_ = l_Lean_Syntax_node1(v___x_1581_, v___x_1588_, v___x_1612_);
v___x_1614_ = l_Lean_Syntax_node2(v___x_1581_, v___x_1582_, v___x_1587_, v___x_1613_);
v___y_1456_ = v___y_1561_;
v___y_1457_ = v_text_1563_;
v_newName_1458_ = v___x_1614_;
v_quotContext_1459_ = v_quotContext_1577_;
v_currMacroScope_1460_ = v_currMacroScope_1578_;
v_ref_1461_ = v_ref_1579_;
v___y_1462_ = v___y_1565_;
goto v___jp_1455_;
}
}
v___jp_1615_:
{
if (lean_obj_tag(v___y_1616_) == 0)
{
lean_object* v_quotContext_1621_; lean_object* v_currMacroScope_1622_; lean_object* v_ref_1623_; uint8_t v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v_quotContext_1621_ = lean_ctor_get(v___y_1619_, 1);
v_currMacroScope_1622_ = lean_ctor_get(v___y_1619_, 2);
v_ref_1623_ = lean_ctor_get(v___y_1619_, 5);
v___x_1624_ = 0;
v___x_1625_ = l_Lean_SourceInfo_fromRef(v_ref_1623_, v___x_1624_);
v___x_1626_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__55, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__55_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__55);
v___x_1627_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__56));
lean_inc(v_currMacroScope_1622_);
lean_inc(v_quotContext_1621_);
v___x_1628_ = l_Lean_addMacroScope(v_quotContext_1621_, v___x_1627_, v_currMacroScope_1622_);
v___x_1629_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__59));
v___x_1630_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1625_);
lean_ctor_set(v___x_1630_, 1, v___x_1626_);
lean_ctor_set(v___x_1630_, 2, v___x_1628_);
lean_ctor_set(v___x_1630_, 3, v___x_1629_);
v___y_1561_ = v_since_1618_;
v___y_1562_ = v___y_1617_;
v_text_1563_ = v___x_1630_;
v___y_1564_ = v___y_1619_;
v___y_1565_ = v___y_1620_;
goto v___jp_1560_;
}
else
{
lean_object* v_val_1631_; lean_object* v_quotContext_1632_; lean_object* v_currMacroScope_1633_; lean_object* v_ref_1634_; uint8_t v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v_val_1631_ = lean_ctor_get(v___y_1616_, 0);
lean_inc(v_val_1631_);
lean_dec_ref_known(v___y_1616_, 1);
v_quotContext_1632_ = lean_ctor_get(v___y_1619_, 1);
v_currMacroScope_1633_ = lean_ctor_get(v___y_1619_, 2);
v_ref_1634_ = lean_ctor_get(v___y_1619_, 5);
v___x_1635_ = 0;
v___x_1636_ = l_Lean_SourceInfo_fromRef(v_ref_1634_, v___x_1635_);
v___x_1637_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__12));
v___x_1638_ = lean_obj_once(&l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36, &l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36_once, _init_l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__36);
v___x_1639_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__37));
lean_inc(v_currMacroScope_1633_);
lean_inc(v_quotContext_1632_);
v___x_1640_ = l_Lean_addMacroScope(v_quotContext_1632_, v___x_1639_, v_currMacroScope_1633_);
v___x_1641_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__61));
lean_inc_n(v___x_1636_, 2);
v___x_1642_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1636_);
lean_ctor_set(v___x_1642_, 1, v___x_1638_);
lean_ctor_set(v___x_1642_, 2, v___x_1640_);
lean_ctor_set(v___x_1642_, 3, v___x_1641_);
v___x_1643_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__9));
v___x_1644_ = l_Lean_Syntax_node1(v___x_1636_, v___x_1643_, v_val_1631_);
v___x_1645_ = l_Lean_Syntax_node2(v___x_1636_, v___x_1637_, v___x_1642_, v___x_1644_);
v___y_1561_ = v_since_1618_;
v___y_1562_ = v___y_1617_;
v_text_1563_ = v___x_1645_;
v___y_1564_ = v___y_1619_;
v___y_1565_ = v___y_1620_;
goto v___jp_1560_;
}
}
v___jp_1646_:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; uint8_t v___x_1654_; 
v___x_1652_ = lean_unsigned_to_nat(4u);
v___x_1653_ = l_Lean_Syntax_getArg(v_attr_1450_, v___x_1652_);
lean_dec(v_attr_1450_);
v___x_1654_ = l_Lean_Syntax_isNone(v___x_1653_);
if (v___x_1654_ == 0)
{
lean_object* v___x_1655_; uint8_t v___x_1656_; 
v___x_1655_ = lean_unsigned_to_nat(5u);
lean_inc(v___x_1653_);
v___x_1656_ = l_Lean_Syntax_matchesNull(v___x_1653_, v___x_1655_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; 
lean_dec(v___x_1653_);
lean_dec(v___y_1649_);
lean_dec(v___y_1648_);
lean_dec(v_type_1451_);
v___x_1657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1657_, 0, v_decl_1452_);
lean_ctor_set(v___x_1657_, 1, v___y_1651_);
return v___x_1657_;
}
else
{
lean_object* v___x_1658_; 
v___x_1658_ = l_Lean_Syntax_getArg(v___x_1653_, v___y_1647_);
lean_dec(v___x_1653_);
v___y_1616_ = v___y_1648_;
v___y_1617_ = v___y_1649_;
v_since_1618_ = v___x_1658_;
v___y_1619_ = v___y_1650_;
v___y_1620_ = v___y_1651_;
goto v___jp_1615_;
}
}
else
{
lean_object* v_ref_1659_; uint8_t v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
lean_dec(v___x_1653_);
v_ref_1659_ = lean_ctor_get(v___y_1650_, 5);
v___x_1660_ = 0;
v___x_1661_ = l_Lean_SourceInfo_fromRef(v_ref_1659_, v___x_1660_);
v___x_1662_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__73));
v___x_1663_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__74));
lean_inc(v___x_1661_);
v___x_1664_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1661_);
lean_ctor_set(v___x_1664_, 1, v___x_1663_);
v___x_1665_ = l_Lean_Syntax_node1(v___x_1661_, v___x_1662_, v___x_1664_);
v___y_1616_ = v___y_1648_;
v___y_1617_ = v___y_1649_;
v_since_1618_ = v___x_1665_;
v___y_1619_ = v___y_1650_;
v___y_1620_ = v___y_1651_;
goto v___jp_1615_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___boxed(lean_object* v_attr_1700_, lean_object* v_type_1701_, lean_object* v_decl_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation(v_attr_1700_, v_type_1701_, v_decl_1702_, v___y_1703_, v___y_1704_);
lean_dec_ref(v___y_1703_);
return v_res_1705_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__0(lean_object* v_x_1747_){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; uint8_t v___x_1750_; 
v___x_1748_ = l_Lean_Syntax_getId(v_x_1747_);
v___x_1749_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__31));
v___x_1750_ = lean_name_eq(v___x_1748_, v___x_1749_);
lean_dec(v___x_1748_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__0___boxed(lean_object* v_x_1751_){
_start:
{
uint8_t v_res_1752_; lean_object* v_r_1753_; 
v_res_1752_ = l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__0(v_x_1751_);
lean_dec(v_x_1751_);
v_r_1753_ = lean_box(v_res_1752_);
return v_r_1753_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__1(lean_object* v___x_1754_, lean_object* v_x_1755_){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; uint8_t v___x_1758_; 
v___x_1756_ = ((lean_object*)(l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation___closed__75));
v___x_1757_ = l_Lean_Name_mkStr2(v___x_1754_, v___x_1756_);
v___x_1758_ = l_Lean_Syntax_isOfKind(v_x_1755_, v___x_1757_);
lean_dec(v___x_1757_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__1___boxed(lean_object* v___x_1759_, lean_object* v_x_1760_){
_start:
{
uint8_t v_res_1761_; lean_object* v_r_1762_; 
v_res_1761_ = l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__1(v___x_1759_, v_x_1760_);
v_r_1762_ = lean_box(v_res_1761_);
return v_r_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__2(lean_object* v___x_1763_, lean_object* v___x_1764_, lean_object* v___x_1765_, lean_object* v___x_1766_, lean_object* v_type_1767_, lean_object* v_name_1768_, lean_object* v___x_1769_, lean_object* v_decl_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
lean_object* v_quotContext_1773_; lean_object* v_currMacroScope_1774_; lean_object* v_ref_1775_; uint8_t v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___y_1821_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v_quotContext_1773_ = lean_ctor_get(v___y_1771_, 1);
v_currMacroScope_1774_ = lean_ctor_get(v___y_1771_, 2);
v_ref_1775_ = lean_ctor_get(v___y_1771_, 5);
v___x_1776_ = 0;
v___x_1777_ = l_Lean_SourceInfo_fromRef(v_ref_1775_, v___x_1776_);
v___x_1778_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__25));
lean_inc_ref(v___x_1765_);
lean_inc_ref_n(v___x_1764_, 7);
lean_inc_ref_n(v___x_1763_, 9);
v___x_1779_ = l_Lean_Name_mkStr4(v___x_1763_, v___x_1764_, v___x_1765_, v___x_1778_);
v___x_1780_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__0));
v___x_1781_ = l_Lean_Name_mkStr4(v___x_1763_, v___x_1764_, v___x_1765_, v___x_1780_);
lean_inc_n(v___x_1777_, 10);
v___x_1782_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1777_);
lean_ctor_set(v___x_1782_, 1, v___x_1778_);
v___x_1783_ = l_Lean_Syntax_node1(v___x_1777_, v___x_1781_, v___x_1782_);
v___x_1784_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__9));
v___x_1785_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__14));
v___x_1786_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__2));
v___x_1787_ = l_Lean_Name_mkStr4(v___x_1763_, v___x_1764_, v___x_1785_, v___x_1786_);
v___x_1788_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__3));
v___x_1789_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1777_);
lean_ctor_set(v___x_1789_, 1, v___x_1788_);
v___x_1790_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__4));
v___x_1791_ = l_Lean_Name_mkStr4(v___x_1763_, v___x_1764_, v___x_1785_, v___x_1790_);
v___x_1792_ = lean_obj_once(&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__6, &l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__6_once, _init_l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__6);
lean_inc_ref(v___x_1766_);
v___x_1793_ = l_Lean_Name_mkStr2(v___x_1763_, v___x_1766_);
lean_inc_n(v_currMacroScope_1774_, 2);
lean_inc_n(v___x_1793_, 2);
lean_inc_n(v_quotContext_1773_, 2);
v___x_1794_ = l_Lean_addMacroScope(v_quotContext_1773_, v___x_1793_, v_currMacroScope_1774_);
v___x_1795_ = lean_box(0);
v___x_1796_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1793_);
lean_ctor_set(v___x_1796_, 1, v___x_1795_);
v___x_1797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1793_);
v___x_1798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1797_);
lean_ctor_set(v___x_1798_, 1, v___x_1795_);
v___x_1799_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1796_);
lean_ctor_set(v___x_1799_, 1, v___x_1798_);
v___x_1800_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1777_);
lean_ctor_set(v___x_1800_, 1, v___x_1792_);
lean_ctor_set(v___x_1800_, 2, v___x_1794_);
lean_ctor_set(v___x_1800_, 3, v___x_1799_);
v___x_1801_ = l_Lean_Syntax_node1(v___x_1777_, v___x_1784_, v_type_1767_);
lean_inc(v___x_1791_);
v___x_1802_ = l_Lean_Syntax_node2(v___x_1777_, v___x_1791_, v___x_1800_, v___x_1801_);
v___x_1803_ = l_Lean_Syntax_node2(v___x_1777_, v___x_1787_, v___x_1789_, v___x_1802_);
v___x_1804_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__12));
v___x_1805_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1805_, 0, v___x_1777_);
lean_ctor_set(v___x_1805_, 1, v___x_1804_);
lean_inc(v_name_1768_);
v___x_1806_ = l_Lean_Syntax_node3(v___x_1777_, v___x_1784_, v_name_1768_, v___x_1803_, v___x_1805_);
v___x_1807_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__13));
v___x_1808_ = l_Lean_Name_mkStr4(v___x_1763_, v___x_1764_, v___x_1785_, v___x_1807_);
v___x_1809_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__14));
v___x_1810_ = l_Lean_Name_mkStr4(v___x_1763_, v___x_1764_, v___x_1785_, v___x_1809_);
v___x_1811_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__15));
v___x_1812_ = l_Lean_Name_mkStr4(v___x_1763_, v___x_1764_, v___x_1785_, v___x_1811_);
v___x_1813_ = lean_obj_once(&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__17, &l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__17_once, _init_l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__17);
v___x_1814_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__18));
v___x_1815_ = l_Lean_Name_mkStr3(v___x_1763_, v___x_1766_, v___x_1814_);
lean_inc(v___x_1815_);
v___x_1816_ = l_Lean_addMacroScope(v_quotContext_1773_, v___x_1815_, v_currMacroScope_1774_);
v___x_1817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1815_);
lean_ctor_set(v___x_1817_, 1, v___x_1795_);
v___x_1818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1817_);
lean_ctor_set(v___x_1818_, 1, v___x_1795_);
v___x_1819_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1777_);
lean_ctor_set(v___x_1819_, 1, v___x_1813_);
lean_ctor_set(v___x_1819_, 2, v___x_1816_);
lean_ctor_set(v___x_1819_, 3, v___x_1818_);
v___x_1832_ = l_Lean_TSyntax_getId(v_name_1768_);
lean_dec(v_name_1768_);
lean_inc(v___x_1832_);
v___x_1833_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_1795_, v___x_1832_);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v___x_1834_; 
lean_dec_ref(v___x_1764_);
lean_dec_ref(v___x_1763_);
v___x_1834_ = l_Lean_quoteNameMk(v___x_1832_);
v___y_1821_ = v___x_1834_;
goto v___jp_1820_;
}
else
{
lean_object* v_val_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
lean_dec(v___x_1832_);
v_val_1835_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_val_1835_);
lean_dec_ref_known(v___x_1833_, 1);
v___x_1836_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__22));
v___x_1837_ = l_Lean_Name_mkStr4(v___x_1763_, v___x_1764_, v___x_1785_, v___x_1836_);
v___x_1838_ = ((lean_object*)(l_Lean_getOptionDecl___closed__1));
v___x_1839_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__23));
v___x_1840_ = lean_string_intercalate(v___x_1839_, v_val_1835_);
v___x_1841_ = lean_string_append(v___x_1838_, v___x_1840_);
lean_dec_ref(v___x_1840_);
v___x_1842_ = lean_box(2);
v___x_1843_ = l_Lean_Syntax_mkNameLit(v___x_1841_, v___x_1842_);
v___x_1844_ = lean_unsigned_to_nat(1u);
v___x_1845_ = lean_mk_empty_array_with_capacity(v___x_1844_);
v___x_1846_ = lean_array_push(v___x_1845_, v___x_1843_);
v___x_1847_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1842_);
lean_ctor_set(v___x_1847_, 1, v___x_1837_);
lean_ctor_set(v___x_1847_, 2, v___x_1846_);
v___y_1821_ = v___x_1847_;
goto v___jp_1820_;
}
v___jp_1820_:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_inc_n(v___x_1777_, 7);
v___x_1822_ = l_Lean_Syntax_node2(v___x_1777_, v___x_1784_, v___y_1821_, v_decl_1770_);
v___x_1823_ = l_Lean_Syntax_node2(v___x_1777_, v___x_1791_, v___x_1819_, v___x_1822_);
v___x_1824_ = l_Lean_Syntax_node1(v___x_1777_, v___x_1812_, v___x_1823_);
v___x_1825_ = lean_obj_once(&l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29, &l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29_once, _init_l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__29);
v___x_1826_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1826_, 0, v___x_1777_);
lean_ctor_set(v___x_1826_, 1, v___x_1784_);
lean_ctor_set(v___x_1826_, 2, v___x_1825_);
v___x_1827_ = l_Lean_Syntax_node2(v___x_1777_, v___x_1810_, v___x_1824_, v___x_1826_);
v___x_1828_ = l_Lean_Syntax_node1(v___x_1777_, v___x_1784_, v___x_1827_);
v___x_1829_ = l_Lean_Syntax_node1(v___x_1777_, v___x_1808_, v___x_1828_);
v___x_1830_ = l_Lean_Syntax_node4(v___x_1777_, v___x_1779_, v___x_1769_, v___x_1783_, v___x_1806_, v___x_1829_);
v___x_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1830_);
lean_ctor_set(v___x_1831_, 1, v___y_1772_);
return v___x_1831_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__2___boxed(lean_object* v___x_1848_, lean_object* v___x_1849_, lean_object* v___x_1850_, lean_object* v___x_1851_, lean_object* v_type_1852_, lean_object* v_name_1853_, lean_object* v___x_1854_, lean_object* v_decl_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__2(v___x_1848_, v___x_1849_, v___x_1850_, v___x_1851_, v_type_1852_, v_name_1853_, v___x_1854_, v_decl_1855_, v___y_1856_, v___y_1857_);
lean_dec_ref(v___y_1856_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1(lean_object* v_x_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
lean_object* v___y_1868_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; uint8_t v___x_1890_; 
v___x_1887_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__0));
v___x_1888_ = ((lean_object*)(l_Lean_Option_registerBuiltinOption___closed__0));
v___x_1889_ = ((lean_object*)(l_Lean_Option_registerOption___closed__1));
lean_inc(v_x_1864_);
v___x_1890_ = l_Lean_Syntax_isOfKind(v_x_1864_, v___x_1889_);
if (v___x_1890_ == 0)
{
lean_object* v___x_1891_; lean_object* v___x_1892_; 
lean_dec(v_x_1864_);
v___x_1891_ = lean_box(1);
v___x_1892_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
lean_ctor_set(v___x_1892_, 1, v___y_1866_);
return v___x_1892_;
}
else
{
lean_object* v___f_1893_; lean_object* v___f_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v_name_1898_; lean_object* v___x_1899_; lean_object* v_type_1900_; lean_object* v___x_1901_; lean_object* v_decl_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v_attr_x3f_1905_; lean_object* v_field_x3f_1906_; 
v___f_1893_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__0));
v___f_1894_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__1));
v___x_1895_ = lean_unsigned_to_nat(0u);
v___x_1896_ = l_Lean_Syntax_getArg(v_x_1864_, v___x_1895_);
v___x_1897_ = lean_unsigned_to_nat(2u);
v_name_1898_ = l_Lean_Syntax_getArg(v_x_1864_, v___x_1897_);
v___x_1899_ = lean_unsigned_to_nat(4u);
v_type_1900_ = l_Lean_Syntax_getArg(v_x_1864_, v___x_1899_);
v___x_1901_ = lean_unsigned_to_nat(6u);
v_decl_1902_ = l_Lean_Syntax_getArg(v_x_1864_, v___x_1901_);
lean_dec(v_x_1864_);
v___x_1903_ = ((lean_object*)(l_Lean_OptionDecl_declName___autoParam___closed__1));
v___x_1904_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerBuiltinOption__1___closed__24));
lean_inc(v___x_1896_);
v_attr_x3f_1905_ = l_Lean_Syntax_find_x3f(v___x_1896_, v___f_1894_);
lean_inc(v_decl_1902_);
v_field_x3f_1906_ = l_Lean_Syntax_find_x3f(v_decl_1902_, v___f_1893_);
if (lean_obj_tag(v_attr_x3f_1905_) == 0)
{
if (lean_obj_tag(v_field_x3f_1906_) == 0)
{
lean_object* v___x_1907_; 
v___x_1907_ = l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__2(v___x_1887_, v___x_1903_, v___x_1904_, v___x_1888_, v_type_1900_, v_name_1898_, v___x_1896_, v_decl_1902_, v___y_1865_, v___y_1866_);
v___y_1868_ = v___x_1907_;
goto v___jp_1867_;
}
else
{
lean_object* v_val_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; 
lean_dec(v_decl_1902_);
v_val_1908_ = lean_ctor_get(v_field_x3f_1906_, 0);
lean_inc(v_val_1908_);
lean_dec_ref_known(v_field_x3f_1906_, 1);
v___x_1909_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__2));
v___x_1910_ = l_Lean_Macro_throwErrorAt___redArg(v_val_1908_, v___x_1909_, v___y_1865_, v___y_1866_);
lean_dec(v_val_1908_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v_a_1912_; lean_object* v___x_1913_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
v_a_1912_ = lean_ctor_get(v___x_1910_, 1);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___x_1910_, 2);
v___x_1913_ = l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__2(v___x_1887_, v___x_1903_, v___x_1904_, v___x_1888_, v_type_1900_, v_name_1898_, v___x_1896_, v_a_1911_, v___y_1865_, v_a_1912_);
v___y_1868_ = v___x_1913_;
goto v___jp_1867_;
}
else
{
lean_dec(v_type_1900_);
lean_dec(v_name_1898_);
lean_dec(v___x_1896_);
v___y_1868_ = v___x_1910_;
goto v___jp_1867_;
}
}
}
else
{
if (lean_obj_tag(v_field_x3f_1906_) == 0)
{
lean_object* v_val_1914_; lean_object* v___x_1915_; lean_object* v_a_1916_; lean_object* v_a_1917_; lean_object* v___x_1918_; 
v_val_1914_ = lean_ctor_get(v_attr_x3f_1905_, 0);
lean_inc(v_val_1914_);
lean_dec_ref_known(v_attr_x3f_1905_, 1);
lean_inc(v_type_1900_);
v___x_1915_ = l___private_Lean_Data_Options_0__Lean_Option_declWithDeprecation(v_val_1914_, v_type_1900_, v_decl_1902_, v___y_1865_, v___y_1866_);
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
v_a_1917_ = lean_ctor_get(v___x_1915_, 1);
lean_inc(v_a_1917_);
lean_dec_ref(v___x_1915_);
v___x_1918_ = l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__2(v___x_1887_, v___x_1903_, v___x_1904_, v___x_1888_, v_type_1900_, v_name_1898_, v___x_1896_, v_a_1916_, v___y_1865_, v_a_1917_);
v___y_1868_ = v___x_1918_;
goto v___jp_1867_;
}
else
{
lean_object* v_val_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
lean_dec_ref_known(v_attr_x3f_1905_, 1);
lean_dec(v_decl_1902_);
v_val_1919_ = lean_ctor_get(v_field_x3f_1906_, 0);
lean_inc(v_val_1919_);
lean_dec_ref_known(v_field_x3f_1906_, 1);
v___x_1920_ = ((lean_object*)(l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___closed__3));
v___x_1921_ = l_Lean_Macro_throwErrorAt___redArg(v_val_1919_, v___x_1920_, v___y_1865_, v___y_1866_);
lean_dec(v_val_1919_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_a_1922_; lean_object* v_a_1923_; lean_object* v___x_1924_; 
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_a_1922_);
v_a_1923_ = lean_ctor_get(v___x_1921_, 1);
lean_inc(v_a_1923_);
lean_dec_ref_known(v___x_1921_, 2);
v___x_1924_ = l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___lam__2(v___x_1887_, v___x_1903_, v___x_1904_, v___x_1888_, v_type_1900_, v_name_1898_, v___x_1896_, v_a_1922_, v___y_1865_, v_a_1923_);
v___y_1868_ = v___x_1924_;
goto v___jp_1867_;
}
else
{
lean_dec(v_type_1900_);
lean_dec(v_name_1898_);
lean_dec(v___x_1896_);
v___y_1868_ = v___x_1921_;
goto v___jp_1867_;
}
}
}
}
v___jp_1867_:
{
if (lean_obj_tag(v___y_1868_) == 0)
{
lean_object* v_a_1869_; lean_object* v_a_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1877_; 
v_a_1869_ = lean_ctor_get(v___y_1868_, 0);
v_a_1870_ = lean_ctor_get(v___y_1868_, 1);
v_isSharedCheck_1877_ = !lean_is_exclusive(v___y_1868_);
if (v_isSharedCheck_1877_ == 0)
{
v___x_1872_ = v___y_1868_;
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_a_1870_);
lean_inc(v_a_1869_);
lean_dec(v___y_1868_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1877_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1875_; 
if (v_isShared_1873_ == 0)
{
v___x_1875_ = v___x_1872_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1869_);
lean_ctor_set(v_reuseFailAlloc_1876_, 1, v_a_1870_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
}
else
{
lean_object* v_a_1878_; lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1886_; 
v_a_1878_ = lean_ctor_get(v___y_1868_, 0);
v_a_1879_ = lean_ctor_get(v___y_1868_, 1);
v_isSharedCheck_1886_ = !lean_is_exclusive(v___y_1868_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1881_ = v___y_1868_;
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_inc(v_a_1878_);
lean_dec(v___y_1868_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1886_;
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
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_a_1878_);
lean_ctor_set(v_reuseFailAlloc_1885_, 1, v_a_1879_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1___boxed(lean_object* v_x_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l_Lean_Option___aux__Lean__Data__Options______macroRules__Lean__Option__registerOption__1(v_x_1925_, v___y_1926_, v___y_1927_);
lean_dec_ref(v___y_1926_);
return v_res_1928_;
}
}
lean_object* runtime_initialize_Lean_ImportingFlag(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_KVMap(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_NameMap_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_Options(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_ImportingFlag(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_KVMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_NameMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedOptionDecl_default = _init_l_Lean_instInhabitedOptionDecl_default();
lean_mark_persistent(l_Lean_instInhabitedOptionDecl_default);
l_Lean_instInhabitedOptionDecl = _init_l_Lean_instInhabitedOptionDecl();
lean_mark_persistent(l_Lean_instInhabitedOptionDecl);
l_Lean_instInhabitedOptionDecls = _init_l_Lean_instInhabitedOptionDecls();
lean_mark_persistent(l_Lean_instInhabitedOptionDecls);
res = l___private_Lean_Data_Options_0__Lean_initFn_00___x40_Lean_Data_Options_1188237450____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Data_Options_0__Lean_optionDeclsRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Data_Options_0__Lean_optionDeclsRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_Options(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_OptionDecl_declName___autoParam = _init_l_Lean_OptionDecl_declName___autoParam();
lean_mark_persistent(l_Lean_OptionDecl_declName___autoParam);
l_Lean_Option_register___auto__1 = _init_l_Lean_Option_register___auto__1();
lean_mark_persistent(l_Lean_Option_register___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_ImportingFlag(uint8_t builtin);
lean_object* initialize_Lean_Data_KVMap(uint8_t builtin);
lean_object* initialize_Lean_Data_NameMap_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_Options(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_ImportingFlag(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_KVMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_NameMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_Options(builtin);
}
#ifdef __cplusplus
}
#endif
