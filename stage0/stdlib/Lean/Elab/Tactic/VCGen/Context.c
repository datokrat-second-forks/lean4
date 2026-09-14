// Lean compiler output
// Module: Lean.Elab.Tactic.VCGen.Context
// Imports: public import Lean.Elab.Tactic.Do.VCGen.Basic public import Lean.Elab.Tactic.VCGen.SpecDB public import Lean.Elab.Tactic.VCGen.FrameProc public import Lean.Meta.Sym.Apply public import Lean.Meta.Sym.Simp.DiscrTree public import Lean.Meta.Sym.Simp.SimpM public import Lean.Meta.Tactic.Grind.Types
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
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_SpecAttr_mkSpecTheoremFromLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_VCGen_SpecAttr_SpecTheorems_insert(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty___redArg();
extern lean_object* l_Lean_Elab_Tactic_VCGen_SpecAttr_instInhabitedSpecTheorems_default;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Meta_Sym_instInhabitedPattern_default;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__0;
static const lean_array_object l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WP"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Triple"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__1_value),LEAN_SCALAR_PTR_LITERAL(193, 201, 27, 53, 82, 85, 158, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__2_value),LEAN_SCALAR_PTR_LITERAL(202, 119, 227, 254, 29, 206, 25, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__3_value),LEAN_SCALAR_PTR_LITERAL(221, 221, 47, 20, 208, 169, 53, 145)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "le_of_forall_le"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__7_value),LEAN_SCALAR_PTR_LITERAL(101, 62, 242, 60, 214, 49, 44, 186)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "le_of_imp_top_le"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__9_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__10_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__10_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__9_value),LEAN_SCALAR_PTR_LITERAL(93, 90, 131, 207, 158, 255, 244, 86)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ofProp_le"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__11_value),LEAN_SCALAR_PTR_LITERAL(170, 72, 238, 67, 89, 176, 13, 2)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ofProp_meet_le"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__13_value),LEAN_SCALAR_PTR_LITERAL(26, 245, 193, 228, 204, 100, 105, 167)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "iSup_le"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__15_value),LEAN_SCALAR_PTR_LITERAL(199, 118, 246, 228, 14, 114, 190, 48)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__16_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "true_le_of_top_le"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__18_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__18_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__17_value),LEAN_SCALAR_PTR_LITERAL(246, 158, 62, 101, 253, 23, 66, 126)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__18_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "top_le_prop"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__20_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__20_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__19_value),LEAN_SCALAR_PTR_LITERAL(100, 220, 104, 174, 27, 127, 1, 211)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__21_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__22_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__3_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__22_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__23_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rel_refl"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__23_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__25_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__24_value),LEAN_SCALAR_PTR_LITERAL(114, 93, 162, 136, 122, 175, 235, 220)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__25_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "meet_top_le_of_le"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__26_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__27_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__27_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__26_value),LEAN_SCALAR_PTR_LITERAL(242, 230, 85, 150, 218, 12, 92, 28)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__27 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__27_value;
static const lean_string_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "le_forall"};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__5_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__6_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__29_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__28_value),LEAN_SCALAR_PTR_LITERAL(57, 100, 144, 90, 138, 155, 244, 133)}};
static const lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__29 = (const lean_object*)&l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__29_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_instInhabitedScope;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_registerJP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_knownJP_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_knownJP_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_insertSpec(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_outOfFuel___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_outOfFuel___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_outOfFuel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_outOfFuel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_burnOne___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_burnOne___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_burnOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_burnOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default___closed__1(void){
_start:
{
uint8_t v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_3_ = 0;
v___x_4_ = lean_unsigned_to_nat(0u);
v___x_5_ = lean_box(0);
v___x_6_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default___closed__0));
v___x_7_ = l_Lean_Meta_Sym_instInhabitedPattern_default;
v___x_8_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
lean_ctor_set(v___x_8_, 2, v___x_5_);
lean_ctor_set(v___x_8_, 3, v___x_4_);
lean_ctor_set_uint8(v___x_8_, sizeof(void*)*4, v___x_3_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default___closed__1, &l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default___closed__1_once, _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default___closed__1);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default;
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__0(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Meta_DiscrTree_empty___redArg();
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__2(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_14_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__1));
v___x_15_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__0, &l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__0_once, _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__0);
v___x_16_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v___x_14_);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__2, &l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__2_once, _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB___closed__2);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules(lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__4));
v___x_91_ = lean_box(0);
v___x_92_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_90_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v_a_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v_a_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc(v_a_93_);
lean_dec_ref_known(v___x_92_, 1);
v___x_94_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__8));
v___x_95_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_94_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_a_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v_a_96_ = lean_ctor_get(v___x_95_, 0);
lean_inc(v_a_96_);
lean_dec_ref_known(v___x_95_, 1);
v___x_97_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__10));
v___x_98_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_97_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_98_) == 0)
{
lean_object* v_a_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v_a_99_ = lean_ctor_get(v___x_98_, 0);
lean_inc(v_a_99_);
lean_dec_ref_known(v___x_98_, 1);
v___x_100_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__12));
v___x_101_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_100_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
lean_inc(v_a_102_);
lean_dec_ref_known(v___x_101_, 1);
v___x_103_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__14));
v___x_104_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_103_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v_a_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_a_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_a_105_);
lean_dec_ref_known(v___x_104_, 1);
v___x_106_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__16));
v___x_107_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_106_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v_a_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v_a_108_ = lean_ctor_get(v___x_107_, 0);
lean_inc(v_a_108_);
lean_dec_ref_known(v___x_107_, 1);
v___x_109_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__18));
v___x_110_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_109_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_a_111_);
lean_dec_ref_known(v___x_110_, 1);
v___x_112_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__20));
v___x_113_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_112_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
lean_dec_ref_known(v___x_113_, 1);
v___x_115_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__22));
v___x_116_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_115_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
lean_inc(v_a_117_);
lean_dec_ref_known(v___x_116_, 1);
v___x_118_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__25));
v___x_119_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_118_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v_a_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v_a_120_ = lean_ctor_get(v___x_119_, 0);
lean_inc(v_a_120_);
lean_dec_ref_known(v___x_119_, 1);
v___x_121_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__27));
v___x_122_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_121_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v_a_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v_a_123_ = lean_ctor_get(v___x_122_, 0);
lean_inc(v_a_123_);
lean_dec_ref_known(v___x_122_, 1);
v___x_124_ = ((lean_object*)(l_Lean_Elab_Tactic_VCGen_mkBackwardRules___closed__29));
v___x_125_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_124_, v___x_91_, v___y_85_, v___y_86_, v___y_87_, v___y_88_);
if (lean_obj_tag(v___x_125_) == 0)
{
lean_object* v_a_126_; lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_134_; 
v_a_126_ = lean_ctor_get(v___x_125_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_125_);
if (v_isSharedCheck_134_ == 0)
{
v___x_128_ = v___x_125_;
v_isShared_129_ = v_isSharedCheck_134_;
goto v_resetjp_127_;
}
else
{
lean_inc(v_a_126_);
lean_dec(v___x_125_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_134_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_130_; lean_object* v___x_132_; 
v___x_130_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_130_, 0, v_a_93_);
lean_ctor_set(v___x_130_, 1, v_a_96_);
lean_ctor_set(v___x_130_, 2, v_a_99_);
lean_ctor_set(v___x_130_, 3, v_a_102_);
lean_ctor_set(v___x_130_, 4, v_a_105_);
lean_ctor_set(v___x_130_, 5, v_a_108_);
lean_ctor_set(v___x_130_, 6, v_a_111_);
lean_ctor_set(v___x_130_, 7, v_a_114_);
lean_ctor_set(v___x_130_, 8, v_a_117_);
lean_ctor_set(v___x_130_, 9, v_a_120_);
lean_ctor_set(v___x_130_, 10, v_a_123_);
lean_ctor_set(v___x_130_, 11, v_a_126_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 0, v___x_130_);
v___x_132_ = v___x_128_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
}
else
{
lean_object* v_a_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_142_; 
lean_dec(v_a_123_);
lean_dec(v_a_120_);
lean_dec(v_a_117_);
lean_dec(v_a_114_);
lean_dec(v_a_111_);
lean_dec(v_a_108_);
lean_dec(v_a_105_);
lean_dec(v_a_102_);
lean_dec(v_a_99_);
lean_dec(v_a_96_);
lean_dec(v_a_93_);
v_a_135_ = lean_ctor_get(v___x_125_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_125_);
if (v_isSharedCheck_142_ == 0)
{
v___x_137_ = v___x_125_;
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_a_135_);
lean_dec(v___x_125_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_140_; 
if (v_isShared_138_ == 0)
{
v___x_140_ = v___x_137_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_a_135_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
else
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
lean_dec(v_a_120_);
lean_dec(v_a_117_);
lean_dec(v_a_114_);
lean_dec(v_a_111_);
lean_dec(v_a_108_);
lean_dec(v_a_105_);
lean_dec(v_a_102_);
lean_dec(v_a_99_);
lean_dec(v_a_96_);
lean_dec(v_a_93_);
v_a_143_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_150_ == 0)
{
v___x_145_ = v___x_122_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_122_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_143_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
else
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
lean_dec(v_a_117_);
lean_dec(v_a_114_);
lean_dec(v_a_111_);
lean_dec(v_a_108_);
lean_dec(v_a_105_);
lean_dec(v_a_102_);
lean_dec(v_a_99_);
lean_dec(v_a_96_);
lean_dec(v_a_93_);
v_a_151_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v___x_119_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_119_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
}
else
{
lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_166_; 
lean_dec(v_a_114_);
lean_dec(v_a_111_);
lean_dec(v_a_108_);
lean_dec(v_a_105_);
lean_dec(v_a_102_);
lean_dec(v_a_99_);
lean_dec(v_a_96_);
lean_dec(v_a_93_);
v_a_159_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_166_ == 0)
{
v___x_161_ = v___x_116_;
v_isShared_162_ = v_isSharedCheck_166_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_116_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_166_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_164_; 
if (v_isShared_162_ == 0)
{
v___x_164_ = v___x_161_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_a_159_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
}
else
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_174_; 
lean_dec(v_a_111_);
lean_dec(v_a_108_);
lean_dec(v_a_105_);
lean_dec(v_a_102_);
lean_dec(v_a_99_);
lean_dec(v_a_96_);
lean_dec(v_a_93_);
v_a_167_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_174_ == 0)
{
v___x_169_ = v___x_113_;
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v___x_113_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_a_167_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
}
else
{
lean_object* v_a_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_182_; 
lean_dec(v_a_108_);
lean_dec(v_a_105_);
lean_dec(v_a_102_);
lean_dec(v_a_99_);
lean_dec(v_a_96_);
lean_dec(v_a_93_);
v_a_175_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_182_ == 0)
{
v___x_177_ = v___x_110_;
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_a_175_);
lean_dec(v___x_110_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_180_; 
if (v_isShared_178_ == 0)
{
v___x_180_ = v___x_177_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_a_175_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
lean_dec(v_a_105_);
lean_dec(v_a_102_);
lean_dec(v_a_99_);
lean_dec(v_a_96_);
lean_dec(v_a_93_);
v_a_183_ = lean_ctor_get(v___x_107_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_107_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_107_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_198_; 
lean_dec(v_a_102_);
lean_dec(v_a_99_);
lean_dec(v_a_96_);
lean_dec(v_a_93_);
v_a_191_ = lean_ctor_get(v___x_104_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v___x_104_);
if (v_isSharedCheck_198_ == 0)
{
v___x_193_ = v___x_104_;
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_104_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_198_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v_a_191_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
else
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
lean_dec(v_a_99_);
lean_dec(v_a_96_);
lean_dec(v_a_93_);
v_a_199_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_101_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_101_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
else
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
lean_dec(v_a_96_);
lean_dec(v_a_93_);
v_a_207_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_98_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_98_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
else
{
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
lean_dec(v_a_93_);
v_a_215_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_95_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_95_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_215_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
else
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_230_; 
v_a_223_ = lean_ctor_get(v___x_92_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_230_ == 0)
{
v___x_225_ = v___x_92_;
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v___x_92_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_228_; 
if (v_isShared_226_ == 0)
{
v___x_228_ = v___x_225_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_a_223_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_mkBackwardRules___boxed(lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_Elab_Tactic_VCGen_mkBackwardRules(v___y_231_, v___y_232_, v___y_233_, v___y_234_);
lean_dec(v___y_234_);
lean_dec_ref(v___y_233_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
return v_res_236_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default___closed__0(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_237_ = lean_unsigned_to_nat(0u);
v___x_238_ = lean_box(0);
v___x_239_ = lean_box(1);
v___x_240_ = l_Lean_Elab_Tactic_VCGen_SpecAttr_instInhabitedSpecTheorems_default;
v___x_241_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v___x_239_);
lean_ctor_set(v___x_241_, 2, v___x_238_);
lean_ctor_set(v___x_241_, 3, v___x_237_);
return v___x_241_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default(void){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = lean_obj_once(&l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default___closed__0, &l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default___closed__0_once, _init_l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default___closed__0);
return v___x_242_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_VCGen_instInhabitedScope(void){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default;
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_registerJP(lean_object* v_s_244_, lean_object* v_fv_245_, lean_object* v_info_246_){
_start:
{
lean_object* v_specs_247_; lean_object* v_jps_248_; lean_object* v_lastLiftedPre_x3f_249_; lean_object* v_nextDeclIdx_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_258_; 
v_specs_247_ = lean_ctor_get(v_s_244_, 0);
v_jps_248_ = lean_ctor_get(v_s_244_, 1);
v_lastLiftedPre_x3f_249_ = lean_ctor_get(v_s_244_, 2);
v_nextDeclIdx_250_ = lean_ctor_get(v_s_244_, 3);
v_isSharedCheck_258_ = !lean_is_exclusive(v_s_244_);
if (v_isSharedCheck_258_ == 0)
{
v___x_252_ = v_s_244_;
v_isShared_253_ = v_isSharedCheck_258_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_nextDeclIdx_250_);
lean_inc(v_lastLiftedPre_x3f_249_);
lean_inc(v_jps_248_);
lean_inc(v_specs_247_);
lean_dec(v_s_244_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_258_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_254_; lean_object* v___x_256_; 
v___x_254_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fv_245_, v_info_246_, v_jps_248_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 1, v___x_254_);
v___x_256_ = v___x_252_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_specs_247_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v___x_254_);
lean_ctor_set(v_reuseFailAlloc_257_, 2, v_lastLiftedPre_x3f_249_);
lean_ctor_set(v_reuseFailAlloc_257_, 3, v_nextDeclIdx_250_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_knownJP_x3f(lean_object* v_s_259_, lean_object* v_fv_260_){
_start:
{
lean_object* v_jps_261_; lean_object* v___x_262_; 
v_jps_261_ = lean_ctor_get(v_s_259_, 1);
v___x_262_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_jps_261_, v_fv_260_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_knownJP_x3f___boxed(lean_object* v_s_263_, lean_object* v_fv_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = l_Lean_Elab_Tactic_VCGen_Scope_knownJP_x3f(v_s_263_, v_fv_264_);
lean_dec(v_fv_264_);
lean_dec_ref(v_s_263_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_insertSpec(lean_object* v_s_266_, lean_object* v_thm_267_){
_start:
{
lean_object* v_specs_268_; lean_object* v_jps_269_; lean_object* v_lastLiftedPre_x3f_270_; lean_object* v_nextDeclIdx_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_279_; 
v_specs_268_ = lean_ctor_get(v_s_266_, 0);
v_jps_269_ = lean_ctor_get(v_s_266_, 1);
v_lastLiftedPre_x3f_270_ = lean_ctor_get(v_s_266_, 2);
v_nextDeclIdx_271_ = lean_ctor_get(v_s_266_, 3);
v_isSharedCheck_279_ = !lean_is_exclusive(v_s_266_);
if (v_isSharedCheck_279_ == 0)
{
v___x_273_ = v_s_266_;
v_isShared_274_ = v_isSharedCheck_279_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_nextDeclIdx_271_);
lean_inc(v_lastLiftedPre_x3f_270_);
lean_inc(v_jps_269_);
lean_inc(v_specs_268_);
lean_dec(v_s_266_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_279_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_275_; lean_object* v___x_277_; 
v___x_275_ = l_Lean_Elab_Tactic_VCGen_SpecAttr_SpecTheorems_insert(v_specs_268_, v_thm_267_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v___x_275_);
v___x_277_ = v___x_273_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_275_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_jps_269_);
lean_ctor_set(v_reuseFailAlloc_278_, 2, v_lastLiftedPre_x3f_270_);
lean_ctor_set(v_reuseFailAlloc_278_, 3, v_nextDeclIdx_271_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg___lam__0(lean_object* v_x_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v___x_293_; 
lean_inc(v___y_287_);
lean_inc_ref(v___y_286_);
lean_inc(v___y_285_);
lean_inc_ref(v___y_284_);
lean_inc(v___y_283_);
lean_inc(v___y_282_);
lean_inc_ref(v___y_281_);
v___x_293_ = lean_apply_12(v_x_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, lean_box(0));
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg___lam__0___boxed(lean_object* v_x_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg___lam__0(v_x_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec(v___y_299_);
lean_dec_ref(v___y_298_);
lean_dec(v___y_297_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg(lean_object* v_mvarId_308_, lean_object* v_x_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_){
_start:
{
lean_object* v___f_322_; lean_object* v___x_323_; 
lean_inc(v___y_316_);
lean_inc_ref(v___y_315_);
lean_inc(v___y_314_);
lean_inc_ref(v___y_313_);
lean_inc(v___y_312_);
lean_inc(v___y_311_);
lean_inc_ref(v___y_310_);
v___f_322_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_322_, 0, v_x_309_);
lean_closure_set(v___f_322_, 1, v___y_310_);
lean_closure_set(v___f_322_, 2, v___y_311_);
lean_closure_set(v___f_322_, 3, v___y_312_);
lean_closure_set(v___f_322_, 4, v___y_313_);
lean_closure_set(v___f_322_, 5, v___y_314_);
lean_closure_set(v___f_322_, 6, v___y_315_);
lean_closure_set(v___f_322_, 7, v___y_316_);
v___x_323_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_308_, v___f_322_, v___y_317_, v___y_318_, v___y_319_, v___y_320_);
if (lean_obj_tag(v___x_323_) == 0)
{
return v___x_323_;
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_323_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_323_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg___boxed(lean_object* v_mvarId_332_, lean_object* v_x_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg(v_mvarId_332_, v_x_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec(v___y_335_);
lean_dec_ref(v___y_334_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1(lean_object* v_00_u03b1_347_, lean_object* v_mvarId_348_, lean_object* v_x_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg(v_mvarId_348_, v_x_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___boxed(lean_object* v_00_u03b1_363_, lean_object* v_mvarId_364_, lean_object* v_x_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1(v_00_u03b1_363_, v_mvarId_364_, v_x_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
lean_dec(v___y_368_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___redArg(lean_object* v_as_379_, size_t v_i_380_, size_t v_stop_381_, lean_object* v_b_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_){
_start:
{
lean_object* v_a_389_; uint8_t v___x_393_; 
v___x_393_ = lean_usize_dec_eq(v_i_380_, v_stop_381_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; 
v___x_394_ = lean_array_uget_borrowed(v_as_379_, v_i_380_);
if (lean_obj_tag(v___x_394_) == 0)
{
v_a_389_ = v_b_382_;
goto v___jp_388_;
}
else
{
lean_object* v_val_395_; uint8_t v___x_396_; 
v_val_395_ = lean_ctor_get(v___x_394_, 0);
v___x_396_ = l_Lean_LocalDecl_isAuxDecl(v_val_395_);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_397_ = l_Lean_LocalDecl_fvarId(v_val_395_);
v___x_398_ = lean_unsigned_to_nat(100u);
v___x_399_ = l_Lean_Elab_Tactic_VCGen_SpecAttr_mkSpecTheoremFromLocal(v___x_397_, v___x_398_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_a_400_);
lean_dec_ref_known(v___x_399_, 1);
if (lean_obj_tag(v_a_400_) == 1)
{
lean_object* v_val_401_; lean_object* v___x_402_; 
v_val_401_ = lean_ctor_get(v_a_400_, 0);
lean_inc(v_val_401_);
lean_dec_ref_known(v_a_400_, 1);
v___x_402_ = l_Lean_Elab_Tactic_VCGen_Scope_insertSpec(v_b_382_, v_val_401_);
v_a_389_ = v___x_402_;
goto v___jp_388_;
}
else
{
lean_dec(v_a_400_);
v_a_389_ = v_b_382_;
goto v___jp_388_;
}
}
else
{
lean_object* v_a_403_; lean_object* v___x_405_; uint8_t v_isShared_406_; uint8_t v_isSharedCheck_414_; 
v_a_403_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_414_ == 0)
{
v___x_405_ = v___x_399_;
v_isShared_406_ = v_isSharedCheck_414_;
goto v_resetjp_404_;
}
else
{
lean_inc(v_a_403_);
lean_dec(v___x_399_);
v___x_405_ = lean_box(0);
v_isShared_406_ = v_isSharedCheck_414_;
goto v_resetjp_404_;
}
v_resetjp_404_:
{
uint8_t v___y_408_; uint8_t v___x_412_; 
v___x_412_ = l_Lean_Exception_isInterrupt(v_a_403_);
if (v___x_412_ == 0)
{
uint8_t v___x_413_; 
lean_inc(v_a_403_);
v___x_413_ = l_Lean_Exception_isRuntime(v_a_403_);
v___y_408_ = v___x_413_;
goto v___jp_407_;
}
else
{
v___y_408_ = v___x_412_;
goto v___jp_407_;
}
v___jp_407_:
{
if (v___y_408_ == 0)
{
lean_del_object(v___x_405_);
lean_dec(v_a_403_);
v_a_389_ = v_b_382_;
goto v___jp_388_;
}
else
{
lean_object* v___x_410_; 
lean_dec_ref(v_b_382_);
if (v_isShared_406_ == 0)
{
v___x_410_ = v___x_405_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_a_403_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
}
}
}
}
else
{
v_a_389_ = v_b_382_;
goto v___jp_388_;
}
}
}
else
{
lean_object* v___x_415_; 
v___x_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_415_, 0, v_b_382_);
return v___x_415_;
}
v___jp_388_:
{
size_t v___x_390_; size_t v___x_391_; 
v___x_390_ = ((size_t)1ULL);
v___x_391_ = lean_usize_add(v_i_380_, v___x_390_);
v_i_380_ = v___x_391_;
v_b_382_ = v_a_389_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_as_416_, lean_object* v_i_417_, lean_object* v_stop_418_, lean_object* v_b_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
size_t v_i_boxed_425_; size_t v_stop_boxed_426_; lean_object* v_res_427_; 
v_i_boxed_425_ = lean_unbox_usize(v_i_417_);
lean_dec(v_i_417_);
v_stop_boxed_426_ = lean_unbox_usize(v_stop_418_);
lean_dec(v_stop_418_);
v_res_427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___redArg(v_as_416_, v_i_boxed_425_, v_stop_boxed_426_, v_b_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec_ref(v_as_416_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__4(lean_object* v_x_428_, lean_object* v_x_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
if (lean_obj_tag(v_x_428_) == 0)
{
lean_object* v_cs_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_455_; 
v_cs_442_ = lean_ctor_get(v_x_428_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_428_);
if (v_isSharedCheck_455_ == 0)
{
v___x_444_ = v_x_428_;
v_isShared_445_ = v_isSharedCheck_455_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_cs_442_);
lean_dec(v_x_428_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_455_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_446_ = lean_unsigned_to_nat(0u);
v___x_447_ = lean_array_get_size(v_cs_442_);
v___x_448_ = lean_nat_dec_lt(v___x_446_, v___x_447_);
if (v___x_448_ == 0)
{
lean_object* v___x_450_; 
lean_dec_ref(v_cs_442_);
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 0, v_x_429_);
v___x_450_ = v___x_444_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_x_429_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
else
{
size_t v___x_452_; size_t v___x_453_; lean_object* v___x_454_; 
lean_del_object(v___x_444_);
v___x_452_ = ((size_t)0ULL);
v___x_453_ = lean_usize_of_nat(v___x_447_);
v___x_454_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2_spec__3(v_cs_442_, v___x_452_, v___x_453_, v_x_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
lean_dec_ref(v_cs_442_);
return v___x_454_;
}
}
}
else
{
lean_object* v_vs_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_469_; 
v_vs_456_ = lean_ctor_get(v_x_428_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v_x_428_);
if (v_isSharedCheck_469_ == 0)
{
v___x_458_ = v_x_428_;
v_isShared_459_ = v_isSharedCheck_469_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_vs_456_);
lean_dec(v_x_428_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_469_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_460_ = lean_unsigned_to_nat(0u);
v___x_461_ = lean_array_get_size(v_vs_456_);
v___x_462_ = lean_nat_dec_lt(v___x_460_, v___x_461_);
if (v___x_462_ == 0)
{
lean_object* v___x_464_; 
lean_dec_ref(v_vs_456_);
if (v_isShared_459_ == 0)
{
lean_ctor_set_tag(v___x_458_, 0);
lean_ctor_set(v___x_458_, 0, v_x_429_);
v___x_464_ = v___x_458_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_x_429_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
else
{
size_t v___x_466_; size_t v___x_467_; lean_object* v___x_468_; 
lean_del_object(v___x_458_);
v___x_466_ = ((size_t)0ULL);
v___x_467_ = lean_usize_of_nat(v___x_461_);
v___x_468_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___redArg(v_vs_456_, v___x_466_, v___x_467_, v_x_429_, v___y_437_, v___y_438_, v___y_439_, v___y_440_);
lean_dec_ref(v_vs_456_);
return v___x_468_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2_spec__3(lean_object* v_as_470_, size_t v_i_471_, size_t v_stop_472_, lean_object* v_b_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_){
_start:
{
uint8_t v___x_486_; 
v___x_486_ = lean_usize_dec_eq(v_i_471_, v_stop_472_);
if (v___x_486_ == 0)
{
lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_487_ = lean_array_uget_borrowed(v_as_470_, v_i_471_);
lean_inc(v___x_487_);
v___x_488_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__4(v___x_487_, v_b_473_, v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v_a_489_; size_t v___x_490_; size_t v___x_491_; 
v_a_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_a_489_);
lean_dec_ref_known(v___x_488_, 1);
v___x_490_ = ((size_t)1ULL);
v___x_491_ = lean_usize_add(v_i_471_, v___x_490_);
v_i_471_ = v___x_491_;
v_b_473_ = v_a_489_;
goto _start;
}
else
{
return v___x_488_;
}
}
else
{
lean_object* v___x_493_; 
v___x_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_493_, 0, v_b_473_);
return v___x_493_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_as_494_, lean_object* v_i_495_, lean_object* v_stop_496_, lean_object* v_b_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
size_t v_i_boxed_510_; size_t v_stop_boxed_511_; lean_object* v_res_512_; 
v_i_boxed_510_ = lean_unbox_usize(v_i_495_);
lean_dec(v_i_495_);
v_stop_boxed_511_ = lean_unbox_usize(v_stop_496_);
lean_dec(v_stop_496_);
v_res_512_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2_spec__3(v_as_494_, v_i_boxed_510_, v_stop_boxed_511_, v_b_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
lean_dec(v___y_506_);
lean_dec_ref(v___y_505_);
lean_dec(v___y_504_);
lean_dec_ref(v___y_503_);
lean_dec(v___y_502_);
lean_dec_ref(v___y_501_);
lean_dec(v___y_500_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec_ref(v_as_494_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__4___boxed(lean_object* v_x_513_, lean_object* v_x_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__4(v_x_513_, v_x_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_);
lean_dec(v___y_525_);
lean_dec_ref(v___y_524_);
lean_dec(v___y_523_);
lean_dec_ref(v___y_522_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v___y_517_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
return v_res_527_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2___closed__0(void){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2(lean_object* v_x_529_, size_t v_x_530_, size_t v_x_531_, lean_object* v_x_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
if (lean_obj_tag(v_x_529_) == 0)
{
lean_object* v_cs_545_; lean_object* v___x_546_; size_t v___x_547_; lean_object* v_j_548_; lean_object* v___x_549_; size_t v___x_550_; size_t v___x_551_; size_t v___x_552_; size_t v___x_553_; size_t v___x_554_; size_t v___x_555_; lean_object* v___x_556_; 
v_cs_545_ = lean_ctor_get(v_x_529_, 0);
lean_inc_ref(v_cs_545_);
lean_dec_ref_known(v_x_529_, 1);
v___x_546_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2___closed__0);
v___x_547_ = lean_usize_shift_right(v_x_530_, v_x_531_);
v_j_548_ = lean_usize_to_nat(v___x_547_);
v___x_549_ = lean_array_get_borrowed(v___x_546_, v_cs_545_, v_j_548_);
v___x_550_ = ((size_t)1ULL);
v___x_551_ = lean_usize_shift_left(v___x_550_, v_x_531_);
v___x_552_ = lean_usize_sub(v___x_551_, v___x_550_);
v___x_553_ = lean_usize_land(v_x_530_, v___x_552_);
v___x_554_ = ((size_t)5ULL);
v___x_555_ = lean_usize_sub(v_x_531_, v___x_554_);
lean_inc(v___x_549_);
v___x_556_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2(v___x_549_, v___x_553_, v___x_555_, v_x_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_a_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; uint8_t v___x_561_; 
v_a_557_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_a_557_);
v___x_558_ = lean_unsigned_to_nat(1u);
v___x_559_ = lean_nat_add(v_j_548_, v___x_558_);
lean_dec(v_j_548_);
v___x_560_ = lean_array_get_size(v_cs_545_);
v___x_561_ = lean_nat_dec_lt(v___x_559_, v___x_560_);
if (v___x_561_ == 0)
{
lean_dec(v___x_559_);
lean_dec(v_a_557_);
lean_dec_ref(v_cs_545_);
return v___x_556_;
}
else
{
size_t v___x_562_; size_t v___x_563_; lean_object* v___x_564_; 
lean_dec_ref_known(v___x_556_, 1);
v___x_562_ = lean_usize_of_nat(v___x_559_);
lean_dec(v___x_559_);
v___x_563_ = lean_usize_of_nat(v___x_560_);
v___x_564_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2_spec__3(v_cs_545_, v___x_562_, v___x_563_, v_a_557_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
lean_dec_ref(v_cs_545_);
return v___x_564_;
}
}
else
{
lean_dec(v_j_548_);
lean_dec_ref(v_cs_545_);
return v___x_556_;
}
}
else
{
lean_object* v_vs_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_578_; 
v_vs_565_ = lean_ctor_get(v_x_529_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v_x_529_);
if (v_isSharedCheck_578_ == 0)
{
v___x_567_ = v_x_529_;
v_isShared_568_ = v_isSharedCheck_578_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_vs_565_);
lean_dec(v_x_529_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_578_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_570_; uint8_t v___x_571_; 
v___x_569_ = lean_usize_to_nat(v_x_530_);
v___x_570_ = lean_array_get_size(v_vs_565_);
v___x_571_ = lean_nat_dec_lt(v___x_569_, v___x_570_);
if (v___x_571_ == 0)
{
lean_object* v___x_573_; 
lean_dec(v___x_569_);
lean_dec_ref(v_vs_565_);
if (v_isShared_568_ == 0)
{
lean_ctor_set_tag(v___x_567_, 0);
lean_ctor_set(v___x_567_, 0, v_x_532_);
v___x_573_ = v___x_567_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_x_532_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
else
{
size_t v___x_575_; size_t v___x_576_; lean_object* v___x_577_; 
lean_del_object(v___x_567_);
v___x_575_ = lean_usize_of_nat(v___x_569_);
lean_dec(v___x_569_);
v___x_576_ = lean_usize_of_nat(v___x_570_);
v___x_577_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___redArg(v_vs_565_, v___x_575_, v___x_576_, v_x_532_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
lean_dec_ref(v_vs_565_);
return v___x_577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2___boxed(lean_object* v_x_579_, lean_object* v_x_580_, lean_object* v_x_581_, lean_object* v_x_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
size_t v_x_23396__boxed_595_; size_t v_x_23397__boxed_596_; lean_object* v_res_597_; 
v_x_23396__boxed_595_ = lean_unbox_usize(v_x_580_);
lean_dec(v_x_580_);
v_x_23397__boxed_596_ = lean_unbox_usize(v_x_581_);
lean_dec(v_x_581_);
v_res_597_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2(v_x_579_, v_x_23396__boxed_595_, v_x_23397__boxed_596_, v_x_582_, v___y_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0(lean_object* v_t_598_, lean_object* v_init_599_, lean_object* v_start_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_613_ = lean_unsigned_to_nat(0u);
v___x_614_ = lean_nat_dec_eq(v_start_600_, v___x_613_);
if (v___x_614_ == 0)
{
lean_object* v_root_615_; lean_object* v_tail_616_; size_t v_shift_617_; lean_object* v_tailOff_618_; uint8_t v___x_619_; 
v_root_615_ = lean_ctor_get(v_t_598_, 0);
lean_inc_ref(v_root_615_);
v_tail_616_ = lean_ctor_get(v_t_598_, 1);
lean_inc_ref(v_tail_616_);
v_shift_617_ = lean_ctor_get_usize(v_t_598_, 4);
v_tailOff_618_ = lean_ctor_get(v_t_598_, 3);
lean_inc(v_tailOff_618_);
lean_dec_ref(v_t_598_);
v___x_619_ = lean_nat_dec_le(v_tailOff_618_, v_start_600_);
if (v___x_619_ == 0)
{
size_t v___x_620_; lean_object* v___x_621_; 
lean_dec(v_tailOff_618_);
v___x_620_ = lean_usize_of_nat(v_start_600_);
v___x_621_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__2(v_root_615_, v___x_620_, v_shift_617_, v_init_599_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v_a_622_; lean_object* v___x_623_; uint8_t v___x_624_; 
v_a_622_ = lean_ctor_get(v___x_621_, 0);
lean_inc(v_a_622_);
v___x_623_ = lean_array_get_size(v_tail_616_);
v___x_624_ = lean_nat_dec_lt(v___x_613_, v___x_623_);
if (v___x_624_ == 0)
{
lean_dec(v_a_622_);
lean_dec_ref(v_tail_616_);
return v___x_621_;
}
else
{
size_t v___x_625_; size_t v___x_626_; lean_object* v___x_627_; 
lean_dec_ref_known(v___x_621_, 1);
v___x_625_ = ((size_t)0ULL);
v___x_626_ = lean_usize_of_nat(v___x_623_);
v___x_627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___redArg(v_tail_616_, v___x_625_, v___x_626_, v_a_622_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
lean_dec_ref(v_tail_616_);
return v___x_627_;
}
}
else
{
lean_dec_ref(v_tail_616_);
return v___x_621_;
}
}
else
{
lean_object* v___x_628_; lean_object* v___x_629_; uint8_t v___x_630_; 
lean_dec_ref(v_root_615_);
v___x_628_ = lean_nat_sub(v_start_600_, v_tailOff_618_);
lean_dec(v_tailOff_618_);
v___x_629_ = lean_array_get_size(v_tail_616_);
v___x_630_ = lean_nat_dec_lt(v___x_628_, v___x_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; 
lean_dec(v___x_628_);
lean_dec_ref(v_tail_616_);
v___x_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_631_, 0, v_init_599_);
return v___x_631_;
}
else
{
size_t v___x_632_; size_t v___x_633_; lean_object* v___x_634_; 
v___x_632_ = lean_usize_of_nat(v___x_628_);
lean_dec(v___x_628_);
v___x_633_ = lean_usize_of_nat(v___x_629_);
v___x_634_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___redArg(v_tail_616_, v___x_632_, v___x_633_, v_init_599_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
lean_dec_ref(v_tail_616_);
return v___x_634_;
}
}
}
else
{
lean_object* v_root_635_; lean_object* v_tail_636_; lean_object* v___x_637_; 
v_root_635_ = lean_ctor_get(v_t_598_, 0);
lean_inc_ref(v_root_635_);
v_tail_636_ = lean_ctor_get(v_t_598_, 1);
lean_inc_ref(v_tail_636_);
lean_dec_ref(v_t_598_);
v___x_637_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__4(v_root_635_, v_init_599_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_639_; uint8_t v___x_640_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
lean_inc(v_a_638_);
v___x_639_ = lean_array_get_size(v_tail_636_);
v___x_640_ = lean_nat_dec_lt(v___x_613_, v___x_639_);
if (v___x_640_ == 0)
{
lean_dec(v_a_638_);
lean_dec_ref(v_tail_636_);
return v___x_637_;
}
else
{
size_t v___x_641_; size_t v___x_642_; lean_object* v___x_643_; 
lean_dec_ref_known(v___x_637_, 1);
v___x_641_ = ((size_t)0ULL);
v___x_642_ = lean_usize_of_nat(v___x_639_);
v___x_643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___redArg(v_tail_636_, v___x_641_, v___x_642_, v_a_638_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
lean_dec_ref(v_tail_636_);
return v___x_643_;
}
}
else
{
lean_dec_ref(v_tail_636_);
return v___x_637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0___boxed(lean_object* v_t_644_, lean_object* v_init_645_, lean_object* v_start_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0(v_t_644_, v_init_645_, v_start_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
lean_dec(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec(v_start_646_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0(lean_object* v_lctx_660_, lean_object* v_init_661_, lean_object* v_start_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
lean_object* v_decls_675_; lean_object* v___x_676_; 
v_decls_675_ = lean_ctor_get(v_lctx_660_, 1);
lean_inc_ref(v_decls_675_);
lean_dec_ref(v_lctx_660_);
v___x_676_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0(v_decls_675_, v_init_661_, v_start_662_, v___y_663_, v___y_664_, v___y_665_, v___y_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0___boxed(lean_object* v_lctx_677_, lean_object* v_init_678_, lean_object* v_start_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0(v_lctx_677_, v_init_678_, v_start_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_);
lean_dec(v___y_690_);
lean_dec_ref(v___y_689_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
lean_dec(v_start_679_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs___lam__0(lean_object* v_scope_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_){
_start:
{
lean_object* v_lctx_706_; lean_object* v_decls_707_; lean_object* v_nextDeclIdx_708_; lean_object* v_size_709_; uint8_t v___x_710_; 
v_lctx_706_ = lean_ctor_get(v___y_701_, 2);
v_decls_707_ = lean_ctor_get(v_lctx_706_, 1);
v_nextDeclIdx_708_ = lean_ctor_get(v_scope_693_, 3);
v_size_709_ = lean_ctor_get(v_decls_707_, 2);
v___x_710_ = lean_nat_dec_eq(v_nextDeclIdx_708_, v_size_709_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; 
lean_inc(v_nextDeclIdx_708_);
lean_inc_ref(v_lctx_706_);
v___x_711_ = l_Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0(v_lctx_706_, v_scope_693_, v_nextDeclIdx_708_, v___y_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_);
lean_dec(v_nextDeclIdx_708_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_730_; 
v_a_712_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_730_ == 0)
{
v___x_714_ = v___x_711_;
v_isShared_715_ = v_isSharedCheck_730_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_711_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_730_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v_specs_716_; lean_object* v_jps_717_; lean_object* v_lastLiftedPre_x3f_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_728_; 
v_specs_716_ = lean_ctor_get(v_a_712_, 0);
v_jps_717_ = lean_ctor_get(v_a_712_, 1);
v_lastLiftedPre_x3f_718_ = lean_ctor_get(v_a_712_, 2);
v_isSharedCheck_728_ = !lean_is_exclusive(v_a_712_);
if (v_isSharedCheck_728_ == 0)
{
lean_object* v_unused_729_; 
v_unused_729_ = lean_ctor_get(v_a_712_, 3);
lean_dec(v_unused_729_);
v___x_720_ = v_a_712_;
v_isShared_721_ = v_isSharedCheck_728_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_lastLiftedPre_x3f_718_);
lean_inc(v_jps_717_);
lean_inc(v_specs_716_);
lean_dec(v_a_712_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_728_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_723_; 
lean_inc(v_size_709_);
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 3, v_size_709_);
v___x_723_ = v___x_720_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_specs_716_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_jps_717_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v_lastLiftedPre_x3f_718_);
lean_ctor_set(v_reuseFailAlloc_727_, 3, v_size_709_);
v___x_723_ = v_reuseFailAlloc_727_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
lean_object* v___x_725_; 
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v___x_723_);
v___x_725_ = v___x_714_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_723_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
}
else
{
return v___x_711_;
}
}
else
{
lean_object* v___x_731_; 
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v_scope_693_);
return v___x_731_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs___lam__0___boxed(lean_object* v_scope_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs___lam__0(v_scope_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec(v___y_735_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs(lean_object* v_scope_746_, lean_object* v_goal_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
lean_object* v___f_760_; lean_object* v___x_761_; 
v___f_760_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs___lam__0___boxed), 13, 1);
lean_closure_set(v___f_760_, 0, v_scope_746_);
v___x_761_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__1___redArg(v_goal_747_, v___f_760_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs___boxed(lean_object* v_scope_762_, lean_object* v_goal_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs(v_scope_762_, v_goal_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec(v___y_772_);
lean_dec_ref(v___y_771_);
lean_dec(v___y_770_);
lean_dec_ref(v___y_769_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3(lean_object* v_as_777_, size_t v_i_778_, size_t v_stop_779_, lean_object* v_b_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___redArg(v_as_777_, v_i_778_, v_stop_779_, v_b_780_, v___y_788_, v___y_789_, v___y_790_, v___y_791_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3___boxed(lean_object* v_as_794_, lean_object* v_i_795_, lean_object* v_stop_796_, lean_object* v_b_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
size_t v_i_boxed_810_; size_t v_stop_boxed_811_; lean_object* v_res_812_; 
v_i_boxed_810_ = lean_unbox_usize(v_i_795_);
lean_dec(v_i_795_);
v_stop_boxed_811_ = lean_unbox_usize(v_stop_796_);
lean_dec(v_stop_796_);
v_res_812_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_Elab_Tactic_VCGen_Scope_collectLocalSpecs_spec__0_spec__0_spec__3(v_as_794_, v_i_boxed_810_, v_stop_boxed_811_, v_b_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec_ref(v_as_794_);
return v_res_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_outOfFuel___redArg(lean_object* v___y_813_){
_start:
{
lean_object* v___x_815_; lean_object* v_fuel_820_; 
v___x_815_ = lean_st_ref_get(v___y_813_);
v_fuel_820_ = lean_ctor_get(v___x_815_, 8);
lean_inc(v_fuel_820_);
lean_dec(v___x_815_);
if (lean_obj_tag(v_fuel_820_) == 0)
{
lean_object* v_n_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_831_; 
v_n_821_ = lean_ctor_get(v_fuel_820_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v_fuel_820_);
if (v_isSharedCheck_831_ == 0)
{
v___x_823_ = v_fuel_820_;
v_isShared_824_ = v_isSharedCheck_831_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_n_821_);
lean_dec(v_fuel_820_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_831_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_825_; uint8_t v___x_826_; 
v___x_825_ = lean_unsigned_to_nat(0u);
v___x_826_ = lean_nat_dec_eq(v_n_821_, v___x_825_);
lean_dec(v_n_821_);
if (v___x_826_ == 0)
{
lean_del_object(v___x_823_);
goto v___jp_816_;
}
else
{
lean_object* v___x_827_; lean_object* v___x_829_; 
v___x_827_ = lean_box(v___x_826_);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 0, v___x_827_);
v___x_829_ = v___x_823_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v___x_827_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
else
{
lean_dec(v_fuel_820_);
goto v___jp_816_;
}
v___jp_816_:
{
uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_817_ = 0;
v___x_818_ = lean_box(v___x_817_);
v___x_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_819_, 0, v___x_818_);
return v___x_819_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_outOfFuel___redArg___boxed(lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lean_Elab_Tactic_VCGen_outOfFuel___redArg(v___y_832_);
lean_dec(v___y_832_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_outOfFuel(lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l_Lean_Elab_Tactic_VCGen_outOfFuel___redArg(v___y_836_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_outOfFuel___boxed(lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Lean_Elab_Tactic_VCGen_outOfFuel(v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec(v___y_856_);
lean_dec_ref(v___y_855_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec(v___y_850_);
lean_dec(v___y_849_);
lean_dec_ref(v___y_848_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_burnOne___redArg(lean_object* v___y_861_){
_start:
{
lean_object* v___x_863_; lean_object* v_specBackwardRuleCache_864_; lean_object* v_splitBackwardRuleCache_865_; lean_object* v_latticeBackwardRuleCache_866_; lean_object* v_frameBackwardRuleCache_867_; lean_object* v_frameDB_868_; lean_object* v_invariants_869_; lean_object* v_vcs_870_; lean_object* v_simpState_871_; lean_object* v_fuel_872_; lean_object* v_inlineHandledInvariants_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_898_; 
v___x_863_ = lean_st_ref_take(v___y_861_);
v_specBackwardRuleCache_864_ = lean_ctor_get(v___x_863_, 0);
v_splitBackwardRuleCache_865_ = lean_ctor_get(v___x_863_, 1);
v_latticeBackwardRuleCache_866_ = lean_ctor_get(v___x_863_, 2);
v_frameBackwardRuleCache_867_ = lean_ctor_get(v___x_863_, 3);
v_frameDB_868_ = lean_ctor_get(v___x_863_, 4);
v_invariants_869_ = lean_ctor_get(v___x_863_, 5);
v_vcs_870_ = lean_ctor_get(v___x_863_, 6);
v_simpState_871_ = lean_ctor_get(v___x_863_, 7);
v_fuel_872_ = lean_ctor_get(v___x_863_, 8);
v_inlineHandledInvariants_873_ = lean_ctor_get(v___x_863_, 9);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_898_ == 0)
{
v___x_875_ = v___x_863_;
v_isShared_876_ = v_isSharedCheck_898_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_inlineHandledInvariants_873_);
lean_inc(v_fuel_872_);
lean_inc(v_simpState_871_);
lean_inc(v_vcs_870_);
lean_inc(v_invariants_869_);
lean_inc(v_frameDB_868_);
lean_inc(v_frameBackwardRuleCache_867_);
lean_inc(v_latticeBackwardRuleCache_866_);
lean_inc(v_splitBackwardRuleCache_865_);
lean_inc(v_specBackwardRuleCache_864_);
lean_dec(v___x_863_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_898_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_877_; lean_object* v___y_879_; 
v___x_877_ = lean_box(0);
if (lean_obj_tag(v_fuel_872_) == 0)
{
lean_object* v_n_885_; lean_object* v_zero_886_; uint8_t v_isZero_887_; 
v_n_885_ = lean_ctor_get(v_fuel_872_, 0);
v_zero_886_ = lean_unsigned_to_nat(0u);
v_isZero_887_ = lean_nat_dec_eq(v_n_885_, v_zero_886_);
if (v_isZero_887_ == 0)
{
lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_896_; 
lean_inc(v_n_885_);
v_isSharedCheck_896_ = !lean_is_exclusive(v_fuel_872_);
if (v_isSharedCheck_896_ == 0)
{
lean_object* v_unused_897_; 
v_unused_897_ = lean_ctor_get(v_fuel_872_, 0);
lean_dec(v_unused_897_);
v___x_889_ = v_fuel_872_;
v_isShared_890_ = v_isSharedCheck_896_;
goto v_resetjp_888_;
}
else
{
lean_dec(v_fuel_872_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_896_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v_one_891_; lean_object* v_n_892_; lean_object* v___x_894_; 
v_one_891_ = lean_unsigned_to_nat(1u);
v_n_892_ = lean_nat_sub(v_n_885_, v_one_891_);
lean_dec(v_n_885_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v_n_892_);
v___x_894_ = v___x_889_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_n_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
v___y_879_ = v___x_894_;
goto v___jp_878_;
}
}
}
else
{
v___y_879_ = v_fuel_872_;
goto v___jp_878_;
}
}
else
{
v___y_879_ = v_fuel_872_;
goto v___jp_878_;
}
v___jp_878_:
{
lean_object* v___x_881_; 
if (v_isShared_876_ == 0)
{
lean_ctor_set(v___x_875_, 8, v___y_879_);
v___x_881_ = v___x_875_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_specBackwardRuleCache_864_);
lean_ctor_set(v_reuseFailAlloc_884_, 1, v_splitBackwardRuleCache_865_);
lean_ctor_set(v_reuseFailAlloc_884_, 2, v_latticeBackwardRuleCache_866_);
lean_ctor_set(v_reuseFailAlloc_884_, 3, v_frameBackwardRuleCache_867_);
lean_ctor_set(v_reuseFailAlloc_884_, 4, v_frameDB_868_);
lean_ctor_set(v_reuseFailAlloc_884_, 5, v_invariants_869_);
lean_ctor_set(v_reuseFailAlloc_884_, 6, v_vcs_870_);
lean_ctor_set(v_reuseFailAlloc_884_, 7, v_simpState_871_);
lean_ctor_set(v_reuseFailAlloc_884_, 8, v___y_879_);
lean_ctor_set(v_reuseFailAlloc_884_, 9, v_inlineHandledInvariants_873_);
v___x_881_ = v_reuseFailAlloc_884_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_st_ref_put(v___y_861_, v___x_881_);
v___x_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_883_, 0, v___x_877_);
return v___x_883_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_burnOne___redArg___boxed(lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lean_Elab_Tactic_VCGen_burnOne___redArg(v___y_899_);
lean_dec(v___y_899_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_burnOne(lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_Lean_Elab_Tactic_VCGen_burnOne___redArg(v___y_903_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_VCGen_burnOne___boxed(lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lean_Elab_Tactic_VCGen_burnOne(v___y_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
return v_res_927_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_SpecDB(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_FrameProc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Apply(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_DiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_VCGen_Context(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_SpecDB(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_FrameProc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default = _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default();
lean_mark_persistent(l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry_default);
l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry = _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry();
lean_mark_persistent(l_Lean_Elab_Tactic_VCGen_instInhabitedFrameEntry);
l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB = _init_l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB();
lean_mark_persistent(l_Lean_Elab_Tactic_VCGen_instInhabitedFrameDB);
l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default = _init_l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default();
lean_mark_persistent(l_Lean_Elab_Tactic_VCGen_instInhabitedScope_default);
l_Lean_Elab_Tactic_VCGen_instInhabitedScope = _init_l_Lean_Elab_Tactic_VCGen_instInhabitedScope();
lean_mark_persistent(l_Lean_Elab_Tactic_VCGen_instInhabitedScope);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_VCGen_Context(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_SpecDB(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_VCGen_FrameProc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Apply(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_DiscrTree(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_VCGen_Context(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_VCGen_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_SpecDB(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_VCGen_FrameProc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_VCGen_Context(builtin);
}
#ifdef __cplusplus
}
#endif
