// Lean compiler output
// Module: Lean.Util.Trace
// Imports: public import Lean.Elab.Exception public import Lean.Log
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_instMonadExceptOfMonadExceptOf___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_MonadExcept_ofExcept___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_KVMap_instValueNat;
double lean_float_div(double, double);
lean_object* l_IO_monoNanosNow___boxed(lean_object*);
lean_object* l_IO_getNumHeartbeats___boxed(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
extern lean_object* l_Lean_instInhabitedMessageData_default;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_instHashableRaw_hash___boxed(lean_object*);
lean_object* l_instMonadExceptOfEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadExceptOfEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_format___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_BaseIO_toIO___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KVMap_instValueString;
lean_object* l_Lean_Option_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instToStringFormat___lam__0(lean_object*);
lean_object* l_IO_println___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_instDecidableEqRaw___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonadExceptOf___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedTraceElem_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTraceElem_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTraceElem_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTraceElem;
static lean_once_cell_t l_Lean_instInhabitedTraceState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTraceState_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedTraceState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTraceState_default___closed__1;
static lean_once_cell_t l_Lean_instInhabitedTraceState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTraceState_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTraceState_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTraceState;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_inheritedTraceOptions;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__3 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4_value;
static const lean_array_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__6 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__8 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__10 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "inheritedTraceOptions.get"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__14 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__14_value;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "inheritedTraceOptions"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17_value),LEAN_SCALAR_PTR_LITERAL(111, 221, 127, 62, 213, 113, 62, 253)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18_value),LEAN_SCALAR_PTR_LITERAL(249, 53, 178, 254, 160, 90, 192, 243)}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19_value;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27;
static lean_once_cell_t l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28;
LEAN_EXPORT lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam;
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_printTraces___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringFormat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_printTraces___redArg___closed__0 = (const lean_object*)&l_Lean_printTraces___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printTraces(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_resetTraceState___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_resetTraceState___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resetTraceState___redArg___closed__0 = (const lean_object*)&l_Lean_resetTraceState___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resetTraceState(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkTraceOption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_checkTraceOption___closed__0 = (const lean_object*)&l_Lean_checkTraceOption___closed__0_value;
static const lean_ctor_object l_Lean_checkTraceOption___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_checkTraceOption___closed__1 = (const lean_object*)&l_Lean_checkTraceOption___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkTraceOption___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lean_is_trace_class_enabled(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_isTracingEnabledForExport___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getTraces___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getTraces___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getTraces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_modifyTraces___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_modifyTraces___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_modifyTraces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setTraceState(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addRawTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___redArg___lam__0___closed__0;
static const lean_string_object l_Lean_addTrace___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_addTrace___redArg___lam__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_addTrace___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_trace___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_traceM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_traceM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__0_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__1_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__2_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__3 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__3_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__4 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__4_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__5 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__5_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__6 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__6_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__0_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__1_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__7 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__7_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__7_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__2_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__3_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__4_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__5_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__8 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__8_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__8_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__6_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "profiler"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 99, .m_capacity = 99, .m_length = 98, .m_data = "activate nested traces with execution time above `trace.profiler.threshold` and annotate with time"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "threshold"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(184, 9, 42, 114, 12, 38, 11, 42)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 130, .m_capacity = 130, .m_length = 129, .m_data = "threshold in milliseconds (or heartbeats if `trace.profiler.useHeartbeats` is true), traces below threshold will not be activated"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(145, 45, 177, 27, 189, 220, 1, 137)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_threshold;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "useHeartbeats"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(224, 182, 122, 179, 202, 46, 182, 49)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "if true, measure and report heartbeats instead of seconds"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(89, 248, 181, 172, 128, 194, 123, 56)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_useHeartbeats;
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "output"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(19, 45, 221, 139, 23, 193, 130, 68)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "output `trace.profiler` data in Firefox Profiler-compatible format to given file path"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_addTrace___redArg___lam__0___closed__1_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(58, 195, 204, 148, 25, 40, 60, 227)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_output;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "serve"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(178, 232, 14, 81, 31, 251, 216, 133)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 126, .m_capacity = 126, .m_length = 125, .m_data = "serve the `trace.profiler` data over HTTP and open it in `https://profiler.firefox.com`; blocks until interrupted with Ctrl+C"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(43, 90, 16, 252, 133, 113, 145, 70)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_serve;
LEAN_EXPORT uint8_t l_Lean_trace_profiler_isExporting(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_isExporting___boxed(lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(4, 235, 105, 39, 190, 159, 27, 75)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(19, 45, 221, 139, 23, 193, 130, 68)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(193, 225, 100, 102, 84, 233, 134, 170)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 232, .m_capacity = 232, .m_length = 231, .m_data = "if false, limit text in exported trace nodes to trace class name and `TraceData.tag`, if any\n\nThis is useful when we are interested in the time taken by specific subsystems instead of specific invocations, which is the common case."};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_checkTraceOption___closed__0_value),LEAN_SCALAR_PTR_LITERAL(109, 9, 140, 140, 215, 146, 186, 147)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(209, 2, 1, 242, 207, 168, 68, 219)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(58, 195, 204, 148, 25, 40, 60, 227)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value_aux_3),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(228, 86, 200, 244, 100, 192, 149, 216)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_output_pp;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_monoNanosNow___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_getNumHeartbeats___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_trace_profiler_threshold_unitAdjusted___closed__0;
LEAN_EXPORT double l_Lean_trace_profiler_threshold_unitAdjusted(lean_object*);
LEAN_EXPORT lean_object* l_Lean_trace_profiler_threshold_unitAdjusted___boxed(lean_object*);
static const lean_closure_object l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadExceptOfEIO___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0 = (const lean_object*)&l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0_value;
static const lean_closure_object l_Lean_instMonadAlwaysExceptEIO___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadExceptOfEIO___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___closed__1 = (const lean_object*)&l_Lean_instMonadAlwaysExceptEIO___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instMonadAlwaysExceptEIO___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0_value),((lean_object*)&l_Lean_instMonadAlwaysExceptEIO___redArg___closed__1_value)}};
static const lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___closed__2 = (const lean_object*)&l_Lean_instMonadAlwaysExceptEIO___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg();
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instMonadAlwaysExceptEIO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instMonadAlwaysExceptEIO___closed__0;
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_bombEmoji___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 2, .m_data = "💥️"};
static const lean_object* l_Lean_bombEmoji___closed__0 = (const lean_object*)&l_Lean_bombEmoji___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_bombEmoji = (const lean_object*)&l_Lean_bombEmoji___closed__0_value;
static const lean_string_object l_Lean_checkEmoji___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "✅️"};
static const lean_object* l_Lean_checkEmoji___closed__0 = (const lean_object*)&l_Lean_checkEmoji___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_checkEmoji = (const lean_object*)&l_Lean_checkEmoji___closed__0_value;
static const lean_string_object l_Lean_crossEmoji___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "❌️"};
static const lean_object* l_Lean_crossEmoji___closed__0 = (const lean_object*)&l_Lean_crossEmoji___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_crossEmoji = (const lean_object*)&l_Lean_crossEmoji___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultBool___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instExceptToTraceResultBool___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instExceptToTraceResultBool___redArg___closed__0 = (const lean_object*)&l_Lean_instExceptToTraceResultBool___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg();
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultOption___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instExceptToTraceResultOption___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultOption___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instExceptToTraceResultOption___redArg___closed__0 = (const lean_object*)&l_Lean_instExceptToTraceResultOption___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg();
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultExpr___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instExceptToTraceResultExpr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResultExpr___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instExceptToTraceResultExpr___redArg___closed__0 = (const lean_object*)&l_Lean_instExceptToTraceResultExpr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg();
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr(lean_object*);
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResult___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instExceptToTraceResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instExceptToTraceResult___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instExceptToTraceResult___redArg___closed__0 = (const lean_object*)&l_Lean_instExceptToTraceResult___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg();
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, double, double, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, double, double, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__13___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13___boxed(lean_object**);
static const lean_closure_object l_Lean_withTraceNode_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_withTraceNode_x27___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_withTraceNode_x27___redArg___closed__0 = (const lean_object*)&l_Lean_withTraceNode_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerTraceClass___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_registerTraceClass___auto__1___closed__0 = (const lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value;
static const lean_string_object l_Lean_registerTraceClass___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_registerTraceClass___auto__1___closed__1 = (const lean_object*)&l_Lean_registerTraceClass___auto__1___closed__1_value;
static const lean_ctor_object l_Lean_registerTraceClass___auto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_registerTraceClass___auto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__2_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_registerTraceClass___auto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__2_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_registerTraceClass___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__2_value_aux_2),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_registerTraceClass___auto__1___closed__2 = (const lean_object*)&l_Lean_registerTraceClass___auto__1___closed__2_value;
static const lean_string_object l_Lean_registerTraceClass___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_registerTraceClass___auto__1___closed__3 = (const lean_object*)&l_Lean_registerTraceClass___auto__1___closed__3_value;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__4;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__5;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__6;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__7;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__8;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__9;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__10;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__11;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__12;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__13;
static lean_once_cell_t l_Lean_registerTraceClass___auto__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_registerTraceClass___auto__1___closed__14;
LEAN_EXPORT lean_object* l_Lean_registerTraceClass___auto__1;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_registerTraceClass___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_registerTraceClass___closed__0 = (const lean_object*)&l_Lean_registerTraceClass___closed__0_value;
static const lean_string_object l_Lean_registerTraceClass___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "enable/disable tracing for the given module and submodules"};
static const lean_object* l_Lean_registerTraceClass___closed__1 = (const lean_object*)&l_Lean_registerTraceClass___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerTraceClass___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "doIf"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIfProp"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.isTracingEnabledFor"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "isTracingEnabledFor"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.addTrace"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "addTrace"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cls"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value),LEAN_SCALAR_PTR_LITERAL(28, 113, 141, 155, 240, 79, 69, 244)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolatedStrKind"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48_value),LEAN_SCALAR_PTR_LITERAL(239, 118, 32, 248, 73, 51, 110, 198)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MessageData"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57_value),LEAN_SCALAR_PTR_LITERAL(117, 193, 162, 252, 67, 31, 191, 159)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57_value),LEAN_SCALAR_PTR_LITERAL(204, 233, 154, 112, 39, 152, 210, 6)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termM!_"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66_value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65_value),LEAN_SCALAR_PTR_LITERAL(241, 254, 249, 246, 41, 222, 210, 184)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "m!"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "doElemTrace[_]__"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__0 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__0_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__1_value_aux_0),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 144, 171, 160, 60, 151, 54, 39)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__1 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__1_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__2 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__2_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__3 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__3_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "trace["};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__4 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__4_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__4_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__5 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__5_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__6 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__6_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__7 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__7_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__7_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__8 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__8_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__3_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__5_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__8_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__9 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__9_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__10 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__10_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__10_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__11 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__11_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__3_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__9_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__11_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__12 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__12_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__13 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__13_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__13_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__14 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__14_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "interpolatedStr"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__15 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__15_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__15_value),LEAN_SCALAR_PTR_LITERAL(156, 58, 177, 246, 99, 11, 16, 252)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__16 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__16_value;
static const lean_string_object l_Lean_doElemTrace_x5b___x5d_____00__closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__17 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__17_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__17_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__18 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__18_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__19 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__19_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__16_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__19_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__20 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__20_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__14_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__20_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__19_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__21 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__21_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__3_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__12_value),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__21_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__22 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__22_value;
static const lean_ctor_object l_Lean_doElemTrace_x5b___x5d_____00__closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__22_value)}};
static const lean_object* l_Lean_doElemTrace_x5b___x5d_____00__closed__23 = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__23_value;
LEAN_EXPORT const lean_object* l_Lean_doElemTrace_x5b___x5d____ = (const lean_object*)&l_Lean_doElemTrace_x5b___x5d_____00__closed__23_value;
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_addTraceAsMessages___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTraceAsMessages___redArg___lam__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___closed__0;
static lean_once_cell_t l_Lean_addTraceAsMessages___redArg___lam__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___closed__1;
static lean_once_cell_t l_Lean_addTraceAsMessages___redArg___lam__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___closed__2;
static lean_once_cell_t l_Lean_addTraceAsMessages___redArg___lam__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___closed__3;
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_addTraceAsMessages___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_instHashableRaw_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addTraceAsMessages___redArg___closed__0 = (const lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__0_value;
static const lean_closure_object l_Lean_addTraceAsMessages___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instHashableProd___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__0_value),((lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__0_value)} };
static const lean_object* l_Lean_addTraceAsMessages___redArg___closed__1 = (const lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__1_value;
static const lean_closure_object l_Lean_addTraceAsMessages___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_addTraceAsMessages___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addTraceAsMessages___redArg___closed__2 = (const lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__2_value;
static const lean_closure_object l_Lean_addTraceAsMessages___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_addTraceAsMessages___redArg___lam__1, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_addTraceAsMessages___redArg___closed__3 = (const lean_object*)&l_Lean_addTraceAsMessages___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(40, 215, 222, 176, 152, 52, 0, 225)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__2_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__5_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Util"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__5_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__5_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__6_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__5_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(44, 20, 155, 62, 160, 30, 19, 156)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__6_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__6_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__7_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Trace"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__7_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__7_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__8_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__6_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__7_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 45, 197, 3, 218, 39, 236, 122)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__8_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__8_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__9_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__8_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(212, 132, 182, 134, 118, 170, 212, 125)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__9_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__9_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__10_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__9_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 109, 156, 246, 253, 156, 207, 235)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__10_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__10_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__11_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__11_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__11_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__12_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__10_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__11_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(252, 109, 61, 254, 212, 130, 102, 57)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__12_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__12_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__13_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__13_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__13_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__14_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__12_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__13_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(245, 63, 132, 83, 234, 34, 87, 212)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__14_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__14_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__15_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__14_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(96, 141, 129, 211, 167, 99, 91, 102)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__15_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__15_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__16_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__15_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__5_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(190, 185, 91, 65, 254, 191, 29, 193)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__16_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__16_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__16_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__7_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(11, 72, 204, 88, 19, 210, 210, 71)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__19_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__19_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__19_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_initFn___closed__21_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__21_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_initFn___closed__21_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_instInhabitedTraceElem_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = l_Lean_instInhabitedMessageData_default;
v___x_2_ = lean_box(0);
v___x_3_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceElem_default(void){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_obj_once(&l_Lean_instInhabitedTraceElem_default___closed__0, &l_Lean_instInhabitedTraceElem_default___closed__0_once, _init_l_Lean_instInhabitedTraceElem_default___closed__0);
return v___x_4_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceElem(void){
_start:
{
lean_object* v___x_5_; 
v___x_5_ = l_Lean_instInhabitedTraceElem_default;
return v___x_5_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceState_default___closed__0(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_unsigned_to_nat(32u);
v___x_7_ = lean_mk_empty_array_with_capacity(v___x_6_);
v___x_8_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceState_default___closed__1(void){
_start:
{
size_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_9_ = ((size_t)5ULL);
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_unsigned_to_nat(32u);
v___x_12_ = lean_mk_empty_array_with_capacity(v___x_11_);
v___x_13_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__0, &l_Lean_instInhabitedTraceState_default___closed__0_once, _init_l_Lean_instInhabitedTraceState_default___closed__0);
v___x_14_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v___x_12_);
lean_ctor_set(v___x_14_, 2, v___x_10_);
lean_ctor_set(v___x_14_, 3, v___x_10_);
lean_ctor_set_usize(v___x_14_, 4, v___x_9_);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceState_default___closed__2(void){
_start:
{
lean_object* v___x_15_; uint64_t v___x_16_; lean_object* v___x_17_; 
v___x_15_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__1, &l_Lean_instInhabitedTraceState_default___closed__1_once, _init_l_Lean_instInhabitedTraceState_default___closed__1);
v___x_16_ = 0ULL;
v___x_17_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_17_, 0, v___x_15_);
lean_ctor_set_uint64(v___x_17_, sizeof(void*)*1, v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceState_default(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__2, &l_Lean_instInhabitedTraceState_default___closed__2_once, _init_l_Lean_instInhabitedTraceState_default___closed__2);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_instInhabitedTraceState(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_instInhabitedTraceState_default;
return v___x_19_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_20_ = lean_box(0);
v___x_21_ = lean_unsigned_to_nat(16u);
v___x_22_ = lean_mk_array(v___x_21_, v___x_20_);
return v___x_22_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_23_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__0_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_);
v___x_24_ = lean_unsigned_to_nat(0u);
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
lean_ctor_set(v___x_25_, 1, v___x_23_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_);
v___x_28_ = lean_st_mk_ref(v___x_27_);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2____boxed(lean_object* v___y_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_();
return v_res_31_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__10));
v___x_59_ = l_Lean_mkAtom(v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__12);
v___x_61_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_62_ = lean_array_push(v___x_61_, v___x_60_);
return v___x_62_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15(void){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__14));
v___x_65_ = lean_string_utf8_byte_size(v___x_64_);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15);
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__14));
v___x_69_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
lean_ctor_set(v___x_69_, 1, v___x_67_);
lean_ctor_set(v___x_69_, 2, v___x_66_);
return v___x_69_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_75_ = lean_box(0);
v___x_76_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19));
v___x_77_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16);
v___x_78_ = lean_box(2);
v___x_79_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set(v___x_79_, 1, v___x_77_);
lean_ctor_set(v___x_79_, 2, v___x_76_);
lean_ctor_set(v___x_79_, 3, v___x_75_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20);
v___x_81_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13);
v___x_82_ = lean_array_push(v___x_81_, v___x_80_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_83_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21);
v___x_84_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11));
v___x_85_ = lean_box(2);
v___x_86_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_86_, 0, v___x_85_);
lean_ctor_set(v___x_86_, 1, v___x_84_);
lean_ctor_set(v___x_86_, 2, v___x_83_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22);
v___x_88_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_89_ = lean_array_push(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_90_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23);
v___x_91_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_92_ = lean_box(2);
v___x_93_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v___x_91_);
lean_ctor_set(v___x_93_, 2, v___x_90_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24);
v___x_95_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_96_ = lean_array_push(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_97_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25);
v___x_98_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7));
v___x_99_ = lean_box(2);
v___x_100_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v___x_98_);
lean_ctor_set(v___x_100_, 2, v___x_97_);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_101_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26);
v___x_102_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_103_ = lean_array_push(v___x_102_, v___x_101_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_104_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27);
v___x_105_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4));
v___x_106_ = lean_box(2);
v___x_107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_105_);
lean_ctor_set(v___x_107_, 2, v___x_104_);
return v___x_107_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam(void){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__28);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift___redArg___lam__0(lean_object* v_modifyTraceState_109_, lean_object* v_inst_110_, lean_object* v_f_111_){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_apply_1(v_modifyTraceState_109_, v_f_111_);
v___x_113_ = lean_apply_2(v_inst_110_, lean_box(0), v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object* v_inst_114_, lean_object* v_inst_115_){
_start:
{
lean_object* v_modifyTraceState_116_; lean_object* v_getTraceState_117_; lean_object* v_getInheritedTraceOptions_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_128_; 
v_modifyTraceState_116_ = lean_ctor_get(v_inst_115_, 0);
v_getTraceState_117_ = lean_ctor_get(v_inst_115_, 1);
v_getInheritedTraceOptions_118_ = lean_ctor_get(v_inst_115_, 2);
v_isSharedCheck_128_ = !lean_is_exclusive(v_inst_115_);
if (v_isSharedCheck_128_ == 0)
{
v___x_120_ = v_inst_115_;
v_isShared_121_ = v_isSharedCheck_128_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_getInheritedTraceOptions_118_);
lean_inc(v_getTraceState_117_);
lean_inc(v_modifyTraceState_116_);
lean_dec(v_inst_115_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_128_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___f_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_126_; 
lean_inc_n(v_inst_114_, 2);
v___f_122_ = lean_alloc_closure((void*)(l_Lean_instMonadTraceOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_122_, 0, v_modifyTraceState_116_);
lean_closure_set(v___f_122_, 1, v_inst_114_);
v___x_123_ = lean_apply_2(v_inst_114_, lean_box(0), v_getTraceState_117_);
v___x_124_ = lean_apply_2(v_inst_114_, lean_box(0), v_getInheritedTraceOptions_118_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 2, v___x_124_);
lean_ctor_set(v___x_120_, 1, v___x_123_);
lean_ctor_set(v___x_120_, 0, v___f_122_);
v___x_126_ = v___x_120_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___f_122_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v___x_123_);
lean_ctor_set(v_reuseFailAlloc_127_, 2, v___x_124_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift(lean_object* v_m_129_, lean_object* v_n_130_, lean_object* v_inst_131_, lean_object* v_inst_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lean_instMonadTraceOfMonadLift___redArg(v_inst_131_, v_inst_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__0(lean_object* v_toPure_134_, lean_object* v_____s_135_){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_box(0);
v___x_137_ = lean_apply_2(v_toPure_134_, lean_box(0), v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__1(lean_object* v___x_138_, lean_object* v_toPure_139_, lean_object* v_r_140_){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_141_, 0, v___x_138_);
v___x_142_ = lean_apply_2(v_toPure_139_, lean_box(0), v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__2(lean_object* v___f_143_, lean_object* v_inst_144_, lean_object* v_toBind_145_, lean_object* v___f_146_, lean_object* v_____do__lift_147_){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_148_ = lean_alloc_closure((void*)(l_IO_println___boxed), 4, 3);
lean_closure_set(v___x_148_, 0, lean_box(0));
lean_closure_set(v___x_148_, 1, v___f_143_);
lean_closure_set(v___x_148_, 2, v_____do__lift_147_);
v___x_149_ = lean_apply_2(v_inst_144_, lean_box(0), v___x_148_);
v___x_150_ = lean_apply_4(v_toBind_145_, lean_box(0), lean_box(0), v___x_149_, v___f_146_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__3(lean_object* v_inst_151_, lean_object* v_toBind_152_, lean_object* v___f_153_, lean_object* v_x_154_, lean_object* v_____s_155_){
_start:
{
lean_object* v_msg_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_msg_156_ = lean_ctor_get(v_x_154_, 1);
lean_inc_ref(v_msg_156_);
lean_dec_ref(v_x_154_);
v___x_157_ = lean_box(0);
v___x_158_ = lean_alloc_closure((void*)(l_Lean_MessageData_format___boxed), 3, 2);
lean_closure_set(v___x_158_, 0, v_msg_156_);
lean_closure_set(v___x_158_, 1, v___x_157_);
v___x_159_ = lean_alloc_closure((void*)(l_BaseIO_toIO___boxed), 3, 2);
lean_closure_set(v___x_159_, 0, lean_box(0));
lean_closure_set(v___x_159_, 1, v___x_158_);
v___x_160_ = lean_apply_2(v_inst_151_, lean_box(0), v___x_159_);
v___x_161_ = lean_apply_4(v_toBind_152_, lean_box(0), lean_box(0), v___x_160_, v___f_153_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__4(lean_object* v_toPure_162_, lean_object* v___f_163_, lean_object* v_inst_164_, lean_object* v_toBind_165_, lean_object* v_inst_166_, lean_object* v___f_167_, lean_object* v_____do__lift_168_){
_start:
{
lean_object* v_traces_169_; lean_object* v___x_170_; lean_object* v___f_171_; lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_traces_169_ = lean_ctor_get(v_____do__lift_168_, 0);
v___x_170_ = lean_box(0);
v___f_171_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__1), 3, 2);
lean_closure_set(v___f_171_, 0, v___x_170_);
lean_closure_set(v___f_171_, 1, v_toPure_162_);
lean_inc_n(v_toBind_165_, 2);
lean_inc(v_inst_164_);
v___f_172_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__2), 5, 4);
lean_closure_set(v___f_172_, 0, v___f_163_);
lean_closure_set(v___f_172_, 1, v_inst_164_);
lean_closure_set(v___f_172_, 2, v_toBind_165_);
lean_closure_set(v___f_172_, 3, v___f_171_);
v___f_173_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__3), 5, 3);
lean_closure_set(v___f_173_, 0, v_inst_164_);
lean_closure_set(v___f_173_, 1, v_toBind_165_);
lean_closure_set(v___f_173_, 2, v___f_172_);
v___x_174_ = l_Lean_PersistentArray_forIn___redArg(v_inst_166_, v_traces_169_, v___x_170_, v___f_173_);
v___x_175_ = lean_apply_4(v_toBind_165_, lean_box(0), lean_box(0), v___x_174_, v___f_167_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__4___boxed(lean_object* v_toPure_176_, lean_object* v___f_177_, lean_object* v_inst_178_, lean_object* v_toBind_179_, lean_object* v_inst_180_, lean_object* v___f_181_, lean_object* v_____do__lift_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lean_printTraces___redArg___lam__4(v_toPure_176_, v___f_177_, v_inst_178_, v_toBind_179_, v_inst_180_, v___f_181_, v_____do__lift_182_);
lean_dec_ref(v_____do__lift_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg(lean_object* v_inst_185_, lean_object* v_inst_186_, lean_object* v_inst_187_){
_start:
{
lean_object* v_toApplicative_188_; lean_object* v_toBind_189_; lean_object* v_getTraceState_190_; lean_object* v_toPure_191_; lean_object* v___f_192_; lean_object* v___f_193_; lean_object* v___f_194_; lean_object* v___x_195_; 
v_toApplicative_188_ = lean_ctor_get(v_inst_185_, 0);
v_toBind_189_ = lean_ctor_get(v_inst_185_, 1);
lean_inc_n(v_toBind_189_, 2);
v_getTraceState_190_ = lean_ctor_get(v_inst_186_, 1);
lean_inc(v_getTraceState_190_);
lean_dec_ref(v_inst_186_);
v_toPure_191_ = lean_ctor_get(v_toApplicative_188_, 1);
lean_inc_n(v_toPure_191_, 2);
v___f_192_ = ((lean_object*)(l_Lean_printTraces___redArg___closed__0));
v___f_193_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_193_, 0, v_toPure_191_);
v___f_194_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__4___boxed), 7, 6);
lean_closure_set(v___f_194_, 0, v_toPure_191_);
lean_closure_set(v___f_194_, 1, v___f_192_);
lean_closure_set(v___f_194_, 2, v_inst_187_);
lean_closure_set(v___f_194_, 3, v_toBind_189_);
lean_closure_set(v___f_194_, 4, v_inst_185_);
lean_closure_set(v___f_194_, 5, v___f_193_);
v___x_195_ = lean_apply_4(v_toBind_189_, lean_box(0), lean_box(0), v_getTraceState_190_, v___f_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces(lean_object* v_m_196_, lean_object* v_inst_197_, lean_object* v_inst_198_, lean_object* v_inst_199_){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = l_Lean_printTraces___redArg(v_inst_197_, v_inst_198_, v_inst_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg___lam__0(lean_object* v_x_201_){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_202_ = lean_unsigned_to_nat(32u);
v___x_203_ = lean_mk_empty_array_with_capacity(v___x_202_);
lean_dec_ref(v___x_203_);
v___x_204_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__2, &l_Lean_instInhabitedTraceState_default___closed__2_once, _init_l_Lean_instInhabitedTraceState_default___closed__2);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg___lam__0___boxed(lean_object* v_x_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lean_resetTraceState___redArg___lam__0(v_x_205_);
lean_dec_ref(v_x_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg(lean_object* v_inst_208_){
_start:
{
lean_object* v_modifyTraceState_209_; lean_object* v___f_210_; lean_object* v___x_211_; 
v_modifyTraceState_209_ = lean_ctor_get(v_inst_208_, 0);
lean_inc(v_modifyTraceState_209_);
lean_dec_ref(v_inst_208_);
v___f_210_ = ((lean_object*)(l_Lean_resetTraceState___redArg___closed__0));
v___x_211_ = lean_apply_1(v_modifyTraceState_209_, v___f_210_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState(lean_object* v_m_212_, lean_object* v_inst_213_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l_Lean_resetTraceState___redArg(v_inst_213_);
return v___x_214_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(lean_object* v_a_215_, lean_object* v_x_216_){
_start:
{
if (lean_obj_tag(v_x_216_) == 0)
{
uint8_t v___x_217_; 
v___x_217_ = 0;
return v___x_217_;
}
else
{
lean_object* v_key_218_; lean_object* v_tail_219_; uint8_t v___x_220_; 
v_key_218_ = lean_ctor_get(v_x_216_, 0);
v_tail_219_ = lean_ctor_get(v_x_216_, 2);
v___x_220_ = lean_name_eq(v_key_218_, v_a_215_);
if (v___x_220_ == 0)
{
v_x_216_ = v_tail_219_;
goto _start;
}
else
{
return v___x_220_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_222_, lean_object* v_x_223_){
_start:
{
uint8_t v_res_224_; lean_object* v_r_225_; 
v_res_224_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_222_, v_x_223_);
lean_dec(v_x_223_);
lean_dec(v_a_222_);
v_r_225_ = lean_box(v_res_224_);
return v_r_225_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(lean_object* v_m_226_, lean_object* v_a_227_){
_start:
{
lean_object* v_buckets_228_; lean_object* v___x_229_; uint64_t v___y_231_; 
v_buckets_228_ = lean_ctor_get(v_m_226_, 1);
v___x_229_ = lean_array_get_size(v_buckets_228_);
if (lean_obj_tag(v_a_227_) == 0)
{
uint64_t v___x_245_; 
v___x_245_ = 1723ULL;
v___y_231_ = v___x_245_;
goto v___jp_230_;
}
else
{
uint64_t v_hash_246_; 
v_hash_246_ = lean_ctor_get_uint64(v_a_227_, sizeof(void*)*2);
v___y_231_ = v_hash_246_;
goto v___jp_230_;
}
v___jp_230_:
{
uint64_t v___x_232_; uint64_t v___x_233_; uint64_t v_fold_234_; uint64_t v___x_235_; uint64_t v___x_236_; uint64_t v___x_237_; size_t v___x_238_; size_t v___x_239_; size_t v___x_240_; size_t v___x_241_; size_t v___x_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_232_ = 32ULL;
v___x_233_ = lean_uint64_shift_right(v___y_231_, v___x_232_);
v_fold_234_ = lean_uint64_xor(v___y_231_, v___x_233_);
v___x_235_ = 16ULL;
v___x_236_ = lean_uint64_shift_right(v_fold_234_, v___x_235_);
v___x_237_ = lean_uint64_xor(v_fold_234_, v___x_236_);
v___x_238_ = lean_uint64_to_usize(v___x_237_);
v___x_239_ = lean_usize_of_nat(v___x_229_);
v___x_240_ = ((size_t)1ULL);
v___x_241_ = lean_usize_sub(v___x_239_, v___x_240_);
v___x_242_ = lean_usize_land(v___x_238_, v___x_241_);
v___x_243_ = lean_array_uget_borrowed(v_buckets_228_, v___x_242_);
v___x_244_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_227_, v___x_243_);
return v___x_244_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg___boxed(lean_object* v_m_247_, lean_object* v_a_248_){
_start:
{
uint8_t v_res_249_; lean_object* v_r_250_; 
v_res_249_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(v_m_247_, v_a_248_);
lean_dec(v_a_248_);
lean_dec_ref(v_m_247_);
v_r_250_ = lean_box(v_res_249_);
return v_r_250_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object* v_inherited_251_, lean_object* v_opts_252_, lean_object* v_opt_253_){
_start:
{
lean_object* v_map_259_; lean_object* v___x_260_; 
v_map_259_ = lean_ctor_get(v_opts_252_, 0);
v___x_260_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_259_, v_opt_253_);
if (lean_obj_tag(v___x_260_) == 0)
{
goto v___jp_254_;
}
else
{
lean_object* v_val_261_; 
v_val_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc(v_val_261_);
lean_dec_ref_known(v___x_260_, 1);
if (lean_obj_tag(v_val_261_) == 1)
{
uint8_t v_v_262_; 
v_v_262_ = lean_ctor_get_uint8(v_val_261_, 0);
lean_dec_ref_known(v_val_261_, 0);
return v_v_262_;
}
else
{
lean_dec(v_val_261_);
goto v___jp_254_;
}
}
v___jp_254_:
{
if (lean_obj_tag(v_opt_253_) == 1)
{
lean_object* v_pre_255_; uint8_t v___x_256_; 
v_pre_255_ = lean_ctor_get(v_opt_253_, 0);
v___x_256_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(v_inherited_251_, v_opt_253_);
if (v___x_256_ == 0)
{
return v___x_256_;
}
else
{
v_opt_253_ = v_pre_255_;
goto _start;
}
}
else
{
uint8_t v___x_258_; 
v___x_258_ = 0;
return v___x_258_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go___boxed(lean_object* v_inherited_263_, lean_object* v_opts_264_, lean_object* v_opt_265_){
_start:
{
uint8_t v_res_266_; lean_object* v_r_267_; 
v_res_266_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inherited_263_, v_opts_264_, v_opt_265_);
lean_dec(v_opt_265_);
lean_dec_ref(v_opts_264_);
lean_dec_ref(v_inherited_263_);
v_r_267_ = lean_box(v_res_266_);
return v_r_267_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0(lean_object* v_00_u03b2_268_, lean_object* v_m_269_, lean_object* v_a_270_){
_start:
{
uint8_t v___x_271_; 
v___x_271_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(v_m_269_, v_a_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___boxed(lean_object* v_00_u03b2_272_, lean_object* v_m_273_, lean_object* v_a_274_){
_start:
{
uint8_t v_res_275_; lean_object* v_r_276_; 
v_res_275_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0(v_00_u03b2_272_, v_m_273_, v_a_274_);
lean_dec(v_a_274_);
lean_dec_ref(v_m_273_);
v_r_276_ = lean_box(v_res_275_);
return v_r_276_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0(lean_object* v_00_u03b2_277_, lean_object* v_a_278_, lean_object* v_x_279_){
_start:
{
uint8_t v___x_280_; 
v___x_280_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_278_, v_x_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_281_, lean_object* v_a_282_, lean_object* v_x_283_){
_start:
{
uint8_t v_res_284_; lean_object* v_r_285_; 
v_res_284_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0(v_00_u03b2_281_, v_a_282_, v_x_283_);
lean_dec(v_x_283_);
lean_dec(v_a_282_);
v_r_285_ = lean_box(v_res_284_);
return v_r_285_;
}
}
LEAN_EXPORT uint8_t l_Lean_checkTraceOption(lean_object* v_inherited_289_, lean_object* v_opts_290_, lean_object* v_cls_291_){
_start:
{
uint8_t v_hasTrace_292_; 
v_hasTrace_292_ = lean_ctor_get_uint8(v_opts_290_, sizeof(void*)*1);
if (v_hasTrace_292_ == 0)
{
lean_dec(v_cls_291_);
return v_hasTrace_292_;
}
else
{
lean_object* v___x_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_293_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_294_ = l_Lean_Name_append(v___x_293_, v_cls_291_);
v___x_295_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inherited_289_, v_opts_290_, v___x_294_);
lean_dec(v___x_294_);
return v___x_295_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkTraceOption___boxed(lean_object* v_inherited_296_, lean_object* v_opts_297_, lean_object* v_cls_298_){
_start:
{
uint8_t v_res_299_; lean_object* v_r_300_; 
v_res_299_ = l_Lean_checkTraceOption(v_inherited_296_, v_opts_297_, v_cls_298_);
lean_dec_ref(v_opts_297_);
lean_dec_ref(v_inherited_296_);
v_r_300_ = lean_box(v_res_299_);
return v_r_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__0(lean_object* v_toPure_301_, lean_object* v_cls_302_, lean_object* v_____do__lift_303_, lean_object* v_____do__lift_304_){
_start:
{
uint8_t v_hasTrace_305_; 
v_hasTrace_305_ = lean_ctor_get_uint8(v_____do__lift_304_, sizeof(void*)*1);
if (v_hasTrace_305_ == 0)
{
lean_object* v___x_306_; lean_object* v___x_307_; 
lean_dec(v_cls_302_);
v___x_306_ = lean_box(v_hasTrace_305_);
v___x_307_ = lean_apply_2(v_toPure_301_, lean_box(0), v___x_306_);
return v___x_307_;
}
else
{
lean_object* v___x_308_; lean_object* v___x_309_; uint8_t v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_308_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_309_ = l_Lean_Name_append(v___x_308_, v_cls_302_);
v___x_310_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_303_, v_____do__lift_304_, v___x_309_);
lean_dec(v___x_309_);
v___x_311_ = lean_box(v___x_310_);
v___x_312_ = lean_apply_2(v_toPure_301_, lean_box(0), v___x_311_);
return v___x_312_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__0___boxed(lean_object* v_toPure_313_, lean_object* v_cls_314_, lean_object* v_____do__lift_315_, lean_object* v_____do__lift_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_isTracingEnabledFor___redArg___lam__0(v_toPure_313_, v_cls_314_, v_____do__lift_315_, v_____do__lift_316_);
lean_dec_ref(v_____do__lift_316_);
lean_dec_ref(v_____do__lift_315_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__1(lean_object* v_toPure_318_, lean_object* v_cls_319_, lean_object* v_toBind_320_, lean_object* v_inst_321_, lean_object* v_____do__lift_322_){
_start:
{
lean_object* v___f_323_; lean_object* v___x_324_; 
v___f_323_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_323_, 0, v_toPure_318_);
lean_closure_set(v___f_323_, 1, v_cls_319_);
lean_closure_set(v___f_323_, 2, v_____do__lift_322_);
v___x_324_ = lean_apply_4(v_toBind_320_, lean_box(0), lean_box(0), v_inst_321_, v___f_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg(lean_object* v_inst_325_, lean_object* v_inst_326_, lean_object* v_inst_327_, lean_object* v_cls_328_){
_start:
{
lean_object* v_toApplicative_329_; lean_object* v_toBind_330_; lean_object* v_getInheritedTraceOptions_331_; lean_object* v_toPure_332_; lean_object* v___f_333_; lean_object* v___x_334_; 
v_toApplicative_329_ = lean_ctor_get(v_inst_325_, 0);
lean_inc_ref(v_toApplicative_329_);
v_toBind_330_ = lean_ctor_get(v_inst_325_, 1);
lean_inc_n(v_toBind_330_, 2);
lean_dec_ref(v_inst_325_);
v_getInheritedTraceOptions_331_ = lean_ctor_get(v_inst_326_, 2);
lean_inc(v_getInheritedTraceOptions_331_);
lean_dec_ref(v_inst_326_);
v_toPure_332_ = lean_ctor_get(v_toApplicative_329_, 1);
lean_inc(v_toPure_332_);
lean_dec_ref(v_toApplicative_329_);
v___f_333_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_333_, 0, v_toPure_332_);
lean_closure_set(v___f_333_, 1, v_cls_328_);
lean_closure_set(v___f_333_, 2, v_toBind_330_);
lean_closure_set(v___f_333_, 3, v_inst_327_);
v___x_334_ = lean_apply_4(v_toBind_330_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_331_, v___f_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor(lean_object* v_m_335_, lean_object* v_inst_336_, lean_object* v_inst_337_, lean_object* v_inst_338_, lean_object* v_cls_339_){
_start:
{
lean_object* v_toApplicative_340_; lean_object* v_toBind_341_; lean_object* v_getInheritedTraceOptions_342_; lean_object* v_toPure_343_; lean_object* v___f_344_; lean_object* v___x_345_; 
v_toApplicative_340_ = lean_ctor_get(v_inst_336_, 0);
lean_inc_ref(v_toApplicative_340_);
v_toBind_341_ = lean_ctor_get(v_inst_336_, 1);
lean_inc_n(v_toBind_341_, 2);
lean_dec_ref(v_inst_336_);
v_getInheritedTraceOptions_342_ = lean_ctor_get(v_inst_337_, 2);
lean_inc(v_getInheritedTraceOptions_342_);
lean_dec_ref(v_inst_337_);
v_toPure_343_ = lean_ctor_get(v_toApplicative_340_, 1);
lean_inc(v_toPure_343_);
lean_dec_ref(v_toApplicative_340_);
v___f_344_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_344_, 0, v_toPure_343_);
lean_closure_set(v___f_344_, 1, v_cls_339_);
lean_closure_set(v___f_344_, 2, v_toBind_341_);
lean_closure_set(v___f_344_, 3, v_inst_338_);
v___x_345_ = lean_apply_4(v_toBind_341_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_342_, v___f_344_);
return v___x_345_;
}
}
LEAN_EXPORT uint8_t lean_is_trace_class_enabled(lean_object* v_opts_346_, lean_object* v_cls_347_){
_start:
{
uint8_t v_hasTrace_349_; 
v_hasTrace_349_ = lean_ctor_get_uint8(v_opts_346_, sizeof(void*)*1);
if (v_hasTrace_349_ == 0)
{
lean_dec(v_cls_347_);
lean_dec_ref(v_opts_346_);
return v_hasTrace_349_;
}
else
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; uint8_t v___x_354_; 
v___x_350_ = l_Lean_inheritedTraceOptions;
v___x_351_ = lean_st_ref_get(v___x_350_);
v___x_352_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_353_ = l_Lean_Name_append(v___x_352_, v_cls_347_);
v___x_354_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_351_, v_opts_346_, v___x_353_);
lean_dec(v___x_353_);
lean_dec_ref(v_opts_346_);
lean_dec(v___x_351_);
return v___x_354_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_isTracingEnabledForExport___boxed(lean_object* v_opts_355_, lean_object* v_cls_356_, lean_object* v___y_357_){
_start:
{
uint8_t v_res_358_; lean_object* v_r_359_; 
v_res_358_ = lean_is_trace_class_enabled(v_opts_355_, v_cls_356_);
v_r_359_ = lean_box(v_res_358_);
return v_r_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_getTraces___redArg___lam__0(lean_object* v_toPure_360_, lean_object* v_s_361_){
_start:
{
lean_object* v_traces_362_; lean_object* v___x_363_; 
v_traces_362_ = lean_ctor_get(v_s_361_, 0);
lean_inc_ref(v_traces_362_);
lean_dec_ref(v_s_361_);
v___x_363_ = lean_apply_2(v_toPure_360_, lean_box(0), v_traces_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_getTraces___redArg(lean_object* v_inst_364_, lean_object* v_inst_365_){
_start:
{
lean_object* v_toApplicative_366_; lean_object* v_toBind_367_; lean_object* v_getTraceState_368_; lean_object* v_toPure_369_; lean_object* v___f_370_; lean_object* v___x_371_; 
v_toApplicative_366_ = lean_ctor_get(v_inst_364_, 0);
lean_inc_ref(v_toApplicative_366_);
v_toBind_367_ = lean_ctor_get(v_inst_364_, 1);
lean_inc(v_toBind_367_);
lean_dec_ref(v_inst_364_);
v_getTraceState_368_ = lean_ctor_get(v_inst_365_, 1);
lean_inc(v_getTraceState_368_);
lean_dec_ref(v_inst_365_);
v_toPure_369_ = lean_ctor_get(v_toApplicative_366_, 1);
lean_inc(v_toPure_369_);
lean_dec_ref(v_toApplicative_366_);
v___f_370_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_370_, 0, v_toPure_369_);
v___x_371_ = lean_apply_4(v_toBind_367_, lean_box(0), lean_box(0), v_getTraceState_368_, v___f_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_getTraces(lean_object* v_m_372_, lean_object* v_inst_373_, lean_object* v_inst_374_){
_start:
{
lean_object* v_toApplicative_375_; lean_object* v_toBind_376_; lean_object* v_getTraceState_377_; lean_object* v_toPure_378_; lean_object* v___f_379_; lean_object* v___x_380_; 
v_toApplicative_375_ = lean_ctor_get(v_inst_373_, 0);
lean_inc_ref(v_toApplicative_375_);
v_toBind_376_ = lean_ctor_get(v_inst_373_, 1);
lean_inc(v_toBind_376_);
lean_dec_ref(v_inst_373_);
v_getTraceState_377_ = lean_ctor_get(v_inst_374_, 1);
lean_inc(v_getTraceState_377_);
lean_dec_ref(v_inst_374_);
v_toPure_378_ = lean_ctor_get(v_toApplicative_375_, 1);
lean_inc(v_toPure_378_);
lean_dec_ref(v_toApplicative_375_);
v___f_379_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_379_, 0, v_toPure_378_);
v___x_380_ = lean_apply_4(v_toBind_376_, lean_box(0), lean_box(0), v_getTraceState_377_, v___f_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_modifyTraces___redArg___lam__0(lean_object* v_f_381_, lean_object* v_s_382_){
_start:
{
uint64_t v_tid_383_; lean_object* v_traces_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_392_; 
v_tid_383_ = lean_ctor_get_uint64(v_s_382_, sizeof(void*)*1);
v_traces_384_ = lean_ctor_get(v_s_382_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v_s_382_);
if (v_isSharedCheck_392_ == 0)
{
v___x_386_ = v_s_382_;
v_isShared_387_ = v_isSharedCheck_392_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_traces_384_);
lean_dec(v_s_382_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_392_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_388_; lean_object* v___x_390_; 
v___x_388_ = lean_apply_1(v_f_381_, v_traces_384_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 0, v___x_388_);
v___x_390_ = v___x_386_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v___x_388_);
lean_ctor_set_uint64(v_reuseFailAlloc_391_, sizeof(void*)*1, v_tid_383_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_modifyTraces___redArg(lean_object* v_inst_393_, lean_object* v_f_394_){
_start:
{
lean_object* v_modifyTraceState_395_; lean_object* v___f_396_; lean_object* v___x_397_; 
v_modifyTraceState_395_ = lean_ctor_get(v_inst_393_, 0);
lean_inc(v_modifyTraceState_395_);
lean_dec_ref(v_inst_393_);
v___f_396_ = lean_alloc_closure((void*)(l_Lean_modifyTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_396_, 0, v_f_394_);
v___x_397_ = lean_apply_1(v_modifyTraceState_395_, v___f_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_modifyTraces(lean_object* v_m_398_, lean_object* v_inst_399_, lean_object* v_f_400_){
_start:
{
lean_object* v_modifyTraceState_401_; lean_object* v___f_402_; lean_object* v___x_403_; 
v_modifyTraceState_401_ = lean_ctor_get(v_inst_399_, 0);
lean_inc(v_modifyTraceState_401_);
lean_dec_ref(v_inst_399_);
v___f_402_ = lean_alloc_closure((void*)(l_Lean_modifyTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_402_, 0, v_f_400_);
v___x_403_ = lean_apply_1(v_modifyTraceState_401_, v___f_402_);
return v___x_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg___lam__0(lean_object* v_s_404_, lean_object* v_x_405_){
_start:
{
lean_inc_ref(v_s_404_);
return v_s_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg___lam__0___boxed(lean_object* v_s_406_, lean_object* v_x_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_setTraceState___redArg___lam__0(v_s_406_, v_x_407_);
lean_dec_ref(v_x_407_);
lean_dec_ref(v_s_406_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg(lean_object* v_inst_409_, lean_object* v_s_410_){
_start:
{
lean_object* v_modifyTraceState_411_; lean_object* v___f_412_; lean_object* v___x_413_; 
v_modifyTraceState_411_ = lean_ctor_get(v_inst_409_, 0);
lean_inc(v_modifyTraceState_411_);
lean_dec_ref(v_inst_409_);
v___f_412_ = lean_alloc_closure((void*)(l_Lean_setTraceState___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_412_, 0, v_s_410_);
v___x_413_ = lean_apply_1(v_modifyTraceState_411_, v___f_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState(lean_object* v_m_414_, lean_object* v_inst_415_, lean_object* v_s_416_){
_start:
{
lean_object* v_modifyTraceState_417_; lean_object* v___f_418_; lean_object* v___x_419_; 
v_modifyTraceState_417_ = lean_ctor_get(v_inst_415_, 0);
lean_inc(v_modifyTraceState_417_);
lean_dec_ref(v_inst_415_);
v___f_418_ = lean_alloc_closure((void*)(l_Lean_setTraceState___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_418_, 0, v_s_416_);
v___x_419_ = lean_apply_1(v_modifyTraceState_417_, v___f_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__0(lean_object* v_s_420_){
_start:
{
uint64_t v_tid_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_431_; 
v_tid_421_ = lean_ctor_get_uint64(v_s_420_, sizeof(void*)*1);
v_isSharedCheck_431_ = !lean_is_exclusive(v_s_420_);
if (v_isSharedCheck_431_ == 0)
{
lean_object* v_unused_432_; 
v_unused_432_ = lean_ctor_get(v_s_420_, 0);
lean_dec(v_unused_432_);
v___x_423_ = v_s_420_;
v_isShared_424_ = v_isSharedCheck_431_;
goto v_resetjp_422_;
}
else
{
lean_dec(v_s_420_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_431_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_425_ = lean_unsigned_to_nat(32u);
v___x_426_ = lean_mk_empty_array_with_capacity(v___x_425_);
lean_dec_ref(v___x_426_);
v___x_427_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__1, &l_Lean_instInhabitedTraceState_default___closed__1_once, _init_l_Lean_instInhabitedTraceState_default___closed__1);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 0, v___x_427_);
v___x_429_ = v___x_423_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
lean_ctor_set_uint64(v_reuseFailAlloc_430_, sizeof(void*)*1, v_tid_421_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__1(lean_object* v_toPure_433_, lean_object* v_oldTraces_434_, lean_object* v_____r_435_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = lean_apply_2(v_toPure_433_, lean_box(0), v_oldTraces_434_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__2(lean_object* v_toPure_437_, lean_object* v_modifyTraceState_438_, lean_object* v___f_439_, lean_object* v_toBind_440_, lean_object* v_oldTraces_441_){
_start:
{
lean_object* v___f_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___f_442_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__1), 3, 2);
lean_closure_set(v___f_442_, 0, v_toPure_437_);
lean_closure_set(v___f_442_, 1, v_oldTraces_441_);
v___x_443_ = lean_apply_1(v_modifyTraceState_438_, v___f_439_);
v___x_444_ = lean_apply_4(v_toBind_440_, lean_box(0), lean_box(0), v___x_443_, v___f_442_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(lean_object* v_inst_446_, lean_object* v_inst_447_){
_start:
{
lean_object* v_toApplicative_448_; lean_object* v_toBind_449_; lean_object* v_modifyTraceState_450_; lean_object* v_getTraceState_451_; lean_object* v_toPure_452_; lean_object* v___f_453_; lean_object* v___f_454_; lean_object* v___f_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v_toApplicative_448_ = lean_ctor_get(v_inst_446_, 0);
lean_inc_ref(v_toApplicative_448_);
v_toBind_449_ = lean_ctor_get(v_inst_446_, 1);
lean_inc_n(v_toBind_449_, 3);
lean_dec_ref(v_inst_446_);
v_modifyTraceState_450_ = lean_ctor_get(v_inst_447_, 0);
lean_inc(v_modifyTraceState_450_);
v_getTraceState_451_ = lean_ctor_get(v_inst_447_, 1);
lean_inc(v_getTraceState_451_);
lean_dec_ref(v_inst_447_);
v_toPure_452_ = lean_ctor_get(v_toApplicative_448_, 1);
lean_inc_n(v_toPure_452_, 2);
lean_dec_ref(v_toApplicative_448_);
v___f_453_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___closed__0));
v___f_454_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__2), 5, 4);
lean_closure_set(v___f_454_, 0, v_toPure_452_);
lean_closure_set(v___f_454_, 1, v_modifyTraceState_450_);
lean_closure_set(v___f_454_, 2, v___f_453_);
lean_closure_set(v___f_454_, 3, v_toBind_449_);
v___f_455_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_455_, 0, v_toPure_452_);
v___x_456_ = lean_apply_4(v_toBind_449_, lean_box(0), lean_box(0), v_getTraceState_451_, v___f_455_);
v___x_457_ = lean_apply_4(v_toBind_449_, lean_box(0), lean_box(0), v___x_456_, v___f_454_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object* v_m_458_, lean_object* v_inst_459_, lean_object* v_inst_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_459_, v_inst_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__0(lean_object* v_ref_462_, lean_object* v_msg_463_, lean_object* v_s_464_){
_start:
{
uint64_t v_tid_465_; lean_object* v_traces_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_475_; 
v_tid_465_ = lean_ctor_get_uint64(v_s_464_, sizeof(void*)*1);
v_traces_466_ = lean_ctor_get(v_s_464_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v_s_464_);
if (v_isSharedCheck_475_ == 0)
{
v___x_468_ = v_s_464_;
v_isShared_469_ = v_isSharedCheck_475_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_traces_466_);
lean_dec(v_s_464_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_475_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_473_; 
v___x_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_470_, 0, v_ref_462_);
lean_ctor_set(v___x_470_, 1, v_msg_463_);
v___x_471_ = l_Lean_PersistentArray_push___redArg(v_traces_466_, v___x_470_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 0, v___x_471_);
v___x_473_ = v___x_468_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v___x_471_);
lean_ctor_set_uint64(v_reuseFailAlloc_474_, sizeof(void*)*1, v_tid_465_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__1(lean_object* v_inst_476_, lean_object* v_ref_477_, lean_object* v_msg_478_){
_start:
{
lean_object* v_modifyTraceState_479_; lean_object* v___f_480_; lean_object* v___x_481_; 
v_modifyTraceState_479_ = lean_ctor_get(v_inst_476_, 0);
lean_inc(v_modifyTraceState_479_);
lean_dec_ref(v_inst_476_);
v___f_480_ = lean_alloc_closure((void*)(l_Lean_addRawTrace___redArg___lam__0), 3, 2);
lean_closure_set(v___f_480_, 0, v_ref_477_);
lean_closure_set(v___f_480_, 1, v_msg_478_);
v___x_481_ = lean_apply_1(v_modifyTraceState_479_, v___f_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__2(lean_object* v_inst_482_, lean_object* v_inst_483_, lean_object* v_msg_484_, lean_object* v_toBind_485_, lean_object* v_ref_486_){
_start:
{
lean_object* v___f_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v___f_487_ = lean_alloc_closure((void*)(l_Lean_addRawTrace___redArg___lam__1), 3, 2);
lean_closure_set(v___f_487_, 0, v_inst_482_);
lean_closure_set(v___f_487_, 1, v_ref_486_);
v___x_488_ = lean_apply_1(v_inst_483_, v_msg_484_);
v___x_489_ = lean_apply_4(v_toBind_485_, lean_box(0), lean_box(0), v___x_488_, v___f_487_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg(lean_object* v_inst_490_, lean_object* v_inst_491_, lean_object* v_inst_492_, lean_object* v_inst_493_, lean_object* v_msg_494_){
_start:
{
lean_object* v_toBind_495_; lean_object* v_getRef_496_; lean_object* v___f_497_; lean_object* v___x_498_; 
v_toBind_495_ = lean_ctor_get(v_inst_490_, 1);
lean_inc_n(v_toBind_495_, 2);
lean_dec_ref(v_inst_490_);
v_getRef_496_ = lean_ctor_get(v_inst_492_, 0);
lean_inc(v_getRef_496_);
lean_dec_ref(v_inst_492_);
v___f_497_ = lean_alloc_closure((void*)(l_Lean_addRawTrace___redArg___lam__2), 5, 4);
lean_closure_set(v___f_497_, 0, v_inst_491_);
lean_closure_set(v___f_497_, 1, v_inst_493_);
lean_closure_set(v___f_497_, 2, v_msg_494_);
lean_closure_set(v___f_497_, 3, v_toBind_495_);
v___x_498_ = lean_apply_4(v_toBind_495_, lean_box(0), lean_box(0), v_getRef_496_, v___f_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace(lean_object* v_m_499_, lean_object* v_inst_500_, lean_object* v_inst_501_, lean_object* v_inst_502_, lean_object* v_inst_503_, lean_object* v_msg_504_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = l_Lean_addRawTrace___redArg(v_inst_500_, v_inst_501_, v_inst_502_, v_inst_503_, v_msg_504_);
return v___x_505_;
}
}
static double _init_l_Lean_addTrace___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_506_; double v___x_507_; 
v___x_506_ = lean_unsigned_to_nat(0u);
v___x_507_ = lean_float_of_nat(v___x_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__0(lean_object* v_cls_511_, lean_object* v_msg_512_, lean_object* v_ref_513_, lean_object* v_s_514_){
_start:
{
uint64_t v_tid_515_; lean_object* v_traces_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_532_; 
v_tid_515_ = lean_ctor_get_uint64(v_s_514_, sizeof(void*)*1);
v_traces_516_ = lean_ctor_get(v_s_514_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v_s_514_);
if (v_isSharedCheck_532_ == 0)
{
v___x_518_ = v_s_514_;
v_isShared_519_ = v_isSharedCheck_532_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_traces_516_);
lean_dec(v_s_514_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_532_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_520_; double v___x_521_; uint8_t v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_520_ = lean_box(0);
v___x_521_ = lean_float_once(&l_Lean_addTrace___redArg___lam__0___closed__0, &l_Lean_addTrace___redArg___lam__0___closed__0_once, _init_l_Lean_addTrace___redArg___lam__0___closed__0);
v___x_522_ = 0;
v___x_523_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__1));
v___x_524_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_524_, 0, v_cls_511_);
lean_ctor_set(v___x_524_, 1, v___x_520_);
lean_ctor_set(v___x_524_, 2, v___x_523_);
lean_ctor_set_float(v___x_524_, sizeof(void*)*3, v___x_521_);
lean_ctor_set_float(v___x_524_, sizeof(void*)*3 + 8, v___x_521_);
lean_ctor_set_uint8(v___x_524_, sizeof(void*)*3 + 16, v___x_522_);
v___x_525_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__2));
v___x_526_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_526_, 0, v___x_524_);
lean_ctor_set(v___x_526_, 1, v_msg_512_);
lean_ctor_set(v___x_526_, 2, v___x_525_);
v___x_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_527_, 0, v_ref_513_);
lean_ctor_set(v___x_527_, 1, v___x_526_);
v___x_528_ = l_Lean_PersistentArray_push___redArg(v_traces_516_, v___x_527_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v___x_528_);
v___x_530_ = v___x_518_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
lean_ctor_set_uint64(v_reuseFailAlloc_531_, sizeof(void*)*1, v_tid_515_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__1(lean_object* v_inst_533_, lean_object* v_cls_534_, lean_object* v_ref_535_, lean_object* v_msg_536_){
_start:
{
lean_object* v_modifyTraceState_537_; lean_object* v___f_538_; lean_object* v___x_539_; 
v_modifyTraceState_537_ = lean_ctor_get(v_inst_533_, 0);
lean_inc(v_modifyTraceState_537_);
lean_dec_ref(v_inst_533_);
v___f_538_ = lean_alloc_closure((void*)(l_Lean_addTrace___redArg___lam__0), 4, 3);
lean_closure_set(v___f_538_, 0, v_cls_534_);
lean_closure_set(v___f_538_, 1, v_msg_536_);
lean_closure_set(v___f_538_, 2, v_ref_535_);
v___x_539_ = lean_apply_1(v_modifyTraceState_537_, v___f_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__2(lean_object* v_inst_540_, lean_object* v_cls_541_, lean_object* v_inst_542_, lean_object* v_msg_543_, lean_object* v_toBind_544_, lean_object* v_ref_545_){
_start:
{
lean_object* v___f_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___f_546_ = lean_alloc_closure((void*)(l_Lean_addTrace___redArg___lam__1), 4, 3);
lean_closure_set(v___f_546_, 0, v_inst_540_);
lean_closure_set(v___f_546_, 1, v_cls_541_);
lean_closure_set(v___f_546_, 2, v_ref_545_);
v___x_547_ = lean_apply_1(v_inst_542_, v_msg_543_);
v___x_548_ = lean_apply_4(v_toBind_544_, lean_box(0), lean_box(0), v___x_547_, v___f_546_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg(lean_object* v_inst_549_, lean_object* v_inst_550_, lean_object* v_inst_551_, lean_object* v_inst_552_, lean_object* v_cls_553_, lean_object* v_msg_554_){
_start:
{
lean_object* v_toBind_555_; lean_object* v_getRef_556_; lean_object* v___f_557_; lean_object* v___x_558_; 
v_toBind_555_ = lean_ctor_get(v_inst_549_, 1);
lean_inc_n(v_toBind_555_, 2);
lean_dec_ref(v_inst_549_);
v_getRef_556_ = lean_ctor_get(v_inst_551_, 0);
lean_inc(v_getRef_556_);
lean_dec_ref(v_inst_551_);
v___f_557_ = lean_alloc_closure((void*)(l_Lean_addTrace___redArg___lam__2), 6, 5);
lean_closure_set(v___f_557_, 0, v_inst_550_);
lean_closure_set(v___f_557_, 1, v_cls_553_);
lean_closure_set(v___f_557_, 2, v_inst_552_);
lean_closure_set(v___f_557_, 3, v_msg_554_);
lean_closure_set(v___f_557_, 4, v_toBind_555_);
v___x_558_ = lean_apply_4(v_toBind_555_, lean_box(0), lean_box(0), v_getRef_556_, v___f_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace(lean_object* v_m_559_, lean_object* v_inst_560_, lean_object* v_inst_561_, lean_object* v_inst_562_, lean_object* v_inst_563_, lean_object* v_cls_564_, lean_object* v_msg_565_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l_Lean_addTrace___redArg(v_inst_560_, v_inst_561_, v_inst_562_, v_inst_563_, v_cls_564_, v_msg_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_trace___redArg___lam__0(lean_object* v_toPure_567_, lean_object* v_msg_568_, lean_object* v_inst_569_, lean_object* v_inst_570_, lean_object* v_inst_571_, lean_object* v_inst_572_, lean_object* v_cls_573_, uint8_t v_____do__lift_574_){
_start:
{
if (v_____do__lift_574_ == 0)
{
lean_object* v___x_575_; lean_object* v___x_576_; 
lean_dec(v_cls_573_);
lean_dec(v_inst_572_);
lean_dec_ref(v_inst_571_);
lean_dec_ref(v_inst_570_);
lean_dec_ref(v_inst_569_);
lean_dec_ref(v_msg_568_);
v___x_575_ = lean_box(0);
v___x_576_ = lean_apply_2(v_toPure_567_, lean_box(0), v___x_575_);
return v___x_576_;
}
else
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
lean_dec(v_toPure_567_);
v___x_577_ = lean_box(0);
v___x_578_ = lean_apply_1(v_msg_568_, v___x_577_);
v___x_579_ = l_Lean_addTrace___redArg(v_inst_569_, v_inst_570_, v_inst_571_, v_inst_572_, v_cls_573_, v___x_578_);
return v___x_579_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_trace___redArg___lam__0___boxed(lean_object* v_toPure_580_, lean_object* v_msg_581_, lean_object* v_inst_582_, lean_object* v_inst_583_, lean_object* v_inst_584_, lean_object* v_inst_585_, lean_object* v_cls_586_, lean_object* v_____do__lift_587_){
_start:
{
uint8_t v_____do__lift_126__boxed_588_; lean_object* v_res_589_; 
v_____do__lift_126__boxed_588_ = lean_unbox(v_____do__lift_587_);
v_res_589_ = l_Lean_trace___redArg___lam__0(v_toPure_580_, v_msg_581_, v_inst_582_, v_inst_583_, v_inst_584_, v_inst_585_, v_cls_586_, v_____do__lift_126__boxed_588_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_trace___redArg(lean_object* v_inst_590_, lean_object* v_inst_591_, lean_object* v_inst_592_, lean_object* v_inst_593_, lean_object* v_inst_594_, lean_object* v_cls_595_, lean_object* v_msg_596_){
_start:
{
lean_object* v_toApplicative_597_; lean_object* v_toBind_598_; lean_object* v_getInheritedTraceOptions_599_; lean_object* v_toPure_600_; lean_object* v___f_601_; lean_object* v___f_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v_toApplicative_597_ = lean_ctor_get(v_inst_590_, 0);
v_toBind_598_ = lean_ctor_get(v_inst_590_, 1);
lean_inc_n(v_toBind_598_, 3);
v_getInheritedTraceOptions_599_ = lean_ctor_get(v_inst_591_, 2);
lean_inc(v_getInheritedTraceOptions_599_);
v_toPure_600_ = lean_ctor_get(v_toApplicative_597_, 1);
lean_inc_n(v_toPure_600_, 2);
lean_inc(v_cls_595_);
v___f_601_ = lean_alloc_closure((void*)(l_Lean_trace___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_601_, 0, v_toPure_600_);
lean_closure_set(v___f_601_, 1, v_msg_596_);
lean_closure_set(v___f_601_, 2, v_inst_590_);
lean_closure_set(v___f_601_, 3, v_inst_591_);
lean_closure_set(v___f_601_, 4, v_inst_592_);
lean_closure_set(v___f_601_, 5, v_inst_593_);
lean_closure_set(v___f_601_, 6, v_cls_595_);
v___f_602_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_602_, 0, v_toPure_600_);
lean_closure_set(v___f_602_, 1, v_cls_595_);
lean_closure_set(v___f_602_, 2, v_toBind_598_);
lean_closure_set(v___f_602_, 3, v_inst_594_);
v___x_603_ = lean_apply_4(v_toBind_598_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_599_, v___f_602_);
v___x_604_ = lean_apply_4(v_toBind_598_, lean_box(0), lean_box(0), v___x_603_, v___f_601_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_trace(lean_object* v_m_605_, lean_object* v_inst_606_, lean_object* v_inst_607_, lean_object* v_inst_608_, lean_object* v_inst_609_, lean_object* v_inst_610_, lean_object* v_cls_611_, lean_object* v_msg_612_){
_start:
{
lean_object* v_toApplicative_613_; lean_object* v_toBind_614_; lean_object* v_getInheritedTraceOptions_615_; lean_object* v_toPure_616_; lean_object* v___f_617_; lean_object* v___f_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v_toApplicative_613_ = lean_ctor_get(v_inst_606_, 0);
v_toBind_614_ = lean_ctor_get(v_inst_606_, 1);
lean_inc_n(v_toBind_614_, 3);
v_getInheritedTraceOptions_615_ = lean_ctor_get(v_inst_607_, 2);
lean_inc(v_getInheritedTraceOptions_615_);
v_toPure_616_ = lean_ctor_get(v_toApplicative_613_, 1);
lean_inc_n(v_toPure_616_, 2);
lean_inc(v_cls_611_);
v___f_617_ = lean_alloc_closure((void*)(l_Lean_trace___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_617_, 0, v_toPure_616_);
lean_closure_set(v___f_617_, 1, v_msg_612_);
lean_closure_set(v___f_617_, 2, v_inst_606_);
lean_closure_set(v___f_617_, 3, v_inst_607_);
lean_closure_set(v___f_617_, 4, v_inst_608_);
lean_closure_set(v___f_617_, 5, v_inst_609_);
lean_closure_set(v___f_617_, 6, v_cls_611_);
v___f_618_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_618_, 0, v_toPure_616_);
lean_closure_set(v___f_618_, 1, v_cls_611_);
lean_closure_set(v___f_618_, 2, v_toBind_614_);
lean_closure_set(v___f_618_, 3, v_inst_610_);
v___x_619_ = lean_apply_4(v_toBind_614_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_615_, v___f_618_);
v___x_620_ = lean_apply_4(v_toBind_614_, lean_box(0), lean_box(0), v___x_619_, v___f_617_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__0(lean_object* v_inst_621_, lean_object* v_inst_622_, lean_object* v_inst_623_, lean_object* v_inst_624_, lean_object* v_cls_625_, lean_object* v_msg_626_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l_Lean_addTrace___redArg(v_inst_621_, v_inst_622_, v_inst_623_, v_inst_624_, v_cls_625_, v_msg_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__1(lean_object* v_toPure_628_, lean_object* v_toBind_629_, lean_object* v_mkMsg_630_, lean_object* v___f_631_, uint8_t v_____do__lift_632_){
_start:
{
if (v_____do__lift_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; 
lean_dec(v___f_631_);
lean_dec(v_mkMsg_630_);
lean_dec(v_toBind_629_);
v___x_633_ = lean_box(0);
v___x_634_ = lean_apply_2(v_toPure_628_, lean_box(0), v___x_633_);
return v___x_634_;
}
else
{
lean_object* v___x_635_; 
lean_dec(v_toPure_628_);
v___x_635_ = lean_apply_4(v_toBind_629_, lean_box(0), lean_box(0), v_mkMsg_630_, v___f_631_);
return v___x_635_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__1___boxed(lean_object* v_toPure_636_, lean_object* v_toBind_637_, lean_object* v_mkMsg_638_, lean_object* v___f_639_, lean_object* v_____do__lift_640_){
_start:
{
uint8_t v_____do__lift_132__boxed_641_; lean_object* v_res_642_; 
v_____do__lift_132__boxed_641_ = lean_unbox(v_____do__lift_640_);
v_res_642_ = l_Lean_traceM___redArg___lam__1(v_toPure_636_, v_toBind_637_, v_mkMsg_638_, v___f_639_, v_____do__lift_132__boxed_641_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg(lean_object* v_inst_643_, lean_object* v_inst_644_, lean_object* v_inst_645_, lean_object* v_inst_646_, lean_object* v_inst_647_, lean_object* v_cls_648_, lean_object* v_mkMsg_649_){
_start:
{
lean_object* v_toApplicative_650_; lean_object* v_toBind_651_; lean_object* v_getInheritedTraceOptions_652_; lean_object* v_toPure_653_; lean_object* v___f_654_; lean_object* v___f_655_; lean_object* v___f_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v_toApplicative_650_ = lean_ctor_get(v_inst_643_, 0);
v_toBind_651_ = lean_ctor_get(v_inst_643_, 1);
lean_inc_n(v_toBind_651_, 4);
v_getInheritedTraceOptions_652_ = lean_ctor_get(v_inst_644_, 2);
lean_inc(v_getInheritedTraceOptions_652_);
v_toPure_653_ = lean_ctor_get(v_toApplicative_650_, 1);
lean_inc_n(v_toPure_653_, 2);
lean_inc(v_cls_648_);
v___f_654_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__0), 6, 5);
lean_closure_set(v___f_654_, 0, v_inst_643_);
lean_closure_set(v___f_654_, 1, v_inst_644_);
lean_closure_set(v___f_654_, 2, v_inst_645_);
lean_closure_set(v___f_654_, 3, v_inst_646_);
lean_closure_set(v___f_654_, 4, v_cls_648_);
v___f_655_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_655_, 0, v_toPure_653_);
lean_closure_set(v___f_655_, 1, v_toBind_651_);
lean_closure_set(v___f_655_, 2, v_mkMsg_649_);
lean_closure_set(v___f_655_, 3, v___f_654_);
v___f_656_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_656_, 0, v_toPure_653_);
lean_closure_set(v___f_656_, 1, v_cls_648_);
lean_closure_set(v___f_656_, 2, v_toBind_651_);
lean_closure_set(v___f_656_, 3, v_inst_647_);
v___x_657_ = lean_apply_4(v_toBind_651_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_652_, v___f_656_);
v___x_658_ = lean_apply_4(v_toBind_651_, lean_box(0), lean_box(0), v___x_657_, v___f_655_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM(lean_object* v_m_659_, lean_object* v_inst_660_, lean_object* v_inst_661_, lean_object* v_inst_662_, lean_object* v_inst_663_, lean_object* v_inst_664_, lean_object* v_cls_665_, lean_object* v_mkMsg_666_){
_start:
{
lean_object* v_toApplicative_667_; lean_object* v_toBind_668_; lean_object* v_getInheritedTraceOptions_669_; lean_object* v_toPure_670_; lean_object* v___f_671_; lean_object* v___f_672_; lean_object* v___f_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v_toApplicative_667_ = lean_ctor_get(v_inst_660_, 0);
v_toBind_668_ = lean_ctor_get(v_inst_660_, 1);
lean_inc_n(v_toBind_668_, 4);
v_getInheritedTraceOptions_669_ = lean_ctor_get(v_inst_661_, 2);
lean_inc(v_getInheritedTraceOptions_669_);
v_toPure_670_ = lean_ctor_get(v_toApplicative_667_, 1);
lean_inc_n(v_toPure_670_, 2);
lean_inc(v_cls_665_);
v___f_671_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__0), 6, 5);
lean_closure_set(v___f_671_, 0, v_inst_660_);
lean_closure_set(v___f_671_, 1, v_inst_661_);
lean_closure_set(v___f_671_, 2, v_inst_662_);
lean_closure_set(v___f_671_, 3, v_inst_663_);
lean_closure_set(v___f_671_, 4, v_cls_665_);
v___f_672_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_672_, 0, v_toPure_670_);
lean_closure_set(v___f_672_, 1, v_toBind_668_);
lean_closure_set(v___f_672_, 2, v_mkMsg_666_);
lean_closure_set(v___f_672_, 3, v___f_671_);
v___f_673_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_673_, 0, v_toPure_670_);
lean_closure_set(v___f_673_, 1, v_cls_665_);
lean_closure_set(v___f_673_, 2, v_toBind_668_);
lean_closure_set(v___f_673_, 3, v_inst_664_);
v___x_674_ = lean_apply_4(v_toBind_668_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_669_, v___f_673_);
v___x_675_ = lean_apply_4(v_toBind_668_, lean_box(0), lean_box(0), v___x_674_, v___f_672_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1(lean_object* v_x_676_){
_start:
{
lean_object* v_msg_677_; 
v_msg_677_ = lean_ctor_get(v_x_676_, 1);
lean_inc_ref(v_msg_677_);
return v_msg_677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1___boxed(lean_object* v_x_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1(v_x_678_);
lean_dec_ref(v_x_678_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__0(lean_object* v_ref_680_, lean_object* v_msg_681_, lean_object* v_oldTraces_682_, lean_object* v_s_683_){
_start:
{
uint64_t v_tid_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_693_; 
v_tid_684_ = lean_ctor_get_uint64(v_s_683_, sizeof(void*)*1);
v_isSharedCheck_693_ = !lean_is_exclusive(v_s_683_);
if (v_isSharedCheck_693_ == 0)
{
lean_object* v_unused_694_; 
v_unused_694_ = lean_ctor_get(v_s_683_, 0);
lean_dec(v_unused_694_);
v___x_686_ = v_s_683_;
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
else
{
lean_dec(v_s_683_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_688_, 0, v_ref_680_);
lean_ctor_set(v___x_688_, 1, v_msg_681_);
v___x_689_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_682_, v___x_688_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v___x_689_);
v___x_691_ = v___x_686_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_689_);
lean_ctor_set_uint64(v_reuseFailAlloc_692_, sizeof(void*)*1, v_tid_684_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__2(lean_object* v_ref_695_, lean_object* v_oldTraces_696_, lean_object* v_modifyTraceState_697_, lean_object* v_msg_698_){
_start:
{
lean_object* v___f_699_; lean_object* v___x_700_; 
v___f_699_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__0), 4, 3);
lean_closure_set(v___f_699_, 0, v_ref_695_);
lean_closure_set(v___f_699_, 1, v_msg_698_);
lean_closure_set(v___f_699_, 2, v_oldTraces_696_);
v___x_700_ = lean_apply_1(v_modifyTraceState_697_, v___f_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3(lean_object* v___f_720_, lean_object* v_data_721_, lean_object* v_msg_722_, lean_object* v_inst_723_, lean_object* v_toBind_724_, lean_object* v___f_725_, lean_object* v_____do__lift_726_){
_start:
{
lean_object* v___x_727_; lean_object* v___x_728_; size_t v_sz_729_; size_t v___x_730_; lean_object* v___x_731_; lean_object* v_msg_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_727_ = l_Lean_PersistentArray_toArray___redArg(v_____do__lift_726_);
v___x_728_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9));
v_sz_729_ = lean_array_size(v___x_727_);
v___x_730_ = ((size_t)0ULL);
v___x_731_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_728_, v___f_720_, v_sz_729_, v___x_730_, v___x_727_);
v_msg_732_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_732_, 0, v_data_721_);
lean_ctor_set(v_msg_732_, 1, v_msg_722_);
lean_ctor_set(v_msg_732_, 2, v___x_731_);
v___x_733_ = lean_apply_1(v_inst_723_, v_msg_732_);
v___x_734_ = lean_apply_4(v_toBind_724_, lean_box(0), lean_box(0), v___x_733_, v___f_725_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___boxed(lean_object* v___f_735_, lean_object* v_data_736_, lean_object* v_msg_737_, lean_object* v_inst_738_, lean_object* v_toBind_739_, lean_object* v___f_740_, lean_object* v_____do__lift_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3(v___f_735_, v_data_736_, v_msg_737_, v_inst_738_, v_toBind_739_, v___f_740_, v_____do__lift_741_);
lean_dec_ref(v_____do__lift_741_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4(lean_object* v_ref_743_, lean_object* v_withRef_744_, lean_object* v___x_745_, lean_object* v_oldRef_746_){
_start:
{
lean_object* v_ref_747_; lean_object* v___x_748_; 
v_ref_747_ = l_Lean_replaceRef(v_ref_743_, v_oldRef_746_);
v___x_748_ = lean_apply_3(v_withRef_744_, lean_box(0), v_ref_747_, v___x_745_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed(lean_object* v_ref_749_, lean_object* v_withRef_750_, lean_object* v___x_751_, lean_object* v_oldRef_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4(v_ref_749_, v_withRef_750_, v___x_751_, v_oldRef_752_);
lean_dec(v_oldRef_752_);
lean_dec(v_ref_749_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(lean_object* v_inst_755_, lean_object* v_inst_756_, lean_object* v_inst_757_, lean_object* v_inst_758_, lean_object* v_oldTraces_759_, lean_object* v_data_760_, lean_object* v_ref_761_, lean_object* v_msg_762_){
_start:
{
lean_object* v_toApplicative_763_; lean_object* v_toBind_764_; lean_object* v_modifyTraceState_765_; lean_object* v_getTraceState_766_; lean_object* v_toPure_767_; lean_object* v_getRef_768_; lean_object* v_withRef_769_; lean_object* v___f_770_; lean_object* v___x_771_; lean_object* v___f_772_; lean_object* v___f_773_; lean_object* v___f_774_; lean_object* v___x_775_; lean_object* v___f_776_; lean_object* v___x_777_; 
v_toApplicative_763_ = lean_ctor_get(v_inst_755_, 0);
lean_inc_ref(v_toApplicative_763_);
v_toBind_764_ = lean_ctor_get(v_inst_755_, 1);
lean_inc_n(v_toBind_764_, 4);
lean_dec_ref(v_inst_755_);
v_modifyTraceState_765_ = lean_ctor_get(v_inst_756_, 0);
lean_inc(v_modifyTraceState_765_);
v_getTraceState_766_ = lean_ctor_get(v_inst_756_, 1);
lean_inc(v_getTraceState_766_);
lean_dec_ref(v_inst_756_);
v_toPure_767_ = lean_ctor_get(v_toApplicative_763_, 1);
lean_inc(v_toPure_767_);
lean_dec_ref(v_toApplicative_763_);
v_getRef_768_ = lean_ctor_get(v_inst_757_, 0);
lean_inc(v_getRef_768_);
v_withRef_769_ = lean_ctor_get(v_inst_757_, 1);
lean_inc(v_withRef_769_);
lean_dec_ref(v_inst_757_);
v___f_770_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_770_, 0, v_toPure_767_);
v___x_771_ = lean_apply_4(v_toBind_764_, lean_box(0), lean_box(0), v_getTraceState_766_, v___f_770_);
v___f_772_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___closed__0));
lean_inc(v_ref_761_);
v___f_773_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__2), 4, 3);
lean_closure_set(v___f_773_, 0, v_ref_761_);
lean_closure_set(v___f_773_, 1, v_oldTraces_759_);
lean_closure_set(v___f_773_, 2, v_modifyTraceState_765_);
v___f_774_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_774_, 0, v___f_772_);
lean_closure_set(v___f_774_, 1, v_data_760_);
lean_closure_set(v___f_774_, 2, v_msg_762_);
lean_closure_set(v___f_774_, 3, v_inst_758_);
lean_closure_set(v___f_774_, 4, v_toBind_764_);
lean_closure_set(v___f_774_, 5, v___f_773_);
v___x_775_ = lean_apply_4(v_toBind_764_, lean_box(0), lean_box(0), v___x_771_, v___f_774_);
v___f_776_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_776_, 0, v_ref_761_);
lean_closure_set(v___f_776_, 1, v_withRef_769_);
lean_closure_set(v___f_776_, 2, v___x_775_);
v___x_777_ = lean_apply_4(v_toBind_764_, lean_box(0), lean_box(0), v_getRef_768_, v___f_776_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode(lean_object* v_m_778_, lean_object* v_inst_779_, lean_object* v_inst_780_, lean_object* v_inst_781_, lean_object* v_inst_782_, lean_object* v_oldTraces_783_, lean_object* v_data_784_, lean_object* v_ref_785_, lean_object* v_msg_786_){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(v_inst_779_, v_inst_780_, v_inst_781_, v_inst_782_, v_oldTraces_783_, v_data_784_, v_ref_785_, v_msg_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(lean_object* v_name_788_, lean_object* v_decl_789_, lean_object* v_ref_790_){
_start:
{
lean_object* v_defValue_792_; lean_object* v_descr_793_; lean_object* v_deprecation_x3f_794_; lean_object* v___x_795_; uint8_t v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v_defValue_792_ = lean_ctor_get(v_decl_789_, 0);
v_descr_793_ = lean_ctor_get(v_decl_789_, 1);
v_deprecation_x3f_794_ = lean_ctor_get(v_decl_789_, 2);
v___x_795_ = lean_alloc_ctor(1, 0, 1);
v___x_796_ = lean_unbox(v_defValue_792_);
lean_ctor_set_uint8(v___x_795_, 0, v___x_796_);
lean_inc(v_deprecation_x3f_794_);
lean_inc_ref(v_descr_793_);
lean_inc_n(v_name_788_, 2);
v___x_797_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_797_, 0, v_name_788_);
lean_ctor_set(v___x_797_, 1, v_ref_790_);
lean_ctor_set(v___x_797_, 2, v___x_795_);
lean_ctor_set(v___x_797_, 3, v_descr_793_);
lean_ctor_set(v___x_797_, 4, v_deprecation_x3f_794_);
v___x_798_ = lean_register_option(v_name_788_, v___x_797_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_806_; 
v_isSharedCheck_806_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_806_ == 0)
{
lean_object* v_unused_807_; 
v_unused_807_ = lean_ctor_get(v___x_798_, 0);
lean_dec(v_unused_807_);
v___x_800_ = v___x_798_;
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
else
{
lean_dec(v___x_798_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_804_; 
lean_inc(v_defValue_792_);
v___x_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_802_, 0, v_name_788_);
lean_ctor_set(v___x_802_, 1, v_defValue_792_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v___x_802_);
v___x_804_ = v___x_800_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
else
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
lean_dec(v_name_788_);
v_a_808_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_798_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_798_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_816_, lean_object* v_decl_817_, lean_object* v_ref_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v_name_816_, v_decl_817_, v_ref_818_);
lean_dec_ref(v_decl_817_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_836_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_));
v___x_837_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_));
v___x_838_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_));
v___x_839_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_836_, v___x_837_, v___x_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4____boxed(lean_object* v___y_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_();
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0(lean_object* v_name_842_, lean_object* v_decl_843_, lean_object* v_ref_844_){
_start:
{
lean_object* v_defValue_846_; lean_object* v_descr_847_; lean_object* v_deprecation_x3f_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v_defValue_846_ = lean_ctor_get(v_decl_843_, 0);
v_descr_847_ = lean_ctor_get(v_decl_843_, 1);
v_deprecation_x3f_848_ = lean_ctor_get(v_decl_843_, 2);
lean_inc(v_defValue_846_);
v___x_849_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_849_, 0, v_defValue_846_);
lean_inc(v_deprecation_x3f_848_);
lean_inc_ref(v_descr_847_);
lean_inc_n(v_name_842_, 2);
v___x_850_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_850_, 0, v_name_842_);
lean_ctor_set(v___x_850_, 1, v_ref_844_);
lean_ctor_set(v___x_850_, 2, v___x_849_);
lean_ctor_set(v___x_850_, 3, v_descr_847_);
lean_ctor_set(v___x_850_, 4, v_deprecation_x3f_848_);
v___x_851_ = lean_register_option(v_name_842_, v___x_850_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_859_; 
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_859_ == 0)
{
lean_object* v_unused_860_; 
v_unused_860_ = lean_ctor_get(v___x_851_, 0);
lean_dec(v_unused_860_);
v___x_853_ = v___x_851_;
v_isShared_854_ = v_isSharedCheck_859_;
goto v_resetjp_852_;
}
else
{
lean_dec(v___x_851_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_859_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_855_; lean_object* v___x_857_; 
lean_inc(v_defValue_846_);
v___x_855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_855_, 0, v_name_842_);
lean_ctor_set(v___x_855_, 1, v_defValue_846_);
if (v_isShared_854_ == 0)
{
lean_ctor_set(v___x_853_, 0, v___x_855_);
v___x_857_ = v___x_853_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_855_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
else
{
lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_868_; 
lean_dec(v_name_842_);
v_a_861_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_868_ == 0)
{
v___x_863_ = v___x_851_;
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_851_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_868_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_866_; 
if (v_isShared_864_ == 0)
{
v___x_866_ = v___x_863_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_a_861_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
return v___x_866_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_869_, lean_object* v_decl_870_, lean_object* v_ref_871_, lean_object* v___y_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0(v_name_869_, v_decl_870_, v_ref_871_);
lean_dec_ref(v_decl_870_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_890_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_));
v___x_891_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_));
v___x_892_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_));
v___x_893_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0(v___x_890_, v___x_891_, v___x_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4____boxed(lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_();
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_913_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_));
v___x_914_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_));
v___x_915_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_));
v___x_916_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_913_, v___x_914_, v___x_915_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4____boxed(lean_object* v___y_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_();
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0(lean_object* v_name_919_, lean_object* v_decl_920_, lean_object* v_ref_921_){
_start:
{
lean_object* v_defValue_923_; lean_object* v_descr_924_; lean_object* v_deprecation_x3f_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v_defValue_923_ = lean_ctor_get(v_decl_920_, 0);
v_descr_924_ = lean_ctor_get(v_decl_920_, 1);
v_deprecation_x3f_925_ = lean_ctor_get(v_decl_920_, 2);
lean_inc(v_defValue_923_);
v___x_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_926_, 0, v_defValue_923_);
lean_inc(v_deprecation_x3f_925_);
lean_inc_ref(v_descr_924_);
lean_inc_n(v_name_919_, 2);
v___x_927_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_927_, 0, v_name_919_);
lean_ctor_set(v___x_927_, 1, v_ref_921_);
lean_ctor_set(v___x_927_, 2, v___x_926_);
lean_ctor_set(v___x_927_, 3, v_descr_924_);
lean_ctor_set(v___x_927_, 4, v_deprecation_x3f_925_);
v___x_928_ = lean_register_option(v_name_919_, v___x_927_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_936_; 
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_936_ == 0)
{
lean_object* v_unused_937_; 
v_unused_937_ = lean_ctor_get(v___x_928_, 0);
lean_dec(v_unused_937_);
v___x_930_ = v___x_928_;
v_isShared_931_ = v_isSharedCheck_936_;
goto v_resetjp_929_;
}
else
{
lean_dec(v___x_928_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_936_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_932_; lean_object* v___x_934_; 
lean_inc(v_defValue_923_);
v___x_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_932_, 0, v_name_919_);
lean_ctor_set(v___x_932_, 1, v_defValue_923_);
if (v_isShared_931_ == 0)
{
lean_ctor_set(v___x_930_, 0, v___x_932_);
v___x_934_ = v___x_930_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v___x_932_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
else
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
lean_dec(v_name_919_);
v_a_938_ = lean_ctor_get(v___x_928_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_928_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_928_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_938_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_946_, lean_object* v_decl_947_, lean_object* v_ref_948_, lean_object* v___y_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0(v_name_946_, v_decl_947_, v_ref_948_);
lean_dec_ref(v_decl_947_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_967_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_));
v___x_968_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_));
v___x_969_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_));
v___x_970_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0(v___x_967_, v___x_968_, v___x_969_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4____boxed(lean_object* v___y_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_();
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_990_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_));
v___x_991_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_));
v___x_992_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_));
v___x_993_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_990_, v___x_991_, v___x_992_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4____boxed(lean_object* v___y_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_();
return v_res_995_;
}
}
LEAN_EXPORT uint8_t l_Lean_trace_profiler_isExporting(lean_object* v_opts_996_){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_997_ = l_Lean_KVMap_instValueBool;
v___x_998_ = l_Lean_KVMap_instValueString;
v___x_999_ = l_Lean_trace_profiler_output;
v___x_1000_ = l_Lean_Option_get_x3f___redArg(v___x_998_, v_opts_996_, v___x_999_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v___x_1001_; lean_object* v___x_1002_; uint8_t v___x_1003_; 
v___x_1001_ = l_Lean_trace_profiler_serve;
v___x_1002_ = l_Lean_Option_get___redArg(v___x_997_, v_opts_996_, v___x_1001_);
v___x_1003_ = lean_unbox(v___x_1002_);
lean_dec(v___x_1002_);
return v___x_1003_;
}
else
{
uint8_t v___x_1004_; 
lean_dec_ref_known(v___x_1000_, 1);
v___x_1004_ = 1;
return v___x_1004_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_trace_profiler_isExporting___boxed(lean_object* v_opts_1005_){
_start:
{
uint8_t v_res_1006_; lean_object* v_r_1007_; 
v_res_1006_ = l_Lean_trace_profiler_isExporting(v_opts_1005_);
lean_dec_ref(v_opts_1005_);
v_r_1007_ = lean_box(v_res_1006_);
return v_r_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1027_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_));
v___x_1028_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_));
v___x_1029_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_));
v___x_1030_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_1027_, v___x_1028_, v___x_1029_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4____boxed(lean_object* v___y_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_();
return v_res_1032_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1033_; double v___x_1034_; 
v___x_1033_ = lean_unsigned_to_nat(1000000000u);
v___x_1034_ = lean_float_of_nat(v___x_1033_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0(lean_object* v_start_1035_, lean_object* v_a_1036_, lean_object* v_toPure_1037_, lean_object* v_stop_1038_){
_start:
{
double v___x_1039_; double v___x_1040_; double v___x_1041_; double v___x_1042_; double v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1039_ = lean_float_of_nat(v_start_1035_);
v___x_1040_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0, &l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0);
v___x_1041_ = lean_float_div(v___x_1039_, v___x_1040_);
v___x_1042_ = lean_float_of_nat(v_stop_1038_);
v___x_1043_ = lean_float_div(v___x_1042_, v___x_1040_);
v___x_1044_ = lean_box_float(v___x_1041_);
v___x_1045_ = lean_box_float(v___x_1043_);
v___x_1046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1044_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1047_, 0, v_a_1036_);
lean_ctor_set(v___x_1047_, 1, v___x_1046_);
v___x_1048_ = lean_apply_2(v_toPure_1037_, lean_box(0), v___x_1047_);
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__1(lean_object* v_start_1049_, lean_object* v_toPure_1050_, lean_object* v_toBind_1051_, lean_object* v___x_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v___f_1054_; lean_object* v___x_1055_; 
v___f_1054_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1054_, 0, v_start_1049_);
lean_closure_set(v___f_1054_, 1, v_a_1053_);
lean_closure_set(v___f_1054_, 2, v_toPure_1050_);
v___x_1055_ = lean_apply_4(v_toBind_1051_, lean_box(0), lean_box(0), v___x_1052_, v___f_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__2(lean_object* v_toPure_1056_, lean_object* v_toBind_1057_, lean_object* v___x_1058_, lean_object* v_act_1059_, lean_object* v_start_1060_){
_start:
{
lean_object* v___f_1061_; lean_object* v___x_1062_; 
lean_inc(v_toBind_1057_);
v___f_1061_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1061_, 0, v_start_1060_);
lean_closure_set(v___f_1061_, 1, v_toPure_1056_);
lean_closure_set(v___f_1061_, 2, v_toBind_1057_);
lean_closure_set(v___f_1061_, 3, v___x_1058_);
v___x_1062_ = lean_apply_4(v_toBind_1057_, lean_box(0), lean_box(0), v_act_1059_, v___f_1061_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__3(lean_object* v_start_1063_, lean_object* v_a_1064_, lean_object* v_toPure_1065_, lean_object* v_stop_1066_){
_start:
{
double v___x_1067_; double v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1067_ = lean_float_of_nat(v_start_1063_);
v___x_1068_ = lean_float_of_nat(v_stop_1066_);
v___x_1069_ = lean_box_float(v___x_1067_);
v___x_1070_ = lean_box_float(v___x_1068_);
v___x_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1069_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1072_, 0, v_a_1064_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
v___x_1073_ = lean_apply_2(v_toPure_1065_, lean_box(0), v___x_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__4(lean_object* v_start_1074_, lean_object* v_toPure_1075_, lean_object* v_toBind_1076_, lean_object* v___x_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v___f_1079_; lean_object* v___x_1080_; 
v___f_1079_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__3), 4, 3);
lean_closure_set(v___f_1079_, 0, v_start_1074_);
lean_closure_set(v___f_1079_, 1, v_a_1078_);
lean_closure_set(v___f_1079_, 2, v_toPure_1075_);
v___x_1080_ = lean_apply_4(v_toBind_1076_, lean_box(0), lean_box(0), v___x_1077_, v___f_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__5(lean_object* v_toPure_1081_, lean_object* v_toBind_1082_, lean_object* v___x_1083_, lean_object* v_act_1084_, lean_object* v_start_1085_){
_start:
{
lean_object* v___f_1086_; lean_object* v___x_1087_; 
lean_inc(v_toBind_1082_);
v___f_1086_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1086_, 0, v_start_1085_);
lean_closure_set(v___f_1086_, 1, v_toPure_1081_);
lean_closure_set(v___f_1086_, 2, v_toBind_1082_);
lean_closure_set(v___f_1086_, 3, v___x_1083_);
v___x_1087_ = lean_apply_4(v_toBind_1082_, lean_box(0), lean_box(0), v_act_1084_, v___f_1086_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg(lean_object* v_inst_1090_, lean_object* v_inst_1091_, lean_object* v_opts_1092_, lean_object* v_act_1093_){
_start:
{
lean_object* v___x_1094_; lean_object* v_toApplicative_1095_; lean_object* v_toBind_1096_; lean_object* v_toPure_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; uint8_t v___x_1100_; 
v___x_1094_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1095_ = lean_ctor_get(v_inst_1090_, 0);
lean_inc_ref(v_toApplicative_1095_);
v_toBind_1096_ = lean_ctor_get(v_inst_1090_, 1);
lean_inc(v_toBind_1096_);
lean_dec_ref(v_inst_1090_);
v_toPure_1097_ = lean_ctor_get(v_toApplicative_1095_, 1);
lean_inc(v_toPure_1097_);
lean_dec_ref(v_toApplicative_1095_);
v___x_1098_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1099_ = l_Lean_Option_get___redArg(v___x_1094_, v_opts_1092_, v___x_1098_);
v___x_1100_ = lean_unbox(v___x_1099_);
lean_dec(v___x_1099_);
if (v___x_1100_ == 0)
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___f_1103_; lean_object* v___x_1104_; 
v___x_1101_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1102_ = lean_apply_2(v_inst_1091_, lean_box(0), v___x_1101_);
lean_inc(v___x_1102_);
lean_inc(v_toBind_1096_);
v___f_1103_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1103_, 0, v_toPure_1097_);
lean_closure_set(v___f_1103_, 1, v_toBind_1096_);
lean_closure_set(v___f_1103_, 2, v___x_1102_);
lean_closure_set(v___f_1103_, 3, v_act_1093_);
v___x_1104_ = lean_apply_4(v_toBind_1096_, lean_box(0), lean_box(0), v___x_1102_, v___f_1103_);
return v___x_1104_;
}
else
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___f_1107_; lean_object* v___x_1108_; 
v___x_1105_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_1106_ = lean_apply_2(v_inst_1091_, lean_box(0), v___x_1105_);
lean_inc(v___x_1106_);
lean_inc(v_toBind_1096_);
v___f_1107_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1107_, 0, v_toPure_1097_);
lean_closure_set(v___f_1107_, 1, v_toBind_1096_);
lean_closure_set(v___f_1107_, 2, v___x_1106_);
lean_closure_set(v___f_1107_, 3, v_act_1093_);
v___x_1108_ = lean_apply_4(v_toBind_1096_, lean_box(0), lean_box(0), v___x_1106_, v___f_1107_);
return v___x_1108_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___boxed(lean_object* v_inst_1109_, lean_object* v_inst_1110_, lean_object* v_opts_1111_, lean_object* v_act_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg(v_inst_1109_, v_inst_1110_, v_opts_1111_, v_act_1112_);
lean_dec_ref(v_opts_1111_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop(lean_object* v_00_u03b1_1114_, lean_object* v_m_1115_, lean_object* v_inst_1116_, lean_object* v_inst_1117_, lean_object* v_opts_1118_, lean_object* v_act_1119_){
_start:
{
lean_object* v___x_1120_; lean_object* v_toApplicative_1121_; lean_object* v_toBind_1122_; lean_object* v_toPure_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; uint8_t v___x_1126_; 
v___x_1120_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1121_ = lean_ctor_get(v_inst_1116_, 0);
lean_inc_ref(v_toApplicative_1121_);
v_toBind_1122_ = lean_ctor_get(v_inst_1116_, 1);
lean_inc(v_toBind_1122_);
lean_dec_ref(v_inst_1116_);
v_toPure_1123_ = lean_ctor_get(v_toApplicative_1121_, 1);
lean_inc(v_toPure_1123_);
lean_dec_ref(v_toApplicative_1121_);
v___x_1124_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1125_ = l_Lean_Option_get___redArg(v___x_1120_, v_opts_1118_, v___x_1124_);
v___x_1126_ = lean_unbox(v___x_1125_);
lean_dec(v___x_1125_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___f_1129_; lean_object* v___x_1130_; 
v___x_1127_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1128_ = lean_apply_2(v_inst_1117_, lean_box(0), v___x_1127_);
lean_inc(v___x_1128_);
lean_inc(v_toBind_1122_);
v___f_1129_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1129_, 0, v_toPure_1123_);
lean_closure_set(v___f_1129_, 1, v_toBind_1122_);
lean_closure_set(v___f_1129_, 2, v___x_1128_);
lean_closure_set(v___f_1129_, 3, v_act_1119_);
v___x_1130_ = lean_apply_4(v_toBind_1122_, lean_box(0), lean_box(0), v___x_1128_, v___f_1129_);
return v___x_1130_;
}
else
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___f_1133_; lean_object* v___x_1134_; 
v___x_1131_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_1132_ = lean_apply_2(v_inst_1117_, lean_box(0), v___x_1131_);
lean_inc(v___x_1132_);
lean_inc(v_toBind_1122_);
v___f_1133_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1133_, 0, v_toPure_1123_);
lean_closure_set(v___f_1133_, 1, v_toBind_1122_);
lean_closure_set(v___f_1133_, 2, v___x_1132_);
lean_closure_set(v___f_1133_, 3, v_act_1119_);
v___x_1134_ = lean_apply_4(v_toBind_1122_, lean_box(0), lean_box(0), v___x_1132_, v___f_1133_);
return v___x_1134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___boxed(lean_object* v_00_u03b1_1135_, lean_object* v_m_1136_, lean_object* v_inst_1137_, lean_object* v_inst_1138_, lean_object* v_opts_1139_, lean_object* v_act_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l___private_Lean_Util_Trace_0__Lean_withStartStop(v_00_u03b1_1135_, v_m_1136_, v_inst_1137_, v_inst_1138_, v_opts_1139_, v_act_1140_);
lean_dec_ref(v_opts_1139_);
return v_res_1141_;
}
}
static double _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0(void){
_start:
{
lean_object* v___x_1142_; double v___x_1143_; 
v___x_1142_ = lean_unsigned_to_nat(1000u);
v___x_1143_ = lean_float_of_nat(v___x_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT double l_Lean_trace_profiler_threshold_unitAdjusted(lean_object* v_o_1144_){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; uint8_t v___x_1149_; 
v___x_1145_ = l_Lean_KVMap_instValueBool;
v___x_1146_ = l_Lean_KVMap_instValueNat;
v___x_1147_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1148_ = l_Lean_Option_get___redArg(v___x_1145_, v_o_1144_, v___x_1147_);
v___x_1149_ = lean_unbox(v___x_1148_);
lean_dec(v___x_1148_);
if (v___x_1149_ == 0)
{
lean_object* v___x_1150_; lean_object* v___x_1151_; double v___x_1152_; double v___x_1153_; double v___x_1154_; 
v___x_1150_ = l_Lean_trace_profiler_threshold;
v___x_1151_ = l_Lean_Option_get___redArg(v___x_1146_, v_o_1144_, v___x_1150_);
v___x_1152_ = lean_float_of_nat(v___x_1151_);
v___x_1153_ = lean_float_once(&l_Lean_trace_profiler_threshold_unitAdjusted___closed__0, &l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once, _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0);
v___x_1154_ = lean_float_div(v___x_1152_, v___x_1153_);
return v___x_1154_;
}
else
{
lean_object* v___x_1155_; lean_object* v___x_1156_; double v___x_1157_; 
v___x_1155_ = l_Lean_trace_profiler_threshold;
v___x_1156_ = l_Lean_Option_get___redArg(v___x_1146_, v_o_1144_, v___x_1155_);
v___x_1157_ = lean_float_of_nat(v___x_1156_);
return v___x_1157_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_trace_profiler_threshold_unitAdjusted___boxed(lean_object* v_o_1158_){
_start:
{
double v_res_1159_; lean_object* v_r_1160_; 
v_res_1159_ = l_Lean_trace_profiler_threshold_unitAdjusted(v_o_1158_);
lean_dec_ref(v_o_1158_);
v_r_1160_ = lean_box_float(v_res_1159_);
return v_r_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg(){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = ((lean_object*)(l_Lean_instMonadAlwaysExceptEIO___redArg___closed__2));
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___boxed(lean_object* v___dummy_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lean_instMonadAlwaysExceptEIO___redArg();
return v_res_1169_;
}
}
static lean_object* _init_l_Lean_instMonadAlwaysExceptEIO___closed__0(void){
_start:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_Lean_instMonadAlwaysExceptEIO___redArg();
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO(lean_object* v_00_u03b5_1171_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = lean_obj_once(&l_Lean_instMonadAlwaysExceptEIO___closed__0, &l_Lean_instMonadAlwaysExceptEIO___closed__0_once, _init_l_Lean_instMonadAlwaysExceptEIO___closed__0);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT___redArg(lean_object* v_inst_1173_, lean_object* v_always_1174_){
_start:
{
lean_object* v___f_1175_; lean_object* v___f_1176_; lean_object* v___x_1177_; 
lean_inc_ref(v_always_1174_);
v___f_1175_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__1), 5, 2);
lean_closure_set(v___f_1175_, 0, v_always_1174_);
lean_closure_set(v___f_1175_, 1, v_inst_1173_);
v___f_1176_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1176_, 0, v_always_1174_);
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___f_1175_);
lean_ctor_set(v___x_1177_, 1, v___f_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT(lean_object* v_m_1178_, lean_object* v_inst_1179_, lean_object* v_00_u03b5_1180_, lean_object* v_00_u03c3_1181_, lean_object* v_always_1182_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = l_Lean_instMonadAlwaysExceptStateT___redArg(v_inst_1179_, v_always_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object* v_always_1184_){
_start:
{
lean_object* v___f_1185_; lean_object* v___f_1186_; lean_object* v___x_1187_; 
lean_inc_ref(v_always_1184_);
v___f_1185_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1185_, 0, v_always_1184_);
v___f_1186_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_1186_, 0, v_always_1184_);
v___x_1187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1187_, 0, v___f_1185_);
lean_ctor_set(v___x_1187_, 1, v___f_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27(lean_object* v_m_1188_, lean_object* v_00_u03b5_1189_, lean_object* v_00_u03c9_1190_, lean_object* v_00_u03c3_1191_, lean_object* v_always_1192_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v_always_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object* v_always_1194_){
_start:
{
lean_object* v___f_1195_; lean_object* v___f_1196_; lean_object* v___x_1197_; 
lean_inc_ref(v_always_1194_);
v___f_1195_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1195_, 0, v_always_1194_);
v___f_1196_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_1196_, 0, v_always_1194_);
v___x_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___f_1195_);
lean_ctor_set(v___x_1197_, 1, v___f_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT(lean_object* v_m_1198_, lean_object* v_00_u03b5_1199_, lean_object* v_00_u03c1_1200_, lean_object* v_always_1201_){
_start:
{
lean_object* v___x_1202_; 
v___x_1202_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v_always_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT___redArg(lean_object* v_always_1203_){
_start:
{
lean_object* v___x_1204_; 
v___x_1204_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg(v_always_1203_);
return v___x_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT(lean_object* v_00_u03b1_1205_, lean_object* v_m_1206_, lean_object* v_00_u03b5_1207_, lean_object* v_00_u03c9_1208_, lean_object* v_00_u03b2_1209_, lean_object* v_always_1210_, lean_object* v_inst_1211_, lean_object* v_inst_1212_, lean_object* v_inst_1213_){
_start:
{
lean_object* v___x_1214_; 
v___x_1214_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg(v_always_1210_);
return v___x_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT___boxed(lean_object* v_00_u03b1_1215_, lean_object* v_m_1216_, lean_object* v_00_u03b5_1217_, lean_object* v_00_u03c9_1218_, lean_object* v_00_u03b2_1219_, lean_object* v_always_1220_, lean_object* v_inst_1221_, lean_object* v_inst_1222_, lean_object* v_inst_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lean_instMonadAlwaysExceptMonadCacheT(v_00_u03b1_1215_, v_m_1216_, v_00_u03b5_1217_, v_00_u03c9_1218_, v_00_u03b2_1219_, v_always_1220_, v_inst_1221_, v_inst_1222_, v_inst_1223_);
lean_dec_ref(v_inst_1223_);
lean_dec_ref(v_inst_1222_);
return v_res_1224_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultBool___redArg___lam__0(lean_object* v_x_1231_){
_start:
{
if (lean_obj_tag(v_x_1231_) == 0)
{
uint8_t v___x_1232_; 
v___x_1232_ = 2;
return v___x_1232_;
}
else
{
lean_object* v_a_1233_; uint8_t v___x_1234_; 
v_a_1233_ = lean_ctor_get(v_x_1231_, 0);
v___x_1234_ = lean_unbox(v_a_1233_);
if (v___x_1234_ == 0)
{
uint8_t v___x_1235_; 
v___x_1235_ = 1;
return v___x_1235_;
}
else
{
uint8_t v___x_1236_; 
v___x_1236_ = 0;
return v___x_1236_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed(lean_object* v_x_1237_){
_start:
{
uint8_t v_res_1238_; lean_object* v_r_1239_; 
v_res_1238_ = l_Lean_instExceptToTraceResultBool___redArg___lam__0(v_x_1237_);
lean_dec_ref(v_x_1237_);
v_r_1239_ = lean_box(v_res_1238_);
return v_r_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg(){
_start:
{
lean_object* v___f_1242_; 
v___f_1242_ = ((lean_object*)(l_Lean_instExceptToTraceResultBool___redArg___closed__0));
return v___f_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___boxed(lean_object* v___dummy_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Lean_instExceptToTraceResultBool___redArg();
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool(lean_object* v_00_u03b5_1245_){
_start:
{
lean_object* v___f_1246_; 
v___f_1246_ = ((lean_object*)(l_Lean_instExceptToTraceResultBool___redArg___closed__0));
return v___f_1246_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultOption___redArg___lam__0(lean_object* v_x_1247_){
_start:
{
if (lean_obj_tag(v_x_1247_) == 0)
{
uint8_t v___x_1248_; 
v___x_1248_ = 2;
return v___x_1248_;
}
else
{
lean_object* v_a_1249_; 
v_a_1249_ = lean_ctor_get(v_x_1247_, 0);
if (lean_obj_tag(v_a_1249_) == 0)
{
uint8_t v___x_1250_; 
v___x_1250_ = 1;
return v___x_1250_;
}
else
{
uint8_t v___x_1251_; 
v___x_1251_ = 0;
return v___x_1251_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___lam__0___boxed(lean_object* v_x_1252_){
_start:
{
uint8_t v_res_1253_; lean_object* v_r_1254_; 
v_res_1253_ = l_Lean_instExceptToTraceResultOption___redArg___lam__0(v_x_1252_);
lean_dec_ref(v_x_1252_);
v_r_1254_ = lean_box(v_res_1253_);
return v_r_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg(){
_start:
{
lean_object* v___f_1257_; 
v___f_1257_ = ((lean_object*)(l_Lean_instExceptToTraceResultOption___redArg___closed__0));
return v___f_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___boxed(lean_object* v___dummy_1258_){
_start:
{
lean_object* v_res_1259_; 
v_res_1259_ = l_Lean_instExceptToTraceResultOption___redArg();
return v_res_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption(lean_object* v_00_u03b1_1260_, lean_object* v_00_u03b5_1261_){
_start:
{
lean_object* v___f_1262_; 
v___f_1262_ = ((lean_object*)(l_Lean_instExceptToTraceResultOption___redArg___closed__0));
return v___f_1262_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultExpr___redArg___lam__0(lean_object* v_x_1263_){
_start:
{
if (lean_obj_tag(v_x_1263_) == 0)
{
uint8_t v___x_1264_; 
v___x_1264_ = 2;
return v___x_1264_;
}
else
{
lean_object* v_a_1265_; uint8_t v___x_1266_; 
v_a_1265_ = lean_ctor_get(v_x_1263_, 0);
v___x_1266_ = l_Lean_Expr_hasSyntheticSorry(v_a_1265_);
if (v___x_1266_ == 0)
{
uint8_t v___x_1267_; 
v___x_1267_ = 0;
return v___x_1267_;
}
else
{
uint8_t v___x_1268_; 
v___x_1268_ = 1;
return v___x_1268_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___lam__0___boxed(lean_object* v_x_1269_){
_start:
{
uint8_t v_res_1270_; lean_object* v_r_1271_; 
v_res_1270_ = l_Lean_instExceptToTraceResultExpr___redArg___lam__0(v_x_1269_);
lean_dec_ref(v_x_1269_);
v_r_1271_ = lean_box(v_res_1270_);
return v_r_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg(){
_start:
{
lean_object* v___f_1274_; 
v___f_1274_ = ((lean_object*)(l_Lean_instExceptToTraceResultExpr___redArg___closed__0));
return v___f_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___boxed(lean_object* v___dummy_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_Lean_instExceptToTraceResultExpr___redArg();
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr(lean_object* v_00_u03b5_1277_){
_start:
{
lean_object* v___f_1278_; 
v___f_1278_ = ((lean_object*)(l_Lean_instExceptToTraceResultExpr___redArg___closed__0));
return v___f_1278_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResult___redArg___lam__0(lean_object* v_x_1279_){
_start:
{
if (lean_obj_tag(v_x_1279_) == 0)
{
uint8_t v___x_1280_; 
v___x_1280_ = 2;
return v___x_1280_;
}
else
{
uint8_t v___x_1281_; 
v___x_1281_ = 0;
return v___x_1281_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___lam__0___boxed(lean_object* v_x_1282_){
_start:
{
uint8_t v_res_1283_; lean_object* v_r_1284_; 
v_res_1283_ = l_Lean_instExceptToTraceResult___redArg___lam__0(v_x_1282_);
lean_dec_ref(v_x_1282_);
v_r_1284_ = lean_box(v_res_1283_);
return v_r_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg(){
_start:
{
lean_object* v___f_1287_; 
v___f_1287_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
return v___f_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___boxed(lean_object* v___dummy_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lean_instExceptToTraceResult___redArg();
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult(lean_object* v_00_u03b1_1290_, lean_object* v_00_u03b5_1291_){
_start:
{
lean_object* v___f_1292_; 
v___f_1292_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
return v___f_1292_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___redArg(lean_object* v_inst_1293_, lean_object* v_e_1294_){
_start:
{
lean_object* v___x_1295_; uint8_t v___x_1296_; 
v___x_1295_ = lean_apply_1(v_inst_1293_, v_e_1294_);
v___x_1296_ = lean_unbox(v___x_1295_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___redArg___boxed(lean_object* v_inst_1297_, lean_object* v_e_1298_){
_start:
{
uint8_t v_res_1299_; lean_object* v_r_1300_; 
v_res_1299_ = l_Lean_Except_toTraceResult___redArg(v_inst_1297_, v_e_1298_);
v_r_1300_ = lean_box(v_res_1299_);
return v_r_1300_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult(lean_object* v_00_u03b1_1301_, lean_object* v_00_u03b5_1302_, lean_object* v_inst_1303_, lean_object* v_e_1304_){
_start:
{
lean_object* v___x_1305_; uint8_t v___x_1306_; 
v___x_1305_ = lean_apply_1(v_inst_1303_, v_e_1304_);
v___x_1306_ = lean_unbox(v___x_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___boxed(lean_object* v_00_u03b1_1307_, lean_object* v_00_u03b5_1308_, lean_object* v_inst_1309_, lean_object* v_e_1310_){
_start:
{
uint8_t v_res_1311_; lean_object* v_r_1312_; 
v_res_1311_ = l_Lean_Except_toTraceResult(v_00_u03b1_1307_, v_00_u03b5_1308_, v_inst_1309_, v_e_1310_);
v_r_1312_ = lean_box(v_res_1311_);
return v_r_1312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0(lean_object* v_oldTraces_1313_, lean_object* v_s_1314_){
_start:
{
uint64_t v_tid_1315_; lean_object* v_traces_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1324_; 
v_tid_1315_ = lean_ctor_get_uint64(v_s_1314_, sizeof(void*)*1);
v_traces_1316_ = lean_ctor_get(v_s_1314_, 0);
v_isSharedCheck_1324_ = !lean_is_exclusive(v_s_1314_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1318_ = v_s_1314_;
v_isShared_1319_ = v_isSharedCheck_1324_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_traces_1316_);
lean_dec(v_s_1314_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1324_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1320_; lean_object* v___x_1322_; 
v___x_1320_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1313_, v_traces_1316_);
lean_dec_ref(v_traces_1316_);
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 0, v___x_1320_);
v___x_1322_ = v___x_1318_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v___x_1320_);
lean_ctor_set_uint64(v_reuseFailAlloc_1323_, sizeof(void*)*1, v_tid_1315_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__0));
v___x_1327_ = l_Lean_stringToMessageData(v___x_1326_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1(lean_object* v_toPure_1328_, lean_object* v_x_1329_){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1);
v___x_1331_ = lean_apply_2(v_toPure_1328_, lean_box(0), v___x_1330_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___boxed(lean_object* v_toPure_1332_, lean_object* v_x_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1(v_toPure_1332_, v_x_1333_);
lean_dec(v_x_1333_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2(lean_object* v_inst_1335_, lean_object* v___x_1336_, lean_object* v_fst_1337_, lean_object* v_____r_1338_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_MonadExcept_ofExcept___redArg(v_inst_1335_, v___x_1336_, v_fst_1337_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4(lean_object* v_inst_1340_, lean_object* v_inst_1341_, lean_object* v_inst_1342_, lean_object* v_inst_1343_, lean_object* v_oldTraces_1344_, lean_object* v_ref_1345_, lean_object* v_toBind_1346_, lean_object* v___f_1347_, lean_object* v_inst_1348_, lean_object* v_fst_1349_, lean_object* v_cls_1350_, uint8_t v_collapsed_1351_, lean_object* v_tag_1352_, lean_object* v___x_1353_, double v_fst_1354_, double v_snd_1355_, lean_object* v_m_1356_){
_start:
{
lean_object* v_data_1358_; lean_object* v_result_1361_; lean_object* v___x_1362_; double v___x_1363_; lean_object* v_data_1364_; uint8_t v___x_1365_; 
v_result_1361_ = lean_apply_1(v_inst_1348_, v_fst_1349_);
v___x_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1362_, 0, v_result_1361_);
v___x_1363_ = lean_float_once(&l_Lean_addTrace___redArg___lam__0___closed__0, &l_Lean_addTrace___redArg___lam__0___closed__0_once, _init_l_Lean_addTrace___redArg___lam__0___closed__0);
lean_inc_ref(v_tag_1352_);
lean_inc_ref(v___x_1362_);
lean_inc(v_cls_1350_);
v_data_1364_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1364_, 0, v_cls_1350_);
lean_ctor_set(v_data_1364_, 1, v___x_1362_);
lean_ctor_set(v_data_1364_, 2, v_tag_1352_);
lean_ctor_set_float(v_data_1364_, sizeof(void*)*3, v___x_1363_);
lean_ctor_set_float(v_data_1364_, sizeof(void*)*3 + 8, v___x_1363_);
lean_ctor_set_uint8(v_data_1364_, sizeof(void*)*3 + 16, v_collapsed_1351_);
v___x_1365_ = lean_unbox(v___x_1353_);
if (v___x_1365_ == 0)
{
lean_dec_ref_known(v___x_1362_, 1);
lean_dec_ref(v_tag_1352_);
lean_dec(v_cls_1350_);
v_data_1358_ = v_data_1364_;
goto v___jp_1357_;
}
else
{
lean_object* v_data_1366_; 
lean_dec_ref_known(v_data_1364_, 3);
v_data_1366_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1366_, 0, v_cls_1350_);
lean_ctor_set(v_data_1366_, 1, v___x_1362_);
lean_ctor_set(v_data_1366_, 2, v_tag_1352_);
lean_ctor_set_float(v_data_1366_, sizeof(void*)*3, v_fst_1354_);
lean_ctor_set_float(v_data_1366_, sizeof(void*)*3 + 8, v_snd_1355_);
lean_ctor_set_uint8(v_data_1366_, sizeof(void*)*3 + 16, v_collapsed_1351_);
v_data_1358_ = v_data_1366_;
goto v___jp_1357_;
}
v___jp_1357_:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(v_inst_1340_, v_inst_1341_, v_inst_1342_, v_inst_1343_, v_oldTraces_1344_, v_data_1358_, v_ref_1345_, v_m_1356_);
v___x_1360_ = lean_apply_4(v_toBind_1346_, lean_box(0), lean_box(0), v___x_1359_, v___f_1347_);
return v___x_1360_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_inst_1367_ = _args[0];
lean_object* v_inst_1368_ = _args[1];
lean_object* v_inst_1369_ = _args[2];
lean_object* v_inst_1370_ = _args[3];
lean_object* v_oldTraces_1371_ = _args[4];
lean_object* v_ref_1372_ = _args[5];
lean_object* v_toBind_1373_ = _args[6];
lean_object* v___f_1374_ = _args[7];
lean_object* v_inst_1375_ = _args[8];
lean_object* v_fst_1376_ = _args[9];
lean_object* v_cls_1377_ = _args[10];
lean_object* v_collapsed_1378_ = _args[11];
lean_object* v_tag_1379_ = _args[12];
lean_object* v___x_1380_ = _args[13];
lean_object* v_fst_1381_ = _args[14];
lean_object* v_snd_1382_ = _args[15];
lean_object* v_m_1383_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1384_; double v_fst_453__boxed_1385_; double v_snd_454__boxed_1386_; lean_object* v_res_1387_; 
v_collapsed_boxed_1384_ = lean_unbox(v_collapsed_1378_);
v_fst_453__boxed_1385_ = lean_unbox_float(v_fst_1381_);
lean_dec_ref(v_fst_1381_);
v_snd_454__boxed_1386_ = lean_unbox_float(v_snd_1382_);
lean_dec_ref(v_snd_1382_);
v_res_1387_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4(v_inst_1367_, v_inst_1368_, v_inst_1369_, v_inst_1370_, v_oldTraces_1371_, v_ref_1372_, v_toBind_1373_, v___f_1374_, v_inst_1375_, v_fst_1376_, v_cls_1377_, v_collapsed_boxed_1384_, v_tag_1379_, v___x_1380_, v_fst_453__boxed_1385_, v_snd_454__boxed_1386_, v_m_1383_);
lean_dec(v___x_1380_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3(lean_object* v_always_1388_, lean_object* v_inst_1389_, lean_object* v_inst_1390_, lean_object* v_inst_1391_, lean_object* v_inst_1392_, lean_object* v_oldTraces_1393_, lean_object* v_toBind_1394_, lean_object* v___f_1395_, lean_object* v_inst_1396_, lean_object* v_fst_1397_, lean_object* v_cls_1398_, uint8_t v_collapsed_1399_, lean_object* v_tag_1400_, lean_object* v___x_1401_, double v_fst_1402_, double v_snd_1403_, lean_object* v_msg_1404_, lean_object* v___f_1405_, lean_object* v_ref_1406_){
_start:
{
lean_object* v_tryCatch_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___f_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; 
v_tryCatch_1407_ = lean_ctor_get(v_always_1388_, 1);
lean_inc(v_tryCatch_1407_);
lean_dec_ref(v_always_1388_);
v___x_1408_ = lean_box(v_collapsed_1399_);
v___x_1409_ = lean_box_float(v_fst_1402_);
v___x_1410_ = lean_box_float(v_snd_1403_);
lean_inc_ref(v_fst_1397_);
lean_inc(v_toBind_1394_);
v___f_1411_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4___boxed), 17, 16);
lean_closure_set(v___f_1411_, 0, v_inst_1389_);
lean_closure_set(v___f_1411_, 1, v_inst_1390_);
lean_closure_set(v___f_1411_, 2, v_inst_1391_);
lean_closure_set(v___f_1411_, 3, v_inst_1392_);
lean_closure_set(v___f_1411_, 4, v_oldTraces_1393_);
lean_closure_set(v___f_1411_, 5, v_ref_1406_);
lean_closure_set(v___f_1411_, 6, v_toBind_1394_);
lean_closure_set(v___f_1411_, 7, v___f_1395_);
lean_closure_set(v___f_1411_, 8, v_inst_1396_);
lean_closure_set(v___f_1411_, 9, v_fst_1397_);
lean_closure_set(v___f_1411_, 10, v_cls_1398_);
lean_closure_set(v___f_1411_, 11, v___x_1408_);
lean_closure_set(v___f_1411_, 12, v_tag_1400_);
lean_closure_set(v___f_1411_, 13, v___x_1401_);
lean_closure_set(v___f_1411_, 14, v___x_1409_);
lean_closure_set(v___f_1411_, 15, v___x_1410_);
v___x_1412_ = lean_apply_1(v_msg_1404_, v_fst_1397_);
v___x_1413_ = lean_apply_3(v_tryCatch_1407_, lean_box(0), v___x_1412_, v___f_1405_);
v___x_1414_ = lean_apply_4(v_toBind_1394_, lean_box(0), lean_box(0), v___x_1413_, v___f_1411_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_always_1415_ = _args[0];
lean_object* v_inst_1416_ = _args[1];
lean_object* v_inst_1417_ = _args[2];
lean_object* v_inst_1418_ = _args[3];
lean_object* v_inst_1419_ = _args[4];
lean_object* v_oldTraces_1420_ = _args[5];
lean_object* v_toBind_1421_ = _args[6];
lean_object* v___f_1422_ = _args[7];
lean_object* v_inst_1423_ = _args[8];
lean_object* v_fst_1424_ = _args[9];
lean_object* v_cls_1425_ = _args[10];
lean_object* v_collapsed_1426_ = _args[11];
lean_object* v_tag_1427_ = _args[12];
lean_object* v___x_1428_ = _args[13];
lean_object* v_fst_1429_ = _args[14];
lean_object* v_snd_1430_ = _args[15];
lean_object* v_msg_1431_ = _args[16];
lean_object* v___f_1432_ = _args[17];
lean_object* v_ref_1433_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_1434_; double v_fst_496__boxed_1435_; double v_snd_497__boxed_1436_; lean_object* v_res_1437_; 
v_collapsed_boxed_1434_ = lean_unbox(v_collapsed_1426_);
v_fst_496__boxed_1435_ = lean_unbox_float(v_fst_1429_);
lean_dec_ref(v_fst_1429_);
v_snd_497__boxed_1436_ = lean_unbox_float(v_snd_1430_);
lean_dec_ref(v_snd_1430_);
v_res_1437_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3(v_always_1415_, v_inst_1416_, v_inst_1417_, v_inst_1418_, v_inst_1419_, v_oldTraces_1420_, v_toBind_1421_, v___f_1422_, v_inst_1423_, v_fst_1424_, v_cls_1425_, v_collapsed_boxed_1434_, v_tag_1427_, v___x_1428_, v_fst_496__boxed_1435_, v_snd_497__boxed_1436_, v_msg_1431_, v___f_1432_, v_ref_1433_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(lean_object* v_inst_1438_, lean_object* v_inst_1439_, lean_object* v_inst_1440_, lean_object* v_inst_1441_, lean_object* v_always_1442_, lean_object* v_inst_1443_, lean_object* v_cls_1444_, uint8_t v_collapsed_1445_, lean_object* v_tag_1446_, lean_object* v_opts_1447_, uint8_t v_clsEnabled_1448_, lean_object* v_oldTraces_1449_, lean_object* v_msg_1450_, lean_object* v_resStartStop_1451_){
_start:
{
lean_object* v___x_1452_; lean_object* v_toApplicative_1453_; lean_object* v_toBind_1454_; lean_object* v___x_1455_; lean_object* v_snd_1456_; lean_object* v_toPure_1457_; lean_object* v_fst_1458_; lean_object* v_fst_1459_; lean_object* v_snd_1460_; lean_object* v___f_1461_; lean_object* v___f_1462_; lean_object* v___f_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___f_1467_; uint8_t v___y_1472_; double v___y_1477_; uint8_t v___x_1482_; 
v___x_1452_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1453_ = lean_ctor_get(v_inst_1438_, 0);
v_toBind_1454_ = lean_ctor_get(v_inst_1438_, 1);
lean_inc_n(v_toBind_1454_, 2);
lean_inc_ref(v_always_1442_);
v___x_1455_ = l_instMonadExceptOfMonadExceptOf___redArg(v_always_1442_);
v_snd_1456_ = lean_ctor_get(v_resStartStop_1451_, 1);
lean_inc(v_snd_1456_);
v_toPure_1457_ = lean_ctor_get(v_toApplicative_1453_, 1);
v_fst_1458_ = lean_ctor_get(v_resStartStop_1451_, 0);
lean_inc_n(v_fst_1458_, 2);
lean_dec_ref(v_resStartStop_1451_);
v_fst_1459_ = lean_ctor_get(v_snd_1456_, 0);
lean_inc_n(v_fst_1459_, 2);
v_snd_1460_ = lean_ctor_get(v_snd_1456_, 1);
lean_inc_n(v_snd_1460_, 2);
lean_dec(v_snd_1456_);
lean_inc_ref(v_oldTraces_1449_);
v___f_1461_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1461_, 0, v_oldTraces_1449_);
lean_inc(v_toPure_1457_);
v___f_1462_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1462_, 0, v_toPure_1457_);
lean_inc_ref(v_inst_1438_);
v___f_1463_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1463_, 0, v_inst_1438_);
lean_closure_set(v___f_1463_, 1, v___x_1455_);
lean_closure_set(v___f_1463_, 2, v_fst_1458_);
v___x_1464_ = l_Lean_trace_profiler;
v___x_1465_ = l_Lean_Option_get___redArg(v___x_1452_, v_opts_1447_, v___x_1464_);
v___x_1466_ = lean_box(v_collapsed_1445_);
lean_inc(v___x_1465_);
lean_inc_ref(v___f_1463_);
lean_inc_ref(v_inst_1440_);
lean_inc_ref(v_inst_1439_);
v___f_1467_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3___boxed), 19, 18);
lean_closure_set(v___f_1467_, 0, v_always_1442_);
lean_closure_set(v___f_1467_, 1, v_inst_1438_);
lean_closure_set(v___f_1467_, 2, v_inst_1439_);
lean_closure_set(v___f_1467_, 3, v_inst_1440_);
lean_closure_set(v___f_1467_, 4, v_inst_1441_);
lean_closure_set(v___f_1467_, 5, v_oldTraces_1449_);
lean_closure_set(v___f_1467_, 6, v_toBind_1454_);
lean_closure_set(v___f_1467_, 7, v___f_1463_);
lean_closure_set(v___f_1467_, 8, v_inst_1443_);
lean_closure_set(v___f_1467_, 9, v_fst_1458_);
lean_closure_set(v___f_1467_, 10, v_cls_1444_);
lean_closure_set(v___f_1467_, 11, v___x_1466_);
lean_closure_set(v___f_1467_, 12, v_tag_1446_);
lean_closure_set(v___f_1467_, 13, v___x_1465_);
lean_closure_set(v___f_1467_, 14, v_fst_1459_);
lean_closure_set(v___f_1467_, 15, v_snd_1460_);
lean_closure_set(v___f_1467_, 16, v_msg_1450_);
lean_closure_set(v___f_1467_, 17, v___f_1462_);
v___x_1482_ = lean_unbox(v___x_1465_);
if (v___x_1482_ == 0)
{
uint8_t v___x_1483_; 
lean_dec(v_snd_1460_);
lean_dec(v_fst_1459_);
v___x_1483_ = lean_unbox(v___x_1465_);
lean_dec(v___x_1465_);
v___y_1472_ = v___x_1483_;
goto v___jp_1471_;
}
else
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; uint8_t v___x_1487_; 
lean_dec(v___x_1465_);
v___x_1484_ = l_Lean_KVMap_instValueNat;
v___x_1485_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1486_ = l_Lean_Option_get___redArg(v___x_1452_, v_opts_1447_, v___x_1485_);
v___x_1487_ = lean_unbox(v___x_1486_);
lean_dec(v___x_1486_);
if (v___x_1487_ == 0)
{
lean_object* v___x_1488_; lean_object* v___x_1489_; double v___x_1490_; double v___x_1491_; double v___x_1492_; 
v___x_1488_ = l_Lean_trace_profiler_threshold;
v___x_1489_ = l_Lean_Option_get___redArg(v___x_1484_, v_opts_1447_, v___x_1488_);
v___x_1490_ = lean_float_of_nat(v___x_1489_);
v___x_1491_ = lean_float_once(&l_Lean_trace_profiler_threshold_unitAdjusted___closed__0, &l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once, _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0);
v___x_1492_ = lean_float_div(v___x_1490_, v___x_1491_);
v___y_1477_ = v___x_1492_;
goto v___jp_1476_;
}
else
{
lean_object* v___x_1493_; lean_object* v___x_1494_; double v___x_1495_; 
v___x_1493_ = l_Lean_trace_profiler_threshold;
v___x_1494_ = l_Lean_Option_get___redArg(v___x_1484_, v_opts_1447_, v___x_1493_);
v___x_1495_ = lean_float_of_nat(v___x_1494_);
v___y_1477_ = v___x_1495_;
goto v___jp_1476_;
}
}
v___jp_1468_:
{
lean_object* v_getRef_1469_; lean_object* v___x_1470_; 
v_getRef_1469_ = lean_ctor_get(v_inst_1440_, 0);
lean_inc(v_getRef_1469_);
lean_dec_ref(v_inst_1440_);
v___x_1470_ = lean_apply_4(v_toBind_1454_, lean_box(0), lean_box(0), v_getRef_1469_, v___f_1467_);
return v___x_1470_;
}
v___jp_1471_:
{
if (v_clsEnabled_1448_ == 0)
{
if (v___y_1472_ == 0)
{
lean_object* v_modifyTraceState_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
lean_dec_ref(v___f_1467_);
lean_dec_ref(v_inst_1440_);
v_modifyTraceState_1473_ = lean_ctor_get(v_inst_1439_, 0);
lean_inc(v_modifyTraceState_1473_);
lean_dec_ref(v_inst_1439_);
v___x_1474_ = lean_apply_1(v_modifyTraceState_1473_, v___f_1461_);
v___x_1475_ = lean_apply_4(v_toBind_1454_, lean_box(0), lean_box(0), v___x_1474_, v___f_1463_);
return v___x_1475_;
}
else
{
lean_dec_ref(v___f_1463_);
lean_dec_ref(v___f_1461_);
lean_dec_ref(v_inst_1439_);
goto v___jp_1468_;
}
}
else
{
lean_dec_ref(v___f_1463_);
lean_dec_ref(v___f_1461_);
lean_dec_ref(v_inst_1439_);
goto v___jp_1468_;
}
}
v___jp_1476_:
{
double v___x_1478_; double v___x_1479_; double v___x_1480_; uint8_t v___x_1481_; 
v___x_1478_ = lean_unbox_float(v_snd_1460_);
lean_dec(v_snd_1460_);
v___x_1479_ = lean_unbox_float(v_fst_1459_);
lean_dec(v_fst_1459_);
v___x_1480_ = lean_float_sub(v___x_1478_, v___x_1479_);
v___x_1481_ = lean_float_decLt(v___y_1477_, v___x_1480_);
v___y_1472_ = v___x_1481_;
goto v___jp_1471_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___boxed(lean_object* v_inst_1496_, lean_object* v_inst_1497_, lean_object* v_inst_1498_, lean_object* v_inst_1499_, lean_object* v_always_1500_, lean_object* v_inst_1501_, lean_object* v_cls_1502_, lean_object* v_collapsed_1503_, lean_object* v_tag_1504_, lean_object* v_opts_1505_, lean_object* v_clsEnabled_1506_, lean_object* v_oldTraces_1507_, lean_object* v_msg_1508_, lean_object* v_resStartStop_1509_){
_start:
{
uint8_t v_collapsed_boxed_1510_; uint8_t v_clsEnabled_boxed_1511_; lean_object* v_res_1512_; 
v_collapsed_boxed_1510_ = lean_unbox(v_collapsed_1503_);
v_clsEnabled_boxed_1511_ = lean_unbox(v_clsEnabled_1506_);
v_res_1512_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1496_, v_inst_1497_, v_inst_1498_, v_inst_1499_, v_always_1500_, v_inst_1501_, v_cls_1502_, v_collapsed_boxed_1510_, v_tag_1504_, v_opts_1505_, v_clsEnabled_boxed_1511_, v_oldTraces_1507_, v_msg_1508_, v_resStartStop_1509_);
lean_dec_ref(v_opts_1505_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object* v_00_u03b1_1513_, lean_object* v_m_1514_, lean_object* v_inst_1515_, lean_object* v_inst_1516_, lean_object* v_inst_1517_, lean_object* v_inst_1518_, lean_object* v_00_u03b5_1519_, lean_object* v_always_1520_, lean_object* v_inst_1521_, lean_object* v_cls_1522_, uint8_t v_collapsed_1523_, lean_object* v_tag_1524_, lean_object* v_opts_1525_, uint8_t v_clsEnabled_1526_, lean_object* v_oldTraces_1527_, lean_object* v_msg_1528_, lean_object* v_resStartStop_1529_){
_start:
{
lean_object* v___x_1530_; 
v___x_1530_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1515_, v_inst_1516_, v_inst_1517_, v_inst_1518_, v_always_1520_, v_inst_1521_, v_cls_1522_, v_collapsed_1523_, v_tag_1524_, v_opts_1525_, v_clsEnabled_1526_, v_oldTraces_1527_, v_msg_1528_, v_resStartStop_1529_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___boxed(lean_object** _args){
lean_object* v_00_u03b1_1531_ = _args[0];
lean_object* v_m_1532_ = _args[1];
lean_object* v_inst_1533_ = _args[2];
lean_object* v_inst_1534_ = _args[3];
lean_object* v_inst_1535_ = _args[4];
lean_object* v_inst_1536_ = _args[5];
lean_object* v_00_u03b5_1537_ = _args[6];
lean_object* v_always_1538_ = _args[7];
lean_object* v_inst_1539_ = _args[8];
lean_object* v_cls_1540_ = _args[9];
lean_object* v_collapsed_1541_ = _args[10];
lean_object* v_tag_1542_ = _args[11];
lean_object* v_opts_1543_ = _args[12];
lean_object* v_clsEnabled_1544_ = _args[13];
lean_object* v_oldTraces_1545_ = _args[14];
lean_object* v_msg_1546_ = _args[15];
lean_object* v_resStartStop_1547_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1548_; uint8_t v_clsEnabled_boxed_1549_; lean_object* v_res_1550_; 
v_collapsed_boxed_1548_ = lean_unbox(v_collapsed_1541_);
v_clsEnabled_boxed_1549_ = lean_unbox(v_clsEnabled_1544_);
v_res_1550_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(v_00_u03b1_1531_, v_m_1532_, v_inst_1533_, v_inst_1534_, v_inst_1535_, v_inst_1536_, v_00_u03b5_1537_, v_always_1538_, v_inst_1539_, v_cls_1540_, v_collapsed_boxed_1548_, v_tag_1542_, v_opts_1543_, v_clsEnabled_boxed_1549_, v_oldTraces_1545_, v_msg_1546_, v_resStartStop_1547_);
lean_dec_ref(v_opts_1543_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0(lean_object* v_inst_1551_, lean_object* v_inst_1552_, lean_object* v_inst_1553_, lean_object* v_inst_1554_, lean_object* v_always_1555_, lean_object* v_inst_1556_, lean_object* v_cls_1557_, uint8_t v_collapsed_1558_, lean_object* v_tag_1559_, lean_object* v_opts_1560_, uint8_t v_clsEnabled_1561_, lean_object* v_oldTraces_1562_, lean_object* v_msg_1563_, lean_object* v_resStartStop_1564_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1551_, v_inst_1552_, v_inst_1553_, v_inst_1554_, v_always_1555_, v_inst_1556_, v_cls_1557_, v_collapsed_1558_, v_tag_1559_, v_opts_1560_, v_clsEnabled_1561_, v_oldTraces_1562_, v_msg_1563_, v_resStartStop_1564_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0___boxed(lean_object* v_inst_1566_, lean_object* v_inst_1567_, lean_object* v_inst_1568_, lean_object* v_inst_1569_, lean_object* v_always_1570_, lean_object* v_inst_1571_, lean_object* v_cls_1572_, lean_object* v_collapsed_1573_, lean_object* v_tag_1574_, lean_object* v_opts_1575_, lean_object* v_clsEnabled_1576_, lean_object* v_oldTraces_1577_, lean_object* v_msg_1578_, lean_object* v_resStartStop_1579_){
_start:
{
uint8_t v_collapsed_boxed_1580_; uint8_t v_clsEnabled_boxed_1581_; lean_object* v_res_1582_; 
v_collapsed_boxed_1580_ = lean_unbox(v_collapsed_1573_);
v_clsEnabled_boxed_1581_ = lean_unbox(v_clsEnabled_1576_);
v_res_1582_ = l_Lean_withTraceNode___redArg___lam__0(v_inst_1566_, v_inst_1567_, v_inst_1568_, v_inst_1569_, v_always_1570_, v_inst_1571_, v_cls_1572_, v_collapsed_boxed_1580_, v_tag_1574_, v_opts_1575_, v_clsEnabled_boxed_1581_, v_oldTraces_1577_, v_msg_1578_, v_resStartStop_1579_);
lean_dec_ref(v_opts_1575_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__1(lean_object* v_toPure_1583_, lean_object* v_ex_1584_){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1585_, 0, v_ex_1584_);
v___x_1586_ = lean_apply_2(v_toPure_1583_, lean_box(0), v___x_1585_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__2(lean_object* v_toPure_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1589_, 0, v_a_1588_);
v___x_1590_ = lean_apply_2(v_toPure_1587_, lean_box(0), v___x_1589_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__3(lean_object* v_start_1591_, lean_object* v_a_1592_, lean_object* v_toPure_1593_, lean_object* v_stop_1594_){
_start:
{
double v___x_1595_; double v___x_1596_; double v___x_1597_; double v___x_1598_; double v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1595_ = lean_float_of_nat(v_start_1591_);
v___x_1596_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0, &l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0);
v___x_1597_ = lean_float_div(v___x_1595_, v___x_1596_);
v___x_1598_ = lean_float_of_nat(v_stop_1594_);
v___x_1599_ = lean_float_div(v___x_1598_, v___x_1596_);
v___x_1600_ = lean_box_float(v___x_1597_);
v___x_1601_ = lean_box_float(v___x_1599_);
v___x_1602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1602_, 0, v___x_1600_);
lean_ctor_set(v___x_1602_, 1, v___x_1601_);
v___x_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1603_, 0, v_a_1592_);
lean_ctor_set(v___x_1603_, 1, v___x_1602_);
v___x_1604_ = lean_apply_2(v_toPure_1593_, lean_box(0), v___x_1603_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__4(lean_object* v_start_1605_, lean_object* v_toPure_1606_, lean_object* v_toBind_1607_, lean_object* v___x_1608_, lean_object* v_a_1609_){
_start:
{
lean_object* v___f_1610_; lean_object* v___x_1611_; 
v___f_1610_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__3), 4, 3);
lean_closure_set(v___f_1610_, 0, v_start_1605_);
lean_closure_set(v___f_1610_, 1, v_a_1609_);
lean_closure_set(v___f_1610_, 2, v_toPure_1606_);
v___x_1611_ = lean_apply_4(v_toBind_1607_, lean_box(0), lean_box(0), v___x_1608_, v___f_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__5(lean_object* v_toPure_1612_, lean_object* v_toBind_1613_, lean_object* v___x_1614_, lean_object* v___x_1615_, lean_object* v_start_1616_){
_start:
{
lean_object* v___f_1617_; lean_object* v___x_1618_; 
lean_inc(v_toBind_1613_);
v___f_1617_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1617_, 0, v_start_1616_);
lean_closure_set(v___f_1617_, 1, v_toPure_1612_);
lean_closure_set(v___f_1617_, 2, v_toBind_1613_);
lean_closure_set(v___f_1617_, 3, v___x_1614_);
v___x_1618_ = lean_apply_4(v_toBind_1613_, lean_box(0), lean_box(0), v___x_1615_, v___f_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__6(lean_object* v_start_1619_, lean_object* v_a_1620_, lean_object* v_toPure_1621_, lean_object* v_stop_1622_){
_start:
{
double v___x_1623_; double v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; 
v___x_1623_ = lean_float_of_nat(v_start_1619_);
v___x_1624_ = lean_float_of_nat(v_stop_1622_);
v___x_1625_ = lean_box_float(v___x_1623_);
v___x_1626_ = lean_box_float(v___x_1624_);
v___x_1627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1625_);
lean_ctor_set(v___x_1627_, 1, v___x_1626_);
v___x_1628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1628_, 0, v_a_1620_);
lean_ctor_set(v___x_1628_, 1, v___x_1627_);
v___x_1629_ = lean_apply_2(v_toPure_1621_, lean_box(0), v___x_1628_);
return v___x_1629_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__7(lean_object* v_start_1630_, lean_object* v_toPure_1631_, lean_object* v_toBind_1632_, lean_object* v___x_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v___f_1635_; lean_object* v___x_1636_; 
v___f_1635_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__6), 4, 3);
lean_closure_set(v___f_1635_, 0, v_start_1630_);
lean_closure_set(v___f_1635_, 1, v_a_1634_);
lean_closure_set(v___f_1635_, 2, v_toPure_1631_);
v___x_1636_ = lean_apply_4(v_toBind_1632_, lean_box(0), lean_box(0), v___x_1633_, v___f_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__8(lean_object* v_toPure_1637_, lean_object* v_toBind_1638_, lean_object* v___x_1639_, lean_object* v___x_1640_, lean_object* v_start_1641_){
_start:
{
lean_object* v___f_1642_; lean_object* v___x_1643_; 
lean_inc(v_toBind_1638_);
v___f_1642_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__7), 5, 4);
lean_closure_set(v___f_1642_, 0, v_start_1641_);
lean_closure_set(v___f_1642_, 1, v_toPure_1637_);
lean_closure_set(v___f_1642_, 2, v_toBind_1638_);
lean_closure_set(v___f_1642_, 3, v___x_1639_);
v___x_1643_ = lean_apply_4(v_toBind_1638_, lean_box(0), lean_box(0), v___x_1640_, v___f_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9(lean_object* v_always_1644_, lean_object* v_inst_1645_, lean_object* v_inst_1646_, lean_object* v_inst_1647_, lean_object* v_inst_1648_, lean_object* v_inst_1649_, lean_object* v_cls_1650_, uint8_t v_collapsed_1651_, lean_object* v_tag_1652_, lean_object* v_opts_1653_, uint8_t v_clsEnabled_1654_, lean_object* v_msg_1655_, lean_object* v_toPure_1656_, lean_object* v_toBind_1657_, lean_object* v_k_1658_, lean_object* v___x_1659_, lean_object* v_inst_1660_, lean_object* v_oldTraces_1661_){
_start:
{
lean_object* v_tryCatch_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___f_1665_; lean_object* v___f_1666_; lean_object* v___f_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; uint8_t v___x_1672_; 
v_tryCatch_1662_ = lean_ctor_get(v_always_1644_, 1);
lean_inc(v_tryCatch_1662_);
v___x_1663_ = lean_box(v_collapsed_1651_);
v___x_1664_ = lean_box(v_clsEnabled_1654_);
lean_inc_ref(v_opts_1653_);
v___f_1665_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__0___boxed), 14, 13);
lean_closure_set(v___f_1665_, 0, v_inst_1645_);
lean_closure_set(v___f_1665_, 1, v_inst_1646_);
lean_closure_set(v___f_1665_, 2, v_inst_1647_);
lean_closure_set(v___f_1665_, 3, v_inst_1648_);
lean_closure_set(v___f_1665_, 4, v_always_1644_);
lean_closure_set(v___f_1665_, 5, v_inst_1649_);
lean_closure_set(v___f_1665_, 6, v_cls_1650_);
lean_closure_set(v___f_1665_, 7, v___x_1663_);
lean_closure_set(v___f_1665_, 8, v_tag_1652_);
lean_closure_set(v___f_1665_, 9, v_opts_1653_);
lean_closure_set(v___f_1665_, 10, v___x_1664_);
lean_closure_set(v___f_1665_, 11, v_oldTraces_1661_);
lean_closure_set(v___f_1665_, 12, v_msg_1655_);
lean_inc_n(v_toPure_1656_, 2);
v___f_1666_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1666_, 0, v_toPure_1656_);
v___f_1667_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1667_, 0, v_toPure_1656_);
lean_inc(v_toBind_1657_);
v___x_1668_ = lean_apply_4(v_toBind_1657_, lean_box(0), lean_box(0), v_k_1658_, v___f_1667_);
v___x_1669_ = lean_apply_3(v_tryCatch_1662_, lean_box(0), v___x_1668_, v___f_1666_);
v___x_1670_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1671_ = l_Lean_Option_get___redArg(v___x_1659_, v_opts_1653_, v___x_1670_);
lean_dec_ref(v_opts_1653_);
v___x_1672_ = lean_unbox(v___x_1671_);
lean_dec(v___x_1671_);
if (v___x_1672_ == 0)
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___f_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1673_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1674_ = lean_apply_2(v_inst_1660_, lean_box(0), v___x_1673_);
lean_inc(v___x_1674_);
lean_inc_n(v_toBind_1657_, 2);
v___f_1675_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1675_, 0, v_toPure_1656_);
lean_closure_set(v___f_1675_, 1, v_toBind_1657_);
lean_closure_set(v___f_1675_, 2, v___x_1674_);
lean_closure_set(v___f_1675_, 3, v___x_1669_);
v___x_1676_ = lean_apply_4(v_toBind_1657_, lean_box(0), lean_box(0), v___x_1674_, v___f_1675_);
v___x_1677_ = lean_apply_4(v_toBind_1657_, lean_box(0), lean_box(0), v___x_1676_, v___f_1665_);
return v___x_1677_;
}
else
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___f_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1678_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_1679_ = lean_apply_2(v_inst_1660_, lean_box(0), v___x_1678_);
lean_inc(v___x_1679_);
lean_inc_n(v_toBind_1657_, 2);
v___f_1680_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__8), 5, 4);
lean_closure_set(v___f_1680_, 0, v_toPure_1656_);
lean_closure_set(v___f_1680_, 1, v_toBind_1657_);
lean_closure_set(v___f_1680_, 2, v___x_1679_);
lean_closure_set(v___f_1680_, 3, v___x_1669_);
v___x_1681_ = lean_apply_4(v_toBind_1657_, lean_box(0), lean_box(0), v___x_1679_, v___f_1680_);
v___x_1682_ = lean_apply_4(v_toBind_1657_, lean_box(0), lean_box(0), v___x_1681_, v___f_1665_);
return v___x_1682_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9___boxed(lean_object** _args){
lean_object* v_always_1683_ = _args[0];
lean_object* v_inst_1684_ = _args[1];
lean_object* v_inst_1685_ = _args[2];
lean_object* v_inst_1686_ = _args[3];
lean_object* v_inst_1687_ = _args[4];
lean_object* v_inst_1688_ = _args[5];
lean_object* v_cls_1689_ = _args[6];
lean_object* v_collapsed_1690_ = _args[7];
lean_object* v_tag_1691_ = _args[8];
lean_object* v_opts_1692_ = _args[9];
lean_object* v_clsEnabled_1693_ = _args[10];
lean_object* v_msg_1694_ = _args[11];
lean_object* v_toPure_1695_ = _args[12];
lean_object* v_toBind_1696_ = _args[13];
lean_object* v_k_1697_ = _args[14];
lean_object* v___x_1698_ = _args[15];
lean_object* v_inst_1699_ = _args[16];
lean_object* v_oldTraces_1700_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_1701_; uint8_t v_clsEnabled_boxed_1702_; lean_object* v_res_1703_; 
v_collapsed_boxed_1701_ = lean_unbox(v_collapsed_1690_);
v_clsEnabled_boxed_1702_ = lean_unbox(v_clsEnabled_1693_);
v_res_1703_ = l_Lean_withTraceNode___redArg___lam__9(v_always_1683_, v_inst_1684_, v_inst_1685_, v_inst_1686_, v_inst_1687_, v_inst_1688_, v_cls_1689_, v_collapsed_boxed_1701_, v_tag_1691_, v_opts_1692_, v_clsEnabled_boxed_1702_, v_msg_1694_, v_toPure_1695_, v_toBind_1696_, v_k_1697_, v___x_1698_, v_inst_1699_, v_oldTraces_1700_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10(lean_object* v_always_1704_, lean_object* v_inst_1705_, lean_object* v_inst_1706_, lean_object* v_inst_1707_, lean_object* v_inst_1708_, lean_object* v_inst_1709_, lean_object* v_cls_1710_, uint8_t v_collapsed_1711_, lean_object* v_tag_1712_, lean_object* v_opts_1713_, lean_object* v_msg_1714_, lean_object* v_toPure_1715_, lean_object* v_toBind_1716_, lean_object* v_k_1717_, lean_object* v___x_1718_, lean_object* v_inst_1719_, uint8_t v_clsEnabled_1720_){
_start:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___f_1723_; 
v___x_1721_ = lean_box(v_collapsed_1711_);
v___x_1722_ = lean_box(v_clsEnabled_1720_);
lean_inc_ref(v___x_1718_);
lean_inc(v_k_1717_);
lean_inc(v_toBind_1716_);
lean_inc_ref(v_opts_1713_);
lean_inc_ref(v_inst_1706_);
lean_inc_ref(v_inst_1705_);
v___f_1723_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__9___boxed), 18, 17);
lean_closure_set(v___f_1723_, 0, v_always_1704_);
lean_closure_set(v___f_1723_, 1, v_inst_1705_);
lean_closure_set(v___f_1723_, 2, v_inst_1706_);
lean_closure_set(v___f_1723_, 3, v_inst_1707_);
lean_closure_set(v___f_1723_, 4, v_inst_1708_);
lean_closure_set(v___f_1723_, 5, v_inst_1709_);
lean_closure_set(v___f_1723_, 6, v_cls_1710_);
lean_closure_set(v___f_1723_, 7, v___x_1721_);
lean_closure_set(v___f_1723_, 8, v_tag_1712_);
lean_closure_set(v___f_1723_, 9, v_opts_1713_);
lean_closure_set(v___f_1723_, 10, v___x_1722_);
lean_closure_set(v___f_1723_, 11, v_msg_1714_);
lean_closure_set(v___f_1723_, 12, v_toPure_1715_);
lean_closure_set(v___f_1723_, 13, v_toBind_1716_);
lean_closure_set(v___f_1723_, 14, v_k_1717_);
lean_closure_set(v___f_1723_, 15, v___x_1718_);
lean_closure_set(v___f_1723_, 16, v_inst_1719_);
if (v_clsEnabled_1720_ == 0)
{
lean_object* v___x_1727_; lean_object* v___x_1728_; uint8_t v___x_1729_; 
v___x_1727_ = l_Lean_trace_profiler;
v___x_1728_ = l_Lean_Option_get___redArg(v___x_1718_, v_opts_1713_, v___x_1727_);
lean_dec_ref(v_opts_1713_);
v___x_1729_ = lean_unbox(v___x_1728_);
lean_dec(v___x_1728_);
if (v___x_1729_ == 0)
{
lean_dec_ref(v___f_1723_);
lean_dec(v_toBind_1716_);
lean_dec_ref(v_inst_1706_);
lean_dec_ref(v_inst_1705_);
return v_k_1717_;
}
else
{
lean_dec(v_k_1717_);
goto v___jp_1724_;
}
}
else
{
lean_dec_ref(v___x_1718_);
lean_dec(v_k_1717_);
lean_dec_ref(v_opts_1713_);
goto v___jp_1724_;
}
v___jp_1724_:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1725_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_1705_, v_inst_1706_);
v___x_1726_ = lean_apply_4(v_toBind_1716_, lean_box(0), lean_box(0), v___x_1725_, v___f_1723_);
return v___x_1726_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10___boxed(lean_object** _args){
lean_object* v_always_1730_ = _args[0];
lean_object* v_inst_1731_ = _args[1];
lean_object* v_inst_1732_ = _args[2];
lean_object* v_inst_1733_ = _args[3];
lean_object* v_inst_1734_ = _args[4];
lean_object* v_inst_1735_ = _args[5];
lean_object* v_cls_1736_ = _args[6];
lean_object* v_collapsed_1737_ = _args[7];
lean_object* v_tag_1738_ = _args[8];
lean_object* v_opts_1739_ = _args[9];
lean_object* v_msg_1740_ = _args[10];
lean_object* v_toPure_1741_ = _args[11];
lean_object* v_toBind_1742_ = _args[12];
lean_object* v_k_1743_ = _args[13];
lean_object* v___x_1744_ = _args[14];
lean_object* v_inst_1745_ = _args[15];
lean_object* v_clsEnabled_1746_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1747_; uint8_t v_clsEnabled_boxed_1748_; lean_object* v_res_1749_; 
v_collapsed_boxed_1747_ = lean_unbox(v_collapsed_1737_);
v_clsEnabled_boxed_1748_ = lean_unbox(v_clsEnabled_1746_);
v_res_1749_ = l_Lean_withTraceNode___redArg___lam__10(v_always_1730_, v_inst_1731_, v_inst_1732_, v_inst_1733_, v_inst_1734_, v_inst_1735_, v_cls_1736_, v_collapsed_boxed_1747_, v_tag_1738_, v_opts_1739_, v_msg_1740_, v_toPure_1741_, v_toBind_1742_, v_k_1743_, v___x_1744_, v_inst_1745_, v_clsEnabled_boxed_1748_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__13(lean_object* v_k_1750_, lean_object* v_inst_1751_, lean_object* v_toApplicative_1752_, lean_object* v_always_1753_, lean_object* v_inst_1754_, lean_object* v_inst_1755_, lean_object* v_inst_1756_, lean_object* v_inst_1757_, lean_object* v_cls_1758_, uint8_t v_collapsed_1759_, lean_object* v_tag_1760_, lean_object* v_msg_1761_, lean_object* v_toBind_1762_, lean_object* v___x_1763_, lean_object* v_inst_1764_, lean_object* v_inst_1765_, lean_object* v_opts_1766_){
_start:
{
uint8_t v_hasTrace_1767_; 
v_hasTrace_1767_ = lean_ctor_get_uint8(v_opts_1766_, sizeof(void*)*1);
if (v_hasTrace_1767_ == 0)
{
lean_dec_ref(v_opts_1766_);
lean_dec(v_inst_1765_);
lean_dec(v_inst_1764_);
lean_dec_ref(v___x_1763_);
lean_dec(v_toBind_1762_);
lean_dec(v_msg_1761_);
lean_dec_ref(v_tag_1760_);
lean_dec(v_cls_1758_);
lean_dec_ref(v_inst_1757_);
lean_dec(v_inst_1756_);
lean_dec_ref(v_inst_1755_);
lean_dec_ref(v_inst_1754_);
lean_dec_ref(v_always_1753_);
lean_dec_ref(v_toApplicative_1752_);
lean_dec_ref(v_inst_1751_);
return v_k_1750_;
}
else
{
lean_object* v_getInheritedTraceOptions_1768_; lean_object* v_toPure_1769_; lean_object* v___x_1770_; lean_object* v___f_1771_; lean_object* v___f_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v_getInheritedTraceOptions_1768_ = lean_ctor_get(v_inst_1751_, 2);
lean_inc(v_getInheritedTraceOptions_1768_);
v_toPure_1769_ = lean_ctor_get(v_toApplicative_1752_, 1);
lean_inc_n(v_toPure_1769_, 2);
lean_dec_ref(v_toApplicative_1752_);
v___x_1770_ = lean_box(v_collapsed_1759_);
lean_inc_n(v_toBind_1762_, 3);
lean_inc(v_cls_1758_);
v___f_1771_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__10___boxed), 17, 16);
lean_closure_set(v___f_1771_, 0, v_always_1753_);
lean_closure_set(v___f_1771_, 1, v_inst_1754_);
lean_closure_set(v___f_1771_, 2, v_inst_1751_);
lean_closure_set(v___f_1771_, 3, v_inst_1755_);
lean_closure_set(v___f_1771_, 4, v_inst_1756_);
lean_closure_set(v___f_1771_, 5, v_inst_1757_);
lean_closure_set(v___f_1771_, 6, v_cls_1758_);
lean_closure_set(v___f_1771_, 7, v___x_1770_);
lean_closure_set(v___f_1771_, 8, v_tag_1760_);
lean_closure_set(v___f_1771_, 9, v_opts_1766_);
lean_closure_set(v___f_1771_, 10, v_msg_1761_);
lean_closure_set(v___f_1771_, 11, v_toPure_1769_);
lean_closure_set(v___f_1771_, 12, v_toBind_1762_);
lean_closure_set(v___f_1771_, 13, v_k_1750_);
lean_closure_set(v___f_1771_, 14, v___x_1763_);
lean_closure_set(v___f_1771_, 15, v_inst_1764_);
v___f_1772_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1772_, 0, v_toPure_1769_);
lean_closure_set(v___f_1772_, 1, v_cls_1758_);
lean_closure_set(v___f_1772_, 2, v_toBind_1762_);
lean_closure_set(v___f_1772_, 3, v_inst_1765_);
v___x_1773_ = lean_apply_4(v_toBind_1762_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_1768_, v___f_1772_);
v___x_1774_ = lean_apply_4(v_toBind_1762_, lean_box(0), lean_box(0), v___x_1773_, v___f_1771_);
return v___x_1774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_k_1775_ = _args[0];
lean_object* v_inst_1776_ = _args[1];
lean_object* v_toApplicative_1777_ = _args[2];
lean_object* v_always_1778_ = _args[3];
lean_object* v_inst_1779_ = _args[4];
lean_object* v_inst_1780_ = _args[5];
lean_object* v_inst_1781_ = _args[6];
lean_object* v_inst_1782_ = _args[7];
lean_object* v_cls_1783_ = _args[8];
lean_object* v_collapsed_1784_ = _args[9];
lean_object* v_tag_1785_ = _args[10];
lean_object* v_msg_1786_ = _args[11];
lean_object* v_toBind_1787_ = _args[12];
lean_object* v___x_1788_ = _args[13];
lean_object* v_inst_1789_ = _args[14];
lean_object* v_inst_1790_ = _args[15];
lean_object* v_opts_1791_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1792_; lean_object* v_res_1793_; 
v_collapsed_boxed_1792_ = lean_unbox(v_collapsed_1784_);
v_res_1793_ = l_Lean_withTraceNode___redArg___lam__13(v_k_1775_, v_inst_1776_, v_toApplicative_1777_, v_always_1778_, v_inst_1779_, v_inst_1780_, v_inst_1781_, v_inst_1782_, v_cls_1783_, v_collapsed_boxed_1792_, v_tag_1785_, v_msg_1786_, v_toBind_1787_, v___x_1788_, v_inst_1789_, v_inst_1790_, v_opts_1791_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg(lean_object* v_inst_1794_, lean_object* v_inst_1795_, lean_object* v_inst_1796_, lean_object* v_inst_1797_, lean_object* v_inst_1798_, lean_object* v_always_1799_, lean_object* v_inst_1800_, lean_object* v_inst_1801_, lean_object* v_cls_1802_, lean_object* v_msg_1803_, lean_object* v_k_1804_, uint8_t v_collapsed_1805_, lean_object* v_tag_1806_){
_start:
{
lean_object* v___x_1807_; lean_object* v_toApplicative_1808_; lean_object* v_toBind_1809_; lean_object* v___x_1810_; lean_object* v___f_1811_; lean_object* v___x_1812_; 
v___x_1807_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1808_ = lean_ctor_get(v_inst_1794_, 0);
lean_inc_ref(v_toApplicative_1808_);
v_toBind_1809_ = lean_ctor_get(v_inst_1794_, 1);
lean_inc_n(v_toBind_1809_, 2);
v___x_1810_ = lean_box(v_collapsed_1805_);
lean_inc(v_inst_1798_);
v___f_1811_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__13___boxed), 17, 16);
lean_closure_set(v___f_1811_, 0, v_k_1804_);
lean_closure_set(v___f_1811_, 1, v_inst_1795_);
lean_closure_set(v___f_1811_, 2, v_toApplicative_1808_);
lean_closure_set(v___f_1811_, 3, v_always_1799_);
lean_closure_set(v___f_1811_, 4, v_inst_1794_);
lean_closure_set(v___f_1811_, 5, v_inst_1796_);
lean_closure_set(v___f_1811_, 6, v_inst_1797_);
lean_closure_set(v___f_1811_, 7, v_inst_1801_);
lean_closure_set(v___f_1811_, 8, v_cls_1802_);
lean_closure_set(v___f_1811_, 9, v___x_1810_);
lean_closure_set(v___f_1811_, 10, v_tag_1806_);
lean_closure_set(v___f_1811_, 11, v_msg_1803_);
lean_closure_set(v___f_1811_, 12, v_toBind_1809_);
lean_closure_set(v___f_1811_, 13, v___x_1807_);
lean_closure_set(v___f_1811_, 14, v_inst_1800_);
lean_closure_set(v___f_1811_, 15, v_inst_1798_);
v___x_1812_ = lean_apply_4(v_toBind_1809_, lean_box(0), lean_box(0), v_inst_1798_, v___f_1811_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___boxed(lean_object* v_inst_1813_, lean_object* v_inst_1814_, lean_object* v_inst_1815_, lean_object* v_inst_1816_, lean_object* v_inst_1817_, lean_object* v_always_1818_, lean_object* v_inst_1819_, lean_object* v_inst_1820_, lean_object* v_cls_1821_, lean_object* v_msg_1822_, lean_object* v_k_1823_, lean_object* v_collapsed_1824_, lean_object* v_tag_1825_){
_start:
{
uint8_t v_collapsed_boxed_1826_; lean_object* v_res_1827_; 
v_collapsed_boxed_1826_ = lean_unbox(v_collapsed_1824_);
v_res_1827_ = l_Lean_withTraceNode___redArg(v_inst_1813_, v_inst_1814_, v_inst_1815_, v_inst_1816_, v_inst_1817_, v_always_1818_, v_inst_1819_, v_inst_1820_, v_cls_1821_, v_msg_1822_, v_k_1823_, v_collapsed_boxed_1826_, v_tag_1825_);
return v_res_1827_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode(lean_object* v_00_u03b1_1828_, lean_object* v_m_1829_, lean_object* v_inst_1830_, lean_object* v_inst_1831_, lean_object* v_inst_1832_, lean_object* v_inst_1833_, lean_object* v_inst_1834_, lean_object* v_00_u03b5_1835_, lean_object* v_always_1836_, lean_object* v_inst_1837_, lean_object* v_inst_1838_, lean_object* v_cls_1839_, lean_object* v_msg_1840_, lean_object* v_k_1841_, uint8_t v_collapsed_1842_, lean_object* v_tag_1843_){
_start:
{
lean_object* v___x_1844_; lean_object* v_toApplicative_1845_; lean_object* v_toBind_1846_; lean_object* v___x_1847_; lean_object* v___f_1848_; lean_object* v___x_1849_; 
v___x_1844_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1845_ = lean_ctor_get(v_inst_1830_, 0);
lean_inc_ref(v_toApplicative_1845_);
v_toBind_1846_ = lean_ctor_get(v_inst_1830_, 1);
lean_inc_n(v_toBind_1846_, 2);
v___x_1847_ = lean_box(v_collapsed_1842_);
lean_inc(v_inst_1834_);
v___f_1848_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__13___boxed), 17, 16);
lean_closure_set(v___f_1848_, 0, v_k_1841_);
lean_closure_set(v___f_1848_, 1, v_inst_1831_);
lean_closure_set(v___f_1848_, 2, v_toApplicative_1845_);
lean_closure_set(v___f_1848_, 3, v_always_1836_);
lean_closure_set(v___f_1848_, 4, v_inst_1830_);
lean_closure_set(v___f_1848_, 5, v_inst_1832_);
lean_closure_set(v___f_1848_, 6, v_inst_1833_);
lean_closure_set(v___f_1848_, 7, v_inst_1838_);
lean_closure_set(v___f_1848_, 8, v_cls_1839_);
lean_closure_set(v___f_1848_, 9, v___x_1847_);
lean_closure_set(v___f_1848_, 10, v_tag_1843_);
lean_closure_set(v___f_1848_, 11, v_msg_1840_);
lean_closure_set(v___f_1848_, 12, v_toBind_1846_);
lean_closure_set(v___f_1848_, 13, v___x_1844_);
lean_closure_set(v___f_1848_, 14, v_inst_1837_);
lean_closure_set(v___f_1848_, 15, v_inst_1834_);
v___x_1849_ = lean_apply_4(v_toBind_1846_, lean_box(0), lean_box(0), v_inst_1834_, v___f_1848_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___boxed(lean_object* v_00_u03b1_1850_, lean_object* v_m_1851_, lean_object* v_inst_1852_, lean_object* v_inst_1853_, lean_object* v_inst_1854_, lean_object* v_inst_1855_, lean_object* v_inst_1856_, lean_object* v_00_u03b5_1857_, lean_object* v_always_1858_, lean_object* v_inst_1859_, lean_object* v_inst_1860_, lean_object* v_cls_1861_, lean_object* v_msg_1862_, lean_object* v_k_1863_, lean_object* v_collapsed_1864_, lean_object* v_tag_1865_){
_start:
{
uint8_t v_collapsed_boxed_1866_; lean_object* v_res_1867_; 
v_collapsed_boxed_1866_ = lean_unbox(v_collapsed_1864_);
v_res_1867_ = l_Lean_withTraceNode(v_00_u03b1_1850_, v_m_1851_, v_inst_1852_, v_inst_1853_, v_inst_1854_, v_inst_1855_, v_inst_1856_, v_00_u03b5_1857_, v_always_1858_, v_inst_1859_, v_inst_1860_, v_cls_1861_, v_msg_1862_, v_k_1863_, v_collapsed_boxed_1866_, v_tag_1865_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0(lean_object* v_self_1868_){
_start:
{
lean_object* v_fst_1869_; 
v_fst_1869_ = lean_ctor_get(v_self_1868_, 0);
lean_inc(v_fst_1869_);
return v_fst_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0___boxed(lean_object* v_self_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lean_withTraceNode_x27___redArg___lam__0(v_self_1870_);
lean_dec_ref(v_self_1870_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__1(lean_object* v_toPure_1872_, lean_object* v_x_1873_){
_start:
{
if (lean_obj_tag(v_x_1873_) == 0)
{
lean_object* v_a_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; 
v_a_1874_ = lean_ctor_get(v_x_1873_, 0);
lean_inc(v_a_1874_);
lean_dec_ref_known(v_x_1873_, 1);
v___x_1875_ = l_Lean_Exception_toMessageData(v_a_1874_);
v___x_1876_ = lean_apply_2(v_toPure_1872_, lean_box(0), v___x_1875_);
return v___x_1876_;
}
else
{
lean_object* v_a_1877_; lean_object* v_snd_1878_; lean_object* v___x_1879_; 
v_a_1877_ = lean_ctor_get(v_x_1873_, 0);
lean_inc(v_a_1877_);
lean_dec_ref_known(v_x_1873_, 1);
v_snd_1878_ = lean_ctor_get(v_a_1877_, 1);
lean_inc(v_snd_1878_);
lean_dec(v_a_1877_);
v___x_1879_ = lean_apply_2(v_toPure_1872_, lean_box(0), v_snd_1878_);
return v___x_1879_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__4(lean_object* v_toPure_1880_, lean_object* v_ex_1881_){
_start:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1882_, 0, v_ex_1881_);
v___x_1883_ = lean_apply_2(v_toPure_1880_, lean_box(0), v___x_1882_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__2(lean_object* v_toPure_1884_, lean_object* v_a_1885_){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1886_, 0, v_a_1885_);
v___x_1887_ = lean_apply_2(v_toPure_1884_, lean_box(0), v___x_1886_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3(lean_object* v_inst_1888_, lean_object* v_inst_1889_, lean_object* v_inst_1890_, lean_object* v_inst_1891_, lean_object* v_inst_1892_, lean_object* v___f_1893_, lean_object* v_cls_1894_, uint8_t v_collapsed_1895_, lean_object* v_tag_1896_, lean_object* v_opts_1897_, uint8_t v_clsEnabled_1898_, lean_object* v_oldTraces_1899_, lean_object* v_msg_1900_, lean_object* v_resStartStop_1901_){
_start:
{
lean_object* v___x_1902_; 
v___x_1902_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1888_, v_inst_1889_, v_inst_1890_, v_inst_1891_, v_inst_1892_, v___f_1893_, v_cls_1894_, v_collapsed_1895_, v_tag_1896_, v_opts_1897_, v_clsEnabled_1898_, v_oldTraces_1899_, v_msg_1900_, v_resStartStop_1901_);
return v___x_1902_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3___boxed(lean_object* v_inst_1903_, lean_object* v_inst_1904_, lean_object* v_inst_1905_, lean_object* v_inst_1906_, lean_object* v_inst_1907_, lean_object* v___f_1908_, lean_object* v_cls_1909_, lean_object* v_collapsed_1910_, lean_object* v_tag_1911_, lean_object* v_opts_1912_, lean_object* v_clsEnabled_1913_, lean_object* v_oldTraces_1914_, lean_object* v_msg_1915_, lean_object* v_resStartStop_1916_){
_start:
{
uint8_t v_collapsed_boxed_1917_; uint8_t v_clsEnabled_boxed_1918_; lean_object* v_res_1919_; 
v_collapsed_boxed_1917_ = lean_unbox(v_collapsed_1910_);
v_clsEnabled_boxed_1918_ = lean_unbox(v_clsEnabled_1913_);
v_res_1919_ = l_Lean_withTraceNode_x27___redArg___lam__3(v_inst_1903_, v_inst_1904_, v_inst_1905_, v_inst_1906_, v_inst_1907_, v___f_1908_, v_cls_1909_, v_collapsed_boxed_1917_, v_tag_1911_, v_opts_1912_, v_clsEnabled_boxed_1918_, v_oldTraces_1914_, v_msg_1915_, v_resStartStop_1916_);
lean_dec_ref(v_opts_1912_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__5(lean_object* v_start_1920_, lean_object* v_a_1921_, lean_object* v_toPure_1922_, lean_object* v_stop_1923_){
_start:
{
double v___x_1924_; double v___x_1925_; double v___x_1926_; double v___x_1927_; double v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1924_ = lean_float_of_nat(v_start_1920_);
v___x_1925_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0, &l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0);
v___x_1926_ = lean_float_div(v___x_1924_, v___x_1925_);
v___x_1927_ = lean_float_of_nat(v_stop_1923_);
v___x_1928_ = lean_float_div(v___x_1927_, v___x_1925_);
v___x_1929_ = lean_box_float(v___x_1926_);
v___x_1930_ = lean_box_float(v___x_1928_);
v___x_1931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1929_);
lean_ctor_set(v___x_1931_, 1, v___x_1930_);
v___x_1932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1932_, 0, v_a_1921_);
lean_ctor_set(v___x_1932_, 1, v___x_1931_);
v___x_1933_ = lean_apply_2(v_toPure_1922_, lean_box(0), v___x_1932_);
return v___x_1933_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__6(lean_object* v_start_1934_, lean_object* v_toPure_1935_, lean_object* v_toBind_1936_, lean_object* v___x_1937_, lean_object* v_a_1938_){
_start:
{
lean_object* v___f_1939_; lean_object* v___x_1940_; 
v___f_1939_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__5), 4, 3);
lean_closure_set(v___f_1939_, 0, v_start_1934_);
lean_closure_set(v___f_1939_, 1, v_a_1938_);
lean_closure_set(v___f_1939_, 2, v_toPure_1935_);
v___x_1940_ = lean_apply_4(v_toBind_1936_, lean_box(0), lean_box(0), v___x_1937_, v___f_1939_);
return v___x_1940_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__7(lean_object* v_toPure_1941_, lean_object* v_toBind_1942_, lean_object* v___x_1943_, lean_object* v___x_1944_, lean_object* v_start_1945_){
_start:
{
lean_object* v___f_1946_; lean_object* v___x_1947_; 
lean_inc(v_toBind_1942_);
v___f_1946_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__6), 5, 4);
lean_closure_set(v___f_1946_, 0, v_start_1945_);
lean_closure_set(v___f_1946_, 1, v_toPure_1941_);
lean_closure_set(v___f_1946_, 2, v_toBind_1942_);
lean_closure_set(v___f_1946_, 3, v___x_1943_);
v___x_1947_ = lean_apply_4(v_toBind_1942_, lean_box(0), lean_box(0), v___x_1944_, v___f_1946_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__8(lean_object* v_start_1948_, lean_object* v_a_1949_, lean_object* v_toPure_1950_, lean_object* v_stop_1951_){
_start:
{
double v___x_1952_; double v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1952_ = lean_float_of_nat(v_start_1948_);
v___x_1953_ = lean_float_of_nat(v_stop_1951_);
v___x_1954_ = lean_box_float(v___x_1952_);
v___x_1955_ = lean_box_float(v___x_1953_);
v___x_1956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1954_);
lean_ctor_set(v___x_1956_, 1, v___x_1955_);
v___x_1957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1957_, 0, v_a_1949_);
lean_ctor_set(v___x_1957_, 1, v___x_1956_);
v___x_1958_ = lean_apply_2(v_toPure_1950_, lean_box(0), v___x_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__9(lean_object* v_start_1959_, lean_object* v_toPure_1960_, lean_object* v_toBind_1961_, lean_object* v___x_1962_, lean_object* v_a_1963_){
_start:
{
lean_object* v___f_1964_; lean_object* v___x_1965_; 
v___f_1964_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__8), 4, 3);
lean_closure_set(v___f_1964_, 0, v_start_1959_);
lean_closure_set(v___f_1964_, 1, v_a_1963_);
lean_closure_set(v___f_1964_, 2, v_toPure_1960_);
v___x_1965_ = lean_apply_4(v_toBind_1961_, lean_box(0), lean_box(0), v___x_1962_, v___f_1964_);
return v___x_1965_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__10(lean_object* v_toPure_1966_, lean_object* v_toBind_1967_, lean_object* v___x_1968_, lean_object* v___x_1969_, lean_object* v_start_1970_){
_start:
{
lean_object* v___f_1971_; lean_object* v___x_1972_; 
lean_inc(v_toBind_1967_);
v___f_1971_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__9), 5, 4);
lean_closure_set(v___f_1971_, 0, v_start_1970_);
lean_closure_set(v___f_1971_, 1, v_toPure_1966_);
lean_closure_set(v___f_1971_, 2, v_toBind_1967_);
lean_closure_set(v___f_1971_, 3, v___x_1968_);
v___x_1972_ = lean_apply_4(v_toBind_1967_, lean_box(0), lean_box(0), v___x_1969_, v___f_1971_);
return v___x_1972_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11(lean_object* v_inst_1973_, lean_object* v_inst_1974_, lean_object* v_inst_1975_, lean_object* v_inst_1976_, lean_object* v_inst_1977_, lean_object* v___f_1978_, lean_object* v_cls_1979_, uint8_t v_collapsed_1980_, lean_object* v_tag_1981_, lean_object* v_opts_1982_, uint8_t v_clsEnabled_1983_, lean_object* v_msg_1984_, lean_object* v_toBind_1985_, lean_object* v_k_1986_, lean_object* v___f_1987_, lean_object* v___f_1988_, lean_object* v___x_1989_, lean_object* v_inst_1990_, lean_object* v_toPure_1991_, lean_object* v_oldTraces_1992_){
_start:
{
lean_object* v_tryCatch_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___f_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; uint8_t v___x_2001_; 
v_tryCatch_1993_ = lean_ctor_get(v_inst_1973_, 1);
lean_inc(v_tryCatch_1993_);
v___x_1994_ = lean_box(v_collapsed_1980_);
v___x_1995_ = lean_box(v_clsEnabled_1983_);
lean_inc_ref(v_opts_1982_);
v___f_1996_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__3___boxed), 14, 13);
lean_closure_set(v___f_1996_, 0, v_inst_1974_);
lean_closure_set(v___f_1996_, 1, v_inst_1975_);
lean_closure_set(v___f_1996_, 2, v_inst_1976_);
lean_closure_set(v___f_1996_, 3, v_inst_1977_);
lean_closure_set(v___f_1996_, 4, v_inst_1973_);
lean_closure_set(v___f_1996_, 5, v___f_1978_);
lean_closure_set(v___f_1996_, 6, v_cls_1979_);
lean_closure_set(v___f_1996_, 7, v___x_1994_);
lean_closure_set(v___f_1996_, 8, v_tag_1981_);
lean_closure_set(v___f_1996_, 9, v_opts_1982_);
lean_closure_set(v___f_1996_, 10, v___x_1995_);
lean_closure_set(v___f_1996_, 11, v_oldTraces_1992_);
lean_closure_set(v___f_1996_, 12, v_msg_1984_);
lean_inc(v_toBind_1985_);
v___x_1997_ = lean_apply_4(v_toBind_1985_, lean_box(0), lean_box(0), v_k_1986_, v___f_1987_);
v___x_1998_ = lean_apply_3(v_tryCatch_1993_, lean_box(0), v___x_1997_, v___f_1988_);
v___x_1999_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2000_ = l_Lean_Option_get___redArg(v___x_1989_, v_opts_1982_, v___x_1999_);
lean_dec_ref(v_opts_1982_);
v___x_2001_ = lean_unbox(v___x_2000_);
lean_dec(v___x_2000_);
if (v___x_2001_ == 0)
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___f_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2002_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_2003_ = lean_apply_2(v_inst_1990_, lean_box(0), v___x_2002_);
lean_inc(v___x_2003_);
lean_inc_n(v_toBind_1985_, 2);
v___f_2004_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__7), 5, 4);
lean_closure_set(v___f_2004_, 0, v_toPure_1991_);
lean_closure_set(v___f_2004_, 1, v_toBind_1985_);
lean_closure_set(v___f_2004_, 2, v___x_2003_);
lean_closure_set(v___f_2004_, 3, v___x_1998_);
v___x_2005_ = lean_apply_4(v_toBind_1985_, lean_box(0), lean_box(0), v___x_2003_, v___f_2004_);
v___x_2006_ = lean_apply_4(v_toBind_1985_, lean_box(0), lean_box(0), v___x_2005_, v___f_1996_);
return v___x_2006_;
}
else
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___f_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_2007_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_2008_ = lean_apply_2(v_inst_1990_, lean_box(0), v___x_2007_);
lean_inc(v___x_2008_);
lean_inc_n(v_toBind_1985_, 2);
v___f_2009_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__10), 5, 4);
lean_closure_set(v___f_2009_, 0, v_toPure_1991_);
lean_closure_set(v___f_2009_, 1, v_toBind_1985_);
lean_closure_set(v___f_2009_, 2, v___x_2008_);
lean_closure_set(v___f_2009_, 3, v___x_1998_);
v___x_2010_ = lean_apply_4(v_toBind_1985_, lean_box(0), lean_box(0), v___x_2008_, v___f_2009_);
v___x_2011_ = lean_apply_4(v_toBind_1985_, lean_box(0), lean_box(0), v___x_2010_, v___f_1996_);
return v___x_2011_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11___boxed(lean_object** _args){
lean_object* v_inst_2012_ = _args[0];
lean_object* v_inst_2013_ = _args[1];
lean_object* v_inst_2014_ = _args[2];
lean_object* v_inst_2015_ = _args[3];
lean_object* v_inst_2016_ = _args[4];
lean_object* v___f_2017_ = _args[5];
lean_object* v_cls_2018_ = _args[6];
lean_object* v_collapsed_2019_ = _args[7];
lean_object* v_tag_2020_ = _args[8];
lean_object* v_opts_2021_ = _args[9];
lean_object* v_clsEnabled_2022_ = _args[10];
lean_object* v_msg_2023_ = _args[11];
lean_object* v_toBind_2024_ = _args[12];
lean_object* v_k_2025_ = _args[13];
lean_object* v___f_2026_ = _args[14];
lean_object* v___f_2027_ = _args[15];
lean_object* v___x_2028_ = _args[16];
lean_object* v_inst_2029_ = _args[17];
lean_object* v_toPure_2030_ = _args[18];
lean_object* v_oldTraces_2031_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_2032_; uint8_t v_clsEnabled_boxed_2033_; lean_object* v_res_2034_; 
v_collapsed_boxed_2032_ = lean_unbox(v_collapsed_2019_);
v_clsEnabled_boxed_2033_ = lean_unbox(v_clsEnabled_2022_);
v_res_2034_ = l_Lean_withTraceNode_x27___redArg___lam__11(v_inst_2012_, v_inst_2013_, v_inst_2014_, v_inst_2015_, v_inst_2016_, v___f_2017_, v_cls_2018_, v_collapsed_boxed_2032_, v_tag_2020_, v_opts_2021_, v_clsEnabled_boxed_2033_, v_msg_2023_, v_toBind_2024_, v_k_2025_, v___f_2026_, v___f_2027_, v___x_2028_, v_inst_2029_, v_toPure_2030_, v_oldTraces_2031_);
return v_res_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12(lean_object* v_inst_2035_, lean_object* v_inst_2036_, lean_object* v_inst_2037_, lean_object* v_inst_2038_, lean_object* v_inst_2039_, lean_object* v___f_2040_, lean_object* v_cls_2041_, uint8_t v_collapsed_2042_, lean_object* v_tag_2043_, lean_object* v_opts_2044_, lean_object* v_msg_2045_, lean_object* v_toBind_2046_, lean_object* v_k_2047_, lean_object* v___f_2048_, lean_object* v___f_2049_, lean_object* v___x_2050_, lean_object* v_inst_2051_, lean_object* v_toPure_2052_, uint8_t v_clsEnabled_2053_){
_start:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___f_2056_; 
v___x_2054_ = lean_box(v_collapsed_2042_);
v___x_2055_ = lean_box(v_clsEnabled_2053_);
lean_inc_ref(v___x_2050_);
lean_inc(v_k_2047_);
lean_inc(v_toBind_2046_);
lean_inc_ref(v_opts_2044_);
lean_inc_ref(v_inst_2037_);
lean_inc_ref(v_inst_2036_);
v___f_2056_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__11___boxed), 20, 19);
lean_closure_set(v___f_2056_, 0, v_inst_2035_);
lean_closure_set(v___f_2056_, 1, v_inst_2036_);
lean_closure_set(v___f_2056_, 2, v_inst_2037_);
lean_closure_set(v___f_2056_, 3, v_inst_2038_);
lean_closure_set(v___f_2056_, 4, v_inst_2039_);
lean_closure_set(v___f_2056_, 5, v___f_2040_);
lean_closure_set(v___f_2056_, 6, v_cls_2041_);
lean_closure_set(v___f_2056_, 7, v___x_2054_);
lean_closure_set(v___f_2056_, 8, v_tag_2043_);
lean_closure_set(v___f_2056_, 9, v_opts_2044_);
lean_closure_set(v___f_2056_, 10, v___x_2055_);
lean_closure_set(v___f_2056_, 11, v_msg_2045_);
lean_closure_set(v___f_2056_, 12, v_toBind_2046_);
lean_closure_set(v___f_2056_, 13, v_k_2047_);
lean_closure_set(v___f_2056_, 14, v___f_2048_);
lean_closure_set(v___f_2056_, 15, v___f_2049_);
lean_closure_set(v___f_2056_, 16, v___x_2050_);
lean_closure_set(v___f_2056_, 17, v_inst_2051_);
lean_closure_set(v___f_2056_, 18, v_toPure_2052_);
if (v_clsEnabled_2053_ == 0)
{
lean_object* v___x_2060_; lean_object* v___x_2061_; uint8_t v___x_2062_; 
v___x_2060_ = l_Lean_trace_profiler;
v___x_2061_ = l_Lean_Option_get___redArg(v___x_2050_, v_opts_2044_, v___x_2060_);
lean_dec_ref(v_opts_2044_);
v___x_2062_ = lean_unbox(v___x_2061_);
lean_dec(v___x_2061_);
if (v___x_2062_ == 0)
{
lean_dec_ref(v___f_2056_);
lean_dec(v_toBind_2046_);
lean_dec_ref(v_inst_2037_);
lean_dec_ref(v_inst_2036_);
return v_k_2047_;
}
else
{
lean_dec(v_k_2047_);
goto v___jp_2057_;
}
}
else
{
lean_dec_ref(v___x_2050_);
lean_dec(v_k_2047_);
lean_dec_ref(v_opts_2044_);
goto v___jp_2057_;
}
v___jp_2057_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_2036_, v_inst_2037_);
v___x_2059_ = lean_apply_4(v_toBind_2046_, lean_box(0), lean_box(0), v___x_2058_, v___f_2056_);
return v___x_2059_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12___boxed(lean_object** _args){
lean_object* v_inst_2063_ = _args[0];
lean_object* v_inst_2064_ = _args[1];
lean_object* v_inst_2065_ = _args[2];
lean_object* v_inst_2066_ = _args[3];
lean_object* v_inst_2067_ = _args[4];
lean_object* v___f_2068_ = _args[5];
lean_object* v_cls_2069_ = _args[6];
lean_object* v_collapsed_2070_ = _args[7];
lean_object* v_tag_2071_ = _args[8];
lean_object* v_opts_2072_ = _args[9];
lean_object* v_msg_2073_ = _args[10];
lean_object* v_toBind_2074_ = _args[11];
lean_object* v_k_2075_ = _args[12];
lean_object* v___f_2076_ = _args[13];
lean_object* v___f_2077_ = _args[14];
lean_object* v___x_2078_ = _args[15];
lean_object* v_inst_2079_ = _args[16];
lean_object* v_toPure_2080_ = _args[17];
lean_object* v_clsEnabled_2081_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_2082_; uint8_t v_clsEnabled_boxed_2083_; lean_object* v_res_2084_; 
v_collapsed_boxed_2082_ = lean_unbox(v_collapsed_2070_);
v_clsEnabled_boxed_2083_ = lean_unbox(v_clsEnabled_2081_);
v_res_2084_ = l_Lean_withTraceNode_x27___redArg___lam__12(v_inst_2063_, v_inst_2064_, v_inst_2065_, v_inst_2066_, v_inst_2067_, v___f_2068_, v_cls_2069_, v_collapsed_boxed_2082_, v_tag_2071_, v_opts_2072_, v_msg_2073_, v_toBind_2074_, v_k_2075_, v___f_2076_, v___f_2077_, v___x_2078_, v_inst_2079_, v_toPure_2080_, v_clsEnabled_boxed_2083_);
return v_res_2084_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13(lean_object* v_k_2085_, lean_object* v_inst_2086_, lean_object* v_inst_2087_, lean_object* v_inst_2088_, lean_object* v_inst_2089_, lean_object* v_inst_2090_, lean_object* v___f_2091_, lean_object* v_cls_2092_, uint8_t v_collapsed_2093_, lean_object* v_tag_2094_, lean_object* v_msg_2095_, lean_object* v_toBind_2096_, lean_object* v___f_2097_, lean_object* v___f_2098_, lean_object* v___x_2099_, lean_object* v_inst_2100_, lean_object* v_toPure_2101_, lean_object* v___f_2102_, lean_object* v_opts_2103_){
_start:
{
uint8_t v_hasTrace_2104_; 
v_hasTrace_2104_ = lean_ctor_get_uint8(v_opts_2103_, sizeof(void*)*1);
if (v_hasTrace_2104_ == 0)
{
lean_dec_ref(v_opts_2103_);
lean_dec(v___f_2102_);
lean_dec(v_toPure_2101_);
lean_dec(v_inst_2100_);
lean_dec_ref(v___x_2099_);
lean_dec(v___f_2098_);
lean_dec(v___f_2097_);
lean_dec(v_toBind_2096_);
lean_dec(v_msg_2095_);
lean_dec_ref(v_tag_2094_);
lean_dec(v_cls_2092_);
lean_dec_ref(v___f_2091_);
lean_dec(v_inst_2090_);
lean_dec_ref(v_inst_2089_);
lean_dec_ref(v_inst_2088_);
lean_dec_ref(v_inst_2087_);
lean_dec_ref(v_inst_2086_);
return v_k_2085_;
}
else
{
lean_object* v_getInheritedTraceOptions_2105_; lean_object* v___x_2106_; lean_object* v___f_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v_getInheritedTraceOptions_2105_ = lean_ctor_get(v_inst_2086_, 2);
lean_inc(v_getInheritedTraceOptions_2105_);
v___x_2106_ = lean_box(v_collapsed_2093_);
lean_inc_n(v_toBind_2096_, 2);
v___f_2107_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__12___boxed), 19, 18);
lean_closure_set(v___f_2107_, 0, v_inst_2087_);
lean_closure_set(v___f_2107_, 1, v_inst_2088_);
lean_closure_set(v___f_2107_, 2, v_inst_2086_);
lean_closure_set(v___f_2107_, 3, v_inst_2089_);
lean_closure_set(v___f_2107_, 4, v_inst_2090_);
lean_closure_set(v___f_2107_, 5, v___f_2091_);
lean_closure_set(v___f_2107_, 6, v_cls_2092_);
lean_closure_set(v___f_2107_, 7, v___x_2106_);
lean_closure_set(v___f_2107_, 8, v_tag_2094_);
lean_closure_set(v___f_2107_, 9, v_opts_2103_);
lean_closure_set(v___f_2107_, 10, v_msg_2095_);
lean_closure_set(v___f_2107_, 11, v_toBind_2096_);
lean_closure_set(v___f_2107_, 12, v_k_2085_);
lean_closure_set(v___f_2107_, 13, v___f_2097_);
lean_closure_set(v___f_2107_, 14, v___f_2098_);
lean_closure_set(v___f_2107_, 15, v___x_2099_);
lean_closure_set(v___f_2107_, 16, v_inst_2100_);
lean_closure_set(v___f_2107_, 17, v_toPure_2101_);
v___x_2108_ = lean_apply_4(v_toBind_2096_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_2105_, v___f_2102_);
v___x_2109_ = lean_apply_4(v_toBind_2096_, lean_box(0), lean_box(0), v___x_2108_, v___f_2107_);
return v___x_2109_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_k_2110_ = _args[0];
lean_object* v_inst_2111_ = _args[1];
lean_object* v_inst_2112_ = _args[2];
lean_object* v_inst_2113_ = _args[3];
lean_object* v_inst_2114_ = _args[4];
lean_object* v_inst_2115_ = _args[5];
lean_object* v___f_2116_ = _args[6];
lean_object* v_cls_2117_ = _args[7];
lean_object* v_collapsed_2118_ = _args[8];
lean_object* v_tag_2119_ = _args[9];
lean_object* v_msg_2120_ = _args[10];
lean_object* v_toBind_2121_ = _args[11];
lean_object* v___f_2122_ = _args[12];
lean_object* v___f_2123_ = _args[13];
lean_object* v___x_2124_ = _args[14];
lean_object* v_inst_2125_ = _args[15];
lean_object* v_toPure_2126_ = _args[16];
lean_object* v___f_2127_ = _args[17];
lean_object* v_opts_2128_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_2129_; lean_object* v_res_2130_; 
v_collapsed_boxed_2129_ = lean_unbox(v_collapsed_2118_);
v_res_2130_ = l_Lean_withTraceNode_x27___redArg___lam__13(v_k_2110_, v_inst_2111_, v_inst_2112_, v_inst_2113_, v_inst_2114_, v_inst_2115_, v___f_2116_, v_cls_2117_, v_collapsed_boxed_2129_, v_tag_2119_, v_msg_2120_, v_toBind_2121_, v___f_2122_, v___f_2123_, v___x_2124_, v_inst_2125_, v_toPure_2126_, v___f_2127_, v_opts_2128_);
return v_res_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg(lean_object* v_inst_2132_, lean_object* v_inst_2133_, lean_object* v_inst_2134_, lean_object* v_inst_2135_, lean_object* v_inst_2136_, lean_object* v_inst_2137_, lean_object* v_inst_2138_, lean_object* v_cls_2139_, lean_object* v_k_2140_, uint8_t v_collapsed_2141_, lean_object* v_tag_2142_){
_start:
{
lean_object* v_toApplicative_2143_; lean_object* v_toFunctor_2144_; lean_object* v_toBind_2145_; lean_object* v_toPure_2146_; lean_object* v_map_2147_; lean_object* v___f_2148_; lean_object* v_msg_2149_; lean_object* v___f_2150_; lean_object* v___f_2151_; lean_object* v___f_2152_; lean_object* v___f_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___f_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
v_toApplicative_2143_ = lean_ctor_get(v_inst_2132_, 0);
v_toFunctor_2144_ = lean_ctor_get(v_toApplicative_2143_, 0);
v_toBind_2145_ = lean_ctor_get(v_inst_2132_, 1);
lean_inc_n(v_toBind_2145_, 3);
v_toPure_2146_ = lean_ctor_get(v_toApplicative_2143_, 1);
lean_inc_n(v_toPure_2146_, 5);
v_map_2147_ = lean_ctor_get(v_toFunctor_2144_, 0);
lean_inc(v_map_2147_);
v___f_2148_ = ((lean_object*)(l_Lean_withTraceNode_x27___redArg___closed__0));
v_msg_2149_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__1), 2, 1);
lean_closure_set(v_msg_2149_, 0, v_toPure_2146_);
lean_inc(v_inst_2136_);
lean_inc(v_cls_2139_);
v___f_2150_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2150_, 0, v_toPure_2146_);
lean_closure_set(v___f_2150_, 1, v_cls_2139_);
lean_closure_set(v___f_2150_, 2, v_toBind_2145_);
lean_closure_set(v___f_2150_, 3, v_inst_2136_);
v___f_2151_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2151_, 0, v_toPure_2146_);
v___f_2152_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__2), 2, 1);
lean_closure_set(v___f_2152_, 0, v_toPure_2146_);
v___f_2153_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
v___x_2154_ = l_Lean_KVMap_instValueBool;
v___x_2155_ = lean_box(v_collapsed_2141_);
v___f_2156_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__13___boxed), 19, 18);
lean_closure_set(v___f_2156_, 0, v_k_2140_);
lean_closure_set(v___f_2156_, 1, v_inst_2133_);
lean_closure_set(v___f_2156_, 2, v_inst_2137_);
lean_closure_set(v___f_2156_, 3, v_inst_2132_);
lean_closure_set(v___f_2156_, 4, v_inst_2134_);
lean_closure_set(v___f_2156_, 5, v_inst_2135_);
lean_closure_set(v___f_2156_, 6, v___f_2153_);
lean_closure_set(v___f_2156_, 7, v_cls_2139_);
lean_closure_set(v___f_2156_, 8, v___x_2155_);
lean_closure_set(v___f_2156_, 9, v_tag_2142_);
lean_closure_set(v___f_2156_, 10, v_msg_2149_);
lean_closure_set(v___f_2156_, 11, v_toBind_2145_);
lean_closure_set(v___f_2156_, 12, v___f_2152_);
lean_closure_set(v___f_2156_, 13, v___f_2151_);
lean_closure_set(v___f_2156_, 14, v___x_2154_);
lean_closure_set(v___f_2156_, 15, v_inst_2138_);
lean_closure_set(v___f_2156_, 16, v_toPure_2146_);
lean_closure_set(v___f_2156_, 17, v___f_2150_);
v___x_2157_ = lean_apply_4(v_toBind_2145_, lean_box(0), lean_box(0), v_inst_2136_, v___f_2156_);
v___x_2158_ = lean_apply_4(v_map_2147_, lean_box(0), lean_box(0), v___f_2148_, v___x_2157_);
return v___x_2158_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___boxed(lean_object* v_inst_2159_, lean_object* v_inst_2160_, lean_object* v_inst_2161_, lean_object* v_inst_2162_, lean_object* v_inst_2163_, lean_object* v_inst_2164_, lean_object* v_inst_2165_, lean_object* v_cls_2166_, lean_object* v_k_2167_, lean_object* v_collapsed_2168_, lean_object* v_tag_2169_){
_start:
{
uint8_t v_collapsed_boxed_2170_; lean_object* v_res_2171_; 
v_collapsed_boxed_2170_ = lean_unbox(v_collapsed_2168_);
v_res_2171_ = l_Lean_withTraceNode_x27___redArg(v_inst_2159_, v_inst_2160_, v_inst_2161_, v_inst_2162_, v_inst_2163_, v_inst_2164_, v_inst_2165_, v_cls_2166_, v_k_2167_, v_collapsed_boxed_2170_, v_tag_2169_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27(lean_object* v_00_u03b1_2172_, lean_object* v_m_2173_, lean_object* v_inst_2174_, lean_object* v_inst_2175_, lean_object* v_inst_2176_, lean_object* v_inst_2177_, lean_object* v_inst_2178_, lean_object* v_inst_2179_, lean_object* v_inst_2180_, lean_object* v_cls_2181_, lean_object* v_k_2182_, uint8_t v_collapsed_2183_, lean_object* v_tag_2184_){
_start:
{
lean_object* v_toApplicative_2185_; lean_object* v_toFunctor_2186_; lean_object* v_toBind_2187_; lean_object* v_toPure_2188_; lean_object* v_map_2189_; lean_object* v___f_2190_; lean_object* v_msg_2191_; lean_object* v___f_2192_; lean_object* v___f_2193_; lean_object* v___f_2194_; lean_object* v___f_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___f_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v_toApplicative_2185_ = lean_ctor_get(v_inst_2174_, 0);
v_toFunctor_2186_ = lean_ctor_get(v_toApplicative_2185_, 0);
v_toBind_2187_ = lean_ctor_get(v_inst_2174_, 1);
lean_inc_n(v_toBind_2187_, 3);
v_toPure_2188_ = lean_ctor_get(v_toApplicative_2185_, 1);
lean_inc_n(v_toPure_2188_, 5);
v_map_2189_ = lean_ctor_get(v_toFunctor_2186_, 0);
lean_inc(v_map_2189_);
v___f_2190_ = ((lean_object*)(l_Lean_withTraceNode_x27___redArg___closed__0));
v_msg_2191_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__1), 2, 1);
lean_closure_set(v_msg_2191_, 0, v_toPure_2188_);
lean_inc(v_inst_2178_);
lean_inc(v_cls_2181_);
v___f_2192_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2192_, 0, v_toPure_2188_);
lean_closure_set(v___f_2192_, 1, v_cls_2181_);
lean_closure_set(v___f_2192_, 2, v_toBind_2187_);
lean_closure_set(v___f_2192_, 3, v_inst_2178_);
v___f_2193_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2193_, 0, v_toPure_2188_);
v___f_2194_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__2), 2, 1);
lean_closure_set(v___f_2194_, 0, v_toPure_2188_);
v___f_2195_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
v___x_2196_ = l_Lean_KVMap_instValueBool;
v___x_2197_ = lean_box(v_collapsed_2183_);
v___f_2198_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__13___boxed), 19, 18);
lean_closure_set(v___f_2198_, 0, v_k_2182_);
lean_closure_set(v___f_2198_, 1, v_inst_2175_);
lean_closure_set(v___f_2198_, 2, v_inst_2179_);
lean_closure_set(v___f_2198_, 3, v_inst_2174_);
lean_closure_set(v___f_2198_, 4, v_inst_2176_);
lean_closure_set(v___f_2198_, 5, v_inst_2177_);
lean_closure_set(v___f_2198_, 6, v___f_2195_);
lean_closure_set(v___f_2198_, 7, v_cls_2181_);
lean_closure_set(v___f_2198_, 8, v___x_2197_);
lean_closure_set(v___f_2198_, 9, v_tag_2184_);
lean_closure_set(v___f_2198_, 10, v_msg_2191_);
lean_closure_set(v___f_2198_, 11, v_toBind_2187_);
lean_closure_set(v___f_2198_, 12, v___f_2194_);
lean_closure_set(v___f_2198_, 13, v___f_2193_);
lean_closure_set(v___f_2198_, 14, v___x_2196_);
lean_closure_set(v___f_2198_, 15, v_inst_2180_);
lean_closure_set(v___f_2198_, 16, v_toPure_2188_);
lean_closure_set(v___f_2198_, 17, v___f_2192_);
v___x_2199_ = lean_apply_4(v_toBind_2187_, lean_box(0), lean_box(0), v_inst_2178_, v___f_2198_);
v___x_2200_ = lean_apply_4(v_map_2189_, lean_box(0), lean_box(0), v___f_2190_, v___x_2199_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___boxed(lean_object* v_00_u03b1_2201_, lean_object* v_m_2202_, lean_object* v_inst_2203_, lean_object* v_inst_2204_, lean_object* v_inst_2205_, lean_object* v_inst_2206_, lean_object* v_inst_2207_, lean_object* v_inst_2208_, lean_object* v_inst_2209_, lean_object* v_cls_2210_, lean_object* v_k_2211_, lean_object* v_collapsed_2212_, lean_object* v_tag_2213_){
_start:
{
uint8_t v_collapsed_boxed_2214_; lean_object* v_res_2215_; 
v_collapsed_boxed_2214_ = lean_unbox(v_collapsed_2212_);
v_res_2215_ = l_Lean_withTraceNode_x27(v_00_u03b1_2201_, v_m_2202_, v_inst_2203_, v_inst_2204_, v_inst_2205_, v_inst_2206_, v_inst_2207_, v_inst_2208_, v_inst_2209_, v_cls_2210_, v_k_2211_, v_collapsed_boxed_2214_, v_tag_2213_);
return v_res_2215_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__4(void){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2224_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__3));
v___x_2225_ = l_Lean_mkAtom(v___x_2224_);
return v___x_2225_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__5(void){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2226_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__4, &l_Lean_registerTraceClass___auto__1___closed__4_once, _init_l_Lean_registerTraceClass___auto__1___closed__4);
v___x_2227_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2228_ = lean_array_push(v___x_2227_, v___x_2226_);
return v___x_2228_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__6(void){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
v___x_2229_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__5, &l_Lean_registerTraceClass___auto__1___closed__5_once, _init_l_Lean_registerTraceClass___auto__1___closed__5);
v___x_2230_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__2));
v___x_2231_ = lean_box(2);
v___x_2232_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2232_, 0, v___x_2231_);
lean_ctor_set(v___x_2232_, 1, v___x_2230_);
lean_ctor_set(v___x_2232_, 2, v___x_2229_);
return v___x_2232_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__7(void){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___x_2233_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__6, &l_Lean_registerTraceClass___auto__1___closed__6_once, _init_l_Lean_registerTraceClass___auto__1___closed__6);
v___x_2234_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13);
v___x_2235_ = lean_array_push(v___x_2234_, v___x_2233_);
return v___x_2235_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__8(void){
_start:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2236_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__7, &l_Lean_registerTraceClass___auto__1___closed__7_once, _init_l_Lean_registerTraceClass___auto__1___closed__7);
v___x_2237_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11));
v___x_2238_ = lean_box(2);
v___x_2239_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2239_, 0, v___x_2238_);
lean_ctor_set(v___x_2239_, 1, v___x_2237_);
lean_ctor_set(v___x_2239_, 2, v___x_2236_);
return v___x_2239_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__9(void){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2240_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__8, &l_Lean_registerTraceClass___auto__1___closed__8_once, _init_l_Lean_registerTraceClass___auto__1___closed__8);
v___x_2241_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2242_ = lean_array_push(v___x_2241_, v___x_2240_);
return v___x_2242_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__10(void){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2243_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__9, &l_Lean_registerTraceClass___auto__1___closed__9_once, _init_l_Lean_registerTraceClass___auto__1___closed__9);
v___x_2244_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2245_ = lean_box(2);
v___x_2246_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2246_, 0, v___x_2245_);
lean_ctor_set(v___x_2246_, 1, v___x_2244_);
lean_ctor_set(v___x_2246_, 2, v___x_2243_);
return v___x_2246_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__11(void){
_start:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2247_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__10, &l_Lean_registerTraceClass___auto__1___closed__10_once, _init_l_Lean_registerTraceClass___auto__1___closed__10);
v___x_2248_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2249_ = lean_array_push(v___x_2248_, v___x_2247_);
return v___x_2249_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__12(void){
_start:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2250_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__11, &l_Lean_registerTraceClass___auto__1___closed__11_once, _init_l_Lean_registerTraceClass___auto__1___closed__11);
v___x_2251_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7));
v___x_2252_ = lean_box(2);
v___x_2253_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2253_, 0, v___x_2252_);
lean_ctor_set(v___x_2253_, 1, v___x_2251_);
lean_ctor_set(v___x_2253_, 2, v___x_2250_);
return v___x_2253_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__13(void){
_start:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2254_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__12, &l_Lean_registerTraceClass___auto__1___closed__12_once, _init_l_Lean_registerTraceClass___auto__1___closed__12);
v___x_2255_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2256_ = lean_array_push(v___x_2255_, v___x_2254_);
return v___x_2256_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__14(void){
_start:
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2257_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__13, &l_Lean_registerTraceClass___auto__1___closed__13_once, _init_l_Lean_registerTraceClass___auto__1___closed__13);
v___x_2258_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4));
v___x_2259_ = lean_box(2);
v___x_2260_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2259_);
lean_ctor_set(v___x_2260_, 1, v___x_2258_);
lean_ctor_set(v___x_2260_, 2, v___x_2257_);
return v___x_2260_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1(void){
_start:
{
lean_object* v___x_2261_; 
v___x_2261_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__14, &l_Lean_registerTraceClass___auto__1___closed__14_once, _init_l_Lean_registerTraceClass___auto__1___closed__14);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_2262_, lean_object* v_x_2263_){
_start:
{
if (lean_obj_tag(v_x_2263_) == 0)
{
return v_x_2262_;
}
else
{
lean_object* v_key_2264_; lean_object* v_value_2265_; lean_object* v_tail_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2292_; 
v_key_2264_ = lean_ctor_get(v_x_2263_, 0);
v_value_2265_ = lean_ctor_get(v_x_2263_, 1);
v_tail_2266_ = lean_ctor_get(v_x_2263_, 2);
v_isSharedCheck_2292_ = !lean_is_exclusive(v_x_2263_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2268_ = v_x_2263_;
v_isShared_2269_ = v_isSharedCheck_2292_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_tail_2266_);
lean_inc(v_value_2265_);
lean_inc(v_key_2264_);
lean_dec(v_x_2263_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2292_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2270_; uint64_t v___y_2272_; 
v___x_2270_ = lean_array_get_size(v_x_2262_);
if (lean_obj_tag(v_key_2264_) == 0)
{
uint64_t v___x_2290_; 
v___x_2290_ = 1723ULL;
v___y_2272_ = v___x_2290_;
goto v___jp_2271_;
}
else
{
uint64_t v_hash_2291_; 
v_hash_2291_ = lean_ctor_get_uint64(v_key_2264_, sizeof(void*)*2);
v___y_2272_ = v_hash_2291_;
goto v___jp_2271_;
}
v___jp_2271_:
{
uint64_t v___x_2273_; uint64_t v___x_2274_; uint64_t v_fold_2275_; uint64_t v___x_2276_; uint64_t v___x_2277_; uint64_t v___x_2278_; size_t v___x_2279_; size_t v___x_2280_; size_t v___x_2281_; size_t v___x_2282_; size_t v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2286_; 
v___x_2273_ = 32ULL;
v___x_2274_ = lean_uint64_shift_right(v___y_2272_, v___x_2273_);
v_fold_2275_ = lean_uint64_xor(v___y_2272_, v___x_2274_);
v___x_2276_ = 16ULL;
v___x_2277_ = lean_uint64_shift_right(v_fold_2275_, v___x_2276_);
v___x_2278_ = lean_uint64_xor(v_fold_2275_, v___x_2277_);
v___x_2279_ = lean_uint64_to_usize(v___x_2278_);
v___x_2280_ = lean_usize_of_nat(v___x_2270_);
v___x_2281_ = ((size_t)1ULL);
v___x_2282_ = lean_usize_sub(v___x_2280_, v___x_2281_);
v___x_2283_ = lean_usize_land(v___x_2279_, v___x_2282_);
v___x_2284_ = lean_array_uget_borrowed(v_x_2262_, v___x_2283_);
lean_inc(v___x_2284_);
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 2, v___x_2284_);
v___x_2286_ = v___x_2268_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_key_2264_);
lean_ctor_set(v_reuseFailAlloc_2289_, 1, v_value_2265_);
lean_ctor_set(v_reuseFailAlloc_2289_, 2, v___x_2284_);
v___x_2286_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
lean_object* v___x_2287_; 
v___x_2287_ = lean_array_uset(v_x_2262_, v___x_2283_, v___x_2286_);
v_x_2262_ = v___x_2287_;
v_x_2263_ = v_tail_2266_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(lean_object* v_i_2293_, lean_object* v_source_2294_, lean_object* v_target_2295_){
_start:
{
lean_object* v___x_2296_; uint8_t v___x_2297_; 
v___x_2296_ = lean_array_get_size(v_source_2294_);
v___x_2297_ = lean_nat_dec_lt(v_i_2293_, v___x_2296_);
if (v___x_2297_ == 0)
{
lean_dec_ref(v_source_2294_);
lean_dec(v_i_2293_);
return v_target_2295_;
}
else
{
lean_object* v_es_2298_; lean_object* v___x_2299_; lean_object* v_source_2300_; lean_object* v_target_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v_es_2298_ = lean_array_fget(v_source_2294_, v_i_2293_);
v___x_2299_ = lean_box(0);
v_source_2300_ = lean_array_fset(v_source_2294_, v_i_2293_, v___x_2299_);
v_target_2301_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(v_target_2295_, v_es_2298_);
v___x_2302_ = lean_unsigned_to_nat(1u);
v___x_2303_ = lean_nat_add(v_i_2293_, v___x_2302_);
lean_dec(v_i_2293_);
v_i_2293_ = v___x_2303_;
v_source_2294_ = v_source_2300_;
v_target_2295_ = v_target_2301_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(lean_object* v_data_2305_){
_start:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v_nbuckets_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2306_ = lean_array_get_size(v_data_2305_);
v___x_2307_ = lean_unsigned_to_nat(2u);
v_nbuckets_2308_ = lean_nat_mul(v___x_2306_, v___x_2307_);
v___x_2309_ = lean_unsigned_to_nat(0u);
v___x_2310_ = lean_box(0);
v___x_2311_ = lean_mk_array(v_nbuckets_2308_, v___x_2310_);
v___x_2312_ = lean_array_propagate_mark(v_data_2305_, v___x_2311_);
v___x_2313_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(v___x_2309_, v_data_2305_, v___x_2312_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(lean_object* v_m_2314_, lean_object* v_a_2315_, lean_object* v_b_2316_){
_start:
{
lean_object* v_size_2317_; lean_object* v_buckets_2318_; lean_object* v___x_2319_; uint64_t v___y_2321_; 
v_size_2317_ = lean_ctor_get(v_m_2314_, 0);
v_buckets_2318_ = lean_ctor_get(v_m_2314_, 1);
v___x_2319_ = lean_array_get_size(v_buckets_2318_);
if (lean_obj_tag(v_a_2315_) == 0)
{
uint64_t v___x_2358_; 
v___x_2358_ = 1723ULL;
v___y_2321_ = v___x_2358_;
goto v___jp_2320_;
}
else
{
uint64_t v_hash_2359_; 
v_hash_2359_ = lean_ctor_get_uint64(v_a_2315_, sizeof(void*)*2);
v___y_2321_ = v_hash_2359_;
goto v___jp_2320_;
}
v___jp_2320_:
{
uint64_t v___x_2322_; uint64_t v___x_2323_; uint64_t v_fold_2324_; uint64_t v___x_2325_; uint64_t v___x_2326_; uint64_t v___x_2327_; size_t v___x_2328_; size_t v___x_2329_; size_t v___x_2330_; size_t v___x_2331_; size_t v___x_2332_; lean_object* v_bkt_2333_; uint8_t v___x_2334_; 
v___x_2322_ = 32ULL;
v___x_2323_ = lean_uint64_shift_right(v___y_2321_, v___x_2322_);
v_fold_2324_ = lean_uint64_xor(v___y_2321_, v___x_2323_);
v___x_2325_ = 16ULL;
v___x_2326_ = lean_uint64_shift_right(v_fold_2324_, v___x_2325_);
v___x_2327_ = lean_uint64_xor(v_fold_2324_, v___x_2326_);
v___x_2328_ = lean_uint64_to_usize(v___x_2327_);
v___x_2329_ = lean_usize_of_nat(v___x_2319_);
v___x_2330_ = ((size_t)1ULL);
v___x_2331_ = lean_usize_sub(v___x_2329_, v___x_2330_);
v___x_2332_ = lean_usize_land(v___x_2328_, v___x_2331_);
v_bkt_2333_ = lean_array_uget_borrowed(v_buckets_2318_, v___x_2332_);
v___x_2334_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_2315_, v_bkt_2333_);
if (v___x_2334_ == 0)
{
lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2355_; 
lean_inc_ref(v_buckets_2318_);
lean_inc(v_size_2317_);
v_isSharedCheck_2355_ = !lean_is_exclusive(v_m_2314_);
if (v_isSharedCheck_2355_ == 0)
{
lean_object* v_unused_2356_; lean_object* v_unused_2357_; 
v_unused_2356_ = lean_ctor_get(v_m_2314_, 1);
lean_dec(v_unused_2356_);
v_unused_2357_ = lean_ctor_get(v_m_2314_, 0);
lean_dec(v_unused_2357_);
v___x_2336_ = v_m_2314_;
v_isShared_2337_ = v_isSharedCheck_2355_;
goto v_resetjp_2335_;
}
else
{
lean_dec(v_m_2314_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2355_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2338_; lean_object* v_size_x27_2339_; lean_object* v___x_2340_; lean_object* v_buckets_x27_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; uint8_t v___x_2347_; 
v___x_2338_ = lean_unsigned_to_nat(1u);
v_size_x27_2339_ = lean_nat_add(v_size_2317_, v___x_2338_);
lean_dec(v_size_2317_);
lean_inc(v_bkt_2333_);
v___x_2340_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2340_, 0, v_a_2315_);
lean_ctor_set(v___x_2340_, 1, v_b_2316_);
lean_ctor_set(v___x_2340_, 2, v_bkt_2333_);
v_buckets_x27_2341_ = lean_array_uset(v_buckets_2318_, v___x_2332_, v___x_2340_);
v___x_2342_ = lean_unsigned_to_nat(4u);
v___x_2343_ = lean_nat_mul(v_size_x27_2339_, v___x_2342_);
v___x_2344_ = lean_unsigned_to_nat(3u);
v___x_2345_ = lean_nat_div(v___x_2343_, v___x_2344_);
lean_dec(v___x_2343_);
v___x_2346_ = lean_array_get_size(v_buckets_x27_2341_);
v___x_2347_ = lean_nat_dec_le(v___x_2345_, v___x_2346_);
lean_dec(v___x_2345_);
if (v___x_2347_ == 0)
{
lean_object* v_val_2348_; lean_object* v___x_2350_; 
v_val_2348_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(v_buckets_x27_2341_);
if (v_isShared_2337_ == 0)
{
lean_ctor_set(v___x_2336_, 1, v_val_2348_);
lean_ctor_set(v___x_2336_, 0, v_size_x27_2339_);
v___x_2350_ = v___x_2336_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_size_x27_2339_);
lean_ctor_set(v_reuseFailAlloc_2351_, 1, v_val_2348_);
v___x_2350_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
return v___x_2350_;
}
}
else
{
lean_object* v___x_2353_; 
if (v_isShared_2337_ == 0)
{
lean_ctor_set(v___x_2336_, 1, v_buckets_x27_2341_);
lean_ctor_set(v___x_2336_, 0, v_size_x27_2339_);
v___x_2353_ = v___x_2336_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_size_x27_2339_);
lean_ctor_set(v_reuseFailAlloc_2354_, 1, v_buckets_x27_2341_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
}
else
{
lean_dec(v_b_2316_);
lean_dec(v_a_2315_);
return v_m_2314_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTraceClass(lean_object* v_traceClassName_2363_, uint8_t v_inherited_2364_, lean_object* v_ref_2365_){
_start:
{
lean_object* v___x_2367_; lean_object* v_optionName_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; 
v___x_2367_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v_optionName_2368_ = l_Lean_Name_append(v___x_2367_, v_traceClassName_2363_);
v___x_2369_ = ((lean_object*)(l_Lean_registerTraceClass___closed__0));
v___x_2370_ = ((lean_object*)(l_Lean_registerTraceClass___closed__1));
v___x_2371_ = lean_box(0);
lean_inc_n(v_optionName_2368_, 2);
v___x_2372_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2372_, 0, v_optionName_2368_);
lean_ctor_set(v___x_2372_, 1, v_ref_2365_);
lean_ctor_set(v___x_2372_, 2, v___x_2369_);
lean_ctor_set(v___x_2372_, 3, v___x_2370_);
lean_ctor_set(v___x_2372_, 4, v___x_2371_);
v___x_2373_ = lean_register_option(v_optionName_2368_, v___x_2372_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2389_; 
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2389_ == 0)
{
lean_object* v_unused_2390_; 
v_unused_2390_ = lean_ctor_get(v___x_2373_, 0);
lean_dec(v_unused_2390_);
v___x_2375_ = v___x_2373_;
v_isShared_2376_ = v_isSharedCheck_2389_;
goto v_resetjp_2374_;
}
else
{
lean_dec(v___x_2373_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2389_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
if (v_inherited_2364_ == 0)
{
lean_object* v___x_2377_; lean_object* v___x_2379_; 
lean_dec(v_optionName_2368_);
v___x_2377_ = lean_box(0);
if (v_isShared_2376_ == 0)
{
lean_ctor_set(v___x_2375_, 0, v___x_2377_);
v___x_2379_ = v___x_2375_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v___x_2377_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
return v___x_2379_;
}
}
else
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2387_; 
v___x_2381_ = l_Lean_inheritedTraceOptions;
v___x_2382_ = lean_st_ref_take(v___x_2381_);
v___x_2383_ = lean_box(0);
v___x_2384_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(v___x_2382_, v_optionName_2368_, v___x_2383_);
v___x_2385_ = lean_st_ref_put(v___x_2381_, v___x_2384_);
if (v_isShared_2376_ == 0)
{
lean_ctor_set(v___x_2375_, 0, v___x_2385_);
v___x_2387_ = v___x_2375_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v___x_2385_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
}
else
{
lean_dec(v_optionName_2368_);
return v___x_2373_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTraceClass___boxed(lean_object* v_traceClassName_2391_, lean_object* v_inherited_2392_, lean_object* v_ref_2393_, lean_object* v___y_2394_){
_start:
{
uint8_t v_inherited_boxed_2395_; lean_object* v_res_2396_; 
v_inherited_boxed_2395_ = lean_unbox(v_inherited_2392_);
v_res_2396_ = l_Lean_registerTraceClass(v_traceClassName_2391_, v_inherited_boxed_2395_, v_ref_2393_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0(lean_object* v_00_u03b2_2397_, lean_object* v_m_2398_, lean_object* v_a_2399_, lean_object* v_b_2400_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(v_m_2398_, v_a_2399_, v_b_2400_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0(lean_object* v_00_u03b2_2402_, lean_object* v_data_2403_){
_start:
{
lean_object* v___x_2404_; 
v___x_2404_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(v_data_2403_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2405_, lean_object* v_i_2406_, lean_object* v_source_2407_, lean_object* v_target_2408_){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(v_i_2406_, v_source_2407_, v_target_2408_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2410_, lean_object* v_x_2411_, lean_object* v_x_2412_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(v_x_2411_, v_x_2412_);
return v___x_2413_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8(void){
_start:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2423_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__1));
v___x_2424_ = l_String_toRawSubstring_x27(v___x_2423_);
return v___x_2424_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14(void){
_start:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2430_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13));
v___x_2431_ = l_String_toRawSubstring_x27(v___x_2430_);
return v___x_2431_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19(void){
_start:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2436_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18));
v___x_2437_ = l_String_toRawSubstring_x27(v___x_2436_);
return v___x_2437_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31(void){
_start:
{
lean_object* v___x_2465_; 
v___x_2465_ = l_Array_mkArray0___redArg();
return v___x_2465_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41(void){
_start:
{
lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2491_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40));
v___x_2492_ = l_String_toRawSubstring_x27(v___x_2491_);
return v___x_2492_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58(void){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2527_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57));
v___x_2528_ = l_String_toRawSubstring_x27(v___x_2527_);
return v___x_2528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(lean_object* v_id_2550_, lean_object* v_s_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2570_; lean_object* v___y_2571_; lean_object* v___y_2572_; lean_object* v___y_2573_; lean_object* v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v_msg_2651_; lean_object* v_quotContext_2652_; lean_object* v_currMacroScope_2653_; lean_object* v_ref_2654_; lean_object* v___y_2655_; lean_object* v___x_2701_; lean_object* v___x_2702_; uint8_t v___x_2703_; 
lean_inc(v_s_2551_);
v___x_2701_ = l_Lean_Syntax_getKind(v_s_2551_);
v___x_2702_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49));
v___x_2703_ = lean_name_eq(v___x_2701_, v___x_2702_);
lean_dec(v___x_2701_);
if (v___x_2703_ == 0)
{
lean_object* v_quotContext_2704_; lean_object* v_currMacroScope_2705_; lean_object* v_ref_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; 
v_quotContext_2704_ = lean_ctor_get(v___y_2552_, 1);
v_currMacroScope_2705_ = lean_ctor_get(v___y_2552_, 2);
v_ref_2706_ = lean_ctor_get(v___y_2552_, 5);
v___x_2707_ = l_Lean_SourceInfo_fromRef(v_ref_2706_, v___x_2703_);
v___x_2708_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51));
v___x_2709_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52));
v___x_2710_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5));
lean_inc_n(v___x_2707_, 8);
v___x_2711_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2707_);
lean_ctor_set(v___x_2711_, 1, v___x_2710_);
v___x_2712_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7));
v___x_2713_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8);
v___x_2714_ = lean_box(0);
lean_inc_n(v_currMacroScope_2705_, 3);
lean_inc_n(v_quotContext_2704_, 3);
v___x_2715_ = l_Lean_addMacroScope(v_quotContext_2704_, v___x_2714_, v_currMacroScope_2705_);
v___x_2716_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55));
v___x_2717_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2717_, 0, v___x_2707_);
lean_ctor_set(v___x_2717_, 1, v___x_2713_);
lean_ctor_set(v___x_2717_, 2, v___x_2715_);
lean_ctor_set(v___x_2717_, 3, v___x_2716_);
v___x_2718_ = l_Lean_Syntax_node1(v___x_2707_, v___x_2712_, v___x_2717_);
v___x_2719_ = l_Lean_Syntax_node2(v___x_2707_, v___x_2709_, v___x_2711_, v___x_2718_);
v___x_2720_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56));
v___x_2721_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2707_);
lean_ctor_set(v___x_2721_, 1, v___x_2720_);
v___x_2722_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2723_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58);
v___x_2724_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59));
v___x_2725_ = l_Lean_addMacroScope(v_quotContext_2704_, v___x_2724_, v_currMacroScope_2705_);
v___x_2726_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64));
v___x_2727_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2707_);
lean_ctor_set(v___x_2727_, 1, v___x_2723_);
lean_ctor_set(v___x_2727_, 2, v___x_2725_);
lean_ctor_set(v___x_2727_, 3, v___x_2726_);
v___x_2728_ = l_Lean_Syntax_node1(v___x_2707_, v___x_2722_, v___x_2727_);
v___x_2729_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16));
v___x_2730_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2707_);
lean_ctor_set(v___x_2730_, 1, v___x_2729_);
v___x_2731_ = l_Lean_Syntax_node5(v___x_2707_, v___x_2708_, v___x_2719_, v_s_2551_, v___x_2721_, v___x_2728_, v___x_2730_);
v_msg_2651_ = v___x_2731_;
v_quotContext_2652_ = v_quotContext_2704_;
v_currMacroScope_2653_ = v_currMacroScope_2705_;
v_ref_2654_ = v_ref_2706_;
v___y_2655_ = v___y_2553_;
goto v___jp_2650_;
}
else
{
lean_object* v_quotContext_2732_; lean_object* v_currMacroScope_2733_; lean_object* v_ref_2734_; uint8_t v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; 
v_quotContext_2732_ = lean_ctor_get(v___y_2552_, 1);
v_currMacroScope_2733_ = lean_ctor_get(v___y_2552_, 2);
v_ref_2734_ = lean_ctor_get(v___y_2552_, 5);
v___x_2735_ = 0;
v___x_2736_ = l_Lean_SourceInfo_fromRef(v_ref_2734_, v___x_2735_);
v___x_2737_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66));
v___x_2738_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67));
lean_inc(v___x_2736_);
v___x_2739_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2739_, 0, v___x_2736_);
lean_ctor_set(v___x_2739_, 1, v___x_2738_);
v___x_2740_ = l_Lean_Syntax_node2(v___x_2736_, v___x_2737_, v___x_2739_, v_s_2551_);
lean_inc(v_currMacroScope_2733_);
lean_inc(v_quotContext_2732_);
v_msg_2651_ = v___x_2740_;
v_quotContext_2652_ = v_quotContext_2732_;
v_currMacroScope_2653_ = v_currMacroScope_2733_;
v_ref_2654_ = v_ref_2734_;
v___y_2655_ = v___y_2553_;
goto v___jp_2650_;
}
v___jp_2554_:
{
lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
lean_inc_n(v___y_2560_, 8);
lean_inc(v___y_2559_);
lean_inc_n(v___y_2556_, 30);
v___x_2579_ = l_Lean_Syntax_node5(v___y_2556_, v___y_2559_, v___y_2565_, v___y_2560_, v___y_2560_, v___y_2572_, v___y_2578_);
lean_inc(v___y_2576_);
v___x_2580_ = l_Lean_Syntax_node1(v___y_2556_, v___y_2576_, v___x_2579_);
lean_inc(v___y_2567_);
v___x_2581_ = l_Lean_Syntax_node4(v___y_2556_, v___y_2567_, v___y_2562_, v___y_2560_, v___y_2568_, v___x_2580_);
lean_inc_n(v___y_2561_, 3);
v___x_2582_ = l_Lean_Syntax_node2(v___y_2556_, v___y_2561_, v___x_2581_, v___y_2560_);
v___x_2583_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0));
lean_inc_ref_n(v___y_2566_, 7);
lean_inc_ref_n(v___y_2558_, 7);
lean_inc_ref_n(v___y_2569_, 10);
v___x_2584_ = l_Lean_Name_mkStr4(v___y_2569_, v___y_2558_, v___y_2566_, v___x_2583_);
v___x_2585_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1));
v___x_2586_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2586_, 0, v___y_2556_);
lean_ctor_set(v___x_2586_, 1, v___x_2585_);
v___x_2587_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2));
v___x_2588_ = l_Lean_Name_mkStr4(v___y_2569_, v___y_2558_, v___y_2566_, v___x_2587_);
v___x_2589_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3));
v___x_2590_ = l_Lean_Name_mkStr4(v___y_2569_, v___y_2558_, v___y_2566_, v___x_2589_);
v___x_2591_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4));
v___x_2592_ = l_Lean_Name_mkStr4(v___y_2569_, v___y_2558_, v___y_2566_, v___x_2591_);
v___x_2593_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5));
v___x_2594_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___y_2556_);
lean_ctor_set(v___x_2594_, 1, v___x_2593_);
v___x_2595_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7));
v___x_2596_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8);
v___x_2597_ = lean_box(0);
lean_inc_n(v___y_2575_, 2);
lean_inc_n(v___y_2574_, 2);
v___x_2598_ = l_Lean_addMacroScope(v___y_2574_, v___x_2597_, v___y_2575_);
v___x_2599_ = l_Lean_Name_mkStr1(v___y_2569_);
v___x_2600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
lean_inc_n(v___y_2577_, 2);
v___x_2601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2600_);
lean_ctor_set(v___x_2601_, 1, v___y_2577_);
v___x_2602_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2602_, 0, v___y_2556_);
lean_ctor_set(v___x_2602_, 1, v___x_2596_);
lean_ctor_set(v___x_2602_, 2, v___x_2598_);
lean_ctor_set(v___x_2602_, 3, v___x_2601_);
v___x_2603_ = l_Lean_Syntax_node1(v___y_2556_, v___x_2595_, v___x_2602_);
v___x_2604_ = l_Lean_Syntax_node2(v___y_2556_, v___x_2592_, v___x_2594_, v___x_2603_);
v___x_2605_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9));
v___x_2606_ = l_Lean_Name_mkStr4(v___y_2569_, v___y_2558_, v___y_2566_, v___x_2605_);
v___x_2607_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10));
v___x_2608_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2608_, 0, v___y_2556_);
lean_ctor_set(v___x_2608_, 1, v___x_2607_);
v___x_2609_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11));
v___x_2610_ = l_Lean_Name_mkStr4(v___y_2569_, v___y_2558_, v___y_2566_, v___x_2609_);
v___x_2611_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12));
v___x_2612_ = l_Lean_Name_mkStr4(v___y_2569_, v___y_2558_, v___y_2566_, v___x_2611_);
v___x_2613_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14);
v___x_2614_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15));
v___x_2615_ = l_Lean_Name_mkStr2(v___y_2569_, v___x_2614_);
lean_inc(v___x_2615_);
v___x_2616_ = l_Lean_addMacroScope(v___y_2574_, v___x_2615_, v___y_2575_);
v___x_2617_ = lean_box(0);
v___x_2618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2615_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
v___x_2619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
lean_ctor_set(v___x_2619_, 1, v___y_2577_);
v___x_2620_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2620_, 0, v___y_2556_);
lean_ctor_set(v___x_2620_, 1, v___x_2613_);
lean_ctor_set(v___x_2620_, 2, v___x_2616_);
lean_ctor_set(v___x_2620_, 3, v___x_2619_);
lean_inc(v___y_2573_);
lean_inc_n(v___y_2555_, 4);
v___x_2621_ = l_Lean_Syntax_node1(v___y_2556_, v___y_2555_, v___y_2573_);
lean_inc(v___x_2612_);
v___x_2622_ = l_Lean_Syntax_node2(v___y_2556_, v___x_2612_, v___x_2620_, v___x_2621_);
lean_inc(v___x_2610_);
v___x_2623_ = l_Lean_Syntax_node1(v___y_2556_, v___x_2610_, v___x_2622_);
v___x_2624_ = l_Lean_Syntax_node2(v___y_2556_, v___x_2606_, v___x_2608_, v___x_2623_);
v___x_2625_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16));
v___x_2626_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___y_2556_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
v___x_2627_ = l_Lean_Syntax_node3(v___y_2556_, v___x_2590_, v___x_2604_, v___x_2624_, v___x_2626_);
v___x_2628_ = l_Lean_Syntax_node2(v___y_2556_, v___x_2588_, v___y_2560_, v___x_2627_);
v___x_2629_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17));
v___x_2630_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2630_, 0, v___y_2556_);
lean_ctor_set(v___x_2630_, 1, v___x_2629_);
v___x_2631_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19);
v___x_2632_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20));
v___x_2633_ = l_Lean_Name_mkStr2(v___y_2569_, v___x_2632_);
lean_inc(v___x_2633_);
v___x_2634_ = l_Lean_addMacroScope(v___y_2574_, v___x_2633_, v___y_2575_);
v___x_2635_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2633_);
lean_ctor_set(v___x_2635_, 1, v___x_2617_);
v___x_2636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2636_, 0, v___x_2635_);
lean_ctor_set(v___x_2636_, 1, v___y_2577_);
v___x_2637_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2637_, 0, v___y_2556_);
lean_ctor_set(v___x_2637_, 1, v___x_2631_);
lean_ctor_set(v___x_2637_, 2, v___x_2634_);
lean_ctor_set(v___x_2637_, 3, v___x_2636_);
v___x_2638_ = l_Lean_Syntax_node2(v___y_2556_, v___y_2555_, v___y_2573_, v___y_2563_);
v___x_2639_ = l_Lean_Syntax_node2(v___y_2556_, v___x_2612_, v___x_2637_, v___x_2638_);
v___x_2640_ = l_Lean_Syntax_node1(v___y_2556_, v___x_2610_, v___x_2639_);
v___x_2641_ = l_Lean_Syntax_node2(v___y_2556_, v___y_2561_, v___x_2640_, v___y_2560_);
v___x_2642_ = l_Lean_Syntax_node1(v___y_2556_, v___y_2555_, v___x_2641_);
lean_inc_n(v___y_2571_, 2);
v___x_2643_ = l_Lean_Syntax_node1(v___y_2556_, v___y_2571_, v___x_2642_);
v___x_2644_ = l_Lean_Syntax_node6(v___y_2556_, v___x_2584_, v___x_2586_, v___x_2628_, v___x_2630_, v___x_2643_, v___y_2560_, v___y_2560_);
v___x_2645_ = l_Lean_Syntax_node2(v___y_2556_, v___y_2561_, v___x_2644_, v___y_2560_);
v___x_2646_ = l_Lean_Syntax_node2(v___y_2556_, v___y_2555_, v___x_2582_, v___x_2645_);
v___x_2647_ = l_Lean_Syntax_node1(v___y_2556_, v___y_2571_, v___x_2646_);
lean_inc(v___y_2557_);
v___x_2648_ = l_Lean_Syntax_node2(v___y_2556_, v___y_2557_, v___y_2570_, v___x_2647_);
v___x_2649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2648_);
lean_ctor_set(v___x_2649_, 1, v___y_2564_);
return v___x_2649_;
}
v___jp_2650_:
{
uint8_t v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; 
v___x_2656_ = 0;
v___x_2657_ = l_Lean_SourceInfo_fromRef(v_ref_2654_, v___x_2656_);
v___x_2658_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0));
v___x_2659_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1));
v___x_2660_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__0));
v___x_2661_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22));
v___x_2662_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23));
lean_inc_n(v___x_2657_, 7);
v___x_2663_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2663_, 0, v___x_2657_);
lean_ctor_set(v___x_2663_, 1, v___x_2662_);
v___x_2664_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25));
v___x_2665_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2666_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27));
v___x_2667_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29));
v___x_2668_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30));
v___x_2669_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2669_, 0, v___x_2657_);
lean_ctor_set(v___x_2669_, 1, v___x_2668_);
v___x_2670_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31);
v___x_2671_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2657_);
lean_ctor_set(v___x_2671_, 1, v___x_2665_);
lean_ctor_set(v___x_2671_, 2, v___x_2670_);
v___x_2672_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33));
lean_inc_ref(v___x_2671_);
v___x_2673_ = l_Lean_Syntax_node1(v___x_2657_, v___x_2672_, v___x_2671_);
v___x_2674_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35));
v___x_2675_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37));
v___x_2676_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39));
v___x_2677_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41);
v___x_2678_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42));
lean_inc(v_currMacroScope_2653_);
lean_inc(v_quotContext_2652_);
v___x_2679_ = l_Lean_addMacroScope(v_quotContext_2652_, v___x_2678_, v_currMacroScope_2653_);
v___x_2680_ = lean_box(0);
v___x_2681_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2657_);
lean_ctor_set(v___x_2681_, 1, v___x_2677_);
lean_ctor_set(v___x_2681_, 2, v___x_2679_);
lean_ctor_set(v___x_2681_, 3, v___x_2680_);
lean_inc_ref(v___x_2681_);
v___x_2682_ = l_Lean_Syntax_node1(v___x_2657_, v___x_2676_, v___x_2681_);
v___x_2683_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43));
v___x_2684_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2684_, 0, v___x_2657_);
lean_ctor_set(v___x_2684_, 1, v___x_2683_);
v___x_2685_ = l_Lean_Syntax_getId(v_id_2550_);
v___x_2686_ = l_Lean_Name_eraseMacroScopes(v___x_2685_);
lean_dec(v___x_2685_);
lean_inc(v___x_2686_);
v___x_2687_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_2680_, v___x_2686_);
if (lean_obj_tag(v___x_2687_) == 0)
{
lean_object* v___x_2688_; 
v___x_2688_ = l_Lean_quoteNameMk(v___x_2686_);
v___y_2555_ = v___x_2665_;
v___y_2556_ = v___x_2657_;
v___y_2557_ = v___x_2661_;
v___y_2558_ = v___x_2659_;
v___y_2559_ = v___x_2675_;
v___y_2560_ = v___x_2671_;
v___y_2561_ = v___x_2666_;
v___y_2562_ = v___x_2669_;
v___y_2563_ = v_msg_2651_;
v___y_2564_ = v___y_2655_;
v___y_2565_ = v___x_2682_;
v___y_2566_ = v___x_2660_;
v___y_2567_ = v___x_2667_;
v___y_2568_ = v___x_2673_;
v___y_2569_ = v___x_2658_;
v___y_2570_ = v___x_2663_;
v___y_2571_ = v___x_2664_;
v___y_2572_ = v___x_2684_;
v___y_2573_ = v___x_2681_;
v___y_2574_ = v_quotContext_2652_;
v___y_2575_ = v_currMacroScope_2653_;
v___y_2576_ = v___x_2674_;
v___y_2577_ = v___x_2680_;
v___y_2578_ = v___x_2688_;
goto v___jp_2554_;
}
else
{
lean_object* v_val_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; 
lean_dec(v___x_2686_);
v_val_2689_ = lean_ctor_get(v___x_2687_, 0);
lean_inc(v_val_2689_);
lean_dec_ref_known(v___x_2687_, 1);
v___x_2690_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45));
v___x_2691_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46));
v___x_2692_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47));
v___x_2693_ = lean_string_intercalate(v___x_2692_, v_val_2689_);
v___x_2694_ = lean_string_append(v___x_2691_, v___x_2693_);
lean_dec_ref(v___x_2693_);
v___x_2695_ = lean_box(2);
v___x_2696_ = l_Lean_Syntax_mkNameLit(v___x_2694_, v___x_2695_);
v___x_2697_ = lean_unsigned_to_nat(1u);
v___x_2698_ = lean_mk_empty_array_with_capacity(v___x_2697_);
v___x_2699_ = lean_array_push(v___x_2698_, v___x_2696_);
v___x_2700_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2695_);
lean_ctor_set(v___x_2700_, 1, v___x_2690_);
lean_ctor_set(v___x_2700_, 2, v___x_2699_);
v___y_2555_ = v___x_2665_;
v___y_2556_ = v___x_2657_;
v___y_2557_ = v___x_2661_;
v___y_2558_ = v___x_2659_;
v___y_2559_ = v___x_2675_;
v___y_2560_ = v___x_2671_;
v___y_2561_ = v___x_2666_;
v___y_2562_ = v___x_2669_;
v___y_2563_ = v_msg_2651_;
v___y_2564_ = v___y_2655_;
v___y_2565_ = v___x_2682_;
v___y_2566_ = v___x_2660_;
v___y_2567_ = v___x_2667_;
v___y_2568_ = v___x_2673_;
v___y_2569_ = v___x_2658_;
v___y_2570_ = v___x_2663_;
v___y_2571_ = v___x_2664_;
v___y_2572_ = v___x_2684_;
v___y_2573_ = v___x_2681_;
v___y_2574_ = v_quotContext_2652_;
v___y_2575_ = v_currMacroScope_2653_;
v___y_2576_ = v___x_2674_;
v___y_2577_ = v___x_2680_;
v___y_2578_ = v___x_2700_;
goto v___jp_2554_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___boxed(lean_object* v_id_2741_, lean_object* v_s_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(v_id_2741_, v_s_2742_, v___y_2743_, v___y_2744_);
lean_dec_ref(v___y_2743_);
lean_dec(v_id_2741_);
return v_res_2745_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1(lean_object* v_x_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v___x_2803_; uint8_t v___x_2804_; 
v___x_2803_ = ((lean_object*)(l_Lean_doElemTrace_x5b___x5d_____00__closed__1));
lean_inc(v_x_2800_);
v___x_2804_ = l_Lean_Syntax_isOfKind(v_x_2800_, v___x_2803_);
if (v___x_2804_ == 0)
{
lean_object* v___x_2805_; lean_object* v___x_2806_; 
lean_dec(v_x_2800_);
v___x_2805_ = lean_box(1);
v___x_2806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2805_);
lean_ctor_set(v___x_2806_, 1, v___y_2802_);
return v___x_2806_;
}
else
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v_a_2812_; lean_object* v_a_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2820_; 
v___x_2807_ = lean_unsigned_to_nat(1u);
v___x_2808_ = l_Lean_Syntax_getArg(v_x_2800_, v___x_2807_);
v___x_2809_ = lean_unsigned_to_nat(3u);
v___x_2810_ = l_Lean_Syntax_getArg(v_x_2800_, v___x_2809_);
lean_dec(v_x_2800_);
v___x_2811_ = l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(v___x_2808_, v___x_2810_, v___y_2801_, v___y_2802_);
lean_dec(v___x_2808_);
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
v_a_2813_ = lean_ctor_get(v___x_2811_, 1);
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2815_ = v___x_2811_;
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_a_2813_);
lean_inc(v_a_2812_);
lean_dec(v___x_2811_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2818_; 
if (v_isShared_2816_ == 0)
{
v___x_2818_ = v___x_2815_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_a_2812_);
lean_ctor_set(v_reuseFailAlloc_2819_, 1, v_a_2813_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1___boxed(lean_object* v_x_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_){
_start:
{
lean_object* v_res_2824_; 
v_res_2824_ = l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1(v_x_2821_, v___y_2822_, v___y_2823_);
lean_dec_ref(v___y_2822_);
return v_res_2824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(lean_object* v_inst_2825_, lean_object* v_inst_2826_, lean_object* v_inst_2827_, lean_object* v_inst_2828_, lean_object* v_always_2829_, lean_object* v_inst_2830_, lean_object* v_cls_2831_, uint8_t v_collapsed_2832_, lean_object* v_tag_2833_, lean_object* v_opts_2834_, uint8_t v_clsEnabled_2835_, lean_object* v_oldTraces_2836_, lean_object* v_ref_2837_, lean_object* v_msg_2838_, lean_object* v_resStartStop_2839_){
_start:
{
lean_object* v___x_2840_; lean_object* v_toBind_2841_; lean_object* v___x_2842_; lean_object* v_snd_2843_; lean_object* v_fst_2844_; lean_object* v_fst_2845_; lean_object* v_snd_2846_; lean_object* v___f_2847_; lean_object* v___f_2848_; lean_object* v_data_2850_; lean_object* v___x_2853_; lean_object* v___x_2854_; uint8_t v___y_2865_; double v___y_2870_; uint8_t v___x_2875_; 
v___x_2840_ = l_Lean_KVMap_instValueBool;
v_toBind_2841_ = lean_ctor_get(v_inst_2825_, 1);
lean_inc(v_toBind_2841_);
v___x_2842_ = l_instMonadExceptOfMonadExceptOf___redArg(v_always_2829_);
v_snd_2843_ = lean_ctor_get(v_resStartStop_2839_, 1);
lean_inc(v_snd_2843_);
v_fst_2844_ = lean_ctor_get(v_resStartStop_2839_, 0);
lean_inc_n(v_fst_2844_, 2);
lean_dec_ref(v_resStartStop_2839_);
v_fst_2845_ = lean_ctor_get(v_snd_2843_, 0);
lean_inc(v_fst_2845_);
v_snd_2846_ = lean_ctor_get(v_snd_2843_, 1);
lean_inc(v_snd_2846_);
lean_dec(v_snd_2843_);
lean_inc_ref(v_oldTraces_2836_);
v___f_2847_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2847_, 0, v_oldTraces_2836_);
lean_inc_ref(v_inst_2825_);
v___f_2848_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2848_, 0, v_inst_2825_);
lean_closure_set(v___f_2848_, 1, v___x_2842_);
lean_closure_set(v___f_2848_, 2, v_fst_2844_);
v___x_2853_ = l_Lean_trace_profiler;
v___x_2854_ = l_Lean_Option_get___redArg(v___x_2840_, v_opts_2834_, v___x_2853_);
v___x_2875_ = lean_unbox(v___x_2854_);
if (v___x_2875_ == 0)
{
uint8_t v___x_2876_; 
v___x_2876_ = lean_unbox(v___x_2854_);
v___y_2865_ = v___x_2876_;
goto v___jp_2864_;
}
else
{
lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; uint8_t v___x_2880_; 
v___x_2877_ = l_Lean_KVMap_instValueNat;
v___x_2878_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2879_ = l_Lean_Option_get___redArg(v___x_2840_, v_opts_2834_, v___x_2878_);
v___x_2880_ = lean_unbox(v___x_2879_);
lean_dec(v___x_2879_);
if (v___x_2880_ == 0)
{
lean_object* v___x_2881_; lean_object* v___x_2882_; double v___x_2883_; double v___x_2884_; double v___x_2885_; 
v___x_2881_ = l_Lean_trace_profiler_threshold;
v___x_2882_ = l_Lean_Option_get___redArg(v___x_2877_, v_opts_2834_, v___x_2881_);
v___x_2883_ = lean_float_of_nat(v___x_2882_);
v___x_2884_ = lean_float_once(&l_Lean_trace_profiler_threshold_unitAdjusted___closed__0, &l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once, _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0);
v___x_2885_ = lean_float_div(v___x_2883_, v___x_2884_);
v___y_2870_ = v___x_2885_;
goto v___jp_2869_;
}
else
{
lean_object* v___x_2886_; lean_object* v___x_2887_; double v___x_2888_; 
v___x_2886_ = l_Lean_trace_profiler_threshold;
v___x_2887_ = l_Lean_Option_get___redArg(v___x_2877_, v_opts_2834_, v___x_2886_);
v___x_2888_ = lean_float_of_nat(v___x_2887_);
v___y_2870_ = v___x_2888_;
goto v___jp_2869_;
}
}
v___jp_2849_:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(v_inst_2825_, v_inst_2826_, v_inst_2827_, v_inst_2828_, v_oldTraces_2836_, v_data_2850_, v_ref_2837_, v_msg_2838_);
v___x_2852_ = lean_apply_4(v_toBind_2841_, lean_box(0), lean_box(0), v___x_2851_, v___f_2848_);
return v___x_2852_;
}
v___jp_2855_:
{
lean_object* v_result_2856_; lean_object* v___x_2857_; double v___x_2858_; lean_object* v_data_2859_; uint8_t v___x_2860_; 
v_result_2856_ = lean_apply_1(v_inst_2830_, v_fst_2844_);
v___x_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2857_, 0, v_result_2856_);
v___x_2858_ = lean_float_once(&l_Lean_addTrace___redArg___lam__0___closed__0, &l_Lean_addTrace___redArg___lam__0___closed__0_once, _init_l_Lean_addTrace___redArg___lam__0___closed__0);
lean_inc_ref(v_tag_2833_);
lean_inc_ref(v___x_2857_);
lean_inc(v_cls_2831_);
v_data_2859_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2859_, 0, v_cls_2831_);
lean_ctor_set(v_data_2859_, 1, v___x_2857_);
lean_ctor_set(v_data_2859_, 2, v_tag_2833_);
lean_ctor_set_float(v_data_2859_, sizeof(void*)*3, v___x_2858_);
lean_ctor_set_float(v_data_2859_, sizeof(void*)*3 + 8, v___x_2858_);
lean_ctor_set_uint8(v_data_2859_, sizeof(void*)*3 + 16, v_collapsed_2832_);
v___x_2860_ = lean_unbox(v___x_2854_);
lean_dec(v___x_2854_);
if (v___x_2860_ == 0)
{
lean_dec_ref_known(v___x_2857_, 1);
lean_dec(v_snd_2846_);
lean_dec(v_fst_2845_);
lean_dec_ref(v_tag_2833_);
lean_dec(v_cls_2831_);
v_data_2850_ = v_data_2859_;
goto v___jp_2849_;
}
else
{
lean_object* v_data_2861_; double v___x_2862_; double v___x_2863_; 
lean_dec_ref_known(v_data_2859_, 3);
v_data_2861_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2861_, 0, v_cls_2831_);
lean_ctor_set(v_data_2861_, 1, v___x_2857_);
lean_ctor_set(v_data_2861_, 2, v_tag_2833_);
v___x_2862_ = lean_unbox_float(v_fst_2845_);
lean_dec(v_fst_2845_);
lean_ctor_set_float(v_data_2861_, sizeof(void*)*3, v___x_2862_);
v___x_2863_ = lean_unbox_float(v_snd_2846_);
lean_dec(v_snd_2846_);
lean_ctor_set_float(v_data_2861_, sizeof(void*)*3 + 8, v___x_2863_);
lean_ctor_set_uint8(v_data_2861_, sizeof(void*)*3 + 16, v_collapsed_2832_);
v_data_2850_ = v_data_2861_;
goto v___jp_2849_;
}
}
v___jp_2864_:
{
if (v_clsEnabled_2835_ == 0)
{
if (v___y_2865_ == 0)
{
lean_object* v_modifyTraceState_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; 
lean_dec(v___x_2854_);
lean_dec(v_snd_2846_);
lean_dec(v_fst_2845_);
lean_dec(v_fst_2844_);
lean_dec_ref(v_msg_2838_);
lean_dec(v_ref_2837_);
lean_dec_ref(v_oldTraces_2836_);
lean_dec_ref(v_tag_2833_);
lean_dec(v_cls_2831_);
lean_dec_ref(v_inst_2830_);
lean_dec(v_inst_2828_);
lean_dec_ref(v_inst_2827_);
lean_dec_ref(v_inst_2825_);
v_modifyTraceState_2866_ = lean_ctor_get(v_inst_2826_, 0);
lean_inc(v_modifyTraceState_2866_);
lean_dec_ref(v_inst_2826_);
v___x_2867_ = lean_apply_1(v_modifyTraceState_2866_, v___f_2847_);
v___x_2868_ = lean_apply_4(v_toBind_2841_, lean_box(0), lean_box(0), v___x_2867_, v___f_2848_);
return v___x_2868_;
}
else
{
lean_dec_ref(v___f_2847_);
goto v___jp_2855_;
}
}
else
{
lean_dec_ref(v___f_2847_);
goto v___jp_2855_;
}
}
v___jp_2869_:
{
double v___x_2871_; double v___x_2872_; double v___x_2873_; uint8_t v___x_2874_; 
v___x_2871_ = lean_unbox_float(v_snd_2846_);
v___x_2872_ = lean_unbox_float(v_fst_2845_);
v___x_2873_ = lean_float_sub(v___x_2871_, v___x_2872_);
v___x_2874_ = lean_float_decLt(v___y_2870_, v___x_2873_);
v___y_2865_ = v___x_2874_;
goto v___jp_2864_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg___boxed(lean_object* v_inst_2889_, lean_object* v_inst_2890_, lean_object* v_inst_2891_, lean_object* v_inst_2892_, lean_object* v_always_2893_, lean_object* v_inst_2894_, lean_object* v_cls_2895_, lean_object* v_collapsed_2896_, lean_object* v_tag_2897_, lean_object* v_opts_2898_, lean_object* v_clsEnabled_2899_, lean_object* v_oldTraces_2900_, lean_object* v_ref_2901_, lean_object* v_msg_2902_, lean_object* v_resStartStop_2903_){
_start:
{
uint8_t v_collapsed_boxed_2904_; uint8_t v_clsEnabled_boxed_2905_; lean_object* v_res_2906_; 
v_collapsed_boxed_2904_ = lean_unbox(v_collapsed_2896_);
v_clsEnabled_boxed_2905_ = lean_unbox(v_clsEnabled_2899_);
v_res_2906_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2889_, v_inst_2890_, v_inst_2891_, v_inst_2892_, v_always_2893_, v_inst_2894_, v_cls_2895_, v_collapsed_boxed_2904_, v_tag_2897_, v_opts_2898_, v_clsEnabled_boxed_2905_, v_oldTraces_2900_, v_ref_2901_, v_msg_2902_, v_resStartStop_2903_);
lean_dec_ref(v_opts_2898_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback(lean_object* v_00_u03b1_2907_, lean_object* v_m_2908_, lean_object* v_inst_2909_, lean_object* v_inst_2910_, lean_object* v_00_u03b5_2911_, lean_object* v_inst_2912_, lean_object* v_inst_2913_, lean_object* v_always_2914_, lean_object* v_inst_2915_, lean_object* v_cls_2916_, uint8_t v_collapsed_2917_, lean_object* v_tag_2918_, lean_object* v_opts_2919_, uint8_t v_clsEnabled_2920_, lean_object* v_oldTraces_2921_, lean_object* v_ref_2922_, lean_object* v_msg_2923_, lean_object* v_resStartStop_2924_){
_start:
{
lean_object* v___x_2925_; 
v___x_2925_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2909_, v_inst_2910_, v_inst_2912_, v_inst_2913_, v_always_2914_, v_inst_2915_, v_cls_2916_, v_collapsed_2917_, v_tag_2918_, v_opts_2919_, v_clsEnabled_2920_, v_oldTraces_2921_, v_ref_2922_, v_msg_2923_, v_resStartStop_2924_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___boxed(lean_object** _args){
lean_object* v_00_u03b1_2926_ = _args[0];
lean_object* v_m_2927_ = _args[1];
lean_object* v_inst_2928_ = _args[2];
lean_object* v_inst_2929_ = _args[3];
lean_object* v_00_u03b5_2930_ = _args[4];
lean_object* v_inst_2931_ = _args[5];
lean_object* v_inst_2932_ = _args[6];
lean_object* v_always_2933_ = _args[7];
lean_object* v_inst_2934_ = _args[8];
lean_object* v_cls_2935_ = _args[9];
lean_object* v_collapsed_2936_ = _args[10];
lean_object* v_tag_2937_ = _args[11];
lean_object* v_opts_2938_ = _args[12];
lean_object* v_clsEnabled_2939_ = _args[13];
lean_object* v_oldTraces_2940_ = _args[14];
lean_object* v_ref_2941_ = _args[15];
lean_object* v_msg_2942_ = _args[16];
lean_object* v_resStartStop_2943_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_2944_; uint8_t v_clsEnabled_boxed_2945_; lean_object* v_res_2946_; 
v_collapsed_boxed_2944_ = lean_unbox(v_collapsed_2936_);
v_clsEnabled_boxed_2945_ = lean_unbox(v_clsEnabled_2939_);
v_res_2946_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback(v_00_u03b1_2926_, v_m_2927_, v_inst_2928_, v_inst_2929_, v_00_u03b5_2930_, v_inst_2931_, v_inst_2932_, v_always_2933_, v_inst_2934_, v_cls_2935_, v_collapsed_boxed_2944_, v_tag_2937_, v_opts_2938_, v_clsEnabled_boxed_2945_, v_oldTraces_2940_, v_ref_2941_, v_msg_2942_, v_resStartStop_2943_);
lean_dec_ref(v_opts_2938_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__0(lean_object* v_inst_2947_, lean_object* v_____do__lift_2948_){
_start:
{
lean_object* v___x_2949_; 
v___x_2949_ = lean_apply_1(v_inst_2947_, v_____do__lift_2948_);
return v___x_2949_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1(lean_object* v_inst_2950_, lean_object* v_inst_2951_, lean_object* v_inst_2952_, lean_object* v_inst_2953_, lean_object* v_always_2954_, lean_object* v_inst_2955_, lean_object* v_cls_2956_, uint8_t v_collapsed_2957_, lean_object* v_tag_2958_, lean_object* v_opts_2959_, uint8_t v_clsEnabled_2960_, lean_object* v_oldTraces_2961_, lean_object* v_ref_2962_, lean_object* v_msg_2963_, lean_object* v_resStartStop_2964_){
_start:
{
lean_object* v___x_2965_; 
v___x_2965_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2950_, v_inst_2951_, v_inst_2952_, v_inst_2953_, v_always_2954_, v_inst_2955_, v_cls_2956_, v_collapsed_2957_, v_tag_2958_, v_opts_2959_, v_clsEnabled_2960_, v_oldTraces_2961_, v_ref_2962_, v_msg_2963_, v_resStartStop_2964_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1___boxed(lean_object* v_inst_2966_, lean_object* v_inst_2967_, lean_object* v_inst_2968_, lean_object* v_inst_2969_, lean_object* v_always_2970_, lean_object* v_inst_2971_, lean_object* v_cls_2972_, lean_object* v_collapsed_2973_, lean_object* v_tag_2974_, lean_object* v_opts_2975_, lean_object* v_clsEnabled_2976_, lean_object* v_oldTraces_2977_, lean_object* v_ref_2978_, lean_object* v_msg_2979_, lean_object* v_resStartStop_2980_){
_start:
{
uint8_t v_collapsed_boxed_2981_; uint8_t v_clsEnabled_boxed_2982_; lean_object* v_res_2983_; 
v_collapsed_boxed_2981_ = lean_unbox(v_collapsed_2973_);
v_clsEnabled_boxed_2982_ = lean_unbox(v_clsEnabled_2976_);
v_res_2983_ = l_Lean_withTraceNodeBefore___redArg___lam__1(v_inst_2966_, v_inst_2967_, v_inst_2968_, v_inst_2969_, v_always_2970_, v_inst_2971_, v_cls_2972_, v_collapsed_boxed_2981_, v_tag_2974_, v_opts_2975_, v_clsEnabled_boxed_2982_, v_oldTraces_2977_, v_ref_2978_, v_msg_2979_, v_resStartStop_2980_);
lean_dec_ref(v_opts_2975_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10(lean_object* v_always_2984_, lean_object* v_inst_2985_, lean_object* v_inst_2986_, lean_object* v_inst_2987_, lean_object* v_inst_2988_, lean_object* v_inst_2989_, lean_object* v_cls_2990_, uint8_t v_collapsed_2991_, lean_object* v_tag_2992_, lean_object* v_opts_2993_, uint8_t v_clsEnabled_2994_, lean_object* v_oldTraces_2995_, lean_object* v_ref_2996_, lean_object* v_toPure_2997_, lean_object* v_toBind_2998_, lean_object* v_k_2999_, lean_object* v___x_3000_, lean_object* v_inst_3001_, lean_object* v_msg_3002_){
_start:
{
lean_object* v_tryCatch_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___f_3006_; lean_object* v___f_3007_; lean_object* v___f_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; uint8_t v___x_3013_; 
v_tryCatch_3003_ = lean_ctor_get(v_always_2984_, 1);
lean_inc(v_tryCatch_3003_);
v___x_3004_ = lean_box(v_collapsed_2991_);
v___x_3005_ = lean_box(v_clsEnabled_2994_);
lean_inc_ref(v_opts_2993_);
v___f_3006_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__1___boxed), 15, 14);
lean_closure_set(v___f_3006_, 0, v_inst_2985_);
lean_closure_set(v___f_3006_, 1, v_inst_2986_);
lean_closure_set(v___f_3006_, 2, v_inst_2987_);
lean_closure_set(v___f_3006_, 3, v_inst_2988_);
lean_closure_set(v___f_3006_, 4, v_always_2984_);
lean_closure_set(v___f_3006_, 5, v_inst_2989_);
lean_closure_set(v___f_3006_, 6, v_cls_2990_);
lean_closure_set(v___f_3006_, 7, v___x_3004_);
lean_closure_set(v___f_3006_, 8, v_tag_2992_);
lean_closure_set(v___f_3006_, 9, v_opts_2993_);
lean_closure_set(v___f_3006_, 10, v___x_3005_);
lean_closure_set(v___f_3006_, 11, v_oldTraces_2995_);
lean_closure_set(v___f_3006_, 12, v_ref_2996_);
lean_closure_set(v___f_3006_, 13, v_msg_3002_);
lean_inc_n(v_toPure_2997_, 2);
v___f_3007_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3007_, 0, v_toPure_2997_);
v___f_3008_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3008_, 0, v_toPure_2997_);
lean_inc(v_toBind_2998_);
v___x_3009_ = lean_apply_4(v_toBind_2998_, lean_box(0), lean_box(0), v_k_2999_, v___f_3008_);
v___x_3010_ = lean_apply_3(v_tryCatch_3003_, lean_box(0), v___x_3009_, v___f_3007_);
v___x_3011_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3012_ = l_Lean_Option_get___redArg(v___x_3000_, v_opts_2993_, v___x_3011_);
lean_dec_ref(v_opts_2993_);
v___x_3013_ = lean_unbox(v___x_3012_);
lean_dec(v___x_3012_);
if (v___x_3013_ == 0)
{
lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___f_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; 
v___x_3014_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_3015_ = lean_apply_2(v_inst_3001_, lean_box(0), v___x_3014_);
lean_inc(v___x_3015_);
lean_inc_n(v_toBind_2998_, 2);
v___f_3016_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__5), 5, 4);
lean_closure_set(v___f_3016_, 0, v_toPure_2997_);
lean_closure_set(v___f_3016_, 1, v_toBind_2998_);
lean_closure_set(v___f_3016_, 2, v___x_3015_);
lean_closure_set(v___f_3016_, 3, v___x_3010_);
v___x_3017_ = lean_apply_4(v_toBind_2998_, lean_box(0), lean_box(0), v___x_3015_, v___f_3016_);
v___x_3018_ = lean_apply_4(v_toBind_2998_, lean_box(0), lean_box(0), v___x_3017_, v___f_3006_);
return v___x_3018_;
}
else
{
lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___f_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3019_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_3020_ = lean_apply_2(v_inst_3001_, lean_box(0), v___x_3019_);
lean_inc(v___x_3020_);
lean_inc_n(v_toBind_2998_, 2);
v___f_3021_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__8), 5, 4);
lean_closure_set(v___f_3021_, 0, v_toPure_2997_);
lean_closure_set(v___f_3021_, 1, v_toBind_2998_);
lean_closure_set(v___f_3021_, 2, v___x_3020_);
lean_closure_set(v___f_3021_, 3, v___x_3010_);
v___x_3022_ = lean_apply_4(v_toBind_2998_, lean_box(0), lean_box(0), v___x_3020_, v___f_3021_);
v___x_3023_ = lean_apply_4(v_toBind_2998_, lean_box(0), lean_box(0), v___x_3022_, v___f_3006_);
return v___x_3023_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10___boxed(lean_object** _args){
lean_object* v_always_3024_ = _args[0];
lean_object* v_inst_3025_ = _args[1];
lean_object* v_inst_3026_ = _args[2];
lean_object* v_inst_3027_ = _args[3];
lean_object* v_inst_3028_ = _args[4];
lean_object* v_inst_3029_ = _args[5];
lean_object* v_cls_3030_ = _args[6];
lean_object* v_collapsed_3031_ = _args[7];
lean_object* v_tag_3032_ = _args[8];
lean_object* v_opts_3033_ = _args[9];
lean_object* v_clsEnabled_3034_ = _args[10];
lean_object* v_oldTraces_3035_ = _args[11];
lean_object* v_ref_3036_ = _args[12];
lean_object* v_toPure_3037_ = _args[13];
lean_object* v_toBind_3038_ = _args[14];
lean_object* v_k_3039_ = _args[15];
lean_object* v___x_3040_ = _args[16];
lean_object* v_inst_3041_ = _args[17];
lean_object* v_msg_3042_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_3043_; uint8_t v_clsEnabled_boxed_3044_; lean_object* v_res_3045_; 
v_collapsed_boxed_3043_ = lean_unbox(v_collapsed_3031_);
v_clsEnabled_boxed_3044_ = lean_unbox(v_clsEnabled_3034_);
v_res_3045_ = l_Lean_withTraceNodeBefore___redArg___lam__10(v_always_3024_, v_inst_3025_, v_inst_3026_, v_inst_3027_, v_inst_3028_, v_inst_3029_, v_cls_3030_, v_collapsed_boxed_3043_, v_tag_3032_, v_opts_3033_, v_clsEnabled_boxed_3044_, v_oldTraces_3035_, v_ref_3036_, v_toPure_3037_, v_toBind_3038_, v_k_3039_, v___x_3040_, v_inst_3041_, v_msg_3042_);
return v_res_3045_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3(lean_object* v_always_3046_, lean_object* v_inst_3047_, lean_object* v_inst_3048_, lean_object* v_inst_3049_, lean_object* v_inst_3050_, lean_object* v_inst_3051_, lean_object* v_cls_3052_, uint8_t v_collapsed_3053_, lean_object* v_tag_3054_, lean_object* v_opts_3055_, uint8_t v_clsEnabled_3056_, lean_object* v_oldTraces_3057_, lean_object* v_toPure_3058_, lean_object* v_toBind_3059_, lean_object* v_k_3060_, lean_object* v___x_3061_, lean_object* v_inst_3062_, lean_object* v_msg_3063_, lean_object* v___f_3064_, lean_object* v_withRef_3065_, lean_object* v_getRef_3066_, lean_object* v_ref_3067_){
_start:
{
lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___f_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___f_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3068_ = lean_box(v_collapsed_3053_);
v___x_3069_ = lean_box(v_clsEnabled_3056_);
lean_inc_n(v_toBind_3059_, 3);
lean_inc(v_ref_3067_);
v___f_3070_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__10___boxed), 19, 18);
lean_closure_set(v___f_3070_, 0, v_always_3046_);
lean_closure_set(v___f_3070_, 1, v_inst_3047_);
lean_closure_set(v___f_3070_, 2, v_inst_3048_);
lean_closure_set(v___f_3070_, 3, v_inst_3049_);
lean_closure_set(v___f_3070_, 4, v_inst_3050_);
lean_closure_set(v___f_3070_, 5, v_inst_3051_);
lean_closure_set(v___f_3070_, 6, v_cls_3052_);
lean_closure_set(v___f_3070_, 7, v___x_3068_);
lean_closure_set(v___f_3070_, 8, v_tag_3054_);
lean_closure_set(v___f_3070_, 9, v_opts_3055_);
lean_closure_set(v___f_3070_, 10, v___x_3069_);
lean_closure_set(v___f_3070_, 11, v_oldTraces_3057_);
lean_closure_set(v___f_3070_, 12, v_ref_3067_);
lean_closure_set(v___f_3070_, 13, v_toPure_3058_);
lean_closure_set(v___f_3070_, 14, v_toBind_3059_);
lean_closure_set(v___f_3070_, 15, v_k_3060_);
lean_closure_set(v___f_3070_, 16, v___x_3061_);
lean_closure_set(v___f_3070_, 17, v_inst_3062_);
v___x_3071_ = lean_box(0);
v___x_3072_ = lean_apply_1(v_msg_3063_, v___x_3071_);
v___x_3073_ = lean_apply_4(v_toBind_3059_, lean_box(0), lean_box(0), v___x_3072_, v___f_3064_);
v___f_3074_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3074_, 0, v_ref_3067_);
lean_closure_set(v___f_3074_, 1, v_withRef_3065_);
lean_closure_set(v___f_3074_, 2, v___x_3073_);
v___x_3075_ = lean_apply_4(v_toBind_3059_, lean_box(0), lean_box(0), v_getRef_3066_, v___f_3074_);
v___x_3076_ = lean_apply_4(v_toBind_3059_, lean_box(0), lean_box(0), v___x_3075_, v___f_3070_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_always_3077_ = _args[0];
lean_object* v_inst_3078_ = _args[1];
lean_object* v_inst_3079_ = _args[2];
lean_object* v_inst_3080_ = _args[3];
lean_object* v_inst_3081_ = _args[4];
lean_object* v_inst_3082_ = _args[5];
lean_object* v_cls_3083_ = _args[6];
lean_object* v_collapsed_3084_ = _args[7];
lean_object* v_tag_3085_ = _args[8];
lean_object* v_opts_3086_ = _args[9];
lean_object* v_clsEnabled_3087_ = _args[10];
lean_object* v_oldTraces_3088_ = _args[11];
lean_object* v_toPure_3089_ = _args[12];
lean_object* v_toBind_3090_ = _args[13];
lean_object* v_k_3091_ = _args[14];
lean_object* v___x_3092_ = _args[15];
lean_object* v_inst_3093_ = _args[16];
lean_object* v_msg_3094_ = _args[17];
lean_object* v___f_3095_ = _args[18];
lean_object* v_withRef_3096_ = _args[19];
lean_object* v_getRef_3097_ = _args[20];
lean_object* v_ref_3098_ = _args[21];
_start:
{
uint8_t v_collapsed_boxed_3099_; uint8_t v_clsEnabled_boxed_3100_; lean_object* v_res_3101_; 
v_collapsed_boxed_3099_ = lean_unbox(v_collapsed_3084_);
v_clsEnabled_boxed_3100_ = lean_unbox(v_clsEnabled_3087_);
v_res_3101_ = l_Lean_withTraceNodeBefore___redArg___lam__3(v_always_3077_, v_inst_3078_, v_inst_3079_, v_inst_3080_, v_inst_3081_, v_inst_3082_, v_cls_3083_, v_collapsed_boxed_3099_, v_tag_3085_, v_opts_3086_, v_clsEnabled_boxed_3100_, v_oldTraces_3088_, v_toPure_3089_, v_toBind_3090_, v_k_3091_, v___x_3092_, v_inst_3093_, v_msg_3094_, v___f_3095_, v_withRef_3096_, v_getRef_3097_, v_ref_3098_);
return v_res_3101_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2(lean_object* v_inst_3102_, lean_object* v_always_3103_, lean_object* v_inst_3104_, lean_object* v_inst_3105_, lean_object* v_inst_3106_, lean_object* v_inst_3107_, lean_object* v_cls_3108_, uint8_t v_collapsed_3109_, lean_object* v_tag_3110_, lean_object* v_opts_3111_, uint8_t v_clsEnabled_3112_, lean_object* v_toPure_3113_, lean_object* v_toBind_3114_, lean_object* v_k_3115_, lean_object* v___x_3116_, lean_object* v_inst_3117_, lean_object* v_msg_3118_, lean_object* v___f_3119_, lean_object* v_oldTraces_3120_){
_start:
{
lean_object* v_getRef_3121_; lean_object* v_withRef_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___f_3125_; lean_object* v___x_3126_; 
v_getRef_3121_ = lean_ctor_get(v_inst_3102_, 0);
lean_inc_n(v_getRef_3121_, 2);
v_withRef_3122_ = lean_ctor_get(v_inst_3102_, 1);
lean_inc(v_withRef_3122_);
v___x_3123_ = lean_box(v_collapsed_3109_);
v___x_3124_ = lean_box(v_clsEnabled_3112_);
lean_inc(v_toBind_3114_);
v___f_3125_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__3___boxed), 22, 21);
lean_closure_set(v___f_3125_, 0, v_always_3103_);
lean_closure_set(v___f_3125_, 1, v_inst_3104_);
lean_closure_set(v___f_3125_, 2, v_inst_3105_);
lean_closure_set(v___f_3125_, 3, v_inst_3102_);
lean_closure_set(v___f_3125_, 4, v_inst_3106_);
lean_closure_set(v___f_3125_, 5, v_inst_3107_);
lean_closure_set(v___f_3125_, 6, v_cls_3108_);
lean_closure_set(v___f_3125_, 7, v___x_3123_);
lean_closure_set(v___f_3125_, 8, v_tag_3110_);
lean_closure_set(v___f_3125_, 9, v_opts_3111_);
lean_closure_set(v___f_3125_, 10, v___x_3124_);
lean_closure_set(v___f_3125_, 11, v_oldTraces_3120_);
lean_closure_set(v___f_3125_, 12, v_toPure_3113_);
lean_closure_set(v___f_3125_, 13, v_toBind_3114_);
lean_closure_set(v___f_3125_, 14, v_k_3115_);
lean_closure_set(v___f_3125_, 15, v___x_3116_);
lean_closure_set(v___f_3125_, 16, v_inst_3117_);
lean_closure_set(v___f_3125_, 17, v_msg_3118_);
lean_closure_set(v___f_3125_, 18, v___f_3119_);
lean_closure_set(v___f_3125_, 19, v_withRef_3122_);
lean_closure_set(v___f_3125_, 20, v_getRef_3121_);
v___x_3126_ = lean_apply_4(v_toBind_3114_, lean_box(0), lean_box(0), v_getRef_3121_, v___f_3125_);
return v___x_3126_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2___boxed(lean_object** _args){
lean_object* v_inst_3127_ = _args[0];
lean_object* v_always_3128_ = _args[1];
lean_object* v_inst_3129_ = _args[2];
lean_object* v_inst_3130_ = _args[3];
lean_object* v_inst_3131_ = _args[4];
lean_object* v_inst_3132_ = _args[5];
lean_object* v_cls_3133_ = _args[6];
lean_object* v_collapsed_3134_ = _args[7];
lean_object* v_tag_3135_ = _args[8];
lean_object* v_opts_3136_ = _args[9];
lean_object* v_clsEnabled_3137_ = _args[10];
lean_object* v_toPure_3138_ = _args[11];
lean_object* v_toBind_3139_ = _args[12];
lean_object* v_k_3140_ = _args[13];
lean_object* v___x_3141_ = _args[14];
lean_object* v_inst_3142_ = _args[15];
lean_object* v_msg_3143_ = _args[16];
lean_object* v___f_3144_ = _args[17];
lean_object* v_oldTraces_3145_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_3146_; uint8_t v_clsEnabled_boxed_3147_; lean_object* v_res_3148_; 
v_collapsed_boxed_3146_ = lean_unbox(v_collapsed_3134_);
v_clsEnabled_boxed_3147_ = lean_unbox(v_clsEnabled_3137_);
v_res_3148_ = l_Lean_withTraceNodeBefore___redArg___lam__2(v_inst_3127_, v_always_3128_, v_inst_3129_, v_inst_3130_, v_inst_3131_, v_inst_3132_, v_cls_3133_, v_collapsed_boxed_3146_, v_tag_3135_, v_opts_3136_, v_clsEnabled_boxed_3147_, v_toPure_3138_, v_toBind_3139_, v_k_3140_, v___x_3141_, v_inst_3142_, v_msg_3143_, v___f_3144_, v_oldTraces_3145_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4(lean_object* v_inst_3149_, lean_object* v_always_3150_, lean_object* v_inst_3151_, lean_object* v_inst_3152_, lean_object* v_inst_3153_, lean_object* v_inst_3154_, lean_object* v_cls_3155_, uint8_t v_collapsed_3156_, lean_object* v_tag_3157_, lean_object* v_opts_3158_, lean_object* v_toPure_3159_, lean_object* v_toBind_3160_, lean_object* v_k_3161_, lean_object* v___x_3162_, lean_object* v_inst_3163_, lean_object* v_msg_3164_, lean_object* v___f_3165_, uint8_t v_clsEnabled_3166_){
_start:
{
lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___f_3169_; 
v___x_3167_ = lean_box(v_collapsed_3156_);
v___x_3168_ = lean_box(v_clsEnabled_3166_);
lean_inc_ref(v___x_3162_);
lean_inc(v_k_3161_);
lean_inc(v_toBind_3160_);
lean_inc_ref(v_opts_3158_);
lean_inc_ref(v_inst_3152_);
lean_inc_ref(v_inst_3151_);
v___f_3169_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__2___boxed), 19, 18);
lean_closure_set(v___f_3169_, 0, v_inst_3149_);
lean_closure_set(v___f_3169_, 1, v_always_3150_);
lean_closure_set(v___f_3169_, 2, v_inst_3151_);
lean_closure_set(v___f_3169_, 3, v_inst_3152_);
lean_closure_set(v___f_3169_, 4, v_inst_3153_);
lean_closure_set(v___f_3169_, 5, v_inst_3154_);
lean_closure_set(v___f_3169_, 6, v_cls_3155_);
lean_closure_set(v___f_3169_, 7, v___x_3167_);
lean_closure_set(v___f_3169_, 8, v_tag_3157_);
lean_closure_set(v___f_3169_, 9, v_opts_3158_);
lean_closure_set(v___f_3169_, 10, v___x_3168_);
lean_closure_set(v___f_3169_, 11, v_toPure_3159_);
lean_closure_set(v___f_3169_, 12, v_toBind_3160_);
lean_closure_set(v___f_3169_, 13, v_k_3161_);
lean_closure_set(v___f_3169_, 14, v___x_3162_);
lean_closure_set(v___f_3169_, 15, v_inst_3163_);
lean_closure_set(v___f_3169_, 16, v_msg_3164_);
lean_closure_set(v___f_3169_, 17, v___f_3165_);
if (v_clsEnabled_3166_ == 0)
{
lean_object* v___x_3173_; lean_object* v___x_3174_; uint8_t v___x_3175_; 
v___x_3173_ = l_Lean_trace_profiler;
v___x_3174_ = l_Lean_Option_get___redArg(v___x_3162_, v_opts_3158_, v___x_3173_);
lean_dec_ref(v_opts_3158_);
v___x_3175_ = lean_unbox(v___x_3174_);
lean_dec(v___x_3174_);
if (v___x_3175_ == 0)
{
lean_dec_ref(v___f_3169_);
lean_dec(v_toBind_3160_);
lean_dec_ref(v_inst_3152_);
lean_dec_ref(v_inst_3151_);
return v_k_3161_;
}
else
{
lean_dec(v_k_3161_);
goto v___jp_3170_;
}
}
else
{
lean_dec_ref(v___x_3162_);
lean_dec(v_k_3161_);
lean_dec_ref(v_opts_3158_);
goto v___jp_3170_;
}
v___jp_3170_:
{
lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3171_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_3151_, v_inst_3152_);
v___x_3172_ = lean_apply_4(v_toBind_3160_, lean_box(0), lean_box(0), v___x_3171_, v___f_3169_);
return v___x_3172_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_inst_3176_ = _args[0];
lean_object* v_always_3177_ = _args[1];
lean_object* v_inst_3178_ = _args[2];
lean_object* v_inst_3179_ = _args[3];
lean_object* v_inst_3180_ = _args[4];
lean_object* v_inst_3181_ = _args[5];
lean_object* v_cls_3182_ = _args[6];
lean_object* v_collapsed_3183_ = _args[7];
lean_object* v_tag_3184_ = _args[8];
lean_object* v_opts_3185_ = _args[9];
lean_object* v_toPure_3186_ = _args[10];
lean_object* v_toBind_3187_ = _args[11];
lean_object* v_k_3188_ = _args[12];
lean_object* v___x_3189_ = _args[13];
lean_object* v_inst_3190_ = _args[14];
lean_object* v_msg_3191_ = _args[15];
lean_object* v___f_3192_ = _args[16];
lean_object* v_clsEnabled_3193_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_3194_; uint8_t v_clsEnabled_boxed_3195_; lean_object* v_res_3196_; 
v_collapsed_boxed_3194_ = lean_unbox(v_collapsed_3183_);
v_clsEnabled_boxed_3195_ = lean_unbox(v_clsEnabled_3193_);
v_res_3196_ = l_Lean_withTraceNodeBefore___redArg___lam__4(v_inst_3176_, v_always_3177_, v_inst_3178_, v_inst_3179_, v_inst_3180_, v_inst_3181_, v_cls_3182_, v_collapsed_boxed_3194_, v_tag_3184_, v_opts_3185_, v_toPure_3186_, v_toBind_3187_, v_k_3188_, v___x_3189_, v_inst_3190_, v_msg_3191_, v___f_3192_, v_clsEnabled_boxed_3195_);
return v_res_3196_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7(lean_object* v_k_3197_, lean_object* v_inst_3198_, lean_object* v_toApplicative_3199_, lean_object* v_inst_3200_, lean_object* v_always_3201_, lean_object* v_inst_3202_, lean_object* v_inst_3203_, lean_object* v_inst_3204_, lean_object* v_cls_3205_, uint8_t v_collapsed_3206_, lean_object* v_tag_3207_, lean_object* v_toBind_3208_, lean_object* v___x_3209_, lean_object* v_inst_3210_, lean_object* v_msg_3211_, lean_object* v___f_3212_, lean_object* v_inst_3213_, lean_object* v_opts_3214_){
_start:
{
uint8_t v_hasTrace_3215_; 
v_hasTrace_3215_ = lean_ctor_get_uint8(v_opts_3214_, sizeof(void*)*1);
if (v_hasTrace_3215_ == 0)
{
lean_dec_ref(v_opts_3214_);
lean_dec(v_inst_3213_);
lean_dec(v___f_3212_);
lean_dec(v_msg_3211_);
lean_dec(v_inst_3210_);
lean_dec_ref(v___x_3209_);
lean_dec(v_toBind_3208_);
lean_dec_ref(v_tag_3207_);
lean_dec(v_cls_3205_);
lean_dec_ref(v_inst_3204_);
lean_dec(v_inst_3203_);
lean_dec_ref(v_inst_3202_);
lean_dec_ref(v_always_3201_);
lean_dec_ref(v_inst_3200_);
lean_dec_ref(v_toApplicative_3199_);
lean_dec_ref(v_inst_3198_);
return v_k_3197_;
}
else
{
lean_object* v_getInheritedTraceOptions_3216_; lean_object* v_toPure_3217_; lean_object* v___x_3218_; lean_object* v___f_3219_; lean_object* v___f_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v_getInheritedTraceOptions_3216_ = lean_ctor_get(v_inst_3198_, 2);
lean_inc(v_getInheritedTraceOptions_3216_);
v_toPure_3217_ = lean_ctor_get(v_toApplicative_3199_, 1);
lean_inc_n(v_toPure_3217_, 2);
lean_dec_ref(v_toApplicative_3199_);
v___x_3218_ = lean_box(v_collapsed_3206_);
lean_inc_n(v_toBind_3208_, 3);
lean_inc(v_cls_3205_);
v___f_3219_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__4___boxed), 18, 17);
lean_closure_set(v___f_3219_, 0, v_inst_3200_);
lean_closure_set(v___f_3219_, 1, v_always_3201_);
lean_closure_set(v___f_3219_, 2, v_inst_3202_);
lean_closure_set(v___f_3219_, 3, v_inst_3198_);
lean_closure_set(v___f_3219_, 4, v_inst_3203_);
lean_closure_set(v___f_3219_, 5, v_inst_3204_);
lean_closure_set(v___f_3219_, 6, v_cls_3205_);
lean_closure_set(v___f_3219_, 7, v___x_3218_);
lean_closure_set(v___f_3219_, 8, v_tag_3207_);
lean_closure_set(v___f_3219_, 9, v_opts_3214_);
lean_closure_set(v___f_3219_, 10, v_toPure_3217_);
lean_closure_set(v___f_3219_, 11, v_toBind_3208_);
lean_closure_set(v___f_3219_, 12, v_k_3197_);
lean_closure_set(v___f_3219_, 13, v___x_3209_);
lean_closure_set(v___f_3219_, 14, v_inst_3210_);
lean_closure_set(v___f_3219_, 15, v_msg_3211_);
lean_closure_set(v___f_3219_, 16, v___f_3212_);
v___f_3220_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_3220_, 0, v_toPure_3217_);
lean_closure_set(v___f_3220_, 1, v_cls_3205_);
lean_closure_set(v___f_3220_, 2, v_toBind_3208_);
lean_closure_set(v___f_3220_, 3, v_inst_3213_);
v___x_3221_ = lean_apply_4(v_toBind_3208_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3216_, v___f_3220_);
v___x_3222_ = lean_apply_4(v_toBind_3208_, lean_box(0), lean_box(0), v___x_3221_, v___f_3219_);
return v___x_3222_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_k_3223_ = _args[0];
lean_object* v_inst_3224_ = _args[1];
lean_object* v_toApplicative_3225_ = _args[2];
lean_object* v_inst_3226_ = _args[3];
lean_object* v_always_3227_ = _args[4];
lean_object* v_inst_3228_ = _args[5];
lean_object* v_inst_3229_ = _args[6];
lean_object* v_inst_3230_ = _args[7];
lean_object* v_cls_3231_ = _args[8];
lean_object* v_collapsed_3232_ = _args[9];
lean_object* v_tag_3233_ = _args[10];
lean_object* v_toBind_3234_ = _args[11];
lean_object* v___x_3235_ = _args[12];
lean_object* v_inst_3236_ = _args[13];
lean_object* v_msg_3237_ = _args[14];
lean_object* v___f_3238_ = _args[15];
lean_object* v_inst_3239_ = _args[16];
lean_object* v_opts_3240_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_3241_; lean_object* v_res_3242_; 
v_collapsed_boxed_3241_ = lean_unbox(v_collapsed_3232_);
v_res_3242_ = l_Lean_withTraceNodeBefore___redArg___lam__7(v_k_3223_, v_inst_3224_, v_toApplicative_3225_, v_inst_3226_, v_always_3227_, v_inst_3228_, v_inst_3229_, v_inst_3230_, v_cls_3231_, v_collapsed_boxed_3241_, v_tag_3233_, v_toBind_3234_, v___x_3235_, v_inst_3236_, v_msg_3237_, v___f_3238_, v_inst_3239_, v_opts_3240_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg(lean_object* v_inst_3243_, lean_object* v_inst_3244_, lean_object* v_inst_3245_, lean_object* v_inst_3246_, lean_object* v_inst_3247_, lean_object* v_always_3248_, lean_object* v_inst_3249_, lean_object* v_inst_3250_, lean_object* v_cls_3251_, lean_object* v_msg_3252_, lean_object* v_k_3253_, uint8_t v_collapsed_3254_, lean_object* v_tag_3255_){
_start:
{
lean_object* v___x_3256_; lean_object* v_toApplicative_3257_; lean_object* v_toBind_3258_; lean_object* v___f_3259_; lean_object* v___x_3260_; lean_object* v___f_3261_; lean_object* v___x_3262_; 
v___x_3256_ = l_Lean_KVMap_instValueBool;
v_toApplicative_3257_ = lean_ctor_get(v_inst_3243_, 0);
lean_inc_ref(v_toApplicative_3257_);
v_toBind_3258_ = lean_ctor_get(v_inst_3243_, 1);
lean_inc_n(v_toBind_3258_, 2);
lean_inc(v_inst_3246_);
v___f_3259_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3259_, 0, v_inst_3246_);
v___x_3260_ = lean_box(v_collapsed_3254_);
lean_inc(v_inst_3247_);
v___f_3261_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__7___boxed), 18, 17);
lean_closure_set(v___f_3261_, 0, v_k_3253_);
lean_closure_set(v___f_3261_, 1, v_inst_3244_);
lean_closure_set(v___f_3261_, 2, v_toApplicative_3257_);
lean_closure_set(v___f_3261_, 3, v_inst_3245_);
lean_closure_set(v___f_3261_, 4, v_always_3248_);
lean_closure_set(v___f_3261_, 5, v_inst_3243_);
lean_closure_set(v___f_3261_, 6, v_inst_3246_);
lean_closure_set(v___f_3261_, 7, v_inst_3250_);
lean_closure_set(v___f_3261_, 8, v_cls_3251_);
lean_closure_set(v___f_3261_, 9, v___x_3260_);
lean_closure_set(v___f_3261_, 10, v_tag_3255_);
lean_closure_set(v___f_3261_, 11, v_toBind_3258_);
lean_closure_set(v___f_3261_, 12, v___x_3256_);
lean_closure_set(v___f_3261_, 13, v_inst_3249_);
lean_closure_set(v___f_3261_, 14, v_msg_3252_);
lean_closure_set(v___f_3261_, 15, v___f_3259_);
lean_closure_set(v___f_3261_, 16, v_inst_3247_);
v___x_3262_ = lean_apply_4(v_toBind_3258_, lean_box(0), lean_box(0), v_inst_3247_, v___f_3261_);
return v___x_3262_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___boxed(lean_object* v_inst_3263_, lean_object* v_inst_3264_, lean_object* v_inst_3265_, lean_object* v_inst_3266_, lean_object* v_inst_3267_, lean_object* v_always_3268_, lean_object* v_inst_3269_, lean_object* v_inst_3270_, lean_object* v_cls_3271_, lean_object* v_msg_3272_, lean_object* v_k_3273_, lean_object* v_collapsed_3274_, lean_object* v_tag_3275_){
_start:
{
uint8_t v_collapsed_boxed_3276_; lean_object* v_res_3277_; 
v_collapsed_boxed_3276_ = lean_unbox(v_collapsed_3274_);
v_res_3277_ = l_Lean_withTraceNodeBefore___redArg(v_inst_3263_, v_inst_3264_, v_inst_3265_, v_inst_3266_, v_inst_3267_, v_always_3268_, v_inst_3269_, v_inst_3270_, v_cls_3271_, v_msg_3272_, v_k_3273_, v_collapsed_boxed_3276_, v_tag_3275_);
return v_res_3277_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore(lean_object* v_00_u03b1_3278_, lean_object* v_m_3279_, lean_object* v_inst_3280_, lean_object* v_inst_3281_, lean_object* v_00_u03b5_3282_, lean_object* v_inst_3283_, lean_object* v_inst_3284_, lean_object* v_inst_3285_, lean_object* v_always_3286_, lean_object* v_inst_3287_, lean_object* v_inst_3288_, lean_object* v_cls_3289_, lean_object* v_msg_3290_, lean_object* v_k_3291_, uint8_t v_collapsed_3292_, lean_object* v_tag_3293_){
_start:
{
lean_object* v___x_3294_; lean_object* v_toApplicative_3295_; lean_object* v_toBind_3296_; lean_object* v___f_3297_; lean_object* v___x_3298_; lean_object* v___f_3299_; lean_object* v___x_3300_; 
v___x_3294_ = l_Lean_KVMap_instValueBool;
v_toApplicative_3295_ = lean_ctor_get(v_inst_3280_, 0);
lean_inc_ref(v_toApplicative_3295_);
v_toBind_3296_ = lean_ctor_get(v_inst_3280_, 1);
lean_inc_n(v_toBind_3296_, 2);
lean_inc(v_inst_3284_);
v___f_3297_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3297_, 0, v_inst_3284_);
v___x_3298_ = lean_box(v_collapsed_3292_);
lean_inc(v_inst_3285_);
v___f_3299_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__7___boxed), 18, 17);
lean_closure_set(v___f_3299_, 0, v_k_3291_);
lean_closure_set(v___f_3299_, 1, v_inst_3281_);
lean_closure_set(v___f_3299_, 2, v_toApplicative_3295_);
lean_closure_set(v___f_3299_, 3, v_inst_3283_);
lean_closure_set(v___f_3299_, 4, v_always_3286_);
lean_closure_set(v___f_3299_, 5, v_inst_3280_);
lean_closure_set(v___f_3299_, 6, v_inst_3284_);
lean_closure_set(v___f_3299_, 7, v_inst_3288_);
lean_closure_set(v___f_3299_, 8, v_cls_3289_);
lean_closure_set(v___f_3299_, 9, v___x_3298_);
lean_closure_set(v___f_3299_, 10, v_tag_3293_);
lean_closure_set(v___f_3299_, 11, v_toBind_3296_);
lean_closure_set(v___f_3299_, 12, v___x_3294_);
lean_closure_set(v___f_3299_, 13, v_inst_3287_);
lean_closure_set(v___f_3299_, 14, v_msg_3290_);
lean_closure_set(v___f_3299_, 15, v___f_3297_);
lean_closure_set(v___f_3299_, 16, v_inst_3285_);
v___x_3300_ = lean_apply_4(v_toBind_3296_, lean_box(0), lean_box(0), v_inst_3285_, v___f_3299_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___boxed(lean_object* v_00_u03b1_3301_, lean_object* v_m_3302_, lean_object* v_inst_3303_, lean_object* v_inst_3304_, lean_object* v_00_u03b5_3305_, lean_object* v_inst_3306_, lean_object* v_inst_3307_, lean_object* v_inst_3308_, lean_object* v_always_3309_, lean_object* v_inst_3310_, lean_object* v_inst_3311_, lean_object* v_cls_3312_, lean_object* v_msg_3313_, lean_object* v_k_3314_, lean_object* v_collapsed_3315_, lean_object* v_tag_3316_){
_start:
{
uint8_t v_collapsed_boxed_3317_; lean_object* v_res_3318_; 
v_collapsed_boxed_3317_ = lean_unbox(v_collapsed_3315_);
v_res_3318_ = l_Lean_withTraceNodeBefore(v_00_u03b1_3301_, v_m_3302_, v_inst_3303_, v_inst_3304_, v_00_u03b5_3305_, v_inst_3306_, v_inst_3307_, v_inst_3308_, v_always_3309_, v_inst_3310_, v_inst_3311_, v_cls_3312_, v_msg_3313_, v_k_3314_, v_collapsed_boxed_3317_, v_tag_3316_);
return v_res_3318_;
}
}
LEAN_EXPORT uint8_t l_Lean_addTraceAsMessages___redArg___lam__0(lean_object* v_x_3319_, lean_object* v_x_3320_){
_start:
{
lean_object* v_fst_3321_; lean_object* v_fst_3322_; lean_object* v_fst_3323_; lean_object* v_fst_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; uint8_t v___x_3327_; 
v_fst_3321_ = lean_ctor_get(v_x_3319_, 0);
v_fst_3322_ = lean_ctor_get(v_x_3320_, 0);
v_fst_3323_ = lean_ctor_get(v_fst_3321_, 0);
v_fst_3324_ = lean_ctor_get(v_fst_3322_, 0);
v___x_3325_ = lean_unsigned_to_nat(1u);
v___x_3326_ = lean_nat_add(v_fst_3323_, v___x_3325_);
v___x_3327_ = lean_nat_dec_le(v___x_3326_, v_fst_3324_);
lean_dec(v___x_3326_);
return v___x_3327_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__0___boxed(lean_object* v_x_3328_, lean_object* v_x_3329_){
_start:
{
uint8_t v_res_3330_; lean_object* v_r_3331_; 
v_res_3330_ = l_Lean_addTraceAsMessages___redArg___lam__0(v_x_3328_, v_x_3329_);
lean_dec_ref(v_x_3329_);
lean_dec_ref(v_x_3328_);
v_r_3331_ = lean_box(v_res_3330_);
return v_r_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__1(lean_object* v_x1_3332_, lean_object* v_x2_3333_, lean_object* v_x3_3334_){
_start:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3335_, 0, v_x2_3333_);
lean_ctor_set(v___x_3335_, 1, v_x3_3334_);
v___x_3336_ = lean_array_push(v_x1_3332_, v___x_3335_);
return v___x_3336_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4(lean_object* v_____do__lift_3337_, lean_object* v___x_3338_, lean_object* v_fst_3339_, lean_object* v_snd_3340_, lean_object* v_logMessage_3341_, lean_object* v_toBind_3342_, lean_object* v___f_3343_, lean_object* v_____do__lift_3344_){
_start:
{
uint8_t v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; 
v___x_3345_ = 0;
v___x_3346_ = l_Lean_Elab_mkMessageCore(v_____do__lift_3337_, v_____do__lift_3344_, v___x_3338_, v___x_3345_, v_fst_3339_, v_snd_3340_);
v___x_3347_ = lean_apply_1(v_logMessage_3341_, v___x_3346_);
v___x_3348_ = lean_apply_4(v_toBind_3342_, lean_box(0), lean_box(0), v___x_3347_, v___f_3343_);
return v___x_3348_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4___boxed(lean_object* v_____do__lift_3349_, lean_object* v___x_3350_, lean_object* v_fst_3351_, lean_object* v_snd_3352_, lean_object* v_logMessage_3353_, lean_object* v_toBind_3354_, lean_object* v___f_3355_, lean_object* v_____do__lift_3356_){
_start:
{
lean_object* v_res_3357_; 
v_res_3357_ = l_Lean_addTraceAsMessages___redArg___lam__4(v_____do__lift_3349_, v___x_3350_, v_fst_3351_, v_snd_3352_, v_logMessage_3353_, v_toBind_3354_, v___f_3355_, v_____do__lift_3356_);
lean_dec(v_snd_3352_);
lean_dec(v_fst_3351_);
return v_res_3357_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__2(lean_object* v___x_3358_, lean_object* v_fst_3359_, lean_object* v_snd_3360_, lean_object* v_logMessage_3361_, lean_object* v_toBind_3362_, lean_object* v___f_3363_, lean_object* v_toMonadFileMap_3364_, lean_object* v_____do__lift_3365_){
_start:
{
lean_object* v___f_3366_; lean_object* v___x_3367_; 
lean_inc(v_toBind_3362_);
v___f_3366_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__4___boxed), 8, 7);
lean_closure_set(v___f_3366_, 0, v_____do__lift_3365_);
lean_closure_set(v___f_3366_, 1, v___x_3358_);
lean_closure_set(v___f_3366_, 2, v_fst_3359_);
lean_closure_set(v___f_3366_, 3, v_snd_3360_);
lean_closure_set(v___f_3366_, 4, v_logMessage_3361_);
lean_closure_set(v___f_3366_, 5, v_toBind_3362_);
lean_closure_set(v___f_3366_, 6, v___f_3363_);
v___x_3367_ = lean_apply_4(v_toBind_3362_, lean_box(0), lean_box(0), v_toMonadFileMap_3364_, v___f_3366_);
return v___x_3367_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3(lean_object* v___x_3368_, uint8_t v___x_3369_, lean_object* v_logMessage_3370_, lean_object* v_toBind_3371_, lean_object* v___f_3372_, lean_object* v_toMonadFileMap_3373_, lean_object* v_getFileName_3374_, lean_object* v_a_3375_, lean_object* v_x_3376_, lean_object* v___y_3377_){
_start:
{
lean_object* v_fst_3378_; lean_object* v_snd_3379_; lean_object* v_fst_3380_; lean_object* v_snd_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3398_; 
v_fst_3378_ = lean_ctor_get(v_a_3375_, 0);
lean_inc(v_fst_3378_);
v_snd_3379_ = lean_ctor_get(v_a_3375_, 1);
lean_inc(v_snd_3379_);
lean_dec_ref(v_a_3375_);
v_fst_3380_ = lean_ctor_get(v_fst_3378_, 0);
v_snd_3381_ = lean_ctor_get(v_fst_3378_, 1);
v_isSharedCheck_3398_ = !lean_is_exclusive(v_fst_3378_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3383_ = v_fst_3378_;
v_isShared_3384_ = v_isSharedCheck_3398_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_snd_3381_);
lean_inc(v_fst_3380_);
lean_dec(v_fst_3378_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3398_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; double v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3394_; 
v___x_3385_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_3386_ = lean_box(0);
v___x_3387_ = lean_box(0);
v___x_3388_ = lean_float_of_nat(v___x_3368_);
v___x_3389_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__1));
v___x_3390_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3390_, 0, v___x_3386_);
lean_ctor_set(v___x_3390_, 1, v___x_3387_);
lean_ctor_set(v___x_3390_, 2, v___x_3389_);
lean_ctor_set_float(v___x_3390_, sizeof(void*)*3, v___x_3388_);
lean_ctor_set_float(v___x_3390_, sizeof(void*)*3 + 8, v___x_3388_);
lean_ctor_set_uint8(v___x_3390_, sizeof(void*)*3 + 16, v___x_3369_);
v___x_3391_ = l_Lean_MessageData_nil;
v___x_3392_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3390_);
lean_ctor_set(v___x_3392_, 1, v___x_3391_);
lean_ctor_set(v___x_3392_, 2, v_snd_3379_);
if (v_isShared_3384_ == 0)
{
lean_ctor_set_tag(v___x_3383_, 8);
lean_ctor_set(v___x_3383_, 1, v___x_3392_);
lean_ctor_set(v___x_3383_, 0, v___x_3385_);
v___x_3394_ = v___x_3383_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v___x_3385_);
lean_ctor_set(v_reuseFailAlloc_3397_, 1, v___x_3392_);
v___x_3394_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
lean_object* v___f_3395_; lean_object* v___x_3396_; 
lean_inc(v_toBind_3371_);
v___f_3395_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__2), 8, 7);
lean_closure_set(v___f_3395_, 0, v___x_3394_);
lean_closure_set(v___f_3395_, 1, v_fst_3380_);
lean_closure_set(v___f_3395_, 2, v_snd_3381_);
lean_closure_set(v___f_3395_, 3, v_logMessage_3370_);
lean_closure_set(v___f_3395_, 4, v_toBind_3371_);
lean_closure_set(v___f_3395_, 5, v___f_3372_);
lean_closure_set(v___f_3395_, 6, v_toMonadFileMap_3373_);
v___x_3396_ = lean_apply_4(v_toBind_3371_, lean_box(0), lean_box(0), v_getFileName_3374_, v___f_3395_);
return v___x_3396_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3___boxed(lean_object* v___x_3399_, lean_object* v___x_3400_, lean_object* v_logMessage_3401_, lean_object* v_toBind_3402_, lean_object* v___f_3403_, lean_object* v_toMonadFileMap_3404_, lean_object* v_getFileName_3405_, lean_object* v_a_3406_, lean_object* v_x_3407_, lean_object* v___y_3408_){
_start:
{
uint8_t v___x_904__boxed_3409_; lean_object* v_res_3410_; 
v___x_904__boxed_3409_ = lean_unbox(v___x_3400_);
v_res_3410_ = l_Lean_addTraceAsMessages___redArg___lam__3(v___x_3399_, v___x_904__boxed_3409_, v_logMessage_3401_, v_toBind_3402_, v___f_3403_, v_toMonadFileMap_3404_, v_getFileName_3405_, v_a_3406_, v_x_3407_, v___y_3408_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__5(lean_object* v___x_3411_, lean_object* v___f_3412_, lean_object* v_acc_3413_, lean_object* v_l_3414_){
_start:
{
lean_object* v___x_3415_; 
v___x_3415_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_3411_, v___f_3412_, v_acc_3413_, v_l_3414_);
return v___x_3415_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6(lean_object* v_toPure_3416_, uint8_t v___x_3417_, lean_object* v_logMessage_3418_, lean_object* v_toBind_3419_, lean_object* v_toMonadFileMap_3420_, lean_object* v_getFileName_3421_, lean_object* v_inst_3422_, lean_object* v___f_3423_, lean_object* v___f_3424_, lean_object* v___f_3425_, lean_object* v_____s_3426_){
_start:
{
lean_object* v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3439_; lean_object* v___y_3440_; lean_object* v___y_3441_; lean_object* v___y_3442_; lean_object* v___y_3443_; lean_object* v___y_3446_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v___y_3450_; lean_object* v___y_3453_; lean_object* v_size_3460_; lean_object* v_buckets_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; uint8_t v___x_3466_; 
v_size_3460_ = lean_ctor_get(v_____s_3426_, 0);
lean_inc(v_size_3460_);
v_buckets_3461_ = lean_ctor_get(v_____s_3426_, 1);
lean_inc_ref(v_buckets_3461_);
lean_dec_ref(v_____s_3426_);
v___x_3462_ = lean_mk_empty_array_with_capacity(v_size_3460_);
lean_dec(v_size_3460_);
v___x_3463_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9));
v___x_3464_ = lean_unsigned_to_nat(0u);
v___x_3465_ = lean_array_get_size(v_buckets_3461_);
v___x_3466_ = lean_nat_dec_lt(v___x_3464_, v___x_3465_);
if (v___x_3466_ == 0)
{
lean_dec_ref(v_buckets_3461_);
lean_dec_ref(v___f_3425_);
v___y_3453_ = v___x_3462_;
goto v___jp_3452_;
}
else
{
lean_object* v___f_3467_; size_t v___x_3468_; size_t v___x_3469_; lean_object* v___x_3470_; 
v___f_3467_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__5), 4, 2);
lean_closure_set(v___f_3467_, 0, v___x_3463_);
lean_closure_set(v___f_3467_, 1, v___f_3425_);
v___x_3468_ = ((size_t)0ULL);
v___x_3469_ = lean_usize_of_nat(v___x_3465_);
v___x_3470_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3463_, v___f_3467_, v_buckets_3461_, v___x_3468_, v___x_3469_, v___x_3462_);
v___y_3453_ = v___x_3470_;
goto v___jp_3452_;
}
v___jp_3427_:
{
lean_object* v___x_3430_; lean_object* v___f_3431_; lean_object* v___x_3432_; lean_object* v___f_3433_; size_t v_sz_3434_; size_t v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; 
v___x_3430_ = lean_box(0);
v___f_3431_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3431_, 0, v___x_3430_);
lean_closure_set(v___f_3431_, 1, v_toPure_3416_);
v___x_3432_ = lean_box(v___x_3417_);
lean_inc(v_toBind_3419_);
v___f_3433_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__3___boxed), 10, 7);
lean_closure_set(v___f_3433_, 0, v___y_3428_);
lean_closure_set(v___f_3433_, 1, v___x_3432_);
lean_closure_set(v___f_3433_, 2, v_logMessage_3418_);
lean_closure_set(v___f_3433_, 3, v_toBind_3419_);
lean_closure_set(v___f_3433_, 4, v___f_3431_);
lean_closure_set(v___f_3433_, 5, v_toMonadFileMap_3420_);
lean_closure_set(v___f_3433_, 6, v_getFileName_3421_);
v_sz_3434_ = lean_array_size(v___y_3429_);
v___x_3435_ = ((size_t)0ULL);
v___x_3436_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3422_, v___y_3429_, v___f_3433_, v_sz_3434_, v___x_3435_, v___x_3430_);
v___x_3437_ = lean_apply_4(v_toBind_3419_, lean_box(0), lean_box(0), v___x_3436_, v___f_3423_);
return v___x_3437_;
}
v___jp_3438_:
{
lean_object* v___x_3444_; 
v___x_3444_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3424_, v___y_3441_, v___y_3442_, v___y_3440_, v___y_3443_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3443_);
lean_dec(v___y_3441_);
v___y_3428_ = v___y_3439_;
v___y_3429_ = v___x_3444_;
goto v___jp_3427_;
}
v___jp_3445_:
{
uint8_t v___x_3451_; 
v___x_3451_ = lean_nat_dec_le(v___y_3450_, v___y_3447_);
if (v___x_3451_ == 0)
{
lean_dec(v___y_3447_);
lean_inc(v___y_3450_);
v___y_3439_ = v___y_3446_;
v___y_3440_ = v___y_3450_;
v___y_3441_ = v___y_3448_;
v___y_3442_ = v___y_3449_;
v___y_3443_ = v___y_3450_;
goto v___jp_3438_;
}
else
{
v___y_3439_ = v___y_3446_;
v___y_3440_ = v___y_3450_;
v___y_3441_ = v___y_3448_;
v___y_3442_ = v___y_3449_;
v___y_3443_ = v___y_3447_;
goto v___jp_3438_;
}
}
v___jp_3452_:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; uint8_t v___x_3456_; 
v___x_3454_ = lean_unsigned_to_nat(0u);
v___x_3455_ = lean_array_get_size(v___y_3453_);
v___x_3456_ = lean_nat_dec_eq(v___x_3455_, v___x_3454_);
if (v___x_3456_ == 0)
{
lean_object* v___x_3457_; lean_object* v___x_3458_; uint8_t v___x_3459_; 
v___x_3457_ = lean_unsigned_to_nat(1u);
v___x_3458_ = lean_nat_sub(v___x_3455_, v___x_3457_);
v___x_3459_ = lean_nat_dec_le(v___x_3454_, v___x_3458_);
if (v___x_3459_ == 0)
{
lean_inc(v___x_3458_);
v___y_3446_ = v___x_3454_;
v___y_3447_ = v___x_3458_;
v___y_3448_ = v___x_3455_;
v___y_3449_ = v___y_3453_;
v___y_3450_ = v___x_3458_;
goto v___jp_3445_;
}
else
{
v___y_3446_ = v___x_3454_;
v___y_3447_ = v___x_3458_;
v___y_3448_ = v___x_3455_;
v___y_3449_ = v___y_3453_;
v___y_3450_ = v___x_3454_;
goto v___jp_3445_;
}
}
else
{
lean_dec_ref(v___f_3424_);
v___y_3428_ = v___x_3454_;
v___y_3429_ = v___y_3453_;
goto v___jp_3427_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6___boxed(lean_object* v_toPure_3471_, lean_object* v___x_3472_, lean_object* v_logMessage_3473_, lean_object* v_toBind_3474_, lean_object* v_toMonadFileMap_3475_, lean_object* v_getFileName_3476_, lean_object* v_inst_3477_, lean_object* v___f_3478_, lean_object* v___f_3479_, lean_object* v___f_3480_, lean_object* v_____s_3481_){
_start:
{
uint8_t v___x_989__boxed_3482_; lean_object* v_res_3483_; 
v___x_989__boxed_3482_ = lean_unbox(v___x_3472_);
v_res_3483_ = l_Lean_addTraceAsMessages___redArg___lam__6(v_toPure_3471_, v___x_989__boxed_3482_, v_logMessage_3473_, v_toBind_3474_, v_toMonadFileMap_3475_, v_getFileName_3476_, v_inst_3477_, v___f_3478_, v___f_3479_, v___f_3480_, v_____s_3481_);
return v_res_3483_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7(lean_object* v_traceElem_3484_, lean_object* v___f_3485_, lean_object* v___f_3486_, lean_object* v_____s_3487_, lean_object* v_toPure_3488_, uint8_t v___x_3489_, lean_object* v_____do__lift_3490_){
_start:
{
lean_object* v_ref_3491_; lean_object* v_msg_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3516_; 
v_ref_3491_ = lean_ctor_get(v_traceElem_3484_, 0);
v_msg_3492_ = lean_ctor_get(v_traceElem_3484_, 1);
v_isSharedCheck_3516_ = !lean_is_exclusive(v_traceElem_3484_);
if (v_isSharedCheck_3516_ == 0)
{
v___x_3494_ = v_traceElem_3484_;
v_isShared_3495_ = v_isSharedCheck_3516_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_msg_3492_);
lean_inc(v_ref_3491_);
lean_dec(v_traceElem_3484_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3516_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
lean_object* v___y_3497_; lean_object* v___y_3498_; lean_object* v_ref_3508_; lean_object* v___y_3510_; lean_object* v___x_3513_; 
v_ref_3508_ = l_Lean_replaceRef(v_ref_3491_, v_____do__lift_3490_);
lean_dec(v_ref_3491_);
v___x_3513_ = l_Lean_Syntax_getPos_x3f(v_ref_3508_, v___x_3489_);
if (lean_obj_tag(v___x_3513_) == 0)
{
lean_object* v___x_3514_; 
v___x_3514_ = lean_unsigned_to_nat(0u);
v___y_3510_ = v___x_3514_;
goto v___jp_3509_;
}
else
{
lean_object* v_val_3515_; 
v_val_3515_ = lean_ctor_get(v___x_3513_, 0);
lean_inc(v_val_3515_);
lean_dec_ref_known(v___x_3513_, 1);
v___y_3510_ = v_val_3515_;
goto v___jp_3509_;
}
v___jp_3496_:
{
lean_object* v___x_3500_; 
if (v_isShared_3495_ == 0)
{
lean_ctor_set(v___x_3494_, 1, v___y_3498_);
lean_ctor_set(v___x_3494_, 0, v___y_3497_);
v___x_3500_ = v___x_3494_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3507_; 
v_reuseFailAlloc_3507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3507_, 0, v___y_3497_);
lean_ctor_set(v_reuseFailAlloc_3507_, 1, v___y_3498_);
v___x_3500_ = v_reuseFailAlloc_3507_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v_pos2traces_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; 
v___x_3501_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__2));
lean_inc_ref(v___x_3500_);
lean_inc_ref(v___f_3486_);
lean_inc_ref(v___f_3485_);
v___x_3502_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(v___f_3485_, v___f_3486_, v_____s_3487_, v___x_3500_, v___x_3501_);
v___x_3503_ = lean_array_push(v___x_3502_, v_msg_3492_);
v_pos2traces_3504_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3485_, v___f_3486_, v_____s_3487_, v___x_3500_, v___x_3503_);
v___x_3505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3505_, 0, v_pos2traces_3504_);
v___x_3506_ = lean_apply_2(v_toPure_3488_, lean_box(0), v___x_3505_);
return v___x_3506_;
}
}
v___jp_3509_:
{
lean_object* v___x_3511_; 
v___x_3511_ = l_Lean_Syntax_getTailPos_x3f(v_ref_3508_, v___x_3489_);
lean_dec(v_ref_3508_);
if (lean_obj_tag(v___x_3511_) == 0)
{
lean_inc(v___y_3510_);
v___y_3497_ = v___y_3510_;
v___y_3498_ = v___y_3510_;
goto v___jp_3496_;
}
else
{
lean_object* v_val_3512_; 
v_val_3512_ = lean_ctor_get(v___x_3511_, 0);
lean_inc(v_val_3512_);
lean_dec_ref_known(v___x_3511_, 1);
v___y_3497_ = v___y_3510_;
v___y_3498_ = v_val_3512_;
goto v___jp_3496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7___boxed(lean_object* v_traceElem_3517_, lean_object* v___f_3518_, lean_object* v___f_3519_, lean_object* v_____s_3520_, lean_object* v_toPure_3521_, lean_object* v___x_3522_, lean_object* v_____do__lift_3523_){
_start:
{
uint8_t v___x_1103__boxed_3524_; lean_object* v_res_3525_; 
v___x_1103__boxed_3524_ = lean_unbox(v___x_3522_);
v_res_3525_ = l_Lean_addTraceAsMessages___redArg___lam__7(v_traceElem_3517_, v___f_3518_, v___f_3519_, v_____s_3520_, v_toPure_3521_, v___x_1103__boxed_3524_, v_____do__lift_3523_);
lean_dec(v_____do__lift_3523_);
return v_res_3525_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8(lean_object* v_inst_3526_, lean_object* v___f_3527_, lean_object* v___f_3528_, lean_object* v_toPure_3529_, uint8_t v___x_3530_, lean_object* v_toBind_3531_, lean_object* v_traceElem_3532_, lean_object* v_____s_3533_){
_start:
{
lean_object* v_getRef_3534_; lean_object* v___x_3535_; lean_object* v___f_3536_; lean_object* v___x_3537_; 
v_getRef_3534_ = lean_ctor_get(v_inst_3526_, 0);
lean_inc(v_getRef_3534_);
lean_dec_ref(v_inst_3526_);
v___x_3535_ = lean_box(v___x_3530_);
v___f_3536_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__7___boxed), 7, 6);
lean_closure_set(v___f_3536_, 0, v_traceElem_3532_);
lean_closure_set(v___f_3536_, 1, v___f_3527_);
lean_closure_set(v___f_3536_, 2, v___f_3528_);
lean_closure_set(v___f_3536_, 3, v_____s_3533_);
lean_closure_set(v___f_3536_, 4, v_toPure_3529_);
lean_closure_set(v___f_3536_, 5, v___x_3535_);
v___x_3537_ = lean_apply_4(v_toBind_3531_, lean_box(0), lean_box(0), v_getRef_3534_, v___f_3536_);
return v___x_3537_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8___boxed(lean_object* v_inst_3538_, lean_object* v___f_3539_, lean_object* v___f_3540_, lean_object* v_toPure_3541_, lean_object* v___x_3542_, lean_object* v_toBind_3543_, lean_object* v_traceElem_3544_, lean_object* v_____s_3545_){
_start:
{
uint8_t v___x_1163__boxed_3546_; lean_object* v_res_3547_; 
v___x_1163__boxed_3546_ = lean_unbox(v___x_3542_);
v_res_3547_ = l_Lean_addTraceAsMessages___redArg___lam__8(v_inst_3538_, v___f_3539_, v___f_3540_, v_toPure_3541_, v___x_1163__boxed_3546_, v_toBind_3543_, v_traceElem_3544_, v_____s_3545_);
return v_res_3547_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__0(void){
_start:
{
lean_object* v___x_3548_; lean_object* v___f_3549_; 
v___x_3548_ = lean_alloc_closure((void*)(l_instDecidableEqRaw___boxed), 2, 0);
v___f_3549_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3549_, 0, v___x_3548_);
return v___f_3549_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__1(void){
_start:
{
lean_object* v___f_3550_; lean_object* v___f_3551_; 
v___f_3550_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__0, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__0_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__0);
v___f_3551_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3551_, 0, v___f_3550_);
lean_closure_set(v___f_3551_, 1, v___f_3550_);
return v___f_3551_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__2(void){
_start:
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3552_ = lean_box(0);
v___x_3553_ = lean_unsigned_to_nat(16u);
v___x_3554_ = lean_mk_array(v___x_3553_, v___x_3552_);
return v___x_3554_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__3(void){
_start:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v_pos2traces_3557_; 
v___x_3555_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__2, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__2_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__2);
v___x_3556_ = lean_unsigned_to_nat(0u);
v_pos2traces_3557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_pos2traces_3557_, 0, v___x_3556_);
lean_ctor_set(v_pos2traces_3557_, 1, v___x_3555_);
return v_pos2traces_3557_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9(lean_object* v_inst_3558_, lean_object* v___f_3559_, lean_object* v_toPure_3560_, lean_object* v_toBind_3561_, lean_object* v_inst_3562_, lean_object* v___f_3563_, lean_object* v_traces_3564_){
_start:
{
uint8_t v___x_3565_; 
v___x_3565_ = l_Lean_PersistentArray_isEmpty___redArg(v_traces_3564_);
if (v___x_3565_ == 0)
{
lean_object* v___f_3566_; lean_object* v___x_3567_; lean_object* v___f_3568_; lean_object* v_pos2traces_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; 
v___f_3566_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__1, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__1_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__1);
v___x_3567_ = lean_box(v___x_3565_);
lean_inc(v_toBind_3561_);
v___f_3568_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__8___boxed), 8, 6);
lean_closure_set(v___f_3568_, 0, v_inst_3558_);
lean_closure_set(v___f_3568_, 1, v___f_3566_);
lean_closure_set(v___f_3568_, 2, v___f_3559_);
lean_closure_set(v___f_3568_, 3, v_toPure_3560_);
lean_closure_set(v___f_3568_, 4, v___x_3567_);
lean_closure_set(v___f_3568_, 5, v_toBind_3561_);
v_pos2traces_3569_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__3, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__3_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__3);
v___x_3570_ = l_Lean_PersistentArray_forIn___redArg(v_inst_3562_, v_traces_3564_, v_pos2traces_3569_, v___f_3568_);
v___x_3571_ = lean_apply_4(v_toBind_3561_, lean_box(0), lean_box(0), v___x_3570_, v___f_3563_);
return v___x_3571_;
}
else
{
lean_object* v___x_3572_; lean_object* v___x_3573_; 
lean_dec(v___f_3563_);
lean_dec_ref(v_inst_3562_);
lean_dec(v_toBind_3561_);
lean_dec_ref(v___f_3559_);
lean_dec_ref(v_inst_3558_);
v___x_3572_ = lean_box(0);
v___x_3573_ = lean_apply_2(v_toPure_3560_, lean_box(0), v___x_3572_);
return v___x_3573_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___boxed(lean_object* v_inst_3574_, lean_object* v___f_3575_, lean_object* v_toPure_3576_, lean_object* v_toBind_3577_, lean_object* v_inst_3578_, lean_object* v___f_3579_, lean_object* v_traces_3580_){
_start:
{
lean_object* v_res_3581_; 
v_res_3581_ = l_Lean_addTraceAsMessages___redArg___lam__9(v_inst_3574_, v___f_3575_, v_toPure_3576_, v_toBind_3577_, v_inst_3578_, v___f_3579_, v_traces_3580_);
lean_dec_ref(v_traces_3580_);
return v_res_3581_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10(lean_object* v_toPure_3582_, lean_object* v_logMessage_3583_, lean_object* v_toBind_3584_, lean_object* v_toMonadFileMap_3585_, lean_object* v_getFileName_3586_, lean_object* v_inst_3587_, lean_object* v___f_3588_, lean_object* v___f_3589_, lean_object* v___f_3590_, lean_object* v_inst_3591_, lean_object* v___f_3592_, lean_object* v_inst_3593_, lean_object* v_____do__lift_3594_){
_start:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3598_ = l_Lean_KVMap_instValueBool;
v___x_3599_ = l_Lean_KVMap_instValueString;
v___x_3600_ = l_Lean_trace_profiler_output;
v___x_3601_ = l_Lean_Option_get_x3f___redArg(v___x_3599_, v_____do__lift_3594_, v___x_3600_);
if (lean_obj_tag(v___x_3601_) == 0)
{
lean_object* v___x_3602_; lean_object* v___x_3603_; uint8_t v___x_3604_; 
v___x_3602_ = l_Lean_trace_profiler_serve;
v___x_3603_ = l_Lean_Option_get___redArg(v___x_3598_, v_____do__lift_3594_, v___x_3602_);
v___x_3604_ = lean_unbox(v___x_3603_);
lean_dec(v___x_3603_);
if (v___x_3604_ == 0)
{
uint8_t v___x_3605_; lean_object* v___x_3606_; lean_object* v___f_3607_; lean_object* v___f_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; 
v___x_3605_ = 1;
v___x_3606_ = lean_box(v___x_3605_);
lean_inc_ref_n(v_inst_3587_, 2);
lean_inc_n(v_toBind_3584_, 2);
lean_inc(v_toPure_3582_);
v___f_3607_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__6___boxed), 11, 10);
lean_closure_set(v___f_3607_, 0, v_toPure_3582_);
lean_closure_set(v___f_3607_, 1, v___x_3606_);
lean_closure_set(v___f_3607_, 2, v_logMessage_3583_);
lean_closure_set(v___f_3607_, 3, v_toBind_3584_);
lean_closure_set(v___f_3607_, 4, v_toMonadFileMap_3585_);
lean_closure_set(v___f_3607_, 5, v_getFileName_3586_);
lean_closure_set(v___f_3607_, 6, v_inst_3587_);
lean_closure_set(v___f_3607_, 7, v___f_3588_);
lean_closure_set(v___f_3607_, 8, v___f_3589_);
lean_closure_set(v___f_3607_, 9, v___f_3590_);
v___f_3608_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__9___boxed), 7, 6);
lean_closure_set(v___f_3608_, 0, v_inst_3591_);
lean_closure_set(v___f_3608_, 1, v___f_3592_);
lean_closure_set(v___f_3608_, 2, v_toPure_3582_);
lean_closure_set(v___f_3608_, 3, v_toBind_3584_);
lean_closure_set(v___f_3608_, 4, v_inst_3587_);
lean_closure_set(v___f_3608_, 5, v___f_3607_);
v___x_3609_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_3587_, v_inst_3593_);
v___x_3610_ = lean_apply_4(v_toBind_3584_, lean_box(0), lean_box(0), v___x_3609_, v___f_3608_);
return v___x_3610_;
}
else
{
lean_dec_ref(v_inst_3593_);
lean_dec_ref(v___f_3592_);
lean_dec_ref(v_inst_3591_);
lean_dec_ref(v___f_3590_);
lean_dec_ref(v___f_3589_);
lean_dec(v___f_3588_);
lean_dec_ref(v_inst_3587_);
lean_dec(v_getFileName_3586_);
lean_dec(v_toMonadFileMap_3585_);
lean_dec(v_toBind_3584_);
lean_dec(v_logMessage_3583_);
goto v___jp_3595_;
}
}
else
{
lean_dec_ref_known(v___x_3601_, 1);
lean_dec_ref(v_inst_3593_);
lean_dec_ref(v___f_3592_);
lean_dec_ref(v_inst_3591_);
lean_dec_ref(v___f_3590_);
lean_dec_ref(v___f_3589_);
lean_dec(v___f_3588_);
lean_dec_ref(v_inst_3587_);
lean_dec(v_getFileName_3586_);
lean_dec(v_toMonadFileMap_3585_);
lean_dec(v_toBind_3584_);
lean_dec(v_logMessage_3583_);
goto v___jp_3595_;
}
v___jp_3595_:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; 
v___x_3596_ = lean_box(0);
v___x_3597_ = lean_apply_2(v_toPure_3582_, lean_box(0), v___x_3596_);
return v___x_3597_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10___boxed(lean_object* v_toPure_3611_, lean_object* v_logMessage_3612_, lean_object* v_toBind_3613_, lean_object* v_toMonadFileMap_3614_, lean_object* v_getFileName_3615_, lean_object* v_inst_3616_, lean_object* v___f_3617_, lean_object* v___f_3618_, lean_object* v___f_3619_, lean_object* v_inst_3620_, lean_object* v___f_3621_, lean_object* v_inst_3622_, lean_object* v_____do__lift_3623_){
_start:
{
lean_object* v_res_3624_; 
v_res_3624_ = l_Lean_addTraceAsMessages___redArg___lam__10(v_toPure_3611_, v_logMessage_3612_, v_toBind_3613_, v_toMonadFileMap_3614_, v_getFileName_3615_, v_inst_3616_, v___f_3617_, v___f_3618_, v___f_3619_, v_inst_3620_, v___f_3621_, v_inst_3622_, v_____do__lift_3623_);
lean_dec_ref(v_____do__lift_3623_);
return v_res_3624_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg(lean_object* v_inst_3630_, lean_object* v_inst_3631_, lean_object* v_inst_3632_, lean_object* v_inst_3633_, lean_object* v_inst_3634_){
_start:
{
lean_object* v___f_3635_; lean_object* v_toApplicative_3636_; lean_object* v_toBind_3637_; lean_object* v_toPure_3638_; lean_object* v_toMonadFileMap_3639_; lean_object* v_getFileName_3640_; lean_object* v_logMessage_3641_; lean_object* v___f_3642_; lean_object* v___f_3643_; lean_object* v___f_3644_; lean_object* v___f_3645_; lean_object* v___x_3646_; 
v___f_3635_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__1));
v_toApplicative_3636_ = lean_ctor_get(v_inst_3631_, 0);
v_toBind_3637_ = lean_ctor_get(v_inst_3631_, 1);
lean_inc_n(v_toBind_3637_, 2);
v_toPure_3638_ = lean_ctor_get(v_toApplicative_3636_, 1);
lean_inc_n(v_toPure_3638_, 2);
v_toMonadFileMap_3639_ = lean_ctor_get(v_inst_3633_, 0);
lean_inc(v_toMonadFileMap_3639_);
v_getFileName_3640_ = lean_ctor_get(v_inst_3633_, 2);
lean_inc(v_getFileName_3640_);
v_logMessage_3641_ = lean_ctor_get(v_inst_3633_, 4);
lean_inc(v_logMessage_3641_);
lean_dec_ref(v_inst_3633_);
v___f_3642_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__2));
v___f_3643_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__3));
v___f_3644_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3644_, 0, v_toPure_3638_);
v___f_3645_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__10___boxed), 13, 12);
lean_closure_set(v___f_3645_, 0, v_toPure_3638_);
lean_closure_set(v___f_3645_, 1, v_logMessage_3641_);
lean_closure_set(v___f_3645_, 2, v_toBind_3637_);
lean_closure_set(v___f_3645_, 3, v_toMonadFileMap_3639_);
lean_closure_set(v___f_3645_, 4, v_getFileName_3640_);
lean_closure_set(v___f_3645_, 5, v_inst_3631_);
lean_closure_set(v___f_3645_, 6, v___f_3644_);
lean_closure_set(v___f_3645_, 7, v___f_3642_);
lean_closure_set(v___f_3645_, 8, v___f_3643_);
lean_closure_set(v___f_3645_, 9, v_inst_3632_);
lean_closure_set(v___f_3645_, 10, v___f_3635_);
lean_closure_set(v___f_3645_, 11, v_inst_3634_);
v___x_3646_ = lean_apply_4(v_toBind_3637_, lean_box(0), lean_box(0), v_inst_3630_, v___f_3645_);
return v___x_3646_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages(lean_object* v_m_3647_, lean_object* v_inst_3648_, lean_object* v_inst_3649_, lean_object* v_inst_3650_, lean_object* v_inst_3651_, lean_object* v_inst_3652_){
_start:
{
lean_object* v___x_3653_; 
v___x_3653_ = l_Lean_addTraceAsMessages___redArg(v_inst_3648_, v_inst_3649_, v_inst_3650_, v_inst_3651_, v_inst_3652_);
return v___x_3653_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; 
v___x_3695_ = lean_unsigned_to_nat(2826257906u);
v___x_3696_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3697_ = l_Lean_Name_num___override(v___x_3696_, v___x_3695_);
return v___x_3697_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; 
v___x_3699_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__19_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3700_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3701_ = l_Lean_Name_str___override(v___x_3700_, v___x_3699_);
return v___x_3701_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; 
v___x_3703_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__21_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3704_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3705_ = l_Lean_Name_str___override(v___x_3704_, v___x_3703_);
return v___x_3705_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3706_ = lean_unsigned_to_nat(2u);
v___x_3707_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3708_ = l_Lean_Name_num___override(v___x_3707_, v___x_3706_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3710_; uint8_t v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3710_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3711_ = 0;
v___x_3712_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3713_ = l_Lean_registerTraceClass(v___x_3710_, v___x_3711_, v___x_3712_);
return v___x_3713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2____boxed(lean_object* v___y_3714_){
_start:
{
lean_object* v_res_3715_; 
v_res_3715_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_();
return v_res_3715_;
}
}
lean_object* runtime_initialize_Lean_Elab_Exception(uint8_t builtin);
lean_object* runtime_initialize_Lean_Log(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_Trace(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedTraceElem_default = _init_l_Lean_instInhabitedTraceElem_default();
lean_mark_persistent(l_Lean_instInhabitedTraceElem_default);
l_Lean_instInhabitedTraceElem = _init_l_Lean_instInhabitedTraceElem();
lean_mark_persistent(l_Lean_instInhabitedTraceElem);
l_Lean_instInhabitedTraceState_default = _init_l_Lean_instInhabitedTraceState_default();
lean_mark_persistent(l_Lean_instInhabitedTraceState_default);
l_Lean_instInhabitedTraceState = _init_l_Lean_instInhabitedTraceState();
lean_mark_persistent(l_Lean_instInhabitedTraceState);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_inheritedTraceOptions = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_inheritedTraceOptions);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler_threshold = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler_threshold);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler_useHeartbeats = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler_useHeartbeats);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler_output = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler_output);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler_serve = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler_serve);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_trace_profiler_output_pp = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_trace_profiler_output_pp);
lean_dec_ref(res);
res = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_Trace(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_MonadTrace_getInheritedTraceOptions___autoParam = _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam();
lean_mark_persistent(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam);
l_Lean_registerTraceClass___auto__1 = _init_l_Lean_registerTraceClass___auto__1();
lean_mark_persistent(l_Lean_registerTraceClass___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Exception(uint8_t builtin);
lean_object* initialize_Lean_Log(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_Trace(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Exception(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Log(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_Trace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_Trace(builtin);
}
#ifdef __cplusplus
}
#endif
