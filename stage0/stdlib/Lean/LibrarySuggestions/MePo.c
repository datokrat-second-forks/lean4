// Lean compiler output
// Module: Lean.LibrarySuggestions.MePo
// Imports: public import Lean.LibrarySuggestions.Basic import Lean.LibrarySuggestions.SymbolFrequency
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
double lean_float_of_nat(lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
lean_object* lean_nat_log2(lean_object*);
double lean_float_add(double, double);
double lean_float_div(double, double);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_erase___boxed(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_float_decLt(double, double);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
double lean_float_sub(double, double);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_NameSet_append(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_float_decLe(double, double);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_float_to_string(double);
lean_object* l_Lean_MessageData_paren(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_toList(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
uint8_t l_Lean_LibrarySuggestions_isDeniedPremise(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_wasOriginallyTheorem(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Expr_getUsedConstantsAsSet(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getRelevantConstants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LibrarySuggestions_symbolFrequencyMap___redArg(lean_object*);
static const lean_string_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__0_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mepo"};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__0_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__0_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__1_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__0_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(179, 111, 138, 7, 148, 116, 40, 181)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__1_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__1_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__2_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__2_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__2_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__3_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__2_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__3_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__3_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__4_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__4_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__4_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__5_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__3_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__4_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__5_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__5_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__6_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "LibrarySuggestions"};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__6_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__6_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__7_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__5_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__6_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(213, 41, 69, 6, 132, 216, 128, 143)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__7_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__7_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__8_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "MePo"};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__8_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__8_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__9_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__7_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__8_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(44, 93, 253, 244, 82, 82, 224, 66)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__9_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__9_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__10_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__9_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(173, 144, 138, 243, 34, 175, 73, 217)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__10_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__10_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__11_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__10_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__4_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(24, 51, 218, 59, 117, 164, 44, 203)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__11_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__11_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__12_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__11_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__6_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(191, 98, 30, 100, 123, 141, 193, 113)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__12_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__12_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__13_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__12_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__8_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(206, 200, 158, 91, 84, 11, 45, 165)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__13_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__13_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__14_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__14_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__14_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__15_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__13_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__14_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(227, 120, 229, 253, 111, 58, 55, 73)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__15_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__15_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__16_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__16_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__16_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__17_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__15_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__16_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 70, 240, 65, 73, 172, 232, 127)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__17_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__17_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__18_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__17_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__4_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(127, 42, 1, 245, 170, 112, 202, 199)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__18_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__18_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__19_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__18_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__6_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 33, 101, 235, 243, 23, 74, 128)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__19_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__19_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__20_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__19_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__8_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(97, 33, 249, 189, 249, 89, 115, 169)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__20_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__20_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__21_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__20_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1610293474) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(62, 105, 250, 11, 65, 96, 97, 36)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__21_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__21_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__22_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__22_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__22_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__23_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__21_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__22_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(105, 109, 63, 205, 224, 99, 21, 127)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__23_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__23_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__24_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__24_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__24_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__25_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__23_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__24_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(129, 4, 80, 108, 110, 218, 210, 56)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__25_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__25_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__26_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__25_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(28, 228, 64, 165, 223, 190, 28, 44)}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__26_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__26_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__1(lean_object*, double, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_erase___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__0 = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__0_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___boxed__const__1;
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__0;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__1;
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___boxed(lean_object*);
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0___closed__0;
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___closed__0 = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___closed__0_value;
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8___closed__0_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__0_value;
static const lean_ctor_object l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__0_value)}};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__1_value;
static lean_once_cell_t l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__2;
static lean_once_cell_t l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__3;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__1(double, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__9(lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Accepted "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__2_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__3;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__4 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__4_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Current relevant set: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__6 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__6_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__7;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1(lean_object*, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__1_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Considering candidates with threshold "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg(lean_object*, lean_object*, double, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__1(lean_object*, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg(lean_object*, lean_object*, double, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___closed__0 = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___closed__0_value;
static const lean_array_object l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___closed__1 = (const lean_object*)&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo(lean_object*, lean_object*, lean_object*, lean_object*, double, double, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10(lean_object*, lean_object*, double, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12(lean_object*, lean_object*, double, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_LibrarySuggestions_mepoSelector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LibrarySuggestions_mepoSelector___closed__0 = (const lean_object*)&l_Lean_LibrarySuggestions_mepoSelector___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector(uint8_t, double, double, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_64_; uint8_t v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_64_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__1_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_));
v___x_65_ = 0;
v___x_66_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__26_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_));
v___x_67_ = l_Lean_registerTraceClass(v___x_64_, v___x_65_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2____boxed(lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_();
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__0(lean_object* v_candidate_70_, lean_object* v_r_71_, lean_object* v_n_72_){
_start:
{
uint8_t v___x_73_; 
v___x_73_ = l_Lean_NameSet_contains(v_candidate_70_, v_n_72_);
if (v___x_73_ == 0)
{
lean_dec(v_n_72_);
return v_r_71_;
}
else
{
lean_object* v___x_74_; 
v___x_74_ = l_Lean_NameSet_insert(v_r_71_, v_n_72_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__0___boxed(lean_object* v_candidate_75_, lean_object* v_r_76_, lean_object* v_n_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__0(v_candidate_75_, v_r_76_, v_n_77_);
lean_dec(v_candidate_75_);
return v_res_78_;
}
}
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__1(lean_object* v_weight_79_, double v_acc_80_, lean_object* v_n_81_){
_start:
{
lean_object* v___x_82_; double v___x_83_; double v___x_84_; 
v___x_82_ = lean_apply_1(v_weight_79_, v_n_81_);
v___x_83_ = lean_unbox_float(v___x_82_);
lean_dec_ref(v___x_82_);
v___x_84_ = lean_float_add(v_acc_80_, v___x_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__1___boxed(lean_object* v_weight_85_, lean_object* v_acc_86_, lean_object* v_n_87_){
_start:
{
double v_acc_boxed_88_; double v_res_89_; lean_object* v_r_90_; 
v_acc_boxed_88_ = lean_unbox_float(v_acc_86_);
lean_dec_ref(v_acc_86_);
v_res_89_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__1(v_weight_85_, v_acc_boxed_88_, v_n_87_);
v_r_90_ = lean_box_float(v_res_89_);
return v_r_90_;
}
}
static double _init_l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__1(void){
_start:
{
lean_object* v___x_92_; double v___x_93_; 
v___x_92_ = lean_unsigned_to_nat(0u);
v___x_93_ = lean_float_of_nat(v___x_92_);
return v___x_93_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___boxed__const__1(void){
_start:
{
double v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_float_once(&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__1, &l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__1_once, _init_l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__1);
v___x_95_ = lean_box_float(v___x_94_);
return v___x_95_;
}
}
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore(lean_object* v_weight_96_, lean_object* v_relevant_97_, lean_object* v_candidate_98_){
_start:
{
lean_object* v___f_99_; lean_object* v___f_100_; lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v_R_103_; lean_object* v___x_104_; lean_object* v___x_105_; double v_R_x27_106_; lean_object* v___x_107_; lean_object* v_M_108_; double v___x_109_; double v___x_110_; double v___x_111_; double v___x_112_; 
lean_inc(v_candidate_98_);
v___f_99_ = lean_alloc_closure((void*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__0___boxed), 3, 1);
lean_closure_set(v___f_99_, 0, v_candidate_98_);
v___f_100_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__0));
v___f_101_ = lean_alloc_closure((void*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___lam__1___boxed), 3, 1);
lean_closure_set(v___f_101_, 0, v_weight_96_);
v___x_102_ = l_Lean_NameSet_empty;
v_R_103_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v___f_99_, v___x_102_, v_relevant_97_);
lean_inc(v_R_103_);
v___x_104_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v___f_100_, v_candidate_98_, v_R_103_);
v___x_105_ = l_Lean_NameSet_size(v___x_104_);
lean_dec(v___x_104_);
v_R_x27_106_ = lean_float_of_nat(v___x_105_);
v___x_107_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___boxed__const__1;
v_M_108_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameSet_foldl_spec__0_spec__0___redArg(v___f_101_, v___x_107_, v_R_103_);
v___x_109_ = lean_unbox_float(v_M_108_);
v___x_110_ = lean_float_add(v___x_109_, v_R_x27_106_);
v___x_111_ = lean_unbox_float(v_M_108_);
lean_dec(v_M_108_);
v___x_112_ = lean_float_div(v___x_111_, v___x_110_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___boxed(lean_object* v_weight_113_, lean_object* v_relevant_114_, lean_object* v_candidate_115_){
_start:
{
double v_res_116_; lean_object* v_r_117_; 
v_res_116_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore(v_weight_113_, v_relevant_114_, v_candidate_115_);
v_r_117_ = lean_box_float(v_res_116_);
return v_r_117_;
}
}
static double _init_l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__0(void){
_start:
{
lean_object* v___x_118_; uint8_t v___x_119_; lean_object* v___x_120_; double v___x_121_; 
v___x_118_ = lean_unsigned_to_nat(1u);
v___x_119_ = 1;
v___x_120_ = lean_unsigned_to_nat(10u);
v___x_121_ = l_Float_ofScientific(v___x_120_, v___x_119_, v___x_118_);
return v___x_121_;
}
}
static double _init_l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__1(void){
_start:
{
lean_object* v___x_122_; uint8_t v___x_123_; lean_object* v___x_124_; double v___x_125_; 
v___x_122_ = lean_unsigned_to_nat(1u);
v___x_123_ = 1;
v___x_124_ = lean_unsigned_to_nat(20u);
v___x_125_ = l_Float_ofScientific(v___x_124_, v___x_123_, v___x_122_);
return v___x_125_;
}
}
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction(lean_object* v_n_126_){
_start:
{
double v___x_127_; double v___x_128_; lean_object* v___x_129_; double v___x_130_; double v___x_131_; double v___x_132_; double v___x_133_; 
v___x_127_ = lean_float_once(&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__0, &l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__0_once, _init_l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__0);
v___x_128_ = lean_float_once(&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__1, &l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__1_once, _init_l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___closed__1);
v___x_129_ = lean_nat_log2(v_n_126_);
v___x_130_ = lean_float_of_nat(v___x_129_);
v___x_131_ = lean_float_add(v___x_130_, v___x_127_);
v___x_132_ = lean_float_div(v___x_128_, v___x_131_);
v___x_133_ = lean_float_add(v___x_127_, v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction___boxed(lean_object* v_n_134_){
_start:
{
double v_res_135_; lean_object* v_r_136_; 
v_res_135_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction(v_n_134_);
lean_dec(v_n_134_);
v_r_136_ = lean_box_float(v_res_135_);
return v_r_136_;
}
}
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore___lam__0(lean_object* v_frequency_137_, lean_object* v_n_138_){
_start:
{
lean_object* v___x_139_; double v___x_140_; 
v___x_139_ = lean_apply_1(v_frequency_137_, v_n_138_);
v___x_140_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightFunction(v___x_139_);
lean_dec(v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore___lam__0___boxed(lean_object* v_frequency_141_, lean_object* v_n_142_){
_start:
{
double v_res_143_; lean_object* v_r_144_; 
v_res_143_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore___lam__0(v_frequency_141_, v_n_142_);
v_r_144_ = lean_box_float(v_res_143_);
return v_r_144_;
}
}
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore(lean_object* v_frequency_145_, lean_object* v_relevant_146_, lean_object* v_candidate_147_){
_start:
{
lean_object* v___f_148_; double v___x_149_; 
v___f_148_ = lean_alloc_closure((void*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore___lam__0___boxed), 2, 1);
lean_closure_set(v___f_148_, 0, v_frequency_145_);
v___x_149_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore(v___f_148_, v_relevant_146_, v_candidate_147_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore___boxed(lean_object* v_frequency_150_, lean_object* v_relevant_151_, lean_object* v_candidate_152_){
_start:
{
double v_res_153_; lean_object* v_r_154_; 
v_res_153_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore(v_frequency_150_, v_relevant_151_, v_candidate_152_);
v_r_154_ = lean_box_float(v_res_153_);
return v_r_154_;
}
}
static double _init_l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_155_; double v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(1u);
v___x_156_ = lean_float_of_nat(v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0(lean_object* v_x_157_){
_start:
{
double v___x_158_; 
v___x_158_ = lean_float_once(&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0___closed__0, &l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0___closed__0_once, _init_l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0___closed__0);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0___boxed(lean_object* v_x_159_){
_start:
{
double v_res_160_; lean_object* v_r_161_; 
v_res_160_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___lam__0(v_x_159_);
lean_dec(v_x_159_);
v_r_161_ = lean_box_float(v_res_160_);
return v_r_161_;
}
}
LEAN_EXPORT double l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore(lean_object* v_relevant_163_, lean_object* v_candidate_164_){
_start:
{
lean_object* v___f_165_; double v___x_166_; 
v___f_165_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___closed__0));
v___x_166_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore(v___f_165_, v_relevant_163_, v_candidate_164_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore___boxed(lean_object* v_relevant_167_, lean_object* v_candidate_168_){
_start:
{
double v_res_169_; lean_object* v_r_170_; 
v_res_169_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_unweightedScore(v_relevant_167_, v_candidate_168_);
v_r_170_ = lean_box_float(v_res_169_);
return v_r_170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___lam__0(lean_object* v_accept_171_, lean_object* v_x_172_, lean_object* v_y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v_a_179_; lean_object* v___x_184_; 
lean_inc(v___y_176_);
lean_inc_ref(v___y_175_);
lean_inc_ref(v_y_173_);
v___x_184_ = lean_apply_4(v_accept_171_, v_y_173_, v___y_175_, v___y_176_, lean_box(0));
if (lean_obj_tag(v___x_184_) == 0)
{
lean_object* v_a_185_; uint8_t v___x_186_; 
v_a_185_ = lean_ctor_get(v___x_184_, 0);
lean_inc(v_a_185_);
lean_dec_ref_known(v___x_184_, 1);
v___x_186_ = lean_unbox(v_a_185_);
lean_dec(v_a_185_);
if (v___x_186_ == 0)
{
lean_dec_ref(v_y_173_);
lean_dec(v_x_172_);
v_a_179_ = v___y_174_;
goto v___jp_178_;
}
else
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_187_ = l_Lean_ConstantInfo_type(v_y_173_);
lean_dec_ref(v_y_173_);
v___x_188_ = l_Lean_Expr_getUsedConstantsAsSet(v___x_187_);
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v_x_172_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
v___x_190_ = lean_array_push(v___y_174_, v___x_189_);
v_a_179_ = v___x_190_;
goto v___jp_178_;
}
}
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
lean_dec_ref(v___y_174_);
lean_dec_ref(v_y_173_);
lean_dec(v_x_172_);
v_a_191_ = lean_ctor_get(v___x_184_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_184_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___x_184_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_184_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
v___jp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_180_ = lean_box(0);
v___x_181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set(v___x_181_, 1, v_a_179_);
v___x_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
v___x_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
return v___x_183_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___lam__0___boxed(lean_object* v_accept_199_, lean_object* v_x_200_, lean_object* v_y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___lam__0(v_accept_199_, v_x_200_, v_y_201_, v___y_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20___redArg(lean_object* v_f_207_, lean_object* v_keys_208_, lean_object* v_vals_209_, lean_object* v_i_210_, lean_object* v_acc_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = lean_array_get_size(v_keys_208_);
v___x_217_ = lean_nat_dec_lt(v_i_210_, v___x_216_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
lean_dec(v_i_210_);
lean_dec_ref(v_f_207_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v_acc_211_);
lean_ctor_set(v___x_218_, 1, v___y_212_);
v___x_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
v___x_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
return v___x_220_;
}
else
{
lean_object* v_k_221_; lean_object* v_v_222_; lean_object* v___x_223_; 
v_k_221_ = lean_array_fget_borrowed(v_keys_208_, v_i_210_);
v_v_222_ = lean_array_fget_borrowed(v_vals_209_, v_i_210_);
lean_inc_ref(v_f_207_);
lean_inc(v___y_214_);
lean_inc_ref(v___y_213_);
lean_inc(v_v_222_);
lean_inc(v_k_221_);
v___x_223_ = lean_apply_7(v_f_207_, v_acc_211_, v_k_221_, v_v_222_, v___y_212_, v___y_213_, v___y_214_, lean_box(0));
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v_a_224_; 
v_a_224_ = lean_ctor_get(v___x_223_, 0);
lean_inc(v_a_224_);
if (lean_obj_tag(v_a_224_) == 0)
{
lean_dec_ref_known(v_a_224_, 1);
lean_dec(v_i_210_);
lean_dec_ref(v_f_207_);
return v___x_223_;
}
else
{
lean_object* v_a_225_; lean_object* v_fst_226_; lean_object* v_snd_227_; lean_object* v___x_228_; lean_object* v___x_229_; 
lean_dec_ref_known(v___x_223_, 1);
v_a_225_ = lean_ctor_get(v_a_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v_a_224_, 1);
v_fst_226_ = lean_ctor_get(v_a_225_, 0);
lean_inc(v_fst_226_);
v_snd_227_ = lean_ctor_get(v_a_225_, 1);
lean_inc(v_snd_227_);
lean_dec(v_a_225_);
v___x_228_ = lean_unsigned_to_nat(1u);
v___x_229_ = lean_nat_add(v_i_210_, v___x_228_);
lean_dec(v_i_210_);
v_i_210_ = v___x_229_;
v_acc_211_ = v_fst_226_;
v___y_212_ = v_snd_227_;
goto _start;
}
}
else
{
lean_dec(v_i_210_);
lean_dec_ref(v_f_207_);
return v___x_223_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20___redArg___boxed(lean_object* v_f_231_, lean_object* v_keys_232_, lean_object* v_vals_233_, lean_object* v_i_234_, lean_object* v_acc_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20___redArg(v_f_231_, v_keys_232_, v_vals_233_, v_i_234_, v_acc_235_, v___y_236_, v___y_237_, v___y_238_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
lean_dec_ref(v_vals_233_);
lean_dec_ref(v_keys_232_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19___redArg(lean_object* v_f_241_, lean_object* v_as_242_, size_t v_i_243_, size_t v_stop_244_, lean_object* v_b_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
lean_object* v_fst_251_; lean_object* v_snd_252_; lean_object* v___y_257_; uint8_t v___x_262_; 
v___x_262_ = lean_usize_dec_eq(v_i_243_, v_stop_244_);
if (v___x_262_ == 0)
{
lean_object* v___x_263_; 
v___x_263_ = lean_array_uget_borrowed(v_as_242_, v_i_243_);
switch(lean_obj_tag(v___x_263_))
{
case 0:
{
lean_object* v_key_264_; lean_object* v_val_265_; lean_object* v___x_266_; 
v_key_264_ = lean_ctor_get(v___x_263_, 0);
v_val_265_ = lean_ctor_get(v___x_263_, 1);
lean_inc_ref(v_f_241_);
lean_inc(v___y_248_);
lean_inc_ref(v___y_247_);
lean_inc(v_val_265_);
lean_inc(v_key_264_);
v___x_266_ = lean_apply_7(v_f_241_, v_b_245_, v_key_264_, v_val_265_, v___y_246_, v___y_247_, v___y_248_, lean_box(0));
v___y_257_ = v___x_266_;
goto v___jp_256_;
}
case 1:
{
lean_object* v_node_267_; lean_object* v___x_268_; 
v_node_267_ = lean_ctor_get(v___x_263_, 0);
lean_inc(v_node_267_);
lean_inc_ref(v_f_241_);
v___x_268_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___redArg(v_f_241_, v_node_267_, v_b_245_, v___y_246_, v___y_247_, v___y_248_);
v___y_257_ = v___x_268_;
goto v___jp_256_;
}
default: 
{
v_fst_251_ = v_b_245_;
v_snd_252_ = v___y_246_;
goto v___jp_250_;
}
}
}
else
{
lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
lean_dec_ref(v_f_241_);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v_b_245_);
lean_ctor_set(v___x_269_, 1, v___y_246_);
v___x_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
v___x_271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
return v___x_271_;
}
v___jp_250_:
{
size_t v___x_253_; size_t v___x_254_; 
v___x_253_ = ((size_t)1ULL);
v___x_254_ = lean_usize_add(v_i_243_, v___x_253_);
v_i_243_ = v___x_254_;
v_b_245_ = v_fst_251_;
v___y_246_ = v_snd_252_;
goto _start;
}
v___jp_256_:
{
if (lean_obj_tag(v___y_257_) == 0)
{
lean_object* v_a_258_; 
v_a_258_ = lean_ctor_get(v___y_257_, 0);
if (lean_obj_tag(v_a_258_) == 0)
{
lean_dec_ref(v_f_241_);
return v___y_257_;
}
else
{
lean_object* v_a_259_; lean_object* v_fst_260_; lean_object* v_snd_261_; 
lean_inc_ref(v_a_258_);
lean_dec_ref_known(v___y_257_, 1);
v_a_259_ = lean_ctor_get(v_a_258_, 0);
lean_inc(v_a_259_);
lean_dec_ref_known(v_a_258_, 1);
v_fst_260_ = lean_ctor_get(v_a_259_, 0);
lean_inc(v_fst_260_);
v_snd_261_ = lean_ctor_get(v_a_259_, 1);
lean_inc(v_snd_261_);
lean_dec(v_a_259_);
v_fst_251_ = v_fst_260_;
v_snd_252_ = v_snd_261_;
goto v___jp_250_;
}
}
else
{
lean_dec_ref(v_f_241_);
return v___y_257_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___redArg(lean_object* v_f_272_, lean_object* v_x_273_, lean_object* v_x_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
if (lean_obj_tag(v_x_273_) == 0)
{
lean_object* v_es_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_294_; 
v_es_279_ = lean_ctor_get(v_x_273_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v_x_273_);
if (v_isSharedCheck_294_ == 0)
{
v___x_281_ = v_x_273_;
v_isShared_282_ = v_isSharedCheck_294_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_es_279_);
lean_dec(v_x_273_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_294_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
v___x_283_ = lean_unsigned_to_nat(0u);
v___x_284_ = lean_array_get_size(v_es_279_);
v___x_285_ = lean_nat_dec_lt(v___x_283_, v___x_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_288_; 
lean_dec_ref(v_es_279_);
lean_dec_ref(v_f_272_);
v___x_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_286_, 0, v_x_274_);
lean_ctor_set(v___x_286_, 1, v___y_275_);
if (v_isShared_282_ == 0)
{
lean_ctor_set_tag(v___x_281_, 1);
lean_ctor_set(v___x_281_, 0, v___x_286_);
v___x_288_ = v___x_281_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_286_);
v___x_288_ = v_reuseFailAlloc_290_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
lean_object* v___x_289_; 
v___x_289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
return v___x_289_;
}
}
else
{
size_t v___x_291_; size_t v___x_292_; lean_object* v___x_293_; 
lean_del_object(v___x_281_);
v___x_291_ = ((size_t)0ULL);
v___x_292_ = lean_usize_of_nat(v___x_284_);
v___x_293_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19___redArg(v_f_272_, v_es_279_, v___x_291_, v___x_292_, v_x_274_, v___y_275_, v___y_276_, v___y_277_);
lean_dec_ref(v_es_279_);
return v___x_293_;
}
}
}
else
{
lean_object* v_ks_295_; lean_object* v_vs_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_ks_295_ = lean_ctor_get(v_x_273_, 0);
lean_inc_ref(v_ks_295_);
v_vs_296_ = lean_ctor_get(v_x_273_, 1);
lean_inc_ref(v_vs_296_);
lean_dec_ref_known(v_x_273_, 2);
v___x_297_ = lean_unsigned_to_nat(0u);
v___x_298_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20___redArg(v_f_272_, v_ks_295_, v_vs_296_, v___x_297_, v_x_274_, v___y_275_, v___y_276_, v___y_277_);
lean_dec_ref(v_vs_296_);
lean_dec_ref(v_ks_295_);
return v___x_298_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___redArg___boxed(lean_object* v_f_299_, lean_object* v_x_300_, lean_object* v_x_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___redArg(v_f_299_, v_x_300_, v_x_301_, v___y_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19___redArg___boxed(lean_object* v_f_307_, lean_object* v_as_308_, lean_object* v_i_309_, lean_object* v_stop_310_, lean_object* v_b_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
size_t v_i_boxed_316_; size_t v_stop_boxed_317_; lean_object* v_res_318_; 
v_i_boxed_316_ = lean_unbox_usize(v_i_309_);
lean_dec(v_i_309_);
v_stop_boxed_317_ = lean_unbox_usize(v_stop_310_);
lean_dec(v_stop_310_);
v_res_318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19___redArg(v_f_307_, v_as_308_, v_i_boxed_316_, v_stop_boxed_317_, v_b_311_, v___y_312_, v___y_313_, v___y_314_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec_ref(v_as_308_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg___lam__0(lean_object* v_f_319_, lean_object* v_x_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_){
_start:
{
lean_object* v___x_327_; 
lean_inc(v___y_325_);
lean_inc_ref(v___y_324_);
v___x_327_ = lean_apply_6(v_f_319_, v___y_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, lean_box(0));
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg___lam__0___boxed(lean_object* v_f_328_, lean_object* v_x_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg___lam__0(v_f_328_, v_x_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg(lean_object* v_map_337_, lean_object* v_f_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v___f_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___f_343_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_343_, 0, v_f_338_);
v___x_344_ = lean_box(0);
v___x_345_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___redArg(v___f_343_, v_map_337_, v___x_344_, v___y_339_, v___y_340_, v___y_341_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg___boxed(lean_object* v_map_346_, lean_object* v_f_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg(v_map_346_, v_f_347_, v___y_348_, v___y_349_, v___y_350_);
lean_dec(v___y_350_);
lean_dec_ref(v___y_349_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14___redArg(lean_object* v_f_353_, lean_object* v_x_354_, lean_object* v_x_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
if (lean_obj_tag(v_x_355_) == 0)
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
lean_dec_ref(v_f_353_);
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v_x_354_);
lean_ctor_set(v___x_360_, 1, v___y_356_);
v___x_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
v___x_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_362_, 0, v___x_361_);
return v___x_362_;
}
else
{
lean_object* v_key_363_; lean_object* v_value_364_; lean_object* v_tail_365_; lean_object* v___x_366_; 
v_key_363_ = lean_ctor_get(v_x_355_, 0);
lean_inc(v_key_363_);
v_value_364_ = lean_ctor_get(v_x_355_, 1);
lean_inc(v_value_364_);
v_tail_365_ = lean_ctor_get(v_x_355_, 2);
lean_inc(v_tail_365_);
lean_dec_ref_known(v_x_355_, 3);
lean_inc_ref(v_f_353_);
lean_inc(v___y_358_);
lean_inc_ref(v___y_357_);
v___x_366_ = lean_apply_6(v_f_353_, v_key_363_, v_value_364_, v___y_356_, v___y_357_, v___y_358_, lean_box(0));
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; 
v_a_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_a_367_);
if (lean_obj_tag(v_a_367_) == 0)
{
lean_dec_ref_known(v_a_367_, 1);
lean_dec(v_tail_365_);
lean_dec_ref(v_f_353_);
return v___x_366_;
}
else
{
lean_object* v_a_368_; lean_object* v_fst_369_; lean_object* v_snd_370_; 
lean_dec_ref_known(v___x_366_, 1);
v_a_368_ = lean_ctor_get(v_a_367_, 0);
lean_inc(v_a_368_);
lean_dec_ref_known(v_a_367_, 1);
v_fst_369_ = lean_ctor_get(v_a_368_, 0);
lean_inc(v_fst_369_);
v_snd_370_ = lean_ctor_get(v_a_368_, 1);
lean_inc(v_snd_370_);
lean_dec(v_a_368_);
v_x_354_ = v_fst_369_;
v_x_355_ = v_tail_365_;
v___y_356_ = v_snd_370_;
goto _start;
}
}
else
{
lean_dec(v_tail_365_);
lean_dec_ref(v_f_353_);
return v___x_366_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14___redArg___boxed(lean_object* v_f_372_, lean_object* v_x_373_, lean_object* v_x_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14___redArg(v_f_372_, v_x_373_, v_x_374_, v___y_375_, v___y_376_, v___y_377_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16___redArg(lean_object* v_f_380_, lean_object* v_as_381_, size_t v_i_382_, size_t v_stop_383_, lean_object* v_b_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
uint8_t v___x_389_; 
v___x_389_ = lean_usize_dec_eq(v_i_382_, v_stop_383_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_390_ = lean_array_uget_borrowed(v_as_381_, v_i_382_);
v___x_391_ = lean_box(0);
lean_inc(v___x_390_);
lean_inc_ref(v_f_380_);
v___x_392_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14___redArg(v_f_380_, v___x_391_, v___x_390_, v___y_385_, v___y_386_, v___y_387_);
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v_a_393_; 
v_a_393_ = lean_ctor_get(v___x_392_, 0);
lean_inc(v_a_393_);
if (lean_obj_tag(v_a_393_) == 0)
{
lean_dec_ref_known(v_a_393_, 1);
lean_dec_ref(v_f_380_);
return v___x_392_;
}
else
{
lean_object* v_a_394_; lean_object* v_fst_395_; lean_object* v_snd_396_; size_t v___x_397_; size_t v___x_398_; 
lean_dec_ref_known(v___x_392_, 1);
v_a_394_ = lean_ctor_get(v_a_393_, 0);
lean_inc(v_a_394_);
lean_dec_ref_known(v_a_393_, 1);
v_fst_395_ = lean_ctor_get(v_a_394_, 0);
lean_inc(v_fst_395_);
v_snd_396_ = lean_ctor_get(v_a_394_, 1);
lean_inc(v_snd_396_);
lean_dec(v_a_394_);
v___x_397_ = ((size_t)1ULL);
v___x_398_ = lean_usize_add(v_i_382_, v___x_397_);
v_i_382_ = v___x_398_;
v_b_384_ = v_fst_395_;
v___y_385_ = v_snd_396_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_380_);
return v___x_392_;
}
}
else
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
lean_dec_ref(v_f_380_);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v_b_384_);
lean_ctor_set(v___x_400_, 1, v___y_385_);
v___x_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
v___x_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
return v___x_402_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16___redArg___boxed(lean_object* v_f_403_, lean_object* v_as_404_, lean_object* v_i_405_, lean_object* v_stop_406_, lean_object* v_b_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
size_t v_i_boxed_412_; size_t v_stop_boxed_413_; lean_object* v_res_414_; 
v_i_boxed_412_ = lean_unbox_usize(v_i_405_);
lean_dec(v_i_405_);
v_stop_boxed_413_ = lean_unbox_usize(v_stop_406_);
lean_dec(v_stop_406_);
v_res_414_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16___redArg(v_f_403_, v_as_404_, v_i_boxed_412_, v_stop_boxed_413_, v_b_407_, v___y_408_, v___y_409_, v___y_410_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
lean_dec_ref(v_as_404_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11___redArg(lean_object* v_s_415_, lean_object* v_f_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v_map_u2081_421_; lean_object* v_map_u2082_422_; lean_object* v_buckets_423_; lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v_map_u2081_421_ = lean_ctor_get(v_s_415_, 0);
lean_inc_ref(v_map_u2081_421_);
v_map_u2082_422_ = lean_ctor_get(v_s_415_, 1);
lean_inc_ref(v_map_u2082_422_);
lean_dec_ref(v_s_415_);
v_buckets_423_ = lean_ctor_get(v_map_u2081_421_, 1);
lean_inc_ref(v_buckets_423_);
lean_dec_ref(v_map_u2081_421_);
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = lean_array_get_size(v_buckets_423_);
v___x_426_ = lean_nat_dec_lt(v___x_424_, v___x_425_);
if (v___x_426_ == 0)
{
lean_object* v___x_427_; 
lean_dec_ref(v_buckets_423_);
v___x_427_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg(v_map_u2082_422_, v_f_416_, v___y_417_, v___y_418_, v___y_419_);
return v___x_427_;
}
else
{
lean_object* v___x_428_; size_t v___x_429_; size_t v___x_430_; lean_object* v___x_431_; 
v___x_428_ = lean_box(0);
v___x_429_ = ((size_t)0ULL);
v___x_430_ = lean_usize_of_nat(v___x_425_);
lean_inc_ref(v_f_416_);
v___x_431_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16___redArg(v_f_416_, v_buckets_423_, v___x_429_, v___x_430_, v___x_428_, v___y_417_, v___y_418_, v___y_419_);
lean_dec_ref(v_buckets_423_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_a_432_);
if (lean_obj_tag(v_a_432_) == 0)
{
lean_dec_ref_known(v_a_432_, 1);
lean_dec_ref(v_map_u2082_422_);
lean_dec_ref(v_f_416_);
return v___x_431_;
}
else
{
lean_object* v_a_433_; lean_object* v_snd_434_; lean_object* v___x_435_; 
lean_dec_ref_known(v___x_431_, 1);
v_a_433_ = lean_ctor_get(v_a_432_, 0);
lean_inc(v_a_433_);
lean_dec_ref_known(v_a_432_, 1);
v_snd_434_ = lean_ctor_get(v_a_433_, 1);
lean_inc(v_snd_434_);
lean_dec(v_a_433_);
v___x_435_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg(v_map_u2082_422_, v_f_416_, v_snd_434_, v___y_418_, v___y_419_);
return v___x_435_;
}
}
else
{
lean_dec_ref(v_map_u2082_422_);
lean_dec_ref(v_f_416_);
return v___x_431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11___redArg___boxed(lean_object* v_s_436_, lean_object* v_f_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11___redArg(v_s_436_, v_f_437_, v___y_438_, v___y_439_, v___y_440_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
return v_res_442_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__0(void){
_start:
{
lean_object* v___x_443_; 
v___x_443_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_443_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__1(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__0);
v___x_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_445_, 0, v___x_444_);
return v___x_445_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__2(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_446_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__1);
v___x_447_ = lean_unsigned_to_nat(0u);
v___x_448_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
lean_ctor_set(v___x_448_, 1, v___x_447_);
lean_ctor_set(v___x_448_, 2, v___x_447_);
lean_ctor_set(v___x_448_, 3, v___x_447_);
lean_ctor_set(v___x_448_, 4, v___x_446_);
lean_ctor_set(v___x_448_, 5, v___x_446_);
lean_ctor_set(v___x_448_, 6, v___x_446_);
lean_ctor_set(v___x_448_, 7, v___x_446_);
lean_ctor_set(v___x_448_, 8, v___x_446_);
lean_ctor_set(v___x_448_, 9, v___x_446_);
lean_ctor_set(v___x_448_, 10, v___x_446_);
return v___x_448_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__3(void){
_start:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_449_ = lean_unsigned_to_nat(32u);
v___x_450_ = lean_mk_empty_array_with_capacity(v___x_449_);
v___x_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
return v___x_451_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__4(void){
_start:
{
size_t v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_452_ = ((size_t)5ULL);
v___x_453_ = lean_unsigned_to_nat(0u);
v___x_454_ = lean_unsigned_to_nat(32u);
v___x_455_ = lean_mk_empty_array_with_capacity(v___x_454_);
v___x_456_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__3);
v___x_457_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_457_, 0, v___x_456_);
lean_ctor_set(v___x_457_, 1, v___x_455_);
lean_ctor_set(v___x_457_, 2, v___x_453_);
lean_ctor_set(v___x_457_, 3, v___x_453_);
lean_ctor_set_usize(v___x_457_, 4, v___x_452_);
return v___x_457_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__5(void){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_458_ = lean_box(1);
v___x_459_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__4);
v___x_460_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__1);
v___x_461_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
lean_ctor_set(v___x_461_, 1, v___x_459_);
lean_ctor_set(v___x_461_, 2, v___x_458_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9(lean_object* v_msgData_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v___x_466_; lean_object* v_toCold_467_; lean_object* v_env_468_; lean_object* v_options_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_466_ = lean_st_ref_get(v___y_464_);
v_toCold_467_ = lean_ctor_get(v___y_463_, 0);
v_env_468_ = lean_ctor_get(v___x_466_, 0);
lean_inc_ref(v_env_468_);
lean_dec(v___x_466_);
v_options_469_ = lean_ctor_get(v_toCold_467_, 2);
v___x_470_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__2);
v___x_471_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___closed__5);
lean_inc_ref(v_options_469_);
v___x_472_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_472_, 0, v_env_468_);
lean_ctor_set(v___x_472_, 1, v___x_470_);
lean_ctor_set(v___x_472_, 2, v___x_471_);
lean_ctor_set(v___x_472_, 3, v_options_469_);
v___x_473_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
lean_ctor_set(v___x_473_, 1, v_msgData_462_);
v___x_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9___boxed(lean_object* v_msgData_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9(v_msgData_475_, v___y_476_, v___y_477_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8(lean_object* v_cls_483_, lean_object* v_msg_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v_ref_488_; lean_object* v___x_489_; lean_object* v_a_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_534_; 
v_ref_488_ = lean_ctor_get(v___y_485_, 2);
v___x_489_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8_spec__9(v_msg_484_, v___y_485_, v___y_486_);
v_a_490_ = lean_ctor_get(v___x_489_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_534_ == 0)
{
v___x_492_ = v___x_489_;
v_isShared_493_ = v_isSharedCheck_534_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_a_490_);
lean_dec(v___x_489_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_534_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_494_; lean_object* v_traceState_495_; lean_object* v_env_496_; lean_object* v_nextMacroScope_497_; lean_object* v_ngen_498_; lean_object* v_auxDeclNGen_499_; lean_object* v_cache_500_; lean_object* v_messages_501_; lean_object* v_infoState_502_; lean_object* v_snapshotTasks_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_533_; 
v___x_494_ = lean_st_ref_take(v___y_486_);
v_traceState_495_ = lean_ctor_get(v___x_494_, 4);
v_env_496_ = lean_ctor_get(v___x_494_, 0);
v_nextMacroScope_497_ = lean_ctor_get(v___x_494_, 1);
v_ngen_498_ = lean_ctor_get(v___x_494_, 2);
v_auxDeclNGen_499_ = lean_ctor_get(v___x_494_, 3);
v_cache_500_ = lean_ctor_get(v___x_494_, 5);
v_messages_501_ = lean_ctor_get(v___x_494_, 6);
v_infoState_502_ = lean_ctor_get(v___x_494_, 7);
v_snapshotTasks_503_ = lean_ctor_get(v___x_494_, 8);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_533_ == 0)
{
v___x_505_ = v___x_494_;
v_isShared_506_ = v_isSharedCheck_533_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_snapshotTasks_503_);
lean_inc(v_infoState_502_);
lean_inc(v_messages_501_);
lean_inc(v_cache_500_);
lean_inc(v_traceState_495_);
lean_inc(v_auxDeclNGen_499_);
lean_inc(v_ngen_498_);
lean_inc(v_nextMacroScope_497_);
lean_inc(v_env_496_);
lean_dec(v___x_494_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_533_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
uint64_t v_tid_507_; lean_object* v_traces_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_532_; 
v_tid_507_ = lean_ctor_get_uint64(v_traceState_495_, sizeof(void*)*1);
v_traces_508_ = lean_ctor_get(v_traceState_495_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v_traceState_495_);
if (v_isSharedCheck_532_ == 0)
{
v___x_510_ = v_traceState_495_;
v_isShared_511_ = v_isSharedCheck_532_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_traces_508_);
lean_dec(v_traceState_495_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_532_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; lean_object* v___x_513_; double v___x_514_; uint8_t v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_512_ = lean_box(0);
v___x_513_ = lean_box(0);
v___x_514_ = lean_float_once(&l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__1, &l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__1_once, _init_l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___closed__1);
v___x_515_ = 0;
v___x_516_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8___closed__0));
v___x_517_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_517_, 0, v_cls_483_);
lean_ctor_set(v___x_517_, 1, v___x_513_);
lean_ctor_set(v___x_517_, 2, v___x_516_);
lean_ctor_set_float(v___x_517_, sizeof(void*)*3, v___x_514_);
lean_ctor_set_float(v___x_517_, sizeof(void*)*3 + 8, v___x_514_);
lean_ctor_set_uint8(v___x_517_, sizeof(void*)*3 + 16, v___x_515_);
v___x_518_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8___closed__1));
v___x_519_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_519_, 0, v___x_517_);
lean_ctor_set(v___x_519_, 1, v_a_490_);
lean_ctor_set(v___x_519_, 2, v___x_518_);
lean_inc(v_ref_488_);
v___x_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_520_, 0, v_ref_488_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
v___x_521_ = l_Lean_PersistentArray_push___redArg(v_traces_508_, v___x_520_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v___x_521_);
v___x_523_ = v___x_510_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_521_);
lean_ctor_set_uint64(v_reuseFailAlloc_531_, sizeof(void*)*1, v_tid_507_);
v___x_523_ = v_reuseFailAlloc_531_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
lean_object* v___x_525_; 
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 4, v___x_523_);
v___x_525_ = v___x_505_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_env_496_);
lean_ctor_set(v_reuseFailAlloc_530_, 1, v_nextMacroScope_497_);
lean_ctor_set(v_reuseFailAlloc_530_, 2, v_ngen_498_);
lean_ctor_set(v_reuseFailAlloc_530_, 3, v_auxDeclNGen_499_);
lean_ctor_set(v_reuseFailAlloc_530_, 4, v___x_523_);
lean_ctor_set(v_reuseFailAlloc_530_, 5, v_cache_500_);
lean_ctor_set(v_reuseFailAlloc_530_, 6, v_messages_501_);
lean_ctor_set(v_reuseFailAlloc_530_, 7, v_infoState_502_);
lean_ctor_set(v_reuseFailAlloc_530_, 8, v_snapshotTasks_503_);
v___x_525_ = v_reuseFailAlloc_530_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_526_ = lean_st_ref_put(v___y_486_, v___x_525_);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 0, v___x_512_);
v___x_528_ = v___x_492_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_512_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8___boxed(lean_object* v_cls_535_, lean_object* v_msg_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8(v_cls_535_, v_msg_536_, v___y_537_, v___y_538_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__6(size_t v_sz_541_, size_t v_i_542_, lean_object* v_bs_543_){
_start:
{
uint8_t v___x_544_; 
v___x_544_ = lean_usize_dec_lt(v_i_542_, v_sz_541_);
if (v___x_544_ == 0)
{
return v_bs_543_;
}
else
{
lean_object* v_v_545_; lean_object* v_snd_546_; lean_object* v_fst_547_; lean_object* v_snd_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_561_; 
v_v_545_ = lean_array_uget_borrowed(v_bs_543_, v_i_542_);
v_snd_546_ = lean_ctor_get(v_v_545_, 1);
lean_inc(v_snd_546_);
v_fst_547_ = lean_ctor_get(v_v_545_, 0);
lean_inc(v_fst_547_);
v_snd_548_ = lean_ctor_get(v_snd_546_, 1);
v_isSharedCheck_561_ = !lean_is_exclusive(v_snd_546_);
if (v_isSharedCheck_561_ == 0)
{
lean_object* v_unused_562_; 
v_unused_562_ = lean_ctor_get(v_snd_546_, 0);
lean_dec(v_unused_562_);
v___x_550_ = v_snd_546_;
v_isShared_551_ = v_isSharedCheck_561_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_snd_548_);
lean_dec(v_snd_546_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_561_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_552_; lean_object* v_bs_x27_553_; lean_object* v___x_555_; 
v___x_552_ = lean_unsigned_to_nat(0u);
v_bs_x27_553_ = lean_array_uset(v_bs_543_, v_i_542_, v___x_552_);
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 0, v_fst_547_);
v___x_555_ = v___x_550_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_fst_547_);
lean_ctor_set(v_reuseFailAlloc_560_, 1, v_snd_548_);
v___x_555_ = v_reuseFailAlloc_560_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
size_t v___x_556_; size_t v___x_557_; lean_object* v___x_558_; 
v___x_556_ = ((size_t)1ULL);
v___x_557_ = lean_usize_add(v_i_542_, v___x_556_);
v___x_558_ = lean_array_uset(v_bs_x27_553_, v_i_542_, v___x_555_);
v_i_542_ = v___x_557_;
v_bs_543_ = v___x_558_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__6___boxed(lean_object* v_sz_563_, lean_object* v_i_564_, lean_object* v_bs_565_){
_start:
{
size_t v_sz_boxed_566_; size_t v_i_boxed_567_; lean_object* v_res_568_; 
v_sz_boxed_566_ = lean_unbox_usize(v_sz_563_);
lean_dec(v_sz_563_);
v_i_boxed_567_ = lean_unbox_usize(v_i_564_);
lean_dec(v_i_564_);
v_res_568_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__6(v_sz_boxed_566_, v_i_boxed_567_, v_bs_565_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__2(size_t v_sz_569_, size_t v_i_570_, lean_object* v_bs_571_){
_start:
{
uint8_t v___x_572_; 
v___x_572_ = lean_usize_dec_lt(v_i_570_, v_sz_569_);
if (v___x_572_ == 0)
{
return v_bs_571_;
}
else
{
lean_object* v_v_573_; lean_object* v_snd_574_; lean_object* v_fst_575_; lean_object* v_fst_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_589_; 
v_v_573_ = lean_array_uget_borrowed(v_bs_571_, v_i_570_);
v_snd_574_ = lean_ctor_get(v_v_573_, 1);
lean_inc(v_snd_574_);
v_fst_575_ = lean_ctor_get(v_v_573_, 0);
lean_inc(v_fst_575_);
v_fst_576_ = lean_ctor_get(v_snd_574_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v_snd_574_);
if (v_isSharedCheck_589_ == 0)
{
lean_object* v_unused_590_; 
v_unused_590_ = lean_ctor_get(v_snd_574_, 1);
lean_dec(v_unused_590_);
v___x_578_ = v_snd_574_;
v_isShared_579_ = v_isSharedCheck_589_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_fst_576_);
lean_dec(v_snd_574_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_589_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; lean_object* v_bs_x27_581_; lean_object* v___x_583_; 
v___x_580_ = lean_unsigned_to_nat(0u);
v_bs_x27_581_ = lean_array_uset(v_bs_571_, v_i_570_, v___x_580_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 1, v_fst_576_);
lean_ctor_set(v___x_578_, 0, v_fst_575_);
v___x_583_ = v___x_578_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_fst_575_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_fst_576_);
v___x_583_ = v_reuseFailAlloc_588_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
size_t v___x_584_; size_t v___x_585_; lean_object* v___x_586_; 
v___x_584_ = ((size_t)1ULL);
v___x_585_ = lean_usize_add(v_i_570_, v___x_584_);
v___x_586_ = lean_array_uset(v_bs_x27_581_, v_i_570_, v___x_583_);
v_i_570_ = v___x_585_;
v_bs_571_ = v___x_586_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__2___boxed(lean_object* v_sz_591_, lean_object* v_i_592_, lean_object* v_bs_593_){
_start:
{
size_t v_sz_boxed_594_; size_t v_i_boxed_595_; lean_object* v_res_596_; 
v_sz_boxed_594_ = lean_unbox_usize(v_sz_591_);
lean_dec(v_sz_591_);
v_i_boxed_595_ = lean_unbox_usize(v_i_592_);
lean_dec(v_i_592_);
v_res_596_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__2(v_sz_boxed_594_, v_i_boxed_595_, v_bs_593_);
return v_res_596_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__2(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__1));
v___x_601_ = l_Lean_MessageData_ofFormat(v___x_600_);
return v___x_601_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__3(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = lean_box(1);
v___x_603_ = l_Lean_MessageData_ofFormat(v___x_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7(lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
if (lean_obj_tag(v_a_604_) == 0)
{
lean_object* v___x_606_; 
v___x_606_ = l_List_reverse___redArg(v_a_605_);
return v___x_606_;
}
else
{
lean_object* v_head_607_; lean_object* v_tail_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_635_; 
v_head_607_ = lean_ctor_get(v_a_604_, 0);
v_tail_608_ = lean_ctor_get(v_a_604_, 1);
v_isSharedCheck_635_ = !lean_is_exclusive(v_a_604_);
if (v_isSharedCheck_635_ == 0)
{
v___x_610_ = v_a_604_;
v_isShared_611_ = v_isSharedCheck_635_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_tail_608_);
lean_inc(v_head_607_);
lean_dec(v_a_604_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_635_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v_fst_612_; lean_object* v_snd_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_634_; 
v_fst_612_ = lean_ctor_get(v_head_607_, 0);
v_snd_613_ = lean_ctor_get(v_head_607_, 1);
v_isSharedCheck_634_ = !lean_is_exclusive(v_head_607_);
if (v_isSharedCheck_634_ == 0)
{
v___x_615_ = v_head_607_;
v_isShared_616_ = v_isSharedCheck_634_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_snd_613_);
lean_inc(v_fst_612_);
lean_dec(v_head_607_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_634_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_617_ = l_Lean_MessageData_ofName(v_fst_612_);
v___x_618_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__2, &l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__2_once, _init_l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__2);
if (v_isShared_616_ == 0)
{
lean_ctor_set_tag(v___x_615_, 7);
lean_ctor_set(v___x_615_, 1, v___x_618_);
lean_ctor_set(v___x_615_, 0, v___x_617_);
v___x_620_ = v___x_615_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v___x_617_);
lean_ctor_set(v_reuseFailAlloc_633_, 1, v___x_618_);
v___x_620_ = v_reuseFailAlloc_633_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
lean_object* v___x_621_; lean_object* v___x_622_; double v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_630_; 
v___x_621_ = lean_obj_once(&l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__3, &l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__3_once, _init_l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7___closed__3);
v___x_622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_620_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
v___x_623_ = lean_unbox_float(v_snd_613_);
lean_dec(v_snd_613_);
v___x_624_ = lean_float_to_string(v___x_623_);
v___x_625_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
v___x_626_ = l_Lean_MessageData_ofFormat(v___x_625_);
v___x_627_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_627_, 0, v___x_622_);
lean_ctor_set(v___x_627_, 1, v___x_626_);
v___x_628_ = l_Lean_MessageData_paren(v___x_627_);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 1, v_a_605_);
lean_ctor_set(v___x_610_, 0, v___x_628_);
v___x_630_ = v___x_610_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v___x_628_);
lean_ctor_set(v_reuseFailAlloc_632_, 1, v_a_605_);
v___x_630_ = v_reuseFailAlloc_632_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
v_a_604_ = v_tail_608_;
v_a_605_ = v___x_630_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg___lam__0(lean_object* v_x_636_, lean_object* v_x_637_){
_start:
{
lean_object* v_snd_638_; lean_object* v_snd_639_; lean_object* v_snd_640_; lean_object* v_snd_641_; double v___x_642_; double v___x_643_; uint8_t v___x_644_; 
v_snd_638_ = lean_ctor_get(v_x_636_, 1);
v_snd_639_ = lean_ctor_get(v_x_637_, 1);
v_snd_640_ = lean_ctor_get(v_snd_638_, 1);
v_snd_641_ = lean_ctor_get(v_snd_639_, 1);
v___x_642_ = lean_unbox_float(v_snd_641_);
v___x_643_ = lean_unbox_float(v_snd_640_);
v___x_644_ = lean_float_decLt(v___x_642_, v___x_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg___lam__0___boxed(lean_object* v_x_645_, lean_object* v_x_646_){
_start:
{
uint8_t v_res_647_; lean_object* v_r_648_; 
v_res_647_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg___lam__0(v_x_645_, v_x_646_);
lean_dec_ref(v_x_646_);
lean_dec_ref(v_x_645_);
v_r_648_ = lean_box(v_res_647_);
return v_r_648_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5___redArg(lean_object* v_hi_649_, lean_object* v_pivot_650_, lean_object* v_as_651_, lean_object* v_i_652_, lean_object* v_k_653_){
_start:
{
uint8_t v___x_654_; 
v___x_654_ = lean_nat_dec_lt(v_k_653_, v_hi_649_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; lean_object* v___x_656_; 
lean_dec(v_k_653_);
v___x_655_ = lean_array_fswap(v_as_651_, v_i_652_, v_hi_649_);
v___x_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_656_, 0, v_i_652_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
return v___x_656_;
}
else
{
lean_object* v___x_657_; lean_object* v_snd_658_; lean_object* v_snd_659_; lean_object* v_snd_660_; lean_object* v_snd_661_; double v___x_662_; double v___x_663_; uint8_t v___x_664_; 
v___x_657_ = lean_array_fget_borrowed(v_as_651_, v_k_653_);
v_snd_658_ = lean_ctor_get(v___x_657_, 1);
v_snd_659_ = lean_ctor_get(v_pivot_650_, 1);
v_snd_660_ = lean_ctor_get(v_snd_658_, 1);
v_snd_661_ = lean_ctor_get(v_snd_659_, 1);
v___x_662_ = lean_unbox_float(v_snd_661_);
v___x_663_ = lean_unbox_float(v_snd_660_);
v___x_664_ = lean_float_decLt(v___x_662_, v___x_663_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = lean_unsigned_to_nat(1u);
v___x_666_ = lean_nat_add(v_k_653_, v___x_665_);
lean_dec(v_k_653_);
v_k_653_ = v___x_666_;
goto _start;
}
else
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_668_ = lean_array_fswap(v_as_651_, v_i_652_, v_k_653_);
v___x_669_ = lean_unsigned_to_nat(1u);
v___x_670_ = lean_nat_add(v_i_652_, v___x_669_);
lean_dec(v_i_652_);
v___x_671_ = lean_nat_add(v_k_653_, v___x_669_);
lean_dec(v_k_653_);
v_as_651_ = v___x_668_;
v_i_652_ = v___x_670_;
v_k_653_ = v___x_671_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5___redArg___boxed(lean_object* v_hi_673_, lean_object* v_pivot_674_, lean_object* v_as_675_, lean_object* v_i_676_, lean_object* v_k_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5___redArg(v_hi_673_, v_pivot_674_, v_as_675_, v_i_676_, v_k_677_);
lean_dec_ref(v_pivot_674_);
lean_dec(v_hi_673_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg(lean_object* v_n_679_, lean_object* v_as_680_, lean_object* v_lo_681_, lean_object* v_hi_682_){
_start:
{
lean_object* v___y_684_; uint8_t v___x_694_; 
v___x_694_ = lean_nat_dec_lt(v_lo_681_, v_hi_682_);
if (v___x_694_ == 0)
{
lean_dec(v_lo_681_);
return v_as_680_;
}
else
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v_mid_697_; lean_object* v___y_699_; lean_object* v___y_705_; lean_object* v___x_710_; lean_object* v___x_711_; uint8_t v___x_712_; 
v___x_695_ = lean_nat_add(v_lo_681_, v_hi_682_);
v___x_696_ = lean_unsigned_to_nat(1u);
v_mid_697_ = lean_nat_shiftr(v___x_695_, v___x_696_);
lean_dec(v___x_695_);
v___x_710_ = lean_array_fget_borrowed(v_as_680_, v_mid_697_);
v___x_711_ = lean_array_fget_borrowed(v_as_680_, v_lo_681_);
v___x_712_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg___lam__0(v___x_710_, v___x_711_);
if (v___x_712_ == 0)
{
v___y_705_ = v_as_680_;
goto v___jp_704_;
}
else
{
lean_object* v___x_713_; 
v___x_713_ = lean_array_fswap(v_as_680_, v_lo_681_, v_mid_697_);
v___y_705_ = v___x_713_;
goto v___jp_704_;
}
v___jp_698_:
{
lean_object* v___x_700_; lean_object* v___x_701_; uint8_t v___x_702_; 
v___x_700_ = lean_array_fget_borrowed(v___y_699_, v_mid_697_);
v___x_701_ = lean_array_fget_borrowed(v___y_699_, v_hi_682_);
v___x_702_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg___lam__0(v___x_700_, v___x_701_);
if (v___x_702_ == 0)
{
lean_dec(v_mid_697_);
v___y_684_ = v___y_699_;
goto v___jp_683_;
}
else
{
lean_object* v___x_703_; 
v___x_703_ = lean_array_fswap(v___y_699_, v_mid_697_, v_hi_682_);
lean_dec(v_mid_697_);
v___y_684_ = v___x_703_;
goto v___jp_683_;
}
}
v___jp_704_:
{
lean_object* v___x_706_; lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_706_ = lean_array_fget_borrowed(v___y_705_, v_hi_682_);
v___x_707_ = lean_array_fget_borrowed(v___y_705_, v_lo_681_);
v___x_708_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg___lam__0(v___x_706_, v___x_707_);
if (v___x_708_ == 0)
{
v___y_699_ = v___y_705_;
goto v___jp_698_;
}
else
{
lean_object* v___x_709_; 
v___x_709_ = lean_array_fswap(v___y_705_, v_lo_681_, v_hi_682_);
v___y_699_ = v___x_709_;
goto v___jp_698_;
}
}
}
v___jp_683_:
{
lean_object* v_pivot_685_; lean_object* v___x_686_; lean_object* v_fst_687_; lean_object* v_snd_688_; uint8_t v___x_689_; 
v_pivot_685_ = lean_array_fget(v___y_684_, v_hi_682_);
lean_inc_n(v_lo_681_, 2);
v___x_686_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5___redArg(v_hi_682_, v_pivot_685_, v___y_684_, v_lo_681_, v_lo_681_);
lean_dec(v_pivot_685_);
v_fst_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_fst_687_);
v_snd_688_ = lean_ctor_get(v___x_686_, 1);
lean_inc(v_snd_688_);
lean_dec_ref(v___x_686_);
v___x_689_ = lean_nat_dec_le(v_hi_682_, v_fst_687_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_690_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg(v_n_679_, v_snd_688_, v_lo_681_, v_fst_687_);
v___x_691_ = lean_unsigned_to_nat(1u);
v___x_692_ = lean_nat_add(v_fst_687_, v___x_691_);
lean_dec(v_fst_687_);
v_as_680_ = v___x_690_;
v_lo_681_ = v___x_692_;
goto _start;
}
else
{
lean_dec(v_fst_687_);
lean_dec(v_lo_681_);
return v_snd_688_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg___boxed(lean_object* v_n_714_, lean_object* v_as_715_, lean_object* v_lo_716_, lean_object* v_hi_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg(v_n_714_, v_as_715_, v_lo_716_, v_hi_717_);
lean_dec(v_hi_717_);
lean_dec(v_n_714_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__1(double v___x_719_, lean_object* v_as_720_, size_t v_sz_721_, size_t v_i_722_, lean_object* v_b_723_){
_start:
{
lean_object* v_a_725_; uint8_t v___x_729_; 
v___x_729_ = lean_usize_dec_lt(v_i_722_, v_sz_721_);
if (v___x_729_ == 0)
{
return v_b_723_;
}
else
{
lean_object* v_a_730_; lean_object* v_snd_731_; lean_object* v_snd_732_; lean_object* v_fst_733_; lean_object* v_snd_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_748_; 
v_a_730_ = lean_array_uget_borrowed(v_as_720_, v_i_722_);
v_snd_731_ = lean_ctor_get(v_a_730_, 1);
v_snd_732_ = lean_ctor_get(v_snd_731_, 1);
v_fst_733_ = lean_ctor_get(v_b_723_, 0);
v_snd_734_ = lean_ctor_get(v_b_723_, 1);
v_isSharedCheck_748_ = !lean_is_exclusive(v_b_723_);
if (v_isSharedCheck_748_ == 0)
{
v___x_736_ = v_b_723_;
v_isShared_737_ = v_isSharedCheck_748_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_snd_734_);
lean_inc(v_fst_733_);
lean_dec(v_b_723_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_748_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
double v___x_738_; uint8_t v___x_739_; 
v___x_738_ = lean_unbox_float(v_snd_732_);
v___x_739_ = lean_float_decLe(v___x_719_, v___x_738_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; lean_object* v___x_742_; 
lean_inc(v_a_730_);
v___x_740_ = lean_array_push(v_snd_734_, v_a_730_);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 1, v___x_740_);
v___x_742_ = v___x_736_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_fst_733_);
lean_ctor_set(v_reuseFailAlloc_743_, 1, v___x_740_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
v_a_725_ = v___x_742_;
goto v___jp_724_;
}
}
else
{
lean_object* v___x_744_; lean_object* v___x_746_; 
lean_inc(v_a_730_);
v___x_744_ = lean_array_push(v_fst_733_, v_a_730_);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v___x_744_);
v___x_746_ = v___x_736_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_snd_734_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
v_a_725_ = v___x_746_;
goto v___jp_724_;
}
}
}
}
v___jp_724_:
{
size_t v___x_726_; size_t v___x_727_; 
v___x_726_ = ((size_t)1ULL);
v___x_727_ = lean_usize_add(v_i_722_, v___x_726_);
v_i_722_ = v___x_727_;
v_b_723_ = v_a_725_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__1___boxed(lean_object* v___x_749_, lean_object* v_as_750_, lean_object* v_sz_751_, lean_object* v_i_752_, lean_object* v_b_753_){
_start:
{
double v___x_16134__boxed_754_; size_t v_sz_boxed_755_; size_t v_i_boxed_756_; lean_object* v_res_757_; 
v___x_16134__boxed_754_ = lean_unbox_float(v___x_749_);
lean_dec_ref(v___x_749_);
v_sz_boxed_755_ = lean_unbox_usize(v_sz_751_);
lean_dec(v_sz_751_);
v_i_boxed_756_ = lean_unbox_usize(v_i_752_);
lean_dec(v_i_752_);
v_res_757_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__1(v___x_16134__boxed_754_, v_as_750_, v_sz_boxed_755_, v_i_boxed_756_, v_b_753_);
lean_dec_ref(v_as_750_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__0(lean_object* v_score_758_, lean_object* v___x_759_, size_t v_sz_760_, size_t v_i_761_, lean_object* v_bs_762_){
_start:
{
uint8_t v___x_763_; 
v___x_763_ = lean_usize_dec_lt(v_i_761_, v_sz_760_);
if (v___x_763_ == 0)
{
lean_dec(v___x_759_);
lean_dec_ref(v_score_758_);
return v_bs_762_;
}
else
{
lean_object* v_v_764_; lean_object* v_fst_765_; lean_object* v_snd_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_781_; 
v_v_764_ = lean_array_uget(v_bs_762_, v_i_761_);
v_fst_765_ = lean_ctor_get(v_v_764_, 0);
v_snd_766_ = lean_ctor_get(v_v_764_, 1);
v_isSharedCheck_781_ = !lean_is_exclusive(v_v_764_);
if (v_isSharedCheck_781_ == 0)
{
v___x_768_ = v_v_764_;
v_isShared_769_ = v_isSharedCheck_781_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_snd_766_);
lean_inc(v_fst_765_);
lean_dec(v_v_764_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_781_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_770_; lean_object* v_bs_x27_771_; lean_object* v___x_772_; lean_object* v___x_774_; 
v___x_770_ = lean_unsigned_to_nat(0u);
v_bs_x27_771_ = lean_array_uset(v_bs_762_, v_i_761_, v___x_770_);
lean_inc_ref(v_score_758_);
lean_inc(v_snd_766_);
lean_inc(v___x_759_);
v___x_772_ = lean_apply_2(v_score_758_, v___x_759_, v_snd_766_);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 1, v___x_772_);
lean_ctor_set(v___x_768_, 0, v_snd_766_);
v___x_774_ = v___x_768_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_snd_766_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v___x_772_);
v___x_774_ = v_reuseFailAlloc_780_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_775_; size_t v___x_776_; size_t v___x_777_; lean_object* v___x_778_; 
v___x_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_775_, 0, v_fst_765_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
v___x_776_ = ((size_t)1ULL);
v___x_777_ = lean_usize_add(v_i_761_, v___x_776_);
v___x_778_ = lean_array_uset(v_bs_x27_771_, v_i_761_, v___x_775_);
v_i_761_ = v___x_777_;
v_bs_762_ = v___x_778_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__0___boxed(lean_object* v_score_782_, lean_object* v___x_783_, lean_object* v_sz_784_, lean_object* v_i_785_, lean_object* v_bs_786_){
_start:
{
size_t v_sz_boxed_787_; size_t v_i_boxed_788_; lean_object* v_res_789_; 
v_sz_boxed_787_ = lean_unbox_usize(v_sz_784_);
lean_dec(v_sz_784_);
v_i_boxed_788_ = lean_unbox_usize(v_i_785_);
lean_dec(v_i_785_);
v_res_789_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__0(v_score_782_, v___x_783_, v_sz_boxed_787_, v_i_boxed_788_, v_bs_786_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__3(lean_object* v_as_790_, size_t v_i_791_, size_t v_stop_792_, lean_object* v_b_793_){
_start:
{
uint8_t v___x_794_; 
v___x_794_ = lean_usize_dec_eq(v_i_791_, v_stop_792_);
if (v___x_794_ == 0)
{
lean_object* v___x_795_; lean_object* v_snd_796_; lean_object* v_fst_797_; lean_object* v___x_798_; size_t v___x_799_; size_t v___x_800_; 
v___x_795_ = lean_array_uget_borrowed(v_as_790_, v_i_791_);
v_snd_796_ = lean_ctor_get(v___x_795_, 1);
v_fst_797_ = lean_ctor_get(v_snd_796_, 0);
lean_inc(v_fst_797_);
v___x_798_ = l_Lean_NameSet_append(v_b_793_, v_fst_797_);
v___x_799_ = ((size_t)1ULL);
v___x_800_ = lean_usize_add(v_i_791_, v___x_799_);
v_i_791_ = v___x_800_;
v_b_793_ = v___x_798_;
goto _start;
}
else
{
return v_b_793_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__3___boxed(lean_object* v_as_802_, lean_object* v_i_803_, lean_object* v_stop_804_, lean_object* v_b_805_){
_start:
{
size_t v_i_boxed_806_; size_t v_stop_boxed_807_; lean_object* v_res_808_; 
v_i_boxed_806_ = lean_unbox_usize(v_i_803_);
lean_dec(v_i_803_);
v_stop_boxed_807_ = lean_unbox_usize(v_stop_804_);
lean_dec(v_stop_804_);
v_res_808_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__3(v_as_802_, v_i_boxed_806_, v_stop_boxed_807_, v_b_805_);
lean_dec_ref(v_as_802_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__4(lean_object* v_as_809_, size_t v_i_810_, size_t v_stop_811_, lean_object* v_b_812_){
_start:
{
uint8_t v___x_813_; 
v___x_813_ = lean_usize_dec_eq(v_i_810_, v_stop_811_);
if (v___x_813_ == 0)
{
lean_object* v___x_814_; lean_object* v_snd_815_; lean_object* v_fst_816_; lean_object* v_snd_817_; lean_object* v___x_818_; lean_object* v___x_819_; double v___x_820_; lean_object* v___x_821_; size_t v___x_822_; size_t v___x_823_; 
v___x_814_ = lean_array_uget_borrowed(v_as_809_, v_i_810_);
v_snd_815_ = lean_ctor_get(v___x_814_, 1);
v_fst_816_ = lean_ctor_get(v___x_814_, 0);
v_snd_817_ = lean_ctor_get(v_snd_815_, 1);
v___x_818_ = lean_box(0);
lean_inc(v_fst_816_);
v___x_819_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_819_, 0, v_fst_816_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
v___x_820_ = lean_unbox_float(v_snd_817_);
lean_ctor_set_float(v___x_819_, sizeof(void*)*2, v___x_820_);
v___x_821_ = lean_array_push(v_b_812_, v___x_819_);
v___x_822_ = ((size_t)1ULL);
v___x_823_ = lean_usize_add(v_i_810_, v___x_822_);
v_i_810_ = v___x_823_;
v_b_812_ = v___x_821_;
goto _start;
}
else
{
return v_b_812_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__4___boxed(lean_object* v_as_825_, lean_object* v_i_826_, lean_object* v_stop_827_, lean_object* v_b_828_){
_start:
{
size_t v_i_boxed_829_; size_t v_stop_boxed_830_; lean_object* v_res_831_; 
v_i_boxed_829_ = lean_unbox_usize(v_i_826_);
lean_dec(v_i_826_);
v_stop_boxed_830_ = lean_unbox_usize(v_stop_827_);
lean_dec(v_stop_827_);
v_res_831_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__4(v_as_825_, v_i_boxed_829_, v_stop_boxed_830_, v_b_828_);
lean_dec_ref(v_as_825_);
return v_res_831_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__9(lean_object* v_a_832_, lean_object* v_a_833_){
_start:
{
if (lean_obj_tag(v_a_832_) == 0)
{
lean_object* v___x_834_; 
v___x_834_ = l_List_reverse___redArg(v_a_833_);
return v___x_834_;
}
else
{
lean_object* v_head_835_; lean_object* v_tail_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_845_; 
v_head_835_ = lean_ctor_get(v_a_832_, 0);
v_tail_836_ = lean_ctor_get(v_a_832_, 1);
v_isSharedCheck_845_ = !lean_is_exclusive(v_a_832_);
if (v_isSharedCheck_845_ == 0)
{
v___x_838_ = v_a_832_;
v_isShared_839_ = v_isSharedCheck_845_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_tail_836_);
lean_inc(v_head_835_);
lean_dec(v_a_832_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_845_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_840_ = l_Lean_MessageData_ofName(v_head_835_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 1, v_a_833_);
lean_ctor_set(v___x_838_, 0, v___x_840_);
v___x_842_ = v___x_838_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_840_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v_a_833_);
v___x_842_ = v_reuseFailAlloc_844_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
v_a_832_ = v_tail_836_;
v_a_833_ = v___x_842_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__2));
v___x_851_ = l_Lean_stringToMessageData(v___x_850_);
return v___x_851_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__4));
v___x_854_ = l_Lean_stringToMessageData(v___x_853_);
return v___x_854_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__7(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__6));
v___x_857_ = l_Lean_stringToMessageData(v___x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1(lean_object* v_fst_858_, double v_c_859_, lean_object* v___x_860_, lean_object* v___x_861_, lean_object* v_fst_862_, lean_object* v_snd_863_, lean_object* v_fst_864_, lean_object* v_score_865_, lean_object* v___x_866_, lean_object* v___f_867_, lean_object* v_____r_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
lean_object* v___y_873_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; size_t v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v___y_896_; size_t v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_909_; lean_object* v___y_918_; size_t v___y_919_; lean_object* v___y_920_; lean_object* v___y_921_; lean_object* v___y_922_; lean_object* v___y_923_; lean_object* v___y_924_; lean_object* v___y_927_; size_t v___y_928_; lean_object* v___y_929_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_933_; size_t v___y_936_; lean_object* v___y_937_; uint8_t v___y_938_; lean_object* v___y_939_; lean_object* v___y_940_; lean_object* v___x_996_; 
lean_inc(v___y_870_);
lean_inc_ref(v___y_869_);
v___x_996_ = lean_apply_3(v___f_867_, v___y_869_, v___y_870_, lean_box(0));
if (lean_obj_tag(v___x_996_) == 0)
{
lean_object* v_a_997_; uint8_t v___x_998_; 
v_a_997_ = lean_ctor_get(v___x_996_, 0);
lean_inc(v_a_997_);
lean_dec_ref_known(v___x_996_, 1);
v___x_998_ = lean_unbox(v_a_997_);
lean_dec(v_a_997_);
if (v___x_998_ == 0)
{
goto v___jp_944_;
}
else
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_999_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__7, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__7_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__7);
v___x_1000_ = l_Lean_NameSet_toList(v_fst_862_);
v___x_1001_ = lean_box(0);
v___x_1002_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__9(v___x_1000_, v___x_1001_);
v___x_1003_ = l_Lean_MessageData_ofList(v___x_1002_);
v___x_1004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1004_, 0, v___x_999_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
v___x_1005_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5);
v___x_1006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
lean_inc(v___x_866_);
v___x_1007_ = l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8(v___x_866_, v___x_1006_, v___y_869_, v___y_870_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_dec_ref_known(v___x_1007_, 1);
goto v___jp_944_;
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
lean_dec(v___x_866_);
lean_dec_ref(v_score_865_);
lean_dec(v_fst_864_);
lean_dec(v_snd_863_);
lean_dec(v_fst_862_);
lean_dec(v___x_861_);
lean_dec(v___x_860_);
lean_dec(v_fst_858_);
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1007_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_1007_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_1007_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
lean_dec(v___x_866_);
lean_dec_ref(v_score_865_);
lean_dec(v_fst_864_);
lean_dec(v_snd_863_);
lean_dec(v_fst_862_);
lean_dec(v___x_861_);
lean_dec(v___x_860_);
lean_dec(v_fst_858_);
v_a_1016_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_996_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_996_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
v___jp_872_:
{
double v___x_877_; double v___x_878_; double v___x_879_; double v___x_880_; double v___x_881_; double v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_877_ = lean_float_of_nat(v___y_875_);
v___x_878_ = lean_unbox_float(v_fst_858_);
v___x_879_ = lean_float_sub(v___x_877_, v___x_878_);
v___x_880_ = lean_float_div(v___x_879_, v_c_859_);
v___x_881_ = lean_unbox_float(v_fst_858_);
lean_dec(v_fst_858_);
v___x_882_ = lean_float_add(v___x_881_, v___x_880_);
v___x_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_883_, 0, v___y_876_);
lean_ctor_set(v___x_883_, 1, v___y_874_);
v___x_884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_884_, 0, v___y_873_);
lean_ctor_set(v___x_884_, 1, v___x_883_);
v___x_885_ = lean_box_float(v___x_882_);
v___x_886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_886_, 0, v___x_885_);
lean_ctor_set(v___x_886_, 1, v___x_884_);
v___x_887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_887_, 0, v___x_860_);
lean_ctor_set(v___x_887_, 1, v___x_886_);
v___x_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
v___x_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
v___jp_890_:
{
size_t v_sz_897_; lean_object* v___x_898_; uint8_t v___x_899_; 
v_sz_897_ = lean_array_size(v___y_892_);
v___x_898_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__2(v_sz_897_, v___y_891_, v___y_892_);
v___x_899_ = lean_nat_dec_lt(v___x_861_, v___y_893_);
lean_dec(v___x_861_);
if (v___x_899_ == 0)
{
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
v___y_873_ = v___x_898_;
v___y_874_ = v___y_896_;
v___y_875_ = v___y_895_;
v___y_876_ = v_fst_862_;
goto v___jp_872_;
}
else
{
uint8_t v___x_900_; 
v___x_900_ = lean_nat_dec_le(v___y_893_, v___y_893_);
if (v___x_900_ == 0)
{
if (v___x_899_ == 0)
{
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
v___y_873_ = v___x_898_;
v___y_874_ = v___y_896_;
v___y_875_ = v___y_895_;
v___y_876_ = v_fst_862_;
goto v___jp_872_;
}
else
{
size_t v___x_901_; lean_object* v___x_902_; 
v___x_901_ = lean_usize_of_nat(v___y_893_);
lean_dec(v___y_893_);
v___x_902_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__3(v___y_894_, v___y_891_, v___x_901_, v_fst_862_);
lean_dec_ref(v___y_894_);
v___y_873_ = v___x_898_;
v___y_874_ = v___y_896_;
v___y_875_ = v___y_895_;
v___y_876_ = v___x_902_;
goto v___jp_872_;
}
}
else
{
size_t v___x_903_; lean_object* v___x_904_; 
v___x_903_ = lean_usize_of_nat(v___y_893_);
lean_dec(v___y_893_);
v___x_904_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__3(v___y_894_, v___y_891_, v___x_903_, v_fst_862_);
lean_dec_ref(v___y_894_);
v___y_873_ = v___x_898_;
v___y_874_ = v___y_896_;
v___y_875_ = v___y_895_;
v___y_876_ = v___x_904_;
goto v___jp_872_;
}
}
}
v___jp_905_:
{
lean_object* v___x_910_; uint8_t v___x_911_; 
v___x_910_ = lean_array_get_size(v___y_909_);
v___x_911_ = lean_nat_dec_lt(v___x_861_, v___x_910_);
if (v___x_911_ == 0)
{
v___y_891_ = v___y_906_;
v___y_892_ = v___y_907_;
v___y_893_ = v___x_910_;
v___y_894_ = v___y_909_;
v___y_895_ = v___y_908_;
v___y_896_ = v_snd_863_;
goto v___jp_890_;
}
else
{
uint8_t v___x_912_; 
v___x_912_ = lean_nat_dec_le(v___x_910_, v___x_910_);
if (v___x_912_ == 0)
{
if (v___x_911_ == 0)
{
v___y_891_ = v___y_906_;
v___y_892_ = v___y_907_;
v___y_893_ = v___x_910_;
v___y_894_ = v___y_909_;
v___y_895_ = v___y_908_;
v___y_896_ = v_snd_863_;
goto v___jp_890_;
}
else
{
size_t v___x_913_; lean_object* v___x_914_; 
v___x_913_ = lean_usize_of_nat(v___x_910_);
v___x_914_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__4(v___y_909_, v___y_906_, v___x_913_, v_snd_863_);
v___y_891_ = v___y_906_;
v___y_892_ = v___y_907_;
v___y_893_ = v___x_910_;
v___y_894_ = v___y_909_;
v___y_895_ = v___y_908_;
v___y_896_ = v___x_914_;
goto v___jp_890_;
}
}
else
{
size_t v___x_915_; lean_object* v___x_916_; 
v___x_915_ = lean_usize_of_nat(v___x_910_);
v___x_916_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__4(v___y_909_, v___y_906_, v___x_915_, v_snd_863_);
v___y_891_ = v___y_906_;
v___y_892_ = v___y_907_;
v___y_893_ = v___x_910_;
v___y_894_ = v___y_909_;
v___y_895_ = v___y_908_;
v___y_896_ = v___x_916_;
goto v___jp_890_;
}
}
}
v___jp_917_:
{
lean_object* v___x_925_; 
v___x_925_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg(v___y_923_, v___y_921_, v___y_918_, v___y_924_);
lean_dec(v___y_924_);
lean_dec(v___y_923_);
v___y_906_ = v___y_919_;
v___y_907_ = v___y_920_;
v___y_908_ = v___y_922_;
v___y_909_ = v___x_925_;
goto v___jp_905_;
}
v___jp_926_:
{
uint8_t v___x_934_; 
v___x_934_ = lean_nat_dec_le(v___y_933_, v___y_927_);
if (v___x_934_ == 0)
{
lean_dec(v___y_927_);
lean_inc(v___y_933_);
v___y_918_ = v___y_933_;
v___y_919_ = v___y_928_;
v___y_920_ = v___y_929_;
v___y_921_ = v___y_930_;
v___y_922_ = v___y_932_;
v___y_923_ = v___y_931_;
v___y_924_ = v___y_933_;
goto v___jp_917_;
}
else
{
v___y_918_ = v___y_933_;
v___y_919_ = v___y_928_;
v___y_920_ = v___y_929_;
v___y_921_ = v___y_930_;
v___y_922_ = v___y_932_;
v___y_923_ = v___y_931_;
v___y_924_ = v___y_927_;
goto v___jp_917_;
}
}
v___jp_935_:
{
lean_object* v___x_941_; 
v___x_941_ = lean_unsigned_to_nat(1u);
if (v___y_938_ == 0)
{
lean_object* v___x_942_; uint8_t v___x_943_; 
v___x_942_ = lean_nat_sub(v___y_940_, v___x_941_);
v___x_943_ = lean_nat_dec_le(v___x_861_, v___x_942_);
if (v___x_943_ == 0)
{
lean_inc(v___x_942_);
v___y_927_ = v___x_942_;
v___y_928_ = v___y_936_;
v___y_929_ = v___y_937_;
v___y_930_ = v___y_939_;
v___y_931_ = v___y_940_;
v___y_932_ = v___x_941_;
v___y_933_ = v___x_942_;
goto v___jp_926_;
}
else
{
lean_inc(v___x_861_);
v___y_927_ = v___x_942_;
v___y_928_ = v___y_936_;
v___y_929_ = v___y_937_;
v___y_930_ = v___y_939_;
v___y_931_ = v___y_940_;
v___y_932_ = v___x_941_;
v___y_933_ = v___x_861_;
goto v___jp_926_;
}
}
else
{
lean_dec(v___y_940_);
v___y_906_ = v___y_936_;
v___y_907_ = v___y_937_;
v___y_908_ = v___x_941_;
v___y_909_ = v___y_939_;
goto v___jp_905_;
}
}
v___jp_944_:
{
size_t v_sz_945_; size_t v___x_946_; lean_object* v___x_947_; lean_object* v_bs_948_; lean_object* v___x_949_; size_t v_sz_950_; double v___x_951_; lean_object* v___x_952_; lean_object* v_fst_953_; lean_object* v_snd_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_995_; 
v_sz_945_ = lean_array_size(v_fst_864_);
v___x_946_ = ((size_t)0ULL);
lean_inc(v_fst_864_);
lean_inc(v_fst_862_);
v___x_947_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__0(v_score_865_, v_fst_862_, v_sz_945_, v___x_946_, v_fst_864_);
v_bs_948_ = lean_mk_empty_array_with_capacity(v___x_861_);
lean_inc_ref(v_bs_948_);
v___x_949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_949_, 0, v_bs_948_);
lean_ctor_set(v___x_949_, 1, v_bs_948_);
v_sz_950_ = lean_array_size(v___x_947_);
v___x_951_ = lean_unbox_float(v_fst_858_);
v___x_952_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__1(v___x_951_, v___x_947_, v_sz_950_, v___x_946_, v___x_949_);
lean_dec_ref(v___x_947_);
v_fst_953_ = lean_ctor_get(v___x_952_, 0);
v_snd_954_ = lean_ctor_get(v___x_952_, 1);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_995_ == 0)
{
v___x_956_ = v___x_952_;
v_isShared_957_ = v_isSharedCheck_995_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_snd_954_);
lean_inc(v_fst_953_);
lean_dec(v___x_952_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_995_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_958_ = lean_array_get_size(v_fst_953_);
v___x_959_ = lean_nat_dec_eq(v___x_958_, v___x_861_);
if (v___x_959_ == 0)
{
lean_object* v_toCold_960_; lean_object* v_options_961_; uint8_t v_hasTrace_962_; 
lean_del_object(v___x_956_);
lean_dec(v_fst_864_);
v_toCold_960_ = lean_ctor_get(v___y_869_, 0);
v_options_961_ = lean_ctor_get(v_toCold_960_, 2);
v_hasTrace_962_ = lean_ctor_get_uint8(v_options_961_, sizeof(void*)*1);
if (v_hasTrace_962_ == 0)
{
lean_dec(v___x_866_);
v___y_936_ = v___x_946_;
v___y_937_ = v_snd_954_;
v___y_938_ = v___x_959_;
v___y_939_ = v_fst_953_;
v___y_940_ = v___x_958_;
goto v___jp_935_;
}
else
{
lean_object* v_inheritedTraceOptions_963_; lean_object* v___x_964_; lean_object* v___x_965_; uint8_t v___x_966_; 
v_inheritedTraceOptions_963_ = lean_ctor_get(v_toCold_960_, 11);
v___x_964_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__1));
lean_inc(v___x_866_);
v___x_965_ = l_Lean_Name_append(v___x_964_, v___x_866_);
v___x_966_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_963_, v_options_961_, v___x_965_);
lean_dec(v___x_965_);
if (v___x_966_ == 0)
{
lean_dec(v___x_866_);
v___y_936_ = v___x_946_;
v___y_937_ = v_snd_954_;
v___y_938_ = v___x_959_;
v___y_939_ = v_fst_953_;
v___y_940_ = v___x_958_;
goto v___jp_935_;
}
else
{
lean_object* v___x_967_; size_t v_sz_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_967_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__3, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__3_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__3);
v_sz_968_ = lean_array_size(v_fst_953_);
lean_inc(v_fst_953_);
v___x_969_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__6(v_sz_968_, v___x_946_, v_fst_953_);
v___x_970_ = lean_array_to_list(v___x_969_);
v___x_971_ = lean_box(0);
v___x_972_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7(v___x_970_, v___x_971_);
v___x_973_ = l_Lean_MessageData_ofList(v___x_972_);
v___x_974_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_967_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5);
v___x_976_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_974_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8(v___x_866_, v___x_976_, v___y_869_, v___y_870_);
if (lean_obj_tag(v___x_977_) == 0)
{
lean_dec_ref_known(v___x_977_, 1);
v___y_936_ = v___x_946_;
v___y_937_ = v_snd_954_;
v___y_938_ = v___x_959_;
v___y_939_ = v_fst_953_;
v___y_940_ = v___x_958_;
goto v___jp_935_;
}
else
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
lean_dec(v_snd_954_);
lean_dec(v_fst_953_);
lean_dec(v_snd_863_);
lean_dec(v_fst_862_);
lean_dec(v___x_861_);
lean_dec(v___x_860_);
lean_dec(v_fst_858_);
v_a_978_ = lean_ctor_get(v___x_977_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_977_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_977_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
}
}
else
{
lean_object* v___x_986_; lean_object* v___x_988_; 
lean_dec(v_snd_954_);
lean_dec(v_fst_953_);
lean_dec(v___x_866_);
lean_dec(v___x_861_);
lean_dec(v___x_860_);
lean_inc(v_snd_863_);
v___x_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_986_, 0, v_snd_863_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v_snd_863_);
lean_ctor_set(v___x_956_, 0, v_fst_862_);
v___x_988_ = v___x_956_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_fst_862_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_snd_863_);
v___x_988_ = v_reuseFailAlloc_994_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_989_, 0, v_fst_864_);
lean_ctor_set(v___x_989_, 1, v___x_988_);
v___x_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_990_, 0, v_fst_858_);
lean_ctor_set(v___x_990_, 1, v___x_989_);
v___x_991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_991_, 0, v___x_986_);
lean_ctor_set(v___x_991_, 1, v___x_990_);
v___x_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
v___x_993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
return v___x_993_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___boxed(lean_object* v_fst_1024_, lean_object* v_c_1025_, lean_object* v___x_1026_, lean_object* v___x_1027_, lean_object* v_fst_1028_, lean_object* v_snd_1029_, lean_object* v_fst_1030_, lean_object* v_score_1031_, lean_object* v___x_1032_, lean_object* v___f_1033_, lean_object* v_____r_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_){
_start:
{
double v_c_boxed_1038_; lean_object* v_res_1039_; 
v_c_boxed_1038_ = lean_unbox_float(v_c_1025_);
lean_dec_ref(v_c_1025_);
v_res_1039_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1(v_fst_1024_, v_c_boxed_1038_, v___x_1026_, v___x_1027_, v_fst_1028_, v_snd_1029_, v_fst_1030_, v_score_1031_, v___x_1032_, v___f_1033_, v_____r_1034_, v___y_1035_, v___y_1036_);
lean_dec(v___y_1036_);
lean_dec_ref(v___y_1035_);
return v_res_1039_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__0(lean_object* v___x_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_toCold_1044_; lean_object* v_options_1045_; uint8_t v_hasTrace_1046_; 
v_toCold_1044_ = lean_ctor_get(v___y_1041_, 0);
v_options_1045_ = lean_ctor_get(v_toCold_1044_, 2);
v_hasTrace_1046_ = lean_ctor_get_uint8(v_options_1045_, sizeof(void*)*1);
if (v_hasTrace_1046_ == 0)
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_dec(v___x_1040_);
v___x_1047_ = lean_box(v_hasTrace_1046_);
v___x_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1048_, 0, v___x_1047_);
return v___x_1048_;
}
else
{
lean_object* v_inheritedTraceOptions_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; uint8_t v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v_inheritedTraceOptions_1049_ = lean_ctor_get(v_toCold_1044_, 11);
v___x_1050_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__1));
v___x_1051_ = l_Lean_Name_append(v___x_1050_, v___x_1040_);
v___x_1052_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1049_, v_options_1045_, v___x_1051_);
lean_dec(v___x_1051_);
v___x_1053_ = lean_box(v___x_1052_);
v___x_1054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1053_);
return v___x_1054_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__0___boxed(lean_object* v___x_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__0(v___x_1055_, v___y_1056_, v___y_1057_);
lean_dec(v___y_1057_);
lean_dec_ref(v___y_1056_);
return v_res_1059_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__2(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__1));
v___x_1064_ = l_Lean_stringToMessageData(v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg(lean_object* v_maxSuggestions_1065_, lean_object* v_score_1066_, double v_c_1067_, lean_object* v_a_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v___y_1073_; lean_object* v_snd_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1171_; 
v_snd_1093_ = lean_ctor_get(v_a_1068_, 1);
v_isSharedCheck_1171_ = !lean_is_exclusive(v_a_1068_);
if (v_isSharedCheck_1171_ == 0)
{
lean_object* v_unused_1172_; 
v_unused_1172_ = lean_ctor_get(v_a_1068_, 0);
lean_dec(v_unused_1172_);
v___x_1095_ = v_a_1068_;
v_isShared_1096_ = v_isSharedCheck_1171_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_snd_1093_);
lean_dec(v_a_1068_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1171_;
goto v_resetjp_1094_;
}
v___jp_1072_:
{
if (lean_obj_tag(v___y_1073_) == 0)
{
lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1084_; 
v_a_1074_ = lean_ctor_get(v___y_1073_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___y_1073_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1076_ = v___y_1073_;
v_isShared_1077_ = v_isSharedCheck_1084_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___y_1073_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1084_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
if (lean_obj_tag(v_a_1074_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1080_; 
lean_dec_ref(v_score_1066_);
v_a_1078_ = lean_ctor_get(v_a_1074_, 0);
lean_inc(v_a_1078_);
lean_dec_ref_known(v_a_1074_, 1);
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 0, v_a_1078_);
v___x_1080_ = v___x_1076_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1078_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
else
{
lean_object* v_a_1082_; 
lean_del_object(v___x_1076_);
v_a_1082_ = lean_ctor_get(v_a_1074_, 0);
lean_inc(v_a_1082_);
lean_dec_ref_known(v_a_1074_, 1);
v_a_1068_ = v_a_1082_;
goto _start;
}
}
}
else
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1092_; 
lean_dec_ref(v_score_1066_);
v_a_1085_ = lean_ctor_get(v___y_1073_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___y_1073_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1087_ = v___y_1073_;
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___y_1073_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1092_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1090_; 
if (v_isShared_1088_ == 0)
{
v___x_1090_ = v___x_1087_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1085_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
v_resetjp_1094_:
{
lean_object* v_snd_1097_; lean_object* v_snd_1098_; lean_object* v_fst_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1169_; 
v_snd_1097_ = lean_ctor_get(v_snd_1093_, 1);
lean_inc(v_snd_1097_);
v_snd_1098_ = lean_ctor_get(v_snd_1097_, 1);
lean_inc(v_snd_1098_);
v_fst_1099_ = lean_ctor_get(v_snd_1093_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_snd_1093_);
if (v_isSharedCheck_1169_ == 0)
{
lean_object* v_unused_1170_; 
v_unused_1170_ = lean_ctor_get(v_snd_1093_, 1);
lean_dec(v_unused_1170_);
v___x_1101_ = v_snd_1093_;
v_isShared_1102_ = v_isSharedCheck_1169_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_fst_1099_);
lean_dec(v_snd_1093_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1169_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v_fst_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1167_; 
v_fst_1103_ = lean_ctor_get(v_snd_1097_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v_snd_1097_);
if (v_isSharedCheck_1167_ == 0)
{
lean_object* v_unused_1168_; 
v_unused_1168_ = lean_ctor_get(v_snd_1097_, 1);
lean_dec(v_unused_1168_);
v___x_1105_ = v_snd_1097_;
v_isShared_1106_ = v_isSharedCheck_1167_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_fst_1103_);
lean_dec(v_snd_1097_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1167_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v_fst_1107_; lean_object* v_snd_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1166_; 
v_fst_1107_ = lean_ctor_get(v_snd_1098_, 0);
v_snd_1108_ = lean_ctor_get(v_snd_1098_, 1);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_snd_1098_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1110_ = v_snd_1098_;
v_isShared_1111_ = v_isSharedCheck_1166_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_snd_1108_);
lean_inc(v_fst_1107_);
lean_dec(v_snd_1098_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1166_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1112_; lean_object* v___x_1127_; lean_object* v___x_1128_; uint8_t v___x_1129_; 
v___x_1112_ = lean_box(0);
v___x_1127_ = lean_unsigned_to_nat(0u);
v___x_1128_ = lean_array_get_size(v_fst_1103_);
v___x_1129_ = lean_nat_dec_lt(v___x_1127_, v___x_1128_);
if (v___x_1129_ == 0)
{
lean_dec_ref(v_score_1066_);
goto v___jp_1113_;
}
else
{
lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1130_ = lean_array_get_size(v_snd_1108_);
v___x_1131_ = lean_nat_dec_lt(v___x_1130_, v_maxSuggestions_1065_);
if (v___x_1131_ == 0)
{
lean_dec_ref(v_score_1066_);
goto v___jp_1113_;
}
else
{
lean_object* v___x_1132_; lean_object* v___f_1133_; lean_object* v___x_1134_; 
lean_del_object(v___x_1110_);
lean_del_object(v___x_1105_);
lean_del_object(v___x_1101_);
lean_del_object(v___x_1095_);
v___x_1132_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__1_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_));
v___f_1133_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__0));
v___x_1134_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__0(v___x_1132_, v___y_1069_, v___y_1070_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; uint8_t v___x_1136_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
lean_inc(v_a_1135_);
lean_dec_ref_known(v___x_1134_, 1);
v___x_1136_ = lean_unbox(v_a_1135_);
lean_dec(v_a_1135_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1137_ = lean_box(0);
lean_inc_ref(v_score_1066_);
v___x_1138_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1(v_fst_1099_, v_c_1067_, v___x_1112_, v___x_1127_, v_fst_1107_, v_snd_1108_, v_fst_1103_, v_score_1066_, v___x_1132_, v___f_1133_, v___x_1137_, v___y_1069_, v___y_1070_);
v___y_1073_ = v___x_1138_;
goto v___jp_1072_;
}
else
{
lean_object* v___x_1139_; double v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1139_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__2);
v___x_1140_ = lean_unbox_float(v_fst_1099_);
v___x_1141_ = lean_float_to_string(v___x_1140_);
v___x_1142_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1141_);
v___x_1143_ = l_Lean_MessageData_ofFormat(v___x_1142_);
v___x_1144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1139_);
lean_ctor_set(v___x_1144_, 1, v___x_1143_);
v___x_1145_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5);
v___x_1146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1144_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___x_1147_ = l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8(v___x_1132_, v___x_1146_, v___y_1069_, v___y_1070_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; lean_object* v___x_1149_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
lean_inc(v_a_1148_);
lean_dec_ref_known(v___x_1147_, 1);
lean_inc_ref(v_score_1066_);
v___x_1149_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1(v_fst_1099_, v_c_1067_, v___x_1112_, v___x_1127_, v_fst_1107_, v_snd_1108_, v_fst_1103_, v_score_1066_, v___x_1132_, v___f_1133_, v_a_1148_, v___y_1069_, v___y_1070_);
v___y_1073_ = v___x_1149_;
goto v___jp_1072_;
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
lean_dec(v_snd_1108_);
lean_dec(v_fst_1107_);
lean_dec(v_fst_1103_);
lean_dec(v_fst_1099_);
lean_dec_ref(v_score_1066_);
v_a_1150_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1147_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1147_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
lean_dec(v_snd_1108_);
lean_dec(v_fst_1107_);
lean_dec(v_fst_1103_);
lean_dec(v_fst_1099_);
lean_dec_ref(v_score_1066_);
v_a_1158_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1134_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1134_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
v___jp_1113_:
{
lean_object* v___x_1115_; 
if (v_isShared_1111_ == 0)
{
v___x_1115_ = v___x_1110_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_fst_1107_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v_snd_1108_);
v___x_1115_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
lean_object* v___x_1117_; 
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 1, v___x_1115_);
v___x_1117_ = v___x_1105_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_fst_1103_);
lean_ctor_set(v_reuseFailAlloc_1125_, 1, v___x_1115_);
v___x_1117_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
lean_object* v___x_1119_; 
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 1, v___x_1117_);
v___x_1119_ = v___x_1101_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_fst_1099_);
lean_ctor_set(v_reuseFailAlloc_1124_, 1, v___x_1117_);
v___x_1119_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
lean_object* v___x_1121_; 
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 1, v___x_1119_);
lean_ctor_set(v___x_1095_, 0, v___x_1112_);
v___x_1121_ = v___x_1095_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v___x_1112_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v___x_1119_);
v___x_1121_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
lean_object* v___x_1122_; 
v___x_1122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1121_);
return v___x_1122_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___boxed(lean_object* v_maxSuggestions_1173_, lean_object* v_score_1174_, lean_object* v_c_1175_, lean_object* v_a_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
double v_c_boxed_1180_; lean_object* v_res_1181_; 
v_c_boxed_1180_ = lean_unbox_float(v_c_1175_);
lean_dec_ref(v_c_1175_);
v_res_1181_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg(v_maxSuggestions_1173_, v_score_1174_, v_c_boxed_1180_, v_a_1176_, v___y_1177_, v___y_1178_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v_maxSuggestions_1173_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__1(lean_object* v_fst_1182_, double v_c_1183_, lean_object* v___x_1184_, lean_object* v___x_1185_, lean_object* v_fst_1186_, lean_object* v_snd_1187_, lean_object* v_fst_1188_, lean_object* v_score_1189_, lean_object* v___x_1190_, lean_object* v___f_1191_, lean_object* v_____r_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v___y_1197_; lean_object* v___y_1198_; lean_object* v___y_1199_; lean_object* v___y_1200_; lean_object* v___y_1215_; lean_object* v___y_1216_; lean_object* v___y_1217_; size_t v___y_1218_; lean_object* v___y_1219_; lean_object* v___y_1220_; lean_object* v___y_1230_; size_t v___y_1231_; lean_object* v___y_1232_; lean_object* v___y_1233_; lean_object* v___y_1242_; lean_object* v___y_1243_; lean_object* v___y_1244_; size_t v___y_1245_; lean_object* v___y_1246_; lean_object* v___y_1247_; lean_object* v___y_1248_; lean_object* v___y_1251_; lean_object* v___y_1252_; size_t v___y_1253_; lean_object* v___y_1254_; lean_object* v___y_1255_; lean_object* v___y_1256_; lean_object* v___y_1257_; lean_object* v___y_1260_; lean_object* v___y_1261_; uint8_t v___y_1262_; size_t v___y_1263_; lean_object* v___y_1264_; lean_object* v___x_1320_; 
lean_inc(v___y_1194_);
lean_inc_ref(v___y_1193_);
v___x_1320_ = lean_apply_3(v___f_1191_, v___y_1193_, v___y_1194_, lean_box(0));
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; uint8_t v___x_1322_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_a_1321_);
lean_dec_ref_known(v___x_1320_, 1);
v___x_1322_ = lean_unbox(v_a_1321_);
lean_dec(v_a_1321_);
if (v___x_1322_ == 0)
{
goto v___jp_1268_;
}
else
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1323_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__7, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__7_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__7);
v___x_1324_ = l_Lean_NameSet_toList(v_fst_1186_);
v___x_1325_ = lean_box(0);
v___x_1326_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__9(v___x_1324_, v___x_1325_);
v___x_1327_ = l_Lean_MessageData_ofList(v___x_1326_);
v___x_1328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1323_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5);
v___x_1330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1328_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
lean_inc(v___x_1190_);
v___x_1331_ = l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8(v___x_1190_, v___x_1330_, v___y_1193_, v___y_1194_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_dec_ref_known(v___x_1331_, 1);
goto v___jp_1268_;
}
else
{
lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1339_; 
lean_dec(v___x_1190_);
lean_dec_ref(v_score_1189_);
lean_dec(v_fst_1188_);
lean_dec(v_snd_1187_);
lean_dec(v_fst_1186_);
lean_dec(v___x_1185_);
lean_dec(v___x_1184_);
lean_dec(v_fst_1182_);
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1339_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1334_ = v___x_1331_;
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1331_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1339_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1335_ == 0)
{
v___x_1337_ = v___x_1334_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_a_1332_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
}
}
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec(v___x_1190_);
lean_dec_ref(v_score_1189_);
lean_dec(v_fst_1188_);
lean_dec(v_snd_1187_);
lean_dec(v_fst_1186_);
lean_dec(v___x_1185_);
lean_dec(v___x_1184_);
lean_dec(v_fst_1182_);
v_a_1340_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1320_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1320_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
v___jp_1196_:
{
double v___x_1201_; double v___x_1202_; double v___x_1203_; double v___x_1204_; double v___x_1205_; double v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1201_ = lean_float_of_nat(v___y_1197_);
v___x_1202_ = lean_unbox_float(v_fst_1182_);
v___x_1203_ = lean_float_sub(v___x_1201_, v___x_1202_);
v___x_1204_ = lean_float_div(v___x_1203_, v_c_1183_);
v___x_1205_ = lean_unbox_float(v_fst_1182_);
lean_dec(v_fst_1182_);
v___x_1206_ = lean_float_add(v___x_1205_, v___x_1204_);
v___x_1207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___y_1200_);
lean_ctor_set(v___x_1207_, 1, v___y_1199_);
v___x_1208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___y_1198_);
lean_ctor_set(v___x_1208_, 1, v___x_1207_);
v___x_1209_ = lean_box_float(v___x_1206_);
v___x_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
lean_ctor_set(v___x_1210_, 1, v___x_1208_);
v___x_1211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1184_);
lean_ctor_set(v___x_1211_, 1, v___x_1210_);
v___x_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
v___x_1213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
return v___x_1213_;
}
v___jp_1214_:
{
size_t v_sz_1221_; lean_object* v___x_1222_; uint8_t v___x_1223_; 
v_sz_1221_ = lean_array_size(v___y_1216_);
v___x_1222_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__2(v_sz_1221_, v___y_1218_, v___y_1216_);
v___x_1223_ = lean_nat_dec_lt(v___x_1185_, v___y_1217_);
lean_dec(v___x_1185_);
if (v___x_1223_ == 0)
{
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1215_);
v___y_1197_ = v___y_1219_;
v___y_1198_ = v___x_1222_;
v___y_1199_ = v___y_1220_;
v___y_1200_ = v_fst_1186_;
goto v___jp_1196_;
}
else
{
uint8_t v___x_1224_; 
v___x_1224_ = lean_nat_dec_le(v___y_1217_, v___y_1217_);
if (v___x_1224_ == 0)
{
if (v___x_1223_ == 0)
{
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1215_);
v___y_1197_ = v___y_1219_;
v___y_1198_ = v___x_1222_;
v___y_1199_ = v___y_1220_;
v___y_1200_ = v_fst_1186_;
goto v___jp_1196_;
}
else
{
size_t v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_usize_of_nat(v___y_1217_);
lean_dec(v___y_1217_);
v___x_1226_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__3(v___y_1215_, v___y_1218_, v___x_1225_, v_fst_1186_);
lean_dec_ref(v___y_1215_);
v___y_1197_ = v___y_1219_;
v___y_1198_ = v___x_1222_;
v___y_1199_ = v___y_1220_;
v___y_1200_ = v___x_1226_;
goto v___jp_1196_;
}
}
else
{
size_t v___x_1227_; lean_object* v___x_1228_; 
v___x_1227_ = lean_usize_of_nat(v___y_1217_);
lean_dec(v___y_1217_);
v___x_1228_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__3(v___y_1215_, v___y_1218_, v___x_1227_, v_fst_1186_);
lean_dec_ref(v___y_1215_);
v___y_1197_ = v___y_1219_;
v___y_1198_ = v___x_1222_;
v___y_1199_ = v___y_1220_;
v___y_1200_ = v___x_1228_;
goto v___jp_1196_;
}
}
}
v___jp_1229_:
{
lean_object* v___x_1234_; uint8_t v___x_1235_; 
v___x_1234_ = lean_array_get_size(v___y_1233_);
v___x_1235_ = lean_nat_dec_lt(v___x_1185_, v___x_1234_);
if (v___x_1235_ == 0)
{
v___y_1215_ = v___y_1233_;
v___y_1216_ = v___y_1230_;
v___y_1217_ = v___x_1234_;
v___y_1218_ = v___y_1231_;
v___y_1219_ = v___y_1232_;
v___y_1220_ = v_snd_1187_;
goto v___jp_1214_;
}
else
{
uint8_t v___x_1236_; 
v___x_1236_ = lean_nat_dec_le(v___x_1234_, v___x_1234_);
if (v___x_1236_ == 0)
{
if (v___x_1235_ == 0)
{
v___y_1215_ = v___y_1233_;
v___y_1216_ = v___y_1230_;
v___y_1217_ = v___x_1234_;
v___y_1218_ = v___y_1231_;
v___y_1219_ = v___y_1232_;
v___y_1220_ = v_snd_1187_;
goto v___jp_1214_;
}
else
{
size_t v___x_1237_; lean_object* v___x_1238_; 
v___x_1237_ = lean_usize_of_nat(v___x_1234_);
v___x_1238_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__4(v___y_1233_, v___y_1231_, v___x_1237_, v_snd_1187_);
v___y_1215_ = v___y_1233_;
v___y_1216_ = v___y_1230_;
v___y_1217_ = v___x_1234_;
v___y_1218_ = v___y_1231_;
v___y_1219_ = v___y_1232_;
v___y_1220_ = v___x_1238_;
goto v___jp_1214_;
}
}
else
{
size_t v___x_1239_; lean_object* v___x_1240_; 
v___x_1239_ = lean_usize_of_nat(v___x_1234_);
v___x_1240_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__4(v___y_1233_, v___y_1231_, v___x_1239_, v_snd_1187_);
v___y_1215_ = v___y_1233_;
v___y_1216_ = v___y_1230_;
v___y_1217_ = v___x_1234_;
v___y_1218_ = v___y_1231_;
v___y_1219_ = v___y_1232_;
v___y_1220_ = v___x_1240_;
goto v___jp_1214_;
}
}
}
v___jp_1241_:
{
lean_object* v___x_1249_; 
v___x_1249_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg(v___y_1247_, v___y_1243_, v___y_1242_, v___y_1248_);
lean_dec(v___y_1248_);
lean_dec(v___y_1247_);
v___y_1230_ = v___y_1244_;
v___y_1231_ = v___y_1245_;
v___y_1232_ = v___y_1246_;
v___y_1233_ = v___x_1249_;
goto v___jp_1229_;
}
v___jp_1250_:
{
uint8_t v___x_1258_; 
v___x_1258_ = lean_nat_dec_le(v___y_1257_, v___y_1255_);
if (v___x_1258_ == 0)
{
lean_dec(v___y_1255_);
lean_inc(v___y_1257_);
v___y_1242_ = v___y_1257_;
v___y_1243_ = v___y_1251_;
v___y_1244_ = v___y_1252_;
v___y_1245_ = v___y_1253_;
v___y_1246_ = v___y_1254_;
v___y_1247_ = v___y_1256_;
v___y_1248_ = v___y_1257_;
goto v___jp_1241_;
}
else
{
v___y_1242_ = v___y_1257_;
v___y_1243_ = v___y_1251_;
v___y_1244_ = v___y_1252_;
v___y_1245_ = v___y_1253_;
v___y_1246_ = v___y_1254_;
v___y_1247_ = v___y_1256_;
v___y_1248_ = v___y_1255_;
goto v___jp_1241_;
}
}
v___jp_1259_:
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_unsigned_to_nat(1u);
if (v___y_1262_ == 0)
{
lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1266_ = lean_nat_sub(v___y_1264_, v___x_1265_);
v___x_1267_ = lean_nat_dec_le(v___x_1185_, v___x_1266_);
if (v___x_1267_ == 0)
{
lean_inc(v___x_1266_);
v___y_1251_ = v___y_1260_;
v___y_1252_ = v___y_1261_;
v___y_1253_ = v___y_1263_;
v___y_1254_ = v___x_1265_;
v___y_1255_ = v___x_1266_;
v___y_1256_ = v___y_1264_;
v___y_1257_ = v___x_1266_;
goto v___jp_1250_;
}
else
{
lean_inc(v___x_1185_);
v___y_1251_ = v___y_1260_;
v___y_1252_ = v___y_1261_;
v___y_1253_ = v___y_1263_;
v___y_1254_ = v___x_1265_;
v___y_1255_ = v___x_1266_;
v___y_1256_ = v___y_1264_;
v___y_1257_ = v___x_1185_;
goto v___jp_1250_;
}
}
else
{
lean_dec(v___y_1264_);
v___y_1230_ = v___y_1261_;
v___y_1231_ = v___y_1263_;
v___y_1232_ = v___x_1265_;
v___y_1233_ = v___y_1260_;
goto v___jp_1229_;
}
}
v___jp_1268_:
{
size_t v_sz_1269_; size_t v___x_1270_; lean_object* v___x_1271_; lean_object* v_bs_1272_; lean_object* v___x_1273_; size_t v_sz_1274_; double v___x_1275_; lean_object* v___x_1276_; lean_object* v_fst_1277_; lean_object* v_snd_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1319_; 
v_sz_1269_ = lean_array_size(v_fst_1188_);
v___x_1270_ = ((size_t)0ULL);
lean_inc(v_fst_1188_);
lean_inc(v_fst_1186_);
v___x_1271_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__0(v_score_1189_, v_fst_1186_, v_sz_1269_, v___x_1270_, v_fst_1188_);
v_bs_1272_ = lean_mk_empty_array_with_capacity(v___x_1185_);
lean_inc_ref(v_bs_1272_);
v___x_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1273_, 0, v_bs_1272_);
lean_ctor_set(v___x_1273_, 1, v_bs_1272_);
v_sz_1274_ = lean_array_size(v___x_1271_);
v___x_1275_ = lean_unbox_float(v_fst_1182_);
v___x_1276_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__1(v___x_1275_, v___x_1271_, v_sz_1274_, v___x_1270_, v___x_1273_);
lean_dec_ref(v___x_1271_);
v_fst_1277_ = lean_ctor_get(v___x_1276_, 0);
v_snd_1278_ = lean_ctor_get(v___x_1276_, 1);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1276_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1280_ = v___x_1276_;
v_isShared_1281_ = v_isSharedCheck_1319_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_snd_1278_);
lean_inc(v_fst_1277_);
lean_dec(v___x_1276_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1319_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1282_; uint8_t v___x_1283_; 
v___x_1282_ = lean_array_get_size(v_fst_1277_);
v___x_1283_ = lean_nat_dec_eq(v___x_1282_, v___x_1185_);
if (v___x_1283_ == 0)
{
lean_object* v_toCold_1284_; lean_object* v_options_1285_; uint8_t v_hasTrace_1286_; 
lean_del_object(v___x_1280_);
lean_dec(v_fst_1188_);
v_toCold_1284_ = lean_ctor_get(v___y_1193_, 0);
v_options_1285_ = lean_ctor_get(v_toCold_1284_, 2);
v_hasTrace_1286_ = lean_ctor_get_uint8(v_options_1285_, sizeof(void*)*1);
if (v_hasTrace_1286_ == 0)
{
lean_dec(v___x_1190_);
v___y_1260_ = v_fst_1277_;
v___y_1261_ = v_snd_1278_;
v___y_1262_ = v___x_1283_;
v___y_1263_ = v___x_1270_;
v___y_1264_ = v___x_1282_;
goto v___jp_1259_;
}
else
{
lean_object* v_inheritedTraceOptions_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; uint8_t v___x_1290_; 
v_inheritedTraceOptions_1287_ = lean_ctor_get(v_toCold_1284_, 11);
v___x_1288_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__1));
lean_inc(v___x_1190_);
v___x_1289_ = l_Lean_Name_append(v___x_1288_, v___x_1190_);
v___x_1290_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1287_, v_options_1285_, v___x_1289_);
lean_dec(v___x_1289_);
if (v___x_1290_ == 0)
{
lean_dec(v___x_1190_);
v___y_1260_ = v_fst_1277_;
v___y_1261_ = v_snd_1278_;
v___y_1262_ = v___x_1283_;
v___y_1263_ = v___x_1270_;
v___y_1264_ = v___x_1282_;
goto v___jp_1259_;
}
else
{
lean_object* v___x_1291_; size_t v_sz_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1291_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__3, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__3_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__3);
v_sz_1292_ = lean_array_size(v_fst_1277_);
lean_inc(v_fst_1277_);
v___x_1293_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__6(v_sz_1292_, v___x_1270_, v_fst_1277_);
v___x_1294_ = lean_array_to_list(v___x_1293_);
v___x_1295_ = lean_box(0);
v___x_1296_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__7(v___x_1294_, v___x_1295_);
v___x_1297_ = l_Lean_MessageData_ofList(v___x_1296_);
v___x_1298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1291_);
lean_ctor_set(v___x_1298_, 1, v___x_1297_);
v___x_1299_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5);
v___x_1300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1298_);
lean_ctor_set(v___x_1300_, 1, v___x_1299_);
v___x_1301_ = l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8(v___x_1190_, v___x_1300_, v___y_1193_, v___y_1194_);
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_dec_ref_known(v___x_1301_, 1);
v___y_1260_ = v_fst_1277_;
v___y_1261_ = v_snd_1278_;
v___y_1262_ = v___x_1283_;
v___y_1263_ = v___x_1270_;
v___y_1264_ = v___x_1282_;
goto v___jp_1259_;
}
else
{
lean_object* v_a_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1309_; 
lean_dec(v_snd_1278_);
lean_dec(v_fst_1277_);
lean_dec(v_snd_1187_);
lean_dec(v_fst_1186_);
lean_dec(v___x_1185_);
lean_dec(v___x_1184_);
lean_dec(v_fst_1182_);
v_a_1302_ = lean_ctor_get(v___x_1301_, 0);
v_isSharedCheck_1309_ = !lean_is_exclusive(v___x_1301_);
if (v_isSharedCheck_1309_ == 0)
{
v___x_1304_ = v___x_1301_;
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_a_1302_);
lean_dec(v___x_1301_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1309_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1307_; 
if (v_isShared_1305_ == 0)
{
v___x_1307_ = v___x_1304_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_a_1302_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
}
}
}
}
else
{
lean_object* v___x_1310_; lean_object* v___x_1312_; 
lean_dec(v_snd_1278_);
lean_dec(v_fst_1277_);
lean_dec(v___x_1190_);
lean_dec(v___x_1185_);
lean_dec(v___x_1184_);
lean_inc(v_snd_1187_);
v___x_1310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1310_, 0, v_snd_1187_);
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 1, v_snd_1187_);
lean_ctor_set(v___x_1280_, 0, v_fst_1186_);
v___x_1312_ = v___x_1280_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_fst_1186_);
lean_ctor_set(v_reuseFailAlloc_1318_, 1, v_snd_1187_);
v___x_1312_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1313_, 0, v_fst_1188_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1314_, 0, v_fst_1182_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1310_);
lean_ctor_set(v___x_1315_, 1, v___x_1314_);
v___x_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
v___x_1317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
return v___x_1317_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__1___boxed(lean_object* v_fst_1348_, lean_object* v_c_1349_, lean_object* v___x_1350_, lean_object* v___x_1351_, lean_object* v_fst_1352_, lean_object* v_snd_1353_, lean_object* v_fst_1354_, lean_object* v_score_1355_, lean_object* v___x_1356_, lean_object* v___f_1357_, lean_object* v_____r_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_){
_start:
{
double v_c_boxed_1362_; lean_object* v_res_1363_; 
v_c_boxed_1362_ = lean_unbox_float(v_c_1349_);
lean_dec_ref(v_c_1349_);
v_res_1363_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__1(v_fst_1348_, v_c_boxed_1362_, v___x_1350_, v___x_1351_, v_fst_1352_, v_snd_1353_, v_fst_1354_, v_score_1355_, v___x_1356_, v___f_1357_, v_____r_1358_, v___y_1359_, v___y_1360_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg(lean_object* v_score_1364_, lean_object* v_maxSuggestions_1365_, double v_c_1366_, lean_object* v_a_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_){
_start:
{
lean_object* v___y_1372_; lean_object* v_snd_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1470_; 
v_snd_1392_ = lean_ctor_get(v_a_1367_, 1);
v_isSharedCheck_1470_ = !lean_is_exclusive(v_a_1367_);
if (v_isSharedCheck_1470_ == 0)
{
lean_object* v_unused_1471_; 
v_unused_1471_ = lean_ctor_get(v_a_1367_, 0);
lean_dec(v_unused_1471_);
v___x_1394_ = v_a_1367_;
v_isShared_1395_ = v_isSharedCheck_1470_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_snd_1392_);
lean_dec(v_a_1367_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1470_;
goto v_resetjp_1393_;
}
v___jp_1371_:
{
if (lean_obj_tag(v___y_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1383_; 
v_a_1373_ = lean_ctor_get(v___y_1372_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___y_1372_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1375_ = v___y_1372_;
v_isShared_1376_ = v_isSharedCheck_1383_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___y_1372_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1383_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
if (lean_obj_tag(v_a_1373_) == 0)
{
lean_object* v_a_1377_; lean_object* v___x_1379_; 
lean_dec_ref(v_score_1364_);
v_a_1377_ = lean_ctor_get(v_a_1373_, 0);
lean_inc(v_a_1377_);
lean_dec_ref_known(v_a_1373_, 1);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v_a_1377_);
v___x_1379_ = v___x_1375_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_a_1377_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1382_; 
lean_del_object(v___x_1375_);
v_a_1381_ = lean_ctor_get(v_a_1373_, 0);
lean_inc(v_a_1381_);
lean_dec_ref_known(v_a_1373_, 1);
v___x_1382_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg(v_maxSuggestions_1365_, v_score_1364_, v_c_1366_, v_a_1381_, v___y_1368_, v___y_1369_);
return v___x_1382_;
}
}
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
lean_dec_ref(v_score_1364_);
v_a_1384_ = lean_ctor_get(v___y_1372_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___y_1372_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___y_1372_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___y_1372_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
v_resetjp_1393_:
{
lean_object* v_snd_1396_; lean_object* v_snd_1397_; lean_object* v_fst_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1468_; 
v_snd_1396_ = lean_ctor_get(v_snd_1392_, 1);
lean_inc(v_snd_1396_);
v_snd_1397_ = lean_ctor_get(v_snd_1396_, 1);
lean_inc(v_snd_1397_);
v_fst_1398_ = lean_ctor_get(v_snd_1392_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v_snd_1392_);
if (v_isSharedCheck_1468_ == 0)
{
lean_object* v_unused_1469_; 
v_unused_1469_ = lean_ctor_get(v_snd_1392_, 1);
lean_dec(v_unused_1469_);
v___x_1400_ = v_snd_1392_;
v_isShared_1401_ = v_isSharedCheck_1468_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_fst_1398_);
lean_dec(v_snd_1392_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1468_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v_fst_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1466_; 
v_fst_1402_ = lean_ctor_get(v_snd_1396_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_snd_1396_);
if (v_isSharedCheck_1466_ == 0)
{
lean_object* v_unused_1467_; 
v_unused_1467_ = lean_ctor_get(v_snd_1396_, 1);
lean_dec(v_unused_1467_);
v___x_1404_ = v_snd_1396_;
v_isShared_1405_ = v_isSharedCheck_1466_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_fst_1402_);
lean_dec(v_snd_1396_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1466_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v_fst_1406_; lean_object* v_snd_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1465_; 
v_fst_1406_ = lean_ctor_get(v_snd_1397_, 0);
v_snd_1407_ = lean_ctor_get(v_snd_1397_, 1);
v_isSharedCheck_1465_ = !lean_is_exclusive(v_snd_1397_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1409_ = v_snd_1397_;
v_isShared_1410_ = v_isSharedCheck_1465_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_snd_1407_);
lean_inc(v_fst_1406_);
lean_dec(v_snd_1397_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1465_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1411_; lean_object* v___x_1426_; lean_object* v___x_1427_; uint8_t v___x_1428_; 
v___x_1411_ = lean_box(0);
v___x_1426_ = lean_unsigned_to_nat(0u);
v___x_1427_ = lean_array_get_size(v_fst_1402_);
v___x_1428_ = lean_nat_dec_lt(v___x_1426_, v___x_1427_);
if (v___x_1428_ == 0)
{
lean_dec_ref(v_score_1364_);
goto v___jp_1412_;
}
else
{
lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1429_ = lean_array_get_size(v_snd_1407_);
v___x_1430_ = lean_nat_dec_lt(v___x_1429_, v_maxSuggestions_1365_);
if (v___x_1430_ == 0)
{
lean_dec_ref(v_score_1364_);
goto v___jp_1412_;
}
else
{
lean_object* v___x_1431_; lean_object* v___f_1432_; lean_object* v___x_1433_; 
lean_del_object(v___x_1409_);
lean_del_object(v___x_1404_);
lean_del_object(v___x_1400_);
lean_del_object(v___x_1394_);
v___x_1431_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn___closed__1_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_));
v___f_1432_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__0));
v___x_1433_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__0(v___x_1431_, v___y_1368_, v___y_1369_);
if (lean_obj_tag(v___x_1433_) == 0)
{
lean_object* v_a_1434_; uint8_t v___x_1435_; 
v_a_1434_ = lean_ctor_get(v___x_1433_, 0);
lean_inc(v_a_1434_);
lean_dec_ref_known(v___x_1433_, 1);
v___x_1435_ = lean_unbox(v_a_1434_);
lean_dec(v_a_1434_);
if (v___x_1435_ == 0)
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = lean_box(0);
lean_inc_ref(v_score_1364_);
v___x_1437_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__1(v_fst_1398_, v_c_1366_, v___x_1411_, v___x_1426_, v_fst_1406_, v_snd_1407_, v_fst_1402_, v_score_1364_, v___x_1431_, v___f_1432_, v___x_1436_, v___y_1368_, v___y_1369_);
v___y_1372_ = v___x_1437_;
goto v___jp_1371_;
}
else
{
lean_object* v___x_1438_; double v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1438_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___closed__2);
v___x_1439_ = lean_unbox_float(v_fst_1398_);
v___x_1440_ = lean_float_to_string(v___x_1439_);
v___x_1441_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
v___x_1442_ = l_Lean_MessageData_ofFormat(v___x_1441_);
v___x_1443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1438_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
v___x_1444_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5, &l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg___lam__1___closed__5);
v___x_1445_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1443_);
lean_ctor_set(v___x_1445_, 1, v___x_1444_);
v___x_1446_ = l_Lean_addTrace___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__8(v___x_1431_, v___x_1445_, v___y_1368_, v___y_1369_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1448_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1446_, 1);
lean_inc_ref(v_score_1364_);
v___x_1448_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___lam__1(v_fst_1398_, v_c_1366_, v___x_1411_, v___x_1426_, v_fst_1406_, v_snd_1407_, v_fst_1402_, v_score_1364_, v___x_1431_, v___f_1432_, v_a_1447_, v___y_1368_, v___y_1369_);
v___y_1372_ = v___x_1448_;
goto v___jp_1371_;
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1451_; uint8_t v_isShared_1452_; uint8_t v_isSharedCheck_1456_; 
lean_dec(v_snd_1407_);
lean_dec(v_fst_1406_);
lean_dec(v_fst_1402_);
lean_dec(v_fst_1398_);
lean_dec_ref(v_score_1364_);
v_a_1449_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1451_ = v___x_1446_;
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
else
{
lean_inc(v_a_1449_);
lean_dec(v___x_1446_);
v___x_1451_ = lean_box(0);
v_isShared_1452_ = v_isSharedCheck_1456_;
goto v_resetjp_1450_;
}
v_resetjp_1450_:
{
lean_object* v___x_1454_; 
if (v_isShared_1452_ == 0)
{
v___x_1454_ = v___x_1451_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v_a_1449_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
}
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
lean_dec(v_snd_1407_);
lean_dec(v_fst_1406_);
lean_dec(v_fst_1402_);
lean_dec(v_fst_1398_);
lean_dec_ref(v_score_1364_);
v_a_1457_ = lean_ctor_get(v___x_1433_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1433_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___x_1433_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1433_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
}
v___jp_1412_:
{
lean_object* v___x_1414_; 
if (v_isShared_1410_ == 0)
{
v___x_1414_ = v___x_1409_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_fst_1406_);
lean_ctor_set(v_reuseFailAlloc_1425_, 1, v_snd_1407_);
v___x_1414_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
lean_object* v___x_1416_; 
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 1, v___x_1414_);
v___x_1416_ = v___x_1404_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v_fst_1402_);
lean_ctor_set(v_reuseFailAlloc_1424_, 1, v___x_1414_);
v___x_1416_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
lean_object* v___x_1418_; 
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 1, v___x_1416_);
v___x_1418_ = v___x_1400_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_fst_1398_);
lean_ctor_set(v_reuseFailAlloc_1423_, 1, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
lean_object* v___x_1420_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 1, v___x_1418_);
lean_ctor_set(v___x_1394_, 0, v___x_1411_);
v___x_1420_ = v___x_1394_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1411_);
lean_ctor_set(v_reuseFailAlloc_1422_, 1, v___x_1418_);
v___x_1420_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
lean_object* v___x_1421_; 
v___x_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
return v___x_1421_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg___boxed(lean_object* v_score_1472_, lean_object* v_maxSuggestions_1473_, lean_object* v_c_1474_, lean_object* v_a_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_){
_start:
{
double v_c_boxed_1479_; lean_object* v_res_1480_; 
v_c_boxed_1479_ = lean_unbox_float(v_c_1474_);
lean_dec_ref(v_c_1474_);
v_res_1480_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg(v_score_1472_, v_maxSuggestions_1473_, v_c_boxed_1479_, v_a_1475_, v___y_1476_, v___y_1477_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v_maxSuggestions_1473_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo(lean_object* v_initialRelevant_1485_, lean_object* v_score_1486_, lean_object* v_accept_1487_, lean_object* v_maxSuggestions_1488_, double v_p_1489_, double v_c_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_){
_start:
{
lean_object* v___f_1494_; lean_object* v___x_1495_; lean_object* v_env_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v_a_1500_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___f_1494_ = lean_alloc_closure((void*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1494_, 0, v_accept_1487_);
v___x_1495_ = lean_st_ref_get(v_a_1492_);
v_env_1496_ = lean_ctor_get(v___x_1495_, 0);
lean_inc_ref(v_env_1496_);
lean_dec(v___x_1495_);
v___x_1497_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___closed__0));
v___x_1498_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___closed__1));
v___x_1533_ = l_Lean_Environment_constants(v_env_1496_);
v___x_1534_ = l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11___redArg(v___x_1533_, v___f_1494_, v___x_1497_, v_a_1491_, v_a_1492_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
lean_dec_ref_known(v___x_1534_, 1);
if (lean_obj_tag(v_a_1535_) == 0)
{
lean_object* v_a_1536_; 
v_a_1536_ = lean_ctor_get(v_a_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref_known(v_a_1535_, 1);
v_a_1500_ = v_a_1536_;
goto v___jp_1499_;
}
else
{
lean_object* v_a_1537_; lean_object* v_snd_1538_; 
v_a_1537_ = lean_ctor_get(v_a_1535_, 0);
lean_inc(v_a_1537_);
lean_dec_ref_known(v_a_1535_, 1);
v_snd_1538_ = lean_ctor_get(v_a_1537_, 1);
lean_inc(v_snd_1538_);
lean_dec(v_a_1537_);
v_a_1500_ = v_snd_1538_;
goto v___jp_1499_;
}
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1546_; 
lean_dec_ref(v_score_1486_);
lean_dec(v_initialRelevant_1485_);
v_a_1539_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1541_ = v___x_1534_;
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1534_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1544_; 
if (v_isShared_1542_ == 0)
{
v___x_1544_ = v___x_1541_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1539_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
v___jp_1499_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v___x_1501_ = lean_box(0);
v___x_1502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1502_, 0, v_initialRelevant_1485_);
lean_ctor_set(v___x_1502_, 1, v___x_1498_);
v___x_1503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1503_, 0, v_a_1500_);
lean_ctor_set(v___x_1503_, 1, v___x_1502_);
v___x_1504_ = lean_box_float(v_p_1489_);
v___x_1505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1504_);
lean_ctor_set(v___x_1505_, 1, v___x_1503_);
v___x_1506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1501_);
lean_ctor_set(v___x_1506_, 1, v___x_1505_);
v___x_1507_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg(v_score_1486_, v_maxSuggestions_1488_, v_c_1490_, v___x_1506_, v_a_1491_, v_a_1492_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1524_; 
v_a_1508_ = lean_ctor_get(v___x_1507_, 0);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1510_ = v___x_1507_;
v_isShared_1511_ = v_isSharedCheck_1524_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1507_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1524_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v_fst_1512_; 
v_fst_1512_ = lean_ctor_get(v_a_1508_, 0);
if (lean_obj_tag(v_fst_1512_) == 0)
{
lean_object* v_snd_1513_; lean_object* v_snd_1514_; lean_object* v_snd_1515_; lean_object* v_snd_1516_; lean_object* v___x_1518_; 
v_snd_1513_ = lean_ctor_get(v_a_1508_, 1);
lean_inc(v_snd_1513_);
lean_dec(v_a_1508_);
v_snd_1514_ = lean_ctor_get(v_snd_1513_, 1);
lean_inc(v_snd_1514_);
lean_dec(v_snd_1513_);
v_snd_1515_ = lean_ctor_get(v_snd_1514_, 1);
lean_inc(v_snd_1515_);
lean_dec(v_snd_1514_);
v_snd_1516_ = lean_ctor_get(v_snd_1515_, 1);
lean_inc(v_snd_1516_);
lean_dec(v_snd_1515_);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 0, v_snd_1516_);
v___x_1518_ = v___x_1510_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_snd_1516_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
else
{
lean_object* v_val_1520_; lean_object* v___x_1522_; 
lean_inc_ref(v_fst_1512_);
lean_dec(v_a_1508_);
v_val_1520_ = lean_ctor_get(v_fst_1512_, 0);
lean_inc(v_val_1520_);
lean_dec_ref_known(v_fst_1512_, 1);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 0, v_val_1520_);
v___x_1522_ = v___x_1510_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v_val_1520_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
}
else
{
lean_object* v_a_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1532_; 
v_a_1525_ = lean_ctor_get(v___x_1507_, 0);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1527_ = v___x_1507_;
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_a_1525_);
lean_dec(v___x_1507_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1532_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1530_; 
if (v_isShared_1528_ == 0)
{
v___x_1530_ = v___x_1527_;
goto v_reusejp_1529_;
}
else
{
lean_object* v_reuseFailAlloc_1531_; 
v_reuseFailAlloc_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1531_, 0, v_a_1525_);
v___x_1530_ = v_reuseFailAlloc_1531_;
goto v_reusejp_1529_;
}
v_reusejp_1529_:
{
return v___x_1530_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo___boxed(lean_object* v_initialRelevant_1547_, lean_object* v_score_1548_, lean_object* v_accept_1549_, lean_object* v_maxSuggestions_1550_, lean_object* v_p_1551_, lean_object* v_c_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_){
_start:
{
double v_p_boxed_1556_; double v_c_boxed_1557_; lean_object* v_res_1558_; 
v_p_boxed_1556_ = lean_unbox_float(v_p_1551_);
lean_dec_ref(v_p_1551_);
v_c_boxed_1557_ = lean_unbox_float(v_c_1552_);
lean_dec_ref(v_c_1552_);
v_res_1558_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo(v_initialRelevant_1547_, v_score_1548_, v_accept_1549_, v_maxSuggestions_1550_, v_p_boxed_1556_, v_c_boxed_1557_, v_a_1553_, v_a_1554_);
lean_dec(v_a_1554_);
lean_dec_ref(v_a_1553_);
lean_dec(v_maxSuggestions_1550_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5(lean_object* v_n_1559_, lean_object* v_as_1560_, lean_object* v_lo_1561_, lean_object* v_hi_1562_, lean_object* v_w_1563_, lean_object* v_hlo_1564_, lean_object* v_hhi_1565_){
_start:
{
lean_object* v___x_1566_; 
v___x_1566_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___redArg(v_n_1559_, v_as_1560_, v_lo_1561_, v_hi_1562_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5___boxed(lean_object* v_n_1567_, lean_object* v_as_1568_, lean_object* v_lo_1569_, lean_object* v_hi_1570_, lean_object* v_w_1571_, lean_object* v_hlo_1572_, lean_object* v_hhi_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5(v_n_1567_, v_as_1568_, v_lo_1569_, v_hi_1570_, v_w_1571_, v_hlo_1572_, v_hhi_1573_);
lean_dec(v_hi_1570_);
lean_dec(v_n_1567_);
return v_res_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10(lean_object* v_score_1575_, lean_object* v_maxSuggestions_1576_, double v_c_1577_, lean_object* v_inst_1578_, lean_object* v_a_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___redArg(v_score_1575_, v_maxSuggestions_1576_, v_c_1577_, v_a_1579_, v___y_1580_, v___y_1581_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10___boxed(lean_object* v_score_1584_, lean_object* v_maxSuggestions_1585_, lean_object* v_c_1586_, lean_object* v_inst_1587_, lean_object* v_a_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
double v_c_boxed_1592_; lean_object* v_res_1593_; 
v_c_boxed_1592_ = lean_unbox_float(v_c_1586_);
lean_dec_ref(v_c_1586_);
v_res_1593_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10(v_score_1584_, v_maxSuggestions_1585_, v_c_boxed_1592_, v_inst_1587_, v_a_1588_, v___y_1589_, v___y_1590_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
lean_dec(v_maxSuggestions_1585_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11(lean_object* v_00_u03b2_1594_, lean_object* v_s_1595_, lean_object* v_f_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11___redArg(v_s_1595_, v_f_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11___boxed(lean_object* v_00_u03b2_1602_, lean_object* v_s_1603_, lean_object* v_f_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l_Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11(v_00_u03b2_1602_, v_s_1603_, v_f_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5(lean_object* v_n_1610_, lean_object* v_lo_1611_, lean_object* v_hi_1612_, lean_object* v_hhi_1613_, lean_object* v_pivot_1614_, lean_object* v_as_1615_, lean_object* v_i_1616_, lean_object* v_k_1617_, lean_object* v_ilo_1618_, lean_object* v_ik_1619_, lean_object* v_w_1620_){
_start:
{
lean_object* v___x_1621_; 
v___x_1621_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5___redArg(v_hi_1612_, v_pivot_1614_, v_as_1615_, v_i_1616_, v_k_1617_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5___boxed(lean_object* v_n_1622_, lean_object* v_lo_1623_, lean_object* v_hi_1624_, lean_object* v_hhi_1625_, lean_object* v_pivot_1626_, lean_object* v_as_1627_, lean_object* v_i_1628_, lean_object* v_k_1629_, lean_object* v_ilo_1630_, lean_object* v_ik_1631_, lean_object* v_w_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__5_spec__5(v_n_1622_, v_lo_1623_, v_hi_1624_, v_hhi_1625_, v_pivot_1626_, v_as_1627_, v_i_1628_, v_k_1629_, v_ilo_1630_, v_ik_1631_, v_w_1632_);
lean_dec_ref(v_pivot_1626_);
lean_dec(v_hi_1624_);
lean_dec(v_lo_1623_);
lean_dec(v_n_1622_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12(lean_object* v_maxSuggestions_1634_, lean_object* v_score_1635_, double v_c_1636_, lean_object* v_inst_1637_, lean_object* v_a_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
lean_object* v___x_1642_; 
v___x_1642_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___redArg(v_maxSuggestions_1634_, v_score_1635_, v_c_1636_, v_a_1638_, v___y_1639_, v___y_1640_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12___boxed(lean_object* v_maxSuggestions_1643_, lean_object* v_score_1644_, lean_object* v_c_1645_, lean_object* v_inst_1646_, lean_object* v_a_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_){
_start:
{
double v_c_boxed_1651_; lean_object* v_res_1652_; 
v_c_boxed_1651_ = lean_unbox_float(v_c_1645_);
lean_dec_ref(v_c_1645_);
v_res_1652_ = l___private_Init_While_0__repeatM_erased___at___00__private_Init_While_0__repeatM_erased___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__10_spec__12(v_maxSuggestions_1643_, v_score_1644_, v_c_boxed_1651_, v_inst_1646_, v_a_1647_, v___y_1648_, v___y_1649_);
lean_dec(v___y_1649_);
lean_dec_ref(v___y_1648_);
lean_dec(v_maxSuggestions_1643_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14(lean_object* v_00_u03b2_1653_, lean_object* v_f_1654_, lean_object* v_x_1655_, lean_object* v_x_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_){
_start:
{
lean_object* v___x_1661_; 
v___x_1661_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14___redArg(v_f_1654_, v_x_1655_, v_x_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14___boxed(lean_object* v_00_u03b2_1662_, lean_object* v_f_1663_, lean_object* v_x_1664_, lean_object* v_x_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__14(v_00_u03b2_1662_, v_f_1663_, v_x_1664_, v_x_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15(lean_object* v_00_u03b2_1671_, lean_object* v_map_1672_, lean_object* v_f_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___redArg(v_map_1672_, v_f_1673_, v___y_1674_, v___y_1675_, v___y_1676_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15___boxed(lean_object* v_00_u03b2_1679_, lean_object* v_map_1680_, lean_object* v_f_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15(v_00_u03b2_1679_, v_map_1680_, v_f_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16(lean_object* v_00_u03b2_1687_, lean_object* v_f_1688_, lean_object* v_as_1689_, size_t v_i_1690_, size_t v_stop_1691_, lean_object* v_b_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_){
_start:
{
lean_object* v___x_1697_; 
v___x_1697_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16___redArg(v_f_1688_, v_as_1689_, v_i_1690_, v_stop_1691_, v_b_1692_, v___y_1693_, v___y_1694_, v___y_1695_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16___boxed(lean_object* v_00_u03b2_1698_, lean_object* v_f_1699_, lean_object* v_as_1700_, lean_object* v_i_1701_, lean_object* v_stop_1702_, lean_object* v_b_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_){
_start:
{
size_t v_i_boxed_1708_; size_t v_stop_boxed_1709_; lean_object* v_res_1710_; 
v_i_boxed_1708_ = lean_unbox_usize(v_i_1701_);
lean_dec(v_i_1701_);
v_stop_boxed_1709_ = lean_unbox_usize(v_stop_1702_);
lean_dec(v_stop_1702_);
v_res_1710_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__16(v_00_u03b2_1698_, v_f_1699_, v_as_1700_, v_i_boxed_1708_, v_stop_boxed_1709_, v_b_1703_, v___y_1704_, v___y_1705_, v___y_1706_);
lean_dec(v___y_1706_);
lean_dec_ref(v___y_1705_);
lean_dec_ref(v_as_1700_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16___redArg(lean_object* v_map_1711_, lean_object* v_f_1712_, lean_object* v_init_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v___x_1718_; 
v___x_1718_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___redArg(v_f_1712_, v_map_1711_, v_init_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16___redArg___boxed(lean_object* v_map_1719_, lean_object* v_f_1720_, lean_object* v_init_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16___redArg(v_map_1719_, v_f_1720_, v_init_1721_, v___y_1722_, v___y_1723_, v___y_1724_);
lean_dec(v___y_1724_);
lean_dec_ref(v___y_1723_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16(lean_object* v_00_u03c3_1727_, lean_object* v_00_u03b2_1728_, lean_object* v_map_1729_, lean_object* v_f_1730_, lean_object* v_init_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___redArg(v_f_1730_, v_map_1729_, v_init_1731_, v___y_1732_, v___y_1733_, v___y_1734_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16___boxed(lean_object* v_00_u03c3_1737_, lean_object* v_00_u03b2_1738_, lean_object* v_map_1739_, lean_object* v_f_1740_, lean_object* v_init_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16(v_00_u03c3_1737_, v_00_u03b2_1738_, v_map_1739_, v_f_1740_, v_init_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17(lean_object* v_00_u03c3_1747_, lean_object* v_00_u03b1_1748_, lean_object* v_00_u03b2_1749_, lean_object* v_f_1750_, lean_object* v_x_1751_, lean_object* v_x_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v___x_1757_; 
v___x_1757_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___redArg(v_f_1750_, v_x_1751_, v_x_1752_, v___y_1753_, v___y_1754_, v___y_1755_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17___boxed(lean_object* v_00_u03c3_1758_, lean_object* v_00_u03b1_1759_, lean_object* v_00_u03b2_1760_, lean_object* v_f_1761_, lean_object* v_x_1762_, lean_object* v_x_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17(v_00_u03c3_1758_, v_00_u03b1_1759_, v_00_u03b2_1760_, v_f_1761_, v_x_1762_, v_x_1763_, v___y_1764_, v___y_1765_, v___y_1766_);
lean_dec(v___y_1766_);
lean_dec_ref(v___y_1765_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19(lean_object* v_00_u03b1_1769_, lean_object* v_00_u03b2_1770_, lean_object* v_00_u03c3_1771_, lean_object* v_f_1772_, lean_object* v_as_1773_, size_t v_i_1774_, size_t v_stop_1775_, lean_object* v_b_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v___x_1781_; 
v___x_1781_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19___redArg(v_f_1772_, v_as_1773_, v_i_1774_, v_stop_1775_, v_b_1776_, v___y_1777_, v___y_1778_, v___y_1779_);
return v___x_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19___boxed(lean_object* v_00_u03b1_1782_, lean_object* v_00_u03b2_1783_, lean_object* v_00_u03c3_1784_, lean_object* v_f_1785_, lean_object* v_as_1786_, lean_object* v_i_1787_, lean_object* v_stop_1788_, lean_object* v_b_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
size_t v_i_boxed_1794_; size_t v_stop_boxed_1795_; lean_object* v_res_1796_; 
v_i_boxed_1794_ = lean_unbox_usize(v_i_1787_);
lean_dec(v_i_1787_);
v_stop_boxed_1795_ = lean_unbox_usize(v_stop_1788_);
lean_dec(v_stop_1788_);
v_res_1796_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__19(v_00_u03b1_1782_, v_00_u03b2_1783_, v_00_u03c3_1784_, v_f_1785_, v_as_1786_, v_i_boxed_1794_, v_stop_boxed_1795_, v_b_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
lean_dec(v___y_1792_);
lean_dec_ref(v___y_1791_);
lean_dec_ref(v_as_1786_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20(lean_object* v_00_u03c3_1797_, lean_object* v_00_u03b1_1798_, lean_object* v_00_u03b2_1799_, lean_object* v_f_1800_, lean_object* v_keys_1801_, lean_object* v_vals_1802_, lean_object* v_heq_1803_, lean_object* v_i_1804_, lean_object* v_acc_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v___x_1810_; 
v___x_1810_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20___redArg(v_f_1800_, v_keys_1801_, v_vals_1802_, v_i_1804_, v_acc_1805_, v___y_1806_, v___y_1807_, v___y_1808_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20___boxed(lean_object* v_00_u03c3_1811_, lean_object* v_00_u03b1_1812_, lean_object* v_00_u03b2_1813_, lean_object* v_f_1814_, lean_object* v_keys_1815_, lean_object* v_vals_1816_, lean_object* v_heq_1817_, lean_object* v_i_1818_, lean_object* v_acc_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo_spec__11_spec__15_spec__16_spec__17_spec__20(v_00_u03c3_1811_, v_00_u03b1_1812_, v_00_u03b2_1813_, v_f_1814_, v_keys_1815_, v_vals_1816_, v_heq_1817_, v_i_1818_, v_acc_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec_ref(v_vals_1816_);
lean_dec_ref(v_keys_1815_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector___lam__0(lean_object* v_env_1825_, lean_object* v_ci_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_){
_start:
{
lean_object* v___x_1830_; uint8_t v___x_1831_; uint8_t v___x_1832_; 
v___x_1830_ = l_Lean_ConstantInfo_name(v_ci_1826_);
v___x_1831_ = 0;
lean_inc(v___x_1830_);
lean_inc_ref(v_env_1825_);
v___x_1832_ = l_Lean_LibrarySuggestions_isDeniedPremise(v_env_1825_, v___x_1830_, v___x_1831_);
if (v___x_1832_ == 0)
{
uint8_t v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1833_ = l_Lean_wasOriginallyTheorem(v_env_1825_, v___x_1830_);
v___x_1834_ = lean_box(v___x_1833_);
v___x_1835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1834_);
return v___x_1835_;
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
lean_dec(v___x_1830_);
lean_dec_ref(v_env_1825_);
v___x_1836_ = lean_box(v___x_1831_);
v___x_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1836_);
return v___x_1837_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector___lam__0___boxed(lean_object* v_env_1838_, lean_object* v_ci_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l_Lean_LibrarySuggestions_mepoSelector___lam__0(v_env_1838_, v_ci_1839_, v___y_1840_, v___y_1841_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec_ref(v_ci_1839_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector___lam__1(lean_object* v_a_1844_, lean_object* v_n_1845_){
_start:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1846_ = lean_unsigned_to_nat(0u);
v___x_1847_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_a_1844_, v_n_1845_, v___x_1846_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector___lam__1___boxed(lean_object* v_a_1848_, lean_object* v_n_1849_){
_start:
{
lean_object* v_res_1850_; 
v_res_1850_ = l_Lean_LibrarySuggestions_mepoSelector___lam__1(v_a_1848_, v_n_1849_);
lean_dec(v_n_1849_);
lean_dec(v_a_1848_);
return v_res_1850_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector(uint8_t v_useRarity_1852_, double v_p_1853_, double v_c_1854_, lean_object* v_g_1855_, lean_object* v_config_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_){
_start:
{
lean_object* v___x_1862_; 
v___x_1862_ = l_Lean_MVarId_getRelevantConstants(v_g_1855_, v_a_1857_, v_a_1858_, v_a_1859_, v_a_1860_);
if (lean_obj_tag(v___x_1862_) == 0)
{
lean_object* v_a_1863_; lean_object* v___x_1864_; lean_object* v_env_1865_; lean_object* v___f_1866_; lean_object* v_score_1868_; lean_object* v___y_1869_; lean_object* v___y_1870_; 
v_a_1863_ = lean_ctor_get(v___x_1862_, 0);
lean_inc(v_a_1863_);
lean_dec_ref_known(v___x_1862_, 1);
v___x_1864_ = lean_st_ref_get(v_a_1860_);
v_env_1865_ = lean_ctor_get(v___x_1864_, 0);
lean_inc_ref(v_env_1865_);
lean_dec(v___x_1864_);
v___f_1866_ = lean_alloc_closure((void*)(l_Lean_LibrarySuggestions_mepoSelector___lam__0___boxed), 5, 1);
lean_closure_set(v___f_1866_, 0, v_env_1865_);
if (v_useRarity_1852_ == 0)
{
lean_object* v___x_1883_; 
v___x_1883_ = ((lean_object*)(l_Lean_LibrarySuggestions_mepoSelector___closed__0));
v_score_1868_ = v___x_1883_;
v___y_1869_ = v_a_1859_;
v___y_1870_ = v_a_1860_;
goto v___jp_1867_;
}
else
{
lean_object* v___x_1884_; 
v___x_1884_ = l_Lean_LibrarySuggestions_symbolFrequencyMap___redArg(v_a_1860_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; lean_object* v___f_1886_; lean_object* v___x_1887_; 
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_a_1885_);
lean_dec_ref_known(v___x_1884_, 1);
v___f_1886_ = lean_alloc_closure((void*)(l_Lean_LibrarySuggestions_mepoSelector___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1886_, 0, v_a_1885_);
v___x_1887_ = lean_alloc_closure((void*)(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_frequencyScore___boxed), 3, 1);
lean_closure_set(v___x_1887_, 0, v___f_1886_);
v_score_1868_ = v___x_1887_;
v___y_1869_ = v_a_1859_;
v___y_1870_ = v_a_1860_;
goto v___jp_1867_;
}
else
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1895_; 
lean_dec_ref(v___f_1866_);
lean_dec(v_a_1863_);
lean_dec_ref(v_config_1856_);
v_a_1888_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1890_ = v___x_1884_;
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1884_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1895_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1893_; 
if (v_isShared_1891_ == 0)
{
v___x_1893_ = v___x_1890_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_a_1888_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
}
v___jp_1867_:
{
lean_object* v_maxSuggestions_1871_; lean_object* v___x_1872_; 
v_maxSuggestions_1871_ = lean_ctor_get(v_config_1856_, 0);
lean_inc(v_maxSuggestions_1871_);
lean_dec_ref(v_config_1856_);
v___x_1872_ = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_mepo(v_a_1863_, v_score_1868_, v___f_1866_, v_maxSuggestions_1871_, v_p_1853_, v_c_1854_, v___y_1869_, v___y_1870_);
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1882_; 
v_a_1873_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1875_ = v___x_1872_;
v_isShared_1876_ = v_isSharedCheck_1882_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1872_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1882_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1880_; 
v___x_1877_ = lean_unsigned_to_nat(0u);
v___x_1878_ = l_Array_extract___redArg(v_a_1873_, v___x_1877_, v_maxSuggestions_1871_);
lean_dec(v_a_1873_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 0, v___x_1878_);
v___x_1880_ = v___x_1875_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1878_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
else
{
lean_dec(v_maxSuggestions_1871_);
return v___x_1872_;
}
}
}
else
{
lean_object* v_a_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1903_; 
lean_dec_ref(v_config_1856_);
v_a_1896_ = lean_ctor_get(v___x_1862_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v___x_1862_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1898_ = v___x_1862_;
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_a_1896_);
lean_dec(v___x_1862_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1903_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1901_; 
if (v_isShared_1899_ == 0)
{
v___x_1901_ = v___x_1898_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v_a_1896_);
v___x_1901_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
return v___x_1901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_mepoSelector___boxed(lean_object* v_useRarity_1904_, lean_object* v_p_1905_, lean_object* v_c_1906_, lean_object* v_g_1907_, lean_object* v_config_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_){
_start:
{
uint8_t v_useRarity_boxed_1914_; double v_p_boxed_1915_; double v_c_boxed_1916_; lean_object* v_res_1917_; 
v_useRarity_boxed_1914_ = lean_unbox(v_useRarity_1904_);
v_p_boxed_1915_ = lean_unbox_float(v_p_1905_);
lean_dec_ref(v_p_1905_);
v_c_boxed_1916_ = lean_unbox_float(v_c_1906_);
lean_dec_ref(v_c_1906_);
v_res_1917_ = l_Lean_LibrarySuggestions_mepoSelector(v_useRarity_boxed_1914_, v_p_boxed_1915_, v_c_boxed_1916_, v_g_1907_, v_config_1908_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_);
lean_dec(v_a_1912_);
lean_dec_ref(v_a_1911_);
lean_dec(v_a_1910_);
lean_dec_ref(v_a_1909_);
return v_res_1917_;
}
}
lean_object* runtime_initialize_Lean_LibrarySuggestions_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_LibrarySuggestions_SymbolFrequency(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_LibrarySuggestions_MePo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_LibrarySuggestions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_LibrarySuggestions_SymbolFrequency(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_initFn_00___x40_Lean_LibrarySuggestions_MePo_1610293474____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___boxed__const__1 = _init_l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___boxed__const__1();
lean_mark_persistent(l___private_Lean_LibrarySuggestions_MePo_0__Lean_LibrarySuggestions_MePo_weightedScore___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_LibrarySuggestions_MePo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_LibrarySuggestions_Basic(uint8_t builtin);
lean_object* initialize_Lean_LibrarySuggestions_SymbolFrequency(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_LibrarySuggestions_MePo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_LibrarySuggestions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_LibrarySuggestions_SymbolFrequency(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_LibrarySuggestions_MePo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_LibrarySuggestions_MePo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_LibrarySuggestions_MePo(builtin);
}
#ifdef __cplusplus
}
#endif
