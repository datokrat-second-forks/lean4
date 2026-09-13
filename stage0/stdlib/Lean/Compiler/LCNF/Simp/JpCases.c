// Lean compiler output
// Module: Lean.Compiler.LCNF.Simp.JpCases
// Imports: public import Lean.Compiler.LCNF.DependsOn public import Lean.Compiler.LCNF.Internalize public import Lean.Compiler.LCNF.Simp.DiscrM
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
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_isEmpty(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_Compiler_LCNF_instInhabitedCases_default__1___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_findCtor_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Simp_CtorInfo_getName(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Internalize_internalizeCode(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_attachCodeDecls___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxJpDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Code_dependsOn(uint8_t, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_Compiler_LCNF_CodeDecl_dependsOn(uint8_t, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Cases_getCtorNames___redArg(lean_object*);
uint8_t l_Lean_NameSet_any(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t l_Lean_FVarIdMap_any___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
double lean_float_of_nat(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Compiler_LCNF_Simp_findCtorName_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_NameSet_toList(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_FVarIdMap_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isJpCases_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isJpCases_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isJpCases_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isJpCases_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__0;
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__1;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Compiler.LCNF.Simp.JpCases"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "_private.Lean.Compiler.LCNF.Simp.JpCases.0.Lean.Compiler.LCNF.Simp.extractJpCases.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__0(size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__1(size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__0;
static const lean_array_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "_jp"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 69, 15, 56, 172, 246, 212, 179)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpNewArgs(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpNewArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3___lam__0(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases___closed__0_value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__2;
static const lean_string_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__3 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__3_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__4 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ↦ "};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "jpCases"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(5, 122, 96, 221, 209, 205, 68, 156)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__3_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(12, 92, 220, 8, 204, 108, 198, 7)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__6;
static const lean_string_object l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "candidates"};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__7_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__8_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__9;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Simp"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(65, 104, 221, 94, 203, 189, 176, 167)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "JpCases"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 200, 62, 252, 228, 198, 151, 109)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(5, 181, 89, 208, 84, 141, 174, 108)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(80, 114, 224, 6, 181, 131, 133, 238)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 91, 150, 74, 170, 27, 158, 82)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(139, 85, 119, 190, 56, 191, 107, 84)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 95, 208, 21, 155, 197, 36, 224)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(179, 99, 113, 108, 82, 177, 202, 32)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(158, 149, 154, 42, 73, 148, 172, 49)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(92, 98, 9, 182, 57, 248, 25, 88)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(61, 117, 18, 175, 69, 86, 64, 169)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(53, 8, 88, 168, 116, 51, 112, 53)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(96, 128, 156, 153, 203, 13, 202, 211)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)(((size_t)(862626027) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(79, 69, 117, 196, 237, 244, 183, 219)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(4, 169, 91, 210, 237, 254, 196, 180)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(144, 70, 154, 134, 24, 16, 151, 30)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 209, 167, 183, 214, 28, 157, 252)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go_spec__0(lean_object* v_cases_1_, lean_object* v_as_2_, lean_object* v_j_3_){
_start:
{
lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_4_ = lean_array_get_size(v_as_2_);
v___x_5_ = lean_nat_dec_lt(v_j_3_, v___x_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
lean_dec(v_j_3_);
v___x_6_ = lean_box(0);
return v___x_6_;
}
else
{
lean_object* v_discr_7_; lean_object* v___x_8_; lean_object* v_fvarId_9_; uint8_t v___x_10_; 
v_discr_7_ = lean_ctor_get(v_cases_1_, 2);
v___x_8_ = lean_array_fget_borrowed(v_as_2_, v_j_3_);
v_fvarId_9_ = lean_ctor_get(v___x_8_, 0);
v___x_10_ = l_Lean_instBEqFVarId_beq(v_discr_7_, v_fvarId_9_);
if (v___x_10_ == 0)
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_unsigned_to_nat(1u);
v___x_12_ = lean_nat_add(v_j_3_, v___x_11_);
lean_dec(v_j_3_);
v_j_3_ = v___x_12_;
goto _start;
}
else
{
lean_object* v___x_14_; 
v___x_14_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_14_, 0, v_j_3_);
return v___x_14_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go_spec__0___boxed(lean_object* v_cases_15_, lean_object* v_as_16_, lean_object* v_j_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go_spec__0(v_cases_15_, v_as_16_, v_j_17_);
lean_dec_ref(v_as_16_);
lean_dec_ref(v_cases_15_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go(lean_object* v_decl_19_, lean_object* v_small_20_, lean_object* v_code_21_, lean_object* v_prefixSize_22_){
_start:
{
uint8_t v___x_23_; 
v___x_23_ = lean_nat_dec_lt(v_small_20_, v_prefixSize_22_);
if (v___x_23_ == 0)
{
switch(lean_obj_tag(v_code_21_))
{
case 0:
{
lean_object* v_k_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v_k_24_ = lean_ctor_get(v_code_21_, 1);
v___x_25_ = lean_unsigned_to_nat(1u);
v___x_26_ = lean_nat_add(v_prefixSize_22_, v___x_25_);
lean_dec(v_prefixSize_22_);
v_code_21_ = v_k_24_;
v_prefixSize_22_ = v___x_26_;
goto _start;
}
case 4:
{
lean_object* v_cases_28_; lean_object* v_params_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
lean_dec(v_prefixSize_22_);
v_cases_28_ = lean_ctor_get(v_code_21_, 0);
v_params_29_ = lean_ctor_get(v_decl_19_, 2);
v___x_30_ = lean_unsigned_to_nat(0u);
v___x_31_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go_spec__0(v_cases_28_, v_params_29_, v___x_30_);
return v___x_31_;
}
default: 
{
lean_object* v___x_32_; 
lean_dec(v_prefixSize_22_);
v___x_32_ = lean_box(0);
return v___x_32_;
}
}
}
else
{
lean_object* v___x_33_; 
lean_dec(v_prefixSize_22_);
v___x_33_ = lean_box(0);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go___boxed(lean_object* v_decl_34_, lean_object* v_small_35_, lean_object* v_code_36_, lean_object* v_prefixSize_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go(v_decl_34_, v_small_35_, v_code_36_, v_prefixSize_37_);
lean_dec_ref(v_code_36_);
lean_dec(v_small_35_);
lean_dec_ref(v_decl_34_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isJpCases_x3f___redArg(lean_object* v_decl_39_, lean_object* v_a_40_){
_start:
{
lean_object* v_params_42_; lean_object* v_value_43_; lean_object* v___x_44_; lean_object* v___x_45_; uint8_t v___x_46_; 
v_params_42_ = lean_ctor_get(v_decl_39_, 2);
v_value_43_ = lean_ctor_get(v_decl_39_, 4);
v___x_44_ = lean_array_get_size(v_params_42_);
v___x_45_ = lean_unsigned_to_nat(0u);
v___x_46_ = lean_nat_dec_eq(v___x_44_, v___x_45_);
if (v___x_46_ == 0)
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Compiler_LCNF_getConfig___redArg(v_a_40_);
if (lean_obj_tag(v___x_47_) == 0)
{
lean_object* v_a_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_57_; 
v_a_48_ = lean_ctor_get(v___x_47_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v___x_47_);
if (v_isSharedCheck_57_ == 0)
{
v___x_50_ = v___x_47_;
v_isShared_51_ = v_isSharedCheck_57_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_a_48_);
lean_dec(v___x_47_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_57_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v_smallThreshold_52_; lean_object* v___x_53_; lean_object* v___x_55_; 
v_smallThreshold_52_ = lean_ctor_get(v_a_48_, 0);
lean_inc(v_smallThreshold_52_);
lean_dec(v_a_48_);
v___x_53_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_isJpCases_x3f_go(v_decl_39_, v_smallThreshold_52_, v_value_43_, v___x_45_);
lean_dec(v_smallThreshold_52_);
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 0, v___x_53_);
v___x_55_ = v___x_50_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v___x_53_);
v___x_55_ = v_reuseFailAlloc_56_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
return v___x_55_;
}
}
}
else
{
lean_object* v_a_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_65_; 
v_a_58_ = lean_ctor_get(v___x_47_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_47_);
if (v_isSharedCheck_65_ == 0)
{
v___x_60_ = v___x_47_;
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_a_58_);
lean_dec(v___x_47_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_a_58_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
}
else
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = lean_box(0);
v___x_67_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isJpCases_x3f___redArg___boxed(lean_object* v_decl_68_, lean_object* v_a_69_, lean_object* v_a_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_Compiler_LCNF_Simp_isJpCases_x3f___redArg(v_decl_68_, v_a_69_);
lean_dec_ref(v_a_69_);
lean_dec_ref(v_decl_68_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isJpCases_x3f(lean_object* v_decl_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = l_Lean_Compiler_LCNF_Simp_isJpCases_x3f___redArg(v_decl_72_, v_a_73_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_isJpCases_x3f___boxed(lean_object* v_decl_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Compiler_LCNF_Simp_isJpCases_x3f(v_decl_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
lean_dec(v_a_81_);
lean_dec_ref(v_a_80_);
lean_dec_ref(v_decl_79_);
return v_res_85_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default___closed__0(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_86_ = l_Lean_NameSet_empty;
v___x_87_ = lean_unsigned_to_nat(0u);
v___x_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_86_);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default(void){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default___closed__0, &l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default___closed__0);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default;
return v___x_90_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___lam__0(lean_object* v_x_91_, lean_object* v_s_92_){
_start:
{
lean_object* v_ctorNames_93_; uint8_t v___x_94_; 
v_ctorNames_93_ = lean_ctor_get(v_s_92_, 1);
v___x_94_ = l_Lean_NameSet_isEmpty(v_ctorNames_93_);
if (v___x_94_ == 0)
{
uint8_t v___x_95_; 
v___x_95_ = 1;
return v___x_95_;
}
else
{
uint8_t v___x_96_; 
v___x_96_ = 0;
return v___x_96_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___lam__0___boxed(lean_object* v_x_97_, lean_object* v_s_98_){
_start:
{
uint8_t v_res_99_; lean_object* v_r_100_; 
v_res_99_ = l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___lam__0(v_x_97_, v_s_98_);
lean_dec_ref(v_s_98_);
lean_dec(v_x_97_);
v_r_100_ = lean_box(v_res_99_);
return v_r_100_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate(lean_object* v_info_102_){
_start:
{
lean_object* v___f_103_; uint8_t v___x_104_; 
v___f_103_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___closed__0));
v___x_104_ = l_Lean_FVarIdMap_any___redArg(v_info_102_, v___f_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate___boxed(lean_object* v_info_105_){
_start:
{
uint8_t v_res_106_; lean_object* v_r_107_; 
v_res_106_ = l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate(v_info_105_);
v_r_107_ = lean_box(v_res_106_);
return v_r_107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go(lean_object* v_code_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
switch(lean_obj_tag(v_code_108_))
{
case 0:
{
lean_object* v_k_116_; 
v_k_116_ = lean_ctor_get(v_code_108_, 1);
lean_inc_ref(v_k_116_);
lean_dec_ref_known(v_code_108_, 2);
v_code_108_ = v_k_116_;
goto _start;
}
case 1:
{
lean_object* v_decl_118_; lean_object* v_k_119_; lean_object* v_value_120_; lean_object* v___x_121_; 
v_decl_118_ = lean_ctor_get(v_code_108_, 0);
lean_inc_ref(v_decl_118_);
v_k_119_ = lean_ctor_get(v_code_108_, 1);
lean_inc_ref(v_k_119_);
lean_dec_ref_known(v_code_108_, 2);
v_value_120_ = lean_ctor_get(v_decl_118_, 4);
lean_inc_ref(v_value_120_);
lean_dec_ref(v_decl_118_);
v___x_121_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go(v_value_120_, v_a_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_dec_ref_known(v___x_121_, 1);
v_code_108_ = v_k_119_;
goto _start;
}
else
{
lean_dec_ref(v_k_119_);
return v___x_121_;
}
}
case 2:
{
lean_object* v_decl_123_; lean_object* v_k_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_157_; 
v_decl_123_ = lean_ctor_get(v_code_108_, 0);
v_k_124_ = lean_ctor_get(v_code_108_, 1);
v_isSharedCheck_157_ = !lean_is_exclusive(v_code_108_);
if (v_isSharedCheck_157_ == 0)
{
v___x_126_ = v_code_108_;
v_isShared_127_ = v_isSharedCheck_157_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_k_124_);
lean_inc(v_decl_123_);
lean_dec(v_code_108_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_157_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
lean_object* v___y_129_; lean_object* v___y_130_; lean_object* v___y_131_; lean_object* v___y_132_; lean_object* v___y_133_; lean_object* v___y_134_; lean_object* v___x_138_; 
v___x_138_ = l_Lean_Compiler_LCNF_Simp_isJpCases_x3f___redArg(v_decl_123_, v_a_111_);
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v_a_139_; 
v_a_139_ = lean_ctor_get(v___x_138_, 0);
lean_inc(v_a_139_);
lean_dec_ref_known(v___x_138_, 1);
if (lean_obj_tag(v_a_139_) == 1)
{
lean_object* v_val_140_; lean_object* v___x_141_; lean_object* v_fvarId_142_; lean_object* v___x_143_; lean_object* v___x_145_; 
v_val_140_ = lean_ctor_get(v_a_139_, 0);
lean_inc(v_val_140_);
lean_dec_ref_known(v_a_139_, 1);
v___x_141_ = lean_st_ref_take(v_a_109_);
v_fvarId_142_ = lean_ctor_get(v_decl_123_, 0);
v___x_143_ = l_Lean_NameSet_empty;
if (v_isShared_127_ == 0)
{
lean_ctor_set_tag(v___x_126_, 0);
lean_ctor_set(v___x_126_, 1, v___x_143_);
lean_ctor_set(v___x_126_, 0, v_val_140_);
v___x_145_ = v___x_126_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_val_140_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v___x_143_);
v___x_145_ = v_reuseFailAlloc_148_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
lean_inc(v_fvarId_142_);
v___x_146_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_142_, v___x_145_, v___x_141_);
v___x_147_ = lean_st_ref_put(v_a_109_, v___x_146_);
v___y_129_ = v_a_109_;
v___y_130_ = v_a_110_;
v___y_131_ = v_a_111_;
v___y_132_ = v_a_112_;
v___y_133_ = v_a_113_;
v___y_134_ = v_a_114_;
goto v___jp_128_;
}
}
else
{
lean_dec(v_a_139_);
lean_del_object(v___x_126_);
v___y_129_ = v_a_109_;
v___y_130_ = v_a_110_;
v___y_131_ = v_a_111_;
v___y_132_ = v_a_112_;
v___y_133_ = v_a_113_;
v___y_134_ = v_a_114_;
goto v___jp_128_;
}
}
else
{
lean_object* v_a_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_156_; 
lean_del_object(v___x_126_);
lean_dec_ref(v_k_124_);
lean_dec_ref(v_decl_123_);
v_a_149_ = lean_ctor_get(v___x_138_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_156_ == 0)
{
v___x_151_ = v___x_138_;
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_a_149_);
lean_dec(v___x_138_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_154_; 
if (v_isShared_152_ == 0)
{
v___x_154_ = v___x_151_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_a_149_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
v___jp_128_:
{
lean_object* v_value_135_; lean_object* v___x_136_; 
v_value_135_ = lean_ctor_get(v_decl_123_, 4);
lean_inc_ref(v_value_135_);
lean_dec_ref(v_decl_123_);
v___x_136_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go(v_value_135_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_);
if (lean_obj_tag(v___x_136_) == 0)
{
lean_dec_ref_known(v___x_136_, 1);
v_code_108_ = v_k_124_;
v_a_109_ = v___y_129_;
v_a_110_ = v___y_130_;
v_a_111_ = v___y_131_;
v_a_112_ = v___y_132_;
v_a_113_ = v___y_133_;
v_a_114_ = v___y_134_;
goto _start;
}
else
{
lean_dec_ref(v_k_124_);
return v___x_136_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_158_; lean_object* v_args_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_fvarId_158_ = lean_ctor_get(v_code_108_, 0);
lean_inc(v_fvarId_158_);
v_args_159_ = lean_ctor_get(v_code_108_, 1);
lean_inc_ref(v_args_159_);
lean_dec_ref_known(v_code_108_, 2);
v___x_160_ = lean_st_ref_get(v_a_109_);
v___x_161_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v___x_160_, v_fvarId_158_);
lean_dec(v___x_160_);
if (lean_obj_tag(v___x_161_) == 1)
{
lean_object* v_val_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_209_; 
v_val_162_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_209_ == 0)
{
v___x_164_ = v___x_161_;
v_isShared_165_ = v_isSharedCheck_209_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_val_162_);
lean_dec(v___x_161_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_209_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v_paramIdx_166_; lean_object* v_ctorNames_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_208_; 
v_paramIdx_166_ = lean_ctor_get(v_val_162_, 0);
v_ctorNames_167_ = lean_ctor_get(v_val_162_, 1);
v_isSharedCheck_208_ = !lean_is_exclusive(v_val_162_);
if (v_isSharedCheck_208_ == 0)
{
v___x_169_ = v_val_162_;
v_isShared_170_ = v_isSharedCheck_208_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_ctorNames_167_);
lean_inc(v_paramIdx_166_);
lean_dec(v_val_162_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_208_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_box(0);
v___x_172_ = lean_array_get(v___x_171_, v_args_159_, v_paramIdx_166_);
lean_dec_ref(v_args_159_);
if (lean_obj_tag(v___x_172_) == 1)
{
lean_object* v_fvarId_173_; lean_object* v___x_174_; 
lean_del_object(v___x_164_);
v_fvarId_173_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_fvarId_173_);
lean_dec_ref_known(v___x_172_, 1);
v___x_174_ = l_Lean_Compiler_LCNF_Simp_findCtorName_x3f___redArg(v_fvarId_173_, v_a_110_, v_a_112_, v_a_114_);
lean_dec(v_fvarId_173_);
if (lean_obj_tag(v___x_174_) == 0)
{
lean_object* v_a_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_195_; 
v_a_175_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_195_ == 0)
{
v___x_177_ = v___x_174_;
v_isShared_178_ = v_isSharedCheck_195_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_a_175_);
lean_dec(v___x_174_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_195_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
if (lean_obj_tag(v_a_175_) == 1)
{
lean_object* v_val_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
v_val_179_ = lean_ctor_get(v_a_175_, 0);
lean_inc(v_val_179_);
lean_dec_ref_known(v_a_175_, 1);
v___x_180_ = lean_st_ref_take(v_a_109_);
v___x_181_ = lean_box(0);
v___x_182_ = l_Lean_NameSet_insert(v_ctorNames_167_, v_val_179_);
if (v_isShared_170_ == 0)
{
lean_ctor_set(v___x_169_, 1, v___x_182_);
v___x_184_ = v___x_169_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_paramIdx_166_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v___x_182_);
v___x_184_ = v_reuseFailAlloc_190_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_185_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_158_, v___x_184_, v___x_180_);
v___x_186_ = lean_st_ref_put(v_a_109_, v___x_185_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 0, v___x_181_);
v___x_188_ = v___x_177_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_181_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
else
{
lean_object* v___x_191_; lean_object* v___x_193_; 
lean_dec(v_a_175_);
lean_del_object(v___x_169_);
lean_dec(v_ctorNames_167_);
lean_dec(v_paramIdx_166_);
lean_dec(v_fvarId_158_);
v___x_191_ = lean_box(0);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 0, v___x_191_);
v___x_193_ = v___x_177_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v___x_191_);
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
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
lean_del_object(v___x_169_);
lean_dec(v_ctorNames_167_);
lean_dec(v_paramIdx_166_);
lean_dec(v_fvarId_158_);
v_a_196_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_174_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_174_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
else
{
lean_object* v___x_204_; lean_object* v___x_206_; 
lean_dec(v___x_172_);
lean_del_object(v___x_169_);
lean_dec(v_ctorNames_167_);
lean_dec(v_paramIdx_166_);
lean_dec(v_fvarId_158_);
v___x_204_ = lean_box(0);
if (v_isShared_165_ == 0)
{
lean_ctor_set_tag(v___x_164_, 0);
lean_ctor_set(v___x_164_, 0, v___x_204_);
v___x_206_ = v___x_164_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_204_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
}
else
{
lean_object* v___x_210_; lean_object* v___x_211_; 
lean_dec(v___x_161_);
lean_dec_ref(v_args_159_);
lean_dec(v_fvarId_158_);
v___x_210_ = lean_box(0);
v___x_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
return v___x_211_;
}
}
case 4:
{
lean_object* v_cases_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_235_; 
v_cases_212_ = lean_ctor_get(v_code_108_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v_code_108_);
if (v_isSharedCheck_235_ == 0)
{
v___x_214_ = v_code_108_;
v_isShared_215_ = v_isSharedCheck_235_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_cases_212_);
lean_dec(v_code_108_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_235_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v_discr_216_; lean_object* v_alts_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v_discr_216_ = lean_ctor_get(v_cases_212_, 2);
lean_inc(v_discr_216_);
v_alts_217_ = lean_ctor_get(v_cases_212_, 3);
lean_inc_ref(v_alts_217_);
lean_dec_ref(v_cases_212_);
v___x_218_ = lean_unsigned_to_nat(0u);
v___x_219_ = lean_array_get_size(v_alts_217_);
v___x_220_ = lean_box(0);
v___x_221_ = lean_nat_dec_lt(v___x_218_, v___x_219_);
if (v___x_221_ == 0)
{
lean_object* v___x_223_; 
lean_dec_ref(v_alts_217_);
lean_dec(v_discr_216_);
if (v_isShared_215_ == 0)
{
lean_ctor_set_tag(v___x_214_, 0);
lean_ctor_set(v___x_214_, 0, v___x_220_);
v___x_223_ = v___x_214_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_224_; 
v_reuseFailAlloc_224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_224_, 0, v___x_220_);
v___x_223_ = v_reuseFailAlloc_224_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
return v___x_223_;
}
}
else
{
uint8_t v___x_225_; 
v___x_225_ = lean_nat_dec_le(v___x_219_, v___x_219_);
if (v___x_225_ == 0)
{
if (v___x_221_ == 0)
{
lean_object* v___x_227_; 
lean_dec_ref(v_alts_217_);
lean_dec(v_discr_216_);
if (v_isShared_215_ == 0)
{
lean_ctor_set_tag(v___x_214_, 0);
lean_ctor_set(v___x_214_, 0, v___x_220_);
v___x_227_ = v___x_214_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v___x_220_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
else
{
size_t v___x_229_; size_t v___x_230_; lean_object* v___x_231_; 
lean_del_object(v___x_214_);
v___x_229_ = ((size_t)0ULL);
v___x_230_ = lean_usize_of_nat(v___x_219_);
v___x_231_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go_spec__0(v_discr_216_, v_alts_217_, v___x_229_, v___x_230_, v___x_220_, v_a_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_);
lean_dec_ref(v_alts_217_);
return v___x_231_;
}
}
else
{
size_t v___x_232_; size_t v___x_233_; lean_object* v___x_234_; 
lean_del_object(v___x_214_);
v___x_232_ = ((size_t)0ULL);
v___x_233_ = lean_usize_of_nat(v___x_219_);
v___x_234_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go_spec__0(v_discr_216_, v_alts_217_, v___x_232_, v___x_233_, v___x_220_, v_a_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_);
lean_dec_ref(v_alts_217_);
return v___x_234_;
}
}
}
}
default: 
{
lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_243_; 
v_isSharedCheck_243_ = !lean_is_exclusive(v_code_108_);
if (v_isSharedCheck_243_ == 0)
{
lean_object* v_unused_244_; 
v_unused_244_ = lean_ctor_get(v_code_108_, 0);
lean_dec(v_unused_244_);
v___x_237_ = v_code_108_;
v_isShared_238_ = v_isSharedCheck_243_;
goto v_resetjp_236_;
}
else
{
lean_dec(v_code_108_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_243_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_239_; lean_object* v___x_241_; 
v___x_239_ = lean_box(0);
if (v_isShared_238_ == 0)
{
lean_ctor_set_tag(v___x_237_, 0);
lean_ctor_set(v___x_237_, 0, v___x_239_);
v___x_241_ = v___x_237_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v___x_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go_spec__0(lean_object* v_discr_245_, lean_object* v_as_246_, size_t v_i_247_, size_t v_stop_248_, lean_object* v_b_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v___y_258_; uint8_t v___x_263_; 
v___x_263_ = lean_usize_dec_eq(v_i_247_, v_stop_248_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; 
v___x_264_ = lean_array_uget_borrowed(v_as_246_, v_i_247_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v_ctorName_265_; lean_object* v_params_266_; lean_object* v_code_267_; lean_object* v___x_268_; 
v_ctorName_265_ = lean_ctor_get(v___x_264_, 0);
v_params_266_ = lean_ctor_get(v___x_264_, 1);
v_code_267_ = lean_ctor_get(v___x_264_, 2);
lean_inc_ref(v_params_266_);
lean_inc(v_ctorName_265_);
lean_inc(v_discr_245_);
v___x_268_ = l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(v_discr_245_, v_ctorName_265_, v_params_266_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; lean_object* v___x_270_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc(v_a_269_);
lean_dec_ref_known(v___x_268_, 1);
lean_inc_ref(v_code_267_);
v___x_270_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go(v_code_267_, v___y_250_, v_a_269_, v___y_252_, v___y_253_, v___y_254_, v___y_255_);
lean_dec(v_a_269_);
v___y_258_ = v___x_270_;
goto v___jp_257_;
}
else
{
lean_object* v_a_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_278_; 
lean_dec(v_discr_245_);
v_a_271_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_278_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_278_ == 0)
{
v___x_273_ = v___x_268_;
v_isShared_274_ = v_isSharedCheck_278_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_a_271_);
lean_dec(v___x_268_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_278_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_276_; 
if (v_isShared_274_ == 0)
{
v___x_276_ = v___x_273_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v_a_271_);
v___x_276_ = v_reuseFailAlloc_277_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
return v___x_276_;
}
}
}
}
else
{
lean_object* v_code_279_; lean_object* v___x_280_; 
v_code_279_ = lean_ctor_get(v___x_264_, 0);
lean_inc_ref(v_code_279_);
v___x_280_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go(v_code_279_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_);
v___y_258_ = v___x_280_;
goto v___jp_257_;
}
}
else
{
lean_object* v___x_281_; 
lean_dec(v_discr_245_);
v___x_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_281_, 0, v_b_249_);
return v___x_281_;
}
v___jp_257_:
{
if (lean_obj_tag(v___y_258_) == 0)
{
lean_object* v_a_259_; size_t v___x_260_; size_t v___x_261_; 
v_a_259_ = lean_ctor_get(v___y_258_, 0);
lean_inc(v_a_259_);
lean_dec_ref_known(v___y_258_, 1);
v___x_260_ = ((size_t)1ULL);
v___x_261_ = lean_usize_add(v_i_247_, v___x_260_);
v_i_247_ = v___x_261_;
v_b_249_ = v_a_259_;
goto _start;
}
else
{
lean_dec(v_discr_245_);
return v___y_258_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go_spec__0___boxed(lean_object* v_discr_282_, lean_object* v_as_283_, lean_object* v_i_284_, lean_object* v_stop_285_, lean_object* v_b_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
size_t v_i_boxed_294_; size_t v_stop_boxed_295_; lean_object* v_res_296_; 
v_i_boxed_294_ = lean_unbox_usize(v_i_284_);
lean_dec(v_i_284_);
v_stop_boxed_295_ = lean_unbox_usize(v_stop_285_);
lean_dec(v_stop_285_);
v_res_296_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go_spec__0(v_discr_282_, v_as_283_, v_i_boxed_294_, v_stop_boxed_295_, v_b_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec_ref(v___y_288_);
lean_dec(v___y_287_);
lean_dec_ref(v_as_283_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go___boxed(lean_object* v_code_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go(v_code_297_, v_a_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_a_301_);
lean_dec_ref(v_a_300_);
lean_dec_ref(v_a_299_);
lean_dec(v_a_298_);
return v_res_305_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__0(void){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_306_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__1(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__0, &l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__0);
v___x_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__2(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__1, &l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__1_once, _init_l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__1);
v___x_310_ = lean_box(1);
v___x_311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
lean_ctor_set(v___x_311_, 1, v___x_309_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo(lean_object* v_code_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_318_ = lean_box(1);
v___x_319_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__2, &l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__2_once, _init_l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__2);
v___x_320_ = lean_st_mk_ref(v___x_318_);
v___x_321_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_collectJpCasesInfo_go(v_code_312_, v___x_320_, v___x_319_, v_a_313_, v_a_314_, v_a_315_, v_a_316_);
if (lean_obj_tag(v___x_321_) == 0)
{
lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_329_; 
v_isSharedCheck_329_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_329_ == 0)
{
lean_object* v_unused_330_; 
v_unused_330_ = lean_ctor_get(v___x_321_, 0);
lean_dec(v_unused_330_);
v___x_323_ = v___x_321_;
v_isShared_324_ = v_isSharedCheck_329_;
goto v_resetjp_322_;
}
else
{
lean_dec(v___x_321_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_329_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; lean_object* v___x_327_; 
v___x_325_ = lean_st_ref_get(v___x_320_);
lean_dec(v___x_320_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 0, v___x_325_);
v___x_327_ = v___x_323_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_325_);
v___x_327_ = v_reuseFailAlloc_328_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
return v___x_327_;
}
}
}
else
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
lean_dec(v___x_320_);
v_a_331_ = lean_ctor_get(v___x_321_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_321_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_321_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___boxed(lean_object* v_code_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo(v_code_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_);
lean_dec(v_a_343_);
lean_dec_ref(v_a_342_);
lean_dec(v_a_341_);
lean_dec_ref(v_a_340_);
return v_res_345_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_346_; 
v___x_346_ = l_Array_instInhabited___redArg();
return v___x_346_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__1(void){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l_Lean_Compiler_LCNF_instInhabitedCases_default__1___redArg();
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0(lean_object* v_msg_348_){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_349_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__0);
v___x_350_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__1, &l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__1_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0___closed__1);
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_349_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = lean_panic_fn_borrowed(v___x_351_, v_msg_348_);
lean_dec_ref_known(v___x_351_, 2);
return v___x_352_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__3(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_356_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__2));
v___x_357_ = lean_unsigned_to_nat(11u);
v___x_358_ = lean_unsigned_to_nat(100u);
v___x_359_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__1));
v___x_360_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__0));
v___x_361_ = l_mkPanicMessageWithDecl(v___x_360_, v___x_359_, v___x_358_, v___x_357_, v___x_356_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go(lean_object* v_code_362_, lean_object* v_decls_363_){
_start:
{
switch(lean_obj_tag(v_code_362_))
{
case 0:
{
lean_object* v_decl_364_; lean_object* v_k_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_decl_364_ = lean_ctor_get(v_code_362_, 0);
v_k_365_ = lean_ctor_get(v_code_362_, 1);
lean_inc_ref(v_decl_364_);
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v_decl_364_);
v___x_367_ = lean_array_push(v_decls_363_, v___x_366_);
v_code_362_ = v_k_365_;
v_decls_363_ = v___x_367_;
goto _start;
}
case 4:
{
lean_object* v_cases_369_; lean_object* v___x_370_; 
v_cases_369_ = lean_ctor_get(v_code_362_, 0);
lean_inc_ref(v_cases_369_);
v___x_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_370_, 0, v_decls_363_);
lean_ctor_set(v___x_370_, 1, v_cases_369_);
return v___x_370_;
}
default: 
{
lean_object* v___x_371_; lean_object* v___x_372_; 
lean_dec_ref(v_decls_363_);
v___x_371_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__3, &l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___closed__3);
v___x_372_ = l_panic___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go_spec__0(v___x_371_);
return v___x_372_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go___boxed(lean_object* v_code_373_, lean_object* v_decls_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go(v_code_373_, v_decls_374_);
lean_dec_ref(v_code_373_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases(lean_object* v_code_378_){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases___closed__0));
v___x_380_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases_go(v_code_378_, v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases___boxed(lean_object* v_code_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases(v_code_381_);
lean_dec_ref(v_code_381_);
return v_res_382_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__3(lean_object* v___x_383_, lean_object* v_as_384_, size_t v_i_385_, size_t v_stop_386_){
_start:
{
uint8_t v___x_387_; 
v___x_387_ = lean_usize_dec_eq(v_i_385_, v_stop_386_);
if (v___x_387_ == 0)
{
uint8_t v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_388_ = 0;
v___x_389_ = lean_array_uget_borrowed(v_as_384_, v_i_385_);
v___x_390_ = l_Lean_Compiler_LCNF_CodeDecl_dependsOn(v___x_388_, v___x_389_, v___x_383_);
if (v___x_390_ == 0)
{
size_t v___x_391_; size_t v___x_392_; 
v___x_391_ = ((size_t)1ULL);
v___x_392_ = lean_usize_add(v_i_385_, v___x_391_);
v_i_385_ = v___x_392_;
goto _start;
}
else
{
return v___x_390_;
}
}
else
{
uint8_t v___x_394_; 
v___x_394_ = 0;
return v___x_394_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__3___boxed(lean_object* v___x_395_, lean_object* v_as_396_, lean_object* v_i_397_, lean_object* v_stop_398_){
_start:
{
size_t v_i_boxed_399_; size_t v_stop_boxed_400_; uint8_t v_res_401_; lean_object* v_r_402_; 
v_i_boxed_399_ = lean_unbox_usize(v_i_397_);
lean_dec(v_i_397_);
v_stop_boxed_400_ = lean_unbox_usize(v_stop_398_);
lean_dec(v_stop_398_);
v_res_401_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__3(v___x_395_, v_as_396_, v_i_boxed_399_, v_stop_boxed_400_);
lean_dec_ref(v_as_396_);
lean_dec(v___x_395_);
v_r_402_ = lean_box(v_res_401_);
return v_r_402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__0(size_t v_sz_403_, size_t v_i_404_, lean_object* v_bs_405_, uint8_t v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
uint8_t v___x_413_; 
v___x_413_ = lean_usize_dec_lt(v_i_404_, v_sz_403_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; 
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v_bs_405_);
return v___x_414_;
}
else
{
uint8_t v___x_415_; lean_object* v_v_416_; lean_object* v___x_417_; lean_object* v_bs_x27_418_; lean_object* v___x_419_; 
v___x_415_ = 0;
v_v_416_ = lean_array_uget(v_bs_405_, v_i_404_);
v___x_417_ = lean_unsigned_to_nat(0u);
v_bs_x27_418_ = lean_array_uset(v_bs_405_, v_i_404_, v___x_417_);
v___x_419_ = l_Lean_Compiler_LCNF_Internalize_internalizeParam(v___x_415_, v_v_416_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_);
if (lean_obj_tag(v___x_419_) == 0)
{
lean_object* v_a_420_; size_t v___x_421_; size_t v___x_422_; lean_object* v___x_423_; 
v_a_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_a_420_);
lean_dec_ref_known(v___x_419_, 1);
v___x_421_ = ((size_t)1ULL);
v___x_422_ = lean_usize_add(v_i_404_, v___x_421_);
v___x_423_ = lean_array_uset(v_bs_x27_418_, v_i_404_, v_a_420_);
v_i_404_ = v___x_422_;
v_bs_405_ = v___x_423_;
goto _start;
}
else
{
lean_object* v_a_425_; lean_object* v___x_427_; uint8_t v_isShared_428_; uint8_t v_isSharedCheck_432_; 
lean_dec_ref(v_bs_x27_418_);
v_a_425_ = lean_ctor_get(v___x_419_, 0);
v_isSharedCheck_432_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_432_ == 0)
{
v___x_427_ = v___x_419_;
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
else
{
lean_inc(v_a_425_);
lean_dec(v___x_419_);
v___x_427_ = lean_box(0);
v_isShared_428_ = v_isSharedCheck_432_;
goto v_resetjp_426_;
}
v_resetjp_426_:
{
lean_object* v___x_430_; 
if (v_isShared_428_ == 0)
{
v___x_430_ = v___x_427_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_a_425_);
v___x_430_ = v_reuseFailAlloc_431_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
return v___x_430_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__0___boxed(lean_object* v_sz_433_, lean_object* v_i_434_, lean_object* v_bs_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
size_t v_sz_boxed_443_; size_t v_i_boxed_444_; uint8_t v___y_6091__boxed_445_; lean_object* v_res_446_; 
v_sz_boxed_443_ = lean_unbox_usize(v_sz_433_);
lean_dec(v_sz_433_);
v_i_boxed_444_ = lean_unbox_usize(v_i_434_);
lean_dec(v_i_434_);
v___y_6091__boxed_445_ = lean_unbox(v___y_436_);
v_res_446_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__0(v_sz_boxed_443_, v_i_boxed_444_, v_bs_435_, v___y_6091__boxed_445_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec(v___y_439_);
lean_dec_ref(v___y_438_);
lean_dec(v___y_437_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg___lam__0(lean_object* v_fields_447_, lean_object* v_____r_448_, lean_object* v_paramsNew_449_, uint8_t v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
size_t v_sz_457_; size_t v___x_458_; lean_object* v___x_459_; 
v_sz_457_ = lean_array_size(v_fields_447_);
v___x_458_ = ((size_t)0ULL);
v___x_459_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__0(v_sz_457_, v___x_458_, v_fields_447_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_469_; 
v_a_460_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_469_ == 0)
{
v___x_462_ = v___x_459_;
v_isShared_463_ = v_isSharedCheck_469_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_459_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_469_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_467_; 
v___x_464_ = l_Array_append___redArg(v_paramsNew_449_, v_a_460_);
lean_dec(v_a_460_);
v___x_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v___x_465_);
v___x_467_ = v___x_462_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v___x_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
else
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_477_; 
lean_dec_ref(v_paramsNew_449_);
v_a_470_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_477_ == 0)
{
v___x_472_ = v___x_459_;
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___x_459_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_475_; 
if (v_isShared_473_ == 0)
{
v___x_475_ = v___x_472_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_a_470_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg___lam__0___boxed(lean_object* v_fields_478_, lean_object* v_____r_479_, lean_object* v_paramsNew_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
uint8_t v___y_6149__boxed_488_; lean_object* v_res_489_; 
v___y_6149__boxed_488_ = lean_unbox(v___y_481_);
v_res_489_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg___lam__0(v_fields_478_, v_____r_479_, v_paramsNew_480_, v___y_6149__boxed_488_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg(lean_object* v_upperBound_490_, lean_object* v_params_491_, lean_object* v_targetParamIdx_492_, uint8_t v___y_493_, lean_object* v_fields_494_, lean_object* v_a_495_, lean_object* v_b_496_, uint8_t v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
lean_object* v_a_505_; lean_object* v___y_510_; uint8_t v___x_529_; 
v___x_529_ = lean_nat_dec_lt(v_a_495_, v_upperBound_490_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; 
lean_dec(v_a_495_);
lean_dec_ref(v_fields_494_);
v___x_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_530_, 0, v_b_496_);
return v___x_530_;
}
else
{
uint8_t v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; 
v___x_531_ = 0;
v___x_532_ = lean_array_fget_borrowed(v_params_491_, v_a_495_);
v___x_533_ = lean_nat_dec_eq(v_targetParamIdx_492_, v_a_495_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; 
lean_inc(v___x_532_);
v___x_534_ = l_Lean_Compiler_LCNF_Internalize_internalizeParam(v___x_531_, v___x_532_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_534_) == 0)
{
lean_object* v_a_535_; lean_object* v___x_536_; 
v_a_535_ = lean_ctor_get(v___x_534_, 0);
lean_inc(v_a_535_);
lean_dec_ref_known(v___x_534_, 1);
v___x_536_ = lean_array_push(v_b_496_, v_a_535_);
v_a_505_ = v___x_536_;
goto v___jp_504_;
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
lean_dec_ref(v_b_496_);
lean_dec(v_a_495_);
lean_dec_ref(v_fields_494_);
v_a_537_ = lean_ctor_get(v___x_534_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_534_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_534_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_534_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
else
{
if (v___y_493_ == 0)
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = lean_box(0);
lean_inc_ref(v_fields_494_);
v___x_546_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg___lam__0(v_fields_494_, v___x_545_, v_b_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
v___y_510_ = v___x_546_;
goto v___jp_509_;
}
else
{
lean_object* v___x_547_; 
lean_inc(v___x_532_);
v___x_547_ = l_Lean_Compiler_LCNF_Internalize_internalizeParam(v___x_531_, v___x_532_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_547_) == 0)
{
lean_object* v_a_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v_a_548_ = lean_ctor_get(v___x_547_, 0);
lean_inc(v_a_548_);
lean_dec_ref_known(v___x_547_, 1);
v___x_549_ = lean_array_push(v_b_496_, v_a_548_);
v___x_550_ = lean_box(0);
lean_inc_ref(v_fields_494_);
v___x_551_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg___lam__0(v_fields_494_, v___x_550_, v___x_549_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
v___y_510_ = v___x_551_;
goto v___jp_509_;
}
else
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
lean_dec_ref(v_b_496_);
lean_dec(v_a_495_);
lean_dec_ref(v_fields_494_);
v_a_552_ = lean_ctor_get(v___x_547_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_547_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_547_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
}
}
v___jp_504_:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = lean_unsigned_to_nat(1u);
v___x_507_ = lean_nat_add(v_a_495_, v___x_506_);
lean_dec(v_a_495_);
v_a_495_ = v___x_507_;
v_b_496_ = v_a_505_;
goto _start;
}
v___jp_509_:
{
if (lean_obj_tag(v___y_510_) == 0)
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_520_; 
v_a_511_ = lean_ctor_get(v___y_510_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v___y_510_);
if (v_isSharedCheck_520_ == 0)
{
v___x_513_ = v___y_510_;
v_isShared_514_ = v_isSharedCheck_520_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v___y_510_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_520_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
if (lean_obj_tag(v_a_511_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_517_; 
lean_dec(v_a_495_);
lean_dec_ref(v_fields_494_);
v_a_515_ = lean_ctor_get(v_a_511_, 0);
lean_inc(v_a_515_);
lean_dec_ref_known(v_a_511_, 1);
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 0, v_a_515_);
v___x_517_ = v___x_513_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
else
{
lean_object* v_a_519_; 
lean_del_object(v___x_513_);
v_a_519_ = lean_ctor_get(v_a_511_, 0);
lean_inc(v_a_519_);
lean_dec_ref_known(v_a_511_, 1);
v_a_505_ = v_a_519_;
goto v___jp_504_;
}
}
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
lean_dec(v_a_495_);
lean_dec_ref(v_fields_494_);
v_a_521_ = lean_ctor_get(v___y_510_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___y_510_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___y_510_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___y_510_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg___boxed(lean_object* v_upperBound_560_, lean_object* v_params_561_, lean_object* v_targetParamIdx_562_, lean_object* v___y_563_, lean_object* v_fields_564_, lean_object* v_a_565_, lean_object* v_b_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_){
_start:
{
uint8_t v___y_6213__boxed_574_; uint8_t v___y_6214__boxed_575_; lean_object* v_res_576_; 
v___y_6213__boxed_574_ = lean_unbox(v___y_563_);
v___y_6214__boxed_575_ = lean_unbox(v___y_567_);
v_res_576_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg(v_upperBound_560_, v_params_561_, v_targetParamIdx_562_, v___y_6213__boxed_574_, v_fields_564_, v_a_565_, v_b_566_, v___y_6214__boxed_575_, v___y_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
lean_dec(v___y_572_);
lean_dec_ref(v___y_571_);
lean_dec(v___y_570_);
lean_dec_ref(v___y_569_);
lean_dec(v___y_568_);
lean_dec(v_targetParamIdx_562_);
lean_dec_ref(v_params_561_);
lean_dec(v_upperBound_560_);
return v_res_576_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4___redArg(lean_object* v_k_577_, lean_object* v_t_578_){
_start:
{
if (lean_obj_tag(v_t_578_) == 0)
{
lean_object* v_k_579_; lean_object* v_l_580_; lean_object* v_r_581_; uint8_t v___x_582_; 
v_k_579_ = lean_ctor_get(v_t_578_, 1);
v_l_580_ = lean_ctor_get(v_t_578_, 3);
v_r_581_ = lean_ctor_get(v_t_578_, 4);
v___x_582_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_577_, v_k_579_);
switch(v___x_582_)
{
case 0:
{
v_t_578_ = v_l_580_;
goto _start;
}
case 1:
{
uint8_t v___x_584_; 
v___x_584_ = 1;
return v___x_584_;
}
default: 
{
v_t_578_ = v_r_581_;
goto _start;
}
}
}
else
{
uint8_t v___x_586_; 
v___x_586_ = 0;
return v___x_586_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4___redArg___boxed(lean_object* v_k_587_, lean_object* v_t_588_){
_start:
{
uint8_t v_res_589_; lean_object* v_r_590_; 
v_res_589_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4___redArg(v_k_587_, v_t_588_);
lean_dec(v_t_588_);
lean_dec(v_k_587_);
v_r_590_ = lean_box(v_res_589_);
return v_r_590_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__5___redArg(lean_object* v_k_591_, lean_object* v_v_592_, lean_object* v_t_593_){
_start:
{
if (lean_obj_tag(v_t_593_) == 0)
{
lean_object* v_size_594_; lean_object* v_k_595_; lean_object* v_v_596_; lean_object* v_l_597_; lean_object* v_r_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_878_; 
v_size_594_ = lean_ctor_get(v_t_593_, 0);
v_k_595_ = lean_ctor_get(v_t_593_, 1);
v_v_596_ = lean_ctor_get(v_t_593_, 2);
v_l_597_ = lean_ctor_get(v_t_593_, 3);
v_r_598_ = lean_ctor_get(v_t_593_, 4);
v_isSharedCheck_878_ = !lean_is_exclusive(v_t_593_);
if (v_isSharedCheck_878_ == 0)
{
v___x_600_ = v_t_593_;
v_isShared_601_ = v_isSharedCheck_878_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_r_598_);
lean_inc(v_l_597_);
lean_inc(v_v_596_);
lean_inc(v_k_595_);
lean_inc(v_size_594_);
lean_dec(v_t_593_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_878_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
uint8_t v___x_602_; 
v___x_602_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_591_, v_k_595_);
switch(v___x_602_)
{
case 0:
{
lean_object* v_impl_603_; lean_object* v___x_604_; 
lean_dec(v_size_594_);
v_impl_603_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__5___redArg(v_k_591_, v_v_592_, v_l_597_);
v___x_604_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_598_) == 0)
{
lean_object* v_size_605_; lean_object* v_size_606_; lean_object* v_k_607_; lean_object* v_v_608_; lean_object* v_l_609_; lean_object* v_r_610_; lean_object* v___x_611_; lean_object* v___x_612_; uint8_t v___x_613_; 
v_size_605_ = lean_ctor_get(v_r_598_, 0);
v_size_606_ = lean_ctor_get(v_impl_603_, 0);
lean_inc(v_size_606_);
v_k_607_ = lean_ctor_get(v_impl_603_, 1);
lean_inc(v_k_607_);
v_v_608_ = lean_ctor_get(v_impl_603_, 2);
lean_inc(v_v_608_);
v_l_609_ = lean_ctor_get(v_impl_603_, 3);
lean_inc(v_l_609_);
v_r_610_ = lean_ctor_get(v_impl_603_, 4);
lean_inc(v_r_610_);
v___x_611_ = lean_unsigned_to_nat(3u);
v___x_612_ = lean_nat_mul(v___x_611_, v_size_605_);
v___x_613_ = lean_nat_dec_lt(v___x_612_, v_size_606_);
lean_dec(v___x_612_);
if (v___x_613_ == 0)
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_617_; 
lean_dec(v_r_610_);
lean_dec(v_l_609_);
lean_dec(v_v_608_);
lean_dec(v_k_607_);
v___x_614_ = lean_nat_add(v___x_604_, v_size_606_);
lean_dec(v_size_606_);
v___x_615_ = lean_nat_add(v___x_614_, v_size_605_);
lean_dec(v___x_614_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 3, v_impl_603_);
lean_ctor_set(v___x_600_, 0, v___x_615_);
v___x_617_ = v___x_600_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_615_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_618_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_618_, 3, v_impl_603_);
lean_ctor_set(v_reuseFailAlloc_618_, 4, v_r_598_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
else
{
lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_684_; 
v_isSharedCheck_684_ = !lean_is_exclusive(v_impl_603_);
if (v_isSharedCheck_684_ == 0)
{
lean_object* v_unused_685_; lean_object* v_unused_686_; lean_object* v_unused_687_; lean_object* v_unused_688_; lean_object* v_unused_689_; 
v_unused_685_ = lean_ctor_get(v_impl_603_, 4);
lean_dec(v_unused_685_);
v_unused_686_ = lean_ctor_get(v_impl_603_, 3);
lean_dec(v_unused_686_);
v_unused_687_ = lean_ctor_get(v_impl_603_, 2);
lean_dec(v_unused_687_);
v_unused_688_ = lean_ctor_get(v_impl_603_, 1);
lean_dec(v_unused_688_);
v_unused_689_ = lean_ctor_get(v_impl_603_, 0);
lean_dec(v_unused_689_);
v___x_620_ = v_impl_603_;
v_isShared_621_ = v_isSharedCheck_684_;
goto v_resetjp_619_;
}
else
{
lean_dec(v_impl_603_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_684_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v_size_622_; lean_object* v_size_623_; lean_object* v_k_624_; lean_object* v_v_625_; lean_object* v_l_626_; lean_object* v_r_627_; lean_object* v___x_628_; lean_object* v___x_629_; uint8_t v___x_630_; 
v_size_622_ = lean_ctor_get(v_l_609_, 0);
v_size_623_ = lean_ctor_get(v_r_610_, 0);
v_k_624_ = lean_ctor_get(v_r_610_, 1);
v_v_625_ = lean_ctor_get(v_r_610_, 2);
v_l_626_ = lean_ctor_get(v_r_610_, 3);
v_r_627_ = lean_ctor_get(v_r_610_, 4);
v___x_628_ = lean_unsigned_to_nat(2u);
v___x_629_ = lean_nat_mul(v___x_628_, v_size_622_);
v___x_630_ = lean_nat_dec_lt(v_size_623_, v___x_629_);
lean_dec(v___x_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_659_; 
lean_inc(v_r_627_);
lean_inc(v_l_626_);
lean_inc(v_v_625_);
lean_inc(v_k_624_);
v_isSharedCheck_659_ = !lean_is_exclusive(v_r_610_);
if (v_isSharedCheck_659_ == 0)
{
lean_object* v_unused_660_; lean_object* v_unused_661_; lean_object* v_unused_662_; lean_object* v_unused_663_; lean_object* v_unused_664_; 
v_unused_660_ = lean_ctor_get(v_r_610_, 4);
lean_dec(v_unused_660_);
v_unused_661_ = lean_ctor_get(v_r_610_, 3);
lean_dec(v_unused_661_);
v_unused_662_ = lean_ctor_get(v_r_610_, 2);
lean_dec(v_unused_662_);
v_unused_663_ = lean_ctor_get(v_r_610_, 1);
lean_dec(v_unused_663_);
v_unused_664_ = lean_ctor_get(v_r_610_, 0);
lean_dec(v_unused_664_);
v___x_632_ = v_r_610_;
v_isShared_633_ = v_isSharedCheck_659_;
goto v_resetjp_631_;
}
else
{
lean_dec(v_r_610_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_659_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___x_647_; lean_object* v___y_649_; 
v___x_634_ = lean_nat_add(v___x_604_, v_size_606_);
lean_dec(v_size_606_);
v___x_635_ = lean_nat_add(v___x_634_, v_size_605_);
lean_dec(v___x_634_);
v___x_647_ = lean_nat_add(v___x_604_, v_size_622_);
if (lean_obj_tag(v_l_626_) == 0)
{
lean_object* v_size_657_; 
v_size_657_ = lean_ctor_get(v_l_626_, 0);
lean_inc(v_size_657_);
v___y_649_ = v_size_657_;
goto v___jp_648_;
}
else
{
lean_object* v___x_658_; 
v___x_658_ = lean_unsigned_to_nat(0u);
v___y_649_ = v___x_658_;
goto v___jp_648_;
}
v___jp_636_:
{
lean_object* v___x_640_; lean_object* v___x_642_; 
v___x_640_ = lean_nat_add(v___y_637_, v___y_639_);
lean_dec(v___y_639_);
lean_dec(v___y_637_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 4, v_r_598_);
lean_ctor_set(v___x_632_, 3, v_r_627_);
lean_ctor_set(v___x_632_, 2, v_v_596_);
lean_ctor_set(v___x_632_, 1, v_k_595_);
lean_ctor_set(v___x_632_, 0, v___x_640_);
v___x_642_ = v___x_632_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_640_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_646_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_646_, 3, v_r_627_);
lean_ctor_set(v_reuseFailAlloc_646_, 4, v_r_598_);
v___x_642_ = v_reuseFailAlloc_646_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
lean_object* v___x_644_; 
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v___x_642_);
lean_ctor_set(v___x_620_, 3, v___y_638_);
lean_ctor_set(v___x_620_, 2, v_v_625_);
lean_ctor_set(v___x_620_, 1, v_k_624_);
lean_ctor_set(v___x_620_, 0, v___x_635_);
v___x_644_ = v___x_620_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v_k_624_);
lean_ctor_set(v_reuseFailAlloc_645_, 2, v_v_625_);
lean_ctor_set(v_reuseFailAlloc_645_, 3, v___y_638_);
lean_ctor_set(v_reuseFailAlloc_645_, 4, v___x_642_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
v___jp_648_:
{
lean_object* v___x_650_; lean_object* v___x_652_; 
v___x_650_ = lean_nat_add(v___x_647_, v___y_649_);
lean_dec(v___y_649_);
lean_dec(v___x_647_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v_l_626_);
lean_ctor_set(v___x_600_, 3, v_l_609_);
lean_ctor_set(v___x_600_, 2, v_v_608_);
lean_ctor_set(v___x_600_, 1, v_k_607_);
lean_ctor_set(v___x_600_, 0, v___x_650_);
v___x_652_ = v___x_600_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_650_);
lean_ctor_set(v_reuseFailAlloc_656_, 1, v_k_607_);
lean_ctor_set(v_reuseFailAlloc_656_, 2, v_v_608_);
lean_ctor_set(v_reuseFailAlloc_656_, 3, v_l_609_);
lean_ctor_set(v_reuseFailAlloc_656_, 4, v_l_626_);
v___x_652_ = v_reuseFailAlloc_656_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
lean_object* v___x_653_; 
v___x_653_ = lean_nat_add(v___x_604_, v_size_605_);
if (lean_obj_tag(v_r_627_) == 0)
{
lean_object* v_size_654_; 
v_size_654_ = lean_ctor_get(v_r_627_, 0);
lean_inc(v_size_654_);
v___y_637_ = v___x_653_;
v___y_638_ = v___x_652_;
v___y_639_ = v_size_654_;
goto v___jp_636_;
}
else
{
lean_object* v___x_655_; 
v___x_655_ = lean_unsigned_to_nat(0u);
v___y_637_ = v___x_653_;
v___y_638_ = v___x_652_;
v___y_639_ = v___x_655_;
goto v___jp_636_;
}
}
}
}
}
else
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_670_; 
lean_del_object(v___x_600_);
v___x_665_ = lean_nat_add(v___x_604_, v_size_606_);
lean_dec(v_size_606_);
v___x_666_ = lean_nat_add(v___x_665_, v_size_605_);
lean_dec(v___x_665_);
v___x_667_ = lean_nat_add(v___x_604_, v_size_605_);
v___x_668_ = lean_nat_add(v___x_667_, v_size_623_);
lean_dec(v___x_667_);
lean_inc_ref(v_r_598_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 4, v_r_598_);
lean_ctor_set(v___x_620_, 3, v_r_610_);
lean_ctor_set(v___x_620_, 2, v_v_596_);
lean_ctor_set(v___x_620_, 1, v_k_595_);
lean_ctor_set(v___x_620_, 0, v___x_668_);
v___x_670_ = v___x_620_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v___x_668_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_683_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_683_, 3, v_r_610_);
lean_ctor_set(v_reuseFailAlloc_683_, 4, v_r_598_);
v___x_670_ = v_reuseFailAlloc_683_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
v_isSharedCheck_677_ = !lean_is_exclusive(v_r_598_);
if (v_isSharedCheck_677_ == 0)
{
lean_object* v_unused_678_; lean_object* v_unused_679_; lean_object* v_unused_680_; lean_object* v_unused_681_; lean_object* v_unused_682_; 
v_unused_678_ = lean_ctor_get(v_r_598_, 4);
lean_dec(v_unused_678_);
v_unused_679_ = lean_ctor_get(v_r_598_, 3);
lean_dec(v_unused_679_);
v_unused_680_ = lean_ctor_get(v_r_598_, 2);
lean_dec(v_unused_680_);
v_unused_681_ = lean_ctor_get(v_r_598_, 1);
lean_dec(v_unused_681_);
v_unused_682_ = lean_ctor_get(v_r_598_, 0);
lean_dec(v_unused_682_);
v___x_672_ = v_r_598_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_dec(v_r_598_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 4, v___x_670_);
lean_ctor_set(v___x_672_, 3, v_l_609_);
lean_ctor_set(v___x_672_, 2, v_v_608_);
lean_ctor_set(v___x_672_, 1, v_k_607_);
lean_ctor_set(v___x_672_, 0, v___x_666_);
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_666_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v_k_607_);
lean_ctor_set(v_reuseFailAlloc_676_, 2, v_v_608_);
lean_ctor_set(v_reuseFailAlloc_676_, 3, v_l_609_);
lean_ctor_set(v_reuseFailAlloc_676_, 4, v___x_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_690_; 
v_l_690_ = lean_ctor_get(v_impl_603_, 3);
lean_inc(v_l_690_);
if (lean_obj_tag(v_l_690_) == 0)
{
lean_object* v_r_691_; lean_object* v_k_692_; lean_object* v_v_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_704_; 
v_r_691_ = lean_ctor_get(v_impl_603_, 4);
v_k_692_ = lean_ctor_get(v_impl_603_, 1);
v_v_693_ = lean_ctor_get(v_impl_603_, 2);
v_isSharedCheck_704_ = !lean_is_exclusive(v_impl_603_);
if (v_isSharedCheck_704_ == 0)
{
lean_object* v_unused_705_; lean_object* v_unused_706_; 
v_unused_705_ = lean_ctor_get(v_impl_603_, 3);
lean_dec(v_unused_705_);
v_unused_706_ = lean_ctor_get(v_impl_603_, 0);
lean_dec(v_unused_706_);
v___x_695_ = v_impl_603_;
v_isShared_696_ = v_isSharedCheck_704_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_r_691_);
lean_inc(v_v_693_);
lean_inc(v_k_692_);
lean_dec(v_impl_603_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_704_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_697_; lean_object* v___x_699_; 
v___x_697_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_691_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 3, v_r_691_);
lean_ctor_set(v___x_695_, 2, v_v_596_);
lean_ctor_set(v___x_695_, 1, v_k_595_);
lean_ctor_set(v___x_695_, 0, v___x_604_);
v___x_699_ = v___x_695_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_703_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_703_, 3, v_r_691_);
lean_ctor_set(v_reuseFailAlloc_703_, 4, v_r_691_);
v___x_699_ = v_reuseFailAlloc_703_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
lean_object* v___x_701_; 
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v___x_699_);
lean_ctor_set(v___x_600_, 3, v_l_690_);
lean_ctor_set(v___x_600_, 2, v_v_693_);
lean_ctor_set(v___x_600_, 1, v_k_692_);
lean_ctor_set(v___x_600_, 0, v___x_697_);
v___x_701_ = v___x_600_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v___x_697_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v_k_692_);
lean_ctor_set(v_reuseFailAlloc_702_, 2, v_v_693_);
lean_ctor_set(v_reuseFailAlloc_702_, 3, v_l_690_);
lean_ctor_set(v_reuseFailAlloc_702_, 4, v___x_699_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
else
{
lean_object* v_r_707_; 
v_r_707_ = lean_ctor_get(v_impl_603_, 4);
lean_inc(v_r_707_);
if (lean_obj_tag(v_r_707_) == 0)
{
lean_object* v_k_708_; lean_object* v_v_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_732_; 
v_k_708_ = lean_ctor_get(v_impl_603_, 1);
v_v_709_ = lean_ctor_get(v_impl_603_, 2);
v_isSharedCheck_732_ = !lean_is_exclusive(v_impl_603_);
if (v_isSharedCheck_732_ == 0)
{
lean_object* v_unused_733_; lean_object* v_unused_734_; lean_object* v_unused_735_; 
v_unused_733_ = lean_ctor_get(v_impl_603_, 4);
lean_dec(v_unused_733_);
v_unused_734_ = lean_ctor_get(v_impl_603_, 3);
lean_dec(v_unused_734_);
v_unused_735_ = lean_ctor_get(v_impl_603_, 0);
lean_dec(v_unused_735_);
v___x_711_ = v_impl_603_;
v_isShared_712_ = v_isSharedCheck_732_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_v_709_);
lean_inc(v_k_708_);
lean_dec(v_impl_603_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_732_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v_k_713_; lean_object* v_v_714_; lean_object* v___x_716_; uint8_t v_isShared_717_; uint8_t v_isSharedCheck_728_; 
v_k_713_ = lean_ctor_get(v_r_707_, 1);
v_v_714_ = lean_ctor_get(v_r_707_, 2);
v_isSharedCheck_728_ = !lean_is_exclusive(v_r_707_);
if (v_isSharedCheck_728_ == 0)
{
lean_object* v_unused_729_; lean_object* v_unused_730_; lean_object* v_unused_731_; 
v_unused_729_ = lean_ctor_get(v_r_707_, 4);
lean_dec(v_unused_729_);
v_unused_730_ = lean_ctor_get(v_r_707_, 3);
lean_dec(v_unused_730_);
v_unused_731_ = lean_ctor_get(v_r_707_, 0);
lean_dec(v_unused_731_);
v___x_716_ = v_r_707_;
v_isShared_717_ = v_isSharedCheck_728_;
goto v_resetjp_715_;
}
else
{
lean_inc(v_v_714_);
lean_inc(v_k_713_);
lean_dec(v_r_707_);
v___x_716_ = lean_box(0);
v_isShared_717_ = v_isSharedCheck_728_;
goto v_resetjp_715_;
}
v_resetjp_715_:
{
lean_object* v___x_718_; lean_object* v___x_720_; 
v___x_718_ = lean_unsigned_to_nat(3u);
if (v_isShared_717_ == 0)
{
lean_ctor_set(v___x_716_, 4, v_l_690_);
lean_ctor_set(v___x_716_, 3, v_l_690_);
lean_ctor_set(v___x_716_, 2, v_v_709_);
lean_ctor_set(v___x_716_, 1, v_k_708_);
lean_ctor_set(v___x_716_, 0, v___x_604_);
v___x_720_ = v___x_716_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_k_708_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v_v_709_);
lean_ctor_set(v_reuseFailAlloc_727_, 3, v_l_690_);
lean_ctor_set(v_reuseFailAlloc_727_, 4, v_l_690_);
v___x_720_ = v_reuseFailAlloc_727_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_object* v___x_722_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 4, v_l_690_);
lean_ctor_set(v___x_711_, 2, v_v_596_);
lean_ctor_set(v___x_711_, 1, v_k_595_);
lean_ctor_set(v___x_711_, 0, v___x_604_);
v___x_722_ = v___x_711_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_604_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_726_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_726_, 3, v_l_690_);
lean_ctor_set(v_reuseFailAlloc_726_, 4, v_l_690_);
v___x_722_ = v_reuseFailAlloc_726_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_724_; 
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v___x_722_);
lean_ctor_set(v___x_600_, 3, v___x_720_);
lean_ctor_set(v___x_600_, 2, v_v_714_);
lean_ctor_set(v___x_600_, 1, v_k_713_);
lean_ctor_set(v___x_600_, 0, v___x_718_);
v___x_724_ = v___x_600_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_718_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v_k_713_);
lean_ctor_set(v_reuseFailAlloc_725_, 2, v_v_714_);
lean_ctor_set(v_reuseFailAlloc_725_, 3, v___x_720_);
lean_ctor_set(v_reuseFailAlloc_725_, 4, v___x_722_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
}
}
}
else
{
lean_object* v___x_736_; lean_object* v___x_738_; 
v___x_736_ = lean_unsigned_to_nat(2u);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v_r_707_);
lean_ctor_set(v___x_600_, 3, v_impl_603_);
lean_ctor_set(v___x_600_, 0, v___x_736_);
v___x_738_ = v___x_600_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v___x_736_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_739_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_739_, 3, v_impl_603_);
lean_ctor_set(v_reuseFailAlloc_739_, 4, v_r_707_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
}
case 1:
{
lean_object* v___x_741_; 
lean_dec(v_v_596_);
lean_dec(v_k_595_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 2, v_v_592_);
lean_ctor_set(v___x_600_, 1, v_k_591_);
v___x_741_ = v___x_600_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_size_594_);
lean_ctor_set(v_reuseFailAlloc_742_, 1, v_k_591_);
lean_ctor_set(v_reuseFailAlloc_742_, 2, v_v_592_);
lean_ctor_set(v_reuseFailAlloc_742_, 3, v_l_597_);
lean_ctor_set(v_reuseFailAlloc_742_, 4, v_r_598_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
default: 
{
lean_object* v_impl_743_; lean_object* v___x_744_; 
lean_dec(v_size_594_);
v_impl_743_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__5___redArg(v_k_591_, v_v_592_, v_r_598_);
v___x_744_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_597_) == 0)
{
lean_object* v_size_745_; lean_object* v_size_746_; lean_object* v_k_747_; lean_object* v_v_748_; lean_object* v_l_749_; lean_object* v_r_750_; lean_object* v___x_751_; lean_object* v___x_752_; uint8_t v___x_753_; 
v_size_745_ = lean_ctor_get(v_l_597_, 0);
v_size_746_ = lean_ctor_get(v_impl_743_, 0);
lean_inc(v_size_746_);
v_k_747_ = lean_ctor_get(v_impl_743_, 1);
lean_inc(v_k_747_);
v_v_748_ = lean_ctor_get(v_impl_743_, 2);
lean_inc(v_v_748_);
v_l_749_ = lean_ctor_get(v_impl_743_, 3);
lean_inc(v_l_749_);
v_r_750_ = lean_ctor_get(v_impl_743_, 4);
lean_inc(v_r_750_);
v___x_751_ = lean_unsigned_to_nat(3u);
v___x_752_ = lean_nat_mul(v___x_751_, v_size_745_);
v___x_753_ = lean_nat_dec_lt(v___x_752_, v_size_746_);
lean_dec(v___x_752_);
if (v___x_753_ == 0)
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; 
lean_dec(v_r_750_);
lean_dec(v_l_749_);
lean_dec(v_v_748_);
lean_dec(v_k_747_);
v___x_754_ = lean_nat_add(v___x_744_, v_size_745_);
v___x_755_ = lean_nat_add(v___x_754_, v_size_746_);
lean_dec(v_size_746_);
lean_dec(v___x_754_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v_impl_743_);
lean_ctor_set(v___x_600_, 0, v___x_755_);
v___x_757_ = v___x_600_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_755_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_758_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_758_, 3, v_l_597_);
lean_ctor_set(v_reuseFailAlloc_758_, 4, v_impl_743_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
else
{
lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_822_; 
v_isSharedCheck_822_ = !lean_is_exclusive(v_impl_743_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; lean_object* v_unused_824_; lean_object* v_unused_825_; lean_object* v_unused_826_; lean_object* v_unused_827_; 
v_unused_823_ = lean_ctor_get(v_impl_743_, 4);
lean_dec(v_unused_823_);
v_unused_824_ = lean_ctor_get(v_impl_743_, 3);
lean_dec(v_unused_824_);
v_unused_825_ = lean_ctor_get(v_impl_743_, 2);
lean_dec(v_unused_825_);
v_unused_826_ = lean_ctor_get(v_impl_743_, 1);
lean_dec(v_unused_826_);
v_unused_827_ = lean_ctor_get(v_impl_743_, 0);
lean_dec(v_unused_827_);
v___x_760_ = v_impl_743_;
v_isShared_761_ = v_isSharedCheck_822_;
goto v_resetjp_759_;
}
else
{
lean_dec(v_impl_743_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_822_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v_size_762_; lean_object* v_k_763_; lean_object* v_v_764_; lean_object* v_l_765_; lean_object* v_r_766_; lean_object* v_size_767_; lean_object* v___x_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v_size_762_ = lean_ctor_get(v_l_749_, 0);
v_k_763_ = lean_ctor_get(v_l_749_, 1);
v_v_764_ = lean_ctor_get(v_l_749_, 2);
v_l_765_ = lean_ctor_get(v_l_749_, 3);
v_r_766_ = lean_ctor_get(v_l_749_, 4);
v_size_767_ = lean_ctor_get(v_r_750_, 0);
v___x_768_ = lean_unsigned_to_nat(2u);
v___x_769_ = lean_nat_mul(v___x_768_, v_size_767_);
v___x_770_ = lean_nat_dec_lt(v_size_762_, v___x_769_);
lean_dec(v___x_769_);
if (v___x_770_ == 0)
{
lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_798_; 
lean_inc(v_r_766_);
lean_inc(v_l_765_);
lean_inc(v_v_764_);
lean_inc(v_k_763_);
v_isSharedCheck_798_ = !lean_is_exclusive(v_l_749_);
if (v_isSharedCheck_798_ == 0)
{
lean_object* v_unused_799_; lean_object* v_unused_800_; lean_object* v_unused_801_; lean_object* v_unused_802_; lean_object* v_unused_803_; 
v_unused_799_ = lean_ctor_get(v_l_749_, 4);
lean_dec(v_unused_799_);
v_unused_800_ = lean_ctor_get(v_l_749_, 3);
lean_dec(v_unused_800_);
v_unused_801_ = lean_ctor_get(v_l_749_, 2);
lean_dec(v_unused_801_);
v_unused_802_ = lean_ctor_get(v_l_749_, 1);
lean_dec(v_unused_802_);
v_unused_803_ = lean_ctor_get(v_l_749_, 0);
lean_dec(v_unused_803_);
v___x_772_ = v_l_749_;
v_isShared_773_ = v_isSharedCheck_798_;
goto v_resetjp_771_;
}
else
{
lean_dec(v_l_749_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_798_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___y_777_; lean_object* v___y_778_; lean_object* v___y_779_; lean_object* v___y_788_; 
v___x_774_ = lean_nat_add(v___x_744_, v_size_745_);
v___x_775_ = lean_nat_add(v___x_774_, v_size_746_);
lean_dec(v_size_746_);
if (lean_obj_tag(v_l_765_) == 0)
{
lean_object* v_size_796_; 
v_size_796_ = lean_ctor_get(v_l_765_, 0);
lean_inc(v_size_796_);
v___y_788_ = v_size_796_;
goto v___jp_787_;
}
else
{
lean_object* v___x_797_; 
v___x_797_ = lean_unsigned_to_nat(0u);
v___y_788_ = v___x_797_;
goto v___jp_787_;
}
v___jp_776_:
{
lean_object* v___x_780_; lean_object* v___x_782_; 
v___x_780_ = lean_nat_add(v___y_778_, v___y_779_);
lean_dec(v___y_779_);
lean_dec(v___y_778_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 4, v_r_750_);
lean_ctor_set(v___x_772_, 3, v_r_766_);
lean_ctor_set(v___x_772_, 2, v_v_748_);
lean_ctor_set(v___x_772_, 1, v_k_747_);
lean_ctor_set(v___x_772_, 0, v___x_780_);
v___x_782_ = v___x_772_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_780_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v_k_747_);
lean_ctor_set(v_reuseFailAlloc_786_, 2, v_v_748_);
lean_ctor_set(v_reuseFailAlloc_786_, 3, v_r_766_);
lean_ctor_set(v_reuseFailAlloc_786_, 4, v_r_750_);
v___x_782_ = v_reuseFailAlloc_786_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
lean_object* v___x_784_; 
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 4, v___x_782_);
lean_ctor_set(v___x_760_, 3, v___y_777_);
lean_ctor_set(v___x_760_, 2, v_v_764_);
lean_ctor_set(v___x_760_, 1, v_k_763_);
lean_ctor_set(v___x_760_, 0, v___x_775_);
v___x_784_ = v___x_760_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_785_, 1, v_k_763_);
lean_ctor_set(v_reuseFailAlloc_785_, 2, v_v_764_);
lean_ctor_set(v_reuseFailAlloc_785_, 3, v___y_777_);
lean_ctor_set(v_reuseFailAlloc_785_, 4, v___x_782_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
v___jp_787_:
{
lean_object* v___x_789_; lean_object* v___x_791_; 
v___x_789_ = lean_nat_add(v___x_774_, v___y_788_);
lean_dec(v___y_788_);
lean_dec(v___x_774_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v_l_765_);
lean_ctor_set(v___x_600_, 0, v___x_789_);
v___x_791_ = v___x_600_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_789_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_795_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_795_, 3, v_l_597_);
lean_ctor_set(v_reuseFailAlloc_795_, 4, v_l_765_);
v___x_791_ = v_reuseFailAlloc_795_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
lean_object* v___x_792_; 
v___x_792_ = lean_nat_add(v___x_744_, v_size_767_);
if (lean_obj_tag(v_r_766_) == 0)
{
lean_object* v_size_793_; 
v_size_793_ = lean_ctor_get(v_r_766_, 0);
lean_inc(v_size_793_);
v___y_777_ = v___x_791_;
v___y_778_ = v___x_792_;
v___y_779_ = v_size_793_;
goto v___jp_776_;
}
else
{
lean_object* v___x_794_; 
v___x_794_ = lean_unsigned_to_nat(0u);
v___y_777_ = v___x_791_;
v___y_778_ = v___x_792_;
v___y_779_ = v___x_794_;
goto v___jp_776_;
}
}
}
}
}
else
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_808_; 
lean_del_object(v___x_600_);
v___x_804_ = lean_nat_add(v___x_744_, v_size_745_);
v___x_805_ = lean_nat_add(v___x_804_, v_size_746_);
lean_dec(v_size_746_);
v___x_806_ = lean_nat_add(v___x_804_, v_size_762_);
lean_dec(v___x_804_);
lean_inc_ref(v_l_597_);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 4, v_l_749_);
lean_ctor_set(v___x_760_, 3, v_l_597_);
lean_ctor_set(v___x_760_, 2, v_v_596_);
lean_ctor_set(v___x_760_, 1, v_k_595_);
lean_ctor_set(v___x_760_, 0, v___x_806_);
v___x_808_ = v___x_760_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v___x_806_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_821_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_821_, 3, v_l_597_);
lean_ctor_set(v_reuseFailAlloc_821_, 4, v_l_749_);
v___x_808_ = v_reuseFailAlloc_821_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
v_isSharedCheck_815_ = !lean_is_exclusive(v_l_597_);
if (v_isSharedCheck_815_ == 0)
{
lean_object* v_unused_816_; lean_object* v_unused_817_; lean_object* v_unused_818_; lean_object* v_unused_819_; lean_object* v_unused_820_; 
v_unused_816_ = lean_ctor_get(v_l_597_, 4);
lean_dec(v_unused_816_);
v_unused_817_ = lean_ctor_get(v_l_597_, 3);
lean_dec(v_unused_817_);
v_unused_818_ = lean_ctor_get(v_l_597_, 2);
lean_dec(v_unused_818_);
v_unused_819_ = lean_ctor_get(v_l_597_, 1);
lean_dec(v_unused_819_);
v_unused_820_ = lean_ctor_get(v_l_597_, 0);
lean_dec(v_unused_820_);
v___x_810_ = v_l_597_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_dec(v_l_597_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 4, v_r_750_);
lean_ctor_set(v___x_810_, 3, v___x_808_);
lean_ctor_set(v___x_810_, 2, v_v_748_);
lean_ctor_set(v___x_810_, 1, v_k_747_);
lean_ctor_set(v___x_810_, 0, v___x_805_);
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_805_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v_k_747_);
lean_ctor_set(v_reuseFailAlloc_814_, 2, v_v_748_);
lean_ctor_set(v_reuseFailAlloc_814_, 3, v___x_808_);
lean_ctor_set(v_reuseFailAlloc_814_, 4, v_r_750_);
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
}
}
else
{
lean_object* v_l_828_; 
v_l_828_ = lean_ctor_get(v_impl_743_, 3);
lean_inc(v_l_828_);
if (lean_obj_tag(v_l_828_) == 0)
{
lean_object* v_r_829_; lean_object* v_k_830_; lean_object* v_v_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_854_; 
v_r_829_ = lean_ctor_get(v_impl_743_, 4);
v_k_830_ = lean_ctor_get(v_impl_743_, 1);
v_v_831_ = lean_ctor_get(v_impl_743_, 2);
v_isSharedCheck_854_ = !lean_is_exclusive(v_impl_743_);
if (v_isSharedCheck_854_ == 0)
{
lean_object* v_unused_855_; lean_object* v_unused_856_; 
v_unused_855_ = lean_ctor_get(v_impl_743_, 3);
lean_dec(v_unused_855_);
v_unused_856_ = lean_ctor_get(v_impl_743_, 0);
lean_dec(v_unused_856_);
v___x_833_ = v_impl_743_;
v_isShared_834_ = v_isSharedCheck_854_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_r_829_);
lean_inc(v_v_831_);
lean_inc(v_k_830_);
lean_dec(v_impl_743_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_854_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v_k_835_; lean_object* v_v_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_850_; 
v_k_835_ = lean_ctor_get(v_l_828_, 1);
v_v_836_ = lean_ctor_get(v_l_828_, 2);
v_isSharedCheck_850_ = !lean_is_exclusive(v_l_828_);
if (v_isSharedCheck_850_ == 0)
{
lean_object* v_unused_851_; lean_object* v_unused_852_; lean_object* v_unused_853_; 
v_unused_851_ = lean_ctor_get(v_l_828_, 4);
lean_dec(v_unused_851_);
v_unused_852_ = lean_ctor_get(v_l_828_, 3);
lean_dec(v_unused_852_);
v_unused_853_ = lean_ctor_get(v_l_828_, 0);
lean_dec(v_unused_853_);
v___x_838_ = v_l_828_;
v_isShared_839_ = v_isSharedCheck_850_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_v_836_);
lean_inc(v_k_835_);
lean_dec(v_l_828_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_850_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_840_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_829_, 2);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 4, v_r_829_);
lean_ctor_set(v___x_838_, 3, v_r_829_);
lean_ctor_set(v___x_838_, 2, v_v_596_);
lean_ctor_set(v___x_838_, 1, v_k_595_);
lean_ctor_set(v___x_838_, 0, v___x_744_);
v___x_842_ = v___x_838_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_849_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_849_, 3, v_r_829_);
lean_ctor_set(v_reuseFailAlloc_849_, 4, v_r_829_);
v___x_842_ = v_reuseFailAlloc_849_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_844_; 
lean_inc(v_r_829_);
if (v_isShared_834_ == 0)
{
lean_ctor_set(v___x_833_, 3, v_r_829_);
lean_ctor_set(v___x_833_, 0, v___x_744_);
v___x_844_ = v___x_833_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v_k_830_);
lean_ctor_set(v_reuseFailAlloc_848_, 2, v_v_831_);
lean_ctor_set(v_reuseFailAlloc_848_, 3, v_r_829_);
lean_ctor_set(v_reuseFailAlloc_848_, 4, v_r_829_);
v___x_844_ = v_reuseFailAlloc_848_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
lean_object* v___x_846_; 
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v___x_844_);
lean_ctor_set(v___x_600_, 3, v___x_842_);
lean_ctor_set(v___x_600_, 2, v_v_836_);
lean_ctor_set(v___x_600_, 1, v_k_835_);
lean_ctor_set(v___x_600_, 0, v___x_840_);
v___x_846_ = v___x_600_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_840_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v_k_835_);
lean_ctor_set(v_reuseFailAlloc_847_, 2, v_v_836_);
lean_ctor_set(v_reuseFailAlloc_847_, 3, v___x_842_);
lean_ctor_set(v_reuseFailAlloc_847_, 4, v___x_844_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
}
else
{
lean_object* v_r_857_; 
v_r_857_ = lean_ctor_get(v_impl_743_, 4);
lean_inc(v_r_857_);
if (lean_obj_tag(v_r_857_) == 0)
{
lean_object* v_k_858_; lean_object* v_v_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_870_; 
v_k_858_ = lean_ctor_get(v_impl_743_, 1);
v_v_859_ = lean_ctor_get(v_impl_743_, 2);
v_isSharedCheck_870_ = !lean_is_exclusive(v_impl_743_);
if (v_isSharedCheck_870_ == 0)
{
lean_object* v_unused_871_; lean_object* v_unused_872_; lean_object* v_unused_873_; 
v_unused_871_ = lean_ctor_get(v_impl_743_, 4);
lean_dec(v_unused_871_);
v_unused_872_ = lean_ctor_get(v_impl_743_, 3);
lean_dec(v_unused_872_);
v_unused_873_ = lean_ctor_get(v_impl_743_, 0);
lean_dec(v_unused_873_);
v___x_861_ = v_impl_743_;
v_isShared_862_ = v_isSharedCheck_870_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_v_859_);
lean_inc(v_k_858_);
lean_dec(v_impl_743_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_870_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_863_; lean_object* v___x_865_; 
v___x_863_ = lean_unsigned_to_nat(3u);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 4, v_l_828_);
lean_ctor_set(v___x_861_, 2, v_v_596_);
lean_ctor_set(v___x_861_, 1, v_k_595_);
lean_ctor_set(v___x_861_, 0, v___x_744_);
v___x_865_ = v___x_861_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v___x_744_);
lean_ctor_set(v_reuseFailAlloc_869_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_869_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_869_, 3, v_l_828_);
lean_ctor_set(v_reuseFailAlloc_869_, 4, v_l_828_);
v___x_865_ = v_reuseFailAlloc_869_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v___x_867_; 
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v_r_857_);
lean_ctor_set(v___x_600_, 3, v___x_865_);
lean_ctor_set(v___x_600_, 2, v_v_859_);
lean_ctor_set(v___x_600_, 1, v_k_858_);
lean_ctor_set(v___x_600_, 0, v___x_863_);
v___x_867_ = v___x_600_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_863_);
lean_ctor_set(v_reuseFailAlloc_868_, 1, v_k_858_);
lean_ctor_set(v_reuseFailAlloc_868_, 2, v_v_859_);
lean_ctor_set(v_reuseFailAlloc_868_, 3, v___x_865_);
lean_ctor_set(v_reuseFailAlloc_868_, 4, v_r_857_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
else
{
lean_object* v___x_874_; lean_object* v___x_876_; 
v___x_874_ = lean_unsigned_to_nat(2u);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 4, v_impl_743_);
lean_ctor_set(v___x_600_, 3, v_r_857_);
lean_ctor_set(v___x_600_, 0, v___x_874_);
v___x_876_ = v___x_600_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_874_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_k_595_);
lean_ctor_set(v_reuseFailAlloc_877_, 2, v_v_596_);
lean_ctor_set(v_reuseFailAlloc_877_, 3, v_r_857_);
lean_ctor_set(v_reuseFailAlloc_877_, 4, v_impl_743_);
v___x_876_ = v_reuseFailAlloc_877_;
goto v_reusejp_875_;
}
v_reusejp_875_:
{
return v___x_876_;
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
lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_879_ = lean_unsigned_to_nat(1u);
v___x_880_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_880_, 0, v___x_879_);
lean_ctor_set(v___x_880_, 1, v_k_591_);
lean_ctor_set(v___x_880_, 2, v_v_592_);
lean_ctor_set(v___x_880_, 3, v_t_593_);
lean_ctor_set(v___x_880_, 4, v_t_593_);
return v___x_880_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__1(size_t v_sz_881_, size_t v_i_882_, lean_object* v_bs_883_, uint8_t v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
uint8_t v___x_891_; 
v___x_891_ = lean_usize_dec_lt(v_i_882_, v_sz_881_);
if (v___x_891_ == 0)
{
lean_object* v___x_892_; 
v___x_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_892_, 0, v_bs_883_);
return v___x_892_;
}
else
{
uint8_t v___x_893_; lean_object* v_v_894_; lean_object* v___x_895_; lean_object* v_bs_x27_896_; lean_object* v___x_897_; 
v___x_893_ = 0;
v_v_894_ = lean_array_uget(v_bs_883_, v_i_882_);
v___x_895_ = lean_unsigned_to_nat(0u);
v_bs_x27_896_ = lean_array_uset(v_bs_883_, v_i_882_, v___x_895_);
v___x_897_ = l_Lean_Compiler_LCNF_Internalize_internalizeCodeDecl(v___x_893_, v_v_894_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; size_t v___x_899_; size_t v___x_900_; lean_object* v___x_901_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_a_898_);
lean_dec_ref_known(v___x_897_, 1);
v___x_899_ = ((size_t)1ULL);
v___x_900_ = lean_usize_add(v_i_882_, v___x_899_);
v___x_901_ = lean_array_uset(v_bs_x27_896_, v_i_882_, v_a_898_);
v_i_882_ = v___x_900_;
v_bs_883_ = v___x_901_;
goto _start;
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec_ref(v_bs_x27_896_);
v_a_903_ = lean_ctor_get(v___x_897_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_897_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_897_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__1___boxed(lean_object* v_sz_911_, lean_object* v_i_912_, lean_object* v_bs_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
size_t v_sz_boxed_921_; size_t v_i_boxed_922_; uint8_t v___y_6981__boxed_923_; lean_object* v_res_924_; 
v_sz_boxed_921_ = lean_unbox_usize(v_sz_911_);
lean_dec(v_sz_911_);
v_i_boxed_922_ = lean_unbox_usize(v_i_912_);
lean_dec(v_i_912_);
v___y_6981__boxed_923_ = lean_unbox(v___y_914_);
v_res_924_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__1(v_sz_boxed_921_, v_i_boxed_922_, v_bs_913_, v___y_6981__boxed_923_, v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v___y_915_);
return v_res_924_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__0(void){
_start:
{
lean_object* v___x_925_; 
v___x_925_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go(lean_object* v_decls_931_, lean_object* v_params_932_, lean_object* v_targetParamIdx_933_, lean_object* v_fields_934_, lean_object* v_k_935_, uint8_t v_default_936_, uint8_t v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v_fvarId_946_; lean_object* v___x_947_; lean_object* v_paramsNew_948_; uint8_t v___x_949_; uint8_t v___y_951_; lean_object* v___y_1006_; lean_object* v___x_1013_; uint8_t v___x_1014_; 
v___x_944_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__0, &l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__0);
v___x_945_ = lean_array_get_borrowed(v___x_944_, v_params_932_, v_targetParamIdx_933_);
v_fvarId_946_ = lean_ctor_get(v___x_945_, 0);
v___x_947_ = lean_unsigned_to_nat(0u);
v_paramsNew_948_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__1));
v___x_949_ = 0;
v___x_1013_ = lean_box(1);
v___x_1014_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4___redArg(v_fvarId_946_, v___x_1013_);
if (v___x_1014_ == 0)
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1015_ = lean_box(0);
lean_inc(v_fvarId_946_);
v___x_1016_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__5___redArg(v_fvarId_946_, v___x_1015_, v___x_1013_);
v___y_1006_ = v___x_1016_;
goto v___jp_1005_;
}
else
{
v___y_1006_ = v___x_1013_;
goto v___jp_1005_;
}
v___jp_950_:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = lean_array_get_size(v_params_932_);
v___x_953_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg(v___x_952_, v_params_932_, v_targetParamIdx_933_, v___y_951_, v_fields_934_, v___x_947_, v_paramsNew_948_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; size_t v_sz_955_; size_t v___x_956_; lean_object* v___x_957_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
lean_inc(v_a_954_);
lean_dec_ref_known(v___x_953_, 1);
v_sz_955_ = lean_array_size(v_decls_931_);
v___x_956_ = ((size_t)0ULL);
v___x_957_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__1(v_sz_955_, v___x_956_, v_decls_931_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_959_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_958_);
lean_dec_ref_known(v___x_957_, 1);
v___x_959_ = l_Lean_Compiler_LCNF_Internalize_internalizeCode(v___x_949_, v_k_935_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_960_);
lean_dec_ref_known(v___x_959_, 1);
v___x_961_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_a_958_, v_a_960_);
lean_dec(v_a_958_);
v___x_962_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__3));
v___x_963_ = l_Lean_Compiler_LCNF_mkAuxJpDecl(v___x_949_, v_a_954_, v___x_961_, v___x_962_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
if (lean_obj_tag(v___x_963_) == 0)
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_972_; 
v_a_964_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_972_ == 0)
{
v___x_966_ = v___x_963_;
v_isShared_967_ = v_isSharedCheck_972_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_963_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_972_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_968_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_968_, 0, v_a_964_);
lean_ctor_set_uint8(v___x_968_, sizeof(void*)*1, v_default_936_);
lean_ctor_set_uint8(v___x_968_, sizeof(void*)*1 + 1, v___y_951_);
if (v_isShared_967_ == 0)
{
lean_ctor_set(v___x_966_, 0, v___x_968_);
v___x_970_ = v___x_966_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
v_a_973_ = lean_ctor_get(v___x_963_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_963_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_963_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_963_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
else
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
lean_dec(v_a_958_);
lean_dec(v_a_954_);
v_a_981_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_959_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_959_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_981_);
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
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
lean_dec(v_a_954_);
lean_dec_ref(v_k_935_);
v_a_989_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_957_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_957_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
else
{
lean_object* v_a_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1004_; 
lean_dec_ref(v_k_935_);
lean_dec_ref(v_decls_931_);
v_a_997_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_1004_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_999_ = v___x_953_;
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_a_997_);
lean_dec(v___x_953_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1004_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1002_; 
if (v_isShared_1000_ == 0)
{
v___x_1002_ = v___x_999_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_a_997_);
v___x_1002_ = v_reuseFailAlloc_1003_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
return v___x_1002_;
}
}
}
}
v___jp_1005_:
{
uint8_t v___x_1007_; 
v___x_1007_ = l_Lean_Compiler_LCNF_Code_dependsOn(v___x_949_, v_k_935_, v___y_1006_);
if (v___x_1007_ == 0)
{
lean_object* v___x_1008_; uint8_t v___x_1009_; 
v___x_1008_ = lean_array_get_size(v_decls_931_);
v___x_1009_ = lean_nat_dec_lt(v___x_947_, v___x_1008_);
if (v___x_1009_ == 0)
{
lean_dec(v___y_1006_);
v___y_951_ = v___x_1009_;
goto v___jp_950_;
}
else
{
if (v___x_1009_ == 0)
{
lean_dec(v___y_1006_);
v___y_951_ = v___x_1009_;
goto v___jp_950_;
}
else
{
size_t v___x_1010_; size_t v___x_1011_; uint8_t v___x_1012_; 
v___x_1010_ = ((size_t)0ULL);
v___x_1011_ = lean_usize_of_nat(v___x_1008_);
v___x_1012_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__3(v___y_1006_, v_decls_931_, v___x_1010_, v___x_1011_);
lean_dec(v___y_1006_);
v___y_951_ = v___x_1012_;
goto v___jp_950_;
}
}
}
else
{
lean_dec(v___y_1006_);
v___y_951_ = v___x_1007_;
goto v___jp_950_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___boxed(lean_object* v_decls_1017_, lean_object* v_params_1018_, lean_object* v_targetParamIdx_1019_, lean_object* v_fields_1020_, lean_object* v_k_1021_, lean_object* v_default_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_){
_start:
{
uint8_t v_default_boxed_1030_; uint8_t v_a_boxed_1031_; lean_object* v_res_1032_; 
v_default_boxed_1030_ = lean_unbox(v_default_1022_);
v_a_boxed_1031_ = lean_unbox(v_a_1023_);
v_res_1032_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go(v_decls_1017_, v_params_1018_, v_targetParamIdx_1019_, v_fields_1020_, v_k_1021_, v_default_boxed_1030_, v_a_boxed_1031_, v_a_1024_, v_a_1025_, v_a_1026_, v_a_1027_, v_a_1028_);
lean_dec(v_a_1028_);
lean_dec_ref(v_a_1027_);
lean_dec(v_a_1026_);
lean_dec_ref(v_a_1025_);
lean_dec(v_a_1024_);
lean_dec(v_targetParamIdx_1019_);
lean_dec_ref(v_params_1018_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2(lean_object* v_upperBound_1033_, lean_object* v_params_1034_, lean_object* v_targetParamIdx_1035_, uint8_t v___y_1036_, lean_object* v_fields_1037_, lean_object* v_inst_1038_, lean_object* v_R_1039_, lean_object* v_a_1040_, lean_object* v_b_1041_, lean_object* v_c_1042_, uint8_t v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v___x_1050_; 
v___x_1050_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___redArg(v_upperBound_1033_, v_params_1034_, v_targetParamIdx_1035_, v___y_1036_, v_fields_1037_, v_a_1040_, v_b_1041_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2___boxed(lean_object** _args){
lean_object* v_upperBound_1051_ = _args[0];
lean_object* v_params_1052_ = _args[1];
lean_object* v_targetParamIdx_1053_ = _args[2];
lean_object* v___y_1054_ = _args[3];
lean_object* v_fields_1055_ = _args[4];
lean_object* v_inst_1056_ = _args[5];
lean_object* v_R_1057_ = _args[6];
lean_object* v_a_1058_ = _args[7];
lean_object* v_b_1059_ = _args[8];
lean_object* v_c_1060_ = _args[9];
lean_object* v___y_1061_ = _args[10];
lean_object* v___y_1062_ = _args[11];
lean_object* v___y_1063_ = _args[12];
lean_object* v___y_1064_ = _args[13];
lean_object* v___y_1065_ = _args[14];
lean_object* v___y_1066_ = _args[15];
lean_object* v___y_1067_ = _args[16];
_start:
{
uint8_t v___y_7197__boxed_1068_; uint8_t v___y_7199__boxed_1069_; lean_object* v_res_1070_; 
v___y_7197__boxed_1068_ = lean_unbox(v___y_1054_);
v___y_7199__boxed_1069_ = lean_unbox(v___y_1061_);
v_res_1070_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__2(v_upperBound_1051_, v_params_1052_, v_targetParamIdx_1053_, v___y_7197__boxed_1068_, v_fields_1055_, v_inst_1056_, v_R_1057_, v_a_1058_, v_b_1059_, v_c_1060_, v___y_7199__boxed_1069_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec(v_targetParamIdx_1053_);
lean_dec_ref(v_params_1052_);
lean_dec(v_upperBound_1051_);
return v_res_1070_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4(lean_object* v_00_u03b2_1071_, lean_object* v_k_1072_, lean_object* v_t_1073_){
_start:
{
uint8_t v___x_1074_; 
v___x_1074_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4___redArg(v_k_1072_, v_t_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4___boxed(lean_object* v_00_u03b2_1075_, lean_object* v_k_1076_, lean_object* v_t_1077_){
_start:
{
uint8_t v_res_1078_; lean_object* v_r_1079_; 
v_res_1078_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__4(v_00_u03b2_1075_, v_k_1076_, v_t_1077_);
lean_dec(v_t_1077_);
lean_dec(v_k_1076_);
v_r_1079_ = lean_box(v_res_1078_);
return v_r_1079_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__5(lean_object* v_00_u03b2_1080_, lean_object* v_k_1081_, lean_object* v_v_1082_, lean_object* v_t_1083_, lean_object* v_hl_1084_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go_spec__5___redArg(v_k_1081_, v_v_1082_, v_t_1083_);
return v___x_1085_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__0(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1086_ = lean_box(0);
v___x_1087_ = lean_unsigned_to_nat(16u);
v___x_1088_ = lean_mk_array(v___x_1087_, v___x_1086_);
return v___x_1088_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__1(void){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1089_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__0, &l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__0_once, _init_l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__0);
v___x_1090_ = lean_unsigned_to_nat(0u);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
lean_ctor_set(v___x_1091_, 1, v___x_1089_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt(lean_object* v_decls_1092_, lean_object* v_params_1093_, lean_object* v_targetParamIdx_1094_, lean_object* v_fields_1095_, lean_object* v_k_1096_, uint8_t v_default_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v___x_1103_; uint8_t v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1103_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__1, &l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__1_once, _init_l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___closed__1);
v___x_1104_ = 0;
v___x_1105_ = lean_st_mk_ref(v___x_1103_);
v___x_1106_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go(v_decls_1092_, v_params_1093_, v_targetParamIdx_1094_, v_fields_1095_, v_k_1096_, v_default_1097_, v___x_1104_, v___x_1105_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1115_; 
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1109_ = v___x_1106_;
v_isShared_1110_ = v_isSharedCheck_1115_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1106_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1115_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1111_ = lean_st_ref_get(v___x_1105_);
lean_dec(v___x_1105_);
lean_dec(v___x_1111_);
if (v_isShared_1110_ == 0)
{
v___x_1113_ = v___x_1109_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1107_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
else
{
lean_dec(v___x_1105_);
return v___x_1106_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt___boxed(lean_object* v_decls_1116_, lean_object* v_params_1117_, lean_object* v_targetParamIdx_1118_, lean_object* v_fields_1119_, lean_object* v_k_1120_, lean_object* v_default_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_){
_start:
{
uint8_t v_default_boxed_1127_; lean_object* v_res_1128_; 
v_default_boxed_1127_ = lean_unbox(v_default_1121_);
v_res_1128_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt(v_decls_1116_, v_params_1117_, v_targetParamIdx_1118_, v_fields_1119_, v_k_1120_, v_default_boxed_1127_, v_a_1122_, v_a_1123_, v_a_1124_, v_a_1125_);
lean_dec(v_a_1125_);
lean_dec_ref(v_a_1124_);
lean_dec(v_a_1123_);
lean_dec_ref(v_a_1122_);
lean_dec(v_targetParamIdx_1118_);
lean_dec_ref(v_params_1117_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpNewArgs(lean_object* v_args_1129_, lean_object* v_targetParamIdx_1130_, lean_object* v_fields_1131_, uint8_t v_dependsOnTarget_1132_){
_start:
{
if (v_dependsOnTarget_1132_ == 0)
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v_lower_1138_; lean_object* v_upper_1139_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; uint8_t v___x_1146_; 
v___x_1133_ = lean_unsigned_to_nat(0u);
lean_inc(v_targetParamIdx_1130_);
lean_inc_ref(v_args_1129_);
v___x_1134_ = l_Array_toSubarray___redArg(v_args_1129_, v___x_1133_, v_targetParamIdx_1130_);
v___x_1135_ = l_Subarray_copy___redArg(v___x_1134_);
v___x_1136_ = l_Array_append___redArg(v___x_1135_, v_fields_1131_);
v___x_1143_ = lean_array_get_size(v_args_1129_);
v___x_1144_ = lean_unsigned_to_nat(1u);
v___x_1145_ = lean_nat_add(v_targetParamIdx_1130_, v___x_1144_);
lean_dec(v_targetParamIdx_1130_);
v___x_1146_ = lean_nat_dec_le(v___x_1145_, v___x_1133_);
if (v___x_1146_ == 0)
{
v_lower_1138_ = v___x_1145_;
v_upper_1139_ = v___x_1143_;
goto v___jp_1137_;
}
else
{
lean_dec(v___x_1145_);
v_lower_1138_ = v___x_1133_;
v_upper_1139_ = v___x_1143_;
goto v___jp_1137_;
}
v___jp_1137_:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1140_ = l_Array_toSubarray___redArg(v_args_1129_, v_lower_1138_, v_upper_1139_);
v___x_1141_ = l_Subarray_copy___redArg(v___x_1140_);
v___x_1142_ = l_Array_append___redArg(v___x_1136_, v___x_1141_);
lean_dec_ref(v___x_1141_);
return v___x_1142_;
}
}
else
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v_lower_1154_; lean_object* v_upper_1155_; lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1147_ = lean_unsigned_to_nat(0u);
v___x_1148_ = lean_unsigned_to_nat(1u);
v___x_1149_ = lean_nat_add(v_targetParamIdx_1130_, v___x_1148_);
lean_dec(v_targetParamIdx_1130_);
lean_inc(v___x_1149_);
lean_inc_ref(v_args_1129_);
v___x_1150_ = l_Array_toSubarray___redArg(v_args_1129_, v___x_1147_, v___x_1149_);
v___x_1151_ = l_Subarray_copy___redArg(v___x_1150_);
v___x_1152_ = l_Array_append___redArg(v___x_1151_, v_fields_1131_);
v___x_1159_ = lean_array_get_size(v_args_1129_);
v___x_1160_ = lean_nat_dec_le(v___x_1149_, v___x_1147_);
if (v___x_1160_ == 0)
{
v_lower_1154_ = v___x_1149_;
v_upper_1155_ = v___x_1159_;
goto v___jp_1153_;
}
else
{
lean_dec(v___x_1149_);
v_lower_1154_ = v___x_1147_;
v_upper_1155_ = v___x_1159_;
goto v___jp_1153_;
}
v___jp_1153_:
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1156_ = l_Array_toSubarray___redArg(v_args_1129_, v_lower_1154_, v_upper_1155_);
v___x_1157_ = l_Subarray_copy___redArg(v___x_1156_);
v___x_1158_ = l_Array_append___redArg(v___x_1152_, v___x_1157_);
lean_dec_ref(v___x_1157_);
return v___x_1158_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpNewArgs___boxed(lean_object* v_args_1161_, lean_object* v_targetParamIdx_1162_, lean_object* v_fields_1163_, lean_object* v_dependsOnTarget_1164_){
_start:
{
uint8_t v_dependsOnTarget_boxed_1165_; lean_object* v_res_1166_; 
v_dependsOnTarget_boxed_1165_ = lean_unbox(v_dependsOnTarget_1164_);
v_res_1166_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpNewArgs(v_args_1161_, v_targetParamIdx_1162_, v_fields_1163_, v_dependsOnTarget_boxed_1165_);
lean_dec_ref(v_fields_1163_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0_spec__0(size_t v_sz_1167_, size_t v_i_1168_, lean_object* v_bs_1169_){
_start:
{
uint8_t v___x_1170_; 
v___x_1170_ = lean_usize_dec_lt(v_i_1168_, v_sz_1167_);
if (v___x_1170_ == 0)
{
return v_bs_1169_;
}
else
{
lean_object* v_v_1171_; lean_object* v_fvarId_1172_; lean_object* v___x_1173_; lean_object* v_bs_x27_1174_; lean_object* v___x_1175_; size_t v___x_1176_; size_t v___x_1177_; lean_object* v___x_1178_; 
v_v_1171_ = lean_array_uget_borrowed(v_bs_1169_, v_i_1168_);
v_fvarId_1172_ = lean_ctor_get(v_v_1171_, 0);
lean_inc(v_fvarId_1172_);
v___x_1173_ = lean_unsigned_to_nat(0u);
v_bs_x27_1174_ = lean_array_uset(v_bs_1169_, v_i_1168_, v___x_1173_);
v___x_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1175_, 0, v_fvarId_1172_);
v___x_1176_ = ((size_t)1ULL);
v___x_1177_ = lean_usize_add(v_i_1168_, v___x_1176_);
v___x_1178_ = lean_array_uset(v_bs_x27_1174_, v_i_1168_, v___x_1175_);
v_i_1168_ = v___x_1177_;
v_bs_1169_ = v___x_1178_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0_spec__0___boxed(lean_object* v_sz_1180_, lean_object* v_i_1181_, lean_object* v_bs_1182_){
_start:
{
size_t v_sz_boxed_1183_; size_t v_i_boxed_1184_; lean_object* v_res_1185_; 
v_sz_boxed_1183_ = lean_unbox_usize(v_sz_1180_);
lean_dec(v_sz_1180_);
v_i_boxed_1184_ = lean_unbox_usize(v_i_1181_);
lean_dec(v_i_1181_);
v_res_1185_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0_spec__0(v_sz_boxed_1183_, v_i_boxed_1184_, v_bs_1182_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0(size_t v_sz_1186_, size_t v_i_1187_, lean_object* v_bs_1188_){
_start:
{
uint8_t v___x_1189_; 
v___x_1189_ = lean_usize_dec_lt(v_i_1187_, v_sz_1186_);
if (v___x_1189_ == 0)
{
return v_bs_1188_;
}
else
{
lean_object* v_v_1190_; lean_object* v_fvarId_1191_; lean_object* v___x_1192_; lean_object* v_bs_x27_1193_; lean_object* v___x_1194_; size_t v___x_1195_; size_t v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v_v_1190_ = lean_array_uget_borrowed(v_bs_1188_, v_i_1187_);
v_fvarId_1191_ = lean_ctor_get(v_v_1190_, 0);
lean_inc(v_fvarId_1191_);
v___x_1192_ = lean_unsigned_to_nat(0u);
v_bs_x27_1193_ = lean_array_uset(v_bs_1188_, v_i_1187_, v___x_1192_);
v___x_1194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1194_, 0, v_fvarId_1191_);
v___x_1195_ = ((size_t)1ULL);
v___x_1196_ = lean_usize_add(v_i_1187_, v___x_1195_);
v___x_1197_ = lean_array_uset(v_bs_x27_1193_, v_i_1187_, v___x_1194_);
v___x_1198_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0_spec__0(v_sz_1186_, v___x_1196_, v___x_1197_);
return v___x_1198_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0___boxed(lean_object* v_sz_1199_, lean_object* v_i_1200_, lean_object* v_bs_1201_){
_start:
{
size_t v_sz_boxed_1202_; size_t v_i_boxed_1203_; lean_object* v_res_1204_; 
v_sz_boxed_1202_ = lean_unbox_usize(v_sz_1199_);
lean_dec(v_sz_1199_);
v_i_boxed_1203_ = lean_unbox_usize(v_i_1200_);
lean_dec(v_i_1200_);
v_res_1204_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0(v_sz_boxed_1202_, v_i_boxed_1203_, v_bs_1201_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp(lean_object* v_params_1205_, lean_object* v_targetParamIdx_1206_, lean_object* v_fields_1207_, uint8_t v_dependsOnTarget_1208_){
_start:
{
size_t v_sz_1209_; size_t v___x_1210_; lean_object* v___x_1211_; size_t v_sz_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v_sz_1209_ = lean_array_size(v_params_1205_);
v___x_1210_ = ((size_t)0ULL);
v___x_1211_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0(v_sz_1209_, v___x_1210_, v_params_1205_);
v_sz_1212_ = lean_array_size(v_fields_1207_);
v___x_1213_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp_spec__0(v_sz_1212_, v___x_1210_, v_fields_1207_);
v___x_1214_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpNewArgs(v___x_1211_, v_targetParamIdx_1206_, v___x_1213_, v_dependsOnTarget_1208_);
lean_dec_ref(v___x_1213_);
return v___x_1214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp___boxed(lean_object* v_params_1215_, lean_object* v_targetParamIdx_1216_, lean_object* v_fields_1217_, lean_object* v_dependsOnTarget_1218_){
_start:
{
uint8_t v_dependsOnTarget_boxed_1219_; lean_object* v_res_1220_; 
v_dependsOnTarget_boxed_1219_ = lean_unbox(v_dependsOnTarget_1218_);
v_res_1220_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp(v_params_1215_, v_targetParamIdx_1216_, v_fields_1217_, v_dependsOnTarget_boxed_1219_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f(lean_object* v_fvarId_1226_, lean_object* v_args_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = lean_st_ref_get(v_a_1229_);
v___x_1237_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v___x_1236_, v_fvarId_1226_);
lean_dec(v___x_1236_);
if (lean_obj_tag(v___x_1237_) == 1)
{
lean_object* v_val_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1420_; 
v_val_1238_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1240_ = v___x_1237_;
v_isShared_1241_ = v_isSharedCheck_1420_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_val_1238_);
lean_dec(v___x_1237_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1420_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_a_1228_, v_fvarId_1226_);
if (lean_obj_tag(v___x_1242_) == 1)
{
lean_object* v_val_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1415_; 
lean_del_object(v___x_1240_);
v_val_1243_ = lean_ctor_get(v___x_1242_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1245_ = v___x_1242_;
v_isShared_1246_ = v_isSharedCheck_1415_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_val_1243_);
lean_dec(v___x_1242_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1415_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v_paramIdx_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1413_; 
v_paramIdx_1247_ = lean_ctor_get(v_val_1243_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v_val_1243_);
if (v_isSharedCheck_1413_ == 0)
{
lean_object* v_unused_1414_; 
v_unused_1414_ = lean_ctor_get(v_val_1243_, 1);
lean_dec(v_unused_1414_);
v___x_1249_ = v_val_1243_;
v_isShared_1250_ = v_isSharedCheck_1413_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_paramIdx_1247_);
lean_dec(v_val_1243_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1413_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = lean_box(0);
v___x_1252_ = lean_array_get(v___x_1251_, v_args_1227_, v_paramIdx_1247_);
if (lean_obj_tag(v___x_1252_) == 1)
{
lean_object* v_fvarId_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1408_; 
lean_del_object(v___x_1245_);
v_fvarId_1253_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1255_ = v___x_1252_;
v_isShared_1256_ = v_isSharedCheck_1408_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_fvarId_1253_);
lean_dec(v___x_1252_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1408_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
uint8_t v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = 0;
v___x_1258_ = l_Lean_Compiler_LCNF_Simp_findCtor_x3f___redArg(v_fvarId_1253_, v_a_1230_, v_a_1232_, v_a_1234_);
lean_dec(v_fvarId_1253_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1399_; 
v_a_1259_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1399_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1399_ == 0)
{
v___x_1261_ = v___x_1258_;
v_isShared_1262_ = v_isSharedCheck_1399_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1258_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1399_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
if (lean_obj_tag(v_a_1259_) == 1)
{
lean_object* v_val_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1394_; 
v_val_1263_ = lean_ctor_get(v_a_1259_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v_a_1259_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1265_ = v_a_1259_;
v_isShared_1266_ = v_isSharedCheck_1394_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_val_1263_);
lean_dec(v_a_1259_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1394_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1267_ = l_Lean_Compiler_LCNF_Simp_CtorInfo_getName(v_val_1263_);
v___x_1268_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_val_1238_, v___x_1267_);
lean_dec(v___x_1267_);
lean_dec(v_val_1238_);
if (lean_obj_tag(v___x_1268_) == 1)
{
lean_object* v_val_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1389_; 
v_val_1269_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1271_ = v___x_1268_;
v_isShared_1272_ = v_isSharedCheck_1389_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_val_1269_);
lean_dec(v___x_1268_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1389_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
uint8_t v_default_1273_; 
v_default_1273_ = lean_ctor_get_uint8(v_val_1269_, sizeof(void*)*1);
if (v_default_1273_ == 0)
{
if (lean_obj_tag(v_val_1263_) == 0)
{
lean_object* v_decl_1274_; uint8_t v_dependsOnDiscr_1275_; lean_object* v_val_1276_; lean_object* v_args_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1312_; 
lean_del_object(v___x_1265_);
lean_del_object(v___x_1255_);
lean_del_object(v___x_1249_);
v_decl_1274_ = lean_ctor_get(v_val_1269_, 0);
lean_inc_ref(v_decl_1274_);
v_dependsOnDiscr_1275_ = lean_ctor_get_uint8(v_val_1269_, sizeof(void*)*1 + 1);
lean_dec(v_val_1269_);
v_val_1276_ = lean_ctor_get(v_val_1263_, 0);
v_args_1277_ = lean_ctor_get(v_val_1263_, 1);
v_isSharedCheck_1312_ = !lean_is_exclusive(v_val_1263_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1279_ = v_val_1263_;
v_isShared_1280_ = v_isSharedCheck_1312_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_args_1277_);
lean_inc(v_val_1276_);
lean_dec(v_val_1263_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1312_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___y_1282_; lean_object* v_numParams_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; uint8_t v___x_1305_; 
v_numParams_1302_ = lean_ctor_get(v_val_1276_, 3);
lean_inc(v_numParams_1302_);
lean_dec_ref(v_val_1276_);
v___x_1303_ = lean_unsigned_to_nat(0u);
v___x_1304_ = lean_array_get_size(v_args_1277_);
v___x_1305_ = lean_nat_dec_le(v_numParams_1302_, v___x_1303_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1307_; 
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 1, v___x_1304_);
lean_ctor_set(v___x_1279_, 0, v_numParams_1302_);
v___x_1307_ = v___x_1279_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v_numParams_1302_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v___x_1304_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
v___y_1282_ = v___x_1307_;
goto v___jp_1281_;
}
}
else
{
lean_object* v___x_1310_; 
lean_dec(v_numParams_1302_);
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 1, v___x_1304_);
lean_ctor_set(v___x_1279_, 0, v___x_1303_);
v___x_1310_ = v___x_1279_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v___x_1303_);
lean_ctor_set(v_reuseFailAlloc_1311_, 1, v___x_1304_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
v___y_1282_ = v___x_1310_;
goto v___jp_1281_;
}
}
v___jp_1281_:
{
lean_object* v_fvarId_1283_; lean_object* v_lower_1284_; lean_object* v_upper_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1301_; 
v_fvarId_1283_ = lean_ctor_get(v_decl_1274_, 0);
lean_inc(v_fvarId_1283_);
lean_dec_ref(v_decl_1274_);
v_lower_1284_ = lean_ctor_get(v___y_1282_, 0);
v_upper_1285_ = lean_ctor_get(v___y_1282_, 1);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___y_1282_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1287_ = v___y_1282_;
v_isShared_1288_ = v_isSharedCheck_1301_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_upper_1285_);
lean_inc(v_lower_1284_);
lean_dec(v___y_1282_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1301_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
v___x_1289_ = l_Array_toSubarray___redArg(v_args_1277_, v_lower_1284_, v_upper_1285_);
v___x_1290_ = l_Subarray_copy___redArg(v___x_1289_);
v___x_1291_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpNewArgs(v_args_1227_, v_paramIdx_1247_, v___x_1290_, v_dependsOnDiscr_1275_);
lean_dec_ref(v___x_1290_);
if (v_isShared_1288_ == 0)
{
lean_ctor_set_tag(v___x_1287_, 3);
lean_ctor_set(v___x_1287_, 1, v___x_1291_);
lean_ctor_set(v___x_1287_, 0, v_fvarId_1283_);
v___x_1293_ = v___x_1287_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_fvarId_1283_);
lean_ctor_set(v_reuseFailAlloc_1300_, 1, v___x_1291_);
v___x_1293_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
lean_object* v___x_1295_; 
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v___x_1293_);
v___x_1295_ = v___x_1271_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v___x_1293_);
v___x_1295_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
lean_object* v___x_1297_; 
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v___x_1295_);
v___x_1297_ = v___x_1261_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
}
}
}
}
else
{
lean_object* v_decl_1313_; uint8_t v_dependsOnDiscr_1314_; lean_object* v_n_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1374_; 
v_decl_1313_ = lean_ctor_get(v_val_1269_, 0);
lean_inc_ref(v_decl_1313_);
v_dependsOnDiscr_1314_ = lean_ctor_get_uint8(v_val_1269_, sizeof(void*)*1 + 1);
lean_dec(v_val_1269_);
v_n_1315_ = lean_ctor_get(v_val_1263_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v_val_1263_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1317_ = v_val_1263_;
v_isShared_1318_ = v_isSharedCheck_1374_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_n_1315_);
lean_dec(v_val_1263_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1374_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v_zero_1319_; uint8_t v_isZero_1320_; 
v_zero_1319_ = lean_unsigned_to_nat(0u);
v_isZero_1320_ = lean_nat_dec_eq(v_n_1315_, v_zero_1319_);
if (v_isZero_1320_ == 1)
{
lean_object* v_fvarId_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1325_; 
lean_del_object(v___x_1317_);
lean_dec(v_n_1315_);
lean_del_object(v___x_1265_);
lean_del_object(v___x_1255_);
v_fvarId_1321_ = lean_ctor_get(v_decl_1313_, 0);
lean_inc(v_fvarId_1321_);
lean_dec_ref(v_decl_1313_);
v___x_1322_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__0));
v___x_1323_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpNewArgs(v_args_1227_, v_paramIdx_1247_, v___x_1322_, v_dependsOnDiscr_1314_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set_tag(v___x_1249_, 3);
lean_ctor_set(v___x_1249_, 1, v___x_1323_);
lean_ctor_set(v___x_1249_, 0, v_fvarId_1321_);
v___x_1325_ = v___x_1249_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_fvarId_1321_);
lean_ctor_set(v_reuseFailAlloc_1332_, 1, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
lean_object* v___x_1327_; 
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v___x_1325_);
v___x_1327_ = v___x_1271_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v___x_1325_);
v___x_1327_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
lean_object* v___x_1329_; 
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v___x_1327_);
v___x_1329_ = v___x_1261_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v___x_1327_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
}
else
{
lean_object* v_one_1333_; lean_object* v_n_1334_; lean_object* v___x_1336_; 
lean_del_object(v___x_1261_);
v_one_1333_ = lean_unsigned_to_nat(1u);
v_n_1334_ = lean_nat_sub(v_n_1315_, v_one_1333_);
lean_dec(v_n_1315_);
if (v_isShared_1318_ == 0)
{
lean_ctor_set_tag(v___x_1317_, 0);
lean_ctor_set(v___x_1317_, 0, v_n_1334_);
v___x_1336_ = v___x_1317_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_n_1334_);
v___x_1336_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
lean_object* v___x_1338_; 
if (v_isShared_1266_ == 0)
{
lean_ctor_set_tag(v___x_1265_, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1336_);
v___x_1338_ = v___x_1265_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v___x_1336_);
v___x_1338_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__2));
v___x_1340_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_1257_, v___x_1338_, v___x_1339_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1363_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1343_ = v___x_1340_;
v_isShared_1344_ = v_isSharedCheck_1363_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_a_1341_);
lean_dec(v___x_1340_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1363_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v_fvarId_1345_; lean_object* v_fvarId_1346_; lean_object* v___x_1348_; 
v_fvarId_1345_ = lean_ctor_get(v_decl_1313_, 0);
lean_inc(v_fvarId_1345_);
lean_dec_ref(v_decl_1313_);
v_fvarId_1346_ = lean_ctor_get(v_a_1341_, 0);
lean_inc(v_fvarId_1346_);
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 0, v_fvarId_1346_);
v___x_1348_ = v___x_1255_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_fvarId_1346_);
v___x_1348_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1353_; 
v___x_1349_ = lean_mk_empty_array_with_capacity(v_one_1333_);
v___x_1350_ = lean_array_push(v___x_1349_, v___x_1348_);
v___x_1351_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpNewArgs(v_args_1227_, v_paramIdx_1247_, v___x_1350_, v_dependsOnDiscr_1314_);
lean_dec_ref(v___x_1350_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set_tag(v___x_1249_, 3);
lean_ctor_set(v___x_1249_, 1, v___x_1351_);
lean_ctor_set(v___x_1249_, 0, v_fvarId_1345_);
v___x_1353_ = v___x_1249_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v_fvarId_1345_);
lean_ctor_set(v_reuseFailAlloc_1361_, 1, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
lean_object* v___x_1354_; lean_object* v___x_1356_; 
v___x_1354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1354_, 0, v_a_1341_);
lean_ctor_set(v___x_1354_, 1, v___x_1353_);
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v___x_1354_);
v___x_1356_ = v___x_1271_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1354_);
v___x_1356_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
lean_object* v___x_1358_; 
if (v_isShared_1344_ == 0)
{
lean_ctor_set(v___x_1343_, 0, v___x_1356_);
v___x_1358_ = v___x_1343_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1356_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
}
}
}
}
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
lean_dec_ref(v_decl_1313_);
lean_del_object(v___x_1271_);
lean_del_object(v___x_1255_);
lean_del_object(v___x_1249_);
lean_dec(v_paramIdx_1247_);
lean_dec_ref(v_args_1227_);
v_a_1364_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1340_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1340_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
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
lean_object* v_decl_1375_; uint8_t v_dependsOnDiscr_1376_; lean_object* v_fvarId_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1381_; 
lean_del_object(v___x_1265_);
lean_dec(v_val_1263_);
lean_del_object(v___x_1255_);
v_decl_1375_ = lean_ctor_get(v_val_1269_, 0);
lean_inc_ref(v_decl_1375_);
v_dependsOnDiscr_1376_ = lean_ctor_get_uint8(v_val_1269_, sizeof(void*)*1 + 1);
lean_dec(v_val_1269_);
v_fvarId_1377_ = lean_ctor_get(v_decl_1375_, 0);
lean_inc(v_fvarId_1377_);
lean_dec_ref(v_decl_1375_);
v___x_1378_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___closed__0));
v___x_1379_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpNewArgs(v_args_1227_, v_paramIdx_1247_, v___x_1378_, v_dependsOnDiscr_1376_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set_tag(v___x_1249_, 3);
lean_ctor_set(v___x_1249_, 1, v___x_1379_);
lean_ctor_set(v___x_1249_, 0, v_fvarId_1377_);
v___x_1381_ = v___x_1249_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_fvarId_1377_);
lean_ctor_set(v_reuseFailAlloc_1388_, 1, v___x_1379_);
v___x_1381_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
lean_object* v___x_1383_; 
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v___x_1381_);
v___x_1383_ = v___x_1271_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___x_1385_; 
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v___x_1383_);
v___x_1385_ = v___x_1261_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v___x_1383_);
v___x_1385_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
return v___x_1385_;
}
}
}
}
}
}
else
{
lean_object* v___x_1390_; lean_object* v___x_1392_; 
lean_dec(v___x_1268_);
lean_del_object(v___x_1265_);
lean_dec(v_val_1263_);
lean_del_object(v___x_1255_);
lean_del_object(v___x_1249_);
lean_dec(v_paramIdx_1247_);
lean_dec_ref(v_args_1227_);
v___x_1390_ = lean_box(0);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v___x_1390_);
v___x_1392_ = v___x_1261_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1390_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
}
}
else
{
lean_object* v___x_1395_; lean_object* v___x_1397_; 
lean_dec(v_a_1259_);
lean_del_object(v___x_1255_);
lean_del_object(v___x_1249_);
lean_dec(v_paramIdx_1247_);
lean_dec(v_val_1238_);
lean_dec_ref(v_args_1227_);
v___x_1395_ = lean_box(0);
if (v_isShared_1262_ == 0)
{
lean_ctor_set(v___x_1261_, 0, v___x_1395_);
v___x_1397_ = v___x_1261_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v___x_1395_);
v___x_1397_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
return v___x_1397_;
}
}
}
}
else
{
lean_object* v_a_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1407_; 
lean_del_object(v___x_1255_);
lean_del_object(v___x_1249_);
lean_dec(v_paramIdx_1247_);
lean_dec(v_val_1238_);
lean_dec_ref(v_args_1227_);
v_a_1400_ = lean_ctor_get(v___x_1258_, 0);
v_isSharedCheck_1407_ = !lean_is_exclusive(v___x_1258_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1402_ = v___x_1258_;
v_isShared_1403_ = v_isSharedCheck_1407_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_a_1400_);
lean_dec(v___x_1258_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1407_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1405_; 
if (v_isShared_1403_ == 0)
{
v___x_1405_ = v___x_1402_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v_a_1400_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
}
}
}
else
{
lean_object* v___x_1409_; lean_object* v___x_1411_; 
lean_dec(v___x_1252_);
lean_del_object(v___x_1249_);
lean_dec(v_paramIdx_1247_);
lean_dec(v_val_1238_);
lean_dec_ref(v_args_1227_);
v___x_1409_ = lean_box(0);
if (v_isShared_1246_ == 0)
{
lean_ctor_set_tag(v___x_1245_, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1409_);
v___x_1411_ = v___x_1245_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1409_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
else
{
lean_object* v___x_1416_; lean_object* v___x_1418_; 
lean_dec(v___x_1242_);
lean_dec(v_val_1238_);
lean_dec_ref(v_args_1227_);
v___x_1416_ = lean_box(0);
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1416_);
v___x_1418_ = v___x_1240_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v___x_1416_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
else
{
lean_object* v___x_1421_; lean_object* v___x_1422_; 
lean_dec(v___x_1237_);
lean_dec_ref(v_args_1227_);
v___x_1421_ = lean_box(0);
v___x_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
return v___x_1422_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f___boxed(lean_object* v_fvarId_1423_, lean_object* v_args_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f(v_fvarId_1423_, v_args_1424_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_);
lean_dec(v_a_1431_);
lean_dec_ref(v_a_1430_);
lean_dec(v_a_1429_);
lean_dec_ref(v_a_1428_);
lean_dec_ref(v_a_1427_);
lean_dec(v_a_1426_);
lean_dec(v_a_1425_);
lean_dec(v_fvarId_1423_);
return v_res_1433_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3___lam__0(lean_object* v___x_1434_, uint8_t v___x_1435_, uint8_t v___x_1436_, lean_object* v_ctorNameInJump_1437_){
_start:
{
uint8_t v___x_1438_; 
v___x_1438_ = l_Lean_NameSet_contains(v___x_1434_, v_ctorNameInJump_1437_);
if (v___x_1438_ == 0)
{
return v___x_1435_;
}
else
{
return v___x_1436_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3___lam__0___boxed(lean_object* v___x_1439_, lean_object* v___x_1440_, lean_object* v___x_1441_, lean_object* v_ctorNameInJump_1442_){
_start:
{
uint8_t v___x_26199__boxed_1443_; uint8_t v___x_26200__boxed_1444_; uint8_t v_res_1445_; lean_object* v_r_1446_; 
v___x_26199__boxed_1443_ = lean_unbox(v___x_1440_);
v___x_26200__boxed_1444_ = lean_unbox(v___x_1441_);
v_res_1445_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3___lam__0(v___x_1439_, v___x_26199__boxed_1443_, v___x_26200__boxed_1444_, v_ctorNameInJump_1442_);
lean_dec(v_ctorNameInJump_1442_);
lean_dec(v___x_1439_);
v_r_1446_ = lean_box(v_res_1445_);
return v_r_1446_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2___redArg(lean_object* v___x_1447_, lean_object* v_a_1448_, lean_object* v_init_1449_, lean_object* v_x_1450_){
_start:
{
lean_object* v_d_1453_; 
if (lean_obj_tag(v_x_1450_) == 0)
{
lean_object* v_k_1456_; lean_object* v_l_1457_; lean_object* v_r_1458_; lean_object* v___x_1459_; lean_object* v_a_1460_; 
v_k_1456_ = lean_ctor_get(v_x_1450_, 1);
lean_inc(v_k_1456_);
v_l_1457_ = lean_ctor_get(v_x_1450_, 3);
lean_inc(v_l_1457_);
v_r_1458_ = lean_ctor_get(v_x_1450_, 4);
lean_inc(v_r_1458_);
lean_dec_ref_known(v_x_1450_, 5);
lean_inc_ref(v_a_1448_);
v___x_1459_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2___redArg(v___x_1447_, v_a_1448_, v_init_1449_, v_l_1457_);
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_a_1460_);
if (lean_obj_tag(v_a_1460_) == 0)
{
lean_object* v_a_1461_; 
lean_dec_ref(v___x_1459_);
lean_dec(v_r_1458_);
lean_dec(v_k_1456_);
lean_dec_ref(v_a_1448_);
v_a_1461_ = lean_ctor_get(v_a_1460_, 0);
lean_inc(v_a_1461_);
lean_dec_ref_known(v_a_1460_, 1);
v_d_1453_ = v_a_1461_;
goto v___jp_1452_;
}
else
{
lean_object* v_a_1462_; uint8_t v___x_1463_; 
v_a_1462_ = lean_ctor_get(v_a_1460_, 0);
lean_inc(v_a_1462_);
lean_dec_ref_known(v_a_1460_, 1);
v___x_1463_ = l_Lean_NameSet_contains(v___x_1447_, v_k_1456_);
if (v___x_1463_ == 0)
{
lean_object* v___x_1464_; 
lean_dec_ref(v___x_1459_);
lean_inc_ref(v_a_1448_);
v___x_1464_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1456_, v_a_1448_, v_a_1462_);
v_init_1449_ = v___x_1464_;
v_x_1450_ = v_r_1458_;
goto _start;
}
else
{
lean_object* v_a_1466_; 
lean_dec(v_a_1462_);
lean_dec(v_k_1456_);
v_a_1466_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_a_1466_);
lean_dec_ref(v___x_1459_);
if (lean_obj_tag(v_a_1466_) == 0)
{
lean_object* v_a_1467_; 
lean_dec(v_r_1458_);
lean_dec_ref(v_a_1448_);
v_a_1467_ = lean_ctor_get(v_a_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v_a_1466_, 1);
v_d_1453_ = v_a_1467_;
goto v___jp_1452_;
}
else
{
lean_object* v_a_1468_; 
v_a_1468_ = lean_ctor_get(v_a_1466_, 0);
lean_inc(v_a_1468_);
lean_dec_ref_known(v_a_1466_, 1);
v_init_1449_ = v_a_1468_;
v_x_1450_ = v_r_1458_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
lean_dec_ref(v_a_1448_);
v___x_1470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1470_, 0, v_init_1449_);
v___x_1471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1471_, 0, v___x_1470_);
return v___x_1471_;
}
v___jp_1452_:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1454_, 0, v_d_1453_);
v___x_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
return v___x_1455_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2___redArg___boxed(lean_object* v___x_1472_, lean_object* v_a_1473_, lean_object* v_init_1474_, lean_object* v_x_1475_, lean_object* v___y_1476_){
_start:
{
lean_object* v_res_1477_; 
v_res_1477_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2___redArg(v___x_1472_, v_a_1473_, v_init_1474_, v_x_1475_);
lean_dec(v___x_1472_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3(lean_object* v_discr_1483_, lean_object* v___x_1484_, lean_object* v_val_1485_, lean_object* v_fst_1486_, lean_object* v_params_1487_, uint8_t v___x_1488_, lean_object* v_snd_1489_, lean_object* v_as_1490_, size_t v_sz_1491_, size_t v_i_1492_, lean_object* v_b_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v_a_1503_; uint8_t v___x_1507_; 
v___x_1507_ = lean_usize_dec_lt(v_i_1492_, v_sz_1491_);
if (v___x_1507_ == 0)
{
lean_object* v___x_1508_; 
lean_dec_ref(v_params_1487_);
lean_dec_ref(v_fst_1486_);
lean_dec_ref(v_val_1485_);
lean_dec(v___x_1484_);
lean_dec(v_discr_1483_);
v___x_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1508_, 0, v_b_1493_);
return v___x_1508_;
}
else
{
lean_object* v_snd_1509_; lean_object* v_fst_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1663_; 
v_snd_1509_ = lean_ctor_get(v_b_1493_, 1);
v_fst_1510_ = lean_ctor_get(v_b_1493_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v_b_1493_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1512_ = v_b_1493_;
v_isShared_1513_ = v_isSharedCheck_1663_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_snd_1509_);
lean_inc(v_fst_1510_);
lean_dec(v_b_1493_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1663_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v_fst_1514_; lean_object* v_snd_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1662_; 
v_fst_1514_ = lean_ctor_get(v_snd_1509_, 0);
v_snd_1515_ = lean_ctor_get(v_snd_1509_, 1);
v_isSharedCheck_1662_ = !lean_is_exclusive(v_snd_1509_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1517_ = v_snd_1509_;
v_isShared_1518_ = v_isSharedCheck_1662_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_snd_1515_);
lean_inc(v_fst_1514_);
lean_dec(v_snd_1509_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1662_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
uint8_t v___x_1519_; lean_object* v_a_1520_; 
v___x_1519_ = 0;
v_a_1520_ = lean_array_uget_borrowed(v_as_1490_, v_i_1492_);
if (lean_obj_tag(v_a_1520_) == 0)
{
lean_object* v_ctorName_1521_; lean_object* v_params_1522_; lean_object* v_code_1523_; lean_object* v___x_1524_; 
v_ctorName_1521_ = lean_ctor_get(v_a_1520_, 0);
v_params_1522_ = lean_ctor_get(v_a_1520_, 1);
v_code_1523_ = lean_ctor_get(v_a_1520_, 2);
lean_inc_ref(v_params_1522_);
lean_inc(v_ctorName_1521_);
lean_inc(v_discr_1483_);
v___x_1524_ = l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(v_discr_1483_, v_ctorName_1521_, v_params_1522_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
if (lean_obj_tag(v___x_1524_) == 0)
{
lean_object* v_a_1525_; lean_object* v___x_1526_; 
v_a_1525_ = lean_ctor_get(v___x_1524_, 0);
lean_inc(v_a_1525_);
lean_dec_ref_known(v___x_1524_, 1);
lean_inc_ref(v_code_1523_);
v___x_1526_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_code_1523_, v___y_1494_, v___y_1495_, v_a_1525_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
lean_dec(v_a_1525_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; uint8_t v___x_1528_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
lean_dec_ref_known(v___x_1526_, 1);
v___x_1528_ = l_Lean_NameSet_contains(v___x_1484_, v_ctorName_1521_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1532_; 
lean_inc_ref(v_a_1520_);
v___x_1529_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_1520_, v_a_1527_);
v___x_1530_ = lean_array_push(v_snd_1515_, v___x_1529_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 1, v___x_1530_);
v___x_1532_ = v___x_1517_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_fst_1514_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v___x_1530_);
v___x_1532_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
lean_object* v___x_1534_; 
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 1, v___x_1532_);
v___x_1534_ = v___x_1512_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_fst_1510_);
lean_ctor_set(v_reuseFailAlloc_1535_, 1, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
v_a_1503_ = v___x_1534_;
goto v___jp_1502_;
}
}
}
else
{
lean_object* v_paramIdx_1537_; lean_object* v___x_1538_; 
v_paramIdx_1537_ = lean_ctor_get(v_val_1485_, 0);
lean_inc(v_a_1527_);
lean_inc_ref(v_params_1522_);
lean_inc_ref(v_fst_1486_);
v___x_1538_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt(v_fst_1486_, v_params_1487_, v_paramIdx_1537_, v_params_1522_, v_a_1527_, v___x_1488_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v_a_1539_; lean_object* v_decl_1540_; uint8_t v_dependsOnDiscr_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
lean_inc(v_a_1539_);
lean_dec_ref_known(v___x_1538_, 1);
v_decl_1540_ = lean_ctor_get(v_a_1539_, 0);
lean_inc_ref_n(v_decl_1540_, 2);
v_dependsOnDiscr_1541_ = lean_ctor_get_uint8(v_a_1539_, sizeof(void*)*1 + 1);
v___x_1542_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1542_, 0, v_decl_1540_);
v___x_1543_ = lean_array_push(v_fst_1514_, v___x_1542_);
lean_inc(v_ctorName_1521_);
v___x_1544_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_ctorName_1521_, v_a_1539_, v_fst_1510_);
lean_inc_ref(v_params_1522_);
lean_inc(v_paramIdx_1537_);
lean_inc_ref(v_params_1487_);
v___x_1545_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp(v_params_1487_, v_paramIdx_1537_, v_params_1522_, v_dependsOnDiscr_1541_);
v___x_1546_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_1519_, v_a_1527_, v___y_1498_);
lean_dec(v_a_1527_);
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v_fvarId_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1552_; 
lean_dec_ref_known(v___x_1546_, 1);
v_fvarId_1547_ = lean_ctor_get(v_decl_1540_, 0);
lean_inc(v_fvarId_1547_);
lean_dec_ref(v_decl_1540_);
v___x_1548_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1548_, 0, v_fvarId_1547_);
lean_ctor_set(v___x_1548_, 1, v___x_1545_);
lean_inc_ref(v_a_1520_);
v___x_1549_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_1520_, v___x_1548_);
v___x_1550_ = lean_array_push(v_snd_1515_, v___x_1549_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 1, v___x_1550_);
lean_ctor_set(v___x_1517_, 0, v___x_1543_);
v___x_1552_ = v___x_1517_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v___x_1543_);
lean_ctor_set(v_reuseFailAlloc_1556_, 1, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
lean_object* v___x_1554_; 
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 1, v___x_1552_);
lean_ctor_set(v___x_1512_, 0, v___x_1544_);
v___x_1554_ = v___x_1512_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1544_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v___x_1552_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
v_a_1503_ = v___x_1554_;
goto v___jp_1502_;
}
}
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
lean_dec_ref(v___x_1545_);
lean_dec(v___x_1544_);
lean_dec_ref(v___x_1543_);
lean_dec_ref(v_decl_1540_);
lean_del_object(v___x_1517_);
lean_dec(v_snd_1515_);
lean_del_object(v___x_1512_);
lean_dec_ref(v_params_1487_);
lean_dec_ref(v_fst_1486_);
lean_dec_ref(v_val_1485_);
lean_dec(v___x_1484_);
lean_dec(v_discr_1483_);
v_a_1557_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1559_ = v___x_1546_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1546_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1557_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec(v_a_1527_);
lean_del_object(v___x_1517_);
lean_dec(v_snd_1515_);
lean_dec(v_fst_1514_);
lean_del_object(v___x_1512_);
lean_dec(v_fst_1510_);
lean_dec_ref(v_params_1487_);
lean_dec_ref(v_fst_1486_);
lean_dec_ref(v_val_1485_);
lean_dec(v___x_1484_);
lean_dec(v_discr_1483_);
v_a_1565_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1538_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1538_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
lean_del_object(v___x_1517_);
lean_dec(v_snd_1515_);
lean_dec(v_fst_1514_);
lean_del_object(v___x_1512_);
lean_dec(v_fst_1510_);
lean_dec_ref(v_params_1487_);
lean_dec_ref(v_fst_1486_);
lean_dec_ref(v_val_1485_);
lean_dec(v___x_1484_);
lean_dec(v_discr_1483_);
v_a_1573_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1526_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1526_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1573_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
}
else
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1588_; 
lean_del_object(v___x_1517_);
lean_dec(v_snd_1515_);
lean_dec(v_fst_1514_);
lean_del_object(v___x_1512_);
lean_dec(v_fst_1510_);
lean_dec_ref(v_params_1487_);
lean_dec_ref(v_fst_1486_);
lean_dec_ref(v_val_1485_);
lean_dec(v___x_1484_);
lean_dec(v_discr_1483_);
v_a_1581_ = lean_ctor_get(v___x_1524_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1524_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1583_ = v___x_1524_;
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1524_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1584_ == 0)
{
v___x_1586_ = v___x_1583_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_a_1581_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
}
else
{
lean_object* v_code_1589_; lean_object* v___x_1590_; 
v_code_1589_ = lean_ctor_get(v_a_1520_, 0);
lean_inc_ref(v_code_1589_);
v___x_1590_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_code_1589_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v_a_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___f_1595_; uint8_t v___x_1596_; 
v_a_1591_ = lean_ctor_get(v___x_1590_, 0);
lean_inc(v_a_1591_);
lean_dec_ref_known(v___x_1590_, 1);
v___x_1592_ = l_Lean_Compiler_LCNF_Cases_getCtorNames___redArg(v_snd_1489_);
v___x_1593_ = lean_box(v___x_1507_);
v___x_1594_ = lean_box(v___x_1488_);
lean_inc(v___x_1592_);
v___f_1595_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1595_, 0, v___x_1592_);
lean_closure_set(v___f_1595_, 1, v___x_1593_);
lean_closure_set(v___f_1595_, 2, v___x_1594_);
lean_inc(v___x_1484_);
v___x_1596_ = l_Lean_NameSet_any(v___x_1484_, v___f_1595_);
if (v___x_1596_ == 0)
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1600_; 
lean_dec(v___x_1592_);
lean_inc_ref(v_a_1520_);
v___x_1597_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_1520_, v_a_1591_);
v___x_1598_ = lean_array_push(v_snd_1515_, v___x_1597_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 1, v___x_1598_);
v___x_1600_ = v___x_1517_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_fst_1514_);
lean_ctor_set(v_reuseFailAlloc_1604_, 1, v___x_1598_);
v___x_1600_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
lean_object* v___x_1602_; 
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 1, v___x_1600_);
v___x_1602_ = v___x_1512_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v_fst_1510_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v___x_1600_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
v_a_1503_ = v___x_1602_;
goto v___jp_1502_;
}
}
}
else
{
lean_object* v_paramIdx_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v_paramIdx_1605_ = lean_ctor_get(v_val_1485_, 0);
v___x_1606_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt_go___closed__1));
lean_inc(v_a_1591_);
lean_inc_ref(v_fst_1486_);
v___x_1607_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJpAlt(v_fst_1486_, v_params_1487_, v_paramIdx_1605_, v___x_1606_, v_a_1591_, v___x_1507_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v_decl_1609_; uint8_t v_dependsOnDiscr_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v_a_1614_; lean_object* v___x_1626_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v___x_1607_, 1);
v_decl_1609_ = lean_ctor_get(v_a_1608_, 0);
lean_inc_ref_n(v_decl_1609_, 2);
v_dependsOnDiscr_1610_ = lean_ctor_get_uint8(v_a_1608_, sizeof(void*)*1 + 1);
v___x_1611_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1611_, 0, v_decl_1609_);
v___x_1612_ = lean_array_push(v_fst_1514_, v___x_1611_);
v___x_1626_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v___x_1519_, v_a_1591_, v___y_1498_);
lean_dec(v_a_1591_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_object* v___x_1627_; 
lean_dec_ref_known(v___x_1626_, 1);
lean_inc(v___x_1484_);
v___x_1627_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2___redArg(v___x_1592_, v_a_1608_, v_fst_1510_, v___x_1484_);
lean_dec(v___x_1592_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; lean_object* v_a_1629_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v___x_1627_, 1);
v_a_1629_ = lean_ctor_get(v_a_1628_, 0);
lean_inc(v_a_1629_);
lean_dec(v_a_1628_);
v_a_1614_ = v_a_1629_;
goto v___jp_1613_;
}
else
{
lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1637_; 
lean_dec_ref(v___x_1612_);
lean_dec_ref(v_decl_1609_);
lean_del_object(v___x_1517_);
lean_dec(v_snd_1515_);
lean_del_object(v___x_1512_);
lean_dec_ref(v_params_1487_);
lean_dec_ref(v_fst_1486_);
lean_dec_ref(v_val_1485_);
lean_dec(v___x_1484_);
lean_dec(v_discr_1483_);
v_a_1630_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1632_ = v___x_1627_;
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_dec(v___x_1627_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1635_; 
if (v_isShared_1633_ == 0)
{
v___x_1635_ = v___x_1632_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_a_1630_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
}
else
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
lean_dec_ref(v___x_1612_);
lean_dec_ref(v_decl_1609_);
lean_dec(v_a_1608_);
lean_dec(v___x_1592_);
lean_del_object(v___x_1517_);
lean_dec(v_snd_1515_);
lean_del_object(v___x_1512_);
lean_dec(v_fst_1510_);
lean_dec_ref(v_params_1487_);
lean_dec_ref(v_fst_1486_);
lean_dec_ref(v_val_1485_);
lean_dec(v___x_1484_);
lean_dec(v_discr_1483_);
v_a_1638_ = lean_ctor_get(v___x_1626_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1626_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1640_ = v___x_1626_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1626_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
v___jp_1613_:
{
lean_object* v_fvarId_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1621_; 
v_fvarId_1615_ = lean_ctor_get(v_decl_1609_, 0);
lean_inc(v_fvarId_1615_);
lean_dec_ref(v_decl_1609_);
lean_inc(v_paramIdx_1605_);
lean_inc_ref(v_params_1487_);
v___x_1616_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_mkJmpArgsAtJp(v_params_1487_, v_paramIdx_1605_, v___x_1606_, v_dependsOnDiscr_1610_);
v___x_1617_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1617_, 0, v_fvarId_1615_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
lean_inc_ref(v_a_1520_);
v___x_1618_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_1520_, v___x_1617_);
v___x_1619_ = lean_array_push(v_snd_1515_, v___x_1618_);
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 1, v___x_1619_);
lean_ctor_set(v___x_1517_, 0, v___x_1612_);
v___x_1621_ = v___x_1517_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1612_);
lean_ctor_set(v_reuseFailAlloc_1625_, 1, v___x_1619_);
v___x_1621_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
lean_object* v___x_1623_; 
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 1, v___x_1621_);
lean_ctor_set(v___x_1512_, 0, v_a_1614_);
v___x_1623_ = v___x_1512_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1614_);
lean_ctor_set(v_reuseFailAlloc_1624_, 1, v___x_1621_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
v_a_1503_ = v___x_1623_;
goto v___jp_1502_;
}
}
}
}
else
{
lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1653_; 
lean_dec(v___x_1592_);
lean_dec(v_a_1591_);
lean_del_object(v___x_1517_);
lean_dec(v_snd_1515_);
lean_dec(v_fst_1514_);
lean_del_object(v___x_1512_);
lean_dec(v_fst_1510_);
lean_dec_ref(v_params_1487_);
lean_dec_ref(v_fst_1486_);
lean_dec_ref(v_val_1485_);
lean_dec(v___x_1484_);
lean_dec(v_discr_1483_);
v_a_1646_ = lean_ctor_get(v___x_1607_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1648_ = v___x_1607_;
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v___x_1607_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v_a_1646_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
}
}
else
{
lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
lean_del_object(v___x_1517_);
lean_dec(v_snd_1515_);
lean_dec(v_fst_1514_);
lean_del_object(v___x_1512_);
lean_dec(v_fst_1510_);
lean_dec_ref(v_params_1487_);
lean_dec_ref(v_fst_1486_);
lean_dec_ref(v_val_1485_);
lean_dec(v___x_1484_);
lean_dec(v_discr_1483_);
v_a_1654_ = lean_ctor_get(v___x_1590_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1590_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_dec(v___x_1590_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1654_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
}
}
}
v___jp_1502_:
{
size_t v___x_1504_; size_t v___x_1505_; 
v___x_1504_ = ((size_t)1ULL);
v___x_1505_ = lean_usize_add(v_i_1492_, v___x_1504_);
v_i_1492_ = v___x_1505_;
v_b_1493_ = v_a_1503_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f(lean_object* v_decl_1664_, lean_object* v_k_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_){
_start:
{
lean_object* v_fvarId_1674_; lean_object* v_params_1675_; lean_object* v_type_1676_; lean_object* v_value_1677_; lean_object* v___x_1678_; 
v_fvarId_1674_ = lean_ctor_get(v_decl_1664_, 0);
v_params_1675_ = lean_ctor_get(v_decl_1664_, 2);
lean_inc_ref(v_params_1675_);
v_type_1676_ = lean_ctor_get(v_decl_1664_, 3);
lean_inc_ref(v_type_1676_);
v_value_1677_ = lean_ctor_get(v_decl_1664_, 4);
v___x_1678_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_a_1666_, v_fvarId_1674_);
if (lean_obj_tag(v___x_1678_) == 1)
{
lean_object* v_val_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1756_; 
v_val_1679_ = lean_ctor_get(v___x_1678_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1678_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1681_ = v___x_1678_;
v_isShared_1682_ = v_isSharedCheck_1756_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_val_1679_);
lean_dec(v___x_1678_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1756_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v_ctorNames_1683_; uint8_t v___x_1684_; 
v_ctorNames_1683_ = lean_ctor_get(v_val_1679_, 1);
lean_inc(v_ctorNames_1683_);
v___x_1684_ = l_Lean_NameSet_isEmpty(v_ctorNames_1683_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; lean_object* v_snd_1686_; lean_object* v_fst_1687_; lean_object* v_typeName_1688_; lean_object* v_resultType_1689_; lean_object* v_discr_1690_; lean_object* v_alts_1691_; uint8_t v___x_1692_; lean_object* v___x_1693_; size_t v_sz_1694_; size_t v___x_1695_; lean_object* v___x_1696_; 
v___x_1685_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_extractJpCases(v_value_1677_);
v_snd_1686_ = lean_ctor_get(v___x_1685_, 1);
lean_inc(v_snd_1686_);
v_fst_1687_ = lean_ctor_get(v___x_1685_, 0);
lean_inc_n(v_fst_1687_, 2);
lean_dec_ref(v___x_1685_);
v_typeName_1688_ = lean_ctor_get(v_snd_1686_, 0);
lean_inc(v_typeName_1688_);
v_resultType_1689_ = lean_ctor_get(v_snd_1686_, 1);
lean_inc_ref(v_resultType_1689_);
v_discr_1690_ = lean_ctor_get(v_snd_1686_, 2);
lean_inc_n(v_discr_1690_, 2);
v_alts_1691_ = lean_ctor_get(v_snd_1686_, 3);
lean_inc_ref(v_alts_1691_);
v___x_1692_ = 0;
v___x_1693_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f___closed__1));
v_sz_1694_ = lean_array_size(v_alts_1691_);
v___x_1695_ = ((size_t)0ULL);
lean_inc_ref(v_params_1675_);
v___x_1696_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3(v_discr_1690_, v_ctorNames_1683_, v_val_1679_, v_fst_1687_, v_params_1675_, v___x_1684_, v_snd_1686_, v_alts_1691_, v_sz_1694_, v___x_1695_, v___x_1693_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_);
lean_dec_ref(v_alts_1691_);
lean_dec(v_snd_1686_);
if (lean_obj_tag(v___x_1696_) == 0)
{
lean_object* v_a_1697_; lean_object* v_snd_1698_; lean_object* v_fst_1699_; lean_object* v_fst_1700_; lean_object* v_snd_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1745_; 
v_a_1697_ = lean_ctor_get(v___x_1696_, 0);
lean_inc(v_a_1697_);
lean_dec_ref_known(v___x_1696_, 1);
v_snd_1698_ = lean_ctor_get(v_a_1697_, 1);
lean_inc(v_snd_1698_);
v_fst_1699_ = lean_ctor_get(v_a_1697_, 0);
lean_inc(v_fst_1699_);
lean_dec(v_a_1697_);
v_fst_1700_ = lean_ctor_get(v_snd_1698_, 0);
v_snd_1701_ = lean_ctor_get(v_snd_1698_, 1);
v_isSharedCheck_1745_ = !lean_is_exclusive(v_snd_1698_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1703_ = v_snd_1698_;
v_isShared_1704_ = v_isSharedCheck_1745_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_snd_1701_);
lean_inc(v_fst_1700_);
lean_dec(v_snd_1698_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1745_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v___x_1705_ = lean_st_ref_take(v_a_1667_);
lean_inc(v_fvarId_1674_);
v___x_1706_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_1674_, v_fst_1699_, v___x_1705_);
v___x_1707_ = lean_st_ref_put(v_a_1667_, v___x_1706_);
v___x_1708_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1708_, 0, v_typeName_1688_);
lean_ctor_set(v___x_1708_, 1, v_resultType_1689_);
lean_ctor_set(v___x_1708_, 2, v_discr_1690_);
lean_ctor_set(v___x_1708_, 3, v_snd_1701_);
v___x_1709_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1708_);
v___x_1710_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_fst_1687_, v___x_1709_);
lean_dec(v_fst_1687_);
v___x_1711_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1692_, v_decl_1664_, v_type_1676_, v_params_1675_, v___x_1710_, v_a_1670_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v_a_1712_; lean_object* v___x_1713_; 
v_a_1712_ = lean_ctor_get(v___x_1711_, 0);
lean_inc(v_a_1712_);
lean_dec_ref_known(v___x_1711_, 1);
v___x_1713_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_k_1665_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1728_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1716_ = v___x_1713_;
v_isShared_1717_ = v_isSharedCheck_1728_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_a_1714_);
lean_dec(v___x_1713_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1728_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1719_; 
if (v_isShared_1704_ == 0)
{
lean_ctor_set_tag(v___x_1703_, 2);
lean_ctor_set(v___x_1703_, 1, v_a_1714_);
lean_ctor_set(v___x_1703_, 0, v_a_1712_);
v___x_1719_ = v___x_1703_;
goto v_reusejp_1718_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1712_);
lean_ctor_set(v_reuseFailAlloc_1727_, 1, v_a_1714_);
v___x_1719_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1718_;
}
v_reusejp_1718_:
{
lean_object* v___x_1720_; lean_object* v___x_1722_; 
v___x_1720_ = l_Lean_Compiler_LCNF_attachCodeDecls___redArg(v_fst_1700_, v___x_1719_);
lean_dec(v_fst_1700_);
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 0, v___x_1720_);
v___x_1722_ = v___x_1681_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v___x_1720_);
v___x_1722_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
lean_object* v___x_1724_; 
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 0, v___x_1722_);
v___x_1724_ = v___x_1716_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v___x_1722_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
}
}
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
lean_dec(v_a_1712_);
lean_del_object(v___x_1703_);
lean_dec(v_fst_1700_);
lean_del_object(v___x_1681_);
v_a_1729_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1713_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1713_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1734_; 
if (v_isShared_1732_ == 0)
{
v___x_1734_ = v___x_1731_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1729_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1744_; 
lean_del_object(v___x_1703_);
lean_dec(v_fst_1700_);
lean_del_object(v___x_1681_);
lean_dec_ref(v_k_1665_);
v_a_1737_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1744_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1744_ == 0)
{
v___x_1739_ = v___x_1711_;
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v___x_1711_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1744_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1742_; 
if (v_isShared_1740_ == 0)
{
v___x_1742_ = v___x_1739_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_a_1737_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec(v_discr_1690_);
lean_dec_ref(v_resultType_1689_);
lean_dec(v_typeName_1688_);
lean_dec(v_fst_1687_);
lean_del_object(v___x_1681_);
lean_dec_ref(v_type_1676_);
lean_dec_ref(v_params_1675_);
lean_dec_ref(v_k_1665_);
lean_dec_ref(v_decl_1664_);
v_a_1746_ = lean_ctor_get(v___x_1696_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1696_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1696_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1696_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
else
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
lean_dec(v_ctorNames_1683_);
lean_del_object(v___x_1681_);
lean_dec(v_val_1679_);
lean_dec_ref(v_type_1676_);
lean_dec_ref(v_params_1675_);
lean_dec_ref(v_k_1665_);
lean_dec_ref(v_decl_1664_);
v___x_1754_ = lean_box(0);
v___x_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1755_, 0, v___x_1754_);
return v___x_1755_;
}
}
}
else
{
lean_object* v___x_1757_; lean_object* v___x_1758_; 
lean_dec(v___x_1678_);
lean_dec_ref(v_type_1676_);
lean_dec_ref(v_params_1675_);
lean_dec_ref(v_k_1665_);
lean_dec_ref(v_decl_1664_);
v___x_1757_ = lean_box(0);
v___x_1758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1758_, 0, v___x_1757_);
return v___x_1758_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(lean_object* v_code_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_){
_start:
{
switch(lean_obj_tag(v_code_1759_))
{
case 0:
{
lean_object* v_decl_1768_; lean_object* v_k_1769_; lean_object* v___x_1770_; 
v_decl_1768_ = lean_ctor_get(v_code_1759_, 0);
v_k_1769_ = lean_ctor_get(v_code_1759_, 1);
lean_inc_ref(v_k_1769_);
v___x_1770_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_k_1769_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_);
if (lean_obj_tag(v___x_1770_) == 0)
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1807_; 
v_a_1771_ = lean_ctor_get(v___x_1770_, 0);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1770_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1773_ = v___x_1770_;
v_isShared_1774_ = v_isSharedCheck_1807_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1770_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1807_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
size_t v___x_1775_; size_t v___x_1776_; uint8_t v___x_1777_; 
v___x_1775_ = lean_ptr_addr(v_k_1769_);
v___x_1776_ = lean_ptr_addr(v_a_1771_);
v___x_1777_ = lean_usize_dec_eq(v___x_1775_, v___x_1776_);
if (v___x_1777_ == 0)
{
lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1787_; 
lean_inc_ref(v_decl_1768_);
v_isSharedCheck_1787_ = !lean_is_exclusive(v_code_1759_);
if (v_isSharedCheck_1787_ == 0)
{
lean_object* v_unused_1788_; lean_object* v_unused_1789_; 
v_unused_1788_ = lean_ctor_get(v_code_1759_, 1);
lean_dec(v_unused_1788_);
v_unused_1789_ = lean_ctor_get(v_code_1759_, 0);
lean_dec(v_unused_1789_);
v___x_1779_ = v_code_1759_;
v_isShared_1780_ = v_isSharedCheck_1787_;
goto v_resetjp_1778_;
}
else
{
lean_dec(v_code_1759_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1787_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
lean_ctor_set(v___x_1779_, 1, v_a_1771_);
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v_decl_1768_);
lean_ctor_set(v_reuseFailAlloc_1786_, 1, v_a_1771_);
v___x_1782_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
lean_object* v___x_1784_; 
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 0, v___x_1782_);
v___x_1784_ = v___x_1773_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
else
{
size_t v___x_1790_; uint8_t v___x_1791_; 
v___x_1790_ = lean_ptr_addr(v_decl_1768_);
v___x_1791_ = lean_usize_dec_eq(v___x_1790_, v___x_1790_);
if (v___x_1791_ == 0)
{
lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1801_; 
lean_inc_ref(v_decl_1768_);
v_isSharedCheck_1801_ = !lean_is_exclusive(v_code_1759_);
if (v_isSharedCheck_1801_ == 0)
{
lean_object* v_unused_1802_; lean_object* v_unused_1803_; 
v_unused_1802_ = lean_ctor_get(v_code_1759_, 1);
lean_dec(v_unused_1802_);
v_unused_1803_ = lean_ctor_get(v_code_1759_, 0);
lean_dec(v_unused_1803_);
v___x_1793_ = v_code_1759_;
v_isShared_1794_ = v_isSharedCheck_1801_;
goto v_resetjp_1792_;
}
else
{
lean_dec(v_code_1759_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1801_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1796_; 
if (v_isShared_1794_ == 0)
{
lean_ctor_set(v___x_1793_, 1, v_a_1771_);
v___x_1796_ = v___x_1793_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_decl_1768_);
lean_ctor_set(v_reuseFailAlloc_1800_, 1, v_a_1771_);
v___x_1796_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
lean_object* v___x_1798_; 
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 0, v___x_1796_);
v___x_1798_ = v___x_1773_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v___x_1796_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
else
{
lean_object* v___x_1805_; 
lean_dec(v_a_1771_);
if (v_isShared_1774_ == 0)
{
lean_ctor_set(v___x_1773_, 0, v_code_1759_);
v___x_1805_ = v___x_1773_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_code_1759_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
return v___x_1805_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_1759_, 2);
return v___x_1770_;
}
}
case 1:
{
lean_object* v_decl_1808_; lean_object* v_k_1809_; lean_object* v_params_1810_; lean_object* v_type_1811_; lean_object* v_value_1812_; uint8_t v___x_1813_; lean_object* v___x_1814_; 
v_decl_1808_ = lean_ctor_get(v_code_1759_, 0);
v_k_1809_ = lean_ctor_get(v_code_1759_, 1);
v_params_1810_ = lean_ctor_get(v_decl_1808_, 2);
v_type_1811_ = lean_ctor_get(v_decl_1808_, 3);
v_value_1812_ = lean_ctor_get(v_decl_1808_, 4);
v___x_1813_ = 0;
lean_inc_ref(v_value_1812_);
v___x_1814_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_value_1812_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v_a_1815_; lean_object* v___x_1816_; 
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
lean_inc(v_a_1815_);
lean_dec_ref_known(v___x_1814_, 1);
lean_inc_ref(v_params_1810_);
lean_inc_ref(v_type_1811_);
lean_inc_ref(v_decl_1808_);
v___x_1816_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1813_, v_decl_1808_, v_type_1811_, v_params_1810_, v_a_1815_, v_a_1764_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v___x_1818_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
lean_inc(v_a_1817_);
lean_dec_ref_known(v___x_1816_, 1);
lean_inc_ref(v_k_1809_);
v___x_1818_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_k_1809_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1856_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1821_ = v___x_1818_;
v_isShared_1822_ = v_isSharedCheck_1856_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_a_1819_);
lean_dec(v___x_1818_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1856_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
size_t v___x_1823_; size_t v___x_1824_; uint8_t v___x_1825_; 
v___x_1823_ = lean_ptr_addr(v_k_1809_);
v___x_1824_ = lean_ptr_addr(v_a_1819_);
v___x_1825_ = lean_usize_dec_eq(v___x_1823_, v___x_1824_);
if (v___x_1825_ == 0)
{
lean_object* v___x_1827_; uint8_t v_isShared_1828_; uint8_t v_isSharedCheck_1835_; 
v_isSharedCheck_1835_ = !lean_is_exclusive(v_code_1759_);
if (v_isSharedCheck_1835_ == 0)
{
lean_object* v_unused_1836_; lean_object* v_unused_1837_; 
v_unused_1836_ = lean_ctor_get(v_code_1759_, 1);
lean_dec(v_unused_1836_);
v_unused_1837_ = lean_ctor_get(v_code_1759_, 0);
lean_dec(v_unused_1837_);
v___x_1827_ = v_code_1759_;
v_isShared_1828_ = v_isSharedCheck_1835_;
goto v_resetjp_1826_;
}
else
{
lean_dec(v_code_1759_);
v___x_1827_ = lean_box(0);
v_isShared_1828_ = v_isSharedCheck_1835_;
goto v_resetjp_1826_;
}
v_resetjp_1826_:
{
lean_object* v___x_1830_; 
if (v_isShared_1828_ == 0)
{
lean_ctor_set(v___x_1827_, 1, v_a_1819_);
lean_ctor_set(v___x_1827_, 0, v_a_1817_);
v___x_1830_ = v___x_1827_;
goto v_reusejp_1829_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_a_1817_);
lean_ctor_set(v_reuseFailAlloc_1834_, 1, v_a_1819_);
v___x_1830_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1829_;
}
v_reusejp_1829_:
{
lean_object* v___x_1832_; 
if (v_isShared_1822_ == 0)
{
lean_ctor_set(v___x_1821_, 0, v___x_1830_);
v___x_1832_ = v___x_1821_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v___x_1830_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
}
}
else
{
size_t v___x_1838_; size_t v___x_1839_; uint8_t v___x_1840_; 
v___x_1838_ = lean_ptr_addr(v_decl_1808_);
v___x_1839_ = lean_ptr_addr(v_a_1817_);
v___x_1840_ = lean_usize_dec_eq(v___x_1838_, v___x_1839_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1850_; 
v_isSharedCheck_1850_ = !lean_is_exclusive(v_code_1759_);
if (v_isSharedCheck_1850_ == 0)
{
lean_object* v_unused_1851_; lean_object* v_unused_1852_; 
v_unused_1851_ = lean_ctor_get(v_code_1759_, 1);
lean_dec(v_unused_1851_);
v_unused_1852_ = lean_ctor_get(v_code_1759_, 0);
lean_dec(v_unused_1852_);
v___x_1842_ = v_code_1759_;
v_isShared_1843_ = v_isSharedCheck_1850_;
goto v_resetjp_1841_;
}
else
{
lean_dec(v_code_1759_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1850_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
lean_ctor_set(v___x_1842_, 1, v_a_1819_);
lean_ctor_set(v___x_1842_, 0, v_a_1817_);
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1817_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v_a_1819_);
v___x_1845_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
lean_object* v___x_1847_; 
if (v_isShared_1822_ == 0)
{
lean_ctor_set(v___x_1821_, 0, v___x_1845_);
v___x_1847_ = v___x_1821_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v___x_1845_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
}
else
{
lean_object* v___x_1854_; 
lean_dec(v_a_1819_);
lean_dec(v_a_1817_);
if (v_isShared_1822_ == 0)
{
lean_ctor_set(v___x_1821_, 0, v_code_1759_);
v___x_1854_ = v___x_1821_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v_code_1759_);
v___x_1854_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
return v___x_1854_;
}
}
}
}
}
else
{
lean_dec(v_a_1817_);
lean_dec_ref_known(v_code_1759_, 2);
return v___x_1818_;
}
}
else
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
lean_dec_ref_known(v_code_1759_, 2);
v_a_1857_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1859_ = v___x_1816_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1816_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1857_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1759_, 2);
return v___x_1814_;
}
}
case 2:
{
lean_object* v_decl_1865_; lean_object* v_k_1866_; lean_object* v___x_1867_; 
v_decl_1865_ = lean_ctor_get(v_code_1759_, 0);
v_k_1866_ = lean_ctor_get(v_code_1759_, 1);
lean_inc_ref(v_k_1866_);
lean_inc_ref(v_decl_1865_);
v___x_1867_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f(v_decl_1865_, v_k_1866_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1931_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1870_ = v___x_1867_;
v_isShared_1871_ = v_isSharedCheck_1931_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1867_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1931_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
if (lean_obj_tag(v_a_1868_) == 1)
{
lean_object* v_val_1872_; lean_object* v___x_1874_; 
lean_dec_ref_known(v_code_1759_, 2);
v_val_1872_ = lean_ctor_get(v_a_1868_, 0);
lean_inc(v_val_1872_);
lean_dec_ref_known(v_a_1868_, 1);
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 0, v_val_1872_);
v___x_1874_ = v___x_1870_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_val_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
else
{
lean_object* v_params_1876_; lean_object* v_type_1877_; lean_object* v_value_1878_; uint8_t v___x_1879_; lean_object* v___x_1880_; 
lean_del_object(v___x_1870_);
lean_dec(v_a_1868_);
v_params_1876_ = lean_ctor_get(v_decl_1865_, 2);
v_type_1877_ = lean_ctor_get(v_decl_1865_, 3);
v_value_1878_ = lean_ctor_get(v_decl_1865_, 4);
v___x_1879_ = 0;
lean_inc_ref(v_value_1878_);
v___x_1880_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_value_1878_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; lean_object* v___x_1882_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v___x_1880_, 1);
lean_inc_ref(v_params_1876_);
lean_inc_ref(v_type_1877_);
lean_inc_ref(v_decl_1865_);
v___x_1882_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1879_, v_decl_1865_, v_type_1877_, v_params_1876_, v_a_1881_, v_a_1764_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v_a_1883_; lean_object* v___x_1884_; 
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
lean_inc(v_a_1883_);
lean_dec_ref_known(v___x_1882_, 1);
lean_inc_ref(v_k_1866_);
v___x_1884_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_k_1866_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1922_; 
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1887_ = v___x_1884_;
v_isShared_1888_ = v_isSharedCheck_1922_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1884_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1922_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
size_t v___x_1889_; size_t v___x_1890_; uint8_t v___x_1891_; 
v___x_1889_ = lean_ptr_addr(v_k_1866_);
v___x_1890_ = lean_ptr_addr(v_a_1885_);
v___x_1891_ = lean_usize_dec_eq(v___x_1889_, v___x_1890_);
if (v___x_1891_ == 0)
{
lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1901_; 
v_isSharedCheck_1901_ = !lean_is_exclusive(v_code_1759_);
if (v_isSharedCheck_1901_ == 0)
{
lean_object* v_unused_1902_; lean_object* v_unused_1903_; 
v_unused_1902_ = lean_ctor_get(v_code_1759_, 1);
lean_dec(v_unused_1902_);
v_unused_1903_ = lean_ctor_get(v_code_1759_, 0);
lean_dec(v_unused_1903_);
v___x_1893_ = v_code_1759_;
v_isShared_1894_ = v_isSharedCheck_1901_;
goto v_resetjp_1892_;
}
else
{
lean_dec(v_code_1759_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1901_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1896_; 
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 1, v_a_1885_);
lean_ctor_set(v___x_1893_, 0, v_a_1883_);
v___x_1896_ = v___x_1893_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_a_1883_);
lean_ctor_set(v_reuseFailAlloc_1900_, 1, v_a_1885_);
v___x_1896_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
lean_object* v___x_1898_; 
if (v_isShared_1888_ == 0)
{
lean_ctor_set(v___x_1887_, 0, v___x_1896_);
v___x_1898_ = v___x_1887_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1896_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
else
{
size_t v___x_1904_; size_t v___x_1905_; uint8_t v___x_1906_; 
v___x_1904_ = lean_ptr_addr(v_decl_1865_);
v___x_1905_ = lean_ptr_addr(v_a_1883_);
v___x_1906_ = lean_usize_dec_eq(v___x_1904_, v___x_1905_);
if (v___x_1906_ == 0)
{
lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1916_; 
v_isSharedCheck_1916_ = !lean_is_exclusive(v_code_1759_);
if (v_isSharedCheck_1916_ == 0)
{
lean_object* v_unused_1917_; lean_object* v_unused_1918_; 
v_unused_1917_ = lean_ctor_get(v_code_1759_, 1);
lean_dec(v_unused_1917_);
v_unused_1918_ = lean_ctor_get(v_code_1759_, 0);
lean_dec(v_unused_1918_);
v___x_1908_ = v_code_1759_;
v_isShared_1909_ = v_isSharedCheck_1916_;
goto v_resetjp_1907_;
}
else
{
lean_dec(v_code_1759_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1916_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
lean_ctor_set(v___x_1908_, 1, v_a_1885_);
lean_ctor_set(v___x_1908_, 0, v_a_1883_);
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1883_);
lean_ctor_set(v_reuseFailAlloc_1915_, 1, v_a_1885_);
v___x_1911_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
lean_object* v___x_1913_; 
if (v_isShared_1888_ == 0)
{
lean_ctor_set(v___x_1887_, 0, v___x_1911_);
v___x_1913_ = v___x_1887_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1911_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
else
{
lean_object* v___x_1920_; 
lean_dec(v_a_1885_);
lean_dec(v_a_1883_);
if (v_isShared_1888_ == 0)
{
lean_ctor_set(v___x_1887_, 0, v_code_1759_);
v___x_1920_ = v___x_1887_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_code_1759_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
}
else
{
lean_dec(v_a_1883_);
lean_dec_ref_known(v_code_1759_, 2);
return v___x_1884_;
}
}
else
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1930_; 
lean_dec_ref_known(v_code_1759_, 2);
v_a_1923_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1925_ = v___x_1882_;
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1882_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1928_; 
if (v_isShared_1926_ == 0)
{
v___x_1928_ = v___x_1925_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_a_1923_);
v___x_1928_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
return v___x_1928_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1759_, 2);
return v___x_1880_;
}
}
}
}
else
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1939_; 
lean_dec_ref_known(v_code_1759_, 2);
v_a_1932_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1934_ = v___x_1867_;
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1867_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1937_; 
if (v_isShared_1935_ == 0)
{
v___x_1937_ = v___x_1934_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v_a_1932_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
return v___x_1937_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_1940_; lean_object* v_args_1941_; lean_object* v___x_1942_; 
v_fvarId_1940_ = lean_ctor_get(v_code_1759_, 0);
v_args_1941_ = lean_ctor_get(v_code_1759_, 1);
lean_inc_ref(v_args_1941_);
v___x_1942_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJmp_x3f(v_fvarId_1940_, v_args_1941_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_);
if (lean_obj_tag(v___x_1942_) == 0)
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1954_; 
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1954_ == 0)
{
v___x_1945_ = v___x_1942_;
v_isShared_1946_ = v_isSharedCheck_1954_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1942_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1954_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
if (lean_obj_tag(v_a_1943_) == 1)
{
lean_object* v_val_1947_; lean_object* v___x_1949_; 
lean_dec_ref_known(v_code_1759_, 2);
v_val_1947_ = lean_ctor_get(v_a_1943_, 0);
lean_inc(v_val_1947_);
lean_dec_ref_known(v_a_1943_, 1);
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 0, v_val_1947_);
v___x_1949_ = v___x_1945_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_val_1947_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
else
{
lean_object* v___x_1952_; 
lean_dec(v_a_1943_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 0, v_code_1759_);
v___x_1952_ = v___x_1945_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_code_1759_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
}
else
{
lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1962_; 
lean_dec_ref_known(v_code_1759_, 2);
v_a_1955_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1962_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1957_ = v___x_1942_;
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_dec(v___x_1942_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1960_; 
if (v_isShared_1958_ == 0)
{
v___x_1960_ = v___x_1957_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_a_1955_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
return v___x_1960_;
}
}
}
}
case 4:
{
lean_object* v_cases_1963_; lean_object* v_typeName_1964_; lean_object* v_resultType_1965_; lean_object* v_discr_1966_; lean_object* v_alts_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_2006_; 
v_cases_1963_ = lean_ctor_get(v_code_1759_, 0);
lean_inc_ref(v_cases_1963_);
v_typeName_1964_ = lean_ctor_get(v_cases_1963_, 0);
v_resultType_1965_ = lean_ctor_get(v_cases_1963_, 1);
v_discr_1966_ = lean_ctor_get(v_cases_1963_, 2);
v_alts_1967_ = lean_ctor_get(v_cases_1963_, 3);
v_isSharedCheck_2006_ = !lean_is_exclusive(v_cases_1963_);
if (v_isSharedCheck_2006_ == 0)
{
v___x_1969_ = v_cases_1963_;
v_isShared_1970_ = v_isSharedCheck_2006_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_alts_1967_);
lean_inc(v_discr_1966_);
lean_inc(v_resultType_1965_);
lean_inc(v_typeName_1964_);
lean_dec(v_cases_1963_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_2006_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1971_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_1967_);
lean_inc(v_discr_1966_);
v___x_1972_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit_spec__0(v_discr_1966_, v___x_1971_, v_alts_1967_, v_a_1760_, v_a_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_);
if (lean_obj_tag(v___x_1972_) == 0)
{
lean_object* v_a_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_1997_; 
v_a_1973_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1975_ = v___x_1972_;
v_isShared_1976_ = v_isSharedCheck_1997_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_a_1973_);
lean_dec(v___x_1972_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_1997_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
size_t v___x_1977_; size_t v___x_1978_; uint8_t v___x_1979_; 
v___x_1977_ = lean_ptr_addr(v_alts_1967_);
lean_dec_ref(v_alts_1967_);
v___x_1978_ = lean_ptr_addr(v_a_1973_);
v___x_1979_ = lean_usize_dec_eq(v___x_1977_, v___x_1978_);
if (v___x_1979_ == 0)
{
lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1992_; 
v_isSharedCheck_1992_ = !lean_is_exclusive(v_code_1759_);
if (v_isSharedCheck_1992_ == 0)
{
lean_object* v_unused_1993_; 
v_unused_1993_ = lean_ctor_get(v_code_1759_, 0);
lean_dec(v_unused_1993_);
v___x_1981_ = v_code_1759_;
v_isShared_1982_ = v_isSharedCheck_1992_;
goto v_resetjp_1980_;
}
else
{
lean_dec(v_code_1759_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1992_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 3, v_a_1973_);
v___x_1984_ = v___x_1969_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_typeName_1964_);
lean_ctor_set(v_reuseFailAlloc_1991_, 1, v_resultType_1965_);
lean_ctor_set(v_reuseFailAlloc_1991_, 2, v_discr_1966_);
lean_ctor_set(v_reuseFailAlloc_1991_, 3, v_a_1973_);
v___x_1984_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
lean_object* v___x_1986_; 
if (v_isShared_1982_ == 0)
{
lean_ctor_set(v___x_1981_, 0, v___x_1984_);
v___x_1986_ = v___x_1981_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1984_);
v___x_1986_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
lean_object* v___x_1988_; 
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 0, v___x_1986_);
v___x_1988_ = v___x_1975_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v___x_1986_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
}
}
}
else
{
lean_object* v___x_1995_; 
lean_dec(v_a_1973_);
lean_del_object(v___x_1969_);
lean_dec(v_discr_1966_);
lean_dec_ref(v_resultType_1965_);
lean_dec(v_typeName_1964_);
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 0, v_code_1759_);
v___x_1995_ = v___x_1975_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_code_1759_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_del_object(v___x_1969_);
lean_dec_ref(v_alts_1967_);
lean_dec(v_discr_1966_);
lean_dec_ref(v_resultType_1965_);
lean_dec(v_typeName_1964_);
lean_dec_ref_known(v_code_1759_, 1);
v_a_1998_ = lean_ctor_get(v___x_1972_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1972_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1972_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1972_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
}
default: 
{
lean_object* v___x_2007_; 
v___x_2007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2007_, 0, v_code_1759_);
return v___x_2007_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit_spec__0(lean_object* v_discr_2008_, lean_object* v_i_2009_, lean_object* v_as_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_){
_start:
{
lean_object* v___x_2019_; uint8_t v___x_2020_; 
v___x_2019_ = lean_array_get_size(v_as_2010_);
v___x_2020_ = lean_nat_dec_lt(v_i_2009_, v___x_2019_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; 
lean_dec(v_i_2009_);
lean_dec(v_discr_2008_);
v___x_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2021_, 0, v_as_2010_);
return v___x_2021_;
}
else
{
lean_object* v_a_2022_; lean_object* v_a_2024_; 
v_a_2022_ = lean_array_fget_borrowed(v_as_2010_, v_i_2009_);
if (lean_obj_tag(v_a_2022_) == 0)
{
lean_object* v_ctorName_2035_; lean_object* v_params_2036_; lean_object* v_code_2037_; lean_object* v___x_2038_; 
v_ctorName_2035_ = lean_ctor_get(v_a_2022_, 0);
v_params_2036_ = lean_ctor_get(v_a_2022_, 1);
v_code_2037_ = lean_ctor_get(v_a_2022_, 2);
lean_inc_ref(v_params_2036_);
lean_inc(v_ctorName_2035_);
lean_inc(v_discr_2008_);
v___x_2038_ = l___private_Lean_Compiler_LCNF_Simp_DiscrM_0__Lean_Compiler_LCNF_Simp_withDiscrCtorImp_updateCtx(v_discr_2008_, v_ctorName_2035_, v_params_2036_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
if (lean_obj_tag(v___x_2038_) == 0)
{
lean_object* v_a_2039_; lean_object* v___x_2040_; 
v_a_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_a_2039_);
lean_dec_ref_known(v___x_2038_, 1);
lean_inc_ref(v_code_2037_);
v___x_2040_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_code_2037_, v___y_2011_, v___y_2012_, v_a_2039_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
lean_dec(v_a_2039_);
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v_a_2041_; lean_object* v___x_2042_; 
v_a_2041_ = lean_ctor_get(v___x_2040_, 0);
lean_inc(v_a_2041_);
lean_dec_ref_known(v___x_2040_, 1);
lean_inc_ref(v_a_2022_);
v___x_2042_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2022_, v_a_2041_);
v_a_2024_ = v___x_2042_;
goto v___jp_2023_;
}
else
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
lean_dec_ref(v_as_2010_);
lean_dec(v_i_2009_);
lean_dec(v_discr_2008_);
v_a_2043_ = lean_ctor_get(v___x_2040_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2040_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2040_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
lean_dec_ref(v_as_2010_);
lean_dec(v_i_2009_);
lean_dec(v_discr_2008_);
v_a_2051_ = lean_ctor_get(v___x_2038_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2038_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_2038_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2038_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
}
else
{
lean_object* v_code_2059_; lean_object* v___x_2060_; 
v_code_2059_ = lean_ctor_get(v_a_2022_, 0);
lean_inc_ref(v_code_2059_);
v___x_2060_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_code_2059_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v___x_2062_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
lean_inc(v_a_2061_);
lean_dec_ref_known(v___x_2060_, 1);
lean_inc_ref(v_a_2022_);
v___x_2062_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2022_, v_a_2061_);
v_a_2024_ = v___x_2062_;
goto v___jp_2023_;
}
else
{
lean_object* v_a_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2070_; 
lean_dec_ref(v_as_2010_);
lean_dec(v_i_2009_);
lean_dec(v_discr_2008_);
v_a_2063_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2065_ = v___x_2060_;
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_a_2063_);
lean_dec(v___x_2060_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2070_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_a_2063_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
}
v___jp_2023_:
{
size_t v___x_2025_; size_t v___x_2026_; uint8_t v___x_2027_; 
v___x_2025_ = lean_ptr_addr(v_a_2022_);
v___x_2026_ = lean_ptr_addr(v_a_2024_);
v___x_2027_ = lean_usize_dec_eq(v___x_2025_, v___x_2026_);
if (v___x_2027_ == 0)
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2028_ = lean_unsigned_to_nat(1u);
v___x_2029_ = lean_nat_add(v_i_2009_, v___x_2028_);
v___x_2030_ = lean_array_fset(v_as_2010_, v_i_2009_, v_a_2024_);
lean_dec(v_i_2009_);
v_i_2009_ = v___x_2029_;
v_as_2010_ = v___x_2030_;
goto _start;
}
else
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
lean_dec_ref(v_a_2024_);
v___x_2032_ = lean_unsigned_to_nat(1u);
v___x_2033_ = lean_nat_add(v_i_2009_, v___x_2032_);
lean_dec(v_i_2009_);
v_i_2009_ = v___x_2033_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit_spec__0___boxed(lean_object* v_discr_2071_, lean_object* v_i_2072_, lean_object* v_as_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit_spec__0(v_discr_2071_, v_i_2072_, v_as_2073_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec_ref(v___y_2076_);
lean_dec(v___y_2075_);
lean_dec(v___y_2074_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f___boxed(lean_object* v_decl_2083_, lean_object* v_k_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_){
_start:
{
lean_object* v_res_2093_; 
v_res_2093_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f(v_decl_2083_, v_k_2084_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_);
lean_dec(v_a_2091_);
lean_dec_ref(v_a_2090_);
lean_dec(v_a_2089_);
lean_dec_ref(v_a_2088_);
lean_dec_ref(v_a_2087_);
lean_dec(v_a_2086_);
lean_dec(v_a_2085_);
return v_res_2093_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3___boxed(lean_object** _args){
lean_object* v_discr_2094_ = _args[0];
lean_object* v___x_2095_ = _args[1];
lean_object* v_val_2096_ = _args[2];
lean_object* v_fst_2097_ = _args[3];
lean_object* v_params_2098_ = _args[4];
lean_object* v___x_2099_ = _args[5];
lean_object* v_snd_2100_ = _args[6];
lean_object* v_as_2101_ = _args[7];
lean_object* v_sz_2102_ = _args[8];
lean_object* v_i_2103_ = _args[9];
lean_object* v_b_2104_ = _args[10];
lean_object* v___y_2105_ = _args[11];
lean_object* v___y_2106_ = _args[12];
lean_object* v___y_2107_ = _args[13];
lean_object* v___y_2108_ = _args[14];
lean_object* v___y_2109_ = _args[15];
lean_object* v___y_2110_ = _args[16];
lean_object* v___y_2111_ = _args[17];
lean_object* v___y_2112_ = _args[18];
_start:
{
uint8_t v___x_26373__boxed_2113_; size_t v_sz_boxed_2114_; size_t v_i_boxed_2115_; lean_object* v_res_2116_; 
v___x_26373__boxed_2113_ = lean_unbox(v___x_2099_);
v_sz_boxed_2114_ = lean_unbox_usize(v_sz_2102_);
lean_dec(v_sz_2102_);
v_i_boxed_2115_ = lean_unbox_usize(v_i_2103_);
lean_dec(v_i_2103_);
v_res_2116_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__3(v_discr_2094_, v___x_2095_, v_val_2096_, v_fst_2097_, v_params_2098_, v___x_26373__boxed_2113_, v_snd_2100_, v_as_2101_, v_sz_boxed_2114_, v_i_boxed_2115_, v_b_2104_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec_ref(v___y_2107_);
lean_dec(v___y_2106_);
lean_dec(v___y_2105_);
lean_dec_ref(v_as_2101_);
lean_dec_ref(v_snd_2100_);
return v_res_2116_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit___boxed(lean_object* v_code_2117_, lean_object* v_a_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_code_2117_, v_a_2118_, v_a_2119_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_);
lean_dec(v_a_2124_);
lean_dec_ref(v_a_2123_);
lean_dec(v_a_2122_);
lean_dec_ref(v_a_2121_);
lean_dec_ref(v_a_2120_);
lean_dec(v_a_2119_);
lean_dec(v_a_2118_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2(lean_object* v___x_2127_, lean_object* v_a_2128_, lean_object* v_init_2129_, lean_object* v_x_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v___x_2139_; 
v___x_2139_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2___redArg(v___x_2127_, v_a_2128_, v_init_2129_, v_x_2130_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2___boxed(lean_object* v___x_2140_, lean_object* v_a_2141_, lean_object* v_init_2142_, lean_object* v_x_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visitJp_x3f_spec__2(v___x_2140_, v_a_2141_, v_init_2142_, v_x_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec(v___y_2145_);
lean_dec(v___y_2144_);
lean_dec(v___x_2140_);
return v_res_2152_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__0(void){
_start:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2153_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__0, &l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__0_once, _init_l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__0);
v___x_2154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2153_);
return v___x_2154_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2155_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__0);
v___x_2156_ = lean_unsigned_to_nat(0u);
v___x_2157_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2157_, 0, v___x_2156_);
lean_ctor_set(v___x_2157_, 1, v___x_2156_);
lean_ctor_set(v___x_2157_, 2, v___x_2156_);
lean_ctor_set(v___x_2157_, 3, v___x_2156_);
lean_ctor_set(v___x_2157_, 4, v___x_2155_);
lean_ctor_set(v___x_2157_, 5, v___x_2155_);
lean_ctor_set(v___x_2157_, 6, v___x_2155_);
lean_ctor_set(v___x_2157_, 7, v___x_2155_);
lean_ctor_set(v___x_2157_, 8, v___x_2155_);
lean_ctor_set(v___x_2157_, 9, v___x_2155_);
lean_ctor_set(v___x_2157_, 10, v___x_2155_);
return v___x_2157_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__2(void){
_start:
{
lean_object* v___x_2158_; double v___x_2159_; 
v___x_2158_ = lean_unsigned_to_nat(0u);
v___x_2159_ = lean_float_of_nat(v___x_2158_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2(lean_object* v_cls_2163_, lean_object* v_msg_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_){
_start:
{
lean_object* v_toCold_2170_; lean_object* v_ref_2171_; lean_object* v___x_2172_; lean_object* v_env_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v_toCold_2170_ = lean_ctor_get(v___y_2167_, 0);
v_ref_2171_ = lean_ctor_get(v___y_2167_, 2);
v___x_2172_ = lean_st_ref_get(v___y_2168_);
v_env_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc_ref(v_env_2173_);
lean_dec(v___x_2172_);
v___x_2174_ = lean_st_ref_get(v___y_2166_);
v___x_2175_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_2165_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2234_; 
v_a_2176_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2178_ = v___x_2175_;
v_isShared_2179_ = v_isSharedCheck_2234_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2175_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2234_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v_lctx_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2232_; 
v_lctx_2180_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2232_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2232_ == 0)
{
lean_object* v_unused_2233_; 
v_unused_2233_ = lean_ctor_get(v___x_2174_, 1);
lean_dec(v_unused_2233_);
v___x_2182_ = v___x_2174_;
v_isShared_2183_ = v_isSharedCheck_2232_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_lctx_2180_);
lean_dec(v___x_2174_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2232_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v_options_2184_; uint8_t v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2190_; 
v_options_2184_ = lean_ctor_get(v_toCold_2170_, 2);
v___x_2185_ = lean_unbox(v_a_2176_);
lean_dec(v_a_2176_);
v___x_2186_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_2180_, v___x_2185_);
lean_dec_ref(v_lctx_2180_);
v___x_2187_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__1, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__1);
lean_inc_ref(v_options_2184_);
v___x_2188_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2188_, 0, v_env_2173_);
lean_ctor_set(v___x_2188_, 1, v___x_2187_);
lean_ctor_set(v___x_2188_, 2, v___x_2186_);
lean_ctor_set(v___x_2188_, 3, v_options_2184_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set_tag(v___x_2182_, 3);
lean_ctor_set(v___x_2182_, 1, v_msg_2164_);
lean_ctor_set(v___x_2182_, 0, v___x_2188_);
v___x_2190_ = v___x_2182_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v___x_2188_);
lean_ctor_set(v_reuseFailAlloc_2231_, 1, v_msg_2164_);
v___x_2190_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2191_; lean_object* v_traceState_2192_; lean_object* v_env_2193_; lean_object* v_nextMacroScope_2194_; lean_object* v_ngen_2195_; lean_object* v_auxDeclNGen_2196_; lean_object* v_cache_2197_; lean_object* v_messages_2198_; lean_object* v_infoState_2199_; lean_object* v_snapshotTasks_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2230_; 
v___x_2191_ = lean_st_ref_take(v___y_2168_);
v_traceState_2192_ = lean_ctor_get(v___x_2191_, 4);
v_env_2193_ = lean_ctor_get(v___x_2191_, 0);
v_nextMacroScope_2194_ = lean_ctor_get(v___x_2191_, 1);
v_ngen_2195_ = lean_ctor_get(v___x_2191_, 2);
v_auxDeclNGen_2196_ = lean_ctor_get(v___x_2191_, 3);
v_cache_2197_ = lean_ctor_get(v___x_2191_, 5);
v_messages_2198_ = lean_ctor_get(v___x_2191_, 6);
v_infoState_2199_ = lean_ctor_get(v___x_2191_, 7);
v_snapshotTasks_2200_ = lean_ctor_get(v___x_2191_, 8);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2202_ = v___x_2191_;
v_isShared_2203_ = v_isSharedCheck_2230_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_snapshotTasks_2200_);
lean_inc(v_infoState_2199_);
lean_inc(v_messages_2198_);
lean_inc(v_cache_2197_);
lean_inc(v_traceState_2192_);
lean_inc(v_auxDeclNGen_2196_);
lean_inc(v_ngen_2195_);
lean_inc(v_nextMacroScope_2194_);
lean_inc(v_env_2193_);
lean_dec(v___x_2191_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2230_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
uint64_t v_tid_2204_; lean_object* v_traces_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2229_; 
v_tid_2204_ = lean_ctor_get_uint64(v_traceState_2192_, sizeof(void*)*1);
v_traces_2205_ = lean_ctor_get(v_traceState_2192_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v_traceState_2192_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2207_ = v_traceState_2192_;
v_isShared_2208_ = v_isSharedCheck_2229_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_traces_2205_);
lean_dec(v_traceState_2192_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2229_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2209_; lean_object* v___x_2210_; double v___x_2211_; uint8_t v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2220_; 
v___x_2209_ = lean_box(0);
v___x_2210_ = lean_box(0);
v___x_2211_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__2, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__2);
v___x_2212_ = 0;
v___x_2213_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__3));
v___x_2214_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2214_, 0, v_cls_2163_);
lean_ctor_set(v___x_2214_, 1, v___x_2210_);
lean_ctor_set(v___x_2214_, 2, v___x_2213_);
lean_ctor_set_float(v___x_2214_, sizeof(void*)*3, v___x_2211_);
lean_ctor_set_float(v___x_2214_, sizeof(void*)*3 + 8, v___x_2211_);
lean_ctor_set_uint8(v___x_2214_, sizeof(void*)*3 + 16, v___x_2212_);
v___x_2215_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___closed__4));
v___x_2216_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2214_);
lean_ctor_set(v___x_2216_, 1, v___x_2190_);
lean_ctor_set(v___x_2216_, 2, v___x_2215_);
lean_inc(v_ref_2171_);
v___x_2217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2217_, 0, v_ref_2171_);
lean_ctor_set(v___x_2217_, 1, v___x_2216_);
v___x_2218_ = l_Lean_PersistentArray_push___redArg(v_traces_2205_, v___x_2217_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 0, v___x_2218_);
v___x_2220_ = v___x_2207_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v___x_2218_);
lean_ctor_set_uint64(v_reuseFailAlloc_2228_, sizeof(void*)*1, v_tid_2204_);
v___x_2220_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
lean_object* v___x_2222_; 
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 4, v___x_2220_);
v___x_2222_ = v___x_2202_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_env_2193_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v_nextMacroScope_2194_);
lean_ctor_set(v_reuseFailAlloc_2227_, 2, v_ngen_2195_);
lean_ctor_set(v_reuseFailAlloc_2227_, 3, v_auxDeclNGen_2196_);
lean_ctor_set(v_reuseFailAlloc_2227_, 4, v___x_2220_);
lean_ctor_set(v_reuseFailAlloc_2227_, 5, v_cache_2197_);
lean_ctor_set(v_reuseFailAlloc_2227_, 6, v_messages_2198_);
lean_ctor_set(v_reuseFailAlloc_2227_, 7, v_infoState_2199_);
lean_ctor_set(v_reuseFailAlloc_2227_, 8, v_snapshotTasks_2200_);
v___x_2222_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
lean_object* v___x_2223_; lean_object* v___x_2225_; 
v___x_2223_ = lean_st_ref_put(v___y_2168_, v___x_2222_);
if (v_isShared_2179_ == 0)
{
lean_ctor_set(v___x_2178_, 0, v___x_2209_);
v___x_2225_ = v___x_2178_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v___x_2209_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
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
lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
lean_dec(v___x_2174_);
lean_dec_ref(v_env_2173_);
lean_dec_ref(v_msg_2164_);
lean_dec(v_cls_2163_);
v_a_2235_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2175_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_dec(v___x_2175_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2___boxed(lean_object* v_cls_2243_, lean_object* v_msg_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2(v_cls_2243_, v_msg_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__0(lean_object* v_a_2251_, lean_object* v_a_2252_){
_start:
{
if (lean_obj_tag(v_a_2251_) == 0)
{
lean_object* v___x_2253_; 
v___x_2253_ = l_List_reverse___redArg(v_a_2252_);
return v___x_2253_;
}
else
{
lean_object* v_head_2254_; lean_object* v_tail_2255_; lean_object* v___x_2257_; uint8_t v_isShared_2258_; uint8_t v_isSharedCheck_2264_; 
v_head_2254_ = lean_ctor_get(v_a_2251_, 0);
v_tail_2255_ = lean_ctor_get(v_a_2251_, 1);
v_isSharedCheck_2264_ = !lean_is_exclusive(v_a_2251_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2257_ = v_a_2251_;
v_isShared_2258_ = v_isSharedCheck_2264_;
goto v_resetjp_2256_;
}
else
{
lean_inc(v_tail_2255_);
lean_inc(v_head_2254_);
lean_dec(v_a_2251_);
v___x_2257_ = lean_box(0);
v_isShared_2258_ = v_isSharedCheck_2264_;
goto v_resetjp_2256_;
}
v_resetjp_2256_:
{
lean_object* v___x_2259_; lean_object* v___x_2261_; 
v___x_2259_ = l_Lean_MessageData_ofName(v_head_2254_);
if (v_isShared_2258_ == 0)
{
lean_ctor_set(v___x_2257_, 1, v_a_2252_);
lean_ctor_set(v___x_2257_, 0, v___x_2259_);
v___x_2261_ = v___x_2257_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v___x_2259_);
lean_ctor_set(v_reuseFailAlloc_2263_, 1, v_a_2252_);
v___x_2261_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
v_a_2251_ = v_tail_2255_;
v_a_2252_ = v___x_2261_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___closed__0));
v___x_2267_ = l_Lean_stringToMessageData(v___x_2266_);
return v___x_2267_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg(lean_object* v_as_x27_2268_, lean_object* v_b_2269_){
_start:
{
if (lean_obj_tag(v_as_x27_2268_) == 0)
{
lean_object* v___x_2271_; 
v___x_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2271_, 0, v_b_2269_);
return v___x_2271_;
}
else
{
lean_object* v_head_2272_; lean_object* v_snd_2273_; lean_object* v_tail_2274_; lean_object* v_fst_2275_; lean_object* v_ctorNames_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v_head_2272_ = lean_ctor_get(v_as_x27_2268_, 0);
v_snd_2273_ = lean_ctor_get(v_head_2272_, 1);
v_tail_2274_ = lean_ctor_get(v_as_x27_2268_, 1);
v_fst_2275_ = lean_ctor_get(v_head_2272_, 0);
v_ctorNames_2276_ = lean_ctor_get(v_snd_2273_, 1);
lean_inc(v_fst_2275_);
v___x_2277_ = l_Lean_mkFVar(v_fst_2275_);
v___x_2278_ = l_Lean_MessageData_ofExpr(v___x_2277_);
v___x_2279_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___closed__1);
v___x_2280_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2278_);
lean_ctor_set(v___x_2280_, 1, v___x_2279_);
v___x_2281_ = l_Lean_NameSet_toList(v_ctorNames_2276_);
v___x_2282_ = lean_box(0);
v___x_2283_ = l_List_mapTR_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__0(v___x_2281_, v___x_2282_);
v___x_2284_ = l_Lean_MessageData_ofList(v___x_2283_);
v___x_2285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2280_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = l_Lean_indentD(v___x_2285_);
v___x_2287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2287_, 0, v_b_2269_);
lean_ctor_set(v___x_2287_, 1, v___x_2286_);
v_as_x27_2268_ = v_tail_2274_;
v_b_2269_ = v___x_2287_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg___boxed(lean_object* v_as_x27_2289_, lean_object* v_b_2290_, lean_object* v___y_2291_){
_start:
{
lean_object* v_res_2292_; 
v_res_2292_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg(v_as_x27_2289_, v_b_2290_);
lean_dec(v_as_x27_2289_);
return v_res_2292_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__6(void){
_start:
{
lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2303_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__3));
v___x_2304_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__5));
v___x_2305_ = l_Lean_Name_append(v___x_2304_, v___x_2303_);
return v___x_2305_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__9(void){
_start:
{
lean_object* v___x_2309_; lean_object* v___x_2310_; 
v___x_2309_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__8));
v___x_2310_ = l_Lean_MessageData_ofFormat(v___x_2309_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f(lean_object* v_code_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_){
_start:
{
lean_object* v___x_2317_; 
lean_inc_ref(v_code_2311_);
v___x_2317_ = l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo(v_code_2311_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
if (lean_obj_tag(v___x_2317_) == 0)
{
lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2370_; 
v_a_2318_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2320_ = v___x_2317_;
v_isShared_2321_ = v_isSharedCheck_2370_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v___x_2317_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2370_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
uint8_t v___x_2345_; 
lean_inc(v_a_2318_);
v___x_2345_ = l_Lean_Compiler_LCNF_Simp_JpCasesInfoMap_isCandidate(v_a_2318_);
if (v___x_2345_ == 0)
{
lean_object* v___x_2346_; lean_object* v___x_2348_; 
lean_dec(v_a_2318_);
lean_dec_ref(v_code_2311_);
v___x_2346_ = lean_box(0);
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 0, v___x_2346_);
v___x_2348_ = v___x_2320_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v___x_2346_);
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
lean_object* v_toCold_2350_; lean_object* v_options_2351_; uint8_t v_hasTrace_2352_; 
lean_del_object(v___x_2320_);
v_toCold_2350_ = lean_ctor_get(v_a_2314_, 0);
v_options_2351_ = lean_ctor_get(v_toCold_2350_, 2);
v_hasTrace_2352_ = lean_ctor_get_uint8(v_options_2351_, sizeof(void*)*1);
if (v_hasTrace_2352_ == 0)
{
goto v___jp_2322_;
}
else
{
lean_object* v_inheritedTraceOptions_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; uint8_t v___x_2356_; 
v_inheritedTraceOptions_2353_ = lean_ctor_get(v_toCold_2350_, 11);
v___x_2354_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__3));
v___x_2355_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__6, &l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__6_once, _init_l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__6);
v___x_2356_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2353_, v_options_2351_, v___x_2355_);
if (v___x_2356_ == 0)
{
goto v___jp_2322_;
}
else
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v_a_2360_; lean_object* v___x_2361_; 
v___x_2357_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__9, &l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__9_once, _init_l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__9);
v___x_2358_ = l_Lean_FVarIdMap_toList___redArg(v_a_2318_);
v___x_2359_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg(v___x_2358_, v___x_2357_);
lean_dec(v___x_2358_);
v_a_2360_ = lean_ctor_get(v___x_2359_, 0);
lean_inc(v_a_2360_);
lean_dec_ref(v___x_2359_);
v___x_2361_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__2(v___x_2354_, v_a_2360_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_dec_ref_known(v___x_2361_, 1);
goto v___jp_2322_;
}
else
{
lean_object* v_a_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2369_; 
lean_dec(v_a_2318_);
lean_dec_ref(v_code_2311_);
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2364_ = v___x_2361_;
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_a_2362_);
lean_dec(v___x_2361_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2367_; 
if (v_isShared_2365_ == 0)
{
v___x_2367_ = v___x_2364_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_a_2362_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
}
}
}
}
v___jp_2322_:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2323_ = lean_box(1);
v___x_2324_ = lean_obj_once(&l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__2, &l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__2_once, _init_l_Lean_Compiler_LCNF_Simp_collectJpCasesInfo___closed__2);
v___x_2325_ = lean_st_mk_ref(v___x_2323_);
v___x_2326_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_Simp_simpJpCases_x3f_visit(v_code_2311_, v_a_2318_, v___x_2325_, v___x_2324_, v_a_2312_, v_a_2313_, v_a_2314_, v_a_2315_);
lean_dec(v_a_2318_);
if (lean_obj_tag(v___x_2326_) == 0)
{
lean_object* v_a_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2336_; 
v_a_2327_ = lean_ctor_get(v___x_2326_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2326_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2329_ = v___x_2326_;
v_isShared_2330_ = v_isSharedCheck_2336_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_a_2327_);
lean_dec(v___x_2326_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2336_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2334_; 
v___x_2331_ = lean_st_ref_get(v___x_2325_);
lean_dec(v___x_2325_);
lean_dec(v___x_2331_);
v___x_2332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2332_, 0, v_a_2327_);
if (v_isShared_2330_ == 0)
{
lean_ctor_set(v___x_2329_, 0, v___x_2332_);
v___x_2334_ = v___x_2329_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v___x_2332_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2344_; 
lean_dec(v___x_2325_);
v_a_2337_ = lean_ctor_get(v___x_2326_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2326_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2339_ = v___x_2326_;
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2326_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2342_; 
if (v_isShared_2340_ == 0)
{
v___x_2342_ = v___x_2339_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_a_2337_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
}
}
}
}
else
{
lean_object* v_a_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2378_; 
lean_dec_ref(v_code_2311_);
v_a_2371_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2373_ = v___x_2317_;
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_a_2371_);
lean_dec(v___x_2317_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2378_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2376_; 
if (v_isShared_2374_ == 0)
{
v___x_2376_ = v___x_2373_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_a_2371_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___boxed(lean_object* v_code_2379_, lean_object* v_a_2380_, lean_object* v_a_2381_, lean_object* v_a_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_){
_start:
{
lean_object* v_res_2385_; 
v_res_2385_ = l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f(v_code_2379_, v_a_2380_, v_a_2381_, v_a_2382_, v_a_2383_);
lean_dec(v_a_2383_);
lean_dec_ref(v_a_2382_);
lean_dec(v_a_2381_);
lean_dec_ref(v_a_2380_);
return v_res_2385_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1(lean_object* v_as_2386_, lean_object* v_as_x27_2387_, lean_object* v_b_2388_, lean_object* v_a_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v___x_2395_; 
v___x_2395_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___redArg(v_as_x27_2387_, v_b_2388_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1___boxed(lean_object* v_as_2396_, lean_object* v_as_x27_2397_, lean_object* v_b_2398_, lean_object* v_a_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_){
_start:
{
lean_object* v_res_2405_; 
v_res_2405_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_Simp_simpJpCases_x3f_spec__1(v_as_2396_, v_as_x27_2397_, v_b_2398_, v_a_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v_as_x27_2397_);
lean_dec(v_as_2396_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2479_; uint8_t v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2479_ = ((lean_object*)(l_Lean_Compiler_LCNF_Simp_simpJpCases_x3f___closed__3));
v___x_2480_ = 0;
v___x_2481_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_));
v___x_2482_ = l_Lean_registerTraceClass(v___x_2479_, v___x_2480_, v___x_2481_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2____boxed(lean_object* v_a_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_();
return v_res_2484_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Internalize(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_DiscrM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Simp_JpCases(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_DiscrM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default = _init_l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo_default);
l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo = _init_l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo();
lean_mark_persistent(l_Lean_Compiler_LCNF_Simp_instInhabitedJpCasesInfo);
res = l___private_Lean_Compiler_LCNF_Simp_JpCases_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_Simp_JpCases_862626027____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Simp_JpCases(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Internalize(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_Simp_DiscrM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Simp_JpCases(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_Simp_DiscrM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Simp_JpCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Simp_JpCases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Simp_JpCases(builtin);
}
#ifdef __cplusplus
}
#endif
