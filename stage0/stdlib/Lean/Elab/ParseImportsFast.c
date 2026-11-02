// Lean compiler output
// Module: Lean.Elab.ParseImportsFast
// Imports: public import Lean.Parser.Module
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
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
extern uint32_t l_Lean_idBeginEscape;
uint8_t l_Lean_isLetterLike(uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t l_Lean_isSubScriptAlnum(uint32_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
extern uint32_t l_Lean_idEndEscape;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_instToJsonModuleHeader_toJson(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_Lean_String_toFileMap(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
static const lean_array_object l_Lean_ParseImports_instInhabitedState_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ParseImports_instInhabitedState_default___closed__0 = (const lean_object*)&l_Lean_ParseImports_instInhabitedState_default___closed__0_value;
static const lean_ctor_object l_Lean_ParseImports_instInhabitedState_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_ParseImports_instInhabitedState_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_ParseImports_instInhabitedState_default___closed__1 = (const lean_object*)&l_Lean_ParseImports_instInhabitedState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_ParseImports_instInhabitedState_default = (const lean_object*)&l_Lean_ParseImports_instInhabitedState_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_ParseImports_instInhabitedState = (const lean_object*)&l_Lean_ParseImports_instInhabitedState_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_ParseImports_instInhabitedParser_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParseImports_skip___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lean_ParseImports_instInhabitedParser = (const lean_object*)&l_Lean_ParseImports_instInhabitedParser_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_setPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkError(lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_State_mkEOIError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unexpected end of input"};
static const lean_object* l_Lean_ParseImports_State_mkEOIError___closed__0 = (const lean_object*)&l_Lean_ParseImports_State_mkEOIError___closed__0_value;
static const lean_ctor_object l_Lean_ParseImports_State_mkEOIError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParseImports_State_mkEOIError___closed__0_value)}};
static const lean_object* l_Lean_ParseImports_State_mkEOIError___closed__1 = (const lean_object*)&l_Lean_ParseImports_State_mkEOIError___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkEOIError(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_clearError(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unterminated comment"};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_takeWhile___lam__0(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_andthen(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_instAndThenParser___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ParseImports_instAndThenParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParseImports_instAndThenParser___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParseImports_instAndThenParser___closed__0 = (const lean_object*)&l_Lean_ParseImports_instAndThenParser___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_ParseImports_instAndThenParser = (const lean_object*)&l_Lean_ParseImports_instAndThenParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_whitespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "tabs are not allowed; please configure your editor to expand them"};
static const lean_object* l_Lean_ParseImports_whitespace___closed__0 = (const lean_object*)&l_Lean_ParseImports_whitespace___closed__0_value;
static const lean_ctor_object l_Lean_ParseImports_whitespace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParseImports_whitespace___closed__0_value)}};
static const lean_object* l_Lean_ParseImports_whitespace___closed__1 = (const lean_object*)&l_Lean_ParseImports_whitespace___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_keyword___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_ParseImports_keyword___lam__0___closed__0 = (const lean_object*)&l_Lean_ParseImports_keyword___lam__0___closed__0_value;
static const lean_string_object l_Lean_ParseImports_keyword___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` expected"};
static const lean_object* l_Lean_ParseImports_keyword___lam__0___closed__1 = (const lean_object*)&l_Lean_ParseImports_keyword___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdCont(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdCont___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_pushImport(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestCold(uint32_t);
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestCold___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestFast(uint32_t);
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestFast___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected identifier"};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1_value;
static const lean_string_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unterminated identifier escape"};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ParseImports_moduleIdent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ParseImports_moduleIdent___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ParseImports_moduleIdent___closed__0 = (const lean_object*)&l_Lean_ParseImports_moduleIdent___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_atomic(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_manyImports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "cannot use 'public', 'meta', or 'all' without 'module'"};
static const lean_object* l_Lean_ParseImports_manyImports___closed__0 = (const lean_object*)&l_Lean_ParseImports_manyImports___closed__0_value;
static const lean_ctor_object l_Lean_ParseImports_manyImports___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_ParseImports_manyImports___closed__0_value)}};
static const lean_object* l_Lean_ParseImports_manyImports___closed__1 = (const lean_object*)&l_Lean_ParseImports_manyImports___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Init"};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 102, 12, 179, 200, 220, 30, 26)}};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "`import` expected"};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1 = (const lean_object*)&l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0 = (const lean_object*)&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0_value;
static const lean_string_object l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1 = (const lean_object*)&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1_value;
static const lean_string_object l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "import"};
static const lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2 = (const lean_object*)&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2_value;
static const lean_string_object l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "all"};
static const lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3 = (const lean_object*)&l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ParseImports_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "module"};
static const lean_object* l_Lean_ParseImports_main___closed__0 = (const lean_object*)&l_Lean_ParseImports_main___closed__0_value;
static const lean_string_object l_Lean_ParseImports_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "prelude"};
static const lean_object* l_Lean_ParseImports_main___closed__1 = (const lean_object*)&l_Lean_ParseImports_main___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ParseImports_main(lean_object*, lean_object*);
static const lean_string_object l_Lean_parseImports_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_parseImports_x27___closed__0 = (const lean_object*)&l_Lean_parseImports_x27___closed__0_value;
static const lean_string_object l_Lean_parseImports_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_parseImports_x27___closed__1 = (const lean_object*)&l_Lean_parseImports_x27___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_parseImports_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseImports_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonPrintImportResult_toJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1(lean_object*);
static const lean_string_object l_Lean_instToJsonPrintImportResult_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "result"};
static const lean_object* l_Lean_instToJsonPrintImportResult_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonPrintImportResult_toJson___closed__0_value;
static const lean_string_object l_Lean_instToJsonPrintImportResult_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "errors"};
static const lean_object* l_Lean_instToJsonPrintImportResult_toJson___closed__1 = (const lean_object*)&l_Lean_instToJsonPrintImportResult_toJson___closed__1_value;
static const lean_array_object l_Lean_instToJsonPrintImportResult_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instToJsonPrintImportResult_toJson___closed__2 = (const lean_object*)&l_Lean_instToJsonPrintImportResult_toJson___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportResult_toJson(lean_object*);
static const lean_closure_object l_Lean_instToJsonPrintImportResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonPrintImportResult_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonPrintImportResult___closed__0 = (const lean_object*)&l_Lean_instToJsonPrintImportResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonPrintImportResult = (const lean_object*)&l_Lean_instToJsonPrintImportResult___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0(lean_object*);
static const lean_string_object l_Lean_instToJsonPrintImportsResult_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "imports"};
static const lean_object* l_Lean_instToJsonPrintImportsResult_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonPrintImportsResult_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportsResult_toJson(lean_object*);
static const lean_closure_object l_Lean_instToJsonPrintImportsResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonPrintImportsResult_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonPrintImportsResult___closed__0 = (const lean_object*)&l_Lean_instToJsonPrintImportsResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonPrintImportsResult = (const lean_object*)&l_Lean_instToJsonPrintImportsResult___closed__0_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_printImportsJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_printImportsJson___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg(lean_object* v_s_10_){
_start:
{
lean_inc_ref(v_s_10_);
return v_s_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___redArg___boxed(lean_object* v_s_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l_Lean_ParseImports_skip___redArg(v_s_11_);
lean_dec_ref(v_s_11_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip(lean_object* v_x_13_, lean_object* v_s_14_){
_start:
{
lean_inc_ref(v_s_14_);
return v_s_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_skip___boxed(lean_object* v_x_15_, lean_object* v_s_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_Lean_ParseImports_skip(v_x_15_, v_s_16_);
lean_dec_ref(v_s_16_);
lean_dec_ref(v_x_15_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_setPos(lean_object* v_s_19_, lean_object* v_pos_20_){
_start:
{
lean_object* v_imports_21_; uint8_t v_badModifier_22_; lean_object* v_error_x3f_23_; uint8_t v_isModule_24_; uint8_t v_isMeta_25_; uint8_t v_isExported_26_; uint8_t v_importAll_27_; lean_object* v___x_29_; uint8_t v_isShared_30_; uint8_t v_isSharedCheck_34_; 
v_imports_21_ = lean_ctor_get(v_s_19_, 0);
v_badModifier_22_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3);
v_error_x3f_23_ = lean_ctor_get(v_s_19_, 2);
v_isModule_24_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 1);
v_isMeta_25_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 2);
v_isExported_26_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 3);
v_importAll_27_ = lean_ctor_get_uint8(v_s_19_, sizeof(void*)*3 + 4);
v_isSharedCheck_34_ = !lean_is_exclusive(v_s_19_);
if (v_isSharedCheck_34_ == 0)
{
lean_object* v_unused_35_; 
v_unused_35_ = lean_ctor_get(v_s_19_, 1);
lean_dec(v_unused_35_);
v___x_29_ = v_s_19_;
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
else
{
lean_inc(v_error_x3f_23_);
lean_inc(v_imports_21_);
lean_dec(v_s_19_);
v___x_29_ = lean_box(0);
v_isShared_30_ = v_isSharedCheck_34_;
goto v_resetjp_28_;
}
v_resetjp_28_:
{
lean_object* v___x_32_; 
if (v_isShared_30_ == 0)
{
lean_ctor_set(v___x_29_, 1, v_pos_20_);
v___x_32_ = v___x_29_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v_imports_21_);
lean_ctor_set(v_reuseFailAlloc_33_, 1, v_pos_20_);
lean_ctor_set(v_reuseFailAlloc_33_, 2, v_error_x3f_23_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3, v_badModifier_22_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 1, v_isModule_24_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 2, v_isMeta_25_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 3, v_isExported_26_);
lean_ctor_set_uint8(v_reuseFailAlloc_33_, sizeof(void*)*3 + 4, v_importAll_27_);
v___x_32_ = v_reuseFailAlloc_33_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
return v___x_32_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkError(lean_object* v_s_36_, lean_object* v_msg_37_){
_start:
{
lean_object* v_imports_38_; lean_object* v_pos_39_; uint8_t v_badModifier_40_; uint8_t v_isModule_41_; uint8_t v_isMeta_42_; uint8_t v_isExported_43_; uint8_t v_importAll_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_52_; 
v_imports_38_ = lean_ctor_get(v_s_36_, 0);
v_pos_39_ = lean_ctor_get(v_s_36_, 1);
v_badModifier_40_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3);
v_isModule_41_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 1);
v_isMeta_42_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 2);
v_isExported_43_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 3);
v_importAll_44_ = lean_ctor_get_uint8(v_s_36_, sizeof(void*)*3 + 4);
v_isSharedCheck_52_ = !lean_is_exclusive(v_s_36_);
if (v_isSharedCheck_52_ == 0)
{
lean_object* v_unused_53_; 
v_unused_53_ = lean_ctor_get(v_s_36_, 2);
lean_dec(v_unused_53_);
v___x_46_ = v_s_36_;
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_pos_39_);
lean_inc(v_imports_38_);
lean_dec(v_s_36_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; lean_object* v___x_50_; 
v___x_48_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_48_, 0, v_msg_37_);
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 2, v___x_48_);
v___x_50_ = v___x_46_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_imports_38_);
lean_ctor_set(v_reuseFailAlloc_51_, 1, v_pos_39_);
lean_ctor_set(v_reuseFailAlloc_51_, 2, v___x_48_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3, v_badModifier_40_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 1, v_isModule_41_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 2, v_isMeta_42_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 3, v_isExported_43_);
lean_ctor_set_uint8(v_reuseFailAlloc_51_, sizeof(void*)*3 + 4, v_importAll_44_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_mkEOIError(lean_object* v_s_57_){
_start:
{
lean_object* v_imports_58_; lean_object* v_pos_59_; uint8_t v_badModifier_60_; uint8_t v_isModule_61_; uint8_t v_isMeta_62_; uint8_t v_isExported_63_; uint8_t v_importAll_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_72_; 
v_imports_58_ = lean_ctor_get(v_s_57_, 0);
v_pos_59_ = lean_ctor_get(v_s_57_, 1);
v_badModifier_60_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3);
v_isModule_61_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 1);
v_isMeta_62_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 2);
v_isExported_63_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 3);
v_importAll_64_ = lean_ctor_get_uint8(v_s_57_, sizeof(void*)*3 + 4);
v_isSharedCheck_72_ = !lean_is_exclusive(v_s_57_);
if (v_isSharedCheck_72_ == 0)
{
lean_object* v_unused_73_; 
v_unused_73_ = lean_ctor_get(v_s_57_, 2);
lean_dec(v_unused_73_);
v___x_66_ = v_s_57_;
v_isShared_67_ = v_isSharedCheck_72_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_pos_59_);
lean_inc(v_imports_58_);
lean_dec(v_s_57_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_72_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_68_ = ((lean_object*)(l_Lean_ParseImports_State_mkEOIError___closed__1));
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 2, v___x_68_);
v___x_70_ = v___x_66_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_imports_58_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v_pos_59_);
lean_ctor_set(v_reuseFailAlloc_71_, 2, v___x_68_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3, v_badModifier_60_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 1, v_isModule_61_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 2, v_isMeta_62_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 3, v_isExported_63_);
lean_ctor_set_uint8(v_reuseFailAlloc_71_, sizeof(void*)*3 + 4, v_importAll_64_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_clearError(lean_object* v_s_74_){
_start:
{
lean_object* v_imports_75_; lean_object* v_pos_76_; uint8_t v_isModule_77_; uint8_t v_isMeta_78_; uint8_t v_isExported_79_; uint8_t v_importAll_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_89_; 
v_imports_75_ = lean_ctor_get(v_s_74_, 0);
v_pos_76_ = lean_ctor_get(v_s_74_, 1);
v_isModule_77_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 1);
v_isMeta_78_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 2);
v_isExported_79_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 3);
v_importAll_80_ = lean_ctor_get_uint8(v_s_74_, sizeof(void*)*3 + 4);
v_isSharedCheck_89_ = !lean_is_exclusive(v_s_74_);
if (v_isSharedCheck_89_ == 0)
{
lean_object* v_unused_90_; 
v_unused_90_ = lean_ctor_get(v_s_74_, 2);
lean_dec(v_unused_90_);
v___x_82_ = v_s_74_;
v_isShared_83_ = v_isSharedCheck_89_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_pos_76_);
lean_inc(v_imports_75_);
lean_dec(v_s_74_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_89_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
uint8_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_87_; 
v___x_84_ = 0;
v___x_85_ = lean_box(0);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 2, v___x_85_);
v___x_87_ = v___x_82_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_imports_75_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v_pos_76_);
lean_ctor_set(v_reuseFailAlloc_88_, 2, v___x_85_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 1, v_isModule_77_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 2, v_isMeta_78_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 3, v_isExported_79_);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, sizeof(void*)*3 + 4, v_importAll_80_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
lean_ctor_set_uint8(v___x_87_, sizeof(void*)*3, v___x_84_);
return v___x_87_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next(lean_object* v_s_91_, lean_object* v_input_92_, lean_object* v_pos_93_){
_start:
{
lean_object* v_imports_94_; uint8_t v_badModifier_95_; lean_object* v_error_x3f_96_; uint8_t v_isModule_97_; uint8_t v_isMeta_98_; uint8_t v_isExported_99_; uint8_t v_importAll_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_108_; 
v_imports_94_ = lean_ctor_get(v_s_91_, 0);
v_badModifier_95_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3);
v_error_x3f_96_ = lean_ctor_get(v_s_91_, 2);
v_isModule_97_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 1);
v_isMeta_98_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 2);
v_isExported_99_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 3);
v_importAll_100_ = lean_ctor_get_uint8(v_s_91_, sizeof(void*)*3 + 4);
v_isSharedCheck_108_ = !lean_is_exclusive(v_s_91_);
if (v_isSharedCheck_108_ == 0)
{
lean_object* v_unused_109_; 
v_unused_109_ = lean_ctor_get(v_s_91_, 1);
lean_dec(v_unused_109_);
v___x_102_ = v_s_91_;
v_isShared_103_ = v_isSharedCheck_108_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_error_x3f_96_);
lean_inc(v_imports_94_);
lean_dec(v_s_91_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_108_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_104_ = lean_string_utf8_next(v_input_92_, v_pos_93_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___x_104_);
v___x_106_ = v___x_102_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_imports_94_);
lean_ctor_set(v_reuseFailAlloc_107_, 1, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_107_, 2, v_error_x3f_96_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3, v_badModifier_95_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 1, v_isModule_97_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 2, v_isMeta_98_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 3, v_isExported_99_);
lean_ctor_set_uint8(v_reuseFailAlloc_107_, sizeof(void*)*3 + 4, v_importAll_100_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next___boxed(lean_object* v_s_110_, lean_object* v_input_111_, lean_object* v_pos_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_ParseImports_State_next(v_s_110_, v_input_111_, v_pos_112_);
lean_dec(v_pos_112_);
lean_dec_ref(v_input_111_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg(lean_object* v_s_114_, lean_object* v_input_115_, lean_object* v_pos_116_){
_start:
{
lean_object* v_imports_117_; uint8_t v_badModifier_118_; lean_object* v_error_x3f_119_; uint8_t v_isModule_120_; uint8_t v_isMeta_121_; uint8_t v_isExported_122_; uint8_t v_importAll_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_131_; 
v_imports_117_ = lean_ctor_get(v_s_114_, 0);
v_badModifier_118_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3);
v_error_x3f_119_ = lean_ctor_get(v_s_114_, 2);
v_isModule_120_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 1);
v_isMeta_121_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 2);
v_isExported_122_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 3);
v_importAll_123_ = lean_ctor_get_uint8(v_s_114_, sizeof(void*)*3 + 4);
v_isSharedCheck_131_ = !lean_is_exclusive(v_s_114_);
if (v_isSharedCheck_131_ == 0)
{
lean_object* v_unused_132_; 
v_unused_132_ = lean_ctor_get(v_s_114_, 1);
lean_dec(v_unused_132_);
v___x_125_ = v_s_114_;
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_error_x3f_119_);
lean_inc(v_imports_117_);
lean_dec(v_s_114_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_127_ = lean_string_utf8_next_fast(v_input_115_, v_pos_116_);
if (v_isShared_126_ == 0)
{
lean_ctor_set(v___x_125_, 1, v___x_127_);
v___x_129_ = v___x_125_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_imports_117_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_130_, 2, v_error_x3f_119_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3, v_badModifier_118_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 1, v_isModule_120_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 2, v_isMeta_121_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 3, v_isExported_122_);
lean_ctor_set_uint8(v_reuseFailAlloc_130_, sizeof(void*)*3 + 4, v_importAll_123_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___redArg___boxed(lean_object* v_s_133_, lean_object* v_input_134_, lean_object* v_pos_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_ParseImports_State_next_x27___redArg(v_s_133_, v_input_134_, v_pos_135_);
lean_dec(v_pos_135_);
lean_dec_ref(v_input_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27(lean_object* v_s_137_, lean_object* v_input_138_, lean_object* v_pos_139_, lean_object* v_h_140_){
_start:
{
lean_object* v_imports_141_; uint8_t v_badModifier_142_; lean_object* v_error_x3f_143_; uint8_t v_isModule_144_; uint8_t v_isMeta_145_; uint8_t v_isExported_146_; uint8_t v_importAll_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_155_; 
v_imports_141_ = lean_ctor_get(v_s_137_, 0);
v_badModifier_142_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3);
v_error_x3f_143_ = lean_ctor_get(v_s_137_, 2);
v_isModule_144_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 1);
v_isMeta_145_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 2);
v_isExported_146_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 3);
v_importAll_147_ = lean_ctor_get_uint8(v_s_137_, sizeof(void*)*3 + 4);
v_isSharedCheck_155_ = !lean_is_exclusive(v_s_137_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; 
v_unused_156_ = lean_ctor_get(v_s_137_, 1);
lean_dec(v_unused_156_);
v___x_149_ = v_s_137_;
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_error_x3f_143_);
lean_inc(v_imports_141_);
lean_dec(v_s_137_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_155_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_153_; 
v___x_151_ = lean_string_utf8_next_fast(v_input_138_, v_pos_139_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 1, v___x_151_);
v___x_153_ = v___x_149_;
goto v_reusejp_152_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v_imports_141_);
lean_ctor_set(v_reuseFailAlloc_154_, 1, v___x_151_);
lean_ctor_set(v_reuseFailAlloc_154_, 2, v_error_x3f_143_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3, v_badModifier_142_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 1, v_isModule_144_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 2, v_isMeta_145_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 3, v_isExported_146_);
lean_ctor_set_uint8(v_reuseFailAlloc_154_, sizeof(void*)*3 + 4, v_importAll_147_);
v___x_153_ = v_reuseFailAlloc_154_;
goto v_reusejp_152_;
}
v_reusejp_152_:
{
return v___x_153_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_next_x27___boxed(lean_object* v_s_157_, lean_object* v_input_158_, lean_object* v_pos_159_, lean_object* v_h_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_ParseImports_State_next_x27(v_s_157_, v_input_158_, v_pos_159_, v_h_160_);
lean_dec(v_pos_159_);
lean_dec_ref(v_input_158_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(lean_object* v_s_165_){
_start:
{
lean_object* v_imports_166_; lean_object* v_pos_167_; uint8_t v_badModifier_168_; uint8_t v_isModule_169_; uint8_t v_isMeta_170_; uint8_t v_isExported_171_; uint8_t v_importAll_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_180_; 
v_imports_166_ = lean_ctor_get(v_s_165_, 0);
v_pos_167_ = lean_ctor_get(v_s_165_, 1);
v_badModifier_168_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3);
v_isModule_169_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 1);
v_isMeta_170_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 2);
v_isExported_171_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 3);
v_importAll_172_ = lean_ctor_get_uint8(v_s_165_, sizeof(void*)*3 + 4);
v_isSharedCheck_180_ = !lean_is_exclusive(v_s_165_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; 
v_unused_181_ = lean_ctor_get(v_s_165_, 2);
lean_dec(v_unused_181_);
v___x_174_ = v_s_165_;
v_isShared_175_ = v_isSharedCheck_180_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_pos_167_);
lean_inc(v_imports_166_);
lean_dec(v_s_165_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_180_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_176_ = ((lean_object*)(l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi___closed__1));
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 2, v___x_176_);
v___x_178_ = v___x_174_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_imports_166_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v_pos_167_);
lean_ctor_set(v_reuseFailAlloc_179_, 2, v___x_176_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3, v_badModifier_168_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 1, v_isModule_169_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 2, v_isMeta_170_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 3, v_isExported_171_);
lean_ctor_set_uint8(v_reuseFailAlloc_179_, sizeof(void*)*3 + 4, v_importAll_172_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock(lean_object* v_nesting_182_, lean_object* v_input_183_, lean_object* v_s_184_){
_start:
{
lean_object* v_imports_185_; lean_object* v_pos_186_; uint8_t v_badModifier_187_; lean_object* v_error_x3f_188_; uint8_t v_isModule_189_; uint8_t v_isMeta_190_; uint8_t v_isExported_191_; uint8_t v_importAll_192_; uint8_t v___x_193_; 
v_imports_185_ = lean_ctor_get(v_s_184_, 0);
v_pos_186_ = lean_ctor_get(v_s_184_, 1);
v_badModifier_187_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3);
v_error_x3f_188_ = lean_ctor_get(v_s_184_, 2);
v_isModule_189_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 1);
v_isMeta_190_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 2);
v_isExported_191_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 3);
v_importAll_192_ = lean_ctor_get_uint8(v_s_184_, sizeof(void*)*3 + 4);
v___x_193_ = lean_string_utf8_at_end(v_input_183_, v_pos_186_);
if (v___x_193_ == 0)
{
uint32_t v_curr_194_; lean_object* v_i_195_; uint32_t v___x_196_; uint8_t v___x_197_; 
v_curr_194_ = lean_string_utf8_get_fast(v_input_183_, v_pos_186_);
v_i_195_ = lean_string_utf8_next_fast(v_input_183_, v_pos_186_);
v___x_196_ = 45;
v___x_197_ = lean_uint32_dec_eq(v_curr_194_, v___x_196_);
if (v___x_197_ == 0)
{
uint32_t v___x_198_; uint8_t v___x_199_; 
v___x_198_ = 47;
v___x_199_ = lean_uint32_dec_eq(v_curr_194_, v___x_198_);
if (v___x_199_ == 0)
{
lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_207_; 
lean_inc(v_error_x3f_188_);
lean_inc_ref(v_imports_185_);
v_isSharedCheck_207_ = !lean_is_exclusive(v_s_184_);
if (v_isSharedCheck_207_ == 0)
{
lean_object* v_unused_208_; lean_object* v_unused_209_; lean_object* v_unused_210_; 
v_unused_208_ = lean_ctor_get(v_s_184_, 2);
lean_dec(v_unused_208_);
v_unused_209_ = lean_ctor_get(v_s_184_, 1);
lean_dec(v_unused_209_);
v_unused_210_ = lean_ctor_get(v_s_184_, 0);
lean_dec(v_unused_210_);
v___x_201_ = v_s_184_;
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
else
{
lean_dec(v_s_184_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 1, v_i_195_);
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_i_195_);
lean_ctor_set(v_reuseFailAlloc_206_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_204_ = v_reuseFailAlloc_206_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
v_s_184_ = v___x_204_;
goto _start;
}
}
}
else
{
uint8_t v___x_211_; 
v___x_211_ = lean_string_utf8_at_end(v_input_183_, v_i_195_);
if (v___x_211_ == 0)
{
lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_228_; 
lean_inc(v_error_x3f_188_);
lean_inc_ref(v_imports_185_);
v_isSharedCheck_228_ = !lean_is_exclusive(v_s_184_);
if (v_isSharedCheck_228_ == 0)
{
lean_object* v_unused_229_; lean_object* v_unused_230_; lean_object* v_unused_231_; 
v_unused_229_ = lean_ctor_get(v_s_184_, 2);
lean_dec(v_unused_229_);
v_unused_230_ = lean_ctor_get(v_s_184_, 1);
lean_dec(v_unused_230_);
v_unused_231_ = lean_ctor_get(v_s_184_, 0);
lean_dec(v_unused_231_);
v___x_213_ = v_s_184_;
v_isShared_214_ = v_isSharedCheck_228_;
goto v_resetjp_212_;
}
else
{
lean_dec(v_s_184_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_228_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
uint32_t v_curr_215_; uint8_t v___x_216_; 
v_curr_215_ = lean_string_utf8_get_fast(v_input_183_, v_i_195_);
v___x_216_ = lean_uint32_dec_eq(v_curr_215_, v___x_196_);
if (v___x_216_ == 0)
{
lean_object* v___x_218_; 
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v_i_195_);
v___x_218_ = v___x_213_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_220_, 1, v_i_195_);
lean_ctor_set(v_reuseFailAlloc_220_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_218_ = v_reuseFailAlloc_220_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
v_s_184_ = v___x_218_;
goto _start;
}
}
else
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_225_; 
v___x_221_ = lean_unsigned_to_nat(1u);
v___x_222_ = lean_nat_add(v_nesting_182_, v___x_221_);
lean_dec(v_nesting_182_);
v___x_223_ = lean_string_utf8_next_fast(v_input_183_, v_i_195_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 1, v___x_223_);
v___x_225_ = v___x_213_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_227_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_227_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_225_ = v_reuseFailAlloc_227_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
v_nesting_182_ = v___x_222_;
v_s_184_ = v___x_225_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_232_; 
lean_dec(v_nesting_182_);
v___x_232_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(v_s_184_);
return v___x_232_;
}
}
}
else
{
uint8_t v___x_233_; 
v___x_233_ = lean_string_utf8_at_end(v_input_183_, v_i_195_);
if (v___x_233_ == 0)
{
lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_256_; 
lean_inc(v_error_x3f_188_);
lean_inc_ref(v_imports_185_);
v_isSharedCheck_256_ = !lean_is_exclusive(v_s_184_);
if (v_isSharedCheck_256_ == 0)
{
lean_object* v_unused_257_; lean_object* v_unused_258_; lean_object* v_unused_259_; 
v_unused_257_ = lean_ctor_get(v_s_184_, 2);
lean_dec(v_unused_257_);
v_unused_258_ = lean_ctor_get(v_s_184_, 1);
lean_dec(v_unused_258_);
v_unused_259_ = lean_ctor_get(v_s_184_, 0);
lean_dec(v_unused_259_);
v___x_235_ = v_s_184_;
v_isShared_236_ = v_isSharedCheck_256_;
goto v_resetjp_234_;
}
else
{
lean_dec(v_s_184_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_256_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
uint32_t v_curr_237_; uint32_t v___x_238_; uint8_t v___x_239_; 
v_curr_237_ = lean_string_utf8_get_fast(v_input_183_, v_i_195_);
v___x_238_ = 47;
v___x_239_ = lean_uint32_dec_eq(v_curr_237_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_241_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v_i_195_);
v___x_241_ = v___x_235_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v_i_195_);
lean_ctor_set(v_reuseFailAlloc_243_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_243_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_241_ = v_reuseFailAlloc_243_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
v_s_184_ = v___x_241_;
goto _start;
}
}
else
{
lean_object* v___x_244_; uint8_t v___x_245_; 
v___x_244_ = lean_unsigned_to_nat(1u);
v___x_245_ = lean_nat_dec_eq(v_nesting_182_, v___x_244_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_246_ = lean_nat_sub(v_nesting_182_, v___x_244_);
lean_dec(v_nesting_182_);
v___x_247_ = lean_string_utf8_next_fast(v_input_183_, v_i_195_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_247_);
v___x_249_ = v___x_235_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v___x_247_);
lean_ctor_set(v_reuseFailAlloc_251_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_251_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_251_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_251_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_251_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_251_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_249_ = v_reuseFailAlloc_251_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
v_nesting_182_ = v___x_246_;
v_s_184_ = v___x_249_;
goto _start;
}
}
else
{
lean_object* v___x_252_; lean_object* v___x_254_; 
lean_dec(v_nesting_182_);
v___x_252_ = lean_string_utf8_next(v_input_183_, v_i_195_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_252_);
v___x_254_ = v___x_235_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_imports_185_);
lean_ctor_set(v_reuseFailAlloc_255_, 1, v___x_252_);
lean_ctor_set(v_reuseFailAlloc_255_, 2, v_error_x3f_188_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*3, v_badModifier_187_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*3 + 1, v_isModule_189_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*3 + 2, v_isMeta_190_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*3 + 3, v_isExported_191_);
lean_ctor_set_uint8(v_reuseFailAlloc_255_, sizeof(void*)*3 + 4, v_importAll_192_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
}
else
{
lean_object* v___x_260_; 
lean_dec(v_nesting_182_);
v___x_260_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(v_s_184_);
return v___x_260_;
}
}
}
else
{
lean_object* v___x_261_; 
lean_dec(v_nesting_182_);
v___x_261_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_finishCommentBlock_eoi(v_s_184_);
return v___x_261_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_finishCommentBlock___boxed(lean_object* v_nesting_262_, lean_object* v_input_263_, lean_object* v_s_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lean_ParseImports_finishCommentBlock(v_nesting_262_, v_input_263_, v_s_264_);
lean_dec_ref(v_input_263_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil(lean_object* v_p_266_, lean_object* v_input_267_, lean_object* v_s_268_){
_start:
{
lean_object* v_imports_269_; lean_object* v_pos_270_; uint8_t v_badModifier_271_; lean_object* v_error_x3f_272_; uint8_t v_isModule_273_; uint8_t v_isMeta_274_; uint8_t v_isExported_275_; uint8_t v_importAll_276_; uint8_t v___x_277_; 
v_imports_269_ = lean_ctor_get(v_s_268_, 0);
v_pos_270_ = lean_ctor_get(v_s_268_, 1);
v_badModifier_271_ = lean_ctor_get_uint8(v_s_268_, sizeof(void*)*3);
v_error_x3f_272_ = lean_ctor_get(v_s_268_, 2);
v_isModule_273_ = lean_ctor_get_uint8(v_s_268_, sizeof(void*)*3 + 1);
v_isMeta_274_ = lean_ctor_get_uint8(v_s_268_, sizeof(void*)*3 + 2);
v_isExported_275_ = lean_ctor_get_uint8(v_s_268_, sizeof(void*)*3 + 3);
v_importAll_276_ = lean_ctor_get_uint8(v_s_268_, sizeof(void*)*3 + 4);
v___x_277_ = lean_string_utf8_at_end(v_input_267_, v_pos_270_);
if (v___x_277_ == 0)
{
uint32_t v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v___x_278_ = lean_string_utf8_get_fast(v_input_267_, v_pos_270_);
v___x_279_ = lean_box_uint32(v___x_278_);
lean_inc_ref(v_p_266_);
v___x_280_ = lean_apply_1(v_p_266_, v___x_279_);
v___x_281_ = lean_unbox(v___x_280_);
if (v___x_281_ == 0)
{
lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_290_; 
lean_inc(v_error_x3f_272_);
lean_inc(v_pos_270_);
lean_inc_ref(v_imports_269_);
v_isSharedCheck_290_ = !lean_is_exclusive(v_s_268_);
if (v_isSharedCheck_290_ == 0)
{
lean_object* v_unused_291_; lean_object* v_unused_292_; lean_object* v_unused_293_; 
v_unused_291_ = lean_ctor_get(v_s_268_, 2);
lean_dec(v_unused_291_);
v_unused_292_ = lean_ctor_get(v_s_268_, 1);
lean_dec(v_unused_292_);
v_unused_293_ = lean_ctor_get(v_s_268_, 0);
lean_dec(v_unused_293_);
v___x_283_ = v_s_268_;
v_isShared_284_ = v_isSharedCheck_290_;
goto v_resetjp_282_;
}
else
{
lean_dec(v_s_268_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_290_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_285_; lean_object* v___x_287_; 
v___x_285_ = lean_string_utf8_next_fast(v_input_267_, v_pos_270_);
lean_dec(v_pos_270_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v___x_285_);
v___x_287_ = v___x_283_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_imports_269_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_289_, 2, v_error_x3f_272_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*3, v_badModifier_271_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*3 + 1, v_isModule_273_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*3 + 2, v_isMeta_274_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*3 + 3, v_isExported_275_);
lean_ctor_set_uint8(v_reuseFailAlloc_289_, sizeof(void*)*3 + 4, v_importAll_276_);
v___x_287_ = v_reuseFailAlloc_289_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
v_s_268_ = v___x_287_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_p_266_);
return v_s_268_;
}
}
else
{
lean_dec_ref(v_p_266_);
return v_s_268_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___boxed(lean_object* v_p_294_, lean_object* v_input_295_, lean_object* v_s_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_ParseImports_takeUntil(v_p_294_, v_input_295_, v_s_296_);
lean_dec_ref(v_input_295_);
return v_res_297_;
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_takeWhile___lam__0(lean_object* v_p_298_, uint32_t v_c_299_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_300_ = lean_box_uint32(v_c_299_);
v___x_301_ = lean_apply_1(v_p_298_, v___x_300_);
v___x_302_ = lean_unbox(v___x_301_);
if (v___x_302_ == 0)
{
uint8_t v___x_303_; 
v___x_303_ = 1;
return v___x_303_;
}
else
{
uint8_t v___x_304_; 
v___x_304_ = 0;
return v___x_304_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___lam__0___boxed(lean_object* v_p_305_, lean_object* v_c_306_){
_start:
{
uint32_t v_c_boxed_307_; uint8_t v_res_308_; lean_object* v_r_309_; 
v_c_boxed_307_ = lean_unbox_uint32(v_c_306_);
lean_dec(v_c_306_);
v_res_308_ = l_Lean_ParseImports_takeWhile___lam__0(v_p_305_, v_c_boxed_307_);
v_r_309_ = lean_box(v_res_308_);
return v_r_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile(lean_object* v_p_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v___f_313_; lean_object* v___x_314_; 
v___f_313_ = lean_alloc_closure((void*)(l_Lean_ParseImports_takeWhile___lam__0___boxed), 2, 1);
lean_closure_set(v___f_313_, 0, v_p_310_);
v___x_314_ = l_Lean_ParseImports_takeUntil(v___f_313_, v_a_311_, v_a_312_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeWhile___boxed(lean_object* v_p_315_, lean_object* v_a_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_ParseImports_takeWhile(v_p_315_, v_a_316_, v_a_317_);
lean_dec_ref(v_a_316_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_andthen(lean_object* v_p_319_, lean_object* v_q_320_, lean_object* v_input_321_, lean_object* v_s_322_){
_start:
{
lean_object* v_s_323_; lean_object* v_error_x3f_324_; 
lean_inc_ref(v_input_321_);
v_s_323_ = lean_apply_2(v_p_319_, v_input_321_, v_s_322_);
v_error_x3f_324_ = lean_ctor_get(v_s_323_, 2);
lean_inc(v_error_x3f_324_);
if (lean_obj_tag(v_error_x3f_324_) == 1)
{
lean_dec_ref_known(v_error_x3f_324_, 1);
lean_dec_ref(v_input_321_);
lean_dec_ref(v_q_320_);
return v_s_323_;
}
else
{
lean_object* v___x_325_; 
lean_dec(v_error_x3f_324_);
v___x_325_ = lean_apply_2(v_q_320_, v_input_321_, v_s_323_);
return v___x_325_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_instAndThenParser___lam__0(lean_object* v_p_326_, lean_object* v_q_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v_s_330_; lean_object* v_error_x3f_331_; 
lean_inc_ref(v___y_328_);
v_s_330_ = lean_apply_2(v_p_326_, v___y_328_, v___y_329_);
v_error_x3f_331_ = lean_ctor_get(v_s_330_, 2);
lean_inc(v_error_x3f_331_);
if (lean_obj_tag(v_error_x3f_331_) == 1)
{
lean_dec_ref_known(v_error_x3f_331_, 1);
lean_dec_ref(v___y_328_);
lean_dec_ref(v_q_327_);
return v_s_330_;
}
else
{
lean_object* v___x_332_; lean_object* v___x_333_; 
lean_dec(v_error_x3f_331_);
v___x_332_ = lean_box(0);
v___x_333_ = lean_apply_3(v_q_327_, v___x_332_, v___y_328_, v_s_330_);
return v___x_333_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(lean_object* v_input_336_, lean_object* v_s_337_){
_start:
{
lean_object* v_imports_338_; lean_object* v_pos_339_; uint8_t v_badModifier_340_; lean_object* v_error_x3f_341_; uint8_t v_isModule_342_; uint8_t v_isMeta_343_; uint8_t v_isExported_344_; uint8_t v_importAll_345_; uint8_t v___x_346_; 
v_imports_338_ = lean_ctor_get(v_s_337_, 0);
v_pos_339_ = lean_ctor_get(v_s_337_, 1);
v_badModifier_340_ = lean_ctor_get_uint8(v_s_337_, sizeof(void*)*3);
v_error_x3f_341_ = lean_ctor_get(v_s_337_, 2);
v_isModule_342_ = lean_ctor_get_uint8(v_s_337_, sizeof(void*)*3 + 1);
v_isMeta_343_ = lean_ctor_get_uint8(v_s_337_, sizeof(void*)*3 + 2);
v_isExported_344_ = lean_ctor_get_uint8(v_s_337_, sizeof(void*)*3 + 3);
v_importAll_345_ = lean_ctor_get_uint8(v_s_337_, sizeof(void*)*3 + 4);
v___x_346_ = lean_string_utf8_at_end(v_input_336_, v_pos_339_);
if (v___x_346_ == 0)
{
uint32_t v___x_347_; uint32_t v___x_348_; uint8_t v___x_349_; 
v___x_347_ = lean_string_utf8_get_fast(v_input_336_, v_pos_339_);
v___x_348_ = 10;
v___x_349_ = lean_uint32_dec_eq(v___x_347_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_358_; 
lean_inc(v_error_x3f_341_);
lean_inc(v_pos_339_);
lean_inc_ref(v_imports_338_);
v_isSharedCheck_358_ = !lean_is_exclusive(v_s_337_);
if (v_isSharedCheck_358_ == 0)
{
lean_object* v_unused_359_; lean_object* v_unused_360_; lean_object* v_unused_361_; 
v_unused_359_ = lean_ctor_get(v_s_337_, 2);
lean_dec(v_unused_359_);
v_unused_360_ = lean_ctor_get(v_s_337_, 1);
lean_dec(v_unused_360_);
v_unused_361_ = lean_ctor_get(v_s_337_, 0);
lean_dec(v_unused_361_);
v___x_351_ = v_s_337_;
v_isShared_352_ = v_isSharedCheck_358_;
goto v_resetjp_350_;
}
else
{
lean_dec(v_s_337_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_358_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_353_ = lean_string_utf8_next_fast(v_input_336_, v_pos_339_);
lean_dec(v_pos_339_);
if (v_isShared_352_ == 0)
{
lean_ctor_set(v___x_351_, 1, v___x_353_);
v___x_355_ = v___x_351_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_imports_338_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v___x_353_);
lean_ctor_set(v_reuseFailAlloc_357_, 2, v_error_x3f_341_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3, v_badModifier_340_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3 + 1, v_isModule_342_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3 + 2, v_isMeta_343_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3 + 3, v_isExported_344_);
lean_ctor_set_uint8(v_reuseFailAlloc_357_, sizeof(void*)*3 + 4, v_importAll_345_);
v___x_355_ = v_reuseFailAlloc_357_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
v_s_337_ = v___x_355_;
goto _start;
}
}
}
else
{
return v_s_337_;
}
}
else
{
return v_s_337_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0___boxed(lean_object* v_input_362_, lean_object* v_s_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(v_input_362_, v_s_363_);
lean_dec_ref(v_input_362_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace(lean_object* v_input_368_, lean_object* v_s_369_){
_start:
{
lean_object* v_imports_370_; lean_object* v_pos_371_; uint8_t v_badModifier_372_; lean_object* v_error_x3f_373_; uint8_t v_isModule_374_; uint8_t v_isMeta_375_; uint8_t v_isExported_376_; uint8_t v_importAll_377_; uint8_t v___x_382_; 
v_imports_370_ = lean_ctor_get(v_s_369_, 0);
v_pos_371_ = lean_ctor_get(v_s_369_, 1);
v_badModifier_372_ = lean_ctor_get_uint8(v_s_369_, sizeof(void*)*3);
v_error_x3f_373_ = lean_ctor_get(v_s_369_, 2);
v_isModule_374_ = lean_ctor_get_uint8(v_s_369_, sizeof(void*)*3 + 1);
v_isMeta_375_ = lean_ctor_get_uint8(v_s_369_, sizeof(void*)*3 + 2);
v_isExported_376_ = lean_ctor_get_uint8(v_s_369_, sizeof(void*)*3 + 3);
v_importAll_377_ = lean_ctor_get_uint8(v_s_369_, sizeof(void*)*3 + 4);
v___x_382_ = lean_string_utf8_at_end(v_input_368_, v_pos_371_);
if (v___x_382_ == 0)
{
uint32_t v_curr_383_; uint32_t v___x_384_; uint8_t v___x_385_; 
v_curr_383_ = lean_string_utf8_get_fast(v_input_368_, v_pos_371_);
v___x_384_ = 9;
v___x_385_ = lean_uint32_dec_eq(v_curr_383_, v___x_384_);
if (v___x_385_ == 0)
{
uint32_t v___x_386_; uint8_t v___x_387_; 
v___x_386_ = 32;
v___x_387_ = lean_uint32_dec_eq(v_curr_383_, v___x_386_);
if (v___x_387_ == 0)
{
uint32_t v___x_388_; uint8_t v___x_389_; 
v___x_388_ = 13;
v___x_389_ = lean_uint32_dec_eq(v_curr_383_, v___x_388_);
if (v___x_389_ == 0)
{
uint32_t v___x_390_; uint8_t v___x_391_; 
v___x_390_ = 10;
v___x_391_ = lean_uint32_dec_eq(v_curr_383_, v___x_390_);
if (v___x_391_ == 0)
{
uint32_t v___x_392_; uint8_t v___x_393_; 
v___x_392_ = 45;
v___x_393_ = lean_uint32_dec_eq(v_curr_383_, v___x_392_);
if (v___x_393_ == 0)
{
uint32_t v___x_394_; uint8_t v___x_395_; 
v___x_394_ = 47;
v___x_395_ = lean_uint32_dec_eq(v_curr_383_, v___x_394_);
if (v___x_395_ == 0)
{
return v_s_369_;
}
else
{
lean_object* v_i_396_; uint32_t v_curr_397_; uint8_t v___x_398_; 
v_i_396_ = lean_string_utf8_next_fast(v_input_368_, v_pos_371_);
v_curr_397_ = lean_string_utf8_get(v_input_368_, v_i_396_);
v___x_398_ = lean_uint32_dec_eq(v_curr_397_, v___x_392_);
if (v___x_398_ == 0)
{
return v_s_369_;
}
else
{
lean_object* v_i_399_; uint32_t v_curr_400_; uint8_t v___x_401_; 
v_i_399_ = lean_string_utf8_next(v_input_368_, v_i_396_);
v_curr_400_ = lean_string_utf8_get(v_input_368_, v_i_399_);
v___x_401_ = lean_uint32_dec_eq(v_curr_400_, v___x_392_);
if (v___x_401_ == 0)
{
uint32_t v___x_402_; uint8_t v___x_403_; 
v___x_402_ = 33;
v___x_403_ = lean_uint32_dec_eq(v_curr_400_, v___x_402_);
if (v___x_403_ == 0)
{
lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_415_; 
lean_inc(v_error_x3f_373_);
lean_inc_ref(v_imports_370_);
v_isSharedCheck_415_ = !lean_is_exclusive(v_s_369_);
if (v_isSharedCheck_415_ == 0)
{
lean_object* v_unused_416_; lean_object* v_unused_417_; lean_object* v_unused_418_; 
v_unused_416_ = lean_ctor_get(v_s_369_, 2);
lean_dec(v_unused_416_);
v_unused_417_ = lean_ctor_get(v_s_369_, 1);
lean_dec(v_unused_417_);
v_unused_418_ = lean_ctor_get(v_s_369_, 0);
lean_dec(v_unused_418_);
v___x_405_ = v_s_369_;
v_isShared_406_ = v_isSharedCheck_415_;
goto v_resetjp_404_;
}
else
{
lean_dec(v_s_369_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_415_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_410_; 
v___x_407_ = lean_unsigned_to_nat(1u);
v___x_408_ = lean_string_utf8_next(v_input_368_, v_i_399_);
lean_dec(v_i_399_);
if (v_isShared_406_ == 0)
{
lean_ctor_set(v___x_405_, 1, v___x_408_);
v___x_410_ = v___x_405_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_imports_370_);
lean_ctor_set(v_reuseFailAlloc_414_, 1, v___x_408_);
lean_ctor_set(v_reuseFailAlloc_414_, 2, v_error_x3f_373_);
lean_ctor_set_uint8(v_reuseFailAlloc_414_, sizeof(void*)*3, v_badModifier_372_);
lean_ctor_set_uint8(v_reuseFailAlloc_414_, sizeof(void*)*3 + 1, v_isModule_374_);
lean_ctor_set_uint8(v_reuseFailAlloc_414_, sizeof(void*)*3 + 2, v_isMeta_375_);
lean_ctor_set_uint8(v_reuseFailAlloc_414_, sizeof(void*)*3 + 3, v_isExported_376_);
lean_ctor_set_uint8(v_reuseFailAlloc_414_, sizeof(void*)*3 + 4, v_importAll_377_);
v___x_410_ = v_reuseFailAlloc_414_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_object* v_s_411_; lean_object* v_error_x3f_412_; 
v_s_411_ = l_Lean_ParseImports_finishCommentBlock(v___x_407_, v_input_368_, v___x_410_);
v_error_x3f_412_ = lean_ctor_get(v_s_411_, 2);
if (lean_obj_tag(v_error_x3f_412_) == 1)
{
return v_s_411_;
}
else
{
v_s_369_ = v_s_411_;
goto _start;
}
}
}
}
else
{
lean_dec(v_i_399_);
return v_s_369_;
}
}
else
{
lean_dec(v_i_399_);
return v_s_369_;
}
}
}
}
else
{
lean_object* v_i_419_; uint32_t v_curr_420_; uint8_t v___x_421_; 
v_i_419_ = lean_string_utf8_next_fast(v_input_368_, v_pos_371_);
v_curr_420_ = lean_string_utf8_get(v_input_368_, v_i_419_);
v___x_421_ = lean_uint32_dec_eq(v_curr_420_, v___x_392_);
if (v___x_421_ == 0)
{
return v_s_369_;
}
else
{
lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_432_; 
lean_inc(v_error_x3f_373_);
lean_inc_ref(v_imports_370_);
v_isSharedCheck_432_ = !lean_is_exclusive(v_s_369_);
if (v_isSharedCheck_432_ == 0)
{
lean_object* v_unused_433_; lean_object* v_unused_434_; lean_object* v_unused_435_; 
v_unused_433_ = lean_ctor_get(v_s_369_, 2);
lean_dec(v_unused_433_);
v_unused_434_ = lean_ctor_get(v_s_369_, 1);
lean_dec(v_unused_434_);
v_unused_435_ = lean_ctor_get(v_s_369_, 0);
lean_dec(v_unused_435_);
v___x_423_ = v_s_369_;
v_isShared_424_ = v_isSharedCheck_432_;
goto v_resetjp_422_;
}
else
{
lean_dec(v_s_369_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_432_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_425_; lean_object* v___x_427_; 
v___x_425_ = lean_string_utf8_next(v_input_368_, v_i_419_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 1, v___x_425_);
v___x_427_ = v___x_423_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_imports_370_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v___x_425_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v_error_x3f_373_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3, v_badModifier_372_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3 + 1, v_isModule_374_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3 + 2, v_isMeta_375_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3 + 3, v_isExported_376_);
lean_ctor_set_uint8(v_reuseFailAlloc_431_, sizeof(void*)*3 + 4, v_importAll_377_);
v___x_427_ = v_reuseFailAlloc_431_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v_s_428_; lean_object* v_error_x3f_429_; 
v_s_428_ = l_Lean_ParseImports_takeUntil___at___00Lean_ParseImports_whitespace_spec__0(v_input_368_, v___x_427_);
v_error_x3f_429_ = lean_ctor_get(v_s_428_, 2);
if (lean_obj_tag(v_error_x3f_429_) == 1)
{
return v_s_428_;
}
else
{
v_s_369_ = v_s_428_;
goto _start;
}
}
}
}
}
}
else
{
lean_inc(v_error_x3f_373_);
lean_inc(v_pos_371_);
lean_inc_ref(v_imports_370_);
lean_dec_ref(v_s_369_);
goto v___jp_378_;
}
}
else
{
lean_inc(v_error_x3f_373_);
lean_inc(v_pos_371_);
lean_inc_ref(v_imports_370_);
lean_dec_ref(v_s_369_);
goto v___jp_378_;
}
}
else
{
lean_inc(v_error_x3f_373_);
lean_inc(v_pos_371_);
lean_inc_ref(v_imports_370_);
lean_dec_ref(v_s_369_);
goto v___jp_378_;
}
}
else
{
lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_443_; 
lean_inc(v_pos_371_);
lean_inc_ref(v_imports_370_);
v_isSharedCheck_443_ = !lean_is_exclusive(v_s_369_);
if (v_isSharedCheck_443_ == 0)
{
lean_object* v_unused_444_; lean_object* v_unused_445_; lean_object* v_unused_446_; 
v_unused_444_ = lean_ctor_get(v_s_369_, 2);
lean_dec(v_unused_444_);
v_unused_445_ = lean_ctor_get(v_s_369_, 1);
lean_dec(v_unused_445_);
v_unused_446_ = lean_ctor_get(v_s_369_, 0);
lean_dec(v_unused_446_);
v___x_437_ = v_s_369_;
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
else
{
lean_dec(v_s_369_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_443_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_439_; lean_object* v___x_441_; 
v___x_439_ = ((lean_object*)(l_Lean_ParseImports_whitespace___closed__1));
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 2, v___x_439_);
v___x_441_ = v___x_437_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_imports_370_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v_pos_371_);
lean_ctor_set(v_reuseFailAlloc_442_, 2, v___x_439_);
lean_ctor_set_uint8(v_reuseFailAlloc_442_, sizeof(void*)*3, v_badModifier_372_);
lean_ctor_set_uint8(v_reuseFailAlloc_442_, sizeof(void*)*3 + 1, v_isModule_374_);
lean_ctor_set_uint8(v_reuseFailAlloc_442_, sizeof(void*)*3 + 2, v_isMeta_375_);
lean_ctor_set_uint8(v_reuseFailAlloc_442_, sizeof(void*)*3 + 3, v_isExported_376_);
lean_ctor_set_uint8(v_reuseFailAlloc_442_, sizeof(void*)*3 + 4, v_importAll_377_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
else
{
return v_s_369_;
}
v___jp_378_:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_string_utf8_next(v_input_368_, v_pos_371_);
lean_dec(v_pos_371_);
v___x_380_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_380_, 0, v_imports_370_);
lean_ctor_set(v___x_380_, 1, v___x_379_);
lean_ctor_set(v___x_380_, 2, v_error_x3f_373_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3, v_badModifier_372_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3 + 1, v_isModule_374_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3 + 2, v_isMeta_375_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3 + 3, v_isExported_376_);
lean_ctor_set_uint8(v___x_380_, sizeof(void*)*3 + 4, v_importAll_377_);
v_s_369_ = v___x_380_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_whitespace___boxed(lean_object* v_input_447_, lean_object* v_s_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l_Lean_ParseImports_whitespace(v_input_447_, v_s_448_);
lean_dec_ref(v_input_447_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(lean_object* v_k_450_, lean_object* v_failure_451_, lean_object* v_success_452_, lean_object* v_input_453_, lean_object* v_s_454_, lean_object* v_i_455_, lean_object* v_j_456_){
_start:
{
uint8_t v___x_457_; 
v___x_457_ = lean_string_utf8_at_end(v_k_450_, v_i_455_);
if (v___x_457_ == 0)
{
uint8_t v___x_458_; 
v___x_458_ = lean_string_utf8_at_end(v_input_453_, v_j_456_);
if (v___x_458_ == 0)
{
uint32_t v_curr_u2081_459_; uint32_t v_curr_u2082_460_; uint8_t v___x_461_; 
v_curr_u2081_459_ = lean_string_utf8_get_fast(v_k_450_, v_i_455_);
v_curr_u2082_460_ = lean_string_utf8_get_fast(v_input_453_, v_j_456_);
v___x_461_ = lean_uint32_dec_eq(v_curr_u2081_459_, v_curr_u2082_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; 
lean_dec(v_j_456_);
lean_dec(v_i_455_);
lean_dec_ref(v_success_452_);
v___x_462_ = lean_apply_2(v_failure_451_, v_input_453_, v_s_454_);
return v___x_462_;
}
else
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_string_utf8_next_fast(v_k_450_, v_i_455_);
lean_dec(v_i_455_);
v___x_464_ = lean_string_utf8_next_fast(v_input_453_, v_j_456_);
lean_dec(v_j_456_);
v_i_455_ = v___x_463_;
v_j_456_ = v___x_464_;
goto _start;
}
}
else
{
lean_object* v___x_466_; 
lean_dec(v_j_456_);
lean_dec(v_i_455_);
lean_dec_ref(v_success_452_);
v___x_466_ = lean_apply_2(v_failure_451_, v_input_453_, v_s_454_);
return v___x_466_;
}
}
else
{
lean_object* v_imports_467_; uint8_t v_badModifier_468_; lean_object* v_error_x3f_469_; uint8_t v_isModule_470_; uint8_t v_isMeta_471_; uint8_t v_isExported_472_; uint8_t v_importAll_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_482_; 
lean_dec(v_i_455_);
lean_dec_ref(v_failure_451_);
v_imports_467_ = lean_ctor_get(v_s_454_, 0);
v_badModifier_468_ = lean_ctor_get_uint8(v_s_454_, sizeof(void*)*3);
v_error_x3f_469_ = lean_ctor_get(v_s_454_, 2);
v_isModule_470_ = lean_ctor_get_uint8(v_s_454_, sizeof(void*)*3 + 1);
v_isMeta_471_ = lean_ctor_get_uint8(v_s_454_, sizeof(void*)*3 + 2);
v_isExported_472_ = lean_ctor_get_uint8(v_s_454_, sizeof(void*)*3 + 3);
v_importAll_473_ = lean_ctor_get_uint8(v_s_454_, sizeof(void*)*3 + 4);
v_isSharedCheck_482_ = !lean_is_exclusive(v_s_454_);
if (v_isSharedCheck_482_ == 0)
{
lean_object* v_unused_483_; 
v_unused_483_ = lean_ctor_get(v_s_454_, 1);
lean_dec(v_unused_483_);
v___x_475_ = v_s_454_;
v_isShared_476_ = v_isSharedCheck_482_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_error_x3f_469_);
lean_inc(v_imports_467_);
lean_dec(v_s_454_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_482_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v_j_456_);
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_imports_467_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_j_456_);
lean_ctor_set(v_reuseFailAlloc_481_, 2, v_error_x3f_469_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*3, v_badModifier_468_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*3 + 1, v_isModule_470_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*3 + 2, v_isMeta_471_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*3 + 3, v_isExported_472_);
lean_ctor_set_uint8(v_reuseFailAlloc_481_, sizeof(void*)*3 + 4, v_importAll_473_);
v___x_478_ = v_reuseFailAlloc_481_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_479_ = l_Lean_ParseImports_whitespace(v_input_453_, v___x_478_);
v___x_480_ = lean_apply_2(v_success_452_, v_input_453_, v___x_479_);
return v___x_480_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___boxed(lean_object* v_k_484_, lean_object* v_failure_485_, lean_object* v_success_486_, lean_object* v_input_487_, lean_object* v_s_488_, lean_object* v_i_489_, lean_object* v_j_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(v_k_484_, v_failure_485_, v_success_486_, v_input_487_, v_s_488_, v_i_489_, v_j_490_);
lean_dec_ref(v_k_484_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore(lean_object* v_k_492_, lean_object* v_failure_493_, lean_object* v_success_494_, lean_object* v_input_495_, lean_object* v_s_496_){
_start:
{
lean_object* v_pos_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v_pos_497_ = lean_ctor_get(v_s_496_, 1);
lean_inc(v_pos_497_);
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(v_k_492_, v_failure_493_, v_success_494_, v_input_495_, v_s_496_, v___x_498_, v_pos_497_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keywordCore___boxed(lean_object* v_k_500_, lean_object* v_failure_501_, lean_object* v_success_502_, lean_object* v_input_503_, lean_object* v_s_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_ParseImports_keywordCore(v_k_500_, v_failure_501_, v_success_502_, v_input_503_, v_s_504_);
lean_dec_ref(v_k_500_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0(lean_object* v_k_508_, lean_object* v_x_509_, lean_object* v_s_510_){
_start:
{
lean_object* v_imports_511_; lean_object* v_pos_512_; uint8_t v_badModifier_513_; uint8_t v_isModule_514_; uint8_t v_isMeta_515_; uint8_t v_isExported_516_; uint8_t v_importAll_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_529_; 
v_imports_511_ = lean_ctor_get(v_s_510_, 0);
v_pos_512_ = lean_ctor_get(v_s_510_, 1);
v_badModifier_513_ = lean_ctor_get_uint8(v_s_510_, sizeof(void*)*3);
v_isModule_514_ = lean_ctor_get_uint8(v_s_510_, sizeof(void*)*3 + 1);
v_isMeta_515_ = lean_ctor_get_uint8(v_s_510_, sizeof(void*)*3 + 2);
v_isExported_516_ = lean_ctor_get_uint8(v_s_510_, sizeof(void*)*3 + 3);
v_importAll_517_ = lean_ctor_get_uint8(v_s_510_, sizeof(void*)*3 + 4);
v_isSharedCheck_529_ = !lean_is_exclusive(v_s_510_);
if (v_isSharedCheck_529_ == 0)
{
lean_object* v_unused_530_; 
v_unused_530_ = lean_ctor_get(v_s_510_, 2);
lean_dec(v_unused_530_);
v___x_519_ = v_s_510_;
v_isShared_520_ = v_isSharedCheck_529_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_pos_512_);
lean_inc(v_imports_511_);
lean_dec(v_s_510_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_529_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_527_; 
v___x_521_ = ((lean_object*)(l_Lean_ParseImports_keyword___lam__0___closed__0));
v___x_522_ = lean_string_append(v___x_521_, v_k_508_);
v___x_523_ = ((lean_object*)(l_Lean_ParseImports_keyword___lam__0___closed__1));
v___x_524_ = lean_string_append(v___x_522_, v___x_523_);
v___x_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_525_, 0, v___x_524_);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 2, v___x_525_);
v___x_527_ = v___x_519_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_imports_511_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v_pos_512_);
lean_ctor_set(v_reuseFailAlloc_528_, 2, v___x_525_);
lean_ctor_set_uint8(v_reuseFailAlloc_528_, sizeof(void*)*3, v_badModifier_513_);
lean_ctor_set_uint8(v_reuseFailAlloc_528_, sizeof(void*)*3 + 1, v_isModule_514_);
lean_ctor_set_uint8(v_reuseFailAlloc_528_, sizeof(void*)*3 + 2, v_isMeta_515_);
lean_ctor_set_uint8(v_reuseFailAlloc_528_, sizeof(void*)*3 + 3, v_isExported_516_);
lean_ctor_set_uint8(v_reuseFailAlloc_528_, sizeof(void*)*3 + 4, v_importAll_517_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword___lam__0___boxed(lean_object* v_k_531_, lean_object* v_x_532_, lean_object* v_s_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lean_ParseImports_keyword___lam__0(v_k_531_, v_x_532_, v_s_533_);
lean_dec_ref(v_x_532_);
lean_dec_ref(v_k_531_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_keyword(lean_object* v_k_535_, lean_object* v_a_536_, lean_object* v_a_537_){
_start:
{
lean_object* v_pos_538_; lean_object* v___f_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v_pos_538_ = lean_ctor_get(v_a_537_, 1);
lean_inc(v_pos_538_);
lean_inc_ref(v_k_535_);
v___f_539_ = lean_alloc_closure((void*)(l_Lean_ParseImports_keyword___lam__0___boxed), 3, 1);
lean_closure_set(v___f_539_, 0, v_k_535_);
v___x_540_ = lean_alloc_closure((void*)(l_Lean_ParseImports_skip___boxed), 2, 0);
v___x_541_ = lean_unsigned_to_nat(0u);
v___x_542_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go(v_k_535_, v___f_539_, v___x_540_, v_a_536_, v_a_537_, v___x_541_, v_pos_538_);
lean_dec_ref(v_k_535_);
return v___x_542_;
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdCont(lean_object* v_input_543_, lean_object* v_s_544_){
_start:
{
lean_object* v_pos_545_; uint32_t v_curr_546_; uint32_t v___x_547_; uint8_t v___x_548_; 
v_pos_545_ = lean_ctor_get(v_s_544_, 1);
v_curr_546_ = lean_string_utf8_get(v_input_543_, v_pos_545_);
v___x_547_ = 46;
v___x_548_ = lean_uint32_dec_eq(v_curr_546_, v___x_547_);
if (v___x_548_ == 0)
{
return v___x_548_;
}
else
{
lean_object* v_i_549_; uint8_t v___x_550_; 
v_i_549_ = lean_string_utf8_next(v_input_543_, v_pos_545_);
v___x_550_ = lean_string_utf8_at_end(v_input_543_, v_i_549_);
if (v___x_550_ == 0)
{
uint32_t v_curr_551_; uint32_t v___x_563_; uint8_t v___x_564_; 
v_curr_551_ = lean_string_utf8_get_fast(v_input_543_, v_i_549_);
lean_dec(v_i_549_);
v___x_563_ = 65;
v___x_564_ = lean_uint32_dec_le(v___x_563_, v_curr_551_);
if (v___x_564_ == 0)
{
goto v___jp_558_;
}
else
{
uint32_t v___x_565_; uint8_t v___x_566_; 
v___x_565_ = 90;
v___x_566_ = lean_uint32_dec_le(v_curr_551_, v___x_565_);
if (v___x_566_ == 0)
{
goto v___jp_558_;
}
else
{
return v___x_548_;
}
}
v___jp_552_:
{
uint32_t v___x_553_; uint8_t v___x_554_; 
v___x_553_ = 95;
v___x_554_ = lean_uint32_dec_eq(v_curr_551_, v___x_553_);
if (v___x_554_ == 0)
{
uint8_t v___x_555_; 
v___x_555_ = l_Lean_isLetterLike(v_curr_551_);
if (v___x_555_ == 0)
{
uint32_t v___x_556_; uint8_t v___x_557_; 
v___x_556_ = l_Lean_idBeginEscape;
v___x_557_ = lean_uint32_dec_eq(v_curr_551_, v___x_556_);
return v___x_557_;
}
else
{
return v___x_548_;
}
}
else
{
return v___x_548_;
}
}
v___jp_558_:
{
uint32_t v___x_559_; uint8_t v___x_560_; 
v___x_559_ = 97;
v___x_560_ = lean_uint32_dec_le(v___x_559_, v_curr_551_);
if (v___x_560_ == 0)
{
goto v___jp_552_;
}
else
{
uint32_t v___x_561_; uint8_t v___x_562_; 
v___x_561_ = 122;
v___x_562_ = lean_uint32_dec_le(v_curr_551_, v___x_561_);
if (v___x_562_ == 0)
{
goto v___jp_552_;
}
else
{
return v___x_548_;
}
}
}
}
else
{
uint8_t v___x_567_; 
lean_dec(v_i_549_);
v___x_567_ = 0;
return v___x_567_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdCont___boxed(lean_object* v_input_568_, lean_object* v_s_569_){
_start:
{
uint8_t v_res_570_; lean_object* v_r_571_; 
v_res_570_ = l_Lean_ParseImports_isIdCont(v_input_568_, v_s_569_);
lean_dec_ref(v_s_569_);
lean_dec_ref(v_input_568_);
v_r_571_ = lean_box(v_res_570_);
return v_r_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_State_pushImport(lean_object* v_i_572_, lean_object* v_s_573_){
_start:
{
lean_object* v_imports_574_; lean_object* v_pos_575_; uint8_t v_badModifier_576_; lean_object* v_error_x3f_577_; uint8_t v_isModule_578_; uint8_t v_isMeta_579_; uint8_t v_isExported_580_; uint8_t v_importAll_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_589_; 
v_imports_574_ = lean_ctor_get(v_s_573_, 0);
v_pos_575_ = lean_ctor_get(v_s_573_, 1);
v_badModifier_576_ = lean_ctor_get_uint8(v_s_573_, sizeof(void*)*3);
v_error_x3f_577_ = lean_ctor_get(v_s_573_, 2);
v_isModule_578_ = lean_ctor_get_uint8(v_s_573_, sizeof(void*)*3 + 1);
v_isMeta_579_ = lean_ctor_get_uint8(v_s_573_, sizeof(void*)*3 + 2);
v_isExported_580_ = lean_ctor_get_uint8(v_s_573_, sizeof(void*)*3 + 3);
v_importAll_581_ = lean_ctor_get_uint8(v_s_573_, sizeof(void*)*3 + 4);
v_isSharedCheck_589_ = !lean_is_exclusive(v_s_573_);
if (v_isSharedCheck_589_ == 0)
{
v___x_583_ = v_s_573_;
v_isShared_584_ = v_isSharedCheck_589_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_error_x3f_577_);
lean_inc(v_pos_575_);
lean_inc(v_imports_574_);
lean_dec(v_s_573_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_589_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; lean_object* v___x_587_; 
v___x_585_ = lean_array_push(v_imports_574_, v_i_572_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v___x_585_);
v___x_587_ = v___x_583_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_585_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_pos_575_);
lean_ctor_set(v_reuseFailAlloc_588_, 2, v_error_x3f_577_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*3, v_badModifier_576_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*3 + 1, v_isModule_578_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*3 + 2, v_isMeta_579_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*3 + 3, v_isExported_580_);
lean_ctor_set_uint8(v_reuseFailAlloc_588_, sizeof(void*)*3 + 4, v_importAll_581_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestCold(uint32_t v_c_590_){
_start:
{
uint32_t v___x_591_; uint8_t v___x_592_; 
v___x_591_ = 95;
v___x_592_ = lean_uint32_dec_eq(v_c_590_, v___x_591_);
if (v___x_592_ == 0)
{
uint32_t v___x_593_; uint8_t v___x_594_; 
v___x_593_ = 39;
v___x_594_ = lean_uint32_dec_eq(v_c_590_, v___x_593_);
if (v___x_594_ == 0)
{
uint32_t v___x_595_; uint8_t v___x_596_; 
v___x_595_ = 33;
v___x_596_ = lean_uint32_dec_eq(v_c_590_, v___x_595_);
if (v___x_596_ == 0)
{
uint32_t v___x_597_; uint8_t v___x_598_; 
v___x_597_ = 63;
v___x_598_ = lean_uint32_dec_eq(v_c_590_, v___x_597_);
if (v___x_598_ == 0)
{
uint8_t v___x_599_; 
v___x_599_ = l_Lean_isLetterLike(v_c_590_);
if (v___x_599_ == 0)
{
uint8_t v___x_600_; 
v___x_600_ = l_Lean_isSubScriptAlnum(v_c_590_);
return v___x_600_;
}
else
{
return v___x_599_;
}
}
else
{
return v___x_598_;
}
}
else
{
return v___x_596_;
}
}
else
{
return v___x_594_;
}
}
else
{
return v___x_592_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestCold___boxed(lean_object* v_c_601_){
_start:
{
uint32_t v_c_boxed_602_; uint8_t v_res_603_; lean_object* v_r_604_; 
v_c_boxed_602_ = lean_unbox_uint32(v_c_601_);
lean_dec(v_c_601_);
v_res_603_ = l_Lean_ParseImports_isIdRestCold(v_c_boxed_602_);
v_r_604_ = lean_box(v_res_603_);
return v_r_604_;
}
}
LEAN_EXPORT uint8_t l_Lean_ParseImports_isIdRestFast(uint32_t v_c_605_){
_start:
{
uint32_t v___x_634_; uint8_t v___x_635_; 
v___x_634_ = 65;
v___x_635_ = lean_uint32_dec_le(v___x_634_, v_c_605_);
if (v___x_635_ == 0)
{
goto v___jp_629_;
}
else
{
uint32_t v___x_636_; uint8_t v___x_637_; 
v___x_636_ = 90;
v___x_637_ = lean_uint32_dec_le(v_c_605_, v___x_636_);
if (v___x_637_ == 0)
{
goto v___jp_629_;
}
else
{
return v___x_637_;
}
}
v___jp_606_:
{
uint32_t v___x_607_; uint8_t v___x_608_; 
v___x_607_ = 46;
v___x_608_ = lean_uint32_dec_eq(v_c_605_, v___x_607_);
if (v___x_608_ == 0)
{
uint32_t v___x_609_; uint8_t v___x_610_; 
v___x_609_ = 10;
v___x_610_ = lean_uint32_dec_eq(v_c_605_, v___x_609_);
if (v___x_610_ == 0)
{
uint32_t v___x_611_; uint8_t v___x_612_; 
v___x_611_ = 32;
v___x_612_ = lean_uint32_dec_eq(v_c_605_, v___x_611_);
if (v___x_612_ == 0)
{
uint32_t v___x_613_; uint8_t v___x_614_; 
v___x_613_ = 95;
v___x_614_ = lean_uint32_dec_eq(v_c_605_, v___x_613_);
if (v___x_614_ == 0)
{
uint32_t v___x_615_; uint8_t v___x_616_; 
v___x_615_ = 39;
v___x_616_ = lean_uint32_dec_eq(v_c_605_, v___x_615_);
if (v___x_616_ == 0)
{
uint32_t v___x_617_; uint8_t v___x_618_; 
v___x_617_ = 33;
v___x_618_ = lean_uint32_dec_eq(v_c_605_, v___x_617_);
if (v___x_618_ == 0)
{
uint32_t v___x_619_; uint8_t v___x_620_; 
v___x_619_ = 63;
v___x_620_ = lean_uint32_dec_eq(v_c_605_, v___x_619_);
if (v___x_620_ == 0)
{
uint8_t v___x_621_; 
v___x_621_ = l_Lean_isLetterLike(v_c_605_);
if (v___x_621_ == 0)
{
uint8_t v___x_622_; 
v___x_622_ = l_Lean_isSubScriptAlnum(v_c_605_);
return v___x_622_;
}
else
{
return v___x_621_;
}
}
else
{
return v___x_620_;
}
}
else
{
return v___x_618_;
}
}
else
{
return v___x_616_;
}
}
else
{
return v___x_614_;
}
}
else
{
return v___x_610_;
}
}
else
{
return v___x_608_;
}
}
else
{
uint8_t v___x_623_; 
v___x_623_ = 0;
return v___x_623_;
}
}
v___jp_624_:
{
uint32_t v___x_625_; uint8_t v___x_626_; 
v___x_625_ = 48;
v___x_626_ = lean_uint32_dec_le(v___x_625_, v_c_605_);
if (v___x_626_ == 0)
{
goto v___jp_606_;
}
else
{
uint32_t v___x_627_; uint8_t v___x_628_; 
v___x_627_ = 57;
v___x_628_ = lean_uint32_dec_le(v_c_605_, v___x_627_);
if (v___x_628_ == 0)
{
goto v___jp_606_;
}
else
{
return v___x_628_;
}
}
}
v___jp_629_:
{
uint32_t v___x_630_; uint8_t v___x_631_; 
v___x_630_ = 97;
v___x_631_ = lean_uint32_dec_le(v___x_630_, v_c_605_);
if (v___x_631_ == 0)
{
goto v___jp_624_;
}
else
{
uint32_t v___x_632_; uint8_t v___x_633_; 
v___x_632_ = 122;
v___x_633_ = lean_uint32_dec_le(v_c_605_, v___x_632_);
if (v___x_633_ == 0)
{
goto v___jp_624_;
}
else
{
return v___x_633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_isIdRestFast___boxed(lean_object* v_c_638_){
_start:
{
uint32_t v_c_boxed_639_; uint8_t v_res_640_; lean_object* v_r_641_; 
v_c_boxed_639_ = lean_unbox_uint32(v_c_638_);
lean_dec(v_c_638_);
v_res_640_ = l_Lean_ParseImports_isIdRestFast(v_c_boxed_639_);
v_r_641_ = lean_box(v_res_640_);
return v_r_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(lean_object* v_input_642_, lean_object* v_s_643_){
_start:
{
lean_object* v_imports_644_; lean_object* v_pos_645_; uint8_t v_badModifier_646_; lean_object* v_error_x3f_647_; uint8_t v_isModule_648_; uint8_t v_isMeta_649_; uint8_t v_isExported_650_; uint8_t v_importAll_651_; uint8_t v___x_652_; 
v_imports_644_ = lean_ctor_get(v_s_643_, 0);
v_pos_645_ = lean_ctor_get(v_s_643_, 1);
v_badModifier_646_ = lean_ctor_get_uint8(v_s_643_, sizeof(void*)*3);
v_error_x3f_647_ = lean_ctor_get(v_s_643_, 2);
v_isModule_648_ = lean_ctor_get_uint8(v_s_643_, sizeof(void*)*3 + 1);
v_isMeta_649_ = lean_ctor_get_uint8(v_s_643_, sizeof(void*)*3 + 2);
v_isExported_650_ = lean_ctor_get_uint8(v_s_643_, sizeof(void*)*3 + 3);
v_importAll_651_ = lean_ctor_get_uint8(v_s_643_, sizeof(void*)*3 + 4);
v___x_652_ = lean_string_utf8_at_end(v_input_642_, v_pos_645_);
if (v___x_652_ == 0)
{
uint32_t v___x_653_; uint32_t v___x_654_; uint8_t v___x_655_; 
v___x_653_ = lean_string_utf8_get_fast(v_input_642_, v_pos_645_);
v___x_654_ = l_Lean_idEndEscape;
v___x_655_ = lean_uint32_dec_eq(v___x_653_, v___x_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_664_; 
lean_inc(v_error_x3f_647_);
lean_inc(v_pos_645_);
lean_inc_ref(v_imports_644_);
v_isSharedCheck_664_ = !lean_is_exclusive(v_s_643_);
if (v_isSharedCheck_664_ == 0)
{
lean_object* v_unused_665_; lean_object* v_unused_666_; lean_object* v_unused_667_; 
v_unused_665_ = lean_ctor_get(v_s_643_, 2);
lean_dec(v_unused_665_);
v_unused_666_ = lean_ctor_get(v_s_643_, 1);
lean_dec(v_unused_666_);
v_unused_667_ = lean_ctor_get(v_s_643_, 0);
lean_dec(v_unused_667_);
v___x_657_ = v_s_643_;
v_isShared_658_ = v_isSharedCheck_664_;
goto v_resetjp_656_;
}
else
{
lean_dec(v_s_643_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_664_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_659_; lean_object* v___x_661_; 
v___x_659_ = lean_string_utf8_next_fast(v_input_642_, v_pos_645_);
lean_dec(v_pos_645_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 1, v___x_659_);
v___x_661_ = v___x_657_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_imports_644_);
lean_ctor_set(v_reuseFailAlloc_663_, 1, v___x_659_);
lean_ctor_set(v_reuseFailAlloc_663_, 2, v_error_x3f_647_);
lean_ctor_set_uint8(v_reuseFailAlloc_663_, sizeof(void*)*3, v_badModifier_646_);
lean_ctor_set_uint8(v_reuseFailAlloc_663_, sizeof(void*)*3 + 1, v_isModule_648_);
lean_ctor_set_uint8(v_reuseFailAlloc_663_, sizeof(void*)*3 + 2, v_isMeta_649_);
lean_ctor_set_uint8(v_reuseFailAlloc_663_, sizeof(void*)*3 + 3, v_isExported_650_);
lean_ctor_set_uint8(v_reuseFailAlloc_663_, sizeof(void*)*3 + 4, v_importAll_651_);
v___x_661_ = v_reuseFailAlloc_663_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
v_s_643_ = v___x_661_;
goto _start;
}
}
}
else
{
return v_s_643_;
}
}
else
{
return v_s_643_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1___boxed(lean_object* v_input_668_, lean_object* v_s_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(v_input_668_, v_s_669_);
lean_dec_ref(v_input_668_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(uint8_t v___y_671_, uint8_t v___x_672_, lean_object* v_input_673_, lean_object* v_s_674_){
_start:
{
lean_object* v_imports_675_; lean_object* v_pos_676_; uint8_t v_badModifier_677_; lean_object* v_error_x3f_678_; uint8_t v_isModule_679_; uint8_t v_isMeta_680_; uint8_t v_isExported_681_; uint8_t v_importAll_682_; uint8_t v___y_684_; uint8_t v___x_697_; 
v_imports_675_ = lean_ctor_get(v_s_674_, 0);
v_pos_676_ = lean_ctor_get(v_s_674_, 1);
v_badModifier_677_ = lean_ctor_get_uint8(v_s_674_, sizeof(void*)*3);
v_error_x3f_678_ = lean_ctor_get(v_s_674_, 2);
v_isModule_679_ = lean_ctor_get_uint8(v_s_674_, sizeof(void*)*3 + 1);
v_isMeta_680_ = lean_ctor_get_uint8(v_s_674_, sizeof(void*)*3 + 2);
v_isExported_681_ = lean_ctor_get_uint8(v_s_674_, sizeof(void*)*3 + 3);
v_importAll_682_ = lean_ctor_get_uint8(v_s_674_, sizeof(void*)*3 + 4);
v___x_697_ = lean_string_utf8_at_end(v_input_673_, v_pos_676_);
if (v___x_697_ == 0)
{
uint32_t v___x_698_; uint32_t v___x_726_; uint8_t v___x_727_; 
v___x_698_ = lean_string_utf8_get_fast(v_input_673_, v_pos_676_);
v___x_726_ = 65;
v___x_727_ = lean_uint32_dec_le(v___x_726_, v___x_698_);
if (v___x_727_ == 0)
{
goto v___jp_721_;
}
else
{
uint32_t v___x_728_; uint8_t v___x_729_; 
v___x_728_ = 90;
v___x_729_ = lean_uint32_dec_le(v___x_698_, v___x_728_);
if (v___x_729_ == 0)
{
goto v___jp_721_;
}
else
{
v___y_684_ = v___x_672_;
goto v___jp_683_;
}
}
v___jp_699_:
{
uint32_t v___x_700_; uint8_t v___x_701_; 
v___x_700_ = 46;
v___x_701_ = lean_uint32_dec_eq(v___x_698_, v___x_700_);
if (v___x_701_ == 0)
{
uint32_t v___x_702_; uint8_t v___x_703_; 
v___x_702_ = 10;
v___x_703_ = lean_uint32_dec_eq(v___x_698_, v___x_702_);
if (v___x_703_ == 0)
{
uint32_t v___x_704_; uint8_t v___x_705_; 
v___x_704_ = 32;
v___x_705_ = lean_uint32_dec_eq(v___x_698_, v___x_704_);
if (v___x_705_ == 0)
{
uint32_t v___x_706_; uint8_t v___x_707_; 
v___x_706_ = 95;
v___x_707_ = lean_uint32_dec_eq(v___x_698_, v___x_706_);
if (v___x_707_ == 0)
{
uint32_t v___x_708_; uint8_t v___x_709_; 
v___x_708_ = 39;
v___x_709_ = lean_uint32_dec_eq(v___x_698_, v___x_708_);
if (v___x_709_ == 0)
{
uint32_t v___x_710_; uint8_t v___x_711_; 
v___x_710_ = 33;
v___x_711_ = lean_uint32_dec_eq(v___x_698_, v___x_710_);
if (v___x_711_ == 0)
{
uint32_t v___x_712_; uint8_t v___x_713_; 
v___x_712_ = 63;
v___x_713_ = lean_uint32_dec_eq(v___x_698_, v___x_712_);
if (v___x_713_ == 0)
{
uint8_t v___x_714_; 
v___x_714_ = l_Lean_isLetterLike(v___x_698_);
if (v___x_714_ == 0)
{
uint8_t v___x_715_; 
v___x_715_ = l_Lean_isSubScriptAlnum(v___x_698_);
if (v___x_715_ == 0)
{
v___y_684_ = v___y_671_;
goto v___jp_683_;
}
else
{
v___y_684_ = v___x_672_;
goto v___jp_683_;
}
}
else
{
v___y_684_ = v___x_672_;
goto v___jp_683_;
}
}
else
{
v___y_684_ = v___x_672_;
goto v___jp_683_;
}
}
else
{
v___y_684_ = v___x_672_;
goto v___jp_683_;
}
}
else
{
v___y_684_ = v___x_672_;
goto v___jp_683_;
}
}
else
{
v___y_684_ = v___x_672_;
goto v___jp_683_;
}
}
else
{
v___y_684_ = v___y_671_;
goto v___jp_683_;
}
}
else
{
v___y_684_ = v___y_671_;
goto v___jp_683_;
}
}
else
{
v___y_684_ = v___y_671_;
goto v___jp_683_;
}
}
v___jp_716_:
{
uint32_t v___x_717_; uint8_t v___x_718_; 
v___x_717_ = 48;
v___x_718_ = lean_uint32_dec_le(v___x_717_, v___x_698_);
if (v___x_718_ == 0)
{
goto v___jp_699_;
}
else
{
uint32_t v___x_719_; uint8_t v___x_720_; 
v___x_719_ = 57;
v___x_720_ = lean_uint32_dec_le(v___x_698_, v___x_719_);
if (v___x_720_ == 0)
{
goto v___jp_699_;
}
else
{
v___y_684_ = v___x_672_;
goto v___jp_683_;
}
}
}
v___jp_721_:
{
uint32_t v___x_722_; uint8_t v___x_723_; 
v___x_722_ = 97;
v___x_723_ = lean_uint32_dec_le(v___x_722_, v___x_698_);
if (v___x_723_ == 0)
{
goto v___jp_716_;
}
else
{
uint32_t v___x_724_; uint8_t v___x_725_; 
v___x_724_ = 122;
v___x_725_ = lean_uint32_dec_le(v___x_698_, v___x_724_);
if (v___x_725_ == 0)
{
goto v___jp_716_;
}
else
{
v___y_684_ = v___x_672_;
goto v___jp_683_;
}
}
}
}
else
{
return v_s_674_;
}
v___jp_683_:
{
if (v___y_684_ == 0)
{
lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_693_; 
lean_inc(v_error_x3f_678_);
lean_inc(v_pos_676_);
lean_inc_ref(v_imports_675_);
v_isSharedCheck_693_ = !lean_is_exclusive(v_s_674_);
if (v_isSharedCheck_693_ == 0)
{
lean_object* v_unused_694_; lean_object* v_unused_695_; lean_object* v_unused_696_; 
v_unused_694_ = lean_ctor_get(v_s_674_, 2);
lean_dec(v_unused_694_);
v_unused_695_ = lean_ctor_get(v_s_674_, 1);
lean_dec(v_unused_695_);
v_unused_696_ = lean_ctor_get(v_s_674_, 0);
lean_dec(v_unused_696_);
v___x_686_ = v_s_674_;
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
else
{
lean_dec(v_s_674_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_693_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_688_ = lean_string_utf8_next_fast(v_input_673_, v_pos_676_);
lean_dec(v_pos_676_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 1, v___x_688_);
v___x_690_ = v___x_686_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_imports_675_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_692_, 2, v_error_x3f_678_);
lean_ctor_set_uint8(v_reuseFailAlloc_692_, sizeof(void*)*3, v_badModifier_677_);
lean_ctor_set_uint8(v_reuseFailAlloc_692_, sizeof(void*)*3 + 1, v_isModule_679_);
lean_ctor_set_uint8(v_reuseFailAlloc_692_, sizeof(void*)*3 + 2, v_isMeta_680_);
lean_ctor_set_uint8(v_reuseFailAlloc_692_, sizeof(void*)*3 + 3, v_isExported_681_);
lean_ctor_set_uint8(v_reuseFailAlloc_692_, sizeof(void*)*3 + 4, v_importAll_682_);
v___x_690_ = v_reuseFailAlloc_692_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
v_s_674_ = v___x_690_;
goto _start;
}
}
}
else
{
return v_s_674_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0___boxed(lean_object* v___y_730_, lean_object* v___x_731_, lean_object* v_input_732_, lean_object* v_s_733_){
_start:
{
uint8_t v___y_831__boxed_734_; uint8_t v___x_832__boxed_735_; lean_object* v_res_736_; 
v___y_831__boxed_734_ = lean_unbox(v___y_730_);
v___x_832__boxed_735_ = lean_unbox(v___x_731_);
v_res_736_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(v___y_831__boxed_734_, v___x_832__boxed_735_, v_input_732_, v_s_733_);
lean_dec_ref(v_input_732_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse(lean_object* v_input_743_, lean_object* v_finalize_744_, lean_object* v_module_745_, lean_object* v_s_746_){
_start:
{
uint8_t v___y_748_; lean_object* v___y_749_; uint8_t v___y_750_; lean_object* v___y_751_; uint8_t v___y_752_; lean_object* v___y_753_; lean_object* v___y_754_; uint8_t v___y_755_; uint8_t v___y_756_; lean_object* v_imports_760_; lean_object* v_pos_761_; uint8_t v_badModifier_762_; lean_object* v_error_x3f_763_; uint8_t v_isModule_764_; uint8_t v_isMeta_765_; uint8_t v_isExported_766_; uint8_t v_importAll_767_; uint8_t v___x_768_; 
v_imports_760_ = lean_ctor_get(v_s_746_, 0);
v_pos_761_ = lean_ctor_get(v_s_746_, 1);
v_badModifier_762_ = lean_ctor_get_uint8(v_s_746_, sizeof(void*)*3);
v_error_x3f_763_ = lean_ctor_get(v_s_746_, 2);
v_isModule_764_ = lean_ctor_get_uint8(v_s_746_, sizeof(void*)*3 + 1);
v_isMeta_765_ = lean_ctor_get_uint8(v_s_746_, sizeof(void*)*3 + 2);
v_isExported_766_ = lean_ctor_get_uint8(v_s_746_, sizeof(void*)*3 + 3);
v_importAll_767_ = lean_ctor_get_uint8(v_s_746_, sizeof(void*)*3 + 4);
v___x_768_ = lean_string_utf8_at_end(v_input_743_, v_pos_761_);
if (v___x_768_ == 0)
{
lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_905_; 
lean_inc(v_error_x3f_763_);
lean_inc(v_pos_761_);
lean_inc_ref(v_imports_760_);
v_isSharedCheck_905_ = !lean_is_exclusive(v_s_746_);
if (v_isSharedCheck_905_ == 0)
{
lean_object* v_unused_906_; lean_object* v_unused_907_; lean_object* v_unused_908_; 
v_unused_906_ = lean_ctor_get(v_s_746_, 2);
lean_dec(v_unused_906_);
v_unused_907_ = lean_ctor_get(v_s_746_, 1);
lean_dec(v_unused_907_);
v_unused_908_ = lean_ctor_get(v_s_746_, 0);
lean_dec(v_unused_908_);
v___x_770_ = v_s_746_;
v_isShared_771_ = v_isSharedCheck_905_;
goto v_resetjp_769_;
}
else
{
lean_dec(v_s_746_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_905_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
uint32_t v_curr_772_; uint32_t v___x_773_; uint8_t v___y_775_; lean_object* v___y_776_; uint8_t v___y_777_; lean_object* v___y_778_; uint8_t v___y_779_; uint32_t v___y_780_; lean_object* v___y_781_; lean_object* v___y_782_; uint8_t v___y_783_; uint8_t v___y_784_; lean_object* v___y_785_; uint8_t v___y_792_; lean_object* v___y_793_; uint8_t v___y_794_; lean_object* v___y_795_; uint8_t v___y_796_; uint32_t v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; uint8_t v___y_800_; uint8_t v___y_801_; lean_object* v___y_802_; uint8_t v___x_807_; uint8_t v___y_809_; 
v_curr_772_ = lean_string_utf8_get_fast(v_input_743_, v_pos_761_);
v___x_773_ = l_Lean_idBeginEscape;
v___x_807_ = lean_uint32_dec_eq(v_curr_772_, v___x_773_);
if (v___x_807_ == 0)
{
uint32_t v___x_848_; uint8_t v___x_849_; 
v___x_848_ = 65;
v___x_849_ = lean_uint32_dec_le(v___x_848_, v_curr_772_);
if (v___x_849_ == 0)
{
goto v___jp_843_;
}
else
{
uint32_t v___x_850_; uint8_t v___x_851_; 
v___x_850_ = 90;
v___x_851_ = lean_uint32_dec_le(v_curr_772_, v___x_850_);
if (v___x_851_ == 0)
{
goto v___jp_843_;
}
else
{
v___y_809_ = v___x_851_;
goto v___jp_808_;
}
}
}
else
{
lean_object* v_startPart_852_; lean_object* v___x_853_; lean_object* v_s_854_; lean_object* v_imports_855_; lean_object* v_pos_856_; uint8_t v_badModifier_857_; lean_object* v_error_x3f_858_; uint8_t v_isModule_859_; uint8_t v_isMeta_860_; uint8_t v_isExported_861_; uint8_t v_importAll_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_904_; 
lean_del_object(v___x_770_);
v_startPart_852_ = lean_string_utf8_next_fast(v_input_743_, v_pos_761_);
lean_dec(v_pos_761_);
v___x_853_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_853_, 0, v_imports_760_);
lean_ctor_set(v___x_853_, 1, v_startPart_852_);
lean_ctor_set(v___x_853_, 2, v_error_x3f_763_);
lean_ctor_set_uint8(v___x_853_, sizeof(void*)*3, v_badModifier_762_);
lean_ctor_set_uint8(v___x_853_, sizeof(void*)*3 + 1, v_isModule_764_);
lean_ctor_set_uint8(v___x_853_, sizeof(void*)*3 + 2, v_isMeta_765_);
lean_ctor_set_uint8(v___x_853_, sizeof(void*)*3 + 3, v_isExported_766_);
lean_ctor_set_uint8(v___x_853_, sizeof(void*)*3 + 4, v_importAll_767_);
v_s_854_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__1(v_input_743_, v___x_853_);
v_imports_855_ = lean_ctor_get(v_s_854_, 0);
v_pos_856_ = lean_ctor_get(v_s_854_, 1);
v_badModifier_857_ = lean_ctor_get_uint8(v_s_854_, sizeof(void*)*3);
v_error_x3f_858_ = lean_ctor_get(v_s_854_, 2);
v_isModule_859_ = lean_ctor_get_uint8(v_s_854_, sizeof(void*)*3 + 1);
v_isMeta_860_ = lean_ctor_get_uint8(v_s_854_, sizeof(void*)*3 + 2);
v_isExported_861_ = lean_ctor_get_uint8(v_s_854_, sizeof(void*)*3 + 3);
v_importAll_862_ = lean_ctor_get_uint8(v_s_854_, sizeof(void*)*3 + 4);
v_isSharedCheck_904_ = !lean_is_exclusive(v_s_854_);
if (v_isSharedCheck_904_ == 0)
{
v___x_864_ = v_s_854_;
v_isShared_865_ = v_isSharedCheck_904_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_error_x3f_858_);
lean_inc(v_pos_856_);
lean_inc(v_imports_855_);
lean_dec(v_s_854_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_904_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
uint8_t v___x_866_; 
v___x_866_ = lean_string_utf8_at_end(v_input_743_, v_pos_856_);
if (v___x_866_ == 0)
{
lean_object* v_i_867_; lean_object* v_s_869_; 
v_i_867_ = lean_string_utf8_next_fast(v_input_743_, v_pos_856_);
lean_inc(v_error_x3f_858_);
lean_inc_ref(v_imports_855_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 1, v_i_867_);
v_s_869_ = v___x_864_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v_imports_855_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v_i_867_);
lean_ctor_set(v_reuseFailAlloc_899_, 2, v_error_x3f_858_);
lean_ctor_set_uint8(v_reuseFailAlloc_899_, sizeof(void*)*3, v_badModifier_857_);
lean_ctor_set_uint8(v_reuseFailAlloc_899_, sizeof(void*)*3 + 1, v_isModule_859_);
lean_ctor_set_uint8(v_reuseFailAlloc_899_, sizeof(void*)*3 + 2, v_isMeta_860_);
lean_ctor_set_uint8(v_reuseFailAlloc_899_, sizeof(void*)*3 + 3, v_isExported_861_);
lean_ctor_set_uint8(v_reuseFailAlloc_899_, sizeof(void*)*3 + 4, v_importAll_862_);
v_s_869_ = v_reuseFailAlloc_899_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
lean_object* v___x_870_; lean_object* v_module_871_; uint32_t v_curr_876_; uint32_t v___x_877_; uint8_t v___x_878_; 
v___x_870_ = lean_string_utf8_extract(v_input_743_, v_startPart_852_, v_pos_856_);
lean_dec(v_pos_856_);
v_module_871_ = l_Lean_Name_str___override(v_module_745_, v___x_870_);
v_curr_876_ = lean_string_utf8_get(v_input_743_, v_i_867_);
v___x_877_ = 46;
v___x_878_ = lean_uint32_dec_eq(v_curr_876_, v___x_877_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; 
lean_dec(v_error_x3f_858_);
lean_dec_ref(v_imports_855_);
v___x_879_ = lean_apply_3(v_finalize_744_, v_module_871_, v_input_743_, v_s_869_);
return v___x_879_;
}
else
{
lean_object* v_i_880_; uint8_t v___x_881_; 
v_i_880_ = lean_string_utf8_next(v_input_743_, v_i_867_);
v___x_881_ = lean_string_utf8_at_end(v_input_743_, v_i_880_);
if (v___x_881_ == 0)
{
uint32_t v_curr_882_; uint32_t v___x_894_; uint8_t v___x_895_; 
v_curr_882_ = lean_string_utf8_get_fast(v_input_743_, v_i_880_);
lean_dec(v_i_880_);
v___x_894_ = 65;
v___x_895_ = lean_uint32_dec_le(v___x_894_, v_curr_882_);
if (v___x_895_ == 0)
{
goto v___jp_889_;
}
else
{
uint32_t v___x_896_; uint8_t v___x_897_; 
v___x_896_ = 90;
v___x_897_ = lean_uint32_dec_le(v_curr_882_, v___x_896_);
if (v___x_897_ == 0)
{
goto v___jp_889_;
}
else
{
lean_dec_ref(v_s_869_);
goto v___jp_872_;
}
}
v___jp_883_:
{
uint32_t v___x_884_; uint8_t v___x_885_; 
v___x_884_ = 95;
v___x_885_ = lean_uint32_dec_eq(v_curr_882_, v___x_884_);
if (v___x_885_ == 0)
{
uint8_t v___x_886_; 
v___x_886_ = l_Lean_isLetterLike(v_curr_882_);
if (v___x_886_ == 0)
{
uint8_t v___x_887_; 
v___x_887_ = lean_uint32_dec_eq(v_curr_882_, v___x_773_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; 
lean_dec(v_error_x3f_858_);
lean_dec_ref(v_imports_855_);
v___x_888_ = lean_apply_3(v_finalize_744_, v_module_871_, v_input_743_, v_s_869_);
return v___x_888_;
}
else
{
lean_dec_ref(v_s_869_);
goto v___jp_872_;
}
}
else
{
lean_dec_ref(v_s_869_);
goto v___jp_872_;
}
}
else
{
lean_dec_ref(v_s_869_);
goto v___jp_872_;
}
}
v___jp_889_:
{
uint32_t v___x_890_; uint8_t v___x_891_; 
v___x_890_ = 97;
v___x_891_ = lean_uint32_dec_le(v___x_890_, v_curr_882_);
if (v___x_891_ == 0)
{
goto v___jp_883_;
}
else
{
uint32_t v___x_892_; uint8_t v___x_893_; 
v___x_892_ = 122;
v___x_893_ = lean_uint32_dec_le(v_curr_882_, v___x_892_);
if (v___x_893_ == 0)
{
goto v___jp_883_;
}
else
{
lean_dec_ref(v_s_869_);
goto v___jp_872_;
}
}
}
}
else
{
lean_object* v___x_898_; 
lean_dec(v_i_880_);
lean_dec(v_error_x3f_858_);
lean_dec_ref(v_imports_855_);
v___x_898_ = lean_apply_3(v_finalize_744_, v_module_871_, v_input_743_, v_s_869_);
return v___x_898_;
}
}
v___jp_872_:
{
lean_object* v___x_873_; lean_object* v_s_874_; 
v___x_873_ = lean_string_utf8_next(v_input_743_, v_i_867_);
v_s_874_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_s_874_, 0, v_imports_855_);
lean_ctor_set(v_s_874_, 1, v___x_873_);
lean_ctor_set(v_s_874_, 2, v_error_x3f_858_);
lean_ctor_set_uint8(v_s_874_, sizeof(void*)*3, v_badModifier_857_);
lean_ctor_set_uint8(v_s_874_, sizeof(void*)*3 + 1, v_isModule_859_);
lean_ctor_set_uint8(v_s_874_, sizeof(void*)*3 + 2, v_isMeta_860_);
lean_ctor_set_uint8(v_s_874_, sizeof(void*)*3 + 3, v_isExported_861_);
lean_ctor_set_uint8(v_s_874_, sizeof(void*)*3 + 4, v_importAll_862_);
v_module_745_ = v_module_871_;
v_s_746_ = v_s_874_;
goto _start;
}
}
}
else
{
lean_object* v___x_900_; lean_object* v___x_902_; 
lean_dec(v_error_x3f_858_);
lean_dec(v_module_745_);
lean_dec_ref(v_finalize_744_);
lean_dec_ref(v_input_743_);
v___x_900_ = ((lean_object*)(l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__3));
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 2, v___x_900_);
v___x_902_ = v___x_864_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_imports_855_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_pos_856_);
lean_ctor_set(v_reuseFailAlloc_903_, 2, v___x_900_);
lean_ctor_set_uint8(v_reuseFailAlloc_903_, sizeof(void*)*3, v_badModifier_857_);
lean_ctor_set_uint8(v_reuseFailAlloc_903_, sizeof(void*)*3 + 1, v_isModule_859_);
lean_ctor_set_uint8(v_reuseFailAlloc_903_, sizeof(void*)*3 + 2, v_isMeta_860_);
lean_ctor_set_uint8(v_reuseFailAlloc_903_, sizeof(void*)*3 + 3, v_isExported_861_);
lean_ctor_set_uint8(v_reuseFailAlloc_903_, sizeof(void*)*3 + 4, v_importAll_862_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
v___jp_774_:
{
uint32_t v___x_786_; uint8_t v___x_787_; 
v___x_786_ = 95;
v___x_787_ = lean_uint32_dec_eq(v___y_780_, v___x_786_);
if (v___x_787_ == 0)
{
uint8_t v___x_788_; 
v___x_788_ = l_Lean_isLetterLike(v___y_780_);
if (v___x_788_ == 0)
{
uint8_t v___x_789_; 
v___x_789_ = lean_uint32_dec_eq(v___y_780_, v___x_773_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; 
lean_dec(v___y_782_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_778_);
v___x_790_ = lean_apply_3(v_finalize_744_, v___y_776_, v_input_743_, v___y_785_);
return v___x_790_;
}
else
{
lean_dec_ref(v___y_785_);
v___y_748_ = v___y_775_;
v___y_749_ = v___y_776_;
v___y_750_ = v___y_777_;
v___y_751_ = v___y_778_;
v___y_752_ = v___y_779_;
v___y_753_ = v___y_781_;
v___y_754_ = v___y_782_;
v___y_755_ = v___y_784_;
v___y_756_ = v___y_783_;
goto v___jp_747_;
}
}
else
{
lean_dec_ref(v___y_785_);
v___y_748_ = v___y_775_;
v___y_749_ = v___y_776_;
v___y_750_ = v___y_777_;
v___y_751_ = v___y_778_;
v___y_752_ = v___y_779_;
v___y_753_ = v___y_781_;
v___y_754_ = v___y_782_;
v___y_755_ = v___y_784_;
v___y_756_ = v___y_783_;
goto v___jp_747_;
}
}
else
{
lean_dec_ref(v___y_785_);
v___y_748_ = v___y_775_;
v___y_749_ = v___y_776_;
v___y_750_ = v___y_777_;
v___y_751_ = v___y_778_;
v___y_752_ = v___y_779_;
v___y_753_ = v___y_781_;
v___y_754_ = v___y_782_;
v___y_755_ = v___y_784_;
v___y_756_ = v___y_783_;
goto v___jp_747_;
}
}
v___jp_791_:
{
uint32_t v___x_803_; uint8_t v___x_804_; 
v___x_803_ = 97;
v___x_804_ = lean_uint32_dec_le(v___x_803_, v___y_797_);
if (v___x_804_ == 0)
{
v___y_775_ = v___y_792_;
v___y_776_ = v___y_793_;
v___y_777_ = v___y_794_;
v___y_778_ = v___y_795_;
v___y_779_ = v___y_796_;
v___y_780_ = v___y_797_;
v___y_781_ = v___y_798_;
v___y_782_ = v___y_799_;
v___y_783_ = v___y_801_;
v___y_784_ = v___y_800_;
v___y_785_ = v___y_802_;
goto v___jp_774_;
}
else
{
uint32_t v___x_805_; uint8_t v___x_806_; 
v___x_805_ = 122;
v___x_806_ = lean_uint32_dec_le(v___y_797_, v___x_805_);
if (v___x_806_ == 0)
{
v___y_775_ = v___y_792_;
v___y_776_ = v___y_793_;
v___y_777_ = v___y_794_;
v___y_778_ = v___y_795_;
v___y_779_ = v___y_796_;
v___y_780_ = v___y_797_;
v___y_781_ = v___y_798_;
v___y_782_ = v___y_799_;
v___y_783_ = v___y_801_;
v___y_784_ = v___y_800_;
v___y_785_ = v___y_802_;
goto v___jp_774_;
}
else
{
lean_dec_ref(v___y_802_);
v___y_748_ = v___y_792_;
v___y_749_ = v___y_793_;
v___y_750_ = v___y_794_;
v___y_751_ = v___y_795_;
v___y_752_ = v___y_796_;
v___y_753_ = v___y_798_;
v___y_754_ = v___y_799_;
v___y_755_ = v___y_800_;
v___y_756_ = v___y_801_;
goto v___jp_747_;
}
}
}
v___jp_808_:
{
lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_810_ = lean_string_utf8_next_fast(v_input_743_, v_pos_761_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 1, v___x_810_);
v___x_812_ = v___x_770_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_imports_760_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v___x_810_);
lean_ctor_set(v_reuseFailAlloc_836_, 2, v_error_x3f_763_);
lean_ctor_set_uint8(v_reuseFailAlloc_836_, sizeof(void*)*3, v_badModifier_762_);
lean_ctor_set_uint8(v_reuseFailAlloc_836_, sizeof(void*)*3 + 1, v_isModule_764_);
lean_ctor_set_uint8(v_reuseFailAlloc_836_, sizeof(void*)*3 + 2, v_isMeta_765_);
lean_ctor_set_uint8(v_reuseFailAlloc_836_, sizeof(void*)*3 + 3, v_isExported_766_);
lean_ctor_set_uint8(v_reuseFailAlloc_836_, sizeof(void*)*3 + 4, v_importAll_767_);
v___x_812_ = v_reuseFailAlloc_836_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v_s_813_; lean_object* v_imports_814_; lean_object* v_pos_815_; uint8_t v_badModifier_816_; lean_object* v_error_x3f_817_; uint8_t v_isModule_818_; uint8_t v_isMeta_819_; uint8_t v_isExported_820_; uint8_t v_importAll_821_; lean_object* v___x_822_; lean_object* v_module_823_; uint32_t v_curr_824_; uint32_t v___x_825_; uint8_t v___x_826_; 
v_s_813_ = l_Lean_ParseImports_takeUntil___at___00__private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse_spec__0(v___y_809_, v___x_807_, v_input_743_, v___x_812_);
v_imports_814_ = lean_ctor_get(v_s_813_, 0);
v_pos_815_ = lean_ctor_get(v_s_813_, 1);
v_badModifier_816_ = lean_ctor_get_uint8(v_s_813_, sizeof(void*)*3);
v_error_x3f_817_ = lean_ctor_get(v_s_813_, 2);
v_isModule_818_ = lean_ctor_get_uint8(v_s_813_, sizeof(void*)*3 + 1);
v_isMeta_819_ = lean_ctor_get_uint8(v_s_813_, sizeof(void*)*3 + 2);
v_isExported_820_ = lean_ctor_get_uint8(v_s_813_, sizeof(void*)*3 + 3);
v_importAll_821_ = lean_ctor_get_uint8(v_s_813_, sizeof(void*)*3 + 4);
v___x_822_ = lean_string_utf8_extract(v_input_743_, v_pos_761_, v_pos_815_);
lean_dec(v_pos_761_);
v_module_823_ = l_Lean_Name_str___override(v_module_745_, v___x_822_);
v_curr_824_ = lean_string_utf8_get(v_input_743_, v_pos_815_);
v___x_825_ = 46;
v___x_826_ = lean_uint32_dec_eq(v_curr_824_, v___x_825_);
if (v___x_826_ == 0)
{
lean_object* v___x_827_; 
v___x_827_ = lean_apply_3(v_finalize_744_, v_module_823_, v_input_743_, v_s_813_);
return v___x_827_;
}
else
{
lean_object* v_i_828_; uint8_t v___x_829_; 
v_i_828_ = lean_string_utf8_next(v_input_743_, v_pos_815_);
v___x_829_ = lean_string_utf8_at_end(v_input_743_, v_i_828_);
if (v___x_829_ == 0)
{
uint32_t v_curr_830_; uint32_t v___x_831_; uint8_t v___x_832_; 
lean_inc(v_error_x3f_817_);
lean_inc(v_pos_815_);
lean_inc_ref(v_imports_814_);
v_curr_830_ = lean_string_utf8_get_fast(v_input_743_, v_i_828_);
lean_dec(v_i_828_);
v___x_831_ = 65;
v___x_832_ = lean_uint32_dec_le(v___x_831_, v_curr_830_);
if (v___x_832_ == 0)
{
v___y_792_ = v_importAll_821_;
v___y_793_ = v_module_823_;
v___y_794_ = v_badModifier_816_;
v___y_795_ = v_imports_814_;
v___y_796_ = v_isExported_820_;
v___y_797_ = v_curr_830_;
v___y_798_ = v_pos_815_;
v___y_799_ = v_error_x3f_817_;
v___y_800_ = v_isMeta_819_;
v___y_801_ = v_isModule_818_;
v___y_802_ = v_s_813_;
goto v___jp_791_;
}
else
{
uint32_t v___x_833_; uint8_t v___x_834_; 
v___x_833_ = 90;
v___x_834_ = lean_uint32_dec_le(v_curr_830_, v___x_833_);
if (v___x_834_ == 0)
{
v___y_792_ = v_importAll_821_;
v___y_793_ = v_module_823_;
v___y_794_ = v_badModifier_816_;
v___y_795_ = v_imports_814_;
v___y_796_ = v_isExported_820_;
v___y_797_ = v_curr_830_;
v___y_798_ = v_pos_815_;
v___y_799_ = v_error_x3f_817_;
v___y_800_ = v_isMeta_819_;
v___y_801_ = v_isModule_818_;
v___y_802_ = v_s_813_;
goto v___jp_791_;
}
else
{
lean_dec_ref(v_s_813_);
v___y_748_ = v_importAll_821_;
v___y_749_ = v_module_823_;
v___y_750_ = v_badModifier_816_;
v___y_751_ = v_imports_814_;
v___y_752_ = v_isExported_820_;
v___y_753_ = v_pos_815_;
v___y_754_ = v_error_x3f_817_;
v___y_755_ = v_isMeta_819_;
v___y_756_ = v_isModule_818_;
goto v___jp_747_;
}
}
}
else
{
lean_object* v___x_835_; 
lean_dec(v_i_828_);
v___x_835_ = lean_apply_3(v_finalize_744_, v_module_823_, v_input_743_, v_s_813_);
return v___x_835_;
}
}
}
}
v___jp_837_:
{
uint32_t v___x_838_; uint8_t v___x_839_; 
v___x_838_ = 95;
v___x_839_ = lean_uint32_dec_eq(v_curr_772_, v___x_838_);
if (v___x_839_ == 0)
{
uint8_t v___x_840_; 
v___x_840_ = l_Lean_isLetterLike(v_curr_772_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; lean_object* v___x_842_; 
lean_del_object(v___x_770_);
lean_dec(v_error_x3f_763_);
lean_dec(v_module_745_);
lean_dec_ref(v_finalize_744_);
lean_dec_ref(v_input_743_);
v___x_841_ = ((lean_object*)(l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse___closed__1));
v___x_842_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_842_, 0, v_imports_760_);
lean_ctor_set(v___x_842_, 1, v_pos_761_);
lean_ctor_set(v___x_842_, 2, v___x_841_);
lean_ctor_set_uint8(v___x_842_, sizeof(void*)*3, v_badModifier_762_);
lean_ctor_set_uint8(v___x_842_, sizeof(void*)*3 + 1, v_isModule_764_);
lean_ctor_set_uint8(v___x_842_, sizeof(void*)*3 + 2, v_isMeta_765_);
lean_ctor_set_uint8(v___x_842_, sizeof(void*)*3 + 3, v_isExported_766_);
lean_ctor_set_uint8(v___x_842_, sizeof(void*)*3 + 4, v_importAll_767_);
return v___x_842_;
}
else
{
v___y_809_ = v___x_840_;
goto v___jp_808_;
}
}
else
{
v___y_809_ = v___x_839_;
goto v___jp_808_;
}
}
v___jp_843_:
{
uint32_t v___x_844_; uint8_t v___x_845_; 
v___x_844_ = 97;
v___x_845_ = lean_uint32_dec_le(v___x_844_, v_curr_772_);
if (v___x_845_ == 0)
{
goto v___jp_837_;
}
else
{
uint32_t v___x_846_; uint8_t v___x_847_; 
v___x_846_ = 122;
v___x_847_ = lean_uint32_dec_le(v_curr_772_, v___x_846_);
if (v___x_847_ == 0)
{
goto v___jp_837_;
}
else
{
v___y_809_ = v___x_847_;
goto v___jp_808_;
}
}
}
}
}
else
{
lean_object* v___x_909_; 
lean_dec(v_module_745_);
lean_dec_ref(v_finalize_744_);
lean_dec_ref(v_input_743_);
v___x_909_ = l_Lean_ParseImports_State_mkEOIError(v_s_746_);
return v___x_909_;
}
v___jp_747_:
{
lean_object* v___x_757_; lean_object* v_s_758_; 
v___x_757_ = lean_string_utf8_next(v_input_743_, v___y_753_);
lean_dec(v___y_753_);
v_s_758_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_s_758_, 0, v___y_751_);
lean_ctor_set(v_s_758_, 1, v___x_757_);
lean_ctor_set(v_s_758_, 2, v___y_754_);
lean_ctor_set_uint8(v_s_758_, sizeof(void*)*3, v___y_750_);
lean_ctor_set_uint8(v_s_758_, sizeof(void*)*3 + 1, v___y_756_);
lean_ctor_set_uint8(v_s_758_, sizeof(void*)*3 + 2, v___y_755_);
lean_ctor_set_uint8(v_s_758_, sizeof(void*)*3 + 3, v___y_752_);
lean_ctor_set_uint8(v_s_758_, sizeof(void*)*3 + 4, v___y_748_);
v_module_745_ = v___y_749_;
v_s_746_ = v_s_758_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0(lean_object* v_module_910_, lean_object* v_input_911_, lean_object* v_s_912_){
_start:
{
uint8_t v_isMeta_913_; uint8_t v_isExported_914_; uint8_t v_importAll_915_; lean_object* v_imp_916_; lean_object* v___x_917_; lean_object* v_s_918_; lean_object* v_imports_919_; lean_object* v_pos_920_; uint8_t v_badModifier_921_; lean_object* v_error_x3f_922_; uint8_t v_isModule_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_935_; 
v_isMeta_913_ = lean_ctor_get_uint8(v_s_912_, sizeof(void*)*3 + 2);
v_isExported_914_ = lean_ctor_get_uint8(v_s_912_, sizeof(void*)*3 + 3);
v_importAll_915_ = lean_ctor_get_uint8(v_s_912_, sizeof(void*)*3 + 4);
v_imp_916_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_imp_916_, 0, v_module_910_);
lean_ctor_set_uint8(v_imp_916_, sizeof(void*)*1, v_importAll_915_);
lean_ctor_set_uint8(v_imp_916_, sizeof(void*)*1 + 1, v_isExported_914_);
lean_ctor_set_uint8(v_imp_916_, sizeof(void*)*1 + 2, v_isMeta_913_);
v___x_917_ = l_Lean_ParseImports_State_pushImport(v_imp_916_, v_s_912_);
v_s_918_ = l_Lean_ParseImports_whitespace(v_input_911_, v___x_917_);
v_imports_919_ = lean_ctor_get(v_s_918_, 0);
v_pos_920_ = lean_ctor_get(v_s_918_, 1);
v_badModifier_921_ = lean_ctor_get_uint8(v_s_918_, sizeof(void*)*3);
v_error_x3f_922_ = lean_ctor_get(v_s_918_, 2);
v_isModule_923_ = lean_ctor_get_uint8(v_s_918_, sizeof(void*)*3 + 1);
v_isSharedCheck_935_ = !lean_is_exclusive(v_s_918_);
if (v_isSharedCheck_935_ == 0)
{
v___x_925_ = v_s_918_;
v_isShared_926_ = v_isSharedCheck_935_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_error_x3f_922_);
lean_inc(v_pos_920_);
lean_inc(v_imports_919_);
lean_dec(v_s_918_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_935_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
uint8_t v___x_927_; 
v___x_927_ = 0;
if (v_isModule_923_ == 0)
{
uint8_t v___x_928_; lean_object* v___x_930_; 
v___x_928_ = 1;
if (v_isShared_926_ == 0)
{
v___x_930_ = v___x_925_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_imports_919_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v_pos_920_);
lean_ctor_set(v_reuseFailAlloc_931_, 2, v_error_x3f_922_);
lean_ctor_set_uint8(v_reuseFailAlloc_931_, sizeof(void*)*3, v_badModifier_921_);
lean_ctor_set_uint8(v_reuseFailAlloc_931_, sizeof(void*)*3 + 1, v_isModule_923_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*3 + 2, v___x_927_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*3 + 3, v___x_928_);
lean_ctor_set_uint8(v___x_930_, sizeof(void*)*3 + 4, v___x_927_);
return v___x_930_;
}
}
else
{
lean_object* v___x_933_; 
if (v_isShared_926_ == 0)
{
v___x_933_ = v___x_925_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_imports_919_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v_pos_920_);
lean_ctor_set(v_reuseFailAlloc_934_, 2, v_error_x3f_922_);
lean_ctor_set_uint8(v_reuseFailAlloc_934_, sizeof(void*)*3, v_badModifier_921_);
lean_ctor_set_uint8(v_reuseFailAlloc_934_, sizeof(void*)*3 + 1, v_isModule_923_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
lean_ctor_set_uint8(v___x_933_, sizeof(void*)*3 + 2, v___x_927_);
lean_ctor_set_uint8(v___x_933_, sizeof(void*)*3 + 3, v___x_927_);
lean_ctor_set_uint8(v___x_933_, sizeof(void*)*3 + 4, v___x_927_);
return v___x_933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent___lam__0___boxed(lean_object* v_module_936_, lean_object* v_input_937_, lean_object* v_s_938_){
_start:
{
lean_object* v_res_939_; 
v_res_939_ = l_Lean_ParseImports_moduleIdent___lam__0(v_module_936_, v_input_937_, v_s_938_);
lean_dec_ref(v_input_937_);
return v_res_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_moduleIdent(lean_object* v_input_941_, lean_object* v_s_942_){
_start:
{
lean_object* v_finalize_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v_finalize_943_ = ((lean_object*)(l_Lean_ParseImports_moduleIdent___closed__0));
v___x_944_ = lean_box(0);
v___x_945_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_moduleIdent_parse(v_input_941_, v_finalize_943_, v___x_944_, v_s_942_);
return v___x_945_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_atomic(lean_object* v_p_946_, lean_object* v_input_947_, lean_object* v_s_948_){
_start:
{
lean_object* v_pos_949_; lean_object* v_s_950_; lean_object* v_error_x3f_951_; 
v_pos_949_ = lean_ctor_get(v_s_948_, 1);
lean_inc(v_pos_949_);
v_s_950_ = lean_apply_2(v_p_946_, v_input_947_, v_s_948_);
v_error_x3f_951_ = lean_ctor_get(v_s_950_, 2);
lean_inc(v_error_x3f_951_);
if (lean_obj_tag(v_error_x3f_951_) == 1)
{
lean_object* v_imports_952_; uint8_t v_badModifier_953_; uint8_t v_isModule_954_; uint8_t v_isMeta_955_; uint8_t v_isExported_956_; uint8_t v_importAll_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_964_; 
v_imports_952_ = lean_ctor_get(v_s_950_, 0);
v_badModifier_953_ = lean_ctor_get_uint8(v_s_950_, sizeof(void*)*3);
v_isModule_954_ = lean_ctor_get_uint8(v_s_950_, sizeof(void*)*3 + 1);
v_isMeta_955_ = lean_ctor_get_uint8(v_s_950_, sizeof(void*)*3 + 2);
v_isExported_956_ = lean_ctor_get_uint8(v_s_950_, sizeof(void*)*3 + 3);
v_importAll_957_ = lean_ctor_get_uint8(v_s_950_, sizeof(void*)*3 + 4);
v_isSharedCheck_964_ = !lean_is_exclusive(v_s_950_);
if (v_isSharedCheck_964_ == 0)
{
lean_object* v_unused_965_; lean_object* v_unused_966_; 
v_unused_965_ = lean_ctor_get(v_s_950_, 2);
lean_dec(v_unused_965_);
v_unused_966_ = lean_ctor_get(v_s_950_, 1);
lean_dec(v_unused_966_);
v___x_959_ = v_s_950_;
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_imports_952_);
lean_dec(v_s_950_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_962_; 
if (v_isShared_960_ == 0)
{
lean_ctor_set(v___x_959_, 1, v_pos_949_);
v___x_962_ = v___x_959_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_imports_952_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v_pos_949_);
lean_ctor_set(v_reuseFailAlloc_963_, 2, v_error_x3f_951_);
lean_ctor_set_uint8(v_reuseFailAlloc_963_, sizeof(void*)*3, v_badModifier_953_);
lean_ctor_set_uint8(v_reuseFailAlloc_963_, sizeof(void*)*3 + 1, v_isModule_954_);
lean_ctor_set_uint8(v_reuseFailAlloc_963_, sizeof(void*)*3 + 2, v_isMeta_955_);
lean_ctor_set_uint8(v_reuseFailAlloc_963_, sizeof(void*)*3 + 3, v_isExported_956_);
lean_ctor_set_uint8(v_reuseFailAlloc_963_, sizeof(void*)*3 + 4, v_importAll_957_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
else
{
lean_dec(v_error_x3f_951_);
lean_dec(v_pos_949_);
return v_s_950_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports(lean_object* v_p_970_, lean_object* v_input_971_, lean_object* v_s_972_){
_start:
{
lean_object* v_pos_973_; lean_object* v_s_974_; lean_object* v_error_x3f_975_; 
v_pos_973_ = lean_ctor_get(v_s_972_, 1);
lean_inc(v_pos_973_);
lean_inc_ref(v_p_970_);
lean_inc_ref(v_input_971_);
v_s_974_ = lean_apply_2(v_p_970_, v_input_971_, v_s_972_);
v_error_x3f_975_ = lean_ctor_get(v_s_974_, 2);
lean_inc(v_error_x3f_975_);
if (lean_obj_tag(v_error_x3f_975_) == 1)
{
lean_object* v_imports_976_; lean_object* v_pos_977_; uint8_t v_isModule_978_; uint8_t v_isMeta_979_; uint8_t v_isExported_980_; uint8_t v_importAll_981_; uint8_t v_decide_982_; 
lean_dec_ref_known(v_error_x3f_975_, 1);
lean_dec_ref(v_input_971_);
lean_dec_ref(v_p_970_);
v_imports_976_ = lean_ctor_get(v_s_974_, 0);
lean_inc_ref(v_imports_976_);
v_pos_977_ = lean_ctor_get(v_s_974_, 1);
lean_inc(v_pos_977_);
v_isModule_978_ = lean_ctor_get_uint8(v_s_974_, sizeof(void*)*3 + 1);
v_isMeta_979_ = lean_ctor_get_uint8(v_s_974_, sizeof(void*)*3 + 2);
v_isExported_980_ = lean_ctor_get_uint8(v_s_974_, sizeof(void*)*3 + 3);
v_importAll_981_ = lean_ctor_get_uint8(v_s_974_, sizeof(void*)*3 + 4);
v_decide_982_ = lean_nat_dec_eq(v_pos_977_, v_pos_973_);
lean_dec(v_pos_973_);
if (v_decide_982_ == 0)
{
lean_dec(v_pos_977_);
lean_dec_ref(v_imports_976_);
return v_s_974_;
}
else
{
lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_991_; 
v_isSharedCheck_991_ = !lean_is_exclusive(v_s_974_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; lean_object* v_unused_993_; lean_object* v_unused_994_; 
v_unused_992_ = lean_ctor_get(v_s_974_, 2);
lean_dec(v_unused_992_);
v_unused_993_ = lean_ctor_get(v_s_974_, 1);
lean_dec(v_unused_993_);
v_unused_994_ = lean_ctor_get(v_s_974_, 0);
lean_dec(v_unused_994_);
v___x_984_ = v_s_974_;
v_isShared_985_ = v_isSharedCheck_991_;
goto v_resetjp_983_;
}
else
{
lean_dec(v_s_974_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_991_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
uint8_t v___x_986_; lean_object* v___x_987_; lean_object* v___x_989_; 
v___x_986_ = 0;
v___x_987_ = lean_box(0);
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 2, v___x_987_);
v___x_989_ = v___x_984_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_imports_976_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v_pos_977_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v___x_987_);
lean_ctor_set_uint8(v_reuseFailAlloc_990_, sizeof(void*)*3 + 1, v_isModule_978_);
lean_ctor_set_uint8(v_reuseFailAlloc_990_, sizeof(void*)*3 + 2, v_isMeta_979_);
lean_ctor_set_uint8(v_reuseFailAlloc_990_, sizeof(void*)*3 + 3, v_isExported_980_);
lean_ctor_set_uint8(v_reuseFailAlloc_990_, sizeof(void*)*3 + 4, v_importAll_981_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
lean_ctor_set_uint8(v___x_989_, sizeof(void*)*3, v___x_986_);
return v___x_989_;
}
}
}
}
else
{
uint8_t v_badModifier_995_; 
lean_dec(v_error_x3f_975_);
v_badModifier_995_ = lean_ctor_get_uint8(v_s_974_, sizeof(void*)*3);
if (v_badModifier_995_ == 0)
{
lean_dec(v_pos_973_);
v_s_972_ = v_s_974_;
goto _start;
}
else
{
lean_object* v_imports_997_; uint8_t v_isModule_998_; uint8_t v_isMeta_999_; uint8_t v_isExported_1000_; uint8_t v_importAll_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1010_; 
lean_dec_ref(v_input_971_);
lean_dec_ref(v_p_970_);
v_imports_997_ = lean_ctor_get(v_s_974_, 0);
v_isModule_998_ = lean_ctor_get_uint8(v_s_974_, sizeof(void*)*3 + 1);
v_isMeta_999_ = lean_ctor_get_uint8(v_s_974_, sizeof(void*)*3 + 2);
v_isExported_1000_ = lean_ctor_get_uint8(v_s_974_, sizeof(void*)*3 + 3);
v_importAll_1001_ = lean_ctor_get_uint8(v_s_974_, sizeof(void*)*3 + 4);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_s_974_);
if (v_isSharedCheck_1010_ == 0)
{
lean_object* v_unused_1011_; lean_object* v_unused_1012_; 
v_unused_1011_ = lean_ctor_get(v_s_974_, 2);
lean_dec(v_unused_1011_);
v_unused_1012_ = lean_ctor_get(v_s_974_, 1);
lean_dec(v_unused_1012_);
v___x_1003_ = v_s_974_;
v_isShared_1004_ = v_isSharedCheck_1010_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_imports_997_);
lean_dec(v_s_974_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1010_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
uint8_t v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1008_; 
v___x_1005_ = 0;
v___x_1006_ = ((lean_object*)(l_Lean_ParseImports_manyImports___closed__1));
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 2, v___x_1006_);
lean_ctor_set(v___x_1003_, 1, v_pos_973_);
v___x_1008_ = v___x_1003_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_imports_997_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v_pos_973_);
lean_ctor_set(v_reuseFailAlloc_1009_, 2, v___x_1006_);
lean_ctor_set_uint8(v_reuseFailAlloc_1009_, sizeof(void*)*3 + 1, v_isModule_998_);
lean_ctor_set_uint8(v_reuseFailAlloc_1009_, sizeof(void*)*3 + 2, v_isMeta_999_);
lean_ctor_set_uint8(v_reuseFailAlloc_1009_, sizeof(void*)*3 + 3, v_isExported_1000_);
lean_ctor_set_uint8(v_reuseFailAlloc_1009_, sizeof(void*)*3 + 4, v_importAll_1001_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
lean_ctor_set_uint8(v___x_1008_, sizeof(void*)*3, v___x_1005_);
return v___x_1008_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg(uint8_t v_isModule_1013_, lean_object* v_s_1014_){
_start:
{
if (v_isModule_1013_ == 0)
{
lean_object* v_imports_1015_; lean_object* v_pos_1016_; uint8_t v_badModifier_1017_; lean_object* v_error_x3f_1018_; uint8_t v_isMeta_1019_; uint8_t v_importAll_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1028_; 
v_imports_1015_ = lean_ctor_get(v_s_1014_, 0);
v_pos_1016_ = lean_ctor_get(v_s_1014_, 1);
v_badModifier_1017_ = lean_ctor_get_uint8(v_s_1014_, sizeof(void*)*3);
v_error_x3f_1018_ = lean_ctor_get(v_s_1014_, 2);
v_isMeta_1019_ = lean_ctor_get_uint8(v_s_1014_, sizeof(void*)*3 + 2);
v_importAll_1020_ = lean_ctor_get_uint8(v_s_1014_, sizeof(void*)*3 + 4);
v_isSharedCheck_1028_ = !lean_is_exclusive(v_s_1014_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1022_ = v_s_1014_;
v_isShared_1023_ = v_isSharedCheck_1028_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_error_x3f_1018_);
lean_inc(v_pos_1016_);
lean_inc(v_imports_1015_);
lean_dec(v_s_1014_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1028_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
uint8_t v___x_1024_; lean_object* v___x_1026_; 
v___x_1024_ = 1;
if (v_isShared_1023_ == 0)
{
v___x_1026_ = v___x_1022_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_imports_1015_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_pos_1016_);
lean_ctor_set(v_reuseFailAlloc_1027_, 2, v_error_x3f_1018_);
lean_ctor_set_uint8(v_reuseFailAlloc_1027_, sizeof(void*)*3, v_badModifier_1017_);
lean_ctor_set_uint8(v_reuseFailAlloc_1027_, sizeof(void*)*3 + 2, v_isMeta_1019_);
lean_ctor_set_uint8(v_reuseFailAlloc_1027_, sizeof(void*)*3 + 4, v_importAll_1020_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
lean_ctor_set_uint8(v___x_1026_, sizeof(void*)*3 + 1, v_isModule_1013_);
lean_ctor_set_uint8(v___x_1026_, sizeof(void*)*3 + 3, v___x_1024_);
return v___x_1026_;
}
}
}
else
{
lean_object* v_imports_1029_; lean_object* v_pos_1030_; uint8_t v_badModifier_1031_; lean_object* v_error_x3f_1032_; uint8_t v_isMeta_1033_; uint8_t v_importAll_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1042_; 
v_imports_1029_ = lean_ctor_get(v_s_1014_, 0);
v_pos_1030_ = lean_ctor_get(v_s_1014_, 1);
v_badModifier_1031_ = lean_ctor_get_uint8(v_s_1014_, sizeof(void*)*3);
v_error_x3f_1032_ = lean_ctor_get(v_s_1014_, 2);
v_isMeta_1033_ = lean_ctor_get_uint8(v_s_1014_, sizeof(void*)*3 + 2);
v_importAll_1034_ = lean_ctor_get_uint8(v_s_1014_, sizeof(void*)*3 + 4);
v_isSharedCheck_1042_ = !lean_is_exclusive(v_s_1014_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1036_ = v_s_1014_;
v_isShared_1037_ = v_isSharedCheck_1042_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_error_x3f_1032_);
lean_inc(v_pos_1030_);
lean_inc(v_imports_1029_);
lean_dec(v_s_1014_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1042_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
uint8_t v___x_1038_; lean_object* v___x_1040_; 
v___x_1038_ = 0;
if (v_isShared_1037_ == 0)
{
v___x_1040_ = v___x_1036_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_imports_1029_);
lean_ctor_set(v_reuseFailAlloc_1041_, 1, v_pos_1030_);
lean_ctor_set(v_reuseFailAlloc_1041_, 2, v_error_x3f_1032_);
lean_ctor_set_uint8(v_reuseFailAlloc_1041_, sizeof(void*)*3, v_badModifier_1031_);
lean_ctor_set_uint8(v_reuseFailAlloc_1041_, sizeof(void*)*3 + 2, v_isMeta_1033_);
lean_ctor_set_uint8(v_reuseFailAlloc_1041_, sizeof(void*)*3 + 4, v_importAll_1034_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_ctor_set_uint8(v___x_1040_, sizeof(void*)*3 + 1, v_isModule_1013_);
lean_ctor_set_uint8(v___x_1040_, sizeof(void*)*3 + 3, v___x_1038_);
return v___x_1040_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___redArg___boxed(lean_object* v_isModule_1043_, lean_object* v_s_1044_){
_start:
{
uint8_t v_isModule_boxed_1045_; lean_object* v_res_1046_; 
v_isModule_boxed_1045_ = lean_unbox(v_isModule_1043_);
v_res_1046_ = l_Lean_ParseImports_setIsModule___redArg(v_isModule_boxed_1045_, v_s_1044_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule(uint8_t v_isModule_1047_, lean_object* v_x_1048_, lean_object* v_s_1049_){
_start:
{
lean_object* v___x_1050_; 
v___x_1050_ = l_Lean_ParseImports_setIsModule___redArg(v_isModule_1047_, v_s_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setIsModule___boxed(lean_object* v_isModule_1051_, lean_object* v_x_1052_, lean_object* v_s_1053_){
_start:
{
uint8_t v_isModule_boxed_1054_; lean_object* v_res_1055_; 
v_isModule_boxed_1054_ = lean_unbox(v_isModule_1051_);
v_res_1055_ = l_Lean_ParseImports_setIsModule(v_isModule_boxed_1054_, v_x_1052_, v_s_1053_);
lean_dec_ref(v_x_1052_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___redArg(lean_object* v_s_1056_){
_start:
{
lean_object* v_imports_1057_; lean_object* v_pos_1058_; uint8_t v_badModifier_1059_; lean_object* v_error_x3f_1060_; uint8_t v_isModule_1061_; uint8_t v_isMeta_1062_; uint8_t v_isExported_1063_; uint8_t v_importAll_1064_; lean_object* v___x_1066_; uint8_t v_isShared_1067_; uint8_t v_isSharedCheck_1075_; 
v_imports_1057_ = lean_ctor_get(v_s_1056_, 0);
v_pos_1058_ = lean_ctor_get(v_s_1056_, 1);
v_badModifier_1059_ = lean_ctor_get_uint8(v_s_1056_, sizeof(void*)*3);
v_error_x3f_1060_ = lean_ctor_get(v_s_1056_, 2);
v_isModule_1061_ = lean_ctor_get_uint8(v_s_1056_, sizeof(void*)*3 + 1);
v_isMeta_1062_ = lean_ctor_get_uint8(v_s_1056_, sizeof(void*)*3 + 2);
v_isExported_1063_ = lean_ctor_get_uint8(v_s_1056_, sizeof(void*)*3 + 3);
v_importAll_1064_ = lean_ctor_get_uint8(v_s_1056_, sizeof(void*)*3 + 4);
v_isSharedCheck_1075_ = !lean_is_exclusive(v_s_1056_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1066_ = v_s_1056_;
v_isShared_1067_ = v_isSharedCheck_1075_;
goto v_resetjp_1065_;
}
else
{
lean_inc(v_error_x3f_1060_);
lean_inc(v_pos_1058_);
lean_inc(v_imports_1057_);
lean_dec(v_s_1056_);
v___x_1066_ = lean_box(0);
v_isShared_1067_ = v_isSharedCheck_1075_;
goto v_resetjp_1065_;
}
v_resetjp_1065_:
{
uint8_t v___x_1068_; 
v___x_1068_ = 1;
if (v_isModule_1061_ == 0)
{
lean_object* v___x_1070_; 
if (v_isShared_1067_ == 0)
{
v___x_1070_ = v___x_1066_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_imports_1057_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_pos_1058_);
lean_ctor_set(v_reuseFailAlloc_1071_, 2, v_error_x3f_1060_);
lean_ctor_set_uint8(v_reuseFailAlloc_1071_, sizeof(void*)*3 + 1, v_isModule_1061_);
lean_ctor_set_uint8(v_reuseFailAlloc_1071_, sizeof(void*)*3 + 2, v_isMeta_1062_);
lean_ctor_set_uint8(v_reuseFailAlloc_1071_, sizeof(void*)*3 + 3, v_isExported_1063_);
lean_ctor_set_uint8(v_reuseFailAlloc_1071_, sizeof(void*)*3 + 4, v_importAll_1064_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
lean_ctor_set_uint8(v___x_1070_, sizeof(void*)*3, v___x_1068_);
return v___x_1070_;
}
}
else
{
lean_object* v___x_1073_; 
if (v_isShared_1067_ == 0)
{
v___x_1073_ = v___x_1066_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_imports_1057_);
lean_ctor_set(v_reuseFailAlloc_1074_, 1, v_pos_1058_);
lean_ctor_set(v_reuseFailAlloc_1074_, 2, v_error_x3f_1060_);
lean_ctor_set_uint8(v_reuseFailAlloc_1074_, sizeof(void*)*3, v_badModifier_1059_);
lean_ctor_set_uint8(v_reuseFailAlloc_1074_, sizeof(void*)*3 + 1, v_isModule_1061_);
lean_ctor_set_uint8(v_reuseFailAlloc_1074_, sizeof(void*)*3 + 3, v_isExported_1063_);
lean_ctor_set_uint8(v_reuseFailAlloc_1074_, sizeof(void*)*3 + 4, v_importAll_1064_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
lean_ctor_set_uint8(v___x_1073_, sizeof(void*)*3 + 2, v___x_1068_);
return v___x_1073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta(lean_object* v_x_1076_, lean_object* v_s_1077_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = l_Lean_ParseImports_setMeta___redArg(v_s_1077_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setMeta___boxed(lean_object* v_x_1079_, lean_object* v_s_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_Lean_ParseImports_setMeta(v_x_1079_, v_s_1080_);
lean_dec_ref(v_x_1079_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___redArg(lean_object* v_s_1082_){
_start:
{
lean_object* v_imports_1083_; lean_object* v_pos_1084_; uint8_t v_badModifier_1085_; lean_object* v_error_x3f_1086_; uint8_t v_isModule_1087_; uint8_t v_isMeta_1088_; uint8_t v_isExported_1089_; uint8_t v_importAll_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1101_; 
v_imports_1083_ = lean_ctor_get(v_s_1082_, 0);
v_pos_1084_ = lean_ctor_get(v_s_1082_, 1);
v_badModifier_1085_ = lean_ctor_get_uint8(v_s_1082_, sizeof(void*)*3);
v_error_x3f_1086_ = lean_ctor_get(v_s_1082_, 2);
v_isModule_1087_ = lean_ctor_get_uint8(v_s_1082_, sizeof(void*)*3 + 1);
v_isMeta_1088_ = lean_ctor_get_uint8(v_s_1082_, sizeof(void*)*3 + 2);
v_isExported_1089_ = lean_ctor_get_uint8(v_s_1082_, sizeof(void*)*3 + 3);
v_importAll_1090_ = lean_ctor_get_uint8(v_s_1082_, sizeof(void*)*3 + 4);
v_isSharedCheck_1101_ = !lean_is_exclusive(v_s_1082_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1092_ = v_s_1082_;
v_isShared_1093_ = v_isSharedCheck_1101_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_error_x3f_1086_);
lean_inc(v_pos_1084_);
lean_inc(v_imports_1083_);
lean_dec(v_s_1082_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1101_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
uint8_t v___x_1094_; 
v___x_1094_ = 1;
if (v_isModule_1087_ == 0)
{
lean_object* v___x_1096_; 
if (v_isShared_1093_ == 0)
{
v___x_1096_ = v___x_1092_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_imports_1083_);
lean_ctor_set(v_reuseFailAlloc_1097_, 1, v_pos_1084_);
lean_ctor_set(v_reuseFailAlloc_1097_, 2, v_error_x3f_1086_);
lean_ctor_set_uint8(v_reuseFailAlloc_1097_, sizeof(void*)*3 + 1, v_isModule_1087_);
lean_ctor_set_uint8(v_reuseFailAlloc_1097_, sizeof(void*)*3 + 2, v_isMeta_1088_);
lean_ctor_set_uint8(v_reuseFailAlloc_1097_, sizeof(void*)*3 + 3, v_isExported_1089_);
lean_ctor_set_uint8(v_reuseFailAlloc_1097_, sizeof(void*)*3 + 4, v_importAll_1090_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
lean_ctor_set_uint8(v___x_1096_, sizeof(void*)*3, v___x_1094_);
return v___x_1096_;
}
}
else
{
lean_object* v___x_1099_; 
if (v_isShared_1093_ == 0)
{
v___x_1099_ = v___x_1092_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_imports_1083_);
lean_ctor_set(v_reuseFailAlloc_1100_, 1, v_pos_1084_);
lean_ctor_set(v_reuseFailAlloc_1100_, 2, v_error_x3f_1086_);
lean_ctor_set_uint8(v_reuseFailAlloc_1100_, sizeof(void*)*3, v_badModifier_1085_);
lean_ctor_set_uint8(v_reuseFailAlloc_1100_, sizeof(void*)*3 + 1, v_isModule_1087_);
lean_ctor_set_uint8(v_reuseFailAlloc_1100_, sizeof(void*)*3 + 2, v_isMeta_1088_);
lean_ctor_set_uint8(v_reuseFailAlloc_1100_, sizeof(void*)*3 + 4, v_importAll_1090_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
lean_ctor_set_uint8(v___x_1099_, sizeof(void*)*3 + 3, v___x_1094_);
return v___x_1099_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported(lean_object* v_x_1102_, lean_object* v_s_1103_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = l_Lean_ParseImports_setExported___redArg(v_s_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setExported___boxed(lean_object* v_x_1105_, lean_object* v_s_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = l_Lean_ParseImports_setExported(v_x_1105_, v_s_1106_);
lean_dec_ref(v_x_1105_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___redArg(lean_object* v_s_1108_){
_start:
{
lean_object* v_imports_1109_; lean_object* v_pos_1110_; uint8_t v_badModifier_1111_; lean_object* v_error_x3f_1112_; uint8_t v_isModule_1113_; uint8_t v_isMeta_1114_; uint8_t v_isExported_1115_; uint8_t v_importAll_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1127_; 
v_imports_1109_ = lean_ctor_get(v_s_1108_, 0);
v_pos_1110_ = lean_ctor_get(v_s_1108_, 1);
v_badModifier_1111_ = lean_ctor_get_uint8(v_s_1108_, sizeof(void*)*3);
v_error_x3f_1112_ = lean_ctor_get(v_s_1108_, 2);
v_isModule_1113_ = lean_ctor_get_uint8(v_s_1108_, sizeof(void*)*3 + 1);
v_isMeta_1114_ = lean_ctor_get_uint8(v_s_1108_, sizeof(void*)*3 + 2);
v_isExported_1115_ = lean_ctor_get_uint8(v_s_1108_, sizeof(void*)*3 + 3);
v_importAll_1116_ = lean_ctor_get_uint8(v_s_1108_, sizeof(void*)*3 + 4);
v_isSharedCheck_1127_ = !lean_is_exclusive(v_s_1108_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1118_ = v_s_1108_;
v_isShared_1119_ = v_isSharedCheck_1127_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_error_x3f_1112_);
lean_inc(v_pos_1110_);
lean_inc(v_imports_1109_);
lean_dec(v_s_1108_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1127_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
uint8_t v___x_1120_; 
v___x_1120_ = 1;
if (v_isModule_1113_ == 0)
{
lean_object* v___x_1122_; 
if (v_isShared_1119_ == 0)
{
v___x_1122_ = v___x_1118_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_imports_1109_);
lean_ctor_set(v_reuseFailAlloc_1123_, 1, v_pos_1110_);
lean_ctor_set(v_reuseFailAlloc_1123_, 2, v_error_x3f_1112_);
lean_ctor_set_uint8(v_reuseFailAlloc_1123_, sizeof(void*)*3 + 1, v_isModule_1113_);
lean_ctor_set_uint8(v_reuseFailAlloc_1123_, sizeof(void*)*3 + 2, v_isMeta_1114_);
lean_ctor_set_uint8(v_reuseFailAlloc_1123_, sizeof(void*)*3 + 3, v_isExported_1115_);
lean_ctor_set_uint8(v_reuseFailAlloc_1123_, sizeof(void*)*3 + 4, v_importAll_1116_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
lean_ctor_set_uint8(v___x_1122_, sizeof(void*)*3, v___x_1120_);
return v___x_1122_;
}
}
else
{
lean_object* v___x_1125_; 
if (v_isShared_1119_ == 0)
{
v___x_1125_ = v___x_1118_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_imports_1109_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v_pos_1110_);
lean_ctor_set(v_reuseFailAlloc_1126_, 2, v_error_x3f_1112_);
lean_ctor_set_uint8(v_reuseFailAlloc_1126_, sizeof(void*)*3, v_badModifier_1111_);
lean_ctor_set_uint8(v_reuseFailAlloc_1126_, sizeof(void*)*3 + 1, v_isModule_1113_);
lean_ctor_set_uint8(v_reuseFailAlloc_1126_, sizeof(void*)*3 + 2, v_isMeta_1114_);
lean_ctor_set_uint8(v_reuseFailAlloc_1126_, sizeof(void*)*3 + 3, v_isExported_1115_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
lean_ctor_set_uint8(v___x_1125_, sizeof(void*)*3 + 4, v___x_1120_);
return v___x_1125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll(lean_object* v_x_1128_, lean_object* v_s_1129_){
_start:
{
lean_object* v___x_1130_; 
v___x_1130_ = l_Lean_ParseImports_setImportAll___redArg(v_s_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_setImportAll___boxed(lean_object* v_x_1131_, lean_object* v_s_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lean_ParseImports_setImportAll(v_x_1131_, v_s_1132_);
lean_dec_ref(v_x_1131_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(lean_object* v_k_1137_, lean_object* v_input_1138_, lean_object* v_s_1139_, lean_object* v_i_1140_, lean_object* v_j_1141_){
_start:
{
uint8_t v___x_1142_; 
v___x_1142_ = lean_string_utf8_at_end(v_k_1137_, v_i_1140_);
if (v___x_1142_ == 0)
{
uint8_t v___x_1143_; lean_object* v_s_1145_; uint8_t v___x_1151_; 
v___x_1143_ = 1;
v___x_1151_ = lean_string_utf8_at_end(v_input_1138_, v_j_1141_);
if (v___x_1151_ == 0)
{
uint32_t v_curr_u2081_1152_; uint32_t v_curr_u2082_1153_; uint8_t v___x_1154_; 
v_curr_u2081_1152_ = lean_string_utf8_get_fast(v_k_1137_, v_i_1140_);
v_curr_u2082_1153_ = lean_string_utf8_get_fast(v_input_1138_, v_j_1141_);
v___x_1154_ = lean_uint32_dec_eq(v_curr_u2081_1152_, v_curr_u2082_1153_);
if (v___x_1154_ == 0)
{
lean_dec(v_j_1141_);
lean_dec(v_i_1140_);
v_s_1145_ = v_s_1139_;
goto v___jp_1144_;
}
else
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = lean_string_utf8_next_fast(v_k_1137_, v_i_1140_);
lean_dec(v_i_1140_);
v___x_1156_ = lean_string_utf8_next_fast(v_input_1138_, v_j_1141_);
lean_dec(v_j_1141_);
v_i_1140_ = v___x_1155_;
v_j_1141_ = v___x_1156_;
goto _start;
}
}
else
{
lean_dec(v_j_1141_);
lean_dec(v_i_1140_);
v_s_1145_ = v_s_1139_;
goto v___jp_1144_;
}
v___jp_1144_:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1146_ = ((lean_object*)(l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___closed__1));
v___x_1147_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*1, v___x_1142_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*1 + 1, v___x_1143_);
lean_ctor_set_uint8(v___x_1147_, sizeof(void*)*1 + 2, v___x_1143_);
v___x_1148_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1148_, 0, v___x_1146_);
lean_ctor_set_uint8(v___x_1148_, sizeof(void*)*1, v___x_1142_);
lean_ctor_set_uint8(v___x_1148_, sizeof(void*)*1 + 1, v___x_1143_);
lean_ctor_set_uint8(v___x_1148_, sizeof(void*)*1 + 2, v___x_1142_);
v___x_1149_ = l_Lean_ParseImports_State_pushImport(v___x_1148_, v_s_1145_);
v___x_1150_ = l_Lean_ParseImports_State_pushImport(v___x_1147_, v___x_1149_);
return v___x_1150_;
}
}
else
{
lean_object* v_imports_1158_; uint8_t v_badModifier_1159_; lean_object* v_error_x3f_1160_; uint8_t v_isModule_1161_; uint8_t v_isMeta_1162_; uint8_t v_isExported_1163_; uint8_t v_importAll_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1172_; 
lean_dec(v_i_1140_);
v_imports_1158_ = lean_ctor_get(v_s_1139_, 0);
v_badModifier_1159_ = lean_ctor_get_uint8(v_s_1139_, sizeof(void*)*3);
v_error_x3f_1160_ = lean_ctor_get(v_s_1139_, 2);
v_isModule_1161_ = lean_ctor_get_uint8(v_s_1139_, sizeof(void*)*3 + 1);
v_isMeta_1162_ = lean_ctor_get_uint8(v_s_1139_, sizeof(void*)*3 + 2);
v_isExported_1163_ = lean_ctor_get_uint8(v_s_1139_, sizeof(void*)*3 + 3);
v_importAll_1164_ = lean_ctor_get_uint8(v_s_1139_, sizeof(void*)*3 + 4);
v_isSharedCheck_1172_ = !lean_is_exclusive(v_s_1139_);
if (v_isSharedCheck_1172_ == 0)
{
lean_object* v_unused_1173_; 
v_unused_1173_ = lean_ctor_get(v_s_1139_, 1);
lean_dec(v_unused_1173_);
v___x_1166_ = v_s_1139_;
v_isShared_1167_ = v_isSharedCheck_1172_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_error_x3f_1160_);
lean_inc(v_imports_1158_);
lean_dec(v_s_1139_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1172_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 1, v_j_1141_);
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_imports_1158_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v_j_1141_);
lean_ctor_set(v_reuseFailAlloc_1171_, 2, v_error_x3f_1160_);
lean_ctor_set_uint8(v_reuseFailAlloc_1171_, sizeof(void*)*3, v_badModifier_1159_);
lean_ctor_set_uint8(v_reuseFailAlloc_1171_, sizeof(void*)*3 + 1, v_isModule_1161_);
lean_ctor_set_uint8(v_reuseFailAlloc_1171_, sizeof(void*)*3 + 2, v_isMeta_1162_);
lean_ctor_set_uint8(v_reuseFailAlloc_1171_, sizeof(void*)*3 + 3, v_isExported_1163_);
lean_ctor_set_uint8(v_reuseFailAlloc_1171_, sizeof(void*)*3 + 4, v_importAll_1164_);
v___x_1169_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
lean_object* v___x_1170_; 
v___x_1170_ = l_Lean_ParseImports_whitespace(v_input_1138_, v___x_1169_);
return v___x_1170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1___boxed(lean_object* v_k_1174_, lean_object* v_input_1175_, lean_object* v_s_1176_, lean_object* v_i_1177_, lean_object* v_j_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(v_k_1174_, v_input_1175_, v_s_1176_, v_i_1177_, v_j_1178_);
lean_dec_ref(v_input_1175_);
lean_dec_ref(v_k_1174_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(lean_object* v_k_1183_, lean_object* v_input_1184_, lean_object* v_s_1185_, lean_object* v_i_1186_, lean_object* v_j_1187_){
_start:
{
lean_object* v_s_1189_; uint8_t v___x_1206_; 
v___x_1206_ = lean_string_utf8_at_end(v_k_1183_, v_i_1186_);
if (v___x_1206_ == 0)
{
uint8_t v___x_1207_; 
v___x_1207_ = lean_string_utf8_at_end(v_input_1184_, v_j_1187_);
if (v___x_1207_ == 0)
{
uint32_t v_curr_u2081_1208_; uint32_t v_curr_u2082_1209_; uint8_t v___x_1210_; 
v_curr_u2081_1208_ = lean_string_utf8_get_fast(v_k_1183_, v_i_1186_);
v_curr_u2082_1209_ = lean_string_utf8_get_fast(v_input_1184_, v_j_1187_);
v___x_1210_ = lean_uint32_dec_eq(v_curr_u2081_1208_, v_curr_u2082_1209_);
if (v___x_1210_ == 0)
{
lean_dec(v_j_1187_);
lean_dec(v_i_1186_);
v_s_1189_ = v_s_1185_;
goto v___jp_1188_;
}
else
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = lean_string_utf8_next_fast(v_k_1183_, v_i_1186_);
lean_dec(v_i_1186_);
v___x_1212_ = lean_string_utf8_next_fast(v_input_1184_, v_j_1187_);
lean_dec(v_j_1187_);
v_i_1186_ = v___x_1211_;
v_j_1187_ = v___x_1212_;
goto _start;
}
}
else
{
lean_dec(v_j_1187_);
lean_dec(v_i_1186_);
v_s_1189_ = v_s_1185_;
goto v___jp_1188_;
}
}
else
{
lean_object* v_imports_1214_; uint8_t v_badModifier_1215_; lean_object* v_error_x3f_1216_; uint8_t v_isModule_1217_; uint8_t v_isMeta_1218_; uint8_t v_isExported_1219_; uint8_t v_importAll_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1228_; 
lean_dec(v_i_1186_);
v_imports_1214_ = lean_ctor_get(v_s_1185_, 0);
v_badModifier_1215_ = lean_ctor_get_uint8(v_s_1185_, sizeof(void*)*3);
v_error_x3f_1216_ = lean_ctor_get(v_s_1185_, 2);
v_isModule_1217_ = lean_ctor_get_uint8(v_s_1185_, sizeof(void*)*3 + 1);
v_isMeta_1218_ = lean_ctor_get_uint8(v_s_1185_, sizeof(void*)*3 + 2);
v_isExported_1219_ = lean_ctor_get_uint8(v_s_1185_, sizeof(void*)*3 + 3);
v_importAll_1220_ = lean_ctor_get_uint8(v_s_1185_, sizeof(void*)*3 + 4);
v_isSharedCheck_1228_ = !lean_is_exclusive(v_s_1185_);
if (v_isSharedCheck_1228_ == 0)
{
lean_object* v_unused_1229_; 
v_unused_1229_ = lean_ctor_get(v_s_1185_, 1);
lean_dec(v_unused_1229_);
v___x_1222_ = v_s_1185_;
v_isShared_1223_ = v_isSharedCheck_1228_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_error_x3f_1216_);
lean_inc(v_imports_1214_);
lean_dec(v_s_1185_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1228_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 1, v_j_1187_);
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v_imports_1214_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v_j_1187_);
lean_ctor_set(v_reuseFailAlloc_1227_, 2, v_error_x3f_1216_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*3, v_badModifier_1215_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*3 + 1, v_isModule_1217_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*3 + 2, v_isMeta_1218_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*3 + 3, v_isExported_1219_);
lean_ctor_set_uint8(v_reuseFailAlloc_1227_, sizeof(void*)*3 + 4, v_importAll_1220_);
v___x_1225_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
lean_object* v___x_1226_; 
v___x_1226_ = l_Lean_ParseImports_whitespace(v_input_1184_, v___x_1225_);
return v___x_1226_;
}
}
}
v___jp_1188_:
{
lean_object* v_imports_1190_; lean_object* v_pos_1191_; uint8_t v_badModifier_1192_; uint8_t v_isModule_1193_; uint8_t v_isMeta_1194_; uint8_t v_isExported_1195_; uint8_t v_importAll_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1204_; 
v_imports_1190_ = lean_ctor_get(v_s_1189_, 0);
v_pos_1191_ = lean_ctor_get(v_s_1189_, 1);
v_badModifier_1192_ = lean_ctor_get_uint8(v_s_1189_, sizeof(void*)*3);
v_isModule_1193_ = lean_ctor_get_uint8(v_s_1189_, sizeof(void*)*3 + 1);
v_isMeta_1194_ = lean_ctor_get_uint8(v_s_1189_, sizeof(void*)*3 + 2);
v_isExported_1195_ = lean_ctor_get_uint8(v_s_1189_, sizeof(void*)*3 + 3);
v_importAll_1196_ = lean_ctor_get_uint8(v_s_1189_, sizeof(void*)*3 + 4);
v_isSharedCheck_1204_ = !lean_is_exclusive(v_s_1189_);
if (v_isSharedCheck_1204_ == 0)
{
lean_object* v_unused_1205_; 
v_unused_1205_ = lean_ctor_get(v_s_1189_, 2);
lean_dec(v_unused_1205_);
v___x_1198_ = v_s_1189_;
v_isShared_1199_ = v_isSharedCheck_1204_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_pos_1191_);
lean_inc(v_imports_1190_);
lean_dec(v_s_1189_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1204_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1200_; lean_object* v___x_1202_; 
v___x_1200_ = ((lean_object*)(l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___closed__1));
if (v_isShared_1199_ == 0)
{
lean_ctor_set(v___x_1198_, 2, v___x_1200_);
v___x_1202_ = v___x_1198_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_imports_1190_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v_pos_1191_);
lean_ctor_set(v_reuseFailAlloc_1203_, 2, v___x_1200_);
lean_ctor_set_uint8(v_reuseFailAlloc_1203_, sizeof(void*)*3, v_badModifier_1192_);
lean_ctor_set_uint8(v_reuseFailAlloc_1203_, sizeof(void*)*3 + 1, v_isModule_1193_);
lean_ctor_set_uint8(v_reuseFailAlloc_1203_, sizeof(void*)*3 + 2, v_isMeta_1194_);
lean_ctor_set_uint8(v_reuseFailAlloc_1203_, sizeof(void*)*3 + 3, v_isExported_1195_);
lean_ctor_set_uint8(v_reuseFailAlloc_1203_, sizeof(void*)*3 + 4, v_importAll_1196_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5___boxed(lean_object* v_k_1230_, lean_object* v_input_1231_, lean_object* v_s_1232_, lean_object* v_i_1233_, lean_object* v_j_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(v_k_1230_, v_input_1231_, v_s_1232_, v_i_1233_, v_j_1234_);
lean_dec_ref(v_input_1231_);
lean_dec_ref(v_k_1230_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(lean_object* v_k_1236_, lean_object* v_input_1237_, lean_object* v_s_1238_, lean_object* v_i_1239_, lean_object* v_j_1240_){
_start:
{
uint8_t v___x_1241_; 
v___x_1241_ = lean_string_utf8_at_end(v_k_1236_, v_i_1239_);
if (v___x_1241_ == 0)
{
uint8_t v___x_1242_; 
v___x_1242_ = lean_string_utf8_at_end(v_input_1237_, v_j_1240_);
if (v___x_1242_ == 0)
{
uint32_t v_curr_u2081_1243_; uint32_t v_curr_u2082_1244_; uint8_t v___x_1245_; 
v_curr_u2081_1243_ = lean_string_utf8_get_fast(v_k_1236_, v_i_1239_);
v_curr_u2082_1244_ = lean_string_utf8_get_fast(v_input_1237_, v_j_1240_);
v___x_1245_ = lean_uint32_dec_eq(v_curr_u2081_1243_, v_curr_u2082_1244_);
if (v___x_1245_ == 0)
{
lean_dec(v_j_1240_);
lean_dec(v_i_1239_);
return v_s_1238_;
}
else
{
lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1246_ = lean_string_utf8_next_fast(v_k_1236_, v_i_1239_);
lean_dec(v_i_1239_);
v___x_1247_ = lean_string_utf8_next_fast(v_input_1237_, v_j_1240_);
lean_dec(v_j_1240_);
v_i_1239_ = v___x_1246_;
v_j_1240_ = v___x_1247_;
goto _start;
}
}
else
{
lean_dec(v_j_1240_);
lean_dec(v_i_1239_);
return v_s_1238_;
}
}
else
{
lean_object* v_imports_1249_; uint8_t v_badModifier_1250_; lean_object* v_error_x3f_1251_; uint8_t v_isModule_1252_; uint8_t v_isMeta_1253_; uint8_t v_isExported_1254_; uint8_t v_importAll_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1264_; 
lean_dec(v_i_1239_);
v_imports_1249_ = lean_ctor_get(v_s_1238_, 0);
v_badModifier_1250_ = lean_ctor_get_uint8(v_s_1238_, sizeof(void*)*3);
v_error_x3f_1251_ = lean_ctor_get(v_s_1238_, 2);
v_isModule_1252_ = lean_ctor_get_uint8(v_s_1238_, sizeof(void*)*3 + 1);
v_isMeta_1253_ = lean_ctor_get_uint8(v_s_1238_, sizeof(void*)*3 + 2);
v_isExported_1254_ = lean_ctor_get_uint8(v_s_1238_, sizeof(void*)*3 + 3);
v_importAll_1255_ = lean_ctor_get_uint8(v_s_1238_, sizeof(void*)*3 + 4);
v_isSharedCheck_1264_ = !lean_is_exclusive(v_s_1238_);
if (v_isSharedCheck_1264_ == 0)
{
lean_object* v_unused_1265_; 
v_unused_1265_ = lean_ctor_get(v_s_1238_, 1);
lean_dec(v_unused_1265_);
v___x_1257_ = v_s_1238_;
v_isShared_1258_ = v_isSharedCheck_1264_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_error_x3f_1251_);
lean_inc(v_imports_1249_);
lean_dec(v_s_1238_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1264_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1260_; 
if (v_isShared_1258_ == 0)
{
lean_ctor_set(v___x_1257_, 1, v_j_1240_);
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_imports_1249_);
lean_ctor_set(v_reuseFailAlloc_1263_, 1, v_j_1240_);
lean_ctor_set(v_reuseFailAlloc_1263_, 2, v_error_x3f_1251_);
lean_ctor_set_uint8(v_reuseFailAlloc_1263_, sizeof(void*)*3, v_badModifier_1250_);
lean_ctor_set_uint8(v_reuseFailAlloc_1263_, sizeof(void*)*3 + 1, v_isModule_1252_);
lean_ctor_set_uint8(v_reuseFailAlloc_1263_, sizeof(void*)*3 + 2, v_isMeta_1253_);
lean_ctor_set_uint8(v_reuseFailAlloc_1263_, sizeof(void*)*3 + 3, v_isExported_1254_);
lean_ctor_set_uint8(v_reuseFailAlloc_1263_, sizeof(void*)*3 + 4, v_importAll_1255_);
v___x_1260_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = l_Lean_ParseImports_whitespace(v_input_1237_, v___x_1260_);
v___x_1262_ = l_Lean_ParseImports_setImportAll___redArg(v___x_1261_);
return v___x_1262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2___boxed(lean_object* v_k_1266_, lean_object* v_input_1267_, lean_object* v_s_1268_, lean_object* v_i_1269_, lean_object* v_j_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(v_k_1266_, v_input_1267_, v_s_1268_, v_i_1269_, v_j_1270_);
lean_dec_ref(v_input_1267_);
lean_dec_ref(v_k_1266_);
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(lean_object* v_k_1272_, lean_object* v_input_1273_, lean_object* v_s_1274_, lean_object* v_i_1275_, lean_object* v_j_1276_){
_start:
{
uint8_t v___x_1277_; 
v___x_1277_ = lean_string_utf8_at_end(v_k_1272_, v_i_1275_);
if (v___x_1277_ == 0)
{
uint8_t v___x_1278_; 
v___x_1278_ = lean_string_utf8_at_end(v_input_1273_, v_j_1276_);
if (v___x_1278_ == 0)
{
uint32_t v_curr_u2081_1279_; uint32_t v_curr_u2082_1280_; uint8_t v___x_1281_; 
v_curr_u2081_1279_ = lean_string_utf8_get_fast(v_k_1272_, v_i_1275_);
v_curr_u2082_1280_ = lean_string_utf8_get_fast(v_input_1273_, v_j_1276_);
v___x_1281_ = lean_uint32_dec_eq(v_curr_u2081_1279_, v_curr_u2082_1280_);
if (v___x_1281_ == 0)
{
lean_dec(v_j_1276_);
lean_dec(v_i_1275_);
return v_s_1274_;
}
else
{
lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1282_ = lean_string_utf8_next_fast(v_k_1272_, v_i_1275_);
lean_dec(v_i_1275_);
v___x_1283_ = lean_string_utf8_next_fast(v_input_1273_, v_j_1276_);
lean_dec(v_j_1276_);
v_i_1275_ = v___x_1282_;
v_j_1276_ = v___x_1283_;
goto _start;
}
}
else
{
lean_dec(v_j_1276_);
lean_dec(v_i_1275_);
return v_s_1274_;
}
}
else
{
lean_object* v_imports_1285_; uint8_t v_badModifier_1286_; lean_object* v_error_x3f_1287_; uint8_t v_isModule_1288_; uint8_t v_isMeta_1289_; uint8_t v_isExported_1290_; uint8_t v_importAll_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1300_; 
lean_dec(v_i_1275_);
v_imports_1285_ = lean_ctor_get(v_s_1274_, 0);
v_badModifier_1286_ = lean_ctor_get_uint8(v_s_1274_, sizeof(void*)*3);
v_error_x3f_1287_ = lean_ctor_get(v_s_1274_, 2);
v_isModule_1288_ = lean_ctor_get_uint8(v_s_1274_, sizeof(void*)*3 + 1);
v_isMeta_1289_ = lean_ctor_get_uint8(v_s_1274_, sizeof(void*)*3 + 2);
v_isExported_1290_ = lean_ctor_get_uint8(v_s_1274_, sizeof(void*)*3 + 3);
v_importAll_1291_ = lean_ctor_get_uint8(v_s_1274_, sizeof(void*)*3 + 4);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_s_1274_);
if (v_isSharedCheck_1300_ == 0)
{
lean_object* v_unused_1301_; 
v_unused_1301_ = lean_ctor_get(v_s_1274_, 1);
lean_dec(v_unused_1301_);
v___x_1293_ = v_s_1274_;
v_isShared_1294_ = v_isSharedCheck_1300_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_error_x3f_1287_);
lean_inc(v_imports_1285_);
lean_dec(v_s_1274_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1300_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 1, v_j_1276_);
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_imports_1285_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v_j_1276_);
lean_ctor_set(v_reuseFailAlloc_1299_, 2, v_error_x3f_1287_);
lean_ctor_set_uint8(v_reuseFailAlloc_1299_, sizeof(void*)*3, v_badModifier_1286_);
lean_ctor_set_uint8(v_reuseFailAlloc_1299_, sizeof(void*)*3 + 1, v_isModule_1288_);
lean_ctor_set_uint8(v_reuseFailAlloc_1299_, sizeof(void*)*3 + 2, v_isMeta_1289_);
lean_ctor_set_uint8(v_reuseFailAlloc_1299_, sizeof(void*)*3 + 3, v_isExported_1290_);
lean_ctor_set_uint8(v_reuseFailAlloc_1299_, sizeof(void*)*3 + 4, v_importAll_1291_);
v___x_1296_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; 
v___x_1297_ = l_Lean_ParseImports_whitespace(v_input_1273_, v___x_1296_);
v___x_1298_ = l_Lean_ParseImports_setExported___redArg(v___x_1297_);
return v___x_1298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3___boxed(lean_object* v_k_1302_, lean_object* v_input_1303_, lean_object* v_s_1304_, lean_object* v_i_1305_, lean_object* v_j_1306_){
_start:
{
lean_object* v_res_1307_; 
v_res_1307_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(v_k_1302_, v_input_1303_, v_s_1304_, v_i_1305_, v_j_1306_);
lean_dec_ref(v_input_1303_);
lean_dec_ref(v_k_1302_);
return v_res_1307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(lean_object* v_k_1308_, lean_object* v_input_1309_, lean_object* v_s_1310_, lean_object* v_i_1311_, lean_object* v_j_1312_){
_start:
{
uint8_t v___x_1313_; 
v___x_1313_ = lean_string_utf8_at_end(v_k_1308_, v_i_1311_);
if (v___x_1313_ == 0)
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_string_utf8_at_end(v_input_1309_, v_j_1312_);
if (v___x_1314_ == 0)
{
uint32_t v_curr_u2081_1315_; uint32_t v_curr_u2082_1316_; uint8_t v___x_1317_; 
v_curr_u2081_1315_ = lean_string_utf8_get_fast(v_k_1308_, v_i_1311_);
v_curr_u2082_1316_ = lean_string_utf8_get_fast(v_input_1309_, v_j_1312_);
v___x_1317_ = lean_uint32_dec_eq(v_curr_u2081_1315_, v_curr_u2082_1316_);
if (v___x_1317_ == 0)
{
lean_dec(v_j_1312_);
lean_dec(v_i_1311_);
return v_s_1310_;
}
else
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = lean_string_utf8_next_fast(v_k_1308_, v_i_1311_);
lean_dec(v_i_1311_);
v___x_1319_ = lean_string_utf8_next_fast(v_input_1309_, v_j_1312_);
lean_dec(v_j_1312_);
v_i_1311_ = v___x_1318_;
v_j_1312_ = v___x_1319_;
goto _start;
}
}
else
{
lean_dec(v_j_1312_);
lean_dec(v_i_1311_);
return v_s_1310_;
}
}
else
{
lean_object* v_imports_1321_; uint8_t v_badModifier_1322_; lean_object* v_error_x3f_1323_; uint8_t v_isModule_1324_; uint8_t v_isMeta_1325_; uint8_t v_isExported_1326_; uint8_t v_importAll_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1336_; 
lean_dec(v_i_1311_);
v_imports_1321_ = lean_ctor_get(v_s_1310_, 0);
v_badModifier_1322_ = lean_ctor_get_uint8(v_s_1310_, sizeof(void*)*3);
v_error_x3f_1323_ = lean_ctor_get(v_s_1310_, 2);
v_isModule_1324_ = lean_ctor_get_uint8(v_s_1310_, sizeof(void*)*3 + 1);
v_isMeta_1325_ = lean_ctor_get_uint8(v_s_1310_, sizeof(void*)*3 + 2);
v_isExported_1326_ = lean_ctor_get_uint8(v_s_1310_, sizeof(void*)*3 + 3);
v_importAll_1327_ = lean_ctor_get_uint8(v_s_1310_, sizeof(void*)*3 + 4);
v_isSharedCheck_1336_ = !lean_is_exclusive(v_s_1310_);
if (v_isSharedCheck_1336_ == 0)
{
lean_object* v_unused_1337_; 
v_unused_1337_ = lean_ctor_get(v_s_1310_, 1);
lean_dec(v_unused_1337_);
v___x_1329_ = v_s_1310_;
v_isShared_1330_ = v_isSharedCheck_1336_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_error_x3f_1323_);
lean_inc(v_imports_1321_);
lean_dec(v_s_1310_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1336_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1332_; 
if (v_isShared_1330_ == 0)
{
lean_ctor_set(v___x_1329_, 1, v_j_1312_);
v___x_1332_ = v___x_1329_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_imports_1321_);
lean_ctor_set(v_reuseFailAlloc_1335_, 1, v_j_1312_);
lean_ctor_set(v_reuseFailAlloc_1335_, 2, v_error_x3f_1323_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, sizeof(void*)*3, v_badModifier_1322_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, sizeof(void*)*3 + 1, v_isModule_1324_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, sizeof(void*)*3 + 2, v_isMeta_1325_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, sizeof(void*)*3 + 3, v_isExported_1326_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, sizeof(void*)*3 + 4, v_importAll_1327_);
v___x_1332_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1333_ = l_Lean_ParseImports_whitespace(v_input_1309_, v___x_1332_);
v___x_1334_ = l_Lean_ParseImports_setMeta___redArg(v___x_1333_);
return v___x_1334_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4___boxed(lean_object* v_k_1338_, lean_object* v_input_1339_, lean_object* v_s_1340_, lean_object* v_i_1341_, lean_object* v_j_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(v_k_1338_, v_input_1339_, v_s_1340_, v_i_1341_, v_j_1342_);
lean_dec_ref(v_input_1339_);
lean_dec_ref(v_k_1338_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6(lean_object* v_input_1348_, lean_object* v_s_1349_){
_start:
{
lean_object* v_pos_1350_; lean_object* v___y_1352_; lean_object* v_imports_1353_; lean_object* v_pos_1354_; uint8_t v_isModule_1355_; uint8_t v_isMeta_1356_; uint8_t v_isExported_1357_; uint8_t v_importAll_1358_; lean_object* v_imports_1364_; uint8_t v_badModifier_1365_; lean_object* v_error_x3f_1366_; uint8_t v_isModule_1367_; uint8_t v_isMeta_1368_; uint8_t v_isExported_1369_; uint8_t v_importAll_1370_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v_error_x3f_1375_; 
v_pos_1350_ = lean_ctor_get(v_s_1349_, 1);
lean_inc_n(v_pos_1350_, 2);
v___x_1372_ = ((lean_object*)(l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__0));
v___x_1373_ = lean_unsigned_to_nat(0u);
v___x_1374_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__3(v___x_1372_, v_input_1348_, v_s_1349_, v___x_1373_, v_pos_1350_);
v_error_x3f_1375_ = lean_ctor_get(v___x_1374_, 2);
if (lean_obj_tag(v_error_x3f_1375_) == 1)
{
lean_object* v_imports_1376_; uint8_t v_badModifier_1377_; uint8_t v_isModule_1378_; uint8_t v_isMeta_1379_; uint8_t v_isExported_1380_; uint8_t v_importAll_1381_; 
lean_inc_ref(v_error_x3f_1375_);
lean_dec_ref(v_input_1348_);
v_imports_1376_ = lean_ctor_get(v___x_1374_, 0);
lean_inc_ref(v_imports_1376_);
v_badModifier_1377_ = lean_ctor_get_uint8(v___x_1374_, sizeof(void*)*3);
v_isModule_1378_ = lean_ctor_get_uint8(v___x_1374_, sizeof(void*)*3 + 1);
v_isMeta_1379_ = lean_ctor_get_uint8(v___x_1374_, sizeof(void*)*3 + 2);
v_isExported_1380_ = lean_ctor_get_uint8(v___x_1374_, sizeof(void*)*3 + 3);
v_importAll_1381_ = lean_ctor_get_uint8(v___x_1374_, sizeof(void*)*3 + 4);
lean_dec_ref(v___x_1374_);
v_imports_1364_ = v_imports_1376_;
v_badModifier_1365_ = v_badModifier_1377_;
v_error_x3f_1366_ = v_error_x3f_1375_;
v_isModule_1367_ = v_isModule_1378_;
v_isMeta_1368_ = v_isMeta_1379_;
v_isExported_1369_ = v_isExported_1380_;
v_importAll_1370_ = v_importAll_1381_;
goto v___jp_1363_;
}
else
{
lean_object* v_pos_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v_error_x3f_1385_; 
v_pos_1382_ = lean_ctor_get(v___x_1374_, 1);
lean_inc(v_pos_1382_);
v___x_1383_ = ((lean_object*)(l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__1));
v___x_1384_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__4(v___x_1383_, v_input_1348_, v___x_1374_, v___x_1373_, v_pos_1382_);
v_error_x3f_1385_ = lean_ctor_get(v___x_1384_, 2);
if (lean_obj_tag(v_error_x3f_1385_) == 1)
{
lean_object* v_imports_1386_; uint8_t v_badModifier_1387_; uint8_t v_isModule_1388_; uint8_t v_isMeta_1389_; uint8_t v_isExported_1390_; uint8_t v_importAll_1391_; 
lean_inc_ref(v_error_x3f_1385_);
lean_dec_ref(v_input_1348_);
v_imports_1386_ = lean_ctor_get(v___x_1384_, 0);
lean_inc_ref(v_imports_1386_);
v_badModifier_1387_ = lean_ctor_get_uint8(v___x_1384_, sizeof(void*)*3);
v_isModule_1388_ = lean_ctor_get_uint8(v___x_1384_, sizeof(void*)*3 + 1);
v_isMeta_1389_ = lean_ctor_get_uint8(v___x_1384_, sizeof(void*)*3 + 2);
v_isExported_1390_ = lean_ctor_get_uint8(v___x_1384_, sizeof(void*)*3 + 3);
v_importAll_1391_ = lean_ctor_get_uint8(v___x_1384_, sizeof(void*)*3 + 4);
lean_dec_ref(v___x_1384_);
v_imports_1364_ = v_imports_1386_;
v_badModifier_1365_ = v_badModifier_1387_;
v_error_x3f_1366_ = v_error_x3f_1385_;
v_isModule_1367_ = v_isModule_1388_;
v_isMeta_1368_ = v_isMeta_1389_;
v_isExported_1369_ = v_isExported_1390_;
v_importAll_1370_ = v_importAll_1391_;
goto v___jp_1363_;
}
else
{
lean_object* v_pos_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v_error_x3f_1395_; 
v_pos_1392_ = lean_ctor_get(v___x_1384_, 1);
lean_inc(v_pos_1392_);
v___x_1393_ = ((lean_object*)(l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__2));
v___x_1394_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__5(v___x_1393_, v_input_1348_, v___x_1384_, v___x_1373_, v_pos_1392_);
v_error_x3f_1395_ = lean_ctor_get(v___x_1394_, 2);
if (lean_obj_tag(v_error_x3f_1395_) == 1)
{
lean_object* v_imports_1396_; uint8_t v_badModifier_1397_; uint8_t v_isModule_1398_; uint8_t v_isMeta_1399_; uint8_t v_isExported_1400_; uint8_t v_importAll_1401_; 
lean_inc_ref(v_error_x3f_1395_);
lean_dec_ref(v_input_1348_);
v_imports_1396_ = lean_ctor_get(v___x_1394_, 0);
lean_inc_ref(v_imports_1396_);
v_badModifier_1397_ = lean_ctor_get_uint8(v___x_1394_, sizeof(void*)*3);
v_isModule_1398_ = lean_ctor_get_uint8(v___x_1394_, sizeof(void*)*3 + 1);
v_isMeta_1399_ = lean_ctor_get_uint8(v___x_1394_, sizeof(void*)*3 + 2);
v_isExported_1400_ = lean_ctor_get_uint8(v___x_1394_, sizeof(void*)*3 + 3);
v_importAll_1401_ = lean_ctor_get_uint8(v___x_1394_, sizeof(void*)*3 + 4);
lean_dec_ref(v___x_1394_);
v_imports_1364_ = v_imports_1396_;
v_badModifier_1365_ = v_badModifier_1397_;
v_error_x3f_1366_ = v_error_x3f_1395_;
v_isModule_1367_ = v_isModule_1398_;
v_isMeta_1368_ = v_isMeta_1399_;
v_isExported_1369_ = v_isExported_1400_;
v_importAll_1370_ = v_importAll_1401_;
goto v___jp_1363_;
}
else
{
if (lean_obj_tag(v_error_x3f_1395_) == 1)
{
lean_object* v_imports_1402_; lean_object* v_pos_1403_; uint8_t v_isModule_1404_; uint8_t v_isMeta_1405_; uint8_t v_isExported_1406_; uint8_t v_importAll_1407_; 
lean_dec_ref(v_input_1348_);
v_imports_1402_ = lean_ctor_get(v___x_1394_, 0);
lean_inc_ref(v_imports_1402_);
v_pos_1403_ = lean_ctor_get(v___x_1394_, 1);
lean_inc(v_pos_1403_);
v_isModule_1404_ = lean_ctor_get_uint8(v___x_1394_, sizeof(void*)*3 + 1);
v_isMeta_1405_ = lean_ctor_get_uint8(v___x_1394_, sizeof(void*)*3 + 2);
v_isExported_1406_ = lean_ctor_get_uint8(v___x_1394_, sizeof(void*)*3 + 3);
v_importAll_1407_ = lean_ctor_get_uint8(v___x_1394_, sizeof(void*)*3 + 4);
v___y_1352_ = v___x_1394_;
v_imports_1353_ = v_imports_1402_;
v_pos_1354_ = v_pos_1403_;
v_isModule_1355_ = v_isModule_1404_;
v_isMeta_1356_ = v_isMeta_1405_;
v_isExported_1357_ = v_isExported_1406_;
v_importAll_1358_ = v_importAll_1407_;
goto v___jp_1351_;
}
else
{
lean_object* v_pos_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v_error_x3f_1411_; 
v_pos_1408_ = lean_ctor_get(v___x_1394_, 1);
lean_inc(v_pos_1408_);
v___x_1409_ = ((lean_object*)(l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6___closed__3));
v___x_1410_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__2(v___x_1409_, v_input_1348_, v___x_1394_, v___x_1373_, v_pos_1408_);
v_error_x3f_1411_ = lean_ctor_get(v___x_1410_, 2);
if (lean_obj_tag(v_error_x3f_1411_) == 1)
{
lean_object* v_imports_1412_; lean_object* v_pos_1413_; uint8_t v_isModule_1414_; uint8_t v_isMeta_1415_; uint8_t v_isExported_1416_; uint8_t v_importAll_1417_; 
lean_dec_ref(v_input_1348_);
v_imports_1412_ = lean_ctor_get(v___x_1410_, 0);
lean_inc_ref(v_imports_1412_);
v_pos_1413_ = lean_ctor_get(v___x_1410_, 1);
lean_inc(v_pos_1413_);
v_isModule_1414_ = lean_ctor_get_uint8(v___x_1410_, sizeof(void*)*3 + 1);
v_isMeta_1415_ = lean_ctor_get_uint8(v___x_1410_, sizeof(void*)*3 + 2);
v_isExported_1416_ = lean_ctor_get_uint8(v___x_1410_, sizeof(void*)*3 + 3);
v_importAll_1417_ = lean_ctor_get_uint8(v___x_1410_, sizeof(void*)*3 + 4);
v___y_1352_ = v___x_1410_;
v_imports_1353_ = v_imports_1412_;
v_pos_1354_ = v_pos_1413_;
v_isModule_1355_ = v_isModule_1414_;
v_isMeta_1356_ = v_isMeta_1415_;
v_isExported_1357_ = v_isExported_1416_;
v_importAll_1358_ = v_importAll_1417_;
goto v___jp_1351_;
}
else
{
lean_object* v___x_1418_; lean_object* v_error_x3f_1419_; 
lean_inc_ref(v_input_1348_);
v___x_1418_ = l_Lean_ParseImports_moduleIdent(v_input_1348_, v___x_1410_);
v_error_x3f_1419_ = lean_ctor_get(v___x_1418_, 2);
if (lean_obj_tag(v_error_x3f_1419_) == 1)
{
lean_object* v_imports_1420_; lean_object* v_pos_1421_; uint8_t v_isModule_1422_; uint8_t v_isMeta_1423_; uint8_t v_isExported_1424_; uint8_t v_importAll_1425_; 
lean_dec_ref(v_input_1348_);
v_imports_1420_ = lean_ctor_get(v___x_1418_, 0);
lean_inc_ref(v_imports_1420_);
v_pos_1421_ = lean_ctor_get(v___x_1418_, 1);
lean_inc(v_pos_1421_);
v_isModule_1422_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 1);
v_isMeta_1423_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 2);
v_isExported_1424_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 3);
v_importAll_1425_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 4);
v___y_1352_ = v___x_1418_;
v_imports_1353_ = v_imports_1420_;
v_pos_1354_ = v_pos_1421_;
v_isModule_1355_ = v_isModule_1422_;
v_isMeta_1356_ = v_isMeta_1423_;
v_isExported_1357_ = v_isExported_1424_;
v_importAll_1358_ = v_importAll_1425_;
goto v___jp_1351_;
}
else
{
uint8_t v_badModifier_1426_; 
v_badModifier_1426_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3);
if (v_badModifier_1426_ == 0)
{
lean_dec(v_pos_1350_);
v_s_1349_ = v___x_1418_;
goto _start;
}
else
{
lean_object* v_imports_1428_; uint8_t v_isModule_1429_; uint8_t v_isMeta_1430_; uint8_t v_isExported_1431_; uint8_t v_importAll_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1441_; 
lean_dec_ref(v_input_1348_);
v_imports_1428_ = lean_ctor_get(v___x_1418_, 0);
v_isModule_1429_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 1);
v_isMeta_1430_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 2);
v_isExported_1431_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 3);
v_importAll_1432_ = lean_ctor_get_uint8(v___x_1418_, sizeof(void*)*3 + 4);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1441_ == 0)
{
lean_object* v_unused_1442_; lean_object* v_unused_1443_; 
v_unused_1442_ = lean_ctor_get(v___x_1418_, 2);
lean_dec(v_unused_1442_);
v_unused_1443_ = lean_ctor_get(v___x_1418_, 1);
lean_dec(v_unused_1443_);
v___x_1434_ = v___x_1418_;
v_isShared_1435_ = v_isSharedCheck_1441_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_imports_1428_);
lean_dec(v___x_1418_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1441_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
uint8_t v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1436_ = 0;
v___x_1437_ = ((lean_object*)(l_Lean_ParseImports_manyImports___closed__1));
if (v_isShared_1435_ == 0)
{
lean_ctor_set(v___x_1434_, 2, v___x_1437_);
lean_ctor_set(v___x_1434_, 1, v_pos_1350_);
v___x_1439_ = v___x_1434_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_imports_1428_);
lean_ctor_set(v_reuseFailAlloc_1440_, 1, v_pos_1350_);
lean_ctor_set(v_reuseFailAlloc_1440_, 2, v___x_1437_);
lean_ctor_set_uint8(v_reuseFailAlloc_1440_, sizeof(void*)*3 + 1, v_isModule_1429_);
lean_ctor_set_uint8(v_reuseFailAlloc_1440_, sizeof(void*)*3 + 2, v_isMeta_1430_);
lean_ctor_set_uint8(v_reuseFailAlloc_1440_, sizeof(void*)*3 + 3, v_isExported_1431_);
lean_ctor_set_uint8(v_reuseFailAlloc_1440_, sizeof(void*)*3 + 4, v_importAll_1432_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
lean_ctor_set_uint8(v___x_1439_, sizeof(void*)*3, v___x_1436_);
return v___x_1439_;
}
}
}
}
}
}
}
}
}
v___jp_1351_:
{
uint8_t v_decide_1359_; 
v_decide_1359_ = lean_nat_dec_eq(v_pos_1354_, v_pos_1350_);
lean_dec(v_pos_1350_);
if (v_decide_1359_ == 0)
{
lean_dec(v_pos_1354_);
lean_dec_ref(v_imports_1353_);
return v___y_1352_;
}
else
{
uint8_t v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
lean_dec_ref(v___y_1352_);
v___x_1360_ = 0;
v___x_1361_ = lean_box(0);
v___x_1362_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1362_, 0, v_imports_1353_);
lean_ctor_set(v___x_1362_, 1, v_pos_1354_);
lean_ctor_set(v___x_1362_, 2, v___x_1361_);
lean_ctor_set_uint8(v___x_1362_, sizeof(void*)*3, v___x_1360_);
lean_ctor_set_uint8(v___x_1362_, sizeof(void*)*3 + 1, v_isModule_1355_);
lean_ctor_set_uint8(v___x_1362_, sizeof(void*)*3 + 2, v_isMeta_1356_);
lean_ctor_set_uint8(v___x_1362_, sizeof(void*)*3 + 3, v_isExported_1357_);
lean_ctor_set_uint8(v___x_1362_, sizeof(void*)*3 + 4, v_importAll_1358_);
return v___x_1362_;
}
}
v___jp_1363_:
{
lean_object* v___x_1371_; 
lean_inc_n(v_pos_1350_, 2);
lean_inc_ref(v_imports_1364_);
v___x_1371_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1371_, 0, v_imports_1364_);
lean_ctor_set(v___x_1371_, 1, v_pos_1350_);
lean_ctor_set(v___x_1371_, 2, v_error_x3f_1366_);
lean_ctor_set_uint8(v___x_1371_, sizeof(void*)*3, v_badModifier_1365_);
lean_ctor_set_uint8(v___x_1371_, sizeof(void*)*3 + 1, v_isModule_1367_);
lean_ctor_set_uint8(v___x_1371_, sizeof(void*)*3 + 2, v_isMeta_1368_);
lean_ctor_set_uint8(v___x_1371_, sizeof(void*)*3 + 3, v_isExported_1369_);
lean_ctor_set_uint8(v___x_1371_, sizeof(void*)*3 + 4, v_importAll_1370_);
v___y_1352_ = v___x_1371_;
v_imports_1353_ = v_imports_1364_;
v_pos_1354_ = v_pos_1350_;
v_isModule_1355_ = v_isModule_1367_;
v_isMeta_1356_ = v_isMeta_1368_;
v_isExported_1357_ = v_isExported_1369_;
v_importAll_1358_ = v_importAll_1370_;
goto v___jp_1351_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(lean_object* v_k_1444_, lean_object* v_input_1445_, lean_object* v_s_1446_, lean_object* v_i_1447_, lean_object* v_j_1448_){
_start:
{
uint8_t v___x_1449_; 
v___x_1449_ = lean_string_utf8_at_end(v_k_1444_, v_i_1447_);
if (v___x_1449_ == 0)
{
uint8_t v___x_1450_; 
v___x_1450_ = lean_string_utf8_at_end(v_input_1445_, v_j_1448_);
if (v___x_1450_ == 0)
{
uint32_t v_curr_u2081_1451_; uint32_t v_curr_u2082_1452_; uint8_t v___x_1453_; 
v_curr_u2081_1451_ = lean_string_utf8_get_fast(v_k_1444_, v_i_1447_);
v_curr_u2082_1452_ = lean_string_utf8_get_fast(v_input_1445_, v_j_1448_);
v___x_1453_ = lean_uint32_dec_eq(v_curr_u2081_1451_, v_curr_u2082_1452_);
if (v___x_1453_ == 0)
{
lean_object* v___x_1454_; 
lean_dec(v_j_1448_);
lean_dec(v_i_1447_);
v___x_1454_ = l_Lean_ParseImports_setIsModule___redArg(v___x_1449_, v_s_1446_);
return v___x_1454_;
}
else
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1455_ = lean_string_utf8_next_fast(v_k_1444_, v_i_1447_);
lean_dec(v_i_1447_);
v___x_1456_ = lean_string_utf8_next_fast(v_input_1445_, v_j_1448_);
lean_dec(v_j_1448_);
v_i_1447_ = v___x_1455_;
v_j_1448_ = v___x_1456_;
goto _start;
}
}
else
{
lean_object* v___x_1458_; 
lean_dec(v_j_1448_);
lean_dec(v_i_1447_);
v___x_1458_ = l_Lean_ParseImports_setIsModule___redArg(v___x_1449_, v_s_1446_);
return v___x_1458_;
}
}
else
{
lean_object* v_imports_1459_; uint8_t v_badModifier_1460_; lean_object* v_error_x3f_1461_; uint8_t v_isModule_1462_; uint8_t v_isMeta_1463_; uint8_t v_isExported_1464_; uint8_t v_importAll_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1474_; 
lean_dec(v_i_1447_);
v_imports_1459_ = lean_ctor_get(v_s_1446_, 0);
v_badModifier_1460_ = lean_ctor_get_uint8(v_s_1446_, sizeof(void*)*3);
v_error_x3f_1461_ = lean_ctor_get(v_s_1446_, 2);
v_isModule_1462_ = lean_ctor_get_uint8(v_s_1446_, sizeof(void*)*3 + 1);
v_isMeta_1463_ = lean_ctor_get_uint8(v_s_1446_, sizeof(void*)*3 + 2);
v_isExported_1464_ = lean_ctor_get_uint8(v_s_1446_, sizeof(void*)*3 + 3);
v_importAll_1465_ = lean_ctor_get_uint8(v_s_1446_, sizeof(void*)*3 + 4);
v_isSharedCheck_1474_ = !lean_is_exclusive(v_s_1446_);
if (v_isSharedCheck_1474_ == 0)
{
lean_object* v_unused_1475_; 
v_unused_1475_ = lean_ctor_get(v_s_1446_, 1);
lean_dec(v_unused_1475_);
v___x_1467_ = v_s_1446_;
v_isShared_1468_ = v_isSharedCheck_1474_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_error_x3f_1461_);
lean_inc(v_imports_1459_);
lean_dec(v_s_1446_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1474_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1470_; 
if (v_isShared_1468_ == 0)
{
lean_ctor_set(v___x_1467_, 1, v_j_1448_);
v___x_1470_ = v___x_1467_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_imports_1459_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v_j_1448_);
lean_ctor_set(v_reuseFailAlloc_1473_, 2, v_error_x3f_1461_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*3, v_badModifier_1460_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*3 + 1, v_isModule_1462_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*3 + 2, v_isMeta_1463_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*3 + 3, v_isExported_1464_);
lean_ctor_set_uint8(v_reuseFailAlloc_1473_, sizeof(void*)*3 + 4, v_importAll_1465_);
v___x_1470_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; 
v___x_1471_ = l_Lean_ParseImports_whitespace(v_input_1445_, v___x_1470_);
v___x_1472_ = l_Lean_ParseImports_setIsModule___redArg(v___x_1449_, v___x_1471_);
return v___x_1472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0___boxed(lean_object* v_k_1476_, lean_object* v_input_1477_, lean_object* v_s_1478_, lean_object* v_i_1479_, lean_object* v_j_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(v_k_1476_, v_input_1477_, v_s_1478_, v_i_1479_, v_j_1480_);
lean_dec_ref(v_input_1477_);
lean_dec_ref(v_k_1476_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lean_ParseImports_main(lean_object* v_a_1484_, lean_object* v_a_1485_){
_start:
{
lean_object* v_pos_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v_s_1489_; lean_object* v_error_x3f_1490_; 
v_pos_1486_ = lean_ctor_get(v_a_1485_, 1);
lean_inc(v_pos_1486_);
v___x_1487_ = ((lean_object*)(l_Lean_ParseImports_main___closed__0));
v___x_1488_ = lean_unsigned_to_nat(0u);
v_s_1489_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__0(v___x_1487_, v_a_1484_, v_a_1485_, v___x_1488_, v_pos_1486_);
v_error_x3f_1490_ = lean_ctor_get(v_s_1489_, 2);
if (lean_obj_tag(v_error_x3f_1490_) == 1)
{
lean_dec_ref(v_a_1484_);
return v_s_1489_;
}
else
{
lean_object* v_pos_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v_error_x3f_1494_; 
v_pos_1491_ = lean_ctor_get(v_s_1489_, 1);
lean_inc(v_pos_1491_);
v___x_1492_ = ((lean_object*)(l_Lean_ParseImports_main___closed__1));
v___x_1493_ = l___private_Lean_Elab_ParseImportsFast_0__Lean_ParseImports_keywordCore_go___at___00Lean_ParseImports_main_spec__1(v___x_1492_, v_a_1484_, v_s_1489_, v___x_1488_, v_pos_1491_);
v_error_x3f_1494_ = lean_ctor_get(v___x_1493_, 2);
if (lean_obj_tag(v_error_x3f_1494_) == 1)
{
lean_dec_ref(v_a_1484_);
return v___x_1493_;
}
else
{
lean_object* v___x_1495_; 
v___x_1495_ = l_Lean_ParseImports_manyImports___at___00Lean_ParseImports_main_spec__6(v_a_1484_, v___x_1493_);
return v___x_1495_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseImports_x27(lean_object* v_input_1498_, lean_object* v_fileName_1499_){
_start:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v_s_1503_; lean_object* v_error_x3f_1504_; 
v___x_1501_ = ((lean_object*)(l_Lean_ParseImports_instInhabitedState_default___closed__1));
v___x_1502_ = l_Lean_ParseImports_whitespace(v_input_1498_, v___x_1501_);
lean_inc_ref(v_input_1498_);
v_s_1503_ = l_Lean_ParseImports_main(v_input_1498_, v___x_1502_);
v_error_x3f_1504_ = lean_ctor_get(v_s_1503_, 2);
lean_inc(v_error_x3f_1504_);
if (lean_obj_tag(v_error_x3f_1504_) == 1)
{
lean_object* v_pos_1505_; lean_object* v_val_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1528_; 
v_pos_1505_ = lean_ctor_get(v_s_1503_, 1);
lean_inc(v_pos_1505_);
lean_dec_ref(v_s_1503_);
v_val_1506_ = lean_ctor_get(v_error_x3f_1504_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v_error_x3f_1504_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1508_ = v_error_x3f_1504_;
v_isShared_1509_ = v_isSharedCheck_1528_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_val_1506_);
lean_dec(v_error_x3f_1504_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1528_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v_fileMap_1510_; lean_object* v_pos_1511_; lean_object* v_line_1512_; lean_object* v_column_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1525_; 
v_fileMap_1510_ = l_Lean_String_toFileMap(v_input_1498_);
v_pos_1511_ = l_Lean_FileMap_toPosition(v_fileMap_1510_, v_pos_1505_);
lean_dec(v_pos_1505_);
v_line_1512_ = lean_ctor_get(v_pos_1511_, 0);
lean_inc(v_line_1512_);
v_column_1513_ = lean_ctor_get(v_pos_1511_, 1);
lean_inc(v_column_1513_);
lean_dec_ref(v_pos_1511_);
v___x_1514_ = ((lean_object*)(l_Lean_parseImports_x27___closed__0));
v___x_1515_ = lean_string_append(v_fileName_1499_, v___x_1514_);
v___x_1516_ = l_Nat_reprFast(v_line_1512_);
v___x_1517_ = lean_string_append(v___x_1515_, v___x_1516_);
lean_dec_ref(v___x_1516_);
v___x_1518_ = lean_string_append(v___x_1517_, v___x_1514_);
v___x_1519_ = l_Nat_reprFast(v_column_1513_);
v___x_1520_ = lean_string_append(v___x_1518_, v___x_1519_);
lean_dec_ref(v___x_1519_);
v___x_1521_ = ((lean_object*)(l_Lean_parseImports_x27___closed__1));
v___x_1522_ = lean_string_append(v___x_1520_, v___x_1521_);
v___x_1523_ = lean_string_append(v___x_1522_, v_val_1506_);
lean_dec(v_val_1506_);
if (v_isShared_1509_ == 0)
{
lean_ctor_set_tag(v___x_1508_, 18);
lean_ctor_set(v___x_1508_, 0, v___x_1523_);
v___x_1525_ = v___x_1508_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
lean_object* v___x_1526_; 
v___x_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1525_);
return v___x_1526_;
}
}
}
else
{
lean_object* v_imports_1529_; uint8_t v_isModule_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
lean_dec(v_error_x3f_1504_);
lean_dec_ref(v_fileName_1499_);
lean_dec_ref(v_input_1498_);
v_imports_1529_ = lean_ctor_get(v_s_1503_, 0);
lean_inc_ref(v_imports_1529_);
v_isModule_1530_ = lean_ctor_get_uint8(v_s_1503_, sizeof(void*)*3 + 1);
lean_dec_ref(v_s_1503_);
v___x_1531_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1531_, 0, v_imports_1529_);
lean_ctor_set_uint8(v___x_1531_, sizeof(void*)*1, v_isModule_1530_);
v___x_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1531_);
return v___x_1532_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseImports_x27___boxed(lean_object* v_input_1533_, lean_object* v_fileName_1534_, lean_object* v_a_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_Lean_parseImports_x27(v_input_1533_, v_fileName_1534_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lean_instToJsonPrintImportResult_toJson_spec__0(lean_object* v_k_1537_, lean_object* v_x_1538_){
_start:
{
if (lean_obj_tag(v_x_1538_) == 0)
{
lean_object* v___x_1539_; 
lean_dec_ref(v_k_1537_);
v___x_1539_ = lean_box(0);
return v___x_1539_;
}
else
{
lean_object* v_val_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v_val_1540_ = lean_ctor_get(v_x_1538_, 0);
lean_inc(v_val_1540_);
lean_dec_ref_known(v_x_1538_, 1);
v___x_1541_ = l_Lean_instToJsonModuleHeader_toJson(v_val_1540_);
v___x_1542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1542_, 0, v_k_1537_);
lean_ctor_set(v___x_1542_, 1, v___x_1541_);
v___x_1543_ = lean_box(0);
v___x_1544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1542_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
return v___x_1544_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(lean_object* v_a_1545_, lean_object* v_a_1546_){
_start:
{
if (lean_obj_tag(v_a_1545_) == 0)
{
lean_object* v___x_1547_; 
v___x_1547_ = lean_array_to_list(v_a_1546_);
return v___x_1547_;
}
else
{
lean_object* v_head_1548_; lean_object* v_tail_1549_; lean_object* v___x_1550_; 
v_head_1548_ = lean_ctor_get(v_a_1545_, 0);
lean_inc(v_head_1548_);
v_tail_1549_ = lean_ctor_get(v_a_1545_, 1);
lean_inc(v_tail_1549_);
lean_dec_ref_known(v_a_1545_, 2);
v___x_1550_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1546_, v_head_1548_);
v_a_1545_ = v_tail_1549_;
v_a_1546_ = v___x_1550_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(size_t v_sz_1552_, size_t v_i_1553_, lean_object* v_bs_1554_){
_start:
{
uint8_t v___x_1555_; 
v___x_1555_ = lean_usize_dec_lt(v_i_1553_, v_sz_1552_);
if (v___x_1555_ == 0)
{
return v_bs_1554_;
}
else
{
lean_object* v_v_1556_; lean_object* v___x_1557_; lean_object* v_bs_x27_1558_; lean_object* v___x_1559_; size_t v___x_1560_; size_t v___x_1561_; lean_object* v___x_1562_; 
v_v_1556_ = lean_array_uget(v_bs_1554_, v_i_1553_);
v___x_1557_ = lean_unsigned_to_nat(0u);
v_bs_x27_1558_ = lean_array_uset(v_bs_1554_, v_i_1553_, v___x_1557_);
v___x_1559_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1559_, 0, v_v_1556_);
v___x_1560_ = ((size_t)1ULL);
v___x_1561_ = lean_usize_add(v_i_1553_, v___x_1560_);
v___x_1562_ = lean_array_uset(v_bs_x27_1558_, v_i_1553_, v___x_1559_);
v_i_1553_ = v___x_1561_;
v_bs_1554_ = v___x_1562_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1___boxed(lean_object* v_sz_1564_, lean_object* v_i_1565_, lean_object* v_bs_1566_){
_start:
{
size_t v_sz_boxed_1567_; size_t v_i_boxed_1568_; lean_object* v_res_1569_; 
v_sz_boxed_1567_ = lean_unbox_usize(v_sz_1564_);
lean_dec(v_sz_1564_);
v_i_boxed_1568_ = lean_unbox_usize(v_i_1565_);
lean_dec(v_i_1565_);
v_res_1569_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(v_sz_boxed_1567_, v_i_boxed_1568_, v_bs_1566_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1(lean_object* v_a_1570_){
_start:
{
size_t v_sz_1571_; size_t v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v_sz_1571_ = lean_array_size(v_a_1570_);
v___x_1572_ = ((size_t)0ULL);
v___x_1573_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1_spec__1(v_sz_1571_, v___x_1572_, v_a_1570_);
v___x_1574_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportResult_toJson(lean_object* v_x_1579_){
_start:
{
lean_object* v_result_x3f_1580_; lean_object* v_errors_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1599_; 
v_result_x3f_1580_ = lean_ctor_get(v_x_1579_, 0);
v_errors_1581_ = lean_ctor_get(v_x_1579_, 1);
v_isSharedCheck_1599_ = !lean_is_exclusive(v_x_1579_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1583_ = v_x_1579_;
v_isShared_1584_ = v_isSharedCheck_1599_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_errors_1581_);
lean_inc(v_result_x3f_1580_);
lean_dec(v_x_1579_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1599_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1590_; 
v___x_1585_ = ((lean_object*)(l_Lean_instToJsonPrintImportResult_toJson___closed__0));
v___x_1586_ = l_Lean_Json_opt___at___00Lean_instToJsonPrintImportResult_toJson_spec__0(v___x_1585_, v_result_x3f_1580_);
v___x_1587_ = ((lean_object*)(l_Lean_instToJsonPrintImportResult_toJson___closed__1));
v___x_1588_ = l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportResult_toJson_spec__1(v_errors_1581_);
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 1, v___x_1588_);
lean_ctor_set(v___x_1583_, 0, v___x_1587_);
v___x_1590_ = v___x_1583_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v___x_1587_);
lean_ctor_set(v_reuseFailAlloc_1598_, 1, v___x_1588_);
v___x_1590_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1591_ = lean_box(0);
v___x_1592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1590_);
lean_ctor_set(v___x_1592_, 1, v___x_1591_);
v___x_1593_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1592_);
lean_ctor_set(v___x_1593_, 1, v___x_1591_);
v___x_1594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1586_);
lean_ctor_set(v___x_1594_, 1, v___x_1593_);
v___x_1595_ = ((lean_object*)(l_Lean_instToJsonPrintImportResult_toJson___closed__2));
v___x_1596_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(v___x_1594_, v___x_1595_);
v___x_1597_ = l_Lean_Json_mkObj(v___x_1596_);
lean_dec(v___x_1596_);
return v___x_1597_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(size_t v_sz_1602_, size_t v_i_1603_, lean_object* v_bs_1604_){
_start:
{
uint8_t v___x_1605_; 
v___x_1605_ = lean_usize_dec_lt(v_i_1603_, v_sz_1602_);
if (v___x_1605_ == 0)
{
return v_bs_1604_;
}
else
{
lean_object* v_v_1606_; lean_object* v___x_1607_; lean_object* v_bs_x27_1608_; lean_object* v___x_1609_; size_t v___x_1610_; size_t v___x_1611_; lean_object* v___x_1612_; 
v_v_1606_ = lean_array_uget(v_bs_1604_, v_i_1603_);
v___x_1607_ = lean_unsigned_to_nat(0u);
v_bs_x27_1608_ = lean_array_uset(v_bs_1604_, v_i_1603_, v___x_1607_);
v___x_1609_ = l_Lean_instToJsonPrintImportResult_toJson(v_v_1606_);
v___x_1610_ = ((size_t)1ULL);
v___x_1611_ = lean_usize_add(v_i_1603_, v___x_1610_);
v___x_1612_ = lean_array_uset(v_bs_x27_1608_, v_i_1603_, v___x_1609_);
v_i_1603_ = v___x_1611_;
v_bs_1604_ = v___x_1612_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0___boxed(lean_object* v_sz_1614_, lean_object* v_i_1615_, lean_object* v_bs_1616_){
_start:
{
size_t v_sz_boxed_1617_; size_t v_i_boxed_1618_; lean_object* v_res_1619_; 
v_sz_boxed_1617_ = lean_unbox_usize(v_sz_1614_);
lean_dec(v_sz_1614_);
v_i_boxed_1618_ = lean_unbox_usize(v_i_1615_);
lean_dec(v_i_1615_);
v_res_1619_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(v_sz_boxed_1617_, v_i_boxed_1618_, v_bs_1616_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0(lean_object* v_a_1620_){
_start:
{
size_t v_sz_1621_; size_t v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v_sz_1621_ = lean_array_size(v_a_1620_);
v___x_1622_ = ((size_t)0ULL);
v___x_1623_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0_spec__0(v_sz_1621_, v___x_1622_, v_a_1620_);
v___x_1624_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonPrintImportsResult_toJson(lean_object* v_x_1626_){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1627_ = ((lean_object*)(l_Lean_instToJsonPrintImportsResult_toJson___closed__0));
v___x_1628_ = l_Lean_Array_toJson___at___00Lean_instToJsonPrintImportsResult_toJson_spec__0(v_x_1626_);
v___x_1629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1629_, 0, v___x_1627_);
lean_ctor_set(v___x_1629_, 1, v___x_1628_);
v___x_1630_ = lean_box(0);
v___x_1631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1629_);
lean_ctor_set(v___x_1631_, 1, v___x_1630_);
v___x_1632_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1631_);
lean_ctor_set(v___x_1632_, 1, v___x_1630_);
v___x_1633_ = ((lean_object*)(l_Lean_instToJsonPrintImportResult_toJson___closed__2));
v___x_1634_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonPrintImportResult_toJson_spec__2(v___x_1632_, v___x_1633_);
v___x_1635_ = l_Lean_Json_mkObj(v___x_1634_);
lean_dec(v___x_1634_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(size_t v_sz_1640_, size_t v_i_1641_, lean_object* v_bs_1642_){
_start:
{
uint8_t v___x_1644_; 
v___x_1644_ = lean_usize_dec_lt(v_i_1641_, v_sz_1640_);
if (v___x_1644_ == 0)
{
lean_object* v___x_1645_; 
v___x_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1645_, 0, v_bs_1642_);
return v___x_1645_;
}
else
{
lean_object* v_v_1646_; lean_object* v___x_1647_; lean_object* v_bs_x27_1648_; lean_object* v_a_1650_; lean_object* v_a_1656_; lean_object* v___x_1663_; 
v_v_1646_ = lean_array_uget(v_bs_1642_, v_i_1641_);
v___x_1647_ = lean_unsigned_to_nat(0u);
v_bs_x27_1648_ = lean_array_uset(v_bs_1642_, v_i_1641_, v___x_1647_);
v___x_1663_ = l_IO_FS_readFile(v_v_1646_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v_a_1664_; lean_object* v___x_1665_; 
v_a_1664_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1664_);
lean_dec_ref_known(v___x_1663_, 1);
v___x_1665_ = l_Lean_parseImports_x27(v_a_1664_, v_v_1646_);
if (lean_obj_tag(v___x_1665_) == 0)
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1675_; 
v_a_1666_ = lean_ctor_get(v___x_1665_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1665_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1668_ = v___x_1665_;
v_isShared_1669_ = v_isSharedCheck_1675_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1665_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1675_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
lean_ctor_set_tag(v___x_1668_, 1);
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1672_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___closed__0));
v___x_1673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1671_);
lean_ctor_set(v___x_1673_, 1, v___x_1672_);
v_a_1650_ = v___x_1673_;
goto v___jp_1649_;
}
}
}
else
{
lean_object* v_a_1676_; 
v_a_1676_ = lean_ctor_get(v___x_1665_, 0);
lean_inc(v_a_1676_);
lean_dec_ref_known(v___x_1665_, 1);
v_a_1656_ = v_a_1676_;
goto v___jp_1655_;
}
}
else
{
lean_object* v_a_1677_; 
lean_dec(v_v_1646_);
v_a_1677_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_a_1677_);
lean_dec_ref_known(v___x_1663_, 1);
v_a_1656_ = v_a_1677_;
goto v___jp_1655_;
}
v___jp_1649_:
{
size_t v___x_1651_; size_t v___x_1652_; lean_object* v___x_1653_; 
v___x_1651_ = ((size_t)1ULL);
v___x_1652_ = lean_usize_add(v_i_1641_, v___x_1651_);
v___x_1653_ = lean_array_uset(v_bs_x27_1648_, v_i_1641_, v_a_1650_);
v_i_1641_ = v___x_1652_;
v_bs_1642_ = v___x_1653_;
goto _start;
}
v___jp_1655_:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1657_ = lean_box(0);
v___x_1658_ = lean_io_error_to_string(v_a_1656_);
v___x_1659_ = lean_unsigned_to_nat(1u);
v___x_1660_ = lean_mk_empty_array_with_capacity(v___x_1659_);
v___x_1661_ = lean_array_push(v___x_1660_, v___x_1658_);
v___x_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1657_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v_a_1650_ = v___x_1662_;
goto v___jp_1649_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0___boxed(lean_object* v_sz_1678_, lean_object* v_i_1679_, lean_object* v_bs_1680_, lean_object* v___y_1681_){
_start:
{
size_t v_sz_boxed_1682_; size_t v_i_boxed_1683_; lean_object* v_res_1684_; 
v_sz_boxed_1682_ = lean_unbox_usize(v_sz_1678_);
lean_dec(v_sz_1678_);
v_i_boxed_1683_ = lean_unbox_usize(v_i_1679_);
lean_dec(v_i_1679_);
v_res_1684_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(v_sz_boxed_1682_, v_i_boxed_1683_, v_bs_1680_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(lean_object* v_s_1685_){
_start:
{
lean_object* v___x_1687_; lean_object* v_putStr_1688_; lean_object* v___x_1689_; 
v___x_1687_ = lean_get_stdout();
v_putStr_1688_ = lean_ctor_get(v___x_1687_, 4);
lean_inc_ref(v_putStr_1688_);
lean_dec_ref(v___x_1687_);
v___x_1689_ = lean_apply_2(v_putStr_1688_, v_s_1685_, lean_box(0));
return v___x_1689_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1___boxed(lean_object* v_s_1690_, lean_object* v_a_1691_){
_start:
{
lean_object* v_res_1692_; 
v_res_1692_ = l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(v_s_1690_);
return v_res_1692_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1(lean_object* v_s_1693_){
_start:
{
uint32_t v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1695_ = 10;
v___x_1696_ = lean_string_push(v_s_1693_, v___x_1695_);
v___x_1697_ = l_IO_print___at___00IO_println___at___00Lean_printImportsJson_spec__1_spec__1(v___x_1696_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00Lean_printImportsJson_spec__1___boxed(lean_object* v_s_1698_, lean_object* v_a_1699_){
_start:
{
lean_object* v_res_1700_; 
v_res_1700_ = l_IO_println___at___00Lean_printImportsJson_spec__1(v_s_1698_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_printImportsJson(lean_object* v_fileNames_1701_){
_start:
{
size_t v_sz_1703_; size_t v___x_1704_; lean_object* v___x_1705_; 
v_sz_1703_ = lean_array_size(v_fileNames_1701_);
v___x_1704_ = ((size_t)0ULL);
v___x_1705_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_printImportsJson_spec__0(v_sz_1703_, v___x_1704_, v_fileNames_1701_);
if (lean_obj_tag(v___x_1705_) == 0)
{
lean_object* v_a_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v_a_1706_ = lean_ctor_get(v___x_1705_, 0);
lean_inc(v_a_1706_);
lean_dec_ref_known(v___x_1705_, 1);
v___x_1707_ = l_Lean_instToJsonPrintImportsResult_toJson(v_a_1706_);
v___x_1708_ = l_Lean_Json_compress(v___x_1707_);
v___x_1709_ = l_IO_println___at___00Lean_printImportsJson_spec__1(v___x_1708_);
return v___x_1709_;
}
else
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
v_a_1710_ = lean_ctor_get(v___x_1705_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1705_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v___x_1705_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1705_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1710_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_printImportsJson___boxed(lean_object* v_fileNames_1718_, lean_object* v_a_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_Lean_printImportsJson(v_fileNames_1718_);
return v_res_1720_;
}
}
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ParseImportsFast(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ParseImportsFast(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ParseImportsFast(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ParseImportsFast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ParseImportsFast(builtin);
}
#ifdef __cplusplus
}
#endif
