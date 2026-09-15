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
lean_object* l_instMonadExceptOfEIO___redArg();
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
static lean_once_cell_t l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg();
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___boxed(lean_object*);
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
static lean_object* _init_l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0(void){
_start:
{
lean_object* v___x_1161_; 
v___x_1161_ = l_instMonadExceptOfEIO___redArg();
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg(){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = lean_obj_once(&l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0, &l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0_once, _init_l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___boxed(lean_object* v___dummy_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lean_instMonadAlwaysExceptEIO___redArg();
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO(lean_object* v_00_u03b5_1166_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = lean_obj_once(&l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0, &l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0_once, _init_l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT___redArg(lean_object* v_inst_1168_, lean_object* v_always_1169_){
_start:
{
lean_object* v___f_1170_; lean_object* v___f_1171_; lean_object* v___x_1172_; 
lean_inc_ref(v_always_1169_);
v___f_1170_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__1), 5, 2);
lean_closure_set(v___f_1170_, 0, v_always_1169_);
lean_closure_set(v___f_1170_, 1, v_inst_1168_);
v___f_1171_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1171_, 0, v_always_1169_);
v___x_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___f_1170_);
lean_ctor_set(v___x_1172_, 1, v___f_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT(lean_object* v_m_1173_, lean_object* v_inst_1174_, lean_object* v_00_u03b5_1175_, lean_object* v_00_u03c3_1176_, lean_object* v_always_1177_){
_start:
{
lean_object* v___x_1178_; 
v___x_1178_ = l_Lean_instMonadAlwaysExceptStateT___redArg(v_inst_1174_, v_always_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object* v_always_1179_){
_start:
{
lean_object* v___f_1180_; lean_object* v___f_1181_; lean_object* v___x_1182_; 
lean_inc_ref(v_always_1179_);
v___f_1180_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1180_, 0, v_always_1179_);
v___f_1181_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_1181_, 0, v_always_1179_);
v___x_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1182_, 0, v___f_1180_);
lean_ctor_set(v___x_1182_, 1, v___f_1181_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27(lean_object* v_m_1183_, lean_object* v_00_u03b5_1184_, lean_object* v_00_u03c9_1185_, lean_object* v_00_u03c3_1186_, lean_object* v_always_1187_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v_always_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object* v_always_1189_){
_start:
{
lean_object* v___f_1190_; lean_object* v___f_1191_; lean_object* v___x_1192_; 
lean_inc_ref(v_always_1189_);
v___f_1190_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1190_, 0, v_always_1189_);
v___f_1191_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_1191_, 0, v_always_1189_);
v___x_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1192_, 0, v___f_1190_);
lean_ctor_set(v___x_1192_, 1, v___f_1191_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT(lean_object* v_m_1193_, lean_object* v_00_u03b5_1194_, lean_object* v_00_u03c1_1195_, lean_object* v_always_1196_){
_start:
{
lean_object* v___x_1197_; 
v___x_1197_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v_always_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT___redArg(lean_object* v_always_1198_){
_start:
{
lean_object* v___x_1199_; 
v___x_1199_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg(v_always_1198_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT(lean_object* v_00_u03b1_1200_, lean_object* v_m_1201_, lean_object* v_00_u03b5_1202_, lean_object* v_00_u03c9_1203_, lean_object* v_00_u03b2_1204_, lean_object* v_always_1205_, lean_object* v_inst_1206_, lean_object* v_inst_1207_, lean_object* v_inst_1208_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg(v_always_1205_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT___boxed(lean_object* v_00_u03b1_1210_, lean_object* v_m_1211_, lean_object* v_00_u03b5_1212_, lean_object* v_00_u03c9_1213_, lean_object* v_00_u03b2_1214_, lean_object* v_always_1215_, lean_object* v_inst_1216_, lean_object* v_inst_1217_, lean_object* v_inst_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_Lean_instMonadAlwaysExceptMonadCacheT(v_00_u03b1_1210_, v_m_1211_, v_00_u03b5_1212_, v_00_u03c9_1213_, v_00_u03b2_1214_, v_always_1215_, v_inst_1216_, v_inst_1217_, v_inst_1218_);
lean_dec_ref(v_inst_1218_);
lean_dec_ref(v_inst_1217_);
return v_res_1219_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultBool___redArg___lam__0(lean_object* v_x_1226_){
_start:
{
if (lean_obj_tag(v_x_1226_) == 0)
{
uint8_t v___x_1227_; 
v___x_1227_ = 2;
return v___x_1227_;
}
else
{
lean_object* v_a_1228_; uint8_t v___x_1229_; 
v_a_1228_ = lean_ctor_get(v_x_1226_, 0);
v___x_1229_ = lean_unbox(v_a_1228_);
if (v___x_1229_ == 0)
{
uint8_t v___x_1230_; 
v___x_1230_ = 1;
return v___x_1230_;
}
else
{
uint8_t v___x_1231_; 
v___x_1231_ = 0;
return v___x_1231_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed(lean_object* v_x_1232_){
_start:
{
uint8_t v_res_1233_; lean_object* v_r_1234_; 
v_res_1233_ = l_Lean_instExceptToTraceResultBool___redArg___lam__0(v_x_1232_);
lean_dec_ref(v_x_1232_);
v_r_1234_ = lean_box(v_res_1233_);
return v_r_1234_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg(){
_start:
{
lean_object* v___f_1237_; 
v___f_1237_ = ((lean_object*)(l_Lean_instExceptToTraceResultBool___redArg___closed__0));
return v___f_1237_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___boxed(lean_object* v___dummy_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lean_instExceptToTraceResultBool___redArg();
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool(lean_object* v_00_u03b5_1240_){
_start:
{
lean_object* v___f_1241_; 
v___f_1241_ = ((lean_object*)(l_Lean_instExceptToTraceResultBool___redArg___closed__0));
return v___f_1241_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultOption___redArg___lam__0(lean_object* v_x_1242_){
_start:
{
if (lean_obj_tag(v_x_1242_) == 0)
{
uint8_t v___x_1243_; 
v___x_1243_ = 2;
return v___x_1243_;
}
else
{
lean_object* v_a_1244_; 
v_a_1244_ = lean_ctor_get(v_x_1242_, 0);
if (lean_obj_tag(v_a_1244_) == 0)
{
uint8_t v___x_1245_; 
v___x_1245_ = 1;
return v___x_1245_;
}
else
{
uint8_t v___x_1246_; 
v___x_1246_ = 0;
return v___x_1246_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___lam__0___boxed(lean_object* v_x_1247_){
_start:
{
uint8_t v_res_1248_; lean_object* v_r_1249_; 
v_res_1248_ = l_Lean_instExceptToTraceResultOption___redArg___lam__0(v_x_1247_);
lean_dec_ref(v_x_1247_);
v_r_1249_ = lean_box(v_res_1248_);
return v_r_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg(){
_start:
{
lean_object* v___f_1252_; 
v___f_1252_ = ((lean_object*)(l_Lean_instExceptToTraceResultOption___redArg___closed__0));
return v___f_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___boxed(lean_object* v___dummy_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lean_instExceptToTraceResultOption___redArg();
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption(lean_object* v_00_u03b1_1255_, lean_object* v_00_u03b5_1256_){
_start:
{
lean_object* v___f_1257_; 
v___f_1257_ = ((lean_object*)(l_Lean_instExceptToTraceResultOption___redArg___closed__0));
return v___f_1257_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultExpr___redArg___lam__0(lean_object* v_x_1258_){
_start:
{
if (lean_obj_tag(v_x_1258_) == 0)
{
uint8_t v___x_1259_; 
v___x_1259_ = 2;
return v___x_1259_;
}
else
{
lean_object* v_a_1260_; uint8_t v___x_1261_; 
v_a_1260_ = lean_ctor_get(v_x_1258_, 0);
v___x_1261_ = l_Lean_Expr_hasSyntheticSorry(v_a_1260_);
if (v___x_1261_ == 0)
{
uint8_t v___x_1262_; 
v___x_1262_ = 0;
return v___x_1262_;
}
else
{
uint8_t v___x_1263_; 
v___x_1263_ = 1;
return v___x_1263_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___lam__0___boxed(lean_object* v_x_1264_){
_start:
{
uint8_t v_res_1265_; lean_object* v_r_1266_; 
v_res_1265_ = l_Lean_instExceptToTraceResultExpr___redArg___lam__0(v_x_1264_);
lean_dec_ref(v_x_1264_);
v_r_1266_ = lean_box(v_res_1265_);
return v_r_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg(){
_start:
{
lean_object* v___f_1269_; 
v___f_1269_ = ((lean_object*)(l_Lean_instExceptToTraceResultExpr___redArg___closed__0));
return v___f_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___boxed(lean_object* v___dummy_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l_Lean_instExceptToTraceResultExpr___redArg();
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr(lean_object* v_00_u03b5_1272_){
_start:
{
lean_object* v___f_1273_; 
v___f_1273_ = ((lean_object*)(l_Lean_instExceptToTraceResultExpr___redArg___closed__0));
return v___f_1273_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResult___redArg___lam__0(lean_object* v_x_1274_){
_start:
{
if (lean_obj_tag(v_x_1274_) == 0)
{
uint8_t v___x_1275_; 
v___x_1275_ = 2;
return v___x_1275_;
}
else
{
uint8_t v___x_1276_; 
v___x_1276_ = 0;
return v___x_1276_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___lam__0___boxed(lean_object* v_x_1277_){
_start:
{
uint8_t v_res_1278_; lean_object* v_r_1279_; 
v_res_1278_ = l_Lean_instExceptToTraceResult___redArg___lam__0(v_x_1277_);
lean_dec_ref(v_x_1277_);
v_r_1279_ = lean_box(v_res_1278_);
return v_r_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg(){
_start:
{
lean_object* v___f_1282_; 
v___f_1282_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
return v___f_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___boxed(lean_object* v___dummy_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_instExceptToTraceResult___redArg();
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult(lean_object* v_00_u03b1_1285_, lean_object* v_00_u03b5_1286_){
_start:
{
lean_object* v___f_1287_; 
v___f_1287_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
return v___f_1287_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___redArg(lean_object* v_inst_1288_, lean_object* v_e_1289_){
_start:
{
lean_object* v___x_1290_; uint8_t v___x_1291_; 
v___x_1290_ = lean_apply_1(v_inst_1288_, v_e_1289_);
v___x_1291_ = lean_unbox(v___x_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___redArg___boxed(lean_object* v_inst_1292_, lean_object* v_e_1293_){
_start:
{
uint8_t v_res_1294_; lean_object* v_r_1295_; 
v_res_1294_ = l_Lean_Except_toTraceResult___redArg(v_inst_1292_, v_e_1293_);
v_r_1295_ = lean_box(v_res_1294_);
return v_r_1295_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult(lean_object* v_00_u03b1_1296_, lean_object* v_00_u03b5_1297_, lean_object* v_inst_1298_, lean_object* v_e_1299_){
_start:
{
lean_object* v___x_1300_; uint8_t v___x_1301_; 
v___x_1300_ = lean_apply_1(v_inst_1298_, v_e_1299_);
v___x_1301_ = lean_unbox(v___x_1300_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___boxed(lean_object* v_00_u03b1_1302_, lean_object* v_00_u03b5_1303_, lean_object* v_inst_1304_, lean_object* v_e_1305_){
_start:
{
uint8_t v_res_1306_; lean_object* v_r_1307_; 
v_res_1306_ = l_Lean_Except_toTraceResult(v_00_u03b1_1302_, v_00_u03b5_1303_, v_inst_1304_, v_e_1305_);
v_r_1307_ = lean_box(v_res_1306_);
return v_r_1307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0(lean_object* v_oldTraces_1308_, lean_object* v_s_1309_){
_start:
{
uint64_t v_tid_1310_; lean_object* v_traces_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1319_; 
v_tid_1310_ = lean_ctor_get_uint64(v_s_1309_, sizeof(void*)*1);
v_traces_1311_ = lean_ctor_get(v_s_1309_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v_s_1309_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1313_ = v_s_1309_;
v_isShared_1314_ = v_isSharedCheck_1319_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_traces_1311_);
lean_dec(v_s_1309_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1319_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1315_; lean_object* v___x_1317_; 
v___x_1315_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1308_, v_traces_1311_);
lean_dec_ref(v_traces_1311_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1315_);
v___x_1317_ = v___x_1313_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v___x_1315_);
lean_ctor_set_uint64(v_reuseFailAlloc_1318_, sizeof(void*)*1, v_tid_1310_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1321_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__0));
v___x_1322_ = l_Lean_stringToMessageData(v___x_1321_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1(lean_object* v_toPure_1323_, lean_object* v_x_1324_){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1325_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1);
v___x_1326_ = lean_apply_2(v_toPure_1323_, lean_box(0), v___x_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___boxed(lean_object* v_toPure_1327_, lean_object* v_x_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1(v_toPure_1327_, v_x_1328_);
lean_dec(v_x_1328_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2(lean_object* v_inst_1330_, lean_object* v___x_1331_, lean_object* v_fst_1332_, lean_object* v_____r_1333_){
_start:
{
lean_object* v___x_1334_; 
v___x_1334_ = l_MonadExcept_ofExcept___redArg(v_inst_1330_, v___x_1331_, v_fst_1332_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4(lean_object* v_inst_1335_, lean_object* v_inst_1336_, lean_object* v_inst_1337_, lean_object* v_inst_1338_, lean_object* v_oldTraces_1339_, lean_object* v_ref_1340_, lean_object* v_toBind_1341_, lean_object* v___f_1342_, lean_object* v_inst_1343_, lean_object* v_fst_1344_, lean_object* v_cls_1345_, uint8_t v_collapsed_1346_, lean_object* v_tag_1347_, lean_object* v___x_1348_, double v_fst_1349_, double v_snd_1350_, lean_object* v_m_1351_){
_start:
{
lean_object* v_data_1353_; lean_object* v_result_1356_; lean_object* v___x_1357_; double v___x_1358_; lean_object* v_data_1359_; uint8_t v___x_1360_; 
v_result_1356_ = lean_apply_1(v_inst_1343_, v_fst_1344_);
v___x_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1357_, 0, v_result_1356_);
v___x_1358_ = lean_float_once(&l_Lean_addTrace___redArg___lam__0___closed__0, &l_Lean_addTrace___redArg___lam__0___closed__0_once, _init_l_Lean_addTrace___redArg___lam__0___closed__0);
lean_inc_ref(v_tag_1347_);
lean_inc_ref(v___x_1357_);
lean_inc(v_cls_1345_);
v_data_1359_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1359_, 0, v_cls_1345_);
lean_ctor_set(v_data_1359_, 1, v___x_1357_);
lean_ctor_set(v_data_1359_, 2, v_tag_1347_);
lean_ctor_set_float(v_data_1359_, sizeof(void*)*3, v___x_1358_);
lean_ctor_set_float(v_data_1359_, sizeof(void*)*3 + 8, v___x_1358_);
lean_ctor_set_uint8(v_data_1359_, sizeof(void*)*3 + 16, v_collapsed_1346_);
v___x_1360_ = lean_unbox(v___x_1348_);
if (v___x_1360_ == 0)
{
lean_dec_ref_known(v___x_1357_, 1);
lean_dec_ref(v_tag_1347_);
lean_dec(v_cls_1345_);
v_data_1353_ = v_data_1359_;
goto v___jp_1352_;
}
else
{
lean_object* v_data_1361_; 
lean_dec_ref_known(v_data_1359_, 3);
v_data_1361_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1361_, 0, v_cls_1345_);
lean_ctor_set(v_data_1361_, 1, v___x_1357_);
lean_ctor_set(v_data_1361_, 2, v_tag_1347_);
lean_ctor_set_float(v_data_1361_, sizeof(void*)*3, v_fst_1349_);
lean_ctor_set_float(v_data_1361_, sizeof(void*)*3 + 8, v_snd_1350_);
lean_ctor_set_uint8(v_data_1361_, sizeof(void*)*3 + 16, v_collapsed_1346_);
v_data_1353_ = v_data_1361_;
goto v___jp_1352_;
}
v___jp_1352_:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(v_inst_1335_, v_inst_1336_, v_inst_1337_, v_inst_1338_, v_oldTraces_1339_, v_data_1353_, v_ref_1340_, v_m_1351_);
v___x_1355_ = lean_apply_4(v_toBind_1341_, lean_box(0), lean_box(0), v___x_1354_, v___f_1342_);
return v___x_1355_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_inst_1362_ = _args[0];
lean_object* v_inst_1363_ = _args[1];
lean_object* v_inst_1364_ = _args[2];
lean_object* v_inst_1365_ = _args[3];
lean_object* v_oldTraces_1366_ = _args[4];
lean_object* v_ref_1367_ = _args[5];
lean_object* v_toBind_1368_ = _args[6];
lean_object* v___f_1369_ = _args[7];
lean_object* v_inst_1370_ = _args[8];
lean_object* v_fst_1371_ = _args[9];
lean_object* v_cls_1372_ = _args[10];
lean_object* v_collapsed_1373_ = _args[11];
lean_object* v_tag_1374_ = _args[12];
lean_object* v___x_1375_ = _args[13];
lean_object* v_fst_1376_ = _args[14];
lean_object* v_snd_1377_ = _args[15];
lean_object* v_m_1378_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1379_; double v_fst_453__boxed_1380_; double v_snd_454__boxed_1381_; lean_object* v_res_1382_; 
v_collapsed_boxed_1379_ = lean_unbox(v_collapsed_1373_);
v_fst_453__boxed_1380_ = lean_unbox_float(v_fst_1376_);
lean_dec_ref(v_fst_1376_);
v_snd_454__boxed_1381_ = lean_unbox_float(v_snd_1377_);
lean_dec_ref(v_snd_1377_);
v_res_1382_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4(v_inst_1362_, v_inst_1363_, v_inst_1364_, v_inst_1365_, v_oldTraces_1366_, v_ref_1367_, v_toBind_1368_, v___f_1369_, v_inst_1370_, v_fst_1371_, v_cls_1372_, v_collapsed_boxed_1379_, v_tag_1374_, v___x_1375_, v_fst_453__boxed_1380_, v_snd_454__boxed_1381_, v_m_1378_);
lean_dec(v___x_1375_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3(lean_object* v_always_1383_, lean_object* v_inst_1384_, lean_object* v_inst_1385_, lean_object* v_inst_1386_, lean_object* v_inst_1387_, lean_object* v_oldTraces_1388_, lean_object* v_toBind_1389_, lean_object* v___f_1390_, lean_object* v_inst_1391_, lean_object* v_fst_1392_, lean_object* v_cls_1393_, uint8_t v_collapsed_1394_, lean_object* v_tag_1395_, lean_object* v___x_1396_, double v_fst_1397_, double v_snd_1398_, lean_object* v_msg_1399_, lean_object* v___f_1400_, lean_object* v_ref_1401_){
_start:
{
lean_object* v_tryCatch_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___f_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v_tryCatch_1402_ = lean_ctor_get(v_always_1383_, 1);
lean_inc(v_tryCatch_1402_);
lean_dec_ref(v_always_1383_);
v___x_1403_ = lean_box(v_collapsed_1394_);
v___x_1404_ = lean_box_float(v_fst_1397_);
v___x_1405_ = lean_box_float(v_snd_1398_);
lean_inc_ref(v_fst_1392_);
lean_inc(v_toBind_1389_);
v___f_1406_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4___boxed), 17, 16);
lean_closure_set(v___f_1406_, 0, v_inst_1384_);
lean_closure_set(v___f_1406_, 1, v_inst_1385_);
lean_closure_set(v___f_1406_, 2, v_inst_1386_);
lean_closure_set(v___f_1406_, 3, v_inst_1387_);
lean_closure_set(v___f_1406_, 4, v_oldTraces_1388_);
lean_closure_set(v___f_1406_, 5, v_ref_1401_);
lean_closure_set(v___f_1406_, 6, v_toBind_1389_);
lean_closure_set(v___f_1406_, 7, v___f_1390_);
lean_closure_set(v___f_1406_, 8, v_inst_1391_);
lean_closure_set(v___f_1406_, 9, v_fst_1392_);
lean_closure_set(v___f_1406_, 10, v_cls_1393_);
lean_closure_set(v___f_1406_, 11, v___x_1403_);
lean_closure_set(v___f_1406_, 12, v_tag_1395_);
lean_closure_set(v___f_1406_, 13, v___x_1396_);
lean_closure_set(v___f_1406_, 14, v___x_1404_);
lean_closure_set(v___f_1406_, 15, v___x_1405_);
v___x_1407_ = lean_apply_1(v_msg_1399_, v_fst_1392_);
v___x_1408_ = lean_apply_3(v_tryCatch_1402_, lean_box(0), v___x_1407_, v___f_1400_);
v___x_1409_ = lean_apply_4(v_toBind_1389_, lean_box(0), lean_box(0), v___x_1408_, v___f_1406_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_always_1410_ = _args[0];
lean_object* v_inst_1411_ = _args[1];
lean_object* v_inst_1412_ = _args[2];
lean_object* v_inst_1413_ = _args[3];
lean_object* v_inst_1414_ = _args[4];
lean_object* v_oldTraces_1415_ = _args[5];
lean_object* v_toBind_1416_ = _args[6];
lean_object* v___f_1417_ = _args[7];
lean_object* v_inst_1418_ = _args[8];
lean_object* v_fst_1419_ = _args[9];
lean_object* v_cls_1420_ = _args[10];
lean_object* v_collapsed_1421_ = _args[11];
lean_object* v_tag_1422_ = _args[12];
lean_object* v___x_1423_ = _args[13];
lean_object* v_fst_1424_ = _args[14];
lean_object* v_snd_1425_ = _args[15];
lean_object* v_msg_1426_ = _args[16];
lean_object* v___f_1427_ = _args[17];
lean_object* v_ref_1428_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_1429_; double v_fst_496__boxed_1430_; double v_snd_497__boxed_1431_; lean_object* v_res_1432_; 
v_collapsed_boxed_1429_ = lean_unbox(v_collapsed_1421_);
v_fst_496__boxed_1430_ = lean_unbox_float(v_fst_1424_);
lean_dec_ref(v_fst_1424_);
v_snd_497__boxed_1431_ = lean_unbox_float(v_snd_1425_);
lean_dec_ref(v_snd_1425_);
v_res_1432_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3(v_always_1410_, v_inst_1411_, v_inst_1412_, v_inst_1413_, v_inst_1414_, v_oldTraces_1415_, v_toBind_1416_, v___f_1417_, v_inst_1418_, v_fst_1419_, v_cls_1420_, v_collapsed_boxed_1429_, v_tag_1422_, v___x_1423_, v_fst_496__boxed_1430_, v_snd_497__boxed_1431_, v_msg_1426_, v___f_1427_, v_ref_1428_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(lean_object* v_inst_1433_, lean_object* v_inst_1434_, lean_object* v_inst_1435_, lean_object* v_inst_1436_, lean_object* v_always_1437_, lean_object* v_inst_1438_, lean_object* v_cls_1439_, uint8_t v_collapsed_1440_, lean_object* v_tag_1441_, lean_object* v_opts_1442_, uint8_t v_clsEnabled_1443_, lean_object* v_oldTraces_1444_, lean_object* v_msg_1445_, lean_object* v_resStartStop_1446_){
_start:
{
lean_object* v___x_1447_; lean_object* v_toApplicative_1448_; lean_object* v_toBind_1449_; lean_object* v___x_1450_; lean_object* v_snd_1451_; lean_object* v_toPure_1452_; lean_object* v_fst_1453_; lean_object* v_fst_1454_; lean_object* v_snd_1455_; lean_object* v___f_1456_; lean_object* v___f_1457_; lean_object* v___f_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___f_1462_; uint8_t v___y_1467_; double v___y_1472_; uint8_t v___x_1477_; 
v___x_1447_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1448_ = lean_ctor_get(v_inst_1433_, 0);
v_toBind_1449_ = lean_ctor_get(v_inst_1433_, 1);
lean_inc_n(v_toBind_1449_, 2);
lean_inc_ref(v_always_1437_);
v___x_1450_ = l_instMonadExceptOfMonadExceptOf___redArg(v_always_1437_);
v_snd_1451_ = lean_ctor_get(v_resStartStop_1446_, 1);
lean_inc(v_snd_1451_);
v_toPure_1452_ = lean_ctor_get(v_toApplicative_1448_, 1);
v_fst_1453_ = lean_ctor_get(v_resStartStop_1446_, 0);
lean_inc_n(v_fst_1453_, 2);
lean_dec_ref(v_resStartStop_1446_);
v_fst_1454_ = lean_ctor_get(v_snd_1451_, 0);
lean_inc_n(v_fst_1454_, 2);
v_snd_1455_ = lean_ctor_get(v_snd_1451_, 1);
lean_inc_n(v_snd_1455_, 2);
lean_dec(v_snd_1451_);
lean_inc_ref(v_oldTraces_1444_);
v___f_1456_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1456_, 0, v_oldTraces_1444_);
lean_inc(v_toPure_1452_);
v___f_1457_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1457_, 0, v_toPure_1452_);
lean_inc_ref(v_inst_1433_);
v___f_1458_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1458_, 0, v_inst_1433_);
lean_closure_set(v___f_1458_, 1, v___x_1450_);
lean_closure_set(v___f_1458_, 2, v_fst_1453_);
v___x_1459_ = l_Lean_trace_profiler;
v___x_1460_ = l_Lean_Option_get___redArg(v___x_1447_, v_opts_1442_, v___x_1459_);
v___x_1461_ = lean_box(v_collapsed_1440_);
lean_inc(v___x_1460_);
lean_inc_ref(v___f_1458_);
lean_inc_ref(v_inst_1435_);
lean_inc_ref(v_inst_1434_);
v___f_1462_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3___boxed), 19, 18);
lean_closure_set(v___f_1462_, 0, v_always_1437_);
lean_closure_set(v___f_1462_, 1, v_inst_1433_);
lean_closure_set(v___f_1462_, 2, v_inst_1434_);
lean_closure_set(v___f_1462_, 3, v_inst_1435_);
lean_closure_set(v___f_1462_, 4, v_inst_1436_);
lean_closure_set(v___f_1462_, 5, v_oldTraces_1444_);
lean_closure_set(v___f_1462_, 6, v_toBind_1449_);
lean_closure_set(v___f_1462_, 7, v___f_1458_);
lean_closure_set(v___f_1462_, 8, v_inst_1438_);
lean_closure_set(v___f_1462_, 9, v_fst_1453_);
lean_closure_set(v___f_1462_, 10, v_cls_1439_);
lean_closure_set(v___f_1462_, 11, v___x_1461_);
lean_closure_set(v___f_1462_, 12, v_tag_1441_);
lean_closure_set(v___f_1462_, 13, v___x_1460_);
lean_closure_set(v___f_1462_, 14, v_fst_1454_);
lean_closure_set(v___f_1462_, 15, v_snd_1455_);
lean_closure_set(v___f_1462_, 16, v_msg_1445_);
lean_closure_set(v___f_1462_, 17, v___f_1457_);
v___x_1477_ = lean_unbox(v___x_1460_);
if (v___x_1477_ == 0)
{
uint8_t v___x_1478_; 
lean_dec(v_snd_1455_);
lean_dec(v_fst_1454_);
v___x_1478_ = lean_unbox(v___x_1460_);
lean_dec(v___x_1460_);
v___y_1467_ = v___x_1478_;
goto v___jp_1466_;
}
else
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; uint8_t v___x_1482_; 
lean_dec(v___x_1460_);
v___x_1479_ = l_Lean_KVMap_instValueNat;
v___x_1480_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1481_ = l_Lean_Option_get___redArg(v___x_1447_, v_opts_1442_, v___x_1480_);
v___x_1482_ = lean_unbox(v___x_1481_);
lean_dec(v___x_1481_);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; lean_object* v___x_1484_; double v___x_1485_; double v___x_1486_; double v___x_1487_; 
v___x_1483_ = l_Lean_trace_profiler_threshold;
v___x_1484_ = l_Lean_Option_get___redArg(v___x_1479_, v_opts_1442_, v___x_1483_);
v___x_1485_ = lean_float_of_nat(v___x_1484_);
v___x_1486_ = lean_float_once(&l_Lean_trace_profiler_threshold_unitAdjusted___closed__0, &l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once, _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0);
v___x_1487_ = lean_float_div(v___x_1485_, v___x_1486_);
v___y_1472_ = v___x_1487_;
goto v___jp_1471_;
}
else
{
lean_object* v___x_1488_; lean_object* v___x_1489_; double v___x_1490_; 
v___x_1488_ = l_Lean_trace_profiler_threshold;
v___x_1489_ = l_Lean_Option_get___redArg(v___x_1479_, v_opts_1442_, v___x_1488_);
v___x_1490_ = lean_float_of_nat(v___x_1489_);
v___y_1472_ = v___x_1490_;
goto v___jp_1471_;
}
}
v___jp_1463_:
{
lean_object* v_getRef_1464_; lean_object* v___x_1465_; 
v_getRef_1464_ = lean_ctor_get(v_inst_1435_, 0);
lean_inc(v_getRef_1464_);
lean_dec_ref(v_inst_1435_);
v___x_1465_ = lean_apply_4(v_toBind_1449_, lean_box(0), lean_box(0), v_getRef_1464_, v___f_1462_);
return v___x_1465_;
}
v___jp_1466_:
{
if (v_clsEnabled_1443_ == 0)
{
if (v___y_1467_ == 0)
{
lean_object* v_modifyTraceState_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
lean_dec_ref(v___f_1462_);
lean_dec_ref(v_inst_1435_);
v_modifyTraceState_1468_ = lean_ctor_get(v_inst_1434_, 0);
lean_inc(v_modifyTraceState_1468_);
lean_dec_ref(v_inst_1434_);
v___x_1469_ = lean_apply_1(v_modifyTraceState_1468_, v___f_1456_);
v___x_1470_ = lean_apply_4(v_toBind_1449_, lean_box(0), lean_box(0), v___x_1469_, v___f_1458_);
return v___x_1470_;
}
else
{
lean_dec_ref(v___f_1458_);
lean_dec_ref(v___f_1456_);
lean_dec_ref(v_inst_1434_);
goto v___jp_1463_;
}
}
else
{
lean_dec_ref(v___f_1458_);
lean_dec_ref(v___f_1456_);
lean_dec_ref(v_inst_1434_);
goto v___jp_1463_;
}
}
v___jp_1471_:
{
double v___x_1473_; double v___x_1474_; double v___x_1475_; uint8_t v___x_1476_; 
v___x_1473_ = lean_unbox_float(v_snd_1455_);
lean_dec(v_snd_1455_);
v___x_1474_ = lean_unbox_float(v_fst_1454_);
lean_dec(v_fst_1454_);
v___x_1475_ = lean_float_sub(v___x_1473_, v___x_1474_);
v___x_1476_ = lean_float_decLt(v___y_1472_, v___x_1475_);
v___y_1467_ = v___x_1476_;
goto v___jp_1466_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___boxed(lean_object* v_inst_1491_, lean_object* v_inst_1492_, lean_object* v_inst_1493_, lean_object* v_inst_1494_, lean_object* v_always_1495_, lean_object* v_inst_1496_, lean_object* v_cls_1497_, lean_object* v_collapsed_1498_, lean_object* v_tag_1499_, lean_object* v_opts_1500_, lean_object* v_clsEnabled_1501_, lean_object* v_oldTraces_1502_, lean_object* v_msg_1503_, lean_object* v_resStartStop_1504_){
_start:
{
uint8_t v_collapsed_boxed_1505_; uint8_t v_clsEnabled_boxed_1506_; lean_object* v_res_1507_; 
v_collapsed_boxed_1505_ = lean_unbox(v_collapsed_1498_);
v_clsEnabled_boxed_1506_ = lean_unbox(v_clsEnabled_1501_);
v_res_1507_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1491_, v_inst_1492_, v_inst_1493_, v_inst_1494_, v_always_1495_, v_inst_1496_, v_cls_1497_, v_collapsed_boxed_1505_, v_tag_1499_, v_opts_1500_, v_clsEnabled_boxed_1506_, v_oldTraces_1502_, v_msg_1503_, v_resStartStop_1504_);
lean_dec_ref(v_opts_1500_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object* v_00_u03b1_1508_, lean_object* v_m_1509_, lean_object* v_inst_1510_, lean_object* v_inst_1511_, lean_object* v_inst_1512_, lean_object* v_inst_1513_, lean_object* v_00_u03b5_1514_, lean_object* v_always_1515_, lean_object* v_inst_1516_, lean_object* v_cls_1517_, uint8_t v_collapsed_1518_, lean_object* v_tag_1519_, lean_object* v_opts_1520_, uint8_t v_clsEnabled_1521_, lean_object* v_oldTraces_1522_, lean_object* v_msg_1523_, lean_object* v_resStartStop_1524_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1510_, v_inst_1511_, v_inst_1512_, v_inst_1513_, v_always_1515_, v_inst_1516_, v_cls_1517_, v_collapsed_1518_, v_tag_1519_, v_opts_1520_, v_clsEnabled_1521_, v_oldTraces_1522_, v_msg_1523_, v_resStartStop_1524_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___boxed(lean_object** _args){
lean_object* v_00_u03b1_1526_ = _args[0];
lean_object* v_m_1527_ = _args[1];
lean_object* v_inst_1528_ = _args[2];
lean_object* v_inst_1529_ = _args[3];
lean_object* v_inst_1530_ = _args[4];
lean_object* v_inst_1531_ = _args[5];
lean_object* v_00_u03b5_1532_ = _args[6];
lean_object* v_always_1533_ = _args[7];
lean_object* v_inst_1534_ = _args[8];
lean_object* v_cls_1535_ = _args[9];
lean_object* v_collapsed_1536_ = _args[10];
lean_object* v_tag_1537_ = _args[11];
lean_object* v_opts_1538_ = _args[12];
lean_object* v_clsEnabled_1539_ = _args[13];
lean_object* v_oldTraces_1540_ = _args[14];
lean_object* v_msg_1541_ = _args[15];
lean_object* v_resStartStop_1542_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1543_; uint8_t v_clsEnabled_boxed_1544_; lean_object* v_res_1545_; 
v_collapsed_boxed_1543_ = lean_unbox(v_collapsed_1536_);
v_clsEnabled_boxed_1544_ = lean_unbox(v_clsEnabled_1539_);
v_res_1545_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(v_00_u03b1_1526_, v_m_1527_, v_inst_1528_, v_inst_1529_, v_inst_1530_, v_inst_1531_, v_00_u03b5_1532_, v_always_1533_, v_inst_1534_, v_cls_1535_, v_collapsed_boxed_1543_, v_tag_1537_, v_opts_1538_, v_clsEnabled_boxed_1544_, v_oldTraces_1540_, v_msg_1541_, v_resStartStop_1542_);
lean_dec_ref(v_opts_1538_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0(lean_object* v_inst_1546_, lean_object* v_inst_1547_, lean_object* v_inst_1548_, lean_object* v_inst_1549_, lean_object* v_always_1550_, lean_object* v_inst_1551_, lean_object* v_cls_1552_, uint8_t v_collapsed_1553_, lean_object* v_tag_1554_, lean_object* v_opts_1555_, uint8_t v_clsEnabled_1556_, lean_object* v_oldTraces_1557_, lean_object* v_msg_1558_, lean_object* v_resStartStop_1559_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1546_, v_inst_1547_, v_inst_1548_, v_inst_1549_, v_always_1550_, v_inst_1551_, v_cls_1552_, v_collapsed_1553_, v_tag_1554_, v_opts_1555_, v_clsEnabled_1556_, v_oldTraces_1557_, v_msg_1558_, v_resStartStop_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0___boxed(lean_object* v_inst_1561_, lean_object* v_inst_1562_, lean_object* v_inst_1563_, lean_object* v_inst_1564_, lean_object* v_always_1565_, lean_object* v_inst_1566_, lean_object* v_cls_1567_, lean_object* v_collapsed_1568_, lean_object* v_tag_1569_, lean_object* v_opts_1570_, lean_object* v_clsEnabled_1571_, lean_object* v_oldTraces_1572_, lean_object* v_msg_1573_, lean_object* v_resStartStop_1574_){
_start:
{
uint8_t v_collapsed_boxed_1575_; uint8_t v_clsEnabled_boxed_1576_; lean_object* v_res_1577_; 
v_collapsed_boxed_1575_ = lean_unbox(v_collapsed_1568_);
v_clsEnabled_boxed_1576_ = lean_unbox(v_clsEnabled_1571_);
v_res_1577_ = l_Lean_withTraceNode___redArg___lam__0(v_inst_1561_, v_inst_1562_, v_inst_1563_, v_inst_1564_, v_always_1565_, v_inst_1566_, v_cls_1567_, v_collapsed_boxed_1575_, v_tag_1569_, v_opts_1570_, v_clsEnabled_boxed_1576_, v_oldTraces_1572_, v_msg_1573_, v_resStartStop_1574_);
lean_dec_ref(v_opts_1570_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__1(lean_object* v_toPure_1578_, lean_object* v_ex_1579_){
_start:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1580_, 0, v_ex_1579_);
v___x_1581_ = lean_apply_2(v_toPure_1578_, lean_box(0), v___x_1580_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__2(lean_object* v_toPure_1582_, lean_object* v_a_1583_){
_start:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1584_, 0, v_a_1583_);
v___x_1585_ = lean_apply_2(v_toPure_1582_, lean_box(0), v___x_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__3(lean_object* v_start_1586_, lean_object* v_a_1587_, lean_object* v_toPure_1588_, lean_object* v_stop_1589_){
_start:
{
double v___x_1590_; double v___x_1591_; double v___x_1592_; double v___x_1593_; double v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1590_ = lean_float_of_nat(v_start_1586_);
v___x_1591_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0, &l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0);
v___x_1592_ = lean_float_div(v___x_1590_, v___x_1591_);
v___x_1593_ = lean_float_of_nat(v_stop_1589_);
v___x_1594_ = lean_float_div(v___x_1593_, v___x_1591_);
v___x_1595_ = lean_box_float(v___x_1592_);
v___x_1596_ = lean_box_float(v___x_1594_);
v___x_1597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1595_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v___x_1598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1598_, 0, v_a_1587_);
lean_ctor_set(v___x_1598_, 1, v___x_1597_);
v___x_1599_ = lean_apply_2(v_toPure_1588_, lean_box(0), v___x_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__4(lean_object* v_start_1600_, lean_object* v_toPure_1601_, lean_object* v_toBind_1602_, lean_object* v___x_1603_, lean_object* v_a_1604_){
_start:
{
lean_object* v___f_1605_; lean_object* v___x_1606_; 
v___f_1605_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__3), 4, 3);
lean_closure_set(v___f_1605_, 0, v_start_1600_);
lean_closure_set(v___f_1605_, 1, v_a_1604_);
lean_closure_set(v___f_1605_, 2, v_toPure_1601_);
v___x_1606_ = lean_apply_4(v_toBind_1602_, lean_box(0), lean_box(0), v___x_1603_, v___f_1605_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__5(lean_object* v_toPure_1607_, lean_object* v_toBind_1608_, lean_object* v___x_1609_, lean_object* v___x_1610_, lean_object* v_start_1611_){
_start:
{
lean_object* v___f_1612_; lean_object* v___x_1613_; 
lean_inc(v_toBind_1608_);
v___f_1612_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1612_, 0, v_start_1611_);
lean_closure_set(v___f_1612_, 1, v_toPure_1607_);
lean_closure_set(v___f_1612_, 2, v_toBind_1608_);
lean_closure_set(v___f_1612_, 3, v___x_1609_);
v___x_1613_ = lean_apply_4(v_toBind_1608_, lean_box(0), lean_box(0), v___x_1610_, v___f_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__6(lean_object* v_start_1614_, lean_object* v_a_1615_, lean_object* v_toPure_1616_, lean_object* v_stop_1617_){
_start:
{
double v___x_1618_; double v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1618_ = lean_float_of_nat(v_start_1614_);
v___x_1619_ = lean_float_of_nat(v_stop_1617_);
v___x_1620_ = lean_box_float(v___x_1618_);
v___x_1621_ = lean_box_float(v___x_1619_);
v___x_1622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1620_);
lean_ctor_set(v___x_1622_, 1, v___x_1621_);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v_a_1615_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = lean_apply_2(v_toPure_1616_, lean_box(0), v___x_1623_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__7(lean_object* v_start_1625_, lean_object* v_toPure_1626_, lean_object* v_toBind_1627_, lean_object* v___x_1628_, lean_object* v_a_1629_){
_start:
{
lean_object* v___f_1630_; lean_object* v___x_1631_; 
v___f_1630_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__6), 4, 3);
lean_closure_set(v___f_1630_, 0, v_start_1625_);
lean_closure_set(v___f_1630_, 1, v_a_1629_);
lean_closure_set(v___f_1630_, 2, v_toPure_1626_);
v___x_1631_ = lean_apply_4(v_toBind_1627_, lean_box(0), lean_box(0), v___x_1628_, v___f_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__8(lean_object* v_toPure_1632_, lean_object* v_toBind_1633_, lean_object* v___x_1634_, lean_object* v___x_1635_, lean_object* v_start_1636_){
_start:
{
lean_object* v___f_1637_; lean_object* v___x_1638_; 
lean_inc(v_toBind_1633_);
v___f_1637_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__7), 5, 4);
lean_closure_set(v___f_1637_, 0, v_start_1636_);
lean_closure_set(v___f_1637_, 1, v_toPure_1632_);
lean_closure_set(v___f_1637_, 2, v_toBind_1633_);
lean_closure_set(v___f_1637_, 3, v___x_1634_);
v___x_1638_ = lean_apply_4(v_toBind_1633_, lean_box(0), lean_box(0), v___x_1635_, v___f_1637_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9(lean_object* v_always_1639_, lean_object* v_inst_1640_, lean_object* v_inst_1641_, lean_object* v_inst_1642_, lean_object* v_inst_1643_, lean_object* v_inst_1644_, lean_object* v_cls_1645_, uint8_t v_collapsed_1646_, lean_object* v_tag_1647_, lean_object* v_opts_1648_, uint8_t v_clsEnabled_1649_, lean_object* v_msg_1650_, lean_object* v_toPure_1651_, lean_object* v_toBind_1652_, lean_object* v_k_1653_, lean_object* v___x_1654_, lean_object* v_inst_1655_, lean_object* v_oldTraces_1656_){
_start:
{
lean_object* v_tryCatch_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___f_1660_; lean_object* v___f_1661_; lean_object* v___f_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; uint8_t v___x_1667_; 
v_tryCatch_1657_ = lean_ctor_get(v_always_1639_, 1);
lean_inc(v_tryCatch_1657_);
v___x_1658_ = lean_box(v_collapsed_1646_);
v___x_1659_ = lean_box(v_clsEnabled_1649_);
lean_inc_ref(v_opts_1648_);
v___f_1660_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__0___boxed), 14, 13);
lean_closure_set(v___f_1660_, 0, v_inst_1640_);
lean_closure_set(v___f_1660_, 1, v_inst_1641_);
lean_closure_set(v___f_1660_, 2, v_inst_1642_);
lean_closure_set(v___f_1660_, 3, v_inst_1643_);
lean_closure_set(v___f_1660_, 4, v_always_1639_);
lean_closure_set(v___f_1660_, 5, v_inst_1644_);
lean_closure_set(v___f_1660_, 6, v_cls_1645_);
lean_closure_set(v___f_1660_, 7, v___x_1658_);
lean_closure_set(v___f_1660_, 8, v_tag_1647_);
lean_closure_set(v___f_1660_, 9, v_opts_1648_);
lean_closure_set(v___f_1660_, 10, v___x_1659_);
lean_closure_set(v___f_1660_, 11, v_oldTraces_1656_);
lean_closure_set(v___f_1660_, 12, v_msg_1650_);
lean_inc_n(v_toPure_1651_, 2);
v___f_1661_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1661_, 0, v_toPure_1651_);
v___f_1662_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1662_, 0, v_toPure_1651_);
lean_inc(v_toBind_1652_);
v___x_1663_ = lean_apply_4(v_toBind_1652_, lean_box(0), lean_box(0), v_k_1653_, v___f_1662_);
v___x_1664_ = lean_apply_3(v_tryCatch_1657_, lean_box(0), v___x_1663_, v___f_1661_);
v___x_1665_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1666_ = l_Lean_Option_get___redArg(v___x_1654_, v_opts_1648_, v___x_1665_);
lean_dec_ref(v_opts_1648_);
v___x_1667_ = lean_unbox(v___x_1666_);
lean_dec(v___x_1666_);
if (v___x_1667_ == 0)
{
lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___f_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1668_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1669_ = lean_apply_2(v_inst_1655_, lean_box(0), v___x_1668_);
lean_inc(v___x_1669_);
lean_inc_n(v_toBind_1652_, 2);
v___f_1670_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1670_, 0, v_toPure_1651_);
lean_closure_set(v___f_1670_, 1, v_toBind_1652_);
lean_closure_set(v___f_1670_, 2, v___x_1669_);
lean_closure_set(v___f_1670_, 3, v___x_1664_);
v___x_1671_ = lean_apply_4(v_toBind_1652_, lean_box(0), lean_box(0), v___x_1669_, v___f_1670_);
v___x_1672_ = lean_apply_4(v_toBind_1652_, lean_box(0), lean_box(0), v___x_1671_, v___f_1660_);
return v___x_1672_;
}
else
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___f_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1673_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_1674_ = lean_apply_2(v_inst_1655_, lean_box(0), v___x_1673_);
lean_inc(v___x_1674_);
lean_inc_n(v_toBind_1652_, 2);
v___f_1675_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__8), 5, 4);
lean_closure_set(v___f_1675_, 0, v_toPure_1651_);
lean_closure_set(v___f_1675_, 1, v_toBind_1652_);
lean_closure_set(v___f_1675_, 2, v___x_1674_);
lean_closure_set(v___f_1675_, 3, v___x_1664_);
v___x_1676_ = lean_apply_4(v_toBind_1652_, lean_box(0), lean_box(0), v___x_1674_, v___f_1675_);
v___x_1677_ = lean_apply_4(v_toBind_1652_, lean_box(0), lean_box(0), v___x_1676_, v___f_1660_);
return v___x_1677_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9___boxed(lean_object** _args){
lean_object* v_always_1678_ = _args[0];
lean_object* v_inst_1679_ = _args[1];
lean_object* v_inst_1680_ = _args[2];
lean_object* v_inst_1681_ = _args[3];
lean_object* v_inst_1682_ = _args[4];
lean_object* v_inst_1683_ = _args[5];
lean_object* v_cls_1684_ = _args[6];
lean_object* v_collapsed_1685_ = _args[7];
lean_object* v_tag_1686_ = _args[8];
lean_object* v_opts_1687_ = _args[9];
lean_object* v_clsEnabled_1688_ = _args[10];
lean_object* v_msg_1689_ = _args[11];
lean_object* v_toPure_1690_ = _args[12];
lean_object* v_toBind_1691_ = _args[13];
lean_object* v_k_1692_ = _args[14];
lean_object* v___x_1693_ = _args[15];
lean_object* v_inst_1694_ = _args[16];
lean_object* v_oldTraces_1695_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_1696_; uint8_t v_clsEnabled_boxed_1697_; lean_object* v_res_1698_; 
v_collapsed_boxed_1696_ = lean_unbox(v_collapsed_1685_);
v_clsEnabled_boxed_1697_ = lean_unbox(v_clsEnabled_1688_);
v_res_1698_ = l_Lean_withTraceNode___redArg___lam__9(v_always_1678_, v_inst_1679_, v_inst_1680_, v_inst_1681_, v_inst_1682_, v_inst_1683_, v_cls_1684_, v_collapsed_boxed_1696_, v_tag_1686_, v_opts_1687_, v_clsEnabled_boxed_1697_, v_msg_1689_, v_toPure_1690_, v_toBind_1691_, v_k_1692_, v___x_1693_, v_inst_1694_, v_oldTraces_1695_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10(lean_object* v_always_1699_, lean_object* v_inst_1700_, lean_object* v_inst_1701_, lean_object* v_inst_1702_, lean_object* v_inst_1703_, lean_object* v_inst_1704_, lean_object* v_cls_1705_, uint8_t v_collapsed_1706_, lean_object* v_tag_1707_, lean_object* v_opts_1708_, lean_object* v_msg_1709_, lean_object* v_toPure_1710_, lean_object* v_toBind_1711_, lean_object* v_k_1712_, lean_object* v___x_1713_, lean_object* v_inst_1714_, uint8_t v_clsEnabled_1715_){
_start:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___f_1718_; 
v___x_1716_ = lean_box(v_collapsed_1706_);
v___x_1717_ = lean_box(v_clsEnabled_1715_);
lean_inc_ref(v___x_1713_);
lean_inc(v_k_1712_);
lean_inc(v_toBind_1711_);
lean_inc_ref(v_opts_1708_);
lean_inc_ref(v_inst_1701_);
lean_inc_ref(v_inst_1700_);
v___f_1718_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__9___boxed), 18, 17);
lean_closure_set(v___f_1718_, 0, v_always_1699_);
lean_closure_set(v___f_1718_, 1, v_inst_1700_);
lean_closure_set(v___f_1718_, 2, v_inst_1701_);
lean_closure_set(v___f_1718_, 3, v_inst_1702_);
lean_closure_set(v___f_1718_, 4, v_inst_1703_);
lean_closure_set(v___f_1718_, 5, v_inst_1704_);
lean_closure_set(v___f_1718_, 6, v_cls_1705_);
lean_closure_set(v___f_1718_, 7, v___x_1716_);
lean_closure_set(v___f_1718_, 8, v_tag_1707_);
lean_closure_set(v___f_1718_, 9, v_opts_1708_);
lean_closure_set(v___f_1718_, 10, v___x_1717_);
lean_closure_set(v___f_1718_, 11, v_msg_1709_);
lean_closure_set(v___f_1718_, 12, v_toPure_1710_);
lean_closure_set(v___f_1718_, 13, v_toBind_1711_);
lean_closure_set(v___f_1718_, 14, v_k_1712_);
lean_closure_set(v___f_1718_, 15, v___x_1713_);
lean_closure_set(v___f_1718_, 16, v_inst_1714_);
if (v_clsEnabled_1715_ == 0)
{
lean_object* v___x_1722_; lean_object* v___x_1723_; uint8_t v___x_1724_; 
v___x_1722_ = l_Lean_trace_profiler;
v___x_1723_ = l_Lean_Option_get___redArg(v___x_1713_, v_opts_1708_, v___x_1722_);
lean_dec_ref(v_opts_1708_);
v___x_1724_ = lean_unbox(v___x_1723_);
lean_dec(v___x_1723_);
if (v___x_1724_ == 0)
{
lean_dec_ref(v___f_1718_);
lean_dec(v_toBind_1711_);
lean_dec_ref(v_inst_1701_);
lean_dec_ref(v_inst_1700_);
return v_k_1712_;
}
else
{
lean_dec(v_k_1712_);
goto v___jp_1719_;
}
}
else
{
lean_dec_ref(v___x_1713_);
lean_dec(v_k_1712_);
lean_dec_ref(v_opts_1708_);
goto v___jp_1719_;
}
v___jp_1719_:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1720_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_1700_, v_inst_1701_);
v___x_1721_ = lean_apply_4(v_toBind_1711_, lean_box(0), lean_box(0), v___x_1720_, v___f_1718_);
return v___x_1721_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10___boxed(lean_object** _args){
lean_object* v_always_1725_ = _args[0];
lean_object* v_inst_1726_ = _args[1];
lean_object* v_inst_1727_ = _args[2];
lean_object* v_inst_1728_ = _args[3];
lean_object* v_inst_1729_ = _args[4];
lean_object* v_inst_1730_ = _args[5];
lean_object* v_cls_1731_ = _args[6];
lean_object* v_collapsed_1732_ = _args[7];
lean_object* v_tag_1733_ = _args[8];
lean_object* v_opts_1734_ = _args[9];
lean_object* v_msg_1735_ = _args[10];
lean_object* v_toPure_1736_ = _args[11];
lean_object* v_toBind_1737_ = _args[12];
lean_object* v_k_1738_ = _args[13];
lean_object* v___x_1739_ = _args[14];
lean_object* v_inst_1740_ = _args[15];
lean_object* v_clsEnabled_1741_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1742_; uint8_t v_clsEnabled_boxed_1743_; lean_object* v_res_1744_; 
v_collapsed_boxed_1742_ = lean_unbox(v_collapsed_1732_);
v_clsEnabled_boxed_1743_ = lean_unbox(v_clsEnabled_1741_);
v_res_1744_ = l_Lean_withTraceNode___redArg___lam__10(v_always_1725_, v_inst_1726_, v_inst_1727_, v_inst_1728_, v_inst_1729_, v_inst_1730_, v_cls_1731_, v_collapsed_boxed_1742_, v_tag_1733_, v_opts_1734_, v_msg_1735_, v_toPure_1736_, v_toBind_1737_, v_k_1738_, v___x_1739_, v_inst_1740_, v_clsEnabled_boxed_1743_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__13(lean_object* v_k_1745_, lean_object* v_inst_1746_, lean_object* v_toApplicative_1747_, lean_object* v_always_1748_, lean_object* v_inst_1749_, lean_object* v_inst_1750_, lean_object* v_inst_1751_, lean_object* v_inst_1752_, lean_object* v_cls_1753_, uint8_t v_collapsed_1754_, lean_object* v_tag_1755_, lean_object* v_msg_1756_, lean_object* v_toBind_1757_, lean_object* v___x_1758_, lean_object* v_inst_1759_, lean_object* v_inst_1760_, lean_object* v_opts_1761_){
_start:
{
uint8_t v_hasTrace_1762_; 
v_hasTrace_1762_ = lean_ctor_get_uint8(v_opts_1761_, sizeof(void*)*1);
if (v_hasTrace_1762_ == 0)
{
lean_dec_ref(v_opts_1761_);
lean_dec(v_inst_1760_);
lean_dec(v_inst_1759_);
lean_dec_ref(v___x_1758_);
lean_dec(v_toBind_1757_);
lean_dec(v_msg_1756_);
lean_dec_ref(v_tag_1755_);
lean_dec(v_cls_1753_);
lean_dec_ref(v_inst_1752_);
lean_dec(v_inst_1751_);
lean_dec_ref(v_inst_1750_);
lean_dec_ref(v_inst_1749_);
lean_dec_ref(v_always_1748_);
lean_dec_ref(v_toApplicative_1747_);
lean_dec_ref(v_inst_1746_);
return v_k_1745_;
}
else
{
lean_object* v_getInheritedTraceOptions_1763_; lean_object* v_toPure_1764_; lean_object* v___x_1765_; lean_object* v___f_1766_; lean_object* v___f_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v_getInheritedTraceOptions_1763_ = lean_ctor_get(v_inst_1746_, 2);
lean_inc(v_getInheritedTraceOptions_1763_);
v_toPure_1764_ = lean_ctor_get(v_toApplicative_1747_, 1);
lean_inc_n(v_toPure_1764_, 2);
lean_dec_ref(v_toApplicative_1747_);
v___x_1765_ = lean_box(v_collapsed_1754_);
lean_inc_n(v_toBind_1757_, 3);
lean_inc(v_cls_1753_);
v___f_1766_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__10___boxed), 17, 16);
lean_closure_set(v___f_1766_, 0, v_always_1748_);
lean_closure_set(v___f_1766_, 1, v_inst_1749_);
lean_closure_set(v___f_1766_, 2, v_inst_1746_);
lean_closure_set(v___f_1766_, 3, v_inst_1750_);
lean_closure_set(v___f_1766_, 4, v_inst_1751_);
lean_closure_set(v___f_1766_, 5, v_inst_1752_);
lean_closure_set(v___f_1766_, 6, v_cls_1753_);
lean_closure_set(v___f_1766_, 7, v___x_1765_);
lean_closure_set(v___f_1766_, 8, v_tag_1755_);
lean_closure_set(v___f_1766_, 9, v_opts_1761_);
lean_closure_set(v___f_1766_, 10, v_msg_1756_);
lean_closure_set(v___f_1766_, 11, v_toPure_1764_);
lean_closure_set(v___f_1766_, 12, v_toBind_1757_);
lean_closure_set(v___f_1766_, 13, v_k_1745_);
lean_closure_set(v___f_1766_, 14, v___x_1758_);
lean_closure_set(v___f_1766_, 15, v_inst_1759_);
v___f_1767_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1767_, 0, v_toPure_1764_);
lean_closure_set(v___f_1767_, 1, v_cls_1753_);
lean_closure_set(v___f_1767_, 2, v_toBind_1757_);
lean_closure_set(v___f_1767_, 3, v_inst_1760_);
v___x_1768_ = lean_apply_4(v_toBind_1757_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_1763_, v___f_1767_);
v___x_1769_ = lean_apply_4(v_toBind_1757_, lean_box(0), lean_box(0), v___x_1768_, v___f_1766_);
return v___x_1769_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_k_1770_ = _args[0];
lean_object* v_inst_1771_ = _args[1];
lean_object* v_toApplicative_1772_ = _args[2];
lean_object* v_always_1773_ = _args[3];
lean_object* v_inst_1774_ = _args[4];
lean_object* v_inst_1775_ = _args[5];
lean_object* v_inst_1776_ = _args[6];
lean_object* v_inst_1777_ = _args[7];
lean_object* v_cls_1778_ = _args[8];
lean_object* v_collapsed_1779_ = _args[9];
lean_object* v_tag_1780_ = _args[10];
lean_object* v_msg_1781_ = _args[11];
lean_object* v_toBind_1782_ = _args[12];
lean_object* v___x_1783_ = _args[13];
lean_object* v_inst_1784_ = _args[14];
lean_object* v_inst_1785_ = _args[15];
lean_object* v_opts_1786_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1787_; lean_object* v_res_1788_; 
v_collapsed_boxed_1787_ = lean_unbox(v_collapsed_1779_);
v_res_1788_ = l_Lean_withTraceNode___redArg___lam__13(v_k_1770_, v_inst_1771_, v_toApplicative_1772_, v_always_1773_, v_inst_1774_, v_inst_1775_, v_inst_1776_, v_inst_1777_, v_cls_1778_, v_collapsed_boxed_1787_, v_tag_1780_, v_msg_1781_, v_toBind_1782_, v___x_1783_, v_inst_1784_, v_inst_1785_, v_opts_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg(lean_object* v_inst_1789_, lean_object* v_inst_1790_, lean_object* v_inst_1791_, lean_object* v_inst_1792_, lean_object* v_inst_1793_, lean_object* v_always_1794_, lean_object* v_inst_1795_, lean_object* v_inst_1796_, lean_object* v_cls_1797_, lean_object* v_msg_1798_, lean_object* v_k_1799_, uint8_t v_collapsed_1800_, lean_object* v_tag_1801_){
_start:
{
lean_object* v___x_1802_; lean_object* v_toApplicative_1803_; lean_object* v_toBind_1804_; lean_object* v___x_1805_; lean_object* v___f_1806_; lean_object* v___x_1807_; 
v___x_1802_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1803_ = lean_ctor_get(v_inst_1789_, 0);
lean_inc_ref(v_toApplicative_1803_);
v_toBind_1804_ = lean_ctor_get(v_inst_1789_, 1);
lean_inc_n(v_toBind_1804_, 2);
v___x_1805_ = lean_box(v_collapsed_1800_);
lean_inc(v_inst_1793_);
v___f_1806_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__13___boxed), 17, 16);
lean_closure_set(v___f_1806_, 0, v_k_1799_);
lean_closure_set(v___f_1806_, 1, v_inst_1790_);
lean_closure_set(v___f_1806_, 2, v_toApplicative_1803_);
lean_closure_set(v___f_1806_, 3, v_always_1794_);
lean_closure_set(v___f_1806_, 4, v_inst_1789_);
lean_closure_set(v___f_1806_, 5, v_inst_1791_);
lean_closure_set(v___f_1806_, 6, v_inst_1792_);
lean_closure_set(v___f_1806_, 7, v_inst_1796_);
lean_closure_set(v___f_1806_, 8, v_cls_1797_);
lean_closure_set(v___f_1806_, 9, v___x_1805_);
lean_closure_set(v___f_1806_, 10, v_tag_1801_);
lean_closure_set(v___f_1806_, 11, v_msg_1798_);
lean_closure_set(v___f_1806_, 12, v_toBind_1804_);
lean_closure_set(v___f_1806_, 13, v___x_1802_);
lean_closure_set(v___f_1806_, 14, v_inst_1795_);
lean_closure_set(v___f_1806_, 15, v_inst_1793_);
v___x_1807_ = lean_apply_4(v_toBind_1804_, lean_box(0), lean_box(0), v_inst_1793_, v___f_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___boxed(lean_object* v_inst_1808_, lean_object* v_inst_1809_, lean_object* v_inst_1810_, lean_object* v_inst_1811_, lean_object* v_inst_1812_, lean_object* v_always_1813_, lean_object* v_inst_1814_, lean_object* v_inst_1815_, lean_object* v_cls_1816_, lean_object* v_msg_1817_, lean_object* v_k_1818_, lean_object* v_collapsed_1819_, lean_object* v_tag_1820_){
_start:
{
uint8_t v_collapsed_boxed_1821_; lean_object* v_res_1822_; 
v_collapsed_boxed_1821_ = lean_unbox(v_collapsed_1819_);
v_res_1822_ = l_Lean_withTraceNode___redArg(v_inst_1808_, v_inst_1809_, v_inst_1810_, v_inst_1811_, v_inst_1812_, v_always_1813_, v_inst_1814_, v_inst_1815_, v_cls_1816_, v_msg_1817_, v_k_1818_, v_collapsed_boxed_1821_, v_tag_1820_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode(lean_object* v_00_u03b1_1823_, lean_object* v_m_1824_, lean_object* v_inst_1825_, lean_object* v_inst_1826_, lean_object* v_inst_1827_, lean_object* v_inst_1828_, lean_object* v_inst_1829_, lean_object* v_00_u03b5_1830_, lean_object* v_always_1831_, lean_object* v_inst_1832_, lean_object* v_inst_1833_, lean_object* v_cls_1834_, lean_object* v_msg_1835_, lean_object* v_k_1836_, uint8_t v_collapsed_1837_, lean_object* v_tag_1838_){
_start:
{
lean_object* v___x_1839_; lean_object* v_toApplicative_1840_; lean_object* v_toBind_1841_; lean_object* v___x_1842_; lean_object* v___f_1843_; lean_object* v___x_1844_; 
v___x_1839_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1840_ = lean_ctor_get(v_inst_1825_, 0);
lean_inc_ref(v_toApplicative_1840_);
v_toBind_1841_ = lean_ctor_get(v_inst_1825_, 1);
lean_inc_n(v_toBind_1841_, 2);
v___x_1842_ = lean_box(v_collapsed_1837_);
lean_inc(v_inst_1829_);
v___f_1843_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__13___boxed), 17, 16);
lean_closure_set(v___f_1843_, 0, v_k_1836_);
lean_closure_set(v___f_1843_, 1, v_inst_1826_);
lean_closure_set(v___f_1843_, 2, v_toApplicative_1840_);
lean_closure_set(v___f_1843_, 3, v_always_1831_);
lean_closure_set(v___f_1843_, 4, v_inst_1825_);
lean_closure_set(v___f_1843_, 5, v_inst_1827_);
lean_closure_set(v___f_1843_, 6, v_inst_1828_);
lean_closure_set(v___f_1843_, 7, v_inst_1833_);
lean_closure_set(v___f_1843_, 8, v_cls_1834_);
lean_closure_set(v___f_1843_, 9, v___x_1842_);
lean_closure_set(v___f_1843_, 10, v_tag_1838_);
lean_closure_set(v___f_1843_, 11, v_msg_1835_);
lean_closure_set(v___f_1843_, 12, v_toBind_1841_);
lean_closure_set(v___f_1843_, 13, v___x_1839_);
lean_closure_set(v___f_1843_, 14, v_inst_1832_);
lean_closure_set(v___f_1843_, 15, v_inst_1829_);
v___x_1844_ = lean_apply_4(v_toBind_1841_, lean_box(0), lean_box(0), v_inst_1829_, v___f_1843_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___boxed(lean_object* v_00_u03b1_1845_, lean_object* v_m_1846_, lean_object* v_inst_1847_, lean_object* v_inst_1848_, lean_object* v_inst_1849_, lean_object* v_inst_1850_, lean_object* v_inst_1851_, lean_object* v_00_u03b5_1852_, lean_object* v_always_1853_, lean_object* v_inst_1854_, lean_object* v_inst_1855_, lean_object* v_cls_1856_, lean_object* v_msg_1857_, lean_object* v_k_1858_, lean_object* v_collapsed_1859_, lean_object* v_tag_1860_){
_start:
{
uint8_t v_collapsed_boxed_1861_; lean_object* v_res_1862_; 
v_collapsed_boxed_1861_ = lean_unbox(v_collapsed_1859_);
v_res_1862_ = l_Lean_withTraceNode(v_00_u03b1_1845_, v_m_1846_, v_inst_1847_, v_inst_1848_, v_inst_1849_, v_inst_1850_, v_inst_1851_, v_00_u03b5_1852_, v_always_1853_, v_inst_1854_, v_inst_1855_, v_cls_1856_, v_msg_1857_, v_k_1858_, v_collapsed_boxed_1861_, v_tag_1860_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0(lean_object* v_self_1863_){
_start:
{
lean_object* v_fst_1864_; 
v_fst_1864_ = lean_ctor_get(v_self_1863_, 0);
lean_inc(v_fst_1864_);
return v_fst_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0___boxed(lean_object* v_self_1865_){
_start:
{
lean_object* v_res_1866_; 
v_res_1866_ = l_Lean_withTraceNode_x27___redArg___lam__0(v_self_1865_);
lean_dec_ref(v_self_1865_);
return v_res_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__1(lean_object* v_toPure_1867_, lean_object* v_x_1868_){
_start:
{
if (lean_obj_tag(v_x_1868_) == 0)
{
lean_object* v_a_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v_a_1869_ = lean_ctor_get(v_x_1868_, 0);
lean_inc(v_a_1869_);
lean_dec_ref_known(v_x_1868_, 1);
v___x_1870_ = l_Lean_Exception_toMessageData(v_a_1869_);
v___x_1871_ = lean_apply_2(v_toPure_1867_, lean_box(0), v___x_1870_);
return v___x_1871_;
}
else
{
lean_object* v_a_1872_; lean_object* v_snd_1873_; lean_object* v___x_1874_; 
v_a_1872_ = lean_ctor_get(v_x_1868_, 0);
lean_inc(v_a_1872_);
lean_dec_ref_known(v_x_1868_, 1);
v_snd_1873_ = lean_ctor_get(v_a_1872_, 1);
lean_inc(v_snd_1873_);
lean_dec(v_a_1872_);
v___x_1874_ = lean_apply_2(v_toPure_1867_, lean_box(0), v_snd_1873_);
return v___x_1874_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__4(lean_object* v_toPure_1875_, lean_object* v_ex_1876_){
_start:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1877_, 0, v_ex_1876_);
v___x_1878_ = lean_apply_2(v_toPure_1875_, lean_box(0), v___x_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__2(lean_object* v_toPure_1879_, lean_object* v_a_1880_){
_start:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1881_, 0, v_a_1880_);
v___x_1882_ = lean_apply_2(v_toPure_1879_, lean_box(0), v___x_1881_);
return v___x_1882_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3(lean_object* v_inst_1883_, lean_object* v_inst_1884_, lean_object* v_inst_1885_, lean_object* v_inst_1886_, lean_object* v_inst_1887_, lean_object* v___f_1888_, lean_object* v_cls_1889_, uint8_t v_collapsed_1890_, lean_object* v_tag_1891_, lean_object* v_opts_1892_, uint8_t v_clsEnabled_1893_, lean_object* v_oldTraces_1894_, lean_object* v_msg_1895_, lean_object* v_resStartStop_1896_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1883_, v_inst_1884_, v_inst_1885_, v_inst_1886_, v_inst_1887_, v___f_1888_, v_cls_1889_, v_collapsed_1890_, v_tag_1891_, v_opts_1892_, v_clsEnabled_1893_, v_oldTraces_1894_, v_msg_1895_, v_resStartStop_1896_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3___boxed(lean_object* v_inst_1898_, lean_object* v_inst_1899_, lean_object* v_inst_1900_, lean_object* v_inst_1901_, lean_object* v_inst_1902_, lean_object* v___f_1903_, lean_object* v_cls_1904_, lean_object* v_collapsed_1905_, lean_object* v_tag_1906_, lean_object* v_opts_1907_, lean_object* v_clsEnabled_1908_, lean_object* v_oldTraces_1909_, lean_object* v_msg_1910_, lean_object* v_resStartStop_1911_){
_start:
{
uint8_t v_collapsed_boxed_1912_; uint8_t v_clsEnabled_boxed_1913_; lean_object* v_res_1914_; 
v_collapsed_boxed_1912_ = lean_unbox(v_collapsed_1905_);
v_clsEnabled_boxed_1913_ = lean_unbox(v_clsEnabled_1908_);
v_res_1914_ = l_Lean_withTraceNode_x27___redArg___lam__3(v_inst_1898_, v_inst_1899_, v_inst_1900_, v_inst_1901_, v_inst_1902_, v___f_1903_, v_cls_1904_, v_collapsed_boxed_1912_, v_tag_1906_, v_opts_1907_, v_clsEnabled_boxed_1913_, v_oldTraces_1909_, v_msg_1910_, v_resStartStop_1911_);
lean_dec_ref(v_opts_1907_);
return v_res_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__5(lean_object* v_start_1915_, lean_object* v_a_1916_, lean_object* v_toPure_1917_, lean_object* v_stop_1918_){
_start:
{
double v___x_1919_; double v___x_1920_; double v___x_1921_; double v___x_1922_; double v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1919_ = lean_float_of_nat(v_start_1915_);
v___x_1920_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0, &l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0);
v___x_1921_ = lean_float_div(v___x_1919_, v___x_1920_);
v___x_1922_ = lean_float_of_nat(v_stop_1918_);
v___x_1923_ = lean_float_div(v___x_1922_, v___x_1920_);
v___x_1924_ = lean_box_float(v___x_1921_);
v___x_1925_ = lean_box_float(v___x_1923_);
v___x_1926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1924_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1927_, 0, v_a_1916_);
lean_ctor_set(v___x_1927_, 1, v___x_1926_);
v___x_1928_ = lean_apply_2(v_toPure_1917_, lean_box(0), v___x_1927_);
return v___x_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__6(lean_object* v_start_1929_, lean_object* v_toPure_1930_, lean_object* v_toBind_1931_, lean_object* v___x_1932_, lean_object* v_a_1933_){
_start:
{
lean_object* v___f_1934_; lean_object* v___x_1935_; 
v___f_1934_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__5), 4, 3);
lean_closure_set(v___f_1934_, 0, v_start_1929_);
lean_closure_set(v___f_1934_, 1, v_a_1933_);
lean_closure_set(v___f_1934_, 2, v_toPure_1930_);
v___x_1935_ = lean_apply_4(v_toBind_1931_, lean_box(0), lean_box(0), v___x_1932_, v___f_1934_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__7(lean_object* v_toPure_1936_, lean_object* v_toBind_1937_, lean_object* v___x_1938_, lean_object* v___x_1939_, lean_object* v_start_1940_){
_start:
{
lean_object* v___f_1941_; lean_object* v___x_1942_; 
lean_inc(v_toBind_1937_);
v___f_1941_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__6), 5, 4);
lean_closure_set(v___f_1941_, 0, v_start_1940_);
lean_closure_set(v___f_1941_, 1, v_toPure_1936_);
lean_closure_set(v___f_1941_, 2, v_toBind_1937_);
lean_closure_set(v___f_1941_, 3, v___x_1938_);
v___x_1942_ = lean_apply_4(v_toBind_1937_, lean_box(0), lean_box(0), v___x_1939_, v___f_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__8(lean_object* v_start_1943_, lean_object* v_a_1944_, lean_object* v_toPure_1945_, lean_object* v_stop_1946_){
_start:
{
double v___x_1947_; double v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v___x_1947_ = lean_float_of_nat(v_start_1943_);
v___x_1948_ = lean_float_of_nat(v_stop_1946_);
v___x_1949_ = lean_box_float(v___x_1947_);
v___x_1950_ = lean_box_float(v___x_1948_);
v___x_1951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1949_);
lean_ctor_set(v___x_1951_, 1, v___x_1950_);
v___x_1952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1952_, 0, v_a_1944_);
lean_ctor_set(v___x_1952_, 1, v___x_1951_);
v___x_1953_ = lean_apply_2(v_toPure_1945_, lean_box(0), v___x_1952_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__9(lean_object* v_start_1954_, lean_object* v_toPure_1955_, lean_object* v_toBind_1956_, lean_object* v___x_1957_, lean_object* v_a_1958_){
_start:
{
lean_object* v___f_1959_; lean_object* v___x_1960_; 
v___f_1959_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__8), 4, 3);
lean_closure_set(v___f_1959_, 0, v_start_1954_);
lean_closure_set(v___f_1959_, 1, v_a_1958_);
lean_closure_set(v___f_1959_, 2, v_toPure_1955_);
v___x_1960_ = lean_apply_4(v_toBind_1956_, lean_box(0), lean_box(0), v___x_1957_, v___f_1959_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__10(lean_object* v_toPure_1961_, lean_object* v_toBind_1962_, lean_object* v___x_1963_, lean_object* v___x_1964_, lean_object* v_start_1965_){
_start:
{
lean_object* v___f_1966_; lean_object* v___x_1967_; 
lean_inc(v_toBind_1962_);
v___f_1966_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__9), 5, 4);
lean_closure_set(v___f_1966_, 0, v_start_1965_);
lean_closure_set(v___f_1966_, 1, v_toPure_1961_);
lean_closure_set(v___f_1966_, 2, v_toBind_1962_);
lean_closure_set(v___f_1966_, 3, v___x_1963_);
v___x_1967_ = lean_apply_4(v_toBind_1962_, lean_box(0), lean_box(0), v___x_1964_, v___f_1966_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11(lean_object* v_inst_1968_, lean_object* v_inst_1969_, lean_object* v_inst_1970_, lean_object* v_inst_1971_, lean_object* v_inst_1972_, lean_object* v___f_1973_, lean_object* v_cls_1974_, uint8_t v_collapsed_1975_, lean_object* v_tag_1976_, lean_object* v_opts_1977_, uint8_t v_clsEnabled_1978_, lean_object* v_msg_1979_, lean_object* v_toBind_1980_, lean_object* v_k_1981_, lean_object* v___f_1982_, lean_object* v___f_1983_, lean_object* v___x_1984_, lean_object* v_inst_1985_, lean_object* v_toPure_1986_, lean_object* v_oldTraces_1987_){
_start:
{
lean_object* v_tryCatch_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___f_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; uint8_t v___x_1996_; 
v_tryCatch_1988_ = lean_ctor_get(v_inst_1968_, 1);
lean_inc(v_tryCatch_1988_);
v___x_1989_ = lean_box(v_collapsed_1975_);
v___x_1990_ = lean_box(v_clsEnabled_1978_);
lean_inc_ref(v_opts_1977_);
v___f_1991_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__3___boxed), 14, 13);
lean_closure_set(v___f_1991_, 0, v_inst_1969_);
lean_closure_set(v___f_1991_, 1, v_inst_1970_);
lean_closure_set(v___f_1991_, 2, v_inst_1971_);
lean_closure_set(v___f_1991_, 3, v_inst_1972_);
lean_closure_set(v___f_1991_, 4, v_inst_1968_);
lean_closure_set(v___f_1991_, 5, v___f_1973_);
lean_closure_set(v___f_1991_, 6, v_cls_1974_);
lean_closure_set(v___f_1991_, 7, v___x_1989_);
lean_closure_set(v___f_1991_, 8, v_tag_1976_);
lean_closure_set(v___f_1991_, 9, v_opts_1977_);
lean_closure_set(v___f_1991_, 10, v___x_1990_);
lean_closure_set(v___f_1991_, 11, v_oldTraces_1987_);
lean_closure_set(v___f_1991_, 12, v_msg_1979_);
lean_inc(v_toBind_1980_);
v___x_1992_ = lean_apply_4(v_toBind_1980_, lean_box(0), lean_box(0), v_k_1981_, v___f_1982_);
v___x_1993_ = lean_apply_3(v_tryCatch_1988_, lean_box(0), v___x_1992_, v___f_1983_);
v___x_1994_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1995_ = l_Lean_Option_get___redArg(v___x_1984_, v_opts_1977_, v___x_1994_);
lean_dec_ref(v_opts_1977_);
v___x_1996_ = lean_unbox(v___x_1995_);
lean_dec(v___x_1995_);
if (v___x_1996_ == 0)
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___f_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1997_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1998_ = lean_apply_2(v_inst_1985_, lean_box(0), v___x_1997_);
lean_inc(v___x_1998_);
lean_inc_n(v_toBind_1980_, 2);
v___f_1999_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__7), 5, 4);
lean_closure_set(v___f_1999_, 0, v_toPure_1986_);
lean_closure_set(v___f_1999_, 1, v_toBind_1980_);
lean_closure_set(v___f_1999_, 2, v___x_1998_);
lean_closure_set(v___f_1999_, 3, v___x_1993_);
v___x_2000_ = lean_apply_4(v_toBind_1980_, lean_box(0), lean_box(0), v___x_1998_, v___f_1999_);
v___x_2001_ = lean_apply_4(v_toBind_1980_, lean_box(0), lean_box(0), v___x_2000_, v___f_1991_);
return v___x_2001_;
}
else
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___f_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; 
v___x_2002_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_2003_ = lean_apply_2(v_inst_1985_, lean_box(0), v___x_2002_);
lean_inc(v___x_2003_);
lean_inc_n(v_toBind_1980_, 2);
v___f_2004_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__10), 5, 4);
lean_closure_set(v___f_2004_, 0, v_toPure_1986_);
lean_closure_set(v___f_2004_, 1, v_toBind_1980_);
lean_closure_set(v___f_2004_, 2, v___x_2003_);
lean_closure_set(v___f_2004_, 3, v___x_1993_);
v___x_2005_ = lean_apply_4(v_toBind_1980_, lean_box(0), lean_box(0), v___x_2003_, v___f_2004_);
v___x_2006_ = lean_apply_4(v_toBind_1980_, lean_box(0), lean_box(0), v___x_2005_, v___f_1991_);
return v___x_2006_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11___boxed(lean_object** _args){
lean_object* v_inst_2007_ = _args[0];
lean_object* v_inst_2008_ = _args[1];
lean_object* v_inst_2009_ = _args[2];
lean_object* v_inst_2010_ = _args[3];
lean_object* v_inst_2011_ = _args[4];
lean_object* v___f_2012_ = _args[5];
lean_object* v_cls_2013_ = _args[6];
lean_object* v_collapsed_2014_ = _args[7];
lean_object* v_tag_2015_ = _args[8];
lean_object* v_opts_2016_ = _args[9];
lean_object* v_clsEnabled_2017_ = _args[10];
lean_object* v_msg_2018_ = _args[11];
lean_object* v_toBind_2019_ = _args[12];
lean_object* v_k_2020_ = _args[13];
lean_object* v___f_2021_ = _args[14];
lean_object* v___f_2022_ = _args[15];
lean_object* v___x_2023_ = _args[16];
lean_object* v_inst_2024_ = _args[17];
lean_object* v_toPure_2025_ = _args[18];
lean_object* v_oldTraces_2026_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_2027_; uint8_t v_clsEnabled_boxed_2028_; lean_object* v_res_2029_; 
v_collapsed_boxed_2027_ = lean_unbox(v_collapsed_2014_);
v_clsEnabled_boxed_2028_ = lean_unbox(v_clsEnabled_2017_);
v_res_2029_ = l_Lean_withTraceNode_x27___redArg___lam__11(v_inst_2007_, v_inst_2008_, v_inst_2009_, v_inst_2010_, v_inst_2011_, v___f_2012_, v_cls_2013_, v_collapsed_boxed_2027_, v_tag_2015_, v_opts_2016_, v_clsEnabled_boxed_2028_, v_msg_2018_, v_toBind_2019_, v_k_2020_, v___f_2021_, v___f_2022_, v___x_2023_, v_inst_2024_, v_toPure_2025_, v_oldTraces_2026_);
return v_res_2029_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12(lean_object* v_inst_2030_, lean_object* v_inst_2031_, lean_object* v_inst_2032_, lean_object* v_inst_2033_, lean_object* v_inst_2034_, lean_object* v___f_2035_, lean_object* v_cls_2036_, uint8_t v_collapsed_2037_, lean_object* v_tag_2038_, lean_object* v_opts_2039_, lean_object* v_msg_2040_, lean_object* v_toBind_2041_, lean_object* v_k_2042_, lean_object* v___f_2043_, lean_object* v___f_2044_, lean_object* v___x_2045_, lean_object* v_inst_2046_, lean_object* v_toPure_2047_, uint8_t v_clsEnabled_2048_){
_start:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___f_2051_; 
v___x_2049_ = lean_box(v_collapsed_2037_);
v___x_2050_ = lean_box(v_clsEnabled_2048_);
lean_inc_ref(v___x_2045_);
lean_inc(v_k_2042_);
lean_inc(v_toBind_2041_);
lean_inc_ref(v_opts_2039_);
lean_inc_ref(v_inst_2032_);
lean_inc_ref(v_inst_2031_);
v___f_2051_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__11___boxed), 20, 19);
lean_closure_set(v___f_2051_, 0, v_inst_2030_);
lean_closure_set(v___f_2051_, 1, v_inst_2031_);
lean_closure_set(v___f_2051_, 2, v_inst_2032_);
lean_closure_set(v___f_2051_, 3, v_inst_2033_);
lean_closure_set(v___f_2051_, 4, v_inst_2034_);
lean_closure_set(v___f_2051_, 5, v___f_2035_);
lean_closure_set(v___f_2051_, 6, v_cls_2036_);
lean_closure_set(v___f_2051_, 7, v___x_2049_);
lean_closure_set(v___f_2051_, 8, v_tag_2038_);
lean_closure_set(v___f_2051_, 9, v_opts_2039_);
lean_closure_set(v___f_2051_, 10, v___x_2050_);
lean_closure_set(v___f_2051_, 11, v_msg_2040_);
lean_closure_set(v___f_2051_, 12, v_toBind_2041_);
lean_closure_set(v___f_2051_, 13, v_k_2042_);
lean_closure_set(v___f_2051_, 14, v___f_2043_);
lean_closure_set(v___f_2051_, 15, v___f_2044_);
lean_closure_set(v___f_2051_, 16, v___x_2045_);
lean_closure_set(v___f_2051_, 17, v_inst_2046_);
lean_closure_set(v___f_2051_, 18, v_toPure_2047_);
if (v_clsEnabled_2048_ == 0)
{
lean_object* v___x_2055_; lean_object* v___x_2056_; uint8_t v___x_2057_; 
v___x_2055_ = l_Lean_trace_profiler;
v___x_2056_ = l_Lean_Option_get___redArg(v___x_2045_, v_opts_2039_, v___x_2055_);
lean_dec_ref(v_opts_2039_);
v___x_2057_ = lean_unbox(v___x_2056_);
lean_dec(v___x_2056_);
if (v___x_2057_ == 0)
{
lean_dec_ref(v___f_2051_);
lean_dec(v_toBind_2041_);
lean_dec_ref(v_inst_2032_);
lean_dec_ref(v_inst_2031_);
return v_k_2042_;
}
else
{
lean_dec(v_k_2042_);
goto v___jp_2052_;
}
}
else
{
lean_dec_ref(v___x_2045_);
lean_dec(v_k_2042_);
lean_dec_ref(v_opts_2039_);
goto v___jp_2052_;
}
v___jp_2052_:
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2053_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_2031_, v_inst_2032_);
v___x_2054_ = lean_apply_4(v_toBind_2041_, lean_box(0), lean_box(0), v___x_2053_, v___f_2051_);
return v___x_2054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12___boxed(lean_object** _args){
lean_object* v_inst_2058_ = _args[0];
lean_object* v_inst_2059_ = _args[1];
lean_object* v_inst_2060_ = _args[2];
lean_object* v_inst_2061_ = _args[3];
lean_object* v_inst_2062_ = _args[4];
lean_object* v___f_2063_ = _args[5];
lean_object* v_cls_2064_ = _args[6];
lean_object* v_collapsed_2065_ = _args[7];
lean_object* v_tag_2066_ = _args[8];
lean_object* v_opts_2067_ = _args[9];
lean_object* v_msg_2068_ = _args[10];
lean_object* v_toBind_2069_ = _args[11];
lean_object* v_k_2070_ = _args[12];
lean_object* v___f_2071_ = _args[13];
lean_object* v___f_2072_ = _args[14];
lean_object* v___x_2073_ = _args[15];
lean_object* v_inst_2074_ = _args[16];
lean_object* v_toPure_2075_ = _args[17];
lean_object* v_clsEnabled_2076_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_2077_; uint8_t v_clsEnabled_boxed_2078_; lean_object* v_res_2079_; 
v_collapsed_boxed_2077_ = lean_unbox(v_collapsed_2065_);
v_clsEnabled_boxed_2078_ = lean_unbox(v_clsEnabled_2076_);
v_res_2079_ = l_Lean_withTraceNode_x27___redArg___lam__12(v_inst_2058_, v_inst_2059_, v_inst_2060_, v_inst_2061_, v_inst_2062_, v___f_2063_, v_cls_2064_, v_collapsed_boxed_2077_, v_tag_2066_, v_opts_2067_, v_msg_2068_, v_toBind_2069_, v_k_2070_, v___f_2071_, v___f_2072_, v___x_2073_, v_inst_2074_, v_toPure_2075_, v_clsEnabled_boxed_2078_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13(lean_object* v_k_2080_, lean_object* v_inst_2081_, lean_object* v_inst_2082_, lean_object* v_inst_2083_, lean_object* v_inst_2084_, lean_object* v_inst_2085_, lean_object* v___f_2086_, lean_object* v_cls_2087_, uint8_t v_collapsed_2088_, lean_object* v_tag_2089_, lean_object* v_msg_2090_, lean_object* v_toBind_2091_, lean_object* v___f_2092_, lean_object* v___f_2093_, lean_object* v___x_2094_, lean_object* v_inst_2095_, lean_object* v_toPure_2096_, lean_object* v___f_2097_, lean_object* v_opts_2098_){
_start:
{
uint8_t v_hasTrace_2099_; 
v_hasTrace_2099_ = lean_ctor_get_uint8(v_opts_2098_, sizeof(void*)*1);
if (v_hasTrace_2099_ == 0)
{
lean_dec_ref(v_opts_2098_);
lean_dec(v___f_2097_);
lean_dec(v_toPure_2096_);
lean_dec(v_inst_2095_);
lean_dec_ref(v___x_2094_);
lean_dec(v___f_2093_);
lean_dec(v___f_2092_);
lean_dec(v_toBind_2091_);
lean_dec(v_msg_2090_);
lean_dec_ref(v_tag_2089_);
lean_dec(v_cls_2087_);
lean_dec_ref(v___f_2086_);
lean_dec(v_inst_2085_);
lean_dec_ref(v_inst_2084_);
lean_dec_ref(v_inst_2083_);
lean_dec_ref(v_inst_2082_);
lean_dec_ref(v_inst_2081_);
return v_k_2080_;
}
else
{
lean_object* v_getInheritedTraceOptions_2100_; lean_object* v___x_2101_; lean_object* v___f_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; 
v_getInheritedTraceOptions_2100_ = lean_ctor_get(v_inst_2081_, 2);
lean_inc(v_getInheritedTraceOptions_2100_);
v___x_2101_ = lean_box(v_collapsed_2088_);
lean_inc_n(v_toBind_2091_, 2);
v___f_2102_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__12___boxed), 19, 18);
lean_closure_set(v___f_2102_, 0, v_inst_2082_);
lean_closure_set(v___f_2102_, 1, v_inst_2083_);
lean_closure_set(v___f_2102_, 2, v_inst_2081_);
lean_closure_set(v___f_2102_, 3, v_inst_2084_);
lean_closure_set(v___f_2102_, 4, v_inst_2085_);
lean_closure_set(v___f_2102_, 5, v___f_2086_);
lean_closure_set(v___f_2102_, 6, v_cls_2087_);
lean_closure_set(v___f_2102_, 7, v___x_2101_);
lean_closure_set(v___f_2102_, 8, v_tag_2089_);
lean_closure_set(v___f_2102_, 9, v_opts_2098_);
lean_closure_set(v___f_2102_, 10, v_msg_2090_);
lean_closure_set(v___f_2102_, 11, v_toBind_2091_);
lean_closure_set(v___f_2102_, 12, v_k_2080_);
lean_closure_set(v___f_2102_, 13, v___f_2092_);
lean_closure_set(v___f_2102_, 14, v___f_2093_);
lean_closure_set(v___f_2102_, 15, v___x_2094_);
lean_closure_set(v___f_2102_, 16, v_inst_2095_);
lean_closure_set(v___f_2102_, 17, v_toPure_2096_);
v___x_2103_ = lean_apply_4(v_toBind_2091_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_2100_, v___f_2097_);
v___x_2104_ = lean_apply_4(v_toBind_2091_, lean_box(0), lean_box(0), v___x_2103_, v___f_2102_);
return v___x_2104_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_k_2105_ = _args[0];
lean_object* v_inst_2106_ = _args[1];
lean_object* v_inst_2107_ = _args[2];
lean_object* v_inst_2108_ = _args[3];
lean_object* v_inst_2109_ = _args[4];
lean_object* v_inst_2110_ = _args[5];
lean_object* v___f_2111_ = _args[6];
lean_object* v_cls_2112_ = _args[7];
lean_object* v_collapsed_2113_ = _args[8];
lean_object* v_tag_2114_ = _args[9];
lean_object* v_msg_2115_ = _args[10];
lean_object* v_toBind_2116_ = _args[11];
lean_object* v___f_2117_ = _args[12];
lean_object* v___f_2118_ = _args[13];
lean_object* v___x_2119_ = _args[14];
lean_object* v_inst_2120_ = _args[15];
lean_object* v_toPure_2121_ = _args[16];
lean_object* v___f_2122_ = _args[17];
lean_object* v_opts_2123_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_2124_; lean_object* v_res_2125_; 
v_collapsed_boxed_2124_ = lean_unbox(v_collapsed_2113_);
v_res_2125_ = l_Lean_withTraceNode_x27___redArg___lam__13(v_k_2105_, v_inst_2106_, v_inst_2107_, v_inst_2108_, v_inst_2109_, v_inst_2110_, v___f_2111_, v_cls_2112_, v_collapsed_boxed_2124_, v_tag_2114_, v_msg_2115_, v_toBind_2116_, v___f_2117_, v___f_2118_, v___x_2119_, v_inst_2120_, v_toPure_2121_, v___f_2122_, v_opts_2123_);
return v_res_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg(lean_object* v_inst_2127_, lean_object* v_inst_2128_, lean_object* v_inst_2129_, lean_object* v_inst_2130_, lean_object* v_inst_2131_, lean_object* v_inst_2132_, lean_object* v_inst_2133_, lean_object* v_cls_2134_, lean_object* v_k_2135_, uint8_t v_collapsed_2136_, lean_object* v_tag_2137_){
_start:
{
lean_object* v_toApplicative_2138_; lean_object* v_toFunctor_2139_; lean_object* v_toBind_2140_; lean_object* v_toPure_2141_; lean_object* v_map_2142_; lean_object* v___f_2143_; lean_object* v_msg_2144_; lean_object* v___f_2145_; lean_object* v___f_2146_; lean_object* v___f_2147_; lean_object* v___f_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___f_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
v_toApplicative_2138_ = lean_ctor_get(v_inst_2127_, 0);
v_toFunctor_2139_ = lean_ctor_get(v_toApplicative_2138_, 0);
v_toBind_2140_ = lean_ctor_get(v_inst_2127_, 1);
lean_inc_n(v_toBind_2140_, 3);
v_toPure_2141_ = lean_ctor_get(v_toApplicative_2138_, 1);
lean_inc_n(v_toPure_2141_, 5);
v_map_2142_ = lean_ctor_get(v_toFunctor_2139_, 0);
lean_inc(v_map_2142_);
v___f_2143_ = ((lean_object*)(l_Lean_withTraceNode_x27___redArg___closed__0));
v_msg_2144_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__1), 2, 1);
lean_closure_set(v_msg_2144_, 0, v_toPure_2141_);
lean_inc(v_inst_2131_);
lean_inc(v_cls_2134_);
v___f_2145_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2145_, 0, v_toPure_2141_);
lean_closure_set(v___f_2145_, 1, v_cls_2134_);
lean_closure_set(v___f_2145_, 2, v_toBind_2140_);
lean_closure_set(v___f_2145_, 3, v_inst_2131_);
v___f_2146_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2146_, 0, v_toPure_2141_);
v___f_2147_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__2), 2, 1);
lean_closure_set(v___f_2147_, 0, v_toPure_2141_);
v___f_2148_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
v___x_2149_ = l_Lean_KVMap_instValueBool;
v___x_2150_ = lean_box(v_collapsed_2136_);
v___f_2151_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__13___boxed), 19, 18);
lean_closure_set(v___f_2151_, 0, v_k_2135_);
lean_closure_set(v___f_2151_, 1, v_inst_2128_);
lean_closure_set(v___f_2151_, 2, v_inst_2132_);
lean_closure_set(v___f_2151_, 3, v_inst_2127_);
lean_closure_set(v___f_2151_, 4, v_inst_2129_);
lean_closure_set(v___f_2151_, 5, v_inst_2130_);
lean_closure_set(v___f_2151_, 6, v___f_2148_);
lean_closure_set(v___f_2151_, 7, v_cls_2134_);
lean_closure_set(v___f_2151_, 8, v___x_2150_);
lean_closure_set(v___f_2151_, 9, v_tag_2137_);
lean_closure_set(v___f_2151_, 10, v_msg_2144_);
lean_closure_set(v___f_2151_, 11, v_toBind_2140_);
lean_closure_set(v___f_2151_, 12, v___f_2147_);
lean_closure_set(v___f_2151_, 13, v___f_2146_);
lean_closure_set(v___f_2151_, 14, v___x_2149_);
lean_closure_set(v___f_2151_, 15, v_inst_2133_);
lean_closure_set(v___f_2151_, 16, v_toPure_2141_);
lean_closure_set(v___f_2151_, 17, v___f_2145_);
v___x_2152_ = lean_apply_4(v_toBind_2140_, lean_box(0), lean_box(0), v_inst_2131_, v___f_2151_);
v___x_2153_ = lean_apply_4(v_map_2142_, lean_box(0), lean_box(0), v___f_2143_, v___x_2152_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___boxed(lean_object* v_inst_2154_, lean_object* v_inst_2155_, lean_object* v_inst_2156_, lean_object* v_inst_2157_, lean_object* v_inst_2158_, lean_object* v_inst_2159_, lean_object* v_inst_2160_, lean_object* v_cls_2161_, lean_object* v_k_2162_, lean_object* v_collapsed_2163_, lean_object* v_tag_2164_){
_start:
{
uint8_t v_collapsed_boxed_2165_; lean_object* v_res_2166_; 
v_collapsed_boxed_2165_ = lean_unbox(v_collapsed_2163_);
v_res_2166_ = l_Lean_withTraceNode_x27___redArg(v_inst_2154_, v_inst_2155_, v_inst_2156_, v_inst_2157_, v_inst_2158_, v_inst_2159_, v_inst_2160_, v_cls_2161_, v_k_2162_, v_collapsed_boxed_2165_, v_tag_2164_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27(lean_object* v_00_u03b1_2167_, lean_object* v_m_2168_, lean_object* v_inst_2169_, lean_object* v_inst_2170_, lean_object* v_inst_2171_, lean_object* v_inst_2172_, lean_object* v_inst_2173_, lean_object* v_inst_2174_, lean_object* v_inst_2175_, lean_object* v_cls_2176_, lean_object* v_k_2177_, uint8_t v_collapsed_2178_, lean_object* v_tag_2179_){
_start:
{
lean_object* v_toApplicative_2180_; lean_object* v_toFunctor_2181_; lean_object* v_toBind_2182_; lean_object* v_toPure_2183_; lean_object* v_map_2184_; lean_object* v___f_2185_; lean_object* v_msg_2186_; lean_object* v___f_2187_; lean_object* v___f_2188_; lean_object* v___f_2189_; lean_object* v___f_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___f_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v_toApplicative_2180_ = lean_ctor_get(v_inst_2169_, 0);
v_toFunctor_2181_ = lean_ctor_get(v_toApplicative_2180_, 0);
v_toBind_2182_ = lean_ctor_get(v_inst_2169_, 1);
lean_inc_n(v_toBind_2182_, 3);
v_toPure_2183_ = lean_ctor_get(v_toApplicative_2180_, 1);
lean_inc_n(v_toPure_2183_, 5);
v_map_2184_ = lean_ctor_get(v_toFunctor_2181_, 0);
lean_inc(v_map_2184_);
v___f_2185_ = ((lean_object*)(l_Lean_withTraceNode_x27___redArg___closed__0));
v_msg_2186_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__1), 2, 1);
lean_closure_set(v_msg_2186_, 0, v_toPure_2183_);
lean_inc(v_inst_2173_);
lean_inc(v_cls_2176_);
v___f_2187_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2187_, 0, v_toPure_2183_);
lean_closure_set(v___f_2187_, 1, v_cls_2176_);
lean_closure_set(v___f_2187_, 2, v_toBind_2182_);
lean_closure_set(v___f_2187_, 3, v_inst_2173_);
v___f_2188_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2188_, 0, v_toPure_2183_);
v___f_2189_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__2), 2, 1);
lean_closure_set(v___f_2189_, 0, v_toPure_2183_);
v___f_2190_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
v___x_2191_ = l_Lean_KVMap_instValueBool;
v___x_2192_ = lean_box(v_collapsed_2178_);
v___f_2193_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__13___boxed), 19, 18);
lean_closure_set(v___f_2193_, 0, v_k_2177_);
lean_closure_set(v___f_2193_, 1, v_inst_2170_);
lean_closure_set(v___f_2193_, 2, v_inst_2174_);
lean_closure_set(v___f_2193_, 3, v_inst_2169_);
lean_closure_set(v___f_2193_, 4, v_inst_2171_);
lean_closure_set(v___f_2193_, 5, v_inst_2172_);
lean_closure_set(v___f_2193_, 6, v___f_2190_);
lean_closure_set(v___f_2193_, 7, v_cls_2176_);
lean_closure_set(v___f_2193_, 8, v___x_2192_);
lean_closure_set(v___f_2193_, 9, v_tag_2179_);
lean_closure_set(v___f_2193_, 10, v_msg_2186_);
lean_closure_set(v___f_2193_, 11, v_toBind_2182_);
lean_closure_set(v___f_2193_, 12, v___f_2189_);
lean_closure_set(v___f_2193_, 13, v___f_2188_);
lean_closure_set(v___f_2193_, 14, v___x_2191_);
lean_closure_set(v___f_2193_, 15, v_inst_2175_);
lean_closure_set(v___f_2193_, 16, v_toPure_2183_);
lean_closure_set(v___f_2193_, 17, v___f_2187_);
v___x_2194_ = lean_apply_4(v_toBind_2182_, lean_box(0), lean_box(0), v_inst_2173_, v___f_2193_);
v___x_2195_ = lean_apply_4(v_map_2184_, lean_box(0), lean_box(0), v___f_2185_, v___x_2194_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___boxed(lean_object* v_00_u03b1_2196_, lean_object* v_m_2197_, lean_object* v_inst_2198_, lean_object* v_inst_2199_, lean_object* v_inst_2200_, lean_object* v_inst_2201_, lean_object* v_inst_2202_, lean_object* v_inst_2203_, lean_object* v_inst_2204_, lean_object* v_cls_2205_, lean_object* v_k_2206_, lean_object* v_collapsed_2207_, lean_object* v_tag_2208_){
_start:
{
uint8_t v_collapsed_boxed_2209_; lean_object* v_res_2210_; 
v_collapsed_boxed_2209_ = lean_unbox(v_collapsed_2207_);
v_res_2210_ = l_Lean_withTraceNode_x27(v_00_u03b1_2196_, v_m_2197_, v_inst_2198_, v_inst_2199_, v_inst_2200_, v_inst_2201_, v_inst_2202_, v_inst_2203_, v_inst_2204_, v_cls_2205_, v_k_2206_, v_collapsed_boxed_2209_, v_tag_2208_);
return v_res_2210_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__4(void){
_start:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; 
v___x_2219_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__3));
v___x_2220_ = l_Lean_mkAtom(v___x_2219_);
return v___x_2220_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__5(void){
_start:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2221_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__4, &l_Lean_registerTraceClass___auto__1___closed__4_once, _init_l_Lean_registerTraceClass___auto__1___closed__4);
v___x_2222_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2223_ = lean_array_push(v___x_2222_, v___x_2221_);
return v___x_2223_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__6(void){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2224_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__5, &l_Lean_registerTraceClass___auto__1___closed__5_once, _init_l_Lean_registerTraceClass___auto__1___closed__5);
v___x_2225_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__2));
v___x_2226_ = lean_box(2);
v___x_2227_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
lean_ctor_set(v___x_2227_, 1, v___x_2225_);
lean_ctor_set(v___x_2227_, 2, v___x_2224_);
return v___x_2227_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__7(void){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2228_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__6, &l_Lean_registerTraceClass___auto__1___closed__6_once, _init_l_Lean_registerTraceClass___auto__1___closed__6);
v___x_2229_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13);
v___x_2230_ = lean_array_push(v___x_2229_, v___x_2228_);
return v___x_2230_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__8(void){
_start:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2231_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__7, &l_Lean_registerTraceClass___auto__1___closed__7_once, _init_l_Lean_registerTraceClass___auto__1___closed__7);
v___x_2232_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11));
v___x_2233_ = lean_box(2);
v___x_2234_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2233_);
lean_ctor_set(v___x_2234_, 1, v___x_2232_);
lean_ctor_set(v___x_2234_, 2, v___x_2231_);
return v___x_2234_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__9(void){
_start:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2235_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__8, &l_Lean_registerTraceClass___auto__1___closed__8_once, _init_l_Lean_registerTraceClass___auto__1___closed__8);
v___x_2236_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2237_ = lean_array_push(v___x_2236_, v___x_2235_);
return v___x_2237_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__10(void){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; 
v___x_2238_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__9, &l_Lean_registerTraceClass___auto__1___closed__9_once, _init_l_Lean_registerTraceClass___auto__1___closed__9);
v___x_2239_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2240_ = lean_box(2);
v___x_2241_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2240_);
lean_ctor_set(v___x_2241_, 1, v___x_2239_);
lean_ctor_set(v___x_2241_, 2, v___x_2238_);
return v___x_2241_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__11(void){
_start:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2242_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__10, &l_Lean_registerTraceClass___auto__1___closed__10_once, _init_l_Lean_registerTraceClass___auto__1___closed__10);
v___x_2243_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2244_ = lean_array_push(v___x_2243_, v___x_2242_);
return v___x_2244_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__12(void){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2245_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__11, &l_Lean_registerTraceClass___auto__1___closed__11_once, _init_l_Lean_registerTraceClass___auto__1___closed__11);
v___x_2246_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7));
v___x_2247_ = lean_box(2);
v___x_2248_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
lean_ctor_set(v___x_2248_, 1, v___x_2246_);
lean_ctor_set(v___x_2248_, 2, v___x_2245_);
return v___x_2248_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__13(void){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2249_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__12, &l_Lean_registerTraceClass___auto__1___closed__12_once, _init_l_Lean_registerTraceClass___auto__1___closed__12);
v___x_2250_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2251_ = lean_array_push(v___x_2250_, v___x_2249_);
return v___x_2251_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__14(void){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2252_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__13, &l_Lean_registerTraceClass___auto__1___closed__13_once, _init_l_Lean_registerTraceClass___auto__1___closed__13);
v___x_2253_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4));
v___x_2254_ = lean_box(2);
v___x_2255_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2254_);
lean_ctor_set(v___x_2255_, 1, v___x_2253_);
lean_ctor_set(v___x_2255_, 2, v___x_2252_);
return v___x_2255_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1(void){
_start:
{
lean_object* v___x_2256_; 
v___x_2256_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__14, &l_Lean_registerTraceClass___auto__1___closed__14_once, _init_l_Lean_registerTraceClass___auto__1___closed__14);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_2257_, lean_object* v_x_2258_){
_start:
{
if (lean_obj_tag(v_x_2258_) == 0)
{
return v_x_2257_;
}
else
{
lean_object* v_key_2259_; lean_object* v_value_2260_; lean_object* v_tail_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2287_; 
v_key_2259_ = lean_ctor_get(v_x_2258_, 0);
v_value_2260_ = lean_ctor_get(v_x_2258_, 1);
v_tail_2261_ = lean_ctor_get(v_x_2258_, 2);
v_isSharedCheck_2287_ = !lean_is_exclusive(v_x_2258_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2263_ = v_x_2258_;
v_isShared_2264_ = v_isSharedCheck_2287_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_tail_2261_);
lean_inc(v_value_2260_);
lean_inc(v_key_2259_);
lean_dec(v_x_2258_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2287_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2265_; uint64_t v___y_2267_; 
v___x_2265_ = lean_array_get_size(v_x_2257_);
if (lean_obj_tag(v_key_2259_) == 0)
{
uint64_t v___x_2285_; 
v___x_2285_ = 1723ULL;
v___y_2267_ = v___x_2285_;
goto v___jp_2266_;
}
else
{
uint64_t v_hash_2286_; 
v_hash_2286_ = lean_ctor_get_uint64(v_key_2259_, sizeof(void*)*2);
v___y_2267_ = v_hash_2286_;
goto v___jp_2266_;
}
v___jp_2266_:
{
uint64_t v___x_2268_; uint64_t v___x_2269_; uint64_t v_fold_2270_; uint64_t v___x_2271_; uint64_t v___x_2272_; uint64_t v___x_2273_; size_t v___x_2274_; size_t v___x_2275_; size_t v___x_2276_; size_t v___x_2277_; size_t v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2281_; 
v___x_2268_ = 32ULL;
v___x_2269_ = lean_uint64_shift_right(v___y_2267_, v___x_2268_);
v_fold_2270_ = lean_uint64_xor(v___y_2267_, v___x_2269_);
v___x_2271_ = 16ULL;
v___x_2272_ = lean_uint64_shift_right(v_fold_2270_, v___x_2271_);
v___x_2273_ = lean_uint64_xor(v_fold_2270_, v___x_2272_);
v___x_2274_ = lean_uint64_to_usize(v___x_2273_);
v___x_2275_ = lean_usize_of_nat(v___x_2265_);
v___x_2276_ = ((size_t)1ULL);
v___x_2277_ = lean_usize_sub(v___x_2275_, v___x_2276_);
v___x_2278_ = lean_usize_land(v___x_2274_, v___x_2277_);
v___x_2279_ = lean_array_uget_borrowed(v_x_2257_, v___x_2278_);
lean_inc(v___x_2279_);
if (v_isShared_2264_ == 0)
{
lean_ctor_set(v___x_2263_, 2, v___x_2279_);
v___x_2281_ = v___x_2263_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2284_; 
v_reuseFailAlloc_2284_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2284_, 0, v_key_2259_);
lean_ctor_set(v_reuseFailAlloc_2284_, 1, v_value_2260_);
lean_ctor_set(v_reuseFailAlloc_2284_, 2, v___x_2279_);
v___x_2281_ = v_reuseFailAlloc_2284_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
lean_object* v___x_2282_; 
v___x_2282_ = lean_array_uset(v_x_2257_, v___x_2278_, v___x_2281_);
v_x_2257_ = v___x_2282_;
v_x_2258_ = v_tail_2261_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(lean_object* v_i_2288_, lean_object* v_source_2289_, lean_object* v_target_2290_){
_start:
{
lean_object* v___x_2291_; uint8_t v___x_2292_; 
v___x_2291_ = lean_array_get_size(v_source_2289_);
v___x_2292_ = lean_nat_dec_lt(v_i_2288_, v___x_2291_);
if (v___x_2292_ == 0)
{
lean_dec_ref(v_source_2289_);
lean_dec(v_i_2288_);
return v_target_2290_;
}
else
{
lean_object* v_es_2293_; lean_object* v___x_2294_; lean_object* v_source_2295_; lean_object* v_target_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v_es_2293_ = lean_array_fget(v_source_2289_, v_i_2288_);
v___x_2294_ = lean_box(0);
v_source_2295_ = lean_array_fset(v_source_2289_, v_i_2288_, v___x_2294_);
v_target_2296_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(v_target_2290_, v_es_2293_);
v___x_2297_ = lean_unsigned_to_nat(1u);
v___x_2298_ = lean_nat_add(v_i_2288_, v___x_2297_);
lean_dec(v_i_2288_);
v_i_2288_ = v___x_2298_;
v_source_2289_ = v_source_2295_;
v_target_2290_ = v_target_2296_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(lean_object* v_data_2300_){
_start:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v_nbuckets_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2301_ = lean_array_get_size(v_data_2300_);
v___x_2302_ = lean_unsigned_to_nat(2u);
v_nbuckets_2303_ = lean_nat_mul(v___x_2301_, v___x_2302_);
v___x_2304_ = lean_unsigned_to_nat(0u);
v___x_2305_ = lean_box(0);
v___x_2306_ = lean_mk_array(v_nbuckets_2303_, v___x_2305_);
v___x_2307_ = lean_array_propagate_mark(v_data_2300_, v___x_2306_);
v___x_2308_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(v___x_2304_, v_data_2300_, v___x_2307_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(lean_object* v_m_2309_, lean_object* v_a_2310_, lean_object* v_b_2311_){
_start:
{
lean_object* v_size_2312_; lean_object* v_buckets_2313_; lean_object* v___x_2314_; uint64_t v___y_2316_; 
v_size_2312_ = lean_ctor_get(v_m_2309_, 0);
v_buckets_2313_ = lean_ctor_get(v_m_2309_, 1);
v___x_2314_ = lean_array_get_size(v_buckets_2313_);
if (lean_obj_tag(v_a_2310_) == 0)
{
uint64_t v___x_2353_; 
v___x_2353_ = 1723ULL;
v___y_2316_ = v___x_2353_;
goto v___jp_2315_;
}
else
{
uint64_t v_hash_2354_; 
v_hash_2354_ = lean_ctor_get_uint64(v_a_2310_, sizeof(void*)*2);
v___y_2316_ = v_hash_2354_;
goto v___jp_2315_;
}
v___jp_2315_:
{
uint64_t v___x_2317_; uint64_t v___x_2318_; uint64_t v_fold_2319_; uint64_t v___x_2320_; uint64_t v___x_2321_; uint64_t v___x_2322_; size_t v___x_2323_; size_t v___x_2324_; size_t v___x_2325_; size_t v___x_2326_; size_t v___x_2327_; lean_object* v_bkt_2328_; uint8_t v___x_2329_; 
v___x_2317_ = 32ULL;
v___x_2318_ = lean_uint64_shift_right(v___y_2316_, v___x_2317_);
v_fold_2319_ = lean_uint64_xor(v___y_2316_, v___x_2318_);
v___x_2320_ = 16ULL;
v___x_2321_ = lean_uint64_shift_right(v_fold_2319_, v___x_2320_);
v___x_2322_ = lean_uint64_xor(v_fold_2319_, v___x_2321_);
v___x_2323_ = lean_uint64_to_usize(v___x_2322_);
v___x_2324_ = lean_usize_of_nat(v___x_2314_);
v___x_2325_ = ((size_t)1ULL);
v___x_2326_ = lean_usize_sub(v___x_2324_, v___x_2325_);
v___x_2327_ = lean_usize_land(v___x_2323_, v___x_2326_);
v_bkt_2328_ = lean_array_uget_borrowed(v_buckets_2313_, v___x_2327_);
v___x_2329_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_2310_, v_bkt_2328_);
if (v___x_2329_ == 0)
{
lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2350_; 
lean_inc_ref(v_buckets_2313_);
lean_inc(v_size_2312_);
v_isSharedCheck_2350_ = !lean_is_exclusive(v_m_2309_);
if (v_isSharedCheck_2350_ == 0)
{
lean_object* v_unused_2351_; lean_object* v_unused_2352_; 
v_unused_2351_ = lean_ctor_get(v_m_2309_, 1);
lean_dec(v_unused_2351_);
v_unused_2352_ = lean_ctor_get(v_m_2309_, 0);
lean_dec(v_unused_2352_);
v___x_2331_ = v_m_2309_;
v_isShared_2332_ = v_isSharedCheck_2350_;
goto v_resetjp_2330_;
}
else
{
lean_dec(v_m_2309_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2350_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2333_; lean_object* v_size_x27_2334_; lean_object* v___x_2335_; lean_object* v_buckets_x27_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; uint8_t v___x_2342_; 
v___x_2333_ = lean_unsigned_to_nat(1u);
v_size_x27_2334_ = lean_nat_add(v_size_2312_, v___x_2333_);
lean_dec(v_size_2312_);
lean_inc(v_bkt_2328_);
v___x_2335_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2335_, 0, v_a_2310_);
lean_ctor_set(v___x_2335_, 1, v_b_2311_);
lean_ctor_set(v___x_2335_, 2, v_bkt_2328_);
v_buckets_x27_2336_ = lean_array_uset(v_buckets_2313_, v___x_2327_, v___x_2335_);
v___x_2337_ = lean_unsigned_to_nat(4u);
v___x_2338_ = lean_nat_mul(v_size_x27_2334_, v___x_2337_);
v___x_2339_ = lean_unsigned_to_nat(3u);
v___x_2340_ = lean_nat_div(v___x_2338_, v___x_2339_);
lean_dec(v___x_2338_);
v___x_2341_ = lean_array_get_size(v_buckets_x27_2336_);
v___x_2342_ = lean_nat_dec_le(v___x_2340_, v___x_2341_);
lean_dec(v___x_2340_);
if (v___x_2342_ == 0)
{
lean_object* v_val_2343_; lean_object* v___x_2345_; 
v_val_2343_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(v_buckets_x27_2336_);
if (v_isShared_2332_ == 0)
{
lean_ctor_set(v___x_2331_, 1, v_val_2343_);
lean_ctor_set(v___x_2331_, 0, v_size_x27_2334_);
v___x_2345_ = v___x_2331_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_size_x27_2334_);
lean_ctor_set(v_reuseFailAlloc_2346_, 1, v_val_2343_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
else
{
lean_object* v___x_2348_; 
if (v_isShared_2332_ == 0)
{
lean_ctor_set(v___x_2331_, 1, v_buckets_x27_2336_);
lean_ctor_set(v___x_2331_, 0, v_size_x27_2334_);
v___x_2348_ = v___x_2331_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_size_x27_2334_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v_buckets_x27_2336_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
else
{
lean_dec(v_b_2311_);
lean_dec(v_a_2310_);
return v_m_2309_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTraceClass(lean_object* v_traceClassName_2358_, uint8_t v_inherited_2359_, lean_object* v_ref_2360_){
_start:
{
lean_object* v___x_2362_; lean_object* v_optionName_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; 
v___x_2362_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v_optionName_2363_ = l_Lean_Name_append(v___x_2362_, v_traceClassName_2358_);
v___x_2364_ = ((lean_object*)(l_Lean_registerTraceClass___closed__0));
v___x_2365_ = ((lean_object*)(l_Lean_registerTraceClass___closed__1));
v___x_2366_ = lean_box(0);
lean_inc_n(v_optionName_2363_, 2);
v___x_2367_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2367_, 0, v_optionName_2363_);
lean_ctor_set(v___x_2367_, 1, v_ref_2360_);
lean_ctor_set(v___x_2367_, 2, v___x_2364_);
lean_ctor_set(v___x_2367_, 3, v___x_2365_);
lean_ctor_set(v___x_2367_, 4, v___x_2366_);
v___x_2368_ = lean_register_option(v_optionName_2363_, v___x_2367_);
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2384_; 
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2368_);
if (v_isSharedCheck_2384_ == 0)
{
lean_object* v_unused_2385_; 
v_unused_2385_ = lean_ctor_get(v___x_2368_, 0);
lean_dec(v_unused_2385_);
v___x_2370_ = v___x_2368_;
v_isShared_2371_ = v_isSharedCheck_2384_;
goto v_resetjp_2369_;
}
else
{
lean_dec(v___x_2368_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2384_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
if (v_inherited_2359_ == 0)
{
lean_object* v___x_2372_; lean_object* v___x_2374_; 
lean_dec(v_optionName_2363_);
v___x_2372_ = lean_box(0);
if (v_isShared_2371_ == 0)
{
lean_ctor_set(v___x_2370_, 0, v___x_2372_);
v___x_2374_ = v___x_2370_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v___x_2372_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
return v___x_2374_;
}
}
else
{
lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2382_; 
v___x_2376_ = l_Lean_inheritedTraceOptions;
v___x_2377_ = lean_st_ref_take(v___x_2376_);
v___x_2378_ = lean_box(0);
v___x_2379_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(v___x_2377_, v_optionName_2363_, v___x_2378_);
v___x_2380_ = lean_st_ref_put(v___x_2376_, v___x_2379_);
if (v_isShared_2371_ == 0)
{
lean_ctor_set(v___x_2370_, 0, v___x_2380_);
v___x_2382_ = v___x_2370_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v___x_2380_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
}
}
else
{
lean_dec(v_optionName_2363_);
return v___x_2368_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTraceClass___boxed(lean_object* v_traceClassName_2386_, lean_object* v_inherited_2387_, lean_object* v_ref_2388_, lean_object* v___y_2389_){
_start:
{
uint8_t v_inherited_boxed_2390_; lean_object* v_res_2391_; 
v_inherited_boxed_2390_ = lean_unbox(v_inherited_2387_);
v_res_2391_ = l_Lean_registerTraceClass(v_traceClassName_2386_, v_inherited_boxed_2390_, v_ref_2388_);
return v_res_2391_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0(lean_object* v_00_u03b2_2392_, lean_object* v_m_2393_, lean_object* v_a_2394_, lean_object* v_b_2395_){
_start:
{
lean_object* v___x_2396_; 
v___x_2396_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(v_m_2393_, v_a_2394_, v_b_2395_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0(lean_object* v_00_u03b2_2397_, lean_object* v_data_2398_){
_start:
{
lean_object* v___x_2399_; 
v___x_2399_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(v_data_2398_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2400_, lean_object* v_i_2401_, lean_object* v_source_2402_, lean_object* v_target_2403_){
_start:
{
lean_object* v___x_2404_; 
v___x_2404_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(v_i_2401_, v_source_2402_, v_target_2403_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2405_, lean_object* v_x_2406_, lean_object* v_x_2407_){
_start:
{
lean_object* v___x_2408_; 
v___x_2408_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(v_x_2406_, v_x_2407_);
return v___x_2408_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8(void){
_start:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2418_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__1));
v___x_2419_ = l_String_toRawSubstring_x27(v___x_2418_);
return v___x_2419_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2425_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13));
v___x_2426_ = l_String_toRawSubstring_x27(v___x_2425_);
return v___x_2426_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19(void){
_start:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2431_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18));
v___x_2432_ = l_String_toRawSubstring_x27(v___x_2431_);
return v___x_2432_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31(void){
_start:
{
lean_object* v___x_2460_; 
v___x_2460_ = l_Array_mkArray0___redArg();
return v___x_2460_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41(void){
_start:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2486_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40));
v___x_2487_ = l_String_toRawSubstring_x27(v___x_2486_);
return v___x_2487_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58(void){
_start:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2522_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57));
v___x_2523_ = l_String_toRawSubstring_x27(v___x_2522_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(lean_object* v_id_2545_, lean_object* v_s_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2570_; lean_object* v___y_2571_; lean_object* v___y_2572_; lean_object* v___y_2573_; lean_object* v_msg_2646_; lean_object* v_quotContext_2647_; lean_object* v_currMacroScope_2648_; lean_object* v_ref_2649_; lean_object* v___y_2650_; lean_object* v___x_2696_; lean_object* v___x_2697_; uint8_t v___x_2698_; 
lean_inc(v_s_2546_);
v___x_2696_ = l_Lean_Syntax_getKind(v_s_2546_);
v___x_2697_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49));
v___x_2698_ = lean_name_eq(v___x_2696_, v___x_2697_);
lean_dec(v___x_2696_);
if (v___x_2698_ == 0)
{
lean_object* v_quotContext_2699_; lean_object* v_currMacroScope_2700_; lean_object* v_ref_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; 
v_quotContext_2699_ = lean_ctor_get(v___y_2547_, 1);
v_currMacroScope_2700_ = lean_ctor_get(v___y_2547_, 2);
v_ref_2701_ = lean_ctor_get(v___y_2547_, 5);
v___x_2702_ = l_Lean_SourceInfo_fromRef(v_ref_2701_, v___x_2698_);
v___x_2703_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51));
v___x_2704_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52));
v___x_2705_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5));
lean_inc_n(v___x_2702_, 8);
v___x_2706_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2702_);
lean_ctor_set(v___x_2706_, 1, v___x_2705_);
v___x_2707_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7));
v___x_2708_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8);
v___x_2709_ = lean_box(0);
lean_inc_n(v_currMacroScope_2700_, 3);
lean_inc_n(v_quotContext_2699_, 3);
v___x_2710_ = l_Lean_addMacroScope(v_quotContext_2699_, v___x_2709_, v_currMacroScope_2700_);
v___x_2711_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55));
v___x_2712_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2702_);
lean_ctor_set(v___x_2712_, 1, v___x_2708_);
lean_ctor_set(v___x_2712_, 2, v___x_2710_);
lean_ctor_set(v___x_2712_, 3, v___x_2711_);
v___x_2713_ = l_Lean_Syntax_node1(v___x_2702_, v___x_2707_, v___x_2712_);
v___x_2714_ = l_Lean_Syntax_node2(v___x_2702_, v___x_2704_, v___x_2706_, v___x_2713_);
v___x_2715_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56));
v___x_2716_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2702_);
lean_ctor_set(v___x_2716_, 1, v___x_2715_);
v___x_2717_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2718_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58);
v___x_2719_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59));
v___x_2720_ = l_Lean_addMacroScope(v_quotContext_2699_, v___x_2719_, v_currMacroScope_2700_);
v___x_2721_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64));
v___x_2722_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2702_);
lean_ctor_set(v___x_2722_, 1, v___x_2718_);
lean_ctor_set(v___x_2722_, 2, v___x_2720_);
lean_ctor_set(v___x_2722_, 3, v___x_2721_);
v___x_2723_ = l_Lean_Syntax_node1(v___x_2702_, v___x_2717_, v___x_2722_);
v___x_2724_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16));
v___x_2725_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2702_);
lean_ctor_set(v___x_2725_, 1, v___x_2724_);
v___x_2726_ = l_Lean_Syntax_node5(v___x_2702_, v___x_2703_, v___x_2714_, v_s_2546_, v___x_2716_, v___x_2723_, v___x_2725_);
v_msg_2646_ = v___x_2726_;
v_quotContext_2647_ = v_quotContext_2699_;
v_currMacroScope_2648_ = v_currMacroScope_2700_;
v_ref_2649_ = v_ref_2701_;
v___y_2650_ = v___y_2548_;
goto v___jp_2645_;
}
else
{
lean_object* v_quotContext_2727_; lean_object* v_currMacroScope_2728_; lean_object* v_ref_2729_; uint8_t v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
v_quotContext_2727_ = lean_ctor_get(v___y_2547_, 1);
v_currMacroScope_2728_ = lean_ctor_get(v___y_2547_, 2);
v_ref_2729_ = lean_ctor_get(v___y_2547_, 5);
v___x_2730_ = 0;
v___x_2731_ = l_Lean_SourceInfo_fromRef(v_ref_2729_, v___x_2730_);
v___x_2732_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66));
v___x_2733_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67));
lean_inc(v___x_2731_);
v___x_2734_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2731_);
lean_ctor_set(v___x_2734_, 1, v___x_2733_);
v___x_2735_ = l_Lean_Syntax_node2(v___x_2731_, v___x_2732_, v___x_2734_, v_s_2546_);
lean_inc(v_currMacroScope_2728_);
lean_inc(v_quotContext_2727_);
v_msg_2646_ = v___x_2735_;
v_quotContext_2647_ = v_quotContext_2727_;
v_currMacroScope_2648_ = v_currMacroScope_2728_;
v_ref_2649_ = v_ref_2729_;
v___y_2650_ = v___y_2548_;
goto v___jp_2645_;
}
v___jp_2549_:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
lean_inc_n(v___y_2555_, 8);
lean_inc(v___y_2554_);
lean_inc_n(v___y_2551_, 30);
v___x_2574_ = l_Lean_Syntax_node5(v___y_2551_, v___y_2554_, v___y_2560_, v___y_2555_, v___y_2555_, v___y_2567_, v___y_2573_);
lean_inc(v___y_2571_);
v___x_2575_ = l_Lean_Syntax_node1(v___y_2551_, v___y_2571_, v___x_2574_);
lean_inc(v___y_2562_);
v___x_2576_ = l_Lean_Syntax_node4(v___y_2551_, v___y_2562_, v___y_2557_, v___y_2555_, v___y_2563_, v___x_2575_);
lean_inc_n(v___y_2556_, 3);
v___x_2577_ = l_Lean_Syntax_node2(v___y_2551_, v___y_2556_, v___x_2576_, v___y_2555_);
v___x_2578_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0));
lean_inc_ref_n(v___y_2561_, 7);
lean_inc_ref_n(v___y_2553_, 7);
lean_inc_ref_n(v___y_2564_, 10);
v___x_2579_ = l_Lean_Name_mkStr4(v___y_2564_, v___y_2553_, v___y_2561_, v___x_2578_);
v___x_2580_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1));
v___x_2581_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___y_2551_);
lean_ctor_set(v___x_2581_, 1, v___x_2580_);
v___x_2582_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2));
v___x_2583_ = l_Lean_Name_mkStr4(v___y_2564_, v___y_2553_, v___y_2561_, v___x_2582_);
v___x_2584_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3));
v___x_2585_ = l_Lean_Name_mkStr4(v___y_2564_, v___y_2553_, v___y_2561_, v___x_2584_);
v___x_2586_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4));
v___x_2587_ = l_Lean_Name_mkStr4(v___y_2564_, v___y_2553_, v___y_2561_, v___x_2586_);
v___x_2588_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5));
v___x_2589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___y_2551_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
v___x_2590_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7));
v___x_2591_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8);
v___x_2592_ = lean_box(0);
lean_inc_n(v___y_2570_, 2);
lean_inc_n(v___y_2569_, 2);
v___x_2593_ = l_Lean_addMacroScope(v___y_2569_, v___x_2592_, v___y_2570_);
v___x_2594_ = l_Lean_Name_mkStr1(v___y_2564_);
v___x_2595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2594_);
lean_inc_n(v___y_2572_, 2);
v___x_2596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2595_);
lean_ctor_set(v___x_2596_, 1, v___y_2572_);
v___x_2597_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2597_, 0, v___y_2551_);
lean_ctor_set(v___x_2597_, 1, v___x_2591_);
lean_ctor_set(v___x_2597_, 2, v___x_2593_);
lean_ctor_set(v___x_2597_, 3, v___x_2596_);
v___x_2598_ = l_Lean_Syntax_node1(v___y_2551_, v___x_2590_, v___x_2597_);
v___x_2599_ = l_Lean_Syntax_node2(v___y_2551_, v___x_2587_, v___x_2589_, v___x_2598_);
v___x_2600_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9));
v___x_2601_ = l_Lean_Name_mkStr4(v___y_2564_, v___y_2553_, v___y_2561_, v___x_2600_);
v___x_2602_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10));
v___x_2603_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2603_, 0, v___y_2551_);
lean_ctor_set(v___x_2603_, 1, v___x_2602_);
v___x_2604_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11));
v___x_2605_ = l_Lean_Name_mkStr4(v___y_2564_, v___y_2553_, v___y_2561_, v___x_2604_);
v___x_2606_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12));
v___x_2607_ = l_Lean_Name_mkStr4(v___y_2564_, v___y_2553_, v___y_2561_, v___x_2606_);
v___x_2608_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14);
v___x_2609_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15));
v___x_2610_ = l_Lean_Name_mkStr2(v___y_2564_, v___x_2609_);
lean_inc(v___x_2610_);
v___x_2611_ = l_Lean_addMacroScope(v___y_2569_, v___x_2610_, v___y_2570_);
v___x_2612_ = lean_box(0);
v___x_2613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2610_);
lean_ctor_set(v___x_2613_, 1, v___x_2612_);
v___x_2614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2613_);
lean_ctor_set(v___x_2614_, 1, v___y_2572_);
v___x_2615_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2615_, 0, v___y_2551_);
lean_ctor_set(v___x_2615_, 1, v___x_2608_);
lean_ctor_set(v___x_2615_, 2, v___x_2611_);
lean_ctor_set(v___x_2615_, 3, v___x_2614_);
lean_inc(v___y_2568_);
lean_inc_n(v___y_2550_, 4);
v___x_2616_ = l_Lean_Syntax_node1(v___y_2551_, v___y_2550_, v___y_2568_);
lean_inc(v___x_2607_);
v___x_2617_ = l_Lean_Syntax_node2(v___y_2551_, v___x_2607_, v___x_2615_, v___x_2616_);
lean_inc(v___x_2605_);
v___x_2618_ = l_Lean_Syntax_node1(v___y_2551_, v___x_2605_, v___x_2617_);
v___x_2619_ = l_Lean_Syntax_node2(v___y_2551_, v___x_2601_, v___x_2603_, v___x_2618_);
v___x_2620_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16));
v___x_2621_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___y_2551_);
lean_ctor_set(v___x_2621_, 1, v___x_2620_);
v___x_2622_ = l_Lean_Syntax_node3(v___y_2551_, v___x_2585_, v___x_2599_, v___x_2619_, v___x_2621_);
v___x_2623_ = l_Lean_Syntax_node2(v___y_2551_, v___x_2583_, v___y_2555_, v___x_2622_);
v___x_2624_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17));
v___x_2625_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___y_2551_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
v___x_2626_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19);
v___x_2627_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20));
v___x_2628_ = l_Lean_Name_mkStr2(v___y_2564_, v___x_2627_);
lean_inc(v___x_2628_);
v___x_2629_ = l_Lean_addMacroScope(v___y_2569_, v___x_2628_, v___y_2570_);
v___x_2630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2628_);
lean_ctor_set(v___x_2630_, 1, v___x_2612_);
v___x_2631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2630_);
lean_ctor_set(v___x_2631_, 1, v___y_2572_);
v___x_2632_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2632_, 0, v___y_2551_);
lean_ctor_set(v___x_2632_, 1, v___x_2626_);
lean_ctor_set(v___x_2632_, 2, v___x_2629_);
lean_ctor_set(v___x_2632_, 3, v___x_2631_);
v___x_2633_ = l_Lean_Syntax_node2(v___y_2551_, v___y_2550_, v___y_2568_, v___y_2558_);
v___x_2634_ = l_Lean_Syntax_node2(v___y_2551_, v___x_2607_, v___x_2632_, v___x_2633_);
v___x_2635_ = l_Lean_Syntax_node1(v___y_2551_, v___x_2605_, v___x_2634_);
v___x_2636_ = l_Lean_Syntax_node2(v___y_2551_, v___y_2556_, v___x_2635_, v___y_2555_);
v___x_2637_ = l_Lean_Syntax_node1(v___y_2551_, v___y_2550_, v___x_2636_);
lean_inc_n(v___y_2566_, 2);
v___x_2638_ = l_Lean_Syntax_node1(v___y_2551_, v___y_2566_, v___x_2637_);
v___x_2639_ = l_Lean_Syntax_node6(v___y_2551_, v___x_2579_, v___x_2581_, v___x_2623_, v___x_2625_, v___x_2638_, v___y_2555_, v___y_2555_);
v___x_2640_ = l_Lean_Syntax_node2(v___y_2551_, v___y_2556_, v___x_2639_, v___y_2555_);
v___x_2641_ = l_Lean_Syntax_node2(v___y_2551_, v___y_2550_, v___x_2577_, v___x_2640_);
v___x_2642_ = l_Lean_Syntax_node1(v___y_2551_, v___y_2566_, v___x_2641_);
lean_inc(v___y_2552_);
v___x_2643_ = l_Lean_Syntax_node2(v___y_2551_, v___y_2552_, v___y_2565_, v___x_2642_);
v___x_2644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2643_);
lean_ctor_set(v___x_2644_, 1, v___y_2559_);
return v___x_2644_;
}
v___jp_2645_:
{
uint8_t v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2651_ = 0;
v___x_2652_ = l_Lean_SourceInfo_fromRef(v_ref_2649_, v___x_2651_);
v___x_2653_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0));
v___x_2654_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1));
v___x_2655_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__0));
v___x_2656_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22));
v___x_2657_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23));
lean_inc_n(v___x_2652_, 7);
v___x_2658_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2652_);
lean_ctor_set(v___x_2658_, 1, v___x_2657_);
v___x_2659_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25));
v___x_2660_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2661_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27));
v___x_2662_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29));
v___x_2663_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30));
v___x_2664_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2652_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
v___x_2665_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31);
v___x_2666_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2666_, 0, v___x_2652_);
lean_ctor_set(v___x_2666_, 1, v___x_2660_);
lean_ctor_set(v___x_2666_, 2, v___x_2665_);
v___x_2667_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33));
lean_inc_ref(v___x_2666_);
v___x_2668_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2667_, v___x_2666_);
v___x_2669_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35));
v___x_2670_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37));
v___x_2671_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39));
v___x_2672_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41);
v___x_2673_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42));
lean_inc(v_currMacroScope_2648_);
lean_inc(v_quotContext_2647_);
v___x_2674_ = l_Lean_addMacroScope(v_quotContext_2647_, v___x_2673_, v_currMacroScope_2648_);
v___x_2675_ = lean_box(0);
v___x_2676_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2652_);
lean_ctor_set(v___x_2676_, 1, v___x_2672_);
lean_ctor_set(v___x_2676_, 2, v___x_2674_);
lean_ctor_set(v___x_2676_, 3, v___x_2675_);
lean_inc_ref(v___x_2676_);
v___x_2677_ = l_Lean_Syntax_node1(v___x_2652_, v___x_2671_, v___x_2676_);
v___x_2678_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43));
v___x_2679_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2652_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
v___x_2680_ = l_Lean_Syntax_getId(v_id_2545_);
v___x_2681_ = l_Lean_Name_eraseMacroScopes(v___x_2680_);
lean_dec(v___x_2680_);
lean_inc(v___x_2681_);
v___x_2682_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_2675_, v___x_2681_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v___x_2683_; 
v___x_2683_ = l_Lean_quoteNameMk(v___x_2681_);
v___y_2550_ = v___x_2660_;
v___y_2551_ = v___x_2652_;
v___y_2552_ = v___x_2656_;
v___y_2553_ = v___x_2654_;
v___y_2554_ = v___x_2670_;
v___y_2555_ = v___x_2666_;
v___y_2556_ = v___x_2661_;
v___y_2557_ = v___x_2664_;
v___y_2558_ = v_msg_2646_;
v___y_2559_ = v___y_2650_;
v___y_2560_ = v___x_2677_;
v___y_2561_ = v___x_2655_;
v___y_2562_ = v___x_2662_;
v___y_2563_ = v___x_2668_;
v___y_2564_ = v___x_2653_;
v___y_2565_ = v___x_2658_;
v___y_2566_ = v___x_2659_;
v___y_2567_ = v___x_2679_;
v___y_2568_ = v___x_2676_;
v___y_2569_ = v_quotContext_2647_;
v___y_2570_ = v_currMacroScope_2648_;
v___y_2571_ = v___x_2669_;
v___y_2572_ = v___x_2675_;
v___y_2573_ = v___x_2683_;
goto v___jp_2549_;
}
else
{
lean_object* v_val_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
lean_dec(v___x_2681_);
v_val_2684_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_val_2684_);
lean_dec_ref_known(v___x_2682_, 1);
v___x_2685_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45));
v___x_2686_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46));
v___x_2687_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47));
v___x_2688_ = lean_string_intercalate(v___x_2687_, v_val_2684_);
v___x_2689_ = lean_string_append(v___x_2686_, v___x_2688_);
lean_dec_ref(v___x_2688_);
v___x_2690_ = lean_box(2);
v___x_2691_ = l_Lean_Syntax_mkNameLit(v___x_2689_, v___x_2690_);
v___x_2692_ = lean_unsigned_to_nat(1u);
v___x_2693_ = lean_mk_empty_array_with_capacity(v___x_2692_);
v___x_2694_ = lean_array_push(v___x_2693_, v___x_2691_);
v___x_2695_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2690_);
lean_ctor_set(v___x_2695_, 1, v___x_2685_);
lean_ctor_set(v___x_2695_, 2, v___x_2694_);
v___y_2550_ = v___x_2660_;
v___y_2551_ = v___x_2652_;
v___y_2552_ = v___x_2656_;
v___y_2553_ = v___x_2654_;
v___y_2554_ = v___x_2670_;
v___y_2555_ = v___x_2666_;
v___y_2556_ = v___x_2661_;
v___y_2557_ = v___x_2664_;
v___y_2558_ = v_msg_2646_;
v___y_2559_ = v___y_2650_;
v___y_2560_ = v___x_2677_;
v___y_2561_ = v___x_2655_;
v___y_2562_ = v___x_2662_;
v___y_2563_ = v___x_2668_;
v___y_2564_ = v___x_2653_;
v___y_2565_ = v___x_2658_;
v___y_2566_ = v___x_2659_;
v___y_2567_ = v___x_2679_;
v___y_2568_ = v___x_2676_;
v___y_2569_ = v_quotContext_2647_;
v___y_2570_ = v_currMacroScope_2648_;
v___y_2571_ = v___x_2669_;
v___y_2572_ = v___x_2675_;
v___y_2573_ = v___x_2695_;
goto v___jp_2549_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___boxed(lean_object* v_id_2736_, lean_object* v_s_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(v_id_2736_, v_s_2737_, v___y_2738_, v___y_2739_);
lean_dec_ref(v___y_2738_);
lean_dec(v_id_2736_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1(lean_object* v_x_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_){
_start:
{
lean_object* v___x_2798_; uint8_t v___x_2799_; 
v___x_2798_ = ((lean_object*)(l_Lean_doElemTrace_x5b___x5d_____00__closed__1));
lean_inc(v_x_2795_);
v___x_2799_ = l_Lean_Syntax_isOfKind(v_x_2795_, v___x_2798_);
if (v___x_2799_ == 0)
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
lean_dec(v_x_2795_);
v___x_2800_ = lean_box(1);
v___x_2801_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2800_);
lean_ctor_set(v___x_2801_, 1, v___y_2797_);
return v___x_2801_;
}
else
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v_a_2807_; lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2815_; 
v___x_2802_ = lean_unsigned_to_nat(1u);
v___x_2803_ = l_Lean_Syntax_getArg(v_x_2795_, v___x_2802_);
v___x_2804_ = lean_unsigned_to_nat(3u);
v___x_2805_ = l_Lean_Syntax_getArg(v_x_2795_, v___x_2804_);
lean_dec(v_x_2795_);
v___x_2806_ = l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(v___x_2803_, v___x_2805_, v___y_2796_, v___y_2797_);
lean_dec(v___x_2803_);
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
v_a_2808_ = lean_ctor_get(v___x_2806_, 1);
v_isSharedCheck_2815_ = !lean_is_exclusive(v___x_2806_);
if (v_isSharedCheck_2815_ == 0)
{
v___x_2810_ = v___x_2806_;
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_inc(v_a_2807_);
lean_dec(v___x_2806_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2815_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2813_; 
if (v_isShared_2811_ == 0)
{
v___x_2813_ = v___x_2810_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_a_2807_);
lean_ctor_set(v_reuseFailAlloc_2814_, 1, v_a_2808_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1___boxed(lean_object* v_x_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_){
_start:
{
lean_object* v_res_2819_; 
v_res_2819_ = l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1(v_x_2816_, v___y_2817_, v___y_2818_);
lean_dec_ref(v___y_2817_);
return v_res_2819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(lean_object* v_inst_2820_, lean_object* v_inst_2821_, lean_object* v_inst_2822_, lean_object* v_inst_2823_, lean_object* v_always_2824_, lean_object* v_inst_2825_, lean_object* v_cls_2826_, uint8_t v_collapsed_2827_, lean_object* v_tag_2828_, lean_object* v_opts_2829_, uint8_t v_clsEnabled_2830_, lean_object* v_oldTraces_2831_, lean_object* v_ref_2832_, lean_object* v_msg_2833_, lean_object* v_resStartStop_2834_){
_start:
{
lean_object* v___x_2835_; lean_object* v_toBind_2836_; lean_object* v___x_2837_; lean_object* v_snd_2838_; lean_object* v_fst_2839_; lean_object* v_fst_2840_; lean_object* v_snd_2841_; lean_object* v___f_2842_; lean_object* v___f_2843_; lean_object* v_data_2845_; lean_object* v___x_2848_; lean_object* v___x_2849_; uint8_t v___y_2860_; double v___y_2865_; uint8_t v___x_2870_; 
v___x_2835_ = l_Lean_KVMap_instValueBool;
v_toBind_2836_ = lean_ctor_get(v_inst_2820_, 1);
lean_inc(v_toBind_2836_);
v___x_2837_ = l_instMonadExceptOfMonadExceptOf___redArg(v_always_2824_);
v_snd_2838_ = lean_ctor_get(v_resStartStop_2834_, 1);
lean_inc(v_snd_2838_);
v_fst_2839_ = lean_ctor_get(v_resStartStop_2834_, 0);
lean_inc_n(v_fst_2839_, 2);
lean_dec_ref(v_resStartStop_2834_);
v_fst_2840_ = lean_ctor_get(v_snd_2838_, 0);
lean_inc(v_fst_2840_);
v_snd_2841_ = lean_ctor_get(v_snd_2838_, 1);
lean_inc(v_snd_2841_);
lean_dec(v_snd_2838_);
lean_inc_ref(v_oldTraces_2831_);
v___f_2842_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2842_, 0, v_oldTraces_2831_);
lean_inc_ref(v_inst_2820_);
v___f_2843_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2843_, 0, v_inst_2820_);
lean_closure_set(v___f_2843_, 1, v___x_2837_);
lean_closure_set(v___f_2843_, 2, v_fst_2839_);
v___x_2848_ = l_Lean_trace_profiler;
v___x_2849_ = l_Lean_Option_get___redArg(v___x_2835_, v_opts_2829_, v___x_2848_);
v___x_2870_ = lean_unbox(v___x_2849_);
if (v___x_2870_ == 0)
{
uint8_t v___x_2871_; 
v___x_2871_ = lean_unbox(v___x_2849_);
v___y_2860_ = v___x_2871_;
goto v___jp_2859_;
}
else
{
lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; uint8_t v___x_2875_; 
v___x_2872_ = l_Lean_KVMap_instValueNat;
v___x_2873_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2874_ = l_Lean_Option_get___redArg(v___x_2835_, v_opts_2829_, v___x_2873_);
v___x_2875_ = lean_unbox(v___x_2874_);
lean_dec(v___x_2874_);
if (v___x_2875_ == 0)
{
lean_object* v___x_2876_; lean_object* v___x_2877_; double v___x_2878_; double v___x_2879_; double v___x_2880_; 
v___x_2876_ = l_Lean_trace_profiler_threshold;
v___x_2877_ = l_Lean_Option_get___redArg(v___x_2872_, v_opts_2829_, v___x_2876_);
v___x_2878_ = lean_float_of_nat(v___x_2877_);
v___x_2879_ = lean_float_once(&l_Lean_trace_profiler_threshold_unitAdjusted___closed__0, &l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once, _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0);
v___x_2880_ = lean_float_div(v___x_2878_, v___x_2879_);
v___y_2865_ = v___x_2880_;
goto v___jp_2864_;
}
else
{
lean_object* v___x_2881_; lean_object* v___x_2882_; double v___x_2883_; 
v___x_2881_ = l_Lean_trace_profiler_threshold;
v___x_2882_ = l_Lean_Option_get___redArg(v___x_2872_, v_opts_2829_, v___x_2881_);
v___x_2883_ = lean_float_of_nat(v___x_2882_);
v___y_2865_ = v___x_2883_;
goto v___jp_2864_;
}
}
v___jp_2844_:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; 
v___x_2846_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(v_inst_2820_, v_inst_2821_, v_inst_2822_, v_inst_2823_, v_oldTraces_2831_, v_data_2845_, v_ref_2832_, v_msg_2833_);
v___x_2847_ = lean_apply_4(v_toBind_2836_, lean_box(0), lean_box(0), v___x_2846_, v___f_2843_);
return v___x_2847_;
}
v___jp_2850_:
{
lean_object* v_result_2851_; lean_object* v___x_2852_; double v___x_2853_; lean_object* v_data_2854_; uint8_t v___x_2855_; 
v_result_2851_ = lean_apply_1(v_inst_2825_, v_fst_2839_);
v___x_2852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2852_, 0, v_result_2851_);
v___x_2853_ = lean_float_once(&l_Lean_addTrace___redArg___lam__0___closed__0, &l_Lean_addTrace___redArg___lam__0___closed__0_once, _init_l_Lean_addTrace___redArg___lam__0___closed__0);
lean_inc_ref(v_tag_2828_);
lean_inc_ref(v___x_2852_);
lean_inc(v_cls_2826_);
v_data_2854_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2854_, 0, v_cls_2826_);
lean_ctor_set(v_data_2854_, 1, v___x_2852_);
lean_ctor_set(v_data_2854_, 2, v_tag_2828_);
lean_ctor_set_float(v_data_2854_, sizeof(void*)*3, v___x_2853_);
lean_ctor_set_float(v_data_2854_, sizeof(void*)*3 + 8, v___x_2853_);
lean_ctor_set_uint8(v_data_2854_, sizeof(void*)*3 + 16, v_collapsed_2827_);
v___x_2855_ = lean_unbox(v___x_2849_);
lean_dec(v___x_2849_);
if (v___x_2855_ == 0)
{
lean_dec_ref_known(v___x_2852_, 1);
lean_dec(v_snd_2841_);
lean_dec(v_fst_2840_);
lean_dec_ref(v_tag_2828_);
lean_dec(v_cls_2826_);
v_data_2845_ = v_data_2854_;
goto v___jp_2844_;
}
else
{
lean_object* v_data_2856_; double v___x_2857_; double v___x_2858_; 
lean_dec_ref_known(v_data_2854_, 3);
v_data_2856_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2856_, 0, v_cls_2826_);
lean_ctor_set(v_data_2856_, 1, v___x_2852_);
lean_ctor_set(v_data_2856_, 2, v_tag_2828_);
v___x_2857_ = lean_unbox_float(v_fst_2840_);
lean_dec(v_fst_2840_);
lean_ctor_set_float(v_data_2856_, sizeof(void*)*3, v___x_2857_);
v___x_2858_ = lean_unbox_float(v_snd_2841_);
lean_dec(v_snd_2841_);
lean_ctor_set_float(v_data_2856_, sizeof(void*)*3 + 8, v___x_2858_);
lean_ctor_set_uint8(v_data_2856_, sizeof(void*)*3 + 16, v_collapsed_2827_);
v_data_2845_ = v_data_2856_;
goto v___jp_2844_;
}
}
v___jp_2859_:
{
if (v_clsEnabled_2830_ == 0)
{
if (v___y_2860_ == 0)
{
lean_object* v_modifyTraceState_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; 
lean_dec(v___x_2849_);
lean_dec(v_snd_2841_);
lean_dec(v_fst_2840_);
lean_dec(v_fst_2839_);
lean_dec_ref(v_msg_2833_);
lean_dec(v_ref_2832_);
lean_dec_ref(v_oldTraces_2831_);
lean_dec_ref(v_tag_2828_);
lean_dec(v_cls_2826_);
lean_dec_ref(v_inst_2825_);
lean_dec(v_inst_2823_);
lean_dec_ref(v_inst_2822_);
lean_dec_ref(v_inst_2820_);
v_modifyTraceState_2861_ = lean_ctor_get(v_inst_2821_, 0);
lean_inc(v_modifyTraceState_2861_);
lean_dec_ref(v_inst_2821_);
v___x_2862_ = lean_apply_1(v_modifyTraceState_2861_, v___f_2842_);
v___x_2863_ = lean_apply_4(v_toBind_2836_, lean_box(0), lean_box(0), v___x_2862_, v___f_2843_);
return v___x_2863_;
}
else
{
lean_dec_ref(v___f_2842_);
goto v___jp_2850_;
}
}
else
{
lean_dec_ref(v___f_2842_);
goto v___jp_2850_;
}
}
v___jp_2864_:
{
double v___x_2866_; double v___x_2867_; double v___x_2868_; uint8_t v___x_2869_; 
v___x_2866_ = lean_unbox_float(v_snd_2841_);
v___x_2867_ = lean_unbox_float(v_fst_2840_);
v___x_2868_ = lean_float_sub(v___x_2866_, v___x_2867_);
v___x_2869_ = lean_float_decLt(v___y_2865_, v___x_2868_);
v___y_2860_ = v___x_2869_;
goto v___jp_2859_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg___boxed(lean_object* v_inst_2884_, lean_object* v_inst_2885_, lean_object* v_inst_2886_, lean_object* v_inst_2887_, lean_object* v_always_2888_, lean_object* v_inst_2889_, lean_object* v_cls_2890_, lean_object* v_collapsed_2891_, lean_object* v_tag_2892_, lean_object* v_opts_2893_, lean_object* v_clsEnabled_2894_, lean_object* v_oldTraces_2895_, lean_object* v_ref_2896_, lean_object* v_msg_2897_, lean_object* v_resStartStop_2898_){
_start:
{
uint8_t v_collapsed_boxed_2899_; uint8_t v_clsEnabled_boxed_2900_; lean_object* v_res_2901_; 
v_collapsed_boxed_2899_ = lean_unbox(v_collapsed_2891_);
v_clsEnabled_boxed_2900_ = lean_unbox(v_clsEnabled_2894_);
v_res_2901_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2884_, v_inst_2885_, v_inst_2886_, v_inst_2887_, v_always_2888_, v_inst_2889_, v_cls_2890_, v_collapsed_boxed_2899_, v_tag_2892_, v_opts_2893_, v_clsEnabled_boxed_2900_, v_oldTraces_2895_, v_ref_2896_, v_msg_2897_, v_resStartStop_2898_);
lean_dec_ref(v_opts_2893_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback(lean_object* v_00_u03b1_2902_, lean_object* v_m_2903_, lean_object* v_inst_2904_, lean_object* v_inst_2905_, lean_object* v_00_u03b5_2906_, lean_object* v_inst_2907_, lean_object* v_inst_2908_, lean_object* v_always_2909_, lean_object* v_inst_2910_, lean_object* v_cls_2911_, uint8_t v_collapsed_2912_, lean_object* v_tag_2913_, lean_object* v_opts_2914_, uint8_t v_clsEnabled_2915_, lean_object* v_oldTraces_2916_, lean_object* v_ref_2917_, lean_object* v_msg_2918_, lean_object* v_resStartStop_2919_){
_start:
{
lean_object* v___x_2920_; 
v___x_2920_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2904_, v_inst_2905_, v_inst_2907_, v_inst_2908_, v_always_2909_, v_inst_2910_, v_cls_2911_, v_collapsed_2912_, v_tag_2913_, v_opts_2914_, v_clsEnabled_2915_, v_oldTraces_2916_, v_ref_2917_, v_msg_2918_, v_resStartStop_2919_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___boxed(lean_object** _args){
lean_object* v_00_u03b1_2921_ = _args[0];
lean_object* v_m_2922_ = _args[1];
lean_object* v_inst_2923_ = _args[2];
lean_object* v_inst_2924_ = _args[3];
lean_object* v_00_u03b5_2925_ = _args[4];
lean_object* v_inst_2926_ = _args[5];
lean_object* v_inst_2927_ = _args[6];
lean_object* v_always_2928_ = _args[7];
lean_object* v_inst_2929_ = _args[8];
lean_object* v_cls_2930_ = _args[9];
lean_object* v_collapsed_2931_ = _args[10];
lean_object* v_tag_2932_ = _args[11];
lean_object* v_opts_2933_ = _args[12];
lean_object* v_clsEnabled_2934_ = _args[13];
lean_object* v_oldTraces_2935_ = _args[14];
lean_object* v_ref_2936_ = _args[15];
lean_object* v_msg_2937_ = _args[16];
lean_object* v_resStartStop_2938_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_2939_; uint8_t v_clsEnabled_boxed_2940_; lean_object* v_res_2941_; 
v_collapsed_boxed_2939_ = lean_unbox(v_collapsed_2931_);
v_clsEnabled_boxed_2940_ = lean_unbox(v_clsEnabled_2934_);
v_res_2941_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback(v_00_u03b1_2921_, v_m_2922_, v_inst_2923_, v_inst_2924_, v_00_u03b5_2925_, v_inst_2926_, v_inst_2927_, v_always_2928_, v_inst_2929_, v_cls_2930_, v_collapsed_boxed_2939_, v_tag_2932_, v_opts_2933_, v_clsEnabled_boxed_2940_, v_oldTraces_2935_, v_ref_2936_, v_msg_2937_, v_resStartStop_2938_);
lean_dec_ref(v_opts_2933_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__0(lean_object* v_inst_2942_, lean_object* v_____do__lift_2943_){
_start:
{
lean_object* v___x_2944_; 
v___x_2944_ = lean_apply_1(v_inst_2942_, v_____do__lift_2943_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1(lean_object* v_inst_2945_, lean_object* v_inst_2946_, lean_object* v_inst_2947_, lean_object* v_inst_2948_, lean_object* v_always_2949_, lean_object* v_inst_2950_, lean_object* v_cls_2951_, uint8_t v_collapsed_2952_, lean_object* v_tag_2953_, lean_object* v_opts_2954_, uint8_t v_clsEnabled_2955_, lean_object* v_oldTraces_2956_, lean_object* v_ref_2957_, lean_object* v_msg_2958_, lean_object* v_resStartStop_2959_){
_start:
{
lean_object* v___x_2960_; 
v___x_2960_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2945_, v_inst_2946_, v_inst_2947_, v_inst_2948_, v_always_2949_, v_inst_2950_, v_cls_2951_, v_collapsed_2952_, v_tag_2953_, v_opts_2954_, v_clsEnabled_2955_, v_oldTraces_2956_, v_ref_2957_, v_msg_2958_, v_resStartStop_2959_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1___boxed(lean_object* v_inst_2961_, lean_object* v_inst_2962_, lean_object* v_inst_2963_, lean_object* v_inst_2964_, lean_object* v_always_2965_, lean_object* v_inst_2966_, lean_object* v_cls_2967_, lean_object* v_collapsed_2968_, lean_object* v_tag_2969_, lean_object* v_opts_2970_, lean_object* v_clsEnabled_2971_, lean_object* v_oldTraces_2972_, lean_object* v_ref_2973_, lean_object* v_msg_2974_, lean_object* v_resStartStop_2975_){
_start:
{
uint8_t v_collapsed_boxed_2976_; uint8_t v_clsEnabled_boxed_2977_; lean_object* v_res_2978_; 
v_collapsed_boxed_2976_ = lean_unbox(v_collapsed_2968_);
v_clsEnabled_boxed_2977_ = lean_unbox(v_clsEnabled_2971_);
v_res_2978_ = l_Lean_withTraceNodeBefore___redArg___lam__1(v_inst_2961_, v_inst_2962_, v_inst_2963_, v_inst_2964_, v_always_2965_, v_inst_2966_, v_cls_2967_, v_collapsed_boxed_2976_, v_tag_2969_, v_opts_2970_, v_clsEnabled_boxed_2977_, v_oldTraces_2972_, v_ref_2973_, v_msg_2974_, v_resStartStop_2975_);
lean_dec_ref(v_opts_2970_);
return v_res_2978_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10(lean_object* v_always_2979_, lean_object* v_inst_2980_, lean_object* v_inst_2981_, lean_object* v_inst_2982_, lean_object* v_inst_2983_, lean_object* v_inst_2984_, lean_object* v_cls_2985_, uint8_t v_collapsed_2986_, lean_object* v_tag_2987_, lean_object* v_opts_2988_, uint8_t v_clsEnabled_2989_, lean_object* v_oldTraces_2990_, lean_object* v_ref_2991_, lean_object* v_toPure_2992_, lean_object* v_toBind_2993_, lean_object* v_k_2994_, lean_object* v___x_2995_, lean_object* v_inst_2996_, lean_object* v_msg_2997_){
_start:
{
lean_object* v_tryCatch_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___f_3001_; lean_object* v___f_3002_; lean_object* v___f_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; uint8_t v___x_3008_; 
v_tryCatch_2998_ = lean_ctor_get(v_always_2979_, 1);
lean_inc(v_tryCatch_2998_);
v___x_2999_ = lean_box(v_collapsed_2986_);
v___x_3000_ = lean_box(v_clsEnabled_2989_);
lean_inc_ref(v_opts_2988_);
v___f_3001_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__1___boxed), 15, 14);
lean_closure_set(v___f_3001_, 0, v_inst_2980_);
lean_closure_set(v___f_3001_, 1, v_inst_2981_);
lean_closure_set(v___f_3001_, 2, v_inst_2982_);
lean_closure_set(v___f_3001_, 3, v_inst_2983_);
lean_closure_set(v___f_3001_, 4, v_always_2979_);
lean_closure_set(v___f_3001_, 5, v_inst_2984_);
lean_closure_set(v___f_3001_, 6, v_cls_2985_);
lean_closure_set(v___f_3001_, 7, v___x_2999_);
lean_closure_set(v___f_3001_, 8, v_tag_2987_);
lean_closure_set(v___f_3001_, 9, v_opts_2988_);
lean_closure_set(v___f_3001_, 10, v___x_3000_);
lean_closure_set(v___f_3001_, 11, v_oldTraces_2990_);
lean_closure_set(v___f_3001_, 12, v_ref_2991_);
lean_closure_set(v___f_3001_, 13, v_msg_2997_);
lean_inc_n(v_toPure_2992_, 2);
v___f_3002_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3002_, 0, v_toPure_2992_);
v___f_3003_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3003_, 0, v_toPure_2992_);
lean_inc(v_toBind_2993_);
v___x_3004_ = lean_apply_4(v_toBind_2993_, lean_box(0), lean_box(0), v_k_2994_, v___f_3003_);
v___x_3005_ = lean_apply_3(v_tryCatch_2998_, lean_box(0), v___x_3004_, v___f_3002_);
v___x_3006_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3007_ = l_Lean_Option_get___redArg(v___x_2995_, v_opts_2988_, v___x_3006_);
lean_dec_ref(v_opts_2988_);
v___x_3008_ = lean_unbox(v___x_3007_);
lean_dec(v___x_3007_);
if (v___x_3008_ == 0)
{
lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___f_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3009_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_3010_ = lean_apply_2(v_inst_2996_, lean_box(0), v___x_3009_);
lean_inc(v___x_3010_);
lean_inc_n(v_toBind_2993_, 2);
v___f_3011_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__5), 5, 4);
lean_closure_set(v___f_3011_, 0, v_toPure_2992_);
lean_closure_set(v___f_3011_, 1, v_toBind_2993_);
lean_closure_set(v___f_3011_, 2, v___x_3010_);
lean_closure_set(v___f_3011_, 3, v___x_3005_);
v___x_3012_ = lean_apply_4(v_toBind_2993_, lean_box(0), lean_box(0), v___x_3010_, v___f_3011_);
v___x_3013_ = lean_apply_4(v_toBind_2993_, lean_box(0), lean_box(0), v___x_3012_, v___f_3001_);
return v___x_3013_;
}
else
{
lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___f_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; 
v___x_3014_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_3015_ = lean_apply_2(v_inst_2996_, lean_box(0), v___x_3014_);
lean_inc(v___x_3015_);
lean_inc_n(v_toBind_2993_, 2);
v___f_3016_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__8), 5, 4);
lean_closure_set(v___f_3016_, 0, v_toPure_2992_);
lean_closure_set(v___f_3016_, 1, v_toBind_2993_);
lean_closure_set(v___f_3016_, 2, v___x_3015_);
lean_closure_set(v___f_3016_, 3, v___x_3005_);
v___x_3017_ = lean_apply_4(v_toBind_2993_, lean_box(0), lean_box(0), v___x_3015_, v___f_3016_);
v___x_3018_ = lean_apply_4(v_toBind_2993_, lean_box(0), lean_box(0), v___x_3017_, v___f_3001_);
return v___x_3018_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10___boxed(lean_object** _args){
lean_object* v_always_3019_ = _args[0];
lean_object* v_inst_3020_ = _args[1];
lean_object* v_inst_3021_ = _args[2];
lean_object* v_inst_3022_ = _args[3];
lean_object* v_inst_3023_ = _args[4];
lean_object* v_inst_3024_ = _args[5];
lean_object* v_cls_3025_ = _args[6];
lean_object* v_collapsed_3026_ = _args[7];
lean_object* v_tag_3027_ = _args[8];
lean_object* v_opts_3028_ = _args[9];
lean_object* v_clsEnabled_3029_ = _args[10];
lean_object* v_oldTraces_3030_ = _args[11];
lean_object* v_ref_3031_ = _args[12];
lean_object* v_toPure_3032_ = _args[13];
lean_object* v_toBind_3033_ = _args[14];
lean_object* v_k_3034_ = _args[15];
lean_object* v___x_3035_ = _args[16];
lean_object* v_inst_3036_ = _args[17];
lean_object* v_msg_3037_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_3038_; uint8_t v_clsEnabled_boxed_3039_; lean_object* v_res_3040_; 
v_collapsed_boxed_3038_ = lean_unbox(v_collapsed_3026_);
v_clsEnabled_boxed_3039_ = lean_unbox(v_clsEnabled_3029_);
v_res_3040_ = l_Lean_withTraceNodeBefore___redArg___lam__10(v_always_3019_, v_inst_3020_, v_inst_3021_, v_inst_3022_, v_inst_3023_, v_inst_3024_, v_cls_3025_, v_collapsed_boxed_3038_, v_tag_3027_, v_opts_3028_, v_clsEnabled_boxed_3039_, v_oldTraces_3030_, v_ref_3031_, v_toPure_3032_, v_toBind_3033_, v_k_3034_, v___x_3035_, v_inst_3036_, v_msg_3037_);
return v_res_3040_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3(lean_object* v_always_3041_, lean_object* v_inst_3042_, lean_object* v_inst_3043_, lean_object* v_inst_3044_, lean_object* v_inst_3045_, lean_object* v_inst_3046_, lean_object* v_cls_3047_, uint8_t v_collapsed_3048_, lean_object* v_tag_3049_, lean_object* v_opts_3050_, uint8_t v_clsEnabled_3051_, lean_object* v_oldTraces_3052_, lean_object* v_toPure_3053_, lean_object* v_toBind_3054_, lean_object* v_k_3055_, lean_object* v___x_3056_, lean_object* v_inst_3057_, lean_object* v_msg_3058_, lean_object* v___f_3059_, lean_object* v_withRef_3060_, lean_object* v_getRef_3061_, lean_object* v_ref_3062_){
_start:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___f_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___f_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; 
v___x_3063_ = lean_box(v_collapsed_3048_);
v___x_3064_ = lean_box(v_clsEnabled_3051_);
lean_inc_n(v_toBind_3054_, 3);
lean_inc(v_ref_3062_);
v___f_3065_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__10___boxed), 19, 18);
lean_closure_set(v___f_3065_, 0, v_always_3041_);
lean_closure_set(v___f_3065_, 1, v_inst_3042_);
lean_closure_set(v___f_3065_, 2, v_inst_3043_);
lean_closure_set(v___f_3065_, 3, v_inst_3044_);
lean_closure_set(v___f_3065_, 4, v_inst_3045_);
lean_closure_set(v___f_3065_, 5, v_inst_3046_);
lean_closure_set(v___f_3065_, 6, v_cls_3047_);
lean_closure_set(v___f_3065_, 7, v___x_3063_);
lean_closure_set(v___f_3065_, 8, v_tag_3049_);
lean_closure_set(v___f_3065_, 9, v_opts_3050_);
lean_closure_set(v___f_3065_, 10, v___x_3064_);
lean_closure_set(v___f_3065_, 11, v_oldTraces_3052_);
lean_closure_set(v___f_3065_, 12, v_ref_3062_);
lean_closure_set(v___f_3065_, 13, v_toPure_3053_);
lean_closure_set(v___f_3065_, 14, v_toBind_3054_);
lean_closure_set(v___f_3065_, 15, v_k_3055_);
lean_closure_set(v___f_3065_, 16, v___x_3056_);
lean_closure_set(v___f_3065_, 17, v_inst_3057_);
v___x_3066_ = lean_box(0);
v___x_3067_ = lean_apply_1(v_msg_3058_, v___x_3066_);
v___x_3068_ = lean_apply_4(v_toBind_3054_, lean_box(0), lean_box(0), v___x_3067_, v___f_3059_);
v___f_3069_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3069_, 0, v_ref_3062_);
lean_closure_set(v___f_3069_, 1, v_withRef_3060_);
lean_closure_set(v___f_3069_, 2, v___x_3068_);
v___x_3070_ = lean_apply_4(v_toBind_3054_, lean_box(0), lean_box(0), v_getRef_3061_, v___f_3069_);
v___x_3071_ = lean_apply_4(v_toBind_3054_, lean_box(0), lean_box(0), v___x_3070_, v___f_3065_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_always_3072_ = _args[0];
lean_object* v_inst_3073_ = _args[1];
lean_object* v_inst_3074_ = _args[2];
lean_object* v_inst_3075_ = _args[3];
lean_object* v_inst_3076_ = _args[4];
lean_object* v_inst_3077_ = _args[5];
lean_object* v_cls_3078_ = _args[6];
lean_object* v_collapsed_3079_ = _args[7];
lean_object* v_tag_3080_ = _args[8];
lean_object* v_opts_3081_ = _args[9];
lean_object* v_clsEnabled_3082_ = _args[10];
lean_object* v_oldTraces_3083_ = _args[11];
lean_object* v_toPure_3084_ = _args[12];
lean_object* v_toBind_3085_ = _args[13];
lean_object* v_k_3086_ = _args[14];
lean_object* v___x_3087_ = _args[15];
lean_object* v_inst_3088_ = _args[16];
lean_object* v_msg_3089_ = _args[17];
lean_object* v___f_3090_ = _args[18];
lean_object* v_withRef_3091_ = _args[19];
lean_object* v_getRef_3092_ = _args[20];
lean_object* v_ref_3093_ = _args[21];
_start:
{
uint8_t v_collapsed_boxed_3094_; uint8_t v_clsEnabled_boxed_3095_; lean_object* v_res_3096_; 
v_collapsed_boxed_3094_ = lean_unbox(v_collapsed_3079_);
v_clsEnabled_boxed_3095_ = lean_unbox(v_clsEnabled_3082_);
v_res_3096_ = l_Lean_withTraceNodeBefore___redArg___lam__3(v_always_3072_, v_inst_3073_, v_inst_3074_, v_inst_3075_, v_inst_3076_, v_inst_3077_, v_cls_3078_, v_collapsed_boxed_3094_, v_tag_3080_, v_opts_3081_, v_clsEnabled_boxed_3095_, v_oldTraces_3083_, v_toPure_3084_, v_toBind_3085_, v_k_3086_, v___x_3087_, v_inst_3088_, v_msg_3089_, v___f_3090_, v_withRef_3091_, v_getRef_3092_, v_ref_3093_);
return v_res_3096_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2(lean_object* v_inst_3097_, lean_object* v_always_3098_, lean_object* v_inst_3099_, lean_object* v_inst_3100_, lean_object* v_inst_3101_, lean_object* v_inst_3102_, lean_object* v_cls_3103_, uint8_t v_collapsed_3104_, lean_object* v_tag_3105_, lean_object* v_opts_3106_, uint8_t v_clsEnabled_3107_, lean_object* v_toPure_3108_, lean_object* v_toBind_3109_, lean_object* v_k_3110_, lean_object* v___x_3111_, lean_object* v_inst_3112_, lean_object* v_msg_3113_, lean_object* v___f_3114_, lean_object* v_oldTraces_3115_){
_start:
{
lean_object* v_getRef_3116_; lean_object* v_withRef_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___f_3120_; lean_object* v___x_3121_; 
v_getRef_3116_ = lean_ctor_get(v_inst_3097_, 0);
lean_inc_n(v_getRef_3116_, 2);
v_withRef_3117_ = lean_ctor_get(v_inst_3097_, 1);
lean_inc(v_withRef_3117_);
v___x_3118_ = lean_box(v_collapsed_3104_);
v___x_3119_ = lean_box(v_clsEnabled_3107_);
lean_inc(v_toBind_3109_);
v___f_3120_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__3___boxed), 22, 21);
lean_closure_set(v___f_3120_, 0, v_always_3098_);
lean_closure_set(v___f_3120_, 1, v_inst_3099_);
lean_closure_set(v___f_3120_, 2, v_inst_3100_);
lean_closure_set(v___f_3120_, 3, v_inst_3097_);
lean_closure_set(v___f_3120_, 4, v_inst_3101_);
lean_closure_set(v___f_3120_, 5, v_inst_3102_);
lean_closure_set(v___f_3120_, 6, v_cls_3103_);
lean_closure_set(v___f_3120_, 7, v___x_3118_);
lean_closure_set(v___f_3120_, 8, v_tag_3105_);
lean_closure_set(v___f_3120_, 9, v_opts_3106_);
lean_closure_set(v___f_3120_, 10, v___x_3119_);
lean_closure_set(v___f_3120_, 11, v_oldTraces_3115_);
lean_closure_set(v___f_3120_, 12, v_toPure_3108_);
lean_closure_set(v___f_3120_, 13, v_toBind_3109_);
lean_closure_set(v___f_3120_, 14, v_k_3110_);
lean_closure_set(v___f_3120_, 15, v___x_3111_);
lean_closure_set(v___f_3120_, 16, v_inst_3112_);
lean_closure_set(v___f_3120_, 17, v_msg_3113_);
lean_closure_set(v___f_3120_, 18, v___f_3114_);
lean_closure_set(v___f_3120_, 19, v_withRef_3117_);
lean_closure_set(v___f_3120_, 20, v_getRef_3116_);
v___x_3121_ = lean_apply_4(v_toBind_3109_, lean_box(0), lean_box(0), v_getRef_3116_, v___f_3120_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2___boxed(lean_object** _args){
lean_object* v_inst_3122_ = _args[0];
lean_object* v_always_3123_ = _args[1];
lean_object* v_inst_3124_ = _args[2];
lean_object* v_inst_3125_ = _args[3];
lean_object* v_inst_3126_ = _args[4];
lean_object* v_inst_3127_ = _args[5];
lean_object* v_cls_3128_ = _args[6];
lean_object* v_collapsed_3129_ = _args[7];
lean_object* v_tag_3130_ = _args[8];
lean_object* v_opts_3131_ = _args[9];
lean_object* v_clsEnabled_3132_ = _args[10];
lean_object* v_toPure_3133_ = _args[11];
lean_object* v_toBind_3134_ = _args[12];
lean_object* v_k_3135_ = _args[13];
lean_object* v___x_3136_ = _args[14];
lean_object* v_inst_3137_ = _args[15];
lean_object* v_msg_3138_ = _args[16];
lean_object* v___f_3139_ = _args[17];
lean_object* v_oldTraces_3140_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_3141_; uint8_t v_clsEnabled_boxed_3142_; lean_object* v_res_3143_; 
v_collapsed_boxed_3141_ = lean_unbox(v_collapsed_3129_);
v_clsEnabled_boxed_3142_ = lean_unbox(v_clsEnabled_3132_);
v_res_3143_ = l_Lean_withTraceNodeBefore___redArg___lam__2(v_inst_3122_, v_always_3123_, v_inst_3124_, v_inst_3125_, v_inst_3126_, v_inst_3127_, v_cls_3128_, v_collapsed_boxed_3141_, v_tag_3130_, v_opts_3131_, v_clsEnabled_boxed_3142_, v_toPure_3133_, v_toBind_3134_, v_k_3135_, v___x_3136_, v_inst_3137_, v_msg_3138_, v___f_3139_, v_oldTraces_3140_);
return v_res_3143_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4(lean_object* v_inst_3144_, lean_object* v_always_3145_, lean_object* v_inst_3146_, lean_object* v_inst_3147_, lean_object* v_inst_3148_, lean_object* v_inst_3149_, lean_object* v_cls_3150_, uint8_t v_collapsed_3151_, lean_object* v_tag_3152_, lean_object* v_opts_3153_, lean_object* v_toPure_3154_, lean_object* v_toBind_3155_, lean_object* v_k_3156_, lean_object* v___x_3157_, lean_object* v_inst_3158_, lean_object* v_msg_3159_, lean_object* v___f_3160_, uint8_t v_clsEnabled_3161_){
_start:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___f_3164_; 
v___x_3162_ = lean_box(v_collapsed_3151_);
v___x_3163_ = lean_box(v_clsEnabled_3161_);
lean_inc_ref(v___x_3157_);
lean_inc(v_k_3156_);
lean_inc(v_toBind_3155_);
lean_inc_ref(v_opts_3153_);
lean_inc_ref(v_inst_3147_);
lean_inc_ref(v_inst_3146_);
v___f_3164_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__2___boxed), 19, 18);
lean_closure_set(v___f_3164_, 0, v_inst_3144_);
lean_closure_set(v___f_3164_, 1, v_always_3145_);
lean_closure_set(v___f_3164_, 2, v_inst_3146_);
lean_closure_set(v___f_3164_, 3, v_inst_3147_);
lean_closure_set(v___f_3164_, 4, v_inst_3148_);
lean_closure_set(v___f_3164_, 5, v_inst_3149_);
lean_closure_set(v___f_3164_, 6, v_cls_3150_);
lean_closure_set(v___f_3164_, 7, v___x_3162_);
lean_closure_set(v___f_3164_, 8, v_tag_3152_);
lean_closure_set(v___f_3164_, 9, v_opts_3153_);
lean_closure_set(v___f_3164_, 10, v___x_3163_);
lean_closure_set(v___f_3164_, 11, v_toPure_3154_);
lean_closure_set(v___f_3164_, 12, v_toBind_3155_);
lean_closure_set(v___f_3164_, 13, v_k_3156_);
lean_closure_set(v___f_3164_, 14, v___x_3157_);
lean_closure_set(v___f_3164_, 15, v_inst_3158_);
lean_closure_set(v___f_3164_, 16, v_msg_3159_);
lean_closure_set(v___f_3164_, 17, v___f_3160_);
if (v_clsEnabled_3161_ == 0)
{
lean_object* v___x_3168_; lean_object* v___x_3169_; uint8_t v___x_3170_; 
v___x_3168_ = l_Lean_trace_profiler;
v___x_3169_ = l_Lean_Option_get___redArg(v___x_3157_, v_opts_3153_, v___x_3168_);
lean_dec_ref(v_opts_3153_);
v___x_3170_ = lean_unbox(v___x_3169_);
lean_dec(v___x_3169_);
if (v___x_3170_ == 0)
{
lean_dec_ref(v___f_3164_);
lean_dec(v_toBind_3155_);
lean_dec_ref(v_inst_3147_);
lean_dec_ref(v_inst_3146_);
return v_k_3156_;
}
else
{
lean_dec(v_k_3156_);
goto v___jp_3165_;
}
}
else
{
lean_dec_ref(v___x_3157_);
lean_dec(v_k_3156_);
lean_dec_ref(v_opts_3153_);
goto v___jp_3165_;
}
v___jp_3165_:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3166_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_3146_, v_inst_3147_);
v___x_3167_ = lean_apply_4(v_toBind_3155_, lean_box(0), lean_box(0), v___x_3166_, v___f_3164_);
return v___x_3167_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_inst_3171_ = _args[0];
lean_object* v_always_3172_ = _args[1];
lean_object* v_inst_3173_ = _args[2];
lean_object* v_inst_3174_ = _args[3];
lean_object* v_inst_3175_ = _args[4];
lean_object* v_inst_3176_ = _args[5];
lean_object* v_cls_3177_ = _args[6];
lean_object* v_collapsed_3178_ = _args[7];
lean_object* v_tag_3179_ = _args[8];
lean_object* v_opts_3180_ = _args[9];
lean_object* v_toPure_3181_ = _args[10];
lean_object* v_toBind_3182_ = _args[11];
lean_object* v_k_3183_ = _args[12];
lean_object* v___x_3184_ = _args[13];
lean_object* v_inst_3185_ = _args[14];
lean_object* v_msg_3186_ = _args[15];
lean_object* v___f_3187_ = _args[16];
lean_object* v_clsEnabled_3188_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_3189_; uint8_t v_clsEnabled_boxed_3190_; lean_object* v_res_3191_; 
v_collapsed_boxed_3189_ = lean_unbox(v_collapsed_3178_);
v_clsEnabled_boxed_3190_ = lean_unbox(v_clsEnabled_3188_);
v_res_3191_ = l_Lean_withTraceNodeBefore___redArg___lam__4(v_inst_3171_, v_always_3172_, v_inst_3173_, v_inst_3174_, v_inst_3175_, v_inst_3176_, v_cls_3177_, v_collapsed_boxed_3189_, v_tag_3179_, v_opts_3180_, v_toPure_3181_, v_toBind_3182_, v_k_3183_, v___x_3184_, v_inst_3185_, v_msg_3186_, v___f_3187_, v_clsEnabled_boxed_3190_);
return v_res_3191_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7(lean_object* v_k_3192_, lean_object* v_inst_3193_, lean_object* v_toApplicative_3194_, lean_object* v_inst_3195_, lean_object* v_always_3196_, lean_object* v_inst_3197_, lean_object* v_inst_3198_, lean_object* v_inst_3199_, lean_object* v_cls_3200_, uint8_t v_collapsed_3201_, lean_object* v_tag_3202_, lean_object* v_toBind_3203_, lean_object* v___x_3204_, lean_object* v_inst_3205_, lean_object* v_msg_3206_, lean_object* v___f_3207_, lean_object* v_inst_3208_, lean_object* v_opts_3209_){
_start:
{
uint8_t v_hasTrace_3210_; 
v_hasTrace_3210_ = lean_ctor_get_uint8(v_opts_3209_, sizeof(void*)*1);
if (v_hasTrace_3210_ == 0)
{
lean_dec_ref(v_opts_3209_);
lean_dec(v_inst_3208_);
lean_dec(v___f_3207_);
lean_dec(v_msg_3206_);
lean_dec(v_inst_3205_);
lean_dec_ref(v___x_3204_);
lean_dec(v_toBind_3203_);
lean_dec_ref(v_tag_3202_);
lean_dec(v_cls_3200_);
lean_dec_ref(v_inst_3199_);
lean_dec(v_inst_3198_);
lean_dec_ref(v_inst_3197_);
lean_dec_ref(v_always_3196_);
lean_dec_ref(v_inst_3195_);
lean_dec_ref(v_toApplicative_3194_);
lean_dec_ref(v_inst_3193_);
return v_k_3192_;
}
else
{
lean_object* v_getInheritedTraceOptions_3211_; lean_object* v_toPure_3212_; lean_object* v___x_3213_; lean_object* v___f_3214_; lean_object* v___f_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v_getInheritedTraceOptions_3211_ = lean_ctor_get(v_inst_3193_, 2);
lean_inc(v_getInheritedTraceOptions_3211_);
v_toPure_3212_ = lean_ctor_get(v_toApplicative_3194_, 1);
lean_inc_n(v_toPure_3212_, 2);
lean_dec_ref(v_toApplicative_3194_);
v___x_3213_ = lean_box(v_collapsed_3201_);
lean_inc_n(v_toBind_3203_, 3);
lean_inc(v_cls_3200_);
v___f_3214_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__4___boxed), 18, 17);
lean_closure_set(v___f_3214_, 0, v_inst_3195_);
lean_closure_set(v___f_3214_, 1, v_always_3196_);
lean_closure_set(v___f_3214_, 2, v_inst_3197_);
lean_closure_set(v___f_3214_, 3, v_inst_3193_);
lean_closure_set(v___f_3214_, 4, v_inst_3198_);
lean_closure_set(v___f_3214_, 5, v_inst_3199_);
lean_closure_set(v___f_3214_, 6, v_cls_3200_);
lean_closure_set(v___f_3214_, 7, v___x_3213_);
lean_closure_set(v___f_3214_, 8, v_tag_3202_);
lean_closure_set(v___f_3214_, 9, v_opts_3209_);
lean_closure_set(v___f_3214_, 10, v_toPure_3212_);
lean_closure_set(v___f_3214_, 11, v_toBind_3203_);
lean_closure_set(v___f_3214_, 12, v_k_3192_);
lean_closure_set(v___f_3214_, 13, v___x_3204_);
lean_closure_set(v___f_3214_, 14, v_inst_3205_);
lean_closure_set(v___f_3214_, 15, v_msg_3206_);
lean_closure_set(v___f_3214_, 16, v___f_3207_);
v___f_3215_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_3215_, 0, v_toPure_3212_);
lean_closure_set(v___f_3215_, 1, v_cls_3200_);
lean_closure_set(v___f_3215_, 2, v_toBind_3203_);
lean_closure_set(v___f_3215_, 3, v_inst_3208_);
v___x_3216_ = lean_apply_4(v_toBind_3203_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3211_, v___f_3215_);
v___x_3217_ = lean_apply_4(v_toBind_3203_, lean_box(0), lean_box(0), v___x_3216_, v___f_3214_);
return v___x_3217_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_k_3218_ = _args[0];
lean_object* v_inst_3219_ = _args[1];
lean_object* v_toApplicative_3220_ = _args[2];
lean_object* v_inst_3221_ = _args[3];
lean_object* v_always_3222_ = _args[4];
lean_object* v_inst_3223_ = _args[5];
lean_object* v_inst_3224_ = _args[6];
lean_object* v_inst_3225_ = _args[7];
lean_object* v_cls_3226_ = _args[8];
lean_object* v_collapsed_3227_ = _args[9];
lean_object* v_tag_3228_ = _args[10];
lean_object* v_toBind_3229_ = _args[11];
lean_object* v___x_3230_ = _args[12];
lean_object* v_inst_3231_ = _args[13];
lean_object* v_msg_3232_ = _args[14];
lean_object* v___f_3233_ = _args[15];
lean_object* v_inst_3234_ = _args[16];
lean_object* v_opts_3235_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_3236_; lean_object* v_res_3237_; 
v_collapsed_boxed_3236_ = lean_unbox(v_collapsed_3227_);
v_res_3237_ = l_Lean_withTraceNodeBefore___redArg___lam__7(v_k_3218_, v_inst_3219_, v_toApplicative_3220_, v_inst_3221_, v_always_3222_, v_inst_3223_, v_inst_3224_, v_inst_3225_, v_cls_3226_, v_collapsed_boxed_3236_, v_tag_3228_, v_toBind_3229_, v___x_3230_, v_inst_3231_, v_msg_3232_, v___f_3233_, v_inst_3234_, v_opts_3235_);
return v_res_3237_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg(lean_object* v_inst_3238_, lean_object* v_inst_3239_, lean_object* v_inst_3240_, lean_object* v_inst_3241_, lean_object* v_inst_3242_, lean_object* v_always_3243_, lean_object* v_inst_3244_, lean_object* v_inst_3245_, lean_object* v_cls_3246_, lean_object* v_msg_3247_, lean_object* v_k_3248_, uint8_t v_collapsed_3249_, lean_object* v_tag_3250_){
_start:
{
lean_object* v___x_3251_; lean_object* v_toApplicative_3252_; lean_object* v_toBind_3253_; lean_object* v___f_3254_; lean_object* v___x_3255_; lean_object* v___f_3256_; lean_object* v___x_3257_; 
v___x_3251_ = l_Lean_KVMap_instValueBool;
v_toApplicative_3252_ = lean_ctor_get(v_inst_3238_, 0);
lean_inc_ref(v_toApplicative_3252_);
v_toBind_3253_ = lean_ctor_get(v_inst_3238_, 1);
lean_inc_n(v_toBind_3253_, 2);
lean_inc(v_inst_3241_);
v___f_3254_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3254_, 0, v_inst_3241_);
v___x_3255_ = lean_box(v_collapsed_3249_);
lean_inc(v_inst_3242_);
v___f_3256_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__7___boxed), 18, 17);
lean_closure_set(v___f_3256_, 0, v_k_3248_);
lean_closure_set(v___f_3256_, 1, v_inst_3239_);
lean_closure_set(v___f_3256_, 2, v_toApplicative_3252_);
lean_closure_set(v___f_3256_, 3, v_inst_3240_);
lean_closure_set(v___f_3256_, 4, v_always_3243_);
lean_closure_set(v___f_3256_, 5, v_inst_3238_);
lean_closure_set(v___f_3256_, 6, v_inst_3241_);
lean_closure_set(v___f_3256_, 7, v_inst_3245_);
lean_closure_set(v___f_3256_, 8, v_cls_3246_);
lean_closure_set(v___f_3256_, 9, v___x_3255_);
lean_closure_set(v___f_3256_, 10, v_tag_3250_);
lean_closure_set(v___f_3256_, 11, v_toBind_3253_);
lean_closure_set(v___f_3256_, 12, v___x_3251_);
lean_closure_set(v___f_3256_, 13, v_inst_3244_);
lean_closure_set(v___f_3256_, 14, v_msg_3247_);
lean_closure_set(v___f_3256_, 15, v___f_3254_);
lean_closure_set(v___f_3256_, 16, v_inst_3242_);
v___x_3257_ = lean_apply_4(v_toBind_3253_, lean_box(0), lean_box(0), v_inst_3242_, v___f_3256_);
return v___x_3257_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___boxed(lean_object* v_inst_3258_, lean_object* v_inst_3259_, lean_object* v_inst_3260_, lean_object* v_inst_3261_, lean_object* v_inst_3262_, lean_object* v_always_3263_, lean_object* v_inst_3264_, lean_object* v_inst_3265_, lean_object* v_cls_3266_, lean_object* v_msg_3267_, lean_object* v_k_3268_, lean_object* v_collapsed_3269_, lean_object* v_tag_3270_){
_start:
{
uint8_t v_collapsed_boxed_3271_; lean_object* v_res_3272_; 
v_collapsed_boxed_3271_ = lean_unbox(v_collapsed_3269_);
v_res_3272_ = l_Lean_withTraceNodeBefore___redArg(v_inst_3258_, v_inst_3259_, v_inst_3260_, v_inst_3261_, v_inst_3262_, v_always_3263_, v_inst_3264_, v_inst_3265_, v_cls_3266_, v_msg_3267_, v_k_3268_, v_collapsed_boxed_3271_, v_tag_3270_);
return v_res_3272_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore(lean_object* v_00_u03b1_3273_, lean_object* v_m_3274_, lean_object* v_inst_3275_, lean_object* v_inst_3276_, lean_object* v_00_u03b5_3277_, lean_object* v_inst_3278_, lean_object* v_inst_3279_, lean_object* v_inst_3280_, lean_object* v_always_3281_, lean_object* v_inst_3282_, lean_object* v_inst_3283_, lean_object* v_cls_3284_, lean_object* v_msg_3285_, lean_object* v_k_3286_, uint8_t v_collapsed_3287_, lean_object* v_tag_3288_){
_start:
{
lean_object* v___x_3289_; lean_object* v_toApplicative_3290_; lean_object* v_toBind_3291_; lean_object* v___f_3292_; lean_object* v___x_3293_; lean_object* v___f_3294_; lean_object* v___x_3295_; 
v___x_3289_ = l_Lean_KVMap_instValueBool;
v_toApplicative_3290_ = lean_ctor_get(v_inst_3275_, 0);
lean_inc_ref(v_toApplicative_3290_);
v_toBind_3291_ = lean_ctor_get(v_inst_3275_, 1);
lean_inc_n(v_toBind_3291_, 2);
lean_inc(v_inst_3279_);
v___f_3292_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3292_, 0, v_inst_3279_);
v___x_3293_ = lean_box(v_collapsed_3287_);
lean_inc(v_inst_3280_);
v___f_3294_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__7___boxed), 18, 17);
lean_closure_set(v___f_3294_, 0, v_k_3286_);
lean_closure_set(v___f_3294_, 1, v_inst_3276_);
lean_closure_set(v___f_3294_, 2, v_toApplicative_3290_);
lean_closure_set(v___f_3294_, 3, v_inst_3278_);
lean_closure_set(v___f_3294_, 4, v_always_3281_);
lean_closure_set(v___f_3294_, 5, v_inst_3275_);
lean_closure_set(v___f_3294_, 6, v_inst_3279_);
lean_closure_set(v___f_3294_, 7, v_inst_3283_);
lean_closure_set(v___f_3294_, 8, v_cls_3284_);
lean_closure_set(v___f_3294_, 9, v___x_3293_);
lean_closure_set(v___f_3294_, 10, v_tag_3288_);
lean_closure_set(v___f_3294_, 11, v_toBind_3291_);
lean_closure_set(v___f_3294_, 12, v___x_3289_);
lean_closure_set(v___f_3294_, 13, v_inst_3282_);
lean_closure_set(v___f_3294_, 14, v_msg_3285_);
lean_closure_set(v___f_3294_, 15, v___f_3292_);
lean_closure_set(v___f_3294_, 16, v_inst_3280_);
v___x_3295_ = lean_apply_4(v_toBind_3291_, lean_box(0), lean_box(0), v_inst_3280_, v___f_3294_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___boxed(lean_object* v_00_u03b1_3296_, lean_object* v_m_3297_, lean_object* v_inst_3298_, lean_object* v_inst_3299_, lean_object* v_00_u03b5_3300_, lean_object* v_inst_3301_, lean_object* v_inst_3302_, lean_object* v_inst_3303_, lean_object* v_always_3304_, lean_object* v_inst_3305_, lean_object* v_inst_3306_, lean_object* v_cls_3307_, lean_object* v_msg_3308_, lean_object* v_k_3309_, lean_object* v_collapsed_3310_, lean_object* v_tag_3311_){
_start:
{
uint8_t v_collapsed_boxed_3312_; lean_object* v_res_3313_; 
v_collapsed_boxed_3312_ = lean_unbox(v_collapsed_3310_);
v_res_3313_ = l_Lean_withTraceNodeBefore(v_00_u03b1_3296_, v_m_3297_, v_inst_3298_, v_inst_3299_, v_00_u03b5_3300_, v_inst_3301_, v_inst_3302_, v_inst_3303_, v_always_3304_, v_inst_3305_, v_inst_3306_, v_cls_3307_, v_msg_3308_, v_k_3309_, v_collapsed_boxed_3312_, v_tag_3311_);
return v_res_3313_;
}
}
LEAN_EXPORT uint8_t l_Lean_addTraceAsMessages___redArg___lam__0(lean_object* v_x_3314_, lean_object* v_x_3315_){
_start:
{
lean_object* v_fst_3316_; lean_object* v_fst_3317_; lean_object* v_fst_3318_; lean_object* v_fst_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; uint8_t v___x_3322_; 
v_fst_3316_ = lean_ctor_get(v_x_3314_, 0);
v_fst_3317_ = lean_ctor_get(v_x_3315_, 0);
v_fst_3318_ = lean_ctor_get(v_fst_3316_, 0);
v_fst_3319_ = lean_ctor_get(v_fst_3317_, 0);
v___x_3320_ = lean_unsigned_to_nat(1u);
v___x_3321_ = lean_nat_add(v_fst_3318_, v___x_3320_);
v___x_3322_ = lean_nat_dec_le(v___x_3321_, v_fst_3319_);
lean_dec(v___x_3321_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__0___boxed(lean_object* v_x_3323_, lean_object* v_x_3324_){
_start:
{
uint8_t v_res_3325_; lean_object* v_r_3326_; 
v_res_3325_ = l_Lean_addTraceAsMessages___redArg___lam__0(v_x_3323_, v_x_3324_);
lean_dec_ref(v_x_3324_);
lean_dec_ref(v_x_3323_);
v_r_3326_ = lean_box(v_res_3325_);
return v_r_3326_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__1(lean_object* v_x1_3327_, lean_object* v_x2_3328_, lean_object* v_x3_3329_){
_start:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; 
v___x_3330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3330_, 0, v_x2_3328_);
lean_ctor_set(v___x_3330_, 1, v_x3_3329_);
v___x_3331_ = lean_array_push(v_x1_3327_, v___x_3330_);
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4(lean_object* v_____do__lift_3332_, lean_object* v___x_3333_, lean_object* v_fst_3334_, lean_object* v_snd_3335_, lean_object* v_logMessage_3336_, lean_object* v_toBind_3337_, lean_object* v___f_3338_, lean_object* v_____do__lift_3339_){
_start:
{
uint8_t v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3340_ = 0;
v___x_3341_ = l_Lean_Elab_mkMessageCore(v_____do__lift_3332_, v_____do__lift_3339_, v___x_3333_, v___x_3340_, v_fst_3334_, v_snd_3335_);
v___x_3342_ = lean_apply_1(v_logMessage_3336_, v___x_3341_);
v___x_3343_ = lean_apply_4(v_toBind_3337_, lean_box(0), lean_box(0), v___x_3342_, v___f_3338_);
return v___x_3343_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4___boxed(lean_object* v_____do__lift_3344_, lean_object* v___x_3345_, lean_object* v_fst_3346_, lean_object* v_snd_3347_, lean_object* v_logMessage_3348_, lean_object* v_toBind_3349_, lean_object* v___f_3350_, lean_object* v_____do__lift_3351_){
_start:
{
lean_object* v_res_3352_; 
v_res_3352_ = l_Lean_addTraceAsMessages___redArg___lam__4(v_____do__lift_3344_, v___x_3345_, v_fst_3346_, v_snd_3347_, v_logMessage_3348_, v_toBind_3349_, v___f_3350_, v_____do__lift_3351_);
lean_dec(v_snd_3347_);
lean_dec(v_fst_3346_);
return v_res_3352_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__2(lean_object* v___x_3353_, lean_object* v_fst_3354_, lean_object* v_snd_3355_, lean_object* v_logMessage_3356_, lean_object* v_toBind_3357_, lean_object* v___f_3358_, lean_object* v_toMonadFileMap_3359_, lean_object* v_____do__lift_3360_){
_start:
{
lean_object* v___f_3361_; lean_object* v___x_3362_; 
lean_inc(v_toBind_3357_);
v___f_3361_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__4___boxed), 8, 7);
lean_closure_set(v___f_3361_, 0, v_____do__lift_3360_);
lean_closure_set(v___f_3361_, 1, v___x_3353_);
lean_closure_set(v___f_3361_, 2, v_fst_3354_);
lean_closure_set(v___f_3361_, 3, v_snd_3355_);
lean_closure_set(v___f_3361_, 4, v_logMessage_3356_);
lean_closure_set(v___f_3361_, 5, v_toBind_3357_);
lean_closure_set(v___f_3361_, 6, v___f_3358_);
v___x_3362_ = lean_apply_4(v_toBind_3357_, lean_box(0), lean_box(0), v_toMonadFileMap_3359_, v___f_3361_);
return v___x_3362_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3(lean_object* v___x_3363_, uint8_t v___x_3364_, lean_object* v_logMessage_3365_, lean_object* v_toBind_3366_, lean_object* v___f_3367_, lean_object* v_toMonadFileMap_3368_, lean_object* v_getFileName_3369_, lean_object* v_a_3370_, lean_object* v_x_3371_, lean_object* v___y_3372_){
_start:
{
lean_object* v_fst_3373_; lean_object* v_snd_3374_; lean_object* v_fst_3375_; lean_object* v_snd_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3393_; 
v_fst_3373_ = lean_ctor_get(v_a_3370_, 0);
lean_inc(v_fst_3373_);
v_snd_3374_ = lean_ctor_get(v_a_3370_, 1);
lean_inc(v_snd_3374_);
lean_dec_ref(v_a_3370_);
v_fst_3375_ = lean_ctor_get(v_fst_3373_, 0);
v_snd_3376_ = lean_ctor_get(v_fst_3373_, 1);
v_isSharedCheck_3393_ = !lean_is_exclusive(v_fst_3373_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3378_ = v_fst_3373_;
v_isShared_3379_ = v_isSharedCheck_3393_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_snd_3376_);
lean_inc(v_fst_3375_);
lean_dec(v_fst_3373_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3393_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; double v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3389_; 
v___x_3380_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_3381_ = lean_box(0);
v___x_3382_ = lean_box(0);
v___x_3383_ = lean_float_of_nat(v___x_3363_);
v___x_3384_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__1));
v___x_3385_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3385_, 0, v___x_3381_);
lean_ctor_set(v___x_3385_, 1, v___x_3382_);
lean_ctor_set(v___x_3385_, 2, v___x_3384_);
lean_ctor_set_float(v___x_3385_, sizeof(void*)*3, v___x_3383_);
lean_ctor_set_float(v___x_3385_, sizeof(void*)*3 + 8, v___x_3383_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*3 + 16, v___x_3364_);
v___x_3386_ = l_Lean_MessageData_nil;
v___x_3387_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3385_);
lean_ctor_set(v___x_3387_, 1, v___x_3386_);
lean_ctor_set(v___x_3387_, 2, v_snd_3374_);
if (v_isShared_3379_ == 0)
{
lean_ctor_set_tag(v___x_3378_, 8);
lean_ctor_set(v___x_3378_, 1, v___x_3387_);
lean_ctor_set(v___x_3378_, 0, v___x_3380_);
v___x_3389_ = v___x_3378_;
goto v_reusejp_3388_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v___x_3380_);
lean_ctor_set(v_reuseFailAlloc_3392_, 1, v___x_3387_);
v___x_3389_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3388_;
}
v_reusejp_3388_:
{
lean_object* v___f_3390_; lean_object* v___x_3391_; 
lean_inc(v_toBind_3366_);
v___f_3390_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__2), 8, 7);
lean_closure_set(v___f_3390_, 0, v___x_3389_);
lean_closure_set(v___f_3390_, 1, v_fst_3375_);
lean_closure_set(v___f_3390_, 2, v_snd_3376_);
lean_closure_set(v___f_3390_, 3, v_logMessage_3365_);
lean_closure_set(v___f_3390_, 4, v_toBind_3366_);
lean_closure_set(v___f_3390_, 5, v___f_3367_);
lean_closure_set(v___f_3390_, 6, v_toMonadFileMap_3368_);
v___x_3391_ = lean_apply_4(v_toBind_3366_, lean_box(0), lean_box(0), v_getFileName_3369_, v___f_3390_);
return v___x_3391_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3___boxed(lean_object* v___x_3394_, lean_object* v___x_3395_, lean_object* v_logMessage_3396_, lean_object* v_toBind_3397_, lean_object* v___f_3398_, lean_object* v_toMonadFileMap_3399_, lean_object* v_getFileName_3400_, lean_object* v_a_3401_, lean_object* v_x_3402_, lean_object* v___y_3403_){
_start:
{
uint8_t v___x_904__boxed_3404_; lean_object* v_res_3405_; 
v___x_904__boxed_3404_ = lean_unbox(v___x_3395_);
v_res_3405_ = l_Lean_addTraceAsMessages___redArg___lam__3(v___x_3394_, v___x_904__boxed_3404_, v_logMessage_3396_, v_toBind_3397_, v___f_3398_, v_toMonadFileMap_3399_, v_getFileName_3400_, v_a_3401_, v_x_3402_, v___y_3403_);
return v_res_3405_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__5(lean_object* v___x_3406_, lean_object* v___f_3407_, lean_object* v_acc_3408_, lean_object* v_l_3409_){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_3406_, v___f_3407_, v_acc_3408_, v_l_3409_);
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6(lean_object* v_toPure_3411_, uint8_t v___x_3412_, lean_object* v_logMessage_3413_, lean_object* v_toBind_3414_, lean_object* v_toMonadFileMap_3415_, lean_object* v_getFileName_3416_, lean_object* v_inst_3417_, lean_object* v___f_3418_, lean_object* v___f_3419_, lean_object* v___f_3420_, lean_object* v_____s_3421_){
_start:
{
lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3434_; lean_object* v___y_3435_; lean_object* v___y_3436_; lean_object* v___y_3437_; lean_object* v___y_3438_; lean_object* v___y_3441_; lean_object* v___y_3442_; lean_object* v___y_3443_; lean_object* v___y_3444_; lean_object* v___y_3445_; lean_object* v___y_3448_; lean_object* v_size_3455_; lean_object* v_buckets_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; uint8_t v___x_3461_; 
v_size_3455_ = lean_ctor_get(v_____s_3421_, 0);
lean_inc(v_size_3455_);
v_buckets_3456_ = lean_ctor_get(v_____s_3421_, 1);
lean_inc_ref(v_buckets_3456_);
lean_dec_ref(v_____s_3421_);
v___x_3457_ = lean_mk_empty_array_with_capacity(v_size_3455_);
lean_dec(v_size_3455_);
v___x_3458_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9));
v___x_3459_ = lean_unsigned_to_nat(0u);
v___x_3460_ = lean_array_get_size(v_buckets_3456_);
v___x_3461_ = lean_nat_dec_lt(v___x_3459_, v___x_3460_);
if (v___x_3461_ == 0)
{
lean_dec_ref(v_buckets_3456_);
lean_dec_ref(v___f_3420_);
v___y_3448_ = v___x_3457_;
goto v___jp_3447_;
}
else
{
lean_object* v___f_3462_; size_t v___x_3463_; size_t v___x_3464_; lean_object* v___x_3465_; 
v___f_3462_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__5), 4, 2);
lean_closure_set(v___f_3462_, 0, v___x_3458_);
lean_closure_set(v___f_3462_, 1, v___f_3420_);
v___x_3463_ = ((size_t)0ULL);
v___x_3464_ = lean_usize_of_nat(v___x_3460_);
v___x_3465_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3458_, v___f_3462_, v_buckets_3456_, v___x_3463_, v___x_3464_, v___x_3457_);
v___y_3448_ = v___x_3465_;
goto v___jp_3447_;
}
v___jp_3422_:
{
lean_object* v___x_3425_; lean_object* v___f_3426_; lean_object* v___x_3427_; lean_object* v___f_3428_; size_t v_sz_3429_; size_t v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v___x_3425_ = lean_box(0);
v___f_3426_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3426_, 0, v___x_3425_);
lean_closure_set(v___f_3426_, 1, v_toPure_3411_);
v___x_3427_ = lean_box(v___x_3412_);
lean_inc(v_toBind_3414_);
v___f_3428_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__3___boxed), 10, 7);
lean_closure_set(v___f_3428_, 0, v___y_3423_);
lean_closure_set(v___f_3428_, 1, v___x_3427_);
lean_closure_set(v___f_3428_, 2, v_logMessage_3413_);
lean_closure_set(v___f_3428_, 3, v_toBind_3414_);
lean_closure_set(v___f_3428_, 4, v___f_3426_);
lean_closure_set(v___f_3428_, 5, v_toMonadFileMap_3415_);
lean_closure_set(v___f_3428_, 6, v_getFileName_3416_);
v_sz_3429_ = lean_array_size(v___y_3424_);
v___x_3430_ = ((size_t)0ULL);
v___x_3431_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3417_, v___y_3424_, v___f_3428_, v_sz_3429_, v___x_3430_, v___x_3425_);
v___x_3432_ = lean_apply_4(v_toBind_3414_, lean_box(0), lean_box(0), v___x_3431_, v___f_3418_);
return v___x_3432_;
}
v___jp_3433_:
{
lean_object* v___x_3439_; 
v___x_3439_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3419_, v___y_3436_, v___y_3437_, v___y_3435_, v___y_3438_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3438_);
lean_dec(v___y_3436_);
v___y_3423_ = v___y_3434_;
v___y_3424_ = v___x_3439_;
goto v___jp_3422_;
}
v___jp_3440_:
{
uint8_t v___x_3446_; 
v___x_3446_ = lean_nat_dec_le(v___y_3445_, v___y_3442_);
if (v___x_3446_ == 0)
{
lean_dec(v___y_3442_);
lean_inc(v___y_3445_);
v___y_3434_ = v___y_3441_;
v___y_3435_ = v___y_3445_;
v___y_3436_ = v___y_3443_;
v___y_3437_ = v___y_3444_;
v___y_3438_ = v___y_3445_;
goto v___jp_3433_;
}
else
{
v___y_3434_ = v___y_3441_;
v___y_3435_ = v___y_3445_;
v___y_3436_ = v___y_3443_;
v___y_3437_ = v___y_3444_;
v___y_3438_ = v___y_3442_;
goto v___jp_3433_;
}
}
v___jp_3447_:
{
lean_object* v___x_3449_; lean_object* v___x_3450_; uint8_t v___x_3451_; 
v___x_3449_ = lean_unsigned_to_nat(0u);
v___x_3450_ = lean_array_get_size(v___y_3448_);
v___x_3451_ = lean_nat_dec_eq(v___x_3450_, v___x_3449_);
if (v___x_3451_ == 0)
{
lean_object* v___x_3452_; lean_object* v___x_3453_; uint8_t v___x_3454_; 
v___x_3452_ = lean_unsigned_to_nat(1u);
v___x_3453_ = lean_nat_sub(v___x_3450_, v___x_3452_);
v___x_3454_ = lean_nat_dec_le(v___x_3449_, v___x_3453_);
if (v___x_3454_ == 0)
{
lean_inc(v___x_3453_);
v___y_3441_ = v___x_3449_;
v___y_3442_ = v___x_3453_;
v___y_3443_ = v___x_3450_;
v___y_3444_ = v___y_3448_;
v___y_3445_ = v___x_3453_;
goto v___jp_3440_;
}
else
{
v___y_3441_ = v___x_3449_;
v___y_3442_ = v___x_3453_;
v___y_3443_ = v___x_3450_;
v___y_3444_ = v___y_3448_;
v___y_3445_ = v___x_3449_;
goto v___jp_3440_;
}
}
else
{
lean_dec_ref(v___f_3419_);
v___y_3423_ = v___x_3449_;
v___y_3424_ = v___y_3448_;
goto v___jp_3422_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6___boxed(lean_object* v_toPure_3466_, lean_object* v___x_3467_, lean_object* v_logMessage_3468_, lean_object* v_toBind_3469_, lean_object* v_toMonadFileMap_3470_, lean_object* v_getFileName_3471_, lean_object* v_inst_3472_, lean_object* v___f_3473_, lean_object* v___f_3474_, lean_object* v___f_3475_, lean_object* v_____s_3476_){
_start:
{
uint8_t v___x_989__boxed_3477_; lean_object* v_res_3478_; 
v___x_989__boxed_3477_ = lean_unbox(v___x_3467_);
v_res_3478_ = l_Lean_addTraceAsMessages___redArg___lam__6(v_toPure_3466_, v___x_989__boxed_3477_, v_logMessage_3468_, v_toBind_3469_, v_toMonadFileMap_3470_, v_getFileName_3471_, v_inst_3472_, v___f_3473_, v___f_3474_, v___f_3475_, v_____s_3476_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7(lean_object* v_traceElem_3479_, lean_object* v___f_3480_, lean_object* v___f_3481_, lean_object* v_____s_3482_, lean_object* v_toPure_3483_, uint8_t v___x_3484_, lean_object* v_____do__lift_3485_){
_start:
{
lean_object* v_ref_3486_; lean_object* v_msg_3487_; lean_object* v___x_3489_; uint8_t v_isShared_3490_; uint8_t v_isSharedCheck_3511_; 
v_ref_3486_ = lean_ctor_get(v_traceElem_3479_, 0);
v_msg_3487_ = lean_ctor_get(v_traceElem_3479_, 1);
v_isSharedCheck_3511_ = !lean_is_exclusive(v_traceElem_3479_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3489_ = v_traceElem_3479_;
v_isShared_3490_ = v_isSharedCheck_3511_;
goto v_resetjp_3488_;
}
else
{
lean_inc(v_msg_3487_);
lean_inc(v_ref_3486_);
lean_dec(v_traceElem_3479_);
v___x_3489_ = lean_box(0);
v_isShared_3490_ = v_isSharedCheck_3511_;
goto v_resetjp_3488_;
}
v_resetjp_3488_:
{
lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v_ref_3503_; lean_object* v___y_3505_; lean_object* v___x_3508_; 
v_ref_3503_ = l_Lean_replaceRef(v_ref_3486_, v_____do__lift_3485_);
lean_dec(v_ref_3486_);
v___x_3508_ = l_Lean_Syntax_getPos_x3f(v_ref_3503_, v___x_3484_);
if (lean_obj_tag(v___x_3508_) == 0)
{
lean_object* v___x_3509_; 
v___x_3509_ = lean_unsigned_to_nat(0u);
v___y_3505_ = v___x_3509_;
goto v___jp_3504_;
}
else
{
lean_object* v_val_3510_; 
v_val_3510_ = lean_ctor_get(v___x_3508_, 0);
lean_inc(v_val_3510_);
lean_dec_ref_known(v___x_3508_, 1);
v___y_3505_ = v_val_3510_;
goto v___jp_3504_;
}
v___jp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3490_ == 0)
{
lean_ctor_set(v___x_3489_, 1, v___y_3493_);
lean_ctor_set(v___x_3489_, 0, v___y_3492_);
v___x_3495_ = v___x_3489_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v___y_3492_);
lean_ctor_set(v_reuseFailAlloc_3502_, 1, v___y_3493_);
v___x_3495_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v_pos2traces_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3496_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__2));
lean_inc_ref(v___x_3495_);
lean_inc_ref(v___f_3481_);
lean_inc_ref(v___f_3480_);
v___x_3497_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(v___f_3480_, v___f_3481_, v_____s_3482_, v___x_3495_, v___x_3496_);
v___x_3498_ = lean_array_push(v___x_3497_, v_msg_3487_);
v_pos2traces_3499_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3480_, v___f_3481_, v_____s_3482_, v___x_3495_, v___x_3498_);
v___x_3500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3500_, 0, v_pos2traces_3499_);
v___x_3501_ = lean_apply_2(v_toPure_3483_, lean_box(0), v___x_3500_);
return v___x_3501_;
}
}
v___jp_3504_:
{
lean_object* v___x_3506_; 
v___x_3506_ = l_Lean_Syntax_getTailPos_x3f(v_ref_3503_, v___x_3484_);
lean_dec(v_ref_3503_);
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_inc(v___y_3505_);
v___y_3492_ = v___y_3505_;
v___y_3493_ = v___y_3505_;
goto v___jp_3491_;
}
else
{
lean_object* v_val_3507_; 
v_val_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_val_3507_);
lean_dec_ref_known(v___x_3506_, 1);
v___y_3492_ = v___y_3505_;
v___y_3493_ = v_val_3507_;
goto v___jp_3491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7___boxed(lean_object* v_traceElem_3512_, lean_object* v___f_3513_, lean_object* v___f_3514_, lean_object* v_____s_3515_, lean_object* v_toPure_3516_, lean_object* v___x_3517_, lean_object* v_____do__lift_3518_){
_start:
{
uint8_t v___x_1103__boxed_3519_; lean_object* v_res_3520_; 
v___x_1103__boxed_3519_ = lean_unbox(v___x_3517_);
v_res_3520_ = l_Lean_addTraceAsMessages___redArg___lam__7(v_traceElem_3512_, v___f_3513_, v___f_3514_, v_____s_3515_, v_toPure_3516_, v___x_1103__boxed_3519_, v_____do__lift_3518_);
lean_dec(v_____do__lift_3518_);
return v_res_3520_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8(lean_object* v_inst_3521_, lean_object* v___f_3522_, lean_object* v___f_3523_, lean_object* v_toPure_3524_, uint8_t v___x_3525_, lean_object* v_toBind_3526_, lean_object* v_traceElem_3527_, lean_object* v_____s_3528_){
_start:
{
lean_object* v_getRef_3529_; lean_object* v___x_3530_; lean_object* v___f_3531_; lean_object* v___x_3532_; 
v_getRef_3529_ = lean_ctor_get(v_inst_3521_, 0);
lean_inc(v_getRef_3529_);
lean_dec_ref(v_inst_3521_);
v___x_3530_ = lean_box(v___x_3525_);
v___f_3531_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__7___boxed), 7, 6);
lean_closure_set(v___f_3531_, 0, v_traceElem_3527_);
lean_closure_set(v___f_3531_, 1, v___f_3522_);
lean_closure_set(v___f_3531_, 2, v___f_3523_);
lean_closure_set(v___f_3531_, 3, v_____s_3528_);
lean_closure_set(v___f_3531_, 4, v_toPure_3524_);
lean_closure_set(v___f_3531_, 5, v___x_3530_);
v___x_3532_ = lean_apply_4(v_toBind_3526_, lean_box(0), lean_box(0), v_getRef_3529_, v___f_3531_);
return v___x_3532_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8___boxed(lean_object* v_inst_3533_, lean_object* v___f_3534_, lean_object* v___f_3535_, lean_object* v_toPure_3536_, lean_object* v___x_3537_, lean_object* v_toBind_3538_, lean_object* v_traceElem_3539_, lean_object* v_____s_3540_){
_start:
{
uint8_t v___x_1163__boxed_3541_; lean_object* v_res_3542_; 
v___x_1163__boxed_3541_ = lean_unbox(v___x_3537_);
v_res_3542_ = l_Lean_addTraceAsMessages___redArg___lam__8(v_inst_3533_, v___f_3534_, v___f_3535_, v_toPure_3536_, v___x_1163__boxed_3541_, v_toBind_3538_, v_traceElem_3539_, v_____s_3540_);
return v_res_3542_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__0(void){
_start:
{
lean_object* v___x_3543_; lean_object* v___f_3544_; 
v___x_3543_ = lean_alloc_closure((void*)(l_instDecidableEqRaw___boxed), 2, 0);
v___f_3544_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3544_, 0, v___x_3543_);
return v___f_3544_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__1(void){
_start:
{
lean_object* v___f_3545_; lean_object* v___f_3546_; 
v___f_3545_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__0, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__0_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__0);
v___f_3546_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3546_, 0, v___f_3545_);
lean_closure_set(v___f_3546_, 1, v___f_3545_);
return v___f_3546_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__2(void){
_start:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3547_ = lean_box(0);
v___x_3548_ = lean_unsigned_to_nat(16u);
v___x_3549_ = lean_mk_array(v___x_3548_, v___x_3547_);
return v___x_3549_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__3(void){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v_pos2traces_3552_; 
v___x_3550_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__2, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__2_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__2);
v___x_3551_ = lean_unsigned_to_nat(0u);
v_pos2traces_3552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_pos2traces_3552_, 0, v___x_3551_);
lean_ctor_set(v_pos2traces_3552_, 1, v___x_3550_);
return v_pos2traces_3552_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9(lean_object* v_inst_3553_, lean_object* v___f_3554_, lean_object* v_toPure_3555_, lean_object* v_toBind_3556_, lean_object* v_inst_3557_, lean_object* v___f_3558_, lean_object* v_traces_3559_){
_start:
{
uint8_t v___x_3560_; 
v___x_3560_ = l_Lean_PersistentArray_isEmpty___redArg(v_traces_3559_);
if (v___x_3560_ == 0)
{
lean_object* v___f_3561_; lean_object* v___x_3562_; lean_object* v___f_3563_; lean_object* v_pos2traces_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
v___f_3561_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__1, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__1_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__1);
v___x_3562_ = lean_box(v___x_3560_);
lean_inc(v_toBind_3556_);
v___f_3563_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__8___boxed), 8, 6);
lean_closure_set(v___f_3563_, 0, v_inst_3553_);
lean_closure_set(v___f_3563_, 1, v___f_3561_);
lean_closure_set(v___f_3563_, 2, v___f_3554_);
lean_closure_set(v___f_3563_, 3, v_toPure_3555_);
lean_closure_set(v___f_3563_, 4, v___x_3562_);
lean_closure_set(v___f_3563_, 5, v_toBind_3556_);
v_pos2traces_3564_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__3, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__3_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__3);
v___x_3565_ = l_Lean_PersistentArray_forIn___redArg(v_inst_3557_, v_traces_3559_, v_pos2traces_3564_, v___f_3563_);
v___x_3566_ = lean_apply_4(v_toBind_3556_, lean_box(0), lean_box(0), v___x_3565_, v___f_3558_);
return v___x_3566_;
}
else
{
lean_object* v___x_3567_; lean_object* v___x_3568_; 
lean_dec(v___f_3558_);
lean_dec_ref(v_inst_3557_);
lean_dec(v_toBind_3556_);
lean_dec_ref(v___f_3554_);
lean_dec_ref(v_inst_3553_);
v___x_3567_ = lean_box(0);
v___x_3568_ = lean_apply_2(v_toPure_3555_, lean_box(0), v___x_3567_);
return v___x_3568_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___boxed(lean_object* v_inst_3569_, lean_object* v___f_3570_, lean_object* v_toPure_3571_, lean_object* v_toBind_3572_, lean_object* v_inst_3573_, lean_object* v___f_3574_, lean_object* v_traces_3575_){
_start:
{
lean_object* v_res_3576_; 
v_res_3576_ = l_Lean_addTraceAsMessages___redArg___lam__9(v_inst_3569_, v___f_3570_, v_toPure_3571_, v_toBind_3572_, v_inst_3573_, v___f_3574_, v_traces_3575_);
lean_dec_ref(v_traces_3575_);
return v_res_3576_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10(lean_object* v_toPure_3577_, lean_object* v_logMessage_3578_, lean_object* v_toBind_3579_, lean_object* v_toMonadFileMap_3580_, lean_object* v_getFileName_3581_, lean_object* v_inst_3582_, lean_object* v___f_3583_, lean_object* v___f_3584_, lean_object* v___f_3585_, lean_object* v_inst_3586_, lean_object* v___f_3587_, lean_object* v_inst_3588_, lean_object* v_____do__lift_3589_){
_start:
{
lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3593_ = l_Lean_KVMap_instValueBool;
v___x_3594_ = l_Lean_KVMap_instValueString;
v___x_3595_ = l_Lean_trace_profiler_output;
v___x_3596_ = l_Lean_Option_get_x3f___redArg(v___x_3594_, v_____do__lift_3589_, v___x_3595_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v___x_3597_; lean_object* v___x_3598_; uint8_t v___x_3599_; 
v___x_3597_ = l_Lean_trace_profiler_serve;
v___x_3598_ = l_Lean_Option_get___redArg(v___x_3593_, v_____do__lift_3589_, v___x_3597_);
v___x_3599_ = lean_unbox(v___x_3598_);
lean_dec(v___x_3598_);
if (v___x_3599_ == 0)
{
uint8_t v___x_3600_; lean_object* v___x_3601_; lean_object* v___f_3602_; lean_object* v___f_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; 
v___x_3600_ = 1;
v___x_3601_ = lean_box(v___x_3600_);
lean_inc_ref_n(v_inst_3582_, 2);
lean_inc_n(v_toBind_3579_, 2);
lean_inc(v_toPure_3577_);
v___f_3602_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__6___boxed), 11, 10);
lean_closure_set(v___f_3602_, 0, v_toPure_3577_);
lean_closure_set(v___f_3602_, 1, v___x_3601_);
lean_closure_set(v___f_3602_, 2, v_logMessage_3578_);
lean_closure_set(v___f_3602_, 3, v_toBind_3579_);
lean_closure_set(v___f_3602_, 4, v_toMonadFileMap_3580_);
lean_closure_set(v___f_3602_, 5, v_getFileName_3581_);
lean_closure_set(v___f_3602_, 6, v_inst_3582_);
lean_closure_set(v___f_3602_, 7, v___f_3583_);
lean_closure_set(v___f_3602_, 8, v___f_3584_);
lean_closure_set(v___f_3602_, 9, v___f_3585_);
v___f_3603_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__9___boxed), 7, 6);
lean_closure_set(v___f_3603_, 0, v_inst_3586_);
lean_closure_set(v___f_3603_, 1, v___f_3587_);
lean_closure_set(v___f_3603_, 2, v_toPure_3577_);
lean_closure_set(v___f_3603_, 3, v_toBind_3579_);
lean_closure_set(v___f_3603_, 4, v_inst_3582_);
lean_closure_set(v___f_3603_, 5, v___f_3602_);
v___x_3604_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_3582_, v_inst_3588_);
v___x_3605_ = lean_apply_4(v_toBind_3579_, lean_box(0), lean_box(0), v___x_3604_, v___f_3603_);
return v___x_3605_;
}
else
{
lean_dec_ref(v_inst_3588_);
lean_dec_ref(v___f_3587_);
lean_dec_ref(v_inst_3586_);
lean_dec_ref(v___f_3585_);
lean_dec_ref(v___f_3584_);
lean_dec(v___f_3583_);
lean_dec_ref(v_inst_3582_);
lean_dec(v_getFileName_3581_);
lean_dec(v_toMonadFileMap_3580_);
lean_dec(v_toBind_3579_);
lean_dec(v_logMessage_3578_);
goto v___jp_3590_;
}
}
else
{
lean_dec_ref_known(v___x_3596_, 1);
lean_dec_ref(v_inst_3588_);
lean_dec_ref(v___f_3587_);
lean_dec_ref(v_inst_3586_);
lean_dec_ref(v___f_3585_);
lean_dec_ref(v___f_3584_);
lean_dec(v___f_3583_);
lean_dec_ref(v_inst_3582_);
lean_dec(v_getFileName_3581_);
lean_dec(v_toMonadFileMap_3580_);
lean_dec(v_toBind_3579_);
lean_dec(v_logMessage_3578_);
goto v___jp_3590_;
}
v___jp_3590_:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = lean_box(0);
v___x_3592_ = lean_apply_2(v_toPure_3577_, lean_box(0), v___x_3591_);
return v___x_3592_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10___boxed(lean_object* v_toPure_3606_, lean_object* v_logMessage_3607_, lean_object* v_toBind_3608_, lean_object* v_toMonadFileMap_3609_, lean_object* v_getFileName_3610_, lean_object* v_inst_3611_, lean_object* v___f_3612_, lean_object* v___f_3613_, lean_object* v___f_3614_, lean_object* v_inst_3615_, lean_object* v___f_3616_, lean_object* v_inst_3617_, lean_object* v_____do__lift_3618_){
_start:
{
lean_object* v_res_3619_; 
v_res_3619_ = l_Lean_addTraceAsMessages___redArg___lam__10(v_toPure_3606_, v_logMessage_3607_, v_toBind_3608_, v_toMonadFileMap_3609_, v_getFileName_3610_, v_inst_3611_, v___f_3612_, v___f_3613_, v___f_3614_, v_inst_3615_, v___f_3616_, v_inst_3617_, v_____do__lift_3618_);
lean_dec_ref(v_____do__lift_3618_);
return v_res_3619_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg(lean_object* v_inst_3625_, lean_object* v_inst_3626_, lean_object* v_inst_3627_, lean_object* v_inst_3628_, lean_object* v_inst_3629_){
_start:
{
lean_object* v___f_3630_; lean_object* v_toApplicative_3631_; lean_object* v_toBind_3632_; lean_object* v_toPure_3633_; lean_object* v_toMonadFileMap_3634_; lean_object* v_getFileName_3635_; lean_object* v_logMessage_3636_; lean_object* v___f_3637_; lean_object* v___f_3638_; lean_object* v___f_3639_; lean_object* v___f_3640_; lean_object* v___x_3641_; 
v___f_3630_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__1));
v_toApplicative_3631_ = lean_ctor_get(v_inst_3626_, 0);
v_toBind_3632_ = lean_ctor_get(v_inst_3626_, 1);
lean_inc_n(v_toBind_3632_, 2);
v_toPure_3633_ = lean_ctor_get(v_toApplicative_3631_, 1);
lean_inc_n(v_toPure_3633_, 2);
v_toMonadFileMap_3634_ = lean_ctor_get(v_inst_3628_, 0);
lean_inc(v_toMonadFileMap_3634_);
v_getFileName_3635_ = lean_ctor_get(v_inst_3628_, 2);
lean_inc(v_getFileName_3635_);
v_logMessage_3636_ = lean_ctor_get(v_inst_3628_, 4);
lean_inc(v_logMessage_3636_);
lean_dec_ref(v_inst_3628_);
v___f_3637_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__2));
v___f_3638_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__3));
v___f_3639_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3639_, 0, v_toPure_3633_);
v___f_3640_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__10___boxed), 13, 12);
lean_closure_set(v___f_3640_, 0, v_toPure_3633_);
lean_closure_set(v___f_3640_, 1, v_logMessage_3636_);
lean_closure_set(v___f_3640_, 2, v_toBind_3632_);
lean_closure_set(v___f_3640_, 3, v_toMonadFileMap_3634_);
lean_closure_set(v___f_3640_, 4, v_getFileName_3635_);
lean_closure_set(v___f_3640_, 5, v_inst_3626_);
lean_closure_set(v___f_3640_, 6, v___f_3639_);
lean_closure_set(v___f_3640_, 7, v___f_3637_);
lean_closure_set(v___f_3640_, 8, v___f_3638_);
lean_closure_set(v___f_3640_, 9, v_inst_3627_);
lean_closure_set(v___f_3640_, 10, v___f_3630_);
lean_closure_set(v___f_3640_, 11, v_inst_3629_);
v___x_3641_ = lean_apply_4(v_toBind_3632_, lean_box(0), lean_box(0), v_inst_3625_, v___f_3640_);
return v___x_3641_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages(lean_object* v_m_3642_, lean_object* v_inst_3643_, lean_object* v_inst_3644_, lean_object* v_inst_3645_, lean_object* v_inst_3646_, lean_object* v_inst_3647_){
_start:
{
lean_object* v___x_3648_; 
v___x_3648_ = l_Lean_addTraceAsMessages___redArg(v_inst_3643_, v_inst_3644_, v_inst_3645_, v_inst_3646_, v_inst_3647_);
return v___x_3648_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
v___x_3690_ = lean_unsigned_to_nat(2826257906u);
v___x_3691_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3692_ = l_Lean_Name_num___override(v___x_3691_, v___x_3690_);
return v___x_3692_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3694_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__19_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3695_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3696_ = l_Lean_Name_str___override(v___x_3695_, v___x_3694_);
return v___x_3696_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; 
v___x_3698_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__21_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3699_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3700_ = l_Lean_Name_str___override(v___x_3699_, v___x_3698_);
return v___x_3700_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; 
v___x_3701_ = lean_unsigned_to_nat(2u);
v___x_3702_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3703_ = l_Lean_Name_num___override(v___x_3702_, v___x_3701_);
return v___x_3703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3705_; uint8_t v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3705_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3706_ = 0;
v___x_3707_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3708_ = l_Lean_registerTraceClass(v___x_3705_, v___x_3706_, v___x_3707_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2____boxed(lean_object* v___y_3709_){
_start:
{
lean_object* v_res_3710_; 
v_res_3710_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_();
return v_res_3710_;
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
