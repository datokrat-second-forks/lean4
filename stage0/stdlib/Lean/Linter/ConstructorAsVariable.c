// Lean compiler output
// Module: Lean.Linter.ConstructorAsVariable
// Imports: public import Lean.Elab.Command public import Lean.Linter.Util
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
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Syntax_instHashableRange_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_instMonadCommandElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_instMonadCommandElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Info_updateContext_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_instBEqRange_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Elab_Info_range_x3f(lean_object*);
lean_object* l_Lean_Elab_Info_stx(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_Range_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_TermInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn_x27(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Command_addLinter(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "linter"};
static const lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "constructorNameAsVariable"};
static const lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(186, 218, 113, 226, 101, 176, 32, 79)}};
static const lean_ctor_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(145, 93, 54, 211, 83, 91, 108, 28)}};
static const lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "enable the linter that warns when bound variable names are nullary constructor names"};
static const lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value_aux_0),((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(53, 243, 121, 207, 53, 172, 203, 87)}};
static const lean_ctor_object l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value_aux_2),((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(170, 65, 101, 89, 237, 205, 227, 46)}};
static const lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_linter_constructorNameAsVariable;
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_constructorNameAsVariable_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_constructorNameAsVariable_spec__12___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_constructorNameAsVariable_spec__13(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_constructorNameAsVariable_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instMonadCommandElabM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_instMonadCommandElabM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unexpected context-free info tree node"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__2 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Server.InfoUtils.0.Lean.Elab.InfoTree.visitM.go"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__1 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lean.Server.InfoUtils"};
static const lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_constructorNameAsVariable_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___lam__0___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__24(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__24___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Local variable '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "' resembles constructor '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "' - "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "write '."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "' (with a dot) or '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__9;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "' to use the constructor."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__10_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__11;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Linter_constructorNameAsVariable___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_constructorNameAsVariable___lam__0___closed__0;
static lean_once_cell_t l_Lean_Linter_constructorNameAsVariable___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_constructorNameAsVariable___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Linter_constructorNameAsVariable___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_constructorNameAsVariable___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_constructorNameAsVariable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Linter_constructorNameAsVariable___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_constructorNameAsVariable___closed__0 = (const lean_object*)&l_Lean_Linter_constructorNameAsVariable___closed__0_value;
static const lean_ctor_object l_Lean_Linter_constructorNameAsVariable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Linter_constructorNameAsVariable___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_constructorNameAsVariable___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l_Lean_Linter_constructorNameAsVariable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Linter_constructorNameAsVariable___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(235, 75, 81, 128, 80, 183, 232, 251)}};
static const lean_object* l_Lean_Linter_constructorNameAsVariable___closed__1 = (const lean_object*)&l_Lean_Linter_constructorNameAsVariable___closed__1_value;
static const lean_ctor_object l_Lean_Linter_constructorNameAsVariable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_constructorNameAsVariable___closed__0_value),((lean_object*)&l_Lean_Linter_constructorNameAsVariable___closed__1_value)}};
static const lean_object* l_Lean_Linter_constructorNameAsVariable___closed__2 = (const lean_object*)&l_Lean_Linter_constructorNameAsVariable___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_constructorNameAsVariable = (const lean_object*)&l_Lean_Linter_constructorNameAsVariable___closed__2_value;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_constructorNameAsVariable_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_3137021433____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_3137021433____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_53_ = ((lean_object*)(l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_));
v___x_54_ = ((lean_object*)(l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_));
v___x_55_ = ((lean_object*)(l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_));
v___x_56_ = l_Lean_Option_register___at___00__private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4__spec__0(v___x_53_, v___x_54_, v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4____boxed(lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_();
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2___redArg(lean_object* v_o_59_, lean_object* v___y_60_){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v_env_64_; lean_object* v___x_65_; lean_object* v_toEnvExtension_66_; lean_object* v_asyncMode_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v_merged_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_78_; 
v___x_62_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_63_ = lean_st_ref_get(v___y_60_);
v_env_64_ = lean_ctor_get(v___x_63_, 0);
lean_inc_ref(v_env_64_);
lean_dec(v___x_63_);
v___x_65_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_66_ = lean_ctor_get(v___x_65_, 0);
v_asyncMode_67_ = lean_ctor_get(v_toEnvExtension_66_, 2);
v___x_68_ = lean_box(0);
v___x_69_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_62_, v___x_65_, v_env_64_, v_asyncMode_67_, v___x_68_);
v_merged_70_ = lean_ctor_get(v___x_69_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_78_ == 0)
{
lean_object* v_unused_79_; 
v_unused_79_ = lean_ctor_get(v___x_69_, 1);
lean_dec(v_unused_79_);
v___x_72_ = v___x_69_;
v_isShared_73_ = v_isSharedCheck_78_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_merged_70_);
lean_dec(v___x_69_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_78_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_75_; 
if (v_isShared_73_ == 0)
{
lean_ctor_set(v___x_72_, 1, v_merged_70_);
lean_ctor_set(v___x_72_, 0, v_o_59_);
v___x_75_ = v___x_72_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_o_59_);
lean_ctor_set(v_reuseFailAlloc_77_, 1, v_merged_70_);
v___x_75_ = v_reuseFailAlloc_77_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
return v___x_76_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2___redArg___boxed(lean_object* v_o_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2___redArg(v_o_80_, v___y_81_);
lean_dec(v___y_81_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2(lean_object* v_o_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2___redArg(v_o_84_, v___y_86_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2___boxed(lean_object* v_o_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2(v_o_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4___redArg(lean_object* v_e_94_, lean_object* v___y_95_){
_start:
{
uint8_t v___x_97_; 
v___x_97_ = l_Lean_Expr_hasMVar(v_e_94_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; 
v___x_98_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_98_, 0, v_e_94_);
return v___x_98_;
}
else
{
lean_object* v___x_99_; lean_object* v_mctx_100_; lean_object* v___x_101_; lean_object* v_fst_102_; lean_object* v_snd_103_; lean_object* v___x_104_; lean_object* v_cache_105_; lean_object* v_zetaDeltaFVarIds_106_; lean_object* v_postponed_107_; lean_object* v_diag_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_117_; 
v___x_99_ = lean_st_ref_get(v___y_95_);
v_mctx_100_ = lean_ctor_get(v___x_99_, 0);
lean_inc_ref(v_mctx_100_);
lean_dec(v___x_99_);
v___x_101_ = l_Lean_instantiateMVarsCore(v_mctx_100_, v_e_94_);
v_fst_102_ = lean_ctor_get(v___x_101_, 0);
lean_inc(v_fst_102_);
v_snd_103_ = lean_ctor_get(v___x_101_, 1);
lean_inc(v_snd_103_);
lean_dec_ref(v___x_101_);
v___x_104_ = lean_st_ref_take(v___y_95_);
v_cache_105_ = lean_ctor_get(v___x_104_, 1);
v_zetaDeltaFVarIds_106_ = lean_ctor_get(v___x_104_, 2);
v_postponed_107_ = lean_ctor_get(v___x_104_, 3);
v_diag_108_ = lean_ctor_get(v___x_104_, 4);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_104_);
if (v_isSharedCheck_117_ == 0)
{
lean_object* v_unused_118_; 
v_unused_118_ = lean_ctor_get(v___x_104_, 0);
lean_dec(v_unused_118_);
v___x_110_ = v___x_104_;
v_isShared_111_ = v_isSharedCheck_117_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_diag_108_);
lean_inc(v_postponed_107_);
lean_inc(v_zetaDeltaFVarIds_106_);
lean_inc(v_cache_105_);
lean_dec(v___x_104_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_117_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v_snd_103_);
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_snd_103_);
lean_ctor_set(v_reuseFailAlloc_116_, 1, v_cache_105_);
lean_ctor_set(v_reuseFailAlloc_116_, 2, v_zetaDeltaFVarIds_106_);
lean_ctor_set(v_reuseFailAlloc_116_, 3, v_postponed_107_);
lean_ctor_set(v_reuseFailAlloc_116_, 4, v_diag_108_);
v___x_113_ = v_reuseFailAlloc_116_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_st_ref_put(v___y_95_, v___x_113_);
v___x_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_115_, 0, v_fst_102_);
return v___x_115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4___redArg___boxed(lean_object* v_e_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4___redArg(v_e_119_, v___y_120_);
lean_dec(v___y_120_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4(lean_object* v_e_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4___redArg(v_e_123_, v___y_125_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4___boxed(lean_object* v_e_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4(v_e_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_constructorNameAsVariable_spec__12(lean_object* v_x_137_, lean_object* v_x_138_){
_start:
{
if (lean_obj_tag(v_x_138_) == 0)
{
return v_x_137_;
}
else
{
lean_object* v_key_139_; lean_object* v_value_140_; lean_object* v_tail_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v_key_139_ = lean_ctor_get(v_x_138_, 0);
v_value_140_ = lean_ctor_get(v_x_138_, 1);
v_tail_141_ = lean_ctor_get(v_x_138_, 2);
lean_inc(v_value_140_);
lean_inc(v_key_139_);
v___x_142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_142_, 0, v_key_139_);
lean_ctor_set(v___x_142_, 1, v_value_140_);
v___x_143_ = lean_array_push(v_x_137_, v___x_142_);
v_x_137_ = v___x_143_;
v_x_138_ = v_tail_141_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_constructorNameAsVariable_spec__12___boxed(lean_object* v_x_145_, lean_object* v_x_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_constructorNameAsVariable_spec__12(v_x_145_, v_x_146_);
lean_dec(v_x_146_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_constructorNameAsVariable_spec__13(lean_object* v_as_148_, size_t v_i_149_, size_t v_stop_150_, lean_object* v_b_151_){
_start:
{
uint8_t v___x_152_; 
v___x_152_ = lean_usize_dec_eq(v_i_149_, v_stop_150_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; lean_object* v___x_154_; size_t v___x_155_; size_t v___x_156_; 
v___x_153_ = lean_array_uget_borrowed(v_as_148_, v_i_149_);
v___x_154_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Linter_constructorNameAsVariable_spec__12(v_b_151_, v___x_153_);
v___x_155_ = ((size_t)1ULL);
v___x_156_ = lean_usize_add(v_i_149_, v___x_155_);
v_i_149_ = v___x_156_;
v_b_151_ = v___x_154_;
goto _start;
}
else
{
return v_b_151_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_constructorNameAsVariable_spec__13___boxed(lean_object* v_as_158_, lean_object* v_i_159_, lean_object* v_stop_160_, lean_object* v_b_161_){
_start:
{
size_t v_i_boxed_162_; size_t v_stop_boxed_163_; lean_object* v_res_164_; 
v_i_boxed_162_ = lean_unbox_usize(v_i_159_);
lean_dec(v_i_159_);
v_stop_boxed_163_ = lean_unbox_usize(v_stop_160_);
lean_dec(v_stop_160_);
v_res_164_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_constructorNameAsVariable_spec__13(v_as_158_, v_i_boxed_162_, v_stop_boxed_163_, v_b_161_);
lean_dec_ref(v_as_158_);
return v_res_164_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg___lam__0(lean_object* v_x1_165_, lean_object* v_x2_166_){
_start:
{
lean_object* v_fst_167_; lean_object* v_fst_168_; lean_object* v_start_169_; lean_object* v_start_170_; lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; 
v_fst_167_ = lean_ctor_get(v_x1_165_, 0);
v_fst_168_ = lean_ctor_get(v_x2_166_, 0);
v_start_169_ = lean_ctor_get(v_fst_167_, 0);
v_start_170_ = lean_ctor_get(v_fst_168_, 0);
v___x_171_ = lean_unsigned_to_nat(1u);
v___x_172_ = lean_nat_add(v_start_169_, v___x_171_);
v___x_173_ = lean_nat_dec_le(v___x_172_, v_start_170_);
lean_dec(v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg___lam__0___boxed(lean_object* v_x1_174_, lean_object* v_x2_175_){
_start:
{
uint8_t v_res_176_; lean_object* v_r_177_; 
v_res_176_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg___lam__0(v_x1_174_, v_x2_175_);
lean_dec_ref(v_x2_175_);
lean_dec_ref(v_x1_174_);
v_r_177_ = lean_box(v_res_176_);
return v_r_177_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16___redArg(lean_object* v_hi_178_, lean_object* v_pivot_179_, lean_object* v_as_180_, lean_object* v_i_181_, lean_object* v_k_182_){
_start:
{
uint8_t v___x_183_; 
v___x_183_ = lean_nat_dec_lt(v_k_182_, v_hi_178_);
if (v___x_183_ == 0)
{
lean_object* v___x_184_; lean_object* v___x_185_; 
lean_dec(v_k_182_);
v___x_184_ = lean_array_fswap(v_as_180_, v_i_181_, v_hi_178_);
v___x_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_185_, 0, v_i_181_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
return v___x_185_;
}
else
{
lean_object* v___x_186_; lean_object* v_fst_187_; lean_object* v_fst_188_; lean_object* v_start_189_; lean_object* v_start_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_186_ = lean_array_fget_borrowed(v_as_180_, v_k_182_);
v_fst_187_ = lean_ctor_get(v___x_186_, 0);
v_fst_188_ = lean_ctor_get(v_pivot_179_, 0);
v_start_189_ = lean_ctor_get(v_fst_187_, 0);
v_start_190_ = lean_ctor_get(v_fst_188_, 0);
v___x_191_ = lean_unsigned_to_nat(1u);
v___x_192_ = lean_nat_add(v_start_189_, v___x_191_);
v___x_193_ = lean_nat_dec_le(v___x_192_, v_start_190_);
lean_dec(v___x_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; 
v___x_194_ = lean_nat_add(v_k_182_, v___x_191_);
lean_dec(v_k_182_);
v_k_182_ = v___x_194_;
goto _start;
}
else
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_196_ = lean_array_fswap(v_as_180_, v_i_181_, v_k_182_);
v___x_197_ = lean_nat_add(v_i_181_, v___x_191_);
lean_dec(v_i_181_);
v___x_198_ = lean_nat_add(v_k_182_, v___x_191_);
lean_dec(v_k_182_);
v_as_180_ = v___x_196_;
v_i_181_ = v___x_197_;
v_k_182_ = v___x_198_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16___redArg___boxed(lean_object* v_hi_200_, lean_object* v_pivot_201_, lean_object* v_as_202_, lean_object* v_i_203_, lean_object* v_k_204_){
_start:
{
lean_object* v_res_205_; 
v_res_205_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16___redArg(v_hi_200_, v_pivot_201_, v_as_202_, v_i_203_, v_k_204_);
lean_dec_ref(v_pivot_201_);
lean_dec(v_hi_200_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg(lean_object* v_n_206_, lean_object* v_as_207_, lean_object* v_lo_208_, lean_object* v_hi_209_){
_start:
{
lean_object* v___y_211_; uint8_t v___x_221_; 
v___x_221_ = lean_nat_dec_lt(v_lo_208_, v_hi_209_);
if (v___x_221_ == 0)
{
lean_dec(v_lo_208_);
return v_as_207_;
}
else
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v_mid_224_; lean_object* v___y_226_; lean_object* v___y_232_; lean_object* v___x_237_; lean_object* v___x_238_; uint8_t v___x_239_; 
v___x_222_ = lean_nat_add(v_lo_208_, v_hi_209_);
v___x_223_ = lean_unsigned_to_nat(1u);
v_mid_224_ = lean_nat_shiftr(v___x_222_, v___x_223_);
lean_dec(v___x_222_);
v___x_237_ = lean_array_fget_borrowed(v_as_207_, v_mid_224_);
v___x_238_ = lean_array_fget_borrowed(v_as_207_, v_lo_208_);
v___x_239_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg___lam__0(v___x_237_, v___x_238_);
if (v___x_239_ == 0)
{
v___y_232_ = v_as_207_;
goto v___jp_231_;
}
else
{
lean_object* v___x_240_; 
v___x_240_ = lean_array_fswap(v_as_207_, v_lo_208_, v_mid_224_);
v___y_232_ = v___x_240_;
goto v___jp_231_;
}
v___jp_225_:
{
lean_object* v___x_227_; lean_object* v___x_228_; uint8_t v___x_229_; 
v___x_227_ = lean_array_fget_borrowed(v___y_226_, v_mid_224_);
v___x_228_ = lean_array_fget_borrowed(v___y_226_, v_hi_209_);
v___x_229_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg___lam__0(v___x_227_, v___x_228_);
if (v___x_229_ == 0)
{
lean_dec(v_mid_224_);
v___y_211_ = v___y_226_;
goto v___jp_210_;
}
else
{
lean_object* v___x_230_; 
v___x_230_ = lean_array_fswap(v___y_226_, v_mid_224_, v_hi_209_);
lean_dec(v_mid_224_);
v___y_211_ = v___x_230_;
goto v___jp_210_;
}
}
v___jp_231_:
{
lean_object* v___x_233_; lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_233_ = lean_array_fget_borrowed(v___y_232_, v_hi_209_);
v___x_234_ = lean_array_fget_borrowed(v___y_232_, v_lo_208_);
v___x_235_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg___lam__0(v___x_233_, v___x_234_);
if (v___x_235_ == 0)
{
v___y_226_ = v___y_232_;
goto v___jp_225_;
}
else
{
lean_object* v___x_236_; 
v___x_236_ = lean_array_fswap(v___y_232_, v_lo_208_, v_hi_209_);
v___y_226_ = v___x_236_;
goto v___jp_225_;
}
}
}
v___jp_210_:
{
lean_object* v_pivot_212_; lean_object* v___x_213_; lean_object* v_fst_214_; lean_object* v_snd_215_; uint8_t v___x_216_; 
v_pivot_212_ = lean_array_fget(v___y_211_, v_hi_209_);
lean_inc_n(v_lo_208_, 2);
v___x_213_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16___redArg(v_hi_209_, v_pivot_212_, v___y_211_, v_lo_208_, v_lo_208_);
lean_dec(v_pivot_212_);
v_fst_214_ = lean_ctor_get(v___x_213_, 0);
lean_inc(v_fst_214_);
v_snd_215_ = lean_ctor_get(v___x_213_, 1);
lean_inc(v_snd_215_);
lean_dec_ref(v___x_213_);
v___x_216_ = lean_nat_dec_le(v_hi_209_, v_fst_214_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_217_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg(v_n_206_, v_snd_215_, v_lo_208_, v_fst_214_);
v___x_218_ = lean_unsigned_to_nat(1u);
v___x_219_ = lean_nat_add(v_fst_214_, v___x_218_);
lean_dec(v_fst_214_);
v_as_207_ = v___x_217_;
v_lo_208_ = v___x_219_;
goto _start;
}
else
{
lean_dec(v_fst_214_);
lean_dec(v_lo_208_);
return v_snd_215_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg___boxed(lean_object* v_n_241_, lean_object* v_as_242_, lean_object* v_lo_243_, lean_object* v_hi_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg(v_n_241_, v_as_242_, v_lo_243_, v_hi_244_);
lean_dec(v_hi_244_);
lean_dec(v_n_241_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg(lean_object* v_msg_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v___f_258_; lean_object* v___f_259_; lean_object* v___f_260_; lean_object* v___f_261_; lean_object* v___f_262_; lean_object* v___f_263_; lean_object* v___f_264_; lean_object* v___f_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v_toApplicative_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_301_; 
v___f_258_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__0));
v___f_259_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__1));
v___f_260_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__2));
v___f_261_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__3));
v___f_262_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__4));
v___f_263_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_263_, 0, v___f_262_);
lean_closure_set(v___f_263_, 1, v___f_261_);
v___f_264_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_264_, 0, v___f_261_);
v___f_265_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__5));
v___x_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_266_, 0, v___f_258_);
lean_ctor_set(v___x_266_, 1, v___f_259_);
v___x_267_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
lean_ctor_set(v___x_267_, 1, v___f_260_);
lean_ctor_set(v___x_267_, 2, v___f_263_);
lean_ctor_set(v___x_267_, 3, v___f_264_);
lean_ctor_set(v___x_267_, 4, v___f_265_);
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v___f_261_);
v___x_269_ = l_StateRefT_x27_instMonad___redArg(v___x_268_);
v_toApplicative_270_ = lean_ctor_get(v___x_269_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_301_ == 0)
{
lean_object* v_unused_302_; 
v_unused_302_ = lean_ctor_get(v___x_269_, 1);
lean_dec(v_unused_302_);
v___x_272_ = v___x_269_;
v_isShared_273_ = v_isSharedCheck_301_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_toApplicative_270_);
lean_dec(v___x_269_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_301_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v_toFunctor_274_; lean_object* v_toSeq_275_; lean_object* v_toSeqLeft_276_; lean_object* v_toSeqRight_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_299_; 
v_toFunctor_274_ = lean_ctor_get(v_toApplicative_270_, 0);
v_toSeq_275_ = lean_ctor_get(v_toApplicative_270_, 2);
v_toSeqLeft_276_ = lean_ctor_get(v_toApplicative_270_, 3);
v_toSeqRight_277_ = lean_ctor_get(v_toApplicative_270_, 4);
v_isSharedCheck_299_ = !lean_is_exclusive(v_toApplicative_270_);
if (v_isSharedCheck_299_ == 0)
{
lean_object* v_unused_300_; 
v_unused_300_ = lean_ctor_get(v_toApplicative_270_, 1);
lean_dec(v_unused_300_);
v___x_279_ = v_toApplicative_270_;
v_isShared_280_ = v_isSharedCheck_299_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_toSeqRight_277_);
lean_inc(v_toSeqLeft_276_);
lean_inc(v_toSeq_275_);
lean_inc(v_toFunctor_274_);
lean_dec(v_toApplicative_270_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_299_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___f_281_; lean_object* v___f_282_; lean_object* v___f_283_; lean_object* v___f_284_; lean_object* v___x_285_; lean_object* v___f_286_; lean_object* v___f_287_; lean_object* v___f_288_; lean_object* v___x_290_; 
v___f_281_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__6));
v___f_282_ = ((lean_object*)(l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___closed__7));
lean_inc_ref(v_toFunctor_274_);
v___f_283_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_283_, 0, v_toFunctor_274_);
v___f_284_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_284_, 0, v_toFunctor_274_);
v___x_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_285_, 0, v___f_283_);
lean_ctor_set(v___x_285_, 1, v___f_284_);
v___f_286_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_286_, 0, v_toSeqRight_277_);
v___f_287_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_287_, 0, v_toSeqLeft_276_);
v___f_288_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_288_, 0, v_toSeq_275_);
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 4, v___f_286_);
lean_ctor_set(v___x_279_, 3, v___f_287_);
lean_ctor_set(v___x_279_, 2, v___f_288_);
lean_ctor_set(v___x_279_, 1, v___f_281_);
lean_ctor_set(v___x_279_, 0, v___x_285_);
v___x_290_ = v___x_279_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v___f_281_);
lean_ctor_set(v_reuseFailAlloc_298_, 2, v___f_288_);
lean_ctor_set(v_reuseFailAlloc_298_, 3, v___f_287_);
lean_ctor_set(v_reuseFailAlloc_298_, 4, v___f_286_);
v___x_290_ = v_reuseFailAlloc_298_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
lean_object* v___x_292_; 
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 1, v___f_282_);
lean_ctor_set(v___x_272_, 0, v___x_290_);
v___x_292_ = v___x_272_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v___x_290_);
lean_ctor_set(v_reuseFailAlloc_297_, 1, v___f_282_);
v___x_292_ = v_reuseFailAlloc_297_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_22316__overap_295_; lean_object* v___x_296_; 
v___x_293_ = lean_box(0);
v___x_294_ = l_instInhabitedOfMonad___redArg(v___x_292_, v___x_293_);
v___x_22316__overap_295_ = lean_panic_fn_borrowed(v___x_294_, v_msg_254_);
lean_dec(v___x_294_);
lean_inc(v___y_256_);
lean_inc_ref(v___y_255_);
v___x_296_ = lean_apply_3(v___x_22316__overap_295_, v___y_255_, v___y_256_, lean_box(0));
return v___x_296_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg___boxed(lean_object* v_msg_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg(v_msg_303_, v___y_304_, v___y_305_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
return v_res_307_;
}
}
static lean_object* _init_l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__3(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_311_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__2));
v___x_312_ = lean_unsigned_to_nat(21u);
v___x_313_ = lean_unsigned_to_nat(65u);
v___x_314_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__1));
v___x_315_ = ((lean_object*)(l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__0));
v___x_316_ = l_mkPanicMessageWithDecl(v___x_315_, v___x_314_, v___x_313_, v___x_312_, v___x_311_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg(lean_object* v_preNode_317_, lean_object* v_postNode_318_, lean_object* v_x_319_, lean_object* v_x_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
switch(lean_obj_tag(v_x_320_))
{
case 0:
{
lean_object* v_i_324_; lean_object* v_t_325_; lean_object* v___x_326_; 
v_i_324_ = lean_ctor_get(v_x_320_, 0);
lean_inc_ref(v_i_324_);
v_t_325_ = lean_ctor_get(v_x_320_, 1);
lean_inc_ref(v_t_325_);
lean_dec_ref_known(v_x_320_, 2);
v___x_326_ = l_Lean_Elab_PartialContextInfo_mergeIntoOuter_x3f(v_i_324_, v_x_319_);
v_x_319_ = v___x_326_;
v_x_320_ = v_t_325_;
goto _start;
}
case 1:
{
if (lean_obj_tag(v_x_319_) == 0)
{
lean_object* v___x_328_; lean_object* v___x_329_; 
lean_dec_ref_known(v_x_320_, 2);
lean_dec_ref(v_postNode_318_);
lean_dec_ref(v_preNode_317_);
v___x_328_ = lean_obj_once(&l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__3, &l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__3_once, _init_l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___closed__3);
v___x_329_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg(v___x_328_, v___y_321_, v___y_322_);
return v___x_329_;
}
else
{
lean_object* v_i_330_; lean_object* v_children_331_; lean_object* v_val_332_; lean_object* v___x_333_; 
v_i_330_ = lean_ctor_get(v_x_320_, 0);
lean_inc_ref_n(v_i_330_, 2);
v_children_331_ = lean_ctor_get(v_x_320_, 1);
lean_inc_ref_n(v_children_331_, 2);
lean_dec_ref_known(v_x_320_, 2);
v_val_332_ = lean_ctor_get(v_x_319_, 0);
lean_inc_n(v_val_332_, 2);
lean_inc_ref(v_preNode_317_);
lean_inc(v___y_322_);
lean_inc_ref(v___y_321_);
v___x_333_ = lean_apply_6(v_preNode_317_, v_val_332_, v_i_330_, v_children_331_, v___y_321_, v___y_322_, lean_box(0));
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; uint8_t v___x_335_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_333_, 1);
v___x_335_ = lean_unbox(v_a_334_);
lean_dec(v_a_334_);
if (v___x_335_ == 0)
{
lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_360_; 
lean_dec_ref(v_preNode_317_);
v_isSharedCheck_360_ = !lean_is_exclusive(v_x_319_);
if (v_isSharedCheck_360_ == 0)
{
lean_object* v_unused_361_; 
v_unused_361_ = lean_ctor_get(v_x_319_, 0);
lean_dec(v_unused_361_);
v___x_337_ = v_x_319_;
v_isShared_338_ = v_isSharedCheck_360_;
goto v_resetjp_336_;
}
else
{
lean_dec(v_x_319_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_360_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_box(0);
lean_inc(v___y_322_);
lean_inc_ref(v___y_321_);
v___x_340_ = lean_apply_7(v_postNode_318_, v_val_332_, v_i_330_, v_children_331_, v___x_339_, v___y_321_, v___y_322_, lean_box(0));
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_351_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_351_ == 0)
{
v___x_343_ = v___x_340_;
v_isShared_344_ = v_isSharedCheck_351_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_340_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_351_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 0, v_a_341_);
v___x_346_ = v___x_337_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_350_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
lean_object* v___x_348_; 
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 0, v___x_346_);
v___x_348_ = v___x_343_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v___x_346_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
lean_del_object(v___x_337_);
v_a_352_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_340_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_340_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v___x_362_ = l_Lean_Elab_Info_updateContext_x3f(v_x_319_, v_i_330_);
v___x_363_ = l_Lean_PersistentArray_toList___redArg(v_children_331_);
v___x_364_ = lean_box(0);
lean_inc_ref(v_postNode_318_);
v___x_365_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13___redArg(v_preNode_317_, v_postNode_318_, v___x_362_, v___x_363_, v___x_364_, v___y_321_, v___y_322_);
if (lean_obj_tag(v___x_365_) == 0)
{
lean_object* v_a_366_; lean_object* v___x_367_; 
v_a_366_ = lean_ctor_get(v___x_365_, 0);
lean_inc(v_a_366_);
lean_dec_ref_known(v___x_365_, 1);
lean_inc(v___y_322_);
lean_inc_ref(v___y_321_);
v___x_367_ = lean_apply_7(v_postNode_318_, v_val_332_, v_i_330_, v_children_331_, v_a_366_, v___y_321_, v___y_322_, lean_box(0));
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_376_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_376_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_372_; lean_object* v___x_374_; 
v___x_372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_372_, 0, v_a_368_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v___x_372_);
v___x_374_ = v___x_370_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
v_a_377_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_367_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_367_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
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
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
lean_dec(v_val_332_);
lean_dec_ref(v_children_331_);
lean_dec_ref(v_i_330_);
lean_dec_ref(v_postNode_318_);
v_a_385_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_365_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_365_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
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
}
else
{
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_400_; 
lean_dec(v_val_332_);
lean_dec_ref(v_children_331_);
lean_dec_ref(v_i_330_);
lean_dec_ref_known(v_x_319_, 1);
lean_dec_ref(v_postNode_318_);
lean_dec_ref(v_preNode_317_);
v_a_393_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_400_ == 0)
{
v___x_395_ = v___x_333_;
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v___x_333_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_398_; 
if (v_isShared_396_ == 0)
{
v___x_398_ = v___x_395_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_a_393_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
}
}
default: 
{
lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_408_; 
lean_dec(v_x_319_);
lean_dec_ref(v_postNode_318_);
lean_dec_ref(v_preNode_317_);
v_isSharedCheck_408_ = !lean_is_exclusive(v_x_320_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v_x_320_, 0);
lean_dec(v_unused_409_);
v___x_402_ = v_x_320_;
v_isShared_403_ = v_isSharedCheck_408_;
goto v_resetjp_401_;
}
else
{
lean_dec(v_x_320_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_408_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_404_; lean_object* v___x_406_; 
v___x_404_ = lean_box(0);
if (v_isShared_403_ == 0)
{
lean_ctor_set_tag(v___x_402_, 0);
lean_ctor_set(v___x_402_, 0, v___x_404_);
v___x_406_ = v___x_402_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_404_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13___redArg(lean_object* v_preNode_410_, lean_object* v_postNode_411_, lean_object* v___x_412_, lean_object* v_x_413_, lean_object* v_x_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
if (lean_obj_tag(v_x_413_) == 0)
{
lean_object* v___x_418_; lean_object* v___x_419_; 
lean_dec(v___x_412_);
lean_dec_ref(v_postNode_411_);
lean_dec_ref(v_preNode_410_);
v___x_418_ = l_List_reverse___redArg(v_x_414_);
v___x_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_419_, 0, v___x_418_);
return v___x_419_;
}
else
{
lean_object* v_head_420_; lean_object* v_tail_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_439_; 
v_head_420_ = lean_ctor_get(v_x_413_, 0);
v_tail_421_ = lean_ctor_get(v_x_413_, 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v_x_413_);
if (v_isSharedCheck_439_ == 0)
{
v___x_423_ = v_x_413_;
v_isShared_424_ = v_isSharedCheck_439_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_tail_421_);
lean_inc(v_head_420_);
lean_dec(v_x_413_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_439_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_425_; 
lean_inc(v___x_412_);
lean_inc_ref(v_postNode_411_);
lean_inc_ref(v_preNode_410_);
v___x_425_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg(v_preNode_410_, v_postNode_411_, v___x_412_, v_head_420_, v___y_415_, v___y_416_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_428_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_425_, 1);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 1, v_x_414_);
lean_ctor_set(v___x_423_, 0, v_a_426_);
v___x_428_ = v___x_423_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_426_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_x_414_);
v___x_428_ = v_reuseFailAlloc_430_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
v_x_413_ = v_tail_421_;
v_x_414_ = v___x_428_;
goto _start;
}
}
else
{
lean_object* v_a_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_438_; 
lean_del_object(v___x_423_);
lean_dec(v_tail_421_);
lean_dec(v_x_414_);
lean_dec(v___x_412_);
lean_dec_ref(v_postNode_411_);
lean_dec_ref(v_preNode_410_);
v_a_431_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_438_ == 0)
{
v___x_433_ = v___x_425_;
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_a_431_);
lean_dec(v___x_425_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_436_; 
if (v_isShared_434_ == 0)
{
v___x_436_ = v___x_433_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_a_431_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13___redArg___boxed(lean_object* v_preNode_440_, lean_object* v_postNode_441_, lean_object* v___x_442_, lean_object* v_x_443_, lean_object* v_x_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13___redArg(v_preNode_440_, v_postNode_441_, v___x_442_, v_x_443_, v_x_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg___boxed(lean_object* v_preNode_449_, lean_object* v_postNode_450_, lean_object* v_x_451_, lean_object* v_x_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg(v_preNode_449_, v_postNode_450_, v_x_451_, v_x_452_, v___y_453_, v___y_454_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7___lam__0(lean_object* v_postNode_457_, lean_object* v_ci_458_, lean_object* v_i_459_, lean_object* v_cs_460_, lean_object* v_x_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v___x_465_; 
lean_inc(v___y_463_);
lean_inc_ref(v___y_462_);
v___x_465_ = lean_apply_6(v_postNode_457_, v_ci_458_, v_i_459_, v_cs_460_, v___y_462_, v___y_463_, lean_box(0));
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7___lam__0___boxed(lean_object* v_postNode_466_, lean_object* v_ci_467_, lean_object* v_i_468_, lean_object* v_cs_469_, lean_object* v_x_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7___lam__0(v_postNode_466_, v_ci_467_, v_i_468_, v_cs_469_, v_x_470_, v___y_471_, v___y_472_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
lean_dec(v_x_470_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7(lean_object* v_preNode_475_, lean_object* v_postNode_476_, lean_object* v_ctx_x3f_477_, lean_object* v_t_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v___f_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___f_482_ = lean_alloc_closure((void*)(l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7___lam__0___boxed), 8, 1);
lean_closure_set(v___f_482_, 0, v_postNode_476_);
v___x_483_ = lean_box(0);
v___x_484_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg(v_preNode_475_, v___f_482_, v_ctx_x3f_477_, v_t_478_, v___y_479_, v___y_480_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_491_ == 0)
{
lean_object* v_unused_492_; 
v_unused_492_ = lean_ctor_get(v___x_484_, 0);
lean_dec(v_unused_492_);
v___x_486_ = v___x_484_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_dec(v___x_484_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 0, v___x_483_);
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v___x_483_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
else
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_500_; 
v_a_493_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_500_ == 0)
{
v___x_495_ = v___x_484_;
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_484_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_498_; 
if (v_isShared_496_ == 0)
{
v___x_498_ = v___x_495_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_a_493_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7___boxed(lean_object* v_preNode_501_, lean_object* v_postNode_502_, lean_object* v_ctx_x3f_503_, lean_object* v_t_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7(v_preNode_501_, v_postNode_502_, v_ctx_x3f_503_, v_t_504_, v___y_505_, v___y_506_);
lean_dec(v___y_506_);
lean_dec_ref(v___y_505_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__0(uint8_t v___x_509_, lean_object* v_x_510_, lean_object* v_x_511_, lean_object* v_x_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_box(v___x_509_);
v___x_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__0___boxed(lean_object* v___x_518_, lean_object* v_x_519_, lean_object* v_x_520_, lean_object* v_x_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_){
_start:
{
uint8_t v___x_25841__boxed_525_; lean_object* v_res_526_; 
v___x_25841__boxed_525_ = lean_unbox(v___x_518_);
v_res_526_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__0(v___x_25841__boxed_525_, v_x_519_, v_x_520_, v_x_521_, v___y_522_, v___y_523_);
lean_dec(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec_ref(v_x_521_);
lean_dec_ref(v_x_520_);
lean_dec_ref(v_x_519_);
return v_res_526_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1___redArg(lean_object* v_a_527_, lean_object* v_x_528_){
_start:
{
if (lean_obj_tag(v_x_528_) == 0)
{
uint8_t v___x_529_; 
v___x_529_ = 0;
return v___x_529_;
}
else
{
lean_object* v_key_530_; lean_object* v_tail_531_; uint8_t v___x_532_; 
v_key_530_ = lean_ctor_get(v_x_528_, 0);
v_tail_531_ = lean_ctor_get(v_x_528_, 2);
v___x_532_ = l_Lean_Syntax_instBEqRange_beq(v_key_530_, v_a_527_);
if (v___x_532_ == 0)
{
v_x_528_ = v_tail_531_;
goto _start;
}
else
{
return v___x_532_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1___redArg___boxed(lean_object* v_a_534_, lean_object* v_x_535_){
_start:
{
uint8_t v_res_536_; lean_object* v_r_537_; 
v_res_536_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1___redArg(v_a_534_, v_x_535_);
lean_dec(v_x_535_);
lean_dec_ref(v_a_534_);
v_r_537_ = lean_box(v_res_536_);
return v_r_537_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6_spec__16___redArg(lean_object* v_x_538_, lean_object* v_x_539_){
_start:
{
if (lean_obj_tag(v_x_539_) == 0)
{
return v_x_538_;
}
else
{
lean_object* v_key_540_; lean_object* v_value_541_; lean_object* v_tail_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_565_; 
v_key_540_ = lean_ctor_get(v_x_539_, 0);
v_value_541_ = lean_ctor_get(v_x_539_, 1);
v_tail_542_ = lean_ctor_get(v_x_539_, 2);
v_isSharedCheck_565_ = !lean_is_exclusive(v_x_539_);
if (v_isSharedCheck_565_ == 0)
{
v___x_544_ = v_x_539_;
v_isShared_545_ = v_isSharedCheck_565_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_tail_542_);
lean_inc(v_value_541_);
lean_inc(v_key_540_);
lean_dec(v_x_539_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_565_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_546_; uint64_t v___x_547_; uint64_t v___x_548_; uint64_t v___x_549_; uint64_t v_fold_550_; uint64_t v___x_551_; uint64_t v___x_552_; uint64_t v___x_553_; size_t v___x_554_; size_t v___x_555_; size_t v___x_556_; size_t v___x_557_; size_t v___x_558_; lean_object* v___x_559_; lean_object* v___x_561_; 
v___x_546_ = lean_array_get_size(v_x_538_);
v___x_547_ = l_Lean_Syntax_instHashableRange_hash(v_key_540_);
v___x_548_ = 32ULL;
v___x_549_ = lean_uint64_shift_right(v___x_547_, v___x_548_);
v_fold_550_ = lean_uint64_xor(v___x_547_, v___x_549_);
v___x_551_ = 16ULL;
v___x_552_ = lean_uint64_shift_right(v_fold_550_, v___x_551_);
v___x_553_ = lean_uint64_xor(v_fold_550_, v___x_552_);
v___x_554_ = lean_uint64_to_usize(v___x_553_);
v___x_555_ = lean_usize_of_nat(v___x_546_);
v___x_556_ = ((size_t)1ULL);
v___x_557_ = lean_usize_sub(v___x_555_, v___x_556_);
v___x_558_ = lean_usize_land(v___x_554_, v___x_557_);
v___x_559_ = lean_array_uget_borrowed(v_x_538_, v___x_558_);
lean_inc(v___x_559_);
if (v_isShared_545_ == 0)
{
lean_ctor_set(v___x_544_, 2, v___x_559_);
v___x_561_ = v___x_544_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_key_540_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v_value_541_);
lean_ctor_set(v_reuseFailAlloc_564_, 2, v___x_559_);
v___x_561_ = v_reuseFailAlloc_564_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
lean_object* v___x_562_; 
v___x_562_ = lean_array_uset(v_x_538_, v___x_558_, v___x_561_);
v_x_538_ = v___x_562_;
v_x_539_ = v_tail_542_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6___redArg(lean_object* v_i_566_, lean_object* v_source_567_, lean_object* v_target_568_){
_start:
{
lean_object* v___x_569_; uint8_t v___x_570_; 
v___x_569_ = lean_array_get_size(v_source_567_);
v___x_570_ = lean_nat_dec_lt(v_i_566_, v___x_569_);
if (v___x_570_ == 0)
{
lean_dec_ref(v_source_567_);
lean_dec(v_i_566_);
return v_target_568_;
}
else
{
lean_object* v_es_571_; lean_object* v___x_572_; lean_object* v_source_573_; lean_object* v_target_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v_es_571_ = lean_array_fget(v_source_567_, v_i_566_);
v___x_572_ = lean_box(0);
v_source_573_ = lean_array_fset(v_source_567_, v_i_566_, v___x_572_);
v_target_574_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6_spec__16___redArg(v_target_568_, v_es_571_);
v___x_575_ = lean_unsigned_to_nat(1u);
v___x_576_ = lean_nat_add(v_i_566_, v___x_575_);
lean_dec(v_i_566_);
v_i_566_ = v___x_576_;
v_source_567_ = v_source_573_;
v_target_568_ = v_target_574_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4___redArg(lean_object* v_data_578_){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v_nbuckets_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_579_ = lean_array_get_size(v_data_578_);
v___x_580_ = lean_unsigned_to_nat(2u);
v_nbuckets_581_ = lean_nat_mul(v___x_579_, v___x_580_);
v___x_582_ = lean_unsigned_to_nat(0u);
v___x_583_ = lean_box(0);
v___x_584_ = lean_mk_array(v_nbuckets_581_, v___x_583_);
v___x_585_ = lean_array_propagate_mark(v_data_578_, v___x_584_);
v___x_586_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6___redArg(v___x_582_, v_data_578_, v___x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_constructorNameAsVariable_spec__6___redArg(lean_object* v_m_587_, lean_object* v_a_588_, lean_object* v_b_589_){
_start:
{
lean_object* v_size_590_; lean_object* v_buckets_591_; lean_object* v___x_592_; uint64_t v___x_593_; uint64_t v___x_594_; uint64_t v___x_595_; uint64_t v_fold_596_; uint64_t v___x_597_; uint64_t v___x_598_; uint64_t v___x_599_; size_t v___x_600_; size_t v___x_601_; size_t v___x_602_; size_t v___x_603_; size_t v___x_604_; lean_object* v_bkt_605_; uint8_t v___x_606_; 
v_size_590_ = lean_ctor_get(v_m_587_, 0);
v_buckets_591_ = lean_ctor_get(v_m_587_, 1);
v___x_592_ = lean_array_get_size(v_buckets_591_);
v___x_593_ = l_Lean_Syntax_instHashableRange_hash(v_a_588_);
v___x_594_ = 32ULL;
v___x_595_ = lean_uint64_shift_right(v___x_593_, v___x_594_);
v_fold_596_ = lean_uint64_xor(v___x_593_, v___x_595_);
v___x_597_ = 16ULL;
v___x_598_ = lean_uint64_shift_right(v_fold_596_, v___x_597_);
v___x_599_ = lean_uint64_xor(v_fold_596_, v___x_598_);
v___x_600_ = lean_uint64_to_usize(v___x_599_);
v___x_601_ = lean_usize_of_nat(v___x_592_);
v___x_602_ = ((size_t)1ULL);
v___x_603_ = lean_usize_sub(v___x_601_, v___x_602_);
v___x_604_ = lean_usize_land(v___x_600_, v___x_603_);
v_bkt_605_ = lean_array_uget_borrowed(v_buckets_591_, v___x_604_);
v___x_606_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1___redArg(v_a_588_, v_bkt_605_);
if (v___x_606_ == 0)
{
lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_627_; 
lean_inc_ref(v_buckets_591_);
lean_inc(v_size_590_);
v_isSharedCheck_627_ = !lean_is_exclusive(v_m_587_);
if (v_isSharedCheck_627_ == 0)
{
lean_object* v_unused_628_; lean_object* v_unused_629_; 
v_unused_628_ = lean_ctor_get(v_m_587_, 1);
lean_dec(v_unused_628_);
v_unused_629_ = lean_ctor_get(v_m_587_, 0);
lean_dec(v_unused_629_);
v___x_608_ = v_m_587_;
v_isShared_609_ = v_isSharedCheck_627_;
goto v_resetjp_607_;
}
else
{
lean_dec(v_m_587_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_627_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v_size_x27_611_; lean_object* v___x_612_; lean_object* v_buckets_x27_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; uint8_t v___x_619_; 
v___x_610_ = lean_unsigned_to_nat(1u);
v_size_x27_611_ = lean_nat_add(v_size_590_, v___x_610_);
lean_dec(v_size_590_);
lean_inc(v_bkt_605_);
v___x_612_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_612_, 0, v_a_588_);
lean_ctor_set(v___x_612_, 1, v_b_589_);
lean_ctor_set(v___x_612_, 2, v_bkt_605_);
v_buckets_x27_613_ = lean_array_uset(v_buckets_591_, v___x_604_, v___x_612_);
v___x_614_ = lean_unsigned_to_nat(4u);
v___x_615_ = lean_nat_mul(v_size_x27_611_, v___x_614_);
v___x_616_ = lean_unsigned_to_nat(3u);
v___x_617_ = lean_nat_div(v___x_615_, v___x_616_);
lean_dec(v___x_615_);
v___x_618_ = lean_array_get_size(v_buckets_x27_613_);
v___x_619_ = lean_nat_dec_le(v___x_617_, v___x_618_);
lean_dec(v___x_617_);
if (v___x_619_ == 0)
{
lean_object* v_val_620_; lean_object* v___x_622_; 
v_val_620_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4___redArg(v_buckets_x27_613_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 1, v_val_620_);
lean_ctor_set(v___x_608_, 0, v_size_x27_611_);
v___x_622_ = v___x_608_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_size_x27_611_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_val_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
else
{
lean_object* v___x_625_; 
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 1, v_buckets_x27_613_);
lean_ctor_set(v___x_608_, 0, v_size_x27_611_);
v___x_625_ = v___x_608_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_size_x27_611_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_buckets_x27_613_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
else
{
lean_dec(v_b_589_);
lean_dec_ref(v_a_588_);
return v_m_587_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1___redArg(lean_object* v_m_630_, lean_object* v_a_631_){
_start:
{
lean_object* v_buckets_632_; lean_object* v___x_633_; uint64_t v___x_634_; uint64_t v___x_635_; uint64_t v___x_636_; uint64_t v_fold_637_; uint64_t v___x_638_; uint64_t v___x_639_; uint64_t v___x_640_; size_t v___x_641_; size_t v___x_642_; size_t v___x_643_; size_t v___x_644_; size_t v___x_645_; lean_object* v___x_646_; uint8_t v___x_647_; 
v_buckets_632_ = lean_ctor_get(v_m_630_, 1);
v___x_633_ = lean_array_get_size(v_buckets_632_);
v___x_634_ = l_Lean_Syntax_instHashableRange_hash(v_a_631_);
v___x_635_ = 32ULL;
v___x_636_ = lean_uint64_shift_right(v___x_634_, v___x_635_);
v_fold_637_ = lean_uint64_xor(v___x_634_, v___x_636_);
v___x_638_ = 16ULL;
v___x_639_ = lean_uint64_shift_right(v_fold_637_, v___x_638_);
v___x_640_ = lean_uint64_xor(v_fold_637_, v___x_639_);
v___x_641_ = lean_uint64_to_usize(v___x_640_);
v___x_642_ = lean_usize_of_nat(v___x_633_);
v___x_643_ = ((size_t)1ULL);
v___x_644_ = lean_usize_sub(v___x_642_, v___x_643_);
v___x_645_ = lean_usize_land(v___x_641_, v___x_644_);
v___x_646_ = lean_array_uget_borrowed(v_buckets_632_, v___x_645_);
v___x_647_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1___redArg(v_a_631_, v___x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1___redArg___boxed(lean_object* v_m_648_, lean_object* v_a_649_){
_start:
{
uint8_t v_res_650_; lean_object* v_r_651_; 
v_res_650_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1___redArg(v_m_648_, v_a_649_);
lean_dec_ref(v_a_649_);
lean_dec_ref(v_m_648_);
v_r_651_ = lean_box(v_res_650_);
return v_r_651_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__5___redArg(lean_object* v_a_652_, lean_object* v_b_653_, lean_object* v_x_654_){
_start:
{
if (lean_obj_tag(v_x_654_) == 0)
{
lean_dec(v_b_653_);
lean_dec_ref(v_a_652_);
return v_x_654_;
}
else
{
lean_object* v_key_655_; lean_object* v_value_656_; lean_object* v_tail_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_669_; 
v_key_655_ = lean_ctor_get(v_x_654_, 0);
v_value_656_ = lean_ctor_get(v_x_654_, 1);
v_tail_657_ = lean_ctor_get(v_x_654_, 2);
v_isSharedCheck_669_ = !lean_is_exclusive(v_x_654_);
if (v_isSharedCheck_669_ == 0)
{
v___x_659_ = v_x_654_;
v_isShared_660_ = v_isSharedCheck_669_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_tail_657_);
lean_inc(v_value_656_);
lean_inc(v_key_655_);
lean_dec(v_x_654_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_669_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
uint8_t v___x_661_; 
v___x_661_ = l_Lean_Syntax_instBEqRange_beq(v_key_655_, v_a_652_);
if (v___x_661_ == 0)
{
lean_object* v___x_662_; lean_object* v___x_664_; 
v___x_662_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__5___redArg(v_a_652_, v_b_653_, v_tail_657_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 2, v___x_662_);
v___x_664_ = v___x_659_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_key_655_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v_value_656_);
lean_ctor_set(v_reuseFailAlloc_665_, 2, v___x_662_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
else
{
lean_object* v___x_667_; 
lean_dec(v_value_656_);
lean_dec(v_key_655_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 1, v_b_653_);
lean_ctor_set(v___x_659_, 0, v_a_652_);
v___x_667_ = v___x_659_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_652_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v_b_653_);
lean_ctor_set(v_reuseFailAlloc_668_, 2, v_tail_657_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3___redArg(lean_object* v_m_670_, lean_object* v_a_671_, lean_object* v_b_672_){
_start:
{
lean_object* v_size_673_; lean_object* v_buckets_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_717_; 
v_size_673_ = lean_ctor_get(v_m_670_, 0);
v_buckets_674_ = lean_ctor_get(v_m_670_, 1);
v_isSharedCheck_717_ = !lean_is_exclusive(v_m_670_);
if (v_isSharedCheck_717_ == 0)
{
v___x_676_ = v_m_670_;
v_isShared_677_ = v_isSharedCheck_717_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_buckets_674_);
lean_inc(v_size_673_);
lean_dec(v_m_670_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_717_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; uint64_t v___x_679_; uint64_t v___x_680_; uint64_t v___x_681_; uint64_t v_fold_682_; uint64_t v___x_683_; uint64_t v___x_684_; uint64_t v___x_685_; size_t v___x_686_; size_t v___x_687_; size_t v___x_688_; size_t v___x_689_; size_t v___x_690_; lean_object* v_bkt_691_; uint8_t v___x_692_; 
v___x_678_ = lean_array_get_size(v_buckets_674_);
v___x_679_ = l_Lean_Syntax_instHashableRange_hash(v_a_671_);
v___x_680_ = 32ULL;
v___x_681_ = lean_uint64_shift_right(v___x_679_, v___x_680_);
v_fold_682_ = lean_uint64_xor(v___x_679_, v___x_681_);
v___x_683_ = 16ULL;
v___x_684_ = lean_uint64_shift_right(v_fold_682_, v___x_683_);
v___x_685_ = lean_uint64_xor(v_fold_682_, v___x_684_);
v___x_686_ = lean_uint64_to_usize(v___x_685_);
v___x_687_ = lean_usize_of_nat(v___x_678_);
v___x_688_ = ((size_t)1ULL);
v___x_689_ = lean_usize_sub(v___x_687_, v___x_688_);
v___x_690_ = lean_usize_land(v___x_686_, v___x_689_);
v_bkt_691_ = lean_array_uget_borrowed(v_buckets_674_, v___x_690_);
v___x_692_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1___redArg(v_a_671_, v_bkt_691_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; lean_object* v_size_x27_694_; lean_object* v___x_695_; lean_object* v_buckets_x27_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; uint8_t v___x_702_; 
v___x_693_ = lean_unsigned_to_nat(1u);
v_size_x27_694_ = lean_nat_add(v_size_673_, v___x_693_);
lean_dec(v_size_673_);
lean_inc(v_bkt_691_);
v___x_695_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_695_, 0, v_a_671_);
lean_ctor_set(v___x_695_, 1, v_b_672_);
lean_ctor_set(v___x_695_, 2, v_bkt_691_);
v_buckets_x27_696_ = lean_array_uset(v_buckets_674_, v___x_690_, v___x_695_);
v___x_697_ = lean_unsigned_to_nat(4u);
v___x_698_ = lean_nat_mul(v_size_x27_694_, v___x_697_);
v___x_699_ = lean_unsigned_to_nat(3u);
v___x_700_ = lean_nat_div(v___x_698_, v___x_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_array_get_size(v_buckets_x27_696_);
v___x_702_ = lean_nat_dec_le(v___x_700_, v___x_701_);
lean_dec(v___x_700_);
if (v___x_702_ == 0)
{
lean_object* v_val_703_; lean_object* v___x_705_; 
v_val_703_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4___redArg(v_buckets_x27_696_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 1, v_val_703_);
lean_ctor_set(v___x_676_, 0, v_size_x27_694_);
v___x_705_ = v___x_676_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_size_x27_694_);
lean_ctor_set(v_reuseFailAlloc_706_, 1, v_val_703_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
else
{
lean_object* v___x_708_; 
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 1, v_buckets_x27_696_);
lean_ctor_set(v___x_676_, 0, v_size_x27_694_);
v___x_708_ = v___x_676_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_size_x27_694_);
lean_ctor_set(v_reuseFailAlloc_709_, 1, v_buckets_x27_696_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
else
{
lean_object* v___x_710_; lean_object* v_buckets_x27_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
lean_inc(v_bkt_691_);
v___x_710_ = lean_box(0);
v_buckets_x27_711_ = lean_array_uset(v_buckets_674_, v___x_690_, v___x_710_);
v___x_712_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__5___redArg(v_a_671_, v_b_672_, v_bkt_691_);
v___x_713_ = lean_array_uset(v_buckets_x27_711_, v___x_690_, v___x_712_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 1, v___x_713_);
v___x_715_ = v___x_676_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_size_673_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v___x_713_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5___redArg(lean_object* v_str_718_, lean_object* v_val_719_, lean_object* v_info_720_, lean_object* v___x_721_, lean_object* v_val_722_, uint8_t v___x_723_, lean_object* v_as_x27_724_, lean_object* v_b_725_, lean_object* v___y_726_){
_start:
{
if (lean_obj_tag(v_as_x27_724_) == 0)
{
lean_object* v___x_728_; 
lean_dec_ref(v_val_722_);
lean_dec(v___x_721_);
v___x_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_728_, 0, v_b_725_);
return v___x_728_;
}
else
{
lean_object* v_head_729_; lean_object* v_tail_730_; lean_object* v___x_731_; lean_object* v___x_744_; lean_object* v_env_745_; lean_object* v___x_746_; 
v_head_729_ = lean_ctor_get(v_as_x27_724_, 0);
v_tail_730_ = lean_ctor_get(v_as_x27_724_, 1);
v___x_731_ = lean_box(0);
v___x_744_ = lean_st_ref_get(v___y_726_);
v_env_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc_ref(v_env_745_);
lean_dec(v___x_744_);
lean_inc(v_head_729_);
v___x_746_ = l_Lean_Environment_find_x3f(v_env_745_, v_head_729_, v___x_723_);
if (lean_obj_tag(v___x_746_) == 1)
{
lean_object* v_val_747_; 
v_val_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_val_747_);
lean_dec_ref_known(v___x_746_, 1);
if (lean_obj_tag(v_val_747_) == 6)
{
lean_object* v_val_748_; lean_object* v_numFields_749_; lean_object* v___x_750_; uint8_t v___x_751_; 
v_val_748_ = lean_ctor_get(v_val_747_, 0);
lean_inc_ref(v_val_748_);
lean_dec_ref_known(v_val_747_, 1);
v_numFields_749_ = lean_ctor_get(v_val_748_, 4);
lean_inc(v_numFields_749_);
lean_dec_ref(v_val_748_);
v___x_750_ = lean_unsigned_to_nat(0u);
v___x_751_ = lean_nat_dec_lt(v___x_750_, v_numFields_749_);
lean_dec(v_numFields_749_);
if (v___x_751_ == 0)
{
goto v___jp_732_;
}
else
{
v_as_x27_724_ = v_tail_730_;
v_b_725_ = v___x_731_;
goto _start;
}
}
else
{
lean_dec(v_val_747_);
goto v___jp_732_;
}
}
else
{
lean_dec(v___x_746_);
goto v___jp_732_;
}
v___jp_732_:
{
if (lean_obj_tag(v_head_729_) == 1)
{
lean_object* v_str_733_; uint8_t v___x_734_; 
v_str_733_ = lean_ctor_get(v_head_729_, 1);
v___x_734_ = lean_string_dec_eq(v_str_733_, v_str_718_);
if (v___x_734_ == 0)
{
v_as_x27_724_ = v_tail_730_;
v_b_725_ = v___x_731_;
goto _start;
}
else
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v___x_736_ = lean_st_ref_take(v_val_719_);
v___x_737_ = l_Lean_Elab_Info_stx(v_info_720_);
lean_inc_ref(v_head_729_);
lean_inc(v___x_721_);
v___x_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_721_);
lean_ctor_set(v___x_738_, 1, v_head_729_);
v___x_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_737_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
lean_inc_ref(v_val_722_);
v___x_740_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3___redArg(v___x_736_, v_val_722_, v___x_739_);
v___x_741_ = lean_st_ref_put(v_val_719_, v___x_740_);
v_as_x27_724_ = v_tail_730_;
v_b_725_ = v___x_731_;
goto _start;
}
}
else
{
v_as_x27_724_ = v_tail_730_;
v_b_725_ = v___x_731_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5___redArg___boxed(lean_object* v_str_753_, lean_object* v_val_754_, lean_object* v_info_755_, lean_object* v___x_756_, lean_object* v_val_757_, lean_object* v___x_758_, lean_object* v_as_x27_759_, lean_object* v_b_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
uint8_t v___x_26179__boxed_763_; lean_object* v_res_764_; 
v___x_26179__boxed_763_ = lean_unbox(v___x_758_);
v_res_764_ = l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5___redArg(v_str_753_, v_val_754_, v_info_755_, v___x_756_, v_val_757_, v___x_26179__boxed_763_, v_as_x27_759_, v_b_760_, v___y_761_);
lean_dec(v___y_761_);
lean_dec(v_as_x27_759_);
lean_dec_ref(v_info_755_);
lean_dec(v_val_754_);
lean_dec_ref(v_str_753_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__1(lean_object* v_ty_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_Lean_instantiateMVars___at___00Lean_Linter_constructorNameAsVariable_spec__4___redArg(v_ty_765_, v___y_767_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_773_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_771_, 1);
v___x_773_ = lean_whnf(v_a_772_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
return v___x_773_;
}
else
{
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
return v___x_771_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__1___boxed(lean_object* v_ty_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__1(v_ty_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__2(lean_object* v_val_781_, lean_object* v___x_782_, lean_object* v_val_783_, lean_object* v___x_784_, lean_object* v_val_785_, lean_object* v_ci_786_, lean_object* v_info_787_, lean_object* v_x_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
if (lean_obj_tag(v_info_787_) == 1)
{
lean_object* v_i_792_; lean_object* v_expr_793_; 
v_i_792_ = lean_ctor_get(v_info_787_, 0);
v_expr_793_ = lean_ctor_get(v_i_792_, 3);
switch(lean_obj_tag(v_expr_793_))
{
case 1:
{
lean_object* v_lctx_794_; lean_object* v_expectedType_x3f_795_; uint8_t v_isBinder_796_; lean_object* v_fvarId_797_; lean_object* v___x_798_; 
v_lctx_794_ = lean_ctor_get(v_i_792_, 1);
v_expectedType_x3f_795_ = lean_ctor_get(v_i_792_, 2);
v_isBinder_796_ = lean_ctor_get_uint8(v_i_792_, sizeof(void*)*4);
v_fvarId_797_ = lean_ctor_get(v_expr_793_, 0);
v___x_798_ = l_Lean_Elab_Info_range_x3f(v_info_787_);
if (lean_obj_tag(v___x_798_) == 1)
{
lean_object* v_val_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_954_; 
v_val_799_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_954_ == 0)
{
v___x_801_ = v___x_798_;
v_isShared_802_ = v_isSharedCheck_954_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_val_799_);
lean_dec(v___x_798_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_954_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_803_ = lean_st_ref_get(v_val_781_);
v___x_804_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1___redArg(v___x_803_, v_val_799_);
lean_dec(v___x_803_);
if (v___x_804_ == 0)
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = l_Lean_Elab_Info_stx(v_info_787_);
v___x_806_ = l_Lean_Syntax_getHeadInfo(v___x_805_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_dec_ref_known(v___x_806_, 4);
if (v_isBinder_796_ == 0)
{
lean_object* v___x_808_; 
lean_dec(v___x_805_);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
if (v_isShared_802_ == 0)
{
lean_ctor_set_tag(v___x_801_, 0);
lean_ctor_set(v___x_801_, 0, v___x_782_);
v___x_808_ = v___x_801_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v___x_782_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
else
{
lean_object* v___x_810_; 
lean_inc(v_fvarId_797_);
lean_inc_ref(v_lctx_794_);
v___x_810_ = lean_local_ctx_find(v_lctx_794_, v_fvarId_797_);
if (lean_obj_tag(v___x_810_) == 1)
{
lean_object* v_val_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_944_; 
v_val_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_944_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_944_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_val_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_944_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v_start_815_; uint8_t v___x_816_; 
v_start_815_ = lean_ctor_get(v_val_799_, 0);
v___x_816_ = l_Lean_Syntax_Range_contains(v_val_783_, v_start_815_, v___x_804_);
if (v___x_816_ == 0)
{
lean_object* v___x_818_; 
lean_dec(v_val_811_);
lean_dec(v___x_805_);
lean_del_object(v___x_801_);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
if (v_isShared_814_ == 0)
{
lean_ctor_set_tag(v___x_813_, 0);
lean_ctor_set(v___x_813_, 0, v___x_782_);
v___x_818_ = v___x_813_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_782_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
else
{
if (v___x_804_ == 0)
{
lean_object* v___x_820_; uint8_t v___x_821_; 
v___x_820_ = l_Lean_LocalDecl_userName(v_val_811_);
lean_dec(v_val_811_);
v___x_821_ = l_Lean_Name_hasMacroScopes(v___x_820_);
lean_dec(v___x_820_);
if (v___x_821_ == 0)
{
lean_object* v_toCommandContextInfo_822_; lean_object* v_options_823_; lean_object* v___x_824_; 
v_toCommandContextInfo_822_ = lean_ctor_get(v_ci_786_, 0);
v_options_823_ = lean_ctor_get(v_toCommandContextInfo_822_, 4);
lean_inc_ref(v_options_823_);
v___x_824_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2___redArg(v_options_823_, v___y_790_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_929_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_929_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_929_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_929_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
uint8_t v___x_829_; 
v___x_829_ = l_Lean_Linter_getLinterValue(v___x_784_, v_a_825_);
lean_dec(v_a_825_);
if (v___x_829_ == 0)
{
lean_object* v___x_831_; 
lean_del_object(v___x_813_);
lean_dec(v___x_805_);
lean_del_object(v___x_801_);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_782_);
v___x_831_ = v___x_827_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_782_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
else
{
lean_object* v___x_833_; 
v___x_833_ = l_Lean_Syntax_getId(v___x_805_);
lean_dec(v___x_805_);
if (lean_obj_tag(v___x_833_) == 1)
{
lean_object* v_pre_834_; lean_object* v_str_835_; lean_object* v_ty_837_; lean_object* v___y_838_; lean_object* v___y_839_; 
v_pre_834_ = lean_ctor_get(v___x_833_, 0);
lean_inc(v_pre_834_);
v_str_835_ = lean_ctor_get(v___x_833_, 1);
lean_inc_ref(v_str_835_);
if (lean_obj_tag(v_pre_834_) == 0)
{
lean_del_object(v___x_827_);
if (lean_obj_tag(v_expectedType_x3f_795_) == 1)
{
lean_object* v_val_896_; 
lean_del_object(v___x_801_);
v_val_896_ = lean_ctor_get(v_expectedType_x3f_795_, 0);
lean_inc(v_val_896_);
v_ty_837_ = v_val_896_;
v___y_838_ = v___y_789_;
v___y_839_ = v___y_790_;
goto v___jp_836_;
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; 
lean_inc_ref(v_expr_793_);
v___x_897_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_897_, 0, v_expr_793_);
lean_inc_ref(v_ci_786_);
lean_inc_ref(v_i_792_);
v___x_898_ = l_Lean_Elab_TermInfo_runMetaM___redArg(v_i_792_, v_ci_786_, v___x_897_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; 
lean_del_object(v___x_801_);
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref_known(v___x_898_, 1);
v_ty_837_ = v_a_899_;
v___y_838_ = v___y_789_;
v___y_839_ = v___y_790_;
goto v___jp_836_;
}
else
{
lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_920_; 
lean_dec_ref(v_str_835_);
lean_dec_ref_known(v___x_833_, 2);
lean_del_object(v___x_813_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
v_isSharedCheck_920_ = !lean_is_exclusive(v_val_799_);
if (v_isSharedCheck_920_ == 0)
{
lean_object* v_unused_921_; lean_object* v_unused_922_; 
v_unused_921_ = lean_ctor_get(v_val_799_, 1);
lean_dec(v_unused_921_);
v_unused_922_ = lean_ctor_get(v_val_799_, 0);
lean_dec(v_unused_922_);
v___x_901_ = v_val_799_;
v_isShared_902_ = v_isSharedCheck_920_;
goto v_resetjp_900_;
}
else
{
lean_dec(v_val_799_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_920_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_919_; 
v_a_903_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_919_ == 0)
{
v___x_905_ = v___x_898_;
v_isShared_906_ = v_isSharedCheck_919_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_898_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_919_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v_ref_907_; lean_object* v___x_908_; lean_object* v___x_910_; 
v_ref_907_ = lean_ctor_get(v___y_789_, 7);
v___x_908_ = lean_io_error_to_string(v_a_903_);
if (v_isShared_802_ == 0)
{
lean_ctor_set_tag(v___x_801_, 3);
lean_ctor_set(v___x_801_, 0, v___x_908_);
v___x_910_ = v___x_801_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v___x_908_);
v___x_910_ = v_reuseFailAlloc_918_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
lean_object* v___x_911_; lean_object* v___x_913_; 
v___x_911_ = l_Lean_MessageData_ofFormat(v___x_910_);
lean_inc(v_ref_907_);
if (v_isShared_902_ == 0)
{
lean_ctor_set(v___x_901_, 1, v___x_911_);
lean_ctor_set(v___x_901_, 0, v_ref_907_);
v___x_913_ = v___x_901_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_ref_907_);
lean_ctor_set(v_reuseFailAlloc_917_, 1, v___x_911_);
v___x_913_ = v_reuseFailAlloc_917_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
lean_object* v___x_915_; 
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 0, v___x_913_);
v___x_915_ = v___x_905_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v___x_913_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
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
lean_object* v___x_924_; 
lean_dec_ref(v_str_835_);
lean_dec(v_pre_834_);
lean_dec_ref_known(v___x_833_, 2);
lean_del_object(v___x_813_);
lean_del_object(v___x_801_);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_782_);
v___x_924_ = v___x_827_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_782_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
v___jp_836_:
{
lean_object* v___f_840_; lean_object* v___x_841_; 
v___f_840_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__1___boxed), 6, 1);
lean_closure_set(v___f_840_, 0, v_ty_837_);
lean_inc_ref(v_i_792_);
v___x_841_ = l_Lean_Elab_TermInfo_runMetaM___redArg(v_i_792_, v_ci_786_, v___f_840_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_872_; 
lean_del_object(v___x_813_);
v_a_842_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_872_ == 0)
{
v___x_844_ = v___x_841_;
v_isShared_845_ = v_isSharedCheck_872_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_841_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_872_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_846_; 
v___x_846_ = l_Lean_Expr_getAppFn_x27(v_a_842_);
lean_dec(v_a_842_);
if (lean_obj_tag(v___x_846_) == 4)
{
lean_object* v_declName_847_; lean_object* v___x_848_; lean_object* v_env_849_; lean_object* v___x_850_; 
v_declName_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_declName_847_);
lean_dec_ref_known(v___x_846_, 2);
v___x_848_ = lean_st_ref_get(v___y_839_);
v_env_849_ = lean_ctor_get(v___x_848_, 0);
lean_inc_ref(v_env_849_);
lean_dec(v___x_848_);
v___x_850_ = l_Lean_Environment_find_x3f(v_env_849_, v_declName_847_, v___x_804_);
if (lean_obj_tag(v___x_850_) == 1)
{
lean_object* v_val_851_; 
v_val_851_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_val_851_);
lean_dec_ref_known(v___x_850_, 1);
if (lean_obj_tag(v_val_851_) == 5)
{
lean_object* v_val_852_; lean_object* v_ctors_853_; lean_object* v___x_854_; 
lean_del_object(v___x_844_);
v_val_852_ = lean_ctor_get(v_val_851_, 0);
lean_inc_ref(v_val_852_);
lean_dec_ref_known(v_val_851_, 1);
v_ctors_853_ = lean_ctor_get(v_val_852_, 4);
lean_inc(v_ctors_853_);
lean_dec_ref(v_val_852_);
v___x_854_ = l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5___redArg(v_str_835_, v_val_781_, v_info_787_, v___x_833_, v_val_799_, v___x_804_, v_ctors_853_, v___x_782_, v___y_839_);
lean_dec(v_ctors_853_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_str_835_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_861_ == 0)
{
lean_object* v_unused_862_; 
v_unused_862_ = lean_ctor_get(v___x_854_, 0);
lean_dec(v_unused_862_);
v___x_856_ = v___x_854_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_dec(v___x_854_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 0, v___x_782_);
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_782_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
else
{
return v___x_854_;
}
}
else
{
lean_object* v___x_864_; 
lean_dec(v_val_851_);
lean_dec_ref(v_str_835_);
lean_dec_ref_known(v___x_833_, 2);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 0, v___x_782_);
v___x_864_ = v___x_844_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v___x_782_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
else
{
lean_object* v___x_867_; 
lean_dec(v___x_850_);
lean_dec_ref(v_str_835_);
lean_dec_ref_known(v___x_833_, 2);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 0, v___x_782_);
v___x_867_ = v___x_844_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_782_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
else
{
lean_object* v___x_870_; 
lean_dec_ref(v___x_846_);
lean_dec_ref(v_str_835_);
lean_dec_ref_known(v___x_833_, 2);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 0, v___x_782_);
v___x_870_ = v___x_844_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_782_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
else
{
lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_893_; 
lean_dec_ref(v_str_835_);
lean_dec_ref_known(v___x_833_, 2);
lean_dec_ref_known(v_info_787_, 1);
v_isSharedCheck_893_ = !lean_is_exclusive(v_val_799_);
if (v_isSharedCheck_893_ == 0)
{
lean_object* v_unused_894_; lean_object* v_unused_895_; 
v_unused_894_ = lean_ctor_get(v_val_799_, 1);
lean_dec(v_unused_894_);
v_unused_895_ = lean_ctor_get(v_val_799_, 0);
lean_dec(v_unused_895_);
v___x_874_ = v_val_799_;
v_isShared_875_ = v_isSharedCheck_893_;
goto v_resetjp_873_;
}
else
{
lean_dec(v_val_799_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_893_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_892_; 
v_a_876_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_892_ == 0)
{
v___x_878_ = v___x_841_;
v_isShared_879_ = v_isSharedCheck_892_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_841_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_892_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v_ref_880_; lean_object* v___x_881_; lean_object* v___x_883_; 
v_ref_880_ = lean_ctor_get(v___y_838_, 7);
v___x_881_ = lean_io_error_to_string(v_a_876_);
if (v_isShared_814_ == 0)
{
lean_ctor_set_tag(v___x_813_, 3);
lean_ctor_set(v___x_813_, 0, v___x_881_);
v___x_883_ = v___x_813_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_881_);
v___x_883_ = v_reuseFailAlloc_891_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
lean_object* v___x_884_; lean_object* v___x_886_; 
v___x_884_ = l_Lean_MessageData_ofFormat(v___x_883_);
lean_inc(v_ref_880_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 1, v___x_884_);
lean_ctor_set(v___x_874_, 0, v_ref_880_);
v___x_886_ = v___x_874_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_ref_880_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v___x_884_);
v___x_886_ = v_reuseFailAlloc_890_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_object* v___x_888_; 
if (v_isShared_879_ == 0)
{
lean_ctor_set(v___x_878_, 0, v___x_886_);
v___x_888_ = v___x_878_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_886_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
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
lean_object* v___x_927_; 
lean_dec(v___x_833_);
lean_del_object(v___x_813_);
lean_del_object(v___x_801_);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_782_);
v___x_927_ = v___x_827_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_782_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
}
else
{
lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_937_; 
lean_del_object(v___x_813_);
lean_dec(v___x_805_);
lean_del_object(v___x_801_);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
v_a_930_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_937_ == 0)
{
v___x_932_ = v___x_824_;
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_dec(v___x_824_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_935_; 
if (v_isShared_933_ == 0)
{
v___x_935_ = v___x_932_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_a_930_);
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
lean_object* v___x_939_; 
lean_dec(v___x_805_);
lean_del_object(v___x_801_);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
if (v_isShared_814_ == 0)
{
lean_ctor_set_tag(v___x_813_, 0);
lean_ctor_set(v___x_813_, 0, v___x_782_);
v___x_939_ = v___x_813_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_782_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
else
{
lean_object* v___x_942_; 
lean_dec(v_val_811_);
lean_dec(v___x_805_);
lean_del_object(v___x_801_);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
if (v_isShared_814_ == 0)
{
lean_ctor_set_tag(v___x_813_, 0);
lean_ctor_set(v___x_813_, 0, v___x_782_);
v___x_942_ = v___x_813_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_782_);
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
else
{
lean_object* v___x_946_; 
lean_dec(v___x_810_);
lean_dec(v___x_805_);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
if (v_isShared_802_ == 0)
{
lean_ctor_set_tag(v___x_801_, 0);
lean_ctor_set(v___x_801_, 0, v___x_782_);
v___x_946_ = v___x_801_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v___x_782_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
else
{
lean_object* v___x_949_; 
lean_dec(v___x_806_);
lean_dec(v___x_805_);
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
if (v_isShared_802_ == 0)
{
lean_ctor_set_tag(v___x_801_, 0);
lean_ctor_set(v___x_801_, 0, v___x_782_);
v___x_949_ = v___x_801_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v___x_782_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
else
{
lean_object* v___x_952_; 
lean_dec(v_val_799_);
lean_dec_ref_known(v_info_787_, 1);
lean_dec_ref(v_ci_786_);
if (v_isShared_802_ == 0)
{
lean_ctor_set_tag(v___x_801_, 0);
lean_ctor_set(v___x_801_, 0, v___x_782_);
v___x_952_ = v___x_801_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_782_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
else
{
lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec(v___x_798_);
lean_dec_ref(v_ci_786_);
v_isSharedCheck_961_ = !lean_is_exclusive(v_info_787_);
if (v_isSharedCheck_961_ == 0)
{
lean_object* v_unused_962_; 
v_unused_962_ = lean_ctor_get(v_info_787_, 0);
lean_dec(v_unused_962_);
v___x_956_ = v_info_787_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_dec(v_info_787_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set_tag(v___x_956_, 0);
lean_ctor_set(v___x_956_, 0, v___x_782_);
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_782_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
case 4:
{
uint8_t v_isBinder_963_; lean_object* v___x_964_; 
lean_dec_ref(v_ci_786_);
v_isBinder_963_ = lean_ctor_get_uint8(v_i_792_, sizeof(void*)*4);
v___x_964_ = l_Lean_Elab_Info_range_x3f(v_info_787_);
if (lean_obj_tag(v___x_964_) == 1)
{
lean_object* v_val_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_983_; 
v_val_965_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_983_ == 0)
{
v___x_967_ = v___x_964_;
v_isShared_968_ = v_isSharedCheck_983_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_val_965_);
lean_dec(v___x_964_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_983_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_969_ = l_Lean_Elab_Info_stx(v_info_787_);
lean_dec_ref_known(v_info_787_, 1);
v___x_970_ = l_Lean_Syntax_getHeadInfo(v___x_969_);
lean_dec(v___x_969_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_dec_ref_known(v___x_970_, 4);
if (v_isBinder_963_ == 0)
{
lean_object* v___x_972_; 
lean_dec(v_val_965_);
if (v_isShared_968_ == 0)
{
lean_ctor_set_tag(v___x_967_, 0);
lean_ctor_set(v___x_967_, 0, v___x_782_);
v___x_972_ = v___x_967_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v___x_782_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
else
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_978_; 
v___x_974_ = lean_st_ref_take(v_val_785_);
v___x_975_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_constructorNameAsVariable_spec__6___redArg(v___x_974_, v_val_965_, v___x_782_);
v___x_976_ = lean_st_ref_put(v_val_785_, v___x_975_);
if (v_isShared_968_ == 0)
{
lean_ctor_set_tag(v___x_967_, 0);
lean_ctor_set(v___x_967_, 0, v___x_976_);
v___x_978_ = v___x_967_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v___x_976_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
else
{
lean_object* v___x_981_; 
lean_dec(v___x_970_);
lean_dec(v_val_965_);
if (v_isShared_968_ == 0)
{
lean_ctor_set_tag(v___x_967_, 0);
lean_ctor_set(v___x_967_, 0, v___x_782_);
v___x_981_ = v___x_967_;
goto v_reusejp_980_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v___x_782_);
v___x_981_ = v_reuseFailAlloc_982_;
goto v_reusejp_980_;
}
v_reusejp_980_:
{
return v___x_981_;
}
}
}
}
else
{
lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v___x_964_);
v_isSharedCheck_990_ = !lean_is_exclusive(v_info_787_);
if (v_isSharedCheck_990_ == 0)
{
lean_object* v_unused_991_; 
v_unused_991_ = lean_ctor_get(v_info_787_, 0);
lean_dec(v_unused_991_);
v___x_985_ = v_info_787_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_dec(v_info_787_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
lean_ctor_set_tag(v___x_985_, 0);
lean_ctor_set(v___x_985_, 0, v___x_782_);
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_782_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
default: 
{
lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec_ref(v_ci_786_);
v_isSharedCheck_998_ = !lean_is_exclusive(v_info_787_);
if (v_isSharedCheck_998_ == 0)
{
lean_object* v_unused_999_; 
v_unused_999_ = lean_ctor_get(v_info_787_, 0);
lean_dec(v_unused_999_);
v___x_993_ = v_info_787_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_dec(v_info_787_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
lean_ctor_set_tag(v___x_993_, 0);
lean_ctor_set(v___x_993_, 0, v___x_782_);
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v___x_782_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
}
else
{
lean_object* v___x_1000_; 
lean_dec_ref(v_info_787_);
lean_dec_ref(v_ci_786_);
v___x_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1000_, 0, v___x_782_);
return v___x_1000_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__2___boxed(lean_object* v_val_1001_, lean_object* v___x_1002_, lean_object* v_val_1003_, lean_object* v___x_1004_, lean_object* v_val_1005_, lean_object* v_ci_1006_, lean_object* v_info_1007_, lean_object* v_x_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__2(v_val_1001_, v___x_1002_, v_val_1003_, v___x_1004_, v_val_1005_, v_ci_1006_, v_info_1007_, v_x_1008_, v___y_1009_, v___y_1010_);
lean_dec(v___y_1010_);
lean_dec_ref(v___y_1009_);
lean_dec_ref(v_x_1008_);
lean_dec(v_val_1005_);
lean_dec_ref(v___x_1004_);
lean_dec_ref(v_val_1003_);
lean_dec(v_val_1001_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9(uint8_t v___x_1013_, lean_object* v_val_1014_, lean_object* v_val_1015_, lean_object* v_val_1016_, lean_object* v_as_1017_, size_t v_sz_1018_, size_t v_i_1019_, lean_object* v_b_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
_start:
{
uint8_t v___x_1024_; 
v___x_1024_ = lean_usize_dec_lt(v_i_1019_, v_sz_1018_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; 
lean_dec(v_val_1016_);
lean_dec_ref(v_val_1015_);
lean_dec(v_val_1014_);
v___x_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1025_, 0, v_b_1020_);
return v___x_1025_;
}
else
{
lean_object* v___x_1026_; lean_object* v___f_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___f_1030_; lean_object* v_a_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1026_ = lean_box(v___x_1013_);
v___f_1027_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1027_, 0, v___x_1026_);
v___x_1028_ = l_Lean_Linter_linter_constructorNameAsVariable;
v___x_1029_ = lean_box(0);
lean_inc(v_val_1016_);
lean_inc_ref(v_val_1015_);
lean_inc(v_val_1014_);
v___f_1030_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___lam__2___boxed), 11, 5);
lean_closure_set(v___f_1030_, 0, v_val_1014_);
lean_closure_set(v___f_1030_, 1, v___x_1029_);
lean_closure_set(v___f_1030_, 2, v_val_1015_);
lean_closure_set(v___f_1030_, 3, v___x_1028_);
lean_closure_set(v___f_1030_, 4, v_val_1016_);
v_a_1031_ = lean_array_uget_borrowed(v_as_1017_, v_i_1019_);
v___x_1032_ = lean_box(0);
lean_inc(v_a_1031_);
v___x_1033_ = l_Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7(v___f_1027_, v___f_1030_, v___x_1032_, v_a_1031_, v___y_1021_, v___y_1022_);
if (lean_obj_tag(v___x_1033_) == 0)
{
size_t v___x_1034_; size_t v___x_1035_; 
lean_dec_ref_known(v___x_1033_, 1);
v___x_1034_ = ((size_t)1ULL);
v___x_1035_ = lean_usize_add(v_i_1019_, v___x_1034_);
v_i_1019_ = v___x_1035_;
v_b_1020_ = v___x_1029_;
goto _start;
}
else
{
lean_dec(v_val_1016_);
lean_dec_ref(v_val_1015_);
lean_dec(v_val_1014_);
return v___x_1033_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9___boxed(lean_object* v___x_1037_, lean_object* v_val_1038_, lean_object* v_val_1039_, lean_object* v_val_1040_, lean_object* v_as_1041_, lean_object* v_sz_1042_, lean_object* v_i_1043_, lean_object* v_b_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
uint8_t v___x_26689__boxed_1048_; size_t v_sz_boxed_1049_; size_t v_i_boxed_1050_; lean_object* v_res_1051_; 
v___x_26689__boxed_1048_ = lean_unbox(v___x_1037_);
v_sz_boxed_1049_ = lean_unbox_usize(v_sz_1042_);
lean_dec(v_sz_1042_);
v_i_boxed_1050_ = lean_unbox_usize(v_i_1043_);
lean_dec(v_i_1043_);
v_res_1051_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9(v___x_26689__boxed_1048_, v_val_1038_, v_val_1039_, v_val_1040_, v_as_1041_, v_sz_boxed_1049_, v_i_boxed_1050_, v_b_1044_, v___y_1045_, v___y_1046_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec_ref(v_as_1041_);
return v_res_1051_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___lam__0(uint8_t v_suppressElabErrors_1053_, uint8_t v___y_1054_, lean_object* v_x_1055_){
_start:
{
if (lean_obj_tag(v_x_1055_) == 1)
{
lean_object* v_pre_1056_; 
v_pre_1056_ = lean_ctor_get(v_x_1055_, 0);
if (lean_obj_tag(v_pre_1056_) == 0)
{
lean_object* v_str_1057_; lean_object* v___x_1058_; uint8_t v___x_1059_; 
v_str_1057_ = lean_ctor_get(v_x_1055_, 1);
v___x_1058_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___lam__0___closed__0));
v___x_1059_ = lean_string_dec_eq(v_str_1057_, v___x_1058_);
if (v___x_1059_ == 0)
{
return v___x_1059_;
}
else
{
return v_suppressElabErrors_1053_;
}
}
else
{
return v___y_1054_;
}
}
else
{
return v___y_1054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___lam__0___boxed(lean_object* v_suppressElabErrors_1060_, lean_object* v___y_1061_, lean_object* v_x_1062_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1063_; uint8_t v___y_26738__boxed_1064_; uint8_t v_res_1065_; lean_object* v_r_1066_; 
v_suppressElabErrors_boxed_1063_ = lean_unbox(v_suppressElabErrors_1060_);
v___y_26738__boxed_1064_ = lean_unbox(v___y_1061_);
v_res_1065_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___lam__0(v_suppressElabErrors_boxed_1063_, v___y_26738__boxed_1064_, v_x_1062_);
lean_dec(v_x_1062_);
v_r_1066_ = lean_box(v_res_1065_);
return v_r_1066_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__24(lean_object* v_opts_1067_, lean_object* v_opt_1068_){
_start:
{
lean_object* v_name_1069_; lean_object* v_defValue_1070_; lean_object* v_map_1071_; lean_object* v___x_1072_; 
v_name_1069_ = lean_ctor_get(v_opt_1068_, 0);
v_defValue_1070_ = lean_ctor_get(v_opt_1068_, 1);
v_map_1071_ = lean_ctor_get(v_opts_1067_, 0);
v___x_1072_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1071_, v_name_1069_);
if (lean_obj_tag(v___x_1072_) == 0)
{
uint8_t v___x_1073_; 
v___x_1073_ = lean_unbox(v_defValue_1070_);
return v___x_1073_;
}
else
{
lean_object* v_val_1074_; 
v_val_1074_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_val_1074_);
lean_dec_ref_known(v___x_1072_, 1);
if (lean_obj_tag(v_val_1074_) == 1)
{
uint8_t v_v_1075_; 
v_v_1075_ = lean_ctor_get_uint8(v_val_1074_, 0);
lean_dec_ref_known(v_val_1074_, 0);
return v_v_1075_;
}
else
{
uint8_t v___x_1076_; 
lean_dec(v_val_1074_);
v___x_1076_ = lean_unbox(v_defValue_1070_);
return v___x_1076_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__24___boxed(lean_object* v_opts_1077_, lean_object* v_opt_1078_){
_start:
{
uint8_t v_res_1079_; lean_object* v_r_1080_; 
v_res_1079_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__24(v_opts_1077_, v_opt_1078_);
lean_dec_ref(v_opt_1078_);
lean_dec_ref(v_opts_1077_);
v_r_1080_ = lean_box(v_res_1079_);
return v_r_1080_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__0(void){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1081_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__1(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
v___x_1082_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__0);
v___x_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1083_, 0, v___x_1082_);
return v___x_1083_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__2(void){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1084_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__1);
v___x_1085_ = lean_unsigned_to_nat(0u);
v___x_1086_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
lean_ctor_set(v___x_1086_, 1, v___x_1085_);
lean_ctor_set(v___x_1086_, 2, v___x_1085_);
lean_ctor_set(v___x_1086_, 3, v___x_1085_);
lean_ctor_set(v___x_1086_, 4, v___x_1084_);
lean_ctor_set(v___x_1086_, 5, v___x_1084_);
lean_ctor_set(v___x_1086_, 6, v___x_1084_);
lean_ctor_set(v___x_1086_, 7, v___x_1084_);
lean_ctor_set(v___x_1086_, 8, v___x_1084_);
lean_ctor_set(v___x_1086_, 9, v___x_1084_);
lean_ctor_set(v___x_1086_, 10, v___x_1084_);
return v___x_1086_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__3(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1087_ = lean_unsigned_to_nat(32u);
v___x_1088_ = lean_mk_empty_array_with_capacity(v___x_1087_);
v___x_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
return v___x_1089_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__4(void){
_start:
{
size_t v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1090_ = ((size_t)5ULL);
v___x_1091_ = lean_unsigned_to_nat(0u);
v___x_1092_ = lean_unsigned_to_nat(32u);
v___x_1093_ = lean_mk_empty_array_with_capacity(v___x_1092_);
v___x_1094_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__3);
v___x_1095_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
lean_ctor_set(v___x_1095_, 1, v___x_1093_);
lean_ctor_set(v___x_1095_, 2, v___x_1091_);
lean_ctor_set(v___x_1095_, 3, v___x_1091_);
lean_ctor_set_usize(v___x_1095_, 4, v___x_1090_);
return v___x_1095_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__5(void){
_start:
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1096_ = lean_box(1);
v___x_1097_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__4);
v___x_1098_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__1);
v___x_1099_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1098_);
lean_ctor_set(v___x_1099_, 1, v___x_1097_);
lean_ctor_set(v___x_1099_, 2, v___x_1096_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg(lean_object* v_msgData_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v___x_1103_; lean_object* v_env_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v_scopes_1107_; lean_object* v___x_1108_; lean_object* v_opts_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1103_ = lean_st_ref_get(v___y_1101_);
v_env_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc_ref(v_env_1104_);
lean_dec(v___x_1103_);
v___x_1105_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1106_ = lean_st_ref_get(v___y_1101_);
v_scopes_1107_ = lean_ctor_get(v___x_1106_, 2);
lean_inc(v_scopes_1107_);
lean_dec(v___x_1106_);
v___x_1108_ = l_List_head_x21___redArg(v___x_1105_, v_scopes_1107_);
lean_dec(v_scopes_1107_);
v_opts_1109_ = lean_ctor_get(v___x_1108_, 1);
lean_inc_ref(v_opts_1109_);
lean_dec(v___x_1108_);
v___x_1110_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__2);
v___x_1111_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___closed__5);
v___x_1112_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1112_, 0, v_env_1104_);
lean_ctor_set(v___x_1112_, 1, v___x_1110_);
lean_ctor_set(v___x_1112_, 2, v___x_1111_);
lean_ctor_set(v___x_1112_, 3, v_opts_1109_);
v___x_1113_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
lean_ctor_set(v___x_1113_, 1, v_msgData_1100_);
v___x_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg___boxed(lean_object* v_msgData_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg(v_msgData_1115_, v___y_1116_);
lean_dec(v___y_1116_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16(lean_object* v_ref_1120_, lean_object* v_msgData_1121_, uint8_t v_severity_1122_, uint8_t v_isSilent_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v___y_1128_; lean_object* v___y_1129_; uint8_t v___y_1130_; uint8_t v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; uint8_t v___y_1193_; uint8_t v___y_1194_; uint8_t v___y_1195_; lean_object* v___y_1196_; lean_object* v___y_1197_; uint8_t v___y_1221_; lean_object* v___y_1222_; uint8_t v___y_1223_; uint8_t v___y_1224_; lean_object* v___y_1225_; uint8_t v___y_1229_; uint8_t v___y_1230_; uint8_t v___y_1231_; uint8_t v___x_1246_; uint8_t v___y_1248_; uint8_t v___y_1249_; uint8_t v___y_1250_; uint8_t v___y_1252_; uint8_t v___x_1264_; 
v___x_1246_ = 2;
v___x_1264_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1122_, v___x_1246_);
if (v___x_1264_ == 0)
{
v___y_1252_ = v___x_1264_;
goto v___jp_1251_;
}
else
{
uint8_t v___x_1265_; 
lean_inc_ref(v_msgData_1121_);
v___x_1265_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1121_);
v___y_1252_ = v___x_1265_;
goto v___jp_1251_;
}
v___jp_1127_:
{
lean_object* v___x_1136_; 
v___x_1136_ = l_Lean_Elab_Command_getScope___redArg(v___y_1135_);
if (lean_obj_tag(v___x_1136_) == 0)
{
lean_object* v_a_1137_; lean_object* v_currNamespace_1138_; lean_object* v___x_1139_; 
v_a_1137_ = lean_ctor_get(v___x_1136_, 0);
lean_inc(v_a_1137_);
lean_dec_ref_known(v___x_1136_, 1);
v_currNamespace_1138_ = lean_ctor_get(v_a_1137_, 2);
lean_inc(v_currNamespace_1138_);
lean_dec(v_a_1137_);
v___x_1139_ = l_Lean_Elab_Command_getScope___redArg(v___y_1135_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1175_; 
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1142_ = v___x_1139_;
v_isShared_1143_ = v_isSharedCheck_1175_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1139_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1175_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v_openDecls_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v_env_1149_; lean_object* v_messages_1150_; lean_object* v_scopes_1151_; lean_object* v_usedQuotCtxts_1152_; lean_object* v_nextMacroScope_1153_; lean_object* v_maxRecDepth_1154_; lean_object* v_ngen_1155_; lean_object* v_auxDeclNGen_1156_; lean_object* v_infoState_1157_; lean_object* v_traceState_1158_; lean_object* v_snapshotTasks_1159_; lean_object* v_prevLinterStates_1160_; lean_object* v_codeQualityEntryTasks_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1174_; 
v_openDecls_1144_ = lean_ctor_get(v_a_1140_, 3);
lean_inc(v_openDecls_1144_);
lean_dec(v_a_1140_);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v_currNamespace_1138_);
lean_ctor_set(v___x_1145_, 1, v_openDecls_1144_);
v___x_1146_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1145_);
lean_ctor_set(v___x_1146_, 1, v___y_1134_);
lean_inc_ref(v___y_1128_);
lean_inc_ref(v___y_1133_);
v___x_1147_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1147_, 0, v___y_1133_);
lean_ctor_set(v___x_1147_, 1, v___y_1129_);
lean_ctor_set(v___x_1147_, 2, v___y_1132_);
lean_ctor_set(v___x_1147_, 3, v___y_1128_);
lean_ctor_set(v___x_1147_, 4, v___x_1146_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*5, v___y_1130_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*5 + 1, v___y_1131_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*5 + 2, v_isSilent_1123_);
v___x_1148_ = lean_st_ref_take(v___y_1135_);
v_env_1149_ = lean_ctor_get(v___x_1148_, 0);
v_messages_1150_ = lean_ctor_get(v___x_1148_, 1);
v_scopes_1151_ = lean_ctor_get(v___x_1148_, 2);
v_usedQuotCtxts_1152_ = lean_ctor_get(v___x_1148_, 3);
v_nextMacroScope_1153_ = lean_ctor_get(v___x_1148_, 4);
v_maxRecDepth_1154_ = lean_ctor_get(v___x_1148_, 5);
v_ngen_1155_ = lean_ctor_get(v___x_1148_, 6);
v_auxDeclNGen_1156_ = lean_ctor_get(v___x_1148_, 7);
v_infoState_1157_ = lean_ctor_get(v___x_1148_, 8);
v_traceState_1158_ = lean_ctor_get(v___x_1148_, 9);
v_snapshotTasks_1159_ = lean_ctor_get(v___x_1148_, 10);
v_prevLinterStates_1160_ = lean_ctor_get(v___x_1148_, 11);
v_codeQualityEntryTasks_1161_ = lean_ctor_get(v___x_1148_, 12);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1163_ = v___x_1148_;
v_isShared_1164_ = v_isSharedCheck_1174_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1161_);
lean_inc(v_prevLinterStates_1160_);
lean_inc(v_snapshotTasks_1159_);
lean_inc(v_traceState_1158_);
lean_inc(v_infoState_1157_);
lean_inc(v_auxDeclNGen_1156_);
lean_inc(v_ngen_1155_);
lean_inc(v_maxRecDepth_1154_);
lean_inc(v_nextMacroScope_1153_);
lean_inc(v_usedQuotCtxts_1152_);
lean_inc(v_scopes_1151_);
lean_inc(v_messages_1150_);
lean_inc(v_env_1149_);
lean_dec(v___x_1148_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1174_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1168_; 
v___x_1165_ = lean_box(0);
v___x_1166_ = l_Lean_MessageLog_add(v___x_1147_, v_messages_1150_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 1, v___x_1166_);
v___x_1168_ = v___x_1163_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_env_1149_);
lean_ctor_set(v_reuseFailAlloc_1173_, 1, v___x_1166_);
lean_ctor_set(v_reuseFailAlloc_1173_, 2, v_scopes_1151_);
lean_ctor_set(v_reuseFailAlloc_1173_, 3, v_usedQuotCtxts_1152_);
lean_ctor_set(v_reuseFailAlloc_1173_, 4, v_nextMacroScope_1153_);
lean_ctor_set(v_reuseFailAlloc_1173_, 5, v_maxRecDepth_1154_);
lean_ctor_set(v_reuseFailAlloc_1173_, 6, v_ngen_1155_);
lean_ctor_set(v_reuseFailAlloc_1173_, 7, v_auxDeclNGen_1156_);
lean_ctor_set(v_reuseFailAlloc_1173_, 8, v_infoState_1157_);
lean_ctor_set(v_reuseFailAlloc_1173_, 9, v_traceState_1158_);
lean_ctor_set(v_reuseFailAlloc_1173_, 10, v_snapshotTasks_1159_);
lean_ctor_set(v_reuseFailAlloc_1173_, 11, v_prevLinterStates_1160_);
lean_ctor_set(v_reuseFailAlloc_1173_, 12, v_codeQualityEntryTasks_1161_);
v___x_1168_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
lean_object* v___x_1169_; lean_object* v___x_1171_; 
v___x_1169_ = lean_st_ref_put(v___y_1135_, v___x_1168_);
if (v_isShared_1143_ == 0)
{
lean_ctor_set(v___x_1142_, 0, v___x_1165_);
v___x_1171_ = v___x_1142_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v___x_1165_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
}
else
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
lean_dec(v_currNamespace_1138_);
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1129_);
v_a_1176_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v___x_1139_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1139_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
else
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1129_);
v_a_1184_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1136_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1136_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
v___jp_1192_:
{
lean_object* v_fileName_1198_; lean_object* v_fileMap_1199_; uint8_t v_suppressElabErrors_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___f_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v_a_1206_; lean_object* v___x_1208_; uint8_t v_isShared_1209_; uint8_t v_isSharedCheck_1219_; 
v_fileName_1198_ = lean_ctor_get(v___y_1124_, 0);
v_fileMap_1199_ = lean_ctor_get(v___y_1124_, 1);
v_suppressElabErrors_1200_ = lean_ctor_get_uint8(v___y_1124_, sizeof(void*)*10);
v___x_1201_ = lean_box(v_suppressElabErrors_1200_);
v___x_1202_ = lean_box(v___y_1193_);
v___f_1203_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1203_, 0, v___x_1201_);
lean_closure_set(v___f_1203_, 1, v___x_1202_);
v___x_1204_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1121_);
v___x_1205_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg(v___x_1204_, v___y_1125_);
v_a_1206_ = lean_ctor_get(v___x_1205_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1208_ = v___x_1205_;
v_isShared_1209_ = v_isSharedCheck_1219_;
goto v_resetjp_1207_;
}
else
{
lean_inc(v_a_1206_);
lean_dec(v___x_1205_);
v___x_1208_ = lean_box(0);
v_isShared_1209_ = v_isSharedCheck_1219_;
goto v_resetjp_1207_;
}
v_resetjp_1207_:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
lean_inc_ref_n(v_fileMap_1199_, 2);
v___x_1210_ = l_Lean_FileMap_toPosition(v_fileMap_1199_, v___y_1196_);
lean_dec(v___y_1196_);
v___x_1211_ = l_Lean_FileMap_toPosition(v_fileMap_1199_, v___y_1197_);
lean_dec(v___y_1197_);
v___x_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1211_);
v___x_1213_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___closed__0));
if (v_suppressElabErrors_1200_ == 0)
{
lean_del_object(v___x_1208_);
lean_dec_ref(v___f_1203_);
v___y_1128_ = v___x_1213_;
v___y_1129_ = v___x_1210_;
v___y_1130_ = v___y_1194_;
v___y_1131_ = v___y_1195_;
v___y_1132_ = v___x_1212_;
v___y_1133_ = v_fileName_1198_;
v___y_1134_ = v_a_1206_;
v___y_1135_ = v___y_1125_;
goto v___jp_1127_;
}
else
{
uint8_t v___x_1214_; 
lean_inc(v_a_1206_);
v___x_1214_ = l_Lean_MessageData_hasTag(v___f_1203_, v_a_1206_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; lean_object* v___x_1217_; 
lean_dec_ref_known(v___x_1212_, 1);
lean_dec_ref(v___x_1210_);
lean_dec(v_a_1206_);
v___x_1215_ = lean_box(0);
if (v_isShared_1209_ == 0)
{
lean_ctor_set(v___x_1208_, 0, v___x_1215_);
v___x_1217_ = v___x_1208_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1215_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
else
{
lean_del_object(v___x_1208_);
v___y_1128_ = v___x_1213_;
v___y_1129_ = v___x_1210_;
v___y_1130_ = v___y_1194_;
v___y_1131_ = v___y_1195_;
v___y_1132_ = v___x_1212_;
v___y_1133_ = v_fileName_1198_;
v___y_1134_ = v_a_1206_;
v___y_1135_ = v___y_1125_;
goto v___jp_1127_;
}
}
}
}
v___jp_1220_:
{
lean_object* v___x_1226_; 
v___x_1226_ = l_Lean_Syntax_getTailPos_x3f(v___y_1222_, v___y_1223_);
lean_dec(v___y_1222_);
if (lean_obj_tag(v___x_1226_) == 0)
{
lean_inc(v___y_1225_);
v___y_1193_ = v___y_1221_;
v___y_1194_ = v___y_1223_;
v___y_1195_ = v___y_1224_;
v___y_1196_ = v___y_1225_;
v___y_1197_ = v___y_1225_;
goto v___jp_1192_;
}
else
{
lean_object* v_val_1227_; 
v_val_1227_ = lean_ctor_get(v___x_1226_, 0);
lean_inc(v_val_1227_);
lean_dec_ref_known(v___x_1226_, 1);
v___y_1193_ = v___y_1221_;
v___y_1194_ = v___y_1223_;
v___y_1195_ = v___y_1224_;
v___y_1196_ = v___y_1225_;
v___y_1197_ = v_val_1227_;
goto v___jp_1192_;
}
}
v___jp_1228_:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Lean_Elab_Command_getRef___redArg(v___y_1124_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v_a_1233_; lean_object* v_ref_1234_; lean_object* v___x_1235_; 
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_a_1233_);
lean_dec_ref_known(v___x_1232_, 1);
v_ref_1234_ = l_Lean_replaceRef(v_ref_1120_, v_a_1233_);
lean_dec(v_a_1233_);
v___x_1235_ = l_Lean_Syntax_getPos_x3f(v_ref_1234_, v___y_1230_);
if (lean_obj_tag(v___x_1235_) == 0)
{
lean_object* v___x_1236_; 
v___x_1236_ = lean_unsigned_to_nat(0u);
v___y_1221_ = v___y_1229_;
v___y_1222_ = v_ref_1234_;
v___y_1223_ = v___y_1230_;
v___y_1224_ = v___y_1231_;
v___y_1225_ = v___x_1236_;
goto v___jp_1220_;
}
else
{
lean_object* v_val_1237_; 
v_val_1237_ = lean_ctor_get(v___x_1235_, 0);
lean_inc(v_val_1237_);
lean_dec_ref_known(v___x_1235_, 1);
v___y_1221_ = v___y_1229_;
v___y_1222_ = v_ref_1234_;
v___y_1223_ = v___y_1230_;
v___y_1224_ = v___y_1231_;
v___y_1225_ = v_val_1237_;
goto v___jp_1220_;
}
}
else
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
lean_dec_ref(v_msgData_1121_);
v_a_1238_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1240_ = v___x_1232_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v___x_1232_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1238_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
}
v___jp_1247_:
{
if (v___y_1250_ == 0)
{
v___y_1229_ = v___y_1248_;
v___y_1230_ = v___y_1249_;
v___y_1231_ = v_severity_1122_;
goto v___jp_1228_;
}
else
{
v___y_1229_ = v___y_1248_;
v___y_1230_ = v___y_1249_;
v___y_1231_ = v___x_1246_;
goto v___jp_1228_;
}
}
v___jp_1251_:
{
if (v___y_1252_ == 0)
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v_scopes_1255_; lean_object* v___x_1256_; lean_object* v_opts_1257_; uint8_t v___x_1258_; uint8_t v___x_1259_; 
v___x_1253_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1254_ = lean_st_ref_get(v___y_1125_);
v_scopes_1255_ = lean_ctor_get(v___x_1254_, 2);
lean_inc(v_scopes_1255_);
lean_dec(v___x_1254_);
v___x_1256_ = l_List_head_x21___redArg(v___x_1253_, v_scopes_1255_);
lean_dec(v_scopes_1255_);
v_opts_1257_ = lean_ctor_get(v___x_1256_, 1);
lean_inc_ref(v_opts_1257_);
lean_dec(v___x_1256_);
v___x_1258_ = 1;
v___x_1259_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1122_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_dec_ref(v_opts_1257_);
v___y_1248_ = v___y_1252_;
v___y_1249_ = v___y_1252_;
v___y_1250_ = v___x_1259_;
goto v___jp_1247_;
}
else
{
lean_object* v___x_1260_; uint8_t v___x_1261_; 
v___x_1260_ = l_Lean_warningAsError;
v___x_1261_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__24(v_opts_1257_, v___x_1260_);
lean_dec_ref(v_opts_1257_);
v___y_1248_ = v___y_1252_;
v___y_1249_ = v___y_1252_;
v___y_1250_ = v___x_1261_;
goto v___jp_1247_;
}
}
else
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_dec_ref(v_msgData_1121_);
v___x_1262_ = lean_box(0);
v___x_1263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
return v___x_1263_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16___boxed(lean_object* v_ref_1266_, lean_object* v_msgData_1267_, lean_object* v_severity_1268_, lean_object* v_isSilent_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
uint8_t v_severity_boxed_1273_; uint8_t v_isSilent_boxed_1274_; lean_object* v_res_1275_; 
v_severity_boxed_1273_ = lean_unbox(v_severity_1268_);
v_isSilent_boxed_1274_ = lean_unbox(v_isSilent_1269_);
v_res_1275_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16(v_ref_1266_, v_msgData_1267_, v_severity_boxed_1273_, v_isSilent_boxed_1274_, v___y_1270_, v___y_1271_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v_ref_1266_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12(lean_object* v_ref_1276_, lean_object* v_msgData_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
uint8_t v___x_1281_; uint8_t v___x_1282_; lean_object* v___x_1283_; 
v___x_1281_ = 1;
v___x_1282_ = 0;
v___x_1283_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16(v_ref_1276_, v_msgData_1277_, v___x_1281_, v___x_1282_, v___y_1278_, v___y_1279_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12___boxed(lean_object* v_ref_1284_, lean_object* v_msgData_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12(v_ref_1284_, v_msgData_1285_, v___y_1286_, v___y_1287_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v_ref_1284_);
return v_res_1289_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__1(void){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1291_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__0));
v___x_1292_ = l_Lean_stringToMessageData(v___x_1291_);
return v___x_1292_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__3(void){
_start:
{
lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1294_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__2));
v___x_1295_ = l_Lean_stringToMessageData(v___x_1294_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8(lean_object* v_linterOption_1296_, lean_object* v_stx_1297_, lean_object* v_msg_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_name_1302_; lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1320_; 
v_name_1302_ = lean_ctor_get(v_linterOption_1296_, 0);
v_isSharedCheck_1320_ = !lean_is_exclusive(v_linterOption_1296_);
if (v_isSharedCheck_1320_ == 0)
{
lean_object* v_unused_1321_; 
v_unused_1321_ = lean_ctor_get(v_linterOption_1296_, 1);
lean_dec(v_unused_1321_);
v___x_1304_ = v_linterOption_1296_;
v_isShared_1305_ = v_isSharedCheck_1320_;
goto v_resetjp_1303_;
}
else
{
lean_inc(v_name_1302_);
lean_dec(v_linterOption_1296_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1320_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1309_; 
v___x_1306_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__1);
lean_inc(v_name_1302_);
v___x_1307_ = l_Lean_MessageData_ofName(v_name_1302_);
if (v_isShared_1305_ == 0)
{
lean_ctor_set_tag(v___x_1304_, 7);
lean_ctor_set(v___x_1304_, 1, v___x_1307_);
lean_ctor_set(v___x_1304_, 0, v___x_1306_);
v___x_1309_ = v___x_1304_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1319_; 
v_reuseFailAlloc_1319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1319_, 0, v___x_1306_);
lean_ctor_set(v_reuseFailAlloc_1319_, 1, v___x_1307_);
v___x_1309_ = v_reuseFailAlloc_1319_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v_disable_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1310_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___closed__3);
v___x_1311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1309_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v_disable_1312_ = l_Lean_MessageData_note(v___x_1311_);
v___x_1313_ = l_Lean_Linter_linterMessageTag;
v___x_1314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1314_, 0, v_msg_1298_);
lean_ctor_set(v___x_1314_, 1, v_disable_1312_);
v___x_1315_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1313_);
lean_ctor_set(v___x_1315_, 1, v___x_1314_);
v___x_1316_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1316_, 0, v_name_1302_);
lean_ctor_set(v___x_1316_, 1, v___x_1315_);
lean_inc(v_stx_1297_);
v___x_1317_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_1317_, 0, v_stx_1297_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12(v_stx_1297_, v___x_1317_, v___y_1299_, v___y_1300_);
lean_dec(v_stx_1297_);
return v___x_1318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8___boxed(lean_object* v_linterOption_1322_, lean_object* v_stx_1323_, lean_object* v_msg_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8(v_linterOption_1322_, v_stx_1323_, v_msg_1324_, v___y_1325_, v___y_1326_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
return v_res_1328_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__1(void){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__0));
v___x_1331_ = l_Lean_stringToMessageData(v___x_1330_);
return v___x_1331_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__3(void){
_start:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1333_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__2));
v___x_1334_ = l_Lean_stringToMessageData(v___x_1333_);
return v___x_1334_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__5(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__4));
v___x_1337_ = l_Lean_stringToMessageData(v___x_1336_);
return v___x_1337_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__7(void){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__6));
v___x_1340_ = l_Lean_stringToMessageData(v___x_1339_);
return v___x_1340_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__9(void){
_start:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__8));
v___x_1343_ = l_Lean_stringToMessageData(v___x_1342_);
return v___x_1343_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__11(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__10));
v___x_1346_ = l_Lean_stringToMessageData(v___x_1345_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10(lean_object* v_val_1347_, lean_object* v_as_1348_, size_t v_sz_1349_, size_t v_i_1350_, lean_object* v_b_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v_a_1356_; uint8_t v___x_1360_; 
v___x_1360_ = lean_usize_dec_lt(v_i_1350_, v_sz_1349_);
if (v___x_1360_ == 0)
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1361_, 0, v_b_1351_);
return v___x_1361_;
}
else
{
lean_object* v_a_1362_; lean_object* v_snd_1363_; lean_object* v_snd_1364_; lean_object* v_fst_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1409_; 
v_a_1362_ = lean_array_uget(v_as_1348_, v_i_1350_);
v_snd_1363_ = lean_ctor_get(v_a_1362_, 1);
lean_inc(v_snd_1363_);
v_snd_1364_ = lean_ctor_get(v_snd_1363_, 1);
lean_inc(v_snd_1364_);
v_fst_1365_ = lean_ctor_get(v_a_1362_, 0);
v_isSharedCheck_1409_ = !lean_is_exclusive(v_a_1362_);
if (v_isSharedCheck_1409_ == 0)
{
lean_object* v_unused_1410_; 
v_unused_1410_ = lean_ctor_get(v_a_1362_, 1);
lean_dec(v_unused_1410_);
v___x_1367_ = v_a_1362_;
v_isShared_1368_ = v_isSharedCheck_1409_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_fst_1365_);
lean_dec(v_a_1362_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1409_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v_fst_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1407_; 
v_fst_1369_ = lean_ctor_get(v_snd_1363_, 0);
v_isSharedCheck_1407_ = !lean_is_exclusive(v_snd_1363_);
if (v_isSharedCheck_1407_ == 0)
{
lean_object* v_unused_1408_; 
v_unused_1408_ = lean_ctor_get(v_snd_1363_, 1);
lean_dec(v_unused_1408_);
v___x_1371_ = v_snd_1363_;
v_isShared_1372_ = v_isSharedCheck_1407_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_fst_1369_);
lean_dec(v_snd_1363_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1407_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v_fst_1373_; lean_object* v_snd_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1406_; 
v_fst_1373_ = lean_ctor_get(v_snd_1364_, 0);
v_snd_1374_ = lean_ctor_get(v_snd_1364_, 1);
v_isSharedCheck_1406_ = !lean_is_exclusive(v_snd_1364_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1376_ = v_snd_1364_;
v_isShared_1377_ = v_isSharedCheck_1406_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_snd_1374_);
lean_inc(v_fst_1373_);
lean_dec(v_snd_1364_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1406_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; uint8_t v___x_1381_; 
v___x_1378_ = l_Lean_Linter_linter_constructorNameAsVariable;
v___x_1379_ = lean_box(0);
v___x_1380_ = lean_st_ref_get(v_val_1347_);
v___x_1381_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1___redArg(v___x_1380_, v_fst_1365_);
lean_dec(v_fst_1365_);
lean_dec(v___x_1380_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1385_; 
v___x_1382_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__1);
v___x_1383_ = l_Lean_MessageData_ofName(v_fst_1373_);
lean_inc_ref(v___x_1383_);
if (v_isShared_1377_ == 0)
{
lean_ctor_set_tag(v___x_1376_, 7);
lean_ctor_set(v___x_1376_, 1, v___x_1383_);
lean_ctor_set(v___x_1376_, 0, v___x_1382_);
v___x_1385_ = v___x_1376_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v___x_1382_);
lean_ctor_set(v_reuseFailAlloc_1405_, 1, v___x_1383_);
v___x_1385_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
lean_object* v___x_1386_; lean_object* v___x_1388_; 
v___x_1386_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__3);
if (v_isShared_1372_ == 0)
{
lean_ctor_set_tag(v___x_1371_, 7);
lean_ctor_set(v___x_1371_, 1, v___x_1386_);
lean_ctor_set(v___x_1371_, 0, v___x_1385_);
v___x_1388_ = v___x_1371_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v___x_1385_);
lean_ctor_set(v_reuseFailAlloc_1404_, 1, v___x_1386_);
v___x_1388_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
lean_object* v___x_1389_; lean_object* v___x_1391_; 
v___x_1389_ = l_Lean_MessageData_ofName(v_snd_1374_);
lean_inc_ref(v___x_1389_);
if (v_isShared_1368_ == 0)
{
lean_ctor_set_tag(v___x_1367_, 7);
lean_ctor_set(v___x_1367_, 1, v___x_1389_);
lean_ctor_set(v___x_1367_, 0, v___x_1388_);
v___x_1391_ = v___x_1367_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v___x_1388_);
lean_ctor_set(v_reuseFailAlloc_1403_, 1, v___x_1389_);
v___x_1391_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1392_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__5);
v___x_1393_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1391_);
lean_ctor_set(v___x_1393_, 1, v___x_1392_);
v___x_1394_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__7);
v___x_1395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
lean_ctor_set(v___x_1395_, 1, v___x_1383_);
v___x_1396_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__9);
v___x_1397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1397_, 0, v___x_1395_);
lean_ctor_set(v___x_1397_, 1, v___x_1396_);
v___x_1398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1397_);
lean_ctor_set(v___x_1398_, 1, v___x_1389_);
v___x_1399_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__11, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__11_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___closed__11);
v___x_1400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1398_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
v___x_1401_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1393_);
lean_ctor_set(v___x_1401_, 1, v___x_1400_);
v___x_1402_ = l_Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8(v___x_1378_, v_fst_1369_, v___x_1401_, v___y_1352_, v___y_1353_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_dec_ref_known(v___x_1402_, 1);
v_a_1356_ = v___x_1379_;
goto v___jp_1355_;
}
else
{
return v___x_1402_;
}
}
}
}
}
else
{
lean_del_object(v___x_1376_);
lean_dec(v_snd_1374_);
lean_dec(v_fst_1373_);
lean_del_object(v___x_1371_);
lean_dec(v_fst_1369_);
lean_del_object(v___x_1367_);
v_a_1356_ = v___x_1379_;
goto v___jp_1355_;
}
}
}
}
}
v___jp_1355_:
{
size_t v___x_1357_; size_t v___x_1358_; 
v___x_1357_ = ((size_t)1ULL);
v___x_1358_ = lean_usize_add(v_i_1350_, v___x_1357_);
v_i_1350_ = v___x_1358_;
v_b_1351_ = v_a_1356_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10___boxed(lean_object* v_val_1411_, lean_object* v_as_1412_, lean_object* v_sz_1413_, lean_object* v_i_1414_, lean_object* v_b_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_){
_start:
{
size_t v_sz_boxed_1419_; size_t v_i_boxed_1420_; lean_object* v_res_1421_; 
v_sz_boxed_1419_ = lean_unbox_usize(v_sz_1413_);
lean_dec(v_sz_1413_);
v_i_boxed_1420_ = lean_unbox_usize(v_i_1414_);
lean_dec(v_i_1414_);
v_res_1421_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10(v_val_1411_, v_as_1412_, v_sz_boxed_1419_, v_i_boxed_1420_, v_b_1415_, v___y_1416_, v___y_1417_);
lean_dec(v___y_1417_);
lean_dec_ref(v___y_1416_);
lean_dec_ref(v_as_1412_);
lean_dec(v_val_1411_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__0(lean_object* v___y_1422_, lean_object* v___y_1423_){
_start:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v_scopes_1427_; lean_object* v___x_1428_; lean_object* v_opts_1429_; lean_object* v___x_1430_; 
v___x_1425_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_1426_ = lean_st_ref_get(v___y_1423_);
v_scopes_1427_ = lean_ctor_get(v___x_1426_, 2);
lean_inc(v_scopes_1427_);
lean_dec(v___x_1426_);
v___x_1428_ = l_List_head_x21___redArg(v___x_1425_, v_scopes_1427_);
lean_dec(v_scopes_1427_);
v_opts_1429_ = lean_ctor_get(v___x_1428_, 1);
lean_inc_ref(v_opts_1429_);
lean_dec(v___x_1428_);
v___x_1430_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__2___redArg(v_opts_1429_, v___y_1423_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__0___boxed(lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__0(v___y_1431_, v___y_1432_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
return v_res_1434_;
}
}
static lean_object* _init_l_Lean_Linter_constructorNameAsVariable___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1435_ = lean_box(0);
v___x_1436_ = lean_unsigned_to_nat(16u);
v___x_1437_ = lean_mk_array(v___x_1436_, v___x_1435_);
return v___x_1437_;
}
}
static lean_object* _init_l_Lean_Linter_constructorNameAsVariable___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1438_ = lean_obj_once(&l_Lean_Linter_constructorNameAsVariable___lam__0___closed__0, &l_Lean_Linter_constructorNameAsVariable___lam__0___closed__0_once, _init_l_Lean_Linter_constructorNameAsVariable___lam__0___closed__0);
v___x_1439_ = lean_unsigned_to_nat(0u);
v___x_1440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1439_);
lean_ctor_set(v___x_1440_, 1, v___x_1438_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_constructorNameAsVariable___lam__0(lean_object* v_cmdStx_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v___x_1445_; lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1514_; 
v___x_1445_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_constructorNameAsVariable_spec__0(v___y_1442_, v___y_1443_);
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1514_ == 0)
{
v___x_1448_ = v___x_1445_;
v_isShared_1449_ = v_isSharedCheck_1514_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1445_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1514_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; uint8_t v___x_1451_; 
v___x_1450_ = l_Lean_Linter_linter_constructorNameAsVariable;
v___x_1451_ = l_Lean_Linter_getLinterValue(v___x_1450_, v_a_1446_);
lean_dec(v_a_1446_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; lean_object* v___x_1454_; 
v___x_1452_ = lean_box(0);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___x_1452_);
v___x_1454_ = v___x_1448_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1452_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
else
{
uint8_t v___x_1456_; lean_object* v___x_1457_; 
v___x_1456_ = 0;
v___x_1457_ = l_Lean_Syntax_getRange_x3f(v_cmdStx_1441_, v___x_1456_);
if (lean_obj_tag(v___x_1457_) == 1)
{
lean_object* v_val_1458_; lean_object* v___x_1459_; lean_object* v_infoState_1460_; lean_object* v_trees_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; size_t v_sz_1468_; size_t v___x_1469_; lean_object* v___x_1470_; 
lean_del_object(v___x_1448_);
v_val_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_val_1458_);
lean_dec_ref_known(v___x_1457_, 1);
v___x_1459_ = lean_st_ref_get(v___y_1443_);
v_infoState_1460_ = lean_ctor_get(v___x_1459_, 8);
lean_inc_ref(v_infoState_1460_);
lean_dec(v___x_1459_);
v_trees_1461_ = lean_ctor_get(v_infoState_1460_, 2);
lean_inc_ref(v_trees_1461_);
lean_dec_ref(v_infoState_1460_);
v___x_1462_ = l_Lean_PersistentArray_toArray___redArg(v_trees_1461_);
lean_dec_ref(v_trees_1461_);
v___x_1463_ = lean_unsigned_to_nat(0u);
v___x_1464_ = lean_obj_once(&l_Lean_Linter_constructorNameAsVariable___lam__0___closed__1, &l_Lean_Linter_constructorNameAsVariable___lam__0___closed__1_once, _init_l_Lean_Linter_constructorNameAsVariable___lam__0___closed__1);
v___x_1465_ = lean_st_mk_ref(v___x_1464_);
v___x_1466_ = lean_st_mk_ref(v___x_1464_);
v___x_1467_ = lean_box(0);
v_sz_1468_ = lean_array_size(v___x_1462_);
v___x_1469_ = ((size_t)0ULL);
lean_inc(v___x_1466_);
lean_inc(v___x_1465_);
v___x_1470_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__9(v___x_1451_, v___x_1465_, v_val_1458_, v___x_1466_, v___x_1462_, v_sz_1468_, v___x_1469_, v___x_1467_, v___y_1442_, v___y_1443_);
lean_dec_ref(v___x_1462_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v___x_1471_; lean_object* v___y_1473_; lean_object* v___y_1485_; lean_object* v___y_1486_; lean_object* v___y_1487_; lean_object* v___y_1488_; lean_object* v___y_1491_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1497_; lean_object* v_size_1503_; lean_object* v_buckets_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; 
lean_dec_ref_known(v___x_1470_, 1);
v___x_1471_ = lean_st_ref_get(v___x_1465_);
lean_dec(v___x_1465_);
v_size_1503_ = lean_ctor_get(v___x_1471_, 0);
lean_inc(v_size_1503_);
v_buckets_1504_ = lean_ctor_get(v___x_1471_, 1);
lean_inc_ref(v_buckets_1504_);
lean_dec(v___x_1471_);
v___x_1505_ = lean_mk_empty_array_with_capacity(v_size_1503_);
lean_dec(v_size_1503_);
v___x_1506_ = lean_array_get_size(v_buckets_1504_);
v___x_1507_ = lean_nat_dec_lt(v___x_1463_, v___x_1506_);
if (v___x_1507_ == 0)
{
lean_dec_ref(v_buckets_1504_);
v___y_1497_ = v___x_1505_;
goto v___jp_1496_;
}
else
{
size_t v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = lean_usize_of_nat(v___x_1506_);
v___x_1509_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_constructorNameAsVariable_spec__13(v_buckets_1504_, v___x_1469_, v___x_1508_, v___x_1505_);
lean_dec_ref(v_buckets_1504_);
v___y_1497_ = v___x_1509_;
goto v___jp_1496_;
}
v___jp_1472_:
{
size_t v_sz_1474_; lean_object* v___x_1475_; 
v_sz_1474_ = lean_array_size(v___y_1473_);
v___x_1475_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_constructorNameAsVariable_spec__10(v___x_1466_, v___y_1473_, v_sz_1474_, v___x_1469_, v___x_1467_, v___y_1442_, v___y_1443_);
lean_dec_ref(v___y_1473_);
lean_dec(v___x_1466_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1482_; 
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1475_);
if (v_isSharedCheck_1482_ == 0)
{
lean_object* v_unused_1483_; 
v_unused_1483_ = lean_ctor_get(v___x_1475_, 0);
lean_dec(v_unused_1483_);
v___x_1477_ = v___x_1475_;
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
else
{
lean_dec(v___x_1475_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 0, v___x_1467_);
v___x_1480_ = v___x_1477_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v___x_1467_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
else
{
return v___x_1475_;
}
}
v___jp_1484_:
{
lean_object* v___x_1489_; 
v___x_1489_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg(v___y_1486_, v___y_1485_, v___y_1487_, v___y_1488_);
lean_dec(v___y_1488_);
lean_dec(v___y_1486_);
v___y_1473_ = v___x_1489_;
goto v___jp_1472_;
}
v___jp_1490_:
{
uint8_t v___x_1495_; 
v___x_1495_ = lean_nat_dec_le(v___y_1494_, v___y_1493_);
if (v___x_1495_ == 0)
{
lean_dec(v___y_1493_);
lean_inc(v___y_1494_);
v___y_1485_ = v___y_1491_;
v___y_1486_ = v___y_1492_;
v___y_1487_ = v___y_1494_;
v___y_1488_ = v___y_1494_;
goto v___jp_1484_;
}
else
{
v___y_1485_ = v___y_1491_;
v___y_1486_ = v___y_1492_;
v___y_1487_ = v___y_1494_;
v___y_1488_ = v___y_1493_;
goto v___jp_1484_;
}
}
v___jp_1496_:
{
lean_object* v___x_1498_; uint8_t v___x_1499_; 
v___x_1498_ = lean_array_get_size(v___y_1497_);
v___x_1499_ = lean_nat_dec_eq(v___x_1498_, v___x_1463_);
if (v___x_1499_ == 0)
{
lean_object* v___x_1500_; lean_object* v___x_1501_; uint8_t v___x_1502_; 
v___x_1500_ = lean_unsigned_to_nat(1u);
v___x_1501_ = lean_nat_sub(v___x_1498_, v___x_1500_);
v___x_1502_ = lean_nat_dec_le(v___x_1463_, v___x_1501_);
if (v___x_1502_ == 0)
{
lean_inc(v___x_1501_);
v___y_1491_ = v___y_1497_;
v___y_1492_ = v___x_1498_;
v___y_1493_ = v___x_1501_;
v___y_1494_ = v___x_1501_;
goto v___jp_1490_;
}
else
{
v___y_1491_ = v___y_1497_;
v___y_1492_ = v___x_1498_;
v___y_1493_ = v___x_1501_;
v___y_1494_ = v___x_1463_;
goto v___jp_1490_;
}
}
else
{
v___y_1473_ = v___y_1497_;
goto v___jp_1472_;
}
}
}
else
{
lean_dec(v___x_1466_);
lean_dec(v___x_1465_);
return v___x_1470_;
}
}
else
{
lean_object* v___x_1510_; lean_object* v___x_1512_; 
lean_dec(v___x_1457_);
v___x_1510_ = lean_box(0);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 0, v___x_1510_);
v___x_1512_ = v___x_1448_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1510_);
v___x_1512_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
return v___x_1512_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_constructorNameAsVariable___lam__0___boxed(lean_object* v_cmdStx_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l_Lean_Linter_constructorNameAsVariable___lam__0(v_cmdStx_1515_, v___y_1516_, v___y_1517_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
lean_dec(v_cmdStx_1515_);
return v_res_1519_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1(lean_object* v_00_u03b2_1529_, lean_object* v_m_1530_, lean_object* v_a_1531_){
_start:
{
uint8_t v___x_1532_; 
v___x_1532_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1___redArg(v_m_1530_, v_a_1531_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1___boxed(lean_object* v_00_u03b2_1533_, lean_object* v_m_1534_, lean_object* v_a_1535_){
_start:
{
uint8_t v_res_1536_; lean_object* v_r_1537_; 
v_res_1536_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1(v_00_u03b2_1533_, v_m_1534_, v_a_1535_);
lean_dec_ref(v_a_1535_);
lean_dec_ref(v_m_1534_);
v_r_1537_ = lean_box(v_res_1536_);
return v_r_1537_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3(lean_object* v_00_u03b2_1538_, lean_object* v_m_1539_, lean_object* v_a_1540_, lean_object* v_b_1541_){
_start:
{
lean_object* v___x_1542_; 
v___x_1542_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3___redArg(v_m_1539_, v_a_1540_, v_b_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5(lean_object* v_str_1543_, lean_object* v_val_1544_, lean_object* v_info_1545_, lean_object* v___x_1546_, lean_object* v_val_1547_, uint8_t v___x_1548_, lean_object* v_as_1549_, lean_object* v_as_x27_1550_, lean_object* v_b_1551_, lean_object* v_a_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v___x_1556_; 
v___x_1556_ = l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5___redArg(v_str_1543_, v_val_1544_, v_info_1545_, v___x_1546_, v_val_1547_, v___x_1548_, v_as_x27_1550_, v_b_1551_, v___y_1554_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5___boxed(lean_object* v_str_1557_, lean_object* v_val_1558_, lean_object* v_info_1559_, lean_object* v___x_1560_, lean_object* v_val_1561_, lean_object* v___x_1562_, lean_object* v_as_1563_, lean_object* v_as_x27_1564_, lean_object* v_b_1565_, lean_object* v_a_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_){
_start:
{
uint8_t v___x_27587__boxed_1570_; lean_object* v_res_1571_; 
v___x_27587__boxed_1570_ = lean_unbox(v___x_1562_);
v_res_1571_ = l_List_forIn_x27_loop___at___00Lean_Linter_constructorNameAsVariable_spec__5(v_str_1557_, v_val_1558_, v_info_1559_, v___x_1560_, v_val_1561_, v___x_27587__boxed_1570_, v_as_1563_, v_as_x27_1564_, v_b_1565_, v_a_1566_, v___y_1567_, v___y_1568_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec(v_as_x27_1564_);
lean_dec(v_as_1563_);
lean_dec_ref(v_info_1559_);
lean_dec(v_val_1558_);
lean_dec_ref(v_str_1557_);
return v_res_1571_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_constructorNameAsVariable_spec__6(lean_object* v_00_u03b2_1572_, lean_object* v_m_1573_, lean_object* v_a_1574_, lean_object* v_b_1575_){
_start:
{
lean_object* v___x_1576_; 
v___x_1576_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lean_Linter_constructorNameAsVariable_spec__6___redArg(v_m_1573_, v_a_1574_, v_b_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11(lean_object* v_n_1577_, lean_object* v_as_1578_, lean_object* v_lo_1579_, lean_object* v_hi_1580_, lean_object* v_w_1581_, lean_object* v_hlo_1582_, lean_object* v_hhi_1583_){
_start:
{
lean_object* v___x_1584_; 
v___x_1584_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___redArg(v_n_1577_, v_as_1578_, v_lo_1579_, v_hi_1580_);
return v___x_1584_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11___boxed(lean_object* v_n_1585_, lean_object* v_as_1586_, lean_object* v_lo_1587_, lean_object* v_hi_1588_, lean_object* v_w_1589_, lean_object* v_hlo_1590_, lean_object* v_hhi_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11(v_n_1585_, v_as_1586_, v_lo_1587_, v_hi_1588_, v_w_1589_, v_hlo_1590_, v_hhi_1591_);
lean_dec(v_hi_1588_);
lean_dec(v_n_1585_);
return v_res_1592_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1(lean_object* v_00_u03b2_1593_, lean_object* v_a_1594_, lean_object* v_x_1595_){
_start:
{
uint8_t v___x_1596_; 
v___x_1596_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1___redArg(v_a_1594_, v_x_1595_);
return v___x_1596_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1597_, lean_object* v_a_1598_, lean_object* v_x_1599_){
_start:
{
uint8_t v_res_1600_; lean_object* v_r_1601_; 
v_res_1600_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Linter_constructorNameAsVariable_spec__1_spec__1(v_00_u03b2_1597_, v_a_1598_, v_x_1599_);
lean_dec(v_x_1599_);
lean_dec_ref(v_a_1598_);
v_r_1601_ = lean_box(v_res_1600_);
return v_r_1601_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4(lean_object* v_00_u03b2_1602_, lean_object* v_data_1603_){
_start:
{
lean_object* v___x_1604_; 
v___x_1604_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4___redArg(v_data_1603_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__5(lean_object* v_00_u03b2_1605_, lean_object* v_a_1606_, lean_object* v_b_1607_, lean_object* v_x_1608_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__5___redArg(v_a_1606_, v_b_1607_, v_x_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12(lean_object* v_00_u03b1_1610_, lean_object* v_msg_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_){
_start:
{
lean_object* v___x_1615_; 
v___x_1615_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___redArg(v_msg_1611_, v___y_1612_, v___y_1613_);
return v___x_1615_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12___boxed(lean_object* v_00_u03b1_1616_, lean_object* v_msg_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
lean_object* v_res_1621_; 
v_res_1621_ = l_panic___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__12(v_00_u03b1_1616_, v_msg_1617_, v___y_1618_, v___y_1619_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
return v_res_1621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10(lean_object* v_00_u03b1_1622_, lean_object* v_preNode_1623_, lean_object* v_postNode_1624_, lean_object* v_x_1625_, lean_object* v_x_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___redArg(v_preNode_1623_, v_postNode_1624_, v_x_1625_, v_x_1626_, v___y_1627_, v___y_1628_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10___boxed(lean_object* v_00_u03b1_1631_, lean_object* v_preNode_1632_, lean_object* v_postNode_1633_, lean_object* v_x_1634_, lean_object* v_x_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l___private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10(v_00_u03b1_1631_, v_preNode_1632_, v_postNode_1633_, v_x_1634_, v_x_1635_, v___y_1636_, v___y_1637_);
lean_dec(v___y_1637_);
lean_dec_ref(v___y_1636_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16(lean_object* v_n_1640_, lean_object* v_lo_1641_, lean_object* v_hi_1642_, lean_object* v_hhi_1643_, lean_object* v_pivot_1644_, lean_object* v_as_1645_, lean_object* v_i_1646_, lean_object* v_k_1647_, lean_object* v_ilo_1648_, lean_object* v_ik_1649_, lean_object* v_w_1650_){
_start:
{
lean_object* v___x_1651_; 
v___x_1651_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16___redArg(v_hi_1642_, v_pivot_1644_, v_as_1645_, v_i_1646_, v_k_1647_);
return v___x_1651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16___boxed(lean_object* v_n_1652_, lean_object* v_lo_1653_, lean_object* v_hi_1654_, lean_object* v_hhi_1655_, lean_object* v_pivot_1656_, lean_object* v_as_1657_, lean_object* v_i_1658_, lean_object* v_k_1659_, lean_object* v_ilo_1660_, lean_object* v_ik_1661_, lean_object* v_w_1662_){
_start:
{
lean_object* v_res_1663_; 
v_res_1663_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Linter_constructorNameAsVariable_spec__11_spec__16(v_n_1652_, v_lo_1653_, v_hi_1654_, v_hhi_1655_, v_pivot_1656_, v_as_1657_, v_i_1658_, v_k_1659_, v_ilo_1660_, v_ik_1661_, v_w_1662_);
lean_dec_ref(v_pivot_1656_);
lean_dec(v_hi_1654_);
lean_dec(v_lo_1653_);
lean_dec(v_n_1652_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_1664_, lean_object* v_i_1665_, lean_object* v_source_1666_, lean_object* v_target_1667_){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6___redArg(v_i_1665_, v_source_1666_, v_target_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13(lean_object* v_00_u03b1_1669_, lean_object* v_preNode_1670_, lean_object* v_postNode_1671_, lean_object* v___x_1672_, lean_object* v_x_1673_, lean_object* v_x_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13___redArg(v_preNode_1670_, v_postNode_1671_, v___x_1672_, v_x_1673_, v_x_1674_, v___y_1675_, v___y_1676_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13___boxed(lean_object* v_00_u03b1_1679_, lean_object* v_preNode_1680_, lean_object* v_postNode_1681_, lean_object* v___x_1682_, lean_object* v_x_1683_, lean_object* v_x_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l_List_mapM_loop___at___00__private_Lean_Server_InfoUtils_0__Lean_Elab_InfoTree_visitM_go___at___00Lean_Elab_InfoTree_visitM_x27___at___00Lean_Linter_constructorNameAsVariable_spec__7_spec__10_spec__13(v_00_u03b1_1679_, v_preNode_1680_, v_postNode_1681_, v___x_1682_, v_x_1683_, v_x_1684_, v___y_1685_, v___y_1686_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23(lean_object* v_msgData_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v___x_1693_; 
v___x_1693_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___redArg(v_msgData_1689_, v___y_1691_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23___boxed(lean_object* v_msgData_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_constructorNameAsVariable_spec__8_spec__12_spec__16_spec__23(v_msgData_1694_, v___y_1695_, v___y_1696_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6_spec__16(lean_object* v_00_u03b2_1699_, lean_object* v_x_1700_, lean_object* v_x_1701_){
_start:
{
lean_object* v___x_1702_; 
v___x_1702_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Linter_constructorNameAsVariable_spec__3_spec__4_spec__6_spec__16___redArg(v_x_1700_, v_x_1701_);
return v___x_1702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_3137021433____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1704_ = ((lean_object*)(l_Lean_Linter_constructorNameAsVariable));
v___x_1705_ = l_Lean_Elab_Command_addLinter(v___x_1704_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_3137021433____hygCtx___hyg_2____boxed(lean_object* v___y_1706_){
_start:
{
lean_object* v_res_1707_; 
v_res_1707_ = l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_3137021433____hygCtx___hyg_2_();
return v_res_1707_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Util(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_ConstructorAsVariable(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_4011908533____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_linter_constructorNameAsVariable = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_linter_constructorNameAsVariable);
lean_dec_ref(res);
res = l___private_Lean_Linter_ConstructorAsVariable_0__Lean_Linter_initFn_00___x40_Lean_Linter_ConstructorAsVariable_3137021433____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_ConstructorAsVariable(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Linter_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_ConstructorAsVariable(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_ConstructorAsVariable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_ConstructorAsVariable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_ConstructorAsVariable(builtin);
}
#ifdef __cplusplus
}
#endif
