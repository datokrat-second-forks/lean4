// Lean compiler output
// Module: Lean.Linter.PersistentLintLog
// Imports: public import Lean.Environment public import Lean.Message public import Lean.Linter.Init public import Lean.Linter.CodeQuality.Basic public import Lean.Elab.DeclarationRange
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_MessageData_isLinterMessage(lean_object*);
lean_object* l_Lean_MessageData_kind(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_push___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_instMonadBaseIO___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MessageLog_reportedPlusUnreported(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_DeclarationRange_ofStringPositions(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_Linter_getLinterOptions___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "lintLogExt"};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(242, 67, 33, 35, 106, 101, 161, 119)}};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_push___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__11_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__11_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__11_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__12_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__11_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__12_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__12_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_lintLogExt;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getAllLints(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getAllLints___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "codeQualityLogExt"};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__1_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(67, 189, 225, 144, 17, 204, 196, 193)}};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_push___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__4_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__5_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__8_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__6_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__0_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__9_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__7_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_codeQualityLogExt;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getAllCodeQualityEntries(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getAllCodeQualityEntries___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__0 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__0_value;
static const lean_closure_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__1 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__1_value;
static const lean_closure_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__2 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__2_value;
static const lean_closure_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__3 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__3_value;
static const lean_closure_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__4 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__4_value;
static const lean_closure_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__4_value),((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__3_value)} };
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__5 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__5_value;
static const lean_closure_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__3_value)} };
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__6 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__6_value;
static const lean_closure_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__7 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__7_value;
static const lean_ctor_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__0_value),((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__1_value)}};
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__8 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__8_value;
static const lean_ctor_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__8_value),((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__2_value),((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__5_value),((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__6_value),((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__7_value)}};
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__9 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__9_value;
static const lean_ctor_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__9_value),((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__3_value)}};
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__10 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__10_value;
static const lean_closure_object l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_read___boxed, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__10_value)} };
static const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__11 = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__11_value;
LEAN_EXPORT const lean_object* l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO = (const lean_object*)&l_Lean_Linter_instMonadFileMapReaderTFileMapBaseIO___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Linter_recordLints_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Linter_recordLints_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_recordLints_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_recordLints_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_recordLints(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_recordLints___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntry___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntry___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntry(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntryIf___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntryIf___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntryIf___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntryIf___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntryIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_box(0);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(lean_object* v___x_5_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v___x_5_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object* v___x_8_, lean_object* v___y_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(v___x_8_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(lean_object* v___x_11_, lean_object* v_x_12_, lean_object* v___y_13_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_11_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object* v___x_16_, lean_object* v_x_17_, lean_object* v___y_18_, lean_object* v___y_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(v___x_16_, v_x_17_, v___y_18_);
lean_dec_ref(v___y_18_);
lean_dec_ref(v_x_17_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(lean_object* v___x_21_, lean_object* v_x_22_, lean_object* v_entries_23_){
_start:
{
lean_object* v___x_24_; 
lean_inc_ref(v_entries_23_);
v___x_24_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_24_, 0, v___x_21_);
lean_ctor_set(v___x_24_, 1, v_entries_23_);
lean_ctor_set(v___x_24_, 2, v_entries_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object* v___x_25_, lean_object* v_x_26_, lean_object* v_entries_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(v___x_25_, v_x_26_, v_entries_27_);
lean_dec_ref(v_x_26_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(lean_object* v___x_29_, lean_object* v_x_30_){
_start:
{
lean_inc_ref(v___x_29_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object* v___x_31_, lean_object* v_x_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(v___x_31_, v_x_32_);
lean_dec_ref(v_x_32_);
lean_dec_ref(v___x_31_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = ((lean_object*)(l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__12_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_));
v___x_67_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2____boxed(lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_();
return v_res_69_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l_Array_instInhabited___redArg();
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg(lean_object* v_env_71_, size_t v_sz_72_, size_t v_i_73_, lean_object* v_bs_74_){
_start:
{
uint8_t v___x_75_; 
v___x_75_ = lean_usize_dec_lt(v_i_73_, v_sz_72_);
if (v___x_75_ == 0)
{
return v_bs_74_;
}
else
{
lean_object* v___x_76_; lean_object* v_v_77_; lean_object* v___x_78_; lean_object* v_bs_x27_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; size_t v___x_85_; size_t v___x_86_; lean_object* v___x_87_; 
v___x_76_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg___closed__0);
v_v_77_ = lean_array_uget(v_bs_74_, v_i_73_);
v___x_78_ = lean_unsigned_to_nat(0u);
v_bs_x27_79_ = lean_array_uset(v_bs_74_, v_i_73_, v___x_78_);
v___x_80_ = lean_usize_to_nat(v_i_73_);
v___x_81_ = l_Lean_Linter_lintLogExt;
v___x_82_ = 1;
v___x_83_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_76_, v___x_81_, v_env_71_, v___x_80_, v___x_82_);
lean_dec(v___x_80_);
v___x_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_84_, 0, v_v_77_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = ((size_t)1ULL);
v___x_86_ = lean_usize_add(v_i_73_, v___x_85_);
v___x_87_ = lean_array_uset(v_bs_x27_79_, v_i_73_, v___x_84_);
v_i_73_ = v___x_86_;
v_bs_74_ = v___x_87_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg___boxed(lean_object* v_env_89_, lean_object* v_sz_90_, lean_object* v_i_91_, lean_object* v_bs_92_){
_start:
{
size_t v_sz_boxed_93_; size_t v_i_boxed_94_; lean_object* v_res_95_; 
v_sz_boxed_93_ = lean_unbox_usize(v_sz_90_);
lean_dec(v_sz_90_);
v_i_boxed_94_ = lean_unbox_usize(v_i_91_);
lean_dec(v_i_91_);
v_res_95_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg(v_env_89_, v_sz_boxed_93_, v_i_boxed_94_, v_bs_92_);
lean_dec_ref(v_env_89_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getAllLints(lean_object* v_env_96_){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; size_t v_sz_99_; size_t v___x_100_; lean_object* v___x_101_; 
v___x_97_ = l_Lean_Environment_header(v_env_96_);
v___x_98_ = l_Lean_EnvironmentHeader_moduleNames(v___x_97_);
v_sz_99_ = lean_array_size(v___x_98_);
v___x_100_ = ((size_t)0ULL);
v___x_101_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg(v_env_96_, v_sz_99_, v___x_100_, v___x_98_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getAllLints___boxed(lean_object* v_env_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Linter_getAllLints(v_env_102_);
lean_dec_ref(v_env_102_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0(lean_object* v_env_104_, lean_object* v_as_105_, size_t v_sz_106_, size_t v_i_107_, lean_object* v_bs_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg(v_env_104_, v_sz_106_, v_i_107_, v_bs_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___boxed(lean_object* v_env_110_, lean_object* v_as_111_, lean_object* v_sz_112_, lean_object* v_i_113_, lean_object* v_bs_114_){
_start:
{
size_t v_sz_boxed_115_; size_t v_i_boxed_116_; lean_object* v_res_117_; 
v_sz_boxed_115_ = lean_unbox_usize(v_sz_112_);
lean_dec(v_sz_112_);
v_i_boxed_116_ = lean_unbox_usize(v_i_113_);
lean_dec(v_i_113_);
v_res_117_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0(v_env_110_, v_as_111_, v_sz_boxed_115_, v_i_boxed_116_, v_bs_114_);
lean_dec_ref(v_as_111_);
lean_dec_ref(v_env_110_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(lean_object* v_x_118_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = lean_box(0);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object* v_x_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__0_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(v_x_120_);
lean_dec_ref(v_x_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(lean_object* v___x_122_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_124_, 0, v___x_122_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object* v___x_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__1_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(v___x_125_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(lean_object* v___x_128_, lean_object* v_x_129_, lean_object* v___y_130_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_132_, 0, v___x_128_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object* v___x_133_, lean_object* v_x_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__2_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(v___x_133_, v_x_134_, v___y_135_);
lean_dec_ref(v___y_135_);
lean_dec_ref(v_x_134_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(lean_object* v___x_138_, lean_object* v_x_139_, lean_object* v_entries_140_){
_start:
{
lean_object* v___x_141_; 
lean_inc_ref(v_entries_140_);
v___x_141_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_141_, 0, v___x_138_);
lean_ctor_set(v___x_141_, 1, v_entries_140_);
lean_ctor_set(v___x_141_, 2, v_entries_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object* v___x_142_, lean_object* v_x_143_, lean_object* v_entries_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__3_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(v___x_142_, v_x_143_, v_entries_144_);
lean_dec_ref(v_x_143_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(lean_object* v___x_146_, lean_object* v_x_147_){
_start:
{
lean_inc_ref(v___x_146_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object* v___x_148_, lean_object* v_x_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___lam__4_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(v___x_148_, v_x_149_);
lean_dec_ref(v_x_149_);
lean_dec_ref(v___x_148_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = ((lean_object*)(l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn___closed__10_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_));
v___x_182_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_181_);
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2____boxed(lean_object* v___y_183_){
_start:
{
lean_object* v_res_184_; 
v_res_184_ = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_();
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0___redArg(lean_object* v_env_185_, size_t v_sz_186_, size_t v_i_187_, lean_object* v_bs_188_){
_start:
{
uint8_t v___x_189_; 
v___x_189_ = lean_usize_dec_lt(v_i_187_, v_sz_186_);
if (v___x_189_ == 0)
{
return v_bs_188_;
}
else
{
lean_object* v___x_190_; lean_object* v_v_191_; lean_object* v___x_192_; lean_object* v_bs_x27_193_; lean_object* v___x_194_; lean_object* v___x_195_; uint8_t v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; size_t v___x_199_; size_t v___x_200_; lean_object* v___x_201_; 
v___x_190_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllLints_spec__0___redArg___closed__0);
v_v_191_ = lean_array_uget(v_bs_188_, v_i_187_);
v___x_192_ = lean_unsigned_to_nat(0u);
v_bs_x27_193_ = lean_array_uset(v_bs_188_, v_i_187_, v___x_192_);
v___x_194_ = lean_usize_to_nat(v_i_187_);
v___x_195_ = l_Lean_Linter_codeQualityLogExt;
v___x_196_ = 1;
v___x_197_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_190_, v___x_195_, v_env_185_, v___x_194_, v___x_196_);
lean_dec(v___x_194_);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v_v_191_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = ((size_t)1ULL);
v___x_200_ = lean_usize_add(v_i_187_, v___x_199_);
v___x_201_ = lean_array_uset(v_bs_x27_193_, v_i_187_, v___x_198_);
v_i_187_ = v___x_200_;
v_bs_188_ = v___x_201_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0___redArg___boxed(lean_object* v_env_203_, lean_object* v_sz_204_, lean_object* v_i_205_, lean_object* v_bs_206_){
_start:
{
size_t v_sz_boxed_207_; size_t v_i_boxed_208_; lean_object* v_res_209_; 
v_sz_boxed_207_ = lean_unbox_usize(v_sz_204_);
lean_dec(v_sz_204_);
v_i_boxed_208_ = lean_unbox_usize(v_i_205_);
lean_dec(v_i_205_);
v_res_209_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0___redArg(v_env_203_, v_sz_boxed_207_, v_i_boxed_208_, v_bs_206_);
lean_dec_ref(v_env_203_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getAllCodeQualityEntries(lean_object* v_env_210_){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; size_t v_sz_213_; size_t v___x_214_; lean_object* v___x_215_; 
v___x_211_ = l_Lean_Environment_header(v_env_210_);
v___x_212_ = l_Lean_EnvironmentHeader_moduleNames(v___x_211_);
v_sz_213_ = lean_array_size(v___x_212_);
v___x_214_ = ((size_t)0ULL);
v___x_215_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0___redArg(v_env_210_, v_sz_213_, v___x_214_, v___x_212_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getAllCodeQualityEntries___boxed(lean_object* v_env_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lean_Linter_getAllCodeQualityEntries(v_env_216_);
lean_dec_ref(v_env_216_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0(lean_object* v_env_218_, lean_object* v_as_219_, size_t v_sz_220_, size_t v_i_221_, lean_object* v_bs_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0___redArg(v_env_218_, v_sz_220_, v_i_221_, v_bs_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0___boxed(lean_object* v_env_224_, lean_object* v_as_225_, lean_object* v_sz_226_, lean_object* v_i_227_, lean_object* v_bs_228_){
_start:
{
size_t v_sz_boxed_229_; size_t v_i_boxed_230_; lean_object* v_res_231_; 
v_sz_boxed_229_ = lean_unbox_usize(v_sz_226_);
lean_dec(v_sz_226_);
v_i_boxed_230_ = lean_unbox_usize(v_i_227_);
lean_dec(v_i_227_);
v_res_231_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Linter_getAllCodeQualityEntries_spec__0(v_env_224_, v_as_225_, v_sz_boxed_229_, v_i_boxed_230_, v_bs_228_);
lean_dec_ref(v_as_225_);
lean_dec_ref(v_env_224_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Linter_recordLints_spec__1(lean_object* v_stx_258_, lean_object* v___y_259_){
_start:
{
uint8_t v___x_261_; lean_object* v___x_262_; 
v___x_261_ = 0;
v___x_262_ = l_Lean_Syntax_getRange_x3f(v_stx_258_, v___x_261_);
if (lean_obj_tag(v___x_262_) == 1)
{
lean_object* v_val_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_273_; 
v_val_263_ = lean_ctor_get(v___x_262_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_262_);
if (v_isSharedCheck_273_ == 0)
{
v___x_265_ = v___x_262_;
v_isShared_266_ = v_isSharedCheck_273_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_val_263_);
lean_dec(v___x_262_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_273_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v_start_267_; lean_object* v_stop_268_; lean_object* v___x_269_; lean_object* v___x_271_; 
v_start_267_ = lean_ctor_get(v_val_263_, 0);
lean_inc(v_start_267_);
v_stop_268_ = lean_ctor_get(v_val_263_, 1);
lean_inc(v_stop_268_);
lean_dec(v_val_263_);
lean_inc_ref(v___y_259_);
v___x_269_ = l_Lean_DeclarationRange_ofStringPositions(v___y_259_, v_start_267_, v_stop_268_);
lean_dec(v_stop_268_);
lean_dec(v_start_267_);
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 0, v___x_269_);
v___x_271_ = v___x_265_;
goto v_reusejp_270_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_269_);
v___x_271_ = v_reuseFailAlloc_272_;
goto v_reusejp_270_;
}
v_reusejp_270_:
{
return v___x_271_;
}
}
}
else
{
lean_object* v___x_274_; 
lean_dec(v___x_262_);
v___x_274_ = lean_box(0);
return v___x_274_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Linter_recordLints_spec__1___boxed(lean_object* v_stx_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Linter_recordLints_spec__1(v_stx_275_, v___y_276_);
lean_dec_ref(v___y_276_);
lean_dec(v_stx_275_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__1(lean_object* v___y_279_, lean_object* v_as_280_, size_t v_i_281_, size_t v_stop_282_, lean_object* v_b_283_){
_start:
{
lean_object* v_val_286_; uint8_t v___x_290_; 
v___x_290_ = lean_usize_dec_eq(v_i_281_, v_stop_282_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; lean_object* v_fileName_292_; lean_object* v_pos_293_; lean_object* v_endPos_294_; uint8_t v_keepFullRange_295_; uint8_t v_severity_296_; uint8_t v_isSilent_297_; lean_object* v_caption_298_; lean_object* v_data_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_317_; 
v___x_291_ = lean_array_uget(v_as_280_, v_i_281_);
v_fileName_292_ = lean_ctor_get(v___x_291_, 0);
v_pos_293_ = lean_ctor_get(v___x_291_, 1);
v_endPos_294_ = lean_ctor_get(v___x_291_, 2);
v_keepFullRange_295_ = lean_ctor_get_uint8(v___x_291_, sizeof(void*)*5);
v_severity_296_ = lean_ctor_get_uint8(v___x_291_, sizeof(void*)*5 + 1);
v_isSilent_297_ = lean_ctor_get_uint8(v___x_291_, sizeof(void*)*5 + 2);
v_caption_298_ = lean_ctor_get(v___x_291_, 3);
v_data_299_ = lean_ctor_get(v___x_291_, 4);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_317_ == 0)
{
v___x_301_ = v___x_291_;
v_isShared_302_ = v_isSharedCheck_317_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_data_299_);
lean_inc(v_caption_298_);
lean_inc(v_endPos_294_);
lean_inc(v_pos_293_);
lean_inc(v_fileName_292_);
lean_dec(v___x_291_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_317_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
uint8_t v___x_303_; 
lean_inc(v_data_299_);
v___x_303_ = l_Lean_MessageData_isLinterMessage(v_data_299_);
if (v___x_303_ == 0)
{
lean_del_object(v___x_301_);
lean_dec(v_data_299_);
lean_dec_ref(v_caption_298_);
lean_dec(v_endPos_294_);
lean_dec_ref(v_pos_293_);
lean_dec_ref(v_fileName_292_);
v_val_286_ = v_b_283_;
goto v___jp_285_;
}
else
{
lean_object* v_kind_304_; uint8_t v___x_305_; 
v_kind_304_ = l_Lean_MessageData_kind(v_data_299_);
v___x_305_ = l_Lean_Name_isAnonymous(v_kind_304_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v_toEnvExtension_308_; lean_object* v_asyncMode_309_; lean_object* v___x_311_; 
v___x_306_ = l_Lean_MessageData_toString(v_data_299_);
v___x_307_ = l_Lean_Linter_lintLogExt;
v_toEnvExtension_308_ = lean_ctor_get(v___x_307_, 0);
v_asyncMode_309_ = lean_ctor_get(v_toEnvExtension_308_, 2);
lean_inc_ref(v_fileName_292_);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 4, v___x_306_);
v___x_311_ = v___x_301_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_fileName_292_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_pos_293_);
lean_ctor_set(v_reuseFailAlloc_316_, 2, v_endPos_294_);
lean_ctor_set(v_reuseFailAlloc_316_, 3, v_caption_298_);
lean_ctor_set(v_reuseFailAlloc_316_, 4, v___x_306_);
lean_ctor_set_uint8(v_reuseFailAlloc_316_, sizeof(void*)*5, v_keepFullRange_295_);
lean_ctor_set_uint8(v_reuseFailAlloc_316_, sizeof(void*)*5 + 1, v_severity_296_);
lean_ctor_set_uint8(v_reuseFailAlloc_316_, sizeof(void*)*5 + 2, v_isSilent_297_);
v___x_311_ = v_reuseFailAlloc_316_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
lean_inc(v_kind_304_);
v___x_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
lean_ctor_set(v___x_312_, 1, v_kind_304_);
lean_inc(v___y_279_);
v___x_313_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_313_, 0, v_kind_304_);
lean_ctor_set(v___x_313_, 1, v___x_312_);
lean_ctor_set(v___x_313_, 2, v___y_279_);
lean_ctor_set(v___x_313_, 3, v_fileName_292_);
v___x_314_ = lean_box(0);
v___x_315_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_307_, v_b_283_, v___x_313_, v_asyncMode_309_, v___x_314_);
v_val_286_ = v___x_315_;
goto v___jp_285_;
}
}
else
{
lean_dec(v_kind_304_);
lean_del_object(v___x_301_);
lean_dec(v_data_299_);
lean_dec_ref(v_caption_298_);
lean_dec(v_endPos_294_);
lean_dec_ref(v_pos_293_);
lean_dec_ref(v_fileName_292_);
v_val_286_ = v_b_283_;
goto v___jp_285_;
}
}
}
}
else
{
lean_dec(v___y_279_);
return v_b_283_;
}
v___jp_285_:
{
size_t v___x_287_; size_t v___x_288_; 
v___x_287_ = ((size_t)1ULL);
v___x_288_ = lean_usize_add(v_i_281_, v___x_287_);
v_i_281_ = v___x_288_;
v_b_283_ = v_val_286_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__1___boxed(lean_object* v___y_318_, lean_object* v_as_319_, lean_object* v_i_320_, lean_object* v_stop_321_, lean_object* v_b_322_, lean_object* v___y_323_){
_start:
{
size_t v_i_boxed_324_; size_t v_stop_boxed_325_; lean_object* v_res_326_; 
v_i_boxed_324_ = lean_unbox_usize(v_i_320_);
lean_dec(v_i_320_);
v_stop_boxed_325_ = lean_unbox_usize(v_stop_321_);
lean_dec(v_stop_321_);
v_res_326_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__1(v___y_318_, v_as_319_, v_i_boxed_324_, v_stop_boxed_325_, v_b_322_);
lean_dec_ref(v_as_319_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__2(lean_object* v___y_327_, lean_object* v_x_328_, lean_object* v_x_329_){
_start:
{
if (lean_obj_tag(v_x_328_) == 0)
{
lean_object* v_cs_331_; lean_object* v___x_332_; lean_object* v___x_333_; uint8_t v___x_334_; 
v_cs_331_ = lean_ctor_get(v_x_328_, 0);
v___x_332_ = lean_unsigned_to_nat(0u);
v___x_333_ = lean_array_get_size(v_cs_331_);
v___x_334_ = lean_nat_dec_lt(v___x_332_, v___x_333_);
if (v___x_334_ == 0)
{
lean_dec(v___y_327_);
return v_x_329_;
}
else
{
size_t v___x_335_; size_t v___x_336_; lean_object* v___x_337_; 
v___x_335_ = ((size_t)0ULL);
v___x_336_ = lean_usize_of_nat(v___x_333_);
v___x_337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0_spec__2(v___y_327_, v_cs_331_, v___x_335_, v___x_336_, v_x_329_);
return v___x_337_;
}
}
else
{
lean_object* v_vs_338_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v_vs_338_ = lean_ctor_get(v_x_328_, 0);
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = lean_array_get_size(v_vs_338_);
v___x_341_ = lean_nat_dec_lt(v___x_339_, v___x_340_);
if (v___x_341_ == 0)
{
lean_dec(v___y_327_);
return v_x_329_;
}
else
{
size_t v___x_342_; size_t v___x_343_; lean_object* v___x_344_; 
v___x_342_ = ((size_t)0ULL);
v___x_343_ = lean_usize_of_nat(v___x_340_);
v___x_344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__1(v___y_327_, v_vs_338_, v___x_342_, v___x_343_, v_x_329_);
return v___x_344_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0_spec__2(lean_object* v___y_345_, lean_object* v_as_346_, size_t v_i_347_, size_t v_stop_348_, lean_object* v_b_349_){
_start:
{
uint8_t v___x_351_; 
v___x_351_ = lean_usize_dec_eq(v_i_347_, v_stop_348_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; lean_object* v___x_353_; size_t v___x_354_; size_t v___x_355_; 
v___x_352_ = lean_array_uget_borrowed(v_as_346_, v_i_347_);
lean_inc(v___y_345_);
v___x_353_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__2(v___y_345_, v___x_352_, v_b_349_);
v___x_354_ = ((size_t)1ULL);
v___x_355_ = lean_usize_add(v_i_347_, v___x_354_);
v_i_347_ = v___x_355_;
v_b_349_ = v___x_353_;
goto _start;
}
else
{
lean_dec(v___y_345_);
return v_b_349_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0_spec__2___boxed(lean_object* v___y_357_, lean_object* v_as_358_, lean_object* v_i_359_, lean_object* v_stop_360_, lean_object* v_b_361_, lean_object* v___y_362_){
_start:
{
size_t v_i_boxed_363_; size_t v_stop_boxed_364_; lean_object* v_res_365_; 
v_i_boxed_363_ = lean_unbox_usize(v_i_359_);
lean_dec(v_i_359_);
v_stop_boxed_364_ = lean_unbox_usize(v_stop_360_);
lean_dec(v_stop_360_);
v_res_365_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0_spec__2(v___y_357_, v_as_358_, v_i_boxed_363_, v_stop_boxed_364_, v_b_361_);
lean_dec_ref(v_as_358_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__2___boxed(lean_object* v___y_366_, lean_object* v_x_367_, lean_object* v_x_368_, lean_object* v___y_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__2(v___y_366_, v_x_367_, v_x_368_);
lean_dec_ref(v_x_367_);
return v_res_370_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0(lean_object* v___y_372_, lean_object* v_x_373_, size_t v_x_374_, size_t v_x_375_, lean_object* v_x_376_){
_start:
{
if (lean_obj_tag(v_x_373_) == 0)
{
lean_object* v_cs_378_; lean_object* v___x_379_; size_t v___x_380_; lean_object* v_j_381_; lean_object* v___x_382_; size_t v___x_383_; size_t v___x_384_; size_t v___x_385_; size_t v___x_386_; size_t v___x_387_; size_t v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v_cs_378_ = lean_ctor_get(v_x_373_, 0);
v___x_379_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0___closed__0);
v___x_380_ = lean_usize_shift_right(v_x_374_, v_x_375_);
v_j_381_ = lean_usize_to_nat(v___x_380_);
v___x_382_ = lean_array_get_borrowed(v___x_379_, v_cs_378_, v_j_381_);
v___x_383_ = ((size_t)1ULL);
v___x_384_ = lean_usize_shift_left(v___x_383_, v_x_375_);
v___x_385_ = lean_usize_sub(v___x_384_, v___x_383_);
v___x_386_ = lean_usize_land(v_x_374_, v___x_385_);
v___x_387_ = ((size_t)5ULL);
v___x_388_ = lean_usize_sub(v_x_375_, v___x_387_);
lean_inc(v___y_372_);
v___x_389_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0(v___y_372_, v___x_382_, v___x_386_, v___x_388_, v_x_376_);
v___x_390_ = lean_unsigned_to_nat(1u);
v___x_391_ = lean_nat_add(v_j_381_, v___x_390_);
lean_dec(v_j_381_);
v___x_392_ = lean_array_get_size(v_cs_378_);
v___x_393_ = lean_nat_dec_lt(v___x_391_, v___x_392_);
if (v___x_393_ == 0)
{
lean_dec(v___x_391_);
lean_dec(v___y_372_);
return v___x_389_;
}
else
{
size_t v___x_394_; size_t v___x_395_; lean_object* v___x_396_; 
v___x_394_ = lean_usize_of_nat(v___x_391_);
lean_dec(v___x_391_);
v___x_395_ = lean_usize_of_nat(v___x_392_);
v___x_396_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0_spec__2(v___y_372_, v_cs_378_, v___x_394_, v___x_395_, v___x_389_);
return v___x_396_;
}
}
else
{
lean_object* v_vs_397_; lean_object* v___x_398_; lean_object* v___x_399_; uint8_t v___x_400_; 
v_vs_397_ = lean_ctor_get(v_x_373_, 0);
v___x_398_ = lean_usize_to_nat(v_x_374_);
v___x_399_ = lean_array_get_size(v_vs_397_);
v___x_400_ = lean_nat_dec_lt(v___x_398_, v___x_399_);
if (v___x_400_ == 0)
{
lean_dec(v___x_398_);
lean_dec(v___y_372_);
return v_x_376_;
}
else
{
size_t v___x_401_; size_t v___x_402_; lean_object* v___x_403_; 
v___x_401_ = lean_usize_of_nat(v___x_398_);
lean_dec(v___x_398_);
v___x_402_ = lean_usize_of_nat(v___x_399_);
v___x_403_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__1(v___y_372_, v_vs_397_, v___x_401_, v___x_402_, v_x_376_);
return v___x_403_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0___boxed(lean_object* v___y_404_, lean_object* v_x_405_, lean_object* v_x_406_, lean_object* v_x_407_, lean_object* v_x_408_, lean_object* v___y_409_){
_start:
{
size_t v_x_4377__boxed_410_; size_t v_x_4378__boxed_411_; lean_object* v_res_412_; 
v_x_4377__boxed_410_ = lean_unbox_usize(v_x_406_);
lean_dec(v_x_406_);
v_x_4378__boxed_411_ = lean_unbox_usize(v_x_407_);
lean_dec(v_x_407_);
v_res_412_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0(v___y_404_, v_x_405_, v_x_4377__boxed_410_, v_x_4378__boxed_411_, v_x_408_);
lean_dec_ref(v_x_405_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0(lean_object* v___y_413_, lean_object* v_t_414_, lean_object* v_init_415_, lean_object* v_start_416_){
_start:
{
lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_418_ = lean_unsigned_to_nat(0u);
v___x_419_ = lean_nat_dec_eq(v_start_416_, v___x_418_);
if (v___x_419_ == 0)
{
lean_object* v_root_420_; lean_object* v_tail_421_; size_t v_shift_422_; lean_object* v_tailOff_423_; uint8_t v___x_424_; 
v_root_420_ = lean_ctor_get(v_t_414_, 0);
v_tail_421_ = lean_ctor_get(v_t_414_, 1);
v_shift_422_ = lean_ctor_get_usize(v_t_414_, 4);
v_tailOff_423_ = lean_ctor_get(v_t_414_, 3);
v___x_424_ = lean_nat_dec_le(v_tailOff_423_, v_start_416_);
if (v___x_424_ == 0)
{
size_t v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; 
v___x_425_ = lean_usize_of_nat(v_start_416_);
lean_inc(v___y_413_);
v___x_426_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__0(v___y_413_, v_root_420_, v___x_425_, v_shift_422_, v_init_415_);
v___x_427_ = lean_array_get_size(v_tail_421_);
v___x_428_ = lean_nat_dec_lt(v___x_418_, v___x_427_);
if (v___x_428_ == 0)
{
lean_dec(v___y_413_);
return v___x_426_;
}
else
{
size_t v___x_429_; size_t v___x_430_; lean_object* v___x_431_; 
v___x_429_ = ((size_t)0ULL);
v___x_430_ = lean_usize_of_nat(v___x_427_);
v___x_431_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__1(v___y_413_, v_tail_421_, v___x_429_, v___x_430_, v___x_426_);
return v___x_431_;
}
}
else
{
lean_object* v___x_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v___x_432_ = lean_nat_sub(v_start_416_, v_tailOff_423_);
v___x_433_ = lean_array_get_size(v_tail_421_);
v___x_434_ = lean_nat_dec_lt(v___x_432_, v___x_433_);
if (v___x_434_ == 0)
{
lean_dec(v___x_432_);
lean_dec(v___y_413_);
return v_init_415_;
}
else
{
size_t v___x_435_; size_t v___x_436_; lean_object* v___x_437_; 
v___x_435_ = lean_usize_of_nat(v___x_432_);
lean_dec(v___x_432_);
v___x_436_ = lean_usize_of_nat(v___x_433_);
v___x_437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__1(v___y_413_, v_tail_421_, v___x_435_, v___x_436_, v_init_415_);
return v___x_437_;
}
}
}
else
{
lean_object* v_root_438_; lean_object* v_tail_439_; lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v_root_438_ = lean_ctor_get(v_t_414_, 0);
v_tail_439_ = lean_ctor_get(v_t_414_, 1);
lean_inc(v___y_413_);
v___x_440_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__2(v___y_413_, v_root_438_, v_init_415_);
v___x_441_ = lean_array_get_size(v_tail_439_);
v___x_442_ = lean_nat_dec_lt(v___x_418_, v___x_441_);
if (v___x_442_ == 0)
{
lean_dec(v___y_413_);
return v___x_440_;
}
else
{
size_t v___x_443_; size_t v___x_444_; lean_object* v___x_445_; 
v___x_443_ = ((size_t)0ULL);
v___x_444_ = lean_usize_of_nat(v___x_441_);
v___x_445_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0_spec__1(v___y_413_, v_tail_439_, v___x_443_, v___x_444_, v___x_440_);
return v___x_445_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0___boxed(lean_object* v___y_446_, lean_object* v_t_447_, lean_object* v_init_448_, lean_object* v_start_449_, lean_object* v___y_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0(v___y_446_, v_t_447_, v_init_448_, v_start_449_);
lean_dec(v_start_449_);
lean_dec_ref(v_t_447_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_recordLints_spec__2(lean_object* v_fileMap_452_, lean_object* v_as_453_, size_t v_i_454_, size_t v_stop_455_, lean_object* v_b_456_){
_start:
{
uint8_t v___x_458_; 
v___x_458_ = lean_usize_dec_eq(v_i_454_, v_stop_455_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; lean_object* v_fst_460_; lean_object* v_snd_461_; lean_object* v___y_463_; 
v___x_459_ = lean_array_uget_borrowed(v_as_453_, v_i_454_);
v_fst_460_ = lean_ctor_get(v___x_459_, 0);
v_snd_461_ = lean_ctor_get(v___x_459_, 1);
if (lean_obj_tag(v_fst_460_) == 0)
{
goto v___jp_470_;
}
else
{
lean_object* v_val_472_; lean_object* v___x_473_; 
v_val_472_ = lean_ctor_get(v_fst_460_, 0);
v___x_473_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Linter_recordLints_spec__1(v_val_472_, v_fileMap_452_);
if (lean_obj_tag(v___x_473_) == 0)
{
goto v___jp_470_;
}
else
{
lean_object* v_val_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_482_; 
v_val_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_482_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_482_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_482_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_val_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_482_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v_pos_478_; lean_object* v___x_480_; 
v_pos_478_ = lean_ctor_get(v_val_474_, 0);
lean_inc_ref(v_pos_478_);
lean_dec(v_val_474_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v_pos_478_);
v___x_480_ = v___x_476_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_pos_478_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
v___y_463_ = v___x_480_;
goto v___jp_462_;
}
}
}
}
v___jp_462_:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; size_t v___x_467_; size_t v___x_468_; 
lean_inc(v_snd_461_);
v___x_464_ = l_Lean_MessageLog_reportedPlusUnreported(v_snd_461_);
v___x_465_ = lean_unsigned_to_nat(0u);
v___x_466_ = l_Lean_PersistentArray_foldlM___at___00Lean_Linter_recordLints_spec__0(v___y_463_, v___x_464_, v_b_456_, v___x_465_);
lean_dec_ref(v___x_464_);
v___x_467_ = ((size_t)1ULL);
v___x_468_ = lean_usize_add(v_i_454_, v___x_467_);
v_i_454_ = v___x_468_;
v_b_456_ = v___x_466_;
goto _start;
}
v___jp_470_:
{
lean_object* v___x_471_; 
v___x_471_ = lean_box(0);
v___y_463_ = v___x_471_;
goto v___jp_462_;
}
}
else
{
return v_b_456_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_recordLints_spec__2___boxed(lean_object* v_fileMap_483_, lean_object* v_as_484_, lean_object* v_i_485_, lean_object* v_stop_486_, lean_object* v_b_487_, lean_object* v___y_488_){
_start:
{
size_t v_i_boxed_489_; size_t v_stop_boxed_490_; lean_object* v_res_491_; 
v_i_boxed_489_ = lean_unbox_usize(v_i_485_);
lean_dec(v_i_485_);
v_stop_boxed_490_ = lean_unbox_usize(v_stop_486_);
lean_dec(v_stop_486_);
v_res_491_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_recordLints_spec__2(v_fileMap_483_, v_as_484_, v_i_boxed_489_, v_stop_boxed_490_, v_b_487_);
lean_dec_ref(v_as_484_);
lean_dec_ref(v_fileMap_483_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_recordLints(lean_object* v_fileMap_492_, lean_object* v_env_493_, lean_object* v_commandLints_494_){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; uint8_t v___x_498_; 
v___x_496_ = lean_unsigned_to_nat(0u);
v___x_497_ = lean_array_get_size(v_commandLints_494_);
v___x_498_ = lean_nat_dec_lt(v___x_496_, v___x_497_);
if (v___x_498_ == 0)
{
return v_env_493_;
}
else
{
uint8_t v___x_499_; 
v___x_499_ = lean_nat_dec_le(v___x_497_, v___x_497_);
if (v___x_499_ == 0)
{
if (v___x_498_ == 0)
{
return v_env_493_;
}
else
{
size_t v___x_500_; size_t v___x_501_; lean_object* v___x_502_; 
v___x_500_ = ((size_t)0ULL);
v___x_501_ = lean_usize_of_nat(v___x_497_);
v___x_502_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_recordLints_spec__2(v_fileMap_492_, v_commandLints_494_, v___x_500_, v___x_501_, v_env_493_);
return v___x_502_;
}
}
else
{
size_t v___x_503_; size_t v___x_504_; lean_object* v___x_505_; 
v___x_503_ = ((size_t)0ULL);
v___x_504_ = lean_usize_of_nat(v___x_497_);
v___x_505_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Linter_recordLints_spec__2(v_fileMap_492_, v_commandLints_494_, v___x_503_, v___x_504_, v_env_493_);
return v___x_505_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_recordLints___boxed(lean_object* v_fileMap_506_, lean_object* v_env_507_, lean_object* v_commandLints_508_, lean_object* v___y_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l_Lean_Linter_recordLints(v_fileMap_506_, v_env_507_, v_commandLints_508_);
lean_dec_ref(v_commandLints_508_);
lean_dec_ref(v_fileMap_506_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntry___redArg___lam__0(lean_object* v_e_511_, lean_object* v_x_512_){
_start:
{
lean_object* v___x_513_; lean_object* v_toEnvExtension_514_; lean_object* v_asyncMode_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_513_ = l_Lean_Linter_codeQualityLogExt;
v_toEnvExtension_514_ = lean_ctor_get(v___x_513_, 0);
v_asyncMode_515_ = lean_ctor_get(v_toEnvExtension_514_, 2);
v___x_516_ = lean_box(0);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v_e_511_);
v___x_518_ = lean_box(0);
v___x_519_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_513_, v_x_512_, v___x_517_, v_asyncMode_515_, v___x_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntry___redArg(lean_object* v_inst_520_, lean_object* v_e_521_){
_start:
{
lean_object* v_modifyEnv_522_; lean_object* v___f_523_; lean_object* v___x_524_; 
v_modifyEnv_522_ = lean_ctor_get(v_inst_520_, 1);
lean_inc(v_modifyEnv_522_);
lean_dec_ref(v_inst_520_);
v___f_523_ = lean_alloc_closure((void*)(l_Lean_Linter_logCodeQualityEntry___redArg___lam__0), 2, 1);
lean_closure_set(v___f_523_, 0, v_e_521_);
v___x_524_ = lean_apply_1(v_modifyEnv_522_, v___f_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntry(lean_object* v_m_525_, lean_object* v_inst_526_, lean_object* v_inst_527_, lean_object* v_e_528_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l_Lean_Linter_logCodeQualityEntry___redArg(v_inst_527_, v_e_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntry___boxed(lean_object* v_m_530_, lean_object* v_inst_531_, lean_object* v_inst_532_, lean_object* v_e_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lean_Linter_logCodeQualityEntry(v_m_530_, v_inst_531_, v_inst_532_, v_e_533_);
lean_dec_ref(v_inst_531_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntryIf___redArg___lam__0(lean_object* v_linterOption_535_, lean_object* v_e_536_, lean_object* v_x_537_){
_start:
{
lean_object* v_name_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_551_; 
v_name_538_ = lean_ctor_get(v_linterOption_535_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v_linterOption_535_);
if (v_isSharedCheck_551_ == 0)
{
lean_object* v_unused_552_; 
v_unused_552_ = lean_ctor_get(v_linterOption_535_, 1);
lean_dec(v_unused_552_);
v___x_540_ = v_linterOption_535_;
v_isShared_541_ = v_isSharedCheck_551_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_name_538_);
lean_dec(v_linterOption_535_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_551_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_542_; lean_object* v_toEnvExtension_543_; lean_object* v_asyncMode_544_; lean_object* v___x_545_; lean_object* v___x_547_; 
v___x_542_ = l_Lean_Linter_codeQualityLogExt;
v_toEnvExtension_543_ = lean_ctor_get(v___x_542_, 0);
v_asyncMode_544_ = lean_ctor_get(v_toEnvExtension_543_, 2);
v___x_545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_545_, 0, v_name_538_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v_e_536_);
lean_ctor_set(v___x_540_, 0, v___x_545_);
v___x_547_ = v___x_540_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_545_);
lean_ctor_set(v_reuseFailAlloc_550_, 1, v_e_536_);
v___x_547_ = v_reuseFailAlloc_550_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_box(0);
v___x_549_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_542_, v_x_537_, v___x_547_, v_asyncMode_544_, v___x_548_);
return v___x_549_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntryIf___redArg___lam__1(lean_object* v_linterOption_553_, lean_object* v_toPure_554_, lean_object* v_inst_555_, lean_object* v___f_556_, lean_object* v_____do__lift_557_){
_start:
{
uint8_t v___x_558_; 
v___x_558_ = l_Lean_Linter_getLinterValue(v_linterOption_553_, v_____do__lift_557_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; lean_object* v___x_560_; 
lean_dec_ref(v___f_556_);
lean_dec_ref(v_inst_555_);
v___x_559_ = lean_box(0);
v___x_560_ = lean_apply_2(v_toPure_554_, lean_box(0), v___x_559_);
return v___x_560_;
}
else
{
lean_object* v_modifyEnv_561_; lean_object* v___x_562_; 
lean_dec(v_toPure_554_);
v_modifyEnv_561_ = lean_ctor_get(v_inst_555_, 1);
lean_inc(v_modifyEnv_561_);
lean_dec_ref(v_inst_555_);
v___x_562_ = lean_apply_1(v_modifyEnv_561_, v___f_556_);
return v___x_562_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntryIf___redArg___lam__1___boxed(lean_object* v_linterOption_563_, lean_object* v_toPure_564_, lean_object* v_inst_565_, lean_object* v___f_566_, lean_object* v_____do__lift_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lean_Linter_logCodeQualityEntryIf___redArg___lam__1(v_linterOption_563_, v_toPure_564_, v_inst_565_, v___f_566_, v_____do__lift_567_);
lean_dec_ref(v_____do__lift_567_);
lean_dec_ref(v_linterOption_563_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntryIf___redArg(lean_object* v_inst_569_, lean_object* v_inst_570_, lean_object* v_inst_571_, lean_object* v_linterOption_572_, lean_object* v_e_573_){
_start:
{
lean_object* v_toApplicative_574_; lean_object* v_toBind_575_; lean_object* v_toPure_576_; lean_object* v___f_577_; lean_object* v___x_578_; lean_object* v___f_579_; lean_object* v___x_580_; 
v_toApplicative_574_ = lean_ctor_get(v_inst_569_, 0);
v_toBind_575_ = lean_ctor_get(v_inst_569_, 1);
lean_inc(v_toBind_575_);
v_toPure_576_ = lean_ctor_get(v_toApplicative_574_, 1);
lean_inc(v_toPure_576_);
lean_inc_ref(v_linterOption_572_);
v___f_577_ = lean_alloc_closure((void*)(l_Lean_Linter_logCodeQualityEntryIf___redArg___lam__0), 3, 2);
lean_closure_set(v___f_577_, 0, v_linterOption_572_);
lean_closure_set(v___f_577_, 1, v_e_573_);
lean_inc_ref(v_inst_571_);
v___x_578_ = l_Lean_Linter_getLinterOptions___redArg(v_inst_569_, v_inst_570_, v_inst_571_);
v___f_579_ = lean_alloc_closure((void*)(l_Lean_Linter_logCodeQualityEntryIf___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_579_, 0, v_linterOption_572_);
lean_closure_set(v___f_579_, 1, v_toPure_576_);
lean_closure_set(v___f_579_, 2, v_inst_571_);
lean_closure_set(v___f_579_, 3, v___f_577_);
v___x_580_ = lean_apply_4(v_toBind_575_, lean_box(0), lean_box(0), v___x_578_, v___f_579_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logCodeQualityEntryIf(lean_object* v_m_581_, lean_object* v_inst_582_, lean_object* v_inst_583_, lean_object* v_inst_584_, lean_object* v_linterOption_585_, lean_object* v_e_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Linter_logCodeQualityEntryIf___redArg(v_inst_582_, v_inst_583_, v_inst_584_, v_linterOption_585_, v_e_586_);
return v___x_587_;
}
}
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_Message(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* runtime_initialize_Lean_Linter_CodeQuality_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_PersistentLintLog(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_CodeQuality_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_3011828955____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_lintLogExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_lintLogExt);
lean_dec_ref(res);
res = l___private_Lean_Linter_PersistentLintLog_0__Lean_Linter_initFn_00___x40_Lean_Linter_PersistentLintLog_2419959412____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_codeQualityLogExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_codeQualityLogExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_PersistentLintLog(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Lean_Message(uint8_t builtin);
lean_object* initialize_Lean_Linter_Init(uint8_t builtin);
lean_object* initialize_Lean_Linter_CodeQuality_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_PersistentLintLog(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Linter_CodeQuality_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_PersistentLintLog(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_PersistentLintLog(builtin);
}
#ifdef __cplusplus
}
#endif
