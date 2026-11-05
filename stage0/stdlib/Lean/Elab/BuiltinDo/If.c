// Lean compiler output
// Module: Lean.Elab.BuiltinDo.If
// Imports: public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Lean.Elab.BuiltinDo.Basic
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_doElabToSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_withDuplicableCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_withFreshMacroScope___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtomFrom(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
extern lean_object* l_Lean_Elab_Do_controlInfoElemAttribute;
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_exprToSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termIfThenElse"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 209, 193, 165, 165, 31, 104, 198)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "else branch of if with condition {cond}"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "then branch of if with condition {cond}"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__6_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "termDepIfThenElse"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(191, 94, 17, 11, 145, 108, 236, 173)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__8_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__10_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__11_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoIf___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIfProp"};
static const lean_object* l_Lean_Elab_Do_elabDoIf___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoIf___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___lam__0___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Do_elabDoIf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "doIf"};
static const lean_object* l_Lean_Elab_Do_elabDoIf___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoIf___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoIf___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoIf___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoIf___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoIf___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoIf___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoIf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoIf___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoIf___closed__0_value),LEAN_SCALAR_PTR_LITERAL(133, 56, 102, 181, 14, 156, 21, 0)}};
static const lean_object* l_Lean_Elab_Do_elabDoIf___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoIf___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "elabDoIf"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(135, 50, 230, 41, 148, 150, 129, 146)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__0_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__4_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "uif"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bif"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doBIf"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(18, 216, 228, 76, 121, 3, 124, 41)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "doUIf"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 236, 107, 49, 177, 130, 92, 12)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__0;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__1_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__4;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doIfLet"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(181, 227, 73, 225, 0, 143, 195, 11)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoIf___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(55, 147, 210, 58, 86, 191, 41, 151)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doIfLetPure"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(30, 29, 142, 71, 96, 53, 139, 191)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doIfLetBind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__11_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(251, 203, 116, 140, 48, 138, 26, 199)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__13_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__13_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__13_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__13_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__14_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__16_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__16_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__17_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__18_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(115, 27, 24, 243, 204, 49, 153, 202)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__19_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__20_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__21_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__21_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__20_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__21_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__22_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__23_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__24_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__24_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__24_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__24_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__24_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__24_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__25_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__26_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__26_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__26_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__26_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__27_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__28_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "InternalSyntax"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doSkip"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 4, 119, 3, 13, 160, 149, 47)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__1_value),LEAN_SCALAR_PTR_LITERAL(125, 157, 182, 149, 109, 63, 124, 178)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "skip"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoIf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoIf___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "expandDoIf"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 129, 97, 131, 243, 145, 63, 99)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoUIf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoUIf___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "expandDoUIf"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(180, 226, 221, 254, 252, 117, 194, 96)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoBIf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoBIf___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "expandDoBIf"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 216, 110, 47, 114, 241, 238, 68)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoUIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoUIf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "controlInfoDoUIf"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 185, 219, 163, 41, 141, 54, 164)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoBIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoBIf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "controlInfoDoBIf"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 115, 55, 28, 244, 169, 230, 114)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "else branch of "};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "then branch of "};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__1;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " with condition "};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_doIfPropHyp_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_doIfPropHyp_x3f___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(218, 189, 67, 60, 211, 196, 112, 165)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__4;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(38, 183, 255, 58, 84, 31, 100, 5)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "letMVar"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__7_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(107, 198, 34, 186, 248, 43, 208, 139)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__7_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "let_mvar%"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__8_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__9_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__10_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "waitIfTypeMVar"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__11 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__12_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__12_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(1, 158, 121, 249, 90, 128, 220, 150)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__12 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__12_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "wait_if_type_mvar%"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__13 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "UDecidable.ite"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUIf___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__3;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "UDecidable"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(192, 225, 235, 79, 35, 118, 49, 126)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__8_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "UDecidable.dite"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUIf___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__10;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__11 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(104, 144, 181, 15, 0, 252, 42, 88)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__11_value),LEAN_SCALAR_PTR_LITERAL(46, 95, 156, 250, 25, 197, 72, 211)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__12 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__12_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__12_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__14 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__15 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__13_value),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__15_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__16 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__16_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__17 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__17_value),LEAN_SCALAR_PTR_LITERAL(124, 9, 161, 194, 227, 100, 20, 110)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__19 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__19_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__21 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__21_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__22 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__22_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__23 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__23_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__24 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__24_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__26_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__26_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__26_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__26 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__26_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__26_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__27 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__27_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__28 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__28_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__29 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__29_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__29_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__30 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__31_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__31_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__31 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__31_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__31_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__32 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__32_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__32_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__33 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__33_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__30_value),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__33_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__34 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__27_value),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__34_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__35 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__35_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fun"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__36 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__36_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__36_value),LEAN_SCALAR_PTR_LITERAL(249, 155, 133, 242, 71, 132, 191, 97)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "basicFun"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__38 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__38_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39_value_aux_2),((lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__38_value),LEAN_SCALAR_PTR_LITERAL(209, 134, 40, 160, 122, 195, 31, 223)}};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39_value;
static const lean_string_object l_Lean_Elab_Do_elabDoUIf___lam__0___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___closed__40 = (const lean_object*)&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__40_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabDoUIf"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(159, 102, 167, 66, 6, 169, 22, 61)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoBIf___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__1;
static const lean_ctor_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__3_value),((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__5_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__6_value;
static const lean_string_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Bool.dcond"};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoBIf___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__8;
static const lean_string_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__9_value;
static const lean_string_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "dcond"};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__10 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(77, 42, 59, 48, 241, 48, 106, 255)}};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__11 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__12 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__11_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__13 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__14 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Do_elabDoBIf___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__12_value),((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__14_value)}};
static const lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___closed__15 = (const lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBIf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "elabDoBIf"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 227, 80, 177, 101, 185, 129, 255)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoIfAuto___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "termIteAuto"};
static const lean_object* l_Lean_Elab_Do_elabDoIfAuto___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoIfAuto___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_elabDoIfAuto___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ite_auto%"};
static const lean_object* l_Lean_Elab_Do_elabDoIfAuto___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Do_elabDoIfAuto___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIfAuto"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 4, 119, 3, 13, 160, 149, 47)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 236, 147, 32, 148, 34, 174, 26)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "elabDoIfAuto"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(209, 198, 122, 243, 190, 152, 152, 237)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 253, .m_capacity = 253, .m_length = 252, .m_data = "`if_auto% [h :] c then s else t`, laid out as `[kw, optional [h, \":\"], c, \"then\", s, \"else\", t]`,\nelaborates to the term `let_mvar% \?c := c; wait_if_type_mvar% \?c; ite_auto% [h :] \?c then s' else t'`.\nLike `if`, it waits until the type of `c` is known."};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto_docString__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoIfAuto(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoIfAuto___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "controlInfoDoIfAuto"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 156, 239, 255, 184, 179, 53, 71)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Term_elabTermIteAuto___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__9_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Elab_Term_elabTermIteAuto___closed__0 = (const lean_object*)&l_Lean_Elab_Term_elabTermIteAuto___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Term_elabTermIteAuto___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Term_elabTermIteAuto___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabTermIteAuto___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Term_elabTermIteAuto___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabTermIteAuto___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_object* l_Lean_Elab_Term_elabTermIteAuto___closed__1 = (const lean_object*)&l_Lean_Elab_Term_elabTermIteAuto___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Term_elabTermIteAuto___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabTermIteAuto___closed__1_value)}};
static const lean_object* l_Lean_Elab_Term_elabTermIteAuto___closed__2 = (const lean_object*)&l_Lean_Elab_Term_elabTermIteAuto___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Term_elabTermIteAuto___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_elabTermIteAuto___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Term_elabTermIteAuto___closed__3 = (const lean_object*)&l_Lean_Elab_Term_elabTermIteAuto___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermIteAuto(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermIteAuto___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 4, 119, 3, 13, 160, 149, 47)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Do_elabDoIfAuto___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(156, 203, 231, 76, 135, 132, 252, 38)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "elabTermIteAuto"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(252, 225, 247, 249, 114, 131, 135, 109)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(138, 17, 23, 122, 201, 153, 178, 153)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 164, .m_capacity = 164, .m_length = 163, .m_data = "`ite_auto% [h :] c then t else e` is `cond`/`Bool.dcond` if `c` is a `Bool` and\n`UDecidable.ite`/`dite` otherwise, including when the type of `c` is still unknown."};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto_docString__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0(lean_object* v_cond_7_, lean_object* v_then___8_, uint8_t v___x_9_, lean_object* v_else___10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_doBlockResultType_19_; lean_object* v___x_20_; 
v_doBlockResultType_19_ = lean_ctor_get(v___y_11_, 3);
lean_inc_ref(v_doBlockResultType_19_);
v___x_20_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_19_, v___y_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_);
if (lean_obj_tag(v___x_20_) == 0)
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_41_; 
v_a_21_ = lean_ctor_get(v___x_20_, 0);
v_isSharedCheck_41_ = !lean_is_exclusive(v___x_20_);
if (v_isSharedCheck_41_ == 0)
{
v___x_23_ = v___x_20_;
v_isShared_24_ = v_isSharedCheck_41_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_20_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_41_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v_ref_25_; uint8_t v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_37_; 
v_ref_25_ = lean_ctor_get(v___y_16_, 2);
v___x_26_ = 0;
v___x_27_ = l_Lean_SourceInfo_fromRef(v_ref_25_, v___x_26_);
v___x_28_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__1));
v___x_29_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__2));
lean_inc_n(v___x_27_, 3);
v___x_30_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_27_);
lean_ctor_set(v___x_30_, 1, v___x_29_);
v___x_31_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__3));
v___x_32_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_27_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
v___x_33_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__4));
v___x_34_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_27_);
lean_ctor_set(v___x_34_, 1, v___x_33_);
v___x_35_ = l_Lean_Syntax_node6(v___x_27_, v___x_28_, v___x_30_, v_cond_7_, v___x_32_, v_then___8_, v___x_34_, v_else___10_);
if (v_isShared_24_ == 0)
{
lean_ctor_set_tag(v___x_23_, 1);
v___x_37_ = v___x_23_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v_a_21_);
v___x_37_ = v_reuseFailAlloc_40_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_box(0);
v___x_39_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_35_, v___x_37_, v___x_9_, v___x_9_, v___x_38_, v___y_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_);
return v___x_39_;
}
}
}
else
{
lean_dec(v_else___10_);
lean_dec(v_then___8_);
lean_dec(v_cond_7_);
return v___x_20_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___boxed(lean_object* v_cond_42_, lean_object* v_then___43_, lean_object* v___x_44_, lean_object* v_else___45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
uint8_t v___x_3138__boxed_54_; lean_object* v_res_55_; 
v___x_3138__boxed_54_ = lean_unbox(v___x_44_);
v_res_55_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0(v_cond_42_, v_then___43_, v___x_3138__boxed_54_, v_else___45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
lean_dec_ref(v___y_46_);
return v_res_55_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__1));
v___x_60_ = l_Lean_MessageData_ofFormat(v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1(lean_object* v_cond_61_, uint8_t v___x_62_, lean_object* v_elseSeq_63_, lean_object* v_dec_64_, lean_object* v_then___65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v___x_74_; lean_object* v___f_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_74_ = lean_box(v___x_62_);
v___f_75_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___boxed), 12, 3);
lean_closure_set(v___f_75_, 0, v_cond_61_);
lean_closure_set(v___f_75_, 1, v_then___65_);
lean_closure_set(v___f_75_, 2, v___x_74_);
v___x_76_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2);
v___x_77_ = lean_box(v___x_62_);
v___x_78_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_78_, 0, v_elseSeq_63_);
lean_closure_set(v___x_78_, 1, v_dec_64_);
lean_closure_set(v___x_78_, 2, v___x_77_);
v___x_79_ = lean_box(0);
v___x_80_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_76_, v___x_78_, v___f_75_, v___x_79_, v___y_66_, v___y_67_, v___y_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___boxed(lean_object* v_cond_81_, lean_object* v___x_82_, lean_object* v_elseSeq_83_, lean_object* v_dec_84_, lean_object* v_then___85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
uint8_t v___x_3224__boxed_94_; lean_object* v_res_95_; 
v___x_3224__boxed_94_ = lean_unbox(v___x_82_);
v_res_95_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1(v_cond_81_, v___x_3224__boxed_94_, v_elseSeq_83_, v_dec_84_, v_then___85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec_ref(v___y_86_);
return v_res_95_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__1));
v___x_100_ = l_Lean_MessageData_ofFormat(v___x_99_);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte(lean_object* v_cond_101_, lean_object* v_thenSeq_102_, lean_object* v_elseSeq_103_, lean_object* v_dec_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___f_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_113_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2);
v___x_114_ = 1;
v___x_115_ = lean_box(v___x_114_);
lean_inc_ref(v_dec_104_);
v___f_116_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___boxed), 13, 4);
lean_closure_set(v___f_116_, 0, v_cond_101_);
lean_closure_set(v___f_116_, 1, v___x_115_);
lean_closure_set(v___f_116_, 2, v_elseSeq_103_);
lean_closure_set(v___f_116_, 3, v_dec_104_);
v___x_117_ = lean_box(v___x_114_);
v___x_118_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_118_, 0, v_thenSeq_102_);
lean_closure_set(v___x_118_, 1, v_dec_104_);
lean_closure_set(v___x_118_, 2, v___x_117_);
v___x_119_ = lean_box(0);
v___x_120_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_113_, v___x_118_, v___f_116_, v___x_119_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___boxed(lean_object* v_cond_121_, lean_object* v_thenSeq_122_, lean_object* v_elseSeq_123_, lean_object* v_dec_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte(v_cond_121_, v_thenSeq_122_, v_elseSeq_123_, v_dec_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_);
lean_dec(v_a_131_);
lean_dec_ref(v_a_130_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
lean_dec(v_a_127_);
lean_dec_ref(v_a_126_);
lean_dec_ref(v_a_125_);
return v_res_133_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_134_ = lean_box(0);
v___x_135_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v___x_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg(){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0);
v___x_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_139_, 0, v___x_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___boxed(lean_object* v___y_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0(lean_object* v_00_u03b1_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___boxed(lean_object* v_00_u03b1_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_res_161_; 
v_res_161_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0(v_00_u03b1_152_, v___y_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec_ref(v___y_153_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0(lean_object* v_elseSeq_162_, lean_object* v_dec_163_, lean_object* v_thenSeq_164_, uint8_t v_then___165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
uint8_t v___x_174_; 
v___x_174_ = 1;
if (v_then___165_ == 0)
{
lean_object* v___x_175_; 
lean_dec(v_thenSeq_164_);
v___x_175_ = l_Lean_Elab_Do_elabDoSeq(v_elseSeq_162_, v_dec_163_, v___x_174_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
return v___x_175_;
}
else
{
lean_object* v___x_176_; 
lean_dec(v_elseSeq_162_);
v___x_176_ = l_Lean_Elab_Do_elabDoSeq(v_thenSeq_164_, v_dec_163_, v___x_174_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
return v___x_176_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0___boxed(lean_object* v_elseSeq_177_, lean_object* v_dec_178_, lean_object* v_thenSeq_179_, lean_object* v_then___180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
uint8_t v_then___00boxed_189_; lean_object* v_res_190_; 
v_then___00boxed_189_ = lean_unbox(v_then___180_);
v_res_190_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0(v_elseSeq_177_, v_dec_178_, v_thenSeq_179_, v_then___00boxed_189_, v___y_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec(v___y_185_);
lean_dec_ref(v___y_184_);
lean_dec(v___y_183_);
lean_dec_ref(v___y_182_);
lean_dec_ref(v___y_181_);
return v_res_190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1(lean_object* v_h_212_, lean_object* v_cond_213_, lean_object* v_then___214_, uint8_t v___x_215_, lean_object* v_else___216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_doBlockResultType_225_; lean_object* v___x_226_; 
v_doBlockResultType_225_ = lean_ctor_get(v___y_217_, 3);
lean_inc_ref(v_doBlockResultType_225_);
v___x_226_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_225_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_226_) == 0)
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_281_; 
v_a_227_ = lean_ctor_get(v___x_226_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_226_);
if (v_isSharedCheck_281_ == 0)
{
v___x_229_ = v___x_226_;
v_isShared_230_ = v_isSharedCheck_281_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_226_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_281_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_231_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4));
lean_inc(v_h_212_);
v___x_232_ = l_Lean_Syntax_isOfKind(v_h_212_, v___x_231_);
if (v___x_232_ == 0)
{
lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_233_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__6));
lean_inc(v_h_212_);
v___x_234_ = l_Lean_Syntax_isOfKind(v_h_212_, v___x_233_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; 
lean_del_object(v___x_229_);
lean_dec(v_a_227_);
lean_dec(v_else___216_);
lean_dec(v_then___214_);
lean_dec(v_cond_213_);
lean_dec(v_h_212_);
v___x_235_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_235_;
}
else
{
lean_object* v_ref_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_251_; 
v_ref_236_ = lean_ctor_get(v___y_222_, 2);
v___x_237_ = l_Lean_SourceInfo_fromRef(v_ref_236_, v___x_232_);
v___x_238_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__8));
v___x_239_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__2));
lean_inc_n(v___x_237_, 5);
v___x_240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_237_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__10));
v___x_242_ = l_Lean_Syntax_node1(v___x_237_, v___x_241_, v_h_212_);
v___x_243_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__11));
v___x_244_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_237_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__3));
v___x_246_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_237_);
lean_ctor_set(v___x_246_, 1, v___x_245_);
v___x_247_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__4));
v___x_248_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_237_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = l_Lean_Syntax_node8(v___x_237_, v___x_238_, v___x_240_, v___x_242_, v___x_244_, v_cond_213_, v___x_246_, v_then___214_, v___x_248_, v_else___216_);
if (v_isShared_230_ == 0)
{
lean_ctor_set_tag(v___x_229_, 1);
v___x_251_ = v___x_229_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_227_);
v___x_251_ = v_reuseFailAlloc_254_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = lean_box(0);
v___x_253_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_249_, v___x_251_, v___x_215_, v___x_215_, v___x_252_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
return v___x_253_;
}
}
}
else
{
lean_object* v_ref_255_; lean_object* v___x_256_; lean_object* v___x_257_; uint8_t v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_277_; 
v_ref_255_ = lean_ctor_get(v___y_222_, 2);
v___x_256_ = lean_unsigned_to_nat(0u);
v___x_257_ = l_Lean_Syntax_getArg(v_h_212_, v___x_256_);
lean_dec(v_h_212_);
v___x_258_ = 0;
v___x_259_ = l_Lean_SourceInfo_fromRef(v_ref_255_, v___x_258_);
v___x_260_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__8));
v___x_261_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__2));
lean_inc_n(v___x_259_, 6);
v___x_262_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_259_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
v___x_263_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__10));
v___x_264_ = l_Lean_SourceInfo_fromRef(v___x_257_, v___x_215_);
lean_dec(v___x_257_);
v___x_265_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__12));
v___x_266_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_264_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
v___x_267_ = l_Lean_Syntax_node1(v___x_259_, v___x_231_, v___x_266_);
v___x_268_ = l_Lean_Syntax_node1(v___x_259_, v___x_263_, v___x_267_);
v___x_269_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__11));
v___x_270_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_259_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___x_271_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__3));
v___x_272_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_259_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__4));
v___x_274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_259_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = l_Lean_Syntax_node8(v___x_259_, v___x_260_, v___x_262_, v___x_268_, v___x_270_, v_cond_213_, v___x_272_, v_then___214_, v___x_274_, v_else___216_);
if (v_isShared_230_ == 0)
{
lean_ctor_set_tag(v___x_229_, 1);
v___x_277_ = v___x_229_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_227_);
v___x_277_ = v_reuseFailAlloc_280_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_box(0);
v___x_279_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_275_, v___x_277_, v___x_215_, v___x_215_, v___x_278_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
return v___x_279_;
}
}
}
}
else
{
lean_dec(v_else___216_);
lean_dec(v_then___214_);
lean_dec(v_cond_213_);
lean_dec(v_h_212_);
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___boxed(lean_object* v_h_282_, lean_object* v_cond_283_, lean_object* v_then___284_, lean_object* v___x_285_, lean_object* v_else___286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
uint8_t v___x_7270__boxed_295_; lean_object* v_res_296_; 
v___x_7270__boxed_295_ = lean_unbox(v___x_285_);
v_res_296_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1(v_h_282_, v_cond_283_, v_then___284_, v___x_7270__boxed_295_, v_else___286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_);
lean_dec(v___y_293_);
lean_dec_ref(v___y_292_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
lean_dec(v___y_289_);
lean_dec_ref(v___y_288_);
lean_dec_ref(v___y_287_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2(lean_object* v_h_297_, lean_object* v_cond_298_, uint8_t v___x_299_, lean_object* v_elabDiteBranch_300_, lean_object* v_then___301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v___x_310_; lean_object* v___f_311_; lean_object* v___x_312_; uint8_t v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_310_ = lean_box(v___x_299_);
v___f_311_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___boxed), 13, 4);
lean_closure_set(v___f_311_, 0, v_h_297_);
lean_closure_set(v___f_311_, 1, v_cond_298_);
lean_closure_set(v___f_311_, 2, v_then___301_);
lean_closure_set(v___f_311_, 3, v___x_310_);
v___x_312_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2);
v___x_313_ = 0;
v___x_314_ = lean_box(v___x_313_);
v___x_315_ = lean_apply_1(v_elabDiteBranch_300_, v___x_314_);
v___x_316_ = lean_box(0);
v___x_317_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_312_, v___x_315_, v___f_311_, v___x_316_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2___boxed(lean_object* v_h_318_, lean_object* v_cond_319_, lean_object* v___x_320_, lean_object* v_elabDiteBranch_321_, lean_object* v_then___322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_){
_start:
{
uint8_t v___x_7432__boxed_331_; lean_object* v_res_332_; 
v___x_7432__boxed_331_ = lean_unbox(v___x_320_);
v_res_332_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2(v_h_318_, v_cond_319_, v___x_7432__boxed_331_, v_elabDiteBranch_321_, v_then___322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, v___y_329_);
lean_dec(v___y_329_);
lean_dec_ref(v___y_328_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec_ref(v___y_323_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite(lean_object* v_h_333_, lean_object* v_cond_334_, lean_object* v_thenSeq_335_, lean_object* v_elseSeq_336_, lean_object* v_dec_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_){
_start:
{
lean_object* v_elabDiteBranch_346_; lean_object* v___x_347_; uint8_t v___x_348_; lean_object* v___x_349_; lean_object* v___f_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
lean_inc(v_thenSeq_335_);
lean_inc_ref(v_dec_337_);
lean_inc(v_elseSeq_336_);
v_elabDiteBranch_346_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0___boxed), 12, 3);
lean_closure_set(v_elabDiteBranch_346_, 0, v_elseSeq_336_);
lean_closure_set(v_elabDiteBranch_346_, 1, v_dec_337_);
lean_closure_set(v_elabDiteBranch_346_, 2, v_thenSeq_335_);
v___x_347_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2);
v___x_348_ = 1;
v___x_349_ = lean_box(v___x_348_);
v___f_350_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2___boxed), 13, 4);
lean_closure_set(v___f_350_, 0, v_h_333_);
lean_closure_set(v___f_350_, 1, v_cond_334_);
lean_closure_set(v___f_350_, 2, v___x_349_);
lean_closure_set(v___f_350_, 3, v_elabDiteBranch_346_);
v___x_351_ = lean_box(v___x_348_);
v___x_352_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0___boxed), 12, 4);
lean_closure_set(v___x_352_, 0, v_elseSeq_336_);
lean_closure_set(v___x_352_, 1, v_dec_337_);
lean_closure_set(v___x_352_, 2, v_thenSeq_335_);
lean_closure_set(v___x_352_, 3, v___x_351_);
v___x_353_ = lean_box(0);
v___x_354_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_347_, v___x_352_, v___f_350_, v___x_353_, v_a_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_, v_a_344_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___boxed(lean_object* v_h_355_, lean_object* v_cond_356_, lean_object* v_thenSeq_357_, lean_object* v_elseSeq_358_, lean_object* v_dec_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite(v_h_355_, v_cond_356_, v_thenSeq_357_, v_elseSeq_358_, v_dec_359_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
lean_dec(v_a_362_);
lean_dec_ref(v_a_361_);
lean_dec_ref(v_a_360_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___lam__0(lean_object* v___x_370_, lean_object* v___x_371_, lean_object* v___x_372_, lean_object* v___x_373_, lean_object* v___x_374_, lean_object* v___x_375_, lean_object* v___x_376_, lean_object* v_thenSeq_377_, lean_object* v_elseSeq_378_, lean_object* v_dec_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v___x_388_ = ((lean_object*)(l_Lean_Elab_Do_elabDoIf___lam__0___closed__0));
v___x_389_ = l_Lean_Name_mkStr4(v___x_370_, v___x_371_, v___x_372_, v___x_388_);
lean_inc(v___x_373_);
v___x_390_ = l_Lean_Syntax_isOfKind(v___x_373_, v___x_389_);
lean_dec(v___x_389_);
if (v___x_390_ == 0)
{
lean_object* v___x_391_; 
lean_dec_ref(v_dec_379_);
lean_dec(v_elseSeq_378_);
lean_dec(v_thenSeq_377_);
lean_dec(v___x_373_);
v___x_391_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_391_;
}
else
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = l_Lean_Syntax_getArg(v___x_373_, v___x_374_);
lean_inc(v___x_392_);
v___x_393_ = l_Lean_Syntax_matchesNull(v___x_392_, v___x_374_);
if (v___x_393_ == 0)
{
uint8_t v___x_394_; 
lean_inc(v___x_392_);
v___x_394_ = l_Lean_Syntax_matchesNull(v___x_392_, v___x_375_);
if (v___x_394_ == 0)
{
lean_object* v___x_395_; 
lean_dec(v___x_392_);
lean_dec_ref(v_dec_379_);
lean_dec(v_elseSeq_378_);
lean_dec(v_thenSeq_377_);
lean_dec(v___x_373_);
v___x_395_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_395_;
}
else
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_396_ = l_Lean_Syntax_getArg(v___x_392_, v___x_374_);
lean_dec(v___x_392_);
v___x_397_ = l_Lean_Syntax_getArg(v___x_373_, v___x_376_);
lean_dec(v___x_373_);
v___x_398_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite(v___x_396_, v___x_397_, v_thenSeq_377_, v_elseSeq_378_, v_dec_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
return v___x_398_;
}
}
else
{
lean_object* v___x_399_; lean_object* v___x_400_; 
lean_dec(v___x_392_);
v___x_399_ = l_Lean_Syntax_getArg(v___x_373_, v___x_376_);
lean_dec(v___x_373_);
v___x_400_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte(v___x_399_, v_thenSeq_377_, v_elseSeq_378_, v_dec_379_, v___y_380_, v___y_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
return v___x_400_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___lam__0___boxed(lean_object** _args){
lean_object* v___x_401_ = _args[0];
lean_object* v___x_402_ = _args[1];
lean_object* v___x_403_ = _args[2];
lean_object* v___x_404_ = _args[3];
lean_object* v___x_405_ = _args[4];
lean_object* v___x_406_ = _args[5];
lean_object* v___x_407_ = _args[6];
lean_object* v_thenSeq_408_ = _args[7];
lean_object* v_elseSeq_409_ = _args[8];
lean_object* v_dec_410_ = _args[9];
lean_object* v___y_411_ = _args[10];
lean_object* v___y_412_ = _args[11];
lean_object* v___y_413_ = _args[12];
lean_object* v___y_414_ = _args[13];
lean_object* v___y_415_ = _args[14];
lean_object* v___y_416_ = _args[15];
lean_object* v___y_417_ = _args[16];
lean_object* v___y_418_ = _args[17];
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_Elab_Do_elabDoIf___lam__0(v___x_401_, v___x_402_, v___x_403_, v___x_404_, v___x_405_, v___x_406_, v___x_407_, v_thenSeq_408_, v_elseSeq_409_, v_dec_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___x_407_);
lean_dec(v___x_406_);
lean_dec(v___x_405_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf(lean_object* v_stx_426_, lean_object* v_dec_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; uint8_t v___x_440_; 
v___x_436_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0));
v___x_437_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1));
v___x_438_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2));
v___x_439_ = ((lean_object*)(l_Lean_Elab_Do_elabDoIf___closed__1));
lean_inc(v_stx_426_);
v___x_440_ = l_Lean_Syntax_isOfKind(v_stx_426_, v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; 
lean_dec_ref(v_dec_427_);
lean_dec(v_stx_426_);
v___x_441_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_441_;
}
else
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; uint8_t v___x_445_; 
v___x_442_ = lean_unsigned_to_nat(0u);
v___x_443_ = lean_unsigned_to_nat(4u);
v___x_444_ = l_Lean_Syntax_getArg(v_stx_426_, v___x_443_);
v___x_445_ = l_Lean_Syntax_matchesNull(v___x_444_, v___x_442_);
if (v___x_445_ == 0)
{
lean_object* v___x_446_; 
lean_dec_ref(v_dec_427_);
lean_dec(v_stx_426_);
v___x_446_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_446_;
}
else
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_447_ = lean_unsigned_to_nat(2u);
v___x_448_ = lean_unsigned_to_nat(5u);
v___x_449_ = l_Lean_Syntax_getArg(v_stx_426_, v___x_448_);
lean_inc(v___x_449_);
v___x_450_ = l_Lean_Syntax_matchesNull(v___x_449_, v___x_447_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; 
lean_dec(v___x_449_);
lean_dec_ref(v_dec_427_);
lean_dec(v_stx_426_);
v___x_451_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_451_;
}
else
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v_thenSeq_455_; lean_object* v_elseSeq_456_; lean_object* v___f_457_; lean_object* v___x_458_; 
v___x_452_ = lean_unsigned_to_nat(1u);
v___x_453_ = l_Lean_Syntax_getArg(v_stx_426_, v___x_452_);
v___x_454_ = lean_unsigned_to_nat(3u);
v_thenSeq_455_ = l_Lean_Syntax_getArg(v_stx_426_, v___x_454_);
lean_dec(v_stx_426_);
v_elseSeq_456_ = l_Lean_Syntax_getArg(v___x_449_, v___x_452_);
lean_dec(v___x_449_);
lean_inc(v_elseSeq_456_);
lean_inc(v_thenSeq_455_);
v___f_457_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoIf___lam__0___boxed), 18, 9);
lean_closure_set(v___f_457_, 0, v___x_436_);
lean_closure_set(v___f_457_, 1, v___x_437_);
lean_closure_set(v___f_457_, 2, v___x_438_);
lean_closure_set(v___f_457_, 3, v___x_453_);
lean_closure_set(v___f_457_, 4, v___x_442_);
lean_closure_set(v___f_457_, 5, v___x_447_);
lean_closure_set(v___f_457_, 6, v___x_452_);
lean_closure_set(v___f_457_, 7, v_thenSeq_455_);
lean_closure_set(v___f_457_, 8, v_elseSeq_456_);
v___x_458_ = l_Lean_Elab_Do_inferControlInfoSeq(v_thenSeq_455_, v_a_429_, v_a_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; lean_object* v___x_460_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v___x_460_ = l_Lean_Elab_Do_inferControlInfoSeq(v_elseSeq_456_, v_a_429_, v_a_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_a_461_);
lean_dec_ref_known(v___x_460_, 1);
v___x_462_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_459_, v_a_461_);
v___x_463_ = l_Lean_Elab_Do_DoElemCont_withDuplicableCont(v_dec_427_, v___x_462_, v___f_457_, v_a_428_, v_a_429_, v_a_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_);
return v___x_463_;
}
else
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
lean_dec(v_a_459_);
lean_dec_ref(v___f_457_);
lean_dec_ref(v_dec_427_);
v_a_464_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_460_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_460_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec_ref(v___f_457_);
lean_dec(v_elseSeq_456_);
lean_dec_ref(v_dec_427_);
v_a_472_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_458_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_458_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___boxed(lean_object* v_stx_480_, lean_object* v_dec_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l_Lean_Elab_Do_elabDoIf(v_stx_480_, v_dec_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_);
lean_dec(v_a_488_);
lean_dec_ref(v_a_487_);
lean_dec(v_a_486_);
lean_dec_ref(v_a_485_);
lean_dec(v_a_484_);
lean_dec_ref(v_a_483_);
lean_dec_ref(v_a_482_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1(){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_500_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_501_ = ((lean_object*)(l_Lean_Elab_Do_elabDoIf___closed__1));
v___x_502_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__3));
v___x_503_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoIf___boxed), 10, 0);
v___x_504_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_500_, v___x_501_, v___x_502_, v___x_503_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___boxed(lean_object* v_a_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1();
return v_res_506_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6(void){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Array_mkArray0___redArg();
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem(lean_object* v_elem_523_, lean_object* v_a_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_ref_526_; uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v_ref_526_ = lean_ctor_get(v_a_524_, 5);
v___x_527_ = 0;
v___x_528_ = l_Lean_SourceInfo_fromRef(v_ref_526_, v___x_527_);
v___x_529_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__1));
v___x_530_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_531_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__5));
v___x_532_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6);
lean_inc_n(v___x_528_, 3);
v___x_533_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_533_, 0, v___x_528_);
lean_ctor_set(v___x_533_, 1, v___x_530_);
lean_ctor_set(v___x_533_, 2, v___x_532_);
v___x_534_ = l_Lean_Syntax_node2(v___x_528_, v___x_531_, v_elem_523_, v___x_533_);
v___x_535_ = l_Lean_Syntax_node1(v___x_528_, v___x_530_, v___x_534_);
v___x_536_ = l_Lean_Syntax_node1(v___x_528_, v___x_529_, v___x_535_);
v___x_537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
lean_ctor_set(v___x_537_, 1, v_a_525_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___boxed(lean_object* v_elem_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem(v_elem_538_, v_a_539_, v_a_540_);
lean_dec_ref(v_a_539_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0(size_t v_sz_556_, size_t v_i_557_, lean_object* v_bs_558_){
_start:
{
uint8_t v___x_559_; 
v___x_559_ = lean_usize_dec_lt(v_i_557_, v_sz_556_);
if (v___x_559_ == 0)
{
return v_bs_558_;
}
else
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v_v_563_; lean_object* v_bs_x27_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___y_568_; lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_560_ = lean_unsigned_to_nat(0u);
v___x_561_ = lean_unsigned_to_nat(1u);
v___x_562_ = lean_unsigned_to_nat(3u);
v_v_563_ = lean_array_uget(v_bs_558_, v_i_557_);
v_bs_x27_564_ = lean_array_uset(v_bs_558_, v_i_557_, v___x_560_);
v___x_565_ = l_Lean_Syntax_getArg(v_v_563_, v___x_560_);
v___x_566_ = l_Lean_Syntax_getArg(v___x_565_, v___x_561_);
lean_dec(v___x_565_);
v___x_578_ = l_Lean_Syntax_getAtomVal(v___x_566_);
v___x_579_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__0));
v___x_580_ = lean_string_dec_eq(v___x_578_, v___x_579_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; uint8_t v___x_582_; 
v___x_581_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__1));
v___x_582_ = lean_string_dec_eq(v___x_578_, v___x_581_);
lean_dec_ref(v___x_578_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; 
v___x_583_ = ((lean_object*)(l_Lean_Elab_Do_elabDoIf___closed__1));
v___y_568_ = v___x_583_;
goto v___jp_567_;
}
else
{
lean_object* v___x_584_; 
v___x_584_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3));
v___y_568_ = v___x_584_;
goto v___jp_567_;
}
}
else
{
lean_object* v___x_585_; 
lean_dec_ref(v___x_578_);
v___x_585_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5));
v___y_568_ = v___x_585_;
goto v___jp_567_;
}
v___jp_567_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; size_t v___x_574_; size_t v___x_575_; lean_object* v___x_576_; 
v___x_569_ = l_Lean_Syntax_getArg(v_v_563_, v___x_561_);
v___x_570_ = l_Lean_Syntax_getArg(v_v_563_, v___x_562_);
lean_dec(v_v_563_);
v___x_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_569_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v___x_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_566_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
lean_inc(v___y_568_);
v___x_573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_573_, 0, v___y_568_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___x_574_ = ((size_t)1ULL);
v___x_575_ = lean_usize_add(v_i_557_, v___x_574_);
v___x_576_ = lean_array_uset(v_bs_x27_564_, v_i_557_, v___x_573_);
v_i_557_ = v___x_575_;
v_bs_558_ = v___x_576_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___boxed(lean_object* v_sz_586_, lean_object* v_i_587_, lean_object* v_bs_588_){
_start:
{
size_t v_sz_boxed_589_; size_t v_i_boxed_590_; lean_object* v_res_591_; 
v_sz_boxed_589_ = lean_unbox_usize(v_sz_586_);
lean_dec(v_sz_586_);
v_i_boxed_590_ = lean_unbox_usize(v_i_587_);
lean_dec(v_i_587_);
v_res_591_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0(v_sz_boxed_589_, v_i_boxed_590_, v_bs_588_);
return v_res_591_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__0(void){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__3));
v___x_593_ = l_Lean_mkAtom(v___x_592_);
return v___x_593_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__3(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__4));
v___x_601_ = l_Lean_mkAtom(v___x_600_);
return v___x_601_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__4(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_602_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__3);
v___x_603_ = lean_unsigned_to_nat(2u);
v___x_604_ = lean_mk_empty_array_with_capacity(v___x_603_);
v___x_605_ = lean_array_push(v___x_604_, v___x_602_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1(lean_object* v_stx_670_, lean_object* v_as_671_, size_t v_sz_672_, size_t v_i_673_, lean_object* v_b_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
lean_object* v_a_678_; lean_object* v_a_679_; uint8_t v_eIsSeq_683_; 
v_eIsSeq_683_ = lean_usize_dec_lt(v_i_673_, v_sz_672_);
if (v_eIsSeq_683_ == 0)
{
lean_object* v___x_684_; 
v___x_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_684_, 0, v_b_674_);
lean_ctor_set(v___x_684_, 1, v___y_676_);
return v___x_684_;
}
else
{
lean_object* v_a_685_; lean_object* v_snd_686_; lean_object* v_snd_687_; lean_object* v_fst_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_911_; 
v_a_685_ = lean_array_uget(v_as_671_, v_i_673_);
v_snd_686_ = lean_ctor_get(v_a_685_, 1);
lean_inc(v_snd_686_);
v_snd_687_ = lean_ctor_get(v_snd_686_, 1);
lean_inc(v_snd_687_);
v_fst_688_ = lean_ctor_get(v_a_685_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v_a_685_);
if (v_isSharedCheck_911_ == 0)
{
lean_object* v_unused_912_; 
v_unused_912_ = lean_ctor_get(v_a_685_, 1);
lean_dec(v_unused_912_);
v___x_690_ = v_a_685_;
v_isShared_691_ = v_isSharedCheck_911_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_fst_688_);
lean_dec(v_a_685_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_911_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v_fst_692_; lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_909_; 
v_fst_692_ = lean_ctor_get(v_snd_686_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v_snd_686_);
if (v_isSharedCheck_909_ == 0)
{
lean_object* v_unused_910_; 
v_unused_910_ = lean_ctor_get(v_snd_686_, 1);
lean_dec(v_unused_910_);
v___x_694_ = v_snd_686_;
v_isShared_695_ = v_isSharedCheck_909_;
goto v_resetjp_693_;
}
else
{
lean_inc(v_fst_692_);
lean_dec(v_snd_686_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_909_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v_fst_696_; lean_object* v_snd_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_908_; 
v_fst_696_ = lean_ctor_get(v_snd_687_, 0);
v_snd_697_ = lean_ctor_get(v_snd_687_, 1);
v_isSharedCheck_908_ = !lean_is_exclusive(v_snd_687_);
if (v_isSharedCheck_908_ == 0)
{
v___x_699_ = v_snd_687_;
v_isShared_700_ = v_isSharedCheck_908_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_snd_697_);
lean_inc(v_fst_696_);
lean_dec(v_snd_687_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_908_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v_fst_701_; lean_object* v_snd_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_907_; 
v_fst_701_ = lean_ctor_get(v_b_674_, 0);
v_snd_702_ = lean_ctor_get(v_b_674_, 1);
v_isSharedCheck_907_ = !lean_is_exclusive(v_b_674_);
if (v_isSharedCheck_907_ == 0)
{
v___x_704_ = v_b_674_;
v_isShared_705_ = v_isSharedCheck_907_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_snd_702_);
lean_inc(v_fst_701_);
lean_dec(v_b_674_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_907_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_706_; lean_object* v_e_708_; lean_object* v___y_709_; lean_object* v___y_710_; uint8_t v___x_894_; 
v___x_706_ = lean_unsigned_to_nat(1u);
v___x_894_ = lean_unbox(v_snd_702_);
lean_dec(v_snd_702_);
if (v___x_894_ == 0)
{
lean_object* v___x_895_; 
v___x_895_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem(v_fst_701_, v___y_675_, v___y_676_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; lean_object* v_a_897_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_a_896_);
v_a_897_ = lean_ctor_get(v___x_895_, 1);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_895_, 2);
v_e_708_ = v_a_896_;
v___y_709_ = v___y_675_;
v___y_710_ = v_a_897_;
goto v___jp_707_;
}
else
{
lean_object* v_a_898_; lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
lean_del_object(v___x_704_);
lean_del_object(v___x_699_);
lean_dec(v_snd_697_);
lean_dec(v_fst_696_);
lean_del_object(v___x_694_);
lean_dec(v_fst_692_);
lean_del_object(v___x_690_);
lean_dec(v_fst_688_);
v_a_898_ = lean_ctor_get(v___x_895_, 0);
v_a_899_ = lean_ctor_get(v___x_895_, 1);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_895_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_inc(v_a_898_);
lean_dec(v___x_895_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_898_);
lean_ctor_set(v_reuseFailAlloc_905_, 1, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
else
{
v_e_708_ = v_fst_701_;
v___y_709_ = v___y_675_;
v___y_710_ = v___y_676_;
goto v___jp_707_;
}
v___jp_707_:
{
uint8_t v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_711_ = 0;
v___x_712_ = ((lean_object*)(l_Lean_Elab_Do_elabDoIf___closed__1));
v___x_713_ = lean_name_eq(v_fst_688_, v___x_712_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
lean_del_object(v___x_699_);
lean_del_object(v___x_694_);
lean_del_object(v___x_690_);
v___x_714_ = l_Lean_Syntax_getHeadInfo(v_stx_670_);
v___x_715_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__0);
v___x_716_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_717_ = lean_box(2);
v___x_718_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__2));
v___x_719_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__4);
v___x_720_ = lean_array_push(v___x_719_, v_e_708_);
v___x_721_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_721_, 0, v___x_717_);
lean_ctor_set(v___x_721_, 1, v___x_716_);
lean_ctor_set(v___x_721_, 2, v___x_720_);
v___x_722_ = lean_unsigned_to_nat(6u);
v___x_723_ = lean_mk_empty_array_with_capacity(v___x_722_);
v___x_724_ = lean_array_push(v___x_723_, v_fst_692_);
v___x_725_ = lean_array_push(v___x_724_, v_fst_696_);
v___x_726_ = lean_array_push(v___x_725_, v___x_715_);
v___x_727_ = lean_array_push(v___x_726_, v_snd_697_);
v___x_728_ = lean_array_push(v___x_727_, v___x_718_);
v___x_729_ = lean_array_push(v___x_728_, v___x_721_);
v___x_730_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_730_, 0, v___x_714_);
lean_ctor_set(v___x_730_, 1, v_fst_688_);
lean_ctor_set(v___x_730_, 2, v___x_729_);
v___x_731_ = lean_box(v___x_711_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v___x_731_);
lean_ctor_set(v___x_704_, 0, v___x_730_);
v___x_733_ = v___x_704_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_730_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v___x_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
v_a_678_ = v___x_733_;
v_a_679_ = v___y_710_;
goto v___jp_677_;
}
}
else
{
lean_object* v___x_735_; uint8_t v___x_736_; 
lean_dec(v_fst_688_);
v___x_735_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__6));
lean_inc(v_fst_696_);
v___x_736_ = l_Lean_Syntax_isOfKind(v_fst_696_, v___x_735_);
if (v___x_736_ == 0)
{
lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_737_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__7));
lean_inc(v_fst_696_);
v___x_738_ = l_Lean_Syntax_isOfKind(v_fst_696_, v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; 
lean_dec(v_e_708_);
lean_del_object(v___x_699_);
lean_dec(v_snd_697_);
lean_dec(v_fst_696_);
lean_del_object(v___x_694_);
lean_dec(v_fst_692_);
lean_del_object(v___x_690_);
v___x_739_ = l_Lean_Macro_throwUnsupported___redArg(v___y_710_);
if (lean_obj_tag(v___x_739_) == 0)
{
lean_object* v_a_740_; lean_object* v_a_741_; lean_object* v___x_742_; lean_object* v___x_744_; 
v_a_740_ = lean_ctor_get(v___x_739_, 0);
lean_inc(v_a_740_);
v_a_741_ = lean_ctor_get(v___x_739_, 1);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_739_, 2);
v___x_742_ = lean_box(v___x_711_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v___x_742_);
lean_ctor_set(v___x_704_, 0, v_a_740_);
v___x_744_ = v___x_704_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_740_);
lean_ctor_set(v_reuseFailAlloc_745_, 1, v___x_742_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
v_a_678_ = v___x_744_;
v_a_679_ = v_a_741_;
goto v___jp_677_;
}
}
else
{
lean_object* v_a_746_; lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_del_object(v___x_704_);
v_a_746_ = lean_ctor_get(v___x_739_, 0);
v_a_747_ = lean_ctor_get(v___x_739_, 1);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_739_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_739_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_inc(v_a_746_);
lean_dec(v___x_739_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_746_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
else
{
lean_object* v_ref_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_760_; 
v_ref_755_ = lean_ctor_get(v___y_709_, 5);
v___x_756_ = l_Lean_SourceInfo_fromRef(v_ref_755_, v___x_736_);
v___x_757_ = l_Lean_SourceInfo_fromRef(v_fst_692_, v_eIsSeq_683_);
lean_dec(v_fst_692_);
v___x_758_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__2));
if (v_isShared_700_ == 0)
{
lean_ctor_set_tag(v___x_699_, 2);
lean_ctor_set(v___x_699_, 1, v___x_758_);
lean_ctor_set(v___x_699_, 0, v___x_757_);
v___x_760_ = v___x_699_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_757_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v___x_758_);
v___x_760_ = v_reuseFailAlloc_778_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_761_; lean_object* v___x_763_; 
v___x_761_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__3));
lean_inc(v___x_756_);
if (v_isShared_695_ == 0)
{
lean_ctor_set_tag(v___x_694_, 2);
lean_ctor_set(v___x_694_, 1, v___x_761_);
lean_ctor_set(v___x_694_, 0, v___x_756_);
v___x_763_ = v___x_694_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_756_);
lean_ctor_set(v_reuseFailAlloc_777_, 1, v___x_761_);
v___x_763_ = v_reuseFailAlloc_777_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_769_; 
v___x_764_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_765_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6);
lean_inc_n(v___x_756_, 2);
v___x_766_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_766_, 0, v___x_756_);
lean_ctor_set(v___x_766_, 1, v___x_764_);
lean_ctor_set(v___x_766_, 2, v___x_765_);
v___x_767_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__4));
if (v_isShared_691_ == 0)
{
lean_ctor_set_tag(v___x_690_, 2);
lean_ctor_set(v___x_690_, 1, v___x_767_);
lean_ctor_set(v___x_690_, 0, v___x_756_);
v___x_769_ = v___x_690_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_756_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v___x_767_);
v___x_769_ = v_reuseFailAlloc_776_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_774_; 
lean_inc(v___x_756_);
v___x_770_ = l_Lean_Syntax_node2(v___x_756_, v___x_764_, v___x_769_, v_e_708_);
v___x_771_ = l_Lean_Syntax_node6(v___x_756_, v___x_712_, v___x_760_, v_fst_696_, v___x_763_, v_snd_697_, v___x_766_, v___x_770_);
v___x_772_ = lean_box(v___x_711_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v___x_772_);
lean_ctor_set(v___x_704_, 0, v___x_771_);
v___x_774_ = v___x_704_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_771_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v___x_772_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
v_a_678_ = v___x_774_;
v_a_679_ = v___y_710_;
goto v___jp_677_;
}
}
}
}
}
}
else
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; uint8_t v___x_783_; 
lean_dec(v_fst_692_);
v___x_779_ = l_Lean_Syntax_getArg(v_fst_696_, v___x_706_);
v___x_780_ = lean_unsigned_to_nat(2u);
v___x_781_ = l_Lean_Syntax_getArg(v_fst_696_, v___x_780_);
lean_dec(v_fst_696_);
v___x_782_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__9));
lean_inc(v___x_781_);
v___x_783_ = l_Lean_Syntax_isOfKind(v___x_781_, v___x_782_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; uint8_t v___x_785_; 
v___x_784_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__11));
lean_inc(v___x_781_);
v___x_785_ = l_Lean_Syntax_isOfKind(v___x_781_, v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; 
lean_dec(v___x_781_);
lean_dec(v___x_779_);
lean_dec(v_e_708_);
lean_del_object(v___x_699_);
lean_dec(v_snd_697_);
lean_del_object(v___x_694_);
lean_del_object(v___x_690_);
v___x_786_ = l_Lean_Macro_throwUnsupported___redArg(v___y_710_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_787_; lean_object* v_a_788_; lean_object* v___x_789_; lean_object* v___x_791_; 
v_a_787_ = lean_ctor_get(v___x_786_, 0);
lean_inc(v_a_787_);
v_a_788_ = lean_ctor_get(v___x_786_, 1);
lean_inc(v_a_788_);
lean_dec_ref_known(v___x_786_, 2);
v___x_789_ = lean_box(v___x_711_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v___x_789_);
lean_ctor_set(v___x_704_, 0, v_a_787_);
v___x_791_ = v___x_704_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_787_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v___x_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
v_a_678_ = v___x_791_;
v_a_679_ = v_a_788_;
goto v___jp_677_;
}
}
else
{
lean_object* v_a_793_; lean_object* v_a_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_801_; 
lean_del_object(v___x_704_);
v_a_793_ = lean_ctor_get(v___x_786_, 0);
v_a_794_ = lean_ctor_get(v___x_786_, 1);
v_isSharedCheck_801_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_801_ == 0)
{
v___x_796_ = v___x_786_;
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_a_794_);
lean_inc(v_a_793_);
lean_dec(v___x_786_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_801_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v___x_799_; 
if (v_isShared_797_ == 0)
{
v___x_799_ = v___x_796_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v_a_793_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v_a_794_);
v___x_799_ = v_reuseFailAlloc_800_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
return v___x_799_;
}
}
}
}
else
{
lean_object* v_ref_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_808_; 
v_ref_802_ = lean_ctor_get(v___y_709_, 5);
v___x_803_ = l_Lean_Syntax_getArg(v___x_781_, v___x_706_);
lean_dec(v___x_781_);
v___x_804_ = l_Lean_SourceInfo_fromRef(v_ref_802_, v___x_783_);
v___x_805_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__13));
v___x_806_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__14));
lean_inc(v___x_804_);
if (v_isShared_700_ == 0)
{
lean_ctor_set_tag(v___x_699_, 2);
lean_ctor_set(v___x_699_, 1, v___x_806_);
lean_ctor_set(v___x_699_, 0, v___x_804_);
v___x_808_ = v___x_699_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v___x_804_);
lean_ctor_set(v_reuseFailAlloc_850_, 1, v___x_806_);
v___x_808_ = v_reuseFailAlloc_850_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_816_; 
v___x_809_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_810_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6);
lean_inc_n(v___x_804_, 2);
v___x_811_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_811_, 0, v___x_804_);
lean_ctor_set(v___x_811_, 1, v___x_809_);
lean_ctor_set(v___x_811_, 2, v___x_810_);
v___x_812_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__16));
v___x_813_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__18));
v___x_814_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__19));
if (v_isShared_695_ == 0)
{
lean_ctor_set_tag(v___x_694_, 2);
lean_ctor_set(v___x_694_, 1, v___x_814_);
lean_ctor_set(v___x_694_, 0, v___x_804_);
v___x_816_ = v___x_694_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_804_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v___x_814_);
v___x_816_ = v_reuseFailAlloc_849_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_824_; 
v___x_817_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__21));
lean_inc_n(v___x_804_, 5);
v___x_818_ = l_Lean_Syntax_node1(v___x_804_, v___x_817_, v___x_803_);
v___x_819_ = l_Lean_Syntax_node2(v___x_804_, v___x_813_, v___x_816_, v___x_818_);
lean_inc_ref(v___x_811_);
v___x_820_ = l_Lean_Syntax_node2(v___x_804_, v___x_812_, v___x_811_, v___x_819_);
v___x_821_ = l_Lean_Syntax_node1(v___x_804_, v___x_809_, v___x_820_);
v___x_822_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__22));
if (v_isShared_691_ == 0)
{
lean_ctor_set_tag(v___x_690_, 2);
lean_ctor_set(v___x_690_, 1, v___x_822_);
lean_ctor_set(v___x_690_, 0, v___x_804_);
v___x_824_ = v___x_690_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_804_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v___x_822_);
v___x_824_ = v_reuseFailAlloc_848_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_846_; 
v___x_825_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__24));
v___x_826_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__26));
v___x_827_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__27));
lean_inc_n(v___x_804_, 12);
v___x_828_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_804_);
lean_ctor_set(v___x_828_, 1, v___x_827_);
v___x_829_ = l_Lean_Syntax_node1(v___x_804_, v___x_809_, v___x_779_);
v___x_830_ = l_Lean_Syntax_node1(v___x_804_, v___x_809_, v___x_829_);
v___x_831_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__28));
v___x_832_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_832_, 0, v___x_804_);
lean_ctor_set(v___x_832_, 1, v___x_831_);
lean_inc_ref(v___x_832_);
lean_inc_ref(v___x_828_);
v___x_833_ = l_Lean_Syntax_node4(v___x_804_, v___x_826_, v___x_828_, v___x_830_, v___x_832_, v_snd_697_);
v___x_834_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4));
v___x_835_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__12));
v___x_836_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_804_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = l_Lean_Syntax_node1(v___x_804_, v___x_834_, v___x_836_);
v___x_838_ = l_Lean_Syntax_node1(v___x_804_, v___x_809_, v___x_837_);
v___x_839_ = l_Lean_Syntax_node1(v___x_804_, v___x_809_, v___x_838_);
v___x_840_ = l_Lean_Syntax_node4(v___x_804_, v___x_826_, v___x_828_, v___x_839_, v___x_832_, v_e_708_);
v___x_841_ = l_Lean_Syntax_node2(v___x_804_, v___x_809_, v___x_833_, v___x_840_);
v___x_842_ = l_Lean_Syntax_node1(v___x_804_, v___x_825_, v___x_841_);
lean_inc_ref_n(v___x_811_, 2);
v___x_843_ = l_Lean_Syntax_node7(v___x_804_, v___x_805_, v___x_808_, v___x_811_, v___x_811_, v___x_811_, v___x_821_, v___x_824_, v___x_842_);
v___x_844_ = lean_box(v___x_711_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v___x_844_);
lean_ctor_set(v___x_704_, 0, v___x_843_);
v___x_846_ = v___x_704_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_843_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v___x_844_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
v_a_678_ = v___x_846_;
v_a_679_ = v___y_710_;
goto v___jp_677_;
}
}
}
}
}
}
else
{
lean_object* v_ref_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_857_; 
v_ref_851_ = lean_ctor_get(v___y_709_, 5);
v___x_852_ = l_Lean_Syntax_getArg(v___x_781_, v___x_706_);
lean_dec(v___x_781_);
v___x_853_ = l_Lean_SourceInfo_fromRef(v_ref_851_, v___x_711_);
v___x_854_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__13));
v___x_855_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__14));
lean_inc(v___x_853_);
if (v_isShared_700_ == 0)
{
lean_ctor_set_tag(v___x_699_, 2);
lean_ctor_set(v___x_699_, 1, v___x_855_);
lean_ctor_set(v___x_699_, 0, v___x_853_);
v___x_857_ = v___x_699_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v___x_855_);
v___x_857_ = v_reuseFailAlloc_893_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_866_; 
v___x_858_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_859_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6);
lean_inc_n(v___x_853_, 4);
v___x_860_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_860_, 0, v___x_853_);
lean_ctor_set(v___x_860_, 1, v___x_858_);
lean_ctor_set(v___x_860_, 2, v___x_859_);
v___x_861_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__16));
lean_inc_ref(v___x_860_);
v___x_862_ = l_Lean_Syntax_node2(v___x_853_, v___x_861_, v___x_860_, v___x_852_);
v___x_863_ = l_Lean_Syntax_node1(v___x_853_, v___x_858_, v___x_862_);
v___x_864_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__22));
if (v_isShared_695_ == 0)
{
lean_ctor_set_tag(v___x_694_, 2);
lean_ctor_set(v___x_694_, 1, v___x_864_);
lean_ctor_set(v___x_694_, 0, v___x_853_);
v___x_866_ = v___x_694_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v___x_864_);
v___x_866_ = v_reuseFailAlloc_892_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_871_; 
v___x_867_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__24));
v___x_868_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__26));
v___x_869_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__27));
lean_inc(v___x_853_);
if (v_isShared_691_ == 0)
{
lean_ctor_set_tag(v___x_690_, 2);
lean_ctor_set(v___x_690_, 1, v___x_869_);
lean_ctor_set(v___x_690_, 0, v___x_853_);
v___x_871_ = v___x_690_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v___x_869_);
v___x_871_ = v_reuseFailAlloc_891_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_889_; 
lean_inc_n(v___x_853_, 11);
v___x_872_ = l_Lean_Syntax_node1(v___x_853_, v___x_858_, v___x_779_);
v___x_873_ = l_Lean_Syntax_node1(v___x_853_, v___x_858_, v___x_872_);
v___x_874_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__28));
v___x_875_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_875_, 0, v___x_853_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
lean_inc_ref(v___x_875_);
lean_inc_ref(v___x_871_);
v___x_876_ = l_Lean_Syntax_node4(v___x_853_, v___x_868_, v___x_871_, v___x_873_, v___x_875_, v_snd_697_);
v___x_877_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4));
v___x_878_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__12));
v___x_879_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_853_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = l_Lean_Syntax_node1(v___x_853_, v___x_877_, v___x_879_);
v___x_881_ = l_Lean_Syntax_node1(v___x_853_, v___x_858_, v___x_880_);
v___x_882_ = l_Lean_Syntax_node1(v___x_853_, v___x_858_, v___x_881_);
v___x_883_ = l_Lean_Syntax_node4(v___x_853_, v___x_868_, v___x_871_, v___x_882_, v___x_875_, v_e_708_);
v___x_884_ = l_Lean_Syntax_node2(v___x_853_, v___x_858_, v___x_876_, v___x_883_);
v___x_885_ = l_Lean_Syntax_node1(v___x_853_, v___x_867_, v___x_884_);
lean_inc_ref_n(v___x_860_, 2);
v___x_886_ = l_Lean_Syntax_node7(v___x_853_, v___x_854_, v___x_857_, v___x_860_, v___x_860_, v___x_860_, v___x_863_, v___x_866_, v___x_885_);
v___x_887_ = lean_box(v___x_711_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 1, v___x_887_);
lean_ctor_set(v___x_704_, 0, v___x_886_);
v___x_889_ = v___x_704_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_890_, 1, v___x_887_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
v_a_678_ = v___x_889_;
v_a_679_ = v___y_710_;
goto v___jp_677_;
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
}
v___jp_677_:
{
size_t v___x_680_; size_t v___x_681_; 
v___x_680_ = ((size_t)1ULL);
v___x_681_ = lean_usize_add(v_i_673_, v___x_680_);
v_i_673_ = v___x_681_;
v_b_674_ = v_a_678_;
v___y_676_ = v_a_679_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___boxed(lean_object* v_stx_913_, lean_object* v_as_914_, lean_object* v_sz_915_, lean_object* v_i_916_, lean_object* v_b_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
size_t v_sz_boxed_920_; size_t v_i_boxed_921_; lean_object* v_res_922_; 
v_sz_boxed_920_ = lean_unbox_usize(v_sz_915_);
lean_dec(v_sz_915_);
v_i_boxed_921_ = lean_unbox_usize(v_i_916_);
lean_dec(v_i_916_);
v_res_922_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1(v_stx_913_, v_as_914_, v_sz_boxed_920_, v_i_boxed_921_, v_b_917_, v___y_918_, v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec_ref(v_as_914_);
lean_dec(v_stx_913_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain(lean_object* v_stx_932_, lean_object* v_a_933_, lean_object* v_a_934_){
_start:
{
size_t v___y_936_; lean_object* v___y_937_; lean_object* v_e_938_; lean_object* v___y_939_; lean_object* v___y_940_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v_elseIfs_968_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___x_1008_; lean_object* v___x_1009_; uint8_t v___x_1010_; 
v___x_966_ = lean_unsigned_to_nat(4u);
v___x_967_ = l_Lean_Syntax_getArg(v_stx_932_, v___x_966_);
v_elseIfs_968_ = l_Lean_Syntax_getArgs(v___x_967_);
lean_dec(v___x_967_);
v___x_1008_ = lean_array_get_size(v_elseIfs_968_);
v___x_1009_ = lean_unsigned_to_nat(0u);
v___x_1010_ = lean_nat_dec_eq(v___x_1008_, v___x_1009_);
if (v___x_1010_ == 0)
{
v___y_970_ = v_a_933_;
v___y_971_ = v_a_934_;
goto v___jp_969_;
}
else
{
lean_object* v___x_1011_; lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1011_ = lean_unsigned_to_nat(5u);
v___x_1012_ = l_Lean_Syntax_getArg(v_stx_932_, v___x_1011_);
v___x_1013_ = l_Lean_Syntax_isNone(v___x_1012_);
lean_dec(v___x_1012_);
if (v___x_1013_ == 0)
{
lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; uint8_t v___x_1017_; 
v___x_1014_ = lean_unsigned_to_nat(1u);
v___x_1015_ = l_Lean_Syntax_getArg(v_stx_932_, v___x_1014_);
v___x_1016_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__6));
v___x_1017_ = l_Lean_Syntax_isOfKind(v___x_1015_, v___x_1016_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; 
v___x_1018_ = l_Lean_Macro_throwUnsupported___redArg(v_a_934_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 1);
lean_inc(v_a_1019_);
lean_dec_ref_known(v___x_1018_, 2);
v___y_970_ = v_a_933_;
v___y_971_ = v_a_1019_;
goto v___jp_969_;
}
else
{
lean_object* v_a_1020_; lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1028_; 
lean_dec_ref(v_elseIfs_968_);
lean_dec(v_stx_932_);
v_a_1020_ = lean_ctor_get(v___x_1018_, 0);
v_a_1021_ = lean_ctor_get(v___x_1018_, 1);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1023_ = v___x_1018_;
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_inc(v_a_1020_);
lean_dec(v___x_1018_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_a_1020_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_a_1021_);
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
else
{
v___y_970_ = v_a_933_;
v___y_971_ = v_a_934_;
goto v___jp_969_;
}
}
else
{
v___y_970_ = v_a_933_;
v___y_971_ = v_a_934_;
goto v___jp_969_;
}
}
v___jp_935_:
{
uint8_t v_eIsSeq_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; size_t v_sz_945_; lean_object* v___x_946_; 
v_eIsSeq_941_ = 1;
v___x_942_ = l_Array_reverse___redArg(v___y_937_);
v___x_943_ = lean_box(v_eIsSeq_941_);
v___x_944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_944_, 0, v_e_938_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
v_sz_945_ = lean_array_size(v___x_942_);
v___x_946_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1(v_stx_932_, v___x_942_, v_sz_945_, v___y_936_, v___x_944_, v___y_939_, v___y_940_);
lean_dec_ref(v___x_942_);
lean_dec(v_stx_932_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_956_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
v_a_948_ = lean_ctor_get(v___x_946_, 1);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_956_ == 0)
{
v___x_950_ = v___x_946_;
v_isShared_951_ = v_isSharedCheck_956_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_inc(v_a_947_);
lean_dec(v___x_946_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_956_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v_fst_952_; lean_object* v___x_954_; 
v_fst_952_ = lean_ctor_get(v_a_947_, 0);
lean_inc(v_fst_952_);
lean_dec(v_a_947_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 0, v_fst_952_);
v___x_954_ = v___x_950_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_fst_952_);
lean_ctor_set(v_reuseFailAlloc_955_, 1, v_a_948_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
else
{
lean_object* v_a_957_; lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
v_a_957_ = lean_ctor_get(v___x_946_, 0);
v_a_958_ = lean_ctor_get(v___x_946_, 1);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_946_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_inc(v_a_957_);
lean_dec(v___x_946_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_957_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
v___jp_969_:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; size_t v_sz_984_; size_t v___x_985_; lean_object* v___x_986_; lean_object* v_branches_987_; lean_object* v___x_988_; lean_object* v___x_989_; uint8_t v___x_990_; 
lean_inc(v_stx_932_);
v___x_972_ = l_Lean_Syntax_getKind(v_stx_932_);
v___x_973_ = lean_unsigned_to_nat(0u);
v___x_974_ = l_Lean_Syntax_getArg(v_stx_932_, v___x_973_);
v___x_975_ = lean_unsigned_to_nat(1u);
v___x_976_ = l_Lean_Syntax_getArg(v_stx_932_, v___x_975_);
v___x_977_ = lean_unsigned_to_nat(3u);
v___x_978_ = l_Lean_Syntax_getArg(v_stx_932_, v___x_977_);
v___x_979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_979_, 0, v___x_976_);
lean_ctor_set(v___x_979_, 1, v___x_978_);
lean_inc(v___x_974_);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_974_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_972_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___x_982_ = lean_mk_empty_array_with_capacity(v___x_975_);
v___x_983_ = lean_array_push(v___x_982_, v___x_981_);
v_sz_984_ = lean_array_size(v_elseIfs_968_);
v___x_985_ = ((size_t)0ULL);
v___x_986_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0(v_sz_984_, v___x_985_, v_elseIfs_968_);
v_branches_987_ = l_Array_append___redArg(v___x_983_, v___x_986_);
lean_dec_ref(v___x_986_);
v___x_988_ = lean_unsigned_to_nat(5u);
v___x_989_ = l_Lean_Syntax_getArg(v_stx_932_, v___x_988_);
v___x_990_ = l_Lean_Syntax_isNone(v___x_989_);
if (v___x_990_ == 0)
{
lean_object* v___x_991_; 
lean_dec(v___x_974_);
v___x_991_ = l_Lean_Syntax_getArg(v___x_989_, v___x_975_);
lean_dec(v___x_989_);
v___y_936_ = v___x_985_;
v___y_937_ = v_branches_987_;
v_e_938_ = v___x_991_;
v___y_939_ = v___y_970_;
v___y_940_ = v___y_971_;
goto v___jp_935_;
}
else
{
lean_object* v_ref_992_; uint8_t v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
lean_dec(v___x_989_);
v_ref_992_ = lean_ctor_get(v___y_970_, 5);
v___x_993_ = 0;
v___x_994_ = l_Lean_SourceInfo_fromRef(v_ref_992_, v___x_993_);
v___x_995_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__1));
v___x_996_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_997_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__5));
v___x_998_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__2));
v___x_999_ = l_Lean_SourceInfo_fromRef(v___x_974_, v___x_990_);
lean_dec(v___x_974_);
v___x_1000_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__3));
v___x_1001_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___x_999_);
lean_ctor_set(v___x_1001_, 1, v___x_1000_);
lean_inc_n(v___x_994_, 4);
v___x_1002_ = l_Lean_Syntax_node1(v___x_994_, v___x_998_, v___x_1001_);
v___x_1003_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6);
v___x_1004_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1004_, 0, v___x_994_);
lean_ctor_set(v___x_1004_, 1, v___x_996_);
lean_ctor_set(v___x_1004_, 2, v___x_1003_);
v___x_1005_ = l_Lean_Syntax_node2(v___x_994_, v___x_997_, v___x_1002_, v___x_1004_);
v___x_1006_ = l_Lean_Syntax_node1(v___x_994_, v___x_996_, v___x_1005_);
v___x_1007_ = l_Lean_Syntax_node1(v___x_994_, v___x_995_, v___x_1006_);
v___y_936_ = v___x_985_;
v___y_937_ = v_branches_987_;
v_e_938_ = v___x_1007_;
v___y_939_ = v___y_970_;
v___y_940_ = v___y_971_;
goto v___jp_935_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___boxed(lean_object* v_stx_1029_, lean_object* v_a_1030_, lean_object* v_a_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain(v_stx_1029_, v_a_1030_, v_a_1031_);
lean_dec_ref(v_a_1030_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoIf(lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain(v_a_1033_, v_a_1034_, v_a_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoIf___boxed(lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lean_Elab_Do_expandDoIf(v_a_1037_, v_a_1038_, v_a_1039_);
lean_dec_ref(v_a_1038_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1(){
_start:
{
lean_object* v___f_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___f_1048_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___boxed), 3, 0);
v___x_1049_ = l_Lean_Elab_macroAttribute;
v___x_1050_ = ((lean_object*)(l_Lean_Elab_Do_elabDoIf___closed__1));
v___x_1051_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1));
v___x_1052_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1049_, v___x_1050_, v___x_1051_, v___f_1048_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___boxed(lean_object* v_a_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1();
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoUIf(lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain(v_a_1055_, v_a_1056_, v_a_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoUIf___boxed(lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lean_Elab_Do_expandDoUIf(v_a_1059_, v_a_1060_, v_a_1061_);
lean_dec_ref(v_a_1060_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1(){
_start:
{
lean_object* v___f_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___f_1070_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___boxed), 3, 0);
v___x_1071_ = l_Lean_Elab_macroAttribute;
v___x_1072_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5));
v___x_1073_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___closed__1));
v___x_1074_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1071_, v___x_1072_, v___x_1073_, v___f_1070_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1___boxed(lean_object* v_a_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1();
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoBIf(lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_){
_start:
{
lean_object* v___x_1080_; 
v___x_1080_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain(v_a_1077_, v_a_1078_, v_a_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoBIf___boxed(lean_object* v_a_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lean_Elab_Do_expandDoBIf(v_a_1081_, v_a_1082_, v_a_1083_);
lean_dec_ref(v_a_1082_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1(){
_start:
{
lean_object* v___f_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___f_1092_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___boxed), 3, 0);
v___x_1093_ = l_Lean_Elab_macroAttribute;
v___x_1094_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3));
v___x_1095_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___closed__1));
v___x_1096_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1093_, v___x_1094_, v___x_1095_, v___f_1092_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1___boxed(lean_object* v_a_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1();
return v_res_1098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0___redArg(){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0);
v___x_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
return v___x_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0___redArg___boxed(lean_object* v___y_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0___redArg();
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0(lean_object* v_00_u03b1_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0___redArg();
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0___boxed(lean_object* v_00_u03b1_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0(v_00_u03b1_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
lean_dec(v___y_1117_);
lean_dec_ref(v___y_1116_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond(lean_object* v_stx_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_){
_start:
{
lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; uint8_t v___x_1170_; 
v___x_1165_ = lean_unsigned_to_nat(4u);
v___x_1166_ = l_Lean_Syntax_getArg(v_stx_1122_, v___x_1165_);
v___x_1167_ = l_Lean_Syntax_getArgs(v___x_1166_);
lean_dec(v___x_1166_);
v___x_1168_ = lean_array_get_size(v___x_1167_);
lean_dec_ref(v___x_1167_);
v___x_1169_ = lean_unsigned_to_nat(0u);
v___x_1170_ = lean_nat_dec_eq(v___x_1168_, v___x_1169_);
if (v___x_1170_ == 0)
{
goto v___jp_1155_;
}
else
{
lean_object* v___x_1171_; lean_object* v___x_1172_; uint8_t v___x_1173_; 
v___x_1171_ = lean_unsigned_to_nat(5u);
v___x_1172_ = l_Lean_Syntax_getArg(v_stx_1122_, v___x_1171_);
v___x_1173_ = l_Lean_Syntax_isNone(v___x_1172_);
lean_dec(v___x_1172_);
if (v___x_1173_ == 0)
{
v___y_1131_ = v_a_1123_;
v___y_1132_ = v_a_1124_;
v___y_1133_ = v_a_1125_;
v___y_1134_ = v_a_1126_;
v___y_1135_ = v_a_1127_;
v___y_1136_ = v_a_1128_;
goto v___jp_1130_;
}
else
{
goto v___jp_1155_;
}
}
v___jp_1130_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1137_ = lean_unsigned_to_nat(3u);
v___x_1138_ = l_Lean_Syntax_getArg(v_stx_1122_, v___x_1137_);
v___x_1139_ = l_Lean_Elab_Do_inferControlInfoSeq(v___x_1138_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v___x_1139_, 1);
v___x_1141_ = lean_unsigned_to_nat(5u);
v___x_1142_ = l_Lean_Syntax_getArg(v_stx_1122_, v___x_1141_);
v___x_1143_ = lean_unsigned_to_nat(1u);
v___x_1144_ = l_Lean_Syntax_getArg(v___x_1142_, v___x_1143_);
lean_dec(v___x_1142_);
v___x_1145_ = l_Lean_Elab_Do_inferControlInfoSeq(v___x_1144_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1154_; 
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1154_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1148_ = v___x_1145_;
v_isShared_1149_ = v_isSharedCheck_1154_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1145_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1154_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1150_; lean_object* v___x_1152_; 
v___x_1150_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_1140_, v_a_1146_);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 0, v___x_1150_);
v___x_1152_ = v___x_1148_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1150_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
else
{
lean_dec(v_a_1140_);
return v___x_1145_;
}
}
else
{
return v___x_1139_;
}
}
v___jp_1155_:
{
lean_object* v___x_1156_; lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
v___x_1156_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond_spec__0___redArg();
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v___x_1156_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_a_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond___boxed(lean_object* v_stx_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond(v_stx_1174_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_, v_a_1180_);
lean_dec(v_a_1180_);
lean_dec_ref(v_a_1179_);
lean_dec(v_a_1178_);
lean_dec_ref(v_a_1177_);
lean_dec(v_a_1176_);
lean_dec_ref(v_a_1175_);
lean_dec(v_stx_1174_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoUIf(lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond(v_a_1183_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoUIf___boxed(lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_Elab_Do_controlInfoDoUIf(v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_, v_a_1197_, v_a_1198_);
lean_dec(v_a_1198_);
lean_dec_ref(v_a_1197_);
lean_dec(v_a_1196_);
lean_dec_ref(v_a_1195_);
lean_dec(v_a_1194_);
lean_dec_ref(v_a_1193_);
lean_dec(v_a_1192_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1(){
_start:
{
lean_object* v___f_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___f_1208_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond___boxed), 8, 0);
v___x_1209_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_1210_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5));
v___x_1211_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___closed__1));
v___x_1212_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1209_, v___x_1210_, v___x_1211_, v___f_1208_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1___boxed(lean_object* v_a_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1();
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoBIf(lean_object* v_a_1215_, lean_object* v_a_1216_, lean_object* v_a_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond(v_a_1215_, v_a_1216_, v_a_1217_, v_a_1218_, v_a_1219_, v_a_1220_, v_a_1221_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoBIf___boxed(lean_object* v_a_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lean_Elab_Do_controlInfoDoBIf(v_a_1224_, v_a_1225_, v_a_1226_, v_a_1227_, v_a_1228_, v_a_1229_, v_a_1230_);
lean_dec(v_a_1230_);
lean_dec_ref(v_a_1229_);
lean_dec(v_a_1228_);
lean_dec_ref(v_a_1227_);
lean_dec(v_a_1226_);
lean_dec_ref(v_a_1225_);
lean_dec(v_a_1224_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1(){
_start:
{
lean_object* v___f_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___f_1240_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoCond___boxed), 8, 0);
v___x_1241_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_1242_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3));
v___x_1243_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___closed__1));
v___x_1244_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1241_, v___x_1242_, v___x_1243_, v___f_1240_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1___boxed(lean_object* v_a_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1();
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__0(lean_object* v_mkTerm_1247_, lean_object* v_then___1248_, uint8_t v___x_1249_, lean_object* v_else___1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_doBlockResultType_1259_; lean_object* v___x_1260_; 
v_doBlockResultType_1259_ = lean_ctor_get(v___y_1251_, 3);
lean_inc_ref(v_doBlockResultType_1259_);
v___x_1260_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_1259_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1280_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1263_ = v___x_1260_;
v_isShared_1264_ = v_isSharedCheck_1280_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1260_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1280_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1265_; 
lean_inc(v___y_1257_);
lean_inc_ref(v___y_1256_);
lean_inc(v___y_1255_);
lean_inc_ref(v___y_1254_);
lean_inc(v___y_1253_);
lean_inc_ref(v___y_1252_);
v___x_1265_ = lean_apply_9(v_mkTerm_1247_, v_then___1248_, v_else___1250_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, lean_box(0));
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1266_);
lean_dec_ref_known(v___x_1265_, 1);
if (v_isShared_1264_ == 0)
{
lean_ctor_set_tag(v___x_1263_, 1);
v___x_1268_ = v___x_1263_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1261_);
v___x_1268_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = lean_box(0);
v___x_1270_ = l_Lean_Elab_Term_elabTermEnsuringType(v_a_1266_, v___x_1268_, v___x_1249_, v___x_1249_, v___x_1269_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
return v___x_1270_;
}
}
else
{
lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1279_; 
lean_del_object(v___x_1263_);
lean_dec(v_a_1261_);
v_a_1272_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1274_ = v___x_1265_;
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_dec(v___x_1265_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1279_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___x_1277_; 
if (v_isShared_1275_ == 0)
{
v___x_1277_ = v___x_1274_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_a_1272_);
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
}
else
{
lean_dec(v_else___1250_);
lean_dec(v_then___1248_);
lean_dec_ref(v_mkTerm_1247_);
return v___x_1260_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__0___boxed(lean_object* v_mkTerm_1281_, lean_object* v_then___1282_, lean_object* v___x_1283_, lean_object* v_else___1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_){
_start:
{
uint8_t v___x_1721__boxed_1293_; lean_object* v_res_1294_; 
v___x_1721__boxed_1293_ = lean_unbox(v___x_1283_);
v_res_1294_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__0(v_mkTerm_1281_, v_then___1282_, v___x_1721__boxed_1293_, v_else___1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_);
lean_dec(v___y_1291_);
lean_dec_ref(v___y_1290_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec_ref(v___y_1285_);
return v_res_1294_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1296_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___closed__0));
v___x_1297_ = l_Lean_stringToMessageData(v___x_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1(lean_object* v_mkTerm_1298_, uint8_t v___x_1299_, lean_object* v___x_1300_, lean_object* v___x_1301_, lean_object* v___x_1302_, lean_object* v_elseSeq_1303_, lean_object* v_dec_1304_, lean_object* v_then___1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v___x_1314_; lean_object* v___f_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1314_ = lean_box(v___x_1299_);
v___f_1315_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__0___boxed), 12, 3);
lean_closure_set(v___f_1315_, 0, v_mkTerm_1298_);
lean_closure_set(v___f_1315_, 1, v_then___1305_);
lean_closure_set(v___f_1315_, 2, v___x_1314_);
v___x_1316_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___closed__1, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___closed__1);
v___x_1317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1316_);
lean_ctor_set(v___x_1317_, 1, v___x_1300_);
v___x_1318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
lean_ctor_set(v___x_1318_, 1, v___x_1301_);
v___x_1319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
lean_ctor_set(v___x_1319_, 1, v___x_1302_);
v___x_1320_ = lean_box(v___x_1299_);
v___x_1321_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_1321_, 0, v_elseSeq_1303_);
lean_closure_set(v___x_1321_, 1, v_dec_1304_);
lean_closure_set(v___x_1321_, 2, v___x_1320_);
v___x_1322_ = lean_box(0);
v___x_1323_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_1319_, v___x_1321_, v___f_1315_, v___x_1322_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___boxed(lean_object* v_mkTerm_1324_, lean_object* v___x_1325_, lean_object* v___x_1326_, lean_object* v___x_1327_, lean_object* v___x_1328_, lean_object* v_elseSeq_1329_, lean_object* v_dec_1330_, lean_object* v_then___1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
uint8_t v___x_1797__boxed_1340_; lean_object* v_res_1341_; 
v___x_1797__boxed_1340_ = lean_unbox(v___x_1325_);
v_res_1341_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1(v_mkTerm_1324_, v___x_1797__boxed_1340_, v___x_1326_, v___x_1327_, v___x_1328_, v_elseSeq_1329_, v_dec_1330_, v_then___1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_);
lean_dec(v___y_1338_);
lean_dec_ref(v___y_1337_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec_ref(v___y_1332_);
return v_res_1341_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1343_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__0));
v___x_1344_ = l_Lean_stringToMessageData(v___x_1343_);
return v___x_1344_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1346_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__2));
v___x_1347_ = l_Lean_stringToMessageData(v___x_1346_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2(lean_object* v_kw_1348_, lean_object* v_cond_1349_, lean_object* v_mkTerm_1350_, lean_object* v_elseSeq_1351_, lean_object* v_thenSeq_1352_, lean_object* v_dec_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; uint8_t v___x_1369_; lean_object* v___x_1370_; lean_object* v___f_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1362_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__1, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__1);
v___x_1363_ = l_Lean_MessageData_ofSyntax(v_kw_1348_);
lean_inc_ref(v___x_1363_);
v___x_1364_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1362_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
v___x_1365_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__3, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___closed__3);
v___x_1366_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1364_);
lean_ctor_set(v___x_1366_, 1, v___x_1365_);
v___x_1367_ = l_Lean_MessageData_ofSyntax(v_cond_1349_);
lean_inc_ref(v___x_1367_);
v___x_1368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1366_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
v___x_1369_ = 1;
v___x_1370_ = lean_box(v___x_1369_);
lean_inc_ref(v_dec_1353_);
v___f_1371_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__1___boxed), 16, 7);
lean_closure_set(v___f_1371_, 0, v_mkTerm_1350_);
lean_closure_set(v___f_1371_, 1, v___x_1370_);
lean_closure_set(v___f_1371_, 2, v___x_1363_);
lean_closure_set(v___f_1371_, 3, v___x_1365_);
lean_closure_set(v___f_1371_, 4, v___x_1367_);
lean_closure_set(v___f_1371_, 5, v_elseSeq_1351_);
lean_closure_set(v___f_1371_, 6, v_dec_1353_);
v___x_1372_ = lean_box(v___x_1369_);
v___x_1373_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_1373_, 0, v_thenSeq_1352_);
lean_closure_set(v___x_1373_, 1, v_dec_1353_);
lean_closure_set(v___x_1373_, 2, v___x_1372_);
v___x_1374_ = lean_box(0);
v___x_1375_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_1368_, v___x_1373_, v___f_1371_, v___x_1374_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___boxed(lean_object* v_kw_1376_, lean_object* v_cond_1377_, lean_object* v_mkTerm_1378_, lean_object* v_elseSeq_1379_, lean_object* v_thenSeq_1380_, lean_object* v_dec_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_){
_start:
{
lean_object* v_res_1390_; 
v_res_1390_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2(v_kw_1376_, v_cond_1377_, v_mkTerm_1378_, v_elseSeq_1379_, v_thenSeq_1380_, v_dec_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
lean_dec(v___y_1388_);
lean_dec_ref(v___y_1387_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec_ref(v___y_1382_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore(lean_object* v_kw_1391_, lean_object* v_cond_1392_, lean_object* v_thenSeq_1393_, lean_object* v_elseSeq_1394_, lean_object* v_dec_1395_, lean_object* v_mkTerm_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v___f_1405_; lean_object* v___x_1406_; 
lean_inc(v_thenSeq_1393_);
lean_inc(v_elseSeq_1394_);
v___f_1405_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___lam__2___boxed), 14, 5);
lean_closure_set(v___f_1405_, 0, v_kw_1391_);
lean_closure_set(v___f_1405_, 1, v_cond_1392_);
lean_closure_set(v___f_1405_, 2, v_mkTerm_1396_);
lean_closure_set(v___f_1405_, 3, v_elseSeq_1394_);
lean_closure_set(v___f_1405_, 4, v_thenSeq_1393_);
v___x_1406_ = l_Lean_Elab_Do_inferControlInfoSeq(v_thenSeq_1393_, v_a_1398_, v_a_1399_, v_a_1400_, v_a_1401_, v_a_1402_, v_a_1403_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v_a_1407_; lean_object* v___x_1408_; 
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_a_1407_);
lean_dec_ref_known(v___x_1406_, 1);
v___x_1408_ = l_Lean_Elab_Do_inferControlInfoSeq(v_elseSeq_1394_, v_a_1398_, v_a_1399_, v_a_1400_, v_a_1401_, v_a_1402_, v_a_1403_);
if (lean_obj_tag(v___x_1408_) == 0)
{
lean_object* v_a_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v_a_1409_ = lean_ctor_get(v___x_1408_, 0);
lean_inc(v_a_1409_);
lean_dec_ref_known(v___x_1408_, 1);
v___x_1410_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_1407_, v_a_1409_);
v___x_1411_ = l_Lean_Elab_Do_DoElemCont_withDuplicableCont(v_dec_1395_, v___x_1410_, v___f_1405_, v_a_1397_, v_a_1398_, v_a_1399_, v_a_1400_, v_a_1401_, v_a_1402_, v_a_1403_);
return v___x_1411_;
}
else
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1419_; 
lean_dec(v_a_1407_);
lean_dec_ref(v___f_1405_);
lean_dec_ref(v_dec_1395_);
v_a_1412_ = lean_ctor_get(v___x_1408_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1414_ = v___x_1408_;
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1408_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1419_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1417_; 
if (v_isShared_1415_ == 0)
{
v___x_1417_ = v___x_1414_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v_a_1412_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
}
else
{
lean_object* v_a_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1427_; 
lean_dec_ref(v___f_1405_);
lean_dec_ref(v_dec_1395_);
lean_dec(v_elseSeq_1394_);
v_a_1420_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1422_ = v___x_1406_;
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_a_1420_);
lean_dec(v___x_1406_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1425_; 
if (v_isShared_1423_ == 0)
{
v___x_1425_ = v___x_1422_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_a_1420_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore___boxed(lean_object* v_kw_1428_, lean_object* v_cond_1429_, lean_object* v_thenSeq_1430_, lean_object* v_elseSeq_1431_, lean_object* v_dec_1432_, lean_object* v_mkTerm_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_){
_start:
{
lean_object* v_res_1442_; 
v_res_1442_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore(v_kw_1428_, v_cond_1429_, v_thenSeq_1430_, v_elseSeq_1431_, v_dec_1432_, v_mkTerm_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_, v_a_1438_, v_a_1439_, v_a_1440_);
lean_dec(v_a_1440_);
lean_dec_ref(v_a_1439_);
lean_dec(v_a_1438_);
lean_dec_ref(v_a_1437_);
lean_dec(v_a_1436_);
lean_dec_ref(v_a_1435_);
lean_dec_ref(v_a_1434_);
return v_res_1442_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCond(lean_object* v_stx_1443_, lean_object* v_dec_1444_, lean_object* v_mkTerm_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_){
_start:
{
lean_object* v___y_1455_; lean_object* v___y_1456_; lean_object* v___y_1457_; lean_object* v___y_1458_; lean_object* v___y_1459_; lean_object* v___y_1460_; lean_object* v___y_1461_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; uint8_t v___x_1487_; 
v___x_1482_ = lean_unsigned_to_nat(4u);
v___x_1483_ = l_Lean_Syntax_getArg(v_stx_1443_, v___x_1482_);
v___x_1484_ = l_Lean_Syntax_getArgs(v___x_1483_);
lean_dec(v___x_1483_);
v___x_1485_ = lean_array_get_size(v___x_1484_);
lean_dec_ref(v___x_1484_);
v___x_1486_ = lean_unsigned_to_nat(0u);
v___x_1487_ = lean_nat_dec_eq(v___x_1485_, v___x_1486_);
if (v___x_1487_ == 0)
{
lean_dec_ref(v_mkTerm_1445_);
lean_dec_ref(v_dec_1444_);
goto v___jp_1472_;
}
else
{
lean_object* v___x_1488_; lean_object* v___x_1489_; uint8_t v___x_1490_; 
v___x_1488_ = lean_unsigned_to_nat(5u);
v___x_1489_ = l_Lean_Syntax_getArg(v_stx_1443_, v___x_1488_);
v___x_1490_ = l_Lean_Syntax_isNone(v___x_1489_);
lean_dec(v___x_1489_);
if (v___x_1490_ == 0)
{
v___y_1455_ = v_a_1446_;
v___y_1456_ = v_a_1447_;
v___y_1457_ = v_a_1448_;
v___y_1458_ = v_a_1449_;
v___y_1459_ = v_a_1450_;
v___y_1460_ = v_a_1451_;
v___y_1461_ = v_a_1452_;
goto v___jp_1454_;
}
else
{
lean_dec_ref(v_mkTerm_1445_);
lean_dec_ref(v_dec_1444_);
goto v___jp_1472_;
}
}
v___jp_1454_:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1462_ = lean_unsigned_to_nat(0u);
v___x_1463_ = l_Lean_Syntax_getArg(v_stx_1443_, v___x_1462_);
v___x_1464_ = lean_unsigned_to_nat(1u);
v___x_1465_ = l_Lean_Syntax_getArg(v_stx_1443_, v___x_1464_);
v___x_1466_ = lean_unsigned_to_nat(3u);
v___x_1467_ = l_Lean_Syntax_getArg(v_stx_1443_, v___x_1466_);
v___x_1468_ = lean_unsigned_to_nat(5u);
v___x_1469_ = l_Lean_Syntax_getArg(v_stx_1443_, v___x_1468_);
v___x_1470_ = l_Lean_Syntax_getArg(v___x_1469_, v___x_1464_);
lean_dec(v___x_1469_);
v___x_1471_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore(v___x_1463_, v___x_1465_, v___x_1467_, v___x_1470_, v_dec_1444_, v_mkTerm_1445_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_);
return v___x_1471_;
}
v___jp_1472_:
{
lean_object* v___x_1473_; lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
v___x_1473_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___x_1473_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1473_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCond___boxed(lean_object* v_stx_1491_, lean_object* v_dec_1492_, lean_object* v_mkTerm_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCond(v_stx_1491_, v_dec_1492_, v_mkTerm_1493_, v_a_1494_, v_a_1495_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_, v_a_1500_);
lean_dec(v_a_1500_);
lean_dec_ref(v_a_1499_);
lean_dec(v_a_1498_);
lean_dec_ref(v_a_1497_);
lean_dec(v_a_1496_);
lean_dec_ref(v_a_1495_);
lean_dec_ref(v_a_1494_);
lean_dec(v_stx_1491_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_doIfPropHyp_x3f(lean_object* v_prop_1503_){
_start:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; uint8_t v___x_1506_; 
v___x_1504_ = lean_unsigned_to_nat(0u);
v___x_1505_ = l_Lean_Syntax_getArg(v_prop_1503_, v___x_1504_);
v___x_1506_ = l_Lean_Syntax_isNone(v___x_1505_);
if (v___x_1506_ == 0)
{
lean_object* v_h_1507_; lean_object* v___x_1508_; uint8_t v___x_1509_; 
v_h_1507_ = l_Lean_Syntax_getArg(v___x_1505_, v___x_1504_);
lean_dec(v___x_1505_);
v___x_1508_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__10));
lean_inc(v_h_1507_);
v___x_1509_ = l_Lean_Syntax_isOfKind(v_h_1507_, v___x_1508_);
if (v___x_1509_ == 0)
{
lean_object* v___x_1510_; 
v___x_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1510_, 0, v_h_1507_);
return v___x_1510_;
}
else
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1511_ = l_Lean_Syntax_getArg(v_h_1507_, v___x_1504_);
lean_dec(v_h_1507_);
v___x_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1511_);
return v___x_1512_;
}
}
else
{
lean_object* v___x_1513_; 
lean_dec(v___x_1505_);
v___x_1513_ = lean_box(0);
return v___x_1513_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_doIfPropHyp_x3f___boxed(lean_object* v_prop_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_doIfPropHyp_x3f(v_prop_1514_);
lean_dec(v_prop_1514_);
return v_res_1515_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1524_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__3));
v___x_1525_ = l_String_toRawSubstring_x27(v___x_1524_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0(lean_object* v_c_1544_, lean_object* v_t_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v_toCold_1553_; lean_object* v_ref_1554_; lean_object* v_quotContext_1555_; lean_object* v_currMacroScope_1556_; lean_object* v_ref_1557_; uint8_t v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; 
v_toCold_1553_ = lean_ctor_get(v___y_1550_, 0);
v_ref_1554_ = lean_ctor_get(v___y_1550_, 2);
lean_inc(v_ref_1554_);
v_quotContext_1555_ = lean_ctor_get(v_toCold_1553_, 8);
v_currMacroScope_1556_ = lean_ctor_get(v_toCold_1553_, 9);
v_ref_1557_ = l_Lean_replaceRef(v_c_1544_, v_ref_1554_);
v___x_1558_ = 0;
v___x_1559_ = l_Lean_SourceInfo_fromRef(v_ref_1557_, v___x_1558_);
lean_dec(v_ref_1557_);
v___x_1560_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__1));
v___x_1561_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__2));
lean_inc_n(v___x_1559_, 2);
v___x_1562_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1559_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
v___x_1563_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__4, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__4);
v___x_1564_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__5));
lean_inc(v_currMacroScope_1556_);
lean_inc(v_quotContext_1555_);
v___x_1565_ = l_Lean_addMacroScope(v_quotContext_1555_, v___x_1564_, v_currMacroScope_1556_);
v___x_1566_ = lean_box(0);
lean_inc(v___x_1565_);
v___x_1567_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1559_);
lean_ctor_set(v___x_1567_, 1, v___x_1563_);
lean_ctor_set(v___x_1567_, 2, v___x_1565_);
lean_ctor_set(v___x_1567_, 3, v___x_1566_);
v___x_1568_ = l_Lean_Syntax_node2(v___x_1559_, v___x_1560_, v___x_1562_, v___x_1567_);
lean_inc(v_a_1549_);
lean_inc_ref(v_a_1548_);
lean_inc(v_a_1547_);
lean_inc_ref(v_a_1546_);
v___x_1569_ = lean_apply_8(v_t_1545_, v___x_1568_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_, v___y_1550_, v___y_1551_, lean_box(0));
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1592_; 
v_a_1570_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1592_ == 0)
{
v___x_1572_ = v___x_1569_;
v_isShared_1573_ = v_isSharedCheck_1592_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1569_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1592_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1590_; 
v___x_1574_ = l_Lean_SourceInfo_fromRef(v_ref_1554_, v___x_1558_);
lean_dec(v_ref_1554_);
v___x_1575_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__7));
v___x_1576_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__8));
lean_inc_n(v___x_1574_, 7);
v___x_1577_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1574_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1578_, 0, v___x_1574_);
lean_ctor_set(v___x_1578_, 1, v___x_1561_);
v___x_1579_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1574_);
lean_ctor_set(v___x_1579_, 1, v___x_1563_);
lean_ctor_set(v___x_1579_, 2, v___x_1565_);
lean_ctor_set(v___x_1579_, 3, v___x_1566_);
v___x_1580_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__9));
v___x_1581_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1581_, 0, v___x_1574_);
lean_ctor_set(v___x_1581_, 1, v___x_1580_);
v___x_1582_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__10));
v___x_1583_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1574_);
lean_ctor_set(v___x_1583_, 1, v___x_1582_);
v___x_1584_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__12));
v___x_1585_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___closed__13));
v___x_1586_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1586_, 0, v___x_1574_);
lean_ctor_set(v___x_1586_, 1, v___x_1585_);
lean_inc_ref(v___x_1583_);
lean_inc_ref(v___x_1579_);
lean_inc_ref(v___x_1578_);
v___x_1587_ = l_Lean_Syntax_node5(v___x_1574_, v___x_1584_, v___x_1586_, v___x_1578_, v___x_1579_, v___x_1583_, v_a_1570_);
v___x_1588_ = l_Lean_Syntax_node7(v___x_1574_, v___x_1575_, v___x_1577_, v___x_1578_, v___x_1579_, v___x_1581_, v_c_1544_, v___x_1583_, v___x_1587_);
if (v_isShared_1573_ == 0)
{
lean_ctor_set(v___x_1572_, 0, v___x_1588_);
v___x_1590_ = v___x_1572_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v___x_1588_);
v___x_1590_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
return v___x_1590_;
}
}
}
else
{
lean_dec(v___x_1565_);
lean_dec(v_ref_1554_);
lean_dec(v_c_1544_);
return v___x_1569_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___boxed(lean_object* v_c_1593_, lean_object* v_t_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0(v_c_1593_, v_t_1594_, v_a_1595_, v_a_1596_, v_a_1597_, v_a_1598_, v___y_1599_, v___y_1600_);
lean_dec(v_a_1598_);
lean_dec_ref(v_a_1597_);
lean_dec(v_a_1596_);
lean_dec_ref(v_a_1595_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond(lean_object* v_c_1603_, lean_object* v_t_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_){
_start:
{
lean_object* v___f_1612_; lean_object* v___x_1613_; 
lean_inc(v_a_1608_);
lean_inc_ref(v_a_1607_);
lean_inc(v_a_1606_);
lean_inc_ref(v_a_1605_);
v___f_1612_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___lam__0___boxed), 9, 6);
lean_closure_set(v___f_1612_, 0, v_c_1603_);
lean_closure_set(v___f_1612_, 1, v_t_1604_);
lean_closure_set(v___f_1612_, 2, v_a_1605_);
lean_closure_set(v___f_1612_, 3, v_a_1606_);
lean_closure_set(v___f_1612_, 4, v_a_1607_);
lean_closure_set(v___f_1612_, 5, v_a_1608_);
v___x_1613_ = l_Lean_Core_withFreshMacroScope___redArg(v___f_1612_, v_a_1609_, v_a_1610_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond___boxed(lean_object* v_c_1614_, lean_object* v_t_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond(v_c_1614_, v_t_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_);
lean_dec(v_a_1621_);
lean_dec_ref(v_a_1620_);
lean_dec(v_a_1619_);
lean_dec_ref(v_a_1618_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
return v_res_1623_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUIf___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1631_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__2));
v___x_1632_ = l_String_toRawSubstring_x27(v___x_1631_);
return v___x_1632_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUIf___lam__0___closed__10(void){
_start:
{
lean_object* v___x_1645_; lean_object* v___x_1646_; 
v___x_1645_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__9));
v___x_1646_ = l_String_toRawSubstring_x27(v___x_1645_);
return v___x_1646_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25(void){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1679_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__24));
v___x_1680_ = l_String_toRawSubstring_x27(v___x_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0(lean_object* v_prop_1721_, lean_object* v_then___1722_, lean_object* v_else___1723_, lean_object* v_c_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v___x_1732_; 
v___x_1732_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_doIfPropHyp_x3f(v_prop_1721_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_toCold_1733_; lean_object* v_ref_1734_; lean_object* v_quotContext_1735_; lean_object* v_currMacroScope_1736_; uint8_t v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v_toCold_1733_ = lean_ctor_get(v___y_1729_, 0);
v_ref_1734_ = lean_ctor_get(v___y_1729_, 2);
v_quotContext_1735_ = lean_ctor_get(v_toCold_1733_, 8);
v_currMacroScope_1736_ = lean_ctor_get(v_toCold_1733_, 9);
v___x_1737_ = 0;
v___x_1738_ = l_Lean_SourceInfo_fromRef(v_ref_1734_, v___x_1737_);
v___x_1739_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1));
v___x_1740_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__3, &l_Lean_Elab_Do_elabDoUIf___lam__0___closed__3_once, _init_l_Lean_Elab_Do_elabDoUIf___lam__0___closed__3);
v___x_1741_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__6));
lean_inc(v_currMacroScope_1736_);
lean_inc(v_quotContext_1735_);
v___x_1742_ = l_Lean_addMacroScope(v_quotContext_1735_, v___x_1741_, v_currMacroScope_1736_);
v___x_1743_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__8));
lean_inc_n(v___x_1738_, 2);
v___x_1744_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1738_);
lean_ctor_set(v___x_1744_, 1, v___x_1740_);
lean_ctor_set(v___x_1744_, 2, v___x_1742_);
lean_ctor_set(v___x_1744_, 3, v___x_1743_);
v___x_1745_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_1746_ = l_Lean_Syntax_node3(v___x_1738_, v___x_1745_, v_c_1724_, v_then___1722_, v_else___1723_);
v___x_1747_ = l_Lean_Syntax_node2(v___x_1738_, v___x_1739_, v___x_1744_, v___x_1746_);
v___x_1748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1747_);
return v___x_1748_;
}
else
{
lean_object* v_toCold_1749_; lean_object* v_val_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1800_; 
v_toCold_1749_ = lean_ctor_get(v___y_1729_, 0);
v_val_1750_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1752_ = v___x_1732_;
v_isShared_1753_ = v_isSharedCheck_1800_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_val_1750_);
lean_dec(v___x_1732_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1800_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v_ref_1754_; lean_object* v_quotContext_1755_; lean_object* v_currMacroScope_1756_; uint8_t v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1798_; 
v_ref_1754_ = lean_ctor_get(v___y_1729_, 2);
v_quotContext_1755_ = lean_ctor_get(v_toCold_1749_, 8);
v_currMacroScope_1756_ = lean_ctor_get(v_toCold_1749_, 9);
v___x_1757_ = 0;
v___x_1758_ = l_Lean_SourceInfo_fromRef(v_ref_1754_, v___x_1757_);
v___x_1759_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1));
v___x_1760_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__10, &l_Lean_Elab_Do_elabDoUIf___lam__0___closed__10_once, _init_l_Lean_Elab_Do_elabDoUIf___lam__0___closed__10);
v___x_1761_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__12));
lean_inc_n(v_currMacroScope_1756_, 2);
lean_inc_n(v_quotContext_1755_, 2);
v___x_1762_ = l_Lean_addMacroScope(v_quotContext_1755_, v___x_1761_, v_currMacroScope_1756_);
v___x_1763_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__16));
lean_inc_n(v___x_1758_, 17);
v___x_1764_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1758_);
lean_ctor_set(v___x_1764_, 1, v___x_1760_);
lean_ctor_set(v___x_1764_, 2, v___x_1762_);
lean_ctor_set(v___x_1764_, 3, v___x_1763_);
v___x_1765_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_1766_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18));
v___x_1767_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20));
v___x_1768_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__21));
v___x_1769_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1758_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
v___x_1770_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__23));
v___x_1771_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25, &l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25_once, _init_l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25);
v___x_1772_ = lean_box(0);
v___x_1773_ = l_Lean_addMacroScope(v_quotContext_1755_, v___x_1772_, v_currMacroScope_1756_);
v___x_1774_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__35));
v___x_1775_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1758_);
lean_ctor_set(v___x_1775_, 1, v___x_1771_);
lean_ctor_set(v___x_1775_, 2, v___x_1773_);
lean_ctor_set(v___x_1775_, 3, v___x_1774_);
v___x_1776_ = l_Lean_Syntax_node1(v___x_1758_, v___x_1770_, v___x_1775_);
v___x_1777_ = l_Lean_Syntax_node2(v___x_1758_, v___x_1767_, v___x_1769_, v___x_1776_);
v___x_1778_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__36));
v___x_1779_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37));
v___x_1780_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1758_);
lean_ctor_set(v___x_1780_, 1, v___x_1778_);
v___x_1781_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39));
v___x_1782_ = l_Lean_Syntax_node1(v___x_1758_, v___x_1765_, v_val_1750_);
v___x_1783_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6);
v___x_1784_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1784_, 0, v___x_1758_);
lean_ctor_set(v___x_1784_, 1, v___x_1765_);
lean_ctor_set(v___x_1784_, 2, v___x_1783_);
v___x_1785_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__28));
v___x_1786_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1758_);
lean_ctor_set(v___x_1786_, 1, v___x_1785_);
lean_inc_ref(v___x_1786_);
lean_inc_ref(v___x_1784_);
lean_inc(v___x_1782_);
v___x_1787_ = l_Lean_Syntax_node4(v___x_1758_, v___x_1781_, v___x_1782_, v___x_1784_, v___x_1786_, v_then___1722_);
lean_inc_ref(v___x_1780_);
v___x_1788_ = l_Lean_Syntax_node2(v___x_1758_, v___x_1779_, v___x_1780_, v___x_1787_);
v___x_1789_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__40));
v___x_1790_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1758_);
lean_ctor_set(v___x_1790_, 1, v___x_1789_);
lean_inc_ref(v___x_1790_);
lean_inc(v___x_1777_);
v___x_1791_ = l_Lean_Syntax_node3(v___x_1758_, v___x_1766_, v___x_1777_, v___x_1788_, v___x_1790_);
v___x_1792_ = l_Lean_Syntax_node4(v___x_1758_, v___x_1781_, v___x_1782_, v___x_1784_, v___x_1786_, v_else___1723_);
v___x_1793_ = l_Lean_Syntax_node2(v___x_1758_, v___x_1779_, v___x_1780_, v___x_1792_);
v___x_1794_ = l_Lean_Syntax_node3(v___x_1758_, v___x_1766_, v___x_1777_, v___x_1793_, v___x_1790_);
v___x_1795_ = l_Lean_Syntax_node3(v___x_1758_, v___x_1765_, v_c_1724_, v___x_1791_, v___x_1794_);
v___x_1796_ = l_Lean_Syntax_node2(v___x_1758_, v___x_1759_, v___x_1764_, v___x_1795_);
if (v_isShared_1753_ == 0)
{
lean_ctor_set_tag(v___x_1752_, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1796_);
v___x_1798_ = v___x_1752_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v___x_1796_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf___lam__0___boxed(lean_object* v_prop_1801_, lean_object* v_then___1802_, lean_object* v_else___1803_, lean_object* v_c_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l_Lean_Elab_Do_elabDoUIf___lam__0(v_prop_1801_, v_then___1802_, v_else___1803_, v_c_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v_prop_1801_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf___lam__1(lean_object* v_prop_1813_, lean_object* v_c_1814_, lean_object* v_then___1815_, lean_object* v_else___1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
lean_object* v___f_1824_; lean_object* v___x_1825_; 
v___f_1824_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoUIf___lam__0___boxed), 11, 3);
lean_closure_set(v___f_1824_, 0, v_prop_1813_);
lean_closure_set(v___f_1824_, 1, v_then___1815_);
lean_closure_set(v___f_1824_, 2, v_else___1816_);
v___x_1825_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond(v_c_1814_, v___f_1824_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf___lam__1___boxed(lean_object* v_prop_1826_, lean_object* v_c_1827_, lean_object* v_then___1828_, lean_object* v_else___1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_){
_start:
{
lean_object* v_res_1837_; 
v_res_1837_ = l_Lean_Elab_Do_elabDoUIf___lam__1(v_prop_1826_, v_c_1827_, v_then___1828_, v_else___1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_);
lean_dec(v___y_1835_);
lean_dec_ref(v___y_1834_);
lean_dec(v___y_1833_);
lean_dec_ref(v___y_1832_);
lean_dec(v___y_1831_);
lean_dec_ref(v___y_1830_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf(lean_object* v_stx_1838_, lean_object* v_dec_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_){
_start:
{
lean_object* v___x_1848_; lean_object* v_prop_1849_; lean_object* v_c_1850_; lean_object* v___f_1851_; lean_object* v___x_1852_; 
v___x_1848_ = lean_unsigned_to_nat(1u);
v_prop_1849_ = l_Lean_Syntax_getArg(v_stx_1838_, v___x_1848_);
v_c_1850_ = l_Lean_Syntax_getArg(v_prop_1849_, v___x_1848_);
v___f_1851_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoUIf___lam__1___boxed), 11, 2);
lean_closure_set(v___f_1851_, 0, v_prop_1849_);
lean_closure_set(v___f_1851_, 1, v_c_1850_);
v___x_1852_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCond(v_stx_1838_, v_dec_1839_, v___f_1851_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_);
return v___x_1852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoUIf___boxed(lean_object* v_stx_1853_, lean_object* v_dec_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = l_Lean_Elab_Do_elabDoUIf(v_stx_1853_, v_dec_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_, v_a_1860_, v_a_1861_);
lean_dec(v_a_1861_);
lean_dec_ref(v_a_1860_);
lean_dec(v_a_1859_);
lean_dec_ref(v_a_1858_);
lean_dec(v_a_1857_);
lean_dec_ref(v_a_1856_);
lean_dec_ref(v_a_1855_);
lean_dec(v_stx_1853_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1(){
_start:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1871_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_1872_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__5));
v___x_1873_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___closed__1));
v___x_1874_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoUIf___boxed), 10, 0);
v___x_1875_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1871_, v___x_1872_, v___x_1873_, v___x_1874_);
return v___x_1875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1___boxed(lean_object* v_a_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1();
return v_res_1877_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoBIf___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBIf___lam__0___closed__0));
v___x_1880_ = l_String_toRawSubstring_x27(v___x_1879_);
return v___x_1880_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoBIf___lam__0___closed__8(void){
_start:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1895_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBIf___lam__0___closed__7));
v___x_1896_ = l_String_toRawSubstring_x27(v___x_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0(lean_object* v_prop_1913_, lean_object* v___x_1914_, lean_object* v_then___1915_, lean_object* v_else___1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_doIfPropHyp_x3f(v_prop_1913_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_toCold_1925_; lean_object* v_ref_1926_; lean_object* v_quotContext_1927_; lean_object* v_currMacroScope_1928_; uint8_t v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v_toCold_1925_ = lean_ctor_get(v___y_1921_, 0);
v_ref_1926_ = lean_ctor_get(v___y_1921_, 2);
v_quotContext_1927_ = lean_ctor_get(v_toCold_1925_, 8);
v_currMacroScope_1928_ = lean_ctor_get(v_toCold_1925_, 9);
v___x_1929_ = 0;
v___x_1930_ = l_Lean_SourceInfo_fromRef(v_ref_1926_, v___x_1929_);
v___x_1931_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1));
v___x_1932_ = lean_obj_once(&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__1, &l_Lean_Elab_Do_elabDoBIf___lam__0___closed__1_once, _init_l_Lean_Elab_Do_elabDoBIf___lam__0___closed__1);
v___x_1933_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBIf___lam__0___closed__2));
lean_inc(v_currMacroScope_1928_);
lean_inc(v_quotContext_1927_);
v___x_1934_ = l_Lean_addMacroScope(v_quotContext_1927_, v___x_1933_, v_currMacroScope_1928_);
v___x_1935_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBIf___lam__0___closed__6));
lean_inc_n(v___x_1930_, 2);
v___x_1936_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1936_, 0, v___x_1930_);
lean_ctor_set(v___x_1936_, 1, v___x_1932_);
lean_ctor_set(v___x_1936_, 2, v___x_1934_);
lean_ctor_set(v___x_1936_, 3, v___x_1935_);
v___x_1937_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_1938_ = l_Lean_Syntax_node3(v___x_1930_, v___x_1937_, v___x_1914_, v_then___1915_, v_else___1916_);
v___x_1939_ = l_Lean_Syntax_node2(v___x_1930_, v___x_1931_, v___x_1936_, v___x_1938_);
v___x_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1939_);
return v___x_1940_;
}
else
{
lean_object* v_toCold_1941_; lean_object* v_val_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1992_; 
v_toCold_1941_ = lean_ctor_get(v___y_1921_, 0);
v_val_1942_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1944_ = v___x_1924_;
v_isShared_1945_ = v_isSharedCheck_1992_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_val_1942_);
lean_dec(v___x_1924_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1992_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v_ref_1946_; lean_object* v_quotContext_1947_; lean_object* v_currMacroScope_1948_; uint8_t v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1990_; 
v_ref_1946_ = lean_ctor_get(v___y_1921_, 2);
v_quotContext_1947_ = lean_ctor_get(v_toCold_1941_, 8);
v_currMacroScope_1948_ = lean_ctor_get(v_toCold_1941_, 9);
v___x_1949_ = 0;
v___x_1950_ = l_Lean_SourceInfo_fromRef(v_ref_1946_, v___x_1949_);
v___x_1951_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1));
v___x_1952_ = lean_obj_once(&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__8, &l_Lean_Elab_Do_elabDoBIf___lam__0___closed__8_once, _init_l_Lean_Elab_Do_elabDoBIf___lam__0___closed__8);
v___x_1953_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBIf___lam__0___closed__11));
lean_inc_n(v_currMacroScope_1948_, 2);
lean_inc_n(v_quotContext_1947_, 2);
v___x_1954_ = l_Lean_addMacroScope(v_quotContext_1947_, v___x_1953_, v_currMacroScope_1948_);
v___x_1955_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBIf___lam__0___closed__15));
lean_inc_n(v___x_1950_, 17);
v___x_1956_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1950_);
lean_ctor_set(v___x_1956_, 1, v___x_1952_);
lean_ctor_set(v___x_1956_, 2, v___x_1954_);
lean_ctor_set(v___x_1956_, 3, v___x_1955_);
v___x_1957_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_1958_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18));
v___x_1959_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20));
v___x_1960_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__21));
v___x_1961_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1950_);
lean_ctor_set(v___x_1961_, 1, v___x_1960_);
v___x_1962_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__23));
v___x_1963_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25, &l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25_once, _init_l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25);
v___x_1964_ = lean_box(0);
v___x_1965_ = l_Lean_addMacroScope(v_quotContext_1947_, v___x_1964_, v_currMacroScope_1948_);
v___x_1966_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__35));
v___x_1967_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1950_);
lean_ctor_set(v___x_1967_, 1, v___x_1963_);
lean_ctor_set(v___x_1967_, 2, v___x_1965_);
lean_ctor_set(v___x_1967_, 3, v___x_1966_);
v___x_1968_ = l_Lean_Syntax_node1(v___x_1950_, v___x_1962_, v___x_1967_);
v___x_1969_ = l_Lean_Syntax_node2(v___x_1950_, v___x_1959_, v___x_1961_, v___x_1968_);
v___x_1970_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__36));
v___x_1971_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37));
v___x_1972_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1972_, 0, v___x_1950_);
lean_ctor_set(v___x_1972_, 1, v___x_1970_);
v___x_1973_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39));
v___x_1974_ = l_Lean_Syntax_node1(v___x_1950_, v___x_1957_, v_val_1942_);
v___x_1975_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6);
v___x_1976_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1950_);
lean_ctor_set(v___x_1976_, 1, v___x_1957_);
lean_ctor_set(v___x_1976_, 2, v___x_1975_);
v___x_1977_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__28));
v___x_1978_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1950_);
lean_ctor_set(v___x_1978_, 1, v___x_1977_);
lean_inc_ref(v___x_1978_);
lean_inc_ref(v___x_1976_);
lean_inc(v___x_1974_);
v___x_1979_ = l_Lean_Syntax_node4(v___x_1950_, v___x_1973_, v___x_1974_, v___x_1976_, v___x_1978_, v_then___1915_);
lean_inc_ref(v___x_1972_);
v___x_1980_ = l_Lean_Syntax_node2(v___x_1950_, v___x_1971_, v___x_1972_, v___x_1979_);
v___x_1981_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__40));
v___x_1982_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1982_, 0, v___x_1950_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
lean_inc_ref(v___x_1982_);
lean_inc(v___x_1969_);
v___x_1983_ = l_Lean_Syntax_node3(v___x_1950_, v___x_1958_, v___x_1969_, v___x_1980_, v___x_1982_);
v___x_1984_ = l_Lean_Syntax_node4(v___x_1950_, v___x_1973_, v___x_1974_, v___x_1976_, v___x_1978_, v_else___1916_);
v___x_1985_ = l_Lean_Syntax_node2(v___x_1950_, v___x_1971_, v___x_1972_, v___x_1984_);
v___x_1986_ = l_Lean_Syntax_node3(v___x_1950_, v___x_1958_, v___x_1969_, v___x_1985_, v___x_1982_);
v___x_1987_ = l_Lean_Syntax_node3(v___x_1950_, v___x_1957_, v___x_1914_, v___x_1983_, v___x_1986_);
v___x_1988_ = l_Lean_Syntax_node2(v___x_1950_, v___x_1951_, v___x_1956_, v___x_1987_);
if (v_isShared_1945_ == 0)
{
lean_ctor_set_tag(v___x_1944_, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1988_);
v___x_1990_ = v___x_1944_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v___x_1988_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBIf___lam__0___boxed(lean_object* v_prop_1993_, lean_object* v___x_1994_, lean_object* v_then___1995_, lean_object* v_else___1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l_Lean_Elab_Do_elabDoBIf___lam__0(v_prop_1993_, v___x_1994_, v_then___1995_, v_else___1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
lean_dec(v___y_2002_);
lean_dec_ref(v___y_2001_);
lean_dec(v___y_2000_);
lean_dec_ref(v___y_1999_);
lean_dec(v___y_1998_);
lean_dec_ref(v___y_1997_);
lean_dec(v_prop_1993_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBIf(lean_object* v_stx_2005_, lean_object* v_dec_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_){
_start:
{
lean_object* v___x_2015_; lean_object* v_prop_2016_; lean_object* v___x_2017_; lean_object* v___f_2018_; lean_object* v___x_2019_; 
v___x_2015_ = lean_unsigned_to_nat(1u);
v_prop_2016_ = l_Lean_Syntax_getArg(v_stx_2005_, v___x_2015_);
v___x_2017_ = l_Lean_Syntax_getArg(v_prop_2016_, v___x_2015_);
v___f_2018_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoBIf___lam__0___boxed), 11, 2);
lean_closure_set(v___f_2018_, 0, v_prop_2016_);
lean_closure_set(v___f_2018_, 1, v___x_2017_);
v___x_2019_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCond(v_stx_2005_, v_dec_2006_, v___f_2018_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_a_2011_, v_a_2012_, v_a_2013_);
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoBIf___boxed(lean_object* v_stx_2020_, lean_object* v_dec_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_){
_start:
{
lean_object* v_res_2030_; 
v_res_2030_ = l_Lean_Elab_Do_elabDoBIf(v_stx_2020_, v_dec_2021_, v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_, v_a_2027_, v_a_2028_);
lean_dec(v_a_2028_);
lean_dec_ref(v_a_2027_);
lean_dec(v_a_2026_);
lean_dec_ref(v_a_2025_);
lean_dec(v_a_2024_);
lean_dec_ref(v_a_2023_);
lean_dec_ref(v_a_2022_);
lean_dec(v_stx_2020_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1(){
_start:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2038_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_2039_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__0___closed__3));
v___x_2040_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___closed__1));
v___x_2041_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoBIf___boxed), 10, 0);
v___x_2042_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2038_, v___x_2039_, v___x_2040_, v___x_2041_);
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1___boxed(lean_object* v_a_2043_){
_start:
{
lean_object* v_res_2044_; 
v_res_2044_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1();
return v_res_2044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto___lam__0(lean_object* v___x_2047_, lean_object* v___x_2048_, lean_object* v___x_2049_, lean_object* v___x_2050_, lean_object* v_stx_2051_, lean_object* v_then___2052_, lean_object* v_else___2053_, lean_object* v_mvar_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_){
_start:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; uint8_t v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___x_2062_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain___closed__0));
v___x_2063_ = ((lean_object*)(l_Lean_Elab_Do_elabDoIfAuto___lam__0___closed__0));
v___x_2064_ = l_Lean_Name_mkStr5(v___x_2047_, v___x_2048_, v___x_2049_, v___x_2062_, v___x_2063_);
v___x_2065_ = ((lean_object*)(l_Lean_Elab_Do_elabDoIfAuto___lam__0___closed__1));
v___x_2066_ = 0;
v___x_2067_ = l_Lean_mkAtomFrom(v___x_2050_, v___x_2065_, v___x_2066_);
v___x_2068_ = lean_unsigned_to_nat(1u);
v___x_2069_ = l_Lean_Syntax_getArg(v_stx_2051_, v___x_2068_);
v___x_2070_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__0);
v___x_2071_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__3);
v___x_2072_ = lean_unsigned_to_nat(7u);
v___x_2073_ = lean_mk_empty_array_with_capacity(v___x_2072_);
v___x_2074_ = lean_array_push(v___x_2073_, v___x_2067_);
v___x_2075_ = lean_array_push(v___x_2074_, v___x_2069_);
v___x_2076_ = lean_array_push(v___x_2075_, v_mvar_2054_);
v___x_2077_ = lean_array_push(v___x_2076_, v___x_2070_);
v___x_2078_ = lean_array_push(v___x_2077_, v_then___2052_);
v___x_2079_ = lean_array_push(v___x_2078_, v___x_2071_);
v___x_2080_ = lean_array_push(v___x_2079_, v_else___2053_);
v___x_2081_ = lean_box(2);
v___x_2082_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
lean_ctor_set(v___x_2082_, 1, v___x_2064_);
lean_ctor_set(v___x_2082_, 2, v___x_2080_);
v___x_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2082_);
return v___x_2083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto___lam__0___boxed(lean_object* v___x_2084_, lean_object* v___x_2085_, lean_object* v___x_2086_, lean_object* v___x_2087_, lean_object* v_stx_2088_, lean_object* v_then___2089_, lean_object* v_else___2090_, lean_object* v_mvar_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_){
_start:
{
lean_object* v_res_2099_; 
v_res_2099_ = l_Lean_Elab_Do_elabDoIfAuto___lam__0(v___x_2084_, v___x_2085_, v___x_2086_, v___x_2087_, v_stx_2088_, v_then___2089_, v_else___2090_, v_mvar_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_);
lean_dec(v___y_2097_);
lean_dec_ref(v___y_2096_);
lean_dec(v___y_2095_);
lean_dec_ref(v___y_2094_);
lean_dec(v___y_2093_);
lean_dec_ref(v___y_2092_);
lean_dec(v_stx_2088_);
lean_dec(v___x_2087_);
return v_res_2099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto___lam__1(lean_object* v___x_2100_, lean_object* v___x_2101_, lean_object* v___x_2102_, lean_object* v___x_2103_, lean_object* v_stx_2104_, lean_object* v_c_2105_, lean_object* v_then___2106_, lean_object* v_else___2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v___f_2115_; lean_object* v___x_2116_; 
v___f_2115_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoIfAuto___lam__0___boxed), 15, 7);
lean_closure_set(v___f_2115_, 0, v___x_2100_);
lean_closure_set(v___f_2115_, 1, v___x_2101_);
lean_closure_set(v___f_2115_, 2, v___x_2102_);
lean_closure_set(v___f_2115_, 3, v___x_2103_);
lean_closure_set(v___f_2115_, 4, v_stx_2104_);
lean_closure_set(v___f_2115_, 5, v_then___2106_);
lean_closure_set(v___f_2115_, 6, v_else___2107_);
v___x_2116_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkWaitingCond(v_c_2105_, v___f_2115_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto___lam__1___boxed(lean_object* v___x_2117_, lean_object* v___x_2118_, lean_object* v___x_2119_, lean_object* v___x_2120_, lean_object* v_stx_2121_, lean_object* v_c_2122_, lean_object* v_then___2123_, lean_object* v_else___2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v_res_2132_; 
v_res_2132_ = l_Lean_Elab_Do_elabDoIfAuto___lam__1(v___x_2117_, v___x_2118_, v___x_2119_, v___x_2120_, v_stx_2121_, v_c_2122_, v_then___2123_, v_else___2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto(lean_object* v_stx_2133_, lean_object* v_dec_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_){
_start:
{
lean_object* v___x_2143_; lean_object* v_c_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___f_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2143_ = lean_unsigned_to_nat(2u);
v_c_2144_ = l_Lean_Syntax_getArg(v_stx_2133_, v___x_2143_);
v___x_2145_ = lean_unsigned_to_nat(0u);
v___x_2146_ = l_Lean_Syntax_getArg(v_stx_2133_, v___x_2145_);
v___x_2147_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0));
v___x_2148_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1));
v___x_2149_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2));
lean_inc(v_c_2144_);
lean_inc(v_stx_2133_);
lean_inc(v___x_2146_);
v___f_2150_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoIfAuto___lam__1___boxed), 15, 6);
lean_closure_set(v___f_2150_, 0, v___x_2147_);
lean_closure_set(v___f_2150_, 1, v___x_2148_);
lean_closure_set(v___f_2150_, 2, v___x_2149_);
lean_closure_set(v___f_2150_, 3, v___x_2146_);
lean_closure_set(v___f_2150_, 4, v_stx_2133_);
lean_closure_set(v___f_2150_, 5, v_c_2144_);
v___x_2151_ = lean_unsigned_to_nat(4u);
v___x_2152_ = l_Lean_Syntax_getArg(v_stx_2133_, v___x_2151_);
v___x_2153_ = lean_unsigned_to_nat(6u);
v___x_2154_ = l_Lean_Syntax_getArg(v_stx_2133_, v___x_2153_);
lean_dec(v_stx_2133_);
v___x_2155_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoCondCore(v___x_2146_, v_c_2144_, v___x_2152_, v___x_2154_, v_dec_2134_, v___f_2150_, v_a_2135_, v_a_2136_, v_a_2137_, v_a_2138_, v_a_2139_, v_a_2140_, v_a_2141_);
return v___x_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIfAuto___boxed(lean_object* v_stx_2156_, lean_object* v_dec_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_, lean_object* v_a_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l_Lean_Elab_Do_elabDoIfAuto(v_stx_2156_, v_dec_2157_, v_a_2158_, v_a_2159_, v_a_2160_, v_a_2161_, v_a_2162_, v_a_2163_, v_a_2164_);
lean_dec(v_a_2164_);
lean_dec_ref(v_a_2163_);
lean_dec(v_a_2162_);
lean_dec_ref(v_a_2161_);
lean_dec(v_a_2160_);
lean_dec_ref(v_a_2159_);
lean_dec_ref(v_a_2158_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1(){
_start:
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2181_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_2182_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1));
v___x_2183_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__3));
v___x_2184_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoIfAuto___boxed), 10, 0);
v___x_2185_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2181_, v___x_2182_, v___x_2183_, v___x_2184_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___boxed(lean_object* v_a_2186_){
_start:
{
lean_object* v_res_2187_; 
v_res_2187_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1();
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto_docString__3(){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2190_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__3));
v___x_2191_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto_docString__3___closed__0));
v___x_2192_ = l_Lean_addBuiltinDocString(v___x_2190_, v___x_2191_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto_docString__3___boxed(lean_object* v_a_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto_docString__3();
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoIfAuto(lean_object* v_stx_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_){
_start:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2203_ = lean_unsigned_to_nat(4u);
v___x_2204_ = l_Lean_Syntax_getArg(v_stx_2195_, v___x_2203_);
v___x_2205_ = l_Lean_Elab_Do_inferControlInfoSeq(v___x_2204_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v_a_2200_, v_a_2201_);
if (lean_obj_tag(v___x_2205_) == 0)
{
lean_object* v_a_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
lean_inc(v_a_2206_);
lean_dec_ref_known(v___x_2205_, 1);
v___x_2207_ = lean_unsigned_to_nat(6u);
v___x_2208_ = l_Lean_Syntax_getArg(v_stx_2195_, v___x_2207_);
v___x_2209_ = l_Lean_Elab_Do_inferControlInfoSeq(v___x_2208_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v_a_2200_, v_a_2201_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2218_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2212_ = v___x_2209_;
v_isShared_2213_ = v_isSharedCheck_2218_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2209_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2218_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2214_; lean_object* v___x_2216_; 
v___x_2214_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_2206_, v_a_2210_);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 0, v___x_2214_);
v___x_2216_ = v___x_2212_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v___x_2214_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
else
{
lean_dec(v_a_2206_);
return v___x_2209_;
}
}
else
{
return v___x_2205_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_controlInfoDoIfAuto___boxed(lean_object* v_stx_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l_Lean_Elab_Do_controlInfoDoIfAuto(v_stx_2219_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_);
lean_dec(v_a_2225_);
lean_dec_ref(v_a_2224_);
lean_dec(v_a_2223_);
lean_dec_ref(v_a_2222_);
lean_dec(v_a_2221_);
lean_dec_ref(v_a_2220_);
lean_dec(v_stx_2219_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1(){
_start:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2235_ = l_Lean_Elab_Do_controlInfoElemAttribute;
v___x_2236_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1___closed__1));
v___x_2237_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___closed__1));
v___x_2238_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_controlInfoDoIfAuto___boxed), 8, 0);
v___x_2239_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2235_, v___x_2236_, v___x_2237_, v___x_2238_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1___boxed(lean_object* v_a_2240_){
_start:
{
lean_object* v_res_2241_; 
v_res_2241_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1();
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1___redArg(lean_object* v_e_2242_, lean_object* v___y_2243_){
_start:
{
uint8_t v___x_2245_; 
v___x_2245_ = l_Lean_Expr_hasMVar(v_e_2242_);
if (v___x_2245_ == 0)
{
lean_object* v___x_2246_; 
v___x_2246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2246_, 0, v_e_2242_);
return v___x_2246_;
}
else
{
lean_object* v___x_2247_; lean_object* v_mctx_2248_; lean_object* v___x_2249_; lean_object* v_fst_2250_; lean_object* v_snd_2251_; lean_object* v___x_2252_; lean_object* v_cache_2253_; lean_object* v_zetaDeltaFVarIds_2254_; lean_object* v_postponed_2255_; lean_object* v_diag_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2265_; 
v___x_2247_ = lean_st_ref_get(v___y_2243_);
v_mctx_2248_ = lean_ctor_get(v___x_2247_, 0);
lean_inc_ref(v_mctx_2248_);
lean_dec(v___x_2247_);
v___x_2249_ = l_Lean_instantiateMVarsCore(v_mctx_2248_, v_e_2242_);
v_fst_2250_ = lean_ctor_get(v___x_2249_, 0);
lean_inc(v_fst_2250_);
v_snd_2251_ = lean_ctor_get(v___x_2249_, 1);
lean_inc(v_snd_2251_);
lean_dec_ref(v___x_2249_);
v___x_2252_ = lean_st_ref_take(v___y_2243_);
v_cache_2253_ = lean_ctor_get(v___x_2252_, 1);
v_zetaDeltaFVarIds_2254_ = lean_ctor_get(v___x_2252_, 2);
v_postponed_2255_ = lean_ctor_get(v___x_2252_, 3);
v_diag_2256_ = lean_ctor_get(v___x_2252_, 4);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2265_ == 0)
{
lean_object* v_unused_2266_; 
v_unused_2266_ = lean_ctor_get(v___x_2252_, 0);
lean_dec(v_unused_2266_);
v___x_2258_ = v___x_2252_;
v_isShared_2259_ = v_isSharedCheck_2265_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_diag_2256_);
lean_inc(v_postponed_2255_);
lean_inc(v_zetaDeltaFVarIds_2254_);
lean_inc(v_cache_2253_);
lean_dec(v___x_2252_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2265_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v___x_2261_; 
if (v_isShared_2259_ == 0)
{
lean_ctor_set(v___x_2258_, 0, v_snd_2251_);
v___x_2261_ = v___x_2258_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_snd_2251_);
lean_ctor_set(v_reuseFailAlloc_2264_, 1, v_cache_2253_);
lean_ctor_set(v_reuseFailAlloc_2264_, 2, v_zetaDeltaFVarIds_2254_);
lean_ctor_set(v_reuseFailAlloc_2264_, 3, v_postponed_2255_);
lean_ctor_set(v_reuseFailAlloc_2264_, 4, v_diag_2256_);
v___x_2261_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2262_ = lean_st_ref_put(v___y_2243_, v___x_2261_);
v___x_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2263_, 0, v_fst_2250_);
return v___x_2263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1___redArg___boxed(lean_object* v_e_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_){
_start:
{
lean_object* v_res_2270_; 
v_res_2270_ = l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1___redArg(v_e_2267_, v___y_2268_);
lean_dec(v___y_2268_);
return v_res_2270_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1(lean_object* v_e_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_){
_start:
{
lean_object* v___x_2279_; 
v___x_2279_ = l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1___redArg(v_e_2271_, v___y_2275_);
return v___x_2279_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1___boxed(lean_object* v_e_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_){
_start:
{
lean_object* v_res_2288_; 
v_res_2288_ = l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1(v_e_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_);
lean_dec(v___y_2286_);
lean_dec_ref(v___y_2285_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
return v_res_2288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg___lam__0(lean_object* v_stx_2289_, lean_object* v_output_2290_, lean_object* v_trees_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_){
_start:
{
lean_object* v_lctx_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v_lctx_2299_ = lean_ctor_get(v___y_2294_, 2);
lean_inc_ref(v_lctx_2299_);
v___x_2300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2300_, 0, v_lctx_2299_);
lean_ctor_set(v___x_2300_, 1, v_stx_2289_);
lean_ctor_set(v___x_2300_, 2, v_output_2290_);
v___x_2301_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
v___x_2302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2301_);
lean_ctor_set(v___x_2302_, 1, v_trees_2291_);
v___x_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v_stx_2304_, lean_object* v_output_2305_, lean_object* v_trees_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg___lam__0(v_stx_2304_, v_output_2305_, v_trees_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_);
lean_dec(v___y_2312_);
lean_dec_ref(v___y_2311_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec(v___y_2308_);
lean_dec_ref(v___y_2307_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg___lam__0(lean_object* v___y_2315_, lean_object* v_mkInfoTree_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v_a_2322_, lean_object* v_a_x3f_2323_){
_start:
{
lean_object* v___x_2325_; lean_object* v_infoState_2326_; lean_object* v_trees_2327_; lean_object* v___x_2328_; 
v___x_2325_ = lean_st_ref_get(v___y_2315_);
v_infoState_2326_ = lean_ctor_get(v___x_2325_, 8);
lean_inc_ref(v_infoState_2326_);
lean_dec(v___x_2325_);
v_trees_2327_ = lean_ctor_get(v_infoState_2326_, 2);
lean_inc_ref(v_trees_2327_);
lean_dec_ref(v_infoState_2326_);
lean_inc(v___y_2315_);
lean_inc_ref(v___y_2321_);
lean_inc(v___y_2320_);
lean_inc_ref(v___y_2319_);
lean_inc(v___y_2318_);
lean_inc_ref(v___y_2317_);
v___x_2328_ = lean_apply_8(v_mkInfoTree_2316_, v_trees_2327_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2315_, lean_box(0));
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2368_; 
v_a_2329_ = lean_ctor_get(v___x_2328_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2331_ = v___x_2328_;
v_isShared_2332_ = v_isSharedCheck_2368_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_dec(v___x_2328_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2368_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2333_; lean_object* v_infoState_2334_; lean_object* v_env_2335_; lean_object* v_nextMacroScope_2336_; lean_object* v_ngen_2337_; lean_object* v_auxDeclNGen_2338_; lean_object* v_traceState_2339_; lean_object* v_cache_2340_; lean_object* v_recordedDeps_2341_; lean_object* v_messages_2342_; lean_object* v_snapshotTasks_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2367_; 
v___x_2333_ = lean_st_ref_take(v___y_2315_);
v_infoState_2334_ = lean_ctor_get(v___x_2333_, 8);
v_env_2335_ = lean_ctor_get(v___x_2333_, 0);
v_nextMacroScope_2336_ = lean_ctor_get(v___x_2333_, 1);
v_ngen_2337_ = lean_ctor_get(v___x_2333_, 2);
v_auxDeclNGen_2338_ = lean_ctor_get(v___x_2333_, 3);
v_traceState_2339_ = lean_ctor_get(v___x_2333_, 4);
v_cache_2340_ = lean_ctor_get(v___x_2333_, 5);
v_recordedDeps_2341_ = lean_ctor_get(v___x_2333_, 6);
v_messages_2342_ = lean_ctor_get(v___x_2333_, 7);
v_snapshotTasks_2343_ = lean_ctor_get(v___x_2333_, 9);
v_isSharedCheck_2367_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2367_ == 0)
{
v___x_2345_ = v___x_2333_;
v_isShared_2346_ = v_isSharedCheck_2367_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_snapshotTasks_2343_);
lean_inc(v_infoState_2334_);
lean_inc(v_messages_2342_);
lean_inc(v_recordedDeps_2341_);
lean_inc(v_cache_2340_);
lean_inc(v_traceState_2339_);
lean_inc(v_auxDeclNGen_2338_);
lean_inc(v_ngen_2337_);
lean_inc(v_nextMacroScope_2336_);
lean_inc(v_env_2335_);
lean_dec(v___x_2333_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2367_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
uint8_t v_enabled_2347_; lean_object* v_assignment_2348_; lean_object* v_lazyAssignment_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2365_; 
v_enabled_2347_ = lean_ctor_get_uint8(v_infoState_2334_, sizeof(void*)*3);
v_assignment_2348_ = lean_ctor_get(v_infoState_2334_, 0);
v_lazyAssignment_2349_ = lean_ctor_get(v_infoState_2334_, 1);
v_isSharedCheck_2365_ = !lean_is_exclusive(v_infoState_2334_);
if (v_isSharedCheck_2365_ == 0)
{
lean_object* v_unused_2366_; 
v_unused_2366_ = lean_ctor_get(v_infoState_2334_, 2);
lean_dec(v_unused_2366_);
v___x_2351_ = v_infoState_2334_;
v_isShared_2352_ = v_isSharedCheck_2365_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_lazyAssignment_2349_);
lean_inc(v_assignment_2348_);
lean_dec(v_infoState_2334_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2365_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2356_; 
v___x_2353_ = lean_box(0);
v___x_2354_ = l_Lean_PersistentArray_push___redArg(v_a_2322_, v_a_2329_);
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 2, v___x_2354_);
v___x_2356_ = v___x_2351_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_assignment_2348_);
lean_ctor_set(v_reuseFailAlloc_2364_, 1, v_lazyAssignment_2349_);
lean_ctor_set(v_reuseFailAlloc_2364_, 2, v___x_2354_);
lean_ctor_set_uint8(v_reuseFailAlloc_2364_, sizeof(void*)*3, v_enabled_2347_);
v___x_2356_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
lean_object* v___x_2358_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 8, v___x_2356_);
v___x_2358_ = v___x_2345_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_env_2335_);
lean_ctor_set(v_reuseFailAlloc_2363_, 1, v_nextMacroScope_2336_);
lean_ctor_set(v_reuseFailAlloc_2363_, 2, v_ngen_2337_);
lean_ctor_set(v_reuseFailAlloc_2363_, 3, v_auxDeclNGen_2338_);
lean_ctor_set(v_reuseFailAlloc_2363_, 4, v_traceState_2339_);
lean_ctor_set(v_reuseFailAlloc_2363_, 5, v_cache_2340_);
lean_ctor_set(v_reuseFailAlloc_2363_, 6, v_recordedDeps_2341_);
lean_ctor_set(v_reuseFailAlloc_2363_, 7, v_messages_2342_);
lean_ctor_set(v_reuseFailAlloc_2363_, 8, v___x_2356_);
lean_ctor_set(v_reuseFailAlloc_2363_, 9, v_snapshotTasks_2343_);
v___x_2358_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
lean_object* v___x_2359_; lean_object* v___x_2361_; 
v___x_2359_ = lean_st_ref_put(v___y_2315_, v___x_2358_);
if (v_isShared_2332_ == 0)
{
lean_ctor_set(v___x_2331_, 0, v___x_2353_);
v___x_2361_ = v___x_2331_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2362_; 
v_reuseFailAlloc_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2362_, 0, v___x_2353_);
v___x_2361_ = v_reuseFailAlloc_2362_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
return v___x_2361_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2376_; 
lean_dec_ref(v_a_2322_);
v_a_2369_ = lean_ctor_get(v___x_2328_, 0);
v_isSharedCheck_2376_ = !lean_is_exclusive(v___x_2328_);
if (v_isSharedCheck_2376_ == 0)
{
v___x_2371_ = v___x_2328_;
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_a_2369_);
lean_dec(v___x_2328_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2374_; 
if (v_isShared_2372_ == 0)
{
v___x_2374_ = v___x_2371_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_a_2369_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
return v___x_2374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v___y_2377_, lean_object* v_mkInfoTree_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v_a_2384_, lean_object* v_a_x3f_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg___lam__0(v___y_2377_, v_mkInfoTree_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v_a_2384_, v_a_x3f_2385_);
lean_dec(v_a_x3f_2385_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2377_);
return v_res_2387_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2388_ = lean_unsigned_to_nat(32u);
v___x_2389_ = lean_mk_empty_array_with_capacity(v___x_2388_);
v___x_2390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2390_, 0, v___x_2389_);
return v___x_2390_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2391_ = ((size_t)5ULL);
v___x_2392_ = lean_unsigned_to_nat(0u);
v___x_2393_ = lean_unsigned_to_nat(32u);
v___x_2394_ = lean_mk_empty_array_with_capacity(v___x_2393_);
v___x_2395_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__0);
v___x_2396_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
lean_ctor_set(v___x_2396_, 1, v___x_2394_);
lean_ctor_set(v___x_2396_, 2, v___x_2392_);
lean_ctor_set(v___x_2396_, 3, v___x_2392_);
lean_ctor_set_usize(v___x_2396_, 4, v___x_2391_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg(lean_object* v___y_2397_){
_start:
{
lean_object* v___x_2399_; lean_object* v_infoState_2400_; lean_object* v_trees_2401_; lean_object* v___x_2402_; lean_object* v_infoState_2403_; lean_object* v_env_2404_; lean_object* v_nextMacroScope_2405_; lean_object* v_ngen_2406_; lean_object* v_auxDeclNGen_2407_; lean_object* v_traceState_2408_; lean_object* v_cache_2409_; lean_object* v_recordedDeps_2410_; lean_object* v_messages_2411_; lean_object* v_snapshotTasks_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2433_; 
v___x_2399_ = lean_st_ref_get(v___y_2397_);
v_infoState_2400_ = lean_ctor_get(v___x_2399_, 8);
lean_inc_ref(v_infoState_2400_);
lean_dec(v___x_2399_);
v_trees_2401_ = lean_ctor_get(v_infoState_2400_, 2);
lean_inc_ref(v_trees_2401_);
lean_dec_ref(v_infoState_2400_);
v___x_2402_ = lean_st_ref_take(v___y_2397_);
v_infoState_2403_ = lean_ctor_get(v___x_2402_, 8);
v_env_2404_ = lean_ctor_get(v___x_2402_, 0);
v_nextMacroScope_2405_ = lean_ctor_get(v___x_2402_, 1);
v_ngen_2406_ = lean_ctor_get(v___x_2402_, 2);
v_auxDeclNGen_2407_ = lean_ctor_get(v___x_2402_, 3);
v_traceState_2408_ = lean_ctor_get(v___x_2402_, 4);
v_cache_2409_ = lean_ctor_get(v___x_2402_, 5);
v_recordedDeps_2410_ = lean_ctor_get(v___x_2402_, 6);
v_messages_2411_ = lean_ctor_get(v___x_2402_, 7);
v_snapshotTasks_2412_ = lean_ctor_get(v___x_2402_, 9);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2414_ = v___x_2402_;
v_isShared_2415_ = v_isSharedCheck_2433_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_snapshotTasks_2412_);
lean_inc(v_infoState_2403_);
lean_inc(v_messages_2411_);
lean_inc(v_recordedDeps_2410_);
lean_inc(v_cache_2409_);
lean_inc(v_traceState_2408_);
lean_inc(v_auxDeclNGen_2407_);
lean_inc(v_ngen_2406_);
lean_inc(v_nextMacroScope_2405_);
lean_inc(v_env_2404_);
lean_dec(v___x_2402_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2433_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
uint8_t v_enabled_2416_; lean_object* v_assignment_2417_; lean_object* v_lazyAssignment_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2431_; 
v_enabled_2416_ = lean_ctor_get_uint8(v_infoState_2403_, sizeof(void*)*3);
v_assignment_2417_ = lean_ctor_get(v_infoState_2403_, 0);
v_lazyAssignment_2418_ = lean_ctor_get(v_infoState_2403_, 1);
v_isSharedCheck_2431_ = !lean_is_exclusive(v_infoState_2403_);
if (v_isSharedCheck_2431_ == 0)
{
lean_object* v_unused_2432_; 
v_unused_2432_ = lean_ctor_get(v_infoState_2403_, 2);
lean_dec(v_unused_2432_);
v___x_2420_ = v_infoState_2403_;
v_isShared_2421_ = v_isSharedCheck_2431_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_lazyAssignment_2418_);
lean_inc(v_assignment_2417_);
lean_dec(v_infoState_2403_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2431_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2422_; lean_object* v___x_2424_; 
v___x_2422_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___closed__1);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 2, v___x_2422_);
v___x_2424_ = v___x_2420_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v_assignment_2417_);
lean_ctor_set(v_reuseFailAlloc_2430_, 1, v_lazyAssignment_2418_);
lean_ctor_set(v_reuseFailAlloc_2430_, 2, v___x_2422_);
lean_ctor_set_uint8(v_reuseFailAlloc_2430_, sizeof(void*)*3, v_enabled_2416_);
v___x_2424_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
lean_object* v___x_2426_; 
if (v_isShared_2415_ == 0)
{
lean_ctor_set(v___x_2414_, 8, v___x_2424_);
v___x_2426_ = v___x_2414_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_env_2404_);
lean_ctor_set(v_reuseFailAlloc_2429_, 1, v_nextMacroScope_2405_);
lean_ctor_set(v_reuseFailAlloc_2429_, 2, v_ngen_2406_);
lean_ctor_set(v_reuseFailAlloc_2429_, 3, v_auxDeclNGen_2407_);
lean_ctor_set(v_reuseFailAlloc_2429_, 4, v_traceState_2408_);
lean_ctor_set(v_reuseFailAlloc_2429_, 5, v_cache_2409_);
lean_ctor_set(v_reuseFailAlloc_2429_, 6, v_recordedDeps_2410_);
lean_ctor_set(v_reuseFailAlloc_2429_, 7, v_messages_2411_);
lean_ctor_set(v_reuseFailAlloc_2429_, 8, v___x_2424_);
lean_ctor_set(v_reuseFailAlloc_2429_, 9, v_snapshotTasks_2412_);
v___x_2426_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2427_ = lean_st_ref_put(v___y_2397_, v___x_2426_);
v___x_2428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2428_, 0, v_trees_2401_);
return v___x_2428_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v___y_2434_, lean_object* v___y_2435_){
_start:
{
lean_object* v_res_2436_; 
v_res_2436_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg(v___y_2434_);
lean_dec(v___y_2434_);
return v_res_2436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg(lean_object* v_x_2437_, lean_object* v_mkInfoTree_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v___x_2446_; lean_object* v_infoState_2447_; uint8_t v_enabled_2448_; 
v___x_2446_ = lean_st_ref_get(v___y_2444_);
v_infoState_2447_ = lean_ctor_get(v___x_2446_, 8);
lean_inc_ref(v_infoState_2447_);
lean_dec(v___x_2446_);
v_enabled_2448_ = lean_ctor_get_uint8(v_infoState_2447_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2447_);
if (v_enabled_2448_ == 0)
{
lean_object* v___x_2449_; 
lean_dec_ref(v_mkInfoTree_2438_);
lean_inc(v___y_2444_);
lean_inc_ref(v___y_2443_);
lean_inc(v___y_2442_);
lean_inc_ref(v___y_2441_);
lean_inc(v___y_2440_);
lean_inc_ref(v___y_2439_);
v___x_2449_ = lean_apply_7(v_x_2437_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, lean_box(0));
return v___x_2449_;
}
else
{
lean_object* v___x_2450_; lean_object* v_a_2451_; lean_object* v_r_2452_; 
v___x_2450_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg(v___y_2444_);
v_a_2451_ = lean_ctor_get(v___x_2450_, 0);
lean_inc(v_a_2451_);
lean_dec_ref(v___x_2450_);
lean_inc(v___y_2444_);
lean_inc_ref(v___y_2443_);
lean_inc(v___y_2442_);
lean_inc_ref(v___y_2441_);
lean_inc(v___y_2440_);
lean_inc_ref(v___y_2439_);
v_r_2452_ = lean_apply_7(v_x_2437_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, lean_box(0));
if (lean_obj_tag(v_r_2452_) == 0)
{
lean_object* v_a_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2477_; 
v_a_2453_ = lean_ctor_get(v_r_2452_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v_r_2452_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2455_ = v_r_2452_;
v_isShared_2456_ = v_isSharedCheck_2477_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_a_2453_);
lean_dec(v_r_2452_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2477_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v___x_2458_; 
lean_inc(v_a_2453_);
if (v_isShared_2456_ == 0)
{
lean_ctor_set_tag(v___x_2455_, 1);
v___x_2458_ = v___x_2455_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2453_);
v___x_2458_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
lean_object* v___x_2459_; 
v___x_2459_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg___lam__0(v___y_2444_, v_mkInfoTree_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v_a_2451_, v___x_2458_);
lean_dec_ref(v___x_2458_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2466_; 
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2466_ == 0)
{
lean_object* v_unused_2467_; 
v_unused_2467_ = lean_ctor_get(v___x_2459_, 0);
lean_dec(v_unused_2467_);
v___x_2461_ = v___x_2459_;
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
else
{
lean_dec(v___x_2459_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2464_; 
if (v_isShared_2462_ == 0)
{
lean_ctor_set(v___x_2461_, 0, v_a_2453_);
v___x_2464_ = v___x_2461_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_a_2453_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
else
{
lean_object* v_a_2468_; lean_object* v___x_2470_; uint8_t v_isShared_2471_; uint8_t v_isSharedCheck_2475_; 
lean_dec(v_a_2453_);
v_a_2468_ = lean_ctor_get(v___x_2459_, 0);
v_isSharedCheck_2475_ = !lean_is_exclusive(v___x_2459_);
if (v_isSharedCheck_2475_ == 0)
{
v___x_2470_ = v___x_2459_;
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
else
{
lean_inc(v_a_2468_);
lean_dec(v___x_2459_);
v___x_2470_ = lean_box(0);
v_isShared_2471_ = v_isSharedCheck_2475_;
goto v_resetjp_2469_;
}
v_resetjp_2469_:
{
lean_object* v___x_2473_; 
if (v_isShared_2471_ == 0)
{
v___x_2473_ = v___x_2470_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v_a_2468_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
return v___x_2473_;
}
}
}
}
}
}
else
{
lean_object* v_a_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
v_a_2478_ = lean_ctor_get(v_r_2452_, 0);
lean_inc(v_a_2478_);
lean_dec_ref_known(v_r_2452_, 1);
v___x_2479_ = lean_box(0);
v___x_2480_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg___lam__0(v___y_2444_, v_mkInfoTree_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v_a_2451_, v___x_2479_);
if (lean_obj_tag(v___x_2480_) == 0)
{
lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2480_);
if (v_isSharedCheck_2487_ == 0)
{
lean_object* v_unused_2488_; 
v_unused_2488_ = lean_ctor_get(v___x_2480_, 0);
lean_dec(v_unused_2488_);
v___x_2482_ = v___x_2480_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_dec(v___x_2480_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
lean_ctor_set_tag(v___x_2482_, 1);
lean_ctor_set(v___x_2482_, 0, v_a_2478_);
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2478_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
else
{
lean_object* v_a_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2496_; 
lean_dec(v_a_2478_);
v_a_2489_ = lean_ctor_get(v___x_2480_, 0);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2480_);
if (v_isSharedCheck_2496_ == 0)
{
v___x_2491_ = v___x_2480_;
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
else
{
lean_inc(v_a_2489_);
lean_dec(v___x_2480_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2496_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2494_; 
if (v_isShared_2492_ == 0)
{
v___x_2494_ = v___x_2491_;
goto v_reusejp_2493_;
}
else
{
lean_object* v_reuseFailAlloc_2495_; 
v_reuseFailAlloc_2495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2495_, 0, v_a_2489_);
v___x_2494_ = v_reuseFailAlloc_2495_;
goto v_reusejp_2493_;
}
v_reusejp_2493_:
{
return v___x_2494_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_2497_, lean_object* v_mkInfoTree_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_){
_start:
{
lean_object* v_res_2506_; 
v_res_2506_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg(v_x_2497_, v_mkInfoTree_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
lean_dec(v___y_2502_);
lean_dec_ref(v___y_2501_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
return v_res_2506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg(lean_object* v_stx_2507_, lean_object* v_output_2508_, lean_object* v_x_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v___f_2517_; lean_object* v___x_2518_; 
v___f_2517_ = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_2517_, 0, v_stx_2507_);
lean_closure_set(v___f_2517_, 1, v_output_2508_);
v___x_2518_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg(v_x_2509_, v___f_2517_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
return v___x_2518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg___boxed(lean_object* v_stx_2519_, lean_object* v_output_2520_, lean_object* v_x_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg(v_stx_2519_, v_output_2520_, v_x_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_);
lean_dec(v___y_2527_);
lean_dec_ref(v___y_2526_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0___redArg(lean_object* v_beforeStx_2530_, lean_object* v_afterStx_2531_, lean_object* v_x_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_){
_start:
{
lean_object* v_declName_x3f_2540_; lean_object* v_macroStack_2541_; uint8_t v_mayPostpone_2542_; uint8_t v_errToSorry_2543_; lean_object* v_autoBoundImplicitContext_2544_; lean_object* v_autoBoundImplicitForbidden_2545_; lean_object* v_sectionVars_2546_; lean_object* v_sectionFVars_2547_; uint8_t v_implicitLambda_2548_; uint8_t v_heedElabAsElim_2549_; uint8_t v_isNoncomputableSection_2550_; uint8_t v_isMetaSection_2551_; uint8_t v_ignoreTCFailures_2552_; uint8_t v_inPattern_2553_; lean_object* v_tacSnap_x3f_2554_; uint8_t v_saveRecAppSyntax_2555_; uint8_t v_holesAsSyntheticOpaque_2556_; lean_object* v_fixedTermElabs_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v_declName_x3f_2540_ = lean_ctor_get(v___y_2533_, 0);
v_macroStack_2541_ = lean_ctor_get(v___y_2533_, 1);
v_mayPostpone_2542_ = lean_ctor_get_uint8(v___y_2533_, sizeof(void*)*8);
v_errToSorry_2543_ = lean_ctor_get_uint8(v___y_2533_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_2544_ = lean_ctor_get(v___y_2533_, 2);
v_autoBoundImplicitForbidden_2545_ = lean_ctor_get(v___y_2533_, 3);
v_sectionVars_2546_ = lean_ctor_get(v___y_2533_, 4);
v_sectionFVars_2547_ = lean_ctor_get(v___y_2533_, 5);
v_implicitLambda_2548_ = lean_ctor_get_uint8(v___y_2533_, sizeof(void*)*8 + 2);
v_heedElabAsElim_2549_ = lean_ctor_get_uint8(v___y_2533_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_2550_ = lean_ctor_get_uint8(v___y_2533_, sizeof(void*)*8 + 4);
v_isMetaSection_2551_ = lean_ctor_get_uint8(v___y_2533_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_2552_ = lean_ctor_get_uint8(v___y_2533_, sizeof(void*)*8 + 6);
v_inPattern_2553_ = lean_ctor_get_uint8(v___y_2533_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_2554_ = lean_ctor_get(v___y_2533_, 6);
v_saveRecAppSyntax_2555_ = lean_ctor_get_uint8(v___y_2533_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_2556_ = lean_ctor_get_uint8(v___y_2533_, sizeof(void*)*8 + 9);
v_fixedTermElabs_2557_ = lean_ctor_get(v___y_2533_, 7);
v___x_2558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2558_, 0, v_beforeStx_2530_);
lean_ctor_set(v___x_2558_, 1, v_afterStx_2531_);
lean_inc(v_macroStack_2541_);
v___x_2559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2558_);
lean_ctor_set(v___x_2559_, 1, v_macroStack_2541_);
lean_inc_ref(v_fixedTermElabs_2557_);
lean_inc(v_tacSnap_x3f_2554_);
lean_inc(v_sectionFVars_2547_);
lean_inc(v_sectionVars_2546_);
lean_inc_ref(v_autoBoundImplicitForbidden_2545_);
lean_inc(v_autoBoundImplicitContext_2544_);
lean_inc(v_declName_x3f_2540_);
v___x_2560_ = lean_alloc_ctor(0, 8, 10);
lean_ctor_set(v___x_2560_, 0, v_declName_x3f_2540_);
lean_ctor_set(v___x_2560_, 1, v___x_2559_);
lean_ctor_set(v___x_2560_, 2, v_autoBoundImplicitContext_2544_);
lean_ctor_set(v___x_2560_, 3, v_autoBoundImplicitForbidden_2545_);
lean_ctor_set(v___x_2560_, 4, v_sectionVars_2546_);
lean_ctor_set(v___x_2560_, 5, v_sectionFVars_2547_);
lean_ctor_set(v___x_2560_, 6, v_tacSnap_x3f_2554_);
lean_ctor_set(v___x_2560_, 7, v_fixedTermElabs_2557_);
lean_ctor_set_uint8(v___x_2560_, sizeof(void*)*8, v_mayPostpone_2542_);
lean_ctor_set_uint8(v___x_2560_, sizeof(void*)*8 + 1, v_errToSorry_2543_);
lean_ctor_set_uint8(v___x_2560_, sizeof(void*)*8 + 2, v_implicitLambda_2548_);
lean_ctor_set_uint8(v___x_2560_, sizeof(void*)*8 + 3, v_heedElabAsElim_2549_);
lean_ctor_set_uint8(v___x_2560_, sizeof(void*)*8 + 4, v_isNoncomputableSection_2550_);
lean_ctor_set_uint8(v___x_2560_, sizeof(void*)*8 + 5, v_isMetaSection_2551_);
lean_ctor_set_uint8(v___x_2560_, sizeof(void*)*8 + 6, v_ignoreTCFailures_2552_);
lean_ctor_set_uint8(v___x_2560_, sizeof(void*)*8 + 7, v_inPattern_2553_);
lean_ctor_set_uint8(v___x_2560_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_2555_);
lean_ctor_set_uint8(v___x_2560_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_2556_);
lean_inc(v___y_2538_);
lean_inc_ref(v___y_2537_);
lean_inc(v___y_2536_);
lean_inc_ref(v___y_2535_);
lean_inc(v___y_2534_);
v___x_2561_ = lean_apply_7(v_x_2532_, v___x_2560_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, lean_box(0));
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0___redArg___boxed(lean_object* v_beforeStx_2562_, lean_object* v_afterStx_2563_, lean_object* v_x_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0___redArg(v_beforeStx_2562_, v_afterStx_2563_, v_x_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
lean_dec(v___y_2570_);
lean_dec_ref(v___y_2569_);
lean_dec(v___y_2568_);
lean_dec_ref(v___y_2567_);
lean_dec(v___y_2566_);
lean_dec_ref(v___y_2565_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0(lean_object* v_00_u03b1_2573_, lean_object* v_beforeStx_2574_, lean_object* v_afterStx_2575_, lean_object* v_x_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
lean_object* v___x_2584_; 
v___x_2584_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0___redArg(v_beforeStx_2574_, v_afterStx_2575_, v_x_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
return v___x_2584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2585_, lean_object* v_beforeStx_2586_, lean_object* v_afterStx_2587_, lean_object* v_x_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0(v_00_u03b1_2585_, v_beforeStx_2586_, v_afterStx_2587_, v_x_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_);
lean_dec(v___y_2594_);
lean_dec_ref(v___y_2593_);
lean_dec(v___y_2592_);
lean_dec_ref(v___y_2591_);
lean_dec(v___y_2590_);
lean_dec_ref(v___y_2589_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0___redArg(lean_object* v_beforeStx_2597_, lean_object* v_afterStx_2598_, lean_object* v_x_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_){
_start:
{
lean_object* v___x_2607_; lean_object* v___x_2608_; 
lean_inc(v_afterStx_2598_);
lean_inc(v_beforeStx_2597_);
v___x_2607_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withPushMacroExpansionStack___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__0___boxed), 11, 4);
lean_closure_set(v___x_2607_, 0, lean_box(0));
lean_closure_set(v___x_2607_, 1, v_beforeStx_2597_);
lean_closure_set(v___x_2607_, 2, v_afterStx_2598_);
lean_closure_set(v___x_2607_, 3, v_x_2599_);
v___x_2608_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg(v_beforeStx_2597_, v_afterStx_2598_, v___x_2607_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2616_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2611_ = v___x_2608_;
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_a_2609_);
lean_dec(v___x_2608_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2614_; 
if (v_isShared_2612_ == 0)
{
v___x_2614_ = v___x_2611_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v_a_2609_);
v___x_2614_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
return v___x_2614_;
}
}
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
v_a_2617_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2608_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2608_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_a_2617_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0___redArg___boxed(lean_object* v_beforeStx_2625_, lean_object* v_afterStx_2626_, lean_object* v_x_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0___redArg(v_beforeStx_2625_, v_afterStx_2626_, v_x_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
lean_dec(v___y_2633_);
lean_dec_ref(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
return v_res_2635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermIteAuto(lean_object* v_stx_2647_, lean_object* v_expectedType_x3f_2648_, lean_object* v_a_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_){
_start:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; uint8_t v___x_2659_; lean_object* v_stxNew_2661_; lean_object* v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2666_; lean_object* v___y_2667_; lean_object* v___x_2672_; 
v___x_2656_ = lean_unsigned_to_nat(2u);
v___x_2657_ = l_Lean_Syntax_getArg(v_stx_2647_, v___x_2656_);
v___x_2658_ = lean_box(0);
v___x_2659_ = 1;
v___x_2672_ = l_Lean_Elab_Term_elabTerm(v___x_2657_, v___x_2658_, v___x_2659_, v___x_2659_, v_a_2649_, v_a_2650_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2672_) == 0)
{
lean_object* v_a_2673_; lean_object* v___x_2674_; 
v_a_2673_ = lean_ctor_get(v___x_2672_, 0);
lean_inc_n(v_a_2673_, 2);
lean_dec_ref_known(v___x_2672_, 1);
lean_inc(v_a_2654_);
lean_inc_ref(v_a_2653_);
lean_inc(v_a_2652_);
lean_inc_ref(v_a_2651_);
v___x_2674_ = lean_infer_type(v_a_2673_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2675_; lean_object* v___x_2676_; lean_object* v_a_2677_; lean_object* v___x_2678_; 
v_a_2675_ = lean_ctor_get(v___x_2674_, 0);
lean_inc(v_a_2675_);
lean_dec_ref_known(v___x_2674_, 1);
v___x_2676_ = l_Lean_instantiateMVars___at___00Lean_Elab_Term_elabTermIteAuto_spec__1___redArg(v_a_2675_, v_a_2652_);
v_a_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_a_2677_);
lean_dec_ref(v___x_2676_);
v___x_2678_ = l_Lean_Meta_whnfR(v_a_2677_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v_a_2679_; lean_object* v___x_2680_; uint8_t v___x_2681_; lean_object* v___x_2682_; 
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
lean_inc(v_a_2679_);
lean_dec_ref_known(v___x_2678_, 1);
v___x_2680_ = ((lean_object*)(l_Lean_Elab_Term_elabTermIteAuto___closed__0));
v___x_2681_ = l_Lean_Expr_isConstOf(v_a_2679_, v___x_2680_);
lean_dec(v_a_2679_);
v___x_2682_ = l_Lean_Elab_Term_exprToSyntax(v_a_2673_, v_a_2649_, v_a_2650_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
if (lean_obj_tag(v___x_2682_) == 0)
{
lean_object* v_a_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; uint8_t v___x_2690_; 
v_a_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_a_2683_);
lean_dec_ref_known(v___x_2682_, 1);
v___x_2684_ = lean_unsigned_to_nat(4u);
v___x_2685_ = l_Lean_Syntax_getArg(v_stx_2647_, v___x_2684_);
v___x_2686_ = lean_unsigned_to_nat(6u);
v___x_2687_ = l_Lean_Syntax_getArg(v_stx_2647_, v___x_2686_);
v___x_2688_ = lean_unsigned_to_nat(1u);
v___x_2689_ = l_Lean_Syntax_getArg(v_stx_2647_, v___x_2688_);
v___x_2690_ = l_Lean_Syntax_isNone(v___x_2689_);
if (v___x_2690_ == 0)
{
lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___y_2694_; lean_object* v___x_2781_; uint8_t v___x_2782_; 
v___x_2691_ = lean_unsigned_to_nat(0u);
v___x_2692_ = l_Lean_Syntax_getArg(v___x_2689_, v___x_2691_);
lean_dec(v___x_2689_);
v___x_2781_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__10));
lean_inc(v___x_2692_);
v___x_2782_ = l_Lean_Syntax_isOfKind(v___x_2692_, v___x_2781_);
if (v___x_2782_ == 0)
{
v___y_2694_ = v___x_2692_;
goto v___jp_2693_;
}
else
{
lean_object* v___x_2783_; 
v___x_2783_ = l_Lean_Syntax_getArg(v___x_2692_, v___x_2691_);
lean_dec(v___x_2692_);
v___y_2694_ = v___x_2783_;
goto v___jp_2693_;
}
v___jp_2693_:
{
if (v___x_2681_ == 0)
{
lean_object* v_toCold_2695_; lean_object* v_ref_2696_; lean_object* v_quotContext_2697_; lean_object* v_currMacroScope_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v_toCold_2695_ = lean_ctor_get(v_a_2653_, 0);
v_ref_2696_ = lean_ctor_get(v_a_2653_, 2);
v_quotContext_2697_ = lean_ctor_get(v_toCold_2695_, 8);
v_currMacroScope_2698_ = lean_ctor_get(v_toCold_2695_, 9);
v___x_2699_ = l_Lean_SourceInfo_fromRef(v_ref_2696_, v___x_2681_);
v___x_2700_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1));
v___x_2701_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__10, &l_Lean_Elab_Do_elabDoUIf___lam__0___closed__10_once, _init_l_Lean_Elab_Do_elabDoUIf___lam__0___closed__10);
v___x_2702_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__12));
lean_inc_n(v_currMacroScope_2698_, 2);
lean_inc_n(v_quotContext_2697_, 2);
v___x_2703_ = l_Lean_addMacroScope(v_quotContext_2697_, v___x_2702_, v_currMacroScope_2698_);
v___x_2704_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__16));
lean_inc_n(v___x_2699_, 17);
v___x_2705_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2699_);
lean_ctor_set(v___x_2705_, 1, v___x_2701_);
lean_ctor_set(v___x_2705_, 2, v___x_2703_);
lean_ctor_set(v___x_2705_, 3, v___x_2704_);
v___x_2706_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_2707_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18));
v___x_2708_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20));
v___x_2709_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__21));
v___x_2710_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2710_, 0, v___x_2699_);
lean_ctor_set(v___x_2710_, 1, v___x_2709_);
v___x_2711_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__23));
v___x_2712_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25, &l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25_once, _init_l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25);
v___x_2713_ = lean_box(0);
v___x_2714_ = l_Lean_addMacroScope(v_quotContext_2697_, v___x_2713_, v_currMacroScope_2698_);
v___x_2715_ = ((lean_object*)(l_Lean_Elab_Term_elabTermIteAuto___closed__3));
v___x_2716_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2699_);
lean_ctor_set(v___x_2716_, 1, v___x_2712_);
lean_ctor_set(v___x_2716_, 2, v___x_2714_);
lean_ctor_set(v___x_2716_, 3, v___x_2715_);
v___x_2717_ = l_Lean_Syntax_node1(v___x_2699_, v___x_2711_, v___x_2716_);
v___x_2718_ = l_Lean_Syntax_node2(v___x_2699_, v___x_2708_, v___x_2710_, v___x_2717_);
v___x_2719_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__36));
v___x_2720_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37));
v___x_2721_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2699_);
lean_ctor_set(v___x_2721_, 1, v___x_2719_);
v___x_2722_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39));
v___x_2723_ = l_Lean_Syntax_node1(v___x_2699_, v___x_2706_, v___y_2694_);
v___x_2724_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6);
v___x_2725_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2699_);
lean_ctor_set(v___x_2725_, 1, v___x_2706_);
lean_ctor_set(v___x_2725_, 2, v___x_2724_);
v___x_2726_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__28));
v___x_2727_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2727_, 0, v___x_2699_);
lean_ctor_set(v___x_2727_, 1, v___x_2726_);
lean_inc_ref(v___x_2727_);
lean_inc_ref(v___x_2725_);
lean_inc(v___x_2723_);
v___x_2728_ = l_Lean_Syntax_node4(v___x_2699_, v___x_2722_, v___x_2723_, v___x_2725_, v___x_2727_, v___x_2685_);
lean_inc_ref(v___x_2721_);
v___x_2729_ = l_Lean_Syntax_node2(v___x_2699_, v___x_2720_, v___x_2721_, v___x_2728_);
v___x_2730_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__40));
v___x_2731_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2731_, 0, v___x_2699_);
lean_ctor_set(v___x_2731_, 1, v___x_2730_);
lean_inc_ref(v___x_2731_);
lean_inc(v___x_2718_);
v___x_2732_ = l_Lean_Syntax_node3(v___x_2699_, v___x_2707_, v___x_2718_, v___x_2729_, v___x_2731_);
v___x_2733_ = l_Lean_Syntax_node4(v___x_2699_, v___x_2722_, v___x_2723_, v___x_2725_, v___x_2727_, v___x_2687_);
v___x_2734_ = l_Lean_Syntax_node2(v___x_2699_, v___x_2720_, v___x_2721_, v___x_2733_);
v___x_2735_ = l_Lean_Syntax_node3(v___x_2699_, v___x_2707_, v___x_2718_, v___x_2734_, v___x_2731_);
v___x_2736_ = l_Lean_Syntax_node3(v___x_2699_, v___x_2706_, v_a_2683_, v___x_2732_, v___x_2735_);
v___x_2737_ = l_Lean_Syntax_node2(v___x_2699_, v___x_2700_, v___x_2705_, v___x_2736_);
v_stxNew_2661_ = v___x_2737_;
v___y_2662_ = v_a_2649_;
v___y_2663_ = v_a_2650_;
v___y_2664_ = v_a_2651_;
v___y_2665_ = v_a_2652_;
v___y_2666_ = v_a_2653_;
v___y_2667_ = v_a_2654_;
goto v___jp_2660_;
}
else
{
lean_object* v_toCold_2738_; lean_object* v_ref_2739_; lean_object* v_quotContext_2740_; lean_object* v_currMacroScope_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v_toCold_2738_ = lean_ctor_get(v_a_2653_, 0);
v_ref_2739_ = lean_ctor_get(v_a_2653_, 2);
v_quotContext_2740_ = lean_ctor_get(v_toCold_2738_, 8);
v_currMacroScope_2741_ = lean_ctor_get(v_toCold_2738_, 9);
v___x_2742_ = l_Lean_SourceInfo_fromRef(v_ref_2739_, v___x_2690_);
v___x_2743_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1));
v___x_2744_ = lean_obj_once(&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__8, &l_Lean_Elab_Do_elabDoBIf___lam__0___closed__8_once, _init_l_Lean_Elab_Do_elabDoBIf___lam__0___closed__8);
v___x_2745_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBIf___lam__0___closed__11));
lean_inc_n(v_currMacroScope_2741_, 2);
lean_inc_n(v_quotContext_2740_, 2);
v___x_2746_ = l_Lean_addMacroScope(v_quotContext_2740_, v___x_2745_, v_currMacroScope_2741_);
v___x_2747_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBIf___lam__0___closed__15));
lean_inc_n(v___x_2742_, 17);
v___x_2748_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2742_);
lean_ctor_set(v___x_2748_, 1, v___x_2744_);
lean_ctor_set(v___x_2748_, 2, v___x_2746_);
lean_ctor_set(v___x_2748_, 3, v___x_2747_);
v___x_2749_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_2750_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__18));
v___x_2751_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__20));
v___x_2752_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__21));
v___x_2753_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2742_);
lean_ctor_set(v___x_2753_, 1, v___x_2752_);
v___x_2754_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__23));
v___x_2755_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25, &l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25_once, _init_l_Lean_Elab_Do_elabDoUIf___lam__0___closed__25);
v___x_2756_ = lean_box(0);
v___x_2757_ = l_Lean_addMacroScope(v_quotContext_2740_, v___x_2756_, v_currMacroScope_2741_);
v___x_2758_ = ((lean_object*)(l_Lean_Elab_Term_elabTermIteAuto___closed__3));
v___x_2759_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2742_);
lean_ctor_set(v___x_2759_, 1, v___x_2755_);
lean_ctor_set(v___x_2759_, 2, v___x_2757_);
lean_ctor_set(v___x_2759_, 3, v___x_2758_);
v___x_2760_ = l_Lean_Syntax_node1(v___x_2742_, v___x_2754_, v___x_2759_);
v___x_2761_ = l_Lean_Syntax_node2(v___x_2742_, v___x_2751_, v___x_2753_, v___x_2760_);
v___x_2762_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__36));
v___x_2763_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__37));
v___x_2764_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2742_);
lean_ctor_set(v___x_2764_, 1, v___x_2762_);
v___x_2765_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__39));
v___x_2766_ = l_Lean_Syntax_node1(v___x_2742_, v___x_2749_, v___y_2694_);
v___x_2767_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__6);
v___x_2768_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2768_, 0, v___x_2742_);
lean_ctor_set(v___x_2768_, 1, v___x_2749_);
lean_ctor_set(v___x_2768_, 2, v___x_2767_);
v___x_2769_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIfChain_spec__1___closed__28));
v___x_2770_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2742_);
lean_ctor_set(v___x_2770_, 1, v___x_2769_);
lean_inc_ref(v___x_2770_);
lean_inc_ref(v___x_2768_);
lean_inc(v___x_2766_);
v___x_2771_ = l_Lean_Syntax_node4(v___x_2742_, v___x_2765_, v___x_2766_, v___x_2768_, v___x_2770_, v___x_2685_);
lean_inc_ref(v___x_2764_);
v___x_2772_ = l_Lean_Syntax_node2(v___x_2742_, v___x_2763_, v___x_2764_, v___x_2771_);
v___x_2773_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__40));
v___x_2774_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2742_);
lean_ctor_set(v___x_2774_, 1, v___x_2773_);
lean_inc_ref(v___x_2774_);
lean_inc(v___x_2761_);
v___x_2775_ = l_Lean_Syntax_node3(v___x_2742_, v___x_2750_, v___x_2761_, v___x_2772_, v___x_2774_);
v___x_2776_ = l_Lean_Syntax_node4(v___x_2742_, v___x_2765_, v___x_2766_, v___x_2768_, v___x_2770_, v___x_2687_);
v___x_2777_ = l_Lean_Syntax_node2(v___x_2742_, v___x_2763_, v___x_2764_, v___x_2776_);
v___x_2778_ = l_Lean_Syntax_node3(v___x_2742_, v___x_2750_, v___x_2761_, v___x_2777_, v___x_2774_);
v___x_2779_ = l_Lean_Syntax_node3(v___x_2742_, v___x_2749_, v_a_2683_, v___x_2775_, v___x_2778_);
v___x_2780_ = l_Lean_Syntax_node2(v___x_2742_, v___x_2743_, v___x_2748_, v___x_2779_);
v_stxNew_2661_ = v___x_2780_;
v___y_2662_ = v_a_2649_;
v___y_2663_ = v_a_2650_;
v___y_2664_ = v_a_2651_;
v___y_2665_ = v_a_2652_;
v___y_2666_ = v_a_2653_;
v___y_2667_ = v_a_2654_;
goto v___jp_2660_;
}
}
}
else
{
lean_dec(v___x_2689_);
if (v___x_2681_ == 0)
{
lean_object* v_toCold_2784_; lean_object* v_ref_2785_; lean_object* v_quotContext_2786_; lean_object* v_currMacroScope_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; 
v_toCold_2784_ = lean_ctor_get(v_a_2653_, 0);
v_ref_2785_ = lean_ctor_get(v_a_2653_, 2);
v_quotContext_2786_ = lean_ctor_get(v_toCold_2784_, 8);
v_currMacroScope_2787_ = lean_ctor_get(v_toCold_2784_, 9);
v___x_2788_ = l_Lean_SourceInfo_fromRef(v_ref_2785_, v___x_2681_);
v___x_2789_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1));
v___x_2790_ = lean_obj_once(&l_Lean_Elab_Do_elabDoUIf___lam__0___closed__3, &l_Lean_Elab_Do_elabDoUIf___lam__0___closed__3_once, _init_l_Lean_Elab_Do_elabDoUIf___lam__0___closed__3);
v___x_2791_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__6));
lean_inc(v_currMacroScope_2787_);
lean_inc(v_quotContext_2786_);
v___x_2792_ = l_Lean_addMacroScope(v_quotContext_2786_, v___x_2791_, v_currMacroScope_2787_);
v___x_2793_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__8));
lean_inc_n(v___x_2788_, 2);
v___x_2794_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2788_);
lean_ctor_set(v___x_2794_, 1, v___x_2790_);
lean_ctor_set(v___x_2794_, 2, v___x_2792_);
lean_ctor_set(v___x_2794_, 3, v___x_2793_);
v___x_2795_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_2796_ = l_Lean_Syntax_node3(v___x_2788_, v___x_2795_, v_a_2683_, v___x_2685_, v___x_2687_);
v___x_2797_ = l_Lean_Syntax_node2(v___x_2788_, v___x_2789_, v___x_2794_, v___x_2796_);
v_stxNew_2661_ = v___x_2797_;
v___y_2662_ = v_a_2649_;
v___y_2663_ = v_a_2650_;
v___y_2664_ = v_a_2651_;
v___y_2665_ = v_a_2652_;
v___y_2666_ = v_a_2653_;
v___y_2667_ = v_a_2654_;
goto v___jp_2660_;
}
else
{
lean_object* v_toCold_2798_; lean_object* v_ref_2799_; lean_object* v_quotContext_2800_; lean_object* v_currMacroScope_2801_; uint8_t v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; 
v_toCold_2798_ = lean_ctor_get(v_a_2653_, 0);
v_ref_2799_ = lean_ctor_get(v_a_2653_, 2);
v_quotContext_2800_ = lean_ctor_get(v_toCold_2798_, 8);
v_currMacroScope_2801_ = lean_ctor_get(v_toCold_2798_, 9);
v___x_2802_ = 0;
v___x_2803_ = l_Lean_SourceInfo_fromRef(v_ref_2799_, v___x_2802_);
v___x_2804_ = ((lean_object*)(l_Lean_Elab_Do_elabDoUIf___lam__0___closed__1));
v___x_2805_ = lean_obj_once(&l_Lean_Elab_Do_elabDoBIf___lam__0___closed__1, &l_Lean_Elab_Do_elabDoBIf___lam__0___closed__1_once, _init_l_Lean_Elab_Do_elabDoBIf___lam__0___closed__1);
v___x_2806_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBIf___lam__0___closed__2));
lean_inc(v_currMacroScope_2801_);
lean_inc(v_quotContext_2800_);
v___x_2807_ = l_Lean_addMacroScope(v_quotContext_2800_, v___x_2806_, v_currMacroScope_2801_);
v___x_2808_ = ((lean_object*)(l_Lean_Elab_Do_elabDoBIf___lam__0___closed__6));
lean_inc_n(v___x_2803_, 2);
v___x_2809_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2809_, 0, v___x_2803_);
lean_ctor_set(v___x_2809_, 1, v___x_2805_);
lean_ctor_set(v___x_2809_, 2, v___x_2807_);
lean_ctor_set(v___x_2809_, 3, v___x_2808_);
v___x_2810_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_mkDoSeqOfElem___closed__3));
v___x_2811_ = l_Lean_Syntax_node3(v___x_2803_, v___x_2810_, v_a_2683_, v___x_2685_, v___x_2687_);
v___x_2812_ = l_Lean_Syntax_node2(v___x_2803_, v___x_2804_, v___x_2809_, v___x_2811_);
v_stxNew_2661_ = v___x_2812_;
v___y_2662_ = v_a_2649_;
v___y_2663_ = v_a_2650_;
v___y_2664_ = v_a_2651_;
v___y_2665_ = v_a_2652_;
v___y_2666_ = v_a_2653_;
v___y_2667_ = v_a_2654_;
goto v___jp_2660_;
}
}
}
else
{
lean_object* v_a_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2820_; 
lean_dec(v_expectedType_x3f_2648_);
lean_dec(v_stx_2647_);
v_a_2813_ = lean_ctor_get(v___x_2682_, 0);
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2682_);
if (v_isSharedCheck_2820_ == 0)
{
v___x_2815_ = v___x_2682_;
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_a_2813_);
lean_dec(v___x_2682_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2820_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2818_; 
if (v_isShared_2816_ == 0)
{
v___x_2818_ = v___x_2815_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_a_2813_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
}
}
else
{
lean_dec(v_a_2673_);
lean_dec(v_expectedType_x3f_2648_);
lean_dec(v_stx_2647_);
return v___x_2678_;
}
}
else
{
lean_dec(v_a_2673_);
lean_dec(v_expectedType_x3f_2648_);
lean_dec(v_stx_2647_);
return v___x_2674_;
}
}
else
{
lean_dec(v_expectedType_x3f_2648_);
lean_dec(v_stx_2647_);
return v___x_2672_;
}
v___jp_2660_:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2668_ = lean_box(v___x_2659_);
v___x_2669_ = lean_box(v___x_2659_);
lean_inc(v_stxNew_2661_);
v___x_2670_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_2670_, 0, v_stxNew_2661_);
lean_closure_set(v___x_2670_, 1, v_expectedType_x3f_2648_);
lean_closure_set(v___x_2670_, 2, v___x_2668_);
lean_closure_set(v___x_2670_, 3, v___x_2669_);
v___x_2671_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0___redArg(v_stx_2647_, v_stxNew_2661_, v___x_2670_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_);
return v___x_2671_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_elabTermIteAuto___boxed(lean_object* v_stx_2821_, lean_object* v_expectedType_x3f_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_, lean_object* v_a_2829_){
_start:
{
lean_object* v_res_2830_; 
v_res_2830_ = l_Lean_Elab_Term_elabTermIteAuto(v_stx_2821_, v_expectedType_x3f_2822_, v_a_2823_, v_a_2824_, v_a_2825_, v_a_2826_, v_a_2827_, v_a_2828_);
lean_dec(v_a_2828_);
lean_dec_ref(v_a_2827_);
lean_dec(v_a_2826_);
lean_dec_ref(v_a_2825_);
lean_dec(v_a_2824_);
lean_dec_ref(v_a_2823_);
return v_res_2830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0(lean_object* v_00_u03b1_2831_, lean_object* v_beforeStx_2832_, lean_object* v_afterStx_2833_, lean_object* v_x_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_){
_start:
{
lean_object* v___x_2842_; 
v___x_2842_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0___redArg(v_beforeStx_2832_, v_afterStx_2833_, v_x_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_);
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0___boxed(lean_object* v_00_u03b1_2843_, lean_object* v_beforeStx_2844_, lean_object* v_afterStx_2845_, lean_object* v_x_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_){
_start:
{
lean_object* v_res_2854_; 
v_res_2854_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0(v_00_u03b1_2843_, v_beforeStx_2844_, v_afterStx_2845_, v_x_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
lean_dec(v___y_2852_);
lean_dec_ref(v___y_2851_);
lean_dec(v___y_2850_);
lean_dec_ref(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec_ref(v___y_2847_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1(lean_object* v_00_u03b1_2855_, lean_object* v_stx_2856_, lean_object* v_output_2857_, lean_object* v_x_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
lean_object* v___x_2866_; 
v___x_2866_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___redArg(v_stx_2856_, v_output_2857_, v_x_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2867_, lean_object* v_stx_2868_, lean_object* v_output_2869_, lean_object* v_x_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1(v_00_u03b1_2867_, v_stx_2868_, v_output_2869_, v_x_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_);
lean_dec(v___y_2876_);
lean_dec_ref(v___y_2875_);
lean_dec(v___y_2874_);
lean_dec_ref(v___y_2873_);
lean_dec(v___y_2872_);
lean_dec_ref(v___y_2871_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4(lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_){
_start:
{
lean_object* v___x_2886_; 
v___x_2886_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___redArg(v___y_2884_);
return v___x_2886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4___boxed(lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
lean_object* v_res_2894_; 
v_res_2894_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3_spec__4(v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
lean_dec(v___y_2888_);
lean_dec_ref(v___y_2887_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3(lean_object* v_00_u03b1_2895_, lean_object* v_x_2896_, lean_object* v_mkInfoTree_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
lean_object* v___x_2905_; 
v___x_2905_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___redArg(v_x_2896_, v_mkInfoTree_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_);
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_2906_, lean_object* v_x_2907_, lean_object* v_mkInfoTree_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_){
_start:
{
lean_object* v_res_2916_; 
v_res_2916_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Term_elabTermIteAuto_spec__0_spec__1_spec__3(v_00_u03b1_2906_, v_x_2907_, v_mkInfoTree_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
lean_dec(v___y_2912_);
lean_dec_ref(v___y_2911_);
lean_dec(v___y_2910_);
lean_dec_ref(v___y_2909_);
return v_res_2916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1(){
_start:
{
lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; 
v___x_2930_ = l_Lean_Elab_Term_termElabAttribute;
v___x_2931_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__0));
v___x_2932_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__2));
v___x_2933_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermIteAuto___boxed), 9, 0);
v___x_2934_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2930_, v___x_2931_, v___x_2932_, v___x_2933_);
return v___x_2934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___boxed(lean_object* v_a_2935_){
_start:
{
lean_object* v_res_2936_; 
v_res_2936_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1();
return v_res_2936_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto_docString__3(){
_start:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2939_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1___closed__2));
v___x_2940_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto_docString__3___closed__0));
v___x_2941_ = l_Lean_addBuiltinDocString(v___x_2939_, v___x_2940_);
return v___x_2941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto_docString__3___boxed(lean_object* v_a_2942_){
_start:
{
lean_object* v_res_2943_; 
v_res_2943_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto_docString__3();
return v_res_2943_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_If(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoUIf___regBuiltin_Lean_Elab_Do_expandDoUIf__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoBIf___regBuiltin_Lean_Elab_Do_expandDoBIf__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoUIf___regBuiltin_Lean_Elab_Do_controlInfoDoUIf__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoBIf___regBuiltin_Lean_Elab_Do_controlInfoDoBIf__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoUIf___regBuiltin_Lean_Elab_Do_elabDoUIf__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoBIf___regBuiltin_Lean_Elab_Do_elabDoBIf__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIfAuto___regBuiltin_Lean_Elab_Do_elabDoIfAuto_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_controlInfoDoIfAuto___regBuiltin_Lean_Elab_Do_controlInfoDoIfAuto__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Term_elabTermIteAuto___regBuiltin_Lean_Elab_Term_elabTermIteAuto_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_If(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_If(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_If(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_If(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_If(builtin);
}
#ifdef __cplusplus
}
#endif
