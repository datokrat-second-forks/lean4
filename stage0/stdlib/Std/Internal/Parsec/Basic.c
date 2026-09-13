// Lean compiler output
// Module: Std.Internal.Parsec.Basic
// Imports: public import Init.NotationExtra public import Init.Data.ToString.Macro import Init.Data.Array.Basic
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_eof_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_eof_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_instReprError_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Std.Internal.Parsec.Error.eof"};
static const lean_object* l_Std_Internal_Parsec_instReprError_repr___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_instReprError_repr___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_instReprError_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_instReprError_repr___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_instReprError_repr___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_instReprError_repr___closed__1_value;
static lean_once_cell_t l_Std_Internal_Parsec_instReprError_repr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_Parsec_instReprError_repr___closed__2;
static lean_once_cell_t l_Std_Internal_Parsec_instReprError_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_Parsec_instReprError_repr___closed__3;
static const lean_string_object l_Std_Internal_Parsec_instReprError_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Std.Internal.Parsec.Error.other"};
static const lean_object* l_Std_Internal_Parsec_instReprError_repr___closed__4 = (const lean_object*)&l_Std_Internal_Parsec_instReprError_repr___closed__4_value;
static const lean_ctor_object l_Std_Internal_Parsec_instReprError_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_instReprError_repr___closed__4_value)}};
static const lean_object* l_Std_Internal_Parsec_instReprError_repr___closed__5 = (const lean_object*)&l_Std_Internal_Parsec_instReprError_repr___closed__5_value;
static const lean_ctor_object l_Std_Internal_Parsec_instReprError_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_instReprError_repr___closed__5_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Internal_Parsec_instReprError_repr___closed__6 = (const lean_object*)&l_Std_Internal_Parsec_instReprError_repr___closed__6_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprError_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprError_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_Parsec_instReprError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_instReprError_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_instReprError___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_instReprError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Internal_Parsec_instReprError = (const lean_object*)&l_Std_Internal_Parsec_instReprError___closed__0_value;
static const lean_string_object l_Std_Internal_Parsec_instToStringError___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unexpected end of input"};
static const lean_object* l_Std_Internal_Parsec_instToStringError___lam__0___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_instToStringError___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instToStringError___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instToStringError___lam__0___boxed(lean_object*);
static const lean_closure_object l_Std_Internal_Parsec_instToStringError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_instToStringError___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_instToStringError___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_instToStringError___closed__0_value;
LEAN_EXPORT const lean_object* l_Std_Internal_Parsec_instToStringError = (const lean_object*)&l_Std_Internal_Parsec_instToStringError___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorIdx___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorIdx___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorIdx(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorIdx___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_success_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_success_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_error_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_error_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Std.Internal.Parsec.ParseResult.success"};
static const lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__1_value;
static const lean_ctor_object l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__2 = (const lean_object*)&l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__2_value;
static const lean_string_object l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Std.Internal.Parsec.ParseResult.error"};
static const lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__3 = (const lean_object*)&l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__3_value;
static const lean_ctor_object l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__3_value)}};
static const lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__4 = (const lean_object*)&l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__4_value;
static const lean_ctor_object l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__5 = (const lean_object*)&l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult_repr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_mk___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_mk(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_run(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_instCoeFunParsecForallParseResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_run, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Internal_instCoeFunParsecForallParseResult___redArg___closed__0 = (const lean_object*)&l_Std_Internal_instCoeFunParsecForallParseResult___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_instCoeFunParsecForallParseResult___redArg();
LEAN_EXPORT lean_object* l_Std_Internal_instCoeFunParsecForallParseResult___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_instCoeFunParsecForallParseResult(lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instInhabited___redArg___lam__0(lean_object*);
static const lean_closure_object l_Std_Internal_Parsec_instInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_instInhabited___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_instInhabited___redArg___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_instInhabited___redArg___closed__0_value;
static const lean_closure_object l_Std_Internal_Parsec_instInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_mk, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std_Internal_Parsec_instInhabited___redArg___closed__0_value)} };
static const lean_object* l_Std_Internal_Parsec_instInhabited___redArg___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_instInhabited___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Std_Internal_Parsec_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_Internal_Parsec_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_pure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_pure(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_bind___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_fail___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_fail(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_tryCatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_tryCatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_Parsec_instMonad___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_instMonad___redArg___lam__0, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_instMonad___redArg___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__0_value;
static const lean_closure_object l_Std_Internal_Parsec_instMonad___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_instMonad___redArg___lam__1, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_instMonad___redArg___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__1_value;
static const lean_closure_object l_Std_Internal_Parsec_instMonad___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_instMonad___redArg___lam__2, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_instMonad___redArg___closed__2 = (const lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__2_value;
static const lean_closure_object l_Std_Internal_Parsec_instMonad___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_instMonad___redArg___lam__3, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_instMonad___redArg___closed__3 = (const lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__3_value;
static const lean_closure_object l_Std_Internal_Parsec_instMonad___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_instMonad___redArg___lam__4, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_instMonad___redArg___closed__4 = (const lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__4_value;
static const lean_closure_object l_Std_Internal_Parsec_instMonad___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_instMonad___redArg___lam__5, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_instMonad___redArg___closed__5 = (const lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__5_value;
static const lean_ctor_object l_Std_Internal_Parsec_instMonad___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__0_value),((lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__1_value)}};
static const lean_object* l_Std_Internal_Parsec_instMonad___redArg___closed__6 = (const lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__6_value;
static const lean_ctor_object l_Std_Internal_Parsec_instMonad___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__6_value),((lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__2_value),((lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__3_value),((lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__4_value),((lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__5_value)}};
static const lean_object* l_Std_Internal_Parsec_instMonad___redArg___closed__7 = (const lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__7_value;
static const lean_closure_object l_Std_Internal_Parsec_instMonad___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_bind, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Std_Internal_Parsec_instMonad___redArg___closed__8 = (const lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__8_value;
static const lean_ctor_object l_Std_Internal_Parsec_instMonad___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__7_value),((lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__8_value)}};
static const lean_object* l_Std_Internal_Parsec_instMonad___redArg___closed__9 = (const lean_object*)&l_Std_Internal_Parsec_instMonad___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg();
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad(lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_orElse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_orElse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_attempt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_attempt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instAlternative___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instAlternative___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Std_Internal_Parsec_instAlternative___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_Internal_Parsec_instAlternative___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Std_Internal_Parsec_instAlternative___redArg___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_instAlternative___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instAlternative___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instAlternative(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instAlternative___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_eof___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "expected end of input"};
static const lean_object* l_Std_Internal_Parsec_eof___redArg___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_eof___redArg___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_eof___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_eof___redArg___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_eof___redArg___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_eof___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_eof___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_eof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_eof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_isEof___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_isEof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_isEof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_Internal_Parsec_many___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_Internal_Parsec_many___redArg___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_many___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_any___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_any___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_Internal_Parsec_satisfy___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "condition not satisfied"};
static const lean_object* l_Std_Internal_Parsec_satisfy___redArg___closed__0 = (const lean_object*)&l_Std_Internal_Parsec_satisfy___redArg___closed__0_value;
static const lean_ctor_object l_Std_Internal_Parsec_satisfy___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std_Internal_Parsec_satisfy___redArg___closed__0_value)}};
static const lean_object* l_Std_Internal_Parsec_satisfy___redArg___closed__1 = (const lean_object*)&l_Std_Internal_Parsec_satisfy___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_satisfy___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_satisfy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_satisfy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_notFollowedBy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_notFollowedBy(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekWhen_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekWhen_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekWhen_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekD___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_skip___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_skip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_skip___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyChars___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyChars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyChars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1Chars___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1Chars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1Chars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_ctorIdx(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Std_Internal_Parsec_Error_ctorIdx(v_x_4_);
lean_dec(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
return v_k_7_;
}
else
{
lean_object* v_s_8_; lean_object* v___x_9_; 
v_s_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_s_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_s_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Std_Internal_Parsec_Error_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Std_Internal_Parsec_Error_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_eof_elim___redArg(lean_object* v_t_22_, lean_object* v_eof_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Std_Internal_Parsec_Error_ctorElim___redArg(v_t_22_, v_eof_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_eof_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_eof_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Std_Internal_Parsec_Error_ctorElim___redArg(v_t_26_, v_eof_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_other_elim___redArg(lean_object* v_t_30_, lean_object* v_other_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Std_Internal_Parsec_Error_ctorElim___redArg(v_t_30_, v_other_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_Error_other_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_other_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Std_Internal_Parsec_Error_ctorElim___redArg(v_t_34_, v_other_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Std_Internal_Parsec_instReprError_repr___closed__2(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(2u);
v___x_42_ = lean_nat_to_int(v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_l_Std_Internal_Parsec_instReprError_repr___closed__3(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_unsigned_to_nat(1u);
v___x_44_ = lean_nat_to_int(v___x_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprError_repr(lean_object* v_x_51_, lean_object* v_prec_52_){
_start:
{
lean_object* v___y_54_; 
if (lean_obj_tag(v_x_51_) == 0)
{
lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_60_ = lean_unsigned_to_nat(1024u);
v___x_61_ = lean_nat_dec_le(v___x_60_, v_prec_52_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; 
v___x_62_ = lean_obj_once(&l_Std_Internal_Parsec_instReprError_repr___closed__2, &l_Std_Internal_Parsec_instReprError_repr___closed__2_once, _init_l_Std_Internal_Parsec_instReprError_repr___closed__2);
v___y_54_ = v___x_62_;
goto v___jp_53_;
}
else
{
lean_object* v___x_63_; 
v___x_63_ = lean_obj_once(&l_Std_Internal_Parsec_instReprError_repr___closed__3, &l_Std_Internal_Parsec_instReprError_repr___closed__3_once, _init_l_Std_Internal_Parsec_instReprError_repr___closed__3);
v___y_54_ = v___x_63_;
goto v___jp_53_;
}
}
else
{
lean_object* v_s_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_84_; 
v_s_64_ = lean_ctor_get(v_x_51_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v_x_51_);
if (v_isSharedCheck_84_ == 0)
{
v___x_66_ = v_x_51_;
v_isShared_67_ = v_isSharedCheck_84_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_s_64_);
lean_dec(v_x_51_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_84_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___y_69_; lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_80_ = lean_unsigned_to_nat(1024u);
v___x_81_ = lean_nat_dec_le(v___x_80_, v_prec_52_);
if (v___x_81_ == 0)
{
lean_object* v___x_82_; 
v___x_82_ = lean_obj_once(&l_Std_Internal_Parsec_instReprError_repr___closed__2, &l_Std_Internal_Parsec_instReprError_repr___closed__2_once, _init_l_Std_Internal_Parsec_instReprError_repr___closed__2);
v___y_69_ = v___x_82_;
goto v___jp_68_;
}
else
{
lean_object* v___x_83_; 
v___x_83_ = lean_obj_once(&l_Std_Internal_Parsec_instReprError_repr___closed__3, &l_Std_Internal_Parsec_instReprError_repr___closed__3_once, _init_l_Std_Internal_Parsec_instReprError_repr___closed__3);
v___y_69_ = v___x_83_;
goto v___jp_68_;
}
v___jp_68_:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_73_; 
v___x_70_ = ((lean_object*)(l_Std_Internal_Parsec_instReprError_repr___closed__6));
v___x_71_ = l_String_quote(v_s_64_);
if (v_isShared_67_ == 0)
{
lean_ctor_set_tag(v___x_66_, 3);
lean_ctor_set(v___x_66_, 0, v___x_71_);
v___x_73_ = v___x_66_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_71_);
v___x_73_ = v_reuseFailAlloc_79_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_74_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_70_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
lean_inc(v___y_69_);
v___x_75_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_75_, 0, v___y_69_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = 0;
v___x_77_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_77_, 0, v___x_75_);
lean_ctor_set_uint8(v___x_77_, sizeof(void*)*1, v___x_76_);
v___x_78_ = l_Repr_addAppParen(v___x_77_, v_prec_52_);
return v___x_78_;
}
}
}
}
v___jp_53_:
{
lean_object* v___x_55_; lean_object* v___x_56_; uint8_t v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_55_ = ((lean_object*)(l_Std_Internal_Parsec_instReprError_repr___closed__1));
lean_inc(v___y_54_);
v___x_56_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_56_, 0, v___y_54_);
lean_ctor_set(v___x_56_, 1, v___x_55_);
v___x_57_ = 0;
v___x_58_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_58_, 0, v___x_56_);
lean_ctor_set_uint8(v___x_58_, sizeof(void*)*1, v___x_57_);
v___x_59_ = l_Repr_addAppParen(v___x_58_, v_prec_52_);
return v___x_59_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprError_repr___boxed(lean_object* v_x_85_, lean_object* v_prec_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Std_Internal_Parsec_instReprError_repr(v_x_85_, v_prec_86_);
lean_dec(v_prec_86_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instToStringError___lam__0(lean_object* v_x_91_){
_start:
{
if (lean_obj_tag(v_x_91_) == 0)
{
lean_object* v___x_92_; 
v___x_92_ = ((lean_object*)(l_Std_Internal_Parsec_instToStringError___lam__0___closed__0));
return v___x_92_;
}
else
{
lean_object* v_s_93_; 
v_s_93_ = lean_ctor_get(v_x_91_, 0);
lean_inc_ref(v_s_93_);
return v_s_93_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instToStringError___lam__0___boxed(lean_object* v_x_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Std_Internal_Parsec_instToStringError___lam__0(v_x_94_);
lean_dec(v_x_94_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorIdx___redArg(lean_object* v_x_98_){
_start:
{
if (lean_obj_tag(v_x_98_) == 0)
{
lean_object* v___x_99_; 
v___x_99_ = lean_unsigned_to_nat(0u);
return v___x_99_;
}
else
{
lean_object* v___x_100_; 
v___x_100_ = lean_unsigned_to_nat(1u);
return v___x_100_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorIdx___redArg___boxed(lean_object* v_x_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Std_Internal_Parsec_ParseResult_ctorIdx___redArg(v_x_101_);
lean_dec_ref(v_x_101_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorIdx(lean_object* v_00_u03b1_103_, lean_object* v_00_u03b9_104_, lean_object* v_x_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Std_Internal_Parsec_ParseResult_ctorIdx___redArg(v_x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorIdx___boxed(lean_object* v_00_u03b1_107_, lean_object* v_00_u03b9_108_, lean_object* v_x_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Std_Internal_Parsec_ParseResult_ctorIdx(v_00_u03b1_107_, v_00_u03b9_108_, v_x_109_);
lean_dec_ref(v_x_109_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorElim___redArg(lean_object* v_t_111_, lean_object* v_k_112_){
_start:
{
lean_object* v_pos_113_; lean_object* v_res_114_; lean_object* v___x_115_; 
v_pos_113_ = lean_ctor_get(v_t_111_, 0);
lean_inc(v_pos_113_);
v_res_114_ = lean_ctor_get(v_t_111_, 1);
lean_inc(v_res_114_);
lean_dec_ref(v_t_111_);
v___x_115_ = lean_apply_2(v_k_112_, v_pos_113_, v_res_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorElim(lean_object* v_00_u03b1_116_, lean_object* v_00_u03b9_117_, lean_object* v_motive_118_, lean_object* v_ctorIdx_119_, lean_object* v_t_120_, lean_object* v_h_121_, lean_object* v_k_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Std_Internal_Parsec_ParseResult_ctorElim___redArg(v_t_120_, v_k_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_ctorElim___boxed(lean_object* v_00_u03b1_124_, lean_object* v_00_u03b9_125_, lean_object* v_motive_126_, lean_object* v_ctorIdx_127_, lean_object* v_t_128_, lean_object* v_h_129_, lean_object* v_k_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Std_Internal_Parsec_ParseResult_ctorElim(v_00_u03b1_124_, v_00_u03b9_125_, v_motive_126_, v_ctorIdx_127_, v_t_128_, v_h_129_, v_k_130_);
lean_dec(v_ctorIdx_127_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_success_elim___redArg(lean_object* v_t_132_, lean_object* v_success_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Std_Internal_Parsec_ParseResult_ctorElim___redArg(v_t_132_, v_success_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_success_elim(lean_object* v_00_u03b1_135_, lean_object* v_00_u03b9_136_, lean_object* v_motive_137_, lean_object* v_t_138_, lean_object* v_h_139_, lean_object* v_success_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = l_Std_Internal_Parsec_ParseResult_ctorElim___redArg(v_t_138_, v_success_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_error_elim___redArg(lean_object* v_t_142_, lean_object* v_error_143_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l_Std_Internal_Parsec_ParseResult_ctorElim___redArg(v_t_142_, v_error_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_ParseResult_error_elim(lean_object* v_00_u03b1_145_, lean_object* v_00_u03b9_146_, lean_object* v_motive_147_, lean_object* v_t_148_, lean_object* v_h_149_, lean_object* v_error_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Std_Internal_Parsec_ParseResult_ctorElim___redArg(v_t_148_, v_error_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___redArg(lean_object* v_inst_164_, lean_object* v_inst_165_, lean_object* v_x_166_, lean_object* v_prec_167_){
_start:
{
if (lean_obj_tag(v_x_166_) == 0)
{
lean_object* v_pos_168_; lean_object* v_res_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_193_; 
v_pos_168_ = lean_ctor_get(v_x_166_, 0);
v_res_169_ = lean_ctor_get(v_x_166_, 1);
v_isSharedCheck_193_ = !lean_is_exclusive(v_x_166_);
if (v_isSharedCheck_193_ == 0)
{
v___x_171_ = v_x_166_;
v_isShared_172_ = v_isSharedCheck_193_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_res_169_);
lean_inc(v_pos_168_);
lean_dec(v_x_166_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_193_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___y_174_; lean_object* v___x_189_; uint8_t v___x_190_; 
v___x_189_ = lean_unsigned_to_nat(1024u);
v___x_190_ = lean_nat_dec_le(v___x_189_, v_prec_167_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; 
v___x_191_ = lean_obj_once(&l_Std_Internal_Parsec_instReprError_repr___closed__2, &l_Std_Internal_Parsec_instReprError_repr___closed__2_once, _init_l_Std_Internal_Parsec_instReprError_repr___closed__2);
v___y_174_ = v___x_191_;
goto v___jp_173_;
}
else
{
lean_object* v___x_192_; 
v___x_192_ = lean_obj_once(&l_Std_Internal_Parsec_instReprError_repr___closed__3, &l_Std_Internal_Parsec_instReprError_repr___closed__3_once, _init_l_Std_Internal_Parsec_instReprError_repr___closed__3);
v___y_174_ = v___x_192_;
goto v___jp_173_;
}
v___jp_173_:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
v___x_175_ = lean_box(1);
v___x_176_ = ((lean_object*)(l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__2));
v___x_177_ = lean_unsigned_to_nat(1024u);
v___x_178_ = lean_apply_2(v_inst_165_, v_pos_168_, v___x_177_);
if (v_isShared_172_ == 0)
{
lean_ctor_set_tag(v___x_171_, 5);
lean_ctor_set(v___x_171_, 1, v___x_178_);
lean_ctor_set(v___x_171_, 0, v___x_176_);
v___x_180_ = v___x_171_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_188_, 1, v___x_178_);
v___x_180_ = v_reuseFailAlloc_188_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; uint8_t v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_181_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set(v___x_181_, 1, v___x_175_);
v___x_182_ = lean_apply_2(v_inst_164_, v_res_169_, v___x_177_);
v___x_183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_181_);
lean_ctor_set(v___x_183_, 1, v___x_182_);
lean_inc(v___y_174_);
v___x_184_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_184_, 0, v___y_174_);
lean_ctor_set(v___x_184_, 1, v___x_183_);
v___x_185_ = 0;
v___x_186_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_186_, 0, v___x_184_);
lean_ctor_set_uint8(v___x_186_, sizeof(void*)*1, v___x_185_);
v___x_187_ = l_Repr_addAppParen(v___x_186_, v_prec_167_);
return v___x_187_;
}
}
}
}
else
{
lean_object* v_pos_194_; lean_object* v_err_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_219_; 
lean_dec_ref(v_inst_164_);
v_pos_194_ = lean_ctor_get(v_x_166_, 0);
v_err_195_ = lean_ctor_get(v_x_166_, 1);
v_isSharedCheck_219_ = !lean_is_exclusive(v_x_166_);
if (v_isSharedCheck_219_ == 0)
{
v___x_197_ = v_x_166_;
v_isShared_198_ = v_isSharedCheck_219_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_err_195_);
lean_inc(v_pos_194_);
lean_dec(v_x_166_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_219_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___y_200_; lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = lean_unsigned_to_nat(1024u);
v___x_216_ = lean_nat_dec_le(v___x_215_, v_prec_167_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; 
v___x_217_ = lean_obj_once(&l_Std_Internal_Parsec_instReprError_repr___closed__2, &l_Std_Internal_Parsec_instReprError_repr___closed__2_once, _init_l_Std_Internal_Parsec_instReprError_repr___closed__2);
v___y_200_ = v___x_217_;
goto v___jp_199_;
}
else
{
lean_object* v___x_218_; 
v___x_218_ = lean_obj_once(&l_Std_Internal_Parsec_instReprError_repr___closed__3, &l_Std_Internal_Parsec_instReprError_repr___closed__3_once, _init_l_Std_Internal_Parsec_instReprError_repr___closed__3);
v___y_200_ = v___x_218_;
goto v___jp_199_;
}
v___jp_199_:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_206_; 
v___x_201_ = lean_box(1);
v___x_202_ = ((lean_object*)(l_Std_Internal_Parsec_instReprParseResult_repr___redArg___closed__5));
v___x_203_ = lean_unsigned_to_nat(1024u);
v___x_204_ = lean_apply_2(v_inst_165_, v_pos_194_, v___x_203_);
if (v_isShared_198_ == 0)
{
lean_ctor_set_tag(v___x_197_, 5);
lean_ctor_set(v___x_197_, 1, v___x_204_);
lean_ctor_set(v___x_197_, 0, v___x_202_);
v___x_206_ = v___x_197_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_202_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v___x_204_);
v___x_206_ = v_reuseFailAlloc_214_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; uint8_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_207_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_201_);
v___x_208_ = l_Std_Internal_Parsec_instReprError_repr(v_err_195_, v___x_203_);
v___x_209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
lean_inc(v___y_200_);
v___x_210_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_210_, 0, v___y_200_);
lean_ctor_set(v___x_210_, 1, v___x_209_);
v___x_211_ = 0;
v___x_212_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_212_, 0, v___x_210_);
lean_ctor_set_uint8(v___x_212_, sizeof(void*)*1, v___x_211_);
v___x_213_ = l_Repr_addAppParen(v___x_212_, v_prec_167_);
return v___x_213_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___redArg___boxed(lean_object* v_inst_220_, lean_object* v_inst_221_, lean_object* v_x_222_, lean_object* v_prec_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Std_Internal_Parsec_instReprParseResult_repr___redArg(v_inst_220_, v_inst_221_, v_x_222_, v_prec_223_);
lean_dec(v_prec_223_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult_repr(lean_object* v_00_u03b1_225_, lean_object* v_00_u03b9_226_, lean_object* v_inst_227_, lean_object* v_inst_228_, lean_object* v_x_229_, lean_object* v_prec_230_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l_Std_Internal_Parsec_instReprParseResult_repr___redArg(v_inst_227_, v_inst_228_, v_x_229_, v_prec_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult_repr___boxed(lean_object* v_00_u03b1_232_, lean_object* v_00_u03b9_233_, lean_object* v_inst_234_, lean_object* v_inst_235_, lean_object* v_x_236_, lean_object* v_prec_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Std_Internal_Parsec_instReprParseResult_repr(v_00_u03b1_232_, v_00_u03b9_233_, v_inst_234_, v_inst_235_, v_x_236_, v_prec_237_);
lean_dec(v_prec_237_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult___redArg(lean_object* v_inst_239_, lean_object* v_inst_240_){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_instReprParseResult_repr___boxed), 6, 4);
lean_closure_set(v___x_241_, 0, lean_box(0));
lean_closure_set(v___x_241_, 1, lean_box(0));
lean_closure_set(v___x_241_, 2, v_inst_239_);
lean_closure_set(v___x_241_, 3, v_inst_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instReprParseResult(lean_object* v_00_u03b1_242_, lean_object* v_00_u03b9_243_, lean_object* v_inst_244_, lean_object* v_inst_245_){
_start:
{
lean_object* v___x_246_; 
v___x_246_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_instReprParseResult_repr___boxed), 6, 4);
lean_closure_set(v___x_246_, 0, lean_box(0));
lean_closure_set(v___x_246_, 1, lean_box(0));
lean_closure_set(v___x_246_, 2, v_inst_244_);
lean_closure_set(v___x_246_, 3, v_inst_245_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_mk___redArg(lean_object* v_run_247_, lean_object* v_a_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lean_apply_1(v_run_247_, v_a_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_mk(lean_object* v_00_u03b9_250_, lean_object* v_00_u03b1_251_, lean_object* v_run_252_, lean_object* v_a_253_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = lean_apply_1(v_run_252_, v_a_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_run___redArg(lean_object* v_self_255_, lean_object* v_a_256_){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = lean_apply_1(v_self_255_, v_a_256_);
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_run(lean_object* v_00_u03b9_258_, lean_object* v_00_u03b1_259_, lean_object* v_self_260_, lean_object* v_a_261_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = lean_apply_1(v_self_260_, v_a_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instCoeFunParsecForallParseResult___redArg(){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = ((lean_object*)(l_Std_Internal_instCoeFunParsecForallParseResult___redArg___closed__0));
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instCoeFunParsecForallParseResult___redArg___boxed(lean_object* v___dummy_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Std_Internal_instCoeFunParsecForallParseResult___redArg();
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_instCoeFunParsecForallParseResult(lean_object* v_00_u03b9_268_, lean_object* v_00_u03b1_269_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = ((lean_object*)(l_Std_Internal_instCoeFunParsecForallParseResult___redArg___closed__0));
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instInhabited___redArg___lam__0(lean_object* v_it_274_){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = ((lean_object*)(l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__1));
v___x_276_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_276_, 0, v_it_274_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instInhabited___redArg(){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = ((lean_object*)(l_Std_Internal_Parsec_instInhabited___redArg___closed__1));
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instInhabited___redArg___boxed(lean_object* v___dummy_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Std_Internal_Parsec_instInhabited___redArg();
return v_res_283_;
}
}
static lean_object* _init_l_Std_Internal_Parsec_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = l_Std_Internal_Parsec_instInhabited___redArg();
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instInhabited(lean_object* v_00_u03b1_285_, lean_object* v_00_u03b9_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lean_obj_once(&l_Std_Internal_Parsec_instInhabited___closed__0, &l_Std_Internal_Parsec_instInhabited___closed__0_once, _init_l_Std_Internal_Parsec_instInhabited___closed__0);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_pure___redArg(lean_object* v_a_288_, lean_object* v_a_289_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_290_, 0, v_a_289_);
lean_ctor_set(v___x_290_, 1, v_a_288_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_pure(lean_object* v_00_u03b1_291_, lean_object* v_00_u03b9_292_, lean_object* v_a_293_, lean_object* v_a_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_295_, 0, v_a_294_);
lean_ctor_set(v___x_295_, 1, v_a_293_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_bind___redArg(lean_object* v_f_296_, lean_object* v_g_297_, lean_object* v_a_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = lean_apply_1(v_f_296_, v_a_298_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_pos_300_; lean_object* v_res_301_; lean_object* v___x_302_; 
v_pos_300_ = lean_ctor_get(v___x_299_, 0);
lean_inc(v_pos_300_);
v_res_301_ = lean_ctor_get(v___x_299_, 1);
lean_inc(v_res_301_);
lean_dec_ref_known(v___x_299_, 2);
v___x_302_ = lean_apply_2(v_g_297_, v_res_301_, v_pos_300_);
return v___x_302_;
}
else
{
lean_object* v_pos_303_; lean_object* v_err_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
lean_dec_ref(v_g_297_);
v_pos_303_ = lean_ctor_get(v___x_299_, 0);
v_err_304_ = lean_ctor_get(v___x_299_, 1);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_311_ == 0)
{
v___x_306_ = v___x_299_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_err_304_);
lean_inc(v_pos_303_);
lean_dec(v___x_299_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_pos_303_);
lean_ctor_set(v_reuseFailAlloc_310_, 1, v_err_304_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_bind(lean_object* v_00_u03b9_312_, lean_object* v_00_u03b1_313_, lean_object* v_00_u03b2_314_, lean_object* v_f_315_, lean_object* v_g_316_, lean_object* v_a_317_){
_start:
{
lean_object* v___x_318_; 
v___x_318_ = lean_apply_1(v_f_315_, v_a_317_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v_pos_319_; lean_object* v_res_320_; lean_object* v___x_321_; 
v_pos_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_pos_319_);
v_res_320_ = lean_ctor_get(v___x_318_, 1);
lean_inc(v_res_320_);
lean_dec_ref_known(v___x_318_, 2);
v___x_321_ = lean_apply_2(v_g_316_, v_res_320_, v_pos_319_);
return v___x_321_;
}
else
{
lean_object* v_pos_322_; lean_object* v_err_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
lean_dec_ref(v_g_316_);
v_pos_322_ = lean_ctor_get(v___x_318_, 0);
v_err_323_ = lean_ctor_get(v___x_318_, 1);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_318_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_err_323_);
lean_inc(v_pos_322_);
lean_dec(v___x_318_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_pos_322_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_err_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_fail___redArg(lean_object* v_msg_331_, lean_object* v_a_332_){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_333_, 0, v_msg_331_);
v___x_334_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_334_, 0, v_a_332_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_fail(lean_object* v_00_u03b1_335_, lean_object* v_00_u03b9_336_, lean_object* v_msg_337_, lean_object* v_a_338_){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_339_, 0, v_msg_337_);
v___x_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_340_, 0, v_a_338_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_tryCatch___redArg(lean_object* v_inst_341_, lean_object* v_inst_342_, lean_object* v_p_343_, lean_object* v_csuccess_344_, lean_object* v_cerror_345_, lean_object* v_a_346_){
_start:
{
lean_object* v___x_347_; 
lean_inc(v_a_346_);
v___x_347_ = lean_apply_1(v_p_343_, v_a_346_);
if (lean_obj_tag(v___x_347_) == 0)
{
lean_object* v_pos_348_; lean_object* v_res_349_; lean_object* v___x_350_; 
lean_dec(v_a_346_);
lean_dec_ref(v_cerror_345_);
lean_dec_ref(v_inst_342_);
lean_dec_ref(v_inst_341_);
v_pos_348_ = lean_ctor_get(v___x_347_, 0);
lean_inc(v_pos_348_);
v_res_349_ = lean_ctor_get(v___x_347_, 1);
lean_inc(v_res_349_);
lean_dec_ref_known(v___x_347_, 2);
v___x_350_ = lean_apply_2(v_csuccess_344_, v_res_349_, v_pos_348_);
return v___x_350_;
}
else
{
lean_object* v_pos_351_; lean_object* v_err_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_366_; 
lean_dec_ref(v_csuccess_344_);
v_pos_351_ = lean_ctor_get(v___x_347_, 0);
v_err_352_ = lean_ctor_get(v___x_347_, 1);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_366_ == 0)
{
v___x_354_ = v___x_347_;
v_isShared_355_ = v_isSharedCheck_366_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_err_352_);
lean_inc(v_pos_351_);
lean_dec(v___x_347_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_366_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v_pos_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; uint8_t v___x_360_; 
v_pos_356_ = lean_ctor_get(v_inst_342_, 0);
lean_inc_n(v_pos_356_, 2);
lean_dec_ref(v_inst_342_);
v___x_357_ = lean_apply_1(v_pos_356_, v_a_346_);
lean_inc(v_pos_351_);
v___x_358_ = lean_apply_1(v_pos_356_, v_pos_351_);
v___x_359_ = lean_apply_2(v_inst_341_, v___x_357_, v___x_358_);
v___x_360_ = lean_unbox(v___x_359_);
if (v___x_360_ == 0)
{
lean_object* v___x_362_; 
lean_dec_ref(v_cerror_345_);
if (v_isShared_355_ == 0)
{
v___x_362_ = v___x_354_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_pos_351_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v_err_352_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
else
{
lean_object* v___x_364_; lean_object* v___x_365_; 
lean_del_object(v___x_354_);
lean_dec(v_err_352_);
v___x_364_ = lean_box(0);
v___x_365_ = lean_apply_2(v_cerror_345_, v___x_364_, v_pos_351_);
return v___x_365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_tryCatch(lean_object* v_00_u03b1_367_, lean_object* v_00_u03b9_368_, lean_object* v_elem_369_, lean_object* v_idx_370_, lean_object* v_inst_371_, lean_object* v_inst_372_, lean_object* v_inst_373_, lean_object* v_00_u03b2_374_, lean_object* v_p_375_, lean_object* v_csuccess_376_, lean_object* v_cerror_377_, lean_object* v_a_378_){
_start:
{
lean_object* v___x_379_; 
lean_inc(v_a_378_);
v___x_379_ = lean_apply_1(v_p_375_, v_a_378_);
if (lean_obj_tag(v___x_379_) == 0)
{
lean_object* v_pos_380_; lean_object* v_res_381_; lean_object* v___x_382_; 
lean_dec(v_a_378_);
lean_dec_ref(v_cerror_377_);
lean_dec_ref(v_inst_373_);
lean_dec_ref(v_inst_371_);
v_pos_380_ = lean_ctor_get(v___x_379_, 0);
lean_inc(v_pos_380_);
v_res_381_ = lean_ctor_get(v___x_379_, 1);
lean_inc(v_res_381_);
lean_dec_ref_known(v___x_379_, 2);
v___x_382_ = lean_apply_2(v_csuccess_376_, v_res_381_, v_pos_380_);
return v___x_382_;
}
else
{
lean_object* v_pos_383_; lean_object* v_err_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_398_; 
lean_dec_ref(v_csuccess_376_);
v_pos_383_ = lean_ctor_get(v___x_379_, 0);
v_err_384_ = lean_ctor_get(v___x_379_, 1);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_398_ == 0)
{
v___x_386_ = v___x_379_;
v_isShared_387_ = v_isSharedCheck_398_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_err_384_);
lean_inc(v_pos_383_);
lean_dec(v___x_379_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_398_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v_pos_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; uint8_t v___x_392_; 
v_pos_388_ = lean_ctor_get(v_inst_373_, 0);
lean_inc_n(v_pos_388_, 2);
lean_dec_ref(v_inst_373_);
v___x_389_ = lean_apply_1(v_pos_388_, v_a_378_);
lean_inc(v_pos_383_);
v___x_390_ = lean_apply_1(v_pos_388_, v_pos_383_);
v___x_391_ = lean_apply_2(v_inst_371_, v___x_389_, v___x_390_);
v___x_392_ = lean_unbox(v___x_391_);
if (v___x_392_ == 0)
{
lean_object* v___x_394_; 
lean_dec_ref(v_cerror_377_);
if (v_isShared_387_ == 0)
{
v___x_394_ = v___x_386_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_pos_383_);
lean_ctor_set(v_reuseFailAlloc_395_, 1, v_err_384_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
else
{
lean_object* v___x_396_; lean_object* v___x_397_; 
lean_del_object(v___x_386_);
lean_dec(v_err_384_);
v___x_396_ = lean_box(0);
v___x_397_ = lean_apply_2(v_cerror_377_, v___x_396_, v_pos_383_);
return v___x_397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_tryCatch___boxed(lean_object* v_00_u03b1_399_, lean_object* v_00_u03b9_400_, lean_object* v_elem_401_, lean_object* v_idx_402_, lean_object* v_inst_403_, lean_object* v_inst_404_, lean_object* v_inst_405_, lean_object* v_00_u03b2_406_, lean_object* v_p_407_, lean_object* v_csuccess_408_, lean_object* v_cerror_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Std_Internal_Parsec_tryCatch(v_00_u03b1_399_, v_00_u03b9_400_, v_elem_401_, v_idx_402_, v_inst_403_, v_inst_404_, v_inst_405_, v_00_u03b2_406_, v_p_407_, v_csuccess_408_, v_cerror_409_, v_a_410_);
lean_dec_ref(v_inst_404_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__0(lean_object* v_00_u03b1_412_, lean_object* v_00_u03b2_413_, lean_object* v_f_414_, lean_object* v_x_415_, lean_object* v___y_416_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = lean_apply_1(v_x_415_, v___y_416_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_pos_418_; lean_object* v_res_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_427_; 
v_pos_418_ = lean_ctor_get(v___x_417_, 0);
v_res_419_ = lean_ctor_get(v___x_417_, 1);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_427_ == 0)
{
v___x_421_ = v___x_417_;
v_isShared_422_ = v_isSharedCheck_427_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_res_419_);
lean_inc(v_pos_418_);
lean_dec(v___x_417_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_427_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_423_ = lean_apply_1(v_f_414_, v_res_419_);
if (v_isShared_422_ == 0)
{
lean_ctor_set(v___x_421_, 1, v___x_423_);
v___x_425_ = v___x_421_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_pos_418_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v___x_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
else
{
lean_object* v_pos_428_; lean_object* v_err_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
lean_dec(v_f_414_);
v_pos_428_ = lean_ctor_get(v___x_417_, 0);
v_err_429_ = lean_ctor_get(v___x_417_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_417_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_err_429_);
lean_inc(v_pos_428_);
lean_dec(v___x_417_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_pos_428_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_err_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__1(lean_object* v_00_u03b1_437_, lean_object* v_00_u03b2_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = lean_apply_1(v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_pos_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
v_pos_443_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_450_ == 0)
{
lean_object* v_unused_451_; 
v_unused_451_ = lean_ctor_get(v___x_442_, 1);
lean_dec(v_unused_451_);
v___x_445_ = v___x_442_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_pos_443_);
lean_dec(v___x_442_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 1, v___y_439_);
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_pos_443_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v___y_439_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
else
{
lean_object* v_pos_452_; lean_object* v_err_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_460_; 
lean_dec(v___y_439_);
v_pos_452_ = lean_ctor_get(v___x_442_, 0);
v_err_453_ = lean_ctor_get(v___x_442_, 1);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_460_ == 0)
{
v___x_455_ = v___x_442_;
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_err_453_);
lean_inc(v_pos_452_);
lean_dec(v___x_442_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_460_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_458_; 
if (v_isShared_456_ == 0)
{
v___x_458_ = v___x_455_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_pos_452_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v_err_453_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__2(lean_object* v_00_u03b1_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v___x_464_; 
v___x_464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_464_, 0, v___y_463_);
lean_ctor_set(v___x_464_, 1, v___y_462_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__3(lean_object* v_00_u03b1_465_, lean_object* v_00_u03b2_466_, lean_object* v_f_467_, lean_object* v_x_468_, lean_object* v___y_469_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = lean_apply_1(v_f_467_, v___y_469_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_pos_471_; lean_object* v_res_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v_pos_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_pos_471_);
v_res_472_ = lean_ctor_get(v___x_470_, 1);
lean_inc(v_res_472_);
lean_dec_ref_known(v___x_470_, 2);
v___x_473_ = lean_box(0);
v___x_474_ = lean_apply_2(v_x_468_, v___x_473_, v_pos_471_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_pos_475_; lean_object* v_res_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_484_; 
v_pos_475_ = lean_ctor_get(v___x_474_, 0);
v_res_476_ = lean_ctor_get(v___x_474_, 1);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_484_ == 0)
{
v___x_478_ = v___x_474_;
v_isShared_479_ = v_isSharedCheck_484_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_res_476_);
lean_inc(v_pos_475_);
lean_dec(v___x_474_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_484_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_480_; lean_object* v___x_482_; 
v___x_480_ = lean_apply_1(v_res_472_, v_res_476_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 1, v___x_480_);
v___x_482_ = v___x_478_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_pos_475_);
lean_ctor_set(v_reuseFailAlloc_483_, 1, v___x_480_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
else
{
lean_object* v_pos_485_; lean_object* v_err_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
lean_dec(v_res_472_);
v_pos_485_ = lean_ctor_get(v___x_474_, 0);
v_err_486_ = lean_ctor_get(v___x_474_, 1);
v_isSharedCheck_493_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_493_ == 0)
{
v___x_488_ = v___x_474_;
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_err_486_);
lean_inc(v_pos_485_);
lean_dec(v___x_474_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_pos_485_);
lean_ctor_set(v_reuseFailAlloc_492_, 1, v_err_486_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
return v___x_491_;
}
}
}
}
else
{
lean_object* v_pos_494_; lean_object* v_err_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
lean_dec_ref(v_x_468_);
v_pos_494_ = lean_ctor_get(v___x_470_, 0);
v_err_495_ = lean_ctor_get(v___x_470_, 1);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___x_470_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_err_495_);
lean_inc(v_pos_494_);
lean_dec(v___x_470_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_pos_494_);
lean_ctor_set(v_reuseFailAlloc_501_, 1, v_err_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__4(lean_object* v_00_u03b1_503_, lean_object* v_00_u03b2_504_, lean_object* v_x_505_, lean_object* v_y_506_, lean_object* v___y_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = lean_apply_1(v_x_505_, v___y_507_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_pos_509_; lean_object* v_res_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v_pos_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_pos_509_);
v_res_510_ = lean_ctor_get(v___x_508_, 1);
lean_inc(v_res_510_);
lean_dec_ref_known(v___x_508_, 2);
v___x_511_ = lean_box(0);
v___x_512_ = lean_apply_2(v_y_506_, v___x_511_, v_pos_509_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v_pos_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_520_; 
v_pos_513_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_520_ == 0)
{
lean_object* v_unused_521_; 
v_unused_521_ = lean_ctor_get(v___x_512_, 1);
lean_dec(v_unused_521_);
v___x_515_ = v___x_512_;
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_pos_513_);
lean_dec(v___x_512_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_520_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_518_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v_res_510_);
v___x_518_ = v___x_515_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_pos_513_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_res_510_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
}
else
{
lean_object* v_pos_522_; lean_object* v_err_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec(v_res_510_);
v_pos_522_ = lean_ctor_get(v___x_512_, 0);
v_err_523_ = lean_ctor_get(v___x_512_, 1);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_512_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_err_523_);
lean_inc(v_pos_522_);
lean_dec(v___x_512_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_pos_522_);
lean_ctor_set(v_reuseFailAlloc_529_, 1, v_err_523_);
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
else
{
lean_dec_ref(v_y_506_);
return v___x_508_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___lam__5(lean_object* v_00_u03b1_531_, lean_object* v_00_u03b2_532_, lean_object* v_x_533_, lean_object* v_y_534_, lean_object* v___y_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = lean_apply_1(v_x_533_, v___y_535_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v_pos_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v_pos_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_pos_537_);
lean_dec_ref_known(v___x_536_, 2);
v___x_538_ = lean_box(0);
v___x_539_ = lean_apply_2(v_y_534_, v___x_538_, v_pos_537_);
return v___x_539_;
}
else
{
lean_object* v_pos_540_; lean_object* v_err_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec_ref(v_y_534_);
v_pos_540_ = lean_ctor_get(v___x_536_, 0);
v_err_541_ = lean_ctor_get(v___x_536_, 1);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_536_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_err_541_);
lean_inc(v_pos_540_);
lean_dec(v___x_536_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_pos_540_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v_err_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg(){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = ((lean_object*)(l_Std_Internal_Parsec_instMonad___redArg___closed__9));
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad___redArg___boxed(lean_object* v___dummy_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l_Std_Internal_Parsec_instMonad___redArg();
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instMonad(lean_object* v_00_u03b9_572_){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = ((lean_object*)(l_Std_Internal_Parsec_instMonad___redArg___closed__9));
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_orElse___redArg(lean_object* v_inst_574_, lean_object* v_inst_575_, lean_object* v_p_576_, lean_object* v_q_577_, lean_object* v_a_578_){
_start:
{
lean_object* v___x_579_; 
lean_inc(v_a_578_);
v___x_579_ = lean_apply_1(v_p_576_, v_a_578_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_dec(v_a_578_);
lean_dec_ref(v_q_577_);
lean_dec_ref(v_inst_575_);
lean_dec_ref(v_inst_574_);
return v___x_579_;
}
else
{
lean_object* v_pos_580_; lean_object* v_pos_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
v_pos_580_ = lean_ctor_get(v___x_579_, 0);
lean_inc_n(v_pos_580_, 2);
v_pos_581_ = lean_ctor_get(v_inst_575_, 0);
lean_inc_n(v_pos_581_, 2);
lean_dec_ref(v_inst_575_);
v___x_582_ = lean_apply_1(v_pos_581_, v_a_578_);
v___x_583_ = lean_apply_1(v_pos_581_, v_pos_580_);
v___x_584_ = lean_apply_2(v_inst_574_, v___x_582_, v___x_583_);
v___x_585_ = lean_unbox(v___x_584_);
if (v___x_585_ == 0)
{
lean_dec(v_pos_580_);
lean_dec_ref(v_q_577_);
return v___x_579_;
}
else
{
lean_object* v___x_586_; lean_object* v___x_587_; 
lean_dec_ref_known(v___x_579_, 2);
v___x_586_ = lean_box(0);
v___x_587_ = lean_apply_2(v_q_577_, v___x_586_, v_pos_580_);
return v___x_587_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_orElse(lean_object* v_00_u03b1_588_, lean_object* v_00_u03b9_589_, lean_object* v_elem_590_, lean_object* v_idx_591_, lean_object* v_inst_592_, lean_object* v_inst_593_, lean_object* v_inst_594_, lean_object* v_p_595_, lean_object* v_q_596_, lean_object* v_a_597_){
_start:
{
lean_object* v___x_598_; 
lean_inc(v_a_597_);
v___x_598_ = lean_apply_1(v_p_595_, v_a_597_);
if (lean_obj_tag(v___x_598_) == 0)
{
lean_dec(v_a_597_);
lean_dec_ref(v_q_596_);
lean_dec_ref(v_inst_594_);
lean_dec_ref(v_inst_592_);
return v___x_598_;
}
else
{
lean_object* v_pos_599_; lean_object* v_pos_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; uint8_t v___x_604_; 
v_pos_599_ = lean_ctor_get(v___x_598_, 0);
lean_inc_n(v_pos_599_, 2);
v_pos_600_ = lean_ctor_get(v_inst_594_, 0);
lean_inc_n(v_pos_600_, 2);
lean_dec_ref(v_inst_594_);
v___x_601_ = lean_apply_1(v_pos_600_, v_a_597_);
v___x_602_ = lean_apply_1(v_pos_600_, v_pos_599_);
v___x_603_ = lean_apply_2(v_inst_592_, v___x_601_, v___x_602_);
v___x_604_ = lean_unbox(v___x_603_);
if (v___x_604_ == 0)
{
lean_dec(v_pos_599_);
lean_dec_ref(v_q_596_);
return v___x_598_;
}
else
{
lean_object* v___x_605_; lean_object* v___x_606_; 
lean_dec_ref_known(v___x_598_, 2);
v___x_605_ = lean_box(0);
v___x_606_ = lean_apply_2(v_q_596_, v___x_605_, v_pos_599_);
return v___x_606_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_orElse___boxed(lean_object* v_00_u03b1_607_, lean_object* v_00_u03b9_608_, lean_object* v_elem_609_, lean_object* v_idx_610_, lean_object* v_inst_611_, lean_object* v_inst_612_, lean_object* v_inst_613_, lean_object* v_p_614_, lean_object* v_q_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Std_Internal_Parsec_orElse(v_00_u03b1_607_, v_00_u03b9_608_, v_elem_609_, v_idx_610_, v_inst_611_, v_inst_612_, v_inst_613_, v_p_614_, v_q_615_, v_a_616_);
lean_dec_ref(v_inst_612_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_attempt___redArg(lean_object* v_p_618_, lean_object* v_a_619_){
_start:
{
lean_object* v___x_620_; 
lean_inc(v_a_619_);
v___x_620_ = lean_apply_1(v_p_618_, v_a_619_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_dec(v_a_619_);
return v___x_620_;
}
else
{
lean_object* v_err_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
v_err_621_ = lean_ctor_get(v___x_620_, 1);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_628_ == 0)
{
lean_object* v_unused_629_; 
v_unused_629_ = lean_ctor_get(v___x_620_, 0);
lean_dec(v_unused_629_);
v___x_623_ = v___x_620_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_err_621_);
lean_dec(v___x_620_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 0, v_a_619_);
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_619_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v_err_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_attempt(lean_object* v_00_u03b1_630_, lean_object* v_00_u03b9_631_, lean_object* v_p_632_, lean_object* v_a_633_){
_start:
{
lean_object* v___x_634_; 
lean_inc(v_a_633_);
v___x_634_ = lean_apply_1(v_p_632_, v_a_633_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_dec(v_a_633_);
return v___x_634_;
}
else
{
lean_object* v_err_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
v_err_635_ = lean_ctor_get(v___x_634_, 1);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_642_ == 0)
{
lean_object* v_unused_643_; 
v_unused_643_ = lean_ctor_get(v___x_634_, 0);
lean_dec(v_unused_643_);
v___x_637_ = v___x_634_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_err_635_);
lean_dec(v___x_634_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
lean_ctor_set(v___x_637_, 0, v_a_633_);
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_633_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_err_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instAlternative___redArg___lam__0(lean_object* v_00_u03b1_644_, lean_object* v___y_645_){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = ((lean_object*)(l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__1));
v___x_647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_647_, 0, v___y_645_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instAlternative___redArg___lam__1(lean_object* v_inst_648_, lean_object* v_inst_649_, lean_object* v_00_u03b1_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_){
_start:
{
lean_object* v___x_654_; 
lean_inc(v___y_653_);
v___x_654_ = lean_apply_1(v___y_651_, v___y_653_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec_ref(v_inst_649_);
lean_dec_ref(v_inst_648_);
return v___x_654_;
}
else
{
lean_object* v_pos_655_; lean_object* v_pos_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v_pos_655_ = lean_ctor_get(v___x_654_, 0);
lean_inc_n(v_pos_655_, 2);
v_pos_656_ = lean_ctor_get(v_inst_648_, 0);
lean_inc_n(v_pos_656_, 2);
lean_dec_ref(v_inst_648_);
v___x_657_ = lean_apply_1(v_pos_656_, v___y_653_);
v___x_658_ = lean_apply_1(v_pos_656_, v_pos_655_);
v___x_659_ = lean_apply_2(v_inst_649_, v___x_657_, v___x_658_);
v___x_660_ = lean_unbox(v___x_659_);
if (v___x_660_ == 0)
{
lean_dec(v_pos_655_);
lean_dec_ref(v___y_652_);
return v___x_654_;
}
else
{
lean_object* v___x_661_; lean_object* v___x_662_; 
lean_dec_ref_known(v___x_654_, 2);
v___x_661_ = lean_box(0);
v___x_662_ = lean_apply_2(v___y_652_, v___x_661_, v_pos_655_);
return v___x_662_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instAlternative___redArg(lean_object* v_inst_664_, lean_object* v_inst_665_){
_start:
{
lean_object* v___f_666_; lean_object* v___f_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___f_666_ = ((lean_object*)(l_Std_Internal_Parsec_instAlternative___redArg___closed__0));
v___f_667_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_instAlternative___redArg___lam__1), 6, 2);
lean_closure_set(v___f_667_, 0, v_inst_665_);
lean_closure_set(v___f_667_, 1, v_inst_664_);
v___x_668_ = ((lean_object*)(l_Std_Internal_Parsec_instMonad___redArg___closed__7));
v___x_669_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_669_, 0, v___x_668_);
lean_ctor_set(v___x_669_, 1, v___f_666_);
lean_ctor_set(v___x_669_, 2, v___f_667_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instAlternative(lean_object* v_00_u03b9_670_, lean_object* v_elem_671_, lean_object* v_idx_672_, lean_object* v_inst_673_, lean_object* v_inst_674_, lean_object* v_inst_675_){
_start:
{
lean_object* v___f_676_; lean_object* v___f_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___f_676_ = ((lean_object*)(l_Std_Internal_Parsec_instAlternative___redArg___closed__0));
v___f_677_ = lean_alloc_closure((void*)(l_Std_Internal_Parsec_instAlternative___redArg___lam__1), 6, 2);
lean_closure_set(v___f_677_, 0, v_inst_675_);
lean_closure_set(v___f_677_, 1, v_inst_673_);
v___x_678_ = ((lean_object*)(l_Std_Internal_Parsec_instMonad___redArg___closed__7));
v___x_679_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v___f_676_);
lean_ctor_set(v___x_679_, 2, v___f_677_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_instAlternative___boxed(lean_object* v_00_u03b9_680_, lean_object* v_elem_681_, lean_object* v_idx_682_, lean_object* v_inst_683_, lean_object* v_inst_684_, lean_object* v_inst_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Std_Internal_Parsec_instAlternative(v_00_u03b9_680_, v_elem_681_, v_idx_682_, v_inst_683_, v_inst_684_, v_inst_685_);
lean_dec_ref(v_inst_684_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_eof___redArg(lean_object* v_inst_690_, lean_object* v_a_691_){
_start:
{
lean_object* v_hasNext_692_; lean_object* v___x_693_; uint8_t v___x_694_; 
v_hasNext_692_ = lean_ctor_get(v_inst_690_, 3);
lean_inc_ref(v_hasNext_692_);
lean_dec_ref(v_inst_690_);
lean_inc(v_a_691_);
v___x_693_ = lean_apply_1(v_hasNext_692_, v_a_691_);
v___x_694_ = lean_unbox(v___x_693_);
if (v___x_694_ == 0)
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = lean_box(0);
v___x_696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_696_, 0, v_a_691_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
return v___x_696_;
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = ((lean_object*)(l_Std_Internal_Parsec_eof___redArg___closed__1));
v___x_698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_698_, 0, v_a_691_);
lean_ctor_set(v___x_698_, 1, v___x_697_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_eof(lean_object* v_00_u03b9_699_, lean_object* v_elem_700_, lean_object* v_idx_701_, lean_object* v_inst_702_, lean_object* v_inst_703_, lean_object* v_inst_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_hasNext_706_; lean_object* v___x_707_; uint8_t v___x_708_; 
v_hasNext_706_ = lean_ctor_get(v_inst_704_, 3);
lean_inc_ref(v_hasNext_706_);
lean_dec_ref(v_inst_704_);
lean_inc(v_a_705_);
v___x_707_ = lean_apply_1(v_hasNext_706_, v_a_705_);
v___x_708_ = lean_unbox(v___x_707_);
if (v___x_708_ == 0)
{
lean_object* v___x_709_; lean_object* v___x_710_; 
v___x_709_ = lean_box(0);
v___x_710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_710_, 0, v_a_705_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
return v___x_710_;
}
else
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = ((lean_object*)(l_Std_Internal_Parsec_eof___redArg___closed__1));
v___x_712_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_712_, 0, v_a_705_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
return v___x_712_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_eof___boxed(lean_object* v_00_u03b9_713_, lean_object* v_elem_714_, lean_object* v_idx_715_, lean_object* v_inst_716_, lean_object* v_inst_717_, lean_object* v_inst_718_, lean_object* v_a_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Std_Internal_Parsec_eof(v_00_u03b9_713_, v_elem_714_, v_idx_715_, v_inst_716_, v_inst_717_, v_inst_718_, v_a_719_);
lean_dec_ref(v_inst_717_);
lean_dec_ref(v_inst_716_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_isEof___redArg(lean_object* v_inst_721_, lean_object* v_a_722_){
_start:
{
lean_object* v_hasNext_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
v_hasNext_723_ = lean_ctor_get(v_inst_721_, 3);
lean_inc_ref(v_hasNext_723_);
lean_dec_ref(v_inst_721_);
lean_inc(v_a_722_);
v___x_724_ = lean_apply_1(v_hasNext_723_, v_a_722_);
v___x_725_ = lean_unbox(v___x_724_);
if (v___x_725_ == 0)
{
uint8_t v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_726_ = 1;
v___x_727_ = lean_box(v___x_726_);
v___x_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_728_, 0, v_a_722_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
return v___x_728_;
}
else
{
uint8_t v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_729_ = 0;
v___x_730_ = lean_box(v___x_729_);
v___x_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_731_, 0, v_a_722_);
lean_ctor_set(v___x_731_, 1, v___x_730_);
return v___x_731_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_isEof(lean_object* v_00_u03b9_732_, lean_object* v_elem_733_, lean_object* v_idx_734_, lean_object* v_inst_735_, lean_object* v_inst_736_, lean_object* v_inst_737_, lean_object* v_a_738_){
_start:
{
lean_object* v_hasNext_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v_hasNext_739_ = lean_ctor_get(v_inst_737_, 3);
lean_inc_ref(v_hasNext_739_);
lean_dec_ref(v_inst_737_);
lean_inc(v_a_738_);
v___x_740_ = lean_apply_1(v_hasNext_739_, v_a_738_);
v___x_741_ = lean_unbox(v___x_740_);
if (v___x_741_ == 0)
{
uint8_t v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_742_ = 1;
v___x_743_ = lean_box(v___x_742_);
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v_a_738_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
return v___x_744_;
}
else
{
uint8_t v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_745_ = 0;
v___x_746_ = lean_box(v___x_745_);
v___x_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_747_, 0, v_a_738_);
lean_ctor_set(v___x_747_, 1, v___x_746_);
return v___x_747_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_isEof___boxed(lean_object* v_00_u03b9_748_, lean_object* v_elem_749_, lean_object* v_idx_750_, lean_object* v_inst_751_, lean_object* v_inst_752_, lean_object* v_inst_753_, lean_object* v_a_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Std_Internal_Parsec_isEof(v_00_u03b9_748_, v_elem_749_, v_idx_750_, v_inst_751_, v_inst_752_, v_inst_753_, v_a_754_);
lean_dec_ref(v_inst_752_);
lean_dec_ref(v_inst_751_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___redArg(lean_object* v_inst_756_, lean_object* v_inst_757_, lean_object* v_p_758_, lean_object* v_acc_759_, lean_object* v_a_760_){
_start:
{
lean_object* v___x_761_; 
lean_inc_ref(v_p_758_);
lean_inc(v_a_760_);
v___x_761_ = lean_apply_1(v_p_758_, v_a_760_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_object* v_pos_762_; lean_object* v_res_763_; lean_object* v___x_764_; 
lean_dec(v_a_760_);
v_pos_762_ = lean_ctor_get(v___x_761_, 0);
lean_inc(v_pos_762_);
v_res_763_ = lean_ctor_get(v___x_761_, 1);
lean_inc(v_res_763_);
lean_dec_ref_known(v___x_761_, 2);
v___x_764_ = lean_array_push(v_acc_759_, v_res_763_);
v_acc_759_ = v___x_764_;
v_a_760_ = v_pos_762_;
goto _start;
}
else
{
lean_object* v_pos_766_; lean_object* v_err_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_782_; 
lean_dec_ref(v_p_758_);
v_pos_766_ = lean_ctor_get(v___x_761_, 0);
v_err_767_ = lean_ctor_get(v___x_761_, 1);
v_isSharedCheck_782_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_782_ == 0)
{
v___x_769_ = v___x_761_;
v_isShared_770_ = v_isSharedCheck_782_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_err_767_);
lean_inc(v_pos_766_);
lean_dec(v___x_761_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_782_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v_pos_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
v_pos_771_ = lean_ctor_get(v_inst_757_, 0);
lean_inc_n(v_pos_771_, 2);
lean_dec_ref(v_inst_757_);
v___x_772_ = lean_apply_1(v_pos_771_, v_a_760_);
lean_inc(v_pos_766_);
v___x_773_ = lean_apply_1(v_pos_771_, v_pos_766_);
v___x_774_ = lean_apply_2(v_inst_756_, v___x_772_, v___x_773_);
v___x_775_ = lean_unbox(v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_777_; 
lean_dec_ref(v_acc_759_);
if (v_isShared_770_ == 0)
{
v___x_777_ = v___x_769_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_pos_766_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_err_767_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
else
{
lean_object* v___x_780_; 
lean_dec(v_err_767_);
if (v_isShared_770_ == 0)
{
lean_ctor_set_tag(v___x_769_, 0);
lean_ctor_set(v___x_769_, 1, v_acc_759_);
v___x_780_ = v___x_769_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_pos_766_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v_acc_759_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
return v___x_780_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore(lean_object* v_00_u03b1_783_, lean_object* v_00_u03b9_784_, lean_object* v_elem_785_, lean_object* v_idx_786_, lean_object* v_inst_787_, lean_object* v_inst_788_, lean_object* v_inst_789_, lean_object* v_p_790_, lean_object* v_acc_791_, lean_object* v_a_792_){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = l_Std_Internal_Parsec_manyCore___redArg(v_inst_787_, v_inst_789_, v_p_790_, v_acc_791_, v_a_792_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___boxed(lean_object* v_00_u03b1_794_, lean_object* v_00_u03b9_795_, lean_object* v_elem_796_, lean_object* v_idx_797_, lean_object* v_inst_798_, lean_object* v_inst_799_, lean_object* v_inst_800_, lean_object* v_p_801_, lean_object* v_acc_802_, lean_object* v_a_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l_Std_Internal_Parsec_manyCore(v_00_u03b1_794_, v_00_u03b9_795_, v_elem_796_, v_idx_797_, v_inst_798_, v_inst_799_, v_inst_800_, v_p_801_, v_acc_802_, v_a_803_);
lean_dec_ref(v_inst_799_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many___redArg(lean_object* v_inst_807_, lean_object* v_inst_808_, lean_object* v_p_809_, lean_object* v_a_810_){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = ((lean_object*)(l_Std_Internal_Parsec_many___redArg___closed__0));
v___x_812_ = l_Std_Internal_Parsec_manyCore___redArg(v_inst_807_, v_inst_808_, v_p_809_, v___x_811_, v_a_810_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many(lean_object* v_00_u03b1_813_, lean_object* v_00_u03b9_814_, lean_object* v_elem_815_, lean_object* v_idx_816_, lean_object* v_inst_817_, lean_object* v_inst_818_, lean_object* v_inst_819_, lean_object* v_p_820_, lean_object* v_a_821_){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = ((lean_object*)(l_Std_Internal_Parsec_many___redArg___closed__0));
v___x_823_ = l_Std_Internal_Parsec_manyCore___redArg(v_inst_817_, v_inst_819_, v_p_820_, v___x_822_, v_a_821_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many___boxed(lean_object* v_00_u03b1_824_, lean_object* v_00_u03b9_825_, lean_object* v_elem_826_, lean_object* v_idx_827_, lean_object* v_inst_828_, lean_object* v_inst_829_, lean_object* v_inst_830_, lean_object* v_p_831_, lean_object* v_a_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = l_Std_Internal_Parsec_many(v_00_u03b1_824_, v_00_u03b9_825_, v_elem_826_, v_idx_827_, v_inst_828_, v_inst_829_, v_inst_830_, v_p_831_, v_a_832_);
lean_dec_ref(v_inst_829_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1___redArg(lean_object* v_inst_834_, lean_object* v_inst_835_, lean_object* v_p_836_, lean_object* v_a_837_){
_start:
{
lean_object* v___x_838_; 
lean_inc_ref(v_p_836_);
v___x_838_ = lean_apply_1(v_p_836_, v_a_837_);
if (lean_obj_tag(v___x_838_) == 0)
{
lean_object* v_pos_839_; lean_object* v_res_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v_pos_839_ = lean_ctor_get(v___x_838_, 0);
lean_inc(v_pos_839_);
v_res_840_ = lean_ctor_get(v___x_838_, 1);
lean_inc(v_res_840_);
lean_dec_ref_known(v___x_838_, 2);
v___x_841_ = lean_unsigned_to_nat(1u);
v___x_842_ = lean_mk_empty_array_with_capacity(v___x_841_);
v___x_843_ = lean_array_push(v___x_842_, v_res_840_);
v___x_844_ = l_Std_Internal_Parsec_manyCore___redArg(v_inst_834_, v_inst_835_, v_p_836_, v___x_843_, v_pos_839_);
return v___x_844_;
}
else
{
lean_object* v_pos_845_; lean_object* v_err_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec_ref(v_p_836_);
lean_dec_ref(v_inst_835_);
lean_dec_ref(v_inst_834_);
v_pos_845_ = lean_ctor_get(v___x_838_, 0);
v_err_846_ = lean_ctor_get(v___x_838_, 1);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_838_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_err_846_);
lean_inc(v_pos_845_);
lean_dec(v___x_838_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_pos_845_);
lean_ctor_set(v_reuseFailAlloc_852_, 1, v_err_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1(lean_object* v_00_u03b1_854_, lean_object* v_00_u03b9_855_, lean_object* v_elem_856_, lean_object* v_idx_857_, lean_object* v_inst_858_, lean_object* v_inst_859_, lean_object* v_inst_860_, lean_object* v_p_861_, lean_object* v_a_862_){
_start:
{
lean_object* v___x_863_; 
lean_inc_ref(v_p_861_);
v___x_863_ = lean_apply_1(v_p_861_, v_a_862_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_pos_864_; lean_object* v_res_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v_pos_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_pos_864_);
v_res_865_ = lean_ctor_get(v___x_863_, 1);
lean_inc(v_res_865_);
lean_dec_ref_known(v___x_863_, 2);
v___x_866_ = lean_unsigned_to_nat(1u);
v___x_867_ = lean_mk_empty_array_with_capacity(v___x_866_);
v___x_868_ = lean_array_push(v___x_867_, v_res_865_);
v___x_869_ = l_Std_Internal_Parsec_manyCore___redArg(v_inst_858_, v_inst_860_, v_p_861_, v___x_868_, v_pos_864_);
return v___x_869_;
}
else
{
lean_object* v_pos_870_; lean_object* v_err_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_878_; 
lean_dec_ref(v_p_861_);
lean_dec_ref(v_inst_860_);
lean_dec_ref(v_inst_858_);
v_pos_870_ = lean_ctor_get(v___x_863_, 0);
v_err_871_ = lean_ctor_get(v___x_863_, 1);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_878_ == 0)
{
v___x_873_ = v___x_863_;
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_err_871_);
lean_inc(v_pos_870_);
lean_dec(v___x_863_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_878_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_876_; 
if (v_isShared_874_ == 0)
{
v___x_876_ = v___x_873_;
goto v_reusejp_875_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_pos_870_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v_err_871_);
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
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1___boxed(lean_object* v_00_u03b1_879_, lean_object* v_00_u03b9_880_, lean_object* v_elem_881_, lean_object* v_idx_882_, lean_object* v_inst_883_, lean_object* v_inst_884_, lean_object* v_inst_885_, lean_object* v_p_886_, lean_object* v_a_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Std_Internal_Parsec_many1(v_00_u03b1_879_, v_00_u03b9_880_, v_elem_881_, v_idx_882_, v_inst_883_, v_inst_884_, v_inst_885_, v_p_886_, v_a_887_);
lean_dec_ref(v_inst_884_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_any___redArg(lean_object* v_inst_889_, lean_object* v_a_890_){
_start:
{
lean_object* v_hasNext_891_; lean_object* v_next_x27_892_; lean_object* v_curr_x27_893_; lean_object* v___x_894_; uint8_t v___x_895_; 
v_hasNext_891_ = lean_ctor_get(v_inst_889_, 3);
lean_inc_ref(v_hasNext_891_);
v_next_x27_892_ = lean_ctor_get(v_inst_889_, 4);
lean_inc(v_next_x27_892_);
v_curr_x27_893_ = lean_ctor_get(v_inst_889_, 5);
lean_inc(v_curr_x27_893_);
lean_dec_ref(v_inst_889_);
lean_inc(v_a_890_);
v___x_894_ = lean_apply_1(v_hasNext_891_, v_a_890_);
v___x_895_ = lean_unbox(v___x_894_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; lean_object* v___x_897_; 
lean_dec(v_curr_x27_893_);
lean_dec(v_next_x27_892_);
v___x_896_ = lean_box(0);
v___x_897_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_897_, 0, v_a_890_);
lean_ctor_set(v___x_897_, 1, v___x_896_);
return v___x_897_;
}
else
{
lean_object* v_c_898_; lean_object* v_it_x27_899_; lean_object* v___x_900_; 
lean_inc(v_a_890_);
v_c_898_ = lean_apply_2(v_curr_x27_893_, v_a_890_, lean_box(0));
v_it_x27_899_ = lean_apply_2(v_next_x27_892_, v_a_890_, lean_box(0));
v___x_900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_900_, 0, v_it_x27_899_);
lean_ctor_set(v___x_900_, 1, v_c_898_);
return v___x_900_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_any(lean_object* v_00_u03b9_901_, lean_object* v_elem_902_, lean_object* v_idx_903_, lean_object* v_inst_904_, lean_object* v_inst_905_, lean_object* v_inst_906_, lean_object* v_a_907_){
_start:
{
lean_object* v_hasNext_908_; lean_object* v_next_x27_909_; lean_object* v_curr_x27_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v_hasNext_908_ = lean_ctor_get(v_inst_906_, 3);
lean_inc_ref(v_hasNext_908_);
v_next_x27_909_ = lean_ctor_get(v_inst_906_, 4);
lean_inc(v_next_x27_909_);
v_curr_x27_910_ = lean_ctor_get(v_inst_906_, 5);
lean_inc(v_curr_x27_910_);
lean_dec_ref(v_inst_906_);
lean_inc(v_a_907_);
v___x_911_ = lean_apply_1(v_hasNext_908_, v_a_907_);
v___x_912_ = lean_unbox(v___x_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; lean_object* v___x_914_; 
lean_dec(v_curr_x27_910_);
lean_dec(v_next_x27_909_);
v___x_913_ = lean_box(0);
v___x_914_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_914_, 0, v_a_907_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
return v___x_914_;
}
else
{
lean_object* v_c_915_; lean_object* v_it_x27_916_; lean_object* v___x_917_; 
lean_inc(v_a_907_);
v_c_915_ = lean_apply_2(v_curr_x27_910_, v_a_907_, lean_box(0));
v_it_x27_916_ = lean_apply_2(v_next_x27_909_, v_a_907_, lean_box(0));
v___x_917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_917_, 0, v_it_x27_916_);
lean_ctor_set(v___x_917_, 1, v_c_915_);
return v___x_917_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_any___boxed(lean_object* v_00_u03b9_918_, lean_object* v_elem_919_, lean_object* v_idx_920_, lean_object* v_inst_921_, lean_object* v_inst_922_, lean_object* v_inst_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l_Std_Internal_Parsec_any(v_00_u03b9_918_, v_elem_919_, v_idx_920_, v_inst_921_, v_inst_922_, v_inst_923_, v_a_924_);
lean_dec_ref(v_inst_922_);
lean_dec_ref(v_inst_921_);
return v_res_925_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_satisfy___redArg(lean_object* v_inst_929_, lean_object* v_p_930_, lean_object* v_a_931_){
_start:
{
lean_object* v_hasNext_932_; lean_object* v_next_x27_933_; lean_object* v_curr_x27_934_; lean_object* v___x_935_; uint8_t v___x_936_; 
v_hasNext_932_ = lean_ctor_get(v_inst_929_, 3);
lean_inc_ref(v_hasNext_932_);
v_next_x27_933_ = lean_ctor_get(v_inst_929_, 4);
lean_inc(v_next_x27_933_);
v_curr_x27_934_ = lean_ctor_get(v_inst_929_, 5);
lean_inc(v_curr_x27_934_);
lean_dec_ref(v_inst_929_);
lean_inc(v_a_931_);
v___x_935_ = lean_apply_1(v_hasNext_932_, v_a_931_);
v___x_936_ = lean_unbox(v___x_935_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; lean_object* v___x_938_; 
lean_dec(v_curr_x27_934_);
lean_dec(v_next_x27_933_);
lean_dec_ref(v_p_930_);
v___x_937_ = lean_box(0);
v___x_938_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_938_, 0, v_a_931_);
lean_ctor_set(v___x_938_, 1, v___x_937_);
return v___x_938_;
}
else
{
lean_object* v_c_939_; lean_object* v_it_x27_940_; lean_object* v___x_941_; lean_object* v___x_942_; uint8_t v___x_943_; 
lean_inc_n(v_a_931_, 2);
v_c_939_ = lean_apply_2(v_curr_x27_934_, v_a_931_, lean_box(0));
v_it_x27_940_ = lean_apply_2(v_next_x27_933_, v_a_931_, lean_box(0));
lean_inc(v_c_939_);
v___x_941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_941_, 0, v_it_x27_940_);
lean_ctor_set(v___x_941_, 1, v_c_939_);
v___x_942_ = lean_apply_1(v_p_930_, v_c_939_);
v___x_943_ = lean_unbox(v___x_942_);
if (v___x_943_ == 0)
{
lean_object* v___x_944_; lean_object* v___x_945_; 
lean_dec_ref_known(v___x_941_, 2);
v___x_944_ = ((lean_object*)(l_Std_Internal_Parsec_satisfy___redArg___closed__1));
v___x_945_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_945_, 0, v_a_931_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
return v___x_945_;
}
else
{
lean_dec(v_a_931_);
return v___x_941_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_satisfy(lean_object* v_00_u03b9_946_, lean_object* v_elem_947_, lean_object* v_idx_948_, lean_object* v_inst_949_, lean_object* v_inst_950_, lean_object* v_inst_951_, lean_object* v_p_952_, lean_object* v_a_953_){
_start:
{
lean_object* v_hasNext_954_; lean_object* v_next_x27_955_; lean_object* v_curr_x27_956_; lean_object* v___x_957_; uint8_t v___x_958_; 
v_hasNext_954_ = lean_ctor_get(v_inst_951_, 3);
lean_inc_ref(v_hasNext_954_);
v_next_x27_955_ = lean_ctor_get(v_inst_951_, 4);
lean_inc(v_next_x27_955_);
v_curr_x27_956_ = lean_ctor_get(v_inst_951_, 5);
lean_inc(v_curr_x27_956_);
lean_dec_ref(v_inst_951_);
lean_inc(v_a_953_);
v___x_957_ = lean_apply_1(v_hasNext_954_, v_a_953_);
v___x_958_ = lean_unbox(v___x_957_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; lean_object* v___x_960_; 
lean_dec(v_curr_x27_956_);
lean_dec(v_next_x27_955_);
lean_dec_ref(v_p_952_);
v___x_959_ = lean_box(0);
v___x_960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_960_, 0, v_a_953_);
lean_ctor_set(v___x_960_, 1, v___x_959_);
return v___x_960_;
}
else
{
lean_object* v_c_961_; lean_object* v_it_x27_962_; lean_object* v___x_963_; lean_object* v___x_964_; uint8_t v___x_965_; 
lean_inc_n(v_a_953_, 2);
v_c_961_ = lean_apply_2(v_curr_x27_956_, v_a_953_, lean_box(0));
v_it_x27_962_ = lean_apply_2(v_next_x27_955_, v_a_953_, lean_box(0));
lean_inc(v_c_961_);
v___x_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_963_, 0, v_it_x27_962_);
lean_ctor_set(v___x_963_, 1, v_c_961_);
v___x_964_ = lean_apply_1(v_p_952_, v_c_961_);
v___x_965_ = lean_unbox(v___x_964_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; lean_object* v___x_967_; 
lean_dec_ref_known(v___x_963_, 2);
v___x_966_ = ((lean_object*)(l_Std_Internal_Parsec_satisfy___redArg___closed__1));
v___x_967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_967_, 0, v_a_953_);
lean_ctor_set(v___x_967_, 1, v___x_966_);
return v___x_967_;
}
else
{
lean_dec(v_a_953_);
return v___x_963_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_satisfy___boxed(lean_object* v_00_u03b9_968_, lean_object* v_elem_969_, lean_object* v_idx_970_, lean_object* v_inst_971_, lean_object* v_inst_972_, lean_object* v_inst_973_, lean_object* v_p_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Std_Internal_Parsec_satisfy(v_00_u03b9_968_, v_elem_969_, v_idx_970_, v_inst_971_, v_inst_972_, v_inst_973_, v_p_974_, v_a_975_);
lean_dec_ref(v_inst_972_);
lean_dec_ref(v_inst_971_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_notFollowedBy___redArg(lean_object* v_p_977_, lean_object* v_a_978_){
_start:
{
lean_object* v___x_979_; 
lean_inc(v_a_978_);
v___x_979_ = lean_apply_1(v_p_977_, v_a_978_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_987_; 
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_987_ == 0)
{
lean_object* v_unused_988_; lean_object* v_unused_989_; 
v_unused_988_ = lean_ctor_get(v___x_979_, 1);
lean_dec(v_unused_988_);
v_unused_989_ = lean_ctor_get(v___x_979_, 0);
lean_dec(v_unused_989_);
v___x_981_ = v___x_979_;
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
else
{
lean_dec(v___x_979_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_987_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_983_; lean_object* v___x_985_; 
v___x_983_ = ((lean_object*)(l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__1));
if (v_isShared_982_ == 0)
{
lean_ctor_set_tag(v___x_981_, 1);
lean_ctor_set(v___x_981_, 1, v___x_983_);
lean_ctor_set(v___x_981_, 0, v_a_978_);
v___x_985_ = v___x_981_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_978_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v___x_983_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
else
{
lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_997_; 
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; lean_object* v_unused_999_; 
v_unused_998_ = lean_ctor_get(v___x_979_, 1);
lean_dec(v_unused_998_);
v_unused_999_ = lean_ctor_get(v___x_979_, 0);
lean_dec(v_unused_999_);
v___x_991_ = v___x_979_;
v_isShared_992_ = v_isSharedCheck_997_;
goto v_resetjp_990_;
}
else
{
lean_dec(v___x_979_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_997_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_993_; lean_object* v___x_995_; 
v___x_993_ = lean_box(0);
if (v_isShared_992_ == 0)
{
lean_ctor_set_tag(v___x_991_, 0);
lean_ctor_set(v___x_991_, 1, v___x_993_);
lean_ctor_set(v___x_991_, 0, v_a_978_);
v___x_995_ = v___x_991_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_978_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v___x_993_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_notFollowedBy(lean_object* v_00_u03b1_1000_, lean_object* v_00_u03b9_1001_, lean_object* v_p_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v___x_1004_; 
lean_inc(v_a_1003_);
v___x_1004_ = lean_apply_1(v_p_1002_, v_a_1003_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1012_; 
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1012_ == 0)
{
lean_object* v_unused_1013_; lean_object* v_unused_1014_; 
v_unused_1013_ = lean_ctor_get(v___x_1004_, 1);
lean_dec(v_unused_1013_);
v_unused_1014_ = lean_ctor_get(v___x_1004_, 0);
lean_dec(v_unused_1014_);
v___x_1006_ = v___x_1004_;
v_isShared_1007_ = v_isSharedCheck_1012_;
goto v_resetjp_1005_;
}
else
{
lean_dec(v___x_1004_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1012_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1008_; lean_object* v___x_1010_; 
v___x_1008_ = ((lean_object*)(l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__1));
if (v_isShared_1007_ == 0)
{
lean_ctor_set_tag(v___x_1006_, 1);
lean_ctor_set(v___x_1006_, 1, v___x_1008_);
lean_ctor_set(v___x_1006_, 0, v_a_1003_);
v___x_1010_ = v___x_1006_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_a_1003_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v___x_1008_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
else
{
lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1022_; 
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1022_ == 0)
{
lean_object* v_unused_1023_; lean_object* v_unused_1024_; 
v_unused_1023_ = lean_ctor_get(v___x_1004_, 1);
lean_dec(v_unused_1023_);
v_unused_1024_ = lean_ctor_get(v___x_1004_, 0);
lean_dec(v_unused_1024_);
v___x_1016_ = v___x_1004_;
v_isShared_1017_ = v_isSharedCheck_1022_;
goto v_resetjp_1015_;
}
else
{
lean_dec(v___x_1004_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1022_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1018_; lean_object* v___x_1020_; 
v___x_1018_ = lean_box(0);
if (v_isShared_1017_ == 0)
{
lean_ctor_set_tag(v___x_1016_, 0);
lean_ctor_set(v___x_1016_, 1, v___x_1018_);
lean_ctor_set(v___x_1016_, 0, v_a_1003_);
v___x_1020_ = v___x_1016_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1003_);
lean_ctor_set(v_reuseFailAlloc_1021_, 1, v___x_1018_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x3f___redArg(lean_object* v_inst_1025_, lean_object* v_a_1026_){
_start:
{
lean_object* v_hasNext_1027_; lean_object* v_curr_x27_1028_; lean_object* v___x_1029_; uint8_t v___x_1030_; 
v_hasNext_1027_ = lean_ctor_get(v_inst_1025_, 3);
lean_inc_ref(v_hasNext_1027_);
v_curr_x27_1028_ = lean_ctor_get(v_inst_1025_, 5);
lean_inc(v_curr_x27_1028_);
lean_dec_ref(v_inst_1025_);
lean_inc(v_a_1026_);
v___x_1029_ = lean_apply_1(v_hasNext_1027_, v_a_1026_);
v___x_1030_ = lean_unbox(v___x_1029_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_dec(v_curr_x27_1028_);
v___x_1031_ = lean_box(0);
v___x_1032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1032_, 0, v_a_1026_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
return v___x_1032_;
}
else
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
lean_inc(v_a_1026_);
v___x_1033_ = lean_apply_2(v_curr_x27_1028_, v_a_1026_, lean_box(0));
v___x_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
v___x_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1035_, 0, v_a_1026_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
return v___x_1035_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x3f(lean_object* v_00_u03b9_1036_, lean_object* v_elem_1037_, lean_object* v_idx_1038_, lean_object* v_inst_1039_, lean_object* v_inst_1040_, lean_object* v_inst_1041_, lean_object* v_a_1042_){
_start:
{
lean_object* v_hasNext_1043_; lean_object* v_curr_x27_1044_; lean_object* v___x_1045_; uint8_t v___x_1046_; 
v_hasNext_1043_ = lean_ctor_get(v_inst_1041_, 3);
lean_inc_ref(v_hasNext_1043_);
v_curr_x27_1044_ = lean_ctor_get(v_inst_1041_, 5);
lean_inc(v_curr_x27_1044_);
lean_dec_ref(v_inst_1041_);
lean_inc(v_a_1042_);
v___x_1045_ = lean_apply_1(v_hasNext_1043_, v_a_1042_);
v___x_1046_ = lean_unbox(v___x_1045_);
if (v___x_1046_ == 0)
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
lean_dec(v_curr_x27_1044_);
v___x_1047_ = lean_box(0);
v___x_1048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1048_, 0, v_a_1042_);
lean_ctor_set(v___x_1048_, 1, v___x_1047_);
return v___x_1048_;
}
else
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
lean_inc(v_a_1042_);
v___x_1049_ = lean_apply_2(v_curr_x27_1044_, v_a_1042_, lean_box(0));
v___x_1050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1049_);
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v_a_1042_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
return v___x_1051_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x3f___boxed(lean_object* v_00_u03b9_1052_, lean_object* v_elem_1053_, lean_object* v_idx_1054_, lean_object* v_inst_1055_, lean_object* v_inst_1056_, lean_object* v_inst_1057_, lean_object* v_a_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Std_Internal_Parsec_peek_x3f(v_00_u03b9_1052_, v_elem_1053_, v_idx_1054_, v_inst_1055_, v_inst_1056_, v_inst_1057_, v_a_1058_);
lean_dec_ref(v_inst_1056_);
lean_dec_ref(v_inst_1055_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekWhen_x3f___redArg(lean_object* v_inst_1060_, lean_object* v_p_1061_, lean_object* v_a_1062_){
_start:
{
lean_object* v_hasNext_1063_; lean_object* v_curr_x27_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
v_hasNext_1063_ = lean_ctor_get(v_inst_1060_, 3);
lean_inc_ref(v_hasNext_1063_);
v_curr_x27_1064_ = lean_ctor_get(v_inst_1060_, 5);
lean_inc(v_curr_x27_1064_);
lean_dec_ref(v_inst_1060_);
lean_inc(v_a_1062_);
v___x_1065_ = lean_apply_1(v_hasNext_1063_, v_a_1062_);
v___x_1066_ = lean_unbox(v___x_1065_);
if (v___x_1066_ == 0)
{
lean_object* v___x_1067_; lean_object* v___x_1068_; 
lean_dec(v_curr_x27_1064_);
lean_dec_ref(v_p_1061_);
v___x_1067_ = lean_box(0);
v___x_1068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1068_, 0, v_a_1062_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
return v___x_1068_;
}
else
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; 
lean_inc(v_a_1062_);
v___x_1069_ = lean_apply_2(v_curr_x27_1064_, v_a_1062_, lean_box(0));
lean_inc(v___x_1069_);
v___x_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
v___x_1071_ = lean_apply_1(v_p_1061_, v___x_1069_);
v___x_1072_ = lean_unbox(v___x_1071_);
if (v___x_1072_ == 0)
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
lean_dec_ref_known(v___x_1070_, 1);
v___x_1073_ = lean_box(0);
v___x_1074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1074_, 0, v_a_1062_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
return v___x_1074_;
}
else
{
lean_object* v___x_1075_; 
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v_a_1062_);
lean_ctor_set(v___x_1075_, 1, v___x_1070_);
return v___x_1075_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekWhen_x3f(lean_object* v_00_u03b9_1076_, lean_object* v_elem_1077_, lean_object* v_idx_1078_, lean_object* v_inst_1079_, lean_object* v_inst_1080_, lean_object* v_inst_1081_, lean_object* v_p_1082_, lean_object* v_a_1083_){
_start:
{
lean_object* v_hasNext_1084_; lean_object* v_curr_x27_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; 
v_hasNext_1084_ = lean_ctor_get(v_inst_1081_, 3);
lean_inc_ref(v_hasNext_1084_);
v_curr_x27_1085_ = lean_ctor_get(v_inst_1081_, 5);
lean_inc(v_curr_x27_1085_);
lean_dec_ref(v_inst_1081_);
lean_inc(v_a_1083_);
v___x_1086_ = lean_apply_1(v_hasNext_1084_, v_a_1083_);
v___x_1087_ = lean_unbox(v___x_1086_);
if (v___x_1087_ == 0)
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
lean_dec(v_curr_x27_1085_);
lean_dec_ref(v_p_1082_);
v___x_1088_ = lean_box(0);
v___x_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1089_, 0, v_a_1083_);
lean_ctor_set(v___x_1089_, 1, v___x_1088_);
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; uint8_t v___x_1093_; 
lean_inc(v_a_1083_);
v___x_1090_ = lean_apply_2(v_curr_x27_1085_, v_a_1083_, lean_box(0));
lean_inc(v___x_1090_);
v___x_1091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1090_);
v___x_1092_ = lean_apply_1(v_p_1082_, v___x_1090_);
v___x_1093_ = lean_unbox(v___x_1092_);
if (v___x_1093_ == 0)
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
lean_dec_ref_known(v___x_1091_, 1);
v___x_1094_ = lean_box(0);
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v_a_1083_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
return v___x_1095_;
}
else
{
lean_object* v___x_1096_; 
v___x_1096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1096_, 0, v_a_1083_);
lean_ctor_set(v___x_1096_, 1, v___x_1091_);
return v___x_1096_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekWhen_x3f___boxed(lean_object* v_00_u03b9_1097_, lean_object* v_elem_1098_, lean_object* v_idx_1099_, lean_object* v_inst_1100_, lean_object* v_inst_1101_, lean_object* v_inst_1102_, lean_object* v_p_1103_, lean_object* v_a_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Std_Internal_Parsec_peekWhen_x3f(v_00_u03b9_1097_, v_elem_1098_, v_idx_1099_, v_inst_1100_, v_inst_1101_, v_inst_1102_, v_p_1103_, v_a_1104_);
lean_dec_ref(v_inst_1101_);
lean_dec_ref(v_inst_1100_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x21___redArg(lean_object* v_inst_1106_, lean_object* v_a_1107_){
_start:
{
lean_object* v_hasNext_1108_; lean_object* v_curr_x27_1109_; lean_object* v___x_1110_; uint8_t v___x_1111_; 
v_hasNext_1108_ = lean_ctor_get(v_inst_1106_, 3);
lean_inc_ref(v_hasNext_1108_);
v_curr_x27_1109_ = lean_ctor_get(v_inst_1106_, 5);
lean_inc(v_curr_x27_1109_);
lean_dec_ref(v_inst_1106_);
lean_inc(v_a_1107_);
v___x_1110_ = lean_apply_1(v_hasNext_1108_, v_a_1107_);
v___x_1111_ = lean_unbox(v___x_1110_);
if (v___x_1111_ == 0)
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
lean_dec(v_curr_x27_1109_);
v___x_1112_ = lean_box(0);
v___x_1113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1113_, 0, v_a_1107_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
return v___x_1113_;
}
else
{
lean_object* v___x_1114_; lean_object* v___x_1115_; 
lean_inc(v_a_1107_);
v___x_1114_ = lean_apply_2(v_curr_x27_1109_, v_a_1107_, lean_box(0));
v___x_1115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1115_, 0, v_a_1107_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
return v___x_1115_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x21(lean_object* v_00_u03b9_1116_, lean_object* v_elem_1117_, lean_object* v_idx_1118_, lean_object* v_inst_1119_, lean_object* v_inst_1120_, lean_object* v_inst_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v_hasNext_1123_; lean_object* v_curr_x27_1124_; lean_object* v___x_1125_; uint8_t v___x_1126_; 
v_hasNext_1123_ = lean_ctor_get(v_inst_1121_, 3);
lean_inc_ref(v_hasNext_1123_);
v_curr_x27_1124_ = lean_ctor_get(v_inst_1121_, 5);
lean_inc(v_curr_x27_1124_);
lean_dec_ref(v_inst_1121_);
lean_inc(v_a_1122_);
v___x_1125_ = lean_apply_1(v_hasNext_1123_, v_a_1122_);
v___x_1126_ = lean_unbox(v___x_1125_);
if (v___x_1126_ == 0)
{
lean_object* v___x_1127_; lean_object* v___x_1128_; 
lean_dec(v_curr_x27_1124_);
v___x_1127_ = lean_box(0);
v___x_1128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1128_, 0, v_a_1122_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
return v___x_1128_;
}
else
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
lean_inc(v_a_1122_);
v___x_1129_ = lean_apply_2(v_curr_x27_1124_, v_a_1122_, lean_box(0));
v___x_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1130_, 0, v_a_1122_);
lean_ctor_set(v___x_1130_, 1, v___x_1129_);
return v___x_1130_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peek_x21___boxed(lean_object* v_00_u03b9_1131_, lean_object* v_elem_1132_, lean_object* v_idx_1133_, lean_object* v_inst_1134_, lean_object* v_inst_1135_, lean_object* v_inst_1136_, lean_object* v_a_1137_){
_start:
{
lean_object* v_res_1138_; 
v_res_1138_ = l_Std_Internal_Parsec_peek_x21(v_00_u03b9_1131_, v_elem_1132_, v_idx_1133_, v_inst_1134_, v_inst_1135_, v_inst_1136_, v_a_1137_);
lean_dec_ref(v_inst_1135_);
lean_dec_ref(v_inst_1134_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekD___redArg(lean_object* v_inst_1139_, lean_object* v_default_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v_hasNext_1142_; lean_object* v_curr_x27_1143_; lean_object* v___x_1144_; uint8_t v___x_1145_; 
v_hasNext_1142_ = lean_ctor_get(v_inst_1139_, 3);
lean_inc_ref(v_hasNext_1142_);
v_curr_x27_1143_ = lean_ctor_get(v_inst_1139_, 5);
lean_inc(v_curr_x27_1143_);
lean_dec_ref(v_inst_1139_);
lean_inc(v_a_1141_);
v___x_1144_ = lean_apply_1(v_hasNext_1142_, v_a_1141_);
v___x_1145_ = lean_unbox(v___x_1144_);
if (v___x_1145_ == 0)
{
lean_object* v___x_1146_; 
lean_dec(v_curr_x27_1143_);
v___x_1146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1146_, 0, v_a_1141_);
lean_ctor_set(v___x_1146_, 1, v_default_1140_);
return v___x_1146_;
}
else
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
lean_dec(v_default_1140_);
lean_inc(v_a_1141_);
v___x_1147_ = lean_apply_2(v_curr_x27_1143_, v_a_1141_, lean_box(0));
v___x_1148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1148_, 0, v_a_1141_);
lean_ctor_set(v___x_1148_, 1, v___x_1147_);
return v___x_1148_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekD(lean_object* v_00_u03b9_1149_, lean_object* v_elem_1150_, lean_object* v_idx_1151_, lean_object* v_inst_1152_, lean_object* v_inst_1153_, lean_object* v_inst_1154_, lean_object* v_default_1155_, lean_object* v_a_1156_){
_start:
{
lean_object* v_hasNext_1157_; lean_object* v_curr_x27_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; 
v_hasNext_1157_ = lean_ctor_get(v_inst_1154_, 3);
lean_inc_ref(v_hasNext_1157_);
v_curr_x27_1158_ = lean_ctor_get(v_inst_1154_, 5);
lean_inc(v_curr_x27_1158_);
lean_dec_ref(v_inst_1154_);
lean_inc(v_a_1156_);
v___x_1159_ = lean_apply_1(v_hasNext_1157_, v_a_1156_);
v___x_1160_ = lean_unbox(v___x_1159_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; 
lean_dec(v_curr_x27_1158_);
v___x_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1161_, 0, v_a_1156_);
lean_ctor_set(v___x_1161_, 1, v_default_1155_);
return v___x_1161_;
}
else
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
lean_dec(v_default_1155_);
lean_inc(v_a_1156_);
v___x_1162_ = lean_apply_2(v_curr_x27_1158_, v_a_1156_, lean_box(0));
v___x_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1163_, 0, v_a_1156_);
lean_ctor_set(v___x_1163_, 1, v___x_1162_);
return v___x_1163_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_peekD___boxed(lean_object* v_00_u03b9_1164_, lean_object* v_elem_1165_, lean_object* v_idx_1166_, lean_object* v_inst_1167_, lean_object* v_inst_1168_, lean_object* v_inst_1169_, lean_object* v_default_1170_, lean_object* v_a_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Std_Internal_Parsec_peekD(v_00_u03b9_1164_, v_elem_1165_, v_idx_1166_, v_inst_1167_, v_inst_1168_, v_inst_1169_, v_default_1170_, v_a_1171_);
lean_dec_ref(v_inst_1168_);
lean_dec_ref(v_inst_1167_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_skip___redArg(lean_object* v_inst_1173_, lean_object* v_a_1174_){
_start:
{
lean_object* v_hasNext_1175_; lean_object* v_next_x27_1176_; lean_object* v___x_1177_; uint8_t v___x_1178_; 
v_hasNext_1175_ = lean_ctor_get(v_inst_1173_, 3);
lean_inc_ref(v_hasNext_1175_);
v_next_x27_1176_ = lean_ctor_get(v_inst_1173_, 4);
lean_inc(v_next_x27_1176_);
lean_dec_ref(v_inst_1173_);
lean_inc(v_a_1174_);
v___x_1177_ = lean_apply_1(v_hasNext_1175_, v_a_1174_);
v___x_1178_ = lean_unbox(v___x_1177_);
if (v___x_1178_ == 0)
{
lean_object* v___x_1179_; lean_object* v___x_1180_; 
lean_dec(v_next_x27_1176_);
v___x_1179_ = lean_box(0);
v___x_1180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1180_, 0, v_a_1174_);
lean_ctor_set(v___x_1180_, 1, v___x_1179_);
return v___x_1180_;
}
else
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1181_ = lean_apply_2(v_next_x27_1176_, v_a_1174_, lean_box(0));
v___x_1182_ = lean_box(0);
v___x_1183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1181_);
lean_ctor_set(v___x_1183_, 1, v___x_1182_);
return v___x_1183_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_skip(lean_object* v_00_u03b9_1184_, lean_object* v_elem_1185_, lean_object* v_idx_1186_, lean_object* v_inst_1187_, lean_object* v_inst_1188_, lean_object* v_inst_1189_, lean_object* v_a_1190_){
_start:
{
lean_object* v_hasNext_1191_; lean_object* v_next_x27_1192_; lean_object* v___x_1193_; uint8_t v___x_1194_; 
v_hasNext_1191_ = lean_ctor_get(v_inst_1189_, 3);
lean_inc_ref(v_hasNext_1191_);
v_next_x27_1192_ = lean_ctor_get(v_inst_1189_, 4);
lean_inc(v_next_x27_1192_);
lean_dec_ref(v_inst_1189_);
lean_inc(v_a_1190_);
v___x_1193_ = lean_apply_1(v_hasNext_1191_, v_a_1190_);
v___x_1194_ = lean_unbox(v___x_1193_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
lean_dec(v_next_x27_1192_);
v___x_1195_ = lean_box(0);
v___x_1196_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1196_, 0, v_a_1190_);
lean_ctor_set(v___x_1196_, 1, v___x_1195_);
return v___x_1196_;
}
else
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1197_ = lean_apply_2(v_next_x27_1192_, v_a_1190_, lean_box(0));
v___x_1198_ = lean_box(0);
v___x_1199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1197_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
return v___x_1199_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_skip___boxed(lean_object* v_00_u03b9_1200_, lean_object* v_elem_1201_, lean_object* v_idx_1202_, lean_object* v_inst_1203_, lean_object* v_inst_1204_, lean_object* v_inst_1205_, lean_object* v_a_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l_Std_Internal_Parsec_skip(v_00_u03b9_1200_, v_elem_1201_, v_idx_1202_, v_inst_1203_, v_inst_1204_, v_inst_1205_, v_a_1206_);
lean_dec_ref(v_inst_1204_);
lean_dec_ref(v_inst_1203_);
return v_res_1207_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___redArg(lean_object* v_inst_1208_, lean_object* v_inst_1209_, lean_object* v_p_1210_, lean_object* v_acc_1211_, lean_object* v_a_1212_){
_start:
{
lean_object* v___x_1213_; 
lean_inc_ref(v_p_1210_);
lean_inc(v_a_1212_);
v___x_1213_ = lean_apply_1(v_p_1210_, v_a_1212_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_pos_1214_; lean_object* v_res_1215_; uint32_t v___x_1216_; lean_object* v___x_1217_; 
lean_dec(v_a_1212_);
v_pos_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_pos_1214_);
v_res_1215_ = lean_ctor_get(v___x_1213_, 1);
lean_inc(v_res_1215_);
lean_dec_ref_known(v___x_1213_, 2);
v___x_1216_ = lean_unbox_uint32(v_res_1215_);
lean_dec(v_res_1215_);
v___x_1217_ = lean_string_push(v_acc_1211_, v___x_1216_);
v_acc_1211_ = v___x_1217_;
v_a_1212_ = v_pos_1214_;
goto _start;
}
else
{
lean_object* v_pos_1219_; lean_object* v_err_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1235_; 
lean_dec_ref(v_p_1210_);
v_pos_1219_ = lean_ctor_get(v___x_1213_, 0);
v_err_1220_ = lean_ctor_get(v___x_1213_, 1);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1222_ = v___x_1213_;
v_isShared_1223_ = v_isSharedCheck_1235_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_err_1220_);
lean_inc(v_pos_1219_);
lean_dec(v___x_1213_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1235_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v_pos_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; uint8_t v___x_1228_; 
v_pos_1224_ = lean_ctor_get(v_inst_1209_, 0);
lean_inc_n(v_pos_1224_, 2);
lean_dec_ref(v_inst_1209_);
v___x_1225_ = lean_apply_1(v_pos_1224_, v_a_1212_);
lean_inc(v_pos_1219_);
v___x_1226_ = lean_apply_1(v_pos_1224_, v_pos_1219_);
v___x_1227_ = lean_apply_2(v_inst_1208_, v___x_1225_, v___x_1226_);
v___x_1228_ = lean_unbox(v___x_1227_);
if (v___x_1228_ == 0)
{
lean_object* v___x_1230_; 
lean_dec_ref(v_acc_1211_);
if (v_isShared_1223_ == 0)
{
v___x_1230_ = v___x_1222_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_pos_1219_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_err_1220_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
else
{
lean_object* v___x_1233_; 
lean_dec(v_err_1220_);
if (v_isShared_1223_ == 0)
{
lean_ctor_set_tag(v___x_1222_, 0);
lean_ctor_set(v___x_1222_, 1, v_acc_1211_);
v___x_1233_ = v___x_1222_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_pos_1219_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v_acc_1211_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore(lean_object* v_00_u03b9_1236_, lean_object* v_elem_1237_, lean_object* v_idx_1238_, lean_object* v_inst_1239_, lean_object* v_inst_1240_, lean_object* v_inst_1241_, lean_object* v_p_1242_, lean_object* v_acc_1243_, lean_object* v_a_1244_){
_start:
{
lean_object* v___x_1245_; 
v___x_1245_ = l_Std_Internal_Parsec_manyCharsCore___redArg(v_inst_1239_, v_inst_1241_, v_p_1242_, v_acc_1243_, v_a_1244_);
return v___x_1245_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCharsCore___boxed(lean_object* v_00_u03b9_1246_, lean_object* v_elem_1247_, lean_object* v_idx_1248_, lean_object* v_inst_1249_, lean_object* v_inst_1250_, lean_object* v_inst_1251_, lean_object* v_p_1252_, lean_object* v_acc_1253_, lean_object* v_a_1254_){
_start:
{
lean_object* v_res_1255_; 
v_res_1255_ = l_Std_Internal_Parsec_manyCharsCore(v_00_u03b9_1246_, v_elem_1247_, v_idx_1248_, v_inst_1249_, v_inst_1250_, v_inst_1251_, v_p_1252_, v_acc_1253_, v_a_1254_);
lean_dec_ref(v_inst_1250_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyChars___redArg(lean_object* v_inst_1256_, lean_object* v_inst_1257_, lean_object* v_p_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = ((lean_object*)(l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__0));
v___x_1261_ = l_Std_Internal_Parsec_manyCharsCore___redArg(v_inst_1256_, v_inst_1257_, v_p_1258_, v___x_1260_, v_a_1259_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyChars(lean_object* v_00_u03b9_1262_, lean_object* v_elem_1263_, lean_object* v_idx_1264_, lean_object* v_inst_1265_, lean_object* v_inst_1266_, lean_object* v_inst_1267_, lean_object* v_p_1268_, lean_object* v_a_1269_){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = ((lean_object*)(l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__0));
v___x_1271_ = l_Std_Internal_Parsec_manyCharsCore___redArg(v_inst_1265_, v_inst_1267_, v_p_1268_, v___x_1270_, v_a_1269_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyChars___boxed(lean_object* v_00_u03b9_1272_, lean_object* v_elem_1273_, lean_object* v_idx_1274_, lean_object* v_inst_1275_, lean_object* v_inst_1276_, lean_object* v_inst_1277_, lean_object* v_p_1278_, lean_object* v_a_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Std_Internal_Parsec_manyChars(v_00_u03b9_1272_, v_elem_1273_, v_idx_1274_, v_inst_1275_, v_inst_1276_, v_inst_1277_, v_p_1278_, v_a_1279_);
lean_dec_ref(v_inst_1276_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1Chars___redArg(lean_object* v_inst_1281_, lean_object* v_inst_1282_, lean_object* v_p_1283_, lean_object* v_a_1284_){
_start:
{
lean_object* v___x_1285_; 
lean_inc_ref(v_p_1283_);
v___x_1285_ = lean_apply_1(v_p_1283_, v_a_1284_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_pos_1286_; lean_object* v_res_1287_; lean_object* v___x_1288_; uint32_t v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v_pos_1286_ = lean_ctor_get(v___x_1285_, 0);
lean_inc(v_pos_1286_);
v_res_1287_ = lean_ctor_get(v___x_1285_, 1);
lean_inc(v_res_1287_);
lean_dec_ref_known(v___x_1285_, 2);
v___x_1288_ = ((lean_object*)(l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__0));
v___x_1289_ = lean_unbox_uint32(v_res_1287_);
lean_dec(v_res_1287_);
v___x_1290_ = lean_string_push(v___x_1288_, v___x_1289_);
v___x_1291_ = l_Std_Internal_Parsec_manyCharsCore___redArg(v_inst_1281_, v_inst_1282_, v_p_1283_, v___x_1290_, v_pos_1286_);
return v___x_1291_;
}
else
{
lean_object* v_pos_1292_; lean_object* v_err_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1300_; 
lean_dec_ref(v_p_1283_);
lean_dec_ref(v_inst_1282_);
lean_dec_ref(v_inst_1281_);
v_pos_1292_ = lean_ctor_get(v___x_1285_, 0);
v_err_1293_ = lean_ctor_get(v___x_1285_, 1);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1295_ = v___x_1285_;
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_err_1293_);
lean_inc(v_pos_1292_);
lean_dec(v___x_1285_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1298_; 
if (v_isShared_1296_ == 0)
{
v___x_1298_ = v___x_1295_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_pos_1292_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v_err_1293_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1Chars(lean_object* v_00_u03b9_1301_, lean_object* v_elem_1302_, lean_object* v_idx_1303_, lean_object* v_inst_1304_, lean_object* v_inst_1305_, lean_object* v_inst_1306_, lean_object* v_p_1307_, lean_object* v_a_1308_){
_start:
{
lean_object* v___x_1309_; 
lean_inc_ref(v_p_1307_);
v___x_1309_ = lean_apply_1(v_p_1307_, v_a_1308_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_pos_1310_; lean_object* v_res_1311_; lean_object* v___x_1312_; uint32_t v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v_pos_1310_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_pos_1310_);
v_res_1311_ = lean_ctor_get(v___x_1309_, 1);
lean_inc(v_res_1311_);
lean_dec_ref_known(v___x_1309_, 2);
v___x_1312_ = ((lean_object*)(l_Std_Internal_Parsec_instInhabited___redArg___lam__0___closed__0));
v___x_1313_ = lean_unbox_uint32(v_res_1311_);
lean_dec(v_res_1311_);
v___x_1314_ = lean_string_push(v___x_1312_, v___x_1313_);
v___x_1315_ = l_Std_Internal_Parsec_manyCharsCore___redArg(v_inst_1304_, v_inst_1306_, v_p_1307_, v___x_1314_, v_pos_1310_);
return v___x_1315_;
}
else
{
lean_object* v_pos_1316_; lean_object* v_err_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1324_; 
lean_dec_ref(v_p_1307_);
lean_dec_ref(v_inst_1306_);
lean_dec_ref(v_inst_1304_);
v_pos_1316_ = lean_ctor_get(v___x_1309_, 0);
v_err_1317_ = lean_ctor_get(v___x_1309_, 1);
v_isSharedCheck_1324_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1319_ = v___x_1309_;
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_err_1317_);
lean_inc(v_pos_1316_);
lean_dec(v___x_1309_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1324_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1322_; 
if (v_isShared_1320_ == 0)
{
v___x_1322_ = v___x_1319_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v_pos_1316_);
lean_ctor_set(v_reuseFailAlloc_1323_, 1, v_err_1317_);
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
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_many1Chars___boxed(lean_object* v_00_u03b9_1325_, lean_object* v_elem_1326_, lean_object* v_idx_1327_, lean_object* v_inst_1328_, lean_object* v_inst_1329_, lean_object* v_inst_1330_, lean_object* v_p_1331_, lean_object* v_a_1332_){
_start:
{
lean_object* v_res_1333_; 
v_res_1333_ = l_Std_Internal_Parsec_many1Chars(v_00_u03b9_1325_, v_elem_1326_, v_idx_1327_, v_inst_1328_, v_inst_1329_, v_inst_1330_, v_p_1331_, v_a_1332_);
lean_dec_ref(v_inst_1329_);
return v_res_1333_;
}
}
lean_object* runtime_initialize_Init_NotationExtra(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Std_Internal_Parsec_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Std_Internal_Parsec_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_NotationExtra(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Std_Internal_Parsec_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Internal_Parsec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Std_Internal_Parsec_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Std_Internal_Parsec_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
