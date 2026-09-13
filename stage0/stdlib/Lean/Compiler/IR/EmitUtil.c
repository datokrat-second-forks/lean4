// Lean compiler output
// Module: Lean.Compiler.IR.EmitUtil
// Imports: public import Lean.Compiler.InitAttr public import Lean.Compiler.IR.CompilerM
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
uint8_t l_Lean_IR_instBEqVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_IR_instHashableVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instHashableJoinPointId_hash___boxed(lean_object*);
uint64_t l_Lean_IR_instHashableJoinPointId_hash(lean_object*);
uint8_t l_Lean_IR_instBEqJoinPointId_beq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_instBEqIRPhases_beq(uint8_t, uint8_t);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_IR_Alt_body(lean_object*);
uint8_t l_Lean_IR_FnBody_isTerminal(lean_object*);
lean_object* l_Lean_IR_FnBody_body(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_get_init_fn_name_for(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_containsThenInsert(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_name(lean_object*);
lean_object* l_Lean_IR_instBEqJoinPointId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_instBEqVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_IR_instHashableVarId_hash___boxed(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_isTailCallTo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_isTailCallTo___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_usesModuleFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_usesModuleFrom___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDecl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDeclLoop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDeclLoop___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_IR_collectUsedDecls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_IR_collectUsedDecls___closed__0 = (const lean_object*)&l_Lean_IR_collectUsedDecls___closed__0_value;
static lean_once_cell_t l_Lean_IR_collectUsedDecls___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_collectUsedDecls___closed__1;
LEAN_EXPORT lean_object* l_Lean_IR_collectUsedDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_collectUsedDecls___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_CollectMaps_collectVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instBEqVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_CollectMaps_collectVar___closed__0 = (const lean_object*)&l_Lean_IR_CollectMaps_collectVar___closed__0_value;
static const lean_closure_object l_Lean_IR_CollectMaps_collectVar___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instHashableVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_CollectMaps_collectVar___closed__1 = (const lean_object*)&l_Lean_IR_CollectMaps_collectVar___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectVar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectParams(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectParams___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_IR_CollectMaps_collectJP___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instBEqJoinPointId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_CollectMaps_collectJP___closed__0 = (const lean_object*)&l_Lean_IR_CollectMaps_collectJP___closed__0_value;
static const lean_closure_object l_Lean_IR_CollectMaps_collectJP___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_IR_instHashableJoinPointId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_IR_CollectMaps_collectJP___closed__1 = (const lean_object*)&l_Lean_IR_CollectMaps_collectJP___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectJP(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectFnBody(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectDecl(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_IR_mkVarJPMaps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_mkVarJPMaps___closed__0;
static lean_once_cell_t l_Lean_IR_mkVarJPMaps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_mkVarJPMaps___closed__1;
static lean_once_cell_t l_Lean_IR_mkVarJPMaps___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_IR_mkVarJPMaps___closed__2;
LEAN_EXPORT lean_object* l_Lean_IR_mkVarJPMaps(lean_object*);
LEAN_EXPORT uint8_t l_Lean_IR_isTailCallTo(lean_object* v_g_1_, lean_object* v_b_2_){
_start:
{
if (lean_obj_tag(v_b_2_) == 0)
{
lean_object* v_e_3_; 
v_e_3_ = lean_ctor_get(v_b_2_, 2);
if (lean_obj_tag(v_e_3_) == 6)
{
lean_object* v_b_4_; 
v_b_4_ = lean_ctor_get(v_b_2_, 3);
if (lean_obj_tag(v_b_4_) == 10)
{
lean_object* v_x_5_; 
v_x_5_ = lean_ctor_get(v_b_4_, 0);
if (lean_obj_tag(v_x_5_) == 0)
{
lean_object* v_x_6_; lean_object* v_c_7_; lean_object* v_id_8_; uint8_t v___x_9_; 
v_x_6_ = lean_ctor_get(v_b_2_, 0);
v_c_7_ = lean_ctor_get(v_e_3_, 0);
v_id_8_ = lean_ctor_get(v_x_5_, 0);
v___x_9_ = l_Lean_IR_instBEqVarId_beq(v_x_6_, v_id_8_);
if (v___x_9_ == 0)
{
return v___x_9_;
}
else
{
uint8_t v___x_10_; 
v___x_10_ = lean_name_eq(v_c_7_, v_g_1_);
return v___x_10_;
}
}
else
{
uint8_t v___x_11_; 
v___x_11_ = 0;
return v___x_11_;
}
}
else
{
uint8_t v___x_12_; 
v___x_12_ = 0;
return v___x_12_;
}
}
else
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
}
else
{
uint8_t v___x_14_; 
v___x_14_ = 0;
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_isTailCallTo___boxed(lean_object* v_g_15_, lean_object* v_b_16_){
_start:
{
uint8_t v_res_17_; lean_object* v_r_18_; 
v_res_17_ = l_Lean_IR_isTailCallTo(v_g_15_, v_b_16_);
lean_dec(v_b_16_);
lean_dec(v_g_15_);
v_r_18_ = lean_box(v_res_17_);
return v_r_18_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0(lean_object* v_modulePrefix_19_, lean_object* v_as_20_, size_t v_i_21_, size_t v_stop_22_){
_start:
{
uint8_t v___x_27_; 
v___x_27_ = lean_usize_dec_eq(v_i_21_, v_stop_22_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; lean_object* v_toImport_29_; uint8_t v_irPhases_30_; uint8_t v___x_31_; uint8_t v___x_32_; 
v___x_28_ = lean_array_uget_borrowed(v_as_20_, v_i_21_);
v_toImport_29_ = lean_ctor_get(v___x_28_, 0);
v_irPhases_30_ = lean_ctor_get_uint8(v___x_28_, sizeof(void*)*1);
v___x_31_ = 1;
v___x_32_ = l_Lean_instBEqIRPhases_beq(v_irPhases_30_, v___x_31_);
if (v___x_32_ == 0)
{
lean_object* v_module_33_; uint8_t v___x_34_; 
v_module_33_ = lean_ctor_get(v_toImport_29_, 0);
v___x_34_ = l_Lean_Name_isPrefixOf(v_modulePrefix_19_, v_module_33_);
if (v___x_34_ == 0)
{
goto v___jp_23_;
}
else
{
return v___x_34_;
}
}
else
{
goto v___jp_23_;
}
}
else
{
uint8_t v___x_35_; 
v___x_35_ = 0;
return v___x_35_;
}
v___jp_23_:
{
size_t v___x_24_; size_t v___x_25_; 
v___x_24_ = ((size_t)1ULL);
v___x_25_ = lean_usize_add(v_i_21_, v___x_24_);
v_i_21_ = v___x_25_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0___boxed(lean_object* v_modulePrefix_36_, lean_object* v_as_37_, lean_object* v_i_38_, lean_object* v_stop_39_){
_start:
{
size_t v_i_boxed_40_; size_t v_stop_boxed_41_; uint8_t v_res_42_; lean_object* v_r_43_; 
v_i_boxed_40_ = lean_unbox_usize(v_i_38_);
lean_dec(v_i_38_);
v_stop_boxed_41_ = lean_unbox_usize(v_stop_39_);
lean_dec(v_stop_39_);
v_res_42_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0(v_modulePrefix_36_, v_as_37_, v_i_boxed_40_, v_stop_boxed_41_);
lean_dec_ref(v_as_37_);
lean_dec(v_modulePrefix_36_);
v_r_43_ = lean_box(v_res_42_);
return v_r_43_;
}
}
LEAN_EXPORT uint8_t l_Lean_IR_usesModuleFrom(lean_object* v_env_44_, lean_object* v_modulePrefix_45_){
_start:
{
lean_object* v___x_46_; lean_object* v_modules_47_; lean_object* v___x_48_; lean_object* v___x_49_; uint8_t v___x_50_; 
v___x_46_ = l_Lean_Environment_header(v_env_44_);
v_modules_47_ = lean_ctor_get(v___x_46_, 3);
lean_inc_ref(v_modules_47_);
lean_dec_ref(v___x_46_);
v___x_48_ = lean_unsigned_to_nat(0u);
v___x_49_ = lean_array_get_size(v_modules_47_);
v___x_50_ = lean_nat_dec_lt(v___x_48_, v___x_49_);
if (v___x_50_ == 0)
{
lean_dec_ref(v_modules_47_);
return v___x_50_;
}
else
{
if (v___x_50_ == 0)
{
lean_dec_ref(v_modules_47_);
return v___x_50_;
}
else
{
size_t v___x_51_; size_t v___x_52_; uint8_t v___x_53_; 
v___x_51_ = ((size_t)0ULL);
v___x_52_ = lean_usize_of_nat(v___x_49_);
v___x_53_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_IR_usesModuleFrom_spec__0(v_modulePrefix_45_, v_modules_47_, v___x_51_, v___x_52_);
lean_dec_ref(v_modules_47_);
return v___x_53_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_usesModuleFrom___boxed(lean_object* v_env_54_, lean_object* v_modulePrefix_55_){
_start:
{
uint8_t v_res_56_; lean_object* v_r_57_; 
v_res_56_ = l_Lean_IR_usesModuleFrom(v_env_54_, v_modulePrefix_55_);
lean_dec(v_modulePrefix_55_);
lean_dec_ref(v_env_54_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect___redArg(lean_object* v_f_58_, lean_object* v_s_59_){
_start:
{
lean_object* v_set_60_; lean_object* v_order_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_87_; 
v_set_60_ = lean_ctor_get(v_s_59_, 0);
v_order_61_ = lean_ctor_get(v_s_59_, 1);
v_isSharedCheck_87_ = !lean_is_exclusive(v_s_59_);
if (v_isSharedCheck_87_ == 0)
{
v___x_63_ = v_s_59_;
v_isShared_64_ = v_isSharedCheck_87_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_order_61_);
lean_inc(v_set_60_);
lean_dec(v_s_59_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_87_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v___x_65_; lean_object* v_fst_66_; lean_object* v_snd_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_86_; 
lean_inc(v_f_58_);
v___x_65_ = l_Lean_NameSet_containsThenInsert(v_set_60_, v_f_58_);
v_fst_66_ = lean_ctor_get(v___x_65_, 0);
v_snd_67_ = lean_ctor_get(v___x_65_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_86_ == 0)
{
v___x_69_ = v___x_65_;
v_isShared_70_ = v_isSharedCheck_86_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_snd_67_);
lean_inc(v_fst_66_);
lean_dec(v___x_65_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_86_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_71_ = lean_box(0);
v___x_72_ = lean_unbox(v_fst_66_);
lean_dec(v_fst_66_);
if (v___x_72_ == 0)
{
lean_object* v___x_73_; lean_object* v___x_75_; 
v___x_73_ = lean_array_push(v_order_61_, v_f_58_);
if (v_isShared_64_ == 0)
{
lean_ctor_set(v___x_63_, 1, v___x_73_);
lean_ctor_set(v___x_63_, 0, v_snd_67_);
v___x_75_ = v___x_63_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v_snd_67_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v___x_73_);
v___x_75_ = v_reuseFailAlloc_79_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
lean_object* v___x_77_; 
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 1, v___x_75_);
lean_ctor_set(v___x_69_, 0, v___x_71_);
v___x_77_ = v___x_69_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_71_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v___x_75_);
v___x_77_ = v_reuseFailAlloc_78_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
return v___x_77_;
}
}
}
else
{
lean_object* v___x_81_; 
lean_dec(v_f_58_);
if (v_isShared_64_ == 0)
{
lean_ctor_set(v___x_63_, 0, v_snd_67_);
v___x_81_ = v___x_63_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_snd_67_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v_order_61_);
v___x_81_ = v_reuseFailAlloc_85_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_83_; 
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 1, v___x_81_);
lean_ctor_set(v___x_69_, 0, v___x_71_);
v___x_83_ = v___x_69_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v___x_71_);
lean_ctor_set(v_reuseFailAlloc_84_, 1, v___x_81_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect(lean_object* v_f_88_, lean_object* v_a_89_, lean_object* v_s_90_){
_start:
{
lean_object* v_set_91_; lean_object* v_order_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_118_; 
v_set_91_ = lean_ctor_get(v_s_90_, 0);
v_order_92_ = lean_ctor_get(v_s_90_, 1);
v_isSharedCheck_118_ = !lean_is_exclusive(v_s_90_);
if (v_isSharedCheck_118_ == 0)
{
v___x_94_ = v_s_90_;
v_isShared_95_ = v_isSharedCheck_118_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_order_92_);
lean_inc(v_set_91_);
lean_dec(v_s_90_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_118_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_96_; lean_object* v_fst_97_; lean_object* v_snd_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_117_; 
lean_inc(v_f_88_);
v___x_96_ = l_Lean_NameSet_containsThenInsert(v_set_91_, v_f_88_);
v_fst_97_ = lean_ctor_get(v___x_96_, 0);
v_snd_98_ = lean_ctor_get(v___x_96_, 1);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_117_ == 0)
{
v___x_100_ = v___x_96_;
v_isShared_101_ = v_isSharedCheck_117_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_snd_98_);
lean_inc(v_fst_97_);
lean_dec(v___x_96_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_117_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_102_ = lean_box(0);
v___x_103_ = lean_unbox(v_fst_97_);
lean_dec(v_fst_97_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_104_ = lean_array_push(v_order_92_, v_f_88_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 1, v___x_104_);
lean_ctor_set(v___x_94_, 0, v_snd_98_);
v___x_106_ = v___x_94_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_snd_98_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v___x_104_);
v___x_106_ = v_reuseFailAlloc_110_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_108_; 
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 1, v___x_106_);
lean_ctor_set(v___x_100_, 0, v___x_102_);
v___x_108_ = v___x_100_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_102_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v___x_106_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
else
{
lean_object* v___x_112_; 
lean_dec(v_f_88_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v_snd_98_);
v___x_112_ = v___x_94_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_snd_98_);
lean_ctor_set(v_reuseFailAlloc_116_, 1, v_order_92_);
v___x_112_ = v_reuseFailAlloc_116_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
lean_object* v___x_114_; 
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 1, v___x_112_);
lean_ctor_set(v___x_100_, 0, v___x_102_);
v___x_114_ = v___x_100_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_102_);
lean_ctor_set(v_reuseFailAlloc_115_, 1, v___x_112_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collect___boxed(lean_object* v_f_119_, lean_object* v_a_120_, lean_object* v_s_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_IR_CollectUsedDecls_collect(v_f_119_, v_a_120_, v_s_121_);
lean_dec_ref(v_a_120_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody(lean_object* v_x_123_, lean_object* v_a_124_, lean_object* v_s_125_){
_start:
{
switch(lean_obj_tag(v_x_123_))
{
case 0:
{
lean_object* v_e_126_; lean_object* v_b_127_; lean_object* v_f_129_; lean_object* v___y_130_; lean_object* v___y_131_; 
v_e_126_ = lean_ctor_get(v_x_123_, 2);
lean_inc_ref(v_e_126_);
v_b_127_ = lean_ctor_get(v_x_123_, 3);
lean_inc(v_b_127_);
lean_dec_ref_known(v_x_123_, 4);
switch(lean_obj_tag(v_e_126_))
{
case 6:
{
lean_object* v_c_152_; 
v_c_152_ = lean_ctor_get(v_e_126_, 0);
lean_inc(v_c_152_);
lean_dec_ref_known(v_e_126_, 2);
v_f_129_ = v_c_152_;
v___y_130_ = v_a_124_;
v___y_131_ = v_s_125_;
goto v___jp_128_;
}
case 7:
{
lean_object* v_c_153_; 
v_c_153_ = lean_ctor_get(v_e_126_, 0);
lean_inc(v_c_153_);
lean_dec_ref_known(v_e_126_, 2);
v_f_129_ = v_c_153_;
v___y_130_ = v_a_124_;
v___y_131_ = v_s_125_;
goto v___jp_128_;
}
default: 
{
lean_dec_ref(v_e_126_);
v_x_123_ = v_b_127_;
goto _start;
}
}
v___jp_128_:
{
lean_object* v_set_132_; lean_object* v_order_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_151_; 
v_set_132_ = lean_ctor_get(v___y_131_, 0);
v_order_133_ = lean_ctor_get(v___y_131_, 1);
v_isSharedCheck_151_ = !lean_is_exclusive(v___y_131_);
if (v_isSharedCheck_151_ == 0)
{
v___x_135_ = v___y_131_;
v_isShared_136_ = v_isSharedCheck_151_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_order_133_);
lean_inc(v_set_132_);
lean_dec(v___y_131_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_151_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v_fst_138_; uint8_t v___x_139_; 
lean_inc(v_f_129_);
v___x_137_ = l_Lean_NameSet_containsThenInsert(v_set_132_, v_f_129_);
v_fst_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_fst_138_);
v___x_139_ = lean_unbox(v_fst_138_);
lean_dec(v_fst_138_);
if (v___x_139_ == 0)
{
lean_object* v_snd_140_; lean_object* v___x_141_; lean_object* v___x_143_; 
v_snd_140_ = lean_ctor_get(v___x_137_, 1);
lean_inc(v_snd_140_);
lean_dec_ref(v___x_137_);
v___x_141_ = lean_array_push(v_order_133_, v_f_129_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 1, v___x_141_);
lean_ctor_set(v___x_135_, 0, v_snd_140_);
v___x_143_ = v___x_135_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_snd_140_);
lean_ctor_set(v_reuseFailAlloc_145_, 1, v___x_141_);
v___x_143_ = v_reuseFailAlloc_145_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
v_x_123_ = v_b_127_;
v_a_124_ = v___y_130_;
v_s_125_ = v___x_143_;
goto _start;
}
}
else
{
lean_object* v_snd_146_; lean_object* v___x_148_; 
lean_dec(v_f_129_);
v_snd_146_ = lean_ctor_get(v___x_137_, 1);
lean_inc(v_snd_146_);
lean_dec_ref(v___x_137_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v_snd_146_);
v___x_148_ = v___x_135_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_snd_146_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v_order_133_);
v___x_148_ = v_reuseFailAlloc_150_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
v_x_123_ = v_b_127_;
v_a_124_ = v___y_130_;
v_s_125_ = v___x_148_;
goto _start;
}
}
}
}
}
case 1:
{
lean_object* v_v_155_; lean_object* v_b_156_; lean_object* v___x_157_; lean_object* v_snd_158_; 
v_v_155_ = lean_ctor_get(v_x_123_, 2);
lean_inc(v_v_155_);
v_b_156_ = lean_ctor_get(v_x_123_, 3);
lean_inc(v_b_156_);
lean_dec_ref_known(v_x_123_, 4);
v___x_157_ = l_Lean_IR_CollectUsedDecls_collectFnBody(v_v_155_, v_a_124_, v_s_125_);
v_snd_158_ = lean_ctor_get(v___x_157_, 1);
lean_inc(v_snd_158_);
lean_dec_ref(v___x_157_);
v_x_123_ = v_b_156_;
v_s_125_ = v_snd_158_;
goto _start;
}
case 9:
{
lean_object* v_cs_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; uint8_t v___x_164_; 
v_cs_160_ = lean_ctor_get(v_x_123_, 3);
lean_inc_ref(v_cs_160_);
lean_dec_ref_known(v_x_123_, 4);
v___x_161_ = lean_unsigned_to_nat(0u);
v___x_162_ = lean_array_get_size(v_cs_160_);
v___x_163_ = lean_box(0);
v___x_164_ = lean_nat_dec_lt(v___x_161_, v___x_162_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; 
lean_dec_ref(v_cs_160_);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_163_);
lean_ctor_set(v___x_165_, 1, v_s_125_);
return v___x_165_;
}
else
{
uint8_t v___x_166_; 
v___x_166_ = lean_nat_dec_le(v___x_162_, v___x_162_);
if (v___x_166_ == 0)
{
if (v___x_164_ == 0)
{
lean_object* v___x_167_; 
lean_dec_ref(v_cs_160_);
v___x_167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_163_);
lean_ctor_set(v___x_167_, 1, v_s_125_);
return v___x_167_;
}
else
{
size_t v___x_168_; size_t v___x_169_; lean_object* v___x_170_; 
v___x_168_ = ((size_t)0ULL);
v___x_169_ = lean_usize_of_nat(v___x_162_);
v___x_170_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0(v_cs_160_, v___x_168_, v___x_169_, v___x_163_, v_a_124_, v_s_125_);
lean_dec_ref(v_cs_160_);
return v___x_170_;
}
}
else
{
size_t v___x_171_; size_t v___x_172_; lean_object* v___x_173_; 
v___x_171_ = ((size_t)0ULL);
v___x_172_ = lean_usize_of_nat(v___x_162_);
v___x_173_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0(v_cs_160_, v___x_171_, v___x_172_, v___x_163_, v_a_124_, v_s_125_);
lean_dec_ref(v_cs_160_);
return v___x_173_;
}
}
}
default: 
{
uint8_t v___x_174_; 
v___x_174_ = l_Lean_IR_FnBody_isTerminal(v_x_123_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; 
v___x_175_ = l_Lean_IR_FnBody_body(v_x_123_);
lean_dec(v_x_123_);
v_x_123_ = v___x_175_;
goto _start;
}
else
{
lean_object* v___x_177_; lean_object* v___x_178_; 
lean_dec(v_x_123_);
v___x_177_ = lean_box(0);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v_s_125_);
return v___x_178_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0(lean_object* v_as_179_, size_t v_i_180_, size_t v_stop_181_, lean_object* v_b_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
uint8_t v___x_185_; 
v___x_185_ = lean_usize_dec_eq(v_i_180_, v_stop_181_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v_fst_189_; lean_object* v_snd_190_; size_t v___x_191_; size_t v___x_192_; 
v___x_186_ = lean_array_uget_borrowed(v_as_179_, v_i_180_);
v___x_187_ = l_Lean_IR_Alt_body(v___x_186_);
v___x_188_ = l_Lean_IR_CollectUsedDecls_collectFnBody(v___x_187_, v___y_183_, v___y_184_);
v_fst_189_ = lean_ctor_get(v___x_188_, 0);
lean_inc(v_fst_189_);
v_snd_190_ = lean_ctor_get(v___x_188_, 1);
lean_inc(v_snd_190_);
lean_dec_ref(v___x_188_);
v___x_191_ = ((size_t)1ULL);
v___x_192_ = lean_usize_add(v_i_180_, v___x_191_);
v_i_180_ = v___x_192_;
v_b_182_ = v_fst_189_;
v___y_184_ = v_snd_190_;
goto _start;
}
else
{
lean_object* v___x_194_; 
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v_b_182_);
lean_ctor_set(v___x_194_, 1, v___y_184_);
return v___x_194_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0___boxed(lean_object* v_as_195_, lean_object* v_i_196_, lean_object* v_stop_197_, lean_object* v_b_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
size_t v_i_boxed_201_; size_t v_stop_boxed_202_; lean_object* v_res_203_; 
v_i_boxed_201_ = lean_unbox_usize(v_i_196_);
lean_dec(v_i_196_);
v_stop_boxed_202_ = lean_unbox_usize(v_stop_197_);
lean_dec(v_stop_197_);
v_res_203_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectUsedDecls_collectFnBody_spec__0(v_as_195_, v_i_boxed_201_, v_stop_boxed_202_, v_b_198_, v___y_199_, v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec_ref(v_as_195_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectFnBody___boxed(lean_object* v_x_204_, lean_object* v_a_205_, lean_object* v_s_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Lean_IR_CollectUsedDecls_collectFnBody(v_x_204_, v_a_205_, v_s_206_);
lean_dec_ref(v_a_205_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl(lean_object* v_fn_208_, lean_object* v_a_209_, lean_object* v_s_210_){
_start:
{
lean_object* v___x_211_; 
lean_inc_ref(v_a_209_);
v___x_211_ = lean_get_init_fn_name_for(v_a_209_, v_fn_208_);
if (lean_obj_tag(v___x_211_) == 1)
{
lean_object* v_val_212_; lean_object* v_set_213_; lean_object* v_order_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_240_; 
v_val_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_val_212_);
lean_dec_ref_known(v___x_211_, 1);
v_set_213_ = lean_ctor_get(v_s_210_, 0);
v_order_214_ = lean_ctor_get(v_s_210_, 1);
v_isSharedCheck_240_ = !lean_is_exclusive(v_s_210_);
if (v_isSharedCheck_240_ == 0)
{
v___x_216_ = v_s_210_;
v_isShared_217_ = v_isSharedCheck_240_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_order_214_);
lean_inc(v_set_213_);
lean_dec(v_s_210_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_240_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_218_; lean_object* v_fst_219_; lean_object* v_snd_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_239_; 
lean_inc(v_val_212_);
v___x_218_ = l_Lean_NameSet_containsThenInsert(v_set_213_, v_val_212_);
v_fst_219_ = lean_ctor_get(v___x_218_, 0);
v_snd_220_ = lean_ctor_get(v___x_218_, 1);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_239_ == 0)
{
v___x_222_ = v___x_218_;
v_isShared_223_ = v_isSharedCheck_239_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_snd_220_);
lean_inc(v_fst_219_);
lean_dec(v___x_218_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_239_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_224_ = lean_box(0);
v___x_225_ = lean_unbox(v_fst_219_);
lean_dec(v_fst_219_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; lean_object* v___x_228_; 
v___x_226_ = lean_array_push(v_order_214_, v_val_212_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 1, v___x_226_);
lean_ctor_set(v___x_216_, 0, v_snd_220_);
v___x_228_ = v___x_216_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_snd_220_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v___x_226_);
v___x_228_ = v_reuseFailAlloc_232_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_230_; 
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 1, v___x_228_);
lean_ctor_set(v___x_222_, 0, v___x_224_);
v___x_230_ = v___x_222_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_224_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v___x_228_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
else
{
lean_object* v___x_234_; 
lean_dec(v_val_212_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v_snd_220_);
v___x_234_ = v___x_216_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_snd_220_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_order_214_);
v___x_234_ = v_reuseFailAlloc_238_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
lean_object* v___x_236_; 
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 1, v___x_234_);
lean_ctor_set(v___x_222_, 0, v___x_224_);
v___x_236_ = v___x_222_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v___x_224_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v___x_234_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
}
}
else
{
lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec(v___x_211_);
v___x_241_ = lean_box(0);
v___x_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v_s_210_);
return v___x_242_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectInitDecl___boxed(lean_object* v_fn_243_, lean_object* v_a_244_, lean_object* v_s_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_IR_CollectUsedDecls_collectInitDecl(v_fn_243_, v_a_244_, v_s_245_);
lean_dec_ref(v_a_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDecl(lean_object* v_x_247_, lean_object* v_a_248_, lean_object* v_s_249_){
_start:
{
if (lean_obj_tag(v_x_247_) == 0)
{
lean_object* v_f_250_; lean_object* v_body_251_; lean_object* v___x_252_; lean_object* v_snd_253_; lean_object* v___x_254_; 
v_f_250_ = lean_ctor_get(v_x_247_, 0);
lean_inc(v_f_250_);
v_body_251_ = lean_ctor_get(v_x_247_, 3);
lean_inc(v_body_251_);
lean_dec_ref_known(v_x_247_, 5);
v___x_252_ = l_Lean_IR_CollectUsedDecls_collectInitDecl(v_f_250_, v_a_248_, v_s_249_);
v_snd_253_ = lean_ctor_get(v___x_252_, 1);
lean_inc(v_snd_253_);
lean_dec_ref(v___x_252_);
v___x_254_ = l_Lean_IR_CollectUsedDecls_collectFnBody(v_body_251_, v_a_248_, v_snd_253_);
return v___x_254_;
}
else
{
lean_object* v_f_255_; lean_object* v___x_256_; 
v_f_255_ = lean_ctor_get(v_x_247_, 0);
lean_inc(v_f_255_);
lean_dec_ref_known(v_x_247_, 4);
v___x_256_ = l_Lean_IR_CollectUsedDecls_collectInitDecl(v_f_255_, v_a_248_, v_s_249_);
return v___x_256_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDecl___boxed(lean_object* v_x_257_, lean_object* v_a_258_, lean_object* v_s_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_IR_CollectUsedDecls_collectDecl(v_x_257_, v_a_258_, v_s_259_);
lean_dec_ref(v_a_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0(lean_object* v_as_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
if (lean_obj_tag(v_as_261_) == 0)
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lean_box(0);
v___x_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
lean_ctor_set(v___x_265_, 1, v___y_263_);
return v___x_265_;
}
else
{
lean_object* v_head_266_; lean_object* v_tail_267_; lean_object* v___x_268_; lean_object* v_snd_269_; lean_object* v_set_270_; lean_object* v_order_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_290_; 
v_head_266_ = lean_ctor_get(v_as_261_, 0);
lean_inc_n(v_head_266_, 2);
v_tail_267_ = lean_ctor_get(v_as_261_, 1);
lean_inc(v_tail_267_);
lean_dec_ref_known(v_as_261_, 2);
v___x_268_ = l_Lean_IR_CollectUsedDecls_collectDecl(v_head_266_, v___y_262_, v___y_263_);
v_snd_269_ = lean_ctor_get(v___x_268_, 1);
lean_inc(v_snd_269_);
lean_dec_ref(v___x_268_);
v_set_270_ = lean_ctor_get(v_snd_269_, 0);
v_order_271_ = lean_ctor_get(v_snd_269_, 1);
v_isSharedCheck_290_ = !lean_is_exclusive(v_snd_269_);
if (v_isSharedCheck_290_ == 0)
{
v___x_273_ = v_snd_269_;
v_isShared_274_ = v_isSharedCheck_290_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_order_271_);
lean_inc(v_set_270_);
lean_dec(v_snd_269_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_290_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v_fst_277_; uint8_t v___x_278_; 
v___x_275_ = l_Lean_IR_Decl_name(v_head_266_);
lean_dec(v_head_266_);
lean_inc(v___x_275_);
v___x_276_ = l_Lean_NameSet_containsThenInsert(v_set_270_, v___x_275_);
v_fst_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_fst_277_);
v___x_278_ = lean_unbox(v_fst_277_);
lean_dec(v_fst_277_);
if (v___x_278_ == 0)
{
lean_object* v_snd_279_; lean_object* v___x_280_; lean_object* v___x_282_; 
v_snd_279_ = lean_ctor_get(v___x_276_, 1);
lean_inc(v_snd_279_);
lean_dec_ref(v___x_276_);
v___x_280_ = lean_array_push(v_order_271_, v___x_275_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 1, v___x_280_);
lean_ctor_set(v___x_273_, 0, v_snd_279_);
v___x_282_ = v___x_273_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_snd_279_);
lean_ctor_set(v_reuseFailAlloc_284_, 1, v___x_280_);
v___x_282_ = v_reuseFailAlloc_284_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
v_as_261_ = v_tail_267_;
v___y_263_ = v___x_282_;
goto _start;
}
}
else
{
lean_object* v_snd_285_; lean_object* v___x_287_; 
lean_dec(v___x_275_);
v_snd_285_ = lean_ctor_get(v___x_276_, 1);
lean_inc(v_snd_285_);
lean_dec_ref(v___x_276_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v_snd_285_);
v___x_287_ = v___x_273_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_snd_285_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_order_271_);
v___x_287_ = v_reuseFailAlloc_289_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
v_as_261_ = v_tail_267_;
v___y_263_ = v___x_287_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0___boxed(lean_object* v_as_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0(v_as_291_, v___y_292_, v___y_293_);
lean_dec_ref(v___y_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDeclLoop(lean_object* v_decls_295_, lean_object* v_a_296_, lean_object* v_s_297_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0(v_decls_295_, v_a_296_, v_s_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectUsedDecls_collectDeclLoop___boxed(lean_object* v_decls_299_, lean_object* v_a_300_, lean_object* v_s_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_IR_CollectUsedDecls_collectDeclLoop(v_decls_299_, v_a_300_, v_s_301_);
lean_dec_ref(v_a_300_);
return v_res_302_;
}
}
static lean_object* _init_l_Lean_IR_collectUsedDecls___closed__1(void){
_start:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_305_ = ((lean_object*)(l_Lean_IR_collectUsedDecls___closed__0));
v___x_306_ = l_Lean_NameSet_empty;
v___x_307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v___x_305_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_collectUsedDecls(lean_object* v_env_308_, lean_object* v_decls_309_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v_snd_312_; lean_object* v_order_313_; 
v___x_310_ = lean_obj_once(&l_Lean_IR_collectUsedDecls___closed__1, &l_Lean_IR_collectUsedDecls___closed__1_once, _init_l_Lean_IR_collectUsedDecls___closed__1);
v___x_311_ = l_List_forM___at___00Lean_IR_CollectUsedDecls_collectDeclLoop_spec__0(v_decls_309_, v_env_308_, v___x_310_);
v_snd_312_ = lean_ctor_get(v___x_311_, 1);
lean_inc(v_snd_312_);
lean_dec_ref(v___x_311_);
v_order_313_ = lean_ctor_get(v_snd_312_, 1);
lean_inc_ref(v_order_313_);
lean_dec(v_snd_312_);
return v_order_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_collectUsedDecls___boxed(lean_object* v_env_314_, lean_object* v_decls_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Lean_IR_collectUsedDecls(v_env_314_, v_decls_315_);
lean_dec_ref(v_env_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectVar(lean_object* v_x_319_, lean_object* v_t_320_, lean_object* v_x_321_){
_start:
{
lean_object* v_fst_322_; lean_object* v_snd_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_333_; 
v_fst_322_ = lean_ctor_get(v_x_321_, 0);
v_snd_323_ = lean_ctor_get(v_x_321_, 1);
v_isSharedCheck_333_ = !lean_is_exclusive(v_x_321_);
if (v_isSharedCheck_333_ == 0)
{
v___x_325_ = v_x_321_;
v_isShared_326_ = v_isSharedCheck_333_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_snd_323_);
lean_inc(v_fst_322_);
lean_dec(v_x_321_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_333_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_331_; 
v___x_327_ = ((lean_object*)(l_Lean_IR_CollectMaps_collectVar___closed__0));
v___x_328_ = ((lean_object*)(l_Lean_IR_CollectMaps_collectVar___closed__1));
v___x_329_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_327_, v___x_328_, v_fst_322_, v_x_319_, v_t_320_);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 0, v___x_329_);
v___x_331_ = v___x_325_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_329_);
lean_ctor_set(v_reuseFailAlloc_332_, 1, v_snd_323_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_334_, lean_object* v_x_335_){
_start:
{
if (lean_obj_tag(v_x_335_) == 0)
{
return v_x_334_;
}
else
{
lean_object* v_key_336_; lean_object* v_value_337_; lean_object* v_tail_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_361_; 
v_key_336_ = lean_ctor_get(v_x_335_, 0);
v_value_337_ = lean_ctor_get(v_x_335_, 1);
v_tail_338_ = lean_ctor_get(v_x_335_, 2);
v_isSharedCheck_361_ = !lean_is_exclusive(v_x_335_);
if (v_isSharedCheck_361_ == 0)
{
v___x_340_ = v_x_335_;
v_isShared_341_ = v_isSharedCheck_361_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_tail_338_);
lean_inc(v_value_337_);
lean_inc(v_key_336_);
lean_dec(v_x_335_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_361_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_342_; uint64_t v___x_343_; uint64_t v___x_344_; uint64_t v___x_345_; uint64_t v_fold_346_; uint64_t v___x_347_; uint64_t v___x_348_; uint64_t v___x_349_; size_t v___x_350_; size_t v___x_351_; size_t v___x_352_; size_t v___x_353_; size_t v___x_354_; lean_object* v___x_355_; lean_object* v___x_357_; 
v___x_342_ = lean_array_get_size(v_x_334_);
v___x_343_ = l_Lean_IR_instHashableVarId_hash(v_key_336_);
v___x_344_ = 32ULL;
v___x_345_ = lean_uint64_shift_right(v___x_343_, v___x_344_);
v_fold_346_ = lean_uint64_xor(v___x_343_, v___x_345_);
v___x_347_ = 16ULL;
v___x_348_ = lean_uint64_shift_right(v_fold_346_, v___x_347_);
v___x_349_ = lean_uint64_xor(v_fold_346_, v___x_348_);
v___x_350_ = lean_uint64_to_usize(v___x_349_);
v___x_351_ = lean_usize_of_nat(v___x_342_);
v___x_352_ = ((size_t)1ULL);
v___x_353_ = lean_usize_sub(v___x_351_, v___x_352_);
v___x_354_ = lean_usize_land(v___x_350_, v___x_353_);
v___x_355_ = lean_array_uget_borrowed(v_x_334_, v___x_354_);
lean_inc(v___x_355_);
if (v_isShared_341_ == 0)
{
lean_ctor_set(v___x_340_, 2, v___x_355_);
v___x_357_ = v___x_340_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_key_336_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_value_337_);
lean_ctor_set(v_reuseFailAlloc_360_, 2, v___x_355_);
v___x_357_ = v_reuseFailAlloc_360_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_358_; 
v___x_358_ = lean_array_uset(v_x_334_, v___x_354_, v___x_357_);
v_x_334_ = v___x_358_;
v_x_335_ = v_tail_338_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2___redArg(lean_object* v_i_362_, lean_object* v_source_363_, lean_object* v_target_364_){
_start:
{
lean_object* v___x_365_; uint8_t v___x_366_; 
v___x_365_ = lean_array_get_size(v_source_363_);
v___x_366_ = lean_nat_dec_lt(v_i_362_, v___x_365_);
if (v___x_366_ == 0)
{
lean_dec_ref(v_source_363_);
lean_dec(v_i_362_);
return v_target_364_;
}
else
{
lean_object* v_es_367_; lean_object* v___x_368_; lean_object* v_source_369_; lean_object* v_target_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v_es_367_ = lean_array_fget(v_source_363_, v_i_362_);
v___x_368_ = lean_box(0);
v_source_369_ = lean_array_fset(v_source_363_, v_i_362_, v___x_368_);
v_target_370_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4___redArg(v_target_364_, v_es_367_);
v___x_371_ = lean_unsigned_to_nat(1u);
v___x_372_ = lean_nat_add(v_i_362_, v___x_371_);
lean_dec(v_i_362_);
v_i_362_ = v___x_372_;
v_source_363_ = v_source_369_;
v_target_364_ = v_target_370_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1___redArg(lean_object* v_data_374_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v_nbuckets_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_375_ = lean_array_get_size(v_data_374_);
v___x_376_ = lean_unsigned_to_nat(2u);
v_nbuckets_377_ = lean_nat_mul(v___x_375_, v___x_376_);
v___x_378_ = lean_unsigned_to_nat(0u);
v___x_379_ = lean_box(0);
v___x_380_ = lean_mk_array(v_nbuckets_377_, v___x_379_);
v___x_381_ = lean_array_propagate_mark(v_data_374_, v___x_380_);
v___x_382_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2___redArg(v___x_378_, v_data_374_, v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg(lean_object* v_a_383_, lean_object* v_x_384_){
_start:
{
if (lean_obj_tag(v_x_384_) == 0)
{
uint8_t v___x_385_; 
v___x_385_ = 0;
return v___x_385_;
}
else
{
lean_object* v_key_386_; lean_object* v_tail_387_; uint8_t v___x_388_; 
v_key_386_ = lean_ctor_get(v_x_384_, 0);
v_tail_387_ = lean_ctor_get(v_x_384_, 2);
v___x_388_ = l_Lean_IR_instBEqVarId_beq(v_key_386_, v_a_383_);
if (v___x_388_ == 0)
{
v_x_384_ = v_tail_387_;
goto _start;
}
else
{
return v___x_388_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg___boxed(lean_object* v_a_390_, lean_object* v_x_391_){
_start:
{
uint8_t v_res_392_; lean_object* v_r_393_; 
v_res_392_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg(v_a_390_, v_x_391_);
lean_dec(v_x_391_);
lean_dec(v_a_390_);
v_r_393_ = lean_box(v_res_392_);
return v_r_393_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2___redArg(lean_object* v_a_394_, lean_object* v_b_395_, lean_object* v_x_396_){
_start:
{
if (lean_obj_tag(v_x_396_) == 0)
{
lean_dec(v_b_395_);
lean_dec(v_a_394_);
return v_x_396_;
}
else
{
lean_object* v_key_397_; lean_object* v_value_398_; lean_object* v_tail_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_411_; 
v_key_397_ = lean_ctor_get(v_x_396_, 0);
v_value_398_ = lean_ctor_get(v_x_396_, 1);
v_tail_399_ = lean_ctor_get(v_x_396_, 2);
v_isSharedCheck_411_ = !lean_is_exclusive(v_x_396_);
if (v_isSharedCheck_411_ == 0)
{
v___x_401_ = v_x_396_;
v_isShared_402_ = v_isSharedCheck_411_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_tail_399_);
lean_inc(v_value_398_);
lean_inc(v_key_397_);
lean_dec(v_x_396_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_411_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
uint8_t v___x_403_; 
v___x_403_ = l_Lean_IR_instBEqVarId_beq(v_key_397_, v_a_394_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; lean_object* v___x_406_; 
v___x_404_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2___redArg(v_a_394_, v_b_395_, v_tail_399_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 2, v___x_404_);
v___x_406_ = v___x_401_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_key_397_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_value_398_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v___x_404_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
else
{
lean_object* v___x_409_; 
lean_dec(v_value_398_);
lean_dec(v_key_397_);
if (v_isShared_402_ == 0)
{
lean_ctor_set(v___x_401_, 1, v_b_395_);
lean_ctor_set(v___x_401_, 0, v_a_394_);
v___x_409_ = v___x_401_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_394_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v_b_395_);
lean_ctor_set(v_reuseFailAlloc_410_, 2, v_tail_399_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0___redArg(lean_object* v_m_412_, lean_object* v_a_413_, lean_object* v_b_414_){
_start:
{
lean_object* v_size_415_; lean_object* v_buckets_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_459_; 
v_size_415_ = lean_ctor_get(v_m_412_, 0);
v_buckets_416_ = lean_ctor_get(v_m_412_, 1);
v_isSharedCheck_459_ = !lean_is_exclusive(v_m_412_);
if (v_isSharedCheck_459_ == 0)
{
v___x_418_ = v_m_412_;
v_isShared_419_ = v_isSharedCheck_459_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_buckets_416_);
lean_inc(v_size_415_);
lean_dec(v_m_412_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_459_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; uint64_t v___x_421_; uint64_t v___x_422_; uint64_t v___x_423_; uint64_t v_fold_424_; uint64_t v___x_425_; uint64_t v___x_426_; uint64_t v___x_427_; size_t v___x_428_; size_t v___x_429_; size_t v___x_430_; size_t v___x_431_; size_t v___x_432_; lean_object* v_bkt_433_; uint8_t v___x_434_; 
v___x_420_ = lean_array_get_size(v_buckets_416_);
v___x_421_ = l_Lean_IR_instHashableVarId_hash(v_a_413_);
v___x_422_ = 32ULL;
v___x_423_ = lean_uint64_shift_right(v___x_421_, v___x_422_);
v_fold_424_ = lean_uint64_xor(v___x_421_, v___x_423_);
v___x_425_ = 16ULL;
v___x_426_ = lean_uint64_shift_right(v_fold_424_, v___x_425_);
v___x_427_ = lean_uint64_xor(v_fold_424_, v___x_426_);
v___x_428_ = lean_uint64_to_usize(v___x_427_);
v___x_429_ = lean_usize_of_nat(v___x_420_);
v___x_430_ = ((size_t)1ULL);
v___x_431_ = lean_usize_sub(v___x_429_, v___x_430_);
v___x_432_ = lean_usize_land(v___x_428_, v___x_431_);
v_bkt_433_ = lean_array_uget_borrowed(v_buckets_416_, v___x_432_);
v___x_434_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg(v_a_413_, v_bkt_433_);
if (v___x_434_ == 0)
{
lean_object* v___x_435_; lean_object* v_size_x27_436_; lean_object* v___x_437_; lean_object* v_buckets_x27_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; uint8_t v___x_444_; 
v___x_435_ = lean_unsigned_to_nat(1u);
v_size_x27_436_ = lean_nat_add(v_size_415_, v___x_435_);
lean_dec(v_size_415_);
lean_inc(v_bkt_433_);
v___x_437_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_437_, 0, v_a_413_);
lean_ctor_set(v___x_437_, 1, v_b_414_);
lean_ctor_set(v___x_437_, 2, v_bkt_433_);
v_buckets_x27_438_ = lean_array_uset(v_buckets_416_, v___x_432_, v___x_437_);
v___x_439_ = lean_unsigned_to_nat(4u);
v___x_440_ = lean_nat_mul(v_size_x27_436_, v___x_439_);
v___x_441_ = lean_unsigned_to_nat(3u);
v___x_442_ = lean_nat_div(v___x_440_, v___x_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_array_get_size(v_buckets_x27_438_);
v___x_444_ = lean_nat_dec_le(v___x_442_, v___x_443_);
lean_dec(v___x_442_);
if (v___x_444_ == 0)
{
lean_object* v_val_445_; lean_object* v___x_447_; 
v_val_445_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1___redArg(v_buckets_x27_438_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 1, v_val_445_);
lean_ctor_set(v___x_418_, 0, v_size_x27_436_);
v___x_447_ = v___x_418_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_size_x27_436_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v_val_445_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
else
{
lean_object* v___x_450_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 1, v_buckets_x27_438_);
lean_ctor_set(v___x_418_, 0, v_size_x27_436_);
v___x_450_ = v___x_418_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_size_x27_436_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v_buckets_x27_438_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
else
{
lean_object* v___x_452_; lean_object* v_buckets_x27_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_457_; 
lean_inc(v_bkt_433_);
v___x_452_ = lean_box(0);
v_buckets_x27_453_ = lean_array_uset(v_buckets_416_, v___x_432_, v___x_452_);
v___x_454_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2___redArg(v_a_413_, v_b_414_, v_bkt_433_);
v___x_455_ = lean_array_uset(v_buckets_x27_453_, v___x_432_, v___x_454_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 1, v___x_455_);
v___x_457_ = v___x_418_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_size_415_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v___x_455_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1(lean_object* v_as_460_, size_t v_i_461_, size_t v_stop_462_, lean_object* v_b_463_){
_start:
{
uint8_t v___x_464_; 
v___x_464_ = lean_usize_dec_eq(v_i_461_, v_stop_462_);
if (v___x_464_ == 0)
{
lean_object* v_fst_465_; lean_object* v_snd_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_480_; 
v_fst_465_ = lean_ctor_get(v_b_463_, 0);
v_snd_466_ = lean_ctor_get(v_b_463_, 1);
v_isSharedCheck_480_ = !lean_is_exclusive(v_b_463_);
if (v_isSharedCheck_480_ == 0)
{
v___x_468_ = v_b_463_;
v_isShared_469_ = v_isSharedCheck_480_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_snd_466_);
lean_inc(v_fst_465_);
lean_dec(v_b_463_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_480_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_470_; lean_object* v_x_471_; lean_object* v_ty_472_; lean_object* v___x_473_; lean_object* v___x_475_; 
v___x_470_ = lean_array_uget_borrowed(v_as_460_, v_i_461_);
v_x_471_ = lean_ctor_get(v___x_470_, 0);
v_ty_472_ = lean_ctor_get(v___x_470_, 1);
lean_inc(v_ty_472_);
lean_inc(v_x_471_);
v___x_473_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0___redArg(v_fst_465_, v_x_471_, v_ty_472_);
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 0, v___x_473_);
v___x_475_ = v___x_468_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v___x_473_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v_snd_466_);
v___x_475_ = v_reuseFailAlloc_479_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
size_t v___x_476_; size_t v___x_477_; 
v___x_476_ = ((size_t)1ULL);
v___x_477_ = lean_usize_add(v_i_461_, v___x_476_);
v_i_461_ = v___x_477_;
v_b_463_ = v___x_475_;
goto _start;
}
}
}
else
{
return v_b_463_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1___boxed(lean_object* v_as_481_, lean_object* v_i_482_, lean_object* v_stop_483_, lean_object* v_b_484_){
_start:
{
size_t v_i_boxed_485_; size_t v_stop_boxed_486_; lean_object* v_res_487_; 
v_i_boxed_485_ = lean_unbox_usize(v_i_482_);
lean_dec(v_i_482_);
v_stop_boxed_486_ = lean_unbox_usize(v_stop_483_);
lean_dec(v_stop_483_);
v_res_487_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1(v_as_481_, v_i_boxed_485_, v_stop_boxed_486_, v_b_484_);
lean_dec_ref(v_as_481_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectParams(lean_object* v_ps_488_, lean_object* v_s_489_){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; 
v___x_490_ = lean_unsigned_to_nat(0u);
v___x_491_ = lean_array_get_size(v_ps_488_);
v___x_492_ = lean_nat_dec_lt(v___x_490_, v___x_491_);
if (v___x_492_ == 0)
{
return v_s_489_;
}
else
{
uint8_t v___x_493_; 
v___x_493_ = lean_nat_dec_le(v___x_491_, v___x_491_);
if (v___x_493_ == 0)
{
if (v___x_492_ == 0)
{
return v_s_489_;
}
else
{
size_t v___x_494_; size_t v___x_495_; lean_object* v___x_496_; 
v___x_494_ = ((size_t)0ULL);
v___x_495_ = lean_usize_of_nat(v___x_491_);
v___x_496_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1(v_ps_488_, v___x_494_, v___x_495_, v_s_489_);
return v___x_496_;
}
}
else
{
size_t v___x_497_; size_t v___x_498_; lean_object* v___x_499_; 
v___x_497_ = ((size_t)0ULL);
v___x_498_ = lean_usize_of_nat(v___x_491_);
v___x_499_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectParams_spec__1(v_ps_488_, v___x_497_, v___x_498_, v_s_489_);
return v___x_499_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectParams___boxed(lean_object* v_ps_500_, lean_object* v_s_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_IR_CollectMaps_collectParams(v_ps_500_, v_s_501_);
lean_dec_ref(v_ps_500_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0(lean_object* v_00_u03b2_503_, lean_object* v_m_504_, lean_object* v_a_505_, lean_object* v_b_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0___redArg(v_m_504_, v_a_505_, v_b_506_);
return v___x_507_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0(lean_object* v_00_u03b2_508_, lean_object* v_a_509_, lean_object* v_x_510_){
_start:
{
uint8_t v___x_511_; 
v___x_511_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___redArg(v_a_509_, v_x_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0___boxed(lean_object* v_00_u03b2_512_, lean_object* v_a_513_, lean_object* v_x_514_){
_start:
{
uint8_t v_res_515_; lean_object* v_r_516_; 
v_res_515_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__0(v_00_u03b2_512_, v_a_513_, v_x_514_);
lean_dec(v_x_514_);
lean_dec(v_a_513_);
v_r_516_ = lean_box(v_res_515_);
return v_r_516_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1(lean_object* v_00_u03b2_517_, lean_object* v_data_518_){
_start:
{
lean_object* v___x_519_; 
v___x_519_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1___redArg(v_data_518_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2(lean_object* v_00_u03b2_520_, lean_object* v_a_521_, lean_object* v_b_522_, lean_object* v_x_523_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__2___redArg(v_a_521_, v_b_522_, v_x_523_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_525_, lean_object* v_i_526_, lean_object* v_source_527_, lean_object* v_target_528_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2___redArg(v_i_526_, v_source_527_, v_target_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_530_, lean_object* v_x_531_, lean_object* v_x_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0_spec__1_spec__2_spec__4___redArg(v_x_531_, v_x_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectJP(lean_object* v_j_536_, lean_object* v_xs_537_, lean_object* v_x_538_){
_start:
{
lean_object* v_fst_539_; lean_object* v_snd_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_550_; 
v_fst_539_ = lean_ctor_get(v_x_538_, 0);
v_snd_540_ = lean_ctor_get(v_x_538_, 1);
v_isSharedCheck_550_ = !lean_is_exclusive(v_x_538_);
if (v_isSharedCheck_550_ == 0)
{
v___x_542_ = v_x_538_;
v_isShared_543_ = v_isSharedCheck_550_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_snd_540_);
lean_inc(v_fst_539_);
lean_dec(v_x_538_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_550_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_544_ = ((lean_object*)(l_Lean_IR_CollectMaps_collectJP___closed__0));
v___x_545_ = ((lean_object*)(l_Lean_IR_CollectMaps_collectJP___closed__1));
v___x_546_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_544_, v___x_545_, v_snd_540_, v_j_536_, v_xs_537_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 1, v___x_546_);
v___x_548_ = v___x_542_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_fst_539_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v___x_546_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg(lean_object* v_a_551_, lean_object* v_x_552_){
_start:
{
if (lean_obj_tag(v_x_552_) == 0)
{
uint8_t v___x_553_; 
v___x_553_ = 0;
return v___x_553_;
}
else
{
lean_object* v_key_554_; lean_object* v_tail_555_; uint8_t v___x_556_; 
v_key_554_ = lean_ctor_get(v_x_552_, 0);
v_tail_555_ = lean_ctor_get(v_x_552_, 2);
v___x_556_ = l_Lean_IR_instBEqJoinPointId_beq(v_key_554_, v_a_551_);
if (v___x_556_ == 0)
{
v_x_552_ = v_tail_555_;
goto _start;
}
else
{
return v___x_556_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg___boxed(lean_object* v_a_558_, lean_object* v_x_559_){
_start:
{
uint8_t v_res_560_; lean_object* v_r_561_; 
v_res_560_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg(v_a_558_, v_x_559_);
lean_dec(v_x_559_);
lean_dec(v_a_558_);
v_r_561_ = lean_box(v_res_560_);
return v_r_561_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_562_, lean_object* v_x_563_){
_start:
{
if (lean_obj_tag(v_x_563_) == 0)
{
return v_x_562_;
}
else
{
lean_object* v_key_564_; lean_object* v_value_565_; lean_object* v_tail_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_589_; 
v_key_564_ = lean_ctor_get(v_x_563_, 0);
v_value_565_ = lean_ctor_get(v_x_563_, 1);
v_tail_566_ = lean_ctor_get(v_x_563_, 2);
v_isSharedCheck_589_ = !lean_is_exclusive(v_x_563_);
if (v_isSharedCheck_589_ == 0)
{
v___x_568_ = v_x_563_;
v_isShared_569_ = v_isSharedCheck_589_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_tail_566_);
lean_inc(v_value_565_);
lean_inc(v_key_564_);
lean_dec(v_x_563_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_589_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_570_; uint64_t v___x_571_; uint64_t v___x_572_; uint64_t v___x_573_; uint64_t v_fold_574_; uint64_t v___x_575_; uint64_t v___x_576_; uint64_t v___x_577_; size_t v___x_578_; size_t v___x_579_; size_t v___x_580_; size_t v___x_581_; size_t v___x_582_; lean_object* v___x_583_; lean_object* v___x_585_; 
v___x_570_ = lean_array_get_size(v_x_562_);
v___x_571_ = l_Lean_IR_instHashableJoinPointId_hash(v_key_564_);
v___x_572_ = 32ULL;
v___x_573_ = lean_uint64_shift_right(v___x_571_, v___x_572_);
v_fold_574_ = lean_uint64_xor(v___x_571_, v___x_573_);
v___x_575_ = 16ULL;
v___x_576_ = lean_uint64_shift_right(v_fold_574_, v___x_575_);
v___x_577_ = lean_uint64_xor(v_fold_574_, v___x_576_);
v___x_578_ = lean_uint64_to_usize(v___x_577_);
v___x_579_ = lean_usize_of_nat(v___x_570_);
v___x_580_ = ((size_t)1ULL);
v___x_581_ = lean_usize_sub(v___x_579_, v___x_580_);
v___x_582_ = lean_usize_land(v___x_578_, v___x_581_);
v___x_583_ = lean_array_uget_borrowed(v_x_562_, v___x_582_);
lean_inc(v___x_583_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 2, v___x_583_);
v___x_585_ = v___x_568_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_key_564_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_value_565_);
lean_ctor_set(v_reuseFailAlloc_588_, 2, v___x_583_);
v___x_585_ = v_reuseFailAlloc_588_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
lean_object* v___x_586_; 
v___x_586_ = lean_array_uset(v_x_562_, v___x_582_, v___x_585_);
v_x_562_ = v___x_586_;
v_x_563_ = v_tail_566_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2___redArg(lean_object* v_i_590_, lean_object* v_source_591_, lean_object* v_target_592_){
_start:
{
lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_593_ = lean_array_get_size(v_source_591_);
v___x_594_ = lean_nat_dec_lt(v_i_590_, v___x_593_);
if (v___x_594_ == 0)
{
lean_dec_ref(v_source_591_);
lean_dec(v_i_590_);
return v_target_592_;
}
else
{
lean_object* v_es_595_; lean_object* v___x_596_; lean_object* v_source_597_; lean_object* v_target_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v_es_595_ = lean_array_fget(v_source_591_, v_i_590_);
v___x_596_ = lean_box(0);
v_source_597_ = lean_array_fset(v_source_591_, v_i_590_, v___x_596_);
v_target_598_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4___redArg(v_target_592_, v_es_595_);
v___x_599_ = lean_unsigned_to_nat(1u);
v___x_600_ = lean_nat_add(v_i_590_, v___x_599_);
lean_dec(v_i_590_);
v_i_590_ = v___x_600_;
v_source_591_ = v_source_597_;
v_target_592_ = v_target_598_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1___redArg(lean_object* v_data_602_){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v_nbuckets_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_603_ = lean_array_get_size(v_data_602_);
v___x_604_ = lean_unsigned_to_nat(2u);
v_nbuckets_605_ = lean_nat_mul(v___x_603_, v___x_604_);
v___x_606_ = lean_unsigned_to_nat(0u);
v___x_607_ = lean_box(0);
v___x_608_ = lean_mk_array(v_nbuckets_605_, v___x_607_);
v___x_609_ = lean_array_propagate_mark(v_data_602_, v___x_608_);
v___x_610_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2___redArg(v___x_606_, v_data_602_, v___x_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2___redArg(lean_object* v_a_611_, lean_object* v_b_612_, lean_object* v_x_613_){
_start:
{
if (lean_obj_tag(v_x_613_) == 0)
{
lean_dec(v_b_612_);
lean_dec(v_a_611_);
return v_x_613_;
}
else
{
lean_object* v_key_614_; lean_object* v_value_615_; lean_object* v_tail_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_628_; 
v_key_614_ = lean_ctor_get(v_x_613_, 0);
v_value_615_ = lean_ctor_get(v_x_613_, 1);
v_tail_616_ = lean_ctor_get(v_x_613_, 2);
v_isSharedCheck_628_ = !lean_is_exclusive(v_x_613_);
if (v_isSharedCheck_628_ == 0)
{
v___x_618_ = v_x_613_;
v_isShared_619_ = v_isSharedCheck_628_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_tail_616_);
lean_inc(v_value_615_);
lean_inc(v_key_614_);
lean_dec(v_x_613_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_628_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
uint8_t v___x_620_; 
v___x_620_ = l_Lean_IR_instBEqJoinPointId_beq(v_key_614_, v_a_611_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; lean_object* v___x_623_; 
v___x_621_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2___redArg(v_a_611_, v_b_612_, v_tail_616_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 2, v___x_621_);
v___x_623_ = v___x_618_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_key_614_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_value_615_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v___x_621_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
else
{
lean_object* v___x_626_; 
lean_dec(v_value_615_);
lean_dec(v_key_614_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 1, v_b_612_);
lean_ctor_set(v___x_618_, 0, v_a_611_);
v___x_626_ = v___x_618_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_611_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v_b_612_);
lean_ctor_set(v_reuseFailAlloc_627_, 2, v_tail_616_);
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
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0___redArg(lean_object* v_m_629_, lean_object* v_a_630_, lean_object* v_b_631_){
_start:
{
lean_object* v_size_632_; lean_object* v_buckets_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_676_; 
v_size_632_ = lean_ctor_get(v_m_629_, 0);
v_buckets_633_ = lean_ctor_get(v_m_629_, 1);
v_isSharedCheck_676_ = !lean_is_exclusive(v_m_629_);
if (v_isSharedCheck_676_ == 0)
{
v___x_635_ = v_m_629_;
v_isShared_636_ = v_isSharedCheck_676_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_buckets_633_);
lean_inc(v_size_632_);
lean_dec(v_m_629_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_676_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_637_; uint64_t v___x_638_; uint64_t v___x_639_; uint64_t v___x_640_; uint64_t v_fold_641_; uint64_t v___x_642_; uint64_t v___x_643_; uint64_t v___x_644_; size_t v___x_645_; size_t v___x_646_; size_t v___x_647_; size_t v___x_648_; size_t v___x_649_; lean_object* v_bkt_650_; uint8_t v___x_651_; 
v___x_637_ = lean_array_get_size(v_buckets_633_);
v___x_638_ = l_Lean_IR_instHashableJoinPointId_hash(v_a_630_);
v___x_639_ = 32ULL;
v___x_640_ = lean_uint64_shift_right(v___x_638_, v___x_639_);
v_fold_641_ = lean_uint64_xor(v___x_638_, v___x_640_);
v___x_642_ = 16ULL;
v___x_643_ = lean_uint64_shift_right(v_fold_641_, v___x_642_);
v___x_644_ = lean_uint64_xor(v_fold_641_, v___x_643_);
v___x_645_ = lean_uint64_to_usize(v___x_644_);
v___x_646_ = lean_usize_of_nat(v___x_637_);
v___x_647_ = ((size_t)1ULL);
v___x_648_ = lean_usize_sub(v___x_646_, v___x_647_);
v___x_649_ = lean_usize_land(v___x_645_, v___x_648_);
v_bkt_650_ = lean_array_uget_borrowed(v_buckets_633_, v___x_649_);
v___x_651_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg(v_a_630_, v_bkt_650_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; lean_object* v_size_x27_653_; lean_object* v___x_654_; lean_object* v_buckets_x27_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_652_ = lean_unsigned_to_nat(1u);
v_size_x27_653_ = lean_nat_add(v_size_632_, v___x_652_);
lean_dec(v_size_632_);
lean_inc(v_bkt_650_);
v___x_654_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_654_, 0, v_a_630_);
lean_ctor_set(v___x_654_, 1, v_b_631_);
lean_ctor_set(v___x_654_, 2, v_bkt_650_);
v_buckets_x27_655_ = lean_array_uset(v_buckets_633_, v___x_649_, v___x_654_);
v___x_656_ = lean_unsigned_to_nat(4u);
v___x_657_ = lean_nat_mul(v_size_x27_653_, v___x_656_);
v___x_658_ = lean_unsigned_to_nat(3u);
v___x_659_ = lean_nat_div(v___x_657_, v___x_658_);
lean_dec(v___x_657_);
v___x_660_ = lean_array_get_size(v_buckets_x27_655_);
v___x_661_ = lean_nat_dec_le(v___x_659_, v___x_660_);
lean_dec(v___x_659_);
if (v___x_661_ == 0)
{
lean_object* v_val_662_; lean_object* v___x_664_; 
v_val_662_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1___redArg(v_buckets_x27_655_);
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 1, v_val_662_);
lean_ctor_set(v___x_635_, 0, v_size_x27_653_);
v___x_664_ = v___x_635_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_size_x27_653_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v_val_662_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
else
{
lean_object* v___x_667_; 
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 1, v_buckets_x27_655_);
lean_ctor_set(v___x_635_, 0, v_size_x27_653_);
v___x_667_ = v___x_635_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_size_x27_653_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v_buckets_x27_655_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
else
{
lean_object* v___x_669_; lean_object* v_buckets_x27_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_674_; 
lean_inc(v_bkt_650_);
v___x_669_ = lean_box(0);
v_buckets_x27_670_ = lean_array_uset(v_buckets_633_, v___x_649_, v___x_669_);
v___x_671_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2___redArg(v_a_630_, v_b_631_, v_bkt_650_);
v___x_672_ = lean_array_uset(v_buckets_x27_670_, v___x_649_, v___x_671_);
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 1, v___x_672_);
v___x_674_ = v___x_635_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_size_632_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v___x_672_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectFnBody(lean_object* v_x_677_, lean_object* v_a_678_){
_start:
{
switch(lean_obj_tag(v_x_677_))
{
case 0:
{
lean_object* v_x_679_; lean_object* v_ty_680_; lean_object* v_b_681_; lean_object* v___x_682_; lean_object* v_fst_683_; lean_object* v_snd_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_692_; 
v_x_679_ = lean_ctor_get(v_x_677_, 0);
lean_inc(v_x_679_);
v_ty_680_ = lean_ctor_get(v_x_677_, 1);
lean_inc(v_ty_680_);
v_b_681_ = lean_ctor_get(v_x_677_, 3);
lean_inc(v_b_681_);
lean_dec_ref_known(v_x_677_, 4);
v___x_682_ = l_Lean_IR_CollectMaps_collectFnBody(v_b_681_, v_a_678_);
v_fst_683_ = lean_ctor_get(v___x_682_, 0);
v_snd_684_ = lean_ctor_get(v___x_682_, 1);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_692_ == 0)
{
v___x_686_ = v___x_682_;
v_isShared_687_ = v_isSharedCheck_692_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_snd_684_);
lean_inc(v_fst_683_);
lean_dec(v___x_682_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_692_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_688_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectParams_spec__0___redArg(v_fst_683_, v_x_679_, v_ty_680_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v___x_688_);
v___x_690_ = v___x_686_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v_snd_684_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
case 1:
{
lean_object* v_j_693_; lean_object* v_xs_694_; lean_object* v_v_695_; lean_object* v_b_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v_fst_700_; lean_object* v_snd_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_709_; 
v_j_693_ = lean_ctor_get(v_x_677_, 0);
lean_inc(v_j_693_);
v_xs_694_ = lean_ctor_get(v_x_677_, 1);
lean_inc_ref(v_xs_694_);
v_v_695_ = lean_ctor_get(v_x_677_, 2);
lean_inc(v_v_695_);
v_b_696_ = lean_ctor_get(v_x_677_, 3);
lean_inc(v_b_696_);
lean_dec_ref_known(v_x_677_, 4);
v___x_697_ = l_Lean_IR_CollectMaps_collectFnBody(v_b_696_, v_a_678_);
v___x_698_ = l_Lean_IR_CollectMaps_collectFnBody(v_v_695_, v___x_697_);
v___x_699_ = l_Lean_IR_CollectMaps_collectParams(v_xs_694_, v___x_698_);
v_fst_700_ = lean_ctor_get(v___x_699_, 0);
v_snd_701_ = lean_ctor_get(v___x_699_, 1);
v_isSharedCheck_709_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_709_ == 0)
{
v___x_703_ = v___x_699_;
v_isShared_704_ = v_isSharedCheck_709_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_snd_701_);
lean_inc(v_fst_700_);
lean_dec(v___x_699_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_709_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v___x_705_; lean_object* v___x_707_; 
v___x_705_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0___redArg(v_snd_701_, v_j_693_, v_xs_694_);
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 1, v___x_705_);
v___x_707_ = v___x_703_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_fst_700_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v___x_705_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
return v___x_707_;
}
}
}
case 9:
{
lean_object* v_cs_710_; lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v_cs_710_ = lean_ctor_get(v_x_677_, 3);
lean_inc_ref(v_cs_710_);
lean_dec_ref_known(v_x_677_, 4);
v___x_711_ = lean_unsigned_to_nat(0u);
v___x_712_ = lean_array_get_size(v_cs_710_);
v___x_713_ = lean_nat_dec_lt(v___x_711_, v___x_712_);
if (v___x_713_ == 0)
{
lean_dec_ref(v_cs_710_);
return v_a_678_;
}
else
{
uint8_t v___x_714_; 
v___x_714_ = lean_nat_dec_le(v___x_712_, v___x_712_);
if (v___x_714_ == 0)
{
if (v___x_713_ == 0)
{
lean_dec_ref(v_cs_710_);
return v_a_678_;
}
else
{
size_t v___x_715_; size_t v___x_716_; lean_object* v___x_717_; 
v___x_715_ = ((size_t)0ULL);
v___x_716_ = lean_usize_of_nat(v___x_712_);
v___x_717_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1(v_cs_710_, v___x_715_, v___x_716_, v_a_678_);
lean_dec_ref(v_cs_710_);
return v___x_717_;
}
}
else
{
size_t v___x_718_; size_t v___x_719_; lean_object* v___x_720_; 
v___x_718_ = ((size_t)0ULL);
v___x_719_ = lean_usize_of_nat(v___x_712_);
v___x_720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1(v_cs_710_, v___x_718_, v___x_719_, v_a_678_);
lean_dec_ref(v_cs_710_);
return v___x_720_;
}
}
}
default: 
{
uint8_t v___x_721_; 
v___x_721_ = l_Lean_IR_FnBody_isTerminal(v_x_677_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; 
v___x_722_ = l_Lean_IR_FnBody_body(v_x_677_);
lean_dec(v_x_677_);
v_x_677_ = v___x_722_;
goto _start;
}
else
{
lean_dec(v_x_677_);
return v_a_678_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1(lean_object* v_as_724_, size_t v_i_725_, size_t v_stop_726_, lean_object* v_b_727_){
_start:
{
uint8_t v___x_728_; 
v___x_728_ = lean_usize_dec_eq(v_i_725_, v_stop_726_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; size_t v___x_732_; size_t v___x_733_; 
v___x_729_ = lean_array_uget_borrowed(v_as_724_, v_i_725_);
v___x_730_ = l_Lean_IR_Alt_body(v___x_729_);
v___x_731_ = l_Lean_IR_CollectMaps_collectFnBody(v___x_730_, v_b_727_);
v___x_732_ = ((size_t)1ULL);
v___x_733_ = lean_usize_add(v_i_725_, v___x_732_);
v_i_725_ = v___x_733_;
v_b_727_ = v___x_731_;
goto _start;
}
else
{
return v_b_727_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1___boxed(lean_object* v_as_735_, lean_object* v_i_736_, lean_object* v_stop_737_, lean_object* v_b_738_){
_start:
{
size_t v_i_boxed_739_; size_t v_stop_boxed_740_; lean_object* v_res_741_; 
v_i_boxed_739_ = lean_unbox_usize(v_i_736_);
lean_dec(v_i_736_);
v_stop_boxed_740_ = lean_unbox_usize(v_stop_737_);
lean_dec(v_stop_737_);
v_res_741_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_IR_CollectMaps_collectFnBody_spec__1(v_as_735_, v_i_boxed_739_, v_stop_boxed_740_, v_b_738_);
lean_dec_ref(v_as_735_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0(lean_object* v_00_u03b2_742_, lean_object* v_m_743_, lean_object* v_a_744_, lean_object* v_b_745_){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0___redArg(v_m_743_, v_a_744_, v_b_745_);
return v___x_746_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0(lean_object* v_00_u03b2_747_, lean_object* v_a_748_, lean_object* v_x_749_){
_start:
{
uint8_t v___x_750_; 
v___x_750_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___redArg(v_a_748_, v_x_749_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0___boxed(lean_object* v_00_u03b2_751_, lean_object* v_a_752_, lean_object* v_x_753_){
_start:
{
uint8_t v_res_754_; lean_object* v_r_755_; 
v_res_754_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__0(v_00_u03b2_751_, v_a_752_, v_x_753_);
lean_dec(v_x_753_);
lean_dec(v_a_752_);
v_r_755_ = lean_box(v_res_754_);
return v_r_755_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1(lean_object* v_00_u03b2_756_, lean_object* v_data_757_){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1___redArg(v_data_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2(lean_object* v_00_u03b2_759_, lean_object* v_a_760_, lean_object* v_b_761_, lean_object* v_x_762_){
_start:
{
lean_object* v___x_763_; 
v___x_763_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__2___redArg(v_a_760_, v_b_761_, v_x_762_);
return v___x_763_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_764_, lean_object* v_i_765_, lean_object* v_source_766_, lean_object* v_target_767_){
_start:
{
lean_object* v___x_768_; 
v___x_768_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2___redArg(v_i_765_, v_source_766_, v_target_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_769_, lean_object* v_x_770_, lean_object* v_x_771_){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_IR_CollectMaps_collectFnBody_spec__0_spec__1_spec__2_spec__4___redArg(v_x_770_, v_x_771_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_CollectMaps_collectDecl(lean_object* v_x_773_, lean_object* v_a_774_){
_start:
{
if (lean_obj_tag(v_x_773_) == 0)
{
lean_object* v_xs_775_; lean_object* v_body_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v_xs_775_ = lean_ctor_get(v_x_773_, 1);
lean_inc_ref(v_xs_775_);
v_body_776_ = lean_ctor_get(v_x_773_, 3);
lean_inc(v_body_776_);
lean_dec_ref_known(v_x_773_, 5);
v___x_777_ = l_Lean_IR_CollectMaps_collectFnBody(v_body_776_, v_a_774_);
v___x_778_ = l_Lean_IR_CollectMaps_collectParams(v_xs_775_, v___x_777_);
lean_dec_ref(v_xs_775_);
return v___x_778_;
}
else
{
lean_dec_ref(v_x_773_);
return v_a_774_;
}
}
}
static lean_object* _init_l_Lean_IR_mkVarJPMaps___closed__0(void){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_779_ = lean_box(0);
v___x_780_ = lean_unsigned_to_nat(16u);
v___x_781_ = lean_mk_array(v___x_780_, v___x_779_);
return v___x_781_;
}
}
static lean_object* _init_l_Lean_IR_mkVarJPMaps___closed__1(void){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_782_ = lean_obj_once(&l_Lean_IR_mkVarJPMaps___closed__0, &l_Lean_IR_mkVarJPMaps___closed__0_once, _init_l_Lean_IR_mkVarJPMaps___closed__0);
v___x_783_ = lean_unsigned_to_nat(0u);
v___x_784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
lean_ctor_set(v___x_784_, 1, v___x_782_);
return v___x_784_;
}
}
static lean_object* _init_l_Lean_IR_mkVarJPMaps___closed__2(void){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = lean_obj_once(&l_Lean_IR_mkVarJPMaps___closed__1, &l_Lean_IR_mkVarJPMaps___closed__1_once, _init_l_Lean_IR_mkVarJPMaps___closed__1);
v___x_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_IR_mkVarJPMaps(lean_object* v_d_787_){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = lean_obj_once(&l_Lean_IR_mkVarJPMaps___closed__2, &l_Lean_IR_mkVarJPMaps___closed__2_once, _init_l_Lean_IR_mkVarJPMaps___closed__2);
v___x_789_ = l_Lean_IR_CollectMaps_collectDecl(v_d_787_, v___x_788_);
return v___x_789_;
}
}
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_IR_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_IR_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_IR_EmitUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_EmitUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_IR_EmitUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_IR_EmitUtil(builtin);
}
#ifdef __cplusplus
}
#endif
