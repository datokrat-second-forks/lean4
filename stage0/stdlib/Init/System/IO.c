// Lean compiler output
// Module: Init.System.IO
// Imports: public import Init.Control.Do public import Init.System.IOError public import Init.System.FilePath import Init.Data.String.TakeDrop import Init.Data.String.Search public import Init.Data.Ord.Basic public import Init.Data.String.Basic public import Init.Transport import Init.Data.List.MapIdx import Init.Data.Ord.UInt import Init.Data.ToString.Macro import Init.Data.List.Impl import Init.Data.Int.Repr
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
lean_object* l_EST_tryCatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EST_throw___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_uint64_to_nat(uint64_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_mk_empty_byte_array(lean_object*);
uint8_t l_ByteArray_isEmpty(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_System_FilePath_parent(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_EST_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_byte_array_get(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_task_map(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Init_Data_List_Impl_0__List_eraseIdxTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_prev_x3f(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* lean_dbg_sleep(uint32_t, lean_object*);
lean_object* l_instMonadExceptOfMonadExceptOf___redArg(lean_object*);
lean_object* l_MonadExcept_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EST_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_RealWorld_nonemptyType;
LEAN_EXPORT lean_object* l_BaseIO_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_mk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_mk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_mk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toST___redArg(lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toST___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toST(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toST___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadBaseIO___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_BaseIO_mk___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_instMonadBaseIO___lam__0___closed__0 = (const lean_object*)&l_instMonadBaseIO___lam__0___closed__0_value;
static const lean_closure_object l_instMonadBaseIO___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_BaseIO_toST___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_instMonadBaseIO___lam__0___closed__1 = (const lean_object*)&l_instMonadBaseIO___lam__0___closed__1_value;
static const lean_ctor_object l_instMonadBaseIO___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadBaseIO___lam__0___closed__0_value),((lean_object*)&l_instMonadBaseIO___lam__0___closed__1_value)}};
static const lean_object* l_instMonadBaseIO___lam__0___closed__2 = (const lean_object*)&l_instMonadBaseIO___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__7(lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadBaseIO___closed__0 = (const lean_object*)&l_instMonadBaseIO___closed__0_value;
static const lean_closure_object l_instMonadBaseIO___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__0_value)} };
static const lean_object* l_instMonadBaseIO___closed__1 = (const lean_object*)&l_instMonadBaseIO___closed__1_value;
static const lean_closure_object l_instMonadBaseIO___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__4___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__0_value)} };
static const lean_object* l_instMonadBaseIO___closed__2 = (const lean_object*)&l_instMonadBaseIO___closed__2_value;
static const lean_closure_object l_instMonadBaseIO___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__6___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__0_value)} };
static const lean_object* l_instMonadBaseIO___closed__3 = (const lean_object*)&l_instMonadBaseIO___closed__3_value;
static const lean_closure_object l_instMonadBaseIO___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__8___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__0_value)} };
static const lean_object* l_instMonadBaseIO___closed__4 = (const lean_object*)&l_instMonadBaseIO___closed__4_value;
static const lean_closure_object l_instMonadBaseIO___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__10___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__0_value)} };
static const lean_object* l_instMonadBaseIO___closed__5 = (const lean_object*)&l_instMonadBaseIO___closed__5_value;
static const lean_closure_object l_instMonadBaseIO___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__12___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__0_value)} };
static const lean_object* l_instMonadBaseIO___closed__6 = (const lean_object*)&l_instMonadBaseIO___closed__6_value;
static const lean_closure_object l_instMonadBaseIO___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__14___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__0_value)} };
static const lean_object* l_instMonadBaseIO___closed__7 = (const lean_object*)&l_instMonadBaseIO___closed__7_value;
static const lean_ctor_object l_instMonadBaseIO___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__3_value),((lean_object*)&l_instMonadBaseIO___closed__2_value)}};
static const lean_object* l_instMonadBaseIO___closed__8 = (const lean_object*)&l_instMonadBaseIO___closed__8_value;
static const lean_ctor_object l_instMonadBaseIO___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__8_value),((lean_object*)&l_instMonadBaseIO___closed__4_value),((lean_object*)&l_instMonadBaseIO___closed__5_value),((lean_object*)&l_instMonadBaseIO___closed__6_value),((lean_object*)&l_instMonadBaseIO___closed__7_value)}};
static const lean_object* l_instMonadBaseIO___closed__9 = (const lean_object*)&l_instMonadBaseIO___closed__9_value;
static const lean_ctor_object l_instMonadBaseIO___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__9_value),((lean_object*)&l_instMonadBaseIO___closed__1_value)}};
static const lean_object* l_instMonadBaseIO___closed__10 = (const lean_object*)&l_instMonadBaseIO___closed__10_value;
LEAN_EXPORT const lean_object* l_instMonadBaseIO = (const lean_object*)&l_instMonadBaseIO___closed__10_value;
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadFinallyBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadFinallyBaseIO___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__0_value)} };
static const lean_object* l_instMonadFinallyBaseIO___closed__0 = (const lean_object*)&l_instMonadFinallyBaseIO___closed__0_value;
LEAN_EXPORT const lean_object* l_instMonadFinallyBaseIO = (const lean_object*)&l_instMonadFinallyBaseIO___closed__0_value;
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadAttachBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadAttachBaseIO___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__0_value)} };
static const lean_object* l_instMonadAttachBaseIO___closed__0 = (const lean_object*)&l_instMonadAttachBaseIO___closed__0_value;
LEAN_EXPORT const lean_object* l_instMonadAttachBaseIO = (const lean_object*)&l_instMonadAttachBaseIO___closed__0_value;
LEAN_EXPORT lean_object* l_BaseIO_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_map___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_mk___redArg(lean_object*);
LEAN_EXPORT lean_object* l_EIO_mk___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_mk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toEST___redArg(lean_object*);
LEAN_EXPORT lean_object* l_EIO_toEST___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toEST(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toEST___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toEIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toEIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toEIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toEIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadLiftBaseIOEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadLiftBaseIOEIO___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadLiftBaseIOEIO___redArg___closed__0 = (const lean_object*)&l_instMonadLiftBaseIOEIO___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg();
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO(lean_object*);
LEAN_EXPORT lean_object* l_EIO_toBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_EIO_toBaseIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toBaseIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_catchExceptions___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_catchExceptions___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_catchExceptions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_catchExceptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadEIO___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EIO_mk___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_instMonadEIO___redArg___lam__0___closed__0 = (const lean_object*)&l_instMonadEIO___redArg___lam__0___closed__0_value;
static const lean_closure_object l_instMonadEIO___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EIO_toEST___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_instMonadEIO___redArg___lam__0___closed__1 = (const lean_object*)&l_instMonadEIO___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_instMonadEIO___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___lam__0___closed__0_value),((lean_object*)&l_instMonadEIO___redArg___lam__0___closed__1_value)}};
static const lean_object* l_instMonadEIO___redArg___lam__0___closed__2 = (const lean_object*)&l_instMonadEIO___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__7(lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__7___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadEIO___redArg___closed__0 = (const lean_object*)&l_instMonadEIO___redArg___closed__0_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value)} };
static const lean_object* l_instMonadEIO___redArg___closed__1 = (const lean_object*)&l_instMonadEIO___redArg___closed__1_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value)} };
static const lean_object* l_instMonadEIO___redArg___closed__2 = (const lean_object*)&l_instMonadEIO___redArg___closed__2_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value)} };
static const lean_object* l_instMonadEIO___redArg___closed__3 = (const lean_object*)&l_instMonadEIO___redArg___closed__3_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__8___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value)} };
static const lean_object* l_instMonadEIO___redArg___closed__4 = (const lean_object*)&l_instMonadEIO___redArg___closed__4_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value)} };
static const lean_object* l_instMonadEIO___redArg___closed__5 = (const lean_object*)&l_instMonadEIO___redArg___closed__5_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__12___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value)} };
static const lean_object* l_instMonadEIO___redArg___closed__6 = (const lean_object*)&l_instMonadEIO___redArg___closed__6_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__14___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value)} };
static const lean_object* l_instMonadEIO___redArg___closed__7 = (const lean_object*)&l_instMonadEIO___redArg___closed__7_value;
static const lean_ctor_object l_instMonadEIO___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__3_value),((lean_object*)&l_instMonadEIO___redArg___closed__2_value)}};
static const lean_object* l_instMonadEIO___redArg___closed__8 = (const lean_object*)&l_instMonadEIO___redArg___closed__8_value;
static const lean_ctor_object l_instMonadEIO___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__8_value),((lean_object*)&l_instMonadEIO___redArg___closed__4_value),((lean_object*)&l_instMonadEIO___redArg___closed__5_value),((lean_object*)&l_instMonadEIO___redArg___closed__6_value),((lean_object*)&l_instMonadEIO___redArg___closed__7_value)}};
static const lean_object* l_instMonadEIO___redArg___closed__9 = (const lean_object*)&l_instMonadEIO___redArg___closed__9_value;
static const lean_ctor_object l_instMonadEIO___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__9_value),((lean_object*)&l_instMonadEIO___redArg___closed__1_value)}};
static const lean_object* l_instMonadEIO___redArg___closed__10 = (const lean_object*)&l_instMonadEIO___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_instMonadEIO___redArg();
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___boxed(lean_object*);
static lean_once_cell_t l_instMonadEIO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMonadEIO___closed__0;
LEAN_EXPORT lean_object* l_instMonadEIO(lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadFinallyEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadFinallyEIO___redArg___lam__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value)} };
static const lean_object* l_instMonadFinallyEIO___redArg___closed__0 = (const lean_object*)&l_instMonadFinallyEIO___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg();
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___boxed(lean_object*);
static lean_once_cell_t l_instMonadFinallyEIO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMonadFinallyEIO___closed__0;
LEAN_EXPORT lean_object* l_instMonadFinallyEIO(lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadAttachEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadAttachEIO___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value)} };
static const lean_object* l_instMonadAttachEIO___redArg___closed__0 = (const lean_object*)&l_instMonadAttachEIO___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg();
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___boxed(lean_object*);
static lean_once_cell_t l_instMonadAttachEIO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMonadAttachEIO___closed__0;
LEAN_EXPORT lean_object* l_instMonadAttachEIO(lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadExceptOfEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadExceptOfEIO___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value)} };
static const lean_object* l_instMonadExceptOfEIO___redArg___closed__0 = (const lean_object*)&l_instMonadExceptOfEIO___redArg___closed__0_value;
static const lean_closure_object l_instMonadExceptOfEIO___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadExceptOfEIO___redArg___lam__2___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value)} };
static const lean_object* l_instMonadExceptOfEIO___redArg___closed__1 = (const lean_object*)&l_instMonadExceptOfEIO___redArg___closed__1_value;
static const lean_ctor_object l_instMonadExceptOfEIO___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadExceptOfEIO___redArg___closed__0_value),((lean_object*)&l_instMonadExceptOfEIO___redArg___closed__1_value)}};
static const lean_object* l_instMonadExceptOfEIO___redArg___closed__2 = (const lean_object*)&l_instMonadExceptOfEIO___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg();
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___boxed(lean_object*);
static lean_once_cell_t l_instMonadExceptOfEIO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instMonadExceptOfEIO___closed__0;
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO(lean_object*);
static lean_once_cell_t l_instOrElseEIO___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instOrElseEIO___redArg___closed__0;
static lean_once_cell_t l_instOrElseEIO___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instOrElseEIO___redArg___closed__1;
LEAN_EXPORT lean_object* l_instOrElseEIO___redArg();
LEAN_EXPORT lean_object* l_instOrElseEIO___redArg___boxed(lean_object*);
static lean_once_cell_t l_instOrElseEIO___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_instOrElseEIO___closed__0;
LEAN_EXPORT lean_object* l_instOrElseEIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedEIO___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedEIO___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedEIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedEIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_map___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_throw___redArg(lean_object*);
LEAN_EXPORT lean_object* l_EIO_throw___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_throw(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_throw___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_tryCatch___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_tryCatch___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_tryCatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_tryCatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_ofExcept___redArg(lean_object*);
LEAN_EXPORT lean_object* l_EIO_ofExcept___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_ofExcept(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_ofExcept___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_adapt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_adapt___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_adapt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_adapt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_adaptExcept___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_adaptExcept___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_adaptExcept(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_adaptExcept___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toIO___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_toIO___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toIO___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toIO___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toIO(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toIO_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_EIO_toIO_x27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toIO_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_toIO_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_toEIO___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_toEIO___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_toEIO(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_toEIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unsafeBaseIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_unsafeBaseIO(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unsafeEIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_unsafeEIO(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_unsafeIO___redArg(lean_object*);
LEAN_EXPORT lean_object* l_unsafeIO(lean_object*, lean_object*);
lean_object* lean_io_timeit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_timeit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_allocprof(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_allocprof___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_io_initializing();
LEAN_EXPORT lean_object* l_IO_initializing___boxed(lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_map_task(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_BaseIO_mapTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_bind_task(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_BaseIO_bindTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_BaseIO_chainTask___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_chainTask(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_BaseIO_chainTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_mapTasks___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_BaseIO_mapTasks___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_mapTasks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_BaseIO_mapTasks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_asTask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_asTask___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_asTask(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_mapTask(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_EIO_mapTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_bindTask(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_EIO_bindTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_chainTask(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_EIO_chainTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_EIO_mapTasks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_EIO_mapTasks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_lazyPure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_lazyPure___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_lazyPure(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_lazyPure___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now();
LEAN_EXPORT lean_object* l_IO_monoMsNow___boxed(lean_object*);
lean_object* lean_io_mono_nanos_now();
LEAN_EXPORT lean_object* l_IO_monoNanosNow___boxed(lean_object*);
lean_object* lean_io_get_random_bytes(size_t);
LEAN_EXPORT lean_object* l_IO_getRandomBytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_sleep___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_sleep___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_sleep(uint32_t);
LEAN_EXPORT lean_object* l_IO_sleep___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_asTask___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_asTask___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_asTask(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_mapTask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_mapTask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_mapTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_mapTask___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_mapTask(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_mapTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_bindTask___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_bindTask___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_bindTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_bindTask___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_bindTask(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_bindTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_chainTask___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_chainTask___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_chainTask(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_chainTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_mapTasks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_mapTasks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_io_check_canceled();
LEAN_EXPORT lean_object* l_IO_checkCanceled___boxed(lean_object*);
lean_object* lean_io_cancel(lean_object*);
LEAN_EXPORT lean_object* l_IO_cancel___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_IO_TaskState_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_IO_instInhabitedTaskState_default;
LEAN_EXPORT uint8_t l_IO_instInhabitedTaskState;
static const lean_string_object l_IO_instReprTaskState_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "IO.TaskState.waiting"};
static const lean_object* l_IO_instReprTaskState_repr___closed__0 = (const lean_object*)&l_IO_instReprTaskState_repr___closed__0_value;
static const lean_ctor_object l_IO_instReprTaskState_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_instReprTaskState_repr___closed__0_value)}};
static const lean_object* l_IO_instReprTaskState_repr___closed__1 = (const lean_object*)&l_IO_instReprTaskState_repr___closed__1_value;
static const lean_string_object l_IO_instReprTaskState_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "IO.TaskState.running"};
static const lean_object* l_IO_instReprTaskState_repr___closed__2 = (const lean_object*)&l_IO_instReprTaskState_repr___closed__2_value;
static const lean_ctor_object l_IO_instReprTaskState_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_instReprTaskState_repr___closed__2_value)}};
static const lean_object* l_IO_instReprTaskState_repr___closed__3 = (const lean_object*)&l_IO_instReprTaskState_repr___closed__3_value;
static const lean_string_object l_IO_instReprTaskState_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "IO.TaskState.finished"};
static const lean_object* l_IO_instReprTaskState_repr___closed__4 = (const lean_object*)&l_IO_instReprTaskState_repr___closed__4_value;
static const lean_ctor_object l_IO_instReprTaskState_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_instReprTaskState_repr___closed__4_value)}};
static const lean_object* l_IO_instReprTaskState_repr___closed__5 = (const lean_object*)&l_IO_instReprTaskState_repr___closed__5_value;
static lean_once_cell_t l_IO_instReprTaskState_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_instReprTaskState_repr___closed__6;
static lean_once_cell_t l_IO_instReprTaskState_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_instReprTaskState_repr___closed__7;
LEAN_EXPORT lean_object* l_IO_instReprTaskState_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_instReprTaskState_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_instReprTaskState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instReprTaskState_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_instReprTaskState___closed__0 = (const lean_object*)&l_IO_instReprTaskState___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_instReprTaskState = (const lean_object*)&l_IO_instReprTaskState___closed__0_value;
LEAN_EXPORT uint8_t l_IO_TaskState_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_IO_TaskState_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_IO_instDecidableEqTaskState(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_IO_instDecidableEqTaskState___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_IO_instOrdTaskState_ord(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_IO_instOrdTaskState_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_instOrdTaskState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instOrdTaskState_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_instOrdTaskState___closed__0 = (const lean_object*)&l_IO_instOrdTaskState___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_instOrdTaskState = (const lean_object*)&l_IO_instOrdTaskState___closed__0_value;
LEAN_EXPORT lean_object* l_IO_instLTTaskState;
LEAN_EXPORT lean_object* l_IO_instLETaskState;
LEAN_EXPORT uint8_t l_IO_instMinTaskState___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_IO_instMinTaskState___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_instMinTaskState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMinTaskState___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_instMinTaskState___closed__0 = (const lean_object*)&l_IO_instMinTaskState___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_instMinTaskState = (const lean_object*)&l_IO_instMinTaskState___closed__0_value;
LEAN_EXPORT uint8_t l_IO_instMaxTaskState___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_IO_instMaxTaskState___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_instMaxTaskState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMaxTaskState___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_instMaxTaskState___closed__0 = (const lean_object*)&l_IO_instMaxTaskState___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_instMaxTaskState = (const lean_object*)&l_IO_instMaxTaskState___closed__0_value;
static const lean_string_object l_IO_TaskState_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "waiting"};
static const lean_object* l_IO_TaskState_toString___closed__0 = (const lean_object*)&l_IO_TaskState_toString___closed__0_value;
static const lean_string_object l_IO_TaskState_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "running"};
static const lean_object* l_IO_TaskState_toString___closed__1 = (const lean_object*)&l_IO_TaskState_toString___closed__1_value;
static const lean_string_object l_IO_TaskState_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "finished"};
static const lean_object* l_IO_TaskState_toString___closed__2 = (const lean_object*)&l_IO_TaskState_toString___closed__2_value;
LEAN_EXPORT lean_object* l_IO_TaskState_toString(uint8_t);
LEAN_EXPORT lean_object* l_IO_TaskState_toString___boxed(lean_object*);
static const lean_closure_object l_IO_instToStringTaskState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_TaskState_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_instToStringTaskState___closed__0 = (const lean_object*)&l_IO_instToStringTaskState___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_instToStringTaskState = (const lean_object*)&l_IO_instToStringTaskState___closed__0_value;
uint8_t lean_io_get_task_state(lean_object*);
LEAN_EXPORT lean_object* l_IO_getTaskState___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_IO_hasFinished___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_hasFinished___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_IO_hasFinished(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_hasFinished___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_wait(lean_object*);
LEAN_EXPORT lean_object* l_IO_wait___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_IO_waitAny___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_IO_waitAny___auto__1___closed__0 = (const lean_object*)&l_IO_waitAny___auto__1___closed__0_value;
static const lean_string_object l_IO_waitAny___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_IO_waitAny___auto__1___closed__1 = (const lean_object*)&l_IO_waitAny___auto__1___closed__1_value;
static const lean_string_object l_IO_waitAny___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_IO_waitAny___auto__1___closed__2 = (const lean_object*)&l_IO_waitAny___auto__1___closed__2_value;
static const lean_string_object l_IO_waitAny___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_IO_waitAny___auto__1___closed__3 = (const lean_object*)&l_IO_waitAny___auto__1___closed__3_value;
static const lean_ctor_object l_IO_waitAny___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_waitAny___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__4_value_aux_0),((lean_object*)&l_IO_waitAny___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__4_value_aux_1),((lean_object*)&l_IO_waitAny___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__4_value_aux_2),((lean_object*)&l_IO_waitAny___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_IO_waitAny___auto__1___closed__4 = (const lean_object*)&l_IO_waitAny___auto__1___closed__4_value;
static const lean_array_object l_IO_waitAny___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_IO_waitAny___auto__1___closed__5 = (const lean_object*)&l_IO_waitAny___auto__1___closed__5_value;
static const lean_string_object l_IO_waitAny___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_IO_waitAny___auto__1___closed__6 = (const lean_object*)&l_IO_waitAny___auto__1___closed__6_value;
static const lean_ctor_object l_IO_waitAny___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_waitAny___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__7_value_aux_0),((lean_object*)&l_IO_waitAny___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__7_value_aux_1),((lean_object*)&l_IO_waitAny___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__7_value_aux_2),((lean_object*)&l_IO_waitAny___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_IO_waitAny___auto__1___closed__7 = (const lean_object*)&l_IO_waitAny___auto__1___closed__7_value;
static const lean_string_object l_IO_waitAny___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_IO_waitAny___auto__1___closed__8 = (const lean_object*)&l_IO_waitAny___auto__1___closed__8_value;
static const lean_ctor_object l_IO_waitAny___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_waitAny___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_IO_waitAny___auto__1___closed__9 = (const lean_object*)&l_IO_waitAny___auto__1___closed__9_value;
static const lean_string_object l_IO_waitAny___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_IO_waitAny___auto__1___closed__10 = (const lean_object*)&l_IO_waitAny___auto__1___closed__10_value;
static const lean_ctor_object l_IO_waitAny___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_waitAny___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__11_value_aux_0),((lean_object*)&l_IO_waitAny___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__11_value_aux_1),((lean_object*)&l_IO_waitAny___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__11_value_aux_2),((lean_object*)&l_IO_waitAny___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_IO_waitAny___auto__1___closed__11 = (const lean_object*)&l_IO_waitAny___auto__1___closed__11_value;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__12;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__13;
static const lean_string_object l_IO_waitAny___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_IO_waitAny___auto__1___closed__14 = (const lean_object*)&l_IO_waitAny___auto__1___closed__14_value;
static const lean_string_object l_IO_waitAny___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_IO_waitAny___auto__1___closed__15 = (const lean_object*)&l_IO_waitAny___auto__1___closed__15_value;
static const lean_ctor_object l_IO_waitAny___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_waitAny___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__16_value_aux_0),((lean_object*)&l_IO_waitAny___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__16_value_aux_1),((lean_object*)&l_IO_waitAny___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__16_value_aux_2),((lean_object*)&l_IO_waitAny___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_IO_waitAny___auto__1___closed__16 = (const lean_object*)&l_IO_waitAny___auto__1___closed__16_value;
static const lean_string_object l_IO_waitAny___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Nat.zero_lt_succ"};
static const lean_object* l_IO_waitAny___auto__1___closed__17 = (const lean_object*)&l_IO_waitAny___auto__1___closed__17_value;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__18;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__19;
static const lean_string_object l_IO_waitAny___auto__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_IO_waitAny___auto__1___closed__20 = (const lean_object*)&l_IO_waitAny___auto__1___closed__20_value;
static const lean_string_object l_IO_waitAny___auto__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "zero_lt_succ"};
static const lean_object* l_IO_waitAny___auto__1___closed__21 = (const lean_object*)&l_IO_waitAny___auto__1___closed__21_value;
static const lean_ctor_object l_IO_waitAny___auto__1___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_waitAny___auto__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__22_value_aux_0),((lean_object*)&l_IO_waitAny___auto__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(139, 13, 209, 151, 253, 249, 15, 51)}};
static const lean_object* l_IO_waitAny___auto__1___closed__22 = (const lean_object*)&l_IO_waitAny___auto__1___closed__22_value;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__23;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__24;
static const lean_string_object l_IO_waitAny___auto__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_IO_waitAny___auto__1___closed__25 = (const lean_object*)&l_IO_waitAny___auto__1___closed__25_value;
static const lean_ctor_object l_IO_waitAny___auto__1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_waitAny___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__26_value_aux_0),((lean_object*)&l_IO_waitAny___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__26_value_aux_1),((lean_object*)&l_IO_waitAny___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_IO_waitAny___auto__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_IO_waitAny___auto__1___closed__26_value_aux_2),((lean_object*)&l_IO_waitAny___auto__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_IO_waitAny___auto__1___closed__26 = (const lean_object*)&l_IO_waitAny___auto__1___closed__26_value;
static const lean_string_object l_IO_waitAny___auto__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_IO_waitAny___auto__1___closed__27 = (const lean_object*)&l_IO_waitAny___auto__1___closed__27_value;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__28;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__29;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__30;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__31;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__32;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__33;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__34;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__35;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__36;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__37;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__38;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__39;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__40;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__41;
static lean_once_cell_t l_IO_waitAny___auto__1___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_waitAny___auto__1___closed__42;
LEAN_EXPORT lean_object* l_IO_waitAny___auto__1;
lean_object* lean_io_wait_any(lean_object*);
LEAN_EXPORT lean_object* l_IO_waitAny___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_waitAny_x27___auto__1;
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l_IO_waitAny_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_IO_waitAny_x27___redArg___closed__0 = (const lean_object*)&l_IO_waitAny_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_IO_waitAny_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_waitAny_x27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_waitAny_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_waitAny_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
LEAN_EXPORT lean_object* l_IO_getNumHeartbeats___boxed(lean_object*);
lean_object* lean_io_set_heartbeats(lean_object*);
LEAN_EXPORT lean_object* l_IO_setNumHeartbeats___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_addHeartbeats(lean_object*);
LEAN_EXPORT lean_object* l_IO_addHeartbeats___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_IO_FS_instInhabitedStream_default___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_IO_FS_instInhabitedStream_default___lam__0___closed__0 = (const lean_object*)&l_IO_FS_instInhabitedStream_default___lam__0___closed__0_value;
static const lean_ctor_object l_IO_FS_instInhabitedStream_default___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_IO_FS_instInhabitedStream_default___lam__0___closed__0_value)}};
static const lean_object* l_IO_FS_instInhabitedStream_default___lam__0___closed__1 = (const lean_object*)&l_IO_FS_instInhabitedStream_default___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__0();
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__1();
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__2(size_t);
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_IO_FS_instInhabitedStream_default___lam__5(uint8_t);
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__5___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_FS_instInhabitedStream_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instInhabitedStream_default___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instInhabitedStream_default___closed__0 = (const lean_object*)&l_IO_FS_instInhabitedStream_default___closed__0_value;
static const lean_closure_object l_IO_FS_instInhabitedStream_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instInhabitedStream_default___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instInhabitedStream_default___closed__1 = (const lean_object*)&l_IO_FS_instInhabitedStream_default___closed__1_value;
static const lean_closure_object l_IO_FS_instInhabitedStream_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instInhabitedStream_default___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instInhabitedStream_default___closed__2 = (const lean_object*)&l_IO_FS_instInhabitedStream_default___closed__2_value;
static const lean_closure_object l_IO_FS_instInhabitedStream_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instInhabitedStream_default___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instInhabitedStream_default___closed__3 = (const lean_object*)&l_IO_FS_instInhabitedStream_default___closed__3_value;
static const lean_closure_object l_IO_FS_instInhabitedStream_default___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instInhabitedStream_default___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instInhabitedStream_default___closed__4 = (const lean_object*)&l_IO_FS_instInhabitedStream_default___closed__4_value;
static const lean_closure_object l_IO_FS_instInhabitedStream_default___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instInhabitedStream_default___lam__5___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_IO_FS_instInhabitedStream_default___closed__5 = (const lean_object*)&l_IO_FS_instInhabitedStream_default___closed__5_value;
static const lean_ctor_object l_IO_FS_instInhabitedStream_default___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l_IO_FS_instInhabitedStream_default___closed__1_value),((lean_object*)&l_IO_FS_instInhabitedStream_default___closed__2_value),((lean_object*)&l_IO_FS_instInhabitedStream_default___closed__3_value),((lean_object*)&l_IO_FS_instInhabitedStream_default___closed__0_value),((lean_object*)&l_IO_FS_instInhabitedStream_default___closed__4_value),((lean_object*)&l_IO_FS_instInhabitedStream_default___closed__5_value)}};
static const lean_object* l_IO_FS_instInhabitedStream_default___closed__6 = (const lean_object*)&l_IO_FS_instInhabitedStream_default___closed__6_value;
LEAN_EXPORT const lean_object* l_IO_FS_instInhabitedStream_default = (const lean_object*)&l_IO_FS_instInhabitedStream_default___closed__6_value;
LEAN_EXPORT const lean_object* l_IO_FS_instInhabitedStream = (const lean_object*)&l_IO_FS_instInhabitedStream_default___closed__6_value;
lean_object* lean_get_stdin();
LEAN_EXPORT lean_object* l_IO_getStdin___boxed(lean_object*);
lean_object* lean_get_stdout();
LEAN_EXPORT lean_object* l_IO_getStdout___boxed(lean_object*);
lean_object* lean_get_stderr();
LEAN_EXPORT lean_object* l_IO_getStderr___boxed(lean_object*);
lean_object* lean_get_set_stdin(lean_object*);
LEAN_EXPORT lean_object* l_IO_setStdin___boxed(lean_object*, lean_object*);
lean_object* lean_get_set_stdout(lean_object*);
LEAN_EXPORT lean_object* l_IO_setStdout___boxed(lean_object*, lean_object*);
lean_object* lean_get_set_stderr(lean_object*);
LEAN_EXPORT lean_object* l_IO_setStderr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_iterate___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_iterate___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_iterate(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_iterate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_FS_Handle_mk___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_lock(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_FS_Handle_lock___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_try_lock(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_FS_Handle_tryLock___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_unlock(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_unlock___boxed(lean_object*, lean_object*);
uint8_t lean_io_prim_handle_is_tty(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_isTty___boxed(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_flush(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_flush___boxed(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_rewind(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_rewind___boxed(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_truncate(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_truncate___boxed(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_read(lean_object*, size_t);
LEAN_EXPORT lean_object* l_IO_FS_Handle_read___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_write___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_get_line(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_getLine___boxed(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_putStr___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_realpath(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_realPath___boxed(lean_object*, lean_object*);
lean_object* lean_io_remove_file(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_removeFile___boxed(lean_object*, lean_object*);
lean_object* lean_io_remove_dir(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_removeDir___boxed(lean_object*, lean_object*);
lean_object* lean_io_create_dir(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_createDir___boxed(lean_object*, lean_object*);
lean_object* lean_io_rename(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_rename___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_hard_link(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_hardLink___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_create_tempfile();
LEAN_EXPORT lean_object* l_IO_FS_createTempFile___boxed(lean_object*);
lean_object* lean_io_create_tempdir();
LEAN_EXPORT lean_object* l_IO_FS_createTempDir___boxed(lean_object*);
lean_object* lean_io_getenv(lean_object*);
LEAN_EXPORT lean_object* l_IO_getEnv___boxed(lean_object*, lean_object*);
lean_object* lean_io_app_path();
LEAN_EXPORT lean_object* l_IO_appPath___boxed(lean_object*);
lean_object* lean_io_current_dir();
LEAN_EXPORT lean_object* l_IO_currentDir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withFile___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withFile___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withFile(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_putStrLn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_putStrLn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEndInto(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEndInto___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEnd(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEnd___boxed(lean_object*, lean_object*);
static const lean_string_object l_IO_FS_Handle_readToEnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Tried to read from handle containing non UTF-8 data."};
static const lean_object* l_IO_FS_Handle_readToEnd___closed__0 = (const lean_object*)&l_IO_FS_Handle_readToEnd___closed__0_value;
static const lean_ctor_object l_IO_FS_Handle_readToEnd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_IO_FS_Handle_readToEnd___closed__0_value)}};
static const lean_object* l_IO_FS_Handle_readToEnd___closed__1 = (const lean_object*)&l_IO_FS_Handle_readToEnd___closed__1_value;
LEAN_EXPORT lean_object* l_IO_FS_Handle_readToEnd(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_readToEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_lines_read(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_lines_read___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_IO_FS_Handle_lines___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_IO_FS_Handle_lines___closed__0 = (const lean_object*)&l_IO_FS_Handle_lines___closed__0_value;
LEAN_EXPORT lean_object* l_IO_FS_Handle_lines(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Handle_lines___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_lines(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_lines___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_writeBinFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_writeBinFile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_writeFile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_putStrLn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_putStrLn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00IO_FS_instReprDirEntry_repr_spec__0(lean_object*);
static const lean_string_object l_IO_FS_instReprDirEntry_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__0 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__0_value;
static const lean_string_object l_IO_FS_instReprDirEntry_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "root"};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__1 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__1_value;
static const lean_ctor_object l_IO_FS_instReprDirEntry_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__1_value)}};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__2 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__2_value;
static const lean_ctor_object l_IO_FS_instReprDirEntry_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__2_value)}};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__3 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__3_value;
static const lean_string_object l_IO_FS_instReprDirEntry_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__4 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__4_value;
static const lean_ctor_object l_IO_FS_instReprDirEntry_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__4_value)}};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__5 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__5_value;
static const lean_ctor_object l_IO_FS_instReprDirEntry_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__3_value),((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__5_value)}};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__6 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__6_value;
static lean_once_cell_t l_IO_FS_instReprDirEntry_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__7;
static const lean_string_object l_IO_FS_instReprDirEntry_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "FilePath.mk "};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__8 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__8_value;
static const lean_ctor_object l_IO_FS_instReprDirEntry_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__8_value)}};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__9 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__9_value;
static const lean_string_object l_IO_FS_instReprDirEntry_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__10 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__10_value;
static const lean_ctor_object l_IO_FS_instReprDirEntry_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__10_value)}};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__11 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__11_value;
static const lean_string_object l_IO_FS_instReprDirEntry_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fileName"};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__12 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__12_value;
static const lean_ctor_object l_IO_FS_instReprDirEntry_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__12_value)}};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__13 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__13_value;
static lean_once_cell_t l_IO_FS_instReprDirEntry_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__14;
static const lean_string_object l_IO_FS_instReprDirEntry_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__15 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__15_value;
static lean_once_cell_t l_IO_FS_instReprDirEntry_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__16;
static lean_once_cell_t l_IO_FS_instReprDirEntry_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__17;
static const lean_ctor_object l_IO_FS_instReprDirEntry_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__0_value)}};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__18 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__18_value;
static const lean_ctor_object l_IO_FS_instReprDirEntry_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__15_value)}};
static const lean_object* l_IO_FS_instReprDirEntry_repr___redArg___closed__19 = (const lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* l_IO_FS_instReprDirEntry_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instReprDirEntry_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instReprDirEntry_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_FS_instReprDirEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instReprDirEntry_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instReprDirEntry___closed__0 = (const lean_object*)&l_IO_FS_instReprDirEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_FS_instReprDirEntry = (const lean_object*)&l_IO_FS_instReprDirEntry___closed__0_value;
LEAN_EXPORT lean_object* l_IO_FS_DirEntry_path(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_IO_FS_instReprFileType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "IO.FS.FileType.dir"};
static const lean_object* l_IO_FS_instReprFileType_repr___closed__0 = (const lean_object*)&l_IO_FS_instReprFileType_repr___closed__0_value;
static const lean_ctor_object l_IO_FS_instReprFileType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprFileType_repr___closed__0_value)}};
static const lean_object* l_IO_FS_instReprFileType_repr___closed__1 = (const lean_object*)&l_IO_FS_instReprFileType_repr___closed__1_value;
static const lean_string_object l_IO_FS_instReprFileType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "IO.FS.FileType.file"};
static const lean_object* l_IO_FS_instReprFileType_repr___closed__2 = (const lean_object*)&l_IO_FS_instReprFileType_repr___closed__2_value;
static const lean_ctor_object l_IO_FS_instReprFileType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprFileType_repr___closed__2_value)}};
static const lean_object* l_IO_FS_instReprFileType_repr___closed__3 = (const lean_object*)&l_IO_FS_instReprFileType_repr___closed__3_value;
static const lean_string_object l_IO_FS_instReprFileType_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "IO.FS.FileType.symlink"};
static const lean_object* l_IO_FS_instReprFileType_repr___closed__4 = (const lean_object*)&l_IO_FS_instReprFileType_repr___closed__4_value;
static const lean_ctor_object l_IO_FS_instReprFileType_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprFileType_repr___closed__4_value)}};
static const lean_object* l_IO_FS_instReprFileType_repr___closed__5 = (const lean_object*)&l_IO_FS_instReprFileType_repr___closed__5_value;
static const lean_string_object l_IO_FS_instReprFileType_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "IO.FS.FileType.other"};
static const lean_object* l_IO_FS_instReprFileType_repr___closed__6 = (const lean_object*)&l_IO_FS_instReprFileType_repr___closed__6_value;
static const lean_ctor_object l_IO_FS_instReprFileType_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprFileType_repr___closed__6_value)}};
static const lean_object* l_IO_FS_instReprFileType_repr___closed__7 = (const lean_object*)&l_IO_FS_instReprFileType_repr___closed__7_value;
LEAN_EXPORT lean_object* l_IO_FS_instReprFileType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instReprFileType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_FS_instReprFileType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instReprFileType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instReprFileType___closed__0 = (const lean_object*)&l_IO_FS_instReprFileType___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_FS_instReprFileType = (const lean_object*)&l_IO_FS_instReprFileType___closed__0_value;
LEAN_EXPORT uint8_t l_IO_FS_instBEqFileType_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_IO_FS_instBEqFileType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_FS_instBEqFileType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instBEqFileType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instBEqFileType___closed__0 = (const lean_object*)&l_IO_FS_instBEqFileType___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_FS_instBEqFileType = (const lean_object*)&l_IO_FS_instBEqFileType___closed__0_value;
static const lean_string_object l_IO_FS_instReprSystemTime_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sec"};
static const lean_object* l_IO_FS_instReprSystemTime_repr___redArg___closed__0 = (const lean_object*)&l_IO_FS_instReprSystemTime_repr___redArg___closed__0_value;
static const lean_ctor_object l_IO_FS_instReprSystemTime_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprSystemTime_repr___redArg___closed__0_value)}};
static const lean_object* l_IO_FS_instReprSystemTime_repr___redArg___closed__1 = (const lean_object*)&l_IO_FS_instReprSystemTime_repr___redArg___closed__1_value;
static const lean_ctor_object l_IO_FS_instReprSystemTime_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_FS_instReprSystemTime_repr___redArg___closed__1_value)}};
static const lean_object* l_IO_FS_instReprSystemTime_repr___redArg___closed__2 = (const lean_object*)&l_IO_FS_instReprSystemTime_repr___redArg___closed__2_value;
static const lean_ctor_object l_IO_FS_instReprSystemTime_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_IO_FS_instReprSystemTime_repr___redArg___closed__2_value),((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__5_value)}};
static const lean_object* l_IO_FS_instReprSystemTime_repr___redArg___closed__3 = (const lean_object*)&l_IO_FS_instReprSystemTime_repr___redArg___closed__3_value;
static lean_once_cell_t l_IO_FS_instReprSystemTime_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_instReprSystemTime_repr___redArg___closed__4;
static const lean_string_object l_IO_FS_instReprSystemTime_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "nsec"};
static const lean_object* l_IO_FS_instReprSystemTime_repr___redArg___closed__5 = (const lean_object*)&l_IO_FS_instReprSystemTime_repr___redArg___closed__5_value;
static const lean_ctor_object l_IO_FS_instReprSystemTime_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprSystemTime_repr___redArg___closed__5_value)}};
static const lean_object* l_IO_FS_instReprSystemTime_repr___redArg___closed__6 = (const lean_object*)&l_IO_FS_instReprSystemTime_repr___redArg___closed__6_value;
static lean_once_cell_t l_IO_FS_instReprSystemTime_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_instReprSystemTime_repr___redArg___closed__7;
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_FS_instReprSystemTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instReprSystemTime_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instReprSystemTime___closed__0 = (const lean_object*)&l_IO_FS_instReprSystemTime___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_FS_instReprSystemTime = (const lean_object*)&l_IO_FS_instReprSystemTime___closed__0_value;
LEAN_EXPORT uint8_t l_IO_FS_instBEqSystemTime_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instBEqSystemTime_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_FS_instBEqSystemTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instBEqSystemTime_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instBEqSystemTime___closed__0 = (const lean_object*)&l_IO_FS_instBEqSystemTime___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_FS_instBEqSystemTime = (const lean_object*)&l_IO_FS_instBEqSystemTime___closed__0_value;
LEAN_EXPORT uint8_t l_IO_FS_instOrdSystemTime_ord(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instOrdSystemTime_ord___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_FS_instOrdSystemTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instOrdSystemTime_ord___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instOrdSystemTime___closed__0 = (const lean_object*)&l_IO_FS_instOrdSystemTime___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_FS_instOrdSystemTime = (const lean_object*)&l_IO_FS_instOrdSystemTime___closed__0_value;
static lean_once_cell_t l_IO_FS_instInhabitedSystemTime_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_instInhabitedSystemTime_default___closed__0;
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedSystemTime_default;
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedSystemTime;
LEAN_EXPORT lean_object* l_IO_FS_instLTSystemTime;
LEAN_EXPORT lean_object* l_IO_FS_instLESystemTime;
static const lean_string_object l_IO_FS_instReprMetadata_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "accessed"};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__0 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__0_value;
static const lean_ctor_object l_IO_FS_instReprMetadata_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__0_value)}};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__1 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__1_value;
static const lean_ctor_object l_IO_FS_instReprMetadata_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__1_value)}};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__2 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__2_value;
static const lean_ctor_object l_IO_FS_instReprMetadata_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__2_value),((lean_object*)&l_IO_FS_instReprDirEntry_repr___redArg___closed__5_value)}};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__3 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__3_value;
static const lean_string_object l_IO_FS_instReprMetadata_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "modified"};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__4 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__4_value;
static const lean_ctor_object l_IO_FS_instReprMetadata_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__4_value)}};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__5 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__5_value;
static const lean_string_object l_IO_FS_instReprMetadata_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byteSize"};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__6 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__6_value;
static const lean_ctor_object l_IO_FS_instReprMetadata_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__6_value)}};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__7 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__7_value;
static const lean_string_object l_IO_FS_instReprMetadata_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__8 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__8_value;
static const lean_ctor_object l_IO_FS_instReprMetadata_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__8_value)}};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__9 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__9_value;
static const lean_string_object l_IO_FS_instReprMetadata_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "numLinks"};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__10 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__10_value;
static const lean_ctor_object l_IO_FS_instReprMetadata_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__10_value)}};
static const lean_object* l_IO_FS_instReprMetadata_repr___redArg___closed__11 = (const lean_object*)&l_IO_FS_instReprMetadata_repr___redArg___closed__11_value;
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_FS_instReprMetadata___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_instReprMetadata_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_instReprMetadata___closed__0 = (const lean_object*)&l_IO_FS_instReprMetadata___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_FS_instReprMetadata = (const lean_object*)&l_IO_FS_instReprMetadata___closed__0_value;
lean_object* lean_io_read_dir(lean_object*);
LEAN_EXPORT lean_object* l_System_FilePath_readDir___boxed(lean_object*, lean_object*);
lean_object* lean_io_metadata(lean_object*);
LEAN_EXPORT lean_object* l_System_FilePath_metadata___boxed(lean_object*, lean_object*);
lean_object* lean_io_symlink_metadata(lean_object*);
LEAN_EXPORT lean_object* l_System_FilePath_symlinkMetadata___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_System_FilePath_isDir(lean_object*);
LEAN_EXPORT lean_object* l_System_FilePath_isDir___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_System_FilePath_pathExists(lean_object*);
LEAN_EXPORT lean_object* l_System_FilePath_pathExists___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_System_IO_0__System_FilePath_walkDir_go_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__System_FilePath_walkDir_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__System_FilePath_walkDir_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_System_IO_0__System_FilePath_walkDir_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_System_FilePath_walkDir(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_System_FilePath_walkDir___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_IO_FS_readBinFile___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_readBinFile___closed__0;
LEAN_EXPORT lean_object* l_IO_FS_readBinFile(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_readBinFile___boxed(lean_object*, lean_object*);
static const lean_string_object l_IO_FS_readFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Tried to read file '"};
static const lean_object* l_IO_FS_readFile___closed__0 = (const lean_object*)&l_IO_FS_readFile___closed__0_value;
static const lean_string_object l_IO_FS_readFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "' containing non UTF-8 data."};
static const lean_object* l_IO_FS_readFile___closed__1 = (const lean_object*)&l_IO_FS_readFile___closed__1_value;
LEAN_EXPORT lean_object* l_IO_FS_readFile(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_readFile___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_IO_withStdin___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_withStdin___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_withStdin___redArg___closed__0 = (const lean_object*)&l_IO_withStdin___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_IO_withStdin___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdin(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStdout(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_withStderr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_IO_println___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_println___redArg___closed__0 = (const lean_object*)&l_IO_println___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_IO_println___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_io_eprint(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_eprintAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_io_eprintln(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_eprintlnAux___boxed(lean_object*, lean_object*);
static const lean_string_object l_IO_appDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "IO.appDir: unexpected filename '"};
static const lean_object* l_IO_appDir___closed__0 = (const lean_object*)&l_IO_appDir___closed__0_value;
static const lean_string_object l_IO_appDir___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_IO_appDir___closed__1 = (const lean_object*)&l_IO_appDir___closed__1_value;
LEAN_EXPORT lean_object* l_IO_appDir();
LEAN_EXPORT lean_object* l_IO_appDir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_createDirAll(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_createDirAll___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00IO_FS_removeDirAll_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_removeDirAll(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_removeDirAll___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00IO_FS_removeDirAll_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_IO_FS_withTempFile___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_createTempFile___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_withTempFile___redArg___closed__0 = (const lean_object*)&l_IO_FS_withTempFile___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempDir___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_IO_FS_withTempDir___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_createTempDir___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_FS_withTempDir___redArg___closed__0 = (const lean_object*)&l_IO_FS_withTempDir___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_IO_FS_withTempDir___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempDir(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_get_current_dir();
LEAN_EXPORT lean_object* l_IO_Process_getCurrentDir___boxed(lean_object*);
lean_object* lean_io_process_set_current_dir(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_setCurrentDir___boxed(lean_object*, lean_object*);
uint32_t lean_io_process_get_pid();
LEAN_EXPORT lean_object* l_IO_Process_getPID___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_spawn___boxed(lean_object*, lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Child_wait___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_child_try_wait(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Child_tryWait___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_child_kill(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Child_kill___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_child_take_stdin(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Child_takeStdin___boxed(lean_object*, lean_object*, lean_object*);
uint32_t lean_io_process_child_pid(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_Child_pid___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_output___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_output___lam__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_IO_Process_output___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_IO_Process_output___closed__0 = (const lean_object*)&l_IO_Process_output___closed__0_value;
static const lean_ctor_object l_IO_Process_output___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_IO_Process_output___closed__1 = (const lean_object*)&l_IO_Process_output___closed__1_value;
LEAN_EXPORT lean_object* l_IO_Process_output(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_output___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_IO_Process_run___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "process '"};
static const lean_object* l_IO_Process_run___closed__0 = (const lean_object*)&l_IO_Process_run___closed__0_value;
static const lean_string_object l_IO_Process_run___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "' exited with code "};
static const lean_object* l_IO_Process_run___closed__1 = (const lean_object*)&l_IO_Process_run___closed__1_value;
static const lean_string_object l_IO_Process_run___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "\nstderr:\n"};
static const lean_object* l_IO_Process_run___closed__2 = (const lean_object*)&l_IO_Process_run___closed__2_value;
LEAN_EXPORT lean_object* l_IO_Process_run(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_Process_run___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_exit(uint8_t);
LEAN_EXPORT lean_object* l_IO_Process_exit___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_force_exit(uint8_t);
LEAN_EXPORT lean_object* l_IO_Process_forceExit___boxed(lean_object*, lean_object*, lean_object*);
uint64_t lean_io_get_tid();
LEAN_EXPORT lean_object* l_IO_getTID___boxed(lean_object*);
LEAN_EXPORT uint32_t l_IO_AccessRight_flags(lean_object*);
LEAN_EXPORT lean_object* l_IO_AccessRight_flags___boxed(lean_object*);
LEAN_EXPORT uint32_t l_IO_FileRight_flags(lean_object*);
LEAN_EXPORT lean_object* l_IO_FileRight_flags___boxed(lean_object*);
lean_object* lean_chmod(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_IO_Prim_setAccessRights___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_setAccessRights(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_setAccessRights___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_IO_instMonadLiftSTRealWorldBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___closed__0 = (const lean_object*)&l_IO_instMonadLiftSTRealWorldBaseIO___closed__0_value;
LEAN_EXPORT const lean_object* l_IO_instMonadLiftSTRealWorldBaseIO = (const lean_object*)&l_IO_instMonadLiftSTRealWorldBaseIO___closed__0_value;
LEAN_EXPORT lean_object* l_IO_mkRef___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_mkRef___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_mkRef(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_mkRef___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_stream_of_handle(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__0(lean_object*, size_t);
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_findIdx_x3f_loop___at___00IO_FS_Stream_ofBuffer_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_ByteArray_findIdx_x3f_loop___at___00IO_FS_Stream_ofBuffer_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_IO_FS_Stream_ofBuffer___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invalid UTF-8"};
static const lean_object* l_IO_FS_Stream_ofBuffer___lam__2___closed__0 = (const lean_object*)&l_IO_FS_Stream_ofBuffer___lam__2___closed__0_value;
static const lean_ctor_object l_IO_FS_Stream_ofBuffer___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_IO_FS_Stream_ofBuffer___lam__2___closed__0_value)}};
static const lean_object* l_IO_FS_Stream_ofBuffer___lam__2___closed__1 = (const lean_object*)&l_IO_FS_Stream_ofBuffer___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__4___boxed(lean_object*, lean_object*);
static const lean_closure_object l_IO_FS_Stream_ofBuffer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_IO_FS_Stream_ofBuffer___lam__4___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_IO_FS_Stream_ofBuffer___closed__0 = (const lean_object*)&l_IO_FS_Stream_ofBuffer___closed__0_value;
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer(lean_object*);
static const lean_ctor_object l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(1024ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop___boxed__const__1 = (const lean_object*)&l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEndInto(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEndInto___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEnd(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEnd___boxed(lean_object*, lean_object*);
static const lean_string_object l_IO_FS_Stream_readToEnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Tried to read from stream containing non UTF-8 data."};
static const lean_object* l_IO_FS_Stream_readToEnd___closed__0 = (const lean_object*)&l_IO_FS_Stream_readToEnd___closed__0_value;
static const lean_ctor_object l_IO_FS_Stream_readToEnd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_IO_FS_Stream_readToEnd___closed__0_value)}};
static const lean_object* l_IO_FS_Stream_readToEnd___closed__1 = (const lean_object*)&l_IO_FS_Stream_readToEnd___closed__1_value;
LEAN_EXPORT lean_object* l_IO_FS_Stream_readToEnd(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_readToEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_lines_read(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_lines_read___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_lines(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_Stream_lines___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__0 = (const lean_object*)&l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__0_value;
static const lean_string_object l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__1 = (const lean_object*)&l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__1_value;
static const lean_string_object l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__2 = (const lean_object*)&l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__2_value;
static const lean_string_object l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__3 = (const lean_object*)&l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__3_value;
static lean_once_cell_t l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__4;
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_IO_FS_withIsolatedStreams___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_withIsolatedStreams___redArg___closed__0;
static lean_once_cell_t l_IO_FS_withIsolatedStreams___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_IO_FS_withIsolatedStreams___redArg___closed__1;
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_termPrintln_x21_____00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termPrintln!__"};
static const lean_object* l_termPrintln_x21_____00__closed__0 = (const lean_object*)&l_termPrintln_x21_____00__closed__0_value;
static const lean_ctor_object l_termPrintln_x21_____00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_termPrintln_x21_____00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 121, 220, 17, 1, 74, 122, 9)}};
static const lean_object* l_termPrintln_x21_____00__closed__1 = (const lean_object*)&l_termPrintln_x21_____00__closed__1_value;
static const lean_string_object l_termPrintln_x21_____00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_termPrintln_x21_____00__closed__2 = (const lean_object*)&l_termPrintln_x21_____00__closed__2_value;
static const lean_ctor_object l_termPrintln_x21_____00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_termPrintln_x21_____00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_termPrintln_x21_____00__closed__3 = (const lean_object*)&l_termPrintln_x21_____00__closed__3_value;
static const lean_string_object l_termPrintln_x21_____00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "println! "};
static const lean_object* l_termPrintln_x21_____00__closed__4 = (const lean_object*)&l_termPrintln_x21_____00__closed__4_value;
static const lean_ctor_object l_termPrintln_x21_____00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_termPrintln_x21_____00__closed__4_value)}};
static const lean_object* l_termPrintln_x21_____00__closed__5 = (const lean_object*)&l_termPrintln_x21_____00__closed__5_value;
static const lean_string_object l_termPrintln_x21_____00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l_termPrintln_x21_____00__closed__6 = (const lean_object*)&l_termPrintln_x21_____00__closed__6_value;
static const lean_ctor_object l_termPrintln_x21_____00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_termPrintln_x21_____00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(78, 76, 4, 51, 251, 212, 116, 5)}};
static const lean_object* l_termPrintln_x21_____00__closed__7 = (const lean_object*)&l_termPrintln_x21_____00__closed__7_value;
static const lean_string_object l_termPrintln_x21_____00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "interpolatedStr"};
static const lean_object* l_termPrintln_x21_____00__closed__8 = (const lean_object*)&l_termPrintln_x21_____00__closed__8_value;
static const lean_ctor_object l_termPrintln_x21_____00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_termPrintln_x21_____00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(156, 58, 177, 246, 99, 11, 16, 252)}};
static const lean_object* l_termPrintln_x21_____00__closed__9 = (const lean_object*)&l_termPrintln_x21_____00__closed__9_value;
static const lean_string_object l_termPrintln_x21_____00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_termPrintln_x21_____00__closed__10 = (const lean_object*)&l_termPrintln_x21_____00__closed__10_value;
static const lean_ctor_object l_termPrintln_x21_____00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_termPrintln_x21_____00__closed__10_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_termPrintln_x21_____00__closed__11 = (const lean_object*)&l_termPrintln_x21_____00__closed__11_value;
static const lean_ctor_object l_termPrintln_x21_____00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_termPrintln_x21_____00__closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_termPrintln_x21_____00__closed__12 = (const lean_object*)&l_termPrintln_x21_____00__closed__12_value;
static const lean_ctor_object l_termPrintln_x21_____00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_termPrintln_x21_____00__closed__9_value),((lean_object*)&l_termPrintln_x21_____00__closed__12_value)}};
static const lean_object* l_termPrintln_x21_____00__closed__13 = (const lean_object*)&l_termPrintln_x21_____00__closed__13_value;
static const lean_ctor_object l_termPrintln_x21_____00__closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_termPrintln_x21_____00__closed__7_value),((lean_object*)&l_termPrintln_x21_____00__closed__13_value),((lean_object*)&l_termPrintln_x21_____00__closed__12_value)}};
static const lean_object* l_termPrintln_x21_____00__closed__14 = (const lean_object*)&l_termPrintln_x21_____00__closed__14_value;
static const lean_ctor_object l_termPrintln_x21_____00__closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_termPrintln_x21_____00__closed__3_value),((lean_object*)&l_termPrintln_x21_____00__closed__5_value),((lean_object*)&l_termPrintln_x21_____00__closed__14_value)}};
static const lean_object* l_termPrintln_x21_____00__closed__15 = (const lean_object*)&l_termPrintln_x21_____00__closed__15_value;
static const lean_ctor_object l_termPrintln_x21_____00__closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_termPrintln_x21_____00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_termPrintln_x21_____00__closed__15_value)}};
static const lean_object* l_termPrintln_x21_____00__closed__16 = (const lean_object*)&l_termPrintln_x21_____00__closed__16_value;
LEAN_EXPORT const lean_object* l_termPrintln_x21____ = (const lean_object*)&l_termPrintln_x21_____00__closed__16_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolatedStrKind"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__0 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__0_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(239, 118, 32, 248, 73, 51, 110, 198)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__1 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__1_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__2 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__2_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_waitAny___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3_value_aux_0),((lean_object*)&l_IO_waitAny___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3_value_aux_1),((lean_object*)&l_IO_waitAny___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3_value_aux_2),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__4 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__4_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_waitAny___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5_value_aux_0),((lean_object*)&l_IO_waitAny___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5_value_aux_1),((lean_object*)&l_IO_waitAny___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5_value_aux_2),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__6 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__6_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__7 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__7_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__8 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__8_value;
static lean_once_cell_t l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__10 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__10_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "System"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__11 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__11_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(244, 7, 92, 194, 164, 177, 167, 52)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__12 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__12_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__12_value)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__13 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__13_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__14 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__14_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__10_value),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__14_value)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__15 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__15_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "IO.println"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__16 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__16_value;
static lean_once_cell_t l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "IO"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__18 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__18_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "println"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__19 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__19_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(2, 76, 19, 202, 4, 69, 238, 60)}};
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__20_value_aux_0),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(113, 81, 230, 194, 109, 88, 193, 19)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__20 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__20_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__20_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__21 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__21_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__22 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__22_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__23 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__23_value;
static lean_once_cell_t l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(2, 76, 19, 202, 4, 69, 238, 60)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__25 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__25_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__25_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__26 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__26_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__25_value)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__27 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__27_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__28 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__28_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__26_value),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__28_value)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__29 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__29_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__30 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__30_value;
static lean_once_cell_t l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__30_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__32 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__32_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__33 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__33_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__32_value)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__34 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__34_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__34_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__35 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__35_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__33_value),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__35_value)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__36 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__36_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__37 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__37_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__38 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__38_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_IO_waitAny___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__39_value_aux_0),((lean_object*)&l_IO_waitAny___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__39_value_aux_1),((lean_object*)&l_IO_waitAny___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__39_value_aux_2),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__38_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__39 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__39_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termS!_"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__40 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__40_value;
static const lean_ctor_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(30, 130, 93, 49, 63, 146, 201, 153)}};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__41 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__41_value;
static const lean_string_object l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "s!"};
static const lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__42 = (const lean_object*)&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__42_value;
LEAN_EXPORT lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_runtime_mark_multi_threaded(lean_object*);
LEAN_EXPORT lean_object* l_Runtime_markMultiThreaded___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_runtime_mark_persistent(lean_object*);
LEAN_EXPORT lean_object* l_Runtime_markPersistent___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_runtime_forget(lean_object*);
LEAN_EXPORT lean_object* l_Runtime_forget___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_runtime_hold(lean_object*);
LEAN_EXPORT lean_object* l_Runtime_hold___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_IO_RealWorld_nonemptyType(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_box(0);
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mk___redArg(lean_object* v_toST_2_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_apply_1(v_toST_2_, lean_box(0));
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mk___redArg___boxed(lean_object* v_toST_5_, lean_object* v___y_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_BaseIO_mk___redArg(v_toST_5_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mk(lean_object* v_00_u03b1_8_, lean_object* v_toST_9_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_apply_1(v_toST_9_, lean_box(0));
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mk___boxed(lean_object* v_00_u03b1_12_, lean_object* v_toST_13_, lean_object* v___y_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l_BaseIO_mk(v_00_u03b1_12_, v_toST_13_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toST___redArg(lean_object* v_self_16_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_apply_1(v_self_16_, lean_box(0));
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toST___redArg___boxed(lean_object* v_self_19_, lean_object* v___y_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_BaseIO_toST___redArg(v_self_19_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toST(lean_object* v_00_u03b1_22_, lean_object* v_self_23_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_apply_1(v_self_23_, lean_box(0));
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toST___boxed(lean_object* v_00_u03b1_26_, lean_object* v_self_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_BaseIO_toST(v_00_u03b1_26_, v_self_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__0(lean_object* v_00_u03b1_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = ((lean_object*)(l_instMonadBaseIO___lam__0___closed__2));
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__1(lean_object* v_f_37_, lean_object* v_invFun_38_, lean_object* v_a_39_){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_apply_1(v_f_37_, v_a_39_);
v___x_42_ = lean_apply_2(v_invFun_38_, v___x_41_, lean_box(0));
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object* v_f_43_, lean_object* v_invFun_44_, lean_object* v_a_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_instMonadBaseIO___lam__1(v_f_43_, v_invFun_44_, v_a_45_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__2(lean_object* v___f_48_, lean_object* v_00_u03b1_49_, lean_object* v_00_u03b2_50_, lean_object* v_x_51_, lean_object* v_f_52_){
_start:
{
lean_object* v___x_54_; lean_object* v_toFun_55_; lean_object* v_invFun_56_; lean_object* v_invFun_57_; lean_object* v___f_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_54_ = lean_apply_1(v___f_48_, lean_box(0));
v_toFun_55_ = lean_ctor_get(v___x_54_, 0);
lean_inc(v_toFun_55_);
v_invFun_56_ = lean_ctor_get(v___x_54_, 1);
lean_inc(v_invFun_56_);
v_invFun_57_ = lean_ctor_get(v___x_54_, 1);
lean_inc(v_invFun_57_);
lean_dec_ref(v___x_54_);
v___f_58_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__1___boxed), 4, 2);
lean_closure_set(v___f_58_, 0, v_f_52_);
lean_closure_set(v___f_58_, 1, v_invFun_56_);
v___x_59_ = lean_apply_1(v_invFun_57_, v_x_51_);
v___x_60_ = lean_alloc_closure((void*)(l_ST_bind___boxed), 6, 5);
lean_closure_set(v___x_60_, 0, lean_box(0));
lean_closure_set(v___x_60_, 1, lean_box(0));
lean_closure_set(v___x_60_, 2, lean_box(0));
lean_closure_set(v___x_60_, 3, v___x_59_);
lean_closure_set(v___x_60_, 4, v___f_58_);
v___x_61_ = lean_apply_2(v_toFun_55_, v___x_60_, lean_box(0));
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__2___boxed(lean_object* v___f_62_, lean_object* v_00_u03b1_63_, lean_object* v_00_u03b2_64_, lean_object* v_x_65_, lean_object* v_f_66_, lean_object* v___y_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l_instMonadBaseIO___lam__2(v___f_62_, v_00_u03b1_63_, v_00_u03b2_64_, v_x_65_, v_f_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__3(lean_object* v_invFun_69_, lean_object* v_x_70_, lean_object* v_a_71_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_apply_2(v_invFun_69_, v_x_70_, lean_box(0));
lean_dec(v___x_73_);
lean_inc(v_a_71_);
return v_a_71_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__3___boxed(lean_object* v_invFun_74_, lean_object* v_x_75_, lean_object* v_a_76_, lean_object* v___y_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_instMonadBaseIO___lam__3(v_invFun_74_, v_x_75_, v_a_76_);
lean_dec(v_a_76_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__4(lean_object* v___f_79_, lean_object* v_00_u03b1_80_, lean_object* v_00_u03b2_81_, lean_object* v_a_82_, lean_object* v_x_83_){
_start:
{
lean_object* v___x_85_; lean_object* v_toFun_86_; lean_object* v_invFun_87_; lean_object* v___f_88_; lean_object* v___x_89_; 
v___x_85_ = lean_apply_1(v___f_79_, lean_box(0));
v_toFun_86_ = lean_ctor_get(v___x_85_, 0);
lean_inc(v_toFun_86_);
v_invFun_87_ = lean_ctor_get(v___x_85_, 1);
lean_inc(v_invFun_87_);
lean_dec_ref(v___x_85_);
v___f_88_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__3___boxed), 4, 3);
lean_closure_set(v___f_88_, 0, v_invFun_87_);
lean_closure_set(v___f_88_, 1, v_x_83_);
lean_closure_set(v___f_88_, 2, v_a_82_);
v___x_89_ = lean_apply_2(v_toFun_86_, v___f_88_, lean_box(0));
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__4___boxed(lean_object* v___f_90_, lean_object* v_00_u03b1_91_, lean_object* v_00_u03b2_92_, lean_object* v_a_93_, lean_object* v_x_94_, lean_object* v___y_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l_instMonadBaseIO___lam__4(v___f_90_, v_00_u03b1_91_, v_00_u03b2_92_, v_a_93_, v_x_94_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__5(lean_object* v_invFun_97_, lean_object* v_x_98_, lean_object* v_f_99_){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = lean_apply_2(v_invFun_97_, v_x_98_, lean_box(0));
v___x_102_ = lean_apply_1(v_f_99_, v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__5___boxed(lean_object* v_invFun_103_, lean_object* v_x_104_, lean_object* v_f_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_instMonadBaseIO___lam__5(v_invFun_103_, v_x_104_, v_f_105_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__6(lean_object* v___f_108_, lean_object* v_00_u03b1_109_, lean_object* v_00_u03b2_110_, lean_object* v_f_111_, lean_object* v_x_112_){
_start:
{
lean_object* v___x_114_; lean_object* v_toFun_115_; lean_object* v_invFun_116_; lean_object* v___f_117_; lean_object* v___x_118_; 
v___x_114_ = lean_apply_1(v___f_108_, lean_box(0));
v_toFun_115_ = lean_ctor_get(v___x_114_, 0);
lean_inc(v_toFun_115_);
v_invFun_116_ = lean_ctor_get(v___x_114_, 1);
lean_inc(v_invFun_116_);
lean_dec_ref(v___x_114_);
v___f_117_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__5___boxed), 4, 3);
lean_closure_set(v___f_117_, 0, v_invFun_116_);
lean_closure_set(v___f_117_, 1, v_x_112_);
lean_closure_set(v___f_117_, 2, v_f_111_);
v___x_118_ = lean_apply_2(v_toFun_115_, v___f_117_, lean_box(0));
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__6___boxed(lean_object* v___f_119_, lean_object* v_00_u03b1_120_, lean_object* v_00_u03b2_121_, lean_object* v_f_122_, lean_object* v_x_123_, lean_object* v___y_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_instMonadBaseIO___lam__6(v___f_119_, v_00_u03b1_120_, v_00_u03b2_121_, v_f_122_, v_x_123_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__7(lean_object* v_a_126_){
_start:
{
lean_inc(v_a_126_);
return v_a_126_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__7___boxed(lean_object* v_a_128_, lean_object* v___y_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_instMonadBaseIO___lam__7(v_a_128_);
lean_dec(v_a_128_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__8(lean_object* v___f_131_, lean_object* v_00_u03b1_132_, lean_object* v_a_133_){
_start:
{
lean_object* v___x_135_; lean_object* v_toFun_136_; lean_object* v___f_137_; lean_object* v___x_138_; 
v___x_135_ = lean_apply_1(v___f_131_, lean_box(0));
v_toFun_136_ = lean_ctor_get(v___x_135_, 0);
lean_inc(v_toFun_136_);
lean_dec_ref(v___x_135_);
v___f_137_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__7___boxed), 2, 1);
lean_closure_set(v___f_137_, 0, v_a_133_);
v___x_138_ = lean_apply_2(v_toFun_136_, v___f_137_, lean_box(0));
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__8___boxed(lean_object* v___f_139_, lean_object* v_00_u03b1_140_, lean_object* v_a_141_, lean_object* v___y_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_instMonadBaseIO___lam__8(v___f_139_, v_00_u03b1_140_, v_a_141_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__9(lean_object* v_invFun_144_, lean_object* v_f_145_, lean_object* v___f_146_, lean_object* v_x_147_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v_invFun_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_149_ = lean_apply_2(v_invFun_144_, v_f_145_, lean_box(0));
v___x_150_ = lean_apply_1(v___f_146_, lean_box(0));
v_invFun_151_ = lean_ctor_get(v___x_150_, 1);
lean_inc(v_invFun_151_);
lean_dec_ref(v___x_150_);
v___x_152_ = lean_box(0);
v___x_153_ = lean_apply_1(v_x_147_, v___x_152_);
v___x_154_ = lean_apply_2(v_invFun_151_, v___x_153_, lean_box(0));
v___x_155_ = lean_apply_1(v___x_149_, v___x_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__9___boxed(lean_object* v_invFun_156_, lean_object* v_f_157_, lean_object* v___f_158_, lean_object* v_x_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_instMonadBaseIO___lam__9(v_invFun_156_, v_f_157_, v___f_158_, v_x_159_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__10(lean_object* v___f_162_, lean_object* v_00_u03b1_163_, lean_object* v_00_u03b2_164_, lean_object* v_f_165_, lean_object* v_x_166_){
_start:
{
lean_object* v___x_168_; lean_object* v_toFun_169_; lean_object* v_invFun_170_; lean_object* v___f_171_; lean_object* v___x_172_; 
lean_inc_ref(v___f_162_);
v___x_168_ = lean_apply_1(v___f_162_, lean_box(0));
v_toFun_169_ = lean_ctor_get(v___x_168_, 0);
lean_inc(v_toFun_169_);
v_invFun_170_ = lean_ctor_get(v___x_168_, 1);
lean_inc(v_invFun_170_);
lean_dec_ref(v___x_168_);
v___f_171_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__9___boxed), 5, 4);
lean_closure_set(v___f_171_, 0, v_invFun_170_);
lean_closure_set(v___f_171_, 1, v_f_165_);
lean_closure_set(v___f_171_, 2, v___f_162_);
lean_closure_set(v___f_171_, 3, v_x_166_);
v___x_172_ = lean_apply_2(v_toFun_169_, v___f_171_, lean_box(0));
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__10___boxed(lean_object* v___f_173_, lean_object* v_00_u03b1_174_, lean_object* v_00_u03b2_175_, lean_object* v_f_176_, lean_object* v_x_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_instMonadBaseIO___lam__10(v___f_173_, v_00_u03b1_174_, v_00_u03b2_175_, v_f_176_, v_x_177_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__11(lean_object* v_invFun_180_, lean_object* v_x_181_, lean_object* v___f_182_, lean_object* v_y_183_){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v_invFun_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_185_ = lean_apply_2(v_invFun_180_, v_x_181_, lean_box(0));
v___x_186_ = lean_apply_1(v___f_182_, lean_box(0));
v_invFun_187_ = lean_ctor_get(v___x_186_, 1);
lean_inc(v_invFun_187_);
lean_dec_ref(v___x_186_);
v___x_188_ = lean_box(0);
v___x_189_ = lean_apply_1(v_y_183_, v___x_188_);
v___x_190_ = lean_apply_2(v_invFun_187_, v___x_189_, lean_box(0));
lean_dec(v___x_190_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__11___boxed(lean_object* v_invFun_191_, lean_object* v_x_192_, lean_object* v___f_193_, lean_object* v_y_194_, lean_object* v___y_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_instMonadBaseIO___lam__11(v_invFun_191_, v_x_192_, v___f_193_, v_y_194_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__12(lean_object* v___f_197_, lean_object* v_00_u03b1_198_, lean_object* v_00_u03b2_199_, lean_object* v_x_200_, lean_object* v_y_201_){
_start:
{
lean_object* v___x_203_; lean_object* v_toFun_204_; lean_object* v_invFun_205_; lean_object* v___f_206_; lean_object* v___x_207_; 
lean_inc_ref(v___f_197_);
v___x_203_ = lean_apply_1(v___f_197_, lean_box(0));
v_toFun_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_toFun_204_);
v_invFun_205_ = lean_ctor_get(v___x_203_, 1);
lean_inc(v_invFun_205_);
lean_dec_ref(v___x_203_);
v___f_206_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__11___boxed), 5, 4);
lean_closure_set(v___f_206_, 0, v_invFun_205_);
lean_closure_set(v___f_206_, 1, v_x_200_);
lean_closure_set(v___f_206_, 2, v___f_197_);
lean_closure_set(v___f_206_, 3, v_y_201_);
v___x_207_ = lean_apply_2(v_toFun_204_, v___f_206_, lean_box(0));
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__12___boxed(lean_object* v___f_208_, lean_object* v_00_u03b1_209_, lean_object* v_00_u03b2_210_, lean_object* v_x_211_, lean_object* v_y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_instMonadBaseIO___lam__12(v___f_208_, v_00_u03b1_209_, v_00_u03b2_210_, v_x_211_, v_y_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__13(lean_object* v_invFun_215_, lean_object* v_x_216_, lean_object* v_y_217_, lean_object* v_invFun_218_){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_220_ = lean_apply_2(v_invFun_215_, v_x_216_, lean_box(0));
lean_dec(v___x_220_);
v___x_221_ = lean_box(0);
v___x_222_ = lean_apply_1(v_y_217_, v___x_221_);
v___x_223_ = lean_apply_2(v_invFun_218_, v___x_222_, lean_box(0));
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__13___boxed(lean_object* v_invFun_224_, lean_object* v_x_225_, lean_object* v_y_226_, lean_object* v_invFun_227_, lean_object* v___y_228_){
_start:
{
lean_object* v_res_229_; 
v_res_229_ = l_instMonadBaseIO___lam__13(v_invFun_224_, v_x_225_, v_y_226_, v_invFun_227_);
return v_res_229_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__14(lean_object* v___f_230_, lean_object* v_00_u03b1_231_, lean_object* v_00_u03b2_232_, lean_object* v_x_233_, lean_object* v_y_234_){
_start:
{
lean_object* v___x_236_; lean_object* v_toFun_237_; lean_object* v_invFun_238_; lean_object* v_invFun_239_; lean_object* v___f_240_; lean_object* v___x_241_; 
v___x_236_ = lean_apply_1(v___f_230_, lean_box(0));
v_toFun_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc(v_toFun_237_);
v_invFun_238_ = lean_ctor_get(v___x_236_, 1);
lean_inc(v_invFun_238_);
v_invFun_239_ = lean_ctor_get(v___x_236_, 1);
lean_inc(v_invFun_239_);
lean_dec_ref(v___x_236_);
v___f_240_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__13___boxed), 5, 4);
lean_closure_set(v___f_240_, 0, v_invFun_239_);
lean_closure_set(v___f_240_, 1, v_x_233_);
lean_closure_set(v___f_240_, 2, v_y_234_);
lean_closure_set(v___f_240_, 3, v_invFun_238_);
v___x_241_ = lean_apply_2(v_toFun_237_, v___f_240_, lean_box(0));
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__14___boxed(lean_object* v___f_242_, lean_object* v_00_u03b1_243_, lean_object* v_00_u03b2_244_, lean_object* v_x_245_, lean_object* v_y_246_, lean_object* v___y_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_instMonadBaseIO___lam__14(v___f_242_, v_00_u03b1_243_, v_00_u03b2_244_, v_x_245_, v_y_246_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__1(lean_object* v_invFun_277_, lean_object* v_x_278_, lean_object* v___f_279_, lean_object* v_f_280_){
_start:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v_invFun_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_294_; 
v___x_282_ = lean_apply_2(v_invFun_277_, v_x_278_, lean_box(0));
v___x_283_ = lean_apply_1(v___f_279_, lean_box(0));
v_invFun_284_ = lean_ctor_get(v___x_283_, 1);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; 
v_unused_295_ = lean_ctor_get(v___x_283_, 0);
lean_dec(v_unused_295_);
v___x_286_ = v___x_283_;
v_isShared_287_ = v_isSharedCheck_294_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_invFun_284_);
lean_dec(v___x_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_294_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_292_; 
lean_inc(v___x_282_);
v___x_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_288_, 0, v___x_282_);
v___x_289_ = lean_apply_1(v_f_280_, v___x_288_);
v___x_290_ = lean_apply_2(v_invFun_284_, v___x_289_, lean_box(0));
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 1, v___x_290_);
lean_ctor_set(v___x_286_, 0, v___x_282_);
v___x_292_ = v___x_286_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v___x_290_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__1___boxed(lean_object* v_invFun_296_, lean_object* v_x_297_, lean_object* v___f_298_, lean_object* v_f_299_, lean_object* v___y_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_instMonadFinallyBaseIO___lam__1(v_invFun_296_, v_x_297_, v___f_298_, v_f_299_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__0(lean_object* v___f_302_, lean_object* v_00_u03b1_303_, lean_object* v_00_u03b2_304_, lean_object* v_x_305_, lean_object* v_f_306_){
_start:
{
lean_object* v___x_308_; lean_object* v_toFun_309_; lean_object* v_invFun_310_; lean_object* v___f_311_; lean_object* v___x_312_; 
lean_inc_ref(v___f_302_);
v___x_308_ = lean_apply_1(v___f_302_, lean_box(0));
v_toFun_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_toFun_309_);
v_invFun_310_ = lean_ctor_get(v___x_308_, 1);
lean_inc(v_invFun_310_);
lean_dec_ref(v___x_308_);
v___f_311_ = lean_alloc_closure((void*)(l_instMonadFinallyBaseIO___lam__1___boxed), 5, 4);
lean_closure_set(v___f_311_, 0, v_invFun_310_);
lean_closure_set(v___f_311_, 1, v_x_305_);
lean_closure_set(v___f_311_, 2, v___f_302_);
lean_closure_set(v___f_311_, 3, v_f_306_);
v___x_312_ = lean_apply_2(v_toFun_309_, v___f_311_, lean_box(0));
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__0___boxed(lean_object* v___f_313_, lean_object* v_00_u03b1_314_, lean_object* v_00_u03b2_315_, lean_object* v_x_316_, lean_object* v_f_317_, lean_object* v___y_318_){
_start:
{
lean_object* v_res_319_; 
v_res_319_ = l_instMonadFinallyBaseIO___lam__0(v___f_313_, v_00_u03b1_314_, v_00_u03b2_315_, v_x_316_, v_f_317_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__1(lean_object* v_invFun_323_, lean_object* v_x_324_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = lean_apply_2(v_invFun_323_, v_x_324_, lean_box(0));
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__1___boxed(lean_object* v_invFun_327_, lean_object* v_x_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_instMonadAttachBaseIO___lam__1(v_invFun_327_, v_x_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__0(lean_object* v___f_331_, lean_object* v_00_u03b1_332_, lean_object* v_x_333_){
_start:
{
lean_object* v___x_335_; lean_object* v_toFun_336_; lean_object* v_invFun_337_; lean_object* v___f_338_; lean_object* v___x_339_; 
v___x_335_ = lean_apply_1(v___f_331_, lean_box(0));
v_toFun_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_toFun_336_);
v_invFun_337_ = lean_ctor_get(v___x_335_, 1);
lean_inc(v_invFun_337_);
lean_dec_ref(v___x_335_);
v___f_338_ = lean_alloc_closure((void*)(l_instMonadAttachBaseIO___lam__1___boxed), 3, 2);
lean_closure_set(v___f_338_, 0, v_invFun_337_);
lean_closure_set(v___f_338_, 1, v_x_333_);
v___x_339_ = lean_apply_2(v_toFun_336_, v___f_338_, lean_box(0));
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__0___boxed(lean_object* v___f_340_, lean_object* v_00_u03b1_341_, lean_object* v_x_342_, lean_object* v___y_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_instMonadAttachBaseIO___lam__0(v___f_340_, v_00_u03b1_341_, v_x_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_map___redArg(lean_object* v_f_348_, lean_object* v_x_349_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = lean_apply_1(v_x_349_, lean_box(0));
v___x_352_ = lean_apply_1(v_f_348_, v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_map___redArg___boxed(lean_object* v_f_353_, lean_object* v_x_354_, lean_object* v___y_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_BaseIO_map___redArg(v_f_353_, v_x_354_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_map(lean_object* v_00_u03b1_357_, lean_object* v_00_u03b2_358_, lean_object* v_f_359_, lean_object* v_x_360_){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_apply_1(v_x_360_, lean_box(0));
v___x_363_ = lean_apply_1(v_f_359_, v___x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_map___boxed(lean_object* v_00_u03b1_364_, lean_object* v_00_u03b2_365_, lean_object* v_f_366_, lean_object* v_x_367_, lean_object* v___y_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_BaseIO_map(v_00_u03b1_364_, v_00_u03b2_365_, v_f_366_, v_x_367_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_EIO_mk___redArg(lean_object* v_toEST_370_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lean_apply_1(v_toEST_370_, lean_box(0));
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_EIO_mk___redArg___boxed(lean_object* v_toEST_373_, lean_object* v___y_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_EIO_mk___redArg(v_toEST_373_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_EIO_mk(lean_object* v_00_u03b5_376_, lean_object* v_00_u03b1_377_, lean_object* v_toEST_378_){
_start:
{
lean_object* v___x_380_; 
v___x_380_ = lean_apply_1(v_toEST_378_, lean_box(0));
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_EIO_mk___boxed(lean_object* v_00_u03b5_381_, lean_object* v_00_u03b1_382_, lean_object* v_toEST_383_, lean_object* v___y_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_EIO_mk(v_00_u03b5_381_, v_00_u03b1_382_, v_toEST_383_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_EIO_toEST___redArg(lean_object* v_self_386_){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = lean_apply_1(v_self_386_, lean_box(0));
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_EIO_toEST___redArg___boxed(lean_object* v_self_389_, lean_object* v___y_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_EIO_toEST___redArg(v_self_389_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_EIO_toEST(lean_object* v_00_u03b5_392_, lean_object* v_00_u03b1_393_, lean_object* v_self_394_){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = lean_apply_1(v_self_394_, lean_box(0));
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_EIO_toEST___boxed(lean_object* v_00_u03b5_397_, lean_object* v_00_u03b1_398_, lean_object* v_self_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_EIO_toEST(v_00_u03b5_397_, v_00_u03b1_398_, v_self_399_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toEIO___redArg(lean_object* v_act_402_){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = lean_apply_1(v_act_402_, lean_box(0));
v___x_405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toEIO___redArg___boxed(lean_object* v_act_406_, lean_object* v___y_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_BaseIO_toEIO___redArg(v_act_406_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toEIO(lean_object* v_00_u03b1_409_, lean_object* v_00_u03b5_410_, lean_object* v_act_411_){
_start:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = lean_apply_1(v_act_411_, lean_box(0));
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toEIO___boxed(lean_object* v_00_u03b1_415_, lean_object* v_00_u03b5_416_, lean_object* v_act_417_, lean_object* v___y_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_BaseIO_toEIO(v_00_u03b1_415_, v_00_u03b5_416_, v_act_417_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg___lam__0(lean_object* v_00_u03b1_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = lean_apply_1(v___y_421_, lean_box(0));
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg___lam__0___boxed(lean_object* v_00_u03b1_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_instMonadLiftBaseIOEIO___redArg___lam__0(v_00_u03b1_425_, v___y_426_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg(){
_start:
{
lean_object* v___f_431_; 
v___f_431_ = ((lean_object*)(l_instMonadLiftBaseIOEIO___redArg___closed__0));
return v___f_431_;
}
}
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg___boxed(lean_object* v___dummy_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_instMonadLiftBaseIOEIO___redArg();
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO(lean_object* v_00_u03b5_434_){
_start:
{
lean_object* v___f_435_; 
v___f_435_ = ((lean_object*)(l_instMonadLiftBaseIOEIO___redArg___closed__0));
return v___f_435_;
}
}
LEAN_EXPORT lean_object* l_EIO_toBaseIO___redArg(lean_object* v_act_436_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = lean_apply_1(v_act_436_, lean_box(0));
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___x_438_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
lean_ctor_set_tag(v___x_441_, 1);
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_439_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
v_a_447_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_438_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_438_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
lean_ctor_set_tag(v___x_449_, 0);
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toBaseIO___redArg___boxed(lean_object* v_act_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_EIO_toBaseIO___redArg(v_act_455_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_EIO_toBaseIO(lean_object* v_00_u03b5_458_, lean_object* v_00_u03b1_459_, lean_object* v_act_460_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = lean_apply_1(v_act_460_, lean_box(0));
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_470_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_470_ == 0)
{
v___x_465_ = v___x_462_;
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v___x_462_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_470_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
lean_ctor_set_tag(v___x_465_, 1);
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
else
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
v_a_471_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_462_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_462_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
lean_ctor_set_tag(v___x_473_, 0);
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toBaseIO___boxed(lean_object* v_00_u03b5_479_, lean_object* v_00_u03b1_480_, lean_object* v_act_481_, lean_object* v___y_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_EIO_toBaseIO(v_00_u03b5_479_, v_00_u03b1_480_, v_act_481_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_EIO_catchExceptions___redArg(lean_object* v_act_484_, lean_object* v_h_485_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = lean_apply_1(v_act_484_, lean_box(0));
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; 
lean_dec_ref(v_h_485_);
v_a_488_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_488_);
lean_dec_ref_known(v___x_487_, 1);
return v_a_488_;
}
else
{
lean_object* v_a_489_; lean_object* v___x_490_; 
v_a_489_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_489_);
lean_dec_ref_known(v___x_487_, 1);
v___x_490_ = lean_apply_2(v_h_485_, v_a_489_, lean_box(0));
return v___x_490_;
}
}
}
LEAN_EXPORT lean_object* l_EIO_catchExceptions___redArg___boxed(lean_object* v_act_491_, lean_object* v_h_492_, lean_object* v___y_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_EIO_catchExceptions___redArg(v_act_491_, v_h_492_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_EIO_catchExceptions(lean_object* v_00_u03b5_495_, lean_object* v_00_u03b1_496_, lean_object* v_act_497_, lean_object* v_h_498_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = lean_apply_1(v_act_497_, lean_box(0));
if (lean_obj_tag(v___x_500_) == 0)
{
lean_object* v_a_501_; 
lean_dec_ref(v_h_498_);
v_a_501_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_a_501_);
lean_dec_ref_known(v___x_500_, 1);
return v_a_501_;
}
else
{
lean_object* v_a_502_; lean_object* v___x_503_; 
v_a_502_ = lean_ctor_get(v___x_500_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_500_, 1);
v___x_503_ = lean_apply_2(v_h_498_, v_a_502_, lean_box(0));
return v___x_503_;
}
}
}
LEAN_EXPORT lean_object* l_EIO_catchExceptions___boxed(lean_object* v_00_u03b5_504_, lean_object* v_00_u03b1_505_, lean_object* v_act_506_, lean_object* v_h_507_, lean_object* v___y_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_EIO_catchExceptions(v_00_u03b5_504_, v_00_u03b1_505_, v_act_506_, v_h_507_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__0(lean_object* v_00_u03b1_515_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = ((lean_object*)(l_instMonadEIO___redArg___lam__0___closed__2));
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__1(lean_object* v_f_517_, lean_object* v_invFun_518_, lean_object* v_a_519_){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = lean_apply_1(v_f_517_, v_a_519_);
v___x_522_ = lean_apply_2(v_invFun_518_, v___x_521_, lean_box(0));
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object* v_f_523_, lean_object* v_invFun_524_, lean_object* v_a_525_, lean_object* v___y_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_instMonadEIO___redArg___lam__1(v_f_523_, v_invFun_524_, v_a_525_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__2(lean_object* v___f_528_, lean_object* v_00_u03b1_529_, lean_object* v_00_u03b2_530_, lean_object* v_x_531_, lean_object* v_f_532_){
_start:
{
lean_object* v___x_534_; lean_object* v_toFun_535_; lean_object* v_invFun_536_; lean_object* v_invFun_537_; lean_object* v___f_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_534_ = lean_apply_1(v___f_528_, lean_box(0));
v_toFun_535_ = lean_ctor_get(v___x_534_, 0);
lean_inc(v_toFun_535_);
v_invFun_536_ = lean_ctor_get(v___x_534_, 1);
lean_inc(v_invFun_536_);
v_invFun_537_ = lean_ctor_get(v___x_534_, 1);
lean_inc(v_invFun_537_);
lean_dec_ref(v___x_534_);
v___f_538_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_538_, 0, v_f_532_);
lean_closure_set(v___f_538_, 1, v_invFun_536_);
v___x_539_ = lean_apply_1(v_invFun_537_, v_x_531_);
v___x_540_ = lean_alloc_closure((void*)(l_EST_bind___boxed), 7, 6);
lean_closure_set(v___x_540_, 0, lean_box(0));
lean_closure_set(v___x_540_, 1, lean_box(0));
lean_closure_set(v___x_540_, 2, lean_box(0));
lean_closure_set(v___x_540_, 3, lean_box(0));
lean_closure_set(v___x_540_, 4, v___x_539_);
lean_closure_set(v___x_540_, 5, v___f_538_);
v___x_541_ = lean_apply_2(v_toFun_535_, v___x_540_, lean_box(0));
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object* v___f_542_, lean_object* v_00_u03b1_543_, lean_object* v_00_u03b2_544_, lean_object* v_x_545_, lean_object* v_f_546_, lean_object* v___y_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_instMonadEIO___redArg___lam__2(v___f_542_, v_00_u03b1_543_, v_00_u03b2_544_, v_x_545_, v_f_546_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__3(lean_object* v_invFun_549_, lean_object* v_x_550_, lean_object* v_a_551_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = lean_apply_2(v_invFun_549_, v_x_550_, lean_box(0));
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_560_ == 0)
{
lean_object* v_unused_561_; 
v_unused_561_ = lean_ctor_get(v___x_553_, 0);
lean_dec(v_unused_561_);
v___x_555_ = v___x_553_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_dec(v___x_553_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v_a_551_);
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_551_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
else
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
lean_dec(v_a_551_);
v_a_562_ = lean_ctor_get(v___x_553_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_553_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_553_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_553_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object* v_invFun_570_, lean_object* v_x_571_, lean_object* v_a_572_, lean_object* v___y_573_){
_start:
{
lean_object* v_res_574_; 
v_res_574_ = l_instMonadEIO___redArg___lam__3(v_invFun_570_, v_x_571_, v_a_572_);
return v_res_574_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__4(lean_object* v___f_575_, lean_object* v_00_u03b1_576_, lean_object* v_00_u03b2_577_, lean_object* v_a_578_, lean_object* v_x_579_){
_start:
{
lean_object* v___x_581_; lean_object* v_toFun_582_; lean_object* v_invFun_583_; lean_object* v___f_584_; lean_object* v___x_585_; 
v___x_581_ = lean_apply_1(v___f_575_, lean_box(0));
v_toFun_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_toFun_582_);
v_invFun_583_ = lean_ctor_get(v___x_581_, 1);
lean_inc(v_invFun_583_);
lean_dec_ref(v___x_581_);
v___f_584_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_584_, 0, v_invFun_583_);
lean_closure_set(v___f_584_, 1, v_x_579_);
lean_closure_set(v___f_584_, 2, v_a_578_);
v___x_585_ = lean_apply_2(v_toFun_582_, v___f_584_, lean_box(0));
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object* v___f_586_, lean_object* v_00_u03b1_587_, lean_object* v_00_u03b2_588_, lean_object* v_a_589_, lean_object* v_x_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_instMonadEIO___redArg___lam__4(v___f_586_, v_00_u03b1_587_, v_00_u03b2_588_, v_a_589_, v_x_590_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__5(lean_object* v_invFun_593_, lean_object* v_x_594_, lean_object* v_f_595_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = lean_apply_2(v_invFun_593_, v_x_594_, lean_box(0));
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_606_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_606_ == 0)
{
v___x_600_ = v___x_597_;
v_isShared_601_ = v_isSharedCheck_606_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_597_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_606_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_604_; 
v___x_602_ = lean_apply_1(v_f_595_, v_a_598_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_602_);
v___x_604_ = v___x_600_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_602_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
else
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
lean_dec(v_f_595_);
v_a_607_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_597_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_597_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__5___boxed(lean_object* v_invFun_615_, lean_object* v_x_616_, lean_object* v_f_617_, lean_object* v___y_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_instMonadEIO___redArg___lam__5(v_invFun_615_, v_x_616_, v_f_617_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__6(lean_object* v___f_620_, lean_object* v_00_u03b1_621_, lean_object* v_00_u03b2_622_, lean_object* v_f_623_, lean_object* v_x_624_){
_start:
{
lean_object* v___x_626_; lean_object* v_toFun_627_; lean_object* v_invFun_628_; lean_object* v___f_629_; lean_object* v___x_630_; 
v___x_626_ = lean_apply_1(v___f_620_, lean_box(0));
v_toFun_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_toFun_627_);
v_invFun_628_ = lean_ctor_get(v___x_626_, 1);
lean_inc(v_invFun_628_);
lean_dec_ref(v___x_626_);
v___f_629_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__5___boxed), 4, 3);
lean_closure_set(v___f_629_, 0, v_invFun_628_);
lean_closure_set(v___f_629_, 1, v_x_624_);
lean_closure_set(v___f_629_, 2, v_f_623_);
v___x_630_ = lean_apply_2(v_toFun_627_, v___f_629_, lean_box(0));
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object* v___f_631_, lean_object* v_00_u03b1_632_, lean_object* v_00_u03b2_633_, lean_object* v_f_634_, lean_object* v_x_635_, lean_object* v___y_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_instMonadEIO___redArg___lam__6(v___f_631_, v_00_u03b1_632_, v_00_u03b2_633_, v_f_634_, v_x_635_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__7(lean_object* v_a_638_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_640_, 0, v_a_638_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__7___boxed(lean_object* v_a_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_instMonadEIO___redArg___lam__7(v_a_641_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__8(lean_object* v___f_644_, lean_object* v_00_u03b1_645_, lean_object* v_a_646_){
_start:
{
lean_object* v___x_648_; lean_object* v_toFun_649_; lean_object* v___f_650_; lean_object* v___x_651_; 
v___x_648_ = lean_apply_1(v___f_644_, lean_box(0));
v_toFun_649_ = lean_ctor_get(v___x_648_, 0);
lean_inc(v_toFun_649_);
lean_dec_ref(v___x_648_);
v___f_650_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__7___boxed), 2, 1);
lean_closure_set(v___f_650_, 0, v_a_646_);
v___x_651_ = lean_apply_2(v_toFun_649_, v___f_650_, lean_box(0));
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__8___boxed(lean_object* v___f_652_, lean_object* v_00_u03b1_653_, lean_object* v_a_654_, lean_object* v___y_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_instMonadEIO___redArg___lam__8(v___f_652_, v_00_u03b1_653_, v_a_654_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__9(lean_object* v_invFun_657_, lean_object* v_f_658_, lean_object* v___f_659_, lean_object* v_x_660_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = lean_apply_2(v_invFun_657_, v_f_658_, lean_box(0));
if (lean_obj_tag(v___x_662_) == 0)
{
lean_object* v_a_663_; lean_object* v___x_664_; lean_object* v_invFun_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_a_663_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_a_663_);
lean_dec_ref_known(v___x_662_, 1);
v___x_664_ = lean_apply_1(v___f_659_, lean_box(0));
v_invFun_665_ = lean_ctor_get(v___x_664_, 1);
lean_inc(v_invFun_665_);
lean_dec_ref(v___x_664_);
v___x_666_ = lean_box(0);
v___x_667_ = lean_apply_1(v_x_660_, v___x_666_);
v___x_668_ = lean_apply_2(v_invFun_665_, v___x_667_, lean_box(0));
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_677_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_677_ == 0)
{
v___x_671_ = v___x_668_;
v_isShared_672_ = v_isSharedCheck_677_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_668_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_677_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_673_ = lean_apply_1(v_a_663_, v_a_669_);
if (v_isShared_672_ == 0)
{
lean_ctor_set(v___x_671_, 0, v___x_673_);
v___x_675_ = v___x_671_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_673_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
lean_dec(v_a_663_);
v_a_678_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_668_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_668_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
else
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v_x_660_);
lean_dec_ref(v___f_659_);
v_a_686_ = lean_ctor_get(v___x_662_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_662_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_662_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_686_);
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
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object* v_invFun_694_, lean_object* v_f_695_, lean_object* v___f_696_, lean_object* v_x_697_, lean_object* v___y_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_instMonadEIO___redArg___lam__9(v_invFun_694_, v_f_695_, v___f_696_, v_x_697_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__10(lean_object* v___f_700_, lean_object* v_00_u03b1_701_, lean_object* v_00_u03b2_702_, lean_object* v_f_703_, lean_object* v_x_704_){
_start:
{
lean_object* v___x_706_; lean_object* v_toFun_707_; lean_object* v_invFun_708_; lean_object* v___f_709_; lean_object* v___x_710_; 
lean_inc_ref(v___f_700_);
v___x_706_ = lean_apply_1(v___f_700_, lean_box(0));
v_toFun_707_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_toFun_707_);
v_invFun_708_ = lean_ctor_get(v___x_706_, 1);
lean_inc(v_invFun_708_);
lean_dec_ref(v___x_706_);
v___f_709_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 5, 4);
lean_closure_set(v___f_709_, 0, v_invFun_708_);
lean_closure_set(v___f_709_, 1, v_f_703_);
lean_closure_set(v___f_709_, 2, v___f_700_);
lean_closure_set(v___f_709_, 3, v_x_704_);
v___x_710_ = lean_apply_2(v_toFun_707_, v___f_709_, lean_box(0));
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object* v___f_711_, lean_object* v_00_u03b1_712_, lean_object* v_00_u03b2_713_, lean_object* v_f_714_, lean_object* v_x_715_, lean_object* v___y_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_instMonadEIO___redArg___lam__10(v___f_711_, v_00_u03b1_712_, v_00_u03b2_713_, v_f_714_, v_x_715_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__11(lean_object* v_invFun_718_, lean_object* v_x_719_, lean_object* v___f_720_, lean_object* v_y_721_){
_start:
{
lean_object* v___x_723_; 
v___x_723_ = lean_apply_2(v_invFun_718_, v_x_719_, lean_box(0));
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_725_; lean_object* v_invFun_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref_known(v___x_723_, 1);
v___x_725_ = lean_apply_1(v___f_720_, lean_box(0));
v_invFun_726_ = lean_ctor_get(v___x_725_, 1);
lean_inc(v_invFun_726_);
lean_dec_ref(v___x_725_);
v___x_727_ = lean_box(0);
v___x_728_ = lean_apply_1(v_y_721_, v___x_727_);
v___x_729_ = lean_apply_2(v_invFun_726_, v___x_728_, lean_box(0));
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_736_ == 0)
{
lean_object* v_unused_737_; 
v_unused_737_ = lean_ctor_get(v___x_729_, 0);
lean_dec(v_unused_737_);
v___x_731_ = v___x_729_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_dec(v___x_729_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 0, v_a_724_);
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_724_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
lean_dec(v_a_724_);
v_a_738_ = lean_ctor_get(v___x_729_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_729_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_729_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
else
{
lean_dec_ref(v_y_721_);
lean_dec_ref(v___f_720_);
return v___x_723_;
}
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__11___boxed(lean_object* v_invFun_746_, lean_object* v_x_747_, lean_object* v___f_748_, lean_object* v_y_749_, lean_object* v___y_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_instMonadEIO___redArg___lam__11(v_invFun_746_, v_x_747_, v___f_748_, v_y_749_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__12(lean_object* v___f_752_, lean_object* v_00_u03b1_753_, lean_object* v_00_u03b2_754_, lean_object* v_x_755_, lean_object* v_y_756_){
_start:
{
lean_object* v___x_758_; lean_object* v_toFun_759_; lean_object* v_invFun_760_; lean_object* v___f_761_; lean_object* v___x_762_; 
lean_inc_ref(v___f_752_);
v___x_758_ = lean_apply_1(v___f_752_, lean_box(0));
v_toFun_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_toFun_759_);
v_invFun_760_ = lean_ctor_get(v___x_758_, 1);
lean_inc(v_invFun_760_);
lean_dec_ref(v___x_758_);
v___f_761_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__11___boxed), 5, 4);
lean_closure_set(v___f_761_, 0, v_invFun_760_);
lean_closure_set(v___f_761_, 1, v_x_755_);
lean_closure_set(v___f_761_, 2, v___f_752_);
lean_closure_set(v___f_761_, 3, v_y_756_);
v___x_762_ = lean_apply_2(v_toFun_759_, v___f_761_, lean_box(0));
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__12___boxed(lean_object* v___f_763_, lean_object* v_00_u03b1_764_, lean_object* v_00_u03b2_765_, lean_object* v_x_766_, lean_object* v_y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_instMonadEIO___redArg___lam__12(v___f_763_, v_00_u03b1_764_, v_00_u03b2_765_, v_x_766_, v_y_767_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__13(lean_object* v_invFun_770_, lean_object* v_x_771_, lean_object* v_y_772_, lean_object* v_invFun_773_){
_start:
{
lean_object* v___x_775_; 
v___x_775_ = lean_apply_2(v_invFun_770_, v_x_771_, lean_box(0));
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
lean_dec_ref_known(v___x_775_, 1);
v___x_776_ = lean_box(0);
v___x_777_ = lean_apply_1(v_y_772_, v___x_776_);
v___x_778_ = lean_apply_2(v_invFun_773_, v___x_777_, lean_box(0));
return v___x_778_;
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
lean_dec(v_invFun_773_);
lean_dec_ref(v_y_772_);
v_a_779_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_775_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_775_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__13___boxed(lean_object* v_invFun_787_, lean_object* v_x_788_, lean_object* v_y_789_, lean_object* v_invFun_790_, lean_object* v___y_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_instMonadEIO___redArg___lam__13(v_invFun_787_, v_x_788_, v_y_789_, v_invFun_790_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__14(lean_object* v___f_793_, lean_object* v_00_u03b1_794_, lean_object* v_00_u03b2_795_, lean_object* v_x_796_, lean_object* v_y_797_){
_start:
{
lean_object* v___x_799_; lean_object* v_toFun_800_; lean_object* v_invFun_801_; lean_object* v_invFun_802_; lean_object* v___f_803_; lean_object* v___x_804_; 
v___x_799_ = lean_apply_1(v___f_793_, lean_box(0));
v_toFun_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_toFun_800_);
v_invFun_801_ = lean_ctor_get(v___x_799_, 1);
lean_inc(v_invFun_801_);
v_invFun_802_ = lean_ctor_get(v___x_799_, 1);
lean_inc(v_invFun_802_);
lean_dec_ref(v___x_799_);
v___f_803_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__13___boxed), 5, 4);
lean_closure_set(v___f_803_, 0, v_invFun_802_);
lean_closure_set(v___f_803_, 1, v_x_796_);
lean_closure_set(v___f_803_, 2, v_y_797_);
lean_closure_set(v___f_803_, 3, v_invFun_801_);
v___x_804_ = lean_apply_2(v_toFun_800_, v___f_803_, lean_box(0));
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__14___boxed(lean_object* v___f_805_, lean_object* v_00_u03b1_806_, lean_object* v_00_u03b2_807_, lean_object* v_x_808_, lean_object* v_y_809_, lean_object* v___y_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_instMonadEIO___redArg___lam__14(v___f_805_, v_00_u03b1_806_, v_00_u03b2_807_, v_x_808_, v_y_809_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg(){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = ((lean_object*)(l_instMonadEIO___redArg___closed__10));
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___boxed(lean_object* v___dummy_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_instMonadEIO___redArg();
return v_res_842_;
}
}
static lean_object* _init_l_instMonadEIO___closed__0(void){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = l_instMonadEIO___redArg();
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO(lean_object* v_00_u03b5_844_){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = lean_obj_once(&l_instMonadEIO___closed__0, &l_instMonadEIO___closed__0_once, _init_l_instMonadEIO___closed__0);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__1(lean_object* v___f_846_, lean_object* v_f_847_, lean_object* v_a_x3f_848_){
_start:
{
lean_object* v___x_850_; lean_object* v_invFun_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_850_ = lean_apply_1(v___f_846_, lean_box(0));
v_invFun_851_ = lean_ctor_get(v___x_850_, 1);
lean_inc(v_invFun_851_);
lean_dec_ref(v___x_850_);
v___x_852_ = lean_apply_1(v_f_847_, v_a_x3f_848_);
v___x_853_ = lean_apply_2(v_invFun_851_, v___x_852_, lean_box(0));
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__1___boxed(lean_object* v___f_854_, lean_object* v_f_855_, lean_object* v_a_x3f_856_, lean_object* v___y_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_instMonadFinallyEIO___redArg___lam__1(v___f_854_, v_f_855_, v_a_x3f_856_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__0(lean_object* v_invFun_859_, lean_object* v_x_860_, lean_object* v___f_861_){
_start:
{
lean_object* v_r_863_; 
v_r_863_ = lean_apply_2(v_invFun_859_, v_x_860_, lean_box(0));
if (lean_obj_tag(v_r_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_889_; 
v_a_864_ = lean_ctor_get(v_r_863_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v_r_863_);
if (v_isSharedCheck_889_ == 0)
{
v___x_866_ = v_r_863_;
v_isShared_867_ = v_isSharedCheck_889_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v_r_863_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_889_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
lean_inc(v_a_864_);
if (v_isShared_867_ == 0)
{
lean_ctor_set_tag(v___x_866_, 1);
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_864_);
v___x_869_ = v_reuseFailAlloc_888_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
lean_object* v___x_870_; 
v___x_870_ = lean_apply_2(v___f_861_, v___x_869_, lean_box(0));
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_873_; uint8_t v_isShared_874_; uint8_t v_isSharedCheck_879_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_879_ == 0)
{
v___x_873_ = v___x_870_;
v_isShared_874_ = v_isSharedCheck_879_;
goto v_resetjp_872_;
}
else
{
lean_inc(v_a_871_);
lean_dec(v___x_870_);
v___x_873_ = lean_box(0);
v_isShared_874_ = v_isSharedCheck_879_;
goto v_resetjp_872_;
}
v_resetjp_872_:
{
lean_object* v___x_875_; lean_object* v___x_877_; 
v___x_875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_875_, 0, v_a_864_);
lean_ctor_set(v___x_875_, 1, v_a_871_);
if (v_isShared_874_ == 0)
{
lean_ctor_set(v___x_873_, 0, v___x_875_);
v___x_877_ = v___x_873_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_875_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
lean_dec(v_a_864_);
v_a_880_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_870_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_870_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
}
}
else
{
lean_object* v_a_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v_a_890_ = lean_ctor_get(v_r_863_, 0);
lean_inc(v_a_890_);
lean_dec_ref_known(v_r_863_, 1);
v___x_891_ = lean_box(0);
v___x_892_ = lean_apply_2(v___f_861_, v___x_891_, lean_box(0));
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_899_ == 0)
{
lean_object* v_unused_900_; 
v_unused_900_ = lean_ctor_get(v___x_892_, 0);
lean_dec(v_unused_900_);
v___x_894_ = v___x_892_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_dec(v___x_892_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
lean_ctor_set_tag(v___x_894_, 1);
lean_ctor_set(v___x_894_, 0, v_a_890_);
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_890_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
else
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_908_; 
lean_dec(v_a_890_);
v_a_901_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_908_ == 0)
{
v___x_903_ = v___x_892_;
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_892_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_906_; 
if (v_isShared_904_ == 0)
{
v___x_906_ = v___x_903_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_901_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__0___boxed(lean_object* v_invFun_909_, lean_object* v_x_910_, lean_object* v___f_911_, lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_instMonadFinallyEIO___redArg___lam__0(v_invFun_909_, v_x_910_, v___f_911_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__2(lean_object* v___f_914_, lean_object* v_00_u03b1_915_, lean_object* v_00_u03b2_916_, lean_object* v_x_917_, lean_object* v_f_918_){
_start:
{
lean_object* v___x_920_; lean_object* v_toFun_921_; lean_object* v_invFun_922_; lean_object* v___f_923_; lean_object* v___f_924_; lean_object* v___x_925_; 
lean_inc_ref(v___f_914_);
v___x_920_ = lean_apply_1(v___f_914_, lean_box(0));
v_toFun_921_ = lean_ctor_get(v___x_920_, 0);
lean_inc(v_toFun_921_);
v_invFun_922_ = lean_ctor_get(v___x_920_, 1);
lean_inc(v_invFun_922_);
lean_dec_ref(v___x_920_);
v___f_923_ = lean_alloc_closure((void*)(l_instMonadFinallyEIO___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_923_, 0, v___f_914_);
lean_closure_set(v___f_923_, 1, v_f_918_);
v___f_924_ = lean_alloc_closure((void*)(l_instMonadFinallyEIO___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_924_, 0, v_invFun_922_);
lean_closure_set(v___f_924_, 1, v_x_917_);
lean_closure_set(v___f_924_, 2, v___f_923_);
v___x_925_ = lean_apply_2(v_toFun_921_, v___f_924_, lean_box(0));
return v___x_925_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__2___boxed(lean_object* v___f_926_, lean_object* v_00_u03b1_927_, lean_object* v_00_u03b2_928_, lean_object* v_x_929_, lean_object* v_f_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_instMonadFinallyEIO___redArg___lam__2(v___f_926_, v_00_u03b1_927_, v_00_u03b2_928_, v_x_929_, v_f_930_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg(){
_start:
{
lean_object* v___f_936_; 
v___f_936_ = ((lean_object*)(l_instMonadFinallyEIO___redArg___closed__0));
return v___f_936_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___boxed(lean_object* v___dummy_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_instMonadFinallyEIO___redArg();
return v_res_938_;
}
}
static lean_object* _init_l_instMonadFinallyEIO___closed__0(void){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = l_instMonadFinallyEIO___redArg();
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO(lean_object* v_00_u03b5_940_){
_start:
{
lean_object* v___x_941_; 
v___x_941_ = lean_obj_once(&l_instMonadFinallyEIO___closed__0, &l_instMonadFinallyEIO___closed__0_once, _init_l_instMonadFinallyEIO___closed__0);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__1(lean_object* v_invFun_942_, lean_object* v_x_943_){
_start:
{
lean_object* v___x_945_; 
v___x_945_ = lean_apply_2(v_invFun_942_, v_x_943_, lean_box(0));
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_945_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_945_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
v_a_954_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_945_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_945_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
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
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__1___boxed(lean_object* v_invFun_962_, lean_object* v_x_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_instMonadAttachEIO___redArg___lam__1(v_invFun_962_, v_x_963_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__0(lean_object* v___f_966_, lean_object* v_00_u03b1_967_, lean_object* v_x_968_){
_start:
{
lean_object* v___x_970_; lean_object* v_toFun_971_; lean_object* v_invFun_972_; lean_object* v___f_973_; lean_object* v___x_974_; 
v___x_970_ = lean_apply_1(v___f_966_, lean_box(0));
v_toFun_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_toFun_971_);
v_invFun_972_ = lean_ctor_get(v___x_970_, 1);
lean_inc(v_invFun_972_);
lean_dec_ref(v___x_970_);
v___f_973_ = lean_alloc_closure((void*)(l_instMonadAttachEIO___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_973_, 0, v_invFun_972_);
lean_closure_set(v___f_973_, 1, v_x_968_);
v___x_974_ = lean_apply_2(v_toFun_971_, v___f_973_, lean_box(0));
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__0___boxed(lean_object* v___f_975_, lean_object* v_00_u03b1_976_, lean_object* v_x_977_, lean_object* v___y_978_){
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l_instMonadAttachEIO___redArg___lam__0(v___f_975_, v_00_u03b1_976_, v_x_977_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg(){
_start:
{
lean_object* v___f_983_; 
v___f_983_ = ((lean_object*)(l_instMonadAttachEIO___redArg___closed__0));
return v___f_983_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___boxed(lean_object* v___dummy_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l_instMonadAttachEIO___redArg();
return v_res_985_;
}
}
static lean_object* _init_l_instMonadAttachEIO___closed__0(void){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = l_instMonadAttachEIO___redArg();
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO(lean_object* v_00_u03b5_987_){
_start:
{
lean_object* v___x_988_; 
v___x_988_ = lean_obj_once(&l_instMonadAttachEIO___closed__0, &l_instMonadAttachEIO___closed__0_once, _init_l_instMonadAttachEIO___closed__0);
return v___x_988_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__1(lean_object* v___f_989_, lean_object* v_00_u03b1_990_, lean_object* v_ex_991_){
_start:
{
lean_object* v___x_993_; lean_object* v_toFun_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_993_ = lean_apply_1(v___f_989_, lean_box(0));
v_toFun_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_toFun_994_);
lean_dec_ref(v___x_993_);
v___x_995_ = lean_alloc_closure((void*)(l_EST_throw___boxed), 5, 4);
lean_closure_set(v___x_995_, 0, lean_box(0));
lean_closure_set(v___x_995_, 1, lean_box(0));
lean_closure_set(v___x_995_, 2, lean_box(0));
lean_closure_set(v___x_995_, 3, v_ex_991_);
v___x_996_ = lean_apply_2(v_toFun_994_, v___x_995_, lean_box(0));
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__1___boxed(lean_object* v___f_997_, lean_object* v_00_u03b1_998_, lean_object* v_ex_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_instMonadExceptOfEIO___redArg___lam__1(v___f_997_, v_00_u03b1_998_, v_ex_999_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__0(lean_object* v_handler_1002_, lean_object* v_invFun_1003_, lean_object* v_ex_1004_){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = lean_apply_1(v_handler_1002_, v_ex_1004_);
v___x_1007_ = lean_apply_2(v_invFun_1003_, v___x_1006_, lean_box(0));
return v___x_1007_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__0___boxed(lean_object* v_handler_1008_, lean_object* v_invFun_1009_, lean_object* v_ex_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_instMonadExceptOfEIO___redArg___lam__0(v_handler_1008_, v_invFun_1009_, v_ex_1010_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__2(lean_object* v___f_1013_, lean_object* v_00_u03b1_1014_, lean_object* v_body_1015_, lean_object* v_handler_1016_){
_start:
{
lean_object* v___x_1018_; lean_object* v_toFun_1019_; lean_object* v_invFun_1020_; lean_object* v___f_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1018_ = lean_apply_1(v___f_1013_, lean_box(0));
v_toFun_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_toFun_1019_);
v_invFun_1020_ = lean_ctor_get(v___x_1018_, 1);
lean_inc_n(v_invFun_1020_, 2);
lean_dec_ref(v___x_1018_);
v___f_1021_ = lean_alloc_closure((void*)(l_instMonadExceptOfEIO___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1021_, 0, v_handler_1016_);
lean_closure_set(v___f_1021_, 1, v_invFun_1020_);
v___x_1022_ = lean_apply_1(v_invFun_1020_, v_body_1015_);
v___x_1023_ = lean_alloc_closure((void*)(l_EST_tryCatch___boxed), 6, 5);
lean_closure_set(v___x_1023_, 0, lean_box(0));
lean_closure_set(v___x_1023_, 1, lean_box(0));
lean_closure_set(v___x_1023_, 2, lean_box(0));
lean_closure_set(v___x_1023_, 3, v___x_1022_);
lean_closure_set(v___x_1023_, 4, v___f_1021_);
v___x_1024_ = lean_apply_2(v_toFun_1019_, v___x_1023_, lean_box(0));
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__2___boxed(lean_object* v___f_1025_, lean_object* v_00_u03b1_1026_, lean_object* v_body_1027_, lean_object* v_handler_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_instMonadExceptOfEIO___redArg___lam__2(v___f_1025_, v_00_u03b1_1026_, v_body_1027_, v_handler_1028_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg(){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = ((lean_object*)(l_instMonadExceptOfEIO___redArg___closed__2));
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___boxed(lean_object* v___dummy_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_instMonadExceptOfEIO___redArg();
return v_res_1041_;
}
}
static lean_object* _init_l_instMonadExceptOfEIO___closed__0(void){
_start:
{
lean_object* v___x_1042_; 
v___x_1042_ = l_instMonadExceptOfEIO___redArg();
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO(lean_object* v_00_u03b5_1043_){
_start:
{
lean_object* v___x_1044_; 
v___x_1044_ = lean_obj_once(&l_instMonadExceptOfEIO___closed__0, &l_instMonadExceptOfEIO___closed__0_once, _init_l_instMonadExceptOfEIO___closed__0);
return v___x_1044_;
}
}
static lean_object* _init_l_instOrElseEIO___redArg___closed__0(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = lean_obj_once(&l_instMonadExceptOfEIO___closed__0, &l_instMonadExceptOfEIO___closed__0_once, _init_l_instMonadExceptOfEIO___closed__0);
v___x_1046_ = l_instMonadExceptOfMonadExceptOf___redArg(v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l_instOrElseEIO___redArg___closed__1(void){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; 
v___x_1047_ = lean_obj_once(&l_instOrElseEIO___redArg___closed__0, &l_instOrElseEIO___redArg___closed__0_once, _init_l_instOrElseEIO___redArg___closed__0);
v___x_1048_ = lean_alloc_closure((void*)(l_MonadExcept_orElse), 6, 4);
lean_closure_set(v___x_1048_, 0, lean_box(0));
lean_closure_set(v___x_1048_, 1, lean_box(0));
lean_closure_set(v___x_1048_, 2, v___x_1047_);
lean_closure_set(v___x_1048_, 3, lean_box(0));
return v___x_1048_;
}
}
LEAN_EXPORT lean_object* l_instOrElseEIO___redArg(){
_start:
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_obj_once(&l_instOrElseEIO___redArg___closed__1, &l_instOrElseEIO___redArg___closed__1_once, _init_l_instOrElseEIO___redArg___closed__1);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_instOrElseEIO___redArg___boxed(lean_object* v___dummy_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_instOrElseEIO___redArg();
return v_res_1052_;
}
}
static lean_object* _init_l_instOrElseEIO___closed__0(void){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_instOrElseEIO___redArg();
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_instOrElseEIO(lean_object* v_00_u03b5_1054_, lean_object* v_00_u03b1_1055_){
_start:
{
lean_object* v___x_1056_; 
v___x_1056_ = lean_obj_once(&l_instOrElseEIO___closed__0, &l_instOrElseEIO___closed__0_once, _init_l_instOrElseEIO___closed__0);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedEIO___redArg___lam__0(lean_object* v_inst_1057_){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1059_, 0, v_inst_1057_);
return v___x_1059_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedEIO___redArg___lam__0___boxed(lean_object* v_inst_1060_, lean_object* v_s_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_instInhabitedEIO___redArg___lam__0(v_inst_1060_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedEIO___redArg(lean_object* v_inst_1063_){
_start:
{
lean_object* v___f_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___f_1064_ = lean_alloc_closure((void*)(l_instInhabitedEIO___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1064_, 0, v_inst_1063_);
v___x_1065_ = lean_alloc_closure((void*)(l_EST_mk___boxed), 5, 4);
lean_closure_set(v___x_1065_, 0, lean_box(0));
lean_closure_set(v___x_1065_, 1, lean_box(0));
lean_closure_set(v___x_1065_, 2, lean_box(0));
lean_closure_set(v___x_1065_, 3, v___f_1064_);
v___x_1066_ = lean_alloc_closure((void*)(l_EIO_mk___boxed), 4, 3);
lean_closure_set(v___x_1066_, 0, lean_box(0));
lean_closure_set(v___x_1066_, 1, lean_box(0));
lean_closure_set(v___x_1066_, 2, v___x_1065_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedEIO(lean_object* v_00_u03b5_1067_, lean_object* v_00_u03b1_1068_, lean_object* v_inst_1069_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_instInhabitedEIO___redArg(v_inst_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_EIO_map___redArg(lean_object* v_f_1071_, lean_object* v_x_1072_){
_start:
{
lean_object* v___x_1074_; 
v___x_1074_ = lean_apply_1(v_x_1072_, lean_box(0));
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1083_; 
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1077_ = v___x_1074_;
v_isShared_1078_ = v_isSharedCheck_1083_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1074_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1083_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1079_; lean_object* v___x_1081_; 
v___x_1079_ = lean_apply_1(v_f_1071_, v_a_1075_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v___x_1079_);
v___x_1081_ = v___x_1077_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v___x_1079_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1091_; 
lean_dec(v_f_1071_);
v_a_1084_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1086_ = v___x_1074_;
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1074_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1089_; 
if (v_isShared_1087_ == 0)
{
v___x_1089_ = v___x_1086_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_a_1084_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_map___redArg___boxed(lean_object* v_f_1092_, lean_object* v_x_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_EIO_map___redArg(v_f_1092_, v_x_1093_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_EIO_map(lean_object* v_00_u03b1_1096_, lean_object* v_00_u03b2_1097_, lean_object* v_00_u03b5_1098_, lean_object* v_f_1099_, lean_object* v_x_1100_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = lean_apply_1(v_x_1100_, lean_box(0));
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1111_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1105_ = v___x_1102_;
v_isShared_1106_ = v_isSharedCheck_1111_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1102_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1111_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1109_; 
v___x_1107_ = lean_apply_1(v_f_1099_, v_a_1103_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 0, v___x_1107_);
v___x_1109_ = v___x_1105_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1119_; 
lean_dec(v_f_1099_);
v_a_1112_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1114_ = v___x_1102_;
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1102_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1117_; 
if (v_isShared_1115_ == 0)
{
v___x_1117_ = v___x_1114_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_a_1112_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_map___boxed(lean_object* v_00_u03b1_1120_, lean_object* v_00_u03b2_1121_, lean_object* v_00_u03b5_1122_, lean_object* v_f_1123_, lean_object* v_x_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_EIO_map(v_00_u03b1_1120_, v_00_u03b2_1121_, v_00_u03b5_1122_, v_f_1123_, v_x_1124_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_EIO_throw___redArg(lean_object* v_e_1127_){
_start:
{
lean_object* v___x_1129_; 
v___x_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1129_, 0, v_e_1127_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_EIO_throw___redArg___boxed(lean_object* v_e_1130_, lean_object* v___y_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l_EIO_throw___redArg(v_e_1130_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_EIO_throw(lean_object* v_00_u03b5_1133_, lean_object* v_00_u03b1_1134_, lean_object* v_e_1135_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1137_, 0, v_e_1135_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_EIO_throw___boxed(lean_object* v_00_u03b5_1138_, lean_object* v_00_u03b1_1139_, lean_object* v_e_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v_res_1142_; 
v_res_1142_ = l_EIO_throw(v_00_u03b5_1138_, v_00_u03b1_1139_, v_e_1140_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_EIO_tryCatch___redArg(lean_object* v_x_1143_, lean_object* v_handle_1144_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = lean_apply_1(v_x_1143_, lean_box(0));
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_dec_ref(v_handle_1144_);
return v___x_1146_;
}
else
{
lean_object* v_a_1147_; lean_object* v___x_1148_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref_known(v___x_1146_, 1);
v___x_1148_ = lean_apply_2(v_handle_1144_, v_a_1147_, lean_box(0));
return v___x_1148_;
}
}
}
LEAN_EXPORT lean_object* l_EIO_tryCatch___redArg___boxed(lean_object* v_x_1149_, lean_object* v_handle_1150_, lean_object* v___y_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l_EIO_tryCatch___redArg(v_x_1149_, v_handle_1150_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l_EIO_tryCatch(lean_object* v_00_u03b5_1153_, lean_object* v_00_u03b1_1154_, lean_object* v_x_1155_, lean_object* v_handle_1156_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = lean_apply_1(v_x_1155_, lean_box(0));
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_dec_ref(v_handle_1156_);
return v___x_1158_;
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1160_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc(v_a_1159_);
lean_dec_ref_known(v___x_1158_, 1);
v___x_1160_ = lean_apply_2(v_handle_1156_, v_a_1159_, lean_box(0));
return v___x_1160_;
}
}
}
LEAN_EXPORT lean_object* l_EIO_tryCatch___boxed(lean_object* v_00_u03b5_1161_, lean_object* v_00_u03b1_1162_, lean_object* v_x_1163_, lean_object* v_handle_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_EIO_tryCatch(v_00_u03b5_1161_, v_00_u03b1_1162_, v_x_1163_, v_handle_1164_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_EIO_ofExcept___redArg(lean_object* v_e_1167_){
_start:
{
if (lean_obj_tag(v_e_1167_) == 0)
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1176_; 
v_a_1169_ = lean_ctor_get(v_e_1167_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v_e_1167_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1171_ = v_e_1167_;
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v_e_1167_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1176_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
lean_ctor_set_tag(v___x_1171_, 1);
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1175_; 
v_reuseFailAlloc_1175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1175_, 0, v_a_1169_);
v___x_1174_ = v_reuseFailAlloc_1175_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
return v___x_1174_;
}
}
}
else
{
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1184_; 
v_a_1177_ = lean_ctor_get(v_e_1167_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v_e_1167_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1179_ = v_e_1167_;
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v_e_1167_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1182_; 
if (v_isShared_1180_ == 0)
{
lean_ctor_set_tag(v___x_1179_, 0);
v___x_1182_ = v___x_1179_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_a_1177_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_ofExcept___redArg___boxed(lean_object* v_e_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_EIO_ofExcept___redArg(v_e_1185_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_EIO_ofExcept(lean_object* v_00_u03b5_1188_, lean_object* v_00_u03b1_1189_, lean_object* v_e_1190_){
_start:
{
if (lean_obj_tag(v_e_1190_) == 0)
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
v_a_1192_ = lean_ctor_get(v_e_1190_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_e_1190_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v_e_1190_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v_e_1190_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
lean_ctor_set_tag(v___x_1194_, 1);
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
else
{
lean_object* v_a_1200_; lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1207_; 
v_a_1200_ = lean_ctor_get(v_e_1190_, 0);
v_isSharedCheck_1207_ = !lean_is_exclusive(v_e_1190_);
if (v_isSharedCheck_1207_ == 0)
{
v___x_1202_ = v_e_1190_;
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
else
{
lean_inc(v_a_1200_);
lean_dec(v_e_1190_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1207_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1205_; 
if (v_isShared_1203_ == 0)
{
lean_ctor_set_tag(v___x_1202_, 0);
v___x_1205_ = v___x_1202_;
goto v_reusejp_1204_;
}
else
{
lean_object* v_reuseFailAlloc_1206_; 
v_reuseFailAlloc_1206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1206_, 0, v_a_1200_);
v___x_1205_ = v_reuseFailAlloc_1206_;
goto v_reusejp_1204_;
}
v_reusejp_1204_:
{
return v___x_1205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_ofExcept___boxed(lean_object* v_00_u03b5_1208_, lean_object* v_00_u03b1_1209_, lean_object* v_e_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v_res_1212_; 
v_res_1212_ = l_EIO_ofExcept(v_00_u03b5_1208_, v_00_u03b1_1209_, v_e_1210_);
return v_res_1212_;
}
}
LEAN_EXPORT lean_object* l_EIO_adapt___redArg(lean_object* v_f_1213_, lean_object* v_m_1214_){
_start:
{
lean_object* v___x_1216_; 
v___x_1216_ = lean_apply_1(v_m_1214_, lean_box(0));
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_dec(v_f_1213_);
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1216_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1216_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1233_; 
v_a_1225_ = lean_ctor_get(v___x_1216_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1227_ = v___x_1216_;
v_isShared_1228_ = v_isSharedCheck_1233_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1216_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1233_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1229_; lean_object* v___x_1231_; 
v___x_1229_ = lean_apply_1(v_f_1213_, v_a_1225_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 0, v___x_1229_);
v___x_1231_ = v___x_1227_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v___x_1229_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_adapt___redArg___boxed(lean_object* v_f_1234_, lean_object* v_m_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_EIO_adapt___redArg(v_f_1234_, v_m_1235_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_EIO_adapt(lean_object* v_00_u03b5_1238_, lean_object* v_00_u03b5_x27_1239_, lean_object* v_00_u03b1_1240_, lean_object* v_f_1241_, lean_object* v_m_1242_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = lean_apply_1(v_m_1242_, lean_box(0));
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1252_; 
lean_dec(v_f_1241_);
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1247_ = v___x_1244_;
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___x_1244_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1248_ == 0)
{
v___x_1250_ = v___x_1247_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1245_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
else
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1261_; 
v_a_1253_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1255_ = v___x_1244_;
v_isShared_1256_ = v_isSharedCheck_1261_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1244_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1261_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1257_; lean_object* v___x_1259_; 
v___x_1257_ = lean_apply_1(v_f_1241_, v_a_1253_);
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 0, v___x_1257_);
v___x_1259_ = v___x_1255_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v___x_1257_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_adapt___boxed(lean_object* v_00_u03b5_1262_, lean_object* v_00_u03b5_x27_1263_, lean_object* v_00_u03b1_1264_, lean_object* v_f_1265_, lean_object* v_m_1266_, lean_object* v___y_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_EIO_adapt(v_00_u03b5_1262_, v_00_u03b5_x27_1263_, v_00_u03b1_1264_, v_f_1265_, v_m_1266_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_EIO_adaptExcept___redArg(lean_object* v_f_1269_, lean_object* v_m_1270_){
_start:
{
lean_object* v___x_1272_; 
v___x_1272_ = lean_apply_1(v_m_1270_, lean_box(0));
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1280_; 
lean_dec(v_f_1269_);
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1275_ = v___x_1272_;
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1272_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1280_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v___x_1278_; 
if (v_isShared_1276_ == 0)
{
v___x_1278_ = v___x_1275_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v_a_1273_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1289_; 
v_a_1281_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1283_ = v___x_1272_;
v_isShared_1284_ = v_isSharedCheck_1289_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1272_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1289_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1285_; lean_object* v___x_1287_; 
v___x_1285_ = lean_apply_1(v_f_1269_, v_a_1281_);
if (v_isShared_1284_ == 0)
{
lean_ctor_set(v___x_1283_, 0, v___x_1285_);
v___x_1287_ = v___x_1283_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v___x_1285_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_adaptExcept___redArg___boxed(lean_object* v_f_1290_, lean_object* v_m_1291_, lean_object* v___y_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_EIO_adaptExcept___redArg(v_f_1290_, v_m_1291_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_EIO_adaptExcept(lean_object* v_00_u03b5_1294_, lean_object* v_00_u03b5_x27_1295_, lean_object* v_00_u03b1_1296_, lean_object* v_f_1297_, lean_object* v_m_1298_){
_start:
{
lean_object* v___x_1300_; 
v___x_1300_ = lean_apply_1(v_m_1298_, lean_box(0));
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_dec(v_f_1297_);
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1300_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1300_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
else
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1317_; 
v_a_1309_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1311_ = v___x_1300_;
v_isShared_1312_ = v_isSharedCheck_1317_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1300_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1317_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1313_; lean_object* v___x_1315_; 
v___x_1313_ = lean_apply_1(v_f_1297_, v_a_1309_);
if (v_isShared_1312_ == 0)
{
lean_ctor_set(v___x_1311_, 0, v___x_1313_);
v___x_1315_ = v___x_1311_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v___x_1313_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_adaptExcept___boxed(lean_object* v_00_u03b5_1318_, lean_object* v_00_u03b5_x27_1319_, lean_object* v_00_u03b1_1320_, lean_object* v_f_1321_, lean_object* v_m_1322_, lean_object* v___y_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_EIO_adaptExcept(v_00_u03b5_1318_, v_00_u03b5_x27_1319_, v_00_u03b1_1320_, v_f_1321_, v_m_1322_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toIO___redArg(lean_object* v_act_1325_){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = lean_apply_1(v_act_1325_, lean_box(0));
v___x_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toIO___redArg___boxed(lean_object* v_act_1329_, lean_object* v___y_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l_BaseIO_toIO___redArg(v_act_1329_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toIO(lean_object* v_00_u03b1_1332_, lean_object* v_act_1333_){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = lean_apply_1(v_act_1333_, lean_box(0));
v___x_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toIO___boxed(lean_object* v_00_u03b1_1337_, lean_object* v_act_1338_, lean_object* v___y_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l_BaseIO_toIO(v_00_u03b1_1337_, v_act_1338_);
return v_res_1340_;
}
}
LEAN_EXPORT lean_object* l_EIO_toIO___redArg(lean_object* v_f_1341_, lean_object* v_act_1342_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_apply_1(v_act_1342_, lean_box(0));
if (lean_obj_tag(v___x_1344_) == 0)
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1352_; 
lean_dec_ref(v_f_1341_);
v_a_1345_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1347_ = v___x_1344_;
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1344_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1350_; 
if (v_isShared_1348_ == 0)
{
v___x_1350_ = v___x_1347_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_a_1345_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
return v___x_1350_;
}
}
}
else
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1361_; 
v_a_1353_ = lean_ctor_get(v___x_1344_, 0);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1344_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1355_ = v___x_1344_;
v_isShared_1356_ = v_isSharedCheck_1361_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1344_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1361_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1357_; lean_object* v___x_1359_; 
v___x_1357_ = lean_apply_1(v_f_1341_, v_a_1353_);
if (v_isShared_1356_ == 0)
{
lean_ctor_set(v___x_1355_, 0, v___x_1357_);
v___x_1359_ = v___x_1355_;
goto v_reusejp_1358_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1357_);
v___x_1359_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1358_;
}
v_reusejp_1358_:
{
return v___x_1359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toIO___redArg___boxed(lean_object* v_f_1362_, lean_object* v_act_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l_EIO_toIO___redArg(v_f_1362_, v_act_1363_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l_EIO_toIO(lean_object* v_00_u03b5_1366_, lean_object* v_00_u03b1_1367_, lean_object* v_f_1368_, lean_object* v_act_1369_){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_apply_1(v_act_1369_, lean_box(0));
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
lean_dec_ref(v_f_1368_);
v_a_1372_ = lean_ctor_get(v___x_1371_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1371_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1371_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1371_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
else
{
lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1388_; 
v_a_1380_ = lean_ctor_get(v___x_1371_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1371_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1382_ = v___x_1371_;
v_isShared_1383_ = v_isSharedCheck_1388_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_dec(v___x_1371_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1388_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1384_; lean_object* v___x_1386_; 
v___x_1384_ = lean_apply_1(v_f_1368_, v_a_1380_);
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 0, v___x_1384_);
v___x_1386_ = v___x_1382_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toIO___boxed(lean_object* v_00_u03b5_1389_, lean_object* v_00_u03b1_1390_, lean_object* v_f_1391_, lean_object* v_act_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v_res_1394_; 
v_res_1394_ = l_EIO_toIO(v_00_u03b5_1389_, v_00_u03b1_1390_, v_f_1391_, v_act_1392_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l_EIO_toIO_x27___redArg(lean_object* v_act_1395_){
_start:
{
lean_object* v___x_1397_; 
v___x_1397_ = lean_apply_1(v_act_1395_, lean_box(0));
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1406_; 
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1400_ = v___x_1397_;
v_isShared_1401_ = v_isSharedCheck_1406_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1397_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1406_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; lean_object* v___x_1404_; 
v___x_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1402_, 0, v_a_1398_);
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v___x_1402_);
v___x_1404_ = v___x_1400_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v___x_1402_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
else
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1415_; 
v_a_1407_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1409_ = v___x_1397_;
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1397_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1411_; lean_object* v___x_1413_; 
v___x_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1411_, 0, v_a_1407_);
if (v_isShared_1410_ == 0)
{
lean_ctor_set_tag(v___x_1409_, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1411_);
v___x_1413_ = v___x_1409_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toIO_x27___redArg___boxed(lean_object* v_act_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = l_EIO_toIO_x27___redArg(v_act_1416_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_EIO_toIO_x27(lean_object* v_00_u03b5_1419_, lean_object* v_00_u03b1_1420_, lean_object* v_act_1421_){
_start:
{
lean_object* v___x_1423_; 
v___x_1423_ = lean_apply_1(v_act_1421_, lean_box(0));
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1432_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1432_ == 0)
{
v___x_1426_ = v___x_1423_;
v_isShared_1427_ = v_isSharedCheck_1432_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v___x_1423_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1432_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1428_; lean_object* v___x_1430_; 
v___x_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1428_, 0, v_a_1424_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v___x_1428_);
v___x_1430_ = v___x_1426_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1428_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
else
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1441_; 
v_a_1433_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1435_ = v___x_1423_;
v_isShared_1436_ = v_isSharedCheck_1441_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1423_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1441_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1437_, 0, v_a_1433_);
if (v_isShared_1436_ == 0)
{
lean_ctor_set_tag(v___x_1435_, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1437_);
v___x_1439_ = v___x_1435_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toIO_x27___boxed(lean_object* v_00_u03b5_1442_, lean_object* v_00_u03b1_1443_, lean_object* v_act_1444_, lean_object* v___y_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_EIO_toIO_x27(v_00_u03b5_1442_, v_00_u03b1_1443_, v_act_1444_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_IO_toEIO___redArg(lean_object* v_f_1447_, lean_object* v_act_1448_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_apply_1(v_act_1448_, lean_box(0));
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
lean_dec(v_f_1447_);
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1453_ = v___x_1450_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1450_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_a_1451_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
else
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1467_; 
v_a_1459_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1461_ = v___x_1450_;
v_isShared_1462_ = v_isSharedCheck_1467_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1450_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1467_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1463_; lean_object* v___x_1465_; 
v___x_1463_ = lean_apply_1(v_f_1447_, v_a_1459_);
if (v_isShared_1462_ == 0)
{
lean_ctor_set(v___x_1461_, 0, v___x_1463_);
v___x_1465_ = v___x_1461_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v___x_1463_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_toEIO___redArg___boxed(lean_object* v_f_1468_, lean_object* v_act_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_IO_toEIO___redArg(v_f_1468_, v_act_1469_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_IO_toEIO(lean_object* v_00_u03b5_1472_, lean_object* v_00_u03b1_1473_, lean_object* v_f_1474_, lean_object* v_act_1475_){
_start:
{
lean_object* v___x_1477_; 
v___x_1477_ = lean_apply_1(v_act_1475_, lean_box(0));
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
lean_dec(v_f_1474_);
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1477_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1477_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1494_; 
v_a_1486_ = lean_ctor_get(v___x_1477_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1488_ = v___x_1477_;
v_isShared_1489_ = v_isSharedCheck_1494_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1477_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1494_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1490_; lean_object* v___x_1492_; 
v___x_1490_ = lean_apply_1(v_f_1474_, v_a_1486_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 0, v___x_1490_);
v___x_1492_ = v___x_1488_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1490_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_toEIO___boxed(lean_object* v_00_u03b5_1495_, lean_object* v_00_u03b1_1496_, lean_object* v_f_1497_, lean_object* v_act_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l_IO_toEIO(v_00_u03b5_1495_, v_00_u03b1_1496_, v_f_1497_, v_act_1498_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_unsafeBaseIO___redArg(lean_object* v_fn_1501_){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = lean_box(0);
v___x_1503_ = lean_apply_1(v_fn_1501_, v___x_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_unsafeBaseIO(lean_object* v_00_u03b1_1504_, lean_object* v_fn_1505_){
_start:
{
lean_object* v___x_1506_; 
v___x_1506_ = l_unsafeBaseIO___redArg(v_fn_1505_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l_unsafeEIO___redArg(lean_object* v_fn_1507_){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1508_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1508_, 0, lean_box(0));
lean_closure_set(v___x_1508_, 1, lean_box(0));
lean_closure_set(v___x_1508_, 2, v_fn_1507_);
v___x_1509_ = l_unsafeBaseIO___redArg(v___x_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_unsafeEIO(lean_object* v_00_u03b5_1510_, lean_object* v_00_u03b1_1511_, lean_object* v_fn_1512_){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1513_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1513_, 0, lean_box(0));
lean_closure_set(v___x_1513_, 1, lean_box(0));
lean_closure_set(v___x_1513_, 2, v_fn_1512_);
v___x_1514_ = l_unsafeBaseIO___redArg(v___x_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_unsafeIO___redArg(lean_object* v_fn_1515_){
_start:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1516_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1516_, 0, lean_box(0));
lean_closure_set(v___x_1516_, 1, lean_box(0));
lean_closure_set(v___x_1516_, 2, v_fn_1515_);
v___x_1517_ = l_unsafeBaseIO___redArg(v___x_1516_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l_unsafeIO(lean_object* v_00_u03b1_1518_, lean_object* v_fn_1519_){
_start:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1520_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1520_, 0, lean_box(0));
lean_closure_set(v___x_1520_, 1, lean_box(0));
lean_closure_set(v___x_1520_, 2, v_fn_1519_);
v___x_1521_ = l_unsafeBaseIO___redArg(v___x_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_timeit___boxed(lean_object* v_00_u03b1_1526_, lean_object* v_msg_1527_, lean_object* v_fn_1528_, lean_object* v_a_00___x40___internal___hyg_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = lean_io_timeit(v_msg_1527_, v_fn_1528_);
lean_dec_ref(v_msg_1527_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l_allocprof___boxed(lean_object* v_00_u03b1_1535_, lean_object* v_msg_1536_, lean_object* v_fn_1537_, lean_object* v_a_00___x40___internal___hyg_1538_){
_start:
{
lean_object* v_res_1539_; 
v_res_1539_ = lean_io_allocprof(v_msg_1536_, v_fn_1537_);
lean_dec_ref(v_msg_1536_);
return v_res_1539_;
}
}
LEAN_EXPORT lean_object* l_IO_initializing___boxed(lean_object* v_a_00___x40___internal___hyg_1541_){
_start:
{
uint8_t v_res_1542_; lean_object* v_r_1543_; 
v_res_1542_ = lean_io_initializing();
v_r_1543_ = lean_box(v_res_1542_);
return v_r_1543_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_asTask___boxed(lean_object* v_00_u03b1_1548_, lean_object* v_act_1549_, lean_object* v_prio_1550_, lean_object* v_a_00___x40___internal___hyg_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = lean_io_as_task(v_act_1549_, v_prio_1550_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mapTask___boxed(lean_object* v_00_u03b1_1560_, lean_object* v_00_u03b2_1561_, lean_object* v_f_1562_, lean_object* v_t_1563_, lean_object* v_prio_1564_, lean_object* v_sync_1565_, lean_object* v_a_00___x40___internal___hyg_1566_){
_start:
{
uint8_t v_sync_boxed_1567_; lean_object* v_res_1568_; 
v_sync_boxed_1567_ = lean_unbox(v_sync_1565_);
v_res_1568_ = lean_io_map_task(v_f_1562_, v_t_1563_, v_prio_1564_, v_sync_boxed_1567_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_bindTask___boxed(lean_object* v_00_u03b1_1576_, lean_object* v_00_u03b2_1577_, lean_object* v_t_1578_, lean_object* v_f_1579_, lean_object* v_prio_1580_, lean_object* v_sync_1581_, lean_object* v_a_00___x40___internal___hyg_1582_){
_start:
{
uint8_t v_sync_boxed_1583_; lean_object* v_res_1584_; 
v_sync_boxed_1583_ = lean_unbox(v_sync_1581_);
v_res_1584_ = lean_io_bind_task(v_t_1578_, v_f_1579_, v_prio_1580_, v_sync_boxed_1583_);
return v_res_1584_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_chainTask___redArg(lean_object* v_t_1585_, lean_object* v_f_1586_, lean_object* v_prio_1587_, uint8_t v_sync_1588_){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1590_ = lean_box(0);
v___x_1591_ = lean_io_map_task(v_f_1586_, v_t_1585_, v_prio_1587_, v_sync_1588_);
lean_dec_ref(v___x_1591_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_chainTask___redArg___boxed(lean_object* v_t_1592_, lean_object* v_f_1593_, lean_object* v_prio_1594_, lean_object* v_sync_1595_, lean_object* v___y_1596_){
_start:
{
uint8_t v_sync_boxed_1597_; lean_object* v_res_1598_; 
v_sync_boxed_1597_ = lean_unbox(v_sync_1595_);
v_res_1598_ = l_BaseIO_chainTask___redArg(v_t_1592_, v_f_1593_, v_prio_1594_, v_sync_boxed_1597_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_chainTask(lean_object* v_00_u03b1_1599_, lean_object* v_t_1600_, lean_object* v_f_1601_, lean_object* v_prio_1602_, uint8_t v_sync_1603_){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = l_BaseIO_chainTask___redArg(v_t_1600_, v_f_1601_, v_prio_1602_, v_sync_1603_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_chainTask___boxed(lean_object* v_00_u03b1_1606_, lean_object* v_t_1607_, lean_object* v_f_1608_, lean_object* v_prio_1609_, lean_object* v_sync_1610_, lean_object* v___y_1611_){
_start:
{
uint8_t v_sync_boxed_1612_; lean_object* v_res_1613_; 
v_sync_boxed_1612_ = lean_unbox(v_sync_1610_);
v_res_1613_ = l_BaseIO_chainTask(v_00_u03b1_1606_, v_t_1607_, v_f_1608_, v_prio_1609_, v_sync_boxed_1612_);
return v_res_1613_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__0(lean_object* v_x_1614_, lean_object* v_f_1615_, lean_object* v_a_1616_){
_start:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1618_, 0, v_a_1616_);
lean_ctor_set(v___x_1618_, 1, v_x_1614_);
v___x_1619_ = l_List_reverse___redArg(v___x_1618_);
v___x_1620_ = lean_apply_2(v_f_1615_, v___x_1619_, lean_box(0));
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__0___boxed(lean_object* v_x_1621_, lean_object* v_f_1622_, lean_object* v_a_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__0(v_x_1621_, v_f_1622_, v_a_1623_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__1___boxed(lean_object* v_x_1626_, lean_object* v_f_1627_, lean_object* v_prio_1628_, lean_object* v_sync_1629_, lean_object* v_tail_1630_, lean_object* v_a_1631_, lean_object* v___y_1632_){
_start:
{
uint8_t v_sync_boxed_1633_; lean_object* v_res_1634_; 
v_sync_boxed_1633_ = lean_unbox(v_sync_1629_);
v_res_1634_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__1(v_x_1626_, v_f_1627_, v_prio_1628_, v_sync_boxed_1633_, v_tail_1630_, v_a_1631_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg(lean_object* v_f_1635_, lean_object* v_prio_1636_, uint8_t v_sync_1637_, lean_object* v_x_1638_, lean_object* v_x_1639_){
_start:
{
if (lean_obj_tag(v_x_1638_) == 0)
{
if (v_sync_1637_ == 0)
{
lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1641_ = l_List_reverse___redArg(v_x_1639_);
v___x_1642_ = lean_apply_1(v_f_1635_, v___x_1641_);
v___x_1643_ = lean_io_as_task(v___x_1642_, v_prio_1636_);
return v___x_1643_;
}
else
{
lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
lean_dec(v_prio_1636_);
v___x_1644_ = l_List_reverse___redArg(v_x_1639_);
v___x_1645_ = lean_apply_2(v_f_1635_, v___x_1644_, lean_box(0));
v___x_1646_ = lean_task_pure(v___x_1645_);
return v___x_1646_;
}
}
else
{
lean_object* v_tail_1647_; 
v_tail_1647_ = lean_ctor_get(v_x_1638_, 1);
if (lean_obj_tag(v_tail_1647_) == 0)
{
lean_object* v_head_1648_; lean_object* v___f_1649_; lean_object* v___x_1650_; 
v_head_1648_ = lean_ctor_get(v_x_1638_, 0);
lean_inc(v_head_1648_);
lean_dec_ref_known(v_x_1638_, 2);
v___f_1649_ = lean_alloc_closure((void*)(l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1649_, 0, v_x_1639_);
lean_closure_set(v___f_1649_, 1, v_f_1635_);
v___x_1650_ = lean_io_map_task(v___f_1649_, v_head_1648_, v_prio_1636_, v_sync_1637_);
return v___x_1650_;
}
else
{
lean_object* v_head_1651_; lean_object* v___x_1652_; lean_object* v___f_1653_; lean_object* v___x_1654_; 
lean_inc(v_tail_1647_);
v_head_1651_ = lean_ctor_get(v_x_1638_, 0);
lean_inc(v_head_1651_);
lean_dec_ref_known(v_x_1638_, 2);
v___x_1652_ = lean_box(v_sync_1637_);
lean_inc(v_prio_1636_);
v___f_1653_ = lean_alloc_closure((void*)(l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_1653_, 0, v_x_1639_);
lean_closure_set(v___f_1653_, 1, v_f_1635_);
lean_closure_set(v___f_1653_, 2, v_prio_1636_);
lean_closure_set(v___f_1653_, 3, v___x_1652_);
lean_closure_set(v___f_1653_, 4, v_tail_1647_);
v___x_1654_ = lean_io_bind_task(v_head_1651_, v___f_1653_, v_prio_1636_, v_sync_1637_);
return v___x_1654_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__1(lean_object* v_x_1655_, lean_object* v_f_1656_, lean_object* v_prio_1657_, uint8_t v_sync_1658_, lean_object* v_tail_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1662_, 0, v_a_1660_);
lean_ctor_set(v___x_1662_, 1, v_x_1655_);
v___x_1663_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg(v_f_1656_, v_prio_1657_, v_sync_1658_, v_tail_1659_, v___x_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___boxed(lean_object* v_f_1664_, lean_object* v_prio_1665_, lean_object* v_sync_1666_, lean_object* v_x_1667_, lean_object* v_x_1668_, lean_object* v___y_1669_){
_start:
{
uint8_t v_sync_boxed_1670_; lean_object* v_res_1671_; 
v_sync_boxed_1670_ = lean_unbox(v_sync_1666_);
v_res_1671_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg(v_f_1664_, v_prio_1665_, v_sync_boxed_1670_, v_x_1667_, v_x_1668_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go(lean_object* v_00_u03b1_1672_, lean_object* v_00_u03b2_1673_, lean_object* v_f_1674_, lean_object* v_prio_1675_, uint8_t v_sync_1676_, lean_object* v_x_1677_, lean_object* v_x_1678_){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg(v_f_1674_, v_prio_1675_, v_sync_1676_, v_x_1677_, v_x_1678_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___boxed(lean_object* v_00_u03b1_1681_, lean_object* v_00_u03b2_1682_, lean_object* v_f_1683_, lean_object* v_prio_1684_, lean_object* v_sync_1685_, lean_object* v_x_1686_, lean_object* v_x_1687_, lean_object* v___y_1688_){
_start:
{
uint8_t v_sync_boxed_1689_; lean_object* v_res_1690_; 
v_sync_boxed_1689_ = lean_unbox(v_sync_1685_);
v_res_1690_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go(v_00_u03b1_1681_, v_00_u03b2_1682_, v_f_1683_, v_prio_1684_, v_sync_boxed_1689_, v_x_1686_, v_x_1687_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mapTasks___redArg(lean_object* v_f_1691_, lean_object* v_tasks_1692_, lean_object* v_prio_1693_, uint8_t v_sync_1694_){
_start:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = lean_box(0);
v___x_1697_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg(v_f_1691_, v_prio_1693_, v_sync_1694_, v_tasks_1692_, v___x_1696_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mapTasks___redArg___boxed(lean_object* v_f_1698_, lean_object* v_tasks_1699_, lean_object* v_prio_1700_, lean_object* v_sync_1701_, lean_object* v___y_1702_){
_start:
{
uint8_t v_sync_boxed_1703_; lean_object* v_res_1704_; 
v_sync_boxed_1703_ = lean_unbox(v_sync_1701_);
v_res_1704_ = l_BaseIO_mapTasks___redArg(v_f_1698_, v_tasks_1699_, v_prio_1700_, v_sync_boxed_1703_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mapTasks(lean_object* v_00_u03b1_1705_, lean_object* v_00_u03b2_1706_, lean_object* v_f_1707_, lean_object* v_tasks_1708_, lean_object* v_prio_1709_, uint8_t v_sync_1710_){
_start:
{
lean_object* v___x_1712_; 
v___x_1712_ = l_BaseIO_mapTasks___redArg(v_f_1707_, v_tasks_1708_, v_prio_1709_, v_sync_1710_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mapTasks___boxed(lean_object* v_00_u03b1_1713_, lean_object* v_00_u03b2_1714_, lean_object* v_f_1715_, lean_object* v_tasks_1716_, lean_object* v_prio_1717_, lean_object* v_sync_1718_, lean_object* v___y_1719_){
_start:
{
uint8_t v_sync_boxed_1720_; lean_object* v_res_1721_; 
v_sync_boxed_1720_ = lean_unbox(v_sync_1718_);
v_res_1721_ = l_BaseIO_mapTasks(v_00_u03b1_1713_, v_00_u03b2_1714_, v_f_1715_, v_tasks_1716_, v_prio_1717_, v_sync_boxed_1720_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_EIO_asTask___redArg(lean_object* v_act_1722_, lean_object* v_prio_1723_){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1725_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1725_, 0, lean_box(0));
lean_closure_set(v___x_1725_, 1, lean_box(0));
lean_closure_set(v___x_1725_, 2, v_act_1722_);
v___x_1726_ = lean_io_as_task(v___x_1725_, v_prio_1723_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_EIO_asTask___redArg___boxed(lean_object* v_act_1727_, lean_object* v_prio_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l_EIO_asTask___redArg(v_act_1727_, v_prio_1728_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l_EIO_asTask(lean_object* v_00_u03b5_1731_, lean_object* v_00_u03b1_1732_, lean_object* v_act_1733_, lean_object* v_prio_1734_){
_start:
{
lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1736_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1736_, 0, lean_box(0));
lean_closure_set(v___x_1736_, 1, lean_box(0));
lean_closure_set(v___x_1736_, 2, v_act_1733_);
v___x_1737_ = lean_io_as_task(v___x_1736_, v_prio_1734_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_EIO_asTask___boxed(lean_object* v_00_u03b5_1738_, lean_object* v_00_u03b1_1739_, lean_object* v_act_1740_, lean_object* v_prio_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v_res_1743_; 
v_res_1743_ = l_EIO_asTask(v_00_u03b5_1738_, v_00_u03b1_1739_, v_act_1740_, v_prio_1741_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg___lam__0(lean_object* v_f_1744_, lean_object* v_a_1745_){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_apply_2(v_f_1744_, v_a_1745_, lean_box(0));
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1755_; 
v_a_1748_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1750_ = v___x_1747_;
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1747_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1753_; 
if (v_isShared_1751_ == 0)
{
lean_ctor_set_tag(v___x_1750_, 1);
v___x_1753_ = v___x_1750_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v_a_1748_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
}
else
{
lean_object* v_a_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1763_; 
v_a_1756_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1758_ = v___x_1747_;
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_a_1756_);
lean_dec(v___x_1747_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1763_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1761_; 
if (v_isShared_1759_ == 0)
{
lean_ctor_set_tag(v___x_1758_, 0);
v___x_1761_ = v___x_1758_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v_a_1756_);
v___x_1761_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
return v___x_1761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg___lam__0___boxed(lean_object* v_f_1764_, lean_object* v_a_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = l_EIO_mapTask___redArg___lam__0(v_f_1764_, v_a_1765_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg(lean_object* v_f_1768_, lean_object* v_t_1769_, lean_object* v_prio_1770_, uint8_t v_sync_1771_){
_start:
{
lean_object* v___f_1773_; lean_object* v___x_1774_; 
v___f_1773_ = lean_alloc_closure((void*)(l_EIO_mapTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1773_, 0, v_f_1768_);
v___x_1774_ = lean_io_map_task(v___f_1773_, v_t_1769_, v_prio_1770_, v_sync_1771_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg___boxed(lean_object* v_f_1775_, lean_object* v_t_1776_, lean_object* v_prio_1777_, lean_object* v_sync_1778_, lean_object* v___y_1779_){
_start:
{
uint8_t v_sync_boxed_1780_; lean_object* v_res_1781_; 
v_sync_boxed_1780_ = lean_unbox(v_sync_1778_);
v_res_1781_ = l_EIO_mapTask___redArg(v_f_1775_, v_t_1776_, v_prio_1777_, v_sync_boxed_1780_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask(lean_object* v_00_u03b1_1782_, lean_object* v_00_u03b5_1783_, lean_object* v_00_u03b2_1784_, lean_object* v_f_1785_, lean_object* v_t_1786_, lean_object* v_prio_1787_, uint8_t v_sync_1788_){
_start:
{
lean_object* v___f_1790_; lean_object* v___x_1791_; 
v___f_1790_ = lean_alloc_closure((void*)(l_EIO_mapTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1790_, 0, v_f_1785_);
v___x_1791_ = lean_io_map_task(v___f_1790_, v_t_1786_, v_prio_1787_, v_sync_1788_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask___boxed(lean_object* v_00_u03b1_1792_, lean_object* v_00_u03b5_1793_, lean_object* v_00_u03b2_1794_, lean_object* v_f_1795_, lean_object* v_t_1796_, lean_object* v_prio_1797_, lean_object* v_sync_1798_, lean_object* v___y_1799_){
_start:
{
uint8_t v_sync_boxed_1800_; lean_object* v_res_1801_; 
v_sync_boxed_1800_ = lean_unbox(v_sync_1798_);
v_res_1801_ = l_EIO_mapTask(v_00_u03b1_1792_, v_00_u03b5_1793_, v_00_u03b2_1794_, v_f_1795_, v_t_1796_, v_prio_1797_, v_sync_boxed_1800_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg___lam__0(lean_object* v_f_1802_, lean_object* v_a_1803_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = lean_apply_2(v_f_1802_, v_a_1803_, lean_box(0));
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1806_; 
v_a_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_a_1806_);
lean_dec_ref_known(v___x_1805_, 1);
return v_a_1806_;
}
else
{
lean_object* v_a_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1815_; 
v_a_1807_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1809_ = v___x_1805_;
v_isShared_1810_ = v_isSharedCheck_1815_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_a_1807_);
lean_dec(v___x_1805_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1815_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v___x_1812_; 
if (v_isShared_1810_ == 0)
{
lean_ctor_set_tag(v___x_1809_, 0);
v___x_1812_ = v___x_1809_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_a_1807_);
v___x_1812_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
lean_object* v___x_1813_; 
v___x_1813_ = lean_task_pure(v___x_1812_);
return v___x_1813_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg___lam__0___boxed(lean_object* v_f_1816_, lean_object* v_a_1817_, lean_object* v___y_1818_){
_start:
{
lean_object* v_res_1819_; 
v_res_1819_ = l_EIO_bindTask___redArg___lam__0(v_f_1816_, v_a_1817_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg(lean_object* v_t_1820_, lean_object* v_f_1821_, lean_object* v_prio_1822_, uint8_t v_sync_1823_){
_start:
{
lean_object* v___f_1825_; lean_object* v___x_1826_; 
v___f_1825_ = lean_alloc_closure((void*)(l_EIO_bindTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1825_, 0, v_f_1821_);
v___x_1826_ = lean_io_bind_task(v_t_1820_, v___f_1825_, v_prio_1822_, v_sync_1823_);
return v___x_1826_;
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg___boxed(lean_object* v_t_1827_, lean_object* v_f_1828_, lean_object* v_prio_1829_, lean_object* v_sync_1830_, lean_object* v___y_1831_){
_start:
{
uint8_t v_sync_boxed_1832_; lean_object* v_res_1833_; 
v_sync_boxed_1832_ = lean_unbox(v_sync_1830_);
v_res_1833_ = l_EIO_bindTask___redArg(v_t_1827_, v_f_1828_, v_prio_1829_, v_sync_boxed_1832_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask(lean_object* v_00_u03b1_1834_, lean_object* v_00_u03b5_1835_, lean_object* v_00_u03b2_1836_, lean_object* v_t_1837_, lean_object* v_f_1838_, lean_object* v_prio_1839_, uint8_t v_sync_1840_){
_start:
{
lean_object* v___f_1842_; lean_object* v___x_1843_; 
v___f_1842_ = lean_alloc_closure((void*)(l_EIO_bindTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1842_, 0, v_f_1838_);
v___x_1843_ = lean_io_bind_task(v_t_1837_, v___f_1842_, v_prio_1839_, v_sync_1840_);
return v___x_1843_;
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask___boxed(lean_object* v_00_u03b1_1844_, lean_object* v_00_u03b5_1845_, lean_object* v_00_u03b2_1846_, lean_object* v_t_1847_, lean_object* v_f_1848_, lean_object* v_prio_1849_, lean_object* v_sync_1850_, lean_object* v___y_1851_){
_start:
{
uint8_t v_sync_boxed_1852_; lean_object* v_res_1853_; 
v_sync_boxed_1852_ = lean_unbox(v_sync_1850_);
v_res_1853_ = l_EIO_bindTask(v_00_u03b1_1844_, v_00_u03b5_1845_, v_00_u03b2_1846_, v_t_1847_, v_f_1848_, v_prio_1849_, v_sync_boxed_1852_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg___lam__0(lean_object* v_f_1854_, lean_object* v_a_1855_){
_start:
{
lean_object* v___x_1857_; 
v___x_1857_ = lean_apply_2(v_f_1854_, v_a_1855_, lean_box(0));
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1860_ = v___x_1857_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1857_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
lean_ctor_set_tag(v___x_1860_, 1);
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
else
{
lean_object* v_a_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1873_; 
v_a_1866_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1868_ = v___x_1857_;
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_a_1866_);
lean_dec(v___x_1857_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1873_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1871_; 
if (v_isShared_1869_ == 0)
{
lean_ctor_set_tag(v___x_1868_, 0);
v___x_1871_ = v___x_1868_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_a_1866_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg___lam__0___boxed(lean_object* v_f_1874_, lean_object* v_a_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_EIO_chainTask___redArg___lam__0(v_f_1874_, v_a_1875_);
return v_res_1877_;
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg(lean_object* v_t_1878_, lean_object* v_f_1879_, lean_object* v_prio_1880_, uint8_t v_sync_1881_){
_start:
{
lean_object* v___f_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___f_1883_ = lean_alloc_closure((void*)(l_EIO_chainTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1883_, 0, v_f_1879_);
v___x_1884_ = lean_box(0);
v___x_1885_ = lean_io_map_task(v___f_1883_, v_t_1878_, v_prio_1880_, v_sync_1881_);
lean_dec_ref(v___x_1885_);
v___x_1886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1884_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg___boxed(lean_object* v_t_1887_, lean_object* v_f_1888_, lean_object* v_prio_1889_, lean_object* v_sync_1890_, lean_object* v___y_1891_){
_start:
{
uint8_t v_sync_boxed_1892_; lean_object* v_res_1893_; 
v_sync_boxed_1892_ = lean_unbox(v_sync_1890_);
v_res_1893_ = l_EIO_chainTask___redArg(v_t_1887_, v_f_1888_, v_prio_1889_, v_sync_boxed_1892_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask(lean_object* v_00_u03b1_1894_, lean_object* v_00_u03b5_1895_, lean_object* v_t_1896_, lean_object* v_f_1897_, lean_object* v_prio_1898_, uint8_t v_sync_1899_){
_start:
{
lean_object* v___x_1901_; 
v___x_1901_ = l_EIO_chainTask___redArg(v_t_1896_, v_f_1897_, v_prio_1898_, v_sync_1899_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask___boxed(lean_object* v_00_u03b1_1902_, lean_object* v_00_u03b5_1903_, lean_object* v_t_1904_, lean_object* v_f_1905_, lean_object* v_prio_1906_, lean_object* v_sync_1907_, lean_object* v___y_1908_){
_start:
{
uint8_t v_sync_boxed_1909_; lean_object* v_res_1910_; 
v_sync_boxed_1909_ = lean_unbox(v_sync_1907_);
v_res_1910_ = l_EIO_chainTask(v_00_u03b1_1902_, v_00_u03b5_1903_, v_t_1904_, v_f_1905_, v_prio_1906_, v_sync_boxed_1909_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg___lam__0(lean_object* v_f_1911_, lean_object* v_as_1912_){
_start:
{
lean_object* v___x_1914_; 
v___x_1914_ = lean_apply_2(v_f_1911_, v_as_1912_, lean_box(0));
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1914_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1914_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
lean_ctor_set_tag(v___x_1917_, 1);
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
else
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1930_; 
v_a_1923_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1925_ = v___x_1914_;
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1914_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1928_; 
if (v_isShared_1926_ == 0)
{
lean_ctor_set_tag(v___x_1925_, 0);
v___x_1928_ = v___x_1925_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(0, 1, 0);
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
}
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg___lam__0___boxed(lean_object* v_f_1931_, lean_object* v_as_1932_, lean_object* v___y_1933_){
_start:
{
lean_object* v_res_1934_; 
v_res_1934_ = l_EIO_mapTasks___redArg___lam__0(v_f_1931_, v_as_1932_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg(lean_object* v_f_1935_, lean_object* v_tasks_1936_, lean_object* v_prio_1937_, uint8_t v_sync_1938_){
_start:
{
lean_object* v___f_1940_; lean_object* v___x_1941_; 
v___f_1940_ = lean_alloc_closure((void*)(l_EIO_mapTasks___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1940_, 0, v_f_1935_);
v___x_1941_ = l_BaseIO_mapTasks___redArg(v___f_1940_, v_tasks_1936_, v_prio_1937_, v_sync_1938_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg___boxed(lean_object* v_f_1942_, lean_object* v_tasks_1943_, lean_object* v_prio_1944_, lean_object* v_sync_1945_, lean_object* v___y_1946_){
_start:
{
uint8_t v_sync_boxed_1947_; lean_object* v_res_1948_; 
v_sync_boxed_1947_ = lean_unbox(v_sync_1945_);
v_res_1948_ = l_EIO_mapTasks___redArg(v_f_1942_, v_tasks_1943_, v_prio_1944_, v_sync_boxed_1947_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTasks(lean_object* v_00_u03b1_1949_, lean_object* v_00_u03b5_1950_, lean_object* v_00_u03b2_1951_, lean_object* v_f_1952_, lean_object* v_tasks_1953_, lean_object* v_prio_1954_, uint8_t v_sync_1955_){
_start:
{
lean_object* v___f_1957_; lean_object* v___x_1958_; 
v___f_1957_ = lean_alloc_closure((void*)(l_EIO_mapTasks___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1957_, 0, v_f_1952_);
v___x_1958_ = l_BaseIO_mapTasks___redArg(v___f_1957_, v_tasks_1953_, v_prio_1954_, v_sync_1955_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTasks___boxed(lean_object* v_00_u03b1_1959_, lean_object* v_00_u03b5_1960_, lean_object* v_00_u03b2_1961_, lean_object* v_f_1962_, lean_object* v_tasks_1963_, lean_object* v_prio_1964_, lean_object* v_sync_1965_, lean_object* v___y_1966_){
_start:
{
uint8_t v_sync_boxed_1967_; lean_object* v_res_1968_; 
v_sync_boxed_1967_ = lean_unbox(v_sync_1965_);
v_res_1968_ = l_EIO_mapTasks(v_00_u03b1_1959_, v_00_u03b5_1960_, v_00_u03b2_1961_, v_f_1962_, v_tasks_1963_, v_prio_1964_, v_sync_boxed_1967_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___redArg(lean_object* v_inst_1969_, lean_object* v_e_1970_){
_start:
{
if (lean_obj_tag(v_e_1970_) == 0)
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1981_; 
v_a_1972_ = lean_ctor_get(v_e_1970_, 0);
v_isSharedCheck_1981_ = !lean_is_exclusive(v_e_1970_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1974_ = v_e_1970_;
v_isShared_1975_ = v_isSharedCheck_1981_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v_e_1970_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1981_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1979_; 
v___x_1976_ = lean_apply_1(v_inst_1969_, v_a_1972_);
v___x_1977_ = lean_mk_io_user_error(v___x_1976_);
if (v_isShared_1975_ == 0)
{
lean_ctor_set_tag(v___x_1974_, 1);
lean_ctor_set(v___x_1974_, 0, v___x_1977_);
v___x_1979_ = v___x_1974_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v___x_1977_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
}
else
{
lean_object* v_a_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1989_; 
lean_dec_ref(v_inst_1969_);
v_a_1982_ = lean_ctor_get(v_e_1970_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v_e_1970_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1984_ = v_e_1970_;
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_a_1982_);
lean_dec(v_e_1970_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1985_ == 0)
{
lean_ctor_set_tag(v___x_1984_, 0);
v___x_1987_ = v___x_1984_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_a_1982_);
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
}
LEAN_EXPORT lean_object* l_IO_ofExcept___redArg___boxed(lean_object* v_inst_1990_, lean_object* v_e_1991_, lean_object* v___y_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l_IO_ofExcept___redArg(v_inst_1990_, v_e_1991_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept(lean_object* v_00_u03b5_1994_, lean_object* v_00_u03b1_1995_, lean_object* v_inst_1996_, lean_object* v_e_1997_){
_start:
{
lean_object* v___x_1999_; 
v___x_1999_ = l_IO_ofExcept___redArg(v_inst_1996_, v_e_1997_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___boxed(lean_object* v_00_u03b5_2000_, lean_object* v_00_u03b1_2001_, lean_object* v_inst_2002_, lean_object* v_e_2003_, lean_object* v___y_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_IO_ofExcept(v_00_u03b5_2000_, v_00_u03b1_2001_, v_inst_2002_, v_e_2003_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_IO_lazyPure___redArg(lean_object* v_fn_2006_){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2008_ = lean_box(0);
v___x_2009_ = lean_apply_1(v_fn_2006_, v___x_2008_);
v___x_2010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2010_, 0, v___x_2009_);
return v___x_2010_;
}
}
LEAN_EXPORT lean_object* l_IO_lazyPure___redArg___boxed(lean_object* v_fn_2011_, lean_object* v___y_2012_){
_start:
{
lean_object* v_res_2013_; 
v_res_2013_ = l_IO_lazyPure___redArg(v_fn_2011_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l_IO_lazyPure(lean_object* v_00_u03b1_2014_, lean_object* v_fn_2015_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = l_IO_lazyPure___redArg(v_fn_2015_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_IO_lazyPure___boxed(lean_object* v_00_u03b1_2018_, lean_object* v_fn_2019_, lean_object* v___y_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l_IO_lazyPure(v_00_u03b1_2018_, v_fn_2019_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_IO_monoMsNow___boxed(lean_object* v_a_00___x40___internal___hyg_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = lean_io_mono_ms_now();
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l_IO_monoNanosNow___boxed(lean_object* v_a_00___x40___internal___hyg_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = lean_io_mono_nanos_now();
return v_res_2027_;
}
}
LEAN_EXPORT lean_object* l_IO_getRandomBytes___boxed(lean_object* v_nBytes_2030_, lean_object* v_a_00___x40___internal___hyg_2031_){
_start:
{
size_t v_nBytes_boxed_2032_; lean_object* v_res_2033_; 
v_nBytes_boxed_2032_ = lean_unbox_usize(v_nBytes_2030_);
lean_dec(v_nBytes_2030_);
v_res_2033_ = lean_io_get_random_bytes(v_nBytes_boxed_2032_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_IO_sleep___lam__0(lean_object* v_x_2035_){
_start:
{
lean_object* v___x_2036_; 
v___x_2036_ = lean_box(0);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l_IO_sleep___lam__0___boxed(lean_object* v___y_2037_, lean_object* v_x_2038_){
_start:
{
lean_object* v_res_2039_; 
v_res_2039_ = l_IO_sleep___lam__0(v_x_2038_);
return v_res_2039_;
}
}
LEAN_EXPORT lean_object* l_IO_sleep(uint32_t v_ms_2040_){
_start:
{
lean_object* v___f_2042_; lean_object* v___x_2043_; 
v___f_2042_ = lean_alloc_closure((void*)(l_IO_sleep___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2042_, 0, lean_box(0));
v___x_2043_ = lean_dbg_sleep(v_ms_2040_, v___f_2042_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_IO_sleep___boxed(lean_object* v_ms_2044_, lean_object* v___y_2045_){
_start:
{
uint32_t v_ms_boxed_2046_; lean_object* v_res_2047_; 
v_ms_boxed_2046_ = lean_unbox_uint32(v_ms_2044_);
lean_dec(v_ms_2044_);
v_res_2047_ = l_IO_sleep(v_ms_boxed_2046_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l_IO_asTask___redArg(lean_object* v_act_2048_, lean_object* v_prio_2049_){
_start:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2051_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_2051_, 0, lean_box(0));
lean_closure_set(v___x_2051_, 1, lean_box(0));
lean_closure_set(v___x_2051_, 2, v_act_2048_);
v___x_2052_ = lean_io_as_task(v___x_2051_, v_prio_2049_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l_IO_asTask___redArg___boxed(lean_object* v_act_2053_, lean_object* v_prio_2054_, lean_object* v___y_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = l_IO_asTask___redArg(v_act_2053_, v_prio_2054_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l_IO_asTask(lean_object* v_00_u03b1_2057_, lean_object* v_act_2058_, lean_object* v_prio_2059_){
_start:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2061_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_2061_, 0, lean_box(0));
lean_closure_set(v___x_2061_, 1, lean_box(0));
lean_closure_set(v___x_2061_, 2, v_act_2058_);
v___x_2062_ = lean_io_as_task(v___x_2061_, v_prio_2059_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l_IO_asTask___boxed(lean_object* v_00_u03b1_2063_, lean_object* v_act_2064_, lean_object* v_prio_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_IO_asTask(v_00_u03b1_2063_, v_act_2064_, v_prio_2065_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTask___redArg___lam__0(lean_object* v_f_2068_, lean_object* v_a_2069_){
_start:
{
lean_object* v___x_2071_; 
v___x_2071_ = lean_apply_2(v_f_2068_, v_a_2069_, lean_box(0));
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v_a_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
v_a_2072_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2074_ = v___x_2071_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_a_2072_);
lean_dec(v___x_2071_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
lean_ctor_set_tag(v___x_2074_, 1);
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v_a_2072_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
else
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
v_a_2080_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_2071_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_2071_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
lean_ctor_set_tag(v___x_2082_, 0);
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_mapTask___redArg___lam__0___boxed(lean_object* v_f_2088_, lean_object* v_a_2089_, lean_object* v___y_2090_){
_start:
{
lean_object* v_res_2091_; 
v_res_2091_ = l_IO_mapTask___redArg___lam__0(v_f_2088_, v_a_2089_);
return v_res_2091_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTask___redArg(lean_object* v_f_2092_, lean_object* v_t_2093_, lean_object* v_prio_2094_, uint8_t v_sync_2095_){
_start:
{
lean_object* v___f_2097_; lean_object* v___x_2098_; 
v___f_2097_ = lean_alloc_closure((void*)(l_IO_mapTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2097_, 0, v_f_2092_);
v___x_2098_ = lean_io_map_task(v___f_2097_, v_t_2093_, v_prio_2094_, v_sync_2095_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTask___redArg___boxed(lean_object* v_f_2099_, lean_object* v_t_2100_, lean_object* v_prio_2101_, lean_object* v_sync_2102_, lean_object* v___y_2103_){
_start:
{
uint8_t v_sync_boxed_2104_; lean_object* v_res_2105_; 
v_sync_boxed_2104_ = lean_unbox(v_sync_2102_);
v_res_2105_ = l_IO_mapTask___redArg(v_f_2099_, v_t_2100_, v_prio_2101_, v_sync_boxed_2104_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTask(lean_object* v_00_u03b1_2106_, lean_object* v_00_u03b2_2107_, lean_object* v_f_2108_, lean_object* v_t_2109_, lean_object* v_prio_2110_, uint8_t v_sync_2111_){
_start:
{
lean_object* v___f_2113_; lean_object* v___x_2114_; 
v___f_2113_ = lean_alloc_closure((void*)(l_IO_mapTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2113_, 0, v_f_2108_);
v___x_2114_ = lean_io_map_task(v___f_2113_, v_t_2109_, v_prio_2110_, v_sync_2111_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTask___boxed(lean_object* v_00_u03b1_2115_, lean_object* v_00_u03b2_2116_, lean_object* v_f_2117_, lean_object* v_t_2118_, lean_object* v_prio_2119_, lean_object* v_sync_2120_, lean_object* v___y_2121_){
_start:
{
uint8_t v_sync_boxed_2122_; lean_object* v_res_2123_; 
v_sync_boxed_2122_ = lean_unbox(v_sync_2120_);
v_res_2123_ = l_IO_mapTask(v_00_u03b1_2115_, v_00_u03b2_2116_, v_f_2117_, v_t_2118_, v_prio_2119_, v_sync_boxed_2122_);
return v_res_2123_;
}
}
LEAN_EXPORT lean_object* l_IO_bindTask___redArg___lam__0(lean_object* v_f_2124_, lean_object* v_a_2125_){
_start:
{
lean_object* v___x_2127_; 
v___x_2127_ = lean_apply_2(v_f_2124_, v_a_2125_, lean_box(0));
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v_a_2128_; 
v_a_2128_ = lean_ctor_get(v___x_2127_, 0);
lean_inc(v_a_2128_);
lean_dec_ref_known(v___x_2127_, 1);
return v_a_2128_;
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2137_; 
v_a_2129_ = lean_ctor_get(v___x_2127_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2127_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2131_ = v___x_2127_;
v_isShared_2132_ = v_isSharedCheck_2137_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2127_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2137_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
lean_ctor_set_tag(v___x_2131_, 0);
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_a_2129_);
v___x_2134_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
lean_object* v___x_2135_; 
v___x_2135_ = lean_task_pure(v___x_2134_);
return v___x_2135_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_bindTask___redArg___lam__0___boxed(lean_object* v_f_2138_, lean_object* v_a_2139_, lean_object* v___y_2140_){
_start:
{
lean_object* v_res_2141_; 
v_res_2141_ = l_IO_bindTask___redArg___lam__0(v_f_2138_, v_a_2139_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l_IO_bindTask___redArg(lean_object* v_t_2142_, lean_object* v_f_2143_, lean_object* v_prio_2144_, uint8_t v_sync_2145_){
_start:
{
lean_object* v___f_2147_; lean_object* v___x_2148_; 
v___f_2147_ = lean_alloc_closure((void*)(l_IO_bindTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2147_, 0, v_f_2143_);
v___x_2148_ = lean_io_bind_task(v_t_2142_, v___f_2147_, v_prio_2144_, v_sync_2145_);
return v___x_2148_;
}
}
LEAN_EXPORT lean_object* l_IO_bindTask___redArg___boxed(lean_object* v_t_2149_, lean_object* v_f_2150_, lean_object* v_prio_2151_, lean_object* v_sync_2152_, lean_object* v___y_2153_){
_start:
{
uint8_t v_sync_boxed_2154_; lean_object* v_res_2155_; 
v_sync_boxed_2154_ = lean_unbox(v_sync_2152_);
v_res_2155_ = l_IO_bindTask___redArg(v_t_2149_, v_f_2150_, v_prio_2151_, v_sync_boxed_2154_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_IO_bindTask(lean_object* v_00_u03b1_2156_, lean_object* v_00_u03b2_2157_, lean_object* v_t_2158_, lean_object* v_f_2159_, lean_object* v_prio_2160_, uint8_t v_sync_2161_){
_start:
{
lean_object* v___f_2163_; lean_object* v___x_2164_; 
v___f_2163_ = lean_alloc_closure((void*)(l_IO_bindTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2163_, 0, v_f_2159_);
v___x_2164_ = lean_io_bind_task(v_t_2158_, v___f_2163_, v_prio_2160_, v_sync_2161_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l_IO_bindTask___boxed(lean_object* v_00_u03b1_2165_, lean_object* v_00_u03b2_2166_, lean_object* v_t_2167_, lean_object* v_f_2168_, lean_object* v_prio_2169_, lean_object* v_sync_2170_, lean_object* v___y_2171_){
_start:
{
uint8_t v_sync_boxed_2172_; lean_object* v_res_2173_; 
v_sync_boxed_2172_ = lean_unbox(v_sync_2170_);
v_res_2173_ = l_IO_bindTask(v_00_u03b1_2165_, v_00_u03b2_2166_, v_t_2167_, v_f_2168_, v_prio_2169_, v_sync_boxed_2172_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* l_IO_chainTask___redArg(lean_object* v_t_2174_, lean_object* v_f_2175_, lean_object* v_prio_2176_, uint8_t v_sync_2177_){
_start:
{
lean_object* v___x_2179_; 
v___x_2179_ = l_EIO_chainTask___redArg(v_t_2174_, v_f_2175_, v_prio_2176_, v_sync_2177_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_IO_chainTask___redArg___boxed(lean_object* v_t_2180_, lean_object* v_f_2181_, lean_object* v_prio_2182_, lean_object* v_sync_2183_, lean_object* v___y_2184_){
_start:
{
uint8_t v_sync_boxed_2185_; lean_object* v_res_2186_; 
v_sync_boxed_2185_ = lean_unbox(v_sync_2183_);
v_res_2186_ = l_IO_chainTask___redArg(v_t_2180_, v_f_2181_, v_prio_2182_, v_sync_boxed_2185_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_IO_chainTask(lean_object* v_00_u03b1_2187_, lean_object* v_t_2188_, lean_object* v_f_2189_, lean_object* v_prio_2190_, uint8_t v_sync_2191_){
_start:
{
lean_object* v___x_2193_; 
v___x_2193_ = l_EIO_chainTask___redArg(v_t_2188_, v_f_2189_, v_prio_2190_, v_sync_2191_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l_IO_chainTask___boxed(lean_object* v_00_u03b1_2194_, lean_object* v_t_2195_, lean_object* v_f_2196_, lean_object* v_prio_2197_, lean_object* v_sync_2198_, lean_object* v___y_2199_){
_start:
{
uint8_t v_sync_boxed_2200_; lean_object* v_res_2201_; 
v_sync_boxed_2200_ = lean_unbox(v_sync_2198_);
v_res_2201_ = l_IO_chainTask(v_00_u03b1_2194_, v_t_2195_, v_f_2196_, v_prio_2197_, v_sync_boxed_2200_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg___lam__0(lean_object* v_f_2202_, lean_object* v_as_2203_){
_start:
{
lean_object* v___x_2205_; 
v___x_2205_ = lean_apply_2(v_f_2202_, v_as_2203_, lean_box(0));
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2205_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2205_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
lean_ctor_set_tag(v___x_2208_, 1);
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
else
{
lean_object* v_a_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
v_a_2214_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2221_ == 0)
{
v___x_2216_ = v___x_2205_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_a_2214_);
lean_dec(v___x_2205_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
lean_ctor_set_tag(v___x_2216_, 0);
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v_a_2214_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg___lam__0___boxed(lean_object* v_f_2222_, lean_object* v_as_2223_, lean_object* v___y_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_IO_mapTasks___redArg___lam__0(v_f_2222_, v_as_2223_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg(lean_object* v_f_2226_, lean_object* v_tasks_2227_, lean_object* v_prio_2228_, uint8_t v_sync_2229_){
_start:
{
lean_object* v___f_2231_; lean_object* v___x_2232_; 
v___f_2231_ = lean_alloc_closure((void*)(l_IO_mapTasks___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2231_, 0, v_f_2226_);
v___x_2232_ = l_BaseIO_mapTasks___redArg(v___f_2231_, v_tasks_2227_, v_prio_2228_, v_sync_2229_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg___boxed(lean_object* v_f_2233_, lean_object* v_tasks_2234_, lean_object* v_prio_2235_, lean_object* v_sync_2236_, lean_object* v___y_2237_){
_start:
{
uint8_t v_sync_boxed_2238_; lean_object* v_res_2239_; 
v_sync_boxed_2238_ = lean_unbox(v_sync_2236_);
v_res_2239_ = l_IO_mapTasks___redArg(v_f_2233_, v_tasks_2234_, v_prio_2235_, v_sync_boxed_2238_);
return v_res_2239_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTasks(lean_object* v_00_u03b1_2240_, lean_object* v_00_u03b2_2241_, lean_object* v_f_2242_, lean_object* v_tasks_2243_, lean_object* v_prio_2244_, uint8_t v_sync_2245_){
_start:
{
lean_object* v___f_2247_; lean_object* v___x_2248_; 
v___f_2247_ = lean_alloc_closure((void*)(l_IO_mapTasks___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2247_, 0, v_f_2242_);
v___x_2248_ = l_BaseIO_mapTasks___redArg(v___f_2247_, v_tasks_2243_, v_prio_2244_, v_sync_2245_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTasks___boxed(lean_object* v_00_u03b1_2249_, lean_object* v_00_u03b2_2250_, lean_object* v_f_2251_, lean_object* v_tasks_2252_, lean_object* v_prio_2253_, lean_object* v_sync_2254_, lean_object* v___y_2255_){
_start:
{
uint8_t v_sync_boxed_2256_; lean_object* v_res_2257_; 
v_sync_boxed_2256_ = lean_unbox(v_sync_2254_);
v_res_2257_ = l_IO_mapTasks(v_00_u03b1_2249_, v_00_u03b2_2250_, v_f_2251_, v_tasks_2252_, v_prio_2253_, v_sync_boxed_2256_);
return v_res_2257_;
}
}
LEAN_EXPORT lean_object* l_IO_checkCanceled___boxed(lean_object* v_a_00___x40___internal___hyg_2259_){
_start:
{
uint8_t v_res_2260_; lean_object* v_r_2261_; 
v_res_2260_ = lean_io_check_canceled();
v_r_2261_ = lean_box(v_res_2260_);
return v_r_2261_;
}
}
LEAN_EXPORT lean_object* l_IO_cancel___boxed(lean_object* v_00_u03b1_2265_, lean_object* v_a_00___x40___internal___hyg_2266_, lean_object* v_a_00___x40___internal___hyg_2267_){
_start:
{
lean_object* v_res_2268_; 
v_res_2268_ = lean_io_cancel(v_a_00___x40___internal___hyg_2266_);
lean_dec_ref(v_a_00___x40___internal___hyg_2266_);
return v_res_2268_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorIdx(uint8_t v_x_2269_){
_start:
{
switch(v_x_2269_)
{
case 0:
{
lean_object* v___x_2270_; 
v___x_2270_ = lean_unsigned_to_nat(0u);
return v___x_2270_;
}
case 1:
{
lean_object* v___x_2271_; 
v___x_2271_ = lean_unsigned_to_nat(1u);
return v___x_2271_;
}
default: 
{
lean_object* v___x_2272_; 
v___x_2272_ = lean_unsigned_to_nat(2u);
return v___x_2272_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorIdx___boxed(lean_object* v_x_2273_){
_start:
{
uint8_t v_x_boxed_2274_; lean_object* v_res_2275_; 
v_x_boxed_2274_ = lean_unbox(v_x_2273_);
v_res_2275_ = l_IO_TaskState_ctorIdx(v_x_boxed_2274_);
return v_res_2275_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim___redArg(lean_object* v_k_2276_){
_start:
{
lean_inc(v_k_2276_);
return v_k_2276_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim___redArg___boxed(lean_object* v_k_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l_IO_TaskState_ctorElim___redArg(v_k_2277_);
lean_dec(v_k_2277_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim(lean_object* v_motive_2279_, lean_object* v_ctorIdx_2280_, uint8_t v_t_2281_, lean_object* v_h_2282_, lean_object* v_k_2283_){
_start:
{
lean_inc(v_k_2283_);
return v_k_2283_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim___boxed(lean_object* v_motive_2284_, lean_object* v_ctorIdx_2285_, lean_object* v_t_2286_, lean_object* v_h_2287_, lean_object* v_k_2288_){
_start:
{
uint8_t v_t_boxed_2289_; lean_object* v_res_2290_; 
v_t_boxed_2289_ = lean_unbox(v_t_2286_);
v_res_2290_ = l_IO_TaskState_ctorElim(v_motive_2284_, v_ctorIdx_2285_, v_t_boxed_2289_, v_h_2287_, v_k_2288_);
lean_dec(v_k_2288_);
lean_dec(v_ctorIdx_2285_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim___redArg(lean_object* v_waiting_2291_){
_start:
{
lean_inc(v_waiting_2291_);
return v_waiting_2291_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim___redArg___boxed(lean_object* v_waiting_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_IO_TaskState_waiting_elim___redArg(v_waiting_2292_);
lean_dec(v_waiting_2292_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim(lean_object* v_motive_2294_, uint8_t v_t_2295_, lean_object* v_h_2296_, lean_object* v_waiting_2297_){
_start:
{
lean_inc(v_waiting_2297_);
return v_waiting_2297_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim___boxed(lean_object* v_motive_2298_, lean_object* v_t_2299_, lean_object* v_h_2300_, lean_object* v_waiting_2301_){
_start:
{
uint8_t v_t_boxed_2302_; lean_object* v_res_2303_; 
v_t_boxed_2302_ = lean_unbox(v_t_2299_);
v_res_2303_ = l_IO_TaskState_waiting_elim(v_motive_2298_, v_t_boxed_2302_, v_h_2300_, v_waiting_2301_);
lean_dec(v_waiting_2301_);
return v_res_2303_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim___redArg(lean_object* v_running_2304_){
_start:
{
lean_inc(v_running_2304_);
return v_running_2304_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim___redArg___boxed(lean_object* v_running_2305_){
_start:
{
lean_object* v_res_2306_; 
v_res_2306_ = l_IO_TaskState_running_elim___redArg(v_running_2305_);
lean_dec(v_running_2305_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim(lean_object* v_motive_2307_, uint8_t v_t_2308_, lean_object* v_h_2309_, lean_object* v_running_2310_){
_start:
{
lean_inc(v_running_2310_);
return v_running_2310_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim___boxed(lean_object* v_motive_2311_, lean_object* v_t_2312_, lean_object* v_h_2313_, lean_object* v_running_2314_){
_start:
{
uint8_t v_t_boxed_2315_; lean_object* v_res_2316_; 
v_t_boxed_2315_ = lean_unbox(v_t_2312_);
v_res_2316_ = l_IO_TaskState_running_elim(v_motive_2311_, v_t_boxed_2315_, v_h_2313_, v_running_2314_);
lean_dec(v_running_2314_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim___redArg(lean_object* v_finished_2317_){
_start:
{
lean_inc(v_finished_2317_);
return v_finished_2317_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim___redArg___boxed(lean_object* v_finished_2318_){
_start:
{
lean_object* v_res_2319_; 
v_res_2319_ = l_IO_TaskState_finished_elim___redArg(v_finished_2318_);
lean_dec(v_finished_2318_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim(lean_object* v_motive_2320_, uint8_t v_t_2321_, lean_object* v_h_2322_, lean_object* v_finished_2323_){
_start:
{
lean_inc(v_finished_2323_);
return v_finished_2323_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim___boxed(lean_object* v_motive_2324_, lean_object* v_t_2325_, lean_object* v_h_2326_, lean_object* v_finished_2327_){
_start:
{
uint8_t v_t_boxed_2328_; lean_object* v_res_2329_; 
v_t_boxed_2328_ = lean_unbox(v_t_2325_);
v_res_2329_ = l_IO_TaskState_finished_elim(v_motive_2324_, v_t_boxed_2328_, v_h_2326_, v_finished_2327_);
lean_dec(v_finished_2327_);
return v_res_2329_;
}
}
static uint8_t _init_l_IO_instInhabitedTaskState_default(void){
_start:
{
uint8_t v___x_2330_; 
v___x_2330_ = 0;
return v___x_2330_;
}
}
static uint8_t _init_l_IO_instInhabitedTaskState(void){
_start:
{
uint8_t v___x_2331_; 
v___x_2331_ = 0;
return v___x_2331_;
}
}
static lean_object* _init_l_IO_instReprTaskState_repr___closed__6(void){
_start:
{
lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2341_ = lean_unsigned_to_nat(2u);
v___x_2342_ = lean_nat_to_int(v___x_2341_);
return v___x_2342_;
}
}
static lean_object* _init_l_IO_instReprTaskState_repr___closed__7(void){
_start:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = lean_unsigned_to_nat(1u);
v___x_2344_ = lean_nat_to_int(v___x_2343_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l_IO_instReprTaskState_repr(uint8_t v_x_2345_, lean_object* v_prec_2346_){
_start:
{
lean_object* v___y_2348_; lean_object* v___y_2355_; lean_object* v___y_2362_; 
switch(v_x_2345_)
{
case 0:
{
lean_object* v___x_2368_; uint8_t v___x_2369_; 
v___x_2368_ = lean_unsigned_to_nat(1024u);
v___x_2369_ = lean_nat_dec_le(v___x_2368_, v_prec_2346_);
if (v___x_2369_ == 0)
{
lean_object* v___x_2370_; 
v___x_2370_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_2348_ = v___x_2370_;
goto v___jp_2347_;
}
else
{
lean_object* v___x_2371_; 
v___x_2371_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_2348_ = v___x_2371_;
goto v___jp_2347_;
}
}
case 1:
{
lean_object* v___x_2372_; uint8_t v___x_2373_; 
v___x_2372_ = lean_unsigned_to_nat(1024u);
v___x_2373_ = lean_nat_dec_le(v___x_2372_, v_prec_2346_);
if (v___x_2373_ == 0)
{
lean_object* v___x_2374_; 
v___x_2374_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_2355_ = v___x_2374_;
goto v___jp_2354_;
}
else
{
lean_object* v___x_2375_; 
v___x_2375_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_2355_ = v___x_2375_;
goto v___jp_2354_;
}
}
default: 
{
lean_object* v___x_2376_; uint8_t v___x_2377_; 
v___x_2376_ = lean_unsigned_to_nat(1024u);
v___x_2377_ = lean_nat_dec_le(v___x_2376_, v_prec_2346_);
if (v___x_2377_ == 0)
{
lean_object* v___x_2378_; 
v___x_2378_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_2362_ = v___x_2378_;
goto v___jp_2361_;
}
else
{
lean_object* v___x_2379_; 
v___x_2379_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_2362_ = v___x_2379_;
goto v___jp_2361_;
}
}
}
v___jp_2347_:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; uint8_t v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; 
v___x_2349_ = ((lean_object*)(l_IO_instReprTaskState_repr___closed__1));
lean_inc(v___y_2348_);
v___x_2350_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2350_, 0, v___y_2348_);
lean_ctor_set(v___x_2350_, 1, v___x_2349_);
v___x_2351_ = 0;
v___x_2352_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2352_, 0, v___x_2350_);
lean_ctor_set_uint8(v___x_2352_, sizeof(void*)*1, v___x_2351_);
v___x_2353_ = l_Repr_addAppParen(v___x_2352_, v_prec_2346_);
return v___x_2353_;
}
v___jp_2354_:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; uint8_t v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2356_ = ((lean_object*)(l_IO_instReprTaskState_repr___closed__3));
lean_inc(v___y_2355_);
v___x_2357_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2357_, 0, v___y_2355_);
lean_ctor_set(v___x_2357_, 1, v___x_2356_);
v___x_2358_ = 0;
v___x_2359_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2359_, 0, v___x_2357_);
lean_ctor_set_uint8(v___x_2359_, sizeof(void*)*1, v___x_2358_);
v___x_2360_ = l_Repr_addAppParen(v___x_2359_, v_prec_2346_);
return v___x_2360_;
}
v___jp_2361_:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; uint8_t v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; 
v___x_2363_ = ((lean_object*)(l_IO_instReprTaskState_repr___closed__5));
lean_inc(v___y_2362_);
v___x_2364_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2364_, 0, v___y_2362_);
lean_ctor_set(v___x_2364_, 1, v___x_2363_);
v___x_2365_ = 0;
v___x_2366_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2366_, 0, v___x_2364_);
lean_ctor_set_uint8(v___x_2366_, sizeof(void*)*1, v___x_2365_);
v___x_2367_ = l_Repr_addAppParen(v___x_2366_, v_prec_2346_);
return v___x_2367_;
}
}
}
LEAN_EXPORT lean_object* l_IO_instReprTaskState_repr___boxed(lean_object* v_x_2380_, lean_object* v_prec_2381_){
_start:
{
uint8_t v_x_171__boxed_2382_; lean_object* v_res_2383_; 
v_x_171__boxed_2382_ = lean_unbox(v_x_2380_);
v_res_2383_ = l_IO_instReprTaskState_repr(v_x_171__boxed_2382_, v_prec_2381_);
lean_dec(v_prec_2381_);
return v_res_2383_;
}
}
LEAN_EXPORT uint8_t l_IO_TaskState_ofNat(lean_object* v_n_2386_){
_start:
{
lean_object* v___x_2387_; uint8_t v___x_2388_; 
v___x_2387_ = lean_unsigned_to_nat(0u);
v___x_2388_ = lean_nat_dec_le(v_n_2386_, v___x_2387_);
if (v___x_2388_ == 0)
{
lean_object* v___x_2389_; uint8_t v___x_2390_; 
v___x_2389_ = lean_unsigned_to_nat(1u);
v___x_2390_ = lean_nat_dec_le(v_n_2386_, v___x_2389_);
if (v___x_2390_ == 0)
{
uint8_t v___x_2391_; 
v___x_2391_ = 2;
return v___x_2391_;
}
else
{
uint8_t v___x_2392_; 
v___x_2392_ = 1;
return v___x_2392_;
}
}
else
{
uint8_t v___x_2393_; 
v___x_2393_ = 0;
return v___x_2393_;
}
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ofNat___boxed(lean_object* v_n_2394_){
_start:
{
uint8_t v_res_2395_; lean_object* v_r_2396_; 
v_res_2395_ = l_IO_TaskState_ofNat(v_n_2394_);
lean_dec(v_n_2394_);
v_r_2396_ = lean_box(v_res_2395_);
return v_r_2396_;
}
}
LEAN_EXPORT uint8_t l_IO_instDecidableEqTaskState(uint8_t v_x_2397_, uint8_t v_y_2398_){
_start:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; uint8_t v___x_2401_; 
v___x_2399_ = l_IO_TaskState_ctorIdx(v_x_2397_);
v___x_2400_ = l_IO_TaskState_ctorIdx(v_y_2398_);
v___x_2401_ = lean_nat_dec_eq(v___x_2399_, v___x_2400_);
lean_dec(v___x_2400_);
lean_dec(v___x_2399_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_IO_instDecidableEqTaskState___boxed(lean_object* v_x_2402_, lean_object* v_y_2403_){
_start:
{
uint8_t v_x_20__boxed_2404_; uint8_t v_y_21__boxed_2405_; uint8_t v_res_2406_; lean_object* v_r_2407_; 
v_x_20__boxed_2404_ = lean_unbox(v_x_2402_);
v_y_21__boxed_2405_ = lean_unbox(v_y_2403_);
v_res_2406_ = l_IO_instDecidableEqTaskState(v_x_20__boxed_2404_, v_y_21__boxed_2405_);
v_r_2407_ = lean_box(v_res_2406_);
return v_r_2407_;
}
}
LEAN_EXPORT uint8_t l_IO_instOrdTaskState_ord(uint8_t v_x_2408_, uint8_t v_y_2409_){
_start:
{
lean_object* v___x_2410_; lean_object* v___x_2411_; uint8_t v___x_2412_; 
v___x_2410_ = l_IO_TaskState_ctorIdx(v_x_2408_);
v___x_2411_ = l_IO_TaskState_ctorIdx(v_y_2409_);
v___x_2412_ = lean_nat_dec_lt(v___x_2410_, v___x_2411_);
if (v___x_2412_ == 0)
{
uint8_t v___x_2413_; 
v___x_2413_ = lean_nat_dec_eq(v___x_2410_, v___x_2411_);
lean_dec(v___x_2411_);
lean_dec(v___x_2410_);
if (v___x_2413_ == 0)
{
uint8_t v___x_2414_; 
v___x_2414_ = 2;
return v___x_2414_;
}
else
{
uint8_t v___x_2415_; 
v___x_2415_ = 1;
return v___x_2415_;
}
}
else
{
uint8_t v___x_2416_; 
lean_dec(v___x_2411_);
lean_dec(v___x_2410_);
v___x_2416_ = 0;
return v___x_2416_;
}
}
}
LEAN_EXPORT lean_object* l_IO_instOrdTaskState_ord___boxed(lean_object* v_x_2417_, lean_object* v_y_2418_){
_start:
{
uint8_t v_x_30__boxed_2419_; uint8_t v_y_31__boxed_2420_; uint8_t v_res_2421_; lean_object* v_r_2422_; 
v_x_30__boxed_2419_ = lean_unbox(v_x_2417_);
v_y_31__boxed_2420_ = lean_unbox(v_y_2418_);
v_res_2421_ = l_IO_instOrdTaskState_ord(v_x_30__boxed_2419_, v_y_31__boxed_2420_);
v_r_2422_ = lean_box(v_res_2421_);
return v_r_2422_;
}
}
static lean_object* _init_l_IO_instLTTaskState(void){
_start:
{
lean_object* v___x_2425_; 
v___x_2425_ = lean_box(0);
return v___x_2425_;
}
}
static lean_object* _init_l_IO_instLETaskState(void){
_start:
{
lean_object* v___x_2426_; 
v___x_2426_ = lean_box(0);
return v___x_2426_;
}
}
LEAN_EXPORT uint8_t l_IO_instMinTaskState___lam__0(uint8_t v_x_2427_, uint8_t v_y_2428_){
_start:
{
uint8_t v___x_2429_; 
v___x_2429_ = l_IO_instOrdTaskState_ord(v_x_2427_, v_y_2428_);
if (v___x_2429_ == 2)
{
return v_y_2428_;
}
else
{
return v_x_2427_;
}
}
}
LEAN_EXPORT lean_object* l_IO_instMinTaskState___lam__0___boxed(lean_object* v_x_2430_, lean_object* v_y_2431_){
_start:
{
uint8_t v_x_boxed_2432_; uint8_t v_y_boxed_2433_; uint8_t v_res_2434_; lean_object* v_r_2435_; 
v_x_boxed_2432_ = lean_unbox(v_x_2430_);
v_y_boxed_2433_ = lean_unbox(v_y_2431_);
v_res_2434_ = l_IO_instMinTaskState___lam__0(v_x_boxed_2432_, v_y_boxed_2433_);
v_r_2435_ = lean_box(v_res_2434_);
return v_r_2435_;
}
}
LEAN_EXPORT uint8_t l_IO_instMaxTaskState___lam__0(uint8_t v_x_2438_, uint8_t v_y_2439_){
_start:
{
uint8_t v___x_2440_; 
v___x_2440_ = l_IO_instOrdTaskState_ord(v_x_2438_, v_y_2439_);
if (v___x_2440_ == 2)
{
return v_x_2438_;
}
else
{
return v_y_2439_;
}
}
}
LEAN_EXPORT lean_object* l_IO_instMaxTaskState___lam__0___boxed(lean_object* v_x_2441_, lean_object* v_y_2442_){
_start:
{
uint8_t v_x_boxed_2443_; uint8_t v_y_boxed_2444_; uint8_t v_res_2445_; lean_object* v_r_2446_; 
v_x_boxed_2443_ = lean_unbox(v_x_2441_);
v_y_boxed_2444_ = lean_unbox(v_y_2442_);
v_res_2445_ = l_IO_instMaxTaskState___lam__0(v_x_boxed_2443_, v_y_boxed_2444_);
v_r_2446_ = lean_box(v_res_2445_);
return v_r_2446_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_toString(uint8_t v_x_2452_){
_start:
{
switch(v_x_2452_)
{
case 0:
{
lean_object* v___x_2453_; 
v___x_2453_ = ((lean_object*)(l_IO_TaskState_toString___closed__0));
return v___x_2453_;
}
case 1:
{
lean_object* v___x_2454_; 
v___x_2454_ = ((lean_object*)(l_IO_TaskState_toString___closed__1));
return v___x_2454_;
}
default: 
{
lean_object* v___x_2455_; 
v___x_2455_ = ((lean_object*)(l_IO_TaskState_toString___closed__2));
return v___x_2455_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_toString___boxed(lean_object* v_x_2456_){
_start:
{
uint8_t v_x_31__boxed_2457_; lean_object* v_res_2458_; 
v_x_31__boxed_2457_ = lean_unbox(v_x_2456_);
v_res_2458_ = l_IO_TaskState_toString(v_x_31__boxed_2457_);
return v_res_2458_;
}
}
LEAN_EXPORT lean_object* l_IO_getTaskState___boxed(lean_object* v_00_u03b1_2464_, lean_object* v_a_00___x40___internal___hyg_2465_, lean_object* v_a_00___x40___internal___hyg_2466_){
_start:
{
uint8_t v_res_2467_; lean_object* v_r_2468_; 
v_res_2467_ = lean_io_get_task_state(v_a_00___x40___internal___hyg_2465_);
lean_dec_ref(v_a_00___x40___internal___hyg_2465_);
v_r_2468_ = lean_box(v_res_2467_);
return v_r_2468_;
}
}
LEAN_EXPORT uint8_t l_IO_hasFinished___redArg(lean_object* v_task_2469_){
_start:
{
uint8_t v___x_2471_; 
v___x_2471_ = lean_io_get_task_state(v_task_2469_);
if (v___x_2471_ == 2)
{
uint8_t v___x_2472_; 
v___x_2472_ = 1;
return v___x_2472_;
}
else
{
uint8_t v___x_2473_; 
v___x_2473_ = 0;
return v___x_2473_;
}
}
}
LEAN_EXPORT lean_object* l_IO_hasFinished___redArg___boxed(lean_object* v_task_2474_, lean_object* v___y_2475_){
_start:
{
uint8_t v_res_2476_; lean_object* v_r_2477_; 
v_res_2476_ = l_IO_hasFinished___redArg(v_task_2474_);
lean_dec_ref(v_task_2474_);
v_r_2477_ = lean_box(v_res_2476_);
return v_r_2477_;
}
}
LEAN_EXPORT uint8_t l_IO_hasFinished(lean_object* v_00_u03b1_2478_, lean_object* v_task_2479_){
_start:
{
uint8_t v___x_2481_; 
v___x_2481_ = lean_io_get_task_state(v_task_2479_);
if (v___x_2481_ == 2)
{
uint8_t v___x_2482_; 
v___x_2482_ = 1;
return v___x_2482_;
}
else
{
uint8_t v___x_2483_; 
v___x_2483_ = 0;
return v___x_2483_;
}
}
}
LEAN_EXPORT lean_object* l_IO_hasFinished___boxed(lean_object* v_00_u03b1_2484_, lean_object* v_task_2485_, lean_object* v___y_2486_){
_start:
{
uint8_t v_res_2487_; lean_object* v_r_2488_; 
v_res_2487_ = l_IO_hasFinished(v_00_u03b1_2484_, v_task_2485_);
lean_dec_ref(v_task_2485_);
v_r_2488_ = lean_box(v_res_2487_);
return v_r_2488_;
}
}
LEAN_EXPORT lean_object* l_IO_wait___boxed(lean_object* v_00_u03b1_2492_, lean_object* v_t_2493_, lean_object* v_a_00___x40___internal___hyg_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = lean_io_wait(v_t_2493_);
return v_res_2495_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__12(void){
_start:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2522_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__10));
v___x_2523_ = l_Lean_mkAtom(v___x_2522_);
return v___x_2523_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__13(void){
_start:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2524_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__12, &l_IO_waitAny___auto__1___closed__12_once, _init_l_IO_waitAny___auto__1___closed__12);
v___x_2525_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2526_ = lean_array_push(v___x_2525_, v___x_2524_);
return v___x_2526_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__18(void){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2535_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__17));
v___x_2536_ = lean_string_utf8_byte_size(v___x_2535_);
return v___x_2536_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__19(void){
_start:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2537_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__18, &l_IO_waitAny___auto__1___closed__18_once, _init_l_IO_waitAny___auto__1___closed__18);
v___x_2538_ = lean_unsigned_to_nat(0u);
v___x_2539_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__17));
v___x_2540_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2539_);
lean_ctor_set(v___x_2540_, 1, v___x_2538_);
lean_ctor_set(v___x_2540_, 2, v___x_2537_);
return v___x_2540_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__23(void){
_start:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2546_ = lean_box(0);
v___x_2547_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__22));
v___x_2548_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__19, &l_IO_waitAny___auto__1___closed__19_once, _init_l_IO_waitAny___auto__1___closed__19);
v___x_2549_ = lean_box(2);
v___x_2550_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2549_);
lean_ctor_set(v___x_2550_, 1, v___x_2548_);
lean_ctor_set(v___x_2550_, 2, v___x_2547_);
lean_ctor_set(v___x_2550_, 3, v___x_2546_);
return v___x_2550_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__24(void){
_start:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2551_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__23, &l_IO_waitAny___auto__1___closed__23_once, _init_l_IO_waitAny___auto__1___closed__23);
v___x_2552_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2553_ = lean_array_push(v___x_2552_, v___x_2551_);
return v___x_2553_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__28(void){
_start:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2561_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__27));
v___x_2562_ = l_Lean_mkAtom(v___x_2561_);
return v___x_2562_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__29(void){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; 
v___x_2563_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__28, &l_IO_waitAny___auto__1___closed__28_once, _init_l_IO_waitAny___auto__1___closed__28);
v___x_2564_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2565_ = lean_array_push(v___x_2564_, v___x_2563_);
return v___x_2565_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__30(void){
_start:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2566_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__29, &l_IO_waitAny___auto__1___closed__29_once, _init_l_IO_waitAny___auto__1___closed__29);
v___x_2567_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__26));
v___x_2568_ = lean_box(2);
v___x_2569_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
lean_ctor_set(v___x_2569_, 1, v___x_2567_);
lean_ctor_set(v___x_2569_, 2, v___x_2566_);
return v___x_2569_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__31(void){
_start:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2570_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__30, &l_IO_waitAny___auto__1___closed__30_once, _init_l_IO_waitAny___auto__1___closed__30);
v___x_2571_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2572_ = lean_array_push(v___x_2571_, v___x_2570_);
return v___x_2572_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__32(void){
_start:
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2573_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__31, &l_IO_waitAny___auto__1___closed__31_once, _init_l_IO_waitAny___auto__1___closed__31);
v___x_2574_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__9));
v___x_2575_ = lean_box(2);
v___x_2576_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
lean_ctor_set(v___x_2576_, 1, v___x_2574_);
lean_ctor_set(v___x_2576_, 2, v___x_2573_);
return v___x_2576_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__33(void){
_start:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2577_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__32, &l_IO_waitAny___auto__1___closed__32_once, _init_l_IO_waitAny___auto__1___closed__32);
v___x_2578_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__24, &l_IO_waitAny___auto__1___closed__24_once, _init_l_IO_waitAny___auto__1___closed__24);
v___x_2579_ = lean_array_push(v___x_2578_, v___x_2577_);
return v___x_2579_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__34(void){
_start:
{
lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2580_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__33, &l_IO_waitAny___auto__1___closed__33_once, _init_l_IO_waitAny___auto__1___closed__33);
v___x_2581_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__16));
v___x_2582_ = lean_box(2);
v___x_2583_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2582_);
lean_ctor_set(v___x_2583_, 1, v___x_2581_);
lean_ctor_set(v___x_2583_, 2, v___x_2580_);
return v___x_2583_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__35(void){
_start:
{
lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___x_2584_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__34, &l_IO_waitAny___auto__1___closed__34_once, _init_l_IO_waitAny___auto__1___closed__34);
v___x_2585_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__13, &l_IO_waitAny___auto__1___closed__13_once, _init_l_IO_waitAny___auto__1___closed__13);
v___x_2586_ = lean_array_push(v___x_2585_, v___x_2584_);
return v___x_2586_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__36(void){
_start:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
v___x_2587_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__35, &l_IO_waitAny___auto__1___closed__35_once, _init_l_IO_waitAny___auto__1___closed__35);
v___x_2588_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__11));
v___x_2589_ = lean_box(2);
v___x_2590_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2589_);
lean_ctor_set(v___x_2590_, 1, v___x_2588_);
lean_ctor_set(v___x_2590_, 2, v___x_2587_);
return v___x_2590_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__37(void){
_start:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2591_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__36, &l_IO_waitAny___auto__1___closed__36_once, _init_l_IO_waitAny___auto__1___closed__36);
v___x_2592_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2593_ = lean_array_push(v___x_2592_, v___x_2591_);
return v___x_2593_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__38(void){
_start:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2594_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__37, &l_IO_waitAny___auto__1___closed__37_once, _init_l_IO_waitAny___auto__1___closed__37);
v___x_2595_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__9));
v___x_2596_ = lean_box(2);
v___x_2597_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2596_);
lean_ctor_set(v___x_2597_, 1, v___x_2595_);
lean_ctor_set(v___x_2597_, 2, v___x_2594_);
return v___x_2597_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__39(void){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2598_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__38, &l_IO_waitAny___auto__1___closed__38_once, _init_l_IO_waitAny___auto__1___closed__38);
v___x_2599_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2600_ = lean_array_push(v___x_2599_, v___x_2598_);
return v___x_2600_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__40(void){
_start:
{
lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2601_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__39, &l_IO_waitAny___auto__1___closed__39_once, _init_l_IO_waitAny___auto__1___closed__39);
v___x_2602_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__7));
v___x_2603_ = lean_box(2);
v___x_2604_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
lean_ctor_set(v___x_2604_, 1, v___x_2602_);
lean_ctor_set(v___x_2604_, 2, v___x_2601_);
return v___x_2604_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__41(void){
_start:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v___x_2605_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__40, &l_IO_waitAny___auto__1___closed__40_once, _init_l_IO_waitAny___auto__1___closed__40);
v___x_2606_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2607_ = lean_array_push(v___x_2606_, v___x_2605_);
return v___x_2607_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__42(void){
_start:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2608_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__41, &l_IO_waitAny___auto__1___closed__41_once, _init_l_IO_waitAny___auto__1___closed__41);
v___x_2609_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__4));
v___x_2610_ = lean_box(2);
v___x_2611_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2610_);
lean_ctor_set(v___x_2611_, 1, v___x_2609_);
lean_ctor_set(v___x_2611_, 2, v___x_2608_);
return v___x_2611_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1(void){
_start:
{
lean_object* v___x_2612_; 
v___x_2612_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__42, &l_IO_waitAny___auto__1___closed__42_once, _init_l_IO_waitAny___auto__1___closed__42);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l_IO_waitAny___boxed(lean_object* v_00_u03b1_2617_, lean_object* v_tasks_2618_, lean_object* v_h_2619_, lean_object* v_a_00___x40___internal___hyg_2620_){
_start:
{
lean_object* v_res_2621_; 
v_res_2621_ = lean_io_wait_any(v_tasks_2618_);
lean_dec(v_tasks_2618_);
return v_res_2621_;
}
}
static lean_object* _init_l_IO_waitAny_x27___auto__1(void){
_start:
{
lean_object* v___x_2622_; 
v___x_2622_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__42, &l_IO_waitAny___auto__1___closed__42_once, _init_l_IO_waitAny___auto__1___closed__42);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg___lam__0(lean_object* v___x_2623_, lean_object* v_a_2624_){
_start:
{
lean_object* v___x_2625_; 
v___x_2625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2623_);
lean_ctor_set(v___x_2625_, 1, v_a_2624_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg(lean_object* v_a_2626_, lean_object* v_a_2627_){
_start:
{
if (lean_obj_tag(v_a_2626_) == 0)
{
lean_object* v___x_2628_; 
v___x_2628_ = lean_array_to_list(v_a_2627_);
return v___x_2628_;
}
else
{
lean_object* v_head_2629_; lean_object* v_tail_2630_; lean_object* v___x_2631_; lean_object* v___f_2632_; lean_object* v___x_2633_; uint8_t v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v_head_2629_ = lean_ctor_get(v_a_2626_, 0);
lean_inc(v_head_2629_);
v_tail_2630_ = lean_ctor_get(v_a_2626_, 1);
lean_inc(v_tail_2630_);
lean_dec_ref_known(v_a_2626_, 2);
v___x_2631_ = lean_array_get_size(v_a_2627_);
v___f_2632_ = lean_alloc_closure((void*)(l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2632_, 0, v___x_2631_);
v___x_2633_ = lean_unsigned_to_nat(0u);
v___x_2634_ = 1;
v___x_2635_ = lean_task_map(v___f_2632_, v_head_2629_, v___x_2633_, v___x_2634_);
v___x_2636_ = lean_array_push(v_a_2627_, v___x_2635_);
v_a_2626_ = v_tail_2630_;
v_a_2627_ = v___x_2636_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_IO_waitAny_x27___redArg(lean_object* v_tasks_2640_){
_start:
{
lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v_fst_2645_; lean_object* v_snd_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2654_; 
v___x_2642_ = ((lean_object*)(l_IO_waitAny_x27___redArg___closed__0));
lean_inc(v_tasks_2640_);
v___x_2643_ = l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg(v_tasks_2640_, v___x_2642_);
v___x_2644_ = lean_io_wait_any(v___x_2643_);
lean_dec(v___x_2643_);
v_fst_2645_ = lean_ctor_get(v___x_2644_, 0);
v_snd_2646_ = lean_ctor_get(v___x_2644_, 1);
v_isSharedCheck_2654_ = !lean_is_exclusive(v___x_2644_);
if (v_isSharedCheck_2654_ == 0)
{
v___x_2648_ = v___x_2644_;
v_isShared_2649_ = v_isSharedCheck_2654_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_snd_2646_);
lean_inc(v_fst_2645_);
lean_dec(v___x_2644_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2654_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2650_; lean_object* v___x_2652_; 
lean_inc(v_tasks_2640_);
v___x_2650_ = l___private_Init_Data_List_Impl_0__List_eraseIdxTR_go(lean_box(0), v_tasks_2640_, v_tasks_2640_, v_fst_2645_, v___x_2642_);
lean_dec(v_tasks_2640_);
if (v_isShared_2649_ == 0)
{
lean_ctor_set(v___x_2648_, 1, v___x_2650_);
lean_ctor_set(v___x_2648_, 0, v_snd_2646_);
v___x_2652_ = v___x_2648_;
goto v_reusejp_2651_;
}
else
{
lean_object* v_reuseFailAlloc_2653_; 
v_reuseFailAlloc_2653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2653_, 0, v_snd_2646_);
lean_ctor_set(v_reuseFailAlloc_2653_, 1, v___x_2650_);
v___x_2652_ = v_reuseFailAlloc_2653_;
goto v_reusejp_2651_;
}
v_reusejp_2651_:
{
return v___x_2652_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_waitAny_x27___redArg___boxed(lean_object* v_tasks_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_IO_waitAny_x27___redArg(v_tasks_2655_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l_IO_waitAny_x27(lean_object* v_00_u03b1_2658_, lean_object* v_tasks_2659_, lean_object* v_h_2660_){
_start:
{
lean_object* v___x_2662_; 
v___x_2662_ = l_IO_waitAny_x27___redArg(v_tasks_2659_);
return v___x_2662_;
}
}
LEAN_EXPORT lean_object* l_IO_waitAny_x27___boxed(lean_object* v_00_u03b1_2663_, lean_object* v_tasks_2664_, lean_object* v_h_2665_, lean_object* v___y_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l_IO_waitAny_x27(v_00_u03b1_2663_, v_tasks_2664_, v_h_2665_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0(lean_object* v_00_u03b1_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_){
_start:
{
lean_object* v___x_2671_; 
v___x_2671_ = l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg(v_a_2669_, v_a_2670_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l_IO_getNumHeartbeats___boxed(lean_object* v_a_00___x40___internal___hyg_2673_){
_start:
{
lean_object* v_res_2674_; 
v_res_2674_ = lean_io_get_num_heartbeats();
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l_IO_setNumHeartbeats___boxed(lean_object* v_count_2677_, lean_object* v_a_00___x40___internal___hyg_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = lean_io_set_heartbeats(v_count_2677_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_IO_addHeartbeats(lean_object* v_count_2680_){
_start:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; 
v___x_2682_ = lean_io_get_num_heartbeats();
v___x_2683_ = lean_nat_add(v___x_2682_, v_count_2680_);
lean_dec(v___x_2682_);
v___x_2684_ = lean_io_set_heartbeats(v___x_2683_);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_IO_addHeartbeats___boxed(lean_object* v_count_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v_res_2687_; 
v_res_2687_ = l_IO_addHeartbeats(v_count_2685_);
lean_dec(v_count_2685_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorIdx(uint8_t v_x_2688_){
_start:
{
switch(v_x_2688_)
{
case 0:
{
lean_object* v___x_2689_; 
v___x_2689_ = lean_unsigned_to_nat(0u);
return v___x_2689_;
}
case 1:
{
lean_object* v___x_2690_; 
v___x_2690_ = lean_unsigned_to_nat(1u);
return v___x_2690_;
}
case 2:
{
lean_object* v___x_2691_; 
v___x_2691_ = lean_unsigned_to_nat(2u);
return v___x_2691_;
}
case 3:
{
lean_object* v___x_2692_; 
v___x_2692_ = lean_unsigned_to_nat(3u);
return v___x_2692_;
}
default: 
{
lean_object* v___x_2693_; 
v___x_2693_ = lean_unsigned_to_nat(4u);
return v___x_2693_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorIdx___boxed(lean_object* v_x_2694_){
_start:
{
uint8_t v_x_boxed_2695_; lean_object* v_res_2696_; 
v_x_boxed_2695_ = lean_unbox(v_x_2694_);
v_res_2696_ = l_IO_FS_Mode_ctorIdx(v_x_boxed_2695_);
return v_res_2696_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim___redArg(lean_object* v_k_2697_){
_start:
{
lean_inc(v_k_2697_);
return v_k_2697_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim___redArg___boxed(lean_object* v_k_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_IO_FS_Mode_ctorElim___redArg(v_k_2698_);
lean_dec(v_k_2698_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim(lean_object* v_motive_2700_, lean_object* v_ctorIdx_2701_, uint8_t v_t_2702_, lean_object* v_h_2703_, lean_object* v_k_2704_){
_start:
{
lean_inc(v_k_2704_);
return v_k_2704_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim___boxed(lean_object* v_motive_2705_, lean_object* v_ctorIdx_2706_, lean_object* v_t_2707_, lean_object* v_h_2708_, lean_object* v_k_2709_){
_start:
{
uint8_t v_t_boxed_2710_; lean_object* v_res_2711_; 
v_t_boxed_2710_ = lean_unbox(v_t_2707_);
v_res_2711_ = l_IO_FS_Mode_ctorElim(v_motive_2705_, v_ctorIdx_2706_, v_t_boxed_2710_, v_h_2708_, v_k_2709_);
lean_dec(v_k_2709_);
lean_dec(v_ctorIdx_2706_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim___redArg(lean_object* v_read_2712_){
_start:
{
lean_inc(v_read_2712_);
return v_read_2712_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim___redArg___boxed(lean_object* v_read_2713_){
_start:
{
lean_object* v_res_2714_; 
v_res_2714_ = l_IO_FS_Mode_read_elim___redArg(v_read_2713_);
lean_dec(v_read_2713_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim(lean_object* v_motive_2715_, uint8_t v_t_2716_, lean_object* v_h_2717_, lean_object* v_read_2718_){
_start:
{
lean_inc(v_read_2718_);
return v_read_2718_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim___boxed(lean_object* v_motive_2719_, lean_object* v_t_2720_, lean_object* v_h_2721_, lean_object* v_read_2722_){
_start:
{
uint8_t v_t_boxed_2723_; lean_object* v_res_2724_; 
v_t_boxed_2723_ = lean_unbox(v_t_2720_);
v_res_2724_ = l_IO_FS_Mode_read_elim(v_motive_2719_, v_t_boxed_2723_, v_h_2721_, v_read_2722_);
lean_dec(v_read_2722_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim___redArg(lean_object* v_write_2725_){
_start:
{
lean_inc(v_write_2725_);
return v_write_2725_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim___redArg___boxed(lean_object* v_write_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_IO_FS_Mode_write_elim___redArg(v_write_2726_);
lean_dec(v_write_2726_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim(lean_object* v_motive_2728_, uint8_t v_t_2729_, lean_object* v_h_2730_, lean_object* v_write_2731_){
_start:
{
lean_inc(v_write_2731_);
return v_write_2731_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim___boxed(lean_object* v_motive_2732_, lean_object* v_t_2733_, lean_object* v_h_2734_, lean_object* v_write_2735_){
_start:
{
uint8_t v_t_boxed_2736_; lean_object* v_res_2737_; 
v_t_boxed_2736_ = lean_unbox(v_t_2733_);
v_res_2737_ = l_IO_FS_Mode_write_elim(v_motive_2732_, v_t_boxed_2736_, v_h_2734_, v_write_2735_);
lean_dec(v_write_2735_);
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim___redArg(lean_object* v_writeNew_2738_){
_start:
{
lean_inc(v_writeNew_2738_);
return v_writeNew_2738_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim___redArg___boxed(lean_object* v_writeNew_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l_IO_FS_Mode_writeNew_elim___redArg(v_writeNew_2739_);
lean_dec(v_writeNew_2739_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim(lean_object* v_motive_2741_, uint8_t v_t_2742_, lean_object* v_h_2743_, lean_object* v_writeNew_2744_){
_start:
{
lean_inc(v_writeNew_2744_);
return v_writeNew_2744_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim___boxed(lean_object* v_motive_2745_, lean_object* v_t_2746_, lean_object* v_h_2747_, lean_object* v_writeNew_2748_){
_start:
{
uint8_t v_t_boxed_2749_; lean_object* v_res_2750_; 
v_t_boxed_2749_ = lean_unbox(v_t_2746_);
v_res_2750_ = l_IO_FS_Mode_writeNew_elim(v_motive_2745_, v_t_boxed_2749_, v_h_2747_, v_writeNew_2748_);
lean_dec(v_writeNew_2748_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim___redArg(lean_object* v_readWrite_2751_){
_start:
{
lean_inc(v_readWrite_2751_);
return v_readWrite_2751_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim___redArg___boxed(lean_object* v_readWrite_2752_){
_start:
{
lean_object* v_res_2753_; 
v_res_2753_ = l_IO_FS_Mode_readWrite_elim___redArg(v_readWrite_2752_);
lean_dec(v_readWrite_2752_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim(lean_object* v_motive_2754_, uint8_t v_t_2755_, lean_object* v_h_2756_, lean_object* v_readWrite_2757_){
_start:
{
lean_inc(v_readWrite_2757_);
return v_readWrite_2757_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim___boxed(lean_object* v_motive_2758_, lean_object* v_t_2759_, lean_object* v_h_2760_, lean_object* v_readWrite_2761_){
_start:
{
uint8_t v_t_boxed_2762_; lean_object* v_res_2763_; 
v_t_boxed_2762_ = lean_unbox(v_t_2759_);
v_res_2763_ = l_IO_FS_Mode_readWrite_elim(v_motive_2758_, v_t_boxed_2762_, v_h_2760_, v_readWrite_2761_);
lean_dec(v_readWrite_2761_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim___redArg(lean_object* v_append_2764_){
_start:
{
lean_inc(v_append_2764_);
return v_append_2764_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim___redArg___boxed(lean_object* v_append_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_IO_FS_Mode_append_elim___redArg(v_append_2765_);
lean_dec(v_append_2765_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim(lean_object* v_motive_2767_, uint8_t v_t_2768_, lean_object* v_h_2769_, lean_object* v_append_2770_){
_start:
{
lean_inc(v_append_2770_);
return v_append_2770_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim___boxed(lean_object* v_motive_2771_, lean_object* v_t_2772_, lean_object* v_h_2773_, lean_object* v_append_2774_){
_start:
{
uint8_t v_t_boxed_2775_; lean_object* v_res_2776_; 
v_t_boxed_2775_ = lean_unbox(v_t_2772_);
v_res_2776_ = l_IO_FS_Mode_append_elim(v_motive_2771_, v_t_boxed_2775_, v_h_2773_, v_append_2774_);
lean_dec(v_append_2774_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__0(){
_start:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
v___x_2781_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___lam__0___closed__1));
v___x_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2781_);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__0___boxed(lean_object* v___y_2783_){
_start:
{
lean_object* v_res_2784_; 
v_res_2784_ = l_IO_FS_instInhabitedStream_default___lam__0();
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__1(){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2786_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___lam__0___closed__1));
v___x_2787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2786_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__1___boxed(lean_object* v___y_2788_){
_start:
{
lean_object* v_res_2789_; 
v_res_2789_ = l_IO_FS_instInhabitedStream_default___lam__1();
return v_res_2789_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__2(size_t v_x_2790_){
_start:
{
lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2792_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___lam__0___closed__1));
v___x_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2792_);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__2___boxed(lean_object* v_x_2794_, lean_object* v___y_2795_){
_start:
{
size_t v_x_326__boxed_2796_; lean_object* v_res_2797_; 
v_x_326__boxed_2796_ = lean_unbox_usize(v_x_2794_);
lean_dec(v_x_2794_);
v_res_2797_ = l_IO_FS_instInhabitedStream_default___lam__2(v_x_326__boxed_2796_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__3(lean_object* v_x_2798_){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2800_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___lam__0___closed__1));
v___x_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2800_);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__3___boxed(lean_object* v_x_2802_, lean_object* v___y_2803_){
_start:
{
lean_object* v_res_2804_; 
v_res_2804_ = l_IO_FS_instInhabitedStream_default___lam__3(v_x_2802_);
lean_dec_ref(v_x_2802_);
return v_res_2804_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__4(lean_object* v_x_2805_){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___lam__0___closed__1));
v___x_2808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2807_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__4___boxed(lean_object* v_x_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_IO_FS_instInhabitedStream_default___lam__4(v_x_2809_);
lean_dec_ref(v_x_2809_);
return v_res_2811_;
}
}
LEAN_EXPORT uint8_t l_IO_FS_instInhabitedStream_default___lam__5(uint8_t v___x_2812_){
_start:
{
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__5___boxed(lean_object* v___x_2814_, lean_object* v___y_2815_){
_start:
{
uint8_t v___x_365__boxed_2816_; uint8_t v_res_2817_; lean_object* v_r_2818_; 
v___x_365__boxed_2816_ = lean_unbox(v___x_2814_);
v_res_2817_ = l_IO_FS_instInhabitedStream_default___lam__5(v___x_365__boxed_2816_);
v_r_2818_ = lean_box(v_res_2817_);
return v_r_2818_;
}
}
LEAN_EXPORT lean_object* l_IO_getStdin___boxed(lean_object* v_a_00___x40___internal___hyg_2837_){
_start:
{
lean_object* v_res_2838_; 
v_res_2838_ = lean_get_stdin();
return v_res_2838_;
}
}
LEAN_EXPORT lean_object* l_IO_getStdout___boxed(lean_object* v_a_00___x40___internal___hyg_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = lean_get_stdout();
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l_IO_getStderr___boxed(lean_object* v_a_00___x40___internal___hyg_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = lean_get_stderr();
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_IO_setStdin___boxed(lean_object* v_a_00___x40___internal___hyg_2847_, lean_object* v_a_00___x40___internal___hyg_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = lean_get_set_stdin(v_a_00___x40___internal___hyg_2847_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_IO_setStdout___boxed(lean_object* v_a_00___x40___internal___hyg_2852_, lean_object* v_a_00___x40___internal___hyg_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = lean_get_set_stdout(v_a_00___x40___internal___hyg_2852_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l_IO_setStderr___boxed(lean_object* v_a_00___x40___internal___hyg_2857_, lean_object* v_a_00___x40___internal___hyg_2858_){
_start:
{
lean_object* v_res_2859_; 
v_res_2859_ = lean_get_set_stderr(v_a_00___x40___internal___hyg_2857_);
return v_res_2859_;
}
}
LEAN_EXPORT lean_object* l_IO_iterate___redArg(lean_object* v_a_2860_, lean_object* v_f_2861_){
_start:
{
lean_object* v___x_2863_; 
lean_inc_ref(v_f_2861_);
v___x_2863_ = lean_apply_2(v_f_2861_, v_a_2860_, lean_box(0));
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v_a_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2874_; 
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2866_ = v___x_2863_;
v_isShared_2867_ = v_isSharedCheck_2874_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_a_2864_);
lean_dec(v___x_2863_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2874_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
if (lean_obj_tag(v_a_2864_) == 0)
{
lean_object* v_val_2868_; 
lean_del_object(v___x_2866_);
v_val_2868_ = lean_ctor_get(v_a_2864_, 0);
lean_inc(v_val_2868_);
lean_dec_ref_known(v_a_2864_, 1);
v_a_2860_ = v_val_2868_;
goto _start;
}
else
{
lean_object* v_val_2870_; lean_object* v___x_2872_; 
lean_dec_ref(v_f_2861_);
v_val_2870_ = lean_ctor_get(v_a_2864_, 0);
lean_inc(v_val_2870_);
lean_dec_ref_known(v_a_2864_, 1);
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 0, v_val_2870_);
v___x_2872_ = v___x_2866_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_val_2870_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
lean_dec_ref(v_f_2861_);
v_a_2875_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2863_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2863_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_iterate___redArg___boxed(lean_object* v_a_2883_, lean_object* v_f_2884_, lean_object* v___y_2885_){
_start:
{
lean_object* v_res_2886_; 
v_res_2886_ = l_IO_iterate___redArg(v_a_2883_, v_f_2884_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l_IO_iterate(lean_object* v_00_u03b1_2887_, lean_object* v_00_u03b2_2888_, lean_object* v_a_2889_, lean_object* v_f_2890_){
_start:
{
lean_object* v___x_2892_; 
v___x_2892_ = l_IO_iterate___redArg(v_a_2889_, v_f_2890_);
return v___x_2892_;
}
}
LEAN_EXPORT lean_object* l_IO_iterate___boxed(lean_object* v_00_u03b1_2893_, lean_object* v_00_u03b2_2894_, lean_object* v_a_2895_, lean_object* v_f_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l_IO_iterate(v_00_u03b1_2893_, v_00_u03b2_2894_, v_a_2895_, v_f_2896_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_mk___boxed(lean_object* v_fn_2902_, lean_object* v_mode_2903_, lean_object* v_a_00___x40___internal___hyg_2904_){
_start:
{
uint8_t v_mode_boxed_2905_; lean_object* v_res_2906_; 
v_mode_boxed_2905_ = lean_unbox(v_mode_2903_);
v_res_2906_ = lean_io_prim_handle_mk(v_fn_2902_, v_mode_boxed_2905_);
lean_dec_ref(v_fn_2902_);
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_lock___boxed(lean_object* v_h_2910_, lean_object* v_exclusive_2911_, lean_object* v_a_00___x40___internal___hyg_2912_){
_start:
{
uint8_t v_exclusive_boxed_2913_; lean_object* v_res_2914_; 
v_exclusive_boxed_2913_ = lean_unbox(v_exclusive_2911_);
v_res_2914_ = lean_io_prim_handle_lock(v_h_2910_, v_exclusive_boxed_2913_);
lean_dec(v_h_2910_);
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_tryLock___boxed(lean_object* v_h_2918_, lean_object* v_exclusive_2919_, lean_object* v_a_00___x40___internal___hyg_2920_){
_start:
{
uint8_t v_exclusive_boxed_2921_; lean_object* v_res_2922_; 
v_exclusive_boxed_2921_ = lean_unbox(v_exclusive_2919_);
v_res_2922_ = lean_io_prim_handle_try_lock(v_h_2918_, v_exclusive_boxed_2921_);
lean_dec(v_h_2918_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_unlock___boxed(lean_object* v_h_2925_, lean_object* v_a_00___x40___internal___hyg_2926_){
_start:
{
lean_object* v_res_2927_; 
v_res_2927_ = lean_io_prim_handle_unlock(v_h_2925_);
lean_dec(v_h_2925_);
return v_res_2927_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_isTty___boxed(lean_object* v_h_2930_, lean_object* v_a_00___x40___internal___hyg_2931_){
_start:
{
uint8_t v_res_2932_; lean_object* v_r_2933_; 
v_res_2932_ = lean_io_prim_handle_is_tty(v_h_2930_);
lean_dec(v_h_2930_);
v_r_2933_ = lean_box(v_res_2932_);
return v_r_2933_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_flush___boxed(lean_object* v_h_2936_, lean_object* v_a_00___x40___internal___hyg_2937_){
_start:
{
lean_object* v_res_2938_; 
v_res_2938_ = lean_io_prim_handle_flush(v_h_2936_);
lean_dec(v_h_2936_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_rewind___boxed(lean_object* v_h_2941_, lean_object* v_a_00___x40___internal___hyg_2942_){
_start:
{
lean_object* v_res_2943_; 
v_res_2943_ = lean_io_prim_handle_rewind(v_h_2941_);
lean_dec(v_h_2941_);
return v_res_2943_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_truncate___boxed(lean_object* v_h_2946_, lean_object* v_a_00___x40___internal___hyg_2947_){
_start:
{
lean_object* v_res_2948_; 
v_res_2948_ = lean_io_prim_handle_truncate(v_h_2946_);
lean_dec(v_h_2946_);
return v_res_2948_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_read___boxed(lean_object* v_h_2952_, lean_object* v_bytes_2953_, lean_object* v_a_00___x40___internal___hyg_2954_){
_start:
{
size_t v_bytes_boxed_2955_; lean_object* v_res_2956_; 
v_bytes_boxed_2955_ = lean_unbox_usize(v_bytes_2953_);
lean_dec(v_bytes_2953_);
v_res_2956_ = lean_io_prim_handle_read(v_h_2952_, v_bytes_boxed_2955_);
lean_dec(v_h_2952_);
return v_res_2956_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_write___boxed(lean_object* v_h_2960_, lean_object* v_buffer_2961_, lean_object* v_a_00___x40___internal___hyg_2962_){
_start:
{
lean_object* v_res_2963_; 
v_res_2963_ = lean_io_prim_handle_write(v_h_2960_, v_buffer_2961_);
lean_dec_ref(v_buffer_2961_);
lean_dec(v_h_2960_);
return v_res_2963_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_getLine___boxed(lean_object* v_h_2966_, lean_object* v_a_00___x40___internal___hyg_2967_){
_start:
{
lean_object* v_res_2968_; 
v_res_2968_ = lean_io_prim_handle_get_line(v_h_2966_);
lean_dec(v_h_2966_);
return v_res_2968_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_putStr___boxed(lean_object* v_h_2972_, lean_object* v_s_2973_, lean_object* v_a_00___x40___internal___hyg_2974_){
_start:
{
lean_object* v_res_2975_; 
v_res_2975_ = lean_io_prim_handle_put_str(v_h_2972_, v_s_2973_);
lean_dec_ref(v_s_2973_);
lean_dec(v_h_2972_);
return v_res_2975_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_realPath___boxed(lean_object* v_fname_2978_, lean_object* v_a_00___x40___internal___hyg_2979_){
_start:
{
lean_object* v_res_2980_; 
v_res_2980_ = lean_io_realpath(v_fname_2978_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_removeFile___boxed(lean_object* v_fname_2983_, lean_object* v_a_00___x40___internal___hyg_2984_){
_start:
{
lean_object* v_res_2985_; 
v_res_2985_ = lean_io_remove_file(v_fname_2983_);
lean_dec_ref(v_fname_2983_);
return v_res_2985_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_removeDir___boxed(lean_object* v_a_00___x40___internal___hyg_2988_, lean_object* v_a_00___x40___internal___hyg_2989_){
_start:
{
lean_object* v_res_2990_; 
v_res_2990_ = lean_io_remove_dir(v_a_00___x40___internal___hyg_2988_);
lean_dec_ref(v_a_00___x40___internal___hyg_2988_);
return v_res_2990_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_createDir___boxed(lean_object* v_a_00___x40___internal___hyg_2993_, lean_object* v_a_00___x40___internal___hyg_2994_){
_start:
{
lean_object* v_res_2995_; 
v_res_2995_ = lean_io_create_dir(v_a_00___x40___internal___hyg_2993_);
lean_dec_ref(v_a_00___x40___internal___hyg_2993_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_rename___boxed(lean_object* v_old_2999_, lean_object* v_new_3000_, lean_object* v_a_00___x40___internal___hyg_3001_){
_start:
{
lean_object* v_res_3002_; 
v_res_3002_ = lean_io_rename(v_old_2999_, v_new_3000_);
lean_dec_ref(v_new_3000_);
lean_dec_ref(v_old_2999_);
return v_res_3002_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_hardLink___boxed(lean_object* v_orig_3006_, lean_object* v_link_3007_, lean_object* v_a_00___x40___internal___hyg_3008_){
_start:
{
lean_object* v_res_3009_; 
v_res_3009_ = lean_io_hard_link(v_orig_3006_, v_link_3007_);
lean_dec_ref(v_link_3007_);
lean_dec_ref(v_orig_3006_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_createTempFile___boxed(lean_object* v_a_00___x40___internal___hyg_3011_){
_start:
{
lean_object* v_res_3012_; 
v_res_3012_ = lean_io_create_tempfile();
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_createTempDir___boxed(lean_object* v_a_00___x40___internal___hyg_3014_){
_start:
{
lean_object* v_res_3015_; 
v_res_3015_ = lean_io_create_tempdir();
return v_res_3015_;
}
}
LEAN_EXPORT lean_object* l_IO_getEnv___boxed(lean_object* v_var_3018_, lean_object* v_a_00___x40___internal___hyg_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = lean_io_getenv(v_var_3018_);
lean_dec_ref(v_var_3018_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l_IO_appPath___boxed(lean_object* v_a_00___x40___internal___hyg_3022_){
_start:
{
lean_object* v_res_3023_; 
v_res_3023_ = lean_io_app_path();
return v_res_3023_;
}
}
LEAN_EXPORT lean_object* l_IO_currentDir___boxed(lean_object* v_a_00___x40___internal___hyg_3025_){
_start:
{
lean_object* v_res_3026_; 
v_res_3026_ = lean_io_current_dir();
return v_res_3026_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withFile___redArg(lean_object* v_fn_3027_, uint8_t v_mode_3028_, lean_object* v_f_3029_){
_start:
{
lean_object* v___x_3031_; 
v___x_3031_ = lean_io_prim_handle_mk(v_fn_3027_, v_mode_3028_);
if (lean_obj_tag(v___x_3031_) == 0)
{
lean_object* v_a_3032_; lean_object* v___x_3033_; 
v_a_3032_ = lean_ctor_get(v___x_3031_, 0);
lean_inc(v_a_3032_);
lean_dec_ref_known(v___x_3031_, 1);
v___x_3033_ = lean_apply_2(v_f_3029_, v_a_3032_, lean_box(0));
return v___x_3033_;
}
else
{
lean_object* v_a_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3041_; 
lean_dec_ref(v_f_3029_);
v_a_3034_ = lean_ctor_get(v___x_3031_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v___x_3031_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3036_ = v___x_3031_;
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_a_3034_);
lean_dec(v___x_3031_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
lean_object* v___x_3039_; 
if (v_isShared_3037_ == 0)
{
v___x_3039_ = v___x_3036_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v_a_3034_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
return v___x_3039_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withFile___redArg___boxed(lean_object* v_fn_3042_, lean_object* v_mode_3043_, lean_object* v_f_3044_, lean_object* v___y_3045_){
_start:
{
uint8_t v_mode_boxed_3046_; lean_object* v_res_3047_; 
v_mode_boxed_3046_ = lean_unbox(v_mode_3043_);
v_res_3047_ = l_IO_FS_withFile___redArg(v_fn_3042_, v_mode_boxed_3046_, v_f_3044_);
lean_dec_ref(v_fn_3042_);
return v_res_3047_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withFile(lean_object* v_00_u03b1_3048_, lean_object* v_fn_3049_, uint8_t v_mode_3050_, lean_object* v_f_3051_){
_start:
{
lean_object* v___x_3053_; 
v___x_3053_ = lean_io_prim_handle_mk(v_fn_3049_, v_mode_3050_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v_a_3054_; lean_object* v___x_3055_; 
v_a_3054_ = lean_ctor_get(v___x_3053_, 0);
lean_inc(v_a_3054_);
lean_dec_ref_known(v___x_3053_, 1);
v___x_3055_ = lean_apply_2(v_f_3051_, v_a_3054_, lean_box(0));
return v___x_3055_;
}
else
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3063_; 
lean_dec_ref(v_f_3051_);
v_a_3056_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3063_ == 0)
{
v___x_3058_ = v___x_3053_;
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v___x_3053_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3061_; 
if (v_isShared_3059_ == 0)
{
v___x_3061_ = v___x_3058_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v_a_3056_);
v___x_3061_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
return v___x_3061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withFile___boxed(lean_object* v_00_u03b1_3064_, lean_object* v_fn_3065_, lean_object* v_mode_3066_, lean_object* v_f_3067_, lean_object* v___y_3068_){
_start:
{
uint8_t v_mode_boxed_3069_; lean_object* v_res_3070_; 
v_mode_boxed_3069_ = lean_unbox(v_mode_3066_);
v_res_3070_ = l_IO_FS_withFile(v_00_u03b1_3064_, v_fn_3065_, v_mode_boxed_3069_, v_f_3067_);
lean_dec_ref(v_fn_3065_);
return v_res_3070_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_putStrLn(lean_object* v_h_3071_, lean_object* v_s_3072_){
_start:
{
uint32_t v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3074_ = 10;
v___x_3075_ = lean_string_push(v_s_3072_, v___x_3074_);
v___x_3076_ = lean_io_prim_handle_put_str(v_h_3071_, v___x_3075_);
lean_dec_ref(v___x_3075_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_putStrLn___boxed(lean_object* v_h_3077_, lean_object* v_s_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l_IO_FS_Handle_putStrLn(v_h_3077_, v_s_3078_);
lean_dec(v_h_3077_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(lean_object* v_h_3081_, lean_object* v_acc_3082_){
_start:
{
size_t v___x_3084_; lean_object* v___x_3085_; 
v___x_3084_ = ((size_t)1024ULL);
v___x_3085_ = lean_io_prim_handle_read(v_h_3081_, v___x_3084_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3099_; 
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3088_ = v___x_3085_;
v_isShared_3089_ = v_isSharedCheck_3099_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3085_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3099_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
uint8_t v___x_3090_; 
v___x_3090_ = l_ByteArray_isEmpty(v_a_3086_);
if (v___x_3090_ == 0)
{
lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; 
lean_del_object(v___x_3088_);
v___x_3091_ = lean_unsigned_to_nat(0u);
v___x_3092_ = lean_byte_array_size(v_acc_3082_);
v___x_3093_ = lean_byte_array_size(v_a_3086_);
v___x_3094_ = lean_byte_array_copy_slice(v_a_3086_, v___x_3091_, v_acc_3082_, v___x_3092_, v___x_3093_, v___x_3090_);
lean_dec(v_a_3086_);
v_acc_3082_ = v___x_3094_;
goto _start;
}
else
{
lean_object* v___x_3097_; 
lean_dec(v_a_3086_);
if (v_isShared_3089_ == 0)
{
lean_ctor_set(v___x_3088_, 0, v_acc_3082_);
v___x_3097_ = v___x_3088_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_acc_3082_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
else
{
lean_dec_ref(v_acc_3082_);
return v___x_3085_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop___boxed(lean_object* v_h_3100_, lean_object* v_acc_3101_, lean_object* v___y_3102_){
_start:
{
lean_object* v_res_3103_; 
v_res_3103_ = l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(v_h_3100_, v_acc_3101_);
lean_dec(v_h_3100_);
return v_res_3103_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEndInto(lean_object* v_h_3104_, lean_object* v_buf_3105_){
_start:
{
lean_object* v___x_3107_; 
v___x_3107_ = l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(v_h_3104_, v_buf_3105_);
return v___x_3107_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEndInto___boxed(lean_object* v_h_3108_, lean_object* v_buf_3109_, lean_object* v___y_3110_){
_start:
{
lean_object* v_res_3111_; 
v_res_3111_ = l_IO_FS_Handle_readBinToEndInto(v_h_3108_, v_buf_3109_);
lean_dec(v_h_3108_);
return v_res_3111_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEnd(lean_object* v_h_3112_){
_start:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___x_3114_ = l_ByteArray_empty;
v___x_3115_ = l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(v_h_3112_, v___x_3114_);
return v___x_3115_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEnd___boxed(lean_object* v_h_3116_, lean_object* v___y_3117_){
_start:
{
lean_object* v_res_3118_; 
v_res_3118_ = l_IO_FS_Handle_readBinToEnd(v_h_3116_);
lean_dec(v_h_3116_);
return v_res_3118_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readToEnd(lean_object* v_h_3122_){
_start:
{
lean_object* v___x_3124_; 
v___x_3124_ = l_IO_FS_Handle_readBinToEnd(v_h_3122_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3138_; 
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3138_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3138_ == 0)
{
v___x_3127_ = v___x_3124_;
v_isShared_3128_ = v_isSharedCheck_3138_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3124_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3138_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
uint8_t v___x_3129_; 
v___x_3129_ = lean_string_validate_utf8(v_a_3125_);
if (v___x_3129_ == 0)
{
lean_object* v___x_3130_; lean_object* v___x_3132_; 
lean_dec(v_a_3125_);
v___x_3130_ = ((lean_object*)(l_IO_FS_Handle_readToEnd___closed__1));
if (v_isShared_3128_ == 0)
{
lean_ctor_set_tag(v___x_3127_, 1);
lean_ctor_set(v___x_3127_, 0, v___x_3130_);
v___x_3132_ = v___x_3127_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v___x_3130_);
v___x_3132_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
return v___x_3132_;
}
}
else
{
lean_object* v___x_3134_; lean_object* v___x_3136_; 
v___x_3134_ = lean_string_from_utf8_unchecked(v_a_3125_);
if (v_isShared_3128_ == 0)
{
lean_ctor_set(v___x_3127_, 0, v___x_3134_);
v___x_3136_ = v___x_3127_;
goto v_reusejp_3135_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v___x_3134_);
v___x_3136_ = v_reuseFailAlloc_3137_;
goto v_reusejp_3135_;
}
v_reusejp_3135_:
{
return v___x_3136_;
}
}
}
}
else
{
lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3146_; 
v_a_3139_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3146_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3146_ == 0)
{
v___x_3141_ = v___x_3124_;
v_isShared_3142_ = v_isSharedCheck_3146_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_dec(v___x_3124_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3146_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
lean_object* v___x_3144_; 
if (v_isShared_3142_ == 0)
{
v___x_3144_ = v___x_3141_;
goto v_reusejp_3143_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v_a_3139_);
v___x_3144_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3143_;
}
v_reusejp_3143_:
{
return v___x_3144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readToEnd___boxed(lean_object* v_h_3147_, lean_object* v___y_3148_){
_start:
{
lean_object* v_res_3149_; 
v_res_3149_ = l_IO_FS_Handle_readToEnd(v_h_3147_);
lean_dec(v_h_3147_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_lines_read(lean_object* v_h_3150_, lean_object* v_lines_3151_){
_start:
{
lean_object* v___x_3153_; 
v___x_3153_ = lean_io_prim_handle_get_line(v_h_3150_);
if (lean_obj_tag(v___x_3153_) == 0)
{
lean_object* v_a_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3208_; 
v_a_3154_ = lean_ctor_get(v___x_3153_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v___x_3153_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3156_ = v___x_3153_;
v_isShared_3157_ = v_isSharedCheck_3208_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v___x_3153_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3208_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___y_3159_; lean_object* v___y_3163_; lean_object* v___y_3164_; lean_object* v___y_3165_; uint32_t v___y_3166_; uint32_t v___y_3174_; lean_object* v___x_3196_; lean_object* v___x_3197_; uint8_t v___x_3198_; 
v___x_3196_ = lean_string_utf8_byte_size(v_a_3154_);
v___x_3197_ = lean_unsigned_to_nat(0u);
v___x_3198_ = lean_nat_dec_eq(v___x_3196_, v___x_3197_);
if (v___x_3198_ == 0)
{
lean_object* v___x_3199_; lean_object* v___x_3200_; 
lean_inc(v_a_3154_);
v___x_3199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3199_, 0, v_a_3154_);
lean_ctor_set(v___x_3199_, 1, v___x_3197_);
lean_ctor_set(v___x_3199_, 2, v___x_3196_);
v___x_3200_ = l_String_Slice_Pos_prev_x3f(v___x_3199_, v___x_3196_);
if (lean_obj_tag(v___x_3200_) == 0)
{
uint32_t v___x_3201_; 
lean_dec_ref_known(v___x_3199_, 3);
v___x_3201_ = 65;
v___y_3174_ = v___x_3201_;
goto v___jp_3173_;
}
else
{
lean_object* v_val_3202_; lean_object* v___x_3203_; 
v_val_3202_ = lean_ctor_get(v___x_3200_, 0);
lean_inc(v_val_3202_);
lean_dec_ref_known(v___x_3200_, 1);
v___x_3203_ = l_String_Slice_Pos_get_x3f(v___x_3199_, v_val_3202_);
lean_dec(v_val_3202_);
lean_dec_ref_known(v___x_3199_, 3);
if (lean_obj_tag(v___x_3203_) == 0)
{
uint32_t v___x_3204_; 
v___x_3204_ = 65;
v___y_3174_ = v___x_3204_;
goto v___jp_3173_;
}
else
{
lean_object* v_val_3205_; uint32_t v___x_3206_; 
v_val_3205_ = lean_ctor_get(v___x_3203_, 0);
lean_inc(v_val_3205_);
lean_dec_ref_known(v___x_3203_, 1);
v___x_3206_ = lean_unbox_uint32(v_val_3205_);
lean_dec(v_val_3205_);
v___y_3174_ = v___x_3206_;
goto v___jp_3173_;
}
}
}
else
{
lean_object* v___x_3207_; 
lean_del_object(v___x_3156_);
lean_dec(v_a_3154_);
v___x_3207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3207_, 0, v_lines_3151_);
return v___x_3207_;
}
v___jp_3158_:
{
lean_object* v___x_3160_; 
v___x_3160_ = lean_array_push(v_lines_3151_, v___y_3159_);
v_lines_3151_ = v___x_3160_;
goto _start;
}
v___jp_3162_:
{
uint32_t v___x_3167_; uint8_t v___x_3168_; 
v___x_3167_ = 13;
v___x_3168_ = lean_uint32_dec_eq(v___y_3166_, v___x_3167_);
if (v___x_3168_ == 0)
{
lean_dec(v___y_3164_);
lean_dec(v___y_3163_);
v___y_3159_ = v___y_3165_;
goto v___jp_3158_;
}
else
{
lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3169_ = lean_string_utf8_byte_size(v___y_3165_);
lean_inc(v___y_3163_);
lean_inc_ref(v___y_3165_);
v___x_3170_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3170_, 0, v___y_3165_);
lean_ctor_set(v___x_3170_, 1, v___y_3163_);
lean_ctor_set(v___x_3170_, 2, v___x_3169_);
v___x_3171_ = l_String_Slice_Pos_prevn(v___x_3170_, v___x_3169_, v___y_3164_);
lean_dec_ref_known(v___x_3170_, 3);
v___x_3172_ = lean_string_utf8_extract_fast(v___y_3165_, v___y_3163_, v___x_3171_);
lean_dec(v___x_3171_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3165_);
v___y_3159_ = v___x_3172_;
goto v___jp_3158_;
}
}
v___jp_3173_:
{
uint32_t v___x_3175_; uint8_t v___x_3176_; 
v___x_3175_ = 10;
v___x_3176_ = lean_uint32_dec_eq(v___y_3174_, v___x_3175_);
if (v___x_3176_ == 0)
{
lean_object* v___x_3177_; lean_object* v___x_3179_; 
v___x_3177_ = lean_array_push(v_lines_3151_, v_a_3154_);
if (v_isShared_3157_ == 0)
{
lean_ctor_set(v___x_3156_, 0, v___x_3177_);
v___x_3179_ = v___x_3156_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3180_; 
v_reuseFailAlloc_3180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3180_, 0, v___x_3177_);
v___x_3179_ = v_reuseFailAlloc_3180_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
return v___x_3179_;
}
}
else
{
lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; 
lean_del_object(v___x_3156_);
v___x_3181_ = lean_unsigned_to_nat(1u);
v___x_3182_ = lean_unsigned_to_nat(0u);
v___x_3183_ = lean_string_utf8_byte_size(v_a_3154_);
lean_inc(v_a_3154_);
v___x_3184_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3184_, 0, v_a_3154_);
lean_ctor_set(v___x_3184_, 1, v___x_3182_);
lean_ctor_set(v___x_3184_, 2, v___x_3183_);
v___x_3185_ = l_String_Slice_Pos_prevn(v___x_3184_, v___x_3183_, v___x_3181_);
lean_dec_ref_known(v___x_3184_, 3);
v___x_3186_ = lean_string_utf8_extract_fast(v_a_3154_, v___x_3182_, v___x_3185_);
lean_dec(v___x_3185_);
lean_dec(v_a_3154_);
v___x_3187_ = lean_string_utf8_byte_size(v___x_3186_);
lean_inc_ref(v___x_3186_);
v___x_3188_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3186_);
lean_ctor_set(v___x_3188_, 1, v___x_3182_);
lean_ctor_set(v___x_3188_, 2, v___x_3187_);
v___x_3189_ = l_String_Slice_Pos_prev_x3f(v___x_3188_, v___x_3187_);
if (lean_obj_tag(v___x_3189_) == 0)
{
uint32_t v___x_3190_; 
lean_dec_ref_known(v___x_3188_, 3);
v___x_3190_ = 65;
v___y_3163_ = v___x_3182_;
v___y_3164_ = v___x_3181_;
v___y_3165_ = v___x_3186_;
v___y_3166_ = v___x_3190_;
goto v___jp_3162_;
}
else
{
lean_object* v_val_3191_; lean_object* v___x_3192_; 
v_val_3191_ = lean_ctor_get(v___x_3189_, 0);
lean_inc(v_val_3191_);
lean_dec_ref_known(v___x_3189_, 1);
v___x_3192_ = l_String_Slice_Pos_get_x3f(v___x_3188_, v_val_3191_);
lean_dec(v_val_3191_);
lean_dec_ref_known(v___x_3188_, 3);
if (lean_obj_tag(v___x_3192_) == 0)
{
uint32_t v___x_3193_; 
v___x_3193_ = 65;
v___y_3163_ = v___x_3182_;
v___y_3164_ = v___x_3181_;
v___y_3165_ = v___x_3186_;
v___y_3166_ = v___x_3193_;
goto v___jp_3162_;
}
else
{
lean_object* v_val_3194_; uint32_t v___x_3195_; 
v_val_3194_ = lean_ctor_get(v___x_3192_, 0);
lean_inc(v_val_3194_);
lean_dec_ref_known(v___x_3192_, 1);
v___x_3195_ = lean_unbox_uint32(v_val_3194_);
lean_dec(v_val_3194_);
v___y_3163_ = v___x_3182_;
v___y_3164_ = v___x_3181_;
v___y_3165_ = v___x_3186_;
v___y_3166_ = v___x_3195_;
goto v___jp_3162_;
}
}
}
}
}
}
else
{
lean_object* v_a_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3216_; 
lean_dec_ref(v_lines_3151_);
v_a_3209_ = lean_ctor_get(v___x_3153_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3153_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3211_ = v___x_3153_;
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_a_3209_);
lean_dec(v___x_3153_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3216_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v___x_3214_; 
if (v_isShared_3212_ == 0)
{
v___x_3214_ = v___x_3211_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v_a_3209_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_lines_read___boxed(lean_object* v_h_3217_, lean_object* v_lines_3218_, lean_object* v___y_3219_){
_start:
{
lean_object* v_res_3220_; 
v_res_3220_ = l___private_Init_System_IO_0__IO_FS_Handle_lines_read(v_h_3217_, v_lines_3218_);
lean_dec(v_h_3217_);
return v_res_3220_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_lines(lean_object* v_h_3223_){
_start:
{
lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3225_ = ((lean_object*)(l_IO_FS_Handle_lines___closed__0));
v___x_3226_ = l___private_Init_System_IO_0__IO_FS_Handle_lines_read(v_h_3223_, v___x_3225_);
return v___x_3226_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_lines___boxed(lean_object* v_h_3227_, lean_object* v___y_3228_){
_start:
{
lean_object* v_res_3229_; 
v_res_3229_ = l_IO_FS_Handle_lines(v_h_3227_);
lean_dec(v_h_3227_);
return v_res_3229_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_lines(lean_object* v_fname_3230_){
_start:
{
uint8_t v___x_3232_; lean_object* v___x_3233_; 
v___x_3232_ = 0;
v___x_3233_ = lean_io_prim_handle_mk(v_fname_3230_, v___x_3232_);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v_a_3234_; lean_object* v___x_3235_; 
v_a_3234_ = lean_ctor_get(v___x_3233_, 0);
lean_inc(v_a_3234_);
lean_dec_ref_known(v___x_3233_, 1);
v___x_3235_ = l_IO_FS_Handle_lines(v_a_3234_);
lean_dec(v_a_3234_);
return v___x_3235_;
}
else
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
v_a_3236_ = lean_ctor_get(v___x_3233_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3233_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3233_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v___x_3233_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_lines___boxed(lean_object* v_fname_3244_, lean_object* v___y_3245_){
_start:
{
lean_object* v_res_3246_; 
v_res_3246_ = l_IO_FS_lines(v_fname_3244_);
lean_dec_ref(v_fname_3244_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_writeBinFile(lean_object* v_fname_3247_, lean_object* v_content_3248_){
_start:
{
uint8_t v___x_3250_; lean_object* v___x_3251_; 
v___x_3250_ = 1;
v___x_3251_ = lean_io_prim_handle_mk(v_fname_3247_, v___x_3250_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v_a_3252_; lean_object* v___x_3253_; 
v_a_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_a_3252_);
lean_dec_ref_known(v___x_3251_, 1);
v___x_3253_ = lean_io_prim_handle_write(v_a_3252_, v_content_3248_);
lean_dec(v_a_3252_);
return v___x_3253_;
}
else
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3261_; 
v_a_3254_ = lean_ctor_get(v___x_3251_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3256_ = v___x_3251_;
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v___x_3251_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3261_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___x_3259_; 
if (v_isShared_3257_ == 0)
{
v___x_3259_ = v___x_3256_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_a_3254_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_writeBinFile___boxed(lean_object* v_fname_3262_, lean_object* v_content_3263_, lean_object* v___y_3264_){
_start:
{
lean_object* v_res_3265_; 
v_res_3265_ = l_IO_FS_writeBinFile(v_fname_3262_, v_content_3263_);
lean_dec_ref(v_content_3263_);
lean_dec_ref(v_fname_3262_);
return v_res_3265_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_writeFile(lean_object* v_fname_3266_, lean_object* v_content_3267_){
_start:
{
uint8_t v___x_3269_; lean_object* v___x_3270_; 
v___x_3269_ = 1;
v___x_3270_ = lean_io_prim_handle_mk(v_fname_3266_, v___x_3269_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; lean_object* v___x_3272_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3270_, 1);
v___x_3272_ = lean_io_prim_handle_put_str(v_a_3271_, v_content_3267_);
lean_dec(v_a_3271_);
return v___x_3272_;
}
else
{
lean_object* v_a_3273_; lean_object* v___x_3275_; uint8_t v_isShared_3276_; uint8_t v_isSharedCheck_3280_; 
v_a_3273_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3275_ = v___x_3270_;
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
else
{
lean_inc(v_a_3273_);
lean_dec(v___x_3270_);
v___x_3275_ = lean_box(0);
v_isShared_3276_ = v_isSharedCheck_3280_;
goto v_resetjp_3274_;
}
v_resetjp_3274_:
{
lean_object* v___x_3278_; 
if (v_isShared_3276_ == 0)
{
v___x_3278_ = v___x_3275_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v_a_3273_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_writeFile___boxed(lean_object* v_fname_3281_, lean_object* v_content_3282_, lean_object* v___y_3283_){
_start:
{
lean_object* v_res_3284_; 
v_res_3284_ = l_IO_FS_writeFile(v_fname_3281_, v_content_3282_);
lean_dec_ref(v_content_3282_);
lean_dec_ref(v_fname_3281_);
return v_res_3284_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_putStrLn(lean_object* v_strm_3285_, lean_object* v_s_3286_){
_start:
{
lean_object* v_putStr_3288_; uint32_t v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
v_putStr_3288_ = lean_ctor_get(v_strm_3285_, 4);
lean_inc_ref(v_putStr_3288_);
lean_dec_ref(v_strm_3285_);
v___x_3289_ = 10;
v___x_3290_ = lean_string_push(v_s_3286_, v___x_3289_);
v___x_3291_ = lean_apply_2(v_putStr_3288_, v___x_3290_, lean_box(0));
return v___x_3291_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_putStrLn___boxed(lean_object* v_strm_3292_, lean_object* v_s_3293_, lean_object* v___y_3294_){
_start:
{
lean_object* v_res_3295_; 
v_res_3295_ = l_IO_FS_Stream_putStrLn(v_strm_3292_, v_s_3293_);
return v_res_3295_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00IO_FS_instReprDirEntry_repr_spec__0(lean_object* v_a_3296_){
_start:
{
lean_object* v___x_3297_; 
v___x_3297_ = lean_nat_to_int(v_a_3296_);
return v___x_3297_;
}
}
static lean_object* _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; 
v___x_3311_ = lean_unsigned_to_nat(8u);
v___x_3312_ = lean_nat_to_int(v___x_3311_);
return v___x_3312_;
}
}
static lean_object* _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3322_ = lean_unsigned_to_nat(12u);
v___x_3323_ = lean_nat_to_int(v___x_3322_);
return v___x_3323_;
}
}
static lean_object* _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; 
v___x_3325_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__0));
v___x_3326_ = lean_string_length(v___x_3325_);
return v___x_3326_;
}
}
static lean_object* _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___x_3327_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__16, &l_IO_FS_instReprDirEntry_repr___redArg___closed__16_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__16);
v___x_3328_ = lean_nat_to_int(v___x_3327_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprDirEntry_repr___redArg(lean_object* v_x_3333_){
_start:
{
lean_object* v_root_3334_; lean_object* v_fileName_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3374_; 
v_root_3334_ = lean_ctor_get(v_x_3333_, 0);
v_fileName_3335_ = lean_ctor_get(v_x_3333_, 1);
v_isSharedCheck_3374_ = !lean_is_exclusive(v_x_3333_);
if (v_isSharedCheck_3374_ == 0)
{
v___x_3337_ = v_x_3333_;
v_isShared_3338_ = v_isSharedCheck_3374_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_fileName_3335_);
lean_inc(v_root_3334_);
lean_dec(v_x_3333_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3374_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3347_; 
v___x_3339_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__5));
v___x_3340_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__6));
v___x_3341_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__7, &l_IO_FS_instReprDirEntry_repr___redArg___closed__7_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__7);
v___x_3342_ = lean_unsigned_to_nat(0u);
v___x_3343_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__9));
v___x_3344_ = l_String_quote(v_root_3334_);
v___x_3345_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3345_, 0, v___x_3344_);
if (v_isShared_3338_ == 0)
{
lean_ctor_set_tag(v___x_3337_, 5);
lean_ctor_set(v___x_3337_, 1, v___x_3345_);
lean_ctor_set(v___x_3337_, 0, v___x_3343_);
v___x_3347_ = v___x_3337_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v___x_3343_);
lean_ctor_set(v_reuseFailAlloc_3373_, 1, v___x_3345_);
v___x_3347_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; uint8_t v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3348_ = l_Repr_addAppParen(v___x_3347_, v___x_3342_);
v___x_3349_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3341_);
lean_ctor_set(v___x_3349_, 1, v___x_3348_);
v___x_3350_ = 0;
v___x_3351_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3351_, 0, v___x_3349_);
lean_ctor_set_uint8(v___x_3351_, sizeof(void*)*1, v___x_3350_);
v___x_3352_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3340_);
lean_ctor_set(v___x_3352_, 1, v___x_3351_);
v___x_3353_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__11));
v___x_3354_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3354_, 0, v___x_3352_);
lean_ctor_set(v___x_3354_, 1, v___x_3353_);
v___x_3355_ = lean_box(1);
v___x_3356_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3354_);
lean_ctor_set(v___x_3356_, 1, v___x_3355_);
v___x_3357_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__13));
v___x_3358_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3356_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v___x_3359_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3358_);
lean_ctor_set(v___x_3359_, 1, v___x_3339_);
v___x_3360_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__14, &l_IO_FS_instReprDirEntry_repr___redArg___closed__14_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__14);
v___x_3361_ = l_String_quote(v_fileName_3335_);
v___x_3362_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3361_);
v___x_3363_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3363_, 0, v___x_3360_);
lean_ctor_set(v___x_3363_, 1, v___x_3362_);
v___x_3364_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3364_, 0, v___x_3363_);
lean_ctor_set_uint8(v___x_3364_, sizeof(void*)*1, v___x_3350_);
v___x_3365_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3365_, 0, v___x_3359_);
lean_ctor_set(v___x_3365_, 1, v___x_3364_);
v___x_3366_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__17, &l_IO_FS_instReprDirEntry_repr___redArg___closed__17_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__17);
v___x_3367_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__18));
v___x_3368_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3367_);
lean_ctor_set(v___x_3368_, 1, v___x_3365_);
v___x_3369_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__19));
v___x_3370_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3368_);
lean_ctor_set(v___x_3370_, 1, v___x_3369_);
v___x_3371_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3371_, 0, v___x_3366_);
lean_ctor_set(v___x_3371_, 1, v___x_3370_);
v___x_3372_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3372_, 0, v___x_3371_);
lean_ctor_set_uint8(v___x_3372_, sizeof(void*)*1, v___x_3350_);
return v___x_3372_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprDirEntry_repr(lean_object* v_x_3375_, lean_object* v_prec_3376_){
_start:
{
lean_object* v___x_3377_; 
v___x_3377_ = l_IO_FS_instReprDirEntry_repr___redArg(v_x_3375_);
return v___x_3377_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprDirEntry_repr___boxed(lean_object* v_x_3378_, lean_object* v_prec_3379_){
_start:
{
lean_object* v_res_3380_; 
v_res_3380_ = l_IO_FS_instReprDirEntry_repr(v_x_3378_, v_prec_3379_);
lean_dec(v_prec_3379_);
return v_res_3380_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_DirEntry_path(lean_object* v_entry_3383_){
_start:
{
lean_object* v_root_3384_; lean_object* v_fileName_3385_; lean_object* v___x_3386_; 
v_root_3384_ = lean_ctor_get(v_entry_3383_, 0);
lean_inc_ref(v_root_3384_);
v_fileName_3385_ = lean_ctor_get(v_entry_3383_, 1);
lean_inc_ref(v_fileName_3385_);
lean_dec_ref(v_entry_3383_);
v___x_3386_ = l_System_FilePath_join(v_root_3384_, v_fileName_3385_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorIdx(uint8_t v_x_3387_){
_start:
{
switch(v_x_3387_)
{
case 0:
{
lean_object* v___x_3388_; 
v___x_3388_ = lean_unsigned_to_nat(0u);
return v___x_3388_;
}
case 1:
{
lean_object* v___x_3389_; 
v___x_3389_ = lean_unsigned_to_nat(1u);
return v___x_3389_;
}
case 2:
{
lean_object* v___x_3390_; 
v___x_3390_ = lean_unsigned_to_nat(2u);
return v___x_3390_;
}
default: 
{
lean_object* v___x_3391_; 
v___x_3391_ = lean_unsigned_to_nat(3u);
return v___x_3391_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorIdx___boxed(lean_object* v_x_3392_){
_start:
{
uint8_t v_x_boxed_3393_; lean_object* v_res_3394_; 
v_x_boxed_3393_ = lean_unbox(v_x_3392_);
v_res_3394_ = l_IO_FS_FileType_ctorIdx(v_x_boxed_3393_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim___redArg(lean_object* v_k_3395_){
_start:
{
lean_inc(v_k_3395_);
return v_k_3395_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim___redArg___boxed(lean_object* v_k_3396_){
_start:
{
lean_object* v_res_3397_; 
v_res_3397_ = l_IO_FS_FileType_ctorElim___redArg(v_k_3396_);
lean_dec(v_k_3396_);
return v_res_3397_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim(lean_object* v_motive_3398_, lean_object* v_ctorIdx_3399_, uint8_t v_t_3400_, lean_object* v_h_3401_, lean_object* v_k_3402_){
_start:
{
lean_inc(v_k_3402_);
return v_k_3402_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim___boxed(lean_object* v_motive_3403_, lean_object* v_ctorIdx_3404_, lean_object* v_t_3405_, lean_object* v_h_3406_, lean_object* v_k_3407_){
_start:
{
uint8_t v_t_boxed_3408_; lean_object* v_res_3409_; 
v_t_boxed_3408_ = lean_unbox(v_t_3405_);
v_res_3409_ = l_IO_FS_FileType_ctorElim(v_motive_3403_, v_ctorIdx_3404_, v_t_boxed_3408_, v_h_3406_, v_k_3407_);
lean_dec(v_k_3407_);
lean_dec(v_ctorIdx_3404_);
return v_res_3409_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim___redArg(lean_object* v_dir_3410_){
_start:
{
lean_inc(v_dir_3410_);
return v_dir_3410_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim___redArg___boxed(lean_object* v_dir_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_IO_FS_FileType_dir_elim___redArg(v_dir_3411_);
lean_dec(v_dir_3411_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim(lean_object* v_motive_3413_, uint8_t v_t_3414_, lean_object* v_h_3415_, lean_object* v_dir_3416_){
_start:
{
lean_inc(v_dir_3416_);
return v_dir_3416_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim___boxed(lean_object* v_motive_3417_, lean_object* v_t_3418_, lean_object* v_h_3419_, lean_object* v_dir_3420_){
_start:
{
uint8_t v_t_boxed_3421_; lean_object* v_res_3422_; 
v_t_boxed_3421_ = lean_unbox(v_t_3418_);
v_res_3422_ = l_IO_FS_FileType_dir_elim(v_motive_3417_, v_t_boxed_3421_, v_h_3419_, v_dir_3420_);
lean_dec(v_dir_3420_);
return v_res_3422_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim___redArg(lean_object* v_file_3423_){
_start:
{
lean_inc(v_file_3423_);
return v_file_3423_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim___redArg___boxed(lean_object* v_file_3424_){
_start:
{
lean_object* v_res_3425_; 
v_res_3425_ = l_IO_FS_FileType_file_elim___redArg(v_file_3424_);
lean_dec(v_file_3424_);
return v_res_3425_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim(lean_object* v_motive_3426_, uint8_t v_t_3427_, lean_object* v_h_3428_, lean_object* v_file_3429_){
_start:
{
lean_inc(v_file_3429_);
return v_file_3429_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim___boxed(lean_object* v_motive_3430_, lean_object* v_t_3431_, lean_object* v_h_3432_, lean_object* v_file_3433_){
_start:
{
uint8_t v_t_boxed_3434_; lean_object* v_res_3435_; 
v_t_boxed_3434_ = lean_unbox(v_t_3431_);
v_res_3435_ = l_IO_FS_FileType_file_elim(v_motive_3430_, v_t_boxed_3434_, v_h_3432_, v_file_3433_);
lean_dec(v_file_3433_);
return v_res_3435_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim___redArg(lean_object* v_symlink_3436_){
_start:
{
lean_inc(v_symlink_3436_);
return v_symlink_3436_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim___redArg___boxed(lean_object* v_symlink_3437_){
_start:
{
lean_object* v_res_3438_; 
v_res_3438_ = l_IO_FS_FileType_symlink_elim___redArg(v_symlink_3437_);
lean_dec(v_symlink_3437_);
return v_res_3438_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim(lean_object* v_motive_3439_, uint8_t v_t_3440_, lean_object* v_h_3441_, lean_object* v_symlink_3442_){
_start:
{
lean_inc(v_symlink_3442_);
return v_symlink_3442_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim___boxed(lean_object* v_motive_3443_, lean_object* v_t_3444_, lean_object* v_h_3445_, lean_object* v_symlink_3446_){
_start:
{
uint8_t v_t_boxed_3447_; lean_object* v_res_3448_; 
v_t_boxed_3447_ = lean_unbox(v_t_3444_);
v_res_3448_ = l_IO_FS_FileType_symlink_elim(v_motive_3443_, v_t_boxed_3447_, v_h_3445_, v_symlink_3446_);
lean_dec(v_symlink_3446_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim___redArg(lean_object* v_other_3449_){
_start:
{
lean_inc(v_other_3449_);
return v_other_3449_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim___redArg___boxed(lean_object* v_other_3450_){
_start:
{
lean_object* v_res_3451_; 
v_res_3451_ = l_IO_FS_FileType_other_elim___redArg(v_other_3450_);
lean_dec(v_other_3450_);
return v_res_3451_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim(lean_object* v_motive_3452_, uint8_t v_t_3453_, lean_object* v_h_3454_, lean_object* v_other_3455_){
_start:
{
lean_inc(v_other_3455_);
return v_other_3455_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim___boxed(lean_object* v_motive_3456_, lean_object* v_t_3457_, lean_object* v_h_3458_, lean_object* v_other_3459_){
_start:
{
uint8_t v_t_boxed_3460_; lean_object* v_res_3461_; 
v_t_boxed_3460_ = lean_unbox(v_t_3457_);
v_res_3461_ = l_IO_FS_FileType_other_elim(v_motive_3456_, v_t_boxed_3460_, v_h_3458_, v_other_3459_);
lean_dec(v_other_3459_);
return v_res_3461_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprFileType_repr(uint8_t v_x_3474_, lean_object* v_prec_3475_){
_start:
{
lean_object* v___y_3477_; lean_object* v___y_3484_; lean_object* v___y_3491_; lean_object* v___y_3498_; 
switch(v_x_3474_)
{
case 0:
{
lean_object* v___x_3504_; uint8_t v___x_3505_; 
v___x_3504_ = lean_unsigned_to_nat(1024u);
v___x_3505_ = lean_nat_dec_le(v___x_3504_, v_prec_3475_);
if (v___x_3505_ == 0)
{
lean_object* v___x_3506_; 
v___x_3506_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_3477_ = v___x_3506_;
goto v___jp_3476_;
}
else
{
lean_object* v___x_3507_; 
v___x_3507_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_3477_ = v___x_3507_;
goto v___jp_3476_;
}
}
case 1:
{
lean_object* v___x_3508_; uint8_t v___x_3509_; 
v___x_3508_ = lean_unsigned_to_nat(1024u);
v___x_3509_ = lean_nat_dec_le(v___x_3508_, v_prec_3475_);
if (v___x_3509_ == 0)
{
lean_object* v___x_3510_; 
v___x_3510_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_3484_ = v___x_3510_;
goto v___jp_3483_;
}
else
{
lean_object* v___x_3511_; 
v___x_3511_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_3484_ = v___x_3511_;
goto v___jp_3483_;
}
}
case 2:
{
lean_object* v___x_3512_; uint8_t v___x_3513_; 
v___x_3512_ = lean_unsigned_to_nat(1024u);
v___x_3513_ = lean_nat_dec_le(v___x_3512_, v_prec_3475_);
if (v___x_3513_ == 0)
{
lean_object* v___x_3514_; 
v___x_3514_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_3491_ = v___x_3514_;
goto v___jp_3490_;
}
else
{
lean_object* v___x_3515_; 
v___x_3515_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_3491_ = v___x_3515_;
goto v___jp_3490_;
}
}
default: 
{
lean_object* v___x_3516_; uint8_t v___x_3517_; 
v___x_3516_ = lean_unsigned_to_nat(1024u);
v___x_3517_ = lean_nat_dec_le(v___x_3516_, v_prec_3475_);
if (v___x_3517_ == 0)
{
lean_object* v___x_3518_; 
v___x_3518_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_3498_ = v___x_3518_;
goto v___jp_3497_;
}
else
{
lean_object* v___x_3519_; 
v___x_3519_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_3498_ = v___x_3519_;
goto v___jp_3497_;
}
}
}
v___jp_3476_:
{
lean_object* v___x_3478_; lean_object* v___x_3479_; uint8_t v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; 
v___x_3478_ = ((lean_object*)(l_IO_FS_instReprFileType_repr___closed__1));
lean_inc(v___y_3477_);
v___x_3479_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3479_, 0, v___y_3477_);
lean_ctor_set(v___x_3479_, 1, v___x_3478_);
v___x_3480_ = 0;
v___x_3481_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3481_, 0, v___x_3479_);
lean_ctor_set_uint8(v___x_3481_, sizeof(void*)*1, v___x_3480_);
v___x_3482_ = l_Repr_addAppParen(v___x_3481_, v_prec_3475_);
return v___x_3482_;
}
v___jp_3483_:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; uint8_t v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3485_ = ((lean_object*)(l_IO_FS_instReprFileType_repr___closed__3));
lean_inc(v___y_3484_);
v___x_3486_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3486_, 0, v___y_3484_);
lean_ctor_set(v___x_3486_, 1, v___x_3485_);
v___x_3487_ = 0;
v___x_3488_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3488_, 0, v___x_3486_);
lean_ctor_set_uint8(v___x_3488_, sizeof(void*)*1, v___x_3487_);
v___x_3489_ = l_Repr_addAppParen(v___x_3488_, v_prec_3475_);
return v___x_3489_;
}
v___jp_3490_:
{
lean_object* v___x_3492_; lean_object* v___x_3493_; uint8_t v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; 
v___x_3492_ = ((lean_object*)(l_IO_FS_instReprFileType_repr___closed__5));
lean_inc(v___y_3491_);
v___x_3493_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3493_, 0, v___y_3491_);
lean_ctor_set(v___x_3493_, 1, v___x_3492_);
v___x_3494_ = 0;
v___x_3495_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3495_, 0, v___x_3493_);
lean_ctor_set_uint8(v___x_3495_, sizeof(void*)*1, v___x_3494_);
v___x_3496_ = l_Repr_addAppParen(v___x_3495_, v_prec_3475_);
return v___x_3496_;
}
v___jp_3497_:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; uint8_t v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3499_ = ((lean_object*)(l_IO_FS_instReprFileType_repr___closed__7));
lean_inc(v___y_3498_);
v___x_3500_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3500_, 0, v___y_3498_);
lean_ctor_set(v___x_3500_, 1, v___x_3499_);
v___x_3501_ = 0;
v___x_3502_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3502_, 0, v___x_3500_);
lean_ctor_set_uint8(v___x_3502_, sizeof(void*)*1, v___x_3501_);
v___x_3503_ = l_Repr_addAppParen(v___x_3502_, v_prec_3475_);
return v___x_3503_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprFileType_repr___boxed(lean_object* v_x_3520_, lean_object* v_prec_3521_){
_start:
{
uint8_t v_x_221__boxed_3522_; lean_object* v_res_3523_; 
v_x_221__boxed_3522_ = lean_unbox(v_x_3520_);
v_res_3523_ = l_IO_FS_instReprFileType_repr(v_x_221__boxed_3522_, v_prec_3521_);
lean_dec(v_prec_3521_);
return v_res_3523_;
}
}
LEAN_EXPORT uint8_t l_IO_FS_instBEqFileType_beq(uint8_t v_x_3526_, uint8_t v_y_3527_){
_start:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; uint8_t v___x_3530_; 
v___x_3528_ = l_IO_FS_FileType_ctorIdx(v_x_3526_);
v___x_3529_ = l_IO_FS_FileType_ctorIdx(v_y_3527_);
v___x_3530_ = lean_nat_dec_eq(v___x_3528_, v___x_3529_);
lean_dec(v___x_3529_);
lean_dec(v___x_3528_);
return v___x_3530_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instBEqFileType_beq___boxed(lean_object* v_x_3531_, lean_object* v_y_3532_){
_start:
{
uint8_t v_x_21__boxed_3533_; uint8_t v_y_22__boxed_3534_; uint8_t v_res_3535_; lean_object* v_r_3536_; 
v_x_21__boxed_3533_ = lean_unbox(v_x_3531_);
v_y_22__boxed_3534_ = lean_unbox(v_y_3532_);
v_res_3535_ = l_IO_FS_instBEqFileType_beq(v_x_21__boxed_3533_, v_y_22__boxed_3534_);
v_r_3536_ = lean_box(v_res_3535_);
return v_r_3536_;
}
}
static lean_object* _init_l_IO_FS_instReprSystemTime_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3548_ = lean_unsigned_to_nat(7u);
v___x_3549_ = lean_nat_to_int(v___x_3548_);
return v___x_3549_;
}
}
static lean_object* _init_l_IO_FS_instReprSystemTime_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; 
v___x_3553_ = lean_unsigned_to_nat(0u);
v___x_3554_ = lean_nat_to_int(v___x_3553_);
return v___x_3554_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr___redArg(lean_object* v_x_3555_){
_start:
{
lean_object* v_sec_3556_; uint32_t v_nsec_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___y_3562_; lean_object* v___x_3588_; lean_object* v___x_3589_; uint8_t v___x_3590_; 
v_sec_3556_ = lean_ctor_get(v_x_3555_, 0);
v_nsec_3557_ = lean_ctor_get_uint32(v_x_3555_, sizeof(void*)*1);
v___x_3558_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__5));
v___x_3559_ = ((lean_object*)(l_IO_FS_instReprSystemTime_repr___redArg___closed__3));
v___x_3560_ = lean_obj_once(&l_IO_FS_instReprSystemTime_repr___redArg___closed__4, &l_IO_FS_instReprSystemTime_repr___redArg___closed__4_once, _init_l_IO_FS_instReprSystemTime_repr___redArg___closed__4);
v___x_3588_ = lean_unsigned_to_nat(0u);
v___x_3589_ = lean_obj_once(&l_IO_FS_instReprSystemTime_repr___redArg___closed__7, &l_IO_FS_instReprSystemTime_repr___redArg___closed__7_once, _init_l_IO_FS_instReprSystemTime_repr___redArg___closed__7);
v___x_3590_ = lean_int_dec_lt(v_sec_3556_, v___x_3589_);
if (v___x_3590_ == 0)
{
lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = l_Int_repr(v_sec_3556_);
v___x_3592_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3592_, 0, v___x_3591_);
v___y_3562_ = v___x_3592_;
goto v___jp_3561_;
}
else
{
lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; 
v___x_3593_ = l_Int_repr(v_sec_3556_);
v___x_3594_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3593_);
v___x_3595_ = l_Repr_addAppParen(v___x_3594_, v___x_3588_);
v___y_3562_ = v___x_3595_;
goto v___jp_3561_;
}
v___jp_3561_:
{
lean_object* v___x_3563_; uint8_t v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
v___x_3563_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3560_);
lean_ctor_set(v___x_3563_, 1, v___y_3562_);
v___x_3564_ = 0;
v___x_3565_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3565_, 0, v___x_3563_);
lean_ctor_set_uint8(v___x_3565_, sizeof(void*)*1, v___x_3564_);
v___x_3566_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3566_, 0, v___x_3559_);
lean_ctor_set(v___x_3566_, 1, v___x_3565_);
v___x_3567_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__11));
v___x_3568_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3566_);
lean_ctor_set(v___x_3568_, 1, v___x_3567_);
v___x_3569_ = lean_box(1);
v___x_3570_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3570_, 0, v___x_3568_);
lean_ctor_set(v___x_3570_, 1, v___x_3569_);
v___x_3571_ = ((lean_object*)(l_IO_FS_instReprSystemTime_repr___redArg___closed__6));
v___x_3572_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3570_);
lean_ctor_set(v___x_3572_, 1, v___x_3571_);
v___x_3573_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3573_, 0, v___x_3572_);
lean_ctor_set(v___x_3573_, 1, v___x_3558_);
v___x_3574_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__7, &l_IO_FS_instReprDirEntry_repr___redArg___closed__7_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__7);
v___x_3575_ = lean_uint32_to_nat(v_nsec_3557_);
v___x_3576_ = l_Nat_reprFast(v___x_3575_);
v___x_3577_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3576_);
v___x_3578_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3578_, 0, v___x_3574_);
lean_ctor_set(v___x_3578_, 1, v___x_3577_);
v___x_3579_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3579_, 0, v___x_3578_);
lean_ctor_set_uint8(v___x_3579_, sizeof(void*)*1, v___x_3564_);
v___x_3580_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3580_, 0, v___x_3573_);
lean_ctor_set(v___x_3580_, 1, v___x_3579_);
v___x_3581_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__17, &l_IO_FS_instReprDirEntry_repr___redArg___closed__17_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__17);
v___x_3582_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__18));
v___x_3583_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3582_);
lean_ctor_set(v___x_3583_, 1, v___x_3580_);
v___x_3584_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__19));
v___x_3585_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3585_, 0, v___x_3583_);
lean_ctor_set(v___x_3585_, 1, v___x_3584_);
v___x_3586_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3586_, 0, v___x_3581_);
lean_ctor_set(v___x_3586_, 1, v___x_3585_);
v___x_3587_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3587_, 0, v___x_3586_);
lean_ctor_set_uint8(v___x_3587_, sizeof(void*)*1, v___x_3564_);
return v___x_3587_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr___redArg___boxed(lean_object* v_x_3596_){
_start:
{
lean_object* v_res_3597_; 
v_res_3597_ = l_IO_FS_instReprSystemTime_repr___redArg(v_x_3596_);
lean_dec_ref(v_x_3596_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr(lean_object* v_x_3598_, lean_object* v_prec_3599_){
_start:
{
lean_object* v___x_3600_; 
v___x_3600_ = l_IO_FS_instReprSystemTime_repr___redArg(v_x_3598_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr___boxed(lean_object* v_x_3601_, lean_object* v_prec_3602_){
_start:
{
lean_object* v_res_3603_; 
v_res_3603_ = l_IO_FS_instReprSystemTime_repr(v_x_3601_, v_prec_3602_);
lean_dec(v_prec_3602_);
lean_dec_ref(v_x_3601_);
return v_res_3603_;
}
}
LEAN_EXPORT uint8_t l_IO_FS_instBEqSystemTime_beq(lean_object* v_x_3606_, lean_object* v_x_3607_){
_start:
{
lean_object* v_sec_3608_; uint32_t v_nsec_3609_; lean_object* v_sec_3610_; uint32_t v_nsec_3611_; uint8_t v___x_3612_; 
v_sec_3608_ = lean_ctor_get(v_x_3606_, 0);
v_nsec_3609_ = lean_ctor_get_uint32(v_x_3606_, sizeof(void*)*1);
v_sec_3610_ = lean_ctor_get(v_x_3607_, 0);
v_nsec_3611_ = lean_ctor_get_uint32(v_x_3607_, sizeof(void*)*1);
v___x_3612_ = lean_int_dec_eq(v_sec_3608_, v_sec_3610_);
if (v___x_3612_ == 0)
{
return v___x_3612_;
}
else
{
uint8_t v___x_3613_; 
v___x_3613_ = lean_uint32_dec_eq(v_nsec_3609_, v_nsec_3611_);
return v___x_3613_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_instBEqSystemTime_beq___boxed(lean_object* v_x_3614_, lean_object* v_x_3615_){
_start:
{
uint8_t v_res_3616_; lean_object* v_r_3617_; 
v_res_3616_ = l_IO_FS_instBEqSystemTime_beq(v_x_3614_, v_x_3615_);
lean_dec_ref(v_x_3615_);
lean_dec_ref(v_x_3614_);
v_r_3617_ = lean_box(v_res_3616_);
return v_r_3617_;
}
}
LEAN_EXPORT uint8_t l_IO_FS_instOrdSystemTime_ord(lean_object* v_x_3620_, lean_object* v_x_3621_){
_start:
{
lean_object* v_sec_3622_; uint32_t v_nsec_3623_; lean_object* v_sec_3624_; uint32_t v_nsec_3625_; uint8_t v___x_3626_; 
v_sec_3622_ = lean_ctor_get(v_x_3620_, 0);
v_nsec_3623_ = lean_ctor_get_uint32(v_x_3620_, sizeof(void*)*1);
v_sec_3624_ = lean_ctor_get(v_x_3621_, 0);
v_nsec_3625_ = lean_ctor_get_uint32(v_x_3621_, sizeof(void*)*1);
v___x_3626_ = lean_int_dec_lt(v_sec_3622_, v_sec_3624_);
if (v___x_3626_ == 0)
{
uint8_t v___x_3627_; 
v___x_3627_ = lean_int_dec_eq(v_sec_3622_, v_sec_3624_);
if (v___x_3627_ == 0)
{
uint8_t v___x_3628_; 
v___x_3628_ = 2;
return v___x_3628_;
}
else
{
uint8_t v___x_3629_; 
v___x_3629_ = lean_uint32_dec_lt(v_nsec_3623_, v_nsec_3625_);
if (v___x_3629_ == 0)
{
uint8_t v___x_3630_; 
v___x_3630_ = lean_uint32_dec_eq(v_nsec_3623_, v_nsec_3625_);
if (v___x_3630_ == 0)
{
uint8_t v___x_3631_; 
v___x_3631_ = 2;
return v___x_3631_;
}
else
{
uint8_t v___x_3632_; 
v___x_3632_ = 1;
return v___x_3632_;
}
}
else
{
uint8_t v___x_3633_; 
v___x_3633_ = 0;
return v___x_3633_;
}
}
}
else
{
uint8_t v___x_3634_; 
v___x_3634_ = 0;
return v___x_3634_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_instOrdSystemTime_ord___boxed(lean_object* v_x_3635_, lean_object* v_x_3636_){
_start:
{
uint8_t v_res_3637_; lean_object* v_r_3638_; 
v_res_3637_ = l_IO_FS_instOrdSystemTime_ord(v_x_3635_, v_x_3636_);
lean_dec_ref(v_x_3636_);
lean_dec_ref(v_x_3635_);
v_r_3638_ = lean_box(v_res_3637_);
return v_r_3638_;
}
}
static lean_object* _init_l_IO_FS_instInhabitedSystemTime_default___closed__0(void){
_start:
{
uint32_t v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; 
v___x_3641_ = 0;
v___x_3642_ = lean_obj_once(&l_IO_FS_instReprSystemTime_repr___redArg___closed__7, &l_IO_FS_instReprSystemTime_repr___redArg___closed__7_once, _init_l_IO_FS_instReprSystemTime_repr___redArg___closed__7);
v___x_3643_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_3643_, 0, v___x_3642_);
lean_ctor_set_uint32(v___x_3643_, sizeof(void*)*1, v___x_3641_);
return v___x_3643_;
}
}
static lean_object* _init_l_IO_FS_instInhabitedSystemTime_default(void){
_start:
{
lean_object* v___x_3644_; 
v___x_3644_ = lean_obj_once(&l_IO_FS_instInhabitedSystemTime_default___closed__0, &l_IO_FS_instInhabitedSystemTime_default___closed__0_once, _init_l_IO_FS_instInhabitedSystemTime_default___closed__0);
return v___x_3644_;
}
}
static lean_object* _init_l_IO_FS_instInhabitedSystemTime(void){
_start:
{
lean_object* v___x_3645_; 
v___x_3645_ = l_IO_FS_instInhabitedSystemTime_default;
return v___x_3645_;
}
}
static lean_object* _init_l_IO_FS_instLTSystemTime(void){
_start:
{
lean_object* v___x_3646_; 
v___x_3646_ = lean_box(0);
return v___x_3646_;
}
}
static lean_object* _init_l_IO_FS_instLESystemTime(void){
_start:
{
lean_object* v___x_3647_; 
v___x_3647_ = lean_box(0);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr___redArg(lean_object* v_x_3669_){
_start:
{
lean_object* v_accessed_3670_; lean_object* v_modified_3671_; uint64_t v_byteSize_3672_; uint8_t v_type_3673_; uint64_t v_numLinks_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; uint8_t v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; 
v_accessed_3670_ = lean_ctor_get(v_x_3669_, 0);
v_modified_3671_ = lean_ctor_get(v_x_3669_, 1);
v_byteSize_3672_ = lean_ctor_get_uint64(v_x_3669_, sizeof(void*)*2);
v_type_3673_ = lean_ctor_get_uint8(v_x_3669_, sizeof(void*)*2 + 16);
v_numLinks_3674_ = lean_ctor_get_uint64(v_x_3669_, sizeof(void*)*2 + 8);
v___x_3675_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__5));
v___x_3676_ = ((lean_object*)(l_IO_FS_instReprMetadata_repr___redArg___closed__3));
v___x_3677_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__14, &l_IO_FS_instReprDirEntry_repr___redArg___closed__14_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__14);
v___x_3678_ = lean_unsigned_to_nat(0u);
v___x_3679_ = l_IO_FS_instReprSystemTime_repr___redArg(v_accessed_3670_);
v___x_3680_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3677_);
lean_ctor_set(v___x_3680_, 1, v___x_3679_);
v___x_3681_ = 0;
v___x_3682_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3682_, 0, v___x_3680_);
lean_ctor_set_uint8(v___x_3682_, sizeof(void*)*1, v___x_3681_);
v___x_3683_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3683_, 0, v___x_3676_);
lean_ctor_set(v___x_3683_, 1, v___x_3682_);
v___x_3684_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__11));
v___x_3685_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3685_, 0, v___x_3683_);
lean_ctor_set(v___x_3685_, 1, v___x_3684_);
v___x_3686_ = lean_box(1);
v___x_3687_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3685_);
lean_ctor_set(v___x_3687_, 1, v___x_3686_);
v___x_3688_ = ((lean_object*)(l_IO_FS_instReprMetadata_repr___redArg___closed__5));
v___x_3689_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3687_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
v___x_3690_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3689_);
lean_ctor_set(v___x_3690_, 1, v___x_3675_);
v___x_3691_ = l_IO_FS_instReprSystemTime_repr___redArg(v_modified_3671_);
v___x_3692_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3677_);
lean_ctor_set(v___x_3692_, 1, v___x_3691_);
v___x_3693_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3693_, 0, v___x_3692_);
lean_ctor_set_uint8(v___x_3693_, sizeof(void*)*1, v___x_3681_);
v___x_3694_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3694_, 0, v___x_3690_);
lean_ctor_set(v___x_3694_, 1, v___x_3693_);
v___x_3695_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3695_, 0, v___x_3694_);
lean_ctor_set(v___x_3695_, 1, v___x_3684_);
v___x_3696_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3696_, 0, v___x_3695_);
lean_ctor_set(v___x_3696_, 1, v___x_3686_);
v___x_3697_ = ((lean_object*)(l_IO_FS_instReprMetadata_repr___redArg___closed__7));
v___x_3698_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3698_, 0, v___x_3696_);
lean_ctor_set(v___x_3698_, 1, v___x_3697_);
v___x_3699_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3699_, 0, v___x_3698_);
lean_ctor_set(v___x_3699_, 1, v___x_3675_);
v___x_3700_ = lean_uint64_to_nat(v_byteSize_3672_);
v___x_3701_ = l_Nat_reprFast(v___x_3700_);
v___x_3702_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3702_, 0, v___x_3701_);
v___x_3703_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3703_, 0, v___x_3677_);
lean_ctor_set(v___x_3703_, 1, v___x_3702_);
v___x_3704_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3704_, 0, v___x_3703_);
lean_ctor_set_uint8(v___x_3704_, sizeof(void*)*1, v___x_3681_);
v___x_3705_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3705_, 0, v___x_3699_);
lean_ctor_set(v___x_3705_, 1, v___x_3704_);
v___x_3706_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3706_, 0, v___x_3705_);
lean_ctor_set(v___x_3706_, 1, v___x_3684_);
v___x_3707_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3707_, 0, v___x_3706_);
lean_ctor_set(v___x_3707_, 1, v___x_3686_);
v___x_3708_ = ((lean_object*)(l_IO_FS_instReprMetadata_repr___redArg___closed__9));
v___x_3709_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3709_, 0, v___x_3707_);
lean_ctor_set(v___x_3709_, 1, v___x_3708_);
v___x_3710_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3710_, 0, v___x_3709_);
lean_ctor_set(v___x_3710_, 1, v___x_3675_);
v___x_3711_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__7, &l_IO_FS_instReprDirEntry_repr___redArg___closed__7_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__7);
v___x_3712_ = l_IO_FS_instReprFileType_repr(v_type_3673_, v___x_3678_);
v___x_3713_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3713_, 0, v___x_3711_);
lean_ctor_set(v___x_3713_, 1, v___x_3712_);
v___x_3714_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3714_, 0, v___x_3713_);
lean_ctor_set_uint8(v___x_3714_, sizeof(void*)*1, v___x_3681_);
v___x_3715_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3715_, 0, v___x_3710_);
lean_ctor_set(v___x_3715_, 1, v___x_3714_);
v___x_3716_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3715_);
lean_ctor_set(v___x_3716_, 1, v___x_3684_);
v___x_3717_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3717_, 0, v___x_3716_);
lean_ctor_set(v___x_3717_, 1, v___x_3686_);
v___x_3718_ = ((lean_object*)(l_IO_FS_instReprMetadata_repr___redArg___closed__11));
v___x_3719_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3717_);
lean_ctor_set(v___x_3719_, 1, v___x_3718_);
v___x_3720_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3720_, 0, v___x_3719_);
lean_ctor_set(v___x_3720_, 1, v___x_3675_);
v___x_3721_ = lean_uint64_to_nat(v_numLinks_3674_);
v___x_3722_ = l_Nat_reprFast(v___x_3721_);
v___x_3723_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3723_, 0, v___x_3722_);
v___x_3724_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3677_);
lean_ctor_set(v___x_3724_, 1, v___x_3723_);
v___x_3725_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3725_, 0, v___x_3724_);
lean_ctor_set_uint8(v___x_3725_, sizeof(void*)*1, v___x_3681_);
v___x_3726_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3726_, 0, v___x_3720_);
lean_ctor_set(v___x_3726_, 1, v___x_3725_);
v___x_3727_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__17, &l_IO_FS_instReprDirEntry_repr___redArg___closed__17_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__17);
v___x_3728_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__18));
v___x_3729_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3729_, 0, v___x_3728_);
lean_ctor_set(v___x_3729_, 1, v___x_3726_);
v___x_3730_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__19));
v___x_3731_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3729_);
lean_ctor_set(v___x_3731_, 1, v___x_3730_);
v___x_3732_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3727_);
lean_ctor_set(v___x_3732_, 1, v___x_3731_);
v___x_3733_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3733_, 0, v___x_3732_);
lean_ctor_set_uint8(v___x_3733_, sizeof(void*)*1, v___x_3681_);
return v___x_3733_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr___redArg___boxed(lean_object* v_x_3734_){
_start:
{
lean_object* v_res_3735_; 
v_res_3735_ = l_IO_FS_instReprMetadata_repr___redArg(v_x_3734_);
lean_dec_ref(v_x_3734_);
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr(lean_object* v_x_3736_, lean_object* v_prec_3737_){
_start:
{
lean_object* v___x_3738_; 
v___x_3738_ = l_IO_FS_instReprMetadata_repr___redArg(v_x_3736_);
return v___x_3738_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr___boxed(lean_object* v_x_3739_, lean_object* v_prec_3740_){
_start:
{
lean_object* v_res_3741_; 
v_res_3741_ = l_IO_FS_instReprMetadata_repr(v_x_3739_, v_prec_3740_);
lean_dec(v_prec_3740_);
lean_dec_ref(v_x_3739_);
return v_res_3741_;
}
}
LEAN_EXPORT lean_object* l_System_FilePath_readDir___boxed(lean_object* v_a_00___x40___internal___hyg_3746_, lean_object* v_a_00___x40___internal___hyg_3747_){
_start:
{
lean_object* v_res_3748_; 
v_res_3748_ = lean_io_read_dir(v_a_00___x40___internal___hyg_3746_);
lean_dec_ref(v_a_00___x40___internal___hyg_3746_);
return v_res_3748_;
}
}
LEAN_EXPORT lean_object* l_System_FilePath_metadata___boxed(lean_object* v_a_00___x40___internal___hyg_3751_, lean_object* v_a_00___x40___internal___hyg_3752_){
_start:
{
lean_object* v_res_3753_; 
v_res_3753_ = lean_io_metadata(v_a_00___x40___internal___hyg_3751_);
lean_dec_ref(v_a_00___x40___internal___hyg_3751_);
return v_res_3753_;
}
}
LEAN_EXPORT lean_object* l_System_FilePath_symlinkMetadata___boxed(lean_object* v_a_00___x40___internal___hyg_3756_, lean_object* v_a_00___x40___internal___hyg_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = lean_io_symlink_metadata(v_a_00___x40___internal___hyg_3756_);
lean_dec_ref(v_a_00___x40___internal___hyg_3756_);
return v_res_3758_;
}
}
LEAN_EXPORT uint8_t l_System_FilePath_isDir(lean_object* v_p_3759_){
_start:
{
lean_object* v___x_3761_; 
v___x_3761_ = lean_io_metadata(v_p_3759_);
if (lean_obj_tag(v___x_3761_) == 0)
{
lean_object* v_a_3762_; uint8_t v_type_3763_; uint8_t v___x_3764_; uint8_t v___x_3765_; 
v_a_3762_ = lean_ctor_get(v___x_3761_, 0);
lean_inc(v_a_3762_);
lean_dec_ref_known(v___x_3761_, 1);
v_type_3763_ = lean_ctor_get_uint8(v_a_3762_, sizeof(void*)*2 + 16);
lean_dec(v_a_3762_);
v___x_3764_ = 0;
v___x_3765_ = l_IO_FS_instBEqFileType_beq(v_type_3763_, v___x_3764_);
return v___x_3765_;
}
else
{
uint8_t v___x_3766_; 
lean_dec_ref_known(v___x_3761_, 1);
v___x_3766_ = 0;
return v___x_3766_;
}
}
}
LEAN_EXPORT lean_object* l_System_FilePath_isDir___boxed(lean_object* v_p_3767_, lean_object* v___y_3768_){
_start:
{
uint8_t v_res_3769_; lean_object* v_r_3770_; 
v_res_3769_ = l_System_FilePath_isDir(v_p_3767_);
lean_dec_ref(v_p_3767_);
v_r_3770_ = lean_box(v_res_3769_);
return v_r_3770_;
}
}
LEAN_EXPORT uint8_t l_System_FilePath_pathExists(lean_object* v_p_3771_){
_start:
{
lean_object* v___x_3773_; 
v___x_3773_ = lean_io_metadata(v_p_3771_);
if (lean_obj_tag(v___x_3773_) == 0)
{
uint8_t v___x_3774_; 
lean_dec_ref_known(v___x_3773_, 1);
v___x_3774_ = 1;
return v___x_3774_;
}
else
{
uint8_t v___x_3775_; 
lean_dec_ref_known(v___x_3773_, 1);
v___x_3775_ = 0;
return v___x_3775_;
}
}
}
LEAN_EXPORT lean_object* l_System_FilePath_pathExists___boxed(lean_object* v_p_3776_, lean_object* v___y_3777_){
_start:
{
uint8_t v_res_3778_; lean_object* v_r_3779_; 
v_res_3778_ = l_System_FilePath_pathExists(v_p_3776_);
lean_dec_ref(v_p_3776_);
v_r_3779_ = lean_box(v_res_3778_);
return v_r_3779_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_System_IO_0__System_FilePath_walkDir_go_spec__0(lean_object* v_enter_3780_, lean_object* v_p_3781_, lean_object* v_as_3782_, size_t v_sz_3783_, size_t v_i_3784_, lean_object* v_b_3785_, lean_object* v___y_3786_){
_start:
{
lean_object* v_a_3789_; lean_object* v_snd_3790_; uint8_t v___x_3794_; 
v___x_3794_ = lean_usize_dec_lt(v_i_3784_, v_sz_3783_);
if (v___x_3794_ == 0)
{
lean_object* v___x_3795_; lean_object* v___x_3796_; 
lean_dec_ref(v_p_3781_);
lean_dec_ref(v_enter_3780_);
v___x_3795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3795_, 0, v_b_3785_);
lean_ctor_set(v___x_3795_, 1, v___y_3786_);
v___x_3796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3795_);
return v___x_3796_;
}
else
{
lean_object* v___x_3797_; lean_object* v_a_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3797_ = lean_box(0);
v_a_3798_ = lean_array_uget_borrowed(v_as_3782_, v_i_3784_);
lean_inc(v_a_3798_);
v___x_3799_ = l_IO_FS_DirEntry_path(v_a_3798_);
lean_inc_ref(v___x_3799_);
v___x_3800_ = lean_array_push(v___y_3786_, v___x_3799_);
v___x_3801_ = lean_io_metadata(v___x_3799_);
if (lean_obj_tag(v___x_3801_) == 0)
{
lean_object* v_a_3802_; uint8_t v_type_3803_; 
v_a_3802_ = lean_ctor_get(v___x_3801_, 0);
lean_inc(v_a_3802_);
lean_dec_ref_known(v___x_3801_, 1);
v_type_3803_ = lean_ctor_get_uint8(v_a_3802_, sizeof(void*)*2 + 16);
lean_dec(v_a_3802_);
switch(v_type_3803_)
{
case 2:
{
lean_object* v___x_3804_; 
v___x_3804_ = lean_io_realpath(v___x_3799_);
if (lean_obj_tag(v___x_3804_) == 0)
{
lean_object* v_a_3805_; uint8_t v___x_3806_; 
v_a_3805_ = lean_ctor_get(v___x_3804_, 0);
lean_inc(v_a_3805_);
lean_dec_ref_known(v___x_3804_, 1);
v___x_3806_ = l_System_FilePath_isDir(v_a_3805_);
if (v___x_3806_ == 0)
{
lean_dec(v_a_3805_);
v_a_3789_ = v___x_3797_;
v_snd_3790_ = v___x_3800_;
goto v___jp_3788_;
}
else
{
lean_object* v___x_3807_; 
lean_inc_ref(v_enter_3780_);
lean_inc_ref(v_p_3781_);
v___x_3807_ = lean_apply_2(v_enter_3780_, v_p_3781_, lean_box(0));
if (lean_obj_tag(v___x_3807_) == 0)
{
lean_object* v_a_3808_; uint8_t v___x_3809_; 
v_a_3808_ = lean_ctor_get(v___x_3807_, 0);
lean_inc(v_a_3808_);
lean_dec_ref_known(v___x_3807_, 1);
v___x_3809_ = lean_unbox(v_a_3808_);
lean_dec(v_a_3808_);
if (v___x_3809_ == 0)
{
lean_dec(v_a_3805_);
v_a_3789_ = v___x_3797_;
v_snd_3790_ = v___x_3800_;
goto v___jp_3788_;
}
else
{
lean_object* v___x_3810_; 
lean_inc_ref(v_enter_3780_);
v___x_3810_ = l___private_Init_System_IO_0__System_FilePath_walkDir_go(v_enter_3780_, v_a_3805_, v___x_3800_);
if (lean_obj_tag(v___x_3810_) == 0)
{
lean_object* v_a_3811_; lean_object* v_snd_3812_; 
v_a_3811_ = lean_ctor_get(v___x_3810_, 0);
lean_inc(v_a_3811_);
lean_dec_ref_known(v___x_3810_, 1);
v_snd_3812_ = lean_ctor_get(v_a_3811_, 1);
lean_inc(v_snd_3812_);
lean_dec(v_a_3811_);
v_a_3789_ = v___x_3797_;
v_snd_3790_ = v_snd_3812_;
goto v___jp_3788_;
}
else
{
lean_dec_ref(v_p_3781_);
lean_dec_ref(v_enter_3780_);
return v___x_3810_;
}
}
}
else
{
lean_object* v_a_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3820_; 
lean_dec(v_a_3805_);
lean_dec_ref(v___x_3800_);
lean_dec_ref(v_p_3781_);
lean_dec_ref(v_enter_3780_);
v_a_3813_ = lean_ctor_get(v___x_3807_, 0);
v_isSharedCheck_3820_ = !lean_is_exclusive(v___x_3807_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3815_ = v___x_3807_;
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_a_3813_);
lean_dec(v___x_3807_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3820_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3818_; 
if (v_isShared_3816_ == 0)
{
v___x_3818_ = v___x_3815_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v_a_3813_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
}
}
}
else
{
lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3828_; 
lean_dec_ref(v___x_3800_);
lean_dec_ref(v_p_3781_);
lean_dec_ref(v_enter_3780_);
v_a_3821_ = lean_ctor_get(v___x_3804_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3804_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3823_ = v___x_3804_;
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_dec(v___x_3804_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3826_; 
if (v_isShared_3824_ == 0)
{
v___x_3826_ = v___x_3823_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v_a_3821_);
v___x_3826_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
return v___x_3826_;
}
}
}
}
case 0:
{
lean_object* v___x_3829_; 
lean_inc_ref(v_enter_3780_);
v___x_3829_ = l___private_Init_System_IO_0__System_FilePath_walkDir_go(v_enter_3780_, v___x_3799_, v___x_3800_);
if (lean_obj_tag(v___x_3829_) == 0)
{
lean_object* v_a_3830_; lean_object* v_snd_3831_; 
v_a_3830_ = lean_ctor_get(v___x_3829_, 0);
lean_inc(v_a_3830_);
lean_dec_ref_known(v___x_3829_, 1);
v_snd_3831_ = lean_ctor_get(v_a_3830_, 1);
lean_inc(v_snd_3831_);
lean_dec(v_a_3830_);
v_a_3789_ = v___x_3797_;
v_snd_3790_ = v_snd_3831_;
goto v___jp_3788_;
}
else
{
lean_dec_ref(v_p_3781_);
lean_dec_ref(v_enter_3780_);
return v___x_3829_;
}
}
default: 
{
lean_dec_ref(v___x_3799_);
v_a_3789_ = v___x_3797_;
v_snd_3790_ = v___x_3800_;
goto v___jp_3788_;
}
}
}
else
{
lean_object* v_a_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3839_; 
lean_dec_ref(v___x_3799_);
v_a_3832_ = lean_ctor_get(v___x_3801_, 0);
v_isSharedCheck_3839_ = !lean_is_exclusive(v___x_3801_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3834_ = v___x_3801_;
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_a_3832_);
lean_dec(v___x_3801_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3839_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
if (lean_obj_tag(v_a_3832_) == 11)
{
lean_dec_ref_known(v_a_3832_, 2);
lean_del_object(v___x_3834_);
v_a_3789_ = v___x_3797_;
v_snd_3790_ = v___x_3800_;
goto v___jp_3788_;
}
else
{
lean_object* v___x_3837_; 
lean_dec_ref(v___x_3800_);
lean_dec_ref(v_p_3781_);
lean_dec_ref(v_enter_3780_);
if (v_isShared_3835_ == 0)
{
v___x_3837_ = v___x_3834_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v_a_3832_);
v___x_3837_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
return v___x_3837_;
}
}
}
}
}
v___jp_3788_:
{
size_t v___x_3791_; size_t v___x_3792_; 
v___x_3791_ = ((size_t)1ULL);
v___x_3792_ = lean_usize_add(v_i_3784_, v___x_3791_);
v_i_3784_ = v___x_3792_;
v_b_3785_ = v_a_3789_;
v___y_3786_ = v_snd_3790_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__System_FilePath_walkDir_go(lean_object* v_enter_3840_, lean_object* v_p_3841_, lean_object* v___y_3842_){
_start:
{
lean_object* v___x_3844_; 
lean_inc_ref(v_enter_3840_);
lean_inc_ref(v_p_3841_);
v___x_3844_ = lean_apply_2(v_enter_3840_, v_p_3841_, lean_box(0));
if (lean_obj_tag(v___x_3844_) == 0)
{
lean_object* v_a_3845_; lean_object* v___x_3847_; uint8_t v_isShared_3848_; uint8_t v_isSharedCheck_3886_; 
v_a_3845_ = lean_ctor_get(v___x_3844_, 0);
v_isSharedCheck_3886_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3886_ == 0)
{
v___x_3847_ = v___x_3844_;
v_isShared_3848_ = v_isSharedCheck_3886_;
goto v_resetjp_3846_;
}
else
{
lean_inc(v_a_3845_);
lean_dec(v___x_3844_);
v___x_3847_ = lean_box(0);
v_isShared_3848_ = v_isSharedCheck_3886_;
goto v_resetjp_3846_;
}
v_resetjp_3846_:
{
uint8_t v___x_3849_; 
v___x_3849_ = lean_unbox(v_a_3845_);
lean_dec(v_a_3845_);
if (v___x_3849_ == 0)
{
lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3853_; 
lean_dec_ref(v_p_3841_);
lean_dec_ref(v_enter_3840_);
v___x_3850_ = lean_box(0);
v___x_3851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3850_);
lean_ctor_set(v___x_3851_, 1, v___y_3842_);
if (v_isShared_3848_ == 0)
{
lean_ctor_set(v___x_3847_, 0, v___x_3851_);
v___x_3853_ = v___x_3847_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v___x_3851_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
else
{
lean_object* v___x_3855_; 
lean_del_object(v___x_3847_);
v___x_3855_ = lean_io_read_dir(v_p_3841_);
if (lean_obj_tag(v___x_3855_) == 0)
{
lean_object* v_a_3856_; lean_object* v___x_3857_; size_t v_sz_3858_; size_t v___x_3859_; lean_object* v___x_3860_; 
v_a_3856_ = lean_ctor_get(v___x_3855_, 0);
lean_inc(v_a_3856_);
lean_dec_ref_known(v___x_3855_, 1);
v___x_3857_ = lean_box(0);
v_sz_3858_ = lean_array_size(v_a_3856_);
v___x_3859_ = ((size_t)0ULL);
v___x_3860_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_System_IO_0__System_FilePath_walkDir_go_spec__0(v_enter_3840_, v_p_3841_, v_a_3856_, v_sz_3858_, v___x_3859_, v___x_3857_, v___y_3842_);
lean_dec(v_a_3856_);
if (lean_obj_tag(v___x_3860_) == 0)
{
lean_object* v_a_3861_; lean_object* v___x_3863_; uint8_t v_isShared_3864_; uint8_t v_isSharedCheck_3877_; 
v_a_3861_ = lean_ctor_get(v___x_3860_, 0);
v_isSharedCheck_3877_ = !lean_is_exclusive(v___x_3860_);
if (v_isSharedCheck_3877_ == 0)
{
v___x_3863_ = v___x_3860_;
v_isShared_3864_ = v_isSharedCheck_3877_;
goto v_resetjp_3862_;
}
else
{
lean_inc(v_a_3861_);
lean_dec(v___x_3860_);
v___x_3863_ = lean_box(0);
v_isShared_3864_ = v_isSharedCheck_3877_;
goto v_resetjp_3862_;
}
v_resetjp_3862_:
{
lean_object* v_snd_3865_; lean_object* v___x_3867_; uint8_t v_isShared_3868_; uint8_t v_isSharedCheck_3875_; 
v_snd_3865_ = lean_ctor_get(v_a_3861_, 1);
v_isSharedCheck_3875_ = !lean_is_exclusive(v_a_3861_);
if (v_isSharedCheck_3875_ == 0)
{
lean_object* v_unused_3876_; 
v_unused_3876_ = lean_ctor_get(v_a_3861_, 0);
lean_dec(v_unused_3876_);
v___x_3867_ = v_a_3861_;
v_isShared_3868_ = v_isSharedCheck_3875_;
goto v_resetjp_3866_;
}
else
{
lean_inc(v_snd_3865_);
lean_dec(v_a_3861_);
v___x_3867_ = lean_box(0);
v_isShared_3868_ = v_isSharedCheck_3875_;
goto v_resetjp_3866_;
}
v_resetjp_3866_:
{
lean_object* v___x_3870_; 
if (v_isShared_3868_ == 0)
{
lean_ctor_set(v___x_3867_, 0, v___x_3857_);
v___x_3870_ = v___x_3867_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3874_, 0, v___x_3857_);
lean_ctor_set(v_reuseFailAlloc_3874_, 1, v_snd_3865_);
v___x_3870_ = v_reuseFailAlloc_3874_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
lean_object* v___x_3872_; 
if (v_isShared_3864_ == 0)
{
lean_ctor_set(v___x_3863_, 0, v___x_3870_);
v___x_3872_ = v___x_3863_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v___x_3870_);
v___x_3872_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
return v___x_3872_;
}
}
}
}
}
else
{
return v___x_3860_;
}
}
else
{
lean_object* v_a_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3885_; 
lean_dec_ref(v___y_3842_);
lean_dec_ref(v_p_3841_);
lean_dec_ref(v_enter_3840_);
v_a_3878_ = lean_ctor_get(v___x_3855_, 0);
v_isSharedCheck_3885_ = !lean_is_exclusive(v___x_3855_);
if (v_isSharedCheck_3885_ == 0)
{
v___x_3880_ = v___x_3855_;
v_isShared_3881_ = v_isSharedCheck_3885_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_a_3878_);
lean_dec(v___x_3855_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3885_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v___x_3883_; 
if (v_isShared_3881_ == 0)
{
v___x_3883_ = v___x_3880_;
goto v_reusejp_3882_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v_a_3878_);
v___x_3883_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3882_;
}
v_reusejp_3882_:
{
return v___x_3883_;
}
}
}
}
}
}
else
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3894_; 
lean_dec_ref(v___y_3842_);
lean_dec_ref(v_p_3841_);
lean_dec_ref(v_enter_3840_);
v_a_3887_ = lean_ctor_get(v___x_3844_, 0);
v_isSharedCheck_3894_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3894_ == 0)
{
v___x_3889_ = v___x_3844_;
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v___x_3844_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3892_; 
if (v_isShared_3890_ == 0)
{
v___x_3892_ = v___x_3889_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v_a_3887_);
v___x_3892_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
return v___x_3892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__System_FilePath_walkDir_go___boxed(lean_object* v_enter_3895_, lean_object* v_p_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_){
_start:
{
lean_object* v_res_3899_; 
v_res_3899_ = l___private_Init_System_IO_0__System_FilePath_walkDir_go(v_enter_3895_, v_p_3896_, v___y_3897_);
return v_res_3899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_System_IO_0__System_FilePath_walkDir_go_spec__0___boxed(lean_object* v_enter_3900_, lean_object* v_p_3901_, lean_object* v_as_3902_, lean_object* v_sz_3903_, lean_object* v_i_3904_, lean_object* v_b_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_){
_start:
{
size_t v_sz_boxed_3908_; size_t v_i_boxed_3909_; lean_object* v_res_3910_; 
v_sz_boxed_3908_ = lean_unbox_usize(v_sz_3903_);
lean_dec(v_sz_3903_);
v_i_boxed_3909_ = lean_unbox_usize(v_i_3904_);
lean_dec(v_i_3904_);
v_res_3910_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_System_IO_0__System_FilePath_walkDir_go_spec__0(v_enter_3900_, v_p_3901_, v_as_3902_, v_sz_boxed_3908_, v_i_boxed_3909_, v_b_3905_, v___y_3906_);
lean_dec_ref(v_as_3902_);
return v_res_3910_;
}
}
LEAN_EXPORT lean_object* l_System_FilePath_walkDir(lean_object* v_p_3911_, lean_object* v_enter_3912_){
_start:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3914_ = ((lean_object*)(l_IO_FS_Handle_lines___closed__0));
v___x_3915_ = l___private_Init_System_IO_0__System_FilePath_walkDir_go(v_enter_3912_, v_p_3911_, v___x_3914_);
if (lean_obj_tag(v___x_3915_) == 0)
{
lean_object* v_a_3916_; lean_object* v___x_3918_; uint8_t v_isShared_3919_; uint8_t v_isSharedCheck_3924_; 
v_a_3916_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3924_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3924_ == 0)
{
v___x_3918_ = v___x_3915_;
v_isShared_3919_ = v_isSharedCheck_3924_;
goto v_resetjp_3917_;
}
else
{
lean_inc(v_a_3916_);
lean_dec(v___x_3915_);
v___x_3918_ = lean_box(0);
v_isShared_3919_ = v_isSharedCheck_3924_;
goto v_resetjp_3917_;
}
v_resetjp_3917_:
{
lean_object* v_snd_3920_; lean_object* v___x_3922_; 
v_snd_3920_ = lean_ctor_get(v_a_3916_, 1);
lean_inc(v_snd_3920_);
lean_dec(v_a_3916_);
if (v_isShared_3919_ == 0)
{
lean_ctor_set(v___x_3918_, 0, v_snd_3920_);
v___x_3922_ = v___x_3918_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3923_; 
v_reuseFailAlloc_3923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3923_, 0, v_snd_3920_);
v___x_3922_ = v_reuseFailAlloc_3923_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
return v___x_3922_;
}
}
}
else
{
lean_object* v_a_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3932_; 
v_a_3925_ = lean_ctor_get(v___x_3915_, 0);
v_isSharedCheck_3932_ = !lean_is_exclusive(v___x_3915_);
if (v_isSharedCheck_3932_ == 0)
{
v___x_3927_ = v___x_3915_;
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_a_3925_);
lean_dec(v___x_3915_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3930_; 
if (v_isShared_3928_ == 0)
{
v___x_3930_ = v___x_3927_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v_a_3925_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_System_FilePath_walkDir___boxed(lean_object* v_p_3933_, lean_object* v_enter_3934_, lean_object* v___y_3935_){
_start:
{
lean_object* v_res_3936_; 
v_res_3936_ = l_System_FilePath_walkDir(v_p_3933_, v_enter_3934_);
return v_res_3936_;
}
}
static lean_object* _init_l_IO_FS_readBinFile___closed__0(void){
_start:
{
lean_object* v___x_3937_; lean_object* v___x_3938_; 
v___x_3937_ = lean_unsigned_to_nat(0u);
v___x_3938_ = lean_mk_empty_byte_array(v___x_3937_);
return v___x_3938_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_readBinFile(lean_object* v_fname_3939_){
_start:
{
lean_object* v___x_3941_; 
v___x_3941_ = lean_io_metadata(v_fname_3939_);
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v_a_3942_; uint64_t v_byteSize_3943_; size_t v___x_3944_; uint8_t v___x_3945_; lean_object* v___x_3946_; 
v_a_3942_ = lean_ctor_get(v___x_3941_, 0);
lean_inc(v_a_3942_);
lean_dec_ref_known(v___x_3941_, 1);
v_byteSize_3943_ = lean_ctor_get_uint64(v_a_3942_, sizeof(void*)*2);
lean_dec(v_a_3942_);
v___x_3944_ = lean_uint64_to_usize(v_byteSize_3943_);
v___x_3945_ = 0;
v___x_3946_ = lean_io_prim_handle_mk(v_fname_3939_, v___x_3945_);
if (lean_obj_tag(v___x_3946_) == 0)
{
lean_object* v_a_3947_; size_t v___x_3948_; uint8_t v___x_3949_; 
v_a_3947_ = lean_ctor_get(v___x_3946_, 0);
lean_inc(v_a_3947_);
lean_dec_ref_known(v___x_3946_, 1);
v___x_3948_ = ((size_t)0ULL);
v___x_3949_ = lean_usize_dec_lt(v___x_3948_, v___x_3944_);
if (v___x_3949_ == 0)
{
lean_object* v___x_3950_; lean_object* v___x_3951_; 
v___x_3950_ = lean_obj_once(&l_IO_FS_readBinFile___closed__0, &l_IO_FS_readBinFile___closed__0_once, _init_l_IO_FS_readBinFile___closed__0);
v___x_3951_ = l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(v_a_3947_, v___x_3950_);
lean_dec(v_a_3947_);
return v___x_3951_;
}
else
{
lean_object* v___x_3952_; 
v___x_3952_ = lean_io_prim_handle_read(v_a_3947_, v___x_3944_);
if (lean_obj_tag(v___x_3952_) == 0)
{
lean_object* v_a_3953_; lean_object* v___x_3954_; 
v_a_3953_ = lean_ctor_get(v___x_3952_, 0);
lean_inc(v_a_3953_);
lean_dec_ref_known(v___x_3952_, 1);
v___x_3954_ = l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(v_a_3947_, v_a_3953_);
lean_dec(v_a_3947_);
return v___x_3954_;
}
else
{
lean_dec(v_a_3947_);
return v___x_3952_;
}
}
}
else
{
lean_object* v_a_3955_; lean_object* v___x_3957_; uint8_t v_isShared_3958_; uint8_t v_isSharedCheck_3962_; 
v_a_3955_ = lean_ctor_get(v___x_3946_, 0);
v_isSharedCheck_3962_ = !lean_is_exclusive(v___x_3946_);
if (v_isSharedCheck_3962_ == 0)
{
v___x_3957_ = v___x_3946_;
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
else
{
lean_inc(v_a_3955_);
lean_dec(v___x_3946_);
v___x_3957_ = lean_box(0);
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
v_resetjp_3956_:
{
lean_object* v___x_3960_; 
if (v_isShared_3958_ == 0)
{
v___x_3960_ = v___x_3957_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3961_; 
v_reuseFailAlloc_3961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3961_, 0, v_a_3955_);
v___x_3960_ = v_reuseFailAlloc_3961_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
return v___x_3960_;
}
}
}
}
else
{
lean_object* v_a_3963_; lean_object* v___x_3965_; uint8_t v_isShared_3966_; uint8_t v_isSharedCheck_3970_; 
v_a_3963_ = lean_ctor_get(v___x_3941_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v___x_3941_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3965_ = v___x_3941_;
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
else
{
lean_inc(v_a_3963_);
lean_dec(v___x_3941_);
v___x_3965_ = lean_box(0);
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
v_resetjp_3964_:
{
lean_object* v___x_3968_; 
if (v_isShared_3966_ == 0)
{
v___x_3968_ = v___x_3965_;
goto v_reusejp_3967_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v_a_3963_);
v___x_3968_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3967_;
}
v_reusejp_3967_:
{
return v___x_3968_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_readBinFile___boxed(lean_object* v_fname_3971_, lean_object* v___y_3972_){
_start:
{
lean_object* v_res_3973_; 
v_res_3973_ = l_IO_FS_readBinFile(v_fname_3971_);
lean_dec_ref(v_fname_3971_);
return v_res_3973_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_readFile(lean_object* v_fname_3976_){
_start:
{
lean_object* v___x_3978_; 
v___x_3978_ = l_IO_FS_readBinFile(v_fname_3976_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v_a_3979_; lean_object* v___x_3981_; uint8_t v_isShared_3982_; uint8_t v_isSharedCheck_3996_; 
v_a_3979_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_3996_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_3996_ == 0)
{
v___x_3981_ = v___x_3978_;
v_isShared_3982_ = v_isSharedCheck_3996_;
goto v_resetjp_3980_;
}
else
{
lean_inc(v_a_3979_);
lean_dec(v___x_3978_);
v___x_3981_ = lean_box(0);
v_isShared_3982_ = v_isSharedCheck_3996_;
goto v_resetjp_3980_;
}
v_resetjp_3980_:
{
uint8_t v___x_3983_; 
v___x_3983_ = lean_string_validate_utf8(v_a_3979_);
if (v___x_3983_ == 0)
{
lean_object* v___x_3984_; lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3990_; 
lean_dec(v_a_3979_);
v___x_3984_ = ((lean_object*)(l_IO_FS_readFile___closed__0));
v___x_3985_ = lean_string_append(v___x_3984_, v_fname_3976_);
v___x_3986_ = ((lean_object*)(l_IO_FS_readFile___closed__1));
v___x_3987_ = lean_string_append(v___x_3985_, v___x_3986_);
v___x_3988_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3988_, 0, v___x_3987_);
if (v_isShared_3982_ == 0)
{
lean_ctor_set_tag(v___x_3981_, 1);
lean_ctor_set(v___x_3981_, 0, v___x_3988_);
v___x_3990_ = v___x_3981_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v___x_3988_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
else
{
lean_object* v___x_3992_; lean_object* v___x_3994_; 
v___x_3992_ = lean_string_from_utf8_unchecked(v_a_3979_);
if (v_isShared_3982_ == 0)
{
lean_ctor_set(v___x_3981_, 0, v___x_3992_);
v___x_3994_ = v___x_3981_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v___x_3992_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
return v___x_3994_;
}
}
}
}
else
{
lean_object* v_a_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4004_; 
v_a_3997_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_4004_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_4004_ == 0)
{
v___x_3999_ = v___x_3978_;
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_a_3997_);
lean_dec(v___x_3978_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
lean_object* v___x_4002_; 
if (v_isShared_4000_ == 0)
{
v___x_4002_ = v___x_3999_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4003_; 
v_reuseFailAlloc_4003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4003_, 0, v_a_3997_);
v___x_4002_ = v_reuseFailAlloc_4003_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
return v___x_4002_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_readFile___boxed(lean_object* v_fname_4005_, lean_object* v___y_4006_){
_start:
{
lean_object* v_res_4007_; 
v_res_4007_ = l_IO_FS_readFile(v_fname_4005_);
lean_dec_ref(v_fname_4005_);
return v_res_4007_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__0(lean_object* v_x_4008_){
_start:
{
lean_object* v_fst_4009_; 
v_fst_4009_ = lean_ctor_get(v_x_4008_, 0);
lean_inc(v_fst_4009_);
return v_fst_4009_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__0___boxed(lean_object* v_x_4010_){
_start:
{
lean_object* v_res_4011_; 
v_res_4011_ = l_IO_withStdin___redArg___lam__0(v_x_4010_);
lean_dec_ref(v_x_4010_);
return v_res_4011_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__1(lean_object* v___x_4012_, lean_object* v_x_4013_){
_start:
{
lean_inc(v___x_4012_);
return v___x_4012_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__1___boxed(lean_object* v___x_4014_, lean_object* v_x_4015_){
_start:
{
lean_object* v_res_4016_; 
v_res_4016_ = l_IO_withStdin___redArg___lam__1(v___x_4014_, v_x_4015_);
lean_dec(v_x_4015_);
lean_dec(v___x_4014_);
return v_res_4016_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__2(lean_object* v_toFunctor_4017_, lean_object* v_inst_4018_, lean_object* v_inst_4019_, lean_object* v_x_4020_, lean_object* v___f_4021_, lean_object* v_prev_4022_){
_start:
{
lean_object* v_map_4023_; lean_object* v_mapConst_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___f_4029_; lean_object* v_y_4030_; lean_object* v___x_4031_; 
v_map_4023_ = lean_ctor_get(v_toFunctor_4017_, 0);
lean_inc(v_map_4023_);
v_mapConst_4024_ = lean_ctor_get(v_toFunctor_4017_, 1);
lean_inc(v_mapConst_4024_);
lean_dec_ref(v_toFunctor_4017_);
v___x_4025_ = lean_alloc_closure((void*)(l_IO_setStdin___boxed), 2, 1);
lean_closure_set(v___x_4025_, 0, v_prev_4022_);
v___x_4026_ = lean_apply_2(v_inst_4018_, lean_box(0), v___x_4025_);
v___x_4027_ = lean_box(0);
v___x_4028_ = lean_apply_4(v_mapConst_4024_, lean_box(0), lean_box(0), v___x_4027_, v___x_4026_);
v___f_4029_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4029_, 0, v___x_4028_);
v_y_4030_ = lean_apply_4(v_inst_4019_, lean_box(0), lean_box(0), v_x_4020_, v___f_4029_);
v___x_4031_ = lean_apply_4(v_map_4023_, lean_box(0), lean_box(0), v___f_4021_, v_y_4030_);
return v___x_4031_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg(lean_object* v_inst_4033_, lean_object* v_inst_4034_, lean_object* v_inst_4035_, lean_object* v_h_4036_, lean_object* v_x_4037_){
_start:
{
lean_object* v_toApplicative_4038_; lean_object* v_toBind_4039_; lean_object* v_toFunctor_4040_; lean_object* v___f_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___f_4044_; lean_object* v___x_4045_; 
v_toApplicative_4038_ = lean_ctor_get(v_inst_4033_, 0);
lean_inc_ref(v_toApplicative_4038_);
v_toBind_4039_ = lean_ctor_get(v_inst_4033_, 1);
lean_inc(v_toBind_4039_);
lean_dec_ref(v_inst_4033_);
v_toFunctor_4040_ = lean_ctor_get(v_toApplicative_4038_, 0);
lean_inc_ref(v_toFunctor_4040_);
lean_dec_ref(v_toApplicative_4038_);
v___f_4041_ = ((lean_object*)(l_IO_withStdin___redArg___closed__0));
v___x_4042_ = lean_alloc_closure((void*)(l_IO_setStdin___boxed), 2, 1);
lean_closure_set(v___x_4042_, 0, v_h_4036_);
lean_inc(v_inst_4035_);
v___x_4043_ = lean_apply_2(v_inst_4035_, lean_box(0), v___x_4042_);
v___f_4044_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__2), 6, 5);
lean_closure_set(v___f_4044_, 0, v_toFunctor_4040_);
lean_closure_set(v___f_4044_, 1, v_inst_4035_);
lean_closure_set(v___f_4044_, 2, v_inst_4034_);
lean_closure_set(v___f_4044_, 3, v_x_4037_);
lean_closure_set(v___f_4044_, 4, v___f_4041_);
v___x_4045_ = lean_apply_4(v_toBind_4039_, lean_box(0), lean_box(0), v___x_4043_, v___f_4044_);
return v___x_4045_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin(lean_object* v_m_4046_, lean_object* v_00_u03b1_4047_, lean_object* v_inst_4048_, lean_object* v_inst_4049_, lean_object* v_inst_4050_, lean_object* v_h_4051_, lean_object* v_x_4052_){
_start:
{
lean_object* v___x_4053_; 
v___x_4053_ = l_IO_withStdin___redArg(v_inst_4048_, v_inst_4049_, v_inst_4050_, v_h_4051_, v_x_4052_);
return v___x_4053_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___redArg___lam__2(lean_object* v_toFunctor_4054_, lean_object* v_inst_4055_, lean_object* v_inst_4056_, lean_object* v_x_4057_, lean_object* v___f_4058_, lean_object* v_prev_4059_){
_start:
{
lean_object* v_map_4060_; lean_object* v_mapConst_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___f_4066_; lean_object* v_y_4067_; lean_object* v___x_4068_; 
v_map_4060_ = lean_ctor_get(v_toFunctor_4054_, 0);
lean_inc(v_map_4060_);
v_mapConst_4061_ = lean_ctor_get(v_toFunctor_4054_, 1);
lean_inc(v_mapConst_4061_);
lean_dec_ref(v_toFunctor_4054_);
v___x_4062_ = lean_alloc_closure((void*)(l_IO_setStdout___boxed), 2, 1);
lean_closure_set(v___x_4062_, 0, v_prev_4059_);
v___x_4063_ = lean_apply_2(v_inst_4055_, lean_box(0), v___x_4062_);
v___x_4064_ = lean_box(0);
v___x_4065_ = lean_apply_4(v_mapConst_4061_, lean_box(0), lean_box(0), v___x_4064_, v___x_4063_);
v___f_4066_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4066_, 0, v___x_4065_);
v_y_4067_ = lean_apply_4(v_inst_4056_, lean_box(0), lean_box(0), v_x_4057_, v___f_4066_);
v___x_4068_ = lean_apply_4(v_map_4060_, lean_box(0), lean_box(0), v___f_4058_, v_y_4067_);
return v___x_4068_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___redArg(lean_object* v_inst_4069_, lean_object* v_inst_4070_, lean_object* v_inst_4071_, lean_object* v_h_4072_, lean_object* v_x_4073_){
_start:
{
lean_object* v_toApplicative_4074_; lean_object* v_toBind_4075_; lean_object* v_toFunctor_4076_; lean_object* v___f_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___f_4080_; lean_object* v___x_4081_; 
v_toApplicative_4074_ = lean_ctor_get(v_inst_4069_, 0);
lean_inc_ref(v_toApplicative_4074_);
v_toBind_4075_ = lean_ctor_get(v_inst_4069_, 1);
lean_inc(v_toBind_4075_);
lean_dec_ref(v_inst_4069_);
v_toFunctor_4076_ = lean_ctor_get(v_toApplicative_4074_, 0);
lean_inc_ref(v_toFunctor_4076_);
lean_dec_ref(v_toApplicative_4074_);
v___f_4077_ = ((lean_object*)(l_IO_withStdin___redArg___closed__0));
v___x_4078_ = lean_alloc_closure((void*)(l_IO_setStdout___boxed), 2, 1);
lean_closure_set(v___x_4078_, 0, v_h_4072_);
lean_inc(v_inst_4071_);
v___x_4079_ = lean_apply_2(v_inst_4071_, lean_box(0), v___x_4078_);
v___f_4080_ = lean_alloc_closure((void*)(l_IO_withStdout___redArg___lam__2), 6, 5);
lean_closure_set(v___f_4080_, 0, v_toFunctor_4076_);
lean_closure_set(v___f_4080_, 1, v_inst_4071_);
lean_closure_set(v___f_4080_, 2, v_inst_4070_);
lean_closure_set(v___f_4080_, 3, v_x_4073_);
lean_closure_set(v___f_4080_, 4, v___f_4077_);
v___x_4081_ = lean_apply_4(v_toBind_4075_, lean_box(0), lean_box(0), v___x_4079_, v___f_4080_);
return v___x_4081_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout(lean_object* v_m_4082_, lean_object* v_00_u03b1_4083_, lean_object* v_inst_4084_, lean_object* v_inst_4085_, lean_object* v_inst_4086_, lean_object* v_h_4087_, lean_object* v_x_4088_){
_start:
{
lean_object* v___x_4089_; 
v___x_4089_ = l_IO_withStdout___redArg(v_inst_4084_, v_inst_4085_, v_inst_4086_, v_h_4087_, v_x_4088_);
return v___x_4089_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___redArg___lam__2(lean_object* v_toFunctor_4090_, lean_object* v_inst_4091_, lean_object* v_inst_4092_, lean_object* v_x_4093_, lean_object* v___f_4094_, lean_object* v_prev_4095_){
_start:
{
lean_object* v_map_4096_; lean_object* v_mapConst_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___f_4102_; lean_object* v_y_4103_; lean_object* v___x_4104_; 
v_map_4096_ = lean_ctor_get(v_toFunctor_4090_, 0);
lean_inc(v_map_4096_);
v_mapConst_4097_ = lean_ctor_get(v_toFunctor_4090_, 1);
lean_inc(v_mapConst_4097_);
lean_dec_ref(v_toFunctor_4090_);
v___x_4098_ = lean_alloc_closure((void*)(l_IO_setStderr___boxed), 2, 1);
lean_closure_set(v___x_4098_, 0, v_prev_4095_);
v___x_4099_ = lean_apply_2(v_inst_4091_, lean_box(0), v___x_4098_);
v___x_4100_ = lean_box(0);
v___x_4101_ = lean_apply_4(v_mapConst_4097_, lean_box(0), lean_box(0), v___x_4100_, v___x_4099_);
v___f_4102_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4102_, 0, v___x_4101_);
v_y_4103_ = lean_apply_4(v_inst_4092_, lean_box(0), lean_box(0), v_x_4093_, v___f_4102_);
v___x_4104_ = lean_apply_4(v_map_4096_, lean_box(0), lean_box(0), v___f_4094_, v_y_4103_);
return v___x_4104_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___redArg(lean_object* v_inst_4105_, lean_object* v_inst_4106_, lean_object* v_inst_4107_, lean_object* v_h_4108_, lean_object* v_x_4109_){
_start:
{
lean_object* v_toApplicative_4110_; lean_object* v_toBind_4111_; lean_object* v_toFunctor_4112_; lean_object* v___f_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___f_4116_; lean_object* v___x_4117_; 
v_toApplicative_4110_ = lean_ctor_get(v_inst_4105_, 0);
lean_inc_ref(v_toApplicative_4110_);
v_toBind_4111_ = lean_ctor_get(v_inst_4105_, 1);
lean_inc(v_toBind_4111_);
lean_dec_ref(v_inst_4105_);
v_toFunctor_4112_ = lean_ctor_get(v_toApplicative_4110_, 0);
lean_inc_ref(v_toFunctor_4112_);
lean_dec_ref(v_toApplicative_4110_);
v___f_4113_ = ((lean_object*)(l_IO_withStdin___redArg___closed__0));
v___x_4114_ = lean_alloc_closure((void*)(l_IO_setStderr___boxed), 2, 1);
lean_closure_set(v___x_4114_, 0, v_h_4108_);
lean_inc(v_inst_4107_);
v___x_4115_ = lean_apply_2(v_inst_4107_, lean_box(0), v___x_4114_);
v___f_4116_ = lean_alloc_closure((void*)(l_IO_withStderr___redArg___lam__2), 6, 5);
lean_closure_set(v___f_4116_, 0, v_toFunctor_4112_);
lean_closure_set(v___f_4116_, 1, v_inst_4107_);
lean_closure_set(v___f_4116_, 2, v_inst_4106_);
lean_closure_set(v___f_4116_, 3, v_x_4109_);
lean_closure_set(v___f_4116_, 4, v___f_4113_);
v___x_4117_ = lean_apply_4(v_toBind_4111_, lean_box(0), lean_box(0), v___x_4115_, v___f_4116_);
return v___x_4117_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr(lean_object* v_m_4118_, lean_object* v_00_u03b1_4119_, lean_object* v_inst_4120_, lean_object* v_inst_4121_, lean_object* v_inst_4122_, lean_object* v_h_4123_, lean_object* v_x_4124_){
_start:
{
lean_object* v___x_4125_; 
v___x_4125_ = l_IO_withStderr___redArg(v_inst_4120_, v_inst_4121_, v_inst_4122_, v_h_4123_, v_x_4124_);
return v___x_4125_;
}
}
LEAN_EXPORT lean_object* l_IO_print___redArg(lean_object* v_inst_4126_, lean_object* v_s_4127_){
_start:
{
lean_object* v___x_4129_; lean_object* v_putStr_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; 
v___x_4129_ = lean_get_stdout();
v_putStr_4130_ = lean_ctor_get(v___x_4129_, 4);
lean_inc_ref(v_putStr_4130_);
lean_dec_ref(v___x_4129_);
v___x_4131_ = lean_apply_1(v_inst_4126_, v_s_4127_);
v___x_4132_ = lean_apply_2(v_putStr_4130_, v___x_4131_, lean_box(0));
return v___x_4132_;
}
}
LEAN_EXPORT lean_object* l_IO_print___redArg___boxed(lean_object* v_inst_4133_, lean_object* v_s_4134_, lean_object* v___y_4135_){
_start:
{
lean_object* v_res_4136_; 
v_res_4136_ = l_IO_print___redArg(v_inst_4133_, v_s_4134_);
return v_res_4136_;
}
}
LEAN_EXPORT lean_object* l_IO_print(lean_object* v_00_u03b1_4137_, lean_object* v_inst_4138_, lean_object* v_s_4139_){
_start:
{
lean_object* v___x_4141_; 
v___x_4141_ = l_IO_print___redArg(v_inst_4138_, v_s_4139_);
return v___x_4141_;
}
}
LEAN_EXPORT lean_object* l_IO_print___boxed(lean_object* v_00_u03b1_4142_, lean_object* v_inst_4143_, lean_object* v_s_4144_, lean_object* v___y_4145_){
_start:
{
lean_object* v_res_4146_; 
v_res_4146_ = l_IO_print(v_00_u03b1_4142_, v_inst_4143_, v_s_4144_);
return v_res_4146_;
}
}
LEAN_EXPORT lean_object* l_IO_println___redArg(lean_object* v_inst_4148_, lean_object* v_s_4149_){
_start:
{
lean_object* v___f_4151_; lean_object* v___x_4152_; uint32_t v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; 
v___f_4151_ = ((lean_object*)(l_IO_println___redArg___closed__0));
v___x_4152_ = lean_apply_1(v_inst_4148_, v_s_4149_);
v___x_4153_ = 10;
v___x_4154_ = lean_string_push(v___x_4152_, v___x_4153_);
v___x_4155_ = l_IO_print___redArg(v___f_4151_, v___x_4154_);
return v___x_4155_;
}
}
LEAN_EXPORT lean_object* l_IO_println___redArg___boxed(lean_object* v_inst_4156_, lean_object* v_s_4157_, lean_object* v___y_4158_){
_start:
{
lean_object* v_res_4159_; 
v_res_4159_ = l_IO_println___redArg(v_inst_4156_, v_s_4157_);
return v_res_4159_;
}
}
LEAN_EXPORT lean_object* l_IO_println(lean_object* v_00_u03b1_4160_, lean_object* v_inst_4161_, lean_object* v_s_4162_){
_start:
{
lean_object* v___x_4164_; 
v___x_4164_ = l_IO_println___redArg(v_inst_4161_, v_s_4162_);
return v___x_4164_;
}
}
LEAN_EXPORT lean_object* l_IO_println___boxed(lean_object* v_00_u03b1_4165_, lean_object* v_inst_4166_, lean_object* v_s_4167_, lean_object* v___y_4168_){
_start:
{
lean_object* v_res_4169_; 
v_res_4169_ = l_IO_println(v_00_u03b1_4165_, v_inst_4166_, v_s_4167_);
return v_res_4169_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___redArg(lean_object* v_inst_4170_, lean_object* v_s_4171_){
_start:
{
lean_object* v___x_4173_; lean_object* v_putStr_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; 
v___x_4173_ = lean_get_stderr();
v_putStr_4174_ = lean_ctor_get(v___x_4173_, 4);
lean_inc_ref(v_putStr_4174_);
lean_dec_ref(v___x_4173_);
v___x_4175_ = lean_apply_1(v_inst_4170_, v_s_4171_);
v___x_4176_ = lean_apply_2(v_putStr_4174_, v___x_4175_, lean_box(0));
return v___x_4176_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___redArg___boxed(lean_object* v_inst_4177_, lean_object* v_s_4178_, lean_object* v___y_4179_){
_start:
{
lean_object* v_res_4180_; 
v_res_4180_ = l_IO_eprint___redArg(v_inst_4177_, v_s_4178_);
return v_res_4180_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint(lean_object* v_00_u03b1_4181_, lean_object* v_inst_4182_, lean_object* v_s_4183_){
_start:
{
lean_object* v___x_4185_; 
v___x_4185_ = l_IO_eprint___redArg(v_inst_4182_, v_s_4183_);
return v___x_4185_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___boxed(lean_object* v_00_u03b1_4186_, lean_object* v_inst_4187_, lean_object* v_s_4188_, lean_object* v___y_4189_){
_start:
{
lean_object* v_res_4190_; 
v_res_4190_ = l_IO_eprint(v_00_u03b1_4186_, v_inst_4187_, v_s_4188_);
return v_res_4190_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___redArg(lean_object* v_inst_4191_, lean_object* v_s_4192_){
_start:
{
lean_object* v___f_4194_; lean_object* v___x_4195_; uint32_t v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; 
v___f_4194_ = ((lean_object*)(l_IO_println___redArg___closed__0));
v___x_4195_ = lean_apply_1(v_inst_4191_, v_s_4192_);
v___x_4196_ = 10;
v___x_4197_ = lean_string_push(v___x_4195_, v___x_4196_);
v___x_4198_ = l_IO_eprint___redArg(v___f_4194_, v___x_4197_);
return v___x_4198_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___redArg___boxed(lean_object* v_inst_4199_, lean_object* v_s_4200_, lean_object* v___y_4201_){
_start:
{
lean_object* v_res_4202_; 
v_res_4202_ = l_IO_eprintln___redArg(v_inst_4199_, v_s_4200_);
return v_res_4202_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln(lean_object* v_00_u03b1_4203_, lean_object* v_inst_4204_, lean_object* v_s_4205_){
_start:
{
lean_object* v___x_4207_; 
v___x_4207_ = l_IO_eprintln___redArg(v_inst_4204_, v_s_4205_);
return v___x_4207_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___boxed(lean_object* v_00_u03b1_4208_, lean_object* v_inst_4209_, lean_object* v_s_4210_, lean_object* v___y_4211_){
_start:
{
lean_object* v_res_4212_; 
v_res_4212_ = l_IO_eprintln(v_00_u03b1_4208_, v_inst_4209_, v_s_4210_);
return v_res_4212_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0(lean_object* v_s_4213_){
_start:
{
lean_object* v___x_4215_; lean_object* v_putStr_4216_; lean_object* v___x_4217_; 
v___x_4215_ = lean_get_stderr();
v_putStr_4216_ = lean_ctor_get(v___x_4215_, 4);
lean_inc_ref(v_putStr_4216_);
lean_dec_ref(v___x_4215_);
v___x_4217_ = lean_apply_2(v_putStr_4216_, v_s_4213_, lean_box(0));
return v___x_4217_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0___boxed(lean_object* v_s_4218_, lean_object* v___y_4219_){
_start:
{
lean_object* v_res_4220_; 
v_res_4220_ = l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0(v_s_4218_);
return v_res_4220_;
}
}
LEAN_EXPORT lean_object* lean_io_eprint(lean_object* v_s_4221_){
_start:
{
lean_object* v___x_4223_; 
v___x_4223_ = l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0(v_s_4221_);
return v___x_4223_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_eprintAux___boxed(lean_object* v_s_4224_, lean_object* v___y_4225_){
_start:
{
lean_object* v_res_4226_; 
v_res_4226_ = lean_io_eprint(v_s_4224_);
return v_res_4226_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object* v_s_4227_){
_start:
{
uint32_t v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; 
v___x_4229_ = 10;
v___x_4230_ = lean_string_push(v_s_4227_, v___x_4229_);
v___x_4231_ = l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0(v___x_4230_);
return v___x_4231_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0___boxed(lean_object* v_s_4232_, lean_object* v___y_4233_){
_start:
{
lean_object* v_res_4234_; 
v_res_4234_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v_s_4232_);
return v_res_4234_;
}
}
LEAN_EXPORT lean_object* lean_io_eprintln(lean_object* v_s_4235_){
_start:
{
lean_object* v___x_4237_; 
v___x_4237_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v_s_4235_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_eprintlnAux___boxed(lean_object* v_s_4238_, lean_object* v___y_4239_){
_start:
{
lean_object* v_res_4240_; 
v_res_4240_ = lean_io_eprintln(v_s_4238_);
return v_res_4240_;
}
}
LEAN_EXPORT lean_object* l_IO_appDir(){
_start:
{
lean_object* v___x_4244_; 
v___x_4244_ = lean_io_app_path();
if (lean_obj_tag(v___x_4244_) == 0)
{
lean_object* v_a_4245_; lean_object* v___x_4247_; uint8_t v_isShared_4248_; uint8_t v_isSharedCheck_4260_; 
v_a_4245_ = lean_ctor_get(v___x_4244_, 0);
v_isSharedCheck_4260_ = !lean_is_exclusive(v___x_4244_);
if (v_isSharedCheck_4260_ == 0)
{
v___x_4247_ = v___x_4244_;
v_isShared_4248_ = v_isSharedCheck_4260_;
goto v_resetjp_4246_;
}
else
{
lean_inc(v_a_4245_);
lean_dec(v___x_4244_);
v___x_4247_ = lean_box(0);
v_isShared_4248_ = v_isSharedCheck_4260_;
goto v_resetjp_4246_;
}
v_resetjp_4246_:
{
lean_object* v___x_4249_; 
lean_inc(v_a_4245_);
v___x_4249_ = l_System_FilePath_parent(v_a_4245_);
if (lean_obj_tag(v___x_4249_) == 1)
{
lean_object* v_val_4250_; lean_object* v___x_4251_; 
lean_del_object(v___x_4247_);
lean_dec(v_a_4245_);
v_val_4250_ = lean_ctor_get(v___x_4249_, 0);
lean_inc(v_val_4250_);
lean_dec_ref_known(v___x_4249_, 1);
v___x_4251_ = lean_io_realpath(v_val_4250_);
return v___x_4251_;
}
else
{
lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4258_; 
lean_dec(v___x_4249_);
v___x_4252_ = ((lean_object*)(l_IO_appDir___closed__0));
v___x_4253_ = lean_string_append(v___x_4252_, v_a_4245_);
lean_dec(v_a_4245_);
v___x_4254_ = ((lean_object*)(l_IO_appDir___closed__1));
v___x_4255_ = lean_string_append(v___x_4253_, v___x_4254_);
v___x_4256_ = lean_mk_io_user_error(v___x_4255_);
if (v_isShared_4248_ == 0)
{
lean_ctor_set_tag(v___x_4247_, 1);
lean_ctor_set(v___x_4247_, 0, v___x_4256_);
v___x_4258_ = v___x_4247_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4259_; 
v_reuseFailAlloc_4259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4259_, 0, v___x_4256_);
v___x_4258_ = v_reuseFailAlloc_4259_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
return v___x_4258_;
}
}
}
}
else
{
return v___x_4244_;
}
}
}
LEAN_EXPORT lean_object* l_IO_appDir___boxed(lean_object* v___y_4261_){
_start:
{
lean_object* v_res_4262_; 
v_res_4262_ = l_IO_appDir();
return v_res_4262_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_createDirAll(lean_object* v_p_4263_){
_start:
{
uint8_t v___x_4280_; 
v___x_4280_ = l_System_FilePath_isDir(v_p_4263_);
if (v___x_4280_ == 0)
{
lean_object* v___x_4281_; 
lean_inc_ref(v_p_4263_);
v___x_4281_ = l_System_FilePath_parent(v_p_4263_);
if (lean_obj_tag(v___x_4281_) == 1)
{
lean_object* v_val_4282_; lean_object* v___x_4283_; 
v_val_4282_ = lean_ctor_get(v___x_4281_, 0);
lean_inc(v_val_4282_);
lean_dec_ref_known(v___x_4281_, 1);
v___x_4283_ = l_IO_FS_createDirAll(v_val_4282_);
if (lean_obj_tag(v___x_4283_) == 0)
{
lean_dec_ref_known(v___x_4283_, 1);
goto v___jp_4265_;
}
else
{
lean_dec_ref(v_p_4263_);
return v___x_4283_;
}
}
else
{
lean_dec(v___x_4281_);
goto v___jp_4265_;
}
}
else
{
lean_object* v___x_4284_; lean_object* v___x_4285_; 
lean_dec_ref(v_p_4263_);
v___x_4284_ = lean_box(0);
v___x_4285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4285_, 0, v___x_4284_);
return v___x_4285_;
}
v___jp_4265_:
{
lean_object* v___x_4266_; 
v___x_4266_ = lean_io_create_dir(v_p_4263_);
if (lean_obj_tag(v___x_4266_) == 0)
{
lean_dec_ref(v_p_4263_);
return v___x_4266_;
}
else
{
lean_object* v_a_4267_; lean_object* v___x_4269_; uint8_t v_isShared_4270_; uint8_t v_isSharedCheck_4279_; 
v_a_4267_ = lean_ctor_get(v___x_4266_, 0);
v_isSharedCheck_4279_ = !lean_is_exclusive(v___x_4266_);
if (v_isSharedCheck_4279_ == 0)
{
v___x_4269_ = v___x_4266_;
v_isShared_4270_ = v_isSharedCheck_4279_;
goto v_resetjp_4268_;
}
else
{
lean_inc(v_a_4267_);
lean_dec(v___x_4266_);
v___x_4269_ = lean_box(0);
v_isShared_4270_ = v_isSharedCheck_4279_;
goto v_resetjp_4268_;
}
v_resetjp_4268_:
{
uint8_t v___x_4271_; 
v___x_4271_ = l_System_FilePath_isDir(v_p_4263_);
lean_dec_ref(v_p_4263_);
if (v___x_4271_ == 0)
{
lean_object* v___x_4273_; 
if (v_isShared_4270_ == 0)
{
v___x_4273_ = v___x_4269_;
goto v_reusejp_4272_;
}
else
{
lean_object* v_reuseFailAlloc_4274_; 
v_reuseFailAlloc_4274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4274_, 0, v_a_4267_);
v___x_4273_ = v_reuseFailAlloc_4274_;
goto v_reusejp_4272_;
}
v_reusejp_4272_:
{
return v___x_4273_;
}
}
else
{
lean_object* v___x_4275_; lean_object* v___x_4277_; 
lean_dec(v_a_4267_);
v___x_4275_ = lean_box(0);
if (v_isShared_4270_ == 0)
{
lean_ctor_set_tag(v___x_4269_, 0);
lean_ctor_set(v___x_4269_, 0, v___x_4275_);
v___x_4277_ = v___x_4269_;
goto v_reusejp_4276_;
}
else
{
lean_object* v_reuseFailAlloc_4278_; 
v_reuseFailAlloc_4278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4278_, 0, v___x_4275_);
v___x_4277_ = v_reuseFailAlloc_4278_;
goto v_reusejp_4276_;
}
v_reusejp_4276_:
{
return v___x_4277_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_createDirAll___boxed(lean_object* v_p_4286_, lean_object* v___y_4287_){
_start:
{
lean_object* v_res_4288_; 
v_res_4288_ = l_IO_FS_createDirAll(v_p_4286_);
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00IO_FS_removeDirAll_spec__0(lean_object* v_as_4289_, size_t v_sz_4290_, size_t v_i_4291_, lean_object* v_b_4292_){
_start:
{
lean_object* v_a_4295_; uint8_t v___x_4299_; 
v___x_4299_ = lean_usize_dec_lt(v_i_4291_, v_sz_4290_);
if (v___x_4299_ == 0)
{
lean_object* v___x_4300_; 
v___x_4300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4300_, 0, v_b_4292_);
return v___x_4300_;
}
else
{
lean_object* v___x_4301_; lean_object* v_a_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; 
v___x_4301_ = lean_box(0);
v_a_4302_ = lean_array_uget_borrowed(v_as_4289_, v_i_4291_);
lean_inc(v_a_4302_);
v___x_4303_ = l_IO_FS_DirEntry_path(v_a_4302_);
v___x_4304_ = lean_io_symlink_metadata(v___x_4303_);
if (lean_obj_tag(v___x_4304_) == 0)
{
lean_object* v_a_4305_; uint8_t v_type_4306_; uint8_t v___x_4307_; uint8_t v___x_4308_; 
v_a_4305_ = lean_ctor_get(v___x_4304_, 0);
lean_inc(v_a_4305_);
lean_dec_ref_known(v___x_4304_, 1);
v_type_4306_ = lean_ctor_get_uint8(v_a_4305_, sizeof(void*)*2 + 16);
lean_dec(v_a_4305_);
v___x_4307_ = 0;
v___x_4308_ = l_IO_FS_instBEqFileType_beq(v_type_4306_, v___x_4307_);
if (v___x_4308_ == 0)
{
lean_object* v___x_4309_; 
v___x_4309_ = lean_io_remove_file(v___x_4303_);
lean_dec_ref(v___x_4303_);
if (lean_obj_tag(v___x_4309_) == 0)
{
lean_dec_ref_known(v___x_4309_, 1);
v_a_4295_ = v___x_4301_;
goto v___jp_4294_;
}
else
{
return v___x_4309_;
}
}
else
{
lean_object* v___x_4310_; 
v___x_4310_ = l_IO_FS_removeDirAll(v___x_4303_);
lean_dec_ref(v___x_4303_);
if (lean_obj_tag(v___x_4310_) == 0)
{
lean_dec_ref_known(v___x_4310_, 1);
v_a_4295_ = v___x_4301_;
goto v___jp_4294_;
}
else
{
return v___x_4310_;
}
}
}
else
{
lean_object* v_a_4311_; lean_object* v___x_4313_; uint8_t v_isShared_4314_; uint8_t v_isSharedCheck_4318_; 
lean_dec_ref(v___x_4303_);
v_a_4311_ = lean_ctor_get(v___x_4304_, 0);
v_isSharedCheck_4318_ = !lean_is_exclusive(v___x_4304_);
if (v_isSharedCheck_4318_ == 0)
{
v___x_4313_ = v___x_4304_;
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
else
{
lean_inc(v_a_4311_);
lean_dec(v___x_4304_);
v___x_4313_ = lean_box(0);
v_isShared_4314_ = v_isSharedCheck_4318_;
goto v_resetjp_4312_;
}
v_resetjp_4312_:
{
lean_object* v___x_4316_; 
if (v_isShared_4314_ == 0)
{
v___x_4316_ = v___x_4313_;
goto v_reusejp_4315_;
}
else
{
lean_object* v_reuseFailAlloc_4317_; 
v_reuseFailAlloc_4317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4317_, 0, v_a_4311_);
v___x_4316_ = v_reuseFailAlloc_4317_;
goto v_reusejp_4315_;
}
v_reusejp_4315_:
{
return v___x_4316_;
}
}
}
}
v___jp_4294_:
{
size_t v___x_4296_; size_t v___x_4297_; 
v___x_4296_ = ((size_t)1ULL);
v___x_4297_ = lean_usize_add(v_i_4291_, v___x_4296_);
v_i_4291_ = v___x_4297_;
v_b_4292_ = v_a_4295_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_removeDirAll(lean_object* v_p_4319_){
_start:
{
lean_object* v___x_4321_; 
v___x_4321_ = lean_io_read_dir(v_p_4319_);
if (lean_obj_tag(v___x_4321_) == 0)
{
lean_object* v_a_4322_; lean_object* v___x_4323_; size_t v_sz_4324_; size_t v___x_4325_; lean_object* v___x_4326_; 
v_a_4322_ = lean_ctor_get(v___x_4321_, 0);
lean_inc(v_a_4322_);
lean_dec_ref_known(v___x_4321_, 1);
v___x_4323_ = lean_box(0);
v_sz_4324_ = lean_array_size(v_a_4322_);
v___x_4325_ = ((size_t)0ULL);
v___x_4326_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00IO_FS_removeDirAll_spec__0(v_a_4322_, v_sz_4324_, v___x_4325_, v___x_4323_);
lean_dec(v_a_4322_);
if (lean_obj_tag(v___x_4326_) == 0)
{
lean_object* v___x_4327_; 
lean_dec_ref_known(v___x_4326_, 1);
v___x_4327_ = lean_io_remove_dir(v_p_4319_);
return v___x_4327_;
}
else
{
return v___x_4326_;
}
}
else
{
lean_object* v_a_4328_; lean_object* v___x_4330_; uint8_t v_isShared_4331_; uint8_t v_isSharedCheck_4335_; 
v_a_4328_ = lean_ctor_get(v___x_4321_, 0);
v_isSharedCheck_4335_ = !lean_is_exclusive(v___x_4321_);
if (v_isSharedCheck_4335_ == 0)
{
v___x_4330_ = v___x_4321_;
v_isShared_4331_ = v_isSharedCheck_4335_;
goto v_resetjp_4329_;
}
else
{
lean_inc(v_a_4328_);
lean_dec(v___x_4321_);
v___x_4330_ = lean_box(0);
v_isShared_4331_ = v_isSharedCheck_4335_;
goto v_resetjp_4329_;
}
v_resetjp_4329_:
{
lean_object* v___x_4333_; 
if (v_isShared_4331_ == 0)
{
v___x_4333_ = v___x_4330_;
goto v_reusejp_4332_;
}
else
{
lean_object* v_reuseFailAlloc_4334_; 
v_reuseFailAlloc_4334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4334_, 0, v_a_4328_);
v___x_4333_ = v_reuseFailAlloc_4334_;
goto v_reusejp_4332_;
}
v_reusejp_4332_:
{
return v___x_4333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_removeDirAll___boxed(lean_object* v_p_4336_, lean_object* v___y_4337_){
_start:
{
lean_object* v_res_4338_; 
v_res_4338_ = l_IO_FS_removeDirAll(v_p_4336_);
lean_dec_ref(v_p_4336_);
return v_res_4338_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00IO_FS_removeDirAll_spec__0___boxed(lean_object* v_as_4339_, lean_object* v_sz_4340_, lean_object* v_i_4341_, lean_object* v_b_4342_, lean_object* v___y_4343_){
_start:
{
size_t v_sz_boxed_4344_; size_t v_i_boxed_4345_; lean_object* v_res_4346_; 
v_sz_boxed_4344_ = lean_unbox_usize(v_sz_4340_);
lean_dec(v_sz_4340_);
v_i_boxed_4345_ = lean_unbox_usize(v_i_4341_);
lean_dec(v_i_4341_);
v_res_4346_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00IO_FS_removeDirAll_spec__0(v_as_4339_, v_sz_boxed_4344_, v_i_boxed_4345_, v_b_4342_);
lean_dec_ref(v_as_4339_);
return v_res_4346_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___redArg___lam__2(lean_object* v_toFunctor_4347_, lean_object* v_f_4348_, lean_object* v_inst_4349_, lean_object* v_inst_4350_, lean_object* v___f_4351_, lean_object* v_____x_4352_){
_start:
{
lean_object* v_fst_4353_; lean_object* v_snd_4354_; lean_object* v_map_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___f_4359_; lean_object* v_y_4360_; lean_object* v___x_4361_; 
v_fst_4353_ = lean_ctor_get(v_____x_4352_, 0);
lean_inc(v_fst_4353_);
v_snd_4354_ = lean_ctor_get(v_____x_4352_, 1);
lean_inc_n(v_snd_4354_, 2);
lean_dec_ref(v_____x_4352_);
v_map_4355_ = lean_ctor_get(v_toFunctor_4347_, 0);
lean_inc(v_map_4355_);
lean_dec_ref(v_toFunctor_4347_);
v___x_4356_ = lean_apply_2(v_f_4348_, v_fst_4353_, v_snd_4354_);
v___x_4357_ = lean_alloc_closure((void*)(l_IO_FS_removeFile___boxed), 2, 1);
lean_closure_set(v___x_4357_, 0, v_snd_4354_);
v___x_4358_ = lean_apply_2(v_inst_4349_, lean_box(0), v___x_4357_);
v___f_4359_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4359_, 0, v___x_4358_);
v_y_4360_ = lean_apply_4(v_inst_4350_, lean_box(0), lean_box(0), v___x_4356_, v___f_4359_);
v___x_4361_ = lean_apply_4(v_map_4355_, lean_box(0), lean_box(0), v___f_4351_, v_y_4360_);
return v___x_4361_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___redArg(lean_object* v_inst_4363_, lean_object* v_inst_4364_, lean_object* v_inst_4365_, lean_object* v_f_4366_){
_start:
{
lean_object* v_toApplicative_4367_; lean_object* v_toBind_4368_; lean_object* v_toFunctor_4369_; lean_object* v___f_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___f_4373_; lean_object* v___x_4374_; 
v_toApplicative_4367_ = lean_ctor_get(v_inst_4363_, 0);
lean_inc_ref(v_toApplicative_4367_);
v_toBind_4368_ = lean_ctor_get(v_inst_4363_, 1);
lean_inc(v_toBind_4368_);
lean_dec_ref(v_inst_4363_);
v_toFunctor_4369_ = lean_ctor_get(v_toApplicative_4367_, 0);
lean_inc_ref(v_toFunctor_4369_);
lean_dec_ref(v_toApplicative_4367_);
v___f_4370_ = ((lean_object*)(l_IO_withStdin___redArg___closed__0));
v___x_4371_ = ((lean_object*)(l_IO_FS_withTempFile___redArg___closed__0));
lean_inc(v_inst_4365_);
v___x_4372_ = lean_apply_2(v_inst_4365_, lean_box(0), v___x_4371_);
v___f_4373_ = lean_alloc_closure((void*)(l_IO_FS_withTempFile___redArg___lam__2), 6, 5);
lean_closure_set(v___f_4373_, 0, v_toFunctor_4369_);
lean_closure_set(v___f_4373_, 1, v_f_4366_);
lean_closure_set(v___f_4373_, 2, v_inst_4365_);
lean_closure_set(v___f_4373_, 3, v_inst_4364_);
lean_closure_set(v___f_4373_, 4, v___f_4370_);
v___x_4374_ = lean_apply_4(v_toBind_4368_, lean_box(0), lean_box(0), v___x_4372_, v___f_4373_);
return v___x_4374_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile(lean_object* v_m_4375_, lean_object* v_00_u03b1_4376_, lean_object* v_inst_4377_, lean_object* v_inst_4378_, lean_object* v_inst_4379_, lean_object* v_f_4380_){
_start:
{
lean_object* v___x_4381_; 
v___x_4381_ = l_IO_FS_withTempFile___redArg(v_inst_4377_, v_inst_4378_, v_inst_4379_, v_f_4380_);
return v___x_4381_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempDir___redArg___lam__2(lean_object* v_toFunctor_4382_, lean_object* v_f_4383_, lean_object* v_inst_4384_, lean_object* v_inst_4385_, lean_object* v___f_4386_, lean_object* v_path_4387_){
_start:
{
lean_object* v_map_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___f_4392_; lean_object* v_y_4393_; lean_object* v___x_4394_; 
v_map_4388_ = lean_ctor_get(v_toFunctor_4382_, 0);
lean_inc(v_map_4388_);
lean_dec_ref(v_toFunctor_4382_);
lean_inc_ref(v_path_4387_);
v___x_4389_ = lean_apply_1(v_f_4383_, v_path_4387_);
v___x_4390_ = lean_alloc_closure((void*)(l_IO_FS_removeDirAll___boxed), 2, 1);
lean_closure_set(v___x_4390_, 0, v_path_4387_);
v___x_4391_ = lean_apply_2(v_inst_4384_, lean_box(0), v___x_4390_);
v___f_4392_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4392_, 0, v___x_4391_);
v_y_4393_ = lean_apply_4(v_inst_4385_, lean_box(0), lean_box(0), v___x_4389_, v___f_4392_);
v___x_4394_ = lean_apply_4(v_map_4388_, lean_box(0), lean_box(0), v___f_4386_, v_y_4393_);
return v___x_4394_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempDir___redArg(lean_object* v_inst_4396_, lean_object* v_inst_4397_, lean_object* v_inst_4398_, lean_object* v_f_4399_){
_start:
{
lean_object* v_toApplicative_4400_; lean_object* v_toBind_4401_; lean_object* v_toFunctor_4402_; lean_object* v___f_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___f_4406_; lean_object* v___x_4407_; 
v_toApplicative_4400_ = lean_ctor_get(v_inst_4396_, 0);
lean_inc_ref(v_toApplicative_4400_);
v_toBind_4401_ = lean_ctor_get(v_inst_4396_, 1);
lean_inc(v_toBind_4401_);
lean_dec_ref(v_inst_4396_);
v_toFunctor_4402_ = lean_ctor_get(v_toApplicative_4400_, 0);
lean_inc_ref(v_toFunctor_4402_);
lean_dec_ref(v_toApplicative_4400_);
v___f_4403_ = ((lean_object*)(l_IO_withStdin___redArg___closed__0));
v___x_4404_ = ((lean_object*)(l_IO_FS_withTempDir___redArg___closed__0));
lean_inc(v_inst_4398_);
v___x_4405_ = lean_apply_2(v_inst_4398_, lean_box(0), v___x_4404_);
v___f_4406_ = lean_alloc_closure((void*)(l_IO_FS_withTempDir___redArg___lam__2), 6, 5);
lean_closure_set(v___f_4406_, 0, v_toFunctor_4402_);
lean_closure_set(v___f_4406_, 1, v_f_4399_);
lean_closure_set(v___f_4406_, 2, v_inst_4398_);
lean_closure_set(v___f_4406_, 3, v_inst_4397_);
lean_closure_set(v___f_4406_, 4, v___f_4403_);
v___x_4407_ = lean_apply_4(v_toBind_4401_, lean_box(0), lean_box(0), v___x_4405_, v___f_4406_);
return v___x_4407_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempDir(lean_object* v_m_4408_, lean_object* v_00_u03b1_4409_, lean_object* v_inst_4410_, lean_object* v_inst_4411_, lean_object* v_inst_4412_, lean_object* v_f_4413_){
_start:
{
lean_object* v___x_4414_; 
v___x_4414_ = l_IO_FS_withTempDir___redArg(v_inst_4410_, v_inst_4411_, v_inst_4412_, v_f_4413_);
return v___x_4414_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_getCurrentDir___boxed(lean_object* v_a_00___x40___internal___hyg_4416_){
_start:
{
lean_object* v_res_4417_; 
v_res_4417_ = lean_io_process_get_current_dir();
return v_res_4417_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_setCurrentDir___boxed(lean_object* v_path_4420_, lean_object* v_a_00___x40___internal___hyg_4421_){
_start:
{
lean_object* v_res_4422_; 
v_res_4422_ = lean_io_process_set_current_dir(v_path_4420_);
lean_dec_ref(v_path_4420_);
return v_res_4422_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_getPID___boxed(lean_object* v_a_00___x40___internal___hyg_4424_){
_start:
{
uint32_t v_res_4425_; lean_object* v_r_4426_; 
v_res_4425_ = lean_io_process_get_pid();
v_r_4426_ = lean_box_uint32(v_res_4425_);
return v_r_4426_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorIdx(uint8_t v_x_4427_){
_start:
{
switch(v_x_4427_)
{
case 0:
{
lean_object* v___x_4428_; 
v___x_4428_ = lean_unsigned_to_nat(0u);
return v___x_4428_;
}
case 1:
{
lean_object* v___x_4429_; 
v___x_4429_ = lean_unsigned_to_nat(1u);
return v___x_4429_;
}
default: 
{
lean_object* v___x_4430_; 
v___x_4430_ = lean_unsigned_to_nat(2u);
return v___x_4430_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorIdx___boxed(lean_object* v_x_4431_){
_start:
{
uint8_t v_x_boxed_4432_; lean_object* v_res_4433_; 
v_x_boxed_4432_ = lean_unbox(v_x_4431_);
v_res_4433_ = l_IO_Process_Stdio_ctorIdx(v_x_boxed_4432_);
return v_res_4433_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim___redArg(lean_object* v_k_4434_){
_start:
{
lean_inc(v_k_4434_);
return v_k_4434_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim___redArg___boxed(lean_object* v_k_4435_){
_start:
{
lean_object* v_res_4436_; 
v_res_4436_ = l_IO_Process_Stdio_ctorElim___redArg(v_k_4435_);
lean_dec(v_k_4435_);
return v_res_4436_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim(lean_object* v_motive_4437_, lean_object* v_ctorIdx_4438_, uint8_t v_t_4439_, lean_object* v_h_4440_, lean_object* v_k_4441_){
_start:
{
lean_inc(v_k_4441_);
return v_k_4441_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim___boxed(lean_object* v_motive_4442_, lean_object* v_ctorIdx_4443_, lean_object* v_t_4444_, lean_object* v_h_4445_, lean_object* v_k_4446_){
_start:
{
uint8_t v_t_boxed_4447_; lean_object* v_res_4448_; 
v_t_boxed_4447_ = lean_unbox(v_t_4444_);
v_res_4448_ = l_IO_Process_Stdio_ctorElim(v_motive_4442_, v_ctorIdx_4443_, v_t_boxed_4447_, v_h_4445_, v_k_4446_);
lean_dec(v_k_4446_);
lean_dec(v_ctorIdx_4443_);
return v_res_4448_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim___redArg(lean_object* v_piped_4449_){
_start:
{
lean_inc(v_piped_4449_);
return v_piped_4449_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim___redArg___boxed(lean_object* v_piped_4450_){
_start:
{
lean_object* v_res_4451_; 
v_res_4451_ = l_IO_Process_Stdio_piped_elim___redArg(v_piped_4450_);
lean_dec(v_piped_4450_);
return v_res_4451_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim(lean_object* v_motive_4452_, uint8_t v_t_4453_, lean_object* v_h_4454_, lean_object* v_piped_4455_){
_start:
{
lean_inc(v_piped_4455_);
return v_piped_4455_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim___boxed(lean_object* v_motive_4456_, lean_object* v_t_4457_, lean_object* v_h_4458_, lean_object* v_piped_4459_){
_start:
{
uint8_t v_t_boxed_4460_; lean_object* v_res_4461_; 
v_t_boxed_4460_ = lean_unbox(v_t_4457_);
v_res_4461_ = l_IO_Process_Stdio_piped_elim(v_motive_4456_, v_t_boxed_4460_, v_h_4458_, v_piped_4459_);
lean_dec(v_piped_4459_);
return v_res_4461_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim___redArg(lean_object* v_inherit_4462_){
_start:
{
lean_inc(v_inherit_4462_);
return v_inherit_4462_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim___redArg___boxed(lean_object* v_inherit_4463_){
_start:
{
lean_object* v_res_4464_; 
v_res_4464_ = l_IO_Process_Stdio_inherit_elim___redArg(v_inherit_4463_);
lean_dec(v_inherit_4463_);
return v_res_4464_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim(lean_object* v_motive_4465_, uint8_t v_t_4466_, lean_object* v_h_4467_, lean_object* v_inherit_4468_){
_start:
{
lean_inc(v_inherit_4468_);
return v_inherit_4468_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim___boxed(lean_object* v_motive_4469_, lean_object* v_t_4470_, lean_object* v_h_4471_, lean_object* v_inherit_4472_){
_start:
{
uint8_t v_t_boxed_4473_; lean_object* v_res_4474_; 
v_t_boxed_4473_ = lean_unbox(v_t_4470_);
v_res_4474_ = l_IO_Process_Stdio_inherit_elim(v_motive_4469_, v_t_boxed_4473_, v_h_4471_, v_inherit_4472_);
lean_dec(v_inherit_4472_);
return v_res_4474_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim___redArg(lean_object* v_null_4475_){
_start:
{
lean_inc(v_null_4475_);
return v_null_4475_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim___redArg___boxed(lean_object* v_null_4476_){
_start:
{
lean_object* v_res_4477_; 
v_res_4477_ = l_IO_Process_Stdio_null_elim___redArg(v_null_4476_);
lean_dec(v_null_4476_);
return v_res_4477_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim(lean_object* v_motive_4478_, uint8_t v_t_4479_, lean_object* v_h_4480_, lean_object* v_null_4481_){
_start:
{
lean_inc(v_null_4481_);
return v_null_4481_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim___boxed(lean_object* v_motive_4482_, lean_object* v_t_4483_, lean_object* v_h_4484_, lean_object* v_null_4485_){
_start:
{
uint8_t v_t_boxed_4486_; lean_object* v_res_4487_; 
v_t_boxed_4486_ = lean_unbox(v_t_4483_);
v_res_4487_ = l_IO_Process_Stdio_null_elim(v_motive_4482_, v_t_boxed_4486_, v_h_4484_, v_null_4485_);
lean_dec(v_null_4485_);
return v_res_4487_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_spawn___boxed(lean_object* v_args_4490_, lean_object* v_a_00___x40___internal___hyg_4491_){
_start:
{
lean_object* v_res_4492_; 
v_res_4492_ = lean_io_process_spawn(v_args_4490_);
return v_res_4492_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Child_wait___boxed(lean_object* v_cfg_4496_, lean_object* v_a_00___x40___internal___hyg_4497_, lean_object* v_a_00___x40___internal___hyg_4498_){
_start:
{
lean_object* v_res_4499_; 
v_res_4499_ = lean_io_process_child_wait(v_cfg_4496_, v_a_00___x40___internal___hyg_4497_);
lean_dec_ref(v_a_00___x40___internal___hyg_4497_);
lean_dec_ref(v_cfg_4496_);
return v_res_4499_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Child_tryWait___boxed(lean_object* v_cfg_4503_, lean_object* v_a_00___x40___internal___hyg_4504_, lean_object* v_a_00___x40___internal___hyg_4505_){
_start:
{
lean_object* v_res_4506_; 
v_res_4506_ = lean_io_process_child_try_wait(v_cfg_4503_, v_a_00___x40___internal___hyg_4504_);
lean_dec_ref(v_a_00___x40___internal___hyg_4504_);
lean_dec_ref(v_cfg_4503_);
return v_res_4506_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Child_kill___boxed(lean_object* v_cfg_4510_, lean_object* v_a_00___x40___internal___hyg_4511_, lean_object* v_a_00___x40___internal___hyg_4512_){
_start:
{
lean_object* v_res_4513_; 
v_res_4513_ = lean_io_process_child_kill(v_cfg_4510_, v_a_00___x40___internal___hyg_4511_);
lean_dec_ref(v_a_00___x40___internal___hyg_4511_);
lean_dec_ref(v_cfg_4510_);
return v_res_4513_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Child_takeStdin___boxed(lean_object* v_cfg_4517_, lean_object* v_a_00___x40___internal___hyg_4518_, lean_object* v_a_00___x40___internal___hyg_4519_){
_start:
{
lean_object* v_res_4520_; 
v_res_4520_ = lean_io_process_child_take_stdin(v_cfg_4517_, v_a_00___x40___internal___hyg_4518_);
lean_dec_ref(v_cfg_4517_);
return v_res_4520_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Child_pid___boxed(lean_object* v_cfg_4523_, lean_object* v_a_00___x40___internal___hyg_4524_){
_start:
{
uint32_t v_res_4525_; lean_object* v_r_4526_; 
v_res_4525_ = lean_io_process_child_pid(v_cfg_4523_, v_a_00___x40___internal___hyg_4524_);
lean_dec_ref(v_cfg_4523_);
v_r_4526_ = lean_box_uint32(v_res_4525_);
return v_r_4526_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(lean_object* v_e_4527_){
_start:
{
if (lean_obj_tag(v_e_4527_) == 0)
{
lean_object* v_a_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4538_; 
v_a_4529_ = lean_ctor_get(v_e_4527_, 0);
v_isSharedCheck_4538_ = !lean_is_exclusive(v_e_4527_);
if (v_isSharedCheck_4538_ == 0)
{
v___x_4531_ = v_e_4527_;
v_isShared_4532_ = v_isSharedCheck_4538_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_a_4529_);
lean_dec(v_e_4527_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4538_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4536_; 
v___x_4533_ = lean_io_error_to_string(v_a_4529_);
v___x_4534_ = lean_mk_io_user_error(v___x_4533_);
if (v_isShared_4532_ == 0)
{
lean_ctor_set_tag(v___x_4531_, 1);
lean_ctor_set(v___x_4531_, 0, v___x_4534_);
v___x_4536_ = v___x_4531_;
goto v_reusejp_4535_;
}
else
{
lean_object* v_reuseFailAlloc_4537_; 
v_reuseFailAlloc_4537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4537_, 0, v___x_4534_);
v___x_4536_ = v_reuseFailAlloc_4537_;
goto v_reusejp_4535_;
}
v_reusejp_4535_:
{
return v___x_4536_;
}
}
}
else
{
lean_object* v_a_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4546_; 
v_a_4539_ = lean_ctor_get(v_e_4527_, 0);
v_isSharedCheck_4546_ = !lean_is_exclusive(v_e_4527_);
if (v_isSharedCheck_4546_ == 0)
{
v___x_4541_ = v_e_4527_;
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
else
{
lean_inc(v_a_4539_);
lean_dec(v_e_4527_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4544_; 
if (v_isShared_4542_ == 0)
{
lean_ctor_set_tag(v___x_4541_, 0);
v___x_4544_ = v___x_4541_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v_a_4539_);
v___x_4544_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
return v___x_4544_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg___boxed(lean_object* v_e_4547_, lean_object* v___y_4548_){
_start:
{
lean_object* v_res_4549_; 
v_res_4549_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v_e_4547_);
return v_res_4549_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0(lean_object* v_00_u03b1_4550_, lean_object* v_e_4551_){
_start:
{
lean_object* v___x_4553_; 
v___x_4553_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v_e_4551_);
return v___x_4553_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___boxed(lean_object* v_00_u03b1_4554_, lean_object* v_e_4555_, lean_object* v___y_4556_){
_start:
{
lean_object* v_res_4557_; 
v_res_4557_ = l_IO_ofExcept___at___00IO_Process_output_spec__0(v_00_u03b1_4554_, v_e_4555_);
return v_res_4557_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_output___lam__0(lean_object* v_stdout_4558_){
_start:
{
lean_object* v___x_4560_; 
v___x_4560_ = l_IO_FS_Handle_readToEnd(v_stdout_4558_);
if (lean_obj_tag(v___x_4560_) == 0)
{
lean_object* v_a_4561_; lean_object* v___x_4563_; uint8_t v_isShared_4564_; uint8_t v_isSharedCheck_4568_; 
v_a_4561_ = lean_ctor_get(v___x_4560_, 0);
v_isSharedCheck_4568_ = !lean_is_exclusive(v___x_4560_);
if (v_isSharedCheck_4568_ == 0)
{
v___x_4563_ = v___x_4560_;
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
else
{
lean_inc(v_a_4561_);
lean_dec(v___x_4560_);
v___x_4563_ = lean_box(0);
v_isShared_4564_ = v_isSharedCheck_4568_;
goto v_resetjp_4562_;
}
v_resetjp_4562_:
{
lean_object* v___x_4566_; 
if (v_isShared_4564_ == 0)
{
lean_ctor_set_tag(v___x_4563_, 1);
v___x_4566_ = v___x_4563_;
goto v_reusejp_4565_;
}
else
{
lean_object* v_reuseFailAlloc_4567_; 
v_reuseFailAlloc_4567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4567_, 0, v_a_4561_);
v___x_4566_ = v_reuseFailAlloc_4567_;
goto v_reusejp_4565_;
}
v_reusejp_4565_:
{
return v___x_4566_;
}
}
}
else
{
lean_object* v_a_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4576_; 
v_a_4569_ = lean_ctor_get(v___x_4560_, 0);
v_isSharedCheck_4576_ = !lean_is_exclusive(v___x_4560_);
if (v_isSharedCheck_4576_ == 0)
{
v___x_4571_ = v___x_4560_;
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
else
{
lean_inc(v_a_4569_);
lean_dec(v___x_4560_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
lean_object* v___x_4574_; 
if (v_isShared_4572_ == 0)
{
lean_ctor_set_tag(v___x_4571_, 0);
v___x_4574_ = v___x_4571_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v_a_4569_);
v___x_4574_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
return v___x_4574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_Process_output___lam__0___boxed(lean_object* v_stdout_4577_, lean_object* v___y_4578_){
_start:
{
lean_object* v_res_4579_; 
v_res_4579_ = l_IO_Process_output___lam__0(v_stdout_4577_);
lean_dec(v_stdout_4577_);
return v_res_4579_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_output(lean_object* v_args_4585_, lean_object* v_input_x3f_4586_){
_start:
{
lean_object* v_child_4589_; 
if (lean_obj_tag(v_input_x3f_4586_) == 1)
{
lean_object* v_val_4636_; lean_object* v___x_4637_; lean_object* v_cmd_4638_; lean_object* v_args_4639_; lean_object* v_cwd_4640_; lean_object* v_env_4641_; uint8_t v_inheritEnv_4642_; uint8_t v_setsid_4643_; lean_object* v___x_4645_; uint8_t v_isShared_4646_; uint8_t v_isSharedCheck_4690_; 
v_val_4636_ = lean_ctor_get(v_input_x3f_4586_, 0);
v___x_4637_ = ((lean_object*)(l_IO_Process_output___closed__1));
v_cmd_4638_ = lean_ctor_get(v_args_4585_, 1);
v_args_4639_ = lean_ctor_get(v_args_4585_, 2);
v_cwd_4640_ = lean_ctor_get(v_args_4585_, 3);
v_env_4641_ = lean_ctor_get(v_args_4585_, 4);
v_inheritEnv_4642_ = lean_ctor_get_uint8(v_args_4585_, sizeof(void*)*5);
v_setsid_4643_ = lean_ctor_get_uint8(v_args_4585_, sizeof(void*)*5 + 1);
v_isSharedCheck_4690_ = !lean_is_exclusive(v_args_4585_);
if (v_isSharedCheck_4690_ == 0)
{
lean_object* v_unused_4691_; 
v_unused_4691_ = lean_ctor_get(v_args_4585_, 0);
lean_dec(v_unused_4691_);
v___x_4645_ = v_args_4585_;
v_isShared_4646_ = v_isSharedCheck_4690_;
goto v_resetjp_4644_;
}
else
{
lean_inc(v_env_4641_);
lean_inc(v_cwd_4640_);
lean_inc(v_args_4639_);
lean_inc(v_cmd_4638_);
lean_dec(v_args_4585_);
v___x_4645_ = lean_box(0);
v_isShared_4646_ = v_isSharedCheck_4690_;
goto v_resetjp_4644_;
}
v_resetjp_4644_:
{
lean_object* v___x_4648_; 
if (v_isShared_4646_ == 0)
{
lean_ctor_set(v___x_4645_, 0, v___x_4637_);
v___x_4648_ = v___x_4645_;
goto v_reusejp_4647_;
}
else
{
lean_object* v_reuseFailAlloc_4689_; 
v_reuseFailAlloc_4689_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_4689_, 0, v___x_4637_);
lean_ctor_set(v_reuseFailAlloc_4689_, 1, v_cmd_4638_);
lean_ctor_set(v_reuseFailAlloc_4689_, 2, v_args_4639_);
lean_ctor_set(v_reuseFailAlloc_4689_, 3, v_cwd_4640_);
lean_ctor_set(v_reuseFailAlloc_4689_, 4, v_env_4641_);
lean_ctor_set_uint8(v_reuseFailAlloc_4689_, sizeof(void*)*5, v_inheritEnv_4642_);
lean_ctor_set_uint8(v_reuseFailAlloc_4689_, sizeof(void*)*5 + 1, v_setsid_4643_);
v___x_4648_ = v_reuseFailAlloc_4689_;
goto v_reusejp_4647_;
}
v_reusejp_4647_:
{
lean_object* v___x_4649_; 
v___x_4649_ = lean_io_process_spawn(v___x_4648_);
if (lean_obj_tag(v___x_4649_) == 0)
{
lean_object* v_a_4650_; lean_object* v___x_4651_; 
v_a_4650_ = lean_ctor_get(v___x_4649_, 0);
lean_inc(v_a_4650_);
lean_dec_ref_known(v___x_4649_, 1);
v___x_4651_ = lean_io_process_child_take_stdin(v___x_4637_, v_a_4650_);
if (lean_obj_tag(v___x_4651_) == 0)
{
lean_object* v_a_4652_; lean_object* v_fst_4653_; lean_object* v_snd_4654_; lean_object* v___x_4655_; 
v_a_4652_ = lean_ctor_get(v___x_4651_, 0);
lean_inc(v_a_4652_);
lean_dec_ref_known(v___x_4651_, 1);
v_fst_4653_ = lean_ctor_get(v_a_4652_, 0);
lean_inc(v_fst_4653_);
v_snd_4654_ = lean_ctor_get(v_a_4652_, 1);
lean_inc(v_snd_4654_);
lean_dec(v_a_4652_);
v___x_4655_ = lean_io_prim_handle_put_str(v_fst_4653_, v_val_4636_);
if (lean_obj_tag(v___x_4655_) == 0)
{
lean_object* v___x_4656_; 
lean_dec_ref_known(v___x_4655_, 1);
v___x_4656_ = lean_io_prim_handle_flush(v_fst_4653_);
lean_dec(v_fst_4653_);
if (lean_obj_tag(v___x_4656_) == 0)
{
lean_dec_ref_known(v___x_4656_, 1);
v_child_4589_ = v_snd_4654_;
goto v___jp_4588_;
}
else
{
lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4664_; 
lean_dec(v_snd_4654_);
v_a_4657_ = lean_ctor_get(v___x_4656_, 0);
v_isSharedCheck_4664_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4659_ = v___x_4656_;
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_dec(v___x_4656_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_a_4657_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
return v___x_4662_;
}
}
}
}
else
{
lean_object* v_a_4665_; lean_object* v___x_4667_; uint8_t v_isShared_4668_; uint8_t v_isSharedCheck_4672_; 
lean_dec(v_snd_4654_);
lean_dec(v_fst_4653_);
v_a_4665_ = lean_ctor_get(v___x_4655_, 0);
v_isSharedCheck_4672_ = !lean_is_exclusive(v___x_4655_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4667_ = v___x_4655_;
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
else
{
lean_inc(v_a_4665_);
lean_dec(v___x_4655_);
v___x_4667_ = lean_box(0);
v_isShared_4668_ = v_isSharedCheck_4672_;
goto v_resetjp_4666_;
}
v_resetjp_4666_:
{
lean_object* v___x_4670_; 
if (v_isShared_4668_ == 0)
{
v___x_4670_ = v___x_4667_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v_a_4665_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
}
}
else
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4680_; 
v_a_4673_ = lean_ctor_get(v___x_4651_, 0);
v_isSharedCheck_4680_ = !lean_is_exclusive(v___x_4651_);
if (v_isSharedCheck_4680_ == 0)
{
v___x_4675_ = v___x_4651_;
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v___x_4651_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v___x_4678_; 
if (v_isShared_4676_ == 0)
{
v___x_4678_ = v___x_4675_;
goto v_reusejp_4677_;
}
else
{
lean_object* v_reuseFailAlloc_4679_; 
v_reuseFailAlloc_4679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4679_, 0, v_a_4673_);
v___x_4678_ = v_reuseFailAlloc_4679_;
goto v_reusejp_4677_;
}
v_reusejp_4677_:
{
return v___x_4678_;
}
}
}
}
else
{
lean_object* v_a_4681_; lean_object* v___x_4683_; uint8_t v_isShared_4684_; uint8_t v_isSharedCheck_4688_; 
v_a_4681_ = lean_ctor_get(v___x_4649_, 0);
v_isSharedCheck_4688_ = !lean_is_exclusive(v___x_4649_);
if (v_isSharedCheck_4688_ == 0)
{
v___x_4683_ = v___x_4649_;
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
else
{
lean_inc(v_a_4681_);
lean_dec(v___x_4649_);
v___x_4683_ = lean_box(0);
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
v_resetjp_4682_:
{
lean_object* v___x_4686_; 
if (v_isShared_4684_ == 0)
{
v___x_4686_ = v___x_4683_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v_a_4681_);
v___x_4686_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
return v___x_4686_;
}
}
}
}
}
}
else
{
lean_object* v___x_4692_; lean_object* v_cmd_4693_; lean_object* v_args_4694_; lean_object* v_cwd_4695_; lean_object* v_env_4696_; uint8_t v_inheritEnv_4697_; uint8_t v_setsid_4698_; lean_object* v___x_4700_; uint8_t v_isShared_4701_; uint8_t v_isSharedCheck_4715_; 
v___x_4692_ = ((lean_object*)(l_IO_Process_output___closed__0));
v_cmd_4693_ = lean_ctor_get(v_args_4585_, 1);
v_args_4694_ = lean_ctor_get(v_args_4585_, 2);
v_cwd_4695_ = lean_ctor_get(v_args_4585_, 3);
v_env_4696_ = lean_ctor_get(v_args_4585_, 4);
v_inheritEnv_4697_ = lean_ctor_get_uint8(v_args_4585_, sizeof(void*)*5);
v_setsid_4698_ = lean_ctor_get_uint8(v_args_4585_, sizeof(void*)*5 + 1);
v_isSharedCheck_4715_ = !lean_is_exclusive(v_args_4585_);
if (v_isSharedCheck_4715_ == 0)
{
lean_object* v_unused_4716_; 
v_unused_4716_ = lean_ctor_get(v_args_4585_, 0);
lean_dec(v_unused_4716_);
v___x_4700_ = v_args_4585_;
v_isShared_4701_ = v_isSharedCheck_4715_;
goto v_resetjp_4699_;
}
else
{
lean_inc(v_env_4696_);
lean_inc(v_cwd_4695_);
lean_inc(v_args_4694_);
lean_inc(v_cmd_4693_);
lean_dec(v_args_4585_);
v___x_4700_ = lean_box(0);
v_isShared_4701_ = v_isSharedCheck_4715_;
goto v_resetjp_4699_;
}
v_resetjp_4699_:
{
lean_object* v___x_4703_; 
if (v_isShared_4701_ == 0)
{
lean_ctor_set(v___x_4700_, 0, v___x_4692_);
v___x_4703_ = v___x_4700_;
goto v_reusejp_4702_;
}
else
{
lean_object* v_reuseFailAlloc_4714_; 
v_reuseFailAlloc_4714_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_4714_, 0, v___x_4692_);
lean_ctor_set(v_reuseFailAlloc_4714_, 1, v_cmd_4693_);
lean_ctor_set(v_reuseFailAlloc_4714_, 2, v_args_4694_);
lean_ctor_set(v_reuseFailAlloc_4714_, 3, v_cwd_4695_);
lean_ctor_set(v_reuseFailAlloc_4714_, 4, v_env_4696_);
lean_ctor_set_uint8(v_reuseFailAlloc_4714_, sizeof(void*)*5, v_inheritEnv_4697_);
lean_ctor_set_uint8(v_reuseFailAlloc_4714_, sizeof(void*)*5 + 1, v_setsid_4698_);
v___x_4703_ = v_reuseFailAlloc_4714_;
goto v_reusejp_4702_;
}
v_reusejp_4702_:
{
lean_object* v___x_4704_; 
v___x_4704_ = lean_io_process_spawn(v___x_4703_);
if (lean_obj_tag(v___x_4704_) == 0)
{
lean_object* v_a_4705_; 
v_a_4705_ = lean_ctor_get(v___x_4704_, 0);
lean_inc(v_a_4705_);
lean_dec_ref_known(v___x_4704_, 1);
v_child_4589_ = v_a_4705_;
goto v___jp_4588_;
}
else
{
lean_object* v_a_4706_; lean_object* v___x_4708_; uint8_t v_isShared_4709_; uint8_t v_isSharedCheck_4713_; 
v_a_4706_ = lean_ctor_get(v___x_4704_, 0);
v_isSharedCheck_4713_ = !lean_is_exclusive(v___x_4704_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4708_ = v___x_4704_;
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
else
{
lean_inc(v_a_4706_);
lean_dec(v___x_4704_);
v___x_4708_ = lean_box(0);
v_isShared_4709_ = v_isSharedCheck_4713_;
goto v_resetjp_4707_;
}
v_resetjp_4707_:
{
lean_object* v___x_4711_; 
if (v_isShared_4709_ == 0)
{
v___x_4711_ = v___x_4708_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4712_; 
v_reuseFailAlloc_4712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4712_, 0, v_a_4706_);
v___x_4711_ = v_reuseFailAlloc_4712_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
return v___x_4711_;
}
}
}
}
}
}
v___jp_4588_:
{
lean_object* v_stdout_4590_; lean_object* v_stderr_4591_; lean_object* v___f_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; 
v_stdout_4590_ = lean_ctor_get(v_child_4589_, 1);
v_stderr_4591_ = lean_ctor_get(v_child_4589_, 2);
lean_inc(v_stdout_4590_);
v___f_4592_ = lean_alloc_closure((void*)(l_IO_Process_output___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4592_, 0, v_stdout_4590_);
v___x_4593_ = lean_unsigned_to_nat(9u);
v___x_4594_ = lean_io_as_task(v___f_4592_, v___x_4593_);
v___x_4595_ = l_IO_FS_Handle_readToEnd(v_stderr_4591_);
if (lean_obj_tag(v___x_4595_) == 0)
{
lean_object* v_a_4596_; lean_object* v___x_4597_; lean_object* v___x_4598_; 
v_a_4596_ = lean_ctor_get(v___x_4595_, 0);
lean_inc(v_a_4596_);
lean_dec_ref_known(v___x_4595_, 1);
v___x_4597_ = ((lean_object*)(l_IO_Process_output___closed__0));
v___x_4598_ = lean_io_process_child_wait(v___x_4597_, v_child_4589_);
lean_dec_ref(v_child_4589_);
if (lean_obj_tag(v___x_4598_) == 0)
{
lean_object* v_a_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; 
v_a_4599_ = lean_ctor_get(v___x_4598_, 0);
lean_inc(v_a_4599_);
lean_dec_ref_known(v___x_4598_, 1);
v___x_4600_ = lean_task_get_own(v___x_4594_);
v___x_4601_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v___x_4600_);
if (lean_obj_tag(v___x_4601_) == 0)
{
lean_object* v_a_4602_; lean_object* v___x_4604_; uint8_t v_isShared_4605_; uint8_t v_isSharedCheck_4611_; 
v_a_4602_ = lean_ctor_get(v___x_4601_, 0);
v_isSharedCheck_4611_ = !lean_is_exclusive(v___x_4601_);
if (v_isSharedCheck_4611_ == 0)
{
v___x_4604_ = v___x_4601_;
v_isShared_4605_ = v_isSharedCheck_4611_;
goto v_resetjp_4603_;
}
else
{
lean_inc(v_a_4602_);
lean_dec(v___x_4601_);
v___x_4604_ = lean_box(0);
v_isShared_4605_ = v_isSharedCheck_4611_;
goto v_resetjp_4603_;
}
v_resetjp_4603_:
{
lean_object* v___x_4606_; uint32_t v___x_4607_; lean_object* v___x_4609_; 
v___x_4606_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_4606_, 0, v_a_4602_);
lean_ctor_set(v___x_4606_, 1, v_a_4596_);
v___x_4607_ = lean_unbox_uint32(v_a_4599_);
lean_dec(v_a_4599_);
lean_ctor_set_uint32(v___x_4606_, sizeof(void*)*2, v___x_4607_);
if (v_isShared_4605_ == 0)
{
lean_ctor_set(v___x_4604_, 0, v___x_4606_);
v___x_4609_ = v___x_4604_;
goto v_reusejp_4608_;
}
else
{
lean_object* v_reuseFailAlloc_4610_; 
v_reuseFailAlloc_4610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4610_, 0, v___x_4606_);
v___x_4609_ = v_reuseFailAlloc_4610_;
goto v_reusejp_4608_;
}
v_reusejp_4608_:
{
return v___x_4609_;
}
}
}
else
{
lean_object* v_a_4612_; lean_object* v___x_4614_; uint8_t v_isShared_4615_; uint8_t v_isSharedCheck_4619_; 
lean_dec(v_a_4599_);
lean_dec(v_a_4596_);
v_a_4612_ = lean_ctor_get(v___x_4601_, 0);
v_isSharedCheck_4619_ = !lean_is_exclusive(v___x_4601_);
if (v_isSharedCheck_4619_ == 0)
{
v___x_4614_ = v___x_4601_;
v_isShared_4615_ = v_isSharedCheck_4619_;
goto v_resetjp_4613_;
}
else
{
lean_inc(v_a_4612_);
lean_dec(v___x_4601_);
v___x_4614_ = lean_box(0);
v_isShared_4615_ = v_isSharedCheck_4619_;
goto v_resetjp_4613_;
}
v_resetjp_4613_:
{
lean_object* v___x_4617_; 
if (v_isShared_4615_ == 0)
{
v___x_4617_ = v___x_4614_;
goto v_reusejp_4616_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v_a_4612_);
v___x_4617_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4616_;
}
v_reusejp_4616_:
{
return v___x_4617_;
}
}
}
}
else
{
lean_object* v_a_4620_; lean_object* v___x_4622_; uint8_t v_isShared_4623_; uint8_t v_isSharedCheck_4627_; 
lean_dec(v_a_4596_);
lean_dec_ref(v___x_4594_);
v_a_4620_ = lean_ctor_get(v___x_4598_, 0);
v_isSharedCheck_4627_ = !lean_is_exclusive(v___x_4598_);
if (v_isSharedCheck_4627_ == 0)
{
v___x_4622_ = v___x_4598_;
v_isShared_4623_ = v_isSharedCheck_4627_;
goto v_resetjp_4621_;
}
else
{
lean_inc(v_a_4620_);
lean_dec(v___x_4598_);
v___x_4622_ = lean_box(0);
v_isShared_4623_ = v_isSharedCheck_4627_;
goto v_resetjp_4621_;
}
v_resetjp_4621_:
{
lean_object* v___x_4625_; 
if (v_isShared_4623_ == 0)
{
v___x_4625_ = v___x_4622_;
goto v_reusejp_4624_;
}
else
{
lean_object* v_reuseFailAlloc_4626_; 
v_reuseFailAlloc_4626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4626_, 0, v_a_4620_);
v___x_4625_ = v_reuseFailAlloc_4626_;
goto v_reusejp_4624_;
}
v_reusejp_4624_:
{
return v___x_4625_;
}
}
}
}
else
{
lean_object* v_a_4628_; lean_object* v___x_4630_; uint8_t v_isShared_4631_; uint8_t v_isSharedCheck_4635_; 
lean_dec_ref(v___x_4594_);
lean_dec_ref(v_child_4589_);
v_a_4628_ = lean_ctor_get(v___x_4595_, 0);
v_isSharedCheck_4635_ = !lean_is_exclusive(v___x_4595_);
if (v_isSharedCheck_4635_ == 0)
{
v___x_4630_ = v___x_4595_;
v_isShared_4631_ = v_isSharedCheck_4635_;
goto v_resetjp_4629_;
}
else
{
lean_inc(v_a_4628_);
lean_dec(v___x_4595_);
v___x_4630_ = lean_box(0);
v_isShared_4631_ = v_isSharedCheck_4635_;
goto v_resetjp_4629_;
}
v_resetjp_4629_:
{
lean_object* v___x_4633_; 
if (v_isShared_4631_ == 0)
{
v___x_4633_ = v___x_4630_;
goto v_reusejp_4632_;
}
else
{
lean_object* v_reuseFailAlloc_4634_; 
v_reuseFailAlloc_4634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4634_, 0, v_a_4628_);
v___x_4633_ = v_reuseFailAlloc_4634_;
goto v_reusejp_4632_;
}
v_reusejp_4632_:
{
return v___x_4633_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_Process_output___boxed(lean_object* v_args_4717_, lean_object* v_input_x3f_4718_, lean_object* v___y_4719_){
_start:
{
lean_object* v_res_4720_; 
v_res_4720_ = l_IO_Process_output(v_args_4717_, v_input_x3f_4718_);
lean_dec(v_input_x3f_4718_);
return v_res_4720_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_run(lean_object* v_args_4724_, lean_object* v_input_x3f_4725_){
_start:
{
lean_object* v___x_4727_; 
lean_inc_ref(v_args_4724_);
v___x_4727_ = l_IO_Process_output(v_args_4724_, v_input_x3f_4725_);
if (lean_obj_tag(v___x_4727_) == 0)
{
lean_object* v_a_4728_; lean_object* v___x_4730_; uint8_t v_isShared_4731_; uint8_t v_isSharedCheck_4755_; 
v_a_4728_ = lean_ctor_get(v___x_4727_, 0);
v_isSharedCheck_4755_ = !lean_is_exclusive(v___x_4727_);
if (v_isSharedCheck_4755_ == 0)
{
v___x_4730_ = v___x_4727_;
v_isShared_4731_ = v_isSharedCheck_4755_;
goto v_resetjp_4729_;
}
else
{
lean_inc(v_a_4728_);
lean_dec(v___x_4727_);
v___x_4730_ = lean_box(0);
v_isShared_4731_ = v_isSharedCheck_4755_;
goto v_resetjp_4729_;
}
v_resetjp_4729_:
{
uint32_t v_exitCode_4732_; lean_object* v_stdout_4733_; lean_object* v_stderr_4734_; uint32_t v___x_4735_; uint8_t v___x_4736_; 
v_exitCode_4732_ = lean_ctor_get_uint32(v_a_4728_, sizeof(void*)*2);
v_stdout_4733_ = lean_ctor_get(v_a_4728_, 0);
lean_inc_ref(v_stdout_4733_);
v_stderr_4734_ = lean_ctor_get(v_a_4728_, 1);
lean_inc_ref(v_stderr_4734_);
lean_dec(v_a_4728_);
v___x_4735_ = 0;
v___x_4736_ = lean_uint32_dec_eq(v_exitCode_4732_, v___x_4735_);
if (v___x_4736_ == 0)
{
lean_object* v_cmd_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4750_; 
lean_dec_ref(v_stdout_4733_);
v_cmd_4737_ = lean_ctor_get(v_args_4724_, 1);
lean_inc_ref(v_cmd_4737_);
lean_dec_ref(v_args_4724_);
v___x_4738_ = ((lean_object*)(l_IO_Process_run___closed__0));
v___x_4739_ = lean_string_append(v___x_4738_, v_cmd_4737_);
lean_dec_ref(v_cmd_4737_);
v___x_4740_ = ((lean_object*)(l_IO_Process_run___closed__1));
v___x_4741_ = lean_string_append(v___x_4739_, v___x_4740_);
v___x_4742_ = lean_uint32_to_nat(v_exitCode_4732_);
v___x_4743_ = l_Nat_reprFast(v___x_4742_);
v___x_4744_ = lean_string_append(v___x_4741_, v___x_4743_);
lean_dec_ref(v___x_4743_);
v___x_4745_ = ((lean_object*)(l_IO_Process_run___closed__2));
v___x_4746_ = lean_string_append(v___x_4744_, v___x_4745_);
v___x_4747_ = lean_string_append(v___x_4746_, v_stderr_4734_);
lean_dec_ref(v_stderr_4734_);
v___x_4748_ = lean_mk_io_user_error(v___x_4747_);
if (v_isShared_4731_ == 0)
{
lean_ctor_set_tag(v___x_4730_, 1);
lean_ctor_set(v___x_4730_, 0, v___x_4748_);
v___x_4750_ = v___x_4730_;
goto v_reusejp_4749_;
}
else
{
lean_object* v_reuseFailAlloc_4751_; 
v_reuseFailAlloc_4751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4751_, 0, v___x_4748_);
v___x_4750_ = v_reuseFailAlloc_4751_;
goto v_reusejp_4749_;
}
v_reusejp_4749_:
{
return v___x_4750_;
}
}
else
{
lean_object* v___x_4753_; 
lean_dec_ref(v_stderr_4734_);
lean_dec_ref(v_args_4724_);
if (v_isShared_4731_ == 0)
{
lean_ctor_set(v___x_4730_, 0, v_stdout_4733_);
v___x_4753_ = v___x_4730_;
goto v_reusejp_4752_;
}
else
{
lean_object* v_reuseFailAlloc_4754_; 
v_reuseFailAlloc_4754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4754_, 0, v_stdout_4733_);
v___x_4753_ = v_reuseFailAlloc_4754_;
goto v_reusejp_4752_;
}
v_reusejp_4752_:
{
return v___x_4753_;
}
}
}
}
else
{
lean_object* v_a_4756_; lean_object* v___x_4758_; uint8_t v_isShared_4759_; uint8_t v_isSharedCheck_4763_; 
lean_dec_ref(v_args_4724_);
v_a_4756_ = lean_ctor_get(v___x_4727_, 0);
v_isSharedCheck_4763_ = !lean_is_exclusive(v___x_4727_);
if (v_isSharedCheck_4763_ == 0)
{
v___x_4758_ = v___x_4727_;
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
else
{
lean_inc(v_a_4756_);
lean_dec(v___x_4727_);
v___x_4758_ = lean_box(0);
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
v_resetjp_4757_:
{
lean_object* v___x_4761_; 
if (v_isShared_4759_ == 0)
{
v___x_4761_ = v___x_4758_;
goto v_reusejp_4760_;
}
else
{
lean_object* v_reuseFailAlloc_4762_; 
v_reuseFailAlloc_4762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4762_, 0, v_a_4756_);
v___x_4761_ = v_reuseFailAlloc_4762_;
goto v_reusejp_4760_;
}
v_reusejp_4760_:
{
return v___x_4761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_Process_run___boxed(lean_object* v_args_4764_, lean_object* v_input_x3f_4765_, lean_object* v___y_4766_){
_start:
{
lean_object* v_res_4767_; 
v_res_4767_ = l_IO_Process_run(v_args_4764_, v_input_x3f_4765_);
lean_dec(v_input_x3f_4765_);
return v_res_4767_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_exit___boxed(lean_object* v_00_u03b1_4771_, lean_object* v_a_00___x40___internal___hyg_4772_, lean_object* v_a_00___x40___internal___hyg_4773_){
_start:
{
uint8_t v_a_00___x40___internal___hyg_1__boxed_4774_; lean_object* v_res_4775_; 
v_a_00___x40___internal___hyg_1__boxed_4774_ = lean_unbox(v_a_00___x40___internal___hyg_4772_);
v_res_4775_ = lean_io_exit(v_a_00___x40___internal___hyg_1__boxed_4774_);
return v_res_4775_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_forceExit___boxed(lean_object* v_00_u03b1_4779_, lean_object* v_a_00___x40___internal___hyg_4780_, lean_object* v_a_00___x40___internal___hyg_4781_){
_start:
{
uint8_t v_a_00___x40___internal___hyg_1__boxed_4782_; lean_object* v_res_4783_; 
v_a_00___x40___internal___hyg_1__boxed_4782_ = lean_unbox(v_a_00___x40___internal___hyg_4780_);
v_res_4783_ = lean_io_force_exit(v_a_00___x40___internal___hyg_1__boxed_4782_);
return v_res_4783_;
}
}
LEAN_EXPORT lean_object* l_IO_getTID___boxed(lean_object* v_a_00___x40___internal___hyg_4785_){
_start:
{
uint64_t v_res_4786_; lean_object* v_r_4787_; 
v_res_4786_ = lean_io_get_tid();
v_r_4787_ = lean_box_uint64(v_res_4786_);
return v_r_4787_;
}
}
LEAN_EXPORT uint32_t l_IO_AccessRight_flags(lean_object* v_acc_4788_){
_start:
{
uint32_t v___y_4790_; uint32_t v___y_4791_; uint32_t v___y_4792_; uint8_t v_read_4795_; uint8_t v_write_4796_; uint8_t v_execution_4797_; uint32_t v___y_4799_; uint32_t v___y_4800_; uint32_t v___y_4804_; 
v_read_4795_ = lean_ctor_get_uint8(v_acc_4788_, 0);
v_write_4796_ = lean_ctor_get_uint8(v_acc_4788_, 1);
v_execution_4797_ = lean_ctor_get_uint8(v_acc_4788_, 2);
if (v_read_4795_ == 0)
{
uint32_t v___x_4807_; 
v___x_4807_ = 0;
v___y_4804_ = v___x_4807_;
goto v___jp_4803_;
}
else
{
uint32_t v___x_4808_; 
v___x_4808_ = 4;
v___y_4804_ = v___x_4808_;
goto v___jp_4803_;
}
v___jp_4789_:
{
uint32_t v___x_4793_; uint32_t v___x_4794_; 
v___x_4793_ = lean_uint32_lor(v___y_4791_, v___y_4792_);
v___x_4794_ = lean_uint32_lor(v___y_4790_, v___x_4793_);
return v___x_4794_;
}
v___jp_4798_:
{
if (v_execution_4797_ == 0)
{
uint32_t v___x_4801_; 
v___x_4801_ = 0;
v___y_4790_ = v___y_4799_;
v___y_4791_ = v___y_4800_;
v___y_4792_ = v___x_4801_;
goto v___jp_4789_;
}
else
{
uint32_t v___x_4802_; 
v___x_4802_ = 1;
v___y_4790_ = v___y_4799_;
v___y_4791_ = v___y_4800_;
v___y_4792_ = v___x_4802_;
goto v___jp_4789_;
}
}
v___jp_4803_:
{
if (v_write_4796_ == 0)
{
uint32_t v___x_4805_; 
v___x_4805_ = 0;
v___y_4799_ = v___y_4804_;
v___y_4800_ = v___x_4805_;
goto v___jp_4798_;
}
else
{
uint32_t v___x_4806_; 
v___x_4806_ = 2;
v___y_4799_ = v___y_4804_;
v___y_4800_ = v___x_4806_;
goto v___jp_4798_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_AccessRight_flags___boxed(lean_object* v_acc_4809_){
_start:
{
uint32_t v_res_4810_; lean_object* v_r_4811_; 
v_res_4810_ = l_IO_AccessRight_flags(v_acc_4809_);
lean_dec_ref(v_acc_4809_);
v_r_4811_ = lean_box_uint32(v_res_4810_);
return v_r_4811_;
}
}
LEAN_EXPORT uint32_t l_IO_FileRight_flags(lean_object* v_acc_4812_){
_start:
{
lean_object* v_user_4813_; lean_object* v_group_4814_; lean_object* v_other_4815_; uint32_t v___x_4816_; uint32_t v___x_4817_; uint32_t v_u_4818_; uint32_t v___x_4819_; uint32_t v___x_4820_; uint32_t v_g_4821_; uint32_t v_o_4822_; uint32_t v___x_4823_; uint32_t v___x_4824_; 
v_user_4813_ = lean_ctor_get(v_acc_4812_, 0);
v_group_4814_ = lean_ctor_get(v_acc_4812_, 1);
v_other_4815_ = lean_ctor_get(v_acc_4812_, 2);
v___x_4816_ = l_IO_AccessRight_flags(v_user_4813_);
v___x_4817_ = 6;
v_u_4818_ = lean_uint32_shift_left(v___x_4816_, v___x_4817_);
v___x_4819_ = l_IO_AccessRight_flags(v_group_4814_);
v___x_4820_ = 3;
v_g_4821_ = lean_uint32_shift_left(v___x_4819_, v___x_4820_);
v_o_4822_ = l_IO_AccessRight_flags(v_other_4815_);
v___x_4823_ = lean_uint32_lor(v_g_4821_, v_o_4822_);
v___x_4824_ = lean_uint32_lor(v_u_4818_, v___x_4823_);
return v___x_4824_;
}
}
LEAN_EXPORT lean_object* l_IO_FileRight_flags___boxed(lean_object* v_acc_4825_){
_start:
{
uint32_t v_res_4826_; lean_object* v_r_4827_; 
v_res_4826_ = l_IO_FileRight_flags(v_acc_4825_);
lean_dec_ref(v_acc_4825_);
v_r_4827_ = lean_box_uint32(v_res_4826_);
return v_r_4827_;
}
}
LEAN_EXPORT lean_object* l_IO_Prim_setAccessRights___boxed(lean_object* v_filename_4831_, lean_object* v_mode_4832_, lean_object* v_a_00___x40___internal___hyg_4833_){
_start:
{
uint32_t v_mode_boxed_4834_; lean_object* v_res_4835_; 
v_mode_boxed_4834_ = lean_unbox_uint32(v_mode_4832_);
lean_dec(v_mode_4832_);
v_res_4835_ = lean_chmod(v_filename_4831_, v_mode_boxed_4834_);
lean_dec_ref(v_filename_4831_);
return v_res_4835_;
}
}
LEAN_EXPORT lean_object* l_IO_setAccessRights(lean_object* v_filename_4836_, lean_object* v_mode_4837_){
_start:
{
uint32_t v___x_4839_; lean_object* v___x_4840_; 
v___x_4839_ = l_IO_FileRight_flags(v_mode_4837_);
v___x_4840_ = lean_chmod(v_filename_4836_, v___x_4839_);
return v___x_4840_;
}
}
LEAN_EXPORT lean_object* l_IO_setAccessRights___boxed(lean_object* v_filename_4841_, lean_object* v_mode_4842_, lean_object* v___y_4843_){
_start:
{
lean_object* v_res_4844_; 
v_res_4844_ = l_IO_setAccessRights(v_filename_4841_, v_mode_4842_);
lean_dec_ref(v_mode_4842_);
lean_dec_ref(v_filename_4841_);
return v_res_4844_;
}
}
LEAN_EXPORT lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0(lean_object* v_00_u03b1_4845_, lean_object* v_mx_4846_){
_start:
{
lean_object* v___x_4848_; 
v___x_4848_ = lean_apply_1(v_mx_4846_, lean_box(0));
return v___x_4848_;
}
}
LEAN_EXPORT lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object* v_00_u03b1_4849_, lean_object* v_mx_4850_, lean_object* v___y_4851_){
_start:
{
lean_object* v_res_4852_; 
v_res_4852_ = l_IO_instMonadLiftSTRealWorldBaseIO___lam__0(v_00_u03b1_4849_, v_mx_4850_);
return v_res_4852_;
}
}
LEAN_EXPORT lean_object* l_IO_mkRef___redArg(lean_object* v_a_4855_){
_start:
{
lean_object* v___x_4857_; 
v___x_4857_ = lean_st_mk_ref(v_a_4855_);
return v___x_4857_;
}
}
LEAN_EXPORT lean_object* l_IO_mkRef___redArg___boxed(lean_object* v_a_4858_, lean_object* v___y_4859_){
_start:
{
lean_object* v_res_4860_; 
v_res_4860_ = l_IO_mkRef___redArg(v_a_4858_);
return v_res_4860_;
}
}
LEAN_EXPORT lean_object* l_IO_mkRef(lean_object* v_00_u03b1_4861_, lean_object* v_a_4862_){
_start:
{
lean_object* v___x_4864_; 
v___x_4864_ = lean_st_mk_ref(v_a_4862_);
return v___x_4864_;
}
}
LEAN_EXPORT lean_object* l_IO_mkRef___boxed(lean_object* v_00_u03b1_4865_, lean_object* v_a_4866_, lean_object* v___y_4867_){
_start:
{
lean_object* v_res_4868_; 
v_res_4868_ = l_IO_mkRef(v_00_u03b1_4865_, v_a_4866_);
return v_res_4868_;
}
}
LEAN_EXPORT lean_object* lean_stream_of_handle(lean_object* v_h_4869_){
_start:
{
lean_object* v___x_4870_; lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; 
lean_inc_n(v_h_4869_, 5);
v___x_4870_ = lean_alloc_closure((void*)(l_IO_FS_Handle_flush___boxed), 2, 1);
lean_closure_set(v___x_4870_, 0, v_h_4869_);
v___x_4871_ = lean_alloc_closure((void*)(l_IO_FS_Handle_read___boxed), 3, 1);
lean_closure_set(v___x_4871_, 0, v_h_4869_);
v___x_4872_ = lean_alloc_closure((void*)(l_IO_FS_Handle_write___boxed), 3, 1);
lean_closure_set(v___x_4872_, 0, v_h_4869_);
v___x_4873_ = lean_alloc_closure((void*)(l_IO_FS_Handle_getLine___boxed), 2, 1);
lean_closure_set(v___x_4873_, 0, v_h_4869_);
v___x_4874_ = lean_alloc_closure((void*)(l_IO_FS_Handle_putStr___boxed), 3, 1);
lean_closure_set(v___x_4874_, 0, v_h_4869_);
v___x_4875_ = lean_alloc_closure((void*)(l_IO_FS_Handle_isTty___boxed), 2, 1);
lean_closure_set(v___x_4875_, 0, v_h_4869_);
v___x_4876_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4876_, 0, v___x_4870_);
lean_ctor_set(v___x_4876_, 1, v___x_4871_);
lean_ctor_set(v___x_4876_, 2, v___x_4872_);
lean_ctor_set(v___x_4876_, 3, v___x_4873_);
lean_ctor_set(v___x_4876_, 4, v___x_4874_);
lean_ctor_set(v___x_4876_, 5, v___x_4875_);
return v___x_4876_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__0(lean_object* v_r_4877_, size_t v_n_4878_){
_start:
{
lean_object* v___x_4880_; lean_object* v_data_4881_; lean_object* v_pos_4882_; lean_object* v___x_4884_; uint8_t v_isShared_4885_; uint8_t v_isSharedCheck_4896_; 
v___x_4880_ = lean_st_ref_take(v_r_4877_);
v_data_4881_ = lean_ctor_get(v___x_4880_, 0);
v_pos_4882_ = lean_ctor_get(v___x_4880_, 1);
v_isSharedCheck_4896_ = !lean_is_exclusive(v___x_4880_);
if (v_isSharedCheck_4896_ == 0)
{
v___x_4884_ = v___x_4880_;
v_isShared_4885_ = v_isSharedCheck_4896_;
goto v_resetjp_4883_;
}
else
{
lean_inc(v_pos_4882_);
lean_inc(v_data_4881_);
lean_dec(v___x_4880_);
v___x_4884_ = lean_box(0);
v_isShared_4885_ = v_isSharedCheck_4896_;
goto v_resetjp_4883_;
}
v_resetjp_4883_:
{
lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v_data_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4892_; 
v___x_4886_ = lean_usize_to_nat(v_n_4878_);
v___x_4887_ = lean_nat_add(v_pos_4882_, v___x_4886_);
lean_dec(v___x_4886_);
lean_inc(v_pos_4882_);
v_data_4888_ = l_ByteArray_extract(v_data_4881_, v_pos_4882_, v___x_4887_);
lean_dec(v___x_4887_);
v___x_4889_ = lean_byte_array_size(v_data_4888_);
v___x_4890_ = lean_nat_add(v_pos_4882_, v___x_4889_);
lean_dec(v_pos_4882_);
if (v_isShared_4885_ == 0)
{
lean_ctor_set(v___x_4884_, 1, v___x_4890_);
v___x_4892_ = v___x_4884_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4895_; 
v_reuseFailAlloc_4895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4895_, 0, v_data_4881_);
lean_ctor_set(v_reuseFailAlloc_4895_, 1, v___x_4890_);
v___x_4892_ = v_reuseFailAlloc_4895_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
lean_object* v___x_4893_; lean_object* v___x_4894_; 
v___x_4893_ = lean_st_ref_put(v_r_4877_, v___x_4892_);
v___x_4894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4894_, 0, v_data_4888_);
return v___x_4894_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__0___boxed(lean_object* v_r_4897_, lean_object* v_n_4898_, lean_object* v___y_4899_){
_start:
{
size_t v_n_boxed_4900_; lean_object* v_res_4901_; 
v_n_boxed_4900_ = lean_unbox_usize(v_n_4898_);
lean_dec(v_n_4898_);
v_res_4901_ = l_IO_FS_Stream_ofBuffer___lam__0(v_r_4897_, v_n_boxed_4900_);
lean_dec(v_r_4897_);
return v_res_4901_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__1(lean_object* v_r_4902_, lean_object* v_data_4903_){
_start:
{
lean_object* v___x_4905_; lean_object* v_data_4906_; lean_object* v_pos_4907_; lean_object* v___x_4909_; uint8_t v_isShared_4910_; uint8_t v_isSharedCheck_4921_; 
v___x_4905_ = lean_st_ref_take(v_r_4902_);
v_data_4906_ = lean_ctor_get(v___x_4905_, 0);
v_pos_4907_ = lean_ctor_get(v___x_4905_, 1);
v_isSharedCheck_4921_ = !lean_is_exclusive(v___x_4905_);
if (v_isSharedCheck_4921_ == 0)
{
v___x_4909_ = v___x_4905_;
v_isShared_4910_ = v_isSharedCheck_4921_;
goto v_resetjp_4908_;
}
else
{
lean_inc(v_pos_4907_);
lean_inc(v_data_4906_);
lean_dec(v___x_4905_);
v___x_4909_ = lean_box(0);
v_isShared_4910_ = v_isSharedCheck_4921_;
goto v_resetjp_4908_;
}
v_resetjp_4908_:
{
lean_object* v___x_4911_; lean_object* v___x_4912_; uint8_t v___x_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4917_; 
v___x_4911_ = lean_unsigned_to_nat(0u);
v___x_4912_ = lean_byte_array_size(v_data_4903_);
v___x_4913_ = 0;
lean_inc(v_pos_4907_);
v___x_4914_ = lean_byte_array_copy_slice(v_data_4903_, v___x_4911_, v_data_4906_, v_pos_4907_, v___x_4912_, v___x_4913_);
v___x_4915_ = lean_nat_add(v_pos_4907_, v___x_4912_);
lean_dec(v_pos_4907_);
if (v_isShared_4910_ == 0)
{
lean_ctor_set(v___x_4909_, 1, v___x_4915_);
lean_ctor_set(v___x_4909_, 0, v___x_4914_);
v___x_4917_ = v___x_4909_;
goto v_reusejp_4916_;
}
else
{
lean_object* v_reuseFailAlloc_4920_; 
v_reuseFailAlloc_4920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4920_, 0, v___x_4914_);
lean_ctor_set(v_reuseFailAlloc_4920_, 1, v___x_4915_);
v___x_4917_ = v_reuseFailAlloc_4920_;
goto v_reusejp_4916_;
}
v_reusejp_4916_:
{
lean_object* v___x_4918_; lean_object* v___x_4919_; 
v___x_4918_ = lean_st_ref_put(v_r_4902_, v___x_4917_);
v___x_4919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4919_, 0, v___x_4918_);
return v___x_4919_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__1___boxed(lean_object* v_r_4922_, lean_object* v_data_4923_, lean_object* v___y_4924_){
_start:
{
lean_object* v_res_4925_; 
v_res_4925_ = l_IO_FS_Stream_ofBuffer___lam__1(v_r_4922_, v_data_4923_);
lean_dec_ref(v_data_4923_);
lean_dec(v_r_4922_);
return v_res_4925_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_findIdx_x3f_loop___at___00IO_FS_Stream_ofBuffer_spec__0(lean_object* v_a_4926_, lean_object* v_i_4927_){
_start:
{
lean_object* v___x_4928_; uint8_t v___x_4929_; 
v___x_4928_ = lean_byte_array_size(v_a_4926_);
v___x_4929_ = lean_nat_dec_lt(v_i_4927_, v___x_4928_);
if (v___x_4929_ == 0)
{
lean_object* v___x_4930_; 
lean_dec(v_i_4927_);
v___x_4930_ = lean_box(0);
return v___x_4930_;
}
else
{
uint8_t v___x_4931_; uint8_t v___x_4932_; uint8_t v___x_4933_; 
v___x_4931_ = lean_byte_array_fget(v_a_4926_, v_i_4927_);
v___x_4932_ = 0;
v___x_4933_ = lean_uint8_dec_eq(v___x_4931_, v___x_4932_);
if (v___x_4933_ == 0)
{
uint8_t v___x_4934_; uint8_t v___x_4935_; 
v___x_4934_ = 10;
v___x_4935_ = lean_uint8_dec_eq(v___x_4931_, v___x_4934_);
if (v___x_4935_ == 0)
{
lean_object* v___x_4936_; lean_object* v___x_4937_; 
v___x_4936_ = lean_unsigned_to_nat(1u);
v___x_4937_ = lean_nat_add(v_i_4927_, v___x_4936_);
lean_dec(v_i_4927_);
v_i_4927_ = v___x_4937_;
goto _start;
}
else
{
lean_object* v___x_4939_; 
v___x_4939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4939_, 0, v_i_4927_);
return v___x_4939_;
}
}
else
{
lean_object* v___x_4940_; 
v___x_4940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4940_, 0, v_i_4927_);
return v___x_4940_;
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_findIdx_x3f_loop___at___00IO_FS_Stream_ofBuffer_spec__0___boxed(lean_object* v_a_4941_, lean_object* v_i_4942_){
_start:
{
lean_object* v_res_4943_; 
v_res_4943_ = l_ByteArray_findIdx_x3f_loop___at___00IO_FS_Stream_ofBuffer_spec__0(v_a_4941_, v_i_4942_);
lean_dec_ref(v_a_4941_);
return v_res_4943_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__2(lean_object* v_r_4947_){
_start:
{
lean_object* v___x_4949_; lean_object* v_data_4950_; lean_object* v_pos_4951_; lean_object* v___x_4953_; uint8_t v_isShared_4954_; uint8_t v_isSharedCheck_4975_; 
v___x_4949_ = lean_st_ref_take(v_r_4947_);
v_data_4950_ = lean_ctor_get(v___x_4949_, 0);
v_pos_4951_ = lean_ctor_get(v___x_4949_, 1);
v_isSharedCheck_4975_ = !lean_is_exclusive(v___x_4949_);
if (v_isSharedCheck_4975_ == 0)
{
v___x_4953_ = v___x_4949_;
v_isShared_4954_ = v_isSharedCheck_4975_;
goto v_resetjp_4952_;
}
else
{
lean_inc(v_pos_4951_);
lean_inc(v_data_4950_);
lean_dec(v___x_4949_);
v___x_4953_ = lean_box(0);
v_isShared_4954_ = v_isSharedCheck_4975_;
goto v_resetjp_4952_;
}
v_resetjp_4952_:
{
lean_object* v___y_4956_; lean_object* v___x_4967_; 
lean_inc(v_pos_4951_);
v___x_4967_ = l_ByteArray_findIdx_x3f_loop___at___00IO_FS_Stream_ofBuffer_spec__0(v_data_4950_, v_pos_4951_);
if (lean_obj_tag(v___x_4967_) == 0)
{
lean_object* v___x_4968_; 
v___x_4968_ = lean_byte_array_size(v_data_4950_);
v___y_4956_ = v___x_4968_;
goto v___jp_4955_;
}
else
{
lean_object* v_val_4969_; uint8_t v___x_4970_; uint8_t v___x_4971_; uint8_t v___x_4972_; 
v_val_4969_ = lean_ctor_get(v___x_4967_, 0);
lean_inc(v_val_4969_);
lean_dec_ref_known(v___x_4967_, 1);
v___x_4970_ = lean_byte_array_get(v_data_4950_, v_val_4969_);
v___x_4971_ = 0;
v___x_4972_ = lean_uint8_dec_eq(v___x_4970_, v___x_4971_);
if (v___x_4972_ == 0)
{
lean_object* v___x_4973_; lean_object* v___x_4974_; 
v___x_4973_ = lean_unsigned_to_nat(1u);
v___x_4974_ = lean_nat_add(v_val_4969_, v___x_4973_);
lean_dec(v_val_4969_);
v___y_4956_ = v___x_4974_;
goto v___jp_4955_;
}
else
{
v___y_4956_ = v_val_4969_;
goto v___jp_4955_;
}
}
v___jp_4955_:
{
lean_object* v___x_4957_; lean_object* v___x_4959_; 
v___x_4957_ = l_ByteArray_extract(v_data_4950_, v_pos_4951_, v___y_4956_);
if (v_isShared_4954_ == 0)
{
lean_ctor_set(v___x_4953_, 1, v___y_4956_);
v___x_4959_ = v___x_4953_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4966_; 
v_reuseFailAlloc_4966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4966_, 0, v_data_4950_);
lean_ctor_set(v_reuseFailAlloc_4966_, 1, v___y_4956_);
v___x_4959_ = v_reuseFailAlloc_4966_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
lean_object* v___x_4960_; uint8_t v___x_4961_; 
v___x_4960_ = lean_st_ref_put(v_r_4947_, v___x_4959_);
v___x_4961_ = lean_string_validate_utf8(v___x_4957_);
if (v___x_4961_ == 0)
{
lean_object* v___x_4962_; lean_object* v___x_4963_; 
lean_dec_ref(v___x_4957_);
v___x_4962_ = ((lean_object*)(l_IO_FS_Stream_ofBuffer___lam__2___closed__1));
v___x_4963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4963_, 0, v___x_4962_);
return v___x_4963_;
}
else
{
lean_object* v___x_4964_; lean_object* v___x_4965_; 
v___x_4964_ = lean_string_from_utf8_unchecked(v___x_4957_);
v___x_4965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4965_, 0, v___x_4964_);
return v___x_4965_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__2___boxed(lean_object* v_r_4976_, lean_object* v___y_4977_){
_start:
{
lean_object* v_res_4978_; 
v_res_4978_ = l_IO_FS_Stream_ofBuffer___lam__2(v_r_4976_);
lean_dec(v_r_4976_);
return v_res_4978_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__3(lean_object* v_r_4979_, lean_object* v_s_4980_){
_start:
{
lean_object* v___x_4982_; lean_object* v_data_4983_; lean_object* v_pos_4984_; lean_object* v___x_4986_; uint8_t v_isShared_4987_; uint8_t v_isSharedCheck_4999_; 
v___x_4982_ = lean_st_ref_take(v_r_4979_);
v_data_4983_ = lean_ctor_get(v___x_4982_, 0);
v_pos_4984_ = lean_ctor_get(v___x_4982_, 1);
v_isSharedCheck_4999_ = !lean_is_exclusive(v___x_4982_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4986_ = v___x_4982_;
v_isShared_4987_ = v_isSharedCheck_4999_;
goto v_resetjp_4985_;
}
else
{
lean_inc(v_pos_4984_);
lean_inc(v_data_4983_);
lean_dec(v___x_4982_);
v___x_4986_ = lean_box(0);
v_isShared_4987_ = v_isSharedCheck_4999_;
goto v_resetjp_4985_;
}
v_resetjp_4985_:
{
lean_object* v_data_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; uint8_t v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4995_; 
v_data_4988_ = lean_string_to_utf8(v_s_4980_);
v___x_4989_ = lean_unsigned_to_nat(0u);
v___x_4990_ = lean_byte_array_size(v_data_4988_);
v___x_4991_ = 0;
lean_inc(v_pos_4984_);
v___x_4992_ = lean_byte_array_copy_slice(v_data_4988_, v___x_4989_, v_data_4983_, v_pos_4984_, v___x_4990_, v___x_4991_);
lean_dec_ref(v_data_4988_);
v___x_4993_ = lean_nat_add(v_pos_4984_, v___x_4990_);
lean_dec(v_pos_4984_);
if (v_isShared_4987_ == 0)
{
lean_ctor_set(v___x_4986_, 1, v___x_4993_);
lean_ctor_set(v___x_4986_, 0, v___x_4992_);
v___x_4995_ = v___x_4986_;
goto v_reusejp_4994_;
}
else
{
lean_object* v_reuseFailAlloc_4998_; 
v_reuseFailAlloc_4998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4998_, 0, v___x_4992_);
lean_ctor_set(v_reuseFailAlloc_4998_, 1, v___x_4993_);
v___x_4995_ = v_reuseFailAlloc_4998_;
goto v_reusejp_4994_;
}
v_reusejp_4994_:
{
lean_object* v___x_4996_; lean_object* v___x_4997_; 
v___x_4996_ = lean_st_ref_put(v_r_4979_, v___x_4995_);
v___x_4997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4997_, 0, v___x_4996_);
return v___x_4997_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__3___boxed(lean_object* v_r_5000_, lean_object* v_s_5001_, lean_object* v___y_5002_){
_start:
{
lean_object* v_res_5003_; 
v_res_5003_ = l_IO_FS_Stream_ofBuffer___lam__3(v_r_5000_, v_s_5001_);
lean_dec_ref(v_s_5001_);
lean_dec(v_r_5000_);
return v_res_5003_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__4(lean_object* v___x_5004_){
_start:
{
lean_object* v___x_5006_; 
v___x_5006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5006_, 0, v___x_5004_);
return v___x_5006_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__4___boxed(lean_object* v___x_5007_, lean_object* v___y_5008_){
_start:
{
lean_object* v_res_5009_; 
v_res_5009_ = l_IO_FS_Stream_ofBuffer___lam__4(v___x_5007_);
return v_res_5009_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer(lean_object* v_r_5012_){
_start:
{
lean_object* v___f_5013_; lean_object* v___f_5014_; lean_object* v___f_5015_; lean_object* v___f_5016_; lean_object* v___f_5017_; lean_object* v___f_5018_; lean_object* v___x_5019_; 
lean_inc_n(v_r_5012_, 3);
v___f_5013_ = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___lam__0___boxed), 3, 1);
lean_closure_set(v___f_5013_, 0, v_r_5012_);
v___f_5014_ = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___lam__1___boxed), 3, 1);
lean_closure_set(v___f_5014_, 0, v_r_5012_);
v___f_5015_ = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___lam__2___boxed), 2, 1);
lean_closure_set(v___f_5015_, 0, v_r_5012_);
v___f_5016_ = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___lam__3___boxed), 3, 1);
lean_closure_set(v___f_5016_, 0, v_r_5012_);
v___f_5017_ = ((lean_object*)(l_IO_FS_Stream_ofBuffer___closed__0));
v___f_5018_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___closed__5));
v___x_5019_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5019_, 0, v___f_5017_);
lean_ctor_set(v___x_5019_, 1, v___f_5013_);
lean_ctor_set(v___x_5019_, 2, v___f_5014_);
lean_ctor_set(v___x_5019_, 3, v___f_5015_);
lean_ctor_set(v___x_5019_, 4, v___f_5016_);
lean_ctor_set(v___x_5019_, 5, v___f_5018_);
return v___x_5019_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop(lean_object* v_s_5022_, lean_object* v_acc_5023_){
_start:
{
lean_object* v_read_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; 
v_read_5025_ = lean_ctor_get(v_s_5022_, 1);
v___x_5026_ = ((lean_object*)(l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop___boxed__const__1));
lean_inc_ref(v_read_5025_);
v___x_5027_ = lean_apply_2(v_read_5025_, v___x_5026_, lean_box(0));
if (lean_obj_tag(v___x_5027_) == 0)
{
lean_object* v_a_5028_; lean_object* v___x_5030_; uint8_t v_isShared_5031_; uint8_t v_isSharedCheck_5041_; 
v_a_5028_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5041_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5041_ == 0)
{
v___x_5030_ = v___x_5027_;
v_isShared_5031_ = v_isSharedCheck_5041_;
goto v_resetjp_5029_;
}
else
{
lean_inc(v_a_5028_);
lean_dec(v___x_5027_);
v___x_5030_ = lean_box(0);
v_isShared_5031_ = v_isSharedCheck_5041_;
goto v_resetjp_5029_;
}
v_resetjp_5029_:
{
uint8_t v___x_5032_; 
v___x_5032_ = l_ByteArray_isEmpty(v_a_5028_);
if (v___x_5032_ == 0)
{
lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; 
lean_del_object(v___x_5030_);
v___x_5033_ = lean_unsigned_to_nat(0u);
v___x_5034_ = lean_byte_array_size(v_acc_5023_);
v___x_5035_ = lean_byte_array_size(v_a_5028_);
v___x_5036_ = lean_byte_array_copy_slice(v_a_5028_, v___x_5033_, v_acc_5023_, v___x_5034_, v___x_5035_, v___x_5032_);
lean_dec(v_a_5028_);
v_acc_5023_ = v___x_5036_;
goto _start;
}
else
{
lean_object* v___x_5039_; 
lean_dec(v_a_5028_);
lean_dec_ref(v_s_5022_);
if (v_isShared_5031_ == 0)
{
lean_ctor_set(v___x_5030_, 0, v_acc_5023_);
v___x_5039_ = v___x_5030_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v_acc_5023_);
v___x_5039_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
return v___x_5039_;
}
}
}
}
else
{
lean_dec_ref(v_acc_5023_);
lean_dec_ref(v_s_5022_);
return v___x_5027_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop___boxed(lean_object* v_s_5042_, lean_object* v_acc_5043_, lean_object* v___y_5044_){
_start:
{
lean_object* v_res_5045_; 
v_res_5045_ = l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop(v_s_5042_, v_acc_5043_);
return v_res_5045_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEndInto(lean_object* v_s_5046_, lean_object* v_buf_5047_){
_start:
{
lean_object* v___x_5049_; 
v___x_5049_ = l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop(v_s_5046_, v_buf_5047_);
return v___x_5049_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEndInto___boxed(lean_object* v_s_5050_, lean_object* v_buf_5051_, lean_object* v___y_5052_){
_start:
{
lean_object* v_res_5053_; 
v_res_5053_ = l_IO_FS_Stream_readBinToEndInto(v_s_5050_, v_buf_5051_);
return v_res_5053_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEnd(lean_object* v_s_5054_){
_start:
{
lean_object* v___x_5056_; lean_object* v___x_5057_; 
v___x_5056_ = l_ByteArray_empty;
v___x_5057_ = l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop(v_s_5054_, v___x_5056_);
return v___x_5057_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEnd___boxed(lean_object* v_s_5058_, lean_object* v___y_5059_){
_start:
{
lean_object* v_res_5060_; 
v_res_5060_ = l_IO_FS_Stream_readBinToEnd(v_s_5058_);
return v_res_5060_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readToEnd(lean_object* v_s_5064_){
_start:
{
lean_object* v___x_5066_; 
v___x_5066_ = l_IO_FS_Stream_readBinToEnd(v_s_5064_);
if (lean_obj_tag(v___x_5066_) == 0)
{
lean_object* v_a_5067_; lean_object* v___x_5069_; uint8_t v_isShared_5070_; uint8_t v_isSharedCheck_5080_; 
v_a_5067_ = lean_ctor_get(v___x_5066_, 0);
v_isSharedCheck_5080_ = !lean_is_exclusive(v___x_5066_);
if (v_isSharedCheck_5080_ == 0)
{
v___x_5069_ = v___x_5066_;
v_isShared_5070_ = v_isSharedCheck_5080_;
goto v_resetjp_5068_;
}
else
{
lean_inc(v_a_5067_);
lean_dec(v___x_5066_);
v___x_5069_ = lean_box(0);
v_isShared_5070_ = v_isSharedCheck_5080_;
goto v_resetjp_5068_;
}
v_resetjp_5068_:
{
uint8_t v___x_5071_; 
v___x_5071_ = lean_string_validate_utf8(v_a_5067_);
if (v___x_5071_ == 0)
{
lean_object* v___x_5072_; lean_object* v___x_5074_; 
lean_dec(v_a_5067_);
v___x_5072_ = ((lean_object*)(l_IO_FS_Stream_readToEnd___closed__1));
if (v_isShared_5070_ == 0)
{
lean_ctor_set_tag(v___x_5069_, 1);
lean_ctor_set(v___x_5069_, 0, v___x_5072_);
v___x_5074_ = v___x_5069_;
goto v_reusejp_5073_;
}
else
{
lean_object* v_reuseFailAlloc_5075_; 
v_reuseFailAlloc_5075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5075_, 0, v___x_5072_);
v___x_5074_ = v_reuseFailAlloc_5075_;
goto v_reusejp_5073_;
}
v_reusejp_5073_:
{
return v___x_5074_;
}
}
else
{
lean_object* v___x_5076_; lean_object* v___x_5078_; 
v___x_5076_ = lean_string_from_utf8_unchecked(v_a_5067_);
if (v_isShared_5070_ == 0)
{
lean_ctor_set(v___x_5069_, 0, v___x_5076_);
v___x_5078_ = v___x_5069_;
goto v_reusejp_5077_;
}
else
{
lean_object* v_reuseFailAlloc_5079_; 
v_reuseFailAlloc_5079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5079_, 0, v___x_5076_);
v___x_5078_ = v_reuseFailAlloc_5079_;
goto v_reusejp_5077_;
}
v_reusejp_5077_:
{
return v___x_5078_;
}
}
}
}
else
{
lean_object* v_a_5081_; lean_object* v___x_5083_; uint8_t v_isShared_5084_; uint8_t v_isSharedCheck_5088_; 
v_a_5081_ = lean_ctor_get(v___x_5066_, 0);
v_isSharedCheck_5088_ = !lean_is_exclusive(v___x_5066_);
if (v_isSharedCheck_5088_ == 0)
{
v___x_5083_ = v___x_5066_;
v_isShared_5084_ = v_isSharedCheck_5088_;
goto v_resetjp_5082_;
}
else
{
lean_inc(v_a_5081_);
lean_dec(v___x_5066_);
v___x_5083_ = lean_box(0);
v_isShared_5084_ = v_isSharedCheck_5088_;
goto v_resetjp_5082_;
}
v_resetjp_5082_:
{
lean_object* v___x_5086_; 
if (v_isShared_5084_ == 0)
{
v___x_5086_ = v___x_5083_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5087_; 
v_reuseFailAlloc_5087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5087_, 0, v_a_5081_);
v___x_5086_ = v_reuseFailAlloc_5087_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
return v___x_5086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readToEnd___boxed(lean_object* v_s_5089_, lean_object* v___y_5090_){
_start:
{
lean_object* v_res_5091_; 
v_res_5091_ = l_IO_FS_Stream_readToEnd(v_s_5089_);
return v_res_5091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_lines_read(lean_object* v_s_5092_, lean_object* v_lines_5093_){
_start:
{
lean_object* v_getLine_5095_; lean_object* v___x_5096_; 
v_getLine_5095_ = lean_ctor_get(v_s_5092_, 3);
lean_inc_ref(v_getLine_5095_);
v___x_5096_ = lean_apply_1(v_getLine_5095_, lean_box(0));
if (lean_obj_tag(v___x_5096_) == 0)
{
lean_object* v_a_5097_; lean_object* v___x_5099_; uint8_t v_isShared_5100_; uint8_t v_isSharedCheck_5151_; 
v_a_5097_ = lean_ctor_get(v___x_5096_, 0);
v_isSharedCheck_5151_ = !lean_is_exclusive(v___x_5096_);
if (v_isSharedCheck_5151_ == 0)
{
v___x_5099_ = v___x_5096_;
v_isShared_5100_ = v_isSharedCheck_5151_;
goto v_resetjp_5098_;
}
else
{
lean_inc(v_a_5097_);
lean_dec(v___x_5096_);
v___x_5099_ = lean_box(0);
v_isShared_5100_ = v_isSharedCheck_5151_;
goto v_resetjp_5098_;
}
v_resetjp_5098_:
{
lean_object* v___y_5102_; lean_object* v___y_5106_; lean_object* v___y_5107_; lean_object* v___y_5108_; uint32_t v___y_5109_; uint32_t v___y_5117_; lean_object* v___x_5139_; lean_object* v___x_5140_; uint8_t v___x_5141_; 
v___x_5139_ = lean_string_utf8_byte_size(v_a_5097_);
v___x_5140_ = lean_unsigned_to_nat(0u);
v___x_5141_ = lean_nat_dec_eq(v___x_5139_, v___x_5140_);
if (v___x_5141_ == 0)
{
lean_object* v___x_5142_; lean_object* v___x_5143_; 
lean_inc(v_a_5097_);
v___x_5142_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5142_, 0, v_a_5097_);
lean_ctor_set(v___x_5142_, 1, v___x_5140_);
lean_ctor_set(v___x_5142_, 2, v___x_5139_);
v___x_5143_ = l_String_Slice_Pos_prev_x3f(v___x_5142_, v___x_5139_);
if (lean_obj_tag(v___x_5143_) == 0)
{
uint32_t v___x_5144_; 
lean_dec_ref_known(v___x_5142_, 3);
v___x_5144_ = 65;
v___y_5117_ = v___x_5144_;
goto v___jp_5116_;
}
else
{
lean_object* v_val_5145_; lean_object* v___x_5146_; 
v_val_5145_ = lean_ctor_get(v___x_5143_, 0);
lean_inc(v_val_5145_);
lean_dec_ref_known(v___x_5143_, 1);
v___x_5146_ = l_String_Slice_Pos_get_x3f(v___x_5142_, v_val_5145_);
lean_dec(v_val_5145_);
lean_dec_ref_known(v___x_5142_, 3);
if (lean_obj_tag(v___x_5146_) == 0)
{
uint32_t v___x_5147_; 
v___x_5147_ = 65;
v___y_5117_ = v___x_5147_;
goto v___jp_5116_;
}
else
{
lean_object* v_val_5148_; uint32_t v___x_5149_; 
v_val_5148_ = lean_ctor_get(v___x_5146_, 0);
lean_inc(v_val_5148_);
lean_dec_ref_known(v___x_5146_, 1);
v___x_5149_ = lean_unbox_uint32(v_val_5148_);
lean_dec(v_val_5148_);
v___y_5117_ = v___x_5149_;
goto v___jp_5116_;
}
}
}
else
{
lean_object* v___x_5150_; 
lean_del_object(v___x_5099_);
lean_dec(v_a_5097_);
lean_dec_ref(v_s_5092_);
v___x_5150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5150_, 0, v_lines_5093_);
return v___x_5150_;
}
v___jp_5101_:
{
lean_object* v___x_5103_; 
v___x_5103_ = lean_array_push(v_lines_5093_, v___y_5102_);
v_lines_5093_ = v___x_5103_;
goto _start;
}
v___jp_5105_:
{
uint32_t v___x_5110_; uint8_t v___x_5111_; 
v___x_5110_ = 13;
v___x_5111_ = lean_uint32_dec_eq(v___y_5109_, v___x_5110_);
if (v___x_5111_ == 0)
{
lean_dec(v___y_5108_);
lean_dec(v___y_5106_);
v___y_5102_ = v___y_5107_;
goto v___jp_5101_;
}
else
{
lean_object* v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; 
v___x_5112_ = lean_string_utf8_byte_size(v___y_5107_);
lean_inc(v___y_5108_);
lean_inc_ref(v___y_5107_);
v___x_5113_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5113_, 0, v___y_5107_);
lean_ctor_set(v___x_5113_, 1, v___y_5108_);
lean_ctor_set(v___x_5113_, 2, v___x_5112_);
v___x_5114_ = l_String_Slice_Pos_prevn(v___x_5113_, v___x_5112_, v___y_5106_);
lean_dec_ref_known(v___x_5113_, 3);
v___x_5115_ = lean_string_utf8_extract_fast(v___y_5107_, v___y_5108_, v___x_5114_);
lean_dec(v___x_5114_);
lean_dec(v___y_5108_);
lean_dec_ref(v___y_5107_);
v___y_5102_ = v___x_5115_;
goto v___jp_5101_;
}
}
v___jp_5116_:
{
uint32_t v___x_5118_; uint8_t v___x_5119_; 
v___x_5118_ = 10;
v___x_5119_ = lean_uint32_dec_eq(v___y_5117_, v___x_5118_);
if (v___x_5119_ == 0)
{
lean_object* v___x_5120_; lean_object* v___x_5122_; 
lean_dec_ref(v_s_5092_);
v___x_5120_ = lean_array_push(v_lines_5093_, v_a_5097_);
if (v_isShared_5100_ == 0)
{
lean_ctor_set(v___x_5099_, 0, v___x_5120_);
v___x_5122_ = v___x_5099_;
goto v_reusejp_5121_;
}
else
{
lean_object* v_reuseFailAlloc_5123_; 
v_reuseFailAlloc_5123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5123_, 0, v___x_5120_);
v___x_5122_ = v_reuseFailAlloc_5123_;
goto v_reusejp_5121_;
}
v_reusejp_5121_:
{
return v___x_5122_;
}
}
else
{
lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v___x_5132_; 
lean_del_object(v___x_5099_);
v___x_5124_ = lean_unsigned_to_nat(1u);
v___x_5125_ = lean_unsigned_to_nat(0u);
v___x_5126_ = lean_string_utf8_byte_size(v_a_5097_);
lean_inc(v_a_5097_);
v___x_5127_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5127_, 0, v_a_5097_);
lean_ctor_set(v___x_5127_, 1, v___x_5125_);
lean_ctor_set(v___x_5127_, 2, v___x_5126_);
v___x_5128_ = l_String_Slice_Pos_prevn(v___x_5127_, v___x_5126_, v___x_5124_);
lean_dec_ref_known(v___x_5127_, 3);
v___x_5129_ = lean_string_utf8_extract_fast(v_a_5097_, v___x_5125_, v___x_5128_);
lean_dec(v___x_5128_);
lean_dec(v_a_5097_);
v___x_5130_ = lean_string_utf8_byte_size(v___x_5129_);
lean_inc_ref(v___x_5129_);
v___x_5131_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5131_, 0, v___x_5129_);
lean_ctor_set(v___x_5131_, 1, v___x_5125_);
lean_ctor_set(v___x_5131_, 2, v___x_5130_);
v___x_5132_ = l_String_Slice_Pos_prev_x3f(v___x_5131_, v___x_5130_);
if (lean_obj_tag(v___x_5132_) == 0)
{
uint32_t v___x_5133_; 
lean_dec_ref_known(v___x_5131_, 3);
v___x_5133_ = 65;
v___y_5106_ = v___x_5124_;
v___y_5107_ = v___x_5129_;
v___y_5108_ = v___x_5125_;
v___y_5109_ = v___x_5133_;
goto v___jp_5105_;
}
else
{
lean_object* v_val_5134_; lean_object* v___x_5135_; 
v_val_5134_ = lean_ctor_get(v___x_5132_, 0);
lean_inc(v_val_5134_);
lean_dec_ref_known(v___x_5132_, 1);
v___x_5135_ = l_String_Slice_Pos_get_x3f(v___x_5131_, v_val_5134_);
lean_dec(v_val_5134_);
lean_dec_ref_known(v___x_5131_, 3);
if (lean_obj_tag(v___x_5135_) == 0)
{
uint32_t v___x_5136_; 
v___x_5136_ = 65;
v___y_5106_ = v___x_5124_;
v___y_5107_ = v___x_5129_;
v___y_5108_ = v___x_5125_;
v___y_5109_ = v___x_5136_;
goto v___jp_5105_;
}
else
{
lean_object* v_val_5137_; uint32_t v___x_5138_; 
v_val_5137_ = lean_ctor_get(v___x_5135_, 0);
lean_inc(v_val_5137_);
lean_dec_ref_known(v___x_5135_, 1);
v___x_5138_ = lean_unbox_uint32(v_val_5137_);
lean_dec(v_val_5137_);
v___y_5106_ = v___x_5124_;
v___y_5107_ = v___x_5129_;
v___y_5108_ = v___x_5125_;
v___y_5109_ = v___x_5138_;
goto v___jp_5105_;
}
}
}
}
}
}
else
{
lean_object* v_a_5152_; lean_object* v___x_5154_; uint8_t v_isShared_5155_; uint8_t v_isSharedCheck_5159_; 
lean_dec_ref(v_lines_5093_);
lean_dec_ref(v_s_5092_);
v_a_5152_ = lean_ctor_get(v___x_5096_, 0);
v_isSharedCheck_5159_ = !lean_is_exclusive(v___x_5096_);
if (v_isSharedCheck_5159_ == 0)
{
v___x_5154_ = v___x_5096_;
v_isShared_5155_ = v_isSharedCheck_5159_;
goto v_resetjp_5153_;
}
else
{
lean_inc(v_a_5152_);
lean_dec(v___x_5096_);
v___x_5154_ = lean_box(0);
v_isShared_5155_ = v_isSharedCheck_5159_;
goto v_resetjp_5153_;
}
v_resetjp_5153_:
{
lean_object* v___x_5157_; 
if (v_isShared_5155_ == 0)
{
v___x_5157_ = v___x_5154_;
goto v_reusejp_5156_;
}
else
{
lean_object* v_reuseFailAlloc_5158_; 
v_reuseFailAlloc_5158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5158_, 0, v_a_5152_);
v___x_5157_ = v_reuseFailAlloc_5158_;
goto v_reusejp_5156_;
}
v_reusejp_5156_:
{
return v___x_5157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_lines_read___boxed(lean_object* v_s_5160_, lean_object* v_lines_5161_, lean_object* v___y_5162_){
_start:
{
lean_object* v_res_5163_; 
v_res_5163_ = l___private_Init_System_IO_0__IO_FS_Stream_lines_read(v_s_5160_, v_lines_5161_);
return v_res_5163_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_lines(lean_object* v_s_5164_){
_start:
{
lean_object* v___x_5166_; lean_object* v___x_5167_; 
v___x_5166_ = ((lean_object*)(l_IO_FS_Handle_lines___closed__0));
v___x_5167_ = l___private_Init_System_IO_0__IO_FS_Stream_lines_read(v_s_5164_, v___x_5166_);
return v___x_5167_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_lines___boxed(lean_object* v_s_5168_, lean_object* v___y_5169_){
_start:
{
lean_object* v_res_5170_; 
v_res_5170_ = l_IO_FS_Stream_lines(v_s_5168_);
return v_res_5170_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__0(lean_object* v_bOut_5171_){
_start:
{
lean_object* v___x_5173_; 
v___x_5173_ = lean_st_ref_get(v_bOut_5171_);
return v___x_5173_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__0___boxed(lean_object* v_bOut_5174_, lean_object* v___y_5175_){
_start:
{
lean_object* v_res_5176_; 
v_res_5176_ = l_IO_FS_withIsolatedStreams___redArg___lam__0(v_bOut_5174_);
lean_dec(v_bOut_5174_);
return v_res_5176_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; 
v___x_5181_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__3));
v___x_5182_ = lean_unsigned_to_nat(46u);
v___x_5183_ = lean_unsigned_to_nat(193u);
v___x_5184_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__2));
v___x_5185_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__1));
v___x_5186_ = l_mkPanicMessageWithDecl(v___x_5185_, v___x_5184_, v___x_5183_, v___x_5182_, v___x_5181_);
return v___x_5186_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__1(lean_object* v_r_5187_, lean_object* v_toPure_5188_, lean_object* v_bOut_5189_){
_start:
{
lean_object* v___y_5191_; lean_object* v_data_5194_; uint8_t v___x_5195_; 
v_data_5194_ = lean_ctor_get(v_bOut_5189_, 0);
lean_inc_ref(v_data_5194_);
lean_dec_ref(v_bOut_5189_);
v___x_5195_ = lean_string_validate_utf8(v_data_5194_);
if (v___x_5195_ == 0)
{
lean_object* v___x_5196_; lean_object* v___x_5197_; lean_object* v___x_5198_; 
lean_dec_ref(v_data_5194_);
v___x_5196_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__0));
v___x_5197_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__4, &l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__4_once, _init_l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__4);
v___x_5198_ = l_panic___redArg(v___x_5196_, v___x_5197_);
v___y_5191_ = v___x_5198_;
goto v___jp_5190_;
}
else
{
lean_object* v___x_5199_; 
v___x_5199_ = lean_string_from_utf8_unchecked(v_data_5194_);
v___y_5191_ = v___x_5199_;
goto v___jp_5190_;
}
v___jp_5190_:
{
lean_object* v___x_5192_; lean_object* v___x_5193_; 
v___x_5192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5192_, 0, v___y_5191_);
lean_ctor_set(v___x_5192_, 1, v_r_5187_);
v___x_5193_ = lean_apply_2(v_toPure_5188_, lean_box(0), v___x_5192_);
return v___x_5193_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__2(lean_object* v_toPure_5200_, lean_object* v_inst_5201_, lean_object* v___f_5202_, lean_object* v_toBind_5203_, lean_object* v_r_5204_){
_start:
{
lean_object* v___f_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; 
v___f_5205_ = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___redArg___lam__1), 3, 2);
lean_closure_set(v___f_5205_, 0, v_r_5204_);
lean_closure_set(v___f_5205_, 1, v_toPure_5200_);
v___x_5206_ = lean_apply_2(v_inst_5201_, lean_box(0), v___f_5202_);
v___x_5207_ = lean_apply_4(v_toBind_5203_, lean_box(0), lean_box(0), v___x_5206_, v___f_5205_);
return v___x_5207_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__3(lean_object* v_toPure_5208_, lean_object* v_inst_5209_, lean_object* v_toBind_5210_, lean_object* v_bIn_5211_, lean_object* v_inst_5212_, lean_object* v_inst_5213_, uint8_t v_isolateStderr_5214_, lean_object* v_x_5215_, lean_object* v_bOut_5216_){
_start:
{
lean_object* v___f_5217_; lean_object* v___f_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; lean_object* v___y_5222_; 
lean_inc(v_bOut_5216_);
v___f_5217_ = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_5217_, 0, v_bOut_5216_);
lean_inc(v_toBind_5210_);
lean_inc(v_inst_5209_);
v___f_5218_ = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___redArg___lam__2), 5, 4);
lean_closure_set(v___f_5218_, 0, v_toPure_5208_);
lean_closure_set(v___f_5218_, 1, v_inst_5209_);
lean_closure_set(v___f_5218_, 2, v___f_5217_);
lean_closure_set(v___f_5218_, 3, v_toBind_5210_);
v___x_5219_ = l_IO_FS_Stream_ofBuffer(v_bIn_5211_);
v___x_5220_ = l_IO_FS_Stream_ofBuffer(v_bOut_5216_);
if (v_isolateStderr_5214_ == 0)
{
v___y_5222_ = v_x_5215_;
goto v___jp_5221_;
}
else
{
lean_object* v___x_5226_; 
lean_inc_ref(v___x_5220_);
lean_inc(v_inst_5209_);
lean_inc(v_inst_5213_);
lean_inc_ref(v_inst_5212_);
v___x_5226_ = l_IO_withStderr___redArg(v_inst_5212_, v_inst_5213_, v_inst_5209_, v___x_5220_, v_x_5215_);
v___y_5222_ = v___x_5226_;
goto v___jp_5221_;
}
v___jp_5221_:
{
lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; 
lean_inc(v_inst_5209_);
lean_inc(v_inst_5213_);
lean_inc_ref(v_inst_5212_);
v___x_5223_ = l_IO_withStdout___redArg(v_inst_5212_, v_inst_5213_, v_inst_5209_, v___x_5220_, v___y_5222_);
v___x_5224_ = l_IO_withStdin___redArg(v_inst_5212_, v_inst_5213_, v_inst_5209_, v___x_5219_, v___x_5223_);
v___x_5225_ = lean_apply_4(v_toBind_5210_, lean_box(0), lean_box(0), v___x_5224_, v___f_5218_);
return v___x_5225_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__3___boxed(lean_object* v_toPure_5227_, lean_object* v_inst_5228_, lean_object* v_toBind_5229_, lean_object* v_bIn_5230_, lean_object* v_inst_5231_, lean_object* v_inst_5232_, lean_object* v_isolateStderr_5233_, lean_object* v_x_5234_, lean_object* v_bOut_5235_){
_start:
{
uint8_t v_isolateStderr_boxed_5236_; lean_object* v_res_5237_; 
v_isolateStderr_boxed_5236_ = lean_unbox(v_isolateStderr_5233_);
v_res_5237_ = l_IO_FS_withIsolatedStreams___redArg___lam__3(v_toPure_5227_, v_inst_5228_, v_toBind_5229_, v_bIn_5230_, v_inst_5231_, v_inst_5232_, v_isolateStderr_boxed_5236_, v_x_5234_, v_bOut_5235_);
return v_res_5237_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__4(lean_object* v_toPure_5238_, lean_object* v_inst_5239_, lean_object* v_toBind_5240_, lean_object* v_inst_5241_, lean_object* v_inst_5242_, uint8_t v_isolateStderr_5243_, lean_object* v_x_5244_, lean_object* v___x_5245_, lean_object* v_bIn_5246_){
_start:
{
lean_object* v___x_5247_; lean_object* v___f_5248_; lean_object* v___x_5249_; 
v___x_5247_ = lean_box(v_isolateStderr_5243_);
lean_inc(v_toBind_5240_);
v___f_5248_ = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_5248_, 0, v_toPure_5238_);
lean_closure_set(v___f_5248_, 1, v_inst_5239_);
lean_closure_set(v___f_5248_, 2, v_toBind_5240_);
lean_closure_set(v___f_5248_, 3, v_bIn_5246_);
lean_closure_set(v___f_5248_, 4, v_inst_5241_);
lean_closure_set(v___f_5248_, 5, v_inst_5242_);
lean_closure_set(v___f_5248_, 6, v___x_5247_);
lean_closure_set(v___f_5248_, 7, v_x_5244_);
v___x_5249_ = lean_apply_4(v_toBind_5240_, lean_box(0), lean_box(0), v___x_5245_, v___f_5248_);
return v___x_5249_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__4___boxed(lean_object* v_toPure_5250_, lean_object* v_inst_5251_, lean_object* v_toBind_5252_, lean_object* v_inst_5253_, lean_object* v_inst_5254_, lean_object* v_isolateStderr_5255_, lean_object* v_x_5256_, lean_object* v___x_5257_, lean_object* v_bIn_5258_){
_start:
{
uint8_t v_isolateStderr_boxed_5259_; lean_object* v_res_5260_; 
v_isolateStderr_boxed_5259_ = lean_unbox(v_isolateStderr_5255_);
v_res_5260_ = l_IO_FS_withIsolatedStreams___redArg___lam__4(v_toPure_5250_, v_inst_5251_, v_toBind_5252_, v_inst_5253_, v_inst_5254_, v_isolateStderr_boxed_5259_, v_x_5256_, v___x_5257_, v_bIn_5258_);
return v_res_5260_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___redArg___closed__0(void){
_start:
{
lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5261_ = lean_unsigned_to_nat(0u);
v___x_5262_ = l_ByteArray_empty;
v___x_5263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5263_, 0, v___x_5262_);
lean_ctor_set(v___x_5263_, 1, v___x_5261_);
return v___x_5263_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___redArg___closed__1(void){
_start:
{
lean_object* v___x_5264_; lean_object* v___x_5265_; 
v___x_5264_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___redArg___closed__0, &l_IO_FS_withIsolatedStreams___redArg___closed__0_once, _init_l_IO_FS_withIsolatedStreams___redArg___closed__0);
v___x_5265_ = lean_alloc_closure((void*)(l_IO_mkRef___boxed), 3, 2);
lean_closure_set(v___x_5265_, 0, lean_box(0));
lean_closure_set(v___x_5265_, 1, v___x_5264_);
return v___x_5265_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg(lean_object* v_inst_5266_, lean_object* v_inst_5267_, lean_object* v_inst_5268_, lean_object* v_x_5269_, uint8_t v_isolateStderr_5270_){
_start:
{
lean_object* v_toApplicative_5271_; lean_object* v_toBind_5272_; lean_object* v_toPure_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___f_5277_; lean_object* v___x_5278_; 
v_toApplicative_5271_ = lean_ctor_get(v_inst_5266_, 0);
v_toBind_5272_ = lean_ctor_get(v_inst_5266_, 1);
lean_inc_n(v_toBind_5272_, 2);
v_toPure_5273_ = lean_ctor_get(v_toApplicative_5271_, 1);
lean_inc(v_toPure_5273_);
v___x_5274_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___redArg___closed__1, &l_IO_FS_withIsolatedStreams___redArg___closed__1_once, _init_l_IO_FS_withIsolatedStreams___redArg___closed__1);
lean_inc(v_inst_5268_);
v___x_5275_ = lean_apply_2(v_inst_5268_, lean_box(0), v___x_5274_);
v___x_5276_ = lean_box(v_isolateStderr_5270_);
lean_inc(v___x_5275_);
v___f_5277_ = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___redArg___lam__4___boxed), 9, 8);
lean_closure_set(v___f_5277_, 0, v_toPure_5273_);
lean_closure_set(v___f_5277_, 1, v_inst_5268_);
lean_closure_set(v___f_5277_, 2, v_toBind_5272_);
lean_closure_set(v___f_5277_, 3, v_inst_5266_);
lean_closure_set(v___f_5277_, 4, v_inst_5267_);
lean_closure_set(v___f_5277_, 5, v___x_5276_);
lean_closure_set(v___f_5277_, 6, v_x_5269_);
lean_closure_set(v___f_5277_, 7, v___x_5275_);
v___x_5278_ = lean_apply_4(v_toBind_5272_, lean_box(0), lean_box(0), v___x_5275_, v___f_5277_);
return v___x_5278_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___boxed(lean_object* v_inst_5279_, lean_object* v_inst_5280_, lean_object* v_inst_5281_, lean_object* v_x_5282_, lean_object* v_isolateStderr_5283_){
_start:
{
uint8_t v_isolateStderr_boxed_5284_; lean_object* v_res_5285_; 
v_isolateStderr_boxed_5284_ = lean_unbox(v_isolateStderr_5283_);
v_res_5285_ = l_IO_FS_withIsolatedStreams___redArg(v_inst_5279_, v_inst_5280_, v_inst_5281_, v_x_5282_, v_isolateStderr_boxed_5284_);
return v_res_5285_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams(lean_object* v_m_5286_, lean_object* v_00_u03b1_5287_, lean_object* v_inst_5288_, lean_object* v_inst_5289_, lean_object* v_inst_5290_, lean_object* v_x_5291_, uint8_t v_isolateStderr_5292_){
_start:
{
lean_object* v___x_5293_; 
v___x_5293_ = l_IO_FS_withIsolatedStreams___redArg(v_inst_5288_, v_inst_5289_, v_inst_5290_, v_x_5291_, v_isolateStderr_5292_);
return v___x_5293_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___boxed(lean_object* v_m_5294_, lean_object* v_00_u03b1_5295_, lean_object* v_inst_5296_, lean_object* v_inst_5297_, lean_object* v_inst_5298_, lean_object* v_x_5299_, lean_object* v_isolateStderr_5300_){
_start:
{
uint8_t v_isolateStderr_boxed_5301_; lean_object* v_res_5302_; 
v_isolateStderr_boxed_5301_ = lean_unbox(v_isolateStderr_5300_);
v_res_5302_ = l_IO_FS_withIsolatedStreams(v_m_5294_, v_00_u03b1_5295_, v_inst_5296_, v_inst_5297_, v_inst_5298_, v_x_5299_, v_isolateStderr_boxed_5301_);
return v_res_5302_;
}
}
static lean_object* _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9(void){
_start:
{
lean_object* v___x_5359_; lean_object* v___x_5360_; 
v___x_5359_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__0));
v___x_5360_ = l_String_toRawSubstring_x27(v___x_5359_);
return v___x_5360_;
}
}
static lean_object* _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17(void){
_start:
{
lean_object* v___x_5375_; lean_object* v___x_5376_; 
v___x_5375_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__16));
v___x_5376_ = l_String_toRawSubstring_x27(v___x_5375_);
return v___x_5376_;
}
}
static lean_object* _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24(void){
_start:
{
lean_object* v___x_5389_; lean_object* v___x_5390_; 
v___x_5389_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__18));
v___x_5390_ = l_String_toRawSubstring_x27(v___x_5389_);
return v___x_5390_;
}
}
static lean_object* _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31(void){
_start:
{
lean_object* v___x_5405_; lean_object* v___x_5406_; 
v___x_5405_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__30));
v___x_5406_ = l_String_toRawSubstring_x27(v___x_5405_);
return v___x_5406_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1(lean_object* v_x_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_){
_start:
{
lean_object* v___x_5434_; uint8_t v___x_5435_; 
v___x_5434_ = ((lean_object*)(l_termPrintln_x21_____00__closed__1));
lean_inc(v_x_5431_);
v___x_5435_ = l_Lean_Syntax_isOfKind(v_x_5431_, v___x_5434_);
if (v___x_5435_ == 0)
{
lean_object* v___x_5436_; lean_object* v___x_5437_; 
lean_dec(v_x_5431_);
v___x_5436_ = lean_box(1);
v___x_5437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5437_, 0, v___x_5436_);
lean_ctor_set(v___x_5437_, 1, v___y_5433_);
return v___x_5437_;
}
else
{
lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; uint8_t v___x_5441_; 
v___x_5438_ = lean_unsigned_to_nat(1u);
v___x_5439_ = l_Lean_Syntax_getArg(v_x_5431_, v___x_5438_);
lean_dec(v_x_5431_);
v___x_5440_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__1));
lean_inc(v___x_5439_);
v___x_5441_ = l_Lean_Syntax_isOfKind(v___x_5439_, v___x_5440_);
if (v___x_5441_ == 0)
{
lean_object* v_quotContext_5442_; lean_object* v_currMacroScope_5443_; lean_object* v_ref_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; lean_object* v___x_5473_; lean_object* v___x_5474_; lean_object* v___x_5475_; lean_object* v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; 
v_quotContext_5442_ = lean_ctor_get(v___y_5432_, 1);
v_currMacroScope_5443_ = lean_ctor_get(v___y_5432_, 2);
v_ref_5444_ = lean_ctor_get(v___y_5432_, 5);
v___x_5445_ = l_Lean_SourceInfo_fromRef(v_ref_5444_, v___x_5441_);
v___x_5446_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3));
v___x_5447_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5));
v___x_5448_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__6));
lean_inc_n(v___x_5445_, 14);
v___x_5449_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5449_, 0, v___x_5445_);
lean_ctor_set(v___x_5449_, 1, v___x_5448_);
v___x_5450_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__8));
v___x_5451_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9);
v___x_5452_ = lean_box(0);
lean_inc_n(v_currMacroScope_5443_, 4);
lean_inc_n(v_quotContext_5442_, 4);
v___x_5453_ = l_Lean_addMacroScope(v_quotContext_5442_, v___x_5452_, v_currMacroScope_5443_);
v___x_5454_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__15));
v___x_5455_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5455_, 0, v___x_5445_);
lean_ctor_set(v___x_5455_, 1, v___x_5451_);
lean_ctor_set(v___x_5455_, 2, v___x_5453_);
lean_ctor_set(v___x_5455_, 3, v___x_5454_);
v___x_5456_ = l_Lean_Syntax_node1(v___x_5445_, v___x_5450_, v___x_5455_);
v___x_5457_ = l_Lean_Syntax_node2(v___x_5445_, v___x_5447_, v___x_5449_, v___x_5456_);
v___x_5458_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__16));
v___x_5459_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17);
v___x_5460_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__20));
v___x_5461_ = l_Lean_addMacroScope(v_quotContext_5442_, v___x_5460_, v_currMacroScope_5443_);
v___x_5462_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__22));
v___x_5463_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5463_, 0, v___x_5445_);
lean_ctor_set(v___x_5463_, 1, v___x_5459_);
lean_ctor_set(v___x_5463_, 2, v___x_5461_);
lean_ctor_set(v___x_5463_, 3, v___x_5462_);
v___x_5464_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__9));
v___x_5465_ = l_Lean_Syntax_node1(v___x_5445_, v___x_5464_, v___x_5439_);
v___x_5466_ = l_Lean_Syntax_node2(v___x_5445_, v___x_5458_, v___x_5463_, v___x_5465_);
v___x_5467_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__23));
v___x_5468_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5468_, 0, v___x_5445_);
lean_ctor_set(v___x_5468_, 1, v___x_5467_);
v___x_5469_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24);
v___x_5470_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__25));
v___x_5471_ = l_Lean_addMacroScope(v_quotContext_5442_, v___x_5470_, v_currMacroScope_5443_);
v___x_5472_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__29));
v___x_5473_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5473_, 0, v___x_5445_);
lean_ctor_set(v___x_5473_, 1, v___x_5469_);
lean_ctor_set(v___x_5473_, 2, v___x_5471_);
lean_ctor_set(v___x_5473_, 3, v___x_5472_);
v___x_5474_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31);
v___x_5475_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__32));
v___x_5476_ = l_Lean_addMacroScope(v_quotContext_5442_, v___x_5475_, v_currMacroScope_5443_);
v___x_5477_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__36));
v___x_5478_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5478_, 0, v___x_5445_);
lean_ctor_set(v___x_5478_, 1, v___x_5474_);
lean_ctor_set(v___x_5478_, 2, v___x_5476_);
lean_ctor_set(v___x_5478_, 3, v___x_5477_);
v___x_5479_ = l_Lean_Syntax_node1(v___x_5445_, v___x_5464_, v___x_5478_);
v___x_5480_ = l_Lean_Syntax_node2(v___x_5445_, v___x_5458_, v___x_5473_, v___x_5479_);
v___x_5481_ = l_Lean_Syntax_node1(v___x_5445_, v___x_5464_, v___x_5480_);
v___x_5482_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__37));
v___x_5483_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5483_, 0, v___x_5445_);
lean_ctor_set(v___x_5483_, 1, v___x_5482_);
v___x_5484_ = l_Lean_Syntax_node5(v___x_5445_, v___x_5446_, v___x_5457_, v___x_5466_, v___x_5468_, v___x_5481_, v___x_5483_);
v___x_5485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5485_, 0, v___x_5484_);
lean_ctor_set(v___x_5485_, 1, v___y_5433_);
return v___x_5485_;
}
else
{
lean_object* v_quotContext_5486_; lean_object* v_currMacroScope_5487_; lean_object* v_ref_5488_; uint8_t v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; lean_object* v___x_5497_; lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5502_; lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v___x_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; lean_object* v___x_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5536_; 
v_quotContext_5486_ = lean_ctor_get(v___y_5432_, 1);
v_currMacroScope_5487_ = lean_ctor_get(v___y_5432_, 2);
v_ref_5488_ = lean_ctor_get(v___y_5432_, 5);
v___x_5489_ = 0;
v___x_5490_ = l_Lean_SourceInfo_fromRef(v_ref_5488_, v___x_5489_);
v___x_5491_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3));
v___x_5492_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5));
v___x_5493_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__6));
lean_inc_n(v___x_5490_, 17);
v___x_5494_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5494_, 0, v___x_5490_);
lean_ctor_set(v___x_5494_, 1, v___x_5493_);
v___x_5495_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__8));
v___x_5496_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9);
v___x_5497_ = lean_box(0);
lean_inc_n(v_currMacroScope_5487_, 4);
lean_inc_n(v_quotContext_5486_, 4);
v___x_5498_ = l_Lean_addMacroScope(v_quotContext_5486_, v___x_5497_, v_currMacroScope_5487_);
v___x_5499_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__15));
v___x_5500_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5500_, 0, v___x_5490_);
lean_ctor_set(v___x_5500_, 1, v___x_5496_);
lean_ctor_set(v___x_5500_, 2, v___x_5498_);
lean_ctor_set(v___x_5500_, 3, v___x_5499_);
v___x_5501_ = l_Lean_Syntax_node1(v___x_5490_, v___x_5495_, v___x_5500_);
v___x_5502_ = l_Lean_Syntax_node2(v___x_5490_, v___x_5492_, v___x_5494_, v___x_5501_);
v___x_5503_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__16));
v___x_5504_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17);
v___x_5505_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__20));
v___x_5506_ = l_Lean_addMacroScope(v_quotContext_5486_, v___x_5505_, v_currMacroScope_5487_);
v___x_5507_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__22));
v___x_5508_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5508_, 0, v___x_5490_);
lean_ctor_set(v___x_5508_, 1, v___x_5504_);
lean_ctor_set(v___x_5508_, 2, v___x_5506_);
lean_ctor_set(v___x_5508_, 3, v___x_5507_);
v___x_5509_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__9));
v___x_5510_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__39));
v___x_5511_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__41));
v___x_5512_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__42));
v___x_5513_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5513_, 0, v___x_5490_);
lean_ctor_set(v___x_5513_, 1, v___x_5512_);
v___x_5514_ = l_Lean_Syntax_node2(v___x_5490_, v___x_5511_, v___x_5513_, v___x_5439_);
v___x_5515_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__37));
v___x_5516_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5516_, 0, v___x_5490_);
lean_ctor_set(v___x_5516_, 1, v___x_5515_);
lean_inc_ref(v___x_5516_);
lean_inc(v___x_5502_);
v___x_5517_ = l_Lean_Syntax_node3(v___x_5490_, v___x_5510_, v___x_5502_, v___x_5514_, v___x_5516_);
v___x_5518_ = l_Lean_Syntax_node1(v___x_5490_, v___x_5509_, v___x_5517_);
v___x_5519_ = l_Lean_Syntax_node2(v___x_5490_, v___x_5503_, v___x_5508_, v___x_5518_);
v___x_5520_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__23));
v___x_5521_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5521_, 0, v___x_5490_);
lean_ctor_set(v___x_5521_, 1, v___x_5520_);
v___x_5522_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24);
v___x_5523_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__25));
v___x_5524_ = l_Lean_addMacroScope(v_quotContext_5486_, v___x_5523_, v_currMacroScope_5487_);
v___x_5525_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__29));
v___x_5526_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5526_, 0, v___x_5490_);
lean_ctor_set(v___x_5526_, 1, v___x_5522_);
lean_ctor_set(v___x_5526_, 2, v___x_5524_);
lean_ctor_set(v___x_5526_, 3, v___x_5525_);
v___x_5527_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31);
v___x_5528_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__32));
v___x_5529_ = l_Lean_addMacroScope(v_quotContext_5486_, v___x_5528_, v_currMacroScope_5487_);
v___x_5530_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__36));
v___x_5531_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5531_, 0, v___x_5490_);
lean_ctor_set(v___x_5531_, 1, v___x_5527_);
lean_ctor_set(v___x_5531_, 2, v___x_5529_);
lean_ctor_set(v___x_5531_, 3, v___x_5530_);
v___x_5532_ = l_Lean_Syntax_node1(v___x_5490_, v___x_5509_, v___x_5531_);
v___x_5533_ = l_Lean_Syntax_node2(v___x_5490_, v___x_5503_, v___x_5526_, v___x_5532_);
v___x_5534_ = l_Lean_Syntax_node1(v___x_5490_, v___x_5509_, v___x_5533_);
v___x_5535_ = l_Lean_Syntax_node5(v___x_5490_, v___x_5491_, v___x_5502_, v___x_5519_, v___x_5521_, v___x_5534_, v___x_5516_);
v___x_5536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5536_, 0, v___x_5535_);
lean_ctor_set(v___x_5536_, 1, v___y_5433_);
return v___x_5536_;
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___boxed(lean_object* v_x_5537_, lean_object* v___y_5538_, lean_object* v___y_5539_){
_start:
{
lean_object* v_res_5540_; 
v_res_5540_ = l___aux__Init__System__IO______macroRules__termPrintln_x21______1(v_x_5537_, v___y_5538_, v___y_5539_);
lean_dec_ref(v___y_5538_);
return v_res_5540_;
}
}
LEAN_EXPORT lean_object* l_Runtime_markMultiThreaded___boxed(lean_object* v_00_u03b1_5544_, lean_object* v_a_5545_, lean_object* v_a_00___x40___internal___hyg_5546_){
_start:
{
lean_object* v_res_5547_; 
v_res_5547_ = lean_runtime_mark_multi_threaded(v_a_5545_);
return v_res_5547_;
}
}
LEAN_EXPORT lean_object* l_Runtime_markPersistent___boxed(lean_object* v_00_u03b1_5551_, lean_object* v_a_5552_, lean_object* v_a_00___x40___internal___hyg_5553_){
_start:
{
lean_object* v_res_5554_; 
v_res_5554_ = lean_runtime_mark_persistent(v_a_5552_);
return v_res_5554_;
}
}
LEAN_EXPORT lean_object* l_Runtime_forget___boxed(lean_object* v_00_u03b1_5558_, lean_object* v_a_5559_, lean_object* v_a_00___x40___internal___hyg_5560_){
_start:
{
lean_object* v_res_5561_; 
v_res_5561_ = lean_runtime_forget(v_a_5559_);
return v_res_5561_;
}
}
LEAN_EXPORT lean_object* l_Runtime_hold___boxed(lean_object* v_00_u03b1_5565_, lean_object* v_a_5566_, lean_object* v_a_00___x40___internal___hyg_5567_){
_start:
{
lean_object* v_res_5568_; 
v_res_5568_ = lean_runtime_hold(v_a_5566_);
lean_dec(v_a_5566_);
return v_res_5568_;
}
}
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
lean_object* runtime_initialize_Init_System_IOError(uint8_t builtin);
lean_object* runtime_initialize_Init_System_FilePath(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Transport(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Impl(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Repr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_System_IO(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_IOError(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Impl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_IO_RealWorld_nonemptyType = _init_l_IO_RealWorld_nonemptyType();
l_IO_instInhabitedTaskState_default = _init_l_IO_instInhabitedTaskState_default();
l_IO_instInhabitedTaskState = _init_l_IO_instInhabitedTaskState();
l_IO_instLTTaskState = _init_l_IO_instLTTaskState();
lean_mark_persistent(l_IO_instLTTaskState);
l_IO_instLETaskState = _init_l_IO_instLETaskState();
lean_mark_persistent(l_IO_instLETaskState);
l_IO_FS_instInhabitedSystemTime_default = _init_l_IO_FS_instInhabitedSystemTime_default();
lean_mark_persistent(l_IO_FS_instInhabitedSystemTime_default);
l_IO_FS_instInhabitedSystemTime = _init_l_IO_FS_instInhabitedSystemTime();
lean_mark_persistent(l_IO_FS_instInhabitedSystemTime);
l_IO_FS_instLTSystemTime = _init_l_IO_FS_instLTSystemTime();
lean_mark_persistent(l_IO_FS_instLTSystemTime);
l_IO_FS_instLESystemTime = _init_l_IO_FS_instLESystemTime();
lean_mark_persistent(l_IO_FS_instLESystemTime);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_System_IO(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_IO_waitAny___auto__1 = _init_l_IO_waitAny___auto__1();
lean_mark_persistent(l_IO_waitAny___auto__1);
l_IO_waitAny_x27___auto__1 = _init_l_IO_waitAny_x27___auto__1();
lean_mark_persistent(l_IO_waitAny_x27___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Control_Do(uint8_t builtin);
lean_object* initialize_Init_System_IOError(uint8_t builtin);
lean_object* initialize_Init_System_FilePath(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* initialize_Init_Transport(uint8_t builtin);
lean_object* initialize_Init_Data_List_MapIdx(uint8_t builtin);
lean_object* initialize_Init_Data_Ord_UInt(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Data_List_Impl(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Repr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_System_IO(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IOError(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_FilePath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_MapIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Ord_UInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Impl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Repr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_System_IO(builtin);
}
#ifdef __cplusplus
}
#endif
