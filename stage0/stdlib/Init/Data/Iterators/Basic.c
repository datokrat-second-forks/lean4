// Lean compiler output
// Module: Init.Data.Iterators.Basic
// Imports: public import Init.NotationExtra public import Init.WFTactics import Init.Ext import Init.PropLemmas
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg();
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque(lean_object*);
LEAN_EXPORT lean_object* l_Std_Shrink_deflate___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Shrink_deflate___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Shrink_deflate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Shrink_deflate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Shrink_inflate___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Shrink_inflate___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Shrink_inflate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Shrink_inflate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toIterM___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toIterM___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toIterM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_toIterM___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_toIter___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_toIter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_toIter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_toIter___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_ctorIdx___impl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_ctorIdx___impl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_yield_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_yield_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_skip_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_skip_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_done_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_successor___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_successor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_mapIterator___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterStep_mapIterator(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_yield___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_yield(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_skip___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_skip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_done___redArg();
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_done___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_done(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_casesOn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_casesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mk_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mk_x27___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mk_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_mk_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_toIterM___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_toIterM___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_toIterM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iterators_toIterM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_step___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_step(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Step_toMonadic___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Step_toMonadic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_Step_toMonadic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_Step_toPure___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_Step_toPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_Step_toPure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_IterStep_successor_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_IterStep_successor_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_step___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_step(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationFinite___redArg();
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationFinite___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationFinite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationFinite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps_x21___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps_x21___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "tacticDecreasing_trivial"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__0 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__0_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 43, 154, 34, 2, 43, 185, 79)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__1 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__1_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__2 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__2_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__3 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__3_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__4 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__4_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "first"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__5 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__5_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(59, 232, 35, 17, 172, 62, 48, 174)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__7 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__7_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__8 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__8_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__9 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__9_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__10 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__10_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__11 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__11_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__12 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__12_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__14 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__14_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__16 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__16_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__18 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__18_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__19 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__19_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "IterM.TerminationMeasures.Finite.rel_of_yield"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__21 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__21_value;
static lean_once_cell_t l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__22;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "IterM"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__23 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__23_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "TerminationMeasures"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Finite"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__25 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__25_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "rel_of_yield"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__26 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__26_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 31, 42, 181, 146, 49, 27)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__27_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(169, 212, 213, 21, 142, 220, 208, 72)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__27_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(205, 37, 172, 63, 217, 200, 178, 240)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__27_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(126, 55, 159, 75, 203, 87, 117, 27)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__27 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__27_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__28 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__28_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(69, 82, 221, 140, 231, 242, 162, 189)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(170, 200, 225, 233, 145, 226, 104, 82)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(98, 99, 128, 7, 156, 143, 187, 45)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29_value_aux_3),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(93, 51, 4, 58, 111, 99, 16, 1)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__30 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__30_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__30_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__31 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__31_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 7, .m_data = "term‹_›"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__32 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__32_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__32_value),LEAN_SCALAR_PTR_LITERAL(149, 139, 117, 210, 91, 226, 103, 115)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__33 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__33_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "‹"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__34 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__34_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__35 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__35_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__37 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__37_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "›"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__38 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__38_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "IterM.TerminationMeasures.Finite.rel_of_skip"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__39 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__39_value;
static lean_once_cell_t l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__40;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "rel_of_skip"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__41 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__41_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 31, 42, 181, 146, 49, 27)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__42_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__42_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(169, 212, 213, 21, 142, 220, 208, 72)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__42_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__42_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(205, 37, 172, 63, 217, 200, 178, 240)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__42_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(108, 19, 226, 143, 248, 98, 32, 233)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__42 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__42_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(69, 82, 221, 140, 231, 242, 162, 189)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(170, 200, 225, 233, 145, 226, 104, 82)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(98, 99, 128, 7, 156, 143, 187, 45)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43_value_aux_3),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(15, 202, 24, 228, 40, 65, 103, 247)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__43_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__44 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__44_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__44_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__45 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__45_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "withSemireducible"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__46 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__46_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__46_value),LEAN_SCALAR_PTR_LITERAL(5, 117, 244, 70, 47, 182, 62, 4)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "with_semireducible"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__48 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__48_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fail"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__49 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__49_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__49_value),LEAN_SCALAR_PTR_LITERAL(251, 214, 242, 89, 226, 36, 213, 0)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50_value;
static lean_once_cell_t l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51;
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps_x21___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps_x21___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Iter.TerminationMeasures.Finite.rel_of_yield"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__0 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__0_value;
static lean_once_cell_t l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__1;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Iter"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__2 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__2_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(138, 195, 175, 148, 133, 100, 210, 224)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__3_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(209, 7, 69, 112, 75, 84, 239, 144)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__3_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(53, 50, 228, 112, 51, 164, 185, 156)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__3_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(214, 230, 106, 38, 154, 8, 149, 198)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__3 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__3_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 14, 70, 175, 60, 94, 26, 143)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(226, 7, 252, 244, 215, 138, 67, 225)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(122, 130, 58, 69, 124, 110, 42, 29)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4_value_aux_3),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__26_value),LEAN_SCALAR_PTR_LITERAL(5, 117, 145, 184, 128, 111, 59, 2)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__5 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__5_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__6 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__6_value;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Iter.TerminationMeasures.Finite.rel_of_skip"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__7 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__7_value;
static lean_once_cell_t l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__8;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(138, 195, 175, 148, 133, 100, 210, 224)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__9_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(209, 7, 69, 112, 75, 84, 239, 144)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__9_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(53, 50, 228, 112, 51, 164, 185, 156)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__9_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(148, 164, 186, 206, 160, 29, 175, 51)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__9 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__9_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 14, 70, 175, 60, 94, 26, 143)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(226, 7, 252, 244, 215, 138, 67, 225)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(122, 130, 58, 69, 124, 110, 42, 29)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10_value_aux_3),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(103, 50, 45, 116, 59, 32, 142, 2)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__11 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__11_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__12 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__12_value;
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationProductive___redArg();
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationProductive___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationProductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationProductive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips_x21___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips_x21___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "IterM.TerminationMeasures.Productive.rel_of_skip"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__0 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__0_value;
static lean_once_cell_t l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__1;
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Productive"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__2 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__2_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 31, 42, 181, 146, 49, 27)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__3_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(169, 212, 213, 21, 142, 220, 208, 72)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__3_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(114, 129, 8, 70, 246, 73, 95, 178)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__3_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(191, 122, 13, 102, 162, 164, 25, 53)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__3 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__3_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(69, 82, 221, 140, 231, 242, 162, 189)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(170, 200, 225, 233, 145, 226, 104, 82)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(221, 67, 244, 104, 78, 160, 99, 150)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4_value_aux_3),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(28, 196, 150, 210, 70, 45, 96, 36)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__5 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__5_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__6 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__6_value;
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips_x21___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips_x21___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Iter.TerminationMeasures.Productive.rel_of_skip"};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__0 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__0_value;
static lean_once_cell_t l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__1;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(138, 195, 175, 148, 133, 100, 210, 224)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__2_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(209, 7, 69, 112, 75, 84, 239, 144)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__2_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(186, 177, 73, 53, 115, 214, 252, 103)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__2_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(39, 231, 130, 158, 254, 127, 122, 104)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__2 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__2_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3_value_aux_0),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 14, 70, 175, 60, 94, 26, 143)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3_value_aux_1),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(226, 7, 252, 244, 215, 138, 67, 225)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3_value_aux_2),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 97, 217, 86, 100, 8, 28, 170)}};
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3_value_aux_3),((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__41_value),LEAN_SCALAR_PTR_LITERAL(84, 68, 82, 65, 70, 30, 218, 209)}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__4 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__4_value;
static const lean_ctor_object l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__5 = (const lean_object*)&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__5_value;
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___lam__0(lean_object* v___y_1_){
_start:
{
lean_inc(v___y_1_);
return v___y_1_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___lam__0___boxed(lean_object* v___y_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___lam__0(v___y_2_);
lean_dec(v___y_2_);
return v_res_3_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg(){
_start:
{
lean_object* v___f_6_; 
v___f_6_ = ((lean_object*)(l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___closed__0));
return v___f_6_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___boxed(lean_object* v___dummy_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque(lean_object* v_00_u03b1_9_){
_start:
{
lean_object* v___f_10_; 
v___f_10_ = ((lean_object*)(l___private_Init_Data_Iterators_Basic_0__Std_Internal_idOpaque___redArg___closed__0));
return v___f_10_;
}
}
LEAN_EXPORT lean_object* l_Std_Shrink_deflate___redArg(lean_object* v_x_11_){
_start:
{
lean_inc(v_x_11_);
return v_x_11_;
}
}
LEAN_EXPORT lean_object* l_Std_Shrink_deflate___redArg___boxed(lean_object* v_x_12_){
_start:
{
lean_object* v_res_13_; 
v_res_13_ = l_Std_Shrink_deflate___redArg(v_x_12_);
lean_dec(v_x_12_);
return v_res_13_;
}
}
LEAN_EXPORT lean_object* l_Std_Shrink_deflate(lean_object* v_00_u03b1_14_, lean_object* v_x_15_){
_start:
{
lean_inc(v_x_15_);
return v_x_15_;
}
}
LEAN_EXPORT lean_object* l_Std_Shrink_deflate___boxed(lean_object* v_00_u03b1_16_, lean_object* v_x_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Std_Shrink_deflate(v_00_u03b1_16_, v_x_17_);
lean_dec(v_x_17_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Std_Shrink_inflate___redArg(lean_object* v_x_19_){
_start:
{
lean_inc(v_x_19_);
return v_x_19_;
}
}
LEAN_EXPORT lean_object* l_Std_Shrink_inflate___redArg___boxed(lean_object* v_x_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Std_Shrink_inflate___redArg(v_x_20_);
lean_dec(v_x_20_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Std_Shrink_inflate(lean_object* v_00_u03b1_22_, lean_object* v_x_23_){
_start:
{
lean_inc(v_x_23_);
return v_x_23_;
}
}
LEAN_EXPORT lean_object* l_Std_Shrink_inflate___boxed(lean_object* v_00_u03b1_24_, lean_object* v_x_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Std_Shrink_inflate(v_00_u03b1_24_, v_x_25_);
lean_dec(v_x_25_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toIterM___redArg(lean_object* v_it_27_){
_start:
{
lean_inc(v_it_27_);
return v_it_27_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toIterM___redArg___boxed(lean_object* v_it_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Std_Iter_toIterM___redArg(v_it_28_);
lean_dec(v_it_28_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toIterM(lean_object* v_00_u03b1_30_, lean_object* v_00_u03b2_31_, lean_object* v_it_32_){
_start:
{
lean_inc(v_it_32_);
return v_it_32_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_toIterM___boxed(lean_object* v_00_u03b1_33_, lean_object* v_00_u03b2_34_, lean_object* v_it_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Std_Iter_toIterM(v_00_u03b1_33_, v_00_u03b2_34_, v_it_35_);
lean_dec(v_it_35_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_toIter___redArg(lean_object* v_it_37_){
_start:
{
lean_inc(v_it_37_);
return v_it_37_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_toIter___redArg___boxed(lean_object* v_it_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Std_IterM_toIter___redArg(v_it_38_);
lean_dec(v_it_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_toIter(lean_object* v_00_u03b1_40_, lean_object* v_00_u03b2_41_, lean_object* v_it_42_){
_start:
{
lean_inc(v_it_42_);
return v_it_42_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_toIter___boxed(lean_object* v_00_u03b1_43_, lean_object* v_00_u03b2_44_, lean_object* v_it_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Std_IterM_toIter(v_00_u03b1_43_, v_00_u03b2_44_, v_it_45_);
lean_dec(v_it_45_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_ctorIdx___impl___redArg(lean_object* v_x_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_obj_tag_nat(v_x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_ctorIdx___impl___redArg___boxed(lean_object* v_x_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Std_IterStep_ctorIdx___impl___redArg(v_x_49_);
lean_dec(v_x_49_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_ctorIdx___impl(lean_object* v_00_u03b1_51_, lean_object* v_00_u03b2_52_, lean_object* v_x_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_obj_tag_nat(v_x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_ctorIdx___impl___boxed(lean_object* v_00_u03b1_55_, lean_object* v_00_u03b2_56_, lean_object* v_x_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Std_IterStep_ctorIdx___impl(v_00_u03b1_55_, v_00_u03b2_56_, v_x_57_);
lean_dec(v_x_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_ctorElim___redArg(lean_object* v_t_59_, lean_object* v_k_60_){
_start:
{
switch(lean_obj_tag(v_t_59_))
{
case 0:
{
lean_object* v_it_61_; lean_object* v_out_62_; lean_object* v___x_63_; 
v_it_61_ = lean_ctor_get(v_t_59_, 0);
lean_inc(v_it_61_);
v_out_62_ = lean_ctor_get(v_t_59_, 1);
lean_inc(v_out_62_);
lean_dec_ref_known(v_t_59_, 2);
v___x_63_ = lean_apply_2(v_k_60_, v_it_61_, v_out_62_);
return v___x_63_;
}
case 1:
{
lean_object* v_it_64_; lean_object* v___x_65_; 
v_it_64_ = lean_ctor_get(v_t_59_, 0);
lean_inc(v_it_64_);
lean_dec_ref_known(v_t_59_, 1);
v___x_65_ = lean_apply_1(v_k_60_, v_it_64_);
return v___x_65_;
}
default: 
{
return v_k_60_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_ctorElim(lean_object* v_00_u03b1_66_, lean_object* v_00_u03b2_67_, lean_object* v_motive_68_, lean_object* v_ctorIdx_69_, lean_object* v_t_70_, lean_object* v_h_71_, lean_object* v_k_72_){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Std_IterStep_ctorElim___redArg(v_t_70_, v_k_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_ctorElim___boxed(lean_object* v_00_u03b1_74_, lean_object* v_00_u03b2_75_, lean_object* v_motive_76_, lean_object* v_ctorIdx_77_, lean_object* v_t_78_, lean_object* v_h_79_, lean_object* v_k_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Std_IterStep_ctorElim(v_00_u03b1_74_, v_00_u03b2_75_, v_motive_76_, v_ctorIdx_77_, v_t_78_, v_h_79_, v_k_80_);
lean_dec(v_ctorIdx_77_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_yield_elim___redArg(lean_object* v_t_82_, lean_object* v_yield_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Std_IterStep_ctorElim___redArg(v_t_82_, v_yield_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_yield_elim(lean_object* v_00_u03b1_85_, lean_object* v_00_u03b2_86_, lean_object* v_motive_87_, lean_object* v_t_88_, lean_object* v_h_89_, lean_object* v_yield_90_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Std_IterStep_ctorElim___redArg(v_t_88_, v_yield_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_skip_elim___redArg(lean_object* v_t_92_, lean_object* v_skip_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = l_Std_IterStep_ctorElim___redArg(v_t_92_, v_skip_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_skip_elim(lean_object* v_00_u03b1_95_, lean_object* v_00_u03b2_96_, lean_object* v_motive_97_, lean_object* v_t_98_, lean_object* v_h_99_, lean_object* v_skip_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Std_IterStep_ctorElim___redArg(v_t_98_, v_skip_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_done_elim___redArg(lean_object* v_t_102_, lean_object* v_done_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Std_IterStep_ctorElim___redArg(v_t_102_, v_done_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_done_elim(lean_object* v_00_u03b1_105_, lean_object* v_00_u03b2_106_, lean_object* v_motive_107_, lean_object* v_t_108_, lean_object* v_h_109_, lean_object* v_done_110_){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = l_Std_IterStep_ctorElim___redArg(v_t_108_, v_done_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_successor___redArg(lean_object* v_x_112_){
_start:
{
switch(lean_obj_tag(v_x_112_))
{
case 0:
{
lean_object* v_it_113_; lean_object* v___x_114_; 
v_it_113_ = lean_ctor_get(v_x_112_, 0);
lean_inc(v_it_113_);
lean_dec_ref_known(v_x_112_, 2);
v___x_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_114_, 0, v_it_113_);
return v___x_114_;
}
case 1:
{
lean_object* v_it_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_122_; 
v_it_115_ = lean_ctor_get(v_x_112_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v_x_112_);
if (v_isSharedCheck_122_ == 0)
{
v___x_117_ = v_x_112_;
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_it_115_);
lean_dec(v_x_112_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_it_115_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
default: 
{
lean_object* v___x_123_; 
v___x_123_ = lean_box(0);
return v___x_123_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_successor(lean_object* v_00_u03b1_124_, lean_object* v_00_u03b2_125_, lean_object* v_x_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l_Std_IterStep_successor___redArg(v_x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_mapIterator___redArg(lean_object* v_f_128_, lean_object* v_x_129_){
_start:
{
switch(lean_obj_tag(v_x_129_))
{
case 0:
{
lean_object* v_it_130_; lean_object* v_out_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_139_; 
v_it_130_ = lean_ctor_get(v_x_129_, 0);
v_out_131_ = lean_ctor_get(v_x_129_, 1);
v_isSharedCheck_139_ = !lean_is_exclusive(v_x_129_);
if (v_isSharedCheck_139_ == 0)
{
v___x_133_ = v_x_129_;
v_isShared_134_ = v_isSharedCheck_139_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_out_131_);
lean_inc(v_it_130_);
lean_dec(v_x_129_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_139_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_135_ = lean_apply_1(v_f_128_, v_it_130_);
if (v_isShared_134_ == 0)
{
lean_ctor_set(v___x_133_, 0, v___x_135_);
v___x_137_ = v___x_133_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v___x_135_);
lean_ctor_set(v_reuseFailAlloc_138_, 1, v_out_131_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
case 1:
{
lean_object* v_it_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_148_; 
v_it_140_ = lean_ctor_get(v_x_129_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v_x_129_);
if (v_isSharedCheck_148_ == 0)
{
v___x_142_ = v_x_129_;
v_isShared_143_ = v_isSharedCheck_148_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_it_140_);
lean_dec(v_x_129_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_148_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_144_; lean_object* v___x_146_; 
v___x_144_ = lean_apply_1(v_f_128_, v_it_140_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_144_);
v___x_146_ = v___x_142_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v___x_144_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
default: 
{
lean_object* v___x_149_; 
lean_dec(v_f_128_);
v___x_149_ = lean_box(2);
return v___x_149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IterStep_mapIterator(lean_object* v_00_u03b1_150_, lean_object* v_00_u03b2_151_, lean_object* v_00_u03b1_x27_152_, lean_object* v_f_153_, lean_object* v_x_154_){
_start:
{
switch(lean_obj_tag(v_x_154_))
{
case 0:
{
lean_object* v_it_155_; lean_object* v_out_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_164_; 
v_it_155_ = lean_ctor_get(v_x_154_, 0);
v_out_156_ = lean_ctor_get(v_x_154_, 1);
v_isSharedCheck_164_ = !lean_is_exclusive(v_x_154_);
if (v_isSharedCheck_164_ == 0)
{
v___x_158_ = v_x_154_;
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_out_156_);
lean_inc(v_it_155_);
lean_dec(v_x_154_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_164_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_160_ = lean_apply_1(v_f_153_, v_it_155_);
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 0, v___x_160_);
v___x_162_ = v___x_158_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
lean_ctor_set(v_reuseFailAlloc_163_, 1, v_out_156_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
case 1:
{
lean_object* v_it_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_173_; 
v_it_165_ = lean_ctor_get(v_x_154_, 0);
v_isSharedCheck_173_ = !lean_is_exclusive(v_x_154_);
if (v_isSharedCheck_173_ == 0)
{
v___x_167_ = v_x_154_;
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_it_165_);
lean_dec(v_x_154_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_173_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_169_; lean_object* v___x_171_; 
v___x_169_ = lean_apply_1(v_f_153_, v_it_165_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 0, v___x_169_);
v___x_171_ = v___x_167_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
default: 
{
lean_object* v___x_174_; 
lean_dec(v_f_153_);
v___x_174_ = lean_box(2);
return v___x_174_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_yield___redArg(lean_object* v_it_x27_175_, lean_object* v_out_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_177_, 0, v_it_x27_175_);
lean_ctor_set(v___x_177_, 1, v_out_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_yield(lean_object* v_00_u03b1_178_, lean_object* v_00_u03b2_179_, lean_object* v_IsPlausibleStep_180_, lean_object* v_it_x27_181_, lean_object* v_out_182_, lean_object* v_h_183_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_184_, 0, v_it_x27_181_);
lean_ctor_set(v___x_184_, 1, v_out_182_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_skip___redArg(lean_object* v_it_x27_185_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_186_, 0, v_it_x27_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_skip(lean_object* v_00_u03b1_187_, lean_object* v_00_u03b2_188_, lean_object* v_IsPlausibleStep_189_, lean_object* v_it_x27_190_, lean_object* v_h_191_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_192_, 0, v_it_x27_190_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_done___redArg(){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = lean_box(2);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_done___redArg___boxed(lean_object* v___dummy_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Std_PlausibleIterStep_done___redArg();
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_done(lean_object* v_00_u03b1_197_, lean_object* v_00_u03b2_198_, lean_object* v_IsPlausibleStep_199_, lean_object* v_h_200_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = lean_box(2);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_casesOn___redArg(lean_object* v_s_202_, lean_object* v_yield_203_, lean_object* v_skip_204_, lean_object* v_done_205_){
_start:
{
switch(lean_obj_tag(v_s_202_))
{
case 0:
{
lean_object* v_it_206_; lean_object* v_out_207_; lean_object* v___x_208_; 
lean_dec(v_done_205_);
lean_dec(v_skip_204_);
v_it_206_ = lean_ctor_get(v_s_202_, 0);
lean_inc(v_it_206_);
v_out_207_ = lean_ctor_get(v_s_202_, 1);
lean_inc(v_out_207_);
lean_dec_ref_known(v_s_202_, 2);
v___x_208_ = lean_apply_3(v_yield_203_, v_it_206_, v_out_207_, lean_box(0));
return v___x_208_;
}
case 1:
{
lean_object* v_it_209_; lean_object* v___x_210_; 
lean_dec(v_done_205_);
lean_dec(v_yield_203_);
v_it_209_ = lean_ctor_get(v_s_202_, 0);
lean_inc(v_it_209_);
lean_dec_ref_known(v_s_202_, 1);
v___x_210_ = lean_apply_2(v_skip_204_, v_it_209_, lean_box(0));
return v___x_210_;
}
default: 
{
lean_object* v___x_211_; 
lean_dec(v_skip_204_);
lean_dec(v_yield_203_);
v___x_211_ = lean_apply_1(v_done_205_, lean_box(0));
return v___x_211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_PlausibleIterStep_casesOn(lean_object* v_00_u03b1_212_, lean_object* v_00_u03b2_213_, lean_object* v_IsPlausibleStep_214_, lean_object* v_motive_215_, lean_object* v_s_216_, lean_object* v_yield_217_, lean_object* v_skip_218_, lean_object* v_done_219_){
_start:
{
switch(lean_obj_tag(v_s_216_))
{
case 0:
{
lean_object* v_it_220_; lean_object* v_out_221_; lean_object* v___x_222_; 
lean_dec(v_done_219_);
lean_dec(v_skip_218_);
v_it_220_ = lean_ctor_get(v_s_216_, 0);
lean_inc(v_it_220_);
v_out_221_ = lean_ctor_get(v_s_216_, 1);
lean_inc(v_out_221_);
lean_dec_ref_known(v_s_216_, 2);
v___x_222_ = lean_apply_3(v_yield_217_, v_it_220_, v_out_221_, lean_box(0));
return v___x_222_;
}
case 1:
{
lean_object* v_it_223_; lean_object* v___x_224_; 
lean_dec(v_done_219_);
lean_dec(v_yield_217_);
v_it_223_ = lean_ctor_get(v_s_216_, 0);
lean_inc(v_it_223_);
lean_dec_ref_known(v_s_216_, 1);
v___x_224_ = lean_apply_2(v_skip_218_, v_it_223_, lean_box(0));
return v___x_224_;
}
default: 
{
lean_object* v___x_225_; 
lean_dec(v_skip_218_);
lean_dec(v_yield_217_);
v___x_225_ = lean_apply_1(v_done_219_, lean_box(0));
return v___x_225_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mk_x27___redArg(lean_object* v_it_226_){
_start:
{
lean_inc(v_it_226_);
return v_it_226_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mk_x27___redArg___boxed(lean_object* v_it_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Std_IterM_mk_x27___redArg(v_it_227_);
lean_dec(v_it_227_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mk_x27(lean_object* v_00_u03b1_229_, lean_object* v_m_230_, lean_object* v_00_u03b2_231_, lean_object* v_it_232_){
_start:
{
lean_inc(v_it_232_);
return v_it_232_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_mk_x27___boxed(lean_object* v_00_u03b1_233_, lean_object* v_m_234_, lean_object* v_00_u03b2_235_, lean_object* v_it_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Std_IterM_mk_x27(v_00_u03b1_233_, v_m_234_, v_00_u03b2_235_, v_it_236_);
lean_dec(v_it_236_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_toIterM___redArg(lean_object* v_internalState_238_){
_start:
{
lean_inc(v_internalState_238_);
return v_internalState_238_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_toIterM___redArg___boxed(lean_object* v_internalState_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Std_Iterators_toIterM___redArg(v_internalState_239_);
lean_dec(v_internalState_239_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_toIterM(lean_object* v_00_u03b1_241_, lean_object* v_m_242_, lean_object* v_00_u03b2_243_, lean_object* v_internalState_244_){
_start:
{
lean_inc(v_internalState_244_);
return v_internalState_244_;
}
}
LEAN_EXPORT lean_object* l_Std_Iterators_toIterM___boxed(lean_object* v_00_u03b1_245_, lean_object* v_m_246_, lean_object* v_00_u03b2_247_, lean_object* v_internalState_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Std_Iterators_toIterM(v_00_u03b1_245_, v_m_246_, v_00_u03b2_247_, v_internalState_248_);
lean_dec(v_internalState_248_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_step___redArg(lean_object* v_inst_250_, lean_object* v_it_251_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = lean_apply_1(v_inst_250_, v_it_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_step(lean_object* v_00_u03b1_253_, lean_object* v_m_254_, lean_object* v_00_u03b2_255_, lean_object* v_inst_256_, lean_object* v_it_257_){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = lean_apply_1(v_inst_256_, v_it_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Step_toMonadic___redArg(lean_object* v_step_259_){
_start:
{
switch(lean_obj_tag(v_step_259_))
{
case 0:
{
lean_object* v_it_260_; lean_object* v_out_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
v_it_260_ = lean_ctor_get(v_step_259_, 0);
v_out_261_ = lean_ctor_get(v_step_259_, 1);
v_isSharedCheck_268_ = !lean_is_exclusive(v_step_259_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v_step_259_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_out_261_);
lean_inc(v_it_260_);
lean_dec(v_step_259_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_it_260_);
lean_ctor_set(v_reuseFailAlloc_267_, 1, v_out_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
case 1:
{
lean_object* v_it_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
v_it_269_ = lean_ctor_get(v_step_259_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v_step_259_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v_step_259_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_it_269_);
lean_dec(v_step_259_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_it_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
default: 
{
lean_object* v___x_277_; 
v___x_277_ = lean_box(2);
return v___x_277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Step_toMonadic(lean_object* v_00_u03b1_278_, lean_object* v_00_u03b2_279_, lean_object* v_inst_280_, lean_object* v_it_281_, lean_object* v_step_282_){
_start:
{
switch(lean_obj_tag(v_step_282_))
{
case 0:
{
lean_object* v_it_283_; lean_object* v_out_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_291_; 
v_it_283_ = lean_ctor_get(v_step_282_, 0);
v_out_284_ = lean_ctor_get(v_step_282_, 1);
v_isSharedCheck_291_ = !lean_is_exclusive(v_step_282_);
if (v_isSharedCheck_291_ == 0)
{
v___x_286_ = v_step_282_;
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_out_284_);
lean_inc(v_it_283_);
lean_dec(v_step_282_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_289_; 
if (v_isShared_287_ == 0)
{
v___x_289_ = v___x_286_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_it_283_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v_out_284_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
case 1:
{
lean_object* v_it_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
v_it_292_ = lean_ctor_get(v_step_282_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v_step_282_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v_step_282_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_it_292_);
lean_dec(v_step_282_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_it_292_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
default: 
{
lean_object* v___x_300_; 
v___x_300_ = lean_box(2);
return v___x_300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Iter_Step_toMonadic___boxed(lean_object* v_00_u03b1_301_, lean_object* v_00_u03b2_302_, lean_object* v_inst_303_, lean_object* v_it_304_, lean_object* v_step_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Std_Iter_Step_toMonadic(v_00_u03b1_301_, v_00_u03b2_302_, v_inst_303_, v_it_304_, v_step_305_);
lean_dec(v_it_304_);
lean_dec(v_inst_303_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_Step_toPure___redArg(lean_object* v_step_307_){
_start:
{
switch(lean_obj_tag(v_step_307_))
{
case 0:
{
lean_object* v_it_308_; lean_object* v_out_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
v_it_308_ = lean_ctor_get(v_step_307_, 0);
v_out_309_ = lean_ctor_get(v_step_307_, 1);
v_isSharedCheck_316_ = !lean_is_exclusive(v_step_307_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v_step_307_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_out_309_);
lean_inc(v_it_308_);
lean_dec(v_step_307_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_it_308_);
lean_ctor_set(v_reuseFailAlloc_315_, 1, v_out_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
case 1:
{
lean_object* v_it_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
v_it_317_ = lean_ctor_get(v_step_307_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v_step_307_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v_step_307_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_it_317_);
lean_dec(v_step_307_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_it_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
default: 
{
lean_object* v___x_325_; 
v___x_325_ = lean_box(2);
return v___x_325_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IterM_Step_toPure(lean_object* v_00_u03b1_326_, lean_object* v_00_u03b2_327_, lean_object* v_inst_328_, lean_object* v_it_329_, lean_object* v_step_330_){
_start:
{
switch(lean_obj_tag(v_step_330_))
{
case 0:
{
lean_object* v_it_331_; lean_object* v_out_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_339_; 
v_it_331_ = lean_ctor_get(v_step_330_, 0);
v_out_332_ = lean_ctor_get(v_step_330_, 1);
v_isSharedCheck_339_ = !lean_is_exclusive(v_step_330_);
if (v_isSharedCheck_339_ == 0)
{
v___x_334_ = v_step_330_;
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_out_332_);
lean_inc(v_it_331_);
lean_dec(v_step_330_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_337_; 
if (v_isShared_335_ == 0)
{
v___x_337_ = v___x_334_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_it_331_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_out_332_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
case 1:
{
lean_object* v_it_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
v_it_340_ = lean_ctor_get(v_step_330_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v_step_330_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v_step_330_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_it_340_);
lean_dec(v_step_330_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_it_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
default: 
{
lean_object* v___x_348_; 
v___x_348_ = lean_box(2);
return v___x_348_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IterM_Step_toPure___boxed(lean_object* v_00_u03b1_349_, lean_object* v_00_u03b2_350_, lean_object* v_inst_351_, lean_object* v_it_352_, lean_object* v_step_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Std_IterM_Step_toPure(v_00_u03b1_349_, v_00_u03b2_350_, v_inst_351_, v_it_352_, v_step_353_);
lean_dec(v_it_352_);
lean_dec(v_inst_351_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_IterStep_successor_match__1_splitter___redArg(lean_object* v_x_355_, lean_object* v_h__1_356_, lean_object* v_h__2_357_, lean_object* v_h__3_358_){
_start:
{
switch(lean_obj_tag(v_x_355_))
{
case 0:
{
lean_object* v_it_359_; lean_object* v_out_360_; lean_object* v___x_361_; 
lean_dec(v_h__3_358_);
lean_dec(v_h__2_357_);
v_it_359_ = lean_ctor_get(v_x_355_, 0);
lean_inc(v_it_359_);
v_out_360_ = lean_ctor_get(v_x_355_, 1);
lean_inc(v_out_360_);
lean_dec_ref_known(v_x_355_, 2);
v___x_361_ = lean_apply_2(v_h__1_356_, v_it_359_, v_out_360_);
return v___x_361_;
}
case 1:
{
lean_object* v_it_362_; lean_object* v___x_363_; 
lean_dec(v_h__3_358_);
lean_dec(v_h__1_356_);
v_it_362_ = lean_ctor_get(v_x_355_, 0);
lean_inc(v_it_362_);
lean_dec_ref_known(v_x_355_, 1);
v___x_363_ = lean_apply_1(v_h__2_357_, v_it_362_);
return v___x_363_;
}
default: 
{
lean_object* v___x_364_; lean_object* v___x_365_; 
lean_dec(v_h__2_357_);
lean_dec(v_h__1_356_);
v___x_364_ = lean_box(0);
v___x_365_ = lean_apply_1(v_h__3_358_, v___x_364_);
return v___x_365_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Iterators_Basic_0__Std_IterStep_successor_match__1_splitter(lean_object* v_00_u03b1_366_, lean_object* v_00_u03b2_367_, lean_object* v_motive_368_, lean_object* v_x_369_, lean_object* v_h__1_370_, lean_object* v_h__2_371_, lean_object* v_h__3_372_){
_start:
{
switch(lean_obj_tag(v_x_369_))
{
case 0:
{
lean_object* v_it_373_; lean_object* v_out_374_; lean_object* v___x_375_; 
lean_dec(v_h__3_372_);
lean_dec(v_h__2_371_);
v_it_373_ = lean_ctor_get(v_x_369_, 0);
lean_inc(v_it_373_);
v_out_374_ = lean_ctor_get(v_x_369_, 1);
lean_inc(v_out_374_);
lean_dec_ref_known(v_x_369_, 2);
v___x_375_ = lean_apply_2(v_h__1_370_, v_it_373_, v_out_374_);
return v___x_375_;
}
case 1:
{
lean_object* v_it_376_; lean_object* v___x_377_; 
lean_dec(v_h__3_372_);
lean_dec(v_h__1_370_);
v_it_376_ = lean_ctor_get(v_x_369_, 0);
lean_inc(v_it_376_);
lean_dec_ref_known(v_x_369_, 1);
v___x_377_ = lean_apply_1(v_h__2_371_, v_it_376_);
return v___x_377_;
}
default: 
{
lean_object* v___x_378_; lean_object* v___x_379_; 
lean_dec(v_h__2_371_);
lean_dec(v_h__1_370_);
v___x_378_ = lean_box(0);
v___x_379_ = lean_apply_1(v_h__3_372_, v___x_378_);
return v___x_379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Iter_step___redArg(lean_object* v_inst_380_, lean_object* v_it_381_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = lean_apply_1(v_inst_380_, v_it_381_);
switch(lean_obj_tag(v___x_382_))
{
case 0:
{
lean_object* v_it_383_; lean_object* v_out_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
v_it_383_ = lean_ctor_get(v___x_382_, 0);
v_out_384_ = lean_ctor_get(v___x_382_, 1);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_382_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_out_384_);
lean_inc(v_it_383_);
lean_dec(v___x_382_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_it_383_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v_out_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
case 1:
{
lean_object* v_it_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
v_it_392_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_382_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_it_392_);
lean_dec(v___x_382_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_it_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
default: 
{
lean_object* v___x_400_; 
v___x_400_ = lean_box(2);
return v___x_400_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Iter_step(lean_object* v_00_u03b1_401_, lean_object* v_00_u03b2_402_, lean_object* v_inst_403_, lean_object* v_it_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = lean_apply_1(v_inst_403_, v_it_404_);
switch(lean_obj_tag(v___x_405_))
{
case 0:
{
lean_object* v_it_406_; lean_object* v_out_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
v_it_406_ = lean_ctor_get(v___x_405_, 0);
v_out_407_ = lean_ctor_get(v___x_405_, 1);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_405_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_out_407_);
lean_inc(v_it_406_);
lean_dec(v___x_405_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_it_406_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_out_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
case 1:
{
lean_object* v_it_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_422_; 
v_it_415_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_422_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_422_ == 0)
{
v___x_417_ = v___x_405_;
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_it_415_);
lean_dec(v___x_405_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_422_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_420_; 
if (v_isShared_418_ == 0)
{
v___x_420_ = v___x_417_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_it_415_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
}
default: 
{
lean_object* v___x_423_; 
v___x_423_ = lean_box(2);
return v___x_423_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationFinite___redArg(){
_start:
{
lean_object* v___x_425_; 
v___x_425_ = lean_box(0);
return v___x_425_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationFinite___redArg___boxed(lean_object* v___dummy_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = l_Std_IterM_TerminationMeasures_instWellFoundedRelationFinite___redArg();
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationFinite(lean_object* v_00_u03b1_428_, lean_object* v_m_429_, lean_object* v_00_u03b2_430_, lean_object* v_inst_431_, lean_object* v_inst_432_){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = lean_box(0);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationFinite___boxed(lean_object* v_00_u03b1_434_, lean_object* v_m_435_, lean_object* v_00_u03b2_436_, lean_object* v_inst_437_, lean_object* v_inst_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Std_IterM_TerminationMeasures_instWellFoundedRelationFinite(v_00_u03b1_434_, v_m_435_, v_00_u03b2_436_, v_inst_437_, v_inst_438_);
lean_dec(v_inst_437_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps___redArg(lean_object* v_it_440_){
_start:
{
lean_inc(v_it_440_);
return v_it_440_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps___redArg___boxed(lean_object* v_it_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Std_IterM_finitelyManySteps___redArg(v_it_441_);
lean_dec(v_it_441_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps(lean_object* v_00_u03b1_443_, lean_object* v_m_444_, lean_object* v_00_u03b2_445_, lean_object* v_inst_446_, lean_object* v_inst_447_, lean_object* v_it_448_){
_start:
{
lean_inc(v_it_448_);
return v_it_448_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps___boxed(lean_object* v_00_u03b1_449_, lean_object* v_m_450_, lean_object* v_00_u03b2_451_, lean_object* v_inst_452_, lean_object* v_inst_453_, lean_object* v_it_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Std_IterM_finitelyManySteps(v_00_u03b1_449_, v_m_450_, v_00_u03b2_451_, v_inst_452_, v_inst_453_, v_it_454_);
lean_dec(v_it_454_);
lean_dec(v_inst_452_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps_x21___redArg(lean_object* v_it_456_){
_start:
{
lean_inc(v_it_456_);
return v_it_456_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps_x21___redArg___boxed(lean_object* v_it_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Std_IterM_finitelyManySteps_x21___redArg(v_it_457_);
lean_dec(v_it_457_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps_x21(lean_object* v_00_u03b1_459_, lean_object* v_m_460_, lean_object* v_00_u03b2_461_, lean_object* v_inst_462_, lean_object* v_it_463_){
_start:
{
lean_inc(v_it_463_);
return v_it_463_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySteps_x21___boxed(lean_object* v_00_u03b1_464_, lean_object* v_m_465_, lean_object* v_00_u03b2_466_, lean_object* v_inst_467_, lean_object* v_it_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Std_IterM_finitelyManySteps_x21(v_00_u03b1_464_, v_m_465_, v_00_u03b2_466_, v_inst_467_, v_it_468_);
lean_dec(v_it_468_);
lean_dec(v_inst_467_);
return v_res_469_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__22(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__21));
v___x_516_ = l_String_toRawSubstring_x27(v___x_515_);
return v___x_516_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__40(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__39));
v___x_553_ = l_String_toRawSubstring_x27(v___x_552_);
return v___x_553_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51(void){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_Array_mkArray0___redArg();
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1(lean_object* v_x_586_, lean_object* v_a_587_, lean_object* v_a_588_){
_start:
{
lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_589_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__1));
v___x_590_ = l_Lean_Syntax_isOfKind(v_x_586_, v___x_589_);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = lean_box(1);
v___x_592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
lean_ctor_set(v___x_592_, 1, v_a_588_);
return v___x_592_;
}
else
{
lean_object* v_quotContext_593_; lean_object* v_currMacroScope_594_; lean_object* v_ref_595_; uint8_t v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v_quotContext_593_ = lean_ctor_get(v_a_587_, 1);
v_currMacroScope_594_ = lean_ctor_get(v_a_587_, 2);
v_ref_595_ = lean_ctor_get(v_a_587_, 5);
v___x_596_ = 0;
v___x_597_ = l_Lean_SourceInfo_fromRef(v_ref_595_, v___x_596_);
v___x_598_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__5));
v___x_599_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6));
lean_inc_n(v___x_597_, 42);
v___x_600_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_597_);
lean_ctor_set(v___x_600_, 1, v___x_598_);
v___x_601_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__8));
v___x_602_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__10));
v___x_603_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__11));
v___x_604_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_597_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
v___x_605_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13));
v___x_606_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15));
v___x_607_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__16));
v___x_608_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17));
v___x_609_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_609_, 0, v___x_597_);
lean_ctor_set(v___x_609_, 1, v___x_607_);
v___x_610_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20));
v___x_611_ = lean_obj_once(&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__22, &l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__22_once, _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__22);
v___x_612_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__27));
lean_inc_n(v_currMacroScope_594_, 2);
lean_inc_n(v_quotContext_593_, 2);
v___x_613_ = l_Lean_addMacroScope(v_quotContext_593_, v___x_612_, v_currMacroScope_594_);
v___x_614_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__31));
v___x_615_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_615_, 0, v___x_597_);
lean_ctor_set(v___x_615_, 1, v___x_611_);
lean_ctor_set(v___x_615_, 2, v___x_613_);
lean_ctor_set(v___x_615_, 3, v___x_614_);
v___x_616_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__33));
v___x_617_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__34));
v___x_618_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_597_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
v___x_619_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36));
v___x_620_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__37));
v___x_621_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_597_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = l_Lean_Syntax_node1(v___x_597_, v___x_619_, v___x_621_);
v___x_623_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__38));
v___x_624_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_597_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = l_Lean_Syntax_node3(v___x_597_, v___x_616_, v___x_618_, v___x_622_, v___x_624_);
v___x_626_ = l_Lean_Syntax_node1(v___x_597_, v___x_601_, v___x_625_);
lean_inc(v___x_626_);
v___x_627_ = l_Lean_Syntax_node2(v___x_597_, v___x_610_, v___x_615_, v___x_626_);
lean_inc_ref(v___x_609_);
v___x_628_ = l_Lean_Syntax_node2(v___x_597_, v___x_608_, v___x_609_, v___x_627_);
v___x_629_ = l_Lean_Syntax_node1(v___x_597_, v___x_601_, v___x_628_);
v___x_630_ = l_Lean_Syntax_node1(v___x_597_, v___x_606_, v___x_629_);
v___x_631_ = l_Lean_Syntax_node1(v___x_597_, v___x_605_, v___x_630_);
lean_inc(v___x_631_);
lean_inc_ref_n(v___x_604_, 4);
v___x_632_ = l_Lean_Syntax_node2(v___x_597_, v___x_602_, v___x_604_, v___x_631_);
v___x_633_ = lean_obj_once(&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__40, &l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__40_once, _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__40);
v___x_634_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__42));
v___x_635_ = l_Lean_addMacroScope(v_quotContext_593_, v___x_634_, v_currMacroScope_594_);
v___x_636_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__45));
v___x_637_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_637_, 0, v___x_597_);
lean_ctor_set(v___x_637_, 1, v___x_633_);
lean_ctor_set(v___x_637_, 2, v___x_635_);
lean_ctor_set(v___x_637_, 3, v___x_636_);
v___x_638_ = l_Lean_Syntax_node2(v___x_597_, v___x_610_, v___x_637_, v___x_626_);
v___x_639_ = l_Lean_Syntax_node2(v___x_597_, v___x_608_, v___x_609_, v___x_638_);
v___x_640_ = l_Lean_Syntax_node1(v___x_597_, v___x_601_, v___x_639_);
v___x_641_ = l_Lean_Syntax_node1(v___x_597_, v___x_606_, v___x_640_);
v___x_642_ = l_Lean_Syntax_node1(v___x_597_, v___x_605_, v___x_641_);
lean_inc(v___x_642_);
v___x_643_ = l_Lean_Syntax_node2(v___x_597_, v___x_602_, v___x_604_, v___x_642_);
v___x_644_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47));
v___x_645_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__48));
v___x_646_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_597_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
lean_inc_ref(v___x_646_);
v___x_647_ = l_Lean_Syntax_node2(v___x_597_, v___x_644_, v___x_646_, v___x_631_);
v___x_648_ = l_Lean_Syntax_node1(v___x_597_, v___x_601_, v___x_647_);
v___x_649_ = l_Lean_Syntax_node1(v___x_597_, v___x_606_, v___x_648_);
v___x_650_ = l_Lean_Syntax_node1(v___x_597_, v___x_605_, v___x_649_);
v___x_651_ = l_Lean_Syntax_node2(v___x_597_, v___x_602_, v___x_604_, v___x_650_);
v___x_652_ = l_Lean_Syntax_node2(v___x_597_, v___x_644_, v___x_646_, v___x_642_);
v___x_653_ = l_Lean_Syntax_node1(v___x_597_, v___x_601_, v___x_652_);
v___x_654_ = l_Lean_Syntax_node1(v___x_597_, v___x_606_, v___x_653_);
v___x_655_ = l_Lean_Syntax_node1(v___x_597_, v___x_605_, v___x_654_);
v___x_656_ = l_Lean_Syntax_node2(v___x_597_, v___x_602_, v___x_604_, v___x_655_);
v___x_657_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__49));
v___x_658_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50));
v___x_659_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_659_, 0, v___x_597_);
lean_ctor_set(v___x_659_, 1, v___x_657_);
v___x_660_ = lean_obj_once(&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51, &l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51_once, _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51);
v___x_661_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_661_, 0, v___x_597_);
lean_ctor_set(v___x_661_, 1, v___x_601_);
lean_ctor_set(v___x_661_, 2, v___x_660_);
v___x_662_ = l_Lean_Syntax_node2(v___x_597_, v___x_658_, v___x_659_, v___x_661_);
v___x_663_ = l_Lean_Syntax_node1(v___x_597_, v___x_601_, v___x_662_);
v___x_664_ = l_Lean_Syntax_node1(v___x_597_, v___x_606_, v___x_663_);
v___x_665_ = l_Lean_Syntax_node1(v___x_597_, v___x_605_, v___x_664_);
v___x_666_ = l_Lean_Syntax_node2(v___x_597_, v___x_602_, v___x_604_, v___x_665_);
v___x_667_ = l_Lean_Syntax_node5(v___x_597_, v___x_601_, v___x_632_, v___x_643_, v___x_651_, v___x_656_, v___x_666_);
v___x_668_ = l_Lean_Syntax_node2(v___x_597_, v___x_599_, v___x_600_, v___x_667_);
v___x_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_668_);
lean_ctor_set(v___x_669_, 1, v_a_588_);
return v___x_669_;
}
}
}
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___boxed(lean_object* v_x_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1(v_x_670_, v_a_671_, v_a_672_);
lean_dec_ref(v_a_671_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps___redArg(lean_object* v_it_674_){
_start:
{
lean_inc(v_it_674_);
return v_it_674_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps___redArg___boxed(lean_object* v_it_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Std_Iter_finitelyManySteps___redArg(v_it_675_);
lean_dec(v_it_675_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps(lean_object* v_00_u03b1_677_, lean_object* v_00_u03b2_678_, lean_object* v_inst_679_, lean_object* v_inst_680_, lean_object* v_it_681_){
_start:
{
lean_inc(v_it_681_);
return v_it_681_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps___boxed(lean_object* v_00_u03b1_682_, lean_object* v_00_u03b2_683_, lean_object* v_inst_684_, lean_object* v_inst_685_, lean_object* v_it_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Std_Iter_finitelyManySteps(v_00_u03b1_682_, v_00_u03b2_683_, v_inst_684_, v_inst_685_, v_it_686_);
lean_dec(v_it_686_);
lean_dec(v_inst_684_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps_x21___redArg(lean_object* v_it_688_){
_start:
{
lean_inc(v_it_688_);
return v_it_688_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps_x21___redArg___boxed(lean_object* v_it_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Std_Iter_finitelyManySteps_x21___redArg(v_it_689_);
lean_dec(v_it_689_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps_x21(lean_object* v_00_u03b1_691_, lean_object* v_00_u03b2_692_, lean_object* v_inst_693_, lean_object* v_it_694_){
_start:
{
lean_inc(v_it_694_);
return v_it_694_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySteps_x21___boxed(lean_object* v_00_u03b1_695_, lean_object* v_00_u03b2_696_, lean_object* v_inst_697_, lean_object* v_it_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Std_Iter_finitelyManySteps_x21(v_00_u03b1_695_, v_00_u03b2_696_, v_inst_697_, v_it_698_);
lean_dec(v_it_698_);
lean_dec(v_inst_697_);
return v_res_699_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__1(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__0));
v___x_702_ = l_String_toRawSubstring_x27(v___x_701_);
return v___x_702_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__8(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__7));
v___x_723_ = l_String_toRawSubstring_x27(v___x_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2(lean_object* v_x_741_, lean_object* v_a_742_, lean_object* v_a_743_){
_start:
{
lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_744_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__1));
v___x_745_ = l_Lean_Syntax_isOfKind(v_x_741_, v___x_744_);
if (v___x_745_ == 0)
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_box(1);
v___x_747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
lean_ctor_set(v___x_747_, 1, v_a_743_);
return v___x_747_;
}
else
{
lean_object* v_quotContext_748_; lean_object* v_currMacroScope_749_; lean_object* v_ref_750_; uint8_t v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; 
v_quotContext_748_ = lean_ctor_get(v_a_742_, 1);
v_currMacroScope_749_ = lean_ctor_get(v_a_742_, 2);
v_ref_750_ = lean_ctor_get(v_a_742_, 5);
v___x_751_ = 0;
v___x_752_ = l_Lean_SourceInfo_fromRef(v_ref_750_, v___x_751_);
v___x_753_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__5));
v___x_754_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6));
lean_inc_n(v___x_752_, 42);
v___x_755_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_755_, 0, v___x_752_);
lean_ctor_set(v___x_755_, 1, v___x_753_);
v___x_756_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__8));
v___x_757_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__10));
v___x_758_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__11));
v___x_759_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_759_, 0, v___x_752_);
lean_ctor_set(v___x_759_, 1, v___x_758_);
v___x_760_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13));
v___x_761_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15));
v___x_762_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__16));
v___x_763_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17));
v___x_764_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_752_);
lean_ctor_set(v___x_764_, 1, v___x_762_);
v___x_765_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20));
v___x_766_ = lean_obj_once(&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__1, &l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__1_once, _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__1);
v___x_767_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__3));
lean_inc_n(v_currMacroScope_749_, 2);
lean_inc_n(v_quotContext_748_, 2);
v___x_768_ = l_Lean_addMacroScope(v_quotContext_748_, v___x_767_, v_currMacroScope_749_);
v___x_769_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__6));
v___x_770_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_770_, 0, v___x_752_);
lean_ctor_set(v___x_770_, 1, v___x_766_);
lean_ctor_set(v___x_770_, 2, v___x_768_);
lean_ctor_set(v___x_770_, 3, v___x_769_);
v___x_771_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__33));
v___x_772_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__34));
v___x_773_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_773_, 0, v___x_752_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
v___x_774_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36));
v___x_775_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__37));
v___x_776_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_752_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v___x_777_ = l_Lean_Syntax_node1(v___x_752_, v___x_774_, v___x_776_);
v___x_778_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__38));
v___x_779_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_752_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
v___x_780_ = l_Lean_Syntax_node3(v___x_752_, v___x_771_, v___x_773_, v___x_777_, v___x_779_);
v___x_781_ = l_Lean_Syntax_node1(v___x_752_, v___x_756_, v___x_780_);
lean_inc(v___x_781_);
v___x_782_ = l_Lean_Syntax_node2(v___x_752_, v___x_765_, v___x_770_, v___x_781_);
lean_inc_ref(v___x_764_);
v___x_783_ = l_Lean_Syntax_node2(v___x_752_, v___x_763_, v___x_764_, v___x_782_);
v___x_784_ = l_Lean_Syntax_node1(v___x_752_, v___x_756_, v___x_783_);
v___x_785_ = l_Lean_Syntax_node1(v___x_752_, v___x_761_, v___x_784_);
v___x_786_ = l_Lean_Syntax_node1(v___x_752_, v___x_760_, v___x_785_);
lean_inc(v___x_786_);
lean_inc_ref_n(v___x_759_, 4);
v___x_787_ = l_Lean_Syntax_node2(v___x_752_, v___x_757_, v___x_759_, v___x_786_);
v___x_788_ = lean_obj_once(&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__8, &l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__8_once, _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__8);
v___x_789_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__9));
v___x_790_ = l_Lean_addMacroScope(v_quotContext_748_, v___x_789_, v_currMacroScope_749_);
v___x_791_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___closed__12));
v___x_792_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_792_, 0, v___x_752_);
lean_ctor_set(v___x_792_, 1, v___x_788_);
lean_ctor_set(v___x_792_, 2, v___x_790_);
lean_ctor_set(v___x_792_, 3, v___x_791_);
v___x_793_ = l_Lean_Syntax_node2(v___x_752_, v___x_765_, v___x_792_, v___x_781_);
v___x_794_ = l_Lean_Syntax_node2(v___x_752_, v___x_763_, v___x_764_, v___x_793_);
v___x_795_ = l_Lean_Syntax_node1(v___x_752_, v___x_756_, v___x_794_);
v___x_796_ = l_Lean_Syntax_node1(v___x_752_, v___x_761_, v___x_795_);
v___x_797_ = l_Lean_Syntax_node1(v___x_752_, v___x_760_, v___x_796_);
lean_inc(v___x_797_);
v___x_798_ = l_Lean_Syntax_node2(v___x_752_, v___x_757_, v___x_759_, v___x_797_);
v___x_799_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47));
v___x_800_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__48));
v___x_801_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_801_, 0, v___x_752_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
lean_inc_ref(v___x_801_);
v___x_802_ = l_Lean_Syntax_node2(v___x_752_, v___x_799_, v___x_801_, v___x_786_);
v___x_803_ = l_Lean_Syntax_node1(v___x_752_, v___x_756_, v___x_802_);
v___x_804_ = l_Lean_Syntax_node1(v___x_752_, v___x_761_, v___x_803_);
v___x_805_ = l_Lean_Syntax_node1(v___x_752_, v___x_760_, v___x_804_);
v___x_806_ = l_Lean_Syntax_node2(v___x_752_, v___x_757_, v___x_759_, v___x_805_);
v___x_807_ = l_Lean_Syntax_node2(v___x_752_, v___x_799_, v___x_801_, v___x_797_);
v___x_808_ = l_Lean_Syntax_node1(v___x_752_, v___x_756_, v___x_807_);
v___x_809_ = l_Lean_Syntax_node1(v___x_752_, v___x_761_, v___x_808_);
v___x_810_ = l_Lean_Syntax_node1(v___x_752_, v___x_760_, v___x_809_);
v___x_811_ = l_Lean_Syntax_node2(v___x_752_, v___x_757_, v___x_759_, v___x_810_);
v___x_812_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__49));
v___x_813_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50));
v___x_814_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_752_);
lean_ctor_set(v___x_814_, 1, v___x_812_);
v___x_815_ = lean_obj_once(&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51, &l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51_once, _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51);
v___x_816_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_816_, 0, v___x_752_);
lean_ctor_set(v___x_816_, 1, v___x_756_);
lean_ctor_set(v___x_816_, 2, v___x_815_);
v___x_817_ = l_Lean_Syntax_node2(v___x_752_, v___x_813_, v___x_814_, v___x_816_);
v___x_818_ = l_Lean_Syntax_node1(v___x_752_, v___x_756_, v___x_817_);
v___x_819_ = l_Lean_Syntax_node1(v___x_752_, v___x_761_, v___x_818_);
v___x_820_ = l_Lean_Syntax_node1(v___x_752_, v___x_760_, v___x_819_);
v___x_821_ = l_Lean_Syntax_node2(v___x_752_, v___x_757_, v___x_759_, v___x_820_);
v___x_822_ = l_Lean_Syntax_node5(v___x_752_, v___x_756_, v___x_787_, v___x_798_, v___x_806_, v___x_811_, v___x_821_);
v___x_823_ = l_Lean_Syntax_node2(v___x_752_, v___x_754_, v___x_755_, v___x_822_);
v___x_824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
lean_ctor_set(v___x_824_, 1, v_a_743_);
return v___x_824_;
}
}
}
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2___boxed(lean_object* v_x_825_, lean_object* v_a_826_, lean_object* v_a_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__2(v_x_825_, v_a_826_, v_a_827_);
lean_dec_ref(v_a_826_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationProductive___redArg(){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = lean_box(0);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationProductive___redArg___boxed(lean_object* v___dummy_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Std_IterM_TerminationMeasures_instWellFoundedRelationProductive___redArg();
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationProductive(lean_object* v_00_u03b1_833_, lean_object* v_m_834_, lean_object* v_00_u03b2_835_, lean_object* v_inst_836_, lean_object* v_inst_837_){
_start:
{
lean_object* v___x_838_; 
v___x_838_ = lean_box(0);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_TerminationMeasures_instWellFoundedRelationProductive___boxed(lean_object* v_00_u03b1_839_, lean_object* v_m_840_, lean_object* v_00_u03b2_841_, lean_object* v_inst_842_, lean_object* v_inst_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Std_IterM_TerminationMeasures_instWellFoundedRelationProductive(v_00_u03b1_839_, v_m_840_, v_00_u03b2_841_, v_inst_842_, v_inst_843_);
lean_dec(v_inst_842_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips___redArg(lean_object* v_it_845_){
_start:
{
lean_inc(v_it_845_);
return v_it_845_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips___redArg___boxed(lean_object* v_it_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Std_IterM_finitelyManySkips___redArg(v_it_846_);
lean_dec(v_it_846_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips(lean_object* v_00_u03b1_848_, lean_object* v_m_849_, lean_object* v_00_u03b2_850_, lean_object* v_inst_851_, lean_object* v_inst_852_, lean_object* v_it_853_){
_start:
{
lean_inc(v_it_853_);
return v_it_853_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips___boxed(lean_object* v_00_u03b1_854_, lean_object* v_m_855_, lean_object* v_00_u03b2_856_, lean_object* v_inst_857_, lean_object* v_inst_858_, lean_object* v_it_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Std_IterM_finitelyManySkips(v_00_u03b1_854_, v_m_855_, v_00_u03b2_856_, v_inst_857_, v_inst_858_, v_it_859_);
lean_dec(v_it_859_);
lean_dec(v_inst_857_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips_x21___redArg(lean_object* v_it_861_){
_start:
{
lean_inc(v_it_861_);
return v_it_861_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips_x21___redArg___boxed(lean_object* v_it_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = l_Std_IterM_finitelyManySkips_x21___redArg(v_it_862_);
lean_dec(v_it_862_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips_x21(lean_object* v_00_u03b1_864_, lean_object* v_m_865_, lean_object* v_00_u03b2_866_, lean_object* v_inst_867_, lean_object* v_it_868_){
_start:
{
lean_inc(v_it_868_);
return v_it_868_;
}
}
LEAN_EXPORT lean_object* l_Std_IterM_finitelyManySkips_x21___boxed(lean_object* v_00_u03b1_869_, lean_object* v_m_870_, lean_object* v_00_u03b2_871_, lean_object* v_inst_872_, lean_object* v_it_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_Std_IterM_finitelyManySkips_x21(v_00_u03b1_869_, v_m_870_, v_00_u03b2_871_, v_inst_872_, v_it_873_);
lean_dec(v_it_873_);
lean_dec(v_inst_872_);
return v_res_874_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__1(void){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_876_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__0));
v___x_877_ = l_String_toRawSubstring_x27(v___x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3(lean_object* v_x_896_, lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
lean_object* v___x_899_; uint8_t v___x_900_; 
v___x_899_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__1));
v___x_900_ = l_Lean_Syntax_isOfKind(v_x_896_, v___x_899_);
if (v___x_900_ == 0)
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = lean_box(1);
v___x_902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_901_);
lean_ctor_set(v___x_902_, 1, v_a_898_);
return v___x_902_;
}
else
{
lean_object* v_quotContext_903_; lean_object* v_currMacroScope_904_; lean_object* v_ref_905_; uint8_t v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v_quotContext_903_ = lean_ctor_get(v_a_897_, 1);
v_currMacroScope_904_ = lean_ctor_get(v_a_897_, 2);
v_ref_905_ = lean_ctor_get(v_a_897_, 5);
v___x_906_ = 0;
v___x_907_ = l_Lean_SourceInfo_fromRef(v_ref_905_, v___x_906_);
v___x_908_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__5));
v___x_909_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6));
lean_inc_n(v___x_907_, 30);
v___x_910_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_907_);
lean_ctor_set(v___x_910_, 1, v___x_908_);
v___x_911_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__8));
v___x_912_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__10));
v___x_913_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__11));
v___x_914_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_907_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13));
v___x_916_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15));
v___x_917_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__16));
v___x_918_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17));
v___x_919_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_907_);
lean_ctor_set(v___x_919_, 1, v___x_917_);
v___x_920_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20));
v___x_921_ = lean_obj_once(&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__1, &l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__1_once, _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__1);
v___x_922_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__3));
lean_inc(v_currMacroScope_904_);
lean_inc(v_quotContext_903_);
v___x_923_ = l_Lean_addMacroScope(v_quotContext_903_, v___x_922_, v_currMacroScope_904_);
v___x_924_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___closed__6));
v___x_925_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_925_, 0, v___x_907_);
lean_ctor_set(v___x_925_, 1, v___x_921_);
lean_ctor_set(v___x_925_, 2, v___x_923_);
lean_ctor_set(v___x_925_, 3, v___x_924_);
v___x_926_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__33));
v___x_927_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__34));
v___x_928_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_928_, 0, v___x_907_);
lean_ctor_set(v___x_928_, 1, v___x_927_);
v___x_929_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36));
v___x_930_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__37));
v___x_931_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_931_, 0, v___x_907_);
lean_ctor_set(v___x_931_, 1, v___x_930_);
v___x_932_ = l_Lean_Syntax_node1(v___x_907_, v___x_929_, v___x_931_);
v___x_933_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__38));
v___x_934_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_934_, 0, v___x_907_);
lean_ctor_set(v___x_934_, 1, v___x_933_);
v___x_935_ = l_Lean_Syntax_node3(v___x_907_, v___x_926_, v___x_928_, v___x_932_, v___x_934_);
v___x_936_ = l_Lean_Syntax_node1(v___x_907_, v___x_911_, v___x_935_);
v___x_937_ = l_Lean_Syntax_node2(v___x_907_, v___x_920_, v___x_925_, v___x_936_);
v___x_938_ = l_Lean_Syntax_node2(v___x_907_, v___x_918_, v___x_919_, v___x_937_);
v___x_939_ = l_Lean_Syntax_node1(v___x_907_, v___x_911_, v___x_938_);
v___x_940_ = l_Lean_Syntax_node1(v___x_907_, v___x_916_, v___x_939_);
v___x_941_ = l_Lean_Syntax_node1(v___x_907_, v___x_915_, v___x_940_);
lean_inc(v___x_941_);
lean_inc_ref_n(v___x_914_, 2);
v___x_942_ = l_Lean_Syntax_node2(v___x_907_, v___x_912_, v___x_914_, v___x_941_);
v___x_943_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47));
v___x_944_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__48));
v___x_945_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_945_, 0, v___x_907_);
lean_ctor_set(v___x_945_, 1, v___x_944_);
v___x_946_ = l_Lean_Syntax_node2(v___x_907_, v___x_943_, v___x_945_, v___x_941_);
v___x_947_ = l_Lean_Syntax_node1(v___x_907_, v___x_911_, v___x_946_);
v___x_948_ = l_Lean_Syntax_node1(v___x_907_, v___x_916_, v___x_947_);
v___x_949_ = l_Lean_Syntax_node1(v___x_907_, v___x_915_, v___x_948_);
v___x_950_ = l_Lean_Syntax_node2(v___x_907_, v___x_912_, v___x_914_, v___x_949_);
v___x_951_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__49));
v___x_952_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50));
v___x_953_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_953_, 0, v___x_907_);
lean_ctor_set(v___x_953_, 1, v___x_951_);
v___x_954_ = lean_obj_once(&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51, &l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51_once, _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51);
v___x_955_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_955_, 0, v___x_907_);
lean_ctor_set(v___x_955_, 1, v___x_911_);
lean_ctor_set(v___x_955_, 2, v___x_954_);
v___x_956_ = l_Lean_Syntax_node2(v___x_907_, v___x_952_, v___x_953_, v___x_955_);
v___x_957_ = l_Lean_Syntax_node1(v___x_907_, v___x_911_, v___x_956_);
v___x_958_ = l_Lean_Syntax_node1(v___x_907_, v___x_916_, v___x_957_);
v___x_959_ = l_Lean_Syntax_node1(v___x_907_, v___x_915_, v___x_958_);
v___x_960_ = l_Lean_Syntax_node2(v___x_907_, v___x_912_, v___x_914_, v___x_959_);
v___x_961_ = l_Lean_Syntax_node3(v___x_907_, v___x_911_, v___x_942_, v___x_950_, v___x_960_);
v___x_962_ = l_Lean_Syntax_node2(v___x_907_, v___x_909_, v___x_910_, v___x_961_);
v___x_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
lean_ctor_set(v___x_963_, 1, v_a_898_);
return v___x_963_;
}
}
}
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3___boxed(lean_object* v_x_964_, lean_object* v_a_965_, lean_object* v_a_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__3(v_x_964_, v_a_965_, v_a_966_);
lean_dec_ref(v_a_965_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips___redArg(lean_object* v_it_968_){
_start:
{
lean_inc(v_it_968_);
return v_it_968_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips___redArg___boxed(lean_object* v_it_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Std_Iter_finitelyManySkips___redArg(v_it_969_);
lean_dec(v_it_969_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips(lean_object* v_00_u03b1_971_, lean_object* v_00_u03b2_972_, lean_object* v_inst_973_, lean_object* v_inst_974_, lean_object* v_it_975_){
_start:
{
lean_inc(v_it_975_);
return v_it_975_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips___boxed(lean_object* v_00_u03b1_976_, lean_object* v_00_u03b2_977_, lean_object* v_inst_978_, lean_object* v_inst_979_, lean_object* v_it_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l_Std_Iter_finitelyManySkips(v_00_u03b1_976_, v_00_u03b2_977_, v_inst_978_, v_inst_979_, v_it_980_);
lean_dec(v_it_980_);
lean_dec(v_inst_978_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips_x21___redArg(lean_object* v_it_982_){
_start:
{
lean_inc(v_it_982_);
return v_it_982_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips_x21___redArg___boxed(lean_object* v_it_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l_Std_Iter_finitelyManySkips_x21___redArg(v_it_983_);
lean_dec(v_it_983_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips_x21(lean_object* v_00_u03b1_985_, lean_object* v_00_u03b2_986_, lean_object* v_inst_987_, lean_object* v_it_988_){
_start:
{
lean_inc(v_it_988_);
return v_it_988_;
}
}
LEAN_EXPORT lean_object* l_Std_Iter_finitelyManySkips_x21___boxed(lean_object* v_00_u03b1_989_, lean_object* v_00_u03b2_990_, lean_object* v_inst_991_, lean_object* v_it_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_Std_Iter_finitelyManySkips_x21(v_00_u03b1_989_, v_00_u03b2_990_, v_inst_991_, v_it_992_);
lean_dec(v_it_992_);
lean_dec(v_inst_991_);
return v_res_993_;
}
}
static lean_object* _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__1(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__0));
v___x_996_ = l_String_toRawSubstring_x27(v___x_995_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4(lean_object* v_x_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v___x_1017_; uint8_t v___x_1018_; 
v___x_1017_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__1));
v___x_1018_ = l_Lean_Syntax_isOfKind(v_x_1014_, v___x_1017_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = lean_box(1);
v___x_1020_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
lean_ctor_set(v___x_1020_, 1, v_a_1016_);
return v___x_1020_;
}
else
{
lean_object* v_quotContext_1021_; lean_object* v_currMacroScope_1022_; lean_object* v_ref_1023_; uint8_t v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v_quotContext_1021_ = lean_ctor_get(v_a_1015_, 1);
v_currMacroScope_1022_ = lean_ctor_get(v_a_1015_, 2);
v_ref_1023_ = lean_ctor_get(v_a_1015_, 5);
v___x_1024_ = 0;
v___x_1025_ = l_Lean_SourceInfo_fromRef(v_ref_1023_, v___x_1024_);
v___x_1026_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__5));
v___x_1027_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__6));
lean_inc_n(v___x_1025_, 30);
v___x_1028_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1025_);
lean_ctor_set(v___x_1028_, 1, v___x_1026_);
v___x_1029_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__8));
v___x_1030_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__10));
v___x_1031_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__11));
v___x_1032_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1025_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___x_1033_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__13));
v___x_1034_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__15));
v___x_1035_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__16));
v___x_1036_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__17));
v___x_1037_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1025_);
lean_ctor_set(v___x_1037_, 1, v___x_1035_);
v___x_1038_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__20));
v___x_1039_ = lean_obj_once(&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__1, &l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__1_once, _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__1);
v___x_1040_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__2));
lean_inc(v_currMacroScope_1022_);
lean_inc(v_quotContext_1021_);
v___x_1041_ = l_Lean_addMacroScope(v_quotContext_1021_, v___x_1040_, v_currMacroScope_1022_);
v___x_1042_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___closed__5));
v___x_1043_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1025_);
lean_ctor_set(v___x_1043_, 1, v___x_1039_);
lean_ctor_set(v___x_1043_, 2, v___x_1041_);
lean_ctor_set(v___x_1043_, 3, v___x_1042_);
v___x_1044_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__33));
v___x_1045_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__34));
v___x_1046_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1025_);
lean_ctor_set(v___x_1046_, 1, v___x_1045_);
v___x_1047_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__36));
v___x_1048_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__37));
v___x_1049_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1025_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = l_Lean_Syntax_node1(v___x_1025_, v___x_1047_, v___x_1049_);
v___x_1051_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__38));
v___x_1052_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1025_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = l_Lean_Syntax_node3(v___x_1025_, v___x_1044_, v___x_1046_, v___x_1050_, v___x_1052_);
v___x_1054_ = l_Lean_Syntax_node1(v___x_1025_, v___x_1029_, v___x_1053_);
v___x_1055_ = l_Lean_Syntax_node2(v___x_1025_, v___x_1038_, v___x_1043_, v___x_1054_);
v___x_1056_ = l_Lean_Syntax_node2(v___x_1025_, v___x_1036_, v___x_1037_, v___x_1055_);
v___x_1057_ = l_Lean_Syntax_node1(v___x_1025_, v___x_1029_, v___x_1056_);
v___x_1058_ = l_Lean_Syntax_node1(v___x_1025_, v___x_1034_, v___x_1057_);
v___x_1059_ = l_Lean_Syntax_node1(v___x_1025_, v___x_1033_, v___x_1058_);
lean_inc(v___x_1059_);
lean_inc_ref_n(v___x_1032_, 2);
v___x_1060_ = l_Lean_Syntax_node2(v___x_1025_, v___x_1030_, v___x_1032_, v___x_1059_);
v___x_1061_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__47));
v___x_1062_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__48));
v___x_1063_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1025_);
lean_ctor_set(v___x_1063_, 1, v___x_1062_);
v___x_1064_ = l_Lean_Syntax_node2(v___x_1025_, v___x_1061_, v___x_1063_, v___x_1059_);
v___x_1065_ = l_Lean_Syntax_node1(v___x_1025_, v___x_1029_, v___x_1064_);
v___x_1066_ = l_Lean_Syntax_node1(v___x_1025_, v___x_1034_, v___x_1065_);
v___x_1067_ = l_Lean_Syntax_node1(v___x_1025_, v___x_1033_, v___x_1066_);
v___x_1068_ = l_Lean_Syntax_node2(v___x_1025_, v___x_1030_, v___x_1032_, v___x_1067_);
v___x_1069_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__49));
v___x_1070_ = ((lean_object*)(l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__50));
v___x_1071_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1025_);
lean_ctor_set(v___x_1071_, 1, v___x_1069_);
v___x_1072_ = lean_obj_once(&l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51, &l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51_once, _init_l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__1___closed__51);
v___x_1073_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1025_);
lean_ctor_set(v___x_1073_, 1, v___x_1029_);
lean_ctor_set(v___x_1073_, 2, v___x_1072_);
v___x_1074_ = l_Lean_Syntax_node2(v___x_1025_, v___x_1070_, v___x_1071_, v___x_1073_);
v___x_1075_ = l_Lean_Syntax_node1(v___x_1025_, v___x_1029_, v___x_1074_);
v___x_1076_ = l_Lean_Syntax_node1(v___x_1025_, v___x_1034_, v___x_1075_);
v___x_1077_ = l_Lean_Syntax_node1(v___x_1025_, v___x_1033_, v___x_1076_);
v___x_1078_ = l_Lean_Syntax_node2(v___x_1025_, v___x_1030_, v___x_1032_, v___x_1077_);
v___x_1079_ = l_Lean_Syntax_node3(v___x_1025_, v___x_1029_, v___x_1060_, v___x_1068_, v___x_1078_);
v___x_1080_ = l_Lean_Syntax_node2(v___x_1025_, v___x_1027_, v___x_1028_, v___x_1079_);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
lean_ctor_set(v___x_1081_, 1, v_a_1016_);
return v___x_1081_;
}
}
}
LEAN_EXPORT lean_object* l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4___boxed(lean_object* v_x_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Std___aux__Init__Data__Iterators__Basic______macroRules__tacticDecreasing__trivial__4(v_x_1082_, v_a_1083_, v_a_1084_);
lean_dec_ref(v_a_1083_);
return v_res_1085_;
}
}
lean_object* runtime_initialize_Init_NotationExtra(uint8_t builtin);
lean_object* runtime_initialize_Init_WFTactics(uint8_t builtin);
lean_object* runtime_initialize_Init_Ext(uint8_t builtin);
lean_object* runtime_initialize_Init_PropLemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Data_Iterators_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_PropLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Data_Iterators_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_NotationExtra(uint8_t builtin);
lean_object* initialize_Init_WFTactics(uint8_t builtin);
lean_object* initialize_Init_Ext(uint8_t builtin);
lean_object* initialize_Init_PropLemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Data_Iterators_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_NotationExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_WFTactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Ext(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_PropLemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Data_Iterators_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Data_Iterators_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
