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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_instMonadExceptOfMonadExceptOf___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_MonadExcept_ofExcept___redArg(lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Exception_toMessageData(lean_object*);
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
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedMessageData_default;
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_MonadCacheT_instMonadExceptOf___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Elab_mkMessageCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_StateT_instMonadExceptOf___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(25) << 1) | 1))}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "inheritedTraceOptions"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16_value;
static const lean_string_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__16_value),LEAN_SCALAR_PTR_LITERAL(111, 221, 127, 62, 213, 113, 62, 253)}};
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__17_value),LEAN_SCALAR_PTR_LITERAL(249, 53, 178, 254, 160, 90, 192, 243)}};
static const lean_object* l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18 = (const lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18_value;
static const lean_ctor_object l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 3}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__15_value),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
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
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__10_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.isTracingEnabledFor"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "isTracingEnabledFor"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.addTrace"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "addTrace"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value),LEAN_SCALAR_PTR_LITERAL(182, 237, 62, 79, 212, 57, 236, 253)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Pure"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__25_value),LEAN_SCALAR_PTR_LITERAL(121, 135, 27, 238, 232, 181, 75, 85)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22_value),LEAN_SCALAR_PTR_LITERAL(204, 106, 105, 165, 210, 13, 14, 1)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__26_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tuple"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doNested"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__29_value),LEAN_SCALAR_PTR_LITERAL(220, 154, 41, 109, 103, 76, 110, 63)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "do"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__32_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__34_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doLet"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__36_value),LEAN_SCALAR_PTR_LITERAL(60, 171, 222, 145, 87, 124, 9, 205)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "let"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letConfig"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__40_value),LEAN_SCALAR_PTR_LITERAL(5, 186, 227, 151, 19, 40, 136, 241)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letDecl"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__42_value),LEAN_SCALAR_PTR_LITERAL(61, 47, 121, 206, 37, 68, 134, 111)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letIdDecl"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__44_value),LEAN_SCALAR_PTR_LITERAL(82, 96, 243, 36, 251, 209, 136, 237)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "letId"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__46_value),LEAN_SCALAR_PTR_LITERAL(67, 92, 92, 51, 38, 250, 60, 190)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cls"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48_value),LEAN_SCALAR_PTR_LITERAL(28, 113, 141, 155, 240, 79, 69, 244)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__52_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolatedStrKind"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__56_value),LEAN_SCALAR_PTR_LITERAL(239, 118, 32, 248, 73, 51, 110, 198)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__58_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value_aux_0),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value_aux_1),((lean_object*)&l_Lean_registerTraceClass___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value_aux_2),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__61_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__62_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MessageData"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65_value),LEAN_SCALAR_PTR_LITERAL(117, 193, 162, 252, 67, 31, 191, 159)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__68_value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65_value),LEAN_SCALAR_PTR_LITERAL(204, 233, 154, 112, 39, 152, 210, 6)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__68 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__68_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__68_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__69 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__69_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__68_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__70 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__70_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__70_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__71 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__71_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__69_value),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__71_value)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__72 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__72_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termM!_"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__73 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__73_value;
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__74_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__74_value_aux_0),((lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__73_value),LEAN_SCALAR_PTR_LITERAL(241, 254, 249, 246, 41, 222, 210, 184)}};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__74 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__74_value;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "m!"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__75 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__75_value;
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
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3842689300____hygCtx___hyg_2____boxed(lean_object* v_a_30_){
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
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__19));
v___x_79_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13);
v___x_80_ = lean_array_push(v___x_79_, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_81_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__20);
v___x_82_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11));
v___x_83_ = lean_box(2);
v___x_84_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v___x_82_);
lean_ctor_set(v___x_84_, 2, v___x_81_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__21);
v___x_86_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_87_ = lean_array_push(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_88_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__22);
v___x_89_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_90_ = lean_box(2);
v___x_91_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v___x_89_);
lean_ctor_set(v___x_91_, 2, v___x_88_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_92_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__23);
v___x_93_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_94_ = lean_array_push(v___x_93_, v___x_92_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_95_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__24);
v___x_96_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7));
v___x_97_ = lean_box(2);
v___x_98_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_96_);
lean_ctor_set(v___x_98_, 2, v___x_95_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__25);
v___x_100_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_101_ = lean_array_push(v___x_100_, v___x_99_);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_102_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__26);
v___x_103_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4));
v___x_104_ = lean_box(2);
v___x_105_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set(v___x_105_, 1, v___x_103_);
lean_ctor_set(v___x_105_, 2, v___x_102_);
return v___x_105_;
}
}
static lean_object* _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam(void){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__27);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift___redArg___lam__0(lean_object* v_modifyTraceState_107_, lean_object* v_inst_108_, lean_object* v_f_109_){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_110_ = lean_apply_1(v_modifyTraceState_107_, v_f_109_);
v___x_111_ = lean_apply_2(v_inst_108_, lean_box(0), v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object* v_inst_112_, lean_object* v_inst_113_){
_start:
{
lean_object* v_modifyTraceState_114_; lean_object* v_getTraceState_115_; lean_object* v_getInheritedTraceOptions_116_; lean_object* v___x_118_; uint8_t v_isShared_119_; uint8_t v_isSharedCheck_126_; 
v_modifyTraceState_114_ = lean_ctor_get(v_inst_113_, 0);
v_getTraceState_115_ = lean_ctor_get(v_inst_113_, 1);
v_getInheritedTraceOptions_116_ = lean_ctor_get(v_inst_113_, 2);
v_isSharedCheck_126_ = !lean_is_exclusive(v_inst_113_);
if (v_isSharedCheck_126_ == 0)
{
v___x_118_ = v_inst_113_;
v_isShared_119_ = v_isSharedCheck_126_;
goto v_resetjp_117_;
}
else
{
lean_inc(v_getInheritedTraceOptions_116_);
lean_inc(v_getTraceState_115_);
lean_inc(v_modifyTraceState_114_);
lean_dec(v_inst_113_);
v___x_118_ = lean_box(0);
v_isShared_119_ = v_isSharedCheck_126_;
goto v_resetjp_117_;
}
v_resetjp_117_:
{
lean_object* v___f_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_124_; 
lean_inc_n(v_inst_112_, 2);
v___f_120_ = lean_alloc_closure((void*)(l_Lean_instMonadTraceOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_120_, 0, v_modifyTraceState_114_);
lean_closure_set(v___f_120_, 1, v_inst_112_);
v___x_121_ = lean_apply_2(v_inst_112_, lean_box(0), v_getTraceState_115_);
v___x_122_ = lean_apply_2(v_inst_112_, lean_box(0), v_getInheritedTraceOptions_116_);
if (v_isShared_119_ == 0)
{
lean_ctor_set(v___x_118_, 2, v___x_122_);
lean_ctor_set(v___x_118_, 1, v___x_121_);
lean_ctor_set(v___x_118_, 0, v___f_120_);
v___x_124_ = v___x_118_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___f_120_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v___x_121_);
lean_ctor_set(v_reuseFailAlloc_125_, 2, v___x_122_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadTraceOfMonadLift(lean_object* v_m_127_, lean_object* v_n_128_, lean_object* v_inst_129_, lean_object* v_inst_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lean_instMonadTraceOfMonadLift___redArg(v_inst_129_, v_inst_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__0(lean_object* v_toPure_132_, lean_object* v_____s_133_){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = lean_box(0);
v___x_135_ = lean_apply_2(v_toPure_132_, lean_box(0), v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__1(lean_object* v___x_136_, lean_object* v_toPure_137_, lean_object* v_r_138_){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_136_);
v___x_140_ = lean_apply_2(v_toPure_137_, lean_box(0), v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__2(lean_object* v___f_141_, lean_object* v_inst_142_, lean_object* v_toBind_143_, lean_object* v___f_144_, lean_object* v_____do__lift_145_){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_146_ = lean_alloc_closure((void*)(l_IO_println___boxed), 4, 3);
lean_closure_set(v___x_146_, 0, lean_box(0));
lean_closure_set(v___x_146_, 1, v___f_141_);
lean_closure_set(v___x_146_, 2, v_____do__lift_145_);
v___x_147_ = lean_apply_2(v_inst_142_, lean_box(0), v___x_146_);
v___x_148_ = lean_apply_4(v_toBind_143_, lean_box(0), lean_box(0), v___x_147_, v___f_144_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__3(lean_object* v_inst_149_, lean_object* v_toBind_150_, lean_object* v___f_151_, lean_object* v_x_152_, lean_object* v_____s_153_){
_start:
{
lean_object* v_msg_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v_msg_154_ = lean_ctor_get(v_x_152_, 1);
lean_inc_ref(v_msg_154_);
lean_dec_ref(v_x_152_);
v___x_155_ = lean_box(0);
v___x_156_ = lean_alloc_closure((void*)(l_Lean_MessageData_format___boxed), 3, 2);
lean_closure_set(v___x_156_, 0, v_msg_154_);
lean_closure_set(v___x_156_, 1, v___x_155_);
v___x_157_ = lean_alloc_closure((void*)(l_BaseIO_toIO___boxed), 3, 2);
lean_closure_set(v___x_157_, 0, lean_box(0));
lean_closure_set(v___x_157_, 1, v___x_156_);
v___x_158_ = lean_apply_2(v_inst_149_, lean_box(0), v___x_157_);
v___x_159_ = lean_apply_4(v_toBind_150_, lean_box(0), lean_box(0), v___x_158_, v___f_151_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__4(lean_object* v_toPure_160_, lean_object* v___f_161_, lean_object* v_inst_162_, lean_object* v_toBind_163_, lean_object* v_inst_164_, lean_object* v___f_165_, lean_object* v_____do__lift_166_){
_start:
{
lean_object* v_traces_167_; lean_object* v___x_168_; lean_object* v___f_169_; lean_object* v___f_170_; lean_object* v___f_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v_traces_167_ = lean_ctor_get(v_____do__lift_166_, 0);
v___x_168_ = lean_box(0);
v___f_169_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__1), 3, 2);
lean_closure_set(v___f_169_, 0, v___x_168_);
lean_closure_set(v___f_169_, 1, v_toPure_160_);
lean_inc_n(v_toBind_163_, 2);
lean_inc(v_inst_162_);
v___f_170_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__2), 5, 4);
lean_closure_set(v___f_170_, 0, v___f_161_);
lean_closure_set(v___f_170_, 1, v_inst_162_);
lean_closure_set(v___f_170_, 2, v_toBind_163_);
lean_closure_set(v___f_170_, 3, v___f_169_);
v___f_171_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__3), 5, 3);
lean_closure_set(v___f_171_, 0, v_inst_162_);
lean_closure_set(v___f_171_, 1, v_toBind_163_);
lean_closure_set(v___f_171_, 2, v___f_170_);
v___x_172_ = l_Lean_PersistentArray_forIn___redArg(v_inst_164_, v_traces_167_, v___x_168_, v___f_171_);
v___x_173_ = lean_apply_4(v_toBind_163_, lean_box(0), lean_box(0), v___x_172_, v___f_165_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg___lam__4___boxed(lean_object* v_toPure_174_, lean_object* v___f_175_, lean_object* v_inst_176_, lean_object* v_toBind_177_, lean_object* v_inst_178_, lean_object* v___f_179_, lean_object* v_____do__lift_180_){
_start:
{
lean_object* v_res_181_; 
v_res_181_ = l_Lean_printTraces___redArg___lam__4(v_toPure_174_, v___f_175_, v_inst_176_, v_toBind_177_, v_inst_178_, v___f_179_, v_____do__lift_180_);
lean_dec_ref(v_____do__lift_180_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces___redArg(lean_object* v_inst_183_, lean_object* v_inst_184_, lean_object* v_inst_185_){
_start:
{
lean_object* v_toApplicative_186_; lean_object* v_toBind_187_; lean_object* v_getTraceState_188_; lean_object* v_toPure_189_; lean_object* v___f_190_; lean_object* v___f_191_; lean_object* v___f_192_; lean_object* v___x_193_; 
v_toApplicative_186_ = lean_ctor_get(v_inst_183_, 0);
v_toBind_187_ = lean_ctor_get(v_inst_183_, 1);
lean_inc_n(v_toBind_187_, 2);
v_getTraceState_188_ = lean_ctor_get(v_inst_184_, 1);
lean_inc(v_getTraceState_188_);
lean_dec_ref(v_inst_184_);
v_toPure_189_ = lean_ctor_get(v_toApplicative_186_, 1);
lean_inc_n(v_toPure_189_, 2);
v___f_190_ = ((lean_object*)(l_Lean_printTraces___redArg___closed__0));
v___f_191_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_191_, 0, v_toPure_189_);
v___f_192_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__4___boxed), 7, 6);
lean_closure_set(v___f_192_, 0, v_toPure_189_);
lean_closure_set(v___f_192_, 1, v___f_190_);
lean_closure_set(v___f_192_, 2, v_inst_185_);
lean_closure_set(v___f_192_, 3, v_toBind_187_);
lean_closure_set(v___f_192_, 4, v_inst_183_);
lean_closure_set(v___f_192_, 5, v___f_191_);
v___x_193_ = lean_apply_4(v_toBind_187_, lean_box(0), lean_box(0), v_getTraceState_188_, v___f_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_printTraces(lean_object* v_m_194_, lean_object* v_inst_195_, lean_object* v_inst_196_, lean_object* v_inst_197_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lean_printTraces___redArg(v_inst_195_, v_inst_196_, v_inst_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg___lam__0(lean_object* v_x_199_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_200_ = lean_unsigned_to_nat(32u);
v___x_201_ = lean_mk_empty_array_with_capacity(v___x_200_);
lean_dec_ref(v___x_201_);
v___x_202_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__2, &l_Lean_instInhabitedTraceState_default___closed__2_once, _init_l_Lean_instInhabitedTraceState_default___closed__2);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg___lam__0___boxed(lean_object* v_x_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_resetTraceState___redArg___lam__0(v_x_203_);
lean_dec_ref(v_x_203_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState___redArg(lean_object* v_inst_206_){
_start:
{
lean_object* v_modifyTraceState_207_; lean_object* v___f_208_; lean_object* v___x_209_; 
v_modifyTraceState_207_ = lean_ctor_get(v_inst_206_, 0);
lean_inc(v_modifyTraceState_207_);
lean_dec_ref(v_inst_206_);
v___f_208_ = ((lean_object*)(l_Lean_resetTraceState___redArg___closed__0));
v___x_209_ = lean_apply_1(v_modifyTraceState_207_, v___f_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_resetTraceState(lean_object* v_m_210_, lean_object* v_inst_211_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lean_resetTraceState___redArg(v_inst_211_);
return v___x_212_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(lean_object* v_a_213_, lean_object* v_x_214_){
_start:
{
if (lean_obj_tag(v_x_214_) == 0)
{
uint8_t v___x_215_; 
v___x_215_ = 0;
return v___x_215_;
}
else
{
lean_object* v_key_216_; lean_object* v_tail_217_; uint8_t v___x_218_; 
v_key_216_ = lean_ctor_get(v_x_214_, 0);
v_tail_217_ = lean_ctor_get(v_x_214_, 2);
v___x_218_ = lean_name_eq(v_key_216_, v_a_213_);
if (v___x_218_ == 0)
{
v_x_214_ = v_tail_217_;
goto _start;
}
else
{
return v___x_218_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_220_, lean_object* v_x_221_){
_start:
{
uint8_t v_res_222_; lean_object* v_r_223_; 
v_res_222_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_220_, v_x_221_);
lean_dec(v_x_221_);
lean_dec(v_a_220_);
v_r_223_ = lean_box(v_res_222_);
return v_r_223_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(lean_object* v_m_224_, lean_object* v_a_225_){
_start:
{
lean_object* v_buckets_226_; lean_object* v___x_227_; uint64_t v___y_229_; 
v_buckets_226_ = lean_ctor_get(v_m_224_, 1);
v___x_227_ = lean_array_get_size(v_buckets_226_);
if (lean_obj_tag(v_a_225_) == 0)
{
uint64_t v___x_243_; 
v___x_243_ = 1723ULL;
v___y_229_ = v___x_243_;
goto v___jp_228_;
}
else
{
uint64_t v_hash_244_; 
v_hash_244_ = lean_ctor_get_uint64(v_a_225_, sizeof(void*)*2);
v___y_229_ = v_hash_244_;
goto v___jp_228_;
}
v___jp_228_:
{
uint64_t v___x_230_; uint64_t v___x_231_; uint64_t v_fold_232_; uint64_t v___x_233_; uint64_t v___x_234_; uint64_t v___x_235_; size_t v___x_236_; size_t v___x_237_; size_t v___x_238_; size_t v___x_239_; size_t v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_230_ = 32ULL;
v___x_231_ = lean_uint64_shift_right(v___y_229_, v___x_230_);
v_fold_232_ = lean_uint64_xor(v___y_229_, v___x_231_);
v___x_233_ = 16ULL;
v___x_234_ = lean_uint64_shift_right(v_fold_232_, v___x_233_);
v___x_235_ = lean_uint64_xor(v_fold_232_, v___x_234_);
v___x_236_ = lean_uint64_to_usize(v___x_235_);
v___x_237_ = lean_usize_of_nat(v___x_227_);
v___x_238_ = ((size_t)1ULL);
v___x_239_ = lean_usize_sub(v___x_237_, v___x_238_);
v___x_240_ = lean_usize_land(v___x_236_, v___x_239_);
v___x_241_ = lean_array_uget_borrowed(v_buckets_226_, v___x_240_);
v___x_242_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_225_, v___x_241_);
return v___x_242_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg___boxed(lean_object* v_m_245_, lean_object* v_a_246_){
_start:
{
uint8_t v_res_247_; lean_object* v_r_248_; 
v_res_247_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(v_m_245_, v_a_246_);
lean_dec(v_a_246_);
lean_dec_ref(v_m_245_);
v_r_248_ = lean_box(v_res_247_);
return v_r_248_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object* v_inherited_249_, lean_object* v_opts_250_, lean_object* v_opt_251_){
_start:
{
lean_object* v_map_257_; lean_object* v___x_258_; 
v_map_257_ = lean_ctor_get(v_opts_250_, 0);
v___x_258_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_257_, v_opt_251_);
if (lean_obj_tag(v___x_258_) == 0)
{
goto v___jp_252_;
}
else
{
lean_object* v_val_259_; 
v_val_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_val_259_);
lean_dec_ref_known(v___x_258_, 1);
if (lean_obj_tag(v_val_259_) == 1)
{
uint8_t v_v_260_; 
v_v_260_ = lean_ctor_get_uint8(v_val_259_, 0);
lean_dec_ref_known(v_val_259_, 0);
return v_v_260_;
}
else
{
lean_dec(v_val_259_);
goto v___jp_252_;
}
}
v___jp_252_:
{
if (lean_obj_tag(v_opt_251_) == 1)
{
lean_object* v_pre_253_; uint8_t v___x_254_; 
v_pre_253_ = lean_ctor_get(v_opt_251_, 0);
v___x_254_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(v_inherited_249_, v_opt_251_);
if (v___x_254_ == 0)
{
return v___x_254_;
}
else
{
v_opt_251_ = v_pre_253_;
goto _start;
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
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go___boxed(lean_object* v_inherited_261_, lean_object* v_opts_262_, lean_object* v_opt_263_){
_start:
{
uint8_t v_res_264_; lean_object* v_r_265_; 
v_res_264_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inherited_261_, v_opts_262_, v_opt_263_);
lean_dec(v_opt_263_);
lean_dec_ref(v_opts_262_);
lean_dec_ref(v_inherited_261_);
v_r_265_ = lean_box(v_res_264_);
return v_r_265_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0(lean_object* v_00_u03b2_266_, lean_object* v_m_267_, lean_object* v_a_268_){
_start:
{
uint8_t v___x_269_; 
v___x_269_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___redArg(v_m_267_, v_a_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0___boxed(lean_object* v_00_u03b2_270_, lean_object* v_m_271_, lean_object* v_a_272_){
_start:
{
uint8_t v_res_273_; lean_object* v_r_274_; 
v_res_273_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0(v_00_u03b2_270_, v_m_271_, v_a_272_);
lean_dec(v_a_272_);
lean_dec_ref(v_m_271_);
v_r_274_ = lean_box(v_res_273_);
return v_r_274_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0(lean_object* v_00_u03b2_275_, lean_object* v_a_276_, lean_object* v_x_277_){
_start:
{
uint8_t v___x_278_; 
v___x_278_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_276_, v_x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_279_, lean_object* v_a_280_, lean_object* v_x_281_){
_start:
{
uint8_t v_res_282_; lean_object* v_r_283_; 
v_res_282_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0(v_00_u03b2_279_, v_a_280_, v_x_281_);
lean_dec(v_x_281_);
lean_dec(v_a_280_);
v_r_283_ = lean_box(v_res_282_);
return v_r_283_;
}
}
LEAN_EXPORT uint8_t l_Lean_checkTraceOption(lean_object* v_inherited_287_, lean_object* v_opts_288_, lean_object* v_cls_289_){
_start:
{
uint8_t v_hasTrace_290_; 
v_hasTrace_290_ = lean_ctor_get_uint8(v_opts_288_, sizeof(void*)*1);
if (v_hasTrace_290_ == 0)
{
lean_dec(v_cls_289_);
return v_hasTrace_290_;
}
else
{
lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_291_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_292_ = l_Lean_Name_append(v___x_291_, v_cls_289_);
v___x_293_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inherited_287_, v_opts_288_, v___x_292_);
lean_dec(v___x_292_);
return v___x_293_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkTraceOption___boxed(lean_object* v_inherited_294_, lean_object* v_opts_295_, lean_object* v_cls_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = l_Lean_checkTraceOption(v_inherited_294_, v_opts_295_, v_cls_296_);
lean_dec_ref(v_opts_295_);
lean_dec_ref(v_inherited_294_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__0(lean_object* v_toPure_299_, lean_object* v_cls_300_, lean_object* v_____do__lift_301_, lean_object* v_____do__lift_302_){
_start:
{
uint8_t v_hasTrace_303_; 
v_hasTrace_303_ = lean_ctor_get_uint8(v_____do__lift_302_, sizeof(void*)*1);
if (v_hasTrace_303_ == 0)
{
lean_object* v___x_304_; lean_object* v___x_305_; 
lean_dec(v_cls_300_);
v___x_304_ = lean_box(v_hasTrace_303_);
v___x_305_ = lean_apply_2(v_toPure_299_, lean_box(0), v___x_304_);
return v___x_305_;
}
else
{
lean_object* v___x_306_; lean_object* v___x_307_; uint8_t v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_306_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_307_ = l_Lean_Name_append(v___x_306_, v_cls_300_);
v___x_308_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_301_, v_____do__lift_302_, v___x_307_);
lean_dec(v___x_307_);
v___x_309_ = lean_box(v___x_308_);
v___x_310_ = lean_apply_2(v_toPure_299_, lean_box(0), v___x_309_);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__0___boxed(lean_object* v_toPure_311_, lean_object* v_cls_312_, lean_object* v_____do__lift_313_, lean_object* v_____do__lift_314_){
_start:
{
lean_object* v_res_315_; 
v_res_315_ = l_Lean_isTracingEnabledFor___redArg___lam__0(v_toPure_311_, v_cls_312_, v_____do__lift_313_, v_____do__lift_314_);
lean_dec_ref(v_____do__lift_314_);
lean_dec_ref(v_____do__lift_313_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg___lam__1(lean_object* v_inst_316_, lean_object* v_toPure_317_, lean_object* v_cls_318_, lean_object* v_toBind_319_, lean_object* v_____do__lift_320_){
_start:
{
lean_object* v_getOptionsUnrestricted_321_; lean_object* v___f_322_; lean_object* v___x_323_; 
v_getOptionsUnrestricted_321_ = lean_ctor_get(v_inst_316_, 1);
lean_inc(v_getOptionsUnrestricted_321_);
lean_dec_ref(v_inst_316_);
v___f_322_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_322_, 0, v_toPure_317_);
lean_closure_set(v___f_322_, 1, v_cls_318_);
lean_closure_set(v___f_322_, 2, v_____do__lift_320_);
v___x_323_ = lean_apply_4(v_toBind_319_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_321_, v___f_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___redArg(lean_object* v_inst_324_, lean_object* v_inst_325_, lean_object* v_inst_326_, lean_object* v_cls_327_){
_start:
{
lean_object* v_toApplicative_328_; lean_object* v_toBind_329_; lean_object* v_getInheritedTraceOptions_330_; lean_object* v_toPure_331_; lean_object* v___f_332_; lean_object* v___x_333_; 
v_toApplicative_328_ = lean_ctor_get(v_inst_324_, 0);
lean_inc_ref(v_toApplicative_328_);
v_toBind_329_ = lean_ctor_get(v_inst_324_, 1);
lean_inc_n(v_toBind_329_, 2);
lean_dec_ref(v_inst_324_);
v_getInheritedTraceOptions_330_ = lean_ctor_get(v_inst_325_, 2);
lean_inc(v_getInheritedTraceOptions_330_);
lean_dec_ref(v_inst_325_);
v_toPure_331_ = lean_ctor_get(v_toApplicative_328_, 1);
lean_inc(v_toPure_331_);
lean_dec_ref(v_toApplicative_328_);
v___f_332_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_332_, 0, v_inst_326_);
lean_closure_set(v___f_332_, 1, v_toPure_331_);
lean_closure_set(v___f_332_, 2, v_cls_327_);
lean_closure_set(v___f_332_, 3, v_toBind_329_);
v___x_333_ = lean_apply_4(v_toBind_329_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_330_, v___f_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor(lean_object* v_m_334_, lean_object* v_inst_335_, lean_object* v_inst_336_, lean_object* v_inst_337_, lean_object* v_cls_338_){
_start:
{
lean_object* v_toApplicative_339_; lean_object* v_toBind_340_; lean_object* v_getInheritedTraceOptions_341_; lean_object* v_toPure_342_; lean_object* v___f_343_; lean_object* v___x_344_; 
v_toApplicative_339_ = lean_ctor_get(v_inst_335_, 0);
lean_inc_ref(v_toApplicative_339_);
v_toBind_340_ = lean_ctor_get(v_inst_335_, 1);
lean_inc_n(v_toBind_340_, 2);
lean_dec_ref(v_inst_335_);
v_getInheritedTraceOptions_341_ = lean_ctor_get(v_inst_336_, 2);
lean_inc(v_getInheritedTraceOptions_341_);
lean_dec_ref(v_inst_336_);
v_toPure_342_ = lean_ctor_get(v_toApplicative_339_, 1);
lean_inc(v_toPure_342_);
lean_dec_ref(v_toApplicative_339_);
v___f_343_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_343_, 0, v_inst_337_);
lean_closure_set(v___f_343_, 1, v_toPure_342_);
lean_closure_set(v___f_343_, 2, v_cls_338_);
lean_closure_set(v___f_343_, 3, v_toBind_340_);
v___x_344_ = lean_apply_4(v_toBind_340_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_341_, v___f_343_);
return v___x_344_;
}
}
LEAN_EXPORT uint8_t lean_is_trace_class_enabled(lean_object* v_opts_345_, lean_object* v_cls_346_){
_start:
{
uint8_t v_hasTrace_348_; 
v_hasTrace_348_ = lean_ctor_get_uint8(v_opts_345_, sizeof(void*)*1);
if (v_hasTrace_348_ == 0)
{
lean_dec(v_cls_346_);
lean_dec_ref(v_opts_345_);
return v_hasTrace_348_;
}
else
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_349_ = l_Lean_inheritedTraceOptions;
v___x_350_ = lean_st_ref_get(v___x_349_);
v___x_351_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_352_ = l_Lean_Name_append(v___x_351_, v_cls_346_);
v___x_353_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_350_, v_opts_345_, v___x_352_);
lean_dec(v___x_352_);
lean_dec_ref(v_opts_345_);
lean_dec(v___x_350_);
return v___x_353_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_isTracingEnabledForExport___boxed(lean_object* v_opts_354_, lean_object* v_cls_355_, lean_object* v_a_356_){
_start:
{
uint8_t v_res_357_; lean_object* v_r_358_; 
v_res_357_ = lean_is_trace_class_enabled(v_opts_354_, v_cls_355_);
v_r_358_ = lean_box(v_res_357_);
return v_r_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_getTraces___redArg___lam__0(lean_object* v_toPure_359_, lean_object* v_s_360_){
_start:
{
lean_object* v_traces_361_; lean_object* v___x_362_; 
v_traces_361_ = lean_ctor_get(v_s_360_, 0);
lean_inc_ref(v_traces_361_);
lean_dec_ref(v_s_360_);
v___x_362_ = lean_apply_2(v_toPure_359_, lean_box(0), v_traces_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_getTraces___redArg(lean_object* v_inst_363_, lean_object* v_inst_364_){
_start:
{
lean_object* v_toApplicative_365_; lean_object* v_toBind_366_; lean_object* v_getTraceState_367_; lean_object* v_toPure_368_; lean_object* v___f_369_; lean_object* v___x_370_; 
v_toApplicative_365_ = lean_ctor_get(v_inst_363_, 0);
lean_inc_ref(v_toApplicative_365_);
v_toBind_366_ = lean_ctor_get(v_inst_363_, 1);
lean_inc(v_toBind_366_);
lean_dec_ref(v_inst_363_);
v_getTraceState_367_ = lean_ctor_get(v_inst_364_, 1);
lean_inc(v_getTraceState_367_);
lean_dec_ref(v_inst_364_);
v_toPure_368_ = lean_ctor_get(v_toApplicative_365_, 1);
lean_inc(v_toPure_368_);
lean_dec_ref(v_toApplicative_365_);
v___f_369_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_369_, 0, v_toPure_368_);
v___x_370_ = lean_apply_4(v_toBind_366_, lean_box(0), lean_box(0), v_getTraceState_367_, v___f_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_getTraces(lean_object* v_m_371_, lean_object* v_inst_372_, lean_object* v_inst_373_){
_start:
{
lean_object* v_toApplicative_374_; lean_object* v_toBind_375_; lean_object* v_getTraceState_376_; lean_object* v_toPure_377_; lean_object* v___f_378_; lean_object* v___x_379_; 
v_toApplicative_374_ = lean_ctor_get(v_inst_372_, 0);
lean_inc_ref(v_toApplicative_374_);
v_toBind_375_ = lean_ctor_get(v_inst_372_, 1);
lean_inc(v_toBind_375_);
lean_dec_ref(v_inst_372_);
v_getTraceState_376_ = lean_ctor_get(v_inst_373_, 1);
lean_inc(v_getTraceState_376_);
lean_dec_ref(v_inst_373_);
v_toPure_377_ = lean_ctor_get(v_toApplicative_374_, 1);
lean_inc(v_toPure_377_);
lean_dec_ref(v_toApplicative_374_);
v___f_378_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_378_, 0, v_toPure_377_);
v___x_379_ = lean_apply_4(v_toBind_375_, lean_box(0), lean_box(0), v_getTraceState_376_, v___f_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_modifyTraces___redArg___lam__0(lean_object* v_f_380_, lean_object* v_s_381_){
_start:
{
uint64_t v_tid_382_; lean_object* v_traces_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_391_; 
v_tid_382_ = lean_ctor_get_uint64(v_s_381_, sizeof(void*)*1);
v_traces_383_ = lean_ctor_get(v_s_381_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v_s_381_);
if (v_isSharedCheck_391_ == 0)
{
v___x_385_ = v_s_381_;
v_isShared_386_ = v_isSharedCheck_391_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_traces_383_);
lean_dec(v_s_381_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_391_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_387_ = lean_apply_1(v_f_380_, v_traces_383_);
if (v_isShared_386_ == 0)
{
lean_ctor_set(v___x_385_, 0, v___x_387_);
v___x_389_ = v___x_385_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_387_);
lean_ctor_set_uint64(v_reuseFailAlloc_390_, sizeof(void*)*1, v_tid_382_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_modifyTraces___redArg(lean_object* v_inst_392_, lean_object* v_f_393_){
_start:
{
lean_object* v_modifyTraceState_394_; lean_object* v___f_395_; lean_object* v___x_396_; 
v_modifyTraceState_394_ = lean_ctor_get(v_inst_392_, 0);
lean_inc(v_modifyTraceState_394_);
lean_dec_ref(v_inst_392_);
v___f_395_ = lean_alloc_closure((void*)(l_Lean_modifyTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_395_, 0, v_f_393_);
v___x_396_ = lean_apply_1(v_modifyTraceState_394_, v___f_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_modifyTraces(lean_object* v_m_397_, lean_object* v_inst_398_, lean_object* v_f_399_){
_start:
{
lean_object* v_modifyTraceState_400_; lean_object* v___f_401_; lean_object* v___x_402_; 
v_modifyTraceState_400_ = lean_ctor_get(v_inst_398_, 0);
lean_inc(v_modifyTraceState_400_);
lean_dec_ref(v_inst_398_);
v___f_401_ = lean_alloc_closure((void*)(l_Lean_modifyTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_401_, 0, v_f_399_);
v___x_402_ = lean_apply_1(v_modifyTraceState_400_, v___f_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg___lam__0(lean_object* v_s_403_, lean_object* v_x_404_){
_start:
{
lean_inc_ref(v_s_403_);
return v_s_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg___lam__0___boxed(lean_object* v_s_405_, lean_object* v_x_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lean_setTraceState___redArg___lam__0(v_s_405_, v_x_406_);
lean_dec_ref(v_x_406_);
lean_dec_ref(v_s_405_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState___redArg(lean_object* v_inst_408_, lean_object* v_s_409_){
_start:
{
lean_object* v_modifyTraceState_410_; lean_object* v___f_411_; lean_object* v___x_412_; 
v_modifyTraceState_410_ = lean_ctor_get(v_inst_408_, 0);
lean_inc(v_modifyTraceState_410_);
lean_dec_ref(v_inst_408_);
v___f_411_ = lean_alloc_closure((void*)(l_Lean_setTraceState___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_411_, 0, v_s_409_);
v___x_412_ = lean_apply_1(v_modifyTraceState_410_, v___f_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_setTraceState(lean_object* v_m_413_, lean_object* v_inst_414_, lean_object* v_s_415_){
_start:
{
lean_object* v_modifyTraceState_416_; lean_object* v___f_417_; lean_object* v___x_418_; 
v_modifyTraceState_416_ = lean_ctor_get(v_inst_414_, 0);
lean_inc(v_modifyTraceState_416_);
lean_dec_ref(v_inst_414_);
v___f_417_ = lean_alloc_closure((void*)(l_Lean_setTraceState___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_417_, 0, v_s_415_);
v___x_418_ = lean_apply_1(v_modifyTraceState_416_, v___f_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__0(lean_object* v_s_419_){
_start:
{
uint64_t v_tid_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_430_; 
v_tid_420_ = lean_ctor_get_uint64(v_s_419_, sizeof(void*)*1);
v_isSharedCheck_430_ = !lean_is_exclusive(v_s_419_);
if (v_isSharedCheck_430_ == 0)
{
lean_object* v_unused_431_; 
v_unused_431_ = lean_ctor_get(v_s_419_, 0);
lean_dec(v_unused_431_);
v___x_422_ = v_s_419_;
v_isShared_423_ = v_isSharedCheck_430_;
goto v_resetjp_421_;
}
else
{
lean_dec(v_s_419_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_430_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_428_; 
v___x_424_ = lean_unsigned_to_nat(32u);
v___x_425_ = lean_mk_empty_array_with_capacity(v___x_424_);
lean_dec_ref(v___x_425_);
v___x_426_ = lean_obj_once(&l_Lean_instInhabitedTraceState_default___closed__1, &l_Lean_instInhabitedTraceState_default___closed__1_once, _init_l_Lean_instInhabitedTraceState_default___closed__1);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_426_);
v___x_428_ = v___x_422_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_426_);
lean_ctor_set_uint64(v_reuseFailAlloc_429_, sizeof(void*)*1, v_tid_420_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__1(lean_object* v_toPure_432_, lean_object* v_oldTraces_433_, lean_object* v_____r_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = lean_apply_2(v_toPure_432_, lean_box(0), v_oldTraces_433_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__2(lean_object* v_toPure_436_, lean_object* v_modifyTraceState_437_, lean_object* v___f_438_, lean_object* v_toBind_439_, lean_object* v_oldTraces_440_){
_start:
{
lean_object* v___f_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___f_441_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__1), 3, 2);
lean_closure_set(v___f_441_, 0, v_toPure_436_);
lean_closure_set(v___f_441_, 1, v_oldTraces_440_);
v___x_442_ = lean_apply_1(v_modifyTraceState_437_, v___f_438_);
v___x_443_ = lean_apply_4(v_toBind_439_, lean_box(0), lean_box(0), v___x_442_, v___f_441_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(lean_object* v_inst_445_, lean_object* v_inst_446_){
_start:
{
lean_object* v_toApplicative_447_; lean_object* v_toBind_448_; lean_object* v_modifyTraceState_449_; lean_object* v_getTraceState_450_; lean_object* v_toPure_451_; lean_object* v___f_452_; lean_object* v___f_453_; lean_object* v___f_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v_toApplicative_447_ = lean_ctor_get(v_inst_445_, 0);
lean_inc_ref(v_toApplicative_447_);
v_toBind_448_ = lean_ctor_get(v_inst_445_, 1);
lean_inc_n(v_toBind_448_, 3);
lean_dec_ref(v_inst_445_);
v_modifyTraceState_449_ = lean_ctor_get(v_inst_446_, 0);
lean_inc(v_modifyTraceState_449_);
v_getTraceState_450_ = lean_ctor_get(v_inst_446_, 1);
lean_inc(v_getTraceState_450_);
lean_dec_ref(v_inst_446_);
v_toPure_451_ = lean_ctor_get(v_toApplicative_447_, 1);
lean_inc_n(v_toPure_451_, 2);
lean_dec_ref(v_toApplicative_447_);
v___f_452_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___closed__0));
v___f_453_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg___lam__2), 5, 4);
lean_closure_set(v___f_453_, 0, v_toPure_451_);
lean_closure_set(v___f_453_, 1, v_modifyTraceState_449_);
lean_closure_set(v___f_453_, 2, v___f_452_);
lean_closure_set(v___f_453_, 3, v_toBind_448_);
v___f_454_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_454_, 0, v_toPure_451_);
v___x_455_ = lean_apply_4(v_toBind_448_, lean_box(0), lean_box(0), v_getTraceState_450_, v___f_454_);
v___x_456_ = lean_apply_4(v_toBind_448_, lean_box(0), lean_box(0), v___x_455_, v___f_453_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces(lean_object* v_m_457_, lean_object* v_inst_458_, lean_object* v_inst_459_){
_start:
{
lean_object* v___x_460_; 
v___x_460_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_458_, v_inst_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__0(lean_object* v_ref_461_, lean_object* v_msg_462_, lean_object* v_s_463_){
_start:
{
uint64_t v_tid_464_; lean_object* v_traces_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_474_; 
v_tid_464_ = lean_ctor_get_uint64(v_s_463_, sizeof(void*)*1);
v_traces_465_ = lean_ctor_get(v_s_463_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v_s_463_);
if (v_isSharedCheck_474_ == 0)
{
v___x_467_ = v_s_463_;
v_isShared_468_ = v_isSharedCheck_474_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_traces_465_);
lean_dec(v_s_463_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_474_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_472_; 
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v_ref_461_);
lean_ctor_set(v___x_469_, 1, v_msg_462_);
v___x_470_ = l_Lean_PersistentArray_push___redArg(v_traces_465_, v___x_469_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 0, v___x_470_);
v___x_472_ = v___x_467_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v___x_470_);
lean_ctor_set_uint64(v_reuseFailAlloc_473_, sizeof(void*)*1, v_tid_464_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__1(lean_object* v_inst_475_, lean_object* v_ref_476_, lean_object* v_msg_477_){
_start:
{
lean_object* v_modifyTraceState_478_; lean_object* v___f_479_; lean_object* v___x_480_; 
v_modifyTraceState_478_ = lean_ctor_get(v_inst_475_, 0);
lean_inc(v_modifyTraceState_478_);
lean_dec_ref(v_inst_475_);
v___f_479_ = lean_alloc_closure((void*)(l_Lean_addRawTrace___redArg___lam__0), 3, 2);
lean_closure_set(v___f_479_, 0, v_ref_476_);
lean_closure_set(v___f_479_, 1, v_msg_477_);
v___x_480_ = lean_apply_1(v_modifyTraceState_478_, v___f_479_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg___lam__2(lean_object* v_inst_481_, lean_object* v_inst_482_, lean_object* v_msg_483_, lean_object* v_toBind_484_, lean_object* v_ref_485_){
_start:
{
lean_object* v___f_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___f_486_ = lean_alloc_closure((void*)(l_Lean_addRawTrace___redArg___lam__1), 3, 2);
lean_closure_set(v___f_486_, 0, v_inst_481_);
lean_closure_set(v___f_486_, 1, v_ref_485_);
v___x_487_ = lean_apply_1(v_inst_482_, v_msg_483_);
v___x_488_ = lean_apply_4(v_toBind_484_, lean_box(0), lean_box(0), v___x_487_, v___f_486_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace___redArg(lean_object* v_inst_489_, lean_object* v_inst_490_, lean_object* v_inst_491_, lean_object* v_inst_492_, lean_object* v_msg_493_){
_start:
{
lean_object* v_toBind_494_; lean_object* v_getRef_495_; lean_object* v___f_496_; lean_object* v___x_497_; 
v_toBind_494_ = lean_ctor_get(v_inst_489_, 1);
lean_inc_n(v_toBind_494_, 2);
lean_dec_ref(v_inst_489_);
v_getRef_495_ = lean_ctor_get(v_inst_491_, 0);
lean_inc(v_getRef_495_);
lean_dec_ref(v_inst_491_);
v___f_496_ = lean_alloc_closure((void*)(l_Lean_addRawTrace___redArg___lam__2), 5, 4);
lean_closure_set(v___f_496_, 0, v_inst_490_);
lean_closure_set(v___f_496_, 1, v_inst_492_);
lean_closure_set(v___f_496_, 2, v_msg_493_);
lean_closure_set(v___f_496_, 3, v_toBind_494_);
v___x_497_ = lean_apply_4(v_toBind_494_, lean_box(0), lean_box(0), v_getRef_495_, v___f_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_addRawTrace(lean_object* v_m_498_, lean_object* v_inst_499_, lean_object* v_inst_500_, lean_object* v_inst_501_, lean_object* v_inst_502_, lean_object* v_msg_503_){
_start:
{
lean_object* v___x_504_; 
v___x_504_ = l_Lean_addRawTrace___redArg(v_inst_499_, v_inst_500_, v_inst_501_, v_inst_502_, v_msg_503_);
return v___x_504_;
}
}
static double _init_l_Lean_addTrace___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_505_; double v___x_506_; 
v___x_505_ = lean_unsigned_to_nat(0u);
v___x_506_ = lean_float_of_nat(v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__0(lean_object* v_cls_510_, lean_object* v_msg_511_, lean_object* v_ref_512_, lean_object* v_s_513_){
_start:
{
uint64_t v_tid_514_; lean_object* v_traces_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_531_; 
v_tid_514_ = lean_ctor_get_uint64(v_s_513_, sizeof(void*)*1);
v_traces_515_ = lean_ctor_get(v_s_513_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v_s_513_);
if (v_isSharedCheck_531_ == 0)
{
v___x_517_ = v_s_513_;
v_isShared_518_ = v_isSharedCheck_531_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_traces_515_);
lean_dec(v_s_513_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_531_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_519_; double v___x_520_; uint8_t v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_519_ = lean_box(0);
v___x_520_ = lean_float_once(&l_Lean_addTrace___redArg___lam__0___closed__0, &l_Lean_addTrace___redArg___lam__0___closed__0_once, _init_l_Lean_addTrace___redArg___lam__0___closed__0);
v___x_521_ = 0;
v___x_522_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__1));
v___x_523_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_523_, 0, v_cls_510_);
lean_ctor_set(v___x_523_, 1, v___x_519_);
lean_ctor_set(v___x_523_, 2, v___x_522_);
lean_ctor_set_float(v___x_523_, sizeof(void*)*3, v___x_520_);
lean_ctor_set_float(v___x_523_, sizeof(void*)*3 + 8, v___x_520_);
lean_ctor_set_uint8(v___x_523_, sizeof(void*)*3 + 16, v___x_521_);
v___x_524_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__2));
v___x_525_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_525_, 0, v___x_523_);
lean_ctor_set(v___x_525_, 1, v_msg_511_);
lean_ctor_set(v___x_525_, 2, v___x_524_);
v___x_526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_526_, 0, v_ref_512_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = l_Lean_PersistentArray_push___redArg(v_traces_515_, v___x_526_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 0, v___x_527_);
v___x_529_ = v___x_517_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_527_);
lean_ctor_set_uint64(v_reuseFailAlloc_530_, sizeof(void*)*1, v_tid_514_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__1(lean_object* v_inst_532_, lean_object* v_cls_533_, lean_object* v_ref_534_, lean_object* v_msg_535_){
_start:
{
lean_object* v_modifyTraceState_536_; lean_object* v___f_537_; lean_object* v___x_538_; 
v_modifyTraceState_536_ = lean_ctor_get(v_inst_532_, 0);
lean_inc(v_modifyTraceState_536_);
lean_dec_ref(v_inst_532_);
v___f_537_ = lean_alloc_closure((void*)(l_Lean_addTrace___redArg___lam__0), 4, 3);
lean_closure_set(v___f_537_, 0, v_cls_533_);
lean_closure_set(v___f_537_, 1, v_msg_535_);
lean_closure_set(v___f_537_, 2, v_ref_534_);
v___x_538_ = lean_apply_1(v_modifyTraceState_536_, v___f_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg___lam__2(lean_object* v_inst_539_, lean_object* v_cls_540_, lean_object* v_inst_541_, lean_object* v_msg_542_, lean_object* v_toBind_543_, lean_object* v_ref_544_){
_start:
{
lean_object* v___f_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___f_545_ = lean_alloc_closure((void*)(l_Lean_addTrace___redArg___lam__1), 4, 3);
lean_closure_set(v___f_545_, 0, v_inst_539_);
lean_closure_set(v___f_545_, 1, v_cls_540_);
lean_closure_set(v___f_545_, 2, v_ref_544_);
v___x_546_ = lean_apply_1(v_inst_541_, v_msg_542_);
v___x_547_ = lean_apply_4(v_toBind_543_, lean_box(0), lean_box(0), v___x_546_, v___f_545_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___redArg(lean_object* v_inst_548_, lean_object* v_inst_549_, lean_object* v_inst_550_, lean_object* v_inst_551_, lean_object* v_cls_552_, lean_object* v_msg_553_){
_start:
{
lean_object* v_toBind_554_; lean_object* v_getRef_555_; lean_object* v___f_556_; lean_object* v___x_557_; 
v_toBind_554_ = lean_ctor_get(v_inst_548_, 1);
lean_inc_n(v_toBind_554_, 2);
lean_dec_ref(v_inst_548_);
v_getRef_555_ = lean_ctor_get(v_inst_550_, 0);
lean_inc(v_getRef_555_);
lean_dec_ref(v_inst_550_);
v___f_556_ = lean_alloc_closure((void*)(l_Lean_addTrace___redArg___lam__2), 6, 5);
lean_closure_set(v___f_556_, 0, v_inst_549_);
lean_closure_set(v___f_556_, 1, v_cls_552_);
lean_closure_set(v___f_556_, 2, v_inst_551_);
lean_closure_set(v___f_556_, 3, v_msg_553_);
lean_closure_set(v___f_556_, 4, v_toBind_554_);
v___x_557_ = lean_apply_4(v_toBind_554_, lean_box(0), lean_box(0), v_getRef_555_, v___f_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace(lean_object* v_m_558_, lean_object* v_inst_559_, lean_object* v_inst_560_, lean_object* v_inst_561_, lean_object* v_inst_562_, lean_object* v_cls_563_, lean_object* v_msg_564_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = l_Lean_addTrace___redArg(v_inst_559_, v_inst_560_, v_inst_561_, v_inst_562_, v_cls_563_, v_msg_564_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_trace___redArg___lam__0(lean_object* v_toPure_566_, lean_object* v_msg_567_, lean_object* v_inst_568_, lean_object* v_inst_569_, lean_object* v_inst_570_, lean_object* v_inst_571_, lean_object* v_cls_572_, uint8_t v_____do__lift_573_){
_start:
{
if (v_____do__lift_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec(v_cls_572_);
lean_dec(v_inst_571_);
lean_dec_ref(v_inst_570_);
lean_dec_ref(v_inst_569_);
lean_dec_ref(v_inst_568_);
lean_dec_ref(v_msg_567_);
v___x_574_ = lean_box(0);
v___x_575_ = lean_apply_2(v_toPure_566_, lean_box(0), v___x_574_);
return v___x_575_;
}
else
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
lean_dec(v_toPure_566_);
v___x_576_ = lean_box(0);
v___x_577_ = lean_apply_1(v_msg_567_, v___x_576_);
v___x_578_ = l_Lean_addTrace___redArg(v_inst_568_, v_inst_569_, v_inst_570_, v_inst_571_, v_cls_572_, v___x_577_);
return v___x_578_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_trace___redArg___lam__0___boxed(lean_object* v_toPure_579_, lean_object* v_msg_580_, lean_object* v_inst_581_, lean_object* v_inst_582_, lean_object* v_inst_583_, lean_object* v_inst_584_, lean_object* v_cls_585_, lean_object* v_____do__lift_586_){
_start:
{
uint8_t v_____do__lift_126__boxed_587_; lean_object* v_res_588_; 
v_____do__lift_126__boxed_587_ = lean_unbox(v_____do__lift_586_);
v_res_588_ = l_Lean_trace___redArg___lam__0(v_toPure_579_, v_msg_580_, v_inst_581_, v_inst_582_, v_inst_583_, v_inst_584_, v_cls_585_, v_____do__lift_126__boxed_587_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_trace___redArg(lean_object* v_inst_589_, lean_object* v_inst_590_, lean_object* v_inst_591_, lean_object* v_inst_592_, lean_object* v_inst_593_, lean_object* v_cls_594_, lean_object* v_msg_595_){
_start:
{
lean_object* v_toApplicative_596_; lean_object* v_toBind_597_; lean_object* v_getInheritedTraceOptions_598_; lean_object* v_toPure_599_; lean_object* v___f_600_; lean_object* v___f_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v_toApplicative_596_ = lean_ctor_get(v_inst_589_, 0);
v_toBind_597_ = lean_ctor_get(v_inst_589_, 1);
lean_inc_n(v_toBind_597_, 3);
v_getInheritedTraceOptions_598_ = lean_ctor_get(v_inst_590_, 2);
lean_inc(v_getInheritedTraceOptions_598_);
v_toPure_599_ = lean_ctor_get(v_toApplicative_596_, 1);
lean_inc_n(v_toPure_599_, 2);
lean_inc(v_cls_594_);
v___f_600_ = lean_alloc_closure((void*)(l_Lean_trace___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_600_, 0, v_toPure_599_);
lean_closure_set(v___f_600_, 1, v_msg_595_);
lean_closure_set(v___f_600_, 2, v_inst_589_);
lean_closure_set(v___f_600_, 3, v_inst_590_);
lean_closure_set(v___f_600_, 4, v_inst_591_);
lean_closure_set(v___f_600_, 5, v_inst_592_);
lean_closure_set(v___f_600_, 6, v_cls_594_);
v___f_601_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_601_, 0, v_inst_593_);
lean_closure_set(v___f_601_, 1, v_toPure_599_);
lean_closure_set(v___f_601_, 2, v_cls_594_);
lean_closure_set(v___f_601_, 3, v_toBind_597_);
v___x_602_ = lean_apply_4(v_toBind_597_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_598_, v___f_601_);
v___x_603_ = lean_apply_4(v_toBind_597_, lean_box(0), lean_box(0), v___x_602_, v___f_600_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_trace(lean_object* v_m_604_, lean_object* v_inst_605_, lean_object* v_inst_606_, lean_object* v_inst_607_, lean_object* v_inst_608_, lean_object* v_inst_609_, lean_object* v_cls_610_, lean_object* v_msg_611_){
_start:
{
lean_object* v_toApplicative_612_; lean_object* v_toBind_613_; lean_object* v_getInheritedTraceOptions_614_; lean_object* v_toPure_615_; lean_object* v___f_616_; lean_object* v___f_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v_toApplicative_612_ = lean_ctor_get(v_inst_605_, 0);
v_toBind_613_ = lean_ctor_get(v_inst_605_, 1);
lean_inc_n(v_toBind_613_, 3);
v_getInheritedTraceOptions_614_ = lean_ctor_get(v_inst_606_, 2);
lean_inc(v_getInheritedTraceOptions_614_);
v_toPure_615_ = lean_ctor_get(v_toApplicative_612_, 1);
lean_inc_n(v_toPure_615_, 2);
lean_inc(v_cls_610_);
v___f_616_ = lean_alloc_closure((void*)(l_Lean_trace___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_616_, 0, v_toPure_615_);
lean_closure_set(v___f_616_, 1, v_msg_611_);
lean_closure_set(v___f_616_, 2, v_inst_605_);
lean_closure_set(v___f_616_, 3, v_inst_606_);
lean_closure_set(v___f_616_, 4, v_inst_607_);
lean_closure_set(v___f_616_, 5, v_inst_608_);
lean_closure_set(v___f_616_, 6, v_cls_610_);
v___f_617_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_617_, 0, v_inst_609_);
lean_closure_set(v___f_617_, 1, v_toPure_615_);
lean_closure_set(v___f_617_, 2, v_cls_610_);
lean_closure_set(v___f_617_, 3, v_toBind_613_);
v___x_618_ = lean_apply_4(v_toBind_613_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_614_, v___f_617_);
v___x_619_ = lean_apply_4(v_toBind_613_, lean_box(0), lean_box(0), v___x_618_, v___f_616_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__0(lean_object* v_inst_620_, lean_object* v_inst_621_, lean_object* v_inst_622_, lean_object* v_inst_623_, lean_object* v_cls_624_, lean_object* v_msg_625_){
_start:
{
lean_object* v___x_626_; 
v___x_626_ = l_Lean_addTrace___redArg(v_inst_620_, v_inst_621_, v_inst_622_, v_inst_623_, v_cls_624_, v_msg_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__1(lean_object* v_toPure_627_, lean_object* v_toBind_628_, lean_object* v_mkMsg_629_, lean_object* v___f_630_, uint8_t v_____do__lift_631_){
_start:
{
if (v_____do__lift_631_ == 0)
{
lean_object* v___x_632_; lean_object* v___x_633_; 
lean_dec(v___f_630_);
lean_dec(v_mkMsg_629_);
lean_dec(v_toBind_628_);
v___x_632_ = lean_box(0);
v___x_633_ = lean_apply_2(v_toPure_627_, lean_box(0), v___x_632_);
return v___x_633_;
}
else
{
lean_object* v___x_634_; 
lean_dec(v_toPure_627_);
v___x_634_ = lean_apply_4(v_toBind_628_, lean_box(0), lean_box(0), v_mkMsg_629_, v___f_630_);
return v___x_634_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg___lam__1___boxed(lean_object* v_toPure_635_, lean_object* v_toBind_636_, lean_object* v_mkMsg_637_, lean_object* v___f_638_, lean_object* v_____do__lift_639_){
_start:
{
uint8_t v_____do__lift_132__boxed_640_; lean_object* v_res_641_; 
v_____do__lift_132__boxed_640_ = lean_unbox(v_____do__lift_639_);
v_res_641_ = l_Lean_traceM___redArg___lam__1(v_toPure_635_, v_toBind_636_, v_mkMsg_637_, v___f_638_, v_____do__lift_132__boxed_640_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM___redArg(lean_object* v_inst_642_, lean_object* v_inst_643_, lean_object* v_inst_644_, lean_object* v_inst_645_, lean_object* v_inst_646_, lean_object* v_cls_647_, lean_object* v_mkMsg_648_){
_start:
{
lean_object* v_toApplicative_649_; lean_object* v_toBind_650_; lean_object* v_getInheritedTraceOptions_651_; lean_object* v_toPure_652_; lean_object* v___f_653_; lean_object* v___f_654_; lean_object* v___f_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v_toApplicative_649_ = lean_ctor_get(v_inst_642_, 0);
v_toBind_650_ = lean_ctor_get(v_inst_642_, 1);
lean_inc_n(v_toBind_650_, 4);
v_getInheritedTraceOptions_651_ = lean_ctor_get(v_inst_643_, 2);
lean_inc(v_getInheritedTraceOptions_651_);
v_toPure_652_ = lean_ctor_get(v_toApplicative_649_, 1);
lean_inc_n(v_toPure_652_, 2);
lean_inc(v_cls_647_);
v___f_653_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__0), 6, 5);
lean_closure_set(v___f_653_, 0, v_inst_642_);
lean_closure_set(v___f_653_, 1, v_inst_643_);
lean_closure_set(v___f_653_, 2, v_inst_644_);
lean_closure_set(v___f_653_, 3, v_inst_645_);
lean_closure_set(v___f_653_, 4, v_cls_647_);
v___f_654_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_654_, 0, v_toPure_652_);
lean_closure_set(v___f_654_, 1, v_toBind_650_);
lean_closure_set(v___f_654_, 2, v_mkMsg_648_);
lean_closure_set(v___f_654_, 3, v___f_653_);
v___f_655_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_655_, 0, v_inst_646_);
lean_closure_set(v___f_655_, 1, v_toPure_652_);
lean_closure_set(v___f_655_, 2, v_cls_647_);
lean_closure_set(v___f_655_, 3, v_toBind_650_);
v___x_656_ = lean_apply_4(v_toBind_650_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_651_, v___f_655_);
v___x_657_ = lean_apply_4(v_toBind_650_, lean_box(0), lean_box(0), v___x_656_, v___f_654_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_traceM(lean_object* v_m_658_, lean_object* v_inst_659_, lean_object* v_inst_660_, lean_object* v_inst_661_, lean_object* v_inst_662_, lean_object* v_inst_663_, lean_object* v_cls_664_, lean_object* v_mkMsg_665_){
_start:
{
lean_object* v_toApplicative_666_; lean_object* v_toBind_667_; lean_object* v_getInheritedTraceOptions_668_; lean_object* v_toPure_669_; lean_object* v___f_670_; lean_object* v___f_671_; lean_object* v___f_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v_toApplicative_666_ = lean_ctor_get(v_inst_659_, 0);
v_toBind_667_ = lean_ctor_get(v_inst_659_, 1);
lean_inc_n(v_toBind_667_, 4);
v_getInheritedTraceOptions_668_ = lean_ctor_get(v_inst_660_, 2);
lean_inc(v_getInheritedTraceOptions_668_);
v_toPure_669_ = lean_ctor_get(v_toApplicative_666_, 1);
lean_inc_n(v_toPure_669_, 2);
lean_inc(v_cls_664_);
v___f_670_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__0), 6, 5);
lean_closure_set(v___f_670_, 0, v_inst_659_);
lean_closure_set(v___f_670_, 1, v_inst_660_);
lean_closure_set(v___f_670_, 2, v_inst_661_);
lean_closure_set(v___f_670_, 3, v_inst_662_);
lean_closure_set(v___f_670_, 4, v_cls_664_);
v___f_671_ = lean_alloc_closure((void*)(l_Lean_traceM___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_671_, 0, v_toPure_669_);
lean_closure_set(v___f_671_, 1, v_toBind_667_);
lean_closure_set(v___f_671_, 2, v_mkMsg_665_);
lean_closure_set(v___f_671_, 3, v___f_670_);
v___f_672_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__1), 5, 4);
lean_closure_set(v___f_672_, 0, v_inst_663_);
lean_closure_set(v___f_672_, 1, v_toPure_669_);
lean_closure_set(v___f_672_, 2, v_cls_664_);
lean_closure_set(v___f_672_, 3, v_toBind_667_);
v___x_673_ = lean_apply_4(v_toBind_667_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_668_, v___f_672_);
v___x_674_ = lean_apply_4(v_toBind_667_, lean_box(0), lean_box(0), v___x_673_, v___f_671_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1(lean_object* v_x_675_){
_start:
{
lean_object* v_msg_676_; 
v_msg_676_ = lean_ctor_get(v_x_675_, 1);
lean_inc_ref(v_msg_676_);
return v_msg_676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1___boxed(lean_object* v_x_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__1(v_x_677_);
lean_dec_ref(v_x_677_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__0(lean_object* v_ref_679_, lean_object* v_msg_680_, lean_object* v_oldTraces_681_, lean_object* v_s_682_){
_start:
{
uint64_t v_tid_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_692_; 
v_tid_683_ = lean_ctor_get_uint64(v_s_682_, sizeof(void*)*1);
v_isSharedCheck_692_ = !lean_is_exclusive(v_s_682_);
if (v_isSharedCheck_692_ == 0)
{
lean_object* v_unused_693_; 
v_unused_693_ = lean_ctor_get(v_s_682_, 0);
lean_dec(v_unused_693_);
v___x_685_ = v_s_682_;
v_isShared_686_ = v_isSharedCheck_692_;
goto v_resetjp_684_;
}
else
{
lean_dec(v_s_682_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_692_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_687_, 0, v_ref_679_);
lean_ctor_set(v___x_687_, 1, v_msg_680_);
v___x_688_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_681_, v___x_687_);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 0, v___x_688_);
v___x_690_ = v___x_685_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
lean_ctor_set_uint64(v_reuseFailAlloc_691_, sizeof(void*)*1, v_tid_683_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__2(lean_object* v_ref_694_, lean_object* v_oldTraces_695_, lean_object* v_modifyTraceState_696_, lean_object* v_msg_697_){
_start:
{
lean_object* v___f_698_; lean_object* v___x_699_; 
v___f_698_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__0), 4, 3);
lean_closure_set(v___f_698_, 0, v_ref_694_);
lean_closure_set(v___f_698_, 1, v_msg_697_);
lean_closure_set(v___f_698_, 2, v_oldTraces_695_);
v___x_699_ = lean_apply_1(v_modifyTraceState_696_, v___f_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3(lean_object* v___f_719_, lean_object* v_data_720_, lean_object* v_msg_721_, lean_object* v_inst_722_, lean_object* v_toBind_723_, lean_object* v___f_724_, lean_object* v_____do__lift_725_){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; size_t v_sz_728_; size_t v___x_729_; lean_object* v___x_730_; lean_object* v_msg_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_726_ = l_Lean_PersistentArray_toArray___redArg(v_____do__lift_725_);
v___x_727_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9));
v_sz_728_ = lean_array_size(v___x_726_);
v___x_729_ = ((size_t)0ULL);
v___x_730_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_727_, v___f_719_, v_sz_728_, v___x_729_, v___x_726_);
v_msg_731_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_731_, 0, v_data_720_);
lean_ctor_set(v_msg_731_, 1, v_msg_721_);
lean_ctor_set(v_msg_731_, 2, v___x_730_);
v___x_732_ = lean_apply_1(v_inst_722_, v_msg_731_);
v___x_733_ = lean_apply_4(v_toBind_723_, lean_box(0), lean_box(0), v___x_732_, v___f_724_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___boxed(lean_object* v___f_734_, lean_object* v_data_735_, lean_object* v_msg_736_, lean_object* v_inst_737_, lean_object* v_toBind_738_, lean_object* v___f_739_, lean_object* v_____do__lift_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3(v___f_734_, v_data_735_, v_msg_736_, v_inst_737_, v_toBind_738_, v___f_739_, v_____do__lift_740_);
lean_dec_ref(v_____do__lift_740_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4(lean_object* v_ref_742_, lean_object* v_withRef_743_, lean_object* v___x_744_, lean_object* v_oldRef_745_){
_start:
{
lean_object* v_ref_746_; lean_object* v___x_747_; 
v_ref_746_ = l_Lean_replaceRef(v_ref_742_, v_oldRef_745_);
v___x_747_ = lean_apply_3(v_withRef_743_, lean_box(0), v_ref_746_, v___x_744_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed(lean_object* v_ref_748_, lean_object* v_withRef_749_, lean_object* v___x_750_, lean_object* v_oldRef_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4(v_ref_748_, v_withRef_749_, v___x_750_, v_oldRef_751_);
lean_dec(v_oldRef_751_);
lean_dec(v_ref_748_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(lean_object* v_inst_754_, lean_object* v_inst_755_, lean_object* v_inst_756_, lean_object* v_inst_757_, lean_object* v_oldTraces_758_, lean_object* v_data_759_, lean_object* v_ref_760_, lean_object* v_msg_761_){
_start:
{
lean_object* v_toApplicative_762_; lean_object* v_toBind_763_; lean_object* v_modifyTraceState_764_; lean_object* v_getTraceState_765_; lean_object* v_toPure_766_; lean_object* v_getRef_767_; lean_object* v_withRef_768_; lean_object* v___f_769_; lean_object* v___x_770_; lean_object* v___f_771_; lean_object* v___f_772_; lean_object* v___f_773_; lean_object* v___x_774_; lean_object* v___f_775_; lean_object* v___x_776_; 
v_toApplicative_762_ = lean_ctor_get(v_inst_754_, 0);
lean_inc_ref(v_toApplicative_762_);
v_toBind_763_ = lean_ctor_get(v_inst_754_, 1);
lean_inc_n(v_toBind_763_, 4);
lean_dec_ref(v_inst_754_);
v_modifyTraceState_764_ = lean_ctor_get(v_inst_755_, 0);
lean_inc(v_modifyTraceState_764_);
v_getTraceState_765_ = lean_ctor_get(v_inst_755_, 1);
lean_inc(v_getTraceState_765_);
lean_dec_ref(v_inst_755_);
v_toPure_766_ = lean_ctor_get(v_toApplicative_762_, 1);
lean_inc(v_toPure_766_);
lean_dec_ref(v_toApplicative_762_);
v_getRef_767_ = lean_ctor_get(v_inst_756_, 0);
lean_inc(v_getRef_767_);
v_withRef_768_ = lean_ctor_get(v_inst_756_, 1);
lean_inc(v_withRef_768_);
lean_dec_ref(v_inst_756_);
v___f_769_ = lean_alloc_closure((void*)(l_Lean_getTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_769_, 0, v_toPure_766_);
v___x_770_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v_getTraceState_765_, v___f_769_);
v___f_771_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___closed__0));
lean_inc(v_ref_760_);
v___f_772_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__2), 4, 3);
lean_closure_set(v___f_772_, 0, v_ref_760_);
lean_closure_set(v___f_772_, 1, v_oldTraces_758_);
lean_closure_set(v___f_772_, 2, v_modifyTraceState_764_);
v___f_773_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_773_, 0, v___f_771_);
lean_closure_set(v___f_773_, 1, v_data_759_);
lean_closure_set(v___f_773_, 2, v_msg_761_);
lean_closure_set(v___f_773_, 3, v_inst_757_);
lean_closure_set(v___f_773_, 4, v_toBind_763_);
lean_closure_set(v___f_773_, 5, v___f_772_);
v___x_774_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v___x_770_, v___f_773_);
v___f_775_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_775_, 0, v_ref_760_);
lean_closure_set(v___f_775_, 1, v_withRef_768_);
lean_closure_set(v___f_775_, 2, v___x_774_);
v___x_776_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v_getRef_767_, v___f_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode(lean_object* v_m_777_, lean_object* v_inst_778_, lean_object* v_inst_779_, lean_object* v_inst_780_, lean_object* v_inst_781_, lean_object* v_oldTraces_782_, lean_object* v_data_783_, lean_object* v_ref_784_, lean_object* v_msg_785_){
_start:
{
lean_object* v___x_786_; 
v___x_786_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(v_inst_778_, v_inst_779_, v_inst_780_, v_inst_781_, v_oldTraces_782_, v_data_783_, v_ref_784_, v_msg_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(lean_object* v_name_787_, lean_object* v_decl_788_, lean_object* v_ref_789_){
_start:
{
lean_object* v_defValue_791_; lean_object* v_descr_792_; lean_object* v_deprecation_x3f_793_; lean_object* v___x_794_; uint8_t v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v_defValue_791_ = lean_ctor_get(v_decl_788_, 0);
v_descr_792_ = lean_ctor_get(v_decl_788_, 1);
v_deprecation_x3f_793_ = lean_ctor_get(v_decl_788_, 2);
v___x_794_ = lean_alloc_ctor(1, 0, 1);
v___x_795_ = lean_unbox(v_defValue_791_);
lean_ctor_set_uint8(v___x_794_, 0, v___x_795_);
lean_inc(v_deprecation_x3f_793_);
lean_inc_ref(v_descr_792_);
lean_inc_n(v_name_787_, 2);
v___x_796_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_796_, 0, v_name_787_);
lean_ctor_set(v___x_796_, 1, v_ref_789_);
lean_ctor_set(v___x_796_, 2, v___x_794_);
lean_ctor_set(v___x_796_, 3, v_descr_792_);
lean_ctor_set(v___x_796_, 4, v_deprecation_x3f_793_);
v___x_797_ = lean_register_option(v_name_787_, v___x_796_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_805_; 
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_805_ == 0)
{
lean_object* v_unused_806_; 
v_unused_806_ = lean_ctor_get(v___x_797_, 0);
lean_dec(v_unused_806_);
v___x_799_ = v___x_797_;
v_isShared_800_ = v_isSharedCheck_805_;
goto v_resetjp_798_;
}
else
{
lean_dec(v___x_797_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_805_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_801_; lean_object* v___x_803_; 
lean_inc(v_defValue_791_);
v___x_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_801_, 0, v_name_787_);
lean_ctor_set(v___x_801_, 1, v_defValue_791_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v___x_801_);
v___x_803_ = v___x_799_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_801_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec(v_name_787_);
v_a_807_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_797_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_797_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_815_, lean_object* v_decl_816_, lean_object* v_ref_817_, lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v_name_815_, v_decl_816_, v_ref_817_);
lean_dec_ref(v_decl_816_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_835_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_));
v___x_836_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_));
v___x_837_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_));
v___x_838_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_835_, v___x_836_, v___x_837_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4____boxed(lean_object* v_a_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4_();
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0(lean_object* v_name_841_, lean_object* v_decl_842_, lean_object* v_ref_843_){
_start:
{
lean_object* v_defValue_845_; lean_object* v_descr_846_; lean_object* v_deprecation_x3f_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
v_defValue_845_ = lean_ctor_get(v_decl_842_, 0);
v_descr_846_ = lean_ctor_get(v_decl_842_, 1);
v_deprecation_x3f_847_ = lean_ctor_get(v_decl_842_, 2);
lean_inc(v_defValue_845_);
v___x_848_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_848_, 0, v_defValue_845_);
lean_inc(v_deprecation_x3f_847_);
lean_inc_ref(v_descr_846_);
lean_inc_n(v_name_841_, 2);
v___x_849_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_849_, 0, v_name_841_);
lean_ctor_set(v___x_849_, 1, v_ref_843_);
lean_ctor_set(v___x_849_, 2, v___x_848_);
lean_ctor_set(v___x_849_, 3, v_descr_846_);
lean_ctor_set(v___x_849_, 4, v_deprecation_x3f_847_);
v___x_850_ = lean_register_option(v_name_841_, v___x_849_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_858_; 
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_858_ == 0)
{
lean_object* v_unused_859_; 
v_unused_859_ = lean_ctor_get(v___x_850_, 0);
lean_dec(v_unused_859_);
v___x_852_ = v___x_850_;
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
else
{
lean_dec(v___x_850_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_858_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_854_; lean_object* v___x_856_; 
lean_inc(v_defValue_845_);
v___x_854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_854_, 0, v_name_841_);
lean_ctor_set(v___x_854_, 1, v_defValue_845_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 0, v___x_854_);
v___x_856_ = v___x_852_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_854_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
else
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_867_; 
lean_dec(v_name_841_);
v_a_860_ = lean_ctor_get(v___x_850_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_850_);
if (v_isSharedCheck_867_ == 0)
{
v___x_862_ = v___x_850_;
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_850_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_863_ == 0)
{
v___x_865_ = v___x_862_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_a_860_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_868_, lean_object* v_decl_869_, lean_object* v_ref_870_, lean_object* v_a_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0(v_name_868_, v_decl_869_, v_ref_870_);
lean_dec_ref(v_decl_869_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_889_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_));
v___x_890_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_));
v___x_891_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_));
v___x_892_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4__spec__0(v___x_889_, v___x_890_, v___x_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4____boxed(lean_object* v_a_893_){
_start:
{
lean_object* v_res_894_; 
v_res_894_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2834694386____hygCtx___hyg_4_();
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_912_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_));
v___x_913_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_));
v___x_914_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_));
v___x_915_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_912_, v___x_913_, v___x_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4____boxed(lean_object* v_a_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_3737982518____hygCtx___hyg_4_();
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0(lean_object* v_name_918_, lean_object* v_decl_919_, lean_object* v_ref_920_){
_start:
{
lean_object* v_defValue_922_; lean_object* v_descr_923_; lean_object* v_deprecation_x3f_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v_defValue_922_ = lean_ctor_get(v_decl_919_, 0);
v_descr_923_ = lean_ctor_get(v_decl_919_, 1);
v_deprecation_x3f_924_ = lean_ctor_get(v_decl_919_, 2);
lean_inc(v_defValue_922_);
v___x_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_925_, 0, v_defValue_922_);
lean_inc(v_deprecation_x3f_924_);
lean_inc_ref(v_descr_923_);
lean_inc_n(v_name_918_, 2);
v___x_926_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_926_, 0, v_name_918_);
lean_ctor_set(v___x_926_, 1, v_ref_920_);
lean_ctor_set(v___x_926_, 2, v___x_925_);
lean_ctor_set(v___x_926_, 3, v_descr_923_);
lean_ctor_set(v___x_926_, 4, v_deprecation_x3f_924_);
v___x_927_ = lean_register_option(v_name_918_, v___x_926_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_935_; 
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_935_ == 0)
{
lean_object* v_unused_936_; 
v_unused_936_ = lean_ctor_get(v___x_927_, 0);
lean_dec(v_unused_936_);
v___x_929_ = v___x_927_;
v_isShared_930_ = v_isSharedCheck_935_;
goto v_resetjp_928_;
}
else
{
lean_dec(v___x_927_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_935_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_931_; lean_object* v___x_933_; 
lean_inc(v_defValue_922_);
v___x_931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_931_, 0, v_name_918_);
lean_ctor_set(v___x_931_, 1, v_defValue_922_);
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 0, v___x_931_);
v___x_933_ = v___x_929_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_931_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
lean_dec(v_name_918_);
v_a_937_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_927_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_927_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_945_, lean_object* v_decl_946_, lean_object* v_ref_947_, lean_object* v_a_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0(v_name_945_, v_decl_946_, v_ref_947_);
lean_dec_ref(v_decl_946_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_966_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_));
v___x_967_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_));
v___x_968_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_));
v___x_969_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4__spec__0(v___x_966_, v___x_967_, v___x_968_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4____boxed(lean_object* v_a_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_545552135____hygCtx___hyg_4_();
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_989_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_));
v___x_990_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_));
v___x_991_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_));
v___x_992_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_989_, v___x_990_, v___x_991_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4____boxed(lean_object* v_a_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1925802394____hygCtx___hyg_4_();
return v_res_994_;
}
}
LEAN_EXPORT uint8_t l_Lean_trace_profiler_isExporting(lean_object* v_opts_995_){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_996_ = l_Lean_KVMap_instValueBool;
v___x_997_ = l_Lean_KVMap_instValueString;
v___x_998_ = l_Lean_trace_profiler_output;
v___x_999_ = l_Lean_Option_get_x3f___redArg(v___x_997_, v_opts_995_, v___x_998_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v___x_1000_; lean_object* v___x_1001_; uint8_t v___x_1002_; 
v___x_1000_ = l_Lean_trace_profiler_serve;
v___x_1001_ = l_Lean_Option_get___redArg(v___x_996_, v_opts_995_, v___x_1000_);
v___x_1002_ = lean_unbox(v___x_1001_);
lean_dec(v___x_1001_);
return v___x_1002_;
}
else
{
uint8_t v___x_1003_; 
lean_dec_ref_known(v___x_999_, 1);
v___x_1003_ = 1;
return v___x_1003_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_trace_profiler_isExporting___boxed(lean_object* v_opts_1004_){
_start:
{
uint8_t v_res_1005_; lean_object* v_r_1006_; 
v_res_1005_ = l_Lean_trace_profiler_isExporting(v_opts_1004_);
lean_dec_ref(v_opts_1004_);
v_r_1006_ = lean_box(v_res_1005_);
return v_r_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1026_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_));
v___x_1027_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__3_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_));
v___x_1028_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__4_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_));
v___x_1029_ = l_Lean_Option_register___at___00__private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_1728529786____hygCtx___hyg_4__spec__0(v___x_1026_, v___x_1027_, v___x_1028_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4____boxed(lean_object* v_a_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_4169215340____hygCtx___hyg_4_();
return v_res_1031_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1032_; double v___x_1033_; 
v___x_1032_ = lean_unsigned_to_nat(1000000000u);
v___x_1033_ = lean_float_of_nat(v___x_1032_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0(lean_object* v_start_1034_, lean_object* v_a_1035_, lean_object* v_toPure_1036_, lean_object* v_stop_1037_){
_start:
{
double v___x_1038_; double v___x_1039_; double v___x_1040_; double v___x_1041_; double v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1038_ = lean_float_of_nat(v_start_1034_);
v___x_1039_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0, &l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0);
v___x_1040_ = lean_float_div(v___x_1038_, v___x_1039_);
v___x_1041_ = lean_float_of_nat(v_stop_1037_);
v___x_1042_ = lean_float_div(v___x_1041_, v___x_1039_);
v___x_1043_ = lean_box_float(v___x_1040_);
v___x_1044_ = lean_box_float(v___x_1042_);
v___x_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1043_);
lean_ctor_set(v___x_1045_, 1, v___x_1044_);
v___x_1046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1046_, 0, v_a_1035_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = lean_apply_2(v_toPure_1036_, lean_box(0), v___x_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__1(lean_object* v_start_1048_, lean_object* v_toPure_1049_, lean_object* v_toBind_1050_, lean_object* v___x_1051_, lean_object* v_a_1052_){
_start:
{
lean_object* v___f_1053_; lean_object* v___x_1054_; 
v___f_1053_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1053_, 0, v_start_1048_);
lean_closure_set(v___f_1053_, 1, v_a_1052_);
lean_closure_set(v___f_1053_, 2, v_toPure_1049_);
v___x_1054_ = lean_apply_4(v_toBind_1050_, lean_box(0), lean_box(0), v___x_1051_, v___f_1053_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__2(lean_object* v_toPure_1055_, lean_object* v_toBind_1056_, lean_object* v___x_1057_, lean_object* v_act_1058_, lean_object* v_start_1059_){
_start:
{
lean_object* v___f_1060_; lean_object* v___x_1061_; 
lean_inc(v_toBind_1056_);
v___f_1060_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1060_, 0, v_start_1059_);
lean_closure_set(v___f_1060_, 1, v_toPure_1055_);
lean_closure_set(v___f_1060_, 2, v_toBind_1056_);
lean_closure_set(v___f_1060_, 3, v___x_1057_);
v___x_1061_ = lean_apply_4(v_toBind_1056_, lean_box(0), lean_box(0), v_act_1058_, v___f_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__3(lean_object* v_start_1062_, lean_object* v_a_1063_, lean_object* v_toPure_1064_, lean_object* v_stop_1065_){
_start:
{
double v___x_1066_; double v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1066_ = lean_float_of_nat(v_start_1062_);
v___x_1067_ = lean_float_of_nat(v_stop_1065_);
v___x_1068_ = lean_box_float(v___x_1066_);
v___x_1069_ = lean_box_float(v___x_1067_);
v___x_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1068_);
lean_ctor_set(v___x_1070_, 1, v___x_1069_);
v___x_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1071_, 0, v_a_1063_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
v___x_1072_ = lean_apply_2(v_toPure_1064_, lean_box(0), v___x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__4(lean_object* v_start_1073_, lean_object* v_toPure_1074_, lean_object* v_toBind_1075_, lean_object* v___x_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v___f_1078_; lean_object* v___x_1079_; 
v___f_1078_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__3), 4, 3);
lean_closure_set(v___f_1078_, 0, v_start_1073_);
lean_closure_set(v___f_1078_, 1, v_a_1077_);
lean_closure_set(v___f_1078_, 2, v_toPure_1074_);
v___x_1079_ = lean_apply_4(v_toBind_1075_, lean_box(0), lean_box(0), v___x_1076_, v___f_1078_);
return v___x_1079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__5(lean_object* v_toPure_1080_, lean_object* v_toBind_1081_, lean_object* v___x_1082_, lean_object* v_act_1083_, lean_object* v_start_1084_){
_start:
{
lean_object* v___f_1085_; lean_object* v___x_1086_; 
lean_inc(v_toBind_1081_);
v___f_1085_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1085_, 0, v_start_1084_);
lean_closure_set(v___f_1085_, 1, v_toPure_1080_);
lean_closure_set(v___f_1085_, 2, v_toBind_1081_);
lean_closure_set(v___f_1085_, 3, v___x_1082_);
v___x_1086_ = lean_apply_4(v_toBind_1081_, lean_box(0), lean_box(0), v_act_1083_, v___f_1085_);
return v___x_1086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg(lean_object* v_inst_1089_, lean_object* v_inst_1090_, lean_object* v_opts_1091_, lean_object* v_act_1092_){
_start:
{
lean_object* v___x_1093_; lean_object* v_toApplicative_1094_; lean_object* v_toBind_1095_; lean_object* v_toPure_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; uint8_t v___x_1099_; 
v___x_1093_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1094_ = lean_ctor_get(v_inst_1089_, 0);
lean_inc_ref(v_toApplicative_1094_);
v_toBind_1095_ = lean_ctor_get(v_inst_1089_, 1);
lean_inc(v_toBind_1095_);
lean_dec_ref(v_inst_1089_);
v_toPure_1096_ = lean_ctor_get(v_toApplicative_1094_, 1);
lean_inc(v_toPure_1096_);
lean_dec_ref(v_toApplicative_1094_);
v___x_1097_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1098_ = l_Lean_Option_get___redArg(v___x_1093_, v_opts_1091_, v___x_1097_);
v___x_1099_ = lean_unbox(v___x_1098_);
lean_dec(v___x_1098_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___f_1102_; lean_object* v___x_1103_; 
v___x_1100_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1101_ = lean_apply_2(v_inst_1090_, lean_box(0), v___x_1100_);
lean_inc(v___x_1101_);
lean_inc(v_toBind_1095_);
v___f_1102_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1102_, 0, v_toPure_1096_);
lean_closure_set(v___f_1102_, 1, v_toBind_1095_);
lean_closure_set(v___f_1102_, 2, v___x_1101_);
lean_closure_set(v___f_1102_, 3, v_act_1092_);
v___x_1103_ = lean_apply_4(v_toBind_1095_, lean_box(0), lean_box(0), v___x_1101_, v___f_1102_);
return v___x_1103_;
}
else
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___f_1106_; lean_object* v___x_1107_; 
v___x_1104_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_1105_ = lean_apply_2(v_inst_1090_, lean_box(0), v___x_1104_);
lean_inc(v___x_1105_);
lean_inc(v_toBind_1095_);
v___f_1106_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1106_, 0, v_toPure_1096_);
lean_closure_set(v___f_1106_, 1, v_toBind_1095_);
lean_closure_set(v___f_1106_, 2, v___x_1105_);
lean_closure_set(v___f_1106_, 3, v_act_1092_);
v___x_1107_ = lean_apply_4(v_toBind_1095_, lean_box(0), lean_box(0), v___x_1105_, v___f_1106_);
return v___x_1107_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___boxed(lean_object* v_inst_1108_, lean_object* v_inst_1109_, lean_object* v_opts_1110_, lean_object* v_act_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg(v_inst_1108_, v_inst_1109_, v_opts_1110_, v_act_1111_);
lean_dec_ref(v_opts_1110_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop(lean_object* v_00_u03b1_1113_, lean_object* v_m_1114_, lean_object* v_inst_1115_, lean_object* v_inst_1116_, lean_object* v_opts_1117_, lean_object* v_act_1118_){
_start:
{
lean_object* v___x_1119_; lean_object* v_toApplicative_1120_; lean_object* v_toBind_1121_; lean_object* v_toPure_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; uint8_t v___x_1125_; 
v___x_1119_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1120_ = lean_ctor_get(v_inst_1115_, 0);
lean_inc_ref(v_toApplicative_1120_);
v_toBind_1121_ = lean_ctor_get(v_inst_1115_, 1);
lean_inc(v_toBind_1121_);
lean_dec_ref(v_inst_1115_);
v_toPure_1122_ = lean_ctor_get(v_toApplicative_1120_, 1);
lean_inc(v_toPure_1122_);
lean_dec_ref(v_toApplicative_1120_);
v___x_1123_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1124_ = l_Lean_Option_get___redArg(v___x_1119_, v_opts_1117_, v___x_1123_);
v___x_1125_ = lean_unbox(v___x_1124_);
lean_dec(v___x_1124_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___f_1128_; lean_object* v___x_1129_; 
v___x_1126_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1127_ = lean_apply_2(v_inst_1116_, lean_box(0), v___x_1126_);
lean_inc(v___x_1127_);
lean_inc(v_toBind_1121_);
v___f_1128_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1128_, 0, v_toPure_1122_);
lean_closure_set(v___f_1128_, 1, v_toBind_1121_);
lean_closure_set(v___f_1128_, 2, v___x_1127_);
lean_closure_set(v___f_1128_, 3, v_act_1118_);
v___x_1129_ = lean_apply_4(v_toBind_1121_, lean_box(0), lean_box(0), v___x_1127_, v___f_1128_);
return v___x_1129_;
}
else
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___f_1132_; lean_object* v___x_1133_; 
v___x_1130_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_1131_ = lean_apply_2(v_inst_1116_, lean_box(0), v___x_1130_);
lean_inc(v___x_1131_);
lean_inc(v_toBind_1121_);
v___f_1132_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1132_, 0, v_toPure_1122_);
lean_closure_set(v___f_1132_, 1, v_toBind_1121_);
lean_closure_set(v___f_1132_, 2, v___x_1131_);
lean_closure_set(v___f_1132_, 3, v_act_1118_);
v___x_1133_ = lean_apply_4(v_toBind_1121_, lean_box(0), lean_box(0), v___x_1131_, v___f_1132_);
return v___x_1133_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withStartStop___boxed(lean_object* v_00_u03b1_1134_, lean_object* v_m_1135_, lean_object* v_inst_1136_, lean_object* v_inst_1137_, lean_object* v_opts_1138_, lean_object* v_act_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l___private_Lean_Util_Trace_0__Lean_withStartStop(v_00_u03b1_1134_, v_m_1135_, v_inst_1136_, v_inst_1137_, v_opts_1138_, v_act_1139_);
lean_dec_ref(v_opts_1138_);
return v_res_1140_;
}
}
static double _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0(void){
_start:
{
lean_object* v___x_1141_; double v___x_1142_; 
v___x_1141_ = lean_unsigned_to_nat(1000u);
v___x_1142_ = lean_float_of_nat(v___x_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT double l_Lean_trace_profiler_threshold_unitAdjusted(lean_object* v_o_1143_){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; uint8_t v___x_1148_; 
v___x_1144_ = l_Lean_KVMap_instValueBool;
v___x_1145_ = l_Lean_KVMap_instValueNat;
v___x_1146_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1147_ = l_Lean_Option_get___redArg(v___x_1144_, v_o_1143_, v___x_1146_);
v___x_1148_ = lean_unbox(v___x_1147_);
lean_dec(v___x_1147_);
if (v___x_1148_ == 0)
{
lean_object* v___x_1149_; lean_object* v___x_1150_; double v___x_1151_; double v___x_1152_; double v___x_1153_; 
v___x_1149_ = l_Lean_trace_profiler_threshold;
v___x_1150_ = l_Lean_Option_get___redArg(v___x_1145_, v_o_1143_, v___x_1149_);
v___x_1151_ = lean_float_of_nat(v___x_1150_);
v___x_1152_ = lean_float_once(&l_Lean_trace_profiler_threshold_unitAdjusted___closed__0, &l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once, _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0);
v___x_1153_ = lean_float_div(v___x_1151_, v___x_1152_);
return v___x_1153_;
}
else
{
lean_object* v___x_1154_; lean_object* v___x_1155_; double v___x_1156_; 
v___x_1154_ = l_Lean_trace_profiler_threshold;
v___x_1155_ = l_Lean_Option_get___redArg(v___x_1145_, v_o_1143_, v___x_1154_);
v___x_1156_ = lean_float_of_nat(v___x_1155_);
return v___x_1156_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_trace_profiler_threshold_unitAdjusted___boxed(lean_object* v_o_1157_){
_start:
{
double v_res_1158_; lean_object* v_r_1159_; 
v_res_1158_ = l_Lean_trace_profiler_threshold_unitAdjusted(v_o_1157_);
lean_dec_ref(v_o_1157_);
v_r_1159_ = lean_box_float(v_res_1158_);
return v_r_1159_;
}
}
static lean_object* _init_l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0(void){
_start:
{
lean_object* v___x_1160_; 
v___x_1160_ = l_instMonadExceptOfEIO___redArg();
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg(){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = lean_obj_once(&l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0, &l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0_once, _init_l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO___redArg___boxed(lean_object* v___dummy_1163_){
_start:
{
lean_object* v_res_1164_; 
v_res_1164_ = l_Lean_instMonadAlwaysExceptEIO___redArg();
return v_res_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptEIO(lean_object* v_00_u03b5_1165_){
_start:
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_obj_once(&l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0, &l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0_once, _init_l_Lean_instMonadAlwaysExceptEIO___redArg___closed__0);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT___redArg(lean_object* v_inst_1167_, lean_object* v_always_1168_){
_start:
{
lean_object* v___f_1169_; lean_object* v___f_1170_; lean_object* v___x_1171_; 
lean_inc_ref(v_always_1168_);
v___f_1169_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__1), 5, 2);
lean_closure_set(v___f_1169_, 0, v_always_1168_);
lean_closure_set(v___f_1169_, 1, v_inst_1167_);
v___f_1170_ = lean_alloc_closure((void*)(l_StateT_instMonadExceptOf___redArg___lam__3), 5, 1);
lean_closure_set(v___f_1170_, 0, v_always_1168_);
v___x_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1171_, 0, v___f_1169_);
lean_ctor_set(v___x_1171_, 1, v___f_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateT(lean_object* v_m_1172_, lean_object* v_inst_1173_, lean_object* v_00_u03b5_1174_, lean_object* v_00_u03c3_1175_, lean_object* v_always_1176_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = l_Lean_instMonadAlwaysExceptStateT___redArg(v_inst_1173_, v_always_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(lean_object* v_always_1178_){
_start:
{
lean_object* v___f_1179_; lean_object* v___f_1180_; lean_object* v___x_1181_; 
lean_inc_ref(v_always_1178_);
v___f_1179_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1179_, 0, v_always_1178_);
v___f_1180_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1180_, 0, v_always_1178_);
v___x_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___f_1179_);
lean_ctor_set(v___x_1181_, 1, v___f_1180_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptStateRefT_x27(lean_object* v_m_1182_, lean_object* v_00_u03b5_1183_, lean_object* v_00_u03c9_1184_, lean_object* v_00_u03c3_1185_, lean_object* v_always_1186_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = l_Lean_instMonadAlwaysExceptStateRefT_x27___redArg(v_always_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT___redArg(lean_object* v_always_1188_){
_start:
{
lean_object* v___f_1189_; lean_object* v___f_1190_; lean_object* v___x_1191_; 
lean_inc_ref(v_always_1188_);
v___f_1189_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1189_, 0, v_always_1188_);
v___f_1190_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_1190_, 0, v_always_1188_);
v___x_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___f_1189_);
lean_ctor_set(v___x_1191_, 1, v___f_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptReaderT(lean_object* v_m_1192_, lean_object* v_00_u03b5_1193_, lean_object* v_00_u03c1_1194_, lean_object* v_always_1195_){
_start:
{
lean_object* v___x_1196_; 
v___x_1196_ = l_Lean_instMonadAlwaysExceptReaderT___redArg(v_always_1195_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT___redArg(lean_object* v_always_1197_, lean_object* v_inst_1198_, lean_object* v_inst_1199_, lean_object* v_inst_1200_){
_start:
{
lean_object* v___x_1201_; 
v___x_1201_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg(v_inst_1198_, v_inst_1199_, v_inst_1200_, v_always_1197_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_instMonadAlwaysExceptMonadCacheT(lean_object* v_00_u03b1_1202_, lean_object* v_m_1203_, lean_object* v_00_u03b5_1204_, lean_object* v_00_u03c9_1205_, lean_object* v_00_u03b2_1206_, lean_object* v_always_1207_, lean_object* v_inst_1208_, lean_object* v_inst_1209_, lean_object* v_inst_1210_){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Lean_MonadCacheT_instMonadExceptOf___redArg(v_inst_1208_, v_inst_1209_, v_inst_1210_, v_always_1207_);
return v___x_1211_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultBool___redArg___lam__0(lean_object* v_x_1218_){
_start:
{
if (lean_obj_tag(v_x_1218_) == 0)
{
uint8_t v___x_1219_; 
v___x_1219_ = 2;
return v___x_1219_;
}
else
{
lean_object* v_a_1220_; uint8_t v___x_1221_; 
v_a_1220_ = lean_ctor_get(v_x_1218_, 0);
v___x_1221_ = lean_unbox(v_a_1220_);
if (v___x_1221_ == 0)
{
uint8_t v___x_1222_; 
v___x_1222_ = 1;
return v___x_1222_;
}
else
{
uint8_t v___x_1223_; 
v___x_1223_ = 0;
return v___x_1223_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___lam__0___boxed(lean_object* v_x_1224_){
_start:
{
uint8_t v_res_1225_; lean_object* v_r_1226_; 
v_res_1225_ = l_Lean_instExceptToTraceResultBool___redArg___lam__0(v_x_1224_);
lean_dec_ref(v_x_1224_);
v_r_1226_ = lean_box(v_res_1225_);
return v_r_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg(){
_start:
{
lean_object* v___f_1229_; 
v___f_1229_ = ((lean_object*)(l_Lean_instExceptToTraceResultBool___redArg___closed__0));
return v___f_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool___redArg___boxed(lean_object* v___dummy_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lean_instExceptToTraceResultBool___redArg();
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultBool(lean_object* v_00_u03b5_1232_){
_start:
{
lean_object* v___f_1233_; 
v___f_1233_ = ((lean_object*)(l_Lean_instExceptToTraceResultBool___redArg___closed__0));
return v___f_1233_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultOption___redArg___lam__0(lean_object* v_x_1234_){
_start:
{
if (lean_obj_tag(v_x_1234_) == 0)
{
uint8_t v___x_1235_; 
v___x_1235_ = 2;
return v___x_1235_;
}
else
{
lean_object* v_a_1236_; 
v_a_1236_ = lean_ctor_get(v_x_1234_, 0);
if (lean_obj_tag(v_a_1236_) == 0)
{
uint8_t v___x_1237_; 
v___x_1237_ = 1;
return v___x_1237_;
}
else
{
uint8_t v___x_1238_; 
v___x_1238_ = 0;
return v___x_1238_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___lam__0___boxed(lean_object* v_x_1239_){
_start:
{
uint8_t v_res_1240_; lean_object* v_r_1241_; 
v_res_1240_ = l_Lean_instExceptToTraceResultOption___redArg___lam__0(v_x_1239_);
lean_dec_ref(v_x_1239_);
v_r_1241_ = lean_box(v_res_1240_);
return v_r_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg(){
_start:
{
lean_object* v___f_1244_; 
v___f_1244_ = ((lean_object*)(l_Lean_instExceptToTraceResultOption___redArg___closed__0));
return v___f_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption___redArg___boxed(lean_object* v___dummy_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_instExceptToTraceResultOption___redArg();
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultOption(lean_object* v_00_u03b1_1247_, lean_object* v_00_u03b5_1248_){
_start:
{
lean_object* v___f_1249_; 
v___f_1249_ = ((lean_object*)(l_Lean_instExceptToTraceResultOption___redArg___closed__0));
return v___f_1249_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResultExpr___redArg___lam__0(lean_object* v_x_1250_){
_start:
{
if (lean_obj_tag(v_x_1250_) == 0)
{
uint8_t v___x_1251_; 
v___x_1251_ = 2;
return v___x_1251_;
}
else
{
lean_object* v_a_1252_; uint8_t v___x_1253_; 
v_a_1252_ = lean_ctor_get(v_x_1250_, 0);
v___x_1253_ = l_Lean_Expr_hasSyntheticSorry(v_a_1252_);
if (v___x_1253_ == 0)
{
uint8_t v___x_1254_; 
v___x_1254_ = 0;
return v___x_1254_;
}
else
{
uint8_t v___x_1255_; 
v___x_1255_ = 1;
return v___x_1255_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___lam__0___boxed(lean_object* v_x_1256_){
_start:
{
uint8_t v_res_1257_; lean_object* v_r_1258_; 
v_res_1257_ = l_Lean_instExceptToTraceResultExpr___redArg___lam__0(v_x_1256_);
lean_dec_ref(v_x_1256_);
v_r_1258_ = lean_box(v_res_1257_);
return v_r_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg(){
_start:
{
lean_object* v___f_1261_; 
v___f_1261_ = ((lean_object*)(l_Lean_instExceptToTraceResultExpr___redArg___closed__0));
return v___f_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr___redArg___boxed(lean_object* v___dummy_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l_Lean_instExceptToTraceResultExpr___redArg();
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResultExpr(lean_object* v_00_u03b5_1264_){
_start:
{
lean_object* v___f_1265_; 
v___f_1265_ = ((lean_object*)(l_Lean_instExceptToTraceResultExpr___redArg___closed__0));
return v___f_1265_;
}
}
LEAN_EXPORT uint8_t l_Lean_instExceptToTraceResult___redArg___lam__0(lean_object* v_x_1266_){
_start:
{
if (lean_obj_tag(v_x_1266_) == 0)
{
uint8_t v___x_1267_; 
v___x_1267_ = 2;
return v___x_1267_;
}
else
{
uint8_t v___x_1268_; 
v___x_1268_ = 0;
return v___x_1268_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___lam__0___boxed(lean_object* v_x_1269_){
_start:
{
uint8_t v_res_1270_; lean_object* v_r_1271_; 
v_res_1270_ = l_Lean_instExceptToTraceResult___redArg___lam__0(v_x_1269_);
lean_dec_ref(v_x_1269_);
v_r_1271_ = lean_box(v_res_1270_);
return v_r_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg(){
_start:
{
lean_object* v___f_1274_; 
v___f_1274_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
return v___f_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult___redArg___boxed(lean_object* v___dummy_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_Lean_instExceptToTraceResult___redArg();
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_instExceptToTraceResult(lean_object* v_00_u03b1_1277_, lean_object* v_00_u03b5_1278_){
_start:
{
lean_object* v___f_1279_; 
v___f_1279_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
return v___f_1279_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___redArg(lean_object* v_inst_1280_, lean_object* v_e_1281_){
_start:
{
lean_object* v___x_1282_; uint8_t v___x_1283_; 
v___x_1282_ = lean_apply_1(v_inst_1280_, v_e_1281_);
v___x_1283_ = lean_unbox(v___x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___redArg___boxed(lean_object* v_inst_1284_, lean_object* v_e_1285_){
_start:
{
uint8_t v_res_1286_; lean_object* v_r_1287_; 
v_res_1286_ = l_Lean_Except_toTraceResult___redArg(v_inst_1284_, v_e_1285_);
v_r_1287_ = lean_box(v_res_1286_);
return v_r_1287_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult(lean_object* v_00_u03b1_1288_, lean_object* v_00_u03b5_1289_, lean_object* v_inst_1290_, lean_object* v_e_1291_){
_start:
{
lean_object* v___x_1292_; uint8_t v___x_1293_; 
v___x_1292_ = lean_apply_1(v_inst_1290_, v_e_1291_);
v___x_1293_ = lean_unbox(v___x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___boxed(lean_object* v_00_u03b1_1294_, lean_object* v_00_u03b5_1295_, lean_object* v_inst_1296_, lean_object* v_e_1297_){
_start:
{
uint8_t v_res_1298_; lean_object* v_r_1299_; 
v_res_1298_ = l_Lean_Except_toTraceResult(v_00_u03b1_1294_, v_00_u03b5_1295_, v_inst_1296_, v_e_1297_);
v_r_1299_ = lean_box(v_res_1298_);
return v_r_1299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0(lean_object* v_oldTraces_1300_, lean_object* v_s_1301_){
_start:
{
uint64_t v_tid_1302_; lean_object* v_traces_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1311_; 
v_tid_1302_ = lean_ctor_get_uint64(v_s_1301_, sizeof(void*)*1);
v_traces_1303_ = lean_ctor_get(v_s_1301_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_s_1301_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1305_ = v_s_1301_;
v_isShared_1306_ = v_isSharedCheck_1311_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_traces_1303_);
lean_dec(v_s_1301_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1311_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1307_; lean_object* v___x_1309_; 
v___x_1307_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1300_, v_traces_1303_);
lean_dec_ref(v_traces_1303_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 0, v___x_1307_);
v___x_1309_ = v___x_1305_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v___x_1307_);
lean_ctor_set_uint64(v_reuseFailAlloc_1310_, sizeof(void*)*1, v_tid_1302_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1313_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__0));
v___x_1314_ = l_Lean_stringToMessageData(v___x_1313_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1(lean_object* v_toPure_1315_, lean_object* v_x_1316_){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___closed__1);
v___x_1318_ = lean_apply_2(v_toPure_1315_, lean_box(0), v___x_1317_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___boxed(lean_object* v_toPure_1319_, lean_object* v_x_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1(v_toPure_1319_, v_x_1320_);
lean_dec(v_x_1320_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2(lean_object* v_inst_1322_, lean_object* v___x_1323_, lean_object* v_fst_1324_, lean_object* v_____r_1325_){
_start:
{
lean_object* v___x_1326_; 
v___x_1326_ = l_MonadExcept_ofExcept___redArg(v_inst_1322_, v___x_1323_, v_fst_1324_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4(lean_object* v_inst_1327_, lean_object* v_inst_1328_, lean_object* v_inst_1329_, lean_object* v_inst_1330_, lean_object* v_oldTraces_1331_, lean_object* v_ref_1332_, lean_object* v_toBind_1333_, lean_object* v___f_1334_, lean_object* v_inst_1335_, lean_object* v_fst_1336_, lean_object* v_cls_1337_, uint8_t v_collapsed_1338_, lean_object* v_tag_1339_, lean_object* v___x_1340_, double v_fst_1341_, double v_snd_1342_, lean_object* v_m_1343_){
_start:
{
lean_object* v_data_1345_; lean_object* v_result_1348_; lean_object* v___x_1349_; double v___x_1350_; lean_object* v_data_1351_; uint8_t v___x_1352_; 
v_result_1348_ = lean_apply_1(v_inst_1335_, v_fst_1336_);
v___x_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1349_, 0, v_result_1348_);
v___x_1350_ = lean_float_once(&l_Lean_addTrace___redArg___lam__0___closed__0, &l_Lean_addTrace___redArg___lam__0___closed__0_once, _init_l_Lean_addTrace___redArg___lam__0___closed__0);
lean_inc_ref(v_tag_1339_);
lean_inc_ref(v___x_1349_);
lean_inc(v_cls_1337_);
v_data_1351_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1351_, 0, v_cls_1337_);
lean_ctor_set(v_data_1351_, 1, v___x_1349_);
lean_ctor_set(v_data_1351_, 2, v_tag_1339_);
lean_ctor_set_float(v_data_1351_, sizeof(void*)*3, v___x_1350_);
lean_ctor_set_float(v_data_1351_, sizeof(void*)*3 + 8, v___x_1350_);
lean_ctor_set_uint8(v_data_1351_, sizeof(void*)*3 + 16, v_collapsed_1338_);
v___x_1352_ = lean_unbox(v___x_1340_);
if (v___x_1352_ == 0)
{
lean_dec_ref_known(v___x_1349_, 1);
lean_dec_ref(v_tag_1339_);
lean_dec(v_cls_1337_);
v_data_1345_ = v_data_1351_;
goto v___jp_1344_;
}
else
{
lean_object* v_data_1353_; 
lean_dec_ref_known(v_data_1351_, 3);
v_data_1353_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1353_, 0, v_cls_1337_);
lean_ctor_set(v_data_1353_, 1, v___x_1349_);
lean_ctor_set(v_data_1353_, 2, v_tag_1339_);
lean_ctor_set_float(v_data_1353_, sizeof(void*)*3, v_fst_1341_);
lean_ctor_set_float(v_data_1353_, sizeof(void*)*3 + 8, v_snd_1342_);
lean_ctor_set_uint8(v_data_1353_, sizeof(void*)*3 + 16, v_collapsed_1338_);
v_data_1345_ = v_data_1353_;
goto v___jp_1344_;
}
v___jp_1344_:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1346_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(v_inst_1327_, v_inst_1328_, v_inst_1329_, v_inst_1330_, v_oldTraces_1331_, v_data_1345_, v_ref_1332_, v_m_1343_);
v___x_1347_ = lean_apply_4(v_toBind_1333_, lean_box(0), lean_box(0), v___x_1346_, v___f_1334_);
return v___x_1347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_inst_1354_ = _args[0];
lean_object* v_inst_1355_ = _args[1];
lean_object* v_inst_1356_ = _args[2];
lean_object* v_inst_1357_ = _args[3];
lean_object* v_oldTraces_1358_ = _args[4];
lean_object* v_ref_1359_ = _args[5];
lean_object* v_toBind_1360_ = _args[6];
lean_object* v___f_1361_ = _args[7];
lean_object* v_inst_1362_ = _args[8];
lean_object* v_fst_1363_ = _args[9];
lean_object* v_cls_1364_ = _args[10];
lean_object* v_collapsed_1365_ = _args[11];
lean_object* v_tag_1366_ = _args[12];
lean_object* v___x_1367_ = _args[13];
lean_object* v_fst_1368_ = _args[14];
lean_object* v_snd_1369_ = _args[15];
lean_object* v_m_1370_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1371_; double v_fst_456__boxed_1372_; double v_snd_457__boxed_1373_; lean_object* v_res_1374_; 
v_collapsed_boxed_1371_ = lean_unbox(v_collapsed_1365_);
v_fst_456__boxed_1372_ = lean_unbox_float(v_fst_1368_);
lean_dec_ref(v_fst_1368_);
v_snd_457__boxed_1373_ = lean_unbox_float(v_snd_1369_);
lean_dec_ref(v_snd_1369_);
v_res_1374_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4(v_inst_1354_, v_inst_1355_, v_inst_1356_, v_inst_1357_, v_oldTraces_1358_, v_ref_1359_, v_toBind_1360_, v___f_1361_, v_inst_1362_, v_fst_1363_, v_cls_1364_, v_collapsed_boxed_1371_, v_tag_1366_, v___x_1367_, v_fst_456__boxed_1372_, v_snd_457__boxed_1373_, v_m_1370_);
lean_dec(v___x_1367_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3(lean_object* v_always_1375_, lean_object* v_inst_1376_, lean_object* v_inst_1377_, lean_object* v_inst_1378_, lean_object* v_inst_1379_, lean_object* v_oldTraces_1380_, lean_object* v_toBind_1381_, lean_object* v___f_1382_, lean_object* v_inst_1383_, lean_object* v_fst_1384_, lean_object* v_cls_1385_, uint8_t v_collapsed_1386_, lean_object* v_tag_1387_, lean_object* v___x_1388_, double v_fst_1389_, double v_snd_1390_, lean_object* v_msg_1391_, lean_object* v___f_1392_, lean_object* v_ref_1393_){
_start:
{
lean_object* v_tryCatch_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___f_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v_tryCatch_1394_ = lean_ctor_get(v_always_1375_, 1);
lean_inc(v_tryCatch_1394_);
lean_dec_ref(v_always_1375_);
v___x_1395_ = lean_box(v_collapsed_1386_);
v___x_1396_ = lean_box_float(v_fst_1389_);
v___x_1397_ = lean_box_float(v_snd_1390_);
lean_inc_ref(v_fst_1384_);
lean_inc(v_toBind_1381_);
v___f_1398_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__4___boxed), 17, 16);
lean_closure_set(v___f_1398_, 0, v_inst_1376_);
lean_closure_set(v___f_1398_, 1, v_inst_1377_);
lean_closure_set(v___f_1398_, 2, v_inst_1378_);
lean_closure_set(v___f_1398_, 3, v_inst_1379_);
lean_closure_set(v___f_1398_, 4, v_oldTraces_1380_);
lean_closure_set(v___f_1398_, 5, v_ref_1393_);
lean_closure_set(v___f_1398_, 6, v_toBind_1381_);
lean_closure_set(v___f_1398_, 7, v___f_1382_);
lean_closure_set(v___f_1398_, 8, v_inst_1383_);
lean_closure_set(v___f_1398_, 9, v_fst_1384_);
lean_closure_set(v___f_1398_, 10, v_cls_1385_);
lean_closure_set(v___f_1398_, 11, v___x_1395_);
lean_closure_set(v___f_1398_, 12, v_tag_1387_);
lean_closure_set(v___f_1398_, 13, v___x_1388_);
lean_closure_set(v___f_1398_, 14, v___x_1396_);
lean_closure_set(v___f_1398_, 15, v___x_1397_);
v___x_1399_ = lean_apply_1(v_msg_1391_, v_fst_1384_);
v___x_1400_ = lean_apply_3(v_tryCatch_1394_, lean_box(0), v___x_1399_, v___f_1392_);
v___x_1401_ = lean_apply_4(v_toBind_1381_, lean_box(0), lean_box(0), v___x_1400_, v___f_1398_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_always_1402_ = _args[0];
lean_object* v_inst_1403_ = _args[1];
lean_object* v_inst_1404_ = _args[2];
lean_object* v_inst_1405_ = _args[3];
lean_object* v_inst_1406_ = _args[4];
lean_object* v_oldTraces_1407_ = _args[5];
lean_object* v_toBind_1408_ = _args[6];
lean_object* v___f_1409_ = _args[7];
lean_object* v_inst_1410_ = _args[8];
lean_object* v_fst_1411_ = _args[9];
lean_object* v_cls_1412_ = _args[10];
lean_object* v_collapsed_1413_ = _args[11];
lean_object* v_tag_1414_ = _args[12];
lean_object* v___x_1415_ = _args[13];
lean_object* v_fst_1416_ = _args[14];
lean_object* v_snd_1417_ = _args[15];
lean_object* v_msg_1418_ = _args[16];
lean_object* v___f_1419_ = _args[17];
lean_object* v_ref_1420_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_1421_; double v_fst_499__boxed_1422_; double v_snd_500__boxed_1423_; lean_object* v_res_1424_; 
v_collapsed_boxed_1421_ = lean_unbox(v_collapsed_1413_);
v_fst_499__boxed_1422_ = lean_unbox_float(v_fst_1416_);
lean_dec_ref(v_fst_1416_);
v_snd_500__boxed_1423_ = lean_unbox_float(v_snd_1417_);
lean_dec_ref(v_snd_1417_);
v_res_1424_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3(v_always_1402_, v_inst_1403_, v_inst_1404_, v_inst_1405_, v_inst_1406_, v_oldTraces_1407_, v_toBind_1408_, v___f_1409_, v_inst_1410_, v_fst_1411_, v_cls_1412_, v_collapsed_boxed_1421_, v_tag_1414_, v___x_1415_, v_fst_499__boxed_1422_, v_snd_500__boxed_1423_, v_msg_1418_, v___f_1419_, v_ref_1420_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(lean_object* v_inst_1425_, lean_object* v_inst_1426_, lean_object* v_inst_1427_, lean_object* v_inst_1428_, lean_object* v_always_1429_, lean_object* v_inst_1430_, lean_object* v_cls_1431_, uint8_t v_collapsed_1432_, lean_object* v_tag_1433_, lean_object* v_opts_1434_, uint8_t v_clsEnabled_1435_, lean_object* v_oldTraces_1436_, lean_object* v_msg_1437_, lean_object* v_resStartStop_1438_){
_start:
{
lean_object* v___x_1439_; lean_object* v_toApplicative_1440_; lean_object* v_toBind_1441_; lean_object* v___x_1442_; lean_object* v_snd_1443_; lean_object* v_toPure_1444_; lean_object* v_fst_1445_; lean_object* v_fst_1446_; lean_object* v_snd_1447_; lean_object* v___f_1448_; lean_object* v___f_1449_; lean_object* v___f_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___f_1454_; uint8_t v___y_1459_; double v___y_1464_; uint8_t v___x_1469_; 
v___x_1439_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1440_ = lean_ctor_get(v_inst_1425_, 0);
v_toBind_1441_ = lean_ctor_get(v_inst_1425_, 1);
lean_inc_n(v_toBind_1441_, 2);
lean_inc_ref(v_always_1429_);
v___x_1442_ = l_instMonadExceptOfMonadExceptOf___redArg(v_always_1429_);
v_snd_1443_ = lean_ctor_get(v_resStartStop_1438_, 1);
lean_inc(v_snd_1443_);
v_toPure_1444_ = lean_ctor_get(v_toApplicative_1440_, 1);
v_fst_1445_ = lean_ctor_get(v_resStartStop_1438_, 0);
lean_inc_n(v_fst_1445_, 2);
lean_dec_ref(v_resStartStop_1438_);
v_fst_1446_ = lean_ctor_get(v_snd_1443_, 0);
lean_inc_n(v_fst_1446_, 2);
v_snd_1447_ = lean_ctor_get(v_snd_1443_, 1);
lean_inc_n(v_snd_1447_, 2);
lean_dec(v_snd_1443_);
lean_inc_ref(v_oldTraces_1436_);
v___f_1448_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1448_, 0, v_oldTraces_1436_);
lean_inc(v_toPure_1444_);
v___f_1449_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1449_, 0, v_toPure_1444_);
lean_inc_ref(v_inst_1425_);
v___f_1450_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1450_, 0, v_inst_1425_);
lean_closure_set(v___f_1450_, 1, v___x_1442_);
lean_closure_set(v___f_1450_, 2, v_fst_1445_);
v___x_1451_ = l_Lean_trace_profiler;
v___x_1452_ = l_Lean_Option_get___redArg(v___x_1439_, v_opts_1434_, v___x_1451_);
v___x_1453_ = lean_box(v_collapsed_1432_);
lean_inc(v___x_1452_);
lean_inc_ref(v___f_1450_);
lean_inc_ref(v_inst_1427_);
lean_inc_ref(v_inst_1426_);
v___f_1454_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__3___boxed), 19, 18);
lean_closure_set(v___f_1454_, 0, v_always_1429_);
lean_closure_set(v___f_1454_, 1, v_inst_1425_);
lean_closure_set(v___f_1454_, 2, v_inst_1426_);
lean_closure_set(v___f_1454_, 3, v_inst_1427_);
lean_closure_set(v___f_1454_, 4, v_inst_1428_);
lean_closure_set(v___f_1454_, 5, v_oldTraces_1436_);
lean_closure_set(v___f_1454_, 6, v_toBind_1441_);
lean_closure_set(v___f_1454_, 7, v___f_1450_);
lean_closure_set(v___f_1454_, 8, v_inst_1430_);
lean_closure_set(v___f_1454_, 9, v_fst_1445_);
lean_closure_set(v___f_1454_, 10, v_cls_1431_);
lean_closure_set(v___f_1454_, 11, v___x_1453_);
lean_closure_set(v___f_1454_, 12, v_tag_1433_);
lean_closure_set(v___f_1454_, 13, v___x_1452_);
lean_closure_set(v___f_1454_, 14, v_fst_1446_);
lean_closure_set(v___f_1454_, 15, v_snd_1447_);
lean_closure_set(v___f_1454_, 16, v_msg_1437_);
lean_closure_set(v___f_1454_, 17, v___f_1449_);
v___x_1469_ = lean_unbox(v___x_1452_);
if (v___x_1469_ == 0)
{
uint8_t v___x_1470_; 
lean_dec(v_snd_1447_);
lean_dec(v_fst_1446_);
v___x_1470_ = lean_unbox(v___x_1452_);
lean_dec(v___x_1452_);
v___y_1459_ = v___x_1470_;
goto v___jp_1458_;
}
else
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; uint8_t v___x_1474_; 
lean_dec(v___x_1452_);
v___x_1471_ = l_Lean_KVMap_instValueNat;
v___x_1472_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1473_ = l_Lean_Option_get___redArg(v___x_1439_, v_opts_1434_, v___x_1472_);
v___x_1474_ = lean_unbox(v___x_1473_);
lean_dec(v___x_1473_);
if (v___x_1474_ == 0)
{
lean_object* v___x_1475_; lean_object* v___x_1476_; double v___x_1477_; double v___x_1478_; double v___x_1479_; 
v___x_1475_ = l_Lean_trace_profiler_threshold;
v___x_1476_ = l_Lean_Option_get___redArg(v___x_1471_, v_opts_1434_, v___x_1475_);
v___x_1477_ = lean_float_of_nat(v___x_1476_);
v___x_1478_ = lean_float_once(&l_Lean_trace_profiler_threshold_unitAdjusted___closed__0, &l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once, _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0);
v___x_1479_ = lean_float_div(v___x_1477_, v___x_1478_);
v___y_1464_ = v___x_1479_;
goto v___jp_1463_;
}
else
{
lean_object* v___x_1480_; lean_object* v___x_1481_; double v___x_1482_; 
v___x_1480_ = l_Lean_trace_profiler_threshold;
v___x_1481_ = l_Lean_Option_get___redArg(v___x_1471_, v_opts_1434_, v___x_1480_);
v___x_1482_ = lean_float_of_nat(v___x_1481_);
v___y_1464_ = v___x_1482_;
goto v___jp_1463_;
}
}
v___jp_1455_:
{
lean_object* v_getRef_1456_; lean_object* v___x_1457_; 
v_getRef_1456_ = lean_ctor_get(v_inst_1427_, 0);
lean_inc(v_getRef_1456_);
lean_dec_ref(v_inst_1427_);
v___x_1457_ = lean_apply_4(v_toBind_1441_, lean_box(0), lean_box(0), v_getRef_1456_, v___f_1454_);
return v___x_1457_;
}
v___jp_1458_:
{
if (v_clsEnabled_1435_ == 0)
{
if (v___y_1459_ == 0)
{
lean_object* v_modifyTraceState_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
lean_dec_ref(v___f_1454_);
lean_dec_ref(v_inst_1427_);
v_modifyTraceState_1460_ = lean_ctor_get(v_inst_1426_, 0);
lean_inc(v_modifyTraceState_1460_);
lean_dec_ref(v_inst_1426_);
v___x_1461_ = lean_apply_1(v_modifyTraceState_1460_, v___f_1448_);
v___x_1462_ = lean_apply_4(v_toBind_1441_, lean_box(0), lean_box(0), v___x_1461_, v___f_1450_);
return v___x_1462_;
}
else
{
lean_dec_ref(v___f_1450_);
lean_dec_ref(v___f_1448_);
lean_dec_ref(v_inst_1426_);
goto v___jp_1455_;
}
}
else
{
lean_dec_ref(v___f_1450_);
lean_dec_ref(v___f_1448_);
lean_dec_ref(v_inst_1426_);
goto v___jp_1455_;
}
}
v___jp_1463_:
{
double v___x_1465_; double v___x_1466_; double v___x_1467_; uint8_t v___x_1468_; 
v___x_1465_ = lean_unbox_float(v_snd_1447_);
lean_dec(v_snd_1447_);
v___x_1466_ = lean_unbox_float(v_fst_1446_);
lean_dec(v_fst_1446_);
v___x_1467_ = lean_float_sub(v___x_1465_, v___x_1466_);
v___x_1468_ = lean_float_decLt(v___y_1464_, v___x_1467_);
v___y_1459_ = v___x_1468_;
goto v___jp_1458_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___boxed(lean_object* v_inst_1483_, lean_object* v_inst_1484_, lean_object* v_inst_1485_, lean_object* v_inst_1486_, lean_object* v_always_1487_, lean_object* v_inst_1488_, lean_object* v_cls_1489_, lean_object* v_collapsed_1490_, lean_object* v_tag_1491_, lean_object* v_opts_1492_, lean_object* v_clsEnabled_1493_, lean_object* v_oldTraces_1494_, lean_object* v_msg_1495_, lean_object* v_resStartStop_1496_){
_start:
{
uint8_t v_collapsed_boxed_1497_; uint8_t v_clsEnabled_boxed_1498_; lean_object* v_res_1499_; 
v_collapsed_boxed_1497_ = lean_unbox(v_collapsed_1490_);
v_clsEnabled_boxed_1498_ = lean_unbox(v_clsEnabled_1493_);
v_res_1499_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1483_, v_inst_1484_, v_inst_1485_, v_inst_1486_, v_always_1487_, v_inst_1488_, v_cls_1489_, v_collapsed_boxed_1497_, v_tag_1491_, v_opts_1492_, v_clsEnabled_boxed_1498_, v_oldTraces_1494_, v_msg_1495_, v_resStartStop_1496_);
lean_dec_ref(v_opts_1492_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(lean_object* v_00_u03b1_1500_, lean_object* v_m_1501_, lean_object* v_inst_1502_, lean_object* v_inst_1503_, lean_object* v_inst_1504_, lean_object* v_inst_1505_, lean_object* v_00_u03b5_1506_, lean_object* v_always_1507_, lean_object* v_inst_1508_, lean_object* v_cls_1509_, uint8_t v_collapsed_1510_, lean_object* v_tag_1511_, lean_object* v_opts_1512_, uint8_t v_clsEnabled_1513_, lean_object* v_oldTraces_1514_, lean_object* v_msg_1515_, lean_object* v_resStartStop_1516_){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1502_, v_inst_1503_, v_inst_1504_, v_inst_1505_, v_always_1507_, v_inst_1508_, v_cls_1509_, v_collapsed_1510_, v_tag_1511_, v_opts_1512_, v_clsEnabled_1513_, v_oldTraces_1514_, v_msg_1515_, v_resStartStop_1516_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___boxed(lean_object** _args){
lean_object* v_00_u03b1_1518_ = _args[0];
lean_object* v_m_1519_ = _args[1];
lean_object* v_inst_1520_ = _args[2];
lean_object* v_inst_1521_ = _args[3];
lean_object* v_inst_1522_ = _args[4];
lean_object* v_inst_1523_ = _args[5];
lean_object* v_00_u03b5_1524_ = _args[6];
lean_object* v_always_1525_ = _args[7];
lean_object* v_inst_1526_ = _args[8];
lean_object* v_cls_1527_ = _args[9];
lean_object* v_collapsed_1528_ = _args[10];
lean_object* v_tag_1529_ = _args[11];
lean_object* v_opts_1530_ = _args[12];
lean_object* v_clsEnabled_1531_ = _args[13];
lean_object* v_oldTraces_1532_ = _args[14];
lean_object* v_msg_1533_ = _args[15];
lean_object* v_resStartStop_1534_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1535_; uint8_t v_clsEnabled_boxed_1536_; lean_object* v_res_1537_; 
v_collapsed_boxed_1535_ = lean_unbox(v_collapsed_1528_);
v_clsEnabled_boxed_1536_ = lean_unbox(v_clsEnabled_1531_);
v_res_1537_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback(v_00_u03b1_1518_, v_m_1519_, v_inst_1520_, v_inst_1521_, v_inst_1522_, v_inst_1523_, v_00_u03b5_1524_, v_always_1525_, v_inst_1526_, v_cls_1527_, v_collapsed_boxed_1535_, v_tag_1529_, v_opts_1530_, v_clsEnabled_boxed_1536_, v_oldTraces_1532_, v_msg_1533_, v_resStartStop_1534_);
lean_dec_ref(v_opts_1530_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0(lean_object* v_inst_1538_, lean_object* v_inst_1539_, lean_object* v_inst_1540_, lean_object* v_inst_1541_, lean_object* v_always_1542_, lean_object* v_inst_1543_, lean_object* v_cls_1544_, uint8_t v_collapsed_1545_, lean_object* v_tag_1546_, lean_object* v_opts_1547_, uint8_t v_clsEnabled_1548_, lean_object* v_oldTraces_1549_, lean_object* v_msg_1550_, lean_object* v_resStartStop_1551_){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1538_, v_inst_1539_, v_inst_1540_, v_inst_1541_, v_always_1542_, v_inst_1543_, v_cls_1544_, v_collapsed_1545_, v_tag_1546_, v_opts_1547_, v_clsEnabled_1548_, v_oldTraces_1549_, v_msg_1550_, v_resStartStop_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__0___boxed(lean_object* v_inst_1553_, lean_object* v_inst_1554_, lean_object* v_inst_1555_, lean_object* v_inst_1556_, lean_object* v_always_1557_, lean_object* v_inst_1558_, lean_object* v_cls_1559_, lean_object* v_collapsed_1560_, lean_object* v_tag_1561_, lean_object* v_opts_1562_, lean_object* v_clsEnabled_1563_, lean_object* v_oldTraces_1564_, lean_object* v_msg_1565_, lean_object* v_resStartStop_1566_){
_start:
{
uint8_t v_collapsed_boxed_1567_; uint8_t v_clsEnabled_boxed_1568_; lean_object* v_res_1569_; 
v_collapsed_boxed_1567_ = lean_unbox(v_collapsed_1560_);
v_clsEnabled_boxed_1568_ = lean_unbox(v_clsEnabled_1563_);
v_res_1569_ = l_Lean_withTraceNode___redArg___lam__0(v_inst_1553_, v_inst_1554_, v_inst_1555_, v_inst_1556_, v_always_1557_, v_inst_1558_, v_cls_1559_, v_collapsed_boxed_1567_, v_tag_1561_, v_opts_1562_, v_clsEnabled_boxed_1568_, v_oldTraces_1564_, v_msg_1565_, v_resStartStop_1566_);
lean_dec_ref(v_opts_1562_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__1(lean_object* v_toPure_1570_, lean_object* v_ex_1571_){
_start:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1572_, 0, v_ex_1571_);
v___x_1573_ = lean_apply_2(v_toPure_1570_, lean_box(0), v___x_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__2(lean_object* v_toPure_1574_, lean_object* v_a_1575_){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1576_, 0, v_a_1575_);
v___x_1577_ = lean_apply_2(v_toPure_1574_, lean_box(0), v___x_1576_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__3(lean_object* v_start_1578_, lean_object* v_a_1579_, lean_object* v_toPure_1580_, lean_object* v_stop_1581_){
_start:
{
double v___x_1582_; double v___x_1583_; double v___x_1584_; double v___x_1585_; double v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1582_ = lean_float_of_nat(v_start_1578_);
v___x_1583_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0, &l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0);
v___x_1584_ = lean_float_div(v___x_1582_, v___x_1583_);
v___x_1585_ = lean_float_of_nat(v_stop_1581_);
v___x_1586_ = lean_float_div(v___x_1585_, v___x_1583_);
v___x_1587_ = lean_box_float(v___x_1584_);
v___x_1588_ = lean_box_float(v___x_1586_);
v___x_1589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1587_);
lean_ctor_set(v___x_1589_, 1, v___x_1588_);
v___x_1590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1590_, 0, v_a_1579_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
v___x_1591_ = lean_apply_2(v_toPure_1580_, lean_box(0), v___x_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__4(lean_object* v_start_1592_, lean_object* v_toPure_1593_, lean_object* v_toBind_1594_, lean_object* v___x_1595_, lean_object* v_a_1596_){
_start:
{
lean_object* v___f_1597_; lean_object* v___x_1598_; 
v___f_1597_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__3), 4, 3);
lean_closure_set(v___f_1597_, 0, v_start_1592_);
lean_closure_set(v___f_1597_, 1, v_a_1596_);
lean_closure_set(v___f_1597_, 2, v_toPure_1593_);
v___x_1598_ = lean_apply_4(v_toBind_1594_, lean_box(0), lean_box(0), v___x_1595_, v___f_1597_);
return v___x_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__5(lean_object* v_toPure_1599_, lean_object* v_toBind_1600_, lean_object* v___x_1601_, lean_object* v___x_1602_, lean_object* v_start_1603_){
_start:
{
lean_object* v___f_1604_; lean_object* v___x_1605_; 
lean_inc(v_toBind_1600_);
v___f_1604_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1604_, 0, v_start_1603_);
lean_closure_set(v___f_1604_, 1, v_toPure_1599_);
lean_closure_set(v___f_1604_, 2, v_toBind_1600_);
lean_closure_set(v___f_1604_, 3, v___x_1601_);
v___x_1605_ = lean_apply_4(v_toBind_1600_, lean_box(0), lean_box(0), v___x_1602_, v___f_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__6(lean_object* v_start_1606_, lean_object* v_a_1607_, lean_object* v_toPure_1608_, lean_object* v_stop_1609_){
_start:
{
double v___x_1610_; double v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1610_ = lean_float_of_nat(v_start_1606_);
v___x_1611_ = lean_float_of_nat(v_stop_1609_);
v___x_1612_ = lean_box_float(v___x_1610_);
v___x_1613_ = lean_box_float(v___x_1611_);
v___x_1614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1612_);
lean_ctor_set(v___x_1614_, 1, v___x_1613_);
v___x_1615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1615_, 0, v_a_1607_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
v___x_1616_ = lean_apply_2(v_toPure_1608_, lean_box(0), v___x_1615_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__7(lean_object* v_start_1617_, lean_object* v_toPure_1618_, lean_object* v_toBind_1619_, lean_object* v___x_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v___f_1622_; lean_object* v___x_1623_; 
v___f_1622_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__6), 4, 3);
lean_closure_set(v___f_1622_, 0, v_start_1617_);
lean_closure_set(v___f_1622_, 1, v_a_1621_);
lean_closure_set(v___f_1622_, 2, v_toPure_1618_);
v___x_1623_ = lean_apply_4(v_toBind_1619_, lean_box(0), lean_box(0), v___x_1620_, v___f_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__8(lean_object* v_toPure_1624_, lean_object* v_toBind_1625_, lean_object* v___x_1626_, lean_object* v___x_1627_, lean_object* v_start_1628_){
_start:
{
lean_object* v___f_1629_; lean_object* v___x_1630_; 
lean_inc(v_toBind_1625_);
v___f_1629_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__7), 5, 4);
lean_closure_set(v___f_1629_, 0, v_start_1628_);
lean_closure_set(v___f_1629_, 1, v_toPure_1624_);
lean_closure_set(v___f_1629_, 2, v_toBind_1625_);
lean_closure_set(v___f_1629_, 3, v___x_1626_);
v___x_1630_ = lean_apply_4(v_toBind_1625_, lean_box(0), lean_box(0), v___x_1627_, v___f_1629_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9(lean_object* v_always_1631_, lean_object* v_inst_1632_, lean_object* v_inst_1633_, lean_object* v_inst_1634_, lean_object* v_inst_1635_, lean_object* v_inst_1636_, lean_object* v_cls_1637_, uint8_t v_collapsed_1638_, lean_object* v_tag_1639_, lean_object* v_opts_1640_, uint8_t v_clsEnabled_1641_, lean_object* v_msg_1642_, lean_object* v_toPure_1643_, lean_object* v_toBind_1644_, lean_object* v_k_1645_, lean_object* v___x_1646_, lean_object* v_inst_1647_, lean_object* v_oldTraces_1648_){
_start:
{
lean_object* v_tryCatch_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___f_1652_; lean_object* v___f_1653_; lean_object* v___f_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; uint8_t v___x_1659_; 
v_tryCatch_1649_ = lean_ctor_get(v_always_1631_, 1);
lean_inc(v_tryCatch_1649_);
v___x_1650_ = lean_box(v_collapsed_1638_);
v___x_1651_ = lean_box(v_clsEnabled_1641_);
lean_inc_ref(v_opts_1640_);
v___f_1652_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__0___boxed), 14, 13);
lean_closure_set(v___f_1652_, 0, v_inst_1632_);
lean_closure_set(v___f_1652_, 1, v_inst_1633_);
lean_closure_set(v___f_1652_, 2, v_inst_1634_);
lean_closure_set(v___f_1652_, 3, v_inst_1635_);
lean_closure_set(v___f_1652_, 4, v_always_1631_);
lean_closure_set(v___f_1652_, 5, v_inst_1636_);
lean_closure_set(v___f_1652_, 6, v_cls_1637_);
lean_closure_set(v___f_1652_, 7, v___x_1650_);
lean_closure_set(v___f_1652_, 8, v_tag_1639_);
lean_closure_set(v___f_1652_, 9, v_opts_1640_);
lean_closure_set(v___f_1652_, 10, v___x_1651_);
lean_closure_set(v___f_1652_, 11, v_oldTraces_1648_);
lean_closure_set(v___f_1652_, 12, v_msg_1642_);
lean_inc_n(v_toPure_1643_, 2);
v___f_1653_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1653_, 0, v_toPure_1643_);
v___f_1654_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1654_, 0, v_toPure_1643_);
lean_inc(v_toBind_1644_);
v___x_1655_ = lean_apply_4(v_toBind_1644_, lean_box(0), lean_box(0), v_k_1645_, v___f_1654_);
v___x_1656_ = lean_apply_3(v_tryCatch_1649_, lean_box(0), v___x_1655_, v___f_1653_);
v___x_1657_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1658_ = l_Lean_Option_get___redArg(v___x_1646_, v_opts_1640_, v___x_1657_);
lean_dec_ref(v_opts_1640_);
v___x_1659_ = lean_unbox(v___x_1658_);
lean_dec(v___x_1658_);
if (v___x_1659_ == 0)
{
lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___f_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v___x_1660_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1661_ = lean_apply_2(v_inst_1647_, lean_box(0), v___x_1660_);
lean_inc(v___x_1661_);
lean_inc_n(v_toBind_1644_, 2);
v___f_1662_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1662_, 0, v_toPure_1643_);
lean_closure_set(v___f_1662_, 1, v_toBind_1644_);
lean_closure_set(v___f_1662_, 2, v___x_1661_);
lean_closure_set(v___f_1662_, 3, v___x_1656_);
v___x_1663_ = lean_apply_4(v_toBind_1644_, lean_box(0), lean_box(0), v___x_1661_, v___f_1662_);
v___x_1664_ = lean_apply_4(v_toBind_1644_, lean_box(0), lean_box(0), v___x_1663_, v___f_1652_);
return v___x_1664_;
}
else
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___f_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1665_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_1666_ = lean_apply_2(v_inst_1647_, lean_box(0), v___x_1665_);
lean_inc(v___x_1666_);
lean_inc_n(v_toBind_1644_, 2);
v___f_1667_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__8), 5, 4);
lean_closure_set(v___f_1667_, 0, v_toPure_1643_);
lean_closure_set(v___f_1667_, 1, v_toBind_1644_);
lean_closure_set(v___f_1667_, 2, v___x_1666_);
lean_closure_set(v___f_1667_, 3, v___x_1656_);
v___x_1668_ = lean_apply_4(v_toBind_1644_, lean_box(0), lean_box(0), v___x_1666_, v___f_1667_);
v___x_1669_ = lean_apply_4(v_toBind_1644_, lean_box(0), lean_box(0), v___x_1668_, v___f_1652_);
return v___x_1669_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__9___boxed(lean_object** _args){
lean_object* v_always_1670_ = _args[0];
lean_object* v_inst_1671_ = _args[1];
lean_object* v_inst_1672_ = _args[2];
lean_object* v_inst_1673_ = _args[3];
lean_object* v_inst_1674_ = _args[4];
lean_object* v_inst_1675_ = _args[5];
lean_object* v_cls_1676_ = _args[6];
lean_object* v_collapsed_1677_ = _args[7];
lean_object* v_tag_1678_ = _args[8];
lean_object* v_opts_1679_ = _args[9];
lean_object* v_clsEnabled_1680_ = _args[10];
lean_object* v_msg_1681_ = _args[11];
lean_object* v_toPure_1682_ = _args[12];
lean_object* v_toBind_1683_ = _args[13];
lean_object* v_k_1684_ = _args[14];
lean_object* v___x_1685_ = _args[15];
lean_object* v_inst_1686_ = _args[16];
lean_object* v_oldTraces_1687_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_1688_; uint8_t v_clsEnabled_boxed_1689_; lean_object* v_res_1690_; 
v_collapsed_boxed_1688_ = lean_unbox(v_collapsed_1677_);
v_clsEnabled_boxed_1689_ = lean_unbox(v_clsEnabled_1680_);
v_res_1690_ = l_Lean_withTraceNode___redArg___lam__9(v_always_1670_, v_inst_1671_, v_inst_1672_, v_inst_1673_, v_inst_1674_, v_inst_1675_, v_cls_1676_, v_collapsed_boxed_1688_, v_tag_1678_, v_opts_1679_, v_clsEnabled_boxed_1689_, v_msg_1681_, v_toPure_1682_, v_toBind_1683_, v_k_1684_, v___x_1685_, v_inst_1686_, v_oldTraces_1687_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10(lean_object* v_always_1691_, lean_object* v_inst_1692_, lean_object* v_inst_1693_, lean_object* v_inst_1694_, lean_object* v_inst_1695_, lean_object* v_inst_1696_, lean_object* v_cls_1697_, uint8_t v_collapsed_1698_, lean_object* v_tag_1699_, lean_object* v_opts_1700_, lean_object* v_msg_1701_, lean_object* v_toPure_1702_, lean_object* v_toBind_1703_, lean_object* v_k_1704_, lean_object* v___x_1705_, lean_object* v_inst_1706_, uint8_t v_clsEnabled_1707_){
_start:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___f_1710_; 
v___x_1708_ = lean_box(v_collapsed_1698_);
v___x_1709_ = lean_box(v_clsEnabled_1707_);
lean_inc_ref(v___x_1705_);
lean_inc(v_k_1704_);
lean_inc(v_toBind_1703_);
lean_inc_ref(v_opts_1700_);
lean_inc_ref(v_inst_1693_);
lean_inc_ref(v_inst_1692_);
v___f_1710_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__9___boxed), 18, 17);
lean_closure_set(v___f_1710_, 0, v_always_1691_);
lean_closure_set(v___f_1710_, 1, v_inst_1692_);
lean_closure_set(v___f_1710_, 2, v_inst_1693_);
lean_closure_set(v___f_1710_, 3, v_inst_1694_);
lean_closure_set(v___f_1710_, 4, v_inst_1695_);
lean_closure_set(v___f_1710_, 5, v_inst_1696_);
lean_closure_set(v___f_1710_, 6, v_cls_1697_);
lean_closure_set(v___f_1710_, 7, v___x_1708_);
lean_closure_set(v___f_1710_, 8, v_tag_1699_);
lean_closure_set(v___f_1710_, 9, v_opts_1700_);
lean_closure_set(v___f_1710_, 10, v___x_1709_);
lean_closure_set(v___f_1710_, 11, v_msg_1701_);
lean_closure_set(v___f_1710_, 12, v_toPure_1702_);
lean_closure_set(v___f_1710_, 13, v_toBind_1703_);
lean_closure_set(v___f_1710_, 14, v_k_1704_);
lean_closure_set(v___f_1710_, 15, v___x_1705_);
lean_closure_set(v___f_1710_, 16, v_inst_1706_);
if (v_clsEnabled_1707_ == 0)
{
lean_object* v___x_1714_; lean_object* v___x_1715_; uint8_t v___x_1716_; 
v___x_1714_ = l_Lean_trace_profiler;
v___x_1715_ = l_Lean_Option_get___redArg(v___x_1705_, v_opts_1700_, v___x_1714_);
lean_dec_ref(v_opts_1700_);
v___x_1716_ = lean_unbox(v___x_1715_);
lean_dec(v___x_1715_);
if (v___x_1716_ == 0)
{
lean_dec_ref(v___f_1710_);
lean_dec(v_toBind_1703_);
lean_dec_ref(v_inst_1693_);
lean_dec_ref(v_inst_1692_);
return v_k_1704_;
}
else
{
lean_dec(v_k_1704_);
goto v___jp_1711_;
}
}
else
{
lean_dec_ref(v___x_1705_);
lean_dec(v_k_1704_);
lean_dec_ref(v_opts_1700_);
goto v___jp_1711_;
}
v___jp_1711_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1712_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_1692_, v_inst_1693_);
v___x_1713_ = lean_apply_4(v_toBind_1703_, lean_box(0), lean_box(0), v___x_1712_, v___f_1710_);
return v___x_1713_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__10___boxed(lean_object** _args){
lean_object* v_always_1717_ = _args[0];
lean_object* v_inst_1718_ = _args[1];
lean_object* v_inst_1719_ = _args[2];
lean_object* v_inst_1720_ = _args[3];
lean_object* v_inst_1721_ = _args[4];
lean_object* v_inst_1722_ = _args[5];
lean_object* v_cls_1723_ = _args[6];
lean_object* v_collapsed_1724_ = _args[7];
lean_object* v_tag_1725_ = _args[8];
lean_object* v_opts_1726_ = _args[9];
lean_object* v_msg_1727_ = _args[10];
lean_object* v_toPure_1728_ = _args[11];
lean_object* v_toBind_1729_ = _args[12];
lean_object* v_k_1730_ = _args[13];
lean_object* v___x_1731_ = _args[14];
lean_object* v_inst_1732_ = _args[15];
lean_object* v_clsEnabled_1733_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1734_; uint8_t v_clsEnabled_boxed_1735_; lean_object* v_res_1736_; 
v_collapsed_boxed_1734_ = lean_unbox(v_collapsed_1724_);
v_clsEnabled_boxed_1735_ = lean_unbox(v_clsEnabled_1733_);
v_res_1736_ = l_Lean_withTraceNode___redArg___lam__10(v_always_1717_, v_inst_1718_, v_inst_1719_, v_inst_1720_, v_inst_1721_, v_inst_1722_, v_cls_1723_, v_collapsed_boxed_1734_, v_tag_1725_, v_opts_1726_, v_msg_1727_, v_toPure_1728_, v_toBind_1729_, v_k_1730_, v___x_1731_, v_inst_1732_, v_clsEnabled_boxed_1735_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__12(lean_object* v_toPure_1737_, lean_object* v_cls_1738_, lean_object* v_toBind_1739_, lean_object* v_getOptionsUnrestricted_1740_, lean_object* v_____do__lift_1741_){
_start:
{
lean_object* v___f_1742_; lean_object* v___x_1743_; 
v___f_1742_ = lean_alloc_closure((void*)(l_Lean_isTracingEnabledFor___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1742_, 0, v_toPure_1737_);
lean_closure_set(v___f_1742_, 1, v_cls_1738_);
lean_closure_set(v___f_1742_, 2, v_____do__lift_1741_);
v___x_1743_ = lean_apply_4(v_toBind_1739_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_1740_, v___f_1742_);
return v___x_1743_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__11(lean_object* v_k_1744_, lean_object* v_inst_1745_, lean_object* v_toApplicative_1746_, lean_object* v_always_1747_, lean_object* v_inst_1748_, lean_object* v_inst_1749_, lean_object* v_inst_1750_, lean_object* v_inst_1751_, lean_object* v_cls_1752_, uint8_t v_collapsed_1753_, lean_object* v_tag_1754_, lean_object* v_msg_1755_, lean_object* v_toBind_1756_, lean_object* v___x_1757_, lean_object* v_inst_1758_, lean_object* v_getOptionsUnrestricted_1759_, lean_object* v_opts_1760_){
_start:
{
uint8_t v_hasTrace_1761_; 
v_hasTrace_1761_ = lean_ctor_get_uint8(v_opts_1760_, sizeof(void*)*1);
if (v_hasTrace_1761_ == 0)
{
lean_dec_ref(v_opts_1760_);
lean_dec(v_getOptionsUnrestricted_1759_);
lean_dec(v_inst_1758_);
lean_dec_ref(v___x_1757_);
lean_dec(v_toBind_1756_);
lean_dec(v_msg_1755_);
lean_dec_ref(v_tag_1754_);
lean_dec(v_cls_1752_);
lean_dec_ref(v_inst_1751_);
lean_dec(v_inst_1750_);
lean_dec_ref(v_inst_1749_);
lean_dec_ref(v_inst_1748_);
lean_dec_ref(v_always_1747_);
lean_dec_ref(v_toApplicative_1746_);
lean_dec_ref(v_inst_1745_);
return v_k_1744_;
}
else
{
lean_object* v_getInheritedTraceOptions_1762_; lean_object* v_toPure_1763_; lean_object* v___x_1764_; lean_object* v___f_1765_; lean_object* v___f_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v_getInheritedTraceOptions_1762_ = lean_ctor_get(v_inst_1745_, 2);
lean_inc(v_getInheritedTraceOptions_1762_);
v_toPure_1763_ = lean_ctor_get(v_toApplicative_1746_, 1);
lean_inc_n(v_toPure_1763_, 2);
lean_dec_ref(v_toApplicative_1746_);
v___x_1764_ = lean_box(v_collapsed_1753_);
lean_inc_n(v_toBind_1756_, 3);
lean_inc(v_cls_1752_);
v___f_1765_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__10___boxed), 17, 16);
lean_closure_set(v___f_1765_, 0, v_always_1747_);
lean_closure_set(v___f_1765_, 1, v_inst_1748_);
lean_closure_set(v___f_1765_, 2, v_inst_1745_);
lean_closure_set(v___f_1765_, 3, v_inst_1749_);
lean_closure_set(v___f_1765_, 4, v_inst_1750_);
lean_closure_set(v___f_1765_, 5, v_inst_1751_);
lean_closure_set(v___f_1765_, 6, v_cls_1752_);
lean_closure_set(v___f_1765_, 7, v___x_1764_);
lean_closure_set(v___f_1765_, 8, v_tag_1754_);
lean_closure_set(v___f_1765_, 9, v_opts_1760_);
lean_closure_set(v___f_1765_, 10, v_msg_1755_);
lean_closure_set(v___f_1765_, 11, v_toPure_1763_);
lean_closure_set(v___f_1765_, 12, v_toBind_1756_);
lean_closure_set(v___f_1765_, 13, v_k_1744_);
lean_closure_set(v___f_1765_, 14, v___x_1757_);
lean_closure_set(v___f_1765_, 15, v_inst_1758_);
v___f_1766_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__12), 5, 4);
lean_closure_set(v___f_1766_, 0, v_toPure_1763_);
lean_closure_set(v___f_1766_, 1, v_cls_1752_);
lean_closure_set(v___f_1766_, 2, v_toBind_1756_);
lean_closure_set(v___f_1766_, 3, v_getOptionsUnrestricted_1759_);
v___x_1767_ = lean_apply_4(v_toBind_1756_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_1762_, v___f_1766_);
v___x_1768_ = lean_apply_4(v_toBind_1756_, lean_box(0), lean_box(0), v___x_1767_, v___f_1765_);
return v___x_1768_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg___lam__11___boxed(lean_object** _args){
lean_object* v_k_1769_ = _args[0];
lean_object* v_inst_1770_ = _args[1];
lean_object* v_toApplicative_1771_ = _args[2];
lean_object* v_always_1772_ = _args[3];
lean_object* v_inst_1773_ = _args[4];
lean_object* v_inst_1774_ = _args[5];
lean_object* v_inst_1775_ = _args[6];
lean_object* v_inst_1776_ = _args[7];
lean_object* v_cls_1777_ = _args[8];
lean_object* v_collapsed_1778_ = _args[9];
lean_object* v_tag_1779_ = _args[10];
lean_object* v_msg_1780_ = _args[11];
lean_object* v_toBind_1781_ = _args[12];
lean_object* v___x_1782_ = _args[13];
lean_object* v_inst_1783_ = _args[14];
lean_object* v_getOptionsUnrestricted_1784_ = _args[15];
lean_object* v_opts_1785_ = _args[16];
_start:
{
uint8_t v_collapsed_boxed_1786_; lean_object* v_res_1787_; 
v_collapsed_boxed_1786_ = lean_unbox(v_collapsed_1778_);
v_res_1787_ = l_Lean_withTraceNode___redArg___lam__11(v_k_1769_, v_inst_1770_, v_toApplicative_1771_, v_always_1772_, v_inst_1773_, v_inst_1774_, v_inst_1775_, v_inst_1776_, v_cls_1777_, v_collapsed_boxed_1786_, v_tag_1779_, v_msg_1780_, v_toBind_1781_, v___x_1782_, v_inst_1783_, v_getOptionsUnrestricted_1784_, v_opts_1785_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___redArg(lean_object* v_inst_1788_, lean_object* v_inst_1789_, lean_object* v_inst_1790_, lean_object* v_inst_1791_, lean_object* v_inst_1792_, lean_object* v_always_1793_, lean_object* v_inst_1794_, lean_object* v_inst_1795_, lean_object* v_cls_1796_, lean_object* v_msg_1797_, lean_object* v_k_1798_, uint8_t v_collapsed_1799_, lean_object* v_tag_1800_){
_start:
{
lean_object* v___x_1801_; lean_object* v_toApplicative_1802_; lean_object* v_toBind_1803_; lean_object* v_getOptionsUnrestricted_1804_; lean_object* v___x_1805_; lean_object* v___f_1806_; lean_object* v___x_1807_; 
v___x_1801_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1802_ = lean_ctor_get(v_inst_1788_, 0);
lean_inc_ref(v_toApplicative_1802_);
v_toBind_1803_ = lean_ctor_get(v_inst_1788_, 1);
lean_inc_n(v_toBind_1803_, 2);
v_getOptionsUnrestricted_1804_ = lean_ctor_get(v_inst_1792_, 1);
lean_inc_n(v_getOptionsUnrestricted_1804_, 2);
lean_dec_ref(v_inst_1792_);
v___x_1805_ = lean_box(v_collapsed_1799_);
v___f_1806_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__11___boxed), 17, 16);
lean_closure_set(v___f_1806_, 0, v_k_1798_);
lean_closure_set(v___f_1806_, 1, v_inst_1789_);
lean_closure_set(v___f_1806_, 2, v_toApplicative_1802_);
lean_closure_set(v___f_1806_, 3, v_always_1793_);
lean_closure_set(v___f_1806_, 4, v_inst_1788_);
lean_closure_set(v___f_1806_, 5, v_inst_1790_);
lean_closure_set(v___f_1806_, 6, v_inst_1791_);
lean_closure_set(v___f_1806_, 7, v_inst_1795_);
lean_closure_set(v___f_1806_, 8, v_cls_1796_);
lean_closure_set(v___f_1806_, 9, v___x_1805_);
lean_closure_set(v___f_1806_, 10, v_tag_1800_);
lean_closure_set(v___f_1806_, 11, v_msg_1797_);
lean_closure_set(v___f_1806_, 12, v_toBind_1803_);
lean_closure_set(v___f_1806_, 13, v___x_1801_);
lean_closure_set(v___f_1806_, 14, v_inst_1794_);
lean_closure_set(v___f_1806_, 15, v_getOptionsUnrestricted_1804_);
v___x_1807_ = lean_apply_4(v_toBind_1803_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_1804_, v___f_1806_);
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
lean_object* v___x_1839_; lean_object* v_toApplicative_1840_; lean_object* v_toBind_1841_; lean_object* v_getOptionsUnrestricted_1842_; lean_object* v___x_1843_; lean_object* v___f_1844_; lean_object* v___x_1845_; 
v___x_1839_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1840_ = lean_ctor_get(v_inst_1825_, 0);
lean_inc_ref(v_toApplicative_1840_);
v_toBind_1841_ = lean_ctor_get(v_inst_1825_, 1);
lean_inc_n(v_toBind_1841_, 2);
v_getOptionsUnrestricted_1842_ = lean_ctor_get(v_inst_1829_, 1);
lean_inc_n(v_getOptionsUnrestricted_1842_, 2);
lean_dec_ref(v_inst_1829_);
v___x_1843_ = lean_box(v_collapsed_1837_);
v___f_1844_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__11___boxed), 17, 16);
lean_closure_set(v___f_1844_, 0, v_k_1836_);
lean_closure_set(v___f_1844_, 1, v_inst_1826_);
lean_closure_set(v___f_1844_, 2, v_toApplicative_1840_);
lean_closure_set(v___f_1844_, 3, v_always_1831_);
lean_closure_set(v___f_1844_, 4, v_inst_1825_);
lean_closure_set(v___f_1844_, 5, v_inst_1827_);
lean_closure_set(v___f_1844_, 6, v_inst_1828_);
lean_closure_set(v___f_1844_, 7, v_inst_1833_);
lean_closure_set(v___f_1844_, 8, v_cls_1834_);
lean_closure_set(v___f_1844_, 9, v___x_1843_);
lean_closure_set(v___f_1844_, 10, v_tag_1838_);
lean_closure_set(v___f_1844_, 11, v_msg_1835_);
lean_closure_set(v___f_1844_, 12, v_toBind_1841_);
lean_closure_set(v___f_1844_, 13, v___x_1839_);
lean_closure_set(v___f_1844_, 14, v_inst_1832_);
lean_closure_set(v___f_1844_, 15, v_getOptionsUnrestricted_1842_);
v___x_1845_ = lean_apply_4(v_toBind_1841_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_1842_, v___f_1844_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode___boxed(lean_object* v_00_u03b1_1846_, lean_object* v_m_1847_, lean_object* v_inst_1848_, lean_object* v_inst_1849_, lean_object* v_inst_1850_, lean_object* v_inst_1851_, lean_object* v_inst_1852_, lean_object* v_00_u03b5_1853_, lean_object* v_always_1854_, lean_object* v_inst_1855_, lean_object* v_inst_1856_, lean_object* v_cls_1857_, lean_object* v_msg_1858_, lean_object* v_k_1859_, lean_object* v_collapsed_1860_, lean_object* v_tag_1861_){
_start:
{
uint8_t v_collapsed_boxed_1862_; lean_object* v_res_1863_; 
v_collapsed_boxed_1862_ = lean_unbox(v_collapsed_1860_);
v_res_1863_ = l_Lean_withTraceNode(v_00_u03b1_1846_, v_m_1847_, v_inst_1848_, v_inst_1849_, v_inst_1850_, v_inst_1851_, v_inst_1852_, v_00_u03b5_1853_, v_always_1854_, v_inst_1855_, v_inst_1856_, v_cls_1857_, v_msg_1858_, v_k_1859_, v_collapsed_boxed_1862_, v_tag_1861_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0(lean_object* v_self_1864_){
_start:
{
lean_object* v_fst_1865_; 
v_fst_1865_ = lean_ctor_get(v_self_1864_, 0);
lean_inc(v_fst_1865_);
return v_fst_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__0___boxed(lean_object* v_self_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l_Lean_withTraceNode_x27___redArg___lam__0(v_self_1866_);
lean_dec_ref(v_self_1866_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__1(lean_object* v_toPure_1868_, lean_object* v_a_1869_){
_start:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1870_, 0, v_a_1869_);
v___x_1871_ = lean_apply_2(v_toPure_1868_, lean_box(0), v___x_1870_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__2(lean_object* v_toPure_1872_, lean_object* v_ex_1873_){
_start:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1874_, 0, v_ex_1873_);
v___x_1875_ = lean_apply_2(v_toPure_1872_, lean_box(0), v___x_1874_);
return v___x_1875_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__3(lean_object* v_toPure_1876_, lean_object* v_x_1877_){
_start:
{
if (lean_obj_tag(v_x_1877_) == 0)
{
lean_object* v_a_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v_a_1878_ = lean_ctor_get(v_x_1877_, 0);
lean_inc(v_a_1878_);
lean_dec_ref_known(v_x_1877_, 1);
v___x_1879_ = l_Lean_Exception_toMessageData(v_a_1878_);
v___x_1880_ = lean_apply_2(v_toPure_1876_, lean_box(0), v___x_1879_);
return v___x_1880_;
}
else
{
lean_object* v_a_1881_; lean_object* v_snd_1882_; lean_object* v___x_1883_; 
v_a_1881_ = lean_ctor_get(v_x_1877_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v_x_1877_, 1);
v_snd_1882_ = lean_ctor_get(v_a_1881_, 1);
lean_inc(v_snd_1882_);
lean_dec(v_a_1881_);
v___x_1883_ = lean_apply_2(v_toPure_1876_, lean_box(0), v_snd_1882_);
return v___x_1883_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__6(lean_object* v_inst_1884_, lean_object* v_inst_1885_, lean_object* v_inst_1886_, lean_object* v_inst_1887_, lean_object* v_inst_1888_, lean_object* v___f_1889_, lean_object* v_cls_1890_, uint8_t v_collapsed_1891_, lean_object* v_tag_1892_, lean_object* v_opts_1893_, uint8_t v_clsEnabled_1894_, lean_object* v_oldTraces_1895_, lean_object* v_msg_1896_, lean_object* v_resStartStop_1897_){
_start:
{
lean_object* v___x_1898_; 
v___x_1898_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg(v_inst_1884_, v_inst_1885_, v_inst_1886_, v_inst_1887_, v_inst_1888_, v___f_1889_, v_cls_1890_, v_collapsed_1891_, v_tag_1892_, v_opts_1893_, v_clsEnabled_1894_, v_oldTraces_1895_, v_msg_1896_, v_resStartStop_1897_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__6___boxed(lean_object* v_inst_1899_, lean_object* v_inst_1900_, lean_object* v_inst_1901_, lean_object* v_inst_1902_, lean_object* v_inst_1903_, lean_object* v___f_1904_, lean_object* v_cls_1905_, lean_object* v_collapsed_1906_, lean_object* v_tag_1907_, lean_object* v_opts_1908_, lean_object* v_clsEnabled_1909_, lean_object* v_oldTraces_1910_, lean_object* v_msg_1911_, lean_object* v_resStartStop_1912_){
_start:
{
uint8_t v_collapsed_boxed_1913_; uint8_t v_clsEnabled_boxed_1914_; lean_object* v_res_1915_; 
v_collapsed_boxed_1913_ = lean_unbox(v_collapsed_1906_);
v_clsEnabled_boxed_1914_ = lean_unbox(v_clsEnabled_1909_);
v_res_1915_ = l_Lean_withTraceNode_x27___redArg___lam__6(v_inst_1899_, v_inst_1900_, v_inst_1901_, v_inst_1902_, v_inst_1903_, v___f_1904_, v_cls_1905_, v_collapsed_boxed_1913_, v_tag_1907_, v_opts_1908_, v_clsEnabled_boxed_1914_, v_oldTraces_1910_, v_msg_1911_, v_resStartStop_1912_);
lean_dec_ref(v_opts_1908_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__4(lean_object* v_start_1916_, lean_object* v_a_1917_, lean_object* v_toPure_1918_, lean_object* v_stop_1919_){
_start:
{
double v___x_1920_; double v___x_1921_; double v___x_1922_; double v___x_1923_; double v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1920_ = lean_float_of_nat(v_start_1916_);
v___x_1921_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0, &l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___lam__0___closed__0);
v___x_1922_ = lean_float_div(v___x_1920_, v___x_1921_);
v___x_1923_ = lean_float_of_nat(v_stop_1919_);
v___x_1924_ = lean_float_div(v___x_1923_, v___x_1921_);
v___x_1925_ = lean_box_float(v___x_1922_);
v___x_1926_ = lean_box_float(v___x_1924_);
v___x_1927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1925_);
lean_ctor_set(v___x_1927_, 1, v___x_1926_);
v___x_1928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1928_, 0, v_a_1917_);
lean_ctor_set(v___x_1928_, 1, v___x_1927_);
v___x_1929_ = lean_apply_2(v_toPure_1918_, lean_box(0), v___x_1928_);
return v___x_1929_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__5(lean_object* v_start_1930_, lean_object* v_toPure_1931_, lean_object* v_toBind_1932_, lean_object* v___x_1933_, lean_object* v_a_1934_){
_start:
{
lean_object* v___f_1935_; lean_object* v___x_1936_; 
v___f_1935_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__4), 4, 3);
lean_closure_set(v___f_1935_, 0, v_start_1930_);
lean_closure_set(v___f_1935_, 1, v_a_1934_);
lean_closure_set(v___f_1935_, 2, v_toPure_1931_);
v___x_1936_ = lean_apply_4(v_toBind_1932_, lean_box(0), lean_box(0), v___x_1933_, v___f_1935_);
return v___x_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__7(lean_object* v_toPure_1937_, lean_object* v_toBind_1938_, lean_object* v___x_1939_, lean_object* v___x_1940_, lean_object* v_start_1941_){
_start:
{
lean_object* v___f_1942_; lean_object* v___x_1943_; 
lean_inc(v_toBind_1938_);
v___f_1942_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__5), 5, 4);
lean_closure_set(v___f_1942_, 0, v_start_1941_);
lean_closure_set(v___f_1942_, 1, v_toPure_1937_);
lean_closure_set(v___f_1942_, 2, v_toBind_1938_);
lean_closure_set(v___f_1942_, 3, v___x_1939_);
v___x_1943_ = lean_apply_4(v_toBind_1938_, lean_box(0), lean_box(0), v___x_1940_, v___f_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__8(lean_object* v_start_1944_, lean_object* v_a_1945_, lean_object* v_toPure_1946_, lean_object* v_stop_1947_){
_start:
{
double v___x_1948_; double v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1948_ = lean_float_of_nat(v_start_1944_);
v___x_1949_ = lean_float_of_nat(v_stop_1947_);
v___x_1950_ = lean_box_float(v___x_1948_);
v___x_1951_ = lean_box_float(v___x_1949_);
v___x_1952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1950_);
lean_ctor_set(v___x_1952_, 1, v___x_1951_);
v___x_1953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1953_, 0, v_a_1945_);
lean_ctor_set(v___x_1953_, 1, v___x_1952_);
v___x_1954_ = lean_apply_2(v_toPure_1946_, lean_box(0), v___x_1953_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__9(lean_object* v_start_1955_, lean_object* v_toPure_1956_, lean_object* v_toBind_1957_, lean_object* v___x_1958_, lean_object* v_a_1959_){
_start:
{
lean_object* v___f_1960_; lean_object* v___x_1961_; 
v___f_1960_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__8), 4, 3);
lean_closure_set(v___f_1960_, 0, v_start_1955_);
lean_closure_set(v___f_1960_, 1, v_a_1959_);
lean_closure_set(v___f_1960_, 2, v_toPure_1956_);
v___x_1961_ = lean_apply_4(v_toBind_1957_, lean_box(0), lean_box(0), v___x_1958_, v___f_1960_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__10(lean_object* v_toPure_1962_, lean_object* v_toBind_1963_, lean_object* v___x_1964_, lean_object* v___x_1965_, lean_object* v_start_1966_){
_start:
{
lean_object* v___f_1967_; lean_object* v___x_1968_; 
lean_inc(v_toBind_1963_);
v___f_1967_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__9), 5, 4);
lean_closure_set(v___f_1967_, 0, v_start_1966_);
lean_closure_set(v___f_1967_, 1, v_toPure_1962_);
lean_closure_set(v___f_1967_, 2, v_toBind_1963_);
lean_closure_set(v___f_1967_, 3, v___x_1964_);
v___x_1968_ = lean_apply_4(v_toBind_1963_, lean_box(0), lean_box(0), v___x_1965_, v___f_1967_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11(lean_object* v_inst_1969_, lean_object* v_inst_1970_, lean_object* v_inst_1971_, lean_object* v_inst_1972_, lean_object* v_inst_1973_, lean_object* v___f_1974_, lean_object* v_cls_1975_, uint8_t v_collapsed_1976_, lean_object* v_tag_1977_, lean_object* v_opts_1978_, uint8_t v_clsEnabled_1979_, lean_object* v_msg_1980_, lean_object* v_toBind_1981_, lean_object* v_k_1982_, lean_object* v___f_1983_, lean_object* v___f_1984_, lean_object* v___x_1985_, lean_object* v_inst_1986_, lean_object* v_toPure_1987_, lean_object* v_oldTraces_1988_){
_start:
{
lean_object* v_tryCatch_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___f_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; uint8_t v___x_1997_; 
v_tryCatch_1989_ = lean_ctor_get(v_inst_1969_, 1);
lean_inc(v_tryCatch_1989_);
v___x_1990_ = lean_box(v_collapsed_1976_);
v___x_1991_ = lean_box(v_clsEnabled_1979_);
lean_inc_ref(v_opts_1978_);
v___f_1992_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__6___boxed), 14, 13);
lean_closure_set(v___f_1992_, 0, v_inst_1970_);
lean_closure_set(v___f_1992_, 1, v_inst_1971_);
lean_closure_set(v___f_1992_, 2, v_inst_1972_);
lean_closure_set(v___f_1992_, 3, v_inst_1973_);
lean_closure_set(v___f_1992_, 4, v_inst_1969_);
lean_closure_set(v___f_1992_, 5, v___f_1974_);
lean_closure_set(v___f_1992_, 6, v_cls_1975_);
lean_closure_set(v___f_1992_, 7, v___x_1990_);
lean_closure_set(v___f_1992_, 8, v_tag_1977_);
lean_closure_set(v___f_1992_, 9, v_opts_1978_);
lean_closure_set(v___f_1992_, 10, v___x_1991_);
lean_closure_set(v___f_1992_, 11, v_oldTraces_1988_);
lean_closure_set(v___f_1992_, 12, v_msg_1980_);
lean_inc(v_toBind_1981_);
v___x_1993_ = lean_apply_4(v_toBind_1981_, lean_box(0), lean_box(0), v_k_1982_, v___f_1983_);
v___x_1994_ = lean_apply_3(v_tryCatch_1989_, lean_box(0), v___x_1993_, v___f_1984_);
v___x_1995_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1996_ = l_Lean_Option_get___redArg(v___x_1985_, v_opts_1978_, v___x_1995_);
lean_dec_ref(v_opts_1978_);
v___x_1997_ = lean_unbox(v___x_1996_);
lean_dec(v___x_1996_);
if (v___x_1997_ == 0)
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___f_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_1998_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_1999_ = lean_apply_2(v_inst_1986_, lean_box(0), v___x_1998_);
lean_inc(v___x_1999_);
lean_inc_n(v_toBind_1981_, 2);
v___f_2000_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__7), 5, 4);
lean_closure_set(v___f_2000_, 0, v_toPure_1987_);
lean_closure_set(v___f_2000_, 1, v_toBind_1981_);
lean_closure_set(v___f_2000_, 2, v___x_1999_);
lean_closure_set(v___f_2000_, 3, v___x_1994_);
v___x_2001_ = lean_apply_4(v_toBind_1981_, lean_box(0), lean_box(0), v___x_1999_, v___f_2000_);
v___x_2002_ = lean_apply_4(v_toBind_1981_, lean_box(0), lean_box(0), v___x_2001_, v___f_1992_);
return v___x_2002_;
}
else
{
lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___f_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2003_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_2004_ = lean_apply_2(v_inst_1986_, lean_box(0), v___x_2003_);
lean_inc(v___x_2004_);
lean_inc_n(v_toBind_1981_, 2);
v___f_2005_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__10), 5, 4);
lean_closure_set(v___f_2005_, 0, v_toPure_1987_);
lean_closure_set(v___f_2005_, 1, v_toBind_1981_);
lean_closure_set(v___f_2005_, 2, v___x_2004_);
lean_closure_set(v___f_2005_, 3, v___x_1994_);
v___x_2006_ = lean_apply_4(v_toBind_1981_, lean_box(0), lean_box(0), v___x_2004_, v___f_2005_);
v___x_2007_ = lean_apply_4(v_toBind_1981_, lean_box(0), lean_box(0), v___x_2006_, v___f_1992_);
return v___x_2007_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__11___boxed(lean_object** _args){
lean_object* v_inst_2008_ = _args[0];
lean_object* v_inst_2009_ = _args[1];
lean_object* v_inst_2010_ = _args[2];
lean_object* v_inst_2011_ = _args[3];
lean_object* v_inst_2012_ = _args[4];
lean_object* v___f_2013_ = _args[5];
lean_object* v_cls_2014_ = _args[6];
lean_object* v_collapsed_2015_ = _args[7];
lean_object* v_tag_2016_ = _args[8];
lean_object* v_opts_2017_ = _args[9];
lean_object* v_clsEnabled_2018_ = _args[10];
lean_object* v_msg_2019_ = _args[11];
lean_object* v_toBind_2020_ = _args[12];
lean_object* v_k_2021_ = _args[13];
lean_object* v___f_2022_ = _args[14];
lean_object* v___f_2023_ = _args[15];
lean_object* v___x_2024_ = _args[16];
lean_object* v_inst_2025_ = _args[17];
lean_object* v_toPure_2026_ = _args[18];
lean_object* v_oldTraces_2027_ = _args[19];
_start:
{
uint8_t v_collapsed_boxed_2028_; uint8_t v_clsEnabled_boxed_2029_; lean_object* v_res_2030_; 
v_collapsed_boxed_2028_ = lean_unbox(v_collapsed_2015_);
v_clsEnabled_boxed_2029_ = lean_unbox(v_clsEnabled_2018_);
v_res_2030_ = l_Lean_withTraceNode_x27___redArg___lam__11(v_inst_2008_, v_inst_2009_, v_inst_2010_, v_inst_2011_, v_inst_2012_, v___f_2013_, v_cls_2014_, v_collapsed_boxed_2028_, v_tag_2016_, v_opts_2017_, v_clsEnabled_boxed_2029_, v_msg_2019_, v_toBind_2020_, v_k_2021_, v___f_2022_, v___f_2023_, v___x_2024_, v_inst_2025_, v_toPure_2026_, v_oldTraces_2027_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12(lean_object* v_inst_2031_, lean_object* v_inst_2032_, lean_object* v_inst_2033_, lean_object* v_inst_2034_, lean_object* v_inst_2035_, lean_object* v___f_2036_, lean_object* v_cls_2037_, uint8_t v_collapsed_2038_, lean_object* v_tag_2039_, lean_object* v_opts_2040_, lean_object* v_msg_2041_, lean_object* v_toBind_2042_, lean_object* v_k_2043_, lean_object* v___f_2044_, lean_object* v___f_2045_, lean_object* v___x_2046_, lean_object* v_inst_2047_, lean_object* v_toPure_2048_, uint8_t v_clsEnabled_2049_){
_start:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___f_2052_; 
v___x_2050_ = lean_box(v_collapsed_2038_);
v___x_2051_ = lean_box(v_clsEnabled_2049_);
lean_inc_ref(v___x_2046_);
lean_inc(v_k_2043_);
lean_inc(v_toBind_2042_);
lean_inc_ref(v_opts_2040_);
lean_inc_ref(v_inst_2033_);
lean_inc_ref(v_inst_2032_);
v___f_2052_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__11___boxed), 20, 19);
lean_closure_set(v___f_2052_, 0, v_inst_2031_);
lean_closure_set(v___f_2052_, 1, v_inst_2032_);
lean_closure_set(v___f_2052_, 2, v_inst_2033_);
lean_closure_set(v___f_2052_, 3, v_inst_2034_);
lean_closure_set(v___f_2052_, 4, v_inst_2035_);
lean_closure_set(v___f_2052_, 5, v___f_2036_);
lean_closure_set(v___f_2052_, 6, v_cls_2037_);
lean_closure_set(v___f_2052_, 7, v___x_2050_);
lean_closure_set(v___f_2052_, 8, v_tag_2039_);
lean_closure_set(v___f_2052_, 9, v_opts_2040_);
lean_closure_set(v___f_2052_, 10, v___x_2051_);
lean_closure_set(v___f_2052_, 11, v_msg_2041_);
lean_closure_set(v___f_2052_, 12, v_toBind_2042_);
lean_closure_set(v___f_2052_, 13, v_k_2043_);
lean_closure_set(v___f_2052_, 14, v___f_2044_);
lean_closure_set(v___f_2052_, 15, v___f_2045_);
lean_closure_set(v___f_2052_, 16, v___x_2046_);
lean_closure_set(v___f_2052_, 17, v_inst_2047_);
lean_closure_set(v___f_2052_, 18, v_toPure_2048_);
if (v_clsEnabled_2049_ == 0)
{
lean_object* v___x_2056_; lean_object* v___x_2057_; uint8_t v___x_2058_; 
v___x_2056_ = l_Lean_trace_profiler;
v___x_2057_ = l_Lean_Option_get___redArg(v___x_2046_, v_opts_2040_, v___x_2056_);
lean_dec_ref(v_opts_2040_);
v___x_2058_ = lean_unbox(v___x_2057_);
lean_dec(v___x_2057_);
if (v___x_2058_ == 0)
{
lean_dec_ref(v___f_2052_);
lean_dec(v_toBind_2042_);
lean_dec_ref(v_inst_2033_);
lean_dec_ref(v_inst_2032_);
return v_k_2043_;
}
else
{
lean_dec(v_k_2043_);
goto v___jp_2053_;
}
}
else
{
lean_dec_ref(v___x_2046_);
lean_dec(v_k_2043_);
lean_dec_ref(v_opts_2040_);
goto v___jp_2053_;
}
v___jp_2053_:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2054_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_2032_, v_inst_2033_);
v___x_2055_ = lean_apply_4(v_toBind_2042_, lean_box(0), lean_box(0), v___x_2054_, v___f_2052_);
return v___x_2055_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__12___boxed(lean_object** _args){
lean_object* v_inst_2059_ = _args[0];
lean_object* v_inst_2060_ = _args[1];
lean_object* v_inst_2061_ = _args[2];
lean_object* v_inst_2062_ = _args[3];
lean_object* v_inst_2063_ = _args[4];
lean_object* v___f_2064_ = _args[5];
lean_object* v_cls_2065_ = _args[6];
lean_object* v_collapsed_2066_ = _args[7];
lean_object* v_tag_2067_ = _args[8];
lean_object* v_opts_2068_ = _args[9];
lean_object* v_msg_2069_ = _args[10];
lean_object* v_toBind_2070_ = _args[11];
lean_object* v_k_2071_ = _args[12];
lean_object* v___f_2072_ = _args[13];
lean_object* v___f_2073_ = _args[14];
lean_object* v___x_2074_ = _args[15];
lean_object* v_inst_2075_ = _args[16];
lean_object* v_toPure_2076_ = _args[17];
lean_object* v_clsEnabled_2077_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_2078_; uint8_t v_clsEnabled_boxed_2079_; lean_object* v_res_2080_; 
v_collapsed_boxed_2078_ = lean_unbox(v_collapsed_2066_);
v_clsEnabled_boxed_2079_ = lean_unbox(v_clsEnabled_2077_);
v_res_2080_ = l_Lean_withTraceNode_x27___redArg___lam__12(v_inst_2059_, v_inst_2060_, v_inst_2061_, v_inst_2062_, v_inst_2063_, v___f_2064_, v_cls_2065_, v_collapsed_boxed_2078_, v_tag_2067_, v_opts_2068_, v_msg_2069_, v_toBind_2070_, v_k_2071_, v___f_2072_, v___f_2073_, v___x_2074_, v_inst_2075_, v_toPure_2076_, v_clsEnabled_boxed_2079_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13(lean_object* v_k_2081_, lean_object* v_inst_2082_, lean_object* v_inst_2083_, lean_object* v_inst_2084_, lean_object* v_inst_2085_, lean_object* v_inst_2086_, lean_object* v___f_2087_, lean_object* v_cls_2088_, uint8_t v_collapsed_2089_, lean_object* v_tag_2090_, lean_object* v_msg_2091_, lean_object* v_toBind_2092_, lean_object* v___f_2093_, lean_object* v___f_2094_, lean_object* v___x_2095_, lean_object* v_inst_2096_, lean_object* v_toPure_2097_, lean_object* v___f_2098_, lean_object* v_opts_2099_){
_start:
{
uint8_t v_hasTrace_2100_; 
v_hasTrace_2100_ = lean_ctor_get_uint8(v_opts_2099_, sizeof(void*)*1);
if (v_hasTrace_2100_ == 0)
{
lean_dec_ref(v_opts_2099_);
lean_dec(v___f_2098_);
lean_dec(v_toPure_2097_);
lean_dec(v_inst_2096_);
lean_dec_ref(v___x_2095_);
lean_dec(v___f_2094_);
lean_dec(v___f_2093_);
lean_dec(v_toBind_2092_);
lean_dec(v_msg_2091_);
lean_dec_ref(v_tag_2090_);
lean_dec(v_cls_2088_);
lean_dec_ref(v___f_2087_);
lean_dec(v_inst_2086_);
lean_dec_ref(v_inst_2085_);
lean_dec_ref(v_inst_2084_);
lean_dec_ref(v_inst_2083_);
lean_dec_ref(v_inst_2082_);
return v_k_2081_;
}
else
{
lean_object* v_getInheritedTraceOptions_2101_; lean_object* v___x_2102_; lean_object* v___f_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v_getInheritedTraceOptions_2101_ = lean_ctor_get(v_inst_2082_, 2);
lean_inc(v_getInheritedTraceOptions_2101_);
v___x_2102_ = lean_box(v_collapsed_2089_);
lean_inc_n(v_toBind_2092_, 2);
v___f_2103_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__12___boxed), 19, 18);
lean_closure_set(v___f_2103_, 0, v_inst_2083_);
lean_closure_set(v___f_2103_, 1, v_inst_2084_);
lean_closure_set(v___f_2103_, 2, v_inst_2082_);
lean_closure_set(v___f_2103_, 3, v_inst_2085_);
lean_closure_set(v___f_2103_, 4, v_inst_2086_);
lean_closure_set(v___f_2103_, 5, v___f_2087_);
lean_closure_set(v___f_2103_, 6, v_cls_2088_);
lean_closure_set(v___f_2103_, 7, v___x_2102_);
lean_closure_set(v___f_2103_, 8, v_tag_2090_);
lean_closure_set(v___f_2103_, 9, v_opts_2099_);
lean_closure_set(v___f_2103_, 10, v_msg_2091_);
lean_closure_set(v___f_2103_, 11, v_toBind_2092_);
lean_closure_set(v___f_2103_, 12, v_k_2081_);
lean_closure_set(v___f_2103_, 13, v___f_2093_);
lean_closure_set(v___f_2103_, 14, v___f_2094_);
lean_closure_set(v___f_2103_, 15, v___x_2095_);
lean_closure_set(v___f_2103_, 16, v_inst_2096_);
lean_closure_set(v___f_2103_, 17, v_toPure_2097_);
v___x_2104_ = lean_apply_4(v_toBind_2092_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_2101_, v___f_2098_);
v___x_2105_ = lean_apply_4(v_toBind_2092_, lean_box(0), lean_box(0), v___x_2104_, v___f_2103_);
return v___x_2105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_k_2106_ = _args[0];
lean_object* v_inst_2107_ = _args[1];
lean_object* v_inst_2108_ = _args[2];
lean_object* v_inst_2109_ = _args[3];
lean_object* v_inst_2110_ = _args[4];
lean_object* v_inst_2111_ = _args[5];
lean_object* v___f_2112_ = _args[6];
lean_object* v_cls_2113_ = _args[7];
lean_object* v_collapsed_2114_ = _args[8];
lean_object* v_tag_2115_ = _args[9];
lean_object* v_msg_2116_ = _args[10];
lean_object* v_toBind_2117_ = _args[11];
lean_object* v___f_2118_ = _args[12];
lean_object* v___f_2119_ = _args[13];
lean_object* v___x_2120_ = _args[14];
lean_object* v_inst_2121_ = _args[15];
lean_object* v_toPure_2122_ = _args[16];
lean_object* v___f_2123_ = _args[17];
lean_object* v_opts_2124_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_2125_; lean_object* v_res_2126_; 
v_collapsed_boxed_2125_ = lean_unbox(v_collapsed_2114_);
v_res_2126_ = l_Lean_withTraceNode_x27___redArg___lam__13(v_k_2106_, v_inst_2107_, v_inst_2108_, v_inst_2109_, v_inst_2110_, v_inst_2111_, v___f_2112_, v_cls_2113_, v_collapsed_boxed_2125_, v_tag_2115_, v_msg_2116_, v_toBind_2117_, v___f_2118_, v___f_2119_, v___x_2120_, v_inst_2121_, v_toPure_2122_, v___f_2123_, v_opts_2124_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg(lean_object* v_inst_2128_, lean_object* v_inst_2129_, lean_object* v_inst_2130_, lean_object* v_inst_2131_, lean_object* v_inst_2132_, lean_object* v_inst_2133_, lean_object* v_inst_2134_, lean_object* v_cls_2135_, lean_object* v_k_2136_, uint8_t v_collapsed_2137_, lean_object* v_tag_2138_){
_start:
{
lean_object* v_toApplicative_2139_; lean_object* v_toFunctor_2140_; lean_object* v_toBind_2141_; lean_object* v_toPure_2142_; lean_object* v_map_2143_; lean_object* v___x_2144_; lean_object* v_getOptionsUnrestricted_2145_; lean_object* v___f_2146_; lean_object* v___f_2147_; lean_object* v___f_2148_; lean_object* v_msg_2149_; lean_object* v___f_2150_; lean_object* v___f_2151_; lean_object* v___x_2152_; lean_object* v___f_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v_toApplicative_2139_ = lean_ctor_get(v_inst_2128_, 0);
v_toFunctor_2140_ = lean_ctor_get(v_toApplicative_2139_, 0);
v_toBind_2141_ = lean_ctor_get(v_inst_2128_, 1);
lean_inc_n(v_toBind_2141_, 3);
v_toPure_2142_ = lean_ctor_get(v_toApplicative_2139_, 1);
lean_inc_n(v_toPure_2142_, 5);
v_map_2143_ = lean_ctor_get(v_toFunctor_2140_, 0);
lean_inc(v_map_2143_);
v___x_2144_ = l_Lean_KVMap_instValueBool;
v_getOptionsUnrestricted_2145_ = lean_ctor_get(v_inst_2132_, 1);
lean_inc_n(v_getOptionsUnrestricted_2145_, 2);
lean_dec_ref(v_inst_2132_);
v___f_2146_ = ((lean_object*)(l_Lean_withTraceNode_x27___redArg___closed__0));
v___f_2147_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2147_, 0, v_toPure_2142_);
v___f_2148_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__2), 2, 1);
lean_closure_set(v___f_2148_, 0, v_toPure_2142_);
v_msg_2149_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__3), 2, 1);
lean_closure_set(v_msg_2149_, 0, v_toPure_2142_);
v___f_2150_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
lean_inc(v_cls_2135_);
v___f_2151_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__12), 5, 4);
lean_closure_set(v___f_2151_, 0, v_toPure_2142_);
lean_closure_set(v___f_2151_, 1, v_cls_2135_);
lean_closure_set(v___f_2151_, 2, v_toBind_2141_);
lean_closure_set(v___f_2151_, 3, v_getOptionsUnrestricted_2145_);
v___x_2152_ = lean_box(v_collapsed_2137_);
v___f_2153_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__13___boxed), 19, 18);
lean_closure_set(v___f_2153_, 0, v_k_2136_);
lean_closure_set(v___f_2153_, 1, v_inst_2129_);
lean_closure_set(v___f_2153_, 2, v_inst_2133_);
lean_closure_set(v___f_2153_, 3, v_inst_2128_);
lean_closure_set(v___f_2153_, 4, v_inst_2130_);
lean_closure_set(v___f_2153_, 5, v_inst_2131_);
lean_closure_set(v___f_2153_, 6, v___f_2150_);
lean_closure_set(v___f_2153_, 7, v_cls_2135_);
lean_closure_set(v___f_2153_, 8, v___x_2152_);
lean_closure_set(v___f_2153_, 9, v_tag_2138_);
lean_closure_set(v___f_2153_, 10, v_msg_2149_);
lean_closure_set(v___f_2153_, 11, v_toBind_2141_);
lean_closure_set(v___f_2153_, 12, v___f_2147_);
lean_closure_set(v___f_2153_, 13, v___f_2148_);
lean_closure_set(v___f_2153_, 14, v___x_2144_);
lean_closure_set(v___f_2153_, 15, v_inst_2134_);
lean_closure_set(v___f_2153_, 16, v_toPure_2142_);
lean_closure_set(v___f_2153_, 17, v___f_2151_);
v___x_2154_ = lean_apply_4(v_toBind_2141_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_2145_, v___f_2153_);
v___x_2155_ = lean_apply_4(v_map_2143_, lean_box(0), lean_box(0), v___f_2146_, v___x_2154_);
return v___x_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___redArg___boxed(lean_object* v_inst_2156_, lean_object* v_inst_2157_, lean_object* v_inst_2158_, lean_object* v_inst_2159_, lean_object* v_inst_2160_, lean_object* v_inst_2161_, lean_object* v_inst_2162_, lean_object* v_cls_2163_, lean_object* v_k_2164_, lean_object* v_collapsed_2165_, lean_object* v_tag_2166_){
_start:
{
uint8_t v_collapsed_boxed_2167_; lean_object* v_res_2168_; 
v_collapsed_boxed_2167_ = lean_unbox(v_collapsed_2165_);
v_res_2168_ = l_Lean_withTraceNode_x27___redArg(v_inst_2156_, v_inst_2157_, v_inst_2158_, v_inst_2159_, v_inst_2160_, v_inst_2161_, v_inst_2162_, v_cls_2163_, v_k_2164_, v_collapsed_boxed_2167_, v_tag_2166_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27(lean_object* v_00_u03b1_2169_, lean_object* v_m_2170_, lean_object* v_inst_2171_, lean_object* v_inst_2172_, lean_object* v_inst_2173_, lean_object* v_inst_2174_, lean_object* v_inst_2175_, lean_object* v_inst_2176_, lean_object* v_inst_2177_, lean_object* v_cls_2178_, lean_object* v_k_2179_, uint8_t v_collapsed_2180_, lean_object* v_tag_2181_){
_start:
{
lean_object* v_toApplicative_2182_; lean_object* v_toFunctor_2183_; lean_object* v_toBind_2184_; lean_object* v_toPure_2185_; lean_object* v_map_2186_; lean_object* v___x_2187_; lean_object* v_getOptionsUnrestricted_2188_; lean_object* v___f_2189_; lean_object* v___f_2190_; lean_object* v___f_2191_; lean_object* v_msg_2192_; lean_object* v___f_2193_; lean_object* v___f_2194_; lean_object* v___x_2195_; lean_object* v___f_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v_toApplicative_2182_ = lean_ctor_get(v_inst_2171_, 0);
v_toFunctor_2183_ = lean_ctor_get(v_toApplicative_2182_, 0);
v_toBind_2184_ = lean_ctor_get(v_inst_2171_, 1);
lean_inc_n(v_toBind_2184_, 3);
v_toPure_2185_ = lean_ctor_get(v_toApplicative_2182_, 1);
lean_inc_n(v_toPure_2185_, 5);
v_map_2186_ = lean_ctor_get(v_toFunctor_2183_, 0);
lean_inc(v_map_2186_);
v___x_2187_ = l_Lean_KVMap_instValueBool;
v_getOptionsUnrestricted_2188_ = lean_ctor_get(v_inst_2175_, 1);
lean_inc_n(v_getOptionsUnrestricted_2188_, 2);
lean_dec_ref(v_inst_2175_);
v___f_2189_ = ((lean_object*)(l_Lean_withTraceNode_x27___redArg___closed__0));
v___f_2190_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2190_, 0, v_toPure_2185_);
v___f_2191_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__2), 2, 1);
lean_closure_set(v___f_2191_, 0, v_toPure_2185_);
v_msg_2192_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__3), 2, 1);
lean_closure_set(v_msg_2192_, 0, v_toPure_2185_);
v___f_2193_ = ((lean_object*)(l_Lean_instExceptToTraceResult___redArg___closed__0));
lean_inc(v_cls_2178_);
v___f_2194_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__12), 5, 4);
lean_closure_set(v___f_2194_, 0, v_toPure_2185_);
lean_closure_set(v___f_2194_, 1, v_cls_2178_);
lean_closure_set(v___f_2194_, 2, v_toBind_2184_);
lean_closure_set(v___f_2194_, 3, v_getOptionsUnrestricted_2188_);
v___x_2195_ = lean_box(v_collapsed_2180_);
v___f_2196_ = lean_alloc_closure((void*)(l_Lean_withTraceNode_x27___redArg___lam__13___boxed), 19, 18);
lean_closure_set(v___f_2196_, 0, v_k_2179_);
lean_closure_set(v___f_2196_, 1, v_inst_2172_);
lean_closure_set(v___f_2196_, 2, v_inst_2176_);
lean_closure_set(v___f_2196_, 3, v_inst_2171_);
lean_closure_set(v___f_2196_, 4, v_inst_2173_);
lean_closure_set(v___f_2196_, 5, v_inst_2174_);
lean_closure_set(v___f_2196_, 6, v___f_2193_);
lean_closure_set(v___f_2196_, 7, v_cls_2178_);
lean_closure_set(v___f_2196_, 8, v___x_2195_);
lean_closure_set(v___f_2196_, 9, v_tag_2181_);
lean_closure_set(v___f_2196_, 10, v_msg_2192_);
lean_closure_set(v___f_2196_, 11, v_toBind_2184_);
lean_closure_set(v___f_2196_, 12, v___f_2190_);
lean_closure_set(v___f_2196_, 13, v___f_2191_);
lean_closure_set(v___f_2196_, 14, v___x_2187_);
lean_closure_set(v___f_2196_, 15, v_inst_2177_);
lean_closure_set(v___f_2196_, 16, v_toPure_2185_);
lean_closure_set(v___f_2196_, 17, v___f_2194_);
v___x_2197_ = lean_apply_4(v_toBind_2184_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_2188_, v___f_2196_);
v___x_2198_ = lean_apply_4(v_map_2186_, lean_box(0), lean_box(0), v___f_2189_, v___x_2197_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNode_x27___boxed(lean_object* v_00_u03b1_2199_, lean_object* v_m_2200_, lean_object* v_inst_2201_, lean_object* v_inst_2202_, lean_object* v_inst_2203_, lean_object* v_inst_2204_, lean_object* v_inst_2205_, lean_object* v_inst_2206_, lean_object* v_inst_2207_, lean_object* v_cls_2208_, lean_object* v_k_2209_, lean_object* v_collapsed_2210_, lean_object* v_tag_2211_){
_start:
{
uint8_t v_collapsed_boxed_2212_; lean_object* v_res_2213_; 
v_collapsed_boxed_2212_ = lean_unbox(v_collapsed_2210_);
v_res_2213_ = l_Lean_withTraceNode_x27(v_00_u03b1_2199_, v_m_2200_, v_inst_2201_, v_inst_2202_, v_inst_2203_, v_inst_2204_, v_inst_2205_, v_inst_2206_, v_inst_2207_, v_cls_2208_, v_k_2209_, v_collapsed_boxed_2212_, v_tag_2211_);
return v_res_2213_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__4(void){
_start:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2222_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__3));
v___x_2223_ = l_Lean_mkAtom(v___x_2222_);
return v___x_2223_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__5(void){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2224_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__4, &l_Lean_registerTraceClass___auto__1___closed__4_once, _init_l_Lean_registerTraceClass___auto__1___closed__4);
v___x_2225_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2226_ = lean_array_push(v___x_2225_, v___x_2224_);
return v___x_2226_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__6(void){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2227_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__5, &l_Lean_registerTraceClass___auto__1___closed__5_once, _init_l_Lean_registerTraceClass___auto__1___closed__5);
v___x_2228_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__2));
v___x_2229_ = lean_box(2);
v___x_2230_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2229_);
lean_ctor_set(v___x_2230_, 1, v___x_2228_);
lean_ctor_set(v___x_2230_, 2, v___x_2227_);
return v___x_2230_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__7(void){
_start:
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2231_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__6, &l_Lean_registerTraceClass___auto__1___closed__6_once, _init_l_Lean_registerTraceClass___auto__1___closed__6);
v___x_2232_ = lean_obj_once(&l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13, &l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13_once, _init_l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__13);
v___x_2233_ = lean_array_push(v___x_2232_, v___x_2231_);
return v___x_2233_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__8(void){
_start:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2234_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__7, &l_Lean_registerTraceClass___auto__1___closed__7_once, _init_l_Lean_registerTraceClass___auto__1___closed__7);
v___x_2235_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__11));
v___x_2236_ = lean_box(2);
v___x_2237_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
lean_ctor_set(v___x_2237_, 1, v___x_2235_);
lean_ctor_set(v___x_2237_, 2, v___x_2234_);
return v___x_2237_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__9(void){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2238_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__8, &l_Lean_registerTraceClass___auto__1___closed__8_once, _init_l_Lean_registerTraceClass___auto__1___closed__8);
v___x_2239_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2240_ = lean_array_push(v___x_2239_, v___x_2238_);
return v___x_2240_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__10(void){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2241_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__9, &l_Lean_registerTraceClass___auto__1___closed__9_once, _init_l_Lean_registerTraceClass___auto__1___closed__9);
v___x_2242_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2243_ = lean_box(2);
v___x_2244_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
lean_ctor_set(v___x_2244_, 1, v___x_2242_);
lean_ctor_set(v___x_2244_, 2, v___x_2241_);
return v___x_2244_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__11(void){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2245_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__10, &l_Lean_registerTraceClass___auto__1___closed__10_once, _init_l_Lean_registerTraceClass___auto__1___closed__10);
v___x_2246_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2247_ = lean_array_push(v___x_2246_, v___x_2245_);
return v___x_2247_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__12(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2248_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__11, &l_Lean_registerTraceClass___auto__1___closed__11_once, _init_l_Lean_registerTraceClass___auto__1___closed__11);
v___x_2249_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__7));
v___x_2250_ = lean_box(2);
v___x_2251_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
lean_ctor_set(v___x_2251_, 1, v___x_2249_);
lean_ctor_set(v___x_2251_, 2, v___x_2248_);
return v___x_2251_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__13(void){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2252_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__12, &l_Lean_registerTraceClass___auto__1___closed__12_once, _init_l_Lean_registerTraceClass___auto__1___closed__12);
v___x_2253_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__5));
v___x_2254_ = lean_array_push(v___x_2253_, v___x_2252_);
return v___x_2254_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1___closed__14(void){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2255_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__13, &l_Lean_registerTraceClass___auto__1___closed__13_once, _init_l_Lean_registerTraceClass___auto__1___closed__13);
v___x_2256_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__4));
v___x_2257_ = lean_box(2);
v___x_2258_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2257_);
lean_ctor_set(v___x_2258_, 1, v___x_2256_);
lean_ctor_set(v___x_2258_, 2, v___x_2255_);
return v___x_2258_;
}
}
static lean_object* _init_l_Lean_registerTraceClass___auto__1(void){
_start:
{
lean_object* v___x_2259_; 
v___x_2259_ = lean_obj_once(&l_Lean_registerTraceClass___auto__1___closed__14, &l_Lean_registerTraceClass___auto__1___closed__14_once, _init_l_Lean_registerTraceClass___auto__1___closed__14);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_2260_, lean_object* v_x_2261_){
_start:
{
if (lean_obj_tag(v_x_2261_) == 0)
{
return v_x_2260_;
}
else
{
lean_object* v_key_2262_; lean_object* v_value_2263_; lean_object* v_tail_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2290_; 
v_key_2262_ = lean_ctor_get(v_x_2261_, 0);
v_value_2263_ = lean_ctor_get(v_x_2261_, 1);
v_tail_2264_ = lean_ctor_get(v_x_2261_, 2);
v_isSharedCheck_2290_ = !lean_is_exclusive(v_x_2261_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2266_ = v_x_2261_;
v_isShared_2267_ = v_isSharedCheck_2290_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_tail_2264_);
lean_inc(v_value_2263_);
lean_inc(v_key_2262_);
lean_dec(v_x_2261_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2290_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2268_; uint64_t v___y_2270_; 
v___x_2268_ = lean_array_get_size(v_x_2260_);
if (lean_obj_tag(v_key_2262_) == 0)
{
uint64_t v___x_2288_; 
v___x_2288_ = 1723ULL;
v___y_2270_ = v___x_2288_;
goto v___jp_2269_;
}
else
{
uint64_t v_hash_2289_; 
v_hash_2289_ = lean_ctor_get_uint64(v_key_2262_, sizeof(void*)*2);
v___y_2270_ = v_hash_2289_;
goto v___jp_2269_;
}
v___jp_2269_:
{
uint64_t v___x_2271_; uint64_t v___x_2272_; uint64_t v_fold_2273_; uint64_t v___x_2274_; uint64_t v___x_2275_; uint64_t v___x_2276_; size_t v___x_2277_; size_t v___x_2278_; size_t v___x_2279_; size_t v___x_2280_; size_t v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2284_; 
v___x_2271_ = 32ULL;
v___x_2272_ = lean_uint64_shift_right(v___y_2270_, v___x_2271_);
v_fold_2273_ = lean_uint64_xor(v___y_2270_, v___x_2272_);
v___x_2274_ = 16ULL;
v___x_2275_ = lean_uint64_shift_right(v_fold_2273_, v___x_2274_);
v___x_2276_ = lean_uint64_xor(v_fold_2273_, v___x_2275_);
v___x_2277_ = lean_uint64_to_usize(v___x_2276_);
v___x_2278_ = lean_usize_of_nat(v___x_2268_);
v___x_2279_ = ((size_t)1ULL);
v___x_2280_ = lean_usize_sub(v___x_2278_, v___x_2279_);
v___x_2281_ = lean_usize_land(v___x_2277_, v___x_2280_);
v___x_2282_ = lean_array_uget_borrowed(v_x_2260_, v___x_2281_);
lean_inc(v___x_2282_);
if (v_isShared_2267_ == 0)
{
lean_ctor_set(v___x_2266_, 2, v___x_2282_);
v___x_2284_ = v___x_2266_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_key_2262_);
lean_ctor_set(v_reuseFailAlloc_2287_, 1, v_value_2263_);
lean_ctor_set(v_reuseFailAlloc_2287_, 2, v___x_2282_);
v___x_2284_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
lean_object* v___x_2285_; 
v___x_2285_ = lean_array_uset(v_x_2260_, v___x_2281_, v___x_2284_);
v_x_2260_ = v___x_2285_;
v_x_2261_ = v_tail_2264_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(lean_object* v_i_2291_, lean_object* v_source_2292_, lean_object* v_target_2293_){
_start:
{
lean_object* v___x_2294_; uint8_t v___x_2295_; 
v___x_2294_ = lean_array_get_size(v_source_2292_);
v___x_2295_ = lean_nat_dec_lt(v_i_2291_, v___x_2294_);
if (v___x_2295_ == 0)
{
lean_dec_ref(v_source_2292_);
lean_dec(v_i_2291_);
return v_target_2293_;
}
else
{
lean_object* v_es_2296_; lean_object* v___x_2297_; lean_object* v_source_2298_; lean_object* v_target_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v_es_2296_ = lean_array_fget(v_source_2292_, v_i_2291_);
v___x_2297_ = lean_box(0);
v_source_2298_ = lean_array_fset(v_source_2292_, v_i_2291_, v___x_2297_);
v_target_2299_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(v_target_2293_, v_es_2296_);
v___x_2300_ = lean_unsigned_to_nat(1u);
v___x_2301_ = lean_nat_add(v_i_2291_, v___x_2300_);
lean_dec(v_i_2291_);
v_i_2291_ = v___x_2301_;
v_source_2292_ = v_source_2298_;
v_target_2293_ = v_target_2299_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(lean_object* v_data_2303_){
_start:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v_nbuckets_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2304_ = lean_array_get_size(v_data_2303_);
v___x_2305_ = lean_unsigned_to_nat(2u);
v_nbuckets_2306_ = lean_nat_mul(v___x_2304_, v___x_2305_);
v___x_2307_ = lean_unsigned_to_nat(0u);
v___x_2308_ = lean_box(0);
v___x_2309_ = lean_mk_array(v_nbuckets_2306_, v___x_2308_);
v___x_2310_ = lean_array_propagate_mark(v_data_2303_, v___x_2309_);
v___x_2311_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(v___x_2307_, v_data_2303_, v___x_2310_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(lean_object* v_m_2312_, lean_object* v_a_2313_, lean_object* v_b_2314_){
_start:
{
lean_object* v_size_2315_; lean_object* v_buckets_2316_; lean_object* v___x_2317_; uint64_t v___y_2319_; 
v_size_2315_ = lean_ctor_get(v_m_2312_, 0);
v_buckets_2316_ = lean_ctor_get(v_m_2312_, 1);
v___x_2317_ = lean_array_get_size(v_buckets_2316_);
if (lean_obj_tag(v_a_2313_) == 0)
{
uint64_t v___x_2356_; 
v___x_2356_ = 1723ULL;
v___y_2319_ = v___x_2356_;
goto v___jp_2318_;
}
else
{
uint64_t v_hash_2357_; 
v_hash_2357_ = lean_ctor_get_uint64(v_a_2313_, sizeof(void*)*2);
v___y_2319_ = v_hash_2357_;
goto v___jp_2318_;
}
v___jp_2318_:
{
uint64_t v___x_2320_; uint64_t v___x_2321_; uint64_t v_fold_2322_; uint64_t v___x_2323_; uint64_t v___x_2324_; uint64_t v___x_2325_; size_t v___x_2326_; size_t v___x_2327_; size_t v___x_2328_; size_t v___x_2329_; size_t v___x_2330_; lean_object* v_bkt_2331_; uint8_t v___x_2332_; 
v___x_2320_ = 32ULL;
v___x_2321_ = lean_uint64_shift_right(v___y_2319_, v___x_2320_);
v_fold_2322_ = lean_uint64_xor(v___y_2319_, v___x_2321_);
v___x_2323_ = 16ULL;
v___x_2324_ = lean_uint64_shift_right(v_fold_2322_, v___x_2323_);
v___x_2325_ = lean_uint64_xor(v_fold_2322_, v___x_2324_);
v___x_2326_ = lean_uint64_to_usize(v___x_2325_);
v___x_2327_ = lean_usize_of_nat(v___x_2317_);
v___x_2328_ = ((size_t)1ULL);
v___x_2329_ = lean_usize_sub(v___x_2327_, v___x_2328_);
v___x_2330_ = lean_usize_land(v___x_2326_, v___x_2329_);
v_bkt_2331_ = lean_array_uget_borrowed(v_buckets_2316_, v___x_2330_);
v___x_2332_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_Trace_0__Lean_checkTraceOption_go_spec__0_spec__0___redArg(v_a_2313_, v_bkt_2331_);
if (v___x_2332_ == 0)
{
lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2353_; 
lean_inc_ref(v_buckets_2316_);
lean_inc(v_size_2315_);
v_isSharedCheck_2353_ = !lean_is_exclusive(v_m_2312_);
if (v_isSharedCheck_2353_ == 0)
{
lean_object* v_unused_2354_; lean_object* v_unused_2355_; 
v_unused_2354_ = lean_ctor_get(v_m_2312_, 1);
lean_dec(v_unused_2354_);
v_unused_2355_ = lean_ctor_get(v_m_2312_, 0);
lean_dec(v_unused_2355_);
v___x_2334_ = v_m_2312_;
v_isShared_2335_ = v_isSharedCheck_2353_;
goto v_resetjp_2333_;
}
else
{
lean_dec(v_m_2312_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2353_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2336_; lean_object* v_size_x27_2337_; lean_object* v___x_2338_; lean_object* v_buckets_x27_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; uint8_t v___x_2345_; 
v___x_2336_ = lean_unsigned_to_nat(1u);
v_size_x27_2337_ = lean_nat_add(v_size_2315_, v___x_2336_);
lean_dec(v_size_2315_);
lean_inc(v_bkt_2331_);
v___x_2338_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2338_, 0, v_a_2313_);
lean_ctor_set(v___x_2338_, 1, v_b_2314_);
lean_ctor_set(v___x_2338_, 2, v_bkt_2331_);
v_buckets_x27_2339_ = lean_array_uset(v_buckets_2316_, v___x_2330_, v___x_2338_);
v___x_2340_ = lean_unsigned_to_nat(4u);
v___x_2341_ = lean_nat_mul(v_size_x27_2337_, v___x_2340_);
v___x_2342_ = lean_unsigned_to_nat(3u);
v___x_2343_ = lean_nat_div(v___x_2341_, v___x_2342_);
lean_dec(v___x_2341_);
v___x_2344_ = lean_array_get_size(v_buckets_x27_2339_);
v___x_2345_ = lean_nat_dec_le(v___x_2343_, v___x_2344_);
lean_dec(v___x_2343_);
if (v___x_2345_ == 0)
{
lean_object* v_val_2346_; lean_object* v___x_2348_; 
v_val_2346_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(v_buckets_x27_2339_);
if (v_isShared_2335_ == 0)
{
lean_ctor_set(v___x_2334_, 1, v_val_2346_);
lean_ctor_set(v___x_2334_, 0, v_size_x27_2337_);
v___x_2348_ = v___x_2334_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_size_x27_2337_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v_val_2346_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
else
{
lean_object* v___x_2351_; 
if (v_isShared_2335_ == 0)
{
lean_ctor_set(v___x_2334_, 1, v_buckets_x27_2339_);
lean_ctor_set(v___x_2334_, 0, v_size_x27_2337_);
v___x_2351_ = v___x_2334_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_size_x27_2337_);
lean_ctor_set(v_reuseFailAlloc_2352_, 1, v_buckets_x27_2339_);
v___x_2351_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
return v___x_2351_;
}
}
}
}
else
{
lean_dec(v_b_2314_);
lean_dec(v_a_2313_);
return v_m_2312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTraceClass(lean_object* v_traceClassName_2361_, uint8_t v_inherited_2362_, lean_object* v_ref_2363_){
_start:
{
lean_object* v___x_2365_; lean_object* v_optionName_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2365_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v_optionName_2366_ = l_Lean_Name_append(v___x_2365_, v_traceClassName_2361_);
v___x_2367_ = ((lean_object*)(l_Lean_registerTraceClass___closed__0));
v___x_2368_ = ((lean_object*)(l_Lean_registerTraceClass___closed__1));
v___x_2369_ = lean_box(0);
lean_inc_n(v_optionName_2366_, 2);
v___x_2370_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2370_, 0, v_optionName_2366_);
lean_ctor_set(v___x_2370_, 1, v_ref_2363_);
lean_ctor_set(v___x_2370_, 2, v___x_2367_);
lean_ctor_set(v___x_2370_, 3, v___x_2368_);
lean_ctor_set(v___x_2370_, 4, v___x_2369_);
v___x_2371_ = lean_register_option(v_optionName_2366_, v___x_2370_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2387_; 
v_isSharedCheck_2387_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2387_ == 0)
{
lean_object* v_unused_2388_; 
v_unused_2388_ = lean_ctor_get(v___x_2371_, 0);
lean_dec(v_unused_2388_);
v___x_2373_ = v___x_2371_;
v_isShared_2374_ = v_isSharedCheck_2387_;
goto v_resetjp_2372_;
}
else
{
lean_dec(v___x_2371_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2387_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
if (v_inherited_2362_ == 0)
{
lean_object* v___x_2375_; lean_object* v___x_2377_; 
lean_dec(v_optionName_2366_);
v___x_2375_ = lean_box(0);
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 0, v___x_2375_);
v___x_2377_ = v___x_2373_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v___x_2375_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
return v___x_2377_;
}
}
else
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2385_; 
v___x_2379_ = l_Lean_inheritedTraceOptions;
v___x_2380_ = lean_st_ref_take(v___x_2379_);
v___x_2381_ = lean_box(0);
v___x_2382_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(v___x_2380_, v_optionName_2366_, v___x_2381_);
v___x_2383_ = lean_st_ref_put(v___x_2379_, v___x_2382_);
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 0, v___x_2383_);
v___x_2385_ = v___x_2373_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v___x_2383_);
v___x_2385_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
return v___x_2385_;
}
}
}
}
else
{
lean_dec(v_optionName_2366_);
return v___x_2371_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerTraceClass___boxed(lean_object* v_traceClassName_2389_, lean_object* v_inherited_2390_, lean_object* v_ref_2391_, lean_object* v_a_2392_){
_start:
{
uint8_t v_inherited_boxed_2393_; lean_object* v_res_2394_; 
v_inherited_boxed_2393_ = lean_unbox(v_inherited_2390_);
v_res_2394_ = l_Lean_registerTraceClass(v_traceClassName_2389_, v_inherited_boxed_2393_, v_ref_2391_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0(lean_object* v_00_u03b2_2395_, lean_object* v_m_2396_, lean_object* v_a_2397_, lean_object* v_b_2398_){
_start:
{
lean_object* v___x_2399_; 
v___x_2399_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0___redArg(v_m_2396_, v_a_2397_, v_b_2398_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0(lean_object* v_00_u03b2_2400_, lean_object* v_data_2401_){
_start:
{
lean_object* v___x_2402_; 
v___x_2402_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0___redArg(v_data_2401_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2403_, lean_object* v_i_2404_, lean_object* v_source_2405_, lean_object* v_target_2406_){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1___redArg(v_i_2404_, v_source_2405_, v_target_2406_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2408_, lean_object* v_x_2409_, lean_object* v_x_2410_){
_start:
{
lean_object* v___x_2411_; 
v___x_2411_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_registerTraceClass_spec__0_spec__0_spec__1_spec__2___redArg(v_x_2409_, v_x_2410_);
return v___x_2411_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3(void){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___x_2415_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__2));
v___x_2416_ = l_String_toRawSubstring_x27(v___x_2415_);
return v___x_2416_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12(void){
_start:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2430_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__1));
v___x_2431_ = l_String_toRawSubstring_x27(v___x_2430_);
return v___x_2431_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16(void){
_start:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2435_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__15));
v___x_2436_ = l_String_toRawSubstring_x27(v___x_2435_);
return v___x_2436_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20(void){
_start:
{
lean_object* v___x_2440_; lean_object* v___x_2441_; 
v___x_2440_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__19));
v___x_2441_ = l_String_toRawSubstring_x27(v___x_2440_);
return v___x_2441_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23(void){
_start:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__22));
v___x_2445_ = l_String_toRawSubstring_x27(v___x_2444_);
return v___x_2445_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39(void){
_start:
{
lean_object* v___x_2482_; 
v___x_2482_ = l_Array_mkArray0___redArg();
return v___x_2482_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49(void){
_start:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__48));
v___x_2509_ = l_String_toRawSubstring_x27(v___x_2508_);
return v___x_2509_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66(void){
_start:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; 
v___x_2544_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__65));
v___x_2545_ = l_String_toRawSubstring_x27(v___x_2544_);
return v___x_2545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(lean_object* v_id_2567_, lean_object* v_s_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_){
_start:
{
lean_object* v___y_2572_; lean_object* v___y_2573_; lean_object* v___y_2574_; lean_object* v___y_2575_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; lean_object* v___y_2580_; lean_object* v___y_2581_; lean_object* v___y_2582_; lean_object* v___y_2583_; lean_object* v___y_2584_; lean_object* v___y_2585_; lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2595_; lean_object* v___y_2596_; lean_object* v_msg_2685_; lean_object* v_quotContext_2686_; lean_object* v_currMacroScope_2687_; lean_object* v_ref_2688_; lean_object* v___y_2689_; lean_object* v___x_2735_; lean_object* v___x_2736_; uint8_t v___x_2737_; 
lean_inc(v_s_2568_);
v___x_2735_ = l_Lean_Syntax_getKind(v_s_2568_);
v___x_2736_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__57));
v___x_2737_ = lean_name_eq(v___x_2735_, v___x_2736_);
lean_dec(v___x_2735_);
if (v___x_2737_ == 0)
{
lean_object* v_quotContext_2738_; lean_object* v_currMacroScope_2739_; lean_object* v_ref_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v_quotContext_2738_ = lean_ctor_get(v_a_2569_, 1);
v_currMacroScope_2739_ = lean_ctor_get(v_a_2569_, 2);
v_ref_2740_ = lean_ctor_get(v_a_2569_, 5);
v___x_2741_ = l_Lean_SourceInfo_fromRef(v_ref_2740_, v___x_2737_);
v___x_2742_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__59));
v___x_2743_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__60));
v___x_2744_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9));
lean_inc_n(v___x_2741_, 8);
v___x_2745_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2745_, 0, v___x_2741_);
lean_ctor_set(v___x_2745_, 1, v___x_2744_);
v___x_2746_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11));
v___x_2747_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12);
v___x_2748_ = lean_box(0);
lean_inc_n(v_currMacroScope_2739_, 3);
lean_inc_n(v_quotContext_2738_, 3);
v___x_2749_ = l_Lean_addMacroScope(v_quotContext_2738_, v___x_2748_, v_currMacroScope_2739_);
v___x_2750_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__63));
v___x_2751_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2741_);
lean_ctor_set(v___x_2751_, 1, v___x_2747_);
lean_ctor_set(v___x_2751_, 2, v___x_2749_);
lean_ctor_set(v___x_2751_, 3, v___x_2750_);
v___x_2752_ = l_Lean_Syntax_node1(v___x_2741_, v___x_2746_, v___x_2751_);
v___x_2753_ = l_Lean_Syntax_node2(v___x_2741_, v___x_2743_, v___x_2745_, v___x_2752_);
v___x_2754_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__64));
v___x_2755_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2741_);
lean_ctor_set(v___x_2755_, 1, v___x_2754_);
v___x_2756_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2757_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__66);
v___x_2758_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__67));
v___x_2759_ = l_Lean_addMacroScope(v_quotContext_2738_, v___x_2758_, v_currMacroScope_2739_);
v___x_2760_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__72));
v___x_2761_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2741_);
lean_ctor_set(v___x_2761_, 1, v___x_2757_);
lean_ctor_set(v___x_2761_, 2, v___x_2759_);
lean_ctor_set(v___x_2761_, 3, v___x_2760_);
v___x_2762_ = l_Lean_Syntax_node1(v___x_2741_, v___x_2756_, v___x_2761_);
v___x_2763_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18));
v___x_2764_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2741_);
lean_ctor_set(v___x_2764_, 1, v___x_2763_);
v___x_2765_ = l_Lean_Syntax_node5(v___x_2741_, v___x_2742_, v___x_2753_, v_s_2568_, v___x_2755_, v___x_2762_, v___x_2764_);
v_msg_2685_ = v___x_2765_;
v_quotContext_2686_ = v_quotContext_2738_;
v_currMacroScope_2687_ = v_currMacroScope_2739_;
v_ref_2688_ = v_ref_2740_;
v___y_2689_ = v_a_2570_;
goto v___jp_2684_;
}
else
{
lean_object* v_quotContext_2766_; lean_object* v_currMacroScope_2767_; lean_object* v_ref_2768_; uint8_t v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v_quotContext_2766_ = lean_ctor_get(v_a_2569_, 1);
v_currMacroScope_2767_ = lean_ctor_get(v_a_2569_, 2);
v_ref_2768_ = lean_ctor_get(v_a_2569_, 5);
v___x_2769_ = 0;
v___x_2770_ = l_Lean_SourceInfo_fromRef(v_ref_2768_, v___x_2769_);
v___x_2771_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__74));
v___x_2772_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__75));
lean_inc(v___x_2770_);
v___x_2773_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2770_);
lean_ctor_set(v___x_2773_, 1, v___x_2772_);
v___x_2774_ = l_Lean_Syntax_node2(v___x_2770_, v___x_2771_, v___x_2773_, v_s_2568_);
lean_inc(v_currMacroScope_2767_);
lean_inc(v_quotContext_2766_);
v_msg_2685_ = v___x_2774_;
v_quotContext_2686_ = v_quotContext_2766_;
v_currMacroScope_2687_ = v_currMacroScope_2767_;
v_ref_2688_ = v_ref_2768_;
v___y_2689_ = v_a_2570_;
goto v___jp_2684_;
}
v___jp_2571_:
{
lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
lean_inc_n(v___y_2574_, 6);
lean_inc(v___y_2581_);
lean_inc_n(v___y_2586_, 37);
v___x_2597_ = l_Lean_Syntax_node5(v___y_2586_, v___y_2581_, v___y_2572_, v___y_2574_, v___y_2574_, v___y_2578_, v___y_2596_);
lean_inc(v___y_2594_);
v___x_2598_ = l_Lean_Syntax_node1(v___y_2586_, v___y_2594_, v___x_2597_);
lean_inc(v___y_2595_);
v___x_2599_ = l_Lean_Syntax_node4(v___y_2586_, v___y_2595_, v___y_2573_, v___y_2574_, v___y_2583_, v___x_2598_);
lean_inc_n(v___y_2584_, 3);
v___x_2600_ = l_Lean_Syntax_node2(v___y_2586_, v___y_2584_, v___x_2599_, v___y_2574_);
v___x_2601_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__0));
lean_inc_ref_n(v___y_2579_, 7);
lean_inc_ref_n(v___y_2591_, 7);
lean_inc_ref_n(v___y_2580_, 10);
v___x_2602_ = l_Lean_Name_mkStr4(v___y_2580_, v___y_2591_, v___y_2579_, v___x_2601_);
v___x_2603_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__1));
v___x_2604_ = l_Lean_Name_mkStr4(v___y_2580_, v___y_2591_, v___y_2579_, v___x_2603_);
v___x_2605_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__3);
v___x_2606_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__4));
lean_inc_n(v___y_2590_, 4);
lean_inc_n(v___y_2585_, 4);
v___x_2607_ = l_Lean_addMacroScope(v___y_2585_, v___x_2606_, v___y_2590_);
v___x_2608_ = lean_box(0);
v___x_2609_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__5));
v___x_2610_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__6));
lean_inc_n(v___y_2582_, 4);
v___x_2611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2610_);
lean_ctor_set(v___x_2611_, 1, v___y_2582_);
v___x_2612_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2609_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
v___x_2613_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2613_, 0, v___y_2586_);
lean_ctor_set(v___x_2613_, 1, v___x_2605_);
lean_ctor_set(v___x_2613_, 2, v___x_2607_);
lean_ctor_set(v___x_2613_, 3, v___x_2612_);
v___x_2614_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__7));
v___x_2615_ = l_Lean_Name_mkStr4(v___y_2580_, v___y_2591_, v___y_2579_, v___x_2614_);
v___x_2616_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__8));
v___x_2617_ = l_Lean_Name_mkStr4(v___y_2580_, v___y_2591_, v___y_2579_, v___x_2616_);
v___x_2618_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__9));
v___x_2619_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___y_2586_);
lean_ctor_set(v___x_2619_, 1, v___x_2618_);
v___x_2620_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__11));
v___x_2621_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__12);
v___x_2622_ = lean_box(0);
v___x_2623_ = l_Lean_addMacroScope(v___y_2585_, v___x_2622_, v___y_2590_);
v___x_2624_ = l_Lean_Name_mkStr1(v___y_2580_);
v___x_2625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2624_);
v___x_2626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2625_);
lean_ctor_set(v___x_2626_, 1, v___y_2582_);
v___x_2627_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2627_, 0, v___y_2586_);
lean_ctor_set(v___x_2627_, 1, v___x_2621_);
lean_ctor_set(v___x_2627_, 2, v___x_2623_);
lean_ctor_set(v___x_2627_, 3, v___x_2626_);
v___x_2628_ = l_Lean_Syntax_node1(v___y_2586_, v___x_2620_, v___x_2627_);
v___x_2629_ = l_Lean_Syntax_node2(v___y_2586_, v___x_2617_, v___x_2619_, v___x_2628_);
v___x_2630_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__13));
v___x_2631_ = l_Lean_Name_mkStr4(v___y_2580_, v___y_2591_, v___y_2579_, v___x_2630_);
v___x_2632_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__14));
v___x_2633_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2633_, 0, v___y_2586_);
lean_ctor_set(v___x_2633_, 1, v___x_2632_);
v___x_2634_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__16);
v___x_2635_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__17));
v___x_2636_ = l_Lean_Name_mkStr2(v___y_2580_, v___x_2635_);
lean_inc(v___x_2636_);
v___x_2637_ = l_Lean_addMacroScope(v___y_2585_, v___x_2636_, v___y_2590_);
v___x_2638_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2636_);
lean_ctor_set(v___x_2638_, 1, v___x_2608_);
v___x_2639_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2638_);
lean_ctor_set(v___x_2639_, 1, v___y_2582_);
v___x_2640_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2640_, 0, v___y_2586_);
lean_ctor_set(v___x_2640_, 1, v___x_2634_);
lean_ctor_set(v___x_2640_, 2, v___x_2637_);
lean_ctor_set(v___x_2640_, 3, v___x_2639_);
lean_inc(v___y_2593_);
lean_inc_n(v___y_2592_, 6);
v___x_2641_ = l_Lean_Syntax_node1(v___y_2586_, v___y_2592_, v___y_2593_);
lean_inc_n(v___x_2604_, 3);
v___x_2642_ = l_Lean_Syntax_node2(v___y_2586_, v___x_2604_, v___x_2640_, v___x_2641_);
lean_inc_n(v___x_2602_, 2);
v___x_2643_ = l_Lean_Syntax_node1(v___y_2586_, v___x_2602_, v___x_2642_);
v___x_2644_ = l_Lean_Syntax_node2(v___y_2586_, v___x_2631_, v___x_2633_, v___x_2643_);
v___x_2645_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__18));
v___x_2646_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___y_2586_);
lean_ctor_set(v___x_2646_, 1, v___x_2645_);
lean_inc_ref_n(v___x_2646_, 3);
lean_inc_n(v___x_2629_, 3);
lean_inc_n(v___x_2615_, 2);
v___x_2647_ = l_Lean_Syntax_node3(v___y_2586_, v___x_2615_, v___x_2629_, v___x_2644_, v___x_2646_);
lean_inc_ref(v___y_2576_);
v___x_2648_ = l_Lean_Name_mkStr4(v___y_2580_, v___y_2591_, v___y_2579_, v___y_2576_);
v___x_2649_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__20);
v___x_2650_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__21));
v___x_2651_ = l_Lean_Name_mkStr2(v___y_2580_, v___x_2650_);
lean_inc(v___x_2651_);
v___x_2652_ = l_Lean_addMacroScope(v___y_2585_, v___x_2651_, v___y_2590_);
v___x_2653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2651_);
lean_ctor_set(v___x_2653_, 1, v___x_2608_);
v___x_2654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2653_);
lean_ctor_set(v___x_2654_, 1, v___y_2582_);
v___x_2655_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2655_, 0, v___y_2586_);
lean_ctor_set(v___x_2655_, 1, v___x_2649_);
lean_ctor_set(v___x_2655_, 2, v___x_2652_);
lean_ctor_set(v___x_2655_, 3, v___x_2654_);
v___x_2656_ = l_Lean_Syntax_node2(v___y_2586_, v___y_2592_, v___y_2593_, v___y_2575_);
v___x_2657_ = l_Lean_Syntax_node2(v___y_2586_, v___x_2604_, v___x_2655_, v___x_2656_);
v___x_2658_ = l_Lean_Syntax_node1(v___y_2586_, v___x_2602_, v___x_2657_);
v___x_2659_ = l_Lean_Syntax_node2(v___y_2586_, v___y_2584_, v___x_2658_, v___y_2574_);
v___x_2660_ = l_Lean_Syntax_node1(v___y_2586_, v___y_2592_, v___x_2659_);
lean_inc_n(v___y_2587_, 2);
v___x_2661_ = l_Lean_Syntax_node1(v___y_2586_, v___y_2587_, v___x_2660_);
lean_inc(v___y_2577_);
v___x_2662_ = l_Lean_Syntax_node2(v___y_2586_, v___x_2648_, v___y_2577_, v___x_2661_);
v___x_2663_ = l_Lean_Syntax_node3(v___y_2586_, v___x_2615_, v___x_2629_, v___x_2662_, v___x_2646_);
v___x_2664_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__23);
v___x_2665_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__24));
v___x_2666_ = l_Lean_addMacroScope(v___y_2585_, v___x_2665_, v___y_2590_);
v___x_2667_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__27));
v___x_2668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2667_);
lean_ctor_set(v___x_2668_, 1, v___y_2582_);
v___x_2669_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2669_, 0, v___y_2586_);
lean_ctor_set(v___x_2669_, 1, v___x_2664_);
lean_ctor_set(v___x_2669_, 2, v___x_2666_);
lean_ctor_set(v___x_2669_, 3, v___x_2668_);
v___x_2670_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__28));
v___x_2671_ = l_Lean_Name_mkStr4(v___y_2580_, v___y_2591_, v___y_2579_, v___x_2670_);
v___x_2672_ = l_Lean_Syntax_node3(v___y_2586_, v___x_2671_, v___x_2629_, v___y_2574_, v___x_2646_);
v___x_2673_ = l_Lean_Syntax_node1(v___y_2586_, v___y_2592_, v___x_2672_);
v___x_2674_ = l_Lean_Syntax_node2(v___y_2586_, v___x_2604_, v___x_2669_, v___x_2673_);
v___x_2675_ = l_Lean_Syntax_node3(v___y_2586_, v___x_2615_, v___x_2629_, v___x_2674_, v___x_2646_);
v___x_2676_ = l_Lean_Syntax_node3(v___y_2586_, v___y_2592_, v___x_2647_, v___x_2663_, v___x_2675_);
v___x_2677_ = l_Lean_Syntax_node2(v___y_2586_, v___x_2604_, v___x_2613_, v___x_2676_);
v___x_2678_ = l_Lean_Syntax_node1(v___y_2586_, v___x_2602_, v___x_2677_);
v___x_2679_ = l_Lean_Syntax_node2(v___y_2586_, v___y_2584_, v___x_2678_, v___y_2574_);
v___x_2680_ = l_Lean_Syntax_node2(v___y_2586_, v___y_2592_, v___x_2600_, v___x_2679_);
v___x_2681_ = l_Lean_Syntax_node1(v___y_2586_, v___y_2587_, v___x_2680_);
lean_inc(v___y_2589_);
v___x_2682_ = l_Lean_Syntax_node2(v___y_2586_, v___y_2589_, v___y_2577_, v___x_2681_);
v___x_2683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2682_);
lean_ctor_set(v___x_2683_, 1, v___y_2588_);
return v___x_2683_;
}
v___jp_2684_:
{
uint8_t v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2690_ = 0;
v___x_2691_ = l_Lean_SourceInfo_fromRef(v_ref_2688_, v___x_2690_);
v___x_2692_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__0));
v___x_2693_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__1));
v___x_2694_ = ((lean_object*)(l_Lean_registerTraceClass___auto__1___closed__0));
v___x_2695_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__30));
v___x_2696_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__31));
lean_inc_n(v___x_2691_, 7);
v___x_2697_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2691_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__33));
v___x_2699_ = ((lean_object*)(l_Lean_MonadTrace_getInheritedTraceOptions___autoParam___closed__9));
v___x_2700_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__35));
v___x_2701_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__37));
v___x_2702_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__38));
v___x_2703_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2691_);
lean_ctor_set(v___x_2703_, 1, v___x_2702_);
v___x_2704_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__39);
v___x_2705_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2691_);
lean_ctor_set(v___x_2705_, 1, v___x_2699_);
lean_ctor_set(v___x_2705_, 2, v___x_2704_);
v___x_2706_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__41));
lean_inc_ref(v___x_2705_);
v___x_2707_ = l_Lean_Syntax_node1(v___x_2691_, v___x_2706_, v___x_2705_);
v___x_2708_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__43));
v___x_2709_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__45));
v___x_2710_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__47));
v___x_2711_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49, &l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49_once, _init_l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__49);
v___x_2712_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__50));
lean_inc(v_currMacroScope_2687_);
lean_inc(v_quotContext_2686_);
v___x_2713_ = l_Lean_addMacroScope(v_quotContext_2686_, v___x_2712_, v_currMacroScope_2687_);
v___x_2714_ = lean_box(0);
v___x_2715_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2715_, 0, v___x_2691_);
lean_ctor_set(v___x_2715_, 1, v___x_2711_);
lean_ctor_set(v___x_2715_, 2, v___x_2713_);
lean_ctor_set(v___x_2715_, 3, v___x_2714_);
lean_inc_ref(v___x_2715_);
v___x_2716_ = l_Lean_Syntax_node1(v___x_2691_, v___x_2710_, v___x_2715_);
v___x_2717_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__51));
v___x_2718_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2691_);
lean_ctor_set(v___x_2718_, 1, v___x_2717_);
v___x_2719_ = l_Lean_Syntax_getId(v_id_2567_);
v___x_2720_ = l_Lean_Name_eraseMacroScopes(v___x_2719_);
lean_dec(v___x_2719_);
lean_inc(v___x_2720_);
v___x_2721_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_2714_, v___x_2720_);
if (lean_obj_tag(v___x_2721_) == 0)
{
lean_object* v___x_2722_; 
v___x_2722_ = l_Lean_quoteNameMk(v___x_2720_);
v___y_2572_ = v___x_2716_;
v___y_2573_ = v___x_2703_;
v___y_2574_ = v___x_2705_;
v___y_2575_ = v_msg_2685_;
v___y_2576_ = v___x_2696_;
v___y_2577_ = v___x_2697_;
v___y_2578_ = v___x_2718_;
v___y_2579_ = v___x_2694_;
v___y_2580_ = v___x_2692_;
v___y_2581_ = v___x_2709_;
v___y_2582_ = v___x_2714_;
v___y_2583_ = v___x_2707_;
v___y_2584_ = v___x_2700_;
v___y_2585_ = v_quotContext_2686_;
v___y_2586_ = v___x_2691_;
v___y_2587_ = v___x_2698_;
v___y_2588_ = v___y_2689_;
v___y_2589_ = v___x_2695_;
v___y_2590_ = v_currMacroScope_2687_;
v___y_2591_ = v___x_2693_;
v___y_2592_ = v___x_2699_;
v___y_2593_ = v___x_2715_;
v___y_2594_ = v___x_2708_;
v___y_2595_ = v___x_2701_;
v___y_2596_ = v___x_2722_;
goto v___jp_2571_;
}
else
{
lean_object* v_val_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; 
lean_dec(v___x_2720_);
v_val_2723_ = lean_ctor_get(v___x_2721_, 0);
lean_inc(v_val_2723_);
lean_dec_ref_known(v___x_2721_, 1);
v___x_2724_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__53));
v___x_2725_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__54));
v___x_2726_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___closed__55));
v___x_2727_ = lean_string_intercalate(v___x_2726_, v_val_2723_);
v___x_2728_ = lean_string_append(v___x_2725_, v___x_2727_);
lean_dec_ref(v___x_2727_);
v___x_2729_ = lean_box(2);
v___x_2730_ = l_Lean_Syntax_mkNameLit(v___x_2728_, v___x_2729_);
v___x_2731_ = lean_unsigned_to_nat(1u);
v___x_2732_ = lean_mk_empty_array_with_capacity(v___x_2731_);
v___x_2733_ = lean_array_push(v___x_2732_, v___x_2730_);
v___x_2734_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2734_, 0, v___x_2729_);
lean_ctor_set(v___x_2734_, 1, v___x_2724_);
lean_ctor_set(v___x_2734_, 2, v___x_2733_);
v___y_2572_ = v___x_2716_;
v___y_2573_ = v___x_2703_;
v___y_2574_ = v___x_2705_;
v___y_2575_ = v_msg_2685_;
v___y_2576_ = v___x_2696_;
v___y_2577_ = v___x_2697_;
v___y_2578_ = v___x_2718_;
v___y_2579_ = v___x_2694_;
v___y_2580_ = v___x_2692_;
v___y_2581_ = v___x_2709_;
v___y_2582_ = v___x_2714_;
v___y_2583_ = v___x_2707_;
v___y_2584_ = v___x_2700_;
v___y_2585_ = v_quotContext_2686_;
v___y_2586_ = v___x_2691_;
v___y_2587_ = v___x_2698_;
v___y_2588_ = v___y_2689_;
v___y_2589_ = v___x_2695_;
v___y_2590_ = v_currMacroScope_2687_;
v___y_2591_ = v___x_2693_;
v___y_2592_ = v___x_2699_;
v___y_2593_ = v___x_2715_;
v___y_2594_ = v___x_2708_;
v___y_2595_ = v___x_2701_;
v___y_2596_ = v___x_2734_;
goto v___jp_2571_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_expandTraceMacro___boxed(lean_object* v_id_2775_, lean_object* v_s_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(v_id_2775_, v_s_2776_, v_a_2777_, v_a_2778_);
lean_dec_ref(v_a_2777_);
lean_dec(v_id_2775_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1(lean_object* v_x_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_){
_start:
{
lean_object* v___x_2837_; uint8_t v___x_2838_; 
v___x_2837_ = ((lean_object*)(l_Lean_doElemTrace_x5b___x5d_____00__closed__1));
lean_inc(v_x_2834_);
v___x_2838_ = l_Lean_Syntax_isOfKind(v_x_2834_, v___x_2837_);
if (v___x_2838_ == 0)
{
lean_object* v___x_2839_; lean_object* v___x_2840_; 
lean_dec(v_x_2834_);
v___x_2839_ = lean_box(1);
v___x_2840_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2840_, 0, v___x_2839_);
lean_ctor_set(v___x_2840_, 1, v_a_2836_);
return v___x_2840_;
}
else
{
lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v_a_2846_; lean_object* v_a_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2854_; 
v___x_2841_ = lean_unsigned_to_nat(1u);
v___x_2842_ = l_Lean_Syntax_getArg(v_x_2834_, v___x_2841_);
v___x_2843_ = lean_unsigned_to_nat(3u);
v___x_2844_ = l_Lean_Syntax_getArg(v_x_2834_, v___x_2843_);
lean_dec(v_x_2834_);
v___x_2845_ = l___private_Lean_Util_Trace_0__Lean_expandTraceMacro(v___x_2842_, v___x_2844_, v_a_2835_, v_a_2836_);
lean_dec(v___x_2842_);
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
v_a_2847_ = lean_ctor_get(v___x_2845_, 1);
v_isSharedCheck_2854_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2849_ = v___x_2845_;
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_a_2847_);
lean_inc(v_a_2846_);
lean_dec(v___x_2845_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v___x_2852_; 
if (v_isShared_2850_ == 0)
{
v___x_2852_ = v___x_2849_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v_a_2846_);
lean_ctor_set(v_reuseFailAlloc_2853_, 1, v_a_2847_);
v___x_2852_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
return v___x_2852_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1___boxed(lean_object* v_x_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_){
_start:
{
lean_object* v_res_2858_; 
v_res_2858_ = l_Lean___aux__Lean__Util__Trace______macroRules__Lean__doElemTrace_x5b___x5d______1(v_x_2855_, v_a_2856_, v_a_2857_);
lean_dec_ref(v_a_2856_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(lean_object* v_inst_2859_, lean_object* v_inst_2860_, lean_object* v_inst_2861_, lean_object* v_inst_2862_, lean_object* v_always_2863_, lean_object* v_inst_2864_, lean_object* v_cls_2865_, uint8_t v_collapsed_2866_, lean_object* v_tag_2867_, lean_object* v_opts_2868_, uint8_t v_clsEnabled_2869_, lean_object* v_oldTraces_2870_, lean_object* v_ref_2871_, lean_object* v_msg_2872_, lean_object* v_resStartStop_2873_){
_start:
{
lean_object* v___x_2874_; lean_object* v_toBind_2875_; lean_object* v___x_2876_; lean_object* v_snd_2877_; lean_object* v_fst_2878_; lean_object* v_fst_2879_; lean_object* v_snd_2880_; lean_object* v___f_2881_; lean_object* v___f_2882_; lean_object* v_data_2884_; lean_object* v___x_2887_; lean_object* v___x_2888_; uint8_t v___y_2899_; double v___y_2904_; uint8_t v___x_2909_; 
v___x_2874_ = l_Lean_KVMap_instValueBool;
v_toBind_2875_ = lean_ctor_get(v_inst_2859_, 1);
lean_inc(v_toBind_2875_);
v___x_2876_ = l_instMonadExceptOfMonadExceptOf___redArg(v_always_2863_);
v_snd_2877_ = lean_ctor_get(v_resStartStop_2873_, 1);
lean_inc(v_snd_2877_);
v_fst_2878_ = lean_ctor_get(v_resStartStop_2873_, 0);
lean_inc_n(v_fst_2878_, 2);
lean_dec_ref(v_resStartStop_2873_);
v_fst_2879_ = lean_ctor_get(v_snd_2877_, 0);
lean_inc(v_fst_2879_);
v_snd_2880_ = lean_ctor_get(v_snd_2877_, 1);
lean_inc(v_snd_2880_);
lean_dec(v_snd_2877_);
lean_inc_ref(v_oldTraces_2870_);
v___f_2881_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2881_, 0, v_oldTraces_2870_);
lean_inc_ref(v_inst_2859_);
v___f_2882_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___redArg___lam__2), 4, 3);
lean_closure_set(v___f_2882_, 0, v_inst_2859_);
lean_closure_set(v___f_2882_, 1, v___x_2876_);
lean_closure_set(v___f_2882_, 2, v_fst_2878_);
v___x_2887_ = l_Lean_trace_profiler;
v___x_2888_ = l_Lean_Option_get___redArg(v___x_2874_, v_opts_2868_, v___x_2887_);
v___x_2909_ = lean_unbox(v___x_2888_);
if (v___x_2909_ == 0)
{
uint8_t v___x_2910_; 
v___x_2910_ = lean_unbox(v___x_2888_);
v___y_2899_ = v___x_2910_;
goto v___jp_2898_;
}
else
{
lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; uint8_t v___x_2914_; 
v___x_2911_ = l_Lean_KVMap_instValueNat;
v___x_2912_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2913_ = l_Lean_Option_get___redArg(v___x_2874_, v_opts_2868_, v___x_2912_);
v___x_2914_ = lean_unbox(v___x_2913_);
lean_dec(v___x_2913_);
if (v___x_2914_ == 0)
{
lean_object* v___x_2915_; lean_object* v___x_2916_; double v___x_2917_; double v___x_2918_; double v___x_2919_; 
v___x_2915_ = l_Lean_trace_profiler_threshold;
v___x_2916_ = l_Lean_Option_get___redArg(v___x_2911_, v_opts_2868_, v___x_2915_);
v___x_2917_ = lean_float_of_nat(v___x_2916_);
v___x_2918_ = lean_float_once(&l_Lean_trace_profiler_threshold_unitAdjusted___closed__0, &l_Lean_trace_profiler_threshold_unitAdjusted___closed__0_once, _init_l_Lean_trace_profiler_threshold_unitAdjusted___closed__0);
v___x_2919_ = lean_float_div(v___x_2917_, v___x_2918_);
v___y_2904_ = v___x_2919_;
goto v___jp_2903_;
}
else
{
lean_object* v___x_2920_; lean_object* v___x_2921_; double v___x_2922_; 
v___x_2920_ = l_Lean_trace_profiler_threshold;
v___x_2921_ = l_Lean_Option_get___redArg(v___x_2911_, v_opts_2868_, v___x_2920_);
v___x_2922_ = lean_float_of_nat(v___x_2921_);
v___y_2904_ = v___x_2922_;
goto v___jp_2903_;
}
}
v___jp_2883_:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; 
v___x_2885_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg(v_inst_2859_, v_inst_2860_, v_inst_2861_, v_inst_2862_, v_oldTraces_2870_, v_data_2884_, v_ref_2871_, v_msg_2872_);
v___x_2886_ = lean_apply_4(v_toBind_2875_, lean_box(0), lean_box(0), v___x_2885_, v___f_2882_);
return v___x_2886_;
}
v___jp_2889_:
{
lean_object* v_result_2890_; lean_object* v___x_2891_; double v___x_2892_; lean_object* v_data_2893_; uint8_t v___x_2894_; 
v_result_2890_ = lean_apply_1(v_inst_2864_, v_fst_2878_);
v___x_2891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2891_, 0, v_result_2890_);
v___x_2892_ = lean_float_once(&l_Lean_addTrace___redArg___lam__0___closed__0, &l_Lean_addTrace___redArg___lam__0___closed__0_once, _init_l_Lean_addTrace___redArg___lam__0___closed__0);
lean_inc_ref(v_tag_2867_);
lean_inc_ref(v___x_2891_);
lean_inc(v_cls_2865_);
v_data_2893_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2893_, 0, v_cls_2865_);
lean_ctor_set(v_data_2893_, 1, v___x_2891_);
lean_ctor_set(v_data_2893_, 2, v_tag_2867_);
lean_ctor_set_float(v_data_2893_, sizeof(void*)*3, v___x_2892_);
lean_ctor_set_float(v_data_2893_, sizeof(void*)*3 + 8, v___x_2892_);
lean_ctor_set_uint8(v_data_2893_, sizeof(void*)*3 + 16, v_collapsed_2866_);
v___x_2894_ = lean_unbox(v___x_2888_);
lean_dec(v___x_2888_);
if (v___x_2894_ == 0)
{
lean_dec_ref_known(v___x_2891_, 1);
lean_dec(v_snd_2880_);
lean_dec(v_fst_2879_);
lean_dec_ref(v_tag_2867_);
lean_dec(v_cls_2865_);
v_data_2884_ = v_data_2893_;
goto v___jp_2883_;
}
else
{
lean_object* v_data_2895_; double v___x_2896_; double v___x_2897_; 
lean_dec_ref_known(v_data_2893_, 3);
v_data_2895_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_2895_, 0, v_cls_2865_);
lean_ctor_set(v_data_2895_, 1, v___x_2891_);
lean_ctor_set(v_data_2895_, 2, v_tag_2867_);
v___x_2896_ = lean_unbox_float(v_fst_2879_);
lean_dec(v_fst_2879_);
lean_ctor_set_float(v_data_2895_, sizeof(void*)*3, v___x_2896_);
v___x_2897_ = lean_unbox_float(v_snd_2880_);
lean_dec(v_snd_2880_);
lean_ctor_set_float(v_data_2895_, sizeof(void*)*3 + 8, v___x_2897_);
lean_ctor_set_uint8(v_data_2895_, sizeof(void*)*3 + 16, v_collapsed_2866_);
v_data_2884_ = v_data_2895_;
goto v___jp_2883_;
}
}
v___jp_2898_:
{
if (v_clsEnabled_2869_ == 0)
{
if (v___y_2899_ == 0)
{
lean_object* v_modifyTraceState_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
lean_dec(v___x_2888_);
lean_dec(v_snd_2880_);
lean_dec(v_fst_2879_);
lean_dec(v_fst_2878_);
lean_dec_ref(v_msg_2872_);
lean_dec(v_ref_2871_);
lean_dec_ref(v_oldTraces_2870_);
lean_dec_ref(v_tag_2867_);
lean_dec(v_cls_2865_);
lean_dec_ref(v_inst_2864_);
lean_dec(v_inst_2862_);
lean_dec_ref(v_inst_2861_);
lean_dec_ref(v_inst_2859_);
v_modifyTraceState_2900_ = lean_ctor_get(v_inst_2860_, 0);
lean_inc(v_modifyTraceState_2900_);
lean_dec_ref(v_inst_2860_);
v___x_2901_ = lean_apply_1(v_modifyTraceState_2900_, v___f_2881_);
v___x_2902_ = lean_apply_4(v_toBind_2875_, lean_box(0), lean_box(0), v___x_2901_, v___f_2882_);
return v___x_2902_;
}
else
{
lean_dec_ref(v___f_2881_);
goto v___jp_2889_;
}
}
else
{
lean_dec_ref(v___f_2881_);
goto v___jp_2889_;
}
}
v___jp_2903_:
{
double v___x_2905_; double v___x_2906_; double v___x_2907_; uint8_t v___x_2908_; 
v___x_2905_ = lean_unbox_float(v_snd_2880_);
v___x_2906_ = lean_unbox_float(v_fst_2879_);
v___x_2907_ = lean_float_sub(v___x_2905_, v___x_2906_);
v___x_2908_ = lean_float_decLt(v___y_2904_, v___x_2907_);
v___y_2899_ = v___x_2908_;
goto v___jp_2898_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg___boxed(lean_object* v_inst_2923_, lean_object* v_inst_2924_, lean_object* v_inst_2925_, lean_object* v_inst_2926_, lean_object* v_always_2927_, lean_object* v_inst_2928_, lean_object* v_cls_2929_, lean_object* v_collapsed_2930_, lean_object* v_tag_2931_, lean_object* v_opts_2932_, lean_object* v_clsEnabled_2933_, lean_object* v_oldTraces_2934_, lean_object* v_ref_2935_, lean_object* v_msg_2936_, lean_object* v_resStartStop_2937_){
_start:
{
uint8_t v_collapsed_boxed_2938_; uint8_t v_clsEnabled_boxed_2939_; lean_object* v_res_2940_; 
v_collapsed_boxed_2938_ = lean_unbox(v_collapsed_2930_);
v_clsEnabled_boxed_2939_ = lean_unbox(v_clsEnabled_2933_);
v_res_2940_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2923_, v_inst_2924_, v_inst_2925_, v_inst_2926_, v_always_2927_, v_inst_2928_, v_cls_2929_, v_collapsed_boxed_2938_, v_tag_2931_, v_opts_2932_, v_clsEnabled_boxed_2939_, v_oldTraces_2934_, v_ref_2935_, v_msg_2936_, v_resStartStop_2937_);
lean_dec_ref(v_opts_2932_);
return v_res_2940_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback(lean_object* v_00_u03b1_2941_, lean_object* v_m_2942_, lean_object* v_inst_2943_, lean_object* v_inst_2944_, lean_object* v_00_u03b5_2945_, lean_object* v_inst_2946_, lean_object* v_inst_2947_, lean_object* v_always_2948_, lean_object* v_inst_2949_, lean_object* v_cls_2950_, uint8_t v_collapsed_2951_, lean_object* v_tag_2952_, lean_object* v_opts_2953_, uint8_t v_clsEnabled_2954_, lean_object* v_oldTraces_2955_, lean_object* v_ref_2956_, lean_object* v_msg_2957_, lean_object* v_resStartStop_2958_){
_start:
{
lean_object* v___x_2959_; 
v___x_2959_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2943_, v_inst_2944_, v_inst_2946_, v_inst_2947_, v_always_2948_, v_inst_2949_, v_cls_2950_, v_collapsed_2951_, v_tag_2952_, v_opts_2953_, v_clsEnabled_2954_, v_oldTraces_2955_, v_ref_2956_, v_msg_2957_, v_resStartStop_2958_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___boxed(lean_object** _args){
lean_object* v_00_u03b1_2960_ = _args[0];
lean_object* v_m_2961_ = _args[1];
lean_object* v_inst_2962_ = _args[2];
lean_object* v_inst_2963_ = _args[3];
lean_object* v_00_u03b5_2964_ = _args[4];
lean_object* v_inst_2965_ = _args[5];
lean_object* v_inst_2966_ = _args[6];
lean_object* v_always_2967_ = _args[7];
lean_object* v_inst_2968_ = _args[8];
lean_object* v_cls_2969_ = _args[9];
lean_object* v_collapsed_2970_ = _args[10];
lean_object* v_tag_2971_ = _args[11];
lean_object* v_opts_2972_ = _args[12];
lean_object* v_clsEnabled_2973_ = _args[13];
lean_object* v_oldTraces_2974_ = _args[14];
lean_object* v_ref_2975_ = _args[15];
lean_object* v_msg_2976_ = _args[16];
lean_object* v_resStartStop_2977_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_2978_; uint8_t v_clsEnabled_boxed_2979_; lean_object* v_res_2980_; 
v_collapsed_boxed_2978_ = lean_unbox(v_collapsed_2970_);
v_clsEnabled_boxed_2979_ = lean_unbox(v_clsEnabled_2973_);
v_res_2980_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback(v_00_u03b1_2960_, v_m_2961_, v_inst_2962_, v_inst_2963_, v_00_u03b5_2964_, v_inst_2965_, v_inst_2966_, v_always_2967_, v_inst_2968_, v_cls_2969_, v_collapsed_boxed_2978_, v_tag_2971_, v_opts_2972_, v_clsEnabled_boxed_2979_, v_oldTraces_2974_, v_ref_2975_, v_msg_2976_, v_resStartStop_2977_);
lean_dec_ref(v_opts_2972_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__0(lean_object* v_inst_2981_, lean_object* v_____do__lift_2982_){
_start:
{
lean_object* v___x_2983_; 
v___x_2983_ = lean_apply_1(v_inst_2981_, v_____do__lift_2982_);
return v___x_2983_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1(lean_object* v_inst_2984_, lean_object* v_inst_2985_, lean_object* v_inst_2986_, lean_object* v_inst_2987_, lean_object* v_always_2988_, lean_object* v_inst_2989_, lean_object* v_cls_2990_, uint8_t v_collapsed_2991_, lean_object* v_tag_2992_, lean_object* v_opts_2993_, uint8_t v_clsEnabled_2994_, lean_object* v_oldTraces_2995_, lean_object* v_ref_2996_, lean_object* v_msg_2997_, lean_object* v_resStartStop_2998_){
_start:
{
lean_object* v___x_2999_; 
v___x_2999_ = l___private_Lean_Util_Trace_0__Lean_withTraceNodeBefore_postCallback___redArg(v_inst_2984_, v_inst_2985_, v_inst_2986_, v_inst_2987_, v_always_2988_, v_inst_2989_, v_cls_2990_, v_collapsed_2991_, v_tag_2992_, v_opts_2993_, v_clsEnabled_2994_, v_oldTraces_2995_, v_ref_2996_, v_msg_2997_, v_resStartStop_2998_);
return v___x_2999_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__1___boxed(lean_object* v_inst_3000_, lean_object* v_inst_3001_, lean_object* v_inst_3002_, lean_object* v_inst_3003_, lean_object* v_always_3004_, lean_object* v_inst_3005_, lean_object* v_cls_3006_, lean_object* v_collapsed_3007_, lean_object* v_tag_3008_, lean_object* v_opts_3009_, lean_object* v_clsEnabled_3010_, lean_object* v_oldTraces_3011_, lean_object* v_ref_3012_, lean_object* v_msg_3013_, lean_object* v_resStartStop_3014_){
_start:
{
uint8_t v_collapsed_boxed_3015_; uint8_t v_clsEnabled_boxed_3016_; lean_object* v_res_3017_; 
v_collapsed_boxed_3015_ = lean_unbox(v_collapsed_3007_);
v_clsEnabled_boxed_3016_ = lean_unbox(v_clsEnabled_3010_);
v_res_3017_ = l_Lean_withTraceNodeBefore___redArg___lam__1(v_inst_3000_, v_inst_3001_, v_inst_3002_, v_inst_3003_, v_always_3004_, v_inst_3005_, v_cls_3006_, v_collapsed_boxed_3015_, v_tag_3008_, v_opts_3009_, v_clsEnabled_boxed_3016_, v_oldTraces_3011_, v_ref_3012_, v_msg_3013_, v_resStartStop_3014_);
lean_dec_ref(v_opts_3009_);
return v_res_3017_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10(lean_object* v_always_3018_, lean_object* v_inst_3019_, lean_object* v_inst_3020_, lean_object* v_inst_3021_, lean_object* v_inst_3022_, lean_object* v_inst_3023_, lean_object* v_cls_3024_, uint8_t v_collapsed_3025_, lean_object* v_tag_3026_, lean_object* v_opts_3027_, uint8_t v_clsEnabled_3028_, lean_object* v_oldTraces_3029_, lean_object* v_ref_3030_, lean_object* v_toPure_3031_, lean_object* v_toBind_3032_, lean_object* v_k_3033_, lean_object* v___x_3034_, lean_object* v_inst_3035_, lean_object* v_msg_3036_){
_start:
{
lean_object* v_tryCatch_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___f_3040_; lean_object* v___f_3041_; lean_object* v___f_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; uint8_t v___x_3047_; 
v_tryCatch_3037_ = lean_ctor_get(v_always_3018_, 1);
lean_inc(v_tryCatch_3037_);
v___x_3038_ = lean_box(v_collapsed_3025_);
v___x_3039_ = lean_box(v_clsEnabled_3028_);
lean_inc_ref(v_opts_3027_);
v___f_3040_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__1___boxed), 15, 14);
lean_closure_set(v___f_3040_, 0, v_inst_3019_);
lean_closure_set(v___f_3040_, 1, v_inst_3020_);
lean_closure_set(v___f_3040_, 2, v_inst_3021_);
lean_closure_set(v___f_3040_, 3, v_inst_3022_);
lean_closure_set(v___f_3040_, 4, v_always_3018_);
lean_closure_set(v___f_3040_, 5, v_inst_3023_);
lean_closure_set(v___f_3040_, 6, v_cls_3024_);
lean_closure_set(v___f_3040_, 7, v___x_3038_);
lean_closure_set(v___f_3040_, 8, v_tag_3026_);
lean_closure_set(v___f_3040_, 9, v_opts_3027_);
lean_closure_set(v___f_3040_, 10, v___x_3039_);
lean_closure_set(v___f_3040_, 11, v_oldTraces_3029_);
lean_closure_set(v___f_3040_, 12, v_ref_3030_);
lean_closure_set(v___f_3040_, 13, v_msg_3036_);
lean_inc_n(v_toPure_3031_, 2);
v___f_3041_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__1), 2, 1);
lean_closure_set(v___f_3041_, 0, v_toPure_3031_);
v___f_3042_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3042_, 0, v_toPure_3031_);
lean_inc(v_toBind_3032_);
v___x_3043_ = lean_apply_4(v_toBind_3032_, lean_box(0), lean_box(0), v_k_3033_, v___f_3042_);
v___x_3044_ = lean_apply_3(v_tryCatch_3037_, lean_box(0), v___x_3043_, v___f_3041_);
v___x_3045_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3046_ = l_Lean_Option_get___redArg(v___x_3034_, v_opts_3027_, v___x_3045_);
lean_dec_ref(v_opts_3027_);
v___x_3047_ = lean_unbox(v___x_3046_);
lean_dec(v___x_3046_);
if (v___x_3047_ == 0)
{
lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___f_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3048_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__0));
v___x_3049_ = lean_apply_2(v_inst_3035_, lean_box(0), v___x_3048_);
lean_inc(v___x_3049_);
lean_inc_n(v_toBind_3032_, 2);
v___f_3050_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__5), 5, 4);
lean_closure_set(v___f_3050_, 0, v_toPure_3031_);
lean_closure_set(v___f_3050_, 1, v_toBind_3032_);
lean_closure_set(v___f_3050_, 2, v___x_3049_);
lean_closure_set(v___f_3050_, 3, v___x_3044_);
v___x_3051_ = lean_apply_4(v_toBind_3032_, lean_box(0), lean_box(0), v___x_3049_, v___f_3050_);
v___x_3052_ = lean_apply_4(v_toBind_3032_, lean_box(0), lean_box(0), v___x_3051_, v___f_3040_);
return v___x_3052_;
}
else
{
lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___f_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; 
v___x_3053_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withStartStop___redArg___closed__1));
v___x_3054_ = lean_apply_2(v_inst_3035_, lean_box(0), v___x_3053_);
lean_inc(v___x_3054_);
lean_inc_n(v_toBind_3032_, 2);
v___f_3055_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__8), 5, 4);
lean_closure_set(v___f_3055_, 0, v_toPure_3031_);
lean_closure_set(v___f_3055_, 1, v_toBind_3032_);
lean_closure_set(v___f_3055_, 2, v___x_3054_);
lean_closure_set(v___f_3055_, 3, v___x_3044_);
v___x_3056_ = lean_apply_4(v_toBind_3032_, lean_box(0), lean_box(0), v___x_3054_, v___f_3055_);
v___x_3057_ = lean_apply_4(v_toBind_3032_, lean_box(0), lean_box(0), v___x_3056_, v___f_3040_);
return v___x_3057_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__10___boxed(lean_object** _args){
lean_object* v_always_3058_ = _args[0];
lean_object* v_inst_3059_ = _args[1];
lean_object* v_inst_3060_ = _args[2];
lean_object* v_inst_3061_ = _args[3];
lean_object* v_inst_3062_ = _args[4];
lean_object* v_inst_3063_ = _args[5];
lean_object* v_cls_3064_ = _args[6];
lean_object* v_collapsed_3065_ = _args[7];
lean_object* v_tag_3066_ = _args[8];
lean_object* v_opts_3067_ = _args[9];
lean_object* v_clsEnabled_3068_ = _args[10];
lean_object* v_oldTraces_3069_ = _args[11];
lean_object* v_ref_3070_ = _args[12];
lean_object* v_toPure_3071_ = _args[13];
lean_object* v_toBind_3072_ = _args[14];
lean_object* v_k_3073_ = _args[15];
lean_object* v___x_3074_ = _args[16];
lean_object* v_inst_3075_ = _args[17];
lean_object* v_msg_3076_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_3077_; uint8_t v_clsEnabled_boxed_3078_; lean_object* v_res_3079_; 
v_collapsed_boxed_3077_ = lean_unbox(v_collapsed_3065_);
v_clsEnabled_boxed_3078_ = lean_unbox(v_clsEnabled_3068_);
v_res_3079_ = l_Lean_withTraceNodeBefore___redArg___lam__10(v_always_3058_, v_inst_3059_, v_inst_3060_, v_inst_3061_, v_inst_3062_, v_inst_3063_, v_cls_3064_, v_collapsed_boxed_3077_, v_tag_3066_, v_opts_3067_, v_clsEnabled_boxed_3078_, v_oldTraces_3069_, v_ref_3070_, v_toPure_3071_, v_toBind_3072_, v_k_3073_, v___x_3074_, v_inst_3075_, v_msg_3076_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3(lean_object* v_always_3080_, lean_object* v_inst_3081_, lean_object* v_inst_3082_, lean_object* v_inst_3083_, lean_object* v_inst_3084_, lean_object* v_inst_3085_, lean_object* v_cls_3086_, uint8_t v_collapsed_3087_, lean_object* v_tag_3088_, lean_object* v_opts_3089_, uint8_t v_clsEnabled_3090_, lean_object* v_oldTraces_3091_, lean_object* v_toPure_3092_, lean_object* v_toBind_3093_, lean_object* v_k_3094_, lean_object* v___x_3095_, lean_object* v_inst_3096_, lean_object* v_msg_3097_, lean_object* v___f_3098_, lean_object* v_withRef_3099_, lean_object* v_getRef_3100_, lean_object* v_ref_3101_){
_start:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___f_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___f_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3102_ = lean_box(v_collapsed_3087_);
v___x_3103_ = lean_box(v_clsEnabled_3090_);
lean_inc_n(v_toBind_3093_, 3);
lean_inc(v_ref_3101_);
v___f_3104_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__10___boxed), 19, 18);
lean_closure_set(v___f_3104_, 0, v_always_3080_);
lean_closure_set(v___f_3104_, 1, v_inst_3081_);
lean_closure_set(v___f_3104_, 2, v_inst_3082_);
lean_closure_set(v___f_3104_, 3, v_inst_3083_);
lean_closure_set(v___f_3104_, 4, v_inst_3084_);
lean_closure_set(v___f_3104_, 5, v_inst_3085_);
lean_closure_set(v___f_3104_, 6, v_cls_3086_);
lean_closure_set(v___f_3104_, 7, v___x_3102_);
lean_closure_set(v___f_3104_, 8, v_tag_3088_);
lean_closure_set(v___f_3104_, 9, v_opts_3089_);
lean_closure_set(v___f_3104_, 10, v___x_3103_);
lean_closure_set(v___f_3104_, 11, v_oldTraces_3091_);
lean_closure_set(v___f_3104_, 12, v_ref_3101_);
lean_closure_set(v___f_3104_, 13, v_toPure_3092_);
lean_closure_set(v___f_3104_, 14, v_toBind_3093_);
lean_closure_set(v___f_3104_, 15, v_k_3094_);
lean_closure_set(v___f_3104_, 16, v___x_3095_);
lean_closure_set(v___f_3104_, 17, v_inst_3096_);
v___x_3105_ = lean_box(0);
v___x_3106_ = lean_apply_1(v_msg_3097_, v___x_3105_);
v___x_3107_ = lean_apply_4(v_toBind_3093_, lean_box(0), lean_box(0), v___x_3106_, v___f_3098_);
v___f_3108_ = lean_alloc_closure((void*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_3108_, 0, v_ref_3101_);
lean_closure_set(v___f_3108_, 1, v_withRef_3099_);
lean_closure_set(v___f_3108_, 2, v___x_3107_);
v___x_3109_ = lean_apply_4(v_toBind_3093_, lean_box(0), lean_box(0), v_getRef_3100_, v___f_3108_);
v___x_3110_ = lean_apply_4(v_toBind_3093_, lean_box(0), lean_box(0), v___x_3109_, v___f_3104_);
return v___x_3110_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_always_3111_ = _args[0];
lean_object* v_inst_3112_ = _args[1];
lean_object* v_inst_3113_ = _args[2];
lean_object* v_inst_3114_ = _args[3];
lean_object* v_inst_3115_ = _args[4];
lean_object* v_inst_3116_ = _args[5];
lean_object* v_cls_3117_ = _args[6];
lean_object* v_collapsed_3118_ = _args[7];
lean_object* v_tag_3119_ = _args[8];
lean_object* v_opts_3120_ = _args[9];
lean_object* v_clsEnabled_3121_ = _args[10];
lean_object* v_oldTraces_3122_ = _args[11];
lean_object* v_toPure_3123_ = _args[12];
lean_object* v_toBind_3124_ = _args[13];
lean_object* v_k_3125_ = _args[14];
lean_object* v___x_3126_ = _args[15];
lean_object* v_inst_3127_ = _args[16];
lean_object* v_msg_3128_ = _args[17];
lean_object* v___f_3129_ = _args[18];
lean_object* v_withRef_3130_ = _args[19];
lean_object* v_getRef_3131_ = _args[20];
lean_object* v_ref_3132_ = _args[21];
_start:
{
uint8_t v_collapsed_boxed_3133_; uint8_t v_clsEnabled_boxed_3134_; lean_object* v_res_3135_; 
v_collapsed_boxed_3133_ = lean_unbox(v_collapsed_3118_);
v_clsEnabled_boxed_3134_ = lean_unbox(v_clsEnabled_3121_);
v_res_3135_ = l_Lean_withTraceNodeBefore___redArg___lam__3(v_always_3111_, v_inst_3112_, v_inst_3113_, v_inst_3114_, v_inst_3115_, v_inst_3116_, v_cls_3117_, v_collapsed_boxed_3133_, v_tag_3119_, v_opts_3120_, v_clsEnabled_boxed_3134_, v_oldTraces_3122_, v_toPure_3123_, v_toBind_3124_, v_k_3125_, v___x_3126_, v_inst_3127_, v_msg_3128_, v___f_3129_, v_withRef_3130_, v_getRef_3131_, v_ref_3132_);
return v_res_3135_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2(lean_object* v_inst_3136_, lean_object* v_always_3137_, lean_object* v_inst_3138_, lean_object* v_inst_3139_, lean_object* v_inst_3140_, lean_object* v_inst_3141_, lean_object* v_cls_3142_, uint8_t v_collapsed_3143_, lean_object* v_tag_3144_, lean_object* v_opts_3145_, uint8_t v_clsEnabled_3146_, lean_object* v_toPure_3147_, lean_object* v_toBind_3148_, lean_object* v_k_3149_, lean_object* v___x_3150_, lean_object* v_inst_3151_, lean_object* v_msg_3152_, lean_object* v___f_3153_, lean_object* v_oldTraces_3154_){
_start:
{
lean_object* v_getRef_3155_; lean_object* v_withRef_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___f_3159_; lean_object* v___x_3160_; 
v_getRef_3155_ = lean_ctor_get(v_inst_3136_, 0);
lean_inc_n(v_getRef_3155_, 2);
v_withRef_3156_ = lean_ctor_get(v_inst_3136_, 1);
lean_inc(v_withRef_3156_);
v___x_3157_ = lean_box(v_collapsed_3143_);
v___x_3158_ = lean_box(v_clsEnabled_3146_);
lean_inc(v_toBind_3148_);
v___f_3159_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__3___boxed), 22, 21);
lean_closure_set(v___f_3159_, 0, v_always_3137_);
lean_closure_set(v___f_3159_, 1, v_inst_3138_);
lean_closure_set(v___f_3159_, 2, v_inst_3139_);
lean_closure_set(v___f_3159_, 3, v_inst_3136_);
lean_closure_set(v___f_3159_, 4, v_inst_3140_);
lean_closure_set(v___f_3159_, 5, v_inst_3141_);
lean_closure_set(v___f_3159_, 6, v_cls_3142_);
lean_closure_set(v___f_3159_, 7, v___x_3157_);
lean_closure_set(v___f_3159_, 8, v_tag_3144_);
lean_closure_set(v___f_3159_, 9, v_opts_3145_);
lean_closure_set(v___f_3159_, 10, v___x_3158_);
lean_closure_set(v___f_3159_, 11, v_oldTraces_3154_);
lean_closure_set(v___f_3159_, 12, v_toPure_3147_);
lean_closure_set(v___f_3159_, 13, v_toBind_3148_);
lean_closure_set(v___f_3159_, 14, v_k_3149_);
lean_closure_set(v___f_3159_, 15, v___x_3150_);
lean_closure_set(v___f_3159_, 16, v_inst_3151_);
lean_closure_set(v___f_3159_, 17, v_msg_3152_);
lean_closure_set(v___f_3159_, 18, v___f_3153_);
lean_closure_set(v___f_3159_, 19, v_withRef_3156_);
lean_closure_set(v___f_3159_, 20, v_getRef_3155_);
v___x_3160_ = lean_apply_4(v_toBind_3148_, lean_box(0), lean_box(0), v_getRef_3155_, v___f_3159_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__2___boxed(lean_object** _args){
lean_object* v_inst_3161_ = _args[0];
lean_object* v_always_3162_ = _args[1];
lean_object* v_inst_3163_ = _args[2];
lean_object* v_inst_3164_ = _args[3];
lean_object* v_inst_3165_ = _args[4];
lean_object* v_inst_3166_ = _args[5];
lean_object* v_cls_3167_ = _args[6];
lean_object* v_collapsed_3168_ = _args[7];
lean_object* v_tag_3169_ = _args[8];
lean_object* v_opts_3170_ = _args[9];
lean_object* v_clsEnabled_3171_ = _args[10];
lean_object* v_toPure_3172_ = _args[11];
lean_object* v_toBind_3173_ = _args[12];
lean_object* v_k_3174_ = _args[13];
lean_object* v___x_3175_ = _args[14];
lean_object* v_inst_3176_ = _args[15];
lean_object* v_msg_3177_ = _args[16];
lean_object* v___f_3178_ = _args[17];
lean_object* v_oldTraces_3179_ = _args[18];
_start:
{
uint8_t v_collapsed_boxed_3180_; uint8_t v_clsEnabled_boxed_3181_; lean_object* v_res_3182_; 
v_collapsed_boxed_3180_ = lean_unbox(v_collapsed_3168_);
v_clsEnabled_boxed_3181_ = lean_unbox(v_clsEnabled_3171_);
v_res_3182_ = l_Lean_withTraceNodeBefore___redArg___lam__2(v_inst_3161_, v_always_3162_, v_inst_3163_, v_inst_3164_, v_inst_3165_, v_inst_3166_, v_cls_3167_, v_collapsed_boxed_3180_, v_tag_3169_, v_opts_3170_, v_clsEnabled_boxed_3181_, v_toPure_3172_, v_toBind_3173_, v_k_3174_, v___x_3175_, v_inst_3176_, v_msg_3177_, v___f_3178_, v_oldTraces_3179_);
return v_res_3182_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4(lean_object* v_inst_3183_, lean_object* v_always_3184_, lean_object* v_inst_3185_, lean_object* v_inst_3186_, lean_object* v_inst_3187_, lean_object* v_inst_3188_, lean_object* v_cls_3189_, uint8_t v_collapsed_3190_, lean_object* v_tag_3191_, lean_object* v_opts_3192_, lean_object* v_toPure_3193_, lean_object* v_toBind_3194_, lean_object* v_k_3195_, lean_object* v___x_3196_, lean_object* v_inst_3197_, lean_object* v_msg_3198_, lean_object* v___f_3199_, uint8_t v_clsEnabled_3200_){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___f_3203_; 
v___x_3201_ = lean_box(v_collapsed_3190_);
v___x_3202_ = lean_box(v_clsEnabled_3200_);
lean_inc_ref(v___x_3196_);
lean_inc(v_k_3195_);
lean_inc(v_toBind_3194_);
lean_inc_ref(v_opts_3192_);
lean_inc_ref(v_inst_3186_);
lean_inc_ref(v_inst_3185_);
v___f_3203_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__2___boxed), 19, 18);
lean_closure_set(v___f_3203_, 0, v_inst_3183_);
lean_closure_set(v___f_3203_, 1, v_always_3184_);
lean_closure_set(v___f_3203_, 2, v_inst_3185_);
lean_closure_set(v___f_3203_, 3, v_inst_3186_);
lean_closure_set(v___f_3203_, 4, v_inst_3187_);
lean_closure_set(v___f_3203_, 5, v_inst_3188_);
lean_closure_set(v___f_3203_, 6, v_cls_3189_);
lean_closure_set(v___f_3203_, 7, v___x_3201_);
lean_closure_set(v___f_3203_, 8, v_tag_3191_);
lean_closure_set(v___f_3203_, 9, v_opts_3192_);
lean_closure_set(v___f_3203_, 10, v___x_3202_);
lean_closure_set(v___f_3203_, 11, v_toPure_3193_);
lean_closure_set(v___f_3203_, 12, v_toBind_3194_);
lean_closure_set(v___f_3203_, 13, v_k_3195_);
lean_closure_set(v___f_3203_, 14, v___x_3196_);
lean_closure_set(v___f_3203_, 15, v_inst_3197_);
lean_closure_set(v___f_3203_, 16, v_msg_3198_);
lean_closure_set(v___f_3203_, 17, v___f_3199_);
if (v_clsEnabled_3200_ == 0)
{
lean_object* v___x_3207_; lean_object* v___x_3208_; uint8_t v___x_3209_; 
v___x_3207_ = l_Lean_trace_profiler;
v___x_3208_ = l_Lean_Option_get___redArg(v___x_3196_, v_opts_3192_, v___x_3207_);
lean_dec_ref(v_opts_3192_);
v___x_3209_ = lean_unbox(v___x_3208_);
lean_dec(v___x_3208_);
if (v___x_3209_ == 0)
{
lean_dec_ref(v___f_3203_);
lean_dec(v_toBind_3194_);
lean_dec_ref(v_inst_3186_);
lean_dec_ref(v_inst_3185_);
return v_k_3195_;
}
else
{
lean_dec(v_k_3195_);
goto v___jp_3204_;
}
}
else
{
lean_dec_ref(v___x_3196_);
lean_dec(v_k_3195_);
lean_dec_ref(v_opts_3192_);
goto v___jp_3204_;
}
v___jp_3204_:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
v___x_3205_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_3185_, v_inst_3186_);
v___x_3206_ = lean_apply_4(v_toBind_3194_, lean_box(0), lean_box(0), v___x_3205_, v___f_3203_);
return v___x_3206_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__4___boxed(lean_object** _args){
lean_object* v_inst_3210_ = _args[0];
lean_object* v_always_3211_ = _args[1];
lean_object* v_inst_3212_ = _args[2];
lean_object* v_inst_3213_ = _args[3];
lean_object* v_inst_3214_ = _args[4];
lean_object* v_inst_3215_ = _args[5];
lean_object* v_cls_3216_ = _args[6];
lean_object* v_collapsed_3217_ = _args[7];
lean_object* v_tag_3218_ = _args[8];
lean_object* v_opts_3219_ = _args[9];
lean_object* v_toPure_3220_ = _args[10];
lean_object* v_toBind_3221_ = _args[11];
lean_object* v_k_3222_ = _args[12];
lean_object* v___x_3223_ = _args[13];
lean_object* v_inst_3224_ = _args[14];
lean_object* v_msg_3225_ = _args[15];
lean_object* v___f_3226_ = _args[16];
lean_object* v_clsEnabled_3227_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_3228_; uint8_t v_clsEnabled_boxed_3229_; lean_object* v_res_3230_; 
v_collapsed_boxed_3228_ = lean_unbox(v_collapsed_3217_);
v_clsEnabled_boxed_3229_ = lean_unbox(v_clsEnabled_3227_);
v_res_3230_ = l_Lean_withTraceNodeBefore___redArg___lam__4(v_inst_3210_, v_always_3211_, v_inst_3212_, v_inst_3213_, v_inst_3214_, v_inst_3215_, v_cls_3216_, v_collapsed_boxed_3228_, v_tag_3218_, v_opts_3219_, v_toPure_3220_, v_toBind_3221_, v_k_3222_, v___x_3223_, v_inst_3224_, v_msg_3225_, v___f_3226_, v_clsEnabled_boxed_3229_);
return v_res_3230_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7(lean_object* v_k_3231_, lean_object* v_inst_3232_, lean_object* v_toApplicative_3233_, lean_object* v_inst_3234_, lean_object* v_always_3235_, lean_object* v_inst_3236_, lean_object* v_inst_3237_, lean_object* v_inst_3238_, lean_object* v_cls_3239_, uint8_t v_collapsed_3240_, lean_object* v_tag_3241_, lean_object* v_toBind_3242_, lean_object* v___x_3243_, lean_object* v_inst_3244_, lean_object* v_msg_3245_, lean_object* v___f_3246_, lean_object* v_getOptionsUnrestricted_3247_, lean_object* v_opts_3248_){
_start:
{
uint8_t v_hasTrace_3249_; 
v_hasTrace_3249_ = lean_ctor_get_uint8(v_opts_3248_, sizeof(void*)*1);
if (v_hasTrace_3249_ == 0)
{
lean_dec_ref(v_opts_3248_);
lean_dec(v_getOptionsUnrestricted_3247_);
lean_dec(v___f_3246_);
lean_dec(v_msg_3245_);
lean_dec(v_inst_3244_);
lean_dec_ref(v___x_3243_);
lean_dec(v_toBind_3242_);
lean_dec_ref(v_tag_3241_);
lean_dec(v_cls_3239_);
lean_dec_ref(v_inst_3238_);
lean_dec(v_inst_3237_);
lean_dec_ref(v_inst_3236_);
lean_dec_ref(v_always_3235_);
lean_dec_ref(v_inst_3234_);
lean_dec_ref(v_toApplicative_3233_);
lean_dec_ref(v_inst_3232_);
return v_k_3231_;
}
else
{
lean_object* v_getInheritedTraceOptions_3250_; lean_object* v_toPure_3251_; lean_object* v___x_3252_; lean_object* v___f_3253_; lean_object* v___f_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v_getInheritedTraceOptions_3250_ = lean_ctor_get(v_inst_3232_, 2);
lean_inc(v_getInheritedTraceOptions_3250_);
v_toPure_3251_ = lean_ctor_get(v_toApplicative_3233_, 1);
lean_inc_n(v_toPure_3251_, 2);
lean_dec_ref(v_toApplicative_3233_);
v___x_3252_ = lean_box(v_collapsed_3240_);
lean_inc_n(v_toBind_3242_, 3);
lean_inc(v_cls_3239_);
v___f_3253_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__4___boxed), 18, 17);
lean_closure_set(v___f_3253_, 0, v_inst_3234_);
lean_closure_set(v___f_3253_, 1, v_always_3235_);
lean_closure_set(v___f_3253_, 2, v_inst_3236_);
lean_closure_set(v___f_3253_, 3, v_inst_3232_);
lean_closure_set(v___f_3253_, 4, v_inst_3237_);
lean_closure_set(v___f_3253_, 5, v_inst_3238_);
lean_closure_set(v___f_3253_, 6, v_cls_3239_);
lean_closure_set(v___f_3253_, 7, v___x_3252_);
lean_closure_set(v___f_3253_, 8, v_tag_3241_);
lean_closure_set(v___f_3253_, 9, v_opts_3248_);
lean_closure_set(v___f_3253_, 10, v_toPure_3251_);
lean_closure_set(v___f_3253_, 11, v_toBind_3242_);
lean_closure_set(v___f_3253_, 12, v_k_3231_);
lean_closure_set(v___f_3253_, 13, v___x_3243_);
lean_closure_set(v___f_3253_, 14, v_inst_3244_);
lean_closure_set(v___f_3253_, 15, v_msg_3245_);
lean_closure_set(v___f_3253_, 16, v___f_3246_);
v___f_3254_ = lean_alloc_closure((void*)(l_Lean_withTraceNode___redArg___lam__12), 5, 4);
lean_closure_set(v___f_3254_, 0, v_toPure_3251_);
lean_closure_set(v___f_3254_, 1, v_cls_3239_);
lean_closure_set(v___f_3254_, 2, v_toBind_3242_);
lean_closure_set(v___f_3254_, 3, v_getOptionsUnrestricted_3247_);
v___x_3255_ = lean_apply_4(v_toBind_3242_, lean_box(0), lean_box(0), v_getInheritedTraceOptions_3250_, v___f_3254_);
v___x_3256_ = lean_apply_4(v_toBind_3242_, lean_box(0), lean_box(0), v___x_3255_, v___f_3253_);
return v___x_3256_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_k_3257_ = _args[0];
lean_object* v_inst_3258_ = _args[1];
lean_object* v_toApplicative_3259_ = _args[2];
lean_object* v_inst_3260_ = _args[3];
lean_object* v_always_3261_ = _args[4];
lean_object* v_inst_3262_ = _args[5];
lean_object* v_inst_3263_ = _args[6];
lean_object* v_inst_3264_ = _args[7];
lean_object* v_cls_3265_ = _args[8];
lean_object* v_collapsed_3266_ = _args[9];
lean_object* v_tag_3267_ = _args[10];
lean_object* v_toBind_3268_ = _args[11];
lean_object* v___x_3269_ = _args[12];
lean_object* v_inst_3270_ = _args[13];
lean_object* v_msg_3271_ = _args[14];
lean_object* v___f_3272_ = _args[15];
lean_object* v_getOptionsUnrestricted_3273_ = _args[16];
lean_object* v_opts_3274_ = _args[17];
_start:
{
uint8_t v_collapsed_boxed_3275_; lean_object* v_res_3276_; 
v_collapsed_boxed_3275_ = lean_unbox(v_collapsed_3266_);
v_res_3276_ = l_Lean_withTraceNodeBefore___redArg___lam__7(v_k_3257_, v_inst_3258_, v_toApplicative_3259_, v_inst_3260_, v_always_3261_, v_inst_3262_, v_inst_3263_, v_inst_3264_, v_cls_3265_, v_collapsed_boxed_3275_, v_tag_3267_, v_toBind_3268_, v___x_3269_, v_inst_3270_, v_msg_3271_, v___f_3272_, v_getOptionsUnrestricted_3273_, v_opts_3274_);
return v_res_3276_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg(lean_object* v_inst_3277_, lean_object* v_inst_3278_, lean_object* v_inst_3279_, lean_object* v_inst_3280_, lean_object* v_inst_3281_, lean_object* v_always_3282_, lean_object* v_inst_3283_, lean_object* v_inst_3284_, lean_object* v_cls_3285_, lean_object* v_msg_3286_, lean_object* v_k_3287_, uint8_t v_collapsed_3288_, lean_object* v_tag_3289_){
_start:
{
lean_object* v___x_3290_; lean_object* v_toApplicative_3291_; lean_object* v_toBind_3292_; lean_object* v_getOptionsUnrestricted_3293_; lean_object* v___f_3294_; lean_object* v___x_3295_; lean_object* v___f_3296_; lean_object* v___x_3297_; 
v___x_3290_ = l_Lean_KVMap_instValueBool;
v_toApplicative_3291_ = lean_ctor_get(v_inst_3277_, 0);
lean_inc_ref(v_toApplicative_3291_);
v_toBind_3292_ = lean_ctor_get(v_inst_3277_, 1);
lean_inc_n(v_toBind_3292_, 2);
v_getOptionsUnrestricted_3293_ = lean_ctor_get(v_inst_3281_, 1);
lean_inc_n(v_getOptionsUnrestricted_3293_, 2);
lean_dec_ref(v_inst_3281_);
lean_inc(v_inst_3280_);
v___f_3294_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3294_, 0, v_inst_3280_);
v___x_3295_ = lean_box(v_collapsed_3288_);
v___f_3296_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__7___boxed), 18, 17);
lean_closure_set(v___f_3296_, 0, v_k_3287_);
lean_closure_set(v___f_3296_, 1, v_inst_3278_);
lean_closure_set(v___f_3296_, 2, v_toApplicative_3291_);
lean_closure_set(v___f_3296_, 3, v_inst_3279_);
lean_closure_set(v___f_3296_, 4, v_always_3282_);
lean_closure_set(v___f_3296_, 5, v_inst_3277_);
lean_closure_set(v___f_3296_, 6, v_inst_3280_);
lean_closure_set(v___f_3296_, 7, v_inst_3284_);
lean_closure_set(v___f_3296_, 8, v_cls_3285_);
lean_closure_set(v___f_3296_, 9, v___x_3295_);
lean_closure_set(v___f_3296_, 10, v_tag_3289_);
lean_closure_set(v___f_3296_, 11, v_toBind_3292_);
lean_closure_set(v___f_3296_, 12, v___x_3290_);
lean_closure_set(v___f_3296_, 13, v_inst_3283_);
lean_closure_set(v___f_3296_, 14, v_msg_3286_);
lean_closure_set(v___f_3296_, 15, v___f_3294_);
lean_closure_set(v___f_3296_, 16, v_getOptionsUnrestricted_3293_);
v___x_3297_ = lean_apply_4(v_toBind_3292_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_3293_, v___f_3296_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___redArg___boxed(lean_object* v_inst_3298_, lean_object* v_inst_3299_, lean_object* v_inst_3300_, lean_object* v_inst_3301_, lean_object* v_inst_3302_, lean_object* v_always_3303_, lean_object* v_inst_3304_, lean_object* v_inst_3305_, lean_object* v_cls_3306_, lean_object* v_msg_3307_, lean_object* v_k_3308_, lean_object* v_collapsed_3309_, lean_object* v_tag_3310_){
_start:
{
uint8_t v_collapsed_boxed_3311_; lean_object* v_res_3312_; 
v_collapsed_boxed_3311_ = lean_unbox(v_collapsed_3309_);
v_res_3312_ = l_Lean_withTraceNodeBefore___redArg(v_inst_3298_, v_inst_3299_, v_inst_3300_, v_inst_3301_, v_inst_3302_, v_always_3303_, v_inst_3304_, v_inst_3305_, v_cls_3306_, v_msg_3307_, v_k_3308_, v_collapsed_boxed_3311_, v_tag_3310_);
return v_res_3312_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore(lean_object* v_00_u03b1_3313_, lean_object* v_m_3314_, lean_object* v_inst_3315_, lean_object* v_inst_3316_, lean_object* v_00_u03b5_3317_, lean_object* v_inst_3318_, lean_object* v_inst_3319_, lean_object* v_inst_3320_, lean_object* v_always_3321_, lean_object* v_inst_3322_, lean_object* v_inst_3323_, lean_object* v_cls_3324_, lean_object* v_msg_3325_, lean_object* v_k_3326_, uint8_t v_collapsed_3327_, lean_object* v_tag_3328_){
_start:
{
lean_object* v___x_3329_; lean_object* v_toApplicative_3330_; lean_object* v_toBind_3331_; lean_object* v_getOptionsUnrestricted_3332_; lean_object* v___f_3333_; lean_object* v___x_3334_; lean_object* v___f_3335_; lean_object* v___x_3336_; 
v___x_3329_ = l_Lean_KVMap_instValueBool;
v_toApplicative_3330_ = lean_ctor_get(v_inst_3315_, 0);
lean_inc_ref(v_toApplicative_3330_);
v_toBind_3331_ = lean_ctor_get(v_inst_3315_, 1);
lean_inc_n(v_toBind_3331_, 2);
v_getOptionsUnrestricted_3332_ = lean_ctor_get(v_inst_3320_, 1);
lean_inc_n(v_getOptionsUnrestricted_3332_, 2);
lean_dec_ref(v_inst_3320_);
lean_inc(v_inst_3319_);
v___f_3333_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3333_, 0, v_inst_3319_);
v___x_3334_ = lean_box(v_collapsed_3327_);
v___f_3335_ = lean_alloc_closure((void*)(l_Lean_withTraceNodeBefore___redArg___lam__7___boxed), 18, 17);
lean_closure_set(v___f_3335_, 0, v_k_3326_);
lean_closure_set(v___f_3335_, 1, v_inst_3316_);
lean_closure_set(v___f_3335_, 2, v_toApplicative_3330_);
lean_closure_set(v___f_3335_, 3, v_inst_3318_);
lean_closure_set(v___f_3335_, 4, v_always_3321_);
lean_closure_set(v___f_3335_, 5, v_inst_3315_);
lean_closure_set(v___f_3335_, 6, v_inst_3319_);
lean_closure_set(v___f_3335_, 7, v_inst_3323_);
lean_closure_set(v___f_3335_, 8, v_cls_3324_);
lean_closure_set(v___f_3335_, 9, v___x_3334_);
lean_closure_set(v___f_3335_, 10, v_tag_3328_);
lean_closure_set(v___f_3335_, 11, v_toBind_3331_);
lean_closure_set(v___f_3335_, 12, v___x_3329_);
lean_closure_set(v___f_3335_, 13, v_inst_3322_);
lean_closure_set(v___f_3335_, 14, v_msg_3325_);
lean_closure_set(v___f_3335_, 15, v___f_3333_);
lean_closure_set(v___f_3335_, 16, v_getOptionsUnrestricted_3332_);
v___x_3336_ = lean_apply_4(v_toBind_3331_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_3332_, v___f_3335_);
return v___x_3336_;
}
}
LEAN_EXPORT lean_object* l_Lean_withTraceNodeBefore___boxed(lean_object* v_00_u03b1_3337_, lean_object* v_m_3338_, lean_object* v_inst_3339_, lean_object* v_inst_3340_, lean_object* v_00_u03b5_3341_, lean_object* v_inst_3342_, lean_object* v_inst_3343_, lean_object* v_inst_3344_, lean_object* v_always_3345_, lean_object* v_inst_3346_, lean_object* v_inst_3347_, lean_object* v_cls_3348_, lean_object* v_msg_3349_, lean_object* v_k_3350_, lean_object* v_collapsed_3351_, lean_object* v_tag_3352_){
_start:
{
uint8_t v_collapsed_boxed_3353_; lean_object* v_res_3354_; 
v_collapsed_boxed_3353_ = lean_unbox(v_collapsed_3351_);
v_res_3354_ = l_Lean_withTraceNodeBefore(v_00_u03b1_3337_, v_m_3338_, v_inst_3339_, v_inst_3340_, v_00_u03b5_3341_, v_inst_3342_, v_inst_3343_, v_inst_3344_, v_always_3345_, v_inst_3346_, v_inst_3347_, v_cls_3348_, v_msg_3349_, v_k_3350_, v_collapsed_boxed_3353_, v_tag_3352_);
return v_res_3354_;
}
}
LEAN_EXPORT uint8_t l_Lean_addTraceAsMessages___redArg___lam__0(lean_object* v_x_3355_, lean_object* v_x_3356_){
_start:
{
lean_object* v_fst_3357_; lean_object* v_fst_3358_; lean_object* v_fst_3359_; lean_object* v_fst_3360_; uint8_t v___x_3361_; 
v_fst_3357_ = lean_ctor_get(v_x_3355_, 0);
v_fst_3358_ = lean_ctor_get(v_x_3356_, 0);
v_fst_3359_ = lean_ctor_get(v_fst_3357_, 0);
v_fst_3360_ = lean_ctor_get(v_fst_3358_, 0);
v___x_3361_ = lean_nat_dec_lt(v_fst_3359_, v_fst_3360_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__0___boxed(lean_object* v_x_3362_, lean_object* v_x_3363_){
_start:
{
uint8_t v_res_3364_; lean_object* v_r_3365_; 
v_res_3364_ = l_Lean_addTraceAsMessages___redArg___lam__0(v_x_3362_, v_x_3363_);
lean_dec_ref(v_x_3363_);
lean_dec_ref(v_x_3362_);
v_r_3365_ = lean_box(v_res_3364_);
return v_r_3365_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__1(lean_object* v_x1_3366_, lean_object* v_x2_3367_, lean_object* v_x3_3368_){
_start:
{
lean_object* v___x_3369_; lean_object* v___x_3370_; 
v___x_3369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3369_, 0, v_x2_3367_);
lean_ctor_set(v___x_3369_, 1, v_x3_3368_);
v___x_3370_ = lean_array_push(v_x1_3366_, v___x_3369_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4(lean_object* v_____do__lift_3371_, lean_object* v___x_3372_, lean_object* v_fst_3373_, lean_object* v_snd_3374_, lean_object* v_logMessage_3375_, lean_object* v_toBind_3376_, lean_object* v___f_3377_, lean_object* v_____do__lift_3378_){
_start:
{
uint8_t v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3379_ = 0;
v___x_3380_ = l_Lean_Elab_mkMessageCore(v_____do__lift_3371_, v_____do__lift_3378_, v___x_3372_, v___x_3379_, v_fst_3373_, v_snd_3374_);
v___x_3381_ = lean_apply_1(v_logMessage_3375_, v___x_3380_);
v___x_3382_ = lean_apply_4(v_toBind_3376_, lean_box(0), lean_box(0), v___x_3381_, v___f_3377_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__4___boxed(lean_object* v_____do__lift_3383_, lean_object* v___x_3384_, lean_object* v_fst_3385_, lean_object* v_snd_3386_, lean_object* v_logMessage_3387_, lean_object* v_toBind_3388_, lean_object* v___f_3389_, lean_object* v_____do__lift_3390_){
_start:
{
lean_object* v_res_3391_; 
v_res_3391_ = l_Lean_addTraceAsMessages___redArg___lam__4(v_____do__lift_3383_, v___x_3384_, v_fst_3385_, v_snd_3386_, v_logMessage_3387_, v_toBind_3388_, v___f_3389_, v_____do__lift_3390_);
lean_dec(v_snd_3386_);
lean_dec(v_fst_3385_);
return v_res_3391_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__2(lean_object* v___x_3392_, lean_object* v_fst_3393_, lean_object* v_snd_3394_, lean_object* v_logMessage_3395_, lean_object* v_toBind_3396_, lean_object* v___f_3397_, lean_object* v_toMonadFileMap_3398_, lean_object* v_____do__lift_3399_){
_start:
{
lean_object* v___f_3400_; lean_object* v___x_3401_; 
lean_inc(v_toBind_3396_);
v___f_3400_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__4___boxed), 8, 7);
lean_closure_set(v___f_3400_, 0, v_____do__lift_3399_);
lean_closure_set(v___f_3400_, 1, v___x_3392_);
lean_closure_set(v___f_3400_, 2, v_fst_3393_);
lean_closure_set(v___f_3400_, 3, v_snd_3394_);
lean_closure_set(v___f_3400_, 4, v_logMessage_3395_);
lean_closure_set(v___f_3400_, 5, v_toBind_3396_);
lean_closure_set(v___f_3400_, 6, v___f_3397_);
v___x_3401_ = lean_apply_4(v_toBind_3396_, lean_box(0), lean_box(0), v_toMonadFileMap_3398_, v___f_3400_);
return v___x_3401_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3(lean_object* v___x_3402_, uint8_t v___x_3403_, lean_object* v_logMessage_3404_, lean_object* v_toBind_3405_, lean_object* v___f_3406_, lean_object* v_toMonadFileMap_3407_, lean_object* v_getFileName_3408_, lean_object* v_a_3409_, lean_object* v_x_3410_, lean_object* v___y_3411_){
_start:
{
lean_object* v_fst_3412_; lean_object* v_snd_3413_; lean_object* v_fst_3414_; lean_object* v_snd_3415_; lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3432_; 
v_fst_3412_ = lean_ctor_get(v_a_3409_, 0);
lean_inc(v_fst_3412_);
v_snd_3413_ = lean_ctor_get(v_a_3409_, 1);
lean_inc(v_snd_3413_);
lean_dec_ref(v_a_3409_);
v_fst_3414_ = lean_ctor_get(v_fst_3412_, 0);
v_snd_3415_ = lean_ctor_get(v_fst_3412_, 1);
v_isSharedCheck_3432_ = !lean_is_exclusive(v_fst_3412_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3417_ = v_fst_3412_;
v_isShared_3418_ = v_isSharedCheck_3432_;
goto v_resetjp_3416_;
}
else
{
lean_inc(v_snd_3415_);
lean_inc(v_fst_3414_);
lean_dec(v_fst_3412_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3432_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; double v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3428_; 
v___x_3419_ = ((lean_object*)(l_Lean_checkTraceOption___closed__1));
v___x_3420_ = lean_box(0);
v___x_3421_ = lean_box(0);
v___x_3422_ = lean_float_of_nat(v___x_3402_);
v___x_3423_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__1));
v___x_3424_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3424_, 0, v___x_3420_);
lean_ctor_set(v___x_3424_, 1, v___x_3421_);
lean_ctor_set(v___x_3424_, 2, v___x_3423_);
lean_ctor_set_float(v___x_3424_, sizeof(void*)*3, v___x_3422_);
lean_ctor_set_float(v___x_3424_, sizeof(void*)*3 + 8, v___x_3422_);
lean_ctor_set_uint8(v___x_3424_, sizeof(void*)*3 + 16, v___x_3403_);
v___x_3425_ = l_Lean_MessageData_nil;
v___x_3426_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3424_);
lean_ctor_set(v___x_3426_, 1, v___x_3425_);
lean_ctor_set(v___x_3426_, 2, v_snd_3413_);
if (v_isShared_3418_ == 0)
{
lean_ctor_set_tag(v___x_3417_, 8);
lean_ctor_set(v___x_3417_, 1, v___x_3426_);
lean_ctor_set(v___x_3417_, 0, v___x_3419_);
v___x_3428_ = v___x_3417_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v___x_3419_);
lean_ctor_set(v_reuseFailAlloc_3431_, 1, v___x_3426_);
v___x_3428_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
lean_object* v___f_3429_; lean_object* v___x_3430_; 
lean_inc(v_toBind_3405_);
v___f_3429_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__2), 8, 7);
lean_closure_set(v___f_3429_, 0, v___x_3428_);
lean_closure_set(v___f_3429_, 1, v_fst_3414_);
lean_closure_set(v___f_3429_, 2, v_snd_3415_);
lean_closure_set(v___f_3429_, 3, v_logMessage_3404_);
lean_closure_set(v___f_3429_, 4, v_toBind_3405_);
lean_closure_set(v___f_3429_, 5, v___f_3406_);
lean_closure_set(v___f_3429_, 6, v_toMonadFileMap_3407_);
v___x_3430_ = lean_apply_4(v_toBind_3405_, lean_box(0), lean_box(0), v_getFileName_3408_, v___f_3429_);
return v___x_3430_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__3___boxed(lean_object* v___x_3433_, lean_object* v___x_3434_, lean_object* v_logMessage_3435_, lean_object* v_toBind_3436_, lean_object* v___f_3437_, lean_object* v_toMonadFileMap_3438_, lean_object* v_getFileName_3439_, lean_object* v_a_3440_, lean_object* v_x_3441_, lean_object* v___y_3442_){
_start:
{
uint8_t v___x_899__boxed_3443_; lean_object* v_res_3444_; 
v___x_899__boxed_3443_ = lean_unbox(v___x_3434_);
v_res_3444_ = l_Lean_addTraceAsMessages___redArg___lam__3(v___x_3433_, v___x_899__boxed_3443_, v_logMessage_3435_, v_toBind_3436_, v___f_3437_, v_toMonadFileMap_3438_, v_getFileName_3439_, v_a_3440_, v_x_3441_, v___y_3442_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__5(lean_object* v___x_3445_, lean_object* v___f_3446_, lean_object* v_acc_3447_, lean_object* v_l_3448_){
_start:
{
lean_object* v___x_3449_; 
v___x_3449_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_3445_, v___f_3446_, v_acc_3447_, v_l_3448_);
return v___x_3449_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6(lean_object* v_toPure_3450_, uint8_t v___x_3451_, lean_object* v_logMessage_3452_, lean_object* v_toBind_3453_, lean_object* v_toMonadFileMap_3454_, lean_object* v_getFileName_3455_, lean_object* v_inst_3456_, lean_object* v___f_3457_, lean_object* v___f_3458_, lean_object* v___f_3459_, lean_object* v_____s_3460_){
_start:
{
lean_object* v___y_3462_; lean_object* v___y_3463_; lean_object* v___y_3473_; lean_object* v___y_3474_; lean_object* v___y_3475_; lean_object* v___y_3476_; lean_object* v___y_3477_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3487_; lean_object* v_size_3494_; lean_object* v_buckets_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; uint8_t v___x_3500_; 
v_size_3494_ = lean_ctor_get(v_____s_3460_, 0);
lean_inc(v_size_3494_);
v_buckets_3495_ = lean_ctor_get(v_____s_3460_, 1);
lean_inc_ref(v_buckets_3495_);
lean_dec_ref(v_____s_3460_);
v___x_3496_ = lean_mk_empty_array_with_capacity(v_size_3494_);
lean_dec(v_size_3494_);
v___x_3497_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_addTraceNode___redArg___lam__3___closed__9));
v___x_3498_ = lean_unsigned_to_nat(0u);
v___x_3499_ = lean_array_get_size(v_buckets_3495_);
v___x_3500_ = lean_nat_dec_lt(v___x_3498_, v___x_3499_);
if (v___x_3500_ == 0)
{
lean_dec_ref(v_buckets_3495_);
lean_dec_ref(v___f_3459_);
v___y_3487_ = v___x_3496_;
goto v___jp_3486_;
}
else
{
lean_object* v___f_3501_; size_t v___x_3502_; size_t v___x_3503_; lean_object* v___x_3504_; 
v___f_3501_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__5), 4, 2);
lean_closure_set(v___f_3501_, 0, v___x_3497_);
lean_closure_set(v___f_3501_, 1, v___f_3459_);
v___x_3502_ = ((size_t)0ULL);
v___x_3503_ = lean_usize_of_nat(v___x_3499_);
v___x_3504_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3497_, v___f_3501_, v_buckets_3495_, v___x_3502_, v___x_3503_, v___x_3496_);
v___y_3487_ = v___x_3504_;
goto v___jp_3486_;
}
v___jp_3461_:
{
lean_object* v___x_3464_; lean_object* v___f_3465_; lean_object* v___x_3466_; lean_object* v___f_3467_; size_t v_sz_3468_; size_t v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; 
v___x_3464_ = lean_box(0);
v___f_3465_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__1), 3, 2);
lean_closure_set(v___f_3465_, 0, v___x_3464_);
lean_closure_set(v___f_3465_, 1, v_toPure_3450_);
v___x_3466_ = lean_box(v___x_3451_);
lean_inc(v_toBind_3453_);
v___f_3467_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__3___boxed), 10, 7);
lean_closure_set(v___f_3467_, 0, v___y_3462_);
lean_closure_set(v___f_3467_, 1, v___x_3466_);
lean_closure_set(v___f_3467_, 2, v_logMessage_3452_);
lean_closure_set(v___f_3467_, 3, v_toBind_3453_);
lean_closure_set(v___f_3467_, 4, v___f_3465_);
lean_closure_set(v___f_3467_, 5, v_toMonadFileMap_3454_);
lean_closure_set(v___f_3467_, 6, v_getFileName_3455_);
v_sz_3468_ = lean_array_size(v___y_3463_);
v___x_3469_ = ((size_t)0ULL);
v___x_3470_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3456_, v___y_3463_, v___f_3467_, v_sz_3468_, v___x_3469_, v___x_3464_);
v___x_3471_ = lean_apply_4(v_toBind_3453_, lean_box(0), lean_box(0), v___x_3470_, v___f_3457_);
return v___x_3471_;
}
v___jp_3472_:
{
lean_object* v___x_3478_; 
v___x_3478_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_3458_, v___y_3475_, v___y_3476_, v___y_3474_, v___y_3477_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_3477_);
lean_dec(v___y_3475_);
v___y_3462_ = v___y_3473_;
v___y_3463_ = v___x_3478_;
goto v___jp_3461_;
}
v___jp_3479_:
{
uint8_t v___x_3485_; 
v___x_3485_ = lean_nat_dec_le(v___y_3484_, v___y_3483_);
if (v___x_3485_ == 0)
{
lean_dec(v___y_3483_);
lean_inc(v___y_3484_);
v___y_3473_ = v___y_3480_;
v___y_3474_ = v___y_3484_;
v___y_3475_ = v___y_3481_;
v___y_3476_ = v___y_3482_;
v___y_3477_ = v___y_3484_;
goto v___jp_3472_;
}
else
{
v___y_3473_ = v___y_3480_;
v___y_3474_ = v___y_3484_;
v___y_3475_ = v___y_3481_;
v___y_3476_ = v___y_3482_;
v___y_3477_ = v___y_3483_;
goto v___jp_3472_;
}
}
v___jp_3486_:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; uint8_t v___x_3490_; 
v___x_3488_ = lean_unsigned_to_nat(0u);
v___x_3489_ = lean_array_get_size(v___y_3487_);
v___x_3490_ = lean_nat_dec_eq(v___x_3489_, v___x_3488_);
if (v___x_3490_ == 0)
{
lean_object* v___x_3491_; lean_object* v___x_3492_; uint8_t v___x_3493_; 
v___x_3491_ = lean_unsigned_to_nat(1u);
v___x_3492_ = lean_nat_sub(v___x_3489_, v___x_3491_);
v___x_3493_ = lean_nat_dec_le(v___x_3488_, v___x_3492_);
if (v___x_3493_ == 0)
{
lean_inc(v___x_3492_);
v___y_3480_ = v___x_3488_;
v___y_3481_ = v___x_3489_;
v___y_3482_ = v___y_3487_;
v___y_3483_ = v___x_3492_;
v___y_3484_ = v___x_3492_;
goto v___jp_3479_;
}
else
{
v___y_3480_ = v___x_3488_;
v___y_3481_ = v___x_3489_;
v___y_3482_ = v___y_3487_;
v___y_3483_ = v___x_3492_;
v___y_3484_ = v___x_3488_;
goto v___jp_3479_;
}
}
else
{
lean_dec_ref(v___f_3458_);
v___y_3462_ = v___x_3488_;
v___y_3463_ = v___y_3487_;
goto v___jp_3461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__6___boxed(lean_object* v_toPure_3505_, lean_object* v___x_3506_, lean_object* v_logMessage_3507_, lean_object* v_toBind_3508_, lean_object* v_toMonadFileMap_3509_, lean_object* v_getFileName_3510_, lean_object* v_inst_3511_, lean_object* v___f_3512_, lean_object* v___f_3513_, lean_object* v___f_3514_, lean_object* v_____s_3515_){
_start:
{
uint8_t v___x_984__boxed_3516_; lean_object* v_res_3517_; 
v___x_984__boxed_3516_ = lean_unbox(v___x_3506_);
v_res_3517_ = l_Lean_addTraceAsMessages___redArg___lam__6(v_toPure_3505_, v___x_984__boxed_3516_, v_logMessage_3507_, v_toBind_3508_, v_toMonadFileMap_3509_, v_getFileName_3510_, v_inst_3511_, v___f_3512_, v___f_3513_, v___f_3514_, v_____s_3515_);
return v_res_3517_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7(lean_object* v_traceElem_3518_, lean_object* v___f_3519_, lean_object* v___f_3520_, lean_object* v_____s_3521_, lean_object* v_toPure_3522_, uint8_t v___x_3523_, lean_object* v_____do__lift_3524_){
_start:
{
lean_object* v_ref_3525_; lean_object* v_msg_3526_; lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3550_; 
v_ref_3525_ = lean_ctor_get(v_traceElem_3518_, 0);
v_msg_3526_ = lean_ctor_get(v_traceElem_3518_, 1);
v_isSharedCheck_3550_ = !lean_is_exclusive(v_traceElem_3518_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3528_ = v_traceElem_3518_;
v_isShared_3529_ = v_isSharedCheck_3550_;
goto v_resetjp_3527_;
}
else
{
lean_inc(v_msg_3526_);
lean_inc(v_ref_3525_);
lean_dec(v_traceElem_3518_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3550_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___y_3531_; lean_object* v___y_3532_; lean_object* v_ref_3542_; lean_object* v___y_3544_; lean_object* v___x_3547_; 
v_ref_3542_ = l_Lean_replaceRef(v_ref_3525_, v_____do__lift_3524_);
lean_dec(v_ref_3525_);
v___x_3547_ = l_Lean_Syntax_getPos_x3f(v_ref_3542_, v___x_3523_);
if (lean_obj_tag(v___x_3547_) == 0)
{
lean_object* v___x_3548_; 
v___x_3548_ = lean_unsigned_to_nat(0u);
v___y_3544_ = v___x_3548_;
goto v___jp_3543_;
}
else
{
lean_object* v_val_3549_; 
v_val_3549_ = lean_ctor_get(v___x_3547_, 0);
lean_inc(v_val_3549_);
lean_dec_ref_known(v___x_3547_, 1);
v___y_3544_ = v_val_3549_;
goto v___jp_3543_;
}
v___jp_3530_:
{
lean_object* v___x_3534_; 
if (v_isShared_3529_ == 0)
{
lean_ctor_set(v___x_3528_, 1, v___y_3532_);
lean_ctor_set(v___x_3528_, 0, v___y_3531_);
v___x_3534_ = v___x_3528_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___y_3531_);
lean_ctor_set(v_reuseFailAlloc_3541_, 1, v___y_3532_);
v___x_3534_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v_pos2traces_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3535_ = ((lean_object*)(l_Lean_addTrace___redArg___lam__0___closed__2));
lean_inc_ref(v___x_3534_);
lean_inc_ref(v___f_3520_);
lean_inc_ref(v___f_3519_);
v___x_3536_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___redArg(v___f_3519_, v___f_3520_, v_____s_3521_, v___x_3534_, v___x_3535_);
v___x_3537_ = lean_array_push(v___x_3536_, v_msg_3526_);
v_pos2traces_3538_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___f_3519_, v___f_3520_, v_____s_3521_, v___x_3534_, v___x_3537_);
v___x_3539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3539_, 0, v_pos2traces_3538_);
v___x_3540_ = lean_apply_2(v_toPure_3522_, lean_box(0), v___x_3539_);
return v___x_3540_;
}
}
v___jp_3543_:
{
lean_object* v___x_3545_; 
v___x_3545_ = l_Lean_Syntax_getTailPos_x3f(v_ref_3542_, v___x_3523_);
lean_dec(v_ref_3542_);
if (lean_obj_tag(v___x_3545_) == 0)
{
lean_inc(v___y_3544_);
v___y_3531_ = v___y_3544_;
v___y_3532_ = v___y_3544_;
goto v___jp_3530_;
}
else
{
lean_object* v_val_3546_; 
v_val_3546_ = lean_ctor_get(v___x_3545_, 0);
lean_inc(v_val_3546_);
lean_dec_ref_known(v___x_3545_, 1);
v___y_3531_ = v___y_3544_;
v___y_3532_ = v_val_3546_;
goto v___jp_3530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__7___boxed(lean_object* v_traceElem_3551_, lean_object* v___f_3552_, lean_object* v___f_3553_, lean_object* v_____s_3554_, lean_object* v_toPure_3555_, lean_object* v___x_3556_, lean_object* v_____do__lift_3557_){
_start:
{
uint8_t v___x_1098__boxed_3558_; lean_object* v_res_3559_; 
v___x_1098__boxed_3558_ = lean_unbox(v___x_3556_);
v_res_3559_ = l_Lean_addTraceAsMessages___redArg___lam__7(v_traceElem_3551_, v___f_3552_, v___f_3553_, v_____s_3554_, v_toPure_3555_, v___x_1098__boxed_3558_, v_____do__lift_3557_);
lean_dec(v_____do__lift_3557_);
return v_res_3559_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8(lean_object* v_inst_3560_, lean_object* v___f_3561_, lean_object* v___f_3562_, lean_object* v_toPure_3563_, uint8_t v___x_3564_, lean_object* v_toBind_3565_, lean_object* v_traceElem_3566_, lean_object* v_____s_3567_){
_start:
{
lean_object* v_getRef_3568_; lean_object* v___x_3569_; lean_object* v___f_3570_; lean_object* v___x_3571_; 
v_getRef_3568_ = lean_ctor_get(v_inst_3560_, 0);
lean_inc(v_getRef_3568_);
lean_dec_ref(v_inst_3560_);
v___x_3569_ = lean_box(v___x_3564_);
v___f_3570_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__7___boxed), 7, 6);
lean_closure_set(v___f_3570_, 0, v_traceElem_3566_);
lean_closure_set(v___f_3570_, 1, v___f_3561_);
lean_closure_set(v___f_3570_, 2, v___f_3562_);
lean_closure_set(v___f_3570_, 3, v_____s_3567_);
lean_closure_set(v___f_3570_, 4, v_toPure_3563_);
lean_closure_set(v___f_3570_, 5, v___x_3569_);
v___x_3571_ = lean_apply_4(v_toBind_3565_, lean_box(0), lean_box(0), v_getRef_3568_, v___f_3570_);
return v___x_3571_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__8___boxed(lean_object* v_inst_3572_, lean_object* v___f_3573_, lean_object* v___f_3574_, lean_object* v_toPure_3575_, lean_object* v___x_3576_, lean_object* v_toBind_3577_, lean_object* v_traceElem_3578_, lean_object* v_____s_3579_){
_start:
{
uint8_t v___x_1158__boxed_3580_; lean_object* v_res_3581_; 
v___x_1158__boxed_3580_ = lean_unbox(v___x_3576_);
v_res_3581_ = l_Lean_addTraceAsMessages___redArg___lam__8(v_inst_3572_, v___f_3573_, v___f_3574_, v_toPure_3575_, v___x_1158__boxed_3580_, v_toBind_3577_, v_traceElem_3578_, v_____s_3579_);
return v_res_3581_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__0(void){
_start:
{
lean_object* v___x_3582_; lean_object* v___f_3583_; 
v___x_3582_ = lean_alloc_closure((void*)(l_instDecidableEqRaw___boxed), 2, 0);
v___f_3583_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3583_, 0, v___x_3582_);
return v___f_3583_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__1(void){
_start:
{
lean_object* v___f_3584_; lean_object* v___f_3585_; 
v___f_3584_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__0, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__0_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__0);
v___f_3585_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3585_, 0, v___f_3584_);
lean_closure_set(v___f_3585_, 1, v___f_3584_);
return v___f_3585_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__2(void){
_start:
{
lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3586_ = lean_box(0);
v___x_3587_ = lean_unsigned_to_nat(16u);
v___x_3588_ = lean_mk_array(v___x_3587_, v___x_3586_);
return v___x_3588_;
}
}
static lean_object* _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__3(void){
_start:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v_pos2traces_3591_; 
v___x_3589_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__2, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__2_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__2);
v___x_3590_ = lean_unsigned_to_nat(0u);
v_pos2traces_3591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_pos2traces_3591_, 0, v___x_3590_);
lean_ctor_set(v_pos2traces_3591_, 1, v___x_3589_);
return v_pos2traces_3591_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9(lean_object* v_inst_3592_, lean_object* v___f_3593_, lean_object* v_toPure_3594_, lean_object* v_toBind_3595_, lean_object* v_inst_3596_, lean_object* v___f_3597_, lean_object* v_traces_3598_){
_start:
{
uint8_t v___x_3599_; 
v___x_3599_ = l_Lean_PersistentArray_isEmpty___redArg(v_traces_3598_);
if (v___x_3599_ == 0)
{
lean_object* v___f_3600_; lean_object* v___x_3601_; lean_object* v___f_3602_; lean_object* v_pos2traces_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; 
v___f_3600_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__1, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__1_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__1);
v___x_3601_ = lean_box(v___x_3599_);
lean_inc(v_toBind_3595_);
v___f_3602_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__8___boxed), 8, 6);
lean_closure_set(v___f_3602_, 0, v_inst_3592_);
lean_closure_set(v___f_3602_, 1, v___f_3600_);
lean_closure_set(v___f_3602_, 2, v___f_3593_);
lean_closure_set(v___f_3602_, 3, v_toPure_3594_);
lean_closure_set(v___f_3602_, 4, v___x_3601_);
lean_closure_set(v___f_3602_, 5, v_toBind_3595_);
v_pos2traces_3603_ = lean_obj_once(&l_Lean_addTraceAsMessages___redArg___lam__9___closed__3, &l_Lean_addTraceAsMessages___redArg___lam__9___closed__3_once, _init_l_Lean_addTraceAsMessages___redArg___lam__9___closed__3);
v___x_3604_ = l_Lean_PersistentArray_forIn___redArg(v_inst_3596_, v_traces_3598_, v_pos2traces_3603_, v___f_3602_);
v___x_3605_ = lean_apply_4(v_toBind_3595_, lean_box(0), lean_box(0), v___x_3604_, v___f_3597_);
return v___x_3605_;
}
else
{
lean_object* v___x_3606_; lean_object* v___x_3607_; 
lean_dec(v___f_3597_);
lean_dec_ref(v_inst_3596_);
lean_dec(v_toBind_3595_);
lean_dec_ref(v___f_3593_);
lean_dec_ref(v_inst_3592_);
v___x_3606_ = lean_box(0);
v___x_3607_ = lean_apply_2(v_toPure_3594_, lean_box(0), v___x_3606_);
return v___x_3607_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__9___boxed(lean_object* v_inst_3608_, lean_object* v___f_3609_, lean_object* v_toPure_3610_, lean_object* v_toBind_3611_, lean_object* v_inst_3612_, lean_object* v___f_3613_, lean_object* v_traces_3614_){
_start:
{
lean_object* v_res_3615_; 
v_res_3615_ = l_Lean_addTraceAsMessages___redArg___lam__9(v_inst_3608_, v___f_3609_, v_toPure_3610_, v_toBind_3611_, v_inst_3612_, v___f_3613_, v_traces_3614_);
lean_dec_ref(v_traces_3614_);
return v_res_3615_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10(lean_object* v_toPure_3616_, lean_object* v_logMessage_3617_, lean_object* v_toBind_3618_, lean_object* v_toMonadFileMap_3619_, lean_object* v_getFileName_3620_, lean_object* v_inst_3621_, lean_object* v___f_3622_, lean_object* v___f_3623_, lean_object* v___f_3624_, lean_object* v_inst_3625_, lean_object* v___f_3626_, lean_object* v_inst_3627_, lean_object* v_____do__lift_3628_){
_start:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; 
v___x_3632_ = l_Lean_KVMap_instValueBool;
v___x_3633_ = l_Lean_KVMap_instValueString;
v___x_3634_ = l_Lean_trace_profiler_output;
v___x_3635_ = l_Lean_Option_get_x3f___redArg(v___x_3633_, v_____do__lift_3628_, v___x_3634_);
if (lean_obj_tag(v___x_3635_) == 0)
{
lean_object* v___x_3636_; lean_object* v___x_3637_; uint8_t v___x_3638_; 
v___x_3636_ = l_Lean_trace_profiler_serve;
v___x_3637_ = l_Lean_Option_get___redArg(v___x_3632_, v_____do__lift_3628_, v___x_3636_);
v___x_3638_ = lean_unbox(v___x_3637_);
lean_dec(v___x_3637_);
if (v___x_3638_ == 0)
{
uint8_t v___x_3639_; lean_object* v___x_3640_; lean_object* v___f_3641_; lean_object* v___f_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; 
v___x_3639_ = 1;
v___x_3640_ = lean_box(v___x_3639_);
lean_inc_ref_n(v_inst_3621_, 2);
lean_inc_n(v_toBind_3618_, 2);
lean_inc(v_toPure_3616_);
v___f_3641_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__6___boxed), 11, 10);
lean_closure_set(v___f_3641_, 0, v_toPure_3616_);
lean_closure_set(v___f_3641_, 1, v___x_3640_);
lean_closure_set(v___f_3641_, 2, v_logMessage_3617_);
lean_closure_set(v___f_3641_, 3, v_toBind_3618_);
lean_closure_set(v___f_3641_, 4, v_toMonadFileMap_3619_);
lean_closure_set(v___f_3641_, 5, v_getFileName_3620_);
lean_closure_set(v___f_3641_, 6, v_inst_3621_);
lean_closure_set(v___f_3641_, 7, v___f_3622_);
lean_closure_set(v___f_3641_, 8, v___f_3623_);
lean_closure_set(v___f_3641_, 9, v___f_3624_);
v___f_3642_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__9___boxed), 7, 6);
lean_closure_set(v___f_3642_, 0, v_inst_3625_);
lean_closure_set(v___f_3642_, 1, v___f_3626_);
lean_closure_set(v___f_3642_, 2, v_toPure_3616_);
lean_closure_set(v___f_3642_, 3, v_toBind_3618_);
lean_closure_set(v___f_3642_, 4, v_inst_3621_);
lean_closure_set(v___f_3642_, 5, v___f_3641_);
v___x_3643_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___redArg(v_inst_3621_, v_inst_3627_);
v___x_3644_ = lean_apply_4(v_toBind_3618_, lean_box(0), lean_box(0), v___x_3643_, v___f_3642_);
return v___x_3644_;
}
else
{
lean_dec_ref(v_inst_3627_);
lean_dec_ref(v___f_3626_);
lean_dec_ref(v_inst_3625_);
lean_dec_ref(v___f_3624_);
lean_dec_ref(v___f_3623_);
lean_dec(v___f_3622_);
lean_dec_ref(v_inst_3621_);
lean_dec(v_getFileName_3620_);
lean_dec(v_toMonadFileMap_3619_);
lean_dec(v_toBind_3618_);
lean_dec(v_logMessage_3617_);
goto v___jp_3629_;
}
}
else
{
lean_dec_ref_known(v___x_3635_, 1);
lean_dec_ref(v_inst_3627_);
lean_dec_ref(v___f_3626_);
lean_dec_ref(v_inst_3625_);
lean_dec_ref(v___f_3624_);
lean_dec_ref(v___f_3623_);
lean_dec(v___f_3622_);
lean_dec_ref(v_inst_3621_);
lean_dec(v_getFileName_3620_);
lean_dec(v_toMonadFileMap_3619_);
lean_dec(v_toBind_3618_);
lean_dec(v_logMessage_3617_);
goto v___jp_3629_;
}
v___jp_3629_:
{
lean_object* v___x_3630_; lean_object* v___x_3631_; 
v___x_3630_ = lean_box(0);
v___x_3631_ = lean_apply_2(v_toPure_3616_, lean_box(0), v___x_3630_);
return v___x_3631_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg___lam__10___boxed(lean_object* v_toPure_3645_, lean_object* v_logMessage_3646_, lean_object* v_toBind_3647_, lean_object* v_toMonadFileMap_3648_, lean_object* v_getFileName_3649_, lean_object* v_inst_3650_, lean_object* v___f_3651_, lean_object* v___f_3652_, lean_object* v___f_3653_, lean_object* v_inst_3654_, lean_object* v___f_3655_, lean_object* v_inst_3656_, lean_object* v_____do__lift_3657_){
_start:
{
lean_object* v_res_3658_; 
v_res_3658_ = l_Lean_addTraceAsMessages___redArg___lam__10(v_toPure_3645_, v_logMessage_3646_, v_toBind_3647_, v_toMonadFileMap_3648_, v_getFileName_3649_, v_inst_3650_, v___f_3651_, v___f_3652_, v___f_3653_, v_inst_3654_, v___f_3655_, v_inst_3656_, v_____do__lift_3657_);
lean_dec_ref(v_____do__lift_3657_);
return v_res_3658_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages___redArg(lean_object* v_inst_3664_, lean_object* v_inst_3665_, lean_object* v_inst_3666_, lean_object* v_inst_3667_, lean_object* v_inst_3668_){
_start:
{
lean_object* v___f_3669_; lean_object* v_toApplicative_3670_; lean_object* v_toBind_3671_; lean_object* v_getOptionsUnrestricted_3672_; lean_object* v_toPure_3673_; lean_object* v_toMonadFileMap_3674_; lean_object* v_getFileName_3675_; lean_object* v_logMessage_3676_; lean_object* v___f_3677_; lean_object* v___f_3678_; lean_object* v___f_3679_; lean_object* v___f_3680_; lean_object* v___x_3681_; 
v___f_3669_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__1));
v_toApplicative_3670_ = lean_ctor_get(v_inst_3665_, 0);
v_toBind_3671_ = lean_ctor_get(v_inst_3665_, 1);
lean_inc_n(v_toBind_3671_, 2);
v_getOptionsUnrestricted_3672_ = lean_ctor_get(v_inst_3664_, 1);
lean_inc(v_getOptionsUnrestricted_3672_);
lean_dec_ref(v_inst_3664_);
v_toPure_3673_ = lean_ctor_get(v_toApplicative_3670_, 1);
lean_inc_n(v_toPure_3673_, 2);
v_toMonadFileMap_3674_ = lean_ctor_get(v_inst_3667_, 0);
lean_inc(v_toMonadFileMap_3674_);
v_getFileName_3675_ = lean_ctor_get(v_inst_3667_, 2);
lean_inc(v_getFileName_3675_);
v_logMessage_3676_ = lean_ctor_get(v_inst_3667_, 4);
lean_inc(v_logMessage_3676_);
lean_dec_ref(v_inst_3667_);
v___f_3677_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__2));
v___f_3678_ = ((lean_object*)(l_Lean_addTraceAsMessages___redArg___closed__3));
v___f_3679_ = lean_alloc_closure((void*)(l_Lean_printTraces___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3679_, 0, v_toPure_3673_);
v___f_3680_ = lean_alloc_closure((void*)(l_Lean_addTraceAsMessages___redArg___lam__10___boxed), 13, 12);
lean_closure_set(v___f_3680_, 0, v_toPure_3673_);
lean_closure_set(v___f_3680_, 1, v_logMessage_3676_);
lean_closure_set(v___f_3680_, 2, v_toBind_3671_);
lean_closure_set(v___f_3680_, 3, v_toMonadFileMap_3674_);
lean_closure_set(v___f_3680_, 4, v_getFileName_3675_);
lean_closure_set(v___f_3680_, 5, v_inst_3665_);
lean_closure_set(v___f_3680_, 6, v___f_3679_);
lean_closure_set(v___f_3680_, 7, v___f_3677_);
lean_closure_set(v___f_3680_, 8, v___f_3678_);
lean_closure_set(v___f_3680_, 9, v_inst_3666_);
lean_closure_set(v___f_3680_, 10, v___f_3669_);
lean_closure_set(v___f_3680_, 11, v_inst_3668_);
v___x_3681_ = lean_apply_4(v_toBind_3671_, lean_box(0), lean_box(0), v_getOptionsUnrestricted_3672_, v___f_3680_);
return v___x_3681_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTraceAsMessages(lean_object* v_m_3682_, lean_object* v_inst_3683_, lean_object* v_inst_3684_, lean_object* v_inst_3685_, lean_object* v_inst_3686_, lean_object* v_inst_3687_){
_start:
{
lean_object* v___x_3688_; 
v___x_3688_ = l_Lean_addTraceAsMessages___redArg(v_inst_3683_, v_inst_3684_, v_inst_3685_, v_inst_3686_, v_inst_3687_);
return v___x_3688_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3730_ = lean_unsigned_to_nat(2826257906u);
v___x_3731_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__17_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3732_ = l_Lean_Name_num___override(v___x_3731_, v___x_3730_);
return v___x_3732_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3734_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__19_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3735_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__18_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3736_ = l_Lean_Name_str___override(v___x_3735_, v___x_3734_);
return v___x_3736_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3738_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__21_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3739_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__20_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3740_ = l_Lean_Name_str___override(v___x_3739_, v___x_3738_);
return v___x_3740_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; 
v___x_3741_ = lean_unsigned_to_nat(2u);
v___x_3742_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__22_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3743_ = l_Lean_Name_num___override(v___x_3742_, v___x_3741_);
return v___x_3743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3745_; uint8_t v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; 
v___x_3745_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_initFn___closed__1_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_));
v___x_3746_ = 0;
v___x_3747_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_, &l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2__once, _init_l___private_Lean_Util_Trace_0__Lean_initFn___closed__23_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_);
v___x_3748_ = l_Lean_registerTraceClass(v___x_3745_, v___x_3746_, v___x_3747_);
return v___x_3748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2____boxed(lean_object* v_a_3749_){
_start:
{
lean_object* v_res_3750_; 
v_res_3750_ = l___private_Lean_Util_Trace_0__Lean_initFn_00___x40_Lean_Util_Trace_2826257906____hygCtx___hyg_2_();
return v_res_3750_;
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
