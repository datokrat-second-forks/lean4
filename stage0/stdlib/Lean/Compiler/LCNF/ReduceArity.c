// Lean compiler output
// Module: Lean.Compiler.LCNF.ReduceArity
// Imports: public import Lean.Compiler.LCNF.Internalize
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_FVarIdHashSet_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_FVarIdHashSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_FVarIdHashSet_size(lean_object*);
uint8_t l_Lean_FVarIdHashSet_isEmpty(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Param_toArg___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkParam(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkForallParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_FVarIdHashSet_toList(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitArg___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitArg___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visit_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_FindUsed_visit___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_collectUsedParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__3;
static const lean_array_object l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__4_value;
static const lean_array_object l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceArity_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceArity_reduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__2;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__3;
static const lean_string_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__4 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__4_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__5 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_reduceArity___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_ReduceArity_reduce___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__2(size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_dummy"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 145, 231, 197, 9, 240, 100, 81)}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "lcVoid"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__3_value),LEAN_SCALAR_PTR_LITERAL(68, 180, 59, 167, 252, 217, 37, 174)}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_reduceArity___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__5;
static const lean_string_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_redArg"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__6_value),LEAN_SCALAR_PTR_LITERAL(174, 35, 1, 83, 6, 52, 87, 186)}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__7_value;
static const lean_string_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "reduceArity"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__8_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__10_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__9_value),LEAN_SCALAR_PTR_LITERAL(89, 83, 236, 44, 104, 94, 232, 236)}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__11_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__11_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__12_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_reduceArity___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__13;
static const lean_string_object l_Lean_Compiler_LCNF_Decl_reduceArity___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ", used params: "};
static const lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__14_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_reduceArity___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___closed__15;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3(lean_object*, size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_reduceArity_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_reduceArity_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceArity___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceArity___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_reduceArity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_reduceArity___lam__0___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_reduceArity___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_reduceArity___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_reduceArity___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__9_value),LEAN_SCALAR_PTR_LITERAL(111, 96, 179, 183, 204, 167, 118, 86)}};
static const lean_object* l_Lean_Compiler_LCNF_reduceArity___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_reduceArity___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_reduceArity___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_reduceArity___closed__1_value),((lean_object*)&l_Lean_Compiler_LCNF_reduceArity___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_reduceArity___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_reduceArity___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_reduceArity = (const lean_object*)&l_Lean_Compiler_LCNF_reduceArity___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__8_value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ReduceArity"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(168, 178, 137, 206, 51, 200, 236, 181)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(129, 159, 68, 131, 252, 164, 71, 68)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 21, 243, 137, 59, 198, 123, 202)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__8_value),LEAN_SCALAR_PTR_LITERAL(14, 5, 205, 56, 180, 134, 217, 66)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(247, 187, 228, 121, 199, 206, 240, 67)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 80, 75, 155, 170, 54, 223, 11)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(247, 148, 104, 136, 58, 140, 43, 122)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(138, 217, 122, 183, 228, 182, 154, 193)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__8_value),LEAN_SCALAR_PTR_LITERAL(88, 65, 191, 26, 52, 74, 82, 47)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 252, 105, 27, 65, 1, 14, 1)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 4, 197, 254, 1, 206, 218, 250)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg(lean_object* v_fvarId_1_, lean_object* v_a_2_, lean_object* v_a_3_){
_start:
{
lean_object* v_params_5_; uint8_t v___x_6_; 
v_params_5_ = lean_ctor_get(v_a_2_, 1);
v___x_6_ = l_Lean_FVarIdSet_contains(v_params_5_, v_fvarId_1_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; lean_object* v___x_8_; 
lean_dec(v_fvarId_1_);
v___x_7_ = lean_box(0);
v___x_8_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
else
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_9_ = lean_st_ref_take(v_a_3_);
v___x_10_ = lean_box(0);
v___x_11_ = l_Lean_FVarIdHashSet_insert(v___x_9_, v_fvarId_1_);
v___x_12_ = lean_st_ref_put(v_a_3_, v___x_11_);
v___x_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_10_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg___boxed(lean_object* v_fvarId_14_, lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg(v_fvarId_14_, v_a_15_, v_a_16_);
lean_dec(v_a_16_);
lean_dec_ref(v_a_15_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitFVar(lean_object* v_fvarId_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg(v_fvarId_19_, v_a_20_, v_a_21_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitFVar___boxed(lean_object* v_fvarId_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_Compiler_LCNF_FindUsed_visitFVar(v_fvarId_28_, v_a_29_, v_a_30_, v_a_31_, v_a_32_, v_a_33_, v_a_34_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
lean_dec(v_a_32_);
lean_dec_ref(v_a_31_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitArg___redArg(lean_object* v_arg_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
if (lean_obj_tag(v_arg_37_) == 1)
{
lean_object* v_fvarId_41_; lean_object* v___x_42_; 
v_fvarId_41_ = lean_ctor_get(v_arg_37_, 0);
lean_inc(v_fvarId_41_);
lean_dec_ref_known(v_arg_37_, 1);
v___x_42_ = l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg(v_fvarId_41_, v_a_38_, v_a_39_);
return v___x_42_;
}
else
{
lean_object* v___x_43_; lean_object* v___x_44_; 
lean_dec(v_arg_37_);
v___x_43_ = lean_box(0);
v___x_44_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitArg___redArg___boxed(lean_object* v_arg_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_Compiler_LCNF_FindUsed_visitArg___redArg(v_arg_45_, v_a_46_, v_a_47_);
lean_dec(v_a_47_);
lean_dec_ref(v_a_46_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitArg(lean_object* v_arg_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_Compiler_LCNF_FindUsed_visitArg___redArg(v_arg_50_, v_a_51_, v_a_52_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitArg___boxed(lean_object* v_arg_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_Compiler_LCNF_FindUsed_visitArg(v_arg_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
lean_dec(v_a_63_);
lean_dec_ref(v_a_62_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1___redArg(lean_object* v_as_68_, size_t v_sz_69_, size_t v_i_70_, lean_object* v_b_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v_a_76_; uint8_t v___x_80_; 
v___x_80_ = lean_usize_dec_lt(v_i_70_, v_sz_69_);
if (v___x_80_ == 0)
{
lean_object* v___x_81_; 
v___x_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_81_, 0, v_b_71_);
return v___x_81_;
}
else
{
lean_object* v_array_82_; lean_object* v_start_83_; lean_object* v_stop_84_; uint8_t v___x_85_; 
v_array_82_ = lean_ctor_get(v_b_71_, 0);
v_start_83_ = lean_ctor_get(v_b_71_, 1);
v_stop_84_ = lean_ctor_get(v_b_71_, 2);
v___x_85_ = lean_nat_dec_lt(v_start_83_, v_stop_84_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; 
v___x_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_86_, 0, v_b_71_);
return v___x_86_;
}
else
{
lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_109_; 
lean_inc(v_stop_84_);
lean_inc(v_start_83_);
lean_inc_ref(v_array_82_);
v_isSharedCheck_109_ = !lean_is_exclusive(v_b_71_);
if (v_isSharedCheck_109_ == 0)
{
lean_object* v_unused_110_; lean_object* v_unused_111_; lean_object* v_unused_112_; 
v_unused_110_ = lean_ctor_get(v_b_71_, 2);
lean_dec(v_unused_110_);
v_unused_111_ = lean_ctor_get(v_b_71_, 1);
lean_dec(v_unused_111_);
v_unused_112_ = lean_ctor_get(v_b_71_, 0);
lean_dec(v_unused_112_);
v___x_88_ = v_b_71_;
v_isShared_89_ = v_isSharedCheck_109_;
goto v_resetjp_87_;
}
else
{
lean_dec(v_b_71_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_109_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_94_; 
v___x_90_ = lean_array_fget(v_array_82_, v_start_83_);
v___x_91_ = lean_unsigned_to_nat(1u);
v___x_92_ = lean_nat_add(v_start_83_, v___x_91_);
lean_dec(v_start_83_);
if (v_isShared_89_ == 0)
{
lean_ctor_set(v___x_88_, 1, v___x_92_);
v___x_94_ = v___x_88_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_array_82_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v___x_92_);
lean_ctor_set(v_reuseFailAlloc_108_, 2, v_stop_84_);
v___x_94_ = v_reuseFailAlloc_108_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
if (lean_obj_tag(v___x_90_) == 1)
{
lean_object* v_fvarId_95_; lean_object* v_a_96_; lean_object* v_fvarId_97_; uint8_t v___x_98_; 
v_fvarId_95_ = lean_ctor_get(v___x_90_, 0);
lean_inc(v_fvarId_95_);
lean_dec_ref_known(v___x_90_, 1);
v_a_96_ = lean_array_uget_borrowed(v_as_68_, v_i_70_);
v_fvarId_97_ = lean_ctor_get(v_a_96_, 0);
v___x_98_ = l_Lean_instBEqFVarId_beq(v_fvarId_95_, v_fvarId_97_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg(v_fvarId_95_, v___y_72_, v___y_73_);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_dec_ref_known(v___x_99_, 1);
v_a_76_ = v___x_94_;
goto v___jp_75_;
}
else
{
lean_object* v_a_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_107_; 
lean_dec_ref(v___x_94_);
v_a_100_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_107_ == 0)
{
v___x_102_ = v___x_99_;
v_isShared_103_ = v_isSharedCheck_107_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_a_100_);
lean_dec(v___x_99_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_107_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_105_; 
if (v_isShared_103_ == 0)
{
v___x_105_ = v___x_102_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_a_100_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
}
else
{
lean_dec(v_fvarId_95_);
v_a_76_ = v___x_94_;
goto v___jp_75_;
}
}
else
{
lean_dec(v___x_90_);
v_a_76_ = v___x_94_;
goto v___jp_75_;
}
}
}
}
}
v___jp_75_:
{
size_t v___x_77_; size_t v___x_78_; 
v___x_77_ = ((size_t)1ULL);
v___x_78_ = lean_usize_add(v_i_70_, v___x_77_);
v_i_70_ = v___x_78_;
v_b_71_ = v_a_76_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1___redArg___boxed(lean_object* v_as_113_, lean_object* v_sz_114_, lean_object* v_i_115_, lean_object* v_b_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_){
_start:
{
size_t v_sz_boxed_120_; size_t v_i_boxed_121_; lean_object* v_res_122_; 
v_sz_boxed_120_ = lean_unbox_usize(v_sz_114_);
lean_dec(v_sz_114_);
v_i_boxed_121_ = lean_unbox_usize(v_i_115_);
lean_dec(v_i_115_);
v_res_122_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1___redArg(v_as_113_, v_sz_boxed_120_, v_i_boxed_121_, v_b_116_, v___y_117_, v___y_118_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
lean_dec_ref(v_as_113_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3___redArg(lean_object* v_a_123_, lean_object* v_b_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_array_128_; lean_object* v_start_129_; lean_object* v_stop_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_146_; 
v_array_128_ = lean_ctor_get(v_a_123_, 0);
v_start_129_ = lean_ctor_get(v_a_123_, 1);
v_stop_130_ = lean_ctor_get(v_a_123_, 2);
v_isSharedCheck_146_ = !lean_is_exclusive(v_a_123_);
if (v_isSharedCheck_146_ == 0)
{
v___x_132_ = v_a_123_;
v_isShared_133_ = v_isSharedCheck_146_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_stop_130_);
lean_inc(v_start_129_);
lean_inc(v_array_128_);
lean_dec(v_a_123_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_146_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
uint8_t v___x_134_; 
v___x_134_ = lean_nat_dec_lt(v_start_129_, v_stop_130_);
if (v___x_134_ == 0)
{
lean_object* v___x_135_; 
lean_del_object(v___x_132_);
lean_dec(v_stop_130_);
lean_dec(v_start_129_);
lean_dec_ref(v_array_128_);
v___x_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_135_, 0, v_b_124_);
return v___x_135_;
}
else
{
lean_object* v___x_136_; lean_object* v_fvarId_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_142_; 
v___x_136_ = lean_array_fget_borrowed(v_array_128_, v_start_129_);
v_fvarId_137_ = lean_ctor_get(v___x_136_, 0);
lean_inc(v_fvarId_137_);
v___x_138_ = lean_box(0);
v___x_139_ = lean_unsigned_to_nat(1u);
v___x_140_ = lean_nat_add(v_start_129_, v___x_139_);
lean_dec(v_start_129_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v___x_140_);
v___x_142_ = v___x_132_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_array_128_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v___x_140_);
lean_ctor_set(v_reuseFailAlloc_145_, 2, v_stop_130_);
v___x_142_ = v_reuseFailAlloc_145_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v___x_143_; 
v___x_143_ = l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg(v_fvarId_137_, v___y_125_, v___y_126_);
if (lean_obj_tag(v___x_143_) == 0)
{
lean_dec_ref_known(v___x_143_, 1);
v_a_123_ = v___x_142_;
v_b_124_ = v___x_138_;
goto _start;
}
else
{
lean_dec_ref(v___x_142_);
return v___x_143_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3___redArg___boxed(lean_object* v_a_147_, lean_object* v_b_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3___redArg(v_a_147_, v_b_148_, v___y_149_, v___y_150_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg(lean_object* v_as_153_, size_t v_i_154_, size_t v_stop_155_, lean_object* v_b_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
uint8_t v___x_160_; 
v___x_160_ = lean_usize_dec_eq(v_i_154_, v_stop_155_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = lean_array_uget_borrowed(v_as_153_, v_i_154_);
lean_inc(v___x_161_);
v___x_162_ = l_Lean_Compiler_LCNF_FindUsed_visitArg___redArg(v___x_161_, v___y_157_, v___y_158_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v_a_163_; size_t v___x_164_; size_t v___x_165_; 
v_a_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_a_163_);
lean_dec_ref_known(v___x_162_, 1);
v___x_164_ = ((size_t)1ULL);
v___x_165_ = lean_usize_add(v_i_154_, v___x_164_);
v_i_154_ = v___x_165_;
v_b_156_ = v_a_163_;
goto _start;
}
else
{
return v___x_162_;
}
}
else
{
lean_object* v___x_167_; 
v___x_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_167_, 0, v_b_156_);
return v___x_167_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg___boxed(lean_object* v_as_168_, lean_object* v_i_169_, lean_object* v_stop_170_, lean_object* v_b_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
size_t v_i_boxed_175_; size_t v_stop_boxed_176_; lean_object* v_res_177_; 
v_i_boxed_175_ = lean_unbox_usize(v_i_169_);
lean_dec(v_i_169_);
v_stop_boxed_176_ = lean_unbox_usize(v_stop_170_);
lean_dec(v_stop_170_);
v_res_177_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg(v_as_168_, v_i_boxed_175_, v_stop_boxed_176_, v_b_171_, v___y_172_, v___y_173_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec_ref(v_as_168_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2___redArg(lean_object* v_a_178_, lean_object* v_b_179_, lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
lean_object* v_array_183_; lean_object* v_start_184_; lean_object* v_stop_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_200_; 
v_array_183_ = lean_ctor_get(v_a_178_, 0);
v_start_184_ = lean_ctor_get(v_a_178_, 1);
v_stop_185_ = lean_ctor_get(v_a_178_, 2);
v_isSharedCheck_200_ = !lean_is_exclusive(v_a_178_);
if (v_isSharedCheck_200_ == 0)
{
v___x_187_ = v_a_178_;
v_isShared_188_ = v_isSharedCheck_200_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_stop_185_);
lean_inc(v_start_184_);
lean_inc(v_array_183_);
lean_dec(v_a_178_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_200_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
uint8_t v___x_189_; 
v___x_189_ = lean_nat_dec_lt(v_start_184_, v_stop_185_);
if (v___x_189_ == 0)
{
lean_object* v___x_190_; 
lean_del_object(v___x_187_);
lean_dec(v_stop_185_);
lean_dec(v_start_184_);
lean_dec_ref(v_array_183_);
v___x_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_190_, 0, v_b_179_);
return v___x_190_;
}
else
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_195_; 
v___x_191_ = lean_box(0);
v___x_192_ = lean_unsigned_to_nat(1u);
v___x_193_ = lean_nat_add(v_start_184_, v___x_192_);
lean_inc_ref(v_array_183_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 1, v___x_193_);
v___x_195_ = v___x_187_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v_array_183_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_199_, 2, v_stop_185_);
v___x_195_ = v_reuseFailAlloc_199_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_array_fget(v_array_183_, v_start_184_);
lean_dec(v_start_184_);
lean_dec_ref(v_array_183_);
v___x_197_ = l_Lean_Compiler_LCNF_FindUsed_visitArg___redArg(v___x_196_, v___y_180_, v___y_181_);
if (lean_obj_tag(v___x_197_) == 0)
{
lean_dec_ref_known(v___x_197_, 1);
v_a_178_ = v___x_195_;
v_b_179_ = v___x_191_;
goto _start;
}
else
{
lean_dec_ref(v___x_195_);
return v___x_197_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2___redArg___boxed(lean_object* v_a_201_, lean_object* v_b_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2___redArg(v_a_201_, v_b_202_, v___y_203_, v___y_204_);
lean_dec(v___y_204_);
lean_dec_ref(v___y_203_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitLetValue(lean_object* v_e_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
switch(lean_obj_tag(v_e_207_))
{
case 0:
{
lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_222_; 
v_isSharedCheck_222_ = !lean_is_exclusive(v_e_207_);
if (v_isSharedCheck_222_ == 0)
{
lean_object* v_unused_223_; 
v_unused_223_ = lean_ctor_get(v_e_207_, 0);
lean_dec(v_unused_223_);
v___x_216_ = v_e_207_;
v_isShared_217_ = v_isSharedCheck_222_;
goto v_resetjp_215_;
}
else
{
lean_dec(v_e_207_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_222_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_218_; lean_object* v___x_220_; 
v___x_218_ = lean_box(0);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v___x_218_);
v___x_220_ = v___x_216_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_218_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
case 1:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_box(0);
v___x_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
return v___x_225_;
}
case 2:
{
lean_object* v_struct_226_; lean_object* v___x_227_; 
v_struct_226_ = lean_ctor_get(v_e_207_, 2);
lean_inc(v_struct_226_);
lean_dec_ref_known(v_e_207_, 3);
v___x_227_ = l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg(v_struct_226_, v_a_208_, v_a_209_);
return v___x_227_;
}
case 3:
{
lean_object* v_decl_228_; lean_object* v_toSignature_229_; lean_object* v_declName_230_; lean_object* v_args_231_; lean_object* v_name_232_; lean_object* v_params_233_; lean_object* v___y_235_; lean_object* v_lower_236_; lean_object* v_upper_237_; uint8_t v___x_248_; 
v_decl_228_ = lean_ctor_get(v_a_208_, 0);
v_toSignature_229_ = lean_ctor_get(v_decl_228_, 0);
v_declName_230_ = lean_ctor_get(v_e_207_, 0);
lean_inc(v_declName_230_);
v_args_231_ = lean_ctor_get(v_e_207_, 2);
lean_inc_ref(v_args_231_);
lean_dec_ref_known(v_e_207_, 3);
v_name_232_ = lean_ctor_get(v_toSignature_229_, 0);
v_params_233_ = lean_ctor_get(v_toSignature_229_, 3);
v___x_248_ = lean_name_eq(v_declName_230_, v_name_232_);
lean_dec(v_declName_230_);
if (v___x_248_ == 0)
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_249_ = lean_unsigned_to_nat(0u);
v___x_250_ = lean_array_get_size(v_args_231_);
v___x_251_ = lean_box(0);
v___x_252_ = lean_nat_dec_lt(v___x_249_, v___x_250_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; 
lean_dec_ref(v_args_231_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_251_);
return v___x_253_;
}
else
{
uint8_t v___x_254_; 
v___x_254_ = lean_nat_dec_le(v___x_250_, v___x_250_);
if (v___x_254_ == 0)
{
if (v___x_252_ == 0)
{
lean_object* v___x_255_; 
lean_dec_ref(v_args_231_);
v___x_255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_251_);
return v___x_255_;
}
else
{
size_t v___x_256_; size_t v___x_257_; lean_object* v___x_258_; 
v___x_256_ = ((size_t)0ULL);
v___x_257_ = lean_usize_of_nat(v___x_250_);
v___x_258_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg(v_args_231_, v___x_256_, v___x_257_, v___x_251_, v_a_208_, v_a_209_);
lean_dec_ref(v_args_231_);
return v___x_258_;
}
}
else
{
size_t v___x_259_; size_t v___x_260_; lean_object* v___x_261_; 
v___x_259_ = ((size_t)0ULL);
v___x_260_ = lean_usize_of_nat(v___x_250_);
v___x_261_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg(v_args_231_, v___x_259_, v___x_260_, v___x_251_, v_a_208_, v_a_209_);
lean_dec_ref(v_args_231_);
return v___x_261_;
}
}
}
else
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; size_t v_sz_265_; size_t v___x_266_; lean_object* v___x_267_; 
v___x_262_ = lean_unsigned_to_nat(0u);
v___x_263_ = lean_array_get_size(v_args_231_);
lean_inc_ref(v_args_231_);
v___x_264_ = l_Array_toSubarray___redArg(v_args_231_, v___x_262_, v___x_263_);
v_sz_265_ = lean_array_size(v_params_233_);
v___x_266_ = ((size_t)0ULL);
v___x_267_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1___redArg(v_params_233_, v_sz_265_, v___x_266_, v___x_264_, v_a_208_, v_a_209_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_lower_269_; lean_object* v_upper_270_; lean_object* v___x_276_; uint8_t v___x_277_; 
lean_dec_ref_known(v___x_267_, 1);
v___x_276_ = lean_array_get_size(v_params_233_);
v___x_277_ = lean_nat_dec_le(v___x_276_, v___x_262_);
if (v___x_277_ == 0)
{
v_lower_269_ = v___x_276_;
v_upper_270_ = v___x_263_;
goto v___jp_268_;
}
else
{
v_lower_269_ = v___x_262_;
v_upper_270_ = v___x_263_;
goto v___jp_268_;
}
v___jp_268_:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_271_ = l_Array_toSubarray___redArg(v_args_231_, v_lower_269_, v_upper_270_);
v___x_272_ = lean_box(0);
v___x_273_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2___redArg(v___x_271_, v___x_272_, v_a_208_, v_a_209_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v___x_274_; uint8_t v___x_275_; 
lean_dec_ref_known(v___x_273_, 1);
v___x_274_ = lean_array_get_size(v_params_233_);
v___x_275_ = lean_nat_dec_le(v___x_263_, v___x_262_);
if (v___x_275_ == 0)
{
v___y_235_ = v___x_272_;
v_lower_236_ = v___x_263_;
v_upper_237_ = v___x_274_;
goto v___jp_234_;
}
else
{
v___y_235_ = v___x_272_;
v_lower_236_ = v___x_262_;
v_upper_237_ = v___x_274_;
goto v___jp_234_;
}
}
else
{
return v___x_273_;
}
}
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_dec_ref(v_args_231_);
v_a_278_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_267_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_267_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_278_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
v___jp_234_:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
lean_inc_ref(v_params_233_);
v___x_238_ = l_Array_toSubarray___redArg(v_params_233_, v_lower_236_, v_upper_237_);
v___x_239_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3___redArg(v___x_238_, v___y_235_, v_a_208_, v_a_209_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_246_ == 0)
{
lean_object* v_unused_247_; 
v_unused_247_ = lean_ctor_get(v___x_239_, 0);
lean_dec(v_unused_247_);
v___x_241_ = v___x_239_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_dec(v___x_239_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
lean_ctor_set(v___x_241_, 0, v___y_235_);
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___y_235_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
else
{
return v___x_239_;
}
}
}
default: 
{
lean_object* v_fvarId_286_; lean_object* v_args_287_; lean_object* v___x_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_309_; 
v_fvarId_286_ = lean_ctor_get(v_e_207_, 0);
lean_inc(v_fvarId_286_);
v_args_287_ = lean_ctor_get(v_e_207_, 1);
lean_inc_ref(v_args_287_);
lean_dec_ref_known(v_e_207_, 2);
v___x_288_ = l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg(v_fvarId_286_, v_a_208_, v_a_209_);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_288_);
if (v_isSharedCheck_309_ == 0)
{
lean_object* v_unused_310_; 
v_unused_310_ = lean_ctor_get(v___x_288_, 0);
lean_dec(v_unused_310_);
v___x_290_ = v___x_288_;
v_isShared_291_ = v_isSharedCheck_309_;
goto v_resetjp_289_;
}
else
{
lean_dec(v___x_288_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_309_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = lean_array_get_size(v_args_287_);
v___x_294_ = lean_box(0);
v___x_295_ = lean_nat_dec_lt(v___x_292_, v___x_293_);
if (v___x_295_ == 0)
{
lean_object* v___x_297_; 
lean_dec_ref(v_args_287_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v___x_294_);
v___x_297_ = v___x_290_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_294_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
else
{
uint8_t v___x_299_; 
v___x_299_ = lean_nat_dec_le(v___x_293_, v___x_293_);
if (v___x_299_ == 0)
{
if (v___x_295_ == 0)
{
lean_object* v___x_301_; 
lean_dec_ref(v_args_287_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v___x_294_);
v___x_301_ = v___x_290_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v___x_294_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
else
{
size_t v___x_303_; size_t v___x_304_; lean_object* v___x_305_; 
lean_del_object(v___x_290_);
v___x_303_ = ((size_t)0ULL);
v___x_304_ = lean_usize_of_nat(v___x_293_);
v___x_305_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg(v_args_287_, v___x_303_, v___x_304_, v___x_294_, v_a_208_, v_a_209_);
lean_dec_ref(v_args_287_);
return v___x_305_;
}
}
else
{
size_t v___x_306_; size_t v___x_307_; lean_object* v___x_308_; 
lean_del_object(v___x_290_);
v___x_306_ = ((size_t)0ULL);
v___x_307_ = lean_usize_of_nat(v___x_293_);
v___x_308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg(v_args_287_, v___x_306_, v___x_307_, v___x_294_, v_a_208_, v_a_209_);
lean_dec_ref(v_args_287_);
return v___x_308_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visitLetValue___boxed(lean_object* v_e_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_Lean_Compiler_LCNF_FindUsed_visitLetValue(v_e_311_, v_a_312_, v_a_313_, v_a_314_, v_a_315_, v_a_316_, v_a_317_);
lean_dec(v_a_317_);
lean_dec_ref(v_a_316_);
lean_dec(v_a_315_);
lean_dec_ref(v_a_314_);
lean_dec(v_a_313_);
lean_dec_ref(v_a_312_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0(lean_object* v_as_320_, size_t v_i_321_, size_t v_stop_322_, lean_object* v_b_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg(v_as_320_, v_i_321_, v_stop_322_, v_b_323_, v___y_324_, v___y_325_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___boxed(lean_object* v_as_332_, lean_object* v_i_333_, lean_object* v_stop_334_, lean_object* v_b_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
size_t v_i_boxed_343_; size_t v_stop_boxed_344_; lean_object* v_res_345_; 
v_i_boxed_343_ = lean_unbox_usize(v_i_333_);
lean_dec(v_i_333_);
v_stop_boxed_344_ = lean_unbox_usize(v_stop_334_);
lean_dec(v_stop_334_);
v_res_345_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0(v_as_332_, v_i_boxed_343_, v_stop_boxed_344_, v_b_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_);
lean_dec(v___y_341_);
lean_dec_ref(v___y_340_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
lean_dec_ref(v_as_332_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1(lean_object* v_as_346_, size_t v_sz_347_, size_t v_i_348_, lean_object* v_b_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1___redArg(v_as_346_, v_sz_347_, v_i_348_, v_b_349_, v___y_350_, v___y_351_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1___boxed(lean_object* v_as_358_, lean_object* v_sz_359_, lean_object* v_i_360_, lean_object* v_b_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
size_t v_sz_boxed_369_; size_t v_i_boxed_370_; lean_object* v_res_371_; 
v_sz_boxed_369_ = lean_unbox_usize(v_sz_359_);
lean_dec(v_sz_359_);
v_i_boxed_370_ = lean_unbox_usize(v_i_360_);
lean_dec(v_i_360_);
v_res_371_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__1(v_as_358_, v_sz_boxed_369_, v_i_boxed_370_, v_b_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
lean_dec_ref(v_as_358_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2(lean_object* v_inst_372_, lean_object* v_R_373_, lean_object* v_a_374_, lean_object* v_b_375_, lean_object* v_c_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2___redArg(v_a_374_, v_b_375_, v___y_377_, v___y_378_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2___boxed(lean_object* v_inst_385_, lean_object* v_R_386_, lean_object* v_a_387_, lean_object* v_b_388_, lean_object* v_c_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__2(v_inst_385_, v_R_386_, v_a_387_, v_b_388_, v_c_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3(lean_object* v_inst_398_, lean_object* v_R_399_, lean_object* v_a_400_, lean_object* v_b_401_, lean_object* v_c_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3___redArg(v_a_400_, v_b_401_, v___y_403_, v___y_404_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3___boxed(lean_object* v_inst_411_, lean_object* v_R_412_, lean_object* v_a_413_, lean_object* v_b_414_, lean_object* v_c_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__3(v_inst_411_, v_R_412_, v_a_413_, v_b_414_, v_c_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visit(lean_object* v_code_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_decl_433_; lean_object* v_k_434_; lean_object* v___y_435_; lean_object* v___y_436_; lean_object* v___y_437_; lean_object* v___y_438_; lean_object* v___y_439_; lean_object* v___y_440_; 
switch(lean_obj_tag(v_code_424_))
{
case 0:
{
lean_object* v_decl_444_; lean_object* v_k_445_; lean_object* v_value_446_; lean_object* v___x_447_; 
v_decl_444_ = lean_ctor_get(v_code_424_, 0);
lean_inc_ref(v_decl_444_);
v_k_445_ = lean_ctor_get(v_code_424_, 1);
lean_inc_ref(v_k_445_);
lean_dec_ref_known(v_code_424_, 2);
v_value_446_ = lean_ctor_get(v_decl_444_, 3);
lean_inc(v_value_446_);
lean_dec_ref(v_decl_444_);
v___x_447_ = l_Lean_Compiler_LCNF_FindUsed_visitLetValue(v_value_446_, v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_dec_ref_known(v___x_447_, 1);
v_code_424_ = v_k_445_;
goto _start;
}
else
{
lean_dec_ref(v_k_445_);
return v___x_447_;
}
}
case 3:
{
lean_object* v_args_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; uint8_t v___x_453_; 
v_args_449_ = lean_ctor_get(v_code_424_, 1);
lean_inc_ref(v_args_449_);
lean_dec_ref_known(v_code_424_, 2);
v___x_450_ = lean_unsigned_to_nat(0u);
v___x_451_ = lean_array_get_size(v_args_449_);
v___x_452_ = lean_box(0);
v___x_453_ = lean_nat_dec_lt(v___x_450_, v___x_451_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; 
lean_dec_ref(v_args_449_);
v___x_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_454_, 0, v___x_452_);
return v___x_454_;
}
else
{
uint8_t v___x_455_; 
v___x_455_ = lean_nat_dec_le(v___x_451_, v___x_451_);
if (v___x_455_ == 0)
{
if (v___x_453_ == 0)
{
lean_object* v___x_456_; 
lean_dec_ref(v_args_449_);
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_452_);
return v___x_456_;
}
else
{
size_t v___x_457_; size_t v___x_458_; lean_object* v___x_459_; 
v___x_457_ = ((size_t)0ULL);
v___x_458_ = lean_usize_of_nat(v___x_451_);
v___x_459_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg(v_args_449_, v___x_457_, v___x_458_, v___x_452_, v_a_425_, v_a_426_);
lean_dec_ref(v_args_449_);
return v___x_459_;
}
}
else
{
size_t v___x_460_; size_t v___x_461_; lean_object* v___x_462_; 
v___x_460_ = ((size_t)0ULL);
v___x_461_ = lean_usize_of_nat(v___x_451_);
v___x_462_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visitLetValue_spec__0___redArg(v_args_449_, v___x_460_, v___x_461_, v___x_452_, v_a_425_, v_a_426_);
lean_dec_ref(v_args_449_);
return v___x_462_;
}
}
}
case 4:
{
lean_object* v_cases_463_; lean_object* v_discr_464_; lean_object* v_alts_465_; lean_object* v___x_466_; 
v_cases_463_ = lean_ctor_get(v_code_424_, 0);
lean_inc_ref(v_cases_463_);
lean_dec_ref_known(v_code_424_, 1);
v_discr_464_ = lean_ctor_get(v_cases_463_, 2);
lean_inc(v_discr_464_);
v_alts_465_ = lean_ctor_get(v_cases_463_, 3);
lean_inc_ref(v_alts_465_);
lean_dec_ref(v_cases_463_);
v___x_466_ = l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg(v_discr_464_, v_a_425_, v_a_426_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_487_; 
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_487_ == 0)
{
lean_object* v_unused_488_; 
v_unused_488_ = lean_ctor_get(v___x_466_, 0);
lean_dec(v_unused_488_);
v___x_468_ = v___x_466_;
v_isShared_469_ = v_isSharedCheck_487_;
goto v_resetjp_467_;
}
else
{
lean_dec(v___x_466_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_487_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; uint8_t v___x_473_; 
v___x_470_ = lean_unsigned_to_nat(0u);
v___x_471_ = lean_array_get_size(v_alts_465_);
v___x_472_ = lean_box(0);
v___x_473_ = lean_nat_dec_lt(v___x_470_, v___x_471_);
if (v___x_473_ == 0)
{
lean_object* v___x_475_; 
lean_dec_ref(v_alts_465_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 0, v___x_472_);
v___x_475_ = v___x_468_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_472_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
else
{
uint8_t v___x_477_; 
v___x_477_ = lean_nat_dec_le(v___x_471_, v___x_471_);
if (v___x_477_ == 0)
{
if (v___x_473_ == 0)
{
lean_object* v___x_479_; 
lean_dec_ref(v_alts_465_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 0, v___x_472_);
v___x_479_ = v___x_468_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v___x_472_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
else
{
size_t v___x_481_; size_t v___x_482_; lean_object* v___x_483_; 
lean_del_object(v___x_468_);
v___x_481_ = ((size_t)0ULL);
v___x_482_ = lean_usize_of_nat(v___x_471_);
v___x_483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visit_spec__0(v_alts_465_, v___x_481_, v___x_482_, v___x_472_, v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_);
lean_dec_ref(v_alts_465_);
return v___x_483_;
}
}
else
{
size_t v___x_484_; size_t v___x_485_; lean_object* v___x_486_; 
lean_del_object(v___x_468_);
v___x_484_ = ((size_t)0ULL);
v___x_485_ = lean_usize_of_nat(v___x_471_);
v___x_486_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visit_spec__0(v_alts_465_, v___x_484_, v___x_485_, v___x_472_, v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_);
lean_dec_ref(v_alts_465_);
return v___x_486_;
}
}
}
}
else
{
lean_dec_ref(v_alts_465_);
return v___x_466_;
}
}
case 5:
{
lean_object* v_fvarId_489_; lean_object* v___x_490_; 
v_fvarId_489_ = lean_ctor_get(v_code_424_, 0);
lean_inc(v_fvarId_489_);
lean_dec_ref_known(v_code_424_, 1);
v___x_490_ = l_Lean_Compiler_LCNF_FindUsed_visitFVar___redArg(v_fvarId_489_, v_a_425_, v_a_426_);
return v___x_490_;
}
case 6:
{
lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_498_; 
v_isSharedCheck_498_ = !lean_is_exclusive(v_code_424_);
if (v_isSharedCheck_498_ == 0)
{
lean_object* v_unused_499_; 
v_unused_499_ = lean_ctor_get(v_code_424_, 0);
lean_dec(v_unused_499_);
v___x_492_ = v_code_424_;
v_isShared_493_ = v_isSharedCheck_498_;
goto v_resetjp_491_;
}
else
{
lean_dec(v_code_424_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_498_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_494_; lean_object* v___x_496_; 
v___x_494_ = lean_box(0);
if (v_isShared_493_ == 0)
{
lean_ctor_set_tag(v___x_492_, 0);
lean_ctor_set(v___x_492_, 0, v___x_494_);
v___x_496_ = v___x_492_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_494_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
default: 
{
lean_object* v_decl_500_; lean_object* v_k_501_; 
v_decl_500_ = lean_ctor_get(v_code_424_, 0);
lean_inc_ref(v_decl_500_);
v_k_501_ = lean_ctor_get(v_code_424_, 1);
lean_inc_ref(v_k_501_);
lean_dec_ref(v_code_424_);
v_decl_433_ = v_decl_500_;
v_k_434_ = v_k_501_;
v___y_435_ = v_a_425_;
v___y_436_ = v_a_426_;
v___y_437_ = v_a_427_;
v___y_438_ = v_a_428_;
v___y_439_ = v_a_429_;
v___y_440_ = v_a_430_;
goto v___jp_432_;
}
}
v___jp_432_:
{
lean_object* v_value_441_; lean_object* v___x_442_; 
v_value_441_ = lean_ctor_get(v_decl_433_, 4);
lean_inc_ref(v_value_441_);
lean_dec_ref(v_decl_433_);
v___x_442_ = l_Lean_Compiler_LCNF_FindUsed_visit(v_value_441_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_dec_ref_known(v___x_442_, 1);
v_code_424_ = v_k_434_;
v_a_425_ = v___y_435_;
v_a_426_ = v___y_436_;
v_a_427_ = v___y_437_;
v_a_428_ = v___y_438_;
v_a_429_ = v___y_439_;
v_a_430_ = v___y_440_;
goto _start;
}
else
{
lean_dec_ref(v_k_434_);
return v___x_442_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visit_spec__0(lean_object* v_as_502_, size_t v_i_503_, size_t v_stop_504_, lean_object* v_b_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v___y_514_; uint8_t v___x_520_; 
v___x_520_ = lean_usize_dec_eq(v_i_503_, v_stop_504_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; 
v___x_521_ = lean_array_uget_borrowed(v_as_502_, v_i_503_);
switch(lean_obj_tag(v___x_521_))
{
case 0:
{
lean_object* v_code_522_; 
v_code_522_ = lean_ctor_get(v___x_521_, 2);
lean_inc_ref(v_code_522_);
v___y_514_ = v_code_522_;
goto v___jp_513_;
}
case 1:
{
lean_object* v_code_523_; 
v_code_523_ = lean_ctor_get(v___x_521_, 1);
lean_inc_ref(v_code_523_);
v___y_514_ = v_code_523_;
goto v___jp_513_;
}
default: 
{
lean_object* v_code_524_; 
v_code_524_ = lean_ctor_get(v___x_521_, 0);
lean_inc_ref(v_code_524_);
v___y_514_ = v_code_524_;
goto v___jp_513_;
}
}
}
else
{
lean_object* v___x_525_; 
v___x_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_525_, 0, v_b_505_);
return v___x_525_;
}
v___jp_513_:
{
lean_object* v___x_515_; 
v___x_515_ = l_Lean_Compiler_LCNF_FindUsed_visit(v___y_514_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; size_t v___x_517_; size_t v___x_518_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
lean_dec_ref_known(v___x_515_, 1);
v___x_517_ = ((size_t)1ULL);
v___x_518_ = lean_usize_add(v_i_503_, v___x_517_);
v_i_503_ = v___x_518_;
v_b_505_ = v_a_516_;
goto _start;
}
else
{
return v___x_515_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visit_spec__0___boxed(lean_object* v_as_526_, lean_object* v_i_527_, lean_object* v_stop_528_, lean_object* v_b_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
size_t v_i_boxed_537_; size_t v_stop_boxed_538_; lean_object* v_res_539_; 
v_i_boxed_537_ = lean_unbox_usize(v_i_527_);
lean_dec(v_i_527_);
v_stop_boxed_538_ = lean_unbox_usize(v_stop_528_);
lean_dec(v_stop_528_);
v_res_539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_visit_spec__0(v_as_526_, v_i_boxed_537_, v_stop_boxed_538_, v_b_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec_ref(v_as_526_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_visit___boxed(lean_object* v_code_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_, lean_object* v_a_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Lean_Compiler_LCNF_FindUsed_visit(v_code_540_, v_a_541_, v_a_542_, v_a_543_, v_a_544_, v_a_545_, v_a_546_);
lean_dec(v_a_546_);
lean_dec_ref(v_a_545_);
lean_dec(v_a_544_);
lean_dec_ref(v_a_543_);
lean_dec(v_a_542_);
lean_dec_ref(v_a_541_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0___redArg(lean_object* v_f_549_, lean_object* v_v_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
if (lean_obj_tag(v_v_550_) == 0)
{
lean_object* v_code_558_; lean_object* v___x_559_; 
v_code_558_ = lean_ctor_get(v_v_550_, 0);
lean_inc_ref(v_code_558_);
lean_dec_ref_known(v_v_550_, 1);
lean_inc(v___y_556_);
lean_inc_ref(v___y_555_);
lean_inc(v___y_554_);
lean_inc_ref(v___y_553_);
lean_inc(v___y_552_);
lean_inc_ref(v___y_551_);
v___x_559_ = lean_apply_8(v_f_549_, v_code_558_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, lean_box(0));
return v___x_559_;
}
else
{
lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_567_; 
lean_dec_ref(v_f_549_);
v_isSharedCheck_567_ = !lean_is_exclusive(v_v_550_);
if (v_isSharedCheck_567_ == 0)
{
lean_object* v_unused_568_; 
v_unused_568_ = lean_ctor_get(v_v_550_, 0);
lean_dec(v_unused_568_);
v___x_561_ = v_v_550_;
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
else
{
lean_dec(v_v_550_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; lean_object* v___x_565_; 
v___x_563_ = lean_box(0);
if (v_isShared_562_ == 0)
{
lean_ctor_set_tag(v___x_561_, 0);
lean_ctor_set(v___x_561_, 0, v___x_563_);
v___x_565_ = v___x_561_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_563_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0___redArg___boxed(lean_object* v_f_569_, lean_object* v_v_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0___redArg(v_f_569_, v_v_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
lean_dec(v___y_574_);
lean_dec_ref(v___y_573_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0(uint8_t v_pu_579_, lean_object* v_f_580_, lean_object* v_v_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0___redArg(v_f_580_, v_v_581_, v___y_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0___boxed(lean_object* v_pu_590_, lean_object* v_f_591_, lean_object* v_v_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
uint8_t v_pu_boxed_600_; lean_object* v_res_601_; 
v_pu_boxed_600_ = lean_unbox(v_pu_590_);
v_res_601_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0(v_pu_boxed_600_, v_f_591_, v_v_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__1(lean_object* v_as_602_, size_t v_i_603_, size_t v_stop_604_, lean_object* v_b_605_){
_start:
{
uint8_t v___x_606_; 
v___x_606_ = lean_usize_dec_eq(v_i_603_, v_stop_604_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; lean_object* v_fvarId_608_; lean_object* v___x_609_; size_t v___x_610_; size_t v___x_611_; 
v___x_607_ = lean_array_uget_borrowed(v_as_602_, v_i_603_);
v_fvarId_608_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_fvarId_608_);
v___x_609_ = l_Lean_FVarIdSet_insert(v_b_605_, v_fvarId_608_);
v___x_610_ = ((size_t)1ULL);
v___x_611_ = lean_usize_add(v_i_603_, v___x_610_);
v_i_603_ = v___x_611_;
v_b_605_ = v___x_609_;
goto _start;
}
else
{
return v_b_605_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__1___boxed(lean_object* v_as_613_, lean_object* v_i_614_, lean_object* v_stop_615_, lean_object* v_b_616_){
_start:
{
size_t v_i_boxed_617_; size_t v_stop_boxed_618_; lean_object* v_res_619_; 
v_i_boxed_617_ = lean_unbox_usize(v_i_614_);
lean_dec(v_i_614_);
v_stop_boxed_618_ = lean_unbox_usize(v_stop_615_);
lean_dec(v_stop_615_);
v_res_619_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__1(v_as_613_, v_i_boxed_617_, v_stop_boxed_618_, v_b_616_);
lean_dec_ref(v_as_613_);
return v_res_619_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__1(void){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_621_ = lean_box(0);
v___x_622_ = lean_unsigned_to_nat(16u);
v___x_623_ = lean_mk_array(v___x_622_, v___x_621_);
return v___x_623_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__2(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_624_ = lean_obj_once(&l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__1, &l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__1_once, _init_l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__1);
v___x_625_ = lean_unsigned_to_nat(0u);
v___x_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___x_624_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_collectUsedParams(lean_object* v_decl_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_){
_start:
{
lean_object* v_toSignature_633_; lean_object* v_value_634_; lean_object* v___y_636_; lean_object* v_params_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; 
v_toSignature_633_ = lean_ctor_get(v_decl_627_, 0);
v_value_634_ = lean_ctor_get(v_decl_627_, 1);
lean_inc_ref(v_value_634_);
v_params_659_ = lean_ctor_get(v_toSignature_633_, 3);
v___x_660_ = lean_box(1);
v___x_661_ = lean_unsigned_to_nat(0u);
v___x_662_ = lean_array_get_size(v_params_659_);
v___x_663_ = lean_nat_dec_lt(v___x_661_, v___x_662_);
if (v___x_663_ == 0)
{
v___y_636_ = v___x_660_;
goto v___jp_635_;
}
else
{
uint8_t v___x_664_; 
v___x_664_ = lean_nat_dec_le(v___x_662_, v___x_662_);
if (v___x_664_ == 0)
{
if (v___x_663_ == 0)
{
v___y_636_ = v___x_660_;
goto v___jp_635_;
}
else
{
size_t v___x_665_; size_t v___x_666_; lean_object* v___x_667_; 
v___x_665_ = ((size_t)0ULL);
v___x_666_ = lean_usize_of_nat(v___x_662_);
v___x_667_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__1(v_params_659_, v___x_665_, v___x_666_, v___x_660_);
v___y_636_ = v___x_667_;
goto v___jp_635_;
}
}
else
{
size_t v___x_668_; size_t v___x_669_; lean_object* v___x_670_; 
v___x_668_ = ((size_t)0ULL);
v___x_669_ = lean_usize_of_nat(v___x_662_);
v___x_670_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__1(v_params_659_, v___x_668_, v___x_669_, v___x_660_);
v___y_636_ = v___x_670_;
goto v___jp_635_;
}
}
v___jp_635_:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_637_ = ((lean_object*)(l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__0));
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v_decl_627_);
lean_ctor_set(v___x_638_, 1, v___y_636_);
v___x_639_ = lean_obj_once(&l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__2, &l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__2_once, _init_l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__2);
v___x_640_ = lean_st_mk_ref(v___x_639_);
v___x_641_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_FindUsed_collectUsedParams_spec__0___redArg(v___x_637_, v_value_634_, v___x_638_, v___x_640_, v_a_628_, v_a_629_, v_a_630_, v_a_631_);
lean_dec_ref_known(v___x_638_, 2);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_649_; 
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_649_ == 0)
{
lean_object* v_unused_650_; 
v_unused_650_ = lean_ctor_get(v___x_641_, 0);
lean_dec(v_unused_650_);
v___x_643_ = v___x_641_;
v_isShared_644_ = v_isSharedCheck_649_;
goto v_resetjp_642_;
}
else
{
lean_dec(v___x_641_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_649_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_645_; lean_object* v___x_647_; 
v___x_645_ = lean_st_ref_get(v___x_640_);
lean_dec(v___x_640_);
if (v_isShared_644_ == 0)
{
lean_ctor_set(v___x_643_, 0, v___x_645_);
v___x_647_ = v___x_643_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v___x_645_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
else
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
lean_dec(v___x_640_);
v_a_651_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_658_ == 0)
{
v___x_653_ = v___x_641_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_641_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_651_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___boxed(lean_object* v_decl_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Lean_Compiler_LCNF_FindUsed_collectUsedParams(v_decl_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_);
lean_dec(v_a_675_);
lean_dec_ref(v_a_674_);
lean_dec(v_a_673_);
lean_dec_ref(v_a_672_);
return v_res_677_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__0___closed__0(void){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__0(lean_object* v_msg_679_){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__0___closed__0);
v___x_681_ = lean_panic_fn_borrowed(v___x_680_, v_msg_679_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1___redArg(lean_object* v_args_682_, lean_object* v_upperBound_683_, lean_object* v___x_684_, lean_object* v_a_685_, lean_object* v_b_686_){
_start:
{
lean_object* v_a_689_; uint8_t v___x_696_; 
v___x_696_ = lean_nat_dec_lt(v_a_685_, v_upperBound_683_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; 
lean_dec(v_a_685_);
v___x_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_697_, 0, v_b_686_);
return v___x_697_;
}
else
{
lean_object* v___x_698_; uint8_t v___x_699_; 
v___x_698_ = lean_array_get_size(v___x_684_);
v___x_699_ = lean_nat_dec_lt(v_a_685_, v___x_698_);
if (v___x_699_ == 0)
{
goto v___jp_693_;
}
else
{
lean_object* v___x_700_; uint8_t v___x_701_; 
v___x_700_ = lean_array_fget_borrowed(v___x_684_, v_a_685_);
v___x_701_ = lean_unbox(v___x_700_);
if (v___x_701_ == 0)
{
v_a_689_ = v_b_686_;
goto v___jp_688_;
}
else
{
goto v___jp_693_;
}
}
}
v___jp_688_:
{
lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_690_ = lean_unsigned_to_nat(1u);
v___x_691_ = lean_nat_add(v_a_685_, v___x_690_);
lean_dec(v_a_685_);
v_a_685_ = v___x_691_;
v_b_686_ = v_a_689_;
goto _start;
}
v___jp_693_:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_array_fget_borrowed(v_args_682_, v_a_685_);
lean_inc(v___x_694_);
v___x_695_ = lean_array_push(v_b_686_, v___x_694_);
v_a_689_ = v___x_695_;
goto v___jp_688_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1___redArg___boxed(lean_object* v_args_702_, lean_object* v_upperBound_703_, lean_object* v___x_704_, lean_object* v_a_705_, lean_object* v_b_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1___redArg(v_args_702_, v_upperBound_703_, v___x_704_, v_a_705_, v_b_706_);
lean_dec_ref(v___x_704_);
lean_dec(v_upperBound_703_);
lean_dec_ref(v_args_702_);
return v_res_708_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__3(void){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_712_ = ((lean_object*)(l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__2));
v___x_713_ = lean_unsigned_to_nat(9u);
v___x_714_ = lean_unsigned_to_nat(650u);
v___x_715_ = ((lean_object*)(l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__1));
v___x_716_ = ((lean_object*)(l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__0));
v___x_717_ = l_mkPanicMessageWithDecl(v___x_716_, v___x_715_, v___x_714_, v___x_713_, v___x_712_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceArity_reduce(lean_object* v_code_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
lean_object* v_decl_732_; lean_object* v_k_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; 
switch(lean_obj_tag(v_code_724_))
{
case 0:
{
lean_object* v_decl_846_; lean_object* v_k_847_; lean_object* v_argsNew_849_; lean_object* v___y_850_; lean_object* v_auxDeclName_851_; lean_object* v___y_852_; lean_object* v___y_853_; lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v_value_908_; 
v_decl_846_ = lean_ctor_get(v_code_724_, 0);
v_k_847_ = lean_ctor_get(v_code_724_, 1);
v_value_908_ = lean_ctor_get(v_decl_846_, 3);
if (lean_obj_tag(v_value_908_) == 3)
{
lean_object* v_declName_909_; lean_object* v_args_910_; lean_object* v_declName_911_; lean_object* v_auxDeclName_912_; lean_object* v_paramMask_913_; uint8_t v_allUnused_914_; uint8_t v___x_915_; 
v_declName_909_ = lean_ctor_get(v_value_908_, 0);
v_args_910_ = lean_ctor_get(v_value_908_, 2);
v_declName_911_ = lean_ctor_get(v_a_725_, 0);
v_auxDeclName_912_ = lean_ctor_get(v_a_725_, 1);
v_paramMask_913_ = lean_ctor_get(v_a_725_, 2);
v_allUnused_914_ = lean_ctor_get_uint8(v_a_725_, sizeof(void*)*3);
v___x_915_ = lean_name_eq(v_declName_909_, v_declName_911_);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; 
lean_inc_ref(v_k_847_);
v___x_916_ = l_Lean_Compiler_LCNF_ReduceArity_reduce(v_k_847_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_953_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_953_ == 0)
{
v___x_919_ = v___x_916_;
v_isShared_920_ = v_isSharedCheck_953_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_916_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_953_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
size_t v___x_921_; size_t v___x_922_; uint8_t v___x_923_; 
v___x_921_ = lean_ptr_addr(v_k_847_);
v___x_922_ = lean_ptr_addr(v_a_917_);
v___x_923_ = lean_usize_dec_eq(v___x_921_, v___x_922_);
if (v___x_923_ == 0)
{
lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_933_; 
lean_inc_ref(v_decl_846_);
v_isSharedCheck_933_ = !lean_is_exclusive(v_code_724_);
if (v_isSharedCheck_933_ == 0)
{
lean_object* v_unused_934_; lean_object* v_unused_935_; 
v_unused_934_ = lean_ctor_get(v_code_724_, 1);
lean_dec(v_unused_934_);
v_unused_935_ = lean_ctor_get(v_code_724_, 0);
lean_dec(v_unused_935_);
v___x_925_ = v_code_724_;
v_isShared_926_ = v_isSharedCheck_933_;
goto v_resetjp_924_;
}
else
{
lean_dec(v_code_724_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_933_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 1, v_a_917_);
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_decl_846_);
lean_ctor_set(v_reuseFailAlloc_932_, 1, v_a_917_);
v___x_928_ = v_reuseFailAlloc_932_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
lean_object* v___x_930_; 
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_928_);
v___x_930_ = v___x_919_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v___x_928_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
}
else
{
size_t v___x_936_; uint8_t v___x_937_; 
v___x_936_ = lean_ptr_addr(v_decl_846_);
v___x_937_ = lean_usize_dec_eq(v___x_936_, v___x_936_);
if (v___x_937_ == 0)
{
lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_947_; 
lean_inc_ref(v_decl_846_);
v_isSharedCheck_947_ = !lean_is_exclusive(v_code_724_);
if (v_isSharedCheck_947_ == 0)
{
lean_object* v_unused_948_; lean_object* v_unused_949_; 
v_unused_948_ = lean_ctor_get(v_code_724_, 1);
lean_dec(v_unused_948_);
v_unused_949_ = lean_ctor_get(v_code_724_, 0);
lean_dec(v_unused_949_);
v___x_939_ = v_code_724_;
v_isShared_940_ = v_isSharedCheck_947_;
goto v_resetjp_938_;
}
else
{
lean_dec(v_code_724_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_947_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v_a_917_);
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_decl_846_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_a_917_);
v___x_942_ = v_reuseFailAlloc_946_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
lean_object* v___x_944_; 
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_942_);
v___x_944_ = v___x_919_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_942_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
else
{
lean_object* v___x_951_; 
lean_dec(v_a_917_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v_code_724_);
v___x_951_ = v___x_919_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_code_724_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_724_, 2);
return v___x_916_;
}
}
else
{
if (v_allUnused_914_ == 0)
{
lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_954_ = lean_array_get_size(v_args_910_);
v___x_955_ = lean_unsigned_to_nat(0u);
v___x_956_ = ((lean_object*)(l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__4));
v___x_957_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1___redArg(v_args_910_, v___x_954_, v_paramMask_913_, v___x_955_, v___x_956_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_958_);
lean_dec_ref_known(v___x_957_, 1);
v_argsNew_849_ = v_a_958_;
v___y_850_ = v_a_725_;
v_auxDeclName_851_ = v_auxDeclName_912_;
v___y_852_ = v_a_726_;
v___y_853_ = v_a_727_;
v___y_854_ = v_a_728_;
v___y_855_ = v_a_729_;
goto v___jp_848_;
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
lean_dec_ref_known(v_code_724_, 2);
v_a_959_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_957_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_957_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
else
{
lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_967_ = ((lean_object*)(l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__5));
v___x_968_ = lean_array_get_size(v_paramMask_913_);
v___x_969_ = lean_array_get_size(v_args_910_);
v___x_970_ = l_Array_extract___redArg(v_args_910_, v___x_968_, v___x_969_);
v___x_971_ = l_Array_append___redArg(v___x_967_, v___x_970_);
lean_dec_ref(v___x_970_);
v_argsNew_849_ = v___x_971_;
v___y_850_ = v_a_725_;
v_auxDeclName_851_ = v_auxDeclName_912_;
v___y_852_ = v_a_726_;
v___y_853_ = v_a_727_;
v___y_854_ = v_a_728_;
v___y_855_ = v_a_729_;
goto v___jp_848_;
}
}
}
else
{
lean_object* v___x_972_; 
lean_inc_ref(v_k_847_);
v___x_972_ = l_Lean_Compiler_LCNF_ReduceArity_reduce(v_k_847_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_1009_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_975_ = v___x_972_;
v_isShared_976_ = v_isSharedCheck_1009_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_972_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_1009_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
size_t v___x_977_; size_t v___x_978_; uint8_t v___x_979_; 
v___x_977_ = lean_ptr_addr(v_k_847_);
v___x_978_ = lean_ptr_addr(v_a_973_);
v___x_979_ = lean_usize_dec_eq(v___x_977_, v___x_978_);
if (v___x_979_ == 0)
{
lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_989_; 
lean_inc_ref(v_decl_846_);
v_isSharedCheck_989_ = !lean_is_exclusive(v_code_724_);
if (v_isSharedCheck_989_ == 0)
{
lean_object* v_unused_990_; lean_object* v_unused_991_; 
v_unused_990_ = lean_ctor_get(v_code_724_, 1);
lean_dec(v_unused_990_);
v_unused_991_ = lean_ctor_get(v_code_724_, 0);
lean_dec(v_unused_991_);
v___x_981_ = v_code_724_;
v_isShared_982_ = v_isSharedCheck_989_;
goto v_resetjp_980_;
}
else
{
lean_dec(v_code_724_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_989_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
lean_ctor_set(v___x_981_, 1, v_a_973_);
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_decl_846_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v_a_973_);
v___x_984_ = v_reuseFailAlloc_988_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
lean_object* v___x_986_; 
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 0, v___x_984_);
v___x_986_ = v___x_975_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v___x_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
else
{
size_t v___x_992_; uint8_t v___x_993_; 
v___x_992_ = lean_ptr_addr(v_decl_846_);
v___x_993_ = lean_usize_dec_eq(v___x_992_, v___x_992_);
if (v___x_993_ == 0)
{
lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1003_; 
lean_inc_ref(v_decl_846_);
v_isSharedCheck_1003_ = !lean_is_exclusive(v_code_724_);
if (v_isSharedCheck_1003_ == 0)
{
lean_object* v_unused_1004_; lean_object* v_unused_1005_; 
v_unused_1004_ = lean_ctor_get(v_code_724_, 1);
lean_dec(v_unused_1004_);
v_unused_1005_ = lean_ctor_get(v_code_724_, 0);
lean_dec(v_unused_1005_);
v___x_995_ = v_code_724_;
v_isShared_996_ = v_isSharedCheck_1003_;
goto v_resetjp_994_;
}
else
{
lean_dec(v_code_724_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1003_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_998_; 
if (v_isShared_996_ == 0)
{
lean_ctor_set(v___x_995_, 1, v_a_973_);
v___x_998_ = v___x_995_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_decl_846_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v_a_973_);
v___x_998_ = v_reuseFailAlloc_1002_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
lean_object* v___x_1000_; 
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 0, v___x_998_);
v___x_1000_ = v___x_975_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v___x_998_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
else
{
lean_object* v___x_1007_; 
lean_dec(v_a_973_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 0, v_code_724_);
v___x_1007_ = v___x_975_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_code_724_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_724_, 2);
return v___x_972_;
}
}
v___jp_848_:
{
uint8_t v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_856_ = 0;
v___x_857_ = lean_box(0);
lean_inc(v_auxDeclName_851_);
v___x_858_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_858_, 0, v_auxDeclName_851_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
lean_ctor_set(v___x_858_, 2, v_argsNew_849_);
lean_inc_ref(v_decl_846_);
v___x_859_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_856_, v_decl_846_, v___x_858_, v___y_853_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; lean_object* v___x_861_; 
v_a_860_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_a_860_);
lean_dec_ref_known(v___x_859_, 1);
lean_inc_ref(v_k_847_);
v___x_861_ = l_Lean_Compiler_LCNF_ReduceArity_reduce(v_k_847_, v___y_850_, v___y_852_, v___y_853_, v___y_854_, v___y_855_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_899_; 
v_a_862_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_899_ == 0)
{
v___x_864_ = v___x_861_;
v_isShared_865_ = v_isSharedCheck_899_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_861_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_899_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
size_t v___x_866_; size_t v___x_867_; uint8_t v___x_868_; 
v___x_866_ = lean_ptr_addr(v_k_847_);
v___x_867_ = lean_ptr_addr(v_a_862_);
v___x_868_ = lean_usize_dec_eq(v___x_866_, v___x_867_);
if (v___x_868_ == 0)
{
lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_878_; 
v_isSharedCheck_878_ = !lean_is_exclusive(v_code_724_);
if (v_isSharedCheck_878_ == 0)
{
lean_object* v_unused_879_; lean_object* v_unused_880_; 
v_unused_879_ = lean_ctor_get(v_code_724_, 1);
lean_dec(v_unused_879_);
v_unused_880_ = lean_ctor_get(v_code_724_, 0);
lean_dec(v_unused_880_);
v___x_870_ = v_code_724_;
v_isShared_871_ = v_isSharedCheck_878_;
goto v_resetjp_869_;
}
else
{
lean_dec(v_code_724_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_878_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 1, v_a_862_);
lean_ctor_set(v___x_870_, 0, v_a_860_);
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_a_860_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_a_862_);
v___x_873_ = v_reuseFailAlloc_877_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
lean_object* v___x_875_; 
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v___x_873_);
v___x_875_ = v___x_864_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v___x_873_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
else
{
size_t v___x_881_; size_t v___x_882_; uint8_t v___x_883_; 
v___x_881_ = lean_ptr_addr(v_decl_846_);
v___x_882_ = lean_ptr_addr(v_a_860_);
v___x_883_ = lean_usize_dec_eq(v___x_881_, v___x_882_);
if (v___x_883_ == 0)
{
lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_893_; 
v_isSharedCheck_893_ = !lean_is_exclusive(v_code_724_);
if (v_isSharedCheck_893_ == 0)
{
lean_object* v_unused_894_; lean_object* v_unused_895_; 
v_unused_894_ = lean_ctor_get(v_code_724_, 1);
lean_dec(v_unused_894_);
v_unused_895_ = lean_ctor_get(v_code_724_, 0);
lean_dec(v_unused_895_);
v___x_885_ = v_code_724_;
v_isShared_886_ = v_isSharedCheck_893_;
goto v_resetjp_884_;
}
else
{
lean_dec(v_code_724_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_893_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 1, v_a_862_);
lean_ctor_set(v___x_885_, 0, v_a_860_);
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_860_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v_a_862_);
v___x_888_ = v_reuseFailAlloc_892_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
lean_object* v___x_890_; 
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v___x_888_);
v___x_890_ = v___x_864_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_888_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
else
{
lean_object* v___x_897_; 
lean_dec(v_a_862_);
lean_dec(v_a_860_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 0, v_code_724_);
v___x_897_ = v___x_864_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_code_724_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
}
else
{
lean_dec(v_a_860_);
lean_dec_ref_known(v_code_724_, 2);
return v___x_861_;
}
}
else
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_907_; 
lean_dec_ref_known(v_code_724_, 2);
v_a_900_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_907_ == 0)
{
v___x_902_ = v___x_859_;
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v___x_859_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_900_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
}
case 1:
{
lean_object* v_decl_1010_; lean_object* v_k_1011_; 
v_decl_1010_ = lean_ctor_get(v_code_724_, 0);
v_k_1011_ = lean_ctor_get(v_code_724_, 1);
lean_inc_ref(v_k_1011_);
lean_inc_ref(v_decl_1010_);
v_decl_732_ = v_decl_1010_;
v_k_733_ = v_k_1011_;
v___y_734_ = v_a_725_;
v___y_735_ = v_a_726_;
v___y_736_ = v_a_727_;
v___y_737_ = v_a_728_;
v___y_738_ = v_a_729_;
goto v___jp_731_;
}
case 2:
{
lean_object* v_decl_1012_; lean_object* v_k_1013_; 
v_decl_1012_ = lean_ctor_get(v_code_724_, 0);
v_k_1013_ = lean_ctor_get(v_code_724_, 1);
lean_inc_ref(v_k_1013_);
lean_inc_ref(v_decl_1012_);
v_decl_732_ = v_decl_1012_;
v_k_733_ = v_k_1013_;
v___y_734_ = v_a_725_;
v___y_735_ = v_a_726_;
v___y_736_ = v_a_727_;
v___y_737_ = v_a_728_;
v___y_738_ = v_a_729_;
goto v___jp_731_;
}
case 4:
{
lean_object* v_cases_1014_; lean_object* v_typeName_1015_; lean_object* v_resultType_1016_; lean_object* v_discr_1017_; lean_object* v_alts_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1057_; 
v_cases_1014_ = lean_ctor_get(v_code_724_, 0);
lean_inc_ref(v_cases_1014_);
v_typeName_1015_ = lean_ctor_get(v_cases_1014_, 0);
v_resultType_1016_ = lean_ctor_get(v_cases_1014_, 1);
v_discr_1017_ = lean_ctor_get(v_cases_1014_, 2);
v_alts_1018_ = lean_ctor_get(v_cases_1014_, 3);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_cases_1014_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1020_ = v_cases_1014_;
v_isShared_1021_ = v_isSharedCheck_1057_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_alts_1018_);
lean_inc(v_discr_1017_);
lean_inc(v_resultType_1016_);
lean_inc(v_typeName_1015_);
lean_dec(v_cases_1014_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1057_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_1018_);
v___x_1023_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__2(v___x_1022_, v_alts_1018_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1048_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1048_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1048_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
size_t v___x_1028_; size_t v___x_1029_; uint8_t v___x_1030_; 
v___x_1028_ = lean_ptr_addr(v_alts_1018_);
lean_dec_ref(v_alts_1018_);
v___x_1029_ = lean_ptr_addr(v_a_1024_);
v___x_1030_ = lean_usize_dec_eq(v___x_1028_, v___x_1029_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1043_; 
v_isSharedCheck_1043_ = !lean_is_exclusive(v_code_724_);
if (v_isSharedCheck_1043_ == 0)
{
lean_object* v_unused_1044_; 
v_unused_1044_ = lean_ctor_get(v_code_724_, 0);
lean_dec(v_unused_1044_);
v___x_1032_ = v_code_724_;
v_isShared_1033_ = v_isSharedCheck_1043_;
goto v_resetjp_1031_;
}
else
{
lean_dec(v_code_724_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1043_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 3, v_a_1024_);
v___x_1035_ = v___x_1020_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_typeName_1015_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v_resultType_1016_);
lean_ctor_set(v_reuseFailAlloc_1042_, 2, v_discr_1017_);
lean_ctor_set(v_reuseFailAlloc_1042_, 3, v_a_1024_);
v___x_1035_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
lean_object* v___x_1037_; 
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 0, v___x_1035_);
v___x_1037_ = v___x_1032_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v___x_1035_);
v___x_1037_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
lean_object* v___x_1039_; 
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v___x_1037_);
v___x_1039_ = v___x_1026_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1037_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
}
}
else
{
lean_object* v___x_1046_; 
lean_dec(v_a_1024_);
lean_del_object(v___x_1020_);
lean_dec(v_discr_1017_);
lean_dec_ref(v_resultType_1016_);
lean_dec(v_typeName_1015_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v_code_724_);
v___x_1046_ = v___x_1026_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_code_724_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
lean_del_object(v___x_1020_);
lean_dec_ref(v_alts_1018_);
lean_dec(v_discr_1017_);
lean_dec_ref(v_resultType_1016_);
lean_dec(v_typeName_1015_);
lean_dec_ref_known(v_code_724_, 1);
v_a_1049_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_1023_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1023_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
}
default: 
{
lean_object* v___x_1058_; 
v___x_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1058_, 0, v_code_724_);
return v___x_1058_;
}
}
v___jp_731_:
{
lean_object* v_params_739_; lean_object* v_type_740_; lean_object* v_value_741_; uint8_t v___x_742_; lean_object* v___x_743_; 
v_params_739_ = lean_ctor_get(v_decl_732_, 2);
lean_inc_ref(v_params_739_);
v_type_740_ = lean_ctor_get(v_decl_732_, 3);
lean_inc_ref(v_type_740_);
v_value_741_ = lean_ctor_get(v_decl_732_, 4);
v___x_742_ = 0;
lean_inc_ref(v_value_741_);
v___x_743_ = l_Lean_Compiler_LCNF_ReduceArity_reduce(v_value_741_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_745_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_743_, 1);
v___x_745_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_742_, v_decl_732_, v_type_740_, v_params_739_, v_a_744_, v___y_736_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v_a_746_; lean_object* v___x_747_; 
v_a_746_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_a_746_);
lean_dec_ref_known(v___x_745_, 1);
v___x_747_ = l_Lean_Compiler_LCNF_ReduceArity_reduce(v_k_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
if (lean_obj_tag(v___x_747_) == 0)
{
switch(lean_obj_tag(v_code_724_))
{
case 1:
{
lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_787_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_787_ == 0)
{
v___x_750_ = v___x_747_;
v_isShared_751_ = v_isSharedCheck_787_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_dec(v___x_747_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_787_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v_decl_752_; lean_object* v_k_753_; size_t v___x_754_; size_t v___x_755_; uint8_t v___x_756_; 
v_decl_752_ = lean_ctor_get(v_code_724_, 0);
v_k_753_ = lean_ctor_get(v_code_724_, 1);
v___x_754_ = lean_ptr_addr(v_k_753_);
v___x_755_ = lean_ptr_addr(v_a_748_);
v___x_756_ = lean_usize_dec_eq(v___x_754_, v___x_755_);
if (v___x_756_ == 0)
{
lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_766_; 
v_isSharedCheck_766_ = !lean_is_exclusive(v_code_724_);
if (v_isSharedCheck_766_ == 0)
{
lean_object* v_unused_767_; lean_object* v_unused_768_; 
v_unused_767_ = lean_ctor_get(v_code_724_, 1);
lean_dec(v_unused_767_);
v_unused_768_ = lean_ctor_get(v_code_724_, 0);
lean_dec(v_unused_768_);
v___x_758_ = v_code_724_;
v_isShared_759_ = v_isSharedCheck_766_;
goto v_resetjp_757_;
}
else
{
lean_dec(v_code_724_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_766_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
lean_ctor_set(v___x_758_, 1, v_a_748_);
lean_ctor_set(v___x_758_, 0, v_a_746_);
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_a_746_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v_a_748_);
v___x_761_ = v_reuseFailAlloc_765_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
lean_object* v___x_763_; 
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v___x_761_);
v___x_763_ = v___x_750_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_761_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
else
{
size_t v___x_769_; size_t v___x_770_; uint8_t v___x_771_; 
v___x_769_ = lean_ptr_addr(v_decl_752_);
v___x_770_ = lean_ptr_addr(v_a_746_);
v___x_771_ = lean_usize_dec_eq(v___x_769_, v___x_770_);
if (v___x_771_ == 0)
{
lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_781_; 
v_isSharedCheck_781_ = !lean_is_exclusive(v_code_724_);
if (v_isSharedCheck_781_ == 0)
{
lean_object* v_unused_782_; lean_object* v_unused_783_; 
v_unused_782_ = lean_ctor_get(v_code_724_, 1);
lean_dec(v_unused_782_);
v_unused_783_ = lean_ctor_get(v_code_724_, 0);
lean_dec(v_unused_783_);
v___x_773_ = v_code_724_;
v_isShared_774_ = v_isSharedCheck_781_;
goto v_resetjp_772_;
}
else
{
lean_dec(v_code_724_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_781_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 1, v_a_748_);
lean_ctor_set(v___x_773_, 0, v_a_746_);
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_746_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v_a_748_);
v___x_776_ = v_reuseFailAlloc_780_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
lean_object* v___x_778_; 
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v___x_776_);
v___x_778_ = v___x_750_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_776_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
}
}
}
}
else
{
lean_object* v___x_785_; 
lean_dec(v_a_748_);
lean_dec(v_a_746_);
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v_code_724_);
v___x_785_ = v___x_750_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_code_724_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
}
case 2:
{
lean_object* v_a_788_; lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_827_; 
v_a_788_ = lean_ctor_get(v___x_747_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_827_ == 0)
{
v___x_790_ = v___x_747_;
v_isShared_791_ = v_isSharedCheck_827_;
goto v_resetjp_789_;
}
else
{
lean_inc(v_a_788_);
lean_dec(v___x_747_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_827_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v_decl_792_; lean_object* v_k_793_; size_t v___x_794_; size_t v___x_795_; uint8_t v___x_796_; 
v_decl_792_ = lean_ctor_get(v_code_724_, 0);
v_k_793_ = lean_ctor_get(v_code_724_, 1);
v___x_794_ = lean_ptr_addr(v_k_793_);
v___x_795_ = lean_ptr_addr(v_a_788_);
v___x_796_ = lean_usize_dec_eq(v___x_794_, v___x_795_);
if (v___x_796_ == 0)
{
lean_object* v___x_798_; uint8_t v_isShared_799_; uint8_t v_isSharedCheck_806_; 
v_isSharedCheck_806_ = !lean_is_exclusive(v_code_724_);
if (v_isSharedCheck_806_ == 0)
{
lean_object* v_unused_807_; lean_object* v_unused_808_; 
v_unused_807_ = lean_ctor_get(v_code_724_, 1);
lean_dec(v_unused_807_);
v_unused_808_ = lean_ctor_get(v_code_724_, 0);
lean_dec(v_unused_808_);
v___x_798_ = v_code_724_;
v_isShared_799_ = v_isSharedCheck_806_;
goto v_resetjp_797_;
}
else
{
lean_dec(v_code_724_);
v___x_798_ = lean_box(0);
v_isShared_799_ = v_isSharedCheck_806_;
goto v_resetjp_797_;
}
v_resetjp_797_:
{
lean_object* v___x_801_; 
if (v_isShared_799_ == 0)
{
lean_ctor_set(v___x_798_, 1, v_a_788_);
lean_ctor_set(v___x_798_, 0, v_a_746_);
v___x_801_ = v___x_798_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_746_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v_a_788_);
v___x_801_ = v_reuseFailAlloc_805_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
lean_object* v___x_803_; 
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 0, v___x_801_);
v___x_803_ = v___x_790_;
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
}
else
{
size_t v___x_809_; size_t v___x_810_; uint8_t v___x_811_; 
v___x_809_ = lean_ptr_addr(v_decl_792_);
v___x_810_ = lean_ptr_addr(v_a_746_);
v___x_811_ = lean_usize_dec_eq(v___x_809_, v___x_810_);
if (v___x_811_ == 0)
{
lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_821_; 
v_isSharedCheck_821_ = !lean_is_exclusive(v_code_724_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; lean_object* v_unused_823_; 
v_unused_822_ = lean_ctor_get(v_code_724_, 1);
lean_dec(v_unused_822_);
v_unused_823_ = lean_ctor_get(v_code_724_, 0);
lean_dec(v_unused_823_);
v___x_813_ = v_code_724_;
v_isShared_814_ = v_isSharedCheck_821_;
goto v_resetjp_812_;
}
else
{
lean_dec(v_code_724_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_821_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 1, v_a_788_);
lean_ctor_set(v___x_813_, 0, v_a_746_);
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_746_);
lean_ctor_set(v_reuseFailAlloc_820_, 1, v_a_788_);
v___x_816_ = v_reuseFailAlloc_820_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
lean_object* v___x_818_; 
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 0, v___x_816_);
v___x_818_ = v___x_790_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
else
{
lean_object* v___x_825_; 
lean_dec(v_a_788_);
lean_dec(v_a_746_);
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 0, v_code_724_);
v___x_825_ = v___x_790_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_code_724_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
}
default: 
{
lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_836_; 
lean_dec(v_a_746_);
lean_dec_ref(v_code_724_);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_836_ == 0)
{
lean_object* v_unused_837_; 
v_unused_837_ = lean_ctor_get(v___x_747_, 0);
lean_dec(v_unused_837_);
v___x_829_ = v___x_747_;
v_isShared_830_ = v_isSharedCheck_836_;
goto v_resetjp_828_;
}
else
{
lean_dec(v___x_747_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_836_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_834_; 
v___x_831_ = lean_obj_once(&l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__3, &l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__3_once, _init_l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__3);
v___x_832_ = l_panic___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__0(v___x_831_);
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 0, v___x_832_);
v___x_834_ = v___x_829_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_832_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
}
else
{
lean_dec(v_a_746_);
lean_dec_ref(v_code_724_);
return v___x_747_;
}
}
else
{
lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_845_; 
lean_dec_ref(v_k_733_);
lean_dec_ref(v_code_724_);
v_a_838_ = lean_ctor_get(v___x_745_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_845_ == 0)
{
v___x_840_ = v___x_745_;
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v___x_745_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_843_; 
if (v_isShared_841_ == 0)
{
v___x_843_ = v___x_840_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_a_838_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
else
{
lean_dec_ref(v_type_740_);
lean_dec_ref(v_params_739_);
lean_dec_ref(v_k_733_);
lean_dec_ref(v_decl_732_);
lean_dec_ref(v_code_724_);
return v___x_743_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__2(lean_object* v_i_1059_, lean_object* v_as_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v___x_1067_; uint8_t v___x_1068_; 
v___x_1067_ = lean_array_get_size(v_as_1060_);
v___x_1068_ = lean_nat_dec_lt(v_i_1059_, v___x_1067_);
if (v___x_1068_ == 0)
{
lean_object* v___x_1069_; 
lean_dec(v_i_1059_);
v___x_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1069_, 0, v_as_1060_);
return v___x_1069_;
}
else
{
lean_object* v_a_1070_; lean_object* v___y_1072_; 
v_a_1070_ = lean_array_fget_borrowed(v_as_1060_, v_i_1059_);
switch(lean_obj_tag(v_a_1070_))
{
case 0:
{
lean_object* v_code_1094_; 
v_code_1094_ = lean_ctor_get(v_a_1070_, 2);
lean_inc_ref(v_code_1094_);
v___y_1072_ = v_code_1094_;
goto v___jp_1071_;
}
case 1:
{
lean_object* v_code_1095_; 
v_code_1095_ = lean_ctor_get(v_a_1070_, 1);
lean_inc_ref(v_code_1095_);
v___y_1072_ = v_code_1095_;
goto v___jp_1071_;
}
default: 
{
lean_object* v_code_1096_; 
v_code_1096_ = lean_ctor_get(v_a_1070_, 0);
lean_inc_ref(v_code_1096_);
v___y_1072_ = v_code_1096_;
goto v___jp_1071_;
}
}
v___jp_1071_:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Lean_Compiler_LCNF_ReduceArity_reduce(v___y_1072_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; lean_object* v___x_1075_; size_t v___x_1076_; size_t v___x_1077_; uint8_t v___x_1078_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v___x_1073_, 1);
lean_inc(v_a_1070_);
v___x_1075_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_1070_, v_a_1074_);
v___x_1076_ = lean_ptr_addr(v_a_1070_);
v___x_1077_ = lean_ptr_addr(v___x_1075_);
v___x_1078_ = lean_usize_dec_eq(v___x_1076_, v___x_1077_);
if (v___x_1078_ == 0)
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1079_ = lean_unsigned_to_nat(1u);
v___x_1080_ = lean_nat_add(v_i_1059_, v___x_1079_);
v___x_1081_ = lean_array_fset(v_as_1060_, v_i_1059_, v___x_1075_);
lean_dec(v_i_1059_);
v_i_1059_ = v___x_1080_;
v_as_1060_ = v___x_1081_;
goto _start;
}
else
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_dec_ref(v___x_1075_);
v___x_1083_ = lean_unsigned_to_nat(1u);
v___x_1084_ = lean_nat_add(v_i_1059_, v___x_1083_);
lean_dec(v_i_1059_);
v_i_1059_ = v___x_1084_;
goto _start;
}
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1093_; 
lean_dec_ref(v_as_1060_);
lean_dec(v_i_1059_);
v_a_1086_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1088_ = v___x_1073_;
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_a_1086_);
lean_dec(v___x_1073_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1093_;
goto v_resetjp_1087_;
}
v_resetjp_1087_:
{
lean_object* v___x_1091_; 
if (v_isShared_1089_ == 0)
{
v___x_1091_ = v___x_1088_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1086_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
return v___x_1091_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__2___boxed(lean_object* v_i_1097_, lean_object* v_as_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__2(v_i_1097_, v_as_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
lean_dec_ref(v___y_1099_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ReduceArity_reduce___boxed(lean_object* v_code_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Lean_Compiler_LCNF_ReduceArity_reduce(v_code_1106_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_);
lean_dec(v_a_1111_);
lean_dec_ref(v_a_1110_);
lean_dec(v_a_1109_);
lean_dec_ref(v_a_1108_);
lean_dec_ref(v_a_1107_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1(lean_object* v_args_1114_, lean_object* v_upperBound_1115_, lean_object* v___x_1116_, lean_object* v_inst_1117_, lean_object* v_R_1118_, lean_object* v_a_1119_, lean_object* v_b_1120_, lean_object* v_c_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1___redArg(v_args_1114_, v_upperBound_1115_, v___x_1116_, v_a_1119_, v_b_1120_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1___boxed(lean_object* v_args_1129_, lean_object* v_upperBound_1130_, lean_object* v___x_1131_, lean_object* v_inst_1132_, lean_object* v_R_1133_, lean_object* v_a_1134_, lean_object* v_b_1135_, lean_object* v_c_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_ReduceArity_reduce_spec__1(v_args_1129_, v_upperBound_1130_, v___x_1131_, v_inst_1132_, v_R_1133_, v_a_1134_, v_b_1135_, v_c_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec_ref(v___x_1131_);
lean_dec(v_upperBound_1130_);
lean_dec_ref(v_args_1129_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1___redArg(lean_object* v_f_1144_, lean_object* v_v_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_){
_start:
{
if (lean_obj_tag(v_v_1145_) == 0)
{
lean_object* v_code_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1176_; 
v_code_1152_ = lean_ctor_get(v_v_1145_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v_v_1145_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1154_ = v_v_1145_;
v_isShared_1155_ = v_isSharedCheck_1176_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_code_1152_);
lean_dec(v_v_1145_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1176_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1156_; 
lean_inc(v___y_1150_);
lean_inc_ref(v___y_1149_);
lean_inc(v___y_1148_);
lean_inc_ref(v___y_1147_);
lean_inc_ref(v___y_1146_);
v___x_1156_ = lean_apply_7(v_f_1144_, v_code_1152_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, lean_box(0));
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1167_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1159_ = v___x_1156_;
v_isShared_1160_ = v_isSharedCheck_1167_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1167_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v_a_1157_);
v___x_1162_ = v___x_1154_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1157_);
v___x_1162_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
lean_object* v___x_1164_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 0, v___x_1162_);
v___x_1164_ = v___x_1159_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v___x_1162_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1175_; 
lean_del_object(v___x_1154_);
v_a_1168_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1170_ = v___x_1156_;
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1156_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1173_; 
if (v_isShared_1171_ == 0)
{
v___x_1173_ = v___x_1170_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1168_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
}
}
else
{
lean_object* v___x_1177_; 
lean_dec_ref(v_f_1144_);
v___x_1177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1177_, 0, v_v_1145_);
return v___x_1177_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1___redArg___boxed(lean_object* v_f_1178_, lean_object* v_v_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1___redArg(v_f_1178_, v_v_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
lean_dec(v___y_1182_);
lean_dec_ref(v___y_1181_);
lean_dec_ref(v___y_1180_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1(uint8_t v_pu_1187_, lean_object* v_f_1188_, lean_object* v_v_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v___x_1196_; 
v___x_1196_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1___redArg(v_f_1188_, v_v_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1___boxed(lean_object* v_pu_1197_, lean_object* v_f_1198_, lean_object* v_v_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
uint8_t v_pu_boxed_1206_; lean_object* v_res_1207_; 
v_pu_boxed_1206_ = lean_unbox(v_pu_1197_);
v_res_1207_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1(v_pu_boxed_1206_, v_f_1198_, v_v_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1202_);
lean_dec_ref(v___y_1201_);
lean_dec_ref(v___y_1200_);
return v_res_1207_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__0(void){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1208_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__1(void){
_start:
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1209_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__0, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__0);
v___x_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
return v___x_1210_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__2(void){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1211_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__1, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__1);
v___x_1212_ = lean_unsigned_to_nat(0u);
v___x_1213_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
lean_ctor_set(v___x_1213_, 1, v___x_1212_);
lean_ctor_set(v___x_1213_, 2, v___x_1212_);
lean_ctor_set(v___x_1213_, 3, v___x_1212_);
lean_ctor_set(v___x_1213_, 4, v___x_1211_);
lean_ctor_set(v___x_1213_, 5, v___x_1211_);
lean_ctor_set(v___x_1213_, 6, v___x_1211_);
lean_ctor_set(v___x_1213_, 7, v___x_1211_);
lean_ctor_set(v___x_1213_, 8, v___x_1211_);
lean_ctor_set(v___x_1213_, 9, v___x_1211_);
lean_ctor_set(v___x_1213_, 10, v___x_1211_);
return v___x_1213_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__3(void){
_start:
{
lean_object* v___x_1214_; double v___x_1215_; 
v___x_1214_ = lean_unsigned_to_nat(0u);
v___x_1215_ = lean_float_of_nat(v___x_1214_);
return v___x_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8(lean_object* v_cls_1219_, lean_object* v_msg_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_){
_start:
{
lean_object* v_toCold_1226_; lean_object* v_ref_1227_; lean_object* v___x_1228_; lean_object* v_env_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v_toCold_1226_ = lean_ctor_get(v___y_1223_, 0);
v_ref_1227_ = lean_ctor_get(v___y_1223_, 2);
v___x_1228_ = lean_st_ref_get(v___y_1224_);
v_env_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc_ref(v_env_1229_);
lean_dec(v___x_1228_);
v___x_1230_ = lean_st_ref_get(v___y_1222_);
v___x_1231_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_1221_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1290_; 
v_a_1232_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1234_ = v___x_1231_;
v_isShared_1235_ = v_isSharedCheck_1290_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1231_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1290_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v_lctx_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1288_; 
v_lctx_1236_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1288_ == 0)
{
lean_object* v_unused_1289_; 
v_unused_1289_ = lean_ctor_get(v___x_1230_, 1);
lean_dec(v_unused_1289_);
v___x_1238_ = v___x_1230_;
v_isShared_1239_ = v_isSharedCheck_1288_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_lctx_1236_);
lean_dec(v___x_1230_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1288_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v_options_1240_; uint8_t v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1246_; 
v_options_1240_ = lean_ctor_get(v_toCold_1226_, 2);
v___x_1241_ = lean_unbox(v_a_1232_);
lean_dec(v_a_1232_);
v___x_1242_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_1236_, v___x_1241_);
lean_dec_ref(v_lctx_1236_);
v___x_1243_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__2, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__2);
lean_inc_ref(v_options_1240_);
v___x_1244_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1244_, 0, v_env_1229_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
lean_ctor_set(v___x_1244_, 2, v___x_1242_);
lean_ctor_set(v___x_1244_, 3, v_options_1240_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set_tag(v___x_1238_, 3);
lean_ctor_set(v___x_1238_, 1, v_msg_1220_);
lean_ctor_set(v___x_1238_, 0, v___x_1244_);
v___x_1246_ = v___x_1238_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1244_);
lean_ctor_set(v_reuseFailAlloc_1287_, 1, v_msg_1220_);
v___x_1246_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
lean_object* v___x_1247_; lean_object* v_traceState_1248_; lean_object* v_env_1249_; lean_object* v_nextMacroScope_1250_; lean_object* v_ngen_1251_; lean_object* v_auxDeclNGen_1252_; lean_object* v_cache_1253_; lean_object* v_messages_1254_; lean_object* v_infoState_1255_; lean_object* v_snapshotTasks_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1286_; 
v___x_1247_ = lean_st_ref_take(v___y_1224_);
v_traceState_1248_ = lean_ctor_get(v___x_1247_, 4);
v_env_1249_ = lean_ctor_get(v___x_1247_, 0);
v_nextMacroScope_1250_ = lean_ctor_get(v___x_1247_, 1);
v_ngen_1251_ = lean_ctor_get(v___x_1247_, 2);
v_auxDeclNGen_1252_ = lean_ctor_get(v___x_1247_, 3);
v_cache_1253_ = lean_ctor_get(v___x_1247_, 5);
v_messages_1254_ = lean_ctor_get(v___x_1247_, 6);
v_infoState_1255_ = lean_ctor_get(v___x_1247_, 7);
v_snapshotTasks_1256_ = lean_ctor_get(v___x_1247_, 8);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1258_ = v___x_1247_;
v_isShared_1259_ = v_isSharedCheck_1286_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_snapshotTasks_1256_);
lean_inc(v_infoState_1255_);
lean_inc(v_messages_1254_);
lean_inc(v_cache_1253_);
lean_inc(v_traceState_1248_);
lean_inc(v_auxDeclNGen_1252_);
lean_inc(v_ngen_1251_);
lean_inc(v_nextMacroScope_1250_);
lean_inc(v_env_1249_);
lean_dec(v___x_1247_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1286_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
uint64_t v_tid_1260_; lean_object* v_traces_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1285_; 
v_tid_1260_ = lean_ctor_get_uint64(v_traceState_1248_, sizeof(void*)*1);
v_traces_1261_ = lean_ctor_get(v_traceState_1248_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v_traceState_1248_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1263_ = v_traceState_1248_;
v_isShared_1264_ = v_isSharedCheck_1285_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_traces_1261_);
lean_dec(v_traceState_1248_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1285_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; double v___x_1267_; uint8_t v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1276_; 
v___x_1265_ = lean_box(0);
v___x_1266_ = lean_box(0);
v___x_1267_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__3, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__3_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__3);
v___x_1268_ = 0;
v___x_1269_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__4));
v___x_1270_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1270_, 0, v_cls_1219_);
lean_ctor_set(v___x_1270_, 1, v___x_1266_);
lean_ctor_set(v___x_1270_, 2, v___x_1269_);
lean_ctor_set_float(v___x_1270_, sizeof(void*)*3, v___x_1267_);
lean_ctor_set_float(v___x_1270_, sizeof(void*)*3 + 8, v___x_1267_);
lean_ctor_set_uint8(v___x_1270_, sizeof(void*)*3 + 16, v___x_1268_);
v___x_1271_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___closed__5));
v___x_1272_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1270_);
lean_ctor_set(v___x_1272_, 1, v___x_1246_);
lean_ctor_set(v___x_1272_, 2, v___x_1271_);
lean_inc(v_ref_1227_);
v___x_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1273_, 0, v_ref_1227_);
lean_ctor_set(v___x_1273_, 1, v___x_1272_);
v___x_1274_ = l_Lean_PersistentArray_push___redArg(v_traces_1261_, v___x_1273_);
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 0, v___x_1274_);
v___x_1276_ = v___x_1263_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1274_);
lean_ctor_set_uint64(v_reuseFailAlloc_1284_, sizeof(void*)*1, v_tid_1260_);
v___x_1276_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1278_; 
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 4, v___x_1276_);
v___x_1278_ = v___x_1258_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_env_1249_);
lean_ctor_set(v_reuseFailAlloc_1283_, 1, v_nextMacroScope_1250_);
lean_ctor_set(v_reuseFailAlloc_1283_, 2, v_ngen_1251_);
lean_ctor_set(v_reuseFailAlloc_1283_, 3, v_auxDeclNGen_1252_);
lean_ctor_set(v_reuseFailAlloc_1283_, 4, v___x_1276_);
lean_ctor_set(v_reuseFailAlloc_1283_, 5, v_cache_1253_);
lean_ctor_set(v_reuseFailAlloc_1283_, 6, v_messages_1254_);
lean_ctor_set(v_reuseFailAlloc_1283_, 7, v_infoState_1255_);
lean_ctor_set(v_reuseFailAlloc_1283_, 8, v_snapshotTasks_1256_);
v___x_1278_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1279_; lean_object* v___x_1281_; 
v___x_1279_ = lean_st_ref_put(v___y_1224_, v___x_1278_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 0, v___x_1265_);
v___x_1281_ = v___x_1234_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1265_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
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
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
lean_dec(v___x_1230_);
lean_dec_ref(v_env_1229_);
lean_dec_ref(v_msg_1220_);
lean_dec(v_cls_1219_);
v_a_1291_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1231_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1231_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8___boxed(lean_object* v_cls_1299_, lean_object* v_msg_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8(v_cls_1299_, v_msg_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__0(lean_object* v_name_1308_, lean_object* v___x_1309_, lean_object* v___x_1310_, uint8_t v___x_1311_, lean_object* v_value_1312_, lean_object* v_code_1313_, uint8_t v_safe_1314_, uint8_t v_recursive_1315_, lean_object* v_inlineAttr_x3f_1316_, lean_object* v_params_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_){
_start:
{
lean_object* v___x_1323_; uint8_t v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
lean_inc(v___x_1309_);
v___x_1323_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1323_, 0, v_name_1308_);
lean_ctor_set(v___x_1323_, 1, v___x_1309_);
lean_ctor_set(v___x_1323_, 2, v___x_1310_);
lean_ctor_set_uint8(v___x_1323_, sizeof(void*)*3, v___x_1311_);
v___x_1324_ = 0;
v___x_1325_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___lam__0___closed__0));
v___x_1326_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__1___redArg(v___x_1325_, v_value_1312_, v___x_1323_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
lean_dec_ref_known(v___x_1323_, 3);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1328_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1326_, 1);
v___x_1328_ = l_Lean_Compiler_LCNF_Code_inferType(v___x_1324_, v_code_1313_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1330_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1328_, 1);
lean_inc_ref(v_params_1317_);
v___x_1330_ = l_Lean_Compiler_LCNF_mkForallParams(v___x_1324_, v_params_1317_, v_a_1329_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
lean_dec(v_a_1329_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_a_1331_);
lean_dec_ref_known(v___x_1330_, 1);
v___x_1332_ = lean_box(0);
v___x_1333_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1333_, 0, v___x_1309_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
lean_ctor_set(v___x_1333_, 2, v_a_1331_);
lean_ctor_set(v___x_1333_, 3, v_params_1317_);
lean_ctor_set_uint8(v___x_1333_, sizeof(void*)*4, v_safe_1314_);
v___x_1334_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1334_, 0, v___x_1333_);
lean_ctor_set(v___x_1334_, 1, v_a_1327_);
lean_ctor_set(v___x_1334_, 2, v_inlineAttr_x3f_1316_);
lean_ctor_set_uint8(v___x_1334_, sizeof(void*)*3, v_recursive_1315_);
lean_inc_ref(v___x_1334_);
v___x_1335_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v___x_1334_, v___y_1321_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1342_ == 0)
{
lean_object* v_unused_1343_; 
v_unused_1343_ = lean_ctor_get(v___x_1335_, 0);
lean_dec(v_unused_1343_);
v___x_1337_ = v___x_1335_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_dec(v___x_1335_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
lean_ctor_set(v___x_1337_, 0, v___x_1334_);
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1334_);
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
lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1351_; 
lean_dec_ref_known(v___x_1334_, 3);
v_a_1344_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1346_ = v___x_1335_;
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v___x_1335_);
v___x_1346_ = lean_box(0);
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
v_resetjp_1345_:
{
lean_object* v___x_1349_; 
if (v_isShared_1347_ == 0)
{
v___x_1349_ = v___x_1346_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1350_; 
v_reuseFailAlloc_1350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1350_, 0, v_a_1344_);
v___x_1349_ = v_reuseFailAlloc_1350_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
return v___x_1349_;
}
}
}
}
else
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1359_; 
lean_dec(v_a_1327_);
lean_dec_ref(v_params_1317_);
lean_dec(v_inlineAttr_x3f_1316_);
lean_dec(v___x_1309_);
v_a_1352_ = lean_ctor_get(v___x_1330_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1354_ = v___x_1330_;
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1330_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1357_; 
if (v_isShared_1355_ == 0)
{
v___x_1357_ = v___x_1354_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1352_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
}
else
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
lean_dec(v_a_1327_);
lean_dec_ref(v_params_1317_);
lean_dec(v_inlineAttr_x3f_1316_);
lean_dec(v___x_1309_);
v_a_1360_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1328_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1328_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
}
else
{
lean_object* v_a_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1375_; 
lean_dec_ref(v_params_1317_);
lean_dec(v_inlineAttr_x3f_1316_);
lean_dec_ref(v_code_1313_);
lean_dec(v___x_1309_);
v_a_1368_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1370_ = v___x_1326_;
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_a_1368_);
lean_dec(v___x_1326_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1375_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1371_ == 0)
{
v___x_1373_ = v___x_1370_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_a_1368_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__0___boxed(lean_object* v_name_1376_, lean_object* v___x_1377_, lean_object* v___x_1378_, lean_object* v___x_1379_, lean_object* v_value_1380_, lean_object* v_code_1381_, lean_object* v_safe_1382_, lean_object* v_recursive_1383_, lean_object* v_inlineAttr_x3f_1384_, lean_object* v_params_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
uint8_t v___x_11249__boxed_1391_; uint8_t v_safe_boxed_1392_; uint8_t v_recursive_boxed_1393_; lean_object* v_res_1394_; 
v___x_11249__boxed_1391_ = lean_unbox(v___x_1379_);
v_safe_boxed_1392_ = lean_unbox(v_safe_1382_);
v_recursive_boxed_1393_ = lean_unbox(v_recursive_1383_);
v_res_1394_ = l_Lean_Compiler_LCNF_Decl_reduceArity___lam__0(v_name_1376_, v___x_1377_, v___x_1378_, v___x_11249__boxed_1391_, v_value_1380_, v_code_1381_, v_safe_boxed_1392_, v_recursive_boxed_1393_, v_inlineAttr_x3f_1384_, v_params_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1(lean_object* v___x_1401_, uint8_t v___x_1402_, lean_object* v_name_1403_, lean_object* v_levelParams_1404_, lean_object* v_type_1405_, lean_object* v_a_1406_, uint8_t v_safe_1407_, uint8_t v___x_1408_, lean_object* v_____r_1409_, lean_object* v_args_1410_, uint8_t v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1418_ = lean_box(0);
v___x_1419_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1401_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
lean_ctor_set(v___x_1419_, 2, v_args_1410_);
v___x_1420_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__1));
v___x_1421_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1402_, v___x_1419_, v___x_1420_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v_fvarId_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref_known(v___x_1421_, 1);
v_fvarId_1423_ = lean_ctor_get(v_a_1422_, 0);
lean_inc(v_fvarId_1423_);
v___x_1424_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1424_, 0, v_fvarId_1423_);
v___x_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1425_, 0, v_a_1422_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
v___x_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1425_);
v___x_1427_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1427_, 0, v_name_1403_);
lean_ctor_set(v___x_1427_, 1, v_levelParams_1404_);
lean_ctor_set(v___x_1427_, 2, v_type_1405_);
lean_ctor_set(v___x_1427_, 3, v_a_1406_);
lean_ctor_set_uint8(v___x_1427_, sizeof(void*)*4, v_safe_1407_);
v___x_1428_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___closed__2));
v___x_1429_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1429_, 0, v___x_1427_);
lean_ctor_set(v___x_1429_, 1, v___x_1426_);
lean_ctor_set(v___x_1429_, 2, v___x_1428_);
lean_ctor_set_uint8(v___x_1429_, sizeof(void*)*3, v___x_1408_);
lean_inc_ref(v___x_1429_);
v___x_1430_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v___x_1429_, v___y_1416_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1437_ == 0)
{
lean_object* v_unused_1438_; 
v_unused_1438_ = lean_ctor_get(v___x_1430_, 0);
lean_dec(v_unused_1438_);
v___x_1432_ = v___x_1430_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_dec(v___x_1430_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v___x_1429_);
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___x_1429_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
else
{
lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1446_; 
lean_dec_ref_known(v___x_1429_, 3);
v_a_1439_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1441_ = v___x_1430_;
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1430_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1444_; 
if (v_isShared_1442_ == 0)
{
v___x_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1439_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
}
else
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1454_; 
lean_dec_ref(v_a_1406_);
lean_dec_ref(v_type_1405_);
lean_dec(v_levelParams_1404_);
lean_dec(v_name_1403_);
v_a_1447_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1449_ = v___x_1421_;
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1421_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1447_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1___boxed(lean_object** _args){
lean_object* v___x_1455_ = _args[0];
lean_object* v___x_1456_ = _args[1];
lean_object* v_name_1457_ = _args[2];
lean_object* v_levelParams_1458_ = _args[3];
lean_object* v_type_1459_ = _args[4];
lean_object* v_a_1460_ = _args[5];
lean_object* v_safe_1461_ = _args[6];
lean_object* v___x_1462_ = _args[7];
lean_object* v_____r_1463_ = _args[8];
lean_object* v_args_1464_ = _args[9];
lean_object* v___y_1465_ = _args[10];
lean_object* v___y_1466_ = _args[11];
lean_object* v___y_1467_ = _args[12];
lean_object* v___y_1468_ = _args[13];
lean_object* v___y_1469_ = _args[14];
lean_object* v___y_1470_ = _args[15];
lean_object* v___y_1471_ = _args[16];
_start:
{
uint8_t v___x_11393__boxed_1472_; uint8_t v_safe_boxed_1473_; uint8_t v___x_11395__boxed_1474_; uint8_t v___y_11397__boxed_1475_; lean_object* v_res_1476_; 
v___x_11393__boxed_1472_ = lean_unbox(v___x_1456_);
v_safe_boxed_1473_ = lean_unbox(v_safe_1461_);
v___x_11395__boxed_1474_ = lean_unbox(v___x_1462_);
v___y_11397__boxed_1475_ = lean_unbox(v___y_1465_);
v_res_1476_ = l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1(v___x_1455_, v___x_11393__boxed_1472_, v_name_1457_, v_levelParams_1458_, v_type_1459_, v_a_1460_, v_safe_boxed_1473_, v___x_11395__boxed_1474_, v_____r_1463_, v_args_1464_, v___y_11397__boxed_1475_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
lean_dec(v___y_1466_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3___redArg(lean_object* v_as_1477_, size_t v_sz_1478_, size_t v_i_1479_, lean_object* v_b_1480_){
_start:
{
lean_object* v_a_1483_; uint8_t v___x_1487_; 
v___x_1487_ = lean_usize_dec_lt(v_i_1479_, v_sz_1478_);
if (v___x_1487_ == 0)
{
lean_object* v___x_1488_; 
v___x_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1488_, 0, v_b_1480_);
return v___x_1488_;
}
else
{
lean_object* v_snd_1489_; lean_object* v_fst_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1525_; 
v_snd_1489_ = lean_ctor_get(v_b_1480_, 1);
v_fst_1490_ = lean_ctor_get(v_b_1480_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v_b_1480_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1492_ = v_b_1480_;
v_isShared_1493_ = v_isSharedCheck_1525_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_snd_1489_);
lean_inc(v_fst_1490_);
lean_dec(v_b_1480_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1525_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v_array_1494_; lean_object* v_start_1495_; lean_object* v_stop_1496_; uint8_t v___x_1497_; 
v_array_1494_ = lean_ctor_get(v_snd_1489_, 0);
v_start_1495_ = lean_ctor_get(v_snd_1489_, 1);
v_stop_1496_ = lean_ctor_get(v_snd_1489_, 2);
v___x_1497_ = lean_nat_dec_lt(v_start_1495_, v_stop_1496_);
if (v___x_1497_ == 0)
{
lean_object* v___x_1499_; 
if (v_isShared_1493_ == 0)
{
v___x_1499_ = v___x_1492_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_fst_1490_);
lean_ctor_set(v_reuseFailAlloc_1501_, 1, v_snd_1489_);
v___x_1499_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
lean_object* v___x_1500_; 
v___x_1500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
return v___x_1500_;
}
}
else
{
lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1521_; 
lean_inc(v_stop_1496_);
lean_inc(v_start_1495_);
lean_inc_ref(v_array_1494_);
v_isSharedCheck_1521_ = !lean_is_exclusive(v_snd_1489_);
if (v_isSharedCheck_1521_ == 0)
{
lean_object* v_unused_1522_; lean_object* v_unused_1523_; lean_object* v_unused_1524_; 
v_unused_1522_ = lean_ctor_get(v_snd_1489_, 2);
lean_dec(v_unused_1522_);
v_unused_1523_ = lean_ctor_get(v_snd_1489_, 1);
lean_dec(v_unused_1523_);
v_unused_1524_ = lean_ctor_get(v_snd_1489_, 0);
lean_dec(v_unused_1524_);
v___x_1503_ = v_snd_1489_;
v_isShared_1504_ = v_isSharedCheck_1521_;
goto v_resetjp_1502_;
}
else
{
lean_dec(v_snd_1489_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1521_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v_a_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1510_; 
v_a_1505_ = lean_array_uget_borrowed(v_as_1477_, v_i_1479_);
v___x_1506_ = lean_array_fget(v_array_1494_, v_start_1495_);
v___x_1507_ = lean_unsigned_to_nat(1u);
v___x_1508_ = lean_nat_add(v_start_1495_, v___x_1507_);
lean_dec(v_start_1495_);
if (v_isShared_1504_ == 0)
{
lean_ctor_set(v___x_1503_, 1, v___x_1508_);
v___x_1510_ = v___x_1503_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_array_1494_);
lean_ctor_set(v_reuseFailAlloc_1520_, 1, v___x_1508_);
lean_ctor_set(v_reuseFailAlloc_1520_, 2, v_stop_1496_);
v___x_1510_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
uint8_t v___x_1511_; 
v___x_1511_ = lean_unbox(v_a_1505_);
if (v___x_1511_ == 0)
{
lean_object* v___x_1513_; 
lean_dec(v___x_1506_);
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 1, v___x_1510_);
v___x_1513_ = v___x_1492_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_fst_1490_);
lean_ctor_set(v_reuseFailAlloc_1514_, 1, v___x_1510_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
v_a_1483_ = v___x_1513_;
goto v___jp_1482_;
}
}
else
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1518_; 
v___x_1515_ = l_Lean_Compiler_LCNF_Param_toArg___redArg(v___x_1506_);
lean_dec(v___x_1506_);
v___x_1516_ = lean_array_push(v_fst_1490_, v___x_1515_);
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 1, v___x_1510_);
lean_ctor_set(v___x_1492_, 0, v___x_1516_);
v___x_1518_ = v___x_1492_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1516_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v___x_1510_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
v_a_1483_ = v___x_1518_;
goto v___jp_1482_;
}
}
}
}
}
}
}
v___jp_1482_:
{
size_t v___x_1484_; size_t v___x_1485_; 
v___x_1484_ = ((size_t)1ULL);
v___x_1485_ = lean_usize_add(v_i_1479_, v___x_1484_);
v_i_1479_ = v___x_1485_;
v_b_1480_ = v_a_1483_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3___redArg___boxed(lean_object* v_as_1526_, lean_object* v_sz_1527_, lean_object* v_i_1528_, lean_object* v_b_1529_, lean_object* v___y_1530_){
_start:
{
size_t v_sz_boxed_1531_; size_t v_i_boxed_1532_; lean_object* v_res_1533_; 
v_sz_boxed_1531_ = lean_unbox_usize(v_sz_1527_);
lean_dec(v_sz_1527_);
v_i_boxed_1532_ = lean_unbox_usize(v_i_1528_);
lean_dec(v_i_1528_);
v_res_1533_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3___redArg(v_as_1526_, v_sz_boxed_1531_, v_i_boxed_1532_, v_b_1529_);
lean_dec_ref(v_as_1526_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__6(lean_object* v_a_1534_, lean_object* v_a_1535_){
_start:
{
if (lean_obj_tag(v_a_1534_) == 0)
{
lean_object* v___x_1536_; 
v___x_1536_ = l_List_reverse___redArg(v_a_1535_);
return v___x_1536_;
}
else
{
lean_object* v_head_1537_; lean_object* v_tail_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1547_; 
v_head_1537_ = lean_ctor_get(v_a_1534_, 0);
v_tail_1538_ = lean_ctor_get(v_a_1534_, 1);
v_isSharedCheck_1547_ = !lean_is_exclusive(v_a_1534_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1540_ = v_a_1534_;
v_isShared_1541_ = v_isSharedCheck_1547_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_tail_1538_);
lean_inc(v_head_1537_);
lean_dec(v_a_1534_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1547_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1542_; lean_object* v___x_1544_; 
v___x_1542_ = l_Lean_mkFVar(v_head_1537_);
if (v_isShared_1541_ == 0)
{
lean_ctor_set(v___x_1540_, 1, v_a_1535_);
lean_ctor_set(v___x_1540_, 0, v___x_1542_);
v___x_1544_ = v___x_1540_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v___x_1542_);
lean_ctor_set(v_reuseFailAlloc_1546_, 1, v_a_1535_);
v___x_1544_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
v_a_1534_ = v_tail_1538_;
v_a_1535_ = v___x_1544_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__2(size_t v_sz_1548_, size_t v_i_1549_, lean_object* v_bs_1550_, uint8_t v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
uint8_t v___x_1558_; 
v___x_1558_ = lean_usize_dec_lt(v_i_1549_, v_sz_1548_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1559_, 0, v_bs_1550_);
return v___x_1559_;
}
else
{
uint8_t v___x_1560_; lean_object* v_v_1561_; lean_object* v___x_1562_; lean_object* v_bs_x27_1563_; lean_object* v___x_1564_; 
v___x_1560_ = 0;
v_v_1561_ = lean_array_uget(v_bs_1550_, v_i_1549_);
v___x_1562_ = lean_unsigned_to_nat(0u);
v_bs_x27_1563_ = lean_array_uset(v_bs_1550_, v_i_1549_, v___x_1562_);
v___x_1564_ = l_Lean_Compiler_LCNF_Internalize_internalizeParam(v___x_1560_, v_v_1561_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1565_; size_t v___x_1566_; size_t v___x_1567_; lean_object* v___x_1568_; 
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
lean_inc(v_a_1565_);
lean_dec_ref_known(v___x_1564_, 1);
v___x_1566_ = ((size_t)1ULL);
v___x_1567_ = lean_usize_add(v_i_1549_, v___x_1566_);
v___x_1568_ = lean_array_uset(v_bs_x27_1563_, v_i_1549_, v_a_1565_);
v_i_1549_ = v___x_1567_;
v_bs_1550_ = v___x_1568_;
goto _start;
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
lean_dec_ref(v_bs_x27_1563_);
v_a_1570_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1564_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1564_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__2___boxed(lean_object* v_sz_1578_, lean_object* v_i_1579_, lean_object* v_bs_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_){
_start:
{
size_t v_sz_boxed_1588_; size_t v_i_boxed_1589_; uint8_t v___y_11615__boxed_1590_; lean_object* v_res_1591_; 
v_sz_boxed_1588_ = lean_unbox_usize(v_sz_1578_);
lean_dec(v_sz_1578_);
v_i_boxed_1589_ = lean_unbox_usize(v_i_1579_);
lean_dec(v_i_1579_);
v___y_11615__boxed_1590_ = lean_unbox(v___y_1581_);
v_res_1591_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__2(v_sz_boxed_1588_, v_i_boxed_1589_, v_bs_1580_, v___y_11615__boxed_1590_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
lean_dec(v___y_1584_);
lean_dec_ref(v___y_1583_);
lean_dec(v___y_1582_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4_spec__5(lean_object* v_a_1592_, lean_object* v_as_1593_, size_t v_i_1594_, size_t v_stop_1595_, lean_object* v_b_1596_){
_start:
{
lean_object* v___y_1598_; uint8_t v___x_1602_; 
v___x_1602_ = lean_usize_dec_eq(v_i_1594_, v_stop_1595_);
if (v___x_1602_ == 0)
{
lean_object* v___x_1603_; lean_object* v_fvarId_1604_; uint8_t v___x_1605_; 
v___x_1603_ = lean_array_uget_borrowed(v_as_1593_, v_i_1594_);
v_fvarId_1604_ = lean_ctor_get(v___x_1603_, 0);
v___x_1605_ = l_Lean_FVarIdHashSet_contains(v_a_1592_, v_fvarId_1604_);
if (v___x_1605_ == 0)
{
v___y_1598_ = v_b_1596_;
goto v___jp_1597_;
}
else
{
lean_object* v___x_1606_; 
lean_inc(v___x_1603_);
v___x_1606_ = lean_array_push(v_b_1596_, v___x_1603_);
v___y_1598_ = v___x_1606_;
goto v___jp_1597_;
}
}
else
{
return v_b_1596_;
}
v___jp_1597_:
{
size_t v___x_1599_; size_t v___x_1600_; 
v___x_1599_ = ((size_t)1ULL);
v___x_1600_ = lean_usize_add(v_i_1594_, v___x_1599_);
v_i_1594_ = v___x_1600_;
v_b_1596_ = v___y_1598_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4_spec__5___boxed(lean_object* v_a_1607_, lean_object* v_as_1608_, lean_object* v_i_1609_, lean_object* v_stop_1610_, lean_object* v_b_1611_){
_start:
{
size_t v_i_boxed_1612_; size_t v_stop_boxed_1613_; lean_object* v_res_1614_; 
v_i_boxed_1612_ = lean_unbox_usize(v_i_1609_);
lean_dec(v_i_1609_);
v_stop_boxed_1613_ = lean_unbox_usize(v_stop_1610_);
lean_dec(v_stop_1610_);
v_res_1614_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4_spec__5(v_a_1607_, v_as_1608_, v_i_boxed_1612_, v_stop_boxed_1613_, v_b_1611_);
lean_dec_ref(v_as_1608_);
lean_dec_ref(v_a_1607_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4(lean_object* v_a_1615_, lean_object* v_as_1616_, size_t v_i_1617_, size_t v_stop_1618_, lean_object* v_b_1619_){
_start:
{
lean_object* v___y_1621_; uint8_t v___x_1625_; 
v___x_1625_ = lean_usize_dec_eq(v_i_1617_, v_stop_1618_);
if (v___x_1625_ == 0)
{
lean_object* v___x_1626_; lean_object* v_fvarId_1627_; uint8_t v___x_1628_; 
v___x_1626_ = lean_array_uget_borrowed(v_as_1616_, v_i_1617_);
v_fvarId_1627_ = lean_ctor_get(v___x_1626_, 0);
v___x_1628_ = l_Lean_FVarIdHashSet_contains(v_a_1615_, v_fvarId_1627_);
if (v___x_1628_ == 0)
{
v___y_1621_ = v_b_1619_;
goto v___jp_1620_;
}
else
{
lean_object* v___x_1629_; 
lean_inc(v___x_1626_);
v___x_1629_ = lean_array_push(v_b_1619_, v___x_1626_);
v___y_1621_ = v___x_1629_;
goto v___jp_1620_;
}
}
else
{
return v_b_1619_;
}
v___jp_1620_:
{
size_t v___x_1622_; size_t v___x_1623_; lean_object* v___x_1624_; 
v___x_1622_ = ((size_t)1ULL);
v___x_1623_ = lean_usize_add(v_i_1617_, v___x_1622_);
v___x_1624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4_spec__5(v_a_1615_, v_as_1616_, v___x_1623_, v_stop_1618_, v___y_1621_);
return v___x_1624_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4___boxed(lean_object* v_a_1630_, lean_object* v_as_1631_, lean_object* v_i_1632_, lean_object* v_stop_1633_, lean_object* v_b_1634_){
_start:
{
size_t v_i_boxed_1635_; size_t v_stop_boxed_1636_; lean_object* v_res_1637_; 
v_i_boxed_1635_ = lean_unbox_usize(v_i_1632_);
lean_dec(v_i_1632_);
v_stop_boxed_1636_ = lean_unbox_usize(v_stop_1633_);
lean_dec(v_stop_1633_);
v_res_1637_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4(v_a_1630_, v_as_1631_, v_i_boxed_1635_, v_stop_boxed_1636_, v_b_1634_);
lean_dec_ref(v_as_1631_);
lean_dec_ref(v_a_1630_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0_spec__0(lean_object* v_a_1638_, size_t v_sz_1639_, size_t v_i_1640_, lean_object* v_bs_1641_){
_start:
{
uint8_t v___x_1642_; 
v___x_1642_ = lean_usize_dec_lt(v_i_1640_, v_sz_1639_);
if (v___x_1642_ == 0)
{
return v_bs_1641_;
}
else
{
lean_object* v_v_1643_; lean_object* v_fvarId_1644_; lean_object* v___x_1645_; lean_object* v_bs_x27_1646_; uint8_t v___x_1647_; size_t v___x_1648_; size_t v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v_v_1643_ = lean_array_uget_borrowed(v_bs_1641_, v_i_1640_);
v_fvarId_1644_ = lean_ctor_get(v_v_1643_, 0);
lean_inc(v_fvarId_1644_);
v___x_1645_ = lean_unsigned_to_nat(0u);
v_bs_x27_1646_ = lean_array_uset(v_bs_1641_, v_i_1640_, v___x_1645_);
v___x_1647_ = l_Lean_FVarIdHashSet_contains(v_a_1638_, v_fvarId_1644_);
lean_dec(v_fvarId_1644_);
v___x_1648_ = ((size_t)1ULL);
v___x_1649_ = lean_usize_add(v_i_1640_, v___x_1648_);
v___x_1650_ = lean_box(v___x_1647_);
v___x_1651_ = lean_array_uset(v_bs_x27_1646_, v_i_1640_, v___x_1650_);
v_i_1640_ = v___x_1649_;
v_bs_1641_ = v___x_1651_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0_spec__0___boxed(lean_object* v_a_1653_, lean_object* v_sz_1654_, lean_object* v_i_1655_, lean_object* v_bs_1656_){
_start:
{
size_t v_sz_boxed_1657_; size_t v_i_boxed_1658_; lean_object* v_res_1659_; 
v_sz_boxed_1657_ = lean_unbox_usize(v_sz_1654_);
lean_dec(v_sz_1654_);
v_i_boxed_1658_ = lean_unbox_usize(v_i_1655_);
lean_dec(v_i_1655_);
v_res_1659_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0_spec__0(v_a_1653_, v_sz_boxed_1657_, v_i_boxed_1658_, v_bs_1656_);
lean_dec_ref(v_a_1653_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0(lean_object* v_a_1660_, size_t v_sz_1661_, size_t v_i_1662_, lean_object* v_bs_1663_){
_start:
{
uint8_t v___x_1664_; 
v___x_1664_ = lean_usize_dec_lt(v_i_1662_, v_sz_1661_);
if (v___x_1664_ == 0)
{
return v_bs_1663_;
}
else
{
lean_object* v_v_1665_; lean_object* v_fvarId_1666_; lean_object* v___x_1667_; lean_object* v_bs_x27_1668_; uint8_t v___x_1669_; size_t v___x_1670_; size_t v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v_v_1665_ = lean_array_uget_borrowed(v_bs_1663_, v_i_1662_);
v_fvarId_1666_ = lean_ctor_get(v_v_1665_, 0);
lean_inc(v_fvarId_1666_);
v___x_1667_ = lean_unsigned_to_nat(0u);
v_bs_x27_1668_ = lean_array_uset(v_bs_1663_, v_i_1662_, v___x_1667_);
v___x_1669_ = l_Lean_FVarIdHashSet_contains(v_a_1660_, v_fvarId_1666_);
lean_dec(v_fvarId_1666_);
v___x_1670_ = ((size_t)1ULL);
v___x_1671_ = lean_usize_add(v_i_1662_, v___x_1670_);
v___x_1672_ = lean_box(v___x_1669_);
v___x_1673_ = lean_array_uset(v_bs_x27_1668_, v_i_1662_, v___x_1672_);
v___x_1674_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0_spec__0(v_a_1660_, v_sz_1661_, v___x_1671_, v___x_1673_);
return v___x_1674_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0___boxed(lean_object* v_a_1675_, lean_object* v_sz_1676_, lean_object* v_i_1677_, lean_object* v_bs_1678_){
_start:
{
size_t v_sz_boxed_1679_; size_t v_i_boxed_1680_; lean_object* v_res_1681_; 
v_sz_boxed_1679_ = lean_unbox_usize(v_sz_1676_);
lean_dec(v_sz_1676_);
v_i_boxed_1680_ = lean_unbox_usize(v_i_1677_);
lean_dec(v_i_1677_);
v_res_1681_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0(v_a_1675_, v_sz_boxed_1679_, v_i_boxed_1680_, v_bs_1678_);
lean_dec_ref(v_a_1675_);
return v_res_1681_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__7(lean_object* v_a_1682_, lean_object* v_a_1683_){
_start:
{
if (lean_obj_tag(v_a_1682_) == 0)
{
lean_object* v___x_1684_; 
v___x_1684_ = l_List_reverse___redArg(v_a_1683_);
return v___x_1684_;
}
else
{
lean_object* v_head_1685_; lean_object* v_tail_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1695_; 
v_head_1685_ = lean_ctor_get(v_a_1682_, 0);
v_tail_1686_ = lean_ctor_get(v_a_1682_, 1);
v_isSharedCheck_1695_ = !lean_is_exclusive(v_a_1682_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1688_ = v_a_1682_;
v_isShared_1689_ = v_isSharedCheck_1695_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_tail_1686_);
lean_inc(v_head_1685_);
lean_dec(v_a_1682_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1695_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1690_; lean_object* v___x_1692_; 
v___x_1690_ = l_Lean_MessageData_ofExpr(v_head_1685_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 1, v_a_1683_);
lean_ctor_set(v___x_1688_, 0, v___x_1690_);
v___x_1692_ = v___x_1688_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v___x_1690_);
lean_ctor_set(v_reuseFailAlloc_1694_, 1, v_a_1683_);
v___x_1692_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
v_a_1682_ = v_tail_1686_;
v_a_1683_ = v___x_1692_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__5(lean_object* v_a_1696_, lean_object* v_as_1697_, size_t v_i_1698_, size_t v_stop_1699_, lean_object* v_b_1700_){
_start:
{
lean_object* v___y_1702_; uint8_t v___x_1706_; 
v___x_1706_ = lean_usize_dec_eq(v_i_1698_, v_stop_1699_);
if (v___x_1706_ == 0)
{
lean_object* v___x_1707_; lean_object* v_fvarId_1708_; uint8_t v___x_1709_; 
v___x_1707_ = lean_array_uget_borrowed(v_as_1697_, v_i_1698_);
v_fvarId_1708_ = lean_ctor_get(v___x_1707_, 0);
v___x_1709_ = l_Lean_FVarIdHashSet_contains(v_a_1696_, v_fvarId_1708_);
if (v___x_1709_ == 0)
{
lean_object* v___x_1710_; 
lean_inc(v___x_1707_);
v___x_1710_ = lean_array_push(v_b_1700_, v___x_1707_);
v___y_1702_ = v___x_1710_;
goto v___jp_1701_;
}
else
{
v___y_1702_ = v_b_1700_;
goto v___jp_1701_;
}
}
else
{
return v_b_1700_;
}
v___jp_1701_:
{
size_t v___x_1703_; size_t v___x_1704_; 
v___x_1703_ = ((size_t)1ULL);
v___x_1704_ = lean_usize_add(v_i_1698_, v___x_1703_);
v_i_1698_ = v___x_1704_;
v_b_1700_ = v___y_1702_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__5___boxed(lean_object* v_a_1711_, lean_object* v_as_1712_, lean_object* v_i_1713_, lean_object* v_stop_1714_, lean_object* v_b_1715_){
_start:
{
size_t v_i_boxed_1716_; size_t v_stop_boxed_1717_; lean_object* v_res_1718_; 
v_i_boxed_1716_ = lean_unbox_usize(v_i_1713_);
lean_dec(v_i_1713_);
v_stop_boxed_1717_ = lean_unbox_usize(v_stop_1714_);
lean_dec(v_stop_1714_);
v_res_1718_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__5(v_a_1711_, v_as_1712_, v_i_boxed_1716_, v_stop_boxed_1717_, v_b_1715_);
lean_dec_ref(v_as_1712_);
lean_dec_ref(v_a_1711_);
return v_res_1718_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_reduceArity___closed__5(void){
_start:
{
lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; 
v___x_1727_ = lean_box(0);
v___x_1728_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___closed__4));
v___x_1729_ = l_Lean_Expr_const___override(v___x_1728_, v___x_1727_);
return v___x_1729_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_reduceArity___closed__13(void){
_start:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1741_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___closed__10));
v___x_1742_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___closed__12));
v___x_1743_ = l_Lean_Name_append(v___x_1742_, v___x_1741_);
return v___x_1743_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_reduceArity___closed__15(void){
_start:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___closed__14));
v___x_1746_ = l_Lean_stringToMessageData(v___x_1745_);
return v___x_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity(lean_object* v_decl_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_){
_start:
{
lean_object* v___y_1754_; uint8_t v___y_1755_; lean_object* v___y_1756_; lean_object* v___y_1757_; lean_object* v___y_1758_; lean_object* v___y_1759_; lean_object* v_value_1791_; 
v_value_1791_ = lean_ctor_get(v_decl_1747_, 1);
lean_inc_ref(v_value_1791_);
if (lean_obj_tag(v_value_1791_) == 0)
{
lean_object* v_toSignature_1792_; uint8_t v_recursive_1793_; lean_object* v_inlineAttr_x3f_1794_; lean_object* v_code_1795_; lean_object* v_name_1796_; lean_object* v_levelParams_1797_; lean_object* v_type_1798_; lean_object* v_params_1799_; uint8_t v_safe_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; uint8_t v___x_1803_; 
v_toSignature_1792_ = lean_ctor_get(v_decl_1747_, 0);
v_recursive_1793_ = lean_ctor_get_uint8(v_decl_1747_, sizeof(void*)*3);
v_inlineAttr_x3f_1794_ = lean_ctor_get(v_decl_1747_, 2);
v_code_1795_ = lean_ctor_get(v_value_1791_, 0);
v_name_1796_ = lean_ctor_get(v_toSignature_1792_, 0);
v_levelParams_1797_ = lean_ctor_get(v_toSignature_1792_, 1);
v_type_1798_ = lean_ctor_get(v_toSignature_1792_, 2);
v_params_1799_ = lean_ctor_get(v_toSignature_1792_, 3);
v_safe_1800_ = lean_ctor_get_uint8(v_toSignature_1792_, sizeof(void*)*4);
v___x_1801_ = lean_array_get_size(v_params_1799_);
v___x_1802_ = lean_unsigned_to_nat(0u);
v___x_1803_ = lean_nat_dec_eq(v___x_1801_, v___x_1802_);
if (v___x_1803_ == 0)
{
lean_object* v___x_1804_; 
lean_inc_ref(v_code_1795_);
lean_inc_ref(v_decl_1747_);
v___x_1804_ = l_Lean_Compiler_LCNF_FindUsed_collectUsedParams(v_decl_1747_, v_a_1748_, v_a_1749_, v_a_1750_, v_a_1751_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1971_; 
v_a_1805_ = lean_ctor_get(v___x_1804_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1807_ = v___x_1804_;
v_isShared_1808_ = v_isSharedCheck_1971_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___x_1804_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1971_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1809_; uint8_t v___x_1810_; 
v___x_1809_ = l_Lean_FVarIdHashSet_size(v_a_1805_);
v___x_1810_ = lean_nat_dec_eq(v___x_1809_, v___x_1801_);
lean_dec(v___x_1809_);
if (v___x_1810_ == 0)
{
lean_object* v_toCold_1811_; lean_object* v_options_1812_; lean_object* v_inheritedTraceOptions_1813_; uint8_t v_hasTrace_1814_; uint8_t v___x_1815_; uint8_t v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; uint8_t v___y_1820_; lean_object* v___y_1821_; size_t v___y_1822_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; size_t v___y_1826_; lean_object* v___y_1827_; lean_object* v___y_1828_; uint8_t v___y_1873_; lean_object* v___y_1874_; lean_object* v___y_1875_; uint8_t v___y_1876_; lean_object* v___y_1877_; size_t v___y_1878_; lean_object* v___y_1879_; lean_object* v___y_1880_; lean_object* v___y_1881_; lean_object* v___y_1882_; size_t v___y_1883_; lean_object* v___y_1884_; lean_object* v___y_1885_; lean_object* v___y_1888_; uint8_t v___y_1889_; lean_object* v___y_1890_; lean_object* v___y_1891_; size_t v___y_1892_; lean_object* v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; lean_object* v___y_1896_; size_t v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1923_; lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; 
lean_inc_ref(v_params_1799_);
lean_inc_ref(v_type_1798_);
lean_inc(v_levelParams_1797_);
lean_inc(v_name_1796_);
lean_inc(v_inlineAttr_x3f_1794_);
lean_del_object(v___x_1807_);
lean_dec_ref(v_decl_1747_);
v_toCold_1811_ = lean_ctor_get(v_a_1750_, 0);
v_options_1812_ = lean_ctor_get(v_toCold_1811_, 2);
v_inheritedTraceOptions_1813_ = lean_ctor_get(v_toCold_1811_, 11);
v_hasTrace_1814_ = lean_ctor_get_uint8(v_options_1812_, sizeof(void*)*1);
v___x_1815_ = l_Lean_FVarIdHashSet_isEmpty(v_a_1805_);
if (v_hasTrace_1814_ == 0)
{
v___y_1923_ = v_a_1748_;
v___y_1924_ = v_a_1749_;
v___y_1925_ = v_a_1750_;
v___y_1926_ = v_a_1751_;
goto v___jp_1922_;
}
else
{
lean_object* v___x_1944_; lean_object* v___x_1945_; uint8_t v___x_1946_; 
v___x_1944_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___closed__10));
v___x_1945_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__13, &l_Lean_Compiler_LCNF_Decl_reduceArity___closed__13_once, _init_l_Lean_Compiler_LCNF_Decl_reduceArity___closed__13);
v___x_1946_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1813_, v_options_1812_, v___x_1945_);
if (v___x_1946_ == 0)
{
v___y_1923_ = v_a_1748_;
v___y_1924_ = v_a_1749_;
v___y_1925_ = v_a_1750_;
v___y_1926_ = v_a_1751_;
goto v___jp_1922_;
}
else
{
lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; 
lean_inc(v_name_1796_);
v___x_1947_ = l_Lean_MessageData_ofName(v_name_1796_);
v___x_1948_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__15, &l_Lean_Compiler_LCNF_Decl_reduceArity___closed__15_once, _init_l_Lean_Compiler_LCNF_Decl_reduceArity___closed__15);
v___x_1949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1947_);
lean_ctor_set(v___x_1949_, 1, v___x_1948_);
v___x_1950_ = l_Lean_FVarIdHashSet_toList(v_a_1805_);
v___x_1951_ = lean_box(0);
v___x_1952_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__6(v___x_1950_, v___x_1951_);
v___x_1953_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__7(v___x_1952_, v___x_1951_);
v___x_1954_ = l_Lean_MessageData_ofList(v___x_1953_);
v___x_1955_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1949_);
lean_ctor_set(v___x_1955_, 1, v___x_1954_);
v___x_1956_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__8(v___x_1944_, v___x_1955_, v_a_1748_, v_a_1749_, v_a_1750_, v_a_1751_);
if (lean_obj_tag(v___x_1956_) == 0)
{
lean_dec_ref_known(v___x_1956_, 1);
v___y_1923_ = v_a_1748_;
v___y_1924_ = v_a_1749_;
v___y_1925_ = v_a_1750_;
v___y_1926_ = v_a_1751_;
goto v___jp_1922_;
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1964_; 
lean_dec(v_a_1805_);
lean_dec_ref(v_params_1799_);
lean_dec_ref(v_type_1798_);
lean_dec(v_levelParams_1797_);
lean_dec(v_name_1796_);
lean_dec_ref(v_code_1795_);
lean_dec(v_inlineAttr_x3f_1794_);
lean_dec_ref_known(v_value_1791_, 1);
v_a_1957_ = lean_ctor_get(v___x_1956_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___x_1956_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1959_ = v___x_1956_;
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1956_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1960_ == 0)
{
v___x_1962_ = v___x_1959_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v_a_1957_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
}
}
v___jp_1816_:
{
if (lean_obj_tag(v___y_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v_a_1829_ = lean_ctor_get(v___y_1828_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___y_1828_, 1);
v___x_1830_ = lean_obj_once(&l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__2, &l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__2_once, _init_l_Lean_Compiler_LCNF_FindUsed_collectUsedParams___closed__2);
v___x_1831_ = lean_st_mk_ref(v___x_1830_);
v___x_1832_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__2(v___y_1822_, v___y_1826_, v_params_1799_, v___x_1810_, v___x_1831_, v___y_1824_, v___y_1827_, v___y_1823_, v___y_1821_);
if (lean_obj_tag(v___x_1832_) == 0)
{
if (v___x_1815_ == 0)
{
lean_object* v_a_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; size_t v_sz_1838_; lean_object* v___x_1839_; 
v_a_1833_ = lean_ctor_get(v___x_1832_, 0);
lean_inc_n(v_a_1833_, 2);
lean_dec_ref_known(v___x_1832_, 1);
v___x_1834_ = ((lean_object*)(l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__4));
v___x_1835_ = lean_array_get_size(v_a_1833_);
v___x_1836_ = l_Array_toSubarray___redArg(v_a_1833_, v___x_1802_, v___x_1835_);
v___x_1837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1834_);
lean_ctor_set(v___x_1837_, 1, v___x_1836_);
v_sz_1838_ = lean_array_size(v___y_1819_);
v___x_1839_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3___redArg(v___y_1819_, v_sz_1838_, v___y_1826_, v___x_1837_);
lean_dec_ref(v___y_1819_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v_a_1840_; lean_object* v_fst_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
lean_inc(v_a_1840_);
lean_dec_ref_known(v___x_1839_, 1);
v_fst_1841_ = lean_ctor_get(v_a_1840_, 0);
lean_inc(v_fst_1841_);
lean_dec(v_a_1840_);
v___x_1842_ = lean_box(0);
v___x_1843_ = l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1(v___y_1818_, v___y_1817_, v_name_1796_, v_levelParams_1797_, v_type_1798_, v_a_1833_, v_safe_1800_, v___x_1810_, v___x_1842_, v_fst_1841_, v___x_1810_, v___x_1831_, v___y_1824_, v___y_1827_, v___y_1823_, v___y_1821_);
v___y_1754_ = v___x_1831_;
v___y_1755_ = v___y_1820_;
v___y_1756_ = v_a_1829_;
v___y_1757_ = v___y_1825_;
v___y_1758_ = v___y_1827_;
v___y_1759_ = v___x_1843_;
goto v___jp_1753_;
}
else
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
lean_dec(v_a_1833_);
lean_dec(v___x_1831_);
lean_dec(v_a_1829_);
lean_dec_ref(v___y_1825_);
lean_dec(v___y_1818_);
lean_dec_ref(v_type_1798_);
lean_dec(v_levelParams_1797_);
lean_dec(v_name_1796_);
v_a_1844_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v___x_1839_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1839_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1844_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
else
{
lean_object* v_a_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
lean_dec_ref(v___y_1819_);
v_a_1852_ = lean_ctor_get(v___x_1832_, 0);
lean_inc(v_a_1852_);
lean_dec_ref_known(v___x_1832_, 1);
v___x_1853_ = ((lean_object*)(l_Lean_Compiler_LCNF_ReduceArity_reduce___closed__5));
v___x_1854_ = lean_box(0);
v___x_1855_ = l_Lean_Compiler_LCNF_Decl_reduceArity___lam__1(v___y_1818_, v___y_1817_, v_name_1796_, v_levelParams_1797_, v_type_1798_, v_a_1852_, v_safe_1800_, v___x_1810_, v___x_1854_, v___x_1853_, v___x_1810_, v___x_1831_, v___y_1824_, v___y_1827_, v___y_1823_, v___y_1821_);
v___y_1754_ = v___x_1831_;
v___y_1755_ = v___y_1820_;
v___y_1756_ = v_a_1829_;
v___y_1757_ = v___y_1825_;
v___y_1758_ = v___y_1827_;
v___y_1759_ = v___x_1855_;
goto v___jp_1753_;
}
}
else
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1863_; 
lean_dec(v___x_1831_);
lean_dec(v_a_1829_);
lean_dec_ref(v___y_1825_);
lean_dec_ref(v___y_1819_);
lean_dec(v___y_1818_);
lean_dec_ref(v_type_1798_);
lean_dec(v_levelParams_1797_);
lean_dec(v_name_1796_);
v_a_1856_ = lean_ctor_get(v___x_1832_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1832_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1858_ = v___x_1832_;
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1832_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_a_1856_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
lean_dec_ref(v___y_1825_);
lean_dec_ref(v___y_1819_);
lean_dec(v___y_1818_);
lean_dec_ref(v_params_1799_);
lean_dec_ref(v_type_1798_);
lean_dec(v_levelParams_1797_);
lean_dec(v_name_1796_);
v_a_1864_ = lean_ctor_get(v___y_1828_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___y_1828_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1866_ = v___y_1828_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___y_1828_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
v___jp_1872_:
{
lean_object* v___x_1886_; 
lean_inc(v___y_1877_);
lean_inc_ref(v___y_1879_);
lean_inc(v___y_1884_);
lean_inc_ref(v___y_1882_);
v___x_1886_ = lean_apply_6(v___y_1880_, v___y_1885_, v___y_1882_, v___y_1884_, v___y_1879_, v___y_1877_, lean_box(0));
v___y_1817_ = v___y_1873_;
v___y_1818_ = v___y_1874_;
v___y_1819_ = v___y_1875_;
v___y_1820_ = v___y_1876_;
v___y_1821_ = v___y_1877_;
v___y_1822_ = v___y_1878_;
v___y_1823_ = v___y_1879_;
v___y_1824_ = v___y_1882_;
v___y_1825_ = v___y_1881_;
v___y_1826_ = v___y_1883_;
v___y_1827_ = v___y_1884_;
v___y_1828_ = v___x_1886_;
goto v___jp_1816_;
}
v___jp_1887_:
{
if (v___x_1815_ == 0)
{
lean_object* v___x_1899_; uint8_t v___x_1900_; 
v___x_1899_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___closed__0));
v___x_1900_ = lean_nat_dec_lt(v___x_1802_, v___x_1801_);
if (v___x_1900_ == 0)
{
lean_dec(v_a_1805_);
v___y_1873_ = v___y_1889_;
v___y_1874_ = v___y_1891_;
v___y_1875_ = v___y_1888_;
v___y_1876_ = v___y_1889_;
v___y_1877_ = v___y_1890_;
v___y_1878_ = v___y_1892_;
v___y_1879_ = v___y_1893_;
v___y_1880_ = v___y_1894_;
v___y_1881_ = v___y_1898_;
v___y_1882_ = v___y_1895_;
v___y_1883_ = v___y_1897_;
v___y_1884_ = v___y_1896_;
v___y_1885_ = v___x_1899_;
goto v___jp_1872_;
}
else
{
uint8_t v___x_1901_; 
v___x_1901_ = lean_nat_dec_le(v___x_1801_, v___x_1801_);
if (v___x_1901_ == 0)
{
if (v___x_1900_ == 0)
{
lean_dec(v_a_1805_);
v___y_1873_ = v___y_1889_;
v___y_1874_ = v___y_1891_;
v___y_1875_ = v___y_1888_;
v___y_1876_ = v___y_1889_;
v___y_1877_ = v___y_1890_;
v___y_1878_ = v___y_1892_;
v___y_1879_ = v___y_1893_;
v___y_1880_ = v___y_1894_;
v___y_1881_ = v___y_1898_;
v___y_1882_ = v___y_1895_;
v___y_1883_ = v___y_1897_;
v___y_1884_ = v___y_1896_;
v___y_1885_ = v___x_1899_;
goto v___jp_1872_;
}
else
{
size_t v___x_1902_; lean_object* v___x_1903_; 
v___x_1902_ = lean_usize_of_nat(v___x_1801_);
v___x_1903_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4(v_a_1805_, v_params_1799_, v___y_1897_, v___x_1902_, v___x_1899_);
lean_dec(v_a_1805_);
v___y_1873_ = v___y_1889_;
v___y_1874_ = v___y_1891_;
v___y_1875_ = v___y_1888_;
v___y_1876_ = v___y_1889_;
v___y_1877_ = v___y_1890_;
v___y_1878_ = v___y_1892_;
v___y_1879_ = v___y_1893_;
v___y_1880_ = v___y_1894_;
v___y_1881_ = v___y_1898_;
v___y_1882_ = v___y_1895_;
v___y_1883_ = v___y_1897_;
v___y_1884_ = v___y_1896_;
v___y_1885_ = v___x_1903_;
goto v___jp_1872_;
}
}
else
{
size_t v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = lean_usize_of_nat(v___x_1801_);
v___x_1905_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__4(v_a_1805_, v_params_1799_, v___y_1897_, v___x_1904_, v___x_1899_);
lean_dec(v_a_1805_);
v___y_1873_ = v___y_1889_;
v___y_1874_ = v___y_1891_;
v___y_1875_ = v___y_1888_;
v___y_1876_ = v___y_1889_;
v___y_1877_ = v___y_1890_;
v___y_1878_ = v___y_1892_;
v___y_1879_ = v___y_1893_;
v___y_1880_ = v___y_1894_;
v___y_1881_ = v___y_1898_;
v___y_1882_ = v___y_1895_;
v___y_1883_ = v___y_1897_;
v___y_1884_ = v___y_1896_;
v___y_1885_ = v___x_1905_;
goto v___jp_1872_;
}
}
}
else
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
lean_dec(v_a_1805_);
v___x_1906_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___closed__2));
v___x_1907_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_reduceArity___closed__5, &l_Lean_Compiler_LCNF_Decl_reduceArity___closed__5_once, _init_l_Lean_Compiler_LCNF_Decl_reduceArity___closed__5);
v___x_1908_ = l_Lean_Compiler_LCNF_mkParam(v___y_1889_, v___x_1906_, v___x_1907_, v___x_1810_, v___y_1895_, v___y_1896_, v___y_1893_, v___y_1890_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1909_);
lean_dec_ref_known(v___x_1908_, 1);
v___x_1910_ = lean_unsigned_to_nat(1u);
v___x_1911_ = lean_mk_empty_array_with_capacity(v___x_1910_);
v___x_1912_ = lean_array_push(v___x_1911_, v_a_1909_);
lean_inc(v___y_1890_);
lean_inc_ref(v___y_1893_);
lean_inc(v___y_1896_);
lean_inc_ref(v___y_1895_);
v___x_1913_ = lean_apply_6(v___y_1894_, v___x_1912_, v___y_1895_, v___y_1896_, v___y_1893_, v___y_1890_, lean_box(0));
v___y_1817_ = v___y_1889_;
v___y_1818_ = v___y_1891_;
v___y_1819_ = v___y_1888_;
v___y_1820_ = v___y_1889_;
v___y_1821_ = v___y_1890_;
v___y_1822_ = v___y_1892_;
v___y_1823_ = v___y_1893_;
v___y_1824_ = v___y_1895_;
v___y_1825_ = v___y_1898_;
v___y_1826_ = v___y_1897_;
v___y_1827_ = v___y_1896_;
v___y_1828_ = v___x_1913_;
goto v___jp_1816_;
}
else
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
lean_dec_ref(v___y_1898_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1888_);
lean_dec_ref(v_params_1799_);
lean_dec_ref(v_type_1798_);
lean_dec(v_levelParams_1797_);
lean_dec(v_name_1796_);
v_a_1914_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1916_ = v___x_1908_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1908_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_a_1914_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
return v___x_1919_;
}
}
}
}
}
v___jp_1922_:
{
size_t v_sz_1927_; size_t v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___f_1935_; uint8_t v___x_1936_; lean_object* v___x_1937_; uint8_t v___x_1938_; 
v_sz_1927_ = lean_array_size(v_params_1799_);
v___x_1928_ = ((size_t)0ULL);
lean_inc_ref(v_params_1799_);
v___x_1929_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__0(v_a_1805_, v_sz_1927_, v___x_1928_, v_params_1799_);
v___x_1930_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___closed__7));
lean_inc_n(v_name_1796_, 2);
v___x_1931_ = l_Lean_Name_append(v_name_1796_, v___x_1930_);
v___x_1932_ = lean_box(v___x_1815_);
v___x_1933_ = lean_box(v_safe_1800_);
v___x_1934_ = lean_box(v_recursive_1793_);
lean_inc_ref(v___x_1929_);
lean_inc(v___x_1931_);
v___f_1935_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_reduceArity___lam__0___boxed), 15, 9);
lean_closure_set(v___f_1935_, 0, v_name_1796_);
lean_closure_set(v___f_1935_, 1, v___x_1931_);
lean_closure_set(v___f_1935_, 2, v___x_1929_);
lean_closure_set(v___f_1935_, 3, v___x_1932_);
lean_closure_set(v___f_1935_, 4, v_value_1791_);
lean_closure_set(v___f_1935_, 5, v_code_1795_);
lean_closure_set(v___f_1935_, 6, v___x_1933_);
lean_closure_set(v___f_1935_, 7, v___x_1934_);
lean_closure_set(v___f_1935_, 8, v_inlineAttr_x3f_1794_);
v___x_1936_ = 0;
v___x_1937_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___closed__0));
v___x_1938_ = lean_nat_dec_lt(v___x_1802_, v___x_1801_);
if (v___x_1938_ == 0)
{
v___y_1888_ = v___x_1929_;
v___y_1889_ = v___x_1936_;
v___y_1890_ = v___y_1926_;
v___y_1891_ = v___x_1931_;
v___y_1892_ = v_sz_1927_;
v___y_1893_ = v___y_1925_;
v___y_1894_ = v___f_1935_;
v___y_1895_ = v___y_1923_;
v___y_1896_ = v___y_1924_;
v___y_1897_ = v___x_1928_;
v___y_1898_ = v___x_1937_;
goto v___jp_1887_;
}
else
{
uint8_t v___x_1939_; 
v___x_1939_ = lean_nat_dec_le(v___x_1801_, v___x_1801_);
if (v___x_1939_ == 0)
{
if (v___x_1938_ == 0)
{
v___y_1888_ = v___x_1929_;
v___y_1889_ = v___x_1936_;
v___y_1890_ = v___y_1926_;
v___y_1891_ = v___x_1931_;
v___y_1892_ = v_sz_1927_;
v___y_1893_ = v___y_1925_;
v___y_1894_ = v___f_1935_;
v___y_1895_ = v___y_1923_;
v___y_1896_ = v___y_1924_;
v___y_1897_ = v___x_1928_;
v___y_1898_ = v___x_1937_;
goto v___jp_1887_;
}
else
{
size_t v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_usize_of_nat(v___x_1801_);
v___x_1941_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__5(v_a_1805_, v_params_1799_, v___x_1928_, v___x_1940_, v___x_1937_);
v___y_1888_ = v___x_1929_;
v___y_1889_ = v___x_1936_;
v___y_1890_ = v___y_1926_;
v___y_1891_ = v___x_1931_;
v___y_1892_ = v_sz_1927_;
v___y_1893_ = v___y_1925_;
v___y_1894_ = v___f_1935_;
v___y_1895_ = v___y_1923_;
v___y_1896_ = v___y_1924_;
v___y_1897_ = v___x_1928_;
v___y_1898_ = v___x_1941_;
goto v___jp_1887_;
}
}
else
{
size_t v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = lean_usize_of_nat(v___x_1801_);
v___x_1943_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__5(v_a_1805_, v_params_1799_, v___x_1928_, v___x_1942_, v___x_1937_);
v___y_1888_ = v___x_1929_;
v___y_1889_ = v___x_1936_;
v___y_1890_ = v___y_1926_;
v___y_1891_ = v___x_1931_;
v___y_1892_ = v_sz_1927_;
v___y_1893_ = v___y_1925_;
v___y_1894_ = v___f_1935_;
v___y_1895_ = v___y_1923_;
v___y_1896_ = v___y_1924_;
v___y_1897_ = v___x_1928_;
v___y_1898_ = v___x_1943_;
goto v___jp_1887_;
}
}
}
}
else
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1969_; 
lean_dec(v_a_1805_);
lean_dec_ref(v_code_1795_);
lean_dec_ref_known(v_value_1791_, 1);
v___x_1965_ = lean_unsigned_to_nat(1u);
v___x_1966_ = lean_mk_empty_array_with_capacity(v___x_1965_);
v___x_1967_ = lean_array_push(v___x_1966_, v_decl_1747_);
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 0, v___x_1967_);
v___x_1969_ = v___x_1807_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v___x_1967_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
return v___x_1969_;
}
}
}
}
else
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
lean_dec_ref(v_code_1795_);
lean_dec_ref_known(v_value_1791_, 1);
lean_dec_ref(v_decl_1747_);
v_a_1972_ = lean_ctor_get(v___x_1804_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1974_ = v___x_1804_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v___x_1804_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_a_1972_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
}
else
{
lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1989_; 
v_isSharedCheck_1989_ = !lean_is_exclusive(v_value_1791_);
if (v_isSharedCheck_1989_ == 0)
{
lean_object* v_unused_1990_; 
v_unused_1990_ = lean_ctor_get(v_value_1791_, 0);
lean_dec(v_unused_1990_);
v___x_1981_ = v_value_1791_;
v_isShared_1982_ = v_isSharedCheck_1989_;
goto v_resetjp_1980_;
}
else
{
lean_dec(v_value_1791_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1989_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1987_; 
v___x_1983_ = lean_unsigned_to_nat(1u);
v___x_1984_ = lean_mk_empty_array_with_capacity(v___x_1983_);
v___x_1985_ = lean_array_push(v___x_1984_, v_decl_1747_);
if (v_isShared_1982_ == 0)
{
lean_ctor_set(v___x_1981_, 0, v___x_1985_);
v___x_1987_ = v___x_1981_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v___x_1985_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
}
else
{
lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_2000_; 
v_isSharedCheck_2000_ = !lean_is_exclusive(v_value_1791_);
if (v_isSharedCheck_2000_ == 0)
{
lean_object* v_unused_2001_; 
v_unused_2001_ = lean_ctor_get(v_value_1791_, 0);
lean_dec(v_unused_2001_);
v___x_1992_ = v_value_1791_;
v_isShared_1993_ = v_isSharedCheck_2000_;
goto v_resetjp_1991_;
}
else
{
lean_dec(v_value_1791_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_2000_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1998_; 
v___x_1994_ = lean_unsigned_to_nat(1u);
v___x_1995_ = lean_mk_empty_array_with_capacity(v___x_1994_);
v___x_1996_ = lean_array_push(v___x_1995_, v_decl_1747_);
if (v_isShared_1993_ == 0)
{
lean_ctor_set_tag(v___x_1992_, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1996_);
v___x_1998_ = v___x_1992_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v___x_1996_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
v___jp_1753_:
{
if (lean_obj_tag(v___y_1759_) == 0)
{
lean_object* v_a_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v_a_1760_ = lean_ctor_get(v___y_1759_, 0);
lean_inc(v_a_1760_);
lean_dec_ref_known(v___y_1759_, 1);
v___x_1761_ = lean_st_ref_get(v___y_1754_);
lean_dec(v___y_1754_);
lean_dec(v___x_1761_);
v___x_1762_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___y_1755_, v___y_1757_, v___y_1758_);
lean_dec_ref(v___y_1757_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1773_; 
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1773_ == 0)
{
lean_object* v_unused_1774_; 
v_unused_1774_ = lean_ctor_get(v___x_1762_, 0);
lean_dec(v_unused_1774_);
v___x_1764_ = v___x_1762_;
v_isShared_1765_ = v_isSharedCheck_1773_;
goto v_resetjp_1763_;
}
else
{
lean_dec(v___x_1762_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1773_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1771_; 
v___x_1766_ = lean_unsigned_to_nat(2u);
v___x_1767_ = lean_mk_empty_array_with_capacity(v___x_1766_);
v___x_1768_ = lean_array_push(v___x_1767_, v___y_1756_);
v___x_1769_ = lean_array_push(v___x_1768_, v_a_1760_);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 0, v___x_1769_);
v___x_1771_ = v___x_1764_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___x_1769_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
}
else
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1782_; 
lean_dec(v_a_1760_);
lean_dec_ref(v___y_1756_);
v_a_1775_ = lean_ctor_get(v___x_1762_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1777_ = v___x_1762_;
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1762_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1780_; 
if (v_isShared_1778_ == 0)
{
v___x_1780_ = v___x_1777_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1775_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
else
{
lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1790_; 
lean_dec_ref(v___y_1757_);
lean_dec_ref(v___y_1756_);
lean_dec(v___y_1754_);
v_a_1783_ = lean_ctor_get(v___y_1759_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___y_1759_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1785_ = v___y_1759_;
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v___y_1759_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1788_; 
if (v_isShared_1786_ == 0)
{
v___x_1788_ = v___x_1785_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1783_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_reduceArity___boxed(lean_object* v_decl_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_Lean_Compiler_LCNF_Decl_reduceArity(v_decl_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
lean_dec(v_a_2006_);
lean_dec_ref(v_a_2005_);
lean_dec(v_a_2004_);
lean_dec_ref(v_a_2003_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3(lean_object* v_as_2009_, size_t v_sz_2010_, size_t v_i_2011_, lean_object* v_b_2012_, uint8_t v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_){
_start:
{
lean_object* v___x_2020_; 
v___x_2020_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3___redArg(v_as_2009_, v_sz_2010_, v_i_2011_, v_b_2012_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3___boxed(lean_object* v_as_2021_, lean_object* v_sz_2022_, lean_object* v_i_2023_, lean_object* v_b_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
size_t v_sz_boxed_2032_; size_t v_i_boxed_2033_; uint8_t v___y_12386__boxed_2034_; lean_object* v_res_2035_; 
v_sz_boxed_2032_ = lean_unbox_usize(v_sz_2022_);
lean_dec(v_sz_2022_);
v_i_boxed_2033_ = lean_unbox_usize(v_i_2023_);
lean_dec(v_i_2023_);
v___y_12386__boxed_2034_ = lean_unbox(v___y_2025_);
v_res_2035_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_Decl_reduceArity_spec__3(v_as_2021_, v_sz_boxed_2032_, v_i_boxed_2033_, v_b_2024_, v___y_12386__boxed_2034_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v_as_2021_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_reduceArity_spec__0(lean_object* v_as_2036_, size_t v_i_2037_, size_t v_stop_2038_, lean_object* v_b_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_){
_start:
{
lean_object* v_a_2046_; uint8_t v___x_2050_; 
v___x_2050_ = lean_usize_dec_eq(v_i_2037_, v_stop_2038_);
if (v___x_2050_ == 0)
{
lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2051_ = lean_array_uget_borrowed(v_as_2036_, v_i_2037_);
lean_inc(v___x_2051_);
v___x_2052_ = l_Lean_Compiler_LCNF_Decl_reduceArity(v___x_2051_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_);
if (lean_obj_tag(v___x_2052_) == 0)
{
lean_object* v_a_2053_; lean_object* v___x_2054_; 
v_a_2053_ = lean_ctor_get(v___x_2052_, 0);
lean_inc(v_a_2053_);
lean_dec_ref_known(v___x_2052_, 1);
v___x_2054_ = l_Array_append___redArg(v_b_2039_, v_a_2053_);
lean_dec(v_a_2053_);
v_a_2046_ = v___x_2054_;
goto v___jp_2045_;
}
else
{
lean_dec_ref(v_b_2039_);
if (lean_obj_tag(v___x_2052_) == 0)
{
lean_object* v_a_2055_; 
v_a_2055_ = lean_ctor_get(v___x_2052_, 0);
lean_inc(v_a_2055_);
lean_dec_ref_known(v___x_2052_, 1);
v_a_2046_ = v_a_2055_;
goto v___jp_2045_;
}
else
{
return v___x_2052_;
}
}
}
else
{
lean_object* v___x_2056_; 
v___x_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2056_, 0, v_b_2039_);
return v___x_2056_;
}
v___jp_2045_:
{
size_t v___x_2047_; size_t v___x_2048_; 
v___x_2047_ = ((size_t)1ULL);
v___x_2048_ = lean_usize_add(v_i_2037_, v___x_2047_);
v_i_2037_ = v___x_2048_;
v_b_2039_ = v_a_2046_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_reduceArity_spec__0___boxed(lean_object* v_as_2057_, lean_object* v_i_2058_, lean_object* v_stop_2059_, lean_object* v_b_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_){
_start:
{
size_t v_i_boxed_2066_; size_t v_stop_boxed_2067_; lean_object* v_res_2068_; 
v_i_boxed_2066_ = lean_unbox_usize(v_i_2058_);
lean_dec(v_i_2058_);
v_stop_boxed_2067_ = lean_unbox_usize(v_stop_2059_);
lean_dec(v_stop_2059_);
v_res_2068_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_reduceArity_spec__0(v_as_2057_, v_i_boxed_2066_, v_stop_boxed_2067_, v_b_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec_ref(v_as_2057_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceArity___lam__0(lean_object* v___x_2069_, lean_object* v_decls_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; uint8_t v___x_2078_; 
v___x_2076_ = lean_mk_empty_array_with_capacity(v___x_2069_);
v___x_2077_ = lean_array_get_size(v_decls_2070_);
v___x_2078_ = lean_nat_dec_lt(v___x_2069_, v___x_2077_);
if (v___x_2078_ == 0)
{
lean_object* v___x_2079_; 
v___x_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2076_);
return v___x_2079_;
}
else
{
uint8_t v___x_2080_; 
v___x_2080_ = lean_nat_dec_le(v___x_2077_, v___x_2077_);
if (v___x_2080_ == 0)
{
if (v___x_2078_ == 0)
{
lean_object* v___x_2081_; 
v___x_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2076_);
return v___x_2081_;
}
else
{
size_t v___x_2082_; size_t v___x_2083_; lean_object* v___x_2084_; 
v___x_2082_ = ((size_t)0ULL);
v___x_2083_ = lean_usize_of_nat(v___x_2077_);
v___x_2084_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_reduceArity_spec__0(v_decls_2070_, v___x_2082_, v___x_2083_, v___x_2076_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
return v___x_2084_;
}
}
else
{
size_t v___x_2085_; size_t v___x_2086_; lean_object* v___x_2087_; 
v___x_2085_ = ((size_t)0ULL);
v___x_2086_ = lean_usize_of_nat(v___x_2077_);
v___x_2087_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_reduceArity_spec__0(v_decls_2070_, v___x_2085_, v___x_2086_, v___x_2076_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
return v___x_2087_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_reduceArity___lam__0___boxed(lean_object* v___x_2088_, lean_object* v_decls_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_){
_start:
{
lean_object* v_res_2095_; 
v_res_2095_ = l_Lean_Compiler_LCNF_reduceArity___lam__0(v___x_2088_, v_decls_2089_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_);
lean_dec(v___y_2093_);
lean_dec_ref(v___y_2092_);
lean_dec(v___y_2091_);
lean_dec_ref(v___y_2090_);
lean_dec_ref(v_decls_2089_);
lean_dec(v___x_2088_);
return v_res_2095_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2158_ = lean_unsigned_to_nat(2803462840u);
v___x_2159_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_));
v___x_2160_ = l_Lean_Name_num___override(v___x_2159_, v___x_2158_);
return v___x_2160_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2162_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_));
v___x_2163_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_);
v___x_2164_ = l_Lean_Name_str___override(v___x_2163_, v___x_2162_);
return v___x_2164_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2166_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_));
v___x_2167_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_);
v___x_2168_ = l_Lean_Name_str___override(v___x_2167_, v___x_2166_);
return v___x_2168_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2169_ = lean_unsigned_to_nat(2u);
v___x_2170_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_);
v___x_2171_ = l_Lean_Name_num___override(v___x_2170_, v___x_2169_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2173_; uint8_t v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
v___x_2173_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_reduceArity___closed__10));
v___x_2174_ = 1;
v___x_2175_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_);
v___x_2176_ = l_Lean_registerTraceClass(v___x_2173_, v___x_2174_, v___x_2175_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2____boxed(lean_object* v_a_2177_){
_start:
{
lean_object* v_res_2178_; 
v_res_2178_ = l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_();
return v_res_2178_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_Internalize(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ReduceArity(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ReduceArity_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ReduceArity_2803462840____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ReduceArity(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_Internalize(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ReduceArity(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ReduceArity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ReduceArity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ReduceArity(builtin);
}
#ifdef __cplusplus
}
#endif
