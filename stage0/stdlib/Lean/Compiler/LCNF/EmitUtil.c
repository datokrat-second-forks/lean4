// Lean compiler output
// Module: Lean.Compiler.LCNF.EmitUtil
// Imports: public import Lean.Compiler.LCNF.CompilerM import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.InitAttr
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_getBuiltinInitFnNameFor_x3f(lean_object*, lean_object*);
lean_object* lean_get_init_fn_name_for(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
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
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqIRPhases_beq(uint8_t, uint8_t);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__7_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.EmitUtil"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "_private.Lean.Compiler.LCNF.EmitUtil.0.Lean.Compiler.LCNF.collectUsedDecls.go"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "collectUsedDecls: could not find declaration or signature for '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_collectUsedDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_collectUsedDecls___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_collectUsedDecls___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_collectUsedDecls___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_collectUsedDecls___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_collectUsedDecls(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_collectUsedDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_usesModuleFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_usesModuleFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2(lean_object* v_msg_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___f_14_; lean_object* v___f_15_; lean_object* v___f_16_; lean_object* v___f_17_; lean_object* v___f_18_; lean_object* v___f_19_; lean_object* v___f_20_; lean_object* v___f_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v_toApplicative_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_58_; 
v___f_14_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__0));
v___f_15_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__1));
v___f_16_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__2));
v___f_17_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__3));
v___f_18_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__4));
v___f_19_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_19_, 0, v___f_18_);
lean_closure_set(v___f_19_, 1, v___f_17_);
v___f_20_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_20_, 0, v___f_17_);
v___f_21_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__5));
v___x_22_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_22_, 0, v___f_14_);
lean_ctor_set(v___x_22_, 1, v___f_15_);
v___x_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v___f_16_);
lean_ctor_set(v___x_23_, 2, v___f_19_);
lean_ctor_set(v___x_23_, 3, v___f_20_);
lean_ctor_set(v___x_23_, 4, v___f_21_);
v___x_24_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
lean_ctor_set(v___x_24_, 1, v___f_17_);
v___x_25_ = l_StateRefT_x27_instMonad___redArg(v___x_24_);
v_toApplicative_26_ = lean_ctor_get(v___x_25_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v___x_25_);
if (v_isSharedCheck_58_ == 0)
{
lean_object* v_unused_59_; 
v_unused_59_ = lean_ctor_get(v___x_25_, 1);
lean_dec(v_unused_59_);
v___x_28_ = v___x_25_;
v_isShared_29_ = v_isSharedCheck_58_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_toApplicative_26_);
lean_dec(v___x_25_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_58_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v_toFunctor_30_; lean_object* v_toSeq_31_; lean_object* v_toSeqLeft_32_; lean_object* v_toSeqRight_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_56_; 
v_toFunctor_30_ = lean_ctor_get(v_toApplicative_26_, 0);
v_toSeq_31_ = lean_ctor_get(v_toApplicative_26_, 2);
v_toSeqLeft_32_ = lean_ctor_get(v_toApplicative_26_, 3);
v_toSeqRight_33_ = lean_ctor_get(v_toApplicative_26_, 4);
v_isSharedCheck_56_ = !lean_is_exclusive(v_toApplicative_26_);
if (v_isSharedCheck_56_ == 0)
{
lean_object* v_unused_57_; 
v_unused_57_ = lean_ctor_get(v_toApplicative_26_, 1);
lean_dec(v_unused_57_);
v___x_35_ = v_toApplicative_26_;
v_isShared_36_ = v_isSharedCheck_56_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_toSeqRight_33_);
lean_inc(v_toSeqLeft_32_);
lean_inc(v_toSeq_31_);
lean_inc(v_toFunctor_30_);
lean_dec(v_toApplicative_26_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_56_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___f_37_; lean_object* v___f_38_; lean_object* v___f_39_; lean_object* v___f_40_; lean_object* v___x_41_; lean_object* v___f_42_; lean_object* v___f_43_; lean_object* v___f_44_; lean_object* v___x_46_; 
v___f_37_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__6));
v___f_38_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___closed__7));
lean_inc_ref(v_toFunctor_30_);
v___f_39_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_39_, 0, v_toFunctor_30_);
v___f_40_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_40_, 0, v_toFunctor_30_);
v___x_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_41_, 0, v___f_39_);
lean_ctor_set(v___x_41_, 1, v___f_40_);
v___f_42_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_42_, 0, v_toSeqRight_33_);
v___f_43_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_43_, 0, v_toSeqLeft_32_);
v___f_44_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_44_, 0, v_toSeq_31_);
if (v_isShared_36_ == 0)
{
lean_ctor_set(v___x_35_, 4, v___f_42_);
lean_ctor_set(v___x_35_, 3, v___f_43_);
lean_ctor_set(v___x_35_, 2, v___f_44_);
lean_ctor_set(v___x_35_, 1, v___f_37_);
lean_ctor_set(v___x_35_, 0, v___x_41_);
v___x_46_ = v___x_35_;
goto v_reusejp_45_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___x_41_);
lean_ctor_set(v_reuseFailAlloc_55_, 1, v___f_37_);
lean_ctor_set(v_reuseFailAlloc_55_, 2, v___f_44_);
lean_ctor_set(v_reuseFailAlloc_55_, 3, v___f_43_);
lean_ctor_set(v_reuseFailAlloc_55_, 4, v___f_42_);
v___x_46_ = v_reuseFailAlloc_55_;
goto v_reusejp_45_;
}
v_reusejp_45_:
{
lean_object* v___x_48_; 
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 1, v___f_38_);
lean_ctor_set(v___x_28_, 0, v___x_46_);
v___x_48_ = v___x_28_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v___x_46_);
lean_ctor_set(v_reuseFailAlloc_54_, 1, v___f_38_);
v___x_48_ = v_reuseFailAlloc_54_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_5835__overap_52_; lean_object* v___x_53_; 
v___x_49_ = l_StateRefT_x27_instMonad___redArg(v___x_48_);
v___x_50_ = lean_box(0);
v___x_51_ = l_instInhabitedOfMonad___redArg(v___x_49_, v___x_50_);
v___x_5835__overap_52_ = lean_panic_fn_borrowed(v___x_51_, v_msg_9_);
lean_dec(v___x_51_);
lean_inc(v___y_12_);
lean_inc_ref(v___y_11_);
lean_inc(v___y_10_);
v___x_53_ = lean_apply_4(v___x_5835__overap_52_, v___y_10_, v___y_11_, v___y_12_, lean_box(0));
return v___x_53_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2___boxed(lean_object* v_msg_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2(v_msg_60_, v___y_61_, v___y_62_, v___y_63_);
lean_dec(v___y_63_);
lean_dec_ref(v___y_62_);
lean_dec(v___y_61_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg(lean_object* v_f_66_, lean_object* v_v_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
if (lean_obj_tag(v_v_67_) == 0)
{
lean_object* v_code_72_; lean_object* v___x_73_; 
v_code_72_ = lean_ctor_get(v_v_67_, 0);
lean_inc_ref(v_code_72_);
lean_dec_ref_known(v_v_67_, 1);
lean_inc(v___y_70_);
lean_inc_ref(v___y_69_);
lean_inc(v___y_68_);
v___x_73_ = lean_apply_5(v_f_66_, v_code_72_, v___y_68_, v___y_69_, v___y_70_, lean_box(0));
return v___x_73_;
}
else
{
lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_81_; 
lean_dec_ref(v_f_66_);
v_isSharedCheck_81_ = !lean_is_exclusive(v_v_67_);
if (v_isSharedCheck_81_ == 0)
{
lean_object* v_unused_82_; 
v_unused_82_ = lean_ctor_get(v_v_67_, 0);
lean_dec(v_unused_82_);
v___x_75_ = v_v_67_;
v_isShared_76_ = v_isSharedCheck_81_;
goto v_resetjp_74_;
}
else
{
lean_dec(v_v_67_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_81_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v___x_77_; lean_object* v___x_79_; 
v___x_77_ = lean_box(0);
if (v_isShared_76_ == 0)
{
lean_ctor_set_tag(v___x_75_, 0);
lean_ctor_set(v___x_75_, 0, v___x_77_);
v___x_79_ = v___x_75_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v___x_77_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg___boxed(lean_object* v_f_83_, lean_object* v_v_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg(v_f_83_, v_v_84_, v___y_85_, v___y_86_, v___y_87_);
lean_dec(v___y_87_);
lean_dec_ref(v___y_86_);
lean_dec(v___y_85_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0___boxed(lean_object* v___x_90_, lean_object* v_x_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
uint8_t v___x_6889__boxed_96_; lean_object* v_res_97_; 
v___x_6889__boxed_96_ = lean_unbox(v___x_90_);
v_res_97_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0(v___x_6889__boxed_96_, v_x_91_, v___y_92_, v___y_93_, v___y_94_);
lean_dec(v___y_94_);
lean_dec_ref(v___y_93_);
lean_dec(v___y_92_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3(lean_object* v_as_102_, size_t v_i_103_, size_t v_stop_104_, lean_object* v_b_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_){
_start:
{
lean_object* v_a_111_; lean_object* v___y_116_; uint8_t v___x_118_; 
v___x_118_ = lean_usize_dec_eq(v_i_103_, v_stop_104_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v_visited_121_; uint8_t v___x_122_; 
v___x_119_ = lean_array_uget_borrowed(v_as_102_, v_i_103_);
v___x_120_ = lean_st_ref_get(v___y_106_);
v_visited_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_visited_121_);
lean_dec(v___x_120_);
v___x_122_ = l_Lean_NameSet_contains(v_visited_121_, v___x_119_);
lean_dec(v_visited_121_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; lean_object* v_visited_124_; lean_object* v_localDecls_125_; lean_object* v_extSigs_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_215_; 
v___x_123_ = lean_st_ref_take(v___y_106_);
v_visited_124_ = lean_ctor_get(v___x_123_, 0);
v_localDecls_125_ = lean_ctor_get(v___x_123_, 1);
v_extSigs_126_ = lean_ctor_get(v___x_123_, 2);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_215_ == 0)
{
v___x_128_ = v___x_123_;
v_isShared_129_ = v_isSharedCheck_215_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_extSigs_126_);
lean_inc(v_localDecls_125_);
lean_inc(v_visited_124_);
lean_dec(v___x_123_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_215_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_130_; lean_object* v___x_132_; 
lean_inc(v___x_119_);
v___x_130_ = l_Lean_NameSet_insert(v_visited_124_, v___x_119_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 0, v___x_130_);
v___x_132_ = v___x_128_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_130_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v_localDecls_125_);
lean_ctor_set(v_reuseFailAlloc_214_, 2, v_extSigs_126_);
v___x_132_ = v_reuseFailAlloc_214_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = lean_st_ref_put(v___y_106_, v___x_132_);
v___x_134_ = l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(v___x_119_, v___y_108_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v_a_135_; 
v_a_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_a_135_);
lean_dec_ref_known(v___x_134_, 1);
if (lean_obj_tag(v_a_135_) == 1)
{
lean_object* v_val_136_; lean_object* v___x_137_; lean_object* v_visited_138_; lean_object* v_localDecls_139_; lean_object* v_extSigs_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_168_; 
v_val_136_ = lean_ctor_get(v_a_135_, 0);
lean_inc(v_val_136_);
lean_dec_ref_known(v_a_135_, 1);
v___x_137_ = lean_st_ref_take(v___y_106_);
v_visited_138_ = lean_ctor_get(v___x_137_, 0);
v_localDecls_139_ = lean_ctor_get(v___x_137_, 1);
v_extSigs_140_ = lean_ctor_get(v___x_137_, 2);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_168_ == 0)
{
v___x_142_ = v___x_137_;
v_isShared_143_ = v_isSharedCheck_168_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_extSigs_140_);
lean_inc(v_localDecls_139_);
lean_inc(v_visited_138_);
lean_dec(v___x_137_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_168_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_144_; lean_object* v___x_146_; 
lean_inc(v_val_136_);
v___x_144_ = lean_array_push(v_localDecls_139_, v_val_136_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 1, v___x_144_);
v___x_146_ = v___x_142_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v_visited_138_);
lean_ctor_set(v_reuseFailAlloc_167_, 1, v___x_144_);
lean_ctor_set(v_reuseFailAlloc_167_, 2, v_extSigs_140_);
v___x_146_ = v_reuseFailAlloc_167_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
lean_object* v___x_147_; lean_object* v_toSignature_148_; lean_object* v_value_149_; uint8_t v___x_150_; lean_object* v___x_151_; lean_object* v___f_152_; lean_object* v___x_153_; 
v___x_147_ = lean_st_ref_put(v___y_106_, v___x_146_);
v_toSignature_148_ = lean_ctor_get(v_val_136_, 0);
lean_inc_ref(v_toSignature_148_);
v_value_149_ = lean_ctor_get(v_val_136_, 1);
lean_inc_ref(v_value_149_);
lean_dec(v_val_136_);
v___x_150_ = 1;
v___x_151_ = lean_box(v___x_150_);
v___f_152_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0___boxed), 6, 1);
lean_closure_set(v___f_152_, 0, v___x_151_);
v___x_153_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg(v___f_152_, v_value_149_, v___y_106_, v___y_107_, v___y_108_);
if (lean_obj_tag(v___x_153_) == 0)
{
lean_object* v___x_154_; lean_object* v___y_156_; lean_object* v_env_163_; lean_object* v_name_164_; lean_object* v___x_165_; 
lean_dec_ref_known(v___x_153_, 1);
v___x_154_ = lean_st_ref_get(v___y_108_);
v_env_163_ = lean_ctor_get(v___x_154_, 0);
lean_inc_ref_n(v_env_163_, 2);
lean_dec(v___x_154_);
v_name_164_ = lean_ctor_get(v_toSignature_148_, 0);
lean_inc_n(v_name_164_, 2);
lean_dec_ref(v_toSignature_148_);
v___x_165_ = l_Lean_getBuiltinInitFnNameFor_x3f(v_env_163_, v_name_164_);
if (lean_obj_tag(v___x_165_) == 0)
{
lean_object* v___x_166_; 
v___x_166_ = lean_get_init_fn_name_for(v_env_163_, v_name_164_);
v___y_156_ = v___x_166_;
goto v___jp_155_;
}
else
{
lean_dec(v_name_164_);
lean_dec_ref(v_env_163_);
v___y_156_ = v___x_165_;
goto v___jp_155_;
}
v___jp_155_:
{
if (lean_obj_tag(v___y_156_) == 1)
{
lean_object* v_val_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v_val_157_ = lean_ctor_get(v___y_156_, 0);
lean_inc(v_val_157_);
lean_dec_ref_known(v___y_156_, 1);
v___x_158_ = lean_unsigned_to_nat(1u);
v___x_159_ = lean_mk_empty_array_with_capacity(v___x_158_);
v___x_160_ = lean_array_push(v___x_159_, v_val_157_);
v___x_161_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(v___x_160_, v___y_106_, v___y_107_, v___y_108_);
lean_dec_ref(v___x_160_);
v___y_116_ = v___x_161_;
goto v___jp_115_;
}
else
{
lean_object* v___x_162_; 
lean_dec(v___y_156_);
v___x_162_ = lean_box(0);
v_a_111_ = v___x_162_;
goto v___jp_110_;
}
}
}
else
{
lean_dec_ref(v_toSignature_148_);
v___y_116_ = v___x_153_;
goto v___jp_115_;
}
}
}
}
else
{
lean_object* v___x_169_; 
lean_dec(v_a_135_);
lean_inc(v___x_119_);
v___x_169_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v___x_119_, v___y_108_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v_a_170_; 
v_a_170_ = lean_ctor_get(v___x_169_, 0);
lean_inc(v_a_170_);
lean_dec_ref_known(v___x_169_, 1);
if (lean_obj_tag(v_a_170_) == 1)
{
lean_object* v_val_171_; lean_object* v___x_172_; lean_object* v_visited_173_; lean_object* v_localDecls_174_; lean_object* v_extSigs_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_185_; 
v_val_171_ = lean_ctor_get(v_a_170_, 0);
lean_inc(v_val_171_);
lean_dec_ref_known(v_a_170_, 1);
v___x_172_ = lean_st_ref_take(v___y_106_);
v_visited_173_ = lean_ctor_get(v___x_172_, 0);
v_localDecls_174_ = lean_ctor_get(v___x_172_, 1);
v_extSigs_175_ = lean_ctor_get(v___x_172_, 2);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_185_ == 0)
{
v___x_177_ = v___x_172_;
v_isShared_178_ = v_isSharedCheck_185_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_extSigs_175_);
lean_inc(v_localDecls_174_);
lean_inc(v_visited_173_);
lean_dec(v___x_172_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_185_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_179_ = lean_box(0);
v___x_180_ = lean_array_push(v_extSigs_175_, v_val_171_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 2, v___x_180_);
v___x_182_ = v___x_177_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_visited_173_);
lean_ctor_set(v_reuseFailAlloc_184_, 1, v_localDecls_174_);
lean_ctor_set(v_reuseFailAlloc_184_, 2, v___x_180_);
v___x_182_ = v_reuseFailAlloc_184_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_183_; 
v___x_183_ = lean_st_ref_put(v___y_106_, v___x_182_);
v_a_111_ = v___x_179_;
goto v___jp_110_;
}
}
}
else
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; uint8_t v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; 
lean_dec(v_a_170_);
v___x_186_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__0));
v___x_187_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__1));
v___x_188_ = lean_unsigned_to_nat(42u);
v___x_189_ = lean_unsigned_to_nat(8u);
v___x_190_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__2));
v___x_191_ = 1;
lean_inc(v___x_119_);
v___x_192_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_119_, v___x_191_);
v___x_193_ = lean_string_append(v___x_190_, v___x_192_);
lean_dec_ref(v___x_192_);
v___x_194_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___closed__3));
v___x_195_ = lean_string_append(v___x_193_, v___x_194_);
v___x_196_ = l_mkPanicMessageWithDecl(v___x_186_, v___x_187_, v___x_188_, v___x_189_, v___x_195_);
lean_dec_ref(v___x_195_);
v___x_197_ = l_panic___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__2(v___x_196_, v___y_106_, v___y_107_, v___y_108_);
v___y_116_ = v___x_197_;
goto v___jp_115_;
}
}
else
{
lean_object* v_a_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_205_; 
v_a_198_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_205_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_205_ == 0)
{
v___x_200_ = v___x_169_;
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_a_198_);
lean_dec(v___x_169_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_205_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___x_203_; 
if (v_isShared_201_ == 0)
{
v___x_203_ = v___x_200_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v_a_198_);
v___x_203_ = v_reuseFailAlloc_204_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
return v___x_203_;
}
}
}
}
}
else
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_213_; 
v_a_206_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_213_ == 0)
{
v___x_208_ = v___x_134_;
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_134_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_211_; 
if (v_isShared_209_ == 0)
{
v___x_211_ = v___x_208_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_a_206_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
}
}
else
{
lean_object* v___x_216_; 
v___x_216_ = lean_box(0);
v_a_111_ = v___x_216_;
goto v___jp_110_;
}
}
else
{
lean_object* v___x_217_; 
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v_b_105_);
return v___x_217_;
}
v___jp_110_:
{
size_t v___x_112_; size_t v___x_113_; 
v___x_112_ = ((size_t)1ULL);
v___x_113_ = lean_usize_add(v_i_103_, v___x_112_);
v_i_103_ = v___x_113_;
v_b_105_ = v_a_111_;
goto _start;
}
v___jp_115_:
{
if (lean_obj_tag(v___y_116_) == 0)
{
lean_object* v_a_117_; 
v_a_117_ = lean_ctor_get(v___y_116_, 0);
lean_inc(v_a_117_);
lean_dec_ref_known(v___y_116_, 1);
v_a_111_ = v_a_117_;
goto v___jp_110_;
}
else
{
return v___y_116_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(lean_object* v_names_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; uint8_t v___x_226_; 
v___x_223_ = lean_unsigned_to_nat(0u);
v___x_224_ = lean_array_get_size(v_names_218_);
v___x_225_ = lean_box(0);
v___x_226_ = lean_nat_dec_lt(v___x_223_, v___x_224_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; 
v___x_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_225_);
return v___x_227_;
}
else
{
uint8_t v___x_228_; 
v___x_228_ = lean_nat_dec_le(v___x_224_, v___x_224_);
if (v___x_228_ == 0)
{
if (v___x_226_ == 0)
{
lean_object* v___x_229_; 
v___x_229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_229_, 0, v___x_225_);
return v___x_229_;
}
else
{
size_t v___x_230_; size_t v___x_231_; lean_object* v___x_232_; 
v___x_230_ = ((size_t)0ULL);
v___x_231_ = lean_usize_of_nat(v___x_224_);
v___x_232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3(v_names_218_, v___x_230_, v___x_231_, v___x_225_, v___y_219_, v___y_220_, v___y_221_);
return v___x_232_;
}
}
else
{
size_t v___x_233_; size_t v___x_234_; lean_object* v___x_235_; 
v___x_233_ = ((size_t)0ULL);
v___x_234_ = lean_usize_of_nat(v___x_224_);
v___x_235_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3(v_names_218_, v___x_233_, v___x_234_, v___x_225_, v___y_219_, v___y_220_, v___y_221_);
return v___x_235_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode(lean_object* v_code_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v_declName_242_; lean_object* v___y_243_; lean_object* v___y_244_; lean_object* v___y_245_; 
if (lean_obj_tag(v_code_236_) == 0)
{
lean_object* v_decl_250_; lean_object* v_value_251_; 
v_decl_250_ = lean_ctor_get(v_code_236_, 0);
lean_inc_ref(v_decl_250_);
lean_dec_ref_known(v_code_236_, 2);
v_value_251_ = lean_ctor_get(v_decl_250_, 3);
lean_inc(v_value_251_);
lean_dec_ref(v_decl_250_);
switch(lean_obj_tag(v_value_251_))
{
case 3:
{
lean_object* v_declName_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v_declName_252_ = lean_ctor_get(v_value_251_, 0);
lean_inc(v_declName_252_);
lean_dec_ref_known(v_value_251_, 3);
v___x_253_ = lean_unsigned_to_nat(1u);
v___x_254_ = lean_mk_empty_array_with_capacity(v___x_253_);
v___x_255_ = lean_array_push(v___x_254_, v_declName_252_);
v___x_256_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(v___x_255_, v___y_237_, v___y_238_, v___y_239_);
lean_dec_ref(v___x_255_);
return v___x_256_;
}
case 9:
{
lean_object* v_fn_257_; 
v_fn_257_ = lean_ctor_get(v_value_251_, 0);
lean_inc(v_fn_257_);
lean_dec_ref_known(v_value_251_, 2);
v_declName_242_ = v_fn_257_;
v___y_243_ = v___y_237_;
v___y_244_ = v___y_238_;
v___y_245_ = v___y_239_;
goto v___jp_241_;
}
case 10:
{
lean_object* v_fn_258_; 
v_fn_258_ = lean_ctor_get(v_value_251_, 0);
lean_inc(v_fn_258_);
lean_dec_ref_known(v_value_251_, 2);
v_declName_242_ = v_fn_258_;
v___y_243_ = v___y_237_;
v___y_244_ = v___y_238_;
v___y_245_ = v___y_239_;
goto v___jp_241_;
}
default: 
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec(v_value_251_);
v___x_259_ = lean_box(0);
v___x_260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
return v___x_260_;
}
}
}
else
{
lean_object* v___x_261_; lean_object* v___x_262_; 
lean_dec_ref(v_code_236_);
v___x_261_ = lean_box(0);
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
return v___x_262_;
}
v___jp_241_:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_246_ = lean_unsigned_to_nat(1u);
v___x_247_ = lean_mk_empty_array_with_capacity(v___x_246_);
v___x_248_ = lean_array_push(v___x_247_, v_declName_242_);
v___x_249_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(v___x_248_, v___y_243_, v___y_244_, v___y_245_);
lean_dec_ref(v___x_248_);
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1(uint8_t v_pu_263_, lean_object* v_as_264_, size_t v_i_265_, size_t v_stop_266_, lean_object* v_b_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v___y_273_; uint8_t v___x_278_; 
v___x_278_ = lean_usize_dec_eq(v_i_265_, v_stop_266_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; 
v___x_279_ = lean_array_uget_borrowed(v_as_264_, v_i_265_);
switch(lean_obj_tag(v___x_279_))
{
case 0:
{
lean_object* v_code_280_; lean_object* v___x_281_; 
v_code_280_ = lean_ctor_get(v___x_279_, 2);
lean_inc_ref(v_code_280_);
v___x_281_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_263_, v_code_280_, v___y_268_, v___y_269_, v___y_270_);
v___y_273_ = v___x_281_;
goto v___jp_272_;
}
case 1:
{
lean_object* v_code_282_; lean_object* v___x_283_; 
v_code_282_ = lean_ctor_get(v___x_279_, 1);
lean_inc_ref(v_code_282_);
v___x_283_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_263_, v_code_282_, v___y_268_, v___y_269_, v___y_270_);
v___y_273_ = v___x_283_;
goto v___jp_272_;
}
default: 
{
lean_object* v_code_284_; lean_object* v___x_285_; 
v_code_284_ = lean_ctor_get(v___x_279_, 0);
lean_inc_ref(v_code_284_);
v___x_285_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_263_, v_code_284_, v___y_268_, v___y_269_, v___y_270_);
v___y_273_ = v___x_285_;
goto v___jp_272_;
}
}
}
else
{
lean_object* v___x_286_; 
v___x_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_286_, 0, v_b_267_);
return v___x_286_;
}
v___jp_272_:
{
if (lean_obj_tag(v___y_273_) == 0)
{
lean_object* v_a_274_; size_t v___x_275_; size_t v___x_276_; 
v_a_274_ = lean_ctor_get(v___y_273_, 0);
lean_inc(v_a_274_);
lean_dec_ref_known(v___y_273_, 1);
v___x_275_ = ((size_t)1ULL);
v___x_276_ = lean_usize_add(v_i_265_, v___x_275_);
v_i_265_ = v___x_276_;
v_b_267_ = v_a_274_;
goto _start;
}
else
{
return v___y_273_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(uint8_t v_pu_287_, lean_object* v_c_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v___x_293_; 
lean_inc_ref(v_c_288_);
v___x_293_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode(v_c_288_, v___y_289_, v___y_290_, v___y_291_);
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_339_; 
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_339_ == 0)
{
lean_object* v_unused_340_; 
v_unused_340_ = lean_ctor_get(v___x_293_, 0);
lean_dec(v_unused_340_);
v___x_295_ = v___x_293_;
v_isShared_296_ = v_isSharedCheck_339_;
goto v_resetjp_294_;
}
else
{
lean_dec(v___x_293_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_339_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
switch(lean_obj_tag(v_c_288_))
{
case 0:
{
lean_object* v_k_297_; 
lean_del_object(v___x_295_);
v_k_297_ = lean_ctor_get(v_c_288_, 1);
lean_inc_ref(v_k_297_);
lean_dec_ref_known(v_c_288_, 2);
v_c_288_ = v_k_297_;
goto _start;
}
case 1:
{
lean_object* v_decl_299_; lean_object* v_k_300_; lean_object* v_value_301_; lean_object* v___x_302_; 
lean_del_object(v___x_295_);
v_decl_299_ = lean_ctor_get(v_c_288_, 0);
lean_inc_ref(v_decl_299_);
v_k_300_ = lean_ctor_get(v_c_288_, 1);
lean_inc_ref(v_k_300_);
lean_dec_ref_known(v_c_288_, 2);
v_value_301_ = lean_ctor_get(v_decl_299_, 4);
lean_inc_ref(v_value_301_);
lean_dec_ref(v_decl_299_);
v___x_302_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_287_, v_value_301_, v___y_289_, v___y_290_, v___y_291_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_dec_ref_known(v___x_302_, 1);
v_c_288_ = v_k_300_;
goto _start;
}
else
{
lean_dec_ref(v_k_300_);
return v___x_302_;
}
}
case 2:
{
lean_object* v_decl_304_; lean_object* v_k_305_; lean_object* v_value_306_; lean_object* v___x_307_; 
lean_del_object(v___x_295_);
v_decl_304_ = lean_ctor_get(v_c_288_, 0);
lean_inc_ref(v_decl_304_);
v_k_305_ = lean_ctor_get(v_c_288_, 1);
lean_inc_ref(v_k_305_);
lean_dec_ref_known(v_c_288_, 2);
v_value_306_ = lean_ctor_get(v_decl_304_, 4);
lean_inc_ref(v_value_306_);
lean_dec_ref(v_decl_304_);
v___x_307_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_287_, v_value_306_, v___y_289_, v___y_290_, v___y_291_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_dec_ref_known(v___x_307_, 1);
v_c_288_ = v_k_305_;
goto _start;
}
else
{
lean_dec_ref(v_k_305_);
return v___x_307_;
}
}
case 4:
{
lean_object* v_cases_309_; lean_object* v_alts_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v_cases_309_ = lean_ctor_get(v_c_288_, 0);
lean_inc_ref(v_cases_309_);
lean_dec_ref_known(v_c_288_, 1);
v_alts_310_ = lean_ctor_get(v_cases_309_, 3);
lean_inc_ref(v_alts_310_);
lean_dec_ref(v_cases_309_);
v___x_311_ = lean_unsigned_to_nat(0u);
v___x_312_ = lean_array_get_size(v_alts_310_);
v___x_313_ = lean_box(0);
v___x_314_ = lean_nat_dec_lt(v___x_311_, v___x_312_);
if (v___x_314_ == 0)
{
lean_object* v___x_316_; 
lean_dec_ref(v_alts_310_);
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 0, v___x_313_);
v___x_316_ = v___x_295_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_313_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
else
{
size_t v___x_318_; size_t v___x_319_; lean_object* v___x_320_; 
lean_del_object(v___x_295_);
v___x_318_ = ((size_t)0ULL);
v___x_319_ = lean_usize_of_nat(v___x_312_);
v___x_320_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1(v_pu_287_, v_alts_310_, v___x_318_, v___x_319_, v___x_313_, v___y_289_, v___y_290_, v___y_291_);
lean_dec_ref(v_alts_310_);
return v___x_320_;
}
}
case 7:
{
lean_object* v_k_321_; 
lean_del_object(v___x_295_);
v_k_321_ = lean_ctor_get(v_c_288_, 3);
lean_inc_ref(v_k_321_);
lean_dec_ref_known(v_c_288_, 4);
v_c_288_ = v_k_321_;
goto _start;
}
case 8:
{
lean_object* v_k_323_; 
lean_del_object(v___x_295_);
v_k_323_ = lean_ctor_get(v_c_288_, 3);
lean_inc_ref(v_k_323_);
lean_dec_ref_known(v_c_288_, 4);
v_c_288_ = v_k_323_;
goto _start;
}
case 9:
{
lean_object* v_k_325_; 
lean_del_object(v___x_295_);
v_k_325_ = lean_ctor_get(v_c_288_, 5);
lean_inc_ref(v_k_325_);
lean_dec_ref_known(v_c_288_, 6);
v_c_288_ = v_k_325_;
goto _start;
}
case 10:
{
lean_object* v_k_327_; 
lean_del_object(v___x_295_);
v_k_327_ = lean_ctor_get(v_c_288_, 2);
lean_inc_ref(v_k_327_);
lean_dec_ref_known(v_c_288_, 3);
v_c_288_ = v_k_327_;
goto _start;
}
case 11:
{
lean_object* v_k_329_; 
lean_del_object(v___x_295_);
v_k_329_ = lean_ctor_get(v_c_288_, 2);
lean_inc_ref(v_k_329_);
lean_dec_ref_known(v_c_288_, 3);
v_c_288_ = v_k_329_;
goto _start;
}
case 12:
{
lean_object* v_k_331_; 
lean_del_object(v___x_295_);
v_k_331_ = lean_ctor_get(v_c_288_, 3);
lean_inc_ref(v_k_331_);
lean_dec_ref_known(v_c_288_, 4);
v_c_288_ = v_k_331_;
goto _start;
}
case 13:
{
lean_object* v_k_333_; 
lean_del_object(v___x_295_);
v_k_333_ = lean_ctor_get(v_c_288_, 1);
lean_inc_ref(v_k_333_);
lean_dec_ref_known(v_c_288_, 2);
v_c_288_ = v_k_333_;
goto _start;
}
default: 
{
lean_object* v___x_335_; lean_object* v___x_337_; 
lean_dec_ref(v_c_288_);
v___x_335_ = lean_box(0);
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 0, v___x_335_);
v___x_337_ = v___x_295_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_335_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
}
else
{
lean_dec_ref(v_c_288_);
return v___x_293_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___lam__0(uint8_t v___x_341_, lean_object* v_x_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v___x_341_, v_x_342_, v___y_343_, v___y_344_, v___y_345_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1___boxed(lean_object* v_pu_348_, lean_object* v_as_349_, lean_object* v_i_350_, lean_object* v_stop_351_, lean_object* v_b_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
uint8_t v_pu_boxed_357_; size_t v_i_boxed_358_; size_t v_stop_boxed_359_; lean_object* v_res_360_; 
v_pu_boxed_357_ = lean_unbox(v_pu_348_);
v_i_boxed_358_ = lean_unbox_usize(v_i_350_);
lean_dec(v_i_350_);
v_stop_boxed_359_ = lean_unbox_usize(v_stop_351_);
lean_dec(v_stop_351_);
v_res_360_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0_spec__1(v_pu_boxed_357_, v_as_349_, v_i_boxed_358_, v_stop_boxed_359_, v_b_352_, v___y_353_, v___y_354_, v___y_355_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
lean_dec(v___y_353_);
lean_dec_ref(v_as_349_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go___boxed(lean_object* v_names_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(v_names_361_, v___y_362_, v___y_363_, v___y_364_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
lean_dec(v___y_362_);
lean_dec_ref(v_names_361_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode___boxed(lean_object* v_code_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_visitCode(v_code_367_, v___y_368_, v___y_369_, v___y_370_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0___boxed(lean_object* v_pu_373_, lean_object* v_c_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
uint8_t v_pu_boxed_379_; lean_object* v_res_380_; 
v_pu_boxed_379_ = lean_unbox(v_pu_373_);
v_res_380_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Code_forM_go___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__0(v_pu_boxed_379_, v_c_374_, v___y_375_, v___y_376_, v___y_377_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3___boxed(lean_object* v_as_381_, lean_object* v_i_382_, lean_object* v_stop_383_, lean_object* v_b_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
size_t v_i_boxed_389_; size_t v_stop_boxed_390_; lean_object* v_res_391_; 
v_i_boxed_389_ = lean_unbox_usize(v_i_382_);
lean_dec(v_i_382_);
v_stop_boxed_390_ = lean_unbox_usize(v_stop_383_);
lean_dec(v_stop_383_);
v_res_391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__3(v_as_381_, v_i_boxed_389_, v_stop_boxed_390_, v_b_384_, v___y_385_, v___y_386_, v___y_387_);
lean_dec(v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec_ref(v_as_381_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1(uint8_t v_pu_392_, lean_object* v_f_393_, lean_object* v_v_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___redArg(v_f_393_, v_v_394_, v___y_395_, v___y_396_, v___y_397_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1___boxed(lean_object* v_pu_400_, lean_object* v_f_401_, lean_object* v_v_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
uint8_t v_pu_boxed_407_; lean_object* v_res_408_; 
v_pu_boxed_407_ = lean_unbox(v_pu_400_);
v_res_408_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go_spec__1(v_pu_boxed_407_, v_f_401_, v_v_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
return v_res_408_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_collectUsedDecls___closed__1(void){
_start:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_411_ = ((lean_object*)(l_Lean_Compiler_LCNF_collectUsedDecls___closed__0));
v___x_412_ = l_Lean_NameSet_empty;
v___x_413_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
lean_ctor_set(v___x_413_, 1, v___x_411_);
lean_ctor_set(v___x_413_, 2, v___x_411_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_collectUsedDecls(lean_object* v_decls_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_418_ = lean_obj_once(&l_Lean_Compiler_LCNF_collectUsedDecls___closed__1, &l_Lean_Compiler_LCNF_collectUsedDecls___closed__1_once, _init_l_Lean_Compiler_LCNF_collectUsedDecls___closed__1);
v___x_419_ = lean_st_mk_ref(v___x_418_);
v___x_420_ = l___private_Lean_Compiler_LCNF_EmitUtil_0__Lean_Compiler_LCNF_collectUsedDecls_go(v_decls_414_, v___x_419_, v___y_415_, v___y_416_);
if (lean_obj_tag(v___x_420_) == 0)
{
lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_431_; 
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_431_ == 0)
{
lean_object* v_unused_432_; 
v_unused_432_ = lean_ctor_get(v___x_420_, 0);
lean_dec(v_unused_432_);
v___x_422_ = v___x_420_;
v_isShared_423_ = v_isSharedCheck_431_;
goto v_resetjp_421_;
}
else
{
lean_dec(v___x_420_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_431_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v_localDecls_425_; lean_object* v_extSigs_426_; lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_424_ = lean_st_ref_get(v___x_419_);
lean_dec(v___x_419_);
v_localDecls_425_ = lean_ctor_get(v___x_424_, 1);
lean_inc_ref(v_localDecls_425_);
v_extSigs_426_ = lean_ctor_get(v___x_424_, 2);
lean_inc_ref(v_extSigs_426_);
lean_dec(v___x_424_);
v___x_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_427_, 0, v_localDecls_425_);
lean_ctor_set(v___x_427_, 1, v_extSigs_426_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_427_);
v___x_429_ = v___x_422_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
lean_dec(v___x_419_);
v_a_433_ = lean_ctor_get(v___x_420_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_420_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_420_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_collectUsedDecls___boxed(lean_object* v_decls_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_Compiler_LCNF_collectUsedDecls(v_decls_441_, v___y_442_, v___y_443_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
lean_dec_ref(v_decls_441_);
return v_res_445_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0(lean_object* v_modulePrefix_446_, lean_object* v_as_447_, size_t v_i_448_, size_t v_stop_449_){
_start:
{
uint8_t v___x_454_; 
v___x_454_ = lean_usize_dec_eq(v_i_448_, v_stop_449_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v_toImport_456_; uint8_t v_irPhases_457_; uint8_t v___x_458_; uint8_t v___x_459_; 
v___x_455_ = lean_array_uget_borrowed(v_as_447_, v_i_448_);
v_toImport_456_ = lean_ctor_get(v___x_455_, 0);
v_irPhases_457_ = lean_ctor_get_uint8(v___x_455_, sizeof(void*)*1);
v___x_458_ = 1;
v___x_459_ = l_Lean_instBEqIRPhases_beq(v_irPhases_457_, v___x_458_);
if (v___x_459_ == 0)
{
lean_object* v_module_460_; uint8_t v___x_461_; 
v_module_460_ = lean_ctor_get(v_toImport_456_, 0);
v___x_461_ = l_Lean_Name_isPrefixOf(v_modulePrefix_446_, v_module_460_);
if (v___x_461_ == 0)
{
goto v___jp_450_;
}
else
{
return v___x_461_;
}
}
else
{
goto v___jp_450_;
}
}
else
{
uint8_t v___x_462_; 
v___x_462_ = 0;
return v___x_462_;
}
v___jp_450_:
{
size_t v___x_451_; size_t v___x_452_; 
v___x_451_ = ((size_t)1ULL);
v___x_452_ = lean_usize_add(v_i_448_, v___x_451_);
v_i_448_ = v___x_452_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0___boxed(lean_object* v_modulePrefix_463_, lean_object* v_as_464_, lean_object* v_i_465_, lean_object* v_stop_466_){
_start:
{
size_t v_i_boxed_467_; size_t v_stop_boxed_468_; uint8_t v_res_469_; lean_object* v_r_470_; 
v_i_boxed_467_ = lean_unbox_usize(v_i_465_);
lean_dec(v_i_465_);
v_stop_boxed_468_ = lean_unbox_usize(v_stop_466_);
lean_dec(v_stop_466_);
v_res_469_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0(v_modulePrefix_463_, v_as_464_, v_i_boxed_467_, v_stop_boxed_468_);
lean_dec_ref(v_as_464_);
lean_dec(v_modulePrefix_463_);
v_r_470_ = lean_box(v_res_469_);
return v_r_470_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_usesModuleFrom(lean_object* v_env_471_, lean_object* v_modulePrefix_472_){
_start:
{
lean_object* v___x_473_; lean_object* v_modules_474_; lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_473_ = l_Lean_Environment_header(v_env_471_);
v_modules_474_ = lean_ctor_get(v___x_473_, 3);
lean_inc_ref(v_modules_474_);
lean_dec_ref(v___x_473_);
v___x_475_ = lean_unsigned_to_nat(0u);
v___x_476_ = lean_array_get_size(v_modules_474_);
v___x_477_ = lean_nat_dec_lt(v___x_475_, v___x_476_);
if (v___x_477_ == 0)
{
lean_dec_ref(v_modules_474_);
return v___x_477_;
}
else
{
if (v___x_477_ == 0)
{
lean_dec_ref(v_modules_474_);
return v___x_477_;
}
else
{
size_t v___x_478_; size_t v___x_479_; uint8_t v___x_480_; 
v___x_478_ = ((size_t)0ULL);
v___x_479_ = lean_usize_of_nat(v___x_476_);
v___x_480_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Compiler_LCNF_usesModuleFrom_spec__0(v_modulePrefix_472_, v_modules_474_, v___x_478_, v___x_479_);
lean_dec_ref(v_modules_474_);
return v___x_480_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_usesModuleFrom___boxed(lean_object* v_env_481_, lean_object* v_modulePrefix_482_){
_start:
{
uint8_t v_res_483_; lean_object* v_r_484_; 
v_res_483_ = l_Lean_Compiler_LCNF_usesModuleFrom(v_env_481_, v_modulePrefix_482_);
lean_dec(v_modulePrefix_482_);
lean_dec_ref(v_env_481_);
v_r_484_ = lean_box(v_res_483_);
return v_r_484_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_EmitUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_EmitUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_EmitUtil(builtin);
}
#ifdef __cplusplus
}
#endif
