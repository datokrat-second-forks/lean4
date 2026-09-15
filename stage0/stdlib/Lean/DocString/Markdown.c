// Lean compiler output
// Module: Lean.DocString.Markdown
// Imports: public import Lean.DocString.Types public import Lean.DocString.Extension public import Lean.CoreM public import Init.Data.String.TakeDrop public import Init.Data.String.Search public import Init.Data.String.Length import Init.Data.ToString.Macro import Init.While
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_String_Slice_posLE(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Doc_Inline_empty___redArg();
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_NameMap_toArray___redArg(lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0 = (const lean_object*)&l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default = (const lean_object*)&l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_MarkdownM_instInhabitedInlineCtx = (const lean_object*)&l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[^"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0_value;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]:"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0(lean_object*, lean_object*);
static const lean_array_object l_Lean_Doc_MarkdownM_run_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Doc_MarkdownM_run_x27___closed__0 = (const lean_object*)&l_Lean_Doc_MarkdownM_run_x27___closed__0_value;
static const lean_string_object l_Lean_Doc_MarkdownM_run_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Doc_MarkdownM_run_x27___closed__1 = (const lean_object*)&l_Lean_Doc_MarkdownM_run_x27___closed__1_value;
static const lean_string_object l_Lean_Doc_MarkdownM_run_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l_Lean_Doc_MarkdownM_run_x27___closed__2 = (const lean_object*)&l_Lean_Doc_MarkdownM_run_x27___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Doc_MarkdownM_run_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_MarkdownM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_prefixLines(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_prefixListLines(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Doc_joinBlocks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Doc_joinBlocks___closed__0 = (const lean_object*)&l_Lean_Doc_joinBlocks___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_joinBlocks(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_joinBlocks___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "​"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_joinInlines(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_joinInlines___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineEmpty___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineEmpty___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_instMarkdownInlineEmpty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instMarkdownInlineEmpty___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instMarkdownInlineEmpty___closed__0 = (const lean_object*)&l_Lean_Doc_instMarkdownInlineEmpty___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instMarkdownInlineEmpty = (const lean_object*)&l_Lean_Doc_instMarkdownInlineEmpty___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_instMarkdownBlockEmpty___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_instMarkdownBlockEmpty___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg();
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty(lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg(lean_object*, uint32_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "*_`<[]{}()#"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__0_value;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3;
LEAN_EXPORT uint8_t l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0;
LEAN_EXPORT uint8_t l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "> -+. \t"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0_value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_codeBlockLines(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trim(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__4 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__4_value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3_value)} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__5 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3_value)} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6_value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__7 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__0_value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__1_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__8 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__8_value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__2_value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__5_value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__6_value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__7_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__9 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__9_value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__3_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__10 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__10_value;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12_value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__14 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__14_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__14_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "**"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__17 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__17_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__17_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__19 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__19_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "$$"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__20 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__20_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__21 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__21_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__22 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__22_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__22_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__23 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__23_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]("};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__24 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__24_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__25 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__25_value;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__26;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__27 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__27_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!["};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__28 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__28_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "* "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "  "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ". "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__0_value;
static const lean_array_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "> "};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1;
static lean_once_cell_t l_Lean_Doc_partMarkdown___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_partMarkdown___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Doc_instInhabitedMdRendererState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_instInhabitedMdRendererState_default___closed__0 = (const lean_object*)&l_Lean_Doc_instInhabitedMdRendererState_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instInhabitedMdRendererState_default = (const lean_object*)&l_Lean_Doc_instInhabitedMdRendererState_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instInhabitedMdRendererState = (const lean_object*)&l_Lean_Doc_instInhabitedMdRendererState_default___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__6_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "docInlineMdExt"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__6_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__6_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__6_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 166, 70, 241, 45, 192, 139, 120)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__8_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__8_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__8_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__9_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Doc_instInhabitedMdRendererState_default___closed__0_value)} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__9_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__9_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__10_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__7_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__9_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__8_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__10_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__10_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__11_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__10_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__11_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__11_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_docInlineMdExt;
static const lean_string_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "docBlockMdExt"};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(110, 223, 229, 192, 185, 199, 58, 226)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__9_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__8_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__2_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_docBlockMdExt;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinInlineMdRenderers;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinBlockMdRenderers;
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinInlineMdRenderer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinInlineMdRenderer___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinBlockMdRenderer(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinBlockMdRenderer___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_mdRendererHeartbeats;
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_withRendererFallback(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_withRendererFallback___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_instMarkdownInlineElabInline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instMarkdownInlineElabInline___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instMarkdownInlineElabInline___closed__0 = (const lean_object*)&l_Lean_Doc_instMarkdownInlineElabInline___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline;
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___closed__0 = (const lean_object*)&l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock;
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Doc_instToMarkdownVersoDocString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instToMarkdownVersoDocString___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString;
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Doc_instToMarkdownSnippet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instToMarkdownSnippet___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Doc_runMarkdown___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "<docstring>"};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__0 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__1;
static const lean_string_object l_Lean_Doc_runMarkdown___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__2 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Doc_runMarkdown___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__3 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Doc_runMarkdown___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__4 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Doc_runMarkdown___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__5 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__6;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__7;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__8;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__9;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__10;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__11;
static lean_once_cell_t l_Lean_Doc_runMarkdown___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_runMarkdown___redArg___closed__12;
static const lean_array_object l_Lean_Doc_runMarkdown___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__13 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__13_value;
static const lean_string_object l_Lean_Doc_runMarkdown___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "internal exception "};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__14 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__14_value;
static const lean_string_object l_Lean_Doc_runMarkdown___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__15 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__15_value;
static const lean_string_object l_Lean_Doc_runMarkdown___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " (unknown)"};
static const lean_object* l_Lean_Doc_runMarkdown___redArg___closed__16 = (const lean_object*)&l_Lean_Doc_runMarkdown___redArg___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0_value)} };
static const lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(lean_object* v_name_1_, lean_object* v_body_2_, lean_object* v___y_3_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_5_ = lean_st_ref_take(v___y_3_);
v___x_6_ = lean_box(0);
v___x_7_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7_, 0, v_name_1_);
lean_ctor_set(v___x_7_, 1, v_body_2_);
v___x_8_ = lean_array_push(v___x_5_, v___x_7_);
v___x_9_ = lean_st_ref_put(v___y_3_, v___x_8_);
v___x_10_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_6_);
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg___boxed(lean_object* v_name_11_, lean_object* v_body_12_, lean_object* v___y_13_, lean_object* v___y_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(v_name_11_, v_body_12_, v___y_13_);
lean_dec(v___y_13_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote(lean_object* v_name_16_, lean_object* v_body_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_){
_start:
{
lean_object* v___x_22_; 
v___x_22_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(v_name_16_, v_body_17_, v___y_18_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___boxed(lean_object* v_name_23_, lean_object* v_body_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote(v_name_23_, v_body_24_, v___y_25_, v___y_26_, v___y_27_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
lean_dec(v___y_25_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0(lean_object* v_a_36_, lean_object* v_a_37_){
_start:
{
if (lean_obj_tag(v_a_36_) == 0)
{
lean_object* v___x_38_; 
v___x_38_ = l_List_reverse___redArg(v_a_37_);
return v___x_38_;
}
else
{
lean_object* v_head_39_; lean_object* v_tail_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_55_; 
v_head_39_ = lean_ctor_get(v_a_36_, 0);
v_tail_40_ = lean_ctor_get(v_a_36_, 1);
v_isSharedCheck_55_ = !lean_is_exclusive(v_a_36_);
if (v_isSharedCheck_55_ == 0)
{
v___x_42_ = v_a_36_;
v_isShared_43_ = v_isSharedCheck_55_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_tail_40_);
lean_inc(v_head_39_);
lean_dec(v_a_36_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_55_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v_fst_44_; lean_object* v_snd_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_52_; 
v_fst_44_ = lean_ctor_get(v_head_39_, 0);
lean_inc(v_fst_44_);
v_snd_45_ = lean_ctor_get(v_head_39_, 1);
lean_inc(v_snd_45_);
lean_dec(v_head_39_);
v___x_46_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0));
v___x_47_ = lean_string_append(v___x_46_, v_fst_44_);
lean_dec(v_fst_44_);
v___x_48_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__1));
v___x_49_ = lean_string_append(v___x_47_, v___x_48_);
v___x_50_ = lean_string_append(v___x_49_, v_snd_45_);
lean_dec(v_snd_45_);
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 1, v_a_37_);
lean_ctor_set(v___x_42_, 0, v___x_50_);
v___x_52_ = v___x_42_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v___x_50_);
lean_ctor_set(v_reuseFailAlloc_54_, 1, v_a_37_);
v___x_52_ = v_reuseFailAlloc_54_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
v_a_36_ = v_tail_40_;
v_a_37_ = v___x_52_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_MarkdownM_run_x27(lean_object* v_act_60_, lean_object* v___y_61_, lean_object* v___y_62_){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_64_ = lean_unsigned_to_nat(0u);
v___x_65_ = ((lean_object*)(l_Lean_Doc_MarkdownM_run_x27___closed__0));
v___x_66_ = lean_st_mk_ref(v___x_65_);
lean_inc(v___y_62_);
lean_inc_ref(v___y_61_);
lean_inc(v___x_66_);
v___x_67_ = lean_apply_4(v_act_60_, v___x_66_, v___y_61_, v___y_62_, lean_box(0));
if (lean_obj_tag(v___x_67_) == 0)
{
lean_object* v_a_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_91_; 
v_a_68_ = lean_ctor_get(v___x_67_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_67_);
if (v_isSharedCheck_91_ == 0)
{
v___x_70_ = v___x_67_;
v_isShared_71_ = v_isSharedCheck_91_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_a_68_);
lean_dec(v___x_67_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_91_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_72_ = lean_st_ref_get(v___x_66_);
lean_dec(v___x_66_);
v___x_73_ = ((lean_object*)(l_Lean_Doc_MarkdownM_run_x27___closed__1));
v___x_74_ = lean_array_to_list(v_a_68_);
v___x_75_ = l_String_intercalate(v___x_73_, v___x_74_);
v___x_76_ = lean_array_get_size(v___x_72_);
v___x_77_ = lean_nat_dec_eq(v___x_76_, v___x_64_);
if (v___x_77_ == 0)
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_86_; 
v___x_78_ = lean_array_to_list(v___x_72_);
v___x_79_ = lean_box(0);
v___x_80_ = l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0(v___x_78_, v___x_79_);
v___x_81_ = ((lean_object*)(l_Lean_Doc_MarkdownM_run_x27___closed__2));
v___x_82_ = lean_string_append(v___x_75_, v___x_81_);
v___x_83_ = l_String_intercalate(v___x_81_, v___x_80_);
v___x_84_ = lean_string_append(v___x_82_, v___x_83_);
lean_dec_ref(v___x_83_);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v___x_84_);
v___x_86_ = v___x_70_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v___x_84_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
else
{
lean_object* v___x_89_; 
lean_dec(v___x_72_);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v___x_75_);
v___x_89_ = v___x_70_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_75_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec(v___x_66_);
v_a_92_ = lean_ctor_get(v___x_67_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_67_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_67_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_67_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_MarkdownM_run_x27___boxed(lean_object* v_act_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_Doc_MarkdownM_run_x27(v_act_100_, v___y_101_, v___y_102_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0(lean_object* v_s_105_, lean_object* v_pos_106_){
_start:
{
lean_object* v_str_107_; lean_object* v_startInclusive_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v_decide_112_; 
v_str_107_ = lean_ctor_get(v_s_105_, 0);
v_startInclusive_108_ = lean_ctor_get(v_s_105_, 1);
v___x_109_ = lean_nat_add(v_startInclusive_108_, v_pos_106_);
v___x_110_ = lean_nat_sub(v___x_109_, v_startInclusive_108_);
v___x_111_ = lean_unsigned_to_nat(0u);
v_decide_112_ = lean_nat_dec_eq(v___x_110_, v___x_111_);
if (v_decide_112_ == 0)
{
uint32_t v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; uint32_t v___x_119_; uint8_t v___x_120_; 
v___x_113_ = 32;
lean_inc(v_startInclusive_108_);
lean_inc_ref(v_str_107_);
v___x_114_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_114_, 0, v_str_107_);
lean_ctor_set(v___x_114_, 1, v_startInclusive_108_);
lean_ctor_set(v___x_114_, 2, v___x_109_);
v___x_115_ = lean_unsigned_to_nat(1u);
v___x_116_ = lean_nat_sub(v___x_110_, v___x_115_);
lean_dec(v___x_110_);
v___x_117_ = l_String_Slice_posLE(v___x_114_, v___x_116_);
lean_dec_ref_known(v___x_114_, 3);
v___x_118_ = lean_nat_add(v_startInclusive_108_, v___x_117_);
v___x_119_ = lean_string_utf8_get_fast(v_str_107_, v___x_118_);
lean_dec(v___x_118_);
v___x_120_ = lean_uint32_dec_eq(v___x_119_, v___x_113_);
if (v___x_120_ == 0)
{
lean_dec(v___x_117_);
return v_pos_106_;
}
else
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_nat_add(v___x_117_, v___x_115_);
v___x_122_ = lean_nat_dec_le(v___x_121_, v_pos_106_);
lean_dec(v___x_121_);
if (v___x_122_ == 0)
{
lean_dec(v___x_117_);
return v_pos_106_;
}
else
{
lean_dec(v_pos_106_);
v_pos_106_ = v___x_117_;
goto _start;
}
}
}
else
{
lean_dec(v___x_110_);
lean_dec(v___x_109_);
return v_pos_106_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0___boxed(lean_object* v_s_124_, lean_object* v_pos_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0(v_s_124_, v_pos_125_);
lean_dec_ref(v_s_124_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces(lean_object* v_s_127_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_128_ = lean_unsigned_to_nat(0u);
v___x_129_ = lean_string_utf8_byte_size(v_s_127_);
lean_inc_ref(v_s_127_);
v___x_130_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_130_, 0, v_s_127_);
lean_ctor_set(v___x_130_, 1, v___x_128_);
lean_ctor_set(v___x_130_, 2, v___x_129_);
v___x_131_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces_spec__0(v___x_130_, v___x_129_);
lean_dec_ref_known(v___x_130_, 3);
v___x_132_ = lean_string_utf8_extract_fast(v_s_127_, v___x_128_, v___x_131_);
lean_dec(v___x_131_);
lean_dec_ref(v_s_127_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0(lean_object* v_p_133_, lean_object* v_pTrim_134_, size_t v_sz_135_, size_t v_i_136_, lean_object* v_bs_137_){
_start:
{
uint8_t v___x_138_; 
v___x_138_ = lean_usize_dec_lt(v_i_136_, v_sz_135_);
if (v___x_138_ == 0)
{
lean_dec_ref(v_pTrim_134_);
lean_dec_ref(v_p_133_);
return v_bs_137_;
}
else
{
lean_object* v_v_139_; lean_object* v___x_140_; lean_object* v_bs_x27_141_; lean_object* v___y_143_; lean_object* v___x_148_; uint8_t v___x_149_; 
v_v_139_ = lean_array_uget(v_bs_137_, v_i_136_);
v___x_140_ = lean_unsigned_to_nat(0u);
v_bs_x27_141_ = lean_array_uset(v_bs_137_, v_i_136_, v___x_140_);
v___x_148_ = lean_string_utf8_byte_size(v_v_139_);
v___x_149_ = lean_nat_dec_eq(v___x_148_, v___x_140_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; 
lean_inc_ref(v_p_133_);
v___x_150_ = lean_string_append(v_p_133_, v_v_139_);
lean_dec(v_v_139_);
v___y_143_ = v___x_150_;
goto v___jp_142_;
}
else
{
lean_dec(v_v_139_);
lean_inc_ref(v_pTrim_134_);
v___y_143_ = v_pTrim_134_;
goto v___jp_142_;
}
v___jp_142_:
{
size_t v___x_144_; size_t v___x_145_; lean_object* v___x_146_; 
v___x_144_ = ((size_t)1ULL);
v___x_145_ = lean_usize_add(v_i_136_, v___x_144_);
v___x_146_ = lean_array_uset(v_bs_x27_141_, v_i_136_, v___y_143_);
v_i_136_ = v___x_145_;
v_bs_137_ = v___x_146_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0___boxed(lean_object* v_p_151_, lean_object* v_pTrim_152_, lean_object* v_sz_153_, lean_object* v_i_154_, lean_object* v_bs_155_){
_start:
{
size_t v_sz_boxed_156_; size_t v_i_boxed_157_; lean_object* v_res_158_; 
v_sz_boxed_156_ = lean_unbox_usize(v_sz_153_);
lean_dec(v_sz_153_);
v_i_boxed_157_ = lean_unbox_usize(v_i_154_);
lean_dec(v_i_154_);
v_res_158_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0(v_p_151_, v_pTrim_152_, v_sz_boxed_156_, v_i_boxed_157_, v_bs_155_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_prefixLines(lean_object* v_p_159_, lean_object* v_lines_160_){
_start:
{
lean_object* v_pTrim_161_; size_t v_sz_162_; size_t v___x_163_; lean_object* v___x_164_; 
lean_inc_ref(v_p_159_);
v_pTrim_161_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces(v_p_159_);
v_sz_162_ = lean_array_size(v_lines_160_);
v___x_163_ = ((size_t)0ULL);
v___x_164_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_prefixLines_spec__0(v_p_159_, v_pTrim_161_, v_sz_162_, v___x_163_, v_lines_160_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg(lean_object* v_rest_165_, lean_object* v_restTrim_166_, lean_object* v_head_167_, lean_object* v_headTrim_168_, size_t v_sz_169_, size_t v_i_170_, lean_object* v_bs_171_){
_start:
{
uint8_t v___x_172_; 
v___x_172_ = lean_usize_dec_lt(v_i_170_, v_sz_169_);
if (v___x_172_ == 0)
{
lean_dec_ref(v_headTrim_168_);
lean_dec_ref(v_head_167_);
lean_dec_ref(v_restTrim_166_);
lean_dec_ref(v_rest_165_);
return v_bs_171_;
}
else
{
lean_object* v_v_173_; lean_object* v___x_174_; lean_object* v_bs_x27_175_; lean_object* v___y_177_; lean_object* v_fst_183_; lean_object* v_snd_184_; lean_object* v___x_188_; uint8_t v___x_189_; 
v_v_173_ = lean_array_uget(v_bs_171_, v_i_170_);
v___x_174_ = lean_unsigned_to_nat(0u);
v_bs_x27_175_ = lean_array_uset(v_bs_171_, v_i_170_, v___x_174_);
v___x_188_ = lean_usize_to_nat(v_i_170_);
v___x_189_ = lean_nat_dec_eq(v___x_188_, v___x_174_);
lean_dec(v___x_188_);
if (v___x_189_ == 0)
{
lean_inc_ref(v_restTrim_166_);
lean_inc_ref(v_rest_165_);
v_fst_183_ = v_rest_165_;
v_snd_184_ = v_restTrim_166_;
goto v___jp_182_;
}
else
{
lean_inc_ref(v_headTrim_168_);
lean_inc_ref(v_head_167_);
v_fst_183_ = v_head_167_;
v_snd_184_ = v_headTrim_168_;
goto v___jp_182_;
}
v___jp_176_:
{
size_t v___x_178_; size_t v___x_179_; lean_object* v___x_180_; 
v___x_178_ = ((size_t)1ULL);
v___x_179_ = lean_usize_add(v_i_170_, v___x_178_);
v___x_180_ = lean_array_uset(v_bs_x27_175_, v_i_170_, v___y_177_);
v_i_170_ = v___x_179_;
v_bs_171_ = v___x_180_;
goto _start;
}
v___jp_182_:
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = lean_string_utf8_byte_size(v_v_173_);
v___x_186_ = lean_nat_dec_eq(v___x_185_, v___x_174_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; 
lean_dec_ref(v_snd_184_);
v___x_187_ = lean_string_append(v_fst_183_, v_v_173_);
lean_dec(v_v_173_);
v___y_177_ = v___x_187_;
goto v___jp_176_;
}
else
{
lean_dec_ref(v_fst_183_);
lean_dec(v_v_173_);
v___y_177_ = v_snd_184_;
goto v___jp_176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg___boxed(lean_object* v_rest_190_, lean_object* v_restTrim_191_, lean_object* v_head_192_, lean_object* v_headTrim_193_, lean_object* v_sz_194_, lean_object* v_i_195_, lean_object* v_bs_196_){
_start:
{
size_t v_sz_boxed_197_; size_t v_i_boxed_198_; lean_object* v_res_199_; 
v_sz_boxed_197_ = lean_unbox_usize(v_sz_194_);
lean_dec(v_sz_194_);
v_i_boxed_198_ = lean_unbox_usize(v_i_195_);
lean_dec(v_i_195_);
v_res_199_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg(v_rest_190_, v_restTrim_191_, v_head_192_, v_headTrim_193_, v_sz_boxed_197_, v_i_boxed_198_, v_bs_196_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_prefixListLines(lean_object* v_head_200_, lean_object* v_rest_201_, lean_object* v_lines_202_){
_start:
{
lean_object* v_headTrim_203_; lean_object* v_restTrim_204_; size_t v_sz_205_; size_t v___x_206_; lean_object* v___x_207_; 
lean_inc_ref(v_head_200_);
v_headTrim_203_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces(v_head_200_);
lean_inc_ref(v_rest_201_);
v_restTrim_204_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimEndSpaces(v_rest_201_);
v_sz_205_ = lean_array_size(v_lines_202_);
v___x_206_ = ((size_t)0ULL);
v___x_207_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg(v_rest_201_, v_restTrim_204_, v_head_200_, v_headTrim_203_, v_sz_205_, v___x_206_, v_lines_202_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0(lean_object* v_rest_208_, lean_object* v_restTrim_209_, lean_object* v_head_210_, lean_object* v_headTrim_211_, lean_object* v_as_212_, size_t v_sz_213_, size_t v_i_214_, lean_object* v_bs_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___redArg(v_rest_208_, v_restTrim_209_, v_head_210_, v_headTrim_211_, v_sz_213_, v_i_214_, v_bs_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0___boxed(lean_object* v_rest_217_, lean_object* v_restTrim_218_, lean_object* v_head_219_, lean_object* v_headTrim_220_, lean_object* v_as_221_, lean_object* v_sz_222_, lean_object* v_i_223_, lean_object* v_bs_224_){
_start:
{
size_t v_sz_boxed_225_; size_t v_i_boxed_226_; lean_object* v_res_227_; 
v_sz_boxed_225_ = lean_unbox_usize(v_sz_222_);
lean_dec(v_sz_222_);
v_i_boxed_226_ = lean_unbox_usize(v_i_223_);
lean_dec(v_i_223_);
v_res_227_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Doc_prefixListLines_spec__0(v_rest_217_, v_restTrim_218_, v_head_219_, v_headTrim_220_, v_as_221_, v_sz_boxed_225_, v_i_boxed_226_, v_bs_224_);
lean_dec_ref(v_as_221_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0(lean_object* v_as_229_, size_t v_i_230_, size_t v_stop_231_, lean_object* v_b_232_){
_start:
{
lean_object* v___y_234_; uint8_t v___x_238_; 
v___x_238_ = lean_usize_dec_eq(v_i_230_, v_stop_231_);
if (v___x_238_ == 0)
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_239_ = lean_array_uget_borrowed(v_as_229_, v_i_230_);
v___x_240_ = lean_array_get_size(v___x_239_);
v___x_241_ = lean_unsigned_to_nat(0u);
v___x_242_ = lean_nat_dec_eq(v___x_240_, v___x_241_);
if (v___x_242_ == 0)
{
lean_object* v___x_243_; uint8_t v___x_244_; 
v___x_243_ = lean_array_get_size(v_b_232_);
v___x_244_ = lean_nat_dec_eq(v___x_243_, v___x_241_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_245_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_246_ = lean_array_push(v_b_232_, v___x_245_);
v___x_247_ = l_Array_append___redArg(v___x_246_, v___x_239_);
v___y_234_ = v___x_247_;
goto v___jp_233_;
}
else
{
lean_dec_ref(v_b_232_);
lean_inc(v___x_239_);
v___y_234_ = v___x_239_;
goto v___jp_233_;
}
}
else
{
v___y_234_ = v_b_232_;
goto v___jp_233_;
}
}
else
{
return v_b_232_;
}
v___jp_233_:
{
size_t v___x_235_; size_t v___x_236_; 
v___x_235_ = ((size_t)1ULL);
v___x_236_ = lean_usize_add(v_i_230_, v___x_235_);
v_i_230_ = v___x_236_;
v_b_232_ = v___y_234_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___boxed(lean_object* v_as_248_, lean_object* v_i_249_, lean_object* v_stop_250_, lean_object* v_b_251_){
_start:
{
size_t v_i_boxed_252_; size_t v_stop_boxed_253_; lean_object* v_res_254_; 
v_i_boxed_252_ = lean_unbox_usize(v_i_249_);
lean_dec(v_i_249_);
v_stop_boxed_253_ = lean_unbox_usize(v_stop_250_);
lean_dec(v_stop_250_);
v_res_254_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0(v_as_248_, v_i_boxed_252_, v_stop_boxed_253_, v_b_251_);
lean_dec_ref(v_as_248_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_joinBlocks(lean_object* v_blocks_257_){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_258_ = lean_unsigned_to_nat(0u);
v___x_259_ = ((lean_object*)(l_Lean_Doc_joinBlocks___closed__0));
v___x_260_ = lean_array_get_size(v_blocks_257_);
v___x_261_ = lean_nat_dec_lt(v___x_258_, v___x_260_);
if (v___x_261_ == 0)
{
return v___x_259_;
}
else
{
uint8_t v___x_262_; 
v___x_262_ = lean_nat_dec_le(v___x_260_, v___x_260_);
if (v___x_262_ == 0)
{
if (v___x_261_ == 0)
{
return v___x_259_;
}
else
{
size_t v___x_263_; size_t v___x_264_; lean_object* v___x_265_; 
v___x_263_ = ((size_t)0ULL);
v___x_264_ = lean_usize_of_nat(v___x_260_);
v___x_265_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0(v_blocks_257_, v___x_263_, v___x_264_, v___x_259_);
return v___x_265_;
}
}
else
{
size_t v___x_266_; size_t v___x_267_; lean_object* v___x_268_; 
v___x_266_ = ((size_t)0ULL);
v___x_267_ = lean_usize_of_nat(v___x_260_);
v___x_268_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0(v_blocks_257_, v___x_266_, v___x_267_, v___x_259_);
return v___x_268_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_joinBlocks___boxed(lean_object* v_blocks_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_Doc_joinBlocks(v_blocks_269_);
lean_dec_ref(v_blocks_269_);
return v_res_270_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1));
v___x_274_ = lean_string_utf8_byte_size(v___x_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary(lean_object* v_l_275_, lean_object* v_r_276_){
_start:
{
uint8_t v___y_278_; uint8_t v___y_279_; lean_object* v___x_285_; uint8_t v___y_287_; lean_object* v___x_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v___x_285_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1));
v___x_293_ = lean_string_utf8_byte_size(v_l_275_);
v___x_294_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2, &l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2);
v___x_295_ = lean_nat_dec_le(v___x_294_, v___x_293_);
if (v___x_295_ == 0)
{
v___y_287_ = v___x_295_;
goto v___jp_286_;
}
else
{
lean_object* v___x_296_; lean_object* v___x_297_; uint8_t v___x_298_; 
v___x_296_ = lean_unsigned_to_nat(0u);
v___x_297_ = lean_nat_sub(v___x_293_, v___x_294_);
v___x_298_ = lean_string_memcmp(v_l_275_, v___x_285_, v___x_297_, v___x_296_, v___x_294_);
lean_dec(v___x_297_);
v___y_287_ = v___x_298_;
goto v___jp_286_;
}
v___jp_277_:
{
if (v___y_278_ == 0)
{
lean_object* v___x_280_; 
v___x_280_ = lean_string_append(v_l_275_, v_r_276_);
return v___x_280_;
}
else
{
if (v___y_279_ == 0)
{
lean_object* v___x_281_; 
v___x_281_ = lean_string_append(v_l_275_, v_r_276_);
return v___x_281_;
}
else
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_282_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__0));
v___x_283_ = lean_string_append(v_l_275_, v___x_282_);
v___x_284_ = lean_string_append(v___x_283_, v_r_276_);
return v___x_284_;
}
}
}
v___jp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; uint8_t v___x_290_; 
v___x_288_ = lean_string_utf8_byte_size(v_r_276_);
v___x_289_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2, &l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2);
v___x_290_ = lean_nat_dec_le(v___x_289_, v___x_288_);
if (v___x_290_ == 0)
{
v___y_278_ = v___y_287_;
v___y_279_ = v___x_290_;
goto v___jp_277_;
}
else
{
lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = lean_string_memcmp(v_r_276_, v___x_285_, v___x_291_, v___x_291_, v___x_289_);
v___y_278_ = v___y_287_;
v___y_279_ = v___x_292_;
goto v___jp_277_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___boxed(lean_object* v_l_299_, lean_object* v_r_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary(v_l_299_, v_r_300_);
lean_dec_ref(v_r_300_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0(lean_object* v_as_302_, size_t v_i_303_, size_t v_stop_304_, lean_object* v_b_305_){
_start:
{
lean_object* v___y_307_; uint8_t v___x_311_; 
v___x_311_ = lean_usize_dec_eq(v_i_303_, v_stop_304_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; uint8_t v___x_315_; 
v___x_312_ = lean_array_uget_borrowed(v_as_302_, v_i_303_);
v___x_313_ = lean_array_get_size(v___x_312_);
v___x_314_ = lean_unsigned_to_nat(0u);
v___x_315_ = lean_nat_dec_eq(v___x_313_, v___x_314_);
if (v___x_315_ == 0)
{
lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_316_ = lean_array_get_size(v_b_305_);
v___x_317_ = lean_nat_dec_eq(v___x_316_, v___x_314_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; lean_object* v_lastIdx_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v_glued_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_318_ = lean_unsigned_to_nat(1u);
v_lastIdx_319_ = lean_nat_sub(v___x_316_, v___x_318_);
v___x_320_ = lean_array_fget_borrowed(v_b_305_, v_lastIdx_319_);
v___x_321_ = lean_array_fget_borrowed(v___x_312_, v___x_314_);
lean_inc(v___x_320_);
v_glued_322_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary(v___x_320_, v___x_321_);
v___x_323_ = lean_array_fset(v_b_305_, v_lastIdx_319_, v_glued_322_);
lean_dec(v_lastIdx_319_);
v___x_324_ = l_Array_extract___redArg(v___x_312_, v___x_318_, v___x_313_);
v___x_325_ = l_Array_append___redArg(v___x_323_, v___x_324_);
lean_dec_ref(v___x_324_);
v___y_307_ = v___x_325_;
goto v___jp_306_;
}
else
{
lean_dec_ref(v_b_305_);
lean_inc(v___x_312_);
v___y_307_ = v___x_312_;
goto v___jp_306_;
}
}
else
{
v___y_307_ = v_b_305_;
goto v___jp_306_;
}
}
else
{
return v_b_305_;
}
v___jp_306_:
{
size_t v___x_308_; size_t v___x_309_; 
v___x_308_ = ((size_t)1ULL);
v___x_309_ = lean_usize_add(v_i_303_, v___x_308_);
v_i_303_ = v___x_309_;
v_b_305_ = v___y_307_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0___boxed(lean_object* v_as_326_, lean_object* v_i_327_, lean_object* v_stop_328_, lean_object* v_b_329_){
_start:
{
size_t v_i_boxed_330_; size_t v_stop_boxed_331_; lean_object* v_res_332_; 
v_i_boxed_330_ = lean_unbox_usize(v_i_327_);
lean_dec(v_i_327_);
v_stop_boxed_331_ = lean_unbox_usize(v_stop_328_);
lean_dec(v_stop_328_);
v_res_332_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0(v_as_326_, v_i_boxed_330_, v_stop_boxed_331_, v_b_329_);
lean_dec_ref(v_as_326_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_joinInlines(lean_object* v_parts_333_){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_334_ = lean_unsigned_to_nat(0u);
v___x_335_ = ((lean_object*)(l_Lean_Doc_joinBlocks___closed__0));
v___x_336_ = lean_array_get_size(v_parts_333_);
v___x_337_ = lean_nat_dec_lt(v___x_334_, v___x_336_);
if (v___x_337_ == 0)
{
return v___x_335_;
}
else
{
uint8_t v___x_338_; 
v___x_338_ = lean_nat_dec_le(v___x_336_, v___x_336_);
if (v___x_338_ == 0)
{
if (v___x_337_ == 0)
{
return v___x_335_;
}
else
{
size_t v___x_339_; size_t v___x_340_; lean_object* v___x_341_; 
v___x_339_ = ((size_t)0ULL);
v___x_340_ = lean_usize_of_nat(v___x_336_);
v___x_341_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0(v_parts_333_, v___x_339_, v___x_340_, v___x_335_);
return v___x_341_;
}
}
else
{
size_t v___x_342_; size_t v___x_343_; lean_object* v___x_344_; 
v___x_342_ = ((size_t)0ULL);
v___x_343_ = lean_usize_of_nat(v___x_336_);
v___x_344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinInlines_spec__0(v_parts_333_, v___x_342_, v___x_343_, v___x_335_);
return v___x_344_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_joinInlines___boxed(lean_object* v_parts_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_Doc_joinInlines(v_parts_345_);
lean_dec_ref(v_parts_345_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineEmpty___lam__0(lean_object* v_a_347_, uint8_t v_a_348_, lean_object* v_a_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineEmpty___lam__0___boxed(lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
uint8_t v_a_21__boxed_361_; lean_object* v_res_362_; 
v_a_21__boxed_361_ = lean_unbox(v_a_355_);
v_res_362_ = l_Lean_Doc_instMarkdownInlineEmpty___lam__0(v_a_354_, v_a_21__boxed_361_, v_a_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___y_357_);
lean_dec_ref(v_a_356_);
lean_dec_ref(v_a_354_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0(lean_object* v_a_365_, lean_object* v_a_366_, uint8_t v_a_367_, lean_object* v_a_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0___boxed(lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
uint8_t v_a_43__boxed_381_; lean_object* v_res_382_; 
v_a_43__boxed_381_ = lean_unbox(v_a_375_);
v_res_382_ = l_Lean_Doc_instMarkdownBlockEmpty___redArg___lam__0(v_a_373_, v_a_374_, v_a_43__boxed_381_, v_a_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v_a_376_);
lean_dec_ref(v_a_374_);
lean_dec_ref(v_a_373_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg(){
_start:
{
lean_object* v___f_385_; 
v___f_385_ = ((lean_object*)(l_Lean_Doc_instMarkdownBlockEmpty___redArg___closed__0));
return v___f_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty___redArg___boxed(lean_object* v___dummy_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lean_Doc_instMarkdownBlockEmpty___redArg();
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockEmpty(lean_object* v_i_388_){
_start:
{
lean_object* v___f_389_; 
v___f_389_ = ((lean_object*)(l_Lean_Doc_instMarkdownBlockEmpty___redArg___closed__0));
return v___f_389_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1(lean_object* v_x_390_, lean_object* v_x_391_){
_start:
{
if (lean_obj_tag(v_x_390_) == 0)
{
if (lean_obj_tag(v_x_391_) == 0)
{
uint8_t v___x_392_; 
v___x_392_ = 1;
return v___x_392_;
}
else
{
uint8_t v___x_393_; 
v___x_393_ = 0;
return v___x_393_;
}
}
else
{
if (lean_obj_tag(v_x_391_) == 0)
{
uint8_t v___x_394_; 
v___x_394_ = 0;
return v___x_394_;
}
else
{
lean_object* v_val_395_; lean_object* v_val_396_; uint32_t v___x_397_; uint32_t v___x_398_; uint8_t v___x_399_; 
v_val_395_ = lean_ctor_get(v_x_390_, 0);
v_val_396_ = lean_ctor_get(v_x_391_, 0);
v___x_397_ = lean_unbox_uint32(v_val_395_);
v___x_398_ = lean_unbox_uint32(v_val_396_);
v___x_399_ = lean_uint32_dec_eq(v___x_397_, v___x_398_);
return v___x_399_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1___boxed(lean_object* v_x_400_, lean_object* v_x_401_){
_start:
{
uint8_t v_res_402_; lean_object* v_r_403_; 
v_res_402_ = l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1(v_x_400_, v_x_401_);
lean_dec(v_x_401_);
lean_dec(v_x_400_);
v_r_403_ = lean_box(v_res_402_);
return v_r_403_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg(lean_object* v_s_404_, uint32_t v_c_405_, lean_object* v_a_406_, uint8_t v_b_407_){
_start:
{
lean_object* v_str_408_; lean_object* v_startInclusive_409_; lean_object* v_endExclusive_410_; lean_object* v___x_411_; uint8_t v_decide_412_; 
v_str_408_ = lean_ctor_get(v_s_404_, 0);
v_startInclusive_409_ = lean_ctor_get(v_s_404_, 1);
v_endExclusive_410_ = lean_ctor_get(v_s_404_, 2);
v___x_411_ = lean_nat_sub(v_endExclusive_410_, v_startInclusive_409_);
v_decide_412_ = lean_nat_dec_eq(v_a_406_, v___x_411_);
lean_dec(v___x_411_);
if (v_decide_412_ == 0)
{
lean_object* v___x_413_; uint32_t v___x_414_; uint8_t v___x_415_; 
v___x_413_ = lean_nat_add(v_startInclusive_409_, v_a_406_);
lean_dec(v_a_406_);
v___x_414_ = lean_string_utf8_get_fast(v_str_408_, v___x_413_);
v___x_415_ = lean_uint32_dec_eq(v___x_414_, v_c_405_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = lean_string_utf8_next_fast(v_str_408_, v___x_413_);
lean_dec(v___x_413_);
v___x_417_ = lean_nat_sub(v___x_416_, v_startInclusive_409_);
v_a_406_ = v___x_417_;
v_b_407_ = v___x_415_;
goto _start;
}
else
{
lean_dec(v___x_413_);
return v___x_415_;
}
}
else
{
lean_dec(v_a_406_);
return v_b_407_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg___boxed(lean_object* v_s_419_, lean_object* v_c_420_, lean_object* v_a_421_, lean_object* v_b_422_){
_start:
{
uint32_t v_c_boxed_423_; uint8_t v_b_boxed_424_; uint8_t v_res_425_; lean_object* v_r_426_; 
v_c_boxed_423_ = lean_unbox_uint32(v_c_420_);
lean_dec(v_c_420_);
v_b_boxed_424_ = lean_unbox(v_b_422_);
v_res_425_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg(v_s_419_, v_c_boxed_423_, v_a_421_, v_b_boxed_424_);
lean_dec_ref(v_s_419_);
v_r_426_ = lean_box(v_res_425_);
return v_r_426_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0(uint32_t v_c_427_, lean_object* v_s_428_){
_start:
{
lean_object* v_searcher_429_; uint8_t v___x_430_; uint8_t v___x_431_; 
v_searcher_429_ = lean_unsigned_to_nat(0u);
v___x_430_ = 0;
v___x_431_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg(v_s_428_, v_c_427_, v_searcher_429_, v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0___boxed(lean_object* v_c_432_, lean_object* v_s_433_){
_start:
{
uint32_t v_c_boxed_434_; uint8_t v_res_435_; lean_object* v_r_436_; 
v_c_boxed_434_ = lean_unbox_uint32(v_c_432_);
lean_dec(v_c_432_);
v_res_435_ = l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0(v_c_boxed_434_, v_s_433_);
lean_dec_ref(v_s_433_);
v_r_436_ = lean_box(v_res_435_);
return v_r_436_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__0));
v___x_439_ = lean_string_utf8_byte_size(v___x_438_);
return v___x_439_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2(void){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_440_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__1);
v___x_441_ = lean_unsigned_to_nat(0u);
v___x_442_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__0));
v___x_443_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
lean_ctor_set(v___x_443_, 1, v___x_441_);
lean_ctor_set(v___x_443_, 2, v___x_440_);
return v___x_443_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1(void){
_start:
{
uint32_t v___x_444_; lean_object* v___x_445_; 
v___x_444_ = 91;
v___x_445_ = lean_box_uint32(v___x_444_);
return v___x_445_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1;
v___x_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial(uint32_t v_c_448_, lean_object* v_next_x3f_449_){
_start:
{
uint32_t v___x_450_; uint8_t v___x_451_; 
v___x_450_ = 33;
v___x_451_ = lean_uint32_dec_eq(v_c_448_, v___x_450_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_452_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2, &l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__2);
v___x_453_ = l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0(v_c_448_, v___x_452_);
return v___x_453_;
}
else
{
lean_object* v___x_454_; uint8_t v___x_455_; 
v___x_454_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3, &l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3);
v___x_455_ = l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1(v_next_x3f_449_, v___x_454_);
return v___x_455_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___boxed(lean_object* v_c_456_, lean_object* v_next_x3f_457_){
_start:
{
uint32_t v_c_boxed_458_; uint8_t v_res_459_; lean_object* v_r_460_; 
v_c_boxed_458_ = lean_unbox_uint32(v_c_456_);
lean_dec(v_c_456_);
v_res_459_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial(v_c_boxed_458_, v_next_x3f_457_);
lean_dec(v_next_x3f_457_);
v_r_460_ = lean_box(v_res_459_);
return v_r_460_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0(lean_object* v_s_461_, uint32_t v_c_462_, lean_object* v_inst_463_, lean_object* v_R_464_, lean_object* v_a_465_, uint8_t v_b_466_, lean_object* v_c_467_){
_start:
{
uint8_t v___x_468_; 
v___x_468_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___redArg(v_s_461_, v_c_462_, v_a_465_, v_b_466_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0___boxed(lean_object* v_s_469_, lean_object* v_c_470_, lean_object* v_inst_471_, lean_object* v_R_472_, lean_object* v_a_473_, lean_object* v_b_474_, lean_object* v_c_475_){
_start:
{
uint32_t v_c_boxed_476_; uint8_t v_b_boxed_477_; uint8_t v_res_478_; lean_object* v_r_479_; 
v_c_boxed_476_ = lean_unbox_uint32(v_c_470_);
lean_dec(v_c_470_);
v_b_boxed_477_ = lean_unbox(v_b_474_);
v_res_478_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0_spec__0(v_s_469_, v_c_boxed_476_, v_inst_471_, v_R_472_, v_a_473_, v_b_boxed_477_, v_c_475_);
lean_dec_ref(v_s_469_);
v_r_479_ = lean_box(v_res_478_);
return v_r_479_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_480_; lean_object* v___x_481_; 
v___x_480_ = 32;
v___x_481_ = lean_box_uint32(v___x_480_);
return v___x_481_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1;
v___x_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
return v___x_483_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial(lean_object* v_prev_x3f_484_, uint32_t v_c_485_, lean_object* v_next_x3f_486_){
_start:
{
uint8_t v___y_488_; lean_object* v___x_505_; uint8_t v___x_506_; 
v___x_505_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0);
v___x_506_ = l_Option_instBEq_beq___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__1(v_next_x3f_486_, v___x_505_);
if (v___x_506_ == 0)
{
if (lean_obj_tag(v_next_x3f_486_) == 0)
{
uint8_t v___x_507_; 
v___x_507_ = 1;
v___y_488_ = v___x_507_;
goto v___jp_487_;
}
else
{
v___y_488_ = v___x_506_;
goto v___jp_487_;
}
}
else
{
v___y_488_ = v___x_506_;
goto v___jp_487_;
}
v___jp_487_:
{
uint32_t v___x_489_; uint8_t v___x_490_; 
v___x_489_ = 62;
v___x_490_ = lean_uint32_dec_eq(v_c_485_, v___x_489_);
if (v___x_490_ == 0)
{
uint32_t v___x_491_; uint8_t v___x_492_; 
v___x_491_ = 45;
v___x_492_ = lean_uint32_dec_eq(v_c_485_, v___x_491_);
if (v___x_492_ == 0)
{
uint32_t v___x_493_; uint8_t v___x_494_; 
v___x_493_ = 43;
v___x_494_ = lean_uint32_dec_eq(v_c_485_, v___x_493_);
if (v___x_494_ == 0)
{
uint32_t v___x_495_; uint8_t v___x_496_; 
v___x_495_ = 46;
v___x_496_ = lean_uint32_dec_eq(v_c_485_, v___x_495_);
if (v___x_496_ == 0)
{
uint8_t v___x_497_; 
v___x_497_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial(v_c_485_, v_next_x3f_486_);
return v___x_497_;
}
else
{
if (lean_obj_tag(v_prev_x3f_484_) == 0)
{
return v___x_494_;
}
else
{
lean_object* v_val_498_; uint32_t v___x_499_; uint32_t v___x_500_; uint8_t v___x_501_; 
v_val_498_ = lean_ctor_get(v_prev_x3f_484_, 0);
v___x_499_ = 48;
v___x_500_ = lean_unbox_uint32(v_val_498_);
v___x_501_ = lean_uint32_dec_le(v___x_499_, v___x_500_);
if (v___x_501_ == 0)
{
return v___x_501_;
}
else
{
uint32_t v___x_502_; uint32_t v___x_503_; uint8_t v___x_504_; 
v___x_502_ = 57;
v___x_503_ = lean_unbox_uint32(v_val_498_);
v___x_504_ = lean_uint32_dec_le(v___x_503_, v___x_502_);
if (v___x_504_ == 0)
{
return v___x_504_;
}
else
{
return v___y_488_;
}
}
}
}
}
else
{
return v___y_488_;
}
}
else
{
return v___y_488_;
}
}
else
{
return v___x_490_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___boxed(lean_object* v_prev_x3f_508_, lean_object* v_c_509_, lean_object* v_next_x3f_510_){
_start:
{
uint32_t v_c_boxed_511_; uint8_t v_res_512_; lean_object* v_r_513_; 
v_c_boxed_511_ = lean_unbox_uint32(v_c_509_);
lean_dec(v_c_509_);
v_res_512_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial(v_prev_x3f_508_, v_c_boxed_511_, v_next_x3f_510_);
lean_dec(v_next_x3f_510_);
lean_dec(v_prev_x3f_508_);
v_r_513_ = lean_box(v_res_512_);
return v_r_513_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__0));
v___x_516_ = lean_string_utf8_byte_size(v___x_515_);
return v___x_516_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_517_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__1);
v___x_518_ = lean_unsigned_to_nat(0u);
v___x_519_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__0));
v___x_520_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
lean_ctor_set(v___x_520_, 1, v___x_518_);
lean_ctor_set(v___x_520_, 2, v___x_517_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0(uint32_t v___x_521_, lean_object* v___x_522_, lean_object* v_____r_523_, lean_object* v_s_x27_524_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; uint32_t v___x_538_; uint8_t v___x_539_; 
v___x_525_ = lean_string_push(v_s_x27_524_, v___x_521_);
v___x_526_ = lean_box_uint32(v___x_521_);
v___x_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
v___x_538_ = 48;
v___x_539_ = lean_uint32_dec_le(v___x_538_, v___x_521_);
if (v___x_539_ == 0)
{
goto v___jp_532_;
}
else
{
uint32_t v___x_540_; uint8_t v___x_541_; 
v___x_540_ = 57;
v___x_541_ = lean_uint32_dec_le(v___x_521_, v___x_540_);
if (v___x_541_ == 0)
{
goto v___jp_532_;
}
else
{
goto v___jp_528_;
}
}
v___jp_528_:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_529_, 0, v___x_522_);
lean_ctor_set(v___x_529_, 1, v___x_527_);
v___x_530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_530_, 0, v___x_525_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v___x_530_);
return v___x_531_;
}
v___jp_532_:
{
lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_533_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___closed__2);
v___x_534_ = l_String_Slice_contains___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial_spec__0(v___x_521_, v___x_533_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v___x_522_);
lean_ctor_set(v___x_535_, 1, v___x_527_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v___x_525_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
return v___x_537_;
}
else
{
goto v___jp_528_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___boxed(lean_object* v___x_542_, lean_object* v___x_543_, lean_object* v_____r_544_, lean_object* v_s_x27_545_){
_start:
{
uint32_t v___x_2058__boxed_546_; lean_object* v_res_547_; 
v___x_2058__boxed_546_ = lean_unbox_uint32(v___x_542_);
lean_dec(v___x_542_);
v_res_547_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0(v___x_2058__boxed_546_, v___x_543_, v_____r_544_, v_s_x27_545_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg(lean_object* v_s_548_, lean_object* v_a_549_){
_start:
{
lean_object* v___y_551_; lean_object* v_snd_555_; lean_object* v_fst_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_594_; 
v_snd_555_ = lean_ctor_get(v_a_549_, 1);
v_fst_556_ = lean_ctor_get(v_a_549_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v_a_549_);
if (v_isSharedCheck_594_ == 0)
{
v___x_558_ = v_a_549_;
v_isShared_559_ = v_isSharedCheck_594_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_snd_555_);
lean_inc(v_fst_556_);
lean_dec(v_a_549_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_594_;
goto v_resetjp_557_;
}
v___jp_550_:
{
if (lean_obj_tag(v___y_551_) == 0)
{
lean_object* v_a_552_; 
v_a_552_ = lean_ctor_get(v___y_551_, 0);
lean_inc(v_a_552_);
lean_dec_ref_known(v___y_551_, 1);
return v_a_552_;
}
else
{
lean_object* v_a_553_; 
v_a_553_ = lean_ctor_get(v___y_551_, 0);
lean_inc(v_a_553_);
lean_dec_ref_known(v___y_551_, 1);
v_a_549_ = v_a_553_;
goto _start;
}
}
v_resetjp_557_:
{
lean_object* v_fst_560_; lean_object* v_snd_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_593_; 
v_fst_560_ = lean_ctor_get(v_snd_555_, 0);
v_snd_561_ = lean_ctor_get(v_snd_555_, 1);
v_isSharedCheck_593_ = !lean_is_exclusive(v_snd_555_);
if (v_isSharedCheck_593_ == 0)
{
v___x_563_ = v_snd_555_;
v_isShared_564_ = v_isSharedCheck_593_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_snd_561_);
lean_inc(v_fst_560_);
lean_dec(v_snd_555_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_593_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v___x_565_; uint8_t v_decide_566_; 
v___x_565_ = lean_string_utf8_byte_size(v_s_548_);
v_decide_566_ = lean_nat_dec_eq(v_fst_560_, v___x_565_);
if (v_decide_566_ == 0)
{
uint32_t v___x_567_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___f_580_; uint8_t v_decide_585_; 
lean_del_object(v___x_563_);
lean_del_object(v___x_558_);
v___x_567_ = lean_string_utf8_get_fast(v_s_548_, v_fst_560_);
v___x_578_ = lean_string_utf8_next_fast(v_s_548_, v_fst_560_);
lean_dec(v_fst_560_);
v___x_579_ = lean_box_uint32(v___x_567_);
v___f_580_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_580_, 0, v___x_579_);
lean_closure_set(v___f_580_, 1, v___x_578_);
v_decide_585_ = lean_nat_dec_eq(v___x_578_, v___x_565_);
if (v_decide_585_ == 0)
{
goto v___jp_581_;
}
else
{
if (v_decide_566_ == 0)
{
lean_object* v_prev_x3f_586_; 
v_prev_x3f_586_ = lean_box(0);
v___y_569_ = v___f_580_;
v___y_570_ = v_prev_x3f_586_;
goto v___jp_568_;
}
else
{
goto v___jp_581_;
}
}
v___jp_568_:
{
uint8_t v___x_571_; 
v___x_571_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial(v_snd_561_, v___x_567_, v___y_570_);
lean_dec(v___y_570_);
lean_dec(v_snd_561_);
if (v___x_571_ == 0)
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = lean_box(0);
v___x_573_ = lean_apply_2(v___y_569_, v___x_572_, v_fst_556_);
v___y_551_ = v___x_573_;
goto v___jp_550_;
}
else
{
uint32_t v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_574_ = 92;
v___x_575_ = lean_string_push(v_fst_556_, v___x_574_);
v___x_576_ = lean_box(0);
v___x_577_ = lean_apply_2(v___y_569_, v___x_576_, v___x_575_);
v___y_551_ = v___x_577_;
goto v___jp_550_;
}
}
v___jp_581_:
{
uint32_t v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_582_ = lean_string_utf8_get_fast(v_s_548_, v___x_578_);
v___x_583_ = lean_box_uint32(v___x_582_);
v___x_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
v___y_569_ = v___f_580_;
v___y_570_ = v___x_584_;
goto v___jp_568_;
}
}
else
{
lean_object* v___x_588_; 
if (v_isShared_564_ == 0)
{
v___x_588_ = v___x_563_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_fst_560_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_snd_561_);
v___x_588_ = v_reuseFailAlloc_592_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
lean_object* v___x_590_; 
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 1, v___x_588_);
v___x_590_ = v___x_558_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_fst_556_);
lean_ctor_set(v_reuseFailAlloc_591_, 1, v___x_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg___boxed(lean_object* v_s_595_, lean_object* v_a_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg(v_s_595_, v_a_596_);
lean_dec_ref(v_s_595_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0(uint32_t v___x_598_, lean_object* v___x_599_, lean_object* v_____r_600_, lean_object* v_s_x27_601_){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_602_ = lean_string_push(v_s_x27_601_, v___x_598_);
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v___x_602_);
lean_ctor_set(v___x_603_, 1, v___x_599_);
v___x_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_604_, 0, v___x_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0___boxed(lean_object* v___x_605_, lean_object* v___x_606_, lean_object* v_____r_607_, lean_object* v_s_x27_608_){
_start:
{
uint32_t v___x_2188__boxed_609_; lean_object* v_res_610_; 
v___x_2188__boxed_609_ = lean_unbox_uint32(v___x_605_);
lean_dec(v___x_605_);
v_res_610_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0(v___x_2188__boxed_609_, v___x_606_, v_____r_607_, v_s_x27_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg(lean_object* v_s_611_, lean_object* v_a_612_){
_start:
{
lean_object* v___y_614_; lean_object* v_fst_618_; lean_object* v_snd_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_644_; 
v_fst_618_ = lean_ctor_get(v_a_612_, 0);
v_snd_619_ = lean_ctor_get(v_a_612_, 1);
v_isSharedCheck_644_ = !lean_is_exclusive(v_a_612_);
if (v_isSharedCheck_644_ == 0)
{
v___x_621_ = v_a_612_;
v_isShared_622_ = v_isSharedCheck_644_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_snd_619_);
lean_inc(v_fst_618_);
lean_dec(v_a_612_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_644_;
goto v_resetjp_620_;
}
v___jp_613_:
{
if (lean_obj_tag(v___y_614_) == 0)
{
lean_object* v_a_615_; 
v_a_615_ = lean_ctor_get(v___y_614_, 0);
lean_inc(v_a_615_);
lean_dec_ref_known(v___y_614_, 1);
return v_a_615_;
}
else
{
lean_object* v_a_616_; 
v_a_616_ = lean_ctor_get(v___y_614_, 0);
lean_inc(v_a_616_);
lean_dec_ref_known(v___y_614_, 1);
v_a_612_ = v_a_616_;
goto _start;
}
}
v_resetjp_620_:
{
lean_object* v___x_623_; uint8_t v_decide_624_; 
v___x_623_ = lean_string_utf8_byte_size(v_s_611_);
v_decide_624_ = lean_nat_dec_eq(v_snd_619_, v___x_623_);
if (v_decide_624_ == 0)
{
uint32_t v___x_625_; lean_object* v___x_626_; lean_object* v___y_628_; uint8_t v_decide_636_; 
lean_del_object(v___x_621_);
v___x_625_ = lean_string_utf8_get_fast(v_s_611_, v_snd_619_);
v___x_626_ = lean_string_utf8_next_fast(v_s_611_, v_snd_619_);
lean_dec(v_snd_619_);
v_decide_636_ = lean_nat_dec_eq(v___x_626_, v___x_623_);
if (v_decide_636_ == 0)
{
uint32_t v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_637_ = lean_string_utf8_get_fast(v_s_611_, v___x_626_);
v___x_638_ = lean_box_uint32(v___x_637_);
v___x_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
v___y_628_ = v___x_639_;
goto v___jp_627_;
}
else
{
lean_object* v_prev_x3f_640_; 
v_prev_x3f_640_ = lean_box(0);
v___y_628_ = v_prev_x3f_640_;
goto v___jp_627_;
}
v___jp_627_:
{
uint8_t v___x_629_; 
v___x_629_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial(v___x_625_, v___y_628_);
lean_dec(v___y_628_);
if (v___x_629_ == 0)
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = lean_box(0);
v___x_631_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0(v___x_625_, v___x_626_, v___x_630_, v_fst_618_);
v___y_614_ = v___x_631_;
goto v___jp_613_;
}
else
{
uint32_t v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_632_ = 92;
v___x_633_ = lean_string_push(v_fst_618_, v___x_632_);
v___x_634_ = lean_box(0);
v___x_635_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___lam__0(v___x_625_, v___x_626_, v___x_634_, v___x_633_);
v___y_614_ = v___x_635_;
goto v___jp_613_;
}
}
}
else
{
lean_object* v___x_642_; 
if (v_isShared_622_ == 0)
{
v___x_642_ = v___x_621_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_fst_618_);
lean_ctor_set(v_reuseFailAlloc_643_, 1, v_snd_619_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg___boxed(lean_object* v_s_645_, lean_object* v_a_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg(v_s_645_, v_a_646_);
lean_dec_ref(v_s_645_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(lean_object* v_s_654_){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v_snd_657_; lean_object* v_fst_658_; lean_object* v_fst_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_668_; 
v___x_655_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___closed__1));
v___x_656_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg(v_s_654_, v___x_655_);
v_snd_657_ = lean_ctor_get(v___x_656_, 1);
lean_inc(v_snd_657_);
v_fst_658_ = lean_ctor_get(v___x_656_, 0);
lean_inc(v_fst_658_);
lean_dec_ref(v___x_656_);
v_fst_659_ = lean_ctor_get(v_snd_657_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v_snd_657_);
if (v_isSharedCheck_668_ == 0)
{
lean_object* v_unused_669_; 
v_unused_669_ = lean_ctor_get(v_snd_657_, 1);
lean_dec(v_unused_669_);
v___x_661_ = v_snd_657_;
v_isShared_662_ = v_isSharedCheck_668_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_fst_659_);
lean_dec(v_snd_657_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_668_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 1, v_fst_659_);
lean_ctor_set(v___x_661_, 0, v_fst_658_);
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_fst_658_);
lean_ctor_set(v_reuseFailAlloc_667_, 1, v_fst_659_);
v___x_664_ = v_reuseFailAlloc_667_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
lean_object* v___x_665_; lean_object* v_fst_666_; 
v___x_665_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg(v_s_654_, v___x_664_);
v_fst_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_fst_666_);
lean_dec_ref(v___x_665_);
return v_fst_666_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_escape___boxed(lean_object* v_s_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_s_670_);
lean_dec_ref(v_s_670_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0(lean_object* v_s_672_, lean_object* v_inst_673_, lean_object* v_a_674_){
_start:
{
lean_object* v___x_675_; 
v___x_675_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___redArg(v_s_672_, v_a_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0___boxed(lean_object* v_s_676_, lean_object* v_inst_677_, lean_object* v_a_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__0(v_s_676_, v_inst_677_, v_a_678_);
lean_dec_ref(v_s_676_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1(lean_object* v_s_680_, lean_object* v_inst_681_, lean_object* v_a_682_){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___redArg(v_s_680_, v_a_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1___boxed(lean_object* v_s_684_, lean_object* v_inst_685_, lean_object* v_a_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_escape_spec__1(v_s_684_, v_inst_685_, v_a_686_);
lean_dec_ref(v_s_684_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg(lean_object* v_str_688_, lean_object* v_a_689_){
_start:
{
lean_object* v_snd_690_; lean_object* v_fst_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_733_; 
v_snd_690_ = lean_ctor_get(v_a_689_, 1);
v_fst_691_ = lean_ctor_get(v_a_689_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v_a_689_);
if (v_isSharedCheck_733_ == 0)
{
v___x_693_ = v_a_689_;
v_isShared_694_ = v_isSharedCheck_733_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_snd_690_);
lean_inc(v_fst_691_);
lean_dec(v_a_689_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_733_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v_fst_695_; lean_object* v_snd_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_732_; 
v_fst_695_ = lean_ctor_get(v_snd_690_, 0);
v_snd_696_ = lean_ctor_get(v_snd_690_, 1);
v_isSharedCheck_732_ = !lean_is_exclusive(v_snd_690_);
if (v_isSharedCheck_732_ == 0)
{
v___x_698_ = v_snd_690_;
v_isShared_699_ = v_isSharedCheck_732_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_snd_696_);
lean_inc(v_fst_695_);
lean_dec(v_snd_690_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_732_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_700_; uint8_t v_decide_701_; 
v___x_700_ = lean_string_utf8_byte_size(v_str_688_);
v_decide_701_ = lean_nat_dec_eq(v_snd_696_, v___x_700_);
if (v_decide_701_ == 0)
{
uint32_t v___x_702_; lean_object* v___x_703_; uint32_t v___x_704_; uint8_t v___x_705_; 
v___x_702_ = lean_string_utf8_get_fast(v_str_688_, v_snd_696_);
v___x_703_ = lean_string_utf8_next_fast(v_str_688_, v_snd_696_);
lean_dec(v_snd_696_);
v___x_704_ = 96;
v___x_705_ = lean_uint32_dec_eq(v___x_702_, v___x_704_);
if (v___x_705_ == 0)
{
lean_object* v_longest_706_; lean_object* v___y_708_; uint8_t v___x_716_; 
v_longest_706_ = lean_unsigned_to_nat(0u);
v___x_716_ = lean_nat_dec_le(v_fst_691_, v_fst_695_);
if (v___x_716_ == 0)
{
lean_dec(v_fst_695_);
v___y_708_ = v_fst_691_;
goto v___jp_707_;
}
else
{
lean_dec(v_fst_691_);
v___y_708_ = v_fst_695_;
goto v___jp_707_;
}
v___jp_707_:
{
lean_object* v___x_710_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 1, v___x_703_);
lean_ctor_set(v___x_698_, 0, v_longest_706_);
v___x_710_ = v___x_698_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_longest_706_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v___x_703_);
v___x_710_ = v_reuseFailAlloc_715_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
lean_object* v___x_712_; 
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 1, v___x_710_);
lean_ctor_set(v___x_693_, 0, v___y_708_);
v___x_712_ = v___x_693_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v___y_708_);
lean_ctor_set(v_reuseFailAlloc_714_, 1, v___x_710_);
v___x_712_ = v_reuseFailAlloc_714_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
v_a_689_ = v___x_712_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_720_; 
v___x_717_ = lean_unsigned_to_nat(1u);
v___x_718_ = lean_nat_add(v_fst_695_, v___x_717_);
lean_dec(v_fst_695_);
if (v_isShared_699_ == 0)
{
lean_ctor_set(v___x_698_, 1, v___x_703_);
lean_ctor_set(v___x_698_, 0, v___x_718_);
v___x_720_ = v___x_698_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_718_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v___x_703_);
v___x_720_ = v_reuseFailAlloc_725_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
lean_object* v___x_722_; 
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 1, v___x_720_);
v___x_722_ = v___x_693_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v_fst_691_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v___x_720_);
v___x_722_ = v_reuseFailAlloc_724_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
v_a_689_ = v___x_722_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_727_; 
if (v_isShared_699_ == 0)
{
v___x_727_ = v___x_698_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_fst_695_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v_snd_696_);
v___x_727_ = v_reuseFailAlloc_731_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
lean_object* v___x_729_; 
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 1, v___x_727_);
v___x_729_ = v___x_693_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_fst_691_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v___x_727_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg___boxed(lean_object* v_str_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg(v_str_734_, v_a_735_);
lean_dec_ref(v_str_734_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun(lean_object* v_str_742_){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v_snd_745_; lean_object* v_fst_746_; lean_object* v_fst_747_; uint8_t v___x_748_; 
v___x_743_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___closed__1));
v___x_744_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg(v_str_742_, v___x_743_);
v_snd_745_ = lean_ctor_get(v___x_744_, 1);
lean_inc(v_snd_745_);
v_fst_746_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_fst_746_);
lean_dec_ref(v___x_744_);
v_fst_747_ = lean_ctor_get(v_snd_745_, 0);
lean_inc(v_fst_747_);
lean_dec(v_snd_745_);
v___x_748_ = lean_nat_dec_le(v_fst_746_, v_fst_747_);
if (v___x_748_ == 0)
{
lean_dec(v_fst_747_);
return v_fst_746_;
}
else
{
lean_dec(v_fst_746_);
return v_fst_747_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun___boxed(lean_object* v_str_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun(v_str_749_);
lean_dec_ref(v_str_749_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0(lean_object* v_str_751_, lean_object* v_inst_752_, lean_object* v_a_753_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___redArg(v_str_751_, v_a_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0___boxed(lean_object* v_str_755_, lean_object* v_inst_756_, lean_object* v_a_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun_spec__0(v_str_755_, v_inst_756_, v_a_757_);
lean_dec_ref(v_str_755_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor_spec__0(lean_object* v_x_759_, lean_object* v_x_760_){
_start:
{
lean_object* v_zero_761_; uint8_t v_isZero_762_; 
v_zero_761_ = lean_unsigned_to_nat(0u);
v_isZero_762_ = lean_nat_dec_eq(v_x_759_, v_zero_761_);
if (v_isZero_762_ == 1)
{
lean_dec(v_x_759_);
return v_x_760_;
}
else
{
uint32_t v___x_763_; lean_object* v_one_764_; lean_object* v_n_765_; lean_object* v___x_766_; 
v___x_763_ = 96;
v_one_764_ = lean_unsigned_to_nat(1u);
v_n_765_ = lean_nat_sub(v_x_759_, v_one_764_);
lean_dec(v_x_759_);
v___x_766_ = lean_string_push(v_x_760_, v___x_763_);
v_x_759_ = v_n_765_;
v_x_760_ = v___x_766_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor(lean_object* v_atLeast_768_, lean_object* v_str_769_){
_start:
{
lean_object* v___x_770_; lean_object* v___y_772_; lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_770_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_776_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_longestBacktickRun(v_str_769_);
v___x_777_ = lean_nat_dec_le(v_atLeast_768_, v___x_776_);
if (v___x_777_ == 0)
{
lean_dec(v___x_776_);
v___y_772_ = v_atLeast_768_;
goto v___jp_771_;
}
else
{
lean_dec(v_atLeast_768_);
v___y_772_ = v___x_776_;
goto v___jp_771_;
}
v___jp_771_:
{
lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_773_ = lean_unsigned_to_nat(1u);
v___x_774_ = lean_nat_add(v___y_772_, v___x_773_);
lean_dec(v___y_772_);
v___x_775_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor_spec__0(v___x_774_, v___x_770_);
return v___x_775_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor___boxed(lean_object* v_atLeast_778_, lean_object* v_str_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor(v_atLeast_778_, v_str_779_);
lean_dec_ref(v_str_779_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(lean_object* v_str_782_){
_start:
{
lean_object* v___x_783_; lean_object* v_backticks_784_; lean_object* v___y_786_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_783_ = lean_unsigned_to_nat(0u);
v_backticks_784_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor(v___x_783_, v_str_782_);
v___x_800_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1));
v___x_801_ = lean_string_utf8_byte_size(v_str_782_);
v___x_802_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2, &l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2);
v___x_803_ = lean_nat_dec_le(v___x_802_, v___x_801_);
if (v___x_803_ == 0)
{
goto v___jp_793_;
}
else
{
uint8_t v___x_804_; 
v___x_804_ = lean_string_memcmp(v_str_782_, v___x_800_, v___x_783_, v___x_783_, v___x_802_);
if (v___x_804_ == 0)
{
goto v___jp_793_;
}
else
{
goto v___jp_789_;
}
}
v___jp_785_:
{
lean_object* v___x_787_; lean_object* v___x_788_; 
lean_inc_ref(v_backticks_784_);
v___x_787_ = lean_string_append(v_backticks_784_, v___y_786_);
lean_dec_ref(v___y_786_);
v___x_788_ = lean_string_append(v___x_787_, v_backticks_784_);
lean_dec_ref(v_backticks_784_);
return v___x_788_;
}
v___jp_789_:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_790_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0));
v___x_791_ = lean_string_append(v___x_790_, v_str_782_);
lean_dec_ref(v_str_782_);
v___x_792_ = lean_string_append(v___x_791_, v___x_790_);
v___y_786_ = v___x_792_;
goto v___jp_785_;
}
v___jp_793_:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; uint8_t v___x_797_; 
v___x_794_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__1));
v___x_795_ = lean_string_utf8_byte_size(v_str_782_);
v___x_796_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2, &l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_glueInlineBoundary___closed__2);
v___x_797_ = lean_nat_dec_le(v___x_796_, v___x_795_);
if (v___x_797_ == 0)
{
v___y_786_ = v_str_782_;
goto v___jp_785_;
}
else
{
lean_object* v___x_798_; uint8_t v___x_799_; 
v___x_798_ = lean_nat_sub(v___x_795_, v___x_796_);
v___x_799_ = lean_string_memcmp(v_str_782_, v___x_794_, v___x_798_, v___x_783_, v___x_796_);
lean_dec(v___x_798_);
if (v___x_799_ == 0)
{
v___y_786_ = v_str_782_;
goto v___jp_785_;
}
else
{
goto v___jp_789_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg(){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___closed__0));
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg___boxed(lean_object* v___dummy_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg();
return v_res_810_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0(void){
_start:
{
lean_object* v___x_811_; 
v___x_811_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___redArg();
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0(lean_object* v_s_812_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___boxed(lean_object* v_s_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0(v_s_814_);
lean_dec_ref(v_s_814_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg(lean_object* v_str_816_, lean_object* v___x_817_, lean_object* v___x_818_, lean_object* v_a_819_, lean_object* v_b_820_){
_start:
{
lean_object* v_it_822_; lean_object* v_startInclusive_823_; lean_object* v_endExclusive_824_; 
if (lean_obj_tag(v_a_819_) == 0)
{
lean_object* v_currPos_828_; lean_object* v_searcher_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_852_; 
v_currPos_828_ = lean_ctor_get(v_a_819_, 0);
v_searcher_829_ = lean_ctor_get(v_a_819_, 1);
v_isSharedCheck_852_ = !lean_is_exclusive(v_a_819_);
if (v_isSharedCheck_852_ == 0)
{
v___x_831_ = v_a_819_;
v_isShared_832_ = v_isSharedCheck_852_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_searcher_829_);
lean_inc(v_currPos_828_);
lean_dec(v_a_819_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_852_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
uint8_t v_decide_833_; 
v_decide_833_ = lean_nat_dec_eq(v_searcher_829_, v___x_818_);
if (v_decide_833_ == 0)
{
uint32_t v___x_834_; uint32_t v___x_835_; uint8_t v___x_836_; 
v___x_834_ = 10;
v___x_835_ = lean_string_utf8_get_fast(v_str_816_, v_searcher_829_);
v___x_836_ = lean_uint32_dec_eq(v___x_835_, v___x_834_);
if (v___x_836_ == 0)
{
lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_837_ = lean_string_utf8_next_fast(v_str_816_, v_searcher_829_);
lean_dec(v_searcher_829_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 1, v___x_837_);
v___x_839_ = v___x_831_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_currPos_828_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v___x_837_);
v___x_839_ = v_reuseFailAlloc_841_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
v_a_819_ = v___x_839_;
goto _start;
}
}
else
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v_slice_845_; lean_object* v_nextIt_847_; 
v___x_842_ = lean_string_utf8_next_fast(v_str_816_, v_searcher_829_);
v___x_843_ = lean_nat_sub(v___x_842_, v_searcher_829_);
v___x_844_ = lean_nat_add(v_searcher_829_, v___x_843_);
lean_dec(v___x_843_);
v_slice_845_ = l_String_Slice_subslice_x21(v___x_817_, v_currPos_828_, v_searcher_829_);
lean_inc(v___x_844_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 1, v___x_844_);
lean_ctor_set(v___x_831_, 0, v___x_844_);
v_nextIt_847_ = v___x_831_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_844_);
lean_ctor_set(v_reuseFailAlloc_850_, 1, v___x_844_);
v_nextIt_847_ = v_reuseFailAlloc_850_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
lean_object* v_startInclusive_848_; lean_object* v_endExclusive_849_; 
v_startInclusive_848_ = lean_ctor_get(v_slice_845_, 0);
lean_inc(v_startInclusive_848_);
v_endExclusive_849_ = lean_ctor_get(v_slice_845_, 1);
lean_inc(v_endExclusive_849_);
lean_dec_ref(v_slice_845_);
v_it_822_ = v_nextIt_847_;
v_startInclusive_823_ = v_startInclusive_848_;
v_endExclusive_824_ = v_endExclusive_849_;
goto v___jp_821_;
}
}
}
else
{
lean_object* v___x_851_; 
lean_del_object(v___x_831_);
lean_dec(v_searcher_829_);
v___x_851_ = lean_box(1);
lean_inc(v___x_818_);
v_it_822_ = v___x_851_;
v_startInclusive_823_ = v_currPos_828_;
v_endExclusive_824_ = v___x_818_;
goto v___jp_821_;
}
}
}
else
{
lean_dec(v___x_818_);
return v_b_820_;
}
v___jp_821_:
{
lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_825_ = lean_string_utf8_extract_fast(v_str_816_, v_startInclusive_823_, v_endExclusive_824_);
lean_dec(v_endExclusive_824_);
lean_dec(v_startInclusive_823_);
v___x_826_ = lean_array_push(v_b_820_, v___x_825_);
v_a_819_ = v_it_822_;
v_b_820_ = v___x_826_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg___boxed(lean_object* v_str_853_, lean_object* v___x_854_, lean_object* v___x_855_, lean_object* v_a_856_, lean_object* v_b_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg(v_str_853_, v___x_854_, v___x_855_, v_a_856_, v_b_857_);
lean_dec_ref(v___x_854_);
lean_dec_ref(v_str_853_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines(lean_object* v_str_859_){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_860_ = lean_unsigned_to_nat(0u);
v___x_861_ = lean_string_utf8_byte_size(v_str_859_);
lean_inc_ref(v_str_859_);
v___x_862_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_862_, 0, v_str_859_);
lean_ctor_set(v___x_862_, 1, v___x_860_);
lean_ctor_set(v___x_862_, 2, v___x_861_);
v___x_863_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__0___closed__0);
v___x_864_ = ((lean_object*)(l_Lean_Doc_joinBlocks___closed__0));
v___x_865_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg(v_str_859_, v___x_862_, v___x_861_, v___x_863_, v___x_864_);
lean_dec_ref_known(v___x_862_, 3);
lean_dec_ref(v_str_859_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1(lean_object* v_str_866_, lean_object* v___x_867_, lean_object* v___x_868_, lean_object* v_inst_869_, lean_object* v_R_870_, lean_object* v_a_871_, lean_object* v_b_872_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___redArg(v_str_866_, v___x_867_, v___x_868_, v_a_871_, v_b_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1___boxed(lean_object* v_str_874_, lean_object* v___x_875_, lean_object* v___x_876_, lean_object* v_inst_877_, lean_object* v_R_878_, lean_object* v_a_879_, lean_object* v_b_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines_spec__1(v_str_874_, v___x_875_, v___x_876_, v_inst_877_, v_R_878_, v_a_879_, v_b_880_);
lean_dec_ref(v___x_875_);
lean_dec_ref(v_str_874_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_codeBlockLines(lean_object* v_str_882_){
_start:
{
lean_object* v___x_883_; lean_object* v_fence_884_; lean_object* v___y_886_; lean_object* v_body_892_; lean_object* v___x_893_; lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_883_ = lean_unsigned_to_nat(2u);
v_fence_884_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_fenceFor(v___x_883_, v_str_882_);
v_body_892_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_splitNewlines(v_str_882_);
v___x_893_ = lean_unsigned_to_nat(0u);
v___x_894_ = lean_array_get_size(v_body_892_);
v___x_895_ = lean_nat_dec_lt(v___x_893_, v___x_894_);
if (v___x_895_ == 0)
{
v___y_886_ = v_body_892_;
goto v___jp_885_;
}
else
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; uint8_t v___x_901_; 
v___x_896_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_897_ = lean_unsigned_to_nat(1u);
v___x_898_ = lean_nat_sub(v___x_894_, v___x_897_);
v___x_899_ = lean_array_get(v___x_896_, v_body_892_, v___x_898_);
lean_dec(v___x_898_);
v___x_900_ = lean_string_utf8_byte_size(v___x_899_);
lean_dec(v___x_899_);
v___x_901_ = lean_nat_dec_eq(v___x_900_, v___x_893_);
if (v___x_901_ == 0)
{
v___y_886_ = v_body_892_;
goto v___jp_885_;
}
else
{
lean_object* v___x_902_; 
v___x_902_ = lean_array_pop(v_body_892_);
v___y_886_ = v___x_902_;
goto v___jp_885_;
}
}
v___jp_885_:
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_887_ = lean_unsigned_to_nat(1u);
v___x_888_ = lean_mk_empty_array_with_capacity(v___x_887_);
v___x_889_ = lean_array_push(v___x_888_, v_fence_884_);
lean_inc_ref(v___x_889_);
v___x_890_ = l_Array_append___redArg(v___x_889_, v___y_886_);
lean_dec_ref(v___y_886_);
v___x_891_ = l_Array_append___redArg(v___x_890_, v___x_889_);
lean_dec_ref(v___x_889_);
return v___x_891_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0(lean_object* v_s_903_, lean_object* v_pos_904_){
_start:
{
lean_object* v_str_905_; lean_object* v_startInclusive_906_; lean_object* v_endExclusive_907_; lean_object* v___x_908_; lean_object* v___x_917_; lean_object* v___x_918_; uint8_t v_decide_919_; 
v_str_905_ = lean_ctor_get(v_s_903_, 0);
v_startInclusive_906_ = lean_ctor_get(v_s_903_, 1);
v_endExclusive_907_ = lean_ctor_get(v_s_903_, 2);
v___x_908_ = lean_nat_add(v_startInclusive_906_, v_pos_904_);
v___x_917_ = lean_unsigned_to_nat(0u);
v___x_918_ = lean_nat_sub(v_endExclusive_907_, v___x_908_);
v_decide_919_ = lean_nat_dec_eq(v___x_917_, v___x_918_);
lean_dec(v___x_918_);
if (v_decide_919_ == 0)
{
uint32_t v___x_920_; uint32_t v___x_921_; uint8_t v___x_922_; 
v___x_920_ = lean_string_utf8_get_fast(v_str_905_, v___x_908_);
v___x_921_ = 32;
v___x_922_ = lean_uint32_dec_eq(v___x_920_, v___x_921_);
if (v___x_922_ == 0)
{
uint32_t v___x_923_; uint8_t v___x_924_; 
v___x_923_ = 9;
v___x_924_ = lean_uint32_dec_eq(v___x_920_, v___x_923_);
if (v___x_924_ == 0)
{
uint32_t v___x_925_; uint8_t v___x_926_; 
v___x_925_ = 13;
v___x_926_ = lean_uint32_dec_eq(v___x_920_, v___x_925_);
if (v___x_926_ == 0)
{
uint32_t v___x_927_; uint8_t v___x_928_; 
v___x_927_ = 10;
v___x_928_ = lean_uint32_dec_eq(v___x_920_, v___x_927_);
if (v___x_928_ == 0)
{
lean_dec(v___x_908_);
return v_pos_904_;
}
else
{
goto v___jp_909_;
}
}
else
{
goto v___jp_909_;
}
}
else
{
goto v___jp_909_;
}
}
else
{
goto v___jp_909_;
}
}
else
{
lean_dec(v___x_908_);
return v_pos_904_;
}
v___jp_909_:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; uint8_t v___x_915_; 
v___x_910_ = lean_string_utf8_next_fast(v_str_905_, v___x_908_);
v___x_911_ = lean_nat_sub(v___x_910_, v___x_908_);
lean_dec(v___x_908_);
v___x_912_ = lean_nat_add(v_pos_904_, v___x_911_);
lean_dec(v___x_911_);
v___x_913_ = lean_unsigned_to_nat(1u);
v___x_914_ = lean_nat_add(v_pos_904_, v___x_913_);
v___x_915_ = lean_nat_dec_le(v___x_914_, v___x_912_);
lean_dec(v___x_914_);
if (v___x_915_ == 0)
{
lean_dec(v___x_912_);
return v_pos_904_;
}
else
{
lean_dec(v_pos_904_);
v_pos_904_ = v___x_912_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0___boxed(lean_object* v_s_929_, lean_object* v_pos_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0(v_s_929_, v_pos_930_);
lean_dec_ref(v_s_929_);
return v_res_931_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_932_; 
v___x_932_ = l_Lean_Doc_Inline_empty___redArg();
return v___x_932_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1(void){
_start:
{
lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_933_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0);
v___x_934_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
lean_ctor_set(v___x_935_, 1, v___x_933_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg(lean_object* v_a_936_){
_start:
{
if (lean_obj_tag(v_a_936_) == 0)
{
lean_object* v___x_937_; 
v___x_937_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__1);
return v___x_937_;
}
else
{
lean_object* v_head_938_; 
v_head_938_ = lean_ctor_get(v_a_936_, 0);
lean_inc(v_head_938_);
switch(lean_obj_tag(v_head_938_))
{
case 0:
{
lean_object* v_tail_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_983_; 
v_tail_939_ = lean_ctor_get(v_a_936_, 1);
v_isSharedCheck_983_ = !lean_is_exclusive(v_a_936_);
if (v_isSharedCheck_983_ == 0)
{
lean_object* v_unused_984_; 
v_unused_984_ = lean_ctor_get(v_a_936_, 0);
lean_dec(v_unused_984_);
v___x_941_ = v_a_936_;
v_isShared_942_ = v_isSharedCheck_983_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_tail_939_);
lean_dec(v_a_936_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_983_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v_string_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_982_; 
v_string_943_ = lean_ctor_get(v_head_938_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v_head_938_);
if (v_isSharedCheck_982_ == 0)
{
v___x_945_ = v_head_938_;
v_isShared_946_ = v_isSharedCheck_982_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_string_943_);
lean_dec(v_head_938_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_982_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; uint8_t v_decide_951_; 
v___x_947_ = lean_unsigned_to_nat(0u);
v___x_948_ = lean_string_utf8_byte_size(v_string_943_);
lean_inc_ref(v_string_943_);
v___x_949_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_949_, 0, v_string_943_);
lean_ctor_set(v___x_949_, 1, v___x_947_);
lean_ctor_set(v___x_949_, 2, v___x_948_);
v___x_950_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0(v___x_949_, v___x_947_);
lean_dec_ref_known(v___x_949_, 3);
v_decide_951_ = lean_nat_dec_eq(v___x_950_, v___x_948_);
if (v_decide_951_ == 0)
{
lean_object* v_s1_952_; lean_object* v_s2_953_; lean_object* v___x_955_; 
v_s1_952_ = lean_string_utf8_extract_fast(v_string_943_, v___x_947_, v___x_950_);
v_s2_953_ = lean_string_utf8_extract_fast(v_string_943_, v___x_950_, v___x_948_);
lean_dec(v___x_950_);
lean_dec_ref(v_string_943_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v_s2_953_);
v___x_955_ = v___x_945_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_s2_953_);
v___x_955_ = v_reuseFailAlloc_970_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
lean_object* v___x_956_; lean_object* v___x_957_; uint8_t v___x_958_; 
v___x_956_ = lean_array_mk(v_tail_939_);
v___x_957_ = lean_array_get_size(v___x_956_);
v___x_958_ = lean_nat_dec_eq(v___x_957_, v___x_947_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_959_ = lean_unsigned_to_nat(1u);
v___x_960_ = lean_mk_empty_array_with_capacity(v___x_959_);
v___x_961_ = lean_array_push(v___x_960_, v___x_955_);
v___x_962_ = l_Array_append___redArg(v___x_961_, v___x_956_);
lean_dec_ref(v___x_956_);
v___x_963_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
if (v_isShared_942_ == 0)
{
lean_ctor_set_tag(v___x_941_, 0);
lean_ctor_set(v___x_941_, 1, v___x_963_);
lean_ctor_set(v___x_941_, 0, v_s1_952_);
v___x_965_ = v___x_941_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_s1_952_);
lean_ctor_set(v_reuseFailAlloc_966_, 1, v___x_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
else
{
lean_object* v___x_968_; 
lean_dec_ref(v___x_956_);
if (v_isShared_942_ == 0)
{
lean_ctor_set_tag(v___x_941_, 0);
lean_ctor_set(v___x_941_, 1, v___x_955_);
lean_ctor_set(v___x_941_, 0, v_s1_952_);
v___x_968_ = v___x_941_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_s1_952_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v___x_955_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
else
{
lean_object* v___x_971_; lean_object* v_fst_972_; lean_object* v_snd_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_981_; 
lean_dec(v___x_950_);
lean_del_object(v___x_945_);
lean_del_object(v___x_941_);
v___x_971_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg(v_tail_939_);
v_fst_972_ = lean_ctor_get(v___x_971_, 0);
v_snd_973_ = lean_ctor_get(v___x_971_, 1);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_981_ == 0)
{
v___x_975_ = v___x_971_;
v_isShared_976_ = v_isSharedCheck_981_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_snd_973_);
lean_inc(v_fst_972_);
lean_dec(v___x_971_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_981_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_977_; lean_object* v___x_979_; 
v___x_977_ = lean_string_append(v_string_943_, v_fst_972_);
lean_dec(v_fst_972_);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 0, v___x_977_);
v___x_979_ = v___x_975_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_977_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v_snd_973_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
}
}
case 9:
{
lean_object* v_tail_985_; lean_object* v_content_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v_tail_985_ = lean_ctor_get(v_a_936_, 1);
lean_inc(v_tail_985_);
lean_dec_ref_known(v_a_936_, 2);
v_content_986_ = lean_ctor_get(v_head_938_, 0);
lean_inc_ref(v_content_986_);
lean_dec_ref_known(v_head_938_, 1);
v___x_987_ = lean_array_to_list(v_content_986_);
v___x_988_ = l_List_appendTR___redArg(v___x_987_, v_tail_985_);
v_a_936_ = v___x_988_;
goto _start;
}
default: 
{
lean_object* v_tail_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1028_; 
v_tail_990_ = lean_ctor_get(v_a_936_, 1);
v_isSharedCheck_1028_ = !lean_is_exclusive(v_a_936_);
if (v_isSharedCheck_1028_ == 0)
{
lean_object* v_unused_1029_; 
v_unused_1029_ = lean_ctor_get(v_a_936_, 0);
lean_dec(v_unused_1029_);
v___x_992_ = v_a_936_;
v_isShared_993_ = v_isSharedCheck_1028_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_tail_990_);
lean_dec(v_a_936_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1028_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_995_ = lean_array_mk(v_tail_990_);
if (lean_obj_tag(v_head_938_) == 9)
{
lean_object* v_content_996_; lean_object* v___x_997_; lean_object* v___x_998_; uint8_t v___x_999_; 
v_content_996_ = lean_ctor_get(v_head_938_, 0);
v___x_997_ = lean_array_get_size(v_content_996_);
v___x_998_ = lean_unsigned_to_nat(0u);
v___x_999_ = lean_nat_dec_eq(v___x_997_, v___x_998_);
if (v___x_999_ == 0)
{
lean_object* v___x_1000_; uint8_t v___x_1001_; 
v___x_1000_ = lean_array_get_size(v___x_995_);
v___x_1001_ = lean_nat_dec_eq(v___x_1000_, v___x_998_);
if (v___x_1001_ == 0)
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1005_; 
lean_inc_ref(v_content_996_);
lean_dec_ref_known(v_head_938_, 1);
v___x_1002_ = l_Array_append___redArg(v_content_996_, v___x_995_);
lean_dec_ref(v___x_995_);
v___x_1003_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1002_);
if (v_isShared_993_ == 0)
{
lean_ctor_set_tag(v___x_992_, 0);
lean_ctor_set(v___x_992_, 1, v___x_1003_);
lean_ctor_set(v___x_992_, 0, v___x_994_);
v___x_1005_ = v___x_992_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_994_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v___x_1003_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
else
{
lean_object* v___x_1008_; 
lean_dec_ref(v___x_995_);
if (v_isShared_993_ == 0)
{
lean_ctor_set_tag(v___x_992_, 0);
lean_ctor_set(v___x_992_, 1, v_head_938_);
lean_ctor_set(v___x_992_, 0, v___x_994_);
v___x_1008_ = v___x_992_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v___x_994_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v_head_938_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
}
else
{
lean_object* v___x_1010_; lean_object* v___x_1012_; 
lean_dec_ref_known(v_head_938_, 1);
v___x_1010_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1010_, 0, v___x_995_);
if (v_isShared_993_ == 0)
{
lean_ctor_set_tag(v___x_992_, 0);
lean_ctor_set(v___x_992_, 1, v___x_1010_);
lean_ctor_set(v___x_992_, 0, v___x_994_);
v___x_1012_ = v___x_992_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v___x_994_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v___x_1010_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
else
{
lean_object* v___x_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; 
v___x_1014_ = lean_array_get_size(v___x_995_);
v___x_1015_ = lean_unsigned_to_nat(0u);
v___x_1016_ = lean_nat_dec_eq(v___x_1014_, v___x_1015_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1023_; 
v___x_1017_ = lean_unsigned_to_nat(1u);
v___x_1018_ = lean_mk_empty_array_with_capacity(v___x_1017_);
v___x_1019_ = lean_array_push(v___x_1018_, v_head_938_);
v___x_1020_ = l_Array_append___redArg(v___x_1019_, v___x_995_);
lean_dec_ref(v___x_995_);
v___x_1021_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1020_);
if (v_isShared_993_ == 0)
{
lean_ctor_set_tag(v___x_992_, 0);
lean_ctor_set(v___x_992_, 1, v___x_1021_);
lean_ctor_set(v___x_992_, 0, v___x_994_);
v___x_1023_ = v___x_992_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_994_);
lean_ctor_set(v_reuseFailAlloc_1024_, 1, v___x_1021_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
else
{
lean_object* v___x_1026_; 
lean_dec_ref(v___x_995_);
if (v_isShared_993_ == 0)
{
lean_ctor_set_tag(v___x_992_, 0);
lean_ctor_set(v___x_992_, 1, v_head_938_);
lean_ctor_set(v___x_992_, 0, v___x_994_);
v___x_1026_ = v___x_992_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v___x_994_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_head_938_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go(lean_object* v_i_1030_, lean_object* v_a_1031_){
_start:
{
lean_object* v___x_1032_; 
v___x_1032_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg(v_a_1031_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft___redArg(lean_object* v_inline_1033_){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1034_ = lean_box(0);
v___x_1035_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1035_, 0, v_inline_1033_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg(v___x_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft(lean_object* v_i_1037_, lean_object* v_inline_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft___redArg(v_inline_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0(lean_object* v_s_1040_, lean_object* v_pos_1041_){
_start:
{
lean_object* v_str_1042_; lean_object* v_startInclusive_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; uint8_t v_decide_1047_; 
v_str_1042_ = lean_ctor_get(v_s_1040_, 0);
v_startInclusive_1043_ = lean_ctor_get(v_s_1040_, 1);
v___x_1044_ = lean_nat_add(v_startInclusive_1043_, v_pos_1041_);
v___x_1045_ = lean_nat_sub(v___x_1044_, v_startInclusive_1043_);
v___x_1046_ = lean_unsigned_to_nat(0u);
v_decide_1047_ = lean_nat_dec_eq(v___x_1045_, v___x_1046_);
if (v_decide_1047_ == 0)
{
lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1056_; uint32_t v___x_1057_; uint32_t v___x_1058_; uint8_t v___x_1059_; 
lean_inc(v_startInclusive_1043_);
lean_inc_ref(v_str_1042_);
v___x_1048_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1048_, 0, v_str_1042_);
lean_ctor_set(v___x_1048_, 1, v_startInclusive_1043_);
lean_ctor_set(v___x_1048_, 2, v___x_1044_);
v___x_1049_ = lean_unsigned_to_nat(1u);
v___x_1050_ = lean_nat_sub(v___x_1045_, v___x_1049_);
lean_dec(v___x_1045_);
v___x_1051_ = l_String_Slice_posLE(v___x_1048_, v___x_1050_);
lean_dec_ref_known(v___x_1048_, 3);
v___x_1056_ = lean_nat_add(v_startInclusive_1043_, v___x_1051_);
v___x_1057_ = lean_string_utf8_get_fast(v_str_1042_, v___x_1056_);
lean_dec(v___x_1056_);
v___x_1058_ = 32;
v___x_1059_ = lean_uint32_dec_eq(v___x_1057_, v___x_1058_);
if (v___x_1059_ == 0)
{
uint32_t v___x_1060_; uint8_t v___x_1061_; 
v___x_1060_ = 9;
v___x_1061_ = lean_uint32_dec_eq(v___x_1057_, v___x_1060_);
if (v___x_1061_ == 0)
{
uint32_t v___x_1062_; uint8_t v___x_1063_; 
v___x_1062_ = 13;
v___x_1063_ = lean_uint32_dec_eq(v___x_1057_, v___x_1062_);
if (v___x_1063_ == 0)
{
uint32_t v___x_1064_; uint8_t v___x_1065_; 
v___x_1064_ = 10;
v___x_1065_ = lean_uint32_dec_eq(v___x_1057_, v___x_1064_);
if (v___x_1065_ == 0)
{
lean_dec(v___x_1051_);
return v_pos_1041_;
}
else
{
goto v___jp_1052_;
}
}
else
{
goto v___jp_1052_;
}
}
else
{
goto v___jp_1052_;
}
}
else
{
goto v___jp_1052_;
}
v___jp_1052_:
{
lean_object* v___x_1053_; uint8_t v___x_1054_; 
v___x_1053_ = lean_nat_add(v___x_1051_, v___x_1049_);
v___x_1054_ = lean_nat_dec_le(v___x_1053_, v_pos_1041_);
lean_dec(v___x_1053_);
if (v___x_1054_ == 0)
{
lean_dec(v___x_1051_);
return v_pos_1041_;
}
else
{
lean_dec(v_pos_1041_);
v_pos_1041_ = v___x_1051_;
goto _start;
}
}
}
else
{
lean_dec(v___x_1045_);
lean_dec(v___x_1044_);
return v_pos_1041_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0___boxed(lean_object* v_s_1066_, lean_object* v_pos_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0(v_s_1066_, v_pos_1067_);
lean_dec_ref(v_s_1066_);
return v_res_1068_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1069_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_1070_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go___redArg___closed__0);
v___x_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
lean_ctor_set(v___x_1071_, 1, v___x_1069_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg(lean_object* v_xs_1072_){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; uint8_t v___x_1075_; 
v___x_1073_ = lean_array_get_size(v_xs_1072_);
v___x_1074_ = lean_unsigned_to_nat(0u);
v___x_1075_ = lean_nat_dec_eq(v___x_1073_, v___x_1074_);
if (v___x_1075_ == 0)
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1076_ = lean_unsigned_to_nat(1u);
v___x_1077_ = lean_nat_sub(v___x_1073_, v___x_1076_);
v___x_1078_ = lean_array_fget(v_xs_1072_, v___x_1077_);
lean_dec(v___x_1077_);
switch(lean_obj_tag(v___x_1078_))
{
case 0:
{
lean_object* v_string_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1109_; 
v_string_1079_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1081_ = v___x_1078_;
v_isShared_1082_ = v_isSharedCheck_1109_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_string_1079_);
lean_dec(v___x_1078_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1109_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; uint8_t v_decide_1086_; 
v___x_1083_ = lean_string_utf8_byte_size(v_string_1079_);
lean_inc_ref(v_string_1079_);
v___x_1084_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1084_, 0, v_string_1079_);
lean_ctor_set(v___x_1084_, 1, v___x_1074_);
lean_ctor_set(v___x_1084_, 2, v___x_1083_);
v___x_1085_ = l_String_Slice_Pos_skipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft_go_spec__0(v___x_1084_, v___x_1074_);
v_decide_1086_ = lean_nat_dec_eq(v___x_1085_, v___x_1083_);
lean_dec(v___x_1085_);
if (v_decide_1086_ == 0)
{
lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1091_; 
v___x_1087_ = l_String_Slice_Pos_revSkipWhile___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go_spec__0(v___x_1084_, v___x_1083_);
lean_dec_ref_known(v___x_1084_, 3);
v___x_1088_ = lean_array_pop(v_xs_1072_);
v___x_1089_ = lean_string_utf8_extract_fast(v_string_1079_, v___x_1074_, v___x_1087_);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 0, v___x_1089_);
v___x_1091_ = v___x_1081_;
goto v_reusejp_1090_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v___x_1089_);
v___x_1091_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1090_;
}
v_reusejp_1090_:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1092_ = lean_array_push(v___x_1088_, v___x_1091_);
v___x_1093_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
v___x_1094_ = lean_string_utf8_extract_fast(v_string_1079_, v___x_1087_, v___x_1083_);
lean_dec(v___x_1087_);
lean_dec_ref(v_string_1079_);
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1093_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
return v___x_1095_;
}
}
else
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v_fst_1099_; lean_object* v_snd_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1108_; 
lean_dec_ref_known(v___x_1084_, 3);
lean_del_object(v___x_1081_);
v___x_1097_ = lean_array_pop(v_xs_1072_);
v___x_1098_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg(v___x_1097_);
v_fst_1099_ = lean_ctor_get(v___x_1098_, 0);
v_snd_1100_ = lean_ctor_get(v___x_1098_, 1);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1102_ = v___x_1098_;
v_isShared_1103_ = v_isSharedCheck_1108_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_snd_1100_);
lean_inc(v_fst_1099_);
lean_dec(v___x_1098_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1108_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1104_ = lean_string_append(v_snd_1100_, v_string_1079_);
lean_dec_ref(v_string_1079_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 1, v___x_1104_);
v___x_1106_ = v___x_1102_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_fst_1099_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
}
}
case 9:
{
lean_object* v_content_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v_content_1110_ = lean_ctor_get(v___x_1078_, 0);
lean_inc_ref(v_content_1110_);
lean_dec_ref_known(v___x_1078_, 1);
v___x_1111_ = lean_array_pop(v_xs_1072_);
v___x_1112_ = l_Array_append___redArg(v___x_1111_, v_content_1110_);
lean_dec_ref(v_content_1110_);
v_xs_1072_ = v___x_1112_;
goto _start;
}
default: 
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
lean_dec(v___x_1078_);
v___x_1114_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1114_, 0, v_xs_1072_);
v___x_1115_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1114_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
return v___x_1116_;
}
}
}
else
{
lean_object* v___x_1117_; 
lean_dec_ref(v_xs_1072_);
v___x_1117_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0, &l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg___closed__0);
return v___x_1117_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go(lean_object* v_i_1118_, lean_object* v_xs_1119_){
_start:
{
lean_object* v___x_1120_; 
v___x_1120_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg(v_xs_1119_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight___redArg(lean_object* v_inline_1121_){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1122_ = lean_unsigned_to_nat(1u);
v___x_1123_ = lean_mk_empty_array_with_capacity(v___x_1122_);
v___x_1124_ = lean_array_push(v___x_1123_, v_inline_1121_);
v___x_1125_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight_go___redArg(v___x_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight(lean_object* v_i_1126_, lean_object* v_inline_1127_){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight___redArg(v_inline_1127_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(lean_object* v_inline_1129_){
_start:
{
lean_object* v___x_1130_; lean_object* v_fst_1131_; lean_object* v_snd_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1140_; 
v___x_1130_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimLeft___redArg(v_inline_1129_);
v_fst_1131_ = lean_ctor_get(v___x_1130_, 0);
v_snd_1132_ = lean_ctor_get(v___x_1130_, 1);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1134_ = v___x_1130_;
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_snd_1132_);
lean_inc(v_fst_1131_);
lean_dec(v___x_1130_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1136_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trimRight___redArg(v_snd_1132_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 1, v___x_1136_);
v___x_1138_ = v___x_1134_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_fst_1131_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_trim(lean_object* v_i_1141_, lean_object* v_inline_1142_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(v_inline_1142_);
return v___x_1143_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__10));
v___x_1168_ = l_StateRefT_x27_instMonad___redArg(v___x_1167_);
return v___x_1168_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__26(void){
_start:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1197_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__23));
v___x_1198_ = lean_unsigned_to_nat(3u);
v___x_1199_ = lean_mk_empty_array_with_capacity(v___x_1198_);
v___x_1200_ = lean_array_push(v___x_1199_, v___x_1197_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed(lean_object* v_inst_1203_, lean_object* v_x_1204_, lean_object* v_x_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1203_, v_x_1204_, v_x_1205_, v___y_1206_, v___y_1207_, v___y_1208_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
lean_dec(v___y_1206_);
return v_res_1210_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(lean_object* v_inst_1211_, lean_object* v_x_1212_, lean_object* v_x_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_){
_start:
{
lean_object* v_pieces_1219_; lean_object* v_pieces_1223_; lean_object* v___x_1226_; lean_object* v_toApplicative_1227_; lean_object* v_toFunctor_1228_; lean_object* v_toSeq_1229_; lean_object* v_toSeqLeft_1230_; lean_object* v_toSeqRight_1231_; lean_object* v___f_1232_; lean_object* v___f_1233_; lean_object* v___f_1234_; lean_object* v___f_1235_; lean_object* v___x_1236_; lean_object* v___f_1237_; lean_object* v___f_1238_; lean_object* v___f_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1226_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11);
v_toApplicative_1227_ = lean_ctor_get(v___x_1226_, 0);
v_toFunctor_1228_ = lean_ctor_get(v_toApplicative_1227_, 0);
v_toSeq_1229_ = lean_ctor_get(v_toApplicative_1227_, 2);
v_toSeqLeft_1230_ = lean_ctor_get(v_toApplicative_1227_, 3);
v_toSeqRight_1231_ = lean_ctor_get(v_toApplicative_1227_, 4);
v___f_1232_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12));
v___f_1233_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_1228_, 2);
v___f_1234_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1234_, 0, v_toFunctor_1228_);
v___f_1235_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1235_, 0, v_toFunctor_1228_);
v___x_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___f_1234_);
lean_ctor_set(v___x_1236_, 1, v___f_1235_);
lean_inc(v_toSeqRight_1231_);
v___f_1237_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1237_, 0, v_toSeqRight_1231_);
lean_inc(v_toSeqLeft_1230_);
v___f_1238_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1238_, 0, v_toSeqLeft_1230_);
lean_inc(v_toSeq_1229_);
v___f_1239_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1239_, 0, v_toSeq_1229_);
v___x_1240_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1236_);
lean_ctor_set(v___x_1240_, 1, v___f_1232_);
lean_ctor_set(v___x_1240_, 2, v___f_1239_);
lean_ctor_set(v___x_1240_, 3, v___f_1238_);
lean_ctor_set(v___x_1240_, 4, v___f_1237_);
v___x_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
lean_ctor_set(v___x_1241_, 1, v___f_1233_);
v___x_1242_ = l_StateRefT_x27_instMonad___redArg(v___x_1241_);
switch(lean_obj_tag(v_x_1213_))
{
case 0:
{
lean_object* v_string_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
lean_dec_ref(v___x_1242_);
lean_dec_ref(v_x_1212_);
lean_dec_ref(v_inst_1211_);
v_string_1243_ = lean_ctor_get(v_x_1213_, 0);
lean_inc_ref(v_string_1243_);
lean_dec_ref_known(v_x_1213_, 1);
v___x_1244_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_string_1243_);
lean_dec_ref(v_string_1243_);
v___x_1245_ = lean_unsigned_to_nat(1u);
v___x_1246_ = lean_mk_empty_array_with_capacity(v___x_1245_);
v___x_1247_ = lean_array_push(v___x_1246_, v___x_1244_);
v___x_1248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1247_);
return v___x_1248_;
}
case 1:
{
lean_object* v_content_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1300_; 
lean_dec_ref(v___x_1242_);
v_content_1249_ = lean_ctor_get(v_x_1213_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_x_1213_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1251_ = v_x_1213_;
v_isShared_1252_ = v_isSharedCheck_1300_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_content_1249_);
lean_dec(v_x_1213_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1300_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1254_; 
if (v_isShared_1252_ == 0)
{
lean_ctor_set_tag(v___x_1251_, 9);
v___x_1254_ = v___x_1251_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_content_1249_);
v___x_1254_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
lean_object* v___x_1255_; lean_object* v_snd_1256_; lean_object* v_fst_1257_; lean_object* v_fst_1258_; lean_object* v_snd_1259_; lean_object* v_pieces_1261_; uint8_t v_inEmph_1269_; uint8_t v_inBold_1270_; uint8_t v_inLink_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1298_; 
v___x_1255_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(v___x_1254_);
v_snd_1256_ = lean_ctor_get(v___x_1255_, 1);
lean_inc(v_snd_1256_);
v_fst_1257_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_fst_1257_);
lean_dec_ref(v___x_1255_);
v_fst_1258_ = lean_ctor_get(v_snd_1256_, 0);
lean_inc(v_fst_1258_);
v_snd_1259_ = lean_ctor_get(v_snd_1256_, 1);
lean_inc(v_snd_1259_);
lean_dec(v_snd_1256_);
v_inEmph_1269_ = lean_ctor_get_uint8(v_x_1212_, 0);
v_inBold_1270_ = lean_ctor_get_uint8(v_x_1212_, 1);
v_inLink_1271_ = lean_ctor_get_uint8(v_x_1212_, 2);
v_isSharedCheck_1298_ = !lean_is_exclusive(v_x_1212_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1273_ = v_x_1212_;
v_isShared_1274_ = v_isSharedCheck_1298_;
goto v_resetjp_1272_;
}
else
{
lean_dec(v_x_1212_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1298_;
goto v_resetjp_1272_;
}
v___jp_1260_:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; uint8_t v___x_1264_; 
v___x_1262_ = lean_string_utf8_byte_size(v_snd_1259_);
v___x_1263_ = lean_unsigned_to_nat(0u);
v___x_1264_ = lean_nat_dec_eq(v___x_1262_, v___x_1263_);
if (v___x_1264_ == 0)
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1265_ = lean_unsigned_to_nat(1u);
v___x_1266_ = lean_mk_empty_array_with_capacity(v___x_1265_);
v___x_1267_ = lean_array_push(v___x_1266_, v_snd_1259_);
v___x_1268_ = lean_array_push(v_pieces_1261_, v___x_1267_);
v_pieces_1223_ = v___x_1268_;
goto v___jp_1222_;
}
else
{
lean_dec(v_snd_1259_);
v_pieces_1223_ = v_pieces_1261_;
goto v___jp_1222_;
}
}
v_resetjp_1272_:
{
uint8_t v___x_1275_; lean_object* v___x_1277_; 
v___x_1275_ = 1;
if (v_isShared_1274_ == 0)
{
v___x_1277_ = v___x_1273_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_1297_, 1, v_inBold_1270_);
lean_ctor_set_uint8(v_reuseFailAlloc_1297_, 2, v_inLink_1271_);
v___x_1277_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
lean_object* v___x_1278_; 
lean_ctor_set_uint8(v___x_1277_, 0, v___x_1275_);
v___x_1278_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1211_, v___x_1277_, v_fst_1258_, v___y_1214_, v___y_1215_, v___y_1216_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_object* v_a_1279_; lean_object* v_pieces_1281_; lean_object* v_pieces_1286_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; uint8_t v___x_1292_; 
v_a_1279_ = lean_ctor_get(v___x_1278_, 0);
lean_inc(v_a_1279_);
lean_dec_ref_known(v___x_1278_, 1);
v___x_1289_ = lean_unsigned_to_nat(0u);
v___x_1290_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16));
v___x_1291_ = lean_string_utf8_byte_size(v_fst_1257_);
v___x_1292_ = lean_nat_dec_eq(v___x_1291_, v___x_1289_);
if (v___x_1292_ == 0)
{
lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1293_ = lean_unsigned_to_nat(1u);
v___x_1294_ = lean_mk_empty_array_with_capacity(v___x_1293_);
v___x_1295_ = lean_array_push(v___x_1294_, v_fst_1257_);
v___x_1296_ = lean_array_push(v___x_1290_, v___x_1295_);
v_pieces_1286_ = v___x_1296_;
goto v___jp_1285_;
}
else
{
lean_dec(v_fst_1257_);
v_pieces_1286_ = v___x_1290_;
goto v___jp_1285_;
}
v___jp_1280_:
{
lean_object* v___x_1282_; 
v___x_1282_ = lean_array_push(v_pieces_1281_, v_a_1279_);
if (v_inEmph_1269_ == 0)
{
lean_object* v___x_1283_; lean_object* v___x_1284_; 
v___x_1283_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15));
v___x_1284_ = lean_array_push(v___x_1282_, v___x_1283_);
v_pieces_1261_ = v___x_1284_;
goto v___jp_1260_;
}
else
{
v_pieces_1261_ = v___x_1282_;
goto v___jp_1260_;
}
}
v___jp_1285_:
{
if (v_inEmph_1269_ == 0)
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15));
v___x_1288_ = lean_array_push(v_pieces_1286_, v___x_1287_);
v_pieces_1281_ = v___x_1288_;
goto v___jp_1280_;
}
else
{
v_pieces_1281_ = v_pieces_1286_;
goto v___jp_1280_;
}
}
}
else
{
lean_dec(v_snd_1259_);
lean_dec(v_fst_1257_);
return v___x_1278_;
}
}
}
}
}
}
case 2:
{
lean_object* v_content_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1352_; 
lean_dec_ref(v___x_1242_);
v_content_1301_ = lean_ctor_get(v_x_1213_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v_x_1213_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1303_ = v_x_1213_;
v_isShared_1304_ = v_isSharedCheck_1352_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_content_1301_);
lean_dec(v_x_1213_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1352_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
lean_ctor_set_tag(v___x_1303_, 9);
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_content_1301_);
v___x_1306_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
lean_object* v___x_1307_; lean_object* v_snd_1308_; lean_object* v_fst_1309_; lean_object* v_fst_1310_; lean_object* v_snd_1311_; lean_object* v_pieces_1313_; uint8_t v_inEmph_1321_; uint8_t v_inBold_1322_; uint8_t v_inLink_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1350_; 
v___x_1307_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(v___x_1306_);
v_snd_1308_ = lean_ctor_get(v___x_1307_, 1);
lean_inc(v_snd_1308_);
v_fst_1309_ = lean_ctor_get(v___x_1307_, 0);
lean_inc(v_fst_1309_);
lean_dec_ref(v___x_1307_);
v_fst_1310_ = lean_ctor_get(v_snd_1308_, 0);
lean_inc(v_fst_1310_);
v_snd_1311_ = lean_ctor_get(v_snd_1308_, 1);
lean_inc(v_snd_1311_);
lean_dec(v_snd_1308_);
v_inEmph_1321_ = lean_ctor_get_uint8(v_x_1212_, 0);
v_inBold_1322_ = lean_ctor_get_uint8(v_x_1212_, 1);
v_inLink_1323_ = lean_ctor_get_uint8(v_x_1212_, 2);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_x_1212_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1325_ = v_x_1212_;
v_isShared_1326_ = v_isSharedCheck_1350_;
goto v_resetjp_1324_;
}
else
{
lean_dec(v_x_1212_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1350_;
goto v_resetjp_1324_;
}
v___jp_1312_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; 
v___x_1314_ = lean_string_utf8_byte_size(v_snd_1311_);
v___x_1315_ = lean_unsigned_to_nat(0u);
v___x_1316_ = lean_nat_dec_eq(v___x_1314_, v___x_1315_);
if (v___x_1316_ == 0)
{
lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1317_ = lean_unsigned_to_nat(1u);
v___x_1318_ = lean_mk_empty_array_with_capacity(v___x_1317_);
v___x_1319_ = lean_array_push(v___x_1318_, v_snd_1311_);
v___x_1320_ = lean_array_push(v_pieces_1313_, v___x_1319_);
v_pieces_1219_ = v___x_1320_;
goto v___jp_1218_;
}
else
{
lean_dec(v_snd_1311_);
v_pieces_1219_ = v_pieces_1313_;
goto v___jp_1218_;
}
}
v_resetjp_1324_:
{
uint8_t v___x_1327_; lean_object* v___x_1329_; 
v___x_1327_ = 1;
if (v_isShared_1326_ == 0)
{
v___x_1329_ = v___x_1325_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_1349_, 0, v_inEmph_1321_);
lean_ctor_set_uint8(v_reuseFailAlloc_1349_, 2, v_inLink_1323_);
v___x_1329_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
lean_object* v___x_1330_; 
lean_ctor_set_uint8(v___x_1329_, 1, v___x_1327_);
v___x_1330_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1211_, v___x_1329_, v_fst_1310_, v___y_1214_, v___y_1215_, v___y_1216_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v_pieces_1333_; lean_object* v_pieces_1338_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; uint8_t v___x_1344_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_a_1331_);
lean_dec_ref_known(v___x_1330_, 1);
v___x_1341_ = lean_unsigned_to_nat(0u);
v___x_1342_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16));
v___x_1343_ = lean_string_utf8_byte_size(v_fst_1309_);
v___x_1344_ = lean_nat_dec_eq(v___x_1343_, v___x_1341_);
if (v___x_1344_ == 0)
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1345_ = lean_unsigned_to_nat(1u);
v___x_1346_ = lean_mk_empty_array_with_capacity(v___x_1345_);
v___x_1347_ = lean_array_push(v___x_1346_, v_fst_1309_);
v___x_1348_ = lean_array_push(v___x_1342_, v___x_1347_);
v_pieces_1338_ = v___x_1348_;
goto v___jp_1337_;
}
else
{
lean_dec(v_fst_1309_);
v_pieces_1338_ = v___x_1342_;
goto v___jp_1337_;
}
v___jp_1332_:
{
lean_object* v___x_1334_; 
v___x_1334_ = lean_array_push(v_pieces_1333_, v_a_1331_);
if (v_inBold_1322_ == 0)
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18));
v___x_1336_ = lean_array_push(v___x_1334_, v___x_1335_);
v_pieces_1313_ = v___x_1336_;
goto v___jp_1312_;
}
else
{
v_pieces_1313_ = v___x_1334_;
goto v___jp_1312_;
}
}
v___jp_1337_:
{
if (v_inBold_1322_ == 0)
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18));
v___x_1340_ = lean_array_push(v_pieces_1338_, v___x_1339_);
v_pieces_1333_ = v___x_1340_;
goto v___jp_1332_;
}
else
{
v_pieces_1333_ = v_pieces_1338_;
goto v___jp_1332_;
}
}
}
else
{
lean_dec(v_snd_1311_);
lean_dec(v_fst_1309_);
return v___x_1330_;
}
}
}
}
}
}
case 3:
{
lean_object* v_string_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
lean_dec_ref(v___x_1242_);
lean_dec_ref(v_x_1212_);
lean_dec_ref(v_inst_1211_);
v_string_1353_ = lean_ctor_get(v_x_1213_, 0);
lean_inc_ref(v_string_1353_);
lean_dec_ref_known(v_x_1213_, 1);
v___x_1354_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(v_string_1353_);
v___x_1355_ = lean_unsigned_to_nat(1u);
v___x_1356_ = lean_mk_empty_array_with_capacity(v___x_1355_);
v___x_1357_ = lean_array_push(v___x_1356_, v___x_1354_);
v___x_1358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1357_);
return v___x_1358_;
}
case 4:
{
uint8_t v_mode_1359_; 
lean_dec_ref(v___x_1242_);
lean_dec_ref(v_x_1212_);
lean_dec_ref(v_inst_1211_);
v_mode_1359_ = lean_ctor_get_uint8(v_x_1213_, sizeof(void*)*1);
if (v_mode_1359_ == 0)
{
lean_object* v_string_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
v_string_1360_ = lean_ctor_get(v_x_1213_, 0);
lean_inc_ref(v_string_1360_);
lean_dec_ref_known(v_x_1213_, 1);
v___x_1361_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__19));
v___x_1362_ = lean_string_append(v___x_1361_, v_string_1360_);
lean_dec_ref(v_string_1360_);
v___x_1363_ = lean_string_append(v___x_1362_, v___x_1361_);
v___x_1364_ = lean_unsigned_to_nat(1u);
v___x_1365_ = lean_mk_empty_array_with_capacity(v___x_1364_);
v___x_1366_ = lean_array_push(v___x_1365_, v___x_1363_);
v___x_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1366_);
return v___x_1367_;
}
else
{
lean_object* v_string_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v_string_1368_ = lean_ctor_get(v_x_1213_, 0);
lean_inc_ref(v_string_1368_);
lean_dec_ref_known(v_x_1213_, 1);
v___x_1369_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__20));
v___x_1370_ = lean_string_append(v___x_1369_, v_string_1368_);
lean_dec_ref(v_string_1368_);
v___x_1371_ = lean_string_append(v___x_1370_, v___x_1369_);
v___x_1372_ = lean_unsigned_to_nat(1u);
v___x_1373_ = lean_mk_empty_array_with_capacity(v___x_1372_);
v___x_1374_ = lean_array_push(v___x_1373_, v___x_1371_);
v___x_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1374_);
return v___x_1375_;
}
}
case 5:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
lean_dec_ref_known(v_x_1213_, 1);
lean_dec_ref(v___x_1242_);
lean_dec_ref(v_x_1212_);
lean_dec_ref(v_inst_1211_);
v___x_1376_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__21));
v___x_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
return v___x_1377_;
}
case 6:
{
uint8_t v_inLink_1378_; 
v_inLink_1378_ = lean_ctor_get_uint8(v_x_1212_, 2);
if (v_inLink_1378_ == 0)
{
lean_object* v_content_1379_; lean_object* v_url_1380_; uint8_t v_inEmph_1381_; uint8_t v_inBold_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1411_; 
lean_dec_ref(v___x_1242_);
v_content_1379_ = lean_ctor_get(v_x_1213_, 0);
lean_inc_ref(v_content_1379_);
v_url_1380_ = lean_ctor_get(v_x_1213_, 1);
lean_inc_ref(v_url_1380_);
lean_dec_ref_known(v_x_1213_, 2);
v_inEmph_1381_ = lean_ctor_get_uint8(v_x_1212_, 0);
v_inBold_1382_ = lean_ctor_get_uint8(v_x_1212_, 1);
v_isSharedCheck_1411_ = !lean_is_exclusive(v_x_1212_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1384_ = v_x_1212_;
v_isShared_1385_ = v_isSharedCheck_1411_;
goto v_resetjp_1383_;
}
else
{
lean_dec(v_x_1212_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1411_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
uint8_t v___x_1386_; lean_object* v___x_1388_; 
v___x_1386_ = 1;
if (v_isShared_1385_ == 0)
{
v___x_1388_ = v___x_1384_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_1410_, 0, v_inEmph_1381_);
lean_ctor_set_uint8(v_reuseFailAlloc_1410_, 1, v_inBold_1382_);
v___x_1388_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
lean_ctor_set_uint8(v___x_1388_, 2, v___x_1386_);
v___x_1389_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_1389_, 0, v_content_1379_);
v___x_1390_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1211_, v___x_1388_, v___x_1389_, v___y_1214_, v___y_1215_, v___y_1216_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1409_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1409_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1393_ = v___x_1390_;
v_isShared_1394_ = v_isSharedCheck_1409_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1390_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1409_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1407_; 
v___x_1395_ = lean_unsigned_to_nat(1u);
v___x_1396_ = lean_mk_empty_array_with_capacity(v___x_1395_);
v___x_1397_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__24));
v___x_1398_ = lean_string_append(v___x_1397_, v_url_1380_);
lean_dec_ref(v_url_1380_);
v___x_1399_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__25));
v___x_1400_ = lean_string_append(v___x_1398_, v___x_1399_);
v___x_1401_ = lean_array_push(v___x_1396_, v___x_1400_);
v___x_1402_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__26, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__26_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__26);
v___x_1403_ = lean_array_push(v___x_1402_, v_a_1391_);
v___x_1404_ = lean_array_push(v___x_1403_, v___x_1401_);
v___x_1405_ = l_Lean_Doc_joinInlines(v___x_1404_);
lean_dec_ref(v___x_1404_);
if (v_isShared_1394_ == 0)
{
lean_ctor_set(v___x_1393_, 0, v___x_1405_);
v___x_1407_ = v___x_1393_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v___x_1405_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
}
else
{
lean_dec_ref(v_url_1380_);
return v___x_1390_;
}
}
}
}
else
{
lean_object* v_content_1412_; lean_object* v___x_1413_; size_t v_sz_1414_; size_t v___x_1415_; lean_object* v___x_4828__overap_1416_; lean_object* v___x_1417_; 
v_content_1412_ = lean_ctor_get(v_x_1213_, 0);
lean_inc_ref(v_content_1412_);
lean_dec_ref_known(v_x_1213_, 2);
v___x_1413_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1413_, 0, v_inst_1211_);
lean_closure_set(v___x_1413_, 1, v_x_1212_);
v_sz_1414_ = lean_array_size(v_content_1412_);
v___x_1415_ = ((size_t)0ULL);
v___x_4828__overap_1416_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1242_, v___x_1413_, v_sz_1414_, v___x_1415_, v_content_1412_);
lean_inc(v___y_1216_);
lean_inc_ref(v___y_1215_);
lean_inc(v___y_1214_);
v___x_1417_ = lean_apply_4(v___x_4828__overap_1416_, v___y_1214_, v___y_1215_, v___y_1216_, lean_box(0));
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1426_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1420_ = v___x_1417_;
v_isShared_1421_ = v_isSharedCheck_1426_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_a_1418_);
lean_dec(v___x_1417_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1426_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
lean_object* v___x_1422_; lean_object* v___x_1424_; 
v___x_1422_ = l_Lean_Doc_joinInlines(v_a_1418_);
lean_dec(v_a_1418_);
if (v_isShared_1421_ == 0)
{
lean_ctor_set(v___x_1420_, 0, v___x_1422_);
v___x_1424_ = v___x_1420_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v___x_1422_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
}
}
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
v_a_1427_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1417_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1417_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
}
case 7:
{
lean_object* v_name_1435_; lean_object* v_content_1436_; lean_object* v___x_1437_; size_t v_sz_1438_; size_t v___x_1439_; lean_object* v___x_4831__overap_1440_; lean_object* v___x_1441_; 
v_name_1435_ = lean_ctor_get(v_x_1213_, 0);
lean_inc_ref(v_name_1435_);
v_content_1436_ = lean_ctor_get(v_x_1213_, 1);
lean_inc_ref(v_content_1436_);
lean_dec_ref_known(v_x_1213_, 2);
v___x_1437_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1437_, 0, v_inst_1211_);
lean_closure_set(v___x_1437_, 1, v_x_1212_);
v_sz_1438_ = lean_array_size(v_content_1436_);
v___x_1439_ = ((size_t)0ULL);
v___x_4831__overap_1440_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1242_, v___x_1437_, v_sz_1438_, v___x_1439_, v_content_1436_);
lean_inc(v___y_1216_);
lean_inc_ref(v___y_1215_);
lean_inc(v___y_1214_);
v___x_1441_ = lean_apply_4(v___x_4831__overap_1440_, v___y_1214_, v___y_1215_, v___y_1216_, lean_box(0));
if (lean_obj_tag(v___x_1441_) == 0)
{
lean_object* v_a_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v_a_1442_ = lean_ctor_get(v___x_1441_, 0);
lean_inc(v_a_1442_);
lean_dec_ref_known(v___x_1441_, 1);
v___x_1443_ = ((lean_object*)(l_Lean_Doc_MarkdownM_run_x27___closed__1));
v___x_1444_ = l_Lean_Doc_joinInlines(v_a_1442_);
lean_dec(v_a_1442_);
v___x_1445_ = lean_array_to_list(v___x_1444_);
v___x_1446_ = l_String_intercalate(v___x_1443_, v___x_1445_);
lean_inc_ref(v_name_1435_);
v___x_1447_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(v_name_1435_, v___x_1446_, v___y_1214_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1461_; 
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1461_ == 0)
{
lean_object* v_unused_1462_; 
v_unused_1462_ = lean_ctor_get(v___x_1447_, 0);
lean_dec(v_unused_1462_);
v___x_1449_ = v___x_1447_;
v_isShared_1450_ = v_isSharedCheck_1461_;
goto v_resetjp_1448_;
}
else
{
lean_dec(v___x_1447_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1461_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1459_; 
v___x_1451_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0));
v___x_1452_ = lean_string_append(v___x_1451_, v_name_1435_);
lean_dec_ref(v_name_1435_);
v___x_1453_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__27));
v___x_1454_ = lean_string_append(v___x_1452_, v___x_1453_);
v___x_1455_ = lean_unsigned_to_nat(1u);
v___x_1456_ = lean_mk_empty_array_with_capacity(v___x_1455_);
v___x_1457_ = lean_array_push(v___x_1456_, v___x_1454_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 0, v___x_1457_);
v___x_1459_ = v___x_1449_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v___x_1457_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
else
{
lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1470_; 
lean_dec_ref(v_name_1435_);
v_a_1463_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1465_ = v___x_1447_;
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_dec(v___x_1447_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1470_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v___x_1468_; 
if (v_isShared_1466_ == 0)
{
v___x_1468_ = v___x_1465_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v_a_1463_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
lean_dec_ref(v_name_1435_);
v_a_1471_ = lean_ctor_get(v___x_1441_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1441_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1441_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1441_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
case 8:
{
lean_object* v_alt_1479_; lean_object* v_url_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
lean_dec_ref(v___x_1242_);
lean_dec_ref(v_x_1212_);
lean_dec_ref(v_inst_1211_);
v_alt_1479_ = lean_ctor_get(v_x_1213_, 0);
lean_inc_ref(v_alt_1479_);
v_url_1480_ = lean_ctor_get(v_x_1213_, 1);
lean_inc_ref(v_url_1480_);
lean_dec_ref_known(v_x_1213_, 2);
v___x_1481_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__28));
v___x_1482_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_alt_1479_);
lean_dec_ref(v_alt_1479_);
v___x_1483_ = lean_string_append(v___x_1481_, v___x_1482_);
lean_dec_ref(v___x_1482_);
v___x_1484_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__24));
v___x_1485_ = lean_string_append(v___x_1483_, v___x_1484_);
v___x_1486_ = lean_string_append(v___x_1485_, v_url_1480_);
lean_dec_ref(v_url_1480_);
v___x_1487_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__25));
v___x_1488_ = lean_string_append(v___x_1486_, v___x_1487_);
v___x_1489_ = lean_unsigned_to_nat(1u);
v___x_1490_ = lean_mk_empty_array_with_capacity(v___x_1489_);
v___x_1491_ = lean_array_push(v___x_1490_, v___x_1488_);
v___x_1492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1491_);
return v___x_1492_;
}
case 9:
{
lean_object* v_content_1493_; lean_object* v___x_1494_; size_t v_sz_1495_; size_t v___x_1496_; lean_object* v___x_4834__overap_1497_; lean_object* v___x_1498_; 
v_content_1493_ = lean_ctor_get(v_x_1213_, 0);
lean_inc_ref(v_content_1493_);
lean_dec_ref_known(v_x_1213_, 1);
v___x_1494_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1494_, 0, v_inst_1211_);
lean_closure_set(v___x_1494_, 1, v_x_1212_);
v_sz_1495_ = lean_array_size(v_content_1493_);
v___x_1496_ = ((size_t)0ULL);
v___x_4834__overap_1497_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1242_, v___x_1494_, v_sz_1495_, v___x_1496_, v_content_1493_);
lean_inc(v___y_1216_);
lean_inc_ref(v___y_1215_);
lean_inc(v___y_1214_);
v___x_1498_ = lean_apply_4(v___x_4834__overap_1497_, v___y_1214_, v___y_1215_, v___y_1216_, lean_box(0));
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_a_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1507_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1501_ = v___x_1498_;
v_isShared_1502_ = v_isSharedCheck_1507_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_a_1499_);
lean_dec(v___x_1498_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1507_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
lean_object* v___x_1503_; lean_object* v___x_1505_; 
v___x_1503_ = l_Lean_Doc_joinInlines(v_a_1499_);
lean_dec(v_a_1499_);
if (v_isShared_1502_ == 0)
{
lean_ctor_set(v___x_1501_, 0, v___x_1503_);
v___x_1505_ = v___x_1501_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v___x_1503_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
else
{
lean_object* v_a_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1515_; 
v_a_1508_ = lean_ctor_get(v___x_1498_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1510_ = v___x_1498_;
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_a_1508_);
lean_dec(v___x_1498_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1515_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1513_; 
if (v_isShared_1511_ == 0)
{
v___x_1513_ = v___x_1510_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_a_1508_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
default: 
{
lean_object* v_container_1516_; lean_object* v_content_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
lean_dec_ref(v___x_1242_);
v_container_1516_ = lean_ctor_get(v_x_1213_, 0);
lean_inc(v_container_1516_);
v_content_1517_ = lean_ctor_get(v_x_1213_, 1);
lean_inc_ref(v_content_1517_);
lean_dec_ref_known(v_x_1213_, 2);
lean_inc_ref(v_inst_1211_);
v___x_1518_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1518_, 0, v_inst_1211_);
lean_closure_set(v___x_1518_, 1, v_x_1212_);
lean_inc(v___y_1216_);
lean_inc_ref(v___y_1215_);
lean_inc(v___y_1214_);
v___x_1519_ = lean_apply_7(v_inst_1211_, v___x_1518_, v_container_1516_, v_content_1517_, v___y_1214_, v___y_1215_, v___y_1216_, lean_box(0));
return v___x_1519_;
}
}
v___jp_1218_:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1220_ = l_Lean_Doc_joinInlines(v_pieces_1219_);
lean_dec_ref(v_pieces_1219_);
v___x_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1220_);
return v___x_1221_;
}
v___jp_1222_:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; 
v___x_1224_ = l_Lean_Doc_joinInlines(v_pieces_1223_);
lean_dec_ref(v_pieces_1223_);
v___x_1225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1224_);
return v___x_1225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown(lean_object* v_i_1520_, lean_object* v_inst_1521_, lean_object* v_x_1522_, lean_object* v_x_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_){
_start:
{
lean_object* v___x_1528_; 
v___x_1528_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1521_, v_x_1522_, v_x_1523_, v___y_1524_, v___y_1525_, v___y_1526_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___boxed(lean_object* v_i_1529_, lean_object* v_inst_1530_, lean_object* v_x_1531_, lean_object* v_x_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown(v_i_1529_, v_inst_1530_, v_x_1531_, v_x_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___redArg(lean_object* v_inst_1538_, lean_object* v_a_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1544_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
v___x_1545_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1538_, v___x_1544_, v_a_1539_, v___y_1540_, v___y_1541_, v___y_1542_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___redArg___boxed(lean_object* v_inst_1546_, lean_object* v_a_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___redArg(v_inst_1546_, v_a_1547_, v___y_1548_, v___y_1549_, v___y_1550_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec(v___y_1548_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1(lean_object* v_i_1553_, lean_object* v_inst_1554_, lean_object* v_a_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1560_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
v___x_1561_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1554_, v___x_1560_, v_a_1555_, v___y_1556_, v___y_1557_, v___y_1558_);
return v___x_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___boxed(lean_object* v_i_1562_, lean_object* v_inst_1563_, lean_object* v_a_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v_res_1569_; 
v_res_1569_ = l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1(v_i_1562_, v_inst_1563_, v_a_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___redArg(lean_object* v_inst_1570_){
_start:
{
lean_object* v___x_1571_; 
v___x_1571_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___boxed), 7, 2);
lean_closure_set(v___x_1571_, 0, lean_box(0));
lean_closure_set(v___x_1571_, 1, v_inst_1570_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownInlineOfMarkdownInline(lean_object* v_i_1572_, lean_object* v_inst_1573_){
_start:
{
lean_object* v___x_1574_; 
v___x_1574_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___boxed), 7, 2);
lean_closure_set(v___x_1574_, 0, lean_box(0));
lean_closure_set(v___x_1574_, 1, v_inst_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1(uint32_t v___x_1575_, lean_object* v_s_1576_){
_start:
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_string_push(v_s_1576_, v___x_1575_);
return v___x_1577_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1___boxed(lean_object* v___x_1578_, lean_object* v_s_1579_){
_start:
{
uint32_t v___x_3160__boxed_1580_; lean_object* v_res_1581_; 
v___x_3160__boxed_1580_ = lean_unbox_uint32(v___x_1578_);
lean_dec(v___x_1578_);
v_res_1581_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1(v___x_3160__boxed_1580_, v_s_1579_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___boxed(lean_object* v_inst_1584_, lean_object* v_inst_1585_, lean_object* v___x_1586_, lean_object* v_item_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0(v_inst_1584_, v_inst_1585_, v___x_1586_, v_item_1587_, v___y_1588_, v___y_1589_, v___y_1590_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
lean_dec(v___y_1588_);
return v_res_1592_;
}
}
static lean_object* _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1594_; lean_object* v___f_1595_; 
v___x_1594_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1;
v___f_1595_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_1595_, 0, v___x_1594_);
return v___f_1595_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2(lean_object* v_inst_1596_, lean_object* v_inst_1597_, lean_object* v___x_1598_, lean_object* v___x_1599_, lean_object* v_a_1600_, lean_object* v_x_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
lean_object* v_fst_1607_; lean_object* v_snd_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1648_; 
v_fst_1607_ = lean_ctor_get(v___y_1602_, 0);
v_snd_1608_ = lean_ctor_get(v___y_1602_, 1);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___y_1602_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1610_ = v___y_1602_;
v_isShared_1611_ = v_isSharedCheck_1648_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_snd_1608_);
lean_inc(v_fst_1607_);
lean_dec(v___y_1602_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1648_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___f_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; size_t v_sz_1620_; size_t v___x_1621_; lean_object* v___x_3101__overap_1622_; lean_object* v___x_1623_; 
lean_inc(v_snd_1608_);
v___x_1612_ = l_Nat_reprFast(v_snd_1608_);
v___x_1613_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__0));
v___x_1614_ = lean_string_append(v___x_1612_, v___x_1613_);
v___x_1615_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___f_1616_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1, &l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__1);
v___x_1617_ = lean_string_utf8_byte_size(v___x_1614_);
v___x_1618_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_box(0), v___f_1616_, v___x_1617_, v___x_1615_);
v___x_1619_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1619_, 0, v_inst_1596_);
lean_closure_set(v___x_1619_, 1, v_inst_1597_);
v_sz_1620_ = lean_array_size(v_a_1600_);
v___x_1621_ = ((size_t)0ULL);
v___x_3101__overap_1622_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1598_, v___x_1619_, v_sz_1620_, v___x_1621_, v_a_1600_);
lean_inc(v___y_1605_);
lean_inc_ref(v___y_1604_);
lean_inc(v___y_1603_);
v___x_1623_ = lean_apply_4(v___x_3101__overap_1622_, v___y_1603_, v___y_1604_, v___y_1605_, lean_box(0));
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1639_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1626_ = v___x_1623_;
v_isShared_1627_ = v_isSharedCheck_1639_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_a_1624_);
lean_dec(v___x_1623_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1639_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1633_; 
v___x_1628_ = l_Lean_Doc_joinBlocks(v_a_1624_);
lean_dec(v_a_1624_);
v___x_1629_ = l_Lean_Doc_prefixListLines(v___x_1614_, v___x_1618_, v___x_1628_);
v___x_1630_ = lean_array_push(v_fst_1607_, v___x_1629_);
v___x_1631_ = lean_nat_add(v_snd_1608_, v___x_1599_);
lean_dec(v_snd_1608_);
if (v_isShared_1611_ == 0)
{
lean_ctor_set(v___x_1610_, 1, v___x_1631_);
lean_ctor_set(v___x_1610_, 0, v___x_1630_);
v___x_1633_ = v___x_1610_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v___x_1630_);
lean_ctor_set(v_reuseFailAlloc_1638_, 1, v___x_1631_);
v___x_1633_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
lean_object* v___x_1634_; lean_object* v___x_1636_; 
v___x_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 0, v___x_1634_);
v___x_1636_ = v___x_1626_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v___x_1634_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
}
else
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
lean_dec(v___x_1618_);
lean_dec_ref(v___x_1614_);
lean_del_object(v___x_1610_);
lean_dec(v_snd_1608_);
lean_dec(v_fst_1607_);
v_a_1640_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1623_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1623_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___boxed(lean_object* v_inst_1649_, lean_object* v_inst_1650_, lean_object* v___x_1651_, lean_object* v___x_1652_, lean_object* v_a_1653_, lean_object* v_x_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2(v_inst_1649_, v_inst_1650_, v___x_1651_, v___x_1652_, v_a_1653_, v_x_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
lean_dec(v___y_1656_);
lean_dec(v___x_1652_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3(lean_object* v_inst_1666_, lean_object* v_inst_1667_, lean_object* v___x_1668_, lean_object* v_item_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v___x_1674_; lean_object* v_term_1675_; lean_object* v_desc_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1674_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
v_term_1675_ = lean_ctor_get(v_item_1669_, 0);
lean_inc_ref(v_term_1675_);
v_desc_1676_ = lean_ctor_get(v_item_1669_, 1);
lean_inc_ref(v_desc_1676_);
lean_dec_ref(v_item_1669_);
v___x_1677_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1677_, 0, v_term_1675_);
lean_inc_ref(v_inst_1666_);
v___x_1678_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1666_, v___x_1674_, v___x_1677_, v___y_1670_, v___y_1671_, v___y_1672_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v_a_1679_; lean_object* v___x_1680_; size_t v_sz_1681_; size_t v___x_1682_; lean_object* v___x_3129__overap_1683_; lean_object* v___x_1684_; 
v_a_1679_ = lean_ctor_get(v___x_1678_, 0);
lean_inc(v_a_1679_);
lean_dec_ref_known(v___x_1678_, 1);
v___x_1680_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1680_, 0, v_inst_1666_);
lean_closure_set(v___x_1680_, 1, v_inst_1667_);
v_sz_1681_ = lean_array_size(v_desc_1676_);
v___x_1682_ = ((size_t)0ULL);
lean_inc_ref(v_desc_1676_);
v___x_3129__overap_1683_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1668_, v___x_1680_, v_sz_1681_, v___x_1682_, v_desc_1676_);
lean_inc(v___y_1672_);
lean_inc_ref(v___y_1671_);
lean_inc(v___y_1670_);
v___x_1684_ = lean_apply_4(v___x_3129__overap_1683_, v___y_1670_, v___y_1671_, v___y_1672_, lean_box(0));
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_object* v_a_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1712_; 
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1687_ = v___x_1684_;
v_isShared_1688_ = v_isSharedCheck_1712_;
goto v_resetjp_1686_;
}
else
{
lean_inc(v_a_1685_);
lean_dec(v___x_1684_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1712_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___y_1690_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; uint8_t v___x_1706_; 
v___x_1697_ = lean_unsigned_to_nat(1u);
v___x_1698_ = lean_mk_empty_array_with_capacity(v___x_1697_);
v___x_1699_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__1));
v___x_1700_ = lean_unsigned_to_nat(2u);
v___x_1701_ = lean_mk_empty_array_with_capacity(v___x_1700_);
v___x_1702_ = lean_array_push(v___x_1701_, v_a_1679_);
v___x_1703_ = lean_array_push(v___x_1702_, v___x_1699_);
v___x_1704_ = l_Lean_Doc_joinInlines(v___x_1703_);
lean_dec_ref(v___x_1703_);
v___x_1705_ = lean_array_get_size(v_desc_1676_);
lean_dec_ref(v_desc_1676_);
v___x_1706_ = lean_nat_dec_le(v___x_1705_, v___x_1697_);
if (v___x_1706_ == 0)
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1707_ = lean_array_push(v___x_1698_, v___x_1704_);
v___x_1708_ = l_Array_append___redArg(v___x_1707_, v_a_1685_);
lean_dec(v_a_1685_);
v___x_1709_ = l_Lean_Doc_joinBlocks(v___x_1708_);
lean_dec_ref(v___x_1708_);
v___y_1690_ = v___x_1709_;
goto v___jp_1689_;
}
else
{
lean_object* v___x_1710_; lean_object* v___x_1711_; 
lean_dec_ref(v___x_1698_);
v___x_1710_ = l_Lean_Doc_joinBlocks(v_a_1685_);
lean_dec(v_a_1685_);
v___x_1711_ = l_Array_append___redArg(v___x_1704_, v___x_1710_);
lean_dec_ref(v___x_1710_);
v___y_1690_ = v___x_1711_;
goto v___jp_1689_;
}
v___jp_1689_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1695_; 
v___x_1691_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0));
v___x_1692_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1));
v___x_1693_ = l_Lean_Doc_prefixListLines(v___x_1691_, v___x_1692_, v___y_1690_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set(v___x_1687_, 0, v___x_1693_);
v___x_1695_ = v___x_1687_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1693_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
lean_dec(v_a_1679_);
lean_dec_ref(v_desc_1676_);
v_a_1713_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1684_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1684_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
else
{
lean_dec_ref(v_desc_1676_);
lean_dec_ref(v___x_1668_);
lean_dec_ref(v_inst_1667_);
lean_dec_ref(v_inst_1666_);
return v___x_1678_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___boxed(lean_object* v_inst_1721_, lean_object* v_inst_1722_, lean_object* v___x_1723_, lean_object* v_item_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3(v_inst_1721_, v_inst_1722_, v___x_1723_, v_item_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec(v___y_1725_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(lean_object* v_inst_1731_, lean_object* v_inst_1732_, lean_object* v_x_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_){
_start:
{
lean_object* v___x_1738_; lean_object* v_toApplicative_1739_; lean_object* v_toFunctor_1740_; lean_object* v_toSeq_1741_; lean_object* v_toSeqLeft_1742_; lean_object* v_toSeqRight_1743_; lean_object* v___f_1744_; lean_object* v___f_1745_; lean_object* v___f_1746_; lean_object* v___f_1747_; lean_object* v___x_1748_; lean_object* v___f_1749_; lean_object* v___f_1750_; lean_object* v___f_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1738_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11);
v_toApplicative_1739_ = lean_ctor_get(v___x_1738_, 0);
v_toFunctor_1740_ = lean_ctor_get(v_toApplicative_1739_, 0);
v_toSeq_1741_ = lean_ctor_get(v_toApplicative_1739_, 2);
v_toSeqLeft_1742_ = lean_ctor_get(v_toApplicative_1739_, 3);
v_toSeqRight_1743_ = lean_ctor_get(v_toApplicative_1739_, 4);
v___f_1744_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12));
v___f_1745_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_1740_, 2);
v___f_1746_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1746_, 0, v_toFunctor_1740_);
v___f_1747_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1747_, 0, v_toFunctor_1740_);
v___x_1748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___f_1746_);
lean_ctor_set(v___x_1748_, 1, v___f_1747_);
lean_inc(v_toSeqRight_1743_);
v___f_1749_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1749_, 0, v_toSeqRight_1743_);
lean_inc(v_toSeqLeft_1742_);
v___f_1750_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1750_, 0, v_toSeqLeft_1742_);
lean_inc(v_toSeq_1741_);
v___f_1751_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1751_, 0, v_toSeq_1741_);
v___x_1752_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1748_);
lean_ctor_set(v___x_1752_, 1, v___f_1744_);
lean_ctor_set(v___x_1752_, 2, v___f_1751_);
lean_ctor_set(v___x_1752_, 3, v___f_1750_);
lean_ctor_set(v___x_1752_, 4, v___f_1749_);
v___x_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
lean_ctor_set(v___x_1753_, 1, v___f_1745_);
v___x_1754_ = l_StateRefT_x27_instMonad___redArg(v___x_1753_);
switch(lean_obj_tag(v_x_1733_))
{
case 0:
{
lean_object* v_contents_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1764_; 
lean_dec_ref(v___x_1754_);
lean_dec_ref(v_inst_1732_);
v_contents_1755_ = lean_ctor_get(v_x_1733_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v_x_1733_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1757_ = v_x_1733_;
v_isShared_1758_ = v_isSharedCheck_1764_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_contents_1755_);
lean_dec(v_x_1733_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1764_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1759_; lean_object* v___x_1761_; 
v___x_1759_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
if (v_isShared_1758_ == 0)
{
lean_ctor_set_tag(v___x_1757_, 9);
v___x_1761_ = v___x_1757_;
goto v_reusejp_1760_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_contents_1755_);
v___x_1761_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1760_;
}
v_reusejp_1760_:
{
lean_object* v___x_1762_; 
v___x_1762_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg(v_inst_1731_, v___x_1759_, v___x_1761_, v___y_1734_, v___y_1735_, v___y_1736_);
return v___x_1762_;
}
}
}
case 1:
{
lean_object* v_content_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1773_; 
lean_dec_ref(v___x_1754_);
lean_dec_ref(v_inst_1732_);
lean_dec_ref(v_inst_1731_);
v_content_1765_ = lean_ctor_get(v_x_1733_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v_x_1733_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1767_ = v_x_1733_;
v_isShared_1768_ = v_isSharedCheck_1773_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_content_1765_);
lean_dec(v_x_1733_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1773_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1769_; lean_object* v___x_1771_; 
v___x_1769_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_codeBlockLines(v_content_1765_);
if (v_isShared_1768_ == 0)
{
lean_ctor_set_tag(v___x_1767_, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1769_);
v___x_1771_ = v___x_1767_;
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
case 2:
{
lean_object* v_items_1774_; lean_object* v___f_1775_; size_t v_sz_1776_; size_t v___x_1777_; lean_object* v___x_3011__overap_1778_; lean_object* v___x_1779_; 
v_items_1774_ = lean_ctor_get(v_x_1733_, 0);
lean_inc_ref(v_items_1774_);
lean_dec_ref_known(v_x_1733_, 1);
lean_inc_ref(v___x_1754_);
v___f_1775_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1775_, 0, v_inst_1731_);
lean_closure_set(v___f_1775_, 1, v_inst_1732_);
lean_closure_set(v___f_1775_, 2, v___x_1754_);
v_sz_1776_ = lean_array_size(v_items_1774_);
v___x_1777_ = ((size_t)0ULL);
v___x_3011__overap_1778_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1754_, v___f_1775_, v_sz_1776_, v___x_1777_, v_items_1774_);
lean_inc(v___y_1736_);
lean_inc_ref(v___y_1735_);
lean_inc(v___y_1734_);
v___x_1779_ = lean_apply_4(v___x_3011__overap_1778_, v___y_1734_, v___y_1735_, v___y_1736_, lean_box(0));
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_object* v_a_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1788_; 
v_a_1780_ = lean_ctor_get(v___x_1779_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1779_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1782_ = v___x_1779_;
v_isShared_1783_ = v_isSharedCheck_1788_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_a_1780_);
lean_dec(v___x_1779_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1788_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1784_; lean_object* v___x_1786_; 
v___x_1784_ = l_Lean_Doc_joinBlocks(v_a_1780_);
lean_dec(v_a_1780_);
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 0, v___x_1784_);
v___x_1786_ = v___x_1782_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v___x_1784_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1796_; 
v_a_1789_ = lean_ctor_get(v___x_1779_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1779_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1791_ = v___x_1779_;
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1779_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_a_1789_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
}
case 3:
{
lean_object* v_start_1797_; lean_object* v_items_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1834_; 
v_start_1797_ = lean_ctor_get(v_x_1733_, 0);
v_items_1798_ = lean_ctor_get(v_x_1733_, 1);
v_isSharedCheck_1834_ = !lean_is_exclusive(v_x_1733_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1800_ = v_x_1733_;
v_isShared_1801_ = v_isSharedCheck_1834_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_items_1798_);
lean_inc(v_start_1797_);
lean_dec(v_x_1733_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1834_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v_out_1802_; lean_object* v___x_1803_; lean_object* v___f_1804_; lean_object* v___y_1806_; lean_object* v___x_1832_; uint8_t v___x_1833_; 
v_out_1802_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16));
v___x_1803_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v___x_1754_);
v___f_1804_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___boxed), 11, 4);
lean_closure_set(v___f_1804_, 0, v_inst_1731_);
lean_closure_set(v___f_1804_, 1, v_inst_1732_);
lean_closure_set(v___f_1804_, 2, v___x_1754_);
lean_closure_set(v___f_1804_, 3, v___x_1803_);
v___x_1832_ = l_Int_toNat(v_start_1797_);
lean_dec(v_start_1797_);
v___x_1833_ = lean_nat_dec_le(v___x_1803_, v___x_1832_);
if (v___x_1833_ == 0)
{
lean_dec(v___x_1832_);
v___y_1806_ = v___x_1803_;
goto v___jp_1805_;
}
else
{
v___y_1806_ = v___x_1832_;
goto v___jp_1805_;
}
v___jp_1805_:
{
lean_object* v___x_1808_; 
if (v_isShared_1801_ == 0)
{
lean_ctor_set_tag(v___x_1800_, 0);
lean_ctor_set(v___x_1800_, 1, v___y_1806_);
lean_ctor_set(v___x_1800_, 0, v_out_1802_);
v___x_1808_ = v___x_1800_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_out_1802_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v___y_1806_);
v___x_1808_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
size_t v_sz_1809_; size_t v___x_1810_; lean_object* v___x_2827__overap_1811_; lean_object* v___x_1812_; 
v_sz_1809_ = lean_array_size(v_items_1798_);
v___x_1810_ = ((size_t)0ULL);
v___x_2827__overap_1811_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1754_, v_items_1798_, v___f_1804_, v_sz_1809_, v___x_1810_, v___x_1808_);
lean_inc(v___y_1736_);
lean_inc_ref(v___y_1735_);
lean_inc(v___y_1734_);
v___x_1812_ = lean_apply_4(v___x_2827__overap_1811_, v___y_1734_, v___y_1735_, v___y_1736_, lean_box(0));
if (lean_obj_tag(v___x_1812_) == 0)
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1822_; 
v_a_1813_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1822_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1815_ = v___x_1812_;
v_isShared_1816_ = v_isSharedCheck_1822_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1812_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1822_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v_fst_1817_; lean_object* v___x_1818_; lean_object* v___x_1820_; 
v_fst_1817_ = lean_ctor_get(v_a_1813_, 0);
lean_inc(v_fst_1817_);
lean_dec(v_a_1813_);
v___x_1818_ = l_Lean_Doc_joinBlocks(v_fst_1817_);
lean_dec(v_fst_1817_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 0, v___x_1818_);
v___x_1820_ = v___x_1815_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v___x_1818_);
v___x_1820_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
return v___x_1820_;
}
}
}
else
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1830_; 
v_a_1823_ = lean_ctor_get(v___x_1812_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1812_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1825_ = v___x_1812_;
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1812_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1826_ == 0)
{
v___x_1828_ = v___x_1825_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1823_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
}
}
}
}
}
case 4:
{
lean_object* v_items_1835_; lean_object* v___f_1836_; size_t v_sz_1837_; size_t v___x_1838_; lean_object* v___x_3017__overap_1839_; lean_object* v___x_1840_; 
v_items_1835_ = lean_ctor_get(v_x_1733_, 0);
lean_inc_ref(v_items_1835_);
lean_dec_ref_known(v_x_1733_, 1);
lean_inc_ref(v___x_1754_);
v___f_1836_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___boxed), 8, 3);
lean_closure_set(v___f_1836_, 0, v_inst_1731_);
lean_closure_set(v___f_1836_, 1, v_inst_1732_);
lean_closure_set(v___f_1836_, 2, v___x_1754_);
v_sz_1837_ = lean_array_size(v_items_1835_);
v___x_1838_ = ((size_t)0ULL);
v___x_3017__overap_1839_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1754_, v___f_1836_, v_sz_1837_, v___x_1838_, v_items_1835_);
lean_inc(v___y_1736_);
lean_inc_ref(v___y_1735_);
lean_inc(v___y_1734_);
v___x_1840_ = lean_apply_4(v___x_3017__overap_1839_, v___y_1734_, v___y_1735_, v___y_1736_, lean_box(0));
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1849_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1843_ = v___x_1840_;
v_isShared_1844_ = v_isSharedCheck_1849_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1840_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1849_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1845_; lean_object* v___x_1847_; 
v___x_1845_ = l_Lean_Doc_joinBlocks(v_a_1841_);
lean_dec(v_a_1841_);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 0, v___x_1845_);
v___x_1847_ = v___x_1843_;
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
else
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
v_a_1850_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1840_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1840_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
case 5:
{
lean_object* v_items_1858_; lean_object* v___x_1859_; size_t v_sz_1860_; size_t v___x_1861_; lean_object* v___x_3020__overap_1862_; lean_object* v___x_1863_; 
v_items_1858_ = lean_ctor_get(v_x_1733_, 0);
lean_inc_ref(v_items_1858_);
lean_dec_ref_known(v_x_1733_, 1);
v___x_1859_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1859_, 0, v_inst_1731_);
lean_closure_set(v___x_1859_, 1, v_inst_1732_);
v_sz_1860_ = lean_array_size(v_items_1858_);
v___x_1861_ = ((size_t)0ULL);
v___x_3020__overap_1862_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1754_, v___x_1859_, v_sz_1860_, v___x_1861_, v_items_1858_);
lean_inc(v___y_1736_);
lean_inc_ref(v___y_1735_);
lean_inc(v___y_1734_);
v___x_1863_ = lean_apply_4(v___x_3020__overap_1862_, v___y_1734_, v___y_1735_, v___y_1736_, lean_box(0));
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1874_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1866_ = v___x_1863_;
v_isShared_1867_ = v_isSharedCheck_1874_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1863_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1874_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1872_; 
v___x_1868_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___closed__0));
v___x_1869_ = l_Lean_Doc_joinBlocks(v_a_1864_);
lean_dec(v_a_1864_);
v___x_1870_ = l_Lean_Doc_prefixLines(v___x_1868_, v___x_1869_);
if (v_isShared_1867_ == 0)
{
lean_ctor_set(v___x_1866_, 0, v___x_1870_);
v___x_1872_ = v___x_1866_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1873_; 
v_reuseFailAlloc_1873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1873_, 0, v___x_1870_);
v___x_1872_ = v_reuseFailAlloc_1873_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
return v___x_1872_;
}
}
}
else
{
lean_object* v_a_1875_; lean_object* v___x_1877_; uint8_t v_isShared_1878_; uint8_t v_isSharedCheck_1882_; 
v_a_1875_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1877_ = v___x_1863_;
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
else
{
lean_inc(v_a_1875_);
lean_dec(v___x_1863_);
v___x_1877_ = lean_box(0);
v_isShared_1878_ = v_isSharedCheck_1882_;
goto v_resetjp_1876_;
}
v_resetjp_1876_:
{
lean_object* v___x_1880_; 
if (v_isShared_1878_ == 0)
{
v___x_1880_ = v___x_1877_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_a_1875_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
case 6:
{
lean_object* v_content_1883_; lean_object* v___x_1884_; size_t v_sz_1885_; size_t v___x_1886_; lean_object* v___x_3023__overap_1887_; lean_object* v___x_1888_; 
v_content_1883_ = lean_ctor_get(v_x_1733_, 0);
lean_inc_ref(v_content_1883_);
lean_dec_ref_known(v_x_1733_, 1);
v___x_1884_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1884_, 0, v_inst_1731_);
lean_closure_set(v___x_1884_, 1, v_inst_1732_);
v_sz_1885_ = lean_array_size(v_content_1883_);
v___x_1886_ = ((size_t)0ULL);
v___x_3023__overap_1887_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1754_, v___x_1884_, v_sz_1885_, v___x_1886_, v_content_1883_);
lean_inc(v___y_1736_);
lean_inc_ref(v___y_1735_);
lean_inc(v___y_1734_);
v___x_1888_ = lean_apply_4(v___x_3023__overap_1887_, v___y_1734_, v___y_1735_, v___y_1736_, lean_box(0));
if (lean_obj_tag(v___x_1888_) == 0)
{
lean_object* v_a_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1897_; 
v_a_1889_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1891_ = v___x_1888_;
v_isShared_1892_ = v_isSharedCheck_1897_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_a_1889_);
lean_dec(v___x_1888_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1897_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1893_; lean_object* v___x_1895_; 
v___x_1893_ = l_Lean_Doc_joinBlocks(v_a_1889_);
lean_dec(v_a_1889_);
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 0, v___x_1893_);
v___x_1895_ = v___x_1891_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v___x_1893_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
else
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1905_; 
v_a_1898_ = lean_ctor_get(v___x_1888_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1888_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1900_ = v___x_1888_;
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1888_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1903_; 
if (v_isShared_1901_ == 0)
{
v___x_1903_ = v___x_1900_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_a_1898_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
}
default: 
{
lean_object* v_container_1906_; lean_object* v_content_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
lean_dec_ref(v___x_1754_);
v_container_1906_ = lean_ctor_get(v_x_1733_, 0);
lean_inc(v_container_1906_);
v_content_1907_ = lean_ctor_get(v_x_1733_, 1);
lean_inc_ref(v_content_1907_);
lean_dec_ref_known(v_x_1733_, 2);
v___x_1908_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
lean_inc_ref(v_inst_1731_);
v___x_1909_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___boxed), 8, 3);
lean_closure_set(v___x_1909_, 0, lean_box(0));
lean_closure_set(v___x_1909_, 1, v_inst_1731_);
lean_closure_set(v___x_1909_, 2, v___x_1908_);
lean_inc_ref(v_inst_1732_);
v___x_1910_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1910_, 0, v_inst_1731_);
lean_closure_set(v___x_1910_, 1, v_inst_1732_);
lean_inc(v___y_1736_);
lean_inc_ref(v___y_1735_);
lean_inc(v___y_1734_);
v___x_1911_ = lean_apply_8(v_inst_1732_, v___x_1909_, v___x_1910_, v_container_1906_, v_content_1907_, v___y_1734_, v___y_1735_, v___y_1736_, lean_box(0));
return v___x_1911_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed(lean_object* v_inst_1912_, lean_object* v_inst_1913_, lean_object* v_x_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v_res_1919_; 
v_res_1919_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(v_inst_1912_, v_inst_1913_, v_x_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
lean_dec(v___y_1915_);
return v_res_1919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0(lean_object* v_inst_1920_, lean_object* v_inst_1921_, lean_object* v___x_1922_, lean_object* v_item_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_){
_start:
{
lean_object* v___x_1928_; size_t v_sz_1929_; size_t v___x_1930_; lean_object* v___x_3068__overap_1931_; lean_object* v___x_1932_; 
v___x_1928_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___boxed), 7, 2);
lean_closure_set(v___x_1928_, 0, v_inst_1920_);
lean_closure_set(v___x_1928_, 1, v_inst_1921_);
v_sz_1929_ = lean_array_size(v_item_1923_);
v___x_1930_ = ((size_t)0ULL);
v___x_3068__overap_1931_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1922_, v___x_1928_, v_sz_1929_, v___x_1930_, v_item_1923_);
lean_inc(v___y_1926_);
lean_inc_ref(v___y_1925_);
lean_inc(v___y_1924_);
v___x_1932_ = lean_apply_4(v___x_3068__overap_1931_, v___y_1924_, v___y_1925_, v___y_1926_, lean_box(0));
if (lean_obj_tag(v___x_1932_) == 0)
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1944_; 
v_a_1933_ = lean_ctor_get(v___x_1932_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1935_ = v___x_1932_;
v_isShared_1936_ = v_isSharedCheck_1944_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1932_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1944_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1937_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0));
v___x_1938_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1));
v___x_1939_ = l_Lean_Doc_joinBlocks(v_a_1933_);
lean_dec(v_a_1933_);
v___x_1940_ = l_Lean_Doc_prefixListLines(v___x_1937_, v___x_1938_, v___x_1939_);
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 0, v___x_1940_);
v___x_1942_ = v___x_1935_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
else
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
v_a_1945_ = lean_ctor_get(v___x_1932_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___x_1932_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___x_1932_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1932_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown(lean_object* v_i_1953_, lean_object* v_b_1954_, lean_object* v_inst_1955_, lean_object* v_inst_1956_, lean_object* v_x_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
lean_object* v___x_1962_; 
v___x_1962_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(v_inst_1955_, v_inst_1956_, v_x_1957_, v___y_1958_, v___y_1959_, v___y_1960_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___boxed(lean_object* v_i_1963_, lean_object* v_b_1964_, lean_object* v_inst_1965_, lean_object* v_inst_1966_, lean_object* v_x_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_){
_start:
{
lean_object* v_res_1972_; 
v_res_1972_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown(v_i_1963_, v_b_1964_, v_inst_1965_, v_inst_1966_, v_x_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v___y_1968_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___redArg(lean_object* v_inst_1973_, lean_object* v_inst_1974_, lean_object* v_a_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v___x_1980_; 
v___x_1980_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(v_inst_1973_, v_inst_1974_, v_a_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___redArg___boxed(lean_object* v_inst_1981_, lean_object* v_inst_1982_, lean_object* v_a_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___redArg(v_inst_1981_, v_inst_1982_, v_a_1983_, v___y_1984_, v___y_1985_, v___y_1986_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1(lean_object* v_i_1989_, lean_object* v_b_1990_, lean_object* v_inst_1991_, lean_object* v_inst_1992_, lean_object* v_a_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_){
_start:
{
lean_object* v___x_1998_; 
v___x_1998_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg(v_inst_1991_, v_inst_1992_, v_a_1993_, v___y_1994_, v___y_1995_, v___y_1996_);
return v___x_1998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed(lean_object* v_i_1999_, lean_object* v_b_2000_, lean_object* v_inst_2001_, lean_object* v_inst_2002_, lean_object* v_a_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1(v_i_1999_, v_b_2000_, v_inst_2001_, v_inst_2002_, v_a_2003_, v___y_2004_, v___y_2005_, v___y_2006_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
lean_dec(v___y_2004_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___redArg(lean_object* v_inst_2009_, lean_object* v_inst_2010_){
_start:
{
lean_object* v___x_2011_; 
v___x_2011_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed), 9, 4);
lean_closure_set(v___x_2011_, 0, lean_box(0));
lean_closure_set(v___x_2011_, 1, lean_box(0));
lean_closure_set(v___x_2011_, 2, v_inst_2009_);
lean_closure_set(v___x_2011_, 3, v_inst_2010_);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock(lean_object* v_i_2012_, lean_object* v_b_2013_, lean_object* v_inst_2014_, lean_object* v_inst_2015_){
_start:
{
lean_object* v___x_2016_; 
v___x_2016_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed), 9, 4);
lean_closure_set(v___x_2016_, 0, lean_box(0));
lean_closure_set(v___x_2016_, 1, lean_box(0));
lean_closure_set(v___x_2016_, 2, v_inst_2014_);
lean_closure_set(v___x_2016_, 3, v_inst_2015_);
return v___x_2016_;
}
}
static lean_object* _init_l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_2017_; lean_object* v___x_2018_; 
v___x_2017_ = 35;
v___x_2018_ = lean_box_uint32(v___x_2017_);
return v___x_2018_;
}
}
static lean_object* _init_l_Lean_Doc_partMarkdown___redArg___closed__0(void){
_start:
{
lean_object* v___x_2019_; lean_object* v___f_2020_; 
v___x_2019_ = l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1;
v___f_2020_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2020_, 0, v___x_2019_);
return v___f_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___redArg___boxed(lean_object* v_inst_2021_, lean_object* v_inst_2022_, lean_object* v_level_2023_, lean_object* v_part_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_){
_start:
{
lean_object* v_res_2029_; 
v_res_2029_ = l_Lean_Doc_partMarkdown___redArg(v_inst_2021_, v_inst_2022_, v_level_2023_, v_part_2024_, v___y_2025_, v___y_2026_, v___y_2027_);
lean_dec(v___y_2027_);
lean_dec_ref(v___y_2026_);
lean_dec(v___y_2025_);
lean_dec(v_level_2023_);
return v_res_2029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___redArg(lean_object* v_inst_2030_, lean_object* v_inst_2031_, lean_object* v_level_2032_, lean_object* v_part_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v___x_2038_; lean_object* v_toApplicative_2039_; lean_object* v_toFunctor_2040_; lean_object* v_toSeq_2041_; lean_object* v_toSeqLeft_2042_; lean_object* v_toSeqRight_2043_; lean_object* v___f_2044_; lean_object* v___f_2045_; lean_object* v___f_2046_; lean_object* v___f_2047_; lean_object* v___x_2048_; lean_object* v___f_2049_; lean_object* v___f_2050_; lean_object* v___f_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v_title_2055_; lean_object* v_content_2056_; lean_object* v_subParts_2057_; lean_object* v___x_2058_; size_t v_sz_2059_; size_t v___x_2060_; lean_object* v___x_778__overap_2061_; lean_object* v___x_2062_; 
v___x_2038_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11);
v_toApplicative_2039_ = lean_ctor_get(v___x_2038_, 0);
v_toFunctor_2040_ = lean_ctor_get(v_toApplicative_2039_, 0);
v_toSeq_2041_ = lean_ctor_get(v_toApplicative_2039_, 2);
v_toSeqLeft_2042_ = lean_ctor_get(v_toApplicative_2039_, 3);
v_toSeqRight_2043_ = lean_ctor_get(v_toApplicative_2039_, 4);
v___f_2044_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12));
v___f_2045_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_2040_, 2);
v___f_2046_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2046_, 0, v_toFunctor_2040_);
v___f_2047_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2047_, 0, v_toFunctor_2040_);
v___x_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2048_, 0, v___f_2046_);
lean_ctor_set(v___x_2048_, 1, v___f_2047_);
lean_inc(v_toSeqRight_2043_);
v___f_2049_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2049_, 0, v_toSeqRight_2043_);
lean_inc(v_toSeqLeft_2042_);
v___f_2050_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2050_, 0, v_toSeqLeft_2042_);
lean_inc(v_toSeq_2041_);
v___f_2051_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2051_, 0, v_toSeq_2041_);
v___x_2052_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2048_);
lean_ctor_set(v___x_2052_, 1, v___f_2044_);
lean_ctor_set(v___x_2052_, 2, v___f_2051_);
lean_ctor_set(v___x_2052_, 3, v___f_2050_);
lean_ctor_set(v___x_2052_, 4, v___f_2049_);
v___x_2053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2052_);
lean_ctor_set(v___x_2053_, 1, v___f_2045_);
v___x_2054_ = l_StateRefT_x27_instMonad___redArg(v___x_2053_);
v_title_2055_ = lean_ctor_get(v_part_2033_, 0);
lean_inc_ref(v_title_2055_);
v_content_2056_ = lean_ctor_get(v_part_2033_, 3);
lean_inc_ref(v_content_2056_);
v_subParts_2057_ = lean_ctor_get(v_part_2033_, 4);
lean_inc_ref(v_subParts_2057_);
lean_dec_ref(v_part_2033_);
lean_inc_ref(v_inst_2030_);
v___x_2058_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownInlineOfMarkdownInline___private__1___boxed), 7, 2);
lean_closure_set(v___x_2058_, 0, lean_box(0));
lean_closure_set(v___x_2058_, 1, v_inst_2030_);
v_sz_2059_ = lean_array_size(v_title_2055_);
v___x_2060_ = ((size_t)0ULL);
lean_inc_ref(v___x_2054_);
v___x_778__overap_2061_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2054_, v___x_2058_, v_sz_2059_, v___x_2060_, v_title_2055_);
lean_inc(v___y_2036_);
lean_inc_ref(v___y_2035_);
lean_inc(v___y_2034_);
v___x_2062_ = lean_apply_4(v___x_778__overap_2061_, v___y_2034_, v___y_2035_, v___y_2036_, lean_box(0));
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2064_; lean_object* v___f_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; size_t v_sz_2077_; lean_object* v___x_781__overap_2078_; lean_object* v___x_2079_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2063_);
lean_dec_ref_known(v___x_2062_, 1);
v___x_2064_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___f_2065_ = lean_obj_once(&l_Lean_Doc_partMarkdown___redArg___closed__0, &l_Lean_Doc_partMarkdown___redArg___closed__0_once, _init_l_Lean_Doc_partMarkdown___redArg___closed__0);
v___x_2066_ = lean_unsigned_to_nat(1u);
v___x_2067_ = lean_nat_add(v_level_2032_, v___x_2066_);
lean_inc(v___x_2067_);
v___x_2068_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop(lean_box(0), v___f_2065_, v___x_2067_, v___x_2064_);
v___x_2069_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0));
v___x_2070_ = lean_string_append(v___x_2068_, v___x_2069_);
v___x_2071_ = lean_mk_empty_array_with_capacity(v___x_2066_);
lean_inc_ref_n(v___x_2071_, 2);
v___x_2072_ = lean_array_push(v___x_2071_, v___x_2070_);
v___x_2073_ = lean_array_push(v___x_2071_, v___x_2072_);
v___x_2074_ = l_Array_append___redArg(v___x_2073_, v_a_2063_);
lean_dec(v_a_2063_);
v___x_2075_ = l_Lean_Doc_joinInlines(v___x_2074_);
lean_dec_ref(v___x_2074_);
lean_inc_ref(v_inst_2031_);
lean_inc_ref(v_inst_2030_);
v___x_2076_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed), 9, 4);
lean_closure_set(v___x_2076_, 0, lean_box(0));
lean_closure_set(v___x_2076_, 1, lean_box(0));
lean_closure_set(v___x_2076_, 2, v_inst_2030_);
lean_closure_set(v___x_2076_, 3, v_inst_2031_);
v_sz_2077_ = lean_array_size(v_content_2056_);
lean_inc_ref(v___x_2054_);
v___x_781__overap_2078_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2054_, v___x_2076_, v_sz_2077_, v___x_2060_, v_content_2056_);
lean_inc(v___y_2036_);
lean_inc_ref(v___y_2035_);
lean_inc(v___y_2034_);
v___x_2079_ = lean_apply_4(v___x_781__overap_2078_, v___y_2034_, v___y_2035_, v___y_2036_, lean_box(0));
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; lean_object* v___x_2081_; size_t v_sz_2082_; lean_object* v___x_784__overap_2083_; lean_object* v___x_2084_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2080_);
lean_dec_ref_known(v___x_2079_, 1);
v___x_2081_ = lean_alloc_closure((void*)(l_Lean_Doc_partMarkdown___redArg___boxed), 8, 3);
lean_closure_set(v___x_2081_, 0, v_inst_2030_);
lean_closure_set(v___x_2081_, 1, v_inst_2031_);
lean_closure_set(v___x_2081_, 2, v___x_2067_);
v_sz_2082_ = lean_array_size(v_subParts_2057_);
v___x_784__overap_2083_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2054_, v___x_2081_, v_sz_2082_, v___x_2060_, v_subParts_2057_);
lean_inc(v___y_2036_);
lean_inc_ref(v___y_2035_);
lean_inc(v___y_2034_);
v___x_2084_ = lean_apply_4(v___x_784__overap_2083_, v___y_2034_, v___y_2035_, v___y_2036_, lean_box(0));
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2096_; 
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2087_ = v___x_2084_;
v_isShared_2088_ = v_isSharedCheck_2096_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2084_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2096_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2094_; 
v___x_2089_ = lean_array_push(v___x_2071_, v___x_2075_);
v___x_2090_ = l_Array_append___redArg(v___x_2089_, v_a_2080_);
lean_dec(v_a_2080_);
v___x_2091_ = l_Array_append___redArg(v___x_2090_, v_a_2085_);
lean_dec(v_a_2085_);
v___x_2092_ = l_Lean_Doc_joinBlocks(v___x_2091_);
lean_dec_ref(v___x_2091_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 0, v___x_2092_);
v___x_2094_ = v___x_2087_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2092_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
else
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2104_; 
lean_dec(v_a_2080_);
lean_dec_ref(v___x_2075_);
lean_dec_ref(v___x_2071_);
v_a_2097_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2099_ = v___x_2084_;
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2084_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_a_2097_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
else
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_dec_ref(v___x_2075_);
lean_dec_ref(v___x_2071_);
lean_dec(v___x_2067_);
lean_dec_ref(v_subParts_2057_);
lean_dec_ref(v___x_2054_);
lean_dec_ref(v_inst_2031_);
lean_dec_ref(v_inst_2030_);
v_a_2105_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2079_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2079_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
}
else
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2120_; 
lean_dec_ref(v_subParts_2057_);
lean_dec_ref(v_content_2056_);
lean_dec_ref(v___x_2054_);
lean_dec_ref(v_inst_2031_);
lean_dec_ref(v_inst_2030_);
v_a_2113_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2115_ = v___x_2062_;
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2062_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2120_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v___x_2118_; 
if (v_isShared_2116_ == 0)
{
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown(lean_object* v_i_2121_, lean_object* v_b_2122_, lean_object* v_p_2123_, lean_object* v_inst_2124_, lean_object* v_inst_2125_, lean_object* v_level_2126_, lean_object* v_part_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_){
_start:
{
lean_object* v___x_2132_; 
v___x_2132_ = l_Lean_Doc_partMarkdown___redArg(v_inst_2124_, v_inst_2125_, v_level_2126_, v_part_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
return v___x_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___boxed(lean_object* v_i_2133_, lean_object* v_b_2134_, lean_object* v_p_2135_, lean_object* v_inst_2136_, lean_object* v_inst_2137_, lean_object* v_level_2138_, lean_object* v_part_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Lean_Doc_partMarkdown(v_i_2133_, v_b_2134_, v_p_2135_, v_inst_2136_, v_inst_2137_, v_level_2138_, v_part_2139_, v___y_2140_, v___y_2141_, v___y_2142_);
lean_dec(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_dec(v___y_2140_);
lean_dec(v_level_2138_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0(lean_object* v_inst_2145_, lean_object* v_inst_2146_, lean_object* v_part_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2152_ = lean_unsigned_to_nat(0u);
v___x_2153_ = l_Lean_Doc_partMarkdown___redArg(v_inst_2145_, v_inst_2146_, v___x_2152_, v_part_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0___boxed(lean_object* v_inst_2154_, lean_object* v_inst_2155_, lean_object* v_part_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0(v_inst_2154_, v_inst_2155_, v_part_2156_, v___y_2157_, v___y_2158_, v___y_2159_);
lean_dec(v___y_2159_);
lean_dec_ref(v___y_2158_);
lean_dec(v___y_2157_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg(lean_object* v_inst_2162_, lean_object* v_inst_2163_){
_start:
{
lean_object* v___f_2164_; 
v___f_2164_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2164_, 0, v_inst_2162_);
lean_closure_set(v___f_2164_, 1, v_inst_2163_);
return v___f_2164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock(lean_object* v_i_2165_, lean_object* v_b_2166_, lean_object* v_p_2167_, lean_object* v_inst_2168_, lean_object* v_inst_2169_){
_start:
{
lean_object* v___f_2170_; 
v___f_2170_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownPartOfMarkdownInlineOfMarkdownBlock___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2170_, 0, v_inst_2168_);
lean_closure_set(v___f_2170_, 1, v_inst_2169_);
return v___f_2170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___redArg(lean_object* v_inst_2171_, lean_object* v_f_2172_, lean_object* v_go_2173_, lean_object* v_val_2174_, lean_object* v_content_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_){
_start:
{
lean_object* v___x_2180_; lean_object* v_toApplicative_2181_; lean_object* v_toFunctor_2182_; lean_object* v_toSeq_2183_; lean_object* v_toSeqLeft_2184_; lean_object* v_toSeqRight_2185_; lean_object* v___f_2186_; lean_object* v___f_2187_; lean_object* v___f_2188_; lean_object* v___f_2189_; lean_object* v___x_2190_; lean_object* v___f_2191_; lean_object* v___f_2192_; lean_object* v___f_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2180_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11);
v_toApplicative_2181_ = lean_ctor_get(v___x_2180_, 0);
v_toFunctor_2182_ = lean_ctor_get(v_toApplicative_2181_, 0);
v_toSeq_2183_ = lean_ctor_get(v_toApplicative_2181_, 2);
v_toSeqLeft_2184_ = lean_ctor_get(v_toApplicative_2181_, 3);
v_toSeqRight_2185_ = lean_ctor_get(v_toApplicative_2181_, 4);
v___f_2186_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12));
v___f_2187_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_2182_, 2);
v___f_2188_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2188_, 0, v_toFunctor_2182_);
v___f_2189_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2189_, 0, v_toFunctor_2182_);
v___x_2190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2190_, 0, v___f_2188_);
lean_ctor_set(v___x_2190_, 1, v___f_2189_);
lean_inc(v_toSeqRight_2185_);
v___f_2191_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2191_, 0, v_toSeqRight_2185_);
lean_inc(v_toSeqLeft_2184_);
v___f_2192_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2192_, 0, v_toSeqLeft_2184_);
lean_inc(v_toSeq_2183_);
v___f_2193_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2193_, 0, v_toSeq_2183_);
v___x_2194_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2190_);
lean_ctor_set(v___x_2194_, 1, v___f_2186_);
lean_ctor_set(v___x_2194_, 2, v___f_2193_);
lean_ctor_set(v___x_2194_, 3, v___f_2192_);
lean_ctor_set(v___x_2194_, 4, v___f_2191_);
v___x_2195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2195_, 0, v___x_2194_);
lean_ctor_set(v___x_2195_, 1, v___f_2187_);
v___x_2196_ = l_StateRefT_x27_instMonad___redArg(v___x_2195_);
v___x_2197_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_val_2174_, v_inst_2171_);
if (lean_obj_tag(v___x_2197_) == 0)
{
size_t v_sz_2198_; size_t v___x_2199_; lean_object* v___x_322__overap_2200_; lean_object* v___x_2201_; 
lean_dec_ref(v_f_2172_);
v_sz_2198_ = lean_array_size(v_content_2175_);
v___x_2199_ = ((size_t)0ULL);
v___x_322__overap_2200_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2196_, v_go_2173_, v_sz_2198_, v___x_2199_, v_content_2175_);
lean_inc(v___y_2178_);
lean_inc_ref(v___y_2177_);
lean_inc(v___y_2176_);
v___x_2201_ = lean_apply_4(v___x_322__overap_2200_, v___y_2176_, v___y_2177_, v___y_2178_, lean_box(0));
if (lean_obj_tag(v___x_2201_) == 0)
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2210_; 
v_a_2202_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2204_ = v___x_2201_;
v_isShared_2205_ = v_isSharedCheck_2210_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2201_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2210_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2206_; lean_object* v___x_2208_; 
v___x_2206_ = l_Lean_Doc_joinInlines(v_a_2202_);
lean_dec(v_a_2202_);
if (v_isShared_2205_ == 0)
{
lean_ctor_set(v___x_2204_, 0, v___x_2206_);
v___x_2208_ = v___x_2204_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2206_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
else
{
lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2218_; 
v_a_2211_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2213_ = v___x_2201_;
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_dec(v___x_2201_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2216_; 
if (v_isShared_2214_ == 0)
{
v___x_2216_ = v___x_2213_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_a_2211_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
else
{
lean_object* v_val_2219_; lean_object* v___x_2220_; 
lean_dec_ref(v___x_2196_);
v_val_2219_ = lean_ctor_get(v___x_2197_, 0);
lean_inc(v_val_2219_);
lean_dec_ref_known(v___x_2197_, 1);
lean_inc(v___y_2178_);
lean_inc_ref(v___y_2177_);
lean_inc(v___y_2176_);
v___x_2220_ = lean_apply_7(v_f_2172_, v_go_2173_, v_val_2219_, v_content_2175_, v___y_2176_, v___y_2177_, v___y_2178_, lean_box(0));
return v___x_2220_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___redArg___boxed(lean_object* v_inst_2221_, lean_object* v_f_2222_, lean_object* v_go_2223_, lean_object* v_val_2224_, lean_object* v_content_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_Lean_Doc_mkInlineMdRenderer___redArg(v_inst_2221_, v_f_2222_, v_go_2223_, v_val_2224_, v_content_2225_, v___y_2226_, v___y_2227_, v___y_2228_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2226_);
lean_dec(v_val_2224_);
lean_dec(v_inst_2221_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer(lean_object* v_00_u03b1_2231_, lean_object* v_inst_2232_, lean_object* v_f_2233_, lean_object* v_go_2234_, lean_object* v_val_2235_, lean_object* v_content_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_Lean_Doc_mkInlineMdRenderer___redArg(v_inst_2232_, v_f_2233_, v_go_2234_, v_val_2235_, v_content_2236_, v___y_2237_, v___y_2238_, v___y_2239_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkInlineMdRenderer___boxed(lean_object* v_00_u03b1_2242_, lean_object* v_inst_2243_, lean_object* v_f_2244_, lean_object* v_go_2245_, lean_object* v_val_2246_, lean_object* v_content_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l_Lean_Doc_mkInlineMdRenderer(v_00_u03b1_2242_, v_inst_2243_, v_f_2244_, v_go_2245_, v_val_2246_, v_content_2247_, v___y_2248_, v___y_2249_, v___y_2250_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec(v_val_2246_);
lean_dec(v_inst_2243_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___redArg(lean_object* v_inst_2253_, lean_object* v_f_2254_, lean_object* v_goI_2255_, lean_object* v_goB_2256_, lean_object* v_val_2257_, lean_object* v_content_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v___x_2263_; lean_object* v_toApplicative_2264_; lean_object* v_toFunctor_2265_; lean_object* v_toSeq_2266_; lean_object* v_toSeqLeft_2267_; lean_object* v_toSeqRight_2268_; lean_object* v___f_2269_; lean_object* v___f_2270_; lean_object* v___f_2271_; lean_object* v___f_2272_; lean_object* v___x_2273_; lean_object* v___f_2274_; lean_object* v___f_2275_; lean_object* v___f_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2263_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11);
v_toApplicative_2264_ = lean_ctor_get(v___x_2263_, 0);
v_toFunctor_2265_ = lean_ctor_get(v_toApplicative_2264_, 0);
v_toSeq_2266_ = lean_ctor_get(v_toApplicative_2264_, 2);
v_toSeqLeft_2267_ = lean_ctor_get(v_toApplicative_2264_, 3);
v_toSeqRight_2268_ = lean_ctor_get(v_toApplicative_2264_, 4);
v___f_2269_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12));
v___f_2270_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_2265_, 2);
v___f_2271_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2271_, 0, v_toFunctor_2265_);
v___f_2272_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2272_, 0, v_toFunctor_2265_);
v___x_2273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2273_, 0, v___f_2271_);
lean_ctor_set(v___x_2273_, 1, v___f_2272_);
lean_inc(v_toSeqRight_2268_);
v___f_2274_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2274_, 0, v_toSeqRight_2268_);
lean_inc(v_toSeqLeft_2267_);
v___f_2275_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2275_, 0, v_toSeqLeft_2267_);
lean_inc(v_toSeq_2266_);
v___f_2276_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2276_, 0, v_toSeq_2266_);
v___x_2277_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2273_);
lean_ctor_set(v___x_2277_, 1, v___f_2269_);
lean_ctor_set(v___x_2277_, 2, v___f_2276_);
lean_ctor_set(v___x_2277_, 3, v___f_2275_);
lean_ctor_set(v___x_2277_, 4, v___f_2274_);
v___x_2278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
lean_ctor_set(v___x_2278_, 1, v___f_2270_);
v___x_2279_ = l_StateRefT_x27_instMonad___redArg(v___x_2278_);
v___x_2280_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v_val_2257_, v_inst_2253_);
if (lean_obj_tag(v___x_2280_) == 0)
{
size_t v_sz_2281_; size_t v___x_2282_; lean_object* v___x_322__overap_2283_; lean_object* v___x_2284_; 
lean_dec_ref(v_goI_2255_);
lean_dec_ref(v_f_2254_);
v_sz_2281_ = lean_array_size(v_content_2258_);
v___x_2282_ = ((size_t)0ULL);
v___x_322__overap_2283_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2279_, v_goB_2256_, v_sz_2281_, v___x_2282_, v_content_2258_);
lean_inc(v___y_2261_);
lean_inc_ref(v___y_2260_);
lean_inc(v___y_2259_);
v___x_2284_ = lean_apply_4(v___x_322__overap_2283_, v___y_2259_, v___y_2260_, v___y_2261_, lean_box(0));
if (lean_obj_tag(v___x_2284_) == 0)
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2293_; 
v_a_2285_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2287_ = v___x_2284_;
v_isShared_2288_ = v_isSharedCheck_2293_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2284_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2293_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2289_; lean_object* v___x_2291_; 
v___x_2289_ = l_Lean_Doc_joinBlocks(v_a_2285_);
lean_dec(v_a_2285_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 0, v___x_2289_);
v___x_2291_ = v___x_2287_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v___x_2289_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
v_a_2294_ = lean_ctor_get(v___x_2284_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2284_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v___x_2284_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2284_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_a_2294_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
}
else
{
lean_object* v_val_2302_; lean_object* v___x_2303_; 
lean_dec_ref(v___x_2279_);
v_val_2302_ = lean_ctor_get(v___x_2280_, 0);
lean_inc(v_val_2302_);
lean_dec_ref_known(v___x_2280_, 1);
lean_inc(v___y_2261_);
lean_inc_ref(v___y_2260_);
lean_inc(v___y_2259_);
v___x_2303_ = lean_apply_8(v_f_2254_, v_goI_2255_, v_goB_2256_, v_val_2302_, v_content_2258_, v___y_2259_, v___y_2260_, v___y_2261_, lean_box(0));
return v___x_2303_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___redArg___boxed(lean_object* v_inst_2304_, lean_object* v_f_2305_, lean_object* v_goI_2306_, lean_object* v_goB_2307_, lean_object* v_val_2308_, lean_object* v_content_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Lean_Doc_mkBlockMdRenderer___redArg(v_inst_2304_, v_f_2305_, v_goI_2306_, v_goB_2307_, v_val_2308_, v_content_2309_, v___y_2310_, v___y_2311_, v___y_2312_);
lean_dec(v___y_2312_);
lean_dec_ref(v___y_2311_);
lean_dec(v___y_2310_);
lean_dec(v_val_2308_);
lean_dec(v_inst_2304_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer(lean_object* v_00_u03b1_2315_, lean_object* v_inst_2316_, lean_object* v_f_2317_, lean_object* v_goI_2318_, lean_object* v_goB_2319_, lean_object* v_val_2320_, lean_object* v_content_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_){
_start:
{
lean_object* v___x_2326_; 
v___x_2326_ = l_Lean_Doc_mkBlockMdRenderer___redArg(v_inst_2316_, v_f_2317_, v_goI_2318_, v_goB_2319_, v_val_2320_, v_content_2321_, v___y_2322_, v___y_2323_, v___y_2324_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_mkBlockMdRenderer___boxed(lean_object* v_00_u03b1_2327_, lean_object* v_inst_2328_, lean_object* v_f_2329_, lean_object* v_goI_2330_, lean_object* v_goB_2331_, lean_object* v_val_2332_, lean_object* v_content_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_Lean_Doc_mkBlockMdRenderer(v_00_u03b1_2327_, v_inst_2328_, v_f_2329_, v_goI_2330_, v_goB_2331_, v_val_2332_, v_content_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
lean_dec(v___y_2336_);
lean_dec_ref(v___y_2335_);
lean_dec(v___y_2334_);
lean_dec(v_val_2332_);
lean_dec(v_inst_2328_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0(lean_object* v_as_2343_, size_t v_i_2344_, size_t v_stop_2345_, lean_object* v_b_2346_){
_start:
{
uint8_t v___x_2347_; 
v___x_2347_ = lean_usize_dec_eq(v_i_2344_, v_stop_2345_);
if (v___x_2347_ == 0)
{
lean_object* v___x_2348_; lean_object* v_fst_2349_; lean_object* v_snd_2350_; lean_object* v___x_2351_; size_t v___x_2352_; size_t v___x_2353_; 
v___x_2348_ = lean_array_uget_borrowed(v_as_2343_, v_i_2344_);
v_fst_2349_ = lean_ctor_get(v___x_2348_, 0);
v_snd_2350_ = lean_ctor_get(v___x_2348_, 1);
lean_inc(v_snd_2350_);
lean_inc(v_fst_2349_);
v___x_2351_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2349_, v_snd_2350_, v_b_2346_);
v___x_2352_ = ((size_t)1ULL);
v___x_2353_ = lean_usize_add(v_i_2344_, v___x_2352_);
v_i_2344_ = v___x_2353_;
v_b_2346_ = v___x_2351_;
goto _start;
}
else
{
return v_b_2346_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0___boxed(lean_object* v_as_2355_, lean_object* v_i_2356_, lean_object* v_stop_2357_, lean_object* v_b_2358_){
_start:
{
size_t v_i_boxed_2359_; size_t v_stop_boxed_2360_; lean_object* v_res_2361_; 
v_i_boxed_2359_ = lean_unbox_usize(v_i_2356_);
lean_dec(v_i_2356_);
v_stop_boxed_2360_ = lean_unbox_usize(v_stop_2357_);
lean_dec(v_stop_2357_);
v_res_2361_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0(v_as_2355_, v_i_boxed_2359_, v_stop_boxed_2360_, v_b_2358_);
lean_dec_ref(v_as_2355_);
return v_res_2361_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1(lean_object* v_as_2362_, size_t v_i_2363_, size_t v_stop_2364_, lean_object* v_b_2365_){
_start:
{
lean_object* v___y_2367_; uint8_t v___x_2371_; 
v___x_2371_ = lean_usize_dec_eq(v_i_2363_, v_stop_2364_);
if (v___x_2371_ == 0)
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; uint8_t v___x_2375_; 
v___x_2372_ = lean_array_uget_borrowed(v_as_2362_, v_i_2363_);
v___x_2373_ = lean_unsigned_to_nat(0u);
v___x_2374_ = lean_array_get_size(v___x_2372_);
v___x_2375_ = lean_nat_dec_lt(v___x_2373_, v___x_2374_);
if (v___x_2375_ == 0)
{
v___y_2367_ = v_b_2365_;
goto v___jp_2366_;
}
else
{
uint8_t v___x_2376_; 
v___x_2376_ = lean_nat_dec_le(v___x_2374_, v___x_2374_);
if (v___x_2376_ == 0)
{
if (v___x_2375_ == 0)
{
v___y_2367_ = v_b_2365_;
goto v___jp_2366_;
}
else
{
size_t v___x_2377_; size_t v___x_2378_; lean_object* v___x_2379_; 
v___x_2377_ = ((size_t)0ULL);
v___x_2378_ = lean_usize_of_nat(v___x_2374_);
v___x_2379_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0(v___x_2372_, v___x_2377_, v___x_2378_, v_b_2365_);
v___y_2367_ = v___x_2379_;
goto v___jp_2366_;
}
}
else
{
size_t v___x_2380_; size_t v___x_2381_; lean_object* v___x_2382_; 
v___x_2380_ = ((size_t)0ULL);
v___x_2381_ = lean_usize_of_nat(v___x_2374_);
v___x_2382_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__0(v___x_2372_, v___x_2380_, v___x_2381_, v_b_2365_);
v___y_2367_ = v___x_2382_;
goto v___jp_2366_;
}
}
}
else
{
return v_b_2365_;
}
v___jp_2366_:
{
size_t v___x_2368_; size_t v___x_2369_; 
v___x_2368_ = ((size_t)1ULL);
v___x_2369_ = lean_usize_add(v_i_2363_, v___x_2368_);
v_i_2363_ = v___x_2369_;
v_b_2365_ = v___y_2367_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1___boxed(lean_object* v_as_2383_, lean_object* v_i_2384_, lean_object* v_stop_2385_, lean_object* v_b_2386_){
_start:
{
size_t v_i_boxed_2387_; size_t v_stop_boxed_2388_; lean_object* v_res_2389_; 
v_i_boxed_2387_ = lean_unbox_usize(v_i_2384_);
lean_dec(v_i_2384_);
v_stop_boxed_2388_ = lean_unbox_usize(v_stop_2385_);
lean_dec(v_stop_2385_);
v_res_2389_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1(v_as_2383_, v_i_boxed_2387_, v_stop_boxed_2388_, v_b_2386_);
lean_dec_ref(v_as_2383_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries(lean_object* v_init_2390_, lean_object* v_es_2391_){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; uint8_t v___x_2394_; 
v___x_2392_ = lean_unsigned_to_nat(0u);
v___x_2393_ = lean_array_get_size(v_es_2391_);
v___x_2394_ = lean_nat_dec_lt(v___x_2392_, v___x_2393_);
if (v___x_2394_ == 0)
{
return v_init_2390_;
}
else
{
uint8_t v___x_2395_; 
v___x_2395_ = lean_nat_dec_le(v___x_2393_, v___x_2393_);
if (v___x_2395_ == 0)
{
if (v___x_2394_ == 0)
{
return v_init_2390_;
}
else
{
size_t v___x_2396_; size_t v___x_2397_; lean_object* v___x_2398_; 
v___x_2396_ = ((size_t)0ULL);
v___x_2397_ = lean_usize_of_nat(v___x_2393_);
v___x_2398_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1(v_es_2391_, v___x_2396_, v___x_2397_, v_init_2390_);
return v___x_2398_;
}
}
else
{
size_t v___x_2399_; size_t v___x_2400_; lean_object* v___x_2401_; 
v___x_2399_ = ((size_t)0ULL);
v___x_2400_ = lean_usize_of_nat(v___x_2393_);
v___x_2401_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries_spec__1(v_es_2391_, v___x_2399_, v___x_2400_, v_init_2390_);
return v___x_2401_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries___boxed(lean_object* v_init_2402_, lean_object* v_es_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries(v_init_2402_, v_es_2403_);
lean_dec_ref(v_es_2403_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__0_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v_s_2405_, lean_object* v_x_2406_){
_start:
{
lean_object* v_fst_2407_; lean_object* v_snd_2408_; lean_object* v_imported_2409_; lean_object* v_current_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2418_; 
v_fst_2407_ = lean_ctor_get(v_x_2406_, 0);
lean_inc(v_fst_2407_);
v_snd_2408_ = lean_ctor_get(v_x_2406_, 1);
lean_inc(v_snd_2408_);
lean_dec_ref(v_x_2406_);
v_imported_2409_ = lean_ctor_get(v_s_2405_, 0);
v_current_2410_ = lean_ctor_get(v_s_2405_, 1);
v_isSharedCheck_2418_ = !lean_is_exclusive(v_s_2405_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2412_ = v_s_2405_;
v_isShared_2413_ = v_isSharedCheck_2418_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_current_2410_);
lean_inc(v_imported_2409_);
lean_dec(v_s_2405_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2418_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2414_; lean_object* v___x_2416_; 
v___x_2414_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_2407_, v_snd_2408_, v_current_2410_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set(v___x_2412_, 1, v___x_2414_);
v___x_2416_ = v___x_2412_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_imported_2409_);
lean_ctor_set(v_reuseFailAlloc_2417_, 1, v___x_2414_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v_x_2419_, lean_object* v_s_2420_){
_start:
{
lean_object* v_current_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; 
v_current_2421_ = lean_ctor_get(v_s_2420_, 1);
v___x_2422_ = l_Lean_NameMap_toArray___redArg(v_current_2421_);
lean_inc_ref_n(v___x_2422_, 2);
v___x_2423_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2422_);
lean_ctor_set(v___x_2423_, 1, v___x_2422_);
lean_ctor_set(v___x_2423_, 2, v___x_2422_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v_x_2424_, lean_object* v_s_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__1_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(v_x_2424_, v_s_2425_);
lean_dec_ref(v_s_2425_);
lean_dec_ref(v_x_2424_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v_x_2427_){
_start:
{
lean_object* v___x_2428_; 
v___x_2428_ = lean_box(0);
return v___x_2428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v_x_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__2_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(v_x_2429_);
lean_dec_ref(v_x_2429_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v_s_2431_){
_start:
{
lean_object* v_current_2432_; lean_object* v___x_2433_; 
v_current_2432_ = lean_ctor_get(v_s_2431_, 1);
v___x_2433_ = l_Lean_NameMap_toArray___redArg(v_current_2432_);
return v___x_2433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v_s_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__3_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(v_s_2434_);
lean_dec_ref(v_s_2434_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v___x_2436_, lean_object* v_es_2437_, lean_object* v___y_2438_){
_start:
{
lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; 
lean_inc(v___x_2436_);
v___x_2440_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_foldEntries(v___x_2436_, v_es_2437_);
v___x_2441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2441_, 0, v___x_2440_);
lean_ctor_set(v___x_2441_, 1, v___x_2436_);
v___x_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v___x_2443_, lean_object* v_es_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__4_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(v___x_2443_, v_es_2444_, v___y_2445_);
lean_dec_ref(v___y_2445_);
lean_dec_ref(v_es_2444_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(lean_object* v___x_2448_){
_start:
{
lean_object* v___x_2450_; 
v___x_2450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2448_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v___x_2451_, lean_object* v___y_2452_){
_start:
{
lean_object* v_res_2453_; 
v_res_2453_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___lam__5_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(v___x_2451_);
return v_res_2453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2482_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__11_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_));
v___x_2483_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2482_);
return v___x_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2____boxed(lean_object* v___y_2484_){
_start:
{
lean_object* v_res_2485_; 
v_res_2485_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_();
return v_res_2485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2504_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn___closed__3_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_));
v___x_2505_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_2504_);
return v___x_2505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2____boxed(lean_object* v___y_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_();
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2509_ = lean_box(1);
v___x_2510_ = lean_st_mk_ref(v___x_2509_);
v___x_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2510_);
return v___x_2511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2____boxed(lean_object* v___y_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2_();
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2515_ = lean_box(1);
v___x_2516_ = lean_st_mk_ref(v___x_2515_);
v___x_2517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2517_, 0, v___x_2516_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2____boxed(lean_object* v___y_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2_();
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinInlineMdRenderer(lean_object* v_type_2520_, lean_object* v_r_2521_){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2523_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinInlineMdRenderers;
v___x_2524_ = lean_st_ref_take(v___x_2523_);
v___x_2525_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_type_2520_, v_r_2521_, v___x_2524_);
v___x_2526_ = lean_st_ref_put(v___x_2523_, v___x_2525_);
v___x_2527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2526_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinInlineMdRenderer___boxed(lean_object* v_type_2528_, lean_object* v_r_2529_, lean_object* v___y_2530_){
_start:
{
lean_object* v_res_2531_; 
v_res_2531_ = l_Lean_Doc_addBuiltinInlineMdRenderer(v_type_2528_, v_r_2529_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinBlockMdRenderer(lean_object* v_type_2532_, lean_object* v_r_2533_){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2535_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinBlockMdRenderers;
v___x_2536_ = lean_st_ref_take(v___x_2535_);
v___x_2537_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_type_2532_, v_r_2533_, v___x_2536_);
v___x_2538_ = lean_st_ref_put(v___x_2535_, v___x_2537_);
v___x_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2539_, 0, v___x_2538_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_addBuiltinBlockMdRenderer___boxed(lean_object* v_type_2540_, lean_object* v_r_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l_Lean_Doc_addBuiltinBlockMdRenderer(v_type_2540_, v_r_2541_);
return v_res_2543_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2544_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2545_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0);
v___x_2546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2545_);
return v___x_2546_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2(void){
_start:
{
lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2547_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1);
v___x_2548_ = lean_unsigned_to_nat(0u);
v___x_2549_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2548_);
lean_ctor_set(v___x_2549_, 1, v___x_2548_);
lean_ctor_set(v___x_2549_, 2, v___x_2548_);
lean_ctor_set(v___x_2549_, 3, v___x_2548_);
lean_ctor_set(v___x_2549_, 4, v___x_2547_);
lean_ctor_set(v___x_2549_, 5, v___x_2547_);
lean_ctor_set(v___x_2549_, 6, v___x_2547_);
lean_ctor_set(v___x_2549_, 7, v___x_2547_);
lean_ctor_set(v___x_2549_, 8, v___x_2547_);
lean_ctor_set(v___x_2549_, 9, v___x_2547_);
lean_ctor_set(v___x_2549_, 10, v___x_2547_);
return v___x_2549_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2550_ = lean_unsigned_to_nat(32u);
v___x_2551_ = lean_mk_empty_array_with_capacity(v___x_2550_);
v___x_2552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2551_);
return v___x_2552_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4(void){
_start:
{
size_t v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2553_ = ((size_t)5ULL);
v___x_2554_ = lean_unsigned_to_nat(0u);
v___x_2555_ = lean_unsigned_to_nat(32u);
v___x_2556_ = lean_mk_empty_array_with_capacity(v___x_2555_);
v___x_2557_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__3);
v___x_2558_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2558_, 0, v___x_2557_);
lean_ctor_set(v___x_2558_, 1, v___x_2556_);
lean_ctor_set(v___x_2558_, 2, v___x_2554_);
lean_ctor_set(v___x_2558_, 3, v___x_2554_);
lean_ctor_set_usize(v___x_2558_, 4, v___x_2553_);
return v___x_2558_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5(void){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2559_ = lean_box(1);
v___x_2560_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__4);
v___x_2561_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__1);
v___x_2562_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2561_);
lean_ctor_set(v___x_2562_, 1, v___x_2560_);
lean_ctor_set(v___x_2562_, 2, v___x_2559_);
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3(lean_object* v_msgData_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_){
_start:
{
lean_object* v___x_2567_; lean_object* v_toCold_2568_; lean_object* v_env_2569_; lean_object* v_options_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2567_ = lean_st_ref_get(v___y_2565_);
v_toCold_2568_ = lean_ctor_get(v___y_2564_, 0);
v_env_2569_ = lean_ctor_get(v___x_2567_, 0);
lean_inc_ref(v_env_2569_);
lean_dec(v___x_2567_);
v_options_2570_ = lean_ctor_get(v_toCold_2568_, 2);
v___x_2571_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__2);
v___x_2572_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__5);
lean_inc_ref(v_options_2570_);
v___x_2573_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2573_, 0, v_env_2569_);
lean_ctor_set(v___x_2573_, 1, v___x_2571_);
lean_ctor_set(v___x_2573_, 2, v___x_2572_);
lean_ctor_set(v___x_2573_, 3, v_options_2570_);
v___x_2574_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2573_);
lean_ctor_set(v___x_2574_, 1, v_msgData_2563_);
v___x_2575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_msgData_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3(v_msgData_2576_, v___y_2577_, v___y_2578_);
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_){
_start:
{
lean_object* v_ref_2585_; lean_object* v___x_2586_; lean_object* v_a_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2595_; 
v_ref_2585_ = lean_ctor_get(v___y_2582_, 2);
v___x_2586_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3(v_msg_2581_, v___y_2582_, v___y_2583_);
v_a_2587_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2589_ = v___x_2586_;
v_isShared_2590_ = v_isSharedCheck_2595_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_a_2587_);
lean_dec(v___x_2586_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2595_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2591_; lean_object* v___x_2593_; 
lean_inc(v_ref_2585_);
v___x_2591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2591_, 0, v_ref_2585_);
lean_ctor_set(v___x_2591_, 1, v_a_2587_);
if (v_isShared_2590_ == 0)
{
lean_ctor_set_tag(v___x_2589_, 1);
lean_ctor_set(v___x_2589_, 0, v___x_2591_);
v___x_2593_ = v___x_2589_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v___x_2591_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msg_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v_res_2600_; 
v_res_2600_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg(v_msg_2596_, v___y_2597_, v___y_2598_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(lean_object* v_x_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
if (lean_obj_tag(v_x_2601_) == 0)
{
lean_object* v_a_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v_a_2605_ = lean_ctor_get(v_x_2601_, 0);
lean_inc(v_a_2605_);
lean_dec_ref_known(v_x_2601_, 1);
v___x_2606_ = l_Lean_stringToMessageData(v_a_2605_);
v___x_2607_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg(v___x_2606_, v___y_2602_, v___y_2603_);
return v___x_2607_;
}
else
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2615_; 
v_a_2608_ = lean_ctor_get(v_x_2601_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v_x_2601_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2610_ = v_x_2601_;
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v_x_2601_);
v___x_2610_ = lean_box(0);
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
v_resetjp_2609_:
{
lean_object* v___x_2613_; 
if (v_isShared_2611_ == 0)
{
lean_ctor_set_tag(v___x_2610_, 0);
v___x_2613_ = v___x_2610_;
goto v_reusejp_2612_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v_a_2608_);
v___x_2613_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2612_;
}
v_reusejp_2612_:
{
return v___x_2613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg___boxed(lean_object* v_x_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_){
_start:
{
lean_object* v_res_2620_; 
v_res_2620_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(v_x_2616_, v___y_2617_, v___y_2618_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
return v_res_2620_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2621_ = lean_box(0);
v___x_2622_ = l_Lean_Elab_abortCommandExceptionId;
v___x_2623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2622_);
lean_ctor_set(v___x_2623_, 1, v___x_2621_);
return v___x_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; 
v___x_2625_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___closed__0);
v___x_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2625_);
return v___x_2626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg___boxed(lean_object* v___y_2627_){
_start:
{
lean_object* v_res_2628_; 
v_res_2628_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg();
return v_res_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(lean_object* v_constName_2629_, uint8_t v_checkMeta_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
lean_object* v___x_2634_; lean_object* v_env_2635_; uint8_t v___x_2636_; 
v___x_2634_ = lean_st_ref_get(v___y_2632_);
v_env_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc_ref(v_env_2635_);
lean_dec(v___x_2634_);
lean_inc(v_constName_2629_);
v___x_2636_ = lean_has_compile_error(v_env_2635_, v_constName_2629_);
if (v___x_2636_ == 0)
{
lean_object* v___x_2637_; lean_object* v_toCold_2638_; lean_object* v_env_2639_; lean_object* v_options_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2637_ = lean_st_ref_get(v___y_2632_);
v_toCold_2638_ = lean_ctor_get(v___y_2631_, 0);
v_env_2639_ = lean_ctor_get(v___x_2637_, 0);
lean_inc_ref(v_env_2639_);
lean_dec(v___x_2637_);
v_options_2640_ = lean_ctor_get(v_toCold_2638_, 2);
v___x_2641_ = l_Lean_Environment_evalConst___redArg(v_env_2639_, v_options_2640_, v_constName_2629_, v_checkMeta_2630_);
lean_dec(v_constName_2629_);
lean_dec_ref(v_env_2639_);
v___x_2642_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(v___x_2641_, v___y_2631_, v___y_2632_);
return v___x_2642_;
}
else
{
lean_object* v___x_2643_; 
v___x_2643_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg();
if (lean_obj_tag(v___x_2643_) == 0)
{
lean_object* v___x_2644_; lean_object* v_toCold_2645_; lean_object* v_env_2646_; lean_object* v_options_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
lean_dec_ref_known(v___x_2643_, 1);
v___x_2644_ = lean_st_ref_get(v___y_2632_);
v_toCold_2645_ = lean_ctor_get(v___y_2631_, 0);
v_env_2646_ = lean_ctor_get(v___x_2644_, 0);
lean_inc_ref(v_env_2646_);
lean_dec(v___x_2644_);
v_options_2647_ = lean_ctor_get(v_toCold_2645_, 2);
v___x_2648_ = l_Lean_Environment_evalConst___redArg(v_env_2646_, v_options_2647_, v_constName_2629_, v_checkMeta_2630_);
lean_dec(v_constName_2629_);
lean_dec_ref(v_env_2646_);
v___x_2649_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(v___x_2648_, v___y_2631_, v___y_2632_);
return v___x_2649_;
}
else
{
lean_object* v_a_2650_; lean_object* v___x_2652_; uint8_t v_isShared_2653_; uint8_t v_isSharedCheck_2657_; 
lean_dec(v_constName_2629_);
v_a_2650_ = lean_ctor_get(v___x_2643_, 0);
v_isSharedCheck_2657_ = !lean_is_exclusive(v___x_2643_);
if (v_isSharedCheck_2657_ == 0)
{
v___x_2652_ = v___x_2643_;
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
else
{
lean_inc(v_a_2650_);
lean_dec(v___x_2643_);
v___x_2652_ = lean_box(0);
v_isShared_2653_ = v_isSharedCheck_2657_;
goto v_resetjp_2651_;
}
v_resetjp_2651_:
{
lean_object* v___x_2655_; 
if (v_isShared_2653_ == 0)
{
v___x_2655_ = v___x_2652_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_a_2650_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg___boxed(lean_object* v_constName_2658_, lean_object* v_checkMeta_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_){
_start:
{
uint8_t v_checkMeta_boxed_2663_; lean_object* v_res_2664_; 
v_checkMeta_boxed_2663_ = lean_unbox(v_checkMeta_2659_);
v_res_2664_ = l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(v_constName_2658_, v_checkMeta_boxed_2663_, v___y_2660_, v___y_2661_);
lean_dec(v___y_2661_);
lean_dec_ref(v___y_2660_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(lean_object* v_type_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_){
_start:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___y_2672_; lean_object* v_env_2703_; lean_object* v___x_2704_; lean_object* v_toEnvExtension_2705_; lean_object* v_asyncMode_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v_imported_2709_; lean_object* v_current_2710_; lean_object* v___x_2711_; 
v___x_2669_ = ((lean_object*)(l_Lean_Doc_instInhabitedMdRendererState_default));
v___x_2670_ = lean_st_ref_get(v___y_2667_);
v_env_2703_ = lean_ctor_get(v___x_2670_, 0);
lean_inc_ref(v_env_2703_);
lean_dec(v___x_2670_);
v___x_2704_ = l_Lean_Doc_docInlineMdExt;
v_toEnvExtension_2705_ = lean_ctor_get(v___x_2704_, 0);
v_asyncMode_2706_ = lean_ctor_get(v_toEnvExtension_2705_, 2);
v___x_2707_ = lean_box(0);
v___x_2708_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2669_, v___x_2704_, v_env_2703_, v_asyncMode_2706_, v___x_2707_);
v_imported_2709_ = lean_ctor_get(v___x_2708_, 0);
lean_inc(v_imported_2709_);
v_current_2710_ = lean_ctor_get(v___x_2708_, 1);
lean_inc(v_current_2710_);
lean_dec(v___x_2708_);
v___x_2711_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_current_2710_, v_type_2665_);
lean_dec(v_current_2710_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v___x_2712_; 
v___x_2712_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_imported_2709_, v_type_2665_);
lean_dec(v_imported_2709_);
v___y_2672_ = v___x_2712_;
goto v___jp_2671_;
}
else
{
lean_dec(v_imported_2709_);
v___y_2672_ = v___x_2711_;
goto v___jp_2671_;
}
v___jp_2671_:
{
if (lean_obj_tag(v___y_2672_) == 0)
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; 
v___x_2673_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinInlineMdRenderers;
v___x_2674_ = lean_st_ref_get(v___x_2673_);
v___x_2675_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_2674_, v_type_2665_);
lean_dec(v___x_2674_);
v___x_2676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
return v___x_2676_;
}
else
{
lean_object* v_val_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2702_; 
v_val_2677_ = lean_ctor_get(v___y_2672_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___y_2672_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2679_ = v___y_2672_;
v_isShared_2680_ = v_isSharedCheck_2702_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_val_2677_);
lean_dec(v___y_2672_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2702_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
uint8_t v___x_2681_; lean_object* v___x_2682_; 
v___x_2681_ = 1;
v___x_2682_ = l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(v_val_2677_, v___x_2681_, v___y_2666_, v___y_2667_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2693_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2685_ = v___x_2682_;
v_isShared_2686_ = v_isSharedCheck_2693_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_a_2683_);
lean_dec(v___x_2682_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2693_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2680_ == 0)
{
lean_ctor_set(v___x_2679_, 0, v_a_2683_);
v___x_2688_ = v___x_2679_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2683_);
v___x_2688_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
lean_object* v___x_2690_; 
if (v_isShared_2686_ == 0)
{
lean_ctor_set(v___x_2685_, 0, v___x_2688_);
v___x_2690_ = v___x_2685_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
}
else
{
lean_object* v_a_2694_; lean_object* v___x_2696_; uint8_t v_isShared_2697_; uint8_t v_isSharedCheck_2701_; 
lean_del_object(v___x_2679_);
v_a_2694_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2701_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2701_ == 0)
{
v___x_2696_ = v___x_2682_;
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
else
{
lean_inc(v_a_2694_);
lean_dec(v___x_2682_);
v___x_2696_ = lean_box(0);
v_isShared_2697_ = v_isSharedCheck_2701_;
goto v_resetjp_2695_;
}
v_resetjp_2695_:
{
lean_object* v___x_2699_; 
if (v_isShared_2697_ == 0)
{
v___x_2699_ = v___x_2696_;
goto v_reusejp_2698_;
}
else
{
lean_object* v_reuseFailAlloc_2700_; 
v_reuseFailAlloc_2700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2700_, 0, v_a_2694_);
v___x_2699_ = v_reuseFailAlloc_2700_;
goto v_reusejp_2698_;
}
v_reusejp_2698_:
{
return v___x_2699_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe___boxed(lean_object* v_type_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_){
_start:
{
lean_object* v_res_2717_; 
v_res_2717_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(v_type_2713_, v___y_2714_, v___y_2715_);
lean_dec(v___y_2715_);
lean_dec_ref(v___y_2714_);
lean_dec(v_type_2713_);
return v_res_2717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1(lean_object* v_00_u03b1_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_){
_start:
{
lean_object* v___x_2722_; 
v___x_2722_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___redArg();
return v___x_2722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__1(v_00_u03b1_2723_, v___y_2724_, v___y_2725_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0(lean_object* v_00_u03b1_2728_, lean_object* v_constName_2729_, uint8_t v_checkMeta_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_){
_start:
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(v_constName_2729_, v_checkMeta_2730_, v___y_2731_, v___y_2732_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___boxed(lean_object* v_00_u03b1_2735_, lean_object* v_constName_2736_, lean_object* v_checkMeta_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_){
_start:
{
uint8_t v_checkMeta_boxed_2741_; lean_object* v_res_2742_; 
v_checkMeta_boxed_2741_ = lean_unbox(v_checkMeta_2737_);
v_res_2742_ = l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0(v_00_u03b1_2735_, v_constName_2736_, v_checkMeta_boxed_2741_, v___y_2738_, v___y_2739_);
lean_dec(v___y_2739_);
lean_dec_ref(v___y_2738_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0(lean_object* v_00_u03b1_2743_, lean_object* v_x_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v___x_2748_; 
v___x_2748_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___redArg(v_x_2744_, v___y_2745_, v___y_2746_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2749_, lean_object* v_x_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0(v_00_u03b1_2749_, v_x_2750_, v___y_2751_, v___y_2752_);
lean_dec(v___y_2752_);
lean_dec_ref(v___y_2751_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2755_, lean_object* v_msg_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_){
_start:
{
lean_object* v___x_2760_; 
v___x_2760_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___redArg(v_msg_2756_, v___y_2757_, v___y_2758_);
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2761_, lean_object* v_msg_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1(v_00_u03b1_2761_, v_msg_2762_, v___y_2763_, v___y_2764_);
lean_dec(v___y_2764_);
lean_dec_ref(v___y_2763_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(lean_object* v_typeName_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_){
_start:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___y_2774_; lean_object* v_env_2805_; lean_object* v___x_2806_; lean_object* v_toEnvExtension_2807_; lean_object* v_asyncMode_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v_imported_2811_; lean_object* v_current_2812_; lean_object* v___x_2813_; 
v___x_2771_ = ((lean_object*)(l_Lean_Doc_instInhabitedMdRendererState_default));
v___x_2772_ = lean_st_ref_get(v___y_2769_);
v_env_2805_ = lean_ctor_get(v___x_2772_, 0);
lean_inc_ref(v_env_2805_);
lean_dec(v___x_2772_);
v___x_2806_ = l_Lean_Doc_docBlockMdExt;
v_toEnvExtension_2807_ = lean_ctor_get(v___x_2806_, 0);
v_asyncMode_2808_ = lean_ctor_get(v_toEnvExtension_2807_, 2);
v___x_2809_ = lean_box(0);
v___x_2810_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2771_, v___x_2806_, v_env_2805_, v_asyncMode_2808_, v___x_2809_);
v_imported_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_imported_2811_);
v_current_2812_ = lean_ctor_get(v___x_2810_, 1);
lean_inc(v_current_2812_);
lean_dec(v___x_2810_);
v___x_2813_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_current_2812_, v_typeName_2767_);
lean_dec(v_current_2812_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v___x_2814_; 
v___x_2814_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_imported_2811_, v_typeName_2767_);
lean_dec(v_imported_2811_);
v___y_2774_ = v___x_2814_;
goto v___jp_2773_;
}
else
{
lean_dec(v_imported_2811_);
v___y_2774_ = v___x_2813_;
goto v___jp_2773_;
}
v___jp_2773_:
{
if (lean_obj_tag(v___y_2774_) == 0)
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2775_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinBlockMdRenderers;
v___x_2776_ = lean_st_ref_get(v___x_2775_);
v___x_2777_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_2776_, v_typeName_2767_);
lean_dec(v___x_2776_);
v___x_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
return v___x_2778_;
}
else
{
lean_object* v_val_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2804_; 
v_val_2779_ = lean_ctor_get(v___y_2774_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v___y_2774_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2781_ = v___y_2774_;
v_isShared_2782_ = v_isSharedCheck_2804_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_val_2779_);
lean_dec(v___y_2774_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2804_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
uint8_t v___x_2783_; lean_object* v___x_2784_; 
v___x_2783_ = 1;
v___x_2784_ = l_Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0___redArg(v_val_2779_, v___x_2783_, v___y_2768_, v___y_2769_);
if (lean_obj_tag(v___x_2784_) == 0)
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2795_; 
v_a_2785_ = lean_ctor_get(v___x_2784_, 0);
v_isSharedCheck_2795_ = !lean_is_exclusive(v___x_2784_);
if (v_isSharedCheck_2795_ == 0)
{
v___x_2787_ = v___x_2784_;
v_isShared_2788_ = v_isSharedCheck_2795_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2784_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2795_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2782_ == 0)
{
lean_ctor_set(v___x_2781_, 0, v_a_2785_);
v___x_2790_ = v___x_2781_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2794_; 
v_reuseFailAlloc_2794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2794_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2794_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
lean_object* v___x_2792_; 
if (v_isShared_2788_ == 0)
{
lean_ctor_set(v___x_2787_, 0, v___x_2790_);
v___x_2792_ = v___x_2787_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v___x_2790_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
}
else
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2803_; 
lean_del_object(v___x_2781_);
v_a_2796_ = lean_ctor_get(v___x_2784_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2784_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2798_ = v___x_2784_;
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2784_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2801_; 
if (v_isShared_2799_ == 0)
{
v___x_2801_ = v___x_2798_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_a_2796_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe___boxed(lean_object* v_typeName_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_){
_start:
{
lean_object* v_res_2819_; 
v_res_2819_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(v_typeName_2815_, v___y_2816_, v___y_2817_);
lean_dec(v___y_2817_);
lean_dec_ref(v___y_2816_);
lean_dec(v_typeName_2815_);
return v_res_2819_;
}
}
static lean_object* _init_l_Lean_Doc_mdRendererHeartbeats(void){
_start:
{
lean_object* v___x_2820_; 
v___x_2820_ = lean_unsigned_to_nat(200000u);
return v___x_2820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___redArg(lean_object* v_x_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
lean_object* v___x_2826_; lean_object* v_toCold_2827_; lean_object* v_currRecDepth_2828_; lean_object* v_ref_2829_; uint8_t v_diag_2830_; uint8_t v_suppressElabErrors_2831_; lean_object* v_fileName_2832_; lean_object* v_fileMap_2833_; lean_object* v_options_2834_; lean_object* v_maxRecDepth_2835_; lean_object* v_currNamespace_2836_; lean_object* v_openDecls_2837_; lean_object* v_quotContext_2838_; lean_object* v_currMacroScope_2839_; lean_object* v_cancelTk_x3f_2840_; lean_object* v_inheritedTraceOptions_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2826_ = lean_io_get_num_heartbeats();
v_toCold_2827_ = lean_ctor_get(v___y_2823_, 0);
v_currRecDepth_2828_ = lean_ctor_get(v___y_2823_, 1);
v_ref_2829_ = lean_ctor_get(v___y_2823_, 2);
v_diag_2830_ = lean_ctor_get_uint8(v___y_2823_, sizeof(void*)*3);
v_suppressElabErrors_2831_ = lean_ctor_get_uint8(v___y_2823_, sizeof(void*)*3 + 1);
v_fileName_2832_ = lean_ctor_get(v_toCold_2827_, 0);
v_fileMap_2833_ = lean_ctor_get(v_toCold_2827_, 1);
v_options_2834_ = lean_ctor_get(v_toCold_2827_, 2);
v_maxRecDepth_2835_ = lean_ctor_get(v_toCold_2827_, 3);
v_currNamespace_2836_ = lean_ctor_get(v_toCold_2827_, 4);
v_openDecls_2837_ = lean_ctor_get(v_toCold_2827_, 5);
v_quotContext_2838_ = lean_ctor_get(v_toCold_2827_, 8);
v_currMacroScope_2839_ = lean_ctor_get(v_toCold_2827_, 9);
v_cancelTk_x3f_2840_ = lean_ctor_get(v_toCold_2827_, 10);
v_inheritedTraceOptions_2841_ = lean_ctor_get(v_toCold_2827_, 11);
v___x_2842_ = lean_unsigned_to_nat(200000u);
lean_inc_ref(v_inheritedTraceOptions_2841_);
lean_inc(v_cancelTk_x3f_2840_);
lean_inc(v_currMacroScope_2839_);
lean_inc(v_quotContext_2838_);
lean_inc(v_openDecls_2837_);
lean_inc(v_currNamespace_2836_);
lean_inc(v_maxRecDepth_2835_);
lean_inc_ref(v_options_2834_);
lean_inc_ref(v_fileMap_2833_);
lean_inc_ref(v_fileName_2832_);
v___x_2843_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_2843_, 0, v_fileName_2832_);
lean_ctor_set(v___x_2843_, 1, v_fileMap_2833_);
lean_ctor_set(v___x_2843_, 2, v_options_2834_);
lean_ctor_set(v___x_2843_, 3, v_maxRecDepth_2835_);
lean_ctor_set(v___x_2843_, 4, v_currNamespace_2836_);
lean_ctor_set(v___x_2843_, 5, v_openDecls_2837_);
lean_ctor_set(v___x_2843_, 6, v___x_2826_);
lean_ctor_set(v___x_2843_, 7, v___x_2842_);
lean_ctor_set(v___x_2843_, 8, v_quotContext_2838_);
lean_ctor_set(v___x_2843_, 9, v_currMacroScope_2839_);
lean_ctor_set(v___x_2843_, 10, v_cancelTk_x3f_2840_);
lean_ctor_set(v___x_2843_, 11, v_inheritedTraceOptions_2841_);
lean_inc(v_ref_2829_);
lean_inc(v_currRecDepth_2828_);
v___x_2844_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2844_, 0, v___x_2843_);
lean_ctor_set(v___x_2844_, 1, v_currRecDepth_2828_);
lean_ctor_set(v___x_2844_, 2, v_ref_2829_);
lean_ctor_set_uint8(v___x_2844_, sizeof(void*)*3, v_diag_2830_);
lean_ctor_set_uint8(v___x_2844_, sizeof(void*)*3 + 1, v_suppressElabErrors_2831_);
lean_inc(v___y_2824_);
lean_inc(v___y_2822_);
v___x_2845_ = lean_apply_4(v_x_2821_, v___y_2822_, v___x_2844_, v___y_2824_, lean_box(0));
return v___x_2845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___redArg___boxed(lean_object* v_x_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_){
_start:
{
lean_object* v_res_2851_; 
v_res_2851_ = l_Lean_Doc_withMdRendererBudget___redArg(v_x_2846_, v___y_2847_, v___y_2848_, v___y_2849_);
lean_dec(v___y_2849_);
lean_dec_ref(v___y_2848_);
lean_dec(v___y_2847_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget(lean_object* v_00_u03b1_2852_, lean_object* v_x_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v___x_2858_; 
v___x_2858_ = l_Lean_Doc_withMdRendererBudget___redArg(v_x_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withMdRendererBudget___boxed(lean_object* v_00_u03b1_2859_, lean_object* v_x_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l_Lean_Doc_withMdRendererBudget(v_00_u03b1_2859_, v_x_2860_, v___y_2861_, v___y_2862_, v___y_2863_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec(v___y_2861_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withRendererFallback(lean_object* v_fallback_2866_, lean_object* v_act_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_){
_start:
{
lean_object* v___x_2872_; lean_object* v___x_2873_; 
v___x_2872_ = lean_st_ref_get(v___y_2868_);
v___x_2873_ = l_Lean_Doc_withMdRendererBudget___redArg(v_act_2867_, v___y_2868_, v___y_2869_, v___y_2870_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_dec(v___x_2872_);
lean_dec_ref(v_fallback_2866_);
return v___x_2873_;
}
else
{
lean_object* v_a_2874_; uint8_t v___x_2875_; 
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
lean_inc(v_a_2874_);
v___x_2875_ = l_Lean_Exception_isInterrupt(v_a_2874_);
lean_dec(v_a_2874_);
if (v___x_2875_ == 0)
{
lean_object* v___x_2876_; lean_object* v___x_2877_; 
lean_dec_ref_known(v___x_2873_, 1);
v___x_2876_ = lean_st_ref_swap(v___y_2868_, v___x_2872_);
lean_dec(v___x_2876_);
lean_inc(v___y_2870_);
lean_inc_ref(v___y_2869_);
lean_inc(v___y_2868_);
v___x_2877_ = lean_apply_4(v_fallback_2866_, v___y_2868_, v___y_2869_, v___y_2870_, lean_box(0));
return v___x_2877_;
}
else
{
lean_dec(v___x_2872_);
lean_dec_ref(v_fallback_2866_);
return v___x_2873_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_withRendererFallback___boxed(lean_object* v_fallback_2878_, lean_object* v_act_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_){
_start:
{
lean_object* v_res_2884_; 
v_res_2884_ = l_Lean_Doc_withRendererFallback(v_fallback_2878_, v_act_2879_, v___y_2880_, v___y_2881_, v___y_2882_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
return v_res_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__0(lean_object* v_____do__lift_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_){
_start:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2890_ = l_Lean_Doc_joinInlines(v_____do__lift_2885_);
v___x_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2890_);
return v___x_2891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__0___boxed(lean_object* v_____do__lift_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l_Lean_Doc_instMarkdownInlineElabInline___lam__0(v_____do__lift_2892_, v___y_2893_, v___y_2894_, v___y_2895_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v___y_2893_);
lean_dec_ref(v_____do__lift_2892_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__1(lean_object* v___x_2898_, lean_object* v___x_2899_, lean_object* v___f_2900_, lean_object* v_go_2901_, lean_object* v_container_2902_, lean_object* v_content_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
if (lean_obj_tag(v_container_2902_) == 0)
{
lean_object* v_val_2908_; size_t v_sz_2909_; size_t v___x_2910_; lean_object* v___x_2911_; lean_object* v_fallback_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; 
v_val_2908_ = lean_ctor_get(v_container_2902_, 0);
lean_inc(v_val_2908_);
lean_dec_ref_known(v_container_2902_, 1);
v_sz_2909_ = lean_array_size(v_content_2903_);
v___x_2910_ = ((size_t)0ULL);
lean_inc_ref(v_content_2903_);
lean_inc_ref(v_go_2901_);
lean_inc_ref(v___x_2898_);
v___x_2911_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2898_, v_go_2901_, v_sz_2909_, v___x_2910_, v_content_2903_);
lean_inc_ref(v___f_2900_);
v_fallback_2912_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v_fallback_2912_, 0, lean_box(0));
lean_closure_set(v_fallback_2912_, 1, lean_box(0));
lean_closure_set(v_fallback_2912_, 2, v___x_2899_);
lean_closure_set(v_fallback_2912_, 3, lean_box(0));
lean_closure_set(v_fallback_2912_, 4, lean_box(0));
lean_closure_set(v_fallback_2912_, 5, v___x_2911_);
lean_closure_set(v_fallback_2912_, 6, v___f_2900_);
v___x_2913_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_2908_);
v___x_2914_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(v___x_2913_, v___y_2905_, v___y_2906_);
lean_dec(v___x_2913_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_object* v_a_2915_; 
v_a_2915_ = lean_ctor_get(v___x_2914_, 0);
lean_inc(v_a_2915_);
lean_dec_ref_known(v___x_2914_, 1);
if (lean_obj_tag(v_a_2915_) == 0)
{
lean_object* v___x_647__overap_2916_; lean_object* v___x_2917_; 
lean_dec_ref(v_fallback_2912_);
lean_dec(v_val_2908_);
v___x_647__overap_2916_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2898_, v_go_2901_, v_sz_2909_, v___x_2910_, v_content_2903_);
lean_inc(v___y_2906_);
lean_inc_ref(v___y_2905_);
lean_inc(v___y_2904_);
v___x_2917_ = lean_apply_4(v___x_647__overap_2916_, v___y_2904_, v___y_2905_, v___y_2906_, lean_box(0));
if (lean_obj_tag(v___x_2917_) == 0)
{
lean_object* v_a_2918_; lean_object* v___x_2919_; 
v_a_2918_ = lean_ctor_get(v___x_2917_, 0);
lean_inc(v_a_2918_);
lean_dec_ref_known(v___x_2917_, 1);
lean_inc(v___y_2906_);
lean_inc_ref(v___y_2905_);
lean_inc(v___y_2904_);
v___x_2919_ = lean_apply_5(v___f_2900_, v_a_2918_, v___y_2904_, v___y_2905_, v___y_2906_, lean_box(0));
return v___x_2919_;
}
else
{
lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2927_; 
lean_dec_ref(v___f_2900_);
v_a_2920_ = lean_ctor_get(v___x_2917_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2917_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2922_ = v___x_2917_;
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_dec(v___x_2917_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2925_; 
if (v_isShared_2923_ == 0)
{
v___x_2925_ = v___x_2922_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_a_2920_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
}
else
{
lean_object* v_val_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; 
lean_dec_ref(v___f_2900_);
lean_dec_ref(v___x_2898_);
v_val_2928_ = lean_ctor_get(v_a_2915_, 0);
lean_inc(v_val_2928_);
lean_dec_ref_known(v_a_2915_, 1);
v___x_2929_ = lean_apply_3(v_val_2928_, v_go_2901_, v_val_2908_, v_content_2903_);
v___x_2930_ = l_Lean_Doc_withRendererFallback(v_fallback_2912_, v___x_2929_, v___y_2904_, v___y_2905_, v___y_2906_);
return v___x_2930_;
}
}
else
{
lean_object* v_a_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2938_; 
lean_dec_ref(v_fallback_2912_);
lean_dec(v_val_2908_);
lean_dec_ref(v_content_2903_);
lean_dec_ref(v_go_2901_);
lean_dec_ref(v___f_2900_);
lean_dec_ref(v___x_2898_);
v_a_2931_ = lean_ctor_get(v___x_2914_, 0);
v_isSharedCheck_2938_ = !lean_is_exclusive(v___x_2914_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2933_ = v___x_2914_;
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_a_2931_);
lean_dec(v___x_2914_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2936_; 
if (v_isShared_2934_ == 0)
{
v___x_2936_ = v___x_2933_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_a_2931_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
}
}
}
}
else
{
size_t v_sz_2939_; size_t v___x_2940_; lean_object* v___x_662__overap_2941_; lean_object* v___x_2942_; 
lean_dec_ref_known(v_container_2902_, 1);
lean_dec_ref(v___f_2900_);
lean_dec_ref(v___x_2899_);
v_sz_2939_ = lean_array_size(v_content_2903_);
v___x_2940_ = ((size_t)0ULL);
v___x_662__overap_2941_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2898_, v_go_2901_, v_sz_2939_, v___x_2940_, v_content_2903_);
lean_inc(v___y_2906_);
lean_inc_ref(v___y_2905_);
lean_inc(v___y_2904_);
v___x_2942_ = lean_apply_4(v___x_662__overap_2941_, v___y_2904_, v___y_2905_, v___y_2906_, lean_box(0));
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2951_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2945_ = v___x_2942_;
v_isShared_2946_ = v_isSharedCheck_2951_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___x_2942_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2951_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2947_; lean_object* v___x_2949_; 
v___x_2947_ = l_Lean_Doc_joinInlines(v_a_2943_);
lean_dec(v_a_2943_);
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 0, v___x_2947_);
v___x_2949_ = v___x_2945_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v___x_2947_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
return v___x_2949_;
}
}
}
else
{
lean_object* v_a_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2959_; 
v_a_2952_ = lean_ctor_get(v___x_2942_, 0);
v_isSharedCheck_2959_ = !lean_is_exclusive(v___x_2942_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2954_ = v___x_2942_;
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_a_2952_);
lean_dec(v___x_2942_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2957_; 
if (v_isShared_2955_ == 0)
{
v___x_2957_ = v___x_2954_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v_a_2952_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
return v___x_2957_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownInlineElabInline___lam__1___boxed(lean_object* v___x_2960_, lean_object* v___x_2961_, lean_object* v___f_2962_, lean_object* v_go_2963_, lean_object* v_container_2964_, lean_object* v_content_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_){
_start:
{
lean_object* v_res_2970_; 
v_res_2970_ = l_Lean_Doc_instMarkdownInlineElabInline___lam__1(v___x_2960_, v___x_2961_, v___f_2962_, v_go_2963_, v_container_2964_, v_content_2965_, v___y_2966_, v___y_2967_, v___y_2968_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
lean_dec(v___y_2966_);
return v_res_2970_;
}
}
static lean_object* _init_l_Lean_Doc_instMarkdownInlineElabInline(void){
_start:
{
lean_object* v___x_2972_; lean_object* v_toApplicative_2973_; lean_object* v_toFunctor_2974_; lean_object* v_toSeq_2975_; lean_object* v_toSeqLeft_2976_; lean_object* v_toSeqRight_2977_; lean_object* v___f_2978_; lean_object* v___f_2979_; lean_object* v___f_2980_; lean_object* v___f_2981_; lean_object* v___f_2982_; lean_object* v___x_2983_; lean_object* v___f_2984_; lean_object* v___f_2985_; lean_object* v___f_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___f_2990_; 
v___x_2972_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11);
v_toApplicative_2973_ = lean_ctor_get(v___x_2972_, 0);
v_toFunctor_2974_ = lean_ctor_get(v_toApplicative_2973_, 0);
v_toSeq_2975_ = lean_ctor_get(v_toApplicative_2973_, 2);
v_toSeqLeft_2976_ = lean_ctor_get(v_toApplicative_2973_, 3);
v_toSeqRight_2977_ = lean_ctor_get(v_toApplicative_2973_, 4);
v___f_2978_ = ((lean_object*)(l_Lean_Doc_instMarkdownInlineElabInline___closed__0));
v___f_2979_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12));
v___f_2980_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_2974_, 2);
v___f_2981_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2981_, 0, v_toFunctor_2974_);
v___f_2982_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2982_, 0, v_toFunctor_2974_);
v___x_2983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2983_, 0, v___f_2981_);
lean_ctor_set(v___x_2983_, 1, v___f_2982_);
lean_inc(v_toSeqRight_2977_);
v___f_2984_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2984_, 0, v_toSeqRight_2977_);
lean_inc(v_toSeqLeft_2976_);
v___f_2985_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2985_, 0, v_toSeqLeft_2976_);
lean_inc(v_toSeq_2975_);
v___f_2986_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2986_, 0, v_toSeq_2975_);
v___x_2987_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2983_);
lean_ctor_set(v___x_2987_, 1, v___f_2979_);
lean_ctor_set(v___x_2987_, 2, v___f_2986_);
lean_ctor_set(v___x_2987_, 3, v___f_2985_);
lean_ctor_set(v___x_2987_, 4, v___f_2984_);
v___x_2988_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2988_, 0, v___x_2987_);
lean_ctor_set(v___x_2988_, 1, v___f_2980_);
lean_inc_ref(v___x_2988_);
v___x_2989_ = l_StateRefT_x27_instMonad___redArg(v___x_2988_);
v___f_2990_ = lean_alloc_closure((void*)(l_Lean_Doc_instMarkdownInlineElabInline___lam__1___boxed), 10, 3);
lean_closure_set(v___f_2990_, 0, v___x_2989_);
lean_closure_set(v___f_2990_, 1, v___x_2988_);
lean_closure_set(v___f_2990_, 2, v___f_2978_);
return v___f_2990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0(lean_object* v_____do__lift_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_){
_start:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; 
v___x_2996_ = l_Lean_Doc_joinBlocks(v_____do__lift_2991_);
v___x_2997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2996_);
return v___x_2997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0___boxed(lean_object* v_____do__lift_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_){
_start:
{
lean_object* v_res_3003_; 
v_res_3003_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__0(v_____do__lift_2998_, v___y_2999_, v___y_3000_, v___y_3001_);
lean_dec(v___y_3001_);
lean_dec_ref(v___y_3000_);
lean_dec(v___y_2999_);
lean_dec_ref(v_____do__lift_2998_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1(lean_object* v___x_3004_, lean_object* v___x_3005_, lean_object* v___f_3006_, lean_object* v_goI_3007_, lean_object* v_goB_3008_, lean_object* v_container_3009_, lean_object* v_content_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_){
_start:
{
if (lean_obj_tag(v_container_3009_) == 0)
{
lean_object* v_val_3015_; size_t v_sz_3016_; size_t v___x_3017_; lean_object* v___x_3018_; lean_object* v_fallback_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; 
v_val_3015_ = lean_ctor_get(v_container_3009_, 0);
lean_inc(v_val_3015_);
lean_dec_ref_known(v_container_3009_, 1);
v_sz_3016_ = lean_array_size(v_content_3010_);
v___x_3017_ = ((size_t)0ULL);
lean_inc_ref(v_content_3010_);
lean_inc_ref(v_goB_3008_);
lean_inc_ref(v___x_3004_);
v___x_3018_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3004_, v_goB_3008_, v_sz_3016_, v___x_3017_, v_content_3010_);
lean_inc_ref(v___f_3006_);
v_fallback_3019_ = lean_alloc_closure((void*)(l_ReaderT_bind___boxed), 8, 7);
lean_closure_set(v_fallback_3019_, 0, lean_box(0));
lean_closure_set(v_fallback_3019_, 1, lean_box(0));
lean_closure_set(v_fallback_3019_, 2, v___x_3005_);
lean_closure_set(v_fallback_3019_, 3, lean_box(0));
lean_closure_set(v_fallback_3019_, 4, lean_box(0));
lean_closure_set(v_fallback_3019_, 5, v___x_3018_);
lean_closure_set(v_fallback_3019_, 6, v___f_3006_);
v___x_3020_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_3015_);
v___x_3021_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(v___x_3020_, v___y_3012_, v___y_3013_);
lean_dec(v___x_3020_);
if (lean_obj_tag(v___x_3021_) == 0)
{
lean_object* v_a_3022_; 
v_a_3022_ = lean_ctor_get(v___x_3021_, 0);
lean_inc(v_a_3022_);
lean_dec_ref_known(v___x_3021_, 1);
if (lean_obj_tag(v_a_3022_) == 0)
{
lean_object* v___x_647__overap_3023_; lean_object* v___x_3024_; 
lean_dec_ref(v_fallback_3019_);
lean_dec(v_val_3015_);
lean_dec_ref(v_goI_3007_);
v___x_647__overap_3023_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3004_, v_goB_3008_, v_sz_3016_, v___x_3017_, v_content_3010_);
lean_inc(v___y_3013_);
lean_inc_ref(v___y_3012_);
lean_inc(v___y_3011_);
v___x_3024_ = lean_apply_4(v___x_647__overap_3023_, v___y_3011_, v___y_3012_, v___y_3013_, lean_box(0));
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; lean_object* v___x_3026_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
lean_dec_ref_known(v___x_3024_, 1);
lean_inc(v___y_3013_);
lean_inc_ref(v___y_3012_);
lean_inc(v___y_3011_);
v___x_3026_ = lean_apply_5(v___f_3006_, v_a_3025_, v___y_3011_, v___y_3012_, v___y_3013_, lean_box(0));
return v___x_3026_;
}
else
{
lean_object* v_a_3027_; lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3034_; 
lean_dec_ref(v___f_3006_);
v_a_3027_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3034_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_3029_ = v___x_3024_;
v_isShared_3030_ = v_isSharedCheck_3034_;
goto v_resetjp_3028_;
}
else
{
lean_inc(v_a_3027_);
lean_dec(v___x_3024_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3034_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
lean_object* v___x_3032_; 
if (v_isShared_3030_ == 0)
{
v___x_3032_ = v___x_3029_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v_a_3027_);
v___x_3032_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
return v___x_3032_;
}
}
}
}
else
{
lean_object* v_val_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; 
lean_dec_ref(v___f_3006_);
lean_dec_ref(v___x_3004_);
v_val_3035_ = lean_ctor_get(v_a_3022_, 0);
lean_inc(v_val_3035_);
lean_dec_ref_known(v_a_3022_, 1);
v___x_3036_ = lean_apply_4(v_val_3035_, v_goI_3007_, v_goB_3008_, v_val_3015_, v_content_3010_);
v___x_3037_ = l_Lean_Doc_withRendererFallback(v_fallback_3019_, v___x_3036_, v___y_3011_, v___y_3012_, v___y_3013_);
return v___x_3037_;
}
}
else
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3045_; 
lean_dec_ref(v_fallback_3019_);
lean_dec(v_val_3015_);
lean_dec_ref(v_content_3010_);
lean_dec_ref(v_goB_3008_);
lean_dec_ref(v_goI_3007_);
lean_dec_ref(v___f_3006_);
lean_dec_ref(v___x_3004_);
v_a_3038_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3040_ = v___x_3021_;
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_3021_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3038_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
}
else
{
size_t v_sz_3046_; size_t v___x_3047_; lean_object* v___x_662__overap_3048_; lean_object* v___x_3049_; 
lean_dec_ref_known(v_container_3009_, 1);
lean_dec_ref(v_goI_3007_);
lean_dec_ref(v___f_3006_);
lean_dec_ref(v___x_3005_);
v_sz_3046_ = lean_array_size(v_content_3010_);
v___x_3047_ = ((size_t)0ULL);
v___x_662__overap_3048_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3004_, v_goB_3008_, v_sz_3046_, v___x_3047_, v_content_3010_);
lean_inc(v___y_3013_);
lean_inc_ref(v___y_3012_);
lean_inc(v___y_3011_);
v___x_3049_ = lean_apply_4(v___x_662__overap_3048_, v___y_3011_, v___y_3012_, v___y_3013_, lean_box(0));
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3058_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3052_ = v___x_3049_;
v_isShared_3053_ = v_isSharedCheck_3058_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_a_3050_);
lean_dec(v___x_3049_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3058_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3054_; lean_object* v___x_3056_; 
v___x_3054_ = l_Lean_Doc_joinBlocks(v_a_3050_);
lean_dec(v_a_3050_);
if (v_isShared_3053_ == 0)
{
lean_ctor_set(v___x_3052_, 0, v___x_3054_);
v___x_3056_ = v___x_3052_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v___x_3054_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
else
{
lean_object* v_a_3059_; lean_object* v___x_3061_; uint8_t v_isShared_3062_; uint8_t v_isSharedCheck_3066_; 
v_a_3059_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3066_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3066_ == 0)
{
v___x_3061_ = v___x_3049_;
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
else
{
lean_inc(v_a_3059_);
lean_dec(v___x_3049_);
v___x_3061_ = lean_box(0);
v_isShared_3062_ = v_isSharedCheck_3066_;
goto v_resetjp_3060_;
}
v_resetjp_3060_:
{
lean_object* v___x_3064_; 
if (v_isShared_3062_ == 0)
{
v___x_3064_ = v___x_3061_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_a_3059_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
return v___x_3064_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1___boxed(lean_object* v___x_3067_, lean_object* v___x_3068_, lean_object* v___f_3069_, lean_object* v_goI_3070_, lean_object* v_goB_3071_, lean_object* v_container_3072_, lean_object* v_content_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_){
_start:
{
lean_object* v_res_3078_; 
v_res_3078_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1(v___x_3067_, v___x_3068_, v___f_3069_, v_goI_3070_, v_goB_3071_, v_container_3072_, v_content_3073_, v___y_3074_, v___y_3075_, v___y_3076_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
return v_res_3078_;
}
}
static lean_object* _init_l_Lean_Doc_instMarkdownBlockElabInlineElabBlock(void){
_start:
{
lean_object* v___x_3080_; lean_object* v_toApplicative_3081_; lean_object* v_toFunctor_3082_; lean_object* v_toSeq_3083_; lean_object* v_toSeqLeft_3084_; lean_object* v_toSeqRight_3085_; lean_object* v___f_3086_; lean_object* v___f_3087_; lean_object* v___f_3088_; lean_object* v___f_3089_; lean_object* v___f_3090_; lean_object* v___x_3091_; lean_object* v___f_3092_; lean_object* v___f_3093_; lean_object* v___f_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___f_3098_; 
v___x_3080_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11);
v_toApplicative_3081_ = lean_ctor_get(v___x_3080_, 0);
v_toFunctor_3082_ = lean_ctor_get(v_toApplicative_3081_, 0);
v_toSeq_3083_ = lean_ctor_get(v_toApplicative_3081_, 2);
v_toSeqLeft_3084_ = lean_ctor_get(v_toApplicative_3081_, 3);
v_toSeqRight_3085_ = lean_ctor_get(v_toApplicative_3081_, 4);
v___f_3086_ = ((lean_object*)(l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___closed__0));
v___f_3087_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12));
v___f_3088_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_3082_, 2);
v___f_3089_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3089_, 0, v_toFunctor_3082_);
v___f_3090_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3090_, 0, v_toFunctor_3082_);
v___x_3091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___f_3089_);
lean_ctor_set(v___x_3091_, 1, v___f_3090_);
lean_inc(v_toSeqRight_3085_);
v___f_3092_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3092_, 0, v_toSeqRight_3085_);
lean_inc(v_toSeqLeft_3084_);
v___f_3093_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3093_, 0, v_toSeqLeft_3084_);
lean_inc(v_toSeq_3083_);
v___f_3094_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3094_, 0, v_toSeq_3083_);
v___x_3095_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3091_);
lean_ctor_set(v___x_3095_, 1, v___f_3087_);
lean_ctor_set(v___x_3095_, 2, v___f_3094_);
lean_ctor_set(v___x_3095_, 3, v___f_3093_);
lean_ctor_set(v___x_3095_, 4, v___f_3092_);
v___x_3096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
lean_ctor_set(v___x_3096_, 1, v___f_3088_);
lean_inc_ref(v___x_3096_);
v___x_3097_ = l_StateRefT_x27_instMonad___redArg(v___x_3096_);
v___f_3098_ = lean_alloc_closure((void*)(l_Lean_Doc_instMarkdownBlockElabInlineElabBlock___lam__1___boxed), 11, 3);
lean_closure_set(v___f_3098_, 0, v___x_3097_);
lean_closure_set(v___f_3098_, 1, v___x_3096_);
lean_closure_set(v___f_3098_, 2, v___f_3086_);
return v___f_3098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__0(lean_object* v___x_3099_, lean_object* v___x_3100_, lean_object* v_part_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_){
_start:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; 
v___x_3106_ = lean_unsigned_to_nat(0u);
v___x_3107_ = l_Lean_Doc_partMarkdown___redArg(v___x_3099_, v___x_3100_, v___x_3106_, v_part_3101_, v___y_3102_, v___y_3103_, v___y_3104_);
return v___x_3107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__0___boxed(lean_object* v___x_3108_, lean_object* v___x_3109_, lean_object* v_part_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_){
_start:
{
lean_object* v_res_3115_; 
v_res_3115_ = l_Lean_Doc_instToMarkdownVersoDocString___lam__0(v___x_3108_, v___x_3109_, v_part_3110_, v___y_3111_, v___y_3112_, v___y_3113_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3112_);
lean_dec(v___y_3111_);
return v_res_3115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__1(lean_object* v___x_3116_, lean_object* v___x_3117_, lean_object* v___x_3118_, lean_object* v___f_3119_, lean_object* v_x_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
lean_object* v_text_3125_; lean_object* v_subsections_3126_; lean_object* v___x_3127_; size_t v_sz_3128_; size_t v___x_3129_; lean_object* v___x_547__overap_3130_; lean_object* v___x_3131_; 
v_text_3125_ = lean_ctor_get(v_x_3120_, 0);
lean_inc_ref(v_text_3125_);
v_subsections_3126_ = lean_ctor_get(v_x_3120_, 1);
lean_inc_ref(v_subsections_3126_);
lean_dec_ref(v_x_3120_);
v___x_3127_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed), 9, 4);
lean_closure_set(v___x_3127_, 0, lean_box(0));
lean_closure_set(v___x_3127_, 1, lean_box(0));
lean_closure_set(v___x_3127_, 2, v___x_3116_);
lean_closure_set(v___x_3127_, 3, v___x_3117_);
v_sz_3128_ = lean_array_size(v_text_3125_);
v___x_3129_ = ((size_t)0ULL);
lean_inc_ref(v___x_3118_);
v___x_547__overap_3130_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3118_, v___x_3127_, v_sz_3128_, v___x_3129_, v_text_3125_);
lean_inc(v___y_3123_);
lean_inc_ref(v___y_3122_);
lean_inc(v___y_3121_);
v___x_3131_ = lean_apply_4(v___x_547__overap_3130_, v___y_3121_, v___y_3122_, v___y_3123_, lean_box(0));
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_object* v_a_3132_; size_t v_sz_3133_; lean_object* v___x_550__overap_3134_; lean_object* v___x_3135_; 
v_a_3132_ = lean_ctor_get(v___x_3131_, 0);
lean_inc(v_a_3132_);
lean_dec_ref_known(v___x_3131_, 1);
v_sz_3133_ = lean_array_size(v_subsections_3126_);
v___x_550__overap_3134_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3118_, v___f_3119_, v_sz_3133_, v___x_3129_, v_subsections_3126_);
lean_inc(v___y_3123_);
lean_inc_ref(v___y_3122_);
lean_inc(v___y_3121_);
v___x_3135_ = lean_apply_4(v___x_550__overap_3134_, v___y_3121_, v___y_3122_, v___y_3123_, lean_box(0));
if (lean_obj_tag(v___x_3135_) == 0)
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3145_; 
v_a_3136_ = lean_ctor_get(v___x_3135_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3138_ = v___x_3135_;
v_isShared_3139_ = v_isSharedCheck_3145_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v___x_3135_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3145_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3143_; 
v___x_3140_ = l_Array_append___redArg(v_a_3132_, v_a_3136_);
lean_dec(v_a_3136_);
v___x_3141_ = l_Lean_Doc_joinBlocks(v___x_3140_);
lean_dec_ref(v___x_3140_);
if (v_isShared_3139_ == 0)
{
lean_ctor_set(v___x_3138_, 0, v___x_3141_);
v___x_3143_ = v___x_3138_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v___x_3141_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
else
{
lean_object* v_a_3146_; lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3153_; 
lean_dec(v_a_3132_);
v_a_3146_ = lean_ctor_get(v___x_3135_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3135_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3148_ = v___x_3135_;
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_a_3146_);
lean_dec(v___x_3135_);
v___x_3148_ = lean_box(0);
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
v_resetjp_3147_:
{
lean_object* v___x_3151_; 
if (v_isShared_3149_ == 0)
{
v___x_3151_ = v___x_3148_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_a_3146_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
}
else
{
lean_object* v_a_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3161_; 
lean_dec_ref(v_subsections_3126_);
lean_dec_ref(v___f_3119_);
lean_dec_ref(v___x_3118_);
v_a_3154_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3156_ = v___x_3131_;
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v___x_3131_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3159_; 
if (v_isShared_3157_ == 0)
{
v___x_3159_ = v___x_3156_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v_a_3154_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownVersoDocString___lam__1___boxed(lean_object* v___x_3162_, lean_object* v___x_3163_, lean_object* v___x_3164_, lean_object* v___f_3165_, lean_object* v_x_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_){
_start:
{
lean_object* v_res_3171_; 
v_res_3171_ = l_Lean_Doc_instToMarkdownVersoDocString___lam__1(v___x_3162_, v___x_3163_, v___x_3164_, v___f_3165_, v_x_3166_, v___y_3167_, v___y_3168_, v___y_3169_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
lean_dec(v___y_3167_);
return v_res_3171_;
}
}
static lean_object* _init_l_Lean_Doc_instToMarkdownVersoDocString___closed__0(void){
_start:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___f_3174_; 
v___x_3172_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock;
v___x_3173_ = l_Lean_Doc_instMarkdownInlineElabInline;
v___f_3174_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownVersoDocString___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3174_, 0, v___x_3173_);
lean_closure_set(v___f_3174_, 1, v___x_3172_);
return v___f_3174_;
}
}
static lean_object* _init_l_Lean_Doc_instToMarkdownVersoDocString(void){
_start:
{
lean_object* v___x_3175_; lean_object* v_toApplicative_3176_; lean_object* v_toFunctor_3177_; lean_object* v_toSeq_3178_; lean_object* v_toSeqLeft_3179_; lean_object* v_toSeqRight_3180_; lean_object* v___f_3181_; lean_object* v___f_3182_; lean_object* v___f_3183_; lean_object* v___f_3184_; lean_object* v___x_3185_; lean_object* v___f_3186_; lean_object* v___f_3187_; lean_object* v___f_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___f_3194_; lean_object* v___f_3195_; 
v___x_3175_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11);
v_toApplicative_3176_ = lean_ctor_get(v___x_3175_, 0);
v_toFunctor_3177_ = lean_ctor_get(v_toApplicative_3176_, 0);
v_toSeq_3178_ = lean_ctor_get(v_toApplicative_3176_, 2);
v_toSeqLeft_3179_ = lean_ctor_get(v_toApplicative_3176_, 3);
v_toSeqRight_3180_ = lean_ctor_get(v_toApplicative_3176_, 4);
v___f_3181_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12));
v___f_3182_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_3177_, 2);
v___f_3183_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3183_, 0, v_toFunctor_3177_);
v___f_3184_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3184_, 0, v_toFunctor_3177_);
v___x_3185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___f_3183_);
lean_ctor_set(v___x_3185_, 1, v___f_3184_);
lean_inc(v_toSeqRight_3180_);
v___f_3186_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3186_, 0, v_toSeqRight_3180_);
lean_inc(v_toSeqLeft_3179_);
v___f_3187_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3187_, 0, v_toSeqLeft_3179_);
lean_inc(v_toSeq_3178_);
v___f_3188_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3188_, 0, v_toSeq_3178_);
v___x_3189_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3185_);
lean_ctor_set(v___x_3189_, 1, v___f_3181_);
lean_ctor_set(v___x_3189_, 2, v___f_3188_);
lean_ctor_set(v___x_3189_, 3, v___f_3187_);
lean_ctor_set(v___x_3189_, 4, v___f_3186_);
v___x_3190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3189_);
lean_ctor_set(v___x_3190_, 1, v___f_3182_);
v___x_3191_ = l_StateRefT_x27_instMonad___redArg(v___x_3190_);
v___x_3192_ = l_Lean_Doc_instMarkdownInlineElabInline;
v___x_3193_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock;
v___f_3194_ = lean_obj_once(&l_Lean_Doc_instToMarkdownVersoDocString___closed__0, &l_Lean_Doc_instToMarkdownVersoDocString___closed__0_once, _init_l_Lean_Doc_instToMarkdownVersoDocString___closed__0);
v___f_3195_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownVersoDocString___lam__1___boxed), 9, 4);
lean_closure_set(v___f_3195_, 0, v___x_3192_);
lean_closure_set(v___f_3195_, 1, v___x_3193_);
lean_closure_set(v___f_3195_, 2, v___x_3191_);
lean_closure_set(v___f_3195_, 3, v___f_3194_);
return v___f_3195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__0(lean_object* v___x_3196_, lean_object* v___x_3197_, lean_object* v_x_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_){
_start:
{
lean_object* v_snd_3203_; lean_object* v_fst_3204_; lean_object* v_snd_3205_; lean_object* v___x_3206_; 
v_snd_3203_ = lean_ctor_get(v_x_3198_, 1);
lean_inc(v_snd_3203_);
v_fst_3204_ = lean_ctor_get(v_x_3198_, 0);
lean_inc(v_fst_3204_);
lean_dec_ref(v_x_3198_);
v_snd_3205_ = lean_ctor_get(v_snd_3203_, 1);
lean_inc(v_snd_3205_);
lean_dec(v_snd_3203_);
v___x_3206_ = l_Lean_Doc_partMarkdown___redArg(v___x_3196_, v___x_3197_, v_fst_3204_, v_snd_3205_, v___y_3199_, v___y_3200_, v___y_3201_);
lean_dec(v_fst_3204_);
return v___x_3206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__0___boxed(lean_object* v___x_3207_, lean_object* v___x_3208_, lean_object* v_x_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_){
_start:
{
lean_object* v_res_3214_; 
v_res_3214_ = l_Lean_Doc_instToMarkdownSnippet___lam__0(v___x_3207_, v___x_3208_, v_x_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
lean_dec(v___y_3212_);
lean_dec_ref(v___y_3211_);
lean_dec(v___y_3210_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__1(lean_object* v___x_3215_, lean_object* v___x_3216_, lean_object* v___x_3217_, lean_object* v___f_3218_, lean_object* v_x_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_){
_start:
{
lean_object* v_text_3224_; lean_object* v_sections_3225_; lean_object* v___x_3226_; size_t v_sz_3227_; size_t v___x_3228_; lean_object* v___x_594__overap_3229_; lean_object* v___x_3230_; 
v_text_3224_ = lean_ctor_get(v_x_3219_, 0);
lean_inc_ref(v_text_3224_);
v_sections_3225_ = lean_ctor_get(v_x_3219_, 1);
lean_inc_ref(v_sections_3225_);
lean_dec_ref(v_x_3219_);
v___x_3226_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownBlockOfMarkdownInlineOfMarkdownBlock___private__1___boxed), 9, 4);
lean_closure_set(v___x_3226_, 0, lean_box(0));
lean_closure_set(v___x_3226_, 1, lean_box(0));
lean_closure_set(v___x_3226_, 2, v___x_3215_);
lean_closure_set(v___x_3226_, 3, v___x_3216_);
v_sz_3227_ = lean_array_size(v_text_3224_);
v___x_3228_ = ((size_t)0ULL);
lean_inc_ref(v___x_3217_);
v___x_594__overap_3229_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3217_, v___x_3226_, v_sz_3227_, v___x_3228_, v_text_3224_);
lean_inc(v___y_3222_);
lean_inc_ref(v___y_3221_);
lean_inc(v___y_3220_);
v___x_3230_ = lean_apply_4(v___x_594__overap_3229_, v___y_3220_, v___y_3221_, v___y_3222_, lean_box(0));
if (lean_obj_tag(v___x_3230_) == 0)
{
lean_object* v_a_3231_; size_t v_sz_3232_; lean_object* v___x_597__overap_3233_; lean_object* v___x_3234_; 
v_a_3231_ = lean_ctor_get(v___x_3230_, 0);
lean_inc(v_a_3231_);
lean_dec_ref_known(v___x_3230_, 1);
v_sz_3232_ = lean_array_size(v_sections_3225_);
v___x_597__overap_3233_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3217_, v___f_3218_, v_sz_3232_, v___x_3228_, v_sections_3225_);
lean_inc(v___y_3222_);
lean_inc_ref(v___y_3221_);
lean_inc(v___y_3220_);
v___x_3234_ = lean_apply_4(v___x_597__overap_3233_, v___y_3220_, v___y_3221_, v___y_3222_, lean_box(0));
if (lean_obj_tag(v___x_3234_) == 0)
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3244_; 
v_a_3235_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3237_ = v___x_3234_;
v_isShared_3238_ = v_isSharedCheck_3244_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3234_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3244_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3242_; 
v___x_3239_ = l_Array_append___redArg(v_a_3231_, v_a_3235_);
lean_dec(v_a_3235_);
v___x_3240_ = l_Lean_Doc_joinBlocks(v___x_3239_);
lean_dec_ref(v___x_3239_);
if (v_isShared_3238_ == 0)
{
lean_ctor_set(v___x_3237_, 0, v___x_3240_);
v___x_3242_ = v___x_3237_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v___x_3240_);
v___x_3242_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
return v___x_3242_;
}
}
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
lean_dec(v_a_3231_);
v_a_3245_ = lean_ctor_get(v___x_3234_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3234_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3234_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3234_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
else
{
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3260_; 
lean_dec_ref(v_sections_3225_);
lean_dec_ref(v___f_3218_);
lean_dec_ref(v___x_3217_);
v_a_3253_ = lean_ctor_get(v___x_3230_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3230_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3255_ = v___x_3230_;
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v___x_3230_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3258_; 
if (v_isShared_3256_ == 0)
{
v___x_3258_ = v___x_3255_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3253_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instToMarkdownSnippet___lam__1___boxed(lean_object* v___x_3261_, lean_object* v___x_3262_, lean_object* v___x_3263_, lean_object* v___f_3264_, lean_object* v_x_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_){
_start:
{
lean_object* v_res_3270_; 
v_res_3270_ = l_Lean_Doc_instToMarkdownSnippet___lam__1(v___x_3261_, v___x_3262_, v___x_3263_, v___f_3264_, v_x_3265_, v___y_3266_, v___y_3267_, v___y_3268_);
lean_dec(v___y_3268_);
lean_dec_ref(v___y_3267_);
lean_dec(v___y_3266_);
return v_res_3270_;
}
}
static lean_object* _init_l_Lean_Doc_instToMarkdownSnippet___closed__0(void){
_start:
{
lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___f_3273_; 
v___x_3271_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock;
v___x_3272_ = l_Lean_Doc_instMarkdownInlineElabInline;
v___f_3273_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownSnippet___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3273_, 0, v___x_3272_);
lean_closure_set(v___f_3273_, 1, v___x_3271_);
return v___f_3273_;
}
}
static lean_object* _init_l_Lean_Doc_instToMarkdownSnippet(void){
_start:
{
lean_object* v___x_3274_; lean_object* v_toApplicative_3275_; lean_object* v_toFunctor_3276_; lean_object* v_toSeq_3277_; lean_object* v_toSeqLeft_3278_; lean_object* v_toSeqRight_3279_; lean_object* v___f_3280_; lean_object* v___f_3281_; lean_object* v___f_3282_; lean_object* v___f_3283_; lean_object* v___x_3284_; lean_object* v___f_3285_; lean_object* v___f_3286_; lean_object* v___f_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___f_3293_; lean_object* v___f_3294_; 
v___x_3274_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__11);
v_toApplicative_3275_ = lean_ctor_get(v___x_3274_, 0);
v_toFunctor_3276_ = lean_ctor_get(v_toApplicative_3275_, 0);
v_toSeq_3277_ = lean_ctor_get(v_toApplicative_3275_, 2);
v_toSeqLeft_3278_ = lean_ctor_get(v_toApplicative_3275_, 3);
v_toSeqRight_3279_ = lean_ctor_get(v_toApplicative_3275_, 4);
v___f_3280_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__12));
v___f_3281_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_3276_, 2);
v___f_3282_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3282_, 0, v_toFunctor_3276_);
v___f_3283_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3283_, 0, v_toFunctor_3276_);
v___x_3284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3284_, 0, v___f_3282_);
lean_ctor_set(v___x_3284_, 1, v___f_3283_);
lean_inc(v_toSeqRight_3279_);
v___f_3285_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3285_, 0, v_toSeqRight_3279_);
lean_inc(v_toSeqLeft_3278_);
v___f_3286_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3286_, 0, v_toSeqLeft_3278_);
lean_inc(v_toSeq_3277_);
v___f_3287_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3287_, 0, v_toSeq_3277_);
v___x_3288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3284_);
lean_ctor_set(v___x_3288_, 1, v___f_3280_);
lean_ctor_set(v___x_3288_, 2, v___f_3287_);
lean_ctor_set(v___x_3288_, 3, v___f_3286_);
lean_ctor_set(v___x_3288_, 4, v___f_3285_);
v___x_3289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3288_);
lean_ctor_set(v___x_3289_, 1, v___f_3281_);
v___x_3290_ = l_StateRefT_x27_instMonad___redArg(v___x_3289_);
v___x_3291_ = l_Lean_Doc_instMarkdownInlineElabInline;
v___x_3292_ = l_Lean_Doc_instMarkdownBlockElabInlineElabBlock;
v___f_3293_ = lean_obj_once(&l_Lean_Doc_instToMarkdownSnippet___closed__0, &l_Lean_Doc_instToMarkdownSnippet___closed__0_once, _init_l_Lean_Doc_instToMarkdownSnippet___closed__0);
v___f_3294_ = lean_alloc_closure((void*)(l_Lean_Doc_instToMarkdownSnippet___lam__1___boxed), 9, 4);
lean_closure_set(v___f_3294_, 0, v___x_3291_);
lean_closure_set(v___f_3294_, 1, v___x_3292_);
lean_closure_set(v___f_3294_, 2, v___x_3290_);
lean_closure_set(v___f_3294_, 3, v___f_3293_);
return v___f_3294_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0(lean_object* v_opts_3295_, lean_object* v_opt_3296_){
_start:
{
lean_object* v_name_3297_; lean_object* v_defValue_3298_; lean_object* v_map_3299_; lean_object* v___x_3300_; 
v_name_3297_ = lean_ctor_get(v_opt_3296_, 0);
v_defValue_3298_ = lean_ctor_get(v_opt_3296_, 1);
v_map_3299_ = lean_ctor_get(v_opts_3295_, 0);
v___x_3300_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3299_, v_name_3297_);
if (lean_obj_tag(v___x_3300_) == 0)
{
uint8_t v___x_3301_; 
v___x_3301_ = lean_unbox(v_defValue_3298_);
return v___x_3301_;
}
else
{
lean_object* v_val_3302_; 
v_val_3302_ = lean_ctor_get(v___x_3300_, 0);
lean_inc(v_val_3302_);
lean_dec_ref_known(v___x_3300_, 1);
if (lean_obj_tag(v_val_3302_) == 1)
{
uint8_t v_v_3303_; 
v_v_3303_ = lean_ctor_get_uint8(v_val_3302_, 0);
lean_dec_ref_known(v_val_3302_, 0);
return v_v_3303_;
}
else
{
uint8_t v___x_3304_; 
lean_dec(v_val_3302_);
v___x_3304_ = lean_unbox(v_defValue_3298_);
return v___x_3304_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0___boxed(lean_object* v_opts_3305_, lean_object* v_opt_3306_){
_start:
{
uint8_t v_res_3307_; lean_object* v_r_3308_; 
v_res_3307_ = l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0(v_opts_3305_, v_opt_3306_);
lean_dec_ref(v_opt_3306_);
lean_dec_ref(v_opts_3305_);
v_r_3308_ = lean_box(v_res_3307_);
return v_r_3308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1(lean_object* v_opts_3309_, lean_object* v_opt_3310_){
_start:
{
lean_object* v_name_3311_; lean_object* v_defValue_3312_; lean_object* v_map_3313_; lean_object* v___x_3314_; 
v_name_3311_ = lean_ctor_get(v_opt_3310_, 0);
v_defValue_3312_ = lean_ctor_get(v_opt_3310_, 1);
v_map_3313_ = lean_ctor_get(v_opts_3309_, 0);
v___x_3314_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3313_, v_name_3311_);
if (lean_obj_tag(v___x_3314_) == 0)
{
lean_inc(v_defValue_3312_);
return v_defValue_3312_;
}
else
{
lean_object* v_val_3315_; 
v_val_3315_ = lean_ctor_get(v___x_3314_, 0);
lean_inc(v_val_3315_);
lean_dec_ref_known(v___x_3314_, 1);
if (lean_obj_tag(v_val_3315_) == 3)
{
lean_object* v_v_3316_; 
v_v_3316_ = lean_ctor_get(v_val_3315_, 0);
lean_inc(v_v_3316_);
lean_dec_ref_known(v_val_3315_, 1);
return v_v_3316_;
}
else
{
lean_dec(v_val_3315_);
lean_inc(v_defValue_3312_);
return v_defValue_3312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1___boxed(lean_object* v_opts_3317_, lean_object* v_opt_3318_){
_start:
{
lean_object* v_res_3319_; 
v_res_3319_ = l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1(v_opts_3317_, v_opt_3318_);
lean_dec_ref(v_opt_3318_);
lean_dec_ref(v_opts_3317_);
return v_res_3319_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__1(void){
_start:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3321_ = lean_unsigned_to_nat(1u);
v___x_3322_ = l_Lean_firstFrontendMacroScope;
v___x_3323_ = lean_nat_add(v___x_3322_, v___x_3321_);
return v___x_3323_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__6(void){
_start:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3334_ = lean_unsigned_to_nat(32u);
v___x_3335_ = lean_mk_empty_array_with_capacity(v___x_3334_);
v___x_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
return v___x_3336_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__7(void){
_start:
{
size_t v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; 
v___x_3337_ = ((size_t)5ULL);
v___x_3338_ = lean_unsigned_to_nat(0u);
v___x_3339_ = lean_unsigned_to_nat(32u);
v___x_3340_ = lean_mk_empty_array_with_capacity(v___x_3339_);
v___x_3341_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__6, &l_Lean_Doc_runMarkdown___redArg___closed__6_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__6);
v___x_3342_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3342_, 0, v___x_3341_);
lean_ctor_set(v___x_3342_, 1, v___x_3340_);
lean_ctor_set(v___x_3342_, 2, v___x_3338_);
lean_ctor_set(v___x_3342_, 3, v___x_3338_);
lean_ctor_set_usize(v___x_3342_, 4, v___x_3337_);
return v___x_3342_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__8(void){
_start:
{
lean_object* v___x_3343_; uint64_t v___x_3344_; lean_object* v___x_3345_; 
v___x_3343_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__7, &l_Lean_Doc_runMarkdown___redArg___closed__7_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__7);
v___x_3344_ = 0ULL;
v___x_3345_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3345_, 0, v___x_3343_);
lean_ctor_set_uint64(v___x_3345_, sizeof(void*)*1, v___x_3344_);
return v___x_3345_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__9(void){
_start:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; 
v___x_3346_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConst___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe_spec__0_spec__0_spec__1_spec__3___closed__0);
v___x_3347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3346_);
return v___x_3347_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__10(void){
_start:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___x_3348_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__9, &l_Lean_Doc_runMarkdown___redArg___closed__9_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__9);
v___x_3349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3348_);
lean_ctor_set(v___x_3349_, 1, v___x_3348_);
return v___x_3349_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__11(void){
_start:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3350_ = l_Lean_NameSet_empty;
v___x_3351_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__7, &l_Lean_Doc_runMarkdown___redArg___closed__7_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__7);
v___x_3352_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3351_);
lean_ctor_set(v___x_3352_, 1, v___x_3351_);
lean_ctor_set(v___x_3352_, 2, v___x_3350_);
return v___x_3352_;
}
}
static lean_object* _init_l_Lean_Doc_runMarkdown___redArg___closed__12(void){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; uint8_t v___x_3355_; lean_object* v___x_3356_; 
v___x_3353_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__7, &l_Lean_Doc_runMarkdown___redArg___closed__7_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__7);
v___x_3354_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__9, &l_Lean_Doc_runMarkdown___redArg___closed__9_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__9);
v___x_3355_ = 1;
v___x_3356_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3356_, 0, v___x_3354_);
lean_ctor_set(v___x_3356_, 1, v___x_3354_);
lean_ctor_set(v___x_3356_, 2, v___x_3353_);
lean_ctor_set_uint8(v___x_3356_, sizeof(void*)*3, v___x_3355_);
return v___x_3356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___redArg(lean_object* v_env_3362_, lean_object* v_act_3363_, lean_object* v_options_3364_, lean_object* v_currNamespace_3365_, lean_object* v_openDecls_3366_, lean_object* v_cancelTk_x3f_3367_){
_start:
{
lean_object* v_a_3370_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; uint8_t v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; uint8_t v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; uint8_t v___x_3396_; lean_object* v___y_3398_; lean_object* v___x_3435_; uint8_t v___y_3437_; lean_object* v_env_3457_; uint8_t v___x_3458_; 
v___x_3373_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__0));
v___x_3374_ = l_Lean_instInhabitedFileMap_default;
v___x_3375_ = lean_unsigned_to_nat(0u);
v___x_3376_ = l_Lean_Core_getMaxHeartbeats(v_options_3364_);
v___x_3377_ = lean_box(0);
v___x_3378_ = l_Lean_firstFrontendMacroScope;
v___x_3379_ = lean_box(0);
v___x_3380_ = 0;
v___x_3381_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__1, &l_Lean_Doc_runMarkdown___redArg___closed__1_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__1);
v___x_3382_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__4));
v___x_3383_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__5));
v___x_3384_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__8, &l_Lean_Doc_runMarkdown___redArg___closed__8_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__8);
v___x_3385_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__10, &l_Lean_Doc_runMarkdown___redArg___closed__10_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__10);
v___x_3386_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__11, &l_Lean_Doc_runMarkdown___redArg___closed__11_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__11);
v___x_3387_ = 1;
v___x_3388_ = lean_obj_once(&l_Lean_Doc_runMarkdown___redArg___closed__12, &l_Lean_Doc_runMarkdown___redArg___closed__12_once, _init_l_Lean_Doc_runMarkdown___redArg___closed__12);
v___x_3389_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__13));
v___x_3390_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3390_, 0, v_env_3362_);
lean_ctor_set(v___x_3390_, 1, v___x_3381_);
lean_ctor_set(v___x_3390_, 2, v___x_3382_);
lean_ctor_set(v___x_3390_, 3, v___x_3383_);
lean_ctor_set(v___x_3390_, 4, v___x_3384_);
lean_ctor_set(v___x_3390_, 5, v___x_3385_);
lean_ctor_set(v___x_3390_, 6, v___x_3386_);
lean_ctor_set(v___x_3390_, 7, v___x_3388_);
lean_ctor_set(v___x_3390_, 8, v___x_3389_);
v___x_3391_ = lean_io_get_num_heartbeats();
v___x_3392_ = lean_st_mk_ref(v___x_3390_);
v___x_3393_ = l_Lean_inheritedTraceOptions;
v___x_3394_ = lean_st_ref_get(v___x_3393_);
v___x_3395_ = l_Lean_diagnostics;
v___x_3396_ = l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__0(v_options_3364_, v___x_3395_);
v___x_3435_ = lean_st_ref_get(v___x_3392_);
v_env_3457_ = lean_ctor_get(v___x_3435_, 0);
lean_inc_ref(v_env_3457_);
lean_dec(v___x_3435_);
v___x_3458_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3457_);
lean_dec_ref(v_env_3457_);
if (v___x_3396_ == 0)
{
if (v___x_3458_ == 0)
{
lean_inc(v___x_3392_);
v___y_3398_ = v___x_3392_;
goto v___jp_3397_;
}
else
{
v___y_3437_ = v___x_3396_;
goto v___jp_3436_;
}
}
else
{
v___y_3437_ = v___x_3458_;
goto v___jp_3436_;
}
v___jp_3369_:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3371_ = lean_mk_io_user_error(v_a_3370_);
v___x_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3372_, 0, v___x_3371_);
return v___x_3372_;
}
v___jp_3397_:
{
lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; 
v___x_3399_ = l_Lean_maxRecDepth;
v___x_3400_ = l_Lean_Option_get___at___00Lean_Doc_runMarkdown_spec__1(v_options_3364_, v___x_3399_);
v___x_3401_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3373_);
lean_ctor_set(v___x_3401_, 1, v___x_3374_);
lean_ctor_set(v___x_3401_, 2, v_options_3364_);
lean_ctor_set(v___x_3401_, 3, v___x_3400_);
lean_ctor_set(v___x_3401_, 4, v_currNamespace_3365_);
lean_ctor_set(v___x_3401_, 5, v_openDecls_3366_);
lean_ctor_set(v___x_3401_, 6, v___x_3391_);
lean_ctor_set(v___x_3401_, 7, v___x_3376_);
lean_ctor_set(v___x_3401_, 8, v___x_3377_);
lean_ctor_set(v___x_3401_, 9, v___x_3378_);
lean_ctor_set(v___x_3401_, 10, v_cancelTk_x3f_3367_);
lean_ctor_set(v___x_3401_, 11, v___x_3394_);
v___x_3402_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3402_, 0, v___x_3401_);
lean_ctor_set(v___x_3402_, 1, v___x_3375_);
lean_ctor_set(v___x_3402_, 2, v___x_3379_);
lean_ctor_set_uint8(v___x_3402_, sizeof(void*)*3, v___x_3396_);
lean_ctor_set_uint8(v___x_3402_, sizeof(void*)*3 + 1, v___x_3380_);
v___x_3403_ = lean_apply_3(v_act_3363_, v___x_3402_, v___y_3398_, lean_box(0));
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_object* v_a_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3412_; 
v_a_3404_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3406_ = v___x_3403_;
v_isShared_3407_ = v_isSharedCheck_3412_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_a_3404_);
lean_dec(v___x_3403_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3412_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v___x_3408_; lean_object* v___x_3410_; 
v___x_3408_ = lean_st_ref_get(v___x_3392_);
lean_dec(v___x_3392_);
lean_dec(v___x_3408_);
if (v_isShared_3407_ == 0)
{
v___x_3410_ = v___x_3406_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_a_3404_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
}
else
{
lean_object* v_a_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3434_; 
lean_dec(v___x_3392_);
v_a_3413_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3434_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3434_ == 0)
{
v___x_3415_ = v___x_3403_;
v_isShared_3416_ = v_isSharedCheck_3434_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_a_3413_);
lean_dec(v___x_3403_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3434_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
if (lean_obj_tag(v_a_3413_) == 0)
{
lean_object* v_msg_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3421_; 
v_msg_3417_ = lean_ctor_get(v_a_3413_, 1);
lean_inc_ref(v_msg_3417_);
lean_dec_ref_known(v_a_3413_, 2);
v___x_3418_ = l_Lean_MessageData_toString(v_msg_3417_);
v___x_3419_ = lean_mk_io_user_error(v___x_3418_);
if (v_isShared_3416_ == 0)
{
lean_ctor_set(v___x_3415_, 0, v___x_3419_);
v___x_3421_ = v___x_3415_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3422_; 
v_reuseFailAlloc_3422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3422_, 0, v___x_3419_);
v___x_3421_ = v_reuseFailAlloc_3422_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
return v___x_3421_;
}
}
else
{
lean_object* v_id_3423_; lean_object* v___x_3424_; 
lean_del_object(v___x_3415_);
v_id_3423_ = lean_ctor_get(v_a_3413_, 0);
lean_inc(v_id_3423_);
lean_dec_ref_known(v_a_3413_, 2);
v___x_3424_ = l_Lean_InternalExceptionId_getName(v_id_3423_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_object* v_a_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; 
lean_dec(v_id_3423_);
v_a_3425_ = lean_ctor_get(v___x_3424_, 0);
lean_inc(v_a_3425_);
lean_dec_ref_known(v___x_3424_, 1);
v___x_3426_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__14));
v___x_3427_ = l_Lean_Name_toString(v_a_3425_, v___x_3387_);
v___x_3428_ = lean_string_append(v___x_3426_, v___x_3427_);
lean_dec_ref(v___x_3427_);
v_a_3370_ = v___x_3428_;
goto v___jp_3369_;
}
else
{
lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
lean_dec_ref_known(v___x_3424_, 1);
v___x_3429_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__15));
v___x_3430_ = l_Nat_reprFast(v_id_3423_);
v___x_3431_ = lean_string_append(v___x_3429_, v___x_3430_);
lean_dec_ref(v___x_3430_);
v___x_3432_ = ((lean_object*)(l_Lean_Doc_runMarkdown___redArg___closed__16));
v___x_3433_ = lean_string_append(v___x_3431_, v___x_3432_);
v_a_3370_ = v___x_3433_;
goto v___jp_3369_;
}
}
}
}
}
v___jp_3436_:
{
if (v___y_3437_ == 0)
{
lean_object* v___x_3438_; lean_object* v_env_3439_; lean_object* v_nextMacroScope_3440_; lean_object* v_ngen_3441_; lean_object* v_auxDeclNGen_3442_; lean_object* v_traceState_3443_; lean_object* v_messages_3444_; lean_object* v_infoState_3445_; lean_object* v_snapshotTasks_3446_; lean_object* v___x_3448_; uint8_t v_isShared_3449_; uint8_t v_isSharedCheck_3455_; 
v___x_3438_ = lean_st_ref_take(v___x_3392_);
v_env_3439_ = lean_ctor_get(v___x_3438_, 0);
v_nextMacroScope_3440_ = lean_ctor_get(v___x_3438_, 1);
v_ngen_3441_ = lean_ctor_get(v___x_3438_, 2);
v_auxDeclNGen_3442_ = lean_ctor_get(v___x_3438_, 3);
v_traceState_3443_ = lean_ctor_get(v___x_3438_, 4);
v_messages_3444_ = lean_ctor_get(v___x_3438_, 6);
v_infoState_3445_ = lean_ctor_get(v___x_3438_, 7);
v_snapshotTasks_3446_ = lean_ctor_get(v___x_3438_, 8);
v_isSharedCheck_3455_ = !lean_is_exclusive(v___x_3438_);
if (v_isSharedCheck_3455_ == 0)
{
lean_object* v_unused_3456_; 
v_unused_3456_ = lean_ctor_get(v___x_3438_, 5);
lean_dec(v_unused_3456_);
v___x_3448_ = v___x_3438_;
v_isShared_3449_ = v_isSharedCheck_3455_;
goto v_resetjp_3447_;
}
else
{
lean_inc(v_snapshotTasks_3446_);
lean_inc(v_infoState_3445_);
lean_inc(v_messages_3444_);
lean_inc(v_traceState_3443_);
lean_inc(v_auxDeclNGen_3442_);
lean_inc(v_ngen_3441_);
lean_inc(v_nextMacroScope_3440_);
lean_inc(v_env_3439_);
lean_dec(v___x_3438_);
v___x_3448_ = lean_box(0);
v_isShared_3449_ = v_isSharedCheck_3455_;
goto v_resetjp_3447_;
}
v_resetjp_3447_:
{
lean_object* v___x_3450_; lean_object* v___x_3452_; 
v___x_3450_ = l_Lean_Kernel_enableDiag(v_env_3439_, v___x_3396_);
if (v_isShared_3449_ == 0)
{
lean_ctor_set(v___x_3448_, 5, v___x_3385_);
lean_ctor_set(v___x_3448_, 0, v___x_3450_);
v___x_3452_ = v___x_3448_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v___x_3450_);
lean_ctor_set(v_reuseFailAlloc_3454_, 1, v_nextMacroScope_3440_);
lean_ctor_set(v_reuseFailAlloc_3454_, 2, v_ngen_3441_);
lean_ctor_set(v_reuseFailAlloc_3454_, 3, v_auxDeclNGen_3442_);
lean_ctor_set(v_reuseFailAlloc_3454_, 4, v_traceState_3443_);
lean_ctor_set(v_reuseFailAlloc_3454_, 5, v___x_3385_);
lean_ctor_set(v_reuseFailAlloc_3454_, 6, v_messages_3444_);
lean_ctor_set(v_reuseFailAlloc_3454_, 7, v_infoState_3445_);
lean_ctor_set(v_reuseFailAlloc_3454_, 8, v_snapshotTasks_3446_);
v___x_3452_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
lean_object* v___x_3453_; 
v___x_3453_ = lean_st_ref_put(v___x_3392_, v___x_3452_);
lean_inc(v___x_3392_);
v___y_3398_ = v___x_3392_;
goto v___jp_3397_;
}
}
}
else
{
lean_inc(v___x_3392_);
v___y_3398_ = v___x_3392_;
goto v___jp_3397_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___redArg___boxed(lean_object* v_env_3459_, lean_object* v_act_3460_, lean_object* v_options_3461_, lean_object* v_currNamespace_3462_, lean_object* v_openDecls_3463_, lean_object* v_cancelTk_x3f_3464_, lean_object* v___y_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Lean_Doc_runMarkdown___redArg(v_env_3459_, v_act_3460_, v_options_3461_, v_currNamespace_3462_, v_openDecls_3463_, v_cancelTk_x3f_3464_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown(lean_object* v_00_u03b1_3467_, lean_object* v_env_3468_, lean_object* v_act_3469_, lean_object* v_options_3470_, lean_object* v_currNamespace_3471_, lean_object* v_openDecls_3472_, lean_object* v_cancelTk_x3f_3473_){
_start:
{
lean_object* v___x_3475_; 
v___x_3475_ = l_Lean_Doc_runMarkdown___redArg(v_env_3468_, v_act_3469_, v_options_3470_, v_currNamespace_3471_, v_openDecls_3472_, v_cancelTk_x3f_3473_);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_runMarkdown___boxed(lean_object* v_00_u03b1_3476_, lean_object* v_env_3477_, lean_object* v_act_3478_, lean_object* v_options_3479_, lean_object* v_currNamespace_3480_, lean_object* v_openDecls_3481_, lean_object* v_cancelTk_x3f_3482_, lean_object* v___y_3483_){
_start:
{
lean_object* v_res_3484_; 
v_res_3484_ = l_Lean_Doc_runMarkdown(v_00_u03b1_3476_, v_env_3477_, v_act_3478_, v_options_3479_, v_currNamespace_3480_, v_openDecls_3481_, v_cancelTk_x3f_3482_);
return v_res_3484_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(lean_object* v_x_3485_, size_t v_sz_3486_, size_t v_i_3487_, lean_object* v_bs_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_){
_start:
{
uint8_t v___x_3493_; 
v___x_3493_ = lean_usize_dec_lt(v_i_3487_, v_sz_3486_);
if (v___x_3493_ == 0)
{
lean_object* v___x_3494_; 
lean_dec_ref(v_x_3485_);
v___x_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3494_, 0, v_bs_3488_);
return v___x_3494_;
}
else
{
lean_object* v_v_3495_; lean_object* v___x_3496_; lean_object* v_bs_x27_3497_; lean_object* v___x_3498_; 
v_v_3495_ = lean_array_uget(v_bs_3488_, v_i_3487_);
v___x_3496_ = lean_unsigned_to_nat(0u);
v_bs_x27_3497_ = lean_array_uset(v_bs_3488_, v_i_3487_, v___x_3496_);
lean_inc_ref(v_x_3485_);
v___x_3498_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v_x_3485_, v_v_3495_, v___y_3489_, v___y_3490_, v___y_3491_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v_a_3499_; size_t v___x_3500_; size_t v___x_3501_; lean_object* v___x_3502_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
lean_inc(v_a_3499_);
lean_dec_ref_known(v___x_3498_, 1);
v___x_3500_ = ((size_t)1ULL);
v___x_3501_ = lean_usize_add(v_i_3487_, v___x_3500_);
v___x_3502_ = lean_array_uset(v_bs_x27_3497_, v_i_3487_, v_a_3499_);
v_i_3487_ = v___x_3501_;
v_bs_3488_ = v___x_3502_;
goto _start;
}
else
{
lean_object* v_a_3504_; lean_object* v___x_3506_; uint8_t v_isShared_3507_; uint8_t v_isSharedCheck_3511_; 
lean_dec_ref(v_bs_x27_3497_);
lean_dec_ref(v_x_3485_);
v_a_3504_ = lean_ctor_get(v___x_3498_, 0);
v_isSharedCheck_3511_ = !lean_is_exclusive(v___x_3498_);
if (v_isSharedCheck_3511_ == 0)
{
v___x_3506_ = v___x_3498_;
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
else
{
lean_inc(v_a_3504_);
lean_dec(v___x_3498_);
v___x_3506_ = lean_box(0);
v_isShared_3507_ = v_isSharedCheck_3511_;
goto v_resetjp_3505_;
}
v_resetjp_3505_:
{
lean_object* v___x_3509_; 
if (v_isShared_3507_ == 0)
{
v___x_3509_ = v___x_3506_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_a_3504_);
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
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0___boxed(lean_object* v_x_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0(v_x_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_);
lean_dec(v___y_3516_);
lean_dec_ref(v___y_3515_);
lean_dec(v___y_3514_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1(lean_object* v_x_3521_, size_t v_sz_3522_, size_t v___x_3523_, lean_object* v_content_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_){
_start:
{
lean_object* v___x_3529_; 
v___x_3529_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(v_x_3521_, v_sz_3522_, v___x_3523_, v_content_3524_, v___y_3525_, v___y_3526_, v___y_3527_);
if (lean_obj_tag(v___x_3529_) == 0)
{
lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3538_; 
v_a_3530_ = lean_ctor_get(v___x_3529_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v___x_3529_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3532_ = v___x_3529_;
v_isShared_3533_ = v_isSharedCheck_3538_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v___x_3529_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3538_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3534_; lean_object* v___x_3536_; 
v___x_3534_ = l_Lean_Doc_joinInlines(v_a_3530_);
lean_dec(v_a_3530_);
if (v_isShared_3533_ == 0)
{
lean_ctor_set(v___x_3532_, 0, v___x_3534_);
v___x_3536_ = v___x_3532_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___x_3534_);
v___x_3536_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
return v___x_3536_;
}
}
}
else
{
lean_object* v_a_3539_; lean_object* v___x_3541_; uint8_t v_isShared_3542_; uint8_t v_isSharedCheck_3546_; 
v_a_3539_ = lean_ctor_get(v___x_3529_, 0);
v_isSharedCheck_3546_ = !lean_is_exclusive(v___x_3529_);
if (v_isSharedCheck_3546_ == 0)
{
v___x_3541_ = v___x_3529_;
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
else
{
lean_inc(v_a_3539_);
lean_dec(v___x_3529_);
v___x_3541_ = lean_box(0);
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
v_resetjp_3540_:
{
lean_object* v___x_3544_; 
if (v_isShared_3542_ == 0)
{
v___x_3544_ = v___x_3541_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v_a_3539_);
v___x_3544_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
return v___x_3544_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1___boxed(lean_object* v_x_3547_, lean_object* v_sz_3548_, lean_object* v___x_3549_, lean_object* v_content_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_){
_start:
{
size_t v_sz_boxed_3555_; size_t v___x_5266__boxed_3556_; lean_object* v_res_3557_; 
v_sz_boxed_3555_ = lean_unbox_usize(v_sz_3548_);
lean_dec(v_sz_3548_);
v___x_5266__boxed_3556_ = lean_unbox_usize(v___x_3549_);
lean_dec(v___x_3549_);
v_res_3557_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1(v_x_3547_, v_sz_boxed_3555_, v___x_5266__boxed_3556_, v_content_3550_, v___y_3551_, v___y_3552_, v___y_3553_);
lean_dec(v___y_3553_);
lean_dec_ref(v___y_3552_);
lean_dec(v___y_3551_);
return v_res_3557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(lean_object* v_x_3558_, lean_object* v_x_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_){
_start:
{
lean_object* v_pieces_3565_; lean_object* v_pieces_3569_; 
switch(lean_obj_tag(v_x_3559_))
{
case 0:
{
lean_object* v_string_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
lean_dec_ref(v_x_3558_);
v_string_3572_ = lean_ctor_get(v_x_3559_, 0);
lean_inc_ref(v_string_3572_);
lean_dec_ref_known(v_x_3559_, 1);
v___x_3573_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_string_3572_);
lean_dec_ref(v_string_3572_);
v___x_3574_ = lean_unsigned_to_nat(1u);
v___x_3575_ = lean_mk_empty_array_with_capacity(v___x_3574_);
v___x_3576_ = lean_array_push(v___x_3575_, v___x_3573_);
v___x_3577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3576_);
return v___x_3577_;
}
case 1:
{
lean_object* v_content_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3633_; 
v_content_3578_ = lean_ctor_get(v_x_3559_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v_x_3559_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3580_ = v_x_3559_;
v_isShared_3581_ = v_isSharedCheck_3633_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_content_3578_);
lean_dec(v_x_3559_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3633_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3583_; 
if (v_isShared_3581_ == 0)
{
lean_ctor_set_tag(v___x_3580_, 9);
v___x_3583_ = v___x_3580_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_content_3578_);
v___x_3583_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
lean_object* v___x_3584_; lean_object* v_snd_3585_; lean_object* v_fst_3586_; lean_object* v_fst_3587_; lean_object* v_snd_3588_; lean_object* v_pieces_3590_; uint8_t v_inEmph_3598_; uint8_t v_inBold_3599_; uint8_t v_inLink_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3631_; 
v___x_3584_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(v___x_3583_);
v_snd_3585_ = lean_ctor_get(v___x_3584_, 1);
lean_inc(v_snd_3585_);
v_fst_3586_ = lean_ctor_get(v___x_3584_, 0);
lean_inc(v_fst_3586_);
lean_dec_ref(v___x_3584_);
v_fst_3587_ = lean_ctor_get(v_snd_3585_, 0);
lean_inc(v_fst_3587_);
v_snd_3588_ = lean_ctor_get(v_snd_3585_, 1);
lean_inc(v_snd_3588_);
lean_dec(v_snd_3585_);
v_inEmph_3598_ = lean_ctor_get_uint8(v_x_3558_, 0);
v_inBold_3599_ = lean_ctor_get_uint8(v_x_3558_, 1);
v_inLink_3600_ = lean_ctor_get_uint8(v_x_3558_, 2);
v_isSharedCheck_3631_ = !lean_is_exclusive(v_x_3558_);
if (v_isSharedCheck_3631_ == 0)
{
v___x_3602_ = v_x_3558_;
v_isShared_3603_ = v_isSharedCheck_3631_;
goto v_resetjp_3601_;
}
else
{
lean_dec(v_x_3558_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3631_;
goto v_resetjp_3601_;
}
v___jp_3589_:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; uint8_t v___x_3593_; 
v___x_3591_ = lean_string_utf8_byte_size(v_snd_3588_);
v___x_3592_ = lean_unsigned_to_nat(0u);
v___x_3593_ = lean_nat_dec_eq(v___x_3591_, v___x_3592_);
if (v___x_3593_ == 0)
{
lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; 
v___x_3594_ = lean_unsigned_to_nat(1u);
v___x_3595_ = lean_mk_empty_array_with_capacity(v___x_3594_);
v___x_3596_ = lean_array_push(v___x_3595_, v_snd_3588_);
v___x_3597_ = lean_array_push(v_pieces_3590_, v___x_3596_);
v_pieces_3569_ = v___x_3597_;
goto v___jp_3568_;
}
else
{
lean_dec(v_snd_3588_);
v_pieces_3569_ = v_pieces_3590_;
goto v___jp_3568_;
}
}
v_resetjp_3601_:
{
uint8_t v___x_3604_; lean_object* v___x_3606_; 
v___x_3604_ = 1;
if (v_isShared_3603_ == 0)
{
v___x_3606_ = v___x_3602_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_3630_, 1, v_inBold_3599_);
lean_ctor_set_uint8(v_reuseFailAlloc_3630_, 2, v_inLink_3600_);
v___x_3606_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
lean_object* v___x_3607_; 
lean_ctor_set_uint8(v___x_3606_, 0, v___x_3604_);
v___x_3607_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_3606_, v_fst_3587_, v___y_3560_, v___y_3561_, v___y_3562_);
if (lean_obj_tag(v___x_3607_) == 0)
{
lean_object* v_a_3608_; lean_object* v_pieces_3610_; lean_object* v_pieces_3617_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; uint8_t v___x_3625_; 
v_a_3608_ = lean_ctor_get(v___x_3607_, 0);
lean_inc(v_a_3608_);
lean_dec_ref_known(v___x_3607_, 1);
v___x_3622_ = lean_unsigned_to_nat(0u);
v___x_3623_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16));
v___x_3624_ = lean_string_utf8_byte_size(v_fst_3586_);
v___x_3625_ = lean_nat_dec_eq(v___x_3624_, v___x_3622_);
if (v___x_3625_ == 0)
{
lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; 
v___x_3626_ = lean_unsigned_to_nat(1u);
v___x_3627_ = lean_mk_empty_array_with_capacity(v___x_3626_);
v___x_3628_ = lean_array_push(v___x_3627_, v_fst_3586_);
v___x_3629_ = lean_array_push(v___x_3623_, v___x_3628_);
v_pieces_3617_ = v___x_3629_;
goto v___jp_3616_;
}
else
{
lean_dec(v_fst_3586_);
v_pieces_3617_ = v___x_3623_;
goto v___jp_3616_;
}
v___jp_3609_:
{
lean_object* v___x_3611_; 
v___x_3611_ = lean_array_push(v_pieces_3610_, v_a_3608_);
if (v_inEmph_3598_ == 0)
{
lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3612_ = lean_unsigned_to_nat(1u);
v___x_3613_ = lean_mk_empty_array_with_capacity(v___x_3612_);
lean_dec_ref(v___x_3613_);
v___x_3614_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15));
v___x_3615_ = lean_array_push(v___x_3611_, v___x_3614_);
v_pieces_3590_ = v___x_3615_;
goto v___jp_3589_;
}
else
{
v_pieces_3590_ = v___x_3611_;
goto v___jp_3589_;
}
}
v___jp_3616_:
{
if (v_inEmph_3598_ == 0)
{
lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; 
v___x_3618_ = lean_unsigned_to_nat(1u);
v___x_3619_ = lean_mk_empty_array_with_capacity(v___x_3618_);
lean_dec_ref(v___x_3619_);
v___x_3620_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__15));
v___x_3621_ = lean_array_push(v_pieces_3617_, v___x_3620_);
v_pieces_3610_ = v___x_3621_;
goto v___jp_3609_;
}
else
{
v_pieces_3610_ = v_pieces_3617_;
goto v___jp_3609_;
}
}
}
else
{
lean_dec(v_snd_3588_);
lean_dec(v_fst_3586_);
return v___x_3607_;
}
}
}
}
}
}
case 2:
{
lean_object* v_content_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3689_; 
v_content_3634_ = lean_ctor_get(v_x_3559_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v_x_3559_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3636_ = v_x_3559_;
v_isShared_3637_ = v_isSharedCheck_3689_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_content_3634_);
lean_dec(v_x_3559_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3689_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
if (v_isShared_3637_ == 0)
{
lean_ctor_set_tag(v___x_3636_, 9);
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_content_3634_);
v___x_3639_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
lean_object* v___x_3640_; lean_object* v_snd_3641_; lean_object* v_fst_3642_; lean_object* v_fst_3643_; lean_object* v_snd_3644_; lean_object* v_pieces_3646_; uint8_t v_inEmph_3654_; uint8_t v_inBold_3655_; uint8_t v_inLink_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3687_; 
v___x_3640_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_trim___redArg(v___x_3639_);
v_snd_3641_ = lean_ctor_get(v___x_3640_, 1);
lean_inc(v_snd_3641_);
v_fst_3642_ = lean_ctor_get(v___x_3640_, 0);
lean_inc(v_fst_3642_);
lean_dec_ref(v___x_3640_);
v_fst_3643_ = lean_ctor_get(v_snd_3641_, 0);
lean_inc(v_fst_3643_);
v_snd_3644_ = lean_ctor_get(v_snd_3641_, 1);
lean_inc(v_snd_3644_);
lean_dec(v_snd_3641_);
v_inEmph_3654_ = lean_ctor_get_uint8(v_x_3558_, 0);
v_inBold_3655_ = lean_ctor_get_uint8(v_x_3558_, 1);
v_inLink_3656_ = lean_ctor_get_uint8(v_x_3558_, 2);
v_isSharedCheck_3687_ = !lean_is_exclusive(v_x_3558_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3658_ = v_x_3558_;
v_isShared_3659_ = v_isSharedCheck_3687_;
goto v_resetjp_3657_;
}
else
{
lean_dec(v_x_3558_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3687_;
goto v_resetjp_3657_;
}
v___jp_3645_:
{
lean_object* v___x_3647_; lean_object* v___x_3648_; uint8_t v___x_3649_; 
v___x_3647_ = lean_string_utf8_byte_size(v_snd_3644_);
v___x_3648_ = lean_unsigned_to_nat(0u);
v___x_3649_ = lean_nat_dec_eq(v___x_3647_, v___x_3648_);
if (v___x_3649_ == 0)
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; 
v___x_3650_ = lean_unsigned_to_nat(1u);
v___x_3651_ = lean_mk_empty_array_with_capacity(v___x_3650_);
v___x_3652_ = lean_array_push(v___x_3651_, v_snd_3644_);
v___x_3653_ = lean_array_push(v_pieces_3646_, v___x_3652_);
v_pieces_3565_ = v___x_3653_;
goto v___jp_3564_;
}
else
{
lean_dec(v_snd_3644_);
v_pieces_3565_ = v_pieces_3646_;
goto v___jp_3564_;
}
}
v_resetjp_3657_:
{
uint8_t v___x_3660_; lean_object* v___x_3662_; 
v___x_3660_ = 1;
if (v_isShared_3659_ == 0)
{
v___x_3662_ = v___x_3658_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_3686_, 0, v_inEmph_3654_);
lean_ctor_set_uint8(v_reuseFailAlloc_3686_, 2, v_inLink_3656_);
v___x_3662_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
lean_object* v___x_3663_; 
lean_ctor_set_uint8(v___x_3662_, 1, v___x_3660_);
v___x_3663_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_3662_, v_fst_3643_, v___y_3560_, v___y_3561_, v___y_3562_);
if (lean_obj_tag(v___x_3663_) == 0)
{
lean_object* v_a_3664_; lean_object* v_pieces_3666_; lean_object* v_pieces_3673_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; uint8_t v___x_3681_; 
v_a_3664_ = lean_ctor_get(v___x_3663_, 0);
lean_inc(v_a_3664_);
lean_dec_ref_known(v___x_3663_, 1);
v___x_3678_ = lean_unsigned_to_nat(0u);
v___x_3679_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16));
v___x_3680_ = lean_string_utf8_byte_size(v_fst_3642_);
v___x_3681_ = lean_nat_dec_eq(v___x_3680_, v___x_3678_);
if (v___x_3681_ == 0)
{
lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; 
v___x_3682_ = lean_unsigned_to_nat(1u);
v___x_3683_ = lean_mk_empty_array_with_capacity(v___x_3682_);
v___x_3684_ = lean_array_push(v___x_3683_, v_fst_3642_);
v___x_3685_ = lean_array_push(v___x_3679_, v___x_3684_);
v_pieces_3673_ = v___x_3685_;
goto v___jp_3672_;
}
else
{
lean_dec(v_fst_3642_);
v_pieces_3673_ = v___x_3679_;
goto v___jp_3672_;
}
v___jp_3665_:
{
lean_object* v___x_3667_; 
v___x_3667_ = lean_array_push(v_pieces_3666_, v_a_3664_);
if (v_inBold_3655_ == 0)
{
lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; 
v___x_3668_ = lean_unsigned_to_nat(1u);
v___x_3669_ = lean_mk_empty_array_with_capacity(v___x_3668_);
lean_dec_ref(v___x_3669_);
v___x_3670_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18));
v___x_3671_ = lean_array_push(v___x_3667_, v___x_3670_);
v_pieces_3646_ = v___x_3671_;
goto v___jp_3645_;
}
else
{
v_pieces_3646_ = v___x_3667_;
goto v___jp_3645_;
}
}
v___jp_3672_:
{
if (v_inBold_3655_ == 0)
{
lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; 
v___x_3674_ = lean_unsigned_to_nat(1u);
v___x_3675_ = lean_mk_empty_array_with_capacity(v___x_3674_);
lean_dec_ref(v___x_3675_);
v___x_3676_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__18));
v___x_3677_ = lean_array_push(v_pieces_3673_, v___x_3676_);
v_pieces_3666_ = v___x_3677_;
goto v___jp_3665_;
}
else
{
v_pieces_3666_ = v_pieces_3673_;
goto v___jp_3665_;
}
}
}
else
{
lean_dec(v_snd_3644_);
lean_dec(v_fst_3642_);
return v___x_3663_;
}
}
}
}
}
}
case 3:
{
lean_object* v_string_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
lean_dec_ref(v_x_3558_);
v_string_3690_ = lean_ctor_get(v_x_3559_, 0);
lean_inc_ref(v_string_3690_);
lean_dec_ref_known(v_x_3559_, 1);
v___x_3691_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode(v_string_3690_);
v___x_3692_ = lean_unsigned_to_nat(1u);
v___x_3693_ = lean_mk_empty_array_with_capacity(v___x_3692_);
v___x_3694_ = lean_array_push(v___x_3693_, v___x_3691_);
v___x_3695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3695_, 0, v___x_3694_);
return v___x_3695_;
}
case 4:
{
uint8_t v_mode_3696_; 
lean_dec_ref(v_x_3558_);
v_mode_3696_ = lean_ctor_get_uint8(v_x_3559_, sizeof(void*)*1);
if (v_mode_3696_ == 0)
{
lean_object* v_string_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; 
v_string_3697_ = lean_ctor_get(v_x_3559_, 0);
lean_inc_ref(v_string_3697_);
lean_dec_ref_known(v_x_3559_, 1);
v___x_3698_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__19));
v___x_3699_ = lean_string_append(v___x_3698_, v_string_3697_);
lean_dec_ref(v_string_3697_);
v___x_3700_ = lean_string_append(v___x_3699_, v___x_3698_);
v___x_3701_ = lean_unsigned_to_nat(1u);
v___x_3702_ = lean_mk_empty_array_with_capacity(v___x_3701_);
v___x_3703_ = lean_array_push(v___x_3702_, v___x_3700_);
v___x_3704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3704_, 0, v___x_3703_);
return v___x_3704_;
}
else
{
lean_object* v_string_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; 
v_string_3705_ = lean_ctor_get(v_x_3559_, 0);
lean_inc_ref(v_string_3705_);
lean_dec_ref_known(v_x_3559_, 1);
v___x_3706_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__20));
v___x_3707_ = lean_string_append(v___x_3706_, v_string_3705_);
lean_dec_ref(v_string_3705_);
v___x_3708_ = lean_string_append(v___x_3707_, v___x_3706_);
v___x_3709_ = lean_unsigned_to_nat(1u);
v___x_3710_ = lean_mk_empty_array_with_capacity(v___x_3709_);
v___x_3711_ = lean_array_push(v___x_3710_, v___x_3708_);
v___x_3712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3712_, 0, v___x_3711_);
return v___x_3712_;
}
}
case 5:
{
lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; 
lean_dec_ref_known(v_x_3559_, 1);
lean_dec_ref(v_x_3558_);
v___x_3713_ = lean_unsigned_to_nat(2u);
v___x_3714_ = lean_mk_empty_array_with_capacity(v___x_3713_);
lean_dec_ref(v___x_3714_);
v___x_3715_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__21));
v___x_3716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3716_, 0, v___x_3715_);
return v___x_3716_;
}
case 6:
{
uint8_t v_inLink_3717_; 
v_inLink_3717_ = lean_ctor_get_uint8(v_x_3558_, 2);
if (v_inLink_3717_ == 0)
{
lean_object* v_content_3718_; lean_object* v_url_3719_; uint8_t v_inEmph_3720_; uint8_t v_inBold_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3752_; 
v_content_3718_ = lean_ctor_get(v_x_3559_, 0);
lean_inc_ref(v_content_3718_);
v_url_3719_ = lean_ctor_get(v_x_3559_, 1);
lean_inc_ref(v_url_3719_);
lean_dec_ref_known(v_x_3559_, 2);
v_inEmph_3720_ = lean_ctor_get_uint8(v_x_3558_, 0);
v_inBold_3721_ = lean_ctor_get_uint8(v_x_3558_, 1);
v_isSharedCheck_3752_ = !lean_is_exclusive(v_x_3558_);
if (v_isSharedCheck_3752_ == 0)
{
v___x_3723_ = v_x_3558_;
v_isShared_3724_ = v_isSharedCheck_3752_;
goto v_resetjp_3722_;
}
else
{
lean_dec(v_x_3558_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3752_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
uint8_t v___x_3725_; lean_object* v___x_3727_; 
v___x_3725_ = 1;
if (v_isShared_3724_ == 0)
{
v___x_3727_ = v___x_3723_;
goto v_reusejp_3726_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v_reuseFailAlloc_3751_, 0, v_inEmph_3720_);
lean_ctor_set_uint8(v_reuseFailAlloc_3751_, 1, v_inBold_3721_);
v___x_3727_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3726_;
}
v_reusejp_3726_:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; 
lean_ctor_set_uint8(v___x_3727_, 2, v___x_3725_);
v___x_3728_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v___x_3728_, 0, v_content_3718_);
v___x_3729_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_3727_, v___x_3728_, v___y_3560_, v___y_3561_, v___y_3562_);
if (lean_obj_tag(v___x_3729_) == 0)
{
lean_object* v_a_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3750_; 
v_a_3730_ = lean_ctor_get(v___x_3729_, 0);
v_isSharedCheck_3750_ = !lean_is_exclusive(v___x_3729_);
if (v_isSharedCheck_3750_ == 0)
{
v___x_3732_ = v___x_3729_;
v_isShared_3733_ = v_isSharedCheck_3750_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_a_3730_);
lean_dec(v___x_3729_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3750_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3748_; 
v___x_3734_ = lean_unsigned_to_nat(1u);
v___x_3735_ = lean_mk_empty_array_with_capacity(v___x_3734_);
v___x_3736_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__24));
v___x_3737_ = lean_string_append(v___x_3736_, v_url_3719_);
lean_dec_ref(v_url_3719_);
v___x_3738_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__25));
v___x_3739_ = lean_string_append(v___x_3737_, v___x_3738_);
v___x_3740_ = lean_array_push(v___x_3735_, v___x_3739_);
v___x_3741_ = lean_unsigned_to_nat(3u);
v___x_3742_ = lean_mk_empty_array_with_capacity(v___x_3741_);
lean_dec_ref(v___x_3742_);
v___x_3743_ = lean_obj_once(&l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__26, &l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__26_once, _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__26);
v___x_3744_ = lean_array_push(v___x_3743_, v_a_3730_);
v___x_3745_ = lean_array_push(v___x_3744_, v___x_3740_);
v___x_3746_ = l_Lean_Doc_joinInlines(v___x_3745_);
lean_dec_ref(v___x_3745_);
if (v_isShared_3733_ == 0)
{
lean_ctor_set(v___x_3732_, 0, v___x_3746_);
v___x_3748_ = v___x_3732_;
goto v_reusejp_3747_;
}
else
{
lean_object* v_reuseFailAlloc_3749_; 
v_reuseFailAlloc_3749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3749_, 0, v___x_3746_);
v___x_3748_ = v_reuseFailAlloc_3749_;
goto v_reusejp_3747_;
}
v_reusejp_3747_:
{
return v___x_3748_;
}
}
}
else
{
lean_dec_ref(v_url_3719_);
return v___x_3729_;
}
}
}
}
else
{
lean_object* v_content_3753_; size_t v_sz_3754_; size_t v___x_3755_; lean_object* v___x_3756_; 
v_content_3753_ = lean_ctor_get(v_x_3559_, 0);
lean_inc_ref(v_content_3753_);
lean_dec_ref_known(v_x_3559_, 2);
v_sz_3754_ = lean_array_size(v_content_3753_);
v___x_3755_ = ((size_t)0ULL);
v___x_3756_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(v_x_3558_, v_sz_3754_, v___x_3755_, v_content_3753_, v___y_3560_, v___y_3561_, v___y_3562_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v_a_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3765_; 
v_a_3757_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3759_ = v___x_3756_;
v_isShared_3760_ = v_isSharedCheck_3765_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_a_3757_);
lean_dec(v___x_3756_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3765_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v___x_3761_; lean_object* v___x_3763_; 
v___x_3761_ = l_Lean_Doc_joinInlines(v_a_3757_);
lean_dec(v_a_3757_);
if (v_isShared_3760_ == 0)
{
lean_ctor_set(v___x_3759_, 0, v___x_3761_);
v___x_3763_ = v___x_3759_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v___x_3761_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
else
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3773_; 
v_a_3766_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3768_ = v___x_3756_;
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3756_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3773_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3771_; 
if (v_isShared_3769_ == 0)
{
v___x_3771_ = v___x_3768_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v_a_3766_);
v___x_3771_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
return v___x_3771_;
}
}
}
}
}
case 7:
{
lean_object* v_name_3774_; lean_object* v_content_3775_; size_t v_sz_3776_; size_t v___x_3777_; lean_object* v___x_3778_; 
v_name_3774_ = lean_ctor_get(v_x_3559_, 0);
lean_inc_ref(v_name_3774_);
v_content_3775_ = lean_ctor_get(v_x_3559_, 1);
lean_inc_ref(v_content_3775_);
lean_dec_ref_known(v_x_3559_, 2);
v_sz_3776_ = lean_array_size(v_content_3775_);
v___x_3777_ = ((size_t)0ULL);
v___x_3778_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(v_x_3558_, v_sz_3776_, v___x_3777_, v_content_3775_, v___y_3560_, v___y_3561_, v___y_3562_);
if (lean_obj_tag(v___x_3778_) == 0)
{
lean_object* v_a_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; 
v_a_3779_ = lean_ctor_get(v___x_3778_, 0);
lean_inc(v_a_3779_);
lean_dec_ref_known(v___x_3778_, 1);
v___x_3780_ = ((lean_object*)(l_Lean_Doc_MarkdownM_run_x27___closed__1));
v___x_3781_ = l_Lean_Doc_joinInlines(v_a_3779_);
lean_dec(v_a_3779_);
v___x_3782_ = lean_array_to_list(v___x_3781_);
v___x_3783_ = l_String_intercalate(v___x_3780_, v___x_3782_);
lean_inc_ref(v_name_3774_);
v___x_3784_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_MarkdownM_addFootnote___redArg(v_name_3774_, v___x_3783_, v___y_3560_);
if (lean_obj_tag(v___x_3784_) == 0)
{
lean_object* v___x_3786_; uint8_t v_isShared_3787_; uint8_t v_isSharedCheck_3798_; 
v_isSharedCheck_3798_ = !lean_is_exclusive(v___x_3784_);
if (v_isSharedCheck_3798_ == 0)
{
lean_object* v_unused_3799_; 
v_unused_3799_ = lean_ctor_get(v___x_3784_, 0);
lean_dec(v_unused_3799_);
v___x_3786_ = v___x_3784_;
v_isShared_3787_ = v_isSharedCheck_3798_;
goto v_resetjp_3785_;
}
else
{
lean_dec(v___x_3784_);
v___x_3786_ = lean_box(0);
v_isShared_3787_ = v_isSharedCheck_3798_;
goto v_resetjp_3785_;
}
v_resetjp_3785_:
{
lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3796_; 
v___x_3788_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Doc_MarkdownM_run_x27_spec__0___closed__0));
v___x_3789_ = lean_string_append(v___x_3788_, v_name_3774_);
lean_dec_ref(v_name_3774_);
v___x_3790_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__27));
v___x_3791_ = lean_string_append(v___x_3789_, v___x_3790_);
v___x_3792_ = lean_unsigned_to_nat(1u);
v___x_3793_ = lean_mk_empty_array_with_capacity(v___x_3792_);
v___x_3794_ = lean_array_push(v___x_3793_, v___x_3791_);
if (v_isShared_3787_ == 0)
{
lean_ctor_set(v___x_3786_, 0, v___x_3794_);
v___x_3796_ = v___x_3786_;
goto v_reusejp_3795_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v___x_3794_);
v___x_3796_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3795_;
}
v_reusejp_3795_:
{
return v___x_3796_;
}
}
}
else
{
lean_object* v_a_3800_; lean_object* v___x_3802_; uint8_t v_isShared_3803_; uint8_t v_isSharedCheck_3807_; 
lean_dec_ref(v_name_3774_);
v_a_3800_ = lean_ctor_get(v___x_3784_, 0);
v_isSharedCheck_3807_ = !lean_is_exclusive(v___x_3784_);
if (v_isSharedCheck_3807_ == 0)
{
v___x_3802_ = v___x_3784_;
v_isShared_3803_ = v_isSharedCheck_3807_;
goto v_resetjp_3801_;
}
else
{
lean_inc(v_a_3800_);
lean_dec(v___x_3784_);
v___x_3802_ = lean_box(0);
v_isShared_3803_ = v_isSharedCheck_3807_;
goto v_resetjp_3801_;
}
v_resetjp_3801_:
{
lean_object* v___x_3805_; 
if (v_isShared_3803_ == 0)
{
v___x_3805_ = v___x_3802_;
goto v_reusejp_3804_;
}
else
{
lean_object* v_reuseFailAlloc_3806_; 
v_reuseFailAlloc_3806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3806_, 0, v_a_3800_);
v___x_3805_ = v_reuseFailAlloc_3806_;
goto v_reusejp_3804_;
}
v_reusejp_3804_:
{
return v___x_3805_;
}
}
}
}
else
{
lean_object* v_a_3808_; lean_object* v___x_3810_; uint8_t v_isShared_3811_; uint8_t v_isSharedCheck_3815_; 
lean_dec_ref(v_name_3774_);
v_a_3808_ = lean_ctor_get(v___x_3778_, 0);
v_isSharedCheck_3815_ = !lean_is_exclusive(v___x_3778_);
if (v_isSharedCheck_3815_ == 0)
{
v___x_3810_ = v___x_3778_;
v_isShared_3811_ = v_isSharedCheck_3815_;
goto v_resetjp_3809_;
}
else
{
lean_inc(v_a_3808_);
lean_dec(v___x_3778_);
v___x_3810_ = lean_box(0);
v_isShared_3811_ = v_isSharedCheck_3815_;
goto v_resetjp_3809_;
}
v_resetjp_3809_:
{
lean_object* v___x_3813_; 
if (v_isShared_3811_ == 0)
{
v___x_3813_ = v___x_3810_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3814_; 
v_reuseFailAlloc_3814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3814_, 0, v_a_3808_);
v___x_3813_ = v_reuseFailAlloc_3814_;
goto v_reusejp_3812_;
}
v_reusejp_3812_:
{
return v___x_3813_;
}
}
}
}
case 8:
{
lean_object* v_alt_3816_; lean_object* v_url_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; 
lean_dec_ref(v_x_3558_);
v_alt_3816_ = lean_ctor_get(v_x_3559_, 0);
lean_inc_ref(v_alt_3816_);
v_url_3817_ = lean_ctor_get(v_x_3559_, 1);
lean_inc_ref(v_url_3817_);
lean_dec_ref_known(v_x_3559_, 2);
v___x_3818_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__28));
v___x_3819_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_escape(v_alt_3816_);
lean_dec_ref(v_alt_3816_);
v___x_3820_ = lean_string_append(v___x_3818_, v___x_3819_);
lean_dec_ref(v___x_3819_);
v___x_3821_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__24));
v___x_3822_ = lean_string_append(v___x_3820_, v___x_3821_);
v___x_3823_ = lean_string_append(v___x_3822_, v_url_3817_);
lean_dec_ref(v_url_3817_);
v___x_3824_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__25));
v___x_3825_ = lean_string_append(v___x_3823_, v___x_3824_);
v___x_3826_ = lean_unsigned_to_nat(1u);
v___x_3827_ = lean_mk_empty_array_with_capacity(v___x_3826_);
v___x_3828_ = lean_array_push(v___x_3827_, v___x_3825_);
v___x_3829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3828_);
return v___x_3829_;
}
case 9:
{
lean_object* v_content_3830_; size_t v_sz_3831_; size_t v___x_3832_; lean_object* v___x_3833_; 
v_content_3830_ = lean_ctor_get(v_x_3559_, 0);
lean_inc_ref(v_content_3830_);
lean_dec_ref_known(v_x_3559_, 1);
v_sz_3831_ = lean_array_size(v_content_3830_);
v___x_3832_ = ((size_t)0ULL);
v___x_3833_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(v_x_3558_, v_sz_3831_, v___x_3832_, v_content_3830_, v___y_3560_, v___y_3561_, v___y_3562_);
if (lean_obj_tag(v___x_3833_) == 0)
{
lean_object* v_a_3834_; lean_object* v___x_3836_; uint8_t v_isShared_3837_; uint8_t v_isSharedCheck_3842_; 
v_a_3834_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3842_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3842_ == 0)
{
v___x_3836_ = v___x_3833_;
v_isShared_3837_ = v_isSharedCheck_3842_;
goto v_resetjp_3835_;
}
else
{
lean_inc(v_a_3834_);
lean_dec(v___x_3833_);
v___x_3836_ = lean_box(0);
v_isShared_3837_ = v_isSharedCheck_3842_;
goto v_resetjp_3835_;
}
v_resetjp_3835_:
{
lean_object* v___x_3838_; lean_object* v___x_3840_; 
v___x_3838_ = l_Lean_Doc_joinInlines(v_a_3834_);
lean_dec(v_a_3834_);
if (v_isShared_3837_ == 0)
{
lean_ctor_set(v___x_3836_, 0, v___x_3838_);
v___x_3840_ = v___x_3836_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3841_; 
v_reuseFailAlloc_3841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3841_, 0, v___x_3838_);
v___x_3840_ = v_reuseFailAlloc_3841_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
return v___x_3840_;
}
}
}
else
{
lean_object* v_a_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3850_; 
v_a_3843_ = lean_ctor_get(v___x_3833_, 0);
v_isSharedCheck_3850_ = !lean_is_exclusive(v___x_3833_);
if (v_isSharedCheck_3850_ == 0)
{
v___x_3845_ = v___x_3833_;
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_a_3843_);
lean_dec(v___x_3833_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3850_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3848_; 
if (v_isShared_3846_ == 0)
{
v___x_3848_ = v___x_3845_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v_a_3843_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
}
default: 
{
lean_object* v_container_3851_; 
v_container_3851_ = lean_ctor_get(v_x_3559_, 0);
if (lean_obj_tag(v_container_3851_) == 0)
{
lean_object* v_content_3852_; lean_object* v_val_3853_; lean_object* v___f_3854_; size_t v_sz_3855_; size_t v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v_fallback_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; 
lean_inc_ref(v_container_3851_);
v_content_3852_ = lean_ctor_get(v_x_3559_, 1);
lean_inc_ref_n(v_content_3852_, 2);
lean_dec_ref_known(v_x_3559_, 2);
v_val_3853_ = lean_ctor_get(v_container_3851_, 0);
lean_inc(v_val_3853_);
lean_dec_ref_known(v_container_3851_, 1);
lean_inc_ref_n(v_x_3558_, 2);
v___f_3854_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3854_, 0, v_x_3558_);
v_sz_3855_ = lean_array_size(v_content_3852_);
v___x_3856_ = ((size_t)0ULL);
v___x_3857_ = lean_box_usize(v_sz_3855_);
v___x_3858_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v_fallback_3859_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__1___boxed), 8, 4);
lean_closure_set(v_fallback_3859_, 0, v_x_3558_);
lean_closure_set(v_fallback_3859_, 1, v___x_3857_);
lean_closure_set(v_fallback_3859_, 2, v___x_3858_);
lean_closure_set(v_fallback_3859_, 3, v_content_3852_);
v___x_3860_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_3853_);
v___x_3861_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineRendererForUnsafe(v___x_3860_, v___y_3561_, v___y_3562_);
lean_dec(v___x_3860_);
if (lean_obj_tag(v___x_3861_) == 0)
{
lean_object* v_a_3862_; 
v_a_3862_ = lean_ctor_get(v___x_3861_, 0);
lean_inc(v_a_3862_);
lean_dec_ref_known(v___x_3861_, 1);
if (lean_obj_tag(v_a_3862_) == 0)
{
lean_object* v___x_3863_; 
lean_dec_ref(v_fallback_3859_);
lean_dec_ref(v___f_3854_);
lean_dec(v_val_3853_);
v___x_3863_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(v_x_3558_, v_sz_3855_, v___x_3856_, v_content_3852_, v___y_3560_, v___y_3561_, v___y_3562_);
if (lean_obj_tag(v___x_3863_) == 0)
{
lean_object* v_a_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3872_; 
v_a_3864_ = lean_ctor_get(v___x_3863_, 0);
v_isSharedCheck_3872_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3872_ == 0)
{
v___x_3866_ = v___x_3863_;
v_isShared_3867_ = v_isSharedCheck_3872_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_a_3864_);
lean_dec(v___x_3863_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3872_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3868_; lean_object* v___x_3870_; 
v___x_3868_ = l_Lean_Doc_joinInlines(v_a_3864_);
lean_dec(v_a_3864_);
if (v_isShared_3867_ == 0)
{
lean_ctor_set(v___x_3866_, 0, v___x_3868_);
v___x_3870_ = v___x_3866_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3871_; 
v_reuseFailAlloc_3871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3871_, 0, v___x_3868_);
v___x_3870_ = v_reuseFailAlloc_3871_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
return v___x_3870_;
}
}
}
else
{
lean_object* v_a_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3880_; 
v_a_3873_ = lean_ctor_get(v___x_3863_, 0);
v_isSharedCheck_3880_ = !lean_is_exclusive(v___x_3863_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3875_ = v___x_3863_;
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_a_3873_);
lean_dec(v___x_3863_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v___x_3878_; 
if (v_isShared_3876_ == 0)
{
v___x_3878_ = v___x_3875_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v_a_3873_);
v___x_3878_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
return v___x_3878_;
}
}
}
}
else
{
lean_object* v_val_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
lean_dec_ref(v_x_3558_);
v_val_3881_ = lean_ctor_get(v_a_3862_, 0);
lean_inc(v_val_3881_);
lean_dec_ref_known(v_a_3862_, 1);
v___x_3882_ = lean_apply_3(v_val_3881_, v___f_3854_, v_val_3853_, v_content_3852_);
v___x_3883_ = l_Lean_Doc_withRendererFallback(v_fallback_3859_, v___x_3882_, v___y_3560_, v___y_3561_, v___y_3562_);
return v___x_3883_;
}
}
else
{
lean_object* v_a_3884_; lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_3891_; 
lean_dec_ref(v_fallback_3859_);
lean_dec_ref(v___f_3854_);
lean_dec(v_val_3853_);
lean_dec_ref(v_content_3852_);
lean_dec_ref(v_x_3558_);
v_a_3884_ = lean_ctor_get(v___x_3861_, 0);
v_isSharedCheck_3891_ = !lean_is_exclusive(v___x_3861_);
if (v_isSharedCheck_3891_ == 0)
{
v___x_3886_ = v___x_3861_;
v_isShared_3887_ = v_isSharedCheck_3891_;
goto v_resetjp_3885_;
}
else
{
lean_inc(v_a_3884_);
lean_dec(v___x_3861_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_3891_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
lean_object* v___x_3889_; 
if (v_isShared_3887_ == 0)
{
v___x_3889_ = v___x_3886_;
goto v_reusejp_3888_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v_a_3884_);
v___x_3889_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3888_;
}
v_reusejp_3888_:
{
return v___x_3889_;
}
}
}
}
else
{
lean_object* v_content_3892_; size_t v_sz_3893_; size_t v___x_3894_; lean_object* v___x_3895_; 
v_content_3892_ = lean_ctor_get(v_x_3559_, 1);
lean_inc_ref(v_content_3892_);
lean_dec_ref_known(v_x_3559_, 2);
v_sz_3893_ = lean_array_size(v_content_3892_);
v___x_3894_ = ((size_t)0ULL);
v___x_3895_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(v_x_3558_, v_sz_3893_, v___x_3894_, v_content_3892_, v___y_3560_, v___y_3561_, v___y_3562_);
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v_a_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3904_; 
v_a_3896_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3904_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3904_ == 0)
{
v___x_3898_ = v___x_3895_;
v_isShared_3899_ = v_isSharedCheck_3904_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_a_3896_);
lean_dec(v___x_3895_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3904_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
lean_object* v___x_3900_; lean_object* v___x_3902_; 
v___x_3900_ = l_Lean_Doc_joinInlines(v_a_3896_);
lean_dec(v_a_3896_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 0, v___x_3900_);
v___x_3902_ = v___x_3898_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v___x_3900_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
}
else
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3912_; 
v_a_3905_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3912_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3907_ = v___x_3895_;
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v___x_3895_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3910_; 
if (v_isShared_3908_ == 0)
{
v___x_3910_ = v___x_3907_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v_a_3905_);
v___x_3910_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
return v___x_3910_;
}
}
}
}
}
}
v___jp_3564_:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; 
v___x_3566_ = l_Lean_Doc_joinInlines(v_pieces_3565_);
lean_dec_ref(v_pieces_3565_);
v___x_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3566_);
return v___x_3567_;
}
v___jp_3568_:
{
lean_object* v___x_3570_; lean_object* v___x_3571_; 
v___x_3570_ = l_Lean_Doc_joinInlines(v_pieces_3569_);
lean_dec_ref(v_pieces_3569_);
v___x_3571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3571_, 0, v___x_3570_);
return v___x_3571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___lam__0(lean_object* v_x_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_){
_start:
{
lean_object* v___x_3919_; 
v___x_3919_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v_x_3913_, v___y_3914_, v___y_3915_, v___y_3916_, v___y_3917_);
return v___x_3919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_x_3920_, lean_object* v_sz_3921_, lean_object* v_i_3922_, lean_object* v_bs_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_){
_start:
{
size_t v_sz_boxed_3928_; size_t v_i_boxed_3929_; lean_object* v_res_3930_; 
v_sz_boxed_3928_ = lean_unbox_usize(v_sz_3921_);
lean_dec(v_sz_3921_);
v_i_boxed_3929_ = lean_unbox_usize(v_i_3922_);
lean_dec(v_i_3922_);
v_res_3930_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0_spec__1(v_x_3920_, v_sz_boxed_3928_, v_i_boxed_3929_, v_bs_3923_, v___y_3924_, v___y_3925_, v___y_3926_);
lean_dec(v___y_3926_);
lean_dec_ref(v___y_3925_);
lean_dec(v___y_3924_);
return v_res_3930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed(lean_object* v_x_3931_, lean_object* v_x_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_){
_start:
{
lean_object* v_res_3937_; 
v_res_3937_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v_x_3931_, v_x_3932_, v___y_3933_, v___y_3934_, v___y_3935_);
lean_dec(v___y_3935_);
lean_dec_ref(v___y_3934_);
lean_dec(v___y_3933_);
return v_res_3937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0(lean_object* v___x_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_){
_start:
{
lean_object* v___x_3944_; 
v___x_3944_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_);
return v___x_3944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0___boxed(lean_object* v___x_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_){
_start:
{
lean_object* v_res_3951_; 
v_res_3951_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__0(v___x_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
lean_dec(v___y_3949_);
lean_dec_ref(v___y_3948_);
lean_dec(v___y_3947_);
return v_res_3951_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__6(lean_object* v_x_3952_, lean_object* v_x_3953_){
_start:
{
lean_object* v_zero_3954_; uint8_t v_isZero_3955_; 
v_zero_3954_ = lean_unsigned_to_nat(0u);
v_isZero_3955_ = lean_nat_dec_eq(v_x_3952_, v_zero_3954_);
if (v_isZero_3955_ == 1)
{
lean_dec(v_x_3952_);
return v_x_3953_;
}
else
{
uint32_t v___x_3956_; lean_object* v_one_3957_; lean_object* v_n_3958_; lean_object* v___x_3959_; 
v___x_3956_ = 32;
v_one_3957_ = lean_unsigned_to_nat(1u);
v_n_3958_ = lean_nat_sub(v_x_3952_, v_one_3957_);
lean_dec(v_x_3952_);
v___x_3959_ = lean_string_push(v_x_3953_, v___x_3956_);
v_x_3952_ = v_n_3958_;
v_x_3953_ = v___x_3959_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5(size_t v_sz_3961_, size_t v_i_3962_, lean_object* v_bs_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_){
_start:
{
uint8_t v___x_3968_; 
v___x_3968_ = lean_usize_dec_lt(v_i_3962_, v_sz_3961_);
if (v___x_3968_ == 0)
{
lean_object* v___x_3969_; 
v___x_3969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3969_, 0, v_bs_3963_);
return v___x_3969_;
}
else
{
lean_object* v_v_3970_; lean_object* v___x_3971_; lean_object* v_bs_x27_3972_; size_t v_sz_3973_; size_t v___x_3974_; lean_object* v___x_3975_; 
v_v_3970_ = lean_array_uget(v_bs_3963_, v_i_3962_);
v___x_3971_ = lean_unsigned_to_nat(0u);
v_bs_x27_3972_ = lean_array_uset(v_bs_3963_, v_i_3962_, v___x_3971_);
v_sz_3973_ = lean_array_size(v_v_3970_);
v___x_3974_ = ((size_t)0ULL);
v___x_3975_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_3973_, v___x_3974_, v_v_3970_, v___y_3964_, v___y_3965_, v___y_3966_);
if (lean_obj_tag(v___x_3975_) == 0)
{
lean_object* v_a_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; size_t v___x_3981_; size_t v___x_3982_; lean_object* v___x_3983_; 
v_a_3976_ = lean_ctor_get(v___x_3975_, 0);
lean_inc(v_a_3976_);
lean_dec_ref_known(v___x_3975_, 1);
v___x_3977_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0));
v___x_3978_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1));
v___x_3979_ = l_Lean_Doc_joinBlocks(v_a_3976_);
lean_dec(v_a_3976_);
v___x_3980_ = l_Lean_Doc_prefixListLines(v___x_3977_, v___x_3978_, v___x_3979_);
v___x_3981_ = ((size_t)1ULL);
v___x_3982_ = lean_usize_add(v_i_3962_, v___x_3981_);
v___x_3983_ = lean_array_uset(v_bs_x27_3972_, v_i_3962_, v___x_3980_);
v_i_3962_ = v___x_3982_;
v_bs_3963_ = v___x_3983_;
goto _start;
}
else
{
lean_dec_ref(v_bs_x27_3972_);
return v___x_3975_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7(lean_object* v_as_3985_, size_t v_sz_3986_, size_t v_i_3987_, lean_object* v_b_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_){
_start:
{
uint8_t v___x_3993_; 
v___x_3993_ = lean_usize_dec_lt(v_i_3987_, v_sz_3986_);
if (v___x_3993_ == 0)
{
lean_object* v___x_3994_; 
v___x_3994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3994_, 0, v_b_3988_);
return v___x_3994_;
}
else
{
lean_object* v_fst_3995_; lean_object* v_snd_3996_; lean_object* v___x_3998_; uint8_t v_isShared_3999_; uint8_t v_isSharedCheck_4030_; 
v_fst_3995_ = lean_ctor_get(v_b_3988_, 0);
v_snd_3996_ = lean_ctor_get(v_b_3988_, 1);
v_isSharedCheck_4030_ = !lean_is_exclusive(v_b_3988_);
if (v_isSharedCheck_4030_ == 0)
{
v___x_3998_ = v_b_3988_;
v_isShared_3999_ = v_isSharedCheck_4030_;
goto v_resetjp_3997_;
}
else
{
lean_inc(v_snd_3996_);
lean_inc(v_fst_3995_);
lean_dec(v_b_3988_);
v___x_3998_ = lean_box(0);
v_isShared_3999_ = v_isSharedCheck_4030_;
goto v_resetjp_3997_;
}
v_resetjp_3997_:
{
lean_object* v___x_4000_; lean_object* v_a_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; size_t v_sz_4008_; size_t v___x_4009_; lean_object* v___x_4010_; 
v___x_4000_ = lean_unsigned_to_nat(1u);
v_a_4001_ = lean_array_uget_borrowed(v_as_3985_, v_i_3987_);
lean_inc(v_snd_3996_);
v___x_4002_ = l_Nat_reprFast(v_snd_3996_);
v___x_4003_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__2___closed__0));
v___x_4004_ = lean_string_append(v___x_4002_, v___x_4003_);
v___x_4005_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_4006_ = lean_string_utf8_byte_size(v___x_4004_);
v___x_4007_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__6(v___x_4006_, v___x_4005_);
v_sz_4008_ = lean_array_size(v_a_4001_);
v___x_4009_ = ((size_t)0ULL);
lean_inc(v_a_4001_);
v___x_4010_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_4008_, v___x_4009_, v_a_4001_, v___y_3989_, v___y_3990_, v___y_3991_);
if (lean_obj_tag(v___x_4010_) == 0)
{
lean_object* v_a_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4017_; 
v_a_4011_ = lean_ctor_get(v___x_4010_, 0);
lean_inc(v_a_4011_);
lean_dec_ref_known(v___x_4010_, 1);
v___x_4012_ = l_Lean_Doc_joinBlocks(v_a_4011_);
lean_dec(v_a_4011_);
v___x_4013_ = l_Lean_Doc_prefixListLines(v___x_4004_, v___x_4007_, v___x_4012_);
v___x_4014_ = lean_array_push(v_fst_3995_, v___x_4013_);
v___x_4015_ = lean_nat_add(v_snd_3996_, v___x_4000_);
lean_dec(v_snd_3996_);
if (v_isShared_3999_ == 0)
{
lean_ctor_set(v___x_3998_, 1, v___x_4015_);
lean_ctor_set(v___x_3998_, 0, v___x_4014_);
v___x_4017_ = v___x_3998_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4021_; 
v_reuseFailAlloc_4021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4021_, 0, v___x_4014_);
lean_ctor_set(v_reuseFailAlloc_4021_, 1, v___x_4015_);
v___x_4017_ = v_reuseFailAlloc_4021_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
size_t v___x_4018_; size_t v___x_4019_; 
v___x_4018_ = ((size_t)1ULL);
v___x_4019_ = lean_usize_add(v_i_3987_, v___x_4018_);
v_i_3987_ = v___x_4019_;
v_b_3988_ = v___x_4017_;
goto _start;
}
}
else
{
lean_object* v_a_4022_; lean_object* v___x_4024_; uint8_t v_isShared_4025_; uint8_t v_isSharedCheck_4029_; 
lean_dec_ref(v___x_4007_);
lean_dec_ref(v___x_4004_);
lean_del_object(v___x_3998_);
lean_dec(v_snd_3996_);
lean_dec(v_fst_3995_);
v_a_4022_ = lean_ctor_get(v___x_4010_, 0);
v_isSharedCheck_4029_ = !lean_is_exclusive(v___x_4010_);
if (v_isSharedCheck_4029_ == 0)
{
v___x_4024_ = v___x_4010_;
v_isShared_4025_ = v_isSharedCheck_4029_;
goto v_resetjp_4023_;
}
else
{
lean_inc(v_a_4022_);
lean_dec(v___x_4010_);
v___x_4024_ = lean_box(0);
v_isShared_4025_ = v_isSharedCheck_4029_;
goto v_resetjp_4023_;
}
v_resetjp_4023_:
{
lean_object* v___x_4027_; 
if (v_isShared_4025_ == 0)
{
v___x_4027_ = v___x_4024_;
goto v_reusejp_4026_;
}
else
{
lean_object* v_reuseFailAlloc_4028_; 
v_reuseFailAlloc_4028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4028_, 0, v_a_4022_);
v___x_4027_ = v_reuseFailAlloc_4028_;
goto v_reusejp_4026_;
}
v_reusejp_4026_:
{
return v___x_4027_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8(size_t v_sz_4031_, size_t v_i_4032_, lean_object* v_bs_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_){
_start:
{
uint8_t v___x_4038_; 
v___x_4038_ = lean_usize_dec_lt(v_i_4032_, v_sz_4031_);
if (v___x_4038_ == 0)
{
lean_object* v___x_4039_; 
v___x_4039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4039_, 0, v_bs_4033_);
return v___x_4039_;
}
else
{
lean_object* v_v_4040_; lean_object* v___x_4041_; lean_object* v_term_4042_; lean_object* v_desc_4043_; lean_object* v___x_4044_; lean_object* v_bs_x27_4045_; lean_object* v_a_4047_; lean_object* v___x_4052_; lean_object* v___x_4053_; 
v_v_4040_ = lean_array_uget_borrowed(v_bs_4033_, v_i_4032_);
v___x_4041_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
v_term_4042_ = lean_ctor_get(v_v_4040_, 0);
lean_inc_ref(v_term_4042_);
v_desc_4043_ = lean_ctor_get(v_v_4040_, 1);
lean_inc_ref(v_desc_4043_);
v___x_4044_ = lean_unsigned_to_nat(0u);
v_bs_x27_4045_ = lean_array_uset(v_bs_4033_, v_i_4032_, v___x_4044_);
v___x_4052_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4052_, 0, v_term_4042_);
v___x_4053_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_4041_, v___x_4052_, v___y_4034_, v___y_4035_, v___y_4036_);
if (lean_obj_tag(v___x_4053_) == 0)
{
lean_object* v_a_4054_; size_t v_sz_4055_; size_t v___x_4056_; lean_object* v___x_4057_; 
v_a_4054_ = lean_ctor_get(v___x_4053_, 0);
lean_inc(v_a_4054_);
lean_dec_ref_known(v___x_4053_, 1);
v_sz_4055_ = lean_array_size(v_desc_4043_);
v___x_4056_ = ((size_t)0ULL);
lean_inc_ref(v_desc_4043_);
v___x_4057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_4055_, v___x_4056_, v_desc_4043_, v___y_4034_, v___y_4035_, v___y_4036_);
if (lean_obj_tag(v___x_4057_) == 0)
{
lean_object* v_a_4058_; lean_object* v___y_4060_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; uint8_t v___x_4073_; 
v_a_4058_ = lean_ctor_get(v___x_4057_, 0);
lean_inc(v_a_4058_);
lean_dec_ref_known(v___x_4057_, 1);
v___x_4064_ = lean_unsigned_to_nat(1u);
v___x_4065_ = lean_mk_empty_array_with_capacity(v___x_4064_);
v___x_4066_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__3___closed__1));
v___x_4067_ = lean_unsigned_to_nat(2u);
v___x_4068_ = lean_mk_empty_array_with_capacity(v___x_4067_);
v___x_4069_ = lean_array_push(v___x_4068_, v_a_4054_);
v___x_4070_ = lean_array_push(v___x_4069_, v___x_4066_);
v___x_4071_ = l_Lean_Doc_joinInlines(v___x_4070_);
lean_dec_ref(v___x_4070_);
v___x_4072_ = lean_array_get_size(v_desc_4043_);
lean_dec_ref(v_desc_4043_);
v___x_4073_ = lean_nat_dec_le(v___x_4072_, v___x_4064_);
if (v___x_4073_ == 0)
{
lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
v___x_4074_ = lean_array_push(v___x_4065_, v___x_4071_);
v___x_4075_ = l_Array_append___redArg(v___x_4074_, v_a_4058_);
lean_dec(v_a_4058_);
v___x_4076_ = l_Lean_Doc_joinBlocks(v___x_4075_);
lean_dec_ref(v___x_4075_);
v___y_4060_ = v___x_4076_;
goto v___jp_4059_;
}
else
{
lean_object* v___x_4077_; lean_object* v___x_4078_; 
lean_dec_ref(v___x_4065_);
v___x_4077_ = l_Lean_Doc_joinBlocks(v_a_4058_);
lean_dec(v_a_4058_);
v___x_4078_ = l_Array_append___redArg(v___x_4071_, v___x_4077_);
lean_dec_ref(v___x_4077_);
v___y_4060_ = v___x_4078_;
goto v___jp_4059_;
}
v___jp_4059_:
{
lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; 
v___x_4061_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__0));
v___x_4062_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___lam__0___closed__1));
v___x_4063_ = l_Lean_Doc_prefixListLines(v___x_4061_, v___x_4062_, v___y_4060_);
v_a_4047_ = v___x_4063_;
goto v___jp_4046_;
}
}
else
{
lean_dec(v_a_4054_);
lean_dec_ref(v_bs_x27_4045_);
lean_dec_ref(v_desc_4043_);
return v___x_4057_;
}
}
else
{
lean_dec_ref(v_desc_4043_);
if (lean_obj_tag(v___x_4053_) == 0)
{
lean_object* v_a_4079_; 
v_a_4079_ = lean_ctor_get(v___x_4053_, 0);
lean_inc(v_a_4079_);
lean_dec_ref_known(v___x_4053_, 1);
v_a_4047_ = v_a_4079_;
goto v___jp_4046_;
}
else
{
lean_object* v_a_4080_; lean_object* v___x_4082_; uint8_t v_isShared_4083_; uint8_t v_isSharedCheck_4087_; 
lean_dec_ref(v_bs_x27_4045_);
v_a_4080_ = lean_ctor_get(v___x_4053_, 0);
v_isSharedCheck_4087_ = !lean_is_exclusive(v___x_4053_);
if (v_isSharedCheck_4087_ == 0)
{
v___x_4082_ = v___x_4053_;
v_isShared_4083_ = v_isSharedCheck_4087_;
goto v_resetjp_4081_;
}
else
{
lean_inc(v_a_4080_);
lean_dec(v___x_4053_);
v___x_4082_ = lean_box(0);
v_isShared_4083_ = v_isSharedCheck_4087_;
goto v_resetjp_4081_;
}
v_resetjp_4081_:
{
lean_object* v___x_4085_; 
if (v_isShared_4083_ == 0)
{
v___x_4085_ = v___x_4082_;
goto v_reusejp_4084_;
}
else
{
lean_object* v_reuseFailAlloc_4086_; 
v_reuseFailAlloc_4086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4086_, 0, v_a_4080_);
v___x_4085_ = v_reuseFailAlloc_4086_;
goto v_reusejp_4084_;
}
v_reusejp_4084_:
{
return v___x_4085_;
}
}
}
}
v___jp_4046_:
{
size_t v___x_4048_; size_t v___x_4049_; lean_object* v___x_4050_; 
v___x_4048_ = ((size_t)1ULL);
v___x_4049_ = lean_usize_add(v_i_4032_, v___x_4048_);
v___x_4050_ = lean_array_uset(v_bs_x27_4045_, v_i_4032_, v_a_4047_);
v_i_4032_ = v___x_4049_;
v_bs_4033_ = v___x_4050_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___boxed(lean_object* v_x_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_){
_start:
{
lean_object* v_res_4093_; 
v_res_4093_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1(v_x_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
lean_dec(v___y_4091_);
lean_dec_ref(v___y_4090_);
lean_dec(v___y_4089_);
return v_res_4093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1___boxed(lean_object* v_sz_4096_, lean_object* v___x_4097_, lean_object* v_content_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_){
_start:
{
size_t v_sz_boxed_4103_; size_t v___x_6130__boxed_4104_; lean_object* v_res_4105_; 
v_sz_boxed_4103_ = lean_unbox_usize(v_sz_4096_);
lean_dec(v_sz_4096_);
v___x_6130__boxed_4104_ = lean_unbox_usize(v___x_4097_);
lean_dec(v___x_4097_);
v_res_4105_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1(v_sz_boxed_4103_, v___x_6130__boxed_4104_, v_content_4098_, v___y_4099_, v___y_4100_, v___y_4101_);
lean_dec(v___y_4101_);
lean_dec_ref(v___y_4100_);
lean_dec(v___y_4099_);
return v_res_4105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1(lean_object* v_x_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_){
_start:
{
switch(lean_obj_tag(v_x_4106_))
{
case 0:
{
lean_object* v_contents_4111_; lean_object* v___x_4113_; uint8_t v_isShared_4114_; uint8_t v_isSharedCheck_4120_; 
v_contents_4111_ = lean_ctor_get(v_x_4106_, 0);
v_isSharedCheck_4120_ = !lean_is_exclusive(v_x_4106_);
if (v_isSharedCheck_4120_ == 0)
{
v___x_4113_ = v_x_4106_;
v_isShared_4114_ = v_isSharedCheck_4120_;
goto v_resetjp_4112_;
}
else
{
lean_inc(v_contents_4111_);
lean_dec(v_x_4106_);
v___x_4113_ = lean_box(0);
v_isShared_4114_ = v_isSharedCheck_4120_;
goto v_resetjp_4112_;
}
v_resetjp_4112_:
{
lean_object* v___x_4115_; lean_object* v___x_4117_; 
v___x_4115_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
if (v_isShared_4114_ == 0)
{
lean_ctor_set_tag(v___x_4113_, 9);
v___x_4117_ = v___x_4113_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4119_; 
v_reuseFailAlloc_4119_ = lean_alloc_ctor(9, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4119_, 0, v_contents_4111_);
v___x_4117_ = v_reuseFailAlloc_4119_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
lean_object* v___x_4118_; 
v___x_4118_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_4115_, v___x_4117_, v___y_4107_, v___y_4108_, v___y_4109_);
return v___x_4118_;
}
}
}
case 1:
{
lean_object* v_content_4121_; lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4129_; 
v_content_4121_ = lean_ctor_get(v_x_4106_, 0);
v_isSharedCheck_4129_ = !lean_is_exclusive(v_x_4106_);
if (v_isSharedCheck_4129_ == 0)
{
v___x_4123_ = v_x_4106_;
v_isShared_4124_ = v_isSharedCheck_4129_;
goto v_resetjp_4122_;
}
else
{
lean_inc(v_content_4121_);
lean_dec(v_x_4106_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4129_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
lean_object* v___x_4125_; lean_object* v___x_4127_; 
v___x_4125_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_codeBlockLines(v_content_4121_);
if (v_isShared_4124_ == 0)
{
lean_ctor_set_tag(v___x_4123_, 0);
lean_ctor_set(v___x_4123_, 0, v___x_4125_);
v___x_4127_ = v___x_4123_;
goto v_reusejp_4126_;
}
else
{
lean_object* v_reuseFailAlloc_4128_; 
v_reuseFailAlloc_4128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4128_, 0, v___x_4125_);
v___x_4127_ = v_reuseFailAlloc_4128_;
goto v_reusejp_4126_;
}
v_reusejp_4126_:
{
return v___x_4127_;
}
}
}
case 2:
{
lean_object* v_items_4130_; size_t v_sz_4131_; size_t v___x_4132_; lean_object* v___x_4133_; 
v_items_4130_ = lean_ctor_get(v_x_4106_, 0);
lean_inc_ref(v_items_4130_);
lean_dec_ref_known(v_x_4106_, 1);
v_sz_4131_ = lean_array_size(v_items_4130_);
v___x_4132_ = ((size_t)0ULL);
v___x_4133_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5(v_sz_4131_, v___x_4132_, v_items_4130_, v___y_4107_, v___y_4108_, v___y_4109_);
if (lean_obj_tag(v___x_4133_) == 0)
{
lean_object* v_a_4134_; lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4142_; 
v_a_4134_ = lean_ctor_get(v___x_4133_, 0);
v_isSharedCheck_4142_ = !lean_is_exclusive(v___x_4133_);
if (v_isSharedCheck_4142_ == 0)
{
v___x_4136_ = v___x_4133_;
v_isShared_4137_ = v_isSharedCheck_4142_;
goto v_resetjp_4135_;
}
else
{
lean_inc(v_a_4134_);
lean_dec(v___x_4133_);
v___x_4136_ = lean_box(0);
v_isShared_4137_ = v_isSharedCheck_4142_;
goto v_resetjp_4135_;
}
v_resetjp_4135_:
{
lean_object* v___x_4138_; lean_object* v___x_4140_; 
v___x_4138_ = l_Lean_Doc_joinBlocks(v_a_4134_);
lean_dec(v_a_4134_);
if (v_isShared_4137_ == 0)
{
lean_ctor_set(v___x_4136_, 0, v___x_4138_);
v___x_4140_ = v___x_4136_;
goto v_reusejp_4139_;
}
else
{
lean_object* v_reuseFailAlloc_4141_; 
v_reuseFailAlloc_4141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4141_, 0, v___x_4138_);
v___x_4140_ = v_reuseFailAlloc_4141_;
goto v_reusejp_4139_;
}
v_reusejp_4139_:
{
return v___x_4140_;
}
}
}
else
{
lean_object* v_a_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4150_; 
v_a_4143_ = lean_ctor_get(v___x_4133_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v___x_4133_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4145_ = v___x_4133_;
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_a_4143_);
lean_dec(v___x_4133_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___x_4148_; 
if (v_isShared_4146_ == 0)
{
v___x_4148_ = v___x_4145_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v_a_4143_);
v___x_4148_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
return v___x_4148_;
}
}
}
}
case 3:
{
lean_object* v_start_4151_; lean_object* v_items_4152_; lean_object* v___x_4154_; uint8_t v_isShared_4155_; uint8_t v_isSharedCheck_4186_; 
v_start_4151_ = lean_ctor_get(v_x_4106_, 0);
v_items_4152_ = lean_ctor_get(v_x_4106_, 1);
v_isSharedCheck_4186_ = !lean_is_exclusive(v_x_4106_);
if (v_isSharedCheck_4186_ == 0)
{
v___x_4154_ = v_x_4106_;
v_isShared_4155_ = v_isSharedCheck_4186_;
goto v_resetjp_4153_;
}
else
{
lean_inc(v_items_4152_);
lean_inc(v_start_4151_);
lean_dec(v_x_4106_);
v___x_4154_ = lean_box(0);
v_isShared_4155_ = v_isSharedCheck_4186_;
goto v_resetjp_4153_;
}
v_resetjp_4153_:
{
lean_object* v_out_4156_; lean_object* v___y_4158_; lean_object* v___x_4183_; lean_object* v___x_4184_; uint8_t v___x_4185_; 
v_out_4156_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___redArg___closed__16));
v___x_4183_ = lean_unsigned_to_nat(1u);
v___x_4184_ = l_Int_toNat(v_start_4151_);
lean_dec(v_start_4151_);
v___x_4185_ = lean_nat_dec_le(v___x_4183_, v___x_4184_);
if (v___x_4185_ == 0)
{
lean_dec(v___x_4184_);
v___y_4158_ = v___x_4183_;
goto v___jp_4157_;
}
else
{
v___y_4158_ = v___x_4184_;
goto v___jp_4157_;
}
v___jp_4157_:
{
lean_object* v___x_4160_; 
if (v_isShared_4155_ == 0)
{
lean_ctor_set_tag(v___x_4154_, 0);
lean_ctor_set(v___x_4154_, 1, v___y_4158_);
lean_ctor_set(v___x_4154_, 0, v_out_4156_);
v___x_4160_ = v___x_4154_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v_out_4156_);
lean_ctor_set(v_reuseFailAlloc_4182_, 1, v___y_4158_);
v___x_4160_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
size_t v_sz_4161_; size_t v___x_4162_; lean_object* v___x_4163_; 
v_sz_4161_ = lean_array_size(v_items_4152_);
v___x_4162_ = ((size_t)0ULL);
v___x_4163_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7(v_items_4152_, v_sz_4161_, v___x_4162_, v___x_4160_, v___y_4107_, v___y_4108_, v___y_4109_);
lean_dec_ref(v_items_4152_);
if (lean_obj_tag(v___x_4163_) == 0)
{
lean_object* v_a_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4173_; 
v_a_4164_ = lean_ctor_get(v___x_4163_, 0);
v_isSharedCheck_4173_ = !lean_is_exclusive(v___x_4163_);
if (v_isSharedCheck_4173_ == 0)
{
v___x_4166_ = v___x_4163_;
v_isShared_4167_ = v_isSharedCheck_4173_;
goto v_resetjp_4165_;
}
else
{
lean_inc(v_a_4164_);
lean_dec(v___x_4163_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4173_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
lean_object* v_fst_4168_; lean_object* v___x_4169_; lean_object* v___x_4171_; 
v_fst_4168_ = lean_ctor_get(v_a_4164_, 0);
lean_inc(v_fst_4168_);
lean_dec(v_a_4164_);
v___x_4169_ = l_Lean_Doc_joinBlocks(v_fst_4168_);
lean_dec(v_fst_4168_);
if (v_isShared_4167_ == 0)
{
lean_ctor_set(v___x_4166_, 0, v___x_4169_);
v___x_4171_ = v___x_4166_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v___x_4169_);
v___x_4171_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
return v___x_4171_;
}
}
}
else
{
lean_object* v_a_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4181_; 
v_a_4174_ = lean_ctor_get(v___x_4163_, 0);
v_isSharedCheck_4181_ = !lean_is_exclusive(v___x_4163_);
if (v_isSharedCheck_4181_ == 0)
{
v___x_4176_ = v___x_4163_;
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_a_4174_);
lean_dec(v___x_4163_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4181_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
lean_object* v___x_4179_; 
if (v_isShared_4177_ == 0)
{
v___x_4179_ = v___x_4176_;
goto v_reusejp_4178_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v_a_4174_);
v___x_4179_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4178_;
}
v_reusejp_4178_:
{
return v___x_4179_;
}
}
}
}
}
}
}
case 4:
{
lean_object* v_items_4187_; size_t v_sz_4188_; size_t v___x_4189_; lean_object* v___x_4190_; 
v_items_4187_ = lean_ctor_get(v_x_4106_, 0);
lean_inc_ref(v_items_4187_);
lean_dec_ref_known(v_x_4106_, 1);
v_sz_4188_ = lean_array_size(v_items_4187_);
v___x_4189_ = ((size_t)0ULL);
v___x_4190_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8(v_sz_4188_, v___x_4189_, v_items_4187_, v___y_4107_, v___y_4108_, v___y_4109_);
if (lean_obj_tag(v___x_4190_) == 0)
{
lean_object* v_a_4191_; lean_object* v___x_4193_; uint8_t v_isShared_4194_; uint8_t v_isSharedCheck_4199_; 
v_a_4191_ = lean_ctor_get(v___x_4190_, 0);
v_isSharedCheck_4199_ = !lean_is_exclusive(v___x_4190_);
if (v_isSharedCheck_4199_ == 0)
{
v___x_4193_ = v___x_4190_;
v_isShared_4194_ = v_isSharedCheck_4199_;
goto v_resetjp_4192_;
}
else
{
lean_inc(v_a_4191_);
lean_dec(v___x_4190_);
v___x_4193_ = lean_box(0);
v_isShared_4194_ = v_isSharedCheck_4199_;
goto v_resetjp_4192_;
}
v_resetjp_4192_:
{
lean_object* v___x_4195_; lean_object* v___x_4197_; 
v___x_4195_ = l_Lean_Doc_joinBlocks(v_a_4191_);
lean_dec(v_a_4191_);
if (v_isShared_4194_ == 0)
{
lean_ctor_set(v___x_4193_, 0, v___x_4195_);
v___x_4197_ = v___x_4193_;
goto v_reusejp_4196_;
}
else
{
lean_object* v_reuseFailAlloc_4198_; 
v_reuseFailAlloc_4198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4198_, 0, v___x_4195_);
v___x_4197_ = v_reuseFailAlloc_4198_;
goto v_reusejp_4196_;
}
v_reusejp_4196_:
{
return v___x_4197_;
}
}
}
else
{
lean_object* v_a_4200_; lean_object* v___x_4202_; uint8_t v_isShared_4203_; uint8_t v_isSharedCheck_4207_; 
v_a_4200_ = lean_ctor_get(v___x_4190_, 0);
v_isSharedCheck_4207_ = !lean_is_exclusive(v___x_4190_);
if (v_isSharedCheck_4207_ == 0)
{
v___x_4202_ = v___x_4190_;
v_isShared_4203_ = v_isSharedCheck_4207_;
goto v_resetjp_4201_;
}
else
{
lean_inc(v_a_4200_);
lean_dec(v___x_4190_);
v___x_4202_ = lean_box(0);
v_isShared_4203_ = v_isSharedCheck_4207_;
goto v_resetjp_4201_;
}
v_resetjp_4201_:
{
lean_object* v___x_4205_; 
if (v_isShared_4203_ == 0)
{
v___x_4205_ = v___x_4202_;
goto v_reusejp_4204_;
}
else
{
lean_object* v_reuseFailAlloc_4206_; 
v_reuseFailAlloc_4206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4206_, 0, v_a_4200_);
v___x_4205_ = v_reuseFailAlloc_4206_;
goto v_reusejp_4204_;
}
v_reusejp_4204_:
{
return v___x_4205_;
}
}
}
}
case 5:
{
lean_object* v_items_4208_; size_t v_sz_4209_; size_t v___x_4210_; lean_object* v___x_4211_; 
v_items_4208_ = lean_ctor_get(v_x_4106_, 0);
lean_inc_ref(v_items_4208_);
lean_dec_ref_known(v_x_4106_, 1);
v_sz_4209_ = lean_array_size(v_items_4208_);
v___x_4210_ = ((size_t)0ULL);
v___x_4211_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_4209_, v___x_4210_, v_items_4208_, v___y_4107_, v___y_4108_, v___y_4109_);
if (lean_obj_tag(v___x_4211_) == 0)
{
lean_object* v_a_4212_; lean_object* v___x_4214_; uint8_t v_isShared_4215_; uint8_t v_isSharedCheck_4222_; 
v_a_4212_ = lean_ctor_get(v___x_4211_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v___x_4211_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4214_ = v___x_4211_;
v_isShared_4215_ = v_isSharedCheck_4222_;
goto v_resetjp_4213_;
}
else
{
lean_inc(v_a_4212_);
lean_dec(v___x_4211_);
v___x_4214_ = lean_box(0);
v_isShared_4215_ = v_isSharedCheck_4222_;
goto v_resetjp_4213_;
}
v_resetjp_4213_:
{
lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4220_; 
v___x_4216_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___redArg___closed__0));
v___x_4217_ = l_Lean_Doc_joinBlocks(v_a_4212_);
lean_dec(v_a_4212_);
v___x_4218_ = l_Lean_Doc_prefixLines(v___x_4216_, v___x_4217_);
if (v_isShared_4215_ == 0)
{
lean_ctor_set(v___x_4214_, 0, v___x_4218_);
v___x_4220_ = v___x_4214_;
goto v_reusejp_4219_;
}
else
{
lean_object* v_reuseFailAlloc_4221_; 
v_reuseFailAlloc_4221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4221_, 0, v___x_4218_);
v___x_4220_ = v_reuseFailAlloc_4221_;
goto v_reusejp_4219_;
}
v_reusejp_4219_:
{
return v___x_4220_;
}
}
}
else
{
lean_object* v_a_4223_; lean_object* v___x_4225_; uint8_t v_isShared_4226_; uint8_t v_isSharedCheck_4230_; 
v_a_4223_ = lean_ctor_get(v___x_4211_, 0);
v_isSharedCheck_4230_ = !lean_is_exclusive(v___x_4211_);
if (v_isSharedCheck_4230_ == 0)
{
v___x_4225_ = v___x_4211_;
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
else
{
lean_inc(v_a_4223_);
lean_dec(v___x_4211_);
v___x_4225_ = lean_box(0);
v_isShared_4226_ = v_isSharedCheck_4230_;
goto v_resetjp_4224_;
}
v_resetjp_4224_:
{
lean_object* v___x_4228_; 
if (v_isShared_4226_ == 0)
{
v___x_4228_ = v___x_4225_;
goto v_reusejp_4227_;
}
else
{
lean_object* v_reuseFailAlloc_4229_; 
v_reuseFailAlloc_4229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4229_, 0, v_a_4223_);
v___x_4228_ = v_reuseFailAlloc_4229_;
goto v_reusejp_4227_;
}
v_reusejp_4227_:
{
return v___x_4228_;
}
}
}
}
case 6:
{
lean_object* v_content_4231_; size_t v_sz_4232_; size_t v___x_4233_; lean_object* v___x_4234_; 
v_content_4231_ = lean_ctor_get(v_x_4106_, 0);
lean_inc_ref(v_content_4231_);
lean_dec_ref_known(v_x_4106_, 1);
v_sz_4232_ = lean_array_size(v_content_4231_);
v___x_4233_ = ((size_t)0ULL);
v___x_4234_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_4232_, v___x_4233_, v_content_4231_, v___y_4107_, v___y_4108_, v___y_4109_);
if (lean_obj_tag(v___x_4234_) == 0)
{
lean_object* v_a_4235_; lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4243_; 
v_a_4235_ = lean_ctor_get(v___x_4234_, 0);
v_isSharedCheck_4243_ = !lean_is_exclusive(v___x_4234_);
if (v_isSharedCheck_4243_ == 0)
{
v___x_4237_ = v___x_4234_;
v_isShared_4238_ = v_isSharedCheck_4243_;
goto v_resetjp_4236_;
}
else
{
lean_inc(v_a_4235_);
lean_dec(v___x_4234_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4243_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
lean_object* v___x_4239_; lean_object* v___x_4241_; 
v___x_4239_ = l_Lean_Doc_joinBlocks(v_a_4235_);
lean_dec(v_a_4235_);
if (v_isShared_4238_ == 0)
{
lean_ctor_set(v___x_4237_, 0, v___x_4239_);
v___x_4241_ = v___x_4237_;
goto v_reusejp_4240_;
}
else
{
lean_object* v_reuseFailAlloc_4242_; 
v_reuseFailAlloc_4242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4242_, 0, v___x_4239_);
v___x_4241_ = v_reuseFailAlloc_4242_;
goto v_reusejp_4240_;
}
v_reusejp_4240_:
{
return v___x_4241_;
}
}
}
else
{
lean_object* v_a_4244_; lean_object* v___x_4246_; uint8_t v_isShared_4247_; uint8_t v_isSharedCheck_4251_; 
v_a_4244_ = lean_ctor_get(v___x_4234_, 0);
v_isSharedCheck_4251_ = !lean_is_exclusive(v___x_4234_);
if (v_isSharedCheck_4251_ == 0)
{
v___x_4246_ = v___x_4234_;
v_isShared_4247_ = v_isSharedCheck_4251_;
goto v_resetjp_4245_;
}
else
{
lean_inc(v_a_4244_);
lean_dec(v___x_4234_);
v___x_4246_ = lean_box(0);
v_isShared_4247_ = v_isSharedCheck_4251_;
goto v_resetjp_4245_;
}
v_resetjp_4245_:
{
lean_object* v___x_4249_; 
if (v_isShared_4247_ == 0)
{
v___x_4249_ = v___x_4246_;
goto v_reusejp_4248_;
}
else
{
lean_object* v_reuseFailAlloc_4250_; 
v_reuseFailAlloc_4250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4250_, 0, v_a_4244_);
v___x_4249_ = v_reuseFailAlloc_4250_;
goto v_reusejp_4248_;
}
v_reusejp_4248_:
{
return v___x_4249_;
}
}
}
}
default: 
{
lean_object* v_container_4252_; 
v_container_4252_ = lean_ctor_get(v_x_4106_, 0);
if (lean_obj_tag(v_container_4252_) == 0)
{
lean_object* v_content_4253_; lean_object* v_val_4254_; lean_object* v___f_4255_; lean_object* v___f_4256_; size_t v_sz_4257_; size_t v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v_fallback_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; 
lean_inc_ref(v_container_4252_);
v_content_4253_ = lean_ctor_get(v_x_4106_, 1);
lean_inc_ref_n(v_content_4253_, 2);
lean_dec_ref_known(v_x_4106_, 2);
v_val_4254_ = lean_ctor_get(v_container_4252_, 0);
lean_inc(v_val_4254_);
lean_dec_ref_known(v_container_4252_, 1);
v___f_4255_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___boxed), 5, 0);
v___f_4256_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___closed__0));
v_sz_4257_ = lean_array_size(v_content_4253_);
v___x_4258_ = ((size_t)0ULL);
v___x_4259_ = lean_box_usize(v_sz_4257_);
v___x_4260_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0___boxed__const__1));
v_fallback_4261_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1___boxed), 7, 3);
lean_closure_set(v_fallback_4261_, 0, v___x_4259_);
lean_closure_set(v_fallback_4261_, 1, v___x_4260_);
lean_closure_set(v_fallback_4261_, 2, v_content_4253_);
v___x_4262_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v_val_4254_);
v___x_4263_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockRendererForUnsafe(v___x_4262_, v___y_4108_, v___y_4109_);
lean_dec(v___x_4262_);
if (lean_obj_tag(v___x_4263_) == 0)
{
lean_object* v_a_4264_; 
v_a_4264_ = lean_ctor_get(v___x_4263_, 0);
lean_inc(v_a_4264_);
lean_dec_ref_known(v___x_4263_, 1);
if (lean_obj_tag(v_a_4264_) == 0)
{
lean_object* v___x_4265_; 
lean_dec_ref(v_fallback_4261_);
lean_dec_ref(v___f_4255_);
lean_dec(v_val_4254_);
v___x_4265_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_4257_, v___x_4258_, v_content_4253_, v___y_4107_, v___y_4108_, v___y_4109_);
if (lean_obj_tag(v___x_4265_) == 0)
{
lean_object* v_a_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4274_; 
v_a_4266_ = lean_ctor_get(v___x_4265_, 0);
v_isSharedCheck_4274_ = !lean_is_exclusive(v___x_4265_);
if (v_isSharedCheck_4274_ == 0)
{
v___x_4268_ = v___x_4265_;
v_isShared_4269_ = v_isSharedCheck_4274_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_a_4266_);
lean_dec(v___x_4265_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4274_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
lean_object* v___x_4270_; lean_object* v___x_4272_; 
v___x_4270_ = l_Lean_Doc_joinBlocks(v_a_4266_);
lean_dec(v_a_4266_);
if (v_isShared_4269_ == 0)
{
lean_ctor_set(v___x_4268_, 0, v___x_4270_);
v___x_4272_ = v___x_4268_;
goto v_reusejp_4271_;
}
else
{
lean_object* v_reuseFailAlloc_4273_; 
v_reuseFailAlloc_4273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4273_, 0, v___x_4270_);
v___x_4272_ = v_reuseFailAlloc_4273_;
goto v_reusejp_4271_;
}
v_reusejp_4271_:
{
return v___x_4272_;
}
}
}
else
{
lean_object* v_a_4275_; lean_object* v___x_4277_; uint8_t v_isShared_4278_; uint8_t v_isSharedCheck_4282_; 
v_a_4275_ = lean_ctor_get(v___x_4265_, 0);
v_isSharedCheck_4282_ = !lean_is_exclusive(v___x_4265_);
if (v_isSharedCheck_4282_ == 0)
{
v___x_4277_ = v___x_4265_;
v_isShared_4278_ = v_isSharedCheck_4282_;
goto v_resetjp_4276_;
}
else
{
lean_inc(v_a_4275_);
lean_dec(v___x_4265_);
v___x_4277_ = lean_box(0);
v_isShared_4278_ = v_isSharedCheck_4282_;
goto v_resetjp_4276_;
}
v_resetjp_4276_:
{
lean_object* v___x_4280_; 
if (v_isShared_4278_ == 0)
{
v___x_4280_ = v___x_4277_;
goto v_reusejp_4279_;
}
else
{
lean_object* v_reuseFailAlloc_4281_; 
v_reuseFailAlloc_4281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4281_, 0, v_a_4275_);
v___x_4280_ = v_reuseFailAlloc_4281_;
goto v_reusejp_4279_;
}
v_reusejp_4279_:
{
return v___x_4280_;
}
}
}
}
else
{
lean_object* v_val_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; 
v_val_4283_ = lean_ctor_get(v_a_4264_, 0);
lean_inc(v_val_4283_);
lean_dec_ref_known(v_a_4264_, 1);
v___x_4284_ = lean_apply_4(v_val_4283_, v___f_4256_, v___f_4255_, v_val_4254_, v_content_4253_);
v___x_4285_ = l_Lean_Doc_withRendererFallback(v_fallback_4261_, v___x_4284_, v___y_4107_, v___y_4108_, v___y_4109_);
return v___x_4285_;
}
}
else
{
lean_object* v_a_4286_; lean_object* v___x_4288_; uint8_t v_isShared_4289_; uint8_t v_isSharedCheck_4293_; 
lean_dec_ref(v_fallback_4261_);
lean_dec_ref(v___f_4255_);
lean_dec(v_val_4254_);
lean_dec_ref(v_content_4253_);
v_a_4286_ = lean_ctor_get(v___x_4263_, 0);
v_isSharedCheck_4293_ = !lean_is_exclusive(v___x_4263_);
if (v_isSharedCheck_4293_ == 0)
{
v___x_4288_ = v___x_4263_;
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
else
{
lean_inc(v_a_4286_);
lean_dec(v___x_4263_);
v___x_4288_ = lean_box(0);
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
v_resetjp_4287_:
{
lean_object* v___x_4291_; 
if (v_isShared_4289_ == 0)
{
v___x_4291_ = v___x_4288_;
goto v_reusejp_4290_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v_a_4286_);
v___x_4291_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4290_;
}
v_reusejp_4290_:
{
return v___x_4291_;
}
}
}
}
else
{
lean_object* v_content_4294_; size_t v_sz_4295_; size_t v___x_4296_; lean_object* v___x_4297_; 
v_content_4294_ = lean_ctor_get(v_x_4106_, 1);
lean_inc_ref(v_content_4294_);
lean_dec_ref_known(v_x_4106_, 2);
v_sz_4295_ = lean_array_size(v_content_4294_);
v___x_4296_ = ((size_t)0ULL);
v___x_4297_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_4295_, v___x_4296_, v_content_4294_, v___y_4107_, v___y_4108_, v___y_4109_);
if (lean_obj_tag(v___x_4297_) == 0)
{
lean_object* v_a_4298_; lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4306_; 
v_a_4298_ = lean_ctor_get(v___x_4297_, 0);
v_isSharedCheck_4306_ = !lean_is_exclusive(v___x_4297_);
if (v_isSharedCheck_4306_ == 0)
{
v___x_4300_ = v___x_4297_;
v_isShared_4301_ = v_isSharedCheck_4306_;
goto v_resetjp_4299_;
}
else
{
lean_inc(v_a_4298_);
lean_dec(v___x_4297_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4306_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
lean_object* v___x_4302_; lean_object* v___x_4304_; 
v___x_4302_ = l_Lean_Doc_joinBlocks(v_a_4298_);
lean_dec(v_a_4298_);
if (v_isShared_4301_ == 0)
{
lean_ctor_set(v___x_4300_, 0, v___x_4302_);
v___x_4304_ = v___x_4300_;
goto v_reusejp_4303_;
}
else
{
lean_object* v_reuseFailAlloc_4305_; 
v_reuseFailAlloc_4305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4305_, 0, v___x_4302_);
v___x_4304_ = v_reuseFailAlloc_4305_;
goto v_reusejp_4303_;
}
v_reusejp_4303_:
{
return v___x_4304_;
}
}
}
else
{
lean_object* v_a_4307_; lean_object* v___x_4309_; uint8_t v_isShared_4310_; uint8_t v_isSharedCheck_4314_; 
v_a_4307_ = lean_ctor_get(v___x_4297_, 0);
v_isSharedCheck_4314_ = !lean_is_exclusive(v___x_4297_);
if (v_isSharedCheck_4314_ == 0)
{
v___x_4309_ = v___x_4297_;
v_isShared_4310_ = v_isSharedCheck_4314_;
goto v_resetjp_4308_;
}
else
{
lean_inc(v_a_4307_);
lean_dec(v___x_4297_);
v___x_4309_ = lean_box(0);
v_isShared_4310_ = v_isSharedCheck_4314_;
goto v_resetjp_4308_;
}
v_resetjp_4308_:
{
lean_object* v___x_4312_; 
if (v_isShared_4310_ == 0)
{
v___x_4312_ = v___x_4309_;
goto v_reusejp_4311_;
}
else
{
lean_object* v_reuseFailAlloc_4313_; 
v_reuseFailAlloc_4313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4313_, 0, v_a_4307_);
v___x_4312_ = v_reuseFailAlloc_4313_;
goto v_reusejp_4311_;
}
v_reusejp_4311_:
{
return v___x_4312_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(size_t v_sz_4315_, size_t v_i_4316_, lean_object* v_bs_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_){
_start:
{
uint8_t v___x_4322_; 
v___x_4322_ = lean_usize_dec_lt(v_i_4316_, v_sz_4315_);
if (v___x_4322_ == 0)
{
lean_object* v___x_4323_; 
v___x_4323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4323_, 0, v_bs_4317_);
return v___x_4323_;
}
else
{
lean_object* v_v_4324_; lean_object* v___x_4325_; lean_object* v_bs_x27_4326_; lean_object* v___x_4327_; 
v_v_4324_ = lean_array_uget(v_bs_4317_, v_i_4316_);
v___x_4325_ = lean_unsigned_to_nat(0u);
v_bs_x27_4326_ = lean_array_uset(v_bs_4317_, v_i_4316_, v___x_4325_);
v___x_4327_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1(v_v_4324_, v___y_4318_, v___y_4319_, v___y_4320_);
if (lean_obj_tag(v___x_4327_) == 0)
{
lean_object* v_a_4328_; size_t v___x_4329_; size_t v___x_4330_; lean_object* v___x_4331_; 
v_a_4328_ = lean_ctor_get(v___x_4327_, 0);
lean_inc(v_a_4328_);
lean_dec_ref_known(v___x_4327_, 1);
v___x_4329_ = ((size_t)1ULL);
v___x_4330_ = lean_usize_add(v_i_4316_, v___x_4329_);
v___x_4331_ = lean_array_uset(v_bs_x27_4326_, v_i_4316_, v_a_4328_);
v_i_4316_ = v___x_4330_;
v_bs_4317_ = v___x_4331_;
goto _start;
}
else
{
lean_object* v_a_4333_; lean_object* v___x_4335_; uint8_t v_isShared_4336_; uint8_t v_isSharedCheck_4340_; 
lean_dec_ref(v_bs_x27_4326_);
v_a_4333_ = lean_ctor_get(v___x_4327_, 0);
v_isSharedCheck_4340_ = !lean_is_exclusive(v___x_4327_);
if (v_isSharedCheck_4340_ == 0)
{
v___x_4335_ = v___x_4327_;
v_isShared_4336_ = v_isSharedCheck_4340_;
goto v_resetjp_4334_;
}
else
{
lean_inc(v_a_4333_);
lean_dec(v___x_4327_);
v___x_4335_ = lean_box(0);
v_isShared_4336_ = v_isSharedCheck_4340_;
goto v_resetjp_4334_;
}
v_resetjp_4334_:
{
lean_object* v___x_4338_; 
if (v_isShared_4336_ == 0)
{
v___x_4338_ = v___x_4335_;
goto v_reusejp_4337_;
}
else
{
lean_object* v_reuseFailAlloc_4339_; 
v_reuseFailAlloc_4339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4339_, 0, v_a_4333_);
v___x_4338_ = v_reuseFailAlloc_4339_;
goto v_reusejp_4337_;
}
v_reusejp_4337_:
{
return v___x_4338_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1___lam__1(size_t v_sz_4341_, size_t v___x_4342_, lean_object* v_content_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_){
_start:
{
lean_object* v___x_4348_; 
v___x_4348_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_4341_, v___x_4342_, v_content_4343_, v___y_4344_, v___y_4345_, v___y_4346_);
if (lean_obj_tag(v___x_4348_) == 0)
{
lean_object* v_a_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4357_; 
v_a_4349_ = lean_ctor_get(v___x_4348_, 0);
v_isSharedCheck_4357_ = !lean_is_exclusive(v___x_4348_);
if (v_isSharedCheck_4357_ == 0)
{
v___x_4351_ = v___x_4348_;
v_isShared_4352_ = v_isSharedCheck_4357_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_a_4349_);
lean_dec(v___x_4348_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4357_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4353_; lean_object* v___x_4355_; 
v___x_4353_ = l_Lean_Doc_joinBlocks(v_a_4349_);
lean_dec(v_a_4349_);
if (v_isShared_4352_ == 0)
{
lean_ctor_set(v___x_4351_, 0, v___x_4353_);
v___x_4355_ = v___x_4351_;
goto v_reusejp_4354_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v___x_4353_);
v___x_4355_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4354_;
}
v_reusejp_4354_:
{
return v___x_4355_;
}
}
}
else
{
lean_object* v_a_4358_; lean_object* v___x_4360_; uint8_t v_isShared_4361_; uint8_t v_isSharedCheck_4365_; 
v_a_4358_ = lean_ctor_get(v___x_4348_, 0);
v_isSharedCheck_4365_ = !lean_is_exclusive(v___x_4348_);
if (v_isSharedCheck_4365_ == 0)
{
v___x_4360_ = v___x_4348_;
v_isShared_4361_ = v_isSharedCheck_4365_;
goto v_resetjp_4359_;
}
else
{
lean_inc(v_a_4358_);
lean_dec(v___x_4348_);
v___x_4360_ = lean_box(0);
v_isShared_4361_ = v_isSharedCheck_4365_;
goto v_resetjp_4359_;
}
v_resetjp_4359_:
{
lean_object* v___x_4363_; 
if (v_isShared_4361_ == 0)
{
v___x_4363_ = v___x_4360_;
goto v_reusejp_4362_;
}
else
{
lean_object* v_reuseFailAlloc_4364_; 
v_reuseFailAlloc_4364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4364_, 0, v_a_4358_);
v___x_4363_ = v_reuseFailAlloc_4364_;
goto v_reusejp_4362_;
}
v_reusejp_4362_:
{
return v___x_4363_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2___boxed(lean_object* v_sz_4366_, lean_object* v_i_4367_, lean_object* v_bs_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_){
_start:
{
size_t v_sz_boxed_4373_; size_t v_i_boxed_4374_; lean_object* v_res_4375_; 
v_sz_boxed_4373_ = lean_unbox_usize(v_sz_4366_);
lean_dec(v_sz_4366_);
v_i_boxed_4374_ = lean_unbox_usize(v_i_4367_);
lean_dec(v_i_4367_);
v_res_4375_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_boxed_4373_, v_i_boxed_4374_, v_bs_4368_, v___y_4369_, v___y_4370_, v___y_4371_);
lean_dec(v___y_4371_);
lean_dec_ref(v___y_4370_);
lean_dec(v___y_4369_);
return v_res_4375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5___boxed(lean_object* v_sz_4376_, lean_object* v_i_4377_, lean_object* v_bs_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_){
_start:
{
size_t v_sz_boxed_4383_; size_t v_i_boxed_4384_; lean_object* v_res_4385_; 
v_sz_boxed_4383_ = lean_unbox_usize(v_sz_4376_);
lean_dec(v_sz_4376_);
v_i_boxed_4384_ = lean_unbox_usize(v_i_4377_);
lean_dec(v_i_4377_);
v_res_4385_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__5(v_sz_boxed_4383_, v_i_boxed_4384_, v_bs_4378_, v___y_4379_, v___y_4380_, v___y_4381_);
lean_dec(v___y_4381_);
lean_dec_ref(v___y_4380_);
lean_dec(v___y_4379_);
return v_res_4385_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7___boxed(lean_object* v_as_4386_, lean_object* v_sz_4387_, lean_object* v_i_4388_, lean_object* v_b_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_){
_start:
{
size_t v_sz_boxed_4394_; size_t v_i_boxed_4395_; lean_object* v_res_4396_; 
v_sz_boxed_4394_ = lean_unbox_usize(v_sz_4387_);
lean_dec(v_sz_4387_);
v_i_boxed_4395_ = lean_unbox_usize(v_i_4388_);
lean_dec(v_i_4388_);
v_res_4396_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__7(v_as_4386_, v_sz_boxed_4394_, v_i_boxed_4395_, v_b_4389_, v___y_4390_, v___y_4391_, v___y_4392_);
lean_dec(v___y_4392_);
lean_dec_ref(v___y_4391_);
lean_dec(v___y_4390_);
lean_dec_ref(v_as_4386_);
return v_res_4396_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8___boxed(lean_object* v_sz_4397_, lean_object* v_i_4398_, lean_object* v_bs_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_){
_start:
{
size_t v_sz_boxed_4404_; size_t v_i_boxed_4405_; lean_object* v_res_4406_; 
v_sz_boxed_4404_ = lean_unbox_usize(v_sz_4397_);
lean_dec(v_sz_4397_);
v_i_boxed_4405_ = lean_unbox_usize(v_i_4398_);
lean_dec(v_i_4398_);
v_res_4406_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_DocString_Markdown_0__Lean_Doc_blockMarkdown___at___00Lean_findSimpleDocString_x3f_spec__1_spec__8(v_sz_boxed_4404_, v_i_boxed_4405_, v_bs_4399_, v___y_4400_, v___y_4401_, v___y_4402_);
lean_dec(v___y_4402_);
lean_dec_ref(v___y_4401_);
lean_dec(v___y_4400_);
return v_res_4406_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1(size_t v_sz_4407_, size_t v_i_4408_, lean_object* v_bs_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_){
_start:
{
uint8_t v___x_4414_; 
v___x_4414_ = lean_usize_dec_lt(v_i_4408_, v_sz_4407_);
if (v___x_4414_ == 0)
{
lean_object* v___x_4415_; 
v___x_4415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4415_, 0, v_bs_4409_);
return v___x_4415_;
}
else
{
lean_object* v_v_4416_; lean_object* v___x_4417_; lean_object* v_bs_x27_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; 
v_v_4416_ = lean_array_uget(v_bs_4409_, v_i_4408_);
v___x_4417_ = lean_unsigned_to_nat(0u);
v_bs_x27_4418_ = lean_array_uset(v_bs_4409_, v_i_4408_, v___x_4417_);
v___x_4419_ = ((lean_object*)(l_Lean_Doc_MarkdownM_instInhabitedInlineCtx_default___closed__0));
v___x_4420_ = l___private_Lean_DocString_Markdown_0__Lean_Doc_inlineMarkdown___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__0(v___x_4419_, v_v_4416_, v___y_4410_, v___y_4411_, v___y_4412_);
if (lean_obj_tag(v___x_4420_) == 0)
{
lean_object* v_a_4421_; size_t v___x_4422_; size_t v___x_4423_; lean_object* v___x_4424_; 
v_a_4421_ = lean_ctor_get(v___x_4420_, 0);
lean_inc(v_a_4421_);
lean_dec_ref_known(v___x_4420_, 1);
v___x_4422_ = ((size_t)1ULL);
v___x_4423_ = lean_usize_add(v_i_4408_, v___x_4422_);
v___x_4424_ = lean_array_uset(v_bs_x27_4418_, v_i_4408_, v_a_4421_);
v_i_4408_ = v___x_4423_;
v_bs_4409_ = v___x_4424_;
goto _start;
}
else
{
lean_object* v_a_4426_; lean_object* v___x_4428_; uint8_t v_isShared_4429_; uint8_t v_isSharedCheck_4433_; 
lean_dec_ref(v_bs_x27_4418_);
v_a_4426_ = lean_ctor_get(v___x_4420_, 0);
v_isSharedCheck_4433_ = !lean_is_exclusive(v___x_4420_);
if (v_isSharedCheck_4433_ == 0)
{
v___x_4428_ = v___x_4420_;
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
else
{
lean_inc(v_a_4426_);
lean_dec(v___x_4420_);
v___x_4428_ = lean_box(0);
v_isShared_4429_ = v_isSharedCheck_4433_;
goto v_resetjp_4427_;
}
v_resetjp_4427_:
{
lean_object* v___x_4431_; 
if (v_isShared_4429_ == 0)
{
v___x_4431_ = v___x_4428_;
goto v_reusejp_4430_;
}
else
{
lean_object* v_reuseFailAlloc_4432_; 
v_reuseFailAlloc_4432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4432_, 0, v_a_4426_);
v___x_4431_ = v_reuseFailAlloc_4432_;
goto v_reusejp_4430_;
}
v_reusejp_4430_:
{
return v___x_4431_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1___boxed(lean_object* v_sz_4434_, lean_object* v_i_4435_, lean_object* v_bs_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_){
_start:
{
size_t v_sz_boxed_4441_; size_t v_i_boxed_4442_; lean_object* v_res_4443_; 
v_sz_boxed_4441_ = lean_unbox_usize(v_sz_4434_);
lean_dec(v_sz_4434_);
v_i_boxed_4442_ = lean_unbox_usize(v_i_4435_);
lean_dec(v_i_4435_);
v_res_4443_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1(v_sz_boxed_4441_, v_i_boxed_4442_, v_bs_4436_, v___y_4437_, v___y_4438_, v___y_4439_);
lean_dec(v___y_4439_);
lean_dec_ref(v___y_4438_);
lean_dec(v___y_4437_);
return v_res_4443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__2(lean_object* v_x_4444_, lean_object* v_x_4445_){
_start:
{
lean_object* v_zero_4446_; uint8_t v_isZero_4447_; 
v_zero_4446_ = lean_unsigned_to_nat(0u);
v_isZero_4447_ = lean_nat_dec_eq(v_x_4444_, v_zero_4446_);
if (v_isZero_4447_ == 1)
{
lean_dec(v_x_4444_);
return v_x_4445_;
}
else
{
uint32_t v___x_4448_; lean_object* v_one_4449_; lean_object* v_n_4450_; lean_object* v___x_4451_; 
v___x_4448_ = 35;
v_one_4449_ = lean_unsigned_to_nat(1u);
v_n_4450_ = lean_nat_sub(v_x_4444_, v_one_4449_);
lean_dec(v_x_4444_);
v___x_4451_ = lean_string_push(v_x_4445_, v___x_4448_);
v_x_4444_ = v_n_4450_;
v_x_4445_ = v___x_4451_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(lean_object* v_level_4453_, lean_object* v_part_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_){
_start:
{
lean_object* v_title_4459_; lean_object* v_content_4460_; lean_object* v_subParts_4461_; size_t v_sz_4462_; size_t v___x_4463_; lean_object* v___x_4464_; 
v_title_4459_ = lean_ctor_get(v_part_4454_, 0);
lean_inc_ref(v_title_4459_);
v_content_4460_ = lean_ctor_get(v_part_4454_, 3);
lean_inc_ref(v_content_4460_);
v_subParts_4461_ = lean_ctor_get(v_part_4454_, 4);
lean_inc_ref(v_subParts_4461_);
lean_dec_ref(v_part_4454_);
v_sz_4462_ = lean_array_size(v_title_4459_);
v___x_4463_ = ((size_t)0ULL);
v___x_4464_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__1(v_sz_4462_, v___x_4463_, v_title_4459_, v___y_4455_, v___y_4456_, v___y_4457_);
if (lean_obj_tag(v___x_4464_) == 0)
{
lean_object* v_a_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; size_t v_sz_4477_; lean_object* v___x_4478_; 
v_a_4465_ = lean_ctor_get(v___x_4464_, 0);
lean_inc(v_a_4465_);
lean_dec_ref_known(v___x_4464_, 1);
v___x_4466_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Doc_joinBlocks_spec__0___closed__0));
v___x_4467_ = lean_unsigned_to_nat(1u);
v___x_4468_ = lean_nat_add(v_level_4453_, v___x_4467_);
lean_inc(v___x_4468_);
v___x_4469_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__2(v___x_4468_, v___x_4466_);
v___x_4470_ = ((lean_object*)(l___private_Lean_DocString_Markdown_0__Lean_Doc_quoteCode___closed__0));
v___x_4471_ = lean_string_append(v___x_4469_, v___x_4470_);
v___x_4472_ = lean_mk_empty_array_with_capacity(v___x_4467_);
lean_inc_ref_n(v___x_4472_, 2);
v___x_4473_ = lean_array_push(v___x_4472_, v___x_4471_);
v___x_4474_ = lean_array_push(v___x_4472_, v___x_4473_);
v___x_4475_ = l_Array_append___redArg(v___x_4474_, v_a_4465_);
lean_dec(v_a_4465_);
v___x_4476_ = l_Lean_Doc_joinInlines(v___x_4475_);
lean_dec_ref(v___x_4475_);
v_sz_4477_ = lean_array_size(v_content_4460_);
v___x_4478_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_4477_, v___x_4463_, v_content_4460_, v___y_4455_, v___y_4456_, v___y_4457_);
if (lean_obj_tag(v___x_4478_) == 0)
{
lean_object* v_a_4479_; size_t v_sz_4480_; lean_object* v___x_4481_; 
v_a_4479_ = lean_ctor_get(v___x_4478_, 0);
lean_inc(v_a_4479_);
lean_dec_ref_known(v___x_4478_, 1);
v_sz_4480_ = lean_array_size(v_subParts_4461_);
v___x_4481_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg(v___x_4468_, v_sz_4480_, v___x_4463_, v_subParts_4461_, v___y_4455_, v___y_4456_, v___y_4457_);
lean_dec(v___x_4468_);
if (lean_obj_tag(v___x_4481_) == 0)
{
lean_object* v_a_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4493_; 
v_a_4482_ = lean_ctor_get(v___x_4481_, 0);
v_isSharedCheck_4493_ = !lean_is_exclusive(v___x_4481_);
if (v_isSharedCheck_4493_ == 0)
{
v___x_4484_ = v___x_4481_;
v_isShared_4485_ = v_isSharedCheck_4493_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_a_4482_);
lean_dec(v___x_4481_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4493_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4491_; 
v___x_4486_ = lean_array_push(v___x_4472_, v___x_4476_);
v___x_4487_ = l_Array_append___redArg(v___x_4486_, v_a_4479_);
lean_dec(v_a_4479_);
v___x_4488_ = l_Array_append___redArg(v___x_4487_, v_a_4482_);
lean_dec(v_a_4482_);
v___x_4489_ = l_Lean_Doc_joinBlocks(v___x_4488_);
lean_dec_ref(v___x_4488_);
if (v_isShared_4485_ == 0)
{
lean_ctor_set(v___x_4484_, 0, v___x_4489_);
v___x_4491_ = v___x_4484_;
goto v_reusejp_4490_;
}
else
{
lean_object* v_reuseFailAlloc_4492_; 
v_reuseFailAlloc_4492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4492_, 0, v___x_4489_);
v___x_4491_ = v_reuseFailAlloc_4492_;
goto v_reusejp_4490_;
}
v_reusejp_4490_:
{
return v___x_4491_;
}
}
}
else
{
lean_object* v_a_4494_; lean_object* v___x_4496_; uint8_t v_isShared_4497_; uint8_t v_isSharedCheck_4501_; 
lean_dec(v_a_4479_);
lean_dec_ref(v___x_4476_);
lean_dec_ref(v___x_4472_);
v_a_4494_ = lean_ctor_get(v___x_4481_, 0);
v_isSharedCheck_4501_ = !lean_is_exclusive(v___x_4481_);
if (v_isSharedCheck_4501_ == 0)
{
v___x_4496_ = v___x_4481_;
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
else
{
lean_inc(v_a_4494_);
lean_dec(v___x_4481_);
v___x_4496_ = lean_box(0);
v_isShared_4497_ = v_isSharedCheck_4501_;
goto v_resetjp_4495_;
}
v_resetjp_4495_:
{
lean_object* v___x_4499_; 
if (v_isShared_4497_ == 0)
{
v___x_4499_ = v___x_4496_;
goto v_reusejp_4498_;
}
else
{
lean_object* v_reuseFailAlloc_4500_; 
v_reuseFailAlloc_4500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4500_, 0, v_a_4494_);
v___x_4499_ = v_reuseFailAlloc_4500_;
goto v_reusejp_4498_;
}
v_reusejp_4498_:
{
return v___x_4499_;
}
}
}
}
else
{
lean_object* v_a_4502_; lean_object* v___x_4504_; uint8_t v_isShared_4505_; uint8_t v_isSharedCheck_4509_; 
lean_dec_ref(v___x_4476_);
lean_dec_ref(v___x_4472_);
lean_dec(v___x_4468_);
lean_dec_ref(v_subParts_4461_);
v_a_4502_ = lean_ctor_get(v___x_4478_, 0);
v_isSharedCheck_4509_ = !lean_is_exclusive(v___x_4478_);
if (v_isSharedCheck_4509_ == 0)
{
v___x_4504_ = v___x_4478_;
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
else
{
lean_inc(v_a_4502_);
lean_dec(v___x_4478_);
v___x_4504_ = lean_box(0);
v_isShared_4505_ = v_isSharedCheck_4509_;
goto v_resetjp_4503_;
}
v_resetjp_4503_:
{
lean_object* v___x_4507_; 
if (v_isShared_4505_ == 0)
{
v___x_4507_ = v___x_4504_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v_a_4502_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
return v___x_4507_;
}
}
}
}
else
{
lean_object* v_a_4510_; lean_object* v___x_4512_; uint8_t v_isShared_4513_; uint8_t v_isSharedCheck_4517_; 
lean_dec_ref(v_subParts_4461_);
lean_dec_ref(v_content_4460_);
v_a_4510_ = lean_ctor_get(v___x_4464_, 0);
v_isSharedCheck_4517_ = !lean_is_exclusive(v___x_4464_);
if (v_isSharedCheck_4517_ == 0)
{
v___x_4512_ = v___x_4464_;
v_isShared_4513_ = v_isSharedCheck_4517_;
goto v_resetjp_4511_;
}
else
{
lean_inc(v_a_4510_);
lean_dec(v___x_4464_);
v___x_4512_ = lean_box(0);
v_isShared_4513_ = v_isSharedCheck_4517_;
goto v_resetjp_4511_;
}
v_resetjp_4511_:
{
lean_object* v___x_4515_; 
if (v_isShared_4513_ == 0)
{
v___x_4515_ = v___x_4512_;
goto v_reusejp_4514_;
}
else
{
lean_object* v_reuseFailAlloc_4516_; 
v_reuseFailAlloc_4516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4516_, 0, v_a_4510_);
v___x_4515_ = v_reuseFailAlloc_4516_;
goto v_reusejp_4514_;
}
v_reusejp_4514_:
{
return v___x_4515_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg(lean_object* v___x_4518_, size_t v_sz_4519_, size_t v_i_4520_, lean_object* v_bs_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_){
_start:
{
uint8_t v___x_4526_; 
v___x_4526_ = lean_usize_dec_lt(v_i_4520_, v_sz_4519_);
if (v___x_4526_ == 0)
{
lean_object* v___x_4527_; 
v___x_4527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4527_, 0, v_bs_4521_);
return v___x_4527_;
}
else
{
lean_object* v_v_4528_; lean_object* v___x_4529_; lean_object* v_bs_x27_4530_; lean_object* v___x_4531_; 
v_v_4528_ = lean_array_uget(v_bs_4521_, v_i_4520_);
v___x_4529_ = lean_unsigned_to_nat(0u);
v_bs_x27_4530_ = lean_array_uset(v_bs_4521_, v_i_4520_, v___x_4529_);
v___x_4531_ = l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(v___x_4518_, v_v_4528_, v___y_4522_, v___y_4523_, v___y_4524_);
if (lean_obj_tag(v___x_4531_) == 0)
{
lean_object* v_a_4532_; size_t v___x_4533_; size_t v___x_4534_; lean_object* v___x_4535_; 
v_a_4532_ = lean_ctor_get(v___x_4531_, 0);
lean_inc(v_a_4532_);
lean_dec_ref_known(v___x_4531_, 1);
v___x_4533_ = ((size_t)1ULL);
v___x_4534_ = lean_usize_add(v_i_4520_, v___x_4533_);
v___x_4535_ = lean_array_uset(v_bs_x27_4530_, v_i_4520_, v_a_4532_);
v_i_4520_ = v___x_4534_;
v_bs_4521_ = v___x_4535_;
goto _start;
}
else
{
lean_object* v_a_4537_; lean_object* v___x_4539_; uint8_t v_isShared_4540_; uint8_t v_isSharedCheck_4544_; 
lean_dec_ref(v_bs_x27_4530_);
v_a_4537_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4544_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4544_ == 0)
{
v___x_4539_ = v___x_4531_;
v_isShared_4540_ = v_isSharedCheck_4544_;
goto v_resetjp_4538_;
}
else
{
lean_inc(v_a_4537_);
lean_dec(v___x_4531_);
v___x_4539_ = lean_box(0);
v_isShared_4540_ = v_isSharedCheck_4544_;
goto v_resetjp_4538_;
}
v_resetjp_4538_:
{
lean_object* v___x_4542_; 
if (v_isShared_4540_ == 0)
{
v___x_4542_ = v___x_4539_;
goto v_reusejp_4541_;
}
else
{
lean_object* v_reuseFailAlloc_4543_; 
v_reuseFailAlloc_4543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4543_, 0, v_a_4537_);
v___x_4542_ = v_reuseFailAlloc_4543_;
goto v_reusejp_4541_;
}
v_reusejp_4541_:
{
return v___x_4542_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg___boxed(lean_object* v___x_4545_, lean_object* v_sz_4546_, lean_object* v_i_4547_, lean_object* v_bs_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_){
_start:
{
size_t v_sz_boxed_4553_; size_t v_i_boxed_4554_; lean_object* v_res_4555_; 
v_sz_boxed_4553_ = lean_unbox_usize(v_sz_4546_);
lean_dec(v_sz_4546_);
v_i_boxed_4554_ = lean_unbox_usize(v_i_4547_);
lean_dec(v_i_4547_);
v_res_4555_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg(v___x_4545_, v_sz_boxed_4553_, v_i_boxed_4554_, v_bs_4548_, v___y_4549_, v___y_4550_, v___y_4551_);
lean_dec(v___y_4551_);
lean_dec_ref(v___y_4550_);
lean_dec(v___y_4549_);
lean_dec(v___x_4545_);
return v_res_4555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg___boxed(lean_object* v_level_4556_, lean_object* v_part_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_){
_start:
{
lean_object* v_res_4562_; 
v_res_4562_ = l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(v_level_4556_, v_part_4557_, v___y_4558_, v___y_4559_, v___y_4560_);
lean_dec(v___y_4560_);
lean_dec_ref(v___y_4559_);
lean_dec(v___y_4558_);
lean_dec(v_level_4556_);
return v_res_4562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3(size_t v_sz_4563_, size_t v_i_4564_, lean_object* v_bs_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_){
_start:
{
uint8_t v___x_4570_; 
v___x_4570_ = lean_usize_dec_lt(v_i_4564_, v_sz_4563_);
if (v___x_4570_ == 0)
{
lean_object* v___x_4571_; 
v___x_4571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4571_, 0, v_bs_4565_);
return v___x_4571_;
}
else
{
lean_object* v_v_4572_; lean_object* v___x_4573_; lean_object* v_bs_x27_4574_; lean_object* v___x_4575_; 
v_v_4572_ = lean_array_uget(v_bs_4565_, v_i_4564_);
v___x_4573_ = lean_unsigned_to_nat(0u);
v_bs_x27_4574_ = lean_array_uset(v_bs_4565_, v_i_4564_, v___x_4573_);
v___x_4575_ = l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(v___x_4573_, v_v_4572_, v___y_4566_, v___y_4567_, v___y_4568_);
if (lean_obj_tag(v___x_4575_) == 0)
{
lean_object* v_a_4576_; size_t v___x_4577_; size_t v___x_4578_; lean_object* v___x_4579_; 
v_a_4576_ = lean_ctor_get(v___x_4575_, 0);
lean_inc(v_a_4576_);
lean_dec_ref_known(v___x_4575_, 1);
v___x_4577_ = ((size_t)1ULL);
v___x_4578_ = lean_usize_add(v_i_4564_, v___x_4577_);
v___x_4579_ = lean_array_uset(v_bs_x27_4574_, v_i_4564_, v_a_4576_);
v_i_4564_ = v___x_4578_;
v_bs_4565_ = v___x_4579_;
goto _start;
}
else
{
lean_object* v_a_4581_; lean_object* v___x_4583_; uint8_t v_isShared_4584_; uint8_t v_isSharedCheck_4588_; 
lean_dec_ref(v_bs_x27_4574_);
v_a_4581_ = lean_ctor_get(v___x_4575_, 0);
v_isSharedCheck_4588_ = !lean_is_exclusive(v___x_4575_);
if (v_isSharedCheck_4588_ == 0)
{
v___x_4583_ = v___x_4575_;
v_isShared_4584_ = v_isSharedCheck_4588_;
goto v_resetjp_4582_;
}
else
{
lean_inc(v_a_4581_);
lean_dec(v___x_4575_);
v___x_4583_ = lean_box(0);
v_isShared_4584_ = v_isSharedCheck_4588_;
goto v_resetjp_4582_;
}
v_resetjp_4582_:
{
lean_object* v___x_4586_; 
if (v_isShared_4584_ == 0)
{
v___x_4586_ = v___x_4583_;
goto v_reusejp_4585_;
}
else
{
lean_object* v_reuseFailAlloc_4587_; 
v_reuseFailAlloc_4587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4587_, 0, v_a_4581_);
v___x_4586_ = v_reuseFailAlloc_4587_;
goto v_reusejp_4585_;
}
v_reusejp_4585_:
{
return v___x_4586_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3___boxed(lean_object* v_sz_4589_, lean_object* v_i_4590_, lean_object* v_bs_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_){
_start:
{
size_t v_sz_boxed_4596_; size_t v_i_boxed_4597_; lean_object* v_res_4598_; 
v_sz_boxed_4596_ = lean_unbox_usize(v_sz_4589_);
lean_dec(v_sz_4589_);
v_i_boxed_4597_ = lean_unbox_usize(v_i_4590_);
lean_dec(v_i_4590_);
v_res_4598_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3(v_sz_boxed_4596_, v_i_boxed_4597_, v_bs_4591_, v___y_4592_, v___y_4593_, v___y_4594_);
lean_dec(v___y_4594_);
lean_dec_ref(v___y_4593_);
lean_dec(v___y_4592_);
return v_res_4598_;
}
}
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___lam__0(lean_object* v_val_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_){
_start:
{
lean_object* v_text_4604_; lean_object* v_subsections_4605_; size_t v_sz_4606_; size_t v___x_4607_; lean_object* v___x_4608_; 
v_text_4604_ = lean_ctor_get(v_val_4599_, 0);
lean_inc_ref(v_text_4604_);
v_subsections_4605_ = lean_ctor_get(v_val_4599_, 1);
lean_inc_ref(v_subsections_4605_);
lean_dec_ref(v_val_4599_);
v_sz_4606_ = lean_array_size(v_text_4604_);
v___x_4607_ = ((size_t)0ULL);
v___x_4608_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__2(v_sz_4606_, v___x_4607_, v_text_4604_, v___y_4600_, v___y_4601_, v___y_4602_);
if (lean_obj_tag(v___x_4608_) == 0)
{
lean_object* v_a_4609_; size_t v_sz_4610_; lean_object* v___x_4611_; 
v_a_4609_ = lean_ctor_get(v___x_4608_, 0);
lean_inc(v_a_4609_);
lean_dec_ref_known(v___x_4608_, 1);
v_sz_4610_ = lean_array_size(v_subsections_4605_);
v___x_4611_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_findSimpleDocString_x3f_spec__3(v_sz_4610_, v___x_4607_, v_subsections_4605_, v___y_4600_, v___y_4601_, v___y_4602_);
if (lean_obj_tag(v___x_4611_) == 0)
{
lean_object* v_a_4612_; lean_object* v___x_4614_; uint8_t v_isShared_4615_; uint8_t v_isSharedCheck_4621_; 
v_a_4612_ = lean_ctor_get(v___x_4611_, 0);
v_isSharedCheck_4621_ = !lean_is_exclusive(v___x_4611_);
if (v_isSharedCheck_4621_ == 0)
{
v___x_4614_ = v___x_4611_;
v_isShared_4615_ = v_isSharedCheck_4621_;
goto v_resetjp_4613_;
}
else
{
lean_inc(v_a_4612_);
lean_dec(v___x_4611_);
v___x_4614_ = lean_box(0);
v_isShared_4615_ = v_isSharedCheck_4621_;
goto v_resetjp_4613_;
}
v_resetjp_4613_:
{
lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4619_; 
v___x_4616_ = l_Array_append___redArg(v_a_4609_, v_a_4612_);
lean_dec(v_a_4612_);
v___x_4617_ = l_Lean_Doc_joinBlocks(v___x_4616_);
lean_dec_ref(v___x_4616_);
if (v_isShared_4615_ == 0)
{
lean_ctor_set(v___x_4614_, 0, v___x_4617_);
v___x_4619_ = v___x_4614_;
goto v_reusejp_4618_;
}
else
{
lean_object* v_reuseFailAlloc_4620_; 
v_reuseFailAlloc_4620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4620_, 0, v___x_4617_);
v___x_4619_ = v_reuseFailAlloc_4620_;
goto v_reusejp_4618_;
}
v_reusejp_4618_:
{
return v___x_4619_;
}
}
}
else
{
lean_object* v_a_4622_; lean_object* v___x_4624_; uint8_t v_isShared_4625_; uint8_t v_isSharedCheck_4629_; 
lean_dec(v_a_4609_);
v_a_4622_ = lean_ctor_get(v___x_4611_, 0);
v_isSharedCheck_4629_ = !lean_is_exclusive(v___x_4611_);
if (v_isSharedCheck_4629_ == 0)
{
v___x_4624_ = v___x_4611_;
v_isShared_4625_ = v_isSharedCheck_4629_;
goto v_resetjp_4623_;
}
else
{
lean_inc(v_a_4622_);
lean_dec(v___x_4611_);
v___x_4624_ = lean_box(0);
v_isShared_4625_ = v_isSharedCheck_4629_;
goto v_resetjp_4623_;
}
v_resetjp_4623_:
{
lean_object* v___x_4627_; 
if (v_isShared_4625_ == 0)
{
v___x_4627_ = v___x_4624_;
goto v_reusejp_4626_;
}
else
{
lean_object* v_reuseFailAlloc_4628_; 
v_reuseFailAlloc_4628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4628_, 0, v_a_4622_);
v___x_4627_ = v_reuseFailAlloc_4628_;
goto v_reusejp_4626_;
}
v_reusejp_4626_:
{
return v___x_4627_;
}
}
}
}
else
{
lean_object* v_a_4630_; lean_object* v___x_4632_; uint8_t v_isShared_4633_; uint8_t v_isSharedCheck_4637_; 
lean_dec_ref(v_subsections_4605_);
v_a_4630_ = lean_ctor_get(v___x_4608_, 0);
v_isSharedCheck_4637_ = !lean_is_exclusive(v___x_4608_);
if (v_isSharedCheck_4637_ == 0)
{
v___x_4632_ = v___x_4608_;
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
else
{
lean_inc(v_a_4630_);
lean_dec(v___x_4608_);
v___x_4632_ = lean_box(0);
v_isShared_4633_ = v_isSharedCheck_4637_;
goto v_resetjp_4631_;
}
v_resetjp_4631_:
{
lean_object* v___x_4635_; 
if (v_isShared_4633_ == 0)
{
v___x_4635_ = v___x_4632_;
goto v_reusejp_4634_;
}
else
{
lean_object* v_reuseFailAlloc_4636_; 
v_reuseFailAlloc_4636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4636_, 0, v_a_4630_);
v___x_4635_ = v_reuseFailAlloc_4636_;
goto v_reusejp_4634_;
}
v_reusejp_4634_:
{
return v___x_4635_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___lam__0___boxed(lean_object* v_val_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_, lean_object* v___y_4642_){
_start:
{
lean_object* v_res_4643_; 
v_res_4643_ = l_Lean_findSimpleDocString_x3f___lam__0(v_val_4638_, v___y_4639_, v___y_4640_, v___y_4641_);
lean_dec(v___y_4641_);
lean_dec_ref(v___y_4640_);
lean_dec(v___y_4639_);
return v_res_4643_;
}
}
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f(lean_object* v_env_4644_, lean_object* v_declName_4645_, uint8_t v_includeBuiltin_4646_, lean_object* v_options_4647_, lean_object* v_currNamespace_4648_, lean_object* v_openDecls_4649_, lean_object* v_cancelTk_x3f_4650_){
_start:
{
lean_object* v___x_4652_; 
lean_inc_ref(v_env_4644_);
v___x_4652_ = l_Lean_findInternalDocString_x3f(v_env_4644_, v_declName_4645_, v_includeBuiltin_4646_);
if (lean_obj_tag(v___x_4652_) == 0)
{
lean_object* v_a_4653_; lean_object* v___x_4655_; uint8_t v_isShared_4656_; uint8_t v_isSharedCheck_4696_; 
v_a_4653_ = lean_ctor_get(v___x_4652_, 0);
v_isSharedCheck_4696_ = !lean_is_exclusive(v___x_4652_);
if (v_isSharedCheck_4696_ == 0)
{
v___x_4655_ = v___x_4652_;
v_isShared_4656_ = v_isSharedCheck_4696_;
goto v_resetjp_4654_;
}
else
{
lean_inc(v_a_4653_);
lean_dec(v___x_4652_);
v___x_4655_ = lean_box(0);
v_isShared_4656_ = v_isSharedCheck_4696_;
goto v_resetjp_4654_;
}
v_resetjp_4654_:
{
if (lean_obj_tag(v_a_4653_) == 0)
{
lean_object* v___x_4657_; lean_object* v___x_4659_; 
lean_dec(v_cancelTk_x3f_4650_);
lean_dec(v_openDecls_4649_);
lean_dec(v_currNamespace_4648_);
lean_dec_ref(v_options_4647_);
lean_dec_ref(v_env_4644_);
v___x_4657_ = lean_box(0);
if (v_isShared_4656_ == 0)
{
lean_ctor_set(v___x_4655_, 0, v___x_4657_);
v___x_4659_ = v___x_4655_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v___x_4657_);
v___x_4659_ = v_reuseFailAlloc_4660_;
goto v_reusejp_4658_;
}
v_reusejp_4658_:
{
return v___x_4659_;
}
}
else
{
lean_object* v_val_4661_; lean_object* v___x_4663_; uint8_t v_isShared_4664_; uint8_t v_isSharedCheck_4695_; 
v_val_4661_ = lean_ctor_get(v_a_4653_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v_a_4653_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4663_ = v_a_4653_;
v_isShared_4664_ = v_isSharedCheck_4695_;
goto v_resetjp_4662_;
}
else
{
lean_inc(v_val_4661_);
lean_dec(v_a_4653_);
v___x_4663_ = lean_box(0);
v_isShared_4664_ = v_isSharedCheck_4695_;
goto v_resetjp_4662_;
}
v_resetjp_4662_:
{
if (lean_obj_tag(v_val_4661_) == 0)
{
lean_object* v_val_4665_; lean_object* v___x_4667_; 
lean_dec(v_cancelTk_x3f_4650_);
lean_dec(v_openDecls_4649_);
lean_dec(v_currNamespace_4648_);
lean_dec_ref(v_options_4647_);
lean_dec_ref(v_env_4644_);
v_val_4665_ = lean_ctor_get(v_val_4661_, 0);
lean_inc(v_val_4665_);
lean_dec_ref_known(v_val_4661_, 1);
if (v_isShared_4664_ == 0)
{
lean_ctor_set(v___x_4663_, 0, v_val_4665_);
v___x_4667_ = v___x_4663_;
goto v_reusejp_4666_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v_val_4665_);
v___x_4667_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4666_;
}
v_reusejp_4666_:
{
lean_object* v___x_4669_; 
if (v_isShared_4656_ == 0)
{
lean_ctor_set(v___x_4655_, 0, v___x_4667_);
v___x_4669_ = v___x_4655_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v___x_4667_);
v___x_4669_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
return v___x_4669_;
}
}
}
else
{
lean_object* v_val_4672_; lean_object* v___f_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; 
lean_del_object(v___x_4655_);
v_val_4672_ = lean_ctor_get(v_val_4661_, 0);
lean_inc(v_val_4672_);
lean_dec_ref_known(v_val_4661_, 1);
v___f_4673_ = lean_alloc_closure((void*)(l_Lean_findSimpleDocString_x3f___lam__0___boxed), 5, 1);
lean_closure_set(v___f_4673_, 0, v_val_4672_);
v___x_4674_ = lean_alloc_closure((void*)(l_Lean_Doc_MarkdownM_run_x27___boxed), 4, 1);
lean_closure_set(v___x_4674_, 0, v___f_4673_);
v___x_4675_ = l_Lean_Doc_runMarkdown___redArg(v_env_4644_, v___x_4674_, v_options_4647_, v_currNamespace_4648_, v_openDecls_4649_, v_cancelTk_x3f_4650_);
if (lean_obj_tag(v___x_4675_) == 0)
{
lean_object* v_a_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4686_; 
v_a_4676_ = lean_ctor_get(v___x_4675_, 0);
v_isSharedCheck_4686_ = !lean_is_exclusive(v___x_4675_);
if (v_isSharedCheck_4686_ == 0)
{
v___x_4678_ = v___x_4675_;
v_isShared_4679_ = v_isSharedCheck_4686_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_a_4676_);
lean_dec(v___x_4675_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4686_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4681_; 
if (v_isShared_4664_ == 0)
{
lean_ctor_set(v___x_4663_, 0, v_a_4676_);
v___x_4681_ = v___x_4663_;
goto v_reusejp_4680_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v_a_4676_);
v___x_4681_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4680_;
}
v_reusejp_4680_:
{
lean_object* v___x_4683_; 
if (v_isShared_4679_ == 0)
{
lean_ctor_set(v___x_4678_, 0, v___x_4681_);
v___x_4683_ = v___x_4678_;
goto v_reusejp_4682_;
}
else
{
lean_object* v_reuseFailAlloc_4684_; 
v_reuseFailAlloc_4684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4684_, 0, v___x_4681_);
v___x_4683_ = v_reuseFailAlloc_4684_;
goto v_reusejp_4682_;
}
v_reusejp_4682_:
{
return v___x_4683_;
}
}
}
}
else
{
lean_object* v_a_4687_; lean_object* v___x_4689_; uint8_t v_isShared_4690_; uint8_t v_isSharedCheck_4694_; 
lean_del_object(v___x_4663_);
v_a_4687_ = lean_ctor_get(v___x_4675_, 0);
v_isSharedCheck_4694_ = !lean_is_exclusive(v___x_4675_);
if (v_isSharedCheck_4694_ == 0)
{
v___x_4689_ = v___x_4675_;
v_isShared_4690_ = v_isSharedCheck_4694_;
goto v_resetjp_4688_;
}
else
{
lean_inc(v_a_4687_);
lean_dec(v___x_4675_);
v___x_4689_ = lean_box(0);
v_isShared_4690_ = v_isSharedCheck_4694_;
goto v_resetjp_4688_;
}
v_resetjp_4688_:
{
lean_object* v___x_4692_; 
if (v_isShared_4690_ == 0)
{
v___x_4692_ = v___x_4689_;
goto v_reusejp_4691_;
}
else
{
lean_object* v_reuseFailAlloc_4693_; 
v_reuseFailAlloc_4693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4693_, 0, v_a_4687_);
v___x_4692_ = v_reuseFailAlloc_4693_;
goto v_reusejp_4691_;
}
v_reusejp_4691_:
{
return v___x_4692_;
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
lean_object* v_a_4697_; lean_object* v___x_4699_; uint8_t v_isShared_4700_; uint8_t v_isSharedCheck_4704_; 
lean_dec(v_cancelTk_x3f_4650_);
lean_dec(v_openDecls_4649_);
lean_dec(v_currNamespace_4648_);
lean_dec_ref(v_options_4647_);
lean_dec_ref(v_env_4644_);
v_a_4697_ = lean_ctor_get(v___x_4652_, 0);
v_isSharedCheck_4704_ = !lean_is_exclusive(v___x_4652_);
if (v_isSharedCheck_4704_ == 0)
{
v___x_4699_ = v___x_4652_;
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
else
{
lean_inc(v_a_4697_);
lean_dec(v___x_4652_);
v___x_4699_ = lean_box(0);
v_isShared_4700_ = v_isSharedCheck_4704_;
goto v_resetjp_4698_;
}
v_resetjp_4698_:
{
lean_object* v___x_4702_; 
if (v_isShared_4700_ == 0)
{
v___x_4702_ = v___x_4699_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v_a_4697_);
v___x_4702_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
return v___x_4702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findSimpleDocString_x3f___boxed(lean_object* v_env_4705_, lean_object* v_declName_4706_, lean_object* v_includeBuiltin_4707_, lean_object* v_options_4708_, lean_object* v_currNamespace_4709_, lean_object* v_openDecls_4710_, lean_object* v_cancelTk_x3f_4711_, lean_object* v___y_4712_){
_start:
{
uint8_t v_includeBuiltin_boxed_4713_; lean_object* v_res_4714_; 
v_includeBuiltin_boxed_4713_ = lean_unbox(v_includeBuiltin_4707_);
v_res_4714_ = l_Lean_findSimpleDocString_x3f(v_env_4705_, v_declName_4706_, v_includeBuiltin_boxed_4713_, v_options_4708_, v_currNamespace_4709_, v_openDecls_4710_, v_cancelTk_x3f_4711_);
return v_res_4714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0(lean_object* v_p_4715_, lean_object* v_level_4716_, lean_object* v_part_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_){
_start:
{
lean_object* v___x_4722_; 
v___x_4722_ = l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___redArg(v_level_4716_, v_part_4717_, v___y_4718_, v___y_4719_, v___y_4720_);
return v___x_4722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0___boxed(lean_object* v_p_4723_, lean_object* v_level_4724_, lean_object* v_part_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_){
_start:
{
lean_object* v_res_4730_; 
v_res_4730_ = l_Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0(v_p_4723_, v_level_4724_, v_part_4725_, v___y_4726_, v___y_4727_, v___y_4728_);
lean_dec(v___y_4728_);
lean_dec_ref(v___y_4727_);
lean_dec(v___y_4726_);
lean_dec(v_level_4724_);
return v_res_4730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3(lean_object* v_p_4731_, lean_object* v___x_4732_, size_t v_sz_4733_, size_t v_i_4734_, lean_object* v_bs_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_){
_start:
{
lean_object* v___x_4740_; 
v___x_4740_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___redArg(v___x_4732_, v_sz_4733_, v_i_4734_, v_bs_4735_, v___y_4736_, v___y_4737_, v___y_4738_);
return v___x_4740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3___boxed(lean_object* v_p_4741_, lean_object* v___x_4742_, lean_object* v_sz_4743_, lean_object* v_i_4744_, lean_object* v_bs_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_){
_start:
{
size_t v_sz_boxed_4750_; size_t v_i_boxed_4751_; lean_object* v_res_4752_; 
v_sz_boxed_4750_ = lean_unbox_usize(v_sz_4743_);
lean_dec(v_sz_4743_);
v_i_boxed_4751_ = lean_unbox_usize(v_i_4744_);
lean_dec(v_i_4744_);
v_res_4752_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Doc_partMarkdown___at___00Lean_findSimpleDocString_x3f_spec__0_spec__3(v_p_4741_, v___x_4742_, v_sz_boxed_4750_, v_i_boxed_4751_, v_bs_4745_, v___y_4746_, v___y_4747_, v___y_4748_);
lean_dec(v___y_4748_);
lean_dec_ref(v___y_4747_);
lean_dec(v___y_4746_);
lean_dec(v___x_4742_);
return v_res_4752_;
}
}
lean_object* runtime_initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Markdown(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1 = _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Markdown_0__Lean_Doc_midLineSpecial___closed__3___boxed__const__1);
l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1 = _init_l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Markdown_0__Lean_Doc_markerPrefixSpecial___closed__0___boxed__const__1);
l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1 = _init_l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1();
lean_mark_persistent(l_Lean_Doc_partMarkdown___redArg___closed__0___boxed__const__1);
res = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_92810654____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Doc_docInlineMdExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Doc_docInlineMdExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_1277071390____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Doc_docBlockMdExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Doc_docBlockMdExt);
lean_dec_ref(res);
res = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2917630591____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinInlineMdRenderers = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinInlineMdRenderers);
lean_dec_ref(res);
res = l___private_Lean_DocString_Markdown_0__Lean_Doc_initFn_00___x40_Lean_DocString_Markdown_2639420957____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinBlockMdRenderers = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_DocString_Markdown_0__Lean_Doc_builtinBlockMdRenderers);
lean_dec_ref(res);
l_Lean_Doc_mdRendererHeartbeats = _init_l_Lean_Doc_mdRendererHeartbeats();
lean_mark_persistent(l_Lean_Doc_mdRendererHeartbeats);
l_Lean_Doc_instMarkdownInlineElabInline = _init_l_Lean_Doc_instMarkdownInlineElabInline();
lean_mark_persistent(l_Lean_Doc_instMarkdownInlineElabInline);
l_Lean_Doc_instMarkdownBlockElabInlineElabBlock = _init_l_Lean_Doc_instMarkdownBlockElabInlineElabBlock();
lean_mark_persistent(l_Lean_Doc_instMarkdownBlockElabInlineElabBlock);
l_Lean_Doc_instToMarkdownVersoDocString = _init_l_Lean_Doc_instToMarkdownVersoDocString();
lean_mark_persistent(l_Lean_Doc_instToMarkdownVersoDocString);
l_Lean_Doc_instToMarkdownSnippet = _init_l_Lean_Doc_instToMarkdownSnippet();
lean_mark_persistent(l_Lean_Doc_instToMarkdownSnippet);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Markdown(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Markdown(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Markdown(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Markdown(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Markdown(builtin);
}
#ifdef __cplusplus
}
#endif
