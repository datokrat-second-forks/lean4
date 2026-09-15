// Lean compiler output
// Module: Init.System.IO
// Imports: public import Init.Control.Do public import Init.System.IOError public import Init.System.FilePath import Init.Data.String.TakeDrop import Init.Data.String.Search public import Init.Data.Ord.Basic public import Init.Data.String.Basic public import Init.Data.Function import Init.Data.List.MapIdx import Init.Data.Ord.UInt import Init.Data.ToString.Macro import Init.Data.List.Impl import Init.Data.Int.Repr
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
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_BaseIO_equiv___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_BaseIO_equiv___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_BaseIO_equiv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_BaseIO_equiv___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_BaseIO_equiv___redArg___closed__0 = (const lean_object*)&l_BaseIO_equiv___redArg___closed__0_value;
static const lean_ctor_object l_BaseIO_equiv___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_BaseIO_equiv___redArg___closed__0_value),((lean_object*)&l_BaseIO_equiv___redArg___closed__0_value)}};
static const lean_object* l_BaseIO_equiv___redArg___closed__1 = (const lean_object*)&l_BaseIO_equiv___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_BaseIO_equiv___redArg();
LEAN_EXPORT lean_object* l_BaseIO_equiv___redArg___boxed(lean_object*);
static lean_once_cell_t l_BaseIO_equiv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_BaseIO_equiv___closed__0;
LEAN_EXPORT lean_object* l_BaseIO_equiv(lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadBaseIO___closed__0 = (const lean_object*)&l_instMonadBaseIO___closed__0_value;
static const lean_closure_object l_instMonadBaseIO___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadBaseIO___closed__1 = (const lean_object*)&l_instMonadBaseIO___closed__1_value;
static const lean_closure_object l_instMonadBaseIO___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadBaseIO___closed__2 = (const lean_object*)&l_instMonadBaseIO___closed__2_value;
static const lean_closure_object l_instMonadBaseIO___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadBaseIO___closed__3 = (const lean_object*)&l_instMonadBaseIO___closed__3_value;
static const lean_closure_object l_instMonadBaseIO___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadBaseIO___closed__4 = (const lean_object*)&l_instMonadBaseIO___closed__4_value;
static const lean_closure_object l_instMonadBaseIO___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__4_value),((lean_object*)&l_instMonadBaseIO___closed__3_value)} };
static const lean_object* l_instMonadBaseIO___closed__5 = (const lean_object*)&l_instMonadBaseIO___closed__5_value;
static const lean_closure_object l_instMonadBaseIO___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__3_value)} };
static const lean_object* l_instMonadBaseIO___closed__6 = (const lean_object*)&l_instMonadBaseIO___closed__6_value;
static const lean_closure_object l_instMonadBaseIO___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadBaseIO___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadBaseIO___closed__7 = (const lean_object*)&l_instMonadBaseIO___closed__7_value;
static const lean_ctor_object l_instMonadBaseIO___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__0_value),((lean_object*)&l_instMonadBaseIO___closed__1_value)}};
static const lean_object* l_instMonadBaseIO___closed__8 = (const lean_object*)&l_instMonadBaseIO___closed__8_value;
static const lean_ctor_object l_instMonadBaseIO___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__8_value),((lean_object*)&l_instMonadBaseIO___closed__2_value),((lean_object*)&l_instMonadBaseIO___closed__5_value),((lean_object*)&l_instMonadBaseIO___closed__6_value),((lean_object*)&l_instMonadBaseIO___closed__7_value)}};
static const lean_object* l_instMonadBaseIO___closed__9 = (const lean_object*)&l_instMonadBaseIO___closed__9_value;
static const lean_ctor_object l_instMonadBaseIO___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadBaseIO___closed__9_value),((lean_object*)&l_instMonadBaseIO___closed__3_value)}};
static const lean_object* l_instMonadBaseIO___closed__10 = (const lean_object*)&l_instMonadBaseIO___closed__10_value;
LEAN_EXPORT const lean_object* l_instMonadBaseIO = (const lean_object*)&l_instMonadBaseIO___closed__10_value;
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadFinallyBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadFinallyBaseIO___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadFinallyBaseIO___closed__0 = (const lean_object*)&l_instMonadFinallyBaseIO___closed__0_value;
LEAN_EXPORT const lean_object* l_instMonadFinallyBaseIO = (const lean_object*)&l_instMonadFinallyBaseIO___closed__0_value;
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadAttachBaseIO___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadAttachBaseIO___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
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
LEAN_EXPORT lean_object* l_EIO_equiv___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_EIO_equiv___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_EIO_equiv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_EIO_equiv___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_EIO_equiv___redArg___closed__0 = (const lean_object*)&l_EIO_equiv___redArg___closed__0_value;
static const lean_ctor_object l_EIO_equiv___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_EIO_equiv___redArg___closed__0_value),((lean_object*)&l_EIO_equiv___redArg___closed__0_value)}};
static const lean_object* l_EIO_equiv___redArg___closed__1 = (const lean_object*)&l_EIO_equiv___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_EIO_equiv___redArg();
LEAN_EXPORT lean_object* l_EIO_equiv___redArg___boxed(lean_object*);
static lean_once_cell_t l_EIO_equiv___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_EIO_equiv___closed__0;
LEAN_EXPORT lean_object* l_EIO_equiv(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadEIO___redArg___closed__0 = (const lean_object*)&l_instMonadEIO___redArg___closed__0_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadEIO___redArg___closed__1 = (const lean_object*)&l_instMonadEIO___redArg___closed__1_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadEIO___redArg___closed__2 = (const lean_object*)&l_instMonadEIO___redArg___closed__2_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadEIO___redArg___closed__3 = (const lean_object*)&l_instMonadEIO___redArg___closed__3_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadEIO___redArg___closed__4 = (const lean_object*)&l_instMonadEIO___redArg___closed__4_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__4_value),((lean_object*)&l_instMonadEIO___redArg___closed__3_value)} };
static const lean_object* l_instMonadEIO___redArg___closed__5 = (const lean_object*)&l_instMonadEIO___redArg___closed__5_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__3_value)} };
static const lean_object* l_instMonadEIO___redArg___closed__6 = (const lean_object*)&l_instMonadEIO___redArg___closed__6_value;
static const lean_closure_object l_instMonadEIO___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadEIO___redArg___closed__7 = (const lean_object*)&l_instMonadEIO___redArg___closed__7_value;
static const lean_ctor_object l_instMonadEIO___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__0_value),((lean_object*)&l_instMonadEIO___redArg___closed__1_value)}};
static const lean_object* l_instMonadEIO___redArg___closed__8 = (const lean_object*)&l_instMonadEIO___redArg___closed__8_value;
static const lean_ctor_object l_instMonadEIO___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__8_value),((lean_object*)&l_instMonadEIO___redArg___closed__2_value),((lean_object*)&l_instMonadEIO___redArg___closed__5_value),((lean_object*)&l_instMonadEIO___redArg___closed__6_value),((lean_object*)&l_instMonadEIO___redArg___closed__7_value)}};
static const lean_object* l_instMonadEIO___redArg___closed__9 = (const lean_object*)&l_instMonadEIO___redArg___closed__9_value;
static const lean_ctor_object l_instMonadEIO___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadEIO___redArg___closed__9_value),((lean_object*)&l_instMonadEIO___redArg___closed__3_value)}};
static const lean_object* l_instMonadEIO___redArg___closed__10 = (const lean_object*)&l_instMonadEIO___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_instMonadEIO___redArg();
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instMonadEIO(lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadFinallyEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadFinallyEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadFinallyEIO___redArg___closed__0 = (const lean_object*)&l_instMonadFinallyEIO___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg();
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instMonadFinallyEIO(lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadAttachEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadAttachEIO___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadAttachEIO___redArg___closed__0 = (const lean_object*)&l_instMonadAttachEIO___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg();
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instMonadAttachEIO(lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_instMonadExceptOfEIO___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadExceptOfEIO___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadExceptOfEIO___redArg___closed__0 = (const lean_object*)&l_instMonadExceptOfEIO___redArg___closed__0_value;
static const lean_closure_object l_instMonadExceptOfEIO___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadExceptOfEIO___redArg___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_instMonadExceptOfEIO___redArg___closed__1 = (const lean_object*)&l_instMonadExceptOfEIO___redArg___closed__1_value;
static const lean_ctor_object l_instMonadExceptOfEIO___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_instMonadExceptOfEIO___redArg___closed__0_value),((lean_object*)&l_instMonadExceptOfEIO___redArg___closed__1_value)}};
static const lean_object* l_instMonadExceptOfEIO___redArg___closed__2 = (const lean_object*)&l_instMonadExceptOfEIO___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg();
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_BaseIO_equiv___redArg___lam__0(lean_object* v___y_30_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = lean_apply_1(v___y_30_, lean_box(0));
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_equiv___redArg___lam__0___boxed(lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_BaseIO_equiv___redArg___lam__0(v___y_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_equiv___redArg(){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = ((lean_object*)(l_BaseIO_equiv___redArg___closed__1));
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_equiv___redArg___boxed(lean_object* v___dummy_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_BaseIO_equiv___redArg();
return v_res_42_;
}
}
static lean_object* _init_l_BaseIO_equiv___closed__0(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_BaseIO_equiv___redArg();
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_equiv(lean_object* v_00_u03b1_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_obj_once(&l_BaseIO_equiv___closed__0, &l_BaseIO_equiv___closed__0_once, _init_l_BaseIO_equiv___closed__0);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__0(lean_object* v_00_u03b1_46_, lean_object* v_00_u03b2_47_, lean_object* v_f_48_, lean_object* v_x_49_){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_apply_1(v_x_49_, lean_box(0));
v___x_52_ = lean_apply_1(v_f_48_, v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__0___boxed(lean_object* v_00_u03b1_53_, lean_object* v_00_u03b2_54_, lean_object* v_f_55_, lean_object* v_x_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_instMonadBaseIO___lam__0(v_00_u03b1_53_, v_00_u03b2_54_, v_f_55_, v_x_56_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__1(lean_object* v_00_u03b1_59_, lean_object* v_00_u03b2_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_apply_1(v___y_62_, lean_box(0));
lean_dec(v___x_64_);
lean_inc(v___y_61_);
return v___y_61_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__1___boxed(lean_object* v_00_u03b1_65_, lean_object* v_00_u03b2_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_instMonadBaseIO___lam__1(v_00_u03b1_65_, v_00_u03b2_66_, v___y_67_, v___y_68_);
lean_dec(v___y_67_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__2(lean_object* v_00_u03b1_71_, lean_object* v_a_72_){
_start:
{
lean_inc(v_a_72_);
return v_a_72_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__2___boxed(lean_object* v_00_u03b1_74_, lean_object* v_a_75_, lean_object* v___y_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l_instMonadBaseIO___lam__2(v_00_u03b1_74_, v_a_75_);
lean_dec(v_a_75_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__3(lean_object* v_00_u03b1_78_, lean_object* v_00_u03b2_79_, lean_object* v_x_80_, lean_object* v_f_81_){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_apply_1(v_x_80_, lean_box(0));
v___x_84_ = lean_apply_2(v_f_81_, v___x_83_, lean_box(0));
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__3___boxed(lean_object* v_00_u03b1_85_, lean_object* v_00_u03b2_86_, lean_object* v_x_87_, lean_object* v_f_88_, lean_object* v___y_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_instMonadBaseIO___lam__3(v_00_u03b1_85_, v_00_u03b2_86_, v_x_87_, v_f_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__4(lean_object* v___y_91_){
_start:
{
lean_inc(v___y_91_);
return v___y_91_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__4___boxed(lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_instMonadBaseIO___lam__4(v___y_93_);
lean_dec(v___y_93_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__5(lean_object* v_x_96_, lean_object* v___f_97_, lean_object* v___f_98_, lean_object* v_y_99_){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_101_ = lean_box(0);
v___x_102_ = lean_apply_1(v_x_96_, v___x_101_);
v___x_103_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_103_, 0, lean_box(0));
lean_closure_set(v___x_103_, 1, lean_box(0));
lean_closure_set(v___x_103_, 2, lean_box(0));
lean_closure_set(v___x_103_, 3, v___f_97_);
lean_closure_set(v___x_103_, 4, v_y_99_);
v___x_104_ = lean_apply_5(v___f_98_, lean_box(0), lean_box(0), v___x_102_, v___x_103_, lean_box(0));
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__5___boxed(lean_object* v_x_105_, lean_object* v___f_106_, lean_object* v___f_107_, lean_object* v_y_108_, lean_object* v___y_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_instMonadBaseIO___lam__5(v_x_105_, v___f_106_, v___f_107_, v_y_108_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__6(lean_object* v___f_111_, lean_object* v___f_112_, lean_object* v_00_u03b1_113_, lean_object* v_00_u03b2_114_, lean_object* v_f_115_, lean_object* v_x_116_){
_start:
{
lean_object* v___f_118_; lean_object* v___x_119_; 
lean_inc_ref(v___f_112_);
v___f_118_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__5___boxed), 5, 3);
lean_closure_set(v___f_118_, 0, v_x_116_);
lean_closure_set(v___f_118_, 1, v___f_111_);
lean_closure_set(v___f_118_, 2, v___f_112_);
v___x_119_ = lean_apply_5(v___f_112_, lean_box(0), lean_box(0), v_f_115_, v___f_118_, lean_box(0));
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__6___boxed(lean_object* v___f_120_, lean_object* v___f_121_, lean_object* v_00_u03b1_122_, lean_object* v_00_u03b2_123_, lean_object* v_f_124_, lean_object* v_x_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_instMonadBaseIO___lam__6(v___f_120_, v___f_121_, v_00_u03b1_122_, v_00_u03b2_123_, v_f_124_, v_x_125_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__8(lean_object* v_a_128_, lean_object* v_x_129_){
_start:
{
lean_inc(v_a_128_);
return v_a_128_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__8___boxed(lean_object* v_a_131_, lean_object* v_x_132_, lean_object* v___y_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_instMonadBaseIO___lam__8(v_a_131_, v_x_132_);
lean_dec(v_x_132_);
lean_dec(v_a_131_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__7(lean_object* v_y_135_, lean_object* v___f_136_, lean_object* v_a_137_){
_start:
{
lean_object* v___f_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v___f_139_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__8___boxed), 3, 1);
lean_closure_set(v___f_139_, 0, v_a_137_);
v___x_140_ = lean_box(0);
v___x_141_ = lean_apply_1(v_y_135_, v___x_140_);
v___x_142_ = lean_apply_5(v___f_136_, lean_box(0), lean_box(0), v___x_141_, v___f_139_, lean_box(0));
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__7___boxed(lean_object* v_y_143_, lean_object* v___f_144_, lean_object* v_a_145_, lean_object* v___y_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_instMonadBaseIO___lam__7(v_y_143_, v___f_144_, v_a_145_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__9(lean_object* v___f_148_, lean_object* v_00_u03b1_149_, lean_object* v_00_u03b2_150_, lean_object* v_x_151_, lean_object* v_y_152_){
_start:
{
lean_object* v___f_154_; lean_object* v___x_155_; 
lean_inc_ref(v___f_148_);
v___f_154_ = lean_alloc_closure((void*)(l_instMonadBaseIO___lam__7___boxed), 4, 2);
lean_closure_set(v___f_154_, 0, v_y_152_);
lean_closure_set(v___f_154_, 1, v___f_148_);
v___x_155_ = lean_apply_5(v___f_148_, lean_box(0), lean_box(0), v_x_151_, v___f_154_, lean_box(0));
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__9___boxed(lean_object* v___f_156_, lean_object* v_00_u03b1_157_, lean_object* v_00_u03b2_158_, lean_object* v_x_159_, lean_object* v_y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_instMonadBaseIO___lam__9(v___f_156_, v_00_u03b1_157_, v_00_u03b2_158_, v_x_159_, v_y_160_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__10(lean_object* v_00_u03b1_163_, lean_object* v_00_u03b2_164_, lean_object* v_x_165_, lean_object* v_y_166_){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = lean_apply_1(v_x_165_, lean_box(0));
lean_dec(v___x_168_);
v___x_169_ = lean_box(0);
v___x_170_ = lean_apply_2(v_y_166_, v___x_169_, lean_box(0));
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_instMonadBaseIO___lam__10___boxed(lean_object* v_00_u03b1_171_, lean_object* v_00_u03b2_172_, lean_object* v_x_173_, lean_object* v_y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_instMonadBaseIO___lam__10(v_00_u03b1_171_, v_00_u03b2_172_, v_x_173_, v_y_174_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__0(lean_object* v_00_u03b1_201_, lean_object* v_00_u03b2_202_, lean_object* v_x_203_, lean_object* v_f_204_){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_206_ = lean_apply_1(v_x_203_, lean_box(0));
lean_inc(v___x_206_);
v___x_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
v___x_208_ = lean_apply_2(v_f_204_, v___x_207_, lean_box(0));
v___x_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_206_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyBaseIO___lam__0___boxed(lean_object* v_00_u03b1_210_, lean_object* v_00_u03b2_211_, lean_object* v_x_212_, lean_object* v_f_213_, lean_object* v___y_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_instMonadFinallyBaseIO___lam__0(v_00_u03b1_210_, v_00_u03b2_211_, v_x_212_, v_f_213_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__0(lean_object* v_00_u03b1_218_, lean_object* v_x_219_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_apply_1(v_x_219_, lean_box(0));
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachBaseIO___lam__0___boxed(lean_object* v_00_u03b1_222_, lean_object* v_x_223_, lean_object* v___y_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_instMonadAttachBaseIO___lam__0(v_00_u03b1_222_, v_x_223_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_map___redArg(lean_object* v_f_228_, lean_object* v_x_229_){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_231_ = lean_apply_1(v_x_229_, lean_box(0));
v___x_232_ = lean_apply_1(v_f_228_, v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_map___redArg___boxed(lean_object* v_f_233_, lean_object* v_x_234_, lean_object* v___y_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_BaseIO_map___redArg(v_f_233_, v_x_234_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_map(lean_object* v_00_u03b1_237_, lean_object* v_00_u03b2_238_, lean_object* v_f_239_, lean_object* v_x_240_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_apply_1(v_x_240_, lean_box(0));
v___x_243_ = lean_apply_1(v_f_239_, v___x_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_map___boxed(lean_object* v_00_u03b1_244_, lean_object* v_00_u03b2_245_, lean_object* v_f_246_, lean_object* v_x_247_, lean_object* v___y_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_BaseIO_map(v_00_u03b1_244_, v_00_u03b2_245_, v_f_246_, v_x_247_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_EIO_mk___redArg(lean_object* v_toEST_250_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = lean_apply_1(v_toEST_250_, lean_box(0));
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_EIO_mk___redArg___boxed(lean_object* v_toEST_253_, lean_object* v___y_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_EIO_mk___redArg(v_toEST_253_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_EIO_mk(lean_object* v_00_u03b5_256_, lean_object* v_00_u03b1_257_, lean_object* v_toEST_258_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = lean_apply_1(v_toEST_258_, lean_box(0));
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_EIO_mk___boxed(lean_object* v_00_u03b5_261_, lean_object* v_00_u03b1_262_, lean_object* v_toEST_263_, lean_object* v___y_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_EIO_mk(v_00_u03b5_261_, v_00_u03b1_262_, v_toEST_263_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_EIO_toEST___redArg(lean_object* v_self_266_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = lean_apply_1(v_self_266_, lean_box(0));
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_EIO_toEST___redArg___boxed(lean_object* v_self_269_, lean_object* v___y_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_EIO_toEST___redArg(v_self_269_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_EIO_toEST(lean_object* v_00_u03b5_272_, lean_object* v_00_u03b1_273_, lean_object* v_self_274_){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = lean_apply_1(v_self_274_, lean_box(0));
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_EIO_toEST___boxed(lean_object* v_00_u03b5_277_, lean_object* v_00_u03b1_278_, lean_object* v_self_279_, lean_object* v___y_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_EIO_toEST(v_00_u03b5_277_, v_00_u03b1_278_, v_self_279_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_EIO_equiv___redArg___lam__0(lean_object* v___y_282_){
_start:
{
lean_object* v___x_284_; 
v___x_284_ = lean_apply_1(v___y_282_, lean_box(0));
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_EIO_equiv___redArg___lam__0___boxed(lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_EIO_equiv___redArg___lam__0(v___y_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_EIO_equiv___redArg(){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = ((lean_object*)(l_EIO_equiv___redArg___closed__1));
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_EIO_equiv___redArg___boxed(lean_object* v___dummy_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_EIO_equiv___redArg();
return v_res_294_;
}
}
static lean_object* _init_l_EIO_equiv___closed__0(void){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l_EIO_equiv___redArg();
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_EIO_equiv(lean_object* v_00_u03b5_296_, lean_object* v_00_u03b1_297_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = lean_obj_once(&l_EIO_equiv___closed__0, &l_EIO_equiv___closed__0_once, _init_l_EIO_equiv___closed__0);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toEIO___redArg(lean_object* v_act_299_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = lean_apply_1(v_act_299_, lean_box(0));
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toEIO___redArg___boxed(lean_object* v_act_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_BaseIO_toEIO___redArg(v_act_303_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toEIO(lean_object* v_00_u03b1_306_, lean_object* v_00_u03b5_307_, lean_object* v_act_308_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_apply_1(v_act_308_, lean_box(0));
v___x_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toEIO___boxed(lean_object* v_00_u03b1_312_, lean_object* v_00_u03b5_313_, lean_object* v_act_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_BaseIO_toEIO(v_00_u03b1_312_, v_00_u03b5_313_, v_act_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg___lam__0(lean_object* v_00_u03b1_317_, lean_object* v___y_318_){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_apply_1(v___y_318_, lean_box(0));
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg___lam__0___boxed(lean_object* v_00_u03b1_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_instMonadLiftBaseIOEIO___redArg___lam__0(v_00_u03b1_322_, v___y_323_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg(){
_start:
{
lean_object* v___f_328_; 
v___f_328_ = ((lean_object*)(l_instMonadLiftBaseIOEIO___redArg___closed__0));
return v___f_328_;
}
}
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO___redArg___boxed(lean_object* v___dummy_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_instMonadLiftBaseIOEIO___redArg();
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_instMonadLiftBaseIOEIO(lean_object* v_00_u03b5_331_){
_start:
{
lean_object* v___f_332_; 
v___f_332_ = ((lean_object*)(l_instMonadLiftBaseIOEIO___redArg___closed__0));
return v___f_332_;
}
}
LEAN_EXPORT lean_object* l_EIO_toBaseIO___redArg(lean_object* v_act_333_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_apply_1(v_act_333_, lean_box(0));
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_335_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_335_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
lean_ctor_set_tag(v___x_338_, 1);
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_344_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_335_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_335_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
lean_ctor_set_tag(v___x_346_, 0);
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toBaseIO___redArg___boxed(lean_object* v_act_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_EIO_toBaseIO___redArg(v_act_352_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l_EIO_toBaseIO(lean_object* v_00_u03b5_355_, lean_object* v_00_u03b1_356_, lean_object* v_act_357_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = lean_apply_1(v_act_357_, lean_box(0));
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
lean_ctor_set_tag(v___x_362_, 1);
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_360_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
v_a_368_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v___x_359_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_359_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
lean_ctor_set_tag(v___x_370_, 0);
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toBaseIO___boxed(lean_object* v_00_u03b5_376_, lean_object* v_00_u03b1_377_, lean_object* v_act_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_EIO_toBaseIO(v_00_u03b5_376_, v_00_u03b1_377_, v_act_378_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_EIO_catchExceptions___redArg(lean_object* v_act_381_, lean_object* v_h_382_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = lean_apply_1(v_act_381_, lean_box(0));
if (lean_obj_tag(v___x_384_) == 0)
{
lean_object* v_a_385_; 
lean_dec_ref(v_h_382_);
v_a_385_ = lean_ctor_get(v___x_384_, 0);
lean_inc(v_a_385_);
lean_dec_ref_known(v___x_384_, 1);
return v_a_385_;
}
else
{
lean_object* v_a_386_; lean_object* v___x_387_; 
v_a_386_ = lean_ctor_get(v___x_384_, 0);
lean_inc(v_a_386_);
lean_dec_ref_known(v___x_384_, 1);
v___x_387_ = lean_apply_2(v_h_382_, v_a_386_, lean_box(0));
return v___x_387_;
}
}
}
LEAN_EXPORT lean_object* l_EIO_catchExceptions___redArg___boxed(lean_object* v_act_388_, lean_object* v_h_389_, lean_object* v___y_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_EIO_catchExceptions___redArg(v_act_388_, v_h_389_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_EIO_catchExceptions(lean_object* v_00_u03b5_392_, lean_object* v_00_u03b1_393_, lean_object* v_act_394_, lean_object* v_h_395_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = lean_apply_1(v_act_394_, lean_box(0));
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_a_398_; 
lean_dec_ref(v_h_395_);
v_a_398_ = lean_ctor_get(v___x_397_, 0);
lean_inc(v_a_398_);
lean_dec_ref_known(v___x_397_, 1);
return v_a_398_;
}
else
{
lean_object* v_a_399_; lean_object* v___x_400_; 
v_a_399_ = lean_ctor_get(v___x_397_, 0);
lean_inc(v_a_399_);
lean_dec_ref_known(v___x_397_, 1);
v___x_400_ = lean_apply_2(v_h_395_, v_a_399_, lean_box(0));
return v___x_400_;
}
}
}
LEAN_EXPORT lean_object* l_EIO_catchExceptions___boxed(lean_object* v_00_u03b5_401_, lean_object* v_00_u03b1_402_, lean_object* v_act_403_, lean_object* v_h_404_, lean_object* v___y_405_){
_start:
{
lean_object* v_res_406_; 
v_res_406_ = l_EIO_catchExceptions(v_00_u03b5_401_, v_00_u03b1_402_, v_act_403_, v_h_404_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__0(lean_object* v_00_u03b1_407_, lean_object* v_00_u03b2_408_, lean_object* v_f_409_, lean_object* v_x_410_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = lean_apply_1(v_x_410_, lean_box(0));
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_421_; 
v_a_413_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_421_ == 0)
{
v___x_415_ = v___x_412_;
v_isShared_416_ = v_isSharedCheck_421_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_412_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_421_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_417_ = lean_apply_1(v_f_409_, v_a_413_);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 0, v___x_417_);
v___x_419_ = v___x_415_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
else
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_429_; 
lean_dec(v_f_409_);
v_a_422_ = lean_ctor_get(v___x_412_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_429_ == 0)
{
v___x_424_ = v___x_412_;
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_412_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object* v_00_u03b1_430_, lean_object* v_00_u03b2_431_, lean_object* v_f_432_, lean_object* v_x_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_instMonadEIO___redArg___lam__0(v_00_u03b1_430_, v_00_u03b2_431_, v_f_432_, v_x_433_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__1(lean_object* v_00_u03b1_436_, lean_object* v_00_u03b2_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = lean_apply_1(v___y_439_, lean_box(0));
if (lean_obj_tag(v___x_441_) == 0)
{
lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_448_ == 0)
{
lean_object* v_unused_449_; 
v_unused_449_ = lean_ctor_get(v___x_441_, 0);
lean_dec(v_unused_449_);
v___x_443_ = v___x_441_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_dec(v___x_441_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 0, v___y_438_);
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___y_438_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
else
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_457_; 
lean_dec(v___y_438_);
v_a_450_ = lean_ctor_get(v___x_441_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_441_);
if (v_isSharedCheck_457_ == 0)
{
v___x_452_ = v___x_441_;
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_441_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object* v_00_u03b1_458_, lean_object* v_00_u03b2_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_instMonadEIO___redArg___lam__1(v_00_u03b1_458_, v_00_u03b2_459_, v___y_460_, v___y_461_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__2(lean_object* v_00_u03b1_464_, lean_object* v_a_465_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_467_, 0, v_a_465_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object* v_00_u03b1_468_, lean_object* v_a_469_, lean_object* v___y_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_instMonadEIO___redArg___lam__2(v_00_u03b1_468_, v_a_469_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__3(lean_object* v_00_u03b1_472_, lean_object* v_00_u03b2_473_, lean_object* v_x_474_, lean_object* v_f_475_){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = lean_apply_1(v_x_474_, lean_box(0));
if (lean_obj_tag(v___x_477_) == 0)
{
lean_object* v_a_478_; lean_object* v___x_479_; 
v_a_478_ = lean_ctor_get(v___x_477_, 0);
lean_inc(v_a_478_);
lean_dec_ref_known(v___x_477_, 1);
v___x_479_ = lean_apply_2(v_f_475_, v_a_478_, lean_box(0));
return v___x_479_;
}
else
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_487_; 
lean_dec_ref(v_f_475_);
v_a_480_ = lean_ctor_get(v___x_477_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_487_ == 0)
{
v___x_482_ = v___x_477_;
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_477_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_480_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object* v_00_u03b1_488_, lean_object* v_00_u03b2_489_, lean_object* v_x_490_, lean_object* v_f_491_, lean_object* v___y_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_instMonadEIO___redArg___lam__3(v_00_u03b1_488_, v_00_u03b2_489_, v_x_490_, v_f_491_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__4(lean_object* v___y_494_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_496_, 0, v___y_494_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_instMonadEIO___redArg___lam__4(v___y_497_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__5(lean_object* v_x_500_, lean_object* v___f_501_, lean_object* v___f_502_, lean_object* v_y_503_){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_505_ = lean_box(0);
v___x_506_ = lean_apply_1(v_x_500_, v___x_505_);
v___x_507_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_507_, 0, lean_box(0));
lean_closure_set(v___x_507_, 1, lean_box(0));
lean_closure_set(v___x_507_, 2, lean_box(0));
lean_closure_set(v___x_507_, 3, v___f_501_);
lean_closure_set(v___x_507_, 4, v_y_503_);
v___x_508_ = lean_apply_5(v___f_502_, lean_box(0), lean_box(0), v___x_506_, v___x_507_, lean_box(0));
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__5___boxed(lean_object* v_x_509_, lean_object* v___f_510_, lean_object* v___f_511_, lean_object* v_y_512_, lean_object* v___y_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_instMonadEIO___redArg___lam__5(v_x_509_, v___f_510_, v___f_511_, v_y_512_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__6(lean_object* v___f_515_, lean_object* v___f_516_, lean_object* v_00_u03b1_517_, lean_object* v_00_u03b2_518_, lean_object* v_f_519_, lean_object* v_x_520_){
_start:
{
lean_object* v___f_522_; lean_object* v___x_523_; 
lean_inc_ref(v___f_516_);
v___f_522_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__5___boxed), 5, 3);
lean_closure_set(v___f_522_, 0, v_x_520_);
lean_closure_set(v___f_522_, 1, v___f_515_);
lean_closure_set(v___f_522_, 2, v___f_516_);
v___x_523_ = lean_apply_5(v___f_516_, lean_box(0), lean_box(0), v_f_519_, v___f_522_, lean_box(0));
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object* v___f_524_, lean_object* v___f_525_, lean_object* v_00_u03b1_526_, lean_object* v_00_u03b2_527_, lean_object* v_f_528_, lean_object* v_x_529_, lean_object* v___y_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_instMonadEIO___redArg___lam__6(v___f_524_, v___f_525_, v_00_u03b1_526_, v_00_u03b2_527_, v_f_528_, v_x_529_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__8(lean_object* v_a_532_, lean_object* v_x_533_){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_535_, 0, v_a_532_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__8___boxed(lean_object* v_a_536_, lean_object* v_x_537_, lean_object* v___y_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_instMonadEIO___redArg___lam__8(v_a_536_, v_x_537_);
lean_dec(v_x_537_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__7(lean_object* v_y_540_, lean_object* v___f_541_, lean_object* v_a_542_){
_start:
{
lean_object* v___f_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___f_544_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__8___boxed), 3, 1);
lean_closure_set(v___f_544_, 0, v_a_542_);
v___x_545_ = lean_box(0);
v___x_546_ = lean_apply_1(v_y_540_, v___x_545_);
v___x_547_ = lean_apply_5(v___f_541_, lean_box(0), lean_box(0), v___x_546_, v___f_544_, lean_box(0));
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__7___boxed(lean_object* v_y_548_, lean_object* v___f_549_, lean_object* v_a_550_, lean_object* v___y_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_instMonadEIO___redArg___lam__7(v_y_548_, v___f_549_, v_a_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__9(lean_object* v___f_553_, lean_object* v_00_u03b1_554_, lean_object* v_00_u03b2_555_, lean_object* v_x_556_, lean_object* v_y_557_){
_start:
{
lean_object* v___f_559_; lean_object* v___x_560_; 
lean_inc_ref(v___f_553_);
v___f_559_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__7___boxed), 4, 2);
lean_closure_set(v___f_559_, 0, v_y_557_);
lean_closure_set(v___f_559_, 1, v___f_553_);
v___x_560_ = lean_apply_5(v___f_553_, lean_box(0), lean_box(0), v_x_556_, v___f_559_, lean_box(0));
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object* v___f_561_, lean_object* v_00_u03b1_562_, lean_object* v_00_u03b2_563_, lean_object* v_x_564_, lean_object* v_y_565_, lean_object* v___y_566_){
_start:
{
lean_object* v_res_567_; 
v_res_567_ = l_instMonadEIO___redArg___lam__9(v___f_561_, v_00_u03b1_562_, v_00_u03b2_563_, v_x_564_, v_y_565_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__10(lean_object* v_00_u03b1_568_, lean_object* v_00_u03b2_569_, lean_object* v_x_570_, lean_object* v_y_571_){
_start:
{
lean_object* v___x_573_; 
v___x_573_ = lean_apply_1(v_x_570_, lean_box(0));
if (lean_obj_tag(v___x_573_) == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec_ref_known(v___x_573_, 1);
v___x_574_ = lean_box(0);
v___x_575_ = lean_apply_2(v_y_571_, v___x_574_, lean_box(0));
return v___x_575_;
}
else
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
lean_dec_ref(v_y_571_);
v_a_576_ = lean_ctor_get(v___x_573_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v___x_573_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_573_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object* v_00_u03b1_584_, lean_object* v_00_u03b2_585_, lean_object* v_x_586_, lean_object* v_y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_instMonadEIO___redArg___lam__10(v_00_u03b1_584_, v_00_u03b2_585_, v_x_586_, v_y_587_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg(){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = ((lean_object*)(l_instMonadEIO___redArg___closed__10));
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO___redArg___boxed(lean_object* v___dummy_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_instMonadEIO___redArg();
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_instMonadEIO(lean_object* v_00_u03b5_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = ((lean_object*)(l_instMonadEIO___redArg___closed__10));
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__0(lean_object* v_00_u03b1_619_, lean_object* v_00_u03b2_620_, lean_object* v_x_621_, lean_object* v_f_622_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = lean_apply_1(v_x_621_, lean_box(0));
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_650_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_650_ == 0)
{
v___x_627_ = v___x_624_;
v_isShared_628_ = v_isSharedCheck_650_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_650_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
lean_inc(v_a_625_);
if (v_isShared_628_ == 0)
{
lean_ctor_set_tag(v___x_627_, 1);
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_649_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
lean_object* v___x_631_; 
v___x_631_ = lean_apply_2(v_f_622_, v___x_630_, lean_box(0));
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_640_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_640_ == 0)
{
v___x_634_ = v___x_631_;
v_isShared_635_ = v_isSharedCheck_640_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_631_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_640_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_638_; 
v___x_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_636_, 0, v_a_625_);
lean_ctor_set(v___x_636_, 1, v_a_632_);
if (v_isShared_635_ == 0)
{
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
else
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_648_; 
lean_dec(v_a_625_);
v_a_641_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_648_ == 0)
{
v___x_643_ = v___x_631_;
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v___x_631_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_646_; 
if (v_isShared_644_ == 0)
{
v___x_646_ = v___x_643_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_641_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
}
}
else
{
lean_object* v_a_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v_a_651_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_a_651_);
lean_dec_ref_known(v___x_624_, 1);
v___x_652_ = lean_box(0);
v___x_653_ = lean_apply_2(v_f_622_, v___x_652_, lean_box(0));
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_660_ == 0)
{
lean_object* v_unused_661_; 
v_unused_661_ = lean_ctor_get(v___x_653_, 0);
lean_dec(v_unused_661_);
v___x_655_ = v___x_653_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_dec(v___x_653_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
lean_ctor_set_tag(v___x_655_, 1);
lean_ctor_set(v___x_655_, 0, v_a_651_);
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_651_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_dec(v_a_651_);
v_a_662_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_653_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_653_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
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
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___lam__0___boxed(lean_object* v_00_u03b1_670_, lean_object* v_00_u03b2_671_, lean_object* v_x_672_, lean_object* v_f_673_, lean_object* v___y_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_instMonadFinallyEIO___redArg___lam__0(v_00_u03b1_670_, v_00_u03b2_671_, v_x_672_, v_f_673_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg(){
_start:
{
lean_object* v___f_678_; 
v___f_678_ = ((lean_object*)(l_instMonadFinallyEIO___redArg___closed__0));
return v___f_678_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO___redArg___boxed(lean_object* v___dummy_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_instMonadFinallyEIO___redArg();
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_instMonadFinallyEIO(lean_object* v_00_u03b5_681_){
_start:
{
lean_object* v___f_682_; 
v___f_682_ = ((lean_object*)(l_instMonadFinallyEIO___redArg___closed__0));
return v___f_682_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__0(lean_object* v_00_u03b1_683_, lean_object* v_x_684_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = lean_apply_1(v_x_684_, lean_box(0));
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_686_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_686_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_687_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
v_a_695_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_702_ == 0)
{
v___x_697_ = v___x_686_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_686_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_700_; 
if (v_isShared_698_ == 0)
{
v___x_700_ = v___x_697_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_a_695_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___lam__0___boxed(lean_object* v_00_u03b1_703_, lean_object* v_x_704_, lean_object* v___y_705_){
_start:
{
lean_object* v_res_706_; 
v_res_706_ = l_instMonadAttachEIO___redArg___lam__0(v_00_u03b1_703_, v_x_704_);
return v_res_706_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg(){
_start:
{
lean_object* v___f_709_; 
v___f_709_ = ((lean_object*)(l_instMonadAttachEIO___redArg___closed__0));
return v___f_709_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO___redArg___boxed(lean_object* v___dummy_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_instMonadAttachEIO___redArg();
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_instMonadAttachEIO(lean_object* v_00_u03b5_712_){
_start:
{
lean_object* v___f_713_; 
v___f_713_ = ((lean_object*)(l_instMonadAttachEIO___redArg___closed__0));
return v___f_713_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__0(lean_object* v_00_u03b1_714_, lean_object* v_e_715_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_717_, 0, v_e_715_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__0___boxed(lean_object* v_00_u03b1_718_, lean_object* v_e_719_, lean_object* v___y_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l_instMonadExceptOfEIO___redArg___lam__0(v_00_u03b1_718_, v_e_719_);
return v_res_721_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__1(lean_object* v_00_u03b1_722_, lean_object* v_x_723_, lean_object* v_handle_724_){
_start:
{
lean_object* v___x_726_; 
v___x_726_ = lean_apply_1(v_x_723_, lean_box(0));
if (lean_obj_tag(v___x_726_) == 0)
{
lean_dec_ref(v_handle_724_);
return v___x_726_;
}
else
{
lean_object* v_a_727_; lean_object* v___x_728_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
v___x_728_ = lean_apply_2(v_handle_724_, v_a_727_, lean_box(0));
return v___x_728_;
}
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___lam__1___boxed(lean_object* v_00_u03b1_729_, lean_object* v_x_730_, lean_object* v_handle_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_instMonadExceptOfEIO___redArg___lam__1(v_00_u03b1_729_, v_x_730_, v_handle_731_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg(){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = ((lean_object*)(l_instMonadExceptOfEIO___redArg___closed__2));
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO___redArg___boxed(lean_object* v___dummy_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_instMonadExceptOfEIO___redArg();
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_instMonadExceptOfEIO(lean_object* v_00_u03b5_743_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = ((lean_object*)(l_instMonadExceptOfEIO___redArg___closed__2));
return v___x_744_;
}
}
static lean_object* _init_l_instOrElseEIO___redArg___closed__0(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = ((lean_object*)(l_instMonadExceptOfEIO___redArg___closed__2));
v___x_746_ = l_instMonadExceptOfMonadExceptOf___redArg(v___x_745_);
return v___x_746_;
}
}
static lean_object* _init_l_instOrElseEIO___redArg___closed__1(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = lean_obj_once(&l_instOrElseEIO___redArg___closed__0, &l_instOrElseEIO___redArg___closed__0_once, _init_l_instOrElseEIO___redArg___closed__0);
v___x_748_ = lean_alloc_closure((void*)(l_MonadExcept_orElse), 6, 4);
lean_closure_set(v___x_748_, 0, lean_box(0));
lean_closure_set(v___x_748_, 1, lean_box(0));
lean_closure_set(v___x_748_, 2, v___x_747_);
lean_closure_set(v___x_748_, 3, lean_box(0));
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_instOrElseEIO___redArg(){
_start:
{
lean_object* v___x_750_; 
v___x_750_ = lean_obj_once(&l_instOrElseEIO___redArg___closed__1, &l_instOrElseEIO___redArg___closed__1_once, _init_l_instOrElseEIO___redArg___closed__1);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_instOrElseEIO___redArg___boxed(lean_object* v___dummy_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l_instOrElseEIO___redArg();
return v_res_752_;
}
}
static lean_object* _init_l_instOrElseEIO___closed__0(void){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = l_instOrElseEIO___redArg();
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_instOrElseEIO(lean_object* v_00_u03b5_754_, lean_object* v_00_u03b1_755_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = lean_obj_once(&l_instOrElseEIO___closed__0, &l_instOrElseEIO___closed__0_once, _init_l_instOrElseEIO___closed__0);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedEIO___redArg___lam__0(lean_object* v_inst_757_){
_start:
{
lean_object* v___x_759_; 
v___x_759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_759_, 0, v_inst_757_);
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedEIO___redArg___lam__0___boxed(lean_object* v_inst_760_, lean_object* v_s_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_instInhabitedEIO___redArg___lam__0(v_inst_760_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedEIO___redArg(lean_object* v_inst_763_){
_start:
{
lean_object* v___f_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___f_764_ = lean_alloc_closure((void*)(l_instInhabitedEIO___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_764_, 0, v_inst_763_);
v___x_765_ = lean_alloc_closure((void*)(l_EST_mk___boxed), 5, 4);
lean_closure_set(v___x_765_, 0, lean_box(0));
lean_closure_set(v___x_765_, 1, lean_box(0));
lean_closure_set(v___x_765_, 2, lean_box(0));
lean_closure_set(v___x_765_, 3, v___f_764_);
v___x_766_ = lean_alloc_closure((void*)(l_EIO_mk___boxed), 4, 3);
lean_closure_set(v___x_766_, 0, lean_box(0));
lean_closure_set(v___x_766_, 1, lean_box(0));
lean_closure_set(v___x_766_, 2, v___x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_instInhabitedEIO(lean_object* v_00_u03b5_767_, lean_object* v_00_u03b1_768_, lean_object* v_inst_769_){
_start:
{
lean_object* v___x_770_; 
v___x_770_ = l_instInhabitedEIO___redArg(v_inst_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l_EIO_map___redArg(lean_object* v_f_771_, lean_object* v_x_772_){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = lean_apply_1(v_x_772_, lean_box(0));
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_783_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_783_ == 0)
{
v___x_777_ = v___x_774_;
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_dec(v___x_774_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_779_ = lean_apply_1(v_f_771_, v_a_775_);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 0, v___x_779_);
v___x_781_ = v___x_777_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec(v_f_771_);
v_a_784_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_774_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_774_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_map___redArg___boxed(lean_object* v_f_792_, lean_object* v_x_793_, lean_object* v___y_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_EIO_map___redArg(v_f_792_, v_x_793_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_EIO_map(lean_object* v_00_u03b1_796_, lean_object* v_00_u03b2_797_, lean_object* v_00_u03b5_798_, lean_object* v_f_799_, lean_object* v_x_800_){
_start:
{
lean_object* v___x_802_; 
v___x_802_ = lean_apply_1(v_x_800_, lean_box(0));
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_811_; 
v_a_803_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_811_ == 0)
{
v___x_805_ = v___x_802_;
v_isShared_806_ = v_isSharedCheck_811_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_802_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_811_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
lean_object* v___x_807_; lean_object* v___x_809_; 
v___x_807_ = lean_apply_1(v_f_799_, v_a_803_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 0, v___x_807_);
v___x_809_ = v___x_805_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
lean_dec(v_f_799_);
v_a_812_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_802_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_802_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_map___boxed(lean_object* v_00_u03b1_820_, lean_object* v_00_u03b2_821_, lean_object* v_00_u03b5_822_, lean_object* v_f_823_, lean_object* v_x_824_, lean_object* v___y_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l_EIO_map(v_00_u03b1_820_, v_00_u03b2_821_, v_00_u03b5_822_, v_f_823_, v_x_824_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l_EIO_throw___redArg(lean_object* v_e_827_){
_start:
{
lean_object* v___x_829_; 
v___x_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_829_, 0, v_e_827_);
return v___x_829_;
}
}
LEAN_EXPORT lean_object* l_EIO_throw___redArg___boxed(lean_object* v_e_830_, lean_object* v___y_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_EIO_throw___redArg(v_e_830_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_EIO_throw(lean_object* v_00_u03b5_833_, lean_object* v_00_u03b1_834_, lean_object* v_e_835_){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_837_, 0, v_e_835_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_EIO_throw___boxed(lean_object* v_00_u03b5_838_, lean_object* v_00_u03b1_839_, lean_object* v_e_840_, lean_object* v___y_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_EIO_throw(v_00_u03b5_838_, v_00_u03b1_839_, v_e_840_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_EIO_tryCatch___redArg(lean_object* v_x_843_, lean_object* v_handle_844_){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = lean_apply_1(v_x_843_, lean_box(0));
if (lean_obj_tag(v___x_846_) == 0)
{
lean_dec_ref(v_handle_844_);
return v___x_846_;
}
else
{
lean_object* v_a_847_; lean_object* v___x_848_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_a_847_);
lean_dec_ref_known(v___x_846_, 1);
v___x_848_ = lean_apply_2(v_handle_844_, v_a_847_, lean_box(0));
return v___x_848_;
}
}
}
LEAN_EXPORT lean_object* l_EIO_tryCatch___redArg___boxed(lean_object* v_x_849_, lean_object* v_handle_850_, lean_object* v___y_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_EIO_tryCatch___redArg(v_x_849_, v_handle_850_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l_EIO_tryCatch(lean_object* v_00_u03b5_853_, lean_object* v_00_u03b1_854_, lean_object* v_x_855_, lean_object* v_handle_856_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = lean_apply_1(v_x_855_, lean_box(0));
if (lean_obj_tag(v___x_858_) == 0)
{
lean_dec_ref(v_handle_856_);
return v___x_858_;
}
else
{
lean_object* v_a_859_; lean_object* v___x_860_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_a_859_);
lean_dec_ref_known(v___x_858_, 1);
v___x_860_ = lean_apply_2(v_handle_856_, v_a_859_, lean_box(0));
return v___x_860_;
}
}
}
LEAN_EXPORT lean_object* l_EIO_tryCatch___boxed(lean_object* v_00_u03b5_861_, lean_object* v_00_u03b1_862_, lean_object* v_x_863_, lean_object* v_handle_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_EIO_tryCatch(v_00_u03b5_861_, v_00_u03b1_862_, v_x_863_, v_handle_864_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_EIO_ofExcept___redArg(lean_object* v_e_867_){
_start:
{
if (lean_obj_tag(v_e_867_) == 0)
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
v_a_869_ = lean_ctor_get(v_e_867_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v_e_867_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v_e_867_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v_e_867_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
lean_ctor_set_tag(v___x_871_, 1);
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
v_a_877_ = lean_ctor_get(v_e_867_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v_e_867_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v_e_867_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v_e_867_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set_tag(v___x_879_, 0);
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_ofExcept___redArg___boxed(lean_object* v_e_885_, lean_object* v___y_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_EIO_ofExcept___redArg(v_e_885_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_EIO_ofExcept(lean_object* v_00_u03b5_888_, lean_object* v_00_u03b1_889_, lean_object* v_e_890_){
_start:
{
if (lean_obj_tag(v_e_890_) == 0)
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
v_a_892_ = lean_ctor_get(v_e_890_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v_e_890_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v_e_890_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v_e_890_);
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
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
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
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_907_; 
v_a_900_ = lean_ctor_get(v_e_890_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v_e_890_);
if (v_isSharedCheck_907_ == 0)
{
v___x_902_ = v_e_890_;
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v_e_890_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_907_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v___x_905_; 
if (v_isShared_903_ == 0)
{
lean_ctor_set_tag(v___x_902_, 0);
v___x_905_ = v___x_902_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(0, 1, 0);
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
LEAN_EXPORT lean_object* l_EIO_ofExcept___boxed(lean_object* v_00_u03b5_908_, lean_object* v_00_u03b1_909_, lean_object* v_e_910_, lean_object* v___y_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_EIO_ofExcept(v_00_u03b5_908_, v_00_u03b1_909_, v_e_910_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_EIO_adapt___redArg(lean_object* v_f_913_, lean_object* v_m_914_){
_start:
{
lean_object* v___x_916_; 
v___x_916_ = lean_apply_1(v_m_914_, lean_box(0));
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec(v_f_913_);
v_a_917_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_916_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_916_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
else
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_933_; 
v_a_925_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_933_ == 0)
{
v___x_927_ = v___x_916_;
v_isShared_928_ = v_isSharedCheck_933_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_916_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_933_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_929_; lean_object* v___x_931_; 
v___x_929_ = lean_apply_1(v_f_913_, v_a_925_);
if (v_isShared_928_ == 0)
{
lean_ctor_set(v___x_927_, 0, v___x_929_);
v___x_931_ = v___x_927_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v___x_929_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_adapt___redArg___boxed(lean_object* v_f_934_, lean_object* v_m_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_EIO_adapt___redArg(v_f_934_, v_m_935_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_EIO_adapt(lean_object* v_00_u03b5_938_, lean_object* v_00_u03b5_x27_939_, lean_object* v_00_u03b1_940_, lean_object* v_f_941_, lean_object* v_m_942_){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = lean_apply_1(v_m_942_, lean_box(0));
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
lean_dec(v_f_941_);
v_a_945_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_944_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_944_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_961_; 
v_a_953_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_961_ == 0)
{
v___x_955_ = v___x_944_;
v_isShared_956_ = v_isSharedCheck_961_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_944_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_961_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_957_; lean_object* v___x_959_; 
v___x_957_ = lean_apply_1(v_f_941_, v_a_953_);
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 0, v___x_957_);
v___x_959_ = v___x_955_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_957_);
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
LEAN_EXPORT lean_object* l_EIO_adapt___boxed(lean_object* v_00_u03b5_962_, lean_object* v_00_u03b5_x27_963_, lean_object* v_00_u03b1_964_, lean_object* v_f_965_, lean_object* v_m_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_EIO_adapt(v_00_u03b5_962_, v_00_u03b5_x27_963_, v_00_u03b1_964_, v_f_965_, v_m_966_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_EIO_adaptExcept___redArg(lean_object* v_f_969_, lean_object* v_m_970_){
_start:
{
lean_object* v___x_972_; 
v___x_972_ = lean_apply_1(v_m_970_, lean_box(0));
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
lean_dec(v_f_969_);
v_a_973_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_972_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_972_);
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
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_989_; 
v_a_981_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_989_ == 0)
{
v___x_983_ = v___x_972_;
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_972_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_989_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_985_; lean_object* v___x_987_; 
v___x_985_ = lean_apply_1(v_f_969_, v_a_981_);
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 0, v___x_985_);
v___x_987_ = v___x_983_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v___x_985_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_adaptExcept___redArg___boxed(lean_object* v_f_990_, lean_object* v_m_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_EIO_adaptExcept___redArg(v_f_990_, v_m_991_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_EIO_adaptExcept(lean_object* v_00_u03b5_994_, lean_object* v_00_u03b5_x27_995_, lean_object* v_00_u03b1_996_, lean_object* v_f_997_, lean_object* v_m_998_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = lean_apply_1(v_m_998_, lean_box(0));
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
lean_dec(v_f_997_);
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_1000_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_1000_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1017_; 
v_a_1009_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1011_ = v___x_1000_;
v_isShared_1012_ = v_isSharedCheck_1017_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1000_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1017_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1013_; lean_object* v___x_1015_; 
v___x_1013_ = lean_apply_1(v_f_997_, v_a_1009_);
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 0, v___x_1013_);
v___x_1015_ = v___x_1011_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v___x_1013_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_adaptExcept___boxed(lean_object* v_00_u03b5_1018_, lean_object* v_00_u03b5_x27_1019_, lean_object* v_00_u03b1_1020_, lean_object* v_f_1021_, lean_object* v_m_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_EIO_adaptExcept(v_00_u03b5_1018_, v_00_u03b5_x27_1019_, v_00_u03b1_1020_, v_f_1021_, v_m_1022_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toIO___redArg(lean_object* v_act_1025_){
_start:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1027_ = lean_apply_1(v_act_1025_, lean_box(0));
v___x_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1027_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toIO___redArg___boxed(lean_object* v_act_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_BaseIO_toIO___redArg(v_act_1029_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toIO(lean_object* v_00_u03b1_1032_, lean_object* v_act_1033_){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = lean_apply_1(v_act_1033_, lean_box(0));
v___x_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_toIO___boxed(lean_object* v_00_u03b1_1037_, lean_object* v_act_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_BaseIO_toIO(v_00_u03b1_1037_, v_act_1038_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_EIO_toIO___redArg(lean_object* v_f_1041_, lean_object* v_act_1042_){
_start:
{
lean_object* v___x_1044_; 
v___x_1044_ = lean_apply_1(v_act_1042_, lean_box(0));
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
lean_dec_ref(v_f_1041_);
v_a_1045_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1047_ = v___x_1044_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1044_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1045_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1061_; 
v_a_1053_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1055_ = v___x_1044_;
v_isShared_1056_ = v_isSharedCheck_1061_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1044_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1061_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1057_; lean_object* v___x_1059_; 
v___x_1057_ = lean_apply_1(v_f_1041_, v_a_1053_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set(v___x_1055_, 0, v___x_1057_);
v___x_1059_ = v___x_1055_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1057_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toIO___redArg___boxed(lean_object* v_f_1062_, lean_object* v_act_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_EIO_toIO___redArg(v_f_1062_, v_act_1063_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_EIO_toIO(lean_object* v_00_u03b5_1066_, lean_object* v_00_u03b1_1067_, lean_object* v_f_1068_, lean_object* v_act_1069_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = lean_apply_1(v_act_1069_, lean_box(0));
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
lean_dec_ref(v_f_1068_);
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1071_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1071_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1088_; 
v_a_1080_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1082_ = v___x_1071_;
v_isShared_1083_ = v_isSharedCheck_1088_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1071_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1088_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1084_ = lean_apply_1(v_f_1068_, v_a_1080_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 0, v___x_1084_);
v___x_1086_ = v___x_1082_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toIO___boxed(lean_object* v_00_u03b5_1089_, lean_object* v_00_u03b1_1090_, lean_object* v_f_1091_, lean_object* v_act_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_EIO_toIO(v_00_u03b5_1089_, v_00_u03b1_1090_, v_f_1091_, v_act_1092_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_EIO_toIO_x27___redArg(lean_object* v_act_1095_){
_start:
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_apply_1(v_act_1095_, lean_box(0));
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1106_; 
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1100_ = v___x_1097_;
v_isShared_1101_ = v_isSharedCheck_1106_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1097_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1106_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1102_; lean_object* v___x_1104_; 
v___x_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1102_, 0, v_a_1098_);
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 0, v___x_1102_);
v___x_1104_ = v___x_1100_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___x_1102_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
else
{
lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1115_; 
v_a_1107_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1109_ = v___x_1097_;
v_isShared_1110_ = v_isSharedCheck_1115_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1097_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1115_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1111_, 0, v_a_1107_);
if (v_isShared_1110_ == 0)
{
lean_ctor_set_tag(v___x_1109_, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1111_);
v___x_1113_ = v___x_1109_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1111_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toIO_x27___redArg___boxed(lean_object* v_act_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v_res_1118_; 
v_res_1118_ = l_EIO_toIO_x27___redArg(v_act_1116_);
return v_res_1118_;
}
}
LEAN_EXPORT lean_object* l_EIO_toIO_x27(lean_object* v_00_u03b5_1119_, lean_object* v_00_u03b1_1120_, lean_object* v_act_1121_){
_start:
{
lean_object* v___x_1123_; 
v___x_1123_ = lean_apply_1(v_act_1121_, lean_box(0));
if (lean_obj_tag(v___x_1123_) == 0)
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1132_; 
v_a_1124_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1126_ = v___x_1123_;
v_isShared_1127_ = v_isSharedCheck_1132_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1123_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1132_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1128_, 0, v_a_1124_);
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 0, v___x_1128_);
v___x_1130_ = v___x_1126_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
else
{
lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1141_; 
v_a_1133_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1135_ = v___x_1123_;
v_isShared_1136_ = v_isSharedCheck_1141_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v___x_1123_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1141_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1139_; 
v___x_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1137_, 0, v_a_1133_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set_tag(v___x_1135_, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1137_);
v___x_1139_ = v___x_1135_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v___x_1137_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_toIO_x27___boxed(lean_object* v_00_u03b5_1142_, lean_object* v_00_u03b1_1143_, lean_object* v_act_1144_, lean_object* v___y_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_EIO_toIO_x27(v_00_u03b5_1142_, v_00_u03b1_1143_, v_act_1144_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_IO_toEIO___redArg(lean_object* v_f_1147_, lean_object* v_act_1148_){
_start:
{
lean_object* v___x_1150_; 
v___x_1150_ = lean_apply_1(v_act_1148_, lean_box(0));
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
lean_dec(v_f_1147_);
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1150_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1150_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1167_; 
v_a_1159_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1161_ = v___x_1150_;
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1150_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1167_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1163_ = lean_apply_1(v_f_1147_, v_a_1159_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 0, v___x_1163_);
v___x_1165_ = v___x_1161_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v___x_1163_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_toEIO___redArg___boxed(lean_object* v_f_1168_, lean_object* v_act_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_IO_toEIO___redArg(v_f_1168_, v_act_1169_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_IO_toEIO(lean_object* v_00_u03b5_1172_, lean_object* v_00_u03b1_1173_, lean_object* v_f_1174_, lean_object* v_act_1175_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = lean_apply_1(v_act_1175_, lean_box(0));
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
lean_dec(v_f_1174_);
v_a_1178_ = lean_ctor_get(v___x_1177_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1177_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v___x_1177_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_a_1178_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
else
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1194_; 
v_a_1186_ = lean_ctor_get(v___x_1177_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1188_ = v___x_1177_;
v_isShared_1189_ = v_isSharedCheck_1194_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1177_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1194_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1190_; lean_object* v___x_1192_; 
v___x_1190_ = lean_apply_1(v_f_1174_, v_a_1186_);
if (v_isShared_1189_ == 0)
{
lean_ctor_set(v___x_1188_, 0, v___x_1190_);
v___x_1192_ = v___x_1188_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v___x_1190_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_toEIO___boxed(lean_object* v_00_u03b5_1195_, lean_object* v_00_u03b1_1196_, lean_object* v_f_1197_, lean_object* v_act_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_IO_toEIO(v_00_u03b5_1195_, v_00_u03b1_1196_, v_f_1197_, v_act_1198_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_unsafeBaseIO___redArg(lean_object* v_fn_1201_){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = lean_box(0);
v___x_1203_ = lean_apply_1(v_fn_1201_, v___x_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_unsafeBaseIO(lean_object* v_00_u03b1_1204_, lean_object* v_fn_1205_){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = l_unsafeBaseIO___redArg(v_fn_1205_);
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* l_unsafeEIO___redArg(lean_object* v_fn_1207_){
_start:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1208_, 0, lean_box(0));
lean_closure_set(v___x_1208_, 1, lean_box(0));
lean_closure_set(v___x_1208_, 2, v_fn_1207_);
v___x_1209_ = l_unsafeBaseIO___redArg(v___x_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_unsafeEIO(lean_object* v_00_u03b5_1210_, lean_object* v_00_u03b1_1211_, lean_object* v_fn_1212_){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1213_, 0, lean_box(0));
lean_closure_set(v___x_1213_, 1, lean_box(0));
lean_closure_set(v___x_1213_, 2, v_fn_1212_);
v___x_1214_ = l_unsafeBaseIO___redArg(v___x_1213_);
return v___x_1214_;
}
}
LEAN_EXPORT lean_object* l_unsafeIO___redArg(lean_object* v_fn_1215_){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1216_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1216_, 0, lean_box(0));
lean_closure_set(v___x_1216_, 1, lean_box(0));
lean_closure_set(v___x_1216_, 2, v_fn_1215_);
v___x_1217_ = l_unsafeBaseIO___redArg(v___x_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_unsafeIO(lean_object* v_00_u03b1_1218_, lean_object* v_fn_1219_){
_start:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1220_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1220_, 0, lean_box(0));
lean_closure_set(v___x_1220_, 1, lean_box(0));
lean_closure_set(v___x_1220_, 2, v_fn_1219_);
v___x_1221_ = l_unsafeBaseIO___redArg(v___x_1220_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_timeit___boxed(lean_object* v_00_u03b1_1226_, lean_object* v_msg_1227_, lean_object* v_fn_1228_, lean_object* v_a_00___x40___internal___hyg_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = lean_io_timeit(v_msg_1227_, v_fn_1228_);
lean_dec_ref(v_msg_1227_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l_allocprof___boxed(lean_object* v_00_u03b1_1235_, lean_object* v_msg_1236_, lean_object* v_fn_1237_, lean_object* v_a_00___x40___internal___hyg_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = lean_io_allocprof(v_msg_1236_, v_fn_1237_);
lean_dec_ref(v_msg_1236_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_IO_initializing___boxed(lean_object* v_a_00___x40___internal___hyg_1241_){
_start:
{
uint8_t v_res_1242_; lean_object* v_r_1243_; 
v_res_1242_ = lean_io_initializing();
v_r_1243_ = lean_box(v_res_1242_);
return v_r_1243_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_asTask___boxed(lean_object* v_00_u03b1_1248_, lean_object* v_act_1249_, lean_object* v_prio_1250_, lean_object* v_a_00___x40___internal___hyg_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = lean_io_as_task(v_act_1249_, v_prio_1250_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mapTask___boxed(lean_object* v_00_u03b1_1260_, lean_object* v_00_u03b2_1261_, lean_object* v_f_1262_, lean_object* v_t_1263_, lean_object* v_prio_1264_, lean_object* v_sync_1265_, lean_object* v_a_00___x40___internal___hyg_1266_){
_start:
{
uint8_t v_sync_boxed_1267_; lean_object* v_res_1268_; 
v_sync_boxed_1267_ = lean_unbox(v_sync_1265_);
v_res_1268_ = lean_io_map_task(v_f_1262_, v_t_1263_, v_prio_1264_, v_sync_boxed_1267_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_bindTask___boxed(lean_object* v_00_u03b1_1276_, lean_object* v_00_u03b2_1277_, lean_object* v_t_1278_, lean_object* v_f_1279_, lean_object* v_prio_1280_, lean_object* v_sync_1281_, lean_object* v_a_00___x40___internal___hyg_1282_){
_start:
{
uint8_t v_sync_boxed_1283_; lean_object* v_res_1284_; 
v_sync_boxed_1283_ = lean_unbox(v_sync_1281_);
v_res_1284_ = lean_io_bind_task(v_t_1278_, v_f_1279_, v_prio_1280_, v_sync_boxed_1283_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_chainTask___redArg(lean_object* v_t_1285_, lean_object* v_f_1286_, lean_object* v_prio_1287_, uint8_t v_sync_1288_){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = lean_box(0);
v___x_1291_ = lean_io_map_task(v_f_1286_, v_t_1285_, v_prio_1287_, v_sync_1288_);
lean_dec_ref(v___x_1291_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_chainTask___redArg___boxed(lean_object* v_t_1292_, lean_object* v_f_1293_, lean_object* v_prio_1294_, lean_object* v_sync_1295_, lean_object* v___y_1296_){
_start:
{
uint8_t v_sync_boxed_1297_; lean_object* v_res_1298_; 
v_sync_boxed_1297_ = lean_unbox(v_sync_1295_);
v_res_1298_ = l_BaseIO_chainTask___redArg(v_t_1292_, v_f_1293_, v_prio_1294_, v_sync_boxed_1297_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_chainTask(lean_object* v_00_u03b1_1299_, lean_object* v_t_1300_, lean_object* v_f_1301_, lean_object* v_prio_1302_, uint8_t v_sync_1303_){
_start:
{
lean_object* v___x_1305_; 
v___x_1305_ = l_BaseIO_chainTask___redArg(v_t_1300_, v_f_1301_, v_prio_1302_, v_sync_1303_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_chainTask___boxed(lean_object* v_00_u03b1_1306_, lean_object* v_t_1307_, lean_object* v_f_1308_, lean_object* v_prio_1309_, lean_object* v_sync_1310_, lean_object* v___y_1311_){
_start:
{
uint8_t v_sync_boxed_1312_; lean_object* v_res_1313_; 
v_sync_boxed_1312_ = lean_unbox(v_sync_1310_);
v_res_1313_ = l_BaseIO_chainTask(v_00_u03b1_1306_, v_t_1307_, v_f_1308_, v_prio_1309_, v_sync_boxed_1312_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__0(lean_object* v_x_1314_, lean_object* v_f_1315_, lean_object* v_a_1316_){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1318_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1318_, 0, v_a_1316_);
lean_ctor_set(v___x_1318_, 1, v_x_1314_);
v___x_1319_ = l_List_reverse___redArg(v___x_1318_);
v___x_1320_ = lean_apply_2(v_f_1315_, v___x_1319_, lean_box(0));
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__0___boxed(lean_object* v_x_1321_, lean_object* v_f_1322_, lean_object* v_a_1323_, lean_object* v___y_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__0(v_x_1321_, v_f_1322_, v_a_1323_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__1___boxed(lean_object* v_x_1326_, lean_object* v_f_1327_, lean_object* v_prio_1328_, lean_object* v_sync_1329_, lean_object* v_tail_1330_, lean_object* v_a_1331_, lean_object* v___y_1332_){
_start:
{
uint8_t v_sync_boxed_1333_; lean_object* v_res_1334_; 
v_sync_boxed_1333_ = lean_unbox(v_sync_1329_);
v_res_1334_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__1(v_x_1326_, v_f_1327_, v_prio_1328_, v_sync_boxed_1333_, v_tail_1330_, v_a_1331_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg(lean_object* v_f_1335_, lean_object* v_prio_1336_, uint8_t v_sync_1337_, lean_object* v_x_1338_, lean_object* v_x_1339_){
_start:
{
if (lean_obj_tag(v_x_1338_) == 0)
{
if (v_sync_1337_ == 0)
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1341_ = l_List_reverse___redArg(v_x_1339_);
v___x_1342_ = lean_apply_1(v_f_1335_, v___x_1341_);
v___x_1343_ = lean_io_as_task(v___x_1342_, v_prio_1336_);
return v___x_1343_;
}
else
{
lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
lean_dec(v_prio_1336_);
v___x_1344_ = l_List_reverse___redArg(v_x_1339_);
v___x_1345_ = lean_apply_2(v_f_1335_, v___x_1344_, lean_box(0));
v___x_1346_ = lean_task_pure(v___x_1345_);
return v___x_1346_;
}
}
else
{
lean_object* v_tail_1347_; 
v_tail_1347_ = lean_ctor_get(v_x_1338_, 1);
if (lean_obj_tag(v_tail_1347_) == 0)
{
lean_object* v_head_1348_; lean_object* v___f_1349_; lean_object* v___x_1350_; 
v_head_1348_ = lean_ctor_get(v_x_1338_, 0);
lean_inc(v_head_1348_);
lean_dec_ref_known(v_x_1338_, 2);
v___f_1349_ = lean_alloc_closure((void*)(l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1349_, 0, v_x_1339_);
lean_closure_set(v___f_1349_, 1, v_f_1335_);
v___x_1350_ = lean_io_map_task(v___f_1349_, v_head_1348_, v_prio_1336_, v_sync_1337_);
return v___x_1350_;
}
else
{
lean_object* v_head_1351_; lean_object* v___x_1352_; lean_object* v___f_1353_; lean_object* v___x_1354_; 
lean_inc(v_tail_1347_);
v_head_1351_ = lean_ctor_get(v_x_1338_, 0);
lean_inc(v_head_1351_);
lean_dec_ref_known(v_x_1338_, 2);
v___x_1352_ = lean_box(v_sync_1337_);
lean_inc(v_prio_1336_);
v___f_1353_ = lean_alloc_closure((void*)(l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__1___boxed), 7, 5);
lean_closure_set(v___f_1353_, 0, v_x_1339_);
lean_closure_set(v___f_1353_, 1, v_f_1335_);
lean_closure_set(v___f_1353_, 2, v_prio_1336_);
lean_closure_set(v___f_1353_, 3, v___x_1352_);
lean_closure_set(v___f_1353_, 4, v_tail_1347_);
v___x_1354_ = lean_io_bind_task(v_head_1351_, v___f_1353_, v_prio_1336_, v_sync_1337_);
return v___x_1354_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___lam__1(lean_object* v_x_1355_, lean_object* v_f_1356_, lean_object* v_prio_1357_, uint8_t v_sync_1358_, lean_object* v_tail_1359_, lean_object* v_a_1360_){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1362_, 0, v_a_1360_);
lean_ctor_set(v___x_1362_, 1, v_x_1355_);
v___x_1363_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg(v_f_1356_, v_prio_1357_, v_sync_1358_, v_tail_1359_, v___x_1362_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg___boxed(lean_object* v_f_1364_, lean_object* v_prio_1365_, lean_object* v_sync_1366_, lean_object* v_x_1367_, lean_object* v_x_1368_, lean_object* v___y_1369_){
_start:
{
uint8_t v_sync_boxed_1370_; lean_object* v_res_1371_; 
v_sync_boxed_1370_ = lean_unbox(v_sync_1366_);
v_res_1371_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg(v_f_1364_, v_prio_1365_, v_sync_boxed_1370_, v_x_1367_, v_x_1368_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go(lean_object* v_00_u03b1_1372_, lean_object* v_00_u03b2_1373_, lean_object* v_f_1374_, lean_object* v_prio_1375_, uint8_t v_sync_1376_, lean_object* v_x_1377_, lean_object* v_x_1378_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg(v_f_1374_, v_prio_1375_, v_sync_1376_, v_x_1377_, v_x_1378_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__BaseIO_mapTasks_go___boxed(lean_object* v_00_u03b1_1381_, lean_object* v_00_u03b2_1382_, lean_object* v_f_1383_, lean_object* v_prio_1384_, lean_object* v_sync_1385_, lean_object* v_x_1386_, lean_object* v_x_1387_, lean_object* v___y_1388_){
_start:
{
uint8_t v_sync_boxed_1389_; lean_object* v_res_1390_; 
v_sync_boxed_1389_ = lean_unbox(v_sync_1385_);
v_res_1390_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go(v_00_u03b1_1381_, v_00_u03b2_1382_, v_f_1383_, v_prio_1384_, v_sync_boxed_1389_, v_x_1386_, v_x_1387_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mapTasks___redArg(lean_object* v_f_1391_, lean_object* v_tasks_1392_, lean_object* v_prio_1393_, uint8_t v_sync_1394_){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = lean_box(0);
v___x_1397_ = l___private_Init_System_IO_0__BaseIO_mapTasks_go___redArg(v_f_1391_, v_prio_1393_, v_sync_1394_, v_tasks_1392_, v___x_1396_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mapTasks___redArg___boxed(lean_object* v_f_1398_, lean_object* v_tasks_1399_, lean_object* v_prio_1400_, lean_object* v_sync_1401_, lean_object* v___y_1402_){
_start:
{
uint8_t v_sync_boxed_1403_; lean_object* v_res_1404_; 
v_sync_boxed_1403_ = lean_unbox(v_sync_1401_);
v_res_1404_ = l_BaseIO_mapTasks___redArg(v_f_1398_, v_tasks_1399_, v_prio_1400_, v_sync_boxed_1403_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mapTasks(lean_object* v_00_u03b1_1405_, lean_object* v_00_u03b2_1406_, lean_object* v_f_1407_, lean_object* v_tasks_1408_, lean_object* v_prio_1409_, uint8_t v_sync_1410_){
_start:
{
lean_object* v___x_1412_; 
v___x_1412_ = l_BaseIO_mapTasks___redArg(v_f_1407_, v_tasks_1408_, v_prio_1409_, v_sync_1410_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l_BaseIO_mapTasks___boxed(lean_object* v_00_u03b1_1413_, lean_object* v_00_u03b2_1414_, lean_object* v_f_1415_, lean_object* v_tasks_1416_, lean_object* v_prio_1417_, lean_object* v_sync_1418_, lean_object* v___y_1419_){
_start:
{
uint8_t v_sync_boxed_1420_; lean_object* v_res_1421_; 
v_sync_boxed_1420_ = lean_unbox(v_sync_1418_);
v_res_1421_ = l_BaseIO_mapTasks(v_00_u03b1_1413_, v_00_u03b2_1414_, v_f_1415_, v_tasks_1416_, v_prio_1417_, v_sync_boxed_1420_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_EIO_asTask___redArg(lean_object* v_act_1422_, lean_object* v_prio_1423_){
_start:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; 
v___x_1425_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1425_, 0, lean_box(0));
lean_closure_set(v___x_1425_, 1, lean_box(0));
lean_closure_set(v___x_1425_, 2, v_act_1422_);
v___x_1426_ = lean_io_as_task(v___x_1425_, v_prio_1423_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l_EIO_asTask___redArg___boxed(lean_object* v_act_1427_, lean_object* v_prio_1428_, lean_object* v___y_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l_EIO_asTask___redArg(v_act_1427_, v_prio_1428_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_EIO_asTask(lean_object* v_00_u03b5_1431_, lean_object* v_00_u03b1_1432_, lean_object* v_act_1433_, lean_object* v_prio_1434_){
_start:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1436_, 0, lean_box(0));
lean_closure_set(v___x_1436_, 1, lean_box(0));
lean_closure_set(v___x_1436_, 2, v_act_1433_);
v___x_1437_ = lean_io_as_task(v___x_1436_, v_prio_1434_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_EIO_asTask___boxed(lean_object* v_00_u03b5_1438_, lean_object* v_00_u03b1_1439_, lean_object* v_act_1440_, lean_object* v_prio_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_EIO_asTask(v_00_u03b5_1438_, v_00_u03b1_1439_, v_act_1440_, v_prio_1441_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg___lam__0(lean_object* v_f_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v___x_1447_; 
v___x_1447_ = lean_apply_2(v_f_1444_, v_a_1445_, lean_box(0));
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
v_a_1448_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1447_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1447_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
lean_ctor_set_tag(v___x_1450_, 1);
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
else
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1463_; 
v_a_1456_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1458_ = v___x_1447_;
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v___x_1447_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
lean_ctor_set_tag(v___x_1458_, 0);
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_a_1456_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg___lam__0___boxed(lean_object* v_f_1464_, lean_object* v_a_1465_, lean_object* v___y_1466_){
_start:
{
lean_object* v_res_1467_; 
v_res_1467_ = l_EIO_mapTask___redArg___lam__0(v_f_1464_, v_a_1465_);
return v_res_1467_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg(lean_object* v_f_1468_, lean_object* v_t_1469_, lean_object* v_prio_1470_, uint8_t v_sync_1471_){
_start:
{
lean_object* v___f_1473_; lean_object* v___x_1474_; 
v___f_1473_ = lean_alloc_closure((void*)(l_EIO_mapTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1473_, 0, v_f_1468_);
v___x_1474_ = lean_io_map_task(v___f_1473_, v_t_1469_, v_prio_1470_, v_sync_1471_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask___redArg___boxed(lean_object* v_f_1475_, lean_object* v_t_1476_, lean_object* v_prio_1477_, lean_object* v_sync_1478_, lean_object* v___y_1479_){
_start:
{
uint8_t v_sync_boxed_1480_; lean_object* v_res_1481_; 
v_sync_boxed_1480_ = lean_unbox(v_sync_1478_);
v_res_1481_ = l_EIO_mapTask___redArg(v_f_1475_, v_t_1476_, v_prio_1477_, v_sync_boxed_1480_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask(lean_object* v_00_u03b1_1482_, lean_object* v_00_u03b5_1483_, lean_object* v_00_u03b2_1484_, lean_object* v_f_1485_, lean_object* v_t_1486_, lean_object* v_prio_1487_, uint8_t v_sync_1488_){
_start:
{
lean_object* v___f_1490_; lean_object* v___x_1491_; 
v___f_1490_ = lean_alloc_closure((void*)(l_EIO_mapTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1490_, 0, v_f_1485_);
v___x_1491_ = lean_io_map_task(v___f_1490_, v_t_1486_, v_prio_1487_, v_sync_1488_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTask___boxed(lean_object* v_00_u03b1_1492_, lean_object* v_00_u03b5_1493_, lean_object* v_00_u03b2_1494_, lean_object* v_f_1495_, lean_object* v_t_1496_, lean_object* v_prio_1497_, lean_object* v_sync_1498_, lean_object* v___y_1499_){
_start:
{
uint8_t v_sync_boxed_1500_; lean_object* v_res_1501_; 
v_sync_boxed_1500_ = lean_unbox(v_sync_1498_);
v_res_1501_ = l_EIO_mapTask(v_00_u03b1_1492_, v_00_u03b5_1493_, v_00_u03b2_1494_, v_f_1495_, v_t_1496_, v_prio_1497_, v_sync_boxed_1500_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg___lam__0(lean_object* v_f_1502_, lean_object* v_a_1503_){
_start:
{
lean_object* v___x_1505_; 
v___x_1505_ = lean_apply_2(v_f_1502_, v_a_1503_, lean_box(0));
if (lean_obj_tag(v___x_1505_) == 0)
{
lean_object* v_a_1506_; 
v_a_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_a_1506_);
lean_dec_ref_known(v___x_1505_, 1);
return v_a_1506_;
}
else
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1515_; 
v_a_1507_ = lean_ctor_get(v___x_1505_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1505_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1509_ = v___x_1505_;
v_isShared_1510_ = v_isSharedCheck_1515_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1505_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1515_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1512_; 
if (v_isShared_1510_ == 0)
{
lean_ctor_set_tag(v___x_1509_, 0);
v___x_1512_ = v___x_1509_;
goto v_reusejp_1511_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1507_);
v___x_1512_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1511_;
}
v_reusejp_1511_:
{
lean_object* v___x_1513_; 
v___x_1513_ = lean_task_pure(v___x_1512_);
return v___x_1513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg___lam__0___boxed(lean_object* v_f_1516_, lean_object* v_a_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l_EIO_bindTask___redArg___lam__0(v_f_1516_, v_a_1517_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg(lean_object* v_t_1520_, lean_object* v_f_1521_, lean_object* v_prio_1522_, uint8_t v_sync_1523_){
_start:
{
lean_object* v___f_1525_; lean_object* v___x_1526_; 
v___f_1525_ = lean_alloc_closure((void*)(l_EIO_bindTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1525_, 0, v_f_1521_);
v___x_1526_ = lean_io_bind_task(v_t_1520_, v___f_1525_, v_prio_1522_, v_sync_1523_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask___redArg___boxed(lean_object* v_t_1527_, lean_object* v_f_1528_, lean_object* v_prio_1529_, lean_object* v_sync_1530_, lean_object* v___y_1531_){
_start:
{
uint8_t v_sync_boxed_1532_; lean_object* v_res_1533_; 
v_sync_boxed_1532_ = lean_unbox(v_sync_1530_);
v_res_1533_ = l_EIO_bindTask___redArg(v_t_1527_, v_f_1528_, v_prio_1529_, v_sync_boxed_1532_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask(lean_object* v_00_u03b1_1534_, lean_object* v_00_u03b5_1535_, lean_object* v_00_u03b2_1536_, lean_object* v_t_1537_, lean_object* v_f_1538_, lean_object* v_prio_1539_, uint8_t v_sync_1540_){
_start:
{
lean_object* v___f_1542_; lean_object* v___x_1543_; 
v___f_1542_ = lean_alloc_closure((void*)(l_EIO_bindTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1542_, 0, v_f_1538_);
v___x_1543_ = lean_io_bind_task(v_t_1537_, v___f_1542_, v_prio_1539_, v_sync_1540_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_EIO_bindTask___boxed(lean_object* v_00_u03b1_1544_, lean_object* v_00_u03b5_1545_, lean_object* v_00_u03b2_1546_, lean_object* v_t_1547_, lean_object* v_f_1548_, lean_object* v_prio_1549_, lean_object* v_sync_1550_, lean_object* v___y_1551_){
_start:
{
uint8_t v_sync_boxed_1552_; lean_object* v_res_1553_; 
v_sync_boxed_1552_ = lean_unbox(v_sync_1550_);
v_res_1553_ = l_EIO_bindTask(v_00_u03b1_1544_, v_00_u03b5_1545_, v_00_u03b2_1546_, v_t_1547_, v_f_1548_, v_prio_1549_, v_sync_boxed_1552_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg___lam__0(lean_object* v_f_1554_, lean_object* v_a_1555_){
_start:
{
lean_object* v___x_1557_; 
v___x_1557_ = lean_apply_2(v_f_1554_, v_a_1555_, lean_box(0));
if (lean_obj_tag(v___x_1557_) == 0)
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
v_a_1558_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1557_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1557_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
lean_ctor_set_tag(v___x_1560_, 1);
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1558_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
else
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
v_a_1566_ = lean_ctor_get(v___x_1557_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1557_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1557_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1557_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
lean_ctor_set_tag(v___x_1568_, 0);
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg___lam__0___boxed(lean_object* v_f_1574_, lean_object* v_a_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l_EIO_chainTask___redArg___lam__0(v_f_1574_, v_a_1575_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg(lean_object* v_t_1578_, lean_object* v_f_1579_, lean_object* v_prio_1580_, uint8_t v_sync_1581_){
_start:
{
lean_object* v___f_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___f_1583_ = lean_alloc_closure((void*)(l_EIO_chainTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1583_, 0, v_f_1579_);
v___x_1584_ = lean_box(0);
v___x_1585_ = lean_io_map_task(v___f_1583_, v_t_1578_, v_prio_1580_, v_sync_1581_);
lean_dec_ref(v___x_1585_);
v___x_1586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1584_);
return v___x_1586_;
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask___redArg___boxed(lean_object* v_t_1587_, lean_object* v_f_1588_, lean_object* v_prio_1589_, lean_object* v_sync_1590_, lean_object* v___y_1591_){
_start:
{
uint8_t v_sync_boxed_1592_; lean_object* v_res_1593_; 
v_sync_boxed_1592_ = lean_unbox(v_sync_1590_);
v_res_1593_ = l_EIO_chainTask___redArg(v_t_1587_, v_f_1588_, v_prio_1589_, v_sync_boxed_1592_);
return v_res_1593_;
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask(lean_object* v_00_u03b1_1594_, lean_object* v_00_u03b5_1595_, lean_object* v_t_1596_, lean_object* v_f_1597_, lean_object* v_prio_1598_, uint8_t v_sync_1599_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_EIO_chainTask___redArg(v_t_1596_, v_f_1597_, v_prio_1598_, v_sync_1599_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_EIO_chainTask___boxed(lean_object* v_00_u03b1_1602_, lean_object* v_00_u03b5_1603_, lean_object* v_t_1604_, lean_object* v_f_1605_, lean_object* v_prio_1606_, lean_object* v_sync_1607_, lean_object* v___y_1608_){
_start:
{
uint8_t v_sync_boxed_1609_; lean_object* v_res_1610_; 
v_sync_boxed_1609_ = lean_unbox(v_sync_1607_);
v_res_1610_ = l_EIO_chainTask(v_00_u03b1_1602_, v_00_u03b5_1603_, v_t_1604_, v_f_1605_, v_prio_1606_, v_sync_boxed_1609_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg___lam__0(lean_object* v_f_1611_, lean_object* v_as_1612_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = lean_apply_2(v_f_1611_, v_as_1612_, lean_box(0));
if (lean_obj_tag(v___x_1614_) == 0)
{
lean_object* v_a_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1622_; 
v_a_1615_ = lean_ctor_get(v___x_1614_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v___x_1614_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1617_ = v___x_1614_;
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_a_1615_);
lean_dec(v___x_1614_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1622_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1620_; 
if (v_isShared_1618_ == 0)
{
lean_ctor_set_tag(v___x_1617_, 1);
v___x_1620_ = v___x_1617_;
goto v_reusejp_1619_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_a_1615_);
v___x_1620_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1619_;
}
v_reusejp_1619_:
{
return v___x_1620_;
}
}
}
else
{
lean_object* v_a_1623_; lean_object* v___x_1625_; uint8_t v_isShared_1626_; uint8_t v_isSharedCheck_1630_; 
v_a_1623_ = lean_ctor_get(v___x_1614_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1614_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1625_ = v___x_1614_;
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
else
{
lean_inc(v_a_1623_);
lean_dec(v___x_1614_);
v___x_1625_ = lean_box(0);
v_isShared_1626_ = v_isSharedCheck_1630_;
goto v_resetjp_1624_;
}
v_resetjp_1624_:
{
lean_object* v___x_1628_; 
if (v_isShared_1626_ == 0)
{
lean_ctor_set_tag(v___x_1625_, 0);
v___x_1628_ = v___x_1625_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v_a_1623_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
return v___x_1628_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg___lam__0___boxed(lean_object* v_f_1631_, lean_object* v_as_1632_, lean_object* v___y_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_EIO_mapTasks___redArg___lam__0(v_f_1631_, v_as_1632_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg(lean_object* v_f_1635_, lean_object* v_tasks_1636_, lean_object* v_prio_1637_, uint8_t v_sync_1638_){
_start:
{
lean_object* v___f_1640_; lean_object* v___x_1641_; 
v___f_1640_ = lean_alloc_closure((void*)(l_EIO_mapTasks___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1640_, 0, v_f_1635_);
v___x_1641_ = l_BaseIO_mapTasks___redArg(v___f_1640_, v_tasks_1636_, v_prio_1637_, v_sync_1638_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTasks___redArg___boxed(lean_object* v_f_1642_, lean_object* v_tasks_1643_, lean_object* v_prio_1644_, lean_object* v_sync_1645_, lean_object* v___y_1646_){
_start:
{
uint8_t v_sync_boxed_1647_; lean_object* v_res_1648_; 
v_sync_boxed_1647_ = lean_unbox(v_sync_1645_);
v_res_1648_ = l_EIO_mapTasks___redArg(v_f_1642_, v_tasks_1643_, v_prio_1644_, v_sync_boxed_1647_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTasks(lean_object* v_00_u03b1_1649_, lean_object* v_00_u03b5_1650_, lean_object* v_00_u03b2_1651_, lean_object* v_f_1652_, lean_object* v_tasks_1653_, lean_object* v_prio_1654_, uint8_t v_sync_1655_){
_start:
{
lean_object* v___f_1657_; lean_object* v___x_1658_; 
v___f_1657_ = lean_alloc_closure((void*)(l_EIO_mapTasks___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1657_, 0, v_f_1652_);
v___x_1658_ = l_BaseIO_mapTasks___redArg(v___f_1657_, v_tasks_1653_, v_prio_1654_, v_sync_1655_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_EIO_mapTasks___boxed(lean_object* v_00_u03b1_1659_, lean_object* v_00_u03b5_1660_, lean_object* v_00_u03b2_1661_, lean_object* v_f_1662_, lean_object* v_tasks_1663_, lean_object* v_prio_1664_, lean_object* v_sync_1665_, lean_object* v___y_1666_){
_start:
{
uint8_t v_sync_boxed_1667_; lean_object* v_res_1668_; 
v_sync_boxed_1667_ = lean_unbox(v_sync_1665_);
v_res_1668_ = l_EIO_mapTasks(v_00_u03b1_1659_, v_00_u03b5_1660_, v_00_u03b2_1661_, v_f_1662_, v_tasks_1663_, v_prio_1664_, v_sync_boxed_1667_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___redArg(lean_object* v_inst_1669_, lean_object* v_e_1670_){
_start:
{
if (lean_obj_tag(v_e_1670_) == 0)
{
lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1681_; 
v_a_1672_ = lean_ctor_get(v_e_1670_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v_e_1670_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1674_ = v_e_1670_;
v_isShared_1675_ = v_isSharedCheck_1681_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v_e_1670_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1681_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1679_; 
v___x_1676_ = lean_apply_1(v_inst_1669_, v_a_1672_);
v___x_1677_ = lean_mk_io_user_error(v___x_1676_);
if (v_isShared_1675_ == 0)
{
lean_ctor_set_tag(v___x_1674_, 1);
lean_ctor_set(v___x_1674_, 0, v___x_1677_);
v___x_1679_ = v___x_1674_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
else
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1689_; 
lean_dec_ref(v_inst_1669_);
v_a_1682_ = lean_ctor_get(v_e_1670_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v_e_1670_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1684_ = v_e_1670_;
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v_e_1670_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1687_; 
if (v_isShared_1685_ == 0)
{
lean_ctor_set_tag(v___x_1684_, 0);
v___x_1687_ = v___x_1684_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v_a_1682_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___redArg___boxed(lean_object* v_inst_1690_, lean_object* v_e_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_IO_ofExcept___redArg(v_inst_1690_, v_e_1691_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept(lean_object* v_00_u03b5_1694_, lean_object* v_00_u03b1_1695_, lean_object* v_inst_1696_, lean_object* v_e_1697_){
_start:
{
lean_object* v___x_1699_; 
v___x_1699_ = l_IO_ofExcept___redArg(v_inst_1696_, v_e_1697_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___boxed(lean_object* v_00_u03b5_1700_, lean_object* v_00_u03b1_1701_, lean_object* v_inst_1702_, lean_object* v_e_1703_, lean_object* v___y_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l_IO_ofExcept(v_00_u03b5_1700_, v_00_u03b1_1701_, v_inst_1702_, v_e_1703_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_IO_lazyPure___redArg(lean_object* v_fn_1706_){
_start:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1708_ = lean_box(0);
v___x_1709_ = lean_apply_1(v_fn_1706_, v___x_1708_);
v___x_1710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1709_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l_IO_lazyPure___redArg___boxed(lean_object* v_fn_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_IO_lazyPure___redArg(v_fn_1711_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_IO_lazyPure(lean_object* v_00_u03b1_1714_, lean_object* v_fn_1715_){
_start:
{
lean_object* v___x_1717_; 
v___x_1717_ = l_IO_lazyPure___redArg(v_fn_1715_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_IO_lazyPure___boxed(lean_object* v_00_u03b1_1718_, lean_object* v_fn_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_IO_lazyPure(v_00_u03b1_1718_, v_fn_1719_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_IO_monoMsNow___boxed(lean_object* v_a_00___x40___internal___hyg_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = lean_io_mono_ms_now();
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_IO_monoNanosNow___boxed(lean_object* v_a_00___x40___internal___hyg_1726_){
_start:
{
lean_object* v_res_1727_; 
v_res_1727_ = lean_io_mono_nanos_now();
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l_IO_getRandomBytes___boxed(lean_object* v_nBytes_1730_, lean_object* v_a_00___x40___internal___hyg_1731_){
_start:
{
size_t v_nBytes_boxed_1732_; lean_object* v_res_1733_; 
v_nBytes_boxed_1732_ = lean_unbox_usize(v_nBytes_1730_);
lean_dec(v_nBytes_1730_);
v_res_1733_ = lean_io_get_random_bytes(v_nBytes_boxed_1732_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_IO_sleep___lam__0(lean_object* v_x_1735_){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = lean_box(0);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_IO_sleep___lam__0___boxed(lean_object* v___y_1737_, lean_object* v_x_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_IO_sleep___lam__0(v_x_1738_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_IO_sleep(uint32_t v_ms_1740_){
_start:
{
lean_object* v___f_1742_; lean_object* v___x_1743_; 
v___f_1742_ = lean_alloc_closure((void*)(l_IO_sleep___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1742_, 0, lean_box(0));
v___x_1743_ = lean_dbg_sleep(v_ms_1740_, v___f_1742_);
return v___x_1743_;
}
}
LEAN_EXPORT lean_object* l_IO_sleep___boxed(lean_object* v_ms_1744_, lean_object* v___y_1745_){
_start:
{
uint32_t v_ms_boxed_1746_; lean_object* v_res_1747_; 
v_ms_boxed_1746_ = lean_unbox_uint32(v_ms_1744_);
lean_dec(v_ms_1744_);
v_res_1747_ = l_IO_sleep(v_ms_boxed_1746_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_IO_asTask___redArg(lean_object* v_act_1748_, lean_object* v_prio_1749_){
_start:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1751_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1751_, 0, lean_box(0));
lean_closure_set(v___x_1751_, 1, lean_box(0));
lean_closure_set(v___x_1751_, 2, v_act_1748_);
v___x_1752_ = lean_io_as_task(v___x_1751_, v_prio_1749_);
return v___x_1752_;
}
}
LEAN_EXPORT lean_object* l_IO_asTask___redArg___boxed(lean_object* v_act_1753_, lean_object* v_prio_1754_, lean_object* v___y_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l_IO_asTask___redArg(v_act_1753_, v_prio_1754_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l_IO_asTask(lean_object* v_00_u03b1_1757_, lean_object* v_act_1758_, lean_object* v_prio_1759_){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1761_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_1761_, 0, lean_box(0));
lean_closure_set(v___x_1761_, 1, lean_box(0));
lean_closure_set(v___x_1761_, 2, v_act_1758_);
v___x_1762_ = lean_io_as_task(v___x_1761_, v_prio_1759_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_IO_asTask___boxed(lean_object* v_00_u03b1_1763_, lean_object* v_act_1764_, lean_object* v_prio_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = l_IO_asTask(v_00_u03b1_1763_, v_act_1764_, v_prio_1765_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTask___redArg___lam__0(lean_object* v_f_1768_, lean_object* v_a_1769_){
_start:
{
lean_object* v___x_1771_; 
v___x_1771_ = lean_apply_2(v_f_1768_, v_a_1769_, lean_box(0));
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1779_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1774_ = v___x_1771_;
v_isShared_1775_ = v_isSharedCheck_1779_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v___x_1771_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1779_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1777_; 
if (v_isShared_1775_ == 0)
{
lean_ctor_set_tag(v___x_1774_, 1);
v___x_1777_ = v___x_1774_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v_a_1772_);
v___x_1777_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
return v___x_1777_;
}
}
}
else
{
lean_object* v_a_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1787_; 
v_a_1780_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1787_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1787_ == 0)
{
v___x_1782_ = v___x_1771_;
v_isShared_1783_ = v_isSharedCheck_1787_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_a_1780_);
lean_dec(v___x_1771_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1787_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1785_; 
if (v_isShared_1783_ == 0)
{
lean_ctor_set_tag(v___x_1782_, 0);
v___x_1785_ = v___x_1782_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v_a_1780_);
v___x_1785_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
return v___x_1785_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_mapTask___redArg___lam__0___boxed(lean_object* v_f_1788_, lean_object* v_a_1789_, lean_object* v___y_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_IO_mapTask___redArg___lam__0(v_f_1788_, v_a_1789_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTask___redArg(lean_object* v_f_1792_, lean_object* v_t_1793_, lean_object* v_prio_1794_, uint8_t v_sync_1795_){
_start:
{
lean_object* v___f_1797_; lean_object* v___x_1798_; 
v___f_1797_ = lean_alloc_closure((void*)(l_IO_mapTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1797_, 0, v_f_1792_);
v___x_1798_ = lean_io_map_task(v___f_1797_, v_t_1793_, v_prio_1794_, v_sync_1795_);
return v___x_1798_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTask___redArg___boxed(lean_object* v_f_1799_, lean_object* v_t_1800_, lean_object* v_prio_1801_, lean_object* v_sync_1802_, lean_object* v___y_1803_){
_start:
{
uint8_t v_sync_boxed_1804_; lean_object* v_res_1805_; 
v_sync_boxed_1804_ = lean_unbox(v_sync_1802_);
v_res_1805_ = l_IO_mapTask___redArg(v_f_1799_, v_t_1800_, v_prio_1801_, v_sync_boxed_1804_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTask(lean_object* v_00_u03b1_1806_, lean_object* v_00_u03b2_1807_, lean_object* v_f_1808_, lean_object* v_t_1809_, lean_object* v_prio_1810_, uint8_t v_sync_1811_){
_start:
{
lean_object* v___f_1813_; lean_object* v___x_1814_; 
v___f_1813_ = lean_alloc_closure((void*)(l_IO_mapTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1813_, 0, v_f_1808_);
v___x_1814_ = lean_io_map_task(v___f_1813_, v_t_1809_, v_prio_1810_, v_sync_1811_);
return v___x_1814_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTask___boxed(lean_object* v_00_u03b1_1815_, lean_object* v_00_u03b2_1816_, lean_object* v_f_1817_, lean_object* v_t_1818_, lean_object* v_prio_1819_, lean_object* v_sync_1820_, lean_object* v___y_1821_){
_start:
{
uint8_t v_sync_boxed_1822_; lean_object* v_res_1823_; 
v_sync_boxed_1822_ = lean_unbox(v_sync_1820_);
v_res_1823_ = l_IO_mapTask(v_00_u03b1_1815_, v_00_u03b2_1816_, v_f_1817_, v_t_1818_, v_prio_1819_, v_sync_boxed_1822_);
return v_res_1823_;
}
}
LEAN_EXPORT lean_object* l_IO_bindTask___redArg___lam__0(lean_object* v_f_1824_, lean_object* v_a_1825_){
_start:
{
lean_object* v___x_1827_; 
v___x_1827_ = lean_apply_2(v_f_1824_, v_a_1825_, lean_box(0));
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v_a_1828_; 
v_a_1828_ = lean_ctor_get(v___x_1827_, 0);
lean_inc(v_a_1828_);
lean_dec_ref_known(v___x_1827_, 1);
return v_a_1828_;
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1837_; 
v_a_1829_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1831_ = v___x_1827_;
v_isShared_1832_ = v_isSharedCheck_1837_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1827_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1837_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
lean_ctor_set_tag(v___x_1831_, 0);
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
lean_object* v___x_1835_; 
v___x_1835_ = lean_task_pure(v___x_1834_);
return v___x_1835_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_bindTask___redArg___lam__0___boxed(lean_object* v_f_1838_, lean_object* v_a_1839_, lean_object* v___y_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l_IO_bindTask___redArg___lam__0(v_f_1838_, v_a_1839_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_IO_bindTask___redArg(lean_object* v_t_1842_, lean_object* v_f_1843_, lean_object* v_prio_1844_, uint8_t v_sync_1845_){
_start:
{
lean_object* v___f_1847_; lean_object* v___x_1848_; 
v___f_1847_ = lean_alloc_closure((void*)(l_IO_bindTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1847_, 0, v_f_1843_);
v___x_1848_ = lean_io_bind_task(v_t_1842_, v___f_1847_, v_prio_1844_, v_sync_1845_);
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l_IO_bindTask___redArg___boxed(lean_object* v_t_1849_, lean_object* v_f_1850_, lean_object* v_prio_1851_, lean_object* v_sync_1852_, lean_object* v___y_1853_){
_start:
{
uint8_t v_sync_boxed_1854_; lean_object* v_res_1855_; 
v_sync_boxed_1854_ = lean_unbox(v_sync_1852_);
v_res_1855_ = l_IO_bindTask___redArg(v_t_1849_, v_f_1850_, v_prio_1851_, v_sync_boxed_1854_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l_IO_bindTask(lean_object* v_00_u03b1_1856_, lean_object* v_00_u03b2_1857_, lean_object* v_t_1858_, lean_object* v_f_1859_, lean_object* v_prio_1860_, uint8_t v_sync_1861_){
_start:
{
lean_object* v___f_1863_; lean_object* v___x_1864_; 
v___f_1863_ = lean_alloc_closure((void*)(l_IO_bindTask___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1863_, 0, v_f_1859_);
v___x_1864_ = lean_io_bind_task(v_t_1858_, v___f_1863_, v_prio_1860_, v_sync_1861_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_IO_bindTask___boxed(lean_object* v_00_u03b1_1865_, lean_object* v_00_u03b2_1866_, lean_object* v_t_1867_, lean_object* v_f_1868_, lean_object* v_prio_1869_, lean_object* v_sync_1870_, lean_object* v___y_1871_){
_start:
{
uint8_t v_sync_boxed_1872_; lean_object* v_res_1873_; 
v_sync_boxed_1872_ = lean_unbox(v_sync_1870_);
v_res_1873_ = l_IO_bindTask(v_00_u03b1_1865_, v_00_u03b2_1866_, v_t_1867_, v_f_1868_, v_prio_1869_, v_sync_boxed_1872_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_IO_chainTask___redArg(lean_object* v_t_1874_, lean_object* v_f_1875_, lean_object* v_prio_1876_, uint8_t v_sync_1877_){
_start:
{
lean_object* v___x_1879_; 
v___x_1879_ = l_EIO_chainTask___redArg(v_t_1874_, v_f_1875_, v_prio_1876_, v_sync_1877_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_IO_chainTask___redArg___boxed(lean_object* v_t_1880_, lean_object* v_f_1881_, lean_object* v_prio_1882_, lean_object* v_sync_1883_, lean_object* v___y_1884_){
_start:
{
uint8_t v_sync_boxed_1885_; lean_object* v_res_1886_; 
v_sync_boxed_1885_ = lean_unbox(v_sync_1883_);
v_res_1886_ = l_IO_chainTask___redArg(v_t_1880_, v_f_1881_, v_prio_1882_, v_sync_boxed_1885_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l_IO_chainTask(lean_object* v_00_u03b1_1887_, lean_object* v_t_1888_, lean_object* v_f_1889_, lean_object* v_prio_1890_, uint8_t v_sync_1891_){
_start:
{
lean_object* v___x_1893_; 
v___x_1893_ = l_EIO_chainTask___redArg(v_t_1888_, v_f_1889_, v_prio_1890_, v_sync_1891_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_IO_chainTask___boxed(lean_object* v_00_u03b1_1894_, lean_object* v_t_1895_, lean_object* v_f_1896_, lean_object* v_prio_1897_, lean_object* v_sync_1898_, lean_object* v___y_1899_){
_start:
{
uint8_t v_sync_boxed_1900_; lean_object* v_res_1901_; 
v_sync_boxed_1900_ = lean_unbox(v_sync_1898_);
v_res_1901_ = l_IO_chainTask(v_00_u03b1_1894_, v_t_1895_, v_f_1896_, v_prio_1897_, v_sync_boxed_1900_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg___lam__0(lean_object* v_f_1902_, lean_object* v_as_1903_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = lean_apply_2(v_f_1902_, v_as_1903_, lean_box(0));
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1905_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1905_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
lean_ctor_set_tag(v___x_1908_, 1);
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
else
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
v_a_1914_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1916_ = v___x_1905_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1905_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
lean_ctor_set_tag(v___x_1916_, 0);
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(0, 1, 0);
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
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg___lam__0___boxed(lean_object* v_f_1922_, lean_object* v_as_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = l_IO_mapTasks___redArg___lam__0(v_f_1922_, v_as_1923_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg(lean_object* v_f_1926_, lean_object* v_tasks_1927_, lean_object* v_prio_1928_, uint8_t v_sync_1929_){
_start:
{
lean_object* v___f_1931_; lean_object* v___x_1932_; 
v___f_1931_ = lean_alloc_closure((void*)(l_IO_mapTasks___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1931_, 0, v_f_1926_);
v___x_1932_ = l_BaseIO_mapTasks___redArg(v___f_1931_, v_tasks_1927_, v_prio_1928_, v_sync_1929_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTasks___redArg___boxed(lean_object* v_f_1933_, lean_object* v_tasks_1934_, lean_object* v_prio_1935_, lean_object* v_sync_1936_, lean_object* v___y_1937_){
_start:
{
uint8_t v_sync_boxed_1938_; lean_object* v_res_1939_; 
v_sync_boxed_1938_ = lean_unbox(v_sync_1936_);
v_res_1939_ = l_IO_mapTasks___redArg(v_f_1933_, v_tasks_1934_, v_prio_1935_, v_sync_boxed_1938_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTasks(lean_object* v_00_u03b1_1940_, lean_object* v_00_u03b2_1941_, lean_object* v_f_1942_, lean_object* v_tasks_1943_, lean_object* v_prio_1944_, uint8_t v_sync_1945_){
_start:
{
lean_object* v___f_1947_; lean_object* v___x_1948_; 
v___f_1947_ = lean_alloc_closure((void*)(l_IO_mapTasks___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1947_, 0, v_f_1942_);
v___x_1948_ = l_BaseIO_mapTasks___redArg(v___f_1947_, v_tasks_1943_, v_prio_1944_, v_sync_1945_);
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l_IO_mapTasks___boxed(lean_object* v_00_u03b1_1949_, lean_object* v_00_u03b2_1950_, lean_object* v_f_1951_, lean_object* v_tasks_1952_, lean_object* v_prio_1953_, lean_object* v_sync_1954_, lean_object* v___y_1955_){
_start:
{
uint8_t v_sync_boxed_1956_; lean_object* v_res_1957_; 
v_sync_boxed_1956_ = lean_unbox(v_sync_1954_);
v_res_1957_ = l_IO_mapTasks(v_00_u03b1_1949_, v_00_u03b2_1950_, v_f_1951_, v_tasks_1952_, v_prio_1953_, v_sync_boxed_1956_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* l_IO_checkCanceled___boxed(lean_object* v_a_00___x40___internal___hyg_1959_){
_start:
{
uint8_t v_res_1960_; lean_object* v_r_1961_; 
v_res_1960_ = lean_io_check_canceled();
v_r_1961_ = lean_box(v_res_1960_);
return v_r_1961_;
}
}
LEAN_EXPORT lean_object* l_IO_cancel___boxed(lean_object* v_00_u03b1_1965_, lean_object* v_a_00___x40___internal___hyg_1966_, lean_object* v_a_00___x40___internal___hyg_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = lean_io_cancel(v_a_00___x40___internal___hyg_1966_);
lean_dec_ref(v_a_00___x40___internal___hyg_1966_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorIdx(uint8_t v_x_1969_){
_start:
{
switch(v_x_1969_)
{
case 0:
{
lean_object* v___x_1970_; 
v___x_1970_ = lean_unsigned_to_nat(0u);
return v___x_1970_;
}
case 1:
{
lean_object* v___x_1971_; 
v___x_1971_ = lean_unsigned_to_nat(1u);
return v___x_1971_;
}
default: 
{
lean_object* v___x_1972_; 
v___x_1972_ = lean_unsigned_to_nat(2u);
return v___x_1972_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorIdx___boxed(lean_object* v_x_1973_){
_start:
{
uint8_t v_x_boxed_1974_; lean_object* v_res_1975_; 
v_x_boxed_1974_ = lean_unbox(v_x_1973_);
v_res_1975_ = l_IO_TaskState_ctorIdx(v_x_boxed_1974_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim___redArg(lean_object* v_k_1976_){
_start:
{
lean_inc(v_k_1976_);
return v_k_1976_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim___redArg___boxed(lean_object* v_k_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = l_IO_TaskState_ctorElim___redArg(v_k_1977_);
lean_dec(v_k_1977_);
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim(lean_object* v_motive_1979_, lean_object* v_ctorIdx_1980_, uint8_t v_t_1981_, lean_object* v_h_1982_, lean_object* v_k_1983_){
_start:
{
lean_inc(v_k_1983_);
return v_k_1983_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ctorElim___boxed(lean_object* v_motive_1984_, lean_object* v_ctorIdx_1985_, lean_object* v_t_1986_, lean_object* v_h_1987_, lean_object* v_k_1988_){
_start:
{
uint8_t v_t_boxed_1989_; lean_object* v_res_1990_; 
v_t_boxed_1989_ = lean_unbox(v_t_1986_);
v_res_1990_ = l_IO_TaskState_ctorElim(v_motive_1984_, v_ctorIdx_1985_, v_t_boxed_1989_, v_h_1987_, v_k_1988_);
lean_dec(v_k_1988_);
lean_dec(v_ctorIdx_1985_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim___redArg(lean_object* v_waiting_1991_){
_start:
{
lean_inc(v_waiting_1991_);
return v_waiting_1991_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim___redArg___boxed(lean_object* v_waiting_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l_IO_TaskState_waiting_elim___redArg(v_waiting_1992_);
lean_dec(v_waiting_1992_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim(lean_object* v_motive_1994_, uint8_t v_t_1995_, lean_object* v_h_1996_, lean_object* v_waiting_1997_){
_start:
{
lean_inc(v_waiting_1997_);
return v_waiting_1997_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_waiting_elim___boxed(lean_object* v_motive_1998_, lean_object* v_t_1999_, lean_object* v_h_2000_, lean_object* v_waiting_2001_){
_start:
{
uint8_t v_t_boxed_2002_; lean_object* v_res_2003_; 
v_t_boxed_2002_ = lean_unbox(v_t_1999_);
v_res_2003_ = l_IO_TaskState_waiting_elim(v_motive_1998_, v_t_boxed_2002_, v_h_2000_, v_waiting_2001_);
lean_dec(v_waiting_2001_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim___redArg(lean_object* v_running_2004_){
_start:
{
lean_inc(v_running_2004_);
return v_running_2004_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim___redArg___boxed(lean_object* v_running_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l_IO_TaskState_running_elim___redArg(v_running_2005_);
lean_dec(v_running_2005_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim(lean_object* v_motive_2007_, uint8_t v_t_2008_, lean_object* v_h_2009_, lean_object* v_running_2010_){
_start:
{
lean_inc(v_running_2010_);
return v_running_2010_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_running_elim___boxed(lean_object* v_motive_2011_, lean_object* v_t_2012_, lean_object* v_h_2013_, lean_object* v_running_2014_){
_start:
{
uint8_t v_t_boxed_2015_; lean_object* v_res_2016_; 
v_t_boxed_2015_ = lean_unbox(v_t_2012_);
v_res_2016_ = l_IO_TaskState_running_elim(v_motive_2011_, v_t_boxed_2015_, v_h_2013_, v_running_2014_);
lean_dec(v_running_2014_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim___redArg(lean_object* v_finished_2017_){
_start:
{
lean_inc(v_finished_2017_);
return v_finished_2017_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim___redArg___boxed(lean_object* v_finished_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = l_IO_TaskState_finished_elim___redArg(v_finished_2018_);
lean_dec(v_finished_2018_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim(lean_object* v_motive_2020_, uint8_t v_t_2021_, lean_object* v_h_2022_, lean_object* v_finished_2023_){
_start:
{
lean_inc(v_finished_2023_);
return v_finished_2023_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_finished_elim___boxed(lean_object* v_motive_2024_, lean_object* v_t_2025_, lean_object* v_h_2026_, lean_object* v_finished_2027_){
_start:
{
uint8_t v_t_boxed_2028_; lean_object* v_res_2029_; 
v_t_boxed_2028_ = lean_unbox(v_t_2025_);
v_res_2029_ = l_IO_TaskState_finished_elim(v_motive_2024_, v_t_boxed_2028_, v_h_2026_, v_finished_2027_);
lean_dec(v_finished_2027_);
return v_res_2029_;
}
}
static uint8_t _init_l_IO_instInhabitedTaskState_default(void){
_start:
{
uint8_t v___x_2030_; 
v___x_2030_ = 0;
return v___x_2030_;
}
}
static uint8_t _init_l_IO_instInhabitedTaskState(void){
_start:
{
uint8_t v___x_2031_; 
v___x_2031_ = 0;
return v___x_2031_;
}
}
static lean_object* _init_l_IO_instReprTaskState_repr___closed__6(void){
_start:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2041_ = lean_unsigned_to_nat(2u);
v___x_2042_ = lean_nat_to_int(v___x_2041_);
return v___x_2042_;
}
}
static lean_object* _init_l_IO_instReprTaskState_repr___closed__7(void){
_start:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2043_ = lean_unsigned_to_nat(1u);
v___x_2044_ = lean_nat_to_int(v___x_2043_);
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* l_IO_instReprTaskState_repr(uint8_t v_x_2045_, lean_object* v_prec_2046_){
_start:
{
lean_object* v___y_2048_; lean_object* v___y_2055_; lean_object* v___y_2062_; 
switch(v_x_2045_)
{
case 0:
{
lean_object* v___x_2068_; uint8_t v___x_2069_; 
v___x_2068_ = lean_unsigned_to_nat(1024u);
v___x_2069_ = lean_nat_dec_le(v___x_2068_, v_prec_2046_);
if (v___x_2069_ == 0)
{
lean_object* v___x_2070_; 
v___x_2070_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_2048_ = v___x_2070_;
goto v___jp_2047_;
}
else
{
lean_object* v___x_2071_; 
v___x_2071_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_2048_ = v___x_2071_;
goto v___jp_2047_;
}
}
case 1:
{
lean_object* v___x_2072_; uint8_t v___x_2073_; 
v___x_2072_ = lean_unsigned_to_nat(1024u);
v___x_2073_ = lean_nat_dec_le(v___x_2072_, v_prec_2046_);
if (v___x_2073_ == 0)
{
lean_object* v___x_2074_; 
v___x_2074_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_2055_ = v___x_2074_;
goto v___jp_2054_;
}
else
{
lean_object* v___x_2075_; 
v___x_2075_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_2055_ = v___x_2075_;
goto v___jp_2054_;
}
}
default: 
{
lean_object* v___x_2076_; uint8_t v___x_2077_; 
v___x_2076_ = lean_unsigned_to_nat(1024u);
v___x_2077_ = lean_nat_dec_le(v___x_2076_, v_prec_2046_);
if (v___x_2077_ == 0)
{
lean_object* v___x_2078_; 
v___x_2078_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_2062_ = v___x_2078_;
goto v___jp_2061_;
}
else
{
lean_object* v___x_2079_; 
v___x_2079_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_2062_ = v___x_2079_;
goto v___jp_2061_;
}
}
}
v___jp_2047_:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; uint8_t v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; 
v___x_2049_ = ((lean_object*)(l_IO_instReprTaskState_repr___closed__1));
lean_inc(v___y_2048_);
v___x_2050_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___y_2048_);
lean_ctor_set(v___x_2050_, 1, v___x_2049_);
v___x_2051_ = 0;
v___x_2052_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2052_, 0, v___x_2050_);
lean_ctor_set_uint8(v___x_2052_, sizeof(void*)*1, v___x_2051_);
v___x_2053_ = l_Repr_addAppParen(v___x_2052_, v_prec_2046_);
return v___x_2053_;
}
v___jp_2054_:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; uint8_t v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2056_ = ((lean_object*)(l_IO_instReprTaskState_repr___closed__3));
lean_inc(v___y_2055_);
v___x_2057_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___y_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
v___x_2058_ = 0;
v___x_2059_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2059_, 0, v___x_2057_);
lean_ctor_set_uint8(v___x_2059_, sizeof(void*)*1, v___x_2058_);
v___x_2060_ = l_Repr_addAppParen(v___x_2059_, v_prec_2046_);
return v___x_2060_;
}
v___jp_2061_:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; uint8_t v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2063_ = ((lean_object*)(l_IO_instReprTaskState_repr___closed__5));
lean_inc(v___y_2062_);
v___x_2064_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___y_2062_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = 0;
v___x_2066_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_2066_, 0, v___x_2064_);
lean_ctor_set_uint8(v___x_2066_, sizeof(void*)*1, v___x_2065_);
v___x_2067_ = l_Repr_addAppParen(v___x_2066_, v_prec_2046_);
return v___x_2067_;
}
}
}
LEAN_EXPORT lean_object* l_IO_instReprTaskState_repr___boxed(lean_object* v_x_2080_, lean_object* v_prec_2081_){
_start:
{
uint8_t v_x_171__boxed_2082_; lean_object* v_res_2083_; 
v_x_171__boxed_2082_ = lean_unbox(v_x_2080_);
v_res_2083_ = l_IO_instReprTaskState_repr(v_x_171__boxed_2082_, v_prec_2081_);
lean_dec(v_prec_2081_);
return v_res_2083_;
}
}
LEAN_EXPORT uint8_t l_IO_TaskState_ofNat(lean_object* v_n_2086_){
_start:
{
lean_object* v___x_2087_; uint8_t v___x_2088_; 
v___x_2087_ = lean_unsigned_to_nat(0u);
v___x_2088_ = lean_nat_dec_le(v_n_2086_, v___x_2087_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2089_; uint8_t v___x_2090_; 
v___x_2089_ = lean_unsigned_to_nat(1u);
v___x_2090_ = lean_nat_dec_le(v_n_2086_, v___x_2089_);
if (v___x_2090_ == 0)
{
uint8_t v___x_2091_; 
v___x_2091_ = 2;
return v___x_2091_;
}
else
{
uint8_t v___x_2092_; 
v___x_2092_ = 1;
return v___x_2092_;
}
}
else
{
uint8_t v___x_2093_; 
v___x_2093_ = 0;
return v___x_2093_;
}
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_ofNat___boxed(lean_object* v_n_2094_){
_start:
{
uint8_t v_res_2095_; lean_object* v_r_2096_; 
v_res_2095_ = l_IO_TaskState_ofNat(v_n_2094_);
lean_dec(v_n_2094_);
v_r_2096_ = lean_box(v_res_2095_);
return v_r_2096_;
}
}
LEAN_EXPORT uint8_t l_IO_instDecidableEqTaskState(uint8_t v_x_2097_, uint8_t v_y_2098_){
_start:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; uint8_t v___x_2101_; 
v___x_2099_ = l_IO_TaskState_ctorIdx(v_x_2097_);
v___x_2100_ = l_IO_TaskState_ctorIdx(v_y_2098_);
v___x_2101_ = lean_nat_dec_eq(v___x_2099_, v___x_2100_);
lean_dec(v___x_2100_);
lean_dec(v___x_2099_);
return v___x_2101_;
}
}
LEAN_EXPORT lean_object* l_IO_instDecidableEqTaskState___boxed(lean_object* v_x_2102_, lean_object* v_y_2103_){
_start:
{
uint8_t v_x_20__boxed_2104_; uint8_t v_y_21__boxed_2105_; uint8_t v_res_2106_; lean_object* v_r_2107_; 
v_x_20__boxed_2104_ = lean_unbox(v_x_2102_);
v_y_21__boxed_2105_ = lean_unbox(v_y_2103_);
v_res_2106_ = l_IO_instDecidableEqTaskState(v_x_20__boxed_2104_, v_y_21__boxed_2105_);
v_r_2107_ = lean_box(v_res_2106_);
return v_r_2107_;
}
}
LEAN_EXPORT uint8_t l_IO_instOrdTaskState_ord(uint8_t v_x_2108_, uint8_t v_y_2109_){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; uint8_t v___x_2112_; 
v___x_2110_ = l_IO_TaskState_ctorIdx(v_x_2108_);
v___x_2111_ = l_IO_TaskState_ctorIdx(v_y_2109_);
v___x_2112_ = lean_nat_dec_lt(v___x_2110_, v___x_2111_);
if (v___x_2112_ == 0)
{
uint8_t v___x_2113_; 
v___x_2113_ = lean_nat_dec_eq(v___x_2110_, v___x_2111_);
lean_dec(v___x_2111_);
lean_dec(v___x_2110_);
if (v___x_2113_ == 0)
{
uint8_t v___x_2114_; 
v___x_2114_ = 2;
return v___x_2114_;
}
else
{
uint8_t v___x_2115_; 
v___x_2115_ = 1;
return v___x_2115_;
}
}
else
{
uint8_t v___x_2116_; 
lean_dec(v___x_2111_);
lean_dec(v___x_2110_);
v___x_2116_ = 0;
return v___x_2116_;
}
}
}
LEAN_EXPORT lean_object* l_IO_instOrdTaskState_ord___boxed(lean_object* v_x_2117_, lean_object* v_y_2118_){
_start:
{
uint8_t v_x_30__boxed_2119_; uint8_t v_y_31__boxed_2120_; uint8_t v_res_2121_; lean_object* v_r_2122_; 
v_x_30__boxed_2119_ = lean_unbox(v_x_2117_);
v_y_31__boxed_2120_ = lean_unbox(v_y_2118_);
v_res_2121_ = l_IO_instOrdTaskState_ord(v_x_30__boxed_2119_, v_y_31__boxed_2120_);
v_r_2122_ = lean_box(v_res_2121_);
return v_r_2122_;
}
}
static lean_object* _init_l_IO_instLTTaskState(void){
_start:
{
lean_object* v___x_2125_; 
v___x_2125_ = lean_box(0);
return v___x_2125_;
}
}
static lean_object* _init_l_IO_instLETaskState(void){
_start:
{
lean_object* v___x_2126_; 
v___x_2126_ = lean_box(0);
return v___x_2126_;
}
}
LEAN_EXPORT uint8_t l_IO_instMinTaskState___lam__0(uint8_t v_x_2127_, uint8_t v_y_2128_){
_start:
{
uint8_t v___x_2129_; 
v___x_2129_ = l_IO_instOrdTaskState_ord(v_x_2127_, v_y_2128_);
if (v___x_2129_ == 2)
{
return v_y_2128_;
}
else
{
return v_x_2127_;
}
}
}
LEAN_EXPORT lean_object* l_IO_instMinTaskState___lam__0___boxed(lean_object* v_x_2130_, lean_object* v_y_2131_){
_start:
{
uint8_t v_x_boxed_2132_; uint8_t v_y_boxed_2133_; uint8_t v_res_2134_; lean_object* v_r_2135_; 
v_x_boxed_2132_ = lean_unbox(v_x_2130_);
v_y_boxed_2133_ = lean_unbox(v_y_2131_);
v_res_2134_ = l_IO_instMinTaskState___lam__0(v_x_boxed_2132_, v_y_boxed_2133_);
v_r_2135_ = lean_box(v_res_2134_);
return v_r_2135_;
}
}
LEAN_EXPORT uint8_t l_IO_instMaxTaskState___lam__0(uint8_t v_x_2138_, uint8_t v_y_2139_){
_start:
{
uint8_t v___x_2140_; 
v___x_2140_ = l_IO_instOrdTaskState_ord(v_x_2138_, v_y_2139_);
if (v___x_2140_ == 2)
{
return v_x_2138_;
}
else
{
return v_y_2139_;
}
}
}
LEAN_EXPORT lean_object* l_IO_instMaxTaskState___lam__0___boxed(lean_object* v_x_2141_, lean_object* v_y_2142_){
_start:
{
uint8_t v_x_boxed_2143_; uint8_t v_y_boxed_2144_; uint8_t v_res_2145_; lean_object* v_r_2146_; 
v_x_boxed_2143_ = lean_unbox(v_x_2141_);
v_y_boxed_2144_ = lean_unbox(v_y_2142_);
v_res_2145_ = l_IO_instMaxTaskState___lam__0(v_x_boxed_2143_, v_y_boxed_2144_);
v_r_2146_ = lean_box(v_res_2145_);
return v_r_2146_;
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_toString(uint8_t v_x_2152_){
_start:
{
switch(v_x_2152_)
{
case 0:
{
lean_object* v___x_2153_; 
v___x_2153_ = ((lean_object*)(l_IO_TaskState_toString___closed__0));
return v___x_2153_;
}
case 1:
{
lean_object* v___x_2154_; 
v___x_2154_ = ((lean_object*)(l_IO_TaskState_toString___closed__1));
return v___x_2154_;
}
default: 
{
lean_object* v___x_2155_; 
v___x_2155_ = ((lean_object*)(l_IO_TaskState_toString___closed__2));
return v___x_2155_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_TaskState_toString___boxed(lean_object* v_x_2156_){
_start:
{
uint8_t v_x_31__boxed_2157_; lean_object* v_res_2158_; 
v_x_31__boxed_2157_ = lean_unbox(v_x_2156_);
v_res_2158_ = l_IO_TaskState_toString(v_x_31__boxed_2157_);
return v_res_2158_;
}
}
LEAN_EXPORT lean_object* l_IO_getTaskState___boxed(lean_object* v_00_u03b1_2164_, lean_object* v_a_00___x40___internal___hyg_2165_, lean_object* v_a_00___x40___internal___hyg_2166_){
_start:
{
uint8_t v_res_2167_; lean_object* v_r_2168_; 
v_res_2167_ = lean_io_get_task_state(v_a_00___x40___internal___hyg_2165_);
lean_dec_ref(v_a_00___x40___internal___hyg_2165_);
v_r_2168_ = lean_box(v_res_2167_);
return v_r_2168_;
}
}
LEAN_EXPORT uint8_t l_IO_hasFinished___redArg(lean_object* v_task_2169_){
_start:
{
uint8_t v___x_2171_; 
v___x_2171_ = lean_io_get_task_state(v_task_2169_);
if (v___x_2171_ == 2)
{
uint8_t v___x_2172_; 
v___x_2172_ = 1;
return v___x_2172_;
}
else
{
uint8_t v___x_2173_; 
v___x_2173_ = 0;
return v___x_2173_;
}
}
}
LEAN_EXPORT lean_object* l_IO_hasFinished___redArg___boxed(lean_object* v_task_2174_, lean_object* v___y_2175_){
_start:
{
uint8_t v_res_2176_; lean_object* v_r_2177_; 
v_res_2176_ = l_IO_hasFinished___redArg(v_task_2174_);
lean_dec_ref(v_task_2174_);
v_r_2177_ = lean_box(v_res_2176_);
return v_r_2177_;
}
}
LEAN_EXPORT uint8_t l_IO_hasFinished(lean_object* v_00_u03b1_2178_, lean_object* v_task_2179_){
_start:
{
uint8_t v___x_2181_; 
v___x_2181_ = lean_io_get_task_state(v_task_2179_);
if (v___x_2181_ == 2)
{
uint8_t v___x_2182_; 
v___x_2182_ = 1;
return v___x_2182_;
}
else
{
uint8_t v___x_2183_; 
v___x_2183_ = 0;
return v___x_2183_;
}
}
}
LEAN_EXPORT lean_object* l_IO_hasFinished___boxed(lean_object* v_00_u03b1_2184_, lean_object* v_task_2185_, lean_object* v___y_2186_){
_start:
{
uint8_t v_res_2187_; lean_object* v_r_2188_; 
v_res_2187_ = l_IO_hasFinished(v_00_u03b1_2184_, v_task_2185_);
lean_dec_ref(v_task_2185_);
v_r_2188_ = lean_box(v_res_2187_);
return v_r_2188_;
}
}
LEAN_EXPORT lean_object* l_IO_wait___boxed(lean_object* v_00_u03b1_2192_, lean_object* v_t_2193_, lean_object* v_a_00___x40___internal___hyg_2194_){
_start:
{
lean_object* v_res_2195_; 
v_res_2195_ = lean_io_wait(v_t_2193_);
return v_res_2195_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__12(void){
_start:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2222_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__10));
v___x_2223_ = l_Lean_mkAtom(v___x_2222_);
return v___x_2223_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__13(void){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2224_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__12, &l_IO_waitAny___auto__1___closed__12_once, _init_l_IO_waitAny___auto__1___closed__12);
v___x_2225_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2226_ = lean_array_push(v___x_2225_, v___x_2224_);
return v___x_2226_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__18(void){
_start:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2235_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__17));
v___x_2236_ = lean_string_utf8_byte_size(v___x_2235_);
return v___x_2236_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__19(void){
_start:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2237_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__18, &l_IO_waitAny___auto__1___closed__18_once, _init_l_IO_waitAny___auto__1___closed__18);
v___x_2238_ = lean_unsigned_to_nat(0u);
v___x_2239_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__17));
v___x_2240_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2239_);
lean_ctor_set(v___x_2240_, 1, v___x_2238_);
lean_ctor_set(v___x_2240_, 2, v___x_2237_);
return v___x_2240_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__23(void){
_start:
{
lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2246_ = lean_box(0);
v___x_2247_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__22));
v___x_2248_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__19, &l_IO_waitAny___auto__1___closed__19_once, _init_l_IO_waitAny___auto__1___closed__19);
v___x_2249_ = lean_box(2);
v___x_2250_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2249_);
lean_ctor_set(v___x_2250_, 1, v___x_2248_);
lean_ctor_set(v___x_2250_, 2, v___x_2247_);
lean_ctor_set(v___x_2250_, 3, v___x_2246_);
return v___x_2250_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__24(void){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2251_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__23, &l_IO_waitAny___auto__1___closed__23_once, _init_l_IO_waitAny___auto__1___closed__23);
v___x_2252_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2253_ = lean_array_push(v___x_2252_, v___x_2251_);
return v___x_2253_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__28(void){
_start:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2261_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__27));
v___x_2262_ = l_Lean_mkAtom(v___x_2261_);
return v___x_2262_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__29(void){
_start:
{
lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2263_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__28, &l_IO_waitAny___auto__1___closed__28_once, _init_l_IO_waitAny___auto__1___closed__28);
v___x_2264_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2265_ = lean_array_push(v___x_2264_, v___x_2263_);
return v___x_2265_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__30(void){
_start:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2266_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__29, &l_IO_waitAny___auto__1___closed__29_once, _init_l_IO_waitAny___auto__1___closed__29);
v___x_2267_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__26));
v___x_2268_ = lean_box(2);
v___x_2269_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2268_);
lean_ctor_set(v___x_2269_, 1, v___x_2267_);
lean_ctor_set(v___x_2269_, 2, v___x_2266_);
return v___x_2269_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__31(void){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2270_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__30, &l_IO_waitAny___auto__1___closed__30_once, _init_l_IO_waitAny___auto__1___closed__30);
v___x_2271_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2272_ = lean_array_push(v___x_2271_, v___x_2270_);
return v___x_2272_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__32(void){
_start:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2273_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__31, &l_IO_waitAny___auto__1___closed__31_once, _init_l_IO_waitAny___auto__1___closed__31);
v___x_2274_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__9));
v___x_2275_ = lean_box(2);
v___x_2276_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2275_);
lean_ctor_set(v___x_2276_, 1, v___x_2274_);
lean_ctor_set(v___x_2276_, 2, v___x_2273_);
return v___x_2276_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__33(void){
_start:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2277_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__32, &l_IO_waitAny___auto__1___closed__32_once, _init_l_IO_waitAny___auto__1___closed__32);
v___x_2278_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__24, &l_IO_waitAny___auto__1___closed__24_once, _init_l_IO_waitAny___auto__1___closed__24);
v___x_2279_ = lean_array_push(v___x_2278_, v___x_2277_);
return v___x_2279_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__34(void){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2280_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__33, &l_IO_waitAny___auto__1___closed__33_once, _init_l_IO_waitAny___auto__1___closed__33);
v___x_2281_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__16));
v___x_2282_ = lean_box(2);
v___x_2283_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2282_);
lean_ctor_set(v___x_2283_, 1, v___x_2281_);
lean_ctor_set(v___x_2283_, 2, v___x_2280_);
return v___x_2283_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__35(void){
_start:
{
lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2284_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__34, &l_IO_waitAny___auto__1___closed__34_once, _init_l_IO_waitAny___auto__1___closed__34);
v___x_2285_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__13, &l_IO_waitAny___auto__1___closed__13_once, _init_l_IO_waitAny___auto__1___closed__13);
v___x_2286_ = lean_array_push(v___x_2285_, v___x_2284_);
return v___x_2286_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__36(void){
_start:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2287_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__35, &l_IO_waitAny___auto__1___closed__35_once, _init_l_IO_waitAny___auto__1___closed__35);
v___x_2288_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__11));
v___x_2289_ = lean_box(2);
v___x_2290_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2289_);
lean_ctor_set(v___x_2290_, 1, v___x_2288_);
lean_ctor_set(v___x_2290_, 2, v___x_2287_);
return v___x_2290_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__37(void){
_start:
{
lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2291_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__36, &l_IO_waitAny___auto__1___closed__36_once, _init_l_IO_waitAny___auto__1___closed__36);
v___x_2292_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2293_ = lean_array_push(v___x_2292_, v___x_2291_);
return v___x_2293_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__38(void){
_start:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2294_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__37, &l_IO_waitAny___auto__1___closed__37_once, _init_l_IO_waitAny___auto__1___closed__37);
v___x_2295_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__9));
v___x_2296_ = lean_box(2);
v___x_2297_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
lean_ctor_set(v___x_2297_, 1, v___x_2295_);
lean_ctor_set(v___x_2297_, 2, v___x_2294_);
return v___x_2297_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__39(void){
_start:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2298_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__38, &l_IO_waitAny___auto__1___closed__38_once, _init_l_IO_waitAny___auto__1___closed__38);
v___x_2299_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2300_ = lean_array_push(v___x_2299_, v___x_2298_);
return v___x_2300_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__40(void){
_start:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2301_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__39, &l_IO_waitAny___auto__1___closed__39_once, _init_l_IO_waitAny___auto__1___closed__39);
v___x_2302_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__7));
v___x_2303_ = lean_box(2);
v___x_2304_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
lean_ctor_set(v___x_2304_, 1, v___x_2302_);
lean_ctor_set(v___x_2304_, 2, v___x_2301_);
return v___x_2304_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__41(void){
_start:
{
lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2305_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__40, &l_IO_waitAny___auto__1___closed__40_once, _init_l_IO_waitAny___auto__1___closed__40);
v___x_2306_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__5));
v___x_2307_ = lean_array_push(v___x_2306_, v___x_2305_);
return v___x_2307_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1___closed__42(void){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2308_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__41, &l_IO_waitAny___auto__1___closed__41_once, _init_l_IO_waitAny___auto__1___closed__41);
v___x_2309_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__4));
v___x_2310_ = lean_box(2);
v___x_2311_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2310_);
lean_ctor_set(v___x_2311_, 1, v___x_2309_);
lean_ctor_set(v___x_2311_, 2, v___x_2308_);
return v___x_2311_;
}
}
static lean_object* _init_l_IO_waitAny___auto__1(void){
_start:
{
lean_object* v___x_2312_; 
v___x_2312_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__42, &l_IO_waitAny___auto__1___closed__42_once, _init_l_IO_waitAny___auto__1___closed__42);
return v___x_2312_;
}
}
LEAN_EXPORT lean_object* l_IO_waitAny___boxed(lean_object* v_00_u03b1_2317_, lean_object* v_tasks_2318_, lean_object* v_h_2319_, lean_object* v_a_00___x40___internal___hyg_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = lean_io_wait_any(v_tasks_2318_);
lean_dec(v_tasks_2318_);
return v_res_2321_;
}
}
static lean_object* _init_l_IO_waitAny_x27___auto__1(void){
_start:
{
lean_object* v___x_2322_; 
v___x_2322_ = lean_obj_once(&l_IO_waitAny___auto__1___closed__42, &l_IO_waitAny___auto__1___closed__42_once, _init_l_IO_waitAny___auto__1___closed__42);
return v___x_2322_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg___lam__0(lean_object* v___x_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v___x_2325_; 
v___x_2325_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2323_);
lean_ctor_set(v___x_2325_, 1, v_a_2324_);
return v___x_2325_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg(lean_object* v_a_2326_, lean_object* v_a_2327_){
_start:
{
if (lean_obj_tag(v_a_2326_) == 0)
{
lean_object* v___x_2328_; 
v___x_2328_ = lean_array_to_list(v_a_2327_);
return v___x_2328_;
}
else
{
lean_object* v_head_2329_; lean_object* v_tail_2330_; lean_object* v___x_2331_; lean_object* v___f_2332_; lean_object* v___x_2333_; uint8_t v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v_head_2329_ = lean_ctor_get(v_a_2326_, 0);
lean_inc(v_head_2329_);
v_tail_2330_ = lean_ctor_get(v_a_2326_, 1);
lean_inc(v_tail_2330_);
lean_dec_ref_known(v_a_2326_, 2);
v___x_2331_ = lean_array_get_size(v_a_2327_);
v___f_2332_ = lean_alloc_closure((void*)(l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2332_, 0, v___x_2331_);
v___x_2333_ = lean_unsigned_to_nat(0u);
v___x_2334_ = 1;
v___x_2335_ = lean_task_map(v___f_2332_, v_head_2329_, v___x_2333_, v___x_2334_);
v___x_2336_ = lean_array_push(v_a_2327_, v___x_2335_);
v_a_2326_ = v_tail_2330_;
v_a_2327_ = v___x_2336_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_IO_waitAny_x27___redArg(lean_object* v_tasks_2340_){
_start:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v_fst_2345_; lean_object* v_snd_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2354_; 
v___x_2342_ = ((lean_object*)(l_IO_waitAny_x27___redArg___closed__0));
lean_inc(v_tasks_2340_);
v___x_2343_ = l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg(v_tasks_2340_, v___x_2342_);
v___x_2344_ = lean_io_wait_any(v___x_2343_);
lean_dec(v___x_2343_);
v_fst_2345_ = lean_ctor_get(v___x_2344_, 0);
v_snd_2346_ = lean_ctor_get(v___x_2344_, 1);
v_isSharedCheck_2354_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2354_ == 0)
{
v___x_2348_ = v___x_2344_;
v_isShared_2349_ = v_isSharedCheck_2354_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_snd_2346_);
lean_inc(v_fst_2345_);
lean_dec(v___x_2344_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2354_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v___x_2350_; lean_object* v___x_2352_; 
lean_inc(v_tasks_2340_);
v___x_2350_ = l___private_Init_Data_List_Impl_0__List_eraseIdxTR_go(lean_box(0), v_tasks_2340_, v_tasks_2340_, v_fst_2345_, v___x_2342_);
lean_dec(v_tasks_2340_);
if (v_isShared_2349_ == 0)
{
lean_ctor_set(v___x_2348_, 1, v___x_2350_);
lean_ctor_set(v___x_2348_, 0, v_snd_2346_);
v___x_2352_ = v___x_2348_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_snd_2346_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v___x_2350_);
v___x_2352_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
return v___x_2352_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_waitAny_x27___redArg___boxed(lean_object* v_tasks_2355_, lean_object* v___y_2356_){
_start:
{
lean_object* v_res_2357_; 
v_res_2357_ = l_IO_waitAny_x27___redArg(v_tasks_2355_);
return v_res_2357_;
}
}
LEAN_EXPORT lean_object* l_IO_waitAny_x27(lean_object* v_00_u03b1_2358_, lean_object* v_tasks_2359_, lean_object* v_h_2360_){
_start:
{
lean_object* v___x_2362_; 
v___x_2362_ = l_IO_waitAny_x27___redArg(v_tasks_2359_);
return v___x_2362_;
}
}
LEAN_EXPORT lean_object* l_IO_waitAny_x27___boxed(lean_object* v_00_u03b1_2363_, lean_object* v_tasks_2364_, lean_object* v_h_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v_res_2367_; 
v_res_2367_ = l_IO_waitAny_x27(v_00_u03b1_2363_, v_tasks_2364_, v_h_2365_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0(lean_object* v_00_u03b1_2368_, lean_object* v_a_2369_, lean_object* v_a_2370_){
_start:
{
lean_object* v___x_2371_; 
v___x_2371_ = l_List_mapIdx_go___at___00IO_waitAny_x27_spec__0___redArg(v_a_2369_, v_a_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l_IO_getNumHeartbeats___boxed(lean_object* v_a_00___x40___internal___hyg_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = lean_io_get_num_heartbeats();
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_IO_setNumHeartbeats___boxed(lean_object* v_count_2377_, lean_object* v_a_00___x40___internal___hyg_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = lean_io_set_heartbeats(v_count_2377_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l_IO_addHeartbeats(lean_object* v_count_2380_){
_start:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2382_ = lean_io_get_num_heartbeats();
v___x_2383_ = lean_nat_add(v___x_2382_, v_count_2380_);
lean_dec(v___x_2382_);
v___x_2384_ = lean_io_set_heartbeats(v___x_2383_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_IO_addHeartbeats___boxed(lean_object* v_count_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l_IO_addHeartbeats(v_count_2385_);
lean_dec(v_count_2385_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorIdx(uint8_t v_x_2388_){
_start:
{
switch(v_x_2388_)
{
case 0:
{
lean_object* v___x_2389_; 
v___x_2389_ = lean_unsigned_to_nat(0u);
return v___x_2389_;
}
case 1:
{
lean_object* v___x_2390_; 
v___x_2390_ = lean_unsigned_to_nat(1u);
return v___x_2390_;
}
case 2:
{
lean_object* v___x_2391_; 
v___x_2391_ = lean_unsigned_to_nat(2u);
return v___x_2391_;
}
case 3:
{
lean_object* v___x_2392_; 
v___x_2392_ = lean_unsigned_to_nat(3u);
return v___x_2392_;
}
default: 
{
lean_object* v___x_2393_; 
v___x_2393_ = lean_unsigned_to_nat(4u);
return v___x_2393_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorIdx___boxed(lean_object* v_x_2394_){
_start:
{
uint8_t v_x_boxed_2395_; lean_object* v_res_2396_; 
v_x_boxed_2395_ = lean_unbox(v_x_2394_);
v_res_2396_ = l_IO_FS_Mode_ctorIdx(v_x_boxed_2395_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim___redArg(lean_object* v_k_2397_){
_start:
{
lean_inc(v_k_2397_);
return v_k_2397_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim___redArg___boxed(lean_object* v_k_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l_IO_FS_Mode_ctorElim___redArg(v_k_2398_);
lean_dec(v_k_2398_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim(lean_object* v_motive_2400_, lean_object* v_ctorIdx_2401_, uint8_t v_t_2402_, lean_object* v_h_2403_, lean_object* v_k_2404_){
_start:
{
lean_inc(v_k_2404_);
return v_k_2404_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_ctorElim___boxed(lean_object* v_motive_2405_, lean_object* v_ctorIdx_2406_, lean_object* v_t_2407_, lean_object* v_h_2408_, lean_object* v_k_2409_){
_start:
{
uint8_t v_t_boxed_2410_; lean_object* v_res_2411_; 
v_t_boxed_2410_ = lean_unbox(v_t_2407_);
v_res_2411_ = l_IO_FS_Mode_ctorElim(v_motive_2405_, v_ctorIdx_2406_, v_t_boxed_2410_, v_h_2408_, v_k_2409_);
lean_dec(v_k_2409_);
lean_dec(v_ctorIdx_2406_);
return v_res_2411_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim___redArg(lean_object* v_read_2412_){
_start:
{
lean_inc(v_read_2412_);
return v_read_2412_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim___redArg___boxed(lean_object* v_read_2413_){
_start:
{
lean_object* v_res_2414_; 
v_res_2414_ = l_IO_FS_Mode_read_elim___redArg(v_read_2413_);
lean_dec(v_read_2413_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim(lean_object* v_motive_2415_, uint8_t v_t_2416_, lean_object* v_h_2417_, lean_object* v_read_2418_){
_start:
{
lean_inc(v_read_2418_);
return v_read_2418_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_read_elim___boxed(lean_object* v_motive_2419_, lean_object* v_t_2420_, lean_object* v_h_2421_, lean_object* v_read_2422_){
_start:
{
uint8_t v_t_boxed_2423_; lean_object* v_res_2424_; 
v_t_boxed_2423_ = lean_unbox(v_t_2420_);
v_res_2424_ = l_IO_FS_Mode_read_elim(v_motive_2419_, v_t_boxed_2423_, v_h_2421_, v_read_2422_);
lean_dec(v_read_2422_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim___redArg(lean_object* v_write_2425_){
_start:
{
lean_inc(v_write_2425_);
return v_write_2425_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim___redArg___boxed(lean_object* v_write_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l_IO_FS_Mode_write_elim___redArg(v_write_2426_);
lean_dec(v_write_2426_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim(lean_object* v_motive_2428_, uint8_t v_t_2429_, lean_object* v_h_2430_, lean_object* v_write_2431_){
_start:
{
lean_inc(v_write_2431_);
return v_write_2431_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_write_elim___boxed(lean_object* v_motive_2432_, lean_object* v_t_2433_, lean_object* v_h_2434_, lean_object* v_write_2435_){
_start:
{
uint8_t v_t_boxed_2436_; lean_object* v_res_2437_; 
v_t_boxed_2436_ = lean_unbox(v_t_2433_);
v_res_2437_ = l_IO_FS_Mode_write_elim(v_motive_2432_, v_t_boxed_2436_, v_h_2434_, v_write_2435_);
lean_dec(v_write_2435_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim___redArg(lean_object* v_writeNew_2438_){
_start:
{
lean_inc(v_writeNew_2438_);
return v_writeNew_2438_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim___redArg___boxed(lean_object* v_writeNew_2439_){
_start:
{
lean_object* v_res_2440_; 
v_res_2440_ = l_IO_FS_Mode_writeNew_elim___redArg(v_writeNew_2439_);
lean_dec(v_writeNew_2439_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim(lean_object* v_motive_2441_, uint8_t v_t_2442_, lean_object* v_h_2443_, lean_object* v_writeNew_2444_){
_start:
{
lean_inc(v_writeNew_2444_);
return v_writeNew_2444_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_writeNew_elim___boxed(lean_object* v_motive_2445_, lean_object* v_t_2446_, lean_object* v_h_2447_, lean_object* v_writeNew_2448_){
_start:
{
uint8_t v_t_boxed_2449_; lean_object* v_res_2450_; 
v_t_boxed_2449_ = lean_unbox(v_t_2446_);
v_res_2450_ = l_IO_FS_Mode_writeNew_elim(v_motive_2445_, v_t_boxed_2449_, v_h_2447_, v_writeNew_2448_);
lean_dec(v_writeNew_2448_);
return v_res_2450_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim___redArg(lean_object* v_readWrite_2451_){
_start:
{
lean_inc(v_readWrite_2451_);
return v_readWrite_2451_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim___redArg___boxed(lean_object* v_readWrite_2452_){
_start:
{
lean_object* v_res_2453_; 
v_res_2453_ = l_IO_FS_Mode_readWrite_elim___redArg(v_readWrite_2452_);
lean_dec(v_readWrite_2452_);
return v_res_2453_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim(lean_object* v_motive_2454_, uint8_t v_t_2455_, lean_object* v_h_2456_, lean_object* v_readWrite_2457_){
_start:
{
lean_inc(v_readWrite_2457_);
return v_readWrite_2457_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_readWrite_elim___boxed(lean_object* v_motive_2458_, lean_object* v_t_2459_, lean_object* v_h_2460_, lean_object* v_readWrite_2461_){
_start:
{
uint8_t v_t_boxed_2462_; lean_object* v_res_2463_; 
v_t_boxed_2462_ = lean_unbox(v_t_2459_);
v_res_2463_ = l_IO_FS_Mode_readWrite_elim(v_motive_2458_, v_t_boxed_2462_, v_h_2460_, v_readWrite_2461_);
lean_dec(v_readWrite_2461_);
return v_res_2463_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim___redArg(lean_object* v_append_2464_){
_start:
{
lean_inc(v_append_2464_);
return v_append_2464_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim___redArg___boxed(lean_object* v_append_2465_){
_start:
{
lean_object* v_res_2466_; 
v_res_2466_ = l_IO_FS_Mode_append_elim___redArg(v_append_2465_);
lean_dec(v_append_2465_);
return v_res_2466_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim(lean_object* v_motive_2467_, uint8_t v_t_2468_, lean_object* v_h_2469_, lean_object* v_append_2470_){
_start:
{
lean_inc(v_append_2470_);
return v_append_2470_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Mode_append_elim___boxed(lean_object* v_motive_2471_, lean_object* v_t_2472_, lean_object* v_h_2473_, lean_object* v_append_2474_){
_start:
{
uint8_t v_t_boxed_2475_; lean_object* v_res_2476_; 
v_t_boxed_2475_ = lean_unbox(v_t_2472_);
v_res_2476_ = l_IO_FS_Mode_append_elim(v_motive_2471_, v_t_boxed_2475_, v_h_2473_, v_append_2474_);
lean_dec(v_append_2474_);
return v_res_2476_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__0(){
_start:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2481_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___lam__0___closed__1));
v___x_2482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2481_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__0___boxed(lean_object* v___y_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_IO_FS_instInhabitedStream_default___lam__0();
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__1(){
_start:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2486_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___lam__0___closed__1));
v___x_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2487_, 0, v___x_2486_);
return v___x_2487_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__1___boxed(lean_object* v___y_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = l_IO_FS_instInhabitedStream_default___lam__1();
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__2(size_t v_x_2490_){
_start:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2492_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___lam__0___closed__1));
v___x_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2492_);
return v___x_2493_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__2___boxed(lean_object* v_x_2494_, lean_object* v___y_2495_){
_start:
{
size_t v_x_279__boxed_2496_; lean_object* v_res_2497_; 
v_x_279__boxed_2496_ = lean_unbox_usize(v_x_2494_);
lean_dec(v_x_2494_);
v_res_2497_ = l_IO_FS_instInhabitedStream_default___lam__2(v_x_279__boxed_2496_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__3(lean_object* v_x_2498_){
_start:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2500_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___lam__0___closed__1));
v___x_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2500_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__3___boxed(lean_object* v_x_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l_IO_FS_instInhabitedStream_default___lam__3(v_x_2502_);
lean_dec_ref(v_x_2502_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__4(lean_object* v_x_2505_){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2507_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___lam__0___closed__1));
v___x_2508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2507_);
return v___x_2508_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__4___boxed(lean_object* v_x_2509_, lean_object* v___y_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l_IO_FS_instInhabitedStream_default___lam__4(v_x_2509_);
lean_dec_ref(v_x_2509_);
return v_res_2511_;
}
}
LEAN_EXPORT uint8_t l_IO_FS_instInhabitedStream_default___lam__5(uint8_t v___x_2512_){
_start:
{
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instInhabitedStream_default___lam__5___boxed(lean_object* v___x_2514_, lean_object* v___y_2515_){
_start:
{
uint8_t v___x_318__boxed_2516_; uint8_t v_res_2517_; lean_object* v_r_2518_; 
v___x_318__boxed_2516_ = lean_unbox(v___x_2514_);
v_res_2517_ = l_IO_FS_instInhabitedStream_default___lam__5(v___x_318__boxed_2516_);
v_r_2518_ = lean_box(v_res_2517_);
return v_r_2518_;
}
}
LEAN_EXPORT lean_object* l_IO_getStdin___boxed(lean_object* v_a_00___x40___internal___hyg_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = lean_get_stdin();
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_IO_getStdout___boxed(lean_object* v_a_00___x40___internal___hyg_2540_){
_start:
{
lean_object* v_res_2541_; 
v_res_2541_ = lean_get_stdout();
return v_res_2541_;
}
}
LEAN_EXPORT lean_object* l_IO_getStderr___boxed(lean_object* v_a_00___x40___internal___hyg_2543_){
_start:
{
lean_object* v_res_2544_; 
v_res_2544_ = lean_get_stderr();
return v_res_2544_;
}
}
LEAN_EXPORT lean_object* l_IO_setStdin___boxed(lean_object* v_a_00___x40___internal___hyg_2547_, lean_object* v_a_00___x40___internal___hyg_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = lean_get_set_stdin(v_a_00___x40___internal___hyg_2547_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_IO_setStdout___boxed(lean_object* v_a_00___x40___internal___hyg_2552_, lean_object* v_a_00___x40___internal___hyg_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = lean_get_set_stdout(v_a_00___x40___internal___hyg_2552_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l_IO_setStderr___boxed(lean_object* v_a_00___x40___internal___hyg_2557_, lean_object* v_a_00___x40___internal___hyg_2558_){
_start:
{
lean_object* v_res_2559_; 
v_res_2559_ = lean_get_set_stderr(v_a_00___x40___internal___hyg_2557_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_IO_iterate___redArg(lean_object* v_a_2560_, lean_object* v_f_2561_){
_start:
{
lean_object* v___x_2563_; 
lean_inc_ref(v_f_2561_);
v___x_2563_ = lean_apply_2(v_f_2561_, v_a_2560_, lean_box(0));
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2574_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2566_ = v___x_2563_;
v_isShared_2567_ = v_isSharedCheck_2574_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2563_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2574_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
if (lean_obj_tag(v_a_2564_) == 0)
{
lean_object* v_val_2568_; 
lean_del_object(v___x_2566_);
v_val_2568_ = lean_ctor_get(v_a_2564_, 0);
lean_inc(v_val_2568_);
lean_dec_ref_known(v_a_2564_, 1);
v_a_2560_ = v_val_2568_;
goto _start;
}
else
{
lean_object* v_val_2570_; lean_object* v___x_2572_; 
lean_dec_ref(v_f_2561_);
v_val_2570_ = lean_ctor_get(v_a_2564_, 0);
lean_inc(v_val_2570_);
lean_dec_ref_known(v_a_2564_, 1);
if (v_isShared_2567_ == 0)
{
lean_ctor_set(v___x_2566_, 0, v_val_2570_);
v___x_2572_ = v___x_2566_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_val_2570_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
lean_dec_ref(v_f_2561_);
v_a_2575_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2577_ = v___x_2563_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___x_2563_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2575_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_iterate___redArg___boxed(lean_object* v_a_2583_, lean_object* v_f_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_IO_iterate___redArg(v_a_2583_, v_f_2584_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* l_IO_iterate(lean_object* v_00_u03b1_2587_, lean_object* v_00_u03b2_2588_, lean_object* v_a_2589_, lean_object* v_f_2590_){
_start:
{
lean_object* v___x_2592_; 
v___x_2592_ = l_IO_iterate___redArg(v_a_2589_, v_f_2590_);
return v___x_2592_;
}
}
LEAN_EXPORT lean_object* l_IO_iterate___boxed(lean_object* v_00_u03b1_2593_, lean_object* v_00_u03b2_2594_, lean_object* v_a_2595_, lean_object* v_f_2596_, lean_object* v___y_2597_){
_start:
{
lean_object* v_res_2598_; 
v_res_2598_ = l_IO_iterate(v_00_u03b1_2593_, v_00_u03b2_2594_, v_a_2595_, v_f_2596_);
return v_res_2598_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_mk___boxed(lean_object* v_fn_2602_, lean_object* v_mode_2603_, lean_object* v_a_00___x40___internal___hyg_2604_){
_start:
{
uint8_t v_mode_boxed_2605_; lean_object* v_res_2606_; 
v_mode_boxed_2605_ = lean_unbox(v_mode_2603_);
v_res_2606_ = lean_io_prim_handle_mk(v_fn_2602_, v_mode_boxed_2605_);
lean_dec_ref(v_fn_2602_);
return v_res_2606_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_lock___boxed(lean_object* v_h_2610_, lean_object* v_exclusive_2611_, lean_object* v_a_00___x40___internal___hyg_2612_){
_start:
{
uint8_t v_exclusive_boxed_2613_; lean_object* v_res_2614_; 
v_exclusive_boxed_2613_ = lean_unbox(v_exclusive_2611_);
v_res_2614_ = lean_io_prim_handle_lock(v_h_2610_, v_exclusive_boxed_2613_);
lean_dec(v_h_2610_);
return v_res_2614_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_tryLock___boxed(lean_object* v_h_2618_, lean_object* v_exclusive_2619_, lean_object* v_a_00___x40___internal___hyg_2620_){
_start:
{
uint8_t v_exclusive_boxed_2621_; lean_object* v_res_2622_; 
v_exclusive_boxed_2621_ = lean_unbox(v_exclusive_2619_);
v_res_2622_ = lean_io_prim_handle_try_lock(v_h_2618_, v_exclusive_boxed_2621_);
lean_dec(v_h_2618_);
return v_res_2622_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_unlock___boxed(lean_object* v_h_2625_, lean_object* v_a_00___x40___internal___hyg_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = lean_io_prim_handle_unlock(v_h_2625_);
lean_dec(v_h_2625_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_isTty___boxed(lean_object* v_h_2630_, lean_object* v_a_00___x40___internal___hyg_2631_){
_start:
{
uint8_t v_res_2632_; lean_object* v_r_2633_; 
v_res_2632_ = lean_io_prim_handle_is_tty(v_h_2630_);
lean_dec(v_h_2630_);
v_r_2633_ = lean_box(v_res_2632_);
return v_r_2633_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_flush___boxed(lean_object* v_h_2636_, lean_object* v_a_00___x40___internal___hyg_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = lean_io_prim_handle_flush(v_h_2636_);
lean_dec(v_h_2636_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_rewind___boxed(lean_object* v_h_2641_, lean_object* v_a_00___x40___internal___hyg_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = lean_io_prim_handle_rewind(v_h_2641_);
lean_dec(v_h_2641_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_truncate___boxed(lean_object* v_h_2646_, lean_object* v_a_00___x40___internal___hyg_2647_){
_start:
{
lean_object* v_res_2648_; 
v_res_2648_ = lean_io_prim_handle_truncate(v_h_2646_);
lean_dec(v_h_2646_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_read___boxed(lean_object* v_h_2652_, lean_object* v_bytes_2653_, lean_object* v_a_00___x40___internal___hyg_2654_){
_start:
{
size_t v_bytes_boxed_2655_; lean_object* v_res_2656_; 
v_bytes_boxed_2655_ = lean_unbox_usize(v_bytes_2653_);
lean_dec(v_bytes_2653_);
v_res_2656_ = lean_io_prim_handle_read(v_h_2652_, v_bytes_boxed_2655_);
lean_dec(v_h_2652_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_write___boxed(lean_object* v_h_2660_, lean_object* v_buffer_2661_, lean_object* v_a_00___x40___internal___hyg_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = lean_io_prim_handle_write(v_h_2660_, v_buffer_2661_);
lean_dec_ref(v_buffer_2661_);
lean_dec(v_h_2660_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_getLine___boxed(lean_object* v_h_2666_, lean_object* v_a_00___x40___internal___hyg_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = lean_io_prim_handle_get_line(v_h_2666_);
lean_dec(v_h_2666_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_putStr___boxed(lean_object* v_h_2672_, lean_object* v_s_2673_, lean_object* v_a_00___x40___internal___hyg_2674_){
_start:
{
lean_object* v_res_2675_; 
v_res_2675_ = lean_io_prim_handle_put_str(v_h_2672_, v_s_2673_);
lean_dec_ref(v_s_2673_);
lean_dec(v_h_2672_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_realPath___boxed(lean_object* v_fname_2678_, lean_object* v_a_00___x40___internal___hyg_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = lean_io_realpath(v_fname_2678_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_removeFile___boxed(lean_object* v_fname_2683_, lean_object* v_a_00___x40___internal___hyg_2684_){
_start:
{
lean_object* v_res_2685_; 
v_res_2685_ = lean_io_remove_file(v_fname_2683_);
lean_dec_ref(v_fname_2683_);
return v_res_2685_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_removeDir___boxed(lean_object* v_a_00___x40___internal___hyg_2688_, lean_object* v_a_00___x40___internal___hyg_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = lean_io_remove_dir(v_a_00___x40___internal___hyg_2688_);
lean_dec_ref(v_a_00___x40___internal___hyg_2688_);
return v_res_2690_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_createDir___boxed(lean_object* v_a_00___x40___internal___hyg_2693_, lean_object* v_a_00___x40___internal___hyg_2694_){
_start:
{
lean_object* v_res_2695_; 
v_res_2695_ = lean_io_create_dir(v_a_00___x40___internal___hyg_2693_);
lean_dec_ref(v_a_00___x40___internal___hyg_2693_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_rename___boxed(lean_object* v_old_2699_, lean_object* v_new_2700_, lean_object* v_a_00___x40___internal___hyg_2701_){
_start:
{
lean_object* v_res_2702_; 
v_res_2702_ = lean_io_rename(v_old_2699_, v_new_2700_);
lean_dec_ref(v_new_2700_);
lean_dec_ref(v_old_2699_);
return v_res_2702_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_hardLink___boxed(lean_object* v_orig_2706_, lean_object* v_link_2707_, lean_object* v_a_00___x40___internal___hyg_2708_){
_start:
{
lean_object* v_res_2709_; 
v_res_2709_ = lean_io_hard_link(v_orig_2706_, v_link_2707_);
lean_dec_ref(v_link_2707_);
lean_dec_ref(v_orig_2706_);
return v_res_2709_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_createTempFile___boxed(lean_object* v_a_00___x40___internal___hyg_2711_){
_start:
{
lean_object* v_res_2712_; 
v_res_2712_ = lean_io_create_tempfile();
return v_res_2712_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_createTempDir___boxed(lean_object* v_a_00___x40___internal___hyg_2714_){
_start:
{
lean_object* v_res_2715_; 
v_res_2715_ = lean_io_create_tempdir();
return v_res_2715_;
}
}
LEAN_EXPORT lean_object* l_IO_getEnv___boxed(lean_object* v_var_2718_, lean_object* v_a_00___x40___internal___hyg_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = lean_io_getenv(v_var_2718_);
lean_dec_ref(v_var_2718_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_IO_appPath___boxed(lean_object* v_a_00___x40___internal___hyg_2722_){
_start:
{
lean_object* v_res_2723_; 
v_res_2723_ = lean_io_app_path();
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l_IO_currentDir___boxed(lean_object* v_a_00___x40___internal___hyg_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = lean_io_current_dir();
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withFile___redArg(lean_object* v_fn_2727_, uint8_t v_mode_2728_, lean_object* v_f_2729_){
_start:
{
lean_object* v___x_2731_; 
v___x_2731_ = lean_io_prim_handle_mk(v_fn_2727_, v_mode_2728_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2733_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
lean_inc(v_a_2732_);
lean_dec_ref_known(v___x_2731_, 1);
v___x_2733_ = lean_apply_2(v_f_2729_, v_a_2732_, lean_box(0));
return v___x_2733_;
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec_ref(v_f_2729_);
v_a_2734_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2731_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2731_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withFile___redArg___boxed(lean_object* v_fn_2742_, lean_object* v_mode_2743_, lean_object* v_f_2744_, lean_object* v___y_2745_){
_start:
{
uint8_t v_mode_boxed_2746_; lean_object* v_res_2747_; 
v_mode_boxed_2746_ = lean_unbox(v_mode_2743_);
v_res_2747_ = l_IO_FS_withFile___redArg(v_fn_2742_, v_mode_boxed_2746_, v_f_2744_);
lean_dec_ref(v_fn_2742_);
return v_res_2747_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withFile(lean_object* v_00_u03b1_2748_, lean_object* v_fn_2749_, uint8_t v_mode_2750_, lean_object* v_f_2751_){
_start:
{
lean_object* v___x_2753_; 
v___x_2753_ = lean_io_prim_handle_mk(v_fn_2749_, v_mode_2750_);
if (lean_obj_tag(v___x_2753_) == 0)
{
lean_object* v_a_2754_; lean_object* v___x_2755_; 
v_a_2754_ = lean_ctor_get(v___x_2753_, 0);
lean_inc(v_a_2754_);
lean_dec_ref_known(v___x_2753_, 1);
v___x_2755_ = lean_apply_2(v_f_2751_, v_a_2754_, lean_box(0));
return v___x_2755_;
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2763_; 
lean_dec_ref(v_f_2751_);
v_a_2756_ = lean_ctor_get(v___x_2753_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2758_ = v___x_2753_;
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v___x_2753_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2761_; 
if (v_isShared_2759_ == 0)
{
v___x_2761_ = v___x_2758_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2756_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withFile___boxed(lean_object* v_00_u03b1_2764_, lean_object* v_fn_2765_, lean_object* v_mode_2766_, lean_object* v_f_2767_, lean_object* v___y_2768_){
_start:
{
uint8_t v_mode_boxed_2769_; lean_object* v_res_2770_; 
v_mode_boxed_2769_ = lean_unbox(v_mode_2766_);
v_res_2770_ = l_IO_FS_withFile(v_00_u03b1_2764_, v_fn_2765_, v_mode_boxed_2769_, v_f_2767_);
lean_dec_ref(v_fn_2765_);
return v_res_2770_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_putStrLn(lean_object* v_h_2771_, lean_object* v_s_2772_){
_start:
{
uint32_t v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2774_ = 10;
v___x_2775_ = lean_string_push(v_s_2772_, v___x_2774_);
v___x_2776_ = lean_io_prim_handle_put_str(v_h_2771_, v___x_2775_);
lean_dec_ref(v___x_2775_);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_putStrLn___boxed(lean_object* v_h_2777_, lean_object* v_s_2778_, lean_object* v___y_2779_){
_start:
{
lean_object* v_res_2780_; 
v_res_2780_ = l_IO_FS_Handle_putStrLn(v_h_2777_, v_s_2778_);
lean_dec(v_h_2777_);
return v_res_2780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(lean_object* v_h_2781_, lean_object* v_acc_2782_){
_start:
{
size_t v___x_2784_; lean_object* v___x_2785_; 
v___x_2784_ = ((size_t)1024ULL);
v___x_2785_ = lean_io_prim_handle_read(v_h_2781_, v___x_2784_);
if (lean_obj_tag(v___x_2785_) == 0)
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2799_; 
v_a_2786_ = lean_ctor_get(v___x_2785_, 0);
v_isSharedCheck_2799_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_2799_ == 0)
{
v___x_2788_ = v___x_2785_;
v_isShared_2789_ = v_isSharedCheck_2799_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v___x_2785_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2799_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
uint8_t v___x_2790_; 
v___x_2790_ = l_ByteArray_isEmpty(v_a_2786_);
if (v___x_2790_ == 0)
{
lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; 
lean_del_object(v___x_2788_);
v___x_2791_ = lean_unsigned_to_nat(0u);
v___x_2792_ = lean_byte_array_size(v_acc_2782_);
v___x_2793_ = lean_byte_array_size(v_a_2786_);
v___x_2794_ = lean_byte_array_copy_slice(v_a_2786_, v___x_2791_, v_acc_2782_, v___x_2792_, v___x_2793_, v___x_2790_);
lean_dec(v_a_2786_);
v_acc_2782_ = v___x_2794_;
goto _start;
}
else
{
lean_object* v___x_2797_; 
lean_dec(v_a_2786_);
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 0, v_acc_2782_);
v___x_2797_ = v___x_2788_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_acc_2782_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
}
else
{
lean_dec_ref(v_acc_2782_);
return v___x_2785_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop___boxed(lean_object* v_h_2800_, lean_object* v_acc_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(v_h_2800_, v_acc_2801_);
lean_dec(v_h_2800_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEndInto(lean_object* v_h_2804_, lean_object* v_buf_2805_){
_start:
{
lean_object* v___x_2807_; 
v___x_2807_ = l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(v_h_2804_, v_buf_2805_);
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEndInto___boxed(lean_object* v_h_2808_, lean_object* v_buf_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_IO_FS_Handle_readBinToEndInto(v_h_2808_, v_buf_2809_);
lean_dec(v_h_2808_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEnd(lean_object* v_h_2812_){
_start:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = l_ByteArray_empty;
v___x_2815_ = l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(v_h_2812_, v___x_2814_);
return v___x_2815_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readBinToEnd___boxed(lean_object* v_h_2816_, lean_object* v___y_2817_){
_start:
{
lean_object* v_res_2818_; 
v_res_2818_ = l_IO_FS_Handle_readBinToEnd(v_h_2816_);
lean_dec(v_h_2816_);
return v_res_2818_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readToEnd(lean_object* v_h_2822_){
_start:
{
lean_object* v___x_2824_; 
v___x_2824_ = l_IO_FS_Handle_readBinToEnd(v_h_2822_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2838_; 
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2827_ = v___x_2824_;
v_isShared_2828_ = v_isSharedCheck_2838_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2824_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2838_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
uint8_t v___x_2829_; 
v___x_2829_ = lean_string_validate_utf8(v_a_2825_);
if (v___x_2829_ == 0)
{
lean_object* v___x_2830_; lean_object* v___x_2832_; 
lean_dec(v_a_2825_);
v___x_2830_ = ((lean_object*)(l_IO_FS_Handle_readToEnd___closed__1));
if (v_isShared_2828_ == 0)
{
lean_ctor_set_tag(v___x_2827_, 1);
lean_ctor_set(v___x_2827_, 0, v___x_2830_);
v___x_2832_ = v___x_2827_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v___x_2830_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
else
{
lean_object* v___x_2834_; lean_object* v___x_2836_; 
v___x_2834_ = lean_string_from_utf8_unchecked(v_a_2825_);
if (v_isShared_2828_ == 0)
{
lean_ctor_set(v___x_2827_, 0, v___x_2834_);
v___x_2836_ = v___x_2827_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v___x_2834_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
}
else
{
lean_object* v_a_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2846_; 
v_a_2839_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2846_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2846_ == 0)
{
v___x_2841_ = v___x_2824_;
v_isShared_2842_ = v_isSharedCheck_2846_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_a_2839_);
lean_dec(v___x_2824_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2846_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v___x_2844_; 
if (v_isShared_2842_ == 0)
{
v___x_2844_ = v___x_2841_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2845_; 
v_reuseFailAlloc_2845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2845_, 0, v_a_2839_);
v___x_2844_ = v_reuseFailAlloc_2845_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
return v___x_2844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_readToEnd___boxed(lean_object* v_h_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_IO_FS_Handle_readToEnd(v_h_2847_);
lean_dec(v_h_2847_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_lines_read(lean_object* v_h_2850_, lean_object* v_lines_2851_){
_start:
{
lean_object* v___x_2853_; 
v___x_2853_ = lean_io_prim_handle_get_line(v_h_2850_);
if (lean_obj_tag(v___x_2853_) == 0)
{
lean_object* v_a_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2908_; 
v_a_2854_ = lean_ctor_get(v___x_2853_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2856_ = v___x_2853_;
v_isShared_2857_ = v_isSharedCheck_2908_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_a_2854_);
lean_dec(v___x_2853_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2908_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v___y_2859_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v___y_2865_; uint32_t v___y_2866_; uint32_t v___y_2874_; lean_object* v___x_2896_; lean_object* v___x_2897_; uint8_t v___x_2898_; 
v___x_2896_ = lean_string_utf8_byte_size(v_a_2854_);
v___x_2897_ = lean_unsigned_to_nat(0u);
v___x_2898_ = lean_nat_dec_eq(v___x_2896_, v___x_2897_);
if (v___x_2898_ == 0)
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
lean_inc(v_a_2854_);
v___x_2899_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2899_, 0, v_a_2854_);
lean_ctor_set(v___x_2899_, 1, v___x_2897_);
lean_ctor_set(v___x_2899_, 2, v___x_2896_);
v___x_2900_ = l_String_Slice_Pos_prev_x3f(v___x_2899_, v___x_2896_);
if (lean_obj_tag(v___x_2900_) == 0)
{
uint32_t v___x_2901_; 
lean_dec_ref_known(v___x_2899_, 3);
v___x_2901_ = 65;
v___y_2874_ = v___x_2901_;
goto v___jp_2873_;
}
else
{
lean_object* v_val_2902_; lean_object* v___x_2903_; 
v_val_2902_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_val_2902_);
lean_dec_ref_known(v___x_2900_, 1);
v___x_2903_ = l_String_Slice_Pos_get_x3f(v___x_2899_, v_val_2902_);
lean_dec(v_val_2902_);
lean_dec_ref_known(v___x_2899_, 3);
if (lean_obj_tag(v___x_2903_) == 0)
{
uint32_t v___x_2904_; 
v___x_2904_ = 65;
v___y_2874_ = v___x_2904_;
goto v___jp_2873_;
}
else
{
lean_object* v_val_2905_; uint32_t v___x_2906_; 
v_val_2905_ = lean_ctor_get(v___x_2903_, 0);
lean_inc(v_val_2905_);
lean_dec_ref_known(v___x_2903_, 1);
v___x_2906_ = lean_unbox_uint32(v_val_2905_);
lean_dec(v_val_2905_);
v___y_2874_ = v___x_2906_;
goto v___jp_2873_;
}
}
}
else
{
lean_object* v___x_2907_; 
lean_del_object(v___x_2856_);
lean_dec(v_a_2854_);
v___x_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2907_, 0, v_lines_2851_);
return v___x_2907_;
}
v___jp_2858_:
{
lean_object* v___x_2860_; 
v___x_2860_ = lean_array_push(v_lines_2851_, v___y_2859_);
v_lines_2851_ = v___x_2860_;
goto _start;
}
v___jp_2862_:
{
uint32_t v___x_2867_; uint8_t v___x_2868_; 
v___x_2867_ = 13;
v___x_2868_ = lean_uint32_dec_eq(v___y_2866_, v___x_2867_);
if (v___x_2868_ == 0)
{
lean_dec(v___y_2865_);
lean_dec(v___y_2863_);
v___y_2859_ = v___y_2864_;
goto v___jp_2858_;
}
else
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
v___x_2869_ = lean_string_utf8_byte_size(v___y_2864_);
lean_inc(v___y_2865_);
lean_inc_ref(v___y_2864_);
v___x_2870_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2870_, 0, v___y_2864_);
lean_ctor_set(v___x_2870_, 1, v___y_2865_);
lean_ctor_set(v___x_2870_, 2, v___x_2869_);
v___x_2871_ = l_String_Slice_Pos_prevn(v___x_2870_, v___x_2869_, v___y_2863_);
lean_dec_ref_known(v___x_2870_, 3);
v___x_2872_ = lean_string_utf8_extract_fast(v___y_2864_, v___y_2865_, v___x_2871_);
lean_dec(v___x_2871_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
v___y_2859_ = v___x_2872_;
goto v___jp_2858_;
}
}
v___jp_2873_:
{
uint32_t v___x_2875_; uint8_t v___x_2876_; 
v___x_2875_ = 10;
v___x_2876_ = lean_uint32_dec_eq(v___y_2874_, v___x_2875_);
if (v___x_2876_ == 0)
{
lean_object* v___x_2877_; lean_object* v___x_2879_; 
v___x_2877_ = lean_array_push(v_lines_2851_, v_a_2854_);
if (v_isShared_2857_ == 0)
{
lean_ctor_set(v___x_2856_, 0, v___x_2877_);
v___x_2879_ = v___x_2856_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v___x_2877_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
else
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; 
lean_del_object(v___x_2856_);
v___x_2881_ = lean_unsigned_to_nat(1u);
v___x_2882_ = lean_unsigned_to_nat(0u);
v___x_2883_ = lean_string_utf8_byte_size(v_a_2854_);
lean_inc(v_a_2854_);
v___x_2884_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2884_, 0, v_a_2854_);
lean_ctor_set(v___x_2884_, 1, v___x_2882_);
lean_ctor_set(v___x_2884_, 2, v___x_2883_);
v___x_2885_ = l_String_Slice_Pos_prevn(v___x_2884_, v___x_2883_, v___x_2881_);
lean_dec_ref_known(v___x_2884_, 3);
v___x_2886_ = lean_string_utf8_extract_fast(v_a_2854_, v___x_2882_, v___x_2885_);
lean_dec(v___x_2885_);
lean_dec(v_a_2854_);
v___x_2887_ = lean_string_utf8_byte_size(v___x_2886_);
lean_inc_ref(v___x_2886_);
v___x_2888_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2886_);
lean_ctor_set(v___x_2888_, 1, v___x_2882_);
lean_ctor_set(v___x_2888_, 2, v___x_2887_);
v___x_2889_ = l_String_Slice_Pos_prev_x3f(v___x_2888_, v___x_2887_);
if (lean_obj_tag(v___x_2889_) == 0)
{
uint32_t v___x_2890_; 
lean_dec_ref_known(v___x_2888_, 3);
v___x_2890_ = 65;
v___y_2863_ = v___x_2881_;
v___y_2864_ = v___x_2886_;
v___y_2865_ = v___x_2882_;
v___y_2866_ = v___x_2890_;
goto v___jp_2862_;
}
else
{
lean_object* v_val_2891_; lean_object* v___x_2892_; 
v_val_2891_ = lean_ctor_get(v___x_2889_, 0);
lean_inc(v_val_2891_);
lean_dec_ref_known(v___x_2889_, 1);
v___x_2892_ = l_String_Slice_Pos_get_x3f(v___x_2888_, v_val_2891_);
lean_dec(v_val_2891_);
lean_dec_ref_known(v___x_2888_, 3);
if (lean_obj_tag(v___x_2892_) == 0)
{
uint32_t v___x_2893_; 
v___x_2893_ = 65;
v___y_2863_ = v___x_2881_;
v___y_2864_ = v___x_2886_;
v___y_2865_ = v___x_2882_;
v___y_2866_ = v___x_2893_;
goto v___jp_2862_;
}
else
{
lean_object* v_val_2894_; uint32_t v___x_2895_; 
v_val_2894_ = lean_ctor_get(v___x_2892_, 0);
lean_inc(v_val_2894_);
lean_dec_ref_known(v___x_2892_, 1);
v___x_2895_ = lean_unbox_uint32(v_val_2894_);
lean_dec(v_val_2894_);
v___y_2863_ = v___x_2881_;
v___y_2864_ = v___x_2886_;
v___y_2865_ = v___x_2882_;
v___y_2866_ = v___x_2895_;
goto v___jp_2862_;
}
}
}
}
}
}
else
{
lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2916_; 
lean_dec_ref(v_lines_2851_);
v_a_2909_ = lean_ctor_get(v___x_2853_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2911_ = v___x_2853_;
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v___x_2853_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2916_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___x_2914_; 
if (v_isShared_2912_ == 0)
{
v___x_2914_ = v___x_2911_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_a_2909_);
v___x_2914_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
return v___x_2914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Handle_lines_read___boxed(lean_object* v_h_2917_, lean_object* v_lines_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l___private_Init_System_IO_0__IO_FS_Handle_lines_read(v_h_2917_, v_lines_2918_);
lean_dec(v_h_2917_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_lines(lean_object* v_h_2923_){
_start:
{
lean_object* v___x_2925_; lean_object* v___x_2926_; 
v___x_2925_ = ((lean_object*)(l_IO_FS_Handle_lines___closed__0));
v___x_2926_ = l___private_Init_System_IO_0__IO_FS_Handle_lines_read(v_h_2923_, v___x_2925_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Handle_lines___boxed(lean_object* v_h_2927_, lean_object* v___y_2928_){
_start:
{
lean_object* v_res_2929_; 
v_res_2929_ = l_IO_FS_Handle_lines(v_h_2927_);
lean_dec(v_h_2927_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_lines(lean_object* v_fname_2930_){
_start:
{
uint8_t v___x_2932_; lean_object* v___x_2933_; 
v___x_2932_ = 0;
v___x_2933_ = lean_io_prim_handle_mk(v_fname_2930_, v___x_2932_);
if (lean_obj_tag(v___x_2933_) == 0)
{
lean_object* v_a_2934_; lean_object* v___x_2935_; 
v_a_2934_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_a_2934_);
lean_dec_ref_known(v___x_2933_, 1);
v___x_2935_ = l_IO_FS_Handle_lines(v_a_2934_);
lean_dec(v_a_2934_);
return v___x_2935_;
}
else
{
lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2943_; 
v_a_2936_ = lean_ctor_get(v___x_2933_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2938_ = v___x_2933_;
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v___x_2933_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2941_; 
if (v_isShared_2939_ == 0)
{
v___x_2941_ = v___x_2938_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2936_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
return v___x_2941_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_lines___boxed(lean_object* v_fname_2944_, lean_object* v___y_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = l_IO_FS_lines(v_fname_2944_);
lean_dec_ref(v_fname_2944_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_writeBinFile(lean_object* v_fname_2947_, lean_object* v_content_2948_){
_start:
{
uint8_t v___x_2950_; lean_object* v___x_2951_; 
v___x_2950_ = 1;
v___x_2951_ = lean_io_prim_handle_mk(v_fname_2947_, v___x_2950_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v_a_2952_; lean_object* v___x_2953_; 
v_a_2952_ = lean_ctor_get(v___x_2951_, 0);
lean_inc(v_a_2952_);
lean_dec_ref_known(v___x_2951_, 1);
v___x_2953_ = lean_io_prim_handle_write(v_a_2952_, v_content_2948_);
lean_dec(v_a_2952_);
return v___x_2953_;
}
else
{
lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2961_; 
v_a_2954_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2956_ = v___x_2951_;
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v___x_2951_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2959_; 
if (v_isShared_2957_ == 0)
{
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2954_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
return v___x_2959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_writeBinFile___boxed(lean_object* v_fname_2962_, lean_object* v_content_2963_, lean_object* v___y_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l_IO_FS_writeBinFile(v_fname_2962_, v_content_2963_);
lean_dec_ref(v_content_2963_);
lean_dec_ref(v_fname_2962_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_writeFile(lean_object* v_fname_2966_, lean_object* v_content_2967_){
_start:
{
uint8_t v___x_2969_; lean_object* v___x_2970_; 
v___x_2969_ = 1;
v___x_2970_ = lean_io_prim_handle_mk(v_fname_2966_, v___x_2969_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v_a_2971_; lean_object* v___x_2972_; 
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
lean_inc(v_a_2971_);
lean_dec_ref_known(v___x_2970_, 1);
v___x_2972_ = lean_io_prim_handle_put_str(v_a_2971_, v_content_2967_);
lean_dec(v_a_2971_);
return v___x_2972_;
}
else
{
lean_object* v_a_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2980_; 
v_a_2973_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_2980_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_2980_ == 0)
{
v___x_2975_ = v___x_2970_;
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_a_2973_);
lean_dec(v___x_2970_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2980_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2978_; 
if (v_isShared_2976_ == 0)
{
v___x_2978_ = v___x_2975_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v_a_2973_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_writeFile___boxed(lean_object* v_fname_2981_, lean_object* v_content_2982_, lean_object* v___y_2983_){
_start:
{
lean_object* v_res_2984_; 
v_res_2984_ = l_IO_FS_writeFile(v_fname_2981_, v_content_2982_);
lean_dec_ref(v_content_2982_);
lean_dec_ref(v_fname_2981_);
return v_res_2984_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_putStrLn(lean_object* v_strm_2985_, lean_object* v_s_2986_){
_start:
{
lean_object* v_putStr_2988_; uint32_t v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; 
v_putStr_2988_ = lean_ctor_get(v_strm_2985_, 4);
lean_inc_ref(v_putStr_2988_);
lean_dec_ref(v_strm_2985_);
v___x_2989_ = 10;
v___x_2990_ = lean_string_push(v_s_2986_, v___x_2989_);
v___x_2991_ = lean_apply_2(v_putStr_2988_, v___x_2990_, lean_box(0));
return v___x_2991_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_putStrLn___boxed(lean_object* v_strm_2992_, lean_object* v_s_2993_, lean_object* v___y_2994_){
_start:
{
lean_object* v_res_2995_; 
v_res_2995_ = l_IO_FS_Stream_putStrLn(v_strm_2992_, v_s_2993_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00IO_FS_instReprDirEntry_repr_spec__0(lean_object* v_a_2996_){
_start:
{
lean_object* v___x_2997_; 
v___x_2997_ = lean_nat_to_int(v_a_2996_);
return v___x_2997_;
}
}
static lean_object* _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3011_ = lean_unsigned_to_nat(8u);
v___x_3012_ = lean_nat_to_int(v___x_3011_);
return v___x_3012_;
}
}
static lean_object* _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3022_ = lean_unsigned_to_nat(12u);
v___x_3023_ = lean_nat_to_int(v___x_3022_);
return v___x_3023_;
}
}
static lean_object* _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__0));
v___x_3026_ = lean_string_length(v___x_3025_);
return v___x_3026_;
}
}
static lean_object* _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3027_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__16, &l_IO_FS_instReprDirEntry_repr___redArg___closed__16_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__16);
v___x_3028_ = lean_nat_to_int(v___x_3027_);
return v___x_3028_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprDirEntry_repr___redArg(lean_object* v_x_3033_){
_start:
{
lean_object* v_root_3034_; lean_object* v_fileName_3035_; lean_object* v___x_3037_; uint8_t v_isShared_3038_; uint8_t v_isSharedCheck_3074_; 
v_root_3034_ = lean_ctor_get(v_x_3033_, 0);
v_fileName_3035_ = lean_ctor_get(v_x_3033_, 1);
v_isSharedCheck_3074_ = !lean_is_exclusive(v_x_3033_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3037_ = v_x_3033_;
v_isShared_3038_ = v_isSharedCheck_3074_;
goto v_resetjp_3036_;
}
else
{
lean_inc(v_fileName_3035_);
lean_inc(v_root_3034_);
lean_dec(v_x_3033_);
v___x_3037_ = lean_box(0);
v_isShared_3038_ = v_isSharedCheck_3074_;
goto v_resetjp_3036_;
}
v_resetjp_3036_:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3047_; 
v___x_3039_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__5));
v___x_3040_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__6));
v___x_3041_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__7, &l_IO_FS_instReprDirEntry_repr___redArg___closed__7_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__7);
v___x_3042_ = lean_unsigned_to_nat(0u);
v___x_3043_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__9));
v___x_3044_ = l_String_quote(v_root_3034_);
v___x_3045_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3044_);
if (v_isShared_3038_ == 0)
{
lean_ctor_set_tag(v___x_3037_, 5);
lean_ctor_set(v___x_3037_, 1, v___x_3045_);
lean_ctor_set(v___x_3037_, 0, v___x_3043_);
v___x_3047_ = v___x_3037_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v___x_3043_);
lean_ctor_set(v_reuseFailAlloc_3073_, 1, v___x_3045_);
v___x_3047_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; uint8_t v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v___x_3048_ = l_Repr_addAppParen(v___x_3047_, v___x_3042_);
v___x_3049_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3049_, 0, v___x_3041_);
lean_ctor_set(v___x_3049_, 1, v___x_3048_);
v___x_3050_ = 0;
v___x_3051_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3051_, 0, v___x_3049_);
lean_ctor_set_uint8(v___x_3051_, sizeof(void*)*1, v___x_3050_);
v___x_3052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3040_);
lean_ctor_set(v___x_3052_, 1, v___x_3051_);
v___x_3053_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__11));
v___x_3054_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3054_, 0, v___x_3052_);
lean_ctor_set(v___x_3054_, 1, v___x_3053_);
v___x_3055_ = lean_box(1);
v___x_3056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3056_, 0, v___x_3054_);
lean_ctor_set(v___x_3056_, 1, v___x_3055_);
v___x_3057_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__13));
v___x_3058_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3056_);
lean_ctor_set(v___x_3058_, 1, v___x_3057_);
v___x_3059_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3058_);
lean_ctor_set(v___x_3059_, 1, v___x_3039_);
v___x_3060_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__14, &l_IO_FS_instReprDirEntry_repr___redArg___closed__14_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__14);
v___x_3061_ = l_String_quote(v_fileName_3035_);
v___x_3062_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3062_, 0, v___x_3061_);
v___x_3063_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3060_);
lean_ctor_set(v___x_3063_, 1, v___x_3062_);
v___x_3064_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3064_, 0, v___x_3063_);
lean_ctor_set_uint8(v___x_3064_, sizeof(void*)*1, v___x_3050_);
v___x_3065_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3059_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
v___x_3066_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__17, &l_IO_FS_instReprDirEntry_repr___redArg___closed__17_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__17);
v___x_3067_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__18));
v___x_3068_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3067_);
lean_ctor_set(v___x_3068_, 1, v___x_3065_);
v___x_3069_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__19));
v___x_3070_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3068_);
lean_ctor_set(v___x_3070_, 1, v___x_3069_);
v___x_3071_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3071_, 0, v___x_3066_);
lean_ctor_set(v___x_3071_, 1, v___x_3070_);
v___x_3072_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3072_, 0, v___x_3071_);
lean_ctor_set_uint8(v___x_3072_, sizeof(void*)*1, v___x_3050_);
return v___x_3072_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprDirEntry_repr(lean_object* v_x_3075_, lean_object* v_prec_3076_){
_start:
{
lean_object* v___x_3077_; 
v___x_3077_ = l_IO_FS_instReprDirEntry_repr___redArg(v_x_3075_);
return v___x_3077_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprDirEntry_repr___boxed(lean_object* v_x_3078_, lean_object* v_prec_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l_IO_FS_instReprDirEntry_repr(v_x_3078_, v_prec_3079_);
lean_dec(v_prec_3079_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_DirEntry_path(lean_object* v_entry_3083_){
_start:
{
lean_object* v_root_3084_; lean_object* v_fileName_3085_; lean_object* v___x_3086_; 
v_root_3084_ = lean_ctor_get(v_entry_3083_, 0);
lean_inc_ref(v_root_3084_);
v_fileName_3085_ = lean_ctor_get(v_entry_3083_, 1);
lean_inc_ref(v_fileName_3085_);
lean_dec_ref(v_entry_3083_);
v___x_3086_ = l_System_FilePath_join(v_root_3084_, v_fileName_3085_);
return v___x_3086_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorIdx(uint8_t v_x_3087_){
_start:
{
switch(v_x_3087_)
{
case 0:
{
lean_object* v___x_3088_; 
v___x_3088_ = lean_unsigned_to_nat(0u);
return v___x_3088_;
}
case 1:
{
lean_object* v___x_3089_; 
v___x_3089_ = lean_unsigned_to_nat(1u);
return v___x_3089_;
}
case 2:
{
lean_object* v___x_3090_; 
v___x_3090_ = lean_unsigned_to_nat(2u);
return v___x_3090_;
}
default: 
{
lean_object* v___x_3091_; 
v___x_3091_ = lean_unsigned_to_nat(3u);
return v___x_3091_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorIdx___boxed(lean_object* v_x_3092_){
_start:
{
uint8_t v_x_boxed_3093_; lean_object* v_res_3094_; 
v_x_boxed_3093_ = lean_unbox(v_x_3092_);
v_res_3094_ = l_IO_FS_FileType_ctorIdx(v_x_boxed_3093_);
return v_res_3094_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim___redArg(lean_object* v_k_3095_){
_start:
{
lean_inc(v_k_3095_);
return v_k_3095_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim___redArg___boxed(lean_object* v_k_3096_){
_start:
{
lean_object* v_res_3097_; 
v_res_3097_ = l_IO_FS_FileType_ctorElim___redArg(v_k_3096_);
lean_dec(v_k_3096_);
return v_res_3097_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim(lean_object* v_motive_3098_, lean_object* v_ctorIdx_3099_, uint8_t v_t_3100_, lean_object* v_h_3101_, lean_object* v_k_3102_){
_start:
{
lean_inc(v_k_3102_);
return v_k_3102_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_ctorElim___boxed(lean_object* v_motive_3103_, lean_object* v_ctorIdx_3104_, lean_object* v_t_3105_, lean_object* v_h_3106_, lean_object* v_k_3107_){
_start:
{
uint8_t v_t_boxed_3108_; lean_object* v_res_3109_; 
v_t_boxed_3108_ = lean_unbox(v_t_3105_);
v_res_3109_ = l_IO_FS_FileType_ctorElim(v_motive_3103_, v_ctorIdx_3104_, v_t_boxed_3108_, v_h_3106_, v_k_3107_);
lean_dec(v_k_3107_);
lean_dec(v_ctorIdx_3104_);
return v_res_3109_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim___redArg(lean_object* v_dir_3110_){
_start:
{
lean_inc(v_dir_3110_);
return v_dir_3110_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim___redArg___boxed(lean_object* v_dir_3111_){
_start:
{
lean_object* v_res_3112_; 
v_res_3112_ = l_IO_FS_FileType_dir_elim___redArg(v_dir_3111_);
lean_dec(v_dir_3111_);
return v_res_3112_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim(lean_object* v_motive_3113_, uint8_t v_t_3114_, lean_object* v_h_3115_, lean_object* v_dir_3116_){
_start:
{
lean_inc(v_dir_3116_);
return v_dir_3116_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_dir_elim___boxed(lean_object* v_motive_3117_, lean_object* v_t_3118_, lean_object* v_h_3119_, lean_object* v_dir_3120_){
_start:
{
uint8_t v_t_boxed_3121_; lean_object* v_res_3122_; 
v_t_boxed_3121_ = lean_unbox(v_t_3118_);
v_res_3122_ = l_IO_FS_FileType_dir_elim(v_motive_3117_, v_t_boxed_3121_, v_h_3119_, v_dir_3120_);
lean_dec(v_dir_3120_);
return v_res_3122_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim___redArg(lean_object* v_file_3123_){
_start:
{
lean_inc(v_file_3123_);
return v_file_3123_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim___redArg___boxed(lean_object* v_file_3124_){
_start:
{
lean_object* v_res_3125_; 
v_res_3125_ = l_IO_FS_FileType_file_elim___redArg(v_file_3124_);
lean_dec(v_file_3124_);
return v_res_3125_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim(lean_object* v_motive_3126_, uint8_t v_t_3127_, lean_object* v_h_3128_, lean_object* v_file_3129_){
_start:
{
lean_inc(v_file_3129_);
return v_file_3129_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_file_elim___boxed(lean_object* v_motive_3130_, lean_object* v_t_3131_, lean_object* v_h_3132_, lean_object* v_file_3133_){
_start:
{
uint8_t v_t_boxed_3134_; lean_object* v_res_3135_; 
v_t_boxed_3134_ = lean_unbox(v_t_3131_);
v_res_3135_ = l_IO_FS_FileType_file_elim(v_motive_3130_, v_t_boxed_3134_, v_h_3132_, v_file_3133_);
lean_dec(v_file_3133_);
return v_res_3135_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim___redArg(lean_object* v_symlink_3136_){
_start:
{
lean_inc(v_symlink_3136_);
return v_symlink_3136_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim___redArg___boxed(lean_object* v_symlink_3137_){
_start:
{
lean_object* v_res_3138_; 
v_res_3138_ = l_IO_FS_FileType_symlink_elim___redArg(v_symlink_3137_);
lean_dec(v_symlink_3137_);
return v_res_3138_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim(lean_object* v_motive_3139_, uint8_t v_t_3140_, lean_object* v_h_3141_, lean_object* v_symlink_3142_){
_start:
{
lean_inc(v_symlink_3142_);
return v_symlink_3142_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_symlink_elim___boxed(lean_object* v_motive_3143_, lean_object* v_t_3144_, lean_object* v_h_3145_, lean_object* v_symlink_3146_){
_start:
{
uint8_t v_t_boxed_3147_; lean_object* v_res_3148_; 
v_t_boxed_3147_ = lean_unbox(v_t_3144_);
v_res_3148_ = l_IO_FS_FileType_symlink_elim(v_motive_3143_, v_t_boxed_3147_, v_h_3145_, v_symlink_3146_);
lean_dec(v_symlink_3146_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim___redArg(lean_object* v_other_3149_){
_start:
{
lean_inc(v_other_3149_);
return v_other_3149_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim___redArg___boxed(lean_object* v_other_3150_){
_start:
{
lean_object* v_res_3151_; 
v_res_3151_ = l_IO_FS_FileType_other_elim___redArg(v_other_3150_);
lean_dec(v_other_3150_);
return v_res_3151_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim(lean_object* v_motive_3152_, uint8_t v_t_3153_, lean_object* v_h_3154_, lean_object* v_other_3155_){
_start:
{
lean_inc(v_other_3155_);
return v_other_3155_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_FileType_other_elim___boxed(lean_object* v_motive_3156_, lean_object* v_t_3157_, lean_object* v_h_3158_, lean_object* v_other_3159_){
_start:
{
uint8_t v_t_boxed_3160_; lean_object* v_res_3161_; 
v_t_boxed_3160_ = lean_unbox(v_t_3157_);
v_res_3161_ = l_IO_FS_FileType_other_elim(v_motive_3156_, v_t_boxed_3160_, v_h_3158_, v_other_3159_);
lean_dec(v_other_3159_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprFileType_repr(uint8_t v_x_3174_, lean_object* v_prec_3175_){
_start:
{
lean_object* v___y_3177_; lean_object* v___y_3184_; lean_object* v___y_3191_; lean_object* v___y_3198_; 
switch(v_x_3174_)
{
case 0:
{
lean_object* v___x_3204_; uint8_t v___x_3205_; 
v___x_3204_ = lean_unsigned_to_nat(1024u);
v___x_3205_ = lean_nat_dec_le(v___x_3204_, v_prec_3175_);
if (v___x_3205_ == 0)
{
lean_object* v___x_3206_; 
v___x_3206_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_3177_ = v___x_3206_;
goto v___jp_3176_;
}
else
{
lean_object* v___x_3207_; 
v___x_3207_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_3177_ = v___x_3207_;
goto v___jp_3176_;
}
}
case 1:
{
lean_object* v___x_3208_; uint8_t v___x_3209_; 
v___x_3208_ = lean_unsigned_to_nat(1024u);
v___x_3209_ = lean_nat_dec_le(v___x_3208_, v_prec_3175_);
if (v___x_3209_ == 0)
{
lean_object* v___x_3210_; 
v___x_3210_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_3184_ = v___x_3210_;
goto v___jp_3183_;
}
else
{
lean_object* v___x_3211_; 
v___x_3211_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_3184_ = v___x_3211_;
goto v___jp_3183_;
}
}
case 2:
{
lean_object* v___x_3212_; uint8_t v___x_3213_; 
v___x_3212_ = lean_unsigned_to_nat(1024u);
v___x_3213_ = lean_nat_dec_le(v___x_3212_, v_prec_3175_);
if (v___x_3213_ == 0)
{
lean_object* v___x_3214_; 
v___x_3214_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_3191_ = v___x_3214_;
goto v___jp_3190_;
}
else
{
lean_object* v___x_3215_; 
v___x_3215_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_3191_ = v___x_3215_;
goto v___jp_3190_;
}
}
default: 
{
lean_object* v___x_3216_; uint8_t v___x_3217_; 
v___x_3216_ = lean_unsigned_to_nat(1024u);
v___x_3217_ = lean_nat_dec_le(v___x_3216_, v_prec_3175_);
if (v___x_3217_ == 0)
{
lean_object* v___x_3218_; 
v___x_3218_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__6, &l_IO_instReprTaskState_repr___closed__6_once, _init_l_IO_instReprTaskState_repr___closed__6);
v___y_3198_ = v___x_3218_;
goto v___jp_3197_;
}
else
{
lean_object* v___x_3219_; 
v___x_3219_ = lean_obj_once(&l_IO_instReprTaskState_repr___closed__7, &l_IO_instReprTaskState_repr___closed__7_once, _init_l_IO_instReprTaskState_repr___closed__7);
v___y_3198_ = v___x_3219_;
goto v___jp_3197_;
}
}
}
v___jp_3176_:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; uint8_t v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3178_ = ((lean_object*)(l_IO_FS_instReprFileType_repr___closed__1));
lean_inc(v___y_3177_);
v___x_3179_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3179_, 0, v___y_3177_);
lean_ctor_set(v___x_3179_, 1, v___x_3178_);
v___x_3180_ = 0;
v___x_3181_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3181_, 0, v___x_3179_);
lean_ctor_set_uint8(v___x_3181_, sizeof(void*)*1, v___x_3180_);
v___x_3182_ = l_Repr_addAppParen(v___x_3181_, v_prec_3175_);
return v___x_3182_;
}
v___jp_3183_:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; uint8_t v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; 
v___x_3185_ = ((lean_object*)(l_IO_FS_instReprFileType_repr___closed__3));
lean_inc(v___y_3184_);
v___x_3186_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3186_, 0, v___y_3184_);
lean_ctor_set(v___x_3186_, 1, v___x_3185_);
v___x_3187_ = 0;
v___x_3188_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3188_, 0, v___x_3186_);
lean_ctor_set_uint8(v___x_3188_, sizeof(void*)*1, v___x_3187_);
v___x_3189_ = l_Repr_addAppParen(v___x_3188_, v_prec_3175_);
return v___x_3189_;
}
v___jp_3190_:
{
lean_object* v___x_3192_; lean_object* v___x_3193_; uint8_t v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3192_ = ((lean_object*)(l_IO_FS_instReprFileType_repr___closed__5));
lean_inc(v___y_3191_);
v___x_3193_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3193_, 0, v___y_3191_);
lean_ctor_set(v___x_3193_, 1, v___x_3192_);
v___x_3194_ = 0;
v___x_3195_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3195_, 0, v___x_3193_);
lean_ctor_set_uint8(v___x_3195_, sizeof(void*)*1, v___x_3194_);
v___x_3196_ = l_Repr_addAppParen(v___x_3195_, v_prec_3175_);
return v___x_3196_;
}
v___jp_3197_:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; uint8_t v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3199_ = ((lean_object*)(l_IO_FS_instReprFileType_repr___closed__7));
lean_inc(v___y_3198_);
v___x_3200_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3200_, 0, v___y_3198_);
lean_ctor_set(v___x_3200_, 1, v___x_3199_);
v___x_3201_ = 0;
v___x_3202_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3202_, 0, v___x_3200_);
lean_ctor_set_uint8(v___x_3202_, sizeof(void*)*1, v___x_3201_);
v___x_3203_ = l_Repr_addAppParen(v___x_3202_, v_prec_3175_);
return v___x_3203_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprFileType_repr___boxed(lean_object* v_x_3220_, lean_object* v_prec_3221_){
_start:
{
uint8_t v_x_221__boxed_3222_; lean_object* v_res_3223_; 
v_x_221__boxed_3222_ = lean_unbox(v_x_3220_);
v_res_3223_ = l_IO_FS_instReprFileType_repr(v_x_221__boxed_3222_, v_prec_3221_);
lean_dec(v_prec_3221_);
return v_res_3223_;
}
}
LEAN_EXPORT uint8_t l_IO_FS_instBEqFileType_beq(uint8_t v_x_3226_, uint8_t v_y_3227_){
_start:
{
lean_object* v___x_3228_; lean_object* v___x_3229_; uint8_t v___x_3230_; 
v___x_3228_ = l_IO_FS_FileType_ctorIdx(v_x_3226_);
v___x_3229_ = l_IO_FS_FileType_ctorIdx(v_y_3227_);
v___x_3230_ = lean_nat_dec_eq(v___x_3228_, v___x_3229_);
lean_dec(v___x_3229_);
lean_dec(v___x_3228_);
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instBEqFileType_beq___boxed(lean_object* v_x_3231_, lean_object* v_y_3232_){
_start:
{
uint8_t v_x_21__boxed_3233_; uint8_t v_y_22__boxed_3234_; uint8_t v_res_3235_; lean_object* v_r_3236_; 
v_x_21__boxed_3233_ = lean_unbox(v_x_3231_);
v_y_22__boxed_3234_ = lean_unbox(v_y_3232_);
v_res_3235_ = l_IO_FS_instBEqFileType_beq(v_x_21__boxed_3233_, v_y_22__boxed_3234_);
v_r_3236_ = lean_box(v_res_3235_);
return v_r_3236_;
}
}
static lean_object* _init_l_IO_FS_instReprSystemTime_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3248_ = lean_unsigned_to_nat(7u);
v___x_3249_ = lean_nat_to_int(v___x_3248_);
return v___x_3249_;
}
}
static lean_object* _init_l_IO_FS_instReprSystemTime_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3253_ = lean_unsigned_to_nat(0u);
v___x_3254_ = lean_nat_to_int(v___x_3253_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr___redArg(lean_object* v_x_3255_){
_start:
{
lean_object* v_sec_3256_; uint32_t v_nsec_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___y_3262_; lean_object* v___x_3288_; lean_object* v___x_3289_; uint8_t v___x_3290_; 
v_sec_3256_ = lean_ctor_get(v_x_3255_, 0);
v_nsec_3257_ = lean_ctor_get_uint32(v_x_3255_, sizeof(void*)*1);
v___x_3258_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__5));
v___x_3259_ = ((lean_object*)(l_IO_FS_instReprSystemTime_repr___redArg___closed__3));
v___x_3260_ = lean_obj_once(&l_IO_FS_instReprSystemTime_repr___redArg___closed__4, &l_IO_FS_instReprSystemTime_repr___redArg___closed__4_once, _init_l_IO_FS_instReprSystemTime_repr___redArg___closed__4);
v___x_3288_ = lean_unsigned_to_nat(0u);
v___x_3289_ = lean_obj_once(&l_IO_FS_instReprSystemTime_repr___redArg___closed__7, &l_IO_FS_instReprSystemTime_repr___redArg___closed__7_once, _init_l_IO_FS_instReprSystemTime_repr___redArg___closed__7);
v___x_3290_ = lean_int_dec_lt(v_sec_3256_, v___x_3289_);
if (v___x_3290_ == 0)
{
lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3291_ = l_Int_repr(v_sec_3256_);
v___x_3292_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3292_, 0, v___x_3291_);
v___y_3262_ = v___x_3292_;
goto v___jp_3261_;
}
else
{
lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
v___x_3293_ = l_Int_repr(v_sec_3256_);
v___x_3294_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3293_);
v___x_3295_ = l_Repr_addAppParen(v___x_3294_, v___x_3288_);
v___y_3262_ = v___x_3295_;
goto v___jp_3261_;
}
v___jp_3261_:
{
lean_object* v___x_3263_; uint8_t v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; 
v___x_3263_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3260_);
lean_ctor_set(v___x_3263_, 1, v___y_3262_);
v___x_3264_ = 0;
v___x_3265_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3265_, 0, v___x_3263_);
lean_ctor_set_uint8(v___x_3265_, sizeof(void*)*1, v___x_3264_);
v___x_3266_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3259_);
lean_ctor_set(v___x_3266_, 1, v___x_3265_);
v___x_3267_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__11));
v___x_3268_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3266_);
lean_ctor_set(v___x_3268_, 1, v___x_3267_);
v___x_3269_ = lean_box(1);
v___x_3270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3270_, 0, v___x_3268_);
lean_ctor_set(v___x_3270_, 1, v___x_3269_);
v___x_3271_ = ((lean_object*)(l_IO_FS_instReprSystemTime_repr___redArg___closed__6));
v___x_3272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3270_);
lean_ctor_set(v___x_3272_, 1, v___x_3271_);
v___x_3273_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3273_, 0, v___x_3272_);
lean_ctor_set(v___x_3273_, 1, v___x_3258_);
v___x_3274_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__7, &l_IO_FS_instReprDirEntry_repr___redArg___closed__7_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__7);
v___x_3275_ = lean_uint32_to_nat(v_nsec_3257_);
v___x_3276_ = l_Nat_reprFast(v___x_3275_);
v___x_3277_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3277_, 0, v___x_3276_);
v___x_3278_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3274_);
lean_ctor_set(v___x_3278_, 1, v___x_3277_);
v___x_3279_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
lean_ctor_set_uint8(v___x_3279_, sizeof(void*)*1, v___x_3264_);
v___x_3280_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3273_);
lean_ctor_set(v___x_3280_, 1, v___x_3279_);
v___x_3281_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__17, &l_IO_FS_instReprDirEntry_repr___redArg___closed__17_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__17);
v___x_3282_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__18));
v___x_3283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
lean_ctor_set(v___x_3283_, 1, v___x_3280_);
v___x_3284_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__19));
v___x_3285_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3283_);
lean_ctor_set(v___x_3285_, 1, v___x_3284_);
v___x_3286_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3281_);
lean_ctor_set(v___x_3286_, 1, v___x_3285_);
v___x_3287_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3287_, 0, v___x_3286_);
lean_ctor_set_uint8(v___x_3287_, sizeof(void*)*1, v___x_3264_);
return v___x_3287_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr___redArg___boxed(lean_object* v_x_3296_){
_start:
{
lean_object* v_res_3297_; 
v_res_3297_ = l_IO_FS_instReprSystemTime_repr___redArg(v_x_3296_);
lean_dec_ref(v_x_3296_);
return v_res_3297_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr(lean_object* v_x_3298_, lean_object* v_prec_3299_){
_start:
{
lean_object* v___x_3300_; 
v___x_3300_ = l_IO_FS_instReprSystemTime_repr___redArg(v_x_3298_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprSystemTime_repr___boxed(lean_object* v_x_3301_, lean_object* v_prec_3302_){
_start:
{
lean_object* v_res_3303_; 
v_res_3303_ = l_IO_FS_instReprSystemTime_repr(v_x_3301_, v_prec_3302_);
lean_dec(v_prec_3302_);
lean_dec_ref(v_x_3301_);
return v_res_3303_;
}
}
LEAN_EXPORT uint8_t l_IO_FS_instBEqSystemTime_beq(lean_object* v_x_3306_, lean_object* v_x_3307_){
_start:
{
lean_object* v_sec_3308_; uint32_t v_nsec_3309_; lean_object* v_sec_3310_; uint32_t v_nsec_3311_; uint8_t v___x_3312_; 
v_sec_3308_ = lean_ctor_get(v_x_3306_, 0);
v_nsec_3309_ = lean_ctor_get_uint32(v_x_3306_, sizeof(void*)*1);
v_sec_3310_ = lean_ctor_get(v_x_3307_, 0);
v_nsec_3311_ = lean_ctor_get_uint32(v_x_3307_, sizeof(void*)*1);
v___x_3312_ = lean_int_dec_eq(v_sec_3308_, v_sec_3310_);
if (v___x_3312_ == 0)
{
return v___x_3312_;
}
else
{
uint8_t v___x_3313_; 
v___x_3313_ = lean_uint32_dec_eq(v_nsec_3309_, v_nsec_3311_);
return v___x_3313_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_instBEqSystemTime_beq___boxed(lean_object* v_x_3314_, lean_object* v_x_3315_){
_start:
{
uint8_t v_res_3316_; lean_object* v_r_3317_; 
v_res_3316_ = l_IO_FS_instBEqSystemTime_beq(v_x_3314_, v_x_3315_);
lean_dec_ref(v_x_3315_);
lean_dec_ref(v_x_3314_);
v_r_3317_ = lean_box(v_res_3316_);
return v_r_3317_;
}
}
LEAN_EXPORT uint8_t l_IO_FS_instOrdSystemTime_ord(lean_object* v_x_3320_, lean_object* v_x_3321_){
_start:
{
lean_object* v_sec_3322_; uint32_t v_nsec_3323_; lean_object* v_sec_3324_; uint32_t v_nsec_3325_; uint8_t v___x_3326_; 
v_sec_3322_ = lean_ctor_get(v_x_3320_, 0);
v_nsec_3323_ = lean_ctor_get_uint32(v_x_3320_, sizeof(void*)*1);
v_sec_3324_ = lean_ctor_get(v_x_3321_, 0);
v_nsec_3325_ = lean_ctor_get_uint32(v_x_3321_, sizeof(void*)*1);
v___x_3326_ = lean_int_dec_lt(v_sec_3322_, v_sec_3324_);
if (v___x_3326_ == 0)
{
uint8_t v___x_3327_; 
v___x_3327_ = lean_int_dec_eq(v_sec_3322_, v_sec_3324_);
if (v___x_3327_ == 0)
{
uint8_t v___x_3328_; 
v___x_3328_ = 2;
return v___x_3328_;
}
else
{
uint8_t v___x_3329_; 
v___x_3329_ = lean_uint32_dec_lt(v_nsec_3323_, v_nsec_3325_);
if (v___x_3329_ == 0)
{
uint8_t v___x_3330_; 
v___x_3330_ = lean_uint32_dec_eq(v_nsec_3323_, v_nsec_3325_);
if (v___x_3330_ == 0)
{
uint8_t v___x_3331_; 
v___x_3331_ = 2;
return v___x_3331_;
}
else
{
uint8_t v___x_3332_; 
v___x_3332_ = 1;
return v___x_3332_;
}
}
else
{
uint8_t v___x_3333_; 
v___x_3333_ = 0;
return v___x_3333_;
}
}
}
else
{
uint8_t v___x_3334_; 
v___x_3334_ = 0;
return v___x_3334_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_instOrdSystemTime_ord___boxed(lean_object* v_x_3335_, lean_object* v_x_3336_){
_start:
{
uint8_t v_res_3337_; lean_object* v_r_3338_; 
v_res_3337_ = l_IO_FS_instOrdSystemTime_ord(v_x_3335_, v_x_3336_);
lean_dec_ref(v_x_3336_);
lean_dec_ref(v_x_3335_);
v_r_3338_ = lean_box(v_res_3337_);
return v_r_3338_;
}
}
static lean_object* _init_l_IO_FS_instInhabitedSystemTime_default___closed__0(void){
_start:
{
uint32_t v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3341_ = 0;
v___x_3342_ = lean_obj_once(&l_IO_FS_instReprSystemTime_repr___redArg___closed__7, &l_IO_FS_instReprSystemTime_repr___redArg___closed__7_once, _init_l_IO_FS_instReprSystemTime_repr___redArg___closed__7);
v___x_3343_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_3343_, 0, v___x_3342_);
lean_ctor_set_uint32(v___x_3343_, sizeof(void*)*1, v___x_3341_);
return v___x_3343_;
}
}
static lean_object* _init_l_IO_FS_instInhabitedSystemTime_default(void){
_start:
{
lean_object* v___x_3344_; 
v___x_3344_ = lean_obj_once(&l_IO_FS_instInhabitedSystemTime_default___closed__0, &l_IO_FS_instInhabitedSystemTime_default___closed__0_once, _init_l_IO_FS_instInhabitedSystemTime_default___closed__0);
return v___x_3344_;
}
}
static lean_object* _init_l_IO_FS_instInhabitedSystemTime(void){
_start:
{
lean_object* v___x_3345_; 
v___x_3345_ = l_IO_FS_instInhabitedSystemTime_default;
return v___x_3345_;
}
}
static lean_object* _init_l_IO_FS_instLTSystemTime(void){
_start:
{
lean_object* v___x_3346_; 
v___x_3346_ = lean_box(0);
return v___x_3346_;
}
}
static lean_object* _init_l_IO_FS_instLESystemTime(void){
_start:
{
lean_object* v___x_3347_; 
v___x_3347_ = lean_box(0);
return v___x_3347_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr___redArg(lean_object* v_x_3369_){
_start:
{
lean_object* v_accessed_3370_; lean_object* v_modified_3371_; uint64_t v_byteSize_3372_; uint8_t v_type_3373_; uint64_t v_numLinks_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; uint8_t v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v_accessed_3370_ = lean_ctor_get(v_x_3369_, 0);
v_modified_3371_ = lean_ctor_get(v_x_3369_, 1);
v_byteSize_3372_ = lean_ctor_get_uint64(v_x_3369_, sizeof(void*)*2);
v_type_3373_ = lean_ctor_get_uint8(v_x_3369_, sizeof(void*)*2 + 16);
v_numLinks_3374_ = lean_ctor_get_uint64(v_x_3369_, sizeof(void*)*2 + 8);
v___x_3375_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__5));
v___x_3376_ = ((lean_object*)(l_IO_FS_instReprMetadata_repr___redArg___closed__3));
v___x_3377_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__14, &l_IO_FS_instReprDirEntry_repr___redArg___closed__14_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__14);
v___x_3378_ = lean_unsigned_to_nat(0u);
v___x_3379_ = l_IO_FS_instReprSystemTime_repr___redArg(v_accessed_3370_);
v___x_3380_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3380_, 0, v___x_3377_);
lean_ctor_set(v___x_3380_, 1, v___x_3379_);
v___x_3381_ = 0;
v___x_3382_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3382_, 0, v___x_3380_);
lean_ctor_set_uint8(v___x_3382_, sizeof(void*)*1, v___x_3381_);
v___x_3383_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3383_, 0, v___x_3376_);
lean_ctor_set(v___x_3383_, 1, v___x_3382_);
v___x_3384_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__11));
v___x_3385_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3385_, 0, v___x_3383_);
lean_ctor_set(v___x_3385_, 1, v___x_3384_);
v___x_3386_ = lean_box(1);
v___x_3387_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3385_);
lean_ctor_set(v___x_3387_, 1, v___x_3386_);
v___x_3388_ = ((lean_object*)(l_IO_FS_instReprMetadata_repr___redArg___closed__5));
v___x_3389_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3387_);
lean_ctor_set(v___x_3389_, 1, v___x_3388_);
v___x_3390_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3389_);
lean_ctor_set(v___x_3390_, 1, v___x_3375_);
v___x_3391_ = l_IO_FS_instReprSystemTime_repr___redArg(v_modified_3371_);
v___x_3392_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3392_, 0, v___x_3377_);
lean_ctor_set(v___x_3392_, 1, v___x_3391_);
v___x_3393_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3393_, 0, v___x_3392_);
lean_ctor_set_uint8(v___x_3393_, sizeof(void*)*1, v___x_3381_);
v___x_3394_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3390_);
lean_ctor_set(v___x_3394_, 1, v___x_3393_);
v___x_3395_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3395_, 0, v___x_3394_);
lean_ctor_set(v___x_3395_, 1, v___x_3384_);
v___x_3396_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3395_);
lean_ctor_set(v___x_3396_, 1, v___x_3386_);
v___x_3397_ = ((lean_object*)(l_IO_FS_instReprMetadata_repr___redArg___closed__7));
v___x_3398_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3396_);
lean_ctor_set(v___x_3398_, 1, v___x_3397_);
v___x_3399_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
lean_ctor_set(v___x_3399_, 1, v___x_3375_);
v___x_3400_ = lean_uint64_to_nat(v_byteSize_3372_);
v___x_3401_ = l_Nat_reprFast(v___x_3400_);
v___x_3402_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3401_);
v___x_3403_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3403_, 0, v___x_3377_);
lean_ctor_set(v___x_3403_, 1, v___x_3402_);
v___x_3404_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3404_, 0, v___x_3403_);
lean_ctor_set_uint8(v___x_3404_, sizeof(void*)*1, v___x_3381_);
v___x_3405_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3399_);
lean_ctor_set(v___x_3405_, 1, v___x_3404_);
v___x_3406_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3405_);
lean_ctor_set(v___x_3406_, 1, v___x_3384_);
v___x_3407_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3407_, 0, v___x_3406_);
lean_ctor_set(v___x_3407_, 1, v___x_3386_);
v___x_3408_ = ((lean_object*)(l_IO_FS_instReprMetadata_repr___redArg___closed__9));
v___x_3409_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3409_, 0, v___x_3407_);
lean_ctor_set(v___x_3409_, 1, v___x_3408_);
v___x_3410_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3409_);
lean_ctor_set(v___x_3410_, 1, v___x_3375_);
v___x_3411_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__7, &l_IO_FS_instReprDirEntry_repr___redArg___closed__7_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__7);
v___x_3412_ = l_IO_FS_instReprFileType_repr(v_type_3373_, v___x_3378_);
v___x_3413_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3413_, 0, v___x_3411_);
lean_ctor_set(v___x_3413_, 1, v___x_3412_);
v___x_3414_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3414_, 0, v___x_3413_);
lean_ctor_set_uint8(v___x_3414_, sizeof(void*)*1, v___x_3381_);
v___x_3415_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3410_);
lean_ctor_set(v___x_3415_, 1, v___x_3414_);
v___x_3416_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3415_);
lean_ctor_set(v___x_3416_, 1, v___x_3384_);
v___x_3417_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3416_);
lean_ctor_set(v___x_3417_, 1, v___x_3386_);
v___x_3418_ = ((lean_object*)(l_IO_FS_instReprMetadata_repr___redArg___closed__11));
v___x_3419_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3419_, 0, v___x_3417_);
lean_ctor_set(v___x_3419_, 1, v___x_3418_);
v___x_3420_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3419_);
lean_ctor_set(v___x_3420_, 1, v___x_3375_);
v___x_3421_ = lean_uint64_to_nat(v_numLinks_3374_);
v___x_3422_ = l_Nat_reprFast(v___x_3421_);
v___x_3423_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3422_);
v___x_3424_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3424_, 0, v___x_3377_);
lean_ctor_set(v___x_3424_, 1, v___x_3423_);
v___x_3425_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
lean_ctor_set_uint8(v___x_3425_, sizeof(void*)*1, v___x_3381_);
v___x_3426_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3420_);
lean_ctor_set(v___x_3426_, 1, v___x_3425_);
v___x_3427_ = lean_obj_once(&l_IO_FS_instReprDirEntry_repr___redArg___closed__17, &l_IO_FS_instReprDirEntry_repr___redArg___closed__17_once, _init_l_IO_FS_instReprDirEntry_repr___redArg___closed__17);
v___x_3428_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__18));
v___x_3429_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3429_, 0, v___x_3428_);
lean_ctor_set(v___x_3429_, 1, v___x_3426_);
v___x_3430_ = ((lean_object*)(l_IO_FS_instReprDirEntry_repr___redArg___closed__19));
v___x_3431_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3431_, 0, v___x_3429_);
lean_ctor_set(v___x_3431_, 1, v___x_3430_);
v___x_3432_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3432_, 0, v___x_3427_);
lean_ctor_set(v___x_3432_, 1, v___x_3431_);
v___x_3433_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3433_, 0, v___x_3432_);
lean_ctor_set_uint8(v___x_3433_, sizeof(void*)*1, v___x_3381_);
return v___x_3433_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr___redArg___boxed(lean_object* v_x_3434_){
_start:
{
lean_object* v_res_3435_; 
v_res_3435_ = l_IO_FS_instReprMetadata_repr___redArg(v_x_3434_);
lean_dec_ref(v_x_3434_);
return v_res_3435_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr(lean_object* v_x_3436_, lean_object* v_prec_3437_){
_start:
{
lean_object* v___x_3438_; 
v___x_3438_ = l_IO_FS_instReprMetadata_repr___redArg(v_x_3436_);
return v___x_3438_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_instReprMetadata_repr___boxed(lean_object* v_x_3439_, lean_object* v_prec_3440_){
_start:
{
lean_object* v_res_3441_; 
v_res_3441_ = l_IO_FS_instReprMetadata_repr(v_x_3439_, v_prec_3440_);
lean_dec(v_prec_3440_);
lean_dec_ref(v_x_3439_);
return v_res_3441_;
}
}
LEAN_EXPORT lean_object* l_System_FilePath_readDir___boxed(lean_object* v_a_00___x40___internal___hyg_3446_, lean_object* v_a_00___x40___internal___hyg_3447_){
_start:
{
lean_object* v_res_3448_; 
v_res_3448_ = lean_io_read_dir(v_a_00___x40___internal___hyg_3446_);
lean_dec_ref(v_a_00___x40___internal___hyg_3446_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_System_FilePath_metadata___boxed(lean_object* v_a_00___x40___internal___hyg_3451_, lean_object* v_a_00___x40___internal___hyg_3452_){
_start:
{
lean_object* v_res_3453_; 
v_res_3453_ = lean_io_metadata(v_a_00___x40___internal___hyg_3451_);
lean_dec_ref(v_a_00___x40___internal___hyg_3451_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l_System_FilePath_symlinkMetadata___boxed(lean_object* v_a_00___x40___internal___hyg_3456_, lean_object* v_a_00___x40___internal___hyg_3457_){
_start:
{
lean_object* v_res_3458_; 
v_res_3458_ = lean_io_symlink_metadata(v_a_00___x40___internal___hyg_3456_);
lean_dec_ref(v_a_00___x40___internal___hyg_3456_);
return v_res_3458_;
}
}
LEAN_EXPORT uint8_t l_System_FilePath_isDir(lean_object* v_p_3459_){
_start:
{
lean_object* v___x_3461_; 
v___x_3461_ = lean_io_metadata(v_p_3459_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; uint8_t v_type_3463_; uint8_t v___x_3464_; uint8_t v___x_3465_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
lean_inc(v_a_3462_);
lean_dec_ref_known(v___x_3461_, 1);
v_type_3463_ = lean_ctor_get_uint8(v_a_3462_, sizeof(void*)*2 + 16);
lean_dec(v_a_3462_);
v___x_3464_ = 0;
v___x_3465_ = l_IO_FS_instBEqFileType_beq(v_type_3463_, v___x_3464_);
return v___x_3465_;
}
else
{
uint8_t v___x_3466_; 
lean_dec_ref_known(v___x_3461_, 1);
v___x_3466_ = 0;
return v___x_3466_;
}
}
}
LEAN_EXPORT lean_object* l_System_FilePath_isDir___boxed(lean_object* v_p_3467_, lean_object* v___y_3468_){
_start:
{
uint8_t v_res_3469_; lean_object* v_r_3470_; 
v_res_3469_ = l_System_FilePath_isDir(v_p_3467_);
lean_dec_ref(v_p_3467_);
v_r_3470_ = lean_box(v_res_3469_);
return v_r_3470_;
}
}
LEAN_EXPORT uint8_t l_System_FilePath_pathExists(lean_object* v_p_3471_){
_start:
{
lean_object* v___x_3473_; 
v___x_3473_ = lean_io_metadata(v_p_3471_);
if (lean_obj_tag(v___x_3473_) == 0)
{
uint8_t v___x_3474_; 
lean_dec_ref_known(v___x_3473_, 1);
v___x_3474_ = 1;
return v___x_3474_;
}
else
{
uint8_t v___x_3475_; 
lean_dec_ref_known(v___x_3473_, 1);
v___x_3475_ = 0;
return v___x_3475_;
}
}
}
LEAN_EXPORT lean_object* l_System_FilePath_pathExists___boxed(lean_object* v_p_3476_, lean_object* v___y_3477_){
_start:
{
uint8_t v_res_3478_; lean_object* v_r_3479_; 
v_res_3478_ = l_System_FilePath_pathExists(v_p_3476_);
lean_dec_ref(v_p_3476_);
v_r_3479_ = lean_box(v_res_3478_);
return v_r_3479_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_System_IO_0__System_FilePath_walkDir_go_spec__0(lean_object* v_enter_3480_, lean_object* v_p_3481_, lean_object* v_as_3482_, size_t v_sz_3483_, size_t v_i_3484_, lean_object* v_b_3485_, lean_object* v___y_3486_){
_start:
{
lean_object* v_a_3489_; lean_object* v_snd_3490_; uint8_t v___x_3494_; 
v___x_3494_ = lean_usize_dec_lt(v_i_3484_, v_sz_3483_);
if (v___x_3494_ == 0)
{
lean_object* v___x_3495_; lean_object* v___x_3496_; 
lean_dec_ref(v_p_3481_);
lean_dec_ref(v_enter_3480_);
v___x_3495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3495_, 0, v_b_3485_);
lean_ctor_set(v___x_3495_, 1, v___y_3486_);
v___x_3496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3495_);
return v___x_3496_;
}
else
{
lean_object* v___x_3497_; lean_object* v_a_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3497_ = lean_box(0);
v_a_3498_ = lean_array_uget_borrowed(v_as_3482_, v_i_3484_);
lean_inc(v_a_3498_);
v___x_3499_ = l_IO_FS_DirEntry_path(v_a_3498_);
lean_inc_ref(v___x_3499_);
v___x_3500_ = lean_array_push(v___y_3486_, v___x_3499_);
v___x_3501_ = lean_io_metadata(v___x_3499_);
if (lean_obj_tag(v___x_3501_) == 0)
{
lean_object* v_a_3502_; uint8_t v_type_3503_; 
v_a_3502_ = lean_ctor_get(v___x_3501_, 0);
lean_inc(v_a_3502_);
lean_dec_ref_known(v___x_3501_, 1);
v_type_3503_ = lean_ctor_get_uint8(v_a_3502_, sizeof(void*)*2 + 16);
lean_dec(v_a_3502_);
switch(v_type_3503_)
{
case 2:
{
lean_object* v___x_3504_; 
v___x_3504_ = lean_io_realpath(v___x_3499_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3505_; uint8_t v___x_3506_; 
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
lean_inc(v_a_3505_);
lean_dec_ref_known(v___x_3504_, 1);
v___x_3506_ = l_System_FilePath_isDir(v_a_3505_);
if (v___x_3506_ == 0)
{
lean_dec(v_a_3505_);
v_a_3489_ = v___x_3497_;
v_snd_3490_ = v___x_3500_;
goto v___jp_3488_;
}
else
{
lean_object* v___x_3507_; 
lean_inc_ref(v_enter_3480_);
lean_inc_ref(v_p_3481_);
v___x_3507_ = lean_apply_2(v_enter_3480_, v_p_3481_, lean_box(0));
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v_a_3508_; uint8_t v___x_3509_; 
v_a_3508_ = lean_ctor_get(v___x_3507_, 0);
lean_inc(v_a_3508_);
lean_dec_ref_known(v___x_3507_, 1);
v___x_3509_ = lean_unbox(v_a_3508_);
lean_dec(v_a_3508_);
if (v___x_3509_ == 0)
{
lean_dec(v_a_3505_);
v_a_3489_ = v___x_3497_;
v_snd_3490_ = v___x_3500_;
goto v___jp_3488_;
}
else
{
lean_object* v___x_3510_; 
lean_inc_ref(v_enter_3480_);
v___x_3510_ = l___private_Init_System_IO_0__System_FilePath_walkDir_go(v_enter_3480_, v_a_3505_, v___x_3500_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v_a_3511_; lean_object* v_snd_3512_; 
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3511_);
lean_dec_ref_known(v___x_3510_, 1);
v_snd_3512_ = lean_ctor_get(v_a_3511_, 1);
lean_inc(v_snd_3512_);
lean_dec(v_a_3511_);
v_a_3489_ = v___x_3497_;
v_snd_3490_ = v_snd_3512_;
goto v___jp_3488_;
}
else
{
lean_dec_ref(v_p_3481_);
lean_dec_ref(v_enter_3480_);
return v___x_3510_;
}
}
}
else
{
lean_object* v_a_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3520_; 
lean_dec(v_a_3505_);
lean_dec_ref(v___x_3500_);
lean_dec_ref(v_p_3481_);
lean_dec_ref(v_enter_3480_);
v_a_3513_ = lean_ctor_get(v___x_3507_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_3507_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3515_ = v___x_3507_;
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_a_3513_);
lean_dec(v___x_3507_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3518_; 
if (v_isShared_3516_ == 0)
{
v___x_3518_ = v___x_3515_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_a_3513_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
return v___x_3518_;
}
}
}
}
}
else
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3528_; 
lean_dec_ref(v___x_3500_);
lean_dec_ref(v_p_3481_);
lean_dec_ref(v_enter_3480_);
v_a_3521_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3523_ = v___x_3504_;
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_3504_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3526_; 
if (v_isShared_3524_ == 0)
{
v___x_3526_ = v___x_3523_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_a_3521_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
}
case 0:
{
lean_object* v___x_3529_; 
lean_inc_ref(v_enter_3480_);
v___x_3529_ = l___private_Init_System_IO_0__System_FilePath_walkDir_go(v_enter_3480_, v___x_3499_, v___x_3500_);
if (lean_obj_tag(v___x_3529_) == 0)
{
lean_object* v_a_3530_; lean_object* v_snd_3531_; 
v_a_3530_ = lean_ctor_get(v___x_3529_, 0);
lean_inc(v_a_3530_);
lean_dec_ref_known(v___x_3529_, 1);
v_snd_3531_ = lean_ctor_get(v_a_3530_, 1);
lean_inc(v_snd_3531_);
lean_dec(v_a_3530_);
v_a_3489_ = v___x_3497_;
v_snd_3490_ = v_snd_3531_;
goto v___jp_3488_;
}
else
{
lean_dec_ref(v_p_3481_);
lean_dec_ref(v_enter_3480_);
return v___x_3529_;
}
}
default: 
{
lean_dec_ref(v___x_3499_);
v_a_3489_ = v___x_3497_;
v_snd_3490_ = v___x_3500_;
goto v___jp_3488_;
}
}
}
else
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3539_; 
lean_dec_ref(v___x_3499_);
v_a_3532_ = lean_ctor_get(v___x_3501_, 0);
v_isSharedCheck_3539_ = !lean_is_exclusive(v___x_3501_);
if (v_isSharedCheck_3539_ == 0)
{
v___x_3534_ = v___x_3501_;
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3501_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3539_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
if (lean_obj_tag(v_a_3532_) == 11)
{
lean_dec_ref_known(v_a_3532_, 2);
lean_del_object(v___x_3534_);
v_a_3489_ = v___x_3497_;
v_snd_3490_ = v___x_3500_;
goto v___jp_3488_;
}
else
{
lean_object* v___x_3537_; 
lean_dec_ref(v___x_3500_);
lean_dec_ref(v_p_3481_);
lean_dec_ref(v_enter_3480_);
if (v_isShared_3535_ == 0)
{
v___x_3537_ = v___x_3534_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3532_);
v___x_3537_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
return v___x_3537_;
}
}
}
}
}
v___jp_3488_:
{
size_t v___x_3491_; size_t v___x_3492_; 
v___x_3491_ = ((size_t)1ULL);
v___x_3492_ = lean_usize_add(v_i_3484_, v___x_3491_);
v_i_3484_ = v___x_3492_;
v_b_3485_ = v_a_3489_;
v___y_3486_ = v_snd_3490_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__System_FilePath_walkDir_go(lean_object* v_enter_3540_, lean_object* v_p_3541_, lean_object* v___y_3542_){
_start:
{
lean_object* v___x_3544_; 
lean_inc_ref(v_enter_3540_);
lean_inc_ref(v_p_3541_);
v___x_3544_ = lean_apply_2(v_enter_3540_, v_p_3541_, lean_box(0));
if (lean_obj_tag(v___x_3544_) == 0)
{
lean_object* v_a_3545_; lean_object* v___x_3547_; uint8_t v_isShared_3548_; uint8_t v_isSharedCheck_3586_; 
v_a_3545_ = lean_ctor_get(v___x_3544_, 0);
v_isSharedCheck_3586_ = !lean_is_exclusive(v___x_3544_);
if (v_isSharedCheck_3586_ == 0)
{
v___x_3547_ = v___x_3544_;
v_isShared_3548_ = v_isSharedCheck_3586_;
goto v_resetjp_3546_;
}
else
{
lean_inc(v_a_3545_);
lean_dec(v___x_3544_);
v___x_3547_ = lean_box(0);
v_isShared_3548_ = v_isSharedCheck_3586_;
goto v_resetjp_3546_;
}
v_resetjp_3546_:
{
uint8_t v___x_3549_; 
v___x_3549_ = lean_unbox(v_a_3545_);
lean_dec(v_a_3545_);
if (v___x_3549_ == 0)
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3553_; 
lean_dec_ref(v_p_3541_);
lean_dec_ref(v_enter_3540_);
v___x_3550_ = lean_box(0);
v___x_3551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3550_);
lean_ctor_set(v___x_3551_, 1, v___y_3542_);
if (v_isShared_3548_ == 0)
{
lean_ctor_set(v___x_3547_, 0, v___x_3551_);
v___x_3553_ = v___x_3547_;
goto v_reusejp_3552_;
}
else
{
lean_object* v_reuseFailAlloc_3554_; 
v_reuseFailAlloc_3554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3554_, 0, v___x_3551_);
v___x_3553_ = v_reuseFailAlloc_3554_;
goto v_reusejp_3552_;
}
v_reusejp_3552_:
{
return v___x_3553_;
}
}
else
{
lean_object* v___x_3555_; 
lean_del_object(v___x_3547_);
v___x_3555_ = lean_io_read_dir(v_p_3541_);
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_object* v_a_3556_; lean_object* v___x_3557_; size_t v_sz_3558_; size_t v___x_3559_; lean_object* v___x_3560_; 
v_a_3556_ = lean_ctor_get(v___x_3555_, 0);
lean_inc(v_a_3556_);
lean_dec_ref_known(v___x_3555_, 1);
v___x_3557_ = lean_box(0);
v_sz_3558_ = lean_array_size(v_a_3556_);
v___x_3559_ = ((size_t)0ULL);
v___x_3560_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_System_IO_0__System_FilePath_walkDir_go_spec__0(v_enter_3540_, v_p_3541_, v_a_3556_, v_sz_3558_, v___x_3559_, v___x_3557_, v___y_3542_);
lean_dec(v_a_3556_);
if (lean_obj_tag(v___x_3560_) == 0)
{
lean_object* v_a_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3577_; 
v_a_3561_ = lean_ctor_get(v___x_3560_, 0);
v_isSharedCheck_3577_ = !lean_is_exclusive(v___x_3560_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3563_ = v___x_3560_;
v_isShared_3564_ = v_isSharedCheck_3577_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_a_3561_);
lean_dec(v___x_3560_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3577_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v_snd_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3575_; 
v_snd_3565_ = lean_ctor_get(v_a_3561_, 1);
v_isSharedCheck_3575_ = !lean_is_exclusive(v_a_3561_);
if (v_isSharedCheck_3575_ == 0)
{
lean_object* v_unused_3576_; 
v_unused_3576_ = lean_ctor_get(v_a_3561_, 0);
lean_dec(v_unused_3576_);
v___x_3567_ = v_a_3561_;
v_isShared_3568_ = v_isSharedCheck_3575_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_snd_3565_);
lean_dec(v_a_3561_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3575_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3570_; 
if (v_isShared_3568_ == 0)
{
lean_ctor_set(v___x_3567_, 0, v___x_3557_);
v___x_3570_ = v___x_3567_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v___x_3557_);
lean_ctor_set(v_reuseFailAlloc_3574_, 1, v_snd_3565_);
v___x_3570_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
lean_object* v___x_3572_; 
if (v_isShared_3564_ == 0)
{
lean_ctor_set(v___x_3563_, 0, v___x_3570_);
v___x_3572_ = v___x_3563_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v___x_3570_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
}
}
else
{
return v___x_3560_;
}
}
else
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3585_; 
lean_dec_ref(v___y_3542_);
lean_dec_ref(v_p_3541_);
lean_dec_ref(v_enter_3540_);
v_a_3578_ = lean_ctor_get(v___x_3555_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3580_ = v___x_3555_;
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_3555_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3583_; 
if (v_isShared_3581_ == 0)
{
v___x_3583_ = v___x_3580_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3578_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
}
}
}
else
{
lean_object* v_a_3587_; lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3594_; 
lean_dec_ref(v___y_3542_);
lean_dec_ref(v_p_3541_);
lean_dec_ref(v_enter_3540_);
v_a_3587_ = lean_ctor_get(v___x_3544_, 0);
v_isSharedCheck_3594_ = !lean_is_exclusive(v___x_3544_);
if (v_isSharedCheck_3594_ == 0)
{
v___x_3589_ = v___x_3544_;
v_isShared_3590_ = v_isSharedCheck_3594_;
goto v_resetjp_3588_;
}
else
{
lean_inc(v_a_3587_);
lean_dec(v___x_3544_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3594_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
lean_object* v___x_3592_; 
if (v_isShared_3590_ == 0)
{
v___x_3592_ = v___x_3589_;
goto v_reusejp_3591_;
}
else
{
lean_object* v_reuseFailAlloc_3593_; 
v_reuseFailAlloc_3593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3593_, 0, v_a_3587_);
v___x_3592_ = v_reuseFailAlloc_3593_;
goto v_reusejp_3591_;
}
v_reusejp_3591_:
{
return v___x_3592_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__System_FilePath_walkDir_go___boxed(lean_object* v_enter_3595_, lean_object* v_p_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l___private_Init_System_IO_0__System_FilePath_walkDir_go(v_enter_3595_, v_p_3596_, v___y_3597_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_System_IO_0__System_FilePath_walkDir_go_spec__0___boxed(lean_object* v_enter_3600_, lean_object* v_p_3601_, lean_object* v_as_3602_, lean_object* v_sz_3603_, lean_object* v_i_3604_, lean_object* v_b_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_){
_start:
{
size_t v_sz_boxed_3608_; size_t v_i_boxed_3609_; lean_object* v_res_3610_; 
v_sz_boxed_3608_ = lean_unbox_usize(v_sz_3603_);
lean_dec(v_sz_3603_);
v_i_boxed_3609_ = lean_unbox_usize(v_i_3604_);
lean_dec(v_i_3604_);
v_res_3610_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_System_IO_0__System_FilePath_walkDir_go_spec__0(v_enter_3600_, v_p_3601_, v_as_3602_, v_sz_boxed_3608_, v_i_boxed_3609_, v_b_3605_, v___y_3606_);
lean_dec_ref(v_as_3602_);
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l_System_FilePath_walkDir(lean_object* v_p_3611_, lean_object* v_enter_3612_){
_start:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3614_ = ((lean_object*)(l_IO_FS_Handle_lines___closed__0));
v___x_3615_ = l___private_Init_System_IO_0__System_FilePath_walkDir_go(v_enter_3612_, v_p_3611_, v___x_3614_);
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3624_; 
v_a_3616_ = lean_ctor_get(v___x_3615_, 0);
v_isSharedCheck_3624_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3618_ = v___x_3615_;
v_isShared_3619_ = v_isSharedCheck_3624_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v___x_3615_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3624_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v_snd_3620_; lean_object* v___x_3622_; 
v_snd_3620_ = lean_ctor_get(v_a_3616_, 1);
lean_inc(v_snd_3620_);
lean_dec(v_a_3616_);
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 0, v_snd_3620_);
v___x_3622_ = v___x_3618_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_snd_3620_);
v___x_3622_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
return v___x_3622_;
}
}
}
else
{
lean_object* v_a_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3632_; 
v_a_3625_ = lean_ctor_get(v___x_3615_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3627_ = v___x_3615_;
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_a_3625_);
lean_dec(v___x_3615_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3630_; 
if (v_isShared_3628_ == 0)
{
v___x_3630_ = v___x_3627_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v_a_3625_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_System_FilePath_walkDir___boxed(lean_object* v_p_3633_, lean_object* v_enter_3634_, lean_object* v___y_3635_){
_start:
{
lean_object* v_res_3636_; 
v_res_3636_ = l_System_FilePath_walkDir(v_p_3633_, v_enter_3634_);
return v_res_3636_;
}
}
static lean_object* _init_l_IO_FS_readBinFile___closed__0(void){
_start:
{
lean_object* v___x_3637_; lean_object* v___x_3638_; 
v___x_3637_ = lean_unsigned_to_nat(0u);
v___x_3638_ = lean_mk_empty_byte_array(v___x_3637_);
return v___x_3638_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_readBinFile(lean_object* v_fname_3639_){
_start:
{
lean_object* v___x_3641_; 
v___x_3641_ = lean_io_metadata(v_fname_3639_);
if (lean_obj_tag(v___x_3641_) == 0)
{
lean_object* v_a_3642_; uint64_t v_byteSize_3643_; size_t v___x_3644_; uint8_t v___x_3645_; lean_object* v___x_3646_; 
v_a_3642_ = lean_ctor_get(v___x_3641_, 0);
lean_inc(v_a_3642_);
lean_dec_ref_known(v___x_3641_, 1);
v_byteSize_3643_ = lean_ctor_get_uint64(v_a_3642_, sizeof(void*)*2);
lean_dec(v_a_3642_);
v___x_3644_ = lean_uint64_to_usize(v_byteSize_3643_);
v___x_3645_ = 0;
v___x_3646_ = lean_io_prim_handle_mk(v_fname_3639_, v___x_3645_);
if (lean_obj_tag(v___x_3646_) == 0)
{
lean_object* v_a_3647_; size_t v___x_3648_; uint8_t v___x_3649_; 
v_a_3647_ = lean_ctor_get(v___x_3646_, 0);
lean_inc(v_a_3647_);
lean_dec_ref_known(v___x_3646_, 1);
v___x_3648_ = ((size_t)0ULL);
v___x_3649_ = lean_usize_dec_lt(v___x_3648_, v___x_3644_);
if (v___x_3649_ == 0)
{
lean_object* v___x_3650_; lean_object* v___x_3651_; 
v___x_3650_ = lean_obj_once(&l_IO_FS_readBinFile___closed__0, &l_IO_FS_readBinFile___closed__0_once, _init_l_IO_FS_readBinFile___closed__0);
v___x_3651_ = l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(v_a_3647_, v___x_3650_);
lean_dec(v_a_3647_);
return v___x_3651_;
}
else
{
lean_object* v___x_3652_; 
v___x_3652_ = lean_io_prim_handle_read(v_a_3647_, v___x_3644_);
if (lean_obj_tag(v___x_3652_) == 0)
{
lean_object* v_a_3653_; lean_object* v___x_3654_; 
v_a_3653_ = lean_ctor_get(v___x_3652_, 0);
lean_inc(v_a_3653_);
lean_dec_ref_known(v___x_3652_, 1);
v___x_3654_ = l___private_Init_System_IO_0__IO_FS_Handle_readBinToEndInto_loop(v_a_3647_, v_a_3653_);
lean_dec(v_a_3647_);
return v___x_3654_;
}
else
{
lean_dec(v_a_3647_);
return v___x_3652_;
}
}
}
else
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
v_a_3655_ = lean_ctor_get(v___x_3646_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3646_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3646_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3646_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
else
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3670_; 
v_a_3663_ = lean_ctor_get(v___x_3641_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3665_ = v___x_3641_;
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3641_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3668_; 
if (v_isShared_3666_ == 0)
{
v___x_3668_ = v___x_3665_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_a_3663_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_readBinFile___boxed(lean_object* v_fname_3671_, lean_object* v___y_3672_){
_start:
{
lean_object* v_res_3673_; 
v_res_3673_ = l_IO_FS_readBinFile(v_fname_3671_);
lean_dec_ref(v_fname_3671_);
return v_res_3673_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_readFile(lean_object* v_fname_3676_){
_start:
{
lean_object* v___x_3678_; 
v___x_3678_ = l_IO_FS_readBinFile(v_fname_3676_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3696_; 
v_a_3679_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3696_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3696_ == 0)
{
v___x_3681_ = v___x_3678_;
v_isShared_3682_ = v_isSharedCheck_3696_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3678_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3696_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
uint8_t v___x_3683_; 
v___x_3683_ = lean_string_validate_utf8(v_a_3679_);
if (v___x_3683_ == 0)
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3690_; 
lean_dec(v_a_3679_);
v___x_3684_ = ((lean_object*)(l_IO_FS_readFile___closed__0));
v___x_3685_ = lean_string_append(v___x_3684_, v_fname_3676_);
v___x_3686_ = ((lean_object*)(l_IO_FS_readFile___closed__1));
v___x_3687_ = lean_string_append(v___x_3685_, v___x_3686_);
v___x_3688_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3688_, 0, v___x_3687_);
if (v_isShared_3682_ == 0)
{
lean_ctor_set_tag(v___x_3681_, 1);
lean_ctor_set(v___x_3681_, 0, v___x_3688_);
v___x_3690_ = v___x_3681_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v___x_3688_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
else
{
lean_object* v___x_3692_; lean_object* v___x_3694_; 
v___x_3692_ = lean_string_from_utf8_unchecked(v_a_3679_);
if (v_isShared_3682_ == 0)
{
lean_ctor_set(v___x_3681_, 0, v___x_3692_);
v___x_3694_ = v___x_3681_;
goto v_reusejp_3693_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v___x_3692_);
v___x_3694_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3693_;
}
v_reusejp_3693_:
{
return v___x_3694_;
}
}
}
}
else
{
lean_object* v_a_3697_; lean_object* v___x_3699_; uint8_t v_isShared_3700_; uint8_t v_isSharedCheck_3704_; 
v_a_3697_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3704_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3699_ = v___x_3678_;
v_isShared_3700_ = v_isSharedCheck_3704_;
goto v_resetjp_3698_;
}
else
{
lean_inc(v_a_3697_);
lean_dec(v___x_3678_);
v___x_3699_ = lean_box(0);
v_isShared_3700_ = v_isSharedCheck_3704_;
goto v_resetjp_3698_;
}
v_resetjp_3698_:
{
lean_object* v___x_3702_; 
if (v_isShared_3700_ == 0)
{
v___x_3702_ = v___x_3699_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v_a_3697_);
v___x_3702_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
return v___x_3702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_readFile___boxed(lean_object* v_fname_3705_, lean_object* v___y_3706_){
_start:
{
lean_object* v_res_3707_; 
v_res_3707_ = l_IO_FS_readFile(v_fname_3705_);
lean_dec_ref(v_fname_3705_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__0(lean_object* v_x_3708_){
_start:
{
lean_object* v_fst_3709_; 
v_fst_3709_ = lean_ctor_get(v_x_3708_, 0);
lean_inc(v_fst_3709_);
return v_fst_3709_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__0___boxed(lean_object* v_x_3710_){
_start:
{
lean_object* v_res_3711_; 
v_res_3711_ = l_IO_withStdin___redArg___lam__0(v_x_3710_);
lean_dec_ref(v_x_3710_);
return v_res_3711_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__1(lean_object* v___x_3712_, lean_object* v_x_3713_){
_start:
{
lean_inc(v___x_3712_);
return v___x_3712_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__1___boxed(lean_object* v___x_3714_, lean_object* v_x_3715_){
_start:
{
lean_object* v_res_3716_; 
v_res_3716_ = l_IO_withStdin___redArg___lam__1(v___x_3714_, v_x_3715_);
lean_dec(v_x_3715_);
lean_dec(v___x_3714_);
return v_res_3716_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg___lam__2(lean_object* v_toFunctor_3717_, lean_object* v_inst_3718_, lean_object* v_inst_3719_, lean_object* v_x_3720_, lean_object* v___f_3721_, lean_object* v_prev_3722_){
_start:
{
lean_object* v_map_3723_; lean_object* v_mapConst_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___f_3729_; lean_object* v_y_3730_; lean_object* v___x_3731_; 
v_map_3723_ = lean_ctor_get(v_toFunctor_3717_, 0);
lean_inc(v_map_3723_);
v_mapConst_3724_ = lean_ctor_get(v_toFunctor_3717_, 1);
lean_inc(v_mapConst_3724_);
lean_dec_ref(v_toFunctor_3717_);
v___x_3725_ = lean_alloc_closure((void*)(l_IO_setStdin___boxed), 2, 1);
lean_closure_set(v___x_3725_, 0, v_prev_3722_);
v___x_3726_ = lean_apply_2(v_inst_3718_, lean_box(0), v___x_3725_);
v___x_3727_ = lean_box(0);
v___x_3728_ = lean_apply_4(v_mapConst_3724_, lean_box(0), lean_box(0), v___x_3727_, v___x_3726_);
v___f_3729_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_3729_, 0, v___x_3728_);
v_y_3730_ = lean_apply_4(v_inst_3719_, lean_box(0), lean_box(0), v_x_3720_, v___f_3729_);
v___x_3731_ = lean_apply_4(v_map_3723_, lean_box(0), lean_box(0), v___f_3721_, v_y_3730_);
return v___x_3731_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin___redArg(lean_object* v_inst_3733_, lean_object* v_inst_3734_, lean_object* v_inst_3735_, lean_object* v_h_3736_, lean_object* v_x_3737_){
_start:
{
lean_object* v_toApplicative_3738_; lean_object* v_toBind_3739_; lean_object* v_toFunctor_3740_; lean_object* v___f_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___f_3744_; lean_object* v___x_3745_; 
v_toApplicative_3738_ = lean_ctor_get(v_inst_3733_, 0);
lean_inc_ref(v_toApplicative_3738_);
v_toBind_3739_ = lean_ctor_get(v_inst_3733_, 1);
lean_inc(v_toBind_3739_);
lean_dec_ref(v_inst_3733_);
v_toFunctor_3740_ = lean_ctor_get(v_toApplicative_3738_, 0);
lean_inc_ref(v_toFunctor_3740_);
lean_dec_ref(v_toApplicative_3738_);
v___f_3741_ = ((lean_object*)(l_IO_withStdin___redArg___closed__0));
v___x_3742_ = lean_alloc_closure((void*)(l_IO_setStdin___boxed), 2, 1);
lean_closure_set(v___x_3742_, 0, v_h_3736_);
lean_inc(v_inst_3735_);
v___x_3743_ = lean_apply_2(v_inst_3735_, lean_box(0), v___x_3742_);
v___f_3744_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__2), 6, 5);
lean_closure_set(v___f_3744_, 0, v_toFunctor_3740_);
lean_closure_set(v___f_3744_, 1, v_inst_3735_);
lean_closure_set(v___f_3744_, 2, v_inst_3734_);
lean_closure_set(v___f_3744_, 3, v_x_3737_);
lean_closure_set(v___f_3744_, 4, v___f_3741_);
v___x_3745_ = lean_apply_4(v_toBind_3739_, lean_box(0), lean_box(0), v___x_3743_, v___f_3744_);
return v___x_3745_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdin(lean_object* v_m_3746_, lean_object* v_00_u03b1_3747_, lean_object* v_inst_3748_, lean_object* v_inst_3749_, lean_object* v_inst_3750_, lean_object* v_h_3751_, lean_object* v_x_3752_){
_start:
{
lean_object* v___x_3753_; 
v___x_3753_ = l_IO_withStdin___redArg(v_inst_3748_, v_inst_3749_, v_inst_3750_, v_h_3751_, v_x_3752_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___redArg___lam__2(lean_object* v_toFunctor_3754_, lean_object* v_inst_3755_, lean_object* v_inst_3756_, lean_object* v_x_3757_, lean_object* v___f_3758_, lean_object* v_prev_3759_){
_start:
{
lean_object* v_map_3760_; lean_object* v_mapConst_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___f_3766_; lean_object* v_y_3767_; lean_object* v___x_3768_; 
v_map_3760_ = lean_ctor_get(v_toFunctor_3754_, 0);
lean_inc(v_map_3760_);
v_mapConst_3761_ = lean_ctor_get(v_toFunctor_3754_, 1);
lean_inc(v_mapConst_3761_);
lean_dec_ref(v_toFunctor_3754_);
v___x_3762_ = lean_alloc_closure((void*)(l_IO_setStdout___boxed), 2, 1);
lean_closure_set(v___x_3762_, 0, v_prev_3759_);
v___x_3763_ = lean_apply_2(v_inst_3755_, lean_box(0), v___x_3762_);
v___x_3764_ = lean_box(0);
v___x_3765_ = lean_apply_4(v_mapConst_3761_, lean_box(0), lean_box(0), v___x_3764_, v___x_3763_);
v___f_3766_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_3766_, 0, v___x_3765_);
v_y_3767_ = lean_apply_4(v_inst_3756_, lean_box(0), lean_box(0), v_x_3757_, v___f_3766_);
v___x_3768_ = lean_apply_4(v_map_3760_, lean_box(0), lean_box(0), v___f_3758_, v_y_3767_);
return v___x_3768_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout___redArg(lean_object* v_inst_3769_, lean_object* v_inst_3770_, lean_object* v_inst_3771_, lean_object* v_h_3772_, lean_object* v_x_3773_){
_start:
{
lean_object* v_toApplicative_3774_; lean_object* v_toBind_3775_; lean_object* v_toFunctor_3776_; lean_object* v___f_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___f_3780_; lean_object* v___x_3781_; 
v_toApplicative_3774_ = lean_ctor_get(v_inst_3769_, 0);
lean_inc_ref(v_toApplicative_3774_);
v_toBind_3775_ = lean_ctor_get(v_inst_3769_, 1);
lean_inc(v_toBind_3775_);
lean_dec_ref(v_inst_3769_);
v_toFunctor_3776_ = lean_ctor_get(v_toApplicative_3774_, 0);
lean_inc_ref(v_toFunctor_3776_);
lean_dec_ref(v_toApplicative_3774_);
v___f_3777_ = ((lean_object*)(l_IO_withStdin___redArg___closed__0));
v___x_3778_ = lean_alloc_closure((void*)(l_IO_setStdout___boxed), 2, 1);
lean_closure_set(v___x_3778_, 0, v_h_3772_);
lean_inc(v_inst_3771_);
v___x_3779_ = lean_apply_2(v_inst_3771_, lean_box(0), v___x_3778_);
v___f_3780_ = lean_alloc_closure((void*)(l_IO_withStdout___redArg___lam__2), 6, 5);
lean_closure_set(v___f_3780_, 0, v_toFunctor_3776_);
lean_closure_set(v___f_3780_, 1, v_inst_3771_);
lean_closure_set(v___f_3780_, 2, v_inst_3770_);
lean_closure_set(v___f_3780_, 3, v_x_3773_);
lean_closure_set(v___f_3780_, 4, v___f_3777_);
v___x_3781_ = lean_apply_4(v_toBind_3775_, lean_box(0), lean_box(0), v___x_3779_, v___f_3780_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l_IO_withStdout(lean_object* v_m_3782_, lean_object* v_00_u03b1_3783_, lean_object* v_inst_3784_, lean_object* v_inst_3785_, lean_object* v_inst_3786_, lean_object* v_h_3787_, lean_object* v_x_3788_){
_start:
{
lean_object* v___x_3789_; 
v___x_3789_ = l_IO_withStdout___redArg(v_inst_3784_, v_inst_3785_, v_inst_3786_, v_h_3787_, v_x_3788_);
return v___x_3789_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___redArg___lam__2(lean_object* v_toFunctor_3790_, lean_object* v_inst_3791_, lean_object* v_inst_3792_, lean_object* v_x_3793_, lean_object* v___f_3794_, lean_object* v_prev_3795_){
_start:
{
lean_object* v_map_3796_; lean_object* v_mapConst_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___f_3802_; lean_object* v_y_3803_; lean_object* v___x_3804_; 
v_map_3796_ = lean_ctor_get(v_toFunctor_3790_, 0);
lean_inc(v_map_3796_);
v_mapConst_3797_ = lean_ctor_get(v_toFunctor_3790_, 1);
lean_inc(v_mapConst_3797_);
lean_dec_ref(v_toFunctor_3790_);
v___x_3798_ = lean_alloc_closure((void*)(l_IO_setStderr___boxed), 2, 1);
lean_closure_set(v___x_3798_, 0, v_prev_3795_);
v___x_3799_ = lean_apply_2(v_inst_3791_, lean_box(0), v___x_3798_);
v___x_3800_ = lean_box(0);
v___x_3801_ = lean_apply_4(v_mapConst_3797_, lean_box(0), lean_box(0), v___x_3800_, v___x_3799_);
v___f_3802_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_3802_, 0, v___x_3801_);
v_y_3803_ = lean_apply_4(v_inst_3792_, lean_box(0), lean_box(0), v_x_3793_, v___f_3802_);
v___x_3804_ = lean_apply_4(v_map_3796_, lean_box(0), lean_box(0), v___f_3794_, v_y_3803_);
return v___x_3804_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr___redArg(lean_object* v_inst_3805_, lean_object* v_inst_3806_, lean_object* v_inst_3807_, lean_object* v_h_3808_, lean_object* v_x_3809_){
_start:
{
lean_object* v_toApplicative_3810_; lean_object* v_toBind_3811_; lean_object* v_toFunctor_3812_; lean_object* v___f_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___f_3816_; lean_object* v___x_3817_; 
v_toApplicative_3810_ = lean_ctor_get(v_inst_3805_, 0);
lean_inc_ref(v_toApplicative_3810_);
v_toBind_3811_ = lean_ctor_get(v_inst_3805_, 1);
lean_inc(v_toBind_3811_);
lean_dec_ref(v_inst_3805_);
v_toFunctor_3812_ = lean_ctor_get(v_toApplicative_3810_, 0);
lean_inc_ref(v_toFunctor_3812_);
lean_dec_ref(v_toApplicative_3810_);
v___f_3813_ = ((lean_object*)(l_IO_withStdin___redArg___closed__0));
v___x_3814_ = lean_alloc_closure((void*)(l_IO_setStderr___boxed), 2, 1);
lean_closure_set(v___x_3814_, 0, v_h_3808_);
lean_inc(v_inst_3807_);
v___x_3815_ = lean_apply_2(v_inst_3807_, lean_box(0), v___x_3814_);
v___f_3816_ = lean_alloc_closure((void*)(l_IO_withStderr___redArg___lam__2), 6, 5);
lean_closure_set(v___f_3816_, 0, v_toFunctor_3812_);
lean_closure_set(v___f_3816_, 1, v_inst_3807_);
lean_closure_set(v___f_3816_, 2, v_inst_3806_);
lean_closure_set(v___f_3816_, 3, v_x_3809_);
lean_closure_set(v___f_3816_, 4, v___f_3813_);
v___x_3817_ = lean_apply_4(v_toBind_3811_, lean_box(0), lean_box(0), v___x_3815_, v___f_3816_);
return v___x_3817_;
}
}
LEAN_EXPORT lean_object* l_IO_withStderr(lean_object* v_m_3818_, lean_object* v_00_u03b1_3819_, lean_object* v_inst_3820_, lean_object* v_inst_3821_, lean_object* v_inst_3822_, lean_object* v_h_3823_, lean_object* v_x_3824_){
_start:
{
lean_object* v___x_3825_; 
v___x_3825_ = l_IO_withStderr___redArg(v_inst_3820_, v_inst_3821_, v_inst_3822_, v_h_3823_, v_x_3824_);
return v___x_3825_;
}
}
LEAN_EXPORT lean_object* l_IO_print___redArg(lean_object* v_inst_3826_, lean_object* v_s_3827_){
_start:
{
lean_object* v___x_3829_; lean_object* v_putStr_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; 
v___x_3829_ = lean_get_stdout();
v_putStr_3830_ = lean_ctor_get(v___x_3829_, 4);
lean_inc_ref(v_putStr_3830_);
lean_dec_ref(v___x_3829_);
v___x_3831_ = lean_apply_1(v_inst_3826_, v_s_3827_);
v___x_3832_ = lean_apply_2(v_putStr_3830_, v___x_3831_, lean_box(0));
return v___x_3832_;
}
}
LEAN_EXPORT lean_object* l_IO_print___redArg___boxed(lean_object* v_inst_3833_, lean_object* v_s_3834_, lean_object* v___y_3835_){
_start:
{
lean_object* v_res_3836_; 
v_res_3836_ = l_IO_print___redArg(v_inst_3833_, v_s_3834_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_IO_print(lean_object* v_00_u03b1_3837_, lean_object* v_inst_3838_, lean_object* v_s_3839_){
_start:
{
lean_object* v___x_3841_; 
v___x_3841_ = l_IO_print___redArg(v_inst_3838_, v_s_3839_);
return v___x_3841_;
}
}
LEAN_EXPORT lean_object* l_IO_print___boxed(lean_object* v_00_u03b1_3842_, lean_object* v_inst_3843_, lean_object* v_s_3844_, lean_object* v___y_3845_){
_start:
{
lean_object* v_res_3846_; 
v_res_3846_ = l_IO_print(v_00_u03b1_3842_, v_inst_3843_, v_s_3844_);
return v_res_3846_;
}
}
LEAN_EXPORT lean_object* l_IO_println___redArg(lean_object* v_inst_3848_, lean_object* v_s_3849_){
_start:
{
lean_object* v___f_3851_; lean_object* v___x_3852_; uint32_t v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___f_3851_ = ((lean_object*)(l_IO_println___redArg___closed__0));
v___x_3852_ = lean_apply_1(v_inst_3848_, v_s_3849_);
v___x_3853_ = 10;
v___x_3854_ = lean_string_push(v___x_3852_, v___x_3853_);
v___x_3855_ = l_IO_print___redArg(v___f_3851_, v___x_3854_);
return v___x_3855_;
}
}
LEAN_EXPORT lean_object* l_IO_println___redArg___boxed(lean_object* v_inst_3856_, lean_object* v_s_3857_, lean_object* v___y_3858_){
_start:
{
lean_object* v_res_3859_; 
v_res_3859_ = l_IO_println___redArg(v_inst_3856_, v_s_3857_);
return v_res_3859_;
}
}
LEAN_EXPORT lean_object* l_IO_println(lean_object* v_00_u03b1_3860_, lean_object* v_inst_3861_, lean_object* v_s_3862_){
_start:
{
lean_object* v___x_3864_; 
v___x_3864_ = l_IO_println___redArg(v_inst_3861_, v_s_3862_);
return v___x_3864_;
}
}
LEAN_EXPORT lean_object* l_IO_println___boxed(lean_object* v_00_u03b1_3865_, lean_object* v_inst_3866_, lean_object* v_s_3867_, lean_object* v___y_3868_){
_start:
{
lean_object* v_res_3869_; 
v_res_3869_ = l_IO_println(v_00_u03b1_3865_, v_inst_3866_, v_s_3867_);
return v_res_3869_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___redArg(lean_object* v_inst_3870_, lean_object* v_s_3871_){
_start:
{
lean_object* v___x_3873_; lean_object* v_putStr_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
v___x_3873_ = lean_get_stderr();
v_putStr_3874_ = lean_ctor_get(v___x_3873_, 4);
lean_inc_ref(v_putStr_3874_);
lean_dec_ref(v___x_3873_);
v___x_3875_ = lean_apply_1(v_inst_3870_, v_s_3871_);
v___x_3876_ = lean_apply_2(v_putStr_3874_, v___x_3875_, lean_box(0));
return v___x_3876_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___redArg___boxed(lean_object* v_inst_3877_, lean_object* v_s_3878_, lean_object* v___y_3879_){
_start:
{
lean_object* v_res_3880_; 
v_res_3880_ = l_IO_eprint___redArg(v_inst_3877_, v_s_3878_);
return v_res_3880_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint(lean_object* v_00_u03b1_3881_, lean_object* v_inst_3882_, lean_object* v_s_3883_){
_start:
{
lean_object* v___x_3885_; 
v___x_3885_ = l_IO_eprint___redArg(v_inst_3882_, v_s_3883_);
return v___x_3885_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___boxed(lean_object* v_00_u03b1_3886_, lean_object* v_inst_3887_, lean_object* v_s_3888_, lean_object* v___y_3889_){
_start:
{
lean_object* v_res_3890_; 
v_res_3890_ = l_IO_eprint(v_00_u03b1_3886_, v_inst_3887_, v_s_3888_);
return v_res_3890_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___redArg(lean_object* v_inst_3891_, lean_object* v_s_3892_){
_start:
{
lean_object* v___f_3894_; lean_object* v___x_3895_; uint32_t v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___f_3894_ = ((lean_object*)(l_IO_println___redArg___closed__0));
v___x_3895_ = lean_apply_1(v_inst_3891_, v_s_3892_);
v___x_3896_ = 10;
v___x_3897_ = lean_string_push(v___x_3895_, v___x_3896_);
v___x_3898_ = l_IO_eprint___redArg(v___f_3894_, v___x_3897_);
return v___x_3898_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___redArg___boxed(lean_object* v_inst_3899_, lean_object* v_s_3900_, lean_object* v___y_3901_){
_start:
{
lean_object* v_res_3902_; 
v_res_3902_ = l_IO_eprintln___redArg(v_inst_3899_, v_s_3900_);
return v_res_3902_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln(lean_object* v_00_u03b1_3903_, lean_object* v_inst_3904_, lean_object* v_s_3905_){
_start:
{
lean_object* v___x_3907_; 
v___x_3907_ = l_IO_eprintln___redArg(v_inst_3904_, v_s_3905_);
return v___x_3907_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___boxed(lean_object* v_00_u03b1_3908_, lean_object* v_inst_3909_, lean_object* v_s_3910_, lean_object* v___y_3911_){
_start:
{
lean_object* v_res_3912_; 
v_res_3912_ = l_IO_eprintln(v_00_u03b1_3908_, v_inst_3909_, v_s_3910_);
return v_res_3912_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0(lean_object* v_s_3913_){
_start:
{
lean_object* v___x_3915_; lean_object* v_putStr_3916_; lean_object* v___x_3917_; 
v___x_3915_ = lean_get_stderr();
v_putStr_3916_ = lean_ctor_get(v___x_3915_, 4);
lean_inc_ref(v_putStr_3916_);
lean_dec_ref(v___x_3915_);
v___x_3917_ = lean_apply_2(v_putStr_3916_, v_s_3913_, lean_box(0));
return v___x_3917_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0___boxed(lean_object* v_s_3918_, lean_object* v___y_3919_){
_start:
{
lean_object* v_res_3920_; 
v_res_3920_ = l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0(v_s_3918_);
return v_res_3920_;
}
}
LEAN_EXPORT lean_object* lean_io_eprint(lean_object* v_s_3921_){
_start:
{
lean_object* v___x_3923_; 
v___x_3923_ = l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0(v_s_3921_);
return v___x_3923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_eprintAux___boxed(lean_object* v_s_3924_, lean_object* v___y_3925_){
_start:
{
lean_object* v_res_3926_; 
v_res_3926_ = lean_io_eprint(v_s_3924_);
return v_res_3926_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object* v_s_3927_){
_start:
{
uint32_t v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; 
v___x_3929_ = 10;
v___x_3930_ = lean_string_push(v_s_3927_, v___x_3929_);
v___x_3931_ = l_IO_eprint___at___00__private_Init_System_IO_0__IO_eprintAux_spec__0(v___x_3930_);
return v___x_3931_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0___boxed(lean_object* v_s_3932_, lean_object* v___y_3933_){
_start:
{
lean_object* v_res_3934_; 
v_res_3934_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v_s_3932_);
return v_res_3934_;
}
}
LEAN_EXPORT lean_object* lean_io_eprintln(lean_object* v_s_3935_){
_start:
{
lean_object* v___x_3937_; 
v___x_3937_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v_s_3935_);
return v___x_3937_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_eprintlnAux___boxed(lean_object* v_s_3938_, lean_object* v___y_3939_){
_start:
{
lean_object* v_res_3940_; 
v_res_3940_ = lean_io_eprintln(v_s_3938_);
return v_res_3940_;
}
}
LEAN_EXPORT lean_object* l_IO_appDir(){
_start:
{
lean_object* v___x_3944_; 
v___x_3944_ = lean_io_app_path();
if (lean_obj_tag(v___x_3944_) == 0)
{
lean_object* v_a_3945_; lean_object* v___x_3947_; uint8_t v_isShared_3948_; uint8_t v_isSharedCheck_3960_; 
v_a_3945_ = lean_ctor_get(v___x_3944_, 0);
v_isSharedCheck_3960_ = !lean_is_exclusive(v___x_3944_);
if (v_isSharedCheck_3960_ == 0)
{
v___x_3947_ = v___x_3944_;
v_isShared_3948_ = v_isSharedCheck_3960_;
goto v_resetjp_3946_;
}
else
{
lean_inc(v_a_3945_);
lean_dec(v___x_3944_);
v___x_3947_ = lean_box(0);
v_isShared_3948_ = v_isSharedCheck_3960_;
goto v_resetjp_3946_;
}
v_resetjp_3946_:
{
lean_object* v___x_3949_; 
lean_inc(v_a_3945_);
v___x_3949_ = l_System_FilePath_parent(v_a_3945_);
if (lean_obj_tag(v___x_3949_) == 1)
{
lean_object* v_val_3950_; lean_object* v___x_3951_; 
lean_del_object(v___x_3947_);
lean_dec(v_a_3945_);
v_val_3950_ = lean_ctor_get(v___x_3949_, 0);
lean_inc(v_val_3950_);
lean_dec_ref_known(v___x_3949_, 1);
v___x_3951_ = lean_io_realpath(v_val_3950_);
return v___x_3951_;
}
else
{
lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3958_; 
lean_dec(v___x_3949_);
v___x_3952_ = ((lean_object*)(l_IO_appDir___closed__0));
v___x_3953_ = lean_string_append(v___x_3952_, v_a_3945_);
lean_dec(v_a_3945_);
v___x_3954_ = ((lean_object*)(l_IO_appDir___closed__1));
v___x_3955_ = lean_string_append(v___x_3953_, v___x_3954_);
v___x_3956_ = lean_mk_io_user_error(v___x_3955_);
if (v_isShared_3948_ == 0)
{
lean_ctor_set_tag(v___x_3947_, 1);
lean_ctor_set(v___x_3947_, 0, v___x_3956_);
v___x_3958_ = v___x_3947_;
goto v_reusejp_3957_;
}
else
{
lean_object* v_reuseFailAlloc_3959_; 
v_reuseFailAlloc_3959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3959_, 0, v___x_3956_);
v___x_3958_ = v_reuseFailAlloc_3959_;
goto v_reusejp_3957_;
}
v_reusejp_3957_:
{
return v___x_3958_;
}
}
}
}
else
{
return v___x_3944_;
}
}
}
LEAN_EXPORT lean_object* l_IO_appDir___boxed(lean_object* v___y_3961_){
_start:
{
lean_object* v_res_3962_; 
v_res_3962_ = l_IO_appDir();
return v_res_3962_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_createDirAll(lean_object* v_p_3963_){
_start:
{
uint8_t v___x_3980_; 
v___x_3980_ = l_System_FilePath_isDir(v_p_3963_);
if (v___x_3980_ == 0)
{
lean_object* v___x_3981_; 
lean_inc_ref(v_p_3963_);
v___x_3981_ = l_System_FilePath_parent(v_p_3963_);
if (lean_obj_tag(v___x_3981_) == 1)
{
lean_object* v_val_3982_; lean_object* v___x_3983_; 
v_val_3982_ = lean_ctor_get(v___x_3981_, 0);
lean_inc(v_val_3982_);
lean_dec_ref_known(v___x_3981_, 1);
v___x_3983_ = l_IO_FS_createDirAll(v_val_3982_);
if (lean_obj_tag(v___x_3983_) == 0)
{
lean_dec_ref_known(v___x_3983_, 1);
goto v___jp_3965_;
}
else
{
lean_dec_ref(v_p_3963_);
return v___x_3983_;
}
}
else
{
lean_dec(v___x_3981_);
goto v___jp_3965_;
}
}
else
{
lean_object* v___x_3984_; lean_object* v___x_3985_; 
lean_dec_ref(v_p_3963_);
v___x_3984_ = lean_box(0);
v___x_3985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3985_, 0, v___x_3984_);
return v___x_3985_;
}
v___jp_3965_:
{
lean_object* v___x_3966_; 
v___x_3966_ = lean_io_create_dir(v_p_3963_);
if (lean_obj_tag(v___x_3966_) == 0)
{
lean_dec_ref(v_p_3963_);
return v___x_3966_;
}
else
{
lean_object* v_a_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_3979_; 
v_a_3967_ = lean_ctor_get(v___x_3966_, 0);
v_isSharedCheck_3979_ = !lean_is_exclusive(v___x_3966_);
if (v_isSharedCheck_3979_ == 0)
{
v___x_3969_ = v___x_3966_;
v_isShared_3970_ = v_isSharedCheck_3979_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_a_3967_);
lean_dec(v___x_3966_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_3979_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
uint8_t v___x_3971_; 
v___x_3971_ = l_System_FilePath_isDir(v_p_3963_);
lean_dec_ref(v_p_3963_);
if (v___x_3971_ == 0)
{
lean_object* v___x_3973_; 
if (v_isShared_3970_ == 0)
{
v___x_3973_ = v___x_3969_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v_a_3967_);
v___x_3973_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
return v___x_3973_;
}
}
else
{
lean_object* v___x_3975_; lean_object* v___x_3977_; 
lean_dec(v_a_3967_);
v___x_3975_ = lean_box(0);
if (v_isShared_3970_ == 0)
{
lean_ctor_set_tag(v___x_3969_, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3975_);
v___x_3977_ = v___x_3969_;
goto v_reusejp_3976_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v___x_3975_);
v___x_3977_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3976_;
}
v_reusejp_3976_:
{
return v___x_3977_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_createDirAll___boxed(lean_object* v_p_3986_, lean_object* v___y_3987_){
_start:
{
lean_object* v_res_3988_; 
v_res_3988_ = l_IO_FS_createDirAll(v_p_3986_);
return v_res_3988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00IO_FS_removeDirAll_spec__0(lean_object* v_as_3989_, size_t v_sz_3990_, size_t v_i_3991_, lean_object* v_b_3992_){
_start:
{
lean_object* v_a_3995_; uint8_t v___x_3999_; 
v___x_3999_ = lean_usize_dec_lt(v_i_3991_, v_sz_3990_);
if (v___x_3999_ == 0)
{
lean_object* v___x_4000_; 
v___x_4000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4000_, 0, v_b_3992_);
return v___x_4000_;
}
else
{
lean_object* v___x_4001_; lean_object* v_a_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; 
v___x_4001_ = lean_box(0);
v_a_4002_ = lean_array_uget_borrowed(v_as_3989_, v_i_3991_);
lean_inc(v_a_4002_);
v___x_4003_ = l_IO_FS_DirEntry_path(v_a_4002_);
v___x_4004_ = lean_io_symlink_metadata(v___x_4003_);
if (lean_obj_tag(v___x_4004_) == 0)
{
lean_object* v_a_4005_; uint8_t v_type_4006_; uint8_t v___x_4007_; uint8_t v___x_4008_; 
v_a_4005_ = lean_ctor_get(v___x_4004_, 0);
lean_inc(v_a_4005_);
lean_dec_ref_known(v___x_4004_, 1);
v_type_4006_ = lean_ctor_get_uint8(v_a_4005_, sizeof(void*)*2 + 16);
lean_dec(v_a_4005_);
v___x_4007_ = 0;
v___x_4008_ = l_IO_FS_instBEqFileType_beq(v_type_4006_, v___x_4007_);
if (v___x_4008_ == 0)
{
lean_object* v___x_4009_; 
v___x_4009_ = lean_io_remove_file(v___x_4003_);
lean_dec_ref(v___x_4003_);
if (lean_obj_tag(v___x_4009_) == 0)
{
lean_dec_ref_known(v___x_4009_, 1);
v_a_3995_ = v___x_4001_;
goto v___jp_3994_;
}
else
{
return v___x_4009_;
}
}
else
{
lean_object* v___x_4010_; 
v___x_4010_ = l_IO_FS_removeDirAll(v___x_4003_);
lean_dec_ref(v___x_4003_);
if (lean_obj_tag(v___x_4010_) == 0)
{
lean_dec_ref_known(v___x_4010_, 1);
v_a_3995_ = v___x_4001_;
goto v___jp_3994_;
}
else
{
return v___x_4010_;
}
}
}
else
{
lean_object* v_a_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4018_; 
lean_dec_ref(v___x_4003_);
v_a_4011_ = lean_ctor_get(v___x_4004_, 0);
v_isSharedCheck_4018_ = !lean_is_exclusive(v___x_4004_);
if (v_isSharedCheck_4018_ == 0)
{
v___x_4013_ = v___x_4004_;
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_a_4011_);
lean_dec(v___x_4004_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v___x_4016_; 
if (v_isShared_4014_ == 0)
{
v___x_4016_ = v___x_4013_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v_a_4011_);
v___x_4016_ = v_reuseFailAlloc_4017_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
return v___x_4016_;
}
}
}
}
v___jp_3994_:
{
size_t v___x_3996_; size_t v___x_3997_; 
v___x_3996_ = ((size_t)1ULL);
v___x_3997_ = lean_usize_add(v_i_3991_, v___x_3996_);
v_i_3991_ = v___x_3997_;
v_b_3992_ = v_a_3995_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_removeDirAll(lean_object* v_p_4019_){
_start:
{
lean_object* v___x_4021_; 
v___x_4021_ = lean_io_read_dir(v_p_4019_);
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_object* v_a_4022_; lean_object* v___x_4023_; size_t v_sz_4024_; size_t v___x_4025_; lean_object* v___x_4026_; 
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
lean_inc(v_a_4022_);
lean_dec_ref_known(v___x_4021_, 1);
v___x_4023_ = lean_box(0);
v_sz_4024_ = lean_array_size(v_a_4022_);
v___x_4025_ = ((size_t)0ULL);
v___x_4026_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00IO_FS_removeDirAll_spec__0(v_a_4022_, v_sz_4024_, v___x_4025_, v___x_4023_);
lean_dec(v_a_4022_);
if (lean_obj_tag(v___x_4026_) == 0)
{
lean_object* v___x_4027_; 
lean_dec_ref_known(v___x_4026_, 1);
v___x_4027_ = lean_io_remove_dir(v_p_4019_);
return v___x_4027_;
}
else
{
return v___x_4026_;
}
}
else
{
lean_object* v_a_4028_; lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4035_; 
v_a_4028_ = lean_ctor_get(v___x_4021_, 0);
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_4021_);
if (v_isSharedCheck_4035_ == 0)
{
v___x_4030_ = v___x_4021_;
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
else
{
lean_inc(v_a_4028_);
lean_dec(v___x_4021_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4033_; 
if (v_isShared_4031_ == 0)
{
v___x_4033_ = v___x_4030_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_a_4028_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_removeDirAll___boxed(lean_object* v_p_4036_, lean_object* v___y_4037_){
_start:
{
lean_object* v_res_4038_; 
v_res_4038_ = l_IO_FS_removeDirAll(v_p_4036_);
lean_dec_ref(v_p_4036_);
return v_res_4038_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00IO_FS_removeDirAll_spec__0___boxed(lean_object* v_as_4039_, lean_object* v_sz_4040_, lean_object* v_i_4041_, lean_object* v_b_4042_, lean_object* v___y_4043_){
_start:
{
size_t v_sz_boxed_4044_; size_t v_i_boxed_4045_; lean_object* v_res_4046_; 
v_sz_boxed_4044_ = lean_unbox_usize(v_sz_4040_);
lean_dec(v_sz_4040_);
v_i_boxed_4045_ = lean_unbox_usize(v_i_4041_);
lean_dec(v_i_4041_);
v_res_4046_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00IO_FS_removeDirAll_spec__0(v_as_4039_, v_sz_boxed_4044_, v_i_boxed_4045_, v_b_4042_);
lean_dec_ref(v_as_4039_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___redArg___lam__2(lean_object* v_toFunctor_4047_, lean_object* v_f_4048_, lean_object* v_inst_4049_, lean_object* v_inst_4050_, lean_object* v___f_4051_, lean_object* v_____x_4052_){
_start:
{
lean_object* v_fst_4053_; lean_object* v_snd_4054_; lean_object* v_map_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___f_4059_; lean_object* v_y_4060_; lean_object* v___x_4061_; 
v_fst_4053_ = lean_ctor_get(v_____x_4052_, 0);
lean_inc(v_fst_4053_);
v_snd_4054_ = lean_ctor_get(v_____x_4052_, 1);
lean_inc_n(v_snd_4054_, 2);
lean_dec_ref(v_____x_4052_);
v_map_4055_ = lean_ctor_get(v_toFunctor_4047_, 0);
lean_inc(v_map_4055_);
lean_dec_ref(v_toFunctor_4047_);
v___x_4056_ = lean_apply_2(v_f_4048_, v_fst_4053_, v_snd_4054_);
v___x_4057_ = lean_alloc_closure((void*)(l_IO_FS_removeFile___boxed), 2, 1);
lean_closure_set(v___x_4057_, 0, v_snd_4054_);
v___x_4058_ = lean_apply_2(v_inst_4049_, lean_box(0), v___x_4057_);
v___f_4059_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4059_, 0, v___x_4058_);
v_y_4060_ = lean_apply_4(v_inst_4050_, lean_box(0), lean_box(0), v___x_4056_, v___f_4059_);
v___x_4061_ = lean_apply_4(v_map_4055_, lean_box(0), lean_box(0), v___f_4051_, v_y_4060_);
return v___x_4061_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___redArg(lean_object* v_inst_4063_, lean_object* v_inst_4064_, lean_object* v_inst_4065_, lean_object* v_f_4066_){
_start:
{
lean_object* v_toApplicative_4067_; lean_object* v_toBind_4068_; lean_object* v_toFunctor_4069_; lean_object* v___f_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___f_4073_; lean_object* v___x_4074_; 
v_toApplicative_4067_ = lean_ctor_get(v_inst_4063_, 0);
lean_inc_ref(v_toApplicative_4067_);
v_toBind_4068_ = lean_ctor_get(v_inst_4063_, 1);
lean_inc(v_toBind_4068_);
lean_dec_ref(v_inst_4063_);
v_toFunctor_4069_ = lean_ctor_get(v_toApplicative_4067_, 0);
lean_inc_ref(v_toFunctor_4069_);
lean_dec_ref(v_toApplicative_4067_);
v___f_4070_ = ((lean_object*)(l_IO_withStdin___redArg___closed__0));
v___x_4071_ = ((lean_object*)(l_IO_FS_withTempFile___redArg___closed__0));
lean_inc(v_inst_4065_);
v___x_4072_ = lean_apply_2(v_inst_4065_, lean_box(0), v___x_4071_);
v___f_4073_ = lean_alloc_closure((void*)(l_IO_FS_withTempFile___redArg___lam__2), 6, 5);
lean_closure_set(v___f_4073_, 0, v_toFunctor_4069_);
lean_closure_set(v___f_4073_, 1, v_f_4066_);
lean_closure_set(v___f_4073_, 2, v_inst_4065_);
lean_closure_set(v___f_4073_, 3, v_inst_4064_);
lean_closure_set(v___f_4073_, 4, v___f_4070_);
v___x_4074_ = lean_apply_4(v_toBind_4068_, lean_box(0), lean_box(0), v___x_4072_, v___f_4073_);
return v___x_4074_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile(lean_object* v_m_4075_, lean_object* v_00_u03b1_4076_, lean_object* v_inst_4077_, lean_object* v_inst_4078_, lean_object* v_inst_4079_, lean_object* v_f_4080_){
_start:
{
lean_object* v___x_4081_; 
v___x_4081_ = l_IO_FS_withTempFile___redArg(v_inst_4077_, v_inst_4078_, v_inst_4079_, v_f_4080_);
return v___x_4081_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempDir___redArg___lam__2(lean_object* v_toFunctor_4082_, lean_object* v_f_4083_, lean_object* v_inst_4084_, lean_object* v_inst_4085_, lean_object* v___f_4086_, lean_object* v_path_4087_){
_start:
{
lean_object* v_map_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___f_4092_; lean_object* v_y_4093_; lean_object* v___x_4094_; 
v_map_4088_ = lean_ctor_get(v_toFunctor_4082_, 0);
lean_inc(v_map_4088_);
lean_dec_ref(v_toFunctor_4082_);
lean_inc_ref(v_path_4087_);
v___x_4089_ = lean_apply_1(v_f_4083_, v_path_4087_);
v___x_4090_ = lean_alloc_closure((void*)(l_IO_FS_removeDirAll___boxed), 2, 1);
lean_closure_set(v___x_4090_, 0, v_path_4087_);
v___x_4091_ = lean_apply_2(v_inst_4084_, lean_box(0), v___x_4090_);
v___f_4092_ = lean_alloc_closure((void*)(l_IO_withStdin___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4092_, 0, v___x_4091_);
v_y_4093_ = lean_apply_4(v_inst_4085_, lean_box(0), lean_box(0), v___x_4089_, v___f_4092_);
v___x_4094_ = lean_apply_4(v_map_4088_, lean_box(0), lean_box(0), v___f_4086_, v_y_4093_);
return v___x_4094_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempDir___redArg(lean_object* v_inst_4096_, lean_object* v_inst_4097_, lean_object* v_inst_4098_, lean_object* v_f_4099_){
_start:
{
lean_object* v_toApplicative_4100_; lean_object* v_toBind_4101_; lean_object* v_toFunctor_4102_; lean_object* v___f_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___f_4106_; lean_object* v___x_4107_; 
v_toApplicative_4100_ = lean_ctor_get(v_inst_4096_, 0);
lean_inc_ref(v_toApplicative_4100_);
v_toBind_4101_ = lean_ctor_get(v_inst_4096_, 1);
lean_inc(v_toBind_4101_);
lean_dec_ref(v_inst_4096_);
v_toFunctor_4102_ = lean_ctor_get(v_toApplicative_4100_, 0);
lean_inc_ref(v_toFunctor_4102_);
lean_dec_ref(v_toApplicative_4100_);
v___f_4103_ = ((lean_object*)(l_IO_withStdin___redArg___closed__0));
v___x_4104_ = ((lean_object*)(l_IO_FS_withTempDir___redArg___closed__0));
lean_inc(v_inst_4098_);
v___x_4105_ = lean_apply_2(v_inst_4098_, lean_box(0), v___x_4104_);
v___f_4106_ = lean_alloc_closure((void*)(l_IO_FS_withTempDir___redArg___lam__2), 6, 5);
lean_closure_set(v___f_4106_, 0, v_toFunctor_4102_);
lean_closure_set(v___f_4106_, 1, v_f_4099_);
lean_closure_set(v___f_4106_, 2, v_inst_4098_);
lean_closure_set(v___f_4106_, 3, v_inst_4097_);
lean_closure_set(v___f_4106_, 4, v___f_4103_);
v___x_4107_ = lean_apply_4(v_toBind_4101_, lean_box(0), lean_box(0), v___x_4105_, v___f_4106_);
return v___x_4107_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempDir(lean_object* v_m_4108_, lean_object* v_00_u03b1_4109_, lean_object* v_inst_4110_, lean_object* v_inst_4111_, lean_object* v_inst_4112_, lean_object* v_f_4113_){
_start:
{
lean_object* v___x_4114_; 
v___x_4114_ = l_IO_FS_withTempDir___redArg(v_inst_4110_, v_inst_4111_, v_inst_4112_, v_f_4113_);
return v___x_4114_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_getCurrentDir___boxed(lean_object* v_a_00___x40___internal___hyg_4116_){
_start:
{
lean_object* v_res_4117_; 
v_res_4117_ = lean_io_process_get_current_dir();
return v_res_4117_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_setCurrentDir___boxed(lean_object* v_path_4120_, lean_object* v_a_00___x40___internal___hyg_4121_){
_start:
{
lean_object* v_res_4122_; 
v_res_4122_ = lean_io_process_set_current_dir(v_path_4120_);
lean_dec_ref(v_path_4120_);
return v_res_4122_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_getPID___boxed(lean_object* v_a_00___x40___internal___hyg_4124_){
_start:
{
uint32_t v_res_4125_; lean_object* v_r_4126_; 
v_res_4125_ = lean_io_process_get_pid();
v_r_4126_ = lean_box_uint32(v_res_4125_);
return v_r_4126_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorIdx(uint8_t v_x_4127_){
_start:
{
switch(v_x_4127_)
{
case 0:
{
lean_object* v___x_4128_; 
v___x_4128_ = lean_unsigned_to_nat(0u);
return v___x_4128_;
}
case 1:
{
lean_object* v___x_4129_; 
v___x_4129_ = lean_unsigned_to_nat(1u);
return v___x_4129_;
}
default: 
{
lean_object* v___x_4130_; 
v___x_4130_ = lean_unsigned_to_nat(2u);
return v___x_4130_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorIdx___boxed(lean_object* v_x_4131_){
_start:
{
uint8_t v_x_boxed_4132_; lean_object* v_res_4133_; 
v_x_boxed_4132_ = lean_unbox(v_x_4131_);
v_res_4133_ = l_IO_Process_Stdio_ctorIdx(v_x_boxed_4132_);
return v_res_4133_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim___redArg(lean_object* v_k_4134_){
_start:
{
lean_inc(v_k_4134_);
return v_k_4134_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim___redArg___boxed(lean_object* v_k_4135_){
_start:
{
lean_object* v_res_4136_; 
v_res_4136_ = l_IO_Process_Stdio_ctorElim___redArg(v_k_4135_);
lean_dec(v_k_4135_);
return v_res_4136_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim(lean_object* v_motive_4137_, lean_object* v_ctorIdx_4138_, uint8_t v_t_4139_, lean_object* v_h_4140_, lean_object* v_k_4141_){
_start:
{
lean_inc(v_k_4141_);
return v_k_4141_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_ctorElim___boxed(lean_object* v_motive_4142_, lean_object* v_ctorIdx_4143_, lean_object* v_t_4144_, lean_object* v_h_4145_, lean_object* v_k_4146_){
_start:
{
uint8_t v_t_boxed_4147_; lean_object* v_res_4148_; 
v_t_boxed_4147_ = lean_unbox(v_t_4144_);
v_res_4148_ = l_IO_Process_Stdio_ctorElim(v_motive_4142_, v_ctorIdx_4143_, v_t_boxed_4147_, v_h_4145_, v_k_4146_);
lean_dec(v_k_4146_);
lean_dec(v_ctorIdx_4143_);
return v_res_4148_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim___redArg(lean_object* v_piped_4149_){
_start:
{
lean_inc(v_piped_4149_);
return v_piped_4149_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim___redArg___boxed(lean_object* v_piped_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_IO_Process_Stdio_piped_elim___redArg(v_piped_4150_);
lean_dec(v_piped_4150_);
return v_res_4151_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim(lean_object* v_motive_4152_, uint8_t v_t_4153_, lean_object* v_h_4154_, lean_object* v_piped_4155_){
_start:
{
lean_inc(v_piped_4155_);
return v_piped_4155_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_piped_elim___boxed(lean_object* v_motive_4156_, lean_object* v_t_4157_, lean_object* v_h_4158_, lean_object* v_piped_4159_){
_start:
{
uint8_t v_t_boxed_4160_; lean_object* v_res_4161_; 
v_t_boxed_4160_ = lean_unbox(v_t_4157_);
v_res_4161_ = l_IO_Process_Stdio_piped_elim(v_motive_4156_, v_t_boxed_4160_, v_h_4158_, v_piped_4159_);
lean_dec(v_piped_4159_);
return v_res_4161_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim___redArg(lean_object* v_inherit_4162_){
_start:
{
lean_inc(v_inherit_4162_);
return v_inherit_4162_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim___redArg___boxed(lean_object* v_inherit_4163_){
_start:
{
lean_object* v_res_4164_; 
v_res_4164_ = l_IO_Process_Stdio_inherit_elim___redArg(v_inherit_4163_);
lean_dec(v_inherit_4163_);
return v_res_4164_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim(lean_object* v_motive_4165_, uint8_t v_t_4166_, lean_object* v_h_4167_, lean_object* v_inherit_4168_){
_start:
{
lean_inc(v_inherit_4168_);
return v_inherit_4168_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_inherit_elim___boxed(lean_object* v_motive_4169_, lean_object* v_t_4170_, lean_object* v_h_4171_, lean_object* v_inherit_4172_){
_start:
{
uint8_t v_t_boxed_4173_; lean_object* v_res_4174_; 
v_t_boxed_4173_ = lean_unbox(v_t_4170_);
v_res_4174_ = l_IO_Process_Stdio_inherit_elim(v_motive_4169_, v_t_boxed_4173_, v_h_4171_, v_inherit_4172_);
lean_dec(v_inherit_4172_);
return v_res_4174_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim___redArg(lean_object* v_null_4175_){
_start:
{
lean_inc(v_null_4175_);
return v_null_4175_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim___redArg___boxed(lean_object* v_null_4176_){
_start:
{
lean_object* v_res_4177_; 
v_res_4177_ = l_IO_Process_Stdio_null_elim___redArg(v_null_4176_);
lean_dec(v_null_4176_);
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim(lean_object* v_motive_4178_, uint8_t v_t_4179_, lean_object* v_h_4180_, lean_object* v_null_4181_){
_start:
{
lean_inc(v_null_4181_);
return v_null_4181_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Stdio_null_elim___boxed(lean_object* v_motive_4182_, lean_object* v_t_4183_, lean_object* v_h_4184_, lean_object* v_null_4185_){
_start:
{
uint8_t v_t_boxed_4186_; lean_object* v_res_4187_; 
v_t_boxed_4186_ = lean_unbox(v_t_4183_);
v_res_4187_ = l_IO_Process_Stdio_null_elim(v_motive_4182_, v_t_boxed_4186_, v_h_4184_, v_null_4185_);
lean_dec(v_null_4185_);
return v_res_4187_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_spawn___boxed(lean_object* v_args_4190_, lean_object* v_a_00___x40___internal___hyg_4191_){
_start:
{
lean_object* v_res_4192_; 
v_res_4192_ = lean_io_process_spawn(v_args_4190_);
return v_res_4192_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Child_wait___boxed(lean_object* v_cfg_4196_, lean_object* v_a_00___x40___internal___hyg_4197_, lean_object* v_a_00___x40___internal___hyg_4198_){
_start:
{
lean_object* v_res_4199_; 
v_res_4199_ = lean_io_process_child_wait(v_cfg_4196_, v_a_00___x40___internal___hyg_4197_);
lean_dec_ref(v_a_00___x40___internal___hyg_4197_);
lean_dec_ref(v_cfg_4196_);
return v_res_4199_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Child_tryWait___boxed(lean_object* v_cfg_4203_, lean_object* v_a_00___x40___internal___hyg_4204_, lean_object* v_a_00___x40___internal___hyg_4205_){
_start:
{
lean_object* v_res_4206_; 
v_res_4206_ = lean_io_process_child_try_wait(v_cfg_4203_, v_a_00___x40___internal___hyg_4204_);
lean_dec_ref(v_a_00___x40___internal___hyg_4204_);
lean_dec_ref(v_cfg_4203_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Child_kill___boxed(lean_object* v_cfg_4210_, lean_object* v_a_00___x40___internal___hyg_4211_, lean_object* v_a_00___x40___internal___hyg_4212_){
_start:
{
lean_object* v_res_4213_; 
v_res_4213_ = lean_io_process_child_kill(v_cfg_4210_, v_a_00___x40___internal___hyg_4211_);
lean_dec_ref(v_a_00___x40___internal___hyg_4211_);
lean_dec_ref(v_cfg_4210_);
return v_res_4213_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Child_takeStdin___boxed(lean_object* v_cfg_4217_, lean_object* v_a_00___x40___internal___hyg_4218_, lean_object* v_a_00___x40___internal___hyg_4219_){
_start:
{
lean_object* v_res_4220_; 
v_res_4220_ = lean_io_process_child_take_stdin(v_cfg_4217_, v_a_00___x40___internal___hyg_4218_);
lean_dec_ref(v_cfg_4217_);
return v_res_4220_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_Child_pid___boxed(lean_object* v_cfg_4223_, lean_object* v_a_00___x40___internal___hyg_4224_){
_start:
{
uint32_t v_res_4225_; lean_object* v_r_4226_; 
v_res_4225_ = lean_io_process_child_pid(v_cfg_4223_, v_a_00___x40___internal___hyg_4224_);
lean_dec_ref(v_cfg_4223_);
v_r_4226_ = lean_box_uint32(v_res_4225_);
return v_r_4226_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(lean_object* v_e_4227_){
_start:
{
if (lean_obj_tag(v_e_4227_) == 0)
{
lean_object* v_a_4229_; lean_object* v___x_4231_; uint8_t v_isShared_4232_; uint8_t v_isSharedCheck_4238_; 
v_a_4229_ = lean_ctor_get(v_e_4227_, 0);
v_isSharedCheck_4238_ = !lean_is_exclusive(v_e_4227_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4231_ = v_e_4227_;
v_isShared_4232_ = v_isSharedCheck_4238_;
goto v_resetjp_4230_;
}
else
{
lean_inc(v_a_4229_);
lean_dec(v_e_4227_);
v___x_4231_ = lean_box(0);
v_isShared_4232_ = v_isSharedCheck_4238_;
goto v_resetjp_4230_;
}
v_resetjp_4230_:
{
lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4236_; 
v___x_4233_ = lean_io_error_to_string(v_a_4229_);
v___x_4234_ = lean_mk_io_user_error(v___x_4233_);
if (v_isShared_4232_ == 0)
{
lean_ctor_set_tag(v___x_4231_, 1);
lean_ctor_set(v___x_4231_, 0, v___x_4234_);
v___x_4236_ = v___x_4231_;
goto v_reusejp_4235_;
}
else
{
lean_object* v_reuseFailAlloc_4237_; 
v_reuseFailAlloc_4237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4237_, 0, v___x_4234_);
v___x_4236_ = v_reuseFailAlloc_4237_;
goto v_reusejp_4235_;
}
v_reusejp_4235_:
{
return v___x_4236_;
}
}
}
else
{
lean_object* v_a_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4246_; 
v_a_4239_ = lean_ctor_get(v_e_4227_, 0);
v_isSharedCheck_4246_ = !lean_is_exclusive(v_e_4227_);
if (v_isSharedCheck_4246_ == 0)
{
v___x_4241_ = v_e_4227_;
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_a_4239_);
lean_dec(v_e_4227_);
v___x_4241_ = lean_box(0);
v_isShared_4242_ = v_isSharedCheck_4246_;
goto v_resetjp_4240_;
}
v_resetjp_4240_:
{
lean_object* v___x_4244_; 
if (v_isShared_4242_ == 0)
{
lean_ctor_set_tag(v___x_4241_, 0);
v___x_4244_ = v___x_4241_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v_a_4239_);
v___x_4244_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
return v___x_4244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg___boxed(lean_object* v_e_4247_, lean_object* v___y_4248_){
_start:
{
lean_object* v_res_4249_; 
v_res_4249_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v_e_4247_);
return v_res_4249_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0(lean_object* v_00_u03b1_4250_, lean_object* v_e_4251_){
_start:
{
lean_object* v___x_4253_; 
v___x_4253_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v_e_4251_);
return v___x_4253_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00IO_Process_output_spec__0___boxed(lean_object* v_00_u03b1_4254_, lean_object* v_e_4255_, lean_object* v___y_4256_){
_start:
{
lean_object* v_res_4257_; 
v_res_4257_ = l_IO_ofExcept___at___00IO_Process_output_spec__0(v_00_u03b1_4254_, v_e_4255_);
return v_res_4257_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_output___lam__0(lean_object* v_stdout_4258_){
_start:
{
lean_object* v___x_4260_; 
v___x_4260_ = l_IO_FS_Handle_readToEnd(v_stdout_4258_);
if (lean_obj_tag(v___x_4260_) == 0)
{
lean_object* v_a_4261_; lean_object* v___x_4263_; uint8_t v_isShared_4264_; uint8_t v_isSharedCheck_4268_; 
v_a_4261_ = lean_ctor_get(v___x_4260_, 0);
v_isSharedCheck_4268_ = !lean_is_exclusive(v___x_4260_);
if (v_isSharedCheck_4268_ == 0)
{
v___x_4263_ = v___x_4260_;
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
else
{
lean_inc(v_a_4261_);
lean_dec(v___x_4260_);
v___x_4263_ = lean_box(0);
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
v_resetjp_4262_:
{
lean_object* v___x_4266_; 
if (v_isShared_4264_ == 0)
{
lean_ctor_set_tag(v___x_4263_, 1);
v___x_4266_ = v___x_4263_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4267_; 
v_reuseFailAlloc_4267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4267_, 0, v_a_4261_);
v___x_4266_ = v_reuseFailAlloc_4267_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
return v___x_4266_;
}
}
}
else
{
lean_object* v_a_4269_; lean_object* v___x_4271_; uint8_t v_isShared_4272_; uint8_t v_isSharedCheck_4276_; 
v_a_4269_ = lean_ctor_get(v___x_4260_, 0);
v_isSharedCheck_4276_ = !lean_is_exclusive(v___x_4260_);
if (v_isSharedCheck_4276_ == 0)
{
v___x_4271_ = v___x_4260_;
v_isShared_4272_ = v_isSharedCheck_4276_;
goto v_resetjp_4270_;
}
else
{
lean_inc(v_a_4269_);
lean_dec(v___x_4260_);
v___x_4271_ = lean_box(0);
v_isShared_4272_ = v_isSharedCheck_4276_;
goto v_resetjp_4270_;
}
v_resetjp_4270_:
{
lean_object* v___x_4274_; 
if (v_isShared_4272_ == 0)
{
lean_ctor_set_tag(v___x_4271_, 0);
v___x_4274_ = v___x_4271_;
goto v_reusejp_4273_;
}
else
{
lean_object* v_reuseFailAlloc_4275_; 
v_reuseFailAlloc_4275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4275_, 0, v_a_4269_);
v___x_4274_ = v_reuseFailAlloc_4275_;
goto v_reusejp_4273_;
}
v_reusejp_4273_:
{
return v___x_4274_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_Process_output___lam__0___boxed(lean_object* v_stdout_4277_, lean_object* v___y_4278_){
_start:
{
lean_object* v_res_4279_; 
v_res_4279_ = l_IO_Process_output___lam__0(v_stdout_4277_);
lean_dec(v_stdout_4277_);
return v_res_4279_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_output(lean_object* v_args_4285_, lean_object* v_input_x3f_4286_){
_start:
{
lean_object* v_child_4289_; 
if (lean_obj_tag(v_input_x3f_4286_) == 1)
{
lean_object* v_val_4336_; lean_object* v___x_4337_; lean_object* v_cmd_4338_; lean_object* v_args_4339_; lean_object* v_cwd_4340_; lean_object* v_env_4341_; uint8_t v_inheritEnv_4342_; uint8_t v_setsid_4343_; lean_object* v___x_4345_; uint8_t v_isShared_4346_; uint8_t v_isSharedCheck_4390_; 
v_val_4336_ = lean_ctor_get(v_input_x3f_4286_, 0);
v___x_4337_ = ((lean_object*)(l_IO_Process_output___closed__1));
v_cmd_4338_ = lean_ctor_get(v_args_4285_, 1);
v_args_4339_ = lean_ctor_get(v_args_4285_, 2);
v_cwd_4340_ = lean_ctor_get(v_args_4285_, 3);
v_env_4341_ = lean_ctor_get(v_args_4285_, 4);
v_inheritEnv_4342_ = lean_ctor_get_uint8(v_args_4285_, sizeof(void*)*5);
v_setsid_4343_ = lean_ctor_get_uint8(v_args_4285_, sizeof(void*)*5 + 1);
v_isSharedCheck_4390_ = !lean_is_exclusive(v_args_4285_);
if (v_isSharedCheck_4390_ == 0)
{
lean_object* v_unused_4391_; 
v_unused_4391_ = lean_ctor_get(v_args_4285_, 0);
lean_dec(v_unused_4391_);
v___x_4345_ = v_args_4285_;
v_isShared_4346_ = v_isSharedCheck_4390_;
goto v_resetjp_4344_;
}
else
{
lean_inc(v_env_4341_);
lean_inc(v_cwd_4340_);
lean_inc(v_args_4339_);
lean_inc(v_cmd_4338_);
lean_dec(v_args_4285_);
v___x_4345_ = lean_box(0);
v_isShared_4346_ = v_isSharedCheck_4390_;
goto v_resetjp_4344_;
}
v_resetjp_4344_:
{
lean_object* v___x_4348_; 
if (v_isShared_4346_ == 0)
{
lean_ctor_set(v___x_4345_, 0, v___x_4337_);
v___x_4348_ = v___x_4345_;
goto v_reusejp_4347_;
}
else
{
lean_object* v_reuseFailAlloc_4389_; 
v_reuseFailAlloc_4389_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_4389_, 0, v___x_4337_);
lean_ctor_set(v_reuseFailAlloc_4389_, 1, v_cmd_4338_);
lean_ctor_set(v_reuseFailAlloc_4389_, 2, v_args_4339_);
lean_ctor_set(v_reuseFailAlloc_4389_, 3, v_cwd_4340_);
lean_ctor_set(v_reuseFailAlloc_4389_, 4, v_env_4341_);
lean_ctor_set_uint8(v_reuseFailAlloc_4389_, sizeof(void*)*5, v_inheritEnv_4342_);
lean_ctor_set_uint8(v_reuseFailAlloc_4389_, sizeof(void*)*5 + 1, v_setsid_4343_);
v___x_4348_ = v_reuseFailAlloc_4389_;
goto v_reusejp_4347_;
}
v_reusejp_4347_:
{
lean_object* v___x_4349_; 
v___x_4349_ = lean_io_process_spawn(v___x_4348_);
if (lean_obj_tag(v___x_4349_) == 0)
{
lean_object* v_a_4350_; lean_object* v___x_4351_; 
v_a_4350_ = lean_ctor_get(v___x_4349_, 0);
lean_inc(v_a_4350_);
lean_dec_ref_known(v___x_4349_, 1);
v___x_4351_ = lean_io_process_child_take_stdin(v___x_4337_, v_a_4350_);
if (lean_obj_tag(v___x_4351_) == 0)
{
lean_object* v_a_4352_; lean_object* v_fst_4353_; lean_object* v_snd_4354_; lean_object* v___x_4355_; 
v_a_4352_ = lean_ctor_get(v___x_4351_, 0);
lean_inc(v_a_4352_);
lean_dec_ref_known(v___x_4351_, 1);
v_fst_4353_ = lean_ctor_get(v_a_4352_, 0);
lean_inc(v_fst_4353_);
v_snd_4354_ = lean_ctor_get(v_a_4352_, 1);
lean_inc(v_snd_4354_);
lean_dec(v_a_4352_);
v___x_4355_ = lean_io_prim_handle_put_str(v_fst_4353_, v_val_4336_);
if (lean_obj_tag(v___x_4355_) == 0)
{
lean_object* v___x_4356_; 
lean_dec_ref_known(v___x_4355_, 1);
v___x_4356_ = lean_io_prim_handle_flush(v_fst_4353_);
lean_dec(v_fst_4353_);
if (lean_obj_tag(v___x_4356_) == 0)
{
lean_dec_ref_known(v___x_4356_, 1);
v_child_4289_ = v_snd_4354_;
goto v___jp_4288_;
}
else
{
lean_object* v_a_4357_; lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4364_; 
lean_dec(v_snd_4354_);
v_a_4357_ = lean_ctor_get(v___x_4356_, 0);
v_isSharedCheck_4364_ = !lean_is_exclusive(v___x_4356_);
if (v_isSharedCheck_4364_ == 0)
{
v___x_4359_ = v___x_4356_;
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
else
{
lean_inc(v_a_4357_);
lean_dec(v___x_4356_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v___x_4362_; 
if (v_isShared_4360_ == 0)
{
v___x_4362_ = v___x_4359_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4363_; 
v_reuseFailAlloc_4363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4363_, 0, v_a_4357_);
v___x_4362_ = v_reuseFailAlloc_4363_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
return v___x_4362_;
}
}
}
}
else
{
lean_object* v_a_4365_; lean_object* v___x_4367_; uint8_t v_isShared_4368_; uint8_t v_isSharedCheck_4372_; 
lean_dec(v_snd_4354_);
lean_dec(v_fst_4353_);
v_a_4365_ = lean_ctor_get(v___x_4355_, 0);
v_isSharedCheck_4372_ = !lean_is_exclusive(v___x_4355_);
if (v_isSharedCheck_4372_ == 0)
{
v___x_4367_ = v___x_4355_;
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
else
{
lean_inc(v_a_4365_);
lean_dec(v___x_4355_);
v___x_4367_ = lean_box(0);
v_isShared_4368_ = v_isSharedCheck_4372_;
goto v_resetjp_4366_;
}
v_resetjp_4366_:
{
lean_object* v___x_4370_; 
if (v_isShared_4368_ == 0)
{
v___x_4370_ = v___x_4367_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4371_; 
v_reuseFailAlloc_4371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4371_, 0, v_a_4365_);
v___x_4370_ = v_reuseFailAlloc_4371_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
return v___x_4370_;
}
}
}
}
else
{
lean_object* v_a_4373_; lean_object* v___x_4375_; uint8_t v_isShared_4376_; uint8_t v_isSharedCheck_4380_; 
v_a_4373_ = lean_ctor_get(v___x_4351_, 0);
v_isSharedCheck_4380_ = !lean_is_exclusive(v___x_4351_);
if (v_isSharedCheck_4380_ == 0)
{
v___x_4375_ = v___x_4351_;
v_isShared_4376_ = v_isSharedCheck_4380_;
goto v_resetjp_4374_;
}
else
{
lean_inc(v_a_4373_);
lean_dec(v___x_4351_);
v___x_4375_ = lean_box(0);
v_isShared_4376_ = v_isSharedCheck_4380_;
goto v_resetjp_4374_;
}
v_resetjp_4374_:
{
lean_object* v___x_4378_; 
if (v_isShared_4376_ == 0)
{
v___x_4378_ = v___x_4375_;
goto v_reusejp_4377_;
}
else
{
lean_object* v_reuseFailAlloc_4379_; 
v_reuseFailAlloc_4379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4379_, 0, v_a_4373_);
v___x_4378_ = v_reuseFailAlloc_4379_;
goto v_reusejp_4377_;
}
v_reusejp_4377_:
{
return v___x_4378_;
}
}
}
}
else
{
lean_object* v_a_4381_; lean_object* v___x_4383_; uint8_t v_isShared_4384_; uint8_t v_isSharedCheck_4388_; 
v_a_4381_ = lean_ctor_get(v___x_4349_, 0);
v_isSharedCheck_4388_ = !lean_is_exclusive(v___x_4349_);
if (v_isSharedCheck_4388_ == 0)
{
v___x_4383_ = v___x_4349_;
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
else
{
lean_inc(v_a_4381_);
lean_dec(v___x_4349_);
v___x_4383_ = lean_box(0);
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
v_resetjp_4382_:
{
lean_object* v___x_4386_; 
if (v_isShared_4384_ == 0)
{
v___x_4386_ = v___x_4383_;
goto v_reusejp_4385_;
}
else
{
lean_object* v_reuseFailAlloc_4387_; 
v_reuseFailAlloc_4387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4387_, 0, v_a_4381_);
v___x_4386_ = v_reuseFailAlloc_4387_;
goto v_reusejp_4385_;
}
v_reusejp_4385_:
{
return v___x_4386_;
}
}
}
}
}
}
else
{
lean_object* v___x_4392_; lean_object* v_cmd_4393_; lean_object* v_args_4394_; lean_object* v_cwd_4395_; lean_object* v_env_4396_; uint8_t v_inheritEnv_4397_; uint8_t v_setsid_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4415_; 
v___x_4392_ = ((lean_object*)(l_IO_Process_output___closed__0));
v_cmd_4393_ = lean_ctor_get(v_args_4285_, 1);
v_args_4394_ = lean_ctor_get(v_args_4285_, 2);
v_cwd_4395_ = lean_ctor_get(v_args_4285_, 3);
v_env_4396_ = lean_ctor_get(v_args_4285_, 4);
v_inheritEnv_4397_ = lean_ctor_get_uint8(v_args_4285_, sizeof(void*)*5);
v_setsid_4398_ = lean_ctor_get_uint8(v_args_4285_, sizeof(void*)*5 + 1);
v_isSharedCheck_4415_ = !lean_is_exclusive(v_args_4285_);
if (v_isSharedCheck_4415_ == 0)
{
lean_object* v_unused_4416_; 
v_unused_4416_ = lean_ctor_get(v_args_4285_, 0);
lean_dec(v_unused_4416_);
v___x_4400_ = v_args_4285_;
v_isShared_4401_ = v_isSharedCheck_4415_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_env_4396_);
lean_inc(v_cwd_4395_);
lean_inc(v_args_4394_);
lean_inc(v_cmd_4393_);
lean_dec(v_args_4285_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4415_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4403_; 
if (v_isShared_4401_ == 0)
{
lean_ctor_set(v___x_4400_, 0, v___x_4392_);
v___x_4403_ = v___x_4400_;
goto v_reusejp_4402_;
}
else
{
lean_object* v_reuseFailAlloc_4414_; 
v_reuseFailAlloc_4414_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_4414_, 0, v___x_4392_);
lean_ctor_set(v_reuseFailAlloc_4414_, 1, v_cmd_4393_);
lean_ctor_set(v_reuseFailAlloc_4414_, 2, v_args_4394_);
lean_ctor_set(v_reuseFailAlloc_4414_, 3, v_cwd_4395_);
lean_ctor_set(v_reuseFailAlloc_4414_, 4, v_env_4396_);
lean_ctor_set_uint8(v_reuseFailAlloc_4414_, sizeof(void*)*5, v_inheritEnv_4397_);
lean_ctor_set_uint8(v_reuseFailAlloc_4414_, sizeof(void*)*5 + 1, v_setsid_4398_);
v___x_4403_ = v_reuseFailAlloc_4414_;
goto v_reusejp_4402_;
}
v_reusejp_4402_:
{
lean_object* v___x_4404_; 
v___x_4404_ = lean_io_process_spawn(v___x_4403_);
if (lean_obj_tag(v___x_4404_) == 0)
{
lean_object* v_a_4405_; 
v_a_4405_ = lean_ctor_get(v___x_4404_, 0);
lean_inc(v_a_4405_);
lean_dec_ref_known(v___x_4404_, 1);
v_child_4289_ = v_a_4405_;
goto v___jp_4288_;
}
else
{
lean_object* v_a_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4413_; 
v_a_4406_ = lean_ctor_get(v___x_4404_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4404_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4408_ = v___x_4404_;
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_a_4406_);
lean_dec(v___x_4404_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v___x_4411_; 
if (v_isShared_4409_ == 0)
{
v___x_4411_ = v___x_4408_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_a_4406_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
return v___x_4411_;
}
}
}
}
}
}
v___jp_4288_:
{
lean_object* v_stdout_4290_; lean_object* v_stderr_4291_; lean_object* v___f_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; 
v_stdout_4290_ = lean_ctor_get(v_child_4289_, 1);
v_stderr_4291_ = lean_ctor_get(v_child_4289_, 2);
lean_inc(v_stdout_4290_);
v___f_4292_ = lean_alloc_closure((void*)(l_IO_Process_output___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4292_, 0, v_stdout_4290_);
v___x_4293_ = lean_unsigned_to_nat(9u);
v___x_4294_ = lean_io_as_task(v___f_4292_, v___x_4293_);
v___x_4295_ = l_IO_FS_Handle_readToEnd(v_stderr_4291_);
if (lean_obj_tag(v___x_4295_) == 0)
{
lean_object* v_a_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; 
v_a_4296_ = lean_ctor_get(v___x_4295_, 0);
lean_inc(v_a_4296_);
lean_dec_ref_known(v___x_4295_, 1);
v___x_4297_ = ((lean_object*)(l_IO_Process_output___closed__0));
v___x_4298_ = lean_io_process_child_wait(v___x_4297_, v_child_4289_);
lean_dec_ref(v_child_4289_);
if (lean_obj_tag(v___x_4298_) == 0)
{
lean_object* v_a_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; 
v_a_4299_ = lean_ctor_get(v___x_4298_, 0);
lean_inc(v_a_4299_);
lean_dec_ref_known(v___x_4298_, 1);
v___x_4300_ = lean_task_get_own(v___x_4294_);
v___x_4301_ = l_IO_ofExcept___at___00IO_Process_output_spec__0___redArg(v___x_4300_);
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_object* v_a_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4311_; 
v_a_4302_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4304_ = v___x_4301_;
v_isShared_4305_ = v_isSharedCheck_4311_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_a_4302_);
lean_dec(v___x_4301_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4311_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
lean_object* v___x_4306_; uint32_t v___x_4307_; lean_object* v___x_4309_; 
v___x_4306_ = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(v___x_4306_, 0, v_a_4302_);
lean_ctor_set(v___x_4306_, 1, v_a_4296_);
v___x_4307_ = lean_unbox_uint32(v_a_4299_);
lean_dec(v_a_4299_);
lean_ctor_set_uint32(v___x_4306_, sizeof(void*)*2, v___x_4307_);
if (v_isShared_4305_ == 0)
{
lean_ctor_set(v___x_4304_, 0, v___x_4306_);
v___x_4309_ = v___x_4304_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v___x_4306_);
v___x_4309_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
return v___x_4309_;
}
}
}
else
{
lean_object* v_a_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4319_; 
lean_dec(v_a_4299_);
lean_dec(v_a_4296_);
v_a_4312_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4319_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4319_ == 0)
{
v___x_4314_ = v___x_4301_;
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_a_4312_);
lean_dec(v___x_4301_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4319_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v___x_4317_; 
if (v_isShared_4315_ == 0)
{
v___x_4317_ = v___x_4314_;
goto v_reusejp_4316_;
}
else
{
lean_object* v_reuseFailAlloc_4318_; 
v_reuseFailAlloc_4318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4318_, 0, v_a_4312_);
v___x_4317_ = v_reuseFailAlloc_4318_;
goto v_reusejp_4316_;
}
v_reusejp_4316_:
{
return v___x_4317_;
}
}
}
}
else
{
lean_object* v_a_4320_; lean_object* v___x_4322_; uint8_t v_isShared_4323_; uint8_t v_isSharedCheck_4327_; 
lean_dec(v_a_4296_);
lean_dec_ref(v___x_4294_);
v_a_4320_ = lean_ctor_get(v___x_4298_, 0);
v_isSharedCheck_4327_ = !lean_is_exclusive(v___x_4298_);
if (v_isSharedCheck_4327_ == 0)
{
v___x_4322_ = v___x_4298_;
v_isShared_4323_ = v_isSharedCheck_4327_;
goto v_resetjp_4321_;
}
else
{
lean_inc(v_a_4320_);
lean_dec(v___x_4298_);
v___x_4322_ = lean_box(0);
v_isShared_4323_ = v_isSharedCheck_4327_;
goto v_resetjp_4321_;
}
v_resetjp_4321_:
{
lean_object* v___x_4325_; 
if (v_isShared_4323_ == 0)
{
v___x_4325_ = v___x_4322_;
goto v_reusejp_4324_;
}
else
{
lean_object* v_reuseFailAlloc_4326_; 
v_reuseFailAlloc_4326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4326_, 0, v_a_4320_);
v___x_4325_ = v_reuseFailAlloc_4326_;
goto v_reusejp_4324_;
}
v_reusejp_4324_:
{
return v___x_4325_;
}
}
}
}
else
{
lean_object* v_a_4328_; lean_object* v___x_4330_; uint8_t v_isShared_4331_; uint8_t v_isSharedCheck_4335_; 
lean_dec_ref(v___x_4294_);
lean_dec_ref(v_child_4289_);
v_a_4328_ = lean_ctor_get(v___x_4295_, 0);
v_isSharedCheck_4335_ = !lean_is_exclusive(v___x_4295_);
if (v_isSharedCheck_4335_ == 0)
{
v___x_4330_ = v___x_4295_;
v_isShared_4331_ = v_isSharedCheck_4335_;
goto v_resetjp_4329_;
}
else
{
lean_inc(v_a_4328_);
lean_dec(v___x_4295_);
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
}
LEAN_EXPORT lean_object* l_IO_Process_output___boxed(lean_object* v_args_4417_, lean_object* v_input_x3f_4418_, lean_object* v___y_4419_){
_start:
{
lean_object* v_res_4420_; 
v_res_4420_ = l_IO_Process_output(v_args_4417_, v_input_x3f_4418_);
lean_dec(v_input_x3f_4418_);
return v_res_4420_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_run(lean_object* v_args_4424_, lean_object* v_input_x3f_4425_){
_start:
{
lean_object* v___x_4427_; 
lean_inc_ref(v_args_4424_);
v___x_4427_ = l_IO_Process_output(v_args_4424_, v_input_x3f_4425_);
if (lean_obj_tag(v___x_4427_) == 0)
{
lean_object* v_a_4428_; lean_object* v___x_4430_; uint8_t v_isShared_4431_; uint8_t v_isSharedCheck_4455_; 
v_a_4428_ = lean_ctor_get(v___x_4427_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4427_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4430_ = v___x_4427_;
v_isShared_4431_ = v_isSharedCheck_4455_;
goto v_resetjp_4429_;
}
else
{
lean_inc(v_a_4428_);
lean_dec(v___x_4427_);
v___x_4430_ = lean_box(0);
v_isShared_4431_ = v_isSharedCheck_4455_;
goto v_resetjp_4429_;
}
v_resetjp_4429_:
{
uint32_t v_exitCode_4432_; lean_object* v_stdout_4433_; lean_object* v_stderr_4434_; uint32_t v___x_4435_; uint8_t v___x_4436_; 
v_exitCode_4432_ = lean_ctor_get_uint32(v_a_4428_, sizeof(void*)*2);
v_stdout_4433_ = lean_ctor_get(v_a_4428_, 0);
lean_inc_ref(v_stdout_4433_);
v_stderr_4434_ = lean_ctor_get(v_a_4428_, 1);
lean_inc_ref(v_stderr_4434_);
lean_dec(v_a_4428_);
v___x_4435_ = 0;
v___x_4436_ = lean_uint32_dec_eq(v_exitCode_4432_, v___x_4435_);
if (v___x_4436_ == 0)
{
lean_object* v_cmd_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4450_; 
lean_dec_ref(v_stdout_4433_);
v_cmd_4437_ = lean_ctor_get(v_args_4424_, 1);
lean_inc_ref(v_cmd_4437_);
lean_dec_ref(v_args_4424_);
v___x_4438_ = ((lean_object*)(l_IO_Process_run___closed__0));
v___x_4439_ = lean_string_append(v___x_4438_, v_cmd_4437_);
lean_dec_ref(v_cmd_4437_);
v___x_4440_ = ((lean_object*)(l_IO_Process_run___closed__1));
v___x_4441_ = lean_string_append(v___x_4439_, v___x_4440_);
v___x_4442_ = lean_uint32_to_nat(v_exitCode_4432_);
v___x_4443_ = l_Nat_reprFast(v___x_4442_);
v___x_4444_ = lean_string_append(v___x_4441_, v___x_4443_);
lean_dec_ref(v___x_4443_);
v___x_4445_ = ((lean_object*)(l_IO_Process_run___closed__2));
v___x_4446_ = lean_string_append(v___x_4444_, v___x_4445_);
v___x_4447_ = lean_string_append(v___x_4446_, v_stderr_4434_);
lean_dec_ref(v_stderr_4434_);
v___x_4448_ = lean_mk_io_user_error(v___x_4447_);
if (v_isShared_4431_ == 0)
{
lean_ctor_set_tag(v___x_4430_, 1);
lean_ctor_set(v___x_4430_, 0, v___x_4448_);
v___x_4450_ = v___x_4430_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v___x_4448_);
v___x_4450_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
return v___x_4450_;
}
}
else
{
lean_object* v___x_4453_; 
lean_dec_ref(v_stderr_4434_);
lean_dec_ref(v_args_4424_);
if (v_isShared_4431_ == 0)
{
lean_ctor_set(v___x_4430_, 0, v_stdout_4433_);
v___x_4453_ = v___x_4430_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v_stdout_4433_);
v___x_4453_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
return v___x_4453_;
}
}
}
}
else
{
lean_object* v_a_4456_; lean_object* v___x_4458_; uint8_t v_isShared_4459_; uint8_t v_isSharedCheck_4463_; 
lean_dec_ref(v_args_4424_);
v_a_4456_ = lean_ctor_get(v___x_4427_, 0);
v_isSharedCheck_4463_ = !lean_is_exclusive(v___x_4427_);
if (v_isSharedCheck_4463_ == 0)
{
v___x_4458_ = v___x_4427_;
v_isShared_4459_ = v_isSharedCheck_4463_;
goto v_resetjp_4457_;
}
else
{
lean_inc(v_a_4456_);
lean_dec(v___x_4427_);
v___x_4458_ = lean_box(0);
v_isShared_4459_ = v_isSharedCheck_4463_;
goto v_resetjp_4457_;
}
v_resetjp_4457_:
{
lean_object* v___x_4461_; 
if (v_isShared_4459_ == 0)
{
v___x_4461_ = v___x_4458_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v_a_4456_);
v___x_4461_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
return v___x_4461_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_Process_run___boxed(lean_object* v_args_4464_, lean_object* v_input_x3f_4465_, lean_object* v___y_4466_){
_start:
{
lean_object* v_res_4467_; 
v_res_4467_ = l_IO_Process_run(v_args_4464_, v_input_x3f_4465_);
lean_dec(v_input_x3f_4465_);
return v_res_4467_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_exit___boxed(lean_object* v_00_u03b1_4471_, lean_object* v_a_00___x40___internal___hyg_4472_, lean_object* v_a_00___x40___internal___hyg_4473_){
_start:
{
uint8_t v_a_00___x40___internal___hyg_1__boxed_4474_; lean_object* v_res_4475_; 
v_a_00___x40___internal___hyg_1__boxed_4474_ = lean_unbox(v_a_00___x40___internal___hyg_4472_);
v_res_4475_ = lean_io_exit(v_a_00___x40___internal___hyg_1__boxed_4474_);
return v_res_4475_;
}
}
LEAN_EXPORT lean_object* l_IO_Process_forceExit___boxed(lean_object* v_00_u03b1_4479_, lean_object* v_a_00___x40___internal___hyg_4480_, lean_object* v_a_00___x40___internal___hyg_4481_){
_start:
{
uint8_t v_a_00___x40___internal___hyg_1__boxed_4482_; lean_object* v_res_4483_; 
v_a_00___x40___internal___hyg_1__boxed_4482_ = lean_unbox(v_a_00___x40___internal___hyg_4480_);
v_res_4483_ = lean_io_force_exit(v_a_00___x40___internal___hyg_1__boxed_4482_);
return v_res_4483_;
}
}
LEAN_EXPORT lean_object* l_IO_getTID___boxed(lean_object* v_a_00___x40___internal___hyg_4485_){
_start:
{
uint64_t v_res_4486_; lean_object* v_r_4487_; 
v_res_4486_ = lean_io_get_tid();
v_r_4487_ = lean_box_uint64(v_res_4486_);
return v_r_4487_;
}
}
LEAN_EXPORT uint32_t l_IO_AccessRight_flags(lean_object* v_acc_4488_){
_start:
{
uint32_t v___y_4490_; uint32_t v___y_4491_; uint32_t v___y_4492_; uint8_t v_read_4495_; uint8_t v_write_4496_; uint8_t v_execution_4497_; uint32_t v___y_4499_; uint32_t v___y_4500_; uint32_t v___y_4504_; 
v_read_4495_ = lean_ctor_get_uint8(v_acc_4488_, 0);
v_write_4496_ = lean_ctor_get_uint8(v_acc_4488_, 1);
v_execution_4497_ = lean_ctor_get_uint8(v_acc_4488_, 2);
if (v_read_4495_ == 0)
{
uint32_t v___x_4507_; 
v___x_4507_ = 0;
v___y_4504_ = v___x_4507_;
goto v___jp_4503_;
}
else
{
uint32_t v___x_4508_; 
v___x_4508_ = 4;
v___y_4504_ = v___x_4508_;
goto v___jp_4503_;
}
v___jp_4489_:
{
uint32_t v___x_4493_; uint32_t v___x_4494_; 
v___x_4493_ = lean_uint32_lor(v___y_4490_, v___y_4492_);
v___x_4494_ = lean_uint32_lor(v___y_4491_, v___x_4493_);
return v___x_4494_;
}
v___jp_4498_:
{
if (v_execution_4497_ == 0)
{
uint32_t v___x_4501_; 
v___x_4501_ = 0;
v___y_4490_ = v___y_4500_;
v___y_4491_ = v___y_4499_;
v___y_4492_ = v___x_4501_;
goto v___jp_4489_;
}
else
{
uint32_t v___x_4502_; 
v___x_4502_ = 1;
v___y_4490_ = v___y_4500_;
v___y_4491_ = v___y_4499_;
v___y_4492_ = v___x_4502_;
goto v___jp_4489_;
}
}
v___jp_4503_:
{
if (v_write_4496_ == 0)
{
uint32_t v___x_4505_; 
v___x_4505_ = 0;
v___y_4499_ = v___y_4504_;
v___y_4500_ = v___x_4505_;
goto v___jp_4498_;
}
else
{
uint32_t v___x_4506_; 
v___x_4506_ = 2;
v___y_4499_ = v___y_4504_;
v___y_4500_ = v___x_4506_;
goto v___jp_4498_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_AccessRight_flags___boxed(lean_object* v_acc_4509_){
_start:
{
uint32_t v_res_4510_; lean_object* v_r_4511_; 
v_res_4510_ = l_IO_AccessRight_flags(v_acc_4509_);
lean_dec_ref(v_acc_4509_);
v_r_4511_ = lean_box_uint32(v_res_4510_);
return v_r_4511_;
}
}
LEAN_EXPORT uint32_t l_IO_FileRight_flags(lean_object* v_acc_4512_){
_start:
{
lean_object* v_user_4513_; lean_object* v_group_4514_; lean_object* v_other_4515_; uint32_t v___x_4516_; uint32_t v___x_4517_; uint32_t v_u_4518_; uint32_t v___x_4519_; uint32_t v___x_4520_; uint32_t v_g_4521_; uint32_t v_o_4522_; uint32_t v___x_4523_; uint32_t v___x_4524_; 
v_user_4513_ = lean_ctor_get(v_acc_4512_, 0);
v_group_4514_ = lean_ctor_get(v_acc_4512_, 1);
v_other_4515_ = lean_ctor_get(v_acc_4512_, 2);
v___x_4516_ = l_IO_AccessRight_flags(v_user_4513_);
v___x_4517_ = 6;
v_u_4518_ = lean_uint32_shift_left(v___x_4516_, v___x_4517_);
v___x_4519_ = l_IO_AccessRight_flags(v_group_4514_);
v___x_4520_ = 3;
v_g_4521_ = lean_uint32_shift_left(v___x_4519_, v___x_4520_);
v_o_4522_ = l_IO_AccessRight_flags(v_other_4515_);
v___x_4523_ = lean_uint32_lor(v_g_4521_, v_o_4522_);
v___x_4524_ = lean_uint32_lor(v_u_4518_, v___x_4523_);
return v___x_4524_;
}
}
LEAN_EXPORT lean_object* l_IO_FileRight_flags___boxed(lean_object* v_acc_4525_){
_start:
{
uint32_t v_res_4526_; lean_object* v_r_4527_; 
v_res_4526_ = l_IO_FileRight_flags(v_acc_4525_);
lean_dec_ref(v_acc_4525_);
v_r_4527_ = lean_box_uint32(v_res_4526_);
return v_r_4527_;
}
}
LEAN_EXPORT lean_object* l_IO_Prim_setAccessRights___boxed(lean_object* v_filename_4531_, lean_object* v_mode_4532_, lean_object* v_a_00___x40___internal___hyg_4533_){
_start:
{
uint32_t v_mode_boxed_4534_; lean_object* v_res_4535_; 
v_mode_boxed_4534_ = lean_unbox_uint32(v_mode_4532_);
lean_dec(v_mode_4532_);
v_res_4535_ = lean_chmod(v_filename_4531_, v_mode_boxed_4534_);
lean_dec_ref(v_filename_4531_);
return v_res_4535_;
}
}
LEAN_EXPORT lean_object* l_IO_setAccessRights(lean_object* v_filename_4536_, lean_object* v_mode_4537_){
_start:
{
uint32_t v___x_4539_; lean_object* v___x_4540_; 
v___x_4539_ = l_IO_FileRight_flags(v_mode_4537_);
v___x_4540_ = lean_chmod(v_filename_4536_, v___x_4539_);
return v___x_4540_;
}
}
LEAN_EXPORT lean_object* l_IO_setAccessRights___boxed(lean_object* v_filename_4541_, lean_object* v_mode_4542_, lean_object* v___y_4543_){
_start:
{
lean_object* v_res_4544_; 
v_res_4544_ = l_IO_setAccessRights(v_filename_4541_, v_mode_4542_);
lean_dec_ref(v_mode_4542_);
lean_dec_ref(v_filename_4541_);
return v_res_4544_;
}
}
LEAN_EXPORT lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0(lean_object* v_00_u03b1_4545_, lean_object* v_mx_4546_){
_start:
{
lean_object* v___x_4548_; 
v___x_4548_ = lean_apply_1(v_mx_4546_, lean_box(0));
return v___x_4548_;
}
}
LEAN_EXPORT lean_object* l_IO_instMonadLiftSTRealWorldBaseIO___lam__0___boxed(lean_object* v_00_u03b1_4549_, lean_object* v_mx_4550_, lean_object* v___y_4551_){
_start:
{
lean_object* v_res_4552_; 
v_res_4552_ = l_IO_instMonadLiftSTRealWorldBaseIO___lam__0(v_00_u03b1_4549_, v_mx_4550_);
return v_res_4552_;
}
}
LEAN_EXPORT lean_object* l_IO_mkRef___redArg(lean_object* v_a_4555_){
_start:
{
lean_object* v___x_4557_; 
v___x_4557_ = lean_st_mk_ref(v_a_4555_);
return v___x_4557_;
}
}
LEAN_EXPORT lean_object* l_IO_mkRef___redArg___boxed(lean_object* v_a_4558_, lean_object* v___y_4559_){
_start:
{
lean_object* v_res_4560_; 
v_res_4560_ = l_IO_mkRef___redArg(v_a_4558_);
return v_res_4560_;
}
}
LEAN_EXPORT lean_object* l_IO_mkRef(lean_object* v_00_u03b1_4561_, lean_object* v_a_4562_){
_start:
{
lean_object* v___x_4564_; 
v___x_4564_ = lean_st_mk_ref(v_a_4562_);
return v___x_4564_;
}
}
LEAN_EXPORT lean_object* l_IO_mkRef___boxed(lean_object* v_00_u03b1_4565_, lean_object* v_a_4566_, lean_object* v___y_4567_){
_start:
{
lean_object* v_res_4568_; 
v_res_4568_ = l_IO_mkRef(v_00_u03b1_4565_, v_a_4566_);
return v_res_4568_;
}
}
LEAN_EXPORT lean_object* lean_stream_of_handle(lean_object* v_h_4569_){
_start:
{
lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; 
lean_inc_n(v_h_4569_, 5);
v___x_4570_ = lean_alloc_closure((void*)(l_IO_FS_Handle_flush___boxed), 2, 1);
lean_closure_set(v___x_4570_, 0, v_h_4569_);
v___x_4571_ = lean_alloc_closure((void*)(l_IO_FS_Handle_read___boxed), 3, 1);
lean_closure_set(v___x_4571_, 0, v_h_4569_);
v___x_4572_ = lean_alloc_closure((void*)(l_IO_FS_Handle_write___boxed), 3, 1);
lean_closure_set(v___x_4572_, 0, v_h_4569_);
v___x_4573_ = lean_alloc_closure((void*)(l_IO_FS_Handle_getLine___boxed), 2, 1);
lean_closure_set(v___x_4573_, 0, v_h_4569_);
v___x_4574_ = lean_alloc_closure((void*)(l_IO_FS_Handle_putStr___boxed), 3, 1);
lean_closure_set(v___x_4574_, 0, v_h_4569_);
v___x_4575_ = lean_alloc_closure((void*)(l_IO_FS_Handle_isTty___boxed), 2, 1);
lean_closure_set(v___x_4575_, 0, v_h_4569_);
v___x_4576_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4576_, 0, v___x_4570_);
lean_ctor_set(v___x_4576_, 1, v___x_4571_);
lean_ctor_set(v___x_4576_, 2, v___x_4572_);
lean_ctor_set(v___x_4576_, 3, v___x_4573_);
lean_ctor_set(v___x_4576_, 4, v___x_4574_);
lean_ctor_set(v___x_4576_, 5, v___x_4575_);
return v___x_4576_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__0(lean_object* v_r_4577_, size_t v_n_4578_){
_start:
{
lean_object* v___x_4580_; lean_object* v_data_4581_; lean_object* v_pos_4582_; lean_object* v___x_4584_; uint8_t v_isShared_4585_; uint8_t v_isSharedCheck_4596_; 
v___x_4580_ = lean_st_ref_take(v_r_4577_);
v_data_4581_ = lean_ctor_get(v___x_4580_, 0);
v_pos_4582_ = lean_ctor_get(v___x_4580_, 1);
v_isSharedCheck_4596_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_4596_ == 0)
{
v___x_4584_ = v___x_4580_;
v_isShared_4585_ = v_isSharedCheck_4596_;
goto v_resetjp_4583_;
}
else
{
lean_inc(v_pos_4582_);
lean_inc(v_data_4581_);
lean_dec(v___x_4580_);
v___x_4584_ = lean_box(0);
v_isShared_4585_ = v_isSharedCheck_4596_;
goto v_resetjp_4583_;
}
v_resetjp_4583_:
{
lean_object* v___x_4586_; lean_object* v___x_4587_; lean_object* v_data_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4592_; 
v___x_4586_ = lean_usize_to_nat(v_n_4578_);
v___x_4587_ = lean_nat_add(v_pos_4582_, v___x_4586_);
lean_dec(v___x_4586_);
lean_inc(v_pos_4582_);
v_data_4588_ = l_ByteArray_extract(v_data_4581_, v_pos_4582_, v___x_4587_);
lean_dec(v___x_4587_);
v___x_4589_ = lean_byte_array_size(v_data_4588_);
v___x_4590_ = lean_nat_add(v_pos_4582_, v___x_4589_);
lean_dec(v_pos_4582_);
if (v_isShared_4585_ == 0)
{
lean_ctor_set(v___x_4584_, 1, v___x_4590_);
v___x_4592_ = v___x_4584_;
goto v_reusejp_4591_;
}
else
{
lean_object* v_reuseFailAlloc_4595_; 
v_reuseFailAlloc_4595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4595_, 0, v_data_4581_);
lean_ctor_set(v_reuseFailAlloc_4595_, 1, v___x_4590_);
v___x_4592_ = v_reuseFailAlloc_4595_;
goto v_reusejp_4591_;
}
v_reusejp_4591_:
{
lean_object* v___x_4593_; lean_object* v___x_4594_; 
v___x_4593_ = lean_st_ref_put(v_r_4577_, v___x_4592_);
v___x_4594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4594_, 0, v_data_4588_);
return v___x_4594_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__0___boxed(lean_object* v_r_4597_, lean_object* v_n_4598_, lean_object* v___y_4599_){
_start:
{
size_t v_n_boxed_4600_; lean_object* v_res_4601_; 
v_n_boxed_4600_ = lean_unbox_usize(v_n_4598_);
lean_dec(v_n_4598_);
v_res_4601_ = l_IO_FS_Stream_ofBuffer___lam__0(v_r_4597_, v_n_boxed_4600_);
lean_dec(v_r_4597_);
return v_res_4601_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__1(lean_object* v_r_4602_, lean_object* v_data_4603_){
_start:
{
lean_object* v___x_4605_; lean_object* v_data_4606_; lean_object* v_pos_4607_; lean_object* v___x_4609_; uint8_t v_isShared_4610_; uint8_t v_isSharedCheck_4621_; 
v___x_4605_ = lean_st_ref_take(v_r_4602_);
v_data_4606_ = lean_ctor_get(v___x_4605_, 0);
v_pos_4607_ = lean_ctor_get(v___x_4605_, 1);
v_isSharedCheck_4621_ = !lean_is_exclusive(v___x_4605_);
if (v_isSharedCheck_4621_ == 0)
{
v___x_4609_ = v___x_4605_;
v_isShared_4610_ = v_isSharedCheck_4621_;
goto v_resetjp_4608_;
}
else
{
lean_inc(v_pos_4607_);
lean_inc(v_data_4606_);
lean_dec(v___x_4605_);
v___x_4609_ = lean_box(0);
v_isShared_4610_ = v_isSharedCheck_4621_;
goto v_resetjp_4608_;
}
v_resetjp_4608_:
{
lean_object* v___x_4611_; lean_object* v___x_4612_; uint8_t v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4617_; 
v___x_4611_ = lean_unsigned_to_nat(0u);
v___x_4612_ = lean_byte_array_size(v_data_4603_);
v___x_4613_ = 0;
lean_inc(v_pos_4607_);
v___x_4614_ = lean_byte_array_copy_slice(v_data_4603_, v___x_4611_, v_data_4606_, v_pos_4607_, v___x_4612_, v___x_4613_);
v___x_4615_ = lean_nat_add(v_pos_4607_, v___x_4612_);
lean_dec(v_pos_4607_);
if (v_isShared_4610_ == 0)
{
lean_ctor_set(v___x_4609_, 1, v___x_4615_);
lean_ctor_set(v___x_4609_, 0, v___x_4614_);
v___x_4617_ = v___x_4609_;
goto v_reusejp_4616_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v___x_4614_);
lean_ctor_set(v_reuseFailAlloc_4620_, 1, v___x_4615_);
v___x_4617_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4616_;
}
v_reusejp_4616_:
{
lean_object* v___x_4618_; lean_object* v___x_4619_; 
v___x_4618_ = lean_st_ref_put(v_r_4602_, v___x_4617_);
v___x_4619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4619_, 0, v___x_4618_);
return v___x_4619_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__1___boxed(lean_object* v_r_4622_, lean_object* v_data_4623_, lean_object* v___y_4624_){
_start:
{
lean_object* v_res_4625_; 
v_res_4625_ = l_IO_FS_Stream_ofBuffer___lam__1(v_r_4622_, v_data_4623_);
lean_dec_ref(v_data_4623_);
lean_dec(v_r_4622_);
return v_res_4625_;
}
}
LEAN_EXPORT lean_object* l_ByteArray_findIdx_x3f_loop___at___00IO_FS_Stream_ofBuffer_spec__0(lean_object* v_a_4626_, lean_object* v_i_4627_){
_start:
{
lean_object* v___x_4628_; uint8_t v___x_4629_; 
v___x_4628_ = lean_byte_array_size(v_a_4626_);
v___x_4629_ = lean_nat_dec_lt(v_i_4627_, v___x_4628_);
if (v___x_4629_ == 0)
{
lean_object* v___x_4630_; 
lean_dec(v_i_4627_);
v___x_4630_ = lean_box(0);
return v___x_4630_;
}
else
{
uint8_t v___x_4631_; uint8_t v___x_4632_; uint8_t v___x_4633_; 
v___x_4631_ = lean_byte_array_fget(v_a_4626_, v_i_4627_);
v___x_4632_ = 0;
v___x_4633_ = lean_uint8_dec_eq(v___x_4631_, v___x_4632_);
if (v___x_4633_ == 0)
{
uint8_t v___x_4634_; uint8_t v___x_4635_; 
v___x_4634_ = 10;
v___x_4635_ = lean_uint8_dec_eq(v___x_4631_, v___x_4634_);
if (v___x_4635_ == 0)
{
lean_object* v___x_4636_; lean_object* v___x_4637_; 
v___x_4636_ = lean_unsigned_to_nat(1u);
v___x_4637_ = lean_nat_add(v_i_4627_, v___x_4636_);
lean_dec(v_i_4627_);
v_i_4627_ = v___x_4637_;
goto _start;
}
else
{
lean_object* v___x_4639_; 
v___x_4639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4639_, 0, v_i_4627_);
return v___x_4639_;
}
}
else
{
lean_object* v___x_4640_; 
v___x_4640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4640_, 0, v_i_4627_);
return v___x_4640_;
}
}
}
}
LEAN_EXPORT lean_object* l_ByteArray_findIdx_x3f_loop___at___00IO_FS_Stream_ofBuffer_spec__0___boxed(lean_object* v_a_4641_, lean_object* v_i_4642_){
_start:
{
lean_object* v_res_4643_; 
v_res_4643_ = l_ByteArray_findIdx_x3f_loop___at___00IO_FS_Stream_ofBuffer_spec__0(v_a_4641_, v_i_4642_);
lean_dec_ref(v_a_4641_);
return v_res_4643_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__2(lean_object* v_r_4647_){
_start:
{
lean_object* v___x_4649_; lean_object* v_data_4650_; lean_object* v_pos_4651_; lean_object* v___x_4653_; uint8_t v_isShared_4654_; uint8_t v_isSharedCheck_4675_; 
v___x_4649_ = lean_st_ref_take(v_r_4647_);
v_data_4650_ = lean_ctor_get(v___x_4649_, 0);
v_pos_4651_ = lean_ctor_get(v___x_4649_, 1);
v_isSharedCheck_4675_ = !lean_is_exclusive(v___x_4649_);
if (v_isSharedCheck_4675_ == 0)
{
v___x_4653_ = v___x_4649_;
v_isShared_4654_ = v_isSharedCheck_4675_;
goto v_resetjp_4652_;
}
else
{
lean_inc(v_pos_4651_);
lean_inc(v_data_4650_);
lean_dec(v___x_4649_);
v___x_4653_ = lean_box(0);
v_isShared_4654_ = v_isSharedCheck_4675_;
goto v_resetjp_4652_;
}
v_resetjp_4652_:
{
lean_object* v___y_4656_; lean_object* v___x_4667_; 
lean_inc(v_pos_4651_);
v___x_4667_ = l_ByteArray_findIdx_x3f_loop___at___00IO_FS_Stream_ofBuffer_spec__0(v_data_4650_, v_pos_4651_);
if (lean_obj_tag(v___x_4667_) == 0)
{
lean_object* v___x_4668_; 
v___x_4668_ = lean_byte_array_size(v_data_4650_);
v___y_4656_ = v___x_4668_;
goto v___jp_4655_;
}
else
{
lean_object* v_val_4669_; uint8_t v___x_4670_; uint8_t v___x_4671_; uint8_t v___x_4672_; 
v_val_4669_ = lean_ctor_get(v___x_4667_, 0);
lean_inc(v_val_4669_);
lean_dec_ref_known(v___x_4667_, 1);
v___x_4670_ = lean_byte_array_get(v_data_4650_, v_val_4669_);
v___x_4671_ = 0;
v___x_4672_ = lean_uint8_dec_eq(v___x_4670_, v___x_4671_);
if (v___x_4672_ == 0)
{
lean_object* v___x_4673_; lean_object* v___x_4674_; 
v___x_4673_ = lean_unsigned_to_nat(1u);
v___x_4674_ = lean_nat_add(v_val_4669_, v___x_4673_);
lean_dec(v_val_4669_);
v___y_4656_ = v___x_4674_;
goto v___jp_4655_;
}
else
{
v___y_4656_ = v_val_4669_;
goto v___jp_4655_;
}
}
v___jp_4655_:
{
lean_object* v___x_4657_; lean_object* v___x_4659_; 
v___x_4657_ = l_ByteArray_extract(v_data_4650_, v_pos_4651_, v___y_4656_);
if (v_isShared_4654_ == 0)
{
lean_ctor_set(v___x_4653_, 1, v___y_4656_);
v___x_4659_ = v___x_4653_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4666_; 
v_reuseFailAlloc_4666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4666_, 0, v_data_4650_);
lean_ctor_set(v_reuseFailAlloc_4666_, 1, v___y_4656_);
v___x_4659_ = v_reuseFailAlloc_4666_;
goto v_reusejp_4658_;
}
v_reusejp_4658_:
{
lean_object* v___x_4660_; uint8_t v___x_4661_; 
v___x_4660_ = lean_st_ref_put(v_r_4647_, v___x_4659_);
v___x_4661_ = lean_string_validate_utf8(v___x_4657_);
if (v___x_4661_ == 0)
{
lean_object* v___x_4662_; lean_object* v___x_4663_; 
lean_dec_ref(v___x_4657_);
v___x_4662_ = ((lean_object*)(l_IO_FS_Stream_ofBuffer___lam__2___closed__1));
v___x_4663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4663_, 0, v___x_4662_);
return v___x_4663_;
}
else
{
lean_object* v___x_4664_; lean_object* v___x_4665_; 
v___x_4664_ = lean_string_from_utf8_unchecked(v___x_4657_);
v___x_4665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4665_, 0, v___x_4664_);
return v___x_4665_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__2___boxed(lean_object* v_r_4676_, lean_object* v___y_4677_){
_start:
{
lean_object* v_res_4678_; 
v_res_4678_ = l_IO_FS_Stream_ofBuffer___lam__2(v_r_4676_);
lean_dec(v_r_4676_);
return v_res_4678_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__3(lean_object* v_r_4679_, lean_object* v_s_4680_){
_start:
{
lean_object* v___x_4682_; lean_object* v_data_4683_; lean_object* v_pos_4684_; lean_object* v___x_4686_; uint8_t v_isShared_4687_; uint8_t v_isSharedCheck_4699_; 
v___x_4682_ = lean_st_ref_take(v_r_4679_);
v_data_4683_ = lean_ctor_get(v___x_4682_, 0);
v_pos_4684_ = lean_ctor_get(v___x_4682_, 1);
v_isSharedCheck_4699_ = !lean_is_exclusive(v___x_4682_);
if (v_isSharedCheck_4699_ == 0)
{
v___x_4686_ = v___x_4682_;
v_isShared_4687_ = v_isSharedCheck_4699_;
goto v_resetjp_4685_;
}
else
{
lean_inc(v_pos_4684_);
lean_inc(v_data_4683_);
lean_dec(v___x_4682_);
v___x_4686_ = lean_box(0);
v_isShared_4687_ = v_isSharedCheck_4699_;
goto v_resetjp_4685_;
}
v_resetjp_4685_:
{
lean_object* v_data_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; uint8_t v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4695_; 
v_data_4688_ = lean_string_to_utf8(v_s_4680_);
v___x_4689_ = lean_unsigned_to_nat(0u);
v___x_4690_ = lean_byte_array_size(v_data_4688_);
v___x_4691_ = 0;
lean_inc(v_pos_4684_);
v___x_4692_ = lean_byte_array_copy_slice(v_data_4688_, v___x_4689_, v_data_4683_, v_pos_4684_, v___x_4690_, v___x_4691_);
lean_dec_ref(v_data_4688_);
v___x_4693_ = lean_nat_add(v_pos_4684_, v___x_4690_);
lean_dec(v_pos_4684_);
if (v_isShared_4687_ == 0)
{
lean_ctor_set(v___x_4686_, 1, v___x_4693_);
lean_ctor_set(v___x_4686_, 0, v___x_4692_);
v___x_4695_ = v___x_4686_;
goto v_reusejp_4694_;
}
else
{
lean_object* v_reuseFailAlloc_4698_; 
v_reuseFailAlloc_4698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4698_, 0, v___x_4692_);
lean_ctor_set(v_reuseFailAlloc_4698_, 1, v___x_4693_);
v___x_4695_ = v_reuseFailAlloc_4698_;
goto v_reusejp_4694_;
}
v_reusejp_4694_:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; 
v___x_4696_ = lean_st_ref_put(v_r_4679_, v___x_4695_);
v___x_4697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4697_, 0, v___x_4696_);
return v___x_4697_;
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__3___boxed(lean_object* v_r_4700_, lean_object* v_s_4701_, lean_object* v___y_4702_){
_start:
{
lean_object* v_res_4703_; 
v_res_4703_ = l_IO_FS_Stream_ofBuffer___lam__3(v_r_4700_, v_s_4701_);
lean_dec_ref(v_s_4701_);
lean_dec(v_r_4700_);
return v_res_4703_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__4(lean_object* v___x_4704_){
_start:
{
lean_object* v___x_4706_; 
v___x_4706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4706_, 0, v___x_4704_);
return v___x_4706_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer___lam__4___boxed(lean_object* v___x_4707_, lean_object* v___y_4708_){
_start:
{
lean_object* v_res_4709_; 
v_res_4709_ = l_IO_FS_Stream_ofBuffer___lam__4(v___x_4707_);
return v_res_4709_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_ofBuffer(lean_object* v_r_4712_){
_start:
{
lean_object* v___f_4713_; lean_object* v___f_4714_; lean_object* v___f_4715_; lean_object* v___f_4716_; lean_object* v___f_4717_; lean_object* v___f_4718_; lean_object* v___x_4719_; 
lean_inc_n(v_r_4712_, 3);
v___f_4713_ = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4713_, 0, v_r_4712_);
v___f_4714_ = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___lam__1___boxed), 3, 1);
lean_closure_set(v___f_4714_, 0, v_r_4712_);
v___f_4715_ = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___lam__2___boxed), 2, 1);
lean_closure_set(v___f_4715_, 0, v_r_4712_);
v___f_4716_ = lean_alloc_closure((void*)(l_IO_FS_Stream_ofBuffer___lam__3___boxed), 3, 1);
lean_closure_set(v___f_4716_, 0, v_r_4712_);
v___f_4717_ = ((lean_object*)(l_IO_FS_Stream_ofBuffer___closed__0));
v___f_4718_ = ((lean_object*)(l_IO_FS_instInhabitedStream_default___closed__5));
v___x_4719_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4719_, 0, v___f_4717_);
lean_ctor_set(v___x_4719_, 1, v___f_4713_);
lean_ctor_set(v___x_4719_, 2, v___f_4714_);
lean_ctor_set(v___x_4719_, 3, v___f_4715_);
lean_ctor_set(v___x_4719_, 4, v___f_4716_);
lean_ctor_set(v___x_4719_, 5, v___f_4718_);
return v___x_4719_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop(lean_object* v_s_4722_, lean_object* v_acc_4723_){
_start:
{
lean_object* v_read_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; 
v_read_4725_ = lean_ctor_get(v_s_4722_, 1);
v___x_4726_ = ((lean_object*)(l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop___boxed__const__1));
lean_inc_ref(v_read_4725_);
v___x_4727_ = lean_apply_2(v_read_4725_, v___x_4726_, lean_box(0));
if (lean_obj_tag(v___x_4727_) == 0)
{
lean_object* v_a_4728_; lean_object* v___x_4730_; uint8_t v_isShared_4731_; uint8_t v_isSharedCheck_4741_; 
v_a_4728_ = lean_ctor_get(v___x_4727_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4727_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4730_ = v___x_4727_;
v_isShared_4731_ = v_isSharedCheck_4741_;
goto v_resetjp_4729_;
}
else
{
lean_inc(v_a_4728_);
lean_dec(v___x_4727_);
v___x_4730_ = lean_box(0);
v_isShared_4731_ = v_isSharedCheck_4741_;
goto v_resetjp_4729_;
}
v_resetjp_4729_:
{
uint8_t v___x_4732_; 
v___x_4732_ = l_ByteArray_isEmpty(v_a_4728_);
if (v___x_4732_ == 0)
{
lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; 
lean_del_object(v___x_4730_);
v___x_4733_ = lean_unsigned_to_nat(0u);
v___x_4734_ = lean_byte_array_size(v_acc_4723_);
v___x_4735_ = lean_byte_array_size(v_a_4728_);
v___x_4736_ = lean_byte_array_copy_slice(v_a_4728_, v___x_4733_, v_acc_4723_, v___x_4734_, v___x_4735_, v___x_4732_);
lean_dec(v_a_4728_);
v_acc_4723_ = v___x_4736_;
goto _start;
}
else
{
lean_object* v___x_4739_; 
lean_dec(v_a_4728_);
lean_dec_ref(v_s_4722_);
if (v_isShared_4731_ == 0)
{
lean_ctor_set(v___x_4730_, 0, v_acc_4723_);
v___x_4739_ = v___x_4730_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v_acc_4723_);
v___x_4739_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
return v___x_4739_;
}
}
}
}
else
{
lean_dec_ref(v_acc_4723_);
lean_dec_ref(v_s_4722_);
return v___x_4727_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop___boxed(lean_object* v_s_4742_, lean_object* v_acc_4743_, lean_object* v___y_4744_){
_start:
{
lean_object* v_res_4745_; 
v_res_4745_ = l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop(v_s_4742_, v_acc_4743_);
return v_res_4745_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEndInto(lean_object* v_s_4746_, lean_object* v_buf_4747_){
_start:
{
lean_object* v___x_4749_; 
v___x_4749_ = l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop(v_s_4746_, v_buf_4747_);
return v___x_4749_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEndInto___boxed(lean_object* v_s_4750_, lean_object* v_buf_4751_, lean_object* v___y_4752_){
_start:
{
lean_object* v_res_4753_; 
v_res_4753_ = l_IO_FS_Stream_readBinToEndInto(v_s_4750_, v_buf_4751_);
return v_res_4753_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEnd(lean_object* v_s_4754_){
_start:
{
lean_object* v___x_4756_; lean_object* v___x_4757_; 
v___x_4756_ = l_ByteArray_empty;
v___x_4757_ = l___private_Init_System_IO_0__IO_FS_Stream_readBinToEndInto_loop(v_s_4754_, v___x_4756_);
return v___x_4757_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readBinToEnd___boxed(lean_object* v_s_4758_, lean_object* v___y_4759_){
_start:
{
lean_object* v_res_4760_; 
v_res_4760_ = l_IO_FS_Stream_readBinToEnd(v_s_4758_);
return v_res_4760_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readToEnd(lean_object* v_s_4764_){
_start:
{
lean_object* v___x_4766_; 
v___x_4766_ = l_IO_FS_Stream_readBinToEnd(v_s_4764_);
if (lean_obj_tag(v___x_4766_) == 0)
{
lean_object* v_a_4767_; lean_object* v___x_4769_; uint8_t v_isShared_4770_; uint8_t v_isSharedCheck_4780_; 
v_a_4767_ = lean_ctor_get(v___x_4766_, 0);
v_isSharedCheck_4780_ = !lean_is_exclusive(v___x_4766_);
if (v_isSharedCheck_4780_ == 0)
{
v___x_4769_ = v___x_4766_;
v_isShared_4770_ = v_isSharedCheck_4780_;
goto v_resetjp_4768_;
}
else
{
lean_inc(v_a_4767_);
lean_dec(v___x_4766_);
v___x_4769_ = lean_box(0);
v_isShared_4770_ = v_isSharedCheck_4780_;
goto v_resetjp_4768_;
}
v_resetjp_4768_:
{
uint8_t v___x_4771_; 
v___x_4771_ = lean_string_validate_utf8(v_a_4767_);
if (v___x_4771_ == 0)
{
lean_object* v___x_4772_; lean_object* v___x_4774_; 
lean_dec(v_a_4767_);
v___x_4772_ = ((lean_object*)(l_IO_FS_Stream_readToEnd___closed__1));
if (v_isShared_4770_ == 0)
{
lean_ctor_set_tag(v___x_4769_, 1);
lean_ctor_set(v___x_4769_, 0, v___x_4772_);
v___x_4774_ = v___x_4769_;
goto v_reusejp_4773_;
}
else
{
lean_object* v_reuseFailAlloc_4775_; 
v_reuseFailAlloc_4775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4775_, 0, v___x_4772_);
v___x_4774_ = v_reuseFailAlloc_4775_;
goto v_reusejp_4773_;
}
v_reusejp_4773_:
{
return v___x_4774_;
}
}
else
{
lean_object* v___x_4776_; lean_object* v___x_4778_; 
v___x_4776_ = lean_string_from_utf8_unchecked(v_a_4767_);
if (v_isShared_4770_ == 0)
{
lean_ctor_set(v___x_4769_, 0, v___x_4776_);
v___x_4778_ = v___x_4769_;
goto v_reusejp_4777_;
}
else
{
lean_object* v_reuseFailAlloc_4779_; 
v_reuseFailAlloc_4779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4779_, 0, v___x_4776_);
v___x_4778_ = v_reuseFailAlloc_4779_;
goto v_reusejp_4777_;
}
v_reusejp_4777_:
{
return v___x_4778_;
}
}
}
}
else
{
lean_object* v_a_4781_; lean_object* v___x_4783_; uint8_t v_isShared_4784_; uint8_t v_isSharedCheck_4788_; 
v_a_4781_ = lean_ctor_get(v___x_4766_, 0);
v_isSharedCheck_4788_ = !lean_is_exclusive(v___x_4766_);
if (v_isSharedCheck_4788_ == 0)
{
v___x_4783_ = v___x_4766_;
v_isShared_4784_ = v_isSharedCheck_4788_;
goto v_resetjp_4782_;
}
else
{
lean_inc(v_a_4781_);
lean_dec(v___x_4766_);
v___x_4783_ = lean_box(0);
v_isShared_4784_ = v_isSharedCheck_4788_;
goto v_resetjp_4782_;
}
v_resetjp_4782_:
{
lean_object* v___x_4786_; 
if (v_isShared_4784_ == 0)
{
v___x_4786_ = v___x_4783_;
goto v_reusejp_4785_;
}
else
{
lean_object* v_reuseFailAlloc_4787_; 
v_reuseFailAlloc_4787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4787_, 0, v_a_4781_);
v___x_4786_ = v_reuseFailAlloc_4787_;
goto v_reusejp_4785_;
}
v_reusejp_4785_:
{
return v___x_4786_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_readToEnd___boxed(lean_object* v_s_4789_, lean_object* v___y_4790_){
_start:
{
lean_object* v_res_4791_; 
v_res_4791_ = l_IO_FS_Stream_readToEnd(v_s_4789_);
return v_res_4791_;
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_lines_read(lean_object* v_s_4792_, lean_object* v_lines_4793_){
_start:
{
lean_object* v_getLine_4795_; lean_object* v___x_4796_; 
v_getLine_4795_ = lean_ctor_get(v_s_4792_, 3);
lean_inc_ref(v_getLine_4795_);
v___x_4796_ = lean_apply_1(v_getLine_4795_, lean_box(0));
if (lean_obj_tag(v___x_4796_) == 0)
{
lean_object* v_a_4797_; lean_object* v___x_4799_; uint8_t v_isShared_4800_; uint8_t v_isSharedCheck_4851_; 
v_a_4797_ = lean_ctor_get(v___x_4796_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v___x_4796_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4799_ = v___x_4796_;
v_isShared_4800_ = v_isSharedCheck_4851_;
goto v_resetjp_4798_;
}
else
{
lean_inc(v_a_4797_);
lean_dec(v___x_4796_);
v___x_4799_ = lean_box(0);
v_isShared_4800_ = v_isSharedCheck_4851_;
goto v_resetjp_4798_;
}
v_resetjp_4798_:
{
lean_object* v___y_4802_; lean_object* v___y_4806_; lean_object* v___y_4807_; lean_object* v___y_4808_; uint32_t v___y_4809_; uint32_t v___y_4817_; lean_object* v___x_4839_; lean_object* v___x_4840_; uint8_t v___x_4841_; 
v___x_4839_ = lean_string_utf8_byte_size(v_a_4797_);
v___x_4840_ = lean_unsigned_to_nat(0u);
v___x_4841_ = lean_nat_dec_eq(v___x_4839_, v___x_4840_);
if (v___x_4841_ == 0)
{
lean_object* v___x_4842_; lean_object* v___x_4843_; 
lean_inc(v_a_4797_);
v___x_4842_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4842_, 0, v_a_4797_);
lean_ctor_set(v___x_4842_, 1, v___x_4840_);
lean_ctor_set(v___x_4842_, 2, v___x_4839_);
v___x_4843_ = l_String_Slice_Pos_prev_x3f(v___x_4842_, v___x_4839_);
if (lean_obj_tag(v___x_4843_) == 0)
{
uint32_t v___x_4844_; 
lean_dec_ref_known(v___x_4842_, 3);
v___x_4844_ = 65;
v___y_4817_ = v___x_4844_;
goto v___jp_4816_;
}
else
{
lean_object* v_val_4845_; lean_object* v___x_4846_; 
v_val_4845_ = lean_ctor_get(v___x_4843_, 0);
lean_inc(v_val_4845_);
lean_dec_ref_known(v___x_4843_, 1);
v___x_4846_ = l_String_Slice_Pos_get_x3f(v___x_4842_, v_val_4845_);
lean_dec(v_val_4845_);
lean_dec_ref_known(v___x_4842_, 3);
if (lean_obj_tag(v___x_4846_) == 0)
{
uint32_t v___x_4847_; 
v___x_4847_ = 65;
v___y_4817_ = v___x_4847_;
goto v___jp_4816_;
}
else
{
lean_object* v_val_4848_; uint32_t v___x_4849_; 
v_val_4848_ = lean_ctor_get(v___x_4846_, 0);
lean_inc(v_val_4848_);
lean_dec_ref_known(v___x_4846_, 1);
v___x_4849_ = lean_unbox_uint32(v_val_4848_);
lean_dec(v_val_4848_);
v___y_4817_ = v___x_4849_;
goto v___jp_4816_;
}
}
}
else
{
lean_object* v___x_4850_; 
lean_del_object(v___x_4799_);
lean_dec(v_a_4797_);
lean_dec_ref(v_s_4792_);
v___x_4850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4850_, 0, v_lines_4793_);
return v___x_4850_;
}
v___jp_4801_:
{
lean_object* v___x_4803_; 
v___x_4803_ = lean_array_push(v_lines_4793_, v___y_4802_);
v_lines_4793_ = v___x_4803_;
goto _start;
}
v___jp_4805_:
{
uint32_t v___x_4810_; uint8_t v___x_4811_; 
v___x_4810_ = 13;
v___x_4811_ = lean_uint32_dec_eq(v___y_4809_, v___x_4810_);
if (v___x_4811_ == 0)
{
lean_dec(v___y_4807_);
lean_dec(v___y_4806_);
v___y_4802_ = v___y_4808_;
goto v___jp_4801_;
}
else
{
lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; 
v___x_4812_ = lean_string_utf8_byte_size(v___y_4808_);
lean_inc(v___y_4806_);
lean_inc_ref(v___y_4808_);
v___x_4813_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4813_, 0, v___y_4808_);
lean_ctor_set(v___x_4813_, 1, v___y_4806_);
lean_ctor_set(v___x_4813_, 2, v___x_4812_);
v___x_4814_ = l_String_Slice_Pos_prevn(v___x_4813_, v___x_4812_, v___y_4807_);
lean_dec_ref_known(v___x_4813_, 3);
v___x_4815_ = lean_string_utf8_extract_fast(v___y_4808_, v___y_4806_, v___x_4814_);
lean_dec(v___x_4814_);
lean_dec(v___y_4806_);
lean_dec_ref(v___y_4808_);
v___y_4802_ = v___x_4815_;
goto v___jp_4801_;
}
}
v___jp_4816_:
{
uint32_t v___x_4818_; uint8_t v___x_4819_; 
v___x_4818_ = 10;
v___x_4819_ = lean_uint32_dec_eq(v___y_4817_, v___x_4818_);
if (v___x_4819_ == 0)
{
lean_object* v___x_4820_; lean_object* v___x_4822_; 
lean_dec_ref(v_s_4792_);
v___x_4820_ = lean_array_push(v_lines_4793_, v_a_4797_);
if (v_isShared_4800_ == 0)
{
lean_ctor_set(v___x_4799_, 0, v___x_4820_);
v___x_4822_ = v___x_4799_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v___x_4820_);
v___x_4822_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
return v___x_4822_;
}
}
else
{
lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; 
lean_del_object(v___x_4799_);
v___x_4824_ = lean_unsigned_to_nat(1u);
v___x_4825_ = lean_unsigned_to_nat(0u);
v___x_4826_ = lean_string_utf8_byte_size(v_a_4797_);
lean_inc(v_a_4797_);
v___x_4827_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4827_, 0, v_a_4797_);
lean_ctor_set(v___x_4827_, 1, v___x_4825_);
lean_ctor_set(v___x_4827_, 2, v___x_4826_);
v___x_4828_ = l_String_Slice_Pos_prevn(v___x_4827_, v___x_4826_, v___x_4824_);
lean_dec_ref_known(v___x_4827_, 3);
v___x_4829_ = lean_string_utf8_extract_fast(v_a_4797_, v___x_4825_, v___x_4828_);
lean_dec(v___x_4828_);
lean_dec(v_a_4797_);
v___x_4830_ = lean_string_utf8_byte_size(v___x_4829_);
lean_inc_ref(v___x_4829_);
v___x_4831_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4831_, 0, v___x_4829_);
lean_ctor_set(v___x_4831_, 1, v___x_4825_);
lean_ctor_set(v___x_4831_, 2, v___x_4830_);
v___x_4832_ = l_String_Slice_Pos_prev_x3f(v___x_4831_, v___x_4830_);
if (lean_obj_tag(v___x_4832_) == 0)
{
uint32_t v___x_4833_; 
lean_dec_ref_known(v___x_4831_, 3);
v___x_4833_ = 65;
v___y_4806_ = v___x_4825_;
v___y_4807_ = v___x_4824_;
v___y_4808_ = v___x_4829_;
v___y_4809_ = v___x_4833_;
goto v___jp_4805_;
}
else
{
lean_object* v_val_4834_; lean_object* v___x_4835_; 
v_val_4834_ = lean_ctor_get(v___x_4832_, 0);
lean_inc(v_val_4834_);
lean_dec_ref_known(v___x_4832_, 1);
v___x_4835_ = l_String_Slice_Pos_get_x3f(v___x_4831_, v_val_4834_);
lean_dec(v_val_4834_);
lean_dec_ref_known(v___x_4831_, 3);
if (lean_obj_tag(v___x_4835_) == 0)
{
uint32_t v___x_4836_; 
v___x_4836_ = 65;
v___y_4806_ = v___x_4825_;
v___y_4807_ = v___x_4824_;
v___y_4808_ = v___x_4829_;
v___y_4809_ = v___x_4836_;
goto v___jp_4805_;
}
else
{
lean_object* v_val_4837_; uint32_t v___x_4838_; 
v_val_4837_ = lean_ctor_get(v___x_4835_, 0);
lean_inc(v_val_4837_);
lean_dec_ref_known(v___x_4835_, 1);
v___x_4838_ = lean_unbox_uint32(v_val_4837_);
lean_dec(v_val_4837_);
v___y_4806_ = v___x_4825_;
v___y_4807_ = v___x_4824_;
v___y_4808_ = v___x_4829_;
v___y_4809_ = v___x_4838_;
goto v___jp_4805_;
}
}
}
}
}
}
else
{
lean_object* v_a_4852_; lean_object* v___x_4854_; uint8_t v_isShared_4855_; uint8_t v_isSharedCheck_4859_; 
lean_dec_ref(v_lines_4793_);
lean_dec_ref(v_s_4792_);
v_a_4852_ = lean_ctor_get(v___x_4796_, 0);
v_isSharedCheck_4859_ = !lean_is_exclusive(v___x_4796_);
if (v_isSharedCheck_4859_ == 0)
{
v___x_4854_ = v___x_4796_;
v_isShared_4855_ = v_isSharedCheck_4859_;
goto v_resetjp_4853_;
}
else
{
lean_inc(v_a_4852_);
lean_dec(v___x_4796_);
v___x_4854_ = lean_box(0);
v_isShared_4855_ = v_isSharedCheck_4859_;
goto v_resetjp_4853_;
}
v_resetjp_4853_:
{
lean_object* v___x_4857_; 
if (v_isShared_4855_ == 0)
{
v___x_4857_ = v___x_4854_;
goto v_reusejp_4856_;
}
else
{
lean_object* v_reuseFailAlloc_4858_; 
v_reuseFailAlloc_4858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4858_, 0, v_a_4852_);
v___x_4857_ = v_reuseFailAlloc_4858_;
goto v_reusejp_4856_;
}
v_reusejp_4856_:
{
return v___x_4857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_System_IO_0__IO_FS_Stream_lines_read___boxed(lean_object* v_s_4860_, lean_object* v_lines_4861_, lean_object* v___y_4862_){
_start:
{
lean_object* v_res_4863_; 
v_res_4863_ = l___private_Init_System_IO_0__IO_FS_Stream_lines_read(v_s_4860_, v_lines_4861_);
return v_res_4863_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_lines(lean_object* v_s_4864_){
_start:
{
lean_object* v___x_4866_; lean_object* v___x_4867_; 
v___x_4866_ = ((lean_object*)(l_IO_FS_Handle_lines___closed__0));
v___x_4867_ = l___private_Init_System_IO_0__IO_FS_Stream_lines_read(v_s_4864_, v___x_4866_);
return v___x_4867_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_Stream_lines___boxed(lean_object* v_s_4868_, lean_object* v___y_4869_){
_start:
{
lean_object* v_res_4870_; 
v_res_4870_ = l_IO_FS_Stream_lines(v_s_4868_);
return v_res_4870_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__0(lean_object* v_bOut_4871_){
_start:
{
lean_object* v___x_4873_; 
v___x_4873_ = lean_st_ref_get(v_bOut_4871_);
return v___x_4873_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__0___boxed(lean_object* v_bOut_4874_, lean_object* v___y_4875_){
_start:
{
lean_object* v_res_4876_; 
v_res_4876_ = l_IO_FS_withIsolatedStreams___redArg___lam__0(v_bOut_4874_);
lean_dec(v_bOut_4874_);
return v_res_4876_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; 
v___x_4881_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__3));
v___x_4882_ = lean_unsigned_to_nat(46u);
v___x_4883_ = lean_unsigned_to_nat(193u);
v___x_4884_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__2));
v___x_4885_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__1));
v___x_4886_ = l_mkPanicMessageWithDecl(v___x_4885_, v___x_4884_, v___x_4883_, v___x_4882_, v___x_4881_);
return v___x_4886_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__1(lean_object* v_r_4887_, lean_object* v_toPure_4888_, lean_object* v_bOut_4889_){
_start:
{
lean_object* v___y_4891_; lean_object* v_data_4894_; uint8_t v___x_4895_; 
v_data_4894_ = lean_ctor_get(v_bOut_4889_, 0);
lean_inc_ref(v_data_4894_);
lean_dec_ref(v_bOut_4889_);
v___x_4895_ = lean_string_validate_utf8(v_data_4894_);
if (v___x_4895_ == 0)
{
lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; 
lean_dec_ref(v_data_4894_);
v___x_4896_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__0));
v___x_4897_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__4, &l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__4_once, _init_l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__4);
v___x_4898_ = l_panic___redArg(v___x_4896_, v___x_4897_);
v___y_4891_ = v___x_4898_;
goto v___jp_4890_;
}
else
{
lean_object* v___x_4899_; 
v___x_4899_ = lean_string_from_utf8_unchecked(v_data_4894_);
v___y_4891_ = v___x_4899_;
goto v___jp_4890_;
}
v___jp_4890_:
{
lean_object* v___x_4892_; lean_object* v___x_4893_; 
v___x_4892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4892_, 0, v___y_4891_);
lean_ctor_set(v___x_4892_, 1, v_r_4887_);
v___x_4893_ = lean_apply_2(v_toPure_4888_, lean_box(0), v___x_4892_);
return v___x_4893_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__2(lean_object* v_toPure_4900_, lean_object* v_inst_4901_, lean_object* v___f_4902_, lean_object* v_toBind_4903_, lean_object* v_r_4904_){
_start:
{
lean_object* v___f_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; 
v___f_4905_ = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___redArg___lam__1), 3, 2);
lean_closure_set(v___f_4905_, 0, v_r_4904_);
lean_closure_set(v___f_4905_, 1, v_toPure_4900_);
v___x_4906_ = lean_apply_2(v_inst_4901_, lean_box(0), v___f_4902_);
v___x_4907_ = lean_apply_4(v_toBind_4903_, lean_box(0), lean_box(0), v___x_4906_, v___f_4905_);
return v___x_4907_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__3(lean_object* v_toPure_4908_, lean_object* v_inst_4909_, lean_object* v_toBind_4910_, lean_object* v_bIn_4911_, lean_object* v_inst_4912_, lean_object* v_inst_4913_, uint8_t v_isolateStderr_4914_, lean_object* v_x_4915_, lean_object* v_bOut_4916_){
_start:
{
lean_object* v___f_4917_; lean_object* v___f_4918_; lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___y_4922_; 
lean_inc(v_bOut_4916_);
v___f_4917_ = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4917_, 0, v_bOut_4916_);
lean_inc(v_toBind_4910_);
lean_inc(v_inst_4909_);
v___f_4918_ = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___redArg___lam__2), 5, 4);
lean_closure_set(v___f_4918_, 0, v_toPure_4908_);
lean_closure_set(v___f_4918_, 1, v_inst_4909_);
lean_closure_set(v___f_4918_, 2, v___f_4917_);
lean_closure_set(v___f_4918_, 3, v_toBind_4910_);
v___x_4919_ = l_IO_FS_Stream_ofBuffer(v_bIn_4911_);
v___x_4920_ = l_IO_FS_Stream_ofBuffer(v_bOut_4916_);
if (v_isolateStderr_4914_ == 0)
{
v___y_4922_ = v_x_4915_;
goto v___jp_4921_;
}
else
{
lean_object* v___x_4926_; 
lean_inc_ref(v___x_4920_);
lean_inc(v_inst_4909_);
lean_inc(v_inst_4913_);
lean_inc_ref(v_inst_4912_);
v___x_4926_ = l_IO_withStderr___redArg(v_inst_4912_, v_inst_4913_, v_inst_4909_, v___x_4920_, v_x_4915_);
v___y_4922_ = v___x_4926_;
goto v___jp_4921_;
}
v___jp_4921_:
{
lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; 
lean_inc(v_inst_4909_);
lean_inc(v_inst_4913_);
lean_inc_ref(v_inst_4912_);
v___x_4923_ = l_IO_withStdout___redArg(v_inst_4912_, v_inst_4913_, v_inst_4909_, v___x_4920_, v___y_4922_);
v___x_4924_ = l_IO_withStdin___redArg(v_inst_4912_, v_inst_4913_, v_inst_4909_, v___x_4919_, v___x_4923_);
v___x_4925_ = lean_apply_4(v_toBind_4910_, lean_box(0), lean_box(0), v___x_4924_, v___f_4918_);
return v___x_4925_;
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__3___boxed(lean_object* v_toPure_4927_, lean_object* v_inst_4928_, lean_object* v_toBind_4929_, lean_object* v_bIn_4930_, lean_object* v_inst_4931_, lean_object* v_inst_4932_, lean_object* v_isolateStderr_4933_, lean_object* v_x_4934_, lean_object* v_bOut_4935_){
_start:
{
uint8_t v_isolateStderr_boxed_4936_; lean_object* v_res_4937_; 
v_isolateStderr_boxed_4936_ = lean_unbox(v_isolateStderr_4933_);
v_res_4937_ = l_IO_FS_withIsolatedStreams___redArg___lam__3(v_toPure_4927_, v_inst_4928_, v_toBind_4929_, v_bIn_4930_, v_inst_4931_, v_inst_4932_, v_isolateStderr_boxed_4936_, v_x_4934_, v_bOut_4935_);
return v_res_4937_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__4(lean_object* v_toPure_4938_, lean_object* v_inst_4939_, lean_object* v_toBind_4940_, lean_object* v_inst_4941_, lean_object* v_inst_4942_, uint8_t v_isolateStderr_4943_, lean_object* v_x_4944_, lean_object* v___x_4945_, lean_object* v_bIn_4946_){
_start:
{
lean_object* v___x_4947_; lean_object* v___f_4948_; lean_object* v___x_4949_; 
v___x_4947_ = lean_box(v_isolateStderr_4943_);
lean_inc(v_toBind_4940_);
v___f_4948_ = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_4948_, 0, v_toPure_4938_);
lean_closure_set(v___f_4948_, 1, v_inst_4939_);
lean_closure_set(v___f_4948_, 2, v_toBind_4940_);
lean_closure_set(v___f_4948_, 3, v_bIn_4946_);
lean_closure_set(v___f_4948_, 4, v_inst_4941_);
lean_closure_set(v___f_4948_, 5, v_inst_4942_);
lean_closure_set(v___f_4948_, 6, v___x_4947_);
lean_closure_set(v___f_4948_, 7, v_x_4944_);
v___x_4949_ = lean_apply_4(v_toBind_4940_, lean_box(0), lean_box(0), v___x_4945_, v___f_4948_);
return v___x_4949_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___lam__4___boxed(lean_object* v_toPure_4950_, lean_object* v_inst_4951_, lean_object* v_toBind_4952_, lean_object* v_inst_4953_, lean_object* v_inst_4954_, lean_object* v_isolateStderr_4955_, lean_object* v_x_4956_, lean_object* v___x_4957_, lean_object* v_bIn_4958_){
_start:
{
uint8_t v_isolateStderr_boxed_4959_; lean_object* v_res_4960_; 
v_isolateStderr_boxed_4959_ = lean_unbox(v_isolateStderr_4955_);
v_res_4960_ = l_IO_FS_withIsolatedStreams___redArg___lam__4(v_toPure_4950_, v_inst_4951_, v_toBind_4952_, v_inst_4953_, v_inst_4954_, v_isolateStderr_boxed_4959_, v_x_4956_, v___x_4957_, v_bIn_4958_);
return v_res_4960_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___redArg___closed__0(void){
_start:
{
lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; 
v___x_4961_ = lean_unsigned_to_nat(0u);
v___x_4962_ = l_ByteArray_empty;
v___x_4963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4963_, 0, v___x_4962_);
lean_ctor_set(v___x_4963_, 1, v___x_4961_);
return v___x_4963_;
}
}
static lean_object* _init_l_IO_FS_withIsolatedStreams___redArg___closed__1(void){
_start:
{
lean_object* v___x_4964_; lean_object* v___x_4965_; 
v___x_4964_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___redArg___closed__0, &l_IO_FS_withIsolatedStreams___redArg___closed__0_once, _init_l_IO_FS_withIsolatedStreams___redArg___closed__0);
v___x_4965_ = lean_alloc_closure((void*)(l_IO_mkRef___boxed), 3, 2);
lean_closure_set(v___x_4965_, 0, lean_box(0));
lean_closure_set(v___x_4965_, 1, v___x_4964_);
return v___x_4965_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg(lean_object* v_inst_4966_, lean_object* v_inst_4967_, lean_object* v_inst_4968_, lean_object* v_x_4969_, uint8_t v_isolateStderr_4970_){
_start:
{
lean_object* v_toApplicative_4971_; lean_object* v_toBind_4972_; lean_object* v_toPure_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___f_4977_; lean_object* v___x_4978_; 
v_toApplicative_4971_ = lean_ctor_get(v_inst_4966_, 0);
v_toBind_4972_ = lean_ctor_get(v_inst_4966_, 1);
lean_inc_n(v_toBind_4972_, 2);
v_toPure_4973_ = lean_ctor_get(v_toApplicative_4971_, 1);
lean_inc(v_toPure_4973_);
v___x_4974_ = lean_obj_once(&l_IO_FS_withIsolatedStreams___redArg___closed__1, &l_IO_FS_withIsolatedStreams___redArg___closed__1_once, _init_l_IO_FS_withIsolatedStreams___redArg___closed__1);
lean_inc(v_inst_4968_);
v___x_4975_ = lean_apply_2(v_inst_4968_, lean_box(0), v___x_4974_);
v___x_4976_ = lean_box(v_isolateStderr_4970_);
lean_inc(v___x_4975_);
v___f_4977_ = lean_alloc_closure((void*)(l_IO_FS_withIsolatedStreams___redArg___lam__4___boxed), 9, 8);
lean_closure_set(v___f_4977_, 0, v_toPure_4973_);
lean_closure_set(v___f_4977_, 1, v_inst_4968_);
lean_closure_set(v___f_4977_, 2, v_toBind_4972_);
lean_closure_set(v___f_4977_, 3, v_inst_4966_);
lean_closure_set(v___f_4977_, 4, v_inst_4967_);
lean_closure_set(v___f_4977_, 5, v___x_4976_);
lean_closure_set(v___f_4977_, 6, v_x_4969_);
lean_closure_set(v___f_4977_, 7, v___x_4975_);
v___x_4978_ = lean_apply_4(v_toBind_4972_, lean_box(0), lean_box(0), v___x_4975_, v___f_4977_);
return v___x_4978_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___redArg___boxed(lean_object* v_inst_4979_, lean_object* v_inst_4980_, lean_object* v_inst_4981_, lean_object* v_x_4982_, lean_object* v_isolateStderr_4983_){
_start:
{
uint8_t v_isolateStderr_boxed_4984_; lean_object* v_res_4985_; 
v_isolateStderr_boxed_4984_ = lean_unbox(v_isolateStderr_4983_);
v_res_4985_ = l_IO_FS_withIsolatedStreams___redArg(v_inst_4979_, v_inst_4980_, v_inst_4981_, v_x_4982_, v_isolateStderr_boxed_4984_);
return v_res_4985_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams(lean_object* v_m_4986_, lean_object* v_00_u03b1_4987_, lean_object* v_inst_4988_, lean_object* v_inst_4989_, lean_object* v_inst_4990_, lean_object* v_x_4991_, uint8_t v_isolateStderr_4992_){
_start:
{
lean_object* v___x_4993_; 
v___x_4993_ = l_IO_FS_withIsolatedStreams___redArg(v_inst_4988_, v_inst_4989_, v_inst_4990_, v_x_4991_, v_isolateStderr_4992_);
return v___x_4993_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withIsolatedStreams___boxed(lean_object* v_m_4994_, lean_object* v_00_u03b1_4995_, lean_object* v_inst_4996_, lean_object* v_inst_4997_, lean_object* v_inst_4998_, lean_object* v_x_4999_, lean_object* v_isolateStderr_5000_){
_start:
{
uint8_t v_isolateStderr_boxed_5001_; lean_object* v_res_5002_; 
v_isolateStderr_boxed_5001_ = lean_unbox(v_isolateStderr_5000_);
v_res_5002_ = l_IO_FS_withIsolatedStreams(v_m_4994_, v_00_u03b1_4995_, v_inst_4996_, v_inst_4997_, v_inst_4998_, v_x_4999_, v_isolateStderr_boxed_5001_);
return v_res_5002_;
}
}
static lean_object* _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9(void){
_start:
{
lean_object* v___x_5059_; lean_object* v___x_5060_; 
v___x_5059_ = ((lean_object*)(l_IO_FS_withIsolatedStreams___redArg___lam__1___closed__0));
v___x_5060_ = l_String_toRawSubstring_x27(v___x_5059_);
return v___x_5060_;
}
}
static lean_object* _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17(void){
_start:
{
lean_object* v___x_5075_; lean_object* v___x_5076_; 
v___x_5075_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__16));
v___x_5076_ = l_String_toRawSubstring_x27(v___x_5075_);
return v___x_5076_;
}
}
static lean_object* _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24(void){
_start:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; 
v___x_5089_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__18));
v___x_5090_ = l_String_toRawSubstring_x27(v___x_5089_);
return v___x_5090_;
}
}
static lean_object* _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31(void){
_start:
{
lean_object* v___x_5105_; lean_object* v___x_5106_; 
v___x_5105_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__30));
v___x_5106_ = l_String_toRawSubstring_x27(v___x_5105_);
return v___x_5106_;
}
}
LEAN_EXPORT lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1(lean_object* v_x_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_){
_start:
{
lean_object* v___x_5134_; uint8_t v___x_5135_; 
v___x_5134_ = ((lean_object*)(l_termPrintln_x21_____00__closed__1));
lean_inc(v_x_5131_);
v___x_5135_ = l_Lean_Syntax_isOfKind(v_x_5131_, v___x_5134_);
if (v___x_5135_ == 0)
{
lean_object* v___x_5136_; lean_object* v___x_5137_; 
lean_dec(v_x_5131_);
v___x_5136_ = lean_box(1);
v___x_5137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5137_, 0, v___x_5136_);
lean_ctor_set(v___x_5137_, 1, v___y_5133_);
return v___x_5137_;
}
else
{
lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; uint8_t v___x_5141_; 
v___x_5138_ = lean_unsigned_to_nat(1u);
v___x_5139_ = l_Lean_Syntax_getArg(v_x_5131_, v___x_5138_);
lean_dec(v_x_5131_);
v___x_5140_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__1));
lean_inc(v___x_5139_);
v___x_5141_ = l_Lean_Syntax_isOfKind(v___x_5139_, v___x_5140_);
if (v___x_5141_ == 0)
{
lean_object* v_quotContext_5142_; lean_object* v_currMacroScope_5143_; lean_object* v_ref_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; lean_object* v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; lean_object* v___x_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; lean_object* v___x_5159_; lean_object* v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; lean_object* v___x_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; 
v_quotContext_5142_ = lean_ctor_get(v___y_5132_, 1);
v_currMacroScope_5143_ = lean_ctor_get(v___y_5132_, 2);
v_ref_5144_ = lean_ctor_get(v___y_5132_, 5);
v___x_5145_ = l_Lean_SourceInfo_fromRef(v_ref_5144_, v___x_5141_);
v___x_5146_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3));
v___x_5147_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5));
v___x_5148_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__6));
lean_inc_n(v___x_5145_, 14);
v___x_5149_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5149_, 0, v___x_5145_);
lean_ctor_set(v___x_5149_, 1, v___x_5148_);
v___x_5150_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__8));
v___x_5151_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9);
v___x_5152_ = lean_box(0);
lean_inc_n(v_currMacroScope_5143_, 4);
lean_inc_n(v_quotContext_5142_, 4);
v___x_5153_ = l_Lean_addMacroScope(v_quotContext_5142_, v___x_5152_, v_currMacroScope_5143_);
v___x_5154_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__15));
v___x_5155_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5155_, 0, v___x_5145_);
lean_ctor_set(v___x_5155_, 1, v___x_5151_);
lean_ctor_set(v___x_5155_, 2, v___x_5153_);
lean_ctor_set(v___x_5155_, 3, v___x_5154_);
v___x_5156_ = l_Lean_Syntax_node1(v___x_5145_, v___x_5150_, v___x_5155_);
v___x_5157_ = l_Lean_Syntax_node2(v___x_5145_, v___x_5147_, v___x_5149_, v___x_5156_);
v___x_5158_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__16));
v___x_5159_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17);
v___x_5160_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__20));
v___x_5161_ = l_Lean_addMacroScope(v_quotContext_5142_, v___x_5160_, v_currMacroScope_5143_);
v___x_5162_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__22));
v___x_5163_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5163_, 0, v___x_5145_);
lean_ctor_set(v___x_5163_, 1, v___x_5159_);
lean_ctor_set(v___x_5163_, 2, v___x_5161_);
lean_ctor_set(v___x_5163_, 3, v___x_5162_);
v___x_5164_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__9));
v___x_5165_ = l_Lean_Syntax_node1(v___x_5145_, v___x_5164_, v___x_5139_);
v___x_5166_ = l_Lean_Syntax_node2(v___x_5145_, v___x_5158_, v___x_5163_, v___x_5165_);
v___x_5167_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__23));
v___x_5168_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5168_, 0, v___x_5145_);
lean_ctor_set(v___x_5168_, 1, v___x_5167_);
v___x_5169_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24);
v___x_5170_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__25));
v___x_5171_ = l_Lean_addMacroScope(v_quotContext_5142_, v___x_5170_, v_currMacroScope_5143_);
v___x_5172_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__29));
v___x_5173_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5173_, 0, v___x_5145_);
lean_ctor_set(v___x_5173_, 1, v___x_5169_);
lean_ctor_set(v___x_5173_, 2, v___x_5171_);
lean_ctor_set(v___x_5173_, 3, v___x_5172_);
v___x_5174_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31);
v___x_5175_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__32));
v___x_5176_ = l_Lean_addMacroScope(v_quotContext_5142_, v___x_5175_, v_currMacroScope_5143_);
v___x_5177_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__36));
v___x_5178_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5178_, 0, v___x_5145_);
lean_ctor_set(v___x_5178_, 1, v___x_5174_);
lean_ctor_set(v___x_5178_, 2, v___x_5176_);
lean_ctor_set(v___x_5178_, 3, v___x_5177_);
v___x_5179_ = l_Lean_Syntax_node1(v___x_5145_, v___x_5164_, v___x_5178_);
v___x_5180_ = l_Lean_Syntax_node2(v___x_5145_, v___x_5158_, v___x_5173_, v___x_5179_);
v___x_5181_ = l_Lean_Syntax_node1(v___x_5145_, v___x_5164_, v___x_5180_);
v___x_5182_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__37));
v___x_5183_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5183_, 0, v___x_5145_);
lean_ctor_set(v___x_5183_, 1, v___x_5182_);
v___x_5184_ = l_Lean_Syntax_node5(v___x_5145_, v___x_5146_, v___x_5157_, v___x_5166_, v___x_5168_, v___x_5181_, v___x_5183_);
v___x_5185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5185_, 0, v___x_5184_);
lean_ctor_set(v___x_5185_, 1, v___y_5133_);
return v___x_5185_;
}
else
{
lean_object* v_quotContext_5186_; lean_object* v_currMacroScope_5187_; lean_object* v_ref_5188_; uint8_t v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; lean_object* v___x_5205_; lean_object* v___x_5206_; lean_object* v___x_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; lean_object* v___x_5218_; lean_object* v___x_5219_; lean_object* v___x_5220_; lean_object* v___x_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; lean_object* v___x_5235_; lean_object* v___x_5236_; 
v_quotContext_5186_ = lean_ctor_get(v___y_5132_, 1);
v_currMacroScope_5187_ = lean_ctor_get(v___y_5132_, 2);
v_ref_5188_ = lean_ctor_get(v___y_5132_, 5);
v___x_5189_ = 0;
v___x_5190_ = l_Lean_SourceInfo_fromRef(v_ref_5188_, v___x_5189_);
v___x_5191_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__3));
v___x_5192_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__5));
v___x_5193_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__6));
lean_inc_n(v___x_5190_, 17);
v___x_5194_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5194_, 0, v___x_5190_);
lean_ctor_set(v___x_5194_, 1, v___x_5193_);
v___x_5195_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__8));
v___x_5196_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__9);
v___x_5197_ = lean_box(0);
lean_inc_n(v_currMacroScope_5187_, 4);
lean_inc_n(v_quotContext_5186_, 4);
v___x_5198_ = l_Lean_addMacroScope(v_quotContext_5186_, v___x_5197_, v_currMacroScope_5187_);
v___x_5199_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__15));
v___x_5200_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5200_, 0, v___x_5190_);
lean_ctor_set(v___x_5200_, 1, v___x_5196_);
lean_ctor_set(v___x_5200_, 2, v___x_5198_);
lean_ctor_set(v___x_5200_, 3, v___x_5199_);
v___x_5201_ = l_Lean_Syntax_node1(v___x_5190_, v___x_5195_, v___x_5200_);
v___x_5202_ = l_Lean_Syntax_node2(v___x_5190_, v___x_5192_, v___x_5194_, v___x_5201_);
v___x_5203_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__16));
v___x_5204_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__17);
v___x_5205_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__20));
v___x_5206_ = l_Lean_addMacroScope(v_quotContext_5186_, v___x_5205_, v_currMacroScope_5187_);
v___x_5207_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__22));
v___x_5208_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5208_, 0, v___x_5190_);
lean_ctor_set(v___x_5208_, 1, v___x_5204_);
lean_ctor_set(v___x_5208_, 2, v___x_5206_);
lean_ctor_set(v___x_5208_, 3, v___x_5207_);
v___x_5209_ = ((lean_object*)(l_IO_waitAny___auto__1___closed__9));
v___x_5210_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__39));
v___x_5211_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__41));
v___x_5212_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__42));
v___x_5213_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5213_, 0, v___x_5190_);
lean_ctor_set(v___x_5213_, 1, v___x_5212_);
v___x_5214_ = l_Lean_Syntax_node2(v___x_5190_, v___x_5211_, v___x_5213_, v___x_5139_);
v___x_5215_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__37));
v___x_5216_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5216_, 0, v___x_5190_);
lean_ctor_set(v___x_5216_, 1, v___x_5215_);
lean_inc_ref(v___x_5216_);
lean_inc(v___x_5202_);
v___x_5217_ = l_Lean_Syntax_node3(v___x_5190_, v___x_5210_, v___x_5202_, v___x_5214_, v___x_5216_);
v___x_5218_ = l_Lean_Syntax_node1(v___x_5190_, v___x_5209_, v___x_5217_);
v___x_5219_ = l_Lean_Syntax_node2(v___x_5190_, v___x_5203_, v___x_5208_, v___x_5218_);
v___x_5220_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__23));
v___x_5221_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5221_, 0, v___x_5190_);
lean_ctor_set(v___x_5221_, 1, v___x_5220_);
v___x_5222_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__24);
v___x_5223_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__25));
v___x_5224_ = l_Lean_addMacroScope(v_quotContext_5186_, v___x_5223_, v_currMacroScope_5187_);
v___x_5225_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__29));
v___x_5226_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5226_, 0, v___x_5190_);
lean_ctor_set(v___x_5226_, 1, v___x_5222_);
lean_ctor_set(v___x_5226_, 2, v___x_5224_);
lean_ctor_set(v___x_5226_, 3, v___x_5225_);
v___x_5227_ = lean_obj_once(&l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31, &l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31_once, _init_l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__31);
v___x_5228_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__32));
v___x_5229_ = l_Lean_addMacroScope(v_quotContext_5186_, v___x_5228_, v_currMacroScope_5187_);
v___x_5230_ = ((lean_object*)(l___aux__Init__System__IO______macroRules__termPrintln_x21______1___closed__36));
v___x_5231_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5231_, 0, v___x_5190_);
lean_ctor_set(v___x_5231_, 1, v___x_5227_);
lean_ctor_set(v___x_5231_, 2, v___x_5229_);
lean_ctor_set(v___x_5231_, 3, v___x_5230_);
v___x_5232_ = l_Lean_Syntax_node1(v___x_5190_, v___x_5209_, v___x_5231_);
v___x_5233_ = l_Lean_Syntax_node2(v___x_5190_, v___x_5203_, v___x_5226_, v___x_5232_);
v___x_5234_ = l_Lean_Syntax_node1(v___x_5190_, v___x_5209_, v___x_5233_);
v___x_5235_ = l_Lean_Syntax_node5(v___x_5190_, v___x_5191_, v___x_5202_, v___x_5219_, v___x_5221_, v___x_5234_, v___x_5216_);
v___x_5236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5236_, 0, v___x_5235_);
lean_ctor_set(v___x_5236_, 1, v___y_5133_);
return v___x_5236_;
}
}
}
}
LEAN_EXPORT lean_object* l___aux__Init__System__IO______macroRules__termPrintln_x21______1___boxed(lean_object* v_x_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_){
_start:
{
lean_object* v_res_5240_; 
v_res_5240_ = l___aux__Init__System__IO______macroRules__termPrintln_x21______1(v_x_5237_, v___y_5238_, v___y_5239_);
lean_dec_ref(v___y_5238_);
return v_res_5240_;
}
}
LEAN_EXPORT lean_object* l_Runtime_markMultiThreaded___boxed(lean_object* v_00_u03b1_5244_, lean_object* v_a_5245_, lean_object* v_a_00___x40___internal___hyg_5246_){
_start:
{
lean_object* v_res_5247_; 
v_res_5247_ = lean_runtime_mark_multi_threaded(v_a_5245_);
return v_res_5247_;
}
}
LEAN_EXPORT lean_object* l_Runtime_markPersistent___boxed(lean_object* v_00_u03b1_5251_, lean_object* v_a_5252_, lean_object* v_a_00___x40___internal___hyg_5253_){
_start:
{
lean_object* v_res_5254_; 
v_res_5254_ = lean_runtime_mark_persistent(v_a_5252_);
return v_res_5254_;
}
}
LEAN_EXPORT lean_object* l_Runtime_forget___boxed(lean_object* v_00_u03b1_5258_, lean_object* v_a_5259_, lean_object* v_a_00___x40___internal___hyg_5260_){
_start:
{
lean_object* v_res_5261_; 
v_res_5261_ = lean_runtime_forget(v_a_5259_);
return v_res_5261_;
}
}
LEAN_EXPORT lean_object* l_Runtime_hold___boxed(lean_object* v_00_u03b1_5265_, lean_object* v_a_5266_, lean_object* v_a_00___x40___internal___hyg_5267_){
_start:
{
lean_object* v_res_5268_; 
v_res_5268_ = lean_runtime_hold(v_a_5266_);
lean_dec(v_a_5266_);
return v_res_5268_;
}
}
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
lean_object* runtime_initialize_Init_System_IOError(uint8_t builtin);
lean_object* runtime_initialize_Init_System_FilePath(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Ord_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Function(uint8_t builtin);
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
res = runtime_initialize_Init_Data_Function(builtin);
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
lean_object* initialize_Init_Data_Function(uint8_t builtin);
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
res = initialize_Init_Data_Function(builtin);
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
