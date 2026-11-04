// Lean compiler output
// Module: Init.Grind.Util
// Imports: public import Init.Data.Cast public import Init.Grind.Tactics public import Init.UDecidable.Basic public meta import Init.Grind.Tactics import Init.Classical
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
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_nestedDecidable___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Grind_nestedDecidable___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_nestedDecidable(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Grind_nestedDecidable___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_nestedUDecidable___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Grind_nestedUDecidable___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_nestedUDecidable(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Grind_nestedUDecidable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_simpMatchDiscrsOnly___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_simpMatchDiscrsOnly___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_simpMatchDiscrsOnly(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_simpMatchDiscrsOnly___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_abstractFn___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_abstractFn___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_abstractFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_abstractFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_offset(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_offset___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Grind_nestedProofUnexpander___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Grind_nestedProofUnexpander___closed__0 = (const lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__0_value;
static const lean_string_object l_Lean_Grind_nestedProofUnexpander___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Grind_nestedProofUnexpander___closed__1 = (const lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__1_value;
static const lean_string_object l_Lean_Grind_nestedProofUnexpander___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Grind_nestedProofUnexpander___closed__2 = (const lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__2_value;
static const lean_string_object l_Lean_Grind_nestedProofUnexpander___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Grind_nestedProofUnexpander___closed__3 = (const lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__3_value;
static const lean_ctor_object l_Lean_Grind_nestedProofUnexpander___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Grind_nestedProofUnexpander___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__4_value_aux_0),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Grind_nestedProofUnexpander___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__4_value_aux_1),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Grind_nestedProofUnexpander___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__4_value_aux_2),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__3_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Grind_nestedProofUnexpander___closed__4 = (const lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__4_value;
static const lean_string_object l_Lean_Grind_nestedProofUnexpander___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 7, .m_data = "term‹_›"};
static const lean_object* l_Lean_Grind_nestedProofUnexpander___closed__5 = (const lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__5_value;
static const lean_ctor_object l_Lean_Grind_nestedProofUnexpander___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__5_value),LEAN_SCALAR_PTR_LITERAL(149, 139, 117, 210, 91, 226, 103, 115)}};
static const lean_object* l_Lean_Grind_nestedProofUnexpander___closed__6 = (const lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__6_value;
static const lean_string_object l_Lean_Grind_nestedProofUnexpander___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "‹"};
static const lean_object* l_Lean_Grind_nestedProofUnexpander___closed__7 = (const lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__7_value;
static const lean_string_object l_Lean_Grind_nestedProofUnexpander___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "›"};
static const lean_object* l_Lean_Grind_nestedProofUnexpander___closed__8 = (const lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Grind_nestedProofUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_nestedProofUnexpander___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_matchCondUnexpander___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_matchCondUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_matchCondUnexpander___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Grind_eqMatchUnexpander___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_=_"};
static const lean_object* l_Lean_Grind_eqMatchUnexpander___closed__0 = (const lean_object*)&l_Lean_Grind_eqMatchUnexpander___closed__0_value;
static const lean_ctor_object l_Lean_Grind_eqMatchUnexpander___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_eqMatchUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 251, 107, 62, 223, 239, 203, 78)}};
static const lean_object* l_Lean_Grind_eqMatchUnexpander___closed__1 = (const lean_object*)&l_Lean_Grind_eqMatchUnexpander___closed__1_value;
static const lean_string_object l_Lean_Grind_eqMatchUnexpander___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "="};
static const lean_object* l_Lean_Grind_eqMatchUnexpander___closed__2 = (const lean_object*)&l_Lean_Grind_eqMatchUnexpander___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Grind_eqMatchUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_eqMatchUnexpander___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Grind_offsetUnexpander___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "term_+_"};
static const lean_object* l_Lean_Grind_offsetUnexpander___closed__0 = (const lean_object*)&l_Lean_Grind_offsetUnexpander___closed__0_value;
static const lean_ctor_object l_Lean_Grind_offsetUnexpander___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_offsetUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 160, 89, 154, 247, 230, 95, 119)}};
static const lean_object* l_Lean_Grind_offsetUnexpander___closed__1 = (const lean_object*)&l_Lean_Grind_offsetUnexpander___closed__1_value;
static const lean_string_object l_Lean_Grind_offsetUnexpander___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l_Lean_Grind_offsetUnexpander___closed__2 = (const lean_object*)&l_Lean_Grind_offsetUnexpander___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Grind_offsetUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_offsetUnexpander___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Grind_natCastUnexpander___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "coeNotation"};
static const lean_object* l_Lean_Grind_natCastUnexpander___closed__0 = (const lean_object*)&l_Lean_Grind_natCastUnexpander___closed__0_value;
static const lean_ctor_object l_Lean_Grind_natCastUnexpander___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_natCastUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(40, 100, 71, 170, 251, 12, 50, 58)}};
static const lean_object* l_Lean_Grind_natCastUnexpander___closed__1 = (const lean_object*)&l_Lean_Grind_natCastUnexpander___closed__1_value;
static const lean_string_object l_Lean_Grind_natCastUnexpander___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "↑"};
static const lean_object* l_Lean_Grind_natCastUnexpander___closed__2 = (const lean_object*)&l_Lean_Grind_natCastUnexpander___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Grind_natCastUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_natCastUnexpander___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Marker___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Marker___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Marker(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Marker___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Grind_markerUnexpander___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__0 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__1 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__1_value;
static const lean_string_object l_Lean_Grind_markerUnexpander___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__2 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__2_value;
static const lean_string_object l_Lean_Grind_markerUnexpander___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__3 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__3_value;
static const lean_string_object l_Lean_Grind_markerUnexpander___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__4 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__5_value_aux_1),((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__5_value_aux_2),((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__5 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__5_value;
static const lean_string_object l_Lean_Grind_markerUnexpander___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__6 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__7_value_aux_2),((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__7 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__7_value;
static const lean_string_object l_Lean_Grind_markerUnexpander___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__8 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__9 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__9_value;
static const lean_string_object l_Lean_Grind_markerUnexpander___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__10 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__11_value_aux_0),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__11_value_aux_1),((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__11_value_aux_2),((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(150, 98, 0, 78, 28, 79, 28, 100)}};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__11 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__11_value;
static const lean_string_object l_Lean_Grind_markerUnexpander___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__12 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__13_value_aux_0),((lean_object*)&l_Lean_Grind_nestedProofUnexpander___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__13_value_aux_1),((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Grind_markerUnexpander___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__13_value_aux_2),((lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__13 = (const lean_object*)&l_Lean_Grind_markerUnexpander___redArg___closed__13_value;
static lean_once_cell_t l_Lean_Grind_markerUnexpander___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_markerUnexpander___redArg___closed__14;
LEAN_EXPORT lean_object* l_Lean_Grind_markerUnexpander___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_markerUnexpander___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_markerUnexpander(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_markerUnexpander___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Grind_nestedDecidable___redArg(uint8_t v_h_1_){
_start:
{
return v_h_1_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nestedDecidable___redArg___boxed(lean_object* v_h_2_){
_start:
{
uint8_t v_h_boxed_3_; uint8_t v_res_4_; lean_object* v_r_5_; 
v_h_boxed_3_ = lean_unbox(v_h_2_);
v_res_4_ = l_Lean_Grind_nestedDecidable___redArg(v_h_boxed_3_);
v_r_5_ = lean_box(v_res_4_);
return v_r_5_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_nestedDecidable(lean_object* v_p_6_, uint8_t v_h_7_){
_start:
{
return v_h_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nestedDecidable___boxed(lean_object* v_p_8_, lean_object* v_h_9_){
_start:
{
uint8_t v_h_boxed_10_; uint8_t v_res_11_; lean_object* v_r_12_; 
v_h_boxed_10_ = lean_unbox(v_h_9_);
v_res_11_ = l_Lean_Grind_nestedDecidable(v_p_8_, v_h_boxed_10_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_nestedUDecidable___redArg(uint8_t v_h_13_){
_start:
{
return v_h_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nestedUDecidable___redArg___boxed(lean_object* v_h_14_){
_start:
{
uint8_t v_h_boxed_15_; uint8_t v_res_16_; lean_object* v_r_17_; 
v_h_boxed_15_ = lean_unbox(v_h_14_);
v_res_16_ = l_Lean_Grind_nestedUDecidable___redArg(v_h_boxed_15_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t l_Lean_Grind_nestedUDecidable(lean_object* v_p_18_, uint8_t v_h_19_){
_start:
{
return v_h_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nestedUDecidable___boxed(lean_object* v_p_20_, lean_object* v_h_21_){
_start:
{
uint8_t v_h_boxed_22_; uint8_t v_res_23_; lean_object* v_r_24_; 
v_h_boxed_22_ = lean_unbox(v_h_21_);
v_res_23_ = l_Lean_Grind_nestedUDecidable(v_p_20_, v_h_boxed_22_);
v_r_24_ = lean_box(v_res_23_);
return v_r_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_simpMatchDiscrsOnly___redArg(lean_object* v_a_25_){
_start:
{
lean_inc(v_a_25_);
return v_a_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_simpMatchDiscrsOnly___redArg___boxed(lean_object* v_a_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_Grind_simpMatchDiscrsOnly___redArg(v_a_26_);
lean_dec(v_a_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_simpMatchDiscrsOnly(lean_object* v_00_u03b1_28_, lean_object* v_a_29_){
_start:
{
lean_inc(v_a_29_);
return v_a_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_simpMatchDiscrsOnly___boxed(lean_object* v_00_u03b1_30_, lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Grind_simpMatchDiscrsOnly(v_00_u03b1_30_, v_a_31_);
lean_dec(v_a_31_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_abstractFn___redArg(lean_object* v_a_33_){
_start:
{
lean_inc(v_a_33_);
return v_a_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_abstractFn___redArg___boxed(lean_object* v_a_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Lean_Grind_abstractFn___redArg(v_a_34_);
lean_dec(v_a_34_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_abstractFn(lean_object* v_00_u03b1_36_, lean_object* v_a_37_){
_start:
{
lean_inc(v_a_37_);
return v_a_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_abstractFn___boxed(lean_object* v_00_u03b1_38_, lean_object* v_a_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Grind_abstractFn(v_00_u03b1_38_, v_a_39_);
lean_dec(v_a_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_offset(lean_object* v_a_41_, lean_object* v_b_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_nat_add(v_a_41_, v_b_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_offset___boxed(lean_object* v_a_44_, lean_object* v_b_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_Grind_offset(v_a_44_, v_b_45_);
lean_dec(v_b_45_);
lean_dec(v_a_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nestedProofUnexpander(lean_object* v_stx_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_64_ = ((lean_object*)(l_Lean_Grind_nestedProofUnexpander___closed__4));
lean_inc(v_stx_61_);
v___x_65_ = l_Lean_Syntax_isOfKind(v_stx_61_, v___x_64_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; lean_object* v___x_67_; 
lean_dec(v_stx_61_);
v___x_66_ = lean_box(0);
v___x_67_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_66_);
lean_ctor_set(v___x_67_, 1, v_a_63_);
return v___x_67_;
}
else
{
lean_object* v___x_68_; lean_object* v___x_69_; uint8_t v___x_70_; 
v___x_68_ = lean_unsigned_to_nat(1u);
v___x_69_ = l_Lean_Syntax_getArg(v_stx_61_, v___x_68_);
lean_dec(v_stx_61_);
lean_inc(v___x_69_);
v___x_70_ = l_Lean_Syntax_matchesNull(v___x_69_, v___x_68_);
if (v___x_70_ == 0)
{
lean_object* v___x_71_; lean_object* v___x_72_; 
lean_dec(v___x_69_);
v___x_71_ = lean_box(0);
v___x_72_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v_a_63_);
return v___x_72_;
}
else
{
lean_object* v___x_73_; lean_object* v___x_74_; uint8_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = l_Lean_Syntax_getArg(v___x_69_, v___x_73_);
lean_dec(v___x_69_);
v___x_75_ = 0;
v___x_76_ = l_Lean_SourceInfo_fromRef(v_a_62_, v___x_75_);
v___x_77_ = ((lean_object*)(l_Lean_Grind_nestedProofUnexpander___closed__6));
v___x_78_ = ((lean_object*)(l_Lean_Grind_nestedProofUnexpander___closed__7));
lean_inc_n(v___x_76_, 2);
v___x_79_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_76_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = ((lean_object*)(l_Lean_Grind_nestedProofUnexpander___closed__8));
v___x_81_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_81_, 0, v___x_76_);
lean_ctor_set(v___x_81_, 1, v___x_80_);
v___x_82_ = l_Lean_Syntax_node3(v___x_76_, v___x_77_, v___x_79_, v___x_74_, v___x_81_);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v_a_63_);
return v___x_83_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_nestedProofUnexpander___boxed(lean_object* v_stx_84_, lean_object* v_a_85_, lean_object* v_a_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_Grind_nestedProofUnexpander(v_stx_84_, v_a_85_, v_a_86_);
lean_dec(v_a_85_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_matchCondUnexpander___redArg(lean_object* v_stx_88_, lean_object* v_a_89_){
_start:
{
lean_object* v___x_90_; uint8_t v___x_91_; 
v___x_90_ = ((lean_object*)(l_Lean_Grind_nestedProofUnexpander___closed__4));
lean_inc(v_stx_88_);
v___x_91_ = l_Lean_Syntax_isOfKind(v_stx_88_, v___x_90_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; lean_object* v___x_93_; 
lean_dec(v_stx_88_);
v___x_92_ = lean_box(0);
v___x_93_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v_a_89_);
return v___x_93_;
}
else
{
lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_94_ = lean_unsigned_to_nat(1u);
v___x_95_ = l_Lean_Syntax_getArg(v_stx_88_, v___x_94_);
lean_dec(v_stx_88_);
lean_inc(v___x_95_);
v___x_96_ = l_Lean_Syntax_matchesNull(v___x_95_, v___x_94_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v___x_98_; 
lean_dec(v___x_95_);
v___x_97_ = lean_box(0);
v___x_98_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v_a_89_);
return v___x_98_;
}
else
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = lean_unsigned_to_nat(0u);
v___x_100_ = l_Lean_Syntax_getArg(v___x_95_, v___x_99_);
lean_dec(v___x_95_);
v___x_101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v_a_89_);
return v___x_101_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_matchCondUnexpander(lean_object* v_stx_102_, lean_object* v_a_103_, lean_object* v_a_104_){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = l_Lean_Grind_matchCondUnexpander___redArg(v_stx_102_, v_a_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_matchCondUnexpander___boxed(lean_object* v_stx_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lean_Grind_matchCondUnexpander(v_stx_106_, v_a_107_, v_a_108_);
lean_dec(v_a_107_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_eqMatchUnexpander(lean_object* v_stx_114_, lean_object* v_a_115_, lean_object* v_a_116_){
_start:
{
lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_117_ = ((lean_object*)(l_Lean_Grind_nestedProofUnexpander___closed__4));
lean_inc(v_stx_114_);
v___x_118_ = l_Lean_Syntax_isOfKind(v_stx_114_, v___x_117_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; 
lean_dec(v_stx_114_);
v___x_119_ = lean_box(0);
v___x_120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v_a_116_);
return v___x_120_;
}
else
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint8_t v___x_124_; 
v___x_121_ = lean_unsigned_to_nat(1u);
v___x_122_ = l_Lean_Syntax_getArg(v_stx_114_, v___x_121_);
lean_dec(v_stx_114_);
v___x_123_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_122_);
v___x_124_ = l_Lean_Syntax_matchesNull(v___x_122_, v___x_123_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; lean_object* v___x_126_; 
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v___x_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v_a_116_);
return v___x_126_;
}
else
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_127_ = lean_unsigned_to_nat(0u);
v___x_128_ = l_Lean_Syntax_getArg(v___x_122_, v___x_127_);
v___x_129_ = l_Lean_Syntax_getArg(v___x_122_, v___x_121_);
lean_dec(v___x_122_);
v___x_130_ = 0;
v___x_131_ = l_Lean_SourceInfo_fromRef(v_a_115_, v___x_130_);
v___x_132_ = ((lean_object*)(l_Lean_Grind_eqMatchUnexpander___closed__1));
v___x_133_ = ((lean_object*)(l_Lean_Grind_eqMatchUnexpander___closed__2));
lean_inc(v___x_131_);
v___x_134_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_131_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
v___x_135_ = l_Lean_Syntax_node3(v___x_131_, v___x_132_, v___x_128_, v___x_134_, v___x_129_);
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v_a_116_);
return v___x_136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_eqMatchUnexpander___boxed(lean_object* v_stx_137_, lean_object* v_a_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_Grind_eqMatchUnexpander(v_stx_137_, v_a_138_, v_a_139_);
lean_dec(v_a_138_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_offsetUnexpander(lean_object* v_stx_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v___x_148_; uint8_t v___x_149_; 
v___x_148_ = ((lean_object*)(l_Lean_Grind_nestedProofUnexpander___closed__4));
lean_inc(v_stx_145_);
v___x_149_ = l_Lean_Syntax_isOfKind(v_stx_145_, v___x_148_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; lean_object* v___x_151_; 
lean_dec(v_stx_145_);
v___x_150_ = lean_box(0);
v___x_151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
lean_ctor_set(v___x_151_, 1, v_a_147_);
return v___x_151_;
}
else
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_152_ = lean_unsigned_to_nat(1u);
v___x_153_ = l_Lean_Syntax_getArg(v_stx_145_, v___x_152_);
lean_dec(v_stx_145_);
v___x_154_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_153_);
v___x_155_ = l_Lean_Syntax_matchesNull(v___x_153_, v___x_154_);
if (v___x_155_ == 0)
{
lean_object* v___x_156_; lean_object* v___x_157_; 
lean_dec(v___x_153_);
v___x_156_ = lean_box(0);
v___x_157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v_a_147_);
return v___x_157_;
}
else
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; uint8_t v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_158_ = lean_unsigned_to_nat(0u);
v___x_159_ = l_Lean_Syntax_getArg(v___x_153_, v___x_158_);
v___x_160_ = l_Lean_Syntax_getArg(v___x_153_, v___x_152_);
lean_dec(v___x_153_);
v___x_161_ = 0;
v___x_162_ = l_Lean_SourceInfo_fromRef(v_a_146_, v___x_161_);
v___x_163_ = ((lean_object*)(l_Lean_Grind_offsetUnexpander___closed__1));
v___x_164_ = ((lean_object*)(l_Lean_Grind_offsetUnexpander___closed__2));
lean_inc(v___x_162_);
v___x_165_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_162_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
v___x_166_ = l_Lean_Syntax_node3(v___x_162_, v___x_163_, v___x_159_, v___x_165_, v___x_160_);
v___x_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
lean_ctor_set(v___x_167_, 1, v_a_147_);
return v___x_167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_offsetUnexpander___boxed(lean_object* v_stx_168_, lean_object* v_a_169_, lean_object* v_a_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_Grind_offsetUnexpander(v_stx_168_, v_a_169_, v_a_170_);
lean_dec(v_a_169_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_natCastUnexpander(lean_object* v_stx_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v___x_179_; uint8_t v___x_180_; 
v___x_179_ = ((lean_object*)(l_Lean_Grind_nestedProofUnexpander___closed__4));
lean_inc(v_stx_176_);
v___x_180_ = l_Lean_Syntax_isOfKind(v_stx_176_, v___x_179_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; lean_object* v___x_182_; 
lean_dec(v_stx_176_);
v___x_181_ = lean_box(0);
v___x_182_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
lean_ctor_set(v___x_182_, 1, v_a_178_);
return v___x_182_;
}
else
{
lean_object* v___x_183_; lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_183_ = lean_unsigned_to_nat(1u);
v___x_184_ = l_Lean_Syntax_getArg(v_stx_176_, v___x_183_);
lean_dec(v_stx_176_);
lean_inc(v___x_184_);
v___x_185_ = l_Lean_Syntax_matchesNull(v___x_184_, v___x_183_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; lean_object* v___x_187_; 
lean_dec(v___x_184_);
v___x_186_ = lean_box(0);
v___x_187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v_a_178_);
return v___x_187_;
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; uint8_t v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_189_ = l_Lean_Syntax_getArg(v___x_184_, v___x_188_);
lean_dec(v___x_184_);
v___x_190_ = 0;
v___x_191_ = l_Lean_SourceInfo_fromRef(v_a_177_, v___x_190_);
v___x_192_ = ((lean_object*)(l_Lean_Grind_natCastUnexpander___closed__1));
v___x_193_ = ((lean_object*)(l_Lean_Grind_natCastUnexpander___closed__2));
lean_inc(v___x_191_);
v___x_194_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_191_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = l_Lean_Syntax_node2(v___x_191_, v___x_192_, v___x_194_, v___x_189_);
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_195_);
lean_ctor_set(v___x_196_, 1, v_a_178_);
return v___x_196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_natCastUnexpander___boxed(lean_object* v_stx_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lean_Grind_natCastUnexpander(v_stx_197_, v_a_198_, v_a_199_);
lean_dec(v_a_198_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Marker___redArg(lean_object* v_a_201_){
_start:
{
lean_inc(v_a_201_);
return v_a_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Marker___redArg___boxed(lean_object* v_a_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Lean_Grind_Marker___redArg(v_a_202_);
lean_dec(v_a_202_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Marker(lean_object* v_00_u03b1_204_, lean_object* v_a_205_){
_start:
{
lean_inc(v_a_205_);
return v_a_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Marker___boxed(lean_object* v_00_u03b1_206_, lean_object* v_a_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_Grind_Marker(v_00_u03b1_206_, v_a_207_);
lean_dec(v_a_207_);
return v_res_208_;
}
}
static lean_object* _init_l_Lean_Grind_markerUnexpander___redArg___closed__14(void){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l_Array_mkArray0___redArg();
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_markerUnexpander___redArg(lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
uint8_t v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_247_ = 0;
v___x_248_ = l_Lean_SourceInfo_fromRef(v_a_245_, v___x_247_);
v___x_249_ = ((lean_object*)(l_Lean_Grind_markerUnexpander___redArg___closed__1));
v___x_250_ = ((lean_object*)(l_Lean_Grind_markerUnexpander___redArg___closed__2));
lean_inc_n(v___x_248_, 8);
v___x_251_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_248_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___x_252_ = ((lean_object*)(l_Lean_Grind_markerUnexpander___redArg___closed__5));
v___x_253_ = ((lean_object*)(l_Lean_Grind_markerUnexpander___redArg___closed__7));
v___x_254_ = ((lean_object*)(l_Lean_Grind_markerUnexpander___redArg___closed__9));
v___x_255_ = ((lean_object*)(l_Lean_Grind_markerUnexpander___redArg___closed__10));
v___x_256_ = ((lean_object*)(l_Lean_Grind_markerUnexpander___redArg___closed__11));
v___x_257_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_248_);
lean_ctor_set(v___x_257_, 1, v___x_255_);
v___x_258_ = ((lean_object*)(l_Lean_Grind_markerUnexpander___redArg___closed__13));
v___x_259_ = lean_obj_once(&l_Lean_Grind_markerUnexpander___redArg___closed__14, &l_Lean_Grind_markerUnexpander___redArg___closed__14_once, _init_l_Lean_Grind_markerUnexpander___redArg___closed__14);
v___x_260_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_260_, 0, v___x_248_);
lean_ctor_set(v___x_260_, 1, v___x_254_);
lean_ctor_set(v___x_260_, 2, v___x_259_);
lean_inc_ref_n(v___x_260_, 3);
v___x_261_ = l_Lean_Syntax_node1(v___x_248_, v___x_258_, v___x_260_);
v___x_262_ = l_Lean_Syntax_node5(v___x_248_, v___x_256_, v___x_257_, v___x_261_, v___x_260_, v___x_260_, v___x_260_);
v___x_263_ = l_Lean_Syntax_node1(v___x_248_, v___x_254_, v___x_262_);
v___x_264_ = l_Lean_Syntax_node1(v___x_248_, v___x_253_, v___x_263_);
v___x_265_ = l_Lean_Syntax_node1(v___x_248_, v___x_252_, v___x_264_);
v___x_266_ = l_Lean_Syntax_node2(v___x_248_, v___x_249_, v___x_251_, v___x_265_);
v___x_267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_266_);
lean_ctor_set(v___x_267_, 1, v_a_246_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_markerUnexpander___redArg___boxed(lean_object* v_a_268_, lean_object* v_a_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_Grind_markerUnexpander___redArg(v_a_268_, v_a_269_);
lean_dec(v_a_268_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_markerUnexpander(lean_object* v_x_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_Grind_markerUnexpander___redArg(v_a_272_, v_a_273_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_markerUnexpander___boxed(lean_object* v_x_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_Grind_markerUnexpander(v_x_275_, v_a_276_, v_a_277_);
lean_dec(v_a_276_);
lean_dec(v_x_275_);
return v_res_278_;
}
}
lean_object* runtime_initialize_Init_Data_Cast(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* runtime_initialize_Init_UDecidable_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Classical(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Cast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_UDecidable_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Classical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Grind_Tactics(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Init_Grind_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Cast(uint8_t builtin);
lean_object* initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* initialize_Init_UDecidable_Basic(uint8_t builtin);
lean_object* initialize_Init_Grind_Tactics(uint8_t builtin);
lean_object* initialize_Init_Classical(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Init_Grind_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Cast(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_UDecidable_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Tactics(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Classical(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Init_Grind_Util(builtin);
}
#ifdef __cplusplus
}
#endif
