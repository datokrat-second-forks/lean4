// Lean compiler output
// Module: Init.Meta.Defs
// Imports: import all Init.Prelude public import Init.Data.Array.Basic public import Init.MetaTypes import Init.Data.Array.GetLit import Init.Data.Char.Basic meta import Init.MetaTypes import Init.WFTactics
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
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_string_any(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_substring_drop(lean_object*, lean_object*);
uint8_t lean_substring_all(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_dec_le(uint8_t, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_string_contains(lean_object*, uint32_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
uint8_t lean_string_isprefixof(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_string_isempty(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isMissing(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
uint32_t l_Char_ofNat(lean_object*);
lean_object* lean_string_nextwhile(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instReprSourceInfo_repr(lean_object*, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_substring_tostring(lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*, uint8_t);
uint32_t lean_substring_front(lean_object*);
uint8_t lean_substring_isempty(lean_object*);
lean_object* lean_substring_takewhile(lean_object*, lean_object*);
lean_object* lean_substring_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_pos_min(lean_object*, lean_object*);
lean_object* lean_substring_prev(lean_object*, lean_object*);
uint32_t lean_substring_get(lean_object*, lean_object*);
uint32_t lean_string_front(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00__private_Init_Prelude_0__Lean_assembleParts_spec__0(lean_object*);
lean_object* lean_string_drop(lean_object*, lean_object*);
lean_object* lean_string_dropright(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_substring_beq(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Lean_Macro_expandMacro_x3f(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* lean_nat_pred(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getTrailingTailPos_x3f(lean_object*, uint8_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l_Char_quote(uint32_t);
lean_object* lean_string_trim(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getTrailing_x3f(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntaxArray_mkImpl___boxed(lean_object*, lean_object*);
lean_object* lean_string_capitalize(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* lean_version_get_major(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMajor___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_major___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_major___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_major;
lean_object* lean_version_get_minor(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMinor___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_minor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_minor___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_minor;
lean_object* lean_version_get_patch(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getPatch___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_patch___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_patch___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_patch;
lean_object* lean_get_githash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getGithash___boxed(lean_object*);
static lean_once_cell_t l_Lean_githash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_githash___closed__0;
LEAN_EXPORT lean_object* l_Lean_githash;
uint8_t lean_version_get_is_release(lean_object*);
LEAN_EXPORT lean_object* l_Lean_version_getIsRelease___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_isRelease___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_version_isRelease___closed__0;
LEAN_EXPORT uint8_t l_Lean_version_isRelease;
lean_object* lean_version_get_special_desc(lean_object*);
LEAN_EXPORT lean_object* l_Lean_version_getSpecialDesc___boxed(lean_object*);
static lean_once_cell_t l_Lean_version_specialDesc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_version_specialDesc___closed__0;
LEAN_EXPORT lean_object* l_Lean_version_specialDesc;
static lean_once_cell_t l_Lean_versionStringCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__0;
static const lean_string_object l_Lean_versionStringCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_versionStringCore___closed__1 = (const lean_object*)&l_Lean_versionStringCore___closed__1_value;
static lean_once_cell_t l_Lean_versionStringCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__2;
static lean_once_cell_t l_Lean_versionStringCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__3;
static lean_once_cell_t l_Lean_versionStringCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__4;
static lean_once_cell_t l_Lean_versionStringCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__5;
static lean_once_cell_t l_Lean_versionStringCore___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__6;
static lean_once_cell_t l_Lean_versionStringCore___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionStringCore___closed__7;
LEAN_EXPORT lean_object* l_Lean_versionStringCore;
static const lean_string_object l_Lean_versionString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_versionString___closed__0 = (const lean_object*)&l_Lean_versionString___closed__0_value;
static lean_once_cell_t l_Lean_versionString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_versionString___closed__1;
static const lean_string_object l_Lean_versionString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_versionString___closed__2 = (const lean_object*)&l_Lean_versionString___closed__2_value;
static lean_once_cell_t l_Lean_versionString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__3;
static lean_once_cell_t l_Lean_versionString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__4;
static const lean_string_object l_Lean_versionString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ", commit "};
static const lean_object* l_Lean_versionString___closed__5 = (const lean_object*)&l_Lean_versionString___closed__5_value;
static lean_once_cell_t l_Lean_versionString___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__6;
static lean_once_cell_t l_Lean_versionString___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versionString___closed__7;
LEAN_EXPORT lean_object* l_Lean_versionString;
static const lean_string_object l_Lean_origin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "leanprover/lean4"};
static const lean_object* l_Lean_origin___closed__0 = (const lean_object*)&l_Lean_origin___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_origin = (const lean_object*)&l_Lean_origin___closed__0_value;
static const lean_string_object l_Lean_toolchain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_toolchain___closed__0 = (const lean_object*)&l_Lean_toolchain___closed__0_value;
static lean_once_cell_t l_Lean_toolchain___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__1;
static lean_once_cell_t l_Lean_toolchain___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__2;
static const lean_string_object l_Lean_toolchain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":v"};
static const lean_object* l_Lean_toolchain___closed__3 = (const lean_object*)&l_Lean_toolchain___closed__3_value;
static lean_once_cell_t l_Lean_toolchain___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__4;
static lean_once_cell_t l_Lean_toolchain___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__5;
static lean_once_cell_t l_Lean_toolchain___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__6;
static lean_once_cell_t l_Lean_toolchain___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toolchain___closed__7;
LEAN_EXPORT lean_object* l_Lean_toolchain;
uint8_t lean_internal_is_stage0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Internal_isStage0___boxed(lean_object*);
uint8_t lean_internal_has_llvm_backend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Internal_hasLLVMBackend___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isGreek(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isGreek___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isLetterLike(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isLetterLike___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isNumericSubscript(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isNumericSubscript___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isSubScriptAlnum(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isSubScriptAlnum___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdFirst(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdFirst___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdFirstAscii(uint8_t);
LEAN_EXPORT lean_object* l_Lean_isIdFirstAscii___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii(uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdRest(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdRest___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdRestAscii(uint8_t);
LEAN_EXPORT lean_object* l_Lean_isIdRestAscii___boxed(lean_object*);
LEAN_EXPORT uint32_t l_Lean_idBeginEscape;
LEAN_EXPORT uint32_t l_Lean_idEndEscape;
LEAN_EXPORT uint8_t l_Lean_isIdBeginEscape(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdBeginEscape___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_isIdEndEscape(uint32_t);
LEAN_EXPORT lean_object* l_Lean_isIdEndEscape___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_getRoot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_getRoot___boxed(lean_object*);
static const lean_string_object l_Lean_Name_isInaccessibleUserName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "_inaccessible"};
static const lean_object* l_Lean_Name_isInaccessibleUserName___closed__0 = (const lean_object*)&l_Lean_Name_isInaccessibleUserName___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Name_isInaccessibleUserName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_isInaccessibleUserName___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_isIdRest___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "«"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "»"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___boxed(lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_isIdEndEscape___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1(uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1___boxed(lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0_value;
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "[anonymous]"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0_value;
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 60, 211, 188, 58, 220, 100, 184)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3_value;
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_hasNum(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_hasNum___boxed(lean_object*);
static const lean_string_object l_Lean_Name_reprPrec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Name.anonymous"};
static const lean_object* l_Lean_Name_reprPrec___closed__0 = (const lean_object*)&l_Lean_Name_reprPrec___closed__0_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__0_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__1 = (const lean_object*)&l_Lean_Name_reprPrec___closed__1_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Name_reprPrec___closed__2 = (const lean_object*)&l_Lean_Name_reprPrec___closed__2_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__2_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__3 = (const lean_object*)&l_Lean_Name_reprPrec___closed__3_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Name.mkStr "};
static const lean_object* l_Lean_Name_reprPrec___closed__4 = (const lean_object*)&l_Lean_Name_reprPrec___closed__4_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__4_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__5 = (const lean_object*)&l_Lean_Name_reprPrec___closed__5_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Name_reprPrec___closed__6 = (const lean_object*)&l_Lean_Name_reprPrec___closed__6_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__6_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__7 = (const lean_object*)&l_Lean_Name_reprPrec___closed__7_value;
static const lean_string_object l_Lean_Name_reprPrec___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Name.mkNum "};
static const lean_object* l_Lean_Name_reprPrec___closed__8 = (const lean_object*)&l_Lean_Name_reprPrec___closed__8_value;
static const lean_ctor_object l_Lean_Name_reprPrec___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Name_reprPrec___closed__8_value)}};
static const lean_object* l_Lean_Name_reprPrec___closed__9 = (const lean_object*)&l_Lean_Name_reprPrec___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Name_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_reprPrec___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Name_instRepr___closed__0 = (const lean_object*)&l_Lean_Name_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Name_instRepr = (const lean_object*)&l_Lean_Name_instRepr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Name_capitalize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_modifyBase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_appendAfter___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_name_append_after(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_appendIndexAfter___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_name_append_index_after(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_appendBefore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_appendBefore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Name_instDecidableEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Name_instDecidableEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameGenerator_curr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameGenerator_next(lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameGenerator_mkChild(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__0_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1_value;
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2_value;
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__3_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5_value;
static const lean_string_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6_value;
static lean_once_cell_t l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7;
static lean_once_cell_t l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9_value;
static const lean_ctor_object l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__6_value)}};
static const lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10 = (const lean_object*)&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(lean_object*);
static const lean_string_object l_Lean_Syntax_instReprPreresolved_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Syntax.Preresolved.namespace"};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__1 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__2 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__2_value;
static lean_once_cell_t l_Lean_Syntax_instReprPreresolved_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__3;
static lean_once_cell_t l_Lean_Syntax_instReprPreresolved_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__4;
static const lean_string_object l_Lean_Syntax_instReprPreresolved_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Syntax.Preresolved.decl"};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__5 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__6 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_instReprPreresolved_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instReprPreresolved_repr___closed__7 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved_repr___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instReprPreresolved___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instReprPreresolved_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instReprPreresolved___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprPreresolved___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instReprPreresolved = (const lean_object*)&l_Lean_Syntax_instReprPreresolved___closed__0_value;
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(lean_object*);
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Syntax.missing"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__0 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__1 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__1_value;
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Syntax.node"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__2 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__2_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__3 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__3_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__3_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__4 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__4_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0_value;
static lean_once_cell_t l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1;
static lean_once_cell_t l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2;
static const lean_ctor_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3_value;
static const lean_string_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__4_value)}};
static const lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0(lean_object*);
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.Syntax.atom"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__5 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__6 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__6_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__7 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__7_value;
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Syntax.ident"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__8 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__8_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__8_value)}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__9 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__9_value;
static const lean_ctor_object l_Lean_Syntax_instRepr_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instRepr_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__10 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__10_value;
static const lean_string_object l_Lean_Syntax_instRepr_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ".toRawSubstring"};
static const lean_object* l_Lean_Syntax_instRepr_repr___closed__11 = (const lean_object*)&l_Lean_Syntax_instRepr_repr___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instRepr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instRepr_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instRepr___closed__0 = (const lean_object*)&l_Lean_Syntax_instRepr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instRepr = (const lean_object*)&l_Lean_Syntax_instRepr___closed__0_value;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "raw"};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7;
static const lean_string_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9;
static lean_once_cell_t l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0 = (const lean_object*)&l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg();
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg();
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_TSyntax_instCoeIdentTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_instCoeIdentTerm___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TSyntax_instCoeIdentTerm___closed__0 = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeIdentTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeDepTermMkIdentIdent(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeStrLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNameLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeScientificLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNumLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeCharLitTerm = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeIdentLevel = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNumLitPrio = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_TSyntax_instCoeNumLitPrec = (const lean_object*)&l_Lean_TSyntax_instCoeIdentTerm___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg();
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSyntaxArray(lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqPreresolved_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqPreresolved_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instBEqPreresolved___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instBEqPreresolved_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEqPreresolved___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEqPreresolved___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instBEqPreresolved = (const lean_object*)&l_Lean_Syntax_instBEqPreresolved___closed__0_value;
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structEq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structEq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_structEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Syntax_instBEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_structEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEq___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEq___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instBEq = (const lean_object*)&l_Lean_Syntax_instBEq___closed__0_value;
static const lean_closure_object l_Lean_Syntax_instBEqTSyntax___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_structEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instBEqTSyntax___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instBEqTSyntax___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f(lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfoAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___at___00Lean_Syntax_setTailInfoAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfoAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___at___00Lean_Syntax_setHeadInfoAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_setInfo(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_getHead_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSynthetic(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_expandMacros___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__0 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value;
static const lean_string_object l_Lean_expandMacros___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__1 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value;
static const lean_string_object l_Lean_expandMacros___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__2 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value;
static const lean_string_object l_Lean_expandMacros___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_expandMacros___lam__0___closed__3 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_expandMacros___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value_aux_2),((lean_object*)&l_Lean_expandMacros___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_expandMacros___lam__0___closed__4 = (const lean_object*)&l_Lean_expandMacros___lam__0___closed__4_value;
LEAN_EXPORT uint8_t l_Lean_expandMacros___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_expandMacros___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_expandMacros___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_expandMacros___closed__0 = (const lean_object*)&l_Lean_expandMacros___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0(uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkMarkdownDocCommentFrom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__0 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__0_value;
static const lean_string_object l_Lean_mkMarkdownDocCommentFrom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "commentBody"};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__1 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__1_value;
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_1),((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__2_value_aux_2),((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__1_value),LEAN_SCALAR_PTR_LITERAL(181, 50, 60, 220, 73, 28, 0, 197)}};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__2 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__2_value;
static const lean_string_object l_Lean_mkMarkdownDocCommentFrom___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-/"};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__3 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__3_value;
static const lean_string_object l_Lean_mkMarkdownDocCommentFrom___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__4 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__4_value;
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_1),((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_mkMarkdownDocCommentFrom___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__5_value_aux_2),((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__4_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__5 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__5_value;
static const lean_string_object l_Lean_mkMarkdownDocCommentFrom___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "/--"};
static const lean_object* l_Lean_mkMarkdownDocCommentFrom___closed__6 = (const lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocCommentFrom(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocCommentFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocComment(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkCIdentFrom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_internal"};
static const lean_object* l_Lean_mkCIdentFrom___closed__0 = (const lean_object*)&l_Lean_mkCIdentFrom___closed__0_value;
static const lean_ctor_object l_Lean_mkCIdentFrom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkCIdentFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 131, 204, 40, 20, 233, 244, 88)}};
static const lean_object* l_Lean_mkCIdentFrom___closed__1 = (const lean_object*)&l_Lean_mkCIdentFrom___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCIdent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkIdent(lean_object*);
static const lean_string_object l_Lean_mkGroupNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Lean_mkGroupNode___closed__0 = (const lean_object*)&l_Lean_mkGroupNode___closed__0_value;
static const lean_ctor_object l_Lean_mkGroupNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkGroupNode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Lean_mkGroupNode___closed__1 = (const lean_object*)&l_Lean_mkGroupNode___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkGroupNode(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_mkSepArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_mkSepArray___closed__0 = (const lean_object*)&l_Lean_mkSepArray___closed__0_value;
static const lean_ctor_object l_Lean_mkSepArray___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkSepArray___closed__0_value)}};
static const lean_object* l_Lean_mkSepArray___closed__1 = (const lean_object*)&l_Lean_mkSepArray___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkSepArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkSepArray___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_mkOptionalNode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_mkOptionalNode___closed__0 = (const lean_object*)&l_Lean_mkOptionalNode___closed__0_value;
static const lean_ctor_object l_Lean_mkOptionalNode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkOptionalNode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_mkOptionalNode___closed__1 = (const lean_object*)&l_Lean_mkOptionalNode___closed__1_value;
static const lean_ctor_object l_Lean_mkOptionalNode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_mkOptionalNode___closed__1_value),((lean_object*)&l_Lean_mkSepArray___closed__0_value)}};
static const lean_object* l_Lean_mkOptionalNode___closed__2 = (const lean_object*)&l_Lean_mkOptionalNode___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_mkOptionalNode(lean_object*);
static const lean_string_object l_Lean_mkHole___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_mkHole___closed__0 = (const lean_object*)&l_Lean_mkHole___closed__0_value;
static const lean_ctor_object l_Lean_mkHole___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_mkHole___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkHole___closed__1_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_mkHole___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkHole___closed__1_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_mkHole___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkHole___closed__1_value_aux_2),((lean_object*)&l_Lean_mkHole___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_mkHole___closed__1 = (const lean_object*)&l_Lean_mkHole___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkHole(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_mkHole___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Syntax_SepArray_ofElems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Syntax_SepArray_ofElems___closed__0 = (const lean_object*)&l_Lean_Syntax_SepArray_ofElems___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_SepArray_ofElems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_mkOptionalNode___closed__1_value),((lean_object*)&l_Lean_Syntax_SepArray_ofElems___closed__0_value)}};
static const lean_object* l_Lean_Syntax_SepArray_ofElems___closed__1 = (const lean_object*)&l_Lean_Syntax_SepArray_ofElems___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayTSepArray(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Syntax_mkApp___closed__0 = (const lean_object*)&l_Lean_Syntax_mkApp___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkApp___closed__1_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkApp___closed__1_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Syntax_mkApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_mkApp___closed__1_value_aux_2),((lean_object*)&l_Lean_Syntax_mkApp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Syntax_mkApp___closed__1 = (const lean_object*)&l_Lean_Syntax_mkApp___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCApp(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkCharLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* l_Lean_Syntax_mkCharLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkCharLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkCharLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkCharLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 243, 213, 66, 253, 140, 152, 232)}};
static const lean_object* l_Lean_Syntax_mkCharLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkCharLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit(uint32_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkStrLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Syntax_mkStrLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkStrLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkStrLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkStrLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Syntax_mkStrLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkStrLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkStrLit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkNumLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Syntax_mkNumLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkNumLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkNumLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkNumLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Syntax_mkNumLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkNumLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNatLit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkScientificLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l_Lean_Syntax_mkScientificLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkScientificLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkScientificLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkScientificLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l_Lean_Syntax_mkScientificLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkScientificLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkScientificLit(lean_object*, lean_object*);
static const lean_string_object l_Lean_Syntax_mkNameLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Syntax_mkNameLit___closed__0 = (const lean_object*)&l_Lean_Syntax_mkNameLit___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_mkNameLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_mkNameLit___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lean_Syntax_mkNameLit___closed__1 = (const lean_object*)&l_Lean_Syntax_mkNameLit___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Syntax_decodeNatLitVal_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Syntax_decodeNatLitVal_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_decodeNatLitVal_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f___boxed(lean_object*);
static const lean_string_object l_Lean_Syntax_isFieldIdx_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fieldIdx"};
static const lean_object* l_Lean_Syntax_isFieldIdx_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_isFieldIdx_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_isFieldIdx_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isFieldIdx_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 141, 165, 29, 238, 211, 61, 163)}};
static const lean_object* l_Lean_Syntax_isFieldIdx_x3f___closed__1 = (const lean_object*)&l_Lean_Syntax_isFieldIdx_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isIdOrAtom_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__2;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__3;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__4;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__5;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed__const__6;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_decodeStringGap___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_decodeStringGap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_decodeStringGap___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_decodeStringGap___closed__0 = (const lean_object*)&l_Lean_Syntax_decodeStringGap___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1(uint32_t, uint32_t, uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2(uint8_t, uint8_t, uint32_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2;
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_splitNameLit(lean_object*);
static const lean_string_object l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Init.Meta.Defs"};
static const lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0 = (const lean_object*)&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0_value;
static const lean_string_object l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Substring.Raw.toName"};
static const lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1 = (const lean_object*)&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1_value;
static const lean_string_object l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2 = (const lean_object*)&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2_value;
static lean_once_cell_t l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3;
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Substring_Raw_toName(lean_object*);
LEAN_EXPORT lean_object* l_String_toName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNameLit(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_hasArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_hasArgs___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isAtom(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isAtom___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isToken___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Syntax_isNone(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isNone___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_findAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_find_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat___boxed(lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId___boxed(lean_object*);
static const lean_ctor_object l_Lean_TSyntax_getScientific___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_TSyntax_getScientific___closed__0 = (const lean_object*)&l_Lean_TSyntax_getScientific___closed__0_value;
static const lean_ctor_object l_Lean_TSyntax_getScientific___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_TSyntax_getScientific___closed__0_value)}};
static const lean_object* l_Lean_TSyntax_getScientific___closed__1 = (const lean_object*)&l_Lean_TSyntax_getScientific___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString___boxed(lean_object*);
LEAN_EXPORT uint32_t l_Lean_TSyntax_getChar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instQuoteTermMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_instQuoteTermMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteTermMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteTermMkStr1 = (const lean_object*)&l_Lean_instQuoteTermMkStr1___closed__0_value;
static const lean_string_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__0 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value;
static const lean_string_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__1 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__2 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_instQuoteBoolMkStr1___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__3;
static const lean_string_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__4 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__5 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_instQuoteBoolMkStr1___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instQuoteBoolMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteBoolMkStr1___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteBoolMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteBoolMkStr1 = (const lean_object*)&l_Lean_instQuoteBoolMkStr1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_instQuoteCharCharLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteCharCharLitKind___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteCharCharLitKind___closed__0 = (const lean_object*)&l_Lean_instQuoteCharCharLitKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteCharCharLitKind = (const lean_object*)&l_Lean_instQuoteCharCharLitKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteStringStrLitKind___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteStringStrLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteStringStrLitKind___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteStringStrLitKind___closed__0 = (const lean_object*)&l_Lean_instQuoteStringStrLitKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteStringStrLitKind = (const lean_object*)&l_Lean_instQuoteStringStrLitKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteNatNumLitKind___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteNatNumLitKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteNatNumLitKind___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteNatNumLitKind___closed__0 = (const lean_object*)&l_Lean_instQuoteNatNumLitKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteNatNumLitKind = (const lean_object*)&l_Lean_instQuoteNatNumLitKind___closed__0_value;
static const lean_string_object l_Lean_instQuoteRawMkStr1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_instQuoteRawMkStr1___lam__0___closed__0 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__0_value;
static const lean_string_object l_Lean_instQuoteRawMkStr1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "toRawSubstring'"};
static const lean_object* l_Lean_instQuoteRawMkStr1___lam__0___closed__1 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(190, 31, 121, 163, 121, 213, 247, 150)}};
static const lean_object* l_Lean_instQuoteRawMkStr1___lam__0___closed__2 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteRawMkStr1___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteRawMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteRawMkStr1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteRawMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteRawMkStr1 = (const lean_object*)&l_Lean_instQuoteRawMkStr1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
static const lean_string_object l_Lean_quoteNameMk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Name"};
static const lean_object* l_Lean_quoteNameMk___closed__0 = (const lean_object*)&l_Lean_quoteNameMk___closed__0_value;
static const lean_string_object l_Lean_quoteNameMk___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "anonymous"};
static const lean_object* l_Lean_quoteNameMk___closed__1 = (const lean_object*)&l_Lean_quoteNameMk___closed__1_value;
static const lean_ctor_object l_Lean_quoteNameMk___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__2_value_aux_0),((lean_object*)&l_Lean_quoteNameMk___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__2_value_aux_1),((lean_object*)&l_Lean_quoteNameMk___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 163, 3, 148, 15, 163, 84, 121)}};
static const lean_object* l_Lean_quoteNameMk___closed__2 = (const lean_object*)&l_Lean_quoteNameMk___closed__2_value;
static lean_once_cell_t l_Lean_quoteNameMk___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_quoteNameMk___closed__3;
static const lean_string_object l_Lean_quoteNameMk___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mkStr"};
static const lean_object* l_Lean_quoteNameMk___closed__4 = (const lean_object*)&l_Lean_quoteNameMk___closed__4_value;
static const lean_ctor_object l_Lean_quoteNameMk___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__5_value_aux_0),((lean_object*)&l_Lean_quoteNameMk___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__5_value_aux_1),((lean_object*)&l_Lean_quoteNameMk___closed__4_value),LEAN_SCALAR_PTR_LITERAL(66, 239, 13, 154, 0, 241, 98, 75)}};
static const lean_object* l_Lean_quoteNameMk___closed__5 = (const lean_object*)&l_Lean_quoteNameMk___closed__5_value;
static const lean_string_object l_Lean_quoteNameMk___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mkNum"};
static const lean_object* l_Lean_quoteNameMk___closed__6 = (const lean_object*)&l_Lean_quoteNameMk___closed__6_value;
static const lean_ctor_object l_Lean_quoteNameMk___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__7_value_aux_0),((lean_object*)&l_Lean_quoteNameMk___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l_Lean_quoteNameMk___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_quoteNameMk___closed__7_value_aux_1),((lean_object*)&l_Lean_quoteNameMk___closed__6_value),LEAN_SCALAR_PTR_LITERAL(247, 141, 7, 17, 149, 107, 178, 15)}};
static const lean_object* l_Lean_quoteNameMk___closed__7 = (const lean_object*)&l_Lean_quoteNameMk___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_quoteNameMk(lean_object*);
static const lean_string_object l_Lean_instQuoteNameMkStr1___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l_Lean_instQuoteNameMkStr1___private__1___closed__0 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__0_value;
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_instQuoteNameMkStr1___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value_aux_2),((lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l_Lean_instQuoteNameMkStr1___private__1___closed__1 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___private__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___private__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___lam__0(lean_object*);
static const lean_closure_object l_Lean_instQuoteNameMkStr1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instQuoteNameMkStr1___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instQuoteNameMkStr1___closed__0 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instQuoteNameMkStr1 = (const lean_object*)&l_Lean_instQuoteNameMkStr1___closed__0_value;
static const lean_string_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Prod"};
static const lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 119, 164, 206, 221, 118, 48, 212)}};
static const lean_ctor_object l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 121, 37, 123, 104, 28, 189, 89)}};
static const lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0_value;
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mkArray"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1 = (const lean_object*)&l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Option_hasQuote___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__3;
static const lean_string_object l_Lean_Option_hasQuote___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean_Option_hasQuote___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_evalPrec___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalPrec___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_evalPrec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected precedence"};
static const lean_object* l_Lean_evalPrec___closed__0 = (const lean_object*)&l_Lean_evalPrec___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_evalPrec(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalPrec___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_evalPrio___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "unexpected priority"};
static const lean_object* l_Lean_evalPrio___closed__0 = (const lean_object*)&l_Lean_evalPrio___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_evalPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalPrio___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalOptPrio(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalOptPrio___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_getSepElems___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_getSepElems___redArg___closed__0 = (const lean_object*)&l_Array_getSepElems___redArg___closed__0_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__1 = (const lean_object*)&l_Array_getSepElems___redArg___closed__1_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__2 = (const lean_object*)&l_Array_getSepElems___redArg___closed__2_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__3 = (const lean_object*)&l_Array_getSepElems___redArg___closed__3_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__4 = (const lean_object*)&l_Array_getSepElems___redArg___closed__4_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__5 = (const lean_object*)&l_Array_getSepElems___redArg___closed__5_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__6 = (const lean_object*)&l_Array_getSepElems___redArg___closed__6_value;
static const lean_closure_object l_Array_getSepElems___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Array_getSepElems___redArg___closed__7 = (const lean_object*)&l_Array_getSepElems___redArg___closed__7_value;
static const lean_ctor_object l_Array_getSepElems___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_getSepElems___redArg___closed__1_value),((lean_object*)&l_Array_getSepElems___redArg___closed__2_value)}};
static const lean_object* l_Array_getSepElems___redArg___closed__8 = (const lean_object*)&l_Array_getSepElems___redArg___closed__8_value;
static const lean_ctor_object l_Array_getSepElems___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_getSepElems___redArg___closed__8_value),((lean_object*)&l_Array_getSepElems___redArg___closed__3_value),((lean_object*)&l_Array_getSepElems___redArg___closed__4_value),((lean_object*)&l_Array_getSepElems___redArg___closed__5_value),((lean_object*)&l_Array_getSepElems___redArg___closed__6_value)}};
static const lean_object* l_Array_getSepElems___redArg___closed__9 = (const lean_object*)&l_Array_getSepElems___redArg___closed__9_value;
static const lean_ctor_object l_Array_getSepElems___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Array_getSepElems___redArg___closed__9_value),((lean_object*)&l_Array_getSepElems___redArg___closed__7_value)}};
static const lean_object* l_Array_getSepElems___redArg___closed__10 = (const lean_object*)&l_Array_getSepElems___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Array_getSepElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_filterSepElems___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElems___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterSepElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElems___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapSepElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Syntax_instEmptyCollectionSepArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___closed__0;
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0;
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArrayTSyntaxArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0 = (const lean_object*)&l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg();
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___boxed(lean_object*);
static const lean_string_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0 = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_mkMarkdownDocCommentFrom___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1 = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0(lean_object*);
static const lean_closure_object l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0 = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil = (const lean_object*)&l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Syntax_instCoeTermTSyntaxConsSyntaxNodeKindMkStr4Nil = (const lean_object*)&l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit(lean_object*);
static const lean_string_object l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "interpolatedStrLitKind"};
static const lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0 = (const lean_object*)&l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0_value;
static const lean_ctor_object l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 181, 130, 246, 88, 58, 26, 43)}};
static const lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1 = (const lean_object*)&l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "term_++_"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 69, 86, 178, 149, 48, 216, 23)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "++"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_TSyntax_expandInterpolatedStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_expandInterpolatedStr___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__0 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__0_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__1 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__1_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value_aux_2),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__2 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__2_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__3 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__3_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_1),((lean_object*)&l_Lean_expandMacros___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value_aux_2),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__4 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__4_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__5 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__5_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__6 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__6_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__7 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__7_value;
static lean_once_cell_t l_Lean_TSyntax_expandInterpolatedStr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__8;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "TSyntax"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__9 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__9_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__10_value_aux_0),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__9_value),LEAN_SCALAR_PTR_LITERAL(208, 86, 51, 178, 37, 75, 0, 6)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__10 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__10_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__10_value)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__11 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__11_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Compat"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__12 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__12_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_0),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__9_value),LEAN_SCALAR_PTR_LITERAL(208, 86, 51, 178, 37, 75, 0, 6)}};
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value_aux_1),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__12_value),LEAN_SCALAR_PTR_LITERAL(233, 134, 124, 217, 96, 118, 79, 86)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__13 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__13_value)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__14 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__14_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__15 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__15_value;
static const lean_ctor_object l_Lean_TSyntax_expandInterpolatedStr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__11_value),((lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__15_value)}};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__16 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__16_value;
static const lean_string_object l_Lean_TSyntax_expandInterpolatedStr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_TSyntax_expandInterpolatedStr___closed__17 = (const lean_object*)&l_Lean_TSyntax_expandInterpolatedStr___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString___boxed(lean_object*);
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.TransparencyMode.all"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__0 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__1 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.TransparencyMode.default"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__2 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__3 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.TransparencyMode.reducible"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__4 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__5 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__5_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.TransparencyMode.instances"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__6 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__6_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__6_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__7 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__7_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.TransparencyMode.none"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__8 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__8_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__8_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__9 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__9_value;
static const lean_string_object l_Lean_Meta_instReprTransparencyMode_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Meta.TransparencyMode.implicit"};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__10 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__10_value;
static const lean_ctor_object l_Lean_Meta_instReprTransparencyMode_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__10_value)}};
static const lean_object* l_Lean_Meta_instReprTransparencyMode_repr___closed__11 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode_repr___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprTransparencyMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprTransparencyMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprTransparencyMode___closed__0 = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprTransparencyMode = (const lean_object*)&l_Lean_Meta_instReprTransparencyMode___closed__0_value;
static const lean_string_object l_Lean_Meta_instReprEtaStructMode_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.EtaStructMode.all"};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__0 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprEtaStructMode_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__1 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_instReprEtaStructMode_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.EtaStructMode.notClasses"};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__2 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprEtaStructMode_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__3 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_instReprEtaStructMode_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Meta.EtaStructMode.none"};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__4 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_instReprEtaStructMode_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_instReprEtaStructMode_repr___closed__5 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode_repr___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprEtaStructMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprEtaStructMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprEtaStructMode___closed__0 = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprEtaStructMode = (const lean_object*)&l_Lean_Meta_instReprEtaStructMode___closed__0_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zeta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__4;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "beta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__6_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__7_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__8_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "etaStruct"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__9_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__11;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "iota"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__15_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__17_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__18;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "autoUnfold"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__19_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__19_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__20 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__20_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__21;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "failIfUnchanged"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__22 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__22_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__22_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__23 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__23_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__24;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unfoldPartialApp"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__25 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__25_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__25_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__26 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__26_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__27;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "zetaDelta"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__28 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__28_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__28_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__29 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__29_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "index"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__30 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__30_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__30_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__31 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__31_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__32;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "zetaUnused"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__33 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__33_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__33_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__34 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__34_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "zetaHave"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__35 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__35_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__35_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__36 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__36_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig_repr___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__37;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "locals"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__38 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__38_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__38_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__39 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__39_value;
static const lean_string_object l_Lean_Meta_instReprConfig_repr___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instances"};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__40 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__40_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig_repr___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__40_value)}};
static const lean_object* l_Lean_Meta_instReprConfig_repr___redArg___closed__41 = (const lean_object*)&l_Lean_Meta_instReprConfig_repr___redArg___closed__41_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprConfig_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprConfig___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprConfig = (const lean_object*)&l_Lean_Meta_instReprConfig___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Option_hasQuote___redArg___lam__0___closed__1_value)}};
static const lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0 = (const lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0_value;
static const lean_string_object l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1 = (const lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__1_value)}};
static const lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2 = (const lean_object*)&l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "maxSteps"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__2_value),((lean_object*)&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "maxDischargeDepth"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "contextual"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__7_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "memoize"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__9_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "singlePass"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arith"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dsimp"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__16_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ground"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__18_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "implicitDefEqProofs"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__20_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "catchRuntime"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__23_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letToHave"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__26_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "congrConsts"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__28_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "bitVecOfNat"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__31_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "warnExponents"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__33_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "suggestions"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__36_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37_value;
static const lean_string_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "maxSuggestions"};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38_value;
static const lean_ctor_object l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__38_value)}};
static const lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39 = (const lean_object*)&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39_value;
static lean_once_cell_t l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40;
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReprConfig__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReprConfig__1_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReprConfig__1___closed__0 = (const lean_object*)&l_Lean_Meta_instReprConfig__1___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReprConfig__1 = (const lean_object*)&l_Lean_Meta_instReprConfig__1___closed__0_value;
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_contains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_contains___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_isAll(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_isAll___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Tactic_getConfigItems___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__1 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__1_value;
static const lean_string_object l_Lean_Parser_Tactic_getConfigItems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__0 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__1_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__2 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__2_value;
static const lean_string_object l_Lean_Parser_Tactic_getConfigItems___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__3 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__3_value;
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_expandMacros___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_0),((lean_object*)&l_Lean_expandMacros___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_1),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_Tactic_getConfigItems___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value_aux_2),((lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 254, 59, 95, 54, 234, 162, 220)}};
static const lean_object* l_Lean_Parser_Tactic_getConfigItems___closed__4 = (const lean_object*)&l_Lean_Parser_Tactic_getConfigItems___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_getConfigItems(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mkOptConfig(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_appendConfig(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMajor___boxed(lean_object* v_u_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = lean_version_get_major(v_u_2_);
return v_res_3_;
}
}
static lean_object* _init_l_Lean_version_major___closed__0(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_box(0);
v___x_5_ = lean_version_get_major(v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_version_major(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lean_version_major___closed__0, &l_Lean_version_major___closed__0_once, _init_l_Lean_version_major___closed__0);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getMinor___boxed(lean_object* v_u_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = lean_version_get_minor(v_u_8_);
return v_res_9_;
}
}
static lean_object* _init_l_Lean_version_minor___closed__0(void){
_start:
{
lean_object* v___x_10_; lean_object* v___x_11_; 
v___x_10_ = lean_box(0);
v___x_11_ = lean_version_get_minor(v___x_10_);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_version_minor(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = lean_obj_once(&l_Lean_version_minor___closed__0, &l_Lean_version_minor___closed__0_once, _init_l_Lean_version_minor___closed__0);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_version_getPatch___boxed(lean_object* v_u_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = lean_version_get_patch(v_u_14_);
return v_res_15_;
}
}
static lean_object* _init_l_Lean_version_patch___closed__0(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_16_ = lean_box(0);
v___x_17_ = lean_version_get_patch(v___x_16_);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_version_patch(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_obj_once(&l_Lean_version_patch___closed__0, &l_Lean_version_patch___closed__0_once, _init_l_Lean_version_patch___closed__0);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_getGithash___boxed(lean_object* v_u_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = lean_get_githash(v_u_20_);
return v_res_21_;
}
}
static lean_object* _init_l_Lean_githash___closed__0(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_box(0);
v___x_23_ = lean_get_githash(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_githash(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_obj_once(&l_Lean_githash___closed__0, &l_Lean_githash___closed__0_once, _init_l_Lean_githash___closed__0);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_version_getIsRelease___boxed(lean_object* v_u_26_){
_start:
{
uint8_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = lean_version_get_is_release(v_u_26_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
static uint8_t _init_l_Lean_version_isRelease___closed__0(void){
_start:
{
lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_29_ = lean_box(0);
v___x_30_ = lean_version_get_is_release(v___x_29_);
return v___x_30_;
}
}
static uint8_t _init_l_Lean_version_isRelease(void){
_start:
{
uint8_t v___x_31_; 
v___x_31_ = lean_uint8_once(&l_Lean_version_isRelease___closed__0, &l_Lean_version_isRelease___closed__0_once, _init_l_Lean_version_isRelease___closed__0);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_version_getSpecialDesc___boxed(lean_object* v_u_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = lean_version_get_special_desc(v_u_33_);
return v_res_34_;
}
}
static lean_object* _init_l_Lean_version_specialDesc___closed__0(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_box(0);
v___x_36_ = lean_version_get_special_desc(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_version_specialDesc(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_obj_once(&l_Lean_version_specialDesc___closed__0, &l_Lean_version_specialDesc___closed__0_once, _init_l_Lean_version_specialDesc___closed__0);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__0(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = l_Lean_version_major;
v___x_39_ = l_Nat_reprFast(v___x_38_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__2(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_41_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_42_ = lean_obj_once(&l_Lean_versionStringCore___closed__0, &l_Lean_versionStringCore___closed__0_once, _init_l_Lean_versionStringCore___closed__0);
v___x_43_ = lean_string_append(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__3(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = l_Lean_version_minor;
v___x_45_ = l_Nat_reprFast(v___x_44_);
return v___x_45_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__4(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_obj_once(&l_Lean_versionStringCore___closed__3, &l_Lean_versionStringCore___closed__3_once, _init_l_Lean_versionStringCore___closed__3);
v___x_47_ = lean_obj_once(&l_Lean_versionStringCore___closed__2, &l_Lean_versionStringCore___closed__2_once, _init_l_Lean_versionStringCore___closed__2);
v___x_48_ = lean_string_append(v___x_47_, v___x_46_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__5(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_49_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_50_ = lean_obj_once(&l_Lean_versionStringCore___closed__4, &l_Lean_versionStringCore___closed__4_once, _init_l_Lean_versionStringCore___closed__4);
v___x_51_ = lean_string_append(v___x_50_, v___x_49_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__6(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = l_Lean_version_patch;
v___x_53_ = l_Nat_reprFast(v___x_52_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_versionStringCore___closed__7(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_54_ = lean_obj_once(&l_Lean_versionStringCore___closed__6, &l_Lean_versionStringCore___closed__6_once, _init_l_Lean_versionStringCore___closed__6);
v___x_55_ = lean_obj_once(&l_Lean_versionStringCore___closed__5, &l_Lean_versionStringCore___closed__5_once, _init_l_Lean_versionStringCore___closed__5);
v___x_56_ = lean_string_append(v___x_55_, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_versionStringCore(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_obj_once(&l_Lean_versionStringCore___closed__7, &l_Lean_versionStringCore___closed__7_once, _init_l_Lean_versionStringCore___closed__7);
return v___x_57_;
}
}
static uint8_t _init_l_Lean_versionString___closed__1(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_59_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_60_ = l_Lean_version_specialDesc;
v___x_61_ = lean_string_dec_eq(v___x_60_, v___x_59_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_versionString___closed__3(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_63_ = ((lean_object*)(l_Lean_versionString___closed__2));
v___x_64_ = l_Lean_versionStringCore;
v___x_65_ = lean_string_append(v___x_64_, v___x_63_);
return v___x_65_;
}
}
static lean_object* _init_l_Lean_versionString___closed__4(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_66_ = l_Lean_version_specialDesc;
v___x_67_ = lean_obj_once(&l_Lean_versionString___closed__3, &l_Lean_versionString___closed__3_once, _init_l_Lean_versionString___closed__3);
v___x_68_ = lean_string_append(v___x_67_, v___x_66_);
return v___x_68_;
}
}
static lean_object* _init_l_Lean_versionString___closed__6(void){
_start:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_70_ = ((lean_object*)(l_Lean_versionString___closed__5));
v___x_71_ = l_Lean_versionStringCore;
v___x_72_ = lean_string_append(v___x_71_, v___x_70_);
return v___x_72_;
}
}
static lean_object* _init_l_Lean_versionString___closed__7(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = l_Lean_githash;
v___x_74_ = lean_obj_once(&l_Lean_versionString___closed__6, &l_Lean_versionString___closed__6_once, _init_l_Lean_versionString___closed__6);
v___x_75_ = lean_string_append(v___x_74_, v___x_73_);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_versionString(void){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = lean_uint8_once(&l_Lean_versionString___closed__1, &l_Lean_versionString___closed__1_once, _init_l_Lean_versionString___closed__1);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; 
v___x_77_ = lean_obj_once(&l_Lean_versionString___closed__4, &l_Lean_versionString___closed__4_once, _init_l_Lean_versionString___closed__4);
return v___x_77_;
}
else
{
uint8_t v___x_78_; 
v___x_78_ = l_Lean_version_isRelease;
if (v___x_78_ == 0)
{
lean_object* v___x_79_; 
v___x_79_ = lean_obj_once(&l_Lean_versionString___closed__7, &l_Lean_versionString___closed__7_once, _init_l_Lean_versionString___closed__7);
return v___x_79_;
}
else
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_versionStringCore;
return v___x_80_;
}
}
}
}
static lean_object* _init_l_Lean_toolchain___closed__1(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_84_ = ((lean_object*)(l_Lean_toolchain___closed__0));
v___x_85_ = ((lean_object*)(l_Lean_origin___closed__0));
v___x_86_ = lean_string_append(v___x_85_, v___x_84_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__2(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_87_ = l_Lean_version_specialDesc;
v___x_88_ = lean_obj_once(&l_Lean_toolchain___closed__1, &l_Lean_toolchain___closed__1_once, _init_l_Lean_toolchain___closed__1);
v___x_89_ = lean_string_append(v___x_88_, v___x_87_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__4(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_91_ = ((lean_object*)(l_Lean_toolchain___closed__3));
v___x_92_ = ((lean_object*)(l_Lean_origin___closed__0));
v___x_93_ = lean_string_append(v___x_92_, v___x_91_);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__5(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_94_ = l_Lean_versionStringCore;
v___x_95_ = lean_obj_once(&l_Lean_toolchain___closed__4, &l_Lean_toolchain___closed__4_once, _init_l_Lean_toolchain___closed__4);
v___x_96_ = lean_string_append(v___x_95_, v___x_94_);
return v___x_96_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__6(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_97_ = ((lean_object*)(l_Lean_versionString___closed__2));
v___x_98_ = lean_obj_once(&l_Lean_toolchain___closed__5, &l_Lean_toolchain___closed__5_once, _init_l_Lean_toolchain___closed__5);
v___x_99_ = lean_string_append(v___x_98_, v___x_97_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_toolchain___closed__7(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_100_ = l_Lean_version_specialDesc;
v___x_101_ = lean_obj_once(&l_Lean_toolchain___closed__6, &l_Lean_toolchain___closed__6_once, _init_l_Lean_toolchain___closed__6);
v___x_102_ = lean_string_append(v___x_101_, v___x_100_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_toolchain(void){
_start:
{
lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_103_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_104_ = lean_uint8_once(&l_Lean_versionString___closed__1, &l_Lean_versionString___closed__1_once, _init_l_Lean_versionString___closed__1);
if (v___x_104_ == 0)
{
uint8_t v___x_105_; 
v___x_105_ = l_Lean_version_isRelease;
if (v___x_105_ == 0)
{
lean_object* v___x_106_; 
v___x_106_ = lean_obj_once(&l_Lean_toolchain___closed__2, &l_Lean_toolchain___closed__2_once, _init_l_Lean_toolchain___closed__2);
return v___x_106_;
}
else
{
lean_object* v___x_107_; 
v___x_107_ = lean_obj_once(&l_Lean_toolchain___closed__7, &l_Lean_toolchain___closed__7_once, _init_l_Lean_toolchain___closed__7);
return v___x_107_;
}
}
else
{
uint8_t v___x_108_; 
v___x_108_ = l_Lean_version_isRelease;
if (v___x_108_ == 0)
{
return v___x_103_;
}
else
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lean_toolchain___closed__5, &l_Lean_toolchain___closed__5_once, _init_l_Lean_toolchain___closed__5);
return v___x_109_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Internal_isStage0___boxed(lean_object* v_u_111_){
_start:
{
uint8_t v_res_112_; lean_object* v_r_113_; 
v_res_112_ = lean_internal_is_stage0(v_u_111_);
v_r_113_ = lean_box(v_res_112_);
return v_r_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Internal_hasLLVMBackend___boxed(lean_object* v_u_115_){
_start:
{
uint8_t v_res_116_; lean_object* v_r_117_; 
v_res_116_ = lean_internal_has_llvm_backend(v_u_115_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT uint8_t l_Lean_isGreek(uint32_t v_c_118_){
_start:
{
uint32_t v___x_119_; uint8_t v___x_120_; 
v___x_119_ = 913;
v___x_120_ = lean_uint32_dec_le(v___x_119_, v_c_118_);
if (v___x_120_ == 0)
{
return v___x_120_;
}
else
{
uint32_t v___x_121_; uint8_t v___x_122_; 
v___x_121_ = 989;
v___x_122_ = lean_uint32_dec_le(v_c_118_, v___x_121_);
return v___x_122_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isGreek___boxed(lean_object* v_c_123_){
_start:
{
uint32_t v_c_boxed_124_; uint8_t v_res_125_; lean_object* v_r_126_; 
v_c_boxed_124_ = lean_unbox_uint32(v_c_123_);
lean_dec(v_c_123_);
v_res_125_ = l_Lean_isGreek(v_c_boxed_124_);
v_r_126_ = lean_box(v_res_125_);
return v_r_126_;
}
}
LEAN_EXPORT uint8_t l_Lean_isLetterLike(uint32_t v_c_127_){
_start:
{
uint8_t v___y_134_; uint8_t v___y_138_; uint32_t v___x_174_; uint8_t v___x_175_; 
v___x_174_ = 945;
v___x_175_ = lean_uint32_dec_le(v___x_174_, v_c_127_);
if (v___x_175_ == 0)
{
goto v___jp_165_;
}
else
{
uint32_t v___x_176_; uint8_t v___x_177_; 
v___x_176_ = 969;
v___x_177_ = lean_uint32_dec_le(v_c_127_, v___x_176_);
if (v___x_177_ == 0)
{
goto v___jp_165_;
}
else
{
uint32_t v___x_178_; uint8_t v___x_179_; 
v___x_178_ = 955;
v___x_179_ = lean_uint32_dec_eq(v_c_127_, v___x_178_);
if (v___x_179_ == 0)
{
return v___x_177_;
}
else
{
goto v___jp_165_;
}
}
}
v___jp_128_:
{
uint32_t v___x_129_; uint8_t v___x_130_; 
v___x_129_ = 256;
v___x_130_ = lean_uint32_dec_le(v___x_129_, v_c_127_);
if (v___x_130_ == 0)
{
return v___x_130_;
}
else
{
uint32_t v___x_131_; uint8_t v___x_132_; 
v___x_131_ = 383;
v___x_132_ = lean_uint32_dec_le(v_c_127_, v___x_131_);
return v___x_132_;
}
}
v___jp_133_:
{
uint32_t v___x_135_; uint8_t v___x_136_; 
v___x_135_ = 247;
v___x_136_ = lean_uint32_dec_eq(v_c_127_, v___x_135_);
if (v___x_136_ == 0)
{
return v___y_134_;
}
else
{
goto v___jp_128_;
}
}
v___jp_137_:
{
uint32_t v___x_139_; uint8_t v___x_140_; 
v___x_139_ = 192;
v___x_140_ = lean_uint32_dec_le(v___x_139_, v_c_127_);
if (v___x_140_ == 0)
{
goto v___jp_128_;
}
else
{
uint32_t v___x_141_; uint8_t v___x_142_; 
v___x_141_ = 255;
v___x_142_ = lean_uint32_dec_le(v_c_127_, v___x_141_);
if (v___x_142_ == 0)
{
goto v___jp_128_;
}
else
{
uint32_t v___x_143_; uint8_t v___x_144_; 
v___x_143_ = 215;
v___x_144_ = lean_uint32_dec_eq(v_c_127_, v___x_143_);
if (v___x_144_ == 0)
{
v___y_134_ = v___x_142_;
goto v___jp_133_;
}
else
{
if (v___y_138_ == 0)
{
goto v___jp_128_;
}
else
{
v___y_134_ = v___y_138_;
goto v___jp_133_;
}
}
}
}
}
v___jp_145_:
{
uint32_t v___x_146_; uint8_t v___x_147_; 
v___x_146_ = 119964;
v___x_147_ = lean_uint32_dec_le(v___x_146_, v_c_127_);
if (v___x_147_ == 0)
{
v___y_138_ = v___x_147_;
goto v___jp_137_;
}
else
{
uint32_t v___x_148_; uint8_t v___x_149_; 
v___x_148_ = 120223;
v___x_149_ = lean_uint32_dec_le(v_c_127_, v___x_148_);
if (v___x_149_ == 0)
{
v___y_138_ = v___x_149_;
goto v___jp_137_;
}
else
{
return v___x_149_;
}
}
}
v___jp_150_:
{
uint32_t v___x_151_; uint8_t v___x_152_; 
v___x_151_ = 8448;
v___x_152_ = lean_uint32_dec_le(v___x_151_, v_c_127_);
if (v___x_152_ == 0)
{
goto v___jp_145_;
}
else
{
uint32_t v___x_153_; uint8_t v___x_154_; 
v___x_153_ = 8527;
v___x_154_ = lean_uint32_dec_le(v_c_127_, v___x_153_);
if (v___x_154_ == 0)
{
goto v___jp_145_;
}
else
{
return v___x_154_;
}
}
}
v___jp_155_:
{
uint32_t v___x_156_; uint8_t v___x_157_; 
v___x_156_ = 7936;
v___x_157_ = lean_uint32_dec_le(v___x_156_, v_c_127_);
if (v___x_157_ == 0)
{
goto v___jp_150_;
}
else
{
uint32_t v___x_158_; uint8_t v___x_159_; 
v___x_158_ = 8190;
v___x_159_ = lean_uint32_dec_le(v_c_127_, v___x_158_);
if (v___x_159_ == 0)
{
goto v___jp_150_;
}
else
{
return v___x_159_;
}
}
}
v___jp_160_:
{
uint32_t v___x_161_; uint8_t v___x_162_; 
v___x_161_ = 970;
v___x_162_ = lean_uint32_dec_le(v___x_161_, v_c_127_);
if (v___x_162_ == 0)
{
goto v___jp_155_;
}
else
{
uint32_t v___x_163_; uint8_t v___x_164_; 
v___x_163_ = 1019;
v___x_164_ = lean_uint32_dec_le(v_c_127_, v___x_163_);
if (v___x_164_ == 0)
{
goto v___jp_155_;
}
else
{
return v___x_164_;
}
}
}
v___jp_165_:
{
uint32_t v___x_166_; uint8_t v___x_167_; 
v___x_166_ = 913;
v___x_167_ = lean_uint32_dec_le(v___x_166_, v_c_127_);
if (v___x_167_ == 0)
{
goto v___jp_160_;
}
else
{
uint32_t v___x_168_; uint8_t v___x_169_; 
v___x_168_ = 937;
v___x_169_ = lean_uint32_dec_le(v_c_127_, v___x_168_);
if (v___x_169_ == 0)
{
goto v___jp_160_;
}
else
{
uint32_t v___x_170_; uint8_t v___x_171_; 
v___x_170_ = 928;
v___x_171_ = lean_uint32_dec_eq(v_c_127_, v___x_170_);
if (v___x_171_ == 0)
{
uint32_t v___x_172_; uint8_t v___x_173_; 
v___x_172_ = 931;
v___x_173_ = lean_uint32_dec_eq(v_c_127_, v___x_172_);
if (v___x_173_ == 0)
{
return v___x_169_;
}
else
{
goto v___jp_160_;
}
}
else
{
goto v___jp_160_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isLetterLike___boxed(lean_object* v_c_180_){
_start:
{
uint32_t v_c_boxed_181_; uint8_t v_res_182_; lean_object* v_r_183_; 
v_c_boxed_181_ = lean_unbox_uint32(v_c_180_);
lean_dec(v_c_180_);
v_res_182_ = l_Lean_isLetterLike(v_c_boxed_181_);
v_r_183_ = lean_box(v_res_182_);
return v_r_183_;
}
}
LEAN_EXPORT uint8_t l_Lean_isNumericSubscript(uint32_t v_c_184_){
_start:
{
uint32_t v___x_185_; uint8_t v___x_186_; 
v___x_185_ = 8320;
v___x_186_ = lean_uint32_dec_le(v___x_185_, v_c_184_);
if (v___x_186_ == 0)
{
return v___x_186_;
}
else
{
uint32_t v___x_187_; uint8_t v___x_188_; 
v___x_187_ = 8329;
v___x_188_ = lean_uint32_dec_le(v_c_184_, v___x_187_);
return v___x_188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isNumericSubscript___boxed(lean_object* v_c_189_){
_start:
{
uint32_t v_c_boxed_190_; uint8_t v_res_191_; lean_object* v_r_192_; 
v_c_boxed_190_ = lean_unbox_uint32(v_c_189_);
lean_dec(v_c_189_);
v_res_191_ = l_Lean_isNumericSubscript(v_c_boxed_190_);
v_r_192_ = lean_box(v_res_191_);
return v_r_192_;
}
}
LEAN_EXPORT uint8_t l_Lean_isSubScriptAlnum(uint32_t v_c_193_){
_start:
{
uint32_t v___x_207_; uint8_t v___x_208_; 
v___x_207_ = 8320;
v___x_208_ = lean_uint32_dec_le(v___x_207_, v_c_193_);
if (v___x_208_ == 0)
{
goto v___jp_202_;
}
else
{
uint32_t v___x_209_; uint8_t v___x_210_; 
v___x_209_ = 8329;
v___x_210_ = lean_uint32_dec_le(v_c_193_, v___x_209_);
if (v___x_210_ == 0)
{
goto v___jp_202_;
}
else
{
return v___x_210_;
}
}
v___jp_194_:
{
uint32_t v___x_195_; uint8_t v___x_196_; 
v___x_195_ = 11388;
v___x_196_ = lean_uint32_dec_eq(v_c_193_, v___x_195_);
return v___x_196_;
}
v___jp_197_:
{
uint32_t v___x_198_; uint8_t v___x_199_; 
v___x_198_ = 7522;
v___x_199_ = lean_uint32_dec_le(v___x_198_, v_c_193_);
if (v___x_199_ == 0)
{
goto v___jp_194_;
}
else
{
uint32_t v___x_200_; uint8_t v___x_201_; 
v___x_200_ = 7530;
v___x_201_ = lean_uint32_dec_le(v_c_193_, v___x_200_);
if (v___x_201_ == 0)
{
goto v___jp_194_;
}
else
{
return v___x_201_;
}
}
}
v___jp_202_:
{
uint32_t v___x_203_; uint8_t v___x_204_; 
v___x_203_ = 8336;
v___x_204_ = lean_uint32_dec_le(v___x_203_, v_c_193_);
if (v___x_204_ == 0)
{
goto v___jp_197_;
}
else
{
uint32_t v___x_205_; uint8_t v___x_206_; 
v___x_205_ = 8348;
v___x_206_ = lean_uint32_dec_le(v_c_193_, v___x_205_);
if (v___x_206_ == 0)
{
goto v___jp_197_;
}
else
{
return v___x_206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isSubScriptAlnum___boxed(lean_object* v_c_211_){
_start:
{
uint32_t v_c_boxed_212_; uint8_t v_res_213_; lean_object* v_r_214_; 
v_c_boxed_212_ = lean_unbox_uint32(v_c_211_);
lean_dec(v_c_211_);
v_res_213_ = l_Lean_isSubScriptAlnum(v_c_boxed_212_);
v_r_214_ = lean_box(v_res_213_);
return v_r_214_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdFirst(uint32_t v_c_215_){
_start:
{
uint32_t v___x_225_; uint8_t v___x_226_; 
v___x_225_ = 65;
v___x_226_ = lean_uint32_dec_le(v___x_225_, v_c_215_);
if (v___x_226_ == 0)
{
goto v___jp_220_;
}
else
{
uint32_t v___x_227_; uint8_t v___x_228_; 
v___x_227_ = 90;
v___x_228_ = lean_uint32_dec_le(v_c_215_, v___x_227_);
if (v___x_228_ == 0)
{
goto v___jp_220_;
}
else
{
return v___x_228_;
}
}
v___jp_216_:
{
uint32_t v___x_217_; uint8_t v___x_218_; 
v___x_217_ = 95;
v___x_218_ = lean_uint32_dec_eq(v_c_215_, v___x_217_);
if (v___x_218_ == 0)
{
uint8_t v___x_219_; 
v___x_219_ = l_Lean_isLetterLike(v_c_215_);
return v___x_219_;
}
else
{
return v___x_218_;
}
}
v___jp_220_:
{
uint32_t v___x_221_; uint8_t v___x_222_; 
v___x_221_ = 97;
v___x_222_ = lean_uint32_dec_le(v___x_221_, v_c_215_);
if (v___x_222_ == 0)
{
goto v___jp_216_;
}
else
{
uint32_t v___x_223_; uint8_t v___x_224_; 
v___x_223_ = 122;
v___x_224_ = lean_uint32_dec_le(v_c_215_, v___x_223_);
if (v___x_224_ == 0)
{
goto v___jp_216_;
}
else
{
return v___x_224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdFirst___boxed(lean_object* v_c_229_){
_start:
{
uint32_t v_c_boxed_230_; uint8_t v_res_231_; lean_object* v_r_232_; 
v_c_boxed_230_ = lean_unbox_uint32(v_c_229_);
lean_dec(v_c_229_);
v_res_231_ = l_Lean_isIdFirst(v_c_boxed_230_);
v_r_232_ = lean_box(v_res_231_);
return v_r_232_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphaAscii(uint8_t v_c_233_){
_start:
{
uint8_t v___x_239_; uint8_t v___x_240_; 
v___x_239_ = 97;
v___x_240_ = lean_uint8_dec_le(v___x_239_, v_c_233_);
if (v___x_240_ == 0)
{
goto v___jp_234_;
}
else
{
uint8_t v___x_241_; uint8_t v___x_242_; 
v___x_241_ = 122;
v___x_242_ = lean_uint8_dec_le(v_c_233_, v___x_241_);
if (v___x_242_ == 0)
{
goto v___jp_234_;
}
else
{
return v___x_242_;
}
}
v___jp_234_:
{
uint8_t v___x_235_; uint8_t v___x_236_; 
v___x_235_ = 65;
v___x_236_ = lean_uint8_dec_le(v___x_235_, v_c_233_);
if (v___x_236_ == 0)
{
return v___x_236_;
}
else
{
uint8_t v___x_237_; uint8_t v___x_238_; 
v___x_237_ = 90;
v___x_238_ = lean_uint8_dec_le(v_c_233_, v___x_237_);
return v___x_238_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphaAscii___boxed(lean_object* v_c_243_){
_start:
{
uint8_t v_c_boxed_244_; uint8_t v_res_245_; lean_object* v_r_246_; 
v_c_boxed_244_ = lean_unbox(v_c_243_);
v_res_245_ = l___private_Init_Meta_Defs_0__Lean_isAlphaAscii(v_c_boxed_244_);
v_r_246_ = lean_box(v_res_245_);
return v_r_246_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdFirstAscii(uint8_t v_c_247_){
_start:
{
uint8_t v___x_256_; uint8_t v___x_257_; 
v___x_256_ = 97;
v___x_257_ = lean_uint8_dec_le(v___x_256_, v_c_247_);
if (v___x_257_ == 0)
{
goto v___jp_251_;
}
else
{
uint8_t v___x_258_; uint8_t v___x_259_; 
v___x_258_ = 122;
v___x_259_ = lean_uint8_dec_le(v_c_247_, v___x_258_);
if (v___x_259_ == 0)
{
goto v___jp_251_;
}
else
{
return v___x_259_;
}
}
v___jp_248_:
{
uint8_t v___x_249_; uint8_t v___x_250_; 
v___x_249_ = 95;
v___x_250_ = lean_uint8_dec_eq(v_c_247_, v___x_249_);
return v___x_250_;
}
v___jp_251_:
{
uint8_t v___x_252_; uint8_t v___x_253_; 
v___x_252_ = 65;
v___x_253_ = lean_uint8_dec_le(v___x_252_, v_c_247_);
if (v___x_253_ == 0)
{
goto v___jp_248_;
}
else
{
uint8_t v___x_254_; uint8_t v___x_255_; 
v___x_254_ = 90;
v___x_255_ = lean_uint8_dec_le(v_c_247_, v___x_254_);
if (v___x_255_ == 0)
{
goto v___jp_248_;
}
else
{
return v___x_255_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdFirstAscii___boxed(lean_object* v_c_260_){
_start:
{
uint8_t v_c_boxed_261_; uint8_t v_res_262_; lean_object* v_r_263_; 
v_c_boxed_261_ = lean_unbox(v_c_260_);
v_res_262_ = l_Lean_isIdFirstAscii(v_c_boxed_261_);
v_r_263_ = lean_box(v_res_262_);
return v_r_263_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii(uint8_t v_c_264_){
_start:
{
uint8_t v___x_275_; uint8_t v___x_276_; 
v___x_275_ = 97;
v___x_276_ = lean_uint8_dec_le(v___x_275_, v_c_264_);
if (v___x_276_ == 0)
{
goto v___jp_270_;
}
else
{
uint8_t v___x_277_; uint8_t v___x_278_; 
v___x_277_ = 122;
v___x_278_ = lean_uint8_dec_le(v_c_264_, v___x_277_);
if (v___x_278_ == 0)
{
goto v___jp_270_;
}
else
{
return v___x_278_;
}
}
v___jp_265_:
{
uint8_t v___x_266_; uint8_t v___x_267_; 
v___x_266_ = 48;
v___x_267_ = lean_uint8_dec_le(v___x_266_, v_c_264_);
if (v___x_267_ == 0)
{
return v___x_267_;
}
else
{
uint8_t v___x_268_; uint8_t v___x_269_; 
v___x_268_ = 57;
v___x_269_ = lean_uint8_dec_le(v_c_264_, v___x_268_);
return v___x_269_;
}
}
v___jp_270_:
{
uint8_t v___x_271_; uint8_t v___x_272_; 
v___x_271_ = 65;
v___x_272_ = lean_uint8_dec_le(v___x_271_, v_c_264_);
if (v___x_272_ == 0)
{
goto v___jp_265_;
}
else
{
uint8_t v___x_273_; uint8_t v___x_274_; 
v___x_273_ = 90;
v___x_274_ = lean_uint8_dec_le(v_c_264_, v___x_273_);
if (v___x_274_ == 0)
{
goto v___jp_265_;
}
else
{
return v___x_274_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii___boxed(lean_object* v_c_279_){
_start:
{
uint8_t v_c_boxed_280_; uint8_t v_res_281_; lean_object* v_r_282_; 
v_c_boxed_280_ = lean_unbox(v_c_279_);
v_res_281_ = l___private_Init_Meta_Defs_0__Lean_isAlphanumAscii(v_c_boxed_280_);
v_r_282_ = lean_box(v_res_281_);
return v_r_282_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdRest(uint32_t v_c_283_){
_start:
{
uint32_t v___x_305_; uint8_t v___x_306_; 
v___x_305_ = 65;
v___x_306_ = lean_uint32_dec_le(v___x_305_, v_c_283_);
if (v___x_306_ == 0)
{
goto v___jp_300_;
}
else
{
uint32_t v___x_307_; uint8_t v___x_308_; 
v___x_307_ = 90;
v___x_308_ = lean_uint32_dec_le(v_c_283_, v___x_307_);
if (v___x_308_ == 0)
{
goto v___jp_300_;
}
else
{
return v___x_308_;
}
}
v___jp_284_:
{
uint32_t v___x_285_; uint8_t v___x_286_; 
v___x_285_ = 95;
v___x_286_ = lean_uint32_dec_eq(v_c_283_, v___x_285_);
if (v___x_286_ == 0)
{
uint32_t v___x_287_; uint8_t v___x_288_; 
v___x_287_ = 39;
v___x_288_ = lean_uint32_dec_eq(v_c_283_, v___x_287_);
if (v___x_288_ == 0)
{
uint32_t v___x_289_; uint8_t v___x_290_; 
v___x_289_ = 33;
v___x_290_ = lean_uint32_dec_eq(v_c_283_, v___x_289_);
if (v___x_290_ == 0)
{
uint32_t v___x_291_; uint8_t v___x_292_; 
v___x_291_ = 63;
v___x_292_ = lean_uint32_dec_eq(v_c_283_, v___x_291_);
if (v___x_292_ == 0)
{
uint8_t v___x_293_; 
v___x_293_ = l_Lean_isLetterLike(v_c_283_);
if (v___x_293_ == 0)
{
uint8_t v___x_294_; 
v___x_294_ = l_Lean_isSubScriptAlnum(v_c_283_);
return v___x_294_;
}
else
{
return v___x_293_;
}
}
else
{
return v___x_292_;
}
}
else
{
return v___x_290_;
}
}
else
{
return v___x_288_;
}
}
else
{
return v___x_286_;
}
}
v___jp_295_:
{
uint32_t v___x_296_; uint8_t v___x_297_; 
v___x_296_ = 48;
v___x_297_ = lean_uint32_dec_le(v___x_296_, v_c_283_);
if (v___x_297_ == 0)
{
goto v___jp_284_;
}
else
{
uint32_t v___x_298_; uint8_t v___x_299_; 
v___x_298_ = 57;
v___x_299_ = lean_uint32_dec_le(v_c_283_, v___x_298_);
if (v___x_299_ == 0)
{
goto v___jp_284_;
}
else
{
return v___x_299_;
}
}
}
v___jp_300_:
{
uint32_t v___x_301_; uint8_t v___x_302_; 
v___x_301_ = 97;
v___x_302_ = lean_uint32_dec_le(v___x_301_, v_c_283_);
if (v___x_302_ == 0)
{
goto v___jp_295_;
}
else
{
uint32_t v___x_303_; uint8_t v___x_304_; 
v___x_303_ = 122;
v___x_304_ = lean_uint32_dec_le(v_c_283_, v___x_303_);
if (v___x_304_ == 0)
{
goto v___jp_295_;
}
else
{
return v___x_304_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdRest___boxed(lean_object* v_c_309_){
_start:
{
uint32_t v_c_boxed_310_; uint8_t v_res_311_; lean_object* v_r_312_; 
v_c_boxed_310_ = lean_unbox_uint32(v_c_309_);
lean_dec(v_c_309_);
v_res_311_ = l_Lean_isIdRest(v_c_boxed_310_);
v_r_312_ = lean_box(v_res_311_);
return v_r_312_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdRestAscii(uint8_t v_c_313_){
_start:
{
uint8_t v___x_333_; uint8_t v___x_334_; 
v___x_333_ = 97;
v___x_334_ = lean_uint8_dec_le(v___x_333_, v_c_313_);
if (v___x_334_ == 0)
{
goto v___jp_328_;
}
else
{
uint8_t v___x_335_; uint8_t v___x_336_; 
v___x_335_ = 122;
v___x_336_ = lean_uint8_dec_le(v_c_313_, v___x_335_);
if (v___x_336_ == 0)
{
goto v___jp_328_;
}
else
{
return v___x_336_;
}
}
v___jp_314_:
{
uint8_t v___x_315_; uint8_t v___x_316_; 
v___x_315_ = 95;
v___x_316_ = lean_uint8_dec_eq(v_c_313_, v___x_315_);
if (v___x_316_ == 0)
{
uint8_t v___x_317_; uint8_t v___x_318_; 
v___x_317_ = 39;
v___x_318_ = lean_uint8_dec_eq(v_c_313_, v___x_317_);
if (v___x_318_ == 0)
{
uint8_t v___x_319_; uint8_t v___x_320_; 
v___x_319_ = 33;
v___x_320_ = lean_uint8_dec_eq(v_c_313_, v___x_319_);
if (v___x_320_ == 0)
{
uint8_t v___x_321_; uint8_t v___x_322_; 
v___x_321_ = 63;
v___x_322_ = lean_uint8_dec_eq(v_c_313_, v___x_321_);
return v___x_322_;
}
else
{
return v___x_320_;
}
}
else
{
return v___x_318_;
}
}
else
{
return v___x_316_;
}
}
v___jp_323_:
{
uint8_t v___x_324_; uint8_t v___x_325_; 
v___x_324_ = 48;
v___x_325_ = lean_uint8_dec_le(v___x_324_, v_c_313_);
if (v___x_325_ == 0)
{
goto v___jp_314_;
}
else
{
uint8_t v___x_326_; uint8_t v___x_327_; 
v___x_326_ = 57;
v___x_327_ = lean_uint8_dec_le(v_c_313_, v___x_326_);
if (v___x_327_ == 0)
{
goto v___jp_314_;
}
else
{
return v___x_327_;
}
}
}
v___jp_328_:
{
uint8_t v___x_329_; uint8_t v___x_330_; 
v___x_329_ = 65;
v___x_330_ = lean_uint8_dec_le(v___x_329_, v_c_313_);
if (v___x_330_ == 0)
{
goto v___jp_323_;
}
else
{
uint8_t v___x_331_; uint8_t v___x_332_; 
v___x_331_ = 90;
v___x_332_ = lean_uint8_dec_le(v_c_313_, v___x_331_);
if (v___x_332_ == 0)
{
goto v___jp_323_;
}
else
{
return v___x_332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isIdRestAscii___boxed(lean_object* v_c_337_){
_start:
{
uint8_t v_c_boxed_338_; uint8_t v_res_339_; lean_object* v_r_340_; 
v_c_boxed_338_ = lean_unbox(v_c_337_);
v_res_339_ = l_Lean_isIdRestAscii(v_c_boxed_338_);
v_r_340_ = lean_box(v_res_339_);
return v_r_340_;
}
}
static uint32_t _init_l_Lean_idBeginEscape(void){
_start:
{
uint32_t v___x_341_; 
v___x_341_ = 171;
return v___x_341_;
}
}
static uint32_t _init_l_Lean_idEndEscape(void){
_start:
{
uint32_t v___x_342_; 
v___x_342_ = 187;
return v___x_342_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdBeginEscape(uint32_t v_c_343_){
_start:
{
uint32_t v___x_344_; uint8_t v___x_345_; 
v___x_344_ = 171;
v___x_345_ = lean_uint32_dec_eq(v_c_343_, v___x_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIdBeginEscape___boxed(lean_object* v_c_346_){
_start:
{
uint32_t v_c_boxed_347_; uint8_t v_res_348_; lean_object* v_r_349_; 
v_c_boxed_347_ = lean_unbox_uint32(v_c_346_);
lean_dec(v_c_346_);
v_res_348_ = l_Lean_isIdBeginEscape(v_c_boxed_347_);
v_r_349_ = lean_box(v_res_348_);
return v_r_349_;
}
}
LEAN_EXPORT uint8_t l_Lean_isIdEndEscape(uint32_t v_c_350_){
_start:
{
uint32_t v___x_351_; uint8_t v___x_352_; 
v___x_351_ = 187;
v___x_352_ = lean_uint32_dec_eq(v_c_350_, v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_isIdEndEscape___boxed(lean_object* v_c_353_){
_start:
{
uint32_t v_c_boxed_354_; uint8_t v_res_355_; lean_object* v_r_356_; 
v_c_boxed_354_ = lean_unbox_uint32(v_c_353_);
lean_dec(v_c_353_);
v_res_355_ = l_Lean_isIdEndEscape(v_c_boxed_354_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getRoot(lean_object* v_x_357_){
_start:
{
if (lean_obj_tag(v_x_357_) == 0)
{
return v_x_357_;
}
else
{
lean_object* v_pre_358_; 
v_pre_358_ = lean_ctor_get(v_x_357_, 0);
if (lean_obj_tag(v_pre_358_) == 0)
{
lean_inc(v_x_357_);
return v_x_357_;
}
else
{
v_x_357_ = v_pre_358_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_getRoot___boxed(lean_object* v_x_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Name_getRoot(v_x_360_);
lean_dec(v_x_360_);
return v_res_361_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_isInaccessibleUserName(lean_object* v_x_363_){
_start:
{
switch(lean_obj_tag(v_x_363_))
{
case 1:
{
lean_object* v_str_364_; uint32_t v___x_365_; uint8_t v___x_366_; 
v_str_364_ = lean_ctor_get(v_x_363_, 1);
lean_inc_ref_n(v_str_364_, 2);
lean_dec_ref_known(v_x_363_, 2);
v___x_365_ = 10013;
v___x_366_ = lean_string_contains(v_str_364_, v___x_365_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; uint8_t v___x_368_; 
v___x_367_ = ((lean_object*)(l_Lean_Name_isInaccessibleUserName___closed__0));
v___x_368_ = lean_string_dec_eq(v_str_364_, v___x_367_);
lean_dec_ref(v_str_364_);
return v___x_368_;
}
else
{
lean_dec_ref(v_str_364_);
return v___x_366_;
}
}
case 2:
{
lean_object* v_pre_369_; 
v_pre_369_ = lean_ctor_get(v_x_363_, 0);
lean_inc(v_pre_369_);
lean_dec_ref_known(v_x_363_, 2);
v_x_363_ = v_pre_369_;
goto _start;
}
default: 
{
uint8_t v___x_371_; 
lean_dec(v_x_363_);
v___x_371_ = 0;
return v___x_371_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_isInaccessibleUserName___boxed(lean_object* v_x_372_){
_start:
{
uint8_t v_res_373_; lean_object* v_r_374_; 
v_res_373_ = l_Lean_Name_isInaccessibleUserName(v_x_372_);
v_r_374_ = lean_box(v_res_373_);
return v_r_374_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(lean_object* v_s_375_, lean_object* v_i_376_){
_start:
{
lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_381_ = lean_string_utf8_byte_size(v_s_375_);
v___x_382_ = lean_nat_dec_lt(v_i_376_, v___x_381_);
if (v___x_382_ == 0)
{
uint8_t v___x_383_; 
lean_dec(v_i_376_);
v___x_383_ = 1;
return v___x_383_;
}
else
{
uint8_t v_c_384_; uint8_t v___x_404_; uint8_t v___x_405_; 
lean_inc(v_i_376_);
v_c_384_ = lean_string_get_byte_fast(v_s_375_, v_i_376_);
v___x_404_ = 97;
v___x_405_ = lean_uint8_dec_le(v___x_404_, v_c_384_);
if (v___x_405_ == 0)
{
goto v___jp_399_;
}
else
{
uint8_t v___x_406_; uint8_t v___x_407_; 
v___x_406_ = 122;
v___x_407_ = lean_uint8_dec_le(v_c_384_, v___x_406_);
if (v___x_407_ == 0)
{
goto v___jp_399_;
}
else
{
goto v___jp_377_;
}
}
v___jp_385_:
{
uint8_t v___x_386_; uint8_t v___x_387_; 
v___x_386_ = 95;
v___x_387_ = lean_uint8_dec_eq(v_c_384_, v___x_386_);
if (v___x_387_ == 0)
{
uint8_t v___x_388_; uint8_t v___x_389_; 
v___x_388_ = 39;
v___x_389_ = lean_uint8_dec_eq(v_c_384_, v___x_388_);
if (v___x_389_ == 0)
{
uint8_t v___x_390_; uint8_t v___x_391_; 
v___x_390_ = 33;
v___x_391_ = lean_uint8_dec_eq(v_c_384_, v___x_390_);
if (v___x_391_ == 0)
{
uint8_t v___x_392_; uint8_t v___x_393_; 
v___x_392_ = 63;
v___x_393_ = lean_uint8_dec_eq(v_c_384_, v___x_392_);
if (v___x_393_ == 0)
{
lean_dec(v_i_376_);
return v___x_393_;
}
else
{
goto v___jp_377_;
}
}
else
{
goto v___jp_377_;
}
}
else
{
goto v___jp_377_;
}
}
else
{
goto v___jp_377_;
}
}
v___jp_394_:
{
uint8_t v___x_395_; uint8_t v___x_396_; 
v___x_395_ = 48;
v___x_396_ = lean_uint8_dec_le(v___x_395_, v_c_384_);
if (v___x_396_ == 0)
{
goto v___jp_385_;
}
else
{
uint8_t v___x_397_; uint8_t v___x_398_; 
v___x_397_ = 57;
v___x_398_ = lean_uint8_dec_le(v_c_384_, v___x_397_);
if (v___x_398_ == 0)
{
goto v___jp_385_;
}
else
{
goto v___jp_377_;
}
}
}
v___jp_399_:
{
uint8_t v___x_400_; uint8_t v___x_401_; 
v___x_400_ = 65;
v___x_401_ = lean_uint8_dec_le(v___x_400_, v_c_384_);
if (v___x_401_ == 0)
{
goto v___jp_394_;
}
else
{
uint8_t v___x_402_; uint8_t v___x_403_; 
v___x_402_ = 90;
v___x_403_ = lean_uint8_dec_le(v_c_384_, v___x_402_);
if (v___x_403_ == 0)
{
goto v___jp_394_;
}
else
{
goto v___jp_377_;
}
}
}
}
v___jp_377_:
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = lean_unsigned_to_nat(1u);
v___x_379_ = lean_nat_add(v_i_376_, v___x_378_);
lean_dec(v_i_376_);
v_i_376_ = v___x_379_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest___boxed(lean_object* v_s_408_, lean_object* v_i_409_){
_start:
{
uint8_t v_res_410_; lean_object* v_r_411_; 
v_res_410_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_408_, v_i_409_);
lean_dec_ref(v_s_408_);
v_r_411_ = lean_box(v_res_410_);
return v_r_411_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg(lean_object* v_s_412_){
_start:
{
lean_object* v___x_416_; uint8_t v_c_417_; uint8_t v___x_426_; uint8_t v___x_427_; 
v___x_416_ = lean_unsigned_to_nat(0u);
v_c_417_ = lean_string_get_byte_fast(v_s_412_, v___x_416_);
v___x_426_ = 97;
v___x_427_ = lean_uint8_dec_le(v___x_426_, v_c_417_);
if (v___x_427_ == 0)
{
goto v___jp_421_;
}
else
{
uint8_t v___x_428_; uint8_t v___x_429_; 
v___x_428_ = 122;
v___x_429_ = lean_uint8_dec_le(v_c_417_, v___x_428_);
if (v___x_429_ == 0)
{
goto v___jp_421_;
}
else
{
goto v___jp_413_;
}
}
v___jp_413_:
{
lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_414_ = lean_unsigned_to_nat(1u);
v___x_415_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_412_, v___x_414_);
return v___x_415_;
}
v___jp_418_:
{
uint8_t v___x_419_; uint8_t v___x_420_; 
v___x_419_ = 95;
v___x_420_ = lean_uint8_dec_eq(v_c_417_, v___x_419_);
if (v___x_420_ == 0)
{
return v___x_420_;
}
else
{
goto v___jp_413_;
}
}
v___jp_421_:
{
uint8_t v___x_422_; uint8_t v___x_423_; 
v___x_422_ = 65;
v___x_423_ = lean_uint8_dec_le(v___x_422_, v_c_417_);
if (v___x_423_ == 0)
{
goto v___jp_418_;
}
else
{
uint8_t v___x_424_; uint8_t v___x_425_; 
v___x_424_ = 90;
v___x_425_ = lean_uint8_dec_le(v_c_417_, v___x_424_);
if (v___x_425_ == 0)
{
goto v___jp_418_;
}
else
{
goto v___jp_413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg___boxed(lean_object* v_s_430_){
_start:
{
uint8_t v_res_431_; lean_object* v_r_432_; 
v_res_431_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___redArg(v_s_430_);
lean_dec_ref(v_s_430_);
v_r_432_ = lean_box(v_res_431_);
return v_r_432_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii(lean_object* v_s_433_, lean_object* v_h_434_){
_start:
{
lean_object* v___x_438_; uint8_t v_c_439_; uint8_t v___x_448_; uint8_t v___x_449_; 
v___x_438_ = lean_unsigned_to_nat(0u);
v_c_439_ = lean_string_get_byte_fast(v_s_433_, v___x_438_);
v___x_448_ = 97;
v___x_449_ = lean_uint8_dec_le(v___x_448_, v_c_439_);
if (v___x_449_ == 0)
{
goto v___jp_443_;
}
else
{
uint8_t v___x_450_; uint8_t v___x_451_; 
v___x_450_ = 122;
v___x_451_ = lean_uint8_dec_le(v_c_439_, v___x_450_);
if (v___x_451_ == 0)
{
goto v___jp_443_;
}
else
{
goto v___jp_435_;
}
}
v___jp_435_:
{
lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_436_ = lean_unsigned_to_nat(1u);
v___x_437_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_433_, v___x_436_);
return v___x_437_;
}
v___jp_440_:
{
uint8_t v___x_441_; uint8_t v___x_442_; 
v___x_441_ = 95;
v___x_442_ = lean_uint8_dec_eq(v_c_439_, v___x_441_);
if (v___x_442_ == 0)
{
return v___x_442_;
}
else
{
goto v___jp_435_;
}
}
v___jp_443_:
{
uint8_t v___x_444_; uint8_t v___x_445_; 
v___x_444_ = 65;
v___x_445_ = lean_uint8_dec_le(v___x_444_, v_c_439_);
if (v___x_445_ == 0)
{
goto v___jp_440_;
}
else
{
uint8_t v___x_446_; uint8_t v___x_447_; 
v___x_446_ = 90;
v___x_447_ = lean_uint8_dec_le(v_c_439_, v___x_446_);
if (v___x_447_ == 0)
{
goto v___jp_440_;
}
else
{
goto v___jp_435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii___boxed(lean_object* v_s_452_, lean_object* v_h_453_){
_start:
{
uint8_t v_res_454_; lean_object* v_r_455_; 
v_res_454_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAscii(v_s_452_, v_h_453_);
lean_dec_ref(v_s_452_);
v_r_455_ = lean_box(v_res_454_);
return v_r_455_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg(lean_object* v_s_457_){
_start:
{
uint32_t v___y_467_; uint32_t v___y_472_; lean_object* v___x_487_; uint8_t v_c_488_; uint8_t v___x_497_; uint8_t v___x_498_; 
v___x_487_ = lean_unsigned_to_nat(0u);
v_c_488_ = lean_string_get_byte_fast(v_s_457_, v___x_487_);
v___x_497_ = 97;
v___x_498_ = lean_uint8_dec_le(v___x_497_, v_c_488_);
if (v___x_498_ == 0)
{
goto v___jp_492_;
}
else
{
uint8_t v___x_499_; uint8_t v___x_500_; 
v___x_499_ = 122;
v___x_500_ = lean_uint8_dec_le(v_c_488_, v___x_499_);
if (v___x_500_ == 0)
{
goto v___jp_492_;
}
else
{
goto v___jp_484_;
}
}
v___jp_458_:
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_459_ = lean_unsigned_to_nat(0u);
v___x_460_ = lean_string_utf8_byte_size(v_s_457_);
v___x_461_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_461_, 0, v_s_457_);
lean_ctor_set(v___x_461_, 1, v___x_459_);
lean_ctor_set(v___x_461_, 2, v___x_460_);
v___x_462_ = lean_unsigned_to_nat(1u);
v___x_463_ = lean_substring_drop(v___x_461_, v___x_462_);
v___x_464_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0));
v___x_465_ = lean_substring_all(v___x_463_, v___x_464_);
return v___x_465_;
}
v___jp_466_:
{
uint32_t v___x_468_; uint8_t v___x_469_; 
v___x_468_ = 95;
v___x_469_ = lean_uint32_dec_eq(v___y_467_, v___x_468_);
if (v___x_469_ == 0)
{
uint8_t v___x_470_; 
v___x_470_ = l_Lean_isLetterLike(v___y_467_);
if (v___x_470_ == 0)
{
lean_dec_ref(v_s_457_);
return v___x_470_;
}
else
{
goto v___jp_458_;
}
}
else
{
goto v___jp_458_;
}
}
v___jp_471_:
{
uint32_t v___x_473_; uint8_t v___x_474_; 
v___x_473_ = 97;
v___x_474_ = lean_uint32_dec_le(v___x_473_, v___y_472_);
if (v___x_474_ == 0)
{
v___y_467_ = v___y_472_;
goto v___jp_466_;
}
else
{
uint32_t v___x_475_; uint8_t v___x_476_; 
v___x_475_ = 122;
v___x_476_ = lean_uint32_dec_le(v___y_472_, v___x_475_);
if (v___x_476_ == 0)
{
v___y_467_ = v___y_472_;
goto v___jp_466_;
}
else
{
goto v___jp_458_;
}
}
}
v___jp_477_:
{
lean_object* v___x_478_; uint32_t v___x_479_; uint32_t v___x_480_; uint8_t v___x_481_; 
v___x_478_ = lean_unsigned_to_nat(0u);
v___x_479_ = lean_string_utf8_get(v_s_457_, v___x_478_);
v___x_480_ = 65;
v___x_481_ = lean_uint32_dec_le(v___x_480_, v___x_479_);
if (v___x_481_ == 0)
{
v___y_472_ = v___x_479_;
goto v___jp_471_;
}
else
{
uint32_t v___x_482_; uint8_t v___x_483_; 
v___x_482_ = 90;
v___x_483_ = lean_uint32_dec_le(v___x_479_, v___x_482_);
if (v___x_483_ == 0)
{
v___y_472_ = v___x_479_;
goto v___jp_471_;
}
else
{
goto v___jp_458_;
}
}
}
v___jp_484_:
{
lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_485_ = lean_unsigned_to_nat(1u);
v___x_486_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_457_, v___x_485_);
if (v___x_486_ == 0)
{
goto v___jp_477_;
}
else
{
lean_dec_ref(v_s_457_);
return v___x_486_;
}
}
v___jp_489_:
{
uint8_t v___x_490_; uint8_t v___x_491_; 
v___x_490_ = 95;
v___x_491_ = lean_uint8_dec_eq(v_c_488_, v___x_490_);
if (v___x_491_ == 0)
{
goto v___jp_477_;
}
else
{
goto v___jp_484_;
}
}
v___jp_492_:
{
uint8_t v___x_493_; uint8_t v___x_494_; 
v___x_493_ = 65;
v___x_494_ = lean_uint8_dec_le(v___x_493_, v_c_488_);
if (v___x_494_ == 0)
{
goto v___jp_489_;
}
else
{
uint8_t v___x_495_; uint8_t v___x_496_; 
v___x_495_ = 90;
v___x_496_ = lean_uint8_dec_le(v_c_488_, v___x_495_);
if (v___x_496_ == 0)
{
goto v___jp_489_;
}
else
{
goto v___jp_484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___boxed(lean_object* v_s_501_){
_start:
{
uint8_t v_res_502_; lean_object* v_r_503_; 
v_res_502_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg(v_s_501_);
v_r_503_ = lean_box(v_res_502_);
return v_r_503_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape(lean_object* v_s_504_, lean_object* v_h_505_){
_start:
{
uint32_t v___y_515_; uint32_t v___y_520_; lean_object* v___x_535_; uint8_t v_c_536_; uint8_t v___x_545_; uint8_t v___x_546_; 
v___x_535_ = lean_unsigned_to_nat(0u);
v_c_536_ = lean_string_get_byte_fast(v_s_504_, v___x_535_);
v___x_545_ = 97;
v___x_546_ = lean_uint8_dec_le(v___x_545_, v_c_536_);
if (v___x_546_ == 0)
{
goto v___jp_540_;
}
else
{
uint8_t v___x_547_; uint8_t v___x_548_; 
v___x_547_ = 122;
v___x_548_ = lean_uint8_dec_le(v_c_536_, v___x_547_);
if (v___x_548_ == 0)
{
goto v___jp_540_;
}
else
{
goto v___jp_532_;
}
}
v___jp_506_:
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_507_ = lean_unsigned_to_nat(0u);
v___x_508_ = lean_string_utf8_byte_size(v_s_504_);
v___x_509_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_509_, 0, v_s_504_);
lean_ctor_set(v___x_509_, 1, v___x_507_);
lean_ctor_set(v___x_509_, 2, v___x_508_);
v___x_510_ = lean_unsigned_to_nat(1u);
v___x_511_ = lean_substring_drop(v___x_509_, v___x_510_);
v___x_512_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0));
v___x_513_ = lean_substring_all(v___x_511_, v___x_512_);
return v___x_513_;
}
v___jp_514_:
{
uint32_t v___x_516_; uint8_t v___x_517_; 
v___x_516_ = 95;
v___x_517_ = lean_uint32_dec_eq(v___y_515_, v___x_516_);
if (v___x_517_ == 0)
{
uint8_t v___x_518_; 
v___x_518_ = l_Lean_isLetterLike(v___y_515_);
if (v___x_518_ == 0)
{
lean_dec_ref(v_s_504_);
return v___x_518_;
}
else
{
goto v___jp_506_;
}
}
else
{
goto v___jp_506_;
}
}
v___jp_519_:
{
uint32_t v___x_521_; uint8_t v___x_522_; 
v___x_521_ = 97;
v___x_522_ = lean_uint32_dec_le(v___x_521_, v___y_520_);
if (v___x_522_ == 0)
{
v___y_515_ = v___y_520_;
goto v___jp_514_;
}
else
{
uint32_t v___x_523_; uint8_t v___x_524_; 
v___x_523_ = 122;
v___x_524_ = lean_uint32_dec_le(v___y_520_, v___x_523_);
if (v___x_524_ == 0)
{
v___y_515_ = v___y_520_;
goto v___jp_514_;
}
else
{
goto v___jp_506_;
}
}
}
v___jp_525_:
{
lean_object* v___x_526_; uint32_t v___x_527_; uint32_t v___x_528_; uint8_t v___x_529_; 
v___x_526_ = lean_unsigned_to_nat(0u);
v___x_527_ = lean_string_utf8_get(v_s_504_, v___x_526_);
v___x_528_ = 65;
v___x_529_ = lean_uint32_dec_le(v___x_528_, v___x_527_);
if (v___x_529_ == 0)
{
v___y_520_ = v___x_527_;
goto v___jp_519_;
}
else
{
uint32_t v___x_530_; uint8_t v___x_531_; 
v___x_530_ = 90;
v___x_531_ = lean_uint32_dec_le(v___x_527_, v___x_530_);
if (v___x_531_ == 0)
{
v___y_520_ = v___x_527_;
goto v___jp_519_;
}
else
{
goto v___jp_506_;
}
}
}
v___jp_532_:
{
lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_533_ = lean_unsigned_to_nat(1u);
v___x_534_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_504_, v___x_533_);
if (v___x_534_ == 0)
{
goto v___jp_525_;
}
else
{
lean_dec_ref(v_s_504_);
return v___x_534_;
}
}
v___jp_537_:
{
uint8_t v___x_538_; uint8_t v___x_539_; 
v___x_538_ = 95;
v___x_539_ = lean_uint8_dec_eq(v_c_536_, v___x_538_);
if (v___x_539_ == 0)
{
goto v___jp_525_;
}
else
{
goto v___jp_532_;
}
}
v___jp_540_:
{
uint8_t v___x_541_; uint8_t v___x_542_; 
v___x_541_ = 65;
v___x_542_ = lean_uint8_dec_le(v___x_541_, v_c_536_);
if (v___x_542_ == 0)
{
goto v___jp_537_;
}
else
{
uint8_t v___x_543_; uint8_t v___x_544_; 
v___x_543_ = 90;
v___x_544_ = lean_uint8_dec_le(v_c_536_, v___x_543_);
if (v___x_544_ == 0)
{
goto v___jp_537_;
}
else
{
goto v___jp_532_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___boxed(lean_object* v_s_549_, lean_object* v_h_550_){
_start:
{
uint8_t v_res_551_; lean_object* v_r_552_; 
v_res_551_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape(v_s_549_, v_h_550_);
v_r_552_ = lean_box(v_res_551_);
return v_r_552_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape(lean_object* v_s_555_){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_556_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_557_ = lean_string_append(v___x_556_, v_s_555_);
v___x_558_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_559_ = lean_string_append(v___x_557_, v___x_558_);
return v___x_559_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_escape___boxed(lean_object* v_s_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l___private_Init_Meta_Defs_0__Lean_Name_escape(v_s_560_);
lean_dec_ref(v_s_560_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart(lean_object* v_s_563_, uint8_t v_force_564_){
_start:
{
uint32_t v___y_584_; uint32_t v___y_589_; lean_object* v___x_605_; lean_object* v___x_606_; uint8_t v___x_607_; 
v___x_605_ = lean_unsigned_to_nat(0u);
v___x_606_ = lean_string_utf8_byte_size(v_s_563_);
v___x_607_ = lean_nat_dec_lt(v___x_605_, v___x_606_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_608_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_609_ = lean_string_append(v___x_608_, v_s_563_);
lean_dec_ref(v_s_563_);
v___x_610_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_611_ = lean_string_append(v___x_609_, v___x_610_);
v___x_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
return v___x_612_;
}
else
{
if (v_force_564_ == 0)
{
uint8_t v_c_613_; uint8_t v___x_622_; uint8_t v___x_623_; 
v_c_613_ = lean_string_get_byte_fast(v_s_563_, v___x_605_);
v___x_622_ = 97;
v___x_623_ = lean_uint8_dec_le(v___x_622_, v_c_613_);
if (v___x_623_ == 0)
{
goto v___jp_617_;
}
else
{
uint8_t v___x_624_; uint8_t v___x_625_; 
v___x_624_ = 122;
v___x_625_ = lean_uint8_dec_le(v_c_613_, v___x_624_);
if (v___x_625_ == 0)
{
goto v___jp_617_;
}
else
{
goto v___jp_601_;
}
}
v___jp_614_:
{
uint8_t v___x_615_; uint8_t v___x_616_; 
v___x_615_ = 95;
v___x_616_ = lean_uint8_dec_eq(v_c_613_, v___x_615_);
if (v___x_616_ == 0)
{
goto v___jp_594_;
}
else
{
goto v___jp_601_;
}
}
v___jp_617_:
{
uint8_t v___x_618_; uint8_t v___x_619_; 
v___x_618_ = 65;
v___x_619_ = lean_uint8_dec_le(v___x_618_, v_c_613_);
if (v___x_619_ == 0)
{
goto v___jp_614_;
}
else
{
uint8_t v___x_620_; uint8_t v___x_621_; 
v___x_620_ = 90;
v___x_621_ = lean_uint8_dec_le(v_c_613_, v___x_620_);
if (v___x_621_ == 0)
{
goto v___jp_614_;
}
else
{
goto v___jp_601_;
}
}
}
}
else
{
goto v___jp_565_;
}
}
v___jp_565_:
{
lean_object* v___x_566_; uint8_t v___x_567_; 
v___x_566_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___closed__0));
lean_inc_ref(v_s_563_);
v___x_567_ = lean_string_any(v_s_563_, v___x_566_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_568_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_569_ = lean_string_append(v___x_568_, v_s_563_);
lean_dec_ref(v_s_563_);
v___x_570_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_571_ = lean_string_append(v___x_569_, v___x_570_);
v___x_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
return v___x_572_;
}
else
{
lean_object* v___x_573_; 
lean_dec_ref(v_s_563_);
v___x_573_ = lean_box(0);
return v___x_573_;
}
}
v___jp_574_:
{
lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_575_ = lean_unsigned_to_nat(0u);
v___x_576_ = lean_string_utf8_byte_size(v_s_563_);
lean_inc_ref(v_s_563_);
v___x_577_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_577_, 0, v_s_563_);
lean_ctor_set(v___x_577_, 1, v___x_575_);
lean_ctor_set(v___x_577_, 2, v___x_576_);
v___x_578_ = lean_unsigned_to_nat(1u);
v___x_579_ = lean_substring_drop(v___x_577_, v___x_578_);
v___x_580_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscape___redArg___closed__0));
v___x_581_ = lean_substring_all(v___x_579_, v___x_580_);
if (v___x_581_ == 0)
{
goto v___jp_565_;
}
else
{
lean_object* v___x_582_; 
v___x_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_582_, 0, v_s_563_);
return v___x_582_;
}
}
v___jp_583_:
{
uint32_t v___x_585_; uint8_t v___x_586_; 
v___x_585_ = 95;
v___x_586_ = lean_uint32_dec_eq(v___y_584_, v___x_585_);
if (v___x_586_ == 0)
{
uint8_t v___x_587_; 
v___x_587_ = l_Lean_isLetterLike(v___y_584_);
if (v___x_587_ == 0)
{
goto v___jp_565_;
}
else
{
goto v___jp_574_;
}
}
else
{
goto v___jp_574_;
}
}
v___jp_588_:
{
uint32_t v___x_590_; uint8_t v___x_591_; 
v___x_590_ = 97;
v___x_591_ = lean_uint32_dec_le(v___x_590_, v___y_589_);
if (v___x_591_ == 0)
{
v___y_584_ = v___y_589_;
goto v___jp_583_;
}
else
{
uint32_t v___x_592_; uint8_t v___x_593_; 
v___x_592_ = 122;
v___x_593_ = lean_uint32_dec_le(v___y_589_, v___x_592_);
if (v___x_593_ == 0)
{
v___y_584_ = v___y_589_;
goto v___jp_583_;
}
else
{
goto v___jp_574_;
}
}
}
v___jp_594_:
{
lean_object* v___x_595_; uint32_t v___x_596_; uint32_t v___x_597_; uint8_t v___x_598_; 
v___x_595_ = lean_unsigned_to_nat(0u);
v___x_596_ = lean_string_utf8_get(v_s_563_, v___x_595_);
v___x_597_ = 65;
v___x_598_ = lean_uint32_dec_le(v___x_597_, v___x_596_);
if (v___x_598_ == 0)
{
v___y_589_ = v___x_596_;
goto v___jp_588_;
}
else
{
uint32_t v___x_599_; uint8_t v___x_600_; 
v___x_599_ = 90;
v___x_600_ = lean_uint32_dec_le(v___x_596_, v___x_599_);
if (v___x_600_ == 0)
{
v___y_589_ = v___x_596_;
goto v___jp_588_;
}
else
{
goto v___jp_574_;
}
}
}
v___jp_601_:
{
lean_object* v___x_602_; uint8_t v___x_603_; 
v___x_602_ = lean_unsigned_to_nat(1u);
v___x_603_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_563_, v___x_602_);
if (v___x_603_ == 0)
{
goto v___jp_594_;
}
else
{
lean_object* v___x_604_; 
v___x_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_604_, 0, v_s_563_);
return v___x_604_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart___boxed(lean_object* v_s_626_, lean_object* v_force_627_){
_start:
{
uint8_t v_force_boxed_628_; lean_object* v_res_629_; 
v_force_boxed_628_ = lean_unbox(v_force_627_);
v_res_629_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_escapePart(v_s_626_, v_force_boxed_628_);
return v_res_629_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0(uint32_t v___y_630_){
_start:
{
uint32_t v___x_631_; uint8_t v___x_632_; 
v___x_631_ = 187;
v___x_632_ = lean_uint32_dec_eq(v___y_630_, v___x_631_);
return v___x_632_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0___boxed(lean_object* v___y_633_){
_start:
{
uint32_t v___y_220__boxed_634_; uint8_t v_res_635_; lean_object* v_r_636_; 
v___y_220__boxed_634_ = lean_unbox_uint32(v___y_633_);
lean_dec(v___y_633_);
v_res_635_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__0(v___y_220__boxed_634_);
v_r_636_ = lean_box(v_res_635_);
return v_r_636_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1(uint32_t v___y_637_){
_start:
{
uint32_t v___x_659_; uint8_t v___x_660_; 
v___x_659_ = 65;
v___x_660_ = lean_uint32_dec_le(v___x_659_, v___y_637_);
if (v___x_660_ == 0)
{
goto v___jp_654_;
}
else
{
uint32_t v___x_661_; uint8_t v___x_662_; 
v___x_661_ = 90;
v___x_662_ = lean_uint32_dec_le(v___y_637_, v___x_661_);
if (v___x_662_ == 0)
{
goto v___jp_654_;
}
else
{
return v___x_662_;
}
}
v___jp_638_:
{
uint32_t v___x_639_; uint8_t v___x_640_; 
v___x_639_ = 95;
v___x_640_ = lean_uint32_dec_eq(v___y_637_, v___x_639_);
if (v___x_640_ == 0)
{
uint32_t v___x_641_; uint8_t v___x_642_; 
v___x_641_ = 39;
v___x_642_ = lean_uint32_dec_eq(v___y_637_, v___x_641_);
if (v___x_642_ == 0)
{
uint32_t v___x_643_; uint8_t v___x_644_; 
v___x_643_ = 33;
v___x_644_ = lean_uint32_dec_eq(v___y_637_, v___x_643_);
if (v___x_644_ == 0)
{
uint32_t v___x_645_; uint8_t v___x_646_; 
v___x_645_ = 63;
v___x_646_ = lean_uint32_dec_eq(v___y_637_, v___x_645_);
if (v___x_646_ == 0)
{
uint8_t v___x_647_; 
v___x_647_ = l_Lean_isLetterLike(v___y_637_);
if (v___x_647_ == 0)
{
uint8_t v___x_648_; 
v___x_648_ = l_Lean_isSubScriptAlnum(v___y_637_);
return v___x_648_;
}
else
{
return v___x_647_;
}
}
else
{
return v___x_646_;
}
}
else
{
return v___x_644_;
}
}
else
{
return v___x_642_;
}
}
else
{
return v___x_640_;
}
}
v___jp_649_:
{
uint32_t v___x_650_; uint8_t v___x_651_; 
v___x_650_ = 48;
v___x_651_ = lean_uint32_dec_le(v___x_650_, v___y_637_);
if (v___x_651_ == 0)
{
goto v___jp_638_;
}
else
{
uint32_t v___x_652_; uint8_t v___x_653_; 
v___x_652_ = 57;
v___x_653_ = lean_uint32_dec_le(v___y_637_, v___x_652_);
if (v___x_653_ == 0)
{
goto v___jp_638_;
}
else
{
return v___x_653_;
}
}
}
v___jp_654_:
{
uint32_t v___x_655_; uint8_t v___x_656_; 
v___x_655_ = 97;
v___x_656_ = lean_uint32_dec_le(v___x_655_, v___y_637_);
if (v___x_656_ == 0)
{
goto v___jp_649_;
}
else
{
uint32_t v___x_657_; uint8_t v___x_658_; 
v___x_657_ = 122;
v___x_658_ = lean_uint32_dec_le(v___y_637_, v___x_657_);
if (v___x_658_ == 0)
{
goto v___jp_649_;
}
else
{
return v___x_658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1___boxed(lean_object* v___y_663_){
_start:
{
uint32_t v___y_227__boxed_664_; uint8_t v_res_665_; lean_object* v_r_666_; 
v___y_227__boxed_664_ = lean_unbox_uint32(v___y_663_);
lean_dec(v___y_663_);
v_res_665_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___lam__1(v___y_227__boxed_664_);
v_r_666_ = lean_box(v_res_665_);
return v_r_666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(uint8_t v_escape_669_, lean_object* v_s_670_, uint8_t v_force_671_){
_start:
{
if (v_escape_669_ == 0)
{
return v_s_670_;
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_672_ = lean_unsigned_to_nat(0u);
v___x_673_ = lean_string_utf8_byte_size(v_s_670_);
v___x_674_ = lean_nat_dec_lt(v___x_672_, v___x_673_);
if (v___x_674_ == 0)
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_675_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_676_ = lean_string_append(v___x_675_, v_s_670_);
lean_dec_ref(v_s_670_);
v___x_677_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_678_ = lean_string_append(v___x_676_, v___x_677_);
return v___x_678_;
}
else
{
lean_object* v___f_679_; 
v___f_679_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0));
if (v_force_671_ == 0)
{
lean_object* v___f_686_; uint32_t v___y_693_; uint32_t v___y_698_; uint8_t v_c_712_; uint8_t v___x_721_; uint8_t v___x_722_; 
v___f_686_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1));
v_c_712_ = lean_string_get_byte_fast(v_s_670_, v___x_672_);
v___x_721_ = 97;
v___x_722_ = lean_uint8_dec_le(v___x_721_, v_c_712_);
if (v___x_722_ == 0)
{
goto v___jp_716_;
}
else
{
uint8_t v___x_723_; uint8_t v___x_724_; 
v___x_723_ = 122;
v___x_724_ = lean_uint8_dec_le(v_c_712_, v___x_723_);
if (v___x_724_ == 0)
{
goto v___jp_716_;
}
else
{
goto v___jp_709_;
}
}
v___jp_687_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; uint8_t v___x_691_; 
lean_inc_ref(v_s_670_);
v___x_688_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_688_, 0, v_s_670_);
lean_ctor_set(v___x_688_, 1, v___x_672_);
lean_ctor_set(v___x_688_, 2, v___x_673_);
v___x_689_ = lean_unsigned_to_nat(1u);
v___x_690_ = lean_substring_drop(v___x_688_, v___x_689_);
v___x_691_ = lean_substring_all(v___x_690_, v___f_686_);
if (v___x_691_ == 0)
{
goto v___jp_680_;
}
else
{
return v_s_670_;
}
}
v___jp_692_:
{
uint32_t v___x_694_; uint8_t v___x_695_; 
v___x_694_ = 95;
v___x_695_ = lean_uint32_dec_eq(v___y_693_, v___x_694_);
if (v___x_695_ == 0)
{
uint8_t v___x_696_; 
v___x_696_ = l_Lean_isLetterLike(v___y_693_);
if (v___x_696_ == 0)
{
goto v___jp_680_;
}
else
{
goto v___jp_687_;
}
}
else
{
goto v___jp_687_;
}
}
v___jp_697_:
{
uint32_t v___x_699_; uint8_t v___x_700_; 
v___x_699_ = 97;
v___x_700_ = lean_uint32_dec_le(v___x_699_, v___y_698_);
if (v___x_700_ == 0)
{
v___y_693_ = v___y_698_;
goto v___jp_692_;
}
else
{
uint32_t v___x_701_; uint8_t v___x_702_; 
v___x_701_ = 122;
v___x_702_ = lean_uint32_dec_le(v___y_698_, v___x_701_);
if (v___x_702_ == 0)
{
v___y_693_ = v___y_698_;
goto v___jp_692_;
}
else
{
goto v___jp_687_;
}
}
}
v___jp_703_:
{
uint32_t v___x_704_; uint32_t v___x_705_; uint8_t v___x_706_; 
v___x_704_ = lean_string_utf8_get(v_s_670_, v___x_672_);
v___x_705_ = 65;
v___x_706_ = lean_uint32_dec_le(v___x_705_, v___x_704_);
if (v___x_706_ == 0)
{
v___y_698_ = v___x_704_;
goto v___jp_697_;
}
else
{
uint32_t v___x_707_; uint8_t v___x_708_; 
v___x_707_ = 90;
v___x_708_ = lean_uint32_dec_le(v___x_704_, v___x_707_);
if (v___x_708_ == 0)
{
v___y_698_ = v___x_704_;
goto v___jp_697_;
}
else
{
goto v___jp_687_;
}
}
}
v___jp_709_:
{
lean_object* v___x_710_; uint8_t v___x_711_; 
v___x_710_ = lean_unsigned_to_nat(1u);
v___x_711_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_s_670_, v___x_710_);
if (v___x_711_ == 0)
{
goto v___jp_703_;
}
else
{
return v_s_670_;
}
}
v___jp_713_:
{
uint8_t v___x_714_; uint8_t v___x_715_; 
v___x_714_ = 95;
v___x_715_ = lean_uint8_dec_eq(v_c_712_, v___x_714_);
if (v___x_715_ == 0)
{
goto v___jp_703_;
}
else
{
goto v___jp_709_;
}
}
v___jp_716_:
{
uint8_t v___x_717_; uint8_t v___x_718_; 
v___x_717_ = 65;
v___x_718_ = lean_uint8_dec_le(v___x_717_, v_c_712_);
if (v___x_718_ == 0)
{
goto v___jp_713_;
}
else
{
uint8_t v___x_719_; uint8_t v___x_720_; 
v___x_719_ = 90;
v___x_720_ = lean_uint8_dec_le(v_c_712_, v___x_719_);
if (v___x_720_ == 0)
{
goto v___jp_713_;
}
else
{
goto v___jp_709_;
}
}
}
}
else
{
goto v___jp_680_;
}
v___jp_680_:
{
uint8_t v___x_681_; 
lean_inc_ref(v_s_670_);
v___x_681_ = lean_string_any(v_s_670_, v___f_679_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_682_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_683_ = lean_string_append(v___x_682_, v_s_670_);
lean_dec_ref(v_s_670_);
v___x_684_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_685_ = lean_string_append(v___x_683_, v___x_684_);
return v___x_685_;
}
else
{
return v_s_670_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___boxed(lean_object* v_escape_725_, lean_object* v_s_726_, lean_object* v_force_727_){
_start:
{
uint8_t v_escape_boxed_728_; uint8_t v_force_boxed_729_; lean_object* v_res_730_; 
v_escape_boxed_728_ = lean_unbox(v_escape_725_);
v_force_boxed_729_ = lean_unbox(v_force_727_);
v_res_730_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_boxed_728_, v_s_726_, v_force_boxed_729_);
return v_res_730_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0(lean_object* v_x_731_){
_start:
{
uint8_t v___x_732_; 
v___x_732_ = 0;
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0___boxed(lean_object* v_x_733_){
_start:
{
uint8_t v_res_734_; lean_object* v_r_735_; 
v_res_734_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___lam__0(v_x_733_);
lean_dec_ref(v_x_733_);
v_r_735_ = lean_box(v_res_734_);
return v_r_735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(lean_object* v_sep_738_, uint8_t v_escape_739_, lean_object* v_n_740_, lean_object* v_isToken_741_){
_start:
{
switch(lean_obj_tag(v_n_740_))
{
case 0:
{
lean_object* v___x_742_; 
lean_dec_ref(v_isToken_741_);
v___x_742_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0));
return v___x_742_;
}
case 1:
{
lean_object* v_pre_743_; 
v_pre_743_ = lean_ctor_get(v_n_740_, 0);
if (lean_obj_tag(v_pre_743_) == 0)
{
lean_object* v_str_744_; lean_object* v___x_745_; uint8_t v___x_746_; lean_object* v___x_747_; 
v_str_744_ = lean_ctor_get(v_n_740_, 1);
lean_inc_ref_n(v_str_744_, 2);
lean_dec_ref_known(v_n_740_, 2);
v___x_745_ = lean_apply_1(v_isToken_741_, v_str_744_);
v___x_746_ = lean_unbox(v___x_745_);
v___x_747_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_739_, v_str_744_, v___x_746_);
return v___x_747_;
}
else
{
lean_object* v_str_748_; lean_object* v_r_749_; lean_object* v___x_750_; uint8_t v___x_751_; lean_object* v___x_752_; lean_object* v_r_x27_753_; 
lean_inc(v_pre_743_);
v_str_748_ = lean_ctor_get(v_n_740_, 1);
lean_inc_ref_n(v_str_748_, 2);
lean_dec_ref_known(v_n_740_, 2);
lean_inc_ref(v_isToken_741_);
v_r_749_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v_sep_738_, v_escape_739_, v_pre_743_, v_isToken_741_);
v___x_750_ = lean_string_append(v_r_749_, v_sep_738_);
v___x_751_ = 0;
v___x_752_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_739_, v_str_748_, v___x_751_);
lean_inc_ref(v___x_750_);
v_r_x27_753_ = lean_string_append(v___x_750_, v___x_752_);
lean_dec_ref(v___x_752_);
if (v_escape_739_ == 0)
{
lean_dec_ref(v___x_750_);
lean_dec_ref(v_str_748_);
lean_dec_ref(v_isToken_741_);
return v_r_x27_753_;
}
else
{
lean_object* v___x_754_; uint8_t v___x_755_; 
lean_inc_ref(v_r_x27_753_);
v___x_754_ = lean_apply_1(v_isToken_741_, v_r_x27_753_);
v___x_755_ = lean_unbox(v___x_754_);
if (v___x_755_ == 0)
{
lean_dec_ref(v___x_750_);
lean_dec_ref(v_str_748_);
return v_r_x27_753_;
}
else
{
lean_object* v___x_756_; lean_object* v___x_757_; 
lean_dec_ref(v_r_x27_753_);
v___x_756_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_739_, v_str_748_, v_escape_739_);
v___x_757_ = lean_string_append(v___x_750_, v___x_756_);
lean_dec_ref(v___x_756_);
return v___x_757_;
}
}
}
}
default: 
{
lean_object* v_pre_758_; 
lean_dec_ref(v_isToken_741_);
v_pre_758_ = lean_ctor_get(v_n_740_, 0);
if (lean_obj_tag(v_pre_758_) == 0)
{
lean_object* v_i_759_; lean_object* v___x_760_; 
v_i_759_ = lean_ctor_get(v_n_740_, 1);
lean_inc(v_i_759_);
lean_dec_ref_known(v_n_740_, 2);
v___x_760_ = l_Nat_reprFast(v_i_759_);
return v___x_760_;
}
else
{
lean_object* v_i_761_; lean_object* v___f_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
lean_inc(v_pre_758_);
v_i_761_ = lean_ctor_get(v_n_740_, 1);
lean_inc(v_i_761_);
lean_dec_ref_known(v_n_740_, 2);
v___f_762_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__1));
v___x_763_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v_sep_738_, v_escape_739_, v_pre_758_, v___f_762_);
v___x_764_ = lean_string_append(v___x_763_, v_sep_738_);
v___x_765_ = l_Nat_reprFast(v_i_761_);
v___x_766_ = lean_string_append(v___x_764_, v___x_765_);
lean_dec_ref(v___x_765_);
return v___x_766_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___boxed(lean_object* v_sep_767_, lean_object* v_escape_768_, lean_object* v_n_769_, lean_object* v_isToken_770_){
_start:
{
uint8_t v_escape_boxed_771_; lean_object* v_res_772_; 
v_escape_boxed_771_ = lean_unbox(v_escape_768_);
v_res_772_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v_sep_767_, v_escape_boxed_771_, v_n_769_, v_isToken_770_);
lean_dec_ref(v_sep_767_);
return v_res_772_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(lean_object* v_n_778_){
_start:
{
lean_object* v___x_779_; uint8_t v___x_780_; uint8_t v___x_781_; 
v___x_779_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__1));
v___x_780_ = lean_name_eq(v_n_778_, v___x_779_);
v___x_781_ = 1;
if (v___x_780_ == 0)
{
lean_object* v___x_782_; 
v___x_782_ = l_Lean_Name_getRoot(v_n_778_);
if (lean_obj_tag(v___x_782_) == 1)
{
lean_object* v_str_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v_str_783_ = lean_ctor_get(v___x_782_, 1);
lean_inc_ref_n(v_str_783_, 2);
lean_dec_ref_known(v___x_782_, 2);
v___x_784_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__2));
v___x_785_ = lean_string_isprefixof(v___x_784_, v_str_783_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; uint8_t v___x_787_; 
v___x_786_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__3));
v___x_787_ = lean_string_isprefixof(v___x_786_, v_str_783_);
return v___x_787_;
}
else
{
lean_dec_ref(v_str_783_);
return v___x_781_;
}
}
else
{
lean_dec(v___x_782_);
return v___x_780_;
}
}
else
{
return v___x_781_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___boxed(lean_object* v_n_788_){
_start:
{
uint8_t v_res_789_; lean_object* v_r_790_; 
v_res_789_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(v_n_788_);
lean_dec(v_n_788_);
v_r_790_ = lean_box(v_res_789_);
return v_r_790_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken(lean_object* v_n_791_, uint8_t v_escape_792_, lean_object* v_isToken_793_){
_start:
{
lean_object* v___x_794_; 
v___x_794_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
if (v_escape_792_ == 0)
{
lean_object* v___x_795_; 
v___x_795_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_794_, v_escape_792_, v_n_791_, v_isToken_793_);
return v___x_795_;
}
else
{
uint8_t v___x_796_; 
lean_inc(v_n_791_);
v___x_796_ = l_Lean_Name_isInaccessibleUserName(v_n_791_);
if (v___x_796_ == 0)
{
uint8_t v___x_797_; 
v___x_797_ = l_Lean_Name_hasMacroScopes(v_n_791_);
if (v___x_797_ == 0)
{
uint8_t v___x_798_; 
v___x_798_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(v_n_791_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; 
v___x_799_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_794_, v_escape_792_, v_n_791_, v_isToken_793_);
return v___x_799_;
}
else
{
lean_object* v___x_800_; 
v___x_800_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_794_, v___x_797_, v_n_791_, v_isToken_793_);
return v___x_800_;
}
}
else
{
lean_object* v___x_801_; 
v___x_801_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_794_, v___x_796_, v_n_791_, v_isToken_793_);
return v___x_801_;
}
}
else
{
uint8_t v___x_802_; lean_object* v___x_803_; 
v___x_802_ = 0;
v___x_803_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep(v___x_794_, v___x_802_, v_n_791_, v_isToken_793_);
return v___x_803_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___boxed(lean_object* v_n_804_, lean_object* v_escape_805_, lean_object* v_isToken_806_){
_start:
{
uint8_t v_escape_boxed_807_; lean_object* v_res_808_; 
v_escape_boxed_807_ = lean_unbox(v_escape_805_);
v_res_808_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken(v_n_804_, v_escape_boxed_807_, v_isToken_806_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(lean_object* v_sep_809_, uint8_t v_escape_810_, lean_object* v_n_811_){
_start:
{
switch(lean_obj_tag(v_n_811_))
{
case 0:
{
lean_object* v___x_812_; 
v___x_812_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___closed__0));
return v___x_812_;
}
case 1:
{
lean_object* v_pre_813_; 
v_pre_813_ = lean_ctor_get(v_n_811_, 0);
if (lean_obj_tag(v_pre_813_) == 0)
{
lean_object* v_str_814_; uint8_t v___x_815_; lean_object* v___x_816_; 
v_str_814_ = lean_ctor_get(v_n_811_, 1);
lean_inc_ref(v_str_814_);
lean_dec_ref_known(v_n_811_, 2);
v___x_815_ = 0;
v___x_816_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_810_, v_str_814_, v___x_815_);
return v___x_816_;
}
else
{
lean_object* v_str_817_; lean_object* v_r_818_; lean_object* v___x_819_; uint8_t v___x_820_; lean_object* v___x_821_; lean_object* v_r_x27_822_; 
lean_inc(v_pre_813_);
v_str_817_ = lean_ctor_get(v_n_811_, 1);
lean_inc_ref(v_str_817_);
lean_dec_ref_known(v_n_811_, 2);
v_r_818_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v_sep_809_, v_escape_810_, v_pre_813_);
v___x_819_ = lean_string_append(v_r_818_, v_sep_809_);
v___x_820_ = 0;
v___x_821_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape(v_escape_810_, v_str_817_, v___x_820_);
v_r_x27_822_ = lean_string_append(v___x_819_, v___x_821_);
lean_dec_ref(v___x_821_);
return v_r_x27_822_;
}
}
default: 
{
lean_object* v_pre_823_; 
v_pre_823_ = lean_ctor_get(v_n_811_, 0);
if (lean_obj_tag(v_pre_823_) == 0)
{
lean_object* v_i_824_; lean_object* v___x_825_; 
v_i_824_ = lean_ctor_get(v_n_811_, 1);
lean_inc(v_i_824_);
lean_dec_ref_known(v_n_811_, 2);
v___x_825_ = l_Nat_reprFast(v_i_824_);
return v___x_825_;
}
else
{
lean_object* v_i_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
lean_inc(v_pre_823_);
v_i_826_ = lean_ctor_get(v_n_811_, 1);
lean_inc(v_i_826_);
lean_dec_ref_known(v_n_811_, 2);
v___x_827_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v_sep_809_, v_escape_810_, v_pre_823_);
v___x_828_ = lean_string_append(v___x_827_, v_sep_809_);
v___x_829_ = l_Nat_reprFast(v_i_826_);
v___x_830_ = lean_string_append(v___x_828_, v___x_829_);
lean_dec_ref(v___x_829_);
return v___x_830_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0___boxed(lean_object* v_sep_831_, lean_object* v_escape_832_, lean_object* v_n_833_){
_start:
{
uint8_t v_escape_boxed_834_; lean_object* v_res_835_; 
v_escape_boxed_834_ = lean_unbox(v_escape_832_);
v_res_835_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v_sep_831_, v_escape_boxed_834_, v_n_833_);
lean_dec_ref(v_sep_831_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(lean_object* v_n_836_, uint8_t v_escape_837_){
_start:
{
lean_object* v___x_838_; 
v___x_838_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
if (v_escape_837_ == 0)
{
lean_object* v___x_839_; 
v___x_839_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_838_, v_escape_837_, v_n_836_);
return v___x_839_;
}
else
{
uint8_t v___x_840_; 
lean_inc(v_n_836_);
v___x_840_ = l_Lean_Name_isInaccessibleUserName(v_n_836_);
if (v___x_840_ == 0)
{
uint8_t v___x_841_; 
v___x_841_ = l_Lean_Name_hasMacroScopes(v_n_836_);
if (v___x_841_ == 0)
{
uint8_t v___x_842_; 
v___x_842_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax(v_n_836_);
if (v___x_842_ == 0)
{
lean_object* v___x_843_; 
v___x_843_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_838_, v_escape_837_, v_n_836_);
return v___x_843_;
}
else
{
lean_object* v___x_844_; 
v___x_844_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_838_, v___x_841_, v_n_836_);
return v___x_844_;
}
}
else
{
lean_object* v___x_845_; 
v___x_845_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_838_, v___x_840_, v_n_836_);
return v___x_845_;
}
}
else
{
uint8_t v___x_846_; lean_object* v___x_847_; 
v___x_846_ = 0;
v___x_847_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0_spec__0(v___x_838_, v___x_846_, v_n_836_);
return v___x_847_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0___boxed(lean_object* v_n_848_, lean_object* v_escape_849_){
_start:
{
uint8_t v_escape_boxed_850_; lean_object* v_res_851_; 
v_escape_boxed_850_ = lean_unbox(v_escape_849_);
v_res_851_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_n_848_, v_escape_boxed_850_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString(lean_object* v_n_852_, uint8_t v_escape_853_){
_start:
{
lean_object* v___x_854_; 
v___x_854_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_n_852_, v_escape_853_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString___boxed(lean_object* v_n_855_, lean_object* v_escape_856_){
_start:
{
uint8_t v_escape_boxed_857_; lean_object* v_res_858_; 
v_escape_boxed_857_ = lean_unbox(v_escape_856_);
v_res_858_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString(v_n_855_, v_escape_boxed_857_);
return v_res_858_;
}
}
LEAN_EXPORT uint8_t l_Lean_Name_hasNum(lean_object* v_x_859_){
_start:
{
switch(lean_obj_tag(v_x_859_))
{
case 0:
{
uint8_t v___x_860_; 
v___x_860_ = 0;
return v___x_860_;
}
case 1:
{
lean_object* v_pre_861_; 
v_pre_861_ = lean_ctor_get(v_x_859_, 0);
v_x_859_ = v_pre_861_;
goto _start;
}
default: 
{
uint8_t v___x_863_; 
v___x_863_ = 1;
return v___x_863_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_hasNum___boxed(lean_object* v_x_864_){
_start:
{
uint8_t v_res_865_; lean_object* v_r_866_; 
v_res_865_ = l_Lean_Name_hasNum(v_x_864_);
lean_dec(v_x_864_);
v_r_866_ = lean_box(v_res_865_);
return v_r_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec(lean_object* v_n_882_, lean_object* v_prec_883_){
_start:
{
switch(lean_obj_tag(v_n_882_))
{
case 0:
{
lean_object* v___x_884_; 
v___x_884_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__1));
return v___x_884_;
}
case 1:
{
lean_object* v_pre_885_; lean_object* v_str_886_; uint8_t v___x_887_; 
v_pre_885_ = lean_ctor_get(v_n_882_, 0);
v_str_886_ = lean_ctor_get(v_n_882_, 1);
v___x_887_ = l_Lean_Name_hasNum(v_pre_885_);
if (v___x_887_ == 0)
{
uint8_t v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_888_ = 1;
v___x_889_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__3));
v___x_890_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_n_882_, v___x_888_);
v___x_891_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
v___x_892_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_892_, 0, v___x_889_);
lean_ctor_set(v___x_892_, 1, v___x_891_);
return v___x_892_;
}
else
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
lean_inc_ref(v_str_886_);
lean_inc(v_pre_885_);
lean_dec_ref_known(v_n_882_, 2);
v___x_893_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__5));
v___x_894_ = lean_unsigned_to_nat(1024u);
v___x_895_ = l_Lean_Name_reprPrec(v_pre_885_, v___x_894_);
v___x_896_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_893_);
lean_ctor_set(v___x_896_, 1, v___x_895_);
v___x_897_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__7));
v___x_898_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_898_, 0, v___x_896_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
v___x_899_ = l_String_quote(v_str_886_);
v___x_900_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
v___x_901_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_898_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
v___x_902_ = l_Repr_addAppParen(v___x_901_, v_prec_883_);
return v___x_902_;
}
}
default: 
{
lean_object* v_pre_903_; lean_object* v_i_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v_pre_903_ = lean_ctor_get(v_n_882_, 0);
lean_inc(v_pre_903_);
v_i_904_ = lean_ctor_get(v_n_882_, 1);
lean_inc(v_i_904_);
lean_dec_ref_known(v_n_882_, 2);
v___x_905_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__9));
v___x_906_ = lean_unsigned_to_nat(1024u);
v___x_907_ = l_Lean_Name_reprPrec(v_pre_903_, v___x_906_);
v___x_908_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_905_);
lean_ctor_set(v___x_908_, 1, v___x_907_);
v___x_909_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__7));
v___x_910_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_908_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_911_ = l_Nat_reprFast(v_i_904_);
v___x_912_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
v___x_913_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_910_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = l_Repr_addAppParen(v___x_913_, v_prec_883_);
return v___x_914_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_reprPrec___boxed(lean_object* v_n_915_, lean_object* v_prec_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Lean_Name_reprPrec(v_n_915_, v_prec_916_);
lean_dec(v_prec_916_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_capitalize(lean_object* v_x_920_){
_start:
{
if (lean_obj_tag(v_x_920_) == 1)
{
lean_object* v_pre_921_; lean_object* v_str_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_pre_921_ = lean_ctor_get(v_x_920_, 0);
lean_inc(v_pre_921_);
v_str_922_ = lean_ctor_get(v_x_920_, 1);
lean_inc_ref(v_str_922_);
lean_dec_ref_known(v_x_920_, 2);
v___x_923_ = lean_string_capitalize(v_str_922_);
v___x_924_ = l_Lean_Name_str___override(v_pre_921_, v___x_923_);
return v___x_924_;
}
else
{
return v_x_920_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix(lean_object* v_x_925_, lean_object* v_x_926_, lean_object* v_x_927_){
_start:
{
switch(lean_obj_tag(v_x_925_))
{
case 0:
{
if (lean_obj_tag(v_x_926_) == 0)
{
lean_inc(v_x_927_);
return v_x_927_;
}
else
{
return v_x_925_;
}
}
case 1:
{
lean_object* v_pre_928_; lean_object* v_str_929_; uint8_t v___x_930_; 
v_pre_928_ = lean_ctor_get(v_x_925_, 0);
lean_inc(v_pre_928_);
v_str_929_ = lean_ctor_get(v_x_925_, 1);
lean_inc_ref(v_str_929_);
v___x_930_ = lean_name_eq(v_x_925_, v_x_926_);
lean_dec_ref_known(v_x_925_, 2);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_931_ = l_Lean_Name_replacePrefix(v_pre_928_, v_x_926_, v_x_927_);
v___x_932_ = l_Lean_Name_str___override(v___x_931_, v_str_929_);
return v___x_932_;
}
else
{
lean_dec_ref(v_str_929_);
lean_dec(v_pre_928_);
lean_inc(v_x_927_);
return v_x_927_;
}
}
default: 
{
lean_object* v_pre_933_; lean_object* v_i_934_; uint8_t v___x_935_; 
v_pre_933_ = lean_ctor_get(v_x_925_, 0);
lean_inc(v_pre_933_);
v_i_934_ = lean_ctor_get(v_x_925_, 1);
lean_inc(v_i_934_);
v___x_935_ = lean_name_eq(v_x_925_, v_x_926_);
lean_dec_ref_known(v_x_925_, 2);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = l_Lean_Name_replacePrefix(v_pre_933_, v_x_926_, v_x_927_);
v___x_937_ = l_Lean_Name_num___override(v___x_936_, v_i_934_);
return v___x_937_;
}
else
{
lean_dec(v_i_934_);
lean_dec(v_pre_933_);
lean_inc(v_x_927_);
return v_x_927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_replacePrefix___boxed(lean_object* v_x_938_, lean_object* v_x_939_, lean_object* v_x_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Lean_Name_replacePrefix(v_x_938_, v_x_939_, v_x_940_);
lean_dec(v_x_940_);
lean_dec(v_x_939_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f(lean_object* v_x_942_, lean_object* v_x_943_){
_start:
{
switch(lean_obj_tag(v_x_943_))
{
case 0:
{
lean_object* v___x_944_; 
v___x_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_944_, 0, v_x_942_);
return v___x_944_;
}
case 1:
{
if (lean_obj_tag(v_x_942_) == 1)
{
lean_object* v_pre_945_; lean_object* v_str_946_; lean_object* v_pre_947_; lean_object* v_str_948_; uint8_t v___x_949_; 
v_pre_945_ = lean_ctor_get(v_x_943_, 0);
v_str_946_ = lean_ctor_get(v_x_943_, 1);
v_pre_947_ = lean_ctor_get(v_x_942_, 0);
lean_inc(v_pre_947_);
v_str_948_ = lean_ctor_get(v_x_942_, 1);
lean_inc_ref(v_str_948_);
lean_dec_ref_known(v_x_942_, 2);
v___x_949_ = lean_string_dec_eq(v_str_948_, v_str_946_);
lean_dec_ref(v_str_948_);
if (v___x_949_ == 0)
{
lean_object* v___x_950_; 
lean_dec(v_pre_947_);
v___x_950_ = lean_box(0);
return v___x_950_;
}
else
{
v_x_942_ = v_pre_947_;
v_x_943_ = v_pre_945_;
goto _start;
}
}
else
{
lean_object* v___x_952_; 
lean_dec(v_x_942_);
v___x_952_ = lean_box(0);
return v___x_952_;
}
}
default: 
{
if (lean_obj_tag(v_x_942_) == 2)
{
lean_object* v_pre_953_; lean_object* v_i_954_; lean_object* v_pre_955_; lean_object* v_i_956_; uint8_t v___x_957_; 
v_pre_953_ = lean_ctor_get(v_x_943_, 0);
v_i_954_ = lean_ctor_get(v_x_943_, 1);
v_pre_955_ = lean_ctor_get(v_x_942_, 0);
lean_inc(v_pre_955_);
v_i_956_ = lean_ctor_get(v_x_942_, 1);
lean_inc(v_i_956_);
lean_dec_ref_known(v_x_942_, 2);
v___x_957_ = lean_nat_dec_eq(v_i_956_, v_i_954_);
lean_dec(v_i_956_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; 
lean_dec(v_pre_955_);
v___x_958_ = lean_box(0);
return v___x_958_;
}
else
{
v_x_942_ = v_pre_955_;
v_x_943_ = v_pre_953_;
goto _start;
}
}
else
{
lean_object* v___x_960_; 
lean_dec(v_x_942_);
v___x_960_ = lean_box(0);
return v___x_960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_eraseSuffix_x3f___boxed(lean_object* v_x_961_, lean_object* v_x_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Lean_Name_eraseSuffix_x3f(v_x_961_, v_x_962_);
lean_dec(v_x_962_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_modifyBase(lean_object* v_n_964_, lean_object* v_f_965_){
_start:
{
uint8_t v___x_966_; 
v___x_966_ = l_Lean_Name_hasMacroScopes(v_n_964_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; 
v___x_967_ = lean_apply_1(v_f_965_, v_n_964_);
return v___x_967_;
}
else
{
lean_object* v_view_968_; lean_object* v_name_969_; lean_object* v_imported_970_; lean_object* v_ctx_971_; lean_object* v_scopes_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_981_; 
v_view_968_ = l_Lean_extractMacroScopes(v_n_964_);
v_name_969_ = lean_ctor_get(v_view_968_, 0);
v_imported_970_ = lean_ctor_get(v_view_968_, 1);
v_ctx_971_ = lean_ctor_get(v_view_968_, 2);
v_scopes_972_ = lean_ctor_get(v_view_968_, 3);
v_isSharedCheck_981_ = !lean_is_exclusive(v_view_968_);
if (v_isSharedCheck_981_ == 0)
{
v___x_974_ = v_view_968_;
v_isShared_975_ = v_isSharedCheck_981_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_scopes_972_);
lean_inc(v_ctx_971_);
lean_inc(v_imported_970_);
lean_inc(v_name_969_);
lean_dec(v_view_968_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_981_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_976_; lean_object* v___x_978_; 
v___x_976_ = lean_apply_1(v_f_965_, v_name_969_);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 0, v___x_976_);
v___x_978_ = v___x_974_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_976_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v_imported_970_);
lean_ctor_set(v_reuseFailAlloc_980_, 2, v_ctx_971_);
lean_ctor_set(v_reuseFailAlloc_980_, 3, v_scopes_972_);
v___x_978_ = v_reuseFailAlloc_980_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
lean_object* v___x_979_; 
v___x_979_ = l_Lean_MacroScopesView_review(v___x_978_);
return v___x_979_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_appendAfter___lam__0(lean_object* v_suffix_982_, lean_object* v_x_983_){
_start:
{
if (lean_obj_tag(v_x_983_) == 1)
{
lean_object* v_pre_984_; lean_object* v_str_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v_pre_984_ = lean_ctor_get(v_x_983_, 0);
lean_inc(v_pre_984_);
v_str_985_ = lean_ctor_get(v_x_983_, 1);
lean_inc_ref(v_str_985_);
lean_dec_ref_known(v_x_983_, 2);
v___x_986_ = lean_string_append(v_str_985_, v_suffix_982_);
lean_dec_ref(v_suffix_982_);
v___x_987_ = l_Lean_Name_str___override(v_pre_984_, v___x_986_);
return v___x_987_;
}
else
{
lean_object* v___x_988_; 
v___x_988_ = l_Lean_Name_str___override(v_x_983_, v_suffix_982_);
return v___x_988_;
}
}
}
LEAN_EXPORT lean_object* lean_name_append_after(lean_object* v_n_989_, lean_object* v_suffix_990_){
_start:
{
uint8_t v___x_991_; 
v___x_991_ = l_Lean_Name_hasMacroScopes(v_n_989_);
if (v___x_991_ == 0)
{
lean_object* v___x_992_; 
v___x_992_ = l_Lean_Name_appendAfter___lam__0(v_suffix_990_, v_n_989_);
return v___x_992_;
}
else
{
lean_object* v_view_993_; lean_object* v_name_994_; lean_object* v_imported_995_; lean_object* v_ctx_996_; lean_object* v_scopes_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1006_; 
v_view_993_ = l_Lean_extractMacroScopes(v_n_989_);
v_name_994_ = lean_ctor_get(v_view_993_, 0);
v_imported_995_ = lean_ctor_get(v_view_993_, 1);
v_ctx_996_ = lean_ctor_get(v_view_993_, 2);
v_scopes_997_ = lean_ctor_get(v_view_993_, 3);
v_isSharedCheck_1006_ = !lean_is_exclusive(v_view_993_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_999_ = v_view_993_;
v_isShared_1000_ = v_isSharedCheck_1006_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_scopes_997_);
lean_inc(v_ctx_996_);
lean_inc(v_imported_995_);
lean_inc(v_name_994_);
lean_dec(v_view_993_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1006_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v___x_1001_; lean_object* v___x_1003_; 
v___x_1001_ = l_Lean_Name_appendAfter___lam__0(v_suffix_990_, v_name_994_);
if (v_isShared_1000_ == 0)
{
lean_ctor_set(v___x_999_, 0, v___x_1001_);
v___x_1003_ = v___x_999_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v___x_1001_);
lean_ctor_set(v_reuseFailAlloc_1005_, 1, v_imported_995_);
lean_ctor_set(v_reuseFailAlloc_1005_, 2, v_ctx_996_);
lean_ctor_set(v_reuseFailAlloc_1005_, 3, v_scopes_997_);
v___x_1003_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1004_; 
v___x_1004_ = l_Lean_MacroScopesView_review(v___x_1003_);
return v___x_1004_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_appendIndexAfter___lam__0(lean_object* v_idx_1007_, lean_object* v_x_1008_){
_start:
{
if (lean_obj_tag(v_x_1008_) == 1)
{
lean_object* v_pre_1009_; lean_object* v_str_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_pre_1009_ = lean_ctor_get(v_x_1008_, 0);
lean_inc(v_pre_1009_);
v_str_1010_ = lean_ctor_get(v_x_1008_, 1);
lean_inc_ref(v_str_1010_);
lean_dec_ref_known(v_x_1008_, 2);
v___x_1011_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0));
v___x_1012_ = lean_string_append(v_str_1010_, v___x_1011_);
v___x_1013_ = l_Nat_reprFast(v_idx_1007_);
v___x_1014_ = lean_string_append(v___x_1012_, v___x_1013_);
lean_dec_ref(v___x_1013_);
v___x_1015_ = l_Lean_Name_str___override(v_pre_1009_, v___x_1014_);
return v___x_1015_;
}
else
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1016_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0));
v___x_1017_ = l_Nat_reprFast(v_idx_1007_);
v___x_1018_ = lean_string_append(v___x_1016_, v___x_1017_);
lean_dec_ref(v___x_1017_);
v___x_1019_ = l_Lean_Name_str___override(v_x_1008_, v___x_1018_);
return v___x_1019_;
}
}
}
LEAN_EXPORT lean_object* lean_name_append_index_after(lean_object* v_n_1020_, lean_object* v_idx_1021_){
_start:
{
uint8_t v___x_1022_; 
v___x_1022_ = l_Lean_Name_hasMacroScopes(v_n_1020_);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lean_Name_appendIndexAfter___lam__0(v_idx_1021_, v_n_1020_);
return v___x_1023_;
}
else
{
lean_object* v_view_1024_; lean_object* v_name_1025_; lean_object* v_imported_1026_; lean_object* v_ctx_1027_; lean_object* v_scopes_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1037_; 
v_view_1024_ = l_Lean_extractMacroScopes(v_n_1020_);
v_name_1025_ = lean_ctor_get(v_view_1024_, 0);
v_imported_1026_ = lean_ctor_get(v_view_1024_, 1);
v_ctx_1027_ = lean_ctor_get(v_view_1024_, 2);
v_scopes_1028_ = lean_ctor_get(v_view_1024_, 3);
v_isSharedCheck_1037_ = !lean_is_exclusive(v_view_1024_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1030_ = v_view_1024_;
v_isShared_1031_ = v_isSharedCheck_1037_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_scopes_1028_);
lean_inc(v_ctx_1027_);
lean_inc(v_imported_1026_);
lean_inc(v_name_1025_);
lean_dec(v_view_1024_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1037_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; lean_object* v___x_1034_; 
v___x_1032_ = l_Lean_Name_appendIndexAfter___lam__0(v_idx_1021_, v_name_1025_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 0, v___x_1032_);
v___x_1034_ = v___x_1030_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1036_, 1, v_imported_1026_);
lean_ctor_set(v_reuseFailAlloc_1036_, 2, v_ctx_1027_);
lean_ctor_set(v_reuseFailAlloc_1036_, 3, v_scopes_1028_);
v___x_1034_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1035_; 
v___x_1035_ = l_Lean_MacroScopesView_review(v___x_1034_);
return v___x_1035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_appendBefore___lam__0(lean_object* v_pre_1038_, lean_object* v_x_1039_){
_start:
{
switch(lean_obj_tag(v_x_1039_))
{
case 0:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lean_Name_str___override(v_x_1039_, v_pre_1038_);
return v___x_1040_;
}
case 1:
{
lean_object* v_pre_1041_; lean_object* v_str_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v_pre_1041_ = lean_ctor_get(v_x_1039_, 0);
lean_inc(v_pre_1041_);
v_str_1042_ = lean_ctor_get(v_x_1039_, 1);
lean_inc_ref(v_str_1042_);
lean_dec_ref_known(v_x_1039_, 2);
v___x_1043_ = lean_string_append(v_pre_1038_, v_str_1042_);
lean_dec_ref(v_str_1042_);
v___x_1044_ = l_Lean_Name_str___override(v_pre_1041_, v___x_1043_);
return v___x_1044_;
}
default: 
{
lean_object* v_pre_1045_; lean_object* v_i_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; 
v_pre_1045_ = lean_ctor_get(v_x_1039_, 0);
lean_inc(v_pre_1045_);
v_i_1046_ = lean_ctor_get(v_x_1039_, 1);
lean_inc(v_i_1046_);
lean_dec_ref_known(v_x_1039_, 2);
v___x_1047_ = l_Lean_Name_str___override(v_pre_1045_, v_pre_1038_);
v___x_1048_ = l_Lean_Name_num___override(v___x_1047_, v_i_1046_);
return v___x_1048_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Name_appendBefore(lean_object* v_n_1049_, lean_object* v_pre_1050_){
_start:
{
uint8_t v___x_1051_; 
v___x_1051_ = l_Lean_Name_hasMacroScopes(v_n_1049_);
if (v___x_1051_ == 0)
{
lean_object* v___x_1052_; 
v___x_1052_ = l_Lean_Name_appendBefore___lam__0(v_pre_1050_, v_n_1049_);
return v___x_1052_;
}
else
{
lean_object* v_view_1053_; lean_object* v_name_1054_; lean_object* v_imported_1055_; lean_object* v_ctx_1056_; lean_object* v_scopes_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1066_; 
v_view_1053_ = l_Lean_extractMacroScopes(v_n_1049_);
v_name_1054_ = lean_ctor_get(v_view_1053_, 0);
v_imported_1055_ = lean_ctor_get(v_view_1053_, 1);
v_ctx_1056_ = lean_ctor_get(v_view_1053_, 2);
v_scopes_1057_ = lean_ctor_get(v_view_1053_, 3);
v_isSharedCheck_1066_ = !lean_is_exclusive(v_view_1053_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1059_ = v_view_1053_;
v_isShared_1060_ = v_isSharedCheck_1066_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_scopes_1057_);
lean_inc(v_ctx_1056_);
lean_inc(v_imported_1055_);
lean_inc(v_name_1054_);
lean_dec(v_view_1053_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1066_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1061_; lean_object* v___x_1063_; 
v___x_1061_ = l_Lean_Name_appendBefore___lam__0(v_pre_1050_, v_name_1054_);
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 0, v___x_1061_);
v___x_1063_ = v___x_1059_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1061_);
lean_ctor_set(v_reuseFailAlloc_1065_, 1, v_imported_1055_);
lean_ctor_set(v_reuseFailAlloc_1065_, 2, v_ctx_1056_);
lean_ctor_set(v_reuseFailAlloc_1065_, 3, v_scopes_1057_);
v___x_1063_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_Lean_MacroScopesView_review(v___x_1063_);
return v___x_1064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter___redArg(lean_object* v_x_1067_, lean_object* v_x_1068_, lean_object* v_h__1_1069_, lean_object* v_h__2_1070_, lean_object* v_h__3_1071_, lean_object* v_h__4_1072_){
_start:
{
switch(lean_obj_tag(v_x_1067_))
{
case 0:
{
lean_dec(v_h__3_1071_);
lean_dec(v_h__2_1070_);
if (lean_obj_tag(v_x_1068_) == 0)
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
lean_dec(v_h__4_1072_);
v___x_1073_ = lean_box(0);
v___x_1074_ = lean_apply_1(v_h__1_1069_, v___x_1073_);
return v___x_1074_;
}
else
{
lean_object* v___x_1075_; 
lean_dec(v_h__1_1069_);
v___x_1075_ = lean_apply_5(v_h__4_1072_, v_x_1067_, v_x_1068_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1075_;
}
}
case 1:
{
lean_dec(v_h__3_1071_);
lean_dec(v_h__1_1069_);
if (lean_obj_tag(v_x_1068_) == 1)
{
lean_object* v_pre_1076_; lean_object* v_str_1077_; lean_object* v_pre_1078_; lean_object* v_str_1079_; lean_object* v___x_1080_; 
lean_dec(v_h__4_1072_);
v_pre_1076_ = lean_ctor_get(v_x_1067_, 0);
lean_inc(v_pre_1076_);
v_str_1077_ = lean_ctor_get(v_x_1067_, 1);
lean_inc_ref(v_str_1077_);
lean_dec_ref_known(v_x_1067_, 2);
v_pre_1078_ = lean_ctor_get(v_x_1068_, 0);
lean_inc(v_pre_1078_);
v_str_1079_ = lean_ctor_get(v_x_1068_, 1);
lean_inc_ref(v_str_1079_);
lean_dec_ref_known(v_x_1068_, 2);
v___x_1080_ = lean_apply_4(v_h__2_1070_, v_pre_1076_, v_str_1077_, v_pre_1078_, v_str_1079_);
return v___x_1080_;
}
else
{
lean_object* v___x_1081_; 
lean_dec(v_h__2_1070_);
v___x_1081_ = lean_apply_5(v_h__4_1072_, v_x_1067_, v_x_1068_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1081_;
}
}
default: 
{
lean_dec(v_h__2_1070_);
lean_dec(v_h__1_1069_);
if (lean_obj_tag(v_x_1068_) == 2)
{
lean_object* v_pre_1082_; lean_object* v_i_1083_; lean_object* v_pre_1084_; lean_object* v_i_1085_; lean_object* v___x_1086_; 
lean_dec(v_h__4_1072_);
v_pre_1082_ = lean_ctor_get(v_x_1067_, 0);
lean_inc(v_pre_1082_);
v_i_1083_ = lean_ctor_get(v_x_1067_, 1);
lean_inc(v_i_1083_);
lean_dec_ref_known(v_x_1067_, 2);
v_pre_1084_ = lean_ctor_get(v_x_1068_, 0);
lean_inc(v_pre_1084_);
v_i_1085_ = lean_ctor_get(v_x_1068_, 1);
lean_inc(v_i_1085_);
lean_dec_ref_known(v_x_1068_, 2);
v___x_1086_ = lean_apply_4(v_h__3_1071_, v_pre_1082_, v_i_1083_, v_pre_1084_, v_i_1085_);
return v___x_1086_;
}
else
{
lean_object* v___x_1087_; 
lean_dec(v_h__3_1071_);
v___x_1087_ = lean_apply_5(v_h__4_1072_, v_x_1067_, v_x_1068_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1087_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Name_beq_match__1_splitter(lean_object* v_motive_1088_, lean_object* v_x_1089_, lean_object* v_x_1090_, lean_object* v_h__1_1091_, lean_object* v_h__2_1092_, lean_object* v_h__3_1093_, lean_object* v_h__4_1094_){
_start:
{
switch(lean_obj_tag(v_x_1089_))
{
case 0:
{
lean_dec(v_h__3_1093_);
lean_dec(v_h__2_1092_);
if (lean_obj_tag(v_x_1090_) == 0)
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
lean_dec(v_h__4_1094_);
v___x_1095_ = lean_box(0);
v___x_1096_ = lean_apply_1(v_h__1_1091_, v___x_1095_);
return v___x_1096_;
}
else
{
lean_object* v___x_1097_; 
lean_dec(v_h__1_1091_);
v___x_1097_ = lean_apply_5(v_h__4_1094_, v_x_1089_, v_x_1090_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1097_;
}
}
case 1:
{
lean_dec(v_h__3_1093_);
lean_dec(v_h__1_1091_);
if (lean_obj_tag(v_x_1090_) == 1)
{
lean_object* v_pre_1098_; lean_object* v_str_1099_; lean_object* v_pre_1100_; lean_object* v_str_1101_; lean_object* v___x_1102_; 
lean_dec(v_h__4_1094_);
v_pre_1098_ = lean_ctor_get(v_x_1089_, 0);
lean_inc(v_pre_1098_);
v_str_1099_ = lean_ctor_get(v_x_1089_, 1);
lean_inc_ref(v_str_1099_);
lean_dec_ref_known(v_x_1089_, 2);
v_pre_1100_ = lean_ctor_get(v_x_1090_, 0);
lean_inc(v_pre_1100_);
v_str_1101_ = lean_ctor_get(v_x_1090_, 1);
lean_inc_ref(v_str_1101_);
lean_dec_ref_known(v_x_1090_, 2);
v___x_1102_ = lean_apply_4(v_h__2_1092_, v_pre_1098_, v_str_1099_, v_pre_1100_, v_str_1101_);
return v___x_1102_;
}
else
{
lean_object* v___x_1103_; 
lean_dec(v_h__2_1092_);
v___x_1103_ = lean_apply_5(v_h__4_1094_, v_x_1089_, v_x_1090_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1103_;
}
}
default: 
{
lean_dec(v_h__2_1092_);
lean_dec(v_h__1_1091_);
if (lean_obj_tag(v_x_1090_) == 2)
{
lean_object* v_pre_1104_; lean_object* v_i_1105_; lean_object* v_pre_1106_; lean_object* v_i_1107_; lean_object* v___x_1108_; 
lean_dec(v_h__4_1094_);
v_pre_1104_ = lean_ctor_get(v_x_1089_, 0);
lean_inc(v_pre_1104_);
v_i_1105_ = lean_ctor_get(v_x_1089_, 1);
lean_inc(v_i_1105_);
lean_dec_ref_known(v_x_1089_, 2);
v_pre_1106_ = lean_ctor_get(v_x_1090_, 0);
lean_inc(v_pre_1106_);
v_i_1107_ = lean_ctor_get(v_x_1090_, 1);
lean_inc(v_i_1107_);
lean_dec_ref_known(v_x_1090_, 2);
v___x_1108_ = lean_apply_4(v_h__3_1093_, v_pre_1104_, v_i_1105_, v_pre_1106_, v_i_1107_);
return v___x_1108_;
}
else
{
lean_object* v___x_1109_; 
lean_dec(v_h__3_1093_);
v___x_1109_ = lean_apply_5(v_h__4_1094_, v_x_1089_, v_x_1090_, lean_box(0), lean_box(0), lean_box(0));
return v___x_1109_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Name_instDecidableEq(lean_object* v_a_1110_, lean_object* v_b_1111_){
_start:
{
uint8_t v___x_1112_; 
v___x_1112_ = lean_name_eq(v_a_1110_, v_b_1111_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Name_instDecidableEq___boxed(lean_object* v_a_1113_, lean_object* v_b_1114_){
_start:
{
uint8_t v_res_1115_; lean_object* v_r_1116_; 
v_res_1115_ = l_Lean_Name_instDecidableEq(v_a_1113_, v_b_1114_);
lean_dec(v_b_1114_);
lean_dec(v_a_1113_);
v_r_1116_ = lean_box(v_res_1115_);
return v_r_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameGenerator_curr(lean_object* v_g_1117_){
_start:
{
lean_object* v_namePrefix_1118_; lean_object* v_idx_1119_; lean_object* v___x_1120_; 
v_namePrefix_1118_ = lean_ctor_get(v_g_1117_, 0);
lean_inc(v_namePrefix_1118_);
v_idx_1119_ = lean_ctor_get(v_g_1117_, 1);
lean_inc(v_idx_1119_);
lean_dec_ref(v_g_1117_);
v___x_1120_ = l_Lean_Name_num___override(v_namePrefix_1118_, v_idx_1119_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_NameGenerator_next(lean_object* v_g_1121_){
_start:
{
lean_object* v_namePrefix_1122_; lean_object* v_idx_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1132_; 
v_namePrefix_1122_ = lean_ctor_get(v_g_1121_, 0);
v_idx_1123_ = lean_ctor_get(v_g_1121_, 1);
v_isSharedCheck_1132_ = !lean_is_exclusive(v_g_1121_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1125_ = v_g_1121_;
v_isShared_1126_ = v_isSharedCheck_1132_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_idx_1123_);
lean_inc(v_namePrefix_1122_);
lean_dec(v_g_1121_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1132_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1127_ = lean_unsigned_to_nat(1u);
v___x_1128_ = lean_nat_add(v_idx_1123_, v___x_1127_);
lean_dec(v_idx_1123_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 1, v___x_1128_);
v___x_1130_ = v___x_1125_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_namePrefix_1122_);
lean_ctor_set(v_reuseFailAlloc_1131_, 1, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameGenerator_mkChild(lean_object* v_g_1133_){
_start:
{
lean_object* v_namePrefix_1134_; lean_object* v_idx_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1147_; 
v_namePrefix_1134_ = lean_ctor_get(v_g_1133_, 0);
v_idx_1135_ = lean_ctor_get(v_g_1133_, 1);
v_isSharedCheck_1147_ = !lean_is_exclusive(v_g_1133_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1137_ = v_g_1133_;
v_isShared_1138_ = v_isSharedCheck_1147_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_idx_1135_);
lean_inc(v_namePrefix_1134_);
lean_dec(v_g_1133_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1147_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1142_; 
lean_inc(v_idx_1135_);
lean_inc(v_namePrefix_1134_);
v___x_1139_ = l_Lean_Name_num___override(v_namePrefix_1134_, v_idx_1135_);
v___x_1140_ = lean_unsigned_to_nat(1u);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 1, v___x_1140_);
lean_ctor_set(v___x_1137_, 0, v___x_1139_);
v___x_1142_ = v___x_1137_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v___x_1139_);
lean_ctor_set(v_reuseFailAlloc_1146_, 1, v___x_1140_);
v___x_1142_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1143_ = lean_nat_add(v_idx_1135_, v___x_1140_);
lean_dec(v_idx_1135_);
v___x_1144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1144_, 0, v_namePrefix_1134_);
lean_ctor_set(v___x_1144_, 1, v___x_1143_);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1142_);
lean_ctor_set(v___x_1145_, 1, v___x_1144_);
return v___x_1145_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__0(lean_object* v_toPure_1148_, lean_object* v_r_1149_, lean_object* v_____r_1150_){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = lean_apply_2(v_toPure_1148_, lean_box(0), v_r_1149_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg___lam__1(lean_object* v_toPure_1152_, lean_object* v_setNGen_1153_, lean_object* v_toBind_1154_, lean_object* v_ngen_1155_){
_start:
{
lean_object* v_namePrefix_1156_; lean_object* v_idx_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1170_; 
v_namePrefix_1156_ = lean_ctor_get(v_ngen_1155_, 0);
v_idx_1157_ = lean_ctor_get(v_ngen_1155_, 1);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_ngen_1155_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1159_ = v_ngen_1155_;
v_isShared_1160_ = v_isSharedCheck_1170_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_idx_1157_);
lean_inc(v_namePrefix_1156_);
lean_dec(v_ngen_1155_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1170_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v_r_1161_; lean_object* v___f_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1166_; 
lean_inc(v_idx_1157_);
lean_inc(v_namePrefix_1156_);
v_r_1161_ = l_Lean_Name_num___override(v_namePrefix_1156_, v_idx_1157_);
v___f_1162_ = lean_alloc_closure((void*)(l_Lean_mkFreshId___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1162_, 0, v_toPure_1152_);
lean_closure_set(v___f_1162_, 1, v_r_1161_);
v___x_1163_ = lean_unsigned_to_nat(1u);
v___x_1164_ = lean_nat_add(v_idx_1157_, v___x_1163_);
lean_dec(v_idx_1157_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1164_);
v___x_1166_ = v___x_1159_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_namePrefix_1156_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v___x_1164_);
v___x_1166_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = lean_apply_1(v_setNGen_1153_, v___x_1166_);
v___x_1168_ = lean_apply_4(v_toBind_1154_, lean_box(0), lean_box(0), v___x_1167_, v___f_1162_);
return v___x_1168_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___redArg(lean_object* v_inst_1171_, lean_object* v_inst_1172_){
_start:
{
lean_object* v_toApplicative_1173_; lean_object* v_toBind_1174_; lean_object* v_getNGen_1175_; lean_object* v_setNGen_1176_; lean_object* v_toPure_1177_; lean_object* v___f_1178_; lean_object* v___x_1179_; 
v_toApplicative_1173_ = lean_ctor_get(v_inst_1171_, 0);
lean_inc_ref(v_toApplicative_1173_);
v_toBind_1174_ = lean_ctor_get(v_inst_1171_, 1);
lean_inc_n(v_toBind_1174_, 2);
lean_dec_ref(v_inst_1171_);
v_getNGen_1175_ = lean_ctor_get(v_inst_1172_, 0);
lean_inc(v_getNGen_1175_);
v_setNGen_1176_ = lean_ctor_get(v_inst_1172_, 1);
lean_inc(v_setNGen_1176_);
lean_dec_ref(v_inst_1172_);
v_toPure_1177_ = lean_ctor_get(v_toApplicative_1173_, 1);
lean_inc(v_toPure_1177_);
lean_dec_ref(v_toApplicative_1173_);
v___f_1178_ = lean_alloc_closure((void*)(l_Lean_mkFreshId___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1178_, 0, v_toPure_1177_);
lean_closure_set(v___f_1178_, 1, v_setNGen_1176_);
lean_closure_set(v___f_1178_, 2, v_toBind_1174_);
v___x_1179_ = lean_apply_4(v_toBind_1174_, lean_box(0), lean_box(0), v_getNGen_1175_, v___f_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId(lean_object* v_m_1180_, lean_object* v_inst_1181_, lean_object* v_inst_1182_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = l_Lean_mkFreshId___redArg(v_inst_1181_, v_inst_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg___lam__0(lean_object* v_setNGen_1184_, lean_object* v_inst_1185_, lean_object* v_ngen_1186_){
_start:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = lean_apply_1(v_setNGen_1184_, v_ngen_1186_);
v___x_1188_ = lean_apply_2(v_inst_1185_, lean_box(0), v___x_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift___redArg(lean_object* v_inst_1189_, lean_object* v_inst_1190_){
_start:
{
lean_object* v_getNGen_1191_; lean_object* v_setNGen_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1201_; 
v_getNGen_1191_ = lean_ctor_get(v_inst_1190_, 0);
v_setNGen_1192_ = lean_ctor_get(v_inst_1190_, 1);
v_isSharedCheck_1201_ = !lean_is_exclusive(v_inst_1190_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1194_ = v_inst_1190_;
v_isShared_1195_ = v_isSharedCheck_1201_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_setNGen_1192_);
lean_inc(v_getNGen_1191_);
lean_dec(v_inst_1190_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1201_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___f_1196_; lean_object* v___x_1197_; lean_object* v___x_1199_; 
lean_inc(v_inst_1189_);
v___f_1196_ = lean_alloc_closure((void*)(l_Lean_monadNameGeneratorLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1196_, 0, v_setNGen_1192_);
lean_closure_set(v___f_1196_, 1, v_inst_1189_);
v___x_1197_ = lean_apply_2(v_inst_1189_, lean_box(0), v_getNGen_1191_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 1, v___f_1196_);
lean_ctor_set(v___x_1194_, 0, v___x_1197_);
v___x_1199_ = v___x_1194_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v___x_1197_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v___f_1196_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_monadNameGeneratorLift(lean_object* v_m_1202_, lean_object* v_n_1203_, lean_object* v_inst_1204_, lean_object* v_inst_1205_){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = l_Lean_monadNameGeneratorLift___redArg(v_inst_1204_, v_inst_1205_);
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_1207_, lean_object* v_x_1208_, lean_object* v_x_1209_){
_start:
{
if (lean_obj_tag(v_x_1209_) == 0)
{
lean_dec(v_x_1207_);
return v_x_1208_;
}
else
{
lean_object* v_head_1210_; lean_object* v_tail_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1222_; 
v_head_1210_ = lean_ctor_get(v_x_1209_, 0);
v_tail_1211_ = lean_ctor_get(v_x_1209_, 1);
v_isSharedCheck_1222_ = !lean_is_exclusive(v_x_1209_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1213_ = v_x_1209_;
v_isShared_1214_ = v_isSharedCheck_1222_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_tail_1211_);
lean_inc(v_head_1210_);
lean_dec(v_x_1209_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1222_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1216_; 
lean_inc(v_x_1207_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set_tag(v___x_1213_, 5);
lean_ctor_set(v___x_1213_, 1, v_x_1207_);
lean_ctor_set(v___x_1213_, 0, v_x_1208_);
v___x_1216_ = v___x_1213_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_x_1208_);
lean_ctor_set(v_reuseFailAlloc_1221_, 1, v_x_1207_);
v___x_1216_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1217_ = l_String_quote(v_head_1210_);
v___x_1218_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
v___x_1219_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1216_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
v_x_1208_ = v___x_1219_;
v_x_1209_ = v_tail_1211_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1(lean_object* v_x_1223_, lean_object* v_x_1224_, lean_object* v_x_1225_){
_start:
{
if (lean_obj_tag(v_x_1225_) == 0)
{
lean_dec(v_x_1223_);
return v_x_1224_;
}
else
{
lean_object* v_head_1226_; lean_object* v_tail_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1238_; 
v_head_1226_ = lean_ctor_get(v_x_1225_, 0);
v_tail_1227_ = lean_ctor_get(v_x_1225_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_x_1225_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1229_ = v_x_1225_;
v_isShared_1230_ = v_isSharedCheck_1238_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_tail_1227_);
lean_inc(v_head_1226_);
lean_dec(v_x_1225_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1238_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1232_; 
lean_inc(v_x_1223_);
if (v_isShared_1230_ == 0)
{
lean_ctor_set_tag(v___x_1229_, 5);
lean_ctor_set(v___x_1229_, 1, v_x_1223_);
lean_ctor_set(v___x_1229_, 0, v_x_1224_);
v___x_1232_ = v___x_1229_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_x_1224_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_x_1223_);
v___x_1232_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1233_ = l_String_quote(v_head_1226_);
v___x_1234_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1233_);
v___x_1235_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1232_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v___x_1236_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1_spec__3(v_x_1223_, v___x_1235_, v_tail_1227_);
return v___x_1236_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(lean_object* v___y_1239_){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1240_ = l_String_quote(v___y_1239_);
v___x_1241_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0(lean_object* v_x_1242_, lean_object* v_x_1243_){
_start:
{
if (lean_obj_tag(v_x_1242_) == 0)
{
lean_object* v___x_1244_; 
lean_dec(v_x_1243_);
v___x_1244_ = lean_box(0);
return v___x_1244_;
}
else
{
lean_object* v_tail_1245_; 
v_tail_1245_ = lean_ctor_get(v_x_1242_, 1);
if (lean_obj_tag(v_tail_1245_) == 0)
{
lean_object* v_head_1246_; lean_object* v___x_1247_; 
lean_dec(v_x_1243_);
v_head_1246_ = lean_ctor_get(v_x_1242_, 0);
lean_inc(v_head_1246_);
lean_dec_ref_known(v_x_1242_, 2);
v___x_1247_ = l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(v_head_1246_);
return v___x_1247_;
}
else
{
lean_object* v_head_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
lean_inc(v_tail_1245_);
v_head_1248_ = lean_ctor_get(v_x_1242_, 0);
lean_inc(v_head_1248_);
lean_dec_ref_known(v_x_1242_, 2);
v___x_1249_ = l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0___lam__0(v_head_1248_);
v___x_1250_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0_spec__1(v_x_1243_, v___x_1249_, v_tail_1245_);
return v___x_1250_;
}
}
}
}
static lean_object* _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1262_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__2));
v___x_1263_ = lean_string_length(v___x_1262_);
return v___x_1263_;
}
}
static lean_object* _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8(void){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1264_ = lean_obj_once(&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7, &l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7_once, _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__7);
v___x_1265_ = lean_nat_to_int(v___x_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(lean_object* v_a_1270_){
_start:
{
if (lean_obj_tag(v_a_1270_) == 0)
{
lean_object* v___x_1271_; 
v___x_1271_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1));
return v___x_1271_;
}
else
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1272_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5));
v___x_1273_ = l_Std_Format_joinSep___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__0(v_a_1270_, v___x_1272_);
v___x_1274_ = lean_obj_once(&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8, &l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8_once, _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8);
v___x_1275_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9));
v___x_1276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
lean_ctor_set(v___x_1276_, 1, v___x_1273_);
v___x_1277_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10));
v___x_1278_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___x_1276_);
lean_ctor_set(v___x_1278_, 1, v___x_1277_);
v___x_1279_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1274_);
lean_ctor_set(v___x_1279_, 1, v___x_1278_);
v___x_1280_ = l_Std_Format_fill(v___x_1279_);
return v___x_1280_;
}
}
}
static lean_object* _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3(void){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = lean_unsigned_to_nat(2u);
v___x_1288_ = lean_nat_to_int(v___x_1287_);
return v___x_1288_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_unsigned_to_nat(1u);
v___x_1290_ = lean_nat_to_int(v___x_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr(lean_object* v_x_1297_, lean_object* v_prec_1298_){
_start:
{
if (lean_obj_tag(v_x_1297_) == 0)
{
lean_object* v_ns_1299_; lean_object* v___y_1301_; lean_object* v___x_1310_; uint8_t v___x_1311_; 
v_ns_1299_ = lean_ctor_get(v_x_1297_, 0);
lean_inc(v_ns_1299_);
lean_dec_ref_known(v_x_1297_, 1);
v___x_1310_ = lean_unsigned_to_nat(1024u);
v___x_1311_ = lean_nat_dec_le(v___x_1310_, v_prec_1298_);
if (v___x_1311_ == 0)
{
lean_object* v___x_1312_; 
v___x_1312_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1301_ = v___x_1312_;
goto v___jp_1300_;
}
else
{
lean_object* v___x_1313_; 
v___x_1313_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1301_ = v___x_1313_;
goto v___jp_1300_;
}
v___jp_1300_:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1302_ = ((lean_object*)(l_Lean_Syntax_instReprPreresolved_repr___closed__2));
v___x_1303_ = lean_unsigned_to_nat(1024u);
v___x_1304_ = l_Lean_Name_reprPrec(v_ns_1299_, v___x_1303_);
v___x_1305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1302_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
lean_inc(v___y_1301_);
v___x_1306_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___y_1301_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
v___x_1307_ = 0;
v___x_1308_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1308_, 0, v___x_1306_);
lean_ctor_set_uint8(v___x_1308_, sizeof(void*)*1, v___x_1307_);
v___x_1309_ = l_Repr_addAppParen(v___x_1308_, v_prec_1298_);
return v___x_1309_;
}
}
else
{
lean_object* v_n_1314_; lean_object* v_fields_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1339_; 
v_n_1314_ = lean_ctor_get(v_x_1297_, 0);
v_fields_1315_ = lean_ctor_get(v_x_1297_, 1);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_x_1297_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1317_ = v_x_1297_;
v_isShared_1318_ = v_isSharedCheck_1339_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_fields_1315_);
lean_inc(v_n_1314_);
lean_dec(v_x_1297_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1339_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___y_1320_; lean_object* v___x_1335_; uint8_t v___x_1336_; 
v___x_1335_ = lean_unsigned_to_nat(1024u);
v___x_1336_ = lean_nat_dec_le(v___x_1335_, v_prec_1298_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1320_ = v___x_1337_;
goto v___jp_1319_;
}
else
{
lean_object* v___x_1338_; 
v___x_1338_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1320_ = v___x_1338_;
goto v___jp_1319_;
}
v___jp_1319_:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1326_; 
v___x_1321_ = lean_box(1);
v___x_1322_ = ((lean_object*)(l_Lean_Syntax_instReprPreresolved_repr___closed__7));
v___x_1323_ = lean_unsigned_to_nat(1024u);
v___x_1324_ = l_Lean_Name_reprPrec(v_n_1314_, v___x_1323_);
if (v_isShared_1318_ == 0)
{
lean_ctor_set_tag(v___x_1317_, 5);
lean_ctor_set(v___x_1317_, 1, v___x_1324_);
lean_ctor_set(v___x_1317_, 0, v___x_1322_);
v___x_1326_ = v___x_1317_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1322_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v___x_1324_);
v___x_1326_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1327_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
lean_ctor_set(v___x_1327_, 1, v___x_1321_);
v___x_1328_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_fields_1315_);
v___x_1329_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1327_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
lean_inc(v___y_1320_);
v___x_1330_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___y_1320_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = 0;
v___x_1332_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set_uint8(v___x_1332_, sizeof(void*)*1, v___x_1331_);
v___x_1333_ = l_Repr_addAppParen(v___x_1332_, v_prec_1298_);
return v___x_1333_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprPreresolved_repr___boxed(lean_object* v_x_1340_, lean_object* v_prec_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = l_Lean_Syntax_instReprPreresolved_repr(v_x_1340_, v_prec_1341_);
lean_dec(v_prec_1341_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0_spec__1(lean_object* v_a_1343_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_nat_to_int(v_a_1343_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0(lean_object* v_a_1345_, lean_object* v_n_1346_){
_start:
{
lean_object* v___x_1347_; 
v___x_1347_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg(v_a_1345_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___boxed(lean_object* v_a_1348_, lean_object* v_n_1349_){
_start:
{
lean_object* v_res_1350_; 
v_res_1350_ = l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0(v_a_1348_, v_n_1349_);
lean_dec(v_n_1349_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(lean_object* v___y_1353_){
_start:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = lean_unsigned_to_nat(0u);
v___x_1355_ = l_Lean_Syntax_instReprPreresolved_repr(v___y_1353_, v___x_1354_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4_spec__6(lean_object* v_x_1356_, lean_object* v_x_1357_, lean_object* v_x_1358_){
_start:
{
if (lean_obj_tag(v_x_1358_) == 0)
{
lean_dec(v_x_1356_);
return v_x_1357_;
}
else
{
lean_object* v_head_1359_; lean_object* v_tail_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1371_; 
v_head_1359_ = lean_ctor_get(v_x_1358_, 0);
v_tail_1360_ = lean_ctor_get(v_x_1358_, 1);
v_isSharedCheck_1371_ = !lean_is_exclusive(v_x_1358_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1362_ = v_x_1358_;
v_isShared_1363_ = v_isSharedCheck_1371_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_tail_1360_);
lean_inc(v_head_1359_);
lean_dec(v_x_1358_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1371_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
lean_inc(v_x_1356_);
if (v_isShared_1363_ == 0)
{
lean_ctor_set_tag(v___x_1362_, 5);
lean_ctor_set(v___x_1362_, 1, v_x_1356_);
lean_ctor_set(v___x_1362_, 0, v_x_1357_);
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_x_1357_);
lean_ctor_set(v_reuseFailAlloc_1370_, 1, v_x_1356_);
v___x_1365_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1366_ = lean_unsigned_to_nat(0u);
v___x_1367_ = l_Lean_Syntax_instReprPreresolved_repr(v_head_1359_, v___x_1366_);
v___x_1368_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1365_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
v_x_1357_ = v___x_1368_;
v_x_1358_ = v_tail_1360_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4(lean_object* v_x_1372_, lean_object* v_x_1373_, lean_object* v_x_1374_){
_start:
{
if (lean_obj_tag(v_x_1374_) == 0)
{
lean_dec(v_x_1372_);
return v_x_1373_;
}
else
{
lean_object* v_head_1375_; lean_object* v_tail_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1387_; 
v_head_1375_ = lean_ctor_get(v_x_1374_, 0);
v_tail_1376_ = lean_ctor_get(v_x_1374_, 1);
v_isSharedCheck_1387_ = !lean_is_exclusive(v_x_1374_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1378_ = v_x_1374_;
v_isShared_1379_ = v_isSharedCheck_1387_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_tail_1376_);
lean_inc(v_head_1375_);
lean_dec(v_x_1374_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1387_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
lean_inc(v_x_1372_);
if (v_isShared_1379_ == 0)
{
lean_ctor_set_tag(v___x_1378_, 5);
lean_ctor_set(v___x_1378_, 1, v_x_1372_);
lean_ctor_set(v___x_1378_, 0, v_x_1373_);
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_x_1373_);
lean_ctor_set(v_reuseFailAlloc_1386_, 1, v_x_1372_);
v___x_1381_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1382_ = lean_unsigned_to_nat(0u);
v___x_1383_ = l_Lean_Syntax_instReprPreresolved_repr(v_head_1375_, v___x_1382_);
v___x_1384_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1381_);
lean_ctor_set(v___x_1384_, 1, v___x_1383_);
v___x_1385_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4_spec__6(v_x_1372_, v___x_1384_, v_tail_1376_);
return v___x_1385_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2(lean_object* v_x_1388_, lean_object* v_x_1389_){
_start:
{
if (lean_obj_tag(v_x_1388_) == 0)
{
lean_object* v___x_1390_; 
lean_dec(v_x_1389_);
v___x_1390_ = lean_box(0);
return v___x_1390_;
}
else
{
lean_object* v_tail_1391_; 
v_tail_1391_ = lean_ctor_get(v_x_1388_, 1);
if (lean_obj_tag(v_tail_1391_) == 0)
{
lean_object* v_head_1392_; lean_object* v___x_1393_; 
lean_dec(v_x_1389_);
v_head_1392_ = lean_ctor_get(v_x_1388_, 0);
lean_inc(v_head_1392_);
lean_dec_ref_known(v_x_1388_, 2);
v___x_1393_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(v_head_1392_);
return v___x_1393_;
}
else
{
lean_object* v_head_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
lean_inc(v_tail_1391_);
v_head_1394_ = lean_ctor_get(v_x_1388_, 0);
lean_inc(v_head_1394_);
lean_dec_ref_known(v_x_1388_, 2);
v___x_1395_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2___lam__0(v_head_1394_);
v___x_1396_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2_spec__4(v_x_1389_, v___x_1395_, v_tail_1391_);
return v___x_1396_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(lean_object* v_a_1397_){
_start:
{
if (lean_obj_tag(v_a_1397_) == 0)
{
lean_object* v___x_1398_; 
v___x_1398_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__1));
return v___x_1398_;
}
else
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; uint8_t v___x_1407_; lean_object* v___x_1408_; 
v___x_1399_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5));
v___x_1400_ = l_Std_Format_joinSep___at___00List_repr___at___00Lean_Syntax_instRepr_repr_spec__1_spec__2(v_a_1397_, v___x_1399_);
v___x_1401_ = lean_obj_once(&l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8, &l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8_once, _init_l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__8);
v___x_1402_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__9));
v___x_1403_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1402_);
lean_ctor_set(v___x_1403_, 1, v___x_1400_);
v___x_1404_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10));
v___x_1405_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1403_);
lean_ctor_set(v___x_1405_, 1, v___x_1404_);
v___x_1406_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1401_);
lean_ctor_set(v___x_1406_, 1, v___x_1405_);
v___x_1407_ = 0;
v___x_1408_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1408_, 0, v___x_1406_);
lean_ctor_set_uint8(v___x_1408_, sizeof(void*)*1, v___x_1407_);
return v___x_1408_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1_spec__3(lean_object* v_x_1418_, lean_object* v_x_1419_, lean_object* v_x_1420_){
_start:
{
if (lean_obj_tag(v_x_1420_) == 0)
{
lean_dec(v_x_1418_);
return v_x_1419_;
}
else
{
lean_object* v_head_1421_; lean_object* v_tail_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1433_; 
v_head_1421_ = lean_ctor_get(v_x_1420_, 0);
v_tail_1422_ = lean_ctor_get(v_x_1420_, 1);
v_isSharedCheck_1433_ = !lean_is_exclusive(v_x_1420_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1424_ = v_x_1420_;
v_isShared_1425_ = v_isSharedCheck_1433_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_tail_1422_);
lean_inc(v_head_1421_);
lean_dec(v_x_1420_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1433_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
lean_inc(v_x_1418_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set_tag(v___x_1424_, 5);
lean_ctor_set(v___x_1424_, 1, v_x_1418_);
lean_ctor_set(v___x_1424_, 0, v_x_1419_);
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_x_1419_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v_x_1418_);
v___x_1427_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1428_ = lean_unsigned_to_nat(0u);
v___x_1429_ = l_Lean_Syntax_instRepr_repr(v_head_1421_, v___x_1428_);
v___x_1430_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1427_);
lean_ctor_set(v___x_1430_, 1, v___x_1429_);
v_x_1419_ = v___x_1430_;
v_x_1420_ = v_tail_1422_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1(lean_object* v_x_1434_, lean_object* v_x_1435_, lean_object* v_x_1436_){
_start:
{
if (lean_obj_tag(v_x_1436_) == 0)
{
lean_dec(v_x_1434_);
return v_x_1435_;
}
else
{
lean_object* v_head_1437_; lean_object* v_tail_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1449_; 
v_head_1437_ = lean_ctor_get(v_x_1436_, 0);
v_tail_1438_ = lean_ctor_get(v_x_1436_, 1);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_x_1436_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1440_ = v_x_1436_;
v_isShared_1441_ = v_isSharedCheck_1449_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_tail_1438_);
lean_inc(v_head_1437_);
lean_dec(v_x_1436_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1449_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
lean_inc(v_x_1434_);
if (v_isShared_1441_ == 0)
{
lean_ctor_set_tag(v___x_1440_, 5);
lean_ctor_set(v___x_1440_, 1, v_x_1434_);
lean_ctor_set(v___x_1440_, 0, v_x_1435_);
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_x_1435_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_x_1434_);
v___x_1443_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v___x_1444_ = lean_unsigned_to_nat(0u);
v___x_1445_ = l_Lean_Syntax_instRepr_repr(v_head_1437_, v___x_1444_);
v___x_1446_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1443_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1_spec__3(v_x_1434_, v___x_1446_, v_tail_1438_);
return v___x_1447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0(lean_object* v_x_1450_, lean_object* v_x_1451_){
_start:
{
if (lean_obj_tag(v_x_1450_) == 0)
{
lean_object* v___x_1452_; 
lean_dec(v_x_1451_);
v___x_1452_ = lean_box(0);
return v___x_1452_;
}
else
{
lean_object* v_tail_1453_; 
v_tail_1453_ = lean_ctor_get(v_x_1450_, 1);
if (lean_obj_tag(v_tail_1453_) == 0)
{
lean_object* v_head_1454_; lean_object* v___x_1455_; 
lean_dec(v_x_1451_);
v_head_1454_ = lean_ctor_get(v_x_1450_, 0);
lean_inc(v_head_1454_);
lean_dec_ref_known(v_x_1450_, 2);
v___x_1455_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(v_head_1454_);
return v___x_1455_;
}
else
{
lean_object* v_head_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
lean_inc(v_tail_1453_);
v_head_1456_ = lean_ctor_get(v_x_1450_, 0);
lean_inc(v_head_1456_);
lean_dec_ref_known(v_x_1450_, 2);
v___x_1457_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(v_head_1456_);
v___x_1458_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0_spec__1(v_x_1451_, v___x_1457_, v_tail_1453_);
return v___x_1458_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1460_ = ((lean_object*)(l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__0));
v___x_1461_ = lean_string_length(v___x_1460_);
return v___x_1461_;
}
}
static lean_object* _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = lean_obj_once(&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1, &l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1_once, _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__1);
v___x_1463_ = lean_nat_to_int(v___x_1462_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0(lean_object* v_xs_1469_){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; uint8_t v___x_1472_; 
v___x_1470_ = lean_array_get_size(v_xs_1469_);
v___x_1471_ = lean_unsigned_to_nat(0u);
v___x_1472_ = lean_nat_dec_eq(v___x_1470_, v___x_1471_);
if (v___x_1472_ == 0)
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1473_ = lean_array_to_list(v_xs_1469_);
v___x_1474_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__5));
v___x_1475_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0(v___x_1473_, v___x_1474_);
v___x_1476_ = lean_obj_once(&l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2, &l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__2);
v___x_1477_ = ((lean_object*)(l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__3));
v___x_1478_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
lean_ctor_set(v___x_1478_, 1, v___x_1475_);
v___x_1479_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__10));
v___x_1480_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1480_, 0, v___x_1478_);
lean_ctor_set(v___x_1480_, 1, v___x_1479_);
v___x_1481_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1476_);
lean_ctor_set(v___x_1481_, 1, v___x_1480_);
v___x_1482_ = l_Std_Format_fill(v___x_1481_);
return v___x_1482_;
}
else
{
lean_object* v___x_1483_; 
lean_dec_ref(v_xs_1469_);
v___x_1483_ = ((lean_object*)(l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0___closed__5));
return v___x_1483_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr(lean_object* v_x_1497_, lean_object* v_prec_1498_){
_start:
{
lean_object* v___y_1500_; 
switch(lean_obj_tag(v_x_1497_))
{
case 0:
{
lean_object* v___x_1506_; uint8_t v___x_1507_; 
v___x_1506_ = lean_unsigned_to_nat(1024u);
v___x_1507_ = lean_nat_dec_le(v___x_1506_, v_prec_1498_);
if (v___x_1507_ == 0)
{
lean_object* v___x_1508_; 
v___x_1508_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1500_ = v___x_1508_;
goto v___jp_1499_;
}
else
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1500_ = v___x_1509_;
goto v___jp_1499_;
}
}
case 1:
{
lean_object* v_info_1510_; lean_object* v_kind_1511_; lean_object* v_args_1512_; lean_object* v___y_1514_; lean_object* v___x_1530_; uint8_t v___x_1531_; 
v_info_1510_ = lean_ctor_get(v_x_1497_, 0);
lean_inc(v_info_1510_);
v_kind_1511_ = lean_ctor_get(v_x_1497_, 1);
lean_inc(v_kind_1511_);
v_args_1512_ = lean_ctor_get(v_x_1497_, 2);
lean_inc_ref(v_args_1512_);
lean_dec_ref_known(v_x_1497_, 3);
v___x_1530_ = lean_unsigned_to_nat(1024u);
v___x_1531_ = lean_nat_dec_le(v___x_1530_, v_prec_1498_);
if (v___x_1531_ == 0)
{
lean_object* v___x_1532_; 
v___x_1532_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1514_ = v___x_1532_;
goto v___jp_1513_;
}
else
{
lean_object* v___x_1533_; 
v___x_1533_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1514_ = v___x_1533_;
goto v___jp_1513_;
}
v___jp_1513_:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; uint8_t v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
v___x_1515_ = lean_box(1);
v___x_1516_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__4));
v___x_1517_ = lean_unsigned_to_nat(1024u);
v___x_1518_ = l_instReprSourceInfo_repr(v_info_1510_, v___x_1517_);
v___x_1519_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1516_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
v___x_1520_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1519_);
lean_ctor_set(v___x_1520_, 1, v___x_1515_);
v___x_1521_ = l_Lean_Name_reprPrec(v_kind_1511_, v___x_1517_);
v___x_1522_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1520_);
lean_ctor_set(v___x_1522_, 1, v___x_1521_);
v___x_1523_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1522_);
lean_ctor_set(v___x_1523_, 1, v___x_1515_);
v___x_1524_ = l_Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0(v_args_1512_);
v___x_1525_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1525_, 0, v___x_1523_);
lean_ctor_set(v___x_1525_, 1, v___x_1524_);
lean_inc(v___y_1514_);
v___x_1526_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1526_, 0, v___y_1514_);
lean_ctor_set(v___x_1526_, 1, v___x_1525_);
v___x_1527_ = 0;
v___x_1528_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1528_, 0, v___x_1526_);
lean_ctor_set_uint8(v___x_1528_, sizeof(void*)*1, v___x_1527_);
v___x_1529_ = l_Repr_addAppParen(v___x_1528_, v_prec_1498_);
return v___x_1529_;
}
}
case 2:
{
lean_object* v_info_1534_; lean_object* v_val_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1560_; 
v_info_1534_ = lean_ctor_get(v_x_1497_, 0);
v_val_1535_ = lean_ctor_get(v_x_1497_, 1);
v_isSharedCheck_1560_ = !lean_is_exclusive(v_x_1497_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1537_ = v_x_1497_;
v_isShared_1538_ = v_isSharedCheck_1560_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_val_1535_);
lean_inc(v_info_1534_);
lean_dec(v_x_1497_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1560_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___y_1540_; lean_object* v___x_1556_; uint8_t v___x_1557_; 
v___x_1556_ = lean_unsigned_to_nat(1024u);
v___x_1557_ = lean_nat_dec_le(v___x_1556_, v_prec_1498_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1558_; 
v___x_1558_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1540_ = v___x_1558_;
goto v___jp_1539_;
}
else
{
lean_object* v___x_1559_; 
v___x_1559_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1540_ = v___x_1559_;
goto v___jp_1539_;
}
v___jp_1539_:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1546_; 
v___x_1541_ = lean_box(1);
v___x_1542_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__7));
v___x_1543_ = lean_unsigned_to_nat(1024u);
v___x_1544_ = l_instReprSourceInfo_repr(v_info_1534_, v___x_1543_);
if (v_isShared_1538_ == 0)
{
lean_ctor_set_tag(v___x_1537_, 5);
lean_ctor_set(v___x_1537_, 1, v___x_1544_);
lean_ctor_set(v___x_1537_, 0, v___x_1542_);
v___x_1546_ = v___x_1537_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1542_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v___x_1544_);
v___x_1546_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; uint8_t v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1547_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
lean_ctor_set(v___x_1547_, 1, v___x_1541_);
v___x_1548_ = l_String_quote(v_val_1535_);
v___x_1549_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1548_);
v___x_1550_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1547_);
lean_ctor_set(v___x_1550_, 1, v___x_1549_);
lean_inc(v___y_1540_);
v___x_1551_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___y_1540_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = 0;
v___x_1553_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1553_, 0, v___x_1551_);
lean_ctor_set_uint8(v___x_1553_, sizeof(void*)*1, v___x_1552_);
v___x_1554_ = l_Repr_addAppParen(v___x_1553_, v_prec_1498_);
return v___x_1554_;
}
}
}
}
default: 
{
lean_object* v_info_1561_; lean_object* v_rawVal_1562_; lean_object* v_val_1563_; lean_object* v_preresolved_1564_; lean_object* v___y_1566_; lean_object* v___x_1589_; uint8_t v___x_1590_; 
v_info_1561_ = lean_ctor_get(v_x_1497_, 0);
lean_inc(v_info_1561_);
v_rawVal_1562_ = lean_ctor_get(v_x_1497_, 1);
lean_inc_ref(v_rawVal_1562_);
v_val_1563_ = lean_ctor_get(v_x_1497_, 2);
lean_inc(v_val_1563_);
v_preresolved_1564_ = lean_ctor_get(v_x_1497_, 3);
lean_inc(v_preresolved_1564_);
lean_dec_ref_known(v_x_1497_, 4);
v___x_1589_ = lean_unsigned_to_nat(1024u);
v___x_1590_ = lean_nat_dec_le(v___x_1589_, v_prec_1498_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; 
v___x_1591_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_1566_ = v___x_1591_;
goto v___jp_1565_;
}
else
{
lean_object* v___x_1592_; 
v___x_1592_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_1566_ = v___x_1592_;
goto v___jp_1565_;
}
v___jp_1565_:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; uint8_t v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1567_ = lean_box(1);
v___x_1568_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__10));
v___x_1569_ = lean_unsigned_to_nat(1024u);
v___x_1570_ = l_instReprSourceInfo_repr(v_info_1561_, v___x_1569_);
v___x_1571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1568_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
v___x_1572_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1572_, 0, v___x_1571_);
lean_ctor_set(v___x_1572_, 1, v___x_1567_);
v___x_1573_ = lean_substring_tostring(v_rawVal_1562_);
v___x_1574_ = l_String_quote(v___x_1573_);
v___x_1575_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__11));
v___x_1576_ = lean_string_append(v___x_1574_, v___x_1575_);
v___x_1577_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1576_);
v___x_1578_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1572_);
lean_ctor_set(v___x_1578_, 1, v___x_1577_);
v___x_1579_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
lean_ctor_set(v___x_1579_, 1, v___x_1567_);
v___x_1580_ = l_Lean_Name_reprPrec(v_val_1563_, v___x_1569_);
v___x_1581_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1579_);
lean_ctor_set(v___x_1581_, 1, v___x_1580_);
v___x_1582_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1581_);
lean_ctor_set(v___x_1582_, 1, v___x_1567_);
v___x_1583_ = l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(v_preresolved_1564_);
v___x_1584_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1584_, 0, v___x_1582_);
lean_ctor_set(v___x_1584_, 1, v___x_1583_);
lean_inc(v___y_1566_);
v___x_1585_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1585_, 0, v___y_1566_);
lean_ctor_set(v___x_1585_, 1, v___x_1584_);
v___x_1586_ = 0;
v___x_1587_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1587_, 0, v___x_1585_);
lean_ctor_set_uint8(v___x_1587_, sizeof(void*)*1, v___x_1586_);
v___x_1588_ = l_Repr_addAppParen(v___x_1587_, v_prec_1498_);
return v___x_1588_;
}
}
}
v___jp_1499_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; uint8_t v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1501_ = ((lean_object*)(l_Lean_Syntax_instRepr_repr___closed__1));
lean_inc(v___y_1500_);
v___x_1502_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1502_, 0, v___y_1500_);
lean_ctor_set(v___x_1502_, 1, v___x_1501_);
v___x_1503_ = 0;
v___x_1504_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1504_, 0, v___x_1502_);
lean_ctor_set_uint8(v___x_1504_, sizeof(void*)*1, v___x_1503_);
v___x_1505_ = l_Repr_addAppParen(v___x_1504_, v_prec_1498_);
return v___x_1505_;
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Syntax_instRepr_repr_spec__0_spec__0___lam__0(lean_object* v___y_1593_){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1594_ = lean_unsigned_to_nat(0u);
v___x_1595_ = l_Lean_Syntax_instRepr_repr(v___y_1593_, v___x_1594_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instRepr_repr___boxed(lean_object* v_x_1596_, lean_object* v_prec_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_Lean_Syntax_instRepr_repr(v_x_1596_, v_prec_1597_);
lean_dec(v_prec_1597_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1(lean_object* v_a_1599_, lean_object* v_n_1600_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___redArg(v_a_1599_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1___boxed(lean_object* v_a_1602_, lean_object* v_n_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l_List_repr___at___00Lean_Syntax_instRepr_repr_spec__1(v_a_1602_, v_n_1603_);
lean_dec(v_n_1603_);
return v_res_1604_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1620_ = lean_unsigned_to_nat(7u);
v___x_1621_ = lean_nat_to_int(v___x_1620_);
return v___x_1621_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1623_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__0));
v___x_1624_ = lean_string_length(v___x_1623_);
return v___x_1624_;
}
}
static lean_object* _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1625_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__9);
v___x_1626_ = lean_nat_to_int(v___x_1625_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___redArg(lean_object* v_x_1631_){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; uint8_t v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1632_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__6));
v___x_1633_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7);
v___x_1634_ = lean_unsigned_to_nat(0u);
v___x_1635_ = l_Lean_Syntax_instRepr_repr(v_x_1631_, v___x_1634_);
v___x_1636_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1633_);
lean_ctor_set(v___x_1636_, 1, v___x_1635_);
v___x_1637_ = 0;
v___x_1638_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1638_, 0, v___x_1636_);
lean_ctor_set_uint8(v___x_1638_, sizeof(void*)*1, v___x_1637_);
v___x_1639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1632_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
v___x_1640_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10);
v___x_1641_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11));
v___x_1642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1641_);
lean_ctor_set(v___x_1642_, 1, v___x_1639_);
v___x_1643_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12));
v___x_1644_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1642_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
v___x_1645_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1640_);
lean_ctor_set(v___x_1645_, 1, v___x_1644_);
v___x_1646_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1646_, 0, v___x_1645_);
lean_ctor_set_uint8(v___x_1646_, sizeof(void*)*1, v___x_1637_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr(lean_object* v_ks_1647_, lean_object* v_x_1648_, lean_object* v_prec_1649_){
_start:
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lean_Syntax_instReprTSyntax_repr___redArg(v_x_1648_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax_repr___boxed(lean_object* v_ks_1651_, lean_object* v_x_1652_, lean_object* v_prec_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l_Lean_Syntax_instReprTSyntax_repr(v_ks_1651_, v_x_1652_, v_prec_1653_);
lean_dec(v_prec_1653_);
lean_dec(v_ks_1651_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instReprTSyntax(lean_object* v_ks_1655_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = lean_alloc_closure((void*)(l_Lean_Syntax_instReprTSyntax_repr___boxed), 3, 1);
lean_closure_set(v___x_1656_, 0, v_ks_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0(lean_object* v_stx_1657_){
_start:
{
lean_inc(v_stx_1657_);
return v_stx_1657_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0___boxed(lean_object* v_stx_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___lam__0(v_stx_1658_);
lean_dec(v_stx_1658_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg(){
_start:
{
lean_object* v___f_1662_; 
v___f_1662_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1662_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___boxed(lean_object* v___dummy_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg();
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil(lean_object* v_k_1665_, lean_object* v_ks_1666_){
_start:
{
lean_object* v___f_1667_; 
v___f_1667_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1667_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___boxed(lean_object* v_k_1668_, lean_object* v_ks_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil(v_k_1668_, v_ks_1669_);
lean_dec(v_ks_1669_);
lean_dec(v_k_1668_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg(){
_start:
{
lean_object* v___f_1672_; 
v___f_1672_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg___boxed(lean_object* v___dummy_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKind___redArg();
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind(lean_object* v_ks_1675_, lean_object* v_k_x27_1676_){
_start:
{
lean_object* v___f_1677_; 
v___f_1677_ = ((lean_object*)(l_Lean_TSyntax_instCoeConsSyntaxNodeKindNil___redArg___closed__0));
return v___f_1677_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeConsSyntaxNodeKind___boxed(lean_object* v_ks_1678_, lean_object* v_k_x27_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Lean_TSyntax_instCoeConsSyntaxNodeKind(v_ks_1678_, v_k_x27_1679_);
lean_dec(v_k_x27_1679_);
lean_dec(v_ks_1678_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0(lean_object* v_s_1681_){
_start:
{
lean_inc(v_s_1681_);
return v_s_1681_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeIdentTerm___lam__0___boxed(lean_object* v_s_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l_Lean_TSyntax_instCoeIdentTerm___lam__0(v_s_1682_);
lean_dec(v_s_1682_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_instCoeDepTermMkIdentIdent(lean_object* v_info_1686_, lean_object* v_ss_1687_, lean_object* v_n_1688_, lean_object* v_res_1689_){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1690_, 0, v_info_1686_);
lean_ctor_set(v___x_1690_, 1, v_ss_1687_);
lean_ctor_set(v___x_1690_, 2, v_n_1688_);
lean_ctor_set(v___x_1690_, 3, v_res_1689_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg(){
_start:
{
lean_object* v___f_1700_; 
v___f_1700_ = ((lean_object*)(l_Lean_TSyntax_instCoeIdentTerm___closed__0));
return v___f_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg___boxed(lean_object* v___dummy_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Lean_TSyntax_Compat_instCoeTailSyntax___redArg();
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax(lean_object* v_k_1703_){
_start:
{
lean_object* v___f_1704_; 
v___f_1704_ = ((lean_object*)(l_Lean_TSyntax_instCoeIdentTerm___closed__0));
return v___f_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailSyntax___boxed(lean_object* v_k_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l_Lean_TSyntax_Compat_instCoeTailSyntax(v_k_1705_);
lean_dec(v_k_1705_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSyntaxArray(lean_object* v_k_1707_){
_start:
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_alloc_closure((void*)(l_Lean_TSyntaxArray_mkImpl___boxed), 2, 1);
lean_closure_set(v___x_1708_, 0, v_k_1707_);
return v___x_1708_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(lean_object* v_x_1709_, lean_object* v_x_1710_){
_start:
{
if (lean_obj_tag(v_x_1709_) == 0)
{
if (lean_obj_tag(v_x_1710_) == 0)
{
uint8_t v___x_1711_; 
v___x_1711_ = 1;
return v___x_1711_;
}
else
{
uint8_t v___x_1712_; 
v___x_1712_ = 0;
return v___x_1712_;
}
}
else
{
if (lean_obj_tag(v_x_1710_) == 0)
{
uint8_t v___x_1713_; 
v___x_1713_ = 0;
return v___x_1713_;
}
else
{
lean_object* v_head_1714_; lean_object* v_tail_1715_; lean_object* v_head_1716_; lean_object* v_tail_1717_; uint8_t v___x_1718_; 
v_head_1714_ = lean_ctor_get(v_x_1709_, 0);
v_tail_1715_ = lean_ctor_get(v_x_1709_, 1);
v_head_1716_ = lean_ctor_get(v_x_1710_, 0);
v_tail_1717_ = lean_ctor_get(v_x_1710_, 1);
v___x_1718_ = lean_string_dec_eq(v_head_1714_, v_head_1716_);
if (v___x_1718_ == 0)
{
return v___x_1718_;
}
else
{
v_x_1709_ = v_tail_1715_;
v_x_1710_ = v_tail_1717_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0___boxed(lean_object* v_x_1720_, lean_object* v_x_1721_){
_start:
{
uint8_t v_res_1722_; lean_object* v_r_1723_; 
v_res_1722_ = l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(v_x_1720_, v_x_1721_);
lean_dec(v_x_1721_);
lean_dec(v_x_1720_);
v_r_1723_ = lean_box(v_res_1722_);
return v_r_1723_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_instBEqPreresolved_beq(lean_object* v_x_1724_, lean_object* v_x_1725_){
_start:
{
if (lean_obj_tag(v_x_1724_) == 0)
{
if (lean_obj_tag(v_x_1725_) == 0)
{
lean_object* v_ns_1726_; lean_object* v_ns_1727_; uint8_t v___x_1728_; 
v_ns_1726_ = lean_ctor_get(v_x_1724_, 0);
v_ns_1727_ = lean_ctor_get(v_x_1725_, 0);
v___x_1728_ = lean_name_eq(v_ns_1726_, v_ns_1727_);
return v___x_1728_;
}
else
{
uint8_t v___x_1729_; 
v___x_1729_ = 0;
return v___x_1729_;
}
}
else
{
if (lean_obj_tag(v_x_1725_) == 1)
{
lean_object* v_n_1730_; lean_object* v_fields_1731_; lean_object* v_n_1732_; lean_object* v_fields_1733_; uint8_t v___x_1734_; 
v_n_1730_ = lean_ctor_get(v_x_1724_, 0);
v_fields_1731_ = lean_ctor_get(v_x_1724_, 1);
v_n_1732_ = lean_ctor_get(v_x_1725_, 0);
v_fields_1733_ = lean_ctor_get(v_x_1725_, 1);
v___x_1734_ = lean_name_eq(v_n_1730_, v_n_1732_);
if (v___x_1734_ == 0)
{
return v___x_1734_;
}
else
{
uint8_t v___x_1735_; 
v___x_1735_ = l_List_beq___at___00Lean_Syntax_instBEqPreresolved_beq_spec__0(v_fields_1731_, v_fields_1733_);
return v___x_1735_;
}
}
else
{
uint8_t v___x_1736_; 
v___x_1736_ = 0;
return v___x_1736_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqPreresolved_beq___boxed(lean_object* v_x_1737_, lean_object* v_x_1738_){
_start:
{
uint8_t v_res_1739_; lean_object* v_r_1740_; 
v_res_1739_ = l_Lean_Syntax_instBEqPreresolved_beq(v_x_1737_, v_x_1738_);
lean_dec_ref(v_x_1738_);
lean_dec_ref(v_x_1737_);
v_r_1740_ = lean_box(v_res_1739_);
return v_r_1740_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Syntax_structEq_spec__1(lean_object* v_x_1743_, lean_object* v_x_1744_){
_start:
{
if (lean_obj_tag(v_x_1743_) == 0)
{
if (lean_obj_tag(v_x_1744_) == 0)
{
uint8_t v___x_1745_; 
v___x_1745_ = 1;
return v___x_1745_;
}
else
{
uint8_t v___x_1746_; 
v___x_1746_ = 0;
return v___x_1746_;
}
}
else
{
if (lean_obj_tag(v_x_1744_) == 0)
{
uint8_t v___x_1747_; 
v___x_1747_ = 0;
return v___x_1747_;
}
else
{
lean_object* v_head_1748_; lean_object* v_tail_1749_; lean_object* v_head_1750_; lean_object* v_tail_1751_; uint8_t v___x_1752_; 
v_head_1748_ = lean_ctor_get(v_x_1743_, 0);
v_tail_1749_ = lean_ctor_get(v_x_1743_, 1);
v_head_1750_ = lean_ctor_get(v_x_1744_, 0);
v_tail_1751_ = lean_ctor_get(v_x_1744_, 1);
v___x_1752_ = l_Lean_Syntax_instBEqPreresolved_beq(v_head_1748_, v_head_1750_);
if (v___x_1752_ == 0)
{
return v___x_1752_;
}
else
{
v_x_1743_ = v_tail_1749_;
v_x_1744_ = v_tail_1751_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Syntax_structEq_spec__1___boxed(lean_object* v_x_1754_, lean_object* v_x_1755_){
_start:
{
uint8_t v_res_1756_; lean_object* v_r_1757_; 
v_res_1756_ = l_List_beq___at___00Lean_Syntax_structEq_spec__1(v_x_1754_, v_x_1755_);
lean_dec(v_x_1755_);
lean_dec(v_x_1754_);
v_r_1757_ = lean_box(v_res_1756_);
return v_r_1757_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_structEq(lean_object* v_x_1758_, lean_object* v_x_1759_){
_start:
{
switch(lean_obj_tag(v_x_1758_))
{
case 0:
{
if (lean_obj_tag(v_x_1759_) == 0)
{
uint8_t v___x_1760_; 
v___x_1760_ = 1;
return v___x_1760_;
}
else
{
uint8_t v___x_1761_; 
v___x_1761_ = 0;
return v___x_1761_;
}
}
case 1:
{
if (lean_obj_tag(v_x_1759_) == 1)
{
lean_object* v_kind_1762_; lean_object* v_args_1763_; lean_object* v_kind_1764_; lean_object* v_args_1765_; uint8_t v___x_1766_; 
v_kind_1762_ = lean_ctor_get(v_x_1758_, 1);
v_args_1763_ = lean_ctor_get(v_x_1758_, 2);
v_kind_1764_ = lean_ctor_get(v_x_1759_, 1);
v_args_1765_ = lean_ctor_get(v_x_1759_, 2);
v___x_1766_ = lean_name_eq(v_kind_1762_, v_kind_1764_);
if (v___x_1766_ == 0)
{
return v___x_1766_;
}
else
{
lean_object* v___x_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; 
v___x_1767_ = lean_array_get_size(v_args_1763_);
v___x_1768_ = lean_array_get_size(v_args_1765_);
v___x_1769_ = lean_nat_dec_eq(v___x_1767_, v___x_1768_);
if (v___x_1769_ == 0)
{
return v___x_1769_;
}
else
{
uint8_t v___x_1770_; 
v___x_1770_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(v_args_1763_, v_args_1765_, v___x_1767_);
return v___x_1770_;
}
}
}
else
{
uint8_t v___x_1771_; 
v___x_1771_ = 0;
return v___x_1771_;
}
}
case 2:
{
if (lean_obj_tag(v_x_1759_) == 2)
{
lean_object* v_val_1772_; lean_object* v_val_1773_; uint8_t v___x_1774_; 
v_val_1772_ = lean_ctor_get(v_x_1758_, 1);
v_val_1773_ = lean_ctor_get(v_x_1759_, 1);
v___x_1774_ = lean_string_dec_eq(v_val_1772_, v_val_1773_);
return v___x_1774_;
}
else
{
uint8_t v___x_1775_; 
v___x_1775_ = 0;
return v___x_1775_;
}
}
default: 
{
if (lean_obj_tag(v_x_1759_) == 3)
{
lean_object* v_rawVal_1776_; lean_object* v_val_1777_; lean_object* v_preresolved_1778_; lean_object* v_rawVal_1779_; lean_object* v_val_1780_; lean_object* v_preresolved_1781_; uint8_t v___x_1782_; 
v_rawVal_1776_ = lean_ctor_get(v_x_1758_, 1);
v_val_1777_ = lean_ctor_get(v_x_1758_, 2);
v_preresolved_1778_ = lean_ctor_get(v_x_1758_, 3);
v_rawVal_1779_ = lean_ctor_get(v_x_1759_, 1);
v_val_1780_ = lean_ctor_get(v_x_1759_, 2);
v_preresolved_1781_ = lean_ctor_get(v_x_1759_, 3);
lean_inc_ref(v_rawVal_1779_);
lean_inc_ref(v_rawVal_1776_);
v___x_1782_ = lean_substring_beq(v_rawVal_1776_, v_rawVal_1779_);
if (v___x_1782_ == 0)
{
return v___x_1782_;
}
else
{
uint8_t v___x_1783_; 
v___x_1783_ = lean_name_eq(v_val_1777_, v_val_1780_);
if (v___x_1783_ == 0)
{
return v___x_1783_;
}
else
{
uint8_t v___x_1784_; 
v___x_1784_ = l_List_beq___at___00Lean_Syntax_structEq_spec__1(v_preresolved_1778_, v_preresolved_1781_);
return v___x_1784_;
}
}
}
else
{
uint8_t v___x_1785_; 
v___x_1785_ = 0;
return v___x_1785_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(lean_object* v_xs_1786_, lean_object* v_ys_1787_, lean_object* v_x_1788_){
_start:
{
lean_object* v_zero_1789_; uint8_t v_isZero_1790_; 
v_zero_1789_ = lean_unsigned_to_nat(0u);
v_isZero_1790_ = lean_nat_dec_eq(v_x_1788_, v_zero_1789_);
if (v_isZero_1790_ == 1)
{
lean_dec(v_x_1788_);
return v_isZero_1790_;
}
else
{
lean_object* v_one_1791_; lean_object* v_n_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; uint8_t v___x_1795_; 
v_one_1791_ = lean_unsigned_to_nat(1u);
v_n_1792_ = lean_nat_sub(v_x_1788_, v_one_1791_);
lean_dec(v_x_1788_);
v___x_1793_ = lean_array_fget_borrowed(v_xs_1786_, v_n_1792_);
v___x_1794_ = lean_array_fget_borrowed(v_ys_1787_, v_n_1792_);
v___x_1795_ = l_Lean_Syntax_structEq(v___x_1793_, v___x_1794_);
if (v___x_1795_ == 0)
{
lean_dec(v_n_1792_);
return v___x_1795_;
}
else
{
v_x_1788_ = v_n_1792_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg___boxed(lean_object* v_xs_1797_, lean_object* v_ys_1798_, lean_object* v_x_1799_){
_start:
{
uint8_t v_res_1800_; lean_object* v_r_1801_; 
v_res_1800_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(v_xs_1797_, v_ys_1798_, v_x_1799_);
lean_dec_ref(v_ys_1798_);
lean_dec_ref(v_xs_1797_);
v_r_1801_ = lean_box(v_res_1800_);
return v_r_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_structEq___boxed(lean_object* v_x_1802_, lean_object* v_x_1803_){
_start:
{
uint8_t v_res_1804_; lean_object* v_r_1805_; 
v_res_1804_ = l_Lean_Syntax_structEq(v_x_1802_, v_x_1803_);
lean_dec(v_x_1803_);
lean_dec(v_x_1802_);
v_r_1805_ = lean_box(v_res_1804_);
return v_r_1805_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0(lean_object* v_xs_1806_, lean_object* v_ys_1807_, lean_object* v_hsz_1808_, lean_object* v_x_1809_, lean_object* v_x_1810_){
_start:
{
uint8_t v___x_1811_; 
v___x_1811_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___redArg(v_xs_1806_, v_ys_1807_, v_x_1809_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0___boxed(lean_object* v_xs_1812_, lean_object* v_ys_1813_, lean_object* v_hsz_1814_, lean_object* v_x_1815_, lean_object* v_x_1816_){
_start:
{
uint8_t v_res_1817_; lean_object* v_r_1818_; 
v_res_1817_ = l_Array_isEqvAux___at___00Lean_Syntax_structEq_spec__0(v_xs_1812_, v_ys_1813_, v_hsz_1814_, v_x_1815_, v_x_1816_);
lean_dec_ref(v_ys_1813_);
lean_dec_ref(v_xs_1812_);
v_r_1818_ = lean_box(v_res_1817_);
return v_r_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg(){
_start:
{
lean_object* v___f_1823_; 
v___f_1823_ = ((lean_object*)(l_Lean_Syntax_instBEqTSyntax___redArg___closed__0));
return v___f_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___redArg___boxed(lean_object* v___dummy_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l_Lean_Syntax_instBEqTSyntax___redArg();
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax(lean_object* v_k_1826_){
_start:
{
lean_object* v___f_1827_; 
v___f_1827_ = ((lean_object*)(l_Lean_Syntax_instBEqTSyntax___redArg___closed__0));
return v___f_1827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instBEqTSyntax___boxed(lean_object* v_k_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lean_Syntax_instBEqTSyntax(v_k_1828_);
lean_dec(v_k_1828_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(lean_object* v_as_1830_, lean_object* v_i_1831_){
_start:
{
lean_object* v_zero_1832_; uint8_t v_isZero_1833_; 
v_zero_1832_ = lean_unsigned_to_nat(0u);
v_isZero_1833_ = lean_nat_dec_eq(v_i_1831_, v_zero_1832_);
if (v_isZero_1833_ == 1)
{
lean_object* v___x_1834_; 
lean_dec(v_i_1831_);
v___x_1834_ = lean_box(0);
return v___x_1834_;
}
else
{
lean_object* v_one_1835_; lean_object* v_n_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
v_one_1835_ = lean_unsigned_to_nat(1u);
v_n_1836_ = lean_nat_sub(v_i_1831_, v_one_1835_);
lean_dec(v_i_1831_);
v___x_1837_ = lean_array_fget_borrowed(v_as_1830_, v_n_1836_);
v___x_1838_ = l_Lean_Syntax_getTailInfo_x3f(v___x_1837_);
if (lean_obj_tag(v___x_1838_) == 0)
{
v_i_1831_ = v_n_1836_;
goto _start;
}
else
{
lean_dec(v_n_1836_);
return v___x_1838_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f(lean_object* v_x_1840_){
_start:
{
switch(lean_obj_tag(v_x_1840_))
{
case 2:
{
lean_object* v_info_1841_; lean_object* v___x_1842_; 
v_info_1841_ = lean_ctor_get(v_x_1840_, 0);
lean_inc(v_info_1841_);
v___x_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1842_, 0, v_info_1841_);
return v___x_1842_;
}
case 3:
{
lean_object* v_info_1843_; lean_object* v___x_1844_; 
v_info_1843_ = lean_ctor_get(v_x_1840_, 0);
lean_inc(v_info_1843_);
v___x_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1844_, 0, v_info_1843_);
return v___x_1844_;
}
case 1:
{
lean_object* v_info_1845_; 
v_info_1845_ = lean_ctor_get(v_x_1840_, 0);
if (lean_obj_tag(v_info_1845_) == 2)
{
lean_object* v_args_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v_args_1846_ = lean_ctor_get(v_x_1840_, 2);
v___x_1847_ = lean_array_get_size(v_args_1846_);
v___x_1848_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(v_args_1846_, v___x_1847_);
return v___x_1848_;
}
else
{
lean_object* v___x_1849_; 
lean_inc(v_info_1845_);
v___x_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1849_, 0, v_info_1845_);
return v___x_1849_;
}
}
default: 
{
lean_object* v___x_1850_; 
v___x_1850_ = lean_box(0);
return v___x_1850_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo_x3f___boxed(lean_object* v_x_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l_Lean_Syntax_getTailInfo_x3f(v_x_1851_);
lean_dec(v_x_1851_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg___boxed(lean_object* v_as_1853_, lean_object* v_i_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(v_as_1853_, v_i_1854_);
lean_dec_ref(v_as_1853_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0(lean_object* v_as_1856_, lean_object* v_i_1857_, lean_object* v_a_1858_){
_start:
{
lean_object* v___x_1859_; 
v___x_1859_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___redArg(v_as_1856_, v_i_1857_);
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0___boxed(lean_object* v_as_1860_, lean_object* v_i_1861_, lean_object* v_a_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_Syntax_getTailInfo_x3f_spec__0(v_as_1860_, v_i_1861_, v_a_1862_);
lean_dec_ref(v_as_1860_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo(lean_object* v_stx_1864_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l_Lean_Syntax_getTailInfo_x3f(v_stx_1864_);
if (lean_obj_tag(v___x_1865_) == 0)
{
lean_object* v___x_1866_; 
v___x_1866_ = lean_box(2);
return v___x_1866_;
}
else
{
lean_object* v_val_1867_; 
v_val_1867_ = lean_ctor_get(v___x_1865_, 0);
lean_inc(v_val_1867_);
lean_dec_ref_known(v___x_1865_, 1);
return v_val_1867_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTailInfo___boxed(lean_object* v_stx_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Lean_Syntax_getTailInfo(v_stx_1868_);
lean_dec(v_stx_1868_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize(lean_object* v_stx_1870_){
_start:
{
lean_object* v___x_1871_; 
v___x_1871_ = l_Lean_Syntax_getTailInfo_x3f(v_stx_1870_);
if (lean_obj_tag(v___x_1871_) == 1)
{
lean_object* v_val_1872_; 
v_val_1872_ = lean_ctor_get(v___x_1871_, 0);
lean_inc(v_val_1872_);
lean_dec_ref_known(v___x_1871_, 1);
if (lean_obj_tag(v_val_1872_) == 0)
{
lean_object* v_trailing_1873_; lean_object* v_startPos_1874_; lean_object* v_stopPos_1875_; lean_object* v___x_1876_; 
v_trailing_1873_ = lean_ctor_get(v_val_1872_, 2);
lean_inc_ref(v_trailing_1873_);
lean_dec_ref_known(v_val_1872_, 4);
v_startPos_1874_ = lean_ctor_get(v_trailing_1873_, 1);
lean_inc(v_startPos_1874_);
v_stopPos_1875_ = lean_ctor_get(v_trailing_1873_, 2);
lean_inc(v_stopPos_1875_);
lean_dec_ref(v_trailing_1873_);
v___x_1876_ = lean_nat_sub(v_stopPos_1875_, v_startPos_1874_);
lean_dec(v_startPos_1874_);
lean_dec(v_stopPos_1875_);
return v___x_1876_;
}
else
{
lean_object* v___x_1877_; 
lean_dec(v_val_1872_);
v___x_1877_ = lean_unsigned_to_nat(0u);
return v___x_1877_;
}
}
else
{
lean_object* v___x_1878_; 
lean_dec(v___x_1871_);
v___x_1878_ = lean_unsigned_to_nat(0u);
return v___x_1878_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingSize___boxed(lean_object* v_stx_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l_Lean_Syntax_getTrailingSize(v_stx_1879_);
lean_dec(v_stx_1879_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f(lean_object* v_stx_1881_){
_start:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = l_Lean_Syntax_getTailInfo(v_stx_1881_);
v___x_1883_ = l_Lean_SourceInfo_getTrailing_x3f(v___x_1882_);
lean_dec(v___x_1882_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailing_x3f___boxed(lean_object* v_stx_1884_){
_start:
{
lean_object* v_res_1885_; 
v_res_1885_ = l_Lean_Syntax_getTrailing_x3f(v_stx_1884_);
lean_dec(v_stx_1884_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f(lean_object* v_stx_1886_, uint8_t v_canonicalOnly_1887_){
_start:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1888_ = l_Lean_Syntax_getTailInfo(v_stx_1886_);
v___x_1889_ = l_Lean_SourceInfo_getTrailingTailPos_x3f(v___x_1888_, v_canonicalOnly_1887_);
lean_dec(v___x_1888_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getTrailingTailPos_x3f___boxed(lean_object* v_stx_1890_, lean_object* v_canonicalOnly_1891_){
_start:
{
uint8_t v_canonicalOnly_boxed_1892_; lean_object* v_res_1893_; 
v_canonicalOnly_boxed_1892_ = lean_unbox(v_canonicalOnly_1891_);
v_res_1893_ = l_Lean_Syntax_getTrailingTailPos_x3f(v_stx_1890_, v_canonicalOnly_boxed_1892_);
lean_dec(v_stx_1890_);
return v_res_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f(lean_object* v_stx_1894_, uint8_t v_withLeading_1895_, uint8_t v_withTrailing_1896_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = l_Lean_Syntax_getHeadInfo(v_stx_1894_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v_leading_1898_; lean_object* v_pos_1899_; lean_object* v___x_1900_; 
v_leading_1898_ = lean_ctor_get(v___x_1897_, 0);
lean_inc_ref(v_leading_1898_);
v_pos_1899_ = lean_ctor_get(v___x_1897_, 1);
lean_inc(v_pos_1899_);
lean_dec_ref_known(v___x_1897_, 4);
v___x_1900_ = l_Lean_Syntax_getTailInfo(v_stx_1894_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_trailing_1901_; lean_object* v_endPos_1902_; lean_object* v_str_1903_; lean_object* v_startPos_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1918_; 
v_trailing_1901_ = lean_ctor_get(v___x_1900_, 2);
lean_inc_ref(v_trailing_1901_);
v_endPos_1902_ = lean_ctor_get(v___x_1900_, 3);
lean_inc(v_endPos_1902_);
lean_dec_ref_known(v___x_1900_, 4);
v_str_1903_ = lean_ctor_get(v_leading_1898_, 0);
v_startPos_1904_ = lean_ctor_get(v_leading_1898_, 1);
v_isSharedCheck_1918_ = !lean_is_exclusive(v_leading_1898_);
if (v_isSharedCheck_1918_ == 0)
{
lean_object* v_unused_1919_; 
v_unused_1919_ = lean_ctor_get(v_leading_1898_, 2);
lean_dec(v_unused_1919_);
v___x_1906_ = v_leading_1898_;
v_isShared_1907_ = v_isSharedCheck_1918_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_startPos_1904_);
lean_inc(v_str_1903_);
lean_dec(v_leading_1898_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1918_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___y_1909_; lean_object* v___y_1910_; lean_object* v___y_1916_; 
if (v_withLeading_1895_ == 0)
{
lean_dec(v_startPos_1904_);
v___y_1916_ = v_pos_1899_;
goto v___jp_1915_;
}
else
{
lean_dec(v_pos_1899_);
v___y_1916_ = v_startPos_1904_;
goto v___jp_1915_;
}
v___jp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1907_ == 0)
{
lean_ctor_set(v___x_1906_, 2, v___y_1910_);
lean_ctor_set(v___x_1906_, 1, v___y_1909_);
v___x_1912_ = v___x_1906_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_str_1903_);
lean_ctor_set(v_reuseFailAlloc_1914_, 1, v___y_1909_);
lean_ctor_set(v_reuseFailAlloc_1914_, 2, v___y_1910_);
v___x_1912_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
lean_object* v___x_1913_; 
v___x_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1912_);
return v___x_1913_;
}
}
v___jp_1915_:
{
if (v_withTrailing_1896_ == 0)
{
lean_dec_ref(v_trailing_1901_);
v___y_1909_ = v___y_1916_;
v___y_1910_ = v_endPos_1902_;
goto v___jp_1908_;
}
else
{
lean_object* v_stopPos_1917_; 
lean_dec(v_endPos_1902_);
v_stopPos_1917_ = lean_ctor_get(v_trailing_1901_, 2);
lean_inc(v_stopPos_1917_);
lean_dec_ref(v_trailing_1901_);
v___y_1909_ = v___y_1916_;
v___y_1910_ = v_stopPos_1917_;
goto v___jp_1908_;
}
}
}
}
else
{
lean_object* v___x_1920_; 
lean_dec(v___x_1900_);
lean_dec(v_pos_1899_);
lean_dec_ref(v_leading_1898_);
v___x_1920_ = lean_box(0);
return v___x_1920_;
}
}
else
{
lean_object* v___x_1921_; 
lean_dec(v___x_1897_);
v___x_1921_ = lean_box(0);
return v___x_1921_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSubstring_x3f___boxed(lean_object* v_stx_1922_, lean_object* v_withLeading_1923_, lean_object* v_withTrailing_1924_){
_start:
{
uint8_t v_withLeading_boxed_1925_; uint8_t v_withTrailing_boxed_1926_; lean_object* v_res_1927_; 
v_withLeading_boxed_1925_ = lean_unbox(v_withLeading_1923_);
v_withTrailing_boxed_1926_ = lean_unbox(v_withTrailing_1924_);
v_res_1927_ = l_Lean_Syntax_getSubstring_x3f(v_stx_1922_, v_withLeading_boxed_1925_, v_withTrailing_boxed_1926_);
lean_dec(v_stx_1922_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___redArg(lean_object* v_a_1928_, lean_object* v_f_1929_, lean_object* v_i_1930_){
_start:
{
lean_object* v_zero_1931_; uint8_t v_isZero_1932_; 
v_zero_1931_ = lean_unsigned_to_nat(0u);
v_isZero_1932_ = lean_nat_dec_eq(v_i_1930_, v_zero_1931_);
if (v_isZero_1932_ == 1)
{
lean_object* v___x_1933_; 
lean_dec(v_i_1930_);
lean_dec_ref(v_f_1929_);
lean_dec_ref(v_a_1928_);
v___x_1933_ = lean_box(0);
return v___x_1933_;
}
else
{
lean_object* v_one_1934_; lean_object* v_n_1935_; lean_object* v_v_1936_; lean_object* v___x_1937_; 
v_one_1934_ = lean_unsigned_to_nat(1u);
v_n_1935_ = lean_nat_sub(v_i_1930_, v_one_1934_);
lean_dec(v_i_1930_);
v_v_1936_ = lean_array_fget_borrowed(v_a_1928_, v_n_1935_);
lean_inc_ref(v_f_1929_);
lean_inc(v_v_1936_);
v___x_1937_ = lean_apply_1(v_f_1929_, v_v_1936_);
if (lean_obj_tag(v___x_1937_) == 0)
{
v_i_1930_ = v_n_1935_;
goto _start;
}
else
{
lean_object* v_val_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1947_; 
lean_dec_ref(v_f_1929_);
v_val_1939_ = lean_ctor_get(v___x_1937_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1937_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1941_ = v___x_1937_;
v_isShared_1942_ = v_isSharedCheck_1947_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_val_1939_);
lean_dec(v___x_1937_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1947_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1943_; lean_object* v___x_1945_; 
v___x_1943_ = lean_array_fset(v_a_1928_, v_n_1935_, v_val_1939_);
lean_dec(v_n_1935_);
if (v_isShared_1942_ == 0)
{
lean_ctor_set(v___x_1941_, 0, v___x_1943_);
v___x_1945_ = v___x_1941_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1943_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast(lean_object* v_00_u03b1_1948_, lean_object* v_a_1949_, lean_object* v_f_1950_, lean_object* v_i_1951_){
_start:
{
lean_object* v___x_1952_; 
v___x_1952_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___redArg(v_a_1949_, v_f_1950_, v_i_1951_);
return v___x_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfoAux(lean_object* v_info_1953_, lean_object* v_x_1954_){
_start:
{
switch(lean_obj_tag(v_x_1954_))
{
case 2:
{
lean_object* v_val_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1963_; 
v_val_1955_ = lean_ctor_get(v_x_1954_, 1);
v_isSharedCheck_1963_ = !lean_is_exclusive(v_x_1954_);
if (v_isSharedCheck_1963_ == 0)
{
lean_object* v_unused_1964_; 
v_unused_1964_ = lean_ctor_get(v_x_1954_, 0);
lean_dec(v_unused_1964_);
v___x_1957_ = v_x_1954_;
v_isShared_1958_ = v_isSharedCheck_1963_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_val_1955_);
lean_dec(v_x_1954_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1963_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1960_; 
if (v_isShared_1958_ == 0)
{
lean_ctor_set(v___x_1957_, 0, v_info_1953_);
v___x_1960_ = v___x_1957_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_info_1953_);
lean_ctor_set(v_reuseFailAlloc_1962_, 1, v_val_1955_);
v___x_1960_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
lean_object* v___x_1961_; 
v___x_1961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1960_);
return v___x_1961_;
}
}
}
case 3:
{
lean_object* v_rawVal_1965_; lean_object* v_val_1966_; lean_object* v_preresolved_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1975_; 
v_rawVal_1965_ = lean_ctor_get(v_x_1954_, 1);
v_val_1966_ = lean_ctor_get(v_x_1954_, 2);
v_preresolved_1967_ = lean_ctor_get(v_x_1954_, 3);
v_isSharedCheck_1975_ = !lean_is_exclusive(v_x_1954_);
if (v_isSharedCheck_1975_ == 0)
{
lean_object* v_unused_1976_; 
v_unused_1976_ = lean_ctor_get(v_x_1954_, 0);
lean_dec(v_unused_1976_);
v___x_1969_ = v_x_1954_;
v_isShared_1970_ = v_isSharedCheck_1975_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_preresolved_1967_);
lean_inc(v_val_1966_);
lean_inc(v_rawVal_1965_);
lean_dec(v_x_1954_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1975_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 0, v_info_1953_);
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v_info_1953_);
lean_ctor_set(v_reuseFailAlloc_1974_, 1, v_rawVal_1965_);
lean_ctor_set(v_reuseFailAlloc_1974_, 2, v_val_1966_);
lean_ctor_set(v_reuseFailAlloc_1974_, 3, v_preresolved_1967_);
v___x_1972_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
lean_object* v___x_1973_; 
v___x_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1973_, 0, v___x_1972_);
return v___x_1973_;
}
}
}
case 1:
{
lean_object* v_info_1977_; lean_object* v_kind_1978_; lean_object* v_args_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1997_; 
v_info_1977_ = lean_ctor_get(v_x_1954_, 0);
v_kind_1978_ = lean_ctor_get(v_x_1954_, 1);
v_args_1979_ = lean_ctor_get(v_x_1954_, 2);
v_isSharedCheck_1997_ = !lean_is_exclusive(v_x_1954_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1981_ = v_x_1954_;
v_isShared_1982_ = v_isSharedCheck_1997_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_args_1979_);
lean_inc(v_kind_1978_);
lean_inc(v_info_1977_);
lean_dec(v_x_1954_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1997_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1983_ = lean_array_get_size(v_args_1979_);
v___x_1984_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___at___00Lean_Syntax_setTailInfoAux_spec__0(v_info_1953_, v_args_1979_, v___x_1983_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_object* v___x_1985_; 
lean_del_object(v___x_1981_);
lean_dec(v_kind_1978_);
lean_dec(v_info_1977_);
v___x_1985_ = lean_box(0);
return v___x_1985_;
}
else
{
lean_object* v_val_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1996_; 
v_val_1986_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1988_ = v___x_1984_;
v_isShared_1989_ = v_isSharedCheck_1996_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_val_1986_);
lean_dec(v___x_1984_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1996_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1982_ == 0)
{
lean_ctor_set(v___x_1981_, 2, v_val_1986_);
v___x_1991_ = v___x_1981_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_info_1977_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v_kind_1978_);
lean_ctor_set(v_reuseFailAlloc_1995_, 2, v_val_1986_);
v___x_1991_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
lean_object* v___x_1993_; 
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 0, v___x_1991_);
v___x_1993_ = v___x_1988_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v___x_1991_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
}
}
}
}
default: 
{
lean_object* v___x_1998_; 
lean_dec(v_x_1954_);
lean_dec(v_info_1953_);
v___x_1998_ = lean_box(0);
return v___x_1998_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateLast___at___00Lean_Syntax_setTailInfoAux_spec__0(lean_object* v_info_1999_, lean_object* v_a_2000_, lean_object* v_i_2001_){
_start:
{
lean_object* v_zero_2002_; uint8_t v_isZero_2003_; 
v_zero_2002_ = lean_unsigned_to_nat(0u);
v_isZero_2003_ = lean_nat_dec_eq(v_i_2001_, v_zero_2002_);
if (v_isZero_2003_ == 1)
{
lean_object* v___x_2004_; 
lean_dec(v_i_2001_);
lean_dec_ref(v_a_2000_);
lean_dec(v_info_1999_);
v___x_2004_ = lean_box(0);
return v___x_2004_;
}
else
{
lean_object* v_one_2005_; lean_object* v_n_2006_; lean_object* v_v_2007_; lean_object* v___x_2008_; 
v_one_2005_ = lean_unsigned_to_nat(1u);
v_n_2006_ = lean_nat_sub(v_i_2001_, v_one_2005_);
lean_dec(v_i_2001_);
v_v_2007_ = lean_array_fget_borrowed(v_a_2000_, v_n_2006_);
lean_inc(v_v_2007_);
lean_inc(v_info_1999_);
v___x_2008_ = l_Lean_Syntax_setTailInfoAux(v_info_1999_, v_v_2007_);
if (lean_obj_tag(v___x_2008_) == 0)
{
v_i_2001_ = v_n_2006_;
goto _start;
}
else
{
lean_object* v_val_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2018_; 
lean_dec(v_info_1999_);
v_val_2010_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2012_ = v___x_2008_;
v_isShared_2013_ = v_isSharedCheck_2018_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_val_2010_);
lean_dec(v___x_2008_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2018_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2014_; lean_object* v___x_2016_; 
v___x_2014_ = lean_array_fset(v_a_2000_, v_n_2006_, v_val_2010_);
lean_dec(v_n_2006_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 0, v___x_2014_);
v___x_2016_ = v___x_2012_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v___x_2014_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setTailInfo(lean_object* v_stx_2019_, lean_object* v_info_2020_){
_start:
{
lean_object* v___x_2021_; 
lean_inc(v_stx_2019_);
v___x_2021_ = l_Lean_Syntax_setTailInfoAux(v_info_2020_, v_stx_2019_);
if (lean_obj_tag(v___x_2021_) == 0)
{
return v_stx_2019_;
}
else
{
lean_object* v_val_2022_; 
lean_dec(v_stx_2019_);
v_val_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_val_2022_);
lean_dec_ref_known(v___x_2021_, 1);
return v_val_2022_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_unsetTrailing(lean_object* v_stx_2023_){
_start:
{
lean_object* v___x_2024_; 
v___x_2024_ = l_Lean_Syntax_getTailInfo(v_stx_2023_);
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_object* v_trailing_2025_; lean_object* v_leading_2026_; lean_object* v_pos_2027_; lean_object* v_endPos_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2046_; 
v_trailing_2025_ = lean_ctor_get(v___x_2024_, 2);
v_leading_2026_ = lean_ctor_get(v___x_2024_, 0);
v_pos_2027_ = lean_ctor_get(v___x_2024_, 1);
v_endPos_2028_ = lean_ctor_get(v___x_2024_, 3);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2024_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2030_ = v___x_2024_;
v_isShared_2031_ = v_isSharedCheck_2046_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_endPos_2028_);
lean_inc(v_trailing_2025_);
lean_inc(v_pos_2027_);
lean_inc(v_leading_2026_);
lean_dec(v___x_2024_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2046_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v_str_2032_; lean_object* v_startPos_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2044_; 
v_str_2032_ = lean_ctor_get(v_trailing_2025_, 0);
v_startPos_2033_ = lean_ctor_get(v_trailing_2025_, 1);
v_isSharedCheck_2044_ = !lean_is_exclusive(v_trailing_2025_);
if (v_isSharedCheck_2044_ == 0)
{
lean_object* v_unused_2045_; 
v_unused_2045_ = lean_ctor_get(v_trailing_2025_, 2);
lean_dec(v_unused_2045_);
v___x_2035_ = v_trailing_2025_;
v_isShared_2036_ = v_isSharedCheck_2044_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_startPos_2033_);
lean_inc(v_str_2032_);
lean_dec(v_trailing_2025_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2044_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2038_; 
lean_inc(v_startPos_2033_);
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 2, v_startPos_2033_);
v___x_2038_ = v___x_2035_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v_str_2032_);
lean_ctor_set(v_reuseFailAlloc_2043_, 1, v_startPos_2033_);
lean_ctor_set(v_reuseFailAlloc_2043_, 2, v_startPos_2033_);
v___x_2038_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
lean_object* v___x_2040_; 
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 2, v___x_2038_);
v___x_2040_ = v___x_2030_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v_leading_2026_);
lean_ctor_set(v_reuseFailAlloc_2042_, 1, v_pos_2027_);
lean_ctor_set(v_reuseFailAlloc_2042_, 2, v___x_2038_);
lean_ctor_set(v_reuseFailAlloc_2042_, 3, v_endPos_2028_);
v___x_2040_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
lean_object* v___x_2041_; 
v___x_2041_ = l_Lean_Syntax_setTailInfo(v_stx_2023_, v___x_2040_);
return v___x_2041_;
}
}
}
}
}
else
{
lean_dec(v___x_2024_);
return v_stx_2023_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___redArg(lean_object* v_a_2047_, lean_object* v_f_2048_, lean_object* v_i_2049_){
_start:
{
lean_object* v___x_2050_; uint8_t v___x_2051_; 
v___x_2050_ = lean_array_get_size(v_a_2047_);
v___x_2051_ = lean_nat_dec_lt(v_i_2049_, v___x_2050_);
if (v___x_2051_ == 0)
{
lean_object* v___x_2052_; 
lean_dec(v_i_2049_);
lean_dec_ref(v_f_2048_);
lean_dec_ref(v_a_2047_);
v___x_2052_ = lean_box(0);
return v___x_2052_;
}
else
{
lean_object* v_v_2053_; lean_object* v___x_2054_; 
v_v_2053_ = lean_array_fget_borrowed(v_a_2047_, v_i_2049_);
lean_inc_ref(v_f_2048_);
lean_inc(v_v_2053_);
v___x_2054_ = lean_apply_1(v_f_2048_, v_v_2053_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2055_ = lean_unsigned_to_nat(1u);
v___x_2056_ = lean_nat_add(v_i_2049_, v___x_2055_);
lean_dec(v_i_2049_);
v_i_2049_ = v___x_2056_;
goto _start;
}
else
{
lean_object* v_val_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2066_; 
lean_dec_ref(v_f_2048_);
v_val_2058_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2060_ = v___x_2054_;
v_isShared_2061_ = v_isSharedCheck_2066_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_val_2058_);
lean_dec(v___x_2054_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2066_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2062_; lean_object* v___x_2064_; 
v___x_2062_ = lean_array_fset(v_a_2047_, v_i_2049_, v_val_2058_);
lean_dec(v_i_2049_);
if (v_isShared_2061_ == 0)
{
lean_ctor_set(v___x_2060_, 0, v___x_2062_);
v___x_2064_ = v___x_2060_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v___x_2062_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst(lean_object* v_00_u03b1_2067_, lean_object* v_inst_2068_, lean_object* v_a_2069_, lean_object* v_f_2070_, lean_object* v_i_2071_){
_start:
{
lean_object* v___x_2072_; 
v___x_2072_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___redArg(v_a_2069_, v_f_2070_, v_i_2071_);
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___boxed(lean_object* v_00_u03b1_2073_, lean_object* v_inst_2074_, lean_object* v_a_2075_, lean_object* v_f_2076_, lean_object* v_i_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst(v_00_u03b1_2073_, v_inst_2074_, v_a_2075_, v_f_2076_, v_i_2077_);
lean_dec(v_inst_2074_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfoAux(lean_object* v_info_2079_, lean_object* v_x_2080_){
_start:
{
switch(lean_obj_tag(v_x_2080_))
{
case 2:
{
lean_object* v_val_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2089_; 
v_val_2081_ = lean_ctor_get(v_x_2080_, 1);
v_isSharedCheck_2089_ = !lean_is_exclusive(v_x_2080_);
if (v_isSharedCheck_2089_ == 0)
{
lean_object* v_unused_2090_; 
v_unused_2090_ = lean_ctor_get(v_x_2080_, 0);
lean_dec(v_unused_2090_);
v___x_2083_ = v_x_2080_;
v_isShared_2084_ = v_isSharedCheck_2089_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_val_2081_);
lean_dec(v_x_2080_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2089_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
lean_ctor_set(v___x_2083_, 0, v_info_2079_);
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v_info_2079_);
lean_ctor_set(v_reuseFailAlloc_2088_, 1, v_val_2081_);
v___x_2086_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
lean_object* v___x_2087_; 
v___x_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2086_);
return v___x_2087_;
}
}
}
case 3:
{
lean_object* v_rawVal_2091_; lean_object* v_val_2092_; lean_object* v_preresolved_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2101_; 
v_rawVal_2091_ = lean_ctor_get(v_x_2080_, 1);
v_val_2092_ = lean_ctor_get(v_x_2080_, 2);
v_preresolved_2093_ = lean_ctor_get(v_x_2080_, 3);
v_isSharedCheck_2101_ = !lean_is_exclusive(v_x_2080_);
if (v_isSharedCheck_2101_ == 0)
{
lean_object* v_unused_2102_; 
v_unused_2102_ = lean_ctor_get(v_x_2080_, 0);
lean_dec(v_unused_2102_);
v___x_2095_ = v_x_2080_;
v_isShared_2096_ = v_isSharedCheck_2101_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_preresolved_2093_);
lean_inc(v_val_2092_);
lean_inc(v_rawVal_2091_);
lean_dec(v_x_2080_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2101_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 0, v_info_2079_);
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_info_2079_);
lean_ctor_set(v_reuseFailAlloc_2100_, 1, v_rawVal_2091_);
lean_ctor_set(v_reuseFailAlloc_2100_, 2, v_val_2092_);
lean_ctor_set(v_reuseFailAlloc_2100_, 3, v_preresolved_2093_);
v___x_2098_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
lean_object* v___x_2099_; 
v___x_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
return v___x_2099_;
}
}
}
case 1:
{
lean_object* v_info_2103_; lean_object* v_kind_2104_; lean_object* v_args_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2123_; 
v_info_2103_ = lean_ctor_get(v_x_2080_, 0);
v_kind_2104_ = lean_ctor_get(v_x_2080_, 1);
v_args_2105_ = lean_ctor_get(v_x_2080_, 2);
v_isSharedCheck_2123_ = !lean_is_exclusive(v_x_2080_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2107_ = v_x_2080_;
v_isShared_2108_ = v_isSharedCheck_2123_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_args_2105_);
lean_inc(v_kind_2104_);
lean_inc(v_info_2103_);
lean_dec(v_x_2080_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2123_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; 
v___x_2109_ = lean_unsigned_to_nat(0u);
v___x_2110_ = l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___at___00Lean_Syntax_setHeadInfoAux_spec__0(v_info_2079_, v_args_2105_, v___x_2109_);
if (lean_obj_tag(v___x_2110_) == 1)
{
lean_object* v_val_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2121_; 
v_val_2111_ = lean_ctor_get(v___x_2110_, 0);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2110_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2113_ = v___x_2110_;
v_isShared_2114_ = v_isSharedCheck_2121_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_val_2111_);
lean_dec(v___x_2110_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2121_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2116_; 
if (v_isShared_2108_ == 0)
{
lean_ctor_set(v___x_2107_, 2, v_val_2111_);
v___x_2116_ = v___x_2107_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_info_2103_);
lean_ctor_set(v_reuseFailAlloc_2120_, 1, v_kind_2104_);
lean_ctor_set(v_reuseFailAlloc_2120_, 2, v_val_2111_);
v___x_2116_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
lean_object* v___x_2118_; 
if (v_isShared_2114_ == 0)
{
lean_ctor_set(v___x_2113_, 0, v___x_2116_);
v___x_2118_ = v___x_2113_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2116_);
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
else
{
lean_object* v___x_2122_; 
lean_dec(v___x_2110_);
lean_del_object(v___x_2107_);
lean_dec(v_kind_2104_);
lean_dec(v_info_2103_);
v___x_2122_ = lean_box(0);
return v___x_2122_;
}
}
}
default: 
{
lean_object* v___x_2124_; 
lean_dec(v_x_2080_);
lean_dec(v_info_2079_);
v___x_2124_ = lean_box(0);
return v___x_2124_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_updateFirst___at___00Lean_Syntax_setHeadInfoAux_spec__0(lean_object* v_info_2125_, lean_object* v_a_2126_, lean_object* v_i_2127_){
_start:
{
lean_object* v___x_2128_; uint8_t v___x_2129_; 
v___x_2128_ = lean_array_get_size(v_a_2126_);
v___x_2129_ = lean_nat_dec_lt(v_i_2127_, v___x_2128_);
if (v___x_2129_ == 0)
{
lean_object* v___x_2130_; 
lean_dec(v_i_2127_);
lean_dec_ref(v_a_2126_);
lean_dec(v_info_2125_);
v___x_2130_ = lean_box(0);
return v___x_2130_;
}
else
{
lean_object* v_v_2131_; lean_object* v___x_2132_; 
v_v_2131_ = lean_array_fget_borrowed(v_a_2126_, v_i_2127_);
lean_inc(v_v_2131_);
lean_inc(v_info_2125_);
v___x_2132_ = l_Lean_Syntax_setHeadInfoAux(v_info_2125_, v_v_2131_);
if (lean_obj_tag(v___x_2132_) == 0)
{
lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2133_ = lean_unsigned_to_nat(1u);
v___x_2134_ = lean_nat_add(v_i_2127_, v___x_2133_);
lean_dec(v_i_2127_);
v_i_2127_ = v___x_2134_;
goto _start;
}
else
{
lean_object* v_val_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2144_; 
lean_dec(v_info_2125_);
v_val_2136_ = lean_ctor_get(v___x_2132_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2138_ = v___x_2132_;
v_isShared_2139_ = v_isSharedCheck_2144_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_val_2136_);
lean_dec(v___x_2132_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2144_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2140_; lean_object* v___x_2142_; 
v___x_2140_ = lean_array_fset(v_a_2126_, v_i_2127_, v_val_2136_);
lean_dec(v_i_2127_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 0, v___x_2140_);
v___x_2142_ = v___x_2138_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v___x_2140_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setHeadInfo(lean_object* v_stx_2145_, lean_object* v_info_2146_){
_start:
{
lean_object* v___x_2147_; 
lean_inc(v_stx_2145_);
v___x_2147_ = l_Lean_Syntax_setHeadInfoAux(v_info_2146_, v_stx_2145_);
if (lean_obj_tag(v___x_2147_) == 0)
{
return v_stx_2145_;
}
else
{
lean_object* v_val_2148_; 
lean_dec(v_stx_2145_);
v_val_2148_ = lean_ctor_get(v___x_2147_, 0);
lean_inc(v_val_2148_);
lean_dec_ref_known(v___x_2147_, 1);
return v_val_2148_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_setInfo(lean_object* v_info_2149_, lean_object* v_x_2150_){
_start:
{
switch(lean_obj_tag(v_x_2150_))
{
case 0:
{
lean_dec(v_info_2149_);
return v_x_2150_;
}
case 1:
{
lean_object* v_kind_2151_; lean_object* v_args_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2159_; 
v_kind_2151_ = lean_ctor_get(v_x_2150_, 1);
v_args_2152_ = lean_ctor_get(v_x_2150_, 2);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_x_2150_);
if (v_isSharedCheck_2159_ == 0)
{
lean_object* v_unused_2160_; 
v_unused_2160_ = lean_ctor_get(v_x_2150_, 0);
lean_dec(v_unused_2160_);
v___x_2154_ = v_x_2150_;
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_args_2152_);
lean_inc(v_kind_2151_);
lean_dec(v_x_2150_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2159_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2157_; 
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 0, v_info_2149_);
v___x_2157_ = v___x_2154_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_info_2149_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v_kind_2151_);
lean_ctor_set(v_reuseFailAlloc_2158_, 2, v_args_2152_);
v___x_2157_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
return v___x_2157_;
}
}
}
case 2:
{
lean_object* v_val_2161_; lean_object* v___x_2163_; uint8_t v_isShared_2164_; uint8_t v_isSharedCheck_2168_; 
v_val_2161_ = lean_ctor_get(v_x_2150_, 1);
v_isSharedCheck_2168_ = !lean_is_exclusive(v_x_2150_);
if (v_isSharedCheck_2168_ == 0)
{
lean_object* v_unused_2169_; 
v_unused_2169_ = lean_ctor_get(v_x_2150_, 0);
lean_dec(v_unused_2169_);
v___x_2163_ = v_x_2150_;
v_isShared_2164_ = v_isSharedCheck_2168_;
goto v_resetjp_2162_;
}
else
{
lean_inc(v_val_2161_);
lean_dec(v_x_2150_);
v___x_2163_ = lean_box(0);
v_isShared_2164_ = v_isSharedCheck_2168_;
goto v_resetjp_2162_;
}
v_resetjp_2162_:
{
lean_object* v___x_2166_; 
if (v_isShared_2164_ == 0)
{
lean_ctor_set(v___x_2163_, 0, v_info_2149_);
v___x_2166_ = v___x_2163_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v_info_2149_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v_val_2161_);
v___x_2166_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
return v___x_2166_;
}
}
}
default: 
{
lean_object* v_rawVal_2170_; lean_object* v_val_2171_; lean_object* v_preresolved_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
v_rawVal_2170_ = lean_ctor_get(v_x_2150_, 1);
v_val_2171_ = lean_ctor_get(v_x_2150_, 2);
v_preresolved_2172_ = lean_ctor_get(v_x_2150_, 3);
v_isSharedCheck_2179_ = !lean_is_exclusive(v_x_2150_);
if (v_isSharedCheck_2179_ == 0)
{
lean_object* v_unused_2180_; 
v_unused_2180_ = lean_ctor_get(v_x_2150_, 0);
lean_dec(v_unused_2180_);
v___x_2174_ = v_x_2150_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_preresolved_2172_);
lean_inc(v_val_2171_);
lean_inc(v_rawVal_2170_);
lean_dec(v_x_2150_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
lean_ctor_set(v___x_2174_, 0, v_info_2149_);
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_info_2149_);
lean_ctor_set(v_reuseFailAlloc_2178_, 1, v_rawVal_2170_);
lean_ctor_set(v_reuseFailAlloc_2178_, 2, v_val_2171_);
lean_ctor_set(v_reuseFailAlloc_2178_, 3, v_preresolved_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getHead_x3f(lean_object* v_x_2184_){
_start:
{
switch(lean_obj_tag(v_x_2184_))
{
case 2:
{
lean_object* v_info_2185_; uint8_t v___x_2186_; lean_object* v___x_2187_; 
v_info_2185_ = lean_ctor_get(v_x_2184_, 0);
v___x_2186_ = 0;
v___x_2187_ = l_Lean_SourceInfo_getPos_x3f(v_info_2185_, v___x_2186_);
if (lean_obj_tag(v___x_2187_) == 0)
{
lean_object* v___x_2188_; 
lean_dec_ref_known(v_x_2184_, 2);
v___x_2188_ = lean_box(0);
return v___x_2188_;
}
else
{
lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2195_; 
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2195_ == 0)
{
lean_object* v_unused_2196_; 
v_unused_2196_ = lean_ctor_get(v___x_2187_, 0);
lean_dec(v_unused_2196_);
v___x_2190_ = v___x_2187_;
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
else
{
lean_dec(v___x_2187_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v___x_2193_; 
if (v_isShared_2191_ == 0)
{
lean_ctor_set(v___x_2190_, 0, v_x_2184_);
v___x_2193_ = v___x_2190_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_x_2184_);
v___x_2193_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
return v___x_2193_;
}
}
}
}
case 3:
{
lean_object* v_info_2197_; uint8_t v___x_2198_; lean_object* v___x_2199_; 
v_info_2197_ = lean_ctor_get(v_x_2184_, 0);
v___x_2198_ = 0;
v___x_2199_ = l_Lean_SourceInfo_getPos_x3f(v_info_2197_, v___x_2198_);
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_object* v___x_2200_; 
lean_dec_ref_known(v_x_2184_, 4);
v___x_2200_ = lean_box(0);
return v___x_2200_;
}
else
{
lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2207_; 
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2207_ == 0)
{
lean_object* v_unused_2208_; 
v_unused_2208_ = lean_ctor_get(v___x_2199_, 0);
lean_dec(v_unused_2208_);
v___x_2202_ = v___x_2199_;
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
else
{
lean_dec(v___x_2199_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2205_; 
if (v_isShared_2203_ == 0)
{
lean_ctor_set(v___x_2202_, 0, v_x_2184_);
v___x_2205_ = v___x_2202_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_x_2184_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
}
case 1:
{
lean_object* v_info_2209_; 
v_info_2209_ = lean_ctor_get(v_x_2184_, 0);
if (lean_obj_tag(v_info_2209_) == 2)
{
lean_object* v_args_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; size_t v_sz_2213_; size_t v___x_2214_; lean_object* v___x_2215_; lean_object* v_fst_2216_; 
v_args_2210_ = lean_ctor_get(v_x_2184_, 2);
lean_inc_ref(v_args_2210_);
lean_dec_ref_known(v_x_2184_, 3);
v___x_2211_ = lean_box(0);
v___x_2212_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v_sz_2213_ = lean_array_size(v_args_2210_);
v___x_2214_ = ((size_t)0ULL);
v___x_2215_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(v_args_2210_, v_sz_2213_, v___x_2214_, v___x_2212_);
lean_dec_ref(v_args_2210_);
v_fst_2216_ = lean_ctor_get(v___x_2215_, 0);
lean_inc(v_fst_2216_);
lean_dec_ref(v___x_2215_);
if (lean_obj_tag(v_fst_2216_) == 0)
{
return v___x_2211_;
}
else
{
lean_object* v_val_2217_; 
v_val_2217_ = lean_ctor_get(v_fst_2216_, 0);
lean_inc(v_val_2217_);
lean_dec_ref_known(v_fst_2216_, 1);
return v_val_2217_;
}
}
else
{
lean_object* v___x_2218_; 
v___x_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2218_, 0, v_x_2184_);
return v___x_2218_;
}
}
default: 
{
lean_object* v___x_2219_; 
lean_dec(v_x_2184_);
v___x_2219_ = lean_box(0);
return v___x_2219_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(lean_object* v_as_2220_, size_t v_sz_2221_, size_t v_i_2222_, lean_object* v_b_2223_){
_start:
{
uint8_t v___x_2224_; 
v___x_2224_ = lean_usize_dec_lt(v_i_2222_, v_sz_2221_);
if (v___x_2224_ == 0)
{
lean_inc_ref(v_b_2223_);
return v_b_2223_;
}
else
{
lean_object* v___x_2225_; lean_object* v_a_2226_; lean_object* v___x_2227_; 
v___x_2225_ = lean_box(0);
v_a_2226_ = lean_array_uget_borrowed(v_as_2220_, v_i_2222_);
lean_inc(v_a_2226_);
v___x_2227_ = l_Lean_Syntax_getHead_x3f(v_a_2226_);
if (lean_obj_tag(v___x_2227_) == 1)
{
lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2227_);
v___x_2229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2228_);
lean_ctor_set(v___x_2229_, 1, v___x_2225_);
return v___x_2229_;
}
else
{
lean_object* v___x_2230_; size_t v___x_2231_; size_t v___x_2232_; 
lean_dec(v___x_2227_);
v___x_2230_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v___x_2231_ = ((size_t)1ULL);
v___x_2232_ = lean_usize_add(v_i_2222_, v___x_2231_);
v_i_2222_ = v___x_2232_;
v_b_2223_ = v___x_2230_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___boxed(lean_object* v_as_2234_, lean_object* v_sz_2235_, lean_object* v_i_2236_, lean_object* v_b_2237_){
_start:
{
size_t v_sz_boxed_2238_; size_t v_i_boxed_2239_; lean_object* v_res_2240_; 
v_sz_boxed_2238_ = lean_unbox_usize(v_sz_2235_);
lean_dec(v_sz_2235_);
v_i_boxed_2239_ = lean_unbox_usize(v_i_2236_);
lean_dec(v_i_2236_);
v_res_2240_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0(v_as_2234_, v_sz_boxed_2238_, v_i_boxed_2239_, v_b_2237_);
lean_dec_ref(v_b_2237_);
lean_dec_ref(v_as_2234_);
return v_res_2240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object* v_target_2241_, lean_object* v_source_2242_){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2243_ = l_Lean_Syntax_getHeadInfo(v_source_2242_);
v___x_2244_ = l_Lean_Syntax_setHeadInfo(v_target_2241_, v___x_2243_);
v___x_2245_ = l_Lean_Syntax_getTailInfo(v_source_2242_);
v___x_2246_ = l_Lean_Syntax_setTailInfo(v___x_2244_, v___x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_copyHeadTailInfoFrom___boxed(lean_object* v_target_2247_, lean_object* v_source_2248_){
_start:
{
lean_object* v_res_2249_; 
v_res_2249_ = l_Lean_Syntax_copyHeadTailInfoFrom(v_target_2247_, v_source_2248_);
lean_dec(v_source_2248_);
return v_res_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSynthetic(lean_object* v_stx_2250_){
_start:
{
uint8_t v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2251_ = 0;
v___x_2252_ = l_Lean_SourceInfo_fromRef(v_stx_2250_, v___x_2251_);
v___x_2253_ = l_Lean_Syntax_setHeadInfo(v_stx_2250_, v___x_2252_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0(lean_object* v_val_2254_, lean_object* v_withRef_2255_, lean_object* v_x_2256_, lean_object* v_oldRef_2257_){
_start:
{
lean_object* v_ref_2258_; lean_object* v___x_2259_; 
v_ref_2258_ = l_Lean_replaceRef(v_val_2254_, v_oldRef_2257_);
v___x_2259_ = lean_apply_3(v_withRef_2255_, lean_box(0), v_ref_2258_, v_x_2256_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__0___boxed(lean_object* v_val_2260_, lean_object* v_withRef_2261_, lean_object* v_x_2262_, lean_object* v_oldRef_2263_){
_start:
{
lean_object* v_res_2264_; 
v_res_2264_ = l_Lean_withHeadRefOnly___redArg___lam__0(v_val_2260_, v_withRef_2261_, v_x_2262_, v_oldRef_2263_);
lean_dec(v_oldRef_2263_);
lean_dec(v_val_2260_);
return v_res_2264_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg___lam__1(lean_object* v_x_2265_, lean_object* v_withRef_2266_, lean_object* v_toBind_2267_, lean_object* v_getRef_2268_, lean_object* v_____do__lift_2269_){
_start:
{
lean_object* v___x_2270_; 
v___x_2270_ = l_Lean_Syntax_getHead_x3f(v_____do__lift_2269_);
if (lean_obj_tag(v___x_2270_) == 0)
{
lean_dec(v_getRef_2268_);
lean_dec(v_toBind_2267_);
lean_dec(v_withRef_2266_);
return v_x_2265_;
}
else
{
lean_object* v_val_2271_; lean_object* v___f_2272_; lean_object* v___x_2273_; 
v_val_2271_ = lean_ctor_get(v___x_2270_, 0);
lean_inc(v_val_2271_);
lean_dec_ref_known(v___x_2270_, 1);
v___f_2272_ = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2272_, 0, v_val_2271_);
lean_closure_set(v___f_2272_, 1, v_withRef_2266_);
lean_closure_set(v___f_2272_, 2, v_x_2265_);
v___x_2273_ = lean_apply_4(v_toBind_2267_, lean_box(0), lean_box(0), v_getRef_2268_, v___f_2272_);
return v___x_2273_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly___redArg(lean_object* v_inst_2274_, lean_object* v_inst_2275_, lean_object* v_x_2276_){
_start:
{
lean_object* v_toBind_2277_; lean_object* v_getRef_2278_; lean_object* v_withRef_2279_; lean_object* v___f_2280_; lean_object* v___x_2281_; 
v_toBind_2277_ = lean_ctor_get(v_inst_2274_, 1);
lean_inc_n(v_toBind_2277_, 2);
lean_dec_ref(v_inst_2274_);
v_getRef_2278_ = lean_ctor_get(v_inst_2275_, 0);
lean_inc_n(v_getRef_2278_, 2);
v_withRef_2279_ = lean_ctor_get(v_inst_2275_, 1);
lean_inc(v_withRef_2279_);
lean_dec_ref(v_inst_2275_);
v___f_2280_ = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2280_, 0, v_x_2276_);
lean_closure_set(v___f_2280_, 1, v_withRef_2279_);
lean_closure_set(v___f_2280_, 2, v_toBind_2277_);
lean_closure_set(v___f_2280_, 3, v_getRef_2278_);
v___x_2281_ = lean_apply_4(v_toBind_2277_, lean_box(0), lean_box(0), v_getRef_2278_, v___f_2280_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l_Lean_withHeadRefOnly(lean_object* v_m_2282_, lean_object* v_inst_2283_, lean_object* v_inst_2284_, lean_object* v_00_u03b1_2285_, lean_object* v_x_2286_){
_start:
{
lean_object* v_toBind_2287_; lean_object* v_getRef_2288_; lean_object* v_withRef_2289_; lean_object* v___f_2290_; lean_object* v___x_2291_; 
v_toBind_2287_ = lean_ctor_get(v_inst_2283_, 1);
lean_inc_n(v_toBind_2287_, 2);
lean_dec_ref(v_inst_2283_);
v_getRef_2288_ = lean_ctor_get(v_inst_2284_, 0);
lean_inc_n(v_getRef_2288_, 2);
v_withRef_2289_ = lean_ctor_get(v_inst_2284_, 1);
lean_inc(v_withRef_2289_);
lean_dec_ref(v_inst_2284_);
v___f_2290_ = lean_alloc_closure((void*)(l_Lean_withHeadRefOnly___redArg___lam__1), 5, 4);
lean_closure_set(v___f_2290_, 0, v_x_2286_);
lean_closure_set(v___f_2290_, 1, v_withRef_2289_);
lean_closure_set(v___f_2290_, 2, v_toBind_2287_);
lean_closure_set(v___f_2290_, 3, v_getRef_2288_);
v___x_2291_ = lean_apply_4(v_toBind_2287_, lean_box(0), lean_box(0), v_getRef_2288_, v___f_2290_);
return v___x_2291_;
}
}
LEAN_EXPORT uint8_t l_Lean_expandMacros___lam__0(uint8_t v___x_2301_, lean_object* v_k_2302_){
_start:
{
lean_object* v___x_2303_; uint8_t v___x_2304_; 
v___x_2303_ = ((lean_object*)(l_Lean_expandMacros___lam__0___closed__4));
v___x_2304_ = lean_name_eq(v_k_2302_, v___x_2303_);
if (v___x_2304_ == 0)
{
return v___x_2301_;
}
else
{
uint8_t v___x_2305_; 
v___x_2305_ = 0;
return v___x_2305_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_expandMacros___lam__0___boxed(lean_object* v___x_2306_, lean_object* v_k_2307_){
_start:
{
uint8_t v___x_1783__boxed_2308_; uint8_t v_res_2309_; lean_object* v_r_2310_; 
v___x_1783__boxed_2308_ = lean_unbox(v___x_2306_);
v_res_2309_ = l_Lean_expandMacros___lam__0(v___x_1783__boxed_2308_, v_k_2307_);
lean_dec(v_k_2307_);
v_r_2310_ = lean_box(v_res_2309_);
return v_r_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_expandMacros(lean_object* v_stx_2312_, lean_object* v_p_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_){
_start:
{
if (lean_obj_tag(v_stx_2312_) == 1)
{
lean_object* v_info_2316_; lean_object* v_kind_2317_; lean_object* v_args_2318_; lean_object* v___x_2319_; uint8_t v___x_2320_; 
v_info_2316_ = lean_ctor_get(v_stx_2312_, 0);
v_kind_2317_ = lean_ctor_get(v_stx_2312_, 1);
v_args_2318_ = lean_ctor_get(v_stx_2312_, 2);
lean_inc(v_kind_2317_);
v___x_2319_ = lean_apply_1(v_p_2313_, v_kind_2317_);
v___x_2320_ = lean_unbox(v___x_2319_);
if (v___x_2320_ == 0)
{
lean_object* v___x_2321_; 
lean_dec_ref(v_a_2314_);
v___x_2321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2321_, 0, v_stx_2312_);
lean_ctor_set(v___x_2321_, 1, v_a_2315_);
return v___x_2321_;
}
else
{
lean_object* v_methods_2322_; lean_object* v_quotContext_2323_; lean_object* v_currMacroScope_2324_; lean_object* v_currRecDepth_2325_; lean_object* v_maxRecDepth_2326_; lean_object* v_ref_2327_; lean_object* v_ref_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; 
v_methods_2322_ = lean_ctor_get(v_a_2314_, 0);
lean_inc_n(v_methods_2322_, 2);
v_quotContext_2323_ = lean_ctor_get(v_a_2314_, 1);
lean_inc_n(v_quotContext_2323_, 2);
v_currMacroScope_2324_ = lean_ctor_get(v_a_2314_, 2);
lean_inc_n(v_currMacroScope_2324_, 2);
v_currRecDepth_2325_ = lean_ctor_get(v_a_2314_, 3);
lean_inc_n(v_currRecDepth_2325_, 2);
v_maxRecDepth_2326_ = lean_ctor_get(v_a_2314_, 4);
lean_inc_n(v_maxRecDepth_2326_, 2);
v_ref_2327_ = lean_ctor_get(v_a_2314_, 5);
lean_inc(v_ref_2327_);
lean_dec_ref(v_a_2314_);
v_ref_2328_ = l_Lean_replaceRef(v_stx_2312_, v_ref_2327_);
lean_dec(v_ref_2327_);
lean_inc(v_ref_2328_);
v___x_2329_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2329_, 0, v_methods_2322_);
lean_ctor_set(v___x_2329_, 1, v_quotContext_2323_);
lean_ctor_set(v___x_2329_, 2, v_currMacroScope_2324_);
lean_ctor_set(v___x_2329_, 3, v_currRecDepth_2325_);
lean_ctor_set(v___x_2329_, 4, v_maxRecDepth_2326_);
lean_ctor_set(v___x_2329_, 5, v_ref_2328_);
lean_inc_ref(v_stx_2312_);
v___x_2330_ = l_Lean_Macro_expandMacro_x3f(v_stx_2312_, v___x_2329_, v_a_2315_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v_a_2331_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
if (lean_obj_tag(v_a_2331_) == 0)
{
lean_object* v_a_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2377_; 
lean_dec_ref_known(v___x_2329_, 6);
v_a_2332_ = lean_ctor_get(v___x_2330_, 1);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2377_ == 0)
{
lean_object* v_unused_2378_; 
v_unused_2378_ = lean_ctor_get(v___x_2330_, 0);
lean_dec(v_unused_2378_);
v___x_2334_ = v___x_2330_;
v_isShared_2335_ = v_isSharedCheck_2377_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_a_2332_);
lean_dec(v___x_2330_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2377_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
uint8_t v___x_2336_; 
v___x_2336_ = lean_nat_dec_eq(v_currRecDepth_2325_, v_maxRecDepth_2326_);
if (v___x_2336_ == 0)
{
lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2368_; 
lean_inc_ref(v_args_2318_);
lean_inc(v_kind_2317_);
lean_inc(v_info_2316_);
lean_del_object(v___x_2334_);
v_isSharedCheck_2368_ = !lean_is_exclusive(v_stx_2312_);
if (v_isSharedCheck_2368_ == 0)
{
lean_object* v_unused_2369_; lean_object* v_unused_2370_; lean_object* v_unused_2371_; 
v_unused_2369_ = lean_ctor_get(v_stx_2312_, 2);
lean_dec(v_unused_2369_);
v_unused_2370_ = lean_ctor_get(v_stx_2312_, 1);
lean_dec(v_unused_2370_);
v_unused_2371_ = lean_ctor_get(v_stx_2312_, 0);
lean_dec(v_unused_2371_);
v___x_2338_ = v_stx_2312_;
v_isShared_2339_ = v_isSharedCheck_2368_;
goto v_resetjp_2337_;
}
else
{
lean_dec(v_stx_2312_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2368_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; size_t v_sz_2343_; size_t v___x_2344_; uint8_t v___x_2345_; lean_object* v___x_2346_; 
v___x_2340_ = lean_unsigned_to_nat(1u);
v___x_2341_ = lean_nat_add(v_currRecDepth_2325_, v___x_2340_);
lean_dec(v_currRecDepth_2325_);
v___x_2342_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2342_, 0, v_methods_2322_);
lean_ctor_set(v___x_2342_, 1, v_quotContext_2323_);
lean_ctor_set(v___x_2342_, 2, v_currMacroScope_2324_);
lean_ctor_set(v___x_2342_, 3, v___x_2341_);
lean_ctor_set(v___x_2342_, 4, v_maxRecDepth_2326_);
lean_ctor_set(v___x_2342_, 5, v_ref_2328_);
v_sz_2343_ = lean_array_size(v_args_2318_);
v___x_2344_ = ((size_t)0ULL);
v___x_2345_ = lean_unbox(v___x_2319_);
v___x_2346_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0(v___x_2345_, v_sz_2343_, v___x_2344_, v_args_2318_, v___x_2342_, v_a_2332_);
lean_dec_ref_known(v___x_2342_, 6);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v_a_2347_; lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2358_; 
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
v_a_2348_ = lean_ctor_get(v___x_2346_, 1);
v_isSharedCheck_2358_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2350_ = v___x_2346_;
v_isShared_2351_ = v_isSharedCheck_2358_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_inc(v_a_2347_);
lean_dec(v___x_2346_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2358_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2353_; 
if (v_isShared_2339_ == 0)
{
lean_ctor_set(v___x_2338_, 2, v_a_2347_);
v___x_2353_ = v___x_2338_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_info_2316_);
lean_ctor_set(v_reuseFailAlloc_2357_, 1, v_kind_2317_);
lean_ctor_set(v_reuseFailAlloc_2357_, 2, v_a_2347_);
v___x_2353_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
lean_object* v___x_2355_; 
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 0, v___x_2353_);
v___x_2355_ = v___x_2350_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v___x_2353_);
lean_ctor_set(v_reuseFailAlloc_2356_, 1, v_a_2348_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
else
{
lean_object* v_a_2359_; lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2367_; 
lean_del_object(v___x_2338_);
lean_dec(v_kind_2317_);
lean_dec(v_info_2316_);
v_a_2359_ = lean_ctor_get(v___x_2346_, 0);
v_a_2360_ = lean_ctor_get(v___x_2346_, 1);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2362_ = v___x_2346_;
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_inc(v_a_2359_);
lean_dec(v___x_2346_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2367_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
lean_object* v___x_2365_; 
if (v_isShared_2363_ == 0)
{
v___x_2365_ = v___x_2362_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_a_2359_);
lean_ctor_set(v_reuseFailAlloc_2366_, 1, v_a_2360_);
v___x_2365_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
return v___x_2365_;
}
}
}
}
}
else
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2375_; 
lean_dec(v_ref_2328_);
lean_dec(v_maxRecDepth_2326_);
lean_dec(v_currRecDepth_2325_);
lean_dec(v_currMacroScope_2324_);
lean_dec(v_quotContext_2323_);
lean_dec(v_methods_2322_);
v___x_2372_ = ((lean_object*)(l_Lean_expandMacros___closed__0));
v___x_2373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2373_, 0, v_stx_2312_);
lean_ctor_set(v___x_2373_, 1, v___x_2372_);
if (v_isShared_2335_ == 0)
{
lean_ctor_set_tag(v___x_2334_, 1);
lean_ctor_set(v___x_2334_, 0, v___x_2373_);
v___x_2375_ = v___x_2334_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v___x_2373_);
lean_ctor_set(v_reuseFailAlloc_2376_, 1, v_a_2332_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
else
{
lean_object* v_a_2379_; lean_object* v_val_2380_; lean_object* v___f_2381_; 
lean_inc_ref(v_a_2331_);
lean_dec(v_ref_2328_);
lean_dec(v_maxRecDepth_2326_);
lean_dec(v_currRecDepth_2325_);
lean_dec(v_currMacroScope_2324_);
lean_dec(v_quotContext_2323_);
lean_dec(v_methods_2322_);
lean_dec_ref_known(v_stx_2312_, 3);
v_a_2379_ = lean_ctor_get(v___x_2330_, 1);
lean_inc(v_a_2379_);
lean_dec_ref_known(v___x_2330_, 2);
v_val_2380_ = lean_ctor_get(v_a_2331_, 0);
lean_inc(v_val_2380_);
lean_dec_ref_known(v_a_2331_, 1);
v___f_2381_ = lean_alloc_closure((void*)(l_Lean_expandMacros___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2381_, 0, v___x_2319_);
v_stx_2312_ = v_val_2380_;
v_p_2313_ = v___f_2381_;
v_a_2314_ = v___x_2329_;
v_a_2315_ = v_a_2379_;
goto _start;
}
}
else
{
lean_object* v_a_2383_; lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
lean_dec_ref_known(v___x_2329_, 6);
lean_dec(v_ref_2328_);
lean_dec(v_maxRecDepth_2326_);
lean_dec(v_currRecDepth_2325_);
lean_dec(v_currMacroScope_2324_);
lean_dec(v_quotContext_2323_);
lean_dec(v_methods_2322_);
lean_dec_ref_known(v_stx_2312_, 3);
v_a_2383_ = lean_ctor_get(v___x_2330_, 0);
v_a_2384_ = lean_ctor_get(v___x_2330_, 1);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2386_ = v___x_2330_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_inc(v_a_2383_);
lean_dec(v___x_2330_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2389_; 
if (v_isShared_2387_ == 0)
{
v___x_2389_ = v___x_2386_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2383_);
lean_ctor_set(v_reuseFailAlloc_2390_, 1, v_a_2384_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
}
else
{
lean_object* v___x_2392_; 
lean_dec_ref(v_a_2314_);
lean_dec_ref(v_p_2313_);
v___x_2392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2392_, 0, v_stx_2312_);
lean_ctor_set(v___x_2392_, 1, v_a_2315_);
return v___x_2392_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0(uint8_t v___x_2393_, size_t v_sz_2394_, size_t v_i_2395_, lean_object* v_bs_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
uint8_t v___x_2399_; 
v___x_2399_ = lean_usize_dec_lt(v_i_2395_, v_sz_2394_);
if (v___x_2399_ == 0)
{
lean_object* v___x_2400_; 
v___x_2400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2400_, 0, v_bs_2396_);
lean_ctor_set(v___x_2400_, 1, v___y_2398_);
return v___x_2400_;
}
else
{
lean_object* v___x_2401_; lean_object* v___f_2402_; lean_object* v_v_2403_; lean_object* v___x_2404_; 
v___x_2401_ = lean_box(v___x_2393_);
v___f_2402_ = lean_alloc_closure((void*)(l_Lean_expandMacros___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2402_, 0, v___x_2401_);
v_v_2403_ = lean_array_uget_borrowed(v_bs_2396_, v_i_2395_);
lean_inc_ref(v___y_2397_);
lean_inc(v_v_2403_);
v___x_2404_ = l_Lean_expandMacros(v_v_2403_, v___f_2402_, v___y_2397_, v___y_2398_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v_a_2406_; lean_object* v___x_2407_; lean_object* v_bs_x27_2408_; size_t v___x_2409_; size_t v___x_2410_; lean_object* v___x_2411_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_a_2405_);
v_a_2406_ = lean_ctor_get(v___x_2404_, 1);
lean_inc(v_a_2406_);
lean_dec_ref_known(v___x_2404_, 2);
v___x_2407_ = lean_unsigned_to_nat(0u);
v_bs_x27_2408_ = lean_array_uset(v_bs_2396_, v_i_2395_, v___x_2407_);
v___x_2409_ = ((size_t)1ULL);
v___x_2410_ = lean_usize_add(v_i_2395_, v___x_2409_);
v___x_2411_ = lean_array_uset(v_bs_x27_2408_, v_i_2395_, v_a_2405_);
v_i_2395_ = v___x_2410_;
v_bs_2396_ = v___x_2411_;
v___y_2398_ = v_a_2406_;
goto _start;
}
else
{
lean_object* v_a_2413_; lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
lean_dec_ref(v_bs_2396_);
v_a_2413_ = lean_ctor_get(v___x_2404_, 0);
v_a_2414_ = lean_ctor_get(v___x_2404_, 1);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___x_2404_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_inc(v_a_2413_);
lean_dec(v___x_2404_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2413_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0___boxed(lean_object* v___x_2422_, lean_object* v_sz_2423_, lean_object* v_i_2424_, lean_object* v_bs_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_){
_start:
{
uint8_t v___x_1802__boxed_2428_; size_t v_sz_boxed_2429_; size_t v_i_boxed_2430_; lean_object* v_res_2431_; 
v___x_1802__boxed_2428_ = lean_unbox(v___x_2422_);
v_sz_boxed_2429_ = lean_unbox_usize(v_sz_2423_);
lean_dec(v_sz_2423_);
v_i_boxed_2430_ = lean_unbox_usize(v_i_2424_);
lean_dec(v_i_2424_);
v_res_2431_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_expandMacros_spec__0(v___x_1802__boxed_2428_, v_sz_boxed_2429_, v_i_boxed_2430_, v_bs_2425_, v___y_2426_, v___y_2427_);
lean_dec_ref(v___y_2426_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom(lean_object* v_src_2432_, lean_object* v_val_2433_, uint8_t v_canonical_2434_){
_start:
{
lean_object* v___x_2435_; uint8_t v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; 
v___x_2435_ = l_Lean_SourceInfo_fromRef(v_src_2432_, v_canonical_2434_);
v___x_2436_ = 1;
lean_inc(v_val_2433_);
v___x_2437_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_val_2433_, v___x_2436_);
v___x_2438_ = lean_unsigned_to_nat(0u);
v___x_2439_ = lean_string_utf8_byte_size(v___x_2437_);
v___x_2440_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2437_);
lean_ctor_set(v___x_2440_, 1, v___x_2438_);
lean_ctor_set(v___x_2440_, 2, v___x_2439_);
v___x_2441_ = lean_box(0);
v___x_2442_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2435_);
lean_ctor_set(v___x_2442_, 1, v___x_2440_);
lean_ctor_set(v___x_2442_, 2, v_val_2433_);
lean_ctor_set(v___x_2442_, 3, v___x_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFrom___boxed(lean_object* v_src_2443_, lean_object* v_val_2444_, lean_object* v_canonical_2445_){
_start:
{
uint8_t v_canonical_boxed_2446_; lean_object* v_res_2447_; 
v_canonical_boxed_2446_ = lean_unbox(v_canonical_2445_);
v_res_2447_ = l_Lean_mkIdentFrom(v_src_2443_, v_val_2444_, v_canonical_boxed_2446_);
lean_dec(v_src_2443_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocCommentFrom(lean_object* v_src_2463_, lean_object* v_text_2464_, uint8_t v_canonical_2465_){
_start:
{
lean_object* v_info_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v_body_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v_info_2466_ = l_Lean_SourceInfo_fromRef(v_src_2463_, v_canonical_2465_);
v___x_2467_ = lean_box(2);
v___x_2468_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__2));
lean_inc_n(v_info_2466_, 2);
v___x_2469_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2469_, 0, v_info_2466_);
lean_ctor_set(v___x_2469_, 1, v_text_2464_);
v___x_2470_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__3));
v___x_2471_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2471_, 0, v_info_2466_);
lean_ctor_set(v___x_2471_, 1, v___x_2470_);
v___x_2472_ = lean_unsigned_to_nat(2u);
v___x_2473_ = lean_mk_empty_array_with_capacity(v___x_2472_);
lean_inc_ref(v___x_2473_);
v___x_2474_ = lean_array_push(v___x_2473_, v___x_2469_);
v___x_2475_ = lean_array_push(v___x_2474_, v___x_2471_);
v_body_2476_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_body_2476_, 0, v___x_2467_);
lean_ctor_set(v_body_2476_, 1, v___x_2468_);
lean_ctor_set(v_body_2476_, 2, v___x_2475_);
v___x_2477_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__5));
v___x_2478_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__6));
v___x_2479_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2479_, 0, v_info_2466_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
v___x_2480_ = lean_array_push(v___x_2473_, v___x_2479_);
v___x_2481_ = lean_array_push(v___x_2480_, v_body_2476_);
v___x_2482_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2467_);
lean_ctor_set(v___x_2482_, 1, v___x_2477_);
lean_ctor_set(v___x_2482_, 2, v___x_2481_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocCommentFrom___boxed(lean_object* v_src_2483_, lean_object* v_text_2484_, lean_object* v_canonical_2485_){
_start:
{
uint8_t v_canonical_boxed_2486_; lean_object* v_res_2487_; 
v_canonical_boxed_2486_ = lean_unbox(v_canonical_2485_);
v_res_2487_ = l_Lean_mkMarkdownDocCommentFrom(v_src_2483_, v_text_2484_, v_canonical_boxed_2486_);
lean_dec(v_src_2483_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMarkdownDocComment(lean_object* v_text_2488_){
_start:
{
lean_object* v___x_2489_; uint8_t v___x_2490_; lean_object* v___x_2491_; 
v___x_2489_ = lean_box(0);
v___x_2490_ = 0;
v___x_2491_ = l_Lean_mkMarkdownDocCommentFrom(v___x_2489_, v_text_2488_, v___x_2490_);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0(lean_object* v_val_2492_, uint8_t v_canonical_2493_, lean_object* v_toPure_2494_, lean_object* v_____do__lift_2495_){
_start:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2496_ = l_Lean_mkIdentFrom(v_____do__lift_2495_, v_val_2492_, v_canonical_2493_);
v___x_2497_ = lean_apply_2(v_toPure_2494_, lean_box(0), v___x_2496_);
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___lam__0___boxed(lean_object* v_val_2498_, lean_object* v_canonical_2499_, lean_object* v_toPure_2500_, lean_object* v_____do__lift_2501_){
_start:
{
uint8_t v_canonical_boxed_2502_; lean_object* v_res_2503_; 
v_canonical_boxed_2502_ = lean_unbox(v_canonical_2499_);
v_res_2503_ = l_Lean_mkIdentFromRef___redArg___lam__0(v_val_2498_, v_canonical_boxed_2502_, v_toPure_2500_, v_____do__lift_2501_);
lean_dec(v_____do__lift_2501_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg(lean_object* v_inst_2504_, lean_object* v_inst_2505_, lean_object* v_val_2506_, uint8_t v_canonical_2507_){
_start:
{
lean_object* v_toApplicative_2508_; lean_object* v_toBind_2509_; lean_object* v_getRef_2510_; lean_object* v_toPure_2511_; lean_object* v___x_2512_; lean_object* v___f_2513_; lean_object* v___x_2514_; 
v_toApplicative_2508_ = lean_ctor_get(v_inst_2504_, 0);
lean_inc_ref(v_toApplicative_2508_);
v_toBind_2509_ = lean_ctor_get(v_inst_2504_, 1);
lean_inc(v_toBind_2509_);
lean_dec_ref(v_inst_2504_);
v_getRef_2510_ = lean_ctor_get(v_inst_2505_, 0);
lean_inc(v_getRef_2510_);
lean_dec_ref(v_inst_2505_);
v_toPure_2511_ = lean_ctor_get(v_toApplicative_2508_, 1);
lean_inc(v_toPure_2511_);
lean_dec_ref(v_toApplicative_2508_);
v___x_2512_ = lean_box(v_canonical_2507_);
v___f_2513_ = lean_alloc_closure((void*)(l_Lean_mkIdentFromRef___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2513_, 0, v_val_2506_);
lean_closure_set(v___f_2513_, 1, v___x_2512_);
lean_closure_set(v___f_2513_, 2, v_toPure_2511_);
v___x_2514_ = lean_apply_4(v_toBind_2509_, lean_box(0), lean_box(0), v_getRef_2510_, v___f_2513_);
return v___x_2514_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___redArg___boxed(lean_object* v_inst_2515_, lean_object* v_inst_2516_, lean_object* v_val_2517_, lean_object* v_canonical_2518_){
_start:
{
uint8_t v_canonical_boxed_2519_; lean_object* v_res_2520_; 
v_canonical_boxed_2519_ = lean_unbox(v_canonical_2518_);
v_res_2520_ = l_Lean_mkIdentFromRef___redArg(v_inst_2515_, v_inst_2516_, v_val_2517_, v_canonical_boxed_2519_);
return v_res_2520_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef(lean_object* v_m_2521_, lean_object* v_inst_2522_, lean_object* v_inst_2523_, lean_object* v_val_2524_, uint8_t v_canonical_2525_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l_Lean_mkIdentFromRef___redArg(v_inst_2522_, v_inst_2523_, v_val_2524_, v_canonical_2525_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdentFromRef___boxed(lean_object* v_m_2527_, lean_object* v_inst_2528_, lean_object* v_inst_2529_, lean_object* v_val_2530_, lean_object* v_canonical_2531_){
_start:
{
uint8_t v_canonical_boxed_2532_; lean_object* v_res_2533_; 
v_canonical_boxed_2532_ = lean_unbox(v_canonical_2531_);
v_res_2533_ = l_Lean_mkIdentFromRef(v_m_2527_, v_inst_2528_, v_inst_2529_, v_val_2530_, v_canonical_boxed_2532_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom(lean_object* v_src_2537_, lean_object* v_c_2538_, uint8_t v_canonical_2539_){
_start:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v_id_2542_; lean_object* v___x_2543_; uint8_t v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; 
v___x_2540_ = ((lean_object*)(l_Lean_mkCIdentFrom___closed__1));
v___x_2541_ = lean_unsigned_to_nat(0u);
lean_inc(v_c_2538_);
v_id_2542_ = l_Lean_addMacroScope(v___x_2540_, v_c_2538_, v___x_2541_);
v___x_2543_ = l_Lean_SourceInfo_fromRef(v_src_2537_, v_canonical_2539_);
v___x_2544_ = 1;
lean_inc(v_id_2542_);
v___x_2545_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_id_2542_, v___x_2544_);
v___x_2546_ = lean_string_utf8_byte_size(v___x_2545_);
v___x_2547_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2547_, 0, v___x_2545_);
lean_ctor_set(v___x_2547_, 1, v___x_2541_);
lean_ctor_set(v___x_2547_, 2, v___x_2546_);
v___x_2548_ = lean_box(0);
v___x_2549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2549_, 0, v_c_2538_);
lean_ctor_set(v___x_2549_, 1, v___x_2548_);
v___x_2550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2549_);
lean_ctor_set(v___x_2550_, 1, v___x_2548_);
v___x_2551_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2543_);
lean_ctor_set(v___x_2551_, 1, v___x_2547_);
lean_ctor_set(v___x_2551_, 2, v_id_2542_);
lean_ctor_set(v___x_2551_, 3, v___x_2550_);
return v___x_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFrom___boxed(lean_object* v_src_2552_, lean_object* v_c_2553_, lean_object* v_canonical_2554_){
_start:
{
uint8_t v_canonical_boxed_2555_; lean_object* v_res_2556_; 
v_canonical_boxed_2555_ = lean_unbox(v_canonical_2554_);
v_res_2556_ = l_Lean_mkCIdentFrom(v_src_2552_, v_c_2553_, v_canonical_boxed_2555_);
lean_dec(v_src_2552_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0(lean_object* v_c_2557_, uint8_t v_canonical_2558_, lean_object* v_toPure_2559_, lean_object* v_____do__lift_2560_){
_start:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2561_ = l_Lean_mkCIdentFrom(v_____do__lift_2560_, v_c_2557_, v_canonical_2558_);
v___x_2562_ = lean_apply_2(v_toPure_2559_, lean_box(0), v___x_2561_);
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___lam__0___boxed(lean_object* v_c_2563_, lean_object* v_canonical_2564_, lean_object* v_toPure_2565_, lean_object* v_____do__lift_2566_){
_start:
{
uint8_t v_canonical_boxed_2567_; lean_object* v_res_2568_; 
v_canonical_boxed_2567_ = lean_unbox(v_canonical_2564_);
v_res_2568_ = l_Lean_mkCIdentFromRef___redArg___lam__0(v_c_2563_, v_canonical_boxed_2567_, v_toPure_2565_, v_____do__lift_2566_);
lean_dec(v_____do__lift_2566_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg(lean_object* v_inst_2569_, lean_object* v_inst_2570_, lean_object* v_c_2571_, uint8_t v_canonical_2572_){
_start:
{
lean_object* v_toApplicative_2573_; lean_object* v_toBind_2574_; lean_object* v_getRef_2575_; lean_object* v_toPure_2576_; lean_object* v___x_2577_; lean_object* v___f_2578_; lean_object* v___x_2579_; 
v_toApplicative_2573_ = lean_ctor_get(v_inst_2569_, 0);
lean_inc_ref(v_toApplicative_2573_);
v_toBind_2574_ = lean_ctor_get(v_inst_2569_, 1);
lean_inc(v_toBind_2574_);
lean_dec_ref(v_inst_2569_);
v_getRef_2575_ = lean_ctor_get(v_inst_2570_, 0);
lean_inc(v_getRef_2575_);
lean_dec_ref(v_inst_2570_);
v_toPure_2576_ = lean_ctor_get(v_toApplicative_2573_, 1);
lean_inc(v_toPure_2576_);
lean_dec_ref(v_toApplicative_2573_);
v___x_2577_ = lean_box(v_canonical_2572_);
v___f_2578_ = lean_alloc_closure((void*)(l_Lean_mkCIdentFromRef___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2578_, 0, v_c_2571_);
lean_closure_set(v___f_2578_, 1, v___x_2577_);
lean_closure_set(v___f_2578_, 2, v_toPure_2576_);
v___x_2579_ = lean_apply_4(v_toBind_2574_, lean_box(0), lean_box(0), v_getRef_2575_, v___f_2578_);
return v___x_2579_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___redArg___boxed(lean_object* v_inst_2580_, lean_object* v_inst_2581_, lean_object* v_c_2582_, lean_object* v_canonical_2583_){
_start:
{
uint8_t v_canonical_boxed_2584_; lean_object* v_res_2585_; 
v_canonical_boxed_2584_ = lean_unbox(v_canonical_2583_);
v_res_2585_ = l_Lean_mkCIdentFromRef___redArg(v_inst_2580_, v_inst_2581_, v_c_2582_, v_canonical_boxed_2584_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef(lean_object* v_m_2586_, lean_object* v_inst_2587_, lean_object* v_inst_2588_, lean_object* v_c_2589_, uint8_t v_canonical_2590_){
_start:
{
lean_object* v___x_2591_; 
v___x_2591_ = l_Lean_mkCIdentFromRef___redArg(v_inst_2587_, v_inst_2588_, v_c_2589_, v_canonical_2590_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdentFromRef___boxed(lean_object* v_m_2592_, lean_object* v_inst_2593_, lean_object* v_inst_2594_, lean_object* v_c_2595_, lean_object* v_canonical_2596_){
_start:
{
uint8_t v_canonical_boxed_2597_; lean_object* v_res_2598_; 
v_canonical_boxed_2597_ = lean_unbox(v_canonical_2596_);
v_res_2598_ = l_Lean_mkCIdentFromRef(v_m_2592_, v_inst_2593_, v_inst_2594_, v_c_2595_, v_canonical_boxed_2597_);
return v_res_2598_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCIdent(lean_object* v_c_2599_){
_start:
{
lean_object* v___x_2600_; uint8_t v___x_2601_; lean_object* v___x_2602_; 
v___x_2600_ = lean_box(0);
v___x_2601_ = 0;
v___x_2602_ = l_Lean_mkCIdentFrom(v___x_2600_, v_c_2599_, v___x_2601_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkIdent(lean_object* v_val_2603_){
_start:
{
lean_object* v___x_2604_; uint8_t v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; 
v___x_2604_ = lean_box(2);
v___x_2605_ = 1;
lean_inc(v_val_2603_);
v___x_2606_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_val_2603_, v___x_2605_);
v___x_2607_ = lean_unsigned_to_nat(0u);
v___x_2608_ = lean_string_utf8_byte_size(v___x_2606_);
v___x_2609_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2606_);
lean_ctor_set(v___x_2609_, 1, v___x_2607_);
lean_ctor_set(v___x_2609_, 2, v___x_2608_);
v___x_2610_ = lean_box(0);
v___x_2611_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2604_);
lean_ctor_set(v___x_2611_, 1, v___x_2609_);
lean_ctor_set(v___x_2611_, 2, v_val_2603_);
lean_ctor_set(v___x_2611_, 3, v___x_2610_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkGroupNode(lean_object* v_args_2615_){
_start:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2616_ = ((lean_object*)(l_Lean_mkGroupNode___closed__1));
v___x_2617_ = lean_box(2);
v___x_2618_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2617_);
lean_ctor_set(v___x_2618_, 1, v___x_2616_);
lean_ctor_set(v___x_2618_, 2, v_args_2615_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(lean_object* v_sep_2619_, lean_object* v_as_2620_, size_t v_sz_2621_, size_t v_i_2622_, lean_object* v_b_2623_){
_start:
{
uint8_t v___x_2624_; 
v___x_2624_ = lean_usize_dec_lt(v_i_2622_, v_sz_2621_);
if (v___x_2624_ == 0)
{
lean_dec(v_sep_2619_);
return v_b_2623_;
}
else
{
lean_object* v_fst_2625_; lean_object* v_snd_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2646_; 
v_fst_2625_ = lean_ctor_get(v_b_2623_, 0);
v_snd_2626_ = lean_ctor_get(v_b_2623_, 1);
v_isSharedCheck_2646_ = !lean_is_exclusive(v_b_2623_);
if (v_isSharedCheck_2646_ == 0)
{
v___x_2628_ = v_b_2623_;
v_isShared_2629_ = v_isSharedCheck_2646_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_snd_2626_);
lean_inc(v_fst_2625_);
lean_dec(v_b_2623_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2646_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v_r_2631_; lean_object* v_i_2640_; lean_object* v_a_2641_; uint8_t v___x_2642_; 
v_i_2640_ = lean_unsigned_to_nat(0u);
v_a_2641_ = lean_array_uget_borrowed(v_as_2620_, v_i_2622_);
v___x_2642_ = lean_nat_dec_lt(v_i_2640_, v_fst_2625_);
if (v___x_2642_ == 0)
{
lean_object* v___x_2643_; 
lean_inc(v_a_2641_);
v___x_2643_ = lean_array_push(v_snd_2626_, v_a_2641_);
v_r_2631_ = v___x_2643_;
goto v___jp_2630_;
}
else
{
lean_object* v___x_2644_; lean_object* v___x_2645_; 
lean_inc(v_sep_2619_);
v___x_2644_ = lean_array_push(v_snd_2626_, v_sep_2619_);
lean_inc(v_a_2641_);
v___x_2645_ = lean_array_push(v___x_2644_, v_a_2641_);
v_r_2631_ = v___x_2645_;
goto v___jp_2630_;
}
v___jp_2630_:
{
lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2635_; 
v___x_2632_ = lean_unsigned_to_nat(1u);
v___x_2633_ = lean_nat_add(v_fst_2625_, v___x_2632_);
lean_dec(v_fst_2625_);
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 1, v_r_2631_);
lean_ctor_set(v___x_2628_, 0, v___x_2633_);
v___x_2635_ = v___x_2628_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v___x_2633_);
lean_ctor_set(v_reuseFailAlloc_2639_, 1, v_r_2631_);
v___x_2635_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
size_t v___x_2636_; size_t v___x_2637_; 
v___x_2636_ = ((size_t)1ULL);
v___x_2637_ = lean_usize_add(v_i_2622_, v___x_2636_);
v_i_2622_ = v___x_2637_;
v_b_2623_ = v___x_2635_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0___boxed(lean_object* v_sep_2647_, lean_object* v_as_2648_, lean_object* v_sz_2649_, lean_object* v_i_2650_, lean_object* v_b_2651_){
_start:
{
size_t v_sz_boxed_2652_; size_t v_i_boxed_2653_; lean_object* v_res_2654_; 
v_sz_boxed_2652_ = lean_unbox_usize(v_sz_2649_);
lean_dec(v_sz_2649_);
v_i_boxed_2653_ = lean_unbox_usize(v_i_2650_);
lean_dec(v_i_2650_);
v_res_2654_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(v_sep_2647_, v_as_2648_, v_sz_boxed_2652_, v_i_boxed_2653_, v_b_2651_);
lean_dec_ref(v_as_2648_);
return v_res_2654_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkSepArray(lean_object* v_as_2660_, lean_object* v_sep_2661_){
_start:
{
lean_object* v___x_2662_; size_t v_sz_2663_; size_t v___x_2664_; lean_object* v___x_2665_; lean_object* v_snd_2666_; 
v___x_2662_ = ((lean_object*)(l_Lean_mkSepArray___closed__1));
v_sz_2663_ = lean_array_size(v_as_2660_);
v___x_2664_ = ((size_t)0ULL);
v___x_2665_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_mkSepArray_spec__0(v_sep_2661_, v_as_2660_, v_sz_2663_, v___x_2664_, v___x_2662_);
v_snd_2666_ = lean_ctor_get(v___x_2665_, 1);
lean_inc(v_snd_2666_);
lean_dec_ref(v___x_2665_);
return v_snd_2666_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkSepArray___boxed(lean_object* v_as_2667_, lean_object* v_sep_2668_){
_start:
{
lean_object* v_res_2669_; 
v_res_2669_ = l_Lean_mkSepArray(v_as_2667_, v_sep_2668_);
lean_dec_ref(v_as_2667_);
return v_res_2669_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkOptionalNode(lean_object* v_arg_2677_){
_start:
{
if (lean_obj_tag(v_arg_2677_) == 0)
{
lean_object* v___x_2678_; 
v___x_2678_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__2));
return v___x_2678_;
}
else
{
lean_object* v_val_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; 
v_val_2679_ = lean_ctor_get(v_arg_2677_, 0);
lean_inc(v_val_2679_);
lean_dec_ref_known(v_arg_2677_, 1);
v___x_2680_ = lean_unsigned_to_nat(1u);
v___x_2681_ = lean_mk_empty_array_with_capacity(v___x_2680_);
v___x_2682_ = lean_array_push(v___x_2681_, v_val_2679_);
v___x_2683_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_2684_ = lean_box(2);
v___x_2685_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2684_);
lean_ctor_set(v___x_2685_, 1, v___x_2683_);
lean_ctor_set(v___x_2685_, 2, v___x_2682_);
return v___x_2685_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkHole(lean_object* v_ref_2692_, uint8_t v_canonical_2693_){
_start:
{
lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2694_ = ((lean_object*)(l_Lean_mkHole___closed__1));
v___x_2695_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken_maybePseudoSyntax___closed__0));
v___x_2696_ = l_Lean_mkAtomFrom(v_ref_2692_, v___x_2695_, v_canonical_2693_);
v___x_2697_ = lean_unsigned_to_nat(1u);
v___x_2698_ = lean_mk_empty_array_with_capacity(v___x_2697_);
v___x_2699_ = lean_array_push(v___x_2698_, v___x_2696_);
v___x_2700_ = lean_box(2);
v___x_2701_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2701_, 0, v___x_2700_);
lean_ctor_set(v___x_2701_, 1, v___x_2694_);
lean_ctor_set(v___x_2701_, 2, v___x_2699_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkHole___boxed(lean_object* v_ref_2702_, lean_object* v_canonical_2703_){
_start:
{
uint8_t v_canonical_boxed_2704_; lean_object* v_res_2705_; 
v_canonical_boxed_2704_ = lean_unbox(v_canonical_2703_);
v_res_2705_ = l_Lean_mkHole(v_ref_2702_, v_canonical_boxed_2704_);
lean_dec(v_ref_2702_);
return v_res_2705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep(lean_object* v_a_2706_, lean_object* v_sep_2707_){
_start:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v___x_2708_ = l_Lean_mkSepArray(v_a_2706_, v_sep_2707_);
v___x_2709_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_2710_ = lean_box(2);
v___x_2711_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2710_);
lean_ctor_set(v___x_2711_, 1, v___x_2709_);
lean_ctor_set(v___x_2711_, 2, v___x_2708_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkSep___boxed(lean_object* v_a_2712_, lean_object* v_sep_2713_){
_start:
{
lean_object* v_res_2714_; 
v_res_2714_ = l_Lean_Syntax_mkSep(v_a_2712_, v_sep_2713_);
lean_dec_ref(v_a_2712_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object* v_sep_2721_, lean_object* v_elems_2722_){
_start:
{
uint8_t v___x_2723_; 
lean_inc_ref(v_sep_2721_);
v___x_2723_ = lean_string_isempty(v_sep_2721_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2724_ = l_Lean_mkAtom(v_sep_2721_);
v___x_2725_ = l_Lean_mkSepArray(v_elems_2722_, v___x_2724_);
return v___x_2725_;
}
else
{
lean_object* v___x_2726_; lean_object* v___x_2727_; 
lean_dec_ref(v_sep_2721_);
v___x_2726_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__1));
v___x_2727_ = l_Lean_mkSepArray(v_elems_2722_, v___x_2726_);
return v___x_2727_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElems___boxed(lean_object* v_sep_2728_, lean_object* v_elems_2729_){
_start:
{
lean_object* v_res_2730_; 
v_res_2730_ = l_Lean_Syntax_SepArray_ofElems(v_sep_2728_, v_elems_2729_);
lean_dec_ref(v_elems_2729_);
return v_res_2730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0(lean_object* v_elems_2731_, lean_object* v_toPure_2732_, lean_object* v_sep_2733_, lean_object* v_ref_2734_){
_start:
{
lean_object* v___y_2736_; uint8_t v___x_2739_; 
lean_inc_ref(v_sep_2733_);
v___x_2739_ = lean_string_isempty(v_sep_2733_);
if (v___x_2739_ == 0)
{
lean_object* v___x_2740_; 
v___x_2740_ = l_Lean_mkAtomFrom(v_ref_2734_, v_sep_2733_, v___x_2739_);
v___y_2736_ = v___x_2740_;
goto v___jp_2735_;
}
else
{
lean_object* v___x_2741_; 
lean_dec_ref(v_sep_2733_);
v___x_2741_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__1));
v___y_2736_ = v___x_2741_;
goto v___jp_2735_;
}
v___jp_2735_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2737_ = l_Lean_mkSepArray(v_elems_2731_, v___y_2736_);
v___x_2738_ = lean_apply_2(v_toPure_2732_, lean_box(0), v___x_2737_);
return v___x_2738_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0___boxed(lean_object* v_elems_2742_, lean_object* v_toPure_2743_, lean_object* v_sep_2744_, lean_object* v_ref_2745_){
_start:
{
lean_object* v_res_2746_; 
v_res_2746_ = l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0(v_elems_2742_, v_toPure_2743_, v_sep_2744_, v_ref_2745_);
lean_dec(v_ref_2745_);
lean_dec_ref(v_elems_2742_);
return v_res_2746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg(lean_object* v_inst_2747_, lean_object* v_inst_2748_, lean_object* v_sep_2749_, lean_object* v_elems_2750_){
_start:
{
lean_object* v_toApplicative_2751_; lean_object* v_toBind_2752_; lean_object* v_getRef_2753_; lean_object* v_toPure_2754_; lean_object* v___f_2755_; lean_object* v___x_2756_; 
v_toApplicative_2751_ = lean_ctor_get(v_inst_2747_, 0);
lean_inc_ref(v_toApplicative_2751_);
v_toBind_2752_ = lean_ctor_get(v_inst_2747_, 1);
lean_inc(v_toBind_2752_);
lean_dec_ref(v_inst_2747_);
v_getRef_2753_ = lean_ctor_get(v_inst_2748_, 0);
lean_inc(v_getRef_2753_);
lean_dec_ref(v_inst_2748_);
v_toPure_2754_ = lean_ctor_get(v_toApplicative_2751_, 1);
lean_inc(v_toPure_2754_);
lean_dec_ref(v_toApplicative_2751_);
v___f_2755_ = lean_alloc_closure((void*)(l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2755_, 0, v_elems_2750_);
lean_closure_set(v___f_2755_, 1, v_toPure_2754_);
lean_closure_set(v___f_2755_, 2, v_sep_2749_);
v___x_2756_ = lean_apply_4(v_toBind_2752_, lean_box(0), lean_box(0), v_getRef_2753_, v___f_2755_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_ofElemsUsingRef(lean_object* v_m_2757_, lean_object* v_inst_2758_, lean_object* v_inst_2759_, lean_object* v_sep_2760_, lean_object* v_elems_2761_){
_start:
{
lean_object* v___x_2762_; 
v___x_2762_ = l_Lean_Syntax_SepArray_ofElemsUsingRef___redArg(v_inst_2758_, v_inst_2759_, v_sep_2760_, v_elems_2761_);
return v___x_2762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg(lean_object* v_sep_2763_, lean_object* v_elems_2764_){
_start:
{
lean_object* v___x_2765_; 
v___x_2765_ = l_Lean_Syntax_SepArray_ofElems(v_sep_2763_, v_elems_2764_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___redArg___boxed(lean_object* v_sep_2766_, lean_object* v_elems_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Lean_Syntax_TSepArray_ofElems___redArg(v_sep_2766_, v_elems_2767_);
lean_dec_ref(v_elems_2767_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems(lean_object* v_k_2769_, lean_object* v_sep_2770_, lean_object* v_elems_2771_){
_start:
{
lean_object* v___x_2772_; 
v___x_2772_ = l_Lean_Syntax_SepArray_ofElems(v_sep_2770_, v_elems_2771_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_ofElems___boxed(lean_object* v_k_2773_, lean_object* v_sep_2774_, lean_object* v_elems_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l_Lean_Syntax_TSepArray_ofElems(v_k_2773_, v_sep_2774_, v_elems_2775_);
lean_dec_ref(v_elems_2775_);
lean_dec(v_k_2773_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayTSepArray(lean_object* v_k_2777_, lean_object* v_sep_2778_){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = lean_alloc_closure((void*)(l_Lean_Syntax_TSepArray_ofElems___boxed), 3, 2);
lean_closure_set(v___x_2779_, 0, v_k_2777_);
lean_closure_set(v___x_2779_, 1, v_sep_2778_);
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkApp(lean_object* v_fn_2786_, lean_object* v_x_2787_){
_start:
{
lean_object* v___x_2788_; lean_object* v___x_2789_; uint8_t v___x_2790_; 
v___x_2788_ = lean_array_get_size(v_x_2787_);
v___x_2789_ = lean_unsigned_to_nat(0u);
v___x_2790_ = lean_nat_dec_eq(v___x_2788_, v___x_2789_);
if (v___x_2790_ == 0)
{
lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v___x_2791_ = ((lean_object*)(l_Lean_Syntax_mkApp___closed__1));
v___x_2792_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_2793_ = lean_box(2);
v___x_2794_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2793_);
lean_ctor_set(v___x_2794_, 1, v___x_2792_);
lean_ctor_set(v___x_2794_, 2, v_x_2787_);
v___x_2795_ = lean_unsigned_to_nat(2u);
v___x_2796_ = lean_mk_empty_array_with_capacity(v___x_2795_);
v___x_2797_ = lean_array_push(v___x_2796_, v_fn_2786_);
v___x_2798_ = lean_array_push(v___x_2797_, v___x_2794_);
v___x_2799_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2793_);
lean_ctor_set(v___x_2799_, 1, v___x_2791_);
lean_ctor_set(v___x_2799_, 2, v___x_2798_);
return v___x_2799_;
}
else
{
lean_dec_ref(v_x_2787_);
return v_fn_2786_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCApp(lean_object* v_fn_2800_, lean_object* v_args_2801_){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2802_ = l_Lean_mkCIdent(v_fn_2800_);
v___x_2803_ = l_Lean_Syntax_mkApp(v___x_2802_, v_args_2801_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkLit(lean_object* v_kind_2804_, lean_object* v_val_2805_, lean_object* v_info_2806_){
_start:
{
lean_object* v_atom_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; 
v_atom_2807_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_2807_, 0, v_info_2806_);
lean_ctor_set(v_atom_2807_, 1, v_val_2805_);
v___x_2808_ = lean_unsigned_to_nat(1u);
v___x_2809_ = lean_mk_empty_array_with_capacity(v___x_2808_);
v___x_2810_ = lean_array_push(v___x_2809_, v_atom_2807_);
v___x_2811_ = lean_box(2);
v___x_2812_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2812_, 0, v___x_2811_);
lean_ctor_set(v___x_2812_, 1, v_kind_2804_);
lean_ctor_set(v___x_2812_, 2, v___x_2810_);
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit(uint32_t v_val_2816_, lean_object* v_info_2817_){
_start:
{
lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v___x_2818_ = ((lean_object*)(l_Lean_Syntax_mkCharLit___closed__1));
v___x_2819_ = l_Char_quote(v_val_2816_);
v___x_2820_ = l_Lean_Syntax_mkLit(v___x_2818_, v___x_2819_, v_info_2817_);
return v___x_2820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkCharLit___boxed(lean_object* v_val_2821_, lean_object* v_info_2822_){
_start:
{
uint32_t v_val_boxed_2823_; lean_object* v_res_2824_; 
v_val_boxed_2823_ = lean_unbox_uint32(v_val_2821_);
lean_dec(v_val_2821_);
v_res_2824_ = l_Lean_Syntax_mkCharLit(v_val_boxed_2823_, v_info_2822_);
return v_res_2824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkStrLit(lean_object* v_val_2828_, lean_object* v_info_2829_){
_start:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; 
v___x_2830_ = ((lean_object*)(l_Lean_Syntax_mkStrLit___closed__1));
v___x_2831_ = l_String_quote(v_val_2828_);
v___x_2832_ = l_Lean_Syntax_mkLit(v___x_2830_, v___x_2831_, v_info_2829_);
return v___x_2832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNumLit(lean_object* v_val_2836_, lean_object* v_info_2837_){
_start:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
v___x_2839_ = l_Lean_Syntax_mkLit(v___x_2838_, v_val_2836_, v_info_2837_);
return v___x_2839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNatLit(lean_object* v_val_2840_, lean_object* v_info_2841_){
_start:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2842_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
v___x_2843_ = l_Nat_reprFast(v_val_2840_);
v___x_2844_ = l_Lean_Syntax_mkLit(v___x_2842_, v___x_2843_, v_info_2841_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkScientificLit(lean_object* v_val_2848_, lean_object* v_info_2849_){
_start:
{
lean_object* v___x_2850_; lean_object* v___x_2851_; 
v___x_2850_ = ((lean_object*)(l_Lean_Syntax_mkScientificLit___closed__1));
v___x_2851_ = l_Lean_Syntax_mkLit(v___x_2850_, v_val_2848_, v_info_2849_);
return v___x_2851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_mkNameLit(lean_object* v_val_2855_, lean_object* v_info_2856_){
_start:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2857_ = ((lean_object*)(l_Lean_Syntax_mkNameLit___closed__1));
v___x_2858_ = l_Lean_Syntax_mkLit(v___x_2857_, v_val_2855_, v_info_2856_);
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(lean_object* v_s_2859_, lean_object* v_i_2860_, lean_object* v_val_2861_){
_start:
{
uint8_t v___x_2862_; 
v___x_2862_ = lean_string_utf8_at_end(v_s_2859_, v_i_2860_);
if (v___x_2862_ == 0)
{
uint32_t v_c_2863_; uint32_t v___x_2864_; uint8_t v___x_2865_; 
v_c_2863_ = lean_string_utf8_get(v_s_2859_, v_i_2860_);
v___x_2864_ = 48;
v___x_2865_ = lean_uint32_dec_eq(v_c_2863_, v___x_2864_);
if (v___x_2865_ == 0)
{
uint32_t v___x_2866_; uint8_t v___x_2867_; 
v___x_2866_ = 49;
v___x_2867_ = lean_uint32_dec_eq(v_c_2863_, v___x_2866_);
if (v___x_2867_ == 0)
{
uint32_t v___x_2868_; uint8_t v___x_2869_; 
v___x_2868_ = 95;
v___x_2869_ = lean_uint32_dec_eq(v_c_2863_, v___x_2868_);
if (v___x_2869_ == 0)
{
lean_object* v___x_2870_; 
lean_dec(v_val_2861_);
lean_dec(v_i_2860_);
v___x_2870_ = lean_box(0);
return v___x_2870_;
}
else
{
lean_object* v___x_2871_; 
v___x_2871_ = lean_string_utf8_next(v_s_2859_, v_i_2860_);
lean_dec(v_i_2860_);
v_i_2860_ = v___x_2871_;
goto _start;
}
}
else
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2873_ = lean_string_utf8_next(v_s_2859_, v_i_2860_);
lean_dec(v_i_2860_);
v___x_2874_ = lean_unsigned_to_nat(2u);
v___x_2875_ = lean_nat_mul(v___x_2874_, v_val_2861_);
lean_dec(v_val_2861_);
v___x_2876_ = lean_unsigned_to_nat(1u);
v___x_2877_ = lean_nat_add(v___x_2875_, v___x_2876_);
lean_dec(v___x_2875_);
v_i_2860_ = v___x_2873_;
v_val_2861_ = v___x_2877_;
goto _start;
}
}
else
{
lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2879_ = lean_string_utf8_next(v_s_2859_, v_i_2860_);
lean_dec(v_i_2860_);
v___x_2880_ = lean_unsigned_to_nat(2u);
v___x_2881_ = lean_nat_mul(v___x_2880_, v_val_2861_);
lean_dec(v_val_2861_);
v_i_2860_ = v___x_2879_;
v_val_2861_ = v___x_2881_;
goto _start;
}
}
else
{
lean_object* v___x_2883_; 
lean_dec(v_i_2860_);
v___x_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2883_, 0, v_val_2861_);
return v___x_2883_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux___boxed(lean_object* v_s_2884_, lean_object* v_i_2885_, lean_object* v_val_2886_){
_start:
{
lean_object* v_res_2887_; 
v_res_2887_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(v_s_2884_, v_i_2885_, v_val_2886_);
lean_dec_ref(v_s_2884_);
return v_res_2887_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(lean_object* v_s_2888_, lean_object* v_i_2889_, lean_object* v_val_2890_){
_start:
{
uint8_t v___x_2891_; 
v___x_2891_ = lean_string_utf8_at_end(v_s_2888_, v_i_2889_);
if (v___x_2891_ == 0)
{
uint32_t v_c_2892_; uint32_t v___x_2899_; uint8_t v___x_2900_; 
v_c_2892_ = lean_string_utf8_get(v_s_2888_, v_i_2889_);
v___x_2899_ = 48;
v___x_2900_ = lean_uint32_dec_le(v___x_2899_, v_c_2892_);
if (v___x_2900_ == 0)
{
goto v___jp_2893_;
}
else
{
uint32_t v___x_2901_; uint8_t v___x_2902_; 
v___x_2901_ = 55;
v___x_2902_ = lean_uint32_dec_le(v_c_2892_, v___x_2901_);
if (v___x_2902_ == 0)
{
goto v___jp_2893_;
}
else
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v___x_2903_ = lean_string_utf8_next(v_s_2888_, v_i_2889_);
lean_dec(v_i_2889_);
v___x_2904_ = lean_unsigned_to_nat(8u);
v___x_2905_ = lean_nat_mul(v___x_2904_, v_val_2890_);
lean_dec(v_val_2890_);
v___x_2906_ = lean_uint32_to_nat(v_c_2892_);
v___x_2907_ = lean_nat_add(v___x_2905_, v___x_2906_);
lean_dec(v___x_2906_);
lean_dec(v___x_2905_);
v___x_2908_ = lean_unsigned_to_nat(48u);
v___x_2909_ = lean_nat_sub(v___x_2907_, v___x_2908_);
lean_dec(v___x_2907_);
v_i_2889_ = v___x_2903_;
v_val_2890_ = v___x_2909_;
goto _start;
}
}
v___jp_2893_:
{
uint32_t v___x_2894_; uint8_t v___x_2895_; 
v___x_2894_ = 95;
v___x_2895_ = lean_uint32_dec_eq(v_c_2892_, v___x_2894_);
if (v___x_2895_ == 0)
{
lean_object* v___x_2896_; 
lean_dec(v_val_2890_);
lean_dec(v_i_2889_);
v___x_2896_ = lean_box(0);
return v___x_2896_;
}
else
{
lean_object* v___x_2897_; 
v___x_2897_ = lean_string_utf8_next(v_s_2888_, v_i_2889_);
lean_dec(v_i_2889_);
v_i_2889_ = v___x_2897_;
goto _start;
}
}
}
else
{
lean_object* v___x_2911_; 
lean_dec(v_i_2889_);
v___x_2911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2911_, 0, v_val_2890_);
return v___x_2911_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux___boxed(lean_object* v_s_2912_, lean_object* v_i_2913_, lean_object* v_val_2914_){
_start:
{
lean_object* v_res_2915_; 
v_res_2915_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(v_s_2912_, v_i_2913_, v_val_2914_);
lean_dec_ref(v_s_2912_);
return v_res_2915_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(lean_object* v_s_2916_, lean_object* v_i_2917_){
_start:
{
uint32_t v_c_2918_; lean_object* v_i_2919_; uint32_t v___x_2946_; uint8_t v___x_2947_; 
v_c_2918_ = lean_string_utf8_get(v_s_2916_, v_i_2917_);
v_i_2919_ = lean_string_utf8_next(v_s_2916_, v_i_2917_);
v___x_2946_ = 48;
v___x_2947_ = lean_uint32_dec_le(v___x_2946_, v_c_2918_);
if (v___x_2947_ == 0)
{
goto v___jp_2934_;
}
else
{
uint32_t v___x_2948_; uint8_t v___x_2949_; 
v___x_2948_ = 57;
v___x_2949_ = lean_uint32_dec_le(v_c_2918_, v___x_2948_);
if (v___x_2949_ == 0)
{
goto v___jp_2934_;
}
else
{
lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2950_ = lean_uint32_to_nat(v_c_2918_);
v___x_2951_ = lean_unsigned_to_nat(48u);
v___x_2952_ = lean_nat_sub(v___x_2950_, v___x_2951_);
lean_dec(v___x_2950_);
v___x_2953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2952_);
lean_ctor_set(v___x_2953_, 1, v_i_2919_);
v___x_2954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2954_, 0, v___x_2953_);
return v___x_2954_;
}
}
v___jp_2920_:
{
uint32_t v___x_2921_; uint8_t v___x_2922_; 
v___x_2921_ = 65;
v___x_2922_ = lean_uint32_dec_le(v___x_2921_, v_c_2918_);
if (v___x_2922_ == 0)
{
lean_object* v___x_2923_; 
lean_dec(v_i_2919_);
v___x_2923_ = lean_box(0);
return v___x_2923_;
}
else
{
uint32_t v___x_2924_; uint8_t v___x_2925_; 
v___x_2924_ = 70;
v___x_2925_ = lean_uint32_dec_le(v_c_2918_, v___x_2924_);
if (v___x_2925_ == 0)
{
lean_object* v___x_2926_; 
lean_dec(v_i_2919_);
v___x_2926_ = lean_box(0);
return v___x_2926_;
}
else
{
lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2927_ = lean_unsigned_to_nat(10u);
v___x_2928_ = lean_uint32_to_nat(v_c_2918_);
v___x_2929_ = lean_nat_add(v___x_2927_, v___x_2928_);
lean_dec(v___x_2928_);
v___x_2930_ = lean_unsigned_to_nat(65u);
v___x_2931_ = lean_nat_sub(v___x_2929_, v___x_2930_);
lean_dec(v___x_2929_);
v___x_2932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2931_);
lean_ctor_set(v___x_2932_, 1, v_i_2919_);
v___x_2933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2933_, 0, v___x_2932_);
return v___x_2933_;
}
}
}
v___jp_2934_:
{
uint32_t v___x_2935_; uint8_t v___x_2936_; 
v___x_2935_ = 97;
v___x_2936_ = lean_uint32_dec_le(v___x_2935_, v_c_2918_);
if (v___x_2936_ == 0)
{
goto v___jp_2920_;
}
else
{
uint32_t v___x_2937_; uint8_t v___x_2938_; 
v___x_2937_ = 102;
v___x_2938_ = lean_uint32_dec_le(v_c_2918_, v___x_2937_);
if (v___x_2938_ == 0)
{
goto v___jp_2920_;
}
else
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
v___x_2939_ = lean_unsigned_to_nat(10u);
v___x_2940_ = lean_uint32_to_nat(v_c_2918_);
v___x_2941_ = lean_nat_add(v___x_2939_, v___x_2940_);
lean_dec(v___x_2940_);
v___x_2942_ = lean_unsigned_to_nat(97u);
v___x_2943_ = lean_nat_sub(v___x_2941_, v___x_2942_);
lean_dec(v___x_2941_);
v___x_2944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2943_);
lean_ctor_set(v___x_2944_, 1, v_i_2919_);
v___x_2945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2944_);
return v___x_2945_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit___boxed(lean_object* v_s_2955_, lean_object* v_i_2956_){
_start:
{
lean_object* v_res_2957_; 
v_res_2957_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_2955_, v_i_2956_);
lean_dec(v_i_2956_);
lean_dec_ref(v_s_2955_);
return v_res_2957_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(lean_object* v_s_2958_, lean_object* v_i_2959_, lean_object* v_val_2960_){
_start:
{
uint8_t v___x_2961_; 
v___x_2961_ = lean_string_utf8_at_end(v_s_2958_, v_i_2959_);
if (v___x_2961_ == 0)
{
lean_object* v___x_2962_; 
v___x_2962_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_2958_, v_i_2959_);
if (lean_obj_tag(v___x_2962_) == 0)
{
uint32_t v___x_2963_; uint32_t v___x_2964_; uint8_t v___x_2965_; 
v___x_2963_ = lean_string_utf8_get(v_s_2958_, v_i_2959_);
v___x_2964_ = 95;
v___x_2965_ = lean_uint32_dec_eq(v___x_2963_, v___x_2964_);
if (v___x_2965_ == 0)
{
lean_object* v___x_2966_; 
lean_dec(v_val_2960_);
lean_dec(v_i_2959_);
v___x_2966_ = lean_box(0);
return v___x_2966_;
}
else
{
lean_object* v___x_2967_; 
v___x_2967_ = lean_string_utf8_next(v_s_2958_, v_i_2959_);
lean_dec(v_i_2959_);
v_i_2959_ = v___x_2967_;
goto _start;
}
}
else
{
lean_object* v_val_2969_; lean_object* v_fst_2970_; lean_object* v_snd_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
lean_dec(v_i_2959_);
v_val_2969_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_val_2969_);
lean_dec_ref_known(v___x_2962_, 1);
v_fst_2970_ = lean_ctor_get(v_val_2969_, 0);
lean_inc(v_fst_2970_);
v_snd_2971_ = lean_ctor_get(v_val_2969_, 1);
lean_inc(v_snd_2971_);
lean_dec(v_val_2969_);
v___x_2972_ = lean_unsigned_to_nat(16u);
v___x_2973_ = lean_nat_mul(v___x_2972_, v_val_2960_);
lean_dec(v_val_2960_);
v___x_2974_ = lean_nat_add(v___x_2973_, v_fst_2970_);
lean_dec(v_fst_2970_);
lean_dec(v___x_2973_);
v_i_2959_ = v_snd_2971_;
v_val_2960_ = v___x_2974_;
goto _start;
}
}
else
{
lean_object* v___x_2976_; 
lean_dec(v_i_2959_);
v___x_2976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2976_, 0, v_val_2960_);
return v___x_2976_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux___boxed(lean_object* v_s_2977_, lean_object* v_i_2978_, lean_object* v_val_2979_){
_start:
{
lean_object* v_res_2980_; 
v_res_2980_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(v_s_2977_, v_i_2978_, v_val_2979_);
lean_dec_ref(v_s_2977_);
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(lean_object* v_s_2981_, lean_object* v_i_2982_, lean_object* v_val_2983_){
_start:
{
uint8_t v___x_2984_; 
v___x_2984_ = lean_string_utf8_at_end(v_s_2981_, v_i_2982_);
if (v___x_2984_ == 0)
{
uint32_t v_c_2985_; uint32_t v___x_2992_; uint8_t v___x_2993_; 
v_c_2985_ = lean_string_utf8_get(v_s_2981_, v_i_2982_);
v___x_2992_ = 48;
v___x_2993_ = lean_uint32_dec_le(v___x_2992_, v_c_2985_);
if (v___x_2993_ == 0)
{
goto v___jp_2986_;
}
else
{
uint32_t v___x_2994_; uint8_t v___x_2995_; 
v___x_2994_ = 57;
v___x_2995_ = lean_uint32_dec_le(v_c_2985_, v___x_2994_);
if (v___x_2995_ == 0)
{
goto v___jp_2986_;
}
else
{
lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
v___x_2996_ = lean_string_utf8_next(v_s_2981_, v_i_2982_);
lean_dec(v_i_2982_);
v___x_2997_ = lean_unsigned_to_nat(10u);
v___x_2998_ = lean_nat_mul(v___x_2997_, v_val_2983_);
lean_dec(v_val_2983_);
v___x_2999_ = lean_uint32_to_nat(v_c_2985_);
v___x_3000_ = lean_nat_add(v___x_2998_, v___x_2999_);
lean_dec(v___x_2999_);
lean_dec(v___x_2998_);
v___x_3001_ = lean_unsigned_to_nat(48u);
v___x_3002_ = lean_nat_sub(v___x_3000_, v___x_3001_);
lean_dec(v___x_3000_);
v_i_2982_ = v___x_2996_;
v_val_2983_ = v___x_3002_;
goto _start;
}
}
v___jp_2986_:
{
uint32_t v___x_2987_; uint8_t v___x_2988_; 
v___x_2987_ = 95;
v___x_2988_ = lean_uint32_dec_eq(v_c_2985_, v___x_2987_);
if (v___x_2988_ == 0)
{
lean_object* v___x_2989_; 
lean_dec(v_val_2983_);
lean_dec(v_i_2982_);
v___x_2989_ = lean_box(0);
return v___x_2989_;
}
else
{
lean_object* v___x_2990_; 
v___x_2990_ = lean_string_utf8_next(v_s_2981_, v_i_2982_);
lean_dec(v_i_2982_);
v_i_2982_ = v___x_2990_;
goto _start;
}
}
}
else
{
lean_object* v___x_3004_; 
lean_dec(v_i_2982_);
v___x_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3004_, 0, v_val_2983_);
return v___x_3004_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux___boxed(lean_object* v_s_3005_, lean_object* v_i_3006_, lean_object* v_val_3007_){
_start:
{
lean_object* v_res_3008_; 
v_res_3008_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(v_s_3005_, v_i_3006_, v_val_3007_);
lean_dec_ref(v_s_3005_);
return v_res_3008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f(lean_object* v_s_3011_){
_start:
{
lean_object* v_len_3012_; lean_object* v___x_3013_; uint8_t v___x_3023_; 
v_len_3012_ = lean_string_length(v_s_3011_);
v___x_3013_ = lean_unsigned_to_nat(0u);
v___x_3023_ = lean_nat_dec_eq(v_len_3012_, v___x_3013_);
if (v___x_3023_ == 0)
{
uint32_t v_c_3024_; uint32_t v___x_3025_; uint8_t v___x_3026_; 
v_c_3024_ = lean_string_utf8_get(v_s_3011_, v___x_3013_);
v___x_3025_ = 48;
v___x_3026_ = lean_uint32_dec_eq(v_c_3024_, v___x_3025_);
if (v___x_3026_ == 0)
{
uint8_t v___x_3027_; 
lean_dec(v_len_3012_);
v___x_3027_ = lean_uint32_dec_le(v___x_3025_, v_c_3024_);
if (v___x_3027_ == 0)
{
lean_object* v___x_3028_; 
v___x_3028_ = lean_box(0);
return v___x_3028_;
}
else
{
uint32_t v___x_3029_; uint8_t v___x_3030_; 
v___x_3029_ = 57;
v___x_3030_ = lean_uint32_dec_le(v_c_3024_, v___x_3029_);
if (v___x_3030_ == 0)
{
lean_object* v___x_3031_; 
v___x_3031_ = lean_box(0);
return v___x_3031_;
}
else
{
lean_object* v___x_3032_; 
v___x_3032_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(v_s_3011_, v___x_3013_, v___x_3013_);
return v___x_3032_;
}
}
}
else
{
lean_object* v___x_3033_; uint8_t v___x_3034_; 
v___x_3033_ = lean_unsigned_to_nat(1u);
v___x_3034_ = lean_nat_dec_eq(v_len_3012_, v___x_3033_);
lean_dec(v_len_3012_);
if (v___x_3034_ == 0)
{
uint32_t v_c_3035_; uint32_t v___x_3036_; uint8_t v___x_3037_; 
v_c_3035_ = lean_string_utf8_get(v_s_3011_, v___x_3033_);
v___x_3036_ = 120;
v___x_3037_ = lean_uint32_dec_eq(v_c_3035_, v___x_3036_);
if (v___x_3037_ == 0)
{
uint32_t v___x_3038_; uint8_t v___x_3039_; 
v___x_3038_ = 88;
v___x_3039_ = lean_uint32_dec_eq(v_c_3035_, v___x_3038_);
if (v___x_3039_ == 0)
{
uint32_t v___x_3040_; uint8_t v___x_3041_; 
v___x_3040_ = 98;
v___x_3041_ = lean_uint32_dec_eq(v_c_3035_, v___x_3040_);
if (v___x_3041_ == 0)
{
uint32_t v___x_3042_; uint8_t v___x_3043_; 
v___x_3042_ = 66;
v___x_3043_ = lean_uint32_dec_eq(v_c_3035_, v___x_3042_);
if (v___x_3043_ == 0)
{
uint32_t v___x_3044_; uint8_t v___x_3045_; 
v___x_3044_ = 111;
v___x_3045_ = lean_uint32_dec_eq(v_c_3035_, v___x_3044_);
if (v___x_3045_ == 0)
{
uint32_t v___x_3046_; uint8_t v___x_3047_; 
v___x_3046_ = 79;
v___x_3047_ = lean_uint32_dec_eq(v_c_3035_, v___x_3046_);
if (v___x_3047_ == 0)
{
uint8_t v___x_3048_; 
v___x_3048_ = lean_uint32_dec_le(v___x_3025_, v_c_3035_);
if (v___x_3048_ == 0)
{
lean_object* v___x_3049_; 
v___x_3049_ = lean_box(0);
return v___x_3049_;
}
else
{
uint32_t v___x_3050_; uint8_t v___x_3051_; 
v___x_3050_ = 57;
v___x_3051_ = lean_uint32_dec_le(v_c_3035_, v___x_3050_);
if (v___x_3051_ == 0)
{
lean_object* v___x_3052_; 
v___x_3052_ = lean_box(0);
return v___x_3052_;
}
else
{
lean_object* v___x_3053_; 
v___x_3053_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeDecimalLitAux(v_s_3011_, v___x_3013_, v___x_3013_);
return v___x_3053_;
}
}
}
else
{
goto v___jp_3014_;
}
}
else
{
goto v___jp_3014_;
}
}
else
{
goto v___jp_3017_;
}
}
else
{
goto v___jp_3017_;
}
}
else
{
goto v___jp_3020_;
}
}
else
{
goto v___jp_3020_;
}
}
else
{
lean_object* v___x_3054_; 
v___x_3054_ = ((lean_object*)(l_Lean_Syntax_decodeNatLitVal_x3f___closed__0));
return v___x_3054_;
}
}
}
else
{
lean_object* v___x_3055_; 
lean_dec(v_len_3012_);
v___x_3055_ = lean_box(0);
return v___x_3055_;
}
v___jp_3014_:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; 
v___x_3015_ = lean_unsigned_to_nat(2u);
v___x_3016_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeOctalLitAux(v_s_3011_, v___x_3015_, v___x_3013_);
return v___x_3016_;
}
v___jp_3017_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; 
v___x_3018_ = lean_unsigned_to_nat(2u);
v___x_3019_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeBinLitAux(v_s_3011_, v___x_3018_, v___x_3013_);
return v___x_3019_;
}
v___jp_3020_:
{
lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3021_ = lean_unsigned_to_nat(2u);
v___x_3022_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(v_s_3011_, v___x_3021_, v___x_3013_);
return v___x_3022_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNatLitVal_x3f___boxed(lean_object* v_s_3056_){
_start:
{
lean_object* v_res_3057_; 
v_res_3057_ = l_Lean_Syntax_decodeNatLitVal_x3f(v_s_3056_);
lean_dec_ref(v_s_3056_);
return v_res_3057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f(lean_object* v_litKind_3058_, lean_object* v_stx_3059_){
_start:
{
if (lean_obj_tag(v_stx_3059_) == 1)
{
lean_object* v_kind_3060_; lean_object* v_args_3061_; uint8_t v___x_3062_; 
v_kind_3060_ = lean_ctor_get(v_stx_3059_, 1);
v_args_3061_ = lean_ctor_get(v_stx_3059_, 2);
v___x_3062_ = lean_name_eq(v_kind_3060_, v_litKind_3058_);
if (v___x_3062_ == 0)
{
lean_object* v___x_3063_; 
v___x_3063_ = lean_box(0);
return v___x_3063_;
}
else
{
lean_object* v___x_3064_; lean_object* v___x_3065_; uint8_t v___x_3066_; 
v___x_3064_ = lean_array_get_size(v_args_3061_);
v___x_3065_ = lean_unsigned_to_nat(1u);
v___x_3066_ = lean_nat_dec_eq(v___x_3064_, v___x_3065_);
if (v___x_3066_ == 0)
{
lean_object* v___x_3067_; 
v___x_3067_ = lean_box(0);
return v___x_3067_;
}
else
{
lean_object* v___x_3068_; lean_object* v___x_3069_; 
v___x_3068_ = lean_unsigned_to_nat(0u);
v___x_3069_ = lean_array_fget_borrowed(v_args_3061_, v___x_3068_);
if (lean_obj_tag(v___x_3069_) == 2)
{
lean_object* v_val_3070_; lean_object* v___x_3071_; 
v_val_3070_ = lean_ctor_get(v___x_3069_, 1);
lean_inc_ref(v_val_3070_);
v___x_3071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3071_, 0, v_val_3070_);
return v___x_3071_;
}
else
{
lean_object* v___x_3072_; 
v___x_3072_ = lean_box(0);
return v___x_3072_;
}
}
}
}
else
{
lean_object* v___x_3073_; 
v___x_3073_ = lean_box(0);
return v___x_3073_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isLit_x3f___boxed(lean_object* v_litKind_3074_, lean_object* v_stx_3075_){
_start:
{
lean_object* v_res_3076_; 
v_res_3076_ = l_Lean_Syntax_isLit_x3f(v_litKind_3074_, v_stx_3075_);
lean_dec(v_stx_3075_);
lean_dec(v_litKind_3074_);
return v_res_3076_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(lean_object* v_litKind_3077_, lean_object* v_stx_3078_){
_start:
{
lean_object* v___x_3079_; 
v___x_3079_ = l_Lean_Syntax_isLit_x3f(v_litKind_3077_, v_stx_3078_);
if (lean_obj_tag(v___x_3079_) == 1)
{
lean_object* v_val_3080_; lean_object* v___x_3081_; 
v_val_3080_ = lean_ctor_get(v___x_3079_, 0);
lean_inc(v_val_3080_);
lean_dec_ref_known(v___x_3079_, 1);
v___x_3081_ = l_Lean_Syntax_decodeNatLitVal_x3f(v_val_3080_);
lean_dec(v_val_3080_);
return v___x_3081_;
}
else
{
lean_object* v___x_3082_; 
lean_dec(v___x_3079_);
v___x_3082_ = lean_box(0);
return v___x_3082_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux___boxed(lean_object* v_litKind_3083_, lean_object* v_stx_3084_){
_start:
{
lean_object* v_res_3085_; 
v_res_3085_ = l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(v_litKind_3083_, v_stx_3084_);
lean_dec(v_stx_3084_);
lean_dec(v_litKind_3083_);
return v_res_3085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f(lean_object* v_s_3086_){
_start:
{
lean_object* v___x_3087_; lean_object* v___x_3088_; 
v___x_3087_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
v___x_3088_ = l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(v___x_3087_, v_s_3086_);
return v___x_3088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNatLit_x3f___boxed(lean_object* v_s_3089_){
_start:
{
lean_object* v_res_3090_; 
v_res_3090_ = l_Lean_Syntax_isNatLit_x3f(v_s_3089_);
lean_dec(v_s_3089_);
return v_res_3090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f(lean_object* v_s_3094_){
_start:
{
lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___x_3095_ = ((lean_object*)(l_Lean_Syntax_isFieldIdx_x3f___closed__1));
v___x_3096_ = l___private_Init_Meta_Defs_0__Lean_Syntax_isNatLitAux(v___x_3095_, v_s_3094_);
return v___x_3096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isFieldIdx_x3f___boxed(lean_object* v_s_3097_){
_start:
{
lean_object* v_res_3098_; 
v_res_3098_ = l_Lean_Syntax_isFieldIdx_x3f(v_s_3097_);
lean_dec(v_s_3097_);
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(lean_object* v_s_3099_, lean_object* v_i_3100_, lean_object* v_val_3101_, lean_object* v_e_3102_, uint8_t v_sign_3103_, lean_object* v_exp_3104_){
_start:
{
uint8_t v___x_3105_; 
v___x_3105_ = lean_string_utf8_at_end(v_s_3099_, v_i_3100_);
if (v___x_3105_ == 0)
{
uint32_t v_c_3106_; uint32_t v___x_3113_; uint8_t v___x_3114_; 
v_c_3106_ = lean_string_utf8_get(v_s_3099_, v_i_3100_);
v___x_3113_ = 48;
v___x_3114_ = lean_uint32_dec_le(v___x_3113_, v_c_3106_);
if (v___x_3114_ == 0)
{
goto v___jp_3107_;
}
else
{
uint32_t v___x_3115_; uint8_t v___x_3116_; 
v___x_3115_ = 57;
v___x_3116_ = lean_uint32_dec_le(v_c_3106_, v___x_3115_);
if (v___x_3116_ == 0)
{
goto v___jp_3107_;
}
else
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3117_ = lean_string_utf8_next(v_s_3099_, v_i_3100_);
lean_dec(v_i_3100_);
v___x_3118_ = lean_unsigned_to_nat(10u);
v___x_3119_ = lean_nat_mul(v___x_3118_, v_exp_3104_);
lean_dec(v_exp_3104_);
v___x_3120_ = lean_uint32_to_nat(v_c_3106_);
v___x_3121_ = lean_nat_add(v___x_3119_, v___x_3120_);
lean_dec(v___x_3120_);
lean_dec(v___x_3119_);
v___x_3122_ = lean_unsigned_to_nat(48u);
v___x_3123_ = lean_nat_sub(v___x_3121_, v___x_3122_);
lean_dec(v___x_3121_);
v_i_3100_ = v___x_3117_;
v_exp_3104_ = v___x_3123_;
goto _start;
}
}
v___jp_3107_:
{
uint32_t v___x_3108_; uint8_t v___x_3109_; 
v___x_3108_ = 95;
v___x_3109_ = lean_uint32_dec_eq(v_c_3106_, v___x_3108_);
if (v___x_3109_ == 0)
{
lean_object* v___x_3110_; 
lean_dec(v_exp_3104_);
lean_dec(v_val_3101_);
lean_dec(v_i_3100_);
v___x_3110_ = lean_box(0);
return v___x_3110_;
}
else
{
lean_object* v___x_3111_; 
v___x_3111_ = lean_string_utf8_next(v_s_3099_, v_i_3100_);
lean_dec(v_i_3100_);
v_i_3100_ = v___x_3111_;
goto _start;
}
}
}
else
{
lean_dec(v_i_3100_);
if (v_sign_3103_ == 0)
{
uint8_t v___x_3125_; 
v___x_3125_ = lean_nat_dec_le(v_e_3102_, v_exp_3104_);
if (v___x_3125_ == 0)
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3126_ = lean_nat_sub(v_e_3102_, v_exp_3104_);
lean_dec(v_exp_3104_);
v___x_3127_ = lean_box(v___x_3105_);
v___x_3128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
lean_ctor_set(v___x_3128_, 1, v___x_3126_);
v___x_3129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3129_, 0, v_val_3101_);
lean_ctor_set(v___x_3129_, 1, v___x_3128_);
v___x_3130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3129_);
return v___x_3130_;
}
else
{
lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3131_ = lean_nat_sub(v_exp_3104_, v_e_3102_);
lean_dec(v_exp_3104_);
v___x_3132_ = lean_box(v_sign_3103_);
v___x_3133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3132_);
lean_ctor_set(v___x_3133_, 1, v___x_3131_);
v___x_3134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3134_, 0, v_val_3101_);
lean_ctor_set(v___x_3134_, 1, v___x_3133_);
v___x_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3134_);
return v___x_3135_;
}
}
else
{
lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3136_ = lean_nat_add(v_exp_3104_, v_e_3102_);
lean_dec(v_exp_3104_);
v___x_3137_ = lean_box(v_sign_3103_);
v___x_3138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3137_);
lean_ctor_set(v___x_3138_, 1, v___x_3136_);
v___x_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3139_, 0, v_val_3101_);
lean_ctor_set(v___x_3139_, 1, v___x_3138_);
v___x_3140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
return v___x_3140_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp___boxed(lean_object* v_s_3141_, lean_object* v_i_3142_, lean_object* v_val_3143_, lean_object* v_e_3144_, lean_object* v_sign_3145_, lean_object* v_exp_3146_){
_start:
{
uint8_t v_sign_boxed_3147_; lean_object* v_res_3148_; 
v_sign_boxed_3147_ = lean_unbox(v_sign_3145_);
v_res_3148_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3141_, v_i_3142_, v_val_3143_, v_e_3144_, v_sign_boxed_3147_, v_exp_3146_);
lean_dec(v_e_3144_);
lean_dec_ref(v_s_3141_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(lean_object* v_s_3149_, lean_object* v_i_3150_, lean_object* v_val_3151_, lean_object* v_e_3152_){
_start:
{
uint8_t v___x_3153_; 
v___x_3153_ = lean_string_utf8_at_end(v_s_3149_, v_i_3150_);
if (v___x_3153_ == 0)
{
uint32_t v_c_3154_; uint32_t v___x_3155_; uint8_t v___x_3156_; 
v_c_3154_ = lean_string_utf8_get(v_s_3149_, v_i_3150_);
v___x_3155_ = 45;
v___x_3156_ = lean_uint32_dec_eq(v_c_3154_, v___x_3155_);
if (v___x_3156_ == 0)
{
uint32_t v___x_3157_; uint8_t v___x_3158_; 
v___x_3157_ = 43;
v___x_3158_ = lean_uint32_dec_eq(v_c_3154_, v___x_3157_);
if (v___x_3158_ == 0)
{
lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3159_ = lean_unsigned_to_nat(0u);
v___x_3160_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3149_, v_i_3150_, v_val_3151_, v_e_3152_, v___x_3158_, v___x_3159_);
return v___x_3160_;
}
else
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3161_ = lean_string_utf8_next(v_s_3149_, v_i_3150_);
lean_dec(v_i_3150_);
v___x_3162_ = lean_unsigned_to_nat(0u);
v___x_3163_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3149_, v___x_3161_, v_val_3151_, v_e_3152_, v___x_3156_, v___x_3162_);
return v___x_3163_;
}
}
else
{
lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; 
v___x_3164_ = lean_string_utf8_next(v_s_3149_, v_i_3150_);
lean_dec(v_i_3150_);
v___x_3165_ = lean_unsigned_to_nat(0u);
v___x_3166_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterExp(v_s_3149_, v___x_3164_, v_val_3151_, v_e_3152_, v___x_3156_, v___x_3165_);
return v___x_3166_;
}
}
else
{
lean_object* v___x_3167_; 
lean_dec(v_val_3151_);
lean_dec(v_i_3150_);
v___x_3167_ = lean_box(0);
return v___x_3167_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp___boxed(lean_object* v_s_3168_, lean_object* v_i_3169_, lean_object* v_val_3170_, lean_object* v_e_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(v_s_3168_, v_i_3169_, v_val_3170_, v_e_3171_);
lean_dec(v_e_3171_);
lean_dec_ref(v_s_3168_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(lean_object* v_s_3173_, lean_object* v_i_3174_, lean_object* v_val_3175_, lean_object* v_e_3176_){
_start:
{
uint8_t v___x_3180_; 
v___x_3180_ = lean_string_utf8_at_end(v_s_3173_, v_i_3174_);
if (v___x_3180_ == 0)
{
uint32_t v_c_3181_; uint32_t v___x_3192_; uint8_t v___x_3193_; 
v_c_3181_ = lean_string_utf8_get(v_s_3173_, v_i_3174_);
v___x_3192_ = 48;
v___x_3193_ = lean_uint32_dec_le(v___x_3192_, v_c_3181_);
if (v___x_3193_ == 0)
{
goto v___jp_3182_;
}
else
{
uint32_t v___x_3194_; uint8_t v___x_3195_; 
v___x_3194_ = 57;
v___x_3195_ = lean_uint32_dec_le(v_c_3181_, v___x_3194_);
if (v___x_3195_ == 0)
{
goto v___jp_3182_;
}
else
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___x_3196_ = lean_string_utf8_next(v_s_3173_, v_i_3174_);
lean_dec(v_i_3174_);
v___x_3197_ = lean_unsigned_to_nat(10u);
v___x_3198_ = lean_nat_mul(v___x_3197_, v_val_3175_);
lean_dec(v_val_3175_);
v___x_3199_ = lean_uint32_to_nat(v_c_3181_);
v___x_3200_ = lean_nat_add(v___x_3198_, v___x_3199_);
lean_dec(v___x_3199_);
lean_dec(v___x_3198_);
v___x_3201_ = lean_unsigned_to_nat(48u);
v___x_3202_ = lean_nat_sub(v___x_3200_, v___x_3201_);
lean_dec(v___x_3200_);
v___x_3203_ = lean_unsigned_to_nat(1u);
v___x_3204_ = lean_nat_add(v_e_3176_, v___x_3203_);
lean_dec(v_e_3176_);
v_i_3174_ = v___x_3196_;
v_val_3175_ = v___x_3202_;
v_e_3176_ = v___x_3204_;
goto _start;
}
}
v___jp_3182_:
{
uint32_t v___x_3183_; uint8_t v___x_3184_; 
v___x_3183_ = 95;
v___x_3184_ = lean_uint32_dec_eq(v_c_3181_, v___x_3183_);
if (v___x_3184_ == 0)
{
uint32_t v___x_3185_; uint8_t v___x_3186_; 
v___x_3185_ = 101;
v___x_3186_ = lean_uint32_dec_eq(v_c_3181_, v___x_3185_);
if (v___x_3186_ == 0)
{
uint32_t v___x_3187_; uint8_t v___x_3188_; 
v___x_3187_ = 69;
v___x_3188_ = lean_uint32_dec_eq(v_c_3181_, v___x_3187_);
if (v___x_3188_ == 0)
{
lean_object* v___x_3189_; 
lean_dec(v_e_3176_);
lean_dec(v_val_3175_);
lean_dec(v_i_3174_);
v___x_3189_ = lean_box(0);
return v___x_3189_;
}
else
{
goto v___jp_3177_;
}
}
else
{
goto v___jp_3177_;
}
}
else
{
lean_object* v___x_3190_; 
v___x_3190_ = lean_string_utf8_next(v_s_3173_, v_i_3174_);
lean_dec(v_i_3174_);
v_i_3174_ = v___x_3190_;
goto _start;
}
}
}
else
{
lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
lean_dec(v_i_3174_);
v___x_3206_ = lean_box(v___x_3180_);
v___x_3207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3206_);
lean_ctor_set(v___x_3207_, 1, v_e_3176_);
v___x_3208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3208_, 0, v_val_3175_);
lean_ctor_set(v___x_3208_, 1, v___x_3207_);
v___x_3209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3209_, 0, v___x_3208_);
return v___x_3209_;
}
v___jp_3177_:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; 
v___x_3178_ = lean_string_utf8_next(v_s_3173_, v_i_3174_);
lean_dec(v_i_3174_);
v___x_3179_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(v_s_3173_, v___x_3178_, v_val_3175_, v_e_3176_);
lean_dec(v_e_3176_);
return v___x_3179_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot___boxed(lean_object* v_s_3210_, lean_object* v_i_3211_, lean_object* v_val_3212_, lean_object* v_e_3213_){
_start:
{
lean_object* v_res_3214_; 
v_res_3214_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(v_s_3210_, v_i_3211_, v_val_3212_, v_e_3213_);
lean_dec_ref(v_s_3210_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(lean_object* v_s_3215_, lean_object* v_i_3216_, lean_object* v_val_3217_){
_start:
{
uint8_t v___x_3222_; 
v___x_3222_ = lean_string_utf8_at_end(v_s_3215_, v_i_3216_);
if (v___x_3222_ == 0)
{
uint32_t v_c_3223_; uint32_t v___x_3239_; uint8_t v___x_3240_; 
v_c_3223_ = lean_string_utf8_get(v_s_3215_, v_i_3216_);
v___x_3239_ = 48;
v___x_3240_ = lean_uint32_dec_le(v___x_3239_, v_c_3223_);
if (v___x_3240_ == 0)
{
goto v___jp_3224_;
}
else
{
uint32_t v___x_3241_; uint8_t v___x_3242_; 
v___x_3241_ = 57;
v___x_3242_ = lean_uint32_dec_le(v_c_3223_, v___x_3241_);
if (v___x_3242_ == 0)
{
goto v___jp_3224_;
}
else
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3243_ = lean_string_utf8_next(v_s_3215_, v_i_3216_);
lean_dec(v_i_3216_);
v___x_3244_ = lean_unsigned_to_nat(10u);
v___x_3245_ = lean_nat_mul(v___x_3244_, v_val_3217_);
lean_dec(v_val_3217_);
v___x_3246_ = lean_uint32_to_nat(v_c_3223_);
v___x_3247_ = lean_nat_add(v___x_3245_, v___x_3246_);
lean_dec(v___x_3246_);
lean_dec(v___x_3245_);
v___x_3248_ = lean_unsigned_to_nat(48u);
v___x_3249_ = lean_nat_sub(v___x_3247_, v___x_3248_);
lean_dec(v___x_3247_);
v_i_3216_ = v___x_3243_;
v_val_3217_ = v___x_3249_;
goto _start;
}
}
v___jp_3224_:
{
uint32_t v___x_3225_; uint8_t v___x_3226_; 
v___x_3225_ = 95;
v___x_3226_ = lean_uint32_dec_eq(v_c_3223_, v___x_3225_);
if (v___x_3226_ == 0)
{
uint32_t v___x_3227_; uint8_t v___x_3228_; 
v___x_3227_ = 46;
v___x_3228_ = lean_uint32_dec_eq(v_c_3223_, v___x_3227_);
if (v___x_3228_ == 0)
{
uint32_t v___x_3229_; uint8_t v___x_3230_; 
v___x_3229_ = 101;
v___x_3230_ = lean_uint32_dec_eq(v_c_3223_, v___x_3229_);
if (v___x_3230_ == 0)
{
uint32_t v___x_3231_; uint8_t v___x_3232_; 
v___x_3231_ = 69;
v___x_3232_ = lean_uint32_dec_eq(v_c_3223_, v___x_3231_);
if (v___x_3232_ == 0)
{
lean_object* v___x_3233_; 
lean_dec(v_val_3217_);
lean_dec(v_i_3216_);
v___x_3233_ = lean_box(0);
return v___x_3233_;
}
else
{
goto v___jp_3218_;
}
}
else
{
goto v___jp_3218_;
}
}
else
{
lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3234_ = lean_string_utf8_next(v_s_3215_, v_i_3216_);
lean_dec(v_i_3216_);
v___x_3235_ = lean_unsigned_to_nat(0u);
v___x_3236_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeAfterDot(v_s_3215_, v___x_3234_, v_val_3217_, v___x_3235_);
return v___x_3236_;
}
}
else
{
lean_object* v___x_3237_; 
v___x_3237_ = lean_string_utf8_next(v_s_3215_, v_i_3216_);
lean_dec(v_i_3216_);
v_i_3216_ = v___x_3237_;
goto _start;
}
}
}
else
{
lean_object* v___x_3251_; 
lean_dec(v_val_3217_);
lean_dec(v_i_3216_);
v___x_3251_ = lean_box(0);
return v___x_3251_;
}
v___jp_3218_:
{
lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; 
v___x_3219_ = lean_string_utf8_next(v_s_3215_, v_i_3216_);
lean_dec(v_i_3216_);
v___x_3220_ = lean_unsigned_to_nat(0u);
v___x_3221_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decodeExp(v_s_3215_, v___x_3219_, v_val_3217_, v___x_3220_);
return v___x_3221_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode___boxed(lean_object* v_s_3252_, lean_object* v_i_3253_, lean_object* v_val_3254_){
_start:
{
lean_object* v_res_3255_; 
v_res_3255_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(v_s_3252_, v_i_3253_, v_val_3254_);
lean_dec_ref(v_s_3252_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f(lean_object* v_s_3256_){
_start:
{
lean_object* v_len_3257_; lean_object* v___x_3258_; uint8_t v___x_3259_; 
v_len_3257_ = lean_string_length(v_s_3256_);
v___x_3258_ = lean_unsigned_to_nat(0u);
v___x_3259_ = lean_nat_dec_eq(v_len_3257_, v___x_3258_);
lean_dec(v_len_3257_);
if (v___x_3259_ == 0)
{
uint32_t v_c_3260_; uint32_t v___x_3261_; uint8_t v___x_3262_; 
v_c_3260_ = lean_string_utf8_get(v_s_3256_, v___x_3258_);
v___x_3261_ = 48;
v___x_3262_ = lean_uint32_dec_le(v___x_3261_, v_c_3260_);
if (v___x_3262_ == 0)
{
lean_object* v___x_3263_; 
v___x_3263_ = lean_box(0);
return v___x_3263_;
}
else
{
uint32_t v___x_3264_; uint8_t v___x_3265_; 
v___x_3264_ = 57;
v___x_3265_ = lean_uint32_dec_le(v_c_3260_, v___x_3264_);
if (v___x_3265_ == 0)
{
lean_object* v___x_3266_; 
v___x_3266_ = lean_box(0);
return v___x_3266_;
}
else
{
lean_object* v___x_3267_; 
v___x_3267_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeScientificLitVal_x3f_decode(v_s_3256_, v___x_3258_, v___x_3258_);
return v___x_3267_;
}
}
}
else
{
lean_object* v___x_3268_; 
v___x_3268_ = lean_box(0);
return v___x_3268_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeScientificLitVal_x3f___boxed(lean_object* v_s_3269_){
_start:
{
lean_object* v_res_3270_; 
v_res_3270_ = l_Lean_Syntax_decodeScientificLitVal_x3f(v_s_3269_);
lean_dec_ref(v_s_3269_);
return v_res_3270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f(lean_object* v_stx_3271_){
_start:
{
lean_object* v___x_3272_; lean_object* v___x_3273_; 
v___x_3272_ = ((lean_object*)(l_Lean_Syntax_mkScientificLit___closed__1));
v___x_3273_ = l_Lean_Syntax_isLit_x3f(v___x_3272_, v_stx_3271_);
if (lean_obj_tag(v___x_3273_) == 1)
{
lean_object* v_val_3274_; lean_object* v___x_3275_; 
v_val_3274_ = lean_ctor_get(v___x_3273_, 0);
lean_inc(v_val_3274_);
lean_dec_ref_known(v___x_3273_, 1);
v___x_3275_ = l_Lean_Syntax_decodeScientificLitVal_x3f(v_val_3274_);
lean_dec(v_val_3274_);
return v___x_3275_;
}
else
{
lean_object* v___x_3276_; 
lean_dec(v___x_3273_);
v___x_3276_ = lean_box(0);
return v___x_3276_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isScientificLit_x3f___boxed(lean_object* v_stx_3277_){
_start:
{
lean_object* v_res_3278_; 
v_res_3278_ = l_Lean_Syntax_isScientificLit_x3f(v_stx_3277_);
lean_dec(v_stx_3277_);
return v_res_3278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isIdOrAtom_x3f(lean_object* v_x_3279_){
_start:
{
switch(lean_obj_tag(v_x_3279_))
{
case 2:
{
lean_object* v_val_3280_; lean_object* v___x_3281_; 
v_val_3280_ = lean_ctor_get(v_x_3279_, 1);
lean_inc_ref(v_val_3280_);
lean_dec_ref_known(v_x_3279_, 2);
v___x_3281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3281_, 0, v_val_3280_);
return v___x_3281_;
}
case 3:
{
lean_object* v_rawVal_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
v_rawVal_3282_ = lean_ctor_get(v_x_3279_, 1);
lean_inc_ref(v_rawVal_3282_);
lean_dec_ref_known(v_x_3279_, 4);
v___x_3283_ = lean_substring_tostring(v_rawVal_3282_);
v___x_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3283_);
return v___x_3284_;
}
default: 
{
lean_object* v___x_3285_; 
lean_dec(v_x_3279_);
v___x_3285_ = lean_box(0);
return v___x_3285_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat(lean_object* v_stx_3286_){
_start:
{
lean_object* v___x_3287_; 
v___x_3287_ = l_Lean_Syntax_isNatLit_x3f(v_stx_3286_);
if (lean_obj_tag(v___x_3287_) == 0)
{
lean_object* v___x_3288_; 
v___x_3288_ = lean_unsigned_to_nat(0u);
return v___x_3288_;
}
else
{
lean_object* v_val_3289_; 
v_val_3289_ = lean_ctor_get(v___x_3287_, 0);
lean_inc(v_val_3289_);
lean_dec_ref_known(v___x_3287_, 1);
return v_val_3289_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_toNat___boxed(lean_object* v_stx_3290_){
_start:
{
lean_object* v_res_3291_; 
v_res_3291_ = l_Lean_Syntax_toNat(v_stx_3290_);
lean_dec(v_stx_3290_);
return v_res_3291_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__1(void){
_start:
{
uint32_t v___x_3292_; lean_object* v___x_3293_; 
v___x_3292_ = 9;
v___x_3293_ = lean_box_uint32(v___x_3292_);
return v___x_3293_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__2(void){
_start:
{
uint32_t v___x_3294_; lean_object* v___x_3295_; 
v___x_3294_ = 10;
v___x_3295_ = lean_box_uint32(v___x_3294_);
return v___x_3295_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__3(void){
_start:
{
uint32_t v___x_3296_; lean_object* v___x_3297_; 
v___x_3296_ = 13;
v___x_3297_ = lean_box_uint32(v___x_3296_);
return v___x_3297_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__4(void){
_start:
{
uint32_t v___x_3298_; lean_object* v___x_3299_; 
v___x_3298_ = 39;
v___x_3299_ = lean_box_uint32(v___x_3298_);
return v___x_3299_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__5(void){
_start:
{
uint32_t v___x_3300_; lean_object* v___x_3301_; 
v___x_3300_ = 34;
v___x_3301_ = lean_box_uint32(v___x_3300_);
return v___x_3301_;
}
}
static lean_object* _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__6(void){
_start:
{
uint32_t v___x_3302_; lean_object* v___x_3303_; 
v___x_3302_ = 92;
v___x_3303_ = lean_box_uint32(v___x_3302_);
return v___x_3303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar(lean_object* v_s_3304_, lean_object* v_i_3305_){
_start:
{
uint32_t v_c_3306_; lean_object* v_i_3307_; uint32_t v___x_3308_; uint8_t v___x_3309_; 
v_c_3306_ = lean_string_utf8_get(v_s_3304_, v_i_3305_);
v_i_3307_ = lean_string_utf8_next(v_s_3304_, v_i_3305_);
v___x_3308_ = 92;
v___x_3309_ = lean_uint32_dec_eq(v_c_3306_, v___x_3308_);
if (v___x_3309_ == 0)
{
uint32_t v___x_3310_; uint8_t v___x_3311_; 
v___x_3310_ = 34;
v___x_3311_ = lean_uint32_dec_eq(v_c_3306_, v___x_3310_);
if (v___x_3311_ == 0)
{
uint32_t v___x_3312_; uint8_t v___x_3313_; 
v___x_3312_ = 39;
v___x_3313_ = lean_uint32_dec_eq(v_c_3306_, v___x_3312_);
if (v___x_3313_ == 0)
{
uint32_t v___x_3314_; uint8_t v___x_3315_; 
v___x_3314_ = 114;
v___x_3315_ = lean_uint32_dec_eq(v_c_3306_, v___x_3314_);
if (v___x_3315_ == 0)
{
uint32_t v___x_3316_; uint8_t v___x_3317_; 
v___x_3316_ = 110;
v___x_3317_ = lean_uint32_dec_eq(v_c_3306_, v___x_3316_);
if (v___x_3317_ == 0)
{
uint32_t v___x_3318_; uint8_t v___x_3319_; 
v___x_3318_ = 116;
v___x_3319_ = lean_uint32_dec_eq(v_c_3306_, v___x_3318_);
if (v___x_3319_ == 0)
{
uint32_t v___x_3320_; uint8_t v___x_3321_; 
v___x_3320_ = 120;
v___x_3321_ = lean_uint32_dec_eq(v_c_3306_, v___x_3320_);
if (v___x_3321_ == 0)
{
uint32_t v___x_3322_; uint8_t v___x_3323_; 
v___x_3322_ = 117;
v___x_3323_ = lean_uint32_dec_eq(v_c_3306_, v___x_3322_);
if (v___x_3323_ == 0)
{
lean_object* v___x_3324_; 
lean_dec(v_i_3307_);
v___x_3324_ = lean_box(0);
return v___x_3324_;
}
else
{
lean_object* v___x_3325_; 
v___x_3325_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3304_, v_i_3307_);
lean_dec(v_i_3307_);
if (lean_obj_tag(v___x_3325_) == 0)
{
lean_object* v___x_3326_; 
v___x_3326_ = lean_box(0);
return v___x_3326_;
}
else
{
lean_object* v_val_3327_; lean_object* v_fst_3328_; lean_object* v_snd_3329_; lean_object* v___x_3330_; 
v_val_3327_ = lean_ctor_get(v___x_3325_, 0);
lean_inc(v_val_3327_);
lean_dec_ref_known(v___x_3325_, 1);
v_fst_3328_ = lean_ctor_get(v_val_3327_, 0);
lean_inc(v_fst_3328_);
v_snd_3329_ = lean_ctor_get(v_val_3327_, 1);
lean_inc(v_snd_3329_);
lean_dec(v_val_3327_);
v___x_3330_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3304_, v_snd_3329_);
lean_dec(v_snd_3329_);
if (lean_obj_tag(v___x_3330_) == 0)
{
lean_object* v___x_3331_; 
lean_dec(v_fst_3328_);
v___x_3331_ = lean_box(0);
return v___x_3331_;
}
else
{
lean_object* v_val_3332_; lean_object* v_fst_3333_; lean_object* v_snd_3334_; lean_object* v___x_3335_; 
v_val_3332_ = lean_ctor_get(v___x_3330_, 0);
lean_inc(v_val_3332_);
lean_dec_ref_known(v___x_3330_, 1);
v_fst_3333_ = lean_ctor_get(v_val_3332_, 0);
lean_inc(v_fst_3333_);
v_snd_3334_ = lean_ctor_get(v_val_3332_, 1);
lean_inc(v_snd_3334_);
lean_dec(v_val_3332_);
v___x_3335_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3304_, v_snd_3334_);
lean_dec(v_snd_3334_);
if (lean_obj_tag(v___x_3335_) == 0)
{
lean_object* v___x_3336_; 
lean_dec(v_fst_3333_);
lean_dec(v_fst_3328_);
v___x_3336_ = lean_box(0);
return v___x_3336_;
}
else
{
lean_object* v_val_3337_; lean_object* v_fst_3338_; lean_object* v_snd_3339_; lean_object* v___x_3340_; 
v_val_3337_ = lean_ctor_get(v___x_3335_, 0);
lean_inc(v_val_3337_);
lean_dec_ref_known(v___x_3335_, 1);
v_fst_3338_ = lean_ctor_get(v_val_3337_, 0);
lean_inc(v_fst_3338_);
v_snd_3339_ = lean_ctor_get(v_val_3337_, 1);
lean_inc(v_snd_3339_);
lean_dec(v_val_3337_);
v___x_3340_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3304_, v_snd_3339_);
lean_dec(v_snd_3339_);
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v___x_3341_; 
lean_dec(v_fst_3338_);
lean_dec(v_fst_3333_);
lean_dec(v_fst_3328_);
v___x_3341_ = lean_box(0);
return v___x_3341_;
}
else
{
lean_object* v_val_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3367_; 
v_val_3342_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3344_ = v___x_3340_;
v_isShared_3345_ = v_isSharedCheck_3367_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_val_3342_);
lean_dec(v___x_3340_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3367_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v_fst_3346_; lean_object* v_snd_3347_; lean_object* v___x_3349_; uint8_t v_isShared_3350_; uint8_t v_isSharedCheck_3366_; 
v_fst_3346_ = lean_ctor_get(v_val_3342_, 0);
v_snd_3347_ = lean_ctor_get(v_val_3342_, 1);
v_isSharedCheck_3366_ = !lean_is_exclusive(v_val_3342_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3349_ = v_val_3342_;
v_isShared_3350_ = v_isSharedCheck_3366_;
goto v_resetjp_3348_;
}
else
{
lean_inc(v_snd_3347_);
lean_inc(v_fst_3346_);
lean_dec(v_val_3342_);
v___x_3349_ = lean_box(0);
v_isShared_3350_ = v_isSharedCheck_3366_;
goto v_resetjp_3348_;
}
v_resetjp_3348_:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; uint32_t v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3361_; 
v___x_3351_ = lean_unsigned_to_nat(16u);
v___x_3352_ = lean_nat_mul(v___x_3351_, v_fst_3328_);
lean_dec(v_fst_3328_);
v___x_3353_ = lean_nat_add(v___x_3352_, v_fst_3333_);
lean_dec(v_fst_3333_);
lean_dec(v___x_3352_);
v___x_3354_ = lean_nat_mul(v___x_3351_, v___x_3353_);
lean_dec(v___x_3353_);
v___x_3355_ = lean_nat_add(v___x_3354_, v_fst_3338_);
lean_dec(v_fst_3338_);
lean_dec(v___x_3354_);
v___x_3356_ = lean_nat_mul(v___x_3351_, v___x_3355_);
lean_dec(v___x_3355_);
v___x_3357_ = lean_nat_add(v___x_3356_, v_fst_3346_);
lean_dec(v_fst_3346_);
lean_dec(v___x_3356_);
v___x_3358_ = l_Char_ofNat(v___x_3357_);
lean_dec(v___x_3357_);
v___x_3359_ = lean_box_uint32(v___x_3358_);
if (v_isShared_3350_ == 0)
{
lean_ctor_set(v___x_3349_, 0, v___x_3359_);
v___x_3361_ = v___x_3349_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v___x_3359_);
lean_ctor_set(v_reuseFailAlloc_3365_, 1, v_snd_3347_);
v___x_3361_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
lean_object* v___x_3363_; 
if (v_isShared_3345_ == 0)
{
lean_ctor_set(v___x_3344_, 0, v___x_3361_);
v___x_3363_ = v___x_3344_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v___x_3361_);
v___x_3363_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
return v___x_3363_;
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
else
{
lean_object* v___x_3368_; 
v___x_3368_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3304_, v_i_3307_);
lean_dec(v_i_3307_);
if (lean_obj_tag(v___x_3368_) == 0)
{
lean_object* v___x_3369_; 
v___x_3369_ = lean_box(0);
return v___x_3369_;
}
else
{
lean_object* v_val_3370_; lean_object* v_fst_3371_; lean_object* v_snd_3372_; lean_object* v___x_3373_; 
v_val_3370_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_val_3370_);
lean_dec_ref_known(v___x_3368_, 1);
v_fst_3371_ = lean_ctor_get(v_val_3370_, 0);
lean_inc(v_fst_3371_);
v_snd_3372_ = lean_ctor_get(v_val_3370_, 1);
lean_inc(v_snd_3372_);
lean_dec(v_val_3370_);
v___x_3373_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexDigit(v_s_3304_, v_snd_3372_);
lean_dec(v_snd_3372_);
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v___x_3374_; 
lean_dec(v_fst_3371_);
v___x_3374_ = lean_box(0);
return v___x_3374_;
}
else
{
lean_object* v_val_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3396_; 
v_val_3375_ = lean_ctor_get(v___x_3373_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3377_ = v___x_3373_;
v_isShared_3378_ = v_isSharedCheck_3396_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_val_3375_);
lean_dec(v___x_3373_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3396_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v_fst_3379_; lean_object* v_snd_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3395_; 
v_fst_3379_ = lean_ctor_get(v_val_3375_, 0);
v_snd_3380_ = lean_ctor_get(v_val_3375_, 1);
v_isSharedCheck_3395_ = !lean_is_exclusive(v_val_3375_);
if (v_isSharedCheck_3395_ == 0)
{
v___x_3382_ = v_val_3375_;
v_isShared_3383_ = v_isSharedCheck_3395_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_snd_3380_);
lean_inc(v_fst_3379_);
lean_dec(v_val_3375_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3395_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; uint32_t v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3390_; 
v___x_3384_ = lean_unsigned_to_nat(16u);
v___x_3385_ = lean_nat_mul(v___x_3384_, v_fst_3371_);
lean_dec(v_fst_3371_);
v___x_3386_ = lean_nat_add(v___x_3385_, v_fst_3379_);
lean_dec(v_fst_3379_);
lean_dec(v___x_3385_);
v___x_3387_ = l_Char_ofNat(v___x_3386_);
lean_dec(v___x_3386_);
v___x_3388_ = lean_box_uint32(v___x_3387_);
if (v_isShared_3383_ == 0)
{
lean_ctor_set(v___x_3382_, 0, v___x_3388_);
v___x_3390_ = v___x_3382_;
goto v_reusejp_3389_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v___x_3388_);
lean_ctor_set(v_reuseFailAlloc_3394_, 1, v_snd_3380_);
v___x_3390_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3389_;
}
v_reusejp_3389_:
{
lean_object* v___x_3392_; 
if (v_isShared_3378_ == 0)
{
lean_ctor_set(v___x_3377_, 0, v___x_3390_);
v___x_3392_ = v___x_3377_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v___x_3390_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
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
lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3397_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__1;
v___x_3398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3397_);
lean_ctor_set(v___x_3398_, 1, v_i_3307_);
v___x_3399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3399_, 0, v___x_3398_);
return v___x_3399_;
}
}
else
{
lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3400_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__2;
v___x_3401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3400_);
lean_ctor_set(v___x_3401_, 1, v_i_3307_);
v___x_3402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3401_);
return v___x_3402_;
}
}
else
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3403_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__3;
v___x_3404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3403_);
lean_ctor_set(v___x_3404_, 1, v_i_3307_);
v___x_3405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3405_, 0, v___x_3404_);
return v___x_3405_;
}
}
else
{
lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3406_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__4;
v___x_3407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3407_, 0, v___x_3406_);
lean_ctor_set(v___x_3407_, 1, v_i_3307_);
v___x_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3408_, 0, v___x_3407_);
return v___x_3408_;
}
}
else
{
lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3409_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__5;
v___x_3410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3409_);
lean_ctor_set(v___x_3410_, 1, v_i_3307_);
v___x_3411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
return v___x_3411_;
}
}
else
{
lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; 
v___x_3412_ = l_Lean_Syntax_decodeQuotedChar___boxed__const__6;
v___x_3413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3413_, 0, v___x_3412_);
lean_ctor_set(v___x_3413_, 1, v_i_3307_);
v___x_3414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3414_, 0, v___x_3413_);
return v___x_3414_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeQuotedChar___boxed(lean_object* v_s_3415_, lean_object* v_i_3416_){
_start:
{
lean_object* v_res_3417_; 
v_res_3417_ = l_Lean_Syntax_decodeQuotedChar(v_s_3415_, v_i_3416_);
lean_dec(v_i_3416_);
lean_dec_ref(v_s_3415_);
return v_res_3417_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_decodeStringGap___lam__0(uint32_t v___y_3418_){
_start:
{
uint32_t v___x_3419_; uint8_t v___x_3420_; 
v___x_3419_ = 32;
v___x_3420_ = lean_uint32_dec_eq(v___y_3418_, v___x_3419_);
if (v___x_3420_ == 0)
{
uint32_t v___x_3421_; uint8_t v___x_3422_; 
v___x_3421_ = 9;
v___x_3422_ = lean_uint32_dec_eq(v___y_3418_, v___x_3421_);
if (v___x_3422_ == 0)
{
uint32_t v___x_3423_; uint8_t v___x_3424_; 
v___x_3423_ = 13;
v___x_3424_ = lean_uint32_dec_eq(v___y_3418_, v___x_3423_);
if (v___x_3424_ == 0)
{
uint32_t v___x_3425_; uint8_t v___x_3426_; 
v___x_3425_ = 10;
v___x_3426_ = lean_uint32_dec_eq(v___y_3418_, v___x_3425_);
return v___x_3426_;
}
else
{
return v___x_3424_;
}
}
else
{
return v___x_3422_;
}
}
else
{
return v___x_3420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___lam__0___boxed(lean_object* v___y_3427_){
_start:
{
uint32_t v___y_270__boxed_3428_; uint8_t v_res_3429_; lean_object* v_r_3430_; 
v___y_270__boxed_3428_ = lean_unbox_uint32(v___y_3427_);
lean_dec(v___y_3427_);
v_res_3429_ = l_Lean_Syntax_decodeStringGap___lam__0(v___y_270__boxed_3428_);
v_r_3430_ = lean_box(v_res_3429_);
return v_r_3430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap(lean_object* v_s_3432_, lean_object* v_i_3433_){
_start:
{
lean_object* v___f_3434_; uint32_t v___x_3439_; uint32_t v___x_3440_; uint8_t v___x_3441_; 
v___f_3434_ = ((lean_object*)(l_Lean_Syntax_decodeStringGap___closed__0));
v___x_3439_ = lean_string_utf8_get(v_s_3432_, v_i_3433_);
v___x_3440_ = 32;
v___x_3441_ = lean_uint32_dec_eq(v___x_3439_, v___x_3440_);
if (v___x_3441_ == 0)
{
uint32_t v___x_3442_; uint8_t v___x_3443_; 
v___x_3442_ = 9;
v___x_3443_ = lean_uint32_dec_eq(v___x_3439_, v___x_3442_);
if (v___x_3443_ == 0)
{
uint32_t v___x_3444_; uint8_t v___x_3445_; 
v___x_3444_ = 13;
v___x_3445_ = lean_uint32_dec_eq(v___x_3439_, v___x_3444_);
if (v___x_3445_ == 0)
{
uint32_t v___x_3446_; uint8_t v___x_3447_; 
v___x_3446_ = 10;
v___x_3447_ = lean_uint32_dec_eq(v___x_3439_, v___x_3446_);
if (v___x_3447_ == 0)
{
lean_object* v___x_3448_; 
lean_dec_ref(v_s_3432_);
v___x_3448_ = lean_box(0);
return v___x_3448_;
}
else
{
goto v___jp_3435_;
}
}
else
{
goto v___jp_3435_;
}
}
else
{
goto v___jp_3435_;
}
}
else
{
goto v___jp_3435_;
}
v___jp_3435_:
{
lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; 
v___x_3436_ = lean_string_utf8_next(v_s_3432_, v_i_3433_);
v___x_3437_ = lean_string_nextwhile(v_s_3432_, v___f_3434_, v___x_3436_);
v___x_3438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3437_);
return v___x_3438_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStringGap___boxed(lean_object* v_s_3449_, lean_object* v_i_3450_){
_start:
{
lean_object* v_res_3451_; 
v_res_3451_ = l_Lean_Syntax_decodeStringGap(v_s_3449_, v_i_3450_);
lean_dec(v_i_3450_);
return v_res_3451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLitAux(lean_object* v_s_3452_, lean_object* v_i_3453_, lean_object* v_acc_3454_){
_start:
{
uint32_t v_c_3455_; uint32_t v___x_3456_; uint8_t v___x_3457_; 
v_c_3455_ = lean_string_utf8_get(v_s_3452_, v_i_3453_);
v___x_3456_ = 34;
v___x_3457_ = lean_uint32_dec_eq(v_c_3455_, v___x_3456_);
if (v___x_3457_ == 0)
{
lean_object* v_i_3458_; uint8_t v___x_3459_; 
v_i_3458_ = lean_string_utf8_next(v_s_3452_, v_i_3453_);
lean_dec(v_i_3453_);
v___x_3459_ = lean_string_utf8_at_end(v_s_3452_, v_i_3458_);
if (v___x_3459_ == 0)
{
uint32_t v___x_3460_; uint8_t v___x_3461_; 
v___x_3460_ = 92;
v___x_3461_ = lean_uint32_dec_eq(v_c_3455_, v___x_3460_);
if (v___x_3461_ == 0)
{
lean_object* v___x_3462_; 
v___x_3462_ = lean_string_push(v_acc_3454_, v_c_3455_);
v_i_3453_ = v_i_3458_;
v_acc_3454_ = v___x_3462_;
goto _start;
}
else
{
lean_object* v___x_3464_; 
v___x_3464_ = l_Lean_Syntax_decodeQuotedChar(v_s_3452_, v_i_3458_);
if (lean_obj_tag(v___x_3464_) == 1)
{
lean_object* v_val_3465_; lean_object* v_fst_3466_; lean_object* v_snd_3467_; uint32_t v___x_3468_; lean_object* v___x_3469_; 
lean_dec(v_i_3458_);
v_val_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_val_3465_);
lean_dec_ref_known(v___x_3464_, 1);
v_fst_3466_ = lean_ctor_get(v_val_3465_, 0);
lean_inc(v_fst_3466_);
v_snd_3467_ = lean_ctor_get(v_val_3465_, 1);
lean_inc(v_snd_3467_);
lean_dec(v_val_3465_);
v___x_3468_ = lean_unbox_uint32(v_fst_3466_);
lean_dec(v_fst_3466_);
v___x_3469_ = lean_string_push(v_acc_3454_, v___x_3468_);
v_i_3453_ = v_snd_3467_;
v_acc_3454_ = v___x_3469_;
goto _start;
}
else
{
lean_object* v___x_3471_; 
lean_dec(v___x_3464_);
lean_inc_ref(v_s_3452_);
v___x_3471_ = l_Lean_Syntax_decodeStringGap(v_s_3452_, v_i_3458_);
lean_dec(v_i_3458_);
if (lean_obj_tag(v___x_3471_) == 1)
{
lean_object* v_val_3472_; 
v_val_3472_ = lean_ctor_get(v___x_3471_, 0);
lean_inc(v_val_3472_);
lean_dec_ref_known(v___x_3471_, 1);
v_i_3453_ = v_val_3472_;
goto _start;
}
else
{
lean_object* v___x_3474_; 
lean_dec(v___x_3471_);
lean_dec_ref(v_acc_3454_);
lean_dec_ref(v_s_3452_);
v___x_3474_ = lean_box(0);
return v___x_3474_;
}
}
}
}
else
{
lean_object* v___x_3475_; 
lean_dec(v_i_3458_);
lean_dec_ref(v_acc_3454_);
lean_dec_ref(v_s_3452_);
v___x_3475_ = lean_box(0);
return v___x_3475_;
}
}
else
{
lean_object* v___x_3476_; 
lean_dec(v_i_3453_);
lean_dec_ref(v_s_3452_);
v___x_3476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3476_, 0, v_acc_3454_);
return v___x_3476_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux(lean_object* v_s_3477_, lean_object* v_i_3478_, lean_object* v_num_3479_){
_start:
{
uint32_t v_c_3480_; lean_object* v_i_3481_; uint32_t v___x_3482_; uint8_t v___x_3483_; 
v_c_3480_ = lean_string_utf8_get(v_s_3477_, v_i_3478_);
v_i_3481_ = lean_string_utf8_next(v_s_3477_, v_i_3478_);
lean_dec(v_i_3478_);
v___x_3482_ = 35;
v___x_3483_ = lean_uint32_dec_eq(v_c_3480_, v___x_3482_);
if (v___x_3483_ == 0)
{
lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; 
v___x_3484_ = lean_string_utf8_byte_size(v_s_3477_);
v___x_3485_ = lean_unsigned_to_nat(1u);
v___x_3486_ = lean_nat_add(v_num_3479_, v___x_3485_);
lean_dec(v_num_3479_);
v___x_3487_ = lean_nat_sub(v___x_3484_, v___x_3486_);
lean_dec(v___x_3486_);
v___x_3488_ = lean_string_utf8_extract(v_s_3477_, v_i_3481_, v___x_3487_);
lean_dec(v___x_3487_);
lean_dec(v_i_3481_);
return v___x_3488_;
}
else
{
lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3489_ = lean_unsigned_to_nat(1u);
v___x_3490_ = lean_nat_add(v_num_3479_, v___x_3489_);
lean_dec(v_num_3479_);
v_i_3478_ = v_i_3481_;
v_num_3479_ = v___x_3490_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeRawStrLitAux___boxed(lean_object* v_s_3492_, lean_object* v_i_3493_, lean_object* v_num_3494_){
_start:
{
lean_object* v_res_3495_; 
v_res_3495_ = l_Lean_Syntax_decodeRawStrLitAux(v_s_3492_, v_i_3493_, v_num_3494_);
lean_dec_ref(v_s_3492_);
return v_res_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeStrLit(lean_object* v_s_3496_){
_start:
{
lean_object* v___x_3497_; uint32_t v___x_3498_; uint32_t v___x_3499_; uint8_t v___x_3500_; 
v___x_3497_ = lean_unsigned_to_nat(0u);
v___x_3498_ = lean_string_utf8_get(v_s_3496_, v___x_3497_);
v___x_3499_ = 114;
v___x_3500_ = lean_uint32_dec_eq(v___x_3498_, v___x_3499_);
if (v___x_3500_ == 0)
{
lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v___x_3501_ = lean_unsigned_to_nat(1u);
v___x_3502_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_3503_ = l_Lean_Syntax_decodeStrLitAux(v_s_3496_, v___x_3501_, v___x_3502_);
return v___x_3503_;
}
else
{
lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; 
v___x_3504_ = lean_unsigned_to_nat(1u);
v___x_3505_ = l_Lean_Syntax_decodeRawStrLitAux(v_s_3496_, v___x_3504_, v___x_3497_);
lean_dec_ref(v_s_3496_);
v___x_3506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3506_, 0, v___x_3505_);
return v___x_3506_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f(lean_object* v_stx_3507_){
_start:
{
lean_object* v___x_3508_; lean_object* v___x_3509_; 
v___x_3508_ = ((lean_object*)(l_Lean_Syntax_mkStrLit___closed__1));
v___x_3509_ = l_Lean_Syntax_isLit_x3f(v___x_3508_, v_stx_3507_);
if (lean_obj_tag(v___x_3509_) == 1)
{
lean_object* v_val_3510_; lean_object* v___x_3511_; 
v_val_3510_ = lean_ctor_get(v___x_3509_, 0);
lean_inc(v_val_3510_);
lean_dec_ref_known(v___x_3509_, 1);
v___x_3511_ = l_Lean_Syntax_decodeStrLit(v_val_3510_);
return v___x_3511_;
}
else
{
lean_object* v___x_3512_; 
lean_dec(v___x_3509_);
v___x_3512_ = lean_box(0);
return v___x_3512_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isStrLit_x3f___boxed(lean_object* v_stx_3513_){
_start:
{
lean_object* v_res_3514_; 
v_res_3514_ = l_Lean_Syntax_isStrLit_x3f(v_stx_3513_);
lean_dec(v_stx_3513_);
return v_res_3514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit(lean_object* v_s_3515_){
_start:
{
lean_object* v___x_3516_; uint32_t v_c_3517_; uint32_t v___x_3518_; uint8_t v___x_3519_; 
v___x_3516_ = lean_unsigned_to_nat(1u);
v_c_3517_ = lean_string_utf8_get(v_s_3515_, v___x_3516_);
v___x_3518_ = 92;
v___x_3519_ = lean_uint32_dec_eq(v_c_3517_, v___x_3518_);
if (v___x_3519_ == 0)
{
lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3520_ = lean_box_uint32(v_c_3517_);
v___x_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3520_);
return v___x_3521_;
}
else
{
lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3522_ = lean_unsigned_to_nat(2u);
v___x_3523_ = l_Lean_Syntax_decodeQuotedChar(v_s_3515_, v___x_3522_);
if (lean_obj_tag(v___x_3523_) == 0)
{
lean_object* v___x_3524_; 
v___x_3524_ = lean_box(0);
return v___x_3524_;
}
else
{
lean_object* v_val_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3533_; 
v_val_3525_ = lean_ctor_get(v___x_3523_, 0);
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3523_);
if (v_isSharedCheck_3533_ == 0)
{
v___x_3527_ = v___x_3523_;
v_isShared_3528_ = v_isSharedCheck_3533_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_val_3525_);
lean_dec(v___x_3523_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3533_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
lean_object* v_fst_3529_; lean_object* v___x_3531_; 
v_fst_3529_ = lean_ctor_get(v_val_3525_, 0);
lean_inc(v_fst_3529_);
lean_dec(v_val_3525_);
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 0, v_fst_3529_);
v___x_3531_ = v___x_3527_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v_fst_3529_);
v___x_3531_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
return v___x_3531_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeCharLit___boxed(lean_object* v_s_3534_){
_start:
{
lean_object* v_res_3535_; 
v_res_3535_ = l_Lean_Syntax_decodeCharLit(v_s_3534_);
lean_dec_ref(v_s_3534_);
return v_res_3535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f(lean_object* v_stx_3536_){
_start:
{
lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3537_ = ((lean_object*)(l_Lean_Syntax_mkCharLit___closed__1));
v___x_3538_ = l_Lean_Syntax_isLit_x3f(v___x_3537_, v_stx_3536_);
if (lean_obj_tag(v___x_3538_) == 1)
{
lean_object* v_val_3539_; lean_object* v___x_3540_; 
v_val_3539_ = lean_ctor_get(v___x_3538_, 0);
lean_inc(v_val_3539_);
lean_dec_ref_known(v___x_3538_, 1);
v___x_3540_ = l_Lean_Syntax_decodeCharLit(v_val_3539_);
lean_dec(v_val_3539_);
return v___x_3540_;
}
else
{
lean_object* v___x_3541_; 
lean_dec(v___x_3538_);
v___x_3541_ = lean_box(0);
return v___x_3541_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isCharLit_x3f___boxed(lean_object* v_stx_3542_){
_start:
{
lean_object* v_res_3543_; 
v_res_3543_ = l_Lean_Syntax_isCharLit_x3f(v_stx_3542_);
lean_dec(v_stx_3542_);
return v_res_3543_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0(uint32_t v___y_3544_){
_start:
{
uint32_t v___x_3566_; uint8_t v___x_3567_; 
v___x_3566_ = 65;
v___x_3567_ = lean_uint32_dec_le(v___x_3566_, v___y_3544_);
if (v___x_3567_ == 0)
{
goto v___jp_3561_;
}
else
{
uint32_t v___x_3568_; uint8_t v___x_3569_; 
v___x_3568_ = 90;
v___x_3569_ = lean_uint32_dec_le(v___y_3544_, v___x_3568_);
if (v___x_3569_ == 0)
{
goto v___jp_3561_;
}
else
{
return v___x_3569_;
}
}
v___jp_3545_:
{
uint32_t v___x_3546_; uint8_t v___x_3547_; 
v___x_3546_ = 95;
v___x_3547_ = lean_uint32_dec_eq(v___y_3544_, v___x_3546_);
if (v___x_3547_ == 0)
{
uint32_t v___x_3548_; uint8_t v___x_3549_; 
v___x_3548_ = 39;
v___x_3549_ = lean_uint32_dec_eq(v___y_3544_, v___x_3548_);
if (v___x_3549_ == 0)
{
uint32_t v___x_3550_; uint8_t v___x_3551_; 
v___x_3550_ = 33;
v___x_3551_ = lean_uint32_dec_eq(v___y_3544_, v___x_3550_);
if (v___x_3551_ == 0)
{
uint32_t v___x_3552_; uint8_t v___x_3553_; 
v___x_3552_ = 63;
v___x_3553_ = lean_uint32_dec_eq(v___y_3544_, v___x_3552_);
if (v___x_3553_ == 0)
{
uint8_t v___x_3554_; 
v___x_3554_ = l_Lean_isLetterLike(v___y_3544_);
if (v___x_3554_ == 0)
{
uint8_t v___x_3555_; 
v___x_3555_ = l_Lean_isSubScriptAlnum(v___y_3544_);
return v___x_3555_;
}
else
{
return v___x_3554_;
}
}
else
{
return v___x_3553_;
}
}
else
{
return v___x_3551_;
}
}
else
{
return v___x_3549_;
}
}
else
{
return v___x_3547_;
}
}
v___jp_3556_:
{
uint32_t v___x_3557_; uint8_t v___x_3558_; 
v___x_3557_ = 48;
v___x_3558_ = lean_uint32_dec_le(v___x_3557_, v___y_3544_);
if (v___x_3558_ == 0)
{
goto v___jp_3545_;
}
else
{
uint32_t v___x_3559_; uint8_t v___x_3560_; 
v___x_3559_ = 57;
v___x_3560_ = lean_uint32_dec_le(v___y_3544_, v___x_3559_);
if (v___x_3560_ == 0)
{
goto v___jp_3545_;
}
else
{
return v___x_3560_;
}
}
}
v___jp_3561_:
{
uint32_t v___x_3562_; uint8_t v___x_3563_; 
v___x_3562_ = 97;
v___x_3563_ = lean_uint32_dec_le(v___x_3562_, v___y_3544_);
if (v___x_3563_ == 0)
{
goto v___jp_3556_;
}
else
{
uint32_t v___x_3564_; uint8_t v___x_3565_; 
v___x_3564_ = 122;
v___x_3565_ = lean_uint32_dec_le(v___y_3544_, v___x_3564_);
if (v___x_3565_ == 0)
{
goto v___jp_3556_;
}
else
{
return v___x_3565_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0___boxed(lean_object* v___y_3570_){
_start:
{
uint32_t v___y_441__boxed_3571_; uint8_t v_res_3572_; lean_object* v_r_3573_; 
v___y_441__boxed_3571_ = lean_unbox_uint32(v___y_3570_);
lean_dec(v___y_3570_);
v_res_3572_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__0(v___y_441__boxed_3571_);
v_r_3573_ = lean_box(v_res_3572_);
return v_r_3573_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1(uint32_t v___x_3574_, uint32_t v___x_3575_, uint32_t v___y_3576_){
_start:
{
uint8_t v___x_3577_; 
v___x_3577_ = lean_uint32_dec_le(v___x_3574_, v___y_3576_);
if (v___x_3577_ == 0)
{
return v___x_3577_;
}
else
{
uint8_t v___x_3578_; 
v___x_3578_ = lean_uint32_dec_le(v___y_3576_, v___x_3575_);
return v___x_3578_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1___boxed(lean_object* v___x_3579_, lean_object* v___x_3580_, lean_object* v___y_3581_){
_start:
{
uint32_t v___x_494__boxed_3582_; uint32_t v___x_495__boxed_3583_; uint32_t v___y_496__boxed_3584_; uint8_t v_res_3585_; lean_object* v_r_3586_; 
v___x_494__boxed_3582_ = lean_unbox_uint32(v___x_3579_);
lean_dec(v___x_3579_);
v___x_495__boxed_3583_ = lean_unbox_uint32(v___x_3580_);
lean_dec(v___x_3580_);
v___y_496__boxed_3584_ = lean_unbox_uint32(v___y_3581_);
lean_dec(v___y_3581_);
v_res_3585_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1(v___x_494__boxed_3582_, v___x_495__boxed_3583_, v___y_496__boxed_3584_);
v_r_3586_ = lean_box(v_res_3585_);
return v_r_3586_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2(uint8_t v___x_3587_, uint8_t v___x_3588_, uint32_t v_x_3589_){
_start:
{
uint32_t v___x_3590_; uint8_t v___x_3591_; 
v___x_3590_ = 187;
v___x_3591_ = lean_uint32_dec_eq(v_x_3589_, v___x_3590_);
if (v___x_3591_ == 0)
{
return v___x_3587_;
}
else
{
return v___x_3588_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2___boxed(lean_object* v___x_3592_, lean_object* v___x_3593_, lean_object* v_x_3594_){
_start:
{
uint8_t v___x_507__boxed_3595_; uint8_t v___x_508__boxed_3596_; uint32_t v_x_509__boxed_3597_; uint8_t v_res_3598_; lean_object* v_r_3599_; 
v___x_507__boxed_3595_ = lean_unbox(v___x_3592_);
v___x_508__boxed_3596_ = lean_unbox(v___x_3593_);
v_x_509__boxed_3597_ = lean_unbox_uint32(v_x_3594_);
lean_dec(v_x_3594_);
v_res_3598_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2(v___x_507__boxed_3595_, v___x_508__boxed_3596_, v_x_509__boxed_3597_);
v_r_3599_ = lean_box(v_res_3598_);
return v_r_3599_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1(void){
_start:
{
uint32_t v___x_3601_; lean_object* v___x_3602_; 
v___x_3601_ = 48;
v___x_3602_ = lean_box_uint32(v___x_3601_);
return v___x_3602_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2(void){
_start:
{
uint32_t v___x_3603_; lean_object* v___x_3604_; 
v___x_3603_ = 57;
v___x_3604_ = lean_box_uint32(v___x_3603_);
return v___x_3604_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1(void){
_start:
{
lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___f_3607_; 
v___x_3605_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1;
v___x_3606_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2;
v___f_3607_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3607_, 0, v___x_3605_);
lean_closure_set(v___f_3607_, 1, v___x_3606_);
return v___f_3607_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(lean_object* v_ss_3608_, lean_object* v_acc_3609_){
_start:
{
lean_object* v_ss_3611_; lean_object* v_acc_3612_; uint8_t v___x_3621_; 
lean_inc_ref(v_ss_3608_);
v___x_3621_ = lean_substring_isempty(v_ss_3608_);
if (v___x_3621_ == 0)
{
uint32_t v_curr_3622_; uint32_t v___x_3623_; uint8_t v___x_3624_; 
lean_inc_ref(v_ss_3608_);
v_curr_3622_ = lean_substring_front(v_ss_3608_);
v___x_3623_ = 171;
v___x_3624_ = lean_uint32_dec_eq(v_curr_3622_, v___x_3623_);
if (v___x_3624_ == 0)
{
lean_object* v___f_3625_; uint32_t v___x_3661_; uint8_t v___x_3662_; 
v___f_3625_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__0));
v___x_3661_ = 65;
v___x_3662_ = lean_uint32_dec_le(v___x_3661_, v_curr_3622_);
if (v___x_3662_ == 0)
{
goto v___jp_3656_;
}
else
{
uint32_t v___x_3663_; uint8_t v___x_3664_; 
v___x_3663_ = 90;
v___x_3664_ = lean_uint32_dec_le(v_curr_3622_, v___x_3663_);
if (v___x_3664_ == 0)
{
goto v___jp_3656_;
}
else
{
goto v___jp_3626_;
}
}
v___jp_3626_:
{
lean_object* v_idPart_3627_; lean_object* v_startPos_3628_; lean_object* v_stopPos_3629_; lean_object* v_startPos_3630_; lean_object* v_stopPos_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; 
lean_inc_ref(v_ss_3608_);
v_idPart_3627_ = lean_substring_takewhile(v_ss_3608_, v___f_3625_);
v_startPos_3628_ = lean_ctor_get(v_idPart_3627_, 1);
v_stopPos_3629_ = lean_ctor_get(v_idPart_3627_, 2);
v_startPos_3630_ = lean_ctor_get(v_ss_3608_, 1);
v_stopPos_3631_ = lean_ctor_get(v_ss_3608_, 2);
v___x_3632_ = lean_nat_sub(v_stopPos_3629_, v_startPos_3628_);
v___x_3633_ = lean_nat_sub(v_stopPos_3631_, v_startPos_3630_);
v___x_3634_ = lean_substring_extract(v_ss_3608_, v___x_3632_, v___x_3633_);
v___x_3635_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3635_, 0, v_idPart_3627_);
lean_ctor_set(v___x_3635_, 1, v_acc_3609_);
v_ss_3611_ = v___x_3634_;
v_acc_3612_ = v___x_3635_;
goto v___jp_3610_;
}
v___jp_3636_:
{
uint32_t v___x_3637_; uint8_t v___x_3638_; 
v___x_3637_ = 95;
v___x_3638_ = lean_uint32_dec_eq(v_curr_3622_, v___x_3637_);
if (v___x_3638_ == 0)
{
uint8_t v___x_3639_; 
v___x_3639_ = l_Lean_isLetterLike(v_curr_3622_);
if (v___x_3639_ == 0)
{
uint32_t v___x_3640_; uint8_t v___x_3641_; 
v___x_3640_ = 48;
v___x_3641_ = lean_uint32_dec_le(v___x_3640_, v_curr_3622_);
if (v___x_3641_ == 0)
{
lean_object* v___x_3642_; 
lean_dec(v_acc_3609_);
lean_dec_ref(v_ss_3608_);
v___x_3642_ = lean_box(0);
return v___x_3642_;
}
else
{
uint32_t v___x_3643_; uint8_t v___x_3644_; 
v___x_3643_ = 57;
v___x_3644_ = lean_uint32_dec_le(v_curr_3622_, v___x_3643_);
if (v___x_3644_ == 0)
{
lean_object* v___x_3645_; 
lean_dec(v_acc_3609_);
lean_dec_ref(v_ss_3608_);
v___x_3645_ = lean_box(0);
return v___x_3645_;
}
else
{
lean_object* v___f_3646_; lean_object* v_idPart_3647_; lean_object* v_startPos_3648_; lean_object* v_stopPos_3649_; lean_object* v_startPos_3650_; lean_object* v_stopPos_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
v___f_3646_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1, &l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1_once, _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1);
lean_inc_ref(v_ss_3608_);
v_idPart_3647_ = lean_substring_takewhile(v_ss_3608_, v___f_3646_);
v_startPos_3648_ = lean_ctor_get(v_idPart_3647_, 1);
v_stopPos_3649_ = lean_ctor_get(v_idPart_3647_, 2);
v_startPos_3650_ = lean_ctor_get(v_ss_3608_, 1);
v_stopPos_3651_ = lean_ctor_get(v_ss_3608_, 2);
v___x_3652_ = lean_nat_sub(v_stopPos_3649_, v_startPos_3648_);
v___x_3653_ = lean_nat_sub(v_stopPos_3651_, v_startPos_3650_);
v___x_3654_ = lean_substring_extract(v_ss_3608_, v___x_3652_, v___x_3653_);
v___x_3655_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3655_, 0, v_idPart_3647_);
lean_ctor_set(v___x_3655_, 1, v_acc_3609_);
v_ss_3611_ = v___x_3654_;
v_acc_3612_ = v___x_3655_;
goto v___jp_3610_;
}
}
}
else
{
goto v___jp_3626_;
}
}
else
{
goto v___jp_3626_;
}
}
v___jp_3656_:
{
uint32_t v___x_3657_; uint8_t v___x_3658_; 
v___x_3657_ = 97;
v___x_3658_ = lean_uint32_dec_le(v___x_3657_, v_curr_3622_);
if (v___x_3658_ == 0)
{
goto v___jp_3636_;
}
else
{
uint32_t v___x_3659_; uint8_t v___x_3660_; 
v___x_3659_ = 122;
v___x_3660_ = lean_uint32_dec_le(v_curr_3622_, v___x_3659_);
if (v___x_3660_ == 0)
{
goto v___jp_3636_;
}
else
{
goto v___jp_3626_;
}
}
}
}
else
{
lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___f_3667_; lean_object* v_escapedPart_3668_; lean_object* v_str_3669_; lean_object* v_startPos_3670_; lean_object* v_stopPos_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3691_; 
v___x_3665_ = lean_box(v___x_3624_);
v___x_3666_ = lean_box(v___x_3621_);
v___f_3667_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___lam__2___boxed), 3, 2);
lean_closure_set(v___f_3667_, 0, v___x_3665_);
lean_closure_set(v___f_3667_, 1, v___x_3666_);
lean_inc_ref(v_ss_3608_);
v_escapedPart_3668_ = lean_substring_takewhile(v_ss_3608_, v___f_3667_);
v_str_3669_ = lean_ctor_get(v_escapedPart_3668_, 0);
v_startPos_3670_ = lean_ctor_get(v_escapedPart_3668_, 1);
v_stopPos_3671_ = lean_ctor_get(v_escapedPart_3668_, 2);
v_isSharedCheck_3691_ = !lean_is_exclusive(v_escapedPart_3668_);
if (v_isSharedCheck_3691_ == 0)
{
v___x_3673_ = v_escapedPart_3668_;
v_isShared_3674_ = v_isSharedCheck_3691_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_stopPos_3671_);
lean_inc(v_startPos_3670_);
lean_inc(v_str_3669_);
lean_dec(v_escapedPart_3668_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3691_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v_startPos_3675_; lean_object* v_stopPos_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v_escapedPart_3680_; 
v_startPos_3675_ = lean_ctor_get(v_ss_3608_, 1);
v_stopPos_3676_ = lean_ctor_get(v_ss_3608_, 2);
v___x_3677_ = lean_string_utf8_next(v_str_3669_, v_stopPos_3671_);
lean_dec(v_stopPos_3671_);
lean_inc(v_stopPos_3676_);
v___x_3678_ = lean_string_pos_min(v_stopPos_3676_, v___x_3677_);
lean_inc(v___x_3678_);
lean_inc(v_startPos_3670_);
if (v_isShared_3674_ == 0)
{
lean_ctor_set(v___x_3673_, 2, v___x_3678_);
v_escapedPart_3680_ = v___x_3673_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v_str_3669_);
lean_ctor_set(v_reuseFailAlloc_3690_, 1, v_startPos_3670_);
lean_ctor_set(v_reuseFailAlloc_3690_, 2, v___x_3678_);
v_escapedPart_3680_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; uint32_t v___x_3683_; uint32_t v___x_3684_; uint8_t v___x_3685_; 
v___x_3681_ = lean_nat_sub(v___x_3678_, v_startPos_3670_);
lean_dec(v_startPos_3670_);
lean_dec(v___x_3678_);
lean_inc(v___x_3681_);
lean_inc_ref_n(v_escapedPart_3680_, 2);
v___x_3682_ = lean_substring_prev(v_escapedPart_3680_, v___x_3681_);
v___x_3683_ = lean_substring_get(v_escapedPart_3680_, v___x_3682_);
v___x_3684_ = 187;
v___x_3685_ = lean_uint32_dec_eq(v___x_3683_, v___x_3684_);
if (v___x_3685_ == 0)
{
lean_object* v___x_3686_; 
lean_dec(v___x_3681_);
lean_dec_ref(v_escapedPart_3680_);
lean_dec(v_acc_3609_);
lean_dec_ref(v_ss_3608_);
v___x_3686_ = lean_box(0);
return v___x_3686_;
}
else
{
lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; 
v___x_3687_ = lean_nat_sub(v_stopPos_3676_, v_startPos_3675_);
v___x_3688_ = lean_substring_extract(v_ss_3608_, v___x_3681_, v___x_3687_);
v___x_3689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3689_, 0, v_escapedPart_3680_);
lean_ctor_set(v___x_3689_, 1, v_acc_3609_);
v_ss_3611_ = v___x_3688_;
v_acc_3612_ = v___x_3689_;
goto v___jp_3610_;
}
}
}
}
}
else
{
lean_object* v___x_3692_; 
lean_dec(v_acc_3609_);
lean_dec_ref(v_ss_3608_);
v___x_3692_ = lean_box(0);
return v___x_3692_;
}
v___jp_3610_:
{
uint32_t v___x_3613_; uint32_t v___x_3614_; uint8_t v___x_3615_; 
lean_inc_ref(v_ss_3611_);
v___x_3613_ = lean_substring_front(v_ss_3611_);
v___x_3614_ = 46;
v___x_3615_ = lean_uint32_dec_eq(v___x_3613_, v___x_3614_);
if (v___x_3615_ == 0)
{
uint8_t v___x_3616_; 
v___x_3616_ = lean_substring_isempty(v_ss_3611_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3617_; 
lean_dec(v_acc_3612_);
v___x_3617_ = lean_box(0);
return v___x_3617_;
}
else
{
return v_acc_3612_;
}
}
else
{
lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3618_ = lean_unsigned_to_nat(1u);
v___x_3619_ = lean_substring_drop(v_ss_3611_, v___x_3618_);
v_ss_3608_ = v___x_3619_;
v_acc_3609_ = v_acc_3612_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_splitNameLit(lean_object* v_ss_3693_){
_start:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3694_ = lean_box(0);
v___x_3695_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(v_ss_3693_, v___x_3694_);
v___x_3696_ = l_List_reverse___redArg(v___x_3695_);
return v___x_3696_;
}
}
static lean_object* _init_l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3(void){
_start:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; 
v___x_3700_ = ((lean_object*)(l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__2));
v___x_3701_ = lean_unsigned_to_nat(10u);
v___x_3702_ = lean_unsigned_to_nat(1257u);
v___x_3703_ = ((lean_object*)(l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__1));
v___x_3704_ = ((lean_object*)(l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__0));
v___x_3705_ = l_mkPanicMessageWithDecl(v___x_3704_, v___x_3703_, v___x_3702_, v___x_3701_, v___x_3700_);
return v___x_3705_;
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0(lean_object* v_init_3706_, lean_object* v_x_3707_){
_start:
{
if (lean_obj_tag(v_x_3707_) == 0)
{
lean_inc(v_init_3706_);
return v_init_3706_;
}
else
{
lean_object* v_head_3708_; lean_object* v_tail_3709_; lean_object* v___x_3710_; lean_object* v_comp_3711_; uint32_t v___x_3712_; uint32_t v___x_3713_; uint8_t v___x_3714_; 
v_head_3708_ = lean_ctor_get(v_x_3707_, 0);
lean_inc(v_head_3708_);
v_tail_3709_ = lean_ctor_get(v_x_3707_, 1);
lean_inc(v_tail_3709_);
lean_dec_ref_known(v_x_3707_, 2);
v___x_3710_ = l_List_foldr___at___00Substring_Raw_toName_spec__0(v_init_3706_, v_tail_3709_);
v_comp_3711_ = lean_substring_tostring(v_head_3708_);
lean_inc_ref(v_comp_3711_);
v___x_3712_ = lean_string_front(v_comp_3711_);
v___x_3713_ = 171;
v___x_3714_ = lean_uint32_dec_eq(v___x_3712_, v___x_3713_);
if (v___x_3714_ == 0)
{
uint32_t v___x_3715_; uint8_t v___x_3716_; 
v___x_3715_ = 48;
v___x_3716_ = lean_uint32_dec_le(v___x_3715_, v___x_3712_);
if (v___x_3716_ == 0)
{
lean_object* v___x_3717_; 
v___x_3717_ = l_Lean_Name_str___override(v___x_3710_, v_comp_3711_);
return v___x_3717_;
}
else
{
uint32_t v___x_3718_; uint8_t v___x_3719_; 
v___x_3718_ = 57;
v___x_3719_ = lean_uint32_dec_le(v___x_3712_, v___x_3718_);
if (v___x_3719_ == 0)
{
lean_object* v___x_3720_; 
v___x_3720_ = l_Lean_Name_str___override(v___x_3710_, v_comp_3711_);
return v___x_3720_;
}
else
{
lean_object* v___x_3721_; 
v___x_3721_ = l_Lean_Syntax_decodeNatLitVal_x3f(v_comp_3711_);
lean_dec_ref(v_comp_3711_);
if (lean_obj_tag(v___x_3721_) == 1)
{
lean_object* v_val_3722_; lean_object* v___x_3723_; 
v_val_3722_ = lean_ctor_get(v___x_3721_, 0);
lean_inc(v_val_3722_);
lean_dec_ref_known(v___x_3721_, 1);
v___x_3723_ = l_Lean_Name_num___override(v___x_3710_, v_val_3722_);
return v___x_3723_;
}
else
{
lean_object* v___x_3724_; lean_object* v___x_3725_; 
lean_dec(v___x_3721_);
lean_dec(v___x_3710_);
v___x_3724_ = lean_obj_once(&l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3, &l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3_once, _init_l_List_foldr___at___00Substring_Raw_toName_spec__0___closed__3);
v___x_3725_ = l_panic___at___00__private_Init_Prelude_0__Lean_assembleParts_spec__0(v___x_3724_);
return v___x_3725_;
}
}
}
}
else
{
lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3726_ = lean_unsigned_to_nat(1u);
v___x_3727_ = lean_string_drop(v_comp_3711_, v___x_3726_);
v___x_3728_ = lean_string_dropright(v___x_3727_, v___x_3726_);
v___x_3729_ = l_Lean_Name_str___override(v___x_3710_, v___x_3728_);
return v___x_3729_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldr___at___00Substring_Raw_toName_spec__0___boxed(lean_object* v_init_3730_, lean_object* v_x_3731_){
_start:
{
lean_object* v_res_3732_; 
v_res_3732_ = l_List_foldr___at___00Substring_Raw_toName_spec__0(v_init_3730_, v_x_3731_);
lean_dec(v_init_3730_);
return v_res_3732_;
}
}
LEAN_EXPORT lean_object* l_Substring_Raw_toName(lean_object* v_s_3733_){
_start:
{
lean_object* v___x_3734_; lean_object* v___x_3735_; 
v___x_3734_ = lean_box(0);
v___x_3735_ = l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux(v_s_3733_, v___x_3734_);
if (lean_obj_tag(v___x_3735_) == 0)
{
lean_object* v___x_3736_; 
v___x_3736_ = lean_box(0);
return v___x_3736_;
}
else
{
lean_object* v___x_3737_; lean_object* v___x_3738_; 
v___x_3737_ = lean_box(0);
v___x_3738_ = l_List_foldr___at___00Substring_Raw_toName_spec__0(v___x_3737_, v___x_3735_);
return v___x_3738_;
}
}
}
LEAN_EXPORT lean_object* l_String_toName(lean_object* v_s_3739_){
_start:
{
lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; 
v___x_3740_ = lean_unsigned_to_nat(0u);
v___x_3741_ = lean_string_utf8_byte_size(v_s_3739_);
v___x_3742_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3742_, 0, v_s_3739_);
lean_ctor_set(v___x_3742_, 1, v___x_3740_);
lean_ctor_set(v___x_3742_, 2, v___x_3741_);
v___x_3743_ = l_Substring_Raw_toName(v___x_3742_);
return v___x_3743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_decodeNameLit(lean_object* v_s_3744_){
_start:
{
lean_object* v___x_3745_; uint32_t v___x_3746_; uint32_t v___x_3747_; uint8_t v___x_3748_; 
v___x_3745_ = lean_unsigned_to_nat(0u);
v___x_3746_ = lean_string_utf8_get(v_s_3744_, v___x_3745_);
v___x_3747_ = 96;
v___x_3748_ = lean_uint32_dec_eq(v___x_3746_, v___x_3747_);
if (v___x_3748_ == 0)
{
lean_object* v___x_3749_; 
lean_dec_ref(v_s_3744_);
v___x_3749_ = lean_box(0);
return v___x_3749_;
}
else
{
lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; 
v___x_3750_ = lean_string_utf8_byte_size(v_s_3744_);
v___x_3751_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3751_, 0, v_s_3744_);
lean_ctor_set(v___x_3751_, 1, v___x_3745_);
lean_ctor_set(v___x_3751_, 2, v___x_3750_);
v___x_3752_ = lean_unsigned_to_nat(1u);
v___x_3753_ = lean_substring_drop(v___x_3751_, v___x_3752_);
v___x_3754_ = l_Substring_Raw_toName(v___x_3753_);
if (lean_obj_tag(v___x_3754_) == 0)
{
lean_object* v___x_3755_; 
v___x_3755_ = lean_box(0);
return v___x_3755_;
}
else
{
lean_object* v___x_3756_; 
v___x_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3754_);
return v___x_3756_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object* v_stx_3757_){
_start:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; 
v___x_3758_ = ((lean_object*)(l_Lean_Syntax_mkNameLit___closed__1));
v___x_3759_ = l_Lean_Syntax_isLit_x3f(v___x_3758_, v_stx_3757_);
if (lean_obj_tag(v___x_3759_) == 1)
{
lean_object* v_val_3760_; lean_object* v___x_3761_; 
v_val_3760_ = lean_ctor_get(v___x_3759_, 0);
lean_inc(v_val_3760_);
lean_dec_ref_known(v___x_3759_, 1);
v___x_3761_ = l_Lean_Syntax_decodeNameLit(v_val_3760_);
return v___x_3761_;
}
else
{
lean_object* v___x_3762_; 
lean_dec(v___x_3759_);
v___x_3762_ = lean_box(0);
return v___x_3762_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNameLit_x3f___boxed(lean_object* v_stx_3763_){
_start:
{
lean_object* v_res_3764_; 
v_res_3764_ = l_Lean_Syntax_isNameLit_x3f(v_stx_3763_);
lean_dec(v_stx_3763_);
return v_res_3764_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_hasArgs(lean_object* v_x_3765_){
_start:
{
if (lean_obj_tag(v_x_3765_) == 1)
{
lean_object* v_args_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; uint8_t v___x_3769_; 
v_args_3766_ = lean_ctor_get(v_x_3765_, 2);
v___x_3767_ = lean_unsigned_to_nat(0u);
v___x_3768_ = lean_array_get_size(v_args_3766_);
v___x_3769_ = lean_nat_dec_lt(v___x_3767_, v___x_3768_);
return v___x_3769_;
}
else
{
uint8_t v___x_3770_; 
v___x_3770_ = 0;
return v___x_3770_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_hasArgs___boxed(lean_object* v_x_3771_){
_start:
{
uint8_t v_res_3772_; lean_object* v_r_3773_; 
v_res_3772_ = l_Lean_Syntax_hasArgs(v_x_3771_);
lean_dec(v_x_3771_);
v_r_3773_ = lean_box(v_res_3772_);
return v_r_3773_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isAtom(lean_object* v_x_3774_){
_start:
{
if (lean_obj_tag(v_x_3774_) == 2)
{
uint8_t v___x_3775_; 
v___x_3775_ = 1;
return v___x_3775_;
}
else
{
uint8_t v___x_3776_; 
v___x_3776_ = 0;
return v___x_3776_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isAtom___boxed(lean_object* v_x_3777_){
_start:
{
uint8_t v_res_3778_; lean_object* v_r_3779_; 
v_res_3778_ = l_Lean_Syntax_isAtom(v_x_3777_);
lean_dec(v_x_3777_);
v_r_3779_ = lean_box(v_res_3778_);
return v_r_3779_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isToken(lean_object* v_token_3780_, lean_object* v_x_3781_){
_start:
{
if (lean_obj_tag(v_x_3781_) == 2)
{
lean_object* v_val_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; uint8_t v___x_3785_; 
v_val_3782_ = lean_ctor_get(v_x_3781_, 1);
lean_inc_ref(v_val_3782_);
lean_dec_ref_known(v_x_3781_, 2);
v___x_3783_ = lean_string_trim(v_val_3782_);
v___x_3784_ = lean_string_trim(v_token_3780_);
v___x_3785_ = lean_string_dec_eq(v___x_3783_, v___x_3784_);
lean_dec_ref(v___x_3784_);
lean_dec_ref(v___x_3783_);
return v___x_3785_;
}
else
{
uint8_t v___x_3786_; 
lean_dec(v_x_3781_);
lean_dec_ref(v_token_3780_);
v___x_3786_ = 0;
return v___x_3786_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isToken___boxed(lean_object* v_token_3787_, lean_object* v_x_3788_){
_start:
{
uint8_t v_res_3789_; lean_object* v_r_3790_; 
v_res_3789_ = l_Lean_Syntax_isToken(v_token_3787_, v_x_3788_);
v_r_3790_ = lean_box(v_res_3789_);
return v_r_3790_;
}
}
LEAN_EXPORT uint8_t l_Lean_Syntax_isNone(lean_object* v_stx_3791_){
_start:
{
switch(lean_obj_tag(v_stx_3791_))
{
case 1:
{
lean_object* v_kind_3792_; lean_object* v_args_3793_; lean_object* v___x_3794_; uint8_t v___x_3795_; 
v_kind_3792_ = lean_ctor_get(v_stx_3791_, 1);
v_args_3793_ = lean_ctor_get(v_stx_3791_, 2);
v___x_3794_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_3795_ = lean_name_eq(v_kind_3792_, v___x_3794_);
if (v___x_3795_ == 0)
{
return v___x_3795_;
}
else
{
lean_object* v___x_3796_; lean_object* v___x_3797_; uint8_t v___x_3798_; 
v___x_3796_ = lean_array_get_size(v_args_3793_);
v___x_3797_ = lean_unsigned_to_nat(0u);
v___x_3798_ = lean_nat_dec_eq(v___x_3796_, v___x_3797_);
return v___x_3798_;
}
}
case 0:
{
uint8_t v___x_3799_; 
v___x_3799_ = 1;
return v___x_3799_;
}
default: 
{
uint8_t v___x_3800_; 
v___x_3800_ = 0;
return v___x_3800_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isNone___boxed(lean_object* v_stx_3801_){
_start:
{
uint8_t v_res_3802_; lean_object* v_r_3803_; 
v_res_3802_ = l_Lean_Syntax_isNone(v_stx_3801_);
lean_dec(v_stx_3801_);
v_r_3803_ = lean_box(v_res_3802_);
return v_r_3803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f(lean_object* v_stx_3804_){
_start:
{
lean_object* v___x_3805_; 
v___x_3805_ = l_Lean_Syntax_getOptional_x3f(v_stx_3804_);
if (lean_obj_tag(v___x_3805_) == 0)
{
lean_object* v___x_3806_; 
v___x_3806_ = lean_box(0);
return v___x_3806_;
}
else
{
lean_object* v_val_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3815_; 
v_val_3807_ = lean_ctor_get(v___x_3805_, 0);
v_isSharedCheck_3815_ = !lean_is_exclusive(v___x_3805_);
if (v_isSharedCheck_3815_ == 0)
{
v___x_3809_ = v___x_3805_;
v_isShared_3810_ = v_isSharedCheck_3815_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_val_3807_);
lean_dec(v___x_3805_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3815_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
lean_object* v___x_3811_; lean_object* v___x_3813_; 
v___x_3811_ = l_Lean_Syntax_getId(v_val_3807_);
lean_dec(v_val_3807_);
if (v_isShared_3810_ == 0)
{
lean_ctor_set(v___x_3809_, 0, v___x_3811_);
v___x_3813_ = v___x_3809_;
goto v_reusejp_3812_;
}
else
{
lean_object* v_reuseFailAlloc_3814_; 
v_reuseFailAlloc_3814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3814_, 0, v___x_3811_);
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
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getOptionalIdent_x3f___boxed(lean_object* v_stx_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l_Lean_Syntax_getOptionalIdent_x3f(v_stx_3816_);
lean_dec(v_stx_3816_);
return v_res_3817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_findAux(lean_object* v_p_3818_, lean_object* v_x_3819_){
_start:
{
if (lean_obj_tag(v_x_3819_) == 1)
{
lean_object* v_args_3820_; lean_object* v___x_3821_; uint8_t v___x_3822_; 
v_args_3820_ = lean_ctor_get(v_x_3819_, 2);
lean_inc_ref(v_p_3818_);
lean_inc_ref(v_x_3819_);
v___x_3821_ = lean_apply_1(v_p_3818_, v_x_3819_);
v___x_3822_ = lean_unbox(v___x_3821_);
if (v___x_3822_ == 0)
{
lean_object* v___x_3823_; lean_object* v___x_3824_; size_t v_sz_3825_; size_t v___x_3826_; lean_object* v___x_3827_; lean_object* v_fst_3828_; 
lean_inc_ref(v_args_3820_);
lean_dec_ref_known(v_x_3819_, 3);
v___x_3823_ = lean_box(0);
v___x_3824_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v_sz_3825_ = lean_array_size(v_args_3820_);
v___x_3826_ = ((size_t)0ULL);
v___x_3827_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(v_p_3818_, v_args_3820_, v_sz_3825_, v___x_3826_, v___x_3824_);
lean_dec_ref(v_args_3820_);
v_fst_3828_ = lean_ctor_get(v___x_3827_, 0);
lean_inc(v_fst_3828_);
lean_dec_ref(v___x_3827_);
if (lean_obj_tag(v_fst_3828_) == 0)
{
return v___x_3823_;
}
else
{
lean_object* v_val_3829_; 
v_val_3829_ = lean_ctor_get(v_fst_3828_, 0);
lean_inc(v_val_3829_);
lean_dec_ref_known(v_fst_3828_, 1);
return v_val_3829_;
}
}
else
{
lean_object* v___x_3830_; 
lean_dec_ref(v_p_3818_);
v___x_3830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3830_, 0, v_x_3819_);
return v___x_3830_;
}
}
else
{
lean_object* v___x_3831_; uint8_t v___x_3832_; 
lean_inc(v_x_3819_);
v___x_3831_ = lean_apply_1(v_p_3818_, v_x_3819_);
v___x_3832_ = lean_unbox(v___x_3831_);
if (v___x_3832_ == 0)
{
lean_object* v___x_3833_; 
lean_dec(v_x_3819_);
v___x_3833_ = lean_box(0);
return v___x_3833_;
}
else
{
lean_object* v___x_3834_; 
v___x_3834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3834_, 0, v_x_3819_);
return v___x_3834_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(lean_object* v_p_3835_, lean_object* v_as_3836_, size_t v_sz_3837_, size_t v_i_3838_, lean_object* v_b_3839_){
_start:
{
uint8_t v___x_3840_; 
v___x_3840_ = lean_usize_dec_lt(v_i_3838_, v_sz_3837_);
if (v___x_3840_ == 0)
{
lean_dec_ref(v_p_3835_);
lean_inc_ref(v_b_3839_);
return v_b_3839_;
}
else
{
lean_object* v___x_3841_; lean_object* v_a_3842_; lean_object* v___x_3843_; 
v___x_3841_ = lean_box(0);
v_a_3842_ = lean_array_uget_borrowed(v_as_3836_, v_i_3838_);
lean_inc(v_a_3842_);
lean_inc_ref(v_p_3835_);
v___x_3843_ = l_Lean_Syntax_findAux(v_p_3835_, v_a_3842_);
if (lean_obj_tag(v___x_3843_) == 1)
{
lean_object* v___x_3844_; lean_object* v___x_3845_; 
lean_dec_ref(v_p_3835_);
v___x_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3844_, 0, v___x_3843_);
v___x_3845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3845_, 0, v___x_3844_);
lean_ctor_set(v___x_3845_, 1, v___x_3841_);
return v___x_3845_;
}
else
{
lean_object* v___x_3846_; size_t v___x_3847_; size_t v___x_3848_; 
lean_dec(v___x_3843_);
v___x_3846_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_getHead_x3f_spec__0___closed__0));
v___x_3847_ = ((size_t)1ULL);
v___x_3848_ = lean_usize_add(v_i_3838_, v___x_3847_);
v_i_3838_ = v___x_3848_;
v_b_3839_ = v___x_3846_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0___boxed(lean_object* v_p_3850_, lean_object* v_as_3851_, lean_object* v_sz_3852_, lean_object* v_i_3853_, lean_object* v_b_3854_){
_start:
{
size_t v_sz_boxed_3855_; size_t v_i_boxed_3856_; lean_object* v_res_3857_; 
v_sz_boxed_3855_ = lean_unbox_usize(v_sz_3852_);
lean_dec(v_sz_3852_);
v_i_boxed_3856_ = lean_unbox_usize(v_i_3853_);
lean_dec(v_i_3853_);
v_res_3857_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Syntax_findAux_spec__0(v_p_3850_, v_as_3851_, v_sz_boxed_3855_, v_i_boxed_3856_, v_b_3854_);
lean_dec_ref(v_b_3854_);
lean_dec_ref(v_as_3851_);
return v_res_3857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_find_x3f(lean_object* v_stx_3858_, lean_object* v_p_3859_){
_start:
{
lean_object* v___x_3860_; 
v___x_3860_ = l_Lean_Syntax_findAux(v_p_3859_, v_stx_3858_);
return v___x_3860_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat(lean_object* v_s_3861_){
_start:
{
lean_object* v___x_3862_; 
v___x_3862_ = l_Lean_Syntax_isNatLit_x3f(v_s_3861_);
if (lean_obj_tag(v___x_3862_) == 0)
{
lean_object* v___x_3863_; 
v___x_3863_ = lean_unsigned_to_nat(0u);
return v___x_3863_;
}
else
{
lean_object* v_val_3864_; 
v_val_3864_ = lean_ctor_get(v___x_3862_, 0);
lean_inc(v_val_3864_);
lean_dec_ref_known(v___x_3862_, 1);
return v_val_3864_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getNat___boxed(lean_object* v_s_3865_){
_start:
{
lean_object* v_res_3866_; 
v_res_3866_ = l_Lean_TSyntax_getNat(v_s_3865_);
lean_dec(v_s_3865_);
return v_res_3866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(lean_object* v_stx_3870_){
_start:
{
lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3871_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1));
v___x_3872_ = l_Lean_Syntax_isLit_x3f(v___x_3871_, v_stx_3870_);
if (lean_obj_tag(v___x_3872_) == 1)
{
lean_object* v_val_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; 
v_val_3873_ = lean_ctor_get(v___x_3872_, 0);
lean_inc(v_val_3873_);
lean_dec_ref_known(v___x_3872_, 1);
v___x_3874_ = lean_unsigned_to_nat(0u);
v___x_3875_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeHexLitAux(v_val_3873_, v___x_3874_, v___x_3874_);
lean_dec(v_val_3873_);
return v___x_3875_;
}
else
{
lean_object* v___x_3876_; 
lean_dec(v___x_3872_);
v___x_3876_ = lean_box(0);
return v___x_3876_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___boxed(lean_object* v_stx_3877_){
_start:
{
lean_object* v_res_3878_; 
v_res_3878_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(v_stx_3877_);
lean_dec(v_stx_3877_);
return v_res_3878_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal(lean_object* v_s_3879_){
_start:
{
lean_object* v___x_3880_; 
v___x_3880_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f(v_s_3879_);
if (lean_obj_tag(v___x_3880_) == 0)
{
lean_object* v___x_3881_; 
v___x_3881_ = lean_unsigned_to_nat(0u);
return v___x_3881_;
}
else
{
lean_object* v_val_3882_; 
v_val_3882_ = lean_ctor_get(v___x_3880_, 0);
lean_inc(v_val_3882_);
lean_dec_ref_known(v___x_3880_, 1);
return v_val_3882_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumVal___boxed(lean_object* v_s_3883_){
_start:
{
lean_object* v_res_3884_; 
v_res_3884_ = l_Lean_TSyntax_getHexNumVal(v_s_3883_);
lean_dec(v_s_3883_);
return v_res_3884_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(lean_object* v_s_3885_, lean_object* v_p_3886_, lean_object* v_n_3887_){
_start:
{
uint8_t v___x_3888_; 
v___x_3888_ = lean_string_utf8_at_end(v_s_3885_, v_p_3886_);
if (v___x_3888_ == 0)
{
lean_object* v___x_3889_; uint32_t v___x_3890_; uint32_t v___x_3891_; uint8_t v___x_3892_; 
v___x_3889_ = lean_string_utf8_next(v_s_3885_, v_p_3886_);
v___x_3890_ = lean_string_utf8_get(v_s_3885_, v_p_3886_);
lean_dec(v_p_3886_);
v___x_3891_ = 95;
v___x_3892_ = lean_uint32_dec_eq(v___x_3890_, v___x_3891_);
if (v___x_3892_ == 0)
{
lean_object* v___x_3893_; lean_object* v___x_3894_; 
v___x_3893_ = lean_unsigned_to_nat(1u);
v___x_3894_ = lean_nat_add(v_n_3887_, v___x_3893_);
lean_dec(v_n_3887_);
v_p_3886_ = v___x_3889_;
v_n_3887_ = v___x_3894_;
goto _start;
}
else
{
v_p_3886_ = v___x_3889_;
goto _start;
}
}
else
{
lean_dec(v_p_3886_);
return v_n_3887_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go___boxed(lean_object* v_s_3897_, lean_object* v_p_3898_, lean_object* v_n_3899_){
_start:
{
lean_object* v_res_3900_; 
v_res_3900_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(v_s_3897_, v_p_3898_, v_n_3899_);
lean_dec_ref(v_s_3897_);
return v_res_3900_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize(lean_object* v_s_3901_){
_start:
{
lean_object* v___x_3902_; lean_object* v___x_3903_; 
v___x_3902_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_TSyntax_isHexNum_x3f___closed__1));
v___x_3903_ = l_Lean_Syntax_isLit_x3f(v___x_3902_, v_s_3901_);
if (lean_obj_tag(v___x_3903_) == 1)
{
lean_object* v_val_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; 
v_val_3904_ = lean_ctor_get(v___x_3903_, 0);
lean_inc(v_val_3904_);
lean_dec_ref_known(v___x_3903_, 1);
v___x_3905_ = lean_unsigned_to_nat(0u);
v___x_3906_ = l___private_Init_Meta_Defs_0__Lean_TSyntax_getHexNumSize_go(v_val_3904_, v___x_3905_, v___x_3905_);
lean_dec(v_val_3904_);
return v___x_3906_;
}
else
{
lean_object* v___x_3907_; 
lean_dec(v___x_3903_);
v___x_3907_ = lean_unsigned_to_nat(0u);
return v___x_3907_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHexNumSize___boxed(lean_object* v_s_3908_){
_start:
{
lean_object* v_res_3909_; 
v_res_3909_ = l_Lean_TSyntax_getHexNumSize(v_s_3908_);
lean_dec(v_s_3908_);
return v_res_3909_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId(lean_object* v_s_3910_){
_start:
{
lean_object* v___x_3911_; 
v___x_3911_ = l_Lean_Syntax_getId(v_s_3910_);
return v___x_3911_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getId___boxed(lean_object* v_s_3912_){
_start:
{
lean_object* v_res_3913_; 
v_res_3913_ = l_Lean_TSyntax_getId(v_s_3912_);
lean_dec(v_s_3912_);
return v_res_3913_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific(lean_object* v_s_3921_){
_start:
{
lean_object* v___x_3922_; 
v___x_3922_ = l_Lean_Syntax_isScientificLit_x3f(v_s_3921_);
if (lean_obj_tag(v___x_3922_) == 0)
{
lean_object* v___x_3923_; 
v___x_3923_ = ((lean_object*)(l_Lean_TSyntax_getScientific___closed__1));
return v___x_3923_;
}
else
{
lean_object* v_val_3924_; 
v_val_3924_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_val_3924_);
lean_dec_ref_known(v___x_3922_, 1);
return v_val_3924_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getScientific___boxed(lean_object* v_s_3925_){
_start:
{
lean_object* v_res_3926_; 
v_res_3926_ = l_Lean_TSyntax_getScientific(v_s_3925_);
lean_dec(v_s_3925_);
return v_res_3926_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString(lean_object* v_s_3927_){
_start:
{
lean_object* v___x_3928_; 
v___x_3928_ = l_Lean_Syntax_isStrLit_x3f(v_s_3927_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v___x_3929_; 
v___x_3929_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_3929_;
}
else
{
lean_object* v_val_3930_; 
v_val_3930_ = lean_ctor_get(v___x_3928_, 0);
lean_inc(v_val_3930_);
lean_dec_ref_known(v___x_3928_, 1);
return v_val_3930_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getString___boxed(lean_object* v_s_3931_){
_start:
{
lean_object* v_res_3932_; 
v_res_3932_ = l_Lean_TSyntax_getString(v_s_3931_);
lean_dec(v_s_3931_);
return v_res_3932_;
}
}
LEAN_EXPORT uint32_t l_Lean_TSyntax_getChar(lean_object* v_s_3933_){
_start:
{
lean_object* v___x_3934_; 
v___x_3934_ = l_Lean_Syntax_isCharLit_x3f(v_s_3933_);
if (lean_obj_tag(v___x_3934_) == 0)
{
uint32_t v___x_3935_; 
v___x_3935_ = 65;
return v___x_3935_;
}
else
{
lean_object* v_val_3936_; uint32_t v___x_3937_; 
v_val_3936_ = lean_ctor_get(v___x_3934_, 0);
lean_inc(v_val_3936_);
lean_dec_ref_known(v___x_3934_, 1);
v___x_3937_ = lean_unbox_uint32(v_val_3936_);
lean_dec(v_val_3936_);
return v___x_3937_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getChar___boxed(lean_object* v_s_3938_){
_start:
{
uint32_t v_res_3939_; lean_object* v_r_3940_; 
v_res_3939_ = l_Lean_TSyntax_getChar(v_s_3938_);
lean_dec(v_s_3938_);
v_r_3940_ = lean_box_uint32(v_res_3939_);
return v_r_3940_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName(lean_object* v_s_3941_){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = l_Lean_Syntax_isNameLit_x3f(v_s_3941_);
if (lean_obj_tag(v___x_3942_) == 0)
{
lean_object* v___x_3943_; 
v___x_3943_ = lean_box(0);
return v___x_3943_;
}
else
{
lean_object* v_val_3944_; 
v_val_3944_ = lean_ctor_get(v___x_3942_, 0);
lean_inc(v_val_3944_);
lean_dec_ref_known(v___x_3942_, 1);
return v_val_3944_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getName___boxed(lean_object* v_s_3945_){
_start:
{
lean_object* v_res_3946_; 
v_res_3946_ = l_Lean_TSyntax_getName(v_s_3945_);
lean_dec(v_s_3945_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo(lean_object* v_s_3947_){
_start:
{
lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; 
v___x_3948_ = lean_unsigned_to_nat(0u);
v___x_3949_ = l_Lean_Syntax_getArg(v_s_3947_, v___x_3948_);
v___x_3950_ = l_Lean_Syntax_getId(v___x_3949_);
lean_dec(v___x_3949_);
return v___x_3950_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getHygieneInfo___boxed(lean_object* v_s_3951_){
_start:
{
lean_object* v_res_3952_; 
v_res_3952_ = l_Lean_TSyntax_getHygieneInfo(v_s_3951_);
lean_dec(v_s_3951_);
return v_res_3952_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0(lean_object* v_sep_3953_, lean_object* v_a_3954_){
_start:
{
lean_object* v___x_3955_; 
v___x_3955_ = l_Lean_Syntax_SepArray_ofElems(v_sep_3953_, v_a_3954_);
return v___x_3955_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed(lean_object* v_sep_3956_, lean_object* v_a_3957_){
_start:
{
lean_object* v_res_3958_; 
v_res_3958_ = l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0(v_sep_3956_, v_a_3957_);
lean_dec_ref(v_a_3957_);
return v_res_3958_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg(lean_object* v_sep_3959_){
_start:
{
lean_object* v___f_3960_; 
v___f_3960_ = lean_alloc_closure((void*)(l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3960_, 0, v_sep_3959_);
return v___f_3960_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray(lean_object* v_k_3961_, lean_object* v_sep_3962_){
_start:
{
lean_object* v___f_3963_; 
v___f_3963_ = lean_alloc_closure((void*)(l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3963_, 0, v_sep_3962_);
return v___f_3963_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray___boxed(lean_object* v_k_3964_, lean_object* v_sep_3965_){
_start:
{
lean_object* v_res_3966_; 
v_res_3966_ = l_Lean_TSyntax_Compat_instCoeTailArraySyntaxTSepArray(v_k_3964_, v_sep_3965_);
lean_dec(v_k_3964_);
return v_res_3966_;
}
}
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent(lean_object* v_s_3967_, lean_object* v_val_3968_, uint8_t v_canonical_3969_){
_start:
{
lean_object* v___x_3970_; lean_object* v_src_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v_imported_3974_; lean_object* v_ctx_3975_; lean_object* v_scopes_3976_; lean_object* v___x_3978_; uint8_t v_isShared_3979_; uint8_t v_isSharedCheck_3992_; 
v___x_3970_ = lean_unsigned_to_nat(0u);
v_src_3971_ = l_Lean_Syntax_getArg(v_s_3967_, v___x_3970_);
v___x_3972_ = l_Lean_Syntax_getId(v_src_3971_);
v___x_3973_ = l_Lean_extractMacroScopes(v___x_3972_);
v_imported_3974_ = lean_ctor_get(v___x_3973_, 1);
v_ctx_3975_ = lean_ctor_get(v___x_3973_, 2);
v_scopes_3976_ = lean_ctor_get(v___x_3973_, 3);
v_isSharedCheck_3992_ = !lean_is_exclusive(v___x_3973_);
if (v_isSharedCheck_3992_ == 0)
{
lean_object* v_unused_3993_; 
v_unused_3993_ = lean_ctor_get(v___x_3973_, 0);
lean_dec(v_unused_3993_);
v___x_3978_ = v___x_3973_;
v_isShared_3979_ = v_isSharedCheck_3992_;
goto v_resetjp_3977_;
}
else
{
lean_inc(v_scopes_3976_);
lean_inc(v_ctx_3975_);
lean_inc(v_imported_3974_);
lean_dec(v___x_3973_);
v___x_3978_ = lean_box(0);
v_isShared_3979_ = v_isSharedCheck_3992_;
goto v_resetjp_3977_;
}
v_resetjp_3977_:
{
lean_object* v___x_3980_; lean_object* v___x_3982_; 
v___x_3980_ = l_Lean_Name_eraseMacroScopes(v_val_3968_);
if (v_isShared_3979_ == 0)
{
lean_ctor_set(v___x_3978_, 0, v___x_3980_);
v___x_3982_ = v___x_3978_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v___x_3980_);
lean_ctor_set(v_reuseFailAlloc_3991_, 1, v_imported_3974_);
lean_ctor_set(v_reuseFailAlloc_3991_, 2, v_ctx_3975_);
lean_ctor_set(v_reuseFailAlloc_3991_, 3, v_scopes_3976_);
v___x_3982_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
lean_object* v_id_3983_; lean_object* v___x_3984_; uint8_t v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; 
v_id_3983_ = l_Lean_MacroScopesView_review(v___x_3982_);
v___x_3984_ = l_Lean_SourceInfo_fromRef(v_src_3971_, v_canonical_3969_);
lean_dec(v_src_3971_);
v___x_3985_ = 1;
v___x_3986_ = l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithToken___at___00__private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toString_spec__0(v_val_3968_, v___x_3985_);
v___x_3987_ = lean_string_utf8_byte_size(v___x_3986_);
v___x_3988_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3988_, 0, v___x_3986_);
lean_ctor_set(v___x_3988_, 1, v___x_3970_);
lean_ctor_set(v___x_3988_, 2, v___x_3987_);
v___x_3989_ = lean_box(0);
v___x_3990_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3990_, 0, v___x_3984_);
lean_ctor_set(v___x_3990_, 1, v___x_3988_);
lean_ctor_set(v___x_3990_, 2, v_id_3983_);
lean_ctor_set(v___x_3990_, 3, v___x_3989_);
return v___x_3990_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_HygieneInfo_mkIdent___boxed(lean_object* v_s_3994_, lean_object* v_val_3995_, lean_object* v_canonical_3996_){
_start:
{
uint8_t v_canonical_boxed_3997_; lean_object* v_res_3998_; 
v_canonical_boxed_3997_ = lean_unbox(v_canonical_3996_);
v_res_3998_ = l_Lean_HygieneInfo_mkIdent(v_s_3994_, v_val_3995_, v_canonical_boxed_3997_);
lean_dec(v_s_3994_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0(lean_object* v_inst_3999_, lean_object* v_inst_4000_, lean_object* v_a_4001_){
_start:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; 
v___x_4002_ = lean_apply_1(v_inst_3999_, v_a_4001_);
v___x_4003_ = lean_apply_1(v_inst_4000_, v___x_4002_);
return v___x_4003_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg(lean_object* v_inst_4004_, lean_object* v_inst_4005_){
_start:
{
lean_object* v___f_4006_; 
v___f_4006_ = lean_alloc_closure((void*)(l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4006_, 0, v_inst_4004_);
lean_closure_set(v___f_4006_, 1, v_inst_4005_);
return v___f_4006_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil(lean_object* v_00_u03b1_4007_, lean_object* v_k_4008_, lean_object* v_k_x27_4009_, lean_object* v_inst_4010_, lean_object* v_inst_4011_){
_start:
{
lean_object* v___f_4012_; 
v___f_4012_ = lean_alloc_closure((void*)(l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4012_, 0, v_inst_4010_);
lean_closure_set(v___f_4012_, 1, v_inst_4011_);
return v___f_4012_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil___boxed(lean_object* v_00_u03b1_4013_, lean_object* v_k_4014_, lean_object* v_k_x27_4015_, lean_object* v_inst_4016_, lean_object* v_inst_4017_){
_start:
{
lean_object* v_res_4018_; 
v_res_4018_ = l_Lean_instQuoteOfCoeHTCTTSyntaxConsSyntaxNodeKindNil(v_00_u03b1_4013_, v_k_4014_, v_k_x27_4015_, v_inst_4016_, v_inst_4017_);
lean_dec(v_k_x27_4015_);
lean_dec(v_k_4014_);
return v_res_4018_;
}
}
static lean_object* _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4026_; lean_object* v___x_4027_; 
v___x_4026_ = ((lean_object*)(l_Lean_instQuoteBoolMkStr1___lam__0___closed__2));
v___x_4027_ = l_Lean_mkCIdent(v___x_4026_);
return v___x_4027_;
}
}
static lean_object* _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__6(void){
_start:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___x_4032_ = ((lean_object*)(l_Lean_instQuoteBoolMkStr1___lam__0___closed__5));
v___x_4033_ = l_Lean_mkCIdent(v___x_4032_);
return v___x_4033_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0(uint8_t v_x_4034_){
_start:
{
if (v_x_4034_ == 0)
{
lean_object* v___x_4035_; 
v___x_4035_ = lean_obj_once(&l_Lean_instQuoteBoolMkStr1___lam__0___closed__3, &l_Lean_instQuoteBoolMkStr1___lam__0___closed__3_once, _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__3);
return v___x_4035_;
}
else
{
lean_object* v___x_4036_; 
v___x_4036_ = lean_obj_once(&l_Lean_instQuoteBoolMkStr1___lam__0___closed__6, &l_Lean_instQuoteBoolMkStr1___lam__0___closed__6_once, _init_l_Lean_instQuoteBoolMkStr1___lam__0___closed__6);
return v___x_4036_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteBoolMkStr1___lam__0___boxed(lean_object* v_x_4037_){
_start:
{
uint8_t v_x_85__boxed_4038_; lean_object* v_res_4039_; 
v_x_85__boxed_4038_ = lean_unbox(v_x_4037_);
v_res_4039_ = l_Lean_instQuoteBoolMkStr1___lam__0(v_x_85__boxed_4038_);
return v_res_4039_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0(uint32_t v_val_4042_){
_start:
{
lean_object* v___x_4043_; lean_object* v___x_4044_; 
v___x_4043_ = lean_box(2);
v___x_4044_ = l_Lean_Syntax_mkCharLit(v_val_4042_, v___x_4043_);
return v___x_4044_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteCharCharLitKind___lam__0___boxed(lean_object* v_val_4045_){
_start:
{
uint32_t v_val_boxed_4046_; lean_object* v_res_4047_; 
v_val_boxed_4046_ = lean_unbox_uint32(v_val_4045_);
lean_dec(v_val_4045_);
v_res_4047_ = l_Lean_instQuoteCharCharLitKind___lam__0(v_val_boxed_4046_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteStringStrLitKind___lam__0(lean_object* v_val_4050_){
_start:
{
lean_object* v___x_4051_; lean_object* v___x_4052_; 
v___x_4051_ = lean_box(2);
v___x_4052_ = l_Lean_Syntax_mkStrLit(v_val_4050_, v___x_4051_);
return v___x_4052_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteNatNumLitKind___lam__0(lean_object* v_n_4055_){
_start:
{
lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; 
v___x_4056_ = l_Nat_reprFast(v_n_4055_);
v___x_4057_ = lean_box(2);
v___x_4058_ = l_Lean_Syntax_mkNumLit(v___x_4056_, v___x_4057_);
return v___x_4058_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteRawMkStr1___lam__0(lean_object* v_s_4066_){
_start:
{
lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; 
v___x_4067_ = ((lean_object*)(l_Lean_instQuoteRawMkStr1___lam__0___closed__2));
v___x_4068_ = lean_substring_tostring(v_s_4066_);
v___x_4069_ = lean_box(2);
v___x_4070_ = l_Lean_Syntax_mkStrLit(v___x_4068_, v___x_4069_);
v___x_4071_ = lean_unsigned_to_nat(1u);
v___x_4072_ = lean_mk_empty_array_with_capacity(v___x_4071_);
v___x_4073_ = lean_array_push(v___x_4072_, v___x_4070_);
v___x_4074_ = l_Lean_Syntax_mkCApp(v___x_4067_, v___x_4073_);
return v___x_4074_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object* v_acc_4077_, lean_object* v_x_4078_){
_start:
{
switch(lean_obj_tag(v_x_4078_))
{
case 0:
{
uint8_t v___x_4079_; 
v___x_4079_ = l_List_isEmpty___redArg(v_acc_4077_);
if (v___x_4079_ == 0)
{
lean_object* v___x_4080_; 
v___x_4080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4080_, 0, v_acc_4077_);
return v___x_4080_;
}
else
{
lean_object* v___x_4081_; 
lean_dec(v_acc_4077_);
v___x_4081_ = lean_box(0);
return v___x_4081_;
}
}
case 1:
{
lean_object* v_pre_4082_; lean_object* v_str_4083_; lean_object* v_val_4085_; lean_object* v___x_4088_; lean_object* v___x_4089_; uint8_t v___x_4090_; 
v_pre_4082_ = lean_ctor_get(v_x_4078_, 0);
lean_inc(v_pre_4082_);
v_str_4083_ = lean_ctor_get(v_x_4078_, 1);
lean_inc_ref(v_str_4083_);
lean_dec_ref_known(v_x_4078_, 2);
v___x_4088_ = lean_unsigned_to_nat(0u);
v___x_4089_ = lean_string_utf8_byte_size(v_str_4083_);
v___x_4090_ = lean_nat_dec_lt(v___x_4088_, v___x_4089_);
if (v___x_4090_ == 0)
{
lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; 
v___x_4091_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_4092_ = lean_string_append(v___x_4091_, v_str_4083_);
lean_dec_ref(v_str_4083_);
v___x_4093_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_4094_ = lean_string_append(v___x_4092_, v___x_4093_);
v_val_4085_ = v___x_4094_;
goto v___jp_4084_;
}
else
{
lean_object* v___f_4095_; lean_object* v___f_4103_; uint32_t v___y_4110_; uint32_t v___y_4115_; uint8_t v_c_4129_; uint8_t v___x_4138_; uint8_t v___x_4139_; 
v___f_4095_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__0));
v___f_4103_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_Internal_Meta_toStringWithSep_maybeEscape___closed__1));
v_c_4129_ = lean_string_get_byte_fast(v_str_4083_, v___x_4088_);
v___x_4138_ = 97;
v___x_4139_ = lean_uint8_dec_le(v___x_4138_, v_c_4129_);
if (v___x_4139_ == 0)
{
goto v___jp_4133_;
}
else
{
uint8_t v___x_4140_; uint8_t v___x_4141_; 
v___x_4140_ = 122;
v___x_4141_ = lean_uint8_dec_le(v_c_4129_, v___x_4140_);
if (v___x_4141_ == 0)
{
goto v___jp_4133_;
}
else
{
goto v___jp_4126_;
}
}
v___jp_4096_:
{
uint8_t v___x_4097_; 
lean_inc_ref(v_str_4083_);
v___x_4097_ = lean_string_any(v_str_4083_, v___f_4095_);
if (v___x_4097_ == 0)
{
lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4098_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__0));
v___x_4099_ = lean_string_append(v___x_4098_, v_str_4083_);
lean_dec_ref(v_str_4083_);
v___x_4100_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_Name_escape___closed__1));
v___x_4101_ = lean_string_append(v___x_4099_, v___x_4100_);
v_val_4085_ = v___x_4101_;
goto v___jp_4084_;
}
else
{
lean_object* v___x_4102_; 
lean_dec_ref(v_str_4083_);
lean_dec(v_pre_4082_);
lean_dec(v_acc_4077_);
v___x_4102_ = lean_box(0);
return v___x_4102_;
}
}
v___jp_4104_:
{
lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; uint8_t v___x_4108_; 
lean_inc_ref(v_str_4083_);
v___x_4105_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4105_, 0, v_str_4083_);
lean_ctor_set(v___x_4105_, 1, v___x_4088_);
lean_ctor_set(v___x_4105_, 2, v___x_4089_);
v___x_4106_ = lean_unsigned_to_nat(1u);
v___x_4107_ = lean_substring_drop(v___x_4105_, v___x_4106_);
v___x_4108_ = lean_substring_all(v___x_4107_, v___f_4103_);
if (v___x_4108_ == 0)
{
goto v___jp_4096_;
}
else
{
v_val_4085_ = v_str_4083_;
goto v___jp_4084_;
}
}
v___jp_4109_:
{
uint32_t v___x_4111_; uint8_t v___x_4112_; 
v___x_4111_ = 95;
v___x_4112_ = lean_uint32_dec_eq(v___y_4110_, v___x_4111_);
if (v___x_4112_ == 0)
{
uint8_t v___x_4113_; 
v___x_4113_ = l_Lean_isLetterLike(v___y_4110_);
if (v___x_4113_ == 0)
{
goto v___jp_4096_;
}
else
{
goto v___jp_4104_;
}
}
else
{
goto v___jp_4104_;
}
}
v___jp_4114_:
{
uint32_t v___x_4116_; uint8_t v___x_4117_; 
v___x_4116_ = 97;
v___x_4117_ = lean_uint32_dec_le(v___x_4116_, v___y_4115_);
if (v___x_4117_ == 0)
{
v___y_4110_ = v___y_4115_;
goto v___jp_4109_;
}
else
{
uint32_t v___x_4118_; uint8_t v___x_4119_; 
v___x_4118_ = 122;
v___x_4119_ = lean_uint32_dec_le(v___y_4115_, v___x_4118_);
if (v___x_4119_ == 0)
{
v___y_4110_ = v___y_4115_;
goto v___jp_4109_;
}
else
{
goto v___jp_4104_;
}
}
}
v___jp_4120_:
{
uint32_t v___x_4121_; uint32_t v___x_4122_; uint8_t v___x_4123_; 
v___x_4121_ = lean_string_utf8_get(v_str_4083_, v___x_4088_);
v___x_4122_ = 65;
v___x_4123_ = lean_uint32_dec_le(v___x_4122_, v___x_4121_);
if (v___x_4123_ == 0)
{
v___y_4115_ = v___x_4121_;
goto v___jp_4114_;
}
else
{
uint32_t v___x_4124_; uint8_t v___x_4125_; 
v___x_4124_ = 90;
v___x_4125_ = lean_uint32_dec_le(v___x_4121_, v___x_4124_);
if (v___x_4125_ == 0)
{
v___y_4115_ = v___x_4121_;
goto v___jp_4114_;
}
else
{
goto v___jp_4104_;
}
}
}
v___jp_4126_:
{
lean_object* v___x_4127_; uint8_t v___x_4128_; 
v___x_4127_ = lean_unsigned_to_nat(1u);
v___x_4128_ = l___private_Init_Meta_Defs_0__Lean_Name_needsNoEscapeAsciiRest(v_str_4083_, v___x_4127_);
if (v___x_4128_ == 0)
{
goto v___jp_4120_;
}
else
{
v_val_4085_ = v_str_4083_;
goto v___jp_4084_;
}
}
v___jp_4130_:
{
uint8_t v___x_4131_; uint8_t v___x_4132_; 
v___x_4131_ = 95;
v___x_4132_ = lean_uint8_dec_eq(v_c_4129_, v___x_4131_);
if (v___x_4132_ == 0)
{
goto v___jp_4120_;
}
else
{
goto v___jp_4126_;
}
}
v___jp_4133_:
{
uint8_t v___x_4134_; uint8_t v___x_4135_; 
v___x_4134_ = 65;
v___x_4135_ = lean_uint8_dec_le(v___x_4134_, v_c_4129_);
if (v___x_4135_ == 0)
{
goto v___jp_4130_;
}
else
{
uint8_t v___x_4136_; uint8_t v___x_4137_; 
v___x_4136_ = 90;
v___x_4137_ = lean_uint8_dec_le(v_c_4129_, v___x_4136_);
if (v___x_4137_ == 0)
{
goto v___jp_4130_;
}
else
{
goto v___jp_4126_;
}
}
}
}
v___jp_4084_:
{
lean_object* v___x_4086_; 
v___x_4086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4086_, 0, v_val_4085_);
lean_ctor_set(v___x_4086_, 1, v_acc_4077_);
v_acc_4077_ = v___x_4086_;
v_x_4078_ = v_pre_4082_;
goto _start;
}
}
default: 
{
lean_object* v___x_4142_; 
lean_dec_ref_known(v_x_4078_, 2);
lean_dec(v_acc_4077_);
v___x_4142_ = lean_box(0);
return v___x_4142_;
}
}
}
}
static lean_object* _init_l_Lean_quoteNameMk___closed__3(void){
_start:
{
lean_object* v___x_4149_; lean_object* v___x_4150_; 
v___x_4149_ = ((lean_object*)(l_Lean_quoteNameMk___closed__2));
v___x_4150_ = l_Lean_mkCIdent(v___x_4149_);
return v___x_4150_;
}
}
LEAN_EXPORT lean_object* l_Lean_quoteNameMk(lean_object* v_x_4161_){
_start:
{
switch(lean_obj_tag(v_x_4161_))
{
case 0:
{
lean_object* v___x_4162_; 
v___x_4162_ = lean_obj_once(&l_Lean_quoteNameMk___closed__3, &l_Lean_quoteNameMk___closed__3_once, _init_l_Lean_quoteNameMk___closed__3);
return v___x_4162_;
}
case 1:
{
lean_object* v_pre_4163_; lean_object* v_str_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v_pre_4163_ = lean_ctor_get(v_x_4161_, 0);
lean_inc(v_pre_4163_);
v_str_4164_ = lean_ctor_get(v_x_4161_, 1);
lean_inc_ref(v_str_4164_);
lean_dec_ref_known(v_x_4161_, 2);
v___x_4165_ = ((lean_object*)(l_Lean_quoteNameMk___closed__5));
v___x_4166_ = l_Lean_quoteNameMk(v_pre_4163_);
v___x_4167_ = lean_box(2);
v___x_4168_ = l_Lean_Syntax_mkStrLit(v_str_4164_, v___x_4167_);
v___x_4169_ = lean_unsigned_to_nat(2u);
v___x_4170_ = lean_mk_empty_array_with_capacity(v___x_4169_);
v___x_4171_ = lean_array_push(v___x_4170_, v___x_4166_);
v___x_4172_ = lean_array_push(v___x_4171_, v___x_4168_);
v___x_4173_ = l_Lean_Syntax_mkCApp(v___x_4165_, v___x_4172_);
return v___x_4173_;
}
default: 
{
lean_object* v_pre_4174_; lean_object* v_i_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; 
v_pre_4174_ = lean_ctor_get(v_x_4161_, 0);
lean_inc(v_pre_4174_);
v_i_4175_ = lean_ctor_get(v_x_4161_, 1);
lean_inc(v_i_4175_);
lean_dec_ref_known(v_x_4161_, 2);
v___x_4176_ = ((lean_object*)(l_Lean_quoteNameMk___closed__7));
v___x_4177_ = l_Lean_quoteNameMk(v_pre_4174_);
v___x_4178_ = l_Nat_reprFast(v_i_4175_);
v___x_4179_ = lean_box(2);
v___x_4180_ = l_Lean_Syntax_mkNumLit(v___x_4178_, v___x_4179_);
v___x_4181_ = lean_unsigned_to_nat(2u);
v___x_4182_ = lean_mk_empty_array_with_capacity(v___x_4181_);
v___x_4183_ = lean_array_push(v___x_4182_, v___x_4177_);
v___x_4184_ = lean_array_push(v___x_4183_, v___x_4180_);
v___x_4185_ = l_Lean_Syntax_mkCApp(v___x_4176_, v___x_4184_);
return v___x_4185_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___private__1(lean_object* v_n_4192_){
_start:
{
lean_object* v___x_4193_; lean_object* v___x_4194_; 
v___x_4193_ = lean_box(0);
lean_inc(v_n_4192_);
v___x_4194_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_4193_, v_n_4192_);
if (lean_obj_tag(v___x_4194_) == 0)
{
lean_object* v___x_4195_; 
v___x_4195_ = l_Lean_quoteNameMk(v_n_4192_);
return v___x_4195_;
}
else
{
lean_object* v_val_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; 
lean_dec(v_n_4192_);
v_val_4196_ = lean_ctor_get(v___x_4194_, 0);
lean_inc(v_val_4196_);
lean_dec_ref_known(v___x_4194_, 1);
v___x_4197_ = ((lean_object*)(l_Lean_instQuoteNameMkStr1___private__1___closed__1));
v___x_4198_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__2));
v___x_4199_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_4200_ = lean_string_intercalate(v___x_4199_, v_val_4196_);
v___x_4201_ = lean_string_append(v___x_4198_, v___x_4200_);
lean_dec_ref(v___x_4200_);
v___x_4202_ = lean_box(2);
v___x_4203_ = l_Lean_Syntax_mkNameLit(v___x_4201_, v___x_4202_);
v___x_4204_ = lean_unsigned_to_nat(1u);
v___x_4205_ = lean_mk_empty_array_with_capacity(v___x_4204_);
v___x_4206_ = lean_array_push(v___x_4205_, v___x_4203_);
v___x_4207_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4207_, 0, v___x_4202_);
lean_ctor_set(v___x_4207_, 1, v___x_4197_);
lean_ctor_set(v___x_4207_, 2, v___x_4206_);
return v___x_4207_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteNameMkStr1___lam__0(lean_object* v_n_4208_){
_start:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4209_ = lean_box(0);
lean_inc(v_n_4208_);
v___x_4210_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_4209_, v_n_4208_);
if (lean_obj_tag(v___x_4210_) == 0)
{
lean_object* v___x_4211_; 
v___x_4211_ = l_Lean_quoteNameMk(v_n_4208_);
return v___x_4211_;
}
else
{
lean_object* v_val_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; 
lean_dec(v_n_4208_);
v_val_4212_ = lean_ctor_get(v___x_4210_, 0);
lean_inc(v_val_4212_);
lean_dec_ref_known(v___x_4210_, 1);
v___x_4213_ = ((lean_object*)(l_Lean_instQuoteNameMkStr1___private__1___closed__1));
v___x_4214_ = ((lean_object*)(l_Lean_Name_reprPrec___closed__2));
v___x_4215_ = ((lean_object*)(l_Lean_versionStringCore___closed__1));
v___x_4216_ = lean_string_intercalate(v___x_4215_, v_val_4212_);
v___x_4217_ = lean_string_append(v___x_4214_, v___x_4216_);
lean_dec_ref(v___x_4216_);
v___x_4218_ = lean_box(2);
v___x_4219_ = l_Lean_Syntax_mkNameLit(v___x_4217_, v___x_4218_);
v___x_4220_ = lean_unsigned_to_nat(1u);
v___x_4221_ = lean_mk_empty_array_with_capacity(v___x_4220_);
v___x_4222_ = lean_array_push(v___x_4221_, v___x_4219_);
v___x_4223_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4223_, 0, v___x_4218_);
lean_ctor_set(v___x_4223_, 1, v___x_4213_);
lean_ctor_set(v___x_4223_, 2, v___x_4222_);
return v___x_4223_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg___lam__0(lean_object* v_inst_4231_, lean_object* v_inst_4232_, lean_object* v_x_4233_){
_start:
{
lean_object* v_fst_4234_; lean_object* v_snd_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; 
v_fst_4234_ = lean_ctor_get(v_x_4233_, 0);
lean_inc(v_fst_4234_);
v_snd_4235_ = lean_ctor_get(v_x_4233_, 1);
lean_inc(v_snd_4235_);
lean_dec_ref(v_x_4233_);
v___x_4236_ = ((lean_object*)(l_Lean_instQuoteProdMkStr1___redArg___lam__0___closed__2));
v___x_4237_ = lean_apply_1(v_inst_4231_, v_fst_4234_);
v___x_4238_ = lean_apply_1(v_inst_4232_, v_snd_4235_);
v___x_4239_ = lean_unsigned_to_nat(2u);
v___x_4240_ = lean_mk_empty_array_with_capacity(v___x_4239_);
v___x_4241_ = lean_array_push(v___x_4240_, v___x_4237_);
v___x_4242_ = lean_array_push(v___x_4241_, v___x_4238_);
v___x_4243_ = l_Lean_Syntax_mkCApp(v___x_4236_, v___x_4242_);
return v___x_4243_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1___redArg(lean_object* v_inst_4244_, lean_object* v_inst_4245_){
_start:
{
lean_object* v___f_4246_; 
v___f_4246_ = lean_alloc_closure((void*)(l_Lean_instQuoteProdMkStr1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4246_, 0, v_inst_4244_);
lean_closure_set(v___f_4246_, 1, v_inst_4245_);
return v___f_4246_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteProdMkStr1(lean_object* v_00_u03b1_4247_, lean_object* v_00_u03b2_4248_, lean_object* v_inst_4249_, lean_object* v_inst_4250_){
_start:
{
lean_object* v___f_4251_; 
v___f_4251_ = lean_alloc_closure((void*)(l_Lean_instQuoteProdMkStr1___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4251_, 0, v_inst_4249_);
lean_closure_set(v___f_4251_, 1, v_inst_4250_);
return v___f_4251_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3(void){
_start:
{
lean_object* v___x_4257_; lean_object* v___x_4258_; 
v___x_4257_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__2));
v___x_4258_ = l_Lean_mkCIdent(v___x_4257_);
return v___x_4258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(lean_object* v_inst_4263_, lean_object* v_x_4264_){
_start:
{
if (lean_obj_tag(v_x_4264_) == 0)
{
lean_object* v___x_4265_; 
lean_dec_ref(v_inst_4263_);
v___x_4265_ = lean_obj_once(&l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3, &l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3_once, _init_l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__3);
return v___x_4265_;
}
else
{
lean_object* v_head_4266_; lean_object* v_tail_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; 
v_head_4266_ = lean_ctor_get(v_x_4264_, 0);
lean_inc(v_head_4266_);
v_tail_4267_ = lean_ctor_get(v_x_4264_, 1);
lean_inc(v_tail_4267_);
lean_dec_ref_known(v_x_4264_, 2);
v___x_4268_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteList___redArg___closed__5));
lean_inc_ref(v_inst_4263_);
v___x_4269_ = lean_apply_1(v_inst_4263_, v_head_4266_);
v___x_4270_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4263_, v_tail_4267_);
v___x_4271_ = lean_unsigned_to_nat(2u);
v___x_4272_ = lean_mk_empty_array_with_capacity(v___x_4271_);
v___x_4273_ = lean_array_push(v___x_4272_, v___x_4269_);
v___x_4274_ = lean_array_push(v___x_4273_, v___x_4270_);
v___x_4275_ = l_Lean_Syntax_mkCApp(v___x_4268_, v___x_4274_);
return v___x_4275_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteList(lean_object* v_00_u03b1_4276_, lean_object* v_inst_4277_, lean_object* v_x_4278_){
_start:
{
lean_object* v___x_4279_; 
v___x_4279_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4277_, v_x_4278_);
return v___x_4279_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1___redArg(lean_object* v_inst_4280_, lean_object* v_a_4281_){
_start:
{
lean_object* v___x_4282_; 
v___x_4282_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4280_, v_a_4281_);
return v___x_4282_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___private__1(lean_object* v_00_u03b1_4283_, lean_object* v_inst_4284_, lean_object* v_a_4285_){
_start:
{
lean_object* v___x_4286_; 
v___x_4286_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4284_, v_a_4285_);
return v___x_4286_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1___redArg(lean_object* v_inst_4287_){
_start:
{
lean_object* v___x_4288_; 
v___x_4288_ = lean_alloc_closure((void*)(l_Lean_instQuoteListMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4288_, 0, lean_box(0));
lean_closure_set(v___x_4288_, 1, v_inst_4287_);
return v___x_4288_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteListMkStr1(lean_object* v_00_u03b1_4289_, lean_object* v_inst_4290_){
_start:
{
lean_object* v___x_4291_; 
v___x_4291_ = lean_alloc_closure((void*)(l_Lean_instQuoteListMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4291_, 0, lean_box(0));
lean_closure_set(v___x_4291_, 1, v_inst_4290_);
return v___x_4291_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(lean_object* v_inst_4294_, lean_object* v_xs_4295_, lean_object* v_i_4296_, lean_object* v_args_4297_){
_start:
{
lean_object* v___x_4298_; uint8_t v___x_4299_; 
v___x_4298_ = lean_array_get_size(v_xs_4295_);
v___x_4299_ = lean_nat_dec_lt(v_i_4296_, v___x_4298_);
if (v___x_4299_ == 0)
{
lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; 
lean_dec(v_i_4296_);
lean_dec_ref(v_inst_4294_);
v___x_4300_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__0));
v___x_4301_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___closed__1));
v___x_4302_ = l_Nat_reprFast(v___x_4298_);
v___x_4303_ = lean_string_append(v___x_4301_, v___x_4302_);
lean_dec_ref(v___x_4302_);
v___x_4304_ = l_Lean_Name_mkStr2(v___x_4300_, v___x_4303_);
v___x_4305_ = l_Lean_Syntax_mkCApp(v___x_4304_, v_args_4297_);
return v___x_4305_;
}
else
{
lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; 
v___x_4306_ = lean_unsigned_to_nat(1u);
v___x_4307_ = lean_nat_add(v_i_4296_, v___x_4306_);
v___x_4308_ = lean_array_fget_borrowed(v_xs_4295_, v_i_4296_);
lean_dec(v_i_4296_);
lean_inc_ref(v_inst_4294_);
lean_inc(v___x_4308_);
v___x_4309_ = lean_apply_1(v_inst_4294_, v___x_4308_);
v___x_4310_ = lean_array_push(v_args_4297_, v___x_4309_);
v_i_4296_ = v___x_4307_;
v_args_4297_ = v___x_4310_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg___boxed(lean_object* v_inst_4312_, lean_object* v_xs_4313_, lean_object* v_i_4314_, lean_object* v_args_4315_){
_start:
{
lean_object* v_res_4316_; 
v_res_4316_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(v_inst_4312_, v_xs_4313_, v_i_4314_, v_args_4315_);
lean_dec_ref(v_xs_4313_);
return v_res_4316_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go(lean_object* v_00_u03b1_4317_, lean_object* v_inst_4318_, lean_object* v_xs_4319_, lean_object* v_i_4320_, lean_object* v_args_4321_){
_start:
{
lean_object* v___x_4322_; 
v___x_4322_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(v_inst_4318_, v_xs_4319_, v_i_4320_, v_args_4321_);
return v___x_4322_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray_go___boxed(lean_object* v_00_u03b1_4323_, lean_object* v_inst_4324_, lean_object* v_xs_4325_, lean_object* v_i_4326_, lean_object* v_args_4327_){
_start:
{
lean_object* v_res_4328_; 
v_res_4328_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go(v_00_u03b1_4323_, v_inst_4324_, v_xs_4325_, v_i_4326_, v_args_4327_);
lean_dec_ref(v_xs_4325_);
return v_res_4328_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(lean_object* v_inst_4333_, lean_object* v_xs_4334_){
_start:
{
lean_object* v___x_4335_; lean_object* v___x_4336_; uint8_t v___x_4337_; 
v___x_4335_ = lean_array_get_size(v_xs_4334_);
v___x_4336_ = lean_unsigned_to_nat(8u);
v___x_4337_ = lean_nat_dec_le(v___x_4335_, v___x_4336_);
if (v___x_4337_ == 0)
{
lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; 
v___x_4338_ = ((lean_object*)(l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg___closed__1));
v___x_4339_ = lean_array_to_list(v_xs_4334_);
v___x_4340_ = l___private_Init_Meta_Defs_0__Lean_quoteList___redArg(v_inst_4333_, v___x_4339_);
v___x_4341_ = lean_unsigned_to_nat(1u);
v___x_4342_ = lean_mk_empty_array_with_capacity(v___x_4341_);
v___x_4343_ = lean_array_push(v___x_4342_, v___x_4340_);
v___x_4344_ = l_Lean_Syntax_mkCApp(v___x_4338_, v___x_4343_);
return v___x_4344_;
}
else
{
lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; 
v___x_4345_ = lean_unsigned_to_nat(0u);
v___x_4346_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4347_ = l___private_Init_Meta_Defs_0__Lean_quoteArray_go___redArg(v_inst_4333_, v_xs_4334_, v___x_4345_, v___x_4346_);
lean_dec_ref(v_xs_4334_);
return v___x_4347_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_quoteArray(lean_object* v_00_u03b1_4348_, lean_object* v_inst_4349_, lean_object* v_xs_4350_){
_start:
{
lean_object* v___x_4351_; 
v___x_4351_ = l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(v_inst_4349_, v_xs_4350_);
return v___x_4351_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1___redArg(lean_object* v_inst_4352_, lean_object* v_xs_4353_){
_start:
{
lean_object* v___x_4354_; 
v___x_4354_ = l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(v_inst_4352_, v_xs_4353_);
return v___x_4354_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___private__1(lean_object* v_00_u03b1_4355_, lean_object* v_inst_4356_, lean_object* v_xs_4357_){
_start:
{
lean_object* v___x_4358_; 
v___x_4358_ = l___private_Init_Meta_Defs_0__Lean_quoteArray___redArg(v_inst_4356_, v_xs_4357_);
return v___x_4358_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1___redArg(lean_object* v_inst_4359_){
_start:
{
lean_object* v___x_4360_; 
v___x_4360_ = lean_alloc_closure((void*)(l_Lean_instQuoteArrayMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4360_, 0, lean_box(0));
lean_closure_set(v___x_4360_, 1, v_inst_4359_);
return v___x_4360_;
}
}
LEAN_EXPORT lean_object* l_Lean_instQuoteArrayMkStr1(lean_object* v_00_u03b1_4361_, lean_object* v_inst_4362_){
_start:
{
lean_object* v___x_4363_; 
v___x_4363_ = lean_alloc_closure((void*)(l_Lean_instQuoteArrayMkStr1___private__1), 3, 2);
lean_closure_set(v___x_4363_, 0, lean_box(0));
lean_closure_set(v___x_4363_, 1, v_inst_4362_);
return v___x_4363_;
}
}
static lean_object* _init_l_Lean_Option_hasQuote___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4369_; lean_object* v___x_4370_; 
v___x_4369_ = ((lean_object*)(l_Lean_Option_hasQuote___redArg___lam__0___closed__2));
v___x_4370_ = l_Lean_mkIdent(v___x_4369_);
return v___x_4370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg___lam__0(lean_object* v_inst_4375_, lean_object* v_x_4376_){
_start:
{
if (lean_obj_tag(v_x_4376_) == 0)
{
lean_object* v___x_4377_; 
lean_dec_ref(v_inst_4375_);
v___x_4377_ = lean_obj_once(&l_Lean_Option_hasQuote___redArg___lam__0___closed__3, &l_Lean_Option_hasQuote___redArg___lam__0___closed__3_once, _init_l_Lean_Option_hasQuote___redArg___lam__0___closed__3);
return v___x_4377_;
}
else
{
lean_object* v_val_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; 
v_val_4378_ = lean_ctor_get(v_x_4376_, 0);
lean_inc(v_val_4378_);
lean_dec_ref_known(v_x_4376_, 1);
v___x_4379_ = ((lean_object*)(l_Lean_Option_hasQuote___redArg___lam__0___closed__5));
v___x_4380_ = lean_apply_1(v_inst_4375_, v_val_4378_);
v___x_4381_ = lean_unsigned_to_nat(1u);
v___x_4382_ = lean_mk_empty_array_with_capacity(v___x_4381_);
v___x_4383_ = lean_array_push(v___x_4382_, v___x_4380_);
v___x_4384_ = l_Lean_Syntax_mkCApp(v___x_4379_, v___x_4383_);
return v___x_4384_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote___redArg(lean_object* v_inst_4385_){
_start:
{
lean_object* v___f_4386_; 
v___f_4386_ = lean_alloc_closure((void*)(l_Lean_Option_hasQuote___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4386_, 0, v_inst_4385_);
return v___f_4386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_hasQuote(lean_object* v_00_u03b1_4387_, lean_object* v_inst_4388_){
_start:
{
lean_object* v___f_4389_; 
v___f_4389_ = lean_alloc_closure((void*)(l_Lean_Option_hasQuote___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4389_, 0, v_inst_4388_);
return v___f_4389_;
}
}
LEAN_EXPORT uint8_t l_Lean_evalPrec___lam__0(uint8_t v___x_4390_, lean_object* v_k_4391_){
_start:
{
lean_object* v___x_4392_; uint8_t v___x_4393_; 
v___x_4392_ = ((lean_object*)(l_Lean_expandMacros___lam__0___closed__4));
v___x_4393_ = lean_name_eq(v_k_4391_, v___x_4392_);
if (v___x_4393_ == 0)
{
uint8_t v___x_4394_; 
v___x_4394_ = 1;
return v___x_4394_;
}
else
{
return v___x_4390_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrec___lam__0___boxed(lean_object* v___x_4395_, lean_object* v_k_4396_){
_start:
{
uint8_t v___x_442__boxed_4397_; uint8_t v_res_4398_; lean_object* v_r_4399_; 
v___x_442__boxed_4397_ = lean_unbox(v___x_4395_);
v_res_4398_ = l_Lean_evalPrec___lam__0(v___x_442__boxed_4397_, v_k_4396_);
lean_dec(v_k_4396_);
v_r_4399_ = lean_box(v_res_4398_);
return v_r_4399_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrec(lean_object* v_stx_4401_, lean_object* v_a_4402_, lean_object* v_a_4403_){
_start:
{
lean_object* v_methods_4404_; lean_object* v_quotContext_4405_; lean_object* v_currMacroScope_4406_; lean_object* v_currRecDepth_4407_; lean_object* v_maxRecDepth_4408_; lean_object* v_ref_4409_; uint8_t v___x_4410_; 
v_methods_4404_ = lean_ctor_get(v_a_4402_, 0);
v_quotContext_4405_ = lean_ctor_get(v_a_4402_, 1);
v_currMacroScope_4406_ = lean_ctor_get(v_a_4402_, 2);
v_currRecDepth_4407_ = lean_ctor_get(v_a_4402_, 3);
v_maxRecDepth_4408_ = lean_ctor_get(v_a_4402_, 4);
v_ref_4409_ = lean_ctor_get(v_a_4402_, 5);
v___x_4410_ = lean_nat_dec_eq(v_currRecDepth_4407_, v_maxRecDepth_4408_);
if (v___x_4410_ == 0)
{
lean_object* v___x_4411_; lean_object* v___f_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; lean_object* v___x_4416_; 
v___x_4411_ = lean_box(v___x_4410_);
v___f_4412_ = lean_alloc_closure((void*)(l_Lean_evalPrec___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4412_, 0, v___x_4411_);
v___x_4413_ = lean_unsigned_to_nat(1u);
v___x_4414_ = lean_nat_add(v_currRecDepth_4407_, v___x_4413_);
lean_inc(v_ref_4409_);
lean_inc(v_maxRecDepth_4408_);
lean_inc(v_currMacroScope_4406_);
lean_inc(v_quotContext_4405_);
lean_inc(v_methods_4404_);
v___x_4415_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4415_, 0, v_methods_4404_);
lean_ctor_set(v___x_4415_, 1, v_quotContext_4405_);
lean_ctor_set(v___x_4415_, 2, v_currMacroScope_4406_);
lean_ctor_set(v___x_4415_, 3, v___x_4414_);
lean_ctor_set(v___x_4415_, 4, v_maxRecDepth_4408_);
lean_ctor_set(v___x_4415_, 5, v_ref_4409_);
lean_inc_ref(v___x_4415_);
v___x_4416_ = l_Lean_expandMacros(v_stx_4401_, v___f_4412_, v___x_4415_, v_a_4403_);
if (lean_obj_tag(v___x_4416_) == 0)
{
lean_object* v_a_4417_; lean_object* v_a_4418_; lean_object* v___x_4420_; uint8_t v_isShared_4421_; uint8_t v_isSharedCheck_4430_; 
v_a_4417_ = lean_ctor_get(v___x_4416_, 0);
v_a_4418_ = lean_ctor_get(v___x_4416_, 1);
v_isSharedCheck_4430_ = !lean_is_exclusive(v___x_4416_);
if (v_isSharedCheck_4430_ == 0)
{
v___x_4420_ = v___x_4416_;
v_isShared_4421_ = v_isSharedCheck_4430_;
goto v_resetjp_4419_;
}
else
{
lean_inc(v_a_4418_);
lean_inc(v_a_4417_);
lean_dec(v___x_4416_);
v___x_4420_ = lean_box(0);
v_isShared_4421_ = v_isSharedCheck_4430_;
goto v_resetjp_4419_;
}
v_resetjp_4419_:
{
lean_object* v___x_4422_; uint8_t v___x_4423_; 
v___x_4422_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
lean_inc(v_a_4417_);
v___x_4423_ = l_Lean_Syntax_isOfKind(v_a_4417_, v___x_4422_);
if (v___x_4423_ == 0)
{
lean_object* v___x_4424_; lean_object* v___x_4425_; 
lean_del_object(v___x_4420_);
v___x_4424_ = ((lean_object*)(l_Lean_evalPrec___closed__0));
v___x_4425_ = l_Lean_Macro_throwErrorAt___redArg(v_a_4417_, v___x_4424_, v___x_4415_, v_a_4418_);
lean_dec_ref_known(v___x_4415_, 6);
lean_dec(v_a_4417_);
return v___x_4425_;
}
else
{
lean_object* v___x_4426_; lean_object* v___x_4428_; 
lean_dec_ref_known(v___x_4415_, 6);
v___x_4426_ = l_Lean_TSyntax_getNat(v_a_4417_);
lean_dec(v_a_4417_);
if (v_isShared_4421_ == 0)
{
lean_ctor_set(v___x_4420_, 0, v___x_4426_);
v___x_4428_ = v___x_4420_;
goto v_reusejp_4427_;
}
else
{
lean_object* v_reuseFailAlloc_4429_; 
v_reuseFailAlloc_4429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4429_, 0, v___x_4426_);
lean_ctor_set(v_reuseFailAlloc_4429_, 1, v_a_4418_);
v___x_4428_ = v_reuseFailAlloc_4429_;
goto v_reusejp_4427_;
}
v_reusejp_4427_:
{
return v___x_4428_;
}
}
}
}
else
{
lean_object* v_a_4431_; lean_object* v_a_4432_; lean_object* v___x_4434_; uint8_t v_isShared_4435_; uint8_t v_isSharedCheck_4439_; 
lean_dec_ref_known(v___x_4415_, 6);
v_a_4431_ = lean_ctor_get(v___x_4416_, 0);
v_a_4432_ = lean_ctor_get(v___x_4416_, 1);
v_isSharedCheck_4439_ = !lean_is_exclusive(v___x_4416_);
if (v_isSharedCheck_4439_ == 0)
{
v___x_4434_ = v___x_4416_;
v_isShared_4435_ = v_isSharedCheck_4439_;
goto v_resetjp_4433_;
}
else
{
lean_inc(v_a_4432_);
lean_inc(v_a_4431_);
lean_dec(v___x_4416_);
v___x_4434_ = lean_box(0);
v_isShared_4435_ = v_isSharedCheck_4439_;
goto v_resetjp_4433_;
}
v_resetjp_4433_:
{
lean_object* v___x_4437_; 
if (v_isShared_4435_ == 0)
{
v___x_4437_ = v___x_4434_;
goto v_reusejp_4436_;
}
else
{
lean_object* v_reuseFailAlloc_4438_; 
v_reuseFailAlloc_4438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4438_, 0, v_a_4431_);
lean_ctor_set(v_reuseFailAlloc_4438_, 1, v_a_4432_);
v___x_4437_ = v_reuseFailAlloc_4438_;
goto v_reusejp_4436_;
}
v_reusejp_4436_:
{
return v___x_4437_;
}
}
}
}
else
{
lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; 
v___x_4440_ = ((lean_object*)(l_Lean_expandMacros___closed__0));
v___x_4441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4441_, 0, v_stx_4401_);
lean_ctor_set(v___x_4441_, 1, v___x_4440_);
v___x_4442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4442_, 0, v___x_4441_);
lean_ctor_set(v___x_4442_, 1, v_a_4403_);
return v___x_4442_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrec___boxed(lean_object* v_stx_4443_, lean_object* v_a_4444_, lean_object* v_a_4445_){
_start:
{
lean_object* v_res_4446_; 
v_res_4446_ = l_Lean_evalPrec(v_stx_4443_, v_a_4444_, v_a_4445_);
lean_dec_ref(v_a_4444_);
return v_res_4446_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrio(lean_object* v_stx_4448_, lean_object* v_a_4449_, lean_object* v_a_4450_){
_start:
{
lean_object* v_methods_4451_; lean_object* v_quotContext_4452_; lean_object* v_currMacroScope_4453_; lean_object* v_currRecDepth_4454_; lean_object* v_maxRecDepth_4455_; lean_object* v_ref_4456_; uint8_t v___x_4457_; 
v_methods_4451_ = lean_ctor_get(v_a_4449_, 0);
v_quotContext_4452_ = lean_ctor_get(v_a_4449_, 1);
v_currMacroScope_4453_ = lean_ctor_get(v_a_4449_, 2);
v_currRecDepth_4454_ = lean_ctor_get(v_a_4449_, 3);
v_maxRecDepth_4455_ = lean_ctor_get(v_a_4449_, 4);
v_ref_4456_ = lean_ctor_get(v_a_4449_, 5);
v___x_4457_ = lean_nat_dec_eq(v_currRecDepth_4454_, v_maxRecDepth_4455_);
if (v___x_4457_ == 0)
{
lean_object* v___x_4458_; lean_object* v___f_4459_; lean_object* v___x_4460_; lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; 
v___x_4458_ = lean_box(v___x_4457_);
v___f_4459_ = lean_alloc_closure((void*)(l_Lean_evalPrec___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4459_, 0, v___x_4458_);
v___x_4460_ = lean_unsigned_to_nat(1u);
v___x_4461_ = lean_nat_add(v_currRecDepth_4454_, v___x_4460_);
lean_inc(v_ref_4456_);
lean_inc(v_maxRecDepth_4455_);
lean_inc(v_currMacroScope_4453_);
lean_inc(v_quotContext_4452_);
lean_inc(v_methods_4451_);
v___x_4462_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4462_, 0, v_methods_4451_);
lean_ctor_set(v___x_4462_, 1, v_quotContext_4452_);
lean_ctor_set(v___x_4462_, 2, v_currMacroScope_4453_);
lean_ctor_set(v___x_4462_, 3, v___x_4461_);
lean_ctor_set(v___x_4462_, 4, v_maxRecDepth_4455_);
lean_ctor_set(v___x_4462_, 5, v_ref_4456_);
lean_inc_ref(v___x_4462_);
v___x_4463_ = l_Lean_expandMacros(v_stx_4448_, v___f_4459_, v___x_4462_, v_a_4450_);
if (lean_obj_tag(v___x_4463_) == 0)
{
lean_object* v_a_4464_; lean_object* v_a_4465_; lean_object* v___x_4467_; uint8_t v_isShared_4468_; uint8_t v_isSharedCheck_4477_; 
v_a_4464_ = lean_ctor_get(v___x_4463_, 0);
v_a_4465_ = lean_ctor_get(v___x_4463_, 1);
v_isSharedCheck_4477_ = !lean_is_exclusive(v___x_4463_);
if (v_isSharedCheck_4477_ == 0)
{
v___x_4467_ = v___x_4463_;
v_isShared_4468_ = v_isSharedCheck_4477_;
goto v_resetjp_4466_;
}
else
{
lean_inc(v_a_4465_);
lean_inc(v_a_4464_);
lean_dec(v___x_4463_);
v___x_4467_ = lean_box(0);
v_isShared_4468_ = v_isSharedCheck_4477_;
goto v_resetjp_4466_;
}
v_resetjp_4466_:
{
lean_object* v___x_4469_; uint8_t v___x_4470_; 
v___x_4469_ = ((lean_object*)(l_Lean_Syntax_mkNumLit___closed__1));
lean_inc(v_a_4464_);
v___x_4470_ = l_Lean_Syntax_isOfKind(v_a_4464_, v___x_4469_);
if (v___x_4470_ == 0)
{
lean_object* v___x_4471_; lean_object* v___x_4472_; 
lean_del_object(v___x_4467_);
v___x_4471_ = ((lean_object*)(l_Lean_evalPrio___closed__0));
v___x_4472_ = l_Lean_Macro_throwErrorAt___redArg(v_a_4464_, v___x_4471_, v___x_4462_, v_a_4465_);
lean_dec_ref_known(v___x_4462_, 6);
lean_dec(v_a_4464_);
return v___x_4472_;
}
else
{
lean_object* v___x_4473_; lean_object* v___x_4475_; 
lean_dec_ref_known(v___x_4462_, 6);
v___x_4473_ = l_Lean_TSyntax_getNat(v_a_4464_);
lean_dec(v_a_4464_);
if (v_isShared_4468_ == 0)
{
lean_ctor_set(v___x_4467_, 0, v___x_4473_);
v___x_4475_ = v___x_4467_;
goto v_reusejp_4474_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v___x_4473_);
lean_ctor_set(v_reuseFailAlloc_4476_, 1, v_a_4465_);
v___x_4475_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4474_;
}
v_reusejp_4474_:
{
return v___x_4475_;
}
}
}
}
else
{
lean_object* v_a_4478_; lean_object* v_a_4479_; lean_object* v___x_4481_; uint8_t v_isShared_4482_; uint8_t v_isSharedCheck_4486_; 
lean_dec_ref_known(v___x_4462_, 6);
v_a_4478_ = lean_ctor_get(v___x_4463_, 0);
v_a_4479_ = lean_ctor_get(v___x_4463_, 1);
v_isSharedCheck_4486_ = !lean_is_exclusive(v___x_4463_);
if (v_isSharedCheck_4486_ == 0)
{
v___x_4481_ = v___x_4463_;
v_isShared_4482_ = v_isSharedCheck_4486_;
goto v_resetjp_4480_;
}
else
{
lean_inc(v_a_4479_);
lean_inc(v_a_4478_);
lean_dec(v___x_4463_);
v___x_4481_ = lean_box(0);
v_isShared_4482_ = v_isSharedCheck_4486_;
goto v_resetjp_4480_;
}
v_resetjp_4480_:
{
lean_object* v___x_4484_; 
if (v_isShared_4482_ == 0)
{
v___x_4484_ = v___x_4481_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v_a_4478_);
lean_ctor_set(v_reuseFailAlloc_4485_, 1, v_a_4479_);
v___x_4484_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
return v___x_4484_;
}
}
}
}
else
{
lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; 
v___x_4487_ = ((lean_object*)(l_Lean_expandMacros___closed__0));
v___x_4488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4488_, 0, v_stx_4448_);
lean_ctor_set(v___x_4488_, 1, v___x_4487_);
v___x_4489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4489_, 0, v___x_4488_);
lean_ctor_set(v___x_4489_, 1, v_a_4450_);
return v___x_4489_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalPrio___boxed(lean_object* v_stx_4490_, lean_object* v_a_4491_, lean_object* v_a_4492_){
_start:
{
lean_object* v_res_4493_; 
v_res_4493_ = l_Lean_evalPrio(v_stx_4490_, v_a_4491_, v_a_4492_);
lean_dec_ref(v_a_4491_);
return v_res_4493_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalOptPrio(lean_object* v_x_4494_, lean_object* v_a_4495_, lean_object* v_a_4496_){
_start:
{
if (lean_obj_tag(v_x_4494_) == 0)
{
lean_object* v___x_4497_; lean_object* v___x_4498_; 
v___x_4497_ = lean_unsigned_to_nat(1000u);
v___x_4498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4498_, 0, v___x_4497_);
lean_ctor_set(v___x_4498_, 1, v_a_4496_);
return v___x_4498_;
}
else
{
lean_object* v_val_4499_; lean_object* v___x_4500_; 
v_val_4499_ = lean_ctor_get(v_x_4494_, 0);
lean_inc(v_val_4499_);
lean_dec_ref_known(v_x_4494_, 1);
v___x_4500_ = l_Lean_evalPrio(v_val_4499_, v_a_4495_, v_a_4496_);
return v___x_4500_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalOptPrio___boxed(lean_object* v_x_4501_, lean_object* v_a_4502_, lean_object* v_a_4503_){
_start:
{
lean_object* v_res_4504_; 
v_res_4504_ = l_Lean_evalOptPrio(v_x_4501_, v_a_4502_, v_a_4503_);
lean_dec_ref(v_a_4502_);
return v_res_4504_;
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0(uint8_t v___x_4505_, lean_object* v_x1_4506_, lean_object* v_x2_4507_){
_start:
{
lean_object* v_fst_4508_; uint8_t v___x_4509_; 
v_fst_4508_ = lean_ctor_get(v_x1_4506_, 0);
v___x_4509_ = lean_unbox(v_fst_4508_);
if (v___x_4509_ == 0)
{
lean_object* v_snd_4510_; lean_object* v___x_4512_; uint8_t v_isShared_4513_; uint8_t v_isSharedCheck_4518_; 
lean_dec(v_x2_4507_);
v_snd_4510_ = lean_ctor_get(v_x1_4506_, 1);
v_isSharedCheck_4518_ = !lean_is_exclusive(v_x1_4506_);
if (v_isSharedCheck_4518_ == 0)
{
lean_object* v_unused_4519_; 
v_unused_4519_ = lean_ctor_get(v_x1_4506_, 0);
lean_dec(v_unused_4519_);
v___x_4512_ = v_x1_4506_;
v_isShared_4513_ = v_isSharedCheck_4518_;
goto v_resetjp_4511_;
}
else
{
lean_inc(v_snd_4510_);
lean_dec(v_x1_4506_);
v___x_4512_ = lean_box(0);
v_isShared_4513_ = v_isSharedCheck_4518_;
goto v_resetjp_4511_;
}
v_resetjp_4511_:
{
lean_object* v___x_4514_; lean_object* v___x_4516_; 
v___x_4514_ = lean_box(v___x_4505_);
if (v_isShared_4513_ == 0)
{
lean_ctor_set(v___x_4512_, 0, v___x_4514_);
v___x_4516_ = v___x_4512_;
goto v_reusejp_4515_;
}
else
{
lean_object* v_reuseFailAlloc_4517_; 
v_reuseFailAlloc_4517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4517_, 0, v___x_4514_);
lean_ctor_set(v_reuseFailAlloc_4517_, 1, v_snd_4510_);
v___x_4516_ = v_reuseFailAlloc_4517_;
goto v_reusejp_4515_;
}
v_reusejp_4515_:
{
return v___x_4516_;
}
}
}
else
{
lean_object* v_snd_4520_; lean_object* v___x_4522_; uint8_t v_isShared_4523_; uint8_t v_isSharedCheck_4530_; 
v_snd_4520_ = lean_ctor_get(v_x1_4506_, 1);
v_isSharedCheck_4530_ = !lean_is_exclusive(v_x1_4506_);
if (v_isSharedCheck_4530_ == 0)
{
lean_object* v_unused_4531_; 
v_unused_4531_ = lean_ctor_get(v_x1_4506_, 0);
lean_dec(v_unused_4531_);
v___x_4522_ = v_x1_4506_;
v_isShared_4523_ = v_isSharedCheck_4530_;
goto v_resetjp_4521_;
}
else
{
lean_inc(v_snd_4520_);
lean_dec(v_x1_4506_);
v___x_4522_ = lean_box(0);
v_isShared_4523_ = v_isSharedCheck_4530_;
goto v_resetjp_4521_;
}
v_resetjp_4521_:
{
uint8_t v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4528_; 
v___x_4524_ = 0;
v___x_4525_ = lean_array_push(v_snd_4520_, v_x2_4507_);
v___x_4526_ = lean_box(v___x_4524_);
if (v_isShared_4523_ == 0)
{
lean_ctor_set(v___x_4522_, 1, v___x_4525_);
lean_ctor_set(v___x_4522_, 0, v___x_4526_);
v___x_4528_ = v___x_4522_;
goto v_reusejp_4527_;
}
else
{
lean_object* v_reuseFailAlloc_4529_; 
v_reuseFailAlloc_4529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4529_, 0, v___x_4526_);
lean_ctor_set(v_reuseFailAlloc_4529_, 1, v___x_4525_);
v___x_4528_ = v_reuseFailAlloc_4529_;
goto v_reusejp_4527_;
}
v_reusejp_4527_:
{
return v___x_4528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg___lam__0___boxed(lean_object* v___x_4532_, lean_object* v_x1_4533_, lean_object* v_x2_4534_){
_start:
{
uint8_t v___x_87__boxed_4535_; lean_object* v_res_4536_; 
v___x_87__boxed_4535_ = lean_unbox(v___x_4532_);
v_res_4536_ = l_Array_getSepElems___redArg___lam__0(v___x_87__boxed_4535_, v_x1_4533_, v_x2_4534_);
return v_res_4536_;
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems___redArg(lean_object* v_as_4558_){
_start:
{
lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; uint8_t v___x_4563_; 
v___x_4559_ = lean_unsigned_to_nat(0u);
v___x_4560_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__0));
v___x_4561_ = lean_array_get_size(v_as_4558_);
v___x_4562_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__10));
v___x_4563_ = lean_nat_dec_lt(v___x_4559_, v___x_4561_);
if (v___x_4563_ == 0)
{
lean_dec_ref(v_as_4558_);
return v___x_4560_;
}
else
{
lean_object* v___x_4564_; lean_object* v___f_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; size_t v___x_4568_; size_t v___x_4569_; lean_object* v___x_4570_; lean_object* v_snd_4571_; 
v___x_4564_ = lean_box(v___x_4563_);
v___f_4565_ = lean_alloc_closure((void*)(l_Array_getSepElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4565_, 0, v___x_4564_);
v___x_4566_ = lean_box(v___x_4563_);
v___x_4567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4567_, 0, v___x_4566_);
lean_ctor_set(v___x_4567_, 1, v___x_4560_);
v___x_4568_ = ((size_t)0ULL);
v___x_4569_ = lean_usize_of_nat(v___x_4561_);
v___x_4570_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_4562_, v___f_4565_, v_as_4558_, v___x_4568_, v___x_4569_, v___x_4567_);
v_snd_4571_ = lean_ctor_get(v___x_4570_, 1);
lean_inc(v_snd_4571_);
lean_dec(v___x_4570_);
return v_snd_4571_;
}
}
}
LEAN_EXPORT lean_object* l_Array_getSepElems(lean_object* v_00_u03b1_4572_, lean_object* v_as_4573_){
_start:
{
lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; uint8_t v___x_4578_; 
v___x_4574_ = lean_unsigned_to_nat(0u);
v___x_4575_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__0));
v___x_4576_ = lean_array_get_size(v_as_4573_);
v___x_4577_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__10));
v___x_4578_ = lean_nat_dec_lt(v___x_4574_, v___x_4576_);
if (v___x_4578_ == 0)
{
lean_dec_ref(v_as_4573_);
return v___x_4575_;
}
else
{
lean_object* v___x_4579_; lean_object* v___f_4580_; lean_object* v___x_4581_; lean_object* v___x_4582_; size_t v___x_4583_; size_t v___x_4584_; lean_object* v___x_4585_; lean_object* v_snd_4586_; 
v___x_4579_ = lean_box(v___x_4578_);
v___f_4580_ = lean_alloc_closure((void*)(l_Array_getSepElems___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4580_, 0, v___x_4579_);
v___x_4581_ = lean_box(v___x_4578_);
v___x_4582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4582_, 0, v___x_4581_);
lean_ctor_set(v___x_4582_, 1, v___x_4575_);
v___x_4583_ = ((size_t)0ULL);
v___x_4584_ = lean_usize_of_nat(v___x_4576_);
v___x_4585_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_4577_, v___f_4580_, v_as_4573_, v___x_4583_, v___x_4584_, v___x_4582_);
v_snd_4586_ = lean_ctor_get(v___x_4585_, 1);
lean_inc(v_snd_4586_);
lean_dec(v___x_4585_);
return v_snd_4586_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0(lean_object* v_i_4587_, lean_object* v_inst_4588_, lean_object* v_a_4589_, lean_object* v_p_4590_, lean_object* v_acc_4591_, lean_object* v_stx_4592_, uint8_t v_____do__lift_4593_){
_start:
{
if (v_____do__lift_4593_ == 0)
{
lean_object* v___x_4594_; lean_object* v___x_4595_; lean_object* v___x_4596_; 
lean_dec(v_stx_4592_);
v___x_4594_ = lean_unsigned_to_nat(2u);
v___x_4595_ = lean_nat_add(v_i_4587_, v___x_4594_);
v___x_4596_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4588_, v_a_4589_, v_p_4590_, v___x_4595_, v_acc_4591_);
return v___x_4596_;
}
else
{
lean_object* v___x_4597_; lean_object* v___x_4598_; uint8_t v___x_4599_; 
v___x_4597_ = lean_array_get_size(v_acc_4591_);
v___x_4598_ = lean_unsigned_to_nat(0u);
v___x_4599_ = lean_nat_dec_eq(v___x_4597_, v___x_4598_);
if (v___x_4599_ == 0)
{
uint8_t v___x_4600_; 
v___x_4600_ = lean_nat_dec_eq(v_i_4587_, v___x_4598_);
if (v___x_4600_ == 0)
{
lean_object* v___x_4601_; lean_object* v_sepStx_4602_; lean_object* v___x_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; 
v___x_4601_ = lean_nat_pred(v_i_4587_);
v_sepStx_4602_ = lean_array_fget_borrowed(v_a_4589_, v___x_4601_);
lean_dec(v___x_4601_);
v___x_4603_ = lean_unsigned_to_nat(2u);
v___x_4604_ = lean_nat_add(v_i_4587_, v___x_4603_);
lean_inc(v_sepStx_4602_);
v___x_4605_ = lean_array_push(v_acc_4591_, v_sepStx_4602_);
v___x_4606_ = lean_array_push(v___x_4605_, v_stx_4592_);
v___x_4607_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4588_, v_a_4589_, v_p_4590_, v___x_4604_, v___x_4606_);
return v___x_4607_;
}
else
{
lean_object* v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; 
v___x_4608_ = lean_unsigned_to_nat(2u);
v___x_4609_ = lean_nat_add(v_i_4587_, v___x_4608_);
v___x_4610_ = lean_array_push(v_acc_4591_, v_stx_4592_);
v___x_4611_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4588_, v_a_4589_, v_p_4590_, v___x_4609_, v___x_4610_);
return v___x_4611_;
}
}
else
{
lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; 
v___x_4612_ = lean_unsigned_to_nat(2u);
v___x_4613_ = lean_nat_add(v_i_4587_, v___x_4612_);
v___x_4614_ = lean_array_push(v_acc_4591_, v_stx_4592_);
v___x_4615_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4588_, v_a_4589_, v_p_4590_, v___x_4613_, v___x_4614_);
return v___x_4615_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0___boxed(lean_object* v_i_4616_, lean_object* v_inst_4617_, lean_object* v_a_4618_, lean_object* v_p_4619_, lean_object* v_acc_4620_, lean_object* v_stx_4621_, lean_object* v_____do__lift_4622_){
_start:
{
uint8_t v_____do__lift_218__boxed_4623_; lean_object* v_res_4624_; 
v_____do__lift_218__boxed_4623_ = lean_unbox(v_____do__lift_4622_);
v_res_4624_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0(v_i_4616_, v_inst_4617_, v_a_4618_, v_p_4619_, v_acc_4620_, v_stx_4621_, v_____do__lift_218__boxed_4623_);
lean_dec(v_i_4616_);
return v_res_4624_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(lean_object* v_inst_4625_, lean_object* v_a_4626_, lean_object* v_p_4627_, lean_object* v_i_4628_, lean_object* v_acc_4629_){
_start:
{
lean_object* v_toApplicative_4630_; lean_object* v_toBind_4631_; lean_object* v_toPure_4632_; lean_object* v___x_4633_; uint8_t v___x_4634_; 
v_toApplicative_4630_ = lean_ctor_get(v_inst_4625_, 0);
v_toBind_4631_ = lean_ctor_get(v_inst_4625_, 1);
lean_inc(v_toBind_4631_);
v_toPure_4632_ = lean_ctor_get(v_toApplicative_4630_, 1);
v___x_4633_ = lean_array_get_size(v_a_4626_);
v___x_4634_ = lean_nat_dec_lt(v_i_4628_, v___x_4633_);
if (v___x_4634_ == 0)
{
lean_object* v___x_4635_; 
lean_inc(v_toPure_4632_);
lean_dec(v_toBind_4631_);
lean_dec(v_i_4628_);
lean_dec(v_p_4627_);
lean_dec_ref(v_a_4626_);
lean_dec_ref(v_inst_4625_);
v___x_4635_ = lean_apply_2(v_toPure_4632_, lean_box(0), v_acc_4629_);
return v___x_4635_;
}
else
{
lean_object* v_stx_4636_; lean_object* v___f_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; 
v_stx_4636_ = lean_array_fget(v_a_4626_, v_i_4628_);
lean_inc(v_stx_4636_);
lean_inc(v_p_4627_);
v___f_4637_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg___lam__0___boxed), 7, 6);
lean_closure_set(v___f_4637_, 0, v_i_4628_);
lean_closure_set(v___f_4637_, 1, v_inst_4625_);
lean_closure_set(v___f_4637_, 2, v_a_4626_);
lean_closure_set(v___f_4637_, 3, v_p_4627_);
lean_closure_set(v___f_4637_, 4, v_acc_4629_);
lean_closure_set(v___f_4637_, 5, v_stx_4636_);
v___x_4638_ = lean_apply_1(v_p_4627_, v_stx_4636_);
v___x_4639_ = lean_apply_4(v_toBind_4631_, lean_box(0), lean_box(0), v___x_4638_, v___f_4637_);
return v___x_4639_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux(lean_object* v_m_4640_, lean_object* v_inst_4641_, lean_object* v_a_4642_, lean_object* v_p_4643_, lean_object* v_i_4644_, lean_object* v_acc_4645_){
_start:
{
lean_object* v___x_4646_; 
v___x_4646_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4641_, v_a_4642_, v_p_4643_, v_i_4644_, v_acc_4645_);
return v___x_4646_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___redArg(lean_object* v_inst_4647_, lean_object* v_a_4648_, lean_object* v_p_4649_){
_start:
{
lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; 
v___x_4650_ = lean_unsigned_to_nat(0u);
v___x_4651_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4652_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___redArg(v_inst_4647_, v_a_4648_, v_p_4649_, v___x_4650_, v___x_4651_);
return v___x_4652_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM(lean_object* v_m_4653_, lean_object* v_inst_4654_, lean_object* v_a_4655_, lean_object* v_p_4656_){
_start:
{
lean_object* v___x_4657_; 
v___x_4657_ = l_Array_filterSepElemsM___redArg(v_inst_4654_, v_a_4655_, v_p_4656_);
return v___x_4657_;
}
}
LEAN_EXPORT uint8_t l_Array_filterSepElems___lam__0(lean_object* v_p_4658_, lean_object* v_x_4659_){
_start:
{
lean_object* v___x_4660_; uint8_t v___x_4661_; 
v___x_4660_ = lean_apply_1(v_p_4658_, v_x_4659_);
v___x_4661_ = lean_unbox(v___x_4660_);
return v___x_4661_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElems___lam__0___boxed(lean_object* v_p_4662_, lean_object* v_x_4663_){
_start:
{
uint8_t v_res_4664_; lean_object* v_r_4665_; 
v_res_4664_ = l_Array_filterSepElems___lam__0(v_p_4662_, v_x_4663_);
v_r_4665_ = lean_box(v_res_4664_);
return v_r_4665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(lean_object* v_a_4666_, lean_object* v_p_4667_, lean_object* v_i_4668_, lean_object* v_acc_4669_){
_start:
{
lean_object* v___x_4670_; uint8_t v___x_4671_; 
v___x_4670_ = lean_array_get_size(v_a_4666_);
v___x_4671_ = lean_nat_dec_lt(v_i_4668_, v___x_4670_);
if (v___x_4671_ == 0)
{
lean_dec(v_i_4668_);
lean_dec_ref(v_p_4667_);
return v_acc_4669_;
}
else
{
lean_object* v_stx_4672_; lean_object* v___x_4673_; uint8_t v___x_4674_; 
v_stx_4672_ = lean_array_fget_borrowed(v_a_4666_, v_i_4668_);
lean_inc_ref(v_p_4667_);
lean_inc(v_stx_4672_);
v___x_4673_ = lean_apply_1(v_p_4667_, v_stx_4672_);
v___x_4674_ = lean_unbox(v___x_4673_);
if (v___x_4674_ == 0)
{
lean_object* v___x_4675_; lean_object* v___x_4676_; 
v___x_4675_ = lean_unsigned_to_nat(2u);
v___x_4676_ = lean_nat_add(v_i_4668_, v___x_4675_);
lean_dec(v_i_4668_);
v_i_4668_ = v___x_4676_;
goto _start;
}
else
{
lean_object* v___x_4678_; lean_object* v___x_4679_; uint8_t v___x_4680_; 
v___x_4678_ = lean_array_get_size(v_acc_4669_);
v___x_4679_ = lean_unsigned_to_nat(0u);
v___x_4680_ = lean_nat_dec_eq(v___x_4678_, v___x_4679_);
if (v___x_4680_ == 0)
{
uint8_t v___x_4681_; 
v___x_4681_ = lean_nat_dec_eq(v_i_4668_, v___x_4679_);
if (v___x_4681_ == 0)
{
lean_object* v___x_4682_; lean_object* v_sepStx_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; 
v___x_4682_ = lean_nat_pred(v_i_4668_);
v_sepStx_4683_ = lean_array_fget_borrowed(v_a_4666_, v___x_4682_);
lean_dec(v___x_4682_);
v___x_4684_ = lean_unsigned_to_nat(2u);
v___x_4685_ = lean_nat_add(v_i_4668_, v___x_4684_);
lean_dec(v_i_4668_);
lean_inc(v_sepStx_4683_);
v___x_4686_ = lean_array_push(v_acc_4669_, v_sepStx_4683_);
lean_inc(v_stx_4672_);
v___x_4687_ = lean_array_push(v___x_4686_, v_stx_4672_);
v_i_4668_ = v___x_4685_;
v_acc_4669_ = v___x_4687_;
goto _start;
}
else
{
lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; 
v___x_4689_ = lean_unsigned_to_nat(2u);
v___x_4690_ = lean_nat_add(v_i_4668_, v___x_4689_);
lean_dec(v_i_4668_);
lean_inc(v_stx_4672_);
v___x_4691_ = lean_array_push(v_acc_4669_, v_stx_4672_);
v_i_4668_ = v___x_4690_;
v_acc_4669_ = v___x_4691_;
goto _start;
}
}
else
{
lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; 
v___x_4693_ = lean_unsigned_to_nat(2u);
v___x_4694_ = lean_nat_add(v_i_4668_, v___x_4693_);
lean_dec(v_i_4668_);
lean_inc(v_stx_4672_);
v___x_4695_ = lean_array_push(v_acc_4669_, v_stx_4672_);
v_i_4668_ = v___x_4694_;
v_acc_4669_ = v___x_4695_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0___boxed(lean_object* v_a_4697_, lean_object* v_p_4698_, lean_object* v_i_4699_, lean_object* v_acc_4700_){
_start:
{
lean_object* v_res_4701_; 
v_res_4701_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(v_a_4697_, v_p_4698_, v_i_4699_, v_acc_4700_);
lean_dec_ref(v_a_4697_);
return v_res_4701_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(lean_object* v_a_4702_, lean_object* v_p_4703_){
_start:
{
lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; 
v___x_4704_ = lean_unsigned_to_nat(0u);
v___x_4705_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4706_ = l___private_Init_Meta_Defs_0__Array_filterSepElemsMAux___at___00Array_filterSepElemsM___at___00Array_filterSepElems_spec__0_spec__0(v_a_4702_, v_p_4703_, v___x_4704_, v___x_4705_);
return v___x_4706_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0___boxed(lean_object* v_a_4707_, lean_object* v_p_4708_){
_start:
{
lean_object* v_res_4709_; 
v_res_4709_ = l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(v_a_4707_, v_p_4708_);
lean_dec_ref(v_a_4707_);
return v_res_4709_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElems(lean_object* v_a_4710_, lean_object* v_p_4711_){
_start:
{
lean_object* v___f_4712_; lean_object* v___x_4713_; 
v___f_4712_ = lean_alloc_closure((void*)(l_Array_filterSepElems___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4712_, 0, v_p_4711_);
v___x_4713_ = l_Array_filterSepElemsM___at___00Array_filterSepElems_spec__0(v_a_4710_, v___f_4712_);
return v___x_4713_;
}
}
LEAN_EXPORT lean_object* l_Array_filterSepElems___boxed(lean_object* v_a_4714_, lean_object* v_p_4715_){
_start:
{
lean_object* v_res_4716_; 
v_res_4716_ = l_Array_filterSepElems(v_a_4714_, v_p_4715_);
lean_dec_ref(v_a_4714_);
return v_res_4716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0___boxed(lean_object* v_i_4717_, lean_object* v_acc_4718_, lean_object* v_inst_4719_, lean_object* v_a_4720_, lean_object* v_f_4721_, lean_object* v_stx_4722_){
_start:
{
lean_object* v_res_4723_; 
v_res_4723_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0(v_i_4717_, v_acc_4718_, v_inst_4719_, v_a_4720_, v_f_4721_, v_stx_4722_);
lean_dec(v_i_4717_);
return v_res_4723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(lean_object* v_inst_4724_, lean_object* v_a_4725_, lean_object* v_f_4726_, lean_object* v_i_4727_, lean_object* v_acc_4728_){
_start:
{
lean_object* v_toApplicative_4729_; lean_object* v_toBind_4730_; lean_object* v_toPure_4731_; lean_object* v___x_4732_; uint8_t v___x_4733_; 
v_toApplicative_4729_ = lean_ctor_get(v_inst_4724_, 0);
v_toBind_4730_ = lean_ctor_get(v_inst_4724_, 1);
v_toPure_4731_ = lean_ctor_get(v_toApplicative_4729_, 1);
v___x_4732_ = lean_array_get_size(v_a_4725_);
v___x_4733_ = lean_nat_dec_lt(v_i_4727_, v___x_4732_);
if (v___x_4733_ == 0)
{
lean_object* v___x_4734_; 
lean_inc(v_toPure_4731_);
lean_dec(v_i_4727_);
lean_dec(v_f_4726_);
lean_dec_ref(v_a_4725_);
lean_dec_ref(v_inst_4724_);
v___x_4734_ = lean_apply_2(v_toPure_4731_, lean_box(0), v_acc_4728_);
return v___x_4734_;
}
else
{
lean_object* v_stx_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; uint8_t v___x_4739_; 
v_stx_4735_ = lean_array_fget_borrowed(v_a_4725_, v_i_4727_);
v___x_4736_ = lean_unsigned_to_nat(2u);
v___x_4737_ = lean_nat_mod(v_i_4727_, v___x_4736_);
v___x_4738_ = lean_unsigned_to_nat(0u);
v___x_4739_ = lean_nat_dec_eq(v___x_4737_, v___x_4738_);
lean_dec(v___x_4737_);
if (v___x_4739_ == 0)
{
lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; 
v___x_4740_ = lean_unsigned_to_nat(1u);
v___x_4741_ = lean_nat_add(v_i_4727_, v___x_4740_);
lean_dec(v_i_4727_);
lean_inc(v_stx_4735_);
v___x_4742_ = lean_array_push(v_acc_4728_, v_stx_4735_);
v_i_4727_ = v___x_4741_;
v_acc_4728_ = v___x_4742_;
goto _start;
}
else
{
lean_object* v___f_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; 
lean_inc(v_stx_4735_);
lean_inc(v_toBind_4730_);
lean_inc(v_f_4726_);
v___f_4744_ = lean_alloc_closure((void*)(l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_4744_, 0, v_i_4727_);
lean_closure_set(v___f_4744_, 1, v_acc_4728_);
lean_closure_set(v___f_4744_, 2, v_inst_4724_);
lean_closure_set(v___f_4744_, 3, v_a_4725_);
lean_closure_set(v___f_4744_, 4, v_f_4726_);
v___x_4745_ = lean_apply_1(v_f_4726_, v_stx_4735_);
v___x_4746_ = lean_apply_4(v_toBind_4730_, lean_box(0), lean_box(0), v___x_4745_, v___f_4744_);
return v___x_4746_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg___lam__0(lean_object* v_i_4747_, lean_object* v_acc_4748_, lean_object* v_inst_4749_, lean_object* v_a_4750_, lean_object* v_f_4751_, lean_object* v_stx_4752_){
_start:
{
lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; 
v___x_4753_ = lean_unsigned_to_nat(1u);
v___x_4754_ = lean_nat_add(v_i_4747_, v___x_4753_);
v___x_4755_ = lean_array_push(v_acc_4748_, v_stx_4752_);
v___x_4756_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(v_inst_4749_, v_a_4750_, v_f_4751_, v___x_4754_, v___x_4755_);
return v___x_4756_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux(lean_object* v_m_4757_, lean_object* v_inst_4758_, lean_object* v_a_4759_, lean_object* v_f_4760_, lean_object* v_i_4761_, lean_object* v_acc_4762_){
_start:
{
lean_object* v___x_4763_; 
v___x_4763_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(v_inst_4758_, v_a_4759_, v_f_4760_, v_i_4761_, v_acc_4762_);
return v___x_4763_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___redArg(lean_object* v_inst_4764_, lean_object* v_a_4765_, lean_object* v_f_4766_){
_start:
{
lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; 
v___x_4767_ = lean_unsigned_to_nat(0u);
v___x_4768_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4769_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___redArg(v_inst_4764_, v_a_4765_, v_f_4766_, v___x_4767_, v___x_4768_);
return v___x_4769_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM(lean_object* v_m_4770_, lean_object* v_inst_4771_, lean_object* v_a_4772_, lean_object* v_f_4773_){
_start:
{
lean_object* v___x_4774_; 
v___x_4774_ = l_Array_mapSepElemsM___redArg(v_inst_4771_, v_a_4772_, v_f_4773_);
return v___x_4774_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElems___lam__0(lean_object* v_f_4775_, lean_object* v_x_4776_){
_start:
{
lean_object* v___x_4777_; 
v___x_4777_ = lean_apply_1(v_f_4775_, v_x_4776_);
return v___x_4777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(lean_object* v_a_4778_, lean_object* v_f_4779_, lean_object* v_i_4780_, lean_object* v_acc_4781_){
_start:
{
lean_object* v___x_4782_; uint8_t v___x_4783_; 
v___x_4782_ = lean_array_get_size(v_a_4778_);
v___x_4783_ = lean_nat_dec_lt(v_i_4780_, v___x_4782_);
if (v___x_4783_ == 0)
{
lean_dec(v_i_4780_);
lean_dec_ref(v_f_4779_);
return v_acc_4781_;
}
else
{
lean_object* v_stx_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; uint8_t v___x_4788_; 
v_stx_4784_ = lean_array_fget_borrowed(v_a_4778_, v_i_4780_);
v___x_4785_ = lean_unsigned_to_nat(2u);
v___x_4786_ = lean_nat_mod(v_i_4780_, v___x_4785_);
v___x_4787_ = lean_unsigned_to_nat(0u);
v___x_4788_ = lean_nat_dec_eq(v___x_4786_, v___x_4787_);
lean_dec(v___x_4786_);
if (v___x_4788_ == 0)
{
lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; 
v___x_4789_ = lean_unsigned_to_nat(1u);
v___x_4790_ = lean_nat_add(v_i_4780_, v___x_4789_);
lean_dec(v_i_4780_);
lean_inc(v_stx_4784_);
v___x_4791_ = lean_array_push(v_acc_4781_, v_stx_4784_);
v_i_4780_ = v___x_4790_;
v_acc_4781_ = v___x_4791_;
goto _start;
}
else
{
lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; 
lean_inc_ref(v_f_4779_);
lean_inc(v_stx_4784_);
v___x_4793_ = lean_apply_1(v_f_4779_, v_stx_4784_);
v___x_4794_ = lean_unsigned_to_nat(1u);
v___x_4795_ = lean_nat_add(v_i_4780_, v___x_4794_);
lean_dec(v_i_4780_);
v___x_4796_ = lean_array_push(v_acc_4781_, v___x_4793_);
v_i_4780_ = v___x_4795_;
v_acc_4781_ = v___x_4796_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0___boxed(lean_object* v_a_4798_, lean_object* v_f_4799_, lean_object* v_i_4800_, lean_object* v_acc_4801_){
_start:
{
lean_object* v_res_4802_; 
v_res_4802_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(v_a_4798_, v_f_4799_, v_i_4800_, v_acc_4801_);
lean_dec_ref(v_a_4798_);
return v_res_4802_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(lean_object* v_a_4803_, lean_object* v_f_4804_){
_start:
{
lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; 
v___x_4805_ = lean_unsigned_to_nat(0u);
v___x_4806_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
v___x_4807_ = l___private_Init_Meta_Defs_0__Array_mapSepElemsMAux___at___00Array_mapSepElemsM___at___00Array_mapSepElems_spec__0_spec__0(v_a_4803_, v_f_4804_, v___x_4805_, v___x_4806_);
return v___x_4807_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0___boxed(lean_object* v_a_4808_, lean_object* v_f_4809_){
_start:
{
lean_object* v_res_4810_; 
v_res_4810_ = l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(v_a_4808_, v_f_4809_);
lean_dec_ref(v_a_4808_);
return v_res_4810_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElems(lean_object* v_a_4811_, lean_object* v_f_4812_){
_start:
{
lean_object* v___f_4813_; lean_object* v___x_4814_; 
v___f_4813_ = lean_alloc_closure((void*)(l_Array_mapSepElems___lam__0), 2, 1);
lean_closure_set(v___f_4813_, 0, v_f_4812_);
v___x_4814_ = l_Array_mapSepElemsM___at___00Array_mapSepElems_spec__0(v_a_4811_, v___f_4813_);
return v___x_4814_;
}
}
LEAN_EXPORT lean_object* l_Array_mapSepElems___boxed(lean_object* v_a_4815_, lean_object* v_f_4816_){
_start:
{
lean_object* v_res_4817_; 
v_res_4817_ = l_Array_mapSepElems(v_a_4815_, v_f_4816_);
lean_dec_ref(v_a_4815_);
return v_res_4817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(lean_object* v_as_4818_, size_t v_i_4819_, size_t v_stop_4820_, lean_object* v_b_4821_){
_start:
{
lean_object* v___y_4823_; uint8_t v___x_4827_; 
v___x_4827_ = lean_usize_dec_eq(v_i_4819_, v_stop_4820_);
if (v___x_4827_ == 0)
{
lean_object* v_fst_4828_; uint8_t v___x_4829_; 
v_fst_4828_ = lean_ctor_get(v_b_4821_, 0);
v___x_4829_ = lean_unbox(v_fst_4828_);
if (v___x_4829_ == 0)
{
lean_object* v_snd_4830_; lean_object* v___x_4832_; uint8_t v_isShared_4833_; uint8_t v_isSharedCheck_4839_; 
v_snd_4830_ = lean_ctor_get(v_b_4821_, 1);
v_isSharedCheck_4839_ = !lean_is_exclusive(v_b_4821_);
if (v_isSharedCheck_4839_ == 0)
{
lean_object* v_unused_4840_; 
v_unused_4840_ = lean_ctor_get(v_b_4821_, 0);
lean_dec(v_unused_4840_);
v___x_4832_ = v_b_4821_;
v_isShared_4833_ = v_isSharedCheck_4839_;
goto v_resetjp_4831_;
}
else
{
lean_inc(v_snd_4830_);
lean_dec(v_b_4821_);
v___x_4832_ = lean_box(0);
v_isShared_4833_ = v_isSharedCheck_4839_;
goto v_resetjp_4831_;
}
v_resetjp_4831_:
{
uint8_t v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4837_; 
v___x_4834_ = 1;
v___x_4835_ = lean_box(v___x_4834_);
if (v_isShared_4833_ == 0)
{
lean_ctor_set(v___x_4832_, 0, v___x_4835_);
v___x_4837_ = v___x_4832_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4838_; 
v_reuseFailAlloc_4838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4838_, 0, v___x_4835_);
lean_ctor_set(v_reuseFailAlloc_4838_, 1, v_snd_4830_);
v___x_4837_ = v_reuseFailAlloc_4838_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
v___y_4823_ = v___x_4837_;
goto v___jp_4822_;
}
}
}
else
{
lean_object* v_snd_4841_; lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_4851_; 
v_snd_4841_ = lean_ctor_get(v_b_4821_, 1);
v_isSharedCheck_4851_ = !lean_is_exclusive(v_b_4821_);
if (v_isSharedCheck_4851_ == 0)
{
lean_object* v_unused_4852_; 
v_unused_4852_ = lean_ctor_get(v_b_4821_, 0);
lean_dec(v_unused_4852_);
v___x_4843_ = v_b_4821_;
v_isShared_4844_ = v_isSharedCheck_4851_;
goto v_resetjp_4842_;
}
else
{
lean_inc(v_snd_4841_);
lean_dec(v_b_4821_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_4851_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4849_; 
v___x_4845_ = lean_array_uget_borrowed(v_as_4818_, v_i_4819_);
lean_inc(v___x_4845_);
v___x_4846_ = lean_array_push(v_snd_4841_, v___x_4845_);
v___x_4847_ = lean_box(v___x_4827_);
if (v_isShared_4844_ == 0)
{
lean_ctor_set(v___x_4843_, 1, v___x_4846_);
lean_ctor_set(v___x_4843_, 0, v___x_4847_);
v___x_4849_ = v___x_4843_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v___x_4847_);
lean_ctor_set(v_reuseFailAlloc_4850_, 1, v___x_4846_);
v___x_4849_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
v___y_4823_ = v___x_4849_;
goto v___jp_4822_;
}
}
}
}
else
{
return v_b_4821_;
}
v___jp_4822_:
{
size_t v___x_4824_; size_t v___x_4825_; 
v___x_4824_ = ((size_t)1ULL);
v___x_4825_ = lean_usize_add(v_i_4819_, v___x_4824_);
v_i_4819_ = v___x_4825_;
v_b_4821_ = v___y_4823_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0___boxed(lean_object* v_as_4853_, lean_object* v_i_4854_, lean_object* v_stop_4855_, lean_object* v_b_4856_){
_start:
{
size_t v_i_boxed_4857_; size_t v_stop_boxed_4858_; lean_object* v_res_4859_; 
v_i_boxed_4857_ = lean_unbox_usize(v_i_4854_);
lean_dec(v_i_4854_);
v_stop_boxed_4858_ = lean_unbox_usize(v_stop_4855_);
lean_dec(v_stop_4855_);
v_res_4859_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v_as_4853_, v_i_boxed_4857_, v_stop_boxed_4858_, v_b_4856_);
lean_dec_ref(v_as_4853_);
return v_res_4859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg(lean_object* v_sa_4860_){
_start:
{
lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; uint8_t v___x_4864_; 
v___x_4861_ = lean_unsigned_to_nat(0u);
v___x_4862_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_4863_ = lean_array_get_size(v_sa_4860_);
v___x_4864_ = lean_nat_dec_lt(v___x_4861_, v___x_4863_);
if (v___x_4864_ == 0)
{
return v___x_4862_;
}
else
{
lean_object* v___x_4865_; lean_object* v___x_4866_; size_t v___x_4867_; size_t v___x_4868_; lean_object* v___x_4869_; lean_object* v_snd_4870_; 
v___x_4865_ = lean_box(v___x_4864_);
v___x_4866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4866_, 0, v___x_4865_);
lean_ctor_set(v___x_4866_, 1, v___x_4862_);
v___x_4867_ = ((size_t)0ULL);
v___x_4868_ = lean_usize_of_nat(v___x_4863_);
v___x_4869_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v_sa_4860_, v___x_4867_, v___x_4868_, v___x_4866_);
v_snd_4870_ = lean_ctor_get(v___x_4869_, 1);
lean_inc(v_snd_4870_);
lean_dec_ref(v___x_4869_);
return v_snd_4870_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___redArg___boxed(lean_object* v_sa_4871_){
_start:
{
lean_object* v_res_4872_; 
v_res_4872_ = l_Lean_Syntax_SepArray_getElems___redArg(v_sa_4871_);
lean_dec_ref(v_sa_4871_);
return v_res_4872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems(lean_object* v_sep_4873_, lean_object* v_sa_4874_){
_start:
{
lean_object* v___x_4875_; 
v___x_4875_ = l_Lean_Syntax_SepArray_getElems___redArg(v_sa_4874_);
return v___x_4875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_SepArray_getElems___boxed(lean_object* v_sep_4876_, lean_object* v_sa_4877_){
_start:
{
lean_object* v_res_4878_; 
v_res_4878_ = l_Lean_Syntax_SepArray_getElems(v_sep_4876_, v_sa_4877_);
lean_dec_ref(v_sa_4877_);
lean_dec_ref(v_sep_4876_);
return v_res_4878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object* v_sa_4879_){
_start:
{
lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; uint8_t v___x_4883_; 
v___x_4880_ = lean_unsigned_to_nat(0u);
v___x_4881_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_4882_ = lean_array_get_size(v_sa_4879_);
v___x_4883_ = lean_nat_dec_lt(v___x_4880_, v___x_4882_);
if (v___x_4883_ == 0)
{
return v___x_4881_;
}
else
{
lean_object* v___x_4884_; lean_object* v___x_4885_; size_t v___x_4886_; size_t v___x_4887_; lean_object* v___x_4888_; lean_object* v_snd_4889_; 
v___x_4884_ = lean_box(v___x_4883_);
v___x_4885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4885_, 0, v___x_4884_);
lean_ctor_set(v___x_4885_, 1, v___x_4881_);
v___x_4886_ = ((size_t)0ULL);
v___x_4887_ = lean_usize_of_nat(v___x_4882_);
v___x_4888_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v_sa_4879_, v___x_4886_, v___x_4887_, v___x_4885_);
v_snd_4889_ = lean_ctor_get(v___x_4888_, 1);
lean_inc(v_snd_4889_);
lean_dec_ref(v___x_4888_);
return v_snd_4889_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___redArg___boxed(lean_object* v_sa_4890_){
_start:
{
lean_object* v_res_4891_; 
v_res_4891_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_sa_4890_);
lean_dec_ref(v_sa_4890_);
return v_res_4891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems(lean_object* v_k_4892_, lean_object* v_sep_4893_, lean_object* v_sa_4894_){
_start:
{
lean_object* v___x_4895_; 
v___x_4895_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_sa_4894_);
return v___x_4895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_getElems___boxed(lean_object* v_k_4896_, lean_object* v_sep_4897_, lean_object* v_sa_4898_){
_start:
{
lean_object* v_res_4899_; 
v_res_4899_ = l_Lean_Syntax_TSepArray_getElems(v_k_4896_, v_sep_4897_, v_sa_4898_);
lean_dec_ref(v_sa_4898_);
lean_dec_ref(v_sep_4897_);
lean_dec(v_k_4896_);
return v_res_4899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___redArg(lean_object* v_sep_4900_, lean_object* v_sa_4901_, lean_object* v_e_4902_){
_start:
{
lean_object* v___x_4903_; lean_object* v___x_4904_; uint8_t v___x_4905_; 
v___x_4903_ = lean_array_get_size(v_sa_4901_);
v___x_4904_ = lean_unsigned_to_nat(0u);
v___x_4905_ = lean_nat_dec_eq(v___x_4903_, v___x_4904_);
if (v___x_4905_ == 0)
{
lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; 
v___x_4906_ = l_Lean_mkAtom(v_sep_4900_);
v___x_4907_ = lean_array_push(v_sa_4901_, v___x_4906_);
v___x_4908_ = lean_array_push(v___x_4907_, v_e_4902_);
return v___x_4908_;
}
else
{
lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; 
lean_dec_ref(v_sa_4901_);
lean_dec_ref(v_sep_4900_);
v___x_4909_ = lean_unsigned_to_nat(1u);
v___x_4910_ = lean_mk_empty_array_with_capacity(v___x_4909_);
v___x_4911_ = lean_array_push(v___x_4910_, v_e_4902_);
return v___x_4911_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push(lean_object* v_k_4912_, lean_object* v_sep_4913_, lean_object* v_sa_4914_, lean_object* v_e_4915_){
_start:
{
lean_object* v___x_4916_; 
v___x_4916_ = l_Lean_Syntax_TSepArray_push___redArg(v_sep_4913_, v_sa_4914_, v_e_4915_);
return v___x_4916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_TSepArray_push___boxed(lean_object* v_k_4917_, lean_object* v_sep_4918_, lean_object* v_sa_4919_, lean_object* v_e_4920_){
_start:
{
lean_object* v_res_4921_; 
v_res_4921_ = l_Lean_Syntax_TSepArray_push(v_k_4917_, v_sep_4918_, v_sa_4919_, v_e_4920_);
lean_dec(v_k_4917_);
return v_res_4921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg(){
_start:
{
lean_object* v___x_4923_; 
v___x_4923_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
return v___x_4923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___redArg___boxed(lean_object* v___dummy_4924_){
_start:
{
lean_object* v_res_4925_; 
v_res_4925_ = l_Lean_Syntax_instEmptyCollectionSepArray___redArg();
return v_res_4925_;
}
}
static lean_object* _init_l_Lean_Syntax_instEmptyCollectionSepArray___closed__0(void){
_start:
{
lean_object* v___x_4926_; 
v___x_4926_ = l_Lean_Syntax_instEmptyCollectionSepArray___redArg();
return v___x_4926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray(lean_object* v_sep_4927_){
_start:
{
lean_object* v___x_4928_; 
v___x_4928_ = lean_obj_once(&l_Lean_Syntax_instEmptyCollectionSepArray___closed__0, &l_Lean_Syntax_instEmptyCollectionSepArray___closed__0_once, _init_l_Lean_Syntax_instEmptyCollectionSepArray___closed__0);
return v___x_4928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionSepArray___boxed(lean_object* v_sep_4929_){
_start:
{
lean_object* v_res_4930_; 
v_res_4930_ = l_Lean_Syntax_instEmptyCollectionSepArray(v_sep_4929_);
lean_dec_ref(v_sep_4929_);
return v_res_4930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg(){
_start:
{
lean_object* v___x_4932_; 
v___x_4932_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
return v___x_4932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___redArg___boxed(lean_object* v___dummy_4933_){
_start:
{
lean_object* v_res_4934_; 
v_res_4934_ = l_Lean_Syntax_instEmptyCollectionTSepArray___redArg();
return v_res_4934_;
}
}
static lean_object* _init_l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0(void){
_start:
{
lean_object* v___x_4935_; 
v___x_4935_ = l_Lean_Syntax_instEmptyCollectionTSepArray___redArg();
return v___x_4935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray(lean_object* v_sep_4936_, lean_object* v_k_4937_){
_start:
{
lean_object* v___x_4938_; 
v___x_4938_ = lean_obj_once(&l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0, &l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0_once, _init_l_Lean_Syntax_instEmptyCollectionTSepArray___closed__0);
return v___x_4938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instEmptyCollectionTSepArray___boxed(lean_object* v_sep_4939_, lean_object* v_k_4940_){
_start:
{
lean_object* v_res_4941_; 
v_res_4941_ = l_Lean_Syntax_instEmptyCollectionTSepArray(v_sep_4939_, v_k_4940_);
lean_dec_ref(v_k_4940_);
lean_dec(v_sep_4939_);
return v_res_4941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0(lean_object* v_v_4942_){
_start:
{
lean_inc_ref(v_v_4942_);
return v_v_4942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0___boxed(lean_object* v_v_4943_){
_start:
{
lean_object* v_res_4944_; 
v_res_4944_ = l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___lam__0(v_v_4943_);
lean_dec_ref(v_v_4943_);
return v_res_4944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg(){
_start:
{
lean_object* v___f_4947_; 
v___f_4947_ = ((lean_object*)(l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___closed__0));
return v___f_4947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___boxed(lean_object* v___dummy_4948_){
_start:
{
lean_object* v_res_4949_; 
v_res_4949_ = l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg();
return v_res_4949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray(lean_object* v_k_4950_, lean_object* v_sep_4951_){
_start:
{
lean_object* v___f_4952_; 
v___f_4952_ = ((lean_object*)(l_Lean_Syntax_instCoeOutTSepArraySepArray___redArg___closed__0));
return v___f_4952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArraySepArray___boxed(lean_object* v_k_4953_, lean_object* v_sep_4954_){
_start:
{
lean_object* v_res_4955_; 
v_res_4955_ = l_Lean_Syntax_instCoeOutTSepArraySepArray(v_k_4953_, v_sep_4954_);
lean_dec_ref(v_sep_4954_);
lean_dec(v_k_4953_);
return v_res_4955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSepArrayTSyntaxArray(lean_object* v_k_4956_, lean_object* v_sep_4957_){
_start:
{
lean_object* v___x_4958_; 
v___x_4958_ = lean_alloc_closure((void*)(l_Lean_Syntax_TSepArray_getElems___boxed), 3, 2);
lean_closure_set(v___x_4958_, 0, v_k_4956_);
lean_closure_set(v___x_4958_, 1, v_sep_4957_);
return v___x_4958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__0(lean_object* v_inst_4959_, lean_object* v_x_4960_){
_start:
{
lean_object* v___x_4961_; 
v___x_4961_ = lean_apply_1(v_inst_4959_, v_x_4960_);
return v___x_4961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1(lean_object* v___f_4962_, lean_object* v_a_4963_){
_start:
{
lean_object* v___x_4964_; size_t v_sz_4965_; size_t v___x_4966_; lean_object* v___x_4967_; 
v___x_4964_ = ((lean_object*)(l_Array_getSepElems___redArg___closed__10));
v_sz_4965_ = lean_array_size(v_a_4963_);
v___x_4966_ = ((size_t)0ULL);
v___x_4967_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_4964_, v___f_4962_, v_sz_4965_, v___x_4966_, v_a_4963_);
return v___x_4967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg(lean_object* v_inst_4968_){
_start:
{
lean_object* v___f_4969_; lean_object* v___f_4970_; 
v___f_4969_ = lean_alloc_closure((void*)(l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4969_, 0, v_inst_4968_);
v___f_4970_ = lean_alloc_closure((void*)(l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4970_, 0, v___f_4969_);
return v___f_4970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax(lean_object* v_k_4971_, lean_object* v_k_x27_4972_, lean_object* v_inst_4973_){
_start:
{
lean_object* v___x_4974_; 
v___x_4974_ = l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___redArg(v_inst_4973_);
return v___x_4974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax___boxed(lean_object* v_k_4975_, lean_object* v_k_x27_4976_, lean_object* v_inst_4977_){
_start:
{
lean_object* v_res_4978_; 
v_res_4978_ = l_Lean_Syntax_instCoeTSyntaxArrayOfTSyntax(v_k_4975_, v_k_x27_4976_, v_inst_4977_);
lean_dec(v_k_x27_4976_);
lean_dec(v_k_4975_);
return v_res_4978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0(lean_object* v_a_4979_){
_start:
{
lean_inc_ref(v_a_4979_);
return v_a_4979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0___boxed(lean_object* v_a_4980_){
_start:
{
lean_object* v_res_4981_; 
v_res_4981_ = l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___lam__0(v_a_4980_);
lean_dec_ref(v_a_4980_);
return v_res_4981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg(){
_start:
{
lean_object* v___f_4984_; 
v___f_4984_ = ((lean_object*)(l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0));
return v___f_4984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___boxed(lean_object* v___dummy_4985_){
_start:
{
lean_object* v_res_4986_; 
v_res_4986_ = l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg();
return v_res_4986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray(lean_object* v_k_4987_){
_start:
{
lean_object* v___f_4988_; 
v___f_4988_ = ((lean_object*)(l_Lean_Syntax_instCoeOutTSyntaxArrayArray___redArg___closed__0));
return v___f_4988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeOutTSyntaxArrayArray___boxed(lean_object* v_k_4989_){
_start:
{
lean_object* v_res_4990_; 
v_res_4990_ = l_Lean_Syntax_instCoeOutTSyntaxArrayArray(v_k_4989_);
lean_dec(v_k_4989_);
return v_res_4990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0(lean_object* v_id_4997_){
_start:
{
lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v___x_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; lean_object* v___x_5005_; 
v___x_4998_ = ((lean_object*)(l_Lean_Syntax_instCoeIdentTSyntaxConsSyntaxNodeKindMkStr4Nil___lam__0___closed__1));
v___x_4999_ = lean_box(2);
v___x_5000_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__2));
v___x_5001_ = lean_unsigned_to_nat(2u);
v___x_5002_ = lean_mk_empty_array_with_capacity(v___x_5001_);
v___x_5003_ = lean_array_push(v___x_5002_, v_id_4997_);
v___x_5004_ = lean_array_push(v___x_5003_, v___x_5000_);
v___x_5005_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5005_, 0, v___x_4999_);
lean_ctor_set(v___x_5005_, 1, v___x_4998_);
lean_ctor_set(v___x_5005_, 2, v___x_5004_);
return v___x_5005_;
}
}
static lean_object* _init_l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1(void){
_start:
{
uint32_t v___x_5009_; lean_object* v___x_5010_; 
v___x_5009_ = 123;
v___x_5010_ = lean_box_uint32(v___x_5009_);
return v___x_5010_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(lean_object* v_s_5011_, lean_object* v_i_5012_){
_start:
{
lean_object* v___x_5013_; 
v___x_5013_ = l_Lean_Syntax_decodeQuotedChar(v_s_5011_, v_i_5012_);
if (lean_obj_tag(v___x_5013_) == 0)
{
uint32_t v_c_5014_; uint32_t v___x_5015_; uint8_t v___x_5016_; 
v_c_5014_ = lean_string_utf8_get(v_s_5011_, v_i_5012_);
v___x_5015_ = 123;
v___x_5016_ = lean_uint32_dec_eq(v_c_5014_, v___x_5015_);
if (v___x_5016_ == 0)
{
return v___x_5013_;
}
else
{
lean_object* v_i_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; 
v_i_5017_ = lean_string_utf8_next(v_s_5011_, v_i_5012_);
v___x_5018_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1;
v___x_5019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5019_, 0, v___x_5018_);
lean_ctor_set(v___x_5019_, 1, v_i_5017_);
v___x_5020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5020_, 0, v___x_5019_);
return v___x_5020_;
}
}
else
{
return v___x_5013_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed(lean_object* v_s_5021_, lean_object* v_i_5022_){
_start:
{
lean_object* v_res_5023_; 
v_res_5023_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(v_s_5021_, v_i_5022_);
lean_dec(v_i_5022_);
lean_dec_ref(v_s_5021_);
return v_res_5023_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit_loop(lean_object* v_s_5024_, lean_object* v_i_5025_, lean_object* v_acc_5026_){
_start:
{
uint32_t v_c_5027_; uint32_t v___x_5028_; uint8_t v___x_5029_; 
v_c_5027_ = lean_string_utf8_get(v_s_5024_, v_i_5025_);
v___x_5028_ = 34;
v___x_5029_ = lean_uint32_dec_eq(v_c_5027_, v___x_5028_);
if (v___x_5029_ == 0)
{
uint32_t v___x_5030_; uint8_t v___x_5031_; 
v___x_5030_ = 123;
v___x_5031_ = lean_uint32_dec_eq(v_c_5027_, v___x_5030_);
if (v___x_5031_ == 0)
{
lean_object* v_i_5032_; uint8_t v___x_5033_; 
v_i_5032_ = lean_string_utf8_next(v_s_5024_, v_i_5025_);
lean_dec(v_i_5025_);
v___x_5033_ = lean_string_utf8_at_end(v_s_5024_, v_i_5032_);
if (v___x_5033_ == 0)
{
uint32_t v___x_5034_; uint8_t v___x_5035_; 
v___x_5034_ = 92;
v___x_5035_ = lean_uint32_dec_eq(v_c_5027_, v___x_5034_);
if (v___x_5035_ == 0)
{
lean_object* v___x_5036_; 
v___x_5036_ = lean_string_push(v_acc_5026_, v_c_5027_);
v_i_5025_ = v_i_5032_;
v_acc_5026_ = v___x_5036_;
goto _start;
}
else
{
lean_object* v___x_5038_; 
v___x_5038_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar(v_s_5024_, v_i_5032_);
if (lean_obj_tag(v___x_5038_) == 1)
{
lean_object* v_val_5039_; lean_object* v_fst_5040_; lean_object* v_snd_5041_; uint32_t v___x_5042_; lean_object* v___x_5043_; 
lean_dec(v_i_5032_);
v_val_5039_ = lean_ctor_get(v___x_5038_, 0);
lean_inc(v_val_5039_);
lean_dec_ref_known(v___x_5038_, 1);
v_fst_5040_ = lean_ctor_get(v_val_5039_, 0);
lean_inc(v_fst_5040_);
v_snd_5041_ = lean_ctor_get(v_val_5039_, 1);
lean_inc(v_snd_5041_);
lean_dec(v_val_5039_);
v___x_5042_ = lean_unbox_uint32(v_fst_5040_);
lean_dec(v_fst_5040_);
v___x_5043_ = lean_string_push(v_acc_5026_, v___x_5042_);
v_i_5025_ = v_snd_5041_;
v_acc_5026_ = v___x_5043_;
goto _start;
}
else
{
lean_object* v___x_5045_; 
lean_dec(v___x_5038_);
lean_inc_ref(v_s_5024_);
v___x_5045_ = l_Lean_Syntax_decodeStringGap(v_s_5024_, v_i_5032_);
lean_dec(v_i_5032_);
if (lean_obj_tag(v___x_5045_) == 1)
{
lean_object* v_val_5046_; 
v_val_5046_ = lean_ctor_get(v___x_5045_, 0);
lean_inc(v_val_5046_);
lean_dec_ref_known(v___x_5045_, 1);
v_i_5025_ = v_val_5046_;
goto _start;
}
else
{
lean_object* v___x_5048_; 
lean_dec(v___x_5045_);
lean_dec_ref(v_acc_5026_);
lean_dec_ref(v_s_5024_);
v___x_5048_ = lean_box(0);
return v___x_5048_;
}
}
}
}
else
{
lean_object* v___x_5049_; 
lean_dec(v_i_5032_);
lean_dec_ref(v_acc_5026_);
lean_dec_ref(v_s_5024_);
v___x_5049_ = lean_box(0);
return v___x_5049_;
}
}
else
{
lean_object* v___x_5050_; 
lean_dec(v_i_5025_);
lean_dec_ref(v_s_5024_);
v___x_5050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5050_, 0, v_acc_5026_);
return v___x_5050_;
}
}
else
{
lean_object* v___x_5051_; 
lean_dec(v_i_5025_);
lean_dec_ref(v_s_5024_);
v___x_5051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5051_, 0, v_acc_5026_);
return v___x_5051_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit(lean_object* v_s_5052_){
_start:
{
lean_object* v___x_5053_; lean_object* v___x_5054_; lean_object* v___x_5055_; 
v___x_5053_ = lean_unsigned_to_nat(1u);
v___x_5054_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_5055_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit_loop(v_s_5052_, v___x_5053_, v___x_5054_);
return v___x_5055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f(lean_object* v_stx_5059_){
_start:
{
lean_object* v___x_5060_; lean_object* v___x_5061_; 
v___x_5060_ = ((lean_object*)(l_Lean_Syntax_isInterpolatedStrLit_x3f___closed__1));
v___x_5061_ = l_Lean_Syntax_isLit_x3f(v___x_5060_, v_stx_5059_);
if (lean_obj_tag(v___x_5061_) == 0)
{
return v___x_5061_;
}
else
{
lean_object* v_val_5062_; lean_object* v___x_5063_; 
v_val_5062_ = lean_ctor_get(v___x_5061_, 0);
lean_inc(v_val_5062_);
lean_dec_ref_known(v___x_5061_, 1);
v___x_5063_ = l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrLit(v_val_5062_);
return v___x_5063_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_isInterpolatedStrLit_x3f___boxed(lean_object* v_stx_5064_){
_start:
{
lean_object* v_res_5065_; 
v_res_5065_ = l_Lean_Syntax_isInterpolatedStrLit_x3f(v_stx_5064_);
lean_dec(v_stx_5064_);
return v_res_5065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs(lean_object* v_stx_5066_){
_start:
{
lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; uint8_t v___x_5071_; 
v___x_5067_ = l_Lean_Syntax_getArgs(v_stx_5066_);
v___x_5068_ = lean_unsigned_to_nat(0u);
v___x_5069_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_5070_ = lean_array_get_size(v___x_5067_);
v___x_5071_ = lean_nat_dec_lt(v___x_5068_, v___x_5070_);
if (v___x_5071_ == 0)
{
lean_dec_ref(v___x_5067_);
return v___x_5069_;
}
else
{
lean_object* v___x_5072_; lean_object* v___x_5073_; size_t v___x_5074_; size_t v___x_5075_; lean_object* v___x_5076_; lean_object* v_snd_5077_; 
v___x_5072_ = lean_box(v___x_5071_);
v___x_5073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5073_, 0, v___x_5072_);
lean_ctor_set(v___x_5073_, 1, v___x_5069_);
v___x_5074_ = ((size_t)0ULL);
v___x_5075_ = lean_usize_of_nat(v___x_5070_);
v___x_5076_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_SepArray_getElems_spec__0(v___x_5067_, v___x_5074_, v___x_5075_, v___x_5073_);
lean_dec_ref(v___x_5067_);
v_snd_5077_ = lean_ctor_get(v___x_5076_, 1);
lean_inc(v_snd_5077_);
lean_dec_ref(v___x_5076_);
return v_snd_5077_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_getSepArgs___boxed(lean_object* v_stx_5078_){
_start:
{
lean_object* v_res_5079_; 
v_res_5079_ = l_Lean_Syntax_getSepArgs(v_stx_5078_);
lean_dec(v_stx_5078_);
return v_res_5079_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(lean_object* v_mkAppend_5080_, lean_object* v_mkElem_5081_, lean_object* v_mkLit_5082_, lean_object* v_as_5083_, size_t v_sz_5084_, size_t v_i_5085_, lean_object* v_b_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_){
_start:
{
lean_object* v_a_5090_; lean_object* v_a_5091_; lean_object* v_elem_5096_; lean_object* v___y_5097_; lean_object* v___y_5098_; uint8_t v___x_5103_; 
v___x_5103_ = lean_usize_dec_lt(v_i_5085_, v_sz_5084_);
if (v___x_5103_ == 0)
{
lean_object* v___x_5104_; 
lean_dec_ref(v_mkLit_5082_);
lean_dec_ref(v_mkElem_5081_);
lean_dec_ref(v_mkAppend_5080_);
v___x_5104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5104_, 0, v_b_5086_);
lean_ctor_set(v___x_5104_, 1, v___y_5088_);
return v___x_5104_;
}
else
{
lean_object* v_a_5105_; lean_object* v___x_5106_; 
v_a_5105_ = lean_array_uget_borrowed(v_as_5083_, v_i_5085_);
v___x_5106_ = l_Lean_Syntax_isInterpolatedStrLit_x3f(v_a_5105_);
if (lean_obj_tag(v___x_5106_) == 0)
{
lean_object* v_methods_5107_; lean_object* v_quotContext_5108_; lean_object* v_currMacroScope_5109_; lean_object* v_currRecDepth_5110_; lean_object* v_maxRecDepth_5111_; lean_object* v_ref_5112_; lean_object* v_ref_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; 
v_methods_5107_ = lean_ctor_get(v___y_5087_, 0);
v_quotContext_5108_ = lean_ctor_get(v___y_5087_, 1);
v_currMacroScope_5109_ = lean_ctor_get(v___y_5087_, 2);
v_currRecDepth_5110_ = lean_ctor_get(v___y_5087_, 3);
v_maxRecDepth_5111_ = lean_ctor_get(v___y_5087_, 4);
v_ref_5112_ = lean_ctor_get(v___y_5087_, 5);
v_ref_5113_ = l_Lean_replaceRef(v_a_5105_, v_ref_5112_);
lean_inc(v_maxRecDepth_5111_);
lean_inc(v_currRecDepth_5110_);
lean_inc(v_currMacroScope_5109_);
lean_inc(v_quotContext_5108_);
lean_inc(v_methods_5107_);
v___x_5114_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5114_, 0, v_methods_5107_);
lean_ctor_set(v___x_5114_, 1, v_quotContext_5108_);
lean_ctor_set(v___x_5114_, 2, v_currMacroScope_5109_);
lean_ctor_set(v___x_5114_, 3, v_currRecDepth_5110_);
lean_ctor_set(v___x_5114_, 4, v_maxRecDepth_5111_);
lean_ctor_set(v___x_5114_, 5, v_ref_5113_);
lean_inc_ref(v_mkElem_5081_);
lean_inc(v_a_5105_);
v___x_5115_ = lean_apply_3(v_mkElem_5081_, v_a_5105_, v___x_5114_, v___y_5088_);
if (lean_obj_tag(v___x_5115_) == 0)
{
lean_object* v_a_5116_; lean_object* v_a_5117_; 
v_a_5116_ = lean_ctor_get(v___x_5115_, 0);
lean_inc(v_a_5116_);
v_a_5117_ = lean_ctor_get(v___x_5115_, 1);
lean_inc(v_a_5117_);
lean_dec_ref_known(v___x_5115_, 2);
v_elem_5096_ = v_a_5116_;
v___y_5097_ = v___y_5087_;
v___y_5098_ = v_a_5117_;
goto v___jp_5095_;
}
else
{
lean_dec(v_b_5086_);
lean_dec_ref(v_mkLit_5082_);
lean_dec_ref(v_mkElem_5081_);
lean_dec_ref(v_mkAppend_5080_);
return v___x_5115_;
}
}
else
{
lean_object* v_val_5118_; uint8_t v___x_5119_; 
v_val_5118_ = lean_ctor_get(v___x_5106_, 0);
lean_inc_n(v_val_5118_, 2);
lean_dec_ref_known(v___x_5106_, 1);
v___x_5119_ = lean_string_isempty(v_val_5118_);
if (v___x_5119_ == 0)
{
lean_object* v_methods_5120_; lean_object* v_quotContext_5121_; lean_object* v_currMacroScope_5122_; lean_object* v_currRecDepth_5123_; lean_object* v_maxRecDepth_5124_; lean_object* v_ref_5125_; lean_object* v_ref_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; 
v_methods_5120_ = lean_ctor_get(v___y_5087_, 0);
v_quotContext_5121_ = lean_ctor_get(v___y_5087_, 1);
v_currMacroScope_5122_ = lean_ctor_get(v___y_5087_, 2);
v_currRecDepth_5123_ = lean_ctor_get(v___y_5087_, 3);
v_maxRecDepth_5124_ = lean_ctor_get(v___y_5087_, 4);
v_ref_5125_ = lean_ctor_get(v___y_5087_, 5);
v_ref_5126_ = l_Lean_replaceRef(v_a_5105_, v_ref_5125_);
lean_inc(v_maxRecDepth_5124_);
lean_inc(v_currRecDepth_5123_);
lean_inc(v_currMacroScope_5122_);
lean_inc(v_quotContext_5121_);
lean_inc(v_methods_5120_);
v___x_5127_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5127_, 0, v_methods_5120_);
lean_ctor_set(v___x_5127_, 1, v_quotContext_5121_);
lean_ctor_set(v___x_5127_, 2, v_currMacroScope_5122_);
lean_ctor_set(v___x_5127_, 3, v_currRecDepth_5123_);
lean_ctor_set(v___x_5127_, 4, v_maxRecDepth_5124_);
lean_ctor_set(v___x_5127_, 5, v_ref_5126_);
lean_inc_ref(v_mkLit_5082_);
v___x_5128_ = lean_apply_3(v_mkLit_5082_, v_val_5118_, v___x_5127_, v___y_5088_);
if (lean_obj_tag(v___x_5128_) == 0)
{
lean_object* v_a_5129_; lean_object* v_a_5130_; 
v_a_5129_ = lean_ctor_get(v___x_5128_, 0);
lean_inc(v_a_5129_);
v_a_5130_ = lean_ctor_get(v___x_5128_, 1);
lean_inc(v_a_5130_);
lean_dec_ref_known(v___x_5128_, 2);
v_elem_5096_ = v_a_5129_;
v___y_5097_ = v___y_5087_;
v___y_5098_ = v_a_5130_;
goto v___jp_5095_;
}
else
{
lean_dec(v_b_5086_);
lean_dec_ref(v_mkLit_5082_);
lean_dec_ref(v_mkElem_5081_);
lean_dec_ref(v_mkAppend_5080_);
return v___x_5128_;
}
}
else
{
lean_dec(v_val_5118_);
v_a_5090_ = v_b_5086_;
v_a_5091_ = v___y_5088_;
goto v___jp_5089_;
}
}
}
v___jp_5089_:
{
size_t v___x_5092_; size_t v___x_5093_; 
v___x_5092_ = ((size_t)1ULL);
v___x_5093_ = lean_usize_add(v_i_5085_, v___x_5092_);
v_i_5085_ = v___x_5093_;
v_b_5086_ = v_a_5090_;
v___y_5088_ = v_a_5091_;
goto _start;
}
v___jp_5095_:
{
uint8_t v___x_5099_; 
v___x_5099_ = l_Lean_Syntax_isMissing(v_b_5086_);
if (v___x_5099_ == 0)
{
lean_object* v___x_5100_; 
lean_inc_ref(v_mkAppend_5080_);
lean_inc_ref(v___y_5097_);
v___x_5100_ = lean_apply_4(v_mkAppend_5080_, v_b_5086_, v_elem_5096_, v___y_5097_, v___y_5098_);
if (lean_obj_tag(v___x_5100_) == 0)
{
lean_object* v_a_5101_; lean_object* v_a_5102_; 
v_a_5101_ = lean_ctor_get(v___x_5100_, 0);
lean_inc(v_a_5101_);
v_a_5102_ = lean_ctor_get(v___x_5100_, 1);
lean_inc(v_a_5102_);
lean_dec_ref_known(v___x_5100_, 2);
v_a_5090_ = v_a_5101_;
v_a_5091_ = v_a_5102_;
goto v___jp_5089_;
}
else
{
lean_dec_ref(v_mkLit_5082_);
lean_dec_ref(v_mkElem_5081_);
lean_dec_ref(v_mkAppend_5080_);
return v___x_5100_;
}
}
else
{
lean_dec(v_b_5086_);
v_a_5090_ = v_elem_5096_;
v_a_5091_ = v___y_5098_;
goto v___jp_5089_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0___boxed(lean_object* v_mkAppend_5131_, lean_object* v_mkElem_5132_, lean_object* v_mkLit_5133_, lean_object* v_as_5134_, lean_object* v_sz_5135_, lean_object* v_i_5136_, lean_object* v_b_5137_, lean_object* v___y_5138_, lean_object* v___y_5139_){
_start:
{
size_t v_sz_boxed_5140_; size_t v_i_boxed_5141_; lean_object* v_res_5142_; 
v_sz_boxed_5140_ = lean_unbox_usize(v_sz_5135_);
lean_dec(v_sz_5135_);
v_i_boxed_5141_ = lean_unbox_usize(v_i_5136_);
lean_dec(v_i_5136_);
v_res_5142_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(v_mkAppend_5131_, v_mkElem_5132_, v_mkLit_5133_, v_as_5134_, v_sz_boxed_5140_, v_i_boxed_5141_, v_b_5137_, v___y_5138_, v___y_5139_);
lean_dec_ref(v___y_5138_);
lean_dec_ref(v_as_5134_);
return v_res_5142_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks(lean_object* v_chunks_5143_, lean_object* v_mkAppend_5144_, lean_object* v_mkElem_5145_, lean_object* v_mkLit_5146_, lean_object* v_a_5147_, lean_object* v_a_5148_){
_start:
{
lean_object* v_result_5149_; size_t v_sz_5150_; size_t v___x_5151_; lean_object* v___x_5152_; 
v_result_5149_ = lean_box(0);
v_sz_5150_ = lean_array_size(v_chunks_5143_);
v___x_5151_ = ((size_t)0ULL);
lean_inc_ref(v_mkLit_5146_);
v___x_5152_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_expandInterpolatedStrChunks_spec__0(v_mkAppend_5144_, v_mkElem_5145_, v_mkLit_5146_, v_chunks_5143_, v_sz_5150_, v___x_5151_, v_result_5149_, v_a_5147_, v_a_5148_);
if (lean_obj_tag(v___x_5152_) == 0)
{
lean_object* v_a_5153_; lean_object* v_a_5154_; uint8_t v___x_5155_; 
v_a_5153_ = lean_ctor_get(v___x_5152_, 0);
v_a_5154_ = lean_ctor_get(v___x_5152_, 1);
v___x_5155_ = l_Lean_Syntax_isMissing(v_a_5153_);
if (v___x_5155_ == 0)
{
lean_dec_ref(v_mkLit_5146_);
return v___x_5152_;
}
else
{
lean_object* v___x_5156_; lean_object* v___x_5157_; 
lean_inc(v_a_5154_);
lean_dec_ref_known(v___x_5152_, 2);
v___x_5156_ = ((lean_object*)(l_Lean_versionString___closed__0));
lean_inc_ref(v_a_5147_);
v___x_5157_ = lean_apply_3(v_mkLit_5146_, v___x_5156_, v_a_5147_, v_a_5154_);
return v___x_5157_;
}
}
else
{
lean_dec_ref(v_mkLit_5146_);
return v___x_5152_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStrChunks___boxed(lean_object* v_chunks_5158_, lean_object* v_mkAppend_5159_, lean_object* v_mkElem_5160_, lean_object* v_mkLit_5161_, lean_object* v_a_5162_, lean_object* v_a_5163_){
_start:
{
lean_object* v_res_5164_; 
v_res_5164_ = l_Lean_TSyntax_expandInterpolatedStrChunks(v_chunks_5158_, v_mkAppend_5159_, v_mkElem_5160_, v_mkLit_5161_, v_a_5162_, v_a_5163_);
lean_dec_ref(v_a_5162_);
lean_dec_ref(v_chunks_5158_);
return v_res_5164_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0(lean_object* v_a_5169_, lean_object* v_b_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_){
_start:
{
lean_object* v_ref_5173_; uint8_t v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; 
v_ref_5173_ = lean_ctor_get(v___y_5171_, 5);
v___x_5174_ = 0;
v___x_5175_ = l_Lean_SourceInfo_fromRef(v_ref_5173_, v___x_5174_);
v___x_5176_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__1));
v___x_5177_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___lam__0___closed__2));
lean_inc(v___x_5175_);
v___x_5178_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5178_, 0, v___x_5175_);
lean_ctor_set(v___x_5178_, 1, v___x_5177_);
v___x_5179_ = l_Lean_Syntax_node3(v___x_5175_, v___x_5176_, v_a_5169_, v___x_5178_, v_b_5170_);
v___x_5180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5180_, 0, v___x_5179_);
lean_ctor_set(v___x_5180_, 1, v___y_5172_);
return v___x_5180_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__0___boxed(lean_object* v_a_5181_, lean_object* v_b_5182_, lean_object* v___y_5183_, lean_object* v___y_5184_){
_start:
{
lean_object* v_res_5185_; 
v_res_5185_ = l_Lean_TSyntax_expandInterpolatedStr___lam__0(v_a_5181_, v_b_5182_, v___y_5183_, v___y_5184_);
lean_dec_ref(v___y_5183_);
return v_res_5185_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1(lean_object* v_ofInterpFn_5186_, lean_object* v_a_5187_, lean_object* v___y_5188_, lean_object* v___y_5189_){
_start:
{
lean_object* v_ref_5190_; uint8_t v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; 
v_ref_5190_ = lean_ctor_get(v___y_5188_, 5);
v___x_5191_ = 0;
v___x_5192_ = l_Lean_SourceInfo_fromRef(v_ref_5190_, v___x_5191_);
v___x_5193_ = ((lean_object*)(l_Lean_Syntax_mkApp___closed__1));
v___x_5194_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
lean_inc(v___x_5192_);
v___x_5195_ = l_Lean_Syntax_node1(v___x_5192_, v___x_5194_, v_a_5187_);
v___x_5196_ = l_Lean_Syntax_node2(v___x_5192_, v___x_5193_, v_ofInterpFn_5186_, v___x_5195_);
v___x_5197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5197_, 0, v___x_5196_);
lean_ctor_set(v___x_5197_, 1, v___y_5189_);
return v___x_5197_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__1___boxed(lean_object* v_ofInterpFn_5198_, lean_object* v_a_5199_, lean_object* v___y_5200_, lean_object* v___y_5201_){
_start:
{
lean_object* v_res_5202_; 
v_res_5202_ = l_Lean_TSyntax_expandInterpolatedStr___lam__1(v_ofInterpFn_5198_, v_a_5199_, v___y_5200_, v___y_5201_);
lean_dec_ref(v___y_5200_);
return v_res_5202_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2(lean_object* v_ofLitFn_5203_, lean_object* v_s_5204_, lean_object* v___y_5205_, lean_object* v___y_5206_){
_start:
{
lean_object* v_ref_5207_; uint8_t v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; 
v_ref_5207_ = lean_ctor_get(v___y_5205_, 5);
v___x_5208_ = 0;
v___x_5209_ = l_Lean_SourceInfo_fromRef(v_ref_5207_, v___x_5208_);
v___x_5210_ = ((lean_object*)(l_Lean_Syntax_mkApp___closed__1));
v___x_5211_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_5212_ = lean_box(2);
v___x_5213_ = l_Lean_Syntax_mkStrLit(v_s_5204_, v___x_5212_);
lean_inc(v___x_5209_);
v___x_5214_ = l_Lean_Syntax_node1(v___x_5209_, v___x_5211_, v___x_5213_);
v___x_5215_ = l_Lean_Syntax_node2(v___x_5209_, v___x_5210_, v_ofLitFn_5203_, v___x_5214_);
v___x_5216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5216_, 0, v___x_5215_);
lean_ctor_set(v___x_5216_, 1, v___y_5206_);
return v___x_5216_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___lam__2___boxed(lean_object* v_ofLitFn_5217_, lean_object* v_s_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_){
_start:
{
lean_object* v_res_5221_; 
v_res_5221_ = l_Lean_TSyntax_expandInterpolatedStr___lam__2(v_ofLitFn_5217_, v_s_5218_, v___y_5219_, v___y_5220_);
lean_dec_ref(v___y_5219_);
return v_res_5221_;
}
}
static lean_object* _init_l_Lean_TSyntax_expandInterpolatedStr___closed__8(void){
_start:
{
lean_object* v___x_5239_; lean_object* v___x_5240_; 
v___x_5239_ = ((lean_object*)(l_Lean_versionString___closed__0));
v___x_5240_ = l_String_toRawSubstring_x27(v___x_5239_);
return v___x_5240_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr(lean_object* v_interpStr_5261_, lean_object* v_type_5262_, lean_object* v_ofInterpFn_5263_, lean_object* v_ofLitFn_5264_, lean_object* v_a_5265_, lean_object* v_a_5266_){
_start:
{
lean_object* v___f_5267_; lean_object* v___f_5268_; lean_object* v___f_5269_; lean_object* v___x_5270_; lean_object* v___x_5271_; 
v___f_5267_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__0));
v___f_5268_ = lean_alloc_closure((void*)(l_Lean_TSyntax_expandInterpolatedStr___lam__1___boxed), 4, 1);
lean_closure_set(v___f_5268_, 0, v_ofInterpFn_5263_);
v___f_5269_ = lean_alloc_closure((void*)(l_Lean_TSyntax_expandInterpolatedStr___lam__2___boxed), 4, 1);
lean_closure_set(v___f_5269_, 0, v_ofLitFn_5264_);
v___x_5270_ = l_Lean_Syntax_getArgs(v_interpStr_5261_);
v___x_5271_ = l_Lean_TSyntax_expandInterpolatedStrChunks(v___x_5270_, v___f_5267_, v___f_5268_, v___f_5269_, v_a_5265_, v_a_5266_);
lean_dec_ref(v___x_5270_);
if (lean_obj_tag(v___x_5271_) == 0)
{
lean_object* v_a_5272_; lean_object* v_a_5273_; lean_object* v___x_5275_; uint8_t v_isShared_5276_; uint8_t v_isSharedCheck_5304_; 
v_a_5272_ = lean_ctor_get(v___x_5271_, 0);
v_a_5273_ = lean_ctor_get(v___x_5271_, 1);
v_isSharedCheck_5304_ = !lean_is_exclusive(v___x_5271_);
if (v_isSharedCheck_5304_ == 0)
{
v___x_5275_ = v___x_5271_;
v_isShared_5276_ = v_isSharedCheck_5304_;
goto v_resetjp_5274_;
}
else
{
lean_inc(v_a_5273_);
lean_inc(v_a_5272_);
lean_dec(v___x_5271_);
v___x_5275_ = lean_box(0);
v_isShared_5276_ = v_isSharedCheck_5304_;
goto v_resetjp_5274_;
}
v_resetjp_5274_:
{
lean_object* v_quotContext_5277_; lean_object* v_currMacroScope_5278_; lean_object* v_ref_5279_; uint8_t v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5302_; 
v_quotContext_5277_ = lean_ctor_get(v_a_5265_, 1);
v_currMacroScope_5278_ = lean_ctor_get(v_a_5265_, 2);
v_ref_5279_ = lean_ctor_get(v_a_5265_, 5);
v___x_5280_ = 0;
v___x_5281_ = l_Lean_SourceInfo_fromRef(v_ref_5279_, v___x_5280_);
v___x_5282_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__2));
v___x_5283_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__4));
v___x_5284_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__5));
lean_inc_n(v___x_5281_, 7);
v___x_5285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5285_, 0, v___x_5281_);
lean_ctor_set(v___x_5285_, 1, v___x_5284_);
v___x_5286_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__7));
v___x_5287_ = lean_obj_once(&l_Lean_TSyntax_expandInterpolatedStr___closed__8, &l_Lean_TSyntax_expandInterpolatedStr___closed__8_once, _init_l_Lean_TSyntax_expandInterpolatedStr___closed__8);
v___x_5288_ = lean_box(0);
lean_inc(v_currMacroScope_5278_);
lean_inc(v_quotContext_5277_);
v___x_5289_ = l_Lean_addMacroScope(v_quotContext_5277_, v___x_5288_, v_currMacroScope_5278_);
v___x_5290_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__16));
v___x_5291_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5291_, 0, v___x_5281_);
lean_ctor_set(v___x_5291_, 1, v___x_5287_);
lean_ctor_set(v___x_5291_, 2, v___x_5289_);
lean_ctor_set(v___x_5291_, 3, v___x_5290_);
v___x_5292_ = l_Lean_Syntax_node1(v___x_5281_, v___x_5286_, v___x_5291_);
v___x_5293_ = l_Lean_Syntax_node2(v___x_5281_, v___x_5283_, v___x_5285_, v___x_5292_);
v___x_5294_ = ((lean_object*)(l_Lean_toolchain___closed__0));
v___x_5295_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5295_, 0, v___x_5281_);
lean_ctor_set(v___x_5295_, 1, v___x_5294_);
v___x_5296_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_5297_ = l_Lean_Syntax_node1(v___x_5281_, v___x_5296_, v_type_5262_);
v___x_5298_ = ((lean_object*)(l_Lean_TSyntax_expandInterpolatedStr___closed__17));
v___x_5299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5299_, 0, v___x_5281_);
lean_ctor_set(v___x_5299_, 1, v___x_5298_);
v___x_5300_ = l_Lean_Syntax_node5(v___x_5281_, v___x_5282_, v___x_5293_, v_a_5272_, v___x_5295_, v___x_5297_, v___x_5299_);
if (v_isShared_5276_ == 0)
{
lean_ctor_set(v___x_5275_, 0, v___x_5300_);
v___x_5302_ = v___x_5275_;
goto v_reusejp_5301_;
}
else
{
lean_object* v_reuseFailAlloc_5303_; 
v_reuseFailAlloc_5303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5303_, 0, v___x_5300_);
lean_ctor_set(v_reuseFailAlloc_5303_, 1, v_a_5273_);
v___x_5302_ = v_reuseFailAlloc_5303_;
goto v_reusejp_5301_;
}
v_reusejp_5301_:
{
return v___x_5302_;
}
}
}
else
{
lean_object* v_a_5305_; lean_object* v_a_5306_; lean_object* v___x_5308_; uint8_t v_isShared_5309_; uint8_t v_isSharedCheck_5313_; 
lean_dec(v_type_5262_);
v_a_5305_ = lean_ctor_get(v___x_5271_, 0);
v_a_5306_ = lean_ctor_get(v___x_5271_, 1);
v_isSharedCheck_5313_ = !lean_is_exclusive(v___x_5271_);
if (v_isSharedCheck_5313_ == 0)
{
v___x_5308_ = v___x_5271_;
v_isShared_5309_ = v_isSharedCheck_5313_;
goto v_resetjp_5307_;
}
else
{
lean_inc(v_a_5306_);
lean_inc(v_a_5305_);
lean_dec(v___x_5271_);
v___x_5308_ = lean_box(0);
v_isShared_5309_ = v_isSharedCheck_5313_;
goto v_resetjp_5307_;
}
v_resetjp_5307_:
{
lean_object* v___x_5311_; 
if (v_isShared_5309_ == 0)
{
v___x_5311_ = v___x_5308_;
goto v_reusejp_5310_;
}
else
{
lean_object* v_reuseFailAlloc_5312_; 
v_reuseFailAlloc_5312_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5312_, 0, v_a_5305_);
lean_ctor_set(v_reuseFailAlloc_5312_, 1, v_a_5306_);
v___x_5311_ = v_reuseFailAlloc_5312_;
goto v_reusejp_5310_;
}
v_reusejp_5310_:
{
return v___x_5311_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_expandInterpolatedStr___boxed(lean_object* v_interpStr_5314_, lean_object* v_type_5315_, lean_object* v_ofInterpFn_5316_, lean_object* v_ofLitFn_5317_, lean_object* v_a_5318_, lean_object* v_a_5319_){
_start:
{
lean_object* v_res_5320_; 
v_res_5320_ = l_Lean_TSyntax_expandInterpolatedStr(v_interpStr_5314_, v_type_5315_, v_ofInterpFn_5316_, v_ofLitFn_5317_, v_a_5318_, v_a_5319_);
lean_dec_ref(v_a_5318_);
lean_dec(v_interpStr_5314_);
return v_res_5320_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString(lean_object* v_stx_5321_){
_start:
{
lean_object* v___x_5322_; lean_object* v___x_5323_; 
v___x_5322_ = lean_unsigned_to_nat(1u);
v___x_5323_ = l_Lean_Syntax_getArg(v_stx_5321_, v___x_5322_);
if (lean_obj_tag(v___x_5323_) == 1)
{
lean_object* v_kind_5324_; 
v_kind_5324_ = lean_ctor_get(v___x_5323_, 1);
lean_inc(v_kind_5324_);
if (lean_obj_tag(v_kind_5324_) == 1)
{
lean_object* v_pre_5325_; 
v_pre_5325_ = lean_ctor_get(v_kind_5324_, 0);
lean_inc(v_pre_5325_);
if (lean_obj_tag(v_pre_5325_) == 1)
{
lean_object* v_pre_5326_; 
v_pre_5326_ = lean_ctor_get(v_pre_5325_, 0);
lean_inc(v_pre_5326_);
if (lean_obj_tag(v_pre_5326_) == 1)
{
lean_object* v_pre_5327_; 
v_pre_5327_ = lean_ctor_get(v_pre_5326_, 0);
lean_inc(v_pre_5327_);
if (lean_obj_tag(v_pre_5327_) == 1)
{
lean_object* v_pre_5328_; 
v_pre_5328_ = lean_ctor_get(v_pre_5327_, 0);
if (lean_obj_tag(v_pre_5328_) == 0)
{
lean_object* v_args_5329_; lean_object* v_str_5330_; lean_object* v_str_5331_; lean_object* v_str_5332_; lean_object* v_str_5333_; lean_object* v___x_5334_; uint8_t v___x_5335_; 
v_args_5329_ = lean_ctor_get(v___x_5323_, 2);
lean_inc_ref(v_args_5329_);
lean_dec_ref_known(v___x_5323_, 3);
v_str_5330_ = lean_ctor_get(v_kind_5324_, 1);
lean_inc_ref(v_str_5330_);
lean_dec_ref_known(v_kind_5324_, 2);
v_str_5331_ = lean_ctor_get(v_pre_5325_, 1);
lean_inc_ref(v_str_5331_);
lean_dec_ref_known(v_pre_5325_, 2);
v_str_5332_ = lean_ctor_get(v_pre_5326_, 1);
lean_inc_ref(v_str_5332_);
lean_dec_ref_known(v_pre_5326_, 2);
v_str_5333_ = lean_ctor_get(v_pre_5327_, 1);
lean_inc_ref(v_str_5333_);
lean_dec_ref_known(v_pre_5327_, 2);
v___x_5334_ = ((lean_object*)(l_Lean_expandMacros___lam__0___closed__0));
v___x_5335_ = lean_string_dec_eq(v_str_5333_, v___x_5334_);
lean_dec_ref(v_str_5333_);
if (v___x_5335_ == 0)
{
lean_object* v___x_5336_; 
lean_dec_ref(v_str_5332_);
lean_dec_ref(v_str_5331_);
lean_dec_ref(v_str_5330_);
lean_dec_ref(v_args_5329_);
v___x_5336_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5336_;
}
else
{
lean_object* v___x_5337_; uint8_t v___x_5338_; 
v___x_5337_ = ((lean_object*)(l_Lean_expandMacros___lam__0___closed__1));
v___x_5338_ = lean_string_dec_eq(v_str_5332_, v___x_5337_);
lean_dec_ref(v_str_5332_);
if (v___x_5338_ == 0)
{
lean_object* v___x_5339_; 
lean_dec_ref(v_str_5331_);
lean_dec_ref(v_str_5330_);
lean_dec_ref(v_args_5329_);
v___x_5339_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5339_;
}
else
{
lean_object* v___x_5340_; uint8_t v___x_5341_; 
v___x_5340_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__0));
v___x_5341_ = lean_string_dec_eq(v_str_5331_, v___x_5340_);
lean_dec_ref(v_str_5331_);
if (v___x_5341_ == 0)
{
lean_object* v___x_5342_; 
lean_dec_ref(v_str_5330_);
lean_dec_ref(v_args_5329_);
v___x_5342_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5342_;
}
else
{
lean_object* v___x_5343_; uint8_t v___x_5344_; 
v___x_5343_ = ((lean_object*)(l_Lean_mkMarkdownDocCommentFrom___closed__1));
v___x_5344_ = lean_string_dec_eq(v_str_5330_, v___x_5343_);
lean_dec_ref(v_str_5330_);
if (v___x_5344_ == 0)
{
lean_object* v___x_5345_; 
lean_dec_ref(v_args_5329_);
v___x_5345_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5345_;
}
else
{
lean_object* v___x_5346_; lean_object* v___x_5347_; uint8_t v___x_5348_; 
v___x_5346_ = lean_array_get_size(v_args_5329_);
v___x_5347_ = lean_unsigned_to_nat(2u);
v___x_5348_ = lean_nat_dec_eq(v___x_5346_, v___x_5347_);
if (v___x_5348_ == 0)
{
lean_object* v___x_5349_; 
lean_dec_ref(v_args_5329_);
v___x_5349_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5349_;
}
else
{
lean_object* v___x_5350_; lean_object* v___x_5351_; 
v___x_5350_ = lean_unsigned_to_nat(0u);
v___x_5351_ = lean_array_fget(v_args_5329_, v___x_5350_);
lean_dec_ref(v_args_5329_);
if (lean_obj_tag(v___x_5351_) == 2)
{
lean_object* v_val_5352_; 
v_val_5352_ = lean_ctor_get(v___x_5351_, 1);
lean_inc_ref(v_val_5352_);
lean_dec_ref_known(v___x_5351_, 2);
return v_val_5352_;
}
else
{
lean_object* v___x_5353_; 
lean_dec(v___x_5351_);
v___x_5353_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5353_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5354_; 
lean_dec_ref_known(v_pre_5327_, 2);
lean_dec_ref_known(v_pre_5326_, 2);
lean_dec_ref_known(v_pre_5325_, 2);
lean_dec_ref_known(v_kind_5324_, 2);
lean_dec_ref_known(v___x_5323_, 3);
v___x_5354_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5354_;
}
}
else
{
lean_object* v___x_5355_; 
lean_dec(v_pre_5327_);
lean_dec_ref_known(v_pre_5326_, 2);
lean_dec_ref_known(v_pre_5325_, 2);
lean_dec_ref_known(v_kind_5324_, 2);
lean_dec_ref_known(v___x_5323_, 3);
v___x_5355_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5355_;
}
}
else
{
lean_object* v___x_5356_; 
lean_dec(v_pre_5326_);
lean_dec_ref_known(v_pre_5325_, 2);
lean_dec_ref_known(v_kind_5324_, 2);
lean_dec_ref_known(v___x_5323_, 3);
v___x_5356_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5356_;
}
}
else
{
lean_object* v___x_5357_; 
lean_dec_ref_known(v_kind_5324_, 2);
lean_dec(v_pre_5325_);
lean_dec_ref_known(v___x_5323_, 3);
v___x_5357_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5357_;
}
}
else
{
lean_object* v___x_5358_; 
lean_dec_ref_known(v___x_5323_, 3);
lean_dec(v_kind_5324_);
v___x_5358_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5358_;
}
}
else
{
lean_object* v___x_5359_; 
lean_dec(v___x_5323_);
v___x_5359_ = ((lean_object*)(l_Lean_versionString___closed__0));
return v___x_5359_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getDocString___boxed(lean_object* v_stx_5360_){
_start:
{
lean_object* v_res_5361_; 
v_res_5361_ = l_Lean_TSyntax_getDocString(v_stx_5360_);
lean_dec(v_stx_5360_);
return v_res_5361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr(uint8_t v_x_5380_, lean_object* v_prec_5381_){
_start:
{
lean_object* v___y_5383_; lean_object* v___y_5390_; lean_object* v___y_5397_; lean_object* v___y_5404_; lean_object* v___y_5411_; lean_object* v___y_5418_; 
switch(v_x_5380_)
{
case 0:
{
lean_object* v___x_5424_; uint8_t v___x_5425_; 
v___x_5424_ = lean_unsigned_to_nat(1024u);
v___x_5425_ = lean_nat_dec_le(v___x_5424_, v_prec_5381_);
if (v___x_5425_ == 0)
{
lean_object* v___x_5426_; 
v___x_5426_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5383_ = v___x_5426_;
goto v___jp_5382_;
}
else
{
lean_object* v___x_5427_; 
v___x_5427_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5383_ = v___x_5427_;
goto v___jp_5382_;
}
}
case 1:
{
lean_object* v___x_5428_; uint8_t v___x_5429_; 
v___x_5428_ = lean_unsigned_to_nat(1024u);
v___x_5429_ = lean_nat_dec_le(v___x_5428_, v_prec_5381_);
if (v___x_5429_ == 0)
{
lean_object* v___x_5430_; 
v___x_5430_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5390_ = v___x_5430_;
goto v___jp_5389_;
}
else
{
lean_object* v___x_5431_; 
v___x_5431_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5390_ = v___x_5431_;
goto v___jp_5389_;
}
}
case 2:
{
lean_object* v___x_5432_; uint8_t v___x_5433_; 
v___x_5432_ = lean_unsigned_to_nat(1024u);
v___x_5433_ = lean_nat_dec_le(v___x_5432_, v_prec_5381_);
if (v___x_5433_ == 0)
{
lean_object* v___x_5434_; 
v___x_5434_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5397_ = v___x_5434_;
goto v___jp_5396_;
}
else
{
lean_object* v___x_5435_; 
v___x_5435_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5397_ = v___x_5435_;
goto v___jp_5396_;
}
}
case 3:
{
lean_object* v___x_5436_; uint8_t v___x_5437_; 
v___x_5436_ = lean_unsigned_to_nat(1024u);
v___x_5437_ = lean_nat_dec_le(v___x_5436_, v_prec_5381_);
if (v___x_5437_ == 0)
{
lean_object* v___x_5438_; 
v___x_5438_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5404_ = v___x_5438_;
goto v___jp_5403_;
}
else
{
lean_object* v___x_5439_; 
v___x_5439_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5404_ = v___x_5439_;
goto v___jp_5403_;
}
}
case 4:
{
lean_object* v___x_5440_; uint8_t v___x_5441_; 
v___x_5440_ = lean_unsigned_to_nat(1024u);
v___x_5441_ = lean_nat_dec_le(v___x_5440_, v_prec_5381_);
if (v___x_5441_ == 0)
{
lean_object* v___x_5442_; 
v___x_5442_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5411_ = v___x_5442_;
goto v___jp_5410_;
}
else
{
lean_object* v___x_5443_; 
v___x_5443_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5411_ = v___x_5443_;
goto v___jp_5410_;
}
}
default: 
{
lean_object* v___x_5444_; uint8_t v___x_5445_; 
v___x_5444_ = lean_unsigned_to_nat(1024u);
v___x_5445_ = lean_nat_dec_le(v___x_5444_, v_prec_5381_);
if (v___x_5445_ == 0)
{
lean_object* v___x_5446_; 
v___x_5446_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5418_ = v___x_5446_;
goto v___jp_5417_;
}
else
{
lean_object* v___x_5447_; 
v___x_5447_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5418_ = v___x_5447_;
goto v___jp_5417_;
}
}
}
v___jp_5382_:
{
lean_object* v___x_5384_; lean_object* v___x_5385_; uint8_t v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; 
v___x_5384_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__1));
lean_inc(v___y_5383_);
v___x_5385_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5385_, 0, v___y_5383_);
lean_ctor_set(v___x_5385_, 1, v___x_5384_);
v___x_5386_ = 0;
v___x_5387_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5387_, 0, v___x_5385_);
lean_ctor_set_uint8(v___x_5387_, sizeof(void*)*1, v___x_5386_);
v___x_5388_ = l_Repr_addAppParen(v___x_5387_, v_prec_5381_);
return v___x_5388_;
}
v___jp_5389_:
{
lean_object* v___x_5391_; lean_object* v___x_5392_; uint8_t v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; 
v___x_5391_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__3));
lean_inc(v___y_5390_);
v___x_5392_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5392_, 0, v___y_5390_);
lean_ctor_set(v___x_5392_, 1, v___x_5391_);
v___x_5393_ = 0;
v___x_5394_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5394_, 0, v___x_5392_);
lean_ctor_set_uint8(v___x_5394_, sizeof(void*)*1, v___x_5393_);
v___x_5395_ = l_Repr_addAppParen(v___x_5394_, v_prec_5381_);
return v___x_5395_;
}
v___jp_5396_:
{
lean_object* v___x_5398_; lean_object* v___x_5399_; uint8_t v___x_5400_; lean_object* v___x_5401_; lean_object* v___x_5402_; 
v___x_5398_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__5));
lean_inc(v___y_5397_);
v___x_5399_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5399_, 0, v___y_5397_);
lean_ctor_set(v___x_5399_, 1, v___x_5398_);
v___x_5400_ = 0;
v___x_5401_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5401_, 0, v___x_5399_);
lean_ctor_set_uint8(v___x_5401_, sizeof(void*)*1, v___x_5400_);
v___x_5402_ = l_Repr_addAppParen(v___x_5401_, v_prec_5381_);
return v___x_5402_;
}
v___jp_5403_:
{
lean_object* v___x_5405_; lean_object* v___x_5406_; uint8_t v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; 
v___x_5405_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__7));
lean_inc(v___y_5404_);
v___x_5406_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5406_, 0, v___y_5404_);
lean_ctor_set(v___x_5406_, 1, v___x_5405_);
v___x_5407_ = 0;
v___x_5408_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5408_, 0, v___x_5406_);
lean_ctor_set_uint8(v___x_5408_, sizeof(void*)*1, v___x_5407_);
v___x_5409_ = l_Repr_addAppParen(v___x_5408_, v_prec_5381_);
return v___x_5409_;
}
v___jp_5410_:
{
lean_object* v___x_5412_; lean_object* v___x_5413_; uint8_t v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; 
v___x_5412_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__9));
lean_inc(v___y_5411_);
v___x_5413_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5413_, 0, v___y_5411_);
lean_ctor_set(v___x_5413_, 1, v___x_5412_);
v___x_5414_ = 0;
v___x_5415_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5415_, 0, v___x_5413_);
lean_ctor_set_uint8(v___x_5415_, sizeof(void*)*1, v___x_5414_);
v___x_5416_ = l_Repr_addAppParen(v___x_5415_, v_prec_5381_);
return v___x_5416_;
}
v___jp_5417_:
{
lean_object* v___x_5419_; lean_object* v___x_5420_; uint8_t v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; 
v___x_5419_ = ((lean_object*)(l_Lean_Meta_instReprTransparencyMode_repr___closed__11));
lean_inc(v___y_5418_);
v___x_5420_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5420_, 0, v___y_5418_);
lean_ctor_set(v___x_5420_, 1, v___x_5419_);
v___x_5421_ = 0;
v___x_5422_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5422_, 0, v___x_5420_);
lean_ctor_set_uint8(v___x_5422_, sizeof(void*)*1, v___x_5421_);
v___x_5423_ = l_Repr_addAppParen(v___x_5422_, v_prec_5381_);
return v___x_5423_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprTransparencyMode_repr___boxed(lean_object* v_x_5448_, lean_object* v_prec_5449_){
_start:
{
uint8_t v_x_329__boxed_5450_; lean_object* v_res_5451_; 
v_x_329__boxed_5450_ = lean_unbox(v_x_5448_);
v_res_5451_ = l_Lean_Meta_instReprTransparencyMode_repr(v_x_329__boxed_5450_, v_prec_5449_);
lean_dec(v_prec_5449_);
return v_res_5451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr(uint8_t v_x_5463_, lean_object* v_prec_5464_){
_start:
{
lean_object* v___y_5466_; lean_object* v___y_5473_; lean_object* v___y_5480_; 
switch(v_x_5463_)
{
case 0:
{
lean_object* v___x_5486_; uint8_t v___x_5487_; 
v___x_5486_ = lean_unsigned_to_nat(1024u);
v___x_5487_ = lean_nat_dec_le(v___x_5486_, v_prec_5464_);
if (v___x_5487_ == 0)
{
lean_object* v___x_5488_; 
v___x_5488_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5466_ = v___x_5488_;
goto v___jp_5465_;
}
else
{
lean_object* v___x_5489_; 
v___x_5489_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5466_ = v___x_5489_;
goto v___jp_5465_;
}
}
case 1:
{
lean_object* v___x_5490_; uint8_t v___x_5491_; 
v___x_5490_ = lean_unsigned_to_nat(1024u);
v___x_5491_ = lean_nat_dec_le(v___x_5490_, v_prec_5464_);
if (v___x_5491_ == 0)
{
lean_object* v___x_5492_; 
v___x_5492_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5473_ = v___x_5492_;
goto v___jp_5472_;
}
else
{
lean_object* v___x_5493_; 
v___x_5493_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5473_ = v___x_5493_;
goto v___jp_5472_;
}
}
default: 
{
lean_object* v___x_5494_; uint8_t v___x_5495_; 
v___x_5494_ = lean_unsigned_to_nat(1024u);
v___x_5495_ = lean_nat_dec_le(v___x_5494_, v_prec_5464_);
if (v___x_5495_ == 0)
{
lean_object* v___x_5496_; 
v___x_5496_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__3, &l_Lean_Syntax_instReprPreresolved_repr___closed__3_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__3);
v___y_5480_ = v___x_5496_;
goto v___jp_5479_;
}
else
{
lean_object* v___x_5497_; 
v___x_5497_ = lean_obj_once(&l_Lean_Syntax_instReprPreresolved_repr___closed__4, &l_Lean_Syntax_instReprPreresolved_repr___closed__4_once, _init_l_Lean_Syntax_instReprPreresolved_repr___closed__4);
v___y_5480_ = v___x_5497_;
goto v___jp_5479_;
}
}
}
v___jp_5465_:
{
lean_object* v___x_5467_; lean_object* v___x_5468_; uint8_t v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; 
v___x_5467_ = ((lean_object*)(l_Lean_Meta_instReprEtaStructMode_repr___closed__1));
lean_inc(v___y_5466_);
v___x_5468_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5468_, 0, v___y_5466_);
lean_ctor_set(v___x_5468_, 1, v___x_5467_);
v___x_5469_ = 0;
v___x_5470_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5470_, 0, v___x_5468_);
lean_ctor_set_uint8(v___x_5470_, sizeof(void*)*1, v___x_5469_);
v___x_5471_ = l_Repr_addAppParen(v___x_5470_, v_prec_5464_);
return v___x_5471_;
}
v___jp_5472_:
{
lean_object* v___x_5474_; lean_object* v___x_5475_; uint8_t v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5478_; 
v___x_5474_ = ((lean_object*)(l_Lean_Meta_instReprEtaStructMode_repr___closed__3));
lean_inc(v___y_5473_);
v___x_5475_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5475_, 0, v___y_5473_);
lean_ctor_set(v___x_5475_, 1, v___x_5474_);
v___x_5476_ = 0;
v___x_5477_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5477_, 0, v___x_5475_);
lean_ctor_set_uint8(v___x_5477_, sizeof(void*)*1, v___x_5476_);
v___x_5478_ = l_Repr_addAppParen(v___x_5477_, v_prec_5464_);
return v___x_5478_;
}
v___jp_5479_:
{
lean_object* v___x_5481_; lean_object* v___x_5482_; uint8_t v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; 
v___x_5481_ = ((lean_object*)(l_Lean_Meta_instReprEtaStructMode_repr___closed__5));
lean_inc(v___y_5480_);
v___x_5482_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5482_, 0, v___y_5480_);
lean_ctor_set(v___x_5482_, 1, v___x_5481_);
v___x_5483_ = 0;
v___x_5484_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5484_, 0, v___x_5482_);
lean_ctor_set_uint8(v___x_5484_, sizeof(void*)*1, v___x_5483_);
v___x_5485_ = l_Repr_addAppParen(v___x_5484_, v_prec_5464_);
return v___x_5485_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprEtaStructMode_repr___boxed(lean_object* v_x_5498_, lean_object* v_prec_5499_){
_start:
{
uint8_t v_x_167__boxed_5500_; lean_object* v_res_5501_; 
v_x_167__boxed_5500_ = lean_unbox(v_x_5498_);
v_res_5501_ = l_Lean_Meta_instReprEtaStructMode_repr(v_x_167__boxed_5500_, v_prec_5499_);
lean_dec(v_prec_5499_);
return v_res_5501_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_5513_; lean_object* v___x_5514_; 
v___x_5513_ = lean_unsigned_to_nat(8u);
v___x_5514_ = lean_nat_to_int(v___x_5513_);
return v___x_5514_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_5524_; lean_object* v___x_5525_; 
v___x_5524_ = lean_unsigned_to_nat(13u);
v___x_5525_ = lean_nat_to_int(v___x_5524_);
return v___x_5525_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_5535_; lean_object* v___x_5536_; 
v___x_5535_ = lean_unsigned_to_nat(10u);
v___x_5536_ = lean_nat_to_int(v___x_5535_);
return v___x_5536_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__21(void){
_start:
{
lean_object* v___x_5540_; lean_object* v___x_5541_; 
v___x_5540_ = lean_unsigned_to_nat(14u);
v___x_5541_ = lean_nat_to_int(v___x_5540_);
return v___x_5541_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__24(void){
_start:
{
lean_object* v___x_5545_; lean_object* v___x_5546_; 
v___x_5545_ = lean_unsigned_to_nat(19u);
v___x_5546_ = lean_nat_to_int(v___x_5545_);
return v___x_5546_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__27(void){
_start:
{
lean_object* v___x_5550_; lean_object* v___x_5551_; 
v___x_5550_ = lean_unsigned_to_nat(20u);
v___x_5551_ = lean_nat_to_int(v___x_5550_);
return v___x_5551_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__32(void){
_start:
{
lean_object* v___x_5558_; lean_object* v___x_5559_; 
v___x_5558_ = lean_unsigned_to_nat(9u);
v___x_5559_ = lean_nat_to_int(v___x_5558_);
return v___x_5559_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__37(void){
_start:
{
lean_object* v___x_5566_; lean_object* v___x_5567_; 
v___x_5566_ = lean_unsigned_to_nat(12u);
v___x_5567_ = lean_nat_to_int(v___x_5566_);
return v___x_5567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg(lean_object* v_x_5574_){
_start:
{
uint8_t v_zeta_5575_; uint8_t v_beta_5576_; uint8_t v_eta_5577_; uint8_t v_etaStruct_5578_; uint8_t v_iota_5579_; uint8_t v_proj_5580_; uint8_t v_decide_5581_; uint8_t v_autoUnfold_5582_; uint8_t v_failIfUnchanged_5583_; uint8_t v_unfoldPartialApp_5584_; uint8_t v_zetaDelta_5585_; uint8_t v_index_5586_; uint8_t v_zetaUnused_5587_; uint8_t v_zetaHave_5588_; uint8_t v_locals_5589_; uint8_t v_instances_5590_; lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; uint8_t v___x_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; lean_object* v___x_5603_; lean_object* v___x_5604_; lean_object* v___x_5605_; lean_object* v___x_5606_; lean_object* v___x_5607_; lean_object* v___x_5608_; lean_object* v___x_5609_; lean_object* v___x_5610_; lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; lean_object* v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; lean_object* v___x_5623_; lean_object* v___x_5624_; lean_object* v___x_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; lean_object* v___x_5628_; lean_object* v___x_5629_; lean_object* v___x_5630_; lean_object* v___x_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; lean_object* v___x_5653_; lean_object* v___x_5654_; lean_object* v___x_5655_; lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; lean_object* v___x_5659_; lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; lean_object* v___x_5684_; lean_object* v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; lean_object* v___x_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; lean_object* v___x_5697_; lean_object* v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; lean_object* v___x_5737_; lean_object* v___x_5738_; lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; 
v_zeta_5575_ = lean_ctor_get_uint8(v_x_5574_, 0);
v_beta_5576_ = lean_ctor_get_uint8(v_x_5574_, 1);
v_eta_5577_ = lean_ctor_get_uint8(v_x_5574_, 2);
v_etaStruct_5578_ = lean_ctor_get_uint8(v_x_5574_, 3);
v_iota_5579_ = lean_ctor_get_uint8(v_x_5574_, 4);
v_proj_5580_ = lean_ctor_get_uint8(v_x_5574_, 5);
v_decide_5581_ = lean_ctor_get_uint8(v_x_5574_, 6);
v_autoUnfold_5582_ = lean_ctor_get_uint8(v_x_5574_, 7);
v_failIfUnchanged_5583_ = lean_ctor_get_uint8(v_x_5574_, 8);
v_unfoldPartialApp_5584_ = lean_ctor_get_uint8(v_x_5574_, 9);
v_zetaDelta_5585_ = lean_ctor_get_uint8(v_x_5574_, 10);
v_index_5586_ = lean_ctor_get_uint8(v_x_5574_, 11);
v_zetaUnused_5587_ = lean_ctor_get_uint8(v_x_5574_, 12);
v_zetaHave_5588_ = lean_ctor_get_uint8(v_x_5574_, 13);
v_locals_5589_ = lean_ctor_get_uint8(v_x_5574_, 14);
v_instances_5590_ = lean_ctor_get_uint8(v_x_5574_, 15);
v___x_5591_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5));
v___x_5592_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__3));
v___x_5593_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__4, &l_Lean_Meta_instReprConfig_repr___redArg___closed__4_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__4);
v___x_5594_ = lean_unsigned_to_nat(0u);
v___x_5595_ = l_Bool_repr___redArg(v_zeta_5575_);
v___x_5596_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5596_, 0, v___x_5593_);
lean_ctor_set(v___x_5596_, 1, v___x_5595_);
v___x_5597_ = 0;
v___x_5598_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5598_, 0, v___x_5596_);
lean_ctor_set_uint8(v___x_5598_, sizeof(void*)*1, v___x_5597_);
v___x_5599_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5599_, 0, v___x_5592_);
lean_ctor_set(v___x_5599_, 1, v___x_5598_);
v___x_5600_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4));
v___x_5601_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5601_, 0, v___x_5599_);
lean_ctor_set(v___x_5601_, 1, v___x_5600_);
v___x_5602_ = lean_box(1);
v___x_5603_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5603_, 0, v___x_5601_);
lean_ctor_set(v___x_5603_, 1, v___x_5602_);
v___x_5604_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__6));
v___x_5605_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5605_, 0, v___x_5603_);
lean_ctor_set(v___x_5605_, 1, v___x_5604_);
v___x_5606_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5606_, 0, v___x_5605_);
lean_ctor_set(v___x_5606_, 1, v___x_5591_);
v___x_5607_ = l_Bool_repr___redArg(v_beta_5576_);
v___x_5608_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5608_, 0, v___x_5593_);
lean_ctor_set(v___x_5608_, 1, v___x_5607_);
v___x_5609_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5609_, 0, v___x_5608_);
lean_ctor_set_uint8(v___x_5609_, sizeof(void*)*1, v___x_5597_);
v___x_5610_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5610_, 0, v___x_5606_);
lean_ctor_set(v___x_5610_, 1, v___x_5609_);
v___x_5611_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5611_, 0, v___x_5610_);
lean_ctor_set(v___x_5611_, 1, v___x_5600_);
v___x_5612_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5612_, 0, v___x_5611_);
lean_ctor_set(v___x_5612_, 1, v___x_5602_);
v___x_5613_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__8));
v___x_5614_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5614_, 0, v___x_5612_);
lean_ctor_set(v___x_5614_, 1, v___x_5613_);
v___x_5615_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5615_, 0, v___x_5614_);
lean_ctor_set(v___x_5615_, 1, v___x_5591_);
v___x_5616_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7);
v___x_5617_ = l_Bool_repr___redArg(v_eta_5577_);
v___x_5618_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5618_, 0, v___x_5616_);
lean_ctor_set(v___x_5618_, 1, v___x_5617_);
v___x_5619_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5619_, 0, v___x_5618_);
lean_ctor_set_uint8(v___x_5619_, sizeof(void*)*1, v___x_5597_);
v___x_5620_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5620_, 0, v___x_5615_);
lean_ctor_set(v___x_5620_, 1, v___x_5619_);
v___x_5621_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5621_, 0, v___x_5620_);
lean_ctor_set(v___x_5621_, 1, v___x_5600_);
v___x_5622_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5622_, 0, v___x_5621_);
lean_ctor_set(v___x_5622_, 1, v___x_5602_);
v___x_5623_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__10));
v___x_5624_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5624_, 0, v___x_5622_);
lean_ctor_set(v___x_5624_, 1, v___x_5623_);
v___x_5625_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5625_, 0, v___x_5624_);
lean_ctor_set(v___x_5625_, 1, v___x_5591_);
v___x_5626_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__11, &l_Lean_Meta_instReprConfig_repr___redArg___closed__11_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__11);
v___x_5627_ = l_Lean_Meta_instReprEtaStructMode_repr(v_etaStruct_5578_, v___x_5594_);
v___x_5628_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5628_, 0, v___x_5626_);
lean_ctor_set(v___x_5628_, 1, v___x_5627_);
v___x_5629_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5629_, 0, v___x_5628_);
lean_ctor_set_uint8(v___x_5629_, sizeof(void*)*1, v___x_5597_);
v___x_5630_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5630_, 0, v___x_5625_);
lean_ctor_set(v___x_5630_, 1, v___x_5629_);
v___x_5631_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5631_, 0, v___x_5630_);
lean_ctor_set(v___x_5631_, 1, v___x_5600_);
v___x_5632_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5632_, 0, v___x_5631_);
lean_ctor_set(v___x_5632_, 1, v___x_5602_);
v___x_5633_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__13));
v___x_5634_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5634_, 0, v___x_5632_);
lean_ctor_set(v___x_5634_, 1, v___x_5633_);
v___x_5635_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5635_, 0, v___x_5634_);
lean_ctor_set(v___x_5635_, 1, v___x_5591_);
v___x_5636_ = l_Bool_repr___redArg(v_iota_5579_);
v___x_5637_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5637_, 0, v___x_5593_);
lean_ctor_set(v___x_5637_, 1, v___x_5636_);
v___x_5638_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5638_, 0, v___x_5637_);
lean_ctor_set_uint8(v___x_5638_, sizeof(void*)*1, v___x_5597_);
v___x_5639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5639_, 0, v___x_5635_);
lean_ctor_set(v___x_5639_, 1, v___x_5638_);
v___x_5640_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5640_, 0, v___x_5639_);
lean_ctor_set(v___x_5640_, 1, v___x_5600_);
v___x_5641_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5641_, 0, v___x_5640_);
lean_ctor_set(v___x_5641_, 1, v___x_5602_);
v___x_5642_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__15));
v___x_5643_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5643_, 0, v___x_5641_);
lean_ctor_set(v___x_5643_, 1, v___x_5642_);
v___x_5644_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5644_, 0, v___x_5643_);
lean_ctor_set(v___x_5644_, 1, v___x_5591_);
v___x_5645_ = l_Bool_repr___redArg(v_proj_5580_);
v___x_5646_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5646_, 0, v___x_5593_);
lean_ctor_set(v___x_5646_, 1, v___x_5645_);
v___x_5647_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5647_, 0, v___x_5646_);
lean_ctor_set_uint8(v___x_5647_, sizeof(void*)*1, v___x_5597_);
v___x_5648_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5648_, 0, v___x_5644_);
lean_ctor_set(v___x_5648_, 1, v___x_5647_);
v___x_5649_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5649_, 0, v___x_5648_);
lean_ctor_set(v___x_5649_, 1, v___x_5600_);
v___x_5650_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5650_, 0, v___x_5649_);
lean_ctor_set(v___x_5650_, 1, v___x_5602_);
v___x_5651_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__17));
v___x_5652_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5652_, 0, v___x_5650_);
lean_ctor_set(v___x_5652_, 1, v___x_5651_);
v___x_5653_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5653_, 0, v___x_5652_);
lean_ctor_set(v___x_5653_, 1, v___x_5591_);
v___x_5654_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__18, &l_Lean_Meta_instReprConfig_repr___redArg___closed__18_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__18);
v___x_5655_ = l_Bool_repr___redArg(v_decide_5581_);
v___x_5656_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5656_, 0, v___x_5654_);
lean_ctor_set(v___x_5656_, 1, v___x_5655_);
v___x_5657_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5657_, 0, v___x_5656_);
lean_ctor_set_uint8(v___x_5657_, sizeof(void*)*1, v___x_5597_);
v___x_5658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5658_, 0, v___x_5653_);
lean_ctor_set(v___x_5658_, 1, v___x_5657_);
v___x_5659_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5659_, 0, v___x_5658_);
lean_ctor_set(v___x_5659_, 1, v___x_5600_);
v___x_5660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5660_, 0, v___x_5659_);
lean_ctor_set(v___x_5660_, 1, v___x_5602_);
v___x_5661_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__20));
v___x_5662_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5662_, 0, v___x_5660_);
lean_ctor_set(v___x_5662_, 1, v___x_5661_);
v___x_5663_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5663_, 0, v___x_5662_);
lean_ctor_set(v___x_5663_, 1, v___x_5591_);
v___x_5664_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__21, &l_Lean_Meta_instReprConfig_repr___redArg___closed__21_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__21);
v___x_5665_ = l_Bool_repr___redArg(v_autoUnfold_5582_);
v___x_5666_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5666_, 0, v___x_5664_);
lean_ctor_set(v___x_5666_, 1, v___x_5665_);
v___x_5667_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5667_, 0, v___x_5666_);
lean_ctor_set_uint8(v___x_5667_, sizeof(void*)*1, v___x_5597_);
v___x_5668_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5668_, 0, v___x_5663_);
lean_ctor_set(v___x_5668_, 1, v___x_5667_);
v___x_5669_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5669_, 0, v___x_5668_);
lean_ctor_set(v___x_5669_, 1, v___x_5600_);
v___x_5670_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5670_, 0, v___x_5669_);
lean_ctor_set(v___x_5670_, 1, v___x_5602_);
v___x_5671_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__23));
v___x_5672_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5672_, 0, v___x_5670_);
lean_ctor_set(v___x_5672_, 1, v___x_5671_);
v___x_5673_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5673_, 0, v___x_5672_);
lean_ctor_set(v___x_5673_, 1, v___x_5591_);
v___x_5674_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__24, &l_Lean_Meta_instReprConfig_repr___redArg___closed__24_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__24);
v___x_5675_ = l_Bool_repr___redArg(v_failIfUnchanged_5583_);
v___x_5676_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5676_, 0, v___x_5674_);
lean_ctor_set(v___x_5676_, 1, v___x_5675_);
v___x_5677_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5677_, 0, v___x_5676_);
lean_ctor_set_uint8(v___x_5677_, sizeof(void*)*1, v___x_5597_);
v___x_5678_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5678_, 0, v___x_5673_);
lean_ctor_set(v___x_5678_, 1, v___x_5677_);
v___x_5679_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5679_, 0, v___x_5678_);
lean_ctor_set(v___x_5679_, 1, v___x_5600_);
v___x_5680_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5680_, 0, v___x_5679_);
lean_ctor_set(v___x_5680_, 1, v___x_5602_);
v___x_5681_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__26));
v___x_5682_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5682_, 0, v___x_5680_);
lean_ctor_set(v___x_5682_, 1, v___x_5681_);
v___x_5683_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5683_, 0, v___x_5682_);
lean_ctor_set(v___x_5683_, 1, v___x_5591_);
v___x_5684_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__27, &l_Lean_Meta_instReprConfig_repr___redArg___closed__27_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__27);
v___x_5685_ = l_Bool_repr___redArg(v_unfoldPartialApp_5584_);
v___x_5686_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5686_, 0, v___x_5684_);
lean_ctor_set(v___x_5686_, 1, v___x_5685_);
v___x_5687_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5687_, 0, v___x_5686_);
lean_ctor_set_uint8(v___x_5687_, sizeof(void*)*1, v___x_5597_);
v___x_5688_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5688_, 0, v___x_5683_);
lean_ctor_set(v___x_5688_, 1, v___x_5687_);
v___x_5689_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5689_, 0, v___x_5688_);
lean_ctor_set(v___x_5689_, 1, v___x_5600_);
v___x_5690_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5690_, 0, v___x_5689_);
lean_ctor_set(v___x_5690_, 1, v___x_5602_);
v___x_5691_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__29));
v___x_5692_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5692_, 0, v___x_5690_);
lean_ctor_set(v___x_5692_, 1, v___x_5691_);
v___x_5693_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5693_, 0, v___x_5692_);
lean_ctor_set(v___x_5693_, 1, v___x_5591_);
v___x_5694_ = l_Bool_repr___redArg(v_zetaDelta_5585_);
v___x_5695_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5695_, 0, v___x_5626_);
lean_ctor_set(v___x_5695_, 1, v___x_5694_);
v___x_5696_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5696_, 0, v___x_5695_);
lean_ctor_set_uint8(v___x_5696_, sizeof(void*)*1, v___x_5597_);
v___x_5697_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5697_, 0, v___x_5693_);
lean_ctor_set(v___x_5697_, 1, v___x_5696_);
v___x_5698_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5698_, 0, v___x_5697_);
lean_ctor_set(v___x_5698_, 1, v___x_5600_);
v___x_5699_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5699_, 0, v___x_5698_);
lean_ctor_set(v___x_5699_, 1, v___x_5602_);
v___x_5700_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__31));
v___x_5701_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5701_, 0, v___x_5699_);
lean_ctor_set(v___x_5701_, 1, v___x_5700_);
v___x_5702_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5702_, 0, v___x_5701_);
lean_ctor_set(v___x_5702_, 1, v___x_5591_);
v___x_5703_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__32, &l_Lean_Meta_instReprConfig_repr___redArg___closed__32_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__32);
v___x_5704_ = l_Bool_repr___redArg(v_index_5586_);
v___x_5705_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5705_, 0, v___x_5703_);
lean_ctor_set(v___x_5705_, 1, v___x_5704_);
v___x_5706_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5706_, 0, v___x_5705_);
lean_ctor_set_uint8(v___x_5706_, sizeof(void*)*1, v___x_5597_);
v___x_5707_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5707_, 0, v___x_5702_);
lean_ctor_set(v___x_5707_, 1, v___x_5706_);
v___x_5708_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5708_, 0, v___x_5707_);
lean_ctor_set(v___x_5708_, 1, v___x_5600_);
v___x_5709_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5709_, 0, v___x_5708_);
lean_ctor_set(v___x_5709_, 1, v___x_5602_);
v___x_5710_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__34));
v___x_5711_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5711_, 0, v___x_5709_);
lean_ctor_set(v___x_5711_, 1, v___x_5710_);
v___x_5712_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5712_, 0, v___x_5711_);
lean_ctor_set(v___x_5712_, 1, v___x_5591_);
v___x_5713_ = l_Bool_repr___redArg(v_zetaUnused_5587_);
v___x_5714_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5714_, 0, v___x_5664_);
lean_ctor_set(v___x_5714_, 1, v___x_5713_);
v___x_5715_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5715_, 0, v___x_5714_);
lean_ctor_set_uint8(v___x_5715_, sizeof(void*)*1, v___x_5597_);
v___x_5716_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5716_, 0, v___x_5712_);
lean_ctor_set(v___x_5716_, 1, v___x_5715_);
v___x_5717_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5717_, 0, v___x_5716_);
lean_ctor_set(v___x_5717_, 1, v___x_5600_);
v___x_5718_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5718_, 0, v___x_5717_);
lean_ctor_set(v___x_5718_, 1, v___x_5602_);
v___x_5719_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__36));
v___x_5720_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5720_, 0, v___x_5718_);
lean_ctor_set(v___x_5720_, 1, v___x_5719_);
v___x_5721_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5721_, 0, v___x_5720_);
lean_ctor_set(v___x_5721_, 1, v___x_5591_);
v___x_5722_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__37, &l_Lean_Meta_instReprConfig_repr___redArg___closed__37_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__37);
v___x_5723_ = l_Bool_repr___redArg(v_zetaHave_5588_);
v___x_5724_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5724_, 0, v___x_5722_);
lean_ctor_set(v___x_5724_, 1, v___x_5723_);
v___x_5725_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5725_, 0, v___x_5724_);
lean_ctor_set_uint8(v___x_5725_, sizeof(void*)*1, v___x_5597_);
v___x_5726_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5726_, 0, v___x_5721_);
lean_ctor_set(v___x_5726_, 1, v___x_5725_);
v___x_5727_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5727_, 0, v___x_5726_);
lean_ctor_set(v___x_5727_, 1, v___x_5600_);
v___x_5728_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5728_, 0, v___x_5727_);
lean_ctor_set(v___x_5728_, 1, v___x_5602_);
v___x_5729_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__39));
v___x_5730_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5730_, 0, v___x_5728_);
lean_ctor_set(v___x_5730_, 1, v___x_5729_);
v___x_5731_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5731_, 0, v___x_5730_);
lean_ctor_set(v___x_5731_, 1, v___x_5591_);
v___x_5732_ = l_Bool_repr___redArg(v_locals_5589_);
v___x_5733_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5733_, 0, v___x_5654_);
lean_ctor_set(v___x_5733_, 1, v___x_5732_);
v___x_5734_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5734_, 0, v___x_5733_);
lean_ctor_set_uint8(v___x_5734_, sizeof(void*)*1, v___x_5597_);
v___x_5735_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5735_, 0, v___x_5731_);
lean_ctor_set(v___x_5735_, 1, v___x_5734_);
v___x_5736_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5736_, 0, v___x_5735_);
lean_ctor_set(v___x_5736_, 1, v___x_5600_);
v___x_5737_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5737_, 0, v___x_5736_);
lean_ctor_set(v___x_5737_, 1, v___x_5602_);
v___x_5738_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__41));
v___x_5739_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5739_, 0, v___x_5737_);
lean_ctor_set(v___x_5739_, 1, v___x_5738_);
v___x_5740_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5740_, 0, v___x_5739_);
lean_ctor_set(v___x_5740_, 1, v___x_5591_);
v___x_5741_ = l_Bool_repr___redArg(v_instances_5590_);
v___x_5742_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5742_, 0, v___x_5626_);
lean_ctor_set(v___x_5742_, 1, v___x_5741_);
v___x_5743_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5743_, 0, v___x_5742_);
lean_ctor_set_uint8(v___x_5743_, sizeof(void*)*1, v___x_5597_);
v___x_5744_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5744_, 0, v___x_5740_);
lean_ctor_set(v___x_5744_, 1, v___x_5743_);
v___x_5745_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10);
v___x_5746_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11));
v___x_5747_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5747_, 0, v___x_5746_);
lean_ctor_set(v___x_5747_, 1, v___x_5744_);
v___x_5748_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12));
v___x_5749_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5749_, 0, v___x_5747_);
lean_ctor_set(v___x_5749_, 1, v___x_5748_);
v___x_5750_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5750_, 0, v___x_5745_);
lean_ctor_set(v___x_5750_, 1, v___x_5749_);
v___x_5751_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5751_, 0, v___x_5750_);
lean_ctor_set_uint8(v___x_5751_, sizeof(void*)*1, v___x_5597_);
return v___x_5751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___redArg___boxed(lean_object* v_x_5752_){
_start:
{
lean_object* v_res_5753_; 
v_res_5753_ = l_Lean_Meta_instReprConfig_repr___redArg(v_x_5752_);
lean_dec_ref(v_x_5752_);
return v_res_5753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr(lean_object* v_x_5754_, lean_object* v_prec_5755_){
_start:
{
lean_object* v___x_5756_; 
v___x_5756_ = l_Lean_Meta_instReprConfig_repr___redArg(v_x_5754_);
return v___x_5756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig_repr___boxed(lean_object* v_x_5757_, lean_object* v_prec_5758_){
_start:
{
lean_object* v_res_5759_; 
v_res_5759_ = l_Lean_Meta_instReprConfig_repr(v_x_5757_, v_prec_5758_);
lean_dec(v_prec_5758_);
lean_dec_ref(v_x_5757_);
return v_res_5759_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(lean_object* v_x_5767_, lean_object* v_x_5768_){
_start:
{
if (lean_obj_tag(v_x_5767_) == 0)
{
lean_object* v___x_5769_; 
v___x_5769_ = ((lean_object*)(l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__0));
return v___x_5769_;
}
else
{
lean_object* v_val_5770_; lean_object* v___x_5772_; uint8_t v_isShared_5773_; uint8_t v_isSharedCheck_5781_; 
v_val_5770_ = lean_ctor_get(v_x_5767_, 0);
v_isSharedCheck_5781_ = !lean_is_exclusive(v_x_5767_);
if (v_isSharedCheck_5781_ == 0)
{
v___x_5772_ = v_x_5767_;
v_isShared_5773_ = v_isSharedCheck_5781_;
goto v_resetjp_5771_;
}
else
{
lean_inc(v_val_5770_);
lean_dec(v_x_5767_);
v___x_5772_ = lean_box(0);
v_isShared_5773_ = v_isSharedCheck_5781_;
goto v_resetjp_5771_;
}
v_resetjp_5771_:
{
lean_object* v___x_5774_; lean_object* v___x_5775_; lean_object* v___x_5777_; 
v___x_5774_ = ((lean_object*)(l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___closed__2));
v___x_5775_ = l_Nat_reprFast(v_val_5770_);
if (v_isShared_5773_ == 0)
{
lean_ctor_set_tag(v___x_5772_, 3);
lean_ctor_set(v___x_5772_, 0, v___x_5775_);
v___x_5777_ = v___x_5772_;
goto v_reusejp_5776_;
}
else
{
lean_object* v_reuseFailAlloc_5780_; 
v_reuseFailAlloc_5780_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5780_, 0, v___x_5775_);
v___x_5777_ = v_reuseFailAlloc_5780_;
goto v_reusejp_5776_;
}
v_reusejp_5776_:
{
lean_object* v___x_5778_; lean_object* v___x_5779_; 
v___x_5778_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5778_, 0, v___x_5774_);
lean_ctor_set(v___x_5778_, 1, v___x_5777_);
v___x_5779_ = l_Repr_addAppParen(v___x_5778_, v_x_5768_);
return v___x_5779_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0___boxed(lean_object* v_x_5782_, lean_object* v_x_5783_){
_start:
{
lean_object* v_res_5784_; 
v_res_5784_ = l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(v_x_5782_, v_x_5783_);
lean_dec(v_x_5783_);
return v_res_5784_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_5797_; lean_object* v___x_5798_; 
v___x_5797_ = lean_unsigned_to_nat(21u);
v___x_5798_ = lean_nat_to_int(v___x_5797_);
return v___x_5798_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_5805_; lean_object* v___x_5806_; 
v___x_5805_ = lean_unsigned_to_nat(11u);
v___x_5806_ = lean_nat_to_int(v___x_5805_);
return v___x_5806_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_5822_; lean_object* v___x_5823_; 
v___x_5822_ = lean_unsigned_to_nat(23u);
v___x_5823_ = lean_nat_to_int(v___x_5822_);
return v___x_5823_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25(void){
_start:
{
lean_object* v___x_5827_; lean_object* v___x_5828_; 
v___x_5827_ = lean_unsigned_to_nat(16u);
v___x_5828_ = lean_nat_to_int(v___x_5827_);
return v___x_5828_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30(void){
_start:
{
lean_object* v___x_5835_; lean_object* v___x_5836_; 
v___x_5835_ = lean_unsigned_to_nat(15u);
v___x_5836_ = lean_nat_to_int(v___x_5835_);
return v___x_5836_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35(void){
_start:
{
lean_object* v___x_5843_; lean_object* v___x_5844_; 
v___x_5843_ = lean_unsigned_to_nat(17u);
v___x_5844_ = lean_nat_to_int(v___x_5843_);
return v___x_5844_;
}
}
static lean_object* _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40(void){
_start:
{
lean_object* v___x_5851_; lean_object* v___x_5852_; 
v___x_5851_ = lean_unsigned_to_nat(18u);
v___x_5852_ = lean_nat_to_int(v___x_5851_);
return v___x_5852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___redArg(lean_object* v_x_5853_){
_start:
{
lean_object* v_maxSteps_5854_; lean_object* v_maxDischargeDepth_5855_; uint8_t v_contextual_5856_; uint8_t v_memoize_5857_; uint8_t v_singlePass_5858_; uint8_t v_zeta_5859_; uint8_t v_beta_5860_; uint8_t v_eta_5861_; uint8_t v_etaStruct_5862_; uint8_t v_iota_5863_; uint8_t v_proj_5864_; uint8_t v_decide_5865_; uint8_t v_arith_5866_; uint8_t v_autoUnfold_5867_; uint8_t v_dsimp_5868_; uint8_t v_failIfUnchanged_5869_; uint8_t v_ground_5870_; uint8_t v_unfoldPartialApp_5871_; uint8_t v_zetaDelta_5872_; uint8_t v_index_5873_; uint8_t v_implicitDefEqProofs_5874_; uint8_t v_zetaUnused_5875_; uint8_t v_catchRuntime_5876_; uint8_t v_zetaHave_5877_; uint8_t v_letToHave_5878_; uint8_t v_congrConsts_5879_; uint8_t v_bitVecOfNat_5880_; uint8_t v_warnExponents_5881_; uint8_t v_suggestions_5882_; lean_object* v_maxSuggestions_5883_; uint8_t v_locals_5884_; uint8_t v_instances_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5889_; lean_object* v___x_5890_; lean_object* v___x_5891_; uint8_t v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; lean_object* v___x_5917_; lean_object* v___x_5918_; lean_object* v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; lean_object* v___x_5938_; lean_object* v___x_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5951_; lean_object* v___x_5952_; lean_object* v___x_5953_; lean_object* v___x_5954_; lean_object* v___x_5955_; lean_object* v___x_5956_; lean_object* v___x_5957_; lean_object* v___x_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___x_5968_; lean_object* v___x_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; lean_object* v___x_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v___x_5975_; lean_object* v___x_5976_; lean_object* v___x_5977_; lean_object* v___x_5978_; lean_object* v___x_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5995_; lean_object* v___x_5996_; lean_object* v___x_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; lean_object* v___x_6002_; lean_object* v___x_6003_; lean_object* v___x_6004_; lean_object* v___x_6005_; lean_object* v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v___x_6010_; lean_object* v___x_6011_; lean_object* v___x_6012_; lean_object* v___x_6013_; lean_object* v___x_6014_; lean_object* v___x_6015_; lean_object* v___x_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; lean_object* v___x_6029_; lean_object* v___x_6030_; lean_object* v___x_6031_; lean_object* v___x_6032_; lean_object* v___x_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; lean_object* v___x_6036_; lean_object* v___x_6037_; lean_object* v___x_6038_; lean_object* v___x_6039_; lean_object* v___x_6040_; lean_object* v___x_6041_; lean_object* v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; lean_object* v___x_6047_; lean_object* v___x_6048_; lean_object* v___x_6049_; lean_object* v___x_6050_; lean_object* v___x_6051_; lean_object* v___x_6052_; lean_object* v___x_6053_; lean_object* v___x_6054_; lean_object* v___x_6055_; lean_object* v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; lean_object* v___x_6062_; lean_object* v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6067_; lean_object* v___x_6068_; lean_object* v___x_6069_; lean_object* v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; lean_object* v___x_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; lean_object* v___x_6078_; lean_object* v___x_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; lean_object* v___x_6085_; lean_object* v___x_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; lean_object* v___x_6108_; lean_object* v___x_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; lean_object* v___x_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; lean_object* v___x_6120_; lean_object* v___x_6121_; lean_object* v___x_6122_; lean_object* v___x_6123_; lean_object* v___x_6124_; lean_object* v___x_6125_; lean_object* v___x_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; lean_object* v___x_6131_; lean_object* v___x_6132_; lean_object* v___x_6133_; lean_object* v___x_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; lean_object* v___x_6137_; lean_object* v___x_6138_; lean_object* v___x_6139_; lean_object* v___x_6140_; lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6144_; lean_object* v___x_6145_; lean_object* v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; lean_object* v___x_6153_; lean_object* v___x_6154_; lean_object* v___x_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___x_6162_; lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; lean_object* v___x_6166_; lean_object* v___x_6167_; lean_object* v___x_6168_; lean_object* v___x_6169_; lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___x_6180_; lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; lean_object* v___x_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; lean_object* v___x_6198_; lean_object* v___x_6199_; 
v_maxSteps_5854_ = lean_ctor_get(v_x_5853_, 0);
lean_inc(v_maxSteps_5854_);
v_maxDischargeDepth_5855_ = lean_ctor_get(v_x_5853_, 1);
lean_inc(v_maxDischargeDepth_5855_);
v_contextual_5856_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3);
v_memoize_5857_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 1);
v_singlePass_5858_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 2);
v_zeta_5859_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 3);
v_beta_5860_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 4);
v_eta_5861_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 5);
v_etaStruct_5862_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 6);
v_iota_5863_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 7);
v_proj_5864_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 8);
v_decide_5865_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 9);
v_arith_5866_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 10);
v_autoUnfold_5867_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 11);
v_dsimp_5868_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 12);
v_failIfUnchanged_5869_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 13);
v_ground_5870_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 14);
v_unfoldPartialApp_5871_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 15);
v_zetaDelta_5872_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 16);
v_index_5873_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 17);
v_implicitDefEqProofs_5874_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 18);
v_zetaUnused_5875_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 19);
v_catchRuntime_5876_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 20);
v_zetaHave_5877_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 21);
v_letToHave_5878_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 22);
v_congrConsts_5879_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 23);
v_bitVecOfNat_5880_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 24);
v_warnExponents_5881_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 25);
v_suggestions_5882_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 26);
v_maxSuggestions_5883_ = lean_ctor_get(v_x_5853_, 2);
lean_inc(v_maxSuggestions_5883_);
v_locals_5884_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 27);
v_instances_5885_ = lean_ctor_get_uint8(v_x_5853_, sizeof(void*)*3 + 28);
lean_dec_ref(v_x_5853_);
v___x_5886_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__5));
v___x_5887_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__3));
v___x_5888_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__37, &l_Lean_Meta_instReprConfig_repr___redArg___closed__37_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__37);
v___x_5889_ = l_Nat_reprFast(v_maxSteps_5854_);
v___x_5890_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5890_, 0, v___x_5889_);
v___x_5891_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5891_, 0, v___x_5888_);
lean_ctor_set(v___x_5891_, 1, v___x_5890_);
v___x_5892_ = 0;
v___x_5893_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5893_, 0, v___x_5891_);
lean_ctor_set_uint8(v___x_5893_, sizeof(void*)*1, v___x_5892_);
v___x_5894_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5894_, 0, v___x_5887_);
lean_ctor_set(v___x_5894_, 1, v___x_5893_);
v___x_5895_ = ((lean_object*)(l_List_repr_x27___at___00Lean_Syntax_instReprPreresolved_repr_spec__0___redArg___closed__4));
v___x_5896_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5896_, 0, v___x_5894_);
lean_ctor_set(v___x_5896_, 1, v___x_5895_);
v___x_5897_ = lean_box(1);
v___x_5898_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5898_, 0, v___x_5896_);
lean_ctor_set(v___x_5898_, 1, v___x_5897_);
v___x_5899_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__5));
v___x_5900_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5900_, 0, v___x_5898_);
lean_ctor_set(v___x_5900_, 1, v___x_5899_);
v___x_5901_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5901_, 0, v___x_5900_);
lean_ctor_set(v___x_5901_, 1, v___x_5886_);
v___x_5902_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__6);
v___x_5903_ = l_Nat_reprFast(v_maxDischargeDepth_5855_);
v___x_5904_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5904_, 0, v___x_5903_);
v___x_5905_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5905_, 0, v___x_5902_);
lean_ctor_set(v___x_5905_, 1, v___x_5904_);
v___x_5906_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5906_, 0, v___x_5905_);
lean_ctor_set_uint8(v___x_5906_, sizeof(void*)*1, v___x_5892_);
v___x_5907_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5907_, 0, v___x_5901_);
lean_ctor_set(v___x_5907_, 1, v___x_5906_);
v___x_5908_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5908_, 0, v___x_5907_);
lean_ctor_set(v___x_5908_, 1, v___x_5895_);
v___x_5909_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5909_, 0, v___x_5908_);
lean_ctor_set(v___x_5909_, 1, v___x_5897_);
v___x_5910_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__8));
v___x_5911_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5911_, 0, v___x_5909_);
lean_ctor_set(v___x_5911_, 1, v___x_5910_);
v___x_5912_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5912_, 0, v___x_5911_);
lean_ctor_set(v___x_5912_, 1, v___x_5886_);
v___x_5913_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__21, &l_Lean_Meta_instReprConfig_repr___redArg___closed__21_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__21);
v___x_5914_ = lean_unsigned_to_nat(0u);
v___x_5915_ = l_Bool_repr___redArg(v_contextual_5856_);
v___x_5916_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5916_, 0, v___x_5913_);
lean_ctor_set(v___x_5916_, 1, v___x_5915_);
v___x_5917_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5917_, 0, v___x_5916_);
lean_ctor_set_uint8(v___x_5917_, sizeof(void*)*1, v___x_5892_);
v___x_5918_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5918_, 0, v___x_5912_);
lean_ctor_set(v___x_5918_, 1, v___x_5917_);
v___x_5919_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5919_, 0, v___x_5918_);
lean_ctor_set(v___x_5919_, 1, v___x_5895_);
v___x_5920_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5920_, 0, v___x_5919_);
lean_ctor_set(v___x_5920_, 1, v___x_5897_);
v___x_5921_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__10));
v___x_5922_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5922_, 0, v___x_5920_);
lean_ctor_set(v___x_5922_, 1, v___x_5921_);
v___x_5923_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5923_, 0, v___x_5922_);
lean_ctor_set(v___x_5923_, 1, v___x_5886_);
v___x_5924_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__11);
v___x_5925_ = l_Bool_repr___redArg(v_memoize_5857_);
v___x_5926_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5926_, 0, v___x_5924_);
lean_ctor_set(v___x_5926_, 1, v___x_5925_);
v___x_5927_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5927_, 0, v___x_5926_);
lean_ctor_set_uint8(v___x_5927_, sizeof(void*)*1, v___x_5892_);
v___x_5928_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5928_, 0, v___x_5923_);
lean_ctor_set(v___x_5928_, 1, v___x_5927_);
v___x_5929_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5929_, 0, v___x_5928_);
lean_ctor_set(v___x_5929_, 1, v___x_5895_);
v___x_5930_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5930_, 0, v___x_5929_);
lean_ctor_set(v___x_5930_, 1, v___x_5897_);
v___x_5931_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__13));
v___x_5932_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5932_, 0, v___x_5930_);
lean_ctor_set(v___x_5932_, 1, v___x_5931_);
v___x_5933_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5933_, 0, v___x_5932_);
lean_ctor_set(v___x_5933_, 1, v___x_5886_);
v___x_5934_ = l_Bool_repr___redArg(v_singlePass_5858_);
v___x_5935_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5935_, 0, v___x_5913_);
lean_ctor_set(v___x_5935_, 1, v___x_5934_);
v___x_5936_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5936_, 0, v___x_5935_);
lean_ctor_set_uint8(v___x_5936_, sizeof(void*)*1, v___x_5892_);
v___x_5937_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5937_, 0, v___x_5933_);
lean_ctor_set(v___x_5937_, 1, v___x_5936_);
v___x_5938_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5938_, 0, v___x_5937_);
lean_ctor_set(v___x_5938_, 1, v___x_5895_);
v___x_5939_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5939_, 0, v___x_5938_);
lean_ctor_set(v___x_5939_, 1, v___x_5897_);
v___x_5940_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__1));
v___x_5941_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5941_, 0, v___x_5939_);
lean_ctor_set(v___x_5941_, 1, v___x_5940_);
v___x_5942_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5942_, 0, v___x_5941_);
lean_ctor_set(v___x_5942_, 1, v___x_5886_);
v___x_5943_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__4, &l_Lean_Meta_instReprConfig_repr___redArg___closed__4_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__4);
v___x_5944_ = l_Bool_repr___redArg(v_zeta_5859_);
v___x_5945_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5945_, 0, v___x_5943_);
lean_ctor_set(v___x_5945_, 1, v___x_5944_);
v___x_5946_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5946_, 0, v___x_5945_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*1, v___x_5892_);
v___x_5947_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5947_, 0, v___x_5942_);
lean_ctor_set(v___x_5947_, 1, v___x_5946_);
v___x_5948_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5948_, 0, v___x_5947_);
lean_ctor_set(v___x_5948_, 1, v___x_5895_);
v___x_5949_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5949_, 0, v___x_5948_);
lean_ctor_set(v___x_5949_, 1, v___x_5897_);
v___x_5950_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__6));
v___x_5951_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5951_, 0, v___x_5949_);
lean_ctor_set(v___x_5951_, 1, v___x_5950_);
v___x_5952_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5952_, 0, v___x_5951_);
lean_ctor_set(v___x_5952_, 1, v___x_5886_);
v___x_5953_ = l_Bool_repr___redArg(v_beta_5860_);
v___x_5954_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5954_, 0, v___x_5943_);
lean_ctor_set(v___x_5954_, 1, v___x_5953_);
v___x_5955_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5955_, 0, v___x_5954_);
lean_ctor_set_uint8(v___x_5955_, sizeof(void*)*1, v___x_5892_);
v___x_5956_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5956_, 0, v___x_5952_);
lean_ctor_set(v___x_5956_, 1, v___x_5955_);
v___x_5957_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5957_, 0, v___x_5956_);
lean_ctor_set(v___x_5957_, 1, v___x_5895_);
v___x_5958_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5958_, 0, v___x_5957_);
lean_ctor_set(v___x_5958_, 1, v___x_5897_);
v___x_5959_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__8));
v___x_5960_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5960_, 0, v___x_5958_);
lean_ctor_set(v___x_5960_, 1, v___x_5959_);
v___x_5961_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5961_, 0, v___x_5960_);
lean_ctor_set(v___x_5961_, 1, v___x_5886_);
v___x_5962_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__7);
v___x_5963_ = l_Bool_repr___redArg(v_eta_5861_);
v___x_5964_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5964_, 0, v___x_5962_);
lean_ctor_set(v___x_5964_, 1, v___x_5963_);
v___x_5965_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5965_, 0, v___x_5964_);
lean_ctor_set_uint8(v___x_5965_, sizeof(void*)*1, v___x_5892_);
v___x_5966_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5966_, 0, v___x_5961_);
lean_ctor_set(v___x_5966_, 1, v___x_5965_);
v___x_5967_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5967_, 0, v___x_5966_);
lean_ctor_set(v___x_5967_, 1, v___x_5895_);
v___x_5968_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5968_, 0, v___x_5967_);
lean_ctor_set(v___x_5968_, 1, v___x_5897_);
v___x_5969_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__10));
v___x_5970_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5970_, 0, v___x_5968_);
lean_ctor_set(v___x_5970_, 1, v___x_5969_);
v___x_5971_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5971_, 0, v___x_5970_);
lean_ctor_set(v___x_5971_, 1, v___x_5886_);
v___x_5972_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__11, &l_Lean_Meta_instReprConfig_repr___redArg___closed__11_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__11);
v___x_5973_ = l_Lean_Meta_instReprEtaStructMode_repr(v_etaStruct_5862_, v___x_5914_);
v___x_5974_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5974_, 0, v___x_5972_);
lean_ctor_set(v___x_5974_, 1, v___x_5973_);
v___x_5975_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5975_, 0, v___x_5974_);
lean_ctor_set_uint8(v___x_5975_, sizeof(void*)*1, v___x_5892_);
v___x_5976_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5976_, 0, v___x_5971_);
lean_ctor_set(v___x_5976_, 1, v___x_5975_);
v___x_5977_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5977_, 0, v___x_5976_);
lean_ctor_set(v___x_5977_, 1, v___x_5895_);
v___x_5978_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5978_, 0, v___x_5977_);
lean_ctor_set(v___x_5978_, 1, v___x_5897_);
v___x_5979_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__13));
v___x_5980_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5980_, 0, v___x_5978_);
lean_ctor_set(v___x_5980_, 1, v___x_5979_);
v___x_5981_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5981_, 0, v___x_5980_);
lean_ctor_set(v___x_5981_, 1, v___x_5886_);
v___x_5982_ = l_Bool_repr___redArg(v_iota_5863_);
v___x_5983_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5983_, 0, v___x_5943_);
lean_ctor_set(v___x_5983_, 1, v___x_5982_);
v___x_5984_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5984_, 0, v___x_5983_);
lean_ctor_set_uint8(v___x_5984_, sizeof(void*)*1, v___x_5892_);
v___x_5985_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5985_, 0, v___x_5981_);
lean_ctor_set(v___x_5985_, 1, v___x_5984_);
v___x_5986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5986_, 0, v___x_5985_);
lean_ctor_set(v___x_5986_, 1, v___x_5895_);
v___x_5987_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5987_, 0, v___x_5986_);
lean_ctor_set(v___x_5987_, 1, v___x_5897_);
v___x_5988_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__15));
v___x_5989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5989_, 0, v___x_5987_);
lean_ctor_set(v___x_5989_, 1, v___x_5988_);
v___x_5990_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5990_, 0, v___x_5989_);
lean_ctor_set(v___x_5990_, 1, v___x_5886_);
v___x_5991_ = l_Bool_repr___redArg(v_proj_5864_);
v___x_5992_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5992_, 0, v___x_5943_);
lean_ctor_set(v___x_5992_, 1, v___x_5991_);
v___x_5993_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5993_, 0, v___x_5992_);
lean_ctor_set_uint8(v___x_5993_, sizeof(void*)*1, v___x_5892_);
v___x_5994_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5994_, 0, v___x_5990_);
lean_ctor_set(v___x_5994_, 1, v___x_5993_);
v___x_5995_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5995_, 0, v___x_5994_);
lean_ctor_set(v___x_5995_, 1, v___x_5895_);
v___x_5996_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5996_, 0, v___x_5995_);
lean_ctor_set(v___x_5996_, 1, v___x_5897_);
v___x_5997_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__17));
v___x_5998_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5998_, 0, v___x_5996_);
lean_ctor_set(v___x_5998_, 1, v___x_5997_);
v___x_5999_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_5999_, 0, v___x_5998_);
lean_ctor_set(v___x_5999_, 1, v___x_5886_);
v___x_6000_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__18, &l_Lean_Meta_instReprConfig_repr___redArg___closed__18_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__18);
v___x_6001_ = l_Bool_repr___redArg(v_decide_5865_);
v___x_6002_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6002_, 0, v___x_6000_);
lean_ctor_set(v___x_6002_, 1, v___x_6001_);
v___x_6003_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6003_, 0, v___x_6002_);
lean_ctor_set_uint8(v___x_6003_, sizeof(void*)*1, v___x_5892_);
v___x_6004_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6004_, 0, v___x_5999_);
lean_ctor_set(v___x_6004_, 1, v___x_6003_);
v___x_6005_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6005_, 0, v___x_6004_);
lean_ctor_set(v___x_6005_, 1, v___x_5895_);
v___x_6006_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6006_, 0, v___x_6005_);
lean_ctor_set(v___x_6006_, 1, v___x_5897_);
v___x_6007_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__15));
v___x_6008_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6008_, 0, v___x_6006_);
lean_ctor_set(v___x_6008_, 1, v___x_6007_);
v___x_6009_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6009_, 0, v___x_6008_);
lean_ctor_set(v___x_6009_, 1, v___x_5886_);
v___x_6010_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__32, &l_Lean_Meta_instReprConfig_repr___redArg___closed__32_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__32);
v___x_6011_ = l_Bool_repr___redArg(v_arith_5866_);
v___x_6012_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6012_, 0, v___x_6010_);
lean_ctor_set(v___x_6012_, 1, v___x_6011_);
v___x_6013_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6013_, 0, v___x_6012_);
lean_ctor_set_uint8(v___x_6013_, sizeof(void*)*1, v___x_5892_);
v___x_6014_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6014_, 0, v___x_6009_);
lean_ctor_set(v___x_6014_, 1, v___x_6013_);
v___x_6015_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6015_, 0, v___x_6014_);
lean_ctor_set(v___x_6015_, 1, v___x_5895_);
v___x_6016_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6016_, 0, v___x_6015_);
lean_ctor_set(v___x_6016_, 1, v___x_5897_);
v___x_6017_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__20));
v___x_6018_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6018_, 0, v___x_6016_);
lean_ctor_set(v___x_6018_, 1, v___x_6017_);
v___x_6019_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6019_, 0, v___x_6018_);
lean_ctor_set(v___x_6019_, 1, v___x_5886_);
v___x_6020_ = l_Bool_repr___redArg(v_autoUnfold_5867_);
v___x_6021_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6021_, 0, v___x_5913_);
lean_ctor_set(v___x_6021_, 1, v___x_6020_);
v___x_6022_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6022_, 0, v___x_6021_);
lean_ctor_set_uint8(v___x_6022_, sizeof(void*)*1, v___x_5892_);
v___x_6023_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6023_, 0, v___x_6019_);
lean_ctor_set(v___x_6023_, 1, v___x_6022_);
v___x_6024_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6024_, 0, v___x_6023_);
lean_ctor_set(v___x_6024_, 1, v___x_5895_);
v___x_6025_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6025_, 0, v___x_6024_);
lean_ctor_set(v___x_6025_, 1, v___x_5897_);
v___x_6026_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__17));
v___x_6027_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6027_, 0, v___x_6025_);
lean_ctor_set(v___x_6027_, 1, v___x_6026_);
v___x_6028_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6028_, 0, v___x_6027_);
lean_ctor_set(v___x_6028_, 1, v___x_5886_);
v___x_6029_ = l_Bool_repr___redArg(v_dsimp_5868_);
v___x_6030_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6030_, 0, v___x_6010_);
lean_ctor_set(v___x_6030_, 1, v___x_6029_);
v___x_6031_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6031_, 0, v___x_6030_);
lean_ctor_set_uint8(v___x_6031_, sizeof(void*)*1, v___x_5892_);
v___x_6032_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6032_, 0, v___x_6028_);
lean_ctor_set(v___x_6032_, 1, v___x_6031_);
v___x_6033_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6033_, 0, v___x_6032_);
lean_ctor_set(v___x_6033_, 1, v___x_5895_);
v___x_6034_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6034_, 0, v___x_6033_);
lean_ctor_set(v___x_6034_, 1, v___x_5897_);
v___x_6035_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__23));
v___x_6036_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6036_, 0, v___x_6034_);
lean_ctor_set(v___x_6036_, 1, v___x_6035_);
v___x_6037_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6037_, 0, v___x_6036_);
lean_ctor_set(v___x_6037_, 1, v___x_5886_);
v___x_6038_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__24, &l_Lean_Meta_instReprConfig_repr___redArg___closed__24_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__24);
v___x_6039_ = l_Bool_repr___redArg(v_failIfUnchanged_5869_);
v___x_6040_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6040_, 0, v___x_6038_);
lean_ctor_set(v___x_6040_, 1, v___x_6039_);
v___x_6041_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6041_, 0, v___x_6040_);
lean_ctor_set_uint8(v___x_6041_, sizeof(void*)*1, v___x_5892_);
v___x_6042_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6042_, 0, v___x_6037_);
lean_ctor_set(v___x_6042_, 1, v___x_6041_);
v___x_6043_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6043_, 0, v___x_6042_);
lean_ctor_set(v___x_6043_, 1, v___x_5895_);
v___x_6044_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6044_, 0, v___x_6043_);
lean_ctor_set(v___x_6044_, 1, v___x_5897_);
v___x_6045_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__19));
v___x_6046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6046_, 0, v___x_6044_);
lean_ctor_set(v___x_6046_, 1, v___x_6045_);
v___x_6047_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6047_, 0, v___x_6046_);
lean_ctor_set(v___x_6047_, 1, v___x_5886_);
v___x_6048_ = l_Bool_repr___redArg(v_ground_5870_);
v___x_6049_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6049_, 0, v___x_6000_);
lean_ctor_set(v___x_6049_, 1, v___x_6048_);
v___x_6050_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6050_, 0, v___x_6049_);
lean_ctor_set_uint8(v___x_6050_, sizeof(void*)*1, v___x_5892_);
v___x_6051_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6051_, 0, v___x_6047_);
lean_ctor_set(v___x_6051_, 1, v___x_6050_);
v___x_6052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6052_, 0, v___x_6051_);
lean_ctor_set(v___x_6052_, 1, v___x_5895_);
v___x_6053_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6053_, 0, v___x_6052_);
lean_ctor_set(v___x_6053_, 1, v___x_5897_);
v___x_6054_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__26));
v___x_6055_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6055_, 0, v___x_6053_);
lean_ctor_set(v___x_6055_, 1, v___x_6054_);
v___x_6056_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6056_, 0, v___x_6055_);
lean_ctor_set(v___x_6056_, 1, v___x_5886_);
v___x_6057_ = lean_obj_once(&l_Lean_Meta_instReprConfig_repr___redArg___closed__27, &l_Lean_Meta_instReprConfig_repr___redArg___closed__27_once, _init_l_Lean_Meta_instReprConfig_repr___redArg___closed__27);
v___x_6058_ = l_Bool_repr___redArg(v_unfoldPartialApp_5871_);
v___x_6059_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6059_, 0, v___x_6057_);
lean_ctor_set(v___x_6059_, 1, v___x_6058_);
v___x_6060_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6060_, 0, v___x_6059_);
lean_ctor_set_uint8(v___x_6060_, sizeof(void*)*1, v___x_5892_);
v___x_6061_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6061_, 0, v___x_6056_);
lean_ctor_set(v___x_6061_, 1, v___x_6060_);
v___x_6062_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6062_, 0, v___x_6061_);
lean_ctor_set(v___x_6062_, 1, v___x_5895_);
v___x_6063_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6063_, 0, v___x_6062_);
lean_ctor_set(v___x_6063_, 1, v___x_5897_);
v___x_6064_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__29));
v___x_6065_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6065_, 0, v___x_6063_);
lean_ctor_set(v___x_6065_, 1, v___x_6064_);
v___x_6066_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6066_, 0, v___x_6065_);
lean_ctor_set(v___x_6066_, 1, v___x_5886_);
v___x_6067_ = l_Bool_repr___redArg(v_zetaDelta_5872_);
v___x_6068_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6068_, 0, v___x_5972_);
lean_ctor_set(v___x_6068_, 1, v___x_6067_);
v___x_6069_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6069_, 0, v___x_6068_);
lean_ctor_set_uint8(v___x_6069_, sizeof(void*)*1, v___x_5892_);
v___x_6070_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6070_, 0, v___x_6066_);
lean_ctor_set(v___x_6070_, 1, v___x_6069_);
v___x_6071_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6071_, 0, v___x_6070_);
lean_ctor_set(v___x_6071_, 1, v___x_5895_);
v___x_6072_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6072_, 0, v___x_6071_);
lean_ctor_set(v___x_6072_, 1, v___x_5897_);
v___x_6073_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__31));
v___x_6074_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6074_, 0, v___x_6072_);
lean_ctor_set(v___x_6074_, 1, v___x_6073_);
v___x_6075_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6075_, 0, v___x_6074_);
lean_ctor_set(v___x_6075_, 1, v___x_5886_);
v___x_6076_ = l_Bool_repr___redArg(v_index_5873_);
v___x_6077_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6077_, 0, v___x_6010_);
lean_ctor_set(v___x_6077_, 1, v___x_6076_);
v___x_6078_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6078_, 0, v___x_6077_);
lean_ctor_set_uint8(v___x_6078_, sizeof(void*)*1, v___x_5892_);
v___x_6079_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6079_, 0, v___x_6075_);
lean_ctor_set(v___x_6079_, 1, v___x_6078_);
v___x_6080_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6080_, 0, v___x_6079_);
lean_ctor_set(v___x_6080_, 1, v___x_5895_);
v___x_6081_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6081_, 0, v___x_6080_);
lean_ctor_set(v___x_6081_, 1, v___x_5897_);
v___x_6082_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__21));
v___x_6083_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6083_, 0, v___x_6081_);
lean_ctor_set(v___x_6083_, 1, v___x_6082_);
v___x_6084_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6084_, 0, v___x_6083_);
lean_ctor_set(v___x_6084_, 1, v___x_5886_);
v___x_6085_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__22);
v___x_6086_ = l_Bool_repr___redArg(v_implicitDefEqProofs_5874_);
v___x_6087_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6087_, 0, v___x_6085_);
lean_ctor_set(v___x_6087_, 1, v___x_6086_);
v___x_6088_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6088_, 0, v___x_6087_);
lean_ctor_set_uint8(v___x_6088_, sizeof(void*)*1, v___x_5892_);
v___x_6089_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6089_, 0, v___x_6084_);
lean_ctor_set(v___x_6089_, 1, v___x_6088_);
v___x_6090_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6090_, 0, v___x_6089_);
lean_ctor_set(v___x_6090_, 1, v___x_5895_);
v___x_6091_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6091_, 0, v___x_6090_);
lean_ctor_set(v___x_6091_, 1, v___x_5897_);
v___x_6092_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__34));
v___x_6093_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6093_, 0, v___x_6091_);
lean_ctor_set(v___x_6093_, 1, v___x_6092_);
v___x_6094_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6094_, 0, v___x_6093_);
lean_ctor_set(v___x_6094_, 1, v___x_5886_);
v___x_6095_ = l_Bool_repr___redArg(v_zetaUnused_5875_);
v___x_6096_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6096_, 0, v___x_5913_);
lean_ctor_set(v___x_6096_, 1, v___x_6095_);
v___x_6097_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6097_, 0, v___x_6096_);
lean_ctor_set_uint8(v___x_6097_, sizeof(void*)*1, v___x_5892_);
v___x_6098_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6098_, 0, v___x_6094_);
lean_ctor_set(v___x_6098_, 1, v___x_6097_);
v___x_6099_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6099_, 0, v___x_6098_);
lean_ctor_set(v___x_6099_, 1, v___x_5895_);
v___x_6100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6100_, 0, v___x_6099_);
lean_ctor_set(v___x_6100_, 1, v___x_5897_);
v___x_6101_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__24));
v___x_6102_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6102_, 0, v___x_6100_);
lean_ctor_set(v___x_6102_, 1, v___x_6101_);
v___x_6103_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6103_, 0, v___x_6102_);
lean_ctor_set(v___x_6103_, 1, v___x_5886_);
v___x_6104_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__25);
v___x_6105_ = l_Bool_repr___redArg(v_catchRuntime_5876_);
v___x_6106_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6106_, 0, v___x_6104_);
lean_ctor_set(v___x_6106_, 1, v___x_6105_);
v___x_6107_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6107_, 0, v___x_6106_);
lean_ctor_set_uint8(v___x_6107_, sizeof(void*)*1, v___x_5892_);
v___x_6108_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6108_, 0, v___x_6103_);
lean_ctor_set(v___x_6108_, 1, v___x_6107_);
v___x_6109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6109_, 0, v___x_6108_);
lean_ctor_set(v___x_6109_, 1, v___x_5895_);
v___x_6110_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6110_, 0, v___x_6109_);
lean_ctor_set(v___x_6110_, 1, v___x_5897_);
v___x_6111_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__36));
v___x_6112_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6112_, 0, v___x_6110_);
lean_ctor_set(v___x_6112_, 1, v___x_6111_);
v___x_6113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6113_, 0, v___x_6112_);
lean_ctor_set(v___x_6113_, 1, v___x_5886_);
v___x_6114_ = l_Bool_repr___redArg(v_zetaHave_5877_);
v___x_6115_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6115_, 0, v___x_5888_);
lean_ctor_set(v___x_6115_, 1, v___x_6114_);
v___x_6116_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6116_, 0, v___x_6115_);
lean_ctor_set_uint8(v___x_6116_, sizeof(void*)*1, v___x_5892_);
v___x_6117_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6117_, 0, v___x_6113_);
lean_ctor_set(v___x_6117_, 1, v___x_6116_);
v___x_6118_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6118_, 0, v___x_6117_);
lean_ctor_set(v___x_6118_, 1, v___x_5895_);
v___x_6119_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6119_, 0, v___x_6118_);
lean_ctor_set(v___x_6119_, 1, v___x_5897_);
v___x_6120_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__27));
v___x_6121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6121_, 0, v___x_6119_);
lean_ctor_set(v___x_6121_, 1, v___x_6120_);
v___x_6122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6122_, 0, v___x_6121_);
lean_ctor_set(v___x_6122_, 1, v___x_5886_);
v___x_6123_ = l_Bool_repr___redArg(v_letToHave_5878_);
v___x_6124_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6124_, 0, v___x_5972_);
lean_ctor_set(v___x_6124_, 1, v___x_6123_);
v___x_6125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6125_, 0, v___x_6124_);
lean_ctor_set_uint8(v___x_6125_, sizeof(void*)*1, v___x_5892_);
v___x_6126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6126_, 0, v___x_6122_);
lean_ctor_set(v___x_6126_, 1, v___x_6125_);
v___x_6127_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6127_, 0, v___x_6126_);
lean_ctor_set(v___x_6127_, 1, v___x_5895_);
v___x_6128_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6128_, 0, v___x_6127_);
lean_ctor_set(v___x_6128_, 1, v___x_5897_);
v___x_6129_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__29));
v___x_6130_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6130_, 0, v___x_6128_);
lean_ctor_set(v___x_6130_, 1, v___x_6129_);
v___x_6131_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6131_, 0, v___x_6130_);
lean_ctor_set(v___x_6131_, 1, v___x_5886_);
v___x_6132_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__30);
v___x_6133_ = l_Bool_repr___redArg(v_congrConsts_5879_);
v___x_6134_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6134_, 0, v___x_6132_);
lean_ctor_set(v___x_6134_, 1, v___x_6133_);
v___x_6135_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6135_, 0, v___x_6134_);
lean_ctor_set_uint8(v___x_6135_, sizeof(void*)*1, v___x_5892_);
v___x_6136_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6136_, 0, v___x_6131_);
lean_ctor_set(v___x_6136_, 1, v___x_6135_);
v___x_6137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6137_, 0, v___x_6136_);
lean_ctor_set(v___x_6137_, 1, v___x_5895_);
v___x_6138_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6138_, 0, v___x_6137_);
lean_ctor_set(v___x_6138_, 1, v___x_5897_);
v___x_6139_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__32));
v___x_6140_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6140_, 0, v___x_6138_);
lean_ctor_set(v___x_6140_, 1, v___x_6139_);
v___x_6141_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6141_, 0, v___x_6140_);
lean_ctor_set(v___x_6141_, 1, v___x_5886_);
v___x_6142_ = l_Bool_repr___redArg(v_bitVecOfNat_5880_);
v___x_6143_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6143_, 0, v___x_6132_);
lean_ctor_set(v___x_6143_, 1, v___x_6142_);
v___x_6144_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6144_, 0, v___x_6143_);
lean_ctor_set_uint8(v___x_6144_, sizeof(void*)*1, v___x_5892_);
v___x_6145_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6145_, 0, v___x_6141_);
lean_ctor_set(v___x_6145_, 1, v___x_6144_);
v___x_6146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6146_, 0, v___x_6145_);
lean_ctor_set(v___x_6146_, 1, v___x_5895_);
v___x_6147_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6147_, 0, v___x_6146_);
lean_ctor_set(v___x_6147_, 1, v___x_5897_);
v___x_6148_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__34));
v___x_6149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6149_, 0, v___x_6147_);
lean_ctor_set(v___x_6149_, 1, v___x_6148_);
v___x_6150_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6150_, 0, v___x_6149_);
lean_ctor_set(v___x_6150_, 1, v___x_5886_);
v___x_6151_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__35);
v___x_6152_ = l_Bool_repr___redArg(v_warnExponents_5881_);
v___x_6153_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6153_, 0, v___x_6151_);
lean_ctor_set(v___x_6153_, 1, v___x_6152_);
v___x_6154_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6154_, 0, v___x_6153_);
lean_ctor_set_uint8(v___x_6154_, sizeof(void*)*1, v___x_5892_);
v___x_6155_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6155_, 0, v___x_6150_);
lean_ctor_set(v___x_6155_, 1, v___x_6154_);
v___x_6156_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6156_, 0, v___x_6155_);
lean_ctor_set(v___x_6156_, 1, v___x_5895_);
v___x_6157_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6157_, 0, v___x_6156_);
lean_ctor_set(v___x_6157_, 1, v___x_5897_);
v___x_6158_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__37));
v___x_6159_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6159_, 0, v___x_6157_);
lean_ctor_set(v___x_6159_, 1, v___x_6158_);
v___x_6160_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6160_, 0, v___x_6159_);
lean_ctor_set(v___x_6160_, 1, v___x_5886_);
v___x_6161_ = l_Bool_repr___redArg(v_suggestions_5882_);
v___x_6162_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6162_, 0, v___x_6132_);
lean_ctor_set(v___x_6162_, 1, v___x_6161_);
v___x_6163_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6163_, 0, v___x_6162_);
lean_ctor_set_uint8(v___x_6163_, sizeof(void*)*1, v___x_5892_);
v___x_6164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6164_, 0, v___x_6160_);
lean_ctor_set(v___x_6164_, 1, v___x_6163_);
v___x_6165_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6165_, 0, v___x_6164_);
lean_ctor_set(v___x_6165_, 1, v___x_5895_);
v___x_6166_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6166_, 0, v___x_6165_);
lean_ctor_set(v___x_6166_, 1, v___x_5897_);
v___x_6167_ = ((lean_object*)(l_Lean_Meta_instReprConfig__1_repr___redArg___closed__39));
v___x_6168_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6168_, 0, v___x_6166_);
lean_ctor_set(v___x_6168_, 1, v___x_6167_);
v___x_6169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6169_, 0, v___x_6168_);
lean_ctor_set(v___x_6169_, 1, v___x_5886_);
v___x_6170_ = lean_obj_once(&l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40, &l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40_once, _init_l_Lean_Meta_instReprConfig__1_repr___redArg___closed__40);
v___x_6171_ = l_Option_repr___at___00Lean_Meta_instReprConfig__1_repr_spec__0(v_maxSuggestions_5883_, v___x_5914_);
v___x_6172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6172_, 0, v___x_6170_);
lean_ctor_set(v___x_6172_, 1, v___x_6171_);
v___x_6173_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6173_, 0, v___x_6172_);
lean_ctor_set_uint8(v___x_6173_, sizeof(void*)*1, v___x_5892_);
v___x_6174_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6174_, 0, v___x_6169_);
lean_ctor_set(v___x_6174_, 1, v___x_6173_);
v___x_6175_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6175_, 0, v___x_6174_);
lean_ctor_set(v___x_6175_, 1, v___x_5895_);
v___x_6176_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6176_, 0, v___x_6175_);
lean_ctor_set(v___x_6176_, 1, v___x_5897_);
v___x_6177_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__39));
v___x_6178_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6178_, 0, v___x_6176_);
lean_ctor_set(v___x_6178_, 1, v___x_6177_);
v___x_6179_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6179_, 0, v___x_6178_);
lean_ctor_set(v___x_6179_, 1, v___x_5886_);
v___x_6180_ = l_Bool_repr___redArg(v_locals_5884_);
v___x_6181_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6181_, 0, v___x_6000_);
lean_ctor_set(v___x_6181_, 1, v___x_6180_);
v___x_6182_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6182_, 0, v___x_6181_);
lean_ctor_set_uint8(v___x_6182_, sizeof(void*)*1, v___x_5892_);
v___x_6183_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6183_, 0, v___x_6179_);
lean_ctor_set(v___x_6183_, 1, v___x_6182_);
v___x_6184_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6184_, 0, v___x_6183_);
lean_ctor_set(v___x_6184_, 1, v___x_5895_);
v___x_6185_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6185_, 0, v___x_6184_);
lean_ctor_set(v___x_6185_, 1, v___x_5897_);
v___x_6186_ = ((lean_object*)(l_Lean_Meta_instReprConfig_repr___redArg___closed__41));
v___x_6187_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6187_, 0, v___x_6185_);
lean_ctor_set(v___x_6187_, 1, v___x_6186_);
v___x_6188_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6188_, 0, v___x_6187_);
lean_ctor_set(v___x_6188_, 1, v___x_5886_);
v___x_6189_ = l_Bool_repr___redArg(v_instances_5885_);
v___x_6190_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6190_, 0, v___x_5972_);
lean_ctor_set(v___x_6190_, 1, v___x_6189_);
v___x_6191_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6191_, 0, v___x_6190_);
lean_ctor_set_uint8(v___x_6191_, sizeof(void*)*1, v___x_5892_);
v___x_6192_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6192_, 0, v___x_6188_);
lean_ctor_set(v___x_6192_, 1, v___x_6191_);
v___x_6193_ = lean_obj_once(&l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10, &l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10_once, _init_l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__10);
v___x_6194_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__11));
v___x_6195_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6195_, 0, v___x_6194_);
lean_ctor_set(v___x_6195_, 1, v___x_6192_);
v___x_6196_ = ((lean_object*)(l_Lean_Syntax_instReprTSyntax_repr___redArg___closed__12));
v___x_6197_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_6197_, 0, v___x_6195_);
lean_ctor_set(v___x_6197_, 1, v___x_6196_);
v___x_6198_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6198_, 0, v___x_6193_);
lean_ctor_set(v___x_6198_, 1, v___x_6197_);
v___x_6199_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_6199_, 0, v___x_6198_);
lean_ctor_set_uint8(v___x_6199_, sizeof(void*)*1, v___x_5892_);
return v___x_6199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr(lean_object* v_x_6200_, lean_object* v_prec_6201_){
_start:
{
lean_object* v___x_6202_; 
v___x_6202_ = l_Lean_Meta_instReprConfig__1_repr___redArg(v_x_6200_);
return v___x_6202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReprConfig__1_repr___boxed(lean_object* v_x_6203_, lean_object* v_prec_6204_){
_start:
{
lean_object* v_res_6205_; 
v_res_6205_ = l_Lean_Meta_instReprConfig__1_repr(v_x_6203_, v_prec_6204_);
lean_dec(v_prec_6204_);
return v_res_6205_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object* v_a_6208_, lean_object* v_x_6209_){
_start:
{
if (lean_obj_tag(v_x_6209_) == 0)
{
uint8_t v___x_6210_; 
v___x_6210_ = 0;
return v___x_6210_;
}
else
{
lean_object* v_head_6211_; lean_object* v_tail_6212_; uint8_t v___x_6213_; 
v_head_6211_ = lean_ctor_get(v_x_6209_, 0);
v_tail_6212_ = lean_ctor_get(v_x_6209_, 1);
v___x_6213_ = lean_nat_dec_eq(v_a_6208_, v_head_6211_);
if (v___x_6213_ == 0)
{
v_x_6209_ = v_tail_6212_;
goto _start;
}
else
{
return v___x_6213_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0___boxed(lean_object* v_a_6215_, lean_object* v_x_6216_){
_start:
{
uint8_t v_res_6217_; lean_object* v_r_6218_; 
v_res_6217_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_a_6215_, v_x_6216_);
lean_dec(v_x_6216_);
lean_dec(v_a_6215_);
v_r_6218_ = lean_box(v_res_6217_);
return v_r_6218_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_contains(lean_object* v_x_6219_, lean_object* v_x_6220_){
_start:
{
switch(lean_obj_tag(v_x_6219_))
{
case 0:
{
uint8_t v___x_6221_; 
v___x_6221_ = 1;
return v___x_6221_;
}
case 1:
{
lean_object* v_idxs_6222_; uint8_t v___x_6223_; 
v_idxs_6222_ = lean_ctor_get(v_x_6219_, 0);
v___x_6223_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_x_6220_, v_idxs_6222_);
return v___x_6223_;
}
default: 
{
lean_object* v_idxs_6224_; uint8_t v___x_6225_; 
v_idxs_6224_ = lean_ctor_get(v_x_6219_, 0);
v___x_6225_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_x_6220_, v_idxs_6224_);
if (v___x_6225_ == 0)
{
uint8_t v___x_6226_; 
v___x_6226_ = 1;
return v___x_6226_;
}
else
{
uint8_t v___x_6227_; 
v___x_6227_ = 0;
return v___x_6227_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_contains___boxed(lean_object* v_x_6228_, lean_object* v_x_6229_){
_start:
{
uint8_t v_res_6230_; lean_object* v_r_6231_; 
v_res_6230_ = l_Lean_Meta_Occurrences_contains(v_x_6228_, v_x_6229_);
lean_dec(v_x_6229_);
lean_dec(v_x_6228_);
v_r_6231_ = lean_box(v_res_6230_);
return v_r_6231_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Occurrences_isAll(lean_object* v_x_6232_){
_start:
{
if (lean_obj_tag(v_x_6232_) == 0)
{
uint8_t v___x_6233_; 
v___x_6233_ = 1;
return v___x_6233_;
}
else
{
uint8_t v___x_6234_; 
v___x_6234_ = 0;
return v___x_6234_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Occurrences_isAll___boxed(lean_object* v_x_6235_){
_start:
{
uint8_t v_res_6236_; lean_object* v_r_6237_; 
v_res_6236_ = l_Lean_Meta_Occurrences_isAll(v_x_6235_);
lean_dec(v_x_6235_);
v_r_6237_ = lean_box(v_res_6236_);
return v_r_6237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx___impl(uint8_t v_x_6238_){
_start:
{
lean_object* v___x_6239_; lean_object* v___x_6240_; 
v___x_6239_ = lean_box(v_x_6238_);
v___x_6240_ = lean_obj_tag_nat(v___x_6239_);
lean_dec(v___x_6239_);
return v___x_6240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorIdx___impl___boxed(lean_object* v_x_6241_){
_start:
{
uint8_t v_x_4__boxed_6242_; lean_object* v_res_6243_; 
v_x_4__boxed_6242_ = lean_unbox(v_x_6241_);
v_res_6243_ = l_Lean_Meta_ApplyNewGoals_ctorIdx___impl(v_x_4__boxed_6242_);
return v_res_6243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg(lean_object* v_k_6244_){
_start:
{
lean_inc(v_k_6244_);
return v_k_6244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___redArg___boxed(lean_object* v_k_6245_){
_start:
{
lean_object* v_res_6246_; 
v_res_6246_ = l_Lean_Meta_ApplyNewGoals_ctorElim___redArg(v_k_6245_);
lean_dec(v_k_6245_);
return v_res_6246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim(lean_object* v_motive_6247_, lean_object* v_ctorIdx_6248_, uint8_t v_t_6249_, lean_object* v_h_6250_, lean_object* v_k_6251_){
_start:
{
lean_inc(v_k_6251_);
return v_k_6251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_ctorElim___boxed(lean_object* v_motive_6252_, lean_object* v_ctorIdx_6253_, lean_object* v_t_6254_, lean_object* v_h_6255_, lean_object* v_k_6256_){
_start:
{
uint8_t v_t_boxed_6257_; lean_object* v_res_6258_; 
v_t_boxed_6257_ = lean_unbox(v_t_6254_);
v_res_6258_ = l_Lean_Meta_ApplyNewGoals_ctorElim(v_motive_6252_, v_ctorIdx_6253_, v_t_boxed_6257_, v_h_6255_, v_k_6256_);
lean_dec(v_k_6256_);
lean_dec(v_ctorIdx_6253_);
return v_res_6258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg(lean_object* v_nonDependentFirst_6259_){
_start:
{
lean_inc(v_nonDependentFirst_6259_);
return v_nonDependentFirst_6259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg___boxed(lean_object* v_nonDependentFirst_6260_){
_start:
{
lean_object* v_res_6261_; 
v_res_6261_ = l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___redArg(v_nonDependentFirst_6260_);
lean_dec(v_nonDependentFirst_6260_);
return v_res_6261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim(lean_object* v_motive_6262_, uint8_t v_t_6263_, lean_object* v_h_6264_, lean_object* v_nonDependentFirst_6265_){
_start:
{
lean_inc(v_nonDependentFirst_6265_);
return v_nonDependentFirst_6265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim___boxed(lean_object* v_motive_6266_, lean_object* v_t_6267_, lean_object* v_h_6268_, lean_object* v_nonDependentFirst_6269_){
_start:
{
uint8_t v_t_boxed_6270_; lean_object* v_res_6271_; 
v_t_boxed_6270_ = lean_unbox(v_t_6267_);
v_res_6271_ = l_Lean_Meta_ApplyNewGoals_nonDependentFirst_elim(v_motive_6266_, v_t_boxed_6270_, v_h_6268_, v_nonDependentFirst_6269_);
lean_dec(v_nonDependentFirst_6269_);
return v_res_6271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg(lean_object* v_nonDependentOnly_6272_){
_start:
{
lean_inc(v_nonDependentOnly_6272_);
return v_nonDependentOnly_6272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg___boxed(lean_object* v_nonDependentOnly_6273_){
_start:
{
lean_object* v_res_6274_; 
v_res_6274_ = l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___redArg(v_nonDependentOnly_6273_);
lean_dec(v_nonDependentOnly_6273_);
return v_res_6274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim(lean_object* v_motive_6275_, uint8_t v_t_6276_, lean_object* v_h_6277_, lean_object* v_nonDependentOnly_6278_){
_start:
{
lean_inc(v_nonDependentOnly_6278_);
return v_nonDependentOnly_6278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim___boxed(lean_object* v_motive_6279_, lean_object* v_t_6280_, lean_object* v_h_6281_, lean_object* v_nonDependentOnly_6282_){
_start:
{
uint8_t v_t_boxed_6283_; lean_object* v_res_6284_; 
v_t_boxed_6283_ = lean_unbox(v_t_6280_);
v_res_6284_ = l_Lean_Meta_ApplyNewGoals_nonDependentOnly_elim(v_motive_6279_, v_t_boxed_6283_, v_h_6281_, v_nonDependentOnly_6282_);
lean_dec(v_nonDependentOnly_6282_);
return v_res_6284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg(lean_object* v_all_6285_){
_start:
{
lean_inc(v_all_6285_);
return v_all_6285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___redArg___boxed(lean_object* v_all_6286_){
_start:
{
lean_object* v_res_6287_; 
v_res_6287_ = l_Lean_Meta_ApplyNewGoals_all_elim___redArg(v_all_6286_);
lean_dec(v_all_6286_);
return v_res_6287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim(lean_object* v_motive_6288_, uint8_t v_t_6289_, lean_object* v_h_6290_, lean_object* v_all_6291_){
_start:
{
lean_inc(v_all_6291_);
return v_all_6291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ApplyNewGoals_all_elim___boxed(lean_object* v_motive_6292_, lean_object* v_t_6293_, lean_object* v_h_6294_, lean_object* v_all_6295_){
_start:
{
uint8_t v_t_boxed_6296_; lean_object* v_res_6297_; 
v_t_boxed_6296_ = lean_unbox(v_t_6293_);
v_res_6297_ = l_Lean_Meta_ApplyNewGoals_all_elim(v_motive_6292_, v_t_boxed_6296_, v_h_6294_, v_all_6295_);
lean_dec(v_all_6295_);
return v_res_6297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_getConfigItems(lean_object* v_c_6311_){
_start:
{
lean_object* v___x_6312_; uint8_t v___x_6313_; 
v___x_6312_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
lean_inc(v_c_6311_);
v___x_6313_ = l_Lean_Syntax_isOfKind(v_c_6311_, v___x_6312_);
if (v___x_6313_ == 0)
{
lean_object* v___x_6314_; uint8_t v___x_6315_; 
v___x_6314_ = ((lean_object*)(l_Lean_Parser_Tactic_getConfigItems___closed__2));
lean_inc(v_c_6311_);
v___x_6315_ = l_Lean_Syntax_isOfKind(v_c_6311_, v___x_6314_);
if (v___x_6315_ == 0)
{
lean_object* v___x_6316_; uint8_t v___x_6317_; 
v___x_6316_ = ((lean_object*)(l_Lean_Parser_Tactic_getConfigItems___closed__4));
lean_inc(v_c_6311_);
v___x_6317_ = l_Lean_Syntax_isOfKind(v_c_6311_, v___x_6316_);
if (v___x_6317_ == 0)
{
lean_object* v___x_6318_; 
lean_dec(v_c_6311_);
v___x_6318_ = ((lean_object*)(l_Lean_mkSepArray___closed__0));
return v___x_6318_;
}
else
{
lean_object* v___x_6319_; lean_object* v___x_6320_; lean_object* v___x_6321_; 
v___x_6319_ = lean_unsigned_to_nat(1u);
v___x_6320_ = lean_mk_empty_array_with_capacity(v___x_6319_);
v___x_6321_ = lean_array_push(v___x_6320_, v_c_6311_);
return v___x_6321_;
}
}
else
{
lean_object* v___x_6322_; lean_object* v___x_6323_; lean_object* v___x_6324_; 
v___x_6322_ = lean_unsigned_to_nat(0u);
v___x_6323_ = l_Lean_Syntax_getArg(v_c_6311_, v___x_6322_);
lean_dec(v_c_6311_);
v___x_6324_ = l_Lean_Syntax_getArgs(v___x_6323_);
lean_dec(v___x_6323_);
return v___x_6324_;
}
}
else
{
lean_object* v___x_6325_; lean_object* v___x_6326_; lean_object* v___x_6327_; lean_object* v___x_6328_; uint8_t v___x_6329_; 
v___x_6325_ = l_Lean_Syntax_getArgs(v_c_6311_);
lean_dec(v_c_6311_);
v___x_6326_ = lean_unsigned_to_nat(0u);
v___x_6327_ = ((lean_object*)(l_Lean_Syntax_SepArray_ofElems___closed__0));
v___x_6328_ = lean_array_get_size(v___x_6325_);
v___x_6329_ = lean_nat_dec_lt(v___x_6326_, v___x_6328_);
if (v___x_6329_ == 0)
{
lean_dec_ref(v___x_6325_);
return v___x_6327_;
}
else
{
size_t v___x_6330_; size_t v___x_6331_; lean_object* v___x_6332_; 
v___x_6330_ = ((size_t)0ULL);
v___x_6331_ = lean_usize_of_nat(v___x_6328_);
v___x_6332_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(v___x_6325_, v___x_6330_, v___x_6331_, v___x_6327_);
lean_dec_ref(v___x_6325_);
return v___x_6332_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(lean_object* v_as_6333_, size_t v_i_6334_, size_t v_stop_6335_, lean_object* v_b_6336_){
_start:
{
uint8_t v___x_6337_; 
v___x_6337_ = lean_usize_dec_eq(v_i_6334_, v_stop_6335_);
if (v___x_6337_ == 0)
{
lean_object* v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; size_t v___x_6341_; size_t v___x_6342_; 
v___x_6338_ = lean_array_uget_borrowed(v_as_6333_, v_i_6334_);
lean_inc(v___x_6338_);
v___x_6339_ = l_Lean_Parser_Tactic_getConfigItems(v___x_6338_);
v___x_6340_ = l_Array_append___redArg(v_b_6336_, v___x_6339_);
lean_dec_ref(v___x_6339_);
v___x_6341_ = ((size_t)1ULL);
v___x_6342_ = lean_usize_add(v_i_6334_, v___x_6341_);
v_i_6334_ = v___x_6342_;
v_b_6336_ = v___x_6340_;
goto _start;
}
else
{
return v_b_6336_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0___boxed(lean_object* v_as_6344_, lean_object* v_i_6345_, lean_object* v_stop_6346_, lean_object* v_b_6347_){
_start:
{
size_t v_i_boxed_6348_; size_t v_stop_boxed_6349_; lean_object* v_res_6350_; 
v_i_boxed_6348_ = lean_unbox_usize(v_i_6345_);
lean_dec(v_i_6345_);
v_stop_boxed_6349_ = lean_unbox_usize(v_stop_6346_);
lean_dec(v_stop_6346_);
v_res_6350_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Parser_Tactic_getConfigItems_spec__0(v_as_6344_, v_i_boxed_6348_, v_stop_boxed_6349_, v_b_6347_);
lean_dec_ref(v_as_6344_);
return v_res_6350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_mkOptConfig(lean_object* v_items_6351_){
_start:
{
lean_object* v___x_6352_; lean_object* v___x_6353_; lean_object* v___x_6354_; lean_object* v___x_6355_; lean_object* v___x_6356_; 
v___x_6352_ = ((lean_object*)(l_Lean_Parser_Tactic_getConfigItems___closed__2));
v___x_6353_ = lean_box(2);
v___x_6354_ = ((lean_object*)(l_Lean_mkOptionalNode___closed__1));
v___x_6355_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6355_, 0, v___x_6353_);
lean_ctor_set(v___x_6355_, 1, v___x_6354_);
lean_ctor_set(v___x_6355_, 2, v_items_6351_);
v___x_6356_ = l_Lean_Syntax_node1(v___x_6353_, v___x_6352_, v___x_6355_);
return v___x_6356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_appendConfig(lean_object* v_cfg_6357_, lean_object* v_cfg_x27_6358_){
_start:
{
lean_object* v___x_6359_; lean_object* v___x_6360_; lean_object* v___x_6361_; lean_object* v___x_6362_; 
v___x_6359_ = l_Lean_Parser_Tactic_getConfigItems(v_cfg_6357_);
v___x_6360_ = l_Lean_Parser_Tactic_getConfigItems(v_cfg_x27_6358_);
v___x_6361_ = l_Array_append___redArg(v___x_6359_, v___x_6360_);
lean_dec_ref(v___x_6360_);
v___x_6362_ = l_Lean_Parser_Tactic_mkOptConfig(v___x_6361_);
return v___x_6362_;
}
}
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_MetaTypes(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_WFTactics(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Meta_Defs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_version_major = _init_l_Lean_version_major();
lean_mark_persistent(l_Lean_version_major);
l_Lean_version_minor = _init_l_Lean_version_minor();
lean_mark_persistent(l_Lean_version_minor);
l_Lean_version_patch = _init_l_Lean_version_patch();
lean_mark_persistent(l_Lean_version_patch);
l_Lean_githash = _init_l_Lean_githash();
lean_mark_persistent(l_Lean_githash);
l_Lean_version_isRelease = _init_l_Lean_version_isRelease();
l_Lean_version_specialDesc = _init_l_Lean_version_specialDesc();
lean_mark_persistent(l_Lean_version_specialDesc);
l_Lean_versionStringCore = _init_l_Lean_versionStringCore();
lean_mark_persistent(l_Lean_versionStringCore);
l_Lean_versionString = _init_l_Lean_versionString();
lean_mark_persistent(l_Lean_versionString);
l_Lean_toolchain = _init_l_Lean_toolchain();
lean_mark_persistent(l_Lean_toolchain);
l_Lean_idBeginEscape = _init_l_Lean_idBeginEscape();
l_Lean_idEndEscape = _init_l_Lean_idEndEscape();
l_Lean_Syntax_decodeQuotedChar___boxed__const__1 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__1();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__1);
l_Lean_Syntax_decodeQuotedChar___boxed__const__2 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__2();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__2);
l_Lean_Syntax_decodeQuotedChar___boxed__const__3 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__3();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__3);
l_Lean_Syntax_decodeQuotedChar___boxed__const__4 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__4();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__4);
l_Lean_Syntax_decodeQuotedChar___boxed__const__5 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__5();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__5);
l_Lean_Syntax_decodeQuotedChar___boxed__const__6 = _init_l_Lean_Syntax_decodeQuotedChar___boxed__const__6();
lean_mark_persistent(l_Lean_Syntax_decodeQuotedChar___boxed__const__6);
l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1 = _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1();
lean_mark_persistent(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__1);
l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2 = _init_l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2();
lean_mark_persistent(l___private_Init_Meta_Defs_0__Lean_Syntax_splitNameLitAux___closed__1___boxed__const__2);
l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1 = _init_l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1();
lean_mark_persistent(l___private_Init_Meta_Defs_0__Lean_Syntax_decodeInterpStrQuotedChar___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_MetaTypes(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Meta_Defs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Prelude(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Init_MetaTypes(uint8_t builtin);
lean_object* initialize_Init_Data_Array_GetLit(uint8_t builtin);
lean_object* initialize_Init_Data_Char_Basic(uint8_t builtin);
lean_object* initialize_Init_MetaTypes(uint8_t builtin);
lean_object* initialize_Init_WFTactics(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Meta_Defs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_GetLit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Char_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_MetaTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Meta_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Meta_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Meta_Defs(builtin);
}
#ifdef __cplusplus
}
#endif
