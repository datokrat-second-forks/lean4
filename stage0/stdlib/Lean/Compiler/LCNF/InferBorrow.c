// Lean compiler output
// Module: Lean.Compiler.LCNF.InferBorrow
// Imports: public import Lean.Compiler.LCNF.CompilerM public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.ExportAttr import Lean.Compiler.LCNF.MonadScope import Lean.Compiler.LCNF.FVarUtil import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.PrettyPrinter import Std.Data.Iterators.Producers.Monadic.Array import Std.Data.Iterators.Combinators.Monadic.Zip
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
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(lean_object*);
uint8_t l_Lean_FVarIdHashSet_contains(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_FVarIdHashSet_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_PP_ppFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_PP_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_PP_ppFVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_CtorInfo_isScalar(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(uint8_t, lean_object*, uint8_t, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_isExport(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_decl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_decl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_jp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_jp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash___closed__0;
LEAN_EXPORT uint64_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParams_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParams_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__7_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__8 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__8_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__9 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__9_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "_private.Lean.Compiler.LCNF.InferBorrow.0.Lean.Compiler.LCNF.mkInitParamMap.goCode"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Compiler.LCNF.InferBorrow"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "_private.Lean.Compiler.LCNF.InferBorrow.0.Lean.Compiler.LCNF.apply.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__1___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_resetReuse_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_resetReuse_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_constructorResult_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_constructorResult_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_constructorArg_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_constructorArg_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_forwardProjectionProp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_forwardProjectionProp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_backwardProjectionProp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_backwardProjectionProp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_functionCallResult_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_functionCallResult_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_functionCallArg_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_functionCallArg_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_fvarCall_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_fvarCall_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_partialApplication_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_partialApplication_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_tailCallPreservation_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_tailCallPreservation_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_jpArgPropagation_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_jpArgPropagation_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_jpTailCallPreservation_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_jpTailCallPreservation_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ownedAnnotation_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ownedAnnotation_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "used in reset reuse "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "result of ctor call "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "argument to constructor call "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "fwd projection propagation "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "bkwd projection propagation "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "result of function call "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "owned function argument "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "argument to closure call "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "argument to pap "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__8_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "tail call preservation of "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__9_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "backward propagation from JP "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__10_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "JP tail call preservation "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__11_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Annotated as owned"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__12 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_isForced(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_isForced___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__2;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__3;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__4 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__4_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__5 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inferBorrow"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 32, 132, 193, 112, 124, 81, 175)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__3_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__5;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "own "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__6_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__7;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__8_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__9;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "user annotation blocked owning "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__10_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.FVarUtil"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Compiler.LCNF.Expr.forFVarM"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Failed to find LCNF signature for "};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__1;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "_private.Lean.Compiler.LCNF.InferBorrow.0.Lean.Compiler.LCNF.infer.getParamInfo"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_preserveTailCall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_preserveTailCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "getInternal"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "get!Internal"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "uget"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "_private.Lean.Compiler.LCNF.InferBorrow.0.Lean.Compiler.LCNF.infer.collectCode"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferBorrow___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferBorrow___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_inferBorrow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_inferBorrow___lam__0___boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_inferBorrow___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_inferBorrow___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_inferBorrow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 19, 0, 229, 111, 180, 204, 14)}};
static const lean_object* l_Lean_Compiler_LCNF_inferBorrow___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_inferBorrow___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_inferBorrow___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_inferBorrow___closed__1_value),((lean_object*)&l_Lean_Compiler_LCNF_inferBorrow___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 2, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_inferBorrow___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_inferBorrow___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_inferBorrow = (const lean_object*)&l_Lean_Compiler_LCNF_inferBorrow___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "InferBorrow"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(104, 208, 17, 126, 164, 187, 75, 189)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(65, 5, 54, 52, 72, 27, 148, 77)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(228, 13, 112, 128, 253, 14, 247, 39)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 114, 118, 32, 189, 66, 203, 24)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(183, 49, 5, 215, 125, 193, 246, 34)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(134, 183, 97, 104, 102, 139, 3, 250)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(55, 67, 163, 36, 136, 199, 248, 0)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(202, 132, 145, 216, 84, 19, 198, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 11, 250, 40, 153, 169, 18, 223)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(209, 115, 234, 75, 87, 80, 193, 39)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(88, 78, 132, 77, 51, 201, 208, 78)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)(((size_t)(419080822) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(191, 60, 25, 5, 219, 182, 243, 114)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 96, 178, 254, 39, 188, 36, 83)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 245, 90, 205, 97, 250, 253, 159)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(49, 8, 28, 105, 107, 189, 96, 137)}};
static const lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_name_8_; lean_object* v___x_9_; 
v_name_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_name_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_name_8_);
return v___x_9_;
}
else
{
lean_object* v_name_10_; lean_object* v_jpId_11_; lean_object* v___x_12_; 
v_name_10_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_name_10_);
v_jpId_11_ = lean_ctor_get(v_t_6_, 1);
lean_inc(v_jpId_11_);
lean_dec_ref_known(v_t_6_, 2);
v___x_12_ = lean_apply_2(v_k_7_, v_name_10_, v_jpId_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_decl_elim___redArg(lean_object* v_t_25_, lean_object* v_decl_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim___redArg(v_t_25_, v_decl_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_decl_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_decl_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim___redArg(v_t_29_, v_decl_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_jp_elim___redArg(lean_object* v_t_33_, lean_object* v_jp_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim___redArg(v_t_33_, v_jp_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_jp_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_jp_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_Key_ctorElim___redArg(v_t_37_, v_jp_39_);
return v___x_40_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey_beq(lean_object* v_x_41_, lean_object* v_x_42_){
_start:
{
if (lean_obj_tag(v_x_41_) == 0)
{
if (lean_obj_tag(v_x_42_) == 0)
{
lean_object* v_name_43_; lean_object* v_name_44_; uint8_t v___x_45_; 
v_name_43_ = lean_ctor_get(v_x_41_, 0);
v_name_44_ = lean_ctor_get(v_x_42_, 0);
v___x_45_ = lean_name_eq(v_name_43_, v_name_44_);
return v___x_45_;
}
else
{
uint8_t v___x_46_; 
v___x_46_ = 0;
return v___x_46_;
}
}
else
{
if (lean_obj_tag(v_x_42_) == 1)
{
lean_object* v_name_47_; lean_object* v_jpId_48_; lean_object* v_name_49_; lean_object* v_jpId_50_; uint8_t v___x_51_; 
v_name_47_ = lean_ctor_get(v_x_41_, 0);
v_jpId_48_ = lean_ctor_get(v_x_41_, 1);
v_name_49_ = lean_ctor_get(v_x_42_, 0);
v_jpId_50_ = lean_ctor_get(v_x_42_, 1);
v___x_51_ = lean_name_eq(v_name_47_, v_name_49_);
if (v___x_51_ == 0)
{
return v___x_51_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = l_Lean_instBEqFVarId_beq(v_jpId_48_, v_jpId_50_);
return v___x_52_;
}
}
else
{
uint8_t v___x_53_; 
v___x_53_ = 0;
return v___x_53_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey_beq___boxed(lean_object* v_x_54_, lean_object* v_x_55_){
_start:
{
uint8_t v_res_56_; lean_object* v_r_57_; 
v_res_56_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey_beq(v_x_54_, v_x_55_);
lean_dec_ref(v_x_55_);
lean_dec_ref(v_x_54_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
static uint64_t _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash___closed__0(void){
_start:
{
uint64_t v___x_60_; uint64_t v___x_61_; uint64_t v___x_62_; 
v___x_60_ = 1723ULL;
v___x_61_ = 0ULL;
v___x_62_ = lean_uint64_mix_hash(v___x_61_, v___x_60_);
return v___x_62_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash(lean_object* v_x_63_){
_start:
{
if (lean_obj_tag(v_x_63_) == 0)
{
lean_object* v_name_64_; uint64_t v___x_65_; 
v_name_64_ = lean_ctor_get(v_x_63_, 0);
v___x_65_ = 0ULL;
if (lean_obj_tag(v_name_64_) == 0)
{
uint64_t v___x_66_; 
v___x_66_ = lean_uint64_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash___closed__0, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash___closed__0_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash___closed__0);
return v___x_66_;
}
else
{
uint64_t v_hash_67_; uint64_t v___x_68_; 
v_hash_67_ = lean_ctor_get_uint64(v_name_64_, sizeof(void*)*2);
v___x_68_ = lean_uint64_mix_hash(v___x_65_, v_hash_67_);
return v___x_68_;
}
}
else
{
lean_object* v_name_69_; lean_object* v_jpId_70_; uint64_t v___x_71_; uint64_t v___y_73_; 
v_name_69_ = lean_ctor_get(v_x_63_, 0);
v_jpId_70_ = lean_ctor_get(v_x_63_, 1);
v___x_71_ = 1ULL;
if (lean_obj_tag(v_name_69_) == 0)
{
uint64_t v___x_77_; 
v___x_77_ = 1723ULL;
v___y_73_ = v___x_77_;
goto v___jp_72_;
}
else
{
uint64_t v_hash_78_; 
v_hash_78_ = lean_ctor_get_uint64(v_name_69_, sizeof(void*)*2);
v___y_73_ = v_hash_78_;
goto v___jp_72_;
}
v___jp_72_:
{
uint64_t v___x_74_; uint64_t v___x_75_; uint64_t v___x_76_; 
v___x_74_ = lean_uint64_mix_hash(v___x_71_, v___y_73_);
v___x_75_ = l_Lean_instHashableFVarId_hash(v_jpId_70_);
v___x_76_ = lean_uint64_mix_hash(v___x_74_, v___x_75_);
return v___x_76_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash___boxed(lean_object* v_x_79_){
_start:
{
uint64_t v_res_80_; lean_object* v_r_81_; 
v_res_80_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash(v_x_79_);
lean_dec_ref(v_x_79_);
v_r_81_ = lean_box_uint64(v_res_80_);
return v_r_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_insert(lean_object* v_pm_84_, lean_object* v_k_85_, lean_object* v_ps_86_){
_start:
{
lean_object* v_map_87_; lean_object* v_annotatedBorrows_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_98_; 
v_map_87_ = lean_ctor_get(v_pm_84_, 0);
v_annotatedBorrows_88_ = lean_ctor_get(v_pm_84_, 1);
v_isSharedCheck_98_ = !lean_is_exclusive(v_pm_84_);
if (v_isSharedCheck_98_ == 0)
{
v___x_90_ = v_pm_84_;
v_isShared_91_ = v_isSharedCheck_98_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_annotatedBorrows_88_);
lean_inc(v_map_87_);
lean_dec(v_pm_84_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_98_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_96_; 
v___x_92_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey___closed__0));
v___x_93_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey___closed__0));
v___x_94_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_92_, v___x_93_, v_map_87_, v_k_85_, v_ps_86_);
if (v_isShared_91_ == 0)
{
lean_ctor_set(v___x_90_, 0, v___x_94_);
v___x_96_ = v___x_90_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v___x_94_);
lean_ctor_set(v_reuseFailAlloc_97_, 1, v_annotatedBorrows_88_);
v___x_96_ = v_reuseFailAlloc_97_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
return v___x_96_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_erase(lean_object* v_pm_99_, lean_object* v_k_100_){
_start:
{
lean_object* v_map_101_; lean_object* v_annotatedBorrows_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_112_; 
v_map_101_ = lean_ctor_get(v_pm_99_, 0);
v_annotatedBorrows_102_ = lean_ctor_get(v_pm_99_, 1);
v_isSharedCheck_112_ = !lean_is_exclusive(v_pm_99_);
if (v_isSharedCheck_112_ == 0)
{
v___x_104_ = v_pm_99_;
v_isShared_105_ = v_isSharedCheck_112_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_annotatedBorrows_102_);
lean_inc(v_map_101_);
lean_dec(v_pm_99_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_112_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_106_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey___closed__0));
v___x_107_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey___closed__0));
v___x_108_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_106_, v___x_107_, v_map_101_, v_k_100_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v___x_108_);
v___x_110_ = v___x_104_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_108_);
lean_ctor_set(v_reuseFailAlloc_111_, 1, v_annotatedBorrows_102_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParams_spec__0(size_t v_sz_113_, size_t v_i_114_, lean_object* v_bs_115_){
_start:
{
uint8_t v___x_116_; 
v___x_116_ = lean_usize_dec_lt(v_i_114_, v_sz_113_);
if (v___x_116_ == 0)
{
return v_bs_115_;
}
else
{
lean_object* v_v_117_; lean_object* v_fvarId_118_; lean_object* v_binderName_119_; lean_object* v_type_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_134_; 
v_v_117_ = lean_array_uget(v_bs_115_, v_i_114_);
v_fvarId_118_ = lean_ctor_get(v_v_117_, 0);
v_binderName_119_ = lean_ctor_get(v_v_117_, 1);
v_type_120_ = lean_ctor_get(v_v_117_, 2);
v_isSharedCheck_134_ = !lean_is_exclusive(v_v_117_);
if (v_isSharedCheck_134_ == 0)
{
v___x_122_ = v_v_117_;
v_isShared_123_ = v_isSharedCheck_134_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_type_120_);
lean_inc(v_binderName_119_);
lean_inc(v_fvarId_118_);
lean_dec(v_v_117_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_134_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_124_; lean_object* v_bs_x27_125_; uint8_t v___x_126_; lean_object* v___x_128_; 
v___x_124_ = lean_unsigned_to_nat(0u);
v_bs_x27_125_ = lean_array_uset(v_bs_115_, v_i_114_, v___x_124_);
v___x_126_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_120_);
if (v_isShared_123_ == 0)
{
v___x_128_ = v___x_122_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_fvarId_118_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v_binderName_119_);
lean_ctor_set(v_reuseFailAlloc_133_, 2, v_type_120_);
v___x_128_ = v_reuseFailAlloc_133_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
size_t v___x_129_; size_t v___x_130_; lean_object* v___x_131_; 
lean_ctor_set_uint8(v___x_128_, sizeof(void*)*3, v___x_126_);
v___x_129_ = ((size_t)1ULL);
v___x_130_ = lean_usize_add(v_i_114_, v___x_129_);
v___x_131_ = lean_array_uset(v_bs_x27_125_, v_i_114_, v___x_128_);
v_i_114_ = v___x_130_;
v_bs_115_ = v___x_131_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParams_spec__0___boxed(lean_object* v_sz_135_, lean_object* v_i_136_, lean_object* v_bs_137_){
_start:
{
size_t v_sz_boxed_138_; size_t v_i_boxed_139_; lean_object* v_res_140_; 
v_sz_boxed_138_ = lean_unbox_usize(v_sz_135_);
lean_dec(v_sz_135_);
v_i_boxed_139_ = lean_unbox_usize(v_i_136_);
lean_dec(v_i_136_);
v_res_140_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParams_spec__0(v_sz_boxed_138_, v_i_boxed_139_, v_bs_137_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParams(lean_object* v_ps_141_){
_start:
{
size_t v_sz_142_; size_t v___x_143_; lean_object* v___x_144_; 
v_sz_142_ = lean_array_size(v_ps_141_);
v___x_143_ = ((size_t)0ULL);
v___x_144_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParams_spec__0(v_sz_142_, v___x_143_, v_ps_141_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0___redArg(lean_object* v_alt_145_, lean_object* v_f_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
switch(lean_obj_tag(v_alt_145_))
{
case 0:
{
lean_object* v_code_153_; lean_object* v___x_154_; 
v_code_153_ = lean_ctor_get(v_alt_145_, 2);
lean_inc_ref(v_code_153_);
lean_dec_ref_known(v_alt_145_, 3);
lean_inc(v___y_151_);
lean_inc_ref(v___y_150_);
lean_inc(v___y_149_);
lean_inc_ref(v___y_148_);
lean_inc(v___y_147_);
v___x_154_ = lean_apply_7(v_f_146_, v_code_153_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, lean_box(0));
return v___x_154_;
}
case 1:
{
lean_object* v_code_155_; lean_object* v___x_156_; 
v_code_155_ = lean_ctor_get(v_alt_145_, 1);
lean_inc_ref(v_code_155_);
lean_dec_ref_known(v_alt_145_, 2);
lean_inc(v___y_151_);
lean_inc_ref(v___y_150_);
lean_inc(v___y_149_);
lean_inc_ref(v___y_148_);
lean_inc(v___y_147_);
v___x_156_ = lean_apply_7(v_f_146_, v_code_155_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, lean_box(0));
return v___x_156_;
}
default: 
{
lean_object* v_code_157_; lean_object* v___x_158_; 
v_code_157_ = lean_ctor_get(v_alt_145_, 0);
lean_inc_ref(v_code_157_);
lean_dec_ref_known(v_alt_145_, 1);
lean_inc(v___y_151_);
lean_inc_ref(v___y_150_);
lean_inc(v___y_149_);
lean_inc_ref(v___y_148_);
lean_inc(v___y_147_);
v___x_158_ = lean_apply_7(v_f_146_, v_code_157_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, lean_box(0));
return v___x_158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0___redArg___boxed(lean_object* v_alt_159_, lean_object* v_f_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0___redArg(v_alt_159_, v_f_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec(v___y_161_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0(uint8_t v_pu_168_, lean_object* v_alt_169_, lean_object* v_f_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0___redArg(v_alt_169_, v_f_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0___boxed(lean_object* v_pu_178_, lean_object* v_alt_179_, lean_object* v_f_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
uint8_t v_pu_boxed_187_; lean_object* v_res_188_; 
v_pu_boxed_187_ = lean_unbox(v_pu_178_);
v_res_188_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0(v_pu_boxed_187_, v_alt_179_, v_f_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
lean_dec(v___y_183_);
lean_dec_ref(v___y_182_);
lean_dec(v___y_181_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5(lean_object* v_msg_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v___f_206_; lean_object* v___f_207_; lean_object* v___f_208_; lean_object* v___f_209_; lean_object* v___f_210_; lean_object* v___f_211_; lean_object* v___f_212_; lean_object* v___f_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v_toApplicative_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_280_; 
v___f_206_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__0));
v___f_207_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__1));
v___f_208_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__2));
v___f_209_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__3));
v___f_210_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__4));
v___f_211_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_211_, 0, v___f_210_);
lean_closure_set(v___f_211_, 1, v___f_209_);
v___f_212_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_212_, 0, v___f_209_);
v___f_213_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__5));
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___f_206_);
lean_ctor_set(v___x_214_, 1, v___f_207_);
v___x_215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
lean_ctor_set(v___x_215_, 1, v___f_208_);
lean_ctor_set(v___x_215_, 2, v___f_211_);
lean_ctor_set(v___x_215_, 3, v___f_212_);
lean_ctor_set(v___x_215_, 4, v___f_213_);
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v___f_209_);
v___x_217_ = l_StateRefT_x27_instMonad___redArg(v___x_216_);
v_toApplicative_218_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_280_ == 0)
{
lean_object* v_unused_281_; 
v_unused_281_ = lean_ctor_get(v___x_217_, 1);
lean_dec(v_unused_281_);
v___x_220_ = v___x_217_;
v_isShared_221_ = v_isSharedCheck_280_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_toApplicative_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_280_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v_toFunctor_222_; lean_object* v_toSeq_223_; lean_object* v_toSeqLeft_224_; lean_object* v_toSeqRight_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_278_; 
v_toFunctor_222_ = lean_ctor_get(v_toApplicative_218_, 0);
v_toSeq_223_ = lean_ctor_get(v_toApplicative_218_, 2);
v_toSeqLeft_224_ = lean_ctor_get(v_toApplicative_218_, 3);
v_toSeqRight_225_ = lean_ctor_get(v_toApplicative_218_, 4);
v_isSharedCheck_278_ = !lean_is_exclusive(v_toApplicative_218_);
if (v_isSharedCheck_278_ == 0)
{
lean_object* v_unused_279_; 
v_unused_279_ = lean_ctor_get(v_toApplicative_218_, 1);
lean_dec(v_unused_279_);
v___x_227_ = v_toApplicative_218_;
v_isShared_228_ = v_isSharedCheck_278_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_toSeqRight_225_);
lean_inc(v_toSeqLeft_224_);
lean_inc(v_toSeq_223_);
lean_inc(v_toFunctor_222_);
lean_dec(v_toApplicative_218_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_278_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___f_229_; lean_object* v___f_230_; lean_object* v___f_231_; lean_object* v___f_232_; lean_object* v___x_233_; lean_object* v___f_234_; lean_object* v___f_235_; lean_object* v___f_236_; lean_object* v___x_238_; 
v___f_229_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__6));
v___f_230_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__7));
lean_inc_ref(v_toFunctor_222_);
v___f_231_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_231_, 0, v_toFunctor_222_);
v___f_232_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_232_, 0, v_toFunctor_222_);
v___x_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_233_, 0, v___f_231_);
lean_ctor_set(v___x_233_, 1, v___f_232_);
v___f_234_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_234_, 0, v_toSeqRight_225_);
v___f_235_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_235_, 0, v_toSeqLeft_224_);
v___f_236_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_236_, 0, v_toSeq_223_);
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 4, v___f_234_);
lean_ctor_set(v___x_227_, 3, v___f_235_);
lean_ctor_set(v___x_227_, 2, v___f_236_);
lean_ctor_set(v___x_227_, 1, v___f_229_);
lean_ctor_set(v___x_227_, 0, v___x_233_);
v___x_238_ = v___x_227_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_233_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___f_229_);
lean_ctor_set(v_reuseFailAlloc_277_, 2, v___f_236_);
lean_ctor_set(v_reuseFailAlloc_277_, 3, v___f_235_);
lean_ctor_set(v_reuseFailAlloc_277_, 4, v___f_234_);
v___x_238_ = v_reuseFailAlloc_277_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_240_; 
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 1, v___f_230_);
lean_ctor_set(v___x_220_, 0, v___x_238_);
v___x_240_ = v___x_220_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_238_);
lean_ctor_set(v_reuseFailAlloc_276_, 1, v___f_230_);
v___x_240_ = v_reuseFailAlloc_276_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; lean_object* v_toApplicative_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_274_; 
v___x_241_ = l_StateRefT_x27_instMonad___redArg(v___x_240_);
v_toApplicative_242_ = lean_ctor_get(v___x_241_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_274_ == 0)
{
lean_object* v_unused_275_; 
v_unused_275_ = lean_ctor_get(v___x_241_, 1);
lean_dec(v_unused_275_);
v___x_244_ = v___x_241_;
v_isShared_245_ = v_isSharedCheck_274_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_toApplicative_242_);
lean_dec(v___x_241_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_274_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v_toFunctor_246_; lean_object* v_toSeq_247_; lean_object* v_toSeqLeft_248_; lean_object* v_toSeqRight_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_272_; 
v_toFunctor_246_ = lean_ctor_get(v_toApplicative_242_, 0);
v_toSeq_247_ = lean_ctor_get(v_toApplicative_242_, 2);
v_toSeqLeft_248_ = lean_ctor_get(v_toApplicative_242_, 3);
v_toSeqRight_249_ = lean_ctor_get(v_toApplicative_242_, 4);
v_isSharedCheck_272_ = !lean_is_exclusive(v_toApplicative_242_);
if (v_isSharedCheck_272_ == 0)
{
lean_object* v_unused_273_; 
v_unused_273_ = lean_ctor_get(v_toApplicative_242_, 1);
lean_dec(v_unused_273_);
v___x_251_ = v_toApplicative_242_;
v_isShared_252_ = v_isSharedCheck_272_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_toSeqRight_249_);
lean_inc(v_toSeqLeft_248_);
lean_inc(v_toSeq_247_);
lean_inc(v_toFunctor_246_);
lean_dec(v_toApplicative_242_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_272_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___f_253_; lean_object* v___f_254_; lean_object* v___f_255_; lean_object* v___f_256_; lean_object* v___x_257_; lean_object* v___f_258_; lean_object* v___f_259_; lean_object* v___f_260_; lean_object* v___x_262_; 
v___f_253_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__8));
v___f_254_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__9));
lean_inc_ref(v_toFunctor_246_);
v___f_255_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_255_, 0, v_toFunctor_246_);
v___f_256_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_256_, 0, v_toFunctor_246_);
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v___f_255_);
lean_ctor_set(v___x_257_, 1, v___f_256_);
v___f_258_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_258_, 0, v_toSeqRight_249_);
v___f_259_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_259_, 0, v_toSeqLeft_248_);
v___f_260_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_260_, 0, v_toSeq_247_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 4, v___f_258_);
lean_ctor_set(v___x_251_, 3, v___f_259_);
lean_ctor_set(v___x_251_, 2, v___f_260_);
lean_ctor_set(v___x_251_, 1, v___f_253_);
lean_ctor_set(v___x_251_, 0, v___x_257_);
v___x_262_ = v___x_251_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v___x_257_);
lean_ctor_set(v_reuseFailAlloc_271_, 1, v___f_253_);
lean_ctor_set(v_reuseFailAlloc_271_, 2, v___f_260_);
lean_ctor_set(v_reuseFailAlloc_271_, 3, v___f_259_);
lean_ctor_set(v_reuseFailAlloc_271_, 4, v___f_258_);
v___x_262_ = v_reuseFailAlloc_271_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
lean_object* v___x_264_; 
if (v_isShared_245_ == 0)
{
lean_ctor_set(v___x_244_, 1, v___f_254_);
lean_ctor_set(v___x_244_, 0, v___x_262_);
v___x_264_ = v___x_244_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_270_, 1, v___f_254_);
v___x_264_ = v_reuseFailAlloc_270_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_2809__overap_268_; lean_object* v___x_269_; 
v___x_265_ = l_StateRefT_x27_instMonad___redArg(v___x_264_);
v___x_266_ = lean_box(0);
v___x_267_ = l_instInhabitedOfMonad___redArg(v___x_265_, v___x_266_);
v___x_2809__overap_268_ = lean_panic_fn_borrowed(v___x_267_, v_msg_199_);
lean_dec(v___x_267_);
lean_inc(v___y_204_);
lean_inc_ref(v___y_203_);
lean_inc(v___y_202_);
lean_inc_ref(v___y_201_);
lean_inc(v___y_200_);
v___x_269_ = lean_apply_6(v___x_2809__overap_268_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_, lean_box(0));
return v___x_269_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___boxed(lean_object* v_msg_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5(v_msg_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_);
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
lean_dec(v___y_285_);
lean_dec_ref(v___y_284_);
lean_dec(v___y_283_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__6___redArg(lean_object* v_a_290_, lean_object* v_b_291_, lean_object* v_x_292_){
_start:
{
if (lean_obj_tag(v_x_292_) == 0)
{
lean_dec(v_b_291_);
lean_dec_ref(v_a_290_);
return v_x_292_;
}
else
{
lean_object* v_key_293_; lean_object* v_value_294_; lean_object* v_tail_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_307_; 
v_key_293_ = lean_ctor_get(v_x_292_, 0);
v_value_294_ = lean_ctor_get(v_x_292_, 1);
v_tail_295_ = lean_ctor_get(v_x_292_, 2);
v_isSharedCheck_307_ = !lean_is_exclusive(v_x_292_);
if (v_isSharedCheck_307_ == 0)
{
v___x_297_ = v_x_292_;
v_isShared_298_ = v_isSharedCheck_307_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_tail_295_);
lean_inc(v_value_294_);
lean_inc(v_key_293_);
lean_dec(v_x_292_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_307_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
uint8_t v___x_299_; 
v___x_299_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey_beq(v_key_293_, v_a_290_);
if (v___x_299_ == 0)
{
lean_object* v___x_300_; lean_object* v___x_302_; 
v___x_300_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__6___redArg(v_a_290_, v_b_291_, v_tail_295_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 2, v___x_300_);
v___x_302_ = v___x_297_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_key_293_);
lean_ctor_set(v_reuseFailAlloc_303_, 1, v_value_294_);
lean_ctor_set(v_reuseFailAlloc_303_, 2, v___x_300_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
else
{
lean_object* v___x_305_; 
lean_dec(v_value_294_);
lean_dec(v_key_293_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 1, v_b_291_);
lean_ctor_set(v___x_297_, 0, v_a_290_);
v___x_305_ = v___x_297_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_290_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v_b_291_);
lean_ctor_set(v_reuseFailAlloc_306_, 2, v_tail_295_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4___redArg(lean_object* v_a_308_, lean_object* v_x_309_){
_start:
{
if (lean_obj_tag(v_x_309_) == 0)
{
uint8_t v___x_310_; 
v___x_310_ = 0;
return v___x_310_;
}
else
{
lean_object* v_key_311_; lean_object* v_tail_312_; uint8_t v___x_313_; 
v_key_311_ = lean_ctor_get(v_x_309_, 0);
v_tail_312_ = lean_ctor_get(v_x_309_, 2);
v___x_313_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey_beq(v_key_311_, v_a_308_);
if (v___x_313_ == 0)
{
v_x_309_ = v_tail_312_;
goto _start;
}
else
{
return v___x_313_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4___redArg___boxed(lean_object* v_a_315_, lean_object* v_x_316_){
_start:
{
uint8_t v_res_317_; lean_object* v_r_318_; 
v_res_317_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4___redArg(v_a_315_, v_x_316_);
lean_dec(v_x_316_);
lean_dec_ref(v_a_315_);
v_r_318_ = lean_box(v_res_317_);
return v_r_318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8_spec__12___redArg(lean_object* v_x_319_, lean_object* v_x_320_){
_start:
{
if (lean_obj_tag(v_x_320_) == 0)
{
return v_x_319_;
}
else
{
lean_object* v_key_321_; lean_object* v_value_322_; lean_object* v_tail_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_346_; 
v_key_321_ = lean_ctor_get(v_x_320_, 0);
v_value_322_ = lean_ctor_get(v_x_320_, 1);
v_tail_323_ = lean_ctor_get(v_x_320_, 2);
v_isSharedCheck_346_ = !lean_is_exclusive(v_x_320_);
if (v_isSharedCheck_346_ == 0)
{
v___x_325_ = v_x_320_;
v_isShared_326_ = v_isSharedCheck_346_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_tail_323_);
lean_inc(v_value_322_);
lean_inc(v_key_321_);
lean_dec(v_x_320_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_346_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_327_; uint64_t v___x_328_; uint64_t v___x_329_; uint64_t v___x_330_; uint64_t v_fold_331_; uint64_t v___x_332_; uint64_t v___x_333_; uint64_t v___x_334_; size_t v___x_335_; size_t v___x_336_; size_t v___x_337_; size_t v___x_338_; size_t v___x_339_; lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_327_ = lean_array_get_size(v_x_319_);
v___x_328_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash(v_key_321_);
v___x_329_ = 32ULL;
v___x_330_ = lean_uint64_shift_right(v___x_328_, v___x_329_);
v_fold_331_ = lean_uint64_xor(v___x_328_, v___x_330_);
v___x_332_ = 16ULL;
v___x_333_ = lean_uint64_shift_right(v_fold_331_, v___x_332_);
v___x_334_ = lean_uint64_xor(v_fold_331_, v___x_333_);
v___x_335_ = lean_uint64_to_usize(v___x_334_);
v___x_336_ = lean_usize_of_nat(v___x_327_);
v___x_337_ = ((size_t)1ULL);
v___x_338_ = lean_usize_sub(v___x_336_, v___x_337_);
v___x_339_ = lean_usize_land(v___x_335_, v___x_338_);
v___x_340_ = lean_array_uget_borrowed(v_x_319_, v___x_339_);
lean_inc(v___x_340_);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 2, v___x_340_);
v___x_342_ = v___x_325_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_key_321_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_value_322_);
lean_ctor_set(v_reuseFailAlloc_345_, 2, v___x_340_);
v___x_342_ = v_reuseFailAlloc_345_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
lean_object* v___x_343_; 
v___x_343_ = lean_array_uset(v_x_319_, v___x_339_, v___x_342_);
v_x_319_ = v___x_343_;
v_x_320_ = v_tail_323_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8___redArg(lean_object* v_i_347_, lean_object* v_source_348_, lean_object* v_target_349_){
_start:
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = lean_array_get_size(v_source_348_);
v___x_351_ = lean_nat_dec_lt(v_i_347_, v___x_350_);
if (v___x_351_ == 0)
{
lean_dec_ref(v_source_348_);
lean_dec(v_i_347_);
return v_target_349_;
}
else
{
lean_object* v_es_352_; lean_object* v___x_353_; lean_object* v_source_354_; lean_object* v_target_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v_es_352_ = lean_array_fget(v_source_348_, v_i_347_);
v___x_353_ = lean_box(0);
v_source_354_ = lean_array_fset(v_source_348_, v_i_347_, v___x_353_);
v_target_355_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8_spec__12___redArg(v_target_349_, v_es_352_);
v___x_356_ = lean_unsigned_to_nat(1u);
v___x_357_ = lean_nat_add(v_i_347_, v___x_356_);
lean_dec(v_i_347_);
v_i_347_ = v___x_357_;
v_source_348_ = v_source_354_;
v_target_349_ = v_target_355_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5___redArg(lean_object* v_data_359_){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v_nbuckets_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_360_ = lean_array_get_size(v_data_359_);
v___x_361_ = lean_unsigned_to_nat(2u);
v_nbuckets_362_ = lean_nat_mul(v___x_360_, v___x_361_);
v___x_363_ = lean_unsigned_to_nat(0u);
v___x_364_ = lean_box(0);
v___x_365_ = lean_mk_array(v_nbuckets_362_, v___x_364_);
v___x_366_ = lean_array_propagate_mark(v_data_359_, v___x_365_);
v___x_367_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8___redArg(v___x_363_, v_data_359_, v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2___redArg(lean_object* v_m_368_, lean_object* v_a_369_, lean_object* v_b_370_){
_start:
{
lean_object* v_size_371_; lean_object* v_buckets_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_415_; 
v_size_371_ = lean_ctor_get(v_m_368_, 0);
v_buckets_372_ = lean_ctor_get(v_m_368_, 1);
v_isSharedCheck_415_ = !lean_is_exclusive(v_m_368_);
if (v_isSharedCheck_415_ == 0)
{
v___x_374_ = v_m_368_;
v_isShared_375_ = v_isSharedCheck_415_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_buckets_372_);
lean_inc(v_size_371_);
lean_dec(v_m_368_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_415_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_376_; uint64_t v___x_377_; uint64_t v___x_378_; uint64_t v___x_379_; uint64_t v_fold_380_; uint64_t v___x_381_; uint64_t v___x_382_; uint64_t v___x_383_; size_t v___x_384_; size_t v___x_385_; size_t v___x_386_; size_t v___x_387_; size_t v___x_388_; lean_object* v_bkt_389_; uint8_t v___x_390_; 
v___x_376_ = lean_array_get_size(v_buckets_372_);
v___x_377_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash(v_a_369_);
v___x_378_ = 32ULL;
v___x_379_ = lean_uint64_shift_right(v___x_377_, v___x_378_);
v_fold_380_ = lean_uint64_xor(v___x_377_, v___x_379_);
v___x_381_ = 16ULL;
v___x_382_ = lean_uint64_shift_right(v_fold_380_, v___x_381_);
v___x_383_ = lean_uint64_xor(v_fold_380_, v___x_382_);
v___x_384_ = lean_uint64_to_usize(v___x_383_);
v___x_385_ = lean_usize_of_nat(v___x_376_);
v___x_386_ = ((size_t)1ULL);
v___x_387_ = lean_usize_sub(v___x_385_, v___x_386_);
v___x_388_ = lean_usize_land(v___x_384_, v___x_387_);
v_bkt_389_ = lean_array_uget_borrowed(v_buckets_372_, v___x_388_);
v___x_390_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4___redArg(v_a_369_, v_bkt_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; lean_object* v_size_x27_392_; lean_object* v___x_393_; lean_object* v_buckets_x27_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; uint8_t v___x_400_; 
v___x_391_ = lean_unsigned_to_nat(1u);
v_size_x27_392_ = lean_nat_add(v_size_371_, v___x_391_);
lean_dec(v_size_371_);
lean_inc(v_bkt_389_);
v___x_393_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_393_, 0, v_a_369_);
lean_ctor_set(v___x_393_, 1, v_b_370_);
lean_ctor_set(v___x_393_, 2, v_bkt_389_);
v_buckets_x27_394_ = lean_array_uset(v_buckets_372_, v___x_388_, v___x_393_);
v___x_395_ = lean_unsigned_to_nat(4u);
v___x_396_ = lean_nat_mul(v_size_x27_392_, v___x_395_);
v___x_397_ = lean_unsigned_to_nat(3u);
v___x_398_ = lean_nat_div(v___x_396_, v___x_397_);
lean_dec(v___x_396_);
v___x_399_ = lean_array_get_size(v_buckets_x27_394_);
v___x_400_ = lean_nat_dec_le(v___x_398_, v___x_399_);
lean_dec(v___x_398_);
if (v___x_400_ == 0)
{
lean_object* v_val_401_; lean_object* v___x_403_; 
v_val_401_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5___redArg(v_buckets_x27_394_);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 1, v_val_401_);
lean_ctor_set(v___x_374_, 0, v_size_x27_392_);
v___x_403_ = v___x_374_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_size_x27_392_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v_val_401_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
else
{
lean_object* v___x_406_; 
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 1, v_buckets_x27_394_);
lean_ctor_set(v___x_374_, 0, v_size_x27_392_);
v___x_406_ = v___x_374_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_size_x27_392_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_buckets_x27_394_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
else
{
lean_object* v___x_408_; lean_object* v_buckets_x27_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_413_; 
lean_inc(v_bkt_389_);
v___x_408_ = lean_box(0);
v_buckets_x27_409_ = lean_array_uset(v_buckets_372_, v___x_388_, v___x_408_);
v___x_410_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__6___redArg(v_a_369_, v_b_370_, v_bkt_389_);
v___x_411_ = lean_array_uset(v_buckets_x27_409_, v___x_388_, v___x_410_);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 1, v___x_411_);
v___x_413_ = v___x_374_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_size_371_);
lean_ctor_set(v_reuseFailAlloc_414_, 1, v___x_411_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4_spec__8___redArg(lean_object* v_x_416_, lean_object* v_x_417_){
_start:
{
if (lean_obj_tag(v_x_417_) == 0)
{
return v_x_416_;
}
else
{
lean_object* v_key_418_; lean_object* v_value_419_; lean_object* v_tail_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_443_; 
v_key_418_ = lean_ctor_get(v_x_417_, 0);
v_value_419_ = lean_ctor_get(v_x_417_, 1);
v_tail_420_ = lean_ctor_get(v_x_417_, 2);
v_isSharedCheck_443_ = !lean_is_exclusive(v_x_417_);
if (v_isSharedCheck_443_ == 0)
{
v___x_422_ = v_x_417_;
v_isShared_423_ = v_isSharedCheck_443_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_tail_420_);
lean_inc(v_value_419_);
lean_inc(v_key_418_);
lean_dec(v_x_417_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_443_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; uint64_t v___x_425_; uint64_t v___x_426_; uint64_t v___x_427_; uint64_t v_fold_428_; uint64_t v___x_429_; uint64_t v___x_430_; uint64_t v___x_431_; size_t v___x_432_; size_t v___x_433_; size_t v___x_434_; size_t v___x_435_; size_t v___x_436_; lean_object* v___x_437_; lean_object* v___x_439_; 
v___x_424_ = lean_array_get_size(v_x_416_);
v___x_425_ = l_Lean_instHashableFVarId_hash(v_key_418_);
v___x_426_ = 32ULL;
v___x_427_ = lean_uint64_shift_right(v___x_425_, v___x_426_);
v_fold_428_ = lean_uint64_xor(v___x_425_, v___x_427_);
v___x_429_ = 16ULL;
v___x_430_ = lean_uint64_shift_right(v_fold_428_, v___x_429_);
v___x_431_ = lean_uint64_xor(v_fold_428_, v___x_430_);
v___x_432_ = lean_uint64_to_usize(v___x_431_);
v___x_433_ = lean_usize_of_nat(v___x_424_);
v___x_434_ = ((size_t)1ULL);
v___x_435_ = lean_usize_sub(v___x_433_, v___x_434_);
v___x_436_ = lean_usize_land(v___x_432_, v___x_435_);
v___x_437_ = lean_array_uget_borrowed(v_x_416_, v___x_436_);
lean_inc(v___x_437_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 2, v___x_437_);
v___x_439_ = v___x_422_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_key_418_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v_value_419_);
lean_ctor_set(v_reuseFailAlloc_442_, 2, v___x_437_);
v___x_439_ = v_reuseFailAlloc_442_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
lean_object* v___x_440_; 
v___x_440_ = lean_array_uset(v_x_416_, v___x_436_, v___x_439_);
v_x_416_ = v___x_440_;
v_x_417_ = v_tail_420_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4___redArg(lean_object* v_i_444_, lean_object* v_source_445_, lean_object* v_target_446_){
_start:
{
lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_447_ = lean_array_get_size(v_source_445_);
v___x_448_ = lean_nat_dec_lt(v_i_444_, v___x_447_);
if (v___x_448_ == 0)
{
lean_dec_ref(v_source_445_);
lean_dec(v_i_444_);
return v_target_446_;
}
else
{
lean_object* v_es_449_; lean_object* v___x_450_; lean_object* v_source_451_; lean_object* v_target_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v_es_449_ = lean_array_fget(v_source_445_, v_i_444_);
v___x_450_ = lean_box(0);
v_source_451_ = lean_array_fset(v_source_445_, v_i_444_, v___x_450_);
v_target_452_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4_spec__8___redArg(v_target_446_, v_es_449_);
v___x_453_ = lean_unsigned_to_nat(1u);
v___x_454_ = lean_nat_add(v_i_444_, v___x_453_);
lean_dec(v_i_444_);
v_i_444_ = v___x_454_;
v_source_445_ = v_source_451_;
v_target_446_ = v_target_452_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2___redArg(lean_object* v_data_456_){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v_nbuckets_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_457_ = lean_array_get_size(v_data_456_);
v___x_458_ = lean_unsigned_to_nat(2u);
v_nbuckets_459_ = lean_nat_mul(v___x_457_, v___x_458_);
v___x_460_ = lean_unsigned_to_nat(0u);
v___x_461_ = lean_box(0);
v___x_462_ = lean_mk_array(v_nbuckets_459_, v___x_461_);
v___x_463_ = lean_array_propagate_mark(v_data_456_, v___x_462_);
v___x_464_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4___redArg(v___x_460_, v_data_456_, v___x_463_);
return v___x_464_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1___redArg(lean_object* v_a_465_, lean_object* v_x_466_){
_start:
{
if (lean_obj_tag(v_x_466_) == 0)
{
uint8_t v___x_467_; 
v___x_467_ = 0;
return v___x_467_;
}
else
{
lean_object* v_key_468_; lean_object* v_tail_469_; uint8_t v___x_470_; 
v_key_468_ = lean_ctor_get(v_x_466_, 0);
v_tail_469_ = lean_ctor_get(v_x_466_, 2);
v___x_470_ = l_Lean_instBEqFVarId_beq(v_key_468_, v_a_465_);
if (v___x_470_ == 0)
{
v_x_466_ = v_tail_469_;
goto _start;
}
else
{
return v___x_470_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1___redArg___boxed(lean_object* v_a_472_, lean_object* v_x_473_){
_start:
{
uint8_t v_res_474_; lean_object* v_r_475_; 
v_res_474_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1___redArg(v_a_472_, v_x_473_);
lean_dec(v_x_473_);
lean_dec(v_a_472_);
v_r_475_ = lean_box(v_res_474_);
return v_r_475_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1___redArg(lean_object* v_m_476_, lean_object* v_a_477_, lean_object* v_b_478_){
_start:
{
lean_object* v_size_479_; lean_object* v_buckets_480_; lean_object* v___x_481_; uint64_t v___x_482_; uint64_t v___x_483_; uint64_t v___x_484_; uint64_t v_fold_485_; uint64_t v___x_486_; uint64_t v___x_487_; uint64_t v___x_488_; size_t v___x_489_; size_t v___x_490_; size_t v___x_491_; size_t v___x_492_; size_t v___x_493_; lean_object* v_bkt_494_; uint8_t v___x_495_; 
v_size_479_ = lean_ctor_get(v_m_476_, 0);
v_buckets_480_ = lean_ctor_get(v_m_476_, 1);
v___x_481_ = lean_array_get_size(v_buckets_480_);
v___x_482_ = l_Lean_instHashableFVarId_hash(v_a_477_);
v___x_483_ = 32ULL;
v___x_484_ = lean_uint64_shift_right(v___x_482_, v___x_483_);
v_fold_485_ = lean_uint64_xor(v___x_482_, v___x_484_);
v___x_486_ = 16ULL;
v___x_487_ = lean_uint64_shift_right(v_fold_485_, v___x_486_);
v___x_488_ = lean_uint64_xor(v_fold_485_, v___x_487_);
v___x_489_ = lean_uint64_to_usize(v___x_488_);
v___x_490_ = lean_usize_of_nat(v___x_481_);
v___x_491_ = ((size_t)1ULL);
v___x_492_ = lean_usize_sub(v___x_490_, v___x_491_);
v___x_493_ = lean_usize_land(v___x_489_, v___x_492_);
v_bkt_494_ = lean_array_uget_borrowed(v_buckets_480_, v___x_493_);
v___x_495_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1___redArg(v_a_477_, v_bkt_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_516_; 
lean_inc_ref(v_buckets_480_);
lean_inc(v_size_479_);
v_isSharedCheck_516_ = !lean_is_exclusive(v_m_476_);
if (v_isSharedCheck_516_ == 0)
{
lean_object* v_unused_517_; lean_object* v_unused_518_; 
v_unused_517_ = lean_ctor_get(v_m_476_, 1);
lean_dec(v_unused_517_);
v_unused_518_ = lean_ctor_get(v_m_476_, 0);
lean_dec(v_unused_518_);
v___x_497_ = v_m_476_;
v_isShared_498_ = v_isSharedCheck_516_;
goto v_resetjp_496_;
}
else
{
lean_dec(v_m_476_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_516_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; lean_object* v_size_x27_500_; lean_object* v___x_501_; lean_object* v_buckets_x27_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_499_ = lean_unsigned_to_nat(1u);
v_size_x27_500_ = lean_nat_add(v_size_479_, v___x_499_);
lean_dec(v_size_479_);
lean_inc(v_bkt_494_);
v___x_501_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_501_, 0, v_a_477_);
lean_ctor_set(v___x_501_, 1, v_b_478_);
lean_ctor_set(v___x_501_, 2, v_bkt_494_);
v_buckets_x27_502_ = lean_array_uset(v_buckets_480_, v___x_493_, v___x_501_);
v___x_503_ = lean_unsigned_to_nat(4u);
v___x_504_ = lean_nat_mul(v_size_x27_500_, v___x_503_);
v___x_505_ = lean_unsigned_to_nat(3u);
v___x_506_ = lean_nat_div(v___x_504_, v___x_505_);
lean_dec(v___x_504_);
v___x_507_ = lean_array_get_size(v_buckets_x27_502_);
v___x_508_ = lean_nat_dec_le(v___x_506_, v___x_507_);
lean_dec(v___x_506_);
if (v___x_508_ == 0)
{
lean_object* v_val_509_; lean_object* v___x_511_; 
v_val_509_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2___redArg(v_buckets_x27_502_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 1, v_val_509_);
lean_ctor_set(v___x_497_, 0, v_size_x27_500_);
v___x_511_ = v___x_497_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_size_x27_500_);
lean_ctor_set(v_reuseFailAlloc_512_, 1, v_val_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
else
{
lean_object* v___x_514_; 
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 1, v_buckets_x27_502_);
lean_ctor_set(v___x_497_, 0, v_size_x27_500_);
v___x_514_ = v___x_497_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_size_x27_500_);
lean_ctor_set(v_reuseFailAlloc_515_, 1, v_buckets_x27_502_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
}
else
{
lean_dec(v_b_478_);
lean_dec(v_a_477_);
return v_m_476_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__3(lean_object* v_as_519_, size_t v_i_520_, size_t v_stop_521_, lean_object* v_b_522_){
_start:
{
lean_object* v___y_524_; uint8_t v___x_528_; 
v___x_528_ = lean_usize_dec_eq(v_i_520_, v_stop_521_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; uint8_t v_borrow_530_; 
v___x_529_ = lean_array_uget_borrowed(v_as_519_, v_i_520_);
v_borrow_530_ = lean_ctor_get_uint8(v___x_529_, sizeof(void*)*3);
if (v_borrow_530_ == 0)
{
v___y_524_ = v_b_522_;
goto v___jp_523_;
}
else
{
lean_object* v_fvarId_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_fvarId_531_ = lean_ctor_get(v___x_529_, 0);
v___x_532_ = lean_box(0);
lean_inc(v_fvarId_531_);
v___x_533_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1___redArg(v_b_522_, v_fvarId_531_, v___x_532_);
v___y_524_ = v___x_533_;
goto v___jp_523_;
}
}
else
{
return v_b_522_;
}
v___jp_523_:
{
size_t v___x_525_; size_t v___x_526_; 
v___x_525_ = ((size_t)1ULL);
v___x_526_ = lean_usize_add(v_i_520_, v___x_525_);
v_i_520_ = v___x_526_;
v_b_522_ = v___y_524_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__3___boxed(lean_object* v_as_534_, lean_object* v_i_535_, lean_object* v_stop_536_, lean_object* v_b_537_){
_start:
{
size_t v_i_boxed_538_; size_t v_stop_boxed_539_; lean_object* v_res_540_; 
v_i_boxed_538_ = lean_unbox_usize(v_i_535_);
lean_dec(v_i_535_);
v_stop_boxed_539_ = lean_unbox_usize(v_stop_536_);
lean_dec(v_stop_536_);
v_res_540_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__3(v_as_534_, v_i_boxed_538_, v_stop_boxed_539_, v_b_537_);
lean_dec_ref(v_as_534_);
return v_res_540_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__3(void){
_start:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_544_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__2));
v___x_545_ = lean_unsigned_to_nat(61u);
v___x_546_ = lean_unsigned_to_nat(127u);
v___x_547_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__1));
v___x_548_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__0));
v___x_549_ = l_mkPanicMessageWithDecl(v___x_548_, v___x_547_, v___x_546_, v___x_545_, v___x_544_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode(lean_object* v_declName_550_, lean_object* v_code_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
switch(lean_obj_tag(v_code_551_))
{
case 0:
{
lean_object* v_k_558_; 
v_k_558_ = lean_ctor_get(v_code_551_, 1);
lean_inc_ref(v_k_558_);
lean_dec_ref_known(v_code_551_, 2);
v_code_551_ = v_k_558_;
goto _start;
}
case 2:
{
lean_object* v_decl_560_; lean_object* v_k_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_607_; 
v_decl_560_ = lean_ctor_get(v_code_551_, 0);
v_k_561_ = lean_ctor_get(v_code_551_, 1);
v_isSharedCheck_607_ = !lean_is_exclusive(v_code_551_);
if (v_isSharedCheck_607_ == 0)
{
v___x_563_ = v_code_551_;
v_isShared_564_ = v_isSharedCheck_607_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_k_561_);
lean_inc(v_decl_560_);
lean_dec(v_code_551_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_607_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_565_; lean_object* v_fvarId_566_; lean_object* v_params_567_; lean_object* v_value_568_; lean_object* v_snd_570_; lean_object* v_map_574_; lean_object* v_annotatedBorrows_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_606_; 
v___x_565_ = lean_st_ref_take(v___y_552_);
v_fvarId_566_ = lean_ctor_get(v_decl_560_, 0);
lean_inc(v_fvarId_566_);
v_params_567_ = lean_ctor_get(v_decl_560_, 2);
lean_inc_ref(v_params_567_);
v_value_568_ = lean_ctor_get(v_decl_560_, 4);
lean_inc_ref(v_value_568_);
lean_dec_ref(v_decl_560_);
v_map_574_ = lean_ctor_get(v___x_565_, 0);
v_annotatedBorrows_575_ = lean_ctor_get(v___x_565_, 1);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_606_ == 0)
{
v___x_577_ = v___x_565_;
v_isShared_578_ = v_isSharedCheck_606_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_annotatedBorrows_575_);
lean_inc(v_map_574_);
lean_dec(v___x_565_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_606_;
goto v_resetjp_576_;
}
v___jp_569_:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = lean_st_ref_put(v___y_552_, v_snd_570_);
lean_inc(v_declName_550_);
v___x_572_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode(v_declName_550_, v_value_568_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_dec_ref_known(v___x_572_, 1);
v_code_551_ = v_k_561_;
goto _start;
}
else
{
lean_dec_ref(v_k_561_);
lean_dec(v_declName_550_);
return v___x_572_;
}
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
lean_inc(v_declName_550_);
if (v_isShared_564_ == 0)
{
lean_ctor_set_tag(v___x_563_, 1);
lean_ctor_set(v___x_563_, 1, v_fvarId_566_);
lean_ctor_set(v___x_563_, 0, v_declName_550_);
v___x_580_ = v___x_563_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_declName_550_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_fvarId_566_);
v___x_580_ = v_reuseFailAlloc_605_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
lean_inc_ref(v_params_567_);
v___x_581_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParams(v_params_567_);
v___x_582_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2___redArg(v_map_574_, v___x_580_, v___x_581_);
v___x_583_ = lean_unsigned_to_nat(0u);
v___x_584_ = lean_array_get_size(v_params_567_);
v___x_585_ = lean_nat_dec_lt(v___x_583_, v___x_584_);
if (v___x_585_ == 0)
{
lean_object* v___x_587_; 
lean_dec_ref(v_params_567_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_582_);
v___x_587_ = v___x_577_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_582_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_annotatedBorrows_575_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
v_snd_570_ = v___x_587_;
goto v___jp_569_;
}
}
else
{
uint8_t v___x_589_; 
v___x_589_ = lean_nat_dec_le(v___x_584_, v___x_584_);
if (v___x_589_ == 0)
{
if (v___x_585_ == 0)
{
lean_object* v___x_591_; 
lean_dec_ref(v_params_567_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_582_);
v___x_591_ = v___x_577_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_582_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_annotatedBorrows_575_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
v_snd_570_ = v___x_591_;
goto v___jp_569_;
}
}
else
{
size_t v___x_593_; size_t v___x_594_; lean_object* v___x_595_; lean_object* v___x_597_; 
v___x_593_ = ((size_t)0ULL);
v___x_594_ = lean_usize_of_nat(v___x_584_);
v___x_595_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__3(v_params_567_, v___x_593_, v___x_594_, v_annotatedBorrows_575_);
lean_dec_ref(v_params_567_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 1, v___x_595_);
lean_ctor_set(v___x_577_, 0, v___x_582_);
v___x_597_ = v___x_577_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_582_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v___x_595_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
v_snd_570_ = v___x_597_;
goto v___jp_569_;
}
}
}
else
{
size_t v___x_599_; size_t v___x_600_; lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_599_ = ((size_t)0ULL);
v___x_600_ = lean_usize_of_nat(v___x_584_);
v___x_601_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__3(v_params_567_, v___x_599_, v___x_600_, v_annotatedBorrows_575_);
lean_dec_ref(v_params_567_);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 1, v___x_601_);
lean_ctor_set(v___x_577_, 0, v___x_582_);
v___x_603_ = v___x_577_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_582_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
v_snd_570_ = v___x_603_;
goto v___jp_569_;
}
}
}
}
}
}
}
case 3:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
lean_dec_ref_known(v_code_551_, 2);
lean_dec(v_declName_550_);
v___x_608_ = lean_box(0);
v___x_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
return v___x_609_;
}
case 4:
{
lean_object* v_cases_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_632_; 
v_cases_610_ = lean_ctor_get(v_code_551_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v_code_551_);
if (v_isSharedCheck_632_ == 0)
{
v___x_612_ = v_code_551_;
v_isShared_613_ = v_isSharedCheck_632_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_cases_610_);
lean_dec(v_code_551_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_632_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v_alts_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v_alts_614_ = lean_ctor_get(v_cases_610_, 3);
lean_inc_ref(v_alts_614_);
lean_dec_ref(v_cases_610_);
v___x_615_ = lean_unsigned_to_nat(0u);
v___x_616_ = lean_array_get_size(v_alts_614_);
v___x_617_ = lean_box(0);
v___x_618_ = lean_nat_dec_lt(v___x_615_, v___x_616_);
if (v___x_618_ == 0)
{
lean_object* v___x_620_; 
lean_dec_ref(v_alts_614_);
lean_dec(v_declName_550_);
if (v_isShared_613_ == 0)
{
lean_ctor_set_tag(v___x_612_, 0);
lean_ctor_set(v___x_612_, 0, v___x_617_);
v___x_620_ = v___x_612_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_617_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
else
{
uint8_t v___x_622_; 
v___x_622_ = lean_nat_dec_le(v___x_616_, v___x_616_);
if (v___x_622_ == 0)
{
if (v___x_618_ == 0)
{
lean_object* v___x_624_; 
lean_dec_ref(v_alts_614_);
lean_dec(v_declName_550_);
if (v_isShared_613_ == 0)
{
lean_ctor_set_tag(v___x_612_, 0);
lean_ctor_set(v___x_612_, 0, v___x_617_);
v___x_624_ = v___x_612_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_617_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
else
{
size_t v___x_626_; size_t v___x_627_; lean_object* v___x_628_; 
lean_del_object(v___x_612_);
v___x_626_ = ((size_t)0ULL);
v___x_627_ = lean_usize_of_nat(v___x_616_);
v___x_628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__4(v_declName_550_, v_alts_614_, v___x_626_, v___x_627_, v___x_617_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec_ref(v_alts_614_);
return v___x_628_;
}
}
else
{
size_t v___x_629_; size_t v___x_630_; lean_object* v___x_631_; 
lean_del_object(v___x_612_);
v___x_629_ = ((size_t)0ULL);
v___x_630_ = lean_usize_of_nat(v___x_616_);
v___x_631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__4(v_declName_550_, v_alts_614_, v___x_629_, v___x_630_, v___x_617_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec_ref(v_alts_614_);
return v___x_631_;
}
}
}
}
case 5:
{
lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_640_; 
lean_dec(v_declName_550_);
v_isSharedCheck_640_ = !lean_is_exclusive(v_code_551_);
if (v_isSharedCheck_640_ == 0)
{
lean_object* v_unused_641_; 
v_unused_641_ = lean_ctor_get(v_code_551_, 0);
lean_dec(v_unused_641_);
v___x_634_ = v_code_551_;
v_isShared_635_ = v_isSharedCheck_640_;
goto v_resetjp_633_;
}
else
{
lean_dec(v_code_551_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_640_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_638_; 
v___x_636_ = lean_box(0);
if (v_isShared_635_ == 0)
{
lean_ctor_set_tag(v___x_634_, 0);
lean_ctor_set(v___x_634_, 0, v___x_636_);
v___x_638_ = v___x_634_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
case 6:
{
lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_649_; 
lean_dec(v_declName_550_);
v_isSharedCheck_649_ = !lean_is_exclusive(v_code_551_);
if (v_isSharedCheck_649_ == 0)
{
lean_object* v_unused_650_; 
v_unused_650_ = lean_ctor_get(v_code_551_, 0);
lean_dec(v_unused_650_);
v___x_643_ = v_code_551_;
v_isShared_644_ = v_isSharedCheck_649_;
goto v_resetjp_642_;
}
else
{
lean_dec(v_code_551_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_649_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_645_; lean_object* v___x_647_; 
v___x_645_ = lean_box(0);
if (v_isShared_644_ == 0)
{
lean_ctor_set_tag(v___x_643_, 0);
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
case 8:
{
lean_object* v_k_651_; 
v_k_651_ = lean_ctor_get(v_code_551_, 3);
lean_inc_ref(v_k_651_);
lean_dec_ref_known(v_code_551_, 4);
v_code_551_ = v_k_651_;
goto _start;
}
case 9:
{
lean_object* v_k_653_; 
v_k_653_ = lean_ctor_get(v_code_551_, 5);
lean_inc_ref(v_k_653_);
lean_dec_ref_known(v_code_551_, 6);
v_code_551_ = v_k_653_;
goto _start;
}
default: 
{
lean_object* v___x_655_; lean_object* v___x_656_; 
lean_dec_ref(v_code_551_);
lean_dec(v_declName_550_);
v___x_655_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__3, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__3_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__3);
v___x_656_ = l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5(v___x_655_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
return v___x_656_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___boxed(lean_object* v_declName_657_, lean_object* v_code_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode(v_declName_657_, v_code_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_, v___y_663_);
lean_dec(v___y_663_);
lean_dec_ref(v___y_662_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__4(lean_object* v_declName_666_, lean_object* v_as_667_, size_t v_i_668_, size_t v_stop_669_, lean_object* v_b_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
uint8_t v___x_677_; 
v___x_677_ = lean_usize_dec_eq(v_i_668_, v_stop_669_);
if (v___x_677_ == 0)
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_678_ = lean_array_uget_borrowed(v_as_667_, v_i_668_);
lean_inc(v_declName_666_);
v___x_679_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___boxed), 8, 1);
lean_closure_set(v___x_679_, 0, v_declName_666_);
lean_inc(v___x_678_);
v___x_680_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__0___redArg(v___x_678_, v___x_679_, v___y_671_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; size_t v___x_682_; size_t v___x_683_; 
v_a_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_a_681_);
lean_dec_ref_known(v___x_680_, 1);
v___x_682_ = ((size_t)1ULL);
v___x_683_ = lean_usize_add(v_i_668_, v___x_682_);
v_i_668_ = v___x_683_;
v_b_670_ = v_a_681_;
goto _start;
}
else
{
lean_dec(v_declName_666_);
return v___x_680_;
}
}
else
{
lean_object* v___x_685_; 
lean_dec(v_declName_666_);
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v_b_670_);
return v___x_685_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__4___boxed(lean_object* v_declName_686_, lean_object* v_as_687_, lean_object* v_i_688_, lean_object* v_stop_689_, lean_object* v_b_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
size_t v_i_boxed_697_; size_t v_stop_boxed_698_; lean_object* v_res_699_; 
v_i_boxed_697_ = lean_unbox_usize(v_i_688_);
lean_dec(v_i_688_);
v_stop_boxed_698_ = lean_unbox_usize(v_stop_689_);
lean_dec(v_stop_689_);
v_res_699_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__4(v_declName_686_, v_as_687_, v_i_boxed_697_, v_stop_boxed_698_, v_b_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_);
lean_dec(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
lean_dec(v___y_691_);
lean_dec_ref(v_as_687_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1(lean_object* v_00_u03b2_700_, lean_object* v_m_701_, lean_object* v_a_702_, lean_object* v_b_703_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1___redArg(v_m_701_, v_a_702_, v_b_703_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2(lean_object* v_00_u03b2_705_, lean_object* v_m_706_, lean_object* v_a_707_, lean_object* v_b_708_){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2___redArg(v_m_706_, v_a_707_, v_b_708_);
return v___x_709_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1(lean_object* v_00_u03b2_710_, lean_object* v_a_711_, lean_object* v_x_712_){
_start:
{
uint8_t v___x_713_; 
v___x_713_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1___redArg(v_a_711_, v_x_712_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1___boxed(lean_object* v_00_u03b2_714_, lean_object* v_a_715_, lean_object* v_x_716_){
_start:
{
uint8_t v_res_717_; lean_object* v_r_718_; 
v_res_717_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1(v_00_u03b2_714_, v_a_715_, v_x_716_);
lean_dec(v_x_716_);
lean_dec(v_a_715_);
v_r_718_ = lean_box(v_res_717_);
return v_r_718_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2(lean_object* v_00_u03b2_719_, lean_object* v_data_720_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2___redArg(v_data_720_);
return v___x_721_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4(lean_object* v_00_u03b2_722_, lean_object* v_a_723_, lean_object* v_x_724_){
_start:
{
uint8_t v___x_725_; 
v___x_725_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4___redArg(v_a_723_, v_x_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4___boxed(lean_object* v_00_u03b2_726_, lean_object* v_a_727_, lean_object* v_x_728_){
_start:
{
uint8_t v_res_729_; lean_object* v_r_730_; 
v_res_729_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4(v_00_u03b2_726_, v_a_727_, v_x_728_);
lean_dec(v_x_728_);
lean_dec_ref(v_a_727_);
v_r_730_ = lean_box(v_res_729_);
return v_r_730_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5(lean_object* v_00_u03b2_731_, lean_object* v_data_732_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5___redArg(v_data_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__6(lean_object* v_00_u03b2_734_, lean_object* v_a_735_, lean_object* v_b_736_, lean_object* v_x_737_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__6___redArg(v_a_735_, v_b_736_, v_x_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_739_, lean_object* v_i_740_, lean_object* v_source_741_, lean_object* v_target_742_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4___redArg(v_i_740_, v_source_741_, v_target_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_744_, lean_object* v_i_745_, lean_object* v_source_746_, lean_object* v_target_747_){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8___redArg(v_i_745_, v_source_746_, v_target_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_749_, lean_object* v_x_750_, lean_object* v_x_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__2_spec__4_spec__8___redArg(v_x_750_, v_x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8_spec__12(lean_object* v_00_u03b2_753_, lean_object* v_x_754_, lean_object* v_x_755_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__5_spec__8_spec__12___redArg(v_x_754_, v_x_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported_spec__0(size_t v_sz_757_, size_t v_i_758_, lean_object* v_bs_759_){
_start:
{
uint8_t v___x_760_; 
v___x_760_ = lean_usize_dec_lt(v_i_758_, v_sz_757_);
if (v___x_760_ == 0)
{
return v_bs_759_;
}
else
{
lean_object* v_v_761_; lean_object* v_fvarId_762_; lean_object* v_binderName_763_; lean_object* v_type_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_778_; 
v_v_761_ = lean_array_uget(v_bs_759_, v_i_758_);
v_fvarId_762_ = lean_ctor_get(v_v_761_, 0);
v_binderName_763_ = lean_ctor_get(v_v_761_, 1);
v_type_764_ = lean_ctor_get(v_v_761_, 2);
v_isSharedCheck_778_ = !lean_is_exclusive(v_v_761_);
if (v_isSharedCheck_778_ == 0)
{
v___x_766_ = v_v_761_;
v_isShared_767_ = v_isSharedCheck_778_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_type_764_);
lean_inc(v_binderName_763_);
lean_inc(v_fvarId_762_);
lean_dec(v_v_761_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_778_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_768_; lean_object* v_bs_x27_769_; uint8_t v___x_770_; lean_object* v___x_772_; 
v___x_768_ = lean_unsigned_to_nat(0u);
v_bs_x27_769_ = lean_array_uset(v_bs_759_, v_i_758_, v___x_768_);
v___x_770_ = 0;
if (v_isShared_767_ == 0)
{
v___x_772_ = v___x_766_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_fvarId_762_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v_binderName_763_);
lean_ctor_set(v_reuseFailAlloc_777_, 2, v_type_764_);
v___x_772_ = v_reuseFailAlloc_777_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
size_t v___x_773_; size_t v___x_774_; lean_object* v___x_775_; 
lean_ctor_set_uint8(v___x_772_, sizeof(void*)*3, v___x_770_);
v___x_773_ = ((size_t)1ULL);
v___x_774_ = lean_usize_add(v_i_758_, v___x_773_);
v___x_775_ = lean_array_uset(v_bs_x27_769_, v_i_758_, v___x_772_);
v_i_758_ = v___x_774_;
v_bs_759_ = v___x_775_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported_spec__0___boxed(lean_object* v_sz_779_, lean_object* v_i_780_, lean_object* v_bs_781_){
_start:
{
size_t v_sz_boxed_782_; size_t v_i_boxed_783_; lean_object* v_res_784_; 
v_sz_boxed_782_ = lean_unbox_usize(v_sz_779_);
lean_dec(v_sz_779_);
v_i_boxed_783_ = lean_unbox_usize(v_i_780_);
lean_dec(v_i_780_);
v_res_784_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported_spec__0(v_sz_boxed_782_, v_i_boxed_783_, v_bs_781_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported(uint8_t v_exported_785_, lean_object* v_ps_786_){
_start:
{
if (v_exported_785_ == 0)
{
lean_object* v___x_787_; 
v___x_787_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParams(v_ps_786_);
return v___x_787_;
}
else
{
size_t v_sz_788_; size_t v___x_789_; lean_object* v___x_790_; 
v_sz_788_ = lean_array_size(v_ps_786_);
v___x_789_ = ((size_t)0ULL);
v___x_790_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported_spec__0(v_sz_788_, v___x_789_, v_ps_786_);
return v___x_790_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported___boxed(lean_object* v_exported_791_, lean_object* v_ps_792_){
_start:
{
uint8_t v_exported_boxed_793_; lean_object* v_res_794_; 
v_exported_boxed_793_ = lean_unbox(v_exported_791_);
v_res_794_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported(v_exported_boxed_793_, v_ps_792_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go_spec__0(lean_object* v_as_795_, size_t v_i_796_, size_t v_stop_797_, lean_object* v_b_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
lean_object* v_a_806_; uint8_t v___x_810_; 
v___x_810_ = lean_usize_dec_eq(v_i_796_, v_stop_797_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; lean_object* v_value_812_; 
v___x_811_ = lean_array_uget_borrowed(v_as_795_, v_i_796_);
v_value_812_ = lean_ctor_get(v___x_811_, 1);
lean_inc_ref(v_value_812_);
if (lean_obj_tag(v_value_812_) == 0)
{
lean_object* v_toSignature_813_; lean_object* v_code_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_862_; 
v_toSignature_813_ = lean_ctor_get(v___x_811_, 0);
v_code_814_ = lean_ctor_get(v_value_812_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v_value_812_);
if (v_isSharedCheck_862_ == 0)
{
v___x_816_ = v_value_812_;
v_isShared_817_ = v_isSharedCheck_862_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_code_814_);
lean_dec(v_value_812_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_862_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_818_; lean_object* v_env_819_; lean_object* v_name_820_; lean_object* v_params_821_; uint8_t v___x_822_; lean_object* v___x_823_; lean_object* v_snd_825_; lean_object* v_map_829_; lean_object* v_annotatedBorrows_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_861_; 
v___x_818_ = lean_st_ref_get(v___y_803_);
v_env_819_ = lean_ctor_get(v___x_818_, 0);
lean_inc_ref(v_env_819_);
lean_dec(v___x_818_);
v_name_820_ = lean_ctor_get(v_toSignature_813_, 0);
v_params_821_ = lean_ctor_get(v_toSignature_813_, 3);
lean_inc(v_name_820_);
v___x_822_ = l_Lean_isExport(v_env_819_, v_name_820_);
v___x_823_ = lean_st_ref_take(v___y_799_);
v_map_829_ = lean_ctor_get(v___x_823_, 0);
v_annotatedBorrows_830_ = lean_ctor_get(v___x_823_, 1);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_861_ == 0)
{
v___x_832_ = v___x_823_;
v_isShared_833_ = v_isSharedCheck_861_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_annotatedBorrows_830_);
lean_inc(v_map_829_);
lean_dec(v___x_823_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_861_;
goto v_resetjp_831_;
}
v___jp_824_:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = lean_st_ref_put(v___y_799_, v_snd_825_);
lean_inc(v_name_820_);
v___x_827_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode(v_name_820_, v_code_814_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_828_);
lean_dec_ref_known(v___x_827_, 1);
v_a_806_ = v_a_828_;
goto v___jp_805_;
}
else
{
return v___x_827_;
}
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
lean_inc(v_name_820_);
if (v_isShared_817_ == 0)
{
lean_ctor_set(v___x_816_, 0, v_name_820_);
v___x_835_ = v___x_816_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_name_820_);
v___x_835_ = v_reuseFailAlloc_860_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; uint8_t v___x_840_; 
lean_inc_ref(v_params_821_);
v___x_836_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_initParamsIfNotExported(v___x_822_, v_params_821_);
v___x_837_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2___redArg(v_map_829_, v___x_835_, v___x_836_);
v___x_838_ = lean_unsigned_to_nat(0u);
v___x_839_ = lean_array_get_size(v_params_821_);
v___x_840_ = lean_nat_dec_lt(v___x_838_, v___x_839_);
if (v___x_840_ == 0)
{
lean_object* v___x_842_; 
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 0, v___x_837_);
v___x_842_ = v___x_832_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v___x_837_);
lean_ctor_set(v_reuseFailAlloc_843_, 1, v_annotatedBorrows_830_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
v_snd_825_ = v___x_842_;
goto v___jp_824_;
}
}
else
{
uint8_t v___x_844_; 
v___x_844_ = lean_nat_dec_le(v___x_839_, v___x_839_);
if (v___x_844_ == 0)
{
if (v___x_840_ == 0)
{
lean_object* v___x_846_; 
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 0, v___x_837_);
v___x_846_ = v___x_832_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_837_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v_annotatedBorrows_830_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
v_snd_825_ = v___x_846_;
goto v___jp_824_;
}
}
else
{
size_t v___x_848_; size_t v___x_849_; lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_848_ = ((size_t)0ULL);
v___x_849_ = lean_usize_of_nat(v___x_839_);
v___x_850_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__3(v_params_821_, v___x_848_, v___x_849_, v_annotatedBorrows_830_);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 1, v___x_850_);
lean_ctor_set(v___x_832_, 0, v___x_837_);
v___x_852_ = v___x_832_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v___x_837_);
lean_ctor_set(v_reuseFailAlloc_853_, 1, v___x_850_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
v_snd_825_ = v___x_852_;
goto v___jp_824_;
}
}
}
else
{
size_t v___x_854_; size_t v___x_855_; lean_object* v___x_856_; lean_object* v___x_858_; 
v___x_854_ = ((size_t)0ULL);
v___x_855_ = lean_usize_of_nat(v___x_839_);
v___x_856_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__3(v_params_821_, v___x_854_, v___x_855_, v_annotatedBorrows_830_);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 1, v___x_856_);
lean_ctor_set(v___x_832_, 0, v___x_837_);
v___x_858_ = v___x_832_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v___x_837_);
lean_ctor_set(v_reuseFailAlloc_859_, 1, v___x_856_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
v_snd_825_ = v___x_858_;
goto v___jp_824_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_863_; 
lean_dec_ref_known(v_value_812_, 1);
v___x_863_ = lean_box(0);
v_a_806_ = v___x_863_;
goto v___jp_805_;
}
}
else
{
lean_object* v___x_864_; 
v___x_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_864_, 0, v_b_798_);
return v___x_864_;
}
v___jp_805_:
{
size_t v___x_807_; size_t v___x_808_; 
v___x_807_ = ((size_t)1ULL);
v___x_808_ = lean_usize_add(v_i_796_, v___x_807_);
v_i_796_ = v___x_808_;
v_b_798_ = v_a_806_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go_spec__0___boxed(lean_object* v_as_865_, lean_object* v_i_866_, lean_object* v_stop_867_, lean_object* v_b_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
size_t v_i_boxed_875_; size_t v_stop_boxed_876_; lean_object* v_res_877_; 
v_i_boxed_875_ = lean_unbox_usize(v_i_866_);
lean_dec(v_i_866_);
v_stop_boxed_876_ = lean_unbox_usize(v_stop_867_);
lean_dec(v_stop_867_);
v_res_877_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go_spec__0(v_as_865_, v_i_boxed_875_, v_stop_boxed_876_, v_b_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_);
lean_dec(v___y_873_);
lean_dec_ref(v___y_872_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
lean_dec(v___y_869_);
lean_dec_ref(v_as_865_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go(lean_object* v_decls_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; uint8_t v___x_888_; 
v___x_885_ = lean_unsigned_to_nat(0u);
v___x_886_ = lean_array_get_size(v_decls_878_);
v___x_887_ = lean_box(0);
v___x_888_ = lean_nat_dec_lt(v___x_885_, v___x_886_);
if (v___x_888_ == 0)
{
lean_object* v___x_889_; 
v___x_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_887_);
return v___x_889_;
}
else
{
uint8_t v___x_890_; 
v___x_890_ = lean_nat_dec_le(v___x_886_, v___x_886_);
if (v___x_890_ == 0)
{
if (v___x_888_ == 0)
{
lean_object* v___x_891_; 
v___x_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_887_);
return v___x_891_;
}
else
{
size_t v___x_892_; size_t v___x_893_; lean_object* v___x_894_; 
v___x_892_ = ((size_t)0ULL);
v___x_893_ = lean_usize_of_nat(v___x_886_);
v___x_894_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go_spec__0(v_decls_878_, v___x_892_, v___x_893_, v___x_887_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
return v___x_894_;
}
}
else
{
size_t v___x_895_; size_t v___x_896_; lean_object* v___x_897_; 
v___x_895_ = ((size_t)0ULL);
v___x_896_ = lean_usize_of_nat(v___x_886_);
v___x_897_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go_spec__0(v_decls_878_, v___x_895_, v___x_896_, v___x_887_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
return v___x_897_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go___boxed(lean_object* v_decls_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go(v_decls_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
lean_dec(v___y_901_);
lean_dec_ref(v___y_900_);
lean_dec(v___y_899_);
lean_dec_ref(v_decls_898_);
return v_res_905_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__0(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_906_ = lean_box(0);
v___x_907_ = lean_unsigned_to_nat(16u);
v___x_908_ = lean_mk_array(v___x_907_, v___x_906_);
return v___x_908_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__1(void){
_start:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_909_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__0, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__0_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__0);
v___x_910_ = lean_unsigned_to_nat(0u);
v___x_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
lean_ctor_set(v___x_911_, 1, v___x_909_);
return v___x_911_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__2(void){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_912_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__1, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__1_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__1);
v___x_913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap(lean_object* v_decls_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_920_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__2, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__2_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___closed__2);
v___x_921_ = lean_st_mk_ref(v___x_920_);
v___x_922_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_go(v_decls_914_, v___x_921_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_930_; 
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_930_ == 0)
{
lean_object* v_unused_931_; 
v_unused_931_ = lean_ctor_get(v___x_922_, 0);
lean_dec(v_unused_931_);
v___x_924_ = v___x_922_;
v_isShared_925_ = v_isSharedCheck_930_;
goto v_resetjp_923_;
}
else
{
lean_dec(v___x_922_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_930_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_926_ = lean_st_ref_get(v___x_921_);
lean_dec(v___x_921_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_926_);
v___x_928_ = v___x_924_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_926_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
else
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_939_; 
lean_dec(v___x_921_);
v_a_932_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_939_ == 0)
{
v___x_934_ = v___x_922_;
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_922_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_939_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
lean_object* v___x_937_; 
if (v_isShared_935_ == 0)
{
v___x_937_ = v___x_934_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_a_932_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap___boxed(lean_object* v_decls_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
lean_object* v_res_946_; 
v_res_946_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap(v_decls_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v___y_942_);
lean_dec_ref(v___y_941_);
lean_dec_ref(v_decls_940_);
return v_res_946_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0___redArg(lean_object* v_a_947_, lean_object* v_b_948_, lean_object* v___y_949_){
_start:
{
lean_object* v_memoizedLeft_951_; 
v_memoizedLeft_951_ = lean_ctor_get(v_a_947_, 1);
lean_inc(v_memoizedLeft_951_);
if (lean_obj_tag(v_memoizedLeft_951_) == 0)
{
lean_object* v_left_952_; lean_object* v_right_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_977_; 
v_left_952_ = lean_ctor_get(v_a_947_, 0);
v_right_953_ = lean_ctor_get(v_a_947_, 2);
v_isSharedCheck_977_ = !lean_is_exclusive(v_a_947_);
if (v_isSharedCheck_977_ == 0)
{
lean_object* v_unused_978_; 
v_unused_978_ = lean_ctor_get(v_a_947_, 1);
lean_dec(v_unused_978_);
v___x_955_ = v_a_947_;
v_isShared_956_ = v_isSharedCheck_977_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_right_953_);
lean_inc(v_left_952_);
lean_dec(v_a_947_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_977_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v_array_957_; lean_object* v_pos_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_976_; 
v_array_957_ = lean_ctor_get(v_left_952_, 0);
v_pos_958_ = lean_ctor_get(v_left_952_, 1);
v_isSharedCheck_976_ = !lean_is_exclusive(v_left_952_);
if (v_isSharedCheck_976_ == 0)
{
v___x_960_ = v_left_952_;
v_isShared_961_ = v_isSharedCheck_976_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_pos_958_);
lean_inc(v_array_957_);
lean_dec(v_left_952_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_976_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_962_; uint8_t v___x_963_; 
v___x_962_ = lean_array_get_size(v_array_957_);
v___x_963_ = lean_nat_dec_lt(v_pos_958_, v___x_962_);
if (v___x_963_ == 0)
{
lean_object* v___x_964_; 
lean_del_object(v___x_960_);
lean_dec(v_pos_958_);
lean_dec_ref(v_array_957_);
lean_del_object(v___x_955_);
lean_dec(v_right_953_);
v___x_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_964_, 0, v_b_948_);
return v___x_964_;
}
else
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_965_ = lean_unsigned_to_nat(1u);
v___x_966_ = lean_nat_add(v_pos_958_, v___x_965_);
lean_inc_ref(v_array_957_);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 1, v___x_966_);
v___x_968_ = v___x_960_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_array_957_);
lean_ctor_set(v_reuseFailAlloc_975_, 1, v___x_966_);
v___x_968_ = v_reuseFailAlloc_975_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_972_; 
v___x_969_ = lean_array_fget(v_array_957_, v_pos_958_);
lean_dec(v_pos_958_);
lean_dec_ref(v_array_957_);
v___x_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_970_, 0, v___x_969_);
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 1, v___x_970_);
lean_ctor_set(v___x_955_, 0, v___x_968_);
v___x_972_ = v___x_955_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v___x_968_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v___x_970_);
lean_ctor_set(v_reuseFailAlloc_974_, 2, v_right_953_);
v___x_972_ = v_reuseFailAlloc_974_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
v_a_947_ = v___x_972_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_right_979_; lean_object* v_left_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_1024_; 
v_right_979_ = lean_ctor_get(v_a_947_, 2);
v_left_980_ = lean_ctor_get(v_a_947_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v_a_947_);
if (v_isSharedCheck_1024_ == 0)
{
lean_object* v_unused_1025_; 
v_unused_1025_ = lean_ctor_get(v_a_947_, 1);
lean_dec(v_unused_1025_);
v___x_982_ = v_a_947_;
v_isShared_983_ = v_isSharedCheck_1024_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_right_979_);
lean_inc(v_left_980_);
lean_dec(v_a_947_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_1024_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v_val_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_1023_; 
v_val_984_ = lean_ctor_get(v_memoizedLeft_951_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v_memoizedLeft_951_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_986_ = v_memoizedLeft_951_;
v_isShared_987_ = v_isSharedCheck_1023_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_val_984_);
lean_dec(v_memoizedLeft_951_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_1023_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v_array_988_; lean_object* v_pos_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_1022_; 
v_array_988_ = lean_ctor_get(v_right_979_, 0);
v_pos_989_ = lean_ctor_get(v_right_979_, 1);
v_isSharedCheck_1022_ = !lean_is_exclusive(v_right_979_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_991_ = v_right_979_;
v_isShared_992_ = v_isSharedCheck_1022_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_pos_989_);
lean_inc(v_array_988_);
lean_dec(v_right_979_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_1022_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_993_; uint8_t v___x_994_; 
v___x_993_ = lean_array_get_size(v_array_988_);
v___x_994_ = lean_nat_dec_lt(v_pos_989_, v___x_993_);
if (v___x_994_ == 0)
{
lean_object* v___x_996_; 
lean_del_object(v___x_991_);
lean_dec(v_pos_989_);
lean_dec_ref(v_array_988_);
lean_dec(v_val_984_);
lean_del_object(v___x_982_);
lean_dec(v_left_980_);
if (v_isShared_987_ == 0)
{
lean_ctor_set_tag(v___x_986_, 0);
lean_ctor_set(v___x_986_, 0, v_b_948_);
v___x_996_ = v___x_986_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_b_948_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
else
{
lean_object* v___x_998_; uint8_t v_borrow_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1003_; 
lean_del_object(v___x_986_);
v___x_998_ = lean_array_fget_borrowed(v_array_988_, v_pos_989_);
v_borrow_999_ = lean_ctor_get_uint8(v___x_998_, sizeof(void*)*3);
v___x_1000_ = lean_unsigned_to_nat(1u);
v___x_1001_ = lean_nat_add(v_pos_989_, v___x_1000_);
lean_dec(v_pos_989_);
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 1, v___x_1001_);
v___x_1003_ = v___x_991_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_array_988_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1004_; lean_object* v___x_1006_; 
v___x_1004_ = lean_box(0);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 2, v___x_1003_);
lean_ctor_set(v___x_982_, 1, v___x_1004_);
v___x_1006_ = v___x_982_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_left_980_);
lean_ctor_set(v_reuseFailAlloc_1020_, 1, v___x_1004_);
lean_ctor_set(v_reuseFailAlloc_1020_, 2, v___x_1003_);
v___x_1006_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
uint8_t v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = 1;
v___x_1008_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(v___x_1007_, v_val_984_, v_borrow_999_, v___y_949_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1010_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
lean_inc(v_a_1009_);
lean_dec_ref_known(v___x_1008_, 1);
v___x_1010_ = lean_array_push(v_b_948_, v_a_1009_);
v_a_947_ = v___x_1006_;
v_b_948_ = v___x_1010_;
goto _start;
}
else
{
lean_object* v_a_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1019_; 
lean_dec_ref(v___x_1006_);
lean_dec_ref(v_b_948_);
v_a_1012_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1014_ = v___x_1008_;
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_a_1012_);
lean_dec(v___x_1008_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1017_; 
if (v_isShared_1015_ == 0)
{
v___x_1017_ = v___x_1014_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_1012_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
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
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0___redArg___boxed(lean_object* v_a_1026_, lean_object* v_b_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0___redArg(v_a_1026_, v_b_1027_, v___y_1028_);
lean_dec(v___y_1028_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams(lean_object* v_ps_1033_, lean_object* v_borrows_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1040_ = lean_unsigned_to_nat(0u);
v___x_1041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1041_, 0, v_ps_1033_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1042_, 0, v_borrows_1034_);
lean_ctor_set(v___x_1042_, 1, v___x_1040_);
v___x_1043_ = lean_box(0);
v___x_1044_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1041_);
lean_ctor_set(v___x_1044_, 1, v___x_1043_);
lean_ctor_set(v___x_1044_, 2, v___x_1042_);
v___x_1045_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams___closed__0));
v___x_1046_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0___redArg(v___x_1044_, v___x_1045_, v___y_1036_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams___boxed(lean_object* v_ps_1047_, lean_object* v_borrows_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams(v_ps_1047_, v_borrows_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0(lean_object* v_inst_1055_, lean_object* v_R_1056_, lean_object* v_a_1057_, lean_object* v_b_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0___redArg(v_a_1057_, v_b_1058_, v___y_1060_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0___boxed(lean_object* v_inst_1065_, lean_object* v_R_1066_, lean_object* v_a_1067_, lean_object* v_b_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams_spec__0(v_inst_1065_, v_R_1066_, v_a_1067_, v_b_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1___redArg(lean_object* v_alt_1075_, lean_object* v_f_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___y_1083_; 
switch(lean_obj_tag(v_alt_1075_))
{
case 0:
{
lean_object* v_code_1102_; 
v_code_1102_ = lean_ctor_get(v_alt_1075_, 2);
lean_inc_ref(v_code_1102_);
v___y_1083_ = v_code_1102_;
goto v___jp_1082_;
}
case 1:
{
lean_object* v_code_1103_; 
v_code_1103_ = lean_ctor_get(v_alt_1075_, 1);
lean_inc_ref(v_code_1103_);
v___y_1083_ = v_code_1103_;
goto v___jp_1082_;
}
default: 
{
lean_object* v_code_1104_; 
v_code_1104_ = lean_ctor_get(v_alt_1075_, 0);
lean_inc_ref(v_code_1104_);
v___y_1083_ = v_code_1104_;
goto v___jp_1082_;
}
}
v___jp_1082_:
{
lean_object* v___x_1084_; 
lean_inc(v___y_1080_);
lean_inc_ref(v___y_1079_);
lean_inc(v___y_1078_);
lean_inc_ref(v___y_1077_);
v___x_1084_ = lean_apply_6(v_f_1076_, v___y_1083_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, lean_box(0));
if (lean_obj_tag(v___x_1084_) == 0)
{
lean_object* v_a_1085_; lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1093_; 
v_a_1085_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1087_ = v___x_1084_;
v_isShared_1088_ = v_isSharedCheck_1093_;
goto v_resetjp_1086_;
}
else
{
lean_inc(v_a_1085_);
lean_dec(v___x_1084_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1093_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1089_; lean_object* v___x_1091_; 
v___x_1089_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_1075_, v_a_1085_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 0, v___x_1089_);
v___x_1091_ = v___x_1087_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v___x_1089_);
v___x_1091_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
return v___x_1091_;
}
}
}
else
{
lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1101_; 
lean_dec_ref(v_alt_1075_);
v_a_1094_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1096_ = v___x_1084_;
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_dec(v___x_1084_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1099_; 
if (v_isShared_1097_ == 0)
{
v___x_1099_ = v___x_1096_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_a_1094_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1___redArg___boxed(lean_object* v_alt_1105_, lean_object* v_f_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1___redArg(v_alt_1105_, v_f_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
lean_dec(v___y_1110_);
lean_dec_ref(v___y_1109_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1(uint8_t v_pu_1113_, lean_object* v_alt_1114_, lean_object* v_f_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1___redArg(v_alt_1114_, v_f_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1___boxed(lean_object* v_pu_1122_, lean_object* v_alt_1123_, lean_object* v_f_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
uint8_t v_pu_boxed_1130_; lean_object* v_res_1131_; 
v_pu_boxed_1130_ = lean_unbox(v_pu_1122_);
v_res_1131_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1(v_pu_boxed_1130_, v_alt_1123_, v_f_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
return v_res_1131_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3(lean_object* v_msg_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_){
_start:
{
lean_object* v___f_1139_; lean_object* v___f_1140_; lean_object* v___f_1141_; lean_object* v___f_1142_; lean_object* v___f_1143_; lean_object* v___f_1144_; lean_object* v___f_1145_; lean_object* v___f_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v_toApplicative_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1184_; 
v___f_1139_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__0));
v___f_1140_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__1));
v___f_1141_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__2));
v___f_1142_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__3));
v___f_1143_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__4));
v___f_1144_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1144_, 0, v___f_1143_);
lean_closure_set(v___f_1144_, 1, v___f_1142_);
v___f_1145_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1145_, 0, v___f_1142_);
v___f_1146_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__5));
v___x_1147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___f_1139_);
lean_ctor_set(v___x_1147_, 1, v___f_1140_);
v___x_1148_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1147_);
lean_ctor_set(v___x_1148_, 1, v___f_1141_);
lean_ctor_set(v___x_1148_, 2, v___f_1144_);
lean_ctor_set(v___x_1148_, 3, v___f_1145_);
lean_ctor_set(v___x_1148_, 4, v___f_1146_);
v___x_1149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
lean_ctor_set(v___x_1149_, 1, v___f_1142_);
v___x_1150_ = l_StateRefT_x27_instMonad___redArg(v___x_1149_);
v_toApplicative_1151_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1184_ == 0)
{
lean_object* v_unused_1185_; 
v_unused_1185_ = lean_ctor_get(v___x_1150_, 1);
lean_dec(v_unused_1185_);
v___x_1153_ = v___x_1150_;
v_isShared_1154_ = v_isSharedCheck_1184_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_toApplicative_1151_);
lean_dec(v___x_1150_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1184_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v_toFunctor_1155_; lean_object* v_toSeq_1156_; lean_object* v_toSeqLeft_1157_; lean_object* v_toSeqRight_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1182_; 
v_toFunctor_1155_ = lean_ctor_get(v_toApplicative_1151_, 0);
v_toSeq_1156_ = lean_ctor_get(v_toApplicative_1151_, 2);
v_toSeqLeft_1157_ = lean_ctor_get(v_toApplicative_1151_, 3);
v_toSeqRight_1158_ = lean_ctor_get(v_toApplicative_1151_, 4);
v_isSharedCheck_1182_ = !lean_is_exclusive(v_toApplicative_1151_);
if (v_isSharedCheck_1182_ == 0)
{
lean_object* v_unused_1183_; 
v_unused_1183_ = lean_ctor_get(v_toApplicative_1151_, 1);
lean_dec(v_unused_1183_);
v___x_1160_ = v_toApplicative_1151_;
v_isShared_1161_ = v_isSharedCheck_1182_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_toSeqRight_1158_);
lean_inc(v_toSeqLeft_1157_);
lean_inc(v_toSeq_1156_);
lean_inc(v_toFunctor_1155_);
lean_dec(v_toApplicative_1151_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1182_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___f_1162_; lean_object* v___f_1163_; lean_object* v___f_1164_; lean_object* v___f_1165_; lean_object* v___x_1166_; lean_object* v___f_1167_; lean_object* v___f_1168_; lean_object* v___f_1169_; lean_object* v___x_1171_; 
v___f_1162_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__6));
v___f_1163_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__7));
lean_inc_ref(v_toFunctor_1155_);
v___f_1164_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1164_, 0, v_toFunctor_1155_);
v___f_1165_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1165_, 0, v_toFunctor_1155_);
v___x_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1166_, 0, v___f_1164_);
lean_ctor_set(v___x_1166_, 1, v___f_1165_);
v___f_1167_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1167_, 0, v_toSeqRight_1158_);
v___f_1168_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1168_, 0, v_toSeqLeft_1157_);
v___f_1169_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1169_, 0, v_toSeq_1156_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 4, v___f_1167_);
lean_ctor_set(v___x_1160_, 3, v___f_1168_);
lean_ctor_set(v___x_1160_, 2, v___f_1169_);
lean_ctor_set(v___x_1160_, 1, v___f_1162_);
lean_ctor_set(v___x_1160_, 0, v___x_1166_);
v___x_1171_ = v___x_1160_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1166_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v___f_1162_);
lean_ctor_set(v_reuseFailAlloc_1181_, 2, v___f_1169_);
lean_ctor_set(v_reuseFailAlloc_1181_, 3, v___f_1168_);
lean_ctor_set(v_reuseFailAlloc_1181_, 4, v___f_1167_);
v___x_1171_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
lean_object* v___x_1173_; 
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 1, v___f_1163_);
lean_ctor_set(v___x_1153_, 0, v___x_1171_);
v___x_1173_ = v___x_1153_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1171_);
lean_ctor_set(v_reuseFailAlloc_1180_, 1, v___f_1163_);
v___x_1173_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_3329__overap_1178_; lean_object* v___x_1179_; 
v___x_1174_ = l_StateRefT_x27_instMonad___redArg(v___x_1173_);
v___x_1175_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3___closed__0);
v___x_1176_ = l_instInhabitedOfMonad___redArg(v___x_1174_, v___x_1175_);
v___x_1177_ = l_instInhabitedReaderT___redArg(v___x_1176_);
v___x_3329__overap_1178_ = lean_panic_fn_borrowed(v___x_1177_, v_msg_1133_);
lean_dec(v___x_1177_);
lean_inc(v___y_1137_);
lean_inc_ref(v___y_1136_);
lean_inc(v___y_1135_);
lean_inc_ref(v___y_1134_);
v___x_1179_ = lean_apply_5(v___x_3329__overap_1178_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, lean_box(0));
return v___x_1179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3___boxed(lean_object* v_msg_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3(v_msg_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
return v_res_1192_;
}
}
static lean_object* _init_l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = l_Array_instInhabited___redArg();
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3(lean_object* v_msg_1194_){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1195_ = lean_obj_once(&l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3___closed__0, &l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3___closed__0_once, _init_l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3___closed__0);
v___x_1196_ = lean_panic_fn_borrowed(v___x_1195_, v_msg_1194_);
return v___x_1196_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
v___x_1200_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__2));
v___x_1201_ = lean_unsigned_to_nat(11u);
v___x_1202_ = lean_unsigned_to_nat(163u);
v___x_1203_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__1));
v___x_1204_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__0));
v___x_1205_ = l_mkPanicMessageWithDecl(v___x_1204_, v___x_1203_, v___x_1202_, v___x_1201_, v___x_1200_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0(lean_object* v_a_1206_, lean_object* v_x_1207_){
_start:
{
if (lean_obj_tag(v_x_1207_) == 0)
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___closed__3);
v___x_1209_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3(v___x_1208_);
return v___x_1209_;
}
else
{
lean_object* v_key_1210_; lean_object* v_value_1211_; lean_object* v_tail_1212_; uint8_t v___x_1213_; 
v_key_1210_ = lean_ctor_get(v_x_1207_, 0);
v_value_1211_ = lean_ctor_get(v_x_1207_, 1);
v_tail_1212_ = lean_ctor_get(v_x_1207_, 2);
v___x_1213_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey_beq(v_key_1210_, v_a_1206_);
if (v___x_1213_ == 0)
{
v_x_1207_ = v_tail_1212_;
goto _start;
}
else
{
lean_inc(v_value_1211_);
return v_value_1211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0___boxed(lean_object* v_a_1215_, lean_object* v_x_1216_){
_start:
{
lean_object* v_res_1217_; 
v_res_1217_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0(v_a_1215_, v_x_1216_);
lean_dec(v_x_1216_);
lean_dec_ref(v_a_1215_);
return v_res_1217_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0(lean_object* v_m_1218_, lean_object* v_a_1219_){
_start:
{
lean_object* v_buckets_1220_; lean_object* v___x_1221_; uint64_t v___x_1222_; uint64_t v___x_1223_; uint64_t v___x_1224_; uint64_t v_fold_1225_; uint64_t v___x_1226_; uint64_t v___x_1227_; uint64_t v___x_1228_; size_t v___x_1229_; size_t v___x_1230_; size_t v___x_1231_; size_t v___x_1232_; size_t v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
v_buckets_1220_ = lean_ctor_get(v_m_1218_, 1);
v___x_1221_ = lean_array_get_size(v_buckets_1220_);
v___x_1222_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash(v_a_1219_);
v___x_1223_ = 32ULL;
v___x_1224_ = lean_uint64_shift_right(v___x_1222_, v___x_1223_);
v_fold_1225_ = lean_uint64_xor(v___x_1222_, v___x_1224_);
v___x_1226_ = 16ULL;
v___x_1227_ = lean_uint64_shift_right(v_fold_1225_, v___x_1226_);
v___x_1228_ = lean_uint64_xor(v_fold_1225_, v___x_1227_);
v___x_1229_ = lean_uint64_to_usize(v___x_1228_);
v___x_1230_ = lean_usize_of_nat(v___x_1221_);
v___x_1231_ = ((size_t)1ULL);
v___x_1232_ = lean_usize_sub(v___x_1230_, v___x_1231_);
v___x_1233_ = lean_usize_land(v___x_1229_, v___x_1232_);
v___x_1234_ = lean_array_uget_borrowed(v_buckets_1220_, v___x_1233_);
v___x_1235_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0(v_a_1219_, v___x_1234_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0___boxed(lean_object* v_m_1236_, lean_object* v_a_1237_){
_start:
{
lean_object* v_res_1238_; 
v_res_1238_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0(v_m_1236_, v_a_1237_);
lean_dec_ref(v_a_1237_);
lean_dec_ref(v_m_1236_);
return v_res_1238_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___closed__1(void){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1240_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__2));
v___x_1241_ = lean_unsigned_to_nat(61u);
v___x_1242_ = lean_unsigned_to_nat(157u);
v___x_1243_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___closed__0));
v___x_1244_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__0));
v___x_1245_ = l_mkPanicMessageWithDecl(v___x_1244_, v___x_1243_, v___x_1242_, v___x_1241_, v___x_1240_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go(lean_object* v_map_1246_, lean_object* v_declName_1247_, lean_object* v_code_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
switch(lean_obj_tag(v_code_1248_))
{
case 0:
{
lean_object* v_decl_1254_; lean_object* v_k_1255_; lean_object* v___x_1256_; 
v_decl_1254_ = lean_ctor_get(v_code_1248_, 0);
v_k_1255_ = lean_ctor_get(v_code_1248_, 1);
lean_inc_ref(v_k_1255_);
v___x_1256_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go(v_map_1246_, v_declName_1247_, v_k_1255_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1279_; 
v_a_1257_ = lean_ctor_get(v___x_1256_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1256_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1259_ = v___x_1256_;
v_isShared_1260_ = v_isSharedCheck_1279_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1256_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1279_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
size_t v___x_1261_; size_t v___x_1262_; uint8_t v___x_1263_; 
v___x_1261_ = lean_ptr_addr(v_k_1255_);
v___x_1262_ = lean_ptr_addr(v_a_1257_);
v___x_1263_ = lean_usize_dec_eq(v___x_1261_, v___x_1262_);
if (v___x_1263_ == 0)
{
lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1273_; 
lean_inc_ref(v_decl_1254_);
v_isSharedCheck_1273_ = !lean_is_exclusive(v_code_1248_);
if (v_isSharedCheck_1273_ == 0)
{
lean_object* v_unused_1274_; lean_object* v_unused_1275_; 
v_unused_1274_ = lean_ctor_get(v_code_1248_, 1);
lean_dec(v_unused_1274_);
v_unused_1275_ = lean_ctor_get(v_code_1248_, 0);
lean_dec(v_unused_1275_);
v___x_1265_ = v_code_1248_;
v_isShared_1266_ = v_isSharedCheck_1273_;
goto v_resetjp_1264_;
}
else
{
lean_dec(v_code_1248_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1273_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 1, v_a_1257_);
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_decl_1254_);
lean_ctor_set(v_reuseFailAlloc_1272_, 1, v_a_1257_);
v___x_1268_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
lean_object* v___x_1270_; 
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v___x_1268_);
v___x_1270_ = v___x_1259_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1268_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
else
{
lean_object* v___x_1277_; 
lean_dec(v_a_1257_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v_code_1248_);
v___x_1277_ = v___x_1259_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_code_1248_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1248_, 2);
return v___x_1256_;
}
}
case 2:
{
lean_object* v_decl_1280_; lean_object* v_k_1281_; lean_object* v_fvarId_1282_; lean_object* v_params_1283_; lean_object* v_type_1284_; lean_object* v_value_1285_; lean_object* v_map_1286_; uint8_t v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v_decl_1280_ = lean_ctor_get(v_code_1248_, 0);
v_k_1281_ = lean_ctor_get(v_code_1248_, 1);
v_fvarId_1282_ = lean_ctor_get(v_decl_1280_, 0);
v_params_1283_ = lean_ctor_get(v_decl_1280_, 2);
v_type_1284_ = lean_ctor_get(v_decl_1280_, 3);
v_value_1285_ = lean_ctor_get(v_decl_1280_, 4);
v_map_1286_ = lean_ctor_get(v_map_1246_, 0);
v___x_1287_ = 1;
lean_inc(v_fvarId_1282_);
lean_inc(v_declName_1247_);
v___x_1288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1288_, 0, v_declName_1247_);
lean_ctor_set(v___x_1288_, 1, v_fvarId_1282_);
v___x_1289_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0(v_map_1286_, v___x_1288_);
lean_dec_ref_known(v___x_1288_, 2);
lean_inc_ref(v_params_1283_);
v___x_1290_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams(v_params_1283_, v___x_1289_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; lean_object* v___x_1292_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
lean_inc(v_a_1291_);
lean_dec_ref_known(v___x_1290_, 1);
lean_inc_ref(v_value_1285_);
lean_inc(v_declName_1247_);
lean_inc_ref(v_map_1246_);
v___x_1292_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go(v_map_1246_, v_declName_1247_, v_value_1285_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; lean_object* v___x_1294_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref_known(v___x_1292_, 1);
lean_inc_ref(v_type_1284_);
lean_inc_ref(v_decl_1280_);
v___x_1294_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1287_, v_decl_1280_, v_type_1284_, v_a_1291_, v_a_1293_, v___y_1250_);
if (lean_obj_tag(v___x_1294_) == 0)
{
lean_object* v_a_1295_; lean_object* v___x_1296_; 
v_a_1295_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_a_1295_);
lean_dec_ref_known(v___x_1294_, 1);
lean_inc_ref(v_k_1281_);
v___x_1296_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go(v_map_1246_, v_declName_1247_, v_k_1281_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1334_; 
v_a_1297_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1299_ = v___x_1296_;
v_isShared_1300_ = v_isSharedCheck_1334_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1296_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1334_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
size_t v___x_1301_; size_t v___x_1302_; uint8_t v___x_1303_; 
v___x_1301_ = lean_ptr_addr(v_k_1281_);
v___x_1302_ = lean_ptr_addr(v_a_1297_);
v___x_1303_ = lean_usize_dec_eq(v___x_1301_, v___x_1302_);
if (v___x_1303_ == 0)
{
lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1313_; 
v_isSharedCheck_1313_ = !lean_is_exclusive(v_code_1248_);
if (v_isSharedCheck_1313_ == 0)
{
lean_object* v_unused_1314_; lean_object* v_unused_1315_; 
v_unused_1314_ = lean_ctor_get(v_code_1248_, 1);
lean_dec(v_unused_1314_);
v_unused_1315_ = lean_ctor_get(v_code_1248_, 0);
lean_dec(v_unused_1315_);
v___x_1305_ = v_code_1248_;
v_isShared_1306_ = v_isSharedCheck_1313_;
goto v_resetjp_1304_;
}
else
{
lean_dec(v_code_1248_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1313_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 1, v_a_1297_);
lean_ctor_set(v___x_1305_, 0, v_a_1295_);
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_a_1295_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v_a_1297_);
v___x_1308_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
lean_object* v___x_1310_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 0, v___x_1308_);
v___x_1310_ = v___x_1299_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1311_; 
v_reuseFailAlloc_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1311_, 0, v___x_1308_);
v___x_1310_ = v_reuseFailAlloc_1311_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
return v___x_1310_;
}
}
}
}
else
{
size_t v___x_1316_; size_t v___x_1317_; uint8_t v___x_1318_; 
v___x_1316_ = lean_ptr_addr(v_decl_1280_);
v___x_1317_ = lean_ptr_addr(v_a_1295_);
v___x_1318_ = lean_usize_dec_eq(v___x_1316_, v___x_1317_);
if (v___x_1318_ == 0)
{
lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1328_; 
v_isSharedCheck_1328_ = !lean_is_exclusive(v_code_1248_);
if (v_isSharedCheck_1328_ == 0)
{
lean_object* v_unused_1329_; lean_object* v_unused_1330_; 
v_unused_1329_ = lean_ctor_get(v_code_1248_, 1);
lean_dec(v_unused_1329_);
v_unused_1330_ = lean_ctor_get(v_code_1248_, 0);
lean_dec(v_unused_1330_);
v___x_1320_ = v_code_1248_;
v_isShared_1321_ = v_isSharedCheck_1328_;
goto v_resetjp_1319_;
}
else
{
lean_dec(v_code_1248_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1328_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 1, v_a_1297_);
lean_ctor_set(v___x_1320_, 0, v_a_1295_);
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_a_1295_);
lean_ctor_set(v_reuseFailAlloc_1327_, 1, v_a_1297_);
v___x_1323_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
lean_object* v___x_1325_; 
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 0, v___x_1323_);
v___x_1325_ = v___x_1299_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
else
{
lean_object* v___x_1332_; 
lean_dec(v_a_1297_);
lean_dec(v_a_1295_);
if (v_isShared_1300_ == 0)
{
lean_ctor_set(v___x_1299_, 0, v_code_1248_);
v___x_1332_ = v___x_1299_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_code_1248_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
}
else
{
lean_dec(v_a_1295_);
lean_dec_ref_known(v_code_1248_, 2);
return v___x_1296_;
}
}
else
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_dec_ref_known(v_code_1248_, 2);
lean_dec(v_declName_1247_);
lean_dec_ref(v_map_1246_);
v_a_1335_ = lean_ctor_get(v___x_1294_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1294_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1294_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1294_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
else
{
lean_dec(v_a_1291_);
lean_dec_ref_known(v_code_1248_, 2);
lean_dec(v_declName_1247_);
lean_dec_ref(v_map_1246_);
return v___x_1292_;
}
}
else
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1350_; 
lean_dec_ref_known(v_code_1248_, 2);
lean_dec(v_declName_1247_);
lean_dec_ref(v_map_1246_);
v_a_1343_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1350_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1345_ = v___x_1290_;
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1290_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1350_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
lean_object* v___x_1348_; 
if (v_isShared_1346_ == 0)
{
v___x_1348_ = v___x_1345_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v_a_1343_);
v___x_1348_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
return v___x_1348_;
}
}
}
}
case 3:
{
lean_object* v___x_1351_; 
lean_dec(v_declName_1247_);
lean_dec_ref(v_map_1246_);
v___x_1351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1351_, 0, v_code_1248_);
return v___x_1351_;
}
case 4:
{
lean_object* v_cases_1352_; lean_object* v_typeName_1353_; lean_object* v_resultType_1354_; lean_object* v_discr_1355_; lean_object* v_alts_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1395_; 
v_cases_1352_ = lean_ctor_get(v_code_1248_, 0);
lean_inc_ref(v_cases_1352_);
v_typeName_1353_ = lean_ctor_get(v_cases_1352_, 0);
v_resultType_1354_ = lean_ctor_get(v_cases_1352_, 1);
v_discr_1355_ = lean_ctor_get(v_cases_1352_, 2);
v_alts_1356_ = lean_ctor_get(v_cases_1352_, 3);
v_isSharedCheck_1395_ = !lean_is_exclusive(v_cases_1352_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1358_ = v_cases_1352_;
v_isShared_1359_ = v_isSharedCheck_1395_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_alts_1356_);
lean_inc(v_discr_1355_);
lean_inc(v_resultType_1354_);
lean_inc(v_typeName_1353_);
lean_dec(v_cases_1352_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1395_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1360_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_1356_);
v___x_1361_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__2(v_map_1246_, v_declName_1247_, v___x_1360_, v_alts_1356_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v___x_1364_; uint8_t v_isShared_1365_; uint8_t v_isSharedCheck_1386_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1364_ = v___x_1361_;
v_isShared_1365_ = v_isSharedCheck_1386_;
goto v_resetjp_1363_;
}
else
{
lean_inc(v_a_1362_);
lean_dec(v___x_1361_);
v___x_1364_ = lean_box(0);
v_isShared_1365_ = v_isSharedCheck_1386_;
goto v_resetjp_1363_;
}
v_resetjp_1363_:
{
size_t v___x_1366_; size_t v___x_1367_; uint8_t v___x_1368_; 
v___x_1366_ = lean_ptr_addr(v_alts_1356_);
lean_dec_ref(v_alts_1356_);
v___x_1367_ = lean_ptr_addr(v_a_1362_);
v___x_1368_ = lean_usize_dec_eq(v___x_1366_, v___x_1367_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1381_; 
v_isSharedCheck_1381_ = !lean_is_exclusive(v_code_1248_);
if (v_isSharedCheck_1381_ == 0)
{
lean_object* v_unused_1382_; 
v_unused_1382_ = lean_ctor_get(v_code_1248_, 0);
lean_dec(v_unused_1382_);
v___x_1370_ = v_code_1248_;
v_isShared_1371_ = v_isSharedCheck_1381_;
goto v_resetjp_1369_;
}
else
{
lean_dec(v_code_1248_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1381_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; 
if (v_isShared_1359_ == 0)
{
lean_ctor_set(v___x_1358_, 3, v_a_1362_);
v___x_1373_ = v___x_1358_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_typeName_1353_);
lean_ctor_set(v_reuseFailAlloc_1380_, 1, v_resultType_1354_);
lean_ctor_set(v_reuseFailAlloc_1380_, 2, v_discr_1355_);
lean_ctor_set(v_reuseFailAlloc_1380_, 3, v_a_1362_);
v___x_1373_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_object* v___x_1375_; 
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 0, v___x_1373_);
v___x_1375_ = v___x_1370_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v___x_1373_);
v___x_1375_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
lean_object* v___x_1377_; 
if (v_isShared_1365_ == 0)
{
lean_ctor_set(v___x_1364_, 0, v___x_1375_);
v___x_1377_ = v___x_1364_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
}
else
{
lean_object* v___x_1384_; 
lean_dec(v_a_1362_);
lean_del_object(v___x_1358_);
lean_dec(v_discr_1355_);
lean_dec_ref(v_resultType_1354_);
lean_dec(v_typeName_1353_);
if (v_isShared_1365_ == 0)
{
lean_ctor_set(v___x_1364_, 0, v_code_1248_);
v___x_1384_ = v___x_1364_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_code_1248_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
}
}
else
{
lean_object* v_a_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1394_; 
lean_del_object(v___x_1358_);
lean_dec_ref(v_alts_1356_);
lean_dec(v_discr_1355_);
lean_dec_ref(v_resultType_1354_);
lean_dec(v_typeName_1353_);
lean_dec_ref_known(v_code_1248_, 1);
v_a_1387_ = lean_ctor_get(v___x_1361_, 0);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1389_ = v___x_1361_;
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_a_1387_);
lean_dec(v___x_1361_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1394_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v___x_1392_; 
if (v_isShared_1390_ == 0)
{
v___x_1392_ = v___x_1389_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_a_1387_);
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
}
case 5:
{
lean_object* v___x_1396_; 
lean_dec(v_declName_1247_);
lean_dec_ref(v_map_1246_);
v___x_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1396_, 0, v_code_1248_);
return v___x_1396_;
}
case 6:
{
lean_object* v___x_1397_; 
lean_dec(v_declName_1247_);
lean_dec_ref(v_map_1246_);
v___x_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1397_, 0, v_code_1248_);
return v___x_1397_;
}
case 8:
{
lean_object* v_fvarId_1398_; lean_object* v_i_1399_; lean_object* v_y_1400_; lean_object* v_k_1401_; lean_object* v___x_1402_; 
v_fvarId_1398_ = lean_ctor_get(v_code_1248_, 0);
v_i_1399_ = lean_ctor_get(v_code_1248_, 1);
v_y_1400_ = lean_ctor_get(v_code_1248_, 2);
v_k_1401_ = lean_ctor_get(v_code_1248_, 3);
lean_inc_ref(v_k_1401_);
v___x_1402_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go(v_map_1246_, v_declName_1247_, v_k_1401_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1427_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1405_ = v___x_1402_;
v_isShared_1406_ = v_isSharedCheck_1427_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___x_1402_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1427_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
size_t v___x_1407_; size_t v___x_1408_; uint8_t v___x_1409_; 
v___x_1407_ = lean_ptr_addr(v_k_1401_);
v___x_1408_ = lean_ptr_addr(v_a_1403_);
v___x_1409_ = lean_usize_dec_eq(v___x_1407_, v___x_1408_);
if (v___x_1409_ == 0)
{
lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1419_; 
lean_inc(v_y_1400_);
lean_inc(v_i_1399_);
lean_inc(v_fvarId_1398_);
v_isSharedCheck_1419_ = !lean_is_exclusive(v_code_1248_);
if (v_isSharedCheck_1419_ == 0)
{
lean_object* v_unused_1420_; lean_object* v_unused_1421_; lean_object* v_unused_1422_; lean_object* v_unused_1423_; 
v_unused_1420_ = lean_ctor_get(v_code_1248_, 3);
lean_dec(v_unused_1420_);
v_unused_1421_ = lean_ctor_get(v_code_1248_, 2);
lean_dec(v_unused_1421_);
v_unused_1422_ = lean_ctor_get(v_code_1248_, 1);
lean_dec(v_unused_1422_);
v_unused_1423_ = lean_ctor_get(v_code_1248_, 0);
lean_dec(v_unused_1423_);
v___x_1411_ = v_code_1248_;
v_isShared_1412_ = v_isSharedCheck_1419_;
goto v_resetjp_1410_;
}
else
{
lean_dec(v_code_1248_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1419_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set(v___x_1411_, 3, v_a_1403_);
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_fvarId_1398_);
lean_ctor_set(v_reuseFailAlloc_1418_, 1, v_i_1399_);
lean_ctor_set(v_reuseFailAlloc_1418_, 2, v_y_1400_);
lean_ctor_set(v_reuseFailAlloc_1418_, 3, v_a_1403_);
v___x_1414_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
lean_object* v___x_1416_; 
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v___x_1414_);
v___x_1416_ = v___x_1405_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v___x_1414_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
}
}
else
{
lean_object* v___x_1425_; 
lean_dec(v_a_1403_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v_code_1248_);
v___x_1425_ = v___x_1405_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_code_1248_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1248_, 4);
return v___x_1402_;
}
}
case 9:
{
lean_object* v_fvarId_1428_; lean_object* v_i_1429_; lean_object* v_offset_1430_; lean_object* v_y_1431_; lean_object* v_ty_1432_; lean_object* v_k_1433_; lean_object* v___x_1434_; 
v_fvarId_1428_ = lean_ctor_get(v_code_1248_, 0);
v_i_1429_ = lean_ctor_get(v_code_1248_, 1);
v_offset_1430_ = lean_ctor_get(v_code_1248_, 2);
v_y_1431_ = lean_ctor_get(v_code_1248_, 3);
v_ty_1432_ = lean_ctor_get(v_code_1248_, 4);
v_k_1433_ = lean_ctor_get(v_code_1248_, 5);
lean_inc_ref(v_k_1433_);
v___x_1434_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go(v_map_1246_, v_declName_1247_, v_k_1433_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1461_; 
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1437_ = v___x_1434_;
v_isShared_1438_ = v_isSharedCheck_1461_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1434_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1461_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
size_t v___x_1439_; size_t v___x_1440_; uint8_t v___x_1441_; 
v___x_1439_ = lean_ptr_addr(v_k_1433_);
v___x_1440_ = lean_ptr_addr(v_a_1435_);
v___x_1441_ = lean_usize_dec_eq(v___x_1439_, v___x_1440_);
if (v___x_1441_ == 0)
{
lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1451_; 
lean_inc_ref(v_ty_1432_);
lean_inc(v_y_1431_);
lean_inc(v_offset_1430_);
lean_inc(v_i_1429_);
lean_inc(v_fvarId_1428_);
v_isSharedCheck_1451_ = !lean_is_exclusive(v_code_1248_);
if (v_isSharedCheck_1451_ == 0)
{
lean_object* v_unused_1452_; lean_object* v_unused_1453_; lean_object* v_unused_1454_; lean_object* v_unused_1455_; lean_object* v_unused_1456_; lean_object* v_unused_1457_; 
v_unused_1452_ = lean_ctor_get(v_code_1248_, 5);
lean_dec(v_unused_1452_);
v_unused_1453_ = lean_ctor_get(v_code_1248_, 4);
lean_dec(v_unused_1453_);
v_unused_1454_ = lean_ctor_get(v_code_1248_, 3);
lean_dec(v_unused_1454_);
v_unused_1455_ = lean_ctor_get(v_code_1248_, 2);
lean_dec(v_unused_1455_);
v_unused_1456_ = lean_ctor_get(v_code_1248_, 1);
lean_dec(v_unused_1456_);
v_unused_1457_ = lean_ctor_get(v_code_1248_, 0);
lean_dec(v_unused_1457_);
v___x_1443_ = v_code_1248_;
v_isShared_1444_ = v_isSharedCheck_1451_;
goto v_resetjp_1442_;
}
else
{
lean_dec(v_code_1248_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1451_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
lean_ctor_set(v___x_1443_, 5, v_a_1435_);
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_fvarId_1428_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v_i_1429_);
lean_ctor_set(v_reuseFailAlloc_1450_, 2, v_offset_1430_);
lean_ctor_set(v_reuseFailAlloc_1450_, 3, v_y_1431_);
lean_ctor_set(v_reuseFailAlloc_1450_, 4, v_ty_1432_);
lean_ctor_set(v_reuseFailAlloc_1450_, 5, v_a_1435_);
v___x_1446_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
lean_object* v___x_1448_; 
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1446_);
v___x_1448_ = v___x_1437_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1446_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
else
{
lean_object* v___x_1459_; 
lean_dec(v_a_1435_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v_code_1248_);
v___x_1459_ = v___x_1437_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_code_1248_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1248_, 6);
return v___x_1434_;
}
}
default: 
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
lean_dec_ref(v_code_1248_);
lean_dec(v_declName_1247_);
lean_dec_ref(v_map_1246_);
v___x_1462_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___closed__1, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___closed__1);
v___x_1463_ = l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__3(v___x_1462_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
return v___x_1463_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___boxed(lean_object* v_map_1464_, lean_object* v_declName_1465_, lean_object* v_code_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go(v_map_1464_, v_declName_1465_, v_code_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
return v_res_1472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__2(lean_object* v_map_1473_, lean_object* v_declName_1474_, lean_object* v_i_1475_, lean_object* v_as_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v___x_1482_; uint8_t v___x_1483_; 
v___x_1482_ = lean_array_get_size(v_as_1476_);
v___x_1483_ = lean_nat_dec_lt(v_i_1475_, v___x_1482_);
if (v___x_1483_ == 0)
{
lean_object* v___x_1484_; 
lean_dec(v_i_1475_);
lean_dec(v_declName_1474_);
lean_dec_ref(v_map_1473_);
v___x_1484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1484_, 0, v_as_1476_);
return v___x_1484_;
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v_a_1485_ = lean_array_fget_borrowed(v_as_1476_, v_i_1475_);
lean_inc(v_declName_1474_);
lean_inc_ref(v_map_1473_);
v___x_1486_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go___boxed), 8, 2);
lean_closure_set(v___x_1486_, 0, v_map_1473_);
lean_closure_set(v___x_1486_, 1, v_declName_1474_);
lean_inc(v_a_1485_);
v___x_1487_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__1___redArg(v_a_1485_, v___x_1486_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v_a_1488_; size_t v___x_1489_; size_t v___x_1490_; uint8_t v___x_1491_; 
v_a_1488_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_a_1488_);
lean_dec_ref_known(v___x_1487_, 1);
v___x_1489_ = lean_ptr_addr(v_a_1485_);
v___x_1490_ = lean_ptr_addr(v_a_1488_);
v___x_1491_ = lean_usize_dec_eq(v___x_1489_, v___x_1490_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1492_ = lean_unsigned_to_nat(1u);
v___x_1493_ = lean_nat_add(v_i_1475_, v___x_1492_);
v___x_1494_ = lean_array_fset(v_as_1476_, v_i_1475_, v_a_1488_);
lean_dec(v_i_1475_);
v_i_1475_ = v___x_1493_;
v_as_1476_ = v___x_1494_;
goto _start;
}
else
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
lean_dec(v_a_1488_);
v___x_1496_ = lean_unsigned_to_nat(1u);
v___x_1497_ = lean_nat_add(v_i_1475_, v___x_1496_);
lean_dec(v_i_1475_);
v_i_1475_ = v___x_1497_;
goto _start;
}
}
else
{
lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1506_; 
lean_dec_ref(v_as_1476_);
lean_dec(v_i_1475_);
lean_dec(v_declName_1474_);
lean_dec_ref(v_map_1473_);
v_a_1499_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1506_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1506_ == 0)
{
v___x_1501_ = v___x_1487_;
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1487_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1506_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1504_; 
if (v_isShared_1502_ == 0)
{
v___x_1504_ = v___x_1501_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_a_1499_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
return v___x_1504_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__2___boxed(lean_object* v_map_1507_, lean_object* v_declName_1508_, lean_object* v_i_1509_, lean_object* v_as_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__2(v_map_1507_, v_declName_1508_, v_i_1509_, v_as_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_spec__0(lean_object* v_map_1517_, size_t v_sz_1518_, size_t v_i_1519_, lean_object* v_bs_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_){
_start:
{
uint8_t v___x_1526_; 
v___x_1526_ = lean_usize_dec_lt(v_i_1519_, v_sz_1518_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1527_; 
lean_dec_ref(v_map_1517_);
v___x_1527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1527_, 0, v_bs_1520_);
return v___x_1527_;
}
else
{
lean_object* v_v_1528_; lean_object* v_toSignature_1529_; lean_object* v_value_1530_; uint8_t v_recursive_1531_; lean_object* v_inlineAttr_x3f_1532_; lean_object* v___x_1533_; lean_object* v_bs_x27_1534_; lean_object* v_a_1536_; 
v_v_1528_ = lean_array_uget(v_bs_1520_, v_i_1519_);
v_toSignature_1529_ = lean_ctor_get(v_v_1528_, 0);
lean_inc_ref(v_toSignature_1529_);
v_value_1530_ = lean_ctor_get(v_v_1528_, 1);
lean_inc_ref(v_value_1530_);
v_recursive_1531_ = lean_ctor_get_uint8(v_v_1528_, sizeof(void*)*3);
v_inlineAttr_x3f_1532_ = lean_ctor_get(v_v_1528_, 2);
v___x_1533_ = lean_unsigned_to_nat(0u);
v_bs_x27_1534_ = lean_array_uset(v_bs_1520_, v_i_1519_, v___x_1533_);
if (lean_obj_tag(v_value_1530_) == 0)
{
lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1590_; 
lean_inc(v_inlineAttr_x3f_1532_);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_v_1528_);
if (v_isSharedCheck_1590_ == 0)
{
lean_object* v_unused_1591_; lean_object* v_unused_1592_; lean_object* v_unused_1593_; 
v_unused_1591_ = lean_ctor_get(v_v_1528_, 2);
lean_dec(v_unused_1591_);
v_unused_1592_ = lean_ctor_get(v_v_1528_, 1);
lean_dec(v_unused_1592_);
v_unused_1593_ = lean_ctor_get(v_v_1528_, 0);
lean_dec(v_unused_1593_);
v___x_1542_ = v_v_1528_;
v_isShared_1543_ = v_isSharedCheck_1590_;
goto v_resetjp_1541_;
}
else
{
lean_dec(v_v_1528_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1590_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v_code_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1589_; 
v_code_1544_ = lean_ctor_get(v_value_1530_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v_value_1530_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1546_ = v_value_1530_;
v_isShared_1547_ = v_isSharedCheck_1589_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_code_1544_);
lean_dec(v_value_1530_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1589_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v_name_1548_; lean_object* v_levelParams_1549_; lean_object* v_type_1550_; lean_object* v_params_1551_; uint8_t v_safe_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1588_; 
v_name_1548_ = lean_ctor_get(v_toSignature_1529_, 0);
v_levelParams_1549_ = lean_ctor_get(v_toSignature_1529_, 1);
v_type_1550_ = lean_ctor_get(v_toSignature_1529_, 2);
v_params_1551_ = lean_ctor_get(v_toSignature_1529_, 3);
v_safe_1552_ = lean_ctor_get_uint8(v_toSignature_1529_, sizeof(void*)*4);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_toSignature_1529_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1554_ = v_toSignature_1529_;
v_isShared_1555_ = v_isSharedCheck_1588_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_params_1551_);
lean_inc(v_type_1550_);
lean_inc(v_levelParams_1549_);
lean_inc(v_name_1548_);
lean_dec(v_toSignature_1529_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1588_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1556_; 
lean_inc(v_name_1548_);
lean_inc_ref(v_map_1517_);
v___x_1556_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go(v_map_1517_, v_name_1548_, v_code_1544_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_object* v_a_1557_; lean_object* v_map_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1557_);
lean_dec_ref_known(v___x_1556_, 1);
v_map_1558_ = lean_ctor_get(v_map_1517_, 0);
lean_inc(v_name_1548_);
v___x_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1559_, 0, v_name_1548_);
v___x_1560_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0(v_map_1558_, v___x_1559_);
lean_dec_ref_known(v___x_1559_, 1);
v___x_1561_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_updateParams(v_params_1551_, v___x_1560_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
if (lean_obj_tag(v___x_1561_) == 0)
{
lean_object* v_a_1562_; lean_object* v___x_1564_; 
v_a_1562_ = lean_ctor_get(v___x_1561_, 0);
lean_inc(v_a_1562_);
lean_dec_ref_known(v___x_1561_, 1);
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 3, v_a_1562_);
v___x_1564_ = v___x_1554_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_name_1548_);
lean_ctor_set(v_reuseFailAlloc_1571_, 1, v_levelParams_1549_);
lean_ctor_set(v_reuseFailAlloc_1571_, 2, v_type_1550_);
lean_ctor_set(v_reuseFailAlloc_1571_, 3, v_a_1562_);
lean_ctor_set_uint8(v_reuseFailAlloc_1571_, sizeof(void*)*4, v_safe_1552_);
v___x_1564_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
lean_object* v___x_1566_; 
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 0, v_a_1557_);
v___x_1566_ = v___x_1546_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1557_);
v___x_1566_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
lean_object* v___x_1568_; 
if (v_isShared_1543_ == 0)
{
lean_ctor_set(v___x_1542_, 1, v___x_1566_);
lean_ctor_set(v___x_1542_, 0, v___x_1564_);
v___x_1568_ = v___x_1542_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v___x_1564_);
lean_ctor_set(v_reuseFailAlloc_1569_, 1, v___x_1566_);
lean_ctor_set(v_reuseFailAlloc_1569_, 2, v_inlineAttr_x3f_1532_);
lean_ctor_set_uint8(v_reuseFailAlloc_1569_, sizeof(void*)*3, v_recursive_1531_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
v_a_1536_ = v___x_1568_;
goto v___jp_1535_;
}
}
}
}
else
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1579_; 
lean_dec(v_a_1557_);
lean_del_object(v___x_1554_);
lean_dec_ref(v_type_1550_);
lean_dec(v_levelParams_1549_);
lean_dec(v_name_1548_);
lean_del_object(v___x_1546_);
lean_del_object(v___x_1542_);
lean_dec_ref(v_bs_x27_1534_);
lean_dec(v_inlineAttr_x3f_1532_);
lean_dec_ref(v_map_1517_);
v_a_1572_ = lean_ctor_get(v___x_1561_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1561_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1574_ = v___x_1561_;
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v___x_1561_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_a_1572_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
else
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1587_; 
lean_del_object(v___x_1554_);
lean_dec_ref(v_params_1551_);
lean_dec_ref(v_type_1550_);
lean_dec(v_levelParams_1549_);
lean_dec(v_name_1548_);
lean_del_object(v___x_1546_);
lean_del_object(v___x_1542_);
lean_dec_ref(v_bs_x27_1534_);
lean_dec(v_inlineAttr_x3f_1532_);
lean_dec_ref(v_map_1517_);
v_a_1580_ = lean_ctor_get(v___x_1556_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1556_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1582_ = v___x_1556_;
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1556_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1583_ == 0)
{
v___x_1585_ = v___x_1582_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_a_1580_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_value_1530_);
lean_dec_ref(v_toSignature_1529_);
v_a_1536_ = v_v_1528_;
goto v___jp_1535_;
}
v___jp_1535_:
{
size_t v___x_1537_; size_t v___x_1538_; lean_object* v___x_1539_; 
v___x_1537_ = ((size_t)1ULL);
v___x_1538_ = lean_usize_add(v_i_1519_, v___x_1537_);
v___x_1539_ = lean_array_uset(v_bs_x27_1534_, v_i_1519_, v_a_1536_);
v_i_1519_ = v___x_1538_;
v_bs_1520_ = v___x_1539_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_spec__0___boxed(lean_object* v_map_1594_, lean_object* v_sz_1595_, lean_object* v_i_1596_, lean_object* v_bs_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_){
_start:
{
size_t v_sz_boxed_1603_; size_t v_i_boxed_1604_; lean_object* v_res_1605_; 
v_sz_boxed_1603_ = lean_unbox_usize(v_sz_1595_);
lean_dec(v_sz_1595_);
v_i_boxed_1604_ = lean_unbox_usize(v_i_1596_);
lean_dec(v_i_1596_);
v_res_1605_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_spec__0(v_map_1594_, v_sz_boxed_1603_, v_i_boxed_1604_, v_bs_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
return v_res_1605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply(lean_object* v_decls_1606_, lean_object* v_map_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
size_t v_sz_1613_; size_t v___x_1614_; lean_object* v___x_1615_; 
v_sz_1613_ = lean_array_size(v_decls_1606_);
v___x_1614_ = ((size_t)0ULL);
v___x_1615_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_spec__0(v_map_1607_, v_sz_1613_, v___x_1614_, v_decls_1606_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply___boxed(lean_object* v_decls_1616_, lean_object* v_map_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply(v_decls_1616_, v_map_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__0(lean_object* v_____do__lift_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_paramSet_1632_; lean_object* v___x_1633_; 
v_paramSet_1632_ = lean_ctor_get(v_____do__lift_1624_, 2);
lean_inc(v_paramSet_1632_);
v___x_1633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1633_, 0, v_paramSet_1632_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__0___boxed(lean_object* v_____do__lift_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__0(v_____do__lift_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
lean_dec(v___y_1638_);
lean_dec_ref(v___y_1637_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec_ref(v_____do__lift_1634_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__1(lean_object* v_00_u03b1_1643_, lean_object* v_f_1644_, lean_object* v_mx_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v_decls_1653_; lean_object* v_currDecl_1654_; lean_object* v_paramSet_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_decls_1653_ = lean_ctor_get(v___y_1646_, 0);
v_currDecl_1654_ = lean_ctor_get(v___y_1646_, 1);
v_paramSet_1655_ = lean_ctor_get(v___y_1646_, 2);
lean_inc(v_paramSet_1655_);
v___x_1656_ = lean_apply_1(v_f_1644_, v_paramSet_1655_);
lean_inc(v_currDecl_1654_);
lean_inc_ref(v_decls_1653_);
v___x_1657_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1657_, 0, v_decls_1653_);
lean_ctor_set(v___x_1657_, 1, v_currDecl_1654_);
lean_ctor_set(v___x_1657_, 2, v___x_1656_);
lean_inc(v___y_1651_);
lean_inc_ref(v___y_1650_);
lean_inc(v___y_1649_);
lean_inc_ref(v___y_1648_);
lean_inc(v___y_1647_);
v___x_1658_ = lean_apply_7(v_mx_1645_, v___x_1657_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, lean_box(0));
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__1___boxed(lean_object* v_00_u03b1_1659_, lean_object* v_f_1660_, lean_object* v_mx_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___lam__1(v_00_u03b1_1659_, v_f_1660_, v_mx_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
return v_res_1669_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM(void){
_start:
{
lean_object* v___f_1672_; lean_object* v___f_1673_; lean_object* v___f_1674_; lean_object* v___f_1675_; lean_object* v___f_1676_; lean_object* v___f_1677_; lean_object* v___f_1678_; lean_object* v___f_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v_toApplicative_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1747_; 
v___f_1672_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__0));
v___f_1673_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__1));
v___f_1674_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__2));
v___f_1675_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__3));
v___f_1676_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__4));
v___f_1677_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1677_, 0, v___f_1676_);
lean_closure_set(v___f_1677_, 1, v___f_1675_);
v___f_1678_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1678_, 0, v___f_1675_);
v___f_1679_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__5));
v___x_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1680_, 0, v___f_1672_);
lean_ctor_set(v___x_1680_, 1, v___f_1673_);
v___x_1681_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
lean_ctor_set(v___x_1681_, 1, v___f_1674_);
lean_ctor_set(v___x_1681_, 2, v___f_1677_);
lean_ctor_set(v___x_1681_, 3, v___f_1678_);
lean_ctor_set(v___x_1681_, 4, v___f_1679_);
v___x_1682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1681_);
lean_ctor_set(v___x_1682_, 1, v___f_1675_);
v___x_1683_ = l_StateRefT_x27_instMonad___redArg(v___x_1682_);
v_toApplicative_1684_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1747_ == 0)
{
lean_object* v_unused_1748_; 
v_unused_1748_ = lean_ctor_get(v___x_1683_, 1);
lean_dec(v_unused_1748_);
v___x_1686_ = v___x_1683_;
v_isShared_1687_ = v_isSharedCheck_1747_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_toApplicative_1684_);
lean_dec(v___x_1683_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1747_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v_toFunctor_1688_; lean_object* v_toSeq_1689_; lean_object* v_toSeqLeft_1690_; lean_object* v_toSeqRight_1691_; lean_object* v___x_1693_; uint8_t v_isShared_1694_; uint8_t v_isSharedCheck_1745_; 
v_toFunctor_1688_ = lean_ctor_get(v_toApplicative_1684_, 0);
v_toSeq_1689_ = lean_ctor_get(v_toApplicative_1684_, 2);
v_toSeqLeft_1690_ = lean_ctor_get(v_toApplicative_1684_, 3);
v_toSeqRight_1691_ = lean_ctor_get(v_toApplicative_1684_, 4);
v_isSharedCheck_1745_ = !lean_is_exclusive(v_toApplicative_1684_);
if (v_isSharedCheck_1745_ == 0)
{
lean_object* v_unused_1746_; 
v_unused_1746_ = lean_ctor_get(v_toApplicative_1684_, 1);
lean_dec(v_unused_1746_);
v___x_1693_ = v_toApplicative_1684_;
v_isShared_1694_ = v_isSharedCheck_1745_;
goto v_resetjp_1692_;
}
else
{
lean_inc(v_toSeqRight_1691_);
lean_inc(v_toSeqLeft_1690_);
lean_inc(v_toSeq_1689_);
lean_inc(v_toFunctor_1688_);
lean_dec(v_toApplicative_1684_);
v___x_1693_ = lean_box(0);
v_isShared_1694_ = v_isSharedCheck_1745_;
goto v_resetjp_1692_;
}
v_resetjp_1692_:
{
lean_object* v___f_1695_; lean_object* v___f_1696_; lean_object* v___f_1697_; lean_object* v___f_1698_; lean_object* v___x_1699_; lean_object* v___f_1700_; lean_object* v___f_1701_; lean_object* v___f_1702_; lean_object* v___x_1704_; 
v___f_1695_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__6));
v___f_1696_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__7));
lean_inc_ref(v_toFunctor_1688_);
v___f_1697_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1697_, 0, v_toFunctor_1688_);
v___f_1698_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1698_, 0, v_toFunctor_1688_);
v___x_1699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1699_, 0, v___f_1697_);
lean_ctor_set(v___x_1699_, 1, v___f_1698_);
v___f_1700_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1700_, 0, v_toSeqRight_1691_);
v___f_1701_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1701_, 0, v_toSeqLeft_1690_);
v___f_1702_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1702_, 0, v_toSeq_1689_);
if (v_isShared_1694_ == 0)
{
lean_ctor_set(v___x_1693_, 4, v___f_1700_);
lean_ctor_set(v___x_1693_, 3, v___f_1701_);
lean_ctor_set(v___x_1693_, 2, v___f_1702_);
lean_ctor_set(v___x_1693_, 1, v___f_1695_);
lean_ctor_set(v___x_1693_, 0, v___x_1699_);
v___x_1704_ = v___x_1693_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v___x_1699_);
lean_ctor_set(v_reuseFailAlloc_1744_, 1, v___f_1695_);
lean_ctor_set(v_reuseFailAlloc_1744_, 2, v___f_1702_);
lean_ctor_set(v_reuseFailAlloc_1744_, 3, v___f_1701_);
lean_ctor_set(v_reuseFailAlloc_1744_, 4, v___f_1700_);
v___x_1704_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
lean_object* v___x_1706_; 
if (v_isShared_1687_ == 0)
{
lean_ctor_set(v___x_1686_, 1, v___f_1696_);
lean_ctor_set(v___x_1686_, 0, v___x_1704_);
v___x_1706_ = v___x_1686_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v___x_1704_);
lean_ctor_set(v_reuseFailAlloc_1743_, 1, v___f_1696_);
v___x_1706_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
lean_object* v___x_1707_; lean_object* v_toApplicative_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1741_; 
v___x_1707_ = l_StateRefT_x27_instMonad___redArg(v___x_1706_);
v_toApplicative_1708_ = lean_ctor_get(v___x_1707_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1707_);
if (v_isSharedCheck_1741_ == 0)
{
lean_object* v_unused_1742_; 
v_unused_1742_ = lean_ctor_get(v___x_1707_, 1);
lean_dec(v_unused_1742_);
v___x_1710_ = v___x_1707_;
v_isShared_1711_ = v_isSharedCheck_1741_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_toApplicative_1708_);
lean_dec(v___x_1707_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1741_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v_toFunctor_1712_; lean_object* v_toSeq_1713_; lean_object* v_toSeqLeft_1714_; lean_object* v_toSeqRight_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1739_; 
v_toFunctor_1712_ = lean_ctor_get(v_toApplicative_1708_, 0);
v_toSeq_1713_ = lean_ctor_get(v_toApplicative_1708_, 2);
v_toSeqLeft_1714_ = lean_ctor_get(v_toApplicative_1708_, 3);
v_toSeqRight_1715_ = lean_ctor_get(v_toApplicative_1708_, 4);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_toApplicative_1708_);
if (v_isSharedCheck_1739_ == 0)
{
lean_object* v_unused_1740_; 
v_unused_1740_ = lean_ctor_get(v_toApplicative_1708_, 1);
lean_dec(v_unused_1740_);
v___x_1717_ = v_toApplicative_1708_;
v_isShared_1718_ = v_isSharedCheck_1739_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_toSeqRight_1715_);
lean_inc(v_toSeqLeft_1714_);
lean_inc(v_toSeq_1713_);
lean_inc(v_toFunctor_1712_);
lean_dec(v_toApplicative_1708_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1739_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___f_1719_; lean_object* v___f_1720_; lean_object* v___f_1721_; lean_object* v___f_1722_; lean_object* v___f_1723_; lean_object* v___f_1724_; lean_object* v___x_1725_; lean_object* v___f_1726_; lean_object* v___f_1727_; lean_object* v___f_1728_; lean_object* v___x_1730_; 
v___f_1719_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___closed__0));
v___f_1720_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM___closed__1));
v___f_1721_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__8));
v___f_1722_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__9));
lean_inc_ref(v_toFunctor_1712_);
v___f_1723_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1723_, 0, v_toFunctor_1712_);
v___f_1724_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1724_, 0, v_toFunctor_1712_);
v___x_1725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1725_, 0, v___f_1723_);
lean_ctor_set(v___x_1725_, 1, v___f_1724_);
v___f_1726_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1726_, 0, v_toSeqRight_1715_);
v___f_1727_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1727_, 0, v_toSeqLeft_1714_);
v___f_1728_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1728_, 0, v_toSeq_1713_);
if (v_isShared_1718_ == 0)
{
lean_ctor_set(v___x_1717_, 4, v___f_1726_);
lean_ctor_set(v___x_1717_, 3, v___f_1727_);
lean_ctor_set(v___x_1717_, 2, v___f_1728_);
lean_ctor_set(v___x_1717_, 1, v___f_1721_);
lean_ctor_set(v___x_1717_, 0, v___x_1725_);
v___x_1730_ = v___x_1717_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v___x_1725_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v___f_1721_);
lean_ctor_set(v_reuseFailAlloc_1738_, 2, v___f_1728_);
lean_ctor_set(v_reuseFailAlloc_1738_, 3, v___f_1727_);
lean_ctor_set(v_reuseFailAlloc_1738_, 4, v___f_1726_);
v___x_1730_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
lean_object* v___x_1732_; 
if (v_isShared_1711_ == 0)
{
lean_ctor_set(v___x_1710_, 1, v___f_1722_);
lean_ctor_set(v___x_1710_, 0, v___x_1730_);
v___x_1732_ = v___x_1710_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1730_);
lean_ctor_set(v_reuseFailAlloc_1737_, 1, v___f_1722_);
v___x_1732_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1733_ = l_StateRefT_x27_instMonad___redArg(v___x_1732_);
lean_inc_ref(v___x_1733_);
v___x_1734_ = lean_alloc_closure((void*)(l_ReaderT_read___boxed), 4, 3);
lean_closure_set(v___x_1734_, 0, lean_box(0));
lean_closure_set(v___x_1734_, 1, lean_box(0));
lean_closure_set(v___x_1734_, 2, v___x_1733_);
v___x_1735_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v___x_1735_, 0, lean_box(0));
lean_closure_set(v___x_1735_, 1, lean_box(0));
lean_closure_set(v___x_1735_, 2, v___x_1733_);
lean_closure_set(v___x_1735_, 3, lean_box(0));
lean_closure_set(v___x_1735_, 4, lean_box(0));
lean_closure_set(v___x_1735_, 5, v___x_1734_);
lean_closure_set(v___x_1735_, 6, v___f_1719_);
v___x_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
lean_ctor_set(v___x_1736_, 1, v___f_1720_);
return v___x_1736_;
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorIdx(lean_object* v_x_1749_){
_start:
{
switch(lean_obj_tag(v_x_1749_))
{
case 0:
{
lean_object* v___x_1750_; 
v___x_1750_ = lean_unsigned_to_nat(0u);
return v___x_1750_;
}
case 1:
{
lean_object* v___x_1751_; 
v___x_1751_ = lean_unsigned_to_nat(1u);
return v___x_1751_;
}
case 2:
{
lean_object* v___x_1752_; 
v___x_1752_ = lean_unsigned_to_nat(2u);
return v___x_1752_;
}
case 3:
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_unsigned_to_nat(3u);
return v___x_1753_;
}
case 4:
{
lean_object* v___x_1754_; 
v___x_1754_ = lean_unsigned_to_nat(4u);
return v___x_1754_;
}
case 5:
{
lean_object* v___x_1755_; 
v___x_1755_ = lean_unsigned_to_nat(5u);
return v___x_1755_;
}
case 6:
{
lean_object* v___x_1756_; 
v___x_1756_ = lean_unsigned_to_nat(6u);
return v___x_1756_;
}
case 7:
{
lean_object* v___x_1757_; 
v___x_1757_ = lean_unsigned_to_nat(7u);
return v___x_1757_;
}
case 8:
{
lean_object* v___x_1758_; 
v___x_1758_ = lean_unsigned_to_nat(8u);
return v___x_1758_;
}
case 9:
{
lean_object* v___x_1759_; 
v___x_1759_ = lean_unsigned_to_nat(9u);
return v___x_1759_;
}
case 10:
{
lean_object* v___x_1760_; 
v___x_1760_ = lean_unsigned_to_nat(10u);
return v___x_1760_;
}
case 11:
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_unsigned_to_nat(11u);
return v___x_1761_;
}
default: 
{
lean_object* v___x_1762_; 
v___x_1762_ = lean_unsigned_to_nat(12u);
return v___x_1762_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorIdx___boxed(lean_object* v_x_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorIdx(v_x_1763_);
lean_dec(v_x_1763_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(lean_object* v_t_1765_, lean_object* v_k_1766_){
_start:
{
if (lean_obj_tag(v_t_1765_) == 12)
{
return v_k_1766_;
}
else
{
lean_object* v_resultFVar_1767_; lean_object* v___x_1768_; 
v_resultFVar_1767_ = lean_ctor_get(v_t_1765_, 0);
lean_inc(v_resultFVar_1767_);
lean_dec(v_t_1765_);
v___x_1768_ = lean_apply_1(v_k_1766_, v_resultFVar_1767_);
return v___x_1768_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim(lean_object* v_motive_1769_, lean_object* v_ctorIdx_1770_, lean_object* v_t_1771_, lean_object* v_h_1772_, lean_object* v_k_1773_){
_start:
{
lean_object* v___x_1774_; 
v___x_1774_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1771_, v_k_1773_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___boxed(lean_object* v_motive_1775_, lean_object* v_ctorIdx_1776_, lean_object* v_t_1777_, lean_object* v_h_1778_, lean_object* v_k_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim(v_motive_1775_, v_ctorIdx_1776_, v_t_1777_, v_h_1778_, v_k_1779_);
lean_dec(v_ctorIdx_1776_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_resetReuse_elim___redArg(lean_object* v_t_1781_, lean_object* v_resetReuse_1782_){
_start:
{
lean_object* v___x_1783_; 
v___x_1783_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1781_, v_resetReuse_1782_);
return v___x_1783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_resetReuse_elim(lean_object* v_motive_1784_, lean_object* v_t_1785_, lean_object* v_h_1786_, lean_object* v_resetReuse_1787_){
_start:
{
lean_object* v___x_1788_; 
v___x_1788_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1785_, v_resetReuse_1787_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_constructorResult_elim___redArg(lean_object* v_t_1789_, lean_object* v_constructorResult_1790_){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1789_, v_constructorResult_1790_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_constructorResult_elim(lean_object* v_motive_1792_, lean_object* v_t_1793_, lean_object* v_h_1794_, lean_object* v_constructorResult_1795_){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1793_, v_constructorResult_1795_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_constructorArg_elim___redArg(lean_object* v_t_1797_, lean_object* v_constructorArg_1798_){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1797_, v_constructorArg_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_constructorArg_elim(lean_object* v_motive_1800_, lean_object* v_t_1801_, lean_object* v_h_1802_, lean_object* v_constructorArg_1803_){
_start:
{
lean_object* v___x_1804_; 
v___x_1804_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1801_, v_constructorArg_1803_);
return v___x_1804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_forwardProjectionProp_elim___redArg(lean_object* v_t_1805_, lean_object* v_forwardProjectionProp_1806_){
_start:
{
lean_object* v___x_1807_; 
v___x_1807_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1805_, v_forwardProjectionProp_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_forwardProjectionProp_elim(lean_object* v_motive_1808_, lean_object* v_t_1809_, lean_object* v_h_1810_, lean_object* v_forwardProjectionProp_1811_){
_start:
{
lean_object* v___x_1812_; 
v___x_1812_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1809_, v_forwardProjectionProp_1811_);
return v___x_1812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_backwardProjectionProp_elim___redArg(lean_object* v_t_1813_, lean_object* v_backwardProjectionProp_1814_){
_start:
{
lean_object* v___x_1815_; 
v___x_1815_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1813_, v_backwardProjectionProp_1814_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_backwardProjectionProp_elim(lean_object* v_motive_1816_, lean_object* v_t_1817_, lean_object* v_h_1818_, lean_object* v_backwardProjectionProp_1819_){
_start:
{
lean_object* v___x_1820_; 
v___x_1820_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1817_, v_backwardProjectionProp_1819_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_functionCallResult_elim___redArg(lean_object* v_t_1821_, lean_object* v_functionCallResult_1822_){
_start:
{
lean_object* v___x_1823_; 
v___x_1823_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1821_, v_functionCallResult_1822_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_functionCallResult_elim(lean_object* v_motive_1824_, lean_object* v_t_1825_, lean_object* v_h_1826_, lean_object* v_functionCallResult_1827_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1825_, v_functionCallResult_1827_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_functionCallArg_elim___redArg(lean_object* v_t_1829_, lean_object* v_functionCallArg_1830_){
_start:
{
lean_object* v___x_1831_; 
v___x_1831_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1829_, v_functionCallArg_1830_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_functionCallArg_elim(lean_object* v_motive_1832_, lean_object* v_t_1833_, lean_object* v_h_1834_, lean_object* v_functionCallArg_1835_){
_start:
{
lean_object* v___x_1836_; 
v___x_1836_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1833_, v_functionCallArg_1835_);
return v___x_1836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_fvarCall_elim___redArg(lean_object* v_t_1837_, lean_object* v_fvarCall_1838_){
_start:
{
lean_object* v___x_1839_; 
v___x_1839_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1837_, v_fvarCall_1838_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_fvarCall_elim(lean_object* v_motive_1840_, lean_object* v_t_1841_, lean_object* v_h_1842_, lean_object* v_fvarCall_1843_){
_start:
{
lean_object* v___x_1844_; 
v___x_1844_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1841_, v_fvarCall_1843_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_partialApplication_elim___redArg(lean_object* v_t_1845_, lean_object* v_partialApplication_1846_){
_start:
{
lean_object* v___x_1847_; 
v___x_1847_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1845_, v_partialApplication_1846_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_partialApplication_elim(lean_object* v_motive_1848_, lean_object* v_t_1849_, lean_object* v_h_1850_, lean_object* v_partialApplication_1851_){
_start:
{
lean_object* v___x_1852_; 
v___x_1852_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1849_, v_partialApplication_1851_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_tailCallPreservation_elim___redArg(lean_object* v_t_1853_, lean_object* v_tailCallPreservation_1854_){
_start:
{
lean_object* v___x_1855_; 
v___x_1855_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1853_, v_tailCallPreservation_1854_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_tailCallPreservation_elim(lean_object* v_motive_1856_, lean_object* v_t_1857_, lean_object* v_h_1858_, lean_object* v_tailCallPreservation_1859_){
_start:
{
lean_object* v___x_1860_; 
v___x_1860_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1857_, v_tailCallPreservation_1859_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_jpArgPropagation_elim___redArg(lean_object* v_t_1861_, lean_object* v_jpArgPropagation_1862_){
_start:
{
lean_object* v___x_1863_; 
v___x_1863_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1861_, v_jpArgPropagation_1862_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_jpArgPropagation_elim(lean_object* v_motive_1864_, lean_object* v_t_1865_, lean_object* v_h_1866_, lean_object* v_jpArgPropagation_1867_){
_start:
{
lean_object* v___x_1868_; 
v___x_1868_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1865_, v_jpArgPropagation_1867_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_jpTailCallPreservation_elim___redArg(lean_object* v_t_1869_, lean_object* v_jpTailCallPreservation_1870_){
_start:
{
lean_object* v___x_1871_; 
v___x_1871_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1869_, v_jpTailCallPreservation_1870_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_jpTailCallPreservation_elim(lean_object* v_motive_1872_, lean_object* v_t_1873_, lean_object* v_h_1874_, lean_object* v_jpTailCallPreservation_1875_){
_start:
{
lean_object* v___x_1876_; 
v___x_1876_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1873_, v_jpTailCallPreservation_1875_);
return v___x_1876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ownedAnnotation_elim___redArg(lean_object* v_t_1877_, lean_object* v_ownedAnnotation_1878_){
_start:
{
lean_object* v___x_1879_; 
v___x_1879_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1877_, v_ownedAnnotation_1878_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ownedAnnotation_elim(lean_object* v_motive_1880_, lean_object* v_t_1881_, lean_object* v_h_1882_, lean_object* v_ownedAnnotation_1883_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_ctorElim___redArg(v_t_1881_, v_ownedAnnotation_1883_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0(lean_object* v_reason_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_){
_start:
{
switch(lean_obj_tag(v_reason_1898_))
{
case 0:
{
lean_object* v_resultFVar_1905_; lean_object* v___x_1906_; 
v_resultFVar_1905_ = lean_ctor_get(v_reason_1898_, 0);
lean_inc(v_resultFVar_1905_);
lean_dec_ref_known(v_reason_1898_, 1);
v___x_1906_ = l_Lean_Compiler_LCNF_PP_ppFVar___redArg(v_resultFVar_1905_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1919_; 
v_a_1907_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1909_ = v___x_1906_;
v_isShared_1910_ = v_isSharedCheck_1919_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1906_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1919_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1917_; 
v___x_1911_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__0));
v___x_1912_ = l_Std_Format_defWidth;
v___x_1913_ = lean_unsigned_to_nat(0u);
v___x_1914_ = l_Std_Format_pretty(v_a_1907_, v___x_1912_, v___x_1913_, v___x_1913_);
v___x_1915_ = lean_string_append(v___x_1911_, v___x_1914_);
lean_dec_ref(v___x_1914_);
if (v_isShared_1910_ == 0)
{
lean_ctor_set(v___x_1909_, 0, v___x_1915_);
v___x_1917_ = v___x_1909_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v___x_1915_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
v_a_1920_ = lean_ctor_get(v___x_1906_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1906_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1906_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1906_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
case 1:
{
lean_object* v_resultFVar_1928_; lean_object* v___x_1929_; 
v_resultFVar_1928_ = lean_ctor_get(v_reason_1898_, 0);
lean_inc(v_resultFVar_1928_);
lean_dec_ref_known(v_reason_1898_, 1);
v___x_1929_ = l_Lean_Compiler_LCNF_PP_ppFVar___redArg(v_resultFVar_1928_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1942_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1932_ = v___x_1929_;
v_isShared_1933_ = v_isSharedCheck_1942_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1929_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1942_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1940_; 
v___x_1934_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__1));
v___x_1935_ = l_Std_Format_defWidth;
v___x_1936_ = lean_unsigned_to_nat(0u);
v___x_1937_ = l_Std_Format_pretty(v_a_1930_, v___x_1935_, v___x_1936_, v___x_1936_);
v___x_1938_ = lean_string_append(v___x_1934_, v___x_1937_);
lean_dec_ref(v___x_1937_);
if (v_isShared_1933_ == 0)
{
lean_ctor_set(v___x_1932_, 0, v___x_1938_);
v___x_1940_ = v___x_1932_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v___x_1938_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
else
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1950_; 
v_a_1943_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1945_ = v___x_1929_;
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1929_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_a_1943_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
}
case 2:
{
lean_object* v_resultFVar_1951_; lean_object* v___x_1952_; 
v_resultFVar_1951_ = lean_ctor_get(v_reason_1898_, 0);
lean_inc(v_resultFVar_1951_);
lean_dec_ref_known(v_reason_1898_, 1);
v___x_1952_ = l_Lean_Compiler_LCNF_PP_ppFVar___redArg(v_resultFVar_1951_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1965_; 
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1955_ = v___x_1952_;
v_isShared_1956_ = v_isSharedCheck_1965_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1952_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1965_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1963_; 
v___x_1957_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__2));
v___x_1958_ = l_Std_Format_defWidth;
v___x_1959_ = lean_unsigned_to_nat(0u);
v___x_1960_ = l_Std_Format_pretty(v_a_1953_, v___x_1958_, v___x_1959_, v___x_1959_);
v___x_1961_ = lean_string_append(v___x_1957_, v___x_1960_);
lean_dec_ref(v___x_1960_);
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 0, v___x_1961_);
v___x_1963_ = v___x_1955_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v___x_1961_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
else
{
lean_object* v_a_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1973_; 
v_a_1966_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1968_ = v___x_1952_;
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_a_1966_);
lean_dec(v___x_1952_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1971_; 
if (v_isShared_1969_ == 0)
{
v___x_1971_ = v___x_1968_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_a_1966_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
}
case 3:
{
lean_object* v_resultFVar_1974_; lean_object* v___x_1975_; 
v_resultFVar_1974_ = lean_ctor_get(v_reason_1898_, 0);
lean_inc(v_resultFVar_1974_);
lean_dec_ref_known(v_reason_1898_, 1);
v___x_1975_ = l_Lean_Compiler_LCNF_PP_ppFVar___redArg(v_resultFVar_1974_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1988_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1988_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1988_ == 0)
{
v___x_1978_ = v___x_1975_;
v_isShared_1979_ = v_isSharedCheck_1988_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1975_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1988_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1986_; 
v___x_1980_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__3));
v___x_1981_ = l_Std_Format_defWidth;
v___x_1982_ = lean_unsigned_to_nat(0u);
v___x_1983_ = l_Std_Format_pretty(v_a_1976_, v___x_1981_, v___x_1982_, v___x_1982_);
v___x_1984_ = lean_string_append(v___x_1980_, v___x_1983_);
lean_dec_ref(v___x_1983_);
if (v_isShared_1979_ == 0)
{
lean_ctor_set(v___x_1978_, 0, v___x_1984_);
v___x_1986_ = v___x_1978_;
goto v_reusejp_1985_;
}
else
{
lean_object* v_reuseFailAlloc_1987_; 
v_reuseFailAlloc_1987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1987_, 0, v___x_1984_);
v___x_1986_ = v_reuseFailAlloc_1987_;
goto v_reusejp_1985_;
}
v_reusejp_1985_:
{
return v___x_1986_;
}
}
}
else
{
lean_object* v_a_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1996_; 
v_a_1989_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1991_ = v___x_1975_;
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_a_1989_);
lean_dec(v___x_1975_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1994_; 
if (v_isShared_1992_ == 0)
{
v___x_1994_ = v___x_1991_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_a_1989_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
}
case 4:
{
lean_object* v_resultFVar_1997_; lean_object* v___x_1998_; 
v_resultFVar_1997_ = lean_ctor_get(v_reason_1898_, 0);
lean_inc(v_resultFVar_1997_);
lean_dec_ref_known(v_reason_1898_, 1);
v___x_1998_ = l_Lean_Compiler_LCNF_PP_ppFVar___redArg(v_resultFVar_1997_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_object* v_a_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2011_; 
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2001_ = v___x_1998_;
v_isShared_2002_ = v_isSharedCheck_2011_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_a_1999_);
lean_dec(v___x_1998_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2011_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2009_; 
v___x_2003_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__4));
v___x_2004_ = l_Std_Format_defWidth;
v___x_2005_ = lean_unsigned_to_nat(0u);
v___x_2006_ = l_Std_Format_pretty(v_a_1999_, v___x_2004_, v___x_2005_, v___x_2005_);
v___x_2007_ = lean_string_append(v___x_2003_, v___x_2006_);
lean_dec_ref(v___x_2006_);
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 0, v___x_2007_);
v___x_2009_ = v___x_2001_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v___x_2007_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
else
{
lean_object* v_a_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2019_; 
v_a_2012_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2014_ = v___x_1998_;
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_a_2012_);
lean_dec(v___x_1998_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2012_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
case 5:
{
lean_object* v_resultFVar_2020_; lean_object* v___x_2021_; 
v_resultFVar_2020_ = lean_ctor_get(v_reason_1898_, 0);
lean_inc(v_resultFVar_2020_);
lean_dec_ref_known(v_reason_1898_, 1);
v___x_2021_ = l_Lean_Compiler_LCNF_PP_ppFVar___redArg(v_resultFVar_2020_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2034_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2024_ = v___x_2021_;
v_isShared_2025_ = v_isSharedCheck_2034_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_a_2022_);
lean_dec(v___x_2021_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2034_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2032_; 
v___x_2026_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__5));
v___x_2027_ = l_Std_Format_defWidth;
v___x_2028_ = lean_unsigned_to_nat(0u);
v___x_2029_ = l_Std_Format_pretty(v_a_2022_, v___x_2027_, v___x_2028_, v___x_2028_);
v___x_2030_ = lean_string_append(v___x_2026_, v___x_2029_);
lean_dec_ref(v___x_2029_);
if (v_isShared_2025_ == 0)
{
lean_ctor_set(v___x_2024_, 0, v___x_2030_);
v___x_2032_ = v___x_2024_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v___x_2030_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
}
else
{
lean_object* v_a_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2042_; 
v_a_2035_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2037_ = v___x_2021_;
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_a_2035_);
lean_dec(v___x_2021_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v___x_2040_; 
if (v_isShared_2038_ == 0)
{
v___x_2040_ = v___x_2037_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2035_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
}
case 6:
{
lean_object* v_resultFVar_2043_; lean_object* v___x_2044_; 
v_resultFVar_2043_ = lean_ctor_get(v_reason_1898_, 0);
lean_inc(v_resultFVar_2043_);
lean_dec_ref_known(v_reason_1898_, 1);
v___x_2044_ = l_Lean_Compiler_LCNF_PP_ppFVar___redArg(v_resultFVar_2043_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_2044_) == 0)
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2057_; 
v_a_2045_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2047_ = v___x_2044_;
v_isShared_2048_ = v_isSharedCheck_2057_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_2044_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2057_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2055_; 
v___x_2049_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__6));
v___x_2050_ = l_Std_Format_defWidth;
v___x_2051_ = lean_unsigned_to_nat(0u);
v___x_2052_ = l_Std_Format_pretty(v_a_2045_, v___x_2050_, v___x_2051_, v___x_2051_);
v___x_2053_ = lean_string_append(v___x_2049_, v___x_2052_);
lean_dec_ref(v___x_2052_);
if (v_isShared_2048_ == 0)
{
lean_ctor_set(v___x_2047_, 0, v___x_2053_);
v___x_2055_ = v___x_2047_;
goto v_reusejp_2054_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v___x_2053_);
v___x_2055_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2054_;
}
v_reusejp_2054_:
{
return v___x_2055_;
}
}
}
else
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
v_a_2058_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2060_ = v___x_2044_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2044_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2058_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
case 7:
{
lean_object* v_resultFVar_2066_; lean_object* v___x_2067_; 
v_resultFVar_2066_ = lean_ctor_get(v_reason_1898_, 0);
lean_inc(v_resultFVar_2066_);
lean_dec_ref_known(v_reason_1898_, 1);
v___x_2067_ = l_Lean_Compiler_LCNF_PP_ppFVar___redArg(v_resultFVar_2066_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_2067_) == 0)
{
lean_object* v_a_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2080_; 
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2070_ = v___x_2067_;
v_isShared_2071_ = v_isSharedCheck_2080_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_a_2068_);
lean_dec(v___x_2067_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2080_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2078_; 
v___x_2072_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__7));
v___x_2073_ = l_Std_Format_defWidth;
v___x_2074_ = lean_unsigned_to_nat(0u);
v___x_2075_ = l_Std_Format_pretty(v_a_2068_, v___x_2073_, v___x_2074_, v___x_2074_);
v___x_2076_ = lean_string_append(v___x_2072_, v___x_2075_);
lean_dec_ref(v___x_2075_);
if (v_isShared_2071_ == 0)
{
lean_ctor_set(v___x_2070_, 0, v___x_2076_);
v___x_2078_ = v___x_2070_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___x_2076_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
v_a_2081_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___x_2067_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2067_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
case 8:
{
lean_object* v_resultFVar_2089_; lean_object* v___x_2090_; 
v_resultFVar_2089_ = lean_ctor_get(v_reason_1898_, 0);
lean_inc(v_resultFVar_2089_);
lean_dec_ref_known(v_reason_1898_, 1);
v___x_2090_ = l_Lean_Compiler_LCNF_PP_ppFVar___redArg(v_resultFVar_2089_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_2090_) == 0)
{
lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2103_; 
v_a_2091_ = lean_ctor_get(v___x_2090_, 0);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2093_ = v___x_2090_;
v_isShared_2094_ = v_isSharedCheck_2103_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v___x_2090_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2103_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2101_; 
v___x_2095_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__8));
v___x_2096_ = l_Std_Format_defWidth;
v___x_2097_ = lean_unsigned_to_nat(0u);
v___x_2098_ = l_Std_Format_pretty(v_a_2091_, v___x_2096_, v___x_2097_, v___x_2097_);
v___x_2099_ = lean_string_append(v___x_2095_, v___x_2098_);
lean_dec_ref(v___x_2098_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 0, v___x_2099_);
v___x_2101_ = v___x_2093_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v___x_2099_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
return v___x_2101_;
}
}
}
else
{
lean_object* v_a_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2111_; 
v_a_2104_ = lean_ctor_get(v___x_2090_, 0);
v_isSharedCheck_2111_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2111_ == 0)
{
v___x_2106_ = v___x_2090_;
v_isShared_2107_ = v_isSharedCheck_2111_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_a_2104_);
lean_dec(v___x_2090_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2111_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v___x_2109_; 
if (v_isShared_2107_ == 0)
{
v___x_2109_ = v___x_2106_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v_a_2104_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
}
}
case 9:
{
lean_object* v_funcName_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2123_; 
v_funcName_2112_ = lean_ctor_get(v_reason_1898_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_reason_1898_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2114_ = v_reason_1898_;
v_isShared_2115_ = v_isSharedCheck_2123_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_funcName_2112_);
lean_dec(v_reason_1898_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2123_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2121_; 
v___x_2116_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__9));
v___x_2117_ = 1;
v___x_2118_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_funcName_2112_, v___x_2117_);
v___x_2119_ = lean_string_append(v___x_2116_, v___x_2118_);
lean_dec_ref(v___x_2118_);
if (v_isShared_2115_ == 0)
{
lean_ctor_set_tag(v___x_2114_, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2119_);
v___x_2121_ = v___x_2114_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v___x_2119_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
return v___x_2121_;
}
}
}
case 10:
{
lean_object* v_jpFVar_2124_; lean_object* v___x_2125_; 
v_jpFVar_2124_ = lean_ctor_get(v_reason_1898_, 0);
lean_inc(v_jpFVar_2124_);
lean_dec_ref_known(v_reason_1898_, 1);
v___x_2125_ = l_Lean_Compiler_LCNF_PP_ppFVar___redArg(v_jpFVar_2124_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_2125_) == 0)
{
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2138_; 
v_a_2126_ = lean_ctor_get(v___x_2125_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2125_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2128_ = v___x_2125_;
v_isShared_2129_ = v_isSharedCheck_2138_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v___x_2125_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2138_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2136_; 
v___x_2130_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__10));
v___x_2131_ = l_Std_Format_defWidth;
v___x_2132_ = lean_unsigned_to_nat(0u);
v___x_2133_ = l_Std_Format_pretty(v_a_2126_, v___x_2131_, v___x_2132_, v___x_2132_);
v___x_2134_ = lean_string_append(v___x_2130_, v___x_2133_);
lean_dec_ref(v___x_2133_);
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 0, v___x_2134_);
v___x_2136_ = v___x_2128_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2134_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
else
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2146_; 
v_a_2139_ = lean_ctor_get(v___x_2125_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2125_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2141_ = v___x_2125_;
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2125_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
if (v_isShared_2142_ == 0)
{
v___x_2144_ = v___x_2141_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_a_2139_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
return v___x_2144_;
}
}
}
}
case 11:
{
lean_object* v_jpFVar_2147_; lean_object* v___x_2148_; 
v_jpFVar_2147_ = lean_ctor_get(v_reason_1898_, 0);
lean_inc(v_jpFVar_2147_);
lean_dec_ref_known(v_reason_1898_, 1);
v___x_2148_ = l_Lean_Compiler_LCNF_PP_ppFVar___redArg(v_jpFVar_2147_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2161_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2151_ = v___x_2148_;
v_isShared_2152_ = v_isSharedCheck_2161_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_a_2149_);
lean_dec(v___x_2148_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2161_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2159_; 
v___x_2153_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__11));
v___x_2154_ = l_Std_Format_defWidth;
v___x_2155_ = lean_unsigned_to_nat(0u);
v___x_2156_ = l_Std_Format_pretty(v_a_2149_, v___x_2154_, v___x_2155_, v___x_2155_);
v___x_2157_ = lean_string_append(v___x_2153_, v___x_2156_);
lean_dec_ref(v___x_2156_);
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 0, v___x_2157_);
v___x_2159_ = v___x_2151_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v___x_2157_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
else
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
v_a_2162_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___x_2148_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2148_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
default: 
{
lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2170_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___closed__12));
v___x_2171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2170_);
return v___x_2171_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___boxed(lean_object* v_reason_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_){
_start:
{
lean_object* v_res_2179_; 
v_res_2179_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0(v_reason_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2174_);
lean_dec_ref(v___y_2173_);
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString(lean_object* v_reason_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
lean_object* v___y_2186_; lean_object* v___x_2187_; 
v___y_2186_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___lam__0___boxed), 7, 1);
lean_closure_set(v___y_2186_, 0, v_reason_2180_);
v___x_2187_ = l_Lean_Compiler_LCNF_PP_run___redArg(v___y_2186_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_);
return v___x_2187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString___boxed(lean_object* v_reason_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString(v_reason_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
lean_dec(v___y_2190_);
lean_dec_ref(v___y_2189_);
return v_res_2194_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_isForced(lean_object* v_reason_2195_){
_start:
{
switch(lean_obj_tag(v_reason_2195_))
{
case 0:
{
uint8_t v___x_2196_; 
v___x_2196_ = 1;
return v___x_2196_;
}
case 1:
{
uint8_t v___x_2197_; 
v___x_2197_ = 1;
return v___x_2197_;
}
case 5:
{
uint8_t v___x_2198_; 
v___x_2198_ = 1;
return v___x_2198_;
}
case 9:
{
uint8_t v___x_2199_; 
v___x_2199_ = 1;
return v___x_2199_;
}
case 11:
{
uint8_t v___x_2200_; 
v___x_2200_ = 1;
return v___x_2200_;
}
case 12:
{
uint8_t v___x_2201_; 
v___x_2201_ = 1;
return v___x_2201_;
}
default: 
{
uint8_t v___x_2202_; 
v___x_2202_ = 0;
return v___x_2202_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_isForced___boxed(lean_object* v_reason_2203_){
_start:
{
uint8_t v_res_2204_; lean_object* v_r_2205_; 
v_res_2204_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_isForced(v_reason_2203_);
lean_dec(v_reason_2203_);
v_r_2205_ = lean_box(v_res_2204_);
return v_r_2205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg(lean_object* v_fvarId_2206_, lean_object* v___y_2207_){
_start:
{
lean_object* v___x_2209_; lean_object* v_owned_2210_; uint8_t v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2209_ = lean_st_ref_get(v___y_2207_);
v_owned_2210_ = lean_ctor_get(v___x_2209_, 0);
lean_inc_ref(v_owned_2210_);
lean_dec(v___x_2209_);
v___x_2211_ = l_Lean_FVarIdHashSet_contains(v_owned_2210_, v_fvarId_2206_);
lean_dec_ref(v_owned_2210_);
v___x_2212_ = lean_box(v___x_2211_);
v___x_2213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg___boxed(lean_object* v_fvarId_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_){
_start:
{
lean_object* v_res_2217_; 
v_res_2217_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg(v_fvarId_2214_, v___y_2215_);
lean_dec(v___y_2215_);
lean_dec(v_fvarId_2214_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned(lean_object* v_fvarId_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg(v_fvarId_2218_, v___y_2220_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___boxed(lean_object* v_fvarId_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_){
_start:
{
lean_object* v_res_2235_; 
v_res_2235_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned(v_fvarId_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_);
lean_dec(v___y_2233_);
lean_dec_ref(v___y_2232_);
lean_dec(v___y_2231_);
lean_dec_ref(v___y_2230_);
lean_dec(v___y_2229_);
lean_dec_ref(v___y_2228_);
lean_dec(v_fvarId_2227_);
return v_res_2235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2___redArg(size_t v_sz_2236_, size_t v_i_2237_, lean_object* v_bs_2238_, lean_object* v___y_2239_){
_start:
{
uint8_t v___x_2241_; 
v___x_2241_ = lean_usize_dec_lt(v_i_2237_, v_sz_2236_);
if (v___x_2241_ == 0)
{
lean_object* v___x_2242_; 
v___x_2242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2242_, 0, v_bs_2238_);
return v___x_2242_;
}
else
{
lean_object* v_v_2243_; lean_object* v_fvarId_2244_; lean_object* v_binderName_2245_; lean_object* v_type_2246_; uint8_t v_borrow_2247_; lean_object* v___x_2248_; lean_object* v_bs_x27_2249_; lean_object* v_a_2251_; 
v_v_2243_ = lean_array_uget(v_bs_2238_, v_i_2237_);
v_fvarId_2244_ = lean_ctor_get(v_v_2243_, 0);
v_binderName_2245_ = lean_ctor_get(v_v_2243_, 1);
v_type_2246_ = lean_ctor_get(v_v_2243_, 2);
v_borrow_2247_ = lean_ctor_get_uint8(v_v_2243_, sizeof(void*)*3);
v___x_2248_ = lean_unsigned_to_nat(0u);
v_bs_x27_2249_ = lean_array_uset(v_bs_2238_, v_i_2237_, v___x_2248_);
if (v_borrow_2247_ == 0)
{
v_a_2251_ = v_v_2243_;
goto v___jp_2250_;
}
else
{
uint8_t v___x_2256_; lean_object* v___x_2257_; 
v___x_2256_ = 0;
v___x_2257_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg(v_fvarId_2244_, v___y_2239_);
if (lean_obj_tag(v___x_2257_) == 0)
{
lean_object* v_a_2258_; uint8_t v___x_2259_; 
v_a_2258_ = lean_ctor_get(v___x_2257_, 0);
lean_inc(v_a_2258_);
lean_dec_ref_known(v___x_2257_, 1);
v___x_2259_ = lean_unbox(v_a_2258_);
lean_dec(v_a_2258_);
if (v___x_2259_ == 0)
{
v_a_2251_ = v_v_2243_;
goto v___jp_2250_;
}
else
{
lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2277_; 
lean_inc_ref(v_type_2246_);
lean_inc(v_binderName_2245_);
lean_inc(v_fvarId_2244_);
v_isSharedCheck_2277_ = !lean_is_exclusive(v_v_2243_);
if (v_isSharedCheck_2277_ == 0)
{
lean_object* v_unused_2278_; lean_object* v_unused_2279_; lean_object* v_unused_2280_; 
v_unused_2278_ = lean_ctor_get(v_v_2243_, 2);
lean_dec(v_unused_2278_);
v_unused_2279_ = lean_ctor_get(v_v_2243_, 1);
lean_dec(v_unused_2279_);
v_unused_2280_ = lean_ctor_get(v_v_2243_, 0);
lean_dec(v_unused_2280_);
v___x_2261_ = v_v_2243_;
v_isShared_2262_ = v_isSharedCheck_2277_;
goto v_resetjp_2260_;
}
else
{
lean_dec(v_v_2243_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2277_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2263_; lean_object* v_owned_2264_; lean_object* v_paramMap_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2276_; 
v___x_2263_ = lean_st_ref_take(v___y_2239_);
v_owned_2264_ = lean_ctor_get(v___x_2263_, 0);
v_paramMap_2265_ = lean_ctor_get(v___x_2263_, 1);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2267_ = v___x_2263_;
v_isShared_2268_ = v_isSharedCheck_2276_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_paramMap_2265_);
lean_inc(v_owned_2264_);
lean_dec(v___x_2263_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2276_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v___x_2270_; 
if (v_isShared_2268_ == 0)
{
v___x_2270_ = v___x_2267_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v_owned_2264_);
lean_ctor_set(v_reuseFailAlloc_2275_, 1, v_paramMap_2265_);
v___x_2270_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
lean_object* v___x_2271_; lean_object* v___x_2273_; 
lean_ctor_set_uint8(v___x_2270_, sizeof(void*)*2, v_borrow_2247_);
v___x_2271_ = lean_st_ref_put(v___y_2239_, v___x_2270_);
if (v_isShared_2262_ == 0)
{
v___x_2273_ = v___x_2261_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_fvarId_2244_);
lean_ctor_set(v_reuseFailAlloc_2274_, 1, v_binderName_2245_);
lean_ctor_set(v_reuseFailAlloc_2274_, 2, v_type_2246_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
lean_ctor_set_uint8(v___x_2273_, sizeof(void*)*3, v___x_2256_);
v_a_2251_ = v___x_2273_;
goto v___jp_2250_;
}
}
}
}
}
}
else
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2288_; 
lean_dec_ref(v_bs_x27_2249_);
lean_dec(v_v_2243_);
v_a_2281_ = lean_ctor_get(v___x_2257_, 0);
v_isSharedCheck_2288_ = !lean_is_exclusive(v___x_2257_);
if (v_isSharedCheck_2288_ == 0)
{
v___x_2283_ = v___x_2257_;
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2257_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2284_ == 0)
{
v___x_2286_ = v___x_2283_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v_a_2281_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
}
v___jp_2250_:
{
size_t v___x_2252_; size_t v___x_2253_; lean_object* v___x_2254_; 
v___x_2252_ = ((size_t)1ULL);
v___x_2253_ = lean_usize_add(v_i_2237_, v___x_2252_);
v___x_2254_ = lean_array_uset(v_bs_x27_2249_, v_i_2237_, v_a_2251_);
v_i_2237_ = v___x_2253_;
v_bs_2238_ = v___x_2254_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2___redArg___boxed(lean_object* v_sz_2289_, lean_object* v_i_2290_, lean_object* v_bs_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_){
_start:
{
size_t v_sz_boxed_2294_; size_t v_i_boxed_2295_; lean_object* v_res_2296_; 
v_sz_boxed_2294_ = lean_unbox_usize(v_sz_2289_);
lean_dec(v_sz_2289_);
v_i_boxed_2295_ = lean_unbox_usize(v_i_2290_);
lean_dec(v_i_2290_);
v_res_2296_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2___redArg(v_sz_boxed_2294_, v_i_boxed_2295_, v_bs_2291_, v___y_2292_);
lean_dec(v___y_2292_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0___redArg(lean_object* v_a_2297_, lean_object* v_x_2298_){
_start:
{
if (lean_obj_tag(v_x_2298_) == 0)
{
lean_object* v___x_2299_; 
v___x_2299_ = lean_box(0);
return v___x_2299_;
}
else
{
lean_object* v_key_2300_; lean_object* v_value_2301_; lean_object* v_tail_2302_; uint8_t v___x_2303_; 
v_key_2300_ = lean_ctor_get(v_x_2298_, 0);
v_value_2301_ = lean_ctor_get(v_x_2298_, 1);
v_tail_2302_ = lean_ctor_get(v_x_2298_, 2);
v___x_2303_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey_beq(v_key_2300_, v_a_2297_);
if (v___x_2303_ == 0)
{
v_x_2298_ = v_tail_2302_;
goto _start;
}
else
{
lean_object* v___x_2305_; 
lean_inc(v_value_2301_);
v___x_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2305_, 0, v_value_2301_);
return v___x_2305_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0___redArg___boxed(lean_object* v_a_2306_, lean_object* v_x_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0___redArg(v_a_2306_, v_x_2307_);
lean_dec(v_x_2307_);
lean_dec_ref(v_a_2306_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0___redArg(lean_object* v_m_2309_, lean_object* v_a_2310_){
_start:
{
lean_object* v_buckets_2311_; lean_object* v___x_2312_; uint64_t v___x_2313_; uint64_t v___x_2314_; uint64_t v___x_2315_; uint64_t v_fold_2316_; uint64_t v___x_2317_; uint64_t v___x_2318_; uint64_t v___x_2319_; size_t v___x_2320_; size_t v___x_2321_; size_t v___x_2322_; size_t v___x_2323_; size_t v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v_buckets_2311_ = lean_ctor_get(v_m_2309_, 1);
v___x_2312_ = lean_array_get_size(v_buckets_2311_);
v___x_2313_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash(v_a_2310_);
v___x_2314_ = 32ULL;
v___x_2315_ = lean_uint64_shift_right(v___x_2313_, v___x_2314_);
v_fold_2316_ = lean_uint64_xor(v___x_2313_, v___x_2315_);
v___x_2317_ = 16ULL;
v___x_2318_ = lean_uint64_shift_right(v_fold_2316_, v___x_2317_);
v___x_2319_ = lean_uint64_xor(v_fold_2316_, v___x_2318_);
v___x_2320_ = lean_uint64_to_usize(v___x_2319_);
v___x_2321_ = lean_usize_of_nat(v___x_2312_);
v___x_2322_ = ((size_t)1ULL);
v___x_2323_ = lean_usize_sub(v___x_2321_, v___x_2322_);
v___x_2324_ = lean_usize_land(v___x_2320_, v___x_2323_);
v___x_2325_ = lean_array_uget_borrowed(v_buckets_2311_, v___x_2324_);
v___x_2326_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0___redArg(v_a_2310_, v___x_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0___redArg___boxed(lean_object* v_m_2327_, lean_object* v_a_2328_){
_start:
{
lean_object* v_res_2329_; 
v_res_2329_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0___redArg(v_m_2327_, v_a_2328_);
lean_dec_ref(v_a_2328_);
lean_dec_ref(v_m_2327_);
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2___redArg(lean_object* v_a_2330_, lean_object* v_x_2331_){
_start:
{
if (lean_obj_tag(v_x_2331_) == 0)
{
return v_x_2331_;
}
else
{
lean_object* v_key_2332_; lean_object* v_value_2333_; lean_object* v_tail_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2343_; 
v_key_2332_ = lean_ctor_get(v_x_2331_, 0);
v_value_2333_ = lean_ctor_get(v_x_2331_, 1);
v_tail_2334_ = lean_ctor_get(v_x_2331_, 2);
v_isSharedCheck_2343_ = !lean_is_exclusive(v_x_2331_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2336_ = v_x_2331_;
v_isShared_2337_ = v_isSharedCheck_2343_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_tail_2334_);
lean_inc(v_value_2333_);
lean_inc(v_key_2332_);
lean_dec(v_x_2331_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2343_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
uint8_t v___x_2338_; 
v___x_2338_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instBEqKey_beq(v_key_2332_, v_a_2330_);
if (v___x_2338_ == 0)
{
lean_object* v___x_2339_; lean_object* v___x_2341_; 
v___x_2339_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2___redArg(v_a_2330_, v_tail_2334_);
if (v_isShared_2337_ == 0)
{
lean_ctor_set(v___x_2336_, 2, v___x_2339_);
v___x_2341_ = v___x_2336_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_key_2332_);
lean_ctor_set(v_reuseFailAlloc_2342_, 1, v_value_2333_);
lean_ctor_set(v_reuseFailAlloc_2342_, 2, v___x_2339_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
else
{
lean_del_object(v___x_2336_);
lean_dec(v_value_2333_);
lean_dec(v_key_2332_);
return v_tail_2334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2___redArg___boxed(lean_object* v_a_2344_, lean_object* v_x_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2___redArg(v_a_2344_, v_x_2345_);
lean_dec_ref(v_a_2344_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1___redArg(lean_object* v_m_2347_, lean_object* v_a_2348_){
_start:
{
lean_object* v_size_2349_; lean_object* v_buckets_2350_; lean_object* v___x_2351_; uint64_t v___x_2352_; uint64_t v___x_2353_; uint64_t v___x_2354_; uint64_t v_fold_2355_; uint64_t v___x_2356_; uint64_t v___x_2357_; uint64_t v___x_2358_; size_t v___x_2359_; size_t v___x_2360_; size_t v___x_2361_; size_t v___x_2362_; size_t v___x_2363_; lean_object* v_bkt_2364_; uint8_t v___x_2365_; 
v_size_2349_ = lean_ctor_get(v_m_2347_, 0);
v_buckets_2350_ = lean_ctor_get(v_m_2347_, 1);
v___x_2351_ = lean_array_get_size(v_buckets_2350_);
v___x_2352_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_ParamMap_instHashableKey_hash(v_a_2348_);
v___x_2353_ = 32ULL;
v___x_2354_ = lean_uint64_shift_right(v___x_2352_, v___x_2353_);
v_fold_2355_ = lean_uint64_xor(v___x_2352_, v___x_2354_);
v___x_2356_ = 16ULL;
v___x_2357_ = lean_uint64_shift_right(v_fold_2355_, v___x_2356_);
v___x_2358_ = lean_uint64_xor(v_fold_2355_, v___x_2357_);
v___x_2359_ = lean_uint64_to_usize(v___x_2358_);
v___x_2360_ = lean_usize_of_nat(v___x_2351_);
v___x_2361_ = ((size_t)1ULL);
v___x_2362_ = lean_usize_sub(v___x_2360_, v___x_2361_);
v___x_2363_ = lean_usize_land(v___x_2359_, v___x_2362_);
v_bkt_2364_ = lean_array_uget_borrowed(v_buckets_2350_, v___x_2363_);
v___x_2365_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2_spec__4___redArg(v_a_2348_, v_bkt_2364_);
if (v___x_2365_ == 0)
{
return v_m_2347_;
}
else
{
lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2378_; 
lean_inc(v_bkt_2364_);
lean_inc_ref(v_buckets_2350_);
lean_inc(v_size_2349_);
v_isSharedCheck_2378_ = !lean_is_exclusive(v_m_2347_);
if (v_isSharedCheck_2378_ == 0)
{
lean_object* v_unused_2379_; lean_object* v_unused_2380_; 
v_unused_2379_ = lean_ctor_get(v_m_2347_, 1);
lean_dec(v_unused_2379_);
v_unused_2380_ = lean_ctor_get(v_m_2347_, 0);
lean_dec(v_unused_2380_);
v___x_2367_ = v_m_2347_;
v_isShared_2368_ = v_isSharedCheck_2378_;
goto v_resetjp_2366_;
}
else
{
lean_dec(v_m_2347_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2378_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2369_; lean_object* v_buckets_x27_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2376_; 
v___x_2369_ = lean_box(0);
v_buckets_x27_2370_ = lean_array_uset(v_buckets_2350_, v___x_2363_, v___x_2369_);
v___x_2371_ = lean_unsigned_to_nat(1u);
v___x_2372_ = lean_nat_sub(v_size_2349_, v___x_2371_);
lean_dec(v_size_2349_);
v___x_2373_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2___redArg(v_a_2348_, v_bkt_2364_);
v___x_2374_ = lean_array_uset(v_buckets_x27_2370_, v___x_2363_, v___x_2373_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 1, v___x_2374_);
lean_ctor_set(v___x_2367_, 0, v___x_2372_);
v___x_2376_ = v___x_2367_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v___x_2372_);
lean_ctor_set(v_reuseFailAlloc_2377_, 1, v___x_2374_);
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
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1___redArg___boxed(lean_object* v_m_2381_, lean_object* v_a_2382_){
_start:
{
lean_object* v_res_2383_; 
v_res_2383_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1___redArg(v_m_2381_, v_a_2382_);
lean_dec_ref(v_a_2382_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap(lean_object* v_k_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_){
_start:
{
lean_object* v___x_2392_; lean_object* v_paramMap_2393_; lean_object* v_map_2394_; lean_object* v___x_2395_; 
v___x_2392_ = lean_st_ref_get(v___y_2386_);
v_paramMap_2393_ = lean_ctor_get(v___x_2392_, 1);
lean_inc_ref(v_paramMap_2393_);
lean_dec(v___x_2392_);
v_map_2394_ = lean_ctor_get(v_paramMap_2393_, 0);
lean_inc_ref(v_map_2394_);
lean_dec_ref(v_paramMap_2393_);
v___x_2395_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0___redArg(v_map_2394_, v_k_2384_);
lean_dec_ref(v_map_2394_);
if (lean_obj_tag(v___x_2395_) == 1)
{
lean_object* v_val_2396_; lean_object* v___x_2397_; lean_object* v_paramMap_2398_; lean_object* v_owned_2399_; uint8_t v_modified_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2460_; 
v_val_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_val_2396_);
lean_dec_ref_known(v___x_2395_, 1);
v___x_2397_ = lean_st_ref_take(v___y_2386_);
v_paramMap_2398_ = lean_ctor_get(v___x_2397_, 1);
v_owned_2399_ = lean_ctor_get(v___x_2397_, 0);
v_modified_2400_ = lean_ctor_get_uint8(v___x_2397_, sizeof(void*)*2);
v_isSharedCheck_2460_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2460_ == 0)
{
v___x_2402_ = v___x_2397_;
v_isShared_2403_ = v_isSharedCheck_2460_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_paramMap_2398_);
lean_inc(v_owned_2399_);
lean_dec(v___x_2397_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2460_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v_map_2404_; lean_object* v_annotatedBorrows_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2459_; 
v_map_2404_ = lean_ctor_get(v_paramMap_2398_, 0);
v_annotatedBorrows_2405_ = lean_ctor_get(v_paramMap_2398_, 1);
v_isSharedCheck_2459_ = !lean_is_exclusive(v_paramMap_2398_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2407_ = v_paramMap_2398_;
v_isShared_2408_ = v_isSharedCheck_2459_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_annotatedBorrows_2405_);
lean_inc(v_map_2404_);
lean_dec(v_paramMap_2398_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2459_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2409_; lean_object* v___x_2411_; 
v___x_2409_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1___redArg(v_map_2404_, v_k_2384_);
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 0, v___x_2409_);
v___x_2411_ = v___x_2407_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v___x_2409_);
lean_ctor_set(v_reuseFailAlloc_2458_, 1, v_annotatedBorrows_2405_);
v___x_2411_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
lean_object* v___x_2413_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 1, v___x_2411_);
v___x_2413_ = v___x_2402_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v_owned_2399_);
lean_ctor_set(v_reuseFailAlloc_2457_, 1, v___x_2411_);
lean_ctor_set_uint8(v_reuseFailAlloc_2457_, sizeof(void*)*2, v_modified_2400_);
v___x_2413_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
lean_object* v___x_2414_; size_t v_sz_2415_; size_t v___x_2416_; lean_object* v___x_2417_; 
v___x_2414_ = lean_st_ref_put(v___y_2386_, v___x_2413_);
v_sz_2415_ = lean_array_size(v_val_2396_);
v___x_2416_ = ((size_t)0ULL);
v___x_2417_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2___redArg(v_sz_2415_, v___x_2416_, v_val_2396_, v___y_2386_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2448_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2420_ = v___x_2417_;
v_isShared_2421_ = v_isSharedCheck_2448_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2417_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2448_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2422_; lean_object* v_paramMap_2423_; lean_object* v_owned_2424_; uint8_t v_modified_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2447_; 
v___x_2422_ = lean_st_ref_take(v___y_2386_);
v_paramMap_2423_ = lean_ctor_get(v___x_2422_, 1);
v_owned_2424_ = lean_ctor_get(v___x_2422_, 0);
v_modified_2425_ = lean_ctor_get_uint8(v___x_2422_, sizeof(void*)*2);
v_isSharedCheck_2447_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2427_ = v___x_2422_;
v_isShared_2428_ = v_isSharedCheck_2447_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_paramMap_2423_);
lean_inc(v_owned_2424_);
lean_dec(v___x_2422_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2447_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v_map_2429_; lean_object* v_annotatedBorrows_2430_; lean_object* v___x_2432_; uint8_t v_isShared_2433_; uint8_t v_isSharedCheck_2446_; 
v_map_2429_ = lean_ctor_get(v_paramMap_2423_, 0);
v_annotatedBorrows_2430_ = lean_ctor_get(v_paramMap_2423_, 1);
v_isSharedCheck_2446_ = !lean_is_exclusive(v_paramMap_2423_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2432_ = v_paramMap_2423_;
v_isShared_2433_ = v_isSharedCheck_2446_;
goto v_resetjp_2431_;
}
else
{
lean_inc(v_annotatedBorrows_2430_);
lean_inc(v_map_2429_);
lean_dec(v_paramMap_2423_);
v___x_2432_ = lean_box(0);
v_isShared_2433_ = v_isSharedCheck_2446_;
goto v_resetjp_2431_;
}
v_resetjp_2431_:
{
lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2437_; 
v___x_2434_ = lean_box(0);
v___x_2435_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__2___redArg(v_map_2429_, v_k_2384_, v_a_2418_);
if (v_isShared_2433_ == 0)
{
lean_ctor_set(v___x_2432_, 0, v___x_2435_);
v___x_2437_ = v___x_2432_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v___x_2435_);
lean_ctor_set(v_reuseFailAlloc_2445_, 1, v_annotatedBorrows_2430_);
v___x_2437_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
lean_object* v___x_2439_; 
if (v_isShared_2428_ == 0)
{
lean_ctor_set(v___x_2427_, 1, v___x_2437_);
v___x_2439_ = v___x_2427_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v_owned_2424_);
lean_ctor_set(v_reuseFailAlloc_2444_, 1, v___x_2437_);
lean_ctor_set_uint8(v_reuseFailAlloc_2444_, sizeof(void*)*2, v_modified_2425_);
v___x_2439_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
lean_object* v___x_2440_; lean_object* v___x_2442_; 
v___x_2440_ = lean_st_ref_put(v___y_2386_, v___x_2439_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v___x_2434_);
v___x_2442_ = v___x_2420_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v___x_2434_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2456_; 
lean_dec_ref(v_k_2384_);
v_a_2449_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2456_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2451_ = v___x_2417_;
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2417_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2456_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2454_; 
if (v_isShared_2452_ == 0)
{
v___x_2454_ = v___x_2451_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_a_2449_);
v___x_2454_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
return v___x_2454_;
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
lean_object* v___x_2461_; lean_object* v___x_2462_; 
lean_dec(v___x_2395_);
lean_dec_ref(v_k_2384_);
v___x_2461_ = lean_box(0);
v___x_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
return v___x_2462_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap___boxed(lean_object* v_k_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
lean_object* v_res_2471_; 
v_res_2471_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap(v_k_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
lean_dec(v___y_2467_);
lean_dec_ref(v___y_2466_);
lean_dec(v___y_2465_);
lean_dec_ref(v___y_2464_);
return v_res_2471_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0(lean_object* v_00_u03b2_2472_, lean_object* v_m_2473_, lean_object* v_a_2474_){
_start:
{
lean_object* v___x_2475_; 
v___x_2475_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0___redArg(v_m_2473_, v_a_2474_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0___boxed(lean_object* v_00_u03b2_2476_, lean_object* v_m_2477_, lean_object* v_a_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0(v_00_u03b2_2476_, v_m_2477_, v_a_2478_);
lean_dec_ref(v_a_2478_);
lean_dec_ref(v_m_2477_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1(lean_object* v_00_u03b2_2480_, lean_object* v_m_2481_, lean_object* v_a_2482_){
_start:
{
lean_object* v___x_2483_; 
v___x_2483_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1___redArg(v_m_2481_, v_a_2482_);
return v___x_2483_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1___boxed(lean_object* v_00_u03b2_2484_, lean_object* v_m_2485_, lean_object* v_a_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1(v_00_u03b2_2484_, v_m_2485_, v_a_2486_);
lean_dec_ref(v_a_2486_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2(size_t v_sz_2488_, size_t v_i_2489_, lean_object* v_bs_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_){
_start:
{
lean_object* v___x_2498_; 
v___x_2498_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2___redArg(v_sz_2488_, v_i_2489_, v_bs_2490_, v___y_2492_);
return v___x_2498_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2___boxed(lean_object* v_sz_2499_, lean_object* v_i_2500_, lean_object* v_bs_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
size_t v_sz_boxed_2509_; size_t v_i_boxed_2510_; lean_object* v_res_2511_; 
v_sz_boxed_2509_ = lean_unbox_usize(v_sz_2499_);
lean_dec(v_sz_2499_);
v_i_boxed_2510_ = lean_unbox_usize(v_i_2500_);
lean_dec(v_i_2500_);
v_res_2511_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__2(v_sz_boxed_2509_, v_i_boxed_2510_, v_bs_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0(lean_object* v_00_u03b2_2512_, lean_object* v_a_2513_, lean_object* v_x_2514_){
_start:
{
lean_object* v___x_2515_; 
v___x_2515_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0___redArg(v_a_2513_, v_x_2514_);
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2516_, lean_object* v_a_2517_, lean_object* v_x_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0_spec__0(v_00_u03b2_2516_, v_a_2517_, v_x_2518_);
lean_dec(v_x_2518_);
lean_dec_ref(v_a_2517_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2(lean_object* v_00_u03b2_2520_, lean_object* v_a_2521_, lean_object* v_x_2522_){
_start:
{
lean_object* v___x_2523_; 
v___x_2523_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2___redArg(v_a_2521_, v_x_2522_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2524_, lean_object* v_a_2525_, lean_object* v_x_2526_){
_start:
{
lean_object* v_res_2527_; 
v_res_2527_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__1_spec__2(v_00_u03b2_2524_, v_a_2525_, v_x_2526_);
lean_dec_ref(v_a_2525_);
return v_res_2527_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2528_; 
v___x_2528_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2528_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2529_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__0);
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2529_);
return v___x_2530_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2531_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__1);
v___x_2532_ = lean_unsigned_to_nat(0u);
v___x_2533_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2532_);
lean_ctor_set(v___x_2533_, 1, v___x_2532_);
lean_ctor_set(v___x_2533_, 2, v___x_2532_);
lean_ctor_set(v___x_2533_, 3, v___x_2532_);
lean_ctor_set(v___x_2533_, 4, v___x_2531_);
lean_ctor_set(v___x_2533_, 5, v___x_2531_);
lean_ctor_set(v___x_2533_, 6, v___x_2531_);
lean_ctor_set(v___x_2533_, 7, v___x_2531_);
lean_ctor_set(v___x_2533_, 8, v___x_2531_);
lean_ctor_set(v___x_2533_, 9, v___x_2531_);
lean_ctor_set(v___x_2533_, 10, v___x_2531_);
return v___x_2533_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_2534_; double v___x_2535_; 
v___x_2534_ = lean_unsigned_to_nat(0u);
v___x_2535_ = lean_float_of_nat(v___x_2534_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg(lean_object* v_cls_2539_, lean_object* v_msg_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_){
_start:
{
lean_object* v_toCold_2546_; lean_object* v_ref_2547_; lean_object* v___x_2548_; lean_object* v_env_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; 
v_toCold_2546_ = lean_ctor_get(v___y_2543_, 0);
v_ref_2547_ = lean_ctor_get(v___y_2543_, 2);
v___x_2548_ = lean_st_ref_get(v___y_2544_);
v_env_2549_ = lean_ctor_get(v___x_2548_, 0);
lean_inc_ref(v_env_2549_);
lean_dec(v___x_2548_);
v___x_2550_ = lean_st_ref_get(v___y_2542_);
v___x_2551_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_2541_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2610_; 
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2554_ = v___x_2551_;
v_isShared_2555_ = v_isSharedCheck_2610_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v___x_2551_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2610_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v_lctx_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2608_; 
v_lctx_2556_ = lean_ctor_get(v___x_2550_, 0);
v_isSharedCheck_2608_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2608_ == 0)
{
lean_object* v_unused_2609_; 
v_unused_2609_ = lean_ctor_get(v___x_2550_, 1);
lean_dec(v_unused_2609_);
v___x_2558_ = v___x_2550_;
v_isShared_2559_ = v_isSharedCheck_2608_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_lctx_2556_);
lean_dec(v___x_2550_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2608_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v_options_2560_; uint8_t v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2566_; 
v_options_2560_ = lean_ctor_get(v_toCold_2546_, 2);
v___x_2561_ = lean_unbox(v_a_2552_);
lean_dec(v_a_2552_);
v___x_2562_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_2556_, v___x_2561_);
lean_dec_ref(v_lctx_2556_);
v___x_2563_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__2, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__2);
lean_inc_ref(v_options_2560_);
v___x_2564_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2564_, 0, v_env_2549_);
lean_ctor_set(v___x_2564_, 1, v___x_2563_);
lean_ctor_set(v___x_2564_, 2, v___x_2562_);
lean_ctor_set(v___x_2564_, 3, v_options_2560_);
if (v_isShared_2559_ == 0)
{
lean_ctor_set_tag(v___x_2558_, 3);
lean_ctor_set(v___x_2558_, 1, v_msg_2540_);
lean_ctor_set(v___x_2558_, 0, v___x_2564_);
v___x_2566_ = v___x_2558_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v___x_2564_);
lean_ctor_set(v_reuseFailAlloc_2607_, 1, v_msg_2540_);
v___x_2566_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
lean_object* v___x_2567_; lean_object* v_traceState_2568_; lean_object* v_env_2569_; lean_object* v_nextMacroScope_2570_; lean_object* v_ngen_2571_; lean_object* v_auxDeclNGen_2572_; lean_object* v_cache_2573_; lean_object* v_messages_2574_; lean_object* v_infoState_2575_; lean_object* v_snapshotTasks_2576_; lean_object* v___x_2578_; uint8_t v_isShared_2579_; uint8_t v_isSharedCheck_2606_; 
v___x_2567_ = lean_st_ref_take(v___y_2544_);
v_traceState_2568_ = lean_ctor_get(v___x_2567_, 4);
v_env_2569_ = lean_ctor_get(v___x_2567_, 0);
v_nextMacroScope_2570_ = lean_ctor_get(v___x_2567_, 1);
v_ngen_2571_ = lean_ctor_get(v___x_2567_, 2);
v_auxDeclNGen_2572_ = lean_ctor_get(v___x_2567_, 3);
v_cache_2573_ = lean_ctor_get(v___x_2567_, 5);
v_messages_2574_ = lean_ctor_get(v___x_2567_, 6);
v_infoState_2575_ = lean_ctor_get(v___x_2567_, 7);
v_snapshotTasks_2576_ = lean_ctor_get(v___x_2567_, 8);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2578_ = v___x_2567_;
v_isShared_2579_ = v_isSharedCheck_2606_;
goto v_resetjp_2577_;
}
else
{
lean_inc(v_snapshotTasks_2576_);
lean_inc(v_infoState_2575_);
lean_inc(v_messages_2574_);
lean_inc(v_cache_2573_);
lean_inc(v_traceState_2568_);
lean_inc(v_auxDeclNGen_2572_);
lean_inc(v_ngen_2571_);
lean_inc(v_nextMacroScope_2570_);
lean_inc(v_env_2569_);
lean_dec(v___x_2567_);
v___x_2578_ = lean_box(0);
v_isShared_2579_ = v_isSharedCheck_2606_;
goto v_resetjp_2577_;
}
v_resetjp_2577_:
{
uint64_t v_tid_2580_; lean_object* v_traces_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2605_; 
v_tid_2580_ = lean_ctor_get_uint64(v_traceState_2568_, sizeof(void*)*1);
v_traces_2581_ = lean_ctor_get(v_traceState_2568_, 0);
v_isSharedCheck_2605_ = !lean_is_exclusive(v_traceState_2568_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2583_ = v_traceState_2568_;
v_isShared_2584_ = v_isSharedCheck_2605_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_traces_2581_);
lean_dec(v_traceState_2568_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2605_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; double v___x_2587_; uint8_t v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2596_; 
v___x_2585_ = lean_box(0);
v___x_2586_ = lean_box(0);
v___x_2587_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__3, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__3_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__3);
v___x_2588_ = 0;
v___x_2589_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__4));
v___x_2590_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2590_, 0, v_cls_2539_);
lean_ctor_set(v___x_2590_, 1, v___x_2586_);
lean_ctor_set(v___x_2590_, 2, v___x_2589_);
lean_ctor_set_float(v___x_2590_, sizeof(void*)*3, v___x_2587_);
lean_ctor_set_float(v___x_2590_, sizeof(void*)*3 + 8, v___x_2587_);
lean_ctor_set_uint8(v___x_2590_, sizeof(void*)*3 + 16, v___x_2588_);
v___x_2591_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__5));
v___x_2592_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2590_);
lean_ctor_set(v___x_2592_, 1, v___x_2566_);
lean_ctor_set(v___x_2592_, 2, v___x_2591_);
lean_inc(v_ref_2547_);
v___x_2593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2593_, 0, v_ref_2547_);
lean_ctor_set(v___x_2593_, 1, v___x_2592_);
v___x_2594_ = l_Lean_PersistentArray_push___redArg(v_traces_2581_, v___x_2593_);
if (v_isShared_2584_ == 0)
{
lean_ctor_set(v___x_2583_, 0, v___x_2594_);
v___x_2596_ = v___x_2583_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v___x_2594_);
lean_ctor_set_uint64(v_reuseFailAlloc_2604_, sizeof(void*)*1, v_tid_2580_);
v___x_2596_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
lean_object* v___x_2598_; 
if (v_isShared_2579_ == 0)
{
lean_ctor_set(v___x_2578_, 4, v___x_2596_);
v___x_2598_ = v___x_2578_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_env_2569_);
lean_ctor_set(v_reuseFailAlloc_2603_, 1, v_nextMacroScope_2570_);
lean_ctor_set(v_reuseFailAlloc_2603_, 2, v_ngen_2571_);
lean_ctor_set(v_reuseFailAlloc_2603_, 3, v_auxDeclNGen_2572_);
lean_ctor_set(v_reuseFailAlloc_2603_, 4, v___x_2596_);
lean_ctor_set(v_reuseFailAlloc_2603_, 5, v_cache_2573_);
lean_ctor_set(v_reuseFailAlloc_2603_, 6, v_messages_2574_);
lean_ctor_set(v_reuseFailAlloc_2603_, 7, v_infoState_2575_);
lean_ctor_set(v_reuseFailAlloc_2603_, 8, v_snapshotTasks_2576_);
v___x_2598_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
lean_object* v___x_2599_; lean_object* v___x_2601_; 
v___x_2599_ = lean_st_ref_put(v___y_2544_, v___x_2598_);
if (v_isShared_2555_ == 0)
{
lean_ctor_set(v___x_2554_, 0, v___x_2585_);
v___x_2601_ = v___x_2554_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v___x_2585_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
return v___x_2601_;
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
lean_object* v_a_2611_; lean_object* v___x_2613_; uint8_t v_isShared_2614_; uint8_t v_isSharedCheck_2618_; 
lean_dec(v___x_2550_);
lean_dec_ref(v_env_2549_);
lean_dec_ref(v_msg_2540_);
lean_dec(v_cls_2539_);
v_a_2611_ = lean_ctor_get(v___x_2551_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2613_ = v___x_2551_;
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
else
{
lean_inc(v_a_2611_);
lean_dec(v___x_2551_);
v___x_2613_ = lean_box(0);
v_isShared_2614_ = v_isSharedCheck_2618_;
goto v_resetjp_2612_;
}
v_resetjp_2612_:
{
lean_object* v___x_2616_; 
if (v_isShared_2614_ == 0)
{
v___x_2616_ = v___x_2613_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_a_2611_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___boxed(lean_object* v_cls_2619_, lean_object* v_msg_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_){
_start:
{
lean_object* v_res_2626_; 
v_res_2626_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg(v_cls_2619_, v_msg_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_);
lean_dec(v___y_2624_);
lean_dec_ref(v___y_2623_);
lean_dec(v___y_2622_);
lean_dec_ref(v___y_2621_);
return v_res_2626_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0(lean_object* v_cls_2627_, lean_object* v_msg_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_){
_start:
{
lean_object* v___x_2636_; 
v___x_2636_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg(v_cls_2627_, v_msg_2628_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___boxed(lean_object* v_cls_2637_, lean_object* v_msg_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_){
_start:
{
lean_object* v_res_2646_; 
v_res_2646_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0(v_cls_2637_, v_msg_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
lean_dec(v___y_2642_);
lean_dec_ref(v___y_2641_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
return v_res_2646_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1___redArg(lean_object* v_m_2647_, lean_object* v_a_2648_){
_start:
{
lean_object* v_buckets_2649_; lean_object* v___x_2650_; uint64_t v___x_2651_; uint64_t v___x_2652_; uint64_t v___x_2653_; uint64_t v_fold_2654_; uint64_t v___x_2655_; uint64_t v___x_2656_; uint64_t v___x_2657_; size_t v___x_2658_; size_t v___x_2659_; size_t v___x_2660_; size_t v___x_2661_; size_t v___x_2662_; lean_object* v___x_2663_; uint8_t v___x_2664_; 
v_buckets_2649_ = lean_ctor_get(v_m_2647_, 1);
v___x_2650_ = lean_array_get_size(v_buckets_2649_);
v___x_2651_ = l_Lean_instHashableFVarId_hash(v_a_2648_);
v___x_2652_ = 32ULL;
v___x_2653_ = lean_uint64_shift_right(v___x_2651_, v___x_2652_);
v_fold_2654_ = lean_uint64_xor(v___x_2651_, v___x_2653_);
v___x_2655_ = 16ULL;
v___x_2656_ = lean_uint64_shift_right(v_fold_2654_, v___x_2655_);
v___x_2657_ = lean_uint64_xor(v_fold_2654_, v___x_2656_);
v___x_2658_ = lean_uint64_to_usize(v___x_2657_);
v___x_2659_ = lean_usize_of_nat(v___x_2650_);
v___x_2660_ = ((size_t)1ULL);
v___x_2661_ = lean_usize_sub(v___x_2659_, v___x_2660_);
v___x_2662_ = lean_usize_land(v___x_2658_, v___x_2661_);
v___x_2663_ = lean_array_uget_borrowed(v_buckets_2649_, v___x_2662_);
v___x_2664_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__1_spec__1___redArg(v_a_2648_, v___x_2663_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1___redArg___boxed(lean_object* v_m_2665_, lean_object* v_a_2666_){
_start:
{
uint8_t v_res_2667_; lean_object* v_r_2668_; 
v_res_2667_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1___redArg(v_m_2665_, v_a_2666_);
lean_dec(v_a_2666_);
lean_dec_ref(v_m_2665_);
v_r_2668_ = lean_box(v_res_2667_);
return v_r_2668_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__5(void){
_start:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2677_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__2));
v___x_2678_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__4));
v___x_2679_ = l_Lean_Name_append(v___x_2678_, v___x_2677_);
return v___x_2679_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__7(void){
_start:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2681_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__6));
v___x_2682_ = l_Lean_stringToMessageData(v___x_2681_);
return v___x_2682_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__9(void){
_start:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2684_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__8));
v___x_2685_ = l_Lean_stringToMessageData(v___x_2684_);
return v___x_2685_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__11(void){
_start:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2687_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__10));
v___x_2688_ = l_Lean_stringToMessageData(v___x_2687_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(lean_object* v_fvarId_2689_, lean_object* v_reason_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_){
_start:
{
lean_object* v___x_2701_; lean_object* v_owned_2702_; uint8_t v___x_2703_; 
v___x_2701_ = lean_st_ref_get(v___y_2692_);
v_owned_2702_ = lean_ctor_get(v___x_2701_, 0);
lean_inc_ref(v_owned_2702_);
lean_dec(v___x_2701_);
v___x_2703_ = l_Lean_FVarIdHashSet_contains(v_owned_2702_, v_fvarId_2689_);
lean_dec_ref(v_owned_2702_);
if (v___x_2703_ == 0)
{
uint8_t v___x_2704_; lean_object* v___y_2706_; lean_object* v___x_2721_; uint8_t v___y_2723_; uint8_t v___x_2800_; 
v___x_2704_ = 1;
v___x_2721_ = lean_st_ref_get(v___y_2692_);
v___x_2800_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_isForced(v_reason_2690_);
if (v___x_2800_ == 0)
{
goto v___jp_2796_;
}
else
{
if (v___x_2703_ == 0)
{
lean_dec(v___x_2721_);
v___y_2723_ = v___x_2703_;
goto v___jp_2722_;
}
else
{
goto v___jp_2796_;
}
}
v___jp_2705_:
{
lean_object* v___x_2707_; lean_object* v_owned_2708_; lean_object* v_paramMap_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2720_; 
v___x_2707_ = lean_st_ref_take(v___y_2706_);
v_owned_2708_ = lean_ctor_get(v___x_2707_, 0);
v_paramMap_2709_ = lean_ctor_get(v___x_2707_, 1);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2711_ = v___x_2707_;
v_isShared_2712_ = v_isSharedCheck_2720_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_paramMap_2709_);
lean_inc(v_owned_2708_);
lean_dec(v___x_2707_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2720_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2716_; 
v___x_2713_ = lean_box(0);
v___x_2714_ = l_Lean_FVarIdHashSet_insert(v_owned_2708_, v_fvarId_2689_);
if (v_isShared_2712_ == 0)
{
lean_ctor_set(v___x_2711_, 0, v___x_2714_);
v___x_2716_ = v___x_2711_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v___x_2714_);
lean_ctor_set(v_reuseFailAlloc_2719_, 1, v_paramMap_2709_);
v___x_2716_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
lean_object* v___x_2717_; lean_object* v___x_2718_; 
lean_ctor_set_uint8(v___x_2716_, sizeof(void*)*2, v___x_2704_);
v___x_2717_ = lean_st_ref_put(v___y_2706_, v___x_2716_);
v___x_2718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2713_);
return v___x_2718_;
}
}
}
v___jp_2722_:
{
if (v___y_2723_ == 0)
{
lean_object* v_toCold_2724_; lean_object* v_options_2725_; uint8_t v_hasTrace_2726_; 
v_toCold_2724_ = lean_ctor_get(v___y_2695_, 0);
v_options_2725_ = lean_ctor_get(v_toCold_2724_, 2);
v_hasTrace_2726_ = lean_ctor_get_uint8(v_options_2725_, sizeof(void*)*1);
if (v_hasTrace_2726_ == 0)
{
lean_dec(v_reason_2690_);
v___y_2706_ = v___y_2692_;
goto v___jp_2705_;
}
else
{
lean_object* v_inheritedTraceOptions_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; uint8_t v___x_2730_; 
v_inheritedTraceOptions_2727_ = lean_ctor_get(v_toCold_2724_, 11);
v___x_2728_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__2));
v___x_2729_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__5, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__5_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__5);
v___x_2730_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2727_, v_options_2725_, v___x_2729_);
if (v___x_2730_ == 0)
{
lean_dec(v_reason_2690_);
v___y_2706_ = v___y_2692_;
goto v___jp_2705_;
}
else
{
lean_object* v___x_2731_; lean_object* v___x_2732_; 
lean_inc(v_fvarId_2689_);
v___x_2731_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_PP_ppFVar___boxed), 7, 1);
lean_closure_set(v___x_2731_, 0, v_fvarId_2689_);
v___x_2732_ = l_Lean_Compiler_LCNF_PP_run___redArg(v___x_2731_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2733_; lean_object* v___x_2734_; 
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
lean_inc(v_a_2733_);
lean_dec_ref_known(v___x_2732_, 1);
v___x_2734_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString(v_reason_2690_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref_known(v___x_2734_, 1);
v___x_2736_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__7, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__7_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__7);
v___x_2737_ = l_Lean_MessageData_ofFormat(v_a_2733_);
v___x_2738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2738_, 0, v___x_2736_);
lean_ctor_set(v___x_2738_, 1, v___x_2737_);
v___x_2739_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__9, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__9_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__9);
v___x_2740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2738_);
lean_ctor_set(v___x_2740_, 1, v___x_2739_);
v___x_2741_ = l_Lean_stringToMessageData(v_a_2735_);
v___x_2742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2740_);
lean_ctor_set(v___x_2742_, 1, v___x_2741_);
v___x_2743_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg(v___x_2728_, v___x_2742_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_dec_ref_known(v___x_2743_, 1);
v___y_2706_ = v___y_2692_;
goto v___jp_2705_;
}
else
{
lean_dec(v_fvarId_2689_);
return v___x_2743_;
}
}
else
{
lean_object* v_a_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2751_; 
lean_dec(v_a_2733_);
lean_dec(v_fvarId_2689_);
v_a_2744_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2751_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2751_ == 0)
{
v___x_2746_ = v___x_2734_;
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_a_2744_);
lean_dec(v___x_2734_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2751_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2749_; 
if (v_isShared_2747_ == 0)
{
v___x_2749_ = v___x_2746_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2744_);
v___x_2749_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
return v___x_2749_;
}
}
}
}
else
{
lean_object* v_a_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2759_; 
lean_dec(v_reason_2690_);
lean_dec(v_fvarId_2689_);
v_a_2752_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2754_ = v___x_2732_;
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_a_2752_);
lean_dec(v___x_2732_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2757_; 
if (v_isShared_2755_ == 0)
{
v___x_2757_ = v___x_2754_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_a_2752_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_2760_; lean_object* v_options_2761_; uint8_t v_hasTrace_2762_; 
v_toCold_2760_ = lean_ctor_get(v___y_2695_, 0);
v_options_2761_ = lean_ctor_get(v_toCold_2760_, 2);
v_hasTrace_2762_ = lean_ctor_get_uint8(v_options_2761_, sizeof(void*)*1);
if (v_hasTrace_2762_ == 0)
{
lean_dec(v_reason_2690_);
lean_dec(v_fvarId_2689_);
goto v___jp_2698_;
}
else
{
lean_object* v_inheritedTraceOptions_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; uint8_t v___x_2766_; 
v_inheritedTraceOptions_2763_ = lean_ctor_get(v_toCold_2760_, 11);
v___x_2764_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__2));
v___x_2765_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__5, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__5_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__5);
v___x_2766_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2763_, v_options_2761_, v___x_2765_);
if (v___x_2766_ == 0)
{
lean_dec(v_reason_2690_);
lean_dec(v_fvarId_2689_);
goto v___jp_2698_;
}
else
{
lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2767_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_PP_ppFVar___boxed), 7, 1);
lean_closure_set(v___x_2767_, 0, v_fvarId_2689_);
v___x_2768_ = l_Lean_Compiler_LCNF_PP_run___redArg(v___x_2767_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
if (lean_obj_tag(v___x_2768_) == 0)
{
lean_object* v_a_2769_; lean_object* v___x_2770_; 
v_a_2769_ = lean_ctor_get(v___x_2768_, 0);
lean_inc(v_a_2769_);
lean_dec_ref_known(v___x_2768_, 1);
v___x_2770_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_OwnReason_toString(v_reason_2690_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
if (lean_obj_tag(v___x_2770_) == 0)
{
lean_object* v_a_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v_a_2771_ = lean_ctor_get(v___x_2770_, 0);
lean_inc(v_a_2771_);
lean_dec_ref_known(v___x_2770_, 1);
v___x_2772_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__11, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__11_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__11);
v___x_2773_ = l_Lean_MessageData_ofFormat(v_a_2769_);
v___x_2774_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2772_);
lean_ctor_set(v___x_2774_, 1, v___x_2773_);
v___x_2775_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__9, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__9_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__9);
v___x_2776_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2774_);
lean_ctor_set(v___x_2776_, 1, v___x_2775_);
v___x_2777_ = l_Lean_stringToMessageData(v_a_2771_);
v___x_2778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2776_);
lean_ctor_set(v___x_2778_, 1, v___x_2777_);
v___x_2779_ = l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg(v___x_2764_, v___x_2778_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
return v___x_2779_;
}
else
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2787_; 
lean_dec(v_a_2769_);
v_a_2780_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2787_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2787_ == 0)
{
v___x_2782_ = v___x_2770_;
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2770_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2787_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2785_; 
if (v_isShared_2783_ == 0)
{
v___x_2785_ = v___x_2782_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_a_2780_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
}
}
}
}
else
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2795_; 
lean_dec(v_reason_2690_);
v_a_2788_ = lean_ctor_get(v___x_2768_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v___x_2768_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2790_ = v___x_2768_;
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v___x_2768_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2795_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2793_; 
if (v_isShared_2791_ == 0)
{
v___x_2793_ = v___x_2790_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v_a_2788_);
v___x_2793_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
return v___x_2793_;
}
}
}
}
}
}
}
v___jp_2796_:
{
lean_object* v_paramMap_2797_; lean_object* v_annotatedBorrows_2798_; uint8_t v___x_2799_; 
v_paramMap_2797_ = lean_ctor_get(v___x_2721_, 1);
lean_inc_ref(v_paramMap_2797_);
lean_dec(v___x_2721_);
v_annotatedBorrows_2798_ = lean_ctor_get(v_paramMap_2797_, 1);
lean_inc_ref(v_annotatedBorrows_2798_);
lean_dec_ref(v_paramMap_2797_);
v___x_2799_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1___redArg(v_annotatedBorrows_2798_, v_fvarId_2689_);
lean_dec_ref(v_annotatedBorrows_2798_);
v___y_2723_ = v___x_2799_;
goto v___jp_2722_;
}
}
else
{
lean_object* v___x_2801_; lean_object* v___x_2802_; 
lean_dec(v_reason_2690_);
lean_dec(v_fvarId_2689_);
v___x_2801_ = lean_box(0);
v___x_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2801_);
return v___x_2802_;
}
v___jp_2698_:
{
lean_object* v___x_2699_; lean_object* v___x_2700_; 
v___x_2699_ = lean_box(0);
v___x_2700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2699_);
return v___x_2700_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___boxed(lean_object* v_fvarId_2803_, lean_object* v_reason_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_){
_start:
{
lean_object* v_res_2812_; 
v_res_2812_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_fvarId_2803_, v_reason_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_);
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
return v_res_2812_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1(lean_object* v_00_u03b2_2813_, lean_object* v_m_2814_, lean_object* v_a_2815_){
_start:
{
uint8_t v___x_2816_; 
v___x_2816_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1___redArg(v_m_2814_, v_a_2815_);
return v___x_2816_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1___boxed(lean_object* v_00_u03b2_2817_, lean_object* v_m_2818_, lean_object* v_a_2819_){
_start:
{
uint8_t v_res_2820_; lean_object* v_r_2821_; 
v_res_2820_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__1(v_00_u03b2_2817_, v_m_2818_, v_a_2819_);
lean_dec(v_a_2819_);
lean_dec_ref(v_m_2818_);
v_r_2821_ = lean_box(v_res_2820_);
return v_r_2821_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2822_; 
v___x_2822_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg(lean_object* v_upperBound_2823_, lean_object* v_args_2824_, lean_object* v_ps_2825_, lean_object* v_reason_2826_, lean_object* v_a_2827_, lean_object* v_b_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_){
_start:
{
lean_object* v_a_2837_; uint8_t v___x_2841_; 
v___x_2841_ = lean_nat_dec_lt(v_a_2827_, v_upperBound_2823_);
if (v___x_2841_ == 0)
{
lean_object* v___x_2842_; 
lean_dec(v_a_2827_);
lean_dec(v_reason_2826_);
v___x_2842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2842_, 0, v_b_2828_);
return v___x_2842_;
}
else
{
lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2843_ = lean_box(0);
v___x_2844_ = lean_array_fget_borrowed(v_args_2824_, v_a_2827_);
if (lean_obj_tag(v___x_2844_) == 1)
{
lean_object* v_fvarId_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
v_fvarId_2845_ = lean_ctor_get(v___x_2844_, 0);
v___x_2846_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg___closed__0);
v___x_2847_ = lean_array_get_borrowed(v___x_2846_, v_ps_2825_, v_a_2827_);
v___x_2848_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg(v_fvarId_2845_, v___y_2830_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v_a_2849_; uint8_t v___x_2850_; 
v_a_2849_ = lean_ctor_get(v___x_2848_, 0);
lean_inc(v_a_2849_);
lean_dec_ref_known(v___x_2848_, 1);
v___x_2850_ = lean_unbox(v_a_2849_);
lean_dec(v_a_2849_);
if (v___x_2850_ == 0)
{
v_a_2837_ = v___x_2843_;
goto v___jp_2836_;
}
else
{
lean_object* v_fvarId_2851_; lean_object* v___x_2852_; 
v_fvarId_2851_ = lean_ctor_get(v___x_2847_, 0);
lean_inc(v_reason_2826_);
lean_inc(v_fvarId_2851_);
v___x_2852_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_fvarId_2851_, v_reason_2826_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_dec_ref_known(v___x_2852_, 1);
v_a_2837_ = v___x_2843_;
goto v___jp_2836_;
}
else
{
lean_dec(v_a_2827_);
lean_dec(v_reason_2826_);
return v___x_2852_;
}
}
}
else
{
lean_object* v_a_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_2860_; 
lean_dec(v_a_2827_);
lean_dec(v_reason_2826_);
v_a_2853_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2860_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2860_ == 0)
{
v___x_2855_ = v___x_2848_;
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_a_2853_);
lean_dec(v___x_2848_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v___x_2858_; 
if (v_isShared_2856_ == 0)
{
v___x_2858_ = v___x_2855_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v_a_2853_);
v___x_2858_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
return v___x_2858_;
}
}
}
}
else
{
v_a_2837_ = v___x_2843_;
goto v___jp_2836_;
}
}
v___jp_2836_:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = lean_unsigned_to_nat(1u);
v___x_2839_ = lean_nat_add(v_a_2827_, v___x_2838_);
lean_dec(v_a_2827_);
v_a_2827_ = v___x_2839_;
v_b_2828_ = v_a_2837_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg___boxed(lean_object* v_upperBound_2861_, lean_object* v_args_2862_, lean_object* v_ps_2863_, lean_object* v_reason_2864_, lean_object* v_a_2865_, lean_object* v_b_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
lean_object* v_res_2874_; 
v_res_2874_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg(v_upperBound_2861_, v_args_2862_, v_ps_2863_, v_reason_2864_, v_a_2865_, v_b_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_);
lean_dec(v___y_2872_);
lean_dec_ref(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec_ref(v___y_2869_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
lean_dec_ref(v_ps_2863_);
lean_dec_ref(v_args_2862_);
lean_dec(v_upperBound_2861_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs(lean_object* v_args_2875_, lean_object* v_ps_2876_, lean_object* v_reason_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_){
_start:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2885_ = lean_unsigned_to_nat(0u);
v___x_2886_ = lean_array_get_size(v_args_2875_);
v___x_2887_ = lean_box(0);
v___x_2888_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg(v___x_2886_, v_args_2875_, v_ps_2876_, v_reason_2877_, v___x_2885_, v___x_2887_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_);
if (lean_obj_tag(v___x_2888_) == 0)
{
lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2895_; 
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2888_);
if (v_isSharedCheck_2895_ == 0)
{
lean_object* v_unused_2896_; 
v_unused_2896_ = lean_ctor_get(v___x_2888_, 0);
lean_dec(v_unused_2896_);
v___x_2890_ = v___x_2888_;
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
else
{
lean_dec(v___x_2888_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v___x_2893_; 
if (v_isShared_2891_ == 0)
{
lean_ctor_set(v___x_2890_, 0, v___x_2887_);
v___x_2893_ = v___x_2890_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v___x_2887_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
}
else
{
return v___x_2888_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs___boxed(lean_object* v_args_2897_, lean_object* v_ps_2898_, lean_object* v_reason_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs(v_args_2897_, v_ps_2898_, v_reason_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec(v___y_2903_);
lean_dec_ref(v___y_2902_);
lean_dec(v___y_2901_);
lean_dec_ref(v___y_2900_);
lean_dec_ref(v_ps_2898_);
lean_dec_ref(v_args_2897_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0(lean_object* v_upperBound_2908_, lean_object* v_args_2909_, lean_object* v_ps_2910_, lean_object* v_reason_2911_, lean_object* v_inst_2912_, lean_object* v_R_2913_, lean_object* v_a_2914_, lean_object* v_b_2915_, lean_object* v_c_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_){
_start:
{
lean_object* v___x_2924_; 
v___x_2924_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg(v_upperBound_2908_, v_args_2909_, v_ps_2910_, v_reason_2911_, v_a_2914_, v_b_2915_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_);
return v___x_2924_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___boxed(lean_object* v_upperBound_2925_, lean_object* v_args_2926_, lean_object* v_ps_2927_, lean_object* v_reason_2928_, lean_object* v_inst_2929_, lean_object* v_R_2930_, lean_object* v_a_2931_, lean_object* v_b_2932_, lean_object* v_c_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_){
_start:
{
lean_object* v_res_2941_; 
v_res_2941_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0(v_upperBound_2925_, v_args_2926_, v_ps_2927_, v_reason_2928_, v_inst_2929_, v_R_2930_, v_a_2931_, v_b_2932_, v_c_2933_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_);
lean_dec(v___y_2939_);
lean_dec_ref(v___y_2938_);
lean_dec(v___y_2937_);
lean_dec_ref(v___y_2936_);
lean_dec(v___y_2935_);
lean_dec_ref(v___y_2934_);
lean_dec_ref(v_ps_2927_);
lean_dec_ref(v_args_2926_);
lean_dec(v_upperBound_2925_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg___lam__0(lean_object* v_reason_2942_, lean_object* v_x_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_){
_start:
{
lean_object* v___x_2951_; 
v___x_2951_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_x_2943_, v_reason_2942_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg___lam__0___boxed(lean_object* v_reason_2952_, lean_object* v_x_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg___lam__0(v_reason_2952_, v_x_2953_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_);
lean_dec(v___y_2959_);
lean_dec_ref(v___y_2958_);
lean_dec(v___y_2957_);
lean_dec_ref(v___y_2956_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0_spec__1(lean_object* v_msg_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_){
_start:
{
lean_object* v___f_2970_; lean_object* v___f_2971_; lean_object* v___f_2972_; lean_object* v___f_2973_; lean_object* v___f_2974_; lean_object* v___f_2975_; lean_object* v___f_2976_; lean_object* v___f_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v_toApplicative_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_3045_; 
v___f_2970_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__0));
v___f_2971_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__1));
v___f_2972_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__2));
v___f_2973_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__3));
v___f_2974_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__4));
v___f_2975_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_2975_, 0, v___f_2974_);
lean_closure_set(v___f_2975_, 1, v___f_2973_);
v___f_2976_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_2976_, 0, v___f_2973_);
v___f_2977_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__5));
v___x_2978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2978_, 0, v___f_2970_);
lean_ctor_set(v___x_2978_, 1, v___f_2971_);
v___x_2979_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2978_);
lean_ctor_set(v___x_2979_, 1, v___f_2972_);
lean_ctor_set(v___x_2979_, 2, v___f_2975_);
lean_ctor_set(v___x_2979_, 3, v___f_2976_);
lean_ctor_set(v___x_2979_, 4, v___f_2977_);
v___x_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
lean_ctor_set(v___x_2980_, 1, v___f_2973_);
v___x_2981_ = l_StateRefT_x27_instMonad___redArg(v___x_2980_);
v_toApplicative_2982_ = lean_ctor_get(v___x_2981_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_2981_);
if (v_isSharedCheck_3045_ == 0)
{
lean_object* v_unused_3046_; 
v_unused_3046_ = lean_ctor_get(v___x_2981_, 1);
lean_dec(v_unused_3046_);
v___x_2984_ = v___x_2981_;
v_isShared_2985_ = v_isSharedCheck_3045_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_toApplicative_2982_);
lean_dec(v___x_2981_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_3045_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v_toFunctor_2986_; lean_object* v_toSeq_2987_; lean_object* v_toSeqLeft_2988_; lean_object* v_toSeqRight_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_3043_; 
v_toFunctor_2986_ = lean_ctor_get(v_toApplicative_2982_, 0);
v_toSeq_2987_ = lean_ctor_get(v_toApplicative_2982_, 2);
v_toSeqLeft_2988_ = lean_ctor_get(v_toApplicative_2982_, 3);
v_toSeqRight_2989_ = lean_ctor_get(v_toApplicative_2982_, 4);
v_isSharedCheck_3043_ = !lean_is_exclusive(v_toApplicative_2982_);
if (v_isSharedCheck_3043_ == 0)
{
lean_object* v_unused_3044_; 
v_unused_3044_ = lean_ctor_get(v_toApplicative_2982_, 1);
lean_dec(v_unused_3044_);
v___x_2991_ = v_toApplicative_2982_;
v_isShared_2992_ = v_isSharedCheck_3043_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_toSeqRight_2989_);
lean_inc(v_toSeqLeft_2988_);
lean_inc(v_toSeq_2987_);
lean_inc(v_toFunctor_2986_);
lean_dec(v_toApplicative_2982_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_3043_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___f_2993_; lean_object* v___f_2994_; lean_object* v___f_2995_; lean_object* v___f_2996_; lean_object* v___x_2997_; lean_object* v___f_2998_; lean_object* v___f_2999_; lean_object* v___f_3000_; lean_object* v___x_3002_; 
v___f_2993_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__6));
v___f_2994_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__7));
lean_inc_ref(v_toFunctor_2986_);
v___f_2995_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2995_, 0, v_toFunctor_2986_);
v___f_2996_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2996_, 0, v_toFunctor_2986_);
v___x_2997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2997_, 0, v___f_2995_);
lean_ctor_set(v___x_2997_, 1, v___f_2996_);
v___f_2998_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2998_, 0, v_toSeqRight_2989_);
v___f_2999_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2999_, 0, v_toSeqLeft_2988_);
v___f_3000_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3000_, 0, v_toSeq_2987_);
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 4, v___f_2998_);
lean_ctor_set(v___x_2991_, 3, v___f_2999_);
lean_ctor_set(v___x_2991_, 2, v___f_3000_);
lean_ctor_set(v___x_2991_, 1, v___f_2993_);
lean_ctor_set(v___x_2991_, 0, v___x_2997_);
v___x_3002_ = v___x_2991_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v___x_2997_);
lean_ctor_set(v_reuseFailAlloc_3042_, 1, v___f_2993_);
lean_ctor_set(v_reuseFailAlloc_3042_, 2, v___f_3000_);
lean_ctor_set(v_reuseFailAlloc_3042_, 3, v___f_2999_);
lean_ctor_set(v_reuseFailAlloc_3042_, 4, v___f_2998_);
v___x_3002_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
lean_object* v___x_3004_; 
if (v_isShared_2985_ == 0)
{
lean_ctor_set(v___x_2984_, 1, v___f_2994_);
lean_ctor_set(v___x_2984_, 0, v___x_3002_);
v___x_3004_ = v___x_2984_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v___x_3002_);
lean_ctor_set(v_reuseFailAlloc_3041_, 1, v___f_2994_);
v___x_3004_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
lean_object* v___x_3005_; lean_object* v_toApplicative_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3039_; 
v___x_3005_ = l_StateRefT_x27_instMonad___redArg(v___x_3004_);
v_toApplicative_3006_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3039_ == 0)
{
lean_object* v_unused_3040_; 
v_unused_3040_ = lean_ctor_get(v___x_3005_, 1);
lean_dec(v_unused_3040_);
v___x_3008_ = v___x_3005_;
v_isShared_3009_ = v_isSharedCheck_3039_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_toApplicative_3006_);
lean_dec(v___x_3005_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3039_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v_toFunctor_3010_; lean_object* v_toSeq_3011_; lean_object* v_toSeqLeft_3012_; lean_object* v_toSeqRight_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3037_; 
v_toFunctor_3010_ = lean_ctor_get(v_toApplicative_3006_, 0);
v_toSeq_3011_ = lean_ctor_get(v_toApplicative_3006_, 2);
v_toSeqLeft_3012_ = lean_ctor_get(v_toApplicative_3006_, 3);
v_toSeqRight_3013_ = lean_ctor_get(v_toApplicative_3006_, 4);
v_isSharedCheck_3037_ = !lean_is_exclusive(v_toApplicative_3006_);
if (v_isSharedCheck_3037_ == 0)
{
lean_object* v_unused_3038_; 
v_unused_3038_ = lean_ctor_get(v_toApplicative_3006_, 1);
lean_dec(v_unused_3038_);
v___x_3015_ = v_toApplicative_3006_;
v_isShared_3016_ = v_isSharedCheck_3037_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_toSeqRight_3013_);
lean_inc(v_toSeqLeft_3012_);
lean_inc(v_toSeq_3011_);
lean_inc(v_toFunctor_3010_);
lean_dec(v_toApplicative_3006_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3037_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v___f_3017_; lean_object* v___f_3018_; lean_object* v___f_3019_; lean_object* v___f_3020_; lean_object* v___x_3021_; lean_object* v___f_3022_; lean_object* v___f_3023_; lean_object* v___f_3024_; lean_object* v___x_3026_; 
v___f_3017_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__8));
v___f_3018_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__9));
lean_inc_ref(v_toFunctor_3010_);
v___f_3019_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3019_, 0, v_toFunctor_3010_);
v___f_3020_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3020_, 0, v_toFunctor_3010_);
v___x_3021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___f_3019_);
lean_ctor_set(v___x_3021_, 1, v___f_3020_);
v___f_3022_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3022_, 0, v_toSeqRight_3013_);
v___f_3023_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3023_, 0, v_toSeqLeft_3012_);
v___f_3024_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3024_, 0, v_toSeq_3011_);
if (v_isShared_3016_ == 0)
{
lean_ctor_set(v___x_3015_, 4, v___f_3022_);
lean_ctor_set(v___x_3015_, 3, v___f_3023_);
lean_ctor_set(v___x_3015_, 2, v___f_3024_);
lean_ctor_set(v___x_3015_, 1, v___f_3017_);
lean_ctor_set(v___x_3015_, 0, v___x_3021_);
v___x_3026_ = v___x_3015_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v___x_3021_);
lean_ctor_set(v_reuseFailAlloc_3036_, 1, v___f_3017_);
lean_ctor_set(v_reuseFailAlloc_3036_, 2, v___f_3024_);
lean_ctor_set(v_reuseFailAlloc_3036_, 3, v___f_3023_);
lean_ctor_set(v_reuseFailAlloc_3036_, 4, v___f_3022_);
v___x_3026_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
lean_object* v___x_3028_; 
if (v_isShared_3009_ == 0)
{
lean_ctor_set(v___x_3008_, 1, v___f_3018_);
lean_ctor_set(v___x_3008_, 0, v___x_3026_);
v___x_3028_ = v___x_3008_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v___x_3026_);
lean_ctor_set(v_reuseFailAlloc_3035_, 1, v___f_3018_);
v___x_3028_ = v_reuseFailAlloc_3035_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_1073__overap_3033_; lean_object* v___x_3034_; 
v___x_3029_ = l_StateRefT_x27_instMonad___redArg(v___x_3028_);
v___x_3030_ = l_ReaderT_instMonad___redArg(v___x_3029_);
v___x_3031_ = lean_box(0);
v___x_3032_ = l_instInhabitedOfMonad___redArg(v___x_3030_, v___x_3031_);
v___x_1073__overap_3033_ = lean_panic_fn_borrowed(v___x_3032_, v_msg_2962_);
lean_dec(v___x_3032_);
lean_inc(v___y_2968_);
lean_inc_ref(v___y_2967_);
lean_inc(v___y_2966_);
lean_inc_ref(v___y_2965_);
lean_inc(v___y_2964_);
lean_inc_ref(v___y_2963_);
v___x_3034_ = lean_apply_7(v___x_1073__overap_3033_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_, lean_box(0));
return v___x_3034_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_){
_start:
{
lean_object* v_res_3055_; 
v_res_3055_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0_spec__1(v_msg_3047_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_);
lean_dec(v___y_3053_);
lean_dec_ref(v___y_3052_);
lean_dec(v___y_3051_);
lean_dec_ref(v___y_3050_);
lean_dec(v___y_3049_);
lean_dec_ref(v___y_3048_);
return v_res_3055_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; 
v___x_3058_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__2));
v___x_3059_ = lean_unsigned_to_nat(40u);
v___x_3060_ = lean_unsigned_to_nat(49u);
v___x_3061_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__1));
v___x_3062_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__0));
v___x_3063_ = l_mkPanicMessageWithDecl(v___x_3062_, v___x_3061_, v___x_3060_, v___x_3059_, v___x_3058_);
return v___x_3063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0(lean_object* v_f_3064_, lean_object* v_e_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_){
_start:
{
lean_object* v_ty_3074_; lean_object* v_body_3075_; uint8_t v___x_3078_; 
v___x_3078_ = l_Lean_Expr_hasFVar(v_e_3065_);
if (v___x_3078_ == 0)
{
lean_object* v___x_3079_; lean_object* v___x_3080_; 
lean_dec_ref(v_e_3065_);
lean_dec_ref(v_f_3064_);
v___x_3079_ = lean_box(0);
v___x_3080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3079_);
return v___x_3080_;
}
else
{
switch(lean_obj_tag(v_e_3065_))
{
case 1:
{
lean_object* v_fvarId_3081_; lean_object* v___x_3082_; 
v_fvarId_3081_ = lean_ctor_get(v_e_3065_, 0);
lean_inc(v_fvarId_3081_);
lean_dec_ref_known(v_e_3065_, 1);
lean_inc(v___y_3071_);
lean_inc_ref(v___y_3070_);
lean_inc(v___y_3069_);
lean_inc_ref(v___y_3068_);
lean_inc(v___y_3067_);
lean_inc_ref(v___y_3066_);
v___x_3082_ = lean_apply_8(v_f_3064_, v_fvarId_3081_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, lean_box(0));
return v___x_3082_;
}
case 2:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; 
lean_dec_ref_known(v_e_3065_, 1);
lean_dec_ref(v_f_3064_);
v___x_3083_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2);
v___x_3084_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0_spec__1(v___x_3083_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
return v___x_3084_;
}
case 5:
{
lean_object* v_fn_3085_; lean_object* v_arg_3086_; lean_object* v___x_3087_; 
v_fn_3085_ = lean_ctor_get(v_e_3065_, 0);
lean_inc_ref(v_fn_3085_);
v_arg_3086_ = lean_ctor_get(v_e_3065_, 1);
lean_inc_ref(v_arg_3086_);
lean_dec_ref_known(v_e_3065_, 2);
lean_inc_ref(v_f_3064_);
v___x_3087_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0(v_f_3064_, v_fn_3085_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_dec_ref_known(v___x_3087_, 1);
v_e_3065_ = v_arg_3086_;
goto _start;
}
else
{
lean_dec_ref(v_arg_3086_);
lean_dec_ref(v_f_3064_);
return v___x_3087_;
}
}
case 6:
{
lean_object* v_binderType_3089_; lean_object* v_body_3090_; 
v_binderType_3089_ = lean_ctor_get(v_e_3065_, 1);
lean_inc_ref(v_binderType_3089_);
v_body_3090_ = lean_ctor_get(v_e_3065_, 2);
lean_inc_ref(v_body_3090_);
lean_dec_ref_known(v_e_3065_, 3);
v_ty_3074_ = v_binderType_3089_;
v_body_3075_ = v_body_3090_;
goto v___jp_3073_;
}
case 7:
{
lean_object* v_binderType_3091_; lean_object* v_body_3092_; 
v_binderType_3091_ = lean_ctor_get(v_e_3065_, 1);
lean_inc_ref(v_binderType_3091_);
v_body_3092_ = lean_ctor_get(v_e_3065_, 2);
lean_inc_ref(v_body_3092_);
lean_dec_ref_known(v_e_3065_, 3);
v_ty_3074_ = v_binderType_3091_;
v_body_3075_ = v_body_3092_;
goto v___jp_3073_;
}
case 8:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
lean_dec_ref_known(v_e_3065_, 4);
lean_dec_ref(v_f_3064_);
v___x_3093_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2);
v___x_3094_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0_spec__1(v___x_3093_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
return v___x_3094_;
}
case 11:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
lean_dec_ref_known(v_e_3065_, 3);
lean_dec_ref(v_f_3064_);
v___x_3095_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___closed__2);
v___x_3096_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0_spec__1(v___x_3095_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
return v___x_3096_;
}
default: 
{
lean_object* v___x_3097_; lean_object* v___x_3098_; 
lean_dec_ref(v_e_3065_);
lean_dec_ref(v_f_3064_);
v___x_3097_ = lean_box(0);
v___x_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3097_);
return v___x_3098_;
}
}
}
v___jp_3073_:
{
lean_object* v___x_3076_; 
lean_inc_ref(v_f_3064_);
v___x_3076_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0(v_f_3064_, v_ty_3074_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_);
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_dec_ref_known(v___x_3076_, 1);
v_e_3065_ = v_body_3075_;
goto _start;
}
else
{
lean_dec_ref(v_body_3075_);
lean_dec_ref(v_f_3064_);
return v___x_3076_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0___boxed(lean_object* v_f_3099_, lean_object* v_e_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_){
_start:
{
lean_object* v_res_3108_; 
v_res_3108_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0(v_f_3099_, v_e_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_);
lean_dec(v___y_3106_);
lean_dec_ref(v___y_3105_);
lean_dec(v___y_3104_);
lean_dec_ref(v___y_3103_);
lean_dec(v___y_3102_);
lean_dec_ref(v___y_3101_);
return v_res_3108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0___redArg(lean_object* v_f_3109_, lean_object* v_arg_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_){
_start:
{
switch(lean_obj_tag(v_arg_3110_))
{
case 0:
{
lean_object* v___x_3118_; lean_object* v___x_3119_; 
lean_dec_ref(v_f_3109_);
v___x_3118_ = lean_box(0);
v___x_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
return v___x_3119_;
}
case 1:
{
lean_object* v_fvarId_3120_; lean_object* v___x_3121_; 
v_fvarId_3120_ = lean_ctor_get(v_arg_3110_, 0);
lean_inc(v_fvarId_3120_);
lean_dec_ref_known(v_arg_3110_, 1);
lean_inc(v___y_3116_);
lean_inc_ref(v___y_3115_);
lean_inc(v___y_3114_);
lean_inc_ref(v___y_3113_);
lean_inc(v___y_3112_);
lean_inc_ref(v___y_3111_);
v___x_3121_ = lean_apply_8(v_f_3109_, v_fvarId_3120_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, lean_box(0));
return v___x_3121_;
}
default: 
{
lean_object* v_expr_3122_; lean_object* v___x_3123_; 
v_expr_3122_ = lean_ctor_get(v_arg_3110_, 0);
lean_inc_ref(v_expr_3122_);
lean_dec_ref_known(v_arg_3110_, 1);
v___x_3123_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0_spec__0(v_f_3109_, v_expr_3122_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3123_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0___redArg___boxed(lean_object* v_f_3124_, lean_object* v_arg_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_){
_start:
{
lean_object* v_res_3133_; 
v_res_3133_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0___redArg(v_f_3124_, v_arg_3125_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_);
lean_dec(v___y_3131_);
lean_dec_ref(v___y_3130_);
lean_dec(v___y_3129_);
lean_dec_ref(v___y_3128_);
lean_dec(v___y_3127_);
lean_dec_ref(v___y_3126_);
return v_res_3133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg(lean_object* v_reason_3134_, lean_object* v_a_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_){
_start:
{
lean_object* v___f_3143_; lean_object* v___x_3144_; 
v___f_3143_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3143_, 0, v_reason_3134_);
v___x_3144_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0___redArg(v___f_3143_, v_a_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_);
return v___x_3144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg___boxed(lean_object* v_reason_3145_, lean_object* v_a_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_){
_start:
{
lean_object* v_res_3154_; 
v_res_3154_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg(v_reason_3145_, v_a_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v___y_3150_);
lean_dec_ref(v___y_3149_);
lean_dec(v___y_3148_);
lean_dec_ref(v___y_3147_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0(uint8_t v_pu_3155_, lean_object* v_f_3156_, lean_object* v_arg_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v___x_3165_; 
v___x_3165_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0___redArg(v_f_3156_, v_arg_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0___boxed(lean_object* v_pu_3166_, lean_object* v_f_3167_, lean_object* v_arg_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_){
_start:
{
uint8_t v_pu_boxed_3176_; lean_object* v_res_3177_; 
v_pu_boxed_3176_ = lean_unbox(v_pu_3166_);
v_res_3177_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg_spec__0(v_pu_boxed_3176_, v_f_3167_, v_arg_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_);
lean_dec(v___y_3174_);
lean_dec_ref(v___y_3173_);
lean_dec(v___y_3172_);
lean_dec_ref(v___y_3171_);
lean_dec(v___y_3170_);
lean_dec_ref(v___y_3169_);
return v_res_3177_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0___redArg(lean_object* v_upperBound_3178_, lean_object* v_ps_3179_, lean_object* v_args_3180_, lean_object* v_reason_3181_, lean_object* v_a_3182_, lean_object* v_b_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_){
_start:
{
lean_object* v_a_3192_; uint8_t v___x_3196_; 
v___x_3196_ = lean_nat_dec_lt(v_a_3182_, v_upperBound_3178_);
if (v___x_3196_ == 0)
{
lean_object* v___x_3197_; 
lean_dec(v_a_3182_);
lean_dec(v_reason_3181_);
v___x_3197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3197_, 0, v_b_3183_);
return v___x_3197_;
}
else
{
lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v_type_3200_; uint8_t v_borrow_3201_; lean_object* v___x_3202_; 
v___x_3198_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs_spec__0___redArg___closed__0);
v___x_3199_ = lean_array_get_borrowed(v___x_3198_, v_ps_3179_, v_a_3182_);
v_type_3200_ = lean_ctor_get(v___x_3199_, 2);
v_borrow_3201_ = lean_ctor_get_uint8(v___x_3199_, sizeof(void*)*3);
v___x_3202_ = lean_box(0);
if (v_borrow_3201_ == 0)
{
uint8_t v___x_3203_; 
v___x_3203_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isScalar(v_type_3200_);
if (v___x_3203_ == 0)
{
lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3204_ = lean_array_fget_borrowed(v_args_3180_, v_a_3182_);
lean_inc(v___x_3204_);
lean_inc(v_reason_3181_);
v___x_3205_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg(v_reason_3181_, v___x_3204_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_dec_ref_known(v___x_3205_, 1);
v_a_3192_ = v___x_3202_;
goto v___jp_3191_;
}
else
{
lean_dec(v_a_3182_);
lean_dec(v_reason_3181_);
return v___x_3205_;
}
}
else
{
v_a_3192_ = v___x_3202_;
goto v___jp_3191_;
}
}
else
{
v_a_3192_ = v___x_3202_;
goto v___jp_3191_;
}
}
v___jp_3191_:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = lean_unsigned_to_nat(1u);
v___x_3194_ = lean_nat_add(v_a_3182_, v___x_3193_);
lean_dec(v_a_3182_);
v_a_3182_ = v___x_3194_;
v_b_3183_ = v_a_3192_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0___redArg___boxed(lean_object* v_upperBound_3206_, lean_object* v_ps_3207_, lean_object* v_args_3208_, lean_object* v_reason_3209_, lean_object* v_a_3210_, lean_object* v_b_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v_res_3219_; 
v_res_3219_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0___redArg(v_upperBound_3206_, v_ps_3207_, v_args_3208_, v_reason_3209_, v_a_3210_, v_b_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
lean_dec(v___y_3217_);
lean_dec_ref(v___y_3216_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
lean_dec(v___y_3213_);
lean_dec_ref(v___y_3212_);
lean_dec_ref(v_args_3208_);
lean_dec_ref(v_ps_3207_);
lean_dec(v_upperBound_3206_);
return v_res_3219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams(lean_object* v_args_3220_, lean_object* v_ps_3221_, lean_object* v_reason_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_){
_start:
{
lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3230_ = lean_unsigned_to_nat(0u);
v___x_3231_ = lean_array_get_size(v_args_3220_);
v___x_3232_ = lean_box(0);
v___x_3233_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0___redArg(v___x_3231_, v_ps_3221_, v_args_3220_, v_reason_3222_, v___x_3230_, v___x_3232_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3240_; 
v_isSharedCheck_3240_ = !lean_is_exclusive(v___x_3233_);
if (v_isSharedCheck_3240_ == 0)
{
lean_object* v_unused_3241_; 
v_unused_3241_ = lean_ctor_get(v___x_3233_, 0);
lean_dec(v_unused_3241_);
v___x_3235_ = v___x_3233_;
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
else
{
lean_dec(v___x_3233_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3240_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3238_; 
if (v_isShared_3236_ == 0)
{
lean_ctor_set(v___x_3235_, 0, v___x_3232_);
v___x_3238_ = v___x_3235_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v___x_3232_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
else
{
return v___x_3233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams___boxed(lean_object* v_args_3242_, lean_object* v_ps_3243_, lean_object* v_reason_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_){
_start:
{
lean_object* v_res_3252_; 
v_res_3252_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams(v_args_3242_, v_ps_3243_, v_reason_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_);
lean_dec(v___y_3250_);
lean_dec_ref(v___y_3249_);
lean_dec(v___y_3248_);
lean_dec_ref(v___y_3247_);
lean_dec(v___y_3246_);
lean_dec_ref(v___y_3245_);
lean_dec_ref(v_ps_3243_);
lean_dec_ref(v_args_3242_);
return v_res_3252_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0(lean_object* v_upperBound_3253_, lean_object* v_ps_3254_, lean_object* v_args_3255_, lean_object* v_reason_3256_, lean_object* v_inst_3257_, lean_object* v_R_3258_, lean_object* v_a_3259_, lean_object* v_b_3260_, lean_object* v_c_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_){
_start:
{
lean_object* v___x_3269_; 
v___x_3269_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0___redArg(v_upperBound_3253_, v_ps_3254_, v_args_3255_, v_reason_3256_, v_a_3259_, v_b_3260_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0___boxed(lean_object* v_upperBound_3270_, lean_object* v_ps_3271_, lean_object* v_args_3272_, lean_object* v_reason_3273_, lean_object* v_inst_3274_, lean_object* v_R_3275_, lean_object* v_a_3276_, lean_object* v_b_3277_, lean_object* v_c_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_){
_start:
{
lean_object* v_res_3286_; 
v_res_3286_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams_spec__0(v_upperBound_3270_, v_ps_3271_, v_args_3272_, v_reason_3273_, v_inst_3274_, v_R_3275_, v_a_3276_, v_b_3277_, v_c_3278_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_);
lean_dec(v___y_3284_);
lean_dec_ref(v___y_3283_);
lean_dec(v___y_3282_);
lean_dec_ref(v___y_3281_);
lean_dec(v___y_3280_);
lean_dec_ref(v___y_3279_);
lean_dec_ref(v_args_3272_);
lean_dec_ref(v_ps_3271_);
lean_dec(v_upperBound_3270_);
return v_res_3286_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0___redArg(lean_object* v_msg_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_){
_start:
{
lean_object* v_toCold_3293_; lean_object* v_ref_3294_; lean_object* v___x_3295_; lean_object* v_env_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
v_toCold_3293_ = lean_ctor_get(v___y_3290_, 0);
v_ref_3294_ = lean_ctor_get(v___y_3290_, 2);
v___x_3295_ = lean_st_ref_get(v___y_3291_);
v_env_3296_ = lean_ctor_get(v___x_3295_, 0);
lean_inc_ref(v_env_3296_);
lean_dec(v___x_3295_);
v___x_3297_ = lean_st_ref_get(v___y_3289_);
v___x_3298_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_3288_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v_a_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3321_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3301_ = v___x_3298_;
v_isShared_3302_ = v_isSharedCheck_3321_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_a_3299_);
lean_dec(v___x_3298_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3321_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v_lctx_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3319_; 
v_lctx_3303_ = lean_ctor_get(v___x_3297_, 0);
v_isSharedCheck_3319_ = !lean_is_exclusive(v___x_3297_);
if (v_isSharedCheck_3319_ == 0)
{
lean_object* v_unused_3320_; 
v_unused_3320_ = lean_ctor_get(v___x_3297_, 1);
lean_dec(v_unused_3320_);
v___x_3305_ = v___x_3297_;
v_isShared_3306_ = v_isSharedCheck_3319_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_lctx_3303_);
lean_dec(v___x_3297_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3319_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
lean_object* v_options_3307_; uint8_t v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3313_; 
v_options_3307_ = lean_ctor_get(v_toCold_3293_, 2);
v___x_3308_ = lean_unbox(v_a_3299_);
lean_dec(v_a_3299_);
v___x_3309_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_3303_, v___x_3308_);
lean_dec_ref(v_lctx_3303_);
v___x_3310_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__2, &l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar_spec__0___redArg___closed__2);
lean_inc_ref(v_options_3307_);
v___x_3311_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3311_, 0, v_env_3296_);
lean_ctor_set(v___x_3311_, 1, v___x_3310_);
lean_ctor_set(v___x_3311_, 2, v___x_3309_);
lean_ctor_set(v___x_3311_, 3, v_options_3307_);
if (v_isShared_3306_ == 0)
{
lean_ctor_set_tag(v___x_3305_, 3);
lean_ctor_set(v___x_3305_, 1, v_msg_3287_);
lean_ctor_set(v___x_3305_, 0, v___x_3311_);
v___x_3313_ = v___x_3305_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3318_; 
v_reuseFailAlloc_3318_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3318_, 0, v___x_3311_);
lean_ctor_set(v_reuseFailAlloc_3318_, 1, v_msg_3287_);
v___x_3313_ = v_reuseFailAlloc_3318_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
lean_object* v___x_3314_; lean_object* v___x_3316_; 
lean_inc(v_ref_3294_);
v___x_3314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3314_, 0, v_ref_3294_);
lean_ctor_set(v___x_3314_, 1, v___x_3313_);
if (v_isShared_3302_ == 0)
{
lean_ctor_set_tag(v___x_3301_, 1);
lean_ctor_set(v___x_3301_, 0, v___x_3314_);
v___x_3316_ = v___x_3301_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v___x_3314_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
}
}
else
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3329_; 
lean_dec(v___x_3297_);
lean_dec_ref(v_env_3296_);
lean_dec_ref(v_msg_3287_);
v_a_3322_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3324_ = v___x_3298_;
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3298_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3327_; 
if (v_isShared_3325_ == 0)
{
v___x_3327_ = v___x_3324_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v_a_3322_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
return v___x_3327_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0___redArg___boxed(lean_object* v_msg_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_){
_start:
{
lean_object* v_res_3336_; 
v_res_3336_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0___redArg(v_msg_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
lean_dec(v___y_3334_);
lean_dec_ref(v___y_3333_);
lean_dec(v___y_3332_);
lean_dec_ref(v___y_3331_);
return v_res_3336_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0(lean_object* v_00_u03b1_3337_, lean_object* v_msg_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_){
_start:
{
lean_object* v___x_3346_; 
v___x_3346_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0___redArg(v_msg_3338_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_);
return v___x_3346_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0___boxed(lean_object* v_00_u03b1_3347_, lean_object* v_msg_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0(v_00_u03b1_3347_, v_msg_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_, v___y_3354_);
lean_dec(v___y_3354_);
lean_dec_ref(v___y_3353_);
lean_dec(v___y_3352_);
lean_dec_ref(v___y_3351_);
lean_dec(v___y_3350_);
lean_dec_ref(v___y_3349_);
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__1(lean_object* v_msg_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_){
_start:
{
lean_object* v___f_3365_; lean_object* v___f_3366_; lean_object* v___f_3367_; lean_object* v___f_3368_; lean_object* v___f_3369_; lean_object* v___f_3370_; lean_object* v___f_3371_; lean_object* v___f_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v_toApplicative_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3440_; 
v___f_3365_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__0));
v___f_3366_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__1));
v___f_3367_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__2));
v___f_3368_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__3));
v___f_3369_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__4));
v___f_3370_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_3370_, 0, v___f_3369_);
lean_closure_set(v___f_3370_, 1, v___f_3368_);
v___f_3371_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_3371_, 0, v___f_3368_);
v___f_3372_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__5));
v___x_3373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3373_, 0, v___f_3365_);
lean_ctor_set(v___x_3373_, 1, v___f_3366_);
v___x_3374_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3374_, 0, v___x_3373_);
lean_ctor_set(v___x_3374_, 1, v___f_3367_);
lean_ctor_set(v___x_3374_, 2, v___f_3370_);
lean_ctor_set(v___x_3374_, 3, v___f_3371_);
lean_ctor_set(v___x_3374_, 4, v___f_3372_);
v___x_3375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3374_);
lean_ctor_set(v___x_3375_, 1, v___f_3368_);
v___x_3376_ = l_StateRefT_x27_instMonad___redArg(v___x_3375_);
v_toApplicative_3377_ = lean_ctor_get(v___x_3376_, 0);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3376_);
if (v_isSharedCheck_3440_ == 0)
{
lean_object* v_unused_3441_; 
v_unused_3441_ = lean_ctor_get(v___x_3376_, 1);
lean_dec(v_unused_3441_);
v___x_3379_ = v___x_3376_;
v_isShared_3380_ = v_isSharedCheck_3440_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_toApplicative_3377_);
lean_dec(v___x_3376_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3440_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v_toFunctor_3381_; lean_object* v_toSeq_3382_; lean_object* v_toSeqLeft_3383_; lean_object* v_toSeqRight_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3438_; 
v_toFunctor_3381_ = lean_ctor_get(v_toApplicative_3377_, 0);
v_toSeq_3382_ = lean_ctor_get(v_toApplicative_3377_, 2);
v_toSeqLeft_3383_ = lean_ctor_get(v_toApplicative_3377_, 3);
v_toSeqRight_3384_ = lean_ctor_get(v_toApplicative_3377_, 4);
v_isSharedCheck_3438_ = !lean_is_exclusive(v_toApplicative_3377_);
if (v_isSharedCheck_3438_ == 0)
{
lean_object* v_unused_3439_; 
v_unused_3439_ = lean_ctor_get(v_toApplicative_3377_, 1);
lean_dec(v_unused_3439_);
v___x_3386_ = v_toApplicative_3377_;
v_isShared_3387_ = v_isSharedCheck_3438_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_toSeqRight_3384_);
lean_inc(v_toSeqLeft_3383_);
lean_inc(v_toSeq_3382_);
lean_inc(v_toFunctor_3381_);
lean_dec(v_toApplicative_3377_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3438_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v___f_3388_; lean_object* v___f_3389_; lean_object* v___f_3390_; lean_object* v___f_3391_; lean_object* v___x_3392_; lean_object* v___f_3393_; lean_object* v___f_3394_; lean_object* v___f_3395_; lean_object* v___x_3397_; 
v___f_3388_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__6));
v___f_3389_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__7));
lean_inc_ref(v_toFunctor_3381_);
v___f_3390_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3390_, 0, v_toFunctor_3381_);
v___f_3391_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3391_, 0, v_toFunctor_3381_);
v___x_3392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3392_, 0, v___f_3390_);
lean_ctor_set(v___x_3392_, 1, v___f_3391_);
v___f_3393_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3393_, 0, v_toSeqRight_3384_);
v___f_3394_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3394_, 0, v_toSeqLeft_3383_);
v___f_3395_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3395_, 0, v_toSeq_3382_);
if (v_isShared_3387_ == 0)
{
lean_ctor_set(v___x_3386_, 4, v___f_3393_);
lean_ctor_set(v___x_3386_, 3, v___f_3394_);
lean_ctor_set(v___x_3386_, 2, v___f_3395_);
lean_ctor_set(v___x_3386_, 1, v___f_3388_);
lean_ctor_set(v___x_3386_, 0, v___x_3392_);
v___x_3397_ = v___x_3386_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v___x_3392_);
lean_ctor_set(v_reuseFailAlloc_3437_, 1, v___f_3388_);
lean_ctor_set(v_reuseFailAlloc_3437_, 2, v___f_3395_);
lean_ctor_set(v_reuseFailAlloc_3437_, 3, v___f_3394_);
lean_ctor_set(v_reuseFailAlloc_3437_, 4, v___f_3393_);
v___x_3397_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
lean_object* v___x_3399_; 
if (v_isShared_3380_ == 0)
{
lean_ctor_set(v___x_3379_, 1, v___f_3389_);
lean_ctor_set(v___x_3379_, 0, v___x_3397_);
v___x_3399_ = v___x_3379_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v___x_3397_);
lean_ctor_set(v_reuseFailAlloc_3436_, 1, v___f_3389_);
v___x_3399_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
lean_object* v___x_3400_; lean_object* v_toApplicative_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3434_; 
v___x_3400_ = l_StateRefT_x27_instMonad___redArg(v___x_3399_);
v_toApplicative_3401_ = lean_ctor_get(v___x_3400_, 0);
v_isSharedCheck_3434_ = !lean_is_exclusive(v___x_3400_);
if (v_isSharedCheck_3434_ == 0)
{
lean_object* v_unused_3435_; 
v_unused_3435_ = lean_ctor_get(v___x_3400_, 1);
lean_dec(v_unused_3435_);
v___x_3403_ = v___x_3400_;
v_isShared_3404_ = v_isSharedCheck_3434_;
goto v_resetjp_3402_;
}
else
{
lean_inc(v_toApplicative_3401_);
lean_dec(v___x_3400_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3434_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v_toFunctor_3405_; lean_object* v_toSeq_3406_; lean_object* v_toSeqLeft_3407_; lean_object* v_toSeqRight_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3432_; 
v_toFunctor_3405_ = lean_ctor_get(v_toApplicative_3401_, 0);
v_toSeq_3406_ = lean_ctor_get(v_toApplicative_3401_, 2);
v_toSeqLeft_3407_ = lean_ctor_get(v_toApplicative_3401_, 3);
v_toSeqRight_3408_ = lean_ctor_get(v_toApplicative_3401_, 4);
v_isSharedCheck_3432_ = !lean_is_exclusive(v_toApplicative_3401_);
if (v_isSharedCheck_3432_ == 0)
{
lean_object* v_unused_3433_; 
v_unused_3433_ = lean_ctor_get(v_toApplicative_3401_, 1);
lean_dec(v_unused_3433_);
v___x_3410_ = v_toApplicative_3401_;
v_isShared_3411_ = v_isSharedCheck_3432_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_toSeqRight_3408_);
lean_inc(v_toSeqLeft_3407_);
lean_inc(v_toSeq_3406_);
lean_inc(v_toFunctor_3405_);
lean_dec(v_toApplicative_3401_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3432_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___f_3412_; lean_object* v___f_3413_; lean_object* v___f_3414_; lean_object* v___f_3415_; lean_object* v___x_3416_; lean_object* v___f_3417_; lean_object* v___f_3418_; lean_object* v___f_3419_; lean_object* v___x_3421_; 
v___f_3412_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__8));
v___f_3413_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__9));
lean_inc_ref(v_toFunctor_3405_);
v___f_3414_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3414_, 0, v_toFunctor_3405_);
v___f_3415_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3415_, 0, v_toFunctor_3405_);
v___x_3416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3416_, 0, v___f_3414_);
lean_ctor_set(v___x_3416_, 1, v___f_3415_);
v___f_3417_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3417_, 0, v_toSeqRight_3408_);
v___f_3418_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3418_, 0, v_toSeqLeft_3407_);
v___f_3419_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3419_, 0, v_toSeq_3406_);
if (v_isShared_3411_ == 0)
{
lean_ctor_set(v___x_3410_, 4, v___f_3417_);
lean_ctor_set(v___x_3410_, 3, v___f_3418_);
lean_ctor_set(v___x_3410_, 2, v___f_3419_);
lean_ctor_set(v___x_3410_, 1, v___f_3412_);
lean_ctor_set(v___x_3410_, 0, v___x_3416_);
v___x_3421_ = v___x_3410_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v___x_3416_);
lean_ctor_set(v_reuseFailAlloc_3431_, 1, v___f_3412_);
lean_ctor_set(v_reuseFailAlloc_3431_, 2, v___f_3419_);
lean_ctor_set(v_reuseFailAlloc_3431_, 3, v___f_3418_);
lean_ctor_set(v_reuseFailAlloc_3431_, 4, v___f_3417_);
v___x_3421_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
lean_object* v___x_3423_; 
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 1, v___f_3413_);
lean_ctor_set(v___x_3403_, 0, v___x_3421_);
v___x_3423_ = v___x_3403_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v___x_3421_);
lean_ctor_set(v_reuseFailAlloc_3430_, 1, v___f_3413_);
v___x_3423_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_4272__overap_3428_; lean_object* v___x_3429_; 
v___x_3424_ = l_StateRefT_x27_instMonad___redArg(v___x_3423_);
v___x_3425_ = lean_obj_once(&l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3___closed__0, &l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3___closed__0_once, _init_l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply_go_spec__0_spec__0_spec__3___closed__0);
v___x_3426_ = l_instInhabitedOfMonad___redArg(v___x_3424_, v___x_3425_);
v___x_3427_ = l_instInhabitedReaderT___redArg(v___x_3426_);
v___x_4272__overap_3428_ = lean_panic_fn_borrowed(v___x_3427_, v_msg_3357_);
lean_dec(v___x_3427_);
lean_inc(v___y_3363_);
lean_inc_ref(v___y_3362_);
lean_inc(v___y_3361_);
lean_inc_ref(v___y_3360_);
lean_inc(v___y_3359_);
lean_inc_ref(v___y_3358_);
v___x_3429_ = lean_apply_7(v___x_4272__overap_3428_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_, v___y_3362_, v___y_3363_, lean_box(0));
return v___x_3429_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__1___boxed(lean_object* v_msg_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_){
_start:
{
lean_object* v_res_3450_; 
v_res_3450_ = l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__1(v_msg_3442_, v___y_3443_, v___y_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_);
lean_dec(v___y_3448_);
lean_dec_ref(v___y_3447_);
lean_dec(v___y_3446_);
lean_dec_ref(v___y_3445_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
return v_res_3450_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__1(void){
_start:
{
lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3452_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__0));
v___x_3453_ = l_Lean_stringToMessageData(v___x_3452_);
return v___x_3453_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__3(void){
_start:
{
lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; 
v___x_3455_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__2));
v___x_3456_ = lean_unsigned_to_nat(26u);
v___x_3457_ = lean_unsigned_to_nat(332u);
v___x_3458_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__2));
v___x_3459_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__0));
v___x_3460_ = l_mkPanicMessageWithDecl(v___x_3459_, v___x_3458_, v___x_3457_, v___x_3456_, v___x_3455_);
return v___x_3460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo(lean_object* v_k_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_){
_start:
{
lean_object* v___x_3469_; lean_object* v_paramMap_3470_; lean_object* v_map_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3512_; 
v___x_3469_ = lean_st_ref_get(v___y_3463_);
v_paramMap_3470_ = lean_ctor_get(v___x_3469_, 1);
lean_inc_ref(v_paramMap_3470_);
lean_dec(v___x_3469_);
v_map_3471_ = lean_ctor_get(v_paramMap_3470_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v_paramMap_3470_);
if (v_isSharedCheck_3512_ == 0)
{
lean_object* v_unused_3513_; 
v_unused_3513_ = lean_ctor_get(v_paramMap_3470_, 1);
lean_dec(v_unused_3513_);
v___x_3473_ = v_paramMap_3470_;
v_isShared_3474_ = v_isSharedCheck_3512_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_map_3471_);
lean_dec(v_paramMap_3470_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3512_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v___x_3475_; 
v___x_3475_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap_spec__0___redArg(v_map_3471_, v_k_3461_);
lean_dec_ref(v_map_3471_);
if (lean_obj_tag(v___x_3475_) == 0)
{
if (lean_obj_tag(v_k_3461_) == 0)
{
lean_object* v_name_3476_; lean_object* v___x_3477_; 
v_name_3476_ = lean_ctor_get(v_k_3461_, 0);
lean_inc_n(v_name_3476_, 2);
lean_dec_ref_known(v_k_3461_, 1);
v___x_3477_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_name_3476_, v___y_3467_);
if (lean_obj_tag(v___x_3477_) == 0)
{
lean_object* v_a_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3493_; 
v_a_3478_ = lean_ctor_get(v___x_3477_, 0);
v_isSharedCheck_3493_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3480_ = v___x_3477_;
v_isShared_3481_ = v_isSharedCheck_3493_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_a_3478_);
lean_dec(v___x_3477_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3493_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
if (lean_obj_tag(v_a_3478_) == 1)
{
lean_object* v_val_3482_; lean_object* v_params_3483_; lean_object* v___x_3485_; 
lean_dec(v_name_3476_);
lean_del_object(v___x_3473_);
v_val_3482_ = lean_ctor_get(v_a_3478_, 0);
lean_inc(v_val_3482_);
lean_dec_ref_known(v_a_3478_, 1);
v_params_3483_ = lean_ctor_get(v_val_3482_, 3);
lean_inc_ref(v_params_3483_);
lean_dec(v_val_3482_);
if (v_isShared_3481_ == 0)
{
lean_ctor_set(v___x_3480_, 0, v_params_3483_);
v___x_3485_ = v___x_3480_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v_params_3483_);
v___x_3485_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
return v___x_3485_;
}
}
else
{
lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3490_; 
lean_del_object(v___x_3480_);
lean_dec(v_a_3478_);
v___x_3487_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__1, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__1_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__1);
v___x_3488_ = l_Lean_MessageData_ofName(v_name_3476_);
if (v_isShared_3474_ == 0)
{
lean_ctor_set_tag(v___x_3473_, 7);
lean_ctor_set(v___x_3473_, 1, v___x_3488_);
lean_ctor_set(v___x_3473_, 0, v___x_3487_);
v___x_3490_ = v___x_3473_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v___x_3487_);
lean_ctor_set(v_reuseFailAlloc_3492_, 1, v___x_3488_);
v___x_3490_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
lean_object* v___x_3491_; 
v___x_3491_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__0___redArg(v___x_3490_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_);
return v___x_3491_;
}
}
}
}
else
{
lean_object* v_a_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3501_; 
lean_dec(v_name_3476_);
lean_del_object(v___x_3473_);
v_a_3494_ = lean_ctor_get(v___x_3477_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v___x_3477_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3496_ = v___x_3477_;
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_a_3494_);
lean_dec(v___x_3477_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v___x_3499_; 
if (v_isShared_3497_ == 0)
{
v___x_3499_ = v___x_3496_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v_a_3494_);
v___x_3499_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
return v___x_3499_;
}
}
}
}
else
{
lean_object* v___x_3502_; lean_object* v___x_3503_; 
lean_del_object(v___x_3473_);
lean_dec_ref(v_k_3461_);
v___x_3502_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__3, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__3_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___closed__3);
v___x_3503_ = l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo_spec__1(v___x_3502_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_);
return v___x_3503_;
}
}
else
{
lean_object* v_val_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3511_; 
lean_del_object(v___x_3473_);
lean_dec_ref(v_k_3461_);
v_val_3504_ = lean_ctor_get(v___x_3475_, 0);
v_isSharedCheck_3511_ = !lean_is_exclusive(v___x_3475_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3506_ = v___x_3475_;
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
else
{
lean_inc(v_val_3504_);
lean_dec(v___x_3475_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
lean_object* v___x_3509_; 
if (v_isShared_3507_ == 0)
{
lean_ctor_set_tag(v___x_3506_, 0);
v___x_3509_ = v___x_3506_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_val_3504_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo___boxed(lean_object* v_k_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_){
_start:
{
lean_object* v_res_3522_; 
v_res_3522_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo(v_k_3514_, v___y_3515_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_);
lean_dec(v___y_3520_);
lean_dec_ref(v___y_3519_);
lean_dec(v___y_3518_);
lean_dec_ref(v___y_3517_);
lean_dec(v___y_3516_);
lean_dec_ref(v___y_3515_);
return v_res_3522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_preserveTailCall(lean_object* v_x_3523_, lean_object* v_v_3524_, lean_object* v_k_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_){
_start:
{
if (lean_obj_tag(v_v_3524_) == 9)
{
lean_object* v_fn_3536_; lean_object* v_args_3537_; uint8_t v___y_3539_; 
v_fn_3536_ = lean_ctor_get(v_v_3524_, 0);
v_args_3537_ = lean_ctor_get(v_v_3524_, 1);
if (lean_obj_tag(v_k_3525_) == 5)
{
lean_object* v_fvarId_3555_; lean_object* v_currDecl_3556_; uint8_t v___x_3557_; 
v_fvarId_3555_ = lean_ctor_get(v_k_3525_, 0);
v_currDecl_3556_ = lean_ctor_get(v___y_3526_, 1);
v___x_3557_ = lean_name_eq(v_currDecl_3556_, v_fn_3536_);
if (v___x_3557_ == 0)
{
v___y_3539_ = v___x_3557_;
goto v___jp_3538_;
}
else
{
uint8_t v___x_3558_; 
v___x_3558_ = l_Lean_instBEqFVarId_beq(v_x_3523_, v_fvarId_3555_);
v___y_3539_ = v___x_3558_;
goto v___jp_3538_;
}
}
else
{
goto v___jp_3533_;
}
v___jp_3538_:
{
if (v___y_3539_ == 0)
{
lean_object* v___x_3540_; lean_object* v___x_3541_; 
v___x_3540_ = lean_box(0);
v___x_3541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3541_, 0, v___x_3540_);
return v___x_3541_;
}
else
{
lean_object* v___x_3542_; lean_object* v___x_3543_; 
lean_inc(v_fn_3536_);
v___x_3542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3542_, 0, v_fn_3536_);
v___x_3543_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo(v___x_3542_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_);
if (lean_obj_tag(v___x_3543_) == 0)
{
lean_object* v_a_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; 
v_a_3544_ = lean_ctor_get(v___x_3543_, 0);
lean_inc(v_a_3544_);
lean_dec_ref_known(v___x_3543_, 1);
lean_inc(v_fn_3536_);
v___x_3545_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_3545_, 0, v_fn_3536_);
v___x_3546_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs(v_args_3537_, v_a_3544_, v___x_3545_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_);
lean_dec(v_a_3544_);
return v___x_3546_;
}
else
{
lean_object* v_a_3547_; lean_object* v___x_3549_; uint8_t v_isShared_3550_; uint8_t v_isSharedCheck_3554_; 
v_a_3547_ = lean_ctor_get(v___x_3543_, 0);
v_isSharedCheck_3554_ = !lean_is_exclusive(v___x_3543_);
if (v_isSharedCheck_3554_ == 0)
{
v___x_3549_ = v___x_3543_;
v_isShared_3550_ = v_isSharedCheck_3554_;
goto v_resetjp_3548_;
}
else
{
lean_inc(v_a_3547_);
lean_dec(v___x_3543_);
v___x_3549_ = lean_box(0);
v_isShared_3550_ = v_isSharedCheck_3554_;
goto v_resetjp_3548_;
}
v_resetjp_3548_:
{
lean_object* v___x_3552_; 
if (v_isShared_3550_ == 0)
{
v___x_3552_ = v___x_3549_;
goto v_reusejp_3551_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v_a_3547_);
v___x_3552_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3551_;
}
v_reusejp_3551_:
{
return v___x_3552_;
}
}
}
}
}
}
else
{
goto v___jp_3533_;
}
v___jp_3533_:
{
lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3534_ = lean_box(0);
v___x_3535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3535_, 0, v___x_3534_);
return v___x_3535_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_preserveTailCall___boxed(lean_object* v_x_3559_, lean_object* v_v_3560_, lean_object* v_k_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_){
_start:
{
lean_object* v_res_3569_; 
v_res_3569_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_preserveTailCall(v_x_3559_, v_v_3560_, v_k_3561_, v___y_3562_, v___y_3563_, v___y_3564_, v___y_3565_, v___y_3566_, v___y_3567_);
lean_dec(v___y_3567_);
lean_dec_ref(v___y_3566_);
lean_dec(v___y_3565_);
lean_dec_ref(v___y_3564_);
lean_dec(v___y_3563_);
lean_dec_ref(v___y_3562_);
lean_dec_ref(v_k_3561_);
lean_dec(v_v_3560_);
lean_dec(v_x_3559_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs_spec__0(lean_object* v_reason_3570_, lean_object* v_as_3571_, size_t v_i_3572_, size_t v_stop_3573_, lean_object* v_b_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_){
_start:
{
uint8_t v___x_3582_; 
v___x_3582_ = lean_usize_dec_eq(v_i_3572_, v_stop_3573_);
if (v___x_3582_ == 0)
{
lean_object* v___x_3583_; lean_object* v___x_3584_; 
v___x_3583_ = lean_array_uget_borrowed(v_as_3571_, v_i_3572_);
lean_inc(v___x_3583_);
lean_inc(v_reason_3570_);
v___x_3584_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArg(v_reason_3570_, v___x_3583_, v___y_3575_, v___y_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
if (lean_obj_tag(v___x_3584_) == 0)
{
lean_object* v_a_3585_; size_t v___x_3586_; size_t v___x_3587_; 
v_a_3585_ = lean_ctor_get(v___x_3584_, 0);
lean_inc(v_a_3585_);
lean_dec_ref_known(v___x_3584_, 1);
v___x_3586_ = ((size_t)1ULL);
v___x_3587_ = lean_usize_add(v_i_3572_, v___x_3586_);
v_i_3572_ = v___x_3587_;
v_b_3574_ = v_a_3585_;
goto _start;
}
else
{
lean_dec(v_reason_3570_);
return v___x_3584_;
}
}
else
{
lean_object* v___x_3589_; 
lean_dec(v_reason_3570_);
v___x_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3589_, 0, v_b_3574_);
return v___x_3589_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs_spec__0___boxed(lean_object* v_reason_3590_, lean_object* v_as_3591_, lean_object* v_i_3592_, lean_object* v_stop_3593_, lean_object* v_b_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_){
_start:
{
size_t v_i_boxed_3602_; size_t v_stop_boxed_3603_; lean_object* v_res_3604_; 
v_i_boxed_3602_ = lean_unbox_usize(v_i_3592_);
lean_dec(v_i_3592_);
v_stop_boxed_3603_ = lean_unbox_usize(v_stop_3593_);
lean_dec(v_stop_3593_);
v_res_3604_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs_spec__0(v_reason_3590_, v_as_3591_, v_i_boxed_3602_, v_stop_boxed_3603_, v_b_3594_, v___y_3595_, v___y_3596_, v___y_3597_, v___y_3598_, v___y_3599_, v___y_3600_);
lean_dec(v___y_3600_);
lean_dec_ref(v___y_3599_);
lean_dec(v___y_3598_);
lean_dec_ref(v___y_3597_);
lean_dec(v___y_3596_);
lean_dec_ref(v___y_3595_);
lean_dec_ref(v_as_3591_);
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs(lean_object* v_reason_3605_, lean_object* v_as_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_){
_start:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; uint8_t v___x_3617_; 
v___x_3614_ = lean_unsigned_to_nat(0u);
v___x_3615_ = lean_array_get_size(v_as_3606_);
v___x_3616_ = lean_box(0);
v___x_3617_ = lean_nat_dec_lt(v___x_3614_, v___x_3615_);
if (v___x_3617_ == 0)
{
lean_object* v___x_3618_; 
lean_dec(v_reason_3605_);
v___x_3618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3616_);
return v___x_3618_;
}
else
{
uint8_t v___x_3619_; 
v___x_3619_ = lean_nat_dec_le(v___x_3615_, v___x_3615_);
if (v___x_3619_ == 0)
{
if (v___x_3617_ == 0)
{
lean_object* v___x_3620_; 
lean_dec(v_reason_3605_);
v___x_3620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3620_, 0, v___x_3616_);
return v___x_3620_;
}
else
{
size_t v___x_3621_; size_t v___x_3622_; lean_object* v___x_3623_; 
v___x_3621_ = ((size_t)0ULL);
v___x_3622_ = lean_usize_of_nat(v___x_3615_);
v___x_3623_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs_spec__0(v_reason_3605_, v_as_3606_, v___x_3621_, v___x_3622_, v___x_3616_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_);
return v___x_3623_;
}
}
else
{
size_t v___x_3624_; size_t v___x_3625_; lean_object* v___x_3626_; 
v___x_3624_ = ((size_t)0ULL);
v___x_3625_ = lean_usize_of_nat(v___x_3615_);
v___x_3626_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs_spec__0(v_reason_3605_, v_as_3606_, v___x_3624_, v___x_3625_, v___x_3616_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_);
return v___x_3626_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs___boxed(lean_object* v_reason_3627_, lean_object* v_as_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
lean_object* v_res_3636_; 
v_res_3636_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs(v_reason_3627_, v_as_3628_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_);
lean_dec(v___y_3634_);
lean_dec_ref(v___y_3633_);
lean_dec(v___y_3632_);
lean_dec_ref(v___y_3631_);
lean_dec(v___y_3630_);
lean_dec_ref(v___y_3629_);
lean_dec_ref(v_as_3628_);
return v_res_3636_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam_spec__0(lean_object* v_z_3637_, lean_object* v_as_3638_, size_t v_sz_3639_, size_t v_i_3640_, lean_object* v_b_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_){
_start:
{
lean_object* v_a_3650_; uint8_t v___x_3654_; 
v___x_3654_ = lean_usize_dec_lt(v_i_3640_, v_sz_3639_);
if (v___x_3654_ == 0)
{
lean_object* v___x_3655_; 
lean_dec(v_z_3637_);
v___x_3655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3655_, 0, v_b_3641_);
return v___x_3655_;
}
else
{
lean_object* v___x_3656_; lean_object* v_a_3657_; 
v___x_3656_ = lean_box(0);
v_a_3657_ = lean_array_uget(v_as_3638_, v_i_3640_);
if (lean_obj_tag(v_a_3657_) == 1)
{
lean_object* v_fvarId_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3668_; 
v_fvarId_3658_ = lean_ctor_get(v_a_3657_, 0);
v_isSharedCheck_3668_ = !lean_is_exclusive(v_a_3657_);
if (v_isSharedCheck_3668_ == 0)
{
v___x_3660_ = v_a_3657_;
v_isShared_3661_ = v_isSharedCheck_3668_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_fvarId_3658_);
lean_dec(v_a_3657_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3668_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v_paramSet_3662_; uint8_t v___x_3663_; 
v_paramSet_3662_ = lean_ctor_get(v___y_3642_, 2);
v___x_3663_ = l_Lean_FVarIdSet_contains(v_paramSet_3662_, v_fvarId_3658_);
if (v___x_3663_ == 0)
{
lean_del_object(v___x_3660_);
lean_dec(v_fvarId_3658_);
v_a_3650_ = v___x_3656_;
goto v___jp_3649_;
}
else
{
lean_object* v___x_3665_; 
lean_inc(v_z_3637_);
if (v_isShared_3661_ == 0)
{
lean_ctor_set_tag(v___x_3660_, 2);
lean_ctor_set(v___x_3660_, 0, v_z_3637_);
v___x_3665_ = v___x_3660_;
goto v_reusejp_3664_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v_z_3637_);
v___x_3665_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3664_;
}
v_reusejp_3664_:
{
lean_object* v___x_3666_; 
v___x_3666_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_fvarId_3658_, v___x_3665_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_);
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_dec_ref_known(v___x_3666_, 1);
v_a_3650_ = v___x_3656_;
goto v___jp_3649_;
}
else
{
lean_dec(v_z_3637_);
return v___x_3666_;
}
}
}
}
}
else
{
lean_dec(v_a_3657_);
v_a_3650_ = v___x_3656_;
goto v___jp_3649_;
}
}
v___jp_3649_:
{
size_t v___x_3651_; size_t v___x_3652_; 
v___x_3651_ = ((size_t)1ULL);
v___x_3652_ = lean_usize_add(v_i_3640_, v___x_3651_);
v_i_3640_ = v___x_3652_;
v_b_3641_ = v_a_3650_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam_spec__0___boxed(lean_object* v_z_3669_, lean_object* v_as_3670_, lean_object* v_sz_3671_, lean_object* v_i_3672_, lean_object* v_b_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_){
_start:
{
size_t v_sz_boxed_3681_; size_t v_i_boxed_3682_; lean_object* v_res_3683_; 
v_sz_boxed_3681_ = lean_unbox_usize(v_sz_3671_);
lean_dec(v_sz_3671_);
v_i_boxed_3682_ = lean_unbox_usize(v_i_3672_);
lean_dec(v_i_3672_);
v_res_3683_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam_spec__0(v_z_3669_, v_as_3670_, v_sz_boxed_3681_, v_i_boxed_3682_, v_b_3673_, v___y_3674_, v___y_3675_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
lean_dec(v___y_3679_);
lean_dec_ref(v___y_3678_);
lean_dec(v___y_3677_);
lean_dec_ref(v___y_3676_);
lean_dec(v___y_3675_);
lean_dec_ref(v___y_3674_);
lean_dec_ref(v_as_3670_);
return v_res_3683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam(lean_object* v_z_3684_, lean_object* v_args_3685_, lean_object* v___y_3686_, lean_object* v___y_3687_, lean_object* v___y_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_){
_start:
{
lean_object* v___x_3693_; size_t v_sz_3694_; size_t v___x_3695_; lean_object* v___x_3696_; 
v___x_3693_ = lean_box(0);
v_sz_3694_ = lean_array_size(v_args_3685_);
v___x_3695_ = ((size_t)0ULL);
v___x_3696_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam_spec__0(v_z_3684_, v_args_3685_, v_sz_3694_, v___x_3695_, v___x_3693_, v___y_3686_, v___y_3687_, v___y_3688_, v___y_3689_, v___y_3690_, v___y_3691_);
if (lean_obj_tag(v___x_3696_) == 0)
{
lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3703_; 
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3696_);
if (v_isSharedCheck_3703_ == 0)
{
lean_object* v_unused_3704_; 
v_unused_3704_ = lean_ctor_get(v___x_3696_, 0);
lean_dec(v_unused_3704_);
v___x_3698_ = v___x_3696_;
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
else
{
lean_dec(v___x_3696_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
lean_object* v___x_3701_; 
if (v_isShared_3699_ == 0)
{
lean_ctor_set(v___x_3698_, 0, v___x_3693_);
v___x_3701_ = v___x_3698_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v___x_3693_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
}
else
{
return v___x_3696_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam___boxed(lean_object* v_z_3705_, lean_object* v_args_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_){
_start:
{
lean_object* v_res_3714_; 
v_res_3714_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam(v_z_3705_, v_args_3706_, v___y_3707_, v___y_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
lean_dec(v___y_3712_);
lean_dec_ref(v___y_3711_);
lean_dec(v___y_3710_);
lean_dec_ref(v___y_3709_);
lean_dec(v___y_3708_);
lean_dec_ref(v___y_3707_);
lean_dec_ref(v_args_3706_);
return v_res_3714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue(lean_object* v_z_3719_, lean_object* v_v_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_){
_start:
{
lean_object* v_args_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3733_; lean_object* v___y_3734_; lean_object* v___y_3735_; 
switch(lean_obj_tag(v_v_3720_))
{
case 11:
{
lean_object* v_var_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; 
v_var_3761_ = lean_ctor_get(v_v_3720_, 1);
lean_inc(v_var_3761_);
lean_dec_ref_known(v_v_3720_, 2);
lean_inc(v_z_3719_);
v___x_3762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3762_, 0, v_z_3719_);
lean_inc_ref(v___x_3762_);
v___x_3763_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_z_3719_, v___x_3762_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v___x_3764_; 
lean_dec_ref_known(v___x_3763_, 1);
v___x_3764_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_var_3761_, v___x_3762_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
return v___x_3764_;
}
else
{
lean_dec_ref_known(v___x_3762_, 1);
lean_dec(v_var_3761_);
return v___x_3763_;
}
}
case 12:
{
lean_object* v_var_3765_; lean_object* v_args_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; 
v_var_3765_ = lean_ctor_get(v_v_3720_, 0);
lean_inc(v_var_3765_);
v_args_3766_ = lean_ctor_get(v_v_3720_, 2);
lean_inc_ref(v_args_3766_);
lean_dec_ref_known(v_v_3720_, 3);
lean_inc_n(v_z_3719_, 2);
v___x_3767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3767_, 0, v_z_3719_);
lean_inc_ref(v___x_3767_);
v___x_3768_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_z_3719_, v___x_3767_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
if (lean_obj_tag(v___x_3768_) == 0)
{
lean_object* v___x_3769_; 
lean_dec_ref_known(v___x_3768_, 1);
v___x_3769_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_var_3765_, v___x_3767_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
if (lean_obj_tag(v___x_3769_) == 0)
{
lean_object* v___x_3770_; 
lean_dec_ref_known(v___x_3769_, 1);
v___x_3770_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam(v_z_3719_, v_args_3766_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
lean_dec_ref(v_args_3766_);
return v___x_3770_;
}
else
{
lean_dec_ref(v_args_3766_);
lean_dec(v_z_3719_);
return v___x_3769_;
}
}
else
{
lean_dec_ref_known(v___x_3767_, 1);
lean_dec_ref(v_args_3766_);
lean_dec(v_var_3765_);
lean_dec(v_z_3719_);
return v___x_3768_;
}
}
case 6:
{
lean_object* v_var_3771_; lean_object* v___y_3773_; lean_object* v___y_3774_; lean_object* v___y_3775_; lean_object* v___y_3776_; lean_object* v___y_3777_; lean_object* v___y_3778_; lean_object* v___x_3792_; lean_object* v_a_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3802_; 
v_var_3771_ = lean_ctor_get(v_v_3720_, 1);
lean_inc(v_var_3771_);
lean_dec_ref_known(v_v_3720_, 2);
v___x_3792_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg(v_var_3771_, v___y_3722_);
v_a_3793_ = lean_ctor_get(v___x_3792_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___x_3792_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3795_ = v___x_3792_;
v_isShared_3796_ = v_isSharedCheck_3802_;
goto v_resetjp_3794_;
}
else
{
lean_inc(v_a_3793_);
lean_dec(v___x_3792_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3802_;
goto v_resetjp_3794_;
}
v___jp_3772_:
{
lean_object* v___x_3779_; lean_object* v_a_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3791_; 
v___x_3779_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg(v_z_3719_, v___y_3774_);
v_a_3780_ = lean_ctor_get(v___x_3779_, 0);
v_isSharedCheck_3791_ = !lean_is_exclusive(v___x_3779_);
if (v_isSharedCheck_3791_ == 0)
{
v___x_3782_ = v___x_3779_;
v_isShared_3783_ = v_isSharedCheck_3791_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_a_3780_);
lean_dec(v___x_3779_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3791_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
uint8_t v___x_3784_; 
v___x_3784_ = lean_unbox(v_a_3780_);
lean_dec(v_a_3780_);
if (v___x_3784_ == 0)
{
lean_object* v___x_3785_; lean_object* v___x_3787_; 
lean_dec(v_var_3771_);
lean_dec(v_z_3719_);
v___x_3785_ = lean_box(0);
if (v_isShared_3783_ == 0)
{
lean_ctor_set(v___x_3782_, 0, v___x_3785_);
v___x_3787_ = v___x_3782_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v___x_3785_);
v___x_3787_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
return v___x_3787_;
}
}
else
{
lean_object* v___x_3789_; lean_object* v___x_3790_; 
lean_del_object(v___x_3782_);
v___x_3789_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3789_, 0, v_z_3719_);
v___x_3790_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_var_3771_, v___x_3789_, v___y_3773_, v___y_3774_, v___y_3775_, v___y_3776_, v___y_3777_, v___y_3778_);
return v___x_3790_;
}
}
}
v_resetjp_3794_:
{
uint8_t v___x_3797_; 
v___x_3797_ = lean_unbox(v_a_3793_);
lean_dec(v_a_3793_);
if (v___x_3797_ == 0)
{
lean_del_object(v___x_3795_);
v___y_3773_ = v___y_3721_;
v___y_3774_ = v___y_3722_;
v___y_3775_ = v___y_3723_;
v___y_3776_ = v___y_3724_;
v___y_3777_ = v___y_3725_;
v___y_3778_ = v___y_3726_;
goto v___jp_3772_;
}
else
{
lean_object* v___x_3799_; 
lean_inc(v_z_3719_);
if (v_isShared_3796_ == 0)
{
lean_ctor_set_tag(v___x_3795_, 3);
lean_ctor_set(v___x_3795_, 0, v_z_3719_);
v___x_3799_ = v___x_3795_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_z_3719_);
v___x_3799_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
lean_object* v___x_3800_; 
lean_inc(v_z_3719_);
v___x_3800_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_z_3719_, v___x_3799_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
if (lean_obj_tag(v___x_3800_) == 0)
{
lean_dec_ref_known(v___x_3800_, 1);
v___y_3773_ = v___y_3721_;
v___y_3774_ = v___y_3722_;
v___y_3775_ = v___y_3723_;
v___y_3776_ = v___y_3724_;
v___y_3777_ = v___y_3725_;
v___y_3778_ = v___y_3726_;
goto v___jp_3772_;
}
else
{
lean_dec(v_var_3771_);
lean_dec(v_z_3719_);
return v___x_3800_;
}
}
}
}
}
case 9:
{
lean_object* v_fn_3803_; lean_object* v_args_3804_; lean_object* v___y_3806_; lean_object* v___y_3807_; lean_object* v___y_3808_; lean_object* v___y_3809_; lean_object* v___y_3810_; lean_object* v___y_3811_; lean_object* v_f_3838_; lean_object* v___y_3839_; lean_object* v___y_3840_; lean_object* v___y_3841_; lean_object* v___y_3842_; lean_object* v___y_3843_; lean_object* v___y_3844_; 
v_fn_3803_ = lean_ctor_get(v_v_3720_, 0);
lean_inc(v_fn_3803_);
v_args_3804_ = lean_ctor_get(v_v_3720_, 1);
lean_inc_ref(v_args_3804_);
lean_dec_ref_known(v_v_3720_, 2);
if (lean_obj_tag(v_fn_3803_) == 1)
{
lean_object* v_pre_3872_; 
v_pre_3872_ = lean_ctor_get(v_fn_3803_, 0);
if (lean_obj_tag(v_pre_3872_) == 1)
{
lean_object* v_pre_3873_; 
v_pre_3873_ = lean_ctor_get(v_pre_3872_, 0);
if (lean_obj_tag(v_pre_3873_) == 0)
{
lean_object* v_str_3874_; lean_object* v_str_3875_; lean_object* v___x_3876_; uint8_t v___x_3877_; 
v_str_3874_ = lean_ctor_get(v_fn_3803_, 1);
v_str_3875_ = lean_ctor_get(v_pre_3872_, 1);
v___x_3876_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__0));
v___x_3877_ = lean_string_dec_eq(v_str_3875_, v___x_3876_);
if (v___x_3877_ == 0)
{
v_f_3838_ = v_fn_3803_;
v___y_3839_ = v___y_3721_;
v___y_3840_ = v___y_3722_;
v___y_3841_ = v___y_3723_;
v___y_3842_ = v___y_3724_;
v___y_3843_ = v___y_3725_;
v___y_3844_ = v___y_3726_;
goto v___jp_3837_;
}
else
{
lean_object* v___x_3878_; uint8_t v___x_3879_; 
lean_inc_ref(v_str_3874_);
lean_inc(v_pre_3873_);
lean_dec_ref_known(v_fn_3803_, 2);
v___x_3878_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__1));
v___x_3879_ = lean_string_dec_eq(v_str_3874_, v___x_3878_);
if (v___x_3879_ == 0)
{
lean_object* v___x_3880_; uint8_t v___x_3881_; 
v___x_3880_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__2));
v___x_3881_ = lean_string_dec_eq(v_str_3874_, v___x_3880_);
if (v___x_3881_ == 0)
{
lean_object* v___x_3882_; uint8_t v___x_3883_; 
v___x_3882_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___closed__3));
v___x_3883_ = lean_string_dec_eq(v_str_3874_, v___x_3882_);
if (v___x_3883_ == 0)
{
lean_object* v___x_3884_; lean_object* v___x_3885_; 
v___x_3884_ = l_Lean_Name_str___override(v_pre_3873_, v___x_3876_);
v___x_3885_ = l_Lean_Name_str___override(v___x_3884_, v_str_3874_);
v_f_3838_ = v___x_3885_;
v___y_3839_ = v___y_3721_;
v___y_3840_ = v___y_3722_;
v___y_3841_ = v___y_3723_;
v___y_3842_ = v___y_3724_;
v___y_3843_ = v___y_3725_;
v___y_3844_ = v___y_3726_;
goto v___jp_3837_;
}
else
{
lean_dec_ref(v_str_3874_);
v_args_3729_ = v_args_3804_;
v___y_3730_ = v___y_3721_;
v___y_3731_ = v___y_3722_;
v___y_3732_ = v___y_3723_;
v___y_3733_ = v___y_3724_;
v___y_3734_ = v___y_3725_;
v___y_3735_ = v___y_3726_;
goto v___jp_3728_;
}
}
else
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; 
lean_dec_ref(v_str_3874_);
v___x_3886_ = lean_box(0);
v___x_3887_ = lean_unsigned_to_nat(1u);
v___x_3888_ = lean_array_get_borrowed(v___x_3886_, v_args_3804_, v___x_3887_);
if (lean_obj_tag(v___x_3888_) == 1)
{
lean_object* v_fvarId_3889_; lean_object* v___x_3890_; lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3900_; 
v_fvarId_3889_ = lean_ctor_get(v___x_3888_, 0);
v___x_3890_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg(v_fvarId_3889_, v___y_3722_);
v_a_3891_ = lean_ctor_get(v___x_3890_, 0);
v_isSharedCheck_3900_ = !lean_is_exclusive(v___x_3890_);
if (v_isSharedCheck_3900_ == 0)
{
v___x_3893_ = v___x_3890_;
v_isShared_3894_ = v_isSharedCheck_3900_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v___x_3890_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3900_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
uint8_t v___x_3895_; 
v___x_3895_ = lean_unbox(v_a_3891_);
lean_dec(v_a_3891_);
if (v___x_3895_ == 0)
{
lean_del_object(v___x_3893_);
v___y_3806_ = v___y_3721_;
v___y_3807_ = v___y_3722_;
v___y_3808_ = v___y_3723_;
v___y_3809_ = v___y_3724_;
v___y_3810_ = v___y_3725_;
v___y_3811_ = v___y_3726_;
goto v___jp_3805_;
}
else
{
lean_object* v___x_3897_; 
lean_inc(v_z_3719_);
if (v_isShared_3894_ == 0)
{
lean_ctor_set_tag(v___x_3893_, 3);
lean_ctor_set(v___x_3893_, 0, v_z_3719_);
v___x_3897_ = v___x_3893_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v_z_3719_);
v___x_3897_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
lean_object* v___x_3898_; 
lean_inc(v_z_3719_);
v___x_3898_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_z_3719_, v___x_3897_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_dec_ref_known(v___x_3898_, 1);
v___y_3806_ = v___y_3721_;
v___y_3807_ = v___y_3722_;
v___y_3808_ = v___y_3723_;
v___y_3809_ = v___y_3724_;
v___y_3810_ = v___y_3725_;
v___y_3811_ = v___y_3726_;
goto v___jp_3805_;
}
else
{
lean_dec_ref(v_args_3804_);
lean_dec(v_z_3719_);
return v___x_3898_;
}
}
}
}
}
else
{
v___y_3806_ = v___y_3721_;
v___y_3807_ = v___y_3722_;
v___y_3808_ = v___y_3723_;
v___y_3809_ = v___y_3724_;
v___y_3810_ = v___y_3725_;
v___y_3811_ = v___y_3726_;
goto v___jp_3805_;
}
}
}
else
{
lean_dec_ref(v_str_3874_);
v_args_3729_ = v_args_3804_;
v___y_3730_ = v___y_3721_;
v___y_3731_ = v___y_3722_;
v___y_3732_ = v___y_3723_;
v___y_3733_ = v___y_3724_;
v___y_3734_ = v___y_3725_;
v___y_3735_ = v___y_3726_;
goto v___jp_3728_;
}
}
}
else
{
v_f_3838_ = v_fn_3803_;
v___y_3839_ = v___y_3721_;
v___y_3840_ = v___y_3722_;
v___y_3841_ = v___y_3723_;
v___y_3842_ = v___y_3724_;
v___y_3843_ = v___y_3725_;
v___y_3844_ = v___y_3726_;
goto v___jp_3837_;
}
}
else
{
v_f_3838_ = v_fn_3803_;
v___y_3839_ = v___y_3721_;
v___y_3840_ = v___y_3722_;
v___y_3841_ = v___y_3723_;
v___y_3842_ = v___y_3724_;
v___y_3843_ = v___y_3725_;
v___y_3844_ = v___y_3726_;
goto v___jp_3837_;
}
}
else
{
v_f_3838_ = v_fn_3803_;
v___y_3839_ = v___y_3721_;
v___y_3840_ = v___y_3722_;
v___y_3841_ = v___y_3723_;
v___y_3842_ = v___y_3724_;
v___y_3843_ = v___y_3725_;
v___y_3844_ = v___y_3726_;
goto v___jp_3837_;
}
v___jp_3805_:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; 
v___x_3812_ = lean_box(0);
v___x_3813_ = lean_unsigned_to_nat(2u);
v___x_3814_ = lean_array_get(v___x_3812_, v_args_3804_, v___x_3813_);
lean_dec_ref(v_args_3804_);
if (lean_obj_tag(v___x_3814_) == 1)
{
lean_object* v_fvarId_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3834_; 
v_fvarId_3815_ = lean_ctor_get(v___x_3814_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v___x_3814_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3817_ = v___x_3814_;
v_isShared_3818_ = v_isSharedCheck_3834_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_fvarId_3815_);
lean_dec(v___x_3814_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3834_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v___x_3819_; lean_object* v_a_3820_; lean_object* v___x_3822_; uint8_t v_isShared_3823_; uint8_t v_isSharedCheck_3833_; 
v___x_3819_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg(v_fvarId_3815_, v___y_3807_);
lean_dec(v_fvarId_3815_);
v_a_3820_ = lean_ctor_get(v___x_3819_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v___x_3819_);
if (v_isSharedCheck_3833_ == 0)
{
v___x_3822_ = v___x_3819_;
v_isShared_3823_ = v_isSharedCheck_3833_;
goto v_resetjp_3821_;
}
else
{
lean_inc(v_a_3820_);
lean_dec(v___x_3819_);
v___x_3822_ = lean_box(0);
v_isShared_3823_ = v_isSharedCheck_3833_;
goto v_resetjp_3821_;
}
v_resetjp_3821_:
{
uint8_t v___x_3824_; 
v___x_3824_ = lean_unbox(v_a_3820_);
lean_dec(v_a_3820_);
if (v___x_3824_ == 0)
{
lean_object* v___x_3825_; lean_object* v___x_3827_; 
lean_del_object(v___x_3817_);
lean_dec(v_z_3719_);
v___x_3825_ = lean_box(0);
if (v_isShared_3823_ == 0)
{
lean_ctor_set(v___x_3822_, 0, v___x_3825_);
v___x_3827_ = v___x_3822_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v___x_3825_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
else
{
lean_object* v___x_3830_; 
lean_del_object(v___x_3822_);
lean_inc(v_z_3719_);
if (v_isShared_3818_ == 0)
{
lean_ctor_set_tag(v___x_3817_, 3);
lean_ctor_set(v___x_3817_, 0, v_z_3719_);
v___x_3830_ = v___x_3817_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v_z_3719_);
v___x_3830_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
lean_object* v___x_3831_; 
v___x_3831_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_z_3719_, v___x_3830_, v___y_3806_, v___y_3807_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_);
return v___x_3831_;
}
}
}
}
}
else
{
lean_object* v___x_3835_; lean_object* v___x_3836_; 
lean_dec(v___x_3814_);
lean_dec(v_z_3719_);
v___x_3835_ = lean_box(0);
v___x_3836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3836_, 0, v___x_3835_);
return v___x_3836_;
}
}
v___jp_3837_:
{
lean_object* v___x_3845_; lean_object* v___x_3846_; uint8_t v___x_3847_; 
v___x_3845_ = lean_unsigned_to_nat(0u);
v___x_3846_ = lean_array_get_size(v_args_3804_);
v___x_3847_ = lean_nat_dec_lt(v___x_3845_, v___x_3846_);
if (v___x_3847_ == 0)
{
lean_object* v___x_3848_; lean_object* v___x_3849_; 
lean_dec(v_f_3838_);
lean_dec_ref(v_args_3804_);
lean_dec(v_z_3719_);
v___x_3848_ = lean_box(0);
v___x_3849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3848_);
return v___x_3849_;
}
else
{
lean_object* v___x_3850_; lean_object* v___x_3851_; 
v___x_3850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3850_, 0, v_f_3838_);
v___x_3851_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo(v___x_3850_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
if (lean_obj_tag(v___x_3851_) == 0)
{
lean_object* v_a_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
v_a_3852_ = lean_ctor_get(v___x_3851_, 0);
lean_inc(v_a_3852_);
lean_dec_ref_known(v___x_3851_, 1);
lean_inc_n(v_z_3719_, 2);
v___x_3853_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3853_, 0, v_z_3719_);
v___x_3854_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_z_3719_, v___x_3853_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v___x_3856_; uint8_t v_isShared_3857_; uint8_t v_isSharedCheck_3862_; 
v_isSharedCheck_3862_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3862_ == 0)
{
lean_object* v_unused_3863_; 
v_unused_3863_ = lean_ctor_get(v___x_3854_, 0);
lean_dec(v_unused_3863_);
v___x_3856_ = v___x_3854_;
v_isShared_3857_ = v_isSharedCheck_3862_;
goto v_resetjp_3855_;
}
else
{
lean_dec(v___x_3854_);
v___x_3856_ = lean_box(0);
v_isShared_3857_ = v_isSharedCheck_3862_;
goto v_resetjp_3855_;
}
v_resetjp_3855_:
{
lean_object* v___x_3859_; 
if (v_isShared_3857_ == 0)
{
lean_ctor_set_tag(v___x_3856_, 6);
lean_ctor_set(v___x_3856_, 0, v_z_3719_);
v___x_3859_ = v___x_3856_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3861_; 
v_reuseFailAlloc_3861_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3861_, 0, v_z_3719_);
v___x_3859_ = v_reuseFailAlloc_3861_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
lean_object* v___x_3860_; 
v___x_3860_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams(v_args_3804_, v_a_3852_, v___x_3859_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
lean_dec(v_a_3852_);
lean_dec_ref(v_args_3804_);
return v___x_3860_;
}
}
}
else
{
lean_dec(v_a_3852_);
lean_dec_ref(v_args_3804_);
lean_dec(v_z_3719_);
return v___x_3854_;
}
}
else
{
lean_object* v_a_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3871_; 
lean_dec_ref(v_args_3804_);
lean_dec(v_z_3719_);
v_a_3864_ = lean_ctor_get(v___x_3851_, 0);
v_isSharedCheck_3871_ = !lean_is_exclusive(v___x_3851_);
if (v_isSharedCheck_3871_ == 0)
{
v___x_3866_ = v___x_3851_;
v_isShared_3867_ = v_isSharedCheck_3871_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_a_3864_);
lean_dec(v___x_3851_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3871_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3869_; 
if (v_isShared_3867_ == 0)
{
v___x_3869_ = v___x_3866_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v_a_3864_);
v___x_3869_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
return v___x_3869_;
}
}
}
}
}
}
case 5:
{
lean_object* v_i_3901_; lean_object* v_args_3902_; uint8_t v___x_3903_; 
v_i_3901_ = lean_ctor_get(v_v_3720_, 0);
lean_inc_ref(v_i_3901_);
v_args_3902_ = lean_ctor_get(v_v_3720_, 1);
lean_inc_ref(v_args_3902_);
lean_dec_ref_known(v_v_3720_, 2);
v___x_3903_ = l_Lean_Compiler_LCNF_CtorInfo_isScalar(v_i_3901_);
lean_dec_ref(v_i_3901_);
if (v___x_3903_ == 0)
{
lean_object* v___x_3904_; lean_object* v___x_3905_; 
lean_inc_n(v_z_3719_, 2);
v___x_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3904_, 0, v_z_3719_);
v___x_3905_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_z_3719_, v___x_3904_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
if (lean_obj_tag(v___x_3905_) == 0)
{
lean_object* v___x_3906_; 
lean_dec_ref_known(v___x_3905_, 1);
v___x_3906_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsIfParam(v_z_3719_, v_args_3902_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
lean_dec_ref(v_args_3902_);
return v___x_3906_;
}
else
{
lean_dec_ref(v_args_3902_);
lean_dec(v_z_3719_);
return v___x_3905_;
}
}
else
{
lean_object* v___x_3907_; lean_object* v___x_3908_; 
lean_dec_ref(v_args_3902_);
lean_dec(v_z_3719_);
v___x_3907_ = lean_box(0);
v___x_3908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3908_, 0, v___x_3907_);
return v___x_3908_;
}
}
case 4:
{
lean_object* v_fvarId_3909_; lean_object* v_args_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; 
v_fvarId_3909_ = lean_ctor_get(v_v_3720_, 0);
lean_inc(v_fvarId_3909_);
v_args_3910_ = lean_ctor_get(v_v_3720_, 1);
lean_inc_ref(v_args_3910_);
lean_dec_ref_known(v_v_3720_, 2);
lean_inc_n(v_z_3719_, 2);
v___x_3911_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3911_, 0, v_z_3719_);
v___x_3912_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_z_3719_, v___x_3911_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
if (lean_obj_tag(v___x_3912_) == 0)
{
lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3921_; 
v_isSharedCheck_3921_ = !lean_is_exclusive(v___x_3912_);
if (v_isSharedCheck_3921_ == 0)
{
lean_object* v_unused_3922_; 
v_unused_3922_ = lean_ctor_get(v___x_3912_, 0);
lean_dec(v_unused_3922_);
v___x_3914_ = v___x_3912_;
v_isShared_3915_ = v_isSharedCheck_3921_;
goto v_resetjp_3913_;
}
else
{
lean_dec(v___x_3912_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3921_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3917_; 
if (v_isShared_3915_ == 0)
{
lean_ctor_set_tag(v___x_3914_, 7);
lean_ctor_set(v___x_3914_, 0, v_z_3719_);
v___x_3917_ = v___x_3914_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_z_3719_);
v___x_3917_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
lean_object* v___x_3918_; 
lean_inc_ref(v___x_3917_);
v___x_3918_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_fvarId_3909_, v___x_3917_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
if (lean_obj_tag(v___x_3918_) == 0)
{
lean_object* v___x_3919_; 
lean_dec_ref_known(v___x_3918_, 1);
v___x_3919_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs(v___x_3917_, v_args_3910_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
lean_dec_ref(v_args_3910_);
return v___x_3919_;
}
else
{
lean_dec_ref(v___x_3917_);
lean_dec_ref(v_args_3910_);
return v___x_3918_;
}
}
}
}
else
{
lean_dec_ref(v_args_3910_);
lean_dec(v_fvarId_3909_);
lean_dec(v_z_3719_);
return v___x_3912_;
}
}
case 10:
{
lean_object* v_args_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v_args_3923_ = lean_ctor_get(v_v_3720_, 1);
lean_inc_ref(v_args_3923_);
lean_dec_ref_known(v_v_3720_, 2);
lean_inc_n(v_z_3719_, 2);
v___x_3924_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3924_, 0, v_z_3719_);
v___x_3925_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_z_3719_, v___x_3924_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
if (lean_obj_tag(v___x_3925_) == 0)
{
lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3933_; 
v_isSharedCheck_3933_ = !lean_is_exclusive(v___x_3925_);
if (v_isSharedCheck_3933_ == 0)
{
lean_object* v_unused_3934_; 
v_unused_3934_ = lean_ctor_get(v___x_3925_, 0);
lean_dec(v_unused_3934_);
v___x_3927_ = v___x_3925_;
v_isShared_3928_ = v_isSharedCheck_3933_;
goto v_resetjp_3926_;
}
else
{
lean_dec(v___x_3925_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3933_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3930_; 
if (v_isShared_3928_ == 0)
{
lean_ctor_set_tag(v___x_3927_, 8);
lean_ctor_set(v___x_3927_, 0, v_z_3719_);
v___x_3930_ = v___x_3927_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3932_; 
v_reuseFailAlloc_3932_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3932_, 0, v_z_3719_);
v___x_3930_ = v_reuseFailAlloc_3932_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
lean_object* v___x_3931_; 
v___x_3931_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgs(v___x_3930_, v_args_3923_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
lean_dec_ref(v_args_3923_);
return v___x_3931_;
}
}
}
else
{
lean_dec_ref(v_args_3923_);
lean_dec(v_z_3719_);
return v___x_3925_;
}
}
default: 
{
lean_object* v___x_3935_; lean_object* v___x_3936_; 
lean_dec(v_v_3720_);
lean_dec(v_z_3719_);
v___x_3935_ = lean_box(0);
v___x_3936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3936_, 0, v___x_3935_);
return v___x_3936_;
}
}
v___jp_3728_:
{
lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; 
v___x_3736_ = lean_box(0);
v___x_3737_ = lean_unsigned_to_nat(1u);
v___x_3738_ = lean_array_get(v___x_3736_, v_args_3729_, v___x_3737_);
lean_dec_ref(v_args_3729_);
if (lean_obj_tag(v___x_3738_) == 1)
{
lean_object* v_fvarId_3739_; lean_object* v___x_3741_; uint8_t v_isShared_3742_; uint8_t v_isSharedCheck_3758_; 
v_fvarId_3739_ = lean_ctor_get(v___x_3738_, 0);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___x_3738_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3741_ = v___x_3738_;
v_isShared_3742_ = v_isSharedCheck_3758_;
goto v_resetjp_3740_;
}
else
{
lean_inc(v_fvarId_3739_);
lean_dec(v___x_3738_);
v___x_3741_ = lean_box(0);
v_isShared_3742_ = v_isSharedCheck_3758_;
goto v_resetjp_3740_;
}
v_resetjp_3740_:
{
lean_object* v___x_3743_; lean_object* v_a_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3757_; 
v___x_3743_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_isOwned___redArg(v_fvarId_3739_, v___y_3731_);
lean_dec(v_fvarId_3739_);
v_a_3744_ = lean_ctor_get(v___x_3743_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3743_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3746_ = v___x_3743_;
v_isShared_3747_ = v_isSharedCheck_3757_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_a_3744_);
lean_dec(v___x_3743_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3757_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
uint8_t v___x_3748_; 
v___x_3748_ = lean_unbox(v_a_3744_);
lean_dec(v_a_3744_);
if (v___x_3748_ == 0)
{
lean_object* v___x_3749_; lean_object* v___x_3751_; 
lean_del_object(v___x_3741_);
lean_dec(v_z_3719_);
v___x_3749_ = lean_box(0);
if (v_isShared_3747_ == 0)
{
lean_ctor_set(v___x_3746_, 0, v___x_3749_);
v___x_3751_ = v___x_3746_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v___x_3749_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
return v___x_3751_;
}
}
else
{
lean_object* v___x_3754_; 
lean_del_object(v___x_3746_);
lean_inc(v_z_3719_);
if (v_isShared_3742_ == 0)
{
lean_ctor_set_tag(v___x_3741_, 3);
lean_ctor_set(v___x_3741_, 0, v_z_3719_);
v___x_3754_ = v___x_3741_;
goto v_reusejp_3753_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_z_3719_);
v___x_3754_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3753_;
}
v_reusejp_3753_:
{
lean_object* v___x_3755_; 
v___x_3755_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_z_3719_, v___x_3754_, v___y_3730_, v___y_3731_, v___y_3732_, v___y_3733_, v___y_3734_, v___y_3735_);
return v___x_3755_;
}
}
}
}
}
else
{
lean_object* v___x_3759_; lean_object* v___x_3760_; 
lean_dec(v___x_3738_);
lean_dec(v_z_3719_);
v___x_3759_ = lean_box(0);
v___x_3760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3759_);
return v___x_3760_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue___boxed(lean_object* v_z_3937_, lean_object* v_v_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_){
_start:
{
lean_object* v_res_3946_; 
v_res_3946_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue(v_z_3937_, v_v_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_);
lean_dec(v___y_3944_);
lean_dec_ref(v___y_3943_);
lean_dec(v___y_3942_);
lean_dec_ref(v___y_3941_);
lean_dec(v___y_3940_);
lean_dec_ref(v___y_3939_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0___redArg(lean_object* v_alt_3947_, lean_object* v_f_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_){
_start:
{
switch(lean_obj_tag(v_alt_3947_))
{
case 0:
{
lean_object* v_code_3956_; lean_object* v___x_3957_; 
v_code_3956_ = lean_ctor_get(v_alt_3947_, 2);
lean_inc_ref(v_code_3956_);
lean_dec_ref_known(v_alt_3947_, 3);
lean_inc(v___y_3954_);
lean_inc_ref(v___y_3953_);
lean_inc(v___y_3952_);
lean_inc_ref(v___y_3951_);
lean_inc(v___y_3950_);
lean_inc_ref(v___y_3949_);
v___x_3957_ = lean_apply_8(v_f_3948_, v_code_3956_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, lean_box(0));
return v___x_3957_;
}
case 1:
{
lean_object* v_code_3958_; lean_object* v___x_3959_; 
v_code_3958_ = lean_ctor_get(v_alt_3947_, 1);
lean_inc_ref(v_code_3958_);
lean_dec_ref_known(v_alt_3947_, 2);
lean_inc(v___y_3954_);
lean_inc_ref(v___y_3953_);
lean_inc(v___y_3952_);
lean_inc_ref(v___y_3951_);
lean_inc(v___y_3950_);
lean_inc_ref(v___y_3949_);
v___x_3959_ = lean_apply_8(v_f_3948_, v_code_3958_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, lean_box(0));
return v___x_3959_;
}
default: 
{
lean_object* v_code_3960_; lean_object* v___x_3961_; 
v_code_3960_ = lean_ctor_get(v_alt_3947_, 0);
lean_inc_ref(v_code_3960_);
lean_dec_ref_known(v_alt_3947_, 1);
lean_inc(v___y_3954_);
lean_inc_ref(v___y_3953_);
lean_inc(v___y_3952_);
lean_inc_ref(v___y_3951_);
lean_inc(v___y_3950_);
lean_inc_ref(v___y_3949_);
v___x_3961_ = lean_apply_8(v_f_3948_, v_code_3960_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, lean_box(0));
return v___x_3961_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0___redArg___boxed(lean_object* v_alt_3962_, lean_object* v_f_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_){
_start:
{
lean_object* v_res_3971_; 
v_res_3971_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0___redArg(v_alt_3962_, v_f_3963_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
lean_dec(v___y_3967_);
lean_dec_ref(v___y_3966_);
lean_dec(v___y_3965_);
lean_dec_ref(v___y_3964_);
return v_res_3971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0(uint8_t v_pu_3972_, lean_object* v_alt_3973_, lean_object* v_f_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_){
_start:
{
lean_object* v___x_3982_; 
v___x_3982_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0___redArg(v_alt_3973_, v_f_3974_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_);
return v___x_3982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0___boxed(lean_object* v_pu_3983_, lean_object* v_alt_3984_, lean_object* v_f_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_){
_start:
{
uint8_t v_pu_boxed_3993_; lean_object* v_res_3994_; 
v_pu_boxed_3993_ = lean_unbox(v_pu_3983_);
v_res_3994_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0(v_pu_boxed_3993_, v_alt_3984_, v_f_3985_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_);
lean_dec(v___y_3991_);
lean_dec_ref(v___y_3990_);
lean_dec(v___y_3989_);
lean_dec_ref(v___y_3988_);
lean_dec(v___y_3987_);
lean_dec_ref(v___y_3986_);
return v_res_3994_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__3(lean_object* v_msg_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_){
_start:
{
lean_object* v___f_4003_; lean_object* v___f_4004_; lean_object* v___f_4005_; lean_object* v___f_4006_; lean_object* v___f_4007_; lean_object* v___f_4008_; lean_object* v___f_4009_; lean_object* v___f_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v_toApplicative_4015_; lean_object* v___x_4017_; uint8_t v_isShared_4018_; uint8_t v_isSharedCheck_4078_; 
v___f_4003_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__0));
v___f_4004_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__1));
v___f_4005_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__2));
v___f_4006_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__3));
v___f_4007_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__4));
v___f_4008_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_4008_, 0, v___f_4007_);
lean_closure_set(v___f_4008_, 1, v___f_4006_);
v___f_4009_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_4009_, 0, v___f_4006_);
v___f_4010_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__5));
v___x_4011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4011_, 0, v___f_4003_);
lean_ctor_set(v___x_4011_, 1, v___f_4004_);
v___x_4012_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4012_, 0, v___x_4011_);
lean_ctor_set(v___x_4012_, 1, v___f_4005_);
lean_ctor_set(v___x_4012_, 2, v___f_4008_);
lean_ctor_set(v___x_4012_, 3, v___f_4009_);
lean_ctor_set(v___x_4012_, 4, v___f_4010_);
v___x_4013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4013_, 0, v___x_4012_);
lean_ctor_set(v___x_4013_, 1, v___f_4006_);
v___x_4014_ = l_StateRefT_x27_instMonad___redArg(v___x_4013_);
v_toApplicative_4015_ = lean_ctor_get(v___x_4014_, 0);
v_isSharedCheck_4078_ = !lean_is_exclusive(v___x_4014_);
if (v_isSharedCheck_4078_ == 0)
{
lean_object* v_unused_4079_; 
v_unused_4079_ = lean_ctor_get(v___x_4014_, 1);
lean_dec(v_unused_4079_);
v___x_4017_ = v___x_4014_;
v_isShared_4018_ = v_isSharedCheck_4078_;
goto v_resetjp_4016_;
}
else
{
lean_inc(v_toApplicative_4015_);
lean_dec(v___x_4014_);
v___x_4017_ = lean_box(0);
v_isShared_4018_ = v_isSharedCheck_4078_;
goto v_resetjp_4016_;
}
v_resetjp_4016_:
{
lean_object* v_toFunctor_4019_; lean_object* v_toSeq_4020_; lean_object* v_toSeqLeft_4021_; lean_object* v_toSeqRight_4022_; lean_object* v___x_4024_; uint8_t v_isShared_4025_; uint8_t v_isSharedCheck_4076_; 
v_toFunctor_4019_ = lean_ctor_get(v_toApplicative_4015_, 0);
v_toSeq_4020_ = lean_ctor_get(v_toApplicative_4015_, 2);
v_toSeqLeft_4021_ = lean_ctor_get(v_toApplicative_4015_, 3);
v_toSeqRight_4022_ = lean_ctor_get(v_toApplicative_4015_, 4);
v_isSharedCheck_4076_ = !lean_is_exclusive(v_toApplicative_4015_);
if (v_isSharedCheck_4076_ == 0)
{
lean_object* v_unused_4077_; 
v_unused_4077_ = lean_ctor_get(v_toApplicative_4015_, 1);
lean_dec(v_unused_4077_);
v___x_4024_ = v_toApplicative_4015_;
v_isShared_4025_ = v_isSharedCheck_4076_;
goto v_resetjp_4023_;
}
else
{
lean_inc(v_toSeqRight_4022_);
lean_inc(v_toSeqLeft_4021_);
lean_inc(v_toSeq_4020_);
lean_inc(v_toFunctor_4019_);
lean_dec(v_toApplicative_4015_);
v___x_4024_ = lean_box(0);
v_isShared_4025_ = v_isSharedCheck_4076_;
goto v_resetjp_4023_;
}
v_resetjp_4023_:
{
lean_object* v___f_4026_; lean_object* v___f_4027_; lean_object* v___f_4028_; lean_object* v___f_4029_; lean_object* v___x_4030_; lean_object* v___f_4031_; lean_object* v___f_4032_; lean_object* v___f_4033_; lean_object* v___x_4035_; 
v___f_4026_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__6));
v___f_4027_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__7));
lean_inc_ref(v_toFunctor_4019_);
v___f_4028_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4028_, 0, v_toFunctor_4019_);
v___f_4029_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4029_, 0, v_toFunctor_4019_);
v___x_4030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4030_, 0, v___f_4028_);
lean_ctor_set(v___x_4030_, 1, v___f_4029_);
v___f_4031_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4031_, 0, v_toSeqRight_4022_);
v___f_4032_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_4032_, 0, v_toSeqLeft_4021_);
v___f_4033_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_4033_, 0, v_toSeq_4020_);
if (v_isShared_4025_ == 0)
{
lean_ctor_set(v___x_4024_, 4, v___f_4031_);
lean_ctor_set(v___x_4024_, 3, v___f_4032_);
lean_ctor_set(v___x_4024_, 2, v___f_4033_);
lean_ctor_set(v___x_4024_, 1, v___f_4026_);
lean_ctor_set(v___x_4024_, 0, v___x_4030_);
v___x_4035_ = v___x_4024_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v___x_4030_);
lean_ctor_set(v_reuseFailAlloc_4075_, 1, v___f_4026_);
lean_ctor_set(v_reuseFailAlloc_4075_, 2, v___f_4033_);
lean_ctor_set(v_reuseFailAlloc_4075_, 3, v___f_4032_);
lean_ctor_set(v_reuseFailAlloc_4075_, 4, v___f_4031_);
v___x_4035_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
lean_object* v___x_4037_; 
if (v_isShared_4018_ == 0)
{
lean_ctor_set(v___x_4017_, 1, v___f_4027_);
lean_ctor_set(v___x_4017_, 0, v___x_4035_);
v___x_4037_ = v___x_4017_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v___x_4035_);
lean_ctor_set(v_reuseFailAlloc_4074_, 1, v___f_4027_);
v___x_4037_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
lean_object* v___x_4038_; lean_object* v_toApplicative_4039_; lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4072_; 
v___x_4038_ = l_StateRefT_x27_instMonad___redArg(v___x_4037_);
v_toApplicative_4039_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4072_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4072_ == 0)
{
lean_object* v_unused_4073_; 
v_unused_4073_ = lean_ctor_get(v___x_4038_, 1);
lean_dec(v_unused_4073_);
v___x_4041_ = v___x_4038_;
v_isShared_4042_ = v_isSharedCheck_4072_;
goto v_resetjp_4040_;
}
else
{
lean_inc(v_toApplicative_4039_);
lean_dec(v___x_4038_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4072_;
goto v_resetjp_4040_;
}
v_resetjp_4040_:
{
lean_object* v_toFunctor_4043_; lean_object* v_toSeq_4044_; lean_object* v_toSeqLeft_4045_; lean_object* v_toSeqRight_4046_; lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4070_; 
v_toFunctor_4043_ = lean_ctor_get(v_toApplicative_4039_, 0);
v_toSeq_4044_ = lean_ctor_get(v_toApplicative_4039_, 2);
v_toSeqLeft_4045_ = lean_ctor_get(v_toApplicative_4039_, 3);
v_toSeqRight_4046_ = lean_ctor_get(v_toApplicative_4039_, 4);
v_isSharedCheck_4070_ = !lean_is_exclusive(v_toApplicative_4039_);
if (v_isSharedCheck_4070_ == 0)
{
lean_object* v_unused_4071_; 
v_unused_4071_ = lean_ctor_get(v_toApplicative_4039_, 1);
lean_dec(v_unused_4071_);
v___x_4048_ = v_toApplicative_4039_;
v_isShared_4049_ = v_isSharedCheck_4070_;
goto v_resetjp_4047_;
}
else
{
lean_inc(v_toSeqRight_4046_);
lean_inc(v_toSeqLeft_4045_);
lean_inc(v_toSeq_4044_);
lean_inc(v_toFunctor_4043_);
lean_dec(v_toApplicative_4039_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4070_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v___f_4050_; lean_object* v___f_4051_; lean_object* v___f_4052_; lean_object* v___f_4053_; lean_object* v___x_4054_; lean_object* v___f_4055_; lean_object* v___f_4056_; lean_object* v___f_4057_; lean_object* v___x_4059_; 
v___f_4050_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__8));
v___f_4051_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode_spec__5___closed__9));
lean_inc_ref(v_toFunctor_4043_);
v___f_4052_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4052_, 0, v_toFunctor_4043_);
v___f_4053_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4053_, 0, v_toFunctor_4043_);
v___x_4054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4054_, 0, v___f_4052_);
lean_ctor_set(v___x_4054_, 1, v___f_4053_);
v___f_4055_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4055_, 0, v_toSeqRight_4046_);
v___f_4056_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_4056_, 0, v_toSeqLeft_4045_);
v___f_4057_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_4057_, 0, v_toSeq_4044_);
if (v_isShared_4049_ == 0)
{
lean_ctor_set(v___x_4048_, 4, v___f_4055_);
lean_ctor_set(v___x_4048_, 3, v___f_4056_);
lean_ctor_set(v___x_4048_, 2, v___f_4057_);
lean_ctor_set(v___x_4048_, 1, v___f_4050_);
lean_ctor_set(v___x_4048_, 0, v___x_4054_);
v___x_4059_ = v___x_4048_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v___x_4054_);
lean_ctor_set(v_reuseFailAlloc_4069_, 1, v___f_4050_);
lean_ctor_set(v_reuseFailAlloc_4069_, 2, v___f_4057_);
lean_ctor_set(v_reuseFailAlloc_4069_, 3, v___f_4056_);
lean_ctor_set(v_reuseFailAlloc_4069_, 4, v___f_4055_);
v___x_4059_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
lean_object* v___x_4061_; 
if (v_isShared_4042_ == 0)
{
lean_ctor_set(v___x_4041_, 1, v___f_4051_);
lean_ctor_set(v___x_4041_, 0, v___x_4059_);
v___x_4061_ = v___x_4041_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v___x_4059_);
lean_ctor_set(v_reuseFailAlloc_4068_, 1, v___f_4051_);
v___x_4061_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4761__overap_4066_; lean_object* v___x_4067_; 
v___x_4062_ = l_StateRefT_x27_instMonad___redArg(v___x_4061_);
v___x_4063_ = lean_box(0);
v___x_4064_ = l_instInhabitedOfMonad___redArg(v___x_4062_, v___x_4063_);
v___x_4065_ = l_instInhabitedReaderT___redArg(v___x_4064_);
v___x_4761__overap_4066_ = lean_panic_fn_borrowed(v___x_4065_, v_msg_3995_);
lean_dec(v___x_4065_);
lean_inc(v___y_4001_);
lean_inc_ref(v___y_4000_);
lean_inc(v___y_3999_);
lean_inc_ref(v___y_3998_);
lean_inc(v___y_3997_);
lean_inc_ref(v___y_3996_);
v___x_4067_ = lean_apply_7(v___x_4761__overap_4066_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, lean_box(0));
return v___x_4067_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__3___boxed(lean_object* v_msg_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v_res_4088_; 
v_res_4088_ = l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__3(v_msg_4080_, v___y_4081_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_);
lean_dec(v___y_4086_);
lean_dec_ref(v___y_4085_);
lean_dec(v___y_4084_);
lean_dec_ref(v___y_4083_);
lean_dec(v___y_4082_);
lean_dec_ref(v___y_4081_);
return v_res_4088_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__1(lean_object* v_as_4089_, size_t v_i_4090_, size_t v_stop_4091_, lean_object* v_b_4092_){
_start:
{
uint8_t v___x_4093_; 
v___x_4093_ = lean_usize_dec_eq(v_i_4090_, v_stop_4091_);
if (v___x_4093_ == 0)
{
lean_object* v___x_4094_; lean_object* v_fvarId_4095_; lean_object* v___x_4096_; size_t v___x_4097_; size_t v___x_4098_; 
v___x_4094_ = lean_array_uget_borrowed(v_as_4089_, v_i_4090_);
v_fvarId_4095_ = lean_ctor_get(v___x_4094_, 0);
lean_inc(v_fvarId_4095_);
v___x_4096_ = l_Lean_FVarIdSet_insert(v_b_4092_, v_fvarId_4095_);
v___x_4097_ = ((size_t)1ULL);
v___x_4098_ = lean_usize_add(v_i_4090_, v___x_4097_);
v_i_4090_ = v___x_4098_;
v_b_4092_ = v___x_4096_;
goto _start;
}
else
{
return v_b_4092_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__1___boxed(lean_object* v_as_4100_, lean_object* v_i_4101_, lean_object* v_stop_4102_, lean_object* v_b_4103_){
_start:
{
size_t v_i_boxed_4104_; size_t v_stop_boxed_4105_; lean_object* v_res_4106_; 
v_i_boxed_4104_ = lean_unbox_usize(v_i_4101_);
lean_dec(v_i_4101_);
v_stop_boxed_4105_ = lean_unbox_usize(v_stop_4102_);
lean_dec(v_stop_4102_);
v_res_4106_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__1(v_as_4100_, v_i_boxed_4104_, v_stop_boxed_4105_, v_b_4103_);
lean_dec_ref(v_as_4100_);
return v_res_4106_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___closed__1(void){
_start:
{
lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; 
v___x_4108_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__2));
v___x_4109_ = lean_unsigned_to_nat(61u);
v___x_4110_ = lean_unsigned_to_nat(438u);
v___x_4111_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___closed__0));
v___x_4112_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap_goCode___closed__0));
v___x_4113_ = l_mkPanicMessageWithDecl(v___x_4112_, v___x_4111_, v___x_4110_, v___x_4109_, v___x_4108_);
return v___x_4113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode(lean_object* v_code_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_){
_start:
{
switch(lean_obj_tag(v_code_4114_))
{
case 0:
{
lean_object* v_decl_4122_; lean_object* v_k_4123_; lean_object* v___x_4124_; 
v_decl_4122_ = lean_ctor_get(v_code_4114_, 0);
lean_inc_ref(v_decl_4122_);
v_k_4123_ = lean_ctor_get(v_code_4114_, 1);
lean_inc_ref_n(v_k_4123_, 2);
lean_dec_ref_known(v_code_4114_, 2);
v___x_4124_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode(v_k_4123_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
if (lean_obj_tag(v___x_4124_) == 0)
{
lean_object* v_fvarId_4125_; lean_object* v_value_4126_; lean_object* v___x_4127_; 
lean_dec_ref_known(v___x_4124_, 1);
v_fvarId_4125_ = lean_ctor_get(v_decl_4122_, 0);
lean_inc_n(v_fvarId_4125_, 2);
v_value_4126_ = lean_ctor_get(v_decl_4122_, 3);
lean_inc_n(v_value_4126_, 2);
lean_dec_ref(v_decl_4122_);
v___x_4127_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectLetValue(v_fvarId_4125_, v_value_4126_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
if (lean_obj_tag(v___x_4127_) == 0)
{
lean_object* v___x_4128_; 
lean_dec_ref_known(v___x_4127_, 1);
v___x_4128_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_preserveTailCall(v_fvarId_4125_, v_value_4126_, v_k_4123_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
lean_dec_ref(v_k_4123_);
lean_dec(v_value_4126_);
lean_dec(v_fvarId_4125_);
return v___x_4128_;
}
else
{
lean_dec(v_value_4126_);
lean_dec(v_fvarId_4125_);
lean_dec_ref(v_k_4123_);
return v___x_4127_;
}
}
else
{
lean_dec_ref(v_k_4123_);
lean_dec_ref(v_decl_4122_);
return v___x_4124_;
}
}
case 2:
{
lean_object* v_decl_4129_; lean_object* v_k_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4155_; 
v_decl_4129_ = lean_ctor_get(v_code_4114_, 0);
v_k_4130_ = lean_ctor_get(v_code_4114_, 1);
v_isSharedCheck_4155_ = !lean_is_exclusive(v_code_4114_);
if (v_isSharedCheck_4155_ == 0)
{
v___x_4132_ = v_code_4114_;
v_isShared_4133_ = v_isSharedCheck_4155_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_k_4130_);
lean_inc(v_decl_4129_);
lean_dec(v_code_4114_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4155_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v_fvarId_4134_; lean_object* v_params_4135_; lean_object* v_value_4136_; lean_object* v_decls_4137_; lean_object* v_currDecl_4138_; lean_object* v_paramSet_4139_; lean_object* v___y_4141_; lean_object* v___x_4149_; lean_object* v___x_4150_; uint8_t v___x_4151_; 
v_fvarId_4134_ = lean_ctor_get(v_decl_4129_, 0);
lean_inc(v_fvarId_4134_);
v_params_4135_ = lean_ctor_get(v_decl_4129_, 2);
lean_inc_ref(v_params_4135_);
v_value_4136_ = lean_ctor_get(v_decl_4129_, 4);
lean_inc_ref(v_value_4136_);
lean_dec_ref(v_decl_4129_);
v_decls_4137_ = lean_ctor_get(v___y_4115_, 0);
v_currDecl_4138_ = lean_ctor_get(v___y_4115_, 1);
v_paramSet_4139_ = lean_ctor_get(v___y_4115_, 2);
v___x_4149_ = lean_unsigned_to_nat(0u);
v___x_4150_ = lean_array_get_size(v_params_4135_);
v___x_4151_ = lean_nat_dec_lt(v___x_4149_, v___x_4150_);
if (v___x_4151_ == 0)
{
lean_dec_ref(v_params_4135_);
lean_inc(v_paramSet_4139_);
v___y_4141_ = v_paramSet_4139_;
goto v___jp_4140_;
}
else
{
size_t v___x_4152_; size_t v___x_4153_; lean_object* v___x_4154_; 
v___x_4152_ = ((size_t)0ULL);
v___x_4153_ = lean_usize_of_nat(v___x_4150_);
lean_inc(v_paramSet_4139_);
v___x_4154_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__1(v_params_4135_, v___x_4152_, v___x_4153_, v_paramSet_4139_);
lean_dec_ref(v_params_4135_);
v___y_4141_ = v___x_4154_;
goto v___jp_4140_;
}
v___jp_4140_:
{
lean_object* v___x_4142_; lean_object* v___x_4143_; 
lean_inc(v_currDecl_4138_);
lean_inc_ref(v_decls_4137_);
v___x_4142_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4142_, 0, v_decls_4137_);
lean_ctor_set(v___x_4142_, 1, v_currDecl_4138_);
lean_ctor_set(v___x_4142_, 2, v___y_4141_);
v___x_4143_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode(v_value_4136_, v___x_4142_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
lean_dec_ref_known(v___x_4142_, 3);
if (lean_obj_tag(v___x_4143_) == 0)
{
lean_object* v___x_4145_; 
lean_dec_ref_known(v___x_4143_, 1);
lean_inc(v_currDecl_4138_);
if (v_isShared_4133_ == 0)
{
lean_ctor_set_tag(v___x_4132_, 1);
lean_ctor_set(v___x_4132_, 1, v_fvarId_4134_);
lean_ctor_set(v___x_4132_, 0, v_currDecl_4138_);
v___x_4145_ = v___x_4132_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4148_; 
v_reuseFailAlloc_4148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4148_, 0, v_currDecl_4138_);
lean_ctor_set(v_reuseFailAlloc_4148_, 1, v_fvarId_4134_);
v___x_4145_ = v_reuseFailAlloc_4148_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
lean_object* v___x_4146_; 
v___x_4146_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap(v___x_4145_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
if (lean_obj_tag(v___x_4146_) == 0)
{
lean_dec_ref_known(v___x_4146_, 1);
v_code_4114_ = v_k_4130_;
goto _start;
}
else
{
lean_dec_ref(v_k_4130_);
return v___x_4146_;
}
}
}
else
{
lean_dec(v_fvarId_4134_);
lean_del_object(v___x_4132_);
lean_dec_ref(v_k_4130_);
return v___x_4143_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_4156_; lean_object* v_args_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4186_; 
v_fvarId_4156_ = lean_ctor_get(v_code_4114_, 0);
v_args_4157_ = lean_ctor_get(v_code_4114_, 1);
v_isSharedCheck_4186_ = !lean_is_exclusive(v_code_4114_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4159_ = v_code_4114_;
v_isShared_4160_ = v_isSharedCheck_4186_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_args_4157_);
lean_inc(v_fvarId_4156_);
lean_dec(v_code_4114_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4186_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v_currDecl_4161_; lean_object* v___x_4163_; 
v_currDecl_4161_ = lean_ctor_get(v___y_4115_, 1);
lean_inc(v_fvarId_4156_);
lean_inc(v_currDecl_4161_);
if (v_isShared_4160_ == 0)
{
lean_ctor_set_tag(v___x_4159_, 1);
lean_ctor_set(v___x_4159_, 1, v_fvarId_4156_);
lean_ctor_set(v___x_4159_, 0, v_currDecl_4161_);
v___x_4163_ = v___x_4159_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4185_; 
v_reuseFailAlloc_4185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4185_, 0, v_currDecl_4161_);
lean_ctor_set(v_reuseFailAlloc_4185_, 1, v_fvarId_4156_);
v___x_4163_ = v_reuseFailAlloc_4185_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
lean_object* v___x_4164_; 
v___x_4164_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_getParamInfo(v___x_4163_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
if (lean_obj_tag(v___x_4164_) == 0)
{
lean_object* v_a_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; 
v_a_4165_ = lean_ctor_get(v___x_4164_, 0);
lean_inc(v_a_4165_);
lean_dec_ref_known(v___x_4164_, 1);
lean_inc(v_fvarId_4156_);
v___x_4166_ = lean_alloc_ctor(10, 1, 0);
lean_ctor_set(v___x_4166_, 0, v_fvarId_4156_);
v___x_4167_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownArgsUsingParams(v_args_4157_, v_a_4165_, v___x_4166_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
if (lean_obj_tag(v___x_4167_) == 0)
{
lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4175_; 
v_isSharedCheck_4175_ = !lean_is_exclusive(v___x_4167_);
if (v_isSharedCheck_4175_ == 0)
{
lean_object* v_unused_4176_; 
v_unused_4176_ = lean_ctor_get(v___x_4167_, 0);
lean_dec(v_unused_4176_);
v___x_4169_ = v___x_4167_;
v_isShared_4170_ = v_isSharedCheck_4175_;
goto v_resetjp_4168_;
}
else
{
lean_dec(v___x_4167_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4175_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4172_; 
if (v_isShared_4170_ == 0)
{
lean_ctor_set_tag(v___x_4169_, 11);
lean_ctor_set(v___x_4169_, 0, v_fvarId_4156_);
v___x_4172_ = v___x_4169_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v_fvarId_4156_);
v___x_4172_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
lean_object* v___x_4173_; 
v___x_4173_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownParamsUsingArgs(v_args_4157_, v_a_4165_, v___x_4172_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
lean_dec(v_a_4165_);
lean_dec_ref(v_args_4157_);
return v___x_4173_;
}
}
}
else
{
lean_dec(v_a_4165_);
lean_dec_ref(v_args_4157_);
lean_dec(v_fvarId_4156_);
return v___x_4167_;
}
}
else
{
lean_object* v_a_4177_; lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4184_; 
lean_dec_ref(v_args_4157_);
lean_dec(v_fvarId_4156_);
v_a_4177_ = lean_ctor_get(v___x_4164_, 0);
v_isSharedCheck_4184_ = !lean_is_exclusive(v___x_4164_);
if (v_isSharedCheck_4184_ == 0)
{
v___x_4179_ = v___x_4164_;
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
else
{
lean_inc(v_a_4177_);
lean_dec(v___x_4164_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4184_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v___x_4182_; 
if (v_isShared_4180_ == 0)
{
v___x_4182_ = v___x_4179_;
goto v_reusejp_4181_;
}
else
{
lean_object* v_reuseFailAlloc_4183_; 
v_reuseFailAlloc_4183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4183_, 0, v_a_4177_);
v___x_4182_ = v_reuseFailAlloc_4183_;
goto v_reusejp_4181_;
}
v_reusejp_4181_:
{
return v___x_4182_;
}
}
}
}
}
}
case 4:
{
lean_object* v_cases_4187_; lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4209_; 
v_cases_4187_ = lean_ctor_get(v_code_4114_, 0);
v_isSharedCheck_4209_ = !lean_is_exclusive(v_code_4114_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_4189_ = v_code_4114_;
v_isShared_4190_ = v_isSharedCheck_4209_;
goto v_resetjp_4188_;
}
else
{
lean_inc(v_cases_4187_);
lean_dec(v_code_4114_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4209_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v_alts_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; uint8_t v___x_4195_; 
v_alts_4191_ = lean_ctor_get(v_cases_4187_, 3);
lean_inc_ref(v_alts_4191_);
lean_dec_ref(v_cases_4187_);
v___x_4192_ = lean_unsigned_to_nat(0u);
v___x_4193_ = lean_array_get_size(v_alts_4191_);
v___x_4194_ = lean_box(0);
v___x_4195_ = lean_nat_dec_lt(v___x_4192_, v___x_4193_);
if (v___x_4195_ == 0)
{
lean_object* v___x_4197_; 
lean_dec_ref(v_alts_4191_);
if (v_isShared_4190_ == 0)
{
lean_ctor_set_tag(v___x_4189_, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4194_);
v___x_4197_ = v___x_4189_;
goto v_reusejp_4196_;
}
else
{
lean_object* v_reuseFailAlloc_4198_; 
v_reuseFailAlloc_4198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4198_, 0, v___x_4194_);
v___x_4197_ = v_reuseFailAlloc_4198_;
goto v_reusejp_4196_;
}
v_reusejp_4196_:
{
return v___x_4197_;
}
}
else
{
uint8_t v___x_4199_; 
v___x_4199_ = lean_nat_dec_le(v___x_4193_, v___x_4193_);
if (v___x_4199_ == 0)
{
if (v___x_4195_ == 0)
{
lean_object* v___x_4201_; 
lean_dec_ref(v_alts_4191_);
if (v_isShared_4190_ == 0)
{
lean_ctor_set_tag(v___x_4189_, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4194_);
v___x_4201_ = v___x_4189_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4202_, 0, v___x_4194_);
v___x_4201_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
return v___x_4201_;
}
}
else
{
size_t v___x_4203_; size_t v___x_4204_; lean_object* v___x_4205_; 
lean_del_object(v___x_4189_);
v___x_4203_ = ((size_t)0ULL);
v___x_4204_ = lean_usize_of_nat(v___x_4193_);
v___x_4205_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__2(v_alts_4191_, v___x_4203_, v___x_4204_, v___x_4194_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
lean_dec_ref(v_alts_4191_);
return v___x_4205_;
}
}
else
{
size_t v___x_4206_; size_t v___x_4207_; lean_object* v___x_4208_; 
lean_del_object(v___x_4189_);
v___x_4206_ = ((size_t)0ULL);
v___x_4207_ = lean_usize_of_nat(v___x_4193_);
v___x_4208_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__2(v_alts_4191_, v___x_4206_, v___x_4207_, v___x_4194_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
lean_dec_ref(v_alts_4191_);
return v___x_4208_;
}
}
}
}
case 5:
{
lean_object* v___x_4211_; uint8_t v_isShared_4212_; uint8_t v_isSharedCheck_4217_; 
v_isSharedCheck_4217_ = !lean_is_exclusive(v_code_4114_);
if (v_isSharedCheck_4217_ == 0)
{
lean_object* v_unused_4218_; 
v_unused_4218_ = lean_ctor_get(v_code_4114_, 0);
lean_dec(v_unused_4218_);
v___x_4211_ = v_code_4114_;
v_isShared_4212_ = v_isSharedCheck_4217_;
goto v_resetjp_4210_;
}
else
{
lean_dec(v_code_4114_);
v___x_4211_ = lean_box(0);
v_isShared_4212_ = v_isSharedCheck_4217_;
goto v_resetjp_4210_;
}
v_resetjp_4210_:
{
lean_object* v___x_4213_; lean_object* v___x_4215_; 
v___x_4213_ = lean_box(0);
if (v_isShared_4212_ == 0)
{
lean_ctor_set_tag(v___x_4211_, 0);
lean_ctor_set(v___x_4211_, 0, v___x_4213_);
v___x_4215_ = v___x_4211_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v___x_4213_);
v___x_4215_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
return v___x_4215_;
}
}
}
case 6:
{
lean_object* v___x_4220_; uint8_t v_isShared_4221_; uint8_t v_isSharedCheck_4226_; 
v_isSharedCheck_4226_ = !lean_is_exclusive(v_code_4114_);
if (v_isSharedCheck_4226_ == 0)
{
lean_object* v_unused_4227_; 
v_unused_4227_ = lean_ctor_get(v_code_4114_, 0);
lean_dec(v_unused_4227_);
v___x_4220_ = v_code_4114_;
v_isShared_4221_ = v_isSharedCheck_4226_;
goto v_resetjp_4219_;
}
else
{
lean_dec(v_code_4114_);
v___x_4220_ = lean_box(0);
v_isShared_4221_ = v_isSharedCheck_4226_;
goto v_resetjp_4219_;
}
v_resetjp_4219_:
{
lean_object* v___x_4222_; lean_object* v___x_4224_; 
v___x_4222_ = lean_box(0);
if (v_isShared_4221_ == 0)
{
lean_ctor_set_tag(v___x_4220_, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4222_);
v___x_4224_ = v___x_4220_;
goto v_reusejp_4223_;
}
else
{
lean_object* v_reuseFailAlloc_4225_; 
v_reuseFailAlloc_4225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4225_, 0, v___x_4222_);
v___x_4224_ = v_reuseFailAlloc_4225_;
goto v_reusejp_4223_;
}
v_reusejp_4223_:
{
return v___x_4224_;
}
}
}
case 8:
{
lean_object* v_k_4228_; 
v_k_4228_ = lean_ctor_get(v_code_4114_, 3);
lean_inc_ref(v_k_4228_);
lean_dec_ref_known(v_code_4114_, 4);
v_code_4114_ = v_k_4228_;
goto _start;
}
case 9:
{
lean_object* v_k_4230_; 
v_k_4230_ = lean_ctor_get(v_code_4114_, 5);
lean_inc_ref(v_k_4230_);
lean_dec_ref_known(v_code_4114_, 6);
v_code_4114_ = v_k_4230_;
goto _start;
}
default: 
{
lean_object* v___x_4232_; lean_object* v___x_4233_; 
lean_dec_ref(v_code_4114_);
v___x_4232_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___closed__1, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___closed__1_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___closed__1);
v___x_4233_ = l_panic___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__3(v___x_4232_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
return v___x_4233_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___boxed(lean_object* v_code_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_){
_start:
{
lean_object* v_res_4242_; 
v_res_4242_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode(v_code_4234_, v___y_4235_, v___y_4236_, v___y_4237_, v___y_4238_, v___y_4239_, v___y_4240_);
lean_dec(v___y_4240_);
lean_dec_ref(v___y_4239_);
lean_dec(v___y_4238_);
lean_dec_ref(v___y_4237_);
lean_dec(v___y_4236_);
lean_dec_ref(v___y_4235_);
return v_res_4242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__2(lean_object* v_as_4243_, size_t v_i_4244_, size_t v_stop_4245_, lean_object* v_b_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_){
_start:
{
uint8_t v___x_4254_; 
v___x_4254_ = lean_usize_dec_eq(v_i_4244_, v_stop_4245_);
if (v___x_4254_ == 0)
{
lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; 
v___x_4255_ = lean_array_uget_borrowed(v_as_4243_, v_i_4244_);
v___x_4256_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode___boxed), 8, 0);
lean_inc(v___x_4255_);
v___x_4257_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__0___redArg(v___x_4255_, v___x_4256_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
if (lean_obj_tag(v___x_4257_) == 0)
{
lean_object* v_a_4258_; size_t v___x_4259_; size_t v___x_4260_; 
v_a_4258_ = lean_ctor_get(v___x_4257_, 0);
lean_inc(v_a_4258_);
lean_dec_ref_known(v___x_4257_, 1);
v___x_4259_ = ((size_t)1ULL);
v___x_4260_ = lean_usize_add(v_i_4244_, v___x_4259_);
v_i_4244_ = v___x_4260_;
v_b_4246_ = v_a_4258_;
goto _start;
}
else
{
return v___x_4257_;
}
}
else
{
lean_object* v___x_4262_; 
v___x_4262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4262_, 0, v_b_4246_);
return v___x_4262_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__2___boxed(lean_object* v_as_4263_, lean_object* v_i_4264_, lean_object* v_stop_4265_, lean_object* v_b_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_){
_start:
{
size_t v_i_boxed_4274_; size_t v_stop_boxed_4275_; lean_object* v_res_4276_; 
v_i_boxed_4274_ = lean_unbox_usize(v_i_4264_);
lean_dec(v_i_4264_);
v_stop_boxed_4275_ = lean_unbox_usize(v_stop_4265_);
lean_dec(v_stop_4265_);
v_res_4276_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__2(v_as_4263_, v_i_boxed_4274_, v_stop_boxed_4275_, v_b_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_);
lean_dec(v___y_4272_);
lean_dec_ref(v___y_4271_);
lean_dec(v___y_4270_);
lean_dec_ref(v___y_4269_);
lean_dec(v___y_4268_);
lean_dec_ref(v___y_4267_);
lean_dec_ref(v_as_4263_);
return v_res_4276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectDecl(lean_object* v_decl_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_){
_start:
{
lean_object* v_value_4285_; 
v_value_4285_ = lean_ctor_get(v_decl_4277_, 1);
lean_inc_ref(v_value_4285_);
if (lean_obj_tag(v_value_4285_) == 0)
{
lean_object* v_toSignature_4286_; lean_object* v_code_4287_; lean_object* v_name_4288_; lean_object* v_params_4289_; lean_object* v_decls_4290_; lean_object* v_paramSet_4291_; lean_object* v___y_4293_; lean_object* v___x_4305_; lean_object* v___x_4306_; uint8_t v___x_4307_; 
v_toSignature_4286_ = lean_ctor_get(v_decl_4277_, 0);
lean_inc_ref(v_toSignature_4286_);
lean_dec_ref(v_decl_4277_);
v_code_4287_ = lean_ctor_get(v_value_4285_, 0);
lean_inc_ref(v_code_4287_);
lean_dec_ref_known(v_value_4285_, 1);
v_name_4288_ = lean_ctor_get(v_toSignature_4286_, 0);
lean_inc(v_name_4288_);
v_params_4289_ = lean_ctor_get(v_toSignature_4286_, 3);
lean_inc_ref(v_params_4289_);
lean_dec_ref(v_toSignature_4286_);
v_decls_4290_ = lean_ctor_get(v___y_4278_, 0);
v_paramSet_4291_ = lean_ctor_get(v___y_4278_, 2);
v___x_4305_ = lean_unsigned_to_nat(0u);
v___x_4306_ = lean_array_get_size(v_params_4289_);
v___x_4307_ = lean_nat_dec_lt(v___x_4305_, v___x_4306_);
if (v___x_4307_ == 0)
{
lean_dec_ref(v_params_4289_);
lean_inc(v_paramSet_4291_);
v___y_4293_ = v_paramSet_4291_;
goto v___jp_4292_;
}
else
{
size_t v___x_4308_; size_t v___x_4309_; lean_object* v___x_4310_; 
v___x_4308_ = ((size_t)0ULL);
v___x_4309_ = lean_usize_of_nat(v___x_4306_);
lean_inc(v_paramSet_4291_);
v___x_4310_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode_spec__1(v_params_4289_, v___x_4308_, v___x_4309_, v_paramSet_4291_);
lean_dec_ref(v_params_4289_);
v___y_4293_ = v___x_4310_;
goto v___jp_4292_;
}
v___jp_4292_:
{
lean_object* v___x_4294_; lean_object* v___x_4295_; 
lean_inc(v_name_4288_);
lean_inc_ref(v_decls_4290_);
v___x_4294_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4294_, 0, v_decls_4290_);
lean_ctor_set(v___x_4294_, 1, v_name_4288_);
lean_ctor_set(v___x_4294_, 2, v___y_4293_);
v___x_4295_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectCode(v_code_4287_, v___x_4294_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_);
if (lean_obj_tag(v___x_4295_) == 0)
{
lean_object* v___x_4297_; uint8_t v_isShared_4298_; uint8_t v_isSharedCheck_4303_; 
v_isSharedCheck_4303_ = !lean_is_exclusive(v___x_4295_);
if (v_isSharedCheck_4303_ == 0)
{
lean_object* v_unused_4304_; 
v_unused_4304_ = lean_ctor_get(v___x_4295_, 0);
lean_dec(v_unused_4304_);
v___x_4297_ = v___x_4295_;
v_isShared_4298_ = v_isSharedCheck_4303_;
goto v_resetjp_4296_;
}
else
{
lean_dec(v___x_4295_);
v___x_4297_ = lean_box(0);
v_isShared_4298_ = v_isSharedCheck_4303_;
goto v_resetjp_4296_;
}
v_resetjp_4296_:
{
lean_object* v___x_4300_; 
if (v_isShared_4298_ == 0)
{
lean_ctor_set(v___x_4297_, 0, v_name_4288_);
v___x_4300_ = v___x_4297_;
goto v_reusejp_4299_;
}
else
{
lean_object* v_reuseFailAlloc_4302_; 
v_reuseFailAlloc_4302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4302_, 0, v_name_4288_);
v___x_4300_ = v_reuseFailAlloc_4302_;
goto v_reusejp_4299_;
}
v_reusejp_4299_:
{
lean_object* v___x_4301_; 
v___x_4301_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_updateParamMap(v___x_4300_, v___x_4294_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_);
lean_dec_ref_known(v___x_4294_, 3);
return v___x_4301_;
}
}
}
else
{
lean_dec_ref_known(v___x_4294_, 3);
lean_dec(v_name_4288_);
return v___x_4295_;
}
}
}
else
{
lean_object* v___x_4311_; lean_object* v___x_4312_; 
lean_dec_ref(v_value_4285_);
lean_dec_ref(v_decl_4277_);
v___x_4311_ = lean_box(0);
v___x_4312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4312_, 0, v___x_4311_);
return v___x_4312_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectDecl___boxed(lean_object* v_decl_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_){
_start:
{
lean_object* v_res_4321_; 
v_res_4321_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectDecl(v_decl_4313_, v___y_4314_, v___y_4315_, v___y_4316_, v___y_4317_, v___y_4318_, v___y_4319_);
lean_dec(v___y_4319_);
lean_dec_ref(v___y_4318_);
lean_dec(v___y_4317_);
lean_dec_ref(v___y_4316_);
lean_dec(v___y_4315_);
lean_dec_ref(v___y_4314_);
return v_res_4321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step_spec__0(lean_object* v_as_4322_, size_t v_i_4323_, size_t v_stop_4324_, lean_object* v_b_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_){
_start:
{
uint8_t v___x_4333_; 
v___x_4333_ = lean_usize_dec_eq(v_i_4323_, v_stop_4324_);
if (v___x_4333_ == 0)
{
lean_object* v___x_4334_; lean_object* v___x_4335_; 
v___x_4334_ = lean_array_uget_borrowed(v_as_4322_, v_i_4323_);
lean_inc(v___x_4334_);
v___x_4335_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_collectDecl(v___x_4334_, v___y_4326_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_, v___y_4331_);
if (lean_obj_tag(v___x_4335_) == 0)
{
lean_object* v_a_4336_; size_t v___x_4337_; size_t v___x_4338_; 
v_a_4336_ = lean_ctor_get(v___x_4335_, 0);
lean_inc(v_a_4336_);
lean_dec_ref_known(v___x_4335_, 1);
v___x_4337_ = ((size_t)1ULL);
v___x_4338_ = lean_usize_add(v_i_4323_, v___x_4337_);
v_i_4323_ = v___x_4338_;
v_b_4325_ = v_a_4336_;
goto _start;
}
else
{
return v___x_4335_;
}
}
else
{
lean_object* v___x_4340_; 
v___x_4340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4340_, 0, v_b_4325_);
return v___x_4340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step_spec__0___boxed(lean_object* v_as_4341_, lean_object* v_i_4342_, lean_object* v_stop_4343_, lean_object* v_b_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_){
_start:
{
size_t v_i_boxed_4352_; size_t v_stop_boxed_4353_; lean_object* v_res_4354_; 
v_i_boxed_4352_ = lean_unbox_usize(v_i_4342_);
lean_dec(v_i_4342_);
v_stop_boxed_4353_ = lean_unbox_usize(v_stop_4343_);
lean_dec(v_stop_4343_);
v_res_4354_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step_spec__0(v_as_4341_, v_i_boxed_4352_, v_stop_boxed_4353_, v_b_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_);
lean_dec(v___y_4350_);
lean_dec_ref(v___y_4349_);
lean_dec(v___y_4348_);
lean_dec_ref(v___y_4347_);
lean_dec(v___y_4346_);
lean_dec_ref(v___y_4345_);
lean_dec_ref(v_as_4341_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step(lean_object* v___y_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_){
_start:
{
lean_object* v_decls_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; uint8_t v___x_4366_; 
v_decls_4362_ = lean_ctor_get(v___y_4355_, 0);
v___x_4363_ = lean_unsigned_to_nat(0u);
v___x_4364_ = lean_array_get_size(v_decls_4362_);
v___x_4365_ = lean_box(0);
v___x_4366_ = lean_nat_dec_lt(v___x_4363_, v___x_4364_);
if (v___x_4366_ == 0)
{
lean_object* v___x_4367_; 
v___x_4367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4367_, 0, v___x_4365_);
return v___x_4367_;
}
else
{
uint8_t v___x_4368_; 
v___x_4368_ = lean_nat_dec_le(v___x_4364_, v___x_4364_);
if (v___x_4368_ == 0)
{
if (v___x_4366_ == 0)
{
lean_object* v___x_4369_; 
v___x_4369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4369_, 0, v___x_4365_);
return v___x_4369_;
}
else
{
size_t v___x_4370_; size_t v___x_4371_; lean_object* v___x_4372_; 
v___x_4370_ = ((size_t)0ULL);
v___x_4371_ = lean_usize_of_nat(v___x_4364_);
v___x_4372_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step_spec__0(v_decls_4362_, v___x_4370_, v___x_4371_, v___x_4365_, v___y_4355_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_);
return v___x_4372_;
}
}
else
{
size_t v___x_4373_; size_t v___x_4374_; lean_object* v___x_4375_; 
v___x_4373_ = ((size_t)0ULL);
v___x_4374_ = lean_usize_of_nat(v___x_4364_);
v___x_4375_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step_spec__0(v_decls_4362_, v___x_4373_, v___x_4374_, v___x_4365_, v___y_4355_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_);
return v___x_4375_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step___boxed(lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_){
_start:
{
lean_object* v_res_4383_; 
v_res_4383_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step(v___y_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_, v___y_4381_);
lean_dec(v___y_4381_);
lean_dec_ref(v___y_4380_);
lean_dec(v___y_4379_);
lean_dec_ref(v___y_4378_);
lean_dec(v___y_4377_);
lean_dec_ref(v___y_4376_);
return v_res_4383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_loop(lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_){
_start:
{
lean_object* v___x_4391_; 
v___x_4391_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_step(v___y_4384_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_, v___y_4389_);
if (lean_obj_tag(v___x_4391_) == 0)
{
lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4414_; 
v_isSharedCheck_4414_ = !lean_is_exclusive(v___x_4391_);
if (v_isSharedCheck_4414_ == 0)
{
lean_object* v_unused_4415_; 
v_unused_4415_ = lean_ctor_get(v___x_4391_, 0);
lean_dec(v_unused_4415_);
v___x_4393_ = v___x_4391_;
v_isShared_4394_ = v_isSharedCheck_4414_;
goto v_resetjp_4392_;
}
else
{
lean_dec(v___x_4391_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4414_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v___x_4395_; uint8_t v_modified_4396_; 
v___x_4395_ = lean_st_ref_get(v___y_4385_);
v_modified_4396_ = lean_ctor_get_uint8(v___x_4395_, sizeof(void*)*2);
lean_dec(v___x_4395_);
if (v_modified_4396_ == 0)
{
lean_object* v___x_4397_; lean_object* v___x_4399_; 
v___x_4397_ = lean_box(0);
if (v_isShared_4394_ == 0)
{
lean_ctor_set(v___x_4393_, 0, v___x_4397_);
v___x_4399_ = v___x_4393_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v___x_4397_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
else
{
lean_object* v___x_4401_; lean_object* v_owned_4402_; lean_object* v_paramMap_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4413_; 
lean_del_object(v___x_4393_);
v___x_4401_ = lean_st_ref_take(v___y_4385_);
v_owned_4402_ = lean_ctor_get(v___x_4401_, 0);
v_paramMap_4403_ = lean_ctor_get(v___x_4401_, 1);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4401_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4405_ = v___x_4401_;
v_isShared_4406_ = v_isSharedCheck_4413_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_paramMap_4403_);
lean_inc(v_owned_4402_);
lean_dec(v___x_4401_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4413_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
uint8_t v___x_4407_; lean_object* v___x_4409_; 
v___x_4407_ = 0;
if (v_isShared_4406_ == 0)
{
v___x_4409_ = v___x_4405_;
goto v_reusejp_4408_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_owned_4402_);
lean_ctor_set(v_reuseFailAlloc_4412_, 1, v_paramMap_4403_);
v___x_4409_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4408_;
}
v_reusejp_4408_:
{
lean_object* v___x_4410_; 
lean_ctor_set_uint8(v___x_4409_, sizeof(void*)*2, v___x_4407_);
v___x_4410_ = lean_st_ref_put(v___y_4385_, v___x_4409_);
goto _start;
}
}
}
}
}
else
{
return v___x_4391_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_loop___boxed(lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_){
_start:
{
lean_object* v_res_4423_; 
v_res_4423_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_loop(v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
lean_dec(v___y_4421_);
lean_dec_ref(v___y_4420_);
lean_dec(v___y_4419_);
lean_dec_ref(v___y_4418_);
lean_dec(v___y_4417_);
lean_dec_ref(v___y_4416_);
return v_res_4423_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__0(lean_object* v_as_4424_, size_t v_sz_4425_, size_t v_i_4426_, lean_object* v_b_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_){
_start:
{
lean_object* v_a_4436_; uint8_t v___x_4440_; 
v___x_4440_ = lean_usize_dec_lt(v_i_4426_, v_sz_4425_);
if (v___x_4440_ == 0)
{
lean_object* v___x_4441_; 
v___x_4441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4441_, 0, v_b_4427_);
return v___x_4441_;
}
else
{
lean_object* v_a_4442_; lean_object* v_fvarId_4443_; lean_object* v_type_4444_; uint8_t v_borrow_4445_; lean_object* v___x_4446_; 
v_a_4442_ = lean_array_uget_borrowed(v_as_4424_, v_i_4426_);
v_fvarId_4443_ = lean_ctor_get(v_a_4442_, 0);
v_type_4444_ = lean_ctor_get(v_a_4442_, 2);
v_borrow_4445_ = lean_ctor_get_uint8(v_a_4442_, sizeof(void*)*3);
v___x_4446_ = lean_box(0);
if (v_borrow_4445_ == 0)
{
uint8_t v___x_4447_; 
v___x_4447_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_4444_);
if (v___x_4447_ == 0)
{
v_a_4436_ = v___x_4446_;
goto v___jp_4435_;
}
else
{
lean_object* v___x_4448_; lean_object* v___x_4449_; 
v___x_4448_ = lean_box(12);
lean_inc(v_fvarId_4443_);
v___x_4449_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar(v_fvarId_4443_, v___x_4448_, v___y_4428_, v___y_4429_, v___y_4430_, v___y_4431_, v___y_4432_, v___y_4433_);
if (lean_obj_tag(v___x_4449_) == 0)
{
lean_dec_ref_known(v___x_4449_, 1);
v_a_4436_ = v___x_4446_;
goto v___jp_4435_;
}
else
{
return v___x_4449_;
}
}
}
else
{
v_a_4436_ = v___x_4446_;
goto v___jp_4435_;
}
}
v___jp_4435_:
{
size_t v___x_4437_; size_t v___x_4438_; 
v___x_4437_ = ((size_t)1ULL);
v___x_4438_ = lean_usize_add(v_i_4426_, v___x_4437_);
v_i_4426_ = v___x_4438_;
v_b_4427_ = v_a_4436_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__0___boxed(lean_object* v_as_4450_, lean_object* v_sz_4451_, lean_object* v_i_4452_, lean_object* v_b_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_){
_start:
{
size_t v_sz_boxed_4461_; size_t v_i_boxed_4462_; lean_object* v_res_4463_; 
v_sz_boxed_4461_ = lean_unbox_usize(v_sz_4451_);
lean_dec(v_sz_4451_);
v_i_boxed_4462_ = lean_unbox_usize(v_i_4452_);
lean_dec(v_i_4452_);
v_res_4463_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__0(v_as_4450_, v_sz_boxed_4461_, v_i_boxed_4462_, v_b_4453_, v___y_4454_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_, v___y_4459_);
lean_dec(v___y_4459_);
lean_dec_ref(v___y_4458_);
lean_dec(v___y_4457_);
lean_dec_ref(v___y_4456_);
lean_dec(v___y_4455_);
lean_dec_ref(v___y_4454_);
lean_dec_ref(v_as_4450_);
return v_res_4463_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__1(lean_object* v_a_4464_, lean_object* v_a_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_){
_start:
{
if (lean_obj_tag(v_a_4464_) == 0)
{
lean_object* v___x_4473_; lean_object* v___x_4474_; 
v___x_4473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4473_, 0, v_a_4465_);
v___x_4474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4474_, 0, v___x_4473_);
return v___x_4474_;
}
else
{
lean_object* v_value_4475_; lean_object* v_tail_4476_; lean_object* v___x_4477_; size_t v_sz_4478_; size_t v___x_4479_; lean_object* v___x_4480_; 
v_value_4475_ = lean_ctor_get(v_a_4464_, 1);
v_tail_4476_ = lean_ctor_get(v_a_4464_, 2);
v___x_4477_ = lean_box(0);
v_sz_4478_ = lean_array_size(v_value_4475_);
v___x_4479_ = ((size_t)0ULL);
v___x_4480_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__0(v_value_4475_, v_sz_4478_, v___x_4479_, v___x_4477_, v___y_4466_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_, v___y_4471_);
if (lean_obj_tag(v___x_4480_) == 0)
{
lean_dec_ref_known(v___x_4480_, 1);
v_a_4464_ = v_tail_4476_;
v_a_4465_ = v___x_4477_;
goto _start;
}
else
{
lean_object* v_a_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4489_; 
v_a_4482_ = lean_ctor_get(v___x_4480_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___x_4480_);
if (v_isSharedCheck_4489_ == 0)
{
v___x_4484_ = v___x_4480_;
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_a_4482_);
lean_dec(v___x_4480_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4489_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4487_; 
if (v_isShared_4485_ == 0)
{
v___x_4487_ = v___x_4484_;
goto v_reusejp_4486_;
}
else
{
lean_object* v_reuseFailAlloc_4488_; 
v_reuseFailAlloc_4488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4488_, 0, v_a_4482_);
v___x_4487_ = v_reuseFailAlloc_4488_;
goto v_reusejp_4486_;
}
v_reusejp_4486_:
{
return v___x_4487_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__1___boxed(lean_object* v_a_4490_, lean_object* v_a_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_){
_start:
{
lean_object* v_res_4499_; 
v_res_4499_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__1(v_a_4490_, v_a_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
lean_dec(v_a_4490_);
return v_res_4499_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__2(lean_object* v_as_4500_, size_t v_sz_4501_, size_t v_i_4502_, lean_object* v_b_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_){
_start:
{
uint8_t v___x_4511_; 
v___x_4511_ = lean_usize_dec_lt(v_i_4502_, v_sz_4501_);
if (v___x_4511_ == 0)
{
lean_object* v___x_4512_; 
v___x_4512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4512_, 0, v_b_4503_);
return v___x_4512_;
}
else
{
lean_object* v_a_4513_; lean_object* v___x_4514_; 
v_a_4513_ = lean_array_uget_borrowed(v_as_4500_, v_i_4502_);
v___x_4514_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__1(v_a_4513_, v_b_4503_, v___y_4504_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_);
if (lean_obj_tag(v___x_4514_) == 0)
{
lean_object* v_a_4515_; lean_object* v___x_4517_; uint8_t v_isShared_4518_; uint8_t v_isSharedCheck_4527_; 
v_a_4515_ = lean_ctor_get(v___x_4514_, 0);
v_isSharedCheck_4527_ = !lean_is_exclusive(v___x_4514_);
if (v_isSharedCheck_4527_ == 0)
{
v___x_4517_ = v___x_4514_;
v_isShared_4518_ = v_isSharedCheck_4527_;
goto v_resetjp_4516_;
}
else
{
lean_inc(v_a_4515_);
lean_dec(v___x_4514_);
v___x_4517_ = lean_box(0);
v_isShared_4518_ = v_isSharedCheck_4527_;
goto v_resetjp_4516_;
}
v_resetjp_4516_:
{
if (lean_obj_tag(v_a_4515_) == 0)
{
lean_object* v_a_4519_; lean_object* v___x_4521_; 
v_a_4519_ = lean_ctor_get(v_a_4515_, 0);
lean_inc(v_a_4519_);
lean_dec_ref_known(v_a_4515_, 1);
if (v_isShared_4518_ == 0)
{
lean_ctor_set(v___x_4517_, 0, v_a_4519_);
v___x_4521_ = v___x_4517_;
goto v_reusejp_4520_;
}
else
{
lean_object* v_reuseFailAlloc_4522_; 
v_reuseFailAlloc_4522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4522_, 0, v_a_4519_);
v___x_4521_ = v_reuseFailAlloc_4522_;
goto v_reusejp_4520_;
}
v_reusejp_4520_:
{
return v___x_4521_;
}
}
else
{
lean_object* v_a_4523_; size_t v___x_4524_; size_t v___x_4525_; 
lean_del_object(v___x_4517_);
v_a_4523_ = lean_ctor_get(v_a_4515_, 0);
lean_inc(v_a_4523_);
lean_dec_ref_known(v_a_4515_, 1);
v___x_4524_ = ((size_t)1ULL);
v___x_4525_ = lean_usize_add(v_i_4502_, v___x_4524_);
v_i_4502_ = v___x_4525_;
v_b_4503_ = v_a_4523_;
goto _start;
}
}
}
else
{
lean_object* v_a_4528_; lean_object* v___x_4530_; uint8_t v_isShared_4531_; uint8_t v_isSharedCheck_4535_; 
v_a_4528_ = lean_ctor_get(v___x_4514_, 0);
v_isSharedCheck_4535_ = !lean_is_exclusive(v___x_4514_);
if (v_isSharedCheck_4535_ == 0)
{
v___x_4530_ = v___x_4514_;
v_isShared_4531_ = v_isSharedCheck_4535_;
goto v_resetjp_4529_;
}
else
{
lean_inc(v_a_4528_);
lean_dec(v___x_4514_);
v___x_4530_ = lean_box(0);
v_isShared_4531_ = v_isSharedCheck_4535_;
goto v_resetjp_4529_;
}
v_resetjp_4529_:
{
lean_object* v___x_4533_; 
if (v_isShared_4531_ == 0)
{
v___x_4533_ = v___x_4530_;
goto v_reusejp_4532_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v_a_4528_);
v___x_4533_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4532_;
}
v_reusejp_4532_:
{
return v___x_4533_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__2___boxed(lean_object* v_as_4536_, lean_object* v_sz_4537_, lean_object* v_i_4538_, lean_object* v_b_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_){
_start:
{
size_t v_sz_boxed_4547_; size_t v_i_boxed_4548_; lean_object* v_res_4549_; 
v_sz_boxed_4547_ = lean_unbox_usize(v_sz_4537_);
lean_dec(v_sz_4537_);
v_i_boxed_4548_ = lean_unbox_usize(v_i_4538_);
lean_dec(v_i_4538_);
v_res_4549_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__2(v_as_4536_, v_sz_boxed_4547_, v_i_boxed_4548_, v_b_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_);
lean_dec(v___y_4545_);
lean_dec_ref(v___y_4544_);
lean_dec(v___y_4543_);
lean_dec_ref(v___y_4542_);
lean_dec(v___y_4541_);
lean_dec_ref(v___y_4540_);
lean_dec_ref(v_as_4536_);
return v_res_4549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go(lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_){
_start:
{
lean_object* v___x_4557_; lean_object* v_paramMap_4558_; lean_object* v_map_4559_; lean_object* v_buckets_4560_; lean_object* v___x_4561_; size_t v_sz_4562_; size_t v___x_4563_; lean_object* v___x_4564_; 
v___x_4557_ = lean_st_ref_get(v___y_4551_);
v_paramMap_4558_ = lean_ctor_get(v___x_4557_, 1);
lean_inc_ref(v_paramMap_4558_);
lean_dec(v___x_4557_);
v_map_4559_ = lean_ctor_get(v_paramMap_4558_, 0);
lean_inc_ref(v_map_4559_);
lean_dec_ref(v_paramMap_4558_);
v_buckets_4560_ = lean_ctor_get(v_map_4559_, 1);
lean_inc_ref(v_buckets_4560_);
lean_dec_ref(v_map_4559_);
v___x_4561_ = lean_box(0);
v_sz_4562_ = lean_array_size(v_buckets_4560_);
v___x_4563_ = ((size_t)0ULL);
v___x_4564_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go_spec__2(v_buckets_4560_, v_sz_4562_, v___x_4563_, v___x_4561_, v___y_4550_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_);
lean_dec_ref(v_buckets_4560_);
if (lean_obj_tag(v___x_4564_) == 0)
{
lean_object* v___x_4565_; lean_object* v_owned_4566_; lean_object* v_paramMap_4567_; lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4577_; 
lean_dec_ref_known(v___x_4564_, 1);
v___x_4565_ = lean_st_ref_take(v___y_4551_);
v_owned_4566_ = lean_ctor_get(v___x_4565_, 0);
v_paramMap_4567_ = lean_ctor_get(v___x_4565_, 1);
v_isSharedCheck_4577_ = !lean_is_exclusive(v___x_4565_);
if (v_isSharedCheck_4577_ == 0)
{
v___x_4569_ = v___x_4565_;
v_isShared_4570_ = v_isSharedCheck_4577_;
goto v_resetjp_4568_;
}
else
{
lean_inc(v_paramMap_4567_);
lean_inc(v_owned_4566_);
lean_dec(v___x_4565_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4577_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
uint8_t v___x_4571_; lean_object* v___x_4573_; 
v___x_4571_ = 0;
if (v_isShared_4570_ == 0)
{
v___x_4573_ = v___x_4569_;
goto v_reusejp_4572_;
}
else
{
lean_object* v_reuseFailAlloc_4576_; 
v_reuseFailAlloc_4576_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_4576_, 0, v_owned_4566_);
lean_ctor_set(v_reuseFailAlloc_4576_, 1, v_paramMap_4567_);
v___x_4573_ = v_reuseFailAlloc_4576_;
goto v_reusejp_4572_;
}
v_reusejp_4572_:
{
lean_object* v___x_4574_; lean_object* v___x_4575_; 
lean_ctor_set_uint8(v___x_4573_, sizeof(void*)*2, v___x_4571_);
v___x_4574_ = lean_st_ref_put(v___y_4551_, v___x_4573_);
v___x_4575_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_loop(v___y_4550_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_);
return v___x_4575_;
}
}
}
else
{
return v___x_4564_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go___boxed(lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_){
_start:
{
lean_object* v_res_4585_; 
v_res_4585_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go(v___y_4578_, v___y_4579_, v___y_4580_, v___y_4581_, v___y_4582_, v___y_4583_);
lean_dec(v___y_4583_);
lean_dec_ref(v___y_4582_);
lean_dec(v___y_4581_);
lean_dec_ref(v___y_4580_);
lean_dec(v___y_4579_);
lean_dec_ref(v___y_4578_);
return v_res_4585_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__0(void){
_start:
{
lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; 
v___x_4586_ = lean_box(0);
v___x_4587_ = lean_unsigned_to_nat(16u);
v___x_4588_ = lean_mk_array(v___x_4587_, v___x_4586_);
return v___x_4588_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__1(void){
_start:
{
lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; 
v___x_4589_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__0, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__0_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__0);
v___x_4590_ = lean_unsigned_to_nat(0u);
v___x_4591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4591_, 0, v___x_4590_);
lean_ctor_set(v___x_4591_, 1, v___x_4589_);
return v___x_4591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer(lean_object* v_decls_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_){
_start:
{
lean_object* v___x_4598_; 
v___x_4598_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_mkInitParamMap(v_decls_4592_, v___y_4593_, v___y_4594_, v___y_4595_, v___y_4596_);
if (lean_obj_tag(v___x_4598_) == 0)
{
lean_object* v_a_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; uint8_t v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; 
v_a_4599_ = lean_ctor_get(v___x_4598_, 0);
lean_inc(v_a_4599_);
lean_dec_ref_known(v___x_4598_, 1);
v___x_4600_ = lean_box(0);
v___x_4601_ = lean_box(1);
v___x_4602_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4602_, 0, v_decls_4592_);
lean_ctor_set(v___x_4602_, 1, v___x_4600_);
lean_ctor_set(v___x_4602_, 2, v___x_4601_);
v___x_4603_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__1, &l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__1_once, _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___closed__1);
v___x_4604_ = 0;
v___x_4605_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4605_, 0, v___x_4603_);
lean_ctor_set(v___x_4605_, 1, v_a_4599_);
lean_ctor_set_uint8(v___x_4605_, sizeof(void*)*2, v___x_4604_);
v___x_4606_ = lean_st_mk_ref(v___x_4605_);
v___x_4607_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_go(v___x_4602_, v___x_4606_, v___y_4593_, v___y_4594_, v___y_4595_, v___y_4596_);
lean_dec_ref_known(v___x_4602_, 3);
if (lean_obj_tag(v___x_4607_) == 0)
{
lean_object* v___x_4609_; uint8_t v_isShared_4610_; uint8_t v_isSharedCheck_4616_; 
v_isSharedCheck_4616_ = !lean_is_exclusive(v___x_4607_);
if (v_isSharedCheck_4616_ == 0)
{
lean_object* v_unused_4617_; 
v_unused_4617_ = lean_ctor_get(v___x_4607_, 0);
lean_dec(v_unused_4617_);
v___x_4609_ = v___x_4607_;
v_isShared_4610_ = v_isSharedCheck_4616_;
goto v_resetjp_4608_;
}
else
{
lean_dec(v___x_4607_);
v___x_4609_ = lean_box(0);
v_isShared_4610_ = v_isSharedCheck_4616_;
goto v_resetjp_4608_;
}
v_resetjp_4608_:
{
lean_object* v___x_4611_; lean_object* v_paramMap_4612_; lean_object* v___x_4614_; 
v___x_4611_ = lean_st_ref_get(v___x_4606_);
lean_dec(v___x_4606_);
v_paramMap_4612_ = lean_ctor_get(v___x_4611_, 1);
lean_inc_ref(v_paramMap_4612_);
lean_dec(v___x_4611_);
if (v_isShared_4610_ == 0)
{
lean_ctor_set(v___x_4609_, 0, v_paramMap_4612_);
v___x_4614_ = v___x_4609_;
goto v_reusejp_4613_;
}
else
{
lean_object* v_reuseFailAlloc_4615_; 
v_reuseFailAlloc_4615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4615_, 0, v_paramMap_4612_);
v___x_4614_ = v_reuseFailAlloc_4615_;
goto v_reusejp_4613_;
}
v_reusejp_4613_:
{
return v___x_4614_;
}
}
}
else
{
lean_object* v_a_4618_; lean_object* v___x_4620_; uint8_t v_isShared_4621_; uint8_t v_isSharedCheck_4625_; 
lean_dec(v___x_4606_);
v_a_4618_ = lean_ctor_get(v___x_4607_, 0);
v_isSharedCheck_4625_ = !lean_is_exclusive(v___x_4607_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_4620_ = v___x_4607_;
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
else
{
lean_inc(v_a_4618_);
lean_dec(v___x_4607_);
v___x_4620_ = lean_box(0);
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
v_resetjp_4619_:
{
lean_object* v___x_4623_; 
if (v_isShared_4621_ == 0)
{
v___x_4623_ = v___x_4620_;
goto v_reusejp_4622_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v_a_4618_);
v___x_4623_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4622_;
}
v_reusejp_4622_:
{
return v___x_4623_;
}
}
}
}
else
{
lean_dec_ref(v_decls_4592_);
return v___x_4598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer___boxed(lean_object* v_decls_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_){
_start:
{
lean_object* v_res_4632_; 
v_res_4632_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer(v_decls_4626_, v___y_4627_, v___y_4628_, v___y_4629_, v___y_4630_);
lean_dec(v___y_4630_);
lean_dec_ref(v___y_4629_);
lean_dec(v___y_4628_);
lean_dec_ref(v___y_4627_);
return v_res_4632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0___redArg(lean_object* v_as_4633_, size_t v_i_4634_, size_t v_stop_4635_, lean_object* v_b_4636_, lean_object* v___y_4637_){
_start:
{
uint8_t v___x_4639_; 
v___x_4639_ = lean_usize_dec_eq(v_i_4634_, v_stop_4635_);
if (v___x_4639_ == 0)
{
lean_object* v___x_4640_; lean_object* v___x_4641_; 
v___x_4640_ = lean_array_uget_borrowed(v_as_4633_, v_i_4634_);
lean_inc(v___x_4640_);
v___x_4641_ = l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(v___x_4640_, v___y_4637_);
if (lean_obj_tag(v___x_4641_) == 0)
{
lean_object* v_a_4642_; size_t v___x_4643_; size_t v___x_4644_; 
v_a_4642_ = lean_ctor_get(v___x_4641_, 0);
lean_inc(v_a_4642_);
lean_dec_ref_known(v___x_4641_, 1);
v___x_4643_ = ((size_t)1ULL);
v___x_4644_ = lean_usize_add(v_i_4634_, v___x_4643_);
v_i_4634_ = v___x_4644_;
v_b_4636_ = v_a_4642_;
goto _start;
}
else
{
return v___x_4641_;
}
}
else
{
lean_object* v___x_4646_; 
v___x_4646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4646_, 0, v_b_4636_);
return v___x_4646_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0___redArg___boxed(lean_object* v_as_4647_, lean_object* v_i_4648_, lean_object* v_stop_4649_, lean_object* v_b_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_){
_start:
{
size_t v_i_boxed_4653_; size_t v_stop_boxed_4654_; lean_object* v_res_4655_; 
v_i_boxed_4653_ = lean_unbox_usize(v_i_4648_);
lean_dec(v_i_4648_);
v_stop_boxed_4654_ = lean_unbox_usize(v_stop_4649_);
lean_dec(v_stop_4649_);
v_res_4655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0___redArg(v_as_4647_, v_i_boxed_4653_, v_stop_boxed_4654_, v_b_4650_, v___y_4651_);
lean_dec(v___y_4651_);
lean_dec_ref(v_as_4647_);
return v_res_4655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferBorrow___lam__0(lean_object* v___x_4656_, lean_object* v_decls_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
lean_object* v___x_4663_; 
lean_inc_ref(v_decls_4657_);
v___x_4663_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer(v_decls_4657_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
if (lean_obj_tag(v___x_4663_) == 0)
{
lean_object* v_a_4664_; lean_object* v___x_4665_; 
v_a_4664_ = lean_ctor_get(v___x_4663_, 0);
lean_inc(v_a_4664_);
lean_dec_ref_known(v___x_4663_, 1);
v___x_4665_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_apply(v_decls_4657_, v_a_4664_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
if (lean_obj_tag(v___x_4665_) == 0)
{
lean_object* v_a_4666_; lean_object* v___y_4668_; lean_object* v___x_4685_; uint8_t v___x_4686_; 
v_a_4666_ = lean_ctor_get(v___x_4665_, 0);
lean_inc(v_a_4666_);
v___x_4685_ = lean_array_get_size(v_a_4666_);
v___x_4686_ = lean_nat_dec_lt(v___x_4656_, v___x_4685_);
if (v___x_4686_ == 0)
{
lean_dec(v_a_4666_);
return v___x_4665_;
}
else
{
lean_object* v___x_4687_; uint8_t v___x_4688_; 
v___x_4687_ = lean_box(0);
v___x_4688_ = lean_nat_dec_le(v___x_4685_, v___x_4685_);
if (v___x_4688_ == 0)
{
if (v___x_4686_ == 0)
{
lean_dec(v_a_4666_);
return v___x_4665_;
}
else
{
size_t v___x_4689_; size_t v___x_4690_; lean_object* v___x_4691_; 
lean_dec_ref_known(v___x_4665_, 1);
v___x_4689_ = ((size_t)0ULL);
v___x_4690_ = lean_usize_of_nat(v___x_4685_);
v___x_4691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0___redArg(v_a_4666_, v___x_4689_, v___x_4690_, v___x_4687_, v___y_4661_);
v___y_4668_ = v___x_4691_;
goto v___jp_4667_;
}
}
else
{
size_t v___x_4692_; size_t v___x_4693_; lean_object* v___x_4694_; 
lean_dec_ref_known(v___x_4665_, 1);
v___x_4692_ = ((size_t)0ULL);
v___x_4693_ = lean_usize_of_nat(v___x_4685_);
v___x_4694_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0___redArg(v_a_4666_, v___x_4692_, v___x_4693_, v___x_4687_, v___y_4661_);
v___y_4668_ = v___x_4694_;
goto v___jp_4667_;
}
}
v___jp_4667_:
{
if (lean_obj_tag(v___y_4668_) == 0)
{
lean_object* v___x_4670_; uint8_t v_isShared_4671_; uint8_t v_isSharedCheck_4675_; 
v_isSharedCheck_4675_ = !lean_is_exclusive(v___y_4668_);
if (v_isSharedCheck_4675_ == 0)
{
lean_object* v_unused_4676_; 
v_unused_4676_ = lean_ctor_get(v___y_4668_, 0);
lean_dec(v_unused_4676_);
v___x_4670_ = v___y_4668_;
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
else
{
lean_dec(v___y_4668_);
v___x_4670_ = lean_box(0);
v_isShared_4671_ = v_isSharedCheck_4675_;
goto v_resetjp_4669_;
}
v_resetjp_4669_:
{
lean_object* v___x_4673_; 
if (v_isShared_4671_ == 0)
{
lean_ctor_set(v___x_4670_, 0, v_a_4666_);
v___x_4673_ = v___x_4670_;
goto v_reusejp_4672_;
}
else
{
lean_object* v_reuseFailAlloc_4674_; 
v_reuseFailAlloc_4674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4674_, 0, v_a_4666_);
v___x_4673_ = v_reuseFailAlloc_4674_;
goto v_reusejp_4672_;
}
v_reusejp_4672_:
{
return v___x_4673_;
}
}
}
else
{
lean_object* v_a_4677_; lean_object* v___x_4679_; uint8_t v_isShared_4680_; uint8_t v_isSharedCheck_4684_; 
lean_dec(v_a_4666_);
v_a_4677_ = lean_ctor_get(v___y_4668_, 0);
v_isSharedCheck_4684_ = !lean_is_exclusive(v___y_4668_);
if (v_isSharedCheck_4684_ == 0)
{
v___x_4679_ = v___y_4668_;
v_isShared_4680_ = v_isSharedCheck_4684_;
goto v_resetjp_4678_;
}
else
{
lean_inc(v_a_4677_);
lean_dec(v___y_4668_);
v___x_4679_ = lean_box(0);
v_isShared_4680_ = v_isSharedCheck_4684_;
goto v_resetjp_4678_;
}
v_resetjp_4678_:
{
lean_object* v___x_4682_; 
if (v_isShared_4680_ == 0)
{
v___x_4682_ = v___x_4679_;
goto v_reusejp_4681_;
}
else
{
lean_object* v_reuseFailAlloc_4683_; 
v_reuseFailAlloc_4683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4683_, 0, v_a_4677_);
v___x_4682_ = v_reuseFailAlloc_4683_;
goto v_reusejp_4681_;
}
v_reusejp_4681_:
{
return v___x_4682_;
}
}
}
}
}
else
{
return v___x_4665_;
}
}
else
{
lean_object* v_a_4695_; lean_object* v___x_4697_; uint8_t v_isShared_4698_; uint8_t v_isSharedCheck_4702_; 
lean_dec_ref(v_decls_4657_);
v_a_4695_ = lean_ctor_get(v___x_4663_, 0);
v_isSharedCheck_4702_ = !lean_is_exclusive(v___x_4663_);
if (v_isSharedCheck_4702_ == 0)
{
v___x_4697_ = v___x_4663_;
v_isShared_4698_ = v_isSharedCheck_4702_;
goto v_resetjp_4696_;
}
else
{
lean_inc(v_a_4695_);
lean_dec(v___x_4663_);
v___x_4697_ = lean_box(0);
v_isShared_4698_ = v_isSharedCheck_4702_;
goto v_resetjp_4696_;
}
v_resetjp_4696_:
{
lean_object* v___x_4700_; 
if (v_isShared_4698_ == 0)
{
v___x_4700_ = v___x_4697_;
goto v_reusejp_4699_;
}
else
{
lean_object* v_reuseFailAlloc_4701_; 
v_reuseFailAlloc_4701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4701_, 0, v_a_4695_);
v___x_4700_ = v_reuseFailAlloc_4701_;
goto v_reusejp_4699_;
}
v_reusejp_4699_:
{
return v___x_4700_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inferBorrow___lam__0___boxed(lean_object* v___x_4703_, lean_object* v_decls_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_){
_start:
{
lean_object* v_res_4710_; 
v_res_4710_ = l_Lean_Compiler_LCNF_inferBorrow___lam__0(v___x_4703_, v_decls_4704_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_);
lean_dec(v___y_4708_);
lean_dec_ref(v___y_4707_);
lean_dec(v___y_4706_);
lean_dec_ref(v___y_4705_);
lean_dec(v___x_4703_);
return v_res_4710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0(lean_object* v_as_4722_, size_t v_i_4723_, size_t v_stop_4724_, lean_object* v_b_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_){
_start:
{
lean_object* v___x_4731_; 
v___x_4731_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0___redArg(v_as_4722_, v_i_4723_, v_stop_4724_, v_b_4725_, v___y_4729_);
return v___x_4731_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0___boxed(lean_object* v_as_4732_, lean_object* v_i_4733_, lean_object* v_stop_4734_, lean_object* v_b_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_){
_start:
{
size_t v_i_boxed_4741_; size_t v_stop_boxed_4742_; lean_object* v_res_4743_; 
v_i_boxed_4741_ = lean_unbox_usize(v_i_4733_);
lean_dec(v_i_4733_);
v_stop_boxed_4742_ = lean_unbox_usize(v_stop_4734_);
lean_dec(v_stop_4734_);
v_res_4743_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_inferBorrow_spec__0(v_as_4732_, v_i_boxed_4741_, v_stop_boxed_4742_, v_b_4735_, v___y_4736_, v___y_4737_, v___y_4738_, v___y_4739_);
lean_dec(v___y_4739_);
lean_dec_ref(v___y_4738_);
lean_dec(v___y_4737_);
lean_dec_ref(v___y_4736_);
lean_dec_ref(v_as_4732_);
return v_res_4743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4810_; uint8_t v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; 
v___x_4810_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_infer_ownFVar___closed__2));
v___x_4811_ = 1;
v___x_4812_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_));
v___x_4813_ = l_Lean_registerTraceClass(v___x_4810_, v___x_4811_, v___x_4812_);
return v___x_4813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2____boxed(lean_object* v___y_4814_){
_start:
{
lean_object* v_res_4815_; 
v_res_4815_ = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_();
return v_res_4815_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ExportAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_MonadScope(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PrettyPrinter(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_Iterators_Producers_Monadic_Array(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_Iterators_Combinators_Monadic_Zip(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_InferBorrow(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ExportAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_MonadScope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_FVarUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_Iterators_Producers_Monadic_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_Iterators_Combinators_Monadic_Zip(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM = _init_l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM();
lean_mark_persistent(l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_instMonadScopeInferM);
res = l___private_Lean_Compiler_LCNF_InferBorrow_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_InferBorrow_419080822____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_InferBorrow(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ExportAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_MonadScope(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PrettyPrinter(uint8_t builtin);
lean_object* initialize_Std_Data_Iterators_Producers_Monadic_Array(uint8_t builtin);
lean_object* initialize_Std_Data_Iterators_Combinators_Monadic_Zip(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_InferBorrow(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExportAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_MonadScope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_FVarUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_Iterators_Producers_Monadic_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_Iterators_Combinators_Monadic_Zip(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_InferBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_InferBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_InferBorrow(builtin);
}
#ifdef __cplusplus
}
#endif
