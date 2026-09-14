// Lean compiler output
// Module: Lean.Compiler.LCNF.Bind
// Imports: public import Lean.Compiler.LCNF.InferType
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
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Compiler_LCNF_Code_inferParamType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_mkCasesResultType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
uint8_t l_Lean_isMarkedBorrowed(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getArrowArity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "`Code.bind` failed, it contains an out-of-scope join point"};
static const lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1;
static const lean_string_object l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "`Code.bind` failed, empty `cases` found"};
static const lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_CompilerM_codeBind___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCodeBindCompilerM___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isEtaExpandCandidateCore___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate___boxed(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg(uint8_t v_pu_1_, lean_object* v_inst_2_, lean_object* v_c_3_, lean_object* v_f_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_box(v_pu_1_);
v___x_6_ = lean_apply_3(v_inst_2_, v___x_5_, v_c_3_, v_f_4_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___redArg___boxed(lean_object* v_pu_7_, lean_object* v_inst_8_, lean_object* v_c_9_, lean_object* v_f_10_){
_start:
{
uint8_t v_pu_boxed_11_; lean_object* v_res_12_; 
v_pu_boxed_11_ = lean_unbox(v_pu_7_);
v_res_12_ = l_Lean_Compiler_LCNF_Code_bind___redArg(v_pu_boxed_11_, v_inst_8_, v_c_9_, v_f_10_);
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind(lean_object* v_m_13_, uint8_t v_pu_14_, lean_object* v_inst_15_, lean_object* v_c_16_, lean_object* v_f_17_){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_box(v_pu_14_);
v___x_19_ = lean_apply_3(v_inst_15_, v___x_18_, v_c_16_, v_f_17_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_bind___boxed(lean_object* v_m_20_, lean_object* v_pu_21_, lean_object* v_inst_22_, lean_object* v_c_23_, lean_object* v_f_24_){
_start:
{
uint8_t v_pu_boxed_25_; lean_object* v_res_26_; 
v_pu_boxed_25_ = lean_unbox(v_pu_21_);
v_res_26_ = l_Lean_Compiler_LCNF_Code_bind(v_m_20_, v_pu_boxed_25_, v_inst_22_, v_c_23_, v_f_24_);
return v_res_26_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_27_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_28_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__0, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__0_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__0);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_30_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__1, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__1_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__1);
v___x_31_ = lean_unsigned_to_nat(0u);
v___x_32_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
lean_ctor_set(v___x_32_, 2, v___x_31_);
lean_ctor_set(v___x_32_, 3, v___x_31_);
lean_ctor_set(v___x_32_, 4, v___x_30_);
lean_ctor_set(v___x_32_, 5, v___x_30_);
lean_ctor_set(v___x_32_, 6, v___x_30_);
lean_ctor_set(v___x_32_, 7, v___x_30_);
lean_ctor_set(v___x_32_, 8, v___x_30_);
lean_ctor_set(v___x_32_, 9, v___x_30_);
lean_ctor_set(v___x_32_, 10, v___x_30_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(lean_object* v_msg_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_){
_start:
{
lean_object* v_toCold_39_; lean_object* v_ref_40_; lean_object* v___x_41_; lean_object* v_env_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v_toCold_39_ = lean_ctor_get(v___y_36_, 0);
v_ref_40_ = lean_ctor_get(v___y_36_, 2);
v___x_41_ = lean_st_ref_get(v___y_37_);
v_env_42_ = lean_ctor_get(v___x_41_, 0);
lean_inc_ref(v_env_42_);
lean_dec(v___x_41_);
v___x_43_ = lean_st_ref_get(v___y_35_);
v___x_44_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_34_);
if (lean_obj_tag(v___x_44_) == 0)
{
lean_object* v_a_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_67_; 
v_a_45_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_67_ == 0)
{
v___x_47_ = v___x_44_;
v_isShared_48_ = v_isSharedCheck_67_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_a_45_);
lean_dec(v___x_44_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_67_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v_lctx_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_65_; 
v_lctx_49_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_65_ == 0)
{
lean_object* v_unused_66_; 
v_unused_66_ = lean_ctor_get(v___x_43_, 1);
lean_dec(v_unused_66_);
v___x_51_ = v___x_43_;
v_isShared_52_ = v_isSharedCheck_65_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_lctx_49_);
lean_dec(v___x_43_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_65_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v_options_53_; uint8_t v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_59_; 
v_options_53_ = lean_ctor_get(v_toCold_39_, 2);
v___x_54_ = lean_unbox(v_a_45_);
lean_dec(v_a_45_);
v___x_55_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_49_, v___x_54_);
lean_dec_ref(v_lctx_49_);
v___x_56_ = lean_obj_once(&l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__2, &l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__2_once, _init_l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___closed__2);
lean_inc_ref(v_options_53_);
v___x_57_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_57_, 0, v_env_42_);
lean_ctor_set(v___x_57_, 1, v___x_56_);
lean_ctor_set(v___x_57_, 2, v___x_55_);
lean_ctor_set(v___x_57_, 3, v_options_53_);
if (v_isShared_52_ == 0)
{
lean_ctor_set_tag(v___x_51_, 3);
lean_ctor_set(v___x_51_, 1, v_msg_33_);
lean_ctor_set(v___x_51_, 0, v___x_57_);
v___x_59_ = v___x_51_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v___x_57_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v_msg_33_);
v___x_59_ = v_reuseFailAlloc_64_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
lean_object* v___x_60_; lean_object* v___x_62_; 
lean_inc(v_ref_40_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v_ref_40_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
if (v_isShared_48_ == 0)
{
lean_ctor_set_tag(v___x_47_, 1);
lean_ctor_set(v___x_47_, 0, v___x_60_);
v___x_62_ = v___x_47_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v___x_60_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
}
}
else
{
lean_object* v_a_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_75_; 
lean_dec(v___x_43_);
lean_dec_ref(v_env_42_);
lean_dec_ref(v_msg_33_);
v_a_68_ = lean_ctor_get(v___x_44_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_44_);
if (v_isSharedCheck_75_ == 0)
{
v___x_70_ = v___x_44_;
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_a_68_);
lean_dec(v___x_44_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_73_; 
if (v_isShared_71_ == 0)
{
v___x_73_ = v___x_70_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_a_68_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg___boxed(lean_object* v_msg_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(v_msg_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0(lean_object* v_00_u03b1_83_, lean_object* v_msg_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(v_msg_84_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___boxed(lean_object* v_00_u03b1_92_, lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0(v_00_u03b1_92_, v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
lean_dec(v___y_94_);
return v_res_100_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__0));
v___x_103_ = l_Lean_stringToMessageData(v___x_102_);
return v___x_103_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__2));
v___x_106_ = l_Lean_stringToMessageData(v___x_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(uint8_t v_pu_107_, lean_object* v_f_108_, lean_object* v_c_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
switch(lean_obj_tag(v_c_109_))
{
case 0:
{
lean_object* v_decl_116_; lean_object* v_k_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_133_; 
v_decl_116_ = lean_ctor_get(v_c_109_, 0);
v_k_117_ = lean_ctor_get(v_c_109_, 1);
v_isSharedCheck_133_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_133_ == 0)
{
v___x_119_ = v_c_109_;
v_isShared_120_ = v_isSharedCheck_133_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_k_117_);
lean_inc(v_decl_116_);
lean_dec(v_c_109_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_133_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; 
v___x_121_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_107_, v_f_108_, v_k_117_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_132_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_132_ == 0)
{
v___x_124_ = v___x_121_;
v_isShared_125_ = v_isSharedCheck_132_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_132_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 1, v_a_122_);
v___x_127_ = v___x_119_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_decl_116_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v_a_122_);
v___x_127_ = v_reuseFailAlloc_131_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
lean_object* v___x_129_; 
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v___x_127_);
v___x_129_ = v___x_124_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_127_);
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
else
{
lean_del_object(v___x_119_);
lean_dec_ref(v_decl_116_);
return v___x_121_;
}
}
}
case 1:
{
lean_object* v_decl_134_; lean_object* v_k_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_151_; 
v_decl_134_ = lean_ctor_get(v_c_109_, 0);
v_k_135_ = lean_ctor_get(v_c_109_, 1);
v_isSharedCheck_151_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_151_ == 0)
{
v___x_137_ = v_c_109_;
v_isShared_138_ = v_isSharedCheck_151_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_k_135_);
lean_inc(v_decl_134_);
lean_dec(v_c_109_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_151_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_139_; 
v___x_139_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_107_, v_f_108_, v_k_135_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_150_; 
v_a_140_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_150_ == 0)
{
v___x_142_ = v___x_139_;
v_isShared_143_ = v_isSharedCheck_150_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_139_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_150_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 1, v_a_140_);
v___x_145_ = v___x_137_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_decl_134_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v_a_140_);
v___x_145_ = v_reuseFailAlloc_149_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
lean_object* v___x_147_; 
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 0, v___x_145_);
v___x_147_ = v___x_142_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_145_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
return v___x_147_;
}
}
}
}
else
{
lean_del_object(v___x_137_);
lean_dec_ref(v_decl_134_);
return v___x_139_;
}
}
}
case 2:
{
lean_object* v_decl_152_; lean_object* v_k_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_195_; 
v_decl_152_ = lean_ctor_get(v_c_109_, 0);
v_k_153_ = lean_ctor_get(v_c_109_, 1);
v_isSharedCheck_195_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_195_ == 0)
{
v___x_155_ = v_c_109_;
v_isShared_156_ = v_isSharedCheck_195_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_k_153_);
lean_inc(v_decl_152_);
lean_dec(v_c_109_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_195_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v_params_157_; lean_object* v_value_158_; lean_object* v___x_159_; 
v_params_157_ = lean_ctor_get(v_decl_152_, 2);
lean_inc_ref(v_params_157_);
v_value_158_ = lean_ctor_get(v_decl_152_, 4);
lean_inc_ref(v_value_158_);
lean_inc_ref(v_f_108_);
v___x_159_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_107_, v_f_108_, v_value_158_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v_a_160_; lean_object* v___x_161_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
lean_inc_n(v_a_160_, 2);
lean_dec_ref_known(v___x_159_, 1);
lean_inc_ref(v_params_157_);
v___x_161_ = l_Lean_Compiler_LCNF_Code_inferParamType(v_pu_107_, v_params_157_, v_a_160_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_161_) == 0)
{
lean_object* v_a_162_; lean_object* v___x_163_; 
v_a_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc(v_a_162_);
lean_dec_ref_known(v___x_161_, 1);
v___x_163_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_107_, v_decl_152_, v_a_162_, v_params_157_, v_a_160_, v___y_112_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v_a_164_; lean_object* v_fvarId_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v_a_164_ = lean_ctor_get(v___x_163_, 0);
lean_inc(v_a_164_);
lean_dec_ref_known(v___x_163_, 1);
v_fvarId_165_ = lean_ctor_get(v_a_164_, 0);
lean_inc(v_fvarId_165_);
lean_inc(v___y_110_);
v___x_166_ = l_Lean_FVarIdSet_insert(v___y_110_, v_fvarId_165_);
v___x_167_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_107_, v_f_108_, v_k_153_, v___x_166_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
lean_dec(v___x_166_);
if (lean_obj_tag(v___x_167_) == 0)
{
lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_178_; 
v_a_168_ = lean_ctor_get(v___x_167_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_178_ == 0)
{
v___x_170_ = v___x_167_;
v_isShared_171_ = v_isSharedCheck_178_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_167_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_178_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 1, v_a_168_);
lean_ctor_set(v___x_155_, 0, v_a_164_);
v___x_173_ = v___x_155_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_a_164_);
lean_ctor_set(v_reuseFailAlloc_177_, 1, v_a_168_);
v___x_173_ = v_reuseFailAlloc_177_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
lean_object* v___x_175_; 
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 0, v___x_173_);
v___x_175_ = v___x_170_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v___x_173_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
}
else
{
lean_dec(v_a_164_);
lean_del_object(v___x_155_);
return v___x_167_;
}
}
else
{
lean_object* v_a_179_; lean_object* v___x_181_; uint8_t v_isShared_182_; uint8_t v_isSharedCheck_186_; 
lean_del_object(v___x_155_);
lean_dec_ref(v_k_153_);
lean_dec_ref(v_f_108_);
v_a_179_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_186_ == 0)
{
v___x_181_ = v___x_163_;
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
else
{
lean_inc(v_a_179_);
lean_dec(v___x_163_);
v___x_181_ = lean_box(0);
v_isShared_182_ = v_isSharedCheck_186_;
goto v_resetjp_180_;
}
v_resetjp_180_:
{
lean_object* v___x_184_; 
if (v_isShared_182_ == 0)
{
v___x_184_ = v___x_181_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_a_179_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
lean_dec(v_a_160_);
lean_dec_ref(v_params_157_);
lean_del_object(v___x_155_);
lean_dec_ref(v_k_153_);
lean_dec_ref(v_decl_152_);
lean_dec_ref(v_f_108_);
v_a_187_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_194_ == 0)
{
v___x_189_ = v___x_161_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_161_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_a_187_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
else
{
lean_dec_ref(v_params_157_);
lean_del_object(v___x_155_);
lean_dec_ref(v_k_153_);
lean_dec_ref(v_decl_152_);
lean_dec_ref(v_f_108_);
return v___x_159_;
}
}
}
case 3:
{
lean_object* v_fvarId_196_; uint8_t v___x_197_; 
lean_dec_ref(v_f_108_);
v_fvarId_196_ = lean_ctor_get(v_c_109_, 0);
v___x_197_ = l_Lean_FVarIdSet_contains(v___y_110_, v_fvarId_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1, &l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__1);
v___x_199_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(v___x_198_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_206_ == 0)
{
lean_object* v_unused_207_; 
v_unused_207_ = lean_ctor_get(v___x_199_, 0);
lean_dec(v_unused_207_);
v___x_201_ = v___x_199_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_dec(v___x_199_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v_c_109_);
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_c_109_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
else
{
lean_object* v_a_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_215_; 
lean_dec_ref_known(v_c_109_, 2);
v_a_208_ = lean_ctor_get(v___x_199_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_215_ == 0)
{
v___x_210_ = v___x_199_;
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_a_208_);
lean_dec(v___x_199_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_213_; 
if (v_isShared_211_ == 0)
{
v___x_213_ = v___x_210_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_a_208_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
else
{
lean_object* v___x_216_; 
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v_c_109_);
return v___x_216_;
}
}
case 4:
{
lean_object* v_cases_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_282_; 
v_cases_217_ = lean_ctor_get(v_c_109_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_282_ == 0)
{
v___x_219_ = v_c_109_;
v_isShared_220_ = v_isSharedCheck_282_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_cases_217_);
lean_dec(v_c_109_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_282_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v_typeName_221_; lean_object* v_discr_222_; lean_object* v_alts_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_280_; 
v_typeName_221_ = lean_ctor_get(v_cases_217_, 0);
v_discr_222_ = lean_ctor_get(v_cases_217_, 2);
v_alts_223_ = lean_ctor_get(v_cases_217_, 3);
v_isSharedCheck_280_ = !lean_is_exclusive(v_cases_217_);
if (v_isSharedCheck_280_ == 0)
{
lean_object* v_unused_281_; 
v_unused_281_ = lean_ctor_get(v_cases_217_, 1);
lean_dec(v_unused_281_);
v___x_225_ = v_cases_217_;
v_isShared_226_ = v_isSharedCheck_280_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_alts_223_);
lean_inc(v_discr_222_);
lean_inc(v_typeName_221_);
lean_dec(v_cases_217_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_280_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
size_t v_sz_227_; size_t v___x_228_; lean_object* v___x_229_; 
v_sz_227_ = lean_array_size(v_alts_223_);
v___x_228_ = ((size_t)0ULL);
v___x_229_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1(v_pu_107_, v_f_108_, v_sz_227_, v___x_228_, v_alts_223_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_229_) == 0)
{
lean_object* v_a_230_; lean_object* v___y_232_; lean_object* v___y_233_; lean_object* v___y_234_; lean_object* v___y_235_; lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v_a_230_ = lean_ctor_get(v___x_229_, 0);
lean_inc(v_a_230_);
lean_dec_ref_known(v___x_229_, 1);
v___x_259_ = lean_array_get_size(v_a_230_);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = lean_nat_dec_eq(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
v___y_232_ = v___y_111_;
v___y_233_ = v___y_112_;
v___y_234_ = v___y_113_;
v___y_235_ = v___y_114_;
goto v___jp_231_;
}
else
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3, &l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___closed__3);
v___x_263_ = l_Lean_throwError___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__0___redArg(v___x_262_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_dec_ref_known(v___x_263_, 1);
v___y_232_ = v___y_111_;
v___y_233_ = v___y_112_;
v___y_234_ = v___y_113_;
v___y_235_ = v___y_114_;
goto v___jp_231_;
}
else
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec(v_a_230_);
lean_del_object(v___x_225_);
lean_dec(v_discr_222_);
lean_dec(v_typeName_221_);
lean_del_object(v___x_219_);
v_a_264_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_263_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_263_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
v___jp_231_:
{
lean_object* v___x_236_; 
lean_inc(v_a_230_);
v___x_236_ = l_Lean_Compiler_LCNF_mkCasesResultType(v_pu_107_, v_a_230_, v___y_232_, v___y_233_, v___y_234_, v___y_235_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_250_; 
v_a_237_ = lean_ctor_get(v___x_236_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_250_ == 0)
{
v___x_239_ = v___x_236_;
v_isShared_240_ = v_isSharedCheck_250_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_236_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_250_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 3, v_a_230_);
lean_ctor_set(v___x_225_, 1, v_a_237_);
v___x_242_ = v___x_225_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_typeName_221_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v_a_237_);
lean_ctor_set(v_reuseFailAlloc_249_, 2, v_discr_222_);
lean_ctor_set(v_reuseFailAlloc_249_, 3, v_a_230_);
v___x_242_ = v_reuseFailAlloc_249_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
lean_object* v___x_244_; 
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 0, v___x_242_);
v___x_244_ = v___x_219_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_242_);
v___x_244_ = v_reuseFailAlloc_248_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
lean_object* v___x_246_; 
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 0, v___x_244_);
v___x_246_ = v___x_239_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v___x_244_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
}
else
{
lean_object* v_a_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_258_; 
lean_dec(v_a_230_);
lean_del_object(v___x_225_);
lean_dec(v_discr_222_);
lean_dec(v_typeName_221_);
lean_del_object(v___x_219_);
v_a_251_ = lean_ctor_get(v___x_236_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_258_ == 0)
{
v___x_253_ = v___x_236_;
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_a_251_);
lean_dec(v___x_236_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_258_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_256_; 
if (v_isShared_254_ == 0)
{
v___x_256_ = v___x_253_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_a_251_);
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
}
else
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_279_; 
lean_del_object(v___x_225_);
lean_dec(v_discr_222_);
lean_dec(v_typeName_221_);
lean_del_object(v___x_219_);
v_a_272_ = lean_ctor_get(v___x_229_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_229_);
if (v_isSharedCheck_279_ == 0)
{
v___x_274_ = v___x_229_;
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_229_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_279_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_277_; 
if (v_isShared_275_ == 0)
{
v___x_277_ = v___x_274_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_a_272_);
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
}
}
case 5:
{
lean_object* v_fvarId_283_; lean_object* v___x_284_; 
v_fvarId_283_ = lean_ctor_get(v_c_109_, 0);
lean_inc(v_fvarId_283_);
lean_dec_ref_known(v_c_109_, 1);
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
lean_inc(v___y_112_);
lean_inc_ref(v___y_111_);
v___x_284_ = lean_apply_6(v_f_108_, v_fvarId_283_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, lean_box(0));
return v___x_284_;
}
case 6:
{
lean_object* v_type_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_342_; 
v_type_285_ = lean_ctor_get(v_c_109_, 0);
v_isSharedCheck_342_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_342_ == 0)
{
v___x_287_ = v_c_109_;
v_isShared_288_ = v_isSharedCheck_342_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_type_285_);
lean_dec(v_c_109_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_342_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
uint8_t v___x_289_; lean_object* v___x_290_; 
v___x_289_ = 0;
v___x_290_ = l_Lean_Compiler_LCNF_mkAuxParam(v_pu_107_, v_type_285_, v___x_289_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; lean_object* v_fvarId_292_; lean_object* v___x_293_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_291_);
lean_dec_ref_known(v___x_290_, 1);
v_fvarId_292_ = lean_ctor_get(v_a_291_, 0);
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
lean_inc(v___y_112_);
lean_inc_ref(v___y_111_);
lean_inc(v_fvarId_292_);
v___x_293_ = lean_apply_6(v_f_108_, v_fvarId_292_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, lean_box(0));
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v_a_294_; lean_object* v___x_295_; 
v_a_294_ = lean_ctor_get(v___x_293_, 0);
lean_inc_n(v_a_294_, 2);
lean_dec_ref_known(v___x_293_, 1);
v___x_295_ = l_Lean_Compiler_LCNF_Code_inferType(v_pu_107_, v_a_294_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_295_) == 0)
{
lean_object* v_a_296_; lean_object* v___x_297_; 
v_a_296_ = lean_ctor_get(v___x_295_, 0);
lean_inc(v_a_296_);
lean_dec_ref_known(v___x_295_, 1);
v___x_297_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v_pu_107_, v_a_294_, v___y_112_);
lean_dec(v_a_294_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v___x_298_; 
lean_dec_ref_known(v___x_297_, 1);
v___x_298_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v_pu_107_, v_a_291_, v___y_112_);
lean_dec(v_a_291_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_308_; 
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_308_ == 0)
{
lean_object* v_unused_309_; 
v_unused_309_ = lean_ctor_get(v___x_298_, 0);
lean_dec(v_unused_309_);
v___x_300_ = v___x_298_;
v_isShared_301_ = v_isSharedCheck_308_;
goto v_resetjp_299_;
}
else
{
lean_dec(v___x_298_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_308_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v_a_296_);
v___x_303_ = v___x_287_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_296_);
v___x_303_ = v_reuseFailAlloc_307_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
lean_object* v___x_305_; 
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 0, v___x_303_);
v___x_305_ = v___x_300_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_303_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
else
{
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
lean_dec(v_a_296_);
lean_del_object(v___x_287_);
v_a_310_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_317_ == 0)
{
v___x_312_ = v___x_298_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_298_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_310_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
}
else
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
lean_dec(v_a_296_);
lean_dec(v_a_291_);
lean_del_object(v___x_287_);
v_a_318_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___x_297_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_297_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
else
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
lean_dec(v_a_294_);
lean_dec(v_a_291_);
lean_del_object(v___x_287_);
v_a_326_ = lean_ctor_get(v___x_295_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_295_);
if (v_isSharedCheck_333_ == 0)
{
v___x_328_ = v___x_295_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_295_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_a_326_);
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
else
{
lean_dec(v_a_291_);
lean_del_object(v___x_287_);
return v___x_293_;
}
}
else
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_341_; 
lean_del_object(v___x_287_);
lean_dec_ref(v_f_108_);
v_a_334_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_341_ == 0)
{
v___x_336_ = v___x_290_;
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_290_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_337_ == 0)
{
v___x_339_ = v___x_336_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_a_334_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
}
case 7:
{
lean_object* v_fvarId_343_; lean_object* v_i_344_; lean_object* v_y_345_; lean_object* v_k_346_; lean_object* v___x_347_; 
v_fvarId_343_ = lean_ctor_get(v_c_109_, 0);
v_i_344_ = lean_ctor_get(v_c_109_, 1);
v_y_345_ = lean_ctor_get(v_c_109_, 2);
v_k_346_ = lean_ctor_get(v_c_109_, 3);
lean_inc_ref(v_k_346_);
v___x_347_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_107_, v_f_108_, v_k_346_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_347_) == 0)
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_372_; 
v_a_348_ = lean_ctor_get(v___x_347_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_347_);
if (v_isSharedCheck_372_ == 0)
{
v___x_350_ = v___x_347_;
v_isShared_351_ = v_isSharedCheck_372_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_347_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_372_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
size_t v___x_352_; size_t v___x_353_; uint8_t v___x_354_; 
v___x_352_ = lean_ptr_addr(v_k_346_);
v___x_353_ = lean_ptr_addr(v_a_348_);
v___x_354_ = lean_usize_dec_eq(v___x_352_, v___x_353_);
if (v___x_354_ == 0)
{
lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_364_; 
lean_inc(v_y_345_);
lean_inc(v_i_344_);
lean_inc(v_fvarId_343_);
v_isSharedCheck_364_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_364_ == 0)
{
lean_object* v_unused_365_; lean_object* v_unused_366_; lean_object* v_unused_367_; lean_object* v_unused_368_; 
v_unused_365_ = lean_ctor_get(v_c_109_, 3);
lean_dec(v_unused_365_);
v_unused_366_ = lean_ctor_get(v_c_109_, 2);
lean_dec(v_unused_366_);
v_unused_367_ = lean_ctor_get(v_c_109_, 1);
lean_dec(v_unused_367_);
v_unused_368_ = lean_ctor_get(v_c_109_, 0);
lean_dec(v_unused_368_);
v___x_356_ = v_c_109_;
v_isShared_357_ = v_isSharedCheck_364_;
goto v_resetjp_355_;
}
else
{
lean_dec(v_c_109_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_364_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 3, v_a_348_);
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_fvarId_343_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v_i_344_);
lean_ctor_set(v_reuseFailAlloc_363_, 2, v_y_345_);
lean_ctor_set(v_reuseFailAlloc_363_, 3, v_a_348_);
v___x_359_ = v_reuseFailAlloc_363_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
lean_object* v___x_361_; 
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 0, v___x_359_);
v___x_361_ = v___x_350_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_359_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
else
{
lean_object* v___x_370_; 
lean_dec(v_a_348_);
if (v_isShared_351_ == 0)
{
lean_ctor_set(v___x_350_, 0, v_c_109_);
v___x_370_ = v___x_350_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_c_109_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_109_, 4);
return v___x_347_;
}
}
case 8:
{
lean_object* v_fvarId_373_; lean_object* v_i_374_; lean_object* v_y_375_; lean_object* v_k_376_; lean_object* v___x_377_; 
v_fvarId_373_ = lean_ctor_get(v_c_109_, 0);
v_i_374_ = lean_ctor_get(v_c_109_, 1);
v_y_375_ = lean_ctor_get(v_c_109_, 2);
v_k_376_ = lean_ctor_get(v_c_109_, 3);
lean_inc_ref(v_k_376_);
v___x_377_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_107_, v_f_108_, v_k_376_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_377_) == 0)
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_402_; 
v_a_378_ = lean_ctor_get(v___x_377_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_402_ == 0)
{
v___x_380_ = v___x_377_;
v_isShared_381_ = v_isSharedCheck_402_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_377_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_402_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
size_t v___x_382_; size_t v___x_383_; uint8_t v___x_384_; 
v___x_382_ = lean_ptr_addr(v_k_376_);
v___x_383_ = lean_ptr_addr(v_a_378_);
v___x_384_ = lean_usize_dec_eq(v___x_382_, v___x_383_);
if (v___x_384_ == 0)
{
lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_394_; 
lean_inc(v_y_375_);
lean_inc(v_i_374_);
lean_inc(v_fvarId_373_);
v_isSharedCheck_394_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_394_ == 0)
{
lean_object* v_unused_395_; lean_object* v_unused_396_; lean_object* v_unused_397_; lean_object* v_unused_398_; 
v_unused_395_ = lean_ctor_get(v_c_109_, 3);
lean_dec(v_unused_395_);
v_unused_396_ = lean_ctor_get(v_c_109_, 2);
lean_dec(v_unused_396_);
v_unused_397_ = lean_ctor_get(v_c_109_, 1);
lean_dec(v_unused_397_);
v_unused_398_ = lean_ctor_get(v_c_109_, 0);
lean_dec(v_unused_398_);
v___x_386_ = v_c_109_;
v_isShared_387_ = v_isSharedCheck_394_;
goto v_resetjp_385_;
}
else
{
lean_dec(v_c_109_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_394_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 3, v_a_378_);
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_fvarId_373_);
lean_ctor_set(v_reuseFailAlloc_393_, 1, v_i_374_);
lean_ctor_set(v_reuseFailAlloc_393_, 2, v_y_375_);
lean_ctor_set(v_reuseFailAlloc_393_, 3, v_a_378_);
v___x_389_ = v_reuseFailAlloc_393_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
lean_object* v___x_391_; 
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 0, v___x_389_);
v___x_391_ = v___x_380_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_389_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
else
{
lean_object* v___x_400_; 
lean_dec(v_a_378_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 0, v_c_109_);
v___x_400_ = v___x_380_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_c_109_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_109_, 4);
return v___x_377_;
}
}
case 9:
{
lean_object* v_fvarId_403_; lean_object* v_i_404_; lean_object* v_offset_405_; lean_object* v_y_406_; lean_object* v_ty_407_; lean_object* v_k_408_; lean_object* v___x_409_; 
v_fvarId_403_ = lean_ctor_get(v_c_109_, 0);
v_i_404_ = lean_ctor_get(v_c_109_, 1);
v_offset_405_ = lean_ctor_get(v_c_109_, 2);
v_y_406_ = lean_ctor_get(v_c_109_, 3);
v_ty_407_ = lean_ctor_get(v_c_109_, 4);
v_k_408_ = lean_ctor_get(v_c_109_, 5);
lean_inc_ref(v_k_408_);
v___x_409_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_107_, v_f_108_, v_k_408_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_436_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_436_ == 0)
{
v___x_412_ = v___x_409_;
v_isShared_413_ = v_isSharedCheck_436_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_409_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_436_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
size_t v___x_414_; size_t v___x_415_; uint8_t v___x_416_; 
v___x_414_ = lean_ptr_addr(v_k_408_);
v___x_415_ = lean_ptr_addr(v_a_410_);
v___x_416_ = lean_usize_dec_eq(v___x_414_, v___x_415_);
if (v___x_416_ == 0)
{
lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_426_; 
lean_inc_ref(v_ty_407_);
lean_inc(v_y_406_);
lean_inc(v_offset_405_);
lean_inc(v_i_404_);
lean_inc(v_fvarId_403_);
v_isSharedCheck_426_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_426_ == 0)
{
lean_object* v_unused_427_; lean_object* v_unused_428_; lean_object* v_unused_429_; lean_object* v_unused_430_; lean_object* v_unused_431_; lean_object* v_unused_432_; 
v_unused_427_ = lean_ctor_get(v_c_109_, 5);
lean_dec(v_unused_427_);
v_unused_428_ = lean_ctor_get(v_c_109_, 4);
lean_dec(v_unused_428_);
v_unused_429_ = lean_ctor_get(v_c_109_, 3);
lean_dec(v_unused_429_);
v_unused_430_ = lean_ctor_get(v_c_109_, 2);
lean_dec(v_unused_430_);
v_unused_431_ = lean_ctor_get(v_c_109_, 1);
lean_dec(v_unused_431_);
v_unused_432_ = lean_ctor_get(v_c_109_, 0);
lean_dec(v_unused_432_);
v___x_418_ = v_c_109_;
v_isShared_419_ = v_isSharedCheck_426_;
goto v_resetjp_417_;
}
else
{
lean_dec(v_c_109_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_426_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 5, v_a_410_);
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_fvarId_403_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_i_404_);
lean_ctor_set(v_reuseFailAlloc_425_, 2, v_offset_405_);
lean_ctor_set(v_reuseFailAlloc_425_, 3, v_y_406_);
lean_ctor_set(v_reuseFailAlloc_425_, 4, v_ty_407_);
lean_ctor_set(v_reuseFailAlloc_425_, 5, v_a_410_);
v___x_421_ = v_reuseFailAlloc_425_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
lean_object* v___x_423_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v___x_421_);
v___x_423_ = v___x_412_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v___x_421_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
else
{
lean_object* v___x_434_; 
lean_dec(v_a_410_);
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 0, v_c_109_);
v___x_434_ = v___x_412_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_c_109_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_109_, 6);
return v___x_409_;
}
}
case 10:
{
lean_object* v_fvarId_437_; lean_object* v_cidx_438_; lean_object* v_k_439_; lean_object* v___x_440_; 
v_fvarId_437_ = lean_ctor_get(v_c_109_, 0);
v_cidx_438_ = lean_ctor_get(v_c_109_, 1);
v_k_439_ = lean_ctor_get(v_c_109_, 2);
lean_inc_ref(v_k_439_);
v___x_440_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_107_, v_f_108_, v_k_439_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_464_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_464_ == 0)
{
v___x_443_ = v___x_440_;
v_isShared_444_ = v_isSharedCheck_464_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_464_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
size_t v___x_445_; size_t v___x_446_; uint8_t v___x_447_; 
v___x_445_ = lean_ptr_addr(v_k_439_);
v___x_446_ = lean_ptr_addr(v_a_441_);
v___x_447_ = lean_usize_dec_eq(v___x_445_, v___x_446_);
if (v___x_447_ == 0)
{
lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_457_; 
lean_inc(v_cidx_438_);
lean_inc(v_fvarId_437_);
v_isSharedCheck_457_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_457_ == 0)
{
lean_object* v_unused_458_; lean_object* v_unused_459_; lean_object* v_unused_460_; 
v_unused_458_ = lean_ctor_get(v_c_109_, 2);
lean_dec(v_unused_458_);
v_unused_459_ = lean_ctor_get(v_c_109_, 1);
lean_dec(v_unused_459_);
v_unused_460_ = lean_ctor_get(v_c_109_, 0);
lean_dec(v_unused_460_);
v___x_449_ = v_c_109_;
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
else
{
lean_dec(v_c_109_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 2, v_a_441_);
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_fvarId_437_);
lean_ctor_set(v_reuseFailAlloc_456_, 1, v_cidx_438_);
lean_ctor_set(v_reuseFailAlloc_456_, 2, v_a_441_);
v___x_452_ = v_reuseFailAlloc_456_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
lean_object* v___x_454_; 
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 0, v___x_452_);
v___x_454_ = v___x_443_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
else
{
lean_object* v___x_462_; 
lean_dec(v_a_441_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 0, v_c_109_);
v___x_462_ = v___x_443_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_c_109_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_109_, 3);
return v___x_440_;
}
}
case 11:
{
lean_object* v_fvarId_465_; lean_object* v_n_466_; uint8_t v_check_467_; uint8_t v_persistent_468_; lean_object* v_k_469_; lean_object* v___x_470_; 
v_fvarId_465_ = lean_ctor_get(v_c_109_, 0);
v_n_466_ = lean_ctor_get(v_c_109_, 1);
v_check_467_ = lean_ctor_get_uint8(v_c_109_, sizeof(void*)*3);
v_persistent_468_ = lean_ctor_get_uint8(v_c_109_, sizeof(void*)*3 + 1);
v_k_469_ = lean_ctor_get(v_c_109_, 2);
lean_inc_ref(v_k_469_);
v___x_470_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_107_, v_f_108_, v_k_469_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_494_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_494_ == 0)
{
v___x_473_ = v___x_470_;
v_isShared_474_ = v_isSharedCheck_494_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_470_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_494_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
size_t v___x_475_; size_t v___x_476_; uint8_t v___x_477_; 
v___x_475_ = lean_ptr_addr(v_k_469_);
v___x_476_ = lean_ptr_addr(v_a_471_);
v___x_477_ = lean_usize_dec_eq(v___x_475_, v___x_476_);
if (v___x_477_ == 0)
{
lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_487_; 
lean_inc(v_n_466_);
lean_inc(v_fvarId_465_);
v_isSharedCheck_487_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_487_ == 0)
{
lean_object* v_unused_488_; lean_object* v_unused_489_; lean_object* v_unused_490_; 
v_unused_488_ = lean_ctor_get(v_c_109_, 2);
lean_dec(v_unused_488_);
v_unused_489_ = lean_ctor_get(v_c_109_, 1);
lean_dec(v_unused_489_);
v_unused_490_ = lean_ctor_get(v_c_109_, 0);
lean_dec(v_unused_490_);
v___x_479_ = v_c_109_;
v_isShared_480_ = v_isSharedCheck_487_;
goto v_resetjp_478_;
}
else
{
lean_dec(v_c_109_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_487_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 2, v_a_471_);
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_fvarId_465_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v_n_466_);
lean_ctor_set(v_reuseFailAlloc_486_, 2, v_a_471_);
lean_ctor_set_uint8(v_reuseFailAlloc_486_, sizeof(void*)*3, v_check_467_);
lean_ctor_set_uint8(v_reuseFailAlloc_486_, sizeof(void*)*3 + 1, v_persistent_468_);
v___x_482_ = v_reuseFailAlloc_486_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
lean_object* v___x_484_; 
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 0, v___x_482_);
v___x_484_ = v___x_473_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v___x_482_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
else
{
lean_object* v___x_492_; 
lean_dec(v_a_471_);
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 0, v_c_109_);
v___x_492_ = v___x_473_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_c_109_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_109_, 3);
return v___x_470_;
}
}
case 12:
{
lean_object* v_fvarId_495_; lean_object* v_n_496_; uint8_t v_check_497_; uint8_t v_persistent_498_; lean_object* v_objs_x3f_499_; lean_object* v_k_500_; lean_object* v___x_501_; 
v_fvarId_495_ = lean_ctor_get(v_c_109_, 0);
v_n_496_ = lean_ctor_get(v_c_109_, 1);
v_check_497_ = lean_ctor_get_uint8(v_c_109_, sizeof(void*)*4);
v_persistent_498_ = lean_ctor_get_uint8(v_c_109_, sizeof(void*)*4 + 1);
v_objs_x3f_499_ = lean_ctor_get(v_c_109_, 2);
v_k_500_ = lean_ctor_get(v_c_109_, 3);
lean_inc_ref(v_k_500_);
v___x_501_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_107_, v_f_108_, v_k_500_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_526_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_526_ == 0)
{
v___x_504_ = v___x_501_;
v_isShared_505_ = v_isSharedCheck_526_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_501_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_526_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
size_t v___x_506_; size_t v___x_507_; uint8_t v___x_508_; 
v___x_506_ = lean_ptr_addr(v_k_500_);
v___x_507_ = lean_ptr_addr(v_a_502_);
v___x_508_ = lean_usize_dec_eq(v___x_506_, v___x_507_);
if (v___x_508_ == 0)
{
lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_518_; 
lean_inc(v_objs_x3f_499_);
lean_inc(v_n_496_);
lean_inc(v_fvarId_495_);
v_isSharedCheck_518_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_518_ == 0)
{
lean_object* v_unused_519_; lean_object* v_unused_520_; lean_object* v_unused_521_; lean_object* v_unused_522_; 
v_unused_519_ = lean_ctor_get(v_c_109_, 3);
lean_dec(v_unused_519_);
v_unused_520_ = lean_ctor_get(v_c_109_, 2);
lean_dec(v_unused_520_);
v_unused_521_ = lean_ctor_get(v_c_109_, 1);
lean_dec(v_unused_521_);
v_unused_522_ = lean_ctor_get(v_c_109_, 0);
lean_dec(v_unused_522_);
v___x_510_ = v_c_109_;
v_isShared_511_ = v_isSharedCheck_518_;
goto v_resetjp_509_;
}
else
{
lean_dec(v_c_109_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_518_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 3, v_a_502_);
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_fvarId_495_);
lean_ctor_set(v_reuseFailAlloc_517_, 1, v_n_496_);
lean_ctor_set(v_reuseFailAlloc_517_, 2, v_objs_x3f_499_);
lean_ctor_set(v_reuseFailAlloc_517_, 3, v_a_502_);
lean_ctor_set_uint8(v_reuseFailAlloc_517_, sizeof(void*)*4, v_check_497_);
lean_ctor_set_uint8(v_reuseFailAlloc_517_, sizeof(void*)*4 + 1, v_persistent_498_);
v___x_513_ = v_reuseFailAlloc_517_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
lean_object* v___x_515_; 
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v___x_513_);
v___x_515_ = v___x_504_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_513_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
else
{
lean_object* v___x_524_; 
lean_dec(v_a_502_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v_c_109_);
v___x_524_ = v___x_504_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_c_109_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_109_, 4);
return v___x_501_;
}
}
default: 
{
lean_object* v_fvarId_527_; lean_object* v_k_528_; lean_object* v___x_529_; 
v_fvarId_527_ = lean_ctor_get(v_c_109_, 0);
v_k_528_ = lean_ctor_get(v_c_109_, 1);
lean_inc_ref(v_k_528_);
v___x_529_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_107_, v_f_108_, v_k_528_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
if (lean_obj_tag(v___x_529_) == 0)
{
lean_object* v_a_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_552_; 
v_a_530_ = lean_ctor_get(v___x_529_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_529_);
if (v_isSharedCheck_552_ == 0)
{
v___x_532_ = v___x_529_;
v_isShared_533_ = v_isSharedCheck_552_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_a_530_);
lean_dec(v___x_529_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_552_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
size_t v___x_534_; size_t v___x_535_; uint8_t v___x_536_; 
v___x_534_ = lean_ptr_addr(v_k_528_);
v___x_535_ = lean_ptr_addr(v_a_530_);
v___x_536_ = lean_usize_dec_eq(v___x_534_, v___x_535_);
if (v___x_536_ == 0)
{
lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_546_; 
lean_inc(v_fvarId_527_);
v_isSharedCheck_546_ = !lean_is_exclusive(v_c_109_);
if (v_isSharedCheck_546_ == 0)
{
lean_object* v_unused_547_; lean_object* v_unused_548_; 
v_unused_547_ = lean_ctor_get(v_c_109_, 1);
lean_dec(v_unused_547_);
v_unused_548_ = lean_ctor_get(v_c_109_, 0);
lean_dec(v_unused_548_);
v___x_538_ = v_c_109_;
v_isShared_539_ = v_isSharedCheck_546_;
goto v_resetjp_537_;
}
else
{
lean_dec(v_c_109_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_546_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 1, v_a_530_);
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_fvarId_527_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_a_530_);
v___x_541_ = v_reuseFailAlloc_545_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_543_; 
if (v_isShared_533_ == 0)
{
lean_ctor_set(v___x_532_, 0, v___x_541_);
v___x_543_ = v___x_532_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
else
{
lean_object* v___x_550_; 
lean_dec(v_a_530_);
if (v_isShared_533_ == 0)
{
lean_ctor_set(v___x_532_, 0, v_c_109_);
v___x_550_ = v___x_532_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_c_109_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
else
{
lean_dec_ref_known(v_c_109_, 2);
return v___x_529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1(uint8_t v_pu_553_, lean_object* v_f_554_, size_t v_sz_555_, size_t v_i_556_, lean_object* v_bs_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_){
_start:
{
uint8_t v___x_564_; 
v___x_564_ = lean_usize_dec_lt(v_i_556_, v_sz_555_);
if (v___x_564_ == 0)
{
lean_object* v___x_565_; 
lean_dec_ref(v_f_554_);
v___x_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_565_, 0, v_bs_557_);
return v___x_565_;
}
else
{
lean_object* v_v_566_; lean_object* v___x_567_; lean_object* v_bs_x27_568_; lean_object* v_a_570_; 
v_v_566_ = lean_array_uget(v_bs_557_, v_i_556_);
v___x_567_ = lean_unsigned_to_nat(0u);
v_bs_x27_568_ = lean_array_uset(v_bs_557_, v_i_556_, v___x_567_);
switch(lean_obj_tag(v_v_566_))
{
case 0:
{
lean_object* v_ctorName_575_; lean_object* v_params_576_; lean_object* v_code_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_594_; 
v_ctorName_575_ = lean_ctor_get(v_v_566_, 0);
v_params_576_ = lean_ctor_get(v_v_566_, 1);
v_code_577_ = lean_ctor_get(v_v_566_, 2);
v_isSharedCheck_594_ = !lean_is_exclusive(v_v_566_);
if (v_isSharedCheck_594_ == 0)
{
v___x_579_ = v_v_566_;
v_isShared_580_ = v_isSharedCheck_594_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_code_577_);
lean_inc(v_params_576_);
lean_inc(v_ctorName_575_);
lean_dec(v_v_566_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_594_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_581_; 
lean_inc_ref(v_f_554_);
v___x_581_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_553_, v_f_554_, v_code_577_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; lean_object* v___x_584_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_581_, 1);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 2, v_a_582_);
v___x_584_ = v___x_579_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_ctorName_575_);
lean_ctor_set(v_reuseFailAlloc_585_, 1, v_params_576_);
lean_ctor_set(v_reuseFailAlloc_585_, 2, v_a_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
v_a_570_ = v___x_584_;
goto v___jp_569_;
}
}
else
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
lean_del_object(v___x_579_);
lean_dec_ref(v_params_576_);
lean_dec(v_ctorName_575_);
lean_dec_ref(v_bs_x27_568_);
lean_dec_ref(v_f_554_);
v_a_586_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_581_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_581_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
}
case 1:
{
lean_object* v_info_595_; lean_object* v_code_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_613_; 
v_info_595_ = lean_ctor_get(v_v_566_, 0);
v_code_596_ = lean_ctor_get(v_v_566_, 1);
v_isSharedCheck_613_ = !lean_is_exclusive(v_v_566_);
if (v_isSharedCheck_613_ == 0)
{
v___x_598_ = v_v_566_;
v_isShared_599_ = v_isSharedCheck_613_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_code_596_);
lean_inc(v_info_595_);
lean_dec(v_v_566_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_613_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_600_; 
lean_inc_ref(v_f_554_);
v___x_600_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_553_, v_f_554_, v_code_596_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_603_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_a_601_);
lean_dec_ref_known(v___x_600_, 1);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 1, v_a_601_);
v___x_603_ = v___x_598_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_info_595_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v_a_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
v_a_570_ = v___x_603_;
goto v___jp_569_;
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_del_object(v___x_598_);
lean_dec_ref(v_info_595_);
lean_dec_ref(v_bs_x27_568_);
lean_dec_ref(v_f_554_);
v_a_605_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_600_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_600_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
}
default: 
{
lean_object* v_code_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_631_; 
v_code_614_ = lean_ctor_get(v_v_566_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v_v_566_);
if (v_isSharedCheck_631_ == 0)
{
v___x_616_ = v_v_566_;
v_isShared_617_ = v_isSharedCheck_631_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_code_614_);
lean_dec(v_v_566_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_631_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_618_; 
lean_inc_ref(v_f_554_);
v___x_618_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_553_, v_f_554_, v_code_614_, v___y_558_, v___y_559_, v___y_560_, v___y_561_, v___y_562_);
if (lean_obj_tag(v___x_618_) == 0)
{
lean_object* v_a_619_; lean_object* v___x_621_; 
v_a_619_ = lean_ctor_get(v___x_618_, 0);
lean_inc(v_a_619_);
lean_dec_ref_known(v___x_618_, 1);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 0, v_a_619_);
v___x_621_ = v___x_616_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_619_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
v_a_570_ = v___x_621_;
goto v___jp_569_;
}
}
else
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
lean_del_object(v___x_616_);
lean_dec_ref(v_bs_x27_568_);
lean_dec_ref(v_f_554_);
v_a_623_ = lean_ctor_get(v___x_618_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_618_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_618_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_618_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
}
v___jp_569_:
{
size_t v___x_571_; size_t v___x_572_; lean_object* v___x_573_; 
v___x_571_ = ((size_t)1ULL);
v___x_572_ = lean_usize_add(v_i_556_, v___x_571_);
v___x_573_ = lean_array_uset(v_bs_x27_568_, v_i_556_, v_a_570_);
v_i_556_ = v___x_572_;
v_bs_557_ = v___x_573_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1___boxed(lean_object* v_pu_632_, lean_object* v_f_633_, lean_object* v_sz_634_, lean_object* v_i_635_, lean_object* v_bs_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
uint8_t v_pu_boxed_643_; size_t v_sz_boxed_644_; size_t v_i_boxed_645_; lean_object* v_res_646_; 
v_pu_boxed_643_ = lean_unbox(v_pu_632_);
v_sz_boxed_644_ = lean_unbox_usize(v_sz_634_);
lean_dec(v_sz_634_);
v_i_boxed_645_ = lean_unbox_usize(v_i_635_);
lean_dec(v_i_635_);
v_res_646_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go_spec__1(v_pu_boxed_643_, v_f_633_, v_sz_boxed_644_, v_i_boxed_645_, v_bs_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v___y_637_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go___boxed(lean_object* v_pu_647_, lean_object* v_f_648_, lean_object* v_c_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
uint8_t v_pu_boxed_656_; lean_object* v_res_657_; 
v_pu_boxed_656_ = lean_unbox(v_pu_647_);
v_res_657_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_boxed_656_, v_f_648_, v_c_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_);
lean_dec(v___y_654_);
lean_dec_ref(v___y_653_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec(v___y_650_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind(uint8_t v_pu_658_, lean_object* v_c_659_, lean_object* v_f_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_, lean_object* v___y_664_){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_666_ = lean_box(1);
v___x_667_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_CompilerM_codeBind_go(v_pu_658_, v_f_660_, v_c_659_, v___x_666_, v___y_661_, v___y_662_, v___y_663_, v___y_664_);
return v___x_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_codeBind___boxed(lean_object* v_pu_668_, lean_object* v_c_669_, lean_object* v_f_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
uint8_t v_pu_boxed_676_; lean_object* v_res_677_; 
v_pu_boxed_676_ = lean_unbox(v_pu_668_);
v_res_677_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v_pu_boxed_676_, v_c_669_, v_f_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0(lean_object* v_f_680_, lean_object* v___y_681_, lean_object* v_fvarId_682_){
_start:
{
lean_object* v___x_683_; 
lean_inc(v___y_681_);
v___x_683_ = lean_apply_2(v_f_680_, v_fvarId_682_, v___y_681_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0___boxed(lean_object* v_f_684_, lean_object* v___y_685_, lean_object* v_fvarId_686_){
_start:
{
lean_object* v_res_687_; 
v_res_687_ = l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0(v_f_684_, v___y_685_, v_fvarId_686_);
lean_dec(v___y_685_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1(lean_object* v_inst_688_, uint8_t v_pu_689_, lean_object* v_c_690_, lean_object* v_f_691_, lean_object* v___y_692_){
_start:
{
lean_object* v___f_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
lean_inc(v___y_692_);
v___f_693_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_693_, 0, v_f_691_);
lean_closure_set(v___f_693_, 1, v___y_692_);
v___x_694_ = lean_box(v_pu_689_);
v___x_695_ = lean_apply_3(v_inst_688_, v___x_694_, v_c_690_, v___f_693_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed(lean_object* v_inst_696_, lean_object* v_pu_697_, lean_object* v_c_698_, lean_object* v_f_699_, lean_object* v___y_700_){
_start:
{
uint8_t v_pu_37__boxed_701_; lean_object* v_res_702_; 
v_pu_37__boxed_701_ = lean_unbox(v_pu_697_);
v_res_702_ = l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1(v_inst_696_, v_pu_37__boxed_701_, v_c_698_, v_f_699_, v___y_700_);
lean_dec(v___y_700_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg(lean_object* v_inst_703_){
_start:
{
lean_object* v___f_704_; 
v___f_704_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_704_, 0, v_inst_703_);
return v___f_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindReaderT(lean_object* v_m_705_, lean_object* v_00_u03c1_706_, lean_object* v_inst_707_){
_start:
{
lean_object* v___f_708_; 
v___f_708_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_708_, 0, v_inst_707_);
return v___f_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld___redArg(lean_object* v_inst_709_){
_start:
{
lean_object* v___f_710_; 
v___f_710_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_710_, 0, v_inst_709_);
return v___f_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCodeBindStateRefT_x27OfSTWorld(lean_object* v_00_u03c9_711_, lean_object* v_m_712_, lean_object* v_00_u03c3_713_, lean_object* v_inst_714_, lean_object* v_inst_715_){
_start:
{
lean_object* v___f_716_; 
v___f_716_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadCodeBindReaderT___redArg___lam__1___boxed), 5, 1);
lean_closure_set(v___f_716_, 0, v_inst_715_);
return v___f_716_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(uint8_t v_pu_719_, lean_object* v_type_720_, lean_object* v_xs_721_, lean_object* v_ps_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
if (lean_obj_tag(v_type_720_) == 7)
{
lean_object* v_binderType_728_; lean_object* v_body_729_; lean_object* v_d_730_; uint8_t v___x_731_; lean_object* v___x_732_; 
v_binderType_728_ = lean_ctor_get(v_type_720_, 1);
lean_inc_ref(v_binderType_728_);
v_body_729_ = lean_ctor_get(v_type_720_, 2);
lean_inc_ref(v_body_729_);
lean_dec_ref_known(v_type_720_, 3);
v_d_730_ = lean_expr_instantiate_rev(v_binderType_728_, v_xs_721_);
lean_dec_ref(v_binderType_728_);
v___x_731_ = l_Lean_isMarkedBorrowed(v_d_730_);
v___x_732_ = l_Lean_Compiler_LCNF_mkAuxParam(v_pu_719_, v_d_730_, v___x_731_, v___y_723_, v___y_724_, v___y_725_, v___y_726_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; lean_object* v_fvarId_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_733_);
lean_dec_ref_known(v___x_732_, 1);
v_fvarId_734_ = lean_ctor_get(v_a_733_, 0);
lean_inc(v_fvarId_734_);
v___x_735_ = l_Lean_Expr_fvar___override(v_fvarId_734_);
v___x_736_ = lean_array_push(v_xs_721_, v___x_735_);
v___x_737_ = lean_array_push(v_ps_722_, v_a_733_);
v_type_720_ = v_body_729_;
v_xs_721_ = v___x_736_;
v_ps_722_ = v___x_737_;
goto _start;
}
else
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_dec_ref(v_body_729_);
lean_dec_ref(v_ps_722_);
lean_dec_ref(v_xs_721_);
v_a_739_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_732_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_732_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
else
{
lean_object* v_type_747_; lean_object* v_type_x27_748_; uint8_t v___x_749_; 
v_type_747_ = lean_expr_instantiate_rev(v_type_720_, v_xs_721_);
lean_dec_ref(v_xs_721_);
lean_dec_ref(v_type_720_);
lean_inc_ref(v_type_747_);
v_type_x27_748_ = l_Lean_Expr_headBeta(v_type_747_);
v___x_749_ = lean_expr_eqv(v_type_x27_748_, v_type_747_);
lean_dec_ref(v_type_747_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; 
v___x_750_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0));
v_type_720_ = v_type_x27_748_;
v_xs_721_ = v___x_750_;
goto _start;
}
else
{
lean_object* v___x_752_; 
lean_dec_ref(v_type_x27_748_);
v___x_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_752_, 0, v_ps_722_);
return v___x_752_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___boxed(lean_object* v_pu_753_, lean_object* v_type_754_, lean_object* v_xs_755_, lean_object* v_ps_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
uint8_t v_pu_boxed_762_; lean_object* v_res_763_; 
v_pu_boxed_762_ = lean_unbox(v_pu_753_);
v_res_763_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(v_pu_boxed_762_, v_type_754_, v_xs_755_, v_ps_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
lean_dec(v___y_760_);
lean_dec_ref(v___y_759_);
lean_dec(v___y_758_);
lean_dec_ref(v___y_757_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams(uint8_t v_pu_764_, lean_object* v_type_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go___closed__0));
v___x_772_ = l___private_Lean_Compiler_LCNF_Bind_0__Lean_Compiler_LCNF_mkNewParams_go(v_pu_764_, v_type_765_, v___x_771_, v___x_771_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkNewParams___boxed(lean_object* v_pu_773_, lean_object* v_type_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
uint8_t v_pu_boxed_780_; lean_object* v_res_781_; 
v_pu_boxed_780_ = lean_unbox(v_pu_773_);
v_res_781_ = l_Lean_Compiler_LCNF_mkNewParams(v_pu_boxed_780_, v_type_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
return v_res_781_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(lean_object* v_type_782_, lean_object* v_params_783_){
_start:
{
lean_object* v_typeArity_784_; lean_object* v_valueArity_785_; uint8_t v___x_786_; 
v_typeArity_784_ = l_Lean_Compiler_LCNF_getArrowArity(v_type_782_);
v_valueArity_785_ = lean_array_get_size(v_params_783_);
v___x_786_ = lean_nat_dec_lt(v_valueArity_785_, v_typeArity_784_);
lean_dec(v_typeArity_784_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isEtaExpandCandidateCore___boxed(lean_object* v_type_787_, lean_object* v_params_788_){
_start:
{
uint8_t v_res_789_; lean_object* v_r_790_; 
v_res_789_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_787_, v_params_788_);
lean_dec_ref(v_params_788_);
v_r_790_ = lean_box(v_res_789_);
return v_r_790_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate(lean_object* v_decl_791_){
_start:
{
lean_object* v_params_792_; lean_object* v_type_793_; uint8_t v___x_794_; 
v_params_792_ = lean_ctor_get(v_decl_791_, 2);
lean_inc_ref(v_params_792_);
v_type_793_ = lean_ctor_get(v_decl_791_, 3);
lean_inc_ref(v_type_793_);
lean_dec_ref(v_decl_791_);
v___x_794_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_793_, v_params_792_);
lean_dec_ref(v_params_792_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate___boxed(lean_object* v_decl_795_){
_start:
{
uint8_t v_res_796_; lean_object* v_r_797_; 
v_res_796_ = l_Lean_Compiler_LCNF_FunDecl_isEtaExpandCandidate(v_decl_795_);
v_r_797_ = lean_box(v_res_796_);
return v_r_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0(lean_object* v___x_801_, uint8_t v___x_802_, lean_object* v_fvarId_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_809_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_809_, 0, v_fvarId_803_);
lean_ctor_set(v___x_809_, 1, v___x_801_);
v___x_810_ = ((lean_object*)(l_Lean_Compiler_LCNF_etaExpandCore___lam__0___closed__1));
v___x_811_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_802_, v___x_809_, v___x_810_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_822_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_822_ == 0)
{
v___x_814_ = v___x_811_;
v_isShared_815_ = v_isSharedCheck_822_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_811_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_822_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v_fvarId_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_820_; 
v_fvarId_816_ = lean_ctor_get(v_a_812_, 0);
lean_inc(v_fvarId_816_);
v___x_817_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_817_, 0, v_fvarId_816_);
v___x_818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_818_, 0, v_a_812_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_818_);
v___x_820_ = v___x_814_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v___x_818_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
v_a_823_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_811_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_811_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___lam__0___boxed(lean_object* v___x_831_, lean_object* v___x_832_, lean_object* v_fvarId_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_){
_start:
{
uint8_t v___x_1059__boxed_839_; lean_object* v_res_840_; 
v___x_1059__boxed_839_ = lean_unbox(v___x_832_);
v_res_840_ = l_Lean_Compiler_LCNF_etaExpandCore___lam__0(v___x_831_, v___x_1059__boxed_839_, v_fvarId_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_);
lean_dec(v___y_837_);
lean_dec_ref(v___y_836_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(size_t v_sz_841_, size_t v_i_842_, lean_object* v_bs_843_){
_start:
{
uint8_t v___x_844_; 
v___x_844_ = lean_usize_dec_lt(v_i_842_, v_sz_841_);
if (v___x_844_ == 0)
{
return v_bs_843_;
}
else
{
lean_object* v_v_845_; lean_object* v_fvarId_846_; lean_object* v___x_847_; lean_object* v_bs_x27_848_; lean_object* v___x_849_; size_t v___x_850_; size_t v___x_851_; lean_object* v___x_852_; 
v_v_845_ = lean_array_uget_borrowed(v_bs_843_, v_i_842_);
v_fvarId_846_ = lean_ctor_get(v_v_845_, 0);
lean_inc(v_fvarId_846_);
v___x_847_ = lean_unsigned_to_nat(0u);
v_bs_x27_848_ = lean_array_uset(v_bs_843_, v_i_842_, v___x_847_);
v___x_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_849_, 0, v_fvarId_846_);
v___x_850_ = ((size_t)1ULL);
v___x_851_ = lean_usize_add(v_i_842_, v___x_850_);
v___x_852_ = lean_array_uset(v_bs_x27_848_, v_i_842_, v___x_849_);
v_i_842_ = v___x_851_;
v_bs_843_ = v___x_852_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1___boxed(lean_object* v_sz_854_, lean_object* v_i_855_, lean_object* v_bs_856_){
_start:
{
size_t v_sz_boxed_857_; size_t v_i_boxed_858_; lean_object* v_res_859_; 
v_sz_boxed_857_ = lean_unbox_usize(v_sz_854_);
lean_dec(v_sz_854_);
v_i_boxed_858_ = lean_unbox_usize(v_i_855_);
lean_dec(v_i_855_);
v_res_859_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(v_sz_boxed_857_, v_i_boxed_858_, v_bs_856_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(size_t v_sz_860_, size_t v_i_861_, lean_object* v_bs_862_){
_start:
{
uint8_t v___x_863_; 
v___x_863_ = lean_usize_dec_lt(v_i_861_, v_sz_860_);
if (v___x_863_ == 0)
{
return v_bs_862_;
}
else
{
lean_object* v_v_864_; lean_object* v_fvarId_865_; lean_object* v___x_866_; lean_object* v_bs_x27_867_; lean_object* v___x_868_; size_t v___x_869_; size_t v___x_870_; lean_object* v___x_871_; 
v_v_864_ = lean_array_uget_borrowed(v_bs_862_, v_i_861_);
v_fvarId_865_ = lean_ctor_get(v_v_864_, 0);
lean_inc(v_fvarId_865_);
v___x_866_ = lean_unsigned_to_nat(0u);
v_bs_x27_867_ = lean_array_uset(v_bs_862_, v_i_861_, v___x_866_);
v___x_868_ = l_Lean_mkFVar(v_fvarId_865_);
v___x_869_ = ((size_t)1ULL);
v___x_870_ = lean_usize_add(v_i_861_, v___x_869_);
v___x_871_ = lean_array_uset(v_bs_x27_867_, v_i_861_, v___x_868_);
v_i_861_ = v___x_870_;
v_bs_862_ = v___x_871_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0___boxed(lean_object* v_sz_873_, lean_object* v_i_874_, lean_object* v_bs_875_){
_start:
{
size_t v_sz_boxed_876_; size_t v_i_boxed_877_; lean_object* v_res_878_; 
v_sz_boxed_876_ = lean_unbox_usize(v_sz_873_);
lean_dec(v_sz_873_);
v_i_boxed_877_ = lean_unbox_usize(v_i_874_);
lean_dec(v_i_874_);
v_res_878_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(v_sz_boxed_876_, v_i_boxed_877_, v_bs_875_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore(lean_object* v_type_879_, lean_object* v_params_880_, lean_object* v_value_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_){
_start:
{
size_t v_sz_887_; size_t v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v_sz_887_ = lean_array_size(v_params_880_);
v___x_888_ = ((size_t)0ULL);
lean_inc_ref(v_params_880_);
v___x_889_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__0(v_sz_887_, v___x_888_, v_params_880_);
v___x_890_ = l_Lean_Compiler_LCNF_instantiateForall(v_type_879_, v___x_889_, v___y_884_, v___y_885_);
lean_dec_ref(v___x_889_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v_a_891_; uint8_t v___x_892_; lean_object* v___x_893_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc(v_a_891_);
lean_dec_ref_known(v___x_890_, 1);
v___x_892_ = 0;
v___x_893_ = l_Lean_Compiler_LCNF_mkNewParams(v___x_892_, v_a_891_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v_a_894_; lean_object* v___x_895_; size_t v_sz_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___f_899_; lean_object* v___x_900_; 
v_a_894_ = lean_ctor_get(v___x_893_, 0);
lean_inc(v_a_894_);
lean_dec_ref_known(v___x_893_, 1);
v___x_895_ = l_Array_append___redArg(v_params_880_, v_a_894_);
v_sz_896_ = lean_array_size(v_a_894_);
v___x_897_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_etaExpandCore_spec__1(v_sz_896_, v___x_888_, v_a_894_);
v___x_898_ = lean_box(v___x_892_);
v___f_899_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_etaExpandCore___lam__0___boxed), 8, 2);
lean_closure_set(v___f_899_, 0, v___x_897_);
lean_closure_set(v___f_899_, 1, v___x_898_);
v___x_900_ = l_Lean_Compiler_LCNF_CompilerM_codeBind(v___x_892_, v_value_881_, v___f_899_, v___y_882_, v___y_883_, v___y_884_, v___y_885_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_909_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_909_ == 0)
{
v___x_903_ = v___x_900_;
v_isShared_904_ = v_isSharedCheck_909_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_909_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_905_; lean_object* v___x_907_; 
v___x_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_895_);
lean_ctor_set(v___x_905_, 1, v_a_901_);
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 0, v___x_905_);
v___x_907_ = v___x_903_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_905_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
else
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
lean_dec_ref(v___x_895_);
v_a_910_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_900_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_900_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec_ref(v_value_881_);
lean_dec_ref(v_params_880_);
v_a_918_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_893_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_893_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec_ref(v_value_881_);
lean_dec_ref(v_params_880_);
v_a_926_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_890_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_890_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore___boxed(lean_object* v_type_934_, lean_object* v_params_935_, lean_object* v_value_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_Compiler_LCNF_etaExpandCore(v_type_934_, v_params_935_, v_value_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f(lean_object* v_type_943_, lean_object* v_params_944_, lean_object* v_value_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
uint8_t v___x_951_; 
lean_inc_ref(v_type_943_);
v___x_951_ = l_Lean_Compiler_LCNF_isEtaExpandCandidateCore(v_type_943_, v_params_944_);
if (v___x_951_ == 0)
{
lean_object* v___x_952_; lean_object* v___x_953_; 
lean_dec_ref(v_value_945_);
lean_dec_ref(v_params_944_);
lean_dec_ref(v_type_943_);
v___x_952_ = lean_box(0);
v___x_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
return v___x_953_;
}
else
{
lean_object* v___x_954_; 
v___x_954_ = l_Lean_Compiler_LCNF_etaExpandCore(v_type_943_, v_params_944_, v_value_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_);
if (lean_obj_tag(v___x_954_) == 0)
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_963_; 
v_a_955_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_963_ == 0)
{
v___x_957_ = v___x_954_;
v_isShared_958_ = v_isSharedCheck_963_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_954_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_963_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_959_; lean_object* v___x_961_; 
v___x_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_959_, 0, v_a_955_);
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 0, v___x_959_);
v___x_961_ = v___x_957_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v___x_959_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
else
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_971_; 
v_a_964_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_971_ == 0)
{
v___x_966_ = v___x_954_;
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_954_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_969_; 
if (v_isShared_967_ == 0)
{
v___x_969_ = v___x_966_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_a_964_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_etaExpandCore_x3f___boxed(lean_object* v_type_972_, lean_object* v_params_973_, lean_object* v_value_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_Lean_Compiler_LCNF_etaExpandCore_x3f(v_type_972_, v_params_973_, v_value_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
lean_dec(v___y_978_);
lean_dec_ref(v___y_977_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand(lean_object* v_decl_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v_params_987_; lean_object* v_type_988_; lean_object* v_value_989_; uint8_t v___x_990_; lean_object* v___x_991_; 
v_params_987_ = lean_ctor_get(v_decl_981_, 2);
v_type_988_ = lean_ctor_get(v_decl_981_, 3);
v_value_989_ = lean_ctor_get(v_decl_981_, 4);
v___x_990_ = 0;
lean_inc_ref(v_value_989_);
lean_inc_ref(v_params_987_);
lean_inc_ref(v_type_988_);
v___x_991_ = l_Lean_Compiler_LCNF_etaExpandCore_x3f(v_type_988_, v_params_987_, v_value_989_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1003_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_994_ = v___x_991_;
v_isShared_995_ = v_isSharedCheck_1003_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_991_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1003_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
if (lean_obj_tag(v_a_992_) == 1)
{
lean_object* v_val_996_; lean_object* v_fst_997_; lean_object* v_snd_998_; lean_object* v___x_999_; 
lean_inc_ref(v_type_988_);
lean_del_object(v___x_994_);
v_val_996_ = lean_ctor_get(v_a_992_, 0);
lean_inc(v_val_996_);
lean_dec_ref_known(v_a_992_, 1);
v_fst_997_ = lean_ctor_get(v_val_996_, 0);
lean_inc(v_fst_997_);
v_snd_998_ = lean_ctor_get(v_val_996_, 1);
lean_inc(v_snd_998_);
lean_dec(v_val_996_);
v___x_999_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_990_, v_decl_981_, v_type_988_, v_fst_997_, v_snd_998_, v___y_983_);
return v___x_999_;
}
else
{
lean_object* v___x_1001_; 
lean_dec(v_a_992_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v_decl_981_);
v___x_1001_ = v___x_994_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_decl_981_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec_ref(v_decl_981_);
v_a_1004_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_991_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_991_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_etaExpand___boxed(lean_object* v_decl_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lean_Compiler_LCNF_FunDecl_etaExpand(v_decl_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand(lean_object* v_decl_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v_value_1025_; 
v_value_1025_ = lean_ctor_get(v_decl_1019_, 1);
lean_inc_ref(v_value_1025_);
if (lean_obj_tag(v_value_1025_) == 0)
{
lean_object* v_toSignature_1026_; uint8_t v_recursive_1027_; lean_object* v_inlineAttr_x3f_1028_; lean_object* v_code_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1081_; 
v_toSignature_1026_ = lean_ctor_get(v_decl_1019_, 0);
lean_inc_ref(v_toSignature_1026_);
v_recursive_1027_ = lean_ctor_get_uint8(v_decl_1019_, sizeof(void*)*3);
v_inlineAttr_x3f_1028_ = lean_ctor_get(v_decl_1019_, 2);
v_code_1029_ = lean_ctor_get(v_value_1025_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v_value_1025_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1031_ = v_value_1025_;
v_isShared_1032_ = v_isSharedCheck_1081_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_code_1029_);
lean_dec(v_value_1025_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1081_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v_name_1033_; lean_object* v_levelParams_1034_; lean_object* v_type_1035_; lean_object* v_params_1036_; uint8_t v_safe_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1080_; 
v_name_1033_ = lean_ctor_get(v_toSignature_1026_, 0);
v_levelParams_1034_ = lean_ctor_get(v_toSignature_1026_, 1);
v_type_1035_ = lean_ctor_get(v_toSignature_1026_, 2);
v_params_1036_ = lean_ctor_get(v_toSignature_1026_, 3);
v_safe_1037_ = lean_ctor_get_uint8(v_toSignature_1026_, sizeof(void*)*4);
v_isSharedCheck_1080_ = !lean_is_exclusive(v_toSignature_1026_);
if (v_isSharedCheck_1080_ == 0)
{
v___x_1039_ = v_toSignature_1026_;
v_isShared_1040_ = v_isSharedCheck_1080_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_params_1036_);
lean_inc(v_type_1035_);
lean_inc(v_levelParams_1034_);
lean_inc(v_name_1033_);
lean_dec(v_toSignature_1026_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1080_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v___x_1041_; 
lean_inc_ref(v_type_1035_);
v___x_1041_ = l_Lean_Compiler_LCNF_etaExpandCore_x3f(v_type_1035_, v_params_1036_, v_code_1029_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1071_; 
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1044_ = v___x_1041_;
v_isShared_1045_ = v_isSharedCheck_1071_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1041_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1071_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
if (lean_obj_tag(v_a_1042_) == 1)
{
lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1064_; 
lean_inc(v_inlineAttr_x3f_1028_);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_decl_1019_);
if (v_isSharedCheck_1064_ == 0)
{
lean_object* v_unused_1065_; lean_object* v_unused_1066_; lean_object* v_unused_1067_; 
v_unused_1065_ = lean_ctor_get(v_decl_1019_, 2);
lean_dec(v_unused_1065_);
v_unused_1066_ = lean_ctor_get(v_decl_1019_, 1);
lean_dec(v_unused_1066_);
v_unused_1067_ = lean_ctor_get(v_decl_1019_, 0);
lean_dec(v_unused_1067_);
v___x_1047_ = v_decl_1019_;
v_isShared_1048_ = v_isSharedCheck_1064_;
goto v_resetjp_1046_;
}
else
{
lean_dec(v_decl_1019_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1064_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v_val_1049_; lean_object* v_fst_1050_; lean_object* v_snd_1051_; lean_object* v___x_1053_; 
v_val_1049_ = lean_ctor_get(v_a_1042_, 0);
lean_inc(v_val_1049_);
lean_dec_ref_known(v_a_1042_, 1);
v_fst_1050_ = lean_ctor_get(v_val_1049_, 0);
lean_inc(v_fst_1050_);
v_snd_1051_ = lean_ctor_get(v_val_1049_, 1);
lean_inc(v_snd_1051_);
lean_dec(v_val_1049_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 3, v_fst_1050_);
v___x_1053_ = v___x_1039_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_name_1033_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v_levelParams_1034_);
lean_ctor_set(v_reuseFailAlloc_1063_, 2, v_type_1035_);
lean_ctor_set(v_reuseFailAlloc_1063_, 3, v_fst_1050_);
lean_ctor_set_uint8(v_reuseFailAlloc_1063_, sizeof(void*)*4, v_safe_1037_);
v___x_1053_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
lean_object* v___x_1055_; 
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v_snd_1051_);
v___x_1055_ = v___x_1031_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_snd_1051_);
v___x_1055_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
lean_object* v___x_1057_; 
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 1, v___x_1055_);
lean_ctor_set(v___x_1047_, 0, v___x_1053_);
v___x_1057_ = v___x_1047_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1061_, 1, v___x_1055_);
lean_ctor_set(v_reuseFailAlloc_1061_, 2, v_inlineAttr_x3f_1028_);
lean_ctor_set_uint8(v_reuseFailAlloc_1061_, sizeof(void*)*3, v_recursive_1027_);
v___x_1057_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
lean_object* v___x_1059_; 
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 0, v___x_1057_);
v___x_1059_ = v___x_1044_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 1, 0);
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
}
else
{
lean_object* v___x_1069_; 
lean_dec(v_a_1042_);
lean_del_object(v___x_1039_);
lean_dec_ref(v_type_1035_);
lean_dec(v_levelParams_1034_);
lean_dec(v_name_1033_);
lean_del_object(v___x_1031_);
if (v_isShared_1045_ == 0)
{
lean_ctor_set(v___x_1044_, 0, v_decl_1019_);
v___x_1069_ = v___x_1044_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v_decl_1019_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
lean_del_object(v___x_1039_);
lean_dec_ref(v_type_1035_);
lean_dec(v_levelParams_1034_);
lean_dec(v_name_1033_);
lean_del_object(v___x_1031_);
lean_dec_ref(v_decl_1019_);
v_a_1072_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1041_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1041_);
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
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
else
{
lean_object* v___x_1082_; 
lean_dec_ref_known(v_value_1025_, 1);
v___x_1082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1082_, 0, v_decl_1019_);
return v___x_1082_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_etaExpand___boxed(lean_object* v_decl_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lean_Compiler_LCNF_Decl_etaExpand(v_decl_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
lean_dec(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
return v_res_1089_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Bind(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Bind(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Bind(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Bind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Bind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Bind(builtin);
}
#ifdef __cplusplus
}
#endif
