// Lean compiler output
// Module: Lean.Widget.Diff
// Imports: public import Lean.Widget.InteractiveGoal
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
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushNaryArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_SubExpr_Pos_pushNthBindingDomain(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Expr_getForallBodyMaxDepth(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_getFVarFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushNthBindingBody(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getForallBinderNames(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushBindingBody(lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushBindingDomain(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_pushProj(lean_object*);
lean_object* l_Lean_MetavarContext_findDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
lean_object* l_Lean_LocalContext_sanitizeNames(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldl___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_SubExpr_Pos_root;
lean_object* l_Lean_Widget_SubexprInfo_withDiffTag(uint8_t, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarIdSet_ofArray(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_SubExpr_Pos_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_instToStringString___lam__0___boxed(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "showTacticDiff"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(169, 112, 244, 47, 27, 57, 231, 91)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = "When true, interactive goals for tactics will be decorated with diffing information. "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__2_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__4_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__5_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Widget"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__7_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(238, 115, 46, 200, 151, 151, 185, 65)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Diff"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__9_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__10_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(236, 91, 159, 25, 73, 43, 233, 107)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__11_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(109, 1, 7, 240, 141, 39, 57, 92)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__12_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__6_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(216, 146, 105, 179, 45, 202, 141, 145)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__13_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__8_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(68, 86, 104, 123, 239, 160, 152, 136)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__14_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__0_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(194, 44, 177, 75, 219, 90, 236, 185)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "change"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "insert"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiffTag___closed__0_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__0_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__5, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__1_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___closed__2_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__0_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__1_value)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__7_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__2_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__3_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__4_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__5_value)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8_value;
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__8_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__6_value)}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "before: "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\nafter: "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__1_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__0_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3_value;
static const lean_closure_object l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__2_value),((lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__3_value)} };
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4_value;
LEAN_EXPORT const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___closed__4_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "should not happen"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "internal error: empty fvar list!"};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0_value;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Unknown goal "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Failed to find decl for "};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4;
static const lean_string_object l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5 = (const lean_object*)&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5_value;
static lean_once_cell_t l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unknown goal "};
static const lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(lean_object*, uint8_t, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7(uint8_t, lean_object*, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_72_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__1_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_73_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__3_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_74_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_initFn___closed__15_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_));
v___x_75_ = l_Lean_Option_register___at___00__private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4__spec__0(v___x_72_, v___x_73_, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4____boxed(lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_();
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___impl(uint8_t v_x_78_){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_79_ = lean_box(v_x_78_);
v___x_80_ = lean_obj_tag_nat(v___x_79_);
lean_dec(v___x_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___impl___boxed(lean_object* v_x_81_){
_start:
{
uint8_t v_x_4__boxed_82_; lean_object* v_res_83_; 
v_x_4__boxed_82_ = lean_unbox(v_x_81_);
v_res_83_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorIdx___impl(v_x_4__boxed_82_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg(lean_object* v_k_84_){
_start:
{
lean_inc(v_k_84_);
return v_k_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg___boxed(lean_object* v_k_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___redArg(v_k_85_);
lean_dec(v_k_85_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim(lean_object* v_motive_87_, lean_object* v_ctorIdx_88_, uint8_t v_t_89_, lean_object* v_h_90_, lean_object* v_k_91_){
_start:
{
lean_inc(v_k_91_);
return v_k_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim___boxed(lean_object* v_motive_92_, lean_object* v_ctorIdx_93_, lean_object* v_t_94_, lean_object* v_h_95_, lean_object* v_k_96_){
_start:
{
uint8_t v_t_boxed_97_; lean_object* v_res_98_; 
v_t_boxed_97_ = lean_unbox(v_t_94_);
v_res_98_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_ctorElim(v_motive_92_, v_ctorIdx_93_, v_t_boxed_97_, v_h_95_, v_k_96_);
lean_dec(v_k_96_);
lean_dec(v_ctorIdx_93_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg(lean_object* v_change_99_){
_start:
{
lean_inc(v_change_99_);
return v_change_99_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg___boxed(lean_object* v_change_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___redArg(v_change_100_);
lean_dec(v_change_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim(lean_object* v_motive_102_, uint8_t v_t_103_, lean_object* v_h_104_, lean_object* v_change_105_){
_start:
{
lean_inc(v_change_105_);
return v_change_105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim___boxed(lean_object* v_motive_106_, lean_object* v_t_107_, lean_object* v_h_108_, lean_object* v_change_109_){
_start:
{
uint8_t v_t_boxed_110_; lean_object* v_res_111_; 
v_t_boxed_110_ = lean_unbox(v_t_107_);
v_res_111_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_change_elim(v_motive_106_, v_t_boxed_110_, v_h_108_, v_change_109_);
lean_dec(v_change_109_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg(lean_object* v_delete_112_){
_start:
{
lean_inc(v_delete_112_);
return v_delete_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg___boxed(lean_object* v_delete_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___redArg(v_delete_113_);
lean_dec(v_delete_113_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim(lean_object* v_motive_115_, uint8_t v_t_116_, lean_object* v_h_117_, lean_object* v_delete_118_){
_start:
{
lean_inc(v_delete_118_);
return v_delete_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim___boxed(lean_object* v_motive_119_, lean_object* v_t_120_, lean_object* v_h_121_, lean_object* v_delete_122_){
_start:
{
uint8_t v_t_boxed_123_; lean_object* v_res_124_; 
v_t_boxed_123_ = lean_unbox(v_t_120_);
v_res_124_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_delete_elim(v_motive_119_, v_t_boxed_123_, v_h_121_, v_delete_122_);
lean_dec(v_delete_122_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg(lean_object* v_insert_125_){
_start:
{
lean_inc(v_insert_125_);
return v_insert_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg___boxed(lean_object* v_insert_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___redArg(v_insert_126_);
lean_dec(v_insert_126_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim(lean_object* v_motive_128_, uint8_t v_t_129_, lean_object* v_h_130_, lean_object* v_insert_131_){
_start:
{
lean_inc(v_insert_131_);
return v_insert_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim___boxed(lean_object* v_motive_132_, lean_object* v_t_133_, lean_object* v_h_134_, lean_object* v_insert_135_){
_start:
{
uint8_t v_t_boxed_136_; lean_object* v_res_137_; 
v_t_boxed_136_ = lean_unbox(v_t_133_);
v_res_137_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_insert_elim(v_motive_132_, v_t_boxed_136_, v_h_134_, v_insert_135_);
lean_dec(v_insert_135_);
return v_res_137_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(uint8_t v_x_138_, uint8_t v_x_139_){
_start:
{
if (v_x_138_ == 0)
{
switch(v_x_139_)
{
case 0:
{
uint8_t v___x_140_; 
v___x_140_ = 1;
return v___x_140_;
}
case 1:
{
uint8_t v___x_141_; 
v___x_141_ = 3;
return v___x_141_;
}
default: 
{
uint8_t v___x_142_; 
v___x_142_ = 5;
return v___x_142_;
}
}
}
else
{
switch(v_x_139_)
{
case 0:
{
uint8_t v___x_143_; 
v___x_143_ = 0;
return v___x_143_;
}
case 1:
{
uint8_t v___x_144_; 
v___x_144_ = 2;
return v___x_144_;
}
default: 
{
uint8_t v___x_145_; 
v___x_145_ = 4;
return v___x_145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag___boxed(lean_object* v_x_146_, lean_object* v_x_147_){
_start:
{
uint8_t v_x_49__boxed_148_; uint8_t v_x_50__boxed_149_; uint8_t v_res_150_; lean_object* v_r_151_; 
v_x_49__boxed_148_ = lean_unbox(v_x_146_);
v_x_50__boxed_149_ = lean_unbox(v_x_147_);
v_res_150_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(v_x_49__boxed_148_, v_x_50__boxed_149_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(uint8_t v_x_155_){
_start:
{
switch(v_x_155_)
{
case 0:
{
lean_object* v___x_156_; 
v___x_156_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__0));
return v___x_156_;
}
case 1:
{
lean_object* v___x_157_; 
v___x_157_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__1));
return v___x_157_;
}
default: 
{
lean_object* v___x_158_; 
v___x_158_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___closed__2));
return v___x_158_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString___boxed(lean_object* v_x_159_){
_start:
{
uint8_t v_x_31__boxed_160_; lean_object* v_res_161_; 
v_x_31__boxed_160_ = lean_unbox(v_x_159_);
v_res_161_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(v_x_31__boxed_160_);
return v_res_161_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0(lean_object* v_x_167_, lean_object* v_y_168_){
_start:
{
uint8_t v___x_169_; 
v___x_169_ = lean_nat_dec_lt(v_x_167_, v_y_168_);
if (v___x_169_ == 0)
{
uint8_t v___x_170_; 
v___x_170_ = lean_nat_dec_eq(v_x_167_, v_y_168_);
if (v___x_170_ == 0)
{
uint8_t v___x_171_; 
v___x_171_ = 2;
return v___x_171_;
}
else
{
uint8_t v___x_172_; 
v___x_172_ = 1;
return v___x_172_;
}
}
else
{
uint8_t v___x_173_; 
v___x_173_ = 0;
return v___x_173_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0___boxed(lean_object* v_x_174_, lean_object* v_y_175_){
_start:
{
uint8_t v_res_176_; lean_object* v_r_177_; 
v_res_176_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__0(v_x_174_, v_y_175_);
lean_dec(v_y_175_);
lean_dec(v_x_174_);
v_r_177_ = lean_box(v_res_176_);
return v_r_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1(uint8_t v_b_u2082_178_, lean_object* v_x_179_){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_box(v_b_u2082_178_);
v___x_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1___boxed(lean_object* v_b_u2082_182_, lean_object* v_x_183_){
_start:
{
uint8_t v_b_u2082_boxed_184_; lean_object* v_res_185_; 
v_b_u2082_boxed_184_ = lean_unbox(v_b_u2082_182_);
v_res_185_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1(v_b_u2082_boxed_184_, v_x_183_);
lean_dec(v_x_183_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2(lean_object* v___f_186_, lean_object* v_t_187_, lean_object* v_a_188_, uint8_t v_b_u2082_189_){
_start:
{
lean_object* v___x_190_; lean_object* v___f_191_; lean_object* v___x_192_; 
v___x_190_ = lean_box(v_b_u2082_189_);
v___f_191_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__1___boxed), 2, 1);
lean_closure_set(v___f_191_, 0, v___x_190_);
v___x_192_ = l_Std_DTreeMap_Internal_Impl_Const_alter___redArg(v___f_186_, v_a_188_, v___f_191_, v_t_187_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2___boxed(lean_object* v___f_193_, lean_object* v_t_194_, lean_object* v_a_195_, lean_object* v_b_u2082_196_){
_start:
{
uint8_t v_b_u2082_boxed_197_; lean_object* v_res_198_; 
v_b_u2082_boxed_197_ = lean_unbox(v_b_u2082_196_);
v_res_198_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__2(v___f_193_, v_t_194_, v_a_195_, v_b_u2082_boxed_197_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instAppendExprDiff___lam__5(lean_object* v___f_199_, lean_object* v___f_200_, lean_object* v_a_201_, lean_object* v_b_202_){
_start:
{
lean_object* v_changesBefore_203_; lean_object* v_changesAfter_204_; lean_object* v_changesBefore_205_; lean_object* v_changesAfter_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_215_; 
v_changesBefore_203_ = lean_ctor_get(v_a_201_, 0);
lean_inc(v_changesBefore_203_);
v_changesAfter_204_ = lean_ctor_get(v_a_201_, 1);
lean_inc(v_changesAfter_204_);
lean_dec_ref(v_a_201_);
v_changesBefore_205_ = lean_ctor_get(v_b_202_, 0);
v_changesAfter_206_ = lean_ctor_get(v_b_202_, 1);
v_isSharedCheck_215_ = !lean_is_exclusive(v_b_202_);
if (v_isSharedCheck_215_ == 0)
{
v___x_208_ = v_b_202_;
v_isShared_209_ = v_isSharedCheck_215_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_changesAfter_206_);
lean_inc(v_changesBefore_205_);
lean_dec(v_b_202_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_215_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_213_; 
v___x_210_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_199_, v_changesBefore_203_, v_changesBefore_205_);
v___x_211_ = l_Std_DTreeMap_Internal_Impl_foldl___redArg(v___f_200_, v_changesAfter_204_, v_changesAfter_206_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 1, v___x_211_);
lean_ctor_set(v___x_208_, 0, v___x_210_);
v___x_213_ = v___x_208_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_214_, 1, v___x_211_);
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
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0(lean_object* v_x_225_){
_start:
{
lean_object* v_fst_226_; lean_object* v_snd_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v_fst_226_ = lean_ctor_get(v_x_225_, 0);
v_snd_227_ = lean_ctor_get(v_x_225_, 1);
v___x_228_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__0));
v___x_229_ = l_Lean_SubExpr_Pos_toString(v_fst_226_);
v___x_230_ = lean_string_append(v___x_228_, v___x_229_);
lean_dec_ref(v___x_229_);
v___x_231_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__1));
v___x_232_ = lean_string_append(v___x_230_, v___x_231_);
v___x_233_ = lean_unbox(v_snd_227_);
v___x_234_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toString(v___x_233_);
v___x_235_ = lean_string_append(v___x_232_, v___x_234_);
lean_dec_ref(v___x_234_);
v___x_236_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___closed__2));
v___x_237_ = lean_string_append(v___x_235_, v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0___boxed(lean_object* v_x_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__0(v_x_238_);
lean_dec_ref(v_x_238_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1(lean_object* v_x1_240_, uint8_t v_x2_241_, lean_object* v_x3_242_){
_start:
{
lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_243_ = lean_box(v_x2_241_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v_x1_240_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set(v___x_245_, 1, v_x3_242_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1___boxed(lean_object* v_x1_246_, lean_object* v_x2_247_, lean_object* v_x3_248_){
_start:
{
uint8_t v_x2_245__boxed_249_; lean_object* v_res_250_; 
v_x2_245__boxed_249_ = lean_unbox(v_x2_247_);
v_res_250_ = l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__1(v_x1_246_, v_x2_245__boxed_249_, v_x3_248_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2(lean_object* v___f_270_, lean_object* v___f_271_, lean_object* v_p_272_){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_273_ = lean_box(0);
v___x_274_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__2___closed__9));
v___x_275_ = l_Std_DTreeMap_Internal_Impl_foldrM___redArg(v___x_274_, v___f_270_, v___x_273_, v_p_272_);
v___x_276_ = l_List_mapTR_loop___redArg(v___f_271_, v___x_275_, v___x_273_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3(lean_object* v_f_279_, lean_object* v___f_280_, lean_object* v_x_281_){
_start:
{
lean_object* v_changesBefore_282_; lean_object* v_changesAfter_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v_changesBefore_282_ = lean_ctor_get(v_x_281_, 0);
lean_inc(v_changesBefore_282_);
v_changesAfter_283_ = lean_ctor_get(v_x_281_, 1);
lean_inc(v_changesAfter_283_);
lean_dec_ref(v_x_281_);
v___x_284_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__0));
lean_inc_ref(v_f_279_);
v___x_285_ = lean_apply_1(v_f_279_, v_changesBefore_282_);
lean_inc_ref(v___f_280_);
v___x_286_ = l_List_toString___redArg(v___f_280_, v___x_285_);
v___x_287_ = lean_string_append(v___x_284_, v___x_286_);
lean_dec_ref(v___x_286_);
v___x_288_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instToStringExprDiff___lam__3___closed__1));
v___x_289_ = lean_string_append(v___x_287_, v___x_288_);
v___x_290_ = lean_apply_1(v_f_279_, v_changesAfter_283_);
v___x_291_ = l_List_toString___redArg(v___f_280_, v___x_290_);
v___x_292_ = lean_string_append(v___x_289_, v___x_291_);
lean_dec_ref(v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(lean_object* v_k_303_, lean_object* v_v_304_, lean_object* v_t_305_){
_start:
{
if (lean_obj_tag(v_t_305_) == 0)
{
lean_object* v_size_306_; lean_object* v_k_307_; lean_object* v_v_308_; lean_object* v_l_309_; lean_object* v_r_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_591_; 
v_size_306_ = lean_ctor_get(v_t_305_, 0);
v_k_307_ = lean_ctor_get(v_t_305_, 1);
v_v_308_ = lean_ctor_get(v_t_305_, 2);
v_l_309_ = lean_ctor_get(v_t_305_, 3);
v_r_310_ = lean_ctor_get(v_t_305_, 4);
v_isSharedCheck_591_ = !lean_is_exclusive(v_t_305_);
if (v_isSharedCheck_591_ == 0)
{
v___x_312_ = v_t_305_;
v_isShared_313_ = v_isSharedCheck_591_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_r_310_);
lean_inc(v_l_309_);
lean_inc(v_v_308_);
lean_inc(v_k_307_);
lean_inc(v_size_306_);
lean_dec(v_t_305_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_591_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
uint8_t v___x_314_; 
v___x_314_ = lean_nat_dec_lt(v_k_303_, v_k_307_);
if (v___x_314_ == 0)
{
uint8_t v___x_315_; 
v___x_315_ = lean_nat_dec_eq(v_k_303_, v_k_307_);
if (v___x_315_ == 0)
{
lean_object* v_impl_316_; lean_object* v___x_317_; 
lean_dec(v_size_306_);
v_impl_316_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_303_, v_v_304_, v_r_310_);
v___x_317_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_309_) == 0)
{
lean_object* v_size_318_; lean_object* v_size_319_; lean_object* v_k_320_; lean_object* v_v_321_; lean_object* v_l_322_; lean_object* v_r_323_; lean_object* v___x_324_; lean_object* v___x_325_; uint8_t v___x_326_; 
v_size_318_ = lean_ctor_get(v_l_309_, 0);
v_size_319_ = lean_ctor_get(v_impl_316_, 0);
v_k_320_ = lean_ctor_get(v_impl_316_, 1);
v_v_321_ = lean_ctor_get(v_impl_316_, 2);
v_l_322_ = lean_ctor_get(v_impl_316_, 3);
lean_inc(v_l_322_);
v_r_323_ = lean_ctor_get(v_impl_316_, 4);
v___x_324_ = lean_unsigned_to_nat(3u);
v___x_325_ = lean_nat_mul(v___x_324_, v_size_318_);
v___x_326_ = lean_nat_dec_lt(v___x_325_, v_size_319_);
lean_dec(v___x_325_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_330_; 
lean_dec(v_l_322_);
v___x_327_ = lean_nat_add(v___x_317_, v_size_318_);
v___x_328_ = lean_nat_add(v___x_327_, v_size_319_);
lean_dec(v___x_327_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_impl_316_);
lean_ctor_set(v___x_312_, 0, v___x_328_);
v___x_330_ = v___x_312_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_331_; 
v_reuseFailAlloc_331_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_331_, 0, v___x_328_);
lean_ctor_set(v_reuseFailAlloc_331_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_331_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_331_, 3, v_l_309_);
lean_ctor_set(v_reuseFailAlloc_331_, 4, v_impl_316_);
v___x_330_ = v_reuseFailAlloc_331_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
return v___x_330_;
}
}
else
{
lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_395_; 
lean_inc(v_r_323_);
lean_inc(v_v_321_);
lean_inc(v_k_320_);
lean_inc(v_size_319_);
v_isSharedCheck_395_ = !lean_is_exclusive(v_impl_316_);
if (v_isSharedCheck_395_ == 0)
{
lean_object* v_unused_396_; lean_object* v_unused_397_; lean_object* v_unused_398_; lean_object* v_unused_399_; lean_object* v_unused_400_; 
v_unused_396_ = lean_ctor_get(v_impl_316_, 4);
lean_dec(v_unused_396_);
v_unused_397_ = lean_ctor_get(v_impl_316_, 3);
lean_dec(v_unused_397_);
v_unused_398_ = lean_ctor_get(v_impl_316_, 2);
lean_dec(v_unused_398_);
v_unused_399_ = lean_ctor_get(v_impl_316_, 1);
lean_dec(v_unused_399_);
v_unused_400_ = lean_ctor_get(v_impl_316_, 0);
lean_dec(v_unused_400_);
v___x_333_ = v_impl_316_;
v_isShared_334_ = v_isSharedCheck_395_;
goto v_resetjp_332_;
}
else
{
lean_dec(v_impl_316_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_395_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v_size_335_; lean_object* v_k_336_; lean_object* v_v_337_; lean_object* v_l_338_; lean_object* v_r_339_; lean_object* v_size_340_; lean_object* v___x_341_; lean_object* v___x_342_; uint8_t v___x_343_; 
v_size_335_ = lean_ctor_get(v_l_322_, 0);
v_k_336_ = lean_ctor_get(v_l_322_, 1);
v_v_337_ = lean_ctor_get(v_l_322_, 2);
v_l_338_ = lean_ctor_get(v_l_322_, 3);
v_r_339_ = lean_ctor_get(v_l_322_, 4);
v_size_340_ = lean_ctor_get(v_r_323_, 0);
v___x_341_ = lean_unsigned_to_nat(2u);
v___x_342_ = lean_nat_mul(v___x_341_, v_size_340_);
v___x_343_ = lean_nat_dec_lt(v_size_335_, v___x_342_);
lean_dec(v___x_342_);
if (v___x_343_ == 0)
{
lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_371_; 
lean_inc(v_r_339_);
lean_inc(v_l_338_);
lean_inc(v_v_337_);
lean_inc(v_k_336_);
v_isSharedCheck_371_ = !lean_is_exclusive(v_l_322_);
if (v_isSharedCheck_371_ == 0)
{
lean_object* v_unused_372_; lean_object* v_unused_373_; lean_object* v_unused_374_; lean_object* v_unused_375_; lean_object* v_unused_376_; 
v_unused_372_ = lean_ctor_get(v_l_322_, 4);
lean_dec(v_unused_372_);
v_unused_373_ = lean_ctor_get(v_l_322_, 3);
lean_dec(v_unused_373_);
v_unused_374_ = lean_ctor_get(v_l_322_, 2);
lean_dec(v_unused_374_);
v_unused_375_ = lean_ctor_get(v_l_322_, 1);
lean_dec(v_unused_375_);
v_unused_376_ = lean_ctor_get(v_l_322_, 0);
lean_dec(v_unused_376_);
v___x_345_ = v_l_322_;
v_isShared_346_ = v_isSharedCheck_371_;
goto v_resetjp_344_;
}
else
{
lean_dec(v_l_322_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_371_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___y_350_; lean_object* v___y_351_; lean_object* v___y_352_; lean_object* v___y_361_; 
v___x_347_ = lean_nat_add(v___x_317_, v_size_318_);
v___x_348_ = lean_nat_add(v___x_347_, v_size_319_);
lean_dec(v_size_319_);
if (lean_obj_tag(v_l_338_) == 0)
{
lean_object* v_size_369_; 
v_size_369_ = lean_ctor_get(v_l_338_, 0);
lean_inc(v_size_369_);
v___y_361_ = v_size_369_;
goto v___jp_360_;
}
else
{
lean_object* v___x_370_; 
v___x_370_ = lean_unsigned_to_nat(0u);
v___y_361_ = v___x_370_;
goto v___jp_360_;
}
v___jp_349_:
{
lean_object* v___x_353_; lean_object* v___x_355_; 
v___x_353_ = lean_nat_add(v___y_350_, v___y_352_);
lean_dec(v___y_352_);
lean_dec(v___y_350_);
if (v_isShared_346_ == 0)
{
lean_ctor_set(v___x_345_, 4, v_r_323_);
lean_ctor_set(v___x_345_, 3, v_r_339_);
lean_ctor_set(v___x_345_, 2, v_v_321_);
lean_ctor_set(v___x_345_, 1, v_k_320_);
lean_ctor_set(v___x_345_, 0, v___x_353_);
v___x_355_ = v___x_345_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v___x_353_);
lean_ctor_set(v_reuseFailAlloc_359_, 1, v_k_320_);
lean_ctor_set(v_reuseFailAlloc_359_, 2, v_v_321_);
lean_ctor_set(v_reuseFailAlloc_359_, 3, v_r_339_);
lean_ctor_set(v_reuseFailAlloc_359_, 4, v_r_323_);
v___x_355_ = v_reuseFailAlloc_359_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
lean_object* v___x_357_; 
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 4, v___x_355_);
lean_ctor_set(v___x_333_, 3, v___y_351_);
lean_ctor_set(v___x_333_, 2, v_v_337_);
lean_ctor_set(v___x_333_, 1, v_k_336_);
lean_ctor_set(v___x_333_, 0, v___x_348_);
v___x_357_ = v___x_333_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v___x_348_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_k_336_);
lean_ctor_set(v_reuseFailAlloc_358_, 2, v_v_337_);
lean_ctor_set(v_reuseFailAlloc_358_, 3, v___y_351_);
lean_ctor_set(v_reuseFailAlloc_358_, 4, v___x_355_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
v___jp_360_:
{
lean_object* v___x_362_; lean_object* v___x_364_; 
v___x_362_ = lean_nat_add(v___x_347_, v___y_361_);
lean_dec(v___y_361_);
lean_dec(v___x_347_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_l_338_);
lean_ctor_set(v___x_312_, 0, v___x_362_);
v___x_364_ = v___x_312_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_362_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_368_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_368_, 3, v_l_309_);
lean_ctor_set(v_reuseFailAlloc_368_, 4, v_l_338_);
v___x_364_ = v_reuseFailAlloc_368_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
lean_object* v___x_365_; 
v___x_365_ = lean_nat_add(v___x_317_, v_size_340_);
if (lean_obj_tag(v_r_339_) == 0)
{
lean_object* v_size_366_; 
v_size_366_ = lean_ctor_get(v_r_339_, 0);
lean_inc(v_size_366_);
v___y_350_ = v___x_365_;
v___y_351_ = v___x_364_;
v___y_352_ = v_size_366_;
goto v___jp_349_;
}
else
{
lean_object* v___x_367_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___y_350_ = v___x_365_;
v___y_351_ = v___x_364_;
v___y_352_ = v___x_367_;
goto v___jp_349_;
}
}
}
}
}
else
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_381_; 
lean_del_object(v___x_312_);
v___x_377_ = lean_nat_add(v___x_317_, v_size_318_);
v___x_378_ = lean_nat_add(v___x_377_, v_size_319_);
lean_dec(v_size_319_);
v___x_379_ = lean_nat_add(v___x_377_, v_size_335_);
lean_dec(v___x_377_);
lean_inc_ref(v_l_309_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 4, v_l_322_);
lean_ctor_set(v___x_333_, 3, v_l_309_);
lean_ctor_set(v___x_333_, 2, v_v_308_);
lean_ctor_set(v___x_333_, 1, v_k_307_);
lean_ctor_set(v___x_333_, 0, v___x_379_);
v___x_381_ = v___x_333_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_379_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_394_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_394_, 3, v_l_309_);
lean_ctor_set(v_reuseFailAlloc_394_, 4, v_l_322_);
v___x_381_ = v_reuseFailAlloc_394_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
v_isSharedCheck_388_ = !lean_is_exclusive(v_l_309_);
if (v_isSharedCheck_388_ == 0)
{
lean_object* v_unused_389_; lean_object* v_unused_390_; lean_object* v_unused_391_; lean_object* v_unused_392_; lean_object* v_unused_393_; 
v_unused_389_ = lean_ctor_get(v_l_309_, 4);
lean_dec(v_unused_389_);
v_unused_390_ = lean_ctor_get(v_l_309_, 3);
lean_dec(v_unused_390_);
v_unused_391_ = lean_ctor_get(v_l_309_, 2);
lean_dec(v_unused_391_);
v_unused_392_ = lean_ctor_get(v_l_309_, 1);
lean_dec(v_unused_392_);
v_unused_393_ = lean_ctor_get(v_l_309_, 0);
lean_dec(v_unused_393_);
v___x_383_ = v_l_309_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_dec(v_l_309_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
lean_object* v___x_386_; 
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 4, v_r_323_);
lean_ctor_set(v___x_383_, 3, v___x_381_);
lean_ctor_set(v___x_383_, 2, v_v_321_);
lean_ctor_set(v___x_383_, 1, v_k_320_);
lean_ctor_set(v___x_383_, 0, v___x_378_);
v___x_386_ = v___x_383_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v___x_378_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v_k_320_);
lean_ctor_set(v_reuseFailAlloc_387_, 2, v_v_321_);
lean_ctor_set(v_reuseFailAlloc_387_, 3, v___x_381_);
lean_ctor_set(v_reuseFailAlloc_387_, 4, v_r_323_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_401_; 
v_l_401_ = lean_ctor_get(v_impl_316_, 3);
lean_inc(v_l_401_);
if (lean_obj_tag(v_l_401_) == 0)
{
lean_object* v_r_402_; lean_object* v_k_403_; lean_object* v_v_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_427_; 
v_r_402_ = lean_ctor_get(v_impl_316_, 4);
v_k_403_ = lean_ctor_get(v_impl_316_, 1);
v_v_404_ = lean_ctor_get(v_impl_316_, 2);
v_isSharedCheck_427_ = !lean_is_exclusive(v_impl_316_);
if (v_isSharedCheck_427_ == 0)
{
lean_object* v_unused_428_; lean_object* v_unused_429_; 
v_unused_428_ = lean_ctor_get(v_impl_316_, 3);
lean_dec(v_unused_428_);
v_unused_429_ = lean_ctor_get(v_impl_316_, 0);
lean_dec(v_unused_429_);
v___x_406_ = v_impl_316_;
v_isShared_407_ = v_isSharedCheck_427_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_r_402_);
lean_inc(v_v_404_);
lean_inc(v_k_403_);
lean_dec(v_impl_316_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_427_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v_k_408_; lean_object* v_v_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_423_; 
v_k_408_ = lean_ctor_get(v_l_401_, 1);
v_v_409_ = lean_ctor_get(v_l_401_, 2);
v_isSharedCheck_423_ = !lean_is_exclusive(v_l_401_);
if (v_isSharedCheck_423_ == 0)
{
lean_object* v_unused_424_; lean_object* v_unused_425_; lean_object* v_unused_426_; 
v_unused_424_ = lean_ctor_get(v_l_401_, 4);
lean_dec(v_unused_424_);
v_unused_425_ = lean_ctor_get(v_l_401_, 3);
lean_dec(v_unused_425_);
v_unused_426_ = lean_ctor_get(v_l_401_, 0);
lean_dec(v_unused_426_);
v___x_411_ = v_l_401_;
v_isShared_412_ = v_isSharedCheck_423_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_v_409_);
lean_inc(v_k_408_);
lean_dec(v_l_401_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_423_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v___x_413_; lean_object* v___x_415_; 
v___x_413_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_402_, 2);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 4, v_r_402_);
lean_ctor_set(v___x_411_, 3, v_r_402_);
lean_ctor_set(v___x_411_, 2, v_v_308_);
lean_ctor_set(v___x_411_, 1, v_k_307_);
lean_ctor_set(v___x_411_, 0, v___x_317_);
v___x_415_ = v___x_411_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_422_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_422_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_422_, 3, v_r_402_);
lean_ctor_set(v_reuseFailAlloc_422_, 4, v_r_402_);
v___x_415_ = v_reuseFailAlloc_422_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_417_; 
lean_inc(v_r_402_);
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 3, v_r_402_);
lean_ctor_set(v___x_406_, 0, v___x_317_);
v___x_417_ = v___x_406_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_421_, 1, v_k_403_);
lean_ctor_set(v_reuseFailAlloc_421_, 2, v_v_404_);
lean_ctor_set(v_reuseFailAlloc_421_, 3, v_r_402_);
lean_ctor_set(v_reuseFailAlloc_421_, 4, v_r_402_);
v___x_417_ = v_reuseFailAlloc_421_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
lean_object* v___x_419_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v___x_417_);
lean_ctor_set(v___x_312_, 3, v___x_415_);
lean_ctor_set(v___x_312_, 2, v_v_409_);
lean_ctor_set(v___x_312_, 1, v_k_408_);
lean_ctor_set(v___x_312_, 0, v___x_413_);
v___x_419_ = v___x_312_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_413_);
lean_ctor_set(v_reuseFailAlloc_420_, 1, v_k_408_);
lean_ctor_set(v_reuseFailAlloc_420_, 2, v_v_409_);
lean_ctor_set(v_reuseFailAlloc_420_, 3, v___x_415_);
lean_ctor_set(v_reuseFailAlloc_420_, 4, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
}
}
else
{
lean_object* v_r_430_; 
v_r_430_ = lean_ctor_get(v_impl_316_, 4);
lean_inc(v_r_430_);
if (lean_obj_tag(v_r_430_) == 0)
{
lean_object* v_k_431_; lean_object* v_v_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_443_; 
v_k_431_ = lean_ctor_get(v_impl_316_, 1);
v_v_432_ = lean_ctor_get(v_impl_316_, 2);
v_isSharedCheck_443_ = !lean_is_exclusive(v_impl_316_);
if (v_isSharedCheck_443_ == 0)
{
lean_object* v_unused_444_; lean_object* v_unused_445_; lean_object* v_unused_446_; 
v_unused_444_ = lean_ctor_get(v_impl_316_, 4);
lean_dec(v_unused_444_);
v_unused_445_ = lean_ctor_get(v_impl_316_, 3);
lean_dec(v_unused_445_);
v_unused_446_ = lean_ctor_get(v_impl_316_, 0);
lean_dec(v_unused_446_);
v___x_434_ = v_impl_316_;
v_isShared_435_ = v_isSharedCheck_443_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_v_432_);
lean_inc(v_k_431_);
lean_dec(v_impl_316_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_443_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_436_ = lean_unsigned_to_nat(3u);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 4, v_l_401_);
lean_ctor_set(v___x_434_, 2, v_v_308_);
lean_ctor_set(v___x_434_, 1, v_k_307_);
lean_ctor_set(v___x_434_, 0, v___x_317_);
v___x_438_ = v___x_434_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_442_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_442_, 3, v_l_401_);
lean_ctor_set(v_reuseFailAlloc_442_, 4, v_l_401_);
v___x_438_ = v_reuseFailAlloc_442_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
lean_object* v___x_440_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_r_430_);
lean_ctor_set(v___x_312_, 3, v___x_438_);
lean_ctor_set(v___x_312_, 2, v_v_432_);
lean_ctor_set(v___x_312_, 1, v_k_431_);
lean_ctor_set(v___x_312_, 0, v___x_436_);
v___x_440_ = v___x_312_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_436_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_k_431_);
lean_ctor_set(v_reuseFailAlloc_441_, 2, v_v_432_);
lean_ctor_set(v_reuseFailAlloc_441_, 3, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_441_, 4, v_r_430_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
else
{
lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_447_ = lean_unsigned_to_nat(2u);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_impl_316_);
lean_ctor_set(v___x_312_, 3, v_r_430_);
lean_ctor_set(v___x_312_, 0, v___x_447_);
v___x_449_ = v___x_312_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_447_);
lean_ctor_set(v_reuseFailAlloc_450_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_450_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_450_, 3, v_r_430_);
lean_ctor_set(v_reuseFailAlloc_450_, 4, v_impl_316_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
}
}
else
{
lean_object* v___x_452_; 
lean_dec(v_v_308_);
lean_dec(v_k_307_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 2, v_v_304_);
lean_ctor_set(v___x_312_, 1, v_k_303_);
v___x_452_ = v___x_312_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_size_306_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_k_303_);
lean_ctor_set(v_reuseFailAlloc_453_, 2, v_v_304_);
lean_ctor_set(v_reuseFailAlloc_453_, 3, v_l_309_);
lean_ctor_set(v_reuseFailAlloc_453_, 4, v_r_310_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
else
{
lean_object* v_impl_454_; lean_object* v___x_455_; 
lean_dec(v_size_306_);
v_impl_454_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_303_, v_v_304_, v_l_309_);
v___x_455_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_310_) == 0)
{
lean_object* v_size_456_; lean_object* v_size_457_; lean_object* v_k_458_; lean_object* v_v_459_; lean_object* v_l_460_; lean_object* v_r_461_; lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v_size_456_ = lean_ctor_get(v_r_310_, 0);
v_size_457_ = lean_ctor_get(v_impl_454_, 0);
v_k_458_ = lean_ctor_get(v_impl_454_, 1);
v_v_459_ = lean_ctor_get(v_impl_454_, 2);
v_l_460_ = lean_ctor_get(v_impl_454_, 3);
v_r_461_ = lean_ctor_get(v_impl_454_, 4);
lean_inc(v_r_461_);
v___x_462_ = lean_unsigned_to_nat(3u);
v___x_463_ = lean_nat_mul(v___x_462_, v_size_456_);
v___x_464_ = lean_nat_dec_lt(v___x_463_, v_size_457_);
lean_dec(v___x_463_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_468_; 
lean_dec(v_r_461_);
v___x_465_ = lean_nat_add(v___x_455_, v_size_457_);
v___x_466_ = lean_nat_add(v___x_465_, v_size_456_);
lean_dec(v___x_465_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 3, v_impl_454_);
lean_ctor_set(v___x_312_, 0, v___x_466_);
v___x_468_ = v___x_312_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_466_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_469_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_469_, 3, v_impl_454_);
lean_ctor_set(v_reuseFailAlloc_469_, 4, v_r_310_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
else
{
lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_535_; 
lean_inc(v_l_460_);
lean_inc(v_v_459_);
lean_inc(v_k_458_);
lean_inc(v_size_457_);
v_isSharedCheck_535_ = !lean_is_exclusive(v_impl_454_);
if (v_isSharedCheck_535_ == 0)
{
lean_object* v_unused_536_; lean_object* v_unused_537_; lean_object* v_unused_538_; lean_object* v_unused_539_; lean_object* v_unused_540_; 
v_unused_536_ = lean_ctor_get(v_impl_454_, 4);
lean_dec(v_unused_536_);
v_unused_537_ = lean_ctor_get(v_impl_454_, 3);
lean_dec(v_unused_537_);
v_unused_538_ = lean_ctor_get(v_impl_454_, 2);
lean_dec(v_unused_538_);
v_unused_539_ = lean_ctor_get(v_impl_454_, 1);
lean_dec(v_unused_539_);
v_unused_540_ = lean_ctor_get(v_impl_454_, 0);
lean_dec(v_unused_540_);
v___x_471_ = v_impl_454_;
v_isShared_472_ = v_isSharedCheck_535_;
goto v_resetjp_470_;
}
else
{
lean_dec(v_impl_454_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_535_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v_size_473_; lean_object* v_size_474_; lean_object* v_k_475_; lean_object* v_v_476_; lean_object* v_l_477_; lean_object* v_r_478_; lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v_size_473_ = lean_ctor_get(v_l_460_, 0);
v_size_474_ = lean_ctor_get(v_r_461_, 0);
v_k_475_ = lean_ctor_get(v_r_461_, 1);
v_v_476_ = lean_ctor_get(v_r_461_, 2);
v_l_477_ = lean_ctor_get(v_r_461_, 3);
v_r_478_ = lean_ctor_get(v_r_461_, 4);
v___x_479_ = lean_unsigned_to_nat(2u);
v___x_480_ = lean_nat_mul(v___x_479_, v_size_473_);
v___x_481_ = lean_nat_dec_lt(v_size_474_, v___x_480_);
lean_dec(v___x_480_);
if (v___x_481_ == 0)
{
lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_510_; 
lean_inc(v_r_478_);
lean_inc(v_l_477_);
lean_inc(v_v_476_);
lean_inc(v_k_475_);
v_isSharedCheck_510_ = !lean_is_exclusive(v_r_461_);
if (v_isSharedCheck_510_ == 0)
{
lean_object* v_unused_511_; lean_object* v_unused_512_; lean_object* v_unused_513_; lean_object* v_unused_514_; lean_object* v_unused_515_; 
v_unused_511_ = lean_ctor_get(v_r_461_, 4);
lean_dec(v_unused_511_);
v_unused_512_ = lean_ctor_get(v_r_461_, 3);
lean_dec(v_unused_512_);
v_unused_513_ = lean_ctor_get(v_r_461_, 2);
lean_dec(v_unused_513_);
v_unused_514_ = lean_ctor_get(v_r_461_, 1);
lean_dec(v_unused_514_);
v_unused_515_ = lean_ctor_get(v_r_461_, 0);
lean_dec(v_unused_515_);
v___x_483_ = v_r_461_;
v_isShared_484_ = v_isSharedCheck_510_;
goto v_resetjp_482_;
}
else
{
lean_dec(v_r_461_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_510_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___y_488_; lean_object* v___y_489_; lean_object* v___y_490_; lean_object* v___x_498_; lean_object* v___y_500_; 
v___x_485_ = lean_nat_add(v___x_455_, v_size_457_);
lean_dec(v_size_457_);
v___x_486_ = lean_nat_add(v___x_485_, v_size_456_);
lean_dec(v___x_485_);
v___x_498_ = lean_nat_add(v___x_455_, v_size_473_);
if (lean_obj_tag(v_l_477_) == 0)
{
lean_object* v_size_508_; 
v_size_508_ = lean_ctor_get(v_l_477_, 0);
lean_inc(v_size_508_);
v___y_500_ = v_size_508_;
goto v___jp_499_;
}
else
{
lean_object* v___x_509_; 
v___x_509_ = lean_unsigned_to_nat(0u);
v___y_500_ = v___x_509_;
goto v___jp_499_;
}
v___jp_487_:
{
lean_object* v___x_491_; lean_object* v___x_493_; 
v___x_491_ = lean_nat_add(v___y_488_, v___y_490_);
lean_dec(v___y_490_);
lean_dec(v___y_488_);
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 4, v_r_310_);
lean_ctor_set(v___x_483_, 3, v_r_478_);
lean_ctor_set(v___x_483_, 2, v_v_308_);
lean_ctor_set(v___x_483_, 1, v_k_307_);
lean_ctor_set(v___x_483_, 0, v___x_491_);
v___x_493_ = v___x_483_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_491_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_497_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_497_, 3, v_r_478_);
lean_ctor_set(v_reuseFailAlloc_497_, 4, v_r_310_);
v___x_493_ = v_reuseFailAlloc_497_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
lean_object* v___x_495_; 
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 4, v___x_493_);
lean_ctor_set(v___x_471_, 3, v___y_489_);
lean_ctor_set(v___x_471_, 2, v_v_476_);
lean_ctor_set(v___x_471_, 1, v_k_475_);
lean_ctor_set(v___x_471_, 0, v___x_486_);
v___x_495_ = v___x_471_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_k_475_);
lean_ctor_set(v_reuseFailAlloc_496_, 2, v_v_476_);
lean_ctor_set(v_reuseFailAlloc_496_, 3, v___y_489_);
lean_ctor_set(v_reuseFailAlloc_496_, 4, v___x_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
v___jp_499_:
{
lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_501_ = lean_nat_add(v___x_498_, v___y_500_);
lean_dec(v___y_500_);
lean_dec(v___x_498_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_l_477_);
lean_ctor_set(v___x_312_, 3, v_l_460_);
lean_ctor_set(v___x_312_, 2, v_v_459_);
lean_ctor_set(v___x_312_, 1, v_k_458_);
lean_ctor_set(v___x_312_, 0, v___x_501_);
v___x_503_ = v___x_312_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_501_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v_k_458_);
lean_ctor_set(v_reuseFailAlloc_507_, 2, v_v_459_);
lean_ctor_set(v_reuseFailAlloc_507_, 3, v_l_460_);
lean_ctor_set(v_reuseFailAlloc_507_, 4, v_l_477_);
v___x_503_ = v_reuseFailAlloc_507_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
lean_object* v___x_504_; 
v___x_504_ = lean_nat_add(v___x_455_, v_size_456_);
if (lean_obj_tag(v_r_478_) == 0)
{
lean_object* v_size_505_; 
v_size_505_ = lean_ctor_get(v_r_478_, 0);
lean_inc(v_size_505_);
v___y_488_ = v___x_504_;
v___y_489_ = v___x_503_;
v___y_490_ = v_size_505_;
goto v___jp_487_;
}
else
{
lean_object* v___x_506_; 
v___x_506_ = lean_unsigned_to_nat(0u);
v___y_488_ = v___x_504_;
v___y_489_ = v___x_503_;
v___y_490_ = v___x_506_;
goto v___jp_487_;
}
}
}
}
}
else
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_521_; 
lean_del_object(v___x_312_);
v___x_516_ = lean_nat_add(v___x_455_, v_size_457_);
lean_dec(v_size_457_);
v___x_517_ = lean_nat_add(v___x_516_, v_size_456_);
lean_dec(v___x_516_);
v___x_518_ = lean_nat_add(v___x_455_, v_size_456_);
v___x_519_ = lean_nat_add(v___x_518_, v_size_474_);
lean_dec(v___x_518_);
lean_inc_ref(v_r_310_);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 4, v_r_310_);
lean_ctor_set(v___x_471_, 3, v_r_461_);
lean_ctor_set(v___x_471_, 2, v_v_308_);
lean_ctor_set(v___x_471_, 1, v_k_307_);
lean_ctor_set(v___x_471_, 0, v___x_519_);
v___x_521_ = v___x_471_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_519_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_534_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_534_, 3, v_r_461_);
lean_ctor_set(v_reuseFailAlloc_534_, 4, v_r_310_);
v___x_521_ = v_reuseFailAlloc_534_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
v_isSharedCheck_528_ = !lean_is_exclusive(v_r_310_);
if (v_isSharedCheck_528_ == 0)
{
lean_object* v_unused_529_; lean_object* v_unused_530_; lean_object* v_unused_531_; lean_object* v_unused_532_; lean_object* v_unused_533_; 
v_unused_529_ = lean_ctor_get(v_r_310_, 4);
lean_dec(v_unused_529_);
v_unused_530_ = lean_ctor_get(v_r_310_, 3);
lean_dec(v_unused_530_);
v_unused_531_ = lean_ctor_get(v_r_310_, 2);
lean_dec(v_unused_531_);
v_unused_532_ = lean_ctor_get(v_r_310_, 1);
lean_dec(v_unused_532_);
v_unused_533_ = lean_ctor_get(v_r_310_, 0);
lean_dec(v_unused_533_);
v___x_523_ = v_r_310_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_dec(v_r_310_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 4, v___x_521_);
lean_ctor_set(v___x_523_, 3, v_l_460_);
lean_ctor_set(v___x_523_, 2, v_v_459_);
lean_ctor_set(v___x_523_, 1, v_k_458_);
lean_ctor_set(v___x_523_, 0, v___x_517_);
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___x_517_);
lean_ctor_set(v_reuseFailAlloc_527_, 1, v_k_458_);
lean_ctor_set(v_reuseFailAlloc_527_, 2, v_v_459_);
lean_ctor_set(v_reuseFailAlloc_527_, 3, v_l_460_);
lean_ctor_set(v_reuseFailAlloc_527_, 4, v___x_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_541_; 
v_l_541_ = lean_ctor_get(v_impl_454_, 3);
if (lean_obj_tag(v_l_541_) == 0)
{
lean_object* v_r_542_; lean_object* v_k_543_; lean_object* v_v_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_555_; 
lean_inc_ref(v_l_541_);
v_r_542_ = lean_ctor_get(v_impl_454_, 4);
v_k_543_ = lean_ctor_get(v_impl_454_, 1);
v_v_544_ = lean_ctor_get(v_impl_454_, 2);
v_isSharedCheck_555_ = !lean_is_exclusive(v_impl_454_);
if (v_isSharedCheck_555_ == 0)
{
lean_object* v_unused_556_; lean_object* v_unused_557_; 
v_unused_556_ = lean_ctor_get(v_impl_454_, 3);
lean_dec(v_unused_556_);
v_unused_557_ = lean_ctor_get(v_impl_454_, 0);
lean_dec(v_unused_557_);
v___x_546_ = v_impl_454_;
v_isShared_547_ = v_isSharedCheck_555_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_r_542_);
lean_inc(v_v_544_);
lean_inc(v_k_543_);
lean_dec(v_impl_454_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_555_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_550_; 
v___x_548_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_542_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 3, v_r_542_);
lean_ctor_set(v___x_546_, 2, v_v_308_);
lean_ctor_set(v___x_546_, 1, v_k_307_);
lean_ctor_set(v___x_546_, 0, v___x_455_);
v___x_550_ = v___x_546_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_554_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_554_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_554_, 3, v_r_542_);
lean_ctor_set(v_reuseFailAlloc_554_, 4, v_r_542_);
v___x_550_ = v_reuseFailAlloc_554_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_object* v___x_552_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v___x_550_);
lean_ctor_set(v___x_312_, 3, v_l_541_);
lean_ctor_set(v___x_312_, 2, v_v_544_);
lean_ctor_set(v___x_312_, 1, v_k_543_);
lean_ctor_set(v___x_312_, 0, v___x_548_);
v___x_552_ = v___x_312_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_548_);
lean_ctor_set(v_reuseFailAlloc_553_, 1, v_k_543_);
lean_ctor_set(v_reuseFailAlloc_553_, 2, v_v_544_);
lean_ctor_set(v_reuseFailAlloc_553_, 3, v_l_541_);
lean_ctor_set(v_reuseFailAlloc_553_, 4, v___x_550_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
}
else
{
lean_object* v_r_558_; 
v_r_558_ = lean_ctor_get(v_impl_454_, 4);
lean_inc(v_r_558_);
if (lean_obj_tag(v_r_558_) == 0)
{
lean_object* v_k_559_; lean_object* v_v_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_583_; 
lean_inc(v_l_541_);
v_k_559_ = lean_ctor_get(v_impl_454_, 1);
v_v_560_ = lean_ctor_get(v_impl_454_, 2);
v_isSharedCheck_583_ = !lean_is_exclusive(v_impl_454_);
if (v_isSharedCheck_583_ == 0)
{
lean_object* v_unused_584_; lean_object* v_unused_585_; lean_object* v_unused_586_; 
v_unused_584_ = lean_ctor_get(v_impl_454_, 4);
lean_dec(v_unused_584_);
v_unused_585_ = lean_ctor_get(v_impl_454_, 3);
lean_dec(v_unused_585_);
v_unused_586_ = lean_ctor_get(v_impl_454_, 0);
lean_dec(v_unused_586_);
v___x_562_ = v_impl_454_;
v_isShared_563_ = v_isSharedCheck_583_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_v_560_);
lean_inc(v_k_559_);
lean_dec(v_impl_454_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_583_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v_k_564_; lean_object* v_v_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_579_; 
v_k_564_ = lean_ctor_get(v_r_558_, 1);
v_v_565_ = lean_ctor_get(v_r_558_, 2);
v_isSharedCheck_579_ = !lean_is_exclusive(v_r_558_);
if (v_isSharedCheck_579_ == 0)
{
lean_object* v_unused_580_; lean_object* v_unused_581_; lean_object* v_unused_582_; 
v_unused_580_ = lean_ctor_get(v_r_558_, 4);
lean_dec(v_unused_580_);
v_unused_581_ = lean_ctor_get(v_r_558_, 3);
lean_dec(v_unused_581_);
v_unused_582_ = lean_ctor_get(v_r_558_, 0);
lean_dec(v_unused_582_);
v___x_567_ = v_r_558_;
v_isShared_568_ = v_isSharedCheck_579_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_v_565_);
lean_inc(v_k_564_);
lean_dec(v_r_558_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_579_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_569_ = lean_unsigned_to_nat(3u);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 4, v_l_541_);
lean_ctor_set(v___x_567_, 3, v_l_541_);
lean_ctor_set(v___x_567_, 2, v_v_560_);
lean_ctor_set(v___x_567_, 1, v_k_559_);
lean_ctor_set(v___x_567_, 0, v___x_455_);
v___x_571_ = v___x_567_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_k_559_);
lean_ctor_set(v_reuseFailAlloc_578_, 2, v_v_560_);
lean_ctor_set(v_reuseFailAlloc_578_, 3, v_l_541_);
lean_ctor_set(v_reuseFailAlloc_578_, 4, v_l_541_);
v___x_571_ = v_reuseFailAlloc_578_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_573_; 
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 4, v_l_541_);
lean_ctor_set(v___x_562_, 2, v_v_308_);
lean_ctor_set(v___x_562_, 1, v_k_307_);
lean_ctor_set(v___x_562_, 0, v___x_455_);
v___x_573_ = v___x_562_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_577_, 3, v_l_541_);
lean_ctor_set(v_reuseFailAlloc_577_, 4, v_l_541_);
v___x_573_ = v_reuseFailAlloc_577_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_575_; 
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v___x_573_);
lean_ctor_set(v___x_312_, 3, v___x_571_);
lean_ctor_set(v___x_312_, 2, v_v_565_);
lean_ctor_set(v___x_312_, 1, v_k_564_);
lean_ctor_set(v___x_312_, 0, v___x_569_);
v___x_575_ = v___x_312_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_569_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v_k_564_);
lean_ctor_set(v_reuseFailAlloc_576_, 2, v_v_565_);
lean_ctor_set(v_reuseFailAlloc_576_, 3, v___x_571_);
lean_ctor_set(v_reuseFailAlloc_576_, 4, v___x_573_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
}
}
else
{
lean_object* v___x_587_; lean_object* v___x_589_; 
v___x_587_ = lean_unsigned_to_nat(2u);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 4, v_r_558_);
lean_ctor_set(v___x_312_, 3, v_impl_454_);
lean_ctor_set(v___x_312_, 0, v___x_587_);
v___x_589_ = v___x_312_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_587_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v_k_307_);
lean_ctor_set(v_reuseFailAlloc_590_, 2, v_v_308_);
lean_ctor_set(v_reuseFailAlloc_590_, 3, v_impl_454_);
lean_ctor_set(v_reuseFailAlloc_590_, 4, v_r_558_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = lean_unsigned_to_nat(1u);
v___x_593_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_593_, 0, v___x_592_);
lean_ctor_set(v___x_593_, 1, v_k_303_);
lean_ctor_set(v___x_593_, 2, v_v_304_);
lean_ctor_set(v___x_593_, 3, v_t_305_);
lean_ctor_set(v___x_593_, 4, v_t_305_);
return v___x_593_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(lean_object* v_p_594_, uint8_t v_d_595_, lean_object* v_00_u03b4_596_){
_start:
{
lean_object* v_changesBefore_597_; lean_object* v_changesAfter_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_607_; 
v_changesBefore_597_ = lean_ctor_get(v_00_u03b4_596_, 0);
v_changesAfter_598_ = lean_ctor_get(v_00_u03b4_596_, 1);
v_isSharedCheck_607_ = !lean_is_exclusive(v_00_u03b4_596_);
if (v_isSharedCheck_607_ == 0)
{
v___x_600_ = v_00_u03b4_596_;
v_isShared_601_ = v_isSharedCheck_607_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_changesAfter_598_);
lean_inc(v_changesBefore_597_);
lean_dec(v_00_u03b4_596_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_607_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_605_; 
v___x_602_ = lean_box(v_d_595_);
v___x_603_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_p_594_, v___x_602_, v_changesBefore_597_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_603_);
v___x_605_ = v___x_600_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v___x_603_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v_changesAfter_598_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange___boxed(lean_object* v_p_608_, lean_object* v_d_609_, lean_object* v_00_u03b4_610_){
_start:
{
uint8_t v_d_boxed_611_; lean_object* v_res_612_; 
v_d_boxed_611_ = lean_unbox(v_d_609_);
v_res_612_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(v_p_608_, v_d_boxed_611_, v_00_u03b4_610_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0(lean_object* v_00_u03b2_613_, lean_object* v_k_614_, lean_object* v_v_615_, lean_object* v_t_616_, lean_object* v_hl_617_){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_k_614_, v_v_615_, v_t_616_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange(lean_object* v_p_619_, uint8_t v_d_620_, lean_object* v_00_u03b4_621_){
_start:
{
lean_object* v_changesBefore_622_; lean_object* v_changesAfter_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_632_; 
v_changesBefore_622_ = lean_ctor_get(v_00_u03b4_621_, 0);
v_changesAfter_623_ = lean_ctor_get(v_00_u03b4_621_, 1);
v_isSharedCheck_632_ = !lean_is_exclusive(v_00_u03b4_621_);
if (v_isSharedCheck_632_ == 0)
{
v___x_625_ = v_00_u03b4_621_;
v_isShared_626_ = v_isSharedCheck_632_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_changesAfter_623_);
lean_inc(v_changesBefore_622_);
lean_dec(v_00_u03b4_621_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_632_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_630_; 
v___x_627_ = lean_box(v_d_620_);
v___x_628_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_p_619_, v___x_627_, v_changesAfter_623_);
if (v_isShared_626_ == 0)
{
lean_ctor_set(v___x_625_, 1, v___x_628_);
v___x_630_ = v___x_625_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_changesBefore_622_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v___x_628_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange___boxed(lean_object* v_p_633_, lean_object* v_d_634_, lean_object* v_00_u03b4_635_){
_start:
{
uint8_t v_d_boxed_636_; lean_object* v_res_637_; 
v_d_boxed_636_ = lean_unbox(v_d_634_);
v_res_637_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertAfterChange(v_p_633_, v_d_boxed_636_, v_00_u03b4_635_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(lean_object* v_before_638_, lean_object* v_after_639_, uint8_t v_d_640_){
_start:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_641_ = lean_box(1);
v___x_642_ = lean_box(v_d_640_);
v___x_643_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_before_638_, v___x_642_, v___x_641_);
v___x_644_ = lean_box(v_d_640_);
v___x_645_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange_spec__0___redArg(v_after_639_, v___x_644_, v___x_641_);
v___x_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_643_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos___boxed(lean_object* v_before_647_, lean_object* v_after_648_, lean_object* v_d_649_){
_start:
{
uint8_t v_d_boxed_650_; lean_object* v_res_651_; 
v_d_boxed_650_ = lean_unbox(v_d_649_);
v_res_651_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v_before_647_, v_after_648_, v_d_boxed_650_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(lean_object* v_before_652_, lean_object* v_after_653_, uint8_t v_d_654_){
_start:
{
lean_object* v_pos_655_; lean_object* v_pos_656_; lean_object* v___x_657_; 
v_pos_655_ = lean_ctor_get(v_before_652_, 1);
lean_inc(v_pos_655_);
lean_dec_ref(v_before_652_);
v_pos_656_ = lean_ctor_get(v_after_653_, 1);
lean_inc(v_pos_656_);
lean_dec_ref(v_after_653_);
v___x_657_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v_pos_655_, v_pos_656_, v_d_654_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange___boxed(lean_object* v_before_658_, lean_object* v_after_659_, lean_object* v_d_660_){
_start:
{
uint8_t v_d_boxed_661_; lean_object* v_res_662_; 
v_d_boxed_661_ = lean_unbox(v_d_660_);
v_res_662_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_658_, v_after_659_, v_d_boxed_661_);
return v_res_662_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(lean_object* v_d_663_){
_start:
{
lean_object* v_changesBefore_664_; lean_object* v_changesAfter_665_; uint8_t v___y_667_; uint8_t v___y_668_; 
v_changesBefore_664_ = lean_ctor_get(v_d_663_, 0);
v_changesAfter_665_ = lean_ctor_get(v_d_663_, 1);
if (lean_obj_tag(v_changesAfter_665_) == 0)
{
uint8_t v___x_670_; uint8_t v___x_671_; 
v___x_670_ = 0;
v___x_671_ = 1;
v___y_667_ = v___x_671_;
v___y_668_ = v___x_670_;
goto v___jp_666_;
}
else
{
uint8_t v___x_672_; 
v___x_672_ = 1;
v___y_667_ = v___x_672_;
v___y_668_ = v___x_672_;
goto v___jp_666_;
}
v___jp_666_:
{
if (lean_obj_tag(v_changesBefore_664_) == 0)
{
if (v___y_668_ == 0)
{
return v___y_668_;
}
else
{
uint8_t v___x_669_; 
v___x_669_ = 0;
return v___x_669_;
}
}
else
{
if (v___y_668_ == 0)
{
return v___y_668_;
}
else
{
return v___y_667_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty___boxed(lean_object* v_d_673_){
_start:
{
uint8_t v_res_674_; lean_object* v_r_675_; 
v_res_674_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_d_673_);
lean_dec_ref(v_d_673_);
v_r_675_ = lean_box(v_res_674_);
return v_r_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0(lean_object* v_k_676_, lean_object* v_b_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
lean_object* v___x_683_; 
lean_inc(v___y_681_);
lean_inc_ref(v___y_680_);
lean_inc(v___y_679_);
lean_inc_ref(v___y_678_);
v___x_683_ = lean_apply_6(v_k_676_, v_b_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_, lean_box(0));
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0___boxed(lean_object* v_k_684_, lean_object* v_b_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0(v_k_684_, v_b_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(lean_object* v_name_692_, uint8_t v_bi_693_, lean_object* v_type_694_, lean_object* v_k_695_, uint8_t v_kind_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v___f_702_; lean_object* v___x_703_; 
v___f_702_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_702_, 0, v_k_695_);
v___x_703_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_692_, v_bi_693_, v_type_694_, v___f_702_, v_kind_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_703_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_703_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
v_a_712_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_703_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_703_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg___boxed(lean_object* v_name_720_, lean_object* v_bi_721_, lean_object* v_type_722_, lean_object* v_k_723_, lean_object* v_kind_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
uint8_t v_bi_boxed_730_; uint8_t v_kind_boxed_731_; lean_object* v_res_732_; 
v_bi_boxed_730_ = lean_unbox(v_bi_721_);
v_kind_boxed_731_ = lean_unbox(v_kind_724_);
v_res_732_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_name_720_, v_bi_boxed_730_, v_type_722_, v_k_723_, v_kind_boxed_731_, v___y_725_, v___y_726_, v___y_727_, v___y_728_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_727_);
lean_dec(v___y_726_);
lean_dec_ref(v___y_725_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6(lean_object* v_00_u03b1_733_, lean_object* v_name_734_, uint8_t v_bi_735_, lean_object* v_type_736_, lean_object* v_k_737_, uint8_t v_kind_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_name_734_, v_bi_735_, v_type_736_, v_k_737_, v_kind_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___boxed(lean_object* v_00_u03b1_745_, lean_object* v_name_746_, lean_object* v_bi_747_, lean_object* v_type_748_, lean_object* v_k_749_, lean_object* v_kind_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
uint8_t v_bi_boxed_756_; uint8_t v_kind_boxed_757_; lean_object* v_res_758_; 
v_bi_boxed_756_ = lean_unbox(v_bi_747_);
v_kind_boxed_757_ = lean_unbox(v_kind_750_);
v_res_758_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6(v_00_u03b1_745_, v_name_746_, v_bi_boxed_756_, v_type_748_, v_k_749_, v_kind_boxed_757_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(lean_object* v_msgData_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_){
_start:
{
lean_object* v___x_765_; lean_object* v_env_766_; uint8_t v___x_767_; lean_object* v_env_768_; lean_object* v___x_769_; lean_object* v_toCold_770_; lean_object* v_mctx_771_; lean_object* v_lctx_772_; lean_object* v_options_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v___x_765_ = lean_st_ref_get(v___y_763_);
v_env_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc_ref(v_env_766_);
lean_dec(v___x_765_);
v___x_767_ = 0;
v_env_768_ = l_Lean_Environment_setRecordingDeps(v_env_766_, v___x_767_);
v___x_769_ = lean_st_ref_get(v___y_761_);
v_toCold_770_ = lean_ctor_get(v___y_762_, 0);
v_mctx_771_ = lean_ctor_get(v___x_769_, 0);
lean_inc_ref(v_mctx_771_);
lean_dec(v___x_769_);
v_lctx_772_ = lean_ctor_get(v___y_760_, 2);
v_options_773_ = lean_ctor_get(v_toCold_770_, 2);
lean_inc_ref(v_options_773_);
lean_inc_ref(v_lctx_772_);
v___x_774_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_774_, 0, v_env_768_);
lean_ctor_set(v___x_774_, 1, v_mctx_771_);
lean_ctor_set(v___x_774_, 2, v_lctx_772_);
lean_ctor_set(v___x_774_, 3, v_options_773_);
v___x_775_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
lean_ctor_set(v___x_775_, 1, v_msgData_759_);
v___x_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4___boxed(lean_object* v_msgData_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(v_msgData_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(lean_object* v_msg_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
lean_object* v_ref_790_; lean_object* v___x_791_; lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_800_; 
v_ref_790_ = lean_ctor_get(v___y_787_, 2);
v___x_791_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3_spec__4(v_msg_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
v_a_792_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_800_ == 0)
{
v___x_794_ = v___x_791_;
v_isShared_795_ = v_isSharedCheck_800_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_791_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_800_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v___x_798_; 
lean_inc(v_ref_790_);
v___x_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_796_, 0, v_ref_790_);
lean_ctor_set(v___x_796_, 1, v_a_792_);
if (v_isShared_795_ == 0)
{
lean_ctor_set_tag(v___x_794_, 1);
lean_ctor_set(v___x_794_, 0, v___x_796_);
v___x_798_ = v___x_794_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_796_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg___boxed(lean_object* v_msg_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v_msg_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
lean_dec(v___y_803_);
lean_dec_ref(v___y_802_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(lean_object* v_x_808_, lean_object* v_x_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
if (lean_obj_tag(v_x_808_) == 0)
{
lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_815_ = l_List_reverse___redArg(v_x_809_);
v___x_816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
return v___x_816_;
}
else
{
lean_object* v_head_817_; lean_object* v_tail_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_836_; 
v_head_817_ = lean_ctor_get(v_x_808_, 0);
v_tail_818_ = lean_ctor_get(v_x_808_, 1);
v_isSharedCheck_836_ = !lean_is_exclusive(v_x_808_);
if (v_isSharedCheck_836_ == 0)
{
v___x_820_ = v_x_808_;
v_isShared_821_ = v_isSharedCheck_836_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_tail_818_);
lean_inc(v_head_817_);
lean_dec(v_x_808_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_836_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_822_; 
v___x_822_ = l_Lean_Meta_getFVarFromUserName(v_head_817_, v___y_810_, v___y_811_, v___y_812_, v___y_813_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_825_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v___x_822_, 1);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 1, v_x_809_);
lean_ctor_set(v___x_820_, 0, v_a_823_);
v___x_825_ = v___x_820_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_823_);
lean_ctor_set(v_reuseFailAlloc_827_, 1, v_x_809_);
v___x_825_ = v_reuseFailAlloc_827_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
v_x_808_ = v_tail_818_;
v_x_809_ = v___x_825_;
goto _start;
}
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
lean_del_object(v___x_820_);
lean_dec(v_tail_818_);
lean_dec(v_x_809_);
v_a_828_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_822_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_822_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2___boxed(lean_object* v_x_837_, lean_object* v_x_838_, lean_object* v___y_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(v_x_837_, v_x_838_, v___y_839_, v___y_840_, v___y_841_, v___y_842_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v___y_840_);
lean_dec_ref(v___y_839_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(lean_object* v_upperBound_845_, lean_object* v_before_846_, lean_object* v_a_847_, lean_object* v_b_848_){
_start:
{
uint8_t v___x_850_; 
v___x_850_ = lean_nat_dec_lt(v_a_847_, v_upperBound_845_);
if (v___x_850_ == 0)
{
lean_object* v___x_851_; 
lean_dec(v_a_847_);
lean_dec_ref(v_before_846_);
v___x_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_851_, 0, v_b_848_);
return v___x_851_;
}
else
{
lean_object* v_pos_852_; lean_object* v___x_853_; uint8_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_pos_852_ = lean_ctor_get(v_before_846_, 1);
lean_inc(v_pos_852_);
lean_inc(v_a_847_);
v___x_853_ = l_Lean_SubExpr_Pos_pushNthBindingDomain(v_a_847_, v_pos_852_);
v___x_854_ = 1;
v___x_855_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_insertBeforeChange(v___x_853_, v___x_854_, v_b_848_);
v___x_856_ = lean_unsigned_to_nat(1u);
v___x_857_ = lean_nat_add(v_a_847_, v___x_856_);
lean_dec(v_a_847_);
v_a_847_ = v___x_857_;
v_b_848_ = v___x_855_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg___boxed(lean_object* v_upperBound_859_, lean_object* v_before_860_, lean_object* v_a_861_, lean_object* v_b_862_, lean_object* v___y_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v_upperBound_859_, v_before_860_, v_a_861_, v_b_862_);
lean_dec(v_upperBound_859_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(lean_object* v_x_865_, lean_object* v_x_866_){
_start:
{
if (lean_obj_tag(v_x_865_) == 0)
{
lean_object* v___x_867_; 
v___x_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_867_, 0, v_x_866_);
return v___x_867_;
}
else
{
if (lean_obj_tag(v_x_866_) == 0)
{
lean_object* v___x_868_; 
v___x_868_ = lean_box(0);
return v___x_868_;
}
else
{
lean_object* v_head_869_; lean_object* v_tail_870_; lean_object* v_head_871_; lean_object* v_tail_872_; uint8_t v___x_873_; 
v_head_869_ = lean_ctor_get(v_x_865_, 0);
v_tail_870_ = lean_ctor_get(v_x_865_, 1);
v_head_871_ = lean_ctor_get(v_x_866_, 0);
lean_inc(v_head_871_);
v_tail_872_ = lean_ctor_get(v_x_866_, 1);
lean_inc(v_tail_872_);
lean_dec_ref_known(v_x_866_, 2);
v___x_873_ = lean_name_eq(v_head_869_, v_head_871_);
lean_dec(v_head_871_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; 
lean_dec(v_tail_872_);
v___x_874_ = lean_box(0);
return v___x_874_;
}
else
{
v_x_865_ = v_tail_870_;
v_x_866_ = v_tail_872_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0___boxed(lean_object* v_x_876_, lean_object* v_x_877_){
_start:
{
lean_object* v_res_878_; 
v_res_878_ = l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(v_x_876_, v_x_877_);
lean_dec(v_x_876_);
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l_List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0(lean_object* v_l_u2081_879_, lean_object* v_l_u2082_880_){
_start:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_881_ = l_List_reverse___redArg(v_l_u2081_879_);
v___x_882_ = l_List_reverse___redArg(v_l_u2082_880_);
v___x_883_ = l_List_isPrefixOf_x3f___at___00List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0_spec__0(v___x_881_, v___x_882_);
lean_dec(v___x_881_);
if (lean_obj_tag(v___x_883_) == 0)
{
return v___x_883_;
}
else
{
lean_object* v_val_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_892_; 
v_val_884_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_892_ == 0)
{
v___x_886_ = v___x_883_;
v_isShared_887_ = v_isSharedCheck_892_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_val_884_);
lean_dec(v___x_883_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_892_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_888_; lean_object* v___x_890_; 
v___x_888_ = l_List_reverse___redArg(v_val_884_);
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 0, v___x_888_);
v___x_890_ = v___x_886_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_888_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(uint8_t v_b_u2082_893_, lean_object* v_k_894_, lean_object* v_t_895_){
_start:
{
if (lean_obj_tag(v_t_895_) == 0)
{
lean_object* v_size_896_; lean_object* v_k_897_; lean_object* v_v_898_; lean_object* v_l_899_; lean_object* v_r_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_914_; 
v_size_896_ = lean_ctor_get(v_t_895_, 0);
v_k_897_ = lean_ctor_get(v_t_895_, 1);
v_v_898_ = lean_ctor_get(v_t_895_, 2);
v_l_899_ = lean_ctor_get(v_t_895_, 3);
v_r_900_ = lean_ctor_get(v_t_895_, 4);
v_isSharedCheck_914_ = !lean_is_exclusive(v_t_895_);
if (v_isSharedCheck_914_ == 0)
{
v___x_902_ = v_t_895_;
v_isShared_903_ = v_isSharedCheck_914_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_r_900_);
lean_inc(v_l_899_);
lean_inc(v_v_898_);
lean_inc(v_k_897_);
lean_inc(v_size_896_);
lean_dec(v_t_895_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_914_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
uint8_t v___x_904_; 
v___x_904_ = lean_nat_dec_lt(v_k_894_, v_k_897_);
if (v___x_904_ == 0)
{
uint8_t v___x_905_; 
v___x_905_ = lean_nat_dec_eq(v_k_894_, v_k_897_);
if (v___x_905_ == 0)
{
lean_object* v_impl_906_; lean_object* v___x_907_; 
lean_del_object(v___x_902_);
lean_dec(v_size_896_);
v_impl_906_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_893_, v_k_894_, v_r_900_);
v___x_907_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_897_, v_v_898_, v_l_899_, v_impl_906_);
return v___x_907_;
}
else
{
lean_object* v___x_908_; lean_object* v___x_910_; 
lean_dec(v_v_898_);
lean_dec(v_k_897_);
v___x_908_ = lean_box(v_b_u2082_893_);
if (v_isShared_903_ == 0)
{
lean_ctor_set(v___x_902_, 2, v___x_908_);
lean_ctor_set(v___x_902_, 1, v_k_894_);
v___x_910_ = v___x_902_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_size_896_);
lean_ctor_set(v_reuseFailAlloc_911_, 1, v_k_894_);
lean_ctor_set(v_reuseFailAlloc_911_, 2, v___x_908_);
lean_ctor_set(v_reuseFailAlloc_911_, 3, v_l_899_);
lean_ctor_set(v_reuseFailAlloc_911_, 4, v_r_900_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
else
{
lean_object* v_impl_912_; lean_object* v___x_913_; 
lean_del_object(v___x_902_);
lean_dec(v_size_896_);
v_impl_912_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_893_, v_k_894_, v_l_899_);
v___x_913_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_897_, v_v_898_, v_impl_912_, v_r_900_);
return v___x_913_;
}
}
}
else
{
lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_915_ = lean_unsigned_to_nat(1u);
v___x_916_ = lean_box(v_b_u2082_893_);
v___x_917_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_917_, 0, v___x_915_);
lean_ctor_set(v___x_917_, 1, v_k_894_);
lean_ctor_set(v___x_917_, 2, v___x_916_);
lean_ctor_set(v___x_917_, 3, v_t_895_);
lean_ctor_set(v___x_917_, 4, v_t_895_);
return v___x_917_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg___boxed(lean_object* v_b_u2082_918_, lean_object* v_k_919_, lean_object* v_t_920_){
_start:
{
uint8_t v_b_u2082_boxed_921_; lean_object* v_res_922_; 
v_b_u2082_boxed_921_ = lean_unbox(v_b_u2082_918_);
v_res_922_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_boxed_921_, v_k_919_, v_t_920_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(lean_object* v_init_923_, lean_object* v_x_924_){
_start:
{
if (lean_obj_tag(v_x_924_) == 0)
{
lean_object* v_k_925_; lean_object* v_v_926_; lean_object* v_l_927_; lean_object* v_r_928_; lean_object* v___x_929_; uint8_t v___x_930_; lean_object* v___x_931_; 
v_k_925_ = lean_ctor_get(v_x_924_, 1);
lean_inc(v_k_925_);
v_v_926_ = lean_ctor_get(v_x_924_, 2);
lean_inc(v_v_926_);
v_l_927_ = lean_ctor_get(v_x_924_, 3);
lean_inc(v_l_927_);
v_r_928_ = lean_ctor_get(v_x_924_, 4);
lean_inc(v_r_928_);
lean_dec_ref_known(v_x_924_, 5);
v___x_929_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_init_923_, v_l_927_);
v___x_930_ = lean_unbox(v_v_926_);
lean_dec(v_v_926_);
v___x_931_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v___x_930_, v_k_925_, v___x_929_);
v_init_923_ = v___x_931_;
v_x_924_ = v_r_928_;
goto _start;
}
else
{
return v_init_923_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(lean_object* v_as_933_, size_t v_i_934_, size_t v_stop_935_, lean_object* v_b_936_){
_start:
{
uint8_t v___x_937_; 
v___x_937_ = lean_usize_dec_eq(v_i_934_, v_stop_935_);
if (v___x_937_ == 0)
{
lean_object* v_changesBefore_938_; lean_object* v_changesAfter_939_; lean_object* v___x_940_; lean_object* v_changesBefore_941_; lean_object* v_changesAfter_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_954_; 
v_changesBefore_938_ = lean_ctor_get(v_b_936_, 0);
lean_inc(v_changesBefore_938_);
v_changesAfter_939_ = lean_ctor_get(v_b_936_, 1);
lean_inc(v_changesAfter_939_);
lean_dec_ref(v_b_936_);
v___x_940_ = lean_array_uget(v_as_933_, v_i_934_);
v_changesBefore_941_ = lean_ctor_get(v___x_940_, 0);
v_changesAfter_942_ = lean_ctor_get(v___x_940_, 1);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_954_ == 0)
{
v___x_944_ = v___x_940_;
v_isShared_945_ = v_isSharedCheck_954_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_changesAfter_942_);
lean_inc(v_changesBefore_941_);
lean_dec(v___x_940_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_954_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_949_; 
v___x_946_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_938_, v_changesBefore_941_);
v___x_947_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_939_, v_changesAfter_942_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 1, v___x_947_);
lean_ctor_set(v___x_944_, 0, v___x_946_);
v___x_949_ = v___x_944_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_946_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v___x_947_);
v___x_949_ = v_reuseFailAlloc_953_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
size_t v___x_950_; size_t v___x_951_; 
v___x_950_ = ((size_t)1ULL);
v___x_951_ = lean_usize_add(v_i_934_, v___x_950_);
v_i_934_ = v___x_951_;
v_b_936_ = v___x_949_;
goto _start;
}
}
}
else
{
return v_b_936_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10___boxed(lean_object* v_as_955_, lean_object* v_i_956_, lean_object* v_stop_957_, lean_object* v_b_958_){
_start:
{
size_t v_i_boxed_959_; size_t v_stop_boxed_960_; lean_object* v_res_961_; 
v_i_boxed_959_ = lean_unbox_usize(v_i_956_);
lean_dec(v_i_956_);
v_stop_boxed_960_ = lean_unbox_usize(v_stop_957_);
lean_dec(v_stop_957_);
v_res_961_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(v_as_955_, v_i_boxed_959_, v_stop_boxed_960_, v_b_958_);
lean_dec_ref(v_as_955_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(lean_object* v_x_962_, lean_object* v_x_963_, lean_object* v_x_964_){
_start:
{
if (lean_obj_tag(v_x_962_) == 5)
{
lean_object* v_fn_965_; lean_object* v_arg_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v_fn_965_ = lean_ctor_get(v_x_962_, 0);
lean_inc_ref(v_fn_965_);
v_arg_966_ = lean_ctor_get(v_x_962_, 1);
lean_inc_ref(v_arg_966_);
lean_dec_ref_known(v_x_962_, 2);
v___x_967_ = lean_array_set(v_x_963_, v_x_964_, v_arg_966_);
v___x_968_ = lean_unsigned_to_nat(1u);
v___x_969_ = lean_nat_sub(v_x_964_, v___x_968_);
lean_dec(v_x_964_);
v_x_962_ = v_fn_965_;
v_x_963_ = v___x_967_;
v_x_964_ = v___x_969_;
goto _start;
}
else
{
lean_object* v___x_971_; 
lean_dec(v_x_964_);
v___x_971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_971_, 0, v_x_962_);
lean_ctor_set(v___x_971_, 1, v_x_963_);
return v___x_971_;
}
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0(void){
_start:
{
lean_object* v___x_972_; lean_object* v_dummy_973_; 
v___x_972_ = lean_box(0);
v_dummy_973_ = l_Lean_Expr_sort___override(v___x_972_);
return v_dummy_973_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(lean_object* v_snd_974_, lean_object* v_before_975_, lean_object* v_after_976_, size_t v_sz_977_, size_t v_i_978_, lean_object* v_bs_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
uint8_t v___x_985_; 
v___x_985_ = lean_usize_dec_lt(v_i_978_, v_sz_977_);
if (v___x_985_ == 0)
{
lean_object* v___x_986_; 
v___x_986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_986_, 0, v_bs_979_);
return v___x_986_;
}
else
{
lean_object* v_v_987_; lean_object* v_fst_988_; lean_object* v_snd_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_1019_; 
v_v_987_ = lean_array_uget(v_bs_979_, v_i_978_);
v_fst_988_ = lean_ctor_get(v_v_987_, 0);
v_snd_989_ = lean_ctor_get(v_v_987_, 1);
v_isSharedCheck_1019_ = !lean_is_exclusive(v_v_987_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_991_ = v_v_987_;
v_isShared_992_ = v_isSharedCheck_1019_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_snd_989_);
lean_inc(v_fst_988_);
lean_dec(v_v_987_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_1019_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v_pos_993_; lean_object* v_pos_994_; lean_object* v___x_995_; lean_object* v_bs_x27_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1001_; 
v_pos_993_ = lean_ctor_get(v_before_975_, 1);
v_pos_994_ = lean_ctor_get(v_after_976_, 1);
v___x_995_ = lean_unsigned_to_nat(0u);
v_bs_x27_996_ = lean_array_uset(v_bs_979_, v_i_978_, v___x_995_);
v___x_997_ = lean_usize_to_nat(v_i_978_);
v___x_998_ = lean_array_get_size(v_snd_974_);
v___x_999_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_998_, v___x_997_, v_pos_993_);
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 1, v___x_999_);
v___x_1001_ = v___x_991_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_fst_988_);
lean_ctor_set(v_reuseFailAlloc_1018_, 1, v___x_999_);
v___x_1001_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1002_ = l_Lean_SubExpr_Pos_pushNaryArg(v___x_998_, v___x_997_, v_pos_994_);
lean_dec(v___x_997_);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v_snd_989_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1001_, v___x_1003_, v___y_980_, v___y_981_, v___y_982_, v___y_983_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; size_t v___x_1006_; size_t v___x_1007_; lean_object* v___x_1008_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_1004_, 1);
v___x_1006_ = ((size_t)1ULL);
v___x_1007_ = lean_usize_add(v_i_978_, v___x_1006_);
v___x_1008_ = lean_array_uset(v_bs_x27_996_, v_i_978_, v_a_1005_);
v_i_978_ = v___x_1007_;
v_bs_979_ = v___x_1008_;
goto _start;
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_dec_ref(v_bs_x27_996_);
v_a_1010_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_1004_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_1004_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
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
}
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__0));
v___x_1022_ = l_Lean_stringToMessageData(v___x_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0___boxed(lean_object* v_body_1023_, lean_object* v_pos_1024_, lean_object* v_body_1025_, lean_object* v_pos_1026_, lean_object* v_x_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0(v_body_1023_, v_pos_1024_, v_body_1025_, v_pos_1026_, v_x_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec_ref(v_x_1027_);
lean_dec(v_pos_1026_);
lean_dec_ref(v_body_1025_);
lean_dec(v_pos_1024_);
lean_dec_ref(v_body_1023_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(lean_object* v_before_1034_, lean_object* v_after_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_){
_start:
{
lean_object* v___y_1042_; lean_object* v___y_1043_; lean_object* v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v_a_1047_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1053_; lean_object* v___y_1054_; lean_object* v___y_1055_; lean_object* v___y_1056_; lean_object* v___y_1057_; lean_object* v_a_1058_; lean_object* v___y_1072_; lean_object* v___y_1073_; lean_object* v___y_1074_; lean_object* v___y_1075_; lean_object* v___y_1076_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v_expr_1109_; 
v_expr_1109_ = lean_ctor_get(v_before_1034_, 0);
if (lean_obj_tag(v_expr_1109_) == 7)
{
lean_object* v_pos_1110_; lean_object* v_binderName_1111_; lean_object* v_binderType_1112_; lean_object* v_body_1113_; uint8_t v_binderInfo_1114_; lean_object* v_expr_1115_; lean_object* v_pos_1116_; lean_object* v___y_1118_; lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v___y_1121_; 
v_pos_1110_ = lean_ctor_get(v_before_1034_, 1);
v_binderName_1111_ = lean_ctor_get(v_expr_1109_, 0);
v_binderType_1112_ = lean_ctor_get(v_expr_1109_, 1);
v_body_1113_ = lean_ctor_get(v_expr_1109_, 2);
v_binderInfo_1114_ = lean_ctor_get_uint8(v_expr_1109_, sizeof(void*)*3 + 8);
v_expr_1115_ = lean_ctor_get(v_after_1035_, 0);
v_pos_1116_ = lean_ctor_get(v_after_1035_, 1);
if (lean_obj_tag(v_expr_1115_) == 7)
{
lean_object* v_binderName_1142_; lean_object* v_binderType_1143_; lean_object* v_body_1144_; uint8_t v_binderInfo_1145_; uint8_t v___x_1146_; 
v_binderName_1142_ = lean_ctor_get(v_expr_1115_, 0);
v_binderType_1143_ = lean_ctor_get(v_expr_1115_, 1);
v_body_1144_ = lean_ctor_get(v_expr_1115_, 2);
v_binderInfo_1145_ = lean_ctor_get_uint8(v_expr_1115_, sizeof(void*)*3 + 8);
v___x_1146_ = lean_name_eq(v_binderName_1111_, v_binderName_1142_);
if (v___x_1146_ == 0)
{
v___y_1118_ = v_a_1036_;
v___y_1119_ = v_a_1037_;
v___y_1120_ = v_a_1038_;
v___y_1121_ = v_a_1039_;
goto v___jp_1117_;
}
else
{
uint8_t v___x_1147_; 
v___x_1147_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1114_, v_binderInfo_1145_);
if (v___x_1147_ == 0)
{
v___y_1118_ = v_a_1036_;
v___y_1119_ = v_a_1037_;
v___y_1120_ = v_a_1038_;
v___y_1121_ = v_a_1039_;
goto v___jp_1117_;
}
else
{
lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1195_; 
lean_inc_ref(v_body_1144_);
lean_inc_ref(v_binderType_1143_);
lean_inc(v_pos_1116_);
lean_inc_ref(v_body_1113_);
lean_inc_ref(v_binderType_1112_);
lean_inc(v_binderName_1111_);
lean_inc(v_pos_1110_);
v_isSharedCheck_1195_ = !lean_is_exclusive(v_before_1034_);
if (v_isSharedCheck_1195_ == 0)
{
lean_object* v_unused_1196_; lean_object* v_unused_1197_; 
v_unused_1196_ = lean_ctor_get(v_before_1034_, 1);
lean_dec(v_unused_1196_);
v_unused_1197_ = lean_ctor_get(v_before_1034_, 0);
lean_dec(v_unused_1197_);
v___x_1149_ = v_before_1034_;
v_isShared_1150_ = v_isSharedCheck_1195_;
goto v_resetjp_1148_;
}
else
{
lean_dec(v_before_1034_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1195_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1192_; 
v_isSharedCheck_1192_ = !lean_is_exclusive(v_after_1035_);
if (v_isSharedCheck_1192_ == 0)
{
lean_object* v_unused_1193_; lean_object* v_unused_1194_; 
v_unused_1193_ = lean_ctor_get(v_after_1035_, 1);
lean_dec(v_unused_1193_);
v_unused_1194_ = lean_ctor_get(v_after_1035_, 0);
lean_dec(v_unused_1194_);
v___x_1152_ = v_after_1035_;
v_isShared_1153_ = v_isSharedCheck_1192_;
goto v_resetjp_1151_;
}
else
{
lean_dec(v_after_1035_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1192_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___f_1154_; lean_object* v___x_1155_; lean_object* v___x_1157_; 
lean_inc(v_pos_1116_);
lean_inc(v_pos_1110_);
v___f_1154_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1154_, 0, v_body_1113_);
lean_closure_set(v___f_1154_, 1, v_pos_1110_);
lean_closure_set(v___f_1154_, 2, v_body_1144_);
lean_closure_set(v___f_1154_, 3, v_pos_1116_);
v___x_1155_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1110_);
lean_inc_ref(v_binderType_1112_);
if (v_isShared_1153_ == 0)
{
lean_ctor_set(v___x_1152_, 1, v___x_1155_);
lean_ctor_set(v___x_1152_, 0, v_binderType_1112_);
v___x_1157_ = v___x_1152_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_binderType_1112_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v___x_1155_);
v___x_1157_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
lean_object* v___x_1158_; lean_object* v___x_1160_; 
v___x_1158_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1116_);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 1, v___x_1158_);
lean_ctor_set(v___x_1149_, 0, v_binderType_1143_);
v___x_1160_ = v___x_1149_;
goto v_reusejp_1159_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_binderType_1143_);
lean_ctor_set(v_reuseFailAlloc_1190_, 1, v___x_1158_);
v___x_1160_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1159_;
}
v_reusejp_1159_:
{
lean_object* v___x_1161_; 
v___x_1161_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1157_, v___x_1160_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1189_; 
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1164_ = v___x_1161_;
v_isShared_1165_ = v_isSharedCheck_1189_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1161_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1189_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
uint8_t v___x_1166_; 
v___x_1166_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_a_1162_);
if (v___x_1166_ == 0)
{
lean_object* v_changesBefore_1167_; lean_object* v_changesAfter_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; uint8_t v___x_1171_; lean_object* v___x_1172_; lean_object* v_changesBefore_1173_; lean_object* v_changesAfter_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1186_; 
lean_dec_ref(v___f_1154_);
lean_dec_ref(v_binderType_1112_);
lean_dec(v_binderName_1111_);
v_changesBefore_1167_ = lean_ctor_get(v_a_1162_, 0);
lean_inc(v_changesBefore_1167_);
v_changesAfter_1168_ = lean_ctor_get(v_a_1162_, 1);
lean_inc(v_changesAfter_1168_);
lean_dec(v_a_1162_);
v___x_1169_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1110_);
lean_dec(v_pos_1110_);
v___x_1170_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1116_);
lean_dec(v_pos_1116_);
v___x_1171_ = 0;
v___x_1172_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v___x_1169_, v___x_1170_, v___x_1171_);
v_changesBefore_1173_ = lean_ctor_get(v___x_1172_, 0);
v_changesAfter_1174_ = lean_ctor_get(v___x_1172_, 1);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1176_ = v___x_1172_;
v_isShared_1177_ = v_isSharedCheck_1186_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_changesAfter_1174_);
lean_inc(v_changesBefore_1173_);
lean_dec(v___x_1172_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1186_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1181_; 
v___x_1178_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_1167_, v_changesBefore_1173_);
v___x_1179_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_1168_, v_changesAfter_1174_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 1, v___x_1179_);
lean_ctor_set(v___x_1176_, 0, v___x_1178_);
v___x_1181_ = v___x_1176_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1178_);
lean_ctor_set(v_reuseFailAlloc_1185_, 1, v___x_1179_);
v___x_1181_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
lean_object* v___x_1183_; 
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v___x_1181_);
v___x_1183_ = v___x_1164_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v___x_1181_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
else
{
uint8_t v___x_1187_; lean_object* v___x_1188_; 
lean_del_object(v___x_1164_);
lean_dec(v_a_1162_);
lean_dec(v_pos_1116_);
lean_dec(v_pos_1110_);
v___x_1187_ = 0;
v___x_1188_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__6___redArg(v_binderName_1111_, v_binderInfo_1114_, v_binderType_1112_, v___f_1154_, v___x_1187_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_);
return v___x_1188_;
}
}
}
else
{
lean_dec_ref(v___f_1154_);
lean_dec(v_pos_1116_);
lean_dec_ref(v_binderType_1112_);
lean_dec(v_binderName_1111_);
lean_dec(v_pos_1110_);
return v___x_1161_;
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
v___y_1118_ = v_a_1036_;
v___y_1119_ = v_a_1037_;
v___y_1120_ = v_a_1038_;
v___y_1121_ = v_a_1039_;
goto v___jp_1117_;
}
v___jp_1117_:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1122_ = l_Lean_Expr_getForallBinderNames(v_expr_1115_);
v___x_1123_ = l_Lean_Expr_getForallBinderNames(v_expr_1109_);
v___x_1124_ = l_List_isSuffixOf_x3f___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__0(v___x_1122_, v___x_1123_);
if (lean_obj_tag(v___x_1124_) == 1)
{
lean_object* v_val_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; 
v_val_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc(v_val_1125_);
lean_dec_ref_known(v___x_1124_, 1);
v___x_1126_ = l_List_lengthTR___redArg(v_val_1125_);
v___x_1127_ = lean_unsigned_to_nat(0u);
v___x_1128_ = lean_nat_dec_eq(v___x_1126_, v___x_1127_);
lean_dec(v___x_1126_);
if (v___x_1128_ == 0)
{
lean_inc_ref(v_expr_1109_);
lean_inc(v_pos_1110_);
v___y_1072_ = v_pos_1110_;
v___y_1073_ = v_val_1125_;
v___y_1074_ = v_expr_1109_;
v___y_1075_ = v___y_1118_;
v___y_1076_ = v___y_1119_;
v___y_1077_ = v___y_1120_;
v___y_1078_ = v___y_1121_;
goto v___jp_1071_;
}
else
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1, &l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___closed__1);
v___x_1130_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_1129_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_dec_ref_known(v___x_1130_, 1);
lean_inc_ref(v_expr_1109_);
lean_inc(v_pos_1110_);
v___y_1072_ = v_pos_1110_;
v___y_1073_ = v_val_1125_;
v___y_1074_ = v_expr_1109_;
v___y_1075_ = v___y_1118_;
v___y_1076_ = v___y_1119_;
v___y_1077_ = v___y_1120_;
v___y_1078_ = v___y_1121_;
goto v___jp_1071_;
}
else
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
lean_dec(v_val_1125_);
lean_dec_ref(v_after_1035_);
lean_dec_ref(v_before_1034_);
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1130_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1130_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
}
else
{
uint8_t v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
lean_dec(v___x_1124_);
v___x_1139_ = 0;
v___x_1140_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1034_, v_after_1035_, v___x_1139_);
v___x_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
return v___x_1141_;
}
}
}
else
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_dec_ref(v_after_1035_);
lean_dec_ref(v_before_1034_);
v___x_1198_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
return v___x_1199_;
}
v___jp_1041_:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = lean_unsigned_to_nat(0u);
v___x_1049_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v___y_1044_, v_before_1034_, v___x_1048_, v_a_1047_);
lean_dec(v___y_1044_);
return v___x_1049_;
}
v___jp_1050_:
{
uint8_t v___x_1059_; 
v___x_1059_ = l_Lean_Exception_isInterrupt(v_a_1058_);
if (v___x_1059_ == 0)
{
uint8_t v___x_1060_; 
v___x_1060_ = l_Lean_Exception_isRuntime(v_a_1058_);
if (v___x_1060_ == 0)
{
lean_object* v___x_1061_; 
lean_dec_ref(v___y_1057_);
v___x_1061_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1056_, v___y_1055_, v___y_1054_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v___x_1062_; 
lean_dec_ref_known(v___x_1061_, 1);
v___x_1062_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___y_1042_ = v___y_1051_;
v___y_1043_ = v___y_1053_;
v___y_1044_ = v___y_1052_;
v___y_1045_ = v___y_1054_;
v___y_1046_ = v___y_1055_;
v_a_1047_ = v___x_1062_;
goto v___jp_1041_;
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
lean_dec(v___y_1052_);
lean_dec_ref(v_before_1034_);
v_a_1063_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v___x_1061_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1061_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
else
{
lean_dec_ref(v___y_1056_);
lean_dec(v___y_1052_);
lean_dec_ref(v_before_1034_);
return v___y_1057_;
}
}
else
{
lean_dec_ref(v_a_1058_);
lean_dec_ref(v___y_1056_);
lean_dec(v___y_1052_);
lean_dec_ref(v_before_1034_);
return v___y_1057_;
}
}
v___jp_1071_:
{
lean_object* v___x_1079_; lean_object* v_body_u2080_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1079_ = l_List_lengthTR___redArg(v___y_1073_);
lean_inc(v___x_1079_);
v_body_u2080_1080_ = l_Lean_Expr_getForallBodyMaxDepth(v___x_1079_, v___y_1074_);
lean_dec_ref(v___y_1074_);
v___x_1081_ = lean_box(0);
v___x_1082_ = l_Lean_Meta_saveState___redArg(v___y_1076_, v___y_1078_);
if (lean_obj_tag(v___x_1082_) == 0)
{
lean_object* v_a_1083_; lean_object* v___x_1084_; 
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
lean_inc(v_a_1083_);
lean_dec_ref_known(v___x_1082_, 1);
v___x_1084_ = l_List_mapM_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__2(v___y_1073_, v___x_1081_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1084_) == 0)
{
lean_object* v_a_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v_a_1085_ = lean_ctor_get(v___x_1084_, 0);
lean_inc(v_a_1085_);
lean_dec_ref_known(v___x_1084_, 1);
v___x_1086_ = lean_array_mk(v_a_1085_);
v___x_1087_ = lean_expr_instantiate_rev(v_body_u2080_1080_, v___x_1086_);
lean_dec_ref(v___x_1086_);
lean_dec_ref(v_body_u2080_1080_);
lean_inc(v___x_1079_);
v___x_1088_ = l_Lean_SubExpr_Pos_pushNthBindingBody(v___x_1079_, v___y_1072_);
v___x_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1087_);
lean_ctor_set(v___x_1089_, 1, v___x_1088_);
v___x_1090_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1089_, v_after_1035_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; 
lean_dec(v_a_1083_);
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___y_1042_ = v___y_1075_;
v___y_1043_ = v___y_1077_;
v___y_1044_ = v___x_1079_;
v___y_1045_ = v___y_1078_;
v___y_1046_ = v___y_1076_;
v_a_1047_ = v_a_1091_;
goto v___jp_1041_;
}
else
{
lean_object* v_a_1092_; 
v_a_1092_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1092_);
v___y_1051_ = v___y_1075_;
v___y_1052_ = v___x_1079_;
v___y_1053_ = v___y_1077_;
v___y_1054_ = v___y_1078_;
v___y_1055_ = v___y_1076_;
v___y_1056_ = v_a_1083_;
v___y_1057_ = v___x_1090_;
v_a_1058_ = v_a_1092_;
goto v___jp_1050_;
}
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
lean_dec_ref(v_body_u2080_1080_);
lean_dec(v___y_1072_);
lean_dec_ref(v_after_1035_);
v_a_1093_ = lean_ctor_get(v___x_1084_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___x_1084_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1084_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
lean_inc(v_a_1093_);
if (v_isShared_1096_ == 0)
{
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1093_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
v___y_1051_ = v___y_1075_;
v___y_1052_ = v___x_1079_;
v___y_1053_ = v___y_1077_;
v___y_1054_ = v___y_1078_;
v___y_1055_ = v___y_1076_;
v___y_1056_ = v_a_1083_;
v___y_1057_ = v___x_1098_;
v_a_1058_ = v_a_1093_;
goto v___jp_1050_;
}
}
}
}
else
{
lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1108_; 
lean_dec_ref(v_body_u2080_1080_);
lean_dec(v___x_1079_);
lean_dec(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v_after_1035_);
lean_dec_ref(v_before_1034_);
v_a_1101_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1103_ = v___x_1082_;
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_dec(v___x_1082_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1106_; 
if (v_isShared_1104_ == 0)
{
v___x_1106_ = v___x_1103_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_a_1101_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(lean_object* v_before_1200_, lean_object* v_after_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_){
_start:
{
lean_object* v_expr_1223_; lean_object* v_pos_1224_; lean_object* v_expr_1225_; lean_object* v_pos_1226_; lean_object* v_e_u2081_1228_; lean_object* v___y_1229_; lean_object* v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; uint8_t v___x_1235_; 
v_expr_1223_ = lean_ctor_get(v_before_1200_, 0);
v_pos_1224_ = lean_ctor_get(v_before_1200_, 1);
v_expr_1225_ = lean_ctor_get(v_after_1201_, 0);
v_pos_1226_ = lean_ctor_get(v_after_1201_, 1);
v___x_1235_ = lean_expr_eqv(v_expr_1223_, v_expr_1225_);
if (v___x_1235_ == 0)
{
switch(lean_obj_tag(v_expr_1223_))
{
case 10:
{
lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1244_; 
lean_inc_ref(v_expr_1223_);
lean_inc(v_pos_1224_);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_before_1200_);
if (v_isSharedCheck_1244_ == 0)
{
lean_object* v_unused_1245_; lean_object* v_unused_1246_; 
v_unused_1245_ = lean_ctor_get(v_before_1200_, 1);
lean_dec(v_unused_1245_);
v_unused_1246_ = lean_ctor_get(v_before_1200_, 0);
lean_dec(v_unused_1246_);
v___x_1237_ = v_before_1200_;
v_isShared_1238_ = v_isSharedCheck_1244_;
goto v_resetjp_1236_;
}
else
{
lean_dec(v_before_1200_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1244_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v_expr_1239_; lean_object* v___x_1241_; 
v_expr_1239_ = lean_ctor_get(v_expr_1223_, 1);
lean_inc_ref(v_expr_1239_);
lean_dec_ref_known(v_expr_1223_, 2);
if (v_isShared_1238_ == 0)
{
lean_ctor_set(v___x_1237_, 0, v_expr_1239_);
v___x_1241_ = v___x_1237_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_expr_1239_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v_pos_1224_);
v___x_1241_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
v_before_1200_ = v___x_1241_;
goto _start;
}
}
}
case 5:
{
switch(lean_obj_tag(v_expr_1225_))
{
case 10:
{
lean_object* v_expr_1247_; 
lean_inc_ref(v_expr_1225_);
lean_inc(v_pos_1226_);
lean_dec_ref(v_after_1201_);
v_expr_1247_ = lean_ctor_get(v_expr_1225_, 1);
lean_inc_ref(v_expr_1247_);
lean_dec_ref_known(v_expr_1225_, 2);
v_e_u2081_1228_ = v_expr_1247_;
v___y_1229_ = v_a_1202_;
v___y_1230_ = v_a_1203_;
v___y_1231_ = v_a_1204_;
v___y_1232_ = v_a_1205_;
goto v___jp_1227_;
}
case 5:
{
lean_object* v_dummy_1248_; lean_object* v_nargs_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v_fst_1254_; lean_object* v_snd_1255_; lean_object* v_nargs_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v_fst_1260_; lean_object* v_snd_1261_; uint8_t v___x_1262_; 
v_dummy_1248_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0, &l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___closed__0);
v_nargs_1249_ = l_Lean_Expr_getAppNumArgs(v_expr_1225_);
lean_inc(v_nargs_1249_);
v___x_1250_ = lean_mk_array(v_nargs_1249_, v_dummy_1248_);
v___x_1251_ = lean_unsigned_to_nat(1u);
v___x_1252_ = lean_nat_sub(v_nargs_1249_, v___x_1251_);
lean_dec(v_nargs_1249_);
lean_inc_ref(v_expr_1225_);
v___x_1253_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(v_expr_1225_, v___x_1250_, v___x_1252_);
v_fst_1254_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_fst_1254_);
v_snd_1255_ = lean_ctor_get(v___x_1253_, 1);
lean_inc(v_snd_1255_);
lean_dec_ref(v___x_1253_);
v_nargs_1256_ = l_Lean_Expr_getAppNumArgs(v_expr_1223_);
lean_inc(v_nargs_1256_);
v___x_1257_ = lean_mk_array(v_nargs_1256_, v_dummy_1248_);
v___x_1258_ = lean_nat_sub(v_nargs_1256_, v___x_1251_);
lean_dec(v_nargs_1256_);
lean_inc_ref(v_expr_1223_);
v___x_1259_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__8(v_expr_1223_, v___x_1257_, v___x_1258_);
v_fst_1260_ = lean_ctor_get(v___x_1259_, 0);
lean_inc(v_fst_1260_);
v_snd_1261_ = lean_ctor_get(v___x_1259_, 1);
lean_inc(v_snd_1261_);
lean_dec_ref(v___x_1259_);
v___x_1262_ = lean_expr_eqv(v_fst_1254_, v_fst_1260_);
lean_dec(v_fst_1260_);
lean_dec(v_fst_1254_);
if (v___x_1262_ == 0)
{
lean_dec(v_snd_1261_);
lean_dec(v_snd_1255_);
goto v___jp_1215_;
}
else
{
lean_object* v___x_1263_; lean_object* v___x_1264_; uint8_t v___x_1265_; 
v___x_1263_ = lean_array_get_size(v_snd_1255_);
v___x_1264_ = lean_array_get_size(v_snd_1261_);
v___x_1265_ = lean_nat_dec_eq(v___x_1263_, v___x_1264_);
if (v___x_1265_ == 0)
{
lean_dec(v_snd_1261_);
lean_dec(v_snd_1255_);
goto v___jp_1215_;
}
else
{
lean_object* v_args_1266_; size_t v_sz_1267_; size_t v___x_1268_; lean_object* v___x_1269_; 
v_args_1266_ = l_Array_zip___redArg(v_snd_1255_, v_snd_1261_);
lean_dec(v_snd_1261_);
v_sz_1267_ = lean_array_size(v_args_1266_);
v___x_1268_ = ((size_t)0ULL);
v___x_1269_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(v_snd_1255_, v_before_1200_, v_after_1201_, v_sz_1267_, v___x_1268_, v_args_1266_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_);
lean_dec_ref(v_after_1201_);
lean_dec_ref(v_before_1200_);
lean_dec(v_snd_1255_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1286_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1272_ = v___x_1269_;
v_isShared_1273_ = v_isSharedCheck_1286_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1269_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1286_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1274_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1275_ = lean_unsigned_to_nat(0u);
v___x_1276_ = lean_array_get_size(v_a_1270_);
v___x_1277_ = lean_nat_dec_lt(v___x_1275_, v___x_1276_);
if (v___x_1277_ == 0)
{
lean_object* v___x_1279_; 
lean_dec(v_a_1270_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1274_);
v___x_1279_ = v___x_1272_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v___x_1274_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
return v___x_1279_;
}
}
else
{
size_t v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1284_; 
v___x_1281_ = lean_usize_of_nat(v___x_1276_);
v___x_1282_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__10(v_a_1270_, v___x_1268_, v___x_1281_, v___x_1274_);
lean_dec(v_a_1270_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1282_);
v___x_1284_ = v___x_1272_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v___x_1282_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
}
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
v_a_1287_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1269_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1269_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1292_; 
if (v_isShared_1290_ == 0)
{
v___x_1292_ = v___x_1289_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
}
}
default: 
{
goto v___jp_1219_;
}
}
}
case 7:
{
if (lean_obj_tag(v_expr_1225_) == 10)
{
lean_object* v_expr_1295_; 
lean_inc_ref(v_expr_1225_);
lean_inc(v_pos_1226_);
lean_dec_ref(v_after_1201_);
v_expr_1295_ = lean_ctor_get(v_expr_1225_, 1);
lean_inc_ref(v_expr_1295_);
lean_dec_ref_known(v_expr_1225_, 2);
v_e_u2081_1228_ = v_expr_1295_;
v___y_1229_ = v_a_1202_;
v___y_1230_ = v_a_1203_;
v___y_1231_ = v_a_1204_;
v___y_1232_ = v_a_1205_;
goto v___jp_1227_;
}
else
{
lean_object* v___x_1296_; 
v___x_1296_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(v_before_1200_, v_after_1201_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_);
return v___x_1296_;
}
}
case 6:
{
switch(lean_obj_tag(v_expr_1225_))
{
case 10:
{
lean_object* v_expr_1297_; 
lean_inc_ref(v_expr_1225_);
lean_inc(v_pos_1226_);
lean_dec_ref(v_after_1201_);
v_expr_1297_ = lean_ctor_get(v_expr_1225_, 1);
lean_inc_ref(v_expr_1297_);
lean_dec_ref_known(v_expr_1225_, 2);
v_e_u2081_1228_ = v_expr_1297_;
v___y_1229_ = v_a_1202_;
v___y_1230_ = v_a_1203_;
v___y_1231_ = v_a_1204_;
v___y_1232_ = v_a_1205_;
goto v___jp_1227_;
}
case 6:
{
lean_object* v_binderName_1298_; lean_object* v_binderType_1299_; lean_object* v_body_1300_; uint8_t v_binderInfo_1301_; lean_object* v_binderName_1302_; lean_object* v_binderType_1303_; lean_object* v_body_1304_; uint8_t v_binderInfo_1305_; uint8_t v___x_1306_; 
v_binderName_1298_ = lean_ctor_get(v_expr_1223_, 0);
v_binderType_1299_ = lean_ctor_get(v_expr_1223_, 1);
v_body_1300_ = lean_ctor_get(v_expr_1223_, 2);
v_binderInfo_1301_ = lean_ctor_get_uint8(v_expr_1223_, sizeof(void*)*3 + 8);
v_binderName_1302_ = lean_ctor_get(v_expr_1225_, 0);
v_binderType_1303_ = lean_ctor_get(v_expr_1225_, 1);
v_body_1304_ = lean_ctor_get(v_expr_1225_, 2);
v_binderInfo_1305_ = lean_ctor_get_uint8(v_expr_1225_, sizeof(void*)*3 + 8);
v___x_1306_ = lean_name_eq(v_binderName_1298_, v_binderName_1302_);
if (v___x_1306_ == 0)
{
goto v___jp_1211_;
}
else
{
uint8_t v___x_1307_; 
v___x_1307_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1301_, v_binderInfo_1305_);
if (v___x_1307_ == 0)
{
goto v___jp_1211_;
}
else
{
lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1357_; 
lean_inc_ref(v_body_1304_);
lean_inc_ref(v_binderType_1303_);
lean_inc_ref(v_body_1300_);
lean_inc_ref(v_binderType_1299_);
lean_inc(v_pos_1226_);
lean_inc(v_pos_1224_);
v_isSharedCheck_1357_ = !lean_is_exclusive(v_before_1200_);
if (v_isSharedCheck_1357_ == 0)
{
lean_object* v_unused_1358_; lean_object* v_unused_1359_; 
v_unused_1358_ = lean_ctor_get(v_before_1200_, 1);
lean_dec(v_unused_1358_);
v_unused_1359_ = lean_ctor_get(v_before_1200_, 0);
lean_dec(v_unused_1359_);
v___x_1309_ = v_before_1200_;
v_isShared_1310_ = v_isSharedCheck_1357_;
goto v_resetjp_1308_;
}
else
{
lean_dec(v_before_1200_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1357_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1354_; 
v_isSharedCheck_1354_ = !lean_is_exclusive(v_after_1201_);
if (v_isSharedCheck_1354_ == 0)
{
lean_object* v_unused_1355_; lean_object* v_unused_1356_; 
v_unused_1355_ = lean_ctor_get(v_after_1201_, 1);
lean_dec(v_unused_1355_);
v_unused_1356_ = lean_ctor_get(v_after_1201_, 0);
lean_dec(v_unused_1356_);
v___x_1312_ = v_after_1201_;
v_isShared_1313_ = v_isSharedCheck_1354_;
goto v_resetjp_1311_;
}
else
{
lean_dec(v_after_1201_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1354_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1314_; lean_object* v___x_1316_; 
v___x_1314_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1224_);
if (v_isShared_1313_ == 0)
{
lean_ctor_set(v___x_1312_, 1, v___x_1314_);
lean_ctor_set(v___x_1312_, 0, v_binderType_1299_);
v___x_1316_ = v___x_1312_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_binderType_1299_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
lean_object* v___x_1317_; lean_object* v___x_1319_; 
v___x_1317_ = l_Lean_SubExpr_Pos_pushBindingDomain(v_pos_1226_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 1, v___x_1317_);
lean_ctor_set(v___x_1309_, 0, v_binderType_1303_);
v___x_1319_ = v___x_1309_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_binderType_1303_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
lean_object* v___x_1320_; 
v___x_1320_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1316_, v___x_1319_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1351_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1323_ = v___x_1320_;
v_isShared_1324_ = v_isSharedCheck_1351_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v___x_1320_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1351_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
uint8_t v___x_1325_; 
v___x_1325_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_isEmpty(v_a_1321_);
if (v___x_1325_ == 0)
{
lean_object* v_changesBefore_1326_; lean_object* v_changesAfter_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; lean_object* v___x_1331_; lean_object* v_changesBefore_1332_; lean_object* v_changesAfter_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1345_; 
lean_dec_ref(v_body_1304_);
lean_dec_ref(v_body_1300_);
v_changesBefore_1326_ = lean_ctor_get(v_a_1321_, 0);
lean_inc(v_changesBefore_1326_);
v_changesAfter_1327_ = lean_ctor_get(v_a_1321_, 1);
lean_inc(v_changesAfter_1327_);
lean_dec(v_a_1321_);
v___x_1328_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1224_);
lean_dec(v_pos_1224_);
v___x_1329_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1226_);
lean_dec(v_pos_1226_);
v___x_1330_ = 0;
v___x_1331_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChangePos(v___x_1328_, v___x_1329_, v___x_1330_);
v_changesBefore_1332_ = lean_ctor_get(v___x_1331_, 0);
v_changesAfter_1333_ = lean_ctor_get(v___x_1331_, 1);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1335_ = v___x_1331_;
v_isShared_1336_ = v_isSharedCheck_1345_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_changesAfter_1333_);
lean_inc(v_changesBefore_1332_);
lean_dec(v___x_1331_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1345_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1340_; 
v___x_1337_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesBefore_1326_, v_changesBefore_1332_);
v___x_1338_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_changesAfter_1327_, v_changesAfter_1333_);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 1, v___x_1338_);
lean_ctor_set(v___x_1335_, 0, v___x_1337_);
v___x_1340_ = v___x_1335_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v___x_1337_);
lean_ctor_set(v_reuseFailAlloc_1344_, 1, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
lean_object* v___x_1342_; 
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 0, v___x_1340_);
v___x_1342_ = v___x_1323_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___x_1340_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
}
else
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
lean_del_object(v___x_1323_);
lean_dec(v_a_1321_);
v___x_1346_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1224_);
lean_dec(v_pos_1224_);
v___x_1347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1347_, 0, v_body_1300_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
v___x_1348_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1226_);
lean_dec(v_pos_1226_);
v___x_1349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1349_, 0, v_body_1304_);
lean_ctor_set(v___x_1349_, 1, v___x_1348_);
v_before_1200_ = v___x_1347_;
v_after_1201_ = v___x_1349_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_body_1304_);
lean_dec_ref(v_body_1300_);
lean_dec(v_pos_1226_);
lean_dec(v_pos_1224_);
return v___x_1320_;
}
}
}
}
}
}
}
}
default: 
{
goto v___jp_1219_;
}
}
}
case 11:
{
switch(lean_obj_tag(v_expr_1225_))
{
case 10:
{
lean_object* v_expr_1360_; 
lean_inc_ref(v_expr_1225_);
lean_inc(v_pos_1226_);
lean_dec_ref(v_after_1201_);
v_expr_1360_ = lean_ctor_get(v_expr_1225_, 1);
lean_inc_ref(v_expr_1360_);
lean_dec_ref_known(v_expr_1225_, 2);
v_e_u2081_1228_ = v_expr_1360_;
v___y_1229_ = v_a_1202_;
v___y_1230_ = v_a_1203_;
v___y_1231_ = v_a_1204_;
v___y_1232_ = v_a_1205_;
goto v___jp_1227_;
}
case 11:
{
lean_object* v_typeName_1361_; lean_object* v_idx_1362_; lean_object* v_struct_1363_; lean_object* v_typeName_1364_; lean_object* v_idx_1365_; lean_object* v_struct_1366_; uint8_t v___x_1367_; 
v_typeName_1361_ = lean_ctor_get(v_expr_1223_, 0);
v_idx_1362_ = lean_ctor_get(v_expr_1223_, 1);
v_struct_1363_ = lean_ctor_get(v_expr_1223_, 2);
v_typeName_1364_ = lean_ctor_get(v_expr_1225_, 0);
v_idx_1365_ = lean_ctor_get(v_expr_1225_, 1);
v_struct_1366_ = lean_ctor_get(v_expr_1225_, 2);
v___x_1367_ = lean_name_eq(v_typeName_1361_, v_typeName_1364_);
if (v___x_1367_ == 0)
{
goto v___jp_1207_;
}
else
{
uint8_t v___x_1368_; 
v___x_1368_ = lean_nat_dec_eq(v_idx_1362_, v_idx_1365_);
if (v___x_1368_ == 0)
{
goto v___jp_1207_;
}
else
{
lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1387_; 
lean_inc_ref(v_struct_1366_);
lean_inc_ref(v_struct_1363_);
lean_inc(v_pos_1226_);
lean_inc(v_pos_1224_);
v_isSharedCheck_1387_ = !lean_is_exclusive(v_before_1200_);
if (v_isSharedCheck_1387_ == 0)
{
lean_object* v_unused_1388_; lean_object* v_unused_1389_; 
v_unused_1388_ = lean_ctor_get(v_before_1200_, 1);
lean_dec(v_unused_1388_);
v_unused_1389_ = lean_ctor_get(v_before_1200_, 0);
lean_dec(v_unused_1389_);
v___x_1370_ = v_before_1200_;
v_isShared_1371_ = v_isSharedCheck_1387_;
goto v_resetjp_1369_;
}
else
{
lean_dec(v_before_1200_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1387_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v___x_1373_; uint8_t v_isShared_1374_; uint8_t v_isSharedCheck_1384_; 
v_isSharedCheck_1384_ = !lean_is_exclusive(v_after_1201_);
if (v_isSharedCheck_1384_ == 0)
{
lean_object* v_unused_1385_; lean_object* v_unused_1386_; 
v_unused_1385_ = lean_ctor_get(v_after_1201_, 1);
lean_dec(v_unused_1385_);
v_unused_1386_ = lean_ctor_get(v_after_1201_, 0);
lean_dec(v_unused_1386_);
v___x_1373_ = v_after_1201_;
v_isShared_1374_ = v_isSharedCheck_1384_;
goto v_resetjp_1372_;
}
else
{
lean_dec(v_after_1201_);
v___x_1373_ = lean_box(0);
v_isShared_1374_ = v_isSharedCheck_1384_;
goto v_resetjp_1372_;
}
v_resetjp_1372_:
{
lean_object* v___x_1375_; lean_object* v___x_1377_; 
v___x_1375_ = l_Lean_SubExpr_Pos_pushProj(v_pos_1224_);
lean_dec(v_pos_1224_);
if (v_isShared_1374_ == 0)
{
lean_ctor_set(v___x_1373_, 1, v___x_1375_);
lean_ctor_set(v___x_1373_, 0, v_struct_1363_);
v___x_1377_ = v___x_1373_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_struct_1363_);
lean_ctor_set(v_reuseFailAlloc_1383_, 1, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
lean_object* v___x_1378_; lean_object* v___x_1380_; 
v___x_1378_ = l_Lean_SubExpr_Pos_pushProj(v_pos_1226_);
lean_dec(v_pos_1226_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 1, v___x_1378_);
lean_ctor_set(v___x_1370_, 0, v_struct_1366_);
v___x_1380_ = v___x_1370_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_struct_1366_);
lean_ctor_set(v_reuseFailAlloc_1382_, 1, v___x_1378_);
v___x_1380_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
v_before_1200_ = v___x_1377_;
v_after_1201_ = v___x_1380_;
goto _start;
}
}
}
}
}
}
}
default: 
{
goto v___jp_1219_;
}
}
}
default: 
{
if (lean_obj_tag(v_expr_1225_) == 10)
{
lean_object* v_expr_1390_; 
lean_inc_ref(v_expr_1225_);
lean_inc(v_pos_1226_);
lean_dec_ref(v_after_1201_);
v_expr_1390_ = lean_ctor_get(v_expr_1225_, 1);
lean_inc_ref(v_expr_1390_);
lean_dec_ref_known(v_expr_1225_, 2);
v_e_u2081_1228_ = v_expr_1390_;
v___y_1229_ = v_a_1202_;
v___y_1230_ = v_a_1203_;
v___y_1231_ = v_a_1204_;
v___y_1232_ = v_a_1205_;
goto v___jp_1227_;
}
else
{
goto v___jp_1219_;
}
}
}
}
else
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
lean_dec_ref(v_after_1201_);
lean_dec_ref(v_before_1200_);
v___x_1391_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_instEmptyCollectionExprDiff___closed__0));
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
return v___x_1392_;
}
v___jp_1207_:
{
uint8_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1208_ = 0;
v___x_1209_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1200_, v_after_1201_, v___x_1208_);
v___x_1210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
return v___x_1210_;
}
v___jp_1211_:
{
uint8_t v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1212_ = 0;
v___x_1213_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1200_, v_after_1201_, v___x_1212_);
v___x_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
return v___x_1214_;
}
v___jp_1215_:
{
uint8_t v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1216_ = 0;
v___x_1217_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1200_, v_after_1201_, v___x_1216_);
v___x_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
return v___x_1218_;
}
v___jp_1219_:
{
uint8_t v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1220_ = 0;
v___x_1221_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiff_withChange(v_before_1200_, v_after_1201_, v___x_1220_);
v___x_1222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
return v___x_1222_;
}
v___jp_1227_:
{
lean_object* v___x_1233_; 
v___x_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1233_, 0, v_e_u2081_1228_);
lean_ctor_set(v___x_1233_, 1, v_pos_1226_);
v_after_1201_ = v___x_1233_;
v_a_1202_ = v___y_1229_;
v_a_1203_ = v___y_1230_;
v_a_1204_ = v___y_1231_;
v_a_1205_ = v___y_1232_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___lam__0(lean_object* v_body_1393_, lean_object* v_pos_1394_, lean_object* v_body_1395_, lean_object* v_pos_1396_, lean_object* v_x_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_){
_start:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1403_ = lean_expr_instantiate1(v_body_1393_, v_x_1397_);
v___x_1404_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1394_);
v___x_1405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1403_);
lean_ctor_set(v___x_1405_, 1, v___x_1404_);
v___x_1406_ = lean_expr_instantiate1(v_body_1395_, v_x_1397_);
v___x_1407_ = l_Lean_SubExpr_Pos_pushBindingBody(v_pos_1396_);
v___x_1408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1408_, 0, v___x_1406_);
lean_ctor_set(v___x_1408_, 1, v___x_1407_);
v___x_1409_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v___x_1405_, v___x_1408_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg___boxed(lean_object* v_snd_1410_, lean_object* v_before_1411_, lean_object* v_after_1412_, lean_object* v_sz_1413_, lean_object* v_i_1414_, lean_object* v_bs_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
size_t v_sz_boxed_1421_; size_t v_i_boxed_1422_; lean_object* v_res_1423_; 
v_sz_boxed_1421_ = lean_unbox_usize(v_sz_1413_);
lean_dec(v_sz_1413_);
v_i_boxed_1422_ = lean_unbox_usize(v_i_1414_);
lean_dec(v_i_1414_);
v_res_1423_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(v_snd_1410_, v_before_1411_, v_after_1412_, v_sz_boxed_1421_, v_i_boxed_1422_, v_bs_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
lean_dec(v___y_1417_);
lean_dec_ref(v___y_1416_);
lean_dec_ref(v_after_1412_);
lean_dec_ref(v_before_1411_);
lean_dec_ref(v_snd_1410_);
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff___boxed(lean_object* v_before_1424_, lean_object* v_after_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff(v_before_1424_, v_after_1425_, v_a_1426_, v_a_1427_, v_a_1428_, v_a_1429_);
lean_dec(v_a_1429_);
lean_dec_ref(v_a_1428_);
lean_dec(v_a_1427_);
lean_dec_ref(v_a_1426_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore___boxed(lean_object* v_before_1432_, lean_object* v_after_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_before_1432_, v_after_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_);
lean_dec(v_a_1437_);
lean_dec_ref(v_a_1436_);
lean_dec(v_a_1435_);
lean_dec_ref(v_a_1434_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1(lean_object* v_upperBound_1440_, lean_object* v_before_1441_, lean_object* v_inst_1442_, lean_object* v_R_1443_, lean_object* v_a_1444_, lean_object* v_b_1445_, lean_object* v_c_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v___x_1452_; 
v___x_1452_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___redArg(v_upperBound_1440_, v_before_1441_, v_a_1444_, v_b_1445_);
return v___x_1452_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1___boxed(lean_object* v_upperBound_1453_, lean_object* v_before_1454_, lean_object* v_inst_1455_, lean_object* v_R_1456_, lean_object* v_a_1457_, lean_object* v_b_1458_, lean_object* v_c_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__1(v_upperBound_1453_, v_before_1454_, v_inst_1455_, v_R_1456_, v_a_1457_, v_b_1458_, v_c_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec(v_upperBound_1453_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3(lean_object* v_00_u03b1_1466_, lean_object* v_msg_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v_msg_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___boxed(lean_object* v_00_u03b1_1474_, lean_object* v_msg_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3(v_00_u03b1_1474_, v_msg_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4(uint8_t v_b_u2082_1482_, lean_object* v_k_1483_, lean_object* v_t_1484_, lean_object* v_hl_1485_){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___redArg(v_b_u2082_1482_, v_k_1483_, v_t_1484_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4___boxed(lean_object* v_b_u2082_1487_, lean_object* v_k_1488_, lean_object* v_t_1489_, lean_object* v_hl_1490_){
_start:
{
uint8_t v_b_u2082_boxed_1491_; lean_object* v_res_1492_; 
v_b_u2082_boxed_1491_ = lean_unbox(v_b_u2082_1487_);
v_res_1492_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__4(v_b_u2082_boxed_1491_, v_k_1488_, v_t_1489_, v_hl_1490_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5(lean_object* v_init_1493_, lean_object* v_t_1494_){
_start:
{
lean_object* v___x_1495_; 
v___x_1495_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__5_spec__7(v_init_1493_, v_t_1494_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9(lean_object* v_snd_1496_, lean_object* v_before_1497_, lean_object* v_after_1498_, lean_object* v_as_1499_, size_t v_sz_1500_, size_t v_i_1501_, lean_object* v_bs_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___redArg(v_snd_1496_, v_before_1497_, v_after_1498_, v_sz_1500_, v_i_1501_, v_bs_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9___boxed(lean_object* v_snd_1509_, lean_object* v_before_1510_, lean_object* v_after_1511_, lean_object* v_as_1512_, lean_object* v_sz_1513_, lean_object* v_i_1514_, lean_object* v_bs_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
size_t v_sz_boxed_1521_; size_t v_i_boxed_1522_; lean_object* v_res_1523_; 
v_sz_boxed_1521_ = lean_unbox_usize(v_sz_1513_);
lean_dec(v_sz_1513_);
v_i_boxed_1522_ = lean_unbox_usize(v_i_1514_);
lean_dec(v_i_1514_);
v_res_1523_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_spec__9(v_snd_1509_, v_before_1510_, v_after_1511_, v_as_1512_, v_sz_boxed_1521_, v_i_boxed_1522_, v_bs_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
lean_dec_ref(v_as_1512_);
lean_dec_ref(v_after_1511_);
lean_dec_ref(v_before_1510_);
lean_dec_ref(v_snd_1509_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(lean_object* v_e_u2080_1524_, lean_object* v_e_u2081_1525_, uint8_t v_useAfter_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_){
_start:
{
lean_object* v___x_1532_; lean_object* v_s_u2080_1533_; lean_object* v_s_u2081_1534_; 
v___x_1532_ = l_Lean_SubExpr_Pos_root;
v_s_u2080_1533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_u2080_1533_, 0, v_e_u2080_1524_);
lean_ctor_set(v_s_u2080_1533_, 1, v___x_1532_);
v_s_u2081_1534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_u2081_1534_, 0, v_e_u2081_1525_);
lean_ctor_set(v_s_u2081_1534_, 1, v___x_1532_);
if (v_useAfter_1526_ == 0)
{
lean_object* v___x_1535_; 
v___x_1535_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_s_u2081_1534_, v_s_u2080_1533_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_);
return v___x_1535_;
}
else
{
lean_object* v___x_1536_; 
v___x_1536_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore(v_s_u2080_1533_, v_s_u2081_1534_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_);
return v___x_1536_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff___boxed(lean_object* v_e_u2080_1537_, lean_object* v_e_u2081_1538_, lean_object* v_useAfter_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_){
_start:
{
uint8_t v_useAfter_boxed_1545_; lean_object* v_res_1546_; 
v_useAfter_boxed_1545_ = lean_unbox(v_useAfter_1539_);
v_res_1546_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_e_u2080_1537_, v_e_u2081_1538_, v_useAfter_boxed_1545_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_);
lean_dec(v_a_1543_);
lean_dec_ref(v_a_1542_);
lean_dec(v_a_1541_);
lean_dec_ref(v_a_1540_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0(uint8_t v_useAfter_1547_, lean_object* v_info_1548_, uint8_t v_d_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
uint8_t v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1555_ = l___private_Lean_Widget_Diff_0__Lean_Widget_ExprDiffTag_toDiffTag(v_useAfter_1547_, v_d_1549_);
v___x_1556_ = l_Lean_Widget_SubexprInfo_withDiffTag(v___x_1555_, v_info_1548_);
v___x_1557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0___boxed(lean_object* v_useAfter_1558_, lean_object* v_info_1559_, lean_object* v_d_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
uint8_t v_useAfter_boxed_1566_; uint8_t v_d_boxed_1567_; lean_object* v_res_1568_; 
v_useAfter_boxed_1566_ = lean_unbox(v_useAfter_1558_);
v_d_boxed_1567_ = lean_unbox(v_d_1560_);
v_res_1568_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0(v_useAfter_boxed_1566_, v_info_1559_, v_d_boxed_1567_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
lean_dec(v___y_1562_);
lean_dec_ref(v___y_1561_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(lean_object* v_f_1569_, lean_object* v_x_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_){
_start:
{
switch(lean_obj_tag(v_x_1570_))
{
case 0:
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1584_; 
lean_dec_ref(v_f_1569_);
v_a_1576_ = lean_ctor_get(v_x_1570_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v_x_1570_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1578_ = v_x_1570_;
v_isShared_1579_ = v_isSharedCheck_1584_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v_x_1570_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1584_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v_a_1576_);
v___x_1581_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
lean_object* v___x_1582_; 
v___x_1582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1581_);
return v___x_1582_;
}
}
}
case 1:
{
lean_object* v_a_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1611_; 
v_a_1585_ = lean_ctor_get(v_x_1570_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v_x_1570_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1587_ = v_x_1570_;
v_isShared_1588_ = v_isSharedCheck_1611_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_a_1585_);
lean_dec(v_x_1570_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1611_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
size_t v_sz_1589_; size_t v___x_1590_; lean_object* v___x_1591_; 
v_sz_1589_ = lean_array_size(v_a_1585_);
v___x_1590_ = ((size_t)0ULL);
v___x_1591_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(v_f_1569_, v_sz_1589_, v___x_1590_, v_a_1585_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1602_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1594_ = v___x_1591_;
v_isShared_1595_ = v_isSharedCheck_1602_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1591_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1602_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1588_ == 0)
{
lean_ctor_set(v___x_1587_, 0, v_a_1592_);
v___x_1597_ = v___x_1587_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_a_1592_);
v___x_1597_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
lean_object* v___x_1599_; 
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 0, v___x_1597_);
v___x_1599_ = v___x_1594_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v___x_1597_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
else
{
lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
lean_del_object(v___x_1587_);
v_a_1603_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1605_ = v___x_1591_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_dec(v___x_1591_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1603_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
}
}
default: 
{
lean_object* v_a_1612_; lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1639_; 
v_a_1612_ = lean_ctor_get(v_x_1570_, 0);
v_a_1613_ = lean_ctor_get(v_x_1570_, 1);
v_isSharedCheck_1639_ = !lean_is_exclusive(v_x_1570_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1615_ = v_x_1570_;
v_isShared_1616_ = v_isSharedCheck_1639_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_inc(v_a_1612_);
lean_dec(v_x_1570_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1639_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1617_; 
lean_inc_ref(v_f_1569_);
lean_inc(v___y_1574_);
lean_inc_ref(v___y_1573_);
lean_inc(v___y_1572_);
lean_inc_ref(v___y_1571_);
v___x_1617_ = lean_apply_6(v_f_1569_, v_a_1612_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, lean_box(0));
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v_a_1618_; lean_object* v___x_1619_; 
v_a_1618_ = lean_ctor_get(v___x_1617_, 0);
lean_inc(v_a_1618_);
lean_dec_ref_known(v___x_1617_, 1);
v___x_1619_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1569_, v_a_1613_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1630_; 
v_a_1620_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1622_ = v___x_1619_;
v_isShared_1623_ = v_isSharedCheck_1630_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1619_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1630_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 1, v_a_1620_);
lean_ctor_set(v___x_1615_, 0, v_a_1618_);
v___x_1625_ = v___x_1615_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v_a_1618_);
lean_ctor_set(v_reuseFailAlloc_1629_, 1, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
lean_object* v___x_1627_; 
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 0, v___x_1625_);
v___x_1627_ = v___x_1622_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v___x_1625_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
else
{
lean_dec(v_a_1618_);
lean_del_object(v___x_1615_);
return v___x_1619_;
}
}
else
{
lean_object* v_a_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1638_; 
lean_del_object(v___x_1615_);
lean_dec_ref(v_a_1613_);
lean_dec_ref(v_f_1569_);
v_a_1631_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1638_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1633_ = v___x_1617_;
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_a_1631_);
lean_dec(v___x_1617_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1638_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___x_1636_; 
if (v_isShared_1634_ == 0)
{
v___x_1636_ = v___x_1633_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v_a_1631_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(lean_object* v_f_1640_, size_t v_sz_1641_, size_t v_i_1642_, lean_object* v_bs_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
uint8_t v___x_1649_; 
v___x_1649_ = lean_usize_dec_lt(v_i_1642_, v_sz_1641_);
if (v___x_1649_ == 0)
{
lean_object* v___x_1650_; 
lean_dec_ref(v_f_1640_);
v___x_1650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1650_, 0, v_bs_1643_);
return v___x_1650_;
}
else
{
lean_object* v_v_1651_; lean_object* v___x_1652_; lean_object* v_bs_x27_1653_; lean_object* v___x_1654_; 
v_v_1651_ = lean_array_uget(v_bs_1643_, v_i_1642_);
v___x_1652_ = lean_unsigned_to_nat(0u);
v_bs_x27_1653_ = lean_array_uset(v_bs_1643_, v_i_1642_, v___x_1652_);
lean_inc_ref(v_f_1640_);
v___x_1654_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1640_, v_v_1651_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; size_t v___x_1656_; size_t v___x_1657_; lean_object* v___x_1658_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = ((size_t)1ULL);
v___x_1657_ = lean_usize_add(v_i_1642_, v___x_1656_);
v___x_1658_ = lean_array_uset(v_bs_x27_1653_, v_i_1642_, v_a_1655_);
v_i_1642_ = v___x_1657_;
v_bs_1643_ = v___x_1658_;
goto _start;
}
else
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
lean_dec_ref(v_bs_x27_1653_);
lean_dec_ref(v_f_1640_);
v_a_1660_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1654_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1654_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_1668_, lean_object* v_sz_1669_, lean_object* v_i_1670_, lean_object* v_bs_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
size_t v_sz_boxed_1677_; size_t v_i_boxed_1678_; lean_object* v_res_1679_; 
v_sz_boxed_1677_ = lean_unbox_usize(v_sz_1669_);
lean_dec(v_sz_1669_);
v_i_boxed_1678_ = lean_unbox_usize(v_i_1670_);
lean_dec(v_i_1670_);
v_res_1679_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(v_f_1668_, v_sz_boxed_1677_, v_i_boxed_1678_, v_bs_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg___boxed(lean_object* v_f_1680_, lean_object* v_x_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v_res_1687_; 
v_res_1687_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1680_, v_x_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_);
lean_dec(v___y_1685_);
lean_dec_ref(v___y_1684_);
lean_dec(v___y_1683_);
lean_dec_ref(v___y_1682_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(lean_object* v_t_1688_, lean_object* v_k_1689_){
_start:
{
if (lean_obj_tag(v_t_1688_) == 0)
{
lean_object* v_k_1690_; lean_object* v_v_1691_; lean_object* v_l_1692_; lean_object* v_r_1693_; uint8_t v___x_1694_; 
v_k_1690_ = lean_ctor_get(v_t_1688_, 1);
v_v_1691_ = lean_ctor_get(v_t_1688_, 2);
v_l_1692_ = lean_ctor_get(v_t_1688_, 3);
v_r_1693_ = lean_ctor_get(v_t_1688_, 4);
v___x_1694_ = lean_nat_dec_lt(v_k_1689_, v_k_1690_);
if (v___x_1694_ == 0)
{
uint8_t v___x_1695_; 
v___x_1695_ = lean_nat_dec_eq(v_k_1689_, v_k_1690_);
if (v___x_1695_ == 0)
{
v_t_1688_ = v_r_1693_;
goto _start;
}
else
{
lean_object* v___x_1697_; 
lean_inc(v_v_1691_);
v___x_1697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1697_, 0, v_v_1691_);
return v___x_1697_;
}
}
else
{
v_t_1688_ = v_l_1692_;
goto _start;
}
}
else
{
lean_object* v___x_1699_; 
v___x_1699_ = lean_box(0);
return v___x_1699_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg___boxed(lean_object* v_t_1700_, lean_object* v_k_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_t_1700_, v_k_1701_);
lean_dec(v_k_1701_);
lean_dec(v_t_1700_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0(lean_object* v_pm_1703_, lean_object* v_merger_1704_, lean_object* v_info_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_){
_start:
{
lean_object* v_subexprPos_1711_; lean_object* v___x_1712_; 
v_subexprPos_1711_ = lean_ctor_get(v_info_1705_, 1);
v___x_1712_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_pm_1703_, v_subexprPos_1711_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_object* v___x_1713_; 
lean_dec_ref(v_merger_1704_);
v___x_1713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1713_, 0, v_info_1705_);
return v___x_1713_;
}
else
{
lean_object* v_val_1714_; lean_object* v___x_1715_; 
v_val_1714_ = lean_ctor_get(v___x_1712_, 0);
lean_inc(v_val_1714_);
lean_dec_ref_known(v___x_1712_, 1);
lean_inc(v___y_1709_);
lean_inc_ref(v___y_1708_);
lean_inc(v___y_1707_);
lean_inc_ref(v___y_1706_);
v___x_1715_ = lean_apply_7(v_merger_1704_, v_info_1705_, v_val_1714_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, lean_box(0));
return v___x_1715_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0___boxed(lean_object* v_pm_1716_, lean_object* v_merger_1717_, lean_object* v_info_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0(v_pm_1716_, v_merger_1717_, v_info_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
lean_dec(v_pm_1716_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(lean_object* v_merger_1725_, lean_object* v_pm_1726_, lean_object* v_tt_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_){
_start:
{
if (lean_obj_tag(v_pm_1726_) == 0)
{
lean_object* v___f_1733_; lean_object* v___x_1734_; 
v___f_1733_ = lean_alloc_closure((void*)(l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1733_, 0, v_pm_1726_);
lean_closure_set(v___f_1733_, 1, v_merger_1725_);
v___x_1734_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v___f_1733_, v_tt_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_);
return v___x_1734_;
}
else
{
lean_object* v___x_1735_; 
lean_dec_ref(v_merger_1725_);
v___x_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1735_, 0, v_tt_1727_);
return v___x_1735_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg___boxed(lean_object* v_merger_1736_, lean_object* v_pm_1737_, lean_object* v_tt_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v_merger_1736_, v_pm_1737_, v_tt_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(uint8_t v_useAfter_1745_, lean_object* v_diff_1746_, lean_object* v_info_u2081_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_){
_start:
{
lean_object* v___x_1753_; lean_object* v___f_1754_; 
v___x_1753_ = lean_box(v_useAfter_1745_);
v___f_1754_ = lean_alloc_closure((void*)(l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1754_, 0, v___x_1753_);
if (v_useAfter_1745_ == 0)
{
lean_object* v_changesBefore_1755_; lean_object* v___x_1756_; 
v_changesBefore_1755_ = lean_ctor_get(v_diff_1746_, 0);
lean_inc(v_changesBefore_1755_);
lean_dec_ref(v_diff_1746_);
v___x_1756_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v___f_1754_, v_changesBefore_1755_, v_info_u2081_1747_, v_a_1748_, v_a_1749_, v_a_1750_, v_a_1751_);
return v___x_1756_;
}
else
{
lean_object* v_changesAfter_1757_; lean_object* v___x_1758_; 
v_changesAfter_1757_ = lean_ctor_get(v_diff_1746_, 1);
lean_inc(v_changesAfter_1757_);
lean_dec_ref(v_diff_1746_);
v___x_1758_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v___f_1754_, v_changesAfter_1757_, v_info_u2081_1747_, v_a_1748_, v_a_1749_, v_a_1750_, v_a_1751_);
return v___x_1758_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags___boxed(lean_object* v_useAfter_1759_, lean_object* v_diff_1760_, lean_object* v_info_u2081_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_){
_start:
{
uint8_t v_useAfter_boxed_1767_; lean_object* v_res_1768_; 
v_useAfter_boxed_1767_ = lean_unbox(v_useAfter_1759_);
v_res_1768_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_boxed_1767_, v_diff_1760_, v_info_u2081_1761_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_);
lean_dec(v_a_1765_);
lean_dec_ref(v_a_1764_);
lean_dec(v_a_1763_);
lean_dec_ref(v_a_1762_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0(lean_object* v_00_u03b1_1769_, lean_object* v_merger_1770_, lean_object* v_pm_1771_, lean_object* v_tt_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v___x_1778_; 
v___x_1778_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___redArg(v_merger_1770_, v_pm_1771_, v_tt_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_);
return v___x_1778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0___boxed(lean_object* v_00_u03b1_1779_, lean_object* v_merger_1780_, lean_object* v_pm_1781_, lean_object* v_tt_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0(v_00_u03b1_1779_, v_merger_1780_, v_pm_1781_, v_tt_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
lean_dec(v___y_1786_);
lean_dec_ref(v___y_1785_);
lean_dec(v___y_1784_);
lean_dec_ref(v___y_1783_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0(lean_object* v_00_u03b4_1789_, lean_object* v_t_1790_, lean_object* v_k_1791_){
_start:
{
lean_object* v___x_1792_; 
v___x_1792_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___redArg(v_t_1790_, v_k_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0___boxed(lean_object* v_00_u03b4_1793_, lean_object* v_t_1794_, lean_object* v_k_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__0(v_00_u03b4_1793_, v_t_1794_, v_k_1795_);
lean_dec(v_k_1795_);
lean_dec(v_t_1794_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1(lean_object* v_00_u03b1_1797_, lean_object* v_00_u03b2_1798_, lean_object* v_f_1799_, lean_object* v_x_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v___x_1806_; 
v___x_1806_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___redArg(v_f_1799_, v_x_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1807_, lean_object* v_00_u03b2_1808_, lean_object* v_f_1809_, lean_object* v_x_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l_Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1(v_00_u03b1_1807_, v_00_u03b2_1808_, v_f_1809_, v_x_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_);
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
lean_dec(v___y_1812_);
lean_dec_ref(v___y_1811_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1817_, lean_object* v_00_u03b2_1818_, lean_object* v_f_1819_, size_t v_sz_1820_, size_t v_i_1821_, lean_object* v_bs_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_){
_start:
{
lean_object* v___x_1828_; 
v___x_1828_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___redArg(v_f_1819_, v_sz_1820_, v_i_1821_, v_bs_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
return v___x_1828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1829_, lean_object* v_00_u03b2_1830_, lean_object* v_f_1831_, lean_object* v_sz_1832_, lean_object* v_i_1833_, lean_object* v_bs_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_){
_start:
{
size_t v_sz_boxed_1840_; size_t v_i_boxed_1841_; lean_object* v_res_1842_; 
v_sz_boxed_1840_ = lean_unbox_usize(v_sz_1832_);
lean_dec(v_sz_1832_);
v_i_boxed_1841_ = lean_unbox_usize(v_i_1833_);
lean_dec(v_i_1833_);
v_res_1842_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_TaggedText_mapM___at___00Lean_Widget_CodeWithInfos_mergePosMap___at___00__private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags_spec__0_spec__1_spec__2(v_00_u03b1_1829_, v_00_u03b2_1830_, v_f_1831_, v_sz_boxed_1840_, v_i_boxed_1841_, v_bs_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(lean_object* v_e_1843_, lean_object* v___y_1844_){
_start:
{
uint8_t v___x_1846_; 
v___x_1846_ = l_Lean_Expr_hasMVar(v_e_1843_);
if (v___x_1846_ == 0)
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v_e_1843_);
return v___x_1847_;
}
else
{
lean_object* v___x_1848_; lean_object* v_mctx_1849_; lean_object* v___x_1850_; lean_object* v_fst_1851_; lean_object* v_snd_1852_; lean_object* v___x_1853_; lean_object* v_cache_1854_; lean_object* v_zetaDeltaFVarIds_1855_; lean_object* v_postponed_1856_; lean_object* v_diag_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1866_; 
v___x_1848_ = lean_st_ref_get(v___y_1844_);
v_mctx_1849_ = lean_ctor_get(v___x_1848_, 0);
lean_inc_ref(v_mctx_1849_);
lean_dec(v___x_1848_);
v___x_1850_ = l_Lean_instantiateMVarsCore(v_mctx_1849_, v_e_1843_);
v_fst_1851_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_fst_1851_);
v_snd_1852_ = lean_ctor_get(v___x_1850_, 1);
lean_inc(v_snd_1852_);
lean_dec_ref(v___x_1850_);
v___x_1853_ = lean_st_ref_take(v___y_1844_);
v_cache_1854_ = lean_ctor_get(v___x_1853_, 1);
v_zetaDeltaFVarIds_1855_ = lean_ctor_get(v___x_1853_, 2);
v_postponed_1856_ = lean_ctor_get(v___x_1853_, 3);
v_diag_1857_ = lean_ctor_get(v___x_1853_, 4);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1866_ == 0)
{
lean_object* v_unused_1867_; 
v_unused_1867_ = lean_ctor_get(v___x_1853_, 0);
lean_dec(v_unused_1867_);
v___x_1859_ = v___x_1853_;
v_isShared_1860_ = v_isSharedCheck_1866_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_diag_1857_);
lean_inc(v_postponed_1856_);
lean_inc(v_zetaDeltaFVarIds_1855_);
lean_inc(v_cache_1854_);
lean_dec(v___x_1853_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1866_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
lean_ctor_set(v___x_1859_, 0, v_snd_1852_);
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_snd_1852_);
lean_ctor_set(v_reuseFailAlloc_1865_, 1, v_cache_1854_);
lean_ctor_set(v_reuseFailAlloc_1865_, 2, v_zetaDeltaFVarIds_1855_);
lean_ctor_set(v_reuseFailAlloc_1865_, 3, v_postponed_1856_);
lean_ctor_set(v_reuseFailAlloc_1865_, 4, v_diag_1857_);
v___x_1862_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1863_ = lean_st_ref_put(v___y_1844_, v___x_1862_);
v___x_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1864_, 0, v_fst_1851_);
return v___x_1864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg___boxed(lean_object* v_e_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_e_1868_, v___y_1869_);
lean_dec(v___y_1869_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0(lean_object* v_e_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v___x_1878_; 
v___x_1878_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_e_1872_, v___y_1874_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___boxed(lean_object* v_e_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_){
_start:
{
lean_object* v_res_1885_; 
v_res_1885_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0(v_e_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
return v_res_1885_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1(void){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1887_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__0));
v___x_1888_ = l_Lean_stringToMessageData(v___x_1887_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(uint8_t v_useAfter_1889_, lean_object* v_t_u2080_1890_, lean_object* v_h_u2081_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_){
_start:
{
lean_object* v_names_1897_; lean_object* v_fvarIds_1898_; lean_object* v_type_1899_; lean_object* v_val_x3f_1900_; lean_object* v_isInstance_x3f_1901_; lean_object* v_isType_x3f_1902_; lean_object* v_isInserted_x3f_1903_; lean_object* v_isRemoved_x3f_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1957_; 
v_names_1897_ = lean_ctor_get(v_h_u2081_1891_, 0);
v_fvarIds_1898_ = lean_ctor_get(v_h_u2081_1891_, 1);
v_type_1899_ = lean_ctor_get(v_h_u2081_1891_, 2);
v_val_x3f_1900_ = lean_ctor_get(v_h_u2081_1891_, 3);
v_isInstance_x3f_1901_ = lean_ctor_get(v_h_u2081_1891_, 4);
v_isType_x3f_1902_ = lean_ctor_get(v_h_u2081_1891_, 5);
v_isInserted_x3f_1903_ = lean_ctor_get(v_h_u2081_1891_, 6);
v_isRemoved_x3f_1904_ = lean_ctor_get(v_h_u2081_1891_, 7);
v_isSharedCheck_1957_ = !lean_is_exclusive(v_h_u2081_1891_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1906_ = v_h_u2081_1891_;
v_isShared_1907_ = v_isSharedCheck_1957_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_isRemoved_x3f_1904_);
lean_inc(v_isInserted_x3f_1903_);
lean_inc(v_isType_x3f_1902_);
lean_inc(v_isInstance_x3f_1901_);
lean_inc(v_val_x3f_1900_);
lean_inc(v_type_1899_);
lean_inc(v_fvarIds_1898_);
lean_inc(v_names_1897_);
lean_dec(v_h_u2081_1891_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1957_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; uint8_t v___x_1910_; 
v___x_1908_ = lean_unsigned_to_nat(0u);
v___x_1909_ = lean_array_get_size(v_fvarIds_1898_);
v___x_1910_ = lean_nat_dec_lt(v___x_1908_, v___x_1909_);
if (v___x_1910_ == 0)
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
lean_del_object(v___x_1906_);
lean_dec(v_isRemoved_x3f_1904_);
lean_dec(v_isInserted_x3f_1903_);
lean_dec(v_isType_x3f_1902_);
lean_dec(v_isInstance_x3f_1901_);
lean_dec(v_val_x3f_1900_);
lean_dec_ref(v_type_1899_);
lean_dec_ref(v_fvarIds_1898_);
lean_dec_ref(v_names_1897_);
lean_dec_ref(v_t_u2080_1890_);
v___x_1911_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___closed__1);
v___x_1912_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_1911_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_);
return v___x_1912_;
}
else
{
lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1913_ = lean_array_fget_borrowed(v_fvarIds_1898_, v___x_1908_);
lean_inc(v___x_1913_);
v___x_1914_ = l_Lean_Expr_fvar___override(v___x_1913_);
lean_inc(v_a_1895_);
lean_inc_ref(v_a_1894_);
lean_inc(v_a_1893_);
lean_inc_ref(v_a_1892_);
v___x_1915_ = lean_infer_type(v___x_1914_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1917_; lean_object* v_a_1918_; lean_object* v___x_1919_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
lean_dec_ref_known(v___x_1915_, 1);
v___x_1917_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_a_1916_, v_a_1893_);
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
lean_dec_ref(v___x_1917_);
v___x_1919_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_t_u2080_1890_, v_a_1918_, v_useAfter_1889_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v___x_1921_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1919_, 1);
v___x_1921_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_1889_, v_a_1920_, v_type_1899_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1932_; 
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1924_ = v___x_1921_;
v_isShared_1925_ = v_isSharedCheck_1932_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1921_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1932_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1927_; 
if (v_isShared_1907_ == 0)
{
lean_ctor_set(v___x_1906_, 2, v_a_1922_);
v___x_1927_ = v___x_1906_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v_names_1897_);
lean_ctor_set(v_reuseFailAlloc_1931_, 1, v_fvarIds_1898_);
lean_ctor_set(v_reuseFailAlloc_1931_, 2, v_a_1922_);
lean_ctor_set(v_reuseFailAlloc_1931_, 3, v_val_x3f_1900_);
lean_ctor_set(v_reuseFailAlloc_1931_, 4, v_isInstance_x3f_1901_);
lean_ctor_set(v_reuseFailAlloc_1931_, 5, v_isType_x3f_1902_);
lean_ctor_set(v_reuseFailAlloc_1931_, 6, v_isInserted_x3f_1903_);
lean_ctor_set(v_reuseFailAlloc_1931_, 7, v_isRemoved_x3f_1904_);
v___x_1927_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
lean_object* v___x_1929_; 
if (v_isShared_1925_ == 0)
{
lean_ctor_set(v___x_1924_, 0, v___x_1927_);
v___x_1929_ = v___x_1924_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v___x_1927_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
else
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1940_; 
lean_del_object(v___x_1906_);
lean_dec(v_isRemoved_x3f_1904_);
lean_dec(v_isInserted_x3f_1903_);
lean_dec(v_isType_x3f_1902_);
lean_dec(v_isInstance_x3f_1901_);
lean_dec(v_val_x3f_1900_);
lean_dec_ref(v_fvarIds_1898_);
lean_dec_ref(v_names_1897_);
v_a_1933_ = lean_ctor_get(v___x_1921_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1935_ = v___x_1921_;
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1921_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1938_; 
if (v_isShared_1936_ == 0)
{
v___x_1938_ = v___x_1935_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_a_1933_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
}
else
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1948_; 
lean_del_object(v___x_1906_);
lean_dec(v_isRemoved_x3f_1904_);
lean_dec(v_isInserted_x3f_1903_);
lean_dec(v_isType_x3f_1902_);
lean_dec(v_isInstance_x3f_1901_);
lean_dec(v_val_x3f_1900_);
lean_dec_ref(v_type_1899_);
lean_dec_ref(v_fvarIds_1898_);
lean_dec_ref(v_names_1897_);
v_a_1941_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1943_ = v___x_1919_;
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1919_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1948_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1946_; 
if (v_isShared_1944_ == 0)
{
v___x_1946_ = v___x_1943_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_a_1941_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
else
{
lean_object* v_a_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1956_; 
lean_del_object(v___x_1906_);
lean_dec(v_isRemoved_x3f_1904_);
lean_dec(v_isInserted_x3f_1903_);
lean_dec(v_isType_x3f_1902_);
lean_dec(v_isInstance_x3f_1901_);
lean_dec(v_val_x3f_1900_);
lean_dec_ref(v_type_1899_);
lean_dec_ref(v_fvarIds_1898_);
lean_dec_ref(v_names_1897_);
lean_dec_ref(v_t_u2080_1890_);
v_a_1949_ = lean_ctor_get(v___x_1915_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1915_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1951_ = v___x_1915_;
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_a_1949_);
lean_dec(v___x_1915_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1956_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1954_; 
if (v_isShared_1952_ == 0)
{
v___x_1954_ = v___x_1951_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v_a_1949_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
return v___x_1954_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff___boxed(lean_object* v_useAfter_1958_, lean_object* v_t_u2080_1959_, lean_object* v_h_u2081_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_){
_start:
{
uint8_t v_useAfter_boxed_1966_; lean_object* v_res_1967_; 
v_useAfter_boxed_1966_ = lean_unbox(v_useAfter_1958_);
v_res_1967_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(v_useAfter_boxed_1966_, v_t_u2080_1959_, v_h_u2081_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_);
lean_dec(v_a_1964_);
lean_dec_ref(v_a_1963_);
lean_dec(v_a_1962_);
lean_dec_ref(v_a_1961_);
return v_res_1967_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(lean_object* v_ctx_u2080_1971_, uint8_t v_useAfter_1972_, lean_object* v_h_u2081_1973_, lean_object* v___x_1974_, lean_object* v___x_1975_, lean_object* v_as_1976_, size_t v_sz_1977_, size_t v_i_1978_, lean_object* v_b_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_){
_start:
{
uint8_t v___x_1985_; 
v___x_1985_ = lean_usize_dec_lt(v_i_1978_, v_sz_1977_);
if (v___x_1985_ == 0)
{
lean_object* v___x_1986_; 
lean_dec_ref(v___x_1975_);
lean_dec_ref(v___x_1974_);
lean_dec_ref(v_h_u2081_1973_);
v___x_1986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1986_, 0, v_b_1979_);
return v___x_1986_;
}
else
{
lean_object* v_a_1987_; lean_object* v_fst_1988_; lean_object* v_snd_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_2085_; 
lean_dec_ref(v_b_1979_);
v_a_1987_ = lean_array_uget(v_as_1976_, v_i_1978_);
v_fst_1988_ = lean_ctor_get(v_a_1987_, 0);
v_snd_1989_ = lean_ctor_get(v_a_1987_, 1);
v_isSharedCheck_2085_ = !lean_is_exclusive(v_a_1987_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_1991_ = v_a_1987_;
v_isShared_1992_ = v_isSharedCheck_2085_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_snd_1989_);
lean_inc(v_fst_1988_);
lean_dec(v_a_1987_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_2085_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1993_; uint8_t v___x_1994_; 
v___x_1993_ = lean_box(0);
v___x_1994_ = l_Lean_LocalContext_contains(v_ctx_u2080_1971_, v_snd_1989_);
lean_dec(v_snd_1989_);
if (v___x_1994_ == 0)
{
lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1995_ = lean_box(0);
v___x_1996_ = l_Lean_Name_str___override(v___x_1995_, v_fst_1988_);
v___x_1997_ = l_Lean_LocalContext_findFromUserName_x3f(v_ctx_u2080_1971_, v___x_1996_);
lean_dec(v___x_1996_);
if (lean_obj_tag(v___x_1997_) == 1)
{
lean_object* v_val_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2036_; 
lean_dec_ref(v___x_1975_);
lean_dec_ref(v___x_1974_);
v_val_1998_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2000_ = v___x_1997_;
v_isShared_2001_ = v_isSharedCheck_2036_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_val_1998_);
lean_dec(v___x_1997_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2036_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; 
v___x_2002_ = l_Lean_LocalDecl_type(v_val_1998_);
lean_dec(v_val_1998_);
v___x_2003_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v___x_2002_, v___y_1981_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v_a_2004_; lean_object* v___x_2005_; 
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
lean_inc(v_a_2004_);
lean_dec_ref_known(v___x_2003_, 1);
v___x_2005_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff(v_useAfter_1972_, v_a_2004_, v_h_u2081_1973_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_);
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2019_; 
v_a_2006_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2008_ = v___x_2005_;
v_isShared_2009_ = v_isSharedCheck_2019_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_2005_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2019_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 0, v_a_2006_);
v___x_2011_ = v___x_2000_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
lean_object* v___x_2013_; 
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 1, v___x_1993_);
lean_ctor_set(v___x_1991_, 0, v___x_2011_);
v___x_2013_ = v___x_1991_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v___x_2011_);
lean_ctor_set(v_reuseFailAlloc_2017_, 1, v___x_1993_);
v___x_2013_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
lean_object* v___x_2015_; 
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 0, v___x_2013_);
v___x_2015_ = v___x_2008_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v___x_2013_);
v___x_2015_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
return v___x_2015_;
}
}
}
}
}
else
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
lean_del_object(v___x_2000_);
lean_del_object(v___x_1991_);
v_a_2020_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2022_ = v___x_2005_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_2005_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
}
else
{
lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2035_; 
lean_del_object(v___x_2000_);
lean_del_object(v___x_1991_);
lean_dec_ref(v_h_u2081_1973_);
v_a_2028_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_2030_ = v___x_2003_;
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v___x_2003_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2035_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
lean_object* v___x_2033_; 
if (v_isShared_2031_ == 0)
{
v___x_2033_ = v___x_2030_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v_a_2028_);
v___x_2033_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
return v___x_2033_;
}
}
}
}
}
else
{
lean_dec(v___x_1997_);
if (v_useAfter_1972_ == 0)
{
lean_object* v_type_2037_; lean_object* v_val_x3f_2038_; lean_object* v_isInstance_x3f_2039_; lean_object* v_isType_x3f_2040_; lean_object* v_isInserted_x3f_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2055_; 
v_type_2037_ = lean_ctor_get(v_h_u2081_1973_, 2);
v_val_x3f_2038_ = lean_ctor_get(v_h_u2081_1973_, 3);
v_isInstance_x3f_2039_ = lean_ctor_get(v_h_u2081_1973_, 4);
v_isType_x3f_2040_ = lean_ctor_get(v_h_u2081_1973_, 5);
v_isInserted_x3f_2041_ = lean_ctor_get(v_h_u2081_1973_, 6);
v_isSharedCheck_2055_ = !lean_is_exclusive(v_h_u2081_1973_);
if (v_isSharedCheck_2055_ == 0)
{
lean_object* v_unused_2056_; lean_object* v_unused_2057_; lean_object* v_unused_2058_; 
v_unused_2056_ = lean_ctor_get(v_h_u2081_1973_, 7);
lean_dec(v_unused_2056_);
v_unused_2057_ = lean_ctor_get(v_h_u2081_1973_, 1);
lean_dec(v_unused_2057_);
v_unused_2058_ = lean_ctor_get(v_h_u2081_1973_, 0);
lean_dec(v_unused_2058_);
v___x_2043_ = v_h_u2081_1973_;
v_isShared_2044_ = v_isSharedCheck_2055_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_isInserted_x3f_2041_);
lean_inc(v_isType_x3f_2040_);
lean_inc(v_isInstance_x3f_2039_);
lean_inc(v_val_x3f_2038_);
lean_inc(v_type_2037_);
lean_dec(v_h_u2081_1973_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2055_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2048_; 
v___x_2045_ = lean_box(v___x_1985_);
v___x_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2045_);
if (v_isShared_2044_ == 0)
{
lean_ctor_set(v___x_2043_, 7, v___x_2046_);
lean_ctor_set(v___x_2043_, 1, v___x_1975_);
lean_ctor_set(v___x_2043_, 0, v___x_1974_);
v___x_2048_ = v___x_2043_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_1974_);
lean_ctor_set(v_reuseFailAlloc_2054_, 1, v___x_1975_);
lean_ctor_set(v_reuseFailAlloc_2054_, 2, v_type_2037_);
lean_ctor_set(v_reuseFailAlloc_2054_, 3, v_val_x3f_2038_);
lean_ctor_set(v_reuseFailAlloc_2054_, 4, v_isInstance_x3f_2039_);
lean_ctor_set(v_reuseFailAlloc_2054_, 5, v_isType_x3f_2040_);
lean_ctor_set(v_reuseFailAlloc_2054_, 6, v_isInserted_x3f_2041_);
lean_ctor_set(v_reuseFailAlloc_2054_, 7, v___x_2046_);
v___x_2048_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
lean_object* v___x_2049_; lean_object* v___x_2051_; 
v___x_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2048_);
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 1, v___x_1993_);
lean_ctor_set(v___x_1991_, 0, v___x_2049_);
v___x_2051_ = v___x_1991_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___x_2049_);
lean_ctor_set(v_reuseFailAlloc_2053_, 1, v___x_1993_);
v___x_2051_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
lean_object* v___x_2052_; 
v___x_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
return v___x_2052_;
}
}
}
}
else
{
lean_object* v_type_2059_; lean_object* v_val_x3f_2060_; lean_object* v_isInstance_x3f_2061_; lean_object* v_isType_x3f_2062_; lean_object* v_isRemoved_x3f_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2077_; 
v_type_2059_ = lean_ctor_get(v_h_u2081_1973_, 2);
v_val_x3f_2060_ = lean_ctor_get(v_h_u2081_1973_, 3);
v_isInstance_x3f_2061_ = lean_ctor_get(v_h_u2081_1973_, 4);
v_isType_x3f_2062_ = lean_ctor_get(v_h_u2081_1973_, 5);
v_isRemoved_x3f_2063_ = lean_ctor_get(v_h_u2081_1973_, 7);
v_isSharedCheck_2077_ = !lean_is_exclusive(v_h_u2081_1973_);
if (v_isSharedCheck_2077_ == 0)
{
lean_object* v_unused_2078_; lean_object* v_unused_2079_; lean_object* v_unused_2080_; 
v_unused_2078_ = lean_ctor_get(v_h_u2081_1973_, 6);
lean_dec(v_unused_2078_);
v_unused_2079_ = lean_ctor_get(v_h_u2081_1973_, 1);
lean_dec(v_unused_2079_);
v_unused_2080_ = lean_ctor_get(v_h_u2081_1973_, 0);
lean_dec(v_unused_2080_);
v___x_2065_ = v_h_u2081_1973_;
v_isShared_2066_ = v_isSharedCheck_2077_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_isRemoved_x3f_2063_);
lean_inc(v_isType_x3f_2062_);
lean_inc(v_isInstance_x3f_2061_);
lean_inc(v_val_x3f_2060_);
lean_inc(v_type_2059_);
lean_dec(v_h_u2081_1973_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2077_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2070_; 
v___x_2067_ = lean_box(v___x_1985_);
v___x_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2067_);
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 6, v___x_2068_);
lean_ctor_set(v___x_2065_, 1, v___x_1975_);
lean_ctor_set(v___x_2065_, 0, v___x_1974_);
v___x_2070_ = v___x_2065_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v___x_1974_);
lean_ctor_set(v_reuseFailAlloc_2076_, 1, v___x_1975_);
lean_ctor_set(v_reuseFailAlloc_2076_, 2, v_type_2059_);
lean_ctor_set(v_reuseFailAlloc_2076_, 3, v_val_x3f_2060_);
lean_ctor_set(v_reuseFailAlloc_2076_, 4, v_isInstance_x3f_2061_);
lean_ctor_set(v_reuseFailAlloc_2076_, 5, v_isType_x3f_2062_);
lean_ctor_set(v_reuseFailAlloc_2076_, 6, v___x_2068_);
lean_ctor_set(v_reuseFailAlloc_2076_, 7, v_isRemoved_x3f_2063_);
v___x_2070_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v___x_2071_; lean_object* v___x_2073_; 
v___x_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
if (v_isShared_1992_ == 0)
{
lean_ctor_set(v___x_1991_, 1, v___x_1993_);
lean_ctor_set(v___x_1991_, 0, v___x_2071_);
v___x_2073_ = v___x_1991_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v___x_2071_);
lean_ctor_set(v_reuseFailAlloc_2075_, 1, v___x_1993_);
v___x_2073_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
lean_object* v___x_2074_; 
v___x_2074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2074_, 0, v___x_2073_);
return v___x_2074_;
}
}
}
}
}
}
else
{
lean_object* v___x_2081_; size_t v___x_2082_; size_t v___x_2083_; 
lean_del_object(v___x_1991_);
lean_dec(v_fst_1988_);
v___x_2081_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0));
v___x_2082_ = ((size_t)1ULL);
v___x_2083_ = lean_usize_add(v_i_1978_, v___x_2082_);
v_i_1978_ = v___x_2083_;
v_b_1979_ = v___x_2081_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___boxed(lean_object* v_ctx_u2080_2086_, lean_object* v_useAfter_2087_, lean_object* v_h_u2081_2088_, lean_object* v___x_2089_, lean_object* v___x_2090_, lean_object* v_as_2091_, lean_object* v_sz_2092_, lean_object* v_i_2093_, lean_object* v_b_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_){
_start:
{
uint8_t v_useAfter_boxed_2100_; size_t v_sz_boxed_2101_; size_t v_i_boxed_2102_; lean_object* v_res_2103_; 
v_useAfter_boxed_2100_ = lean_unbox(v_useAfter_2087_);
v_sz_boxed_2101_ = lean_unbox_usize(v_sz_2092_);
lean_dec(v_sz_2092_);
v_i_boxed_2102_ = lean_unbox_usize(v_i_2093_);
lean_dec(v_i_2093_);
v_res_2103_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(v_ctx_u2080_2086_, v_useAfter_boxed_2100_, v_h_u2081_2088_, v___x_2089_, v___x_2090_, v_as_2091_, v_sz_boxed_2101_, v_i_boxed_2102_, v_b_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_);
lean_dec(v___y_2098_);
lean_dec_ref(v___y_2097_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec_ref(v_as_2091_);
lean_dec_ref(v_ctx_u2080_2086_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(uint8_t v_useAfter_2104_, lean_object* v_ctx_u2080_2105_, lean_object* v_h_u2081_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_){
_start:
{
lean_object* v_names_2112_; lean_object* v_fvarIds_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; size_t v_sz_2116_; size_t v___x_2117_; lean_object* v___x_2118_; 
v_names_2112_ = lean_ctor_get(v_h_u2081_2106_, 0);
v_fvarIds_2113_ = lean_ctor_get(v_h_u2081_2106_, 1);
v___x_2114_ = l_Array_zip___redArg(v_names_2112_, v_fvarIds_2113_);
v___x_2115_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0___closed__0));
v_sz_2116_ = lean_array_size(v___x_2114_);
v___x_2117_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_2113_);
lean_inc_ref(v_names_2112_);
lean_inc_ref(v_h_u2081_2106_);
v___x_2118_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_spec__0(v_ctx_u2080_2105_, v_useAfter_2104_, v_h_u2081_2106_, v_names_2112_, v_fvarIds_2113_, v___x_2114_, v_sz_2116_, v___x_2117_, v___x_2115_, v_a_2107_, v_a_2108_, v_a_2109_, v_a_2110_);
lean_dec_ref(v___x_2114_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2131_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2121_ = v___x_2118_;
v_isShared_2122_ = v_isSharedCheck_2131_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2118_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2131_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v_fst_2123_; 
v_fst_2123_ = lean_ctor_get(v_a_2119_, 0);
lean_inc(v_fst_2123_);
lean_dec(v_a_2119_);
if (lean_obj_tag(v_fst_2123_) == 0)
{
lean_object* v___x_2125_; 
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v_h_u2081_2106_);
v___x_2125_ = v___x_2121_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_h_u2081_2106_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
else
{
lean_object* v_val_2127_; lean_object* v___x_2129_; 
lean_dec_ref(v_h_u2081_2106_);
v_val_2127_ = lean_ctor_get(v_fst_2123_, 0);
lean_inc(v_val_2127_);
lean_dec_ref_known(v_fst_2123_, 1);
if (v_isShared_2122_ == 0)
{
lean_ctor_set(v___x_2121_, 0, v_val_2127_);
v___x_2129_ = v___x_2121_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_val_2127_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
lean_dec_ref(v_h_u2081_2106_);
v_a_2132_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2118_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2118_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle___boxed(lean_object* v_useAfter_2140_, lean_object* v_ctx_u2080_2141_, lean_object* v_h_u2081_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_){
_start:
{
uint8_t v_useAfter_boxed_2148_; lean_object* v_res_2149_; 
v_useAfter_boxed_2148_ = lean_unbox(v_useAfter_2140_);
v_res_2149_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(v_useAfter_boxed_2148_, v_ctx_u2080_2141_, v_h_u2081_2142_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_);
lean_dec(v_a_2146_);
lean_dec_ref(v_a_2145_);
lean_dec(v_a_2144_);
lean_dec_ref(v_a_2143_);
lean_dec_ref(v_ctx_u2080_2141_);
return v_res_2149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(uint8_t v_useAfter_2150_, lean_object* v_lctx_u2080_2151_, size_t v_sz_2152_, size_t v_i_2153_, lean_object* v_bs_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
uint8_t v___x_2160_; 
v___x_2160_ = lean_usize_dec_lt(v_i_2153_, v_sz_2152_);
if (v___x_2160_ == 0)
{
lean_object* v___x_2161_; 
v___x_2161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2161_, 0, v_bs_2154_);
return v___x_2161_;
}
else
{
lean_object* v_v_2162_; lean_object* v___x_2163_; lean_object* v_bs_x27_2164_; lean_object* v___x_2165_; 
v_v_2162_ = lean_array_uget(v_bs_2154_, v_i_2153_);
v___x_2163_ = lean_unsigned_to_nat(0u);
v_bs_x27_2164_ = lean_array_uset(v_bs_2154_, v_i_2153_, v___x_2163_);
v___x_2165_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle(v_useAfter_2150_, v_lctx_u2080_2151_, v_v_2162_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_object* v_a_2166_; size_t v___x_2167_; size_t v___x_2168_; lean_object* v___x_2169_; 
v_a_2166_ = lean_ctor_get(v___x_2165_, 0);
lean_inc(v_a_2166_);
lean_dec_ref_known(v___x_2165_, 1);
v___x_2167_ = ((size_t)1ULL);
v___x_2168_ = lean_usize_add(v_i_2153_, v___x_2167_);
v___x_2169_ = lean_array_uset(v_bs_x27_2164_, v_i_2153_, v_a_2166_);
v_i_2153_ = v___x_2168_;
v_bs_2154_ = v___x_2169_;
goto _start;
}
else
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2178_; 
lean_dec_ref(v_bs_x27_2164_);
v_a_2171_ = lean_ctor_get(v___x_2165_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2165_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2173_ = v___x_2165_;
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2165_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2178_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
lean_object* v___x_2176_; 
if (v_isShared_2174_ == 0)
{
v___x_2176_ = v___x_2173_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v_a_2171_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0___boxed(lean_object* v_useAfter_2179_, lean_object* v_lctx_u2080_2180_, lean_object* v_sz_2181_, lean_object* v_i_2182_, lean_object* v_bs_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
uint8_t v_useAfter_boxed_2189_; size_t v_sz_boxed_2190_; size_t v_i_boxed_2191_; lean_object* v_res_2192_; 
v_useAfter_boxed_2189_ = lean_unbox(v_useAfter_2179_);
v_sz_boxed_2190_ = lean_unbox_usize(v_sz_2181_);
lean_dec(v_sz_2181_);
v_i_boxed_2191_ = lean_unbox_usize(v_i_2182_);
lean_dec(v_i_2182_);
v_res_2192_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(v_useAfter_boxed_2189_, v_lctx_u2080_2180_, v_sz_boxed_2190_, v_i_boxed_2191_, v_bs_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
lean_dec_ref(v_lctx_u2080_2180_);
return v_res_2192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(uint8_t v_useAfter_2193_, lean_object* v_lctx_u2080_2194_, lean_object* v_hs_u2081_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_){
_start:
{
size_t v_sz_2201_; size_t v___x_2202_; lean_object* v___x_2203_; 
v_sz_2201_ = lean_array_size(v_hs_u2081_2195_);
v___x_2202_ = ((size_t)0ULL);
v___x_2203_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses_spec__0(v_useAfter_2193_, v_lctx_u2080_2194_, v_sz_2201_, v___x_2202_, v_hs_u2081_2195_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_);
return v___x_2203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses___boxed(lean_object* v_useAfter_2204_, lean_object* v_lctx_u2080_2205_, lean_object* v_hs_u2081_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_){
_start:
{
uint8_t v_useAfter_boxed_2212_; lean_object* v_res_2213_; 
v_useAfter_boxed_2212_ = lean_unbox(v_useAfter_2204_);
v_res_2213_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(v_useAfter_boxed_2212_, v_lctx_u2080_2205_, v_hs_u2081_2206_, v_a_2207_, v_a_2208_, v_a_2209_, v_a_2210_);
lean_dec(v_a_2210_);
lean_dec_ref(v_a_2209_);
lean_dec(v_a_2208_);
lean_dec_ref(v_a_2207_);
lean_dec_ref(v_lctx_u2080_2205_);
return v_res_2213_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2(void){
_start:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2218_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__1));
v___x_2219_ = l_Lean_stringToMessageData(v___x_2218_);
return v___x_2219_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4(void){
_start:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2221_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__3));
v___x_2222_ = l_Lean_stringToMessageData(v___x_2221_);
return v___x_2222_;
}
}
static lean_object* _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6(void){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2224_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__5));
v___x_2225_ = l_Lean_stringToMessageData(v___x_2224_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(uint8_t v_useAfter_2226_, lean_object* v_g_u2080_2227_, lean_object* v_i_u2081_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_){
_start:
{
lean_object* v___x_2234_; lean_object* v_mctx_2235_; lean_object* v___x_2236_; 
v___x_2234_ = lean_st_ref_get(v_a_2230_);
v_mctx_2235_ = lean_ctor_get(v___x_2234_, 0);
lean_inc_ref(v_mctx_2235_);
lean_dec(v___x_2234_);
v___x_2236_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2235_, v_g_u2080_2227_);
lean_dec_ref(v_mctx_2235_);
if (lean_obj_tag(v___x_2236_) == 1)
{
lean_object* v_val_2237_; lean_object* v_lctx_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v_toInteractiveGoalCore_2243_; lean_object* v_fst_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2341_; 
v_val_2237_ = lean_ctor_get(v___x_2236_, 0);
lean_inc(v_val_2237_);
lean_dec_ref_known(v___x_2236_, 1);
v_lctx_2238_ = lean_ctor_get(v_val_2237_, 1);
lean_inc_ref(v_lctx_2238_);
lean_dec(v_val_2237_);
v___x_2239_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2231_);
v___x_2240_ = lean_box(1);
v___x_2241_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2239_);
lean_ctor_set(v___x_2241_, 1, v___x_2240_);
lean_ctor_set(v___x_2241_, 2, v___x_2240_);
v___x_2242_ = l_Lean_LocalContext_sanitizeNames(v_lctx_2238_, v___x_2241_);
v_toInteractiveGoalCore_2243_ = lean_ctor_get(v_i_u2081_2228_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2243_);
v_fst_2244_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2341_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2341_ == 0)
{
lean_object* v_unused_2342_; 
v_unused_2342_ = lean_ctor_get(v___x_2242_, 1);
lean_dec(v_unused_2342_);
v___x_2246_ = v___x_2242_;
v_isShared_2247_ = v_isSharedCheck_2341_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_fst_2244_);
lean_dec(v___x_2242_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2341_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v_userName_x3f_2248_; lean_object* v_goalPrefix_2249_; lean_object* v_mvarId_2250_; lean_object* v_isRemoved_x3f_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2338_; 
v_userName_x3f_2248_ = lean_ctor_get(v_i_u2081_2228_, 1);
v_goalPrefix_2249_ = lean_ctor_get(v_i_u2081_2228_, 2);
v_mvarId_2250_ = lean_ctor_get(v_i_u2081_2228_, 3);
v_isRemoved_x3f_2251_ = lean_ctor_get(v_i_u2081_2228_, 5);
v_isSharedCheck_2338_ = !lean_is_exclusive(v_i_u2081_2228_);
if (v_isSharedCheck_2338_ == 0)
{
lean_object* v_unused_2339_; lean_object* v_unused_2340_; 
v_unused_2339_ = lean_ctor_get(v_i_u2081_2228_, 4);
lean_dec(v_unused_2339_);
v_unused_2340_ = lean_ctor_get(v_i_u2081_2228_, 0);
lean_dec(v_unused_2340_);
v___x_2253_ = v_i_u2081_2228_;
v_isShared_2254_ = v_isSharedCheck_2338_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_isRemoved_x3f_2251_);
lean_inc(v_mvarId_2250_);
lean_inc(v_goalPrefix_2249_);
lean_inc(v_userName_x3f_2248_);
lean_dec(v_i_u2081_2228_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2338_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v_hyps_2255_; lean_object* v_type_2256_; lean_object* v_ctx_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2337_; 
v_hyps_2255_ = lean_ctor_get(v_toInteractiveGoalCore_2243_, 0);
v_type_2256_ = lean_ctor_get(v_toInteractiveGoalCore_2243_, 1);
v_ctx_2257_ = lean_ctor_get(v_toInteractiveGoalCore_2243_, 2);
v_isSharedCheck_2337_ = !lean_is_exclusive(v_toInteractiveGoalCore_2243_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2259_ = v_toInteractiveGoalCore_2243_;
v_isShared_2260_ = v_isSharedCheck_2337_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_ctx_2257_);
lean_inc(v_type_2256_);
lean_inc(v_hyps_2255_);
lean_dec(v_toInteractiveGoalCore_2243_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2337_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2261_; 
v___x_2261_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffHypotheses(v_useAfter_2226_, v_fst_2244_, v_hyps_2255_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
lean_dec(v_fst_2244_);
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_object* v_a_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v_a_2262_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_a_2262_);
lean_dec_ref_known(v___x_2261_, 1);
v___x_2263_ = l_Lean_Expr_mvar___override(v_g_u2080_2227_);
lean_inc(v_a_2232_);
lean_inc_ref(v_a_2231_);
lean_inc(v_a_2230_);
lean_inc_ref(v_a_2229_);
v___x_2264_ = lean_infer_type(v___x_2263_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; lean_object* v___x_2266_; lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2320_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
lean_inc(v_a_2265_);
lean_dec_ref_known(v___x_2264_, 1);
v___x_2266_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_a_2265_, v_a_2230_);
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2269_ = v___x_2266_;
v_isShared_2270_ = v_isSharedCheck_2320_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2266_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2320_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2271_; lean_object* v_mctx_2272_; lean_object* v___x_2273_; 
v___x_2271_ = lean_st_ref_get(v_a_2230_);
v_mctx_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc_ref(v_mctx_2272_);
lean_dec(v___x_2271_);
v___x_2273_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2272_, v_mvarId_2250_);
lean_dec_ref(v_mctx_2272_);
if (lean_obj_tag(v___x_2273_) == 1)
{
lean_object* v_val_2274_; lean_object* v_type_2275_; lean_object* v___x_2276_; lean_object* v_a_2277_; lean_object* v___x_2278_; 
lean_del_object(v___x_2269_);
lean_del_object(v___x_2246_);
v_val_2274_ = lean_ctor_get(v___x_2273_, 0);
lean_inc(v_val_2274_);
lean_dec_ref_known(v___x_2273_, 1);
v_type_2275_ = lean_ctor_get(v_val_2274_, 2);
lean_inc_ref(v_type_2275_);
lean_dec(v_val_2274_);
v___x_2276_ = l_Lean_instantiateMVars___at___00__private_Lean_Widget_Diff_0__Lean_Widget_diffHypothesesBundle_withTypeDiff_spec__0___redArg(v_type_2275_, v_a_2230_);
v_a_2277_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_a_2277_);
lean_dec_ref(v___x_2276_);
v___x_2278_ = l___private_Lean_Widget_Diff_0__Lean_Widget_exprDiff(v_a_2267_, v_a_2277_, v_useAfter_2226_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v_a_2279_; lean_object* v___x_2280_; 
v_a_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc(v_a_2279_);
lean_dec_ref_known(v___x_2278_, 1);
v___x_2280_ = l___private_Lean_Widget_Diff_0__Lean_Widget_addDiffTags(v_useAfter_2226_, v_a_2279_, v_type_2256_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2295_; 
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2283_ = v___x_2280_;
v_isShared_2284_ = v_isSharedCheck_2295_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2280_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2295_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2260_ == 0)
{
lean_ctor_set(v___x_2259_, 1, v_a_2281_);
lean_ctor_set(v___x_2259_, 0, v_a_2262_);
v___x_2286_ = v___x_2259_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2262_);
lean_ctor_set(v_reuseFailAlloc_2294_, 1, v_a_2281_);
lean_ctor_set(v_reuseFailAlloc_2294_, 2, v_ctx_2257_);
v___x_2286_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
lean_object* v___x_2287_; lean_object* v___x_2289_; 
v___x_2287_ = ((lean_object*)(l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__0));
if (v_isShared_2254_ == 0)
{
lean_ctor_set(v___x_2253_, 4, v___x_2287_);
lean_ctor_set(v___x_2253_, 0, v___x_2286_);
v___x_2289_ = v___x_2253_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v___x_2286_);
lean_ctor_set(v_reuseFailAlloc_2293_, 1, v_userName_x3f_2248_);
lean_ctor_set(v_reuseFailAlloc_2293_, 2, v_goalPrefix_2249_);
lean_ctor_set(v_reuseFailAlloc_2293_, 3, v_mvarId_2250_);
lean_ctor_set(v_reuseFailAlloc_2293_, 4, v___x_2287_);
lean_ctor_set(v_reuseFailAlloc_2293_, 5, v_isRemoved_x3f_2251_);
v___x_2289_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
lean_object* v___x_2291_; 
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 0, v___x_2289_);
v___x_2291_ = v___x_2283_;
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
}
}
else
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2303_; 
lean_dec(v_a_2262_);
lean_del_object(v___x_2259_);
lean_dec_ref(v_ctx_2257_);
lean_del_object(v___x_2253_);
lean_dec(v_isRemoved_x3f_2251_);
lean_dec(v_mvarId_2250_);
lean_dec_ref(v_goalPrefix_2249_);
lean_dec(v_userName_x3f_2248_);
v_a_2296_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2298_ = v___x_2280_;
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2280_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2301_; 
if (v_isShared_2299_ == 0)
{
v___x_2301_ = v___x_2298_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_a_2296_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
}
}
else
{
lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2311_; 
lean_dec(v_a_2262_);
lean_del_object(v___x_2259_);
lean_dec_ref(v_ctx_2257_);
lean_dec_ref(v_type_2256_);
lean_del_object(v___x_2253_);
lean_dec(v_isRemoved_x3f_2251_);
lean_dec(v_mvarId_2250_);
lean_dec_ref(v_goalPrefix_2249_);
lean_dec(v_userName_x3f_2248_);
v_a_2304_ = lean_ctor_get(v___x_2278_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2278_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2306_ = v___x_2278_;
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_dec(v___x_2278_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2309_; 
if (v_isShared_2307_ == 0)
{
v___x_2309_ = v___x_2306_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_a_2304_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
}
}
else
{
lean_object* v___x_2312_; lean_object* v___x_2314_; 
lean_dec(v___x_2273_);
lean_dec(v_a_2267_);
lean_dec(v_a_2262_);
lean_del_object(v___x_2259_);
lean_dec_ref(v_ctx_2257_);
lean_dec_ref(v_type_2256_);
lean_del_object(v___x_2253_);
lean_dec(v_isRemoved_x3f_2251_);
lean_dec_ref(v_goalPrefix_2249_);
lean_dec(v_userName_x3f_2248_);
v___x_2312_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__2);
if (v_isShared_2270_ == 0)
{
lean_ctor_set_tag(v___x_2269_, 1);
lean_ctor_set(v___x_2269_, 0, v_mvarId_2250_);
v___x_2314_ = v___x_2269_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_mvarId_2250_);
v___x_2314_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
lean_object* v___x_2316_; 
if (v_isShared_2247_ == 0)
{
lean_ctor_set_tag(v___x_2246_, 7);
lean_ctor_set(v___x_2246_, 1, v___x_2314_);
lean_ctor_set(v___x_2246_, 0, v___x_2312_);
v___x_2316_ = v___x_2246_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v___x_2312_);
lean_ctor_set(v_reuseFailAlloc_2318_, 1, v___x_2314_);
v___x_2316_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
lean_object* v___x_2317_; 
v___x_2317_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2316_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
return v___x_2317_;
}
}
}
}
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2328_; 
lean_dec(v_a_2262_);
lean_del_object(v___x_2259_);
lean_dec_ref(v_ctx_2257_);
lean_dec_ref(v_type_2256_);
lean_del_object(v___x_2253_);
lean_dec(v_isRemoved_x3f_2251_);
lean_dec(v_mvarId_2250_);
lean_dec_ref(v_goalPrefix_2249_);
lean_dec(v_userName_x3f_2248_);
lean_del_object(v___x_2246_);
v_a_2321_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2323_ = v___x_2264_;
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_a_2321_);
lean_dec(v___x_2264_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2326_; 
if (v_isShared_2324_ == 0)
{
v___x_2326_ = v___x_2323_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_a_2321_);
v___x_2326_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
return v___x_2326_;
}
}
}
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2336_; 
lean_del_object(v___x_2259_);
lean_dec_ref(v_ctx_2257_);
lean_dec_ref(v_type_2256_);
lean_del_object(v___x_2253_);
lean_dec(v_isRemoved_x3f_2251_);
lean_dec(v_mvarId_2250_);
lean_dec_ref(v_goalPrefix_2249_);
lean_dec(v_userName_x3f_2248_);
lean_del_object(v___x_2246_);
lean_dec(v_g_u2080_2227_);
v_a_2329_ = lean_ctor_get(v___x_2261_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2331_ = v___x_2261_;
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_dec(v___x_2261_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_a_2329_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; 
lean_dec(v___x_2236_);
lean_dec_ref(v_i_u2081_2228_);
v___x_2343_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__4);
v___x_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2344_, 0, v_g_u2080_2227_);
v___x_2345_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2343_);
lean_ctor_set(v___x_2345_, 1, v___x_2344_);
v___x_2346_ = lean_obj_once(&l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6, &l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6_once, _init_l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___closed__6);
v___x_2347_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2345_);
lean_ctor_set(v___x_2347_, 1, v___x_2346_);
v___x_2348_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2347_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
return v___x_2348_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal___boxed(lean_object* v_useAfter_2349_, lean_object* v_g_u2080_2350_, lean_object* v_i_u2081_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_){
_start:
{
uint8_t v_useAfter_boxed_2357_; lean_object* v_res_2358_; 
v_useAfter_boxed_2357_ = lean_unbox(v_useAfter_2349_);
v_res_2358_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(v_useAfter_boxed_2357_, v_g_u2080_2350_, v_i_u2081_2351_, v_a_2352_, v_a_2353_, v_a_2354_, v_a_2355_);
lean_dec(v_a_2355_);
lean_dec_ref(v_a_2354_);
lean_dec(v_a_2353_);
lean_dec_ref(v_a_2352_);
return v_res_2358_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(lean_object* v_opts_2359_, lean_object* v_opt_2360_){
_start:
{
lean_object* v_name_2361_; lean_object* v_defValue_2362_; lean_object* v_map_2363_; lean_object* v___x_2364_; 
v_name_2361_ = lean_ctor_get(v_opt_2360_, 0);
v_defValue_2362_ = lean_ctor_get(v_opt_2360_, 1);
v_map_2363_ = lean_ctor_get(v_opts_2359_, 0);
v___x_2364_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2363_, v_name_2361_);
if (lean_obj_tag(v___x_2364_) == 0)
{
uint8_t v___x_2365_; 
v___x_2365_ = lean_unbox(v_defValue_2362_);
return v___x_2365_;
}
else
{
lean_object* v_val_2366_; 
v_val_2366_ = lean_ctor_get(v___x_2364_, 0);
lean_inc(v_val_2366_);
lean_dec_ref_known(v___x_2364_, 1);
if (lean_obj_tag(v_val_2366_) == 1)
{
uint8_t v_v_2367_; 
v_v_2367_ = lean_ctor_get_uint8(v_val_2366_, 0);
lean_dec_ref_known(v_val_2366_, 0);
return v_v_2367_;
}
else
{
uint8_t v___x_2368_; 
lean_dec(v_val_2366_);
v___x_2368_ = lean_unbox(v_defValue_2362_);
return v___x_2368_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0___boxed(lean_object* v_opts_2369_, lean_object* v_opt_2370_){
_start:
{
uint8_t v_res_2371_; lean_object* v_r_2372_; 
v_res_2371_ = l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(v_opts_2369_, v_opt_2370_);
lean_dec_ref(v_opt_2370_);
lean_dec_ref(v_opts_2369_);
v_r_2372_ = lean_box(v_res_2371_);
return v_r_2372_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(lean_object* v_x_2373_, lean_object* v_x_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
if (lean_obj_tag(v_x_2374_) == 0)
{
lean_object* v___x_2380_; 
v___x_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2380_, 0, v_x_2373_);
return v___x_2380_;
}
else
{
lean_object* v_head_2381_; lean_object* v_tail_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; 
v_head_2381_ = lean_ctor_get(v_x_2374_, 0);
lean_inc_n(v_head_2381_, 2);
v_tail_2382_ = lean_ctor_get(v_x_2374_, 1);
lean_inc(v_tail_2382_);
lean_dec_ref_known(v_x_2374_, 2);
v___x_2383_ = l_Lean_Expr_mvar___override(v_head_2381_);
v___x_2384_ = l_Lean_Meta_getMVars(v___x_2383_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
if (lean_obj_tag(v___x_2384_) == 0)
{
lean_object* v_a_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v_a_2385_ = lean_ctor_get(v___x_2384_, 0);
lean_inc(v_a_2385_);
lean_dec_ref_known(v___x_2384_, 1);
v___x_2386_ = l_Lean_MVarIdSet_ofArray(v_a_2385_);
lean_dec(v_a_2385_);
v___x_2387_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MVarIdSet_insert_spec__1___redArg(v_head_2381_, v___x_2386_, v_x_2373_);
v_x_2373_ = v___x_2387_;
v_x_2374_ = v_tail_2382_;
goto _start;
}
else
{
lean_object* v_a_2389_; lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2396_; 
lean_dec(v_tail_2382_);
lean_dec(v_head_2381_);
lean_dec(v_x_2373_);
v_a_2389_ = lean_ctor_get(v___x_2384_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2391_ = v___x_2384_;
v_isShared_2392_ = v_isSharedCheck_2396_;
goto v_resetjp_2390_;
}
else
{
lean_inc(v_a_2389_);
lean_dec(v___x_2384_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2396_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v___x_2394_; 
if (v_isShared_2392_ == 0)
{
v___x_2394_ = v___x_2391_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v_a_2389_);
v___x_2394_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
return v___x_2394_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1___boxed(lean_object* v_x_2397_, lean_object* v_x_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(v_x_2397_, v_x_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(lean_object* v_lctx_2405_, lean_object* v_localInsts_2406_, lean_object* v_x_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v___x_2413_; 
v___x_2413_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2405_, v_localInsts_2406_, v_x_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___x_2413_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2413_);
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
v_reuseFailAlloc_2420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
v_a_2422_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2413_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2413_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg___boxed(lean_object* v_lctx_2430_, lean_object* v_localInsts_2431_, lean_object* v_x_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(v_lctx_2430_, v_localInsts_2431_, v_x_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_);
lean_dec(v___y_2436_);
lean_dec_ref(v___y_2435_);
lean_dec(v___y_2434_);
lean_dec_ref(v___y_2433_);
return v_res_2438_;
}
}
static lean_object* _init_l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_2440_; lean_object* v___x_2441_; 
v___x_2440_ = ((lean_object*)(l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__0));
v___x_2441_ = l_Lean_stringToMessageData(v___x_2440_);
return v___x_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(lean_object* v_goal_2442_, lean_object* v_action_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v___x_2449_; lean_object* v_mctx_2450_; lean_object* v___x_2451_; 
v___x_2449_ = lean_st_ref_get(v___y_2445_);
v_mctx_2450_ = lean_ctor_get(v___x_2449_, 0);
lean_inc_ref(v_mctx_2450_);
lean_dec(v___x_2449_);
v___x_2451_ = l_Lean_MetavarContext_findDecl_x3f(v_mctx_2450_, v_goal_2442_);
lean_dec_ref(v_mctx_2450_);
if (lean_obj_tag(v___x_2451_) == 1)
{
lean_object* v_val_2452_; lean_object* v_lctx_2453_; lean_object* v_localInstances_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v_fst_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
lean_dec(v_goal_2442_);
v_val_2452_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_val_2452_);
lean_dec_ref_known(v___x_2451_, 1);
v_lctx_2453_ = lean_ctor_get(v_val_2452_, 1);
v_localInstances_2454_ = lean_ctor_get(v_val_2452_, 4);
lean_inc_ref(v_localInstances_2454_);
v___x_2455_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_2446_);
v___x_2456_ = lean_box(1);
v___x_2457_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2455_);
lean_ctor_set(v___x_2457_, 1, v___x_2456_);
lean_ctor_set(v___x_2457_, 2, v___x_2456_);
lean_inc_ref(v_lctx_2453_);
v___x_2458_ = l_Lean_LocalContext_sanitizeNames(v_lctx_2453_, v___x_2457_);
v_fst_2459_ = lean_ctor_get(v___x_2458_, 0);
lean_inc_n(v_fst_2459_, 2);
lean_dec_ref(v___x_2458_);
v___x_2460_ = lean_apply_2(v_action_2443_, v_fst_2459_, v_val_2452_);
v___x_2461_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(v_fst_2459_, v_localInstances_2454_, v___x_2460_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
return v___x_2461_;
}
else
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
lean_dec(v___x_2451_);
lean_dec_ref(v_action_2443_);
v___x_2462_ = lean_obj_once(&l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1, &l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1_once, _init_l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___closed__1);
v___x_2463_ = l_Lean_MessageData_ofName(v_goal_2442_);
v___x_2464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2462_);
lean_ctor_set(v___x_2464_, 1, v___x_2463_);
v___x_2465_ = l_Lean_throwError___at___00__private_Lean_Widget_Diff_0__Lean_Widget_exprDiffCore_piDiff_spec__3___redArg(v___x_2464_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
return v___x_2465_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg___boxed(lean_object* v_goal_2466_, lean_object* v_action_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_){
_start:
{
lean_object* v_res_2473_; 
v_res_2473_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_goal_2466_, v_action_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
return v_res_2473_;
}
}
LEAN_EXPORT uint8_t l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(lean_object* v___x_2474_, lean_object* v_x_2475_){
_start:
{
if (lean_obj_tag(v_x_2475_) == 0)
{
uint8_t v___x_2476_; 
v___x_2476_ = 0;
return v___x_2476_;
}
else
{
lean_object* v_head_2477_; lean_object* v_tail_2478_; uint8_t v___x_2479_; 
v_head_2477_ = lean_ctor_get(v_x_2475_, 0);
v_tail_2478_ = lean_ctor_get(v_x_2475_, 1);
v___x_2479_ = l_Lean_instBEqMVarId_beq(v_head_2477_, v___x_2474_);
if (v___x_2479_ == 0)
{
v_x_2475_ = v_tail_2478_;
goto _start;
}
else
{
return v___x_2479_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4___boxed(lean_object* v___x_2481_, lean_object* v_x_2482_){
_start:
{
uint8_t v_res_2483_; lean_object* v_r_2484_; 
v_res_2483_ = l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(v___x_2481_, v_x_2482_);
lean_dec(v_x_2482_);
lean_dec(v___x_2481_);
v_r_2484_ = lean_box(v_res_2483_);
return v_r_2484_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(lean_object* v_t_2485_, lean_object* v_k_2486_){
_start:
{
if (lean_obj_tag(v_t_2485_) == 0)
{
lean_object* v_k_2487_; lean_object* v_v_2488_; lean_object* v_l_2489_; lean_object* v_r_2490_; uint8_t v___x_2491_; 
v_k_2487_ = lean_ctor_get(v_t_2485_, 1);
v_v_2488_ = lean_ctor_get(v_t_2485_, 2);
v_l_2489_ = lean_ctor_get(v_t_2485_, 3);
v_r_2490_ = lean_ctor_get(v_t_2485_, 4);
v___x_2491_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2486_, v_k_2487_);
switch(v___x_2491_)
{
case 0:
{
v_t_2485_ = v_l_2489_;
goto _start;
}
case 1:
{
lean_object* v___x_2493_; 
lean_inc(v_v_2488_);
v___x_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2493_, 0, v_v_2488_);
return v___x_2493_;
}
default: 
{
v_t_2485_ = v_r_2490_;
goto _start;
}
}
}
else
{
lean_object* v___x_2495_; 
v___x_2495_ = lean_box(0);
return v___x_2495_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg___boxed(lean_object* v_t_2496_, lean_object* v_k_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(v_t_2496_, v_k_2497_);
lean_dec(v_k_2497_);
lean_dec(v_t_2496_);
return v_res_2498_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(lean_object* v_k_2499_, lean_object* v_t_2500_){
_start:
{
if (lean_obj_tag(v_t_2500_) == 0)
{
lean_object* v_k_2501_; lean_object* v_l_2502_; lean_object* v_r_2503_; uint8_t v___x_2504_; 
v_k_2501_ = lean_ctor_get(v_t_2500_, 1);
v_l_2502_ = lean_ctor_get(v_t_2500_, 3);
v_r_2503_ = lean_ctor_get(v_t_2500_, 4);
v___x_2504_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_2499_, v_k_2501_);
switch(v___x_2504_)
{
case 0:
{
v_t_2500_ = v_l_2502_;
goto _start;
}
case 1:
{
uint8_t v___x_2506_; 
v___x_2506_ = 1;
return v___x_2506_;
}
default: 
{
v_t_2500_ = v_r_2503_;
goto _start;
}
}
}
else
{
uint8_t v___x_2508_; 
v___x_2508_ = 0;
return v___x_2508_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg___boxed(lean_object* v_k_2509_, lean_object* v_t_2510_){
_start:
{
uint8_t v_res_2511_; lean_object* v_r_2512_; 
v_res_2511_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(v_k_2509_, v_t_2510_);
lean_dec(v_t_2510_);
lean_dec(v_k_2509_);
v_r_2512_ = lean_box(v_res_2511_);
return v_r_2512_;
}
}
LEAN_EXPORT uint8_t l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(lean_object* v_a_2513_, uint8_t v___x_2514_, lean_object* v_before_2515_, lean_object* v_after_2516_){
_start:
{
lean_object* v___x_2517_; 
v___x_2517_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(v_a_2513_, v_before_2515_);
if (lean_obj_tag(v___x_2517_) == 0)
{
return v___x_2514_;
}
else
{
lean_object* v_val_2518_; uint8_t v___x_2519_; 
v_val_2518_ = lean_ctor_get(v___x_2517_, 0);
lean_inc(v_val_2518_);
lean_dec_ref_known(v___x_2517_, 1);
v___x_2519_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(v_after_2516_, v_val_2518_);
lean_dec(v_val_2518_);
return v___x_2519_;
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0___boxed(lean_object* v_a_2520_, lean_object* v___x_2521_, lean_object* v_before_2522_, lean_object* v_after_2523_){
_start:
{
uint8_t v___x_3274__boxed_2524_; uint8_t v_res_2525_; lean_object* v_r_2526_; 
v___x_3274__boxed_2524_ = lean_unbox(v___x_2521_);
v_res_2525_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(v_a_2520_, v___x_3274__boxed_2524_, v_before_2522_, v_after_2523_);
lean_dec(v_after_2523_);
lean_dec(v_before_2522_);
lean_dec(v_a_2520_);
v_r_2526_ = lean_box(v_res_2525_);
return v_r_2526_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(uint8_t v_useAfter_2527_, lean_object* v_a_2528_, lean_object* v___x_2529_, lean_object* v_x_2530_){
_start:
{
if (lean_obj_tag(v_x_2530_) == 0)
{
lean_object* v___x_2531_; 
v___x_2531_ = lean_box(0);
return v___x_2531_;
}
else
{
lean_object* v_head_2532_; lean_object* v_tail_2533_; uint8_t v___y_2535_; uint8_t v___x_2538_; 
v_head_2532_ = lean_ctor_get(v_x_2530_, 0);
v_tail_2533_ = lean_ctor_get(v_x_2530_, 1);
v___x_2538_ = 0;
if (v_useAfter_2527_ == 0)
{
uint8_t v___x_2539_; 
v___x_2539_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(v_a_2528_, v___x_2538_, v___x_2529_, v_head_2532_);
v___y_2535_ = v___x_2539_;
goto v___jp_2534_;
}
else
{
uint8_t v___x_2540_; 
v___x_2540_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___lam__0(v_a_2528_, v___x_2538_, v_head_2532_, v___x_2529_);
v___y_2535_ = v___x_2540_;
goto v___jp_2534_;
}
v___jp_2534_:
{
if (v___y_2535_ == 0)
{
v_x_2530_ = v_tail_2533_;
goto _start;
}
else
{
lean_object* v___x_2537_; 
lean_inc(v_head_2532_);
v___x_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2537_, 0, v_head_2532_);
return v___x_2537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5___boxed(lean_object* v_useAfter_2541_, lean_object* v_a_2542_, lean_object* v___x_2543_, lean_object* v_x_2544_){
_start:
{
uint8_t v_useAfter_boxed_2545_; lean_object* v_res_2546_; 
v_useAfter_boxed_2545_ = lean_unbox(v_useAfter_2541_);
v_res_2546_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(v_useAfter_boxed_2545_, v_a_2542_, v___x_2543_, v_x_2544_);
lean_dec(v_x_2544_);
lean_dec(v___x_2543_);
lean_dec(v_a_2542_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0(lean_object* v_mvarId_2547_, lean_object* v___y_2548_, uint8_t v_useAfter_2549_, lean_object* v_a_2550_, lean_object* v_v_2551_, uint8_t v___x_2552_, lean_object* v_toInteractiveGoalCore_2553_, lean_object* v_userName_x3f_2554_, lean_object* v_goalPrefix_2555_, lean_object* v_isInserted_x3f_2556_, lean_object* v_isRemoved_x3f_2557_, lean_object* v___lctx_u2081_2558_, lean_object* v___md_u2081_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
uint8_t v___x_2565_; 
v___x_2565_ = l_List_any___at___00Lean_Widget_diffInteractiveGoals_spec__4(v_mvarId_2547_, v___y_2548_);
if (v___x_2565_ == 0)
{
lean_object* v___x_2566_; 
v___x_2566_ = l_List_find_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__5(v_useAfter_2549_, v_a_2550_, v_mvarId_2547_, v___y_2548_);
if (lean_obj_tag(v___x_2566_) == 1)
{
lean_object* v_val_2567_; lean_object* v___x_2568_; 
lean_dec(v_isRemoved_x3f_2557_);
lean_dec(v_isInserted_x3f_2556_);
lean_dec_ref(v_goalPrefix_2555_);
lean_dec(v_userName_x3f_2554_);
lean_dec_ref(v_toInteractiveGoalCore_2553_);
lean_dec(v_mvarId_2547_);
v_val_2567_ = lean_ctor_get(v___x_2566_, 0);
lean_inc(v_val_2567_);
lean_dec_ref_known(v___x_2566_, 1);
v___x_2568_ = l___private_Lean_Widget_Diff_0__Lean_Widget_diffInteractiveGoal(v_useAfter_2549_, v_val_2567_, v_v_2551_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
return v___x_2568_;
}
else
{
lean_dec(v___x_2566_);
lean_dec(v_v_2551_);
if (v_useAfter_2549_ == 0)
{
lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
lean_dec(v_isRemoved_x3f_2557_);
v___x_2569_ = lean_box(v___x_2552_);
v___x_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2569_);
v___x_2571_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2571_, 0, v_toInteractiveGoalCore_2553_);
lean_ctor_set(v___x_2571_, 1, v_userName_x3f_2554_);
lean_ctor_set(v___x_2571_, 2, v_goalPrefix_2555_);
lean_ctor_set(v___x_2571_, 3, v_mvarId_2547_);
lean_ctor_set(v___x_2571_, 4, v_isInserted_x3f_2556_);
lean_ctor_set(v___x_2571_, 5, v___x_2570_);
v___x_2572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2571_);
return v___x_2572_;
}
else
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
lean_dec(v_isInserted_x3f_2556_);
v___x_2573_ = lean_box(v___x_2552_);
v___x_2574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2573_);
v___x_2575_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2575_, 0, v_toInteractiveGoalCore_2553_);
lean_ctor_set(v___x_2575_, 1, v_userName_x3f_2554_);
lean_ctor_set(v___x_2575_, 2, v_goalPrefix_2555_);
lean_ctor_set(v___x_2575_, 3, v_mvarId_2547_);
lean_ctor_set(v___x_2575_, 4, v___x_2574_);
lean_ctor_set(v___x_2575_, 5, v_isRemoved_x3f_2557_);
v___x_2576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2575_);
return v___x_2576_;
}
}
}
else
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
lean_dec(v_isInserted_x3f_2556_);
lean_dec(v_v_2551_);
v___x_2577_ = lean_box(0);
v___x_2578_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2578_, 0, v_toInteractiveGoalCore_2553_);
lean_ctor_set(v___x_2578_, 1, v_userName_x3f_2554_);
lean_ctor_set(v___x_2578_, 2, v_goalPrefix_2555_);
lean_ctor_set(v___x_2578_, 3, v_mvarId_2547_);
lean_ctor_set(v___x_2578_, 4, v___x_2577_);
lean_ctor_set(v___x_2578_, 5, v_isRemoved_x3f_2557_);
v___x_2579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2579_, 0, v___x_2578_);
return v___x_2579_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed(lean_object** _args){
lean_object* v_mvarId_2580_ = _args[0];
lean_object* v___y_2581_ = _args[1];
lean_object* v_useAfter_2582_ = _args[2];
lean_object* v_a_2583_ = _args[3];
lean_object* v_v_2584_ = _args[4];
lean_object* v___x_2585_ = _args[5];
lean_object* v_toInteractiveGoalCore_2586_ = _args[6];
lean_object* v_userName_x3f_2587_ = _args[7];
lean_object* v_goalPrefix_2588_ = _args[8];
lean_object* v_isInserted_x3f_2589_ = _args[9];
lean_object* v_isRemoved_x3f_2590_ = _args[10];
lean_object* v___lctx_u2081_2591_ = _args[11];
lean_object* v___md_u2081_2592_ = _args[12];
lean_object* v___y_2593_ = _args[13];
lean_object* v___y_2594_ = _args[14];
lean_object* v___y_2595_ = _args[15];
lean_object* v___y_2596_ = _args[16];
lean_object* v___y_2597_ = _args[17];
_start:
{
uint8_t v_useAfter_boxed_2598_; uint8_t v___x_3316__boxed_2599_; lean_object* v_res_2600_; 
v_useAfter_boxed_2598_ = lean_unbox(v_useAfter_2582_);
v___x_3316__boxed_2599_ = lean_unbox(v___x_2585_);
v_res_2600_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0(v_mvarId_2580_, v___y_2581_, v_useAfter_boxed_2598_, v_a_2583_, v_v_2584_, v___x_3316__boxed_2599_, v_toInteractiveGoalCore_2586_, v_userName_x3f_2587_, v_goalPrefix_2588_, v_isInserted_x3f_2589_, v_isRemoved_x3f_2590_, v___lctx_u2081_2591_, v___md_u2081_2592_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_);
lean_dec(v___y_2596_);
lean_dec_ref(v___y_2595_);
lean_dec(v___y_2594_);
lean_dec_ref(v___y_2593_);
lean_dec_ref(v___md_u2081_2592_);
lean_dec_ref(v___lctx_u2081_2591_);
lean_dec(v_a_2583_);
lean_dec(v___y_2581_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(lean_object* v___y_2601_, uint8_t v_useAfter_2602_, lean_object* v_a_2603_, uint8_t v___x_2604_, size_t v_sz_2605_, size_t v_i_2606_, lean_object* v_bs_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
uint8_t v___x_2613_; 
v___x_2613_ = lean_usize_dec_lt(v_i_2606_, v_sz_2605_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; 
lean_dec(v_a_2603_);
lean_dec(v___y_2601_);
v___x_2614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2614_, 0, v_bs_2607_);
return v___x_2614_;
}
else
{
lean_object* v_v_2615_; lean_object* v_toInteractiveGoalCore_2616_; lean_object* v_userName_x3f_2617_; lean_object* v_goalPrefix_2618_; lean_object* v_mvarId_2619_; lean_object* v_isInserted_x3f_2620_; lean_object* v_isRemoved_x3f_2621_; lean_object* v___x_2622_; lean_object* v_bs_x27_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___f_2626_; lean_object* v___x_2627_; 
v_v_2615_ = lean_array_uget(v_bs_2607_, v_i_2606_);
v_toInteractiveGoalCore_2616_ = lean_ctor_get(v_v_2615_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2616_);
v_userName_x3f_2617_ = lean_ctor_get(v_v_2615_, 1);
lean_inc(v_userName_x3f_2617_);
v_goalPrefix_2618_ = lean_ctor_get(v_v_2615_, 2);
lean_inc_ref(v_goalPrefix_2618_);
v_mvarId_2619_ = lean_ctor_get(v_v_2615_, 3);
lean_inc_n(v_mvarId_2619_, 2);
v_isInserted_x3f_2620_ = lean_ctor_get(v_v_2615_, 4);
lean_inc(v_isInserted_x3f_2620_);
v_isRemoved_x3f_2621_ = lean_ctor_get(v_v_2615_, 5);
lean_inc(v_isRemoved_x3f_2621_);
v___x_2622_ = lean_unsigned_to_nat(0u);
v_bs_x27_2623_ = lean_array_uset(v_bs_2607_, v_i_2606_, v___x_2622_);
v___x_2624_ = lean_box(v_useAfter_2602_);
v___x_2625_ = lean_box(v___x_2604_);
lean_inc(v_a_2603_);
lean_inc(v___y_2601_);
v___f_2626_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed), 18, 11);
lean_closure_set(v___f_2626_, 0, v_mvarId_2619_);
lean_closure_set(v___f_2626_, 1, v___y_2601_);
lean_closure_set(v___f_2626_, 2, v___x_2624_);
lean_closure_set(v___f_2626_, 3, v_a_2603_);
lean_closure_set(v___f_2626_, 4, v_v_2615_);
lean_closure_set(v___f_2626_, 5, v___x_2625_);
lean_closure_set(v___f_2626_, 6, v_toInteractiveGoalCore_2616_);
lean_closure_set(v___f_2626_, 7, v_userName_x3f_2617_);
lean_closure_set(v___f_2626_, 8, v_goalPrefix_2618_);
lean_closure_set(v___f_2626_, 9, v_isInserted_x3f_2620_);
lean_closure_set(v___f_2626_, 10, v_isRemoved_x3f_2621_);
v___x_2627_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_mvarId_2619_, v___f_2626_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_);
if (lean_obj_tag(v___x_2627_) == 0)
{
lean_object* v_a_2628_; size_t v___x_2629_; size_t v___x_2630_; lean_object* v___x_2631_; 
v_a_2628_ = lean_ctor_get(v___x_2627_, 0);
lean_inc(v_a_2628_);
lean_dec_ref_known(v___x_2627_, 1);
v___x_2629_ = ((size_t)1ULL);
v___x_2630_ = lean_usize_add(v_i_2606_, v___x_2629_);
v___x_2631_ = lean_array_uset(v_bs_x27_2623_, v_i_2606_, v_a_2628_);
v_i_2606_ = v___x_2630_;
v_bs_2607_ = v___x_2631_;
goto _start;
}
else
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
lean_dec_ref(v_bs_x27_2623_);
lean_dec(v_a_2603_);
lean_dec(v___y_2601_);
v_a_2633_ = lean_ctor_get(v___x_2627_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2627_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v___x_2627_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___x_2627_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8___boxed(lean_object* v___y_2641_, lean_object* v_useAfter_2642_, lean_object* v_a_2643_, lean_object* v___x_2644_, lean_object* v_sz_2645_, lean_object* v_i_2646_, lean_object* v_bs_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_){
_start:
{
uint8_t v_useAfter_boxed_2653_; uint8_t v___x_3370__boxed_2654_; size_t v_sz_boxed_2655_; size_t v_i_boxed_2656_; lean_object* v_res_2657_; 
v_useAfter_boxed_2653_ = lean_unbox(v_useAfter_2642_);
v___x_3370__boxed_2654_ = lean_unbox(v___x_2644_);
v_sz_boxed_2655_ = lean_unbox_usize(v_sz_2645_);
lean_dec(v_sz_2645_);
v_i_boxed_2656_ = lean_unbox_usize(v_i_2646_);
lean_dec(v_i_2646_);
v_res_2657_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(v___y_2641_, v_useAfter_boxed_2653_, v_a_2643_, v___x_3370__boxed_2654_, v_sz_boxed_2655_, v_i_boxed_2656_, v_bs_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_);
lean_dec(v___y_2651_);
lean_dec_ref(v___y_2650_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7(uint8_t v_useAfter_2658_, lean_object* v_a_2659_, lean_object* v___y_2660_, uint8_t v___x_2661_, size_t v_sz_2662_, size_t v_i_2663_, lean_object* v_bs_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
uint8_t v___x_2670_; 
v___x_2670_ = lean_usize_dec_lt(v_i_2663_, v_sz_2662_);
if (v___x_2670_ == 0)
{
lean_object* v___x_2671_; 
lean_dec(v___y_2660_);
lean_dec(v_a_2659_);
v___x_2671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2671_, 0, v_bs_2664_);
return v___x_2671_;
}
else
{
lean_object* v_v_2672_; lean_object* v_toInteractiveGoalCore_2673_; lean_object* v_userName_x3f_2674_; lean_object* v_goalPrefix_2675_; lean_object* v_mvarId_2676_; lean_object* v_isInserted_x3f_2677_; lean_object* v_isRemoved_x3f_2678_; lean_object* v___x_2679_; lean_object* v_bs_x27_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___f_2683_; lean_object* v___x_2684_; 
v_v_2672_ = lean_array_uget(v_bs_2664_, v_i_2663_);
v_toInteractiveGoalCore_2673_ = lean_ctor_get(v_v_2672_, 0);
lean_inc_ref(v_toInteractiveGoalCore_2673_);
v_userName_x3f_2674_ = lean_ctor_get(v_v_2672_, 1);
lean_inc(v_userName_x3f_2674_);
v_goalPrefix_2675_ = lean_ctor_get(v_v_2672_, 2);
lean_inc_ref(v_goalPrefix_2675_);
v_mvarId_2676_ = lean_ctor_get(v_v_2672_, 3);
lean_inc_n(v_mvarId_2676_, 2);
v_isInserted_x3f_2677_ = lean_ctor_get(v_v_2672_, 4);
lean_inc(v_isInserted_x3f_2677_);
v_isRemoved_x3f_2678_ = lean_ctor_get(v_v_2672_, 5);
lean_inc(v_isRemoved_x3f_2678_);
v___x_2679_ = lean_unsigned_to_nat(0u);
v_bs_x27_2680_ = lean_array_uset(v_bs_2664_, v_i_2663_, v___x_2679_);
v___x_2681_ = lean_box(v_useAfter_2658_);
v___x_2682_ = lean_box(v___x_2661_);
lean_inc(v_a_2659_);
lean_inc(v___y_2660_);
v___f_2683_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___lam__0___boxed), 18, 11);
lean_closure_set(v___f_2683_, 0, v_mvarId_2676_);
lean_closure_set(v___f_2683_, 1, v___y_2660_);
lean_closure_set(v___f_2683_, 2, v___x_2681_);
lean_closure_set(v___f_2683_, 3, v_a_2659_);
lean_closure_set(v___f_2683_, 4, v_v_2672_);
lean_closure_set(v___f_2683_, 5, v___x_2682_);
lean_closure_set(v___f_2683_, 6, v_toInteractiveGoalCore_2673_);
lean_closure_set(v___f_2683_, 7, v_userName_x3f_2674_);
lean_closure_set(v___f_2683_, 8, v_goalPrefix_2675_);
lean_closure_set(v___f_2683_, 9, v_isInserted_x3f_2677_);
lean_closure_set(v___f_2683_, 10, v_isRemoved_x3f_2678_);
v___x_2684_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_mvarId_2676_, v___f_2683_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
if (lean_obj_tag(v___x_2684_) == 0)
{
lean_object* v_a_2685_; size_t v___x_2686_; size_t v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; 
v_a_2685_ = lean_ctor_get(v___x_2684_, 0);
lean_inc(v_a_2685_);
lean_dec_ref_known(v___x_2684_, 1);
v___x_2686_ = ((size_t)1ULL);
v___x_2687_ = lean_usize_add(v_i_2663_, v___x_2686_);
v___x_2688_ = lean_array_uset(v_bs_x27_2680_, v_i_2663_, v_a_2685_);
v___x_2689_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7_spec__8(v___y_2660_, v_useAfter_2658_, v_a_2659_, v___x_2661_, v_sz_2662_, v___x_2687_, v___x_2688_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
return v___x_2689_;
}
else
{
lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2697_; 
lean_dec_ref(v_bs_x27_2680_);
lean_dec(v___y_2660_);
lean_dec(v_a_2659_);
v_a_2690_ = lean_ctor_get(v___x_2684_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v___x_2684_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2692_ = v___x_2684_;
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v___x_2684_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2697_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v___x_2695_; 
if (v_isShared_2693_ == 0)
{
v___x_2695_ = v___x_2692_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2696_; 
v_reuseFailAlloc_2696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2696_, 0, v_a_2690_);
v___x_2695_ = v_reuseFailAlloc_2696_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
return v___x_2695_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7___boxed(lean_object* v_useAfter_2698_, lean_object* v_a_2699_, lean_object* v___y_2700_, lean_object* v___x_2701_, lean_object* v_sz_2702_, lean_object* v_i_2703_, lean_object* v_bs_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
uint8_t v_useAfter_boxed_2710_; uint8_t v___x_3434__boxed_2711_; size_t v_sz_boxed_2712_; size_t v_i_boxed_2713_; lean_object* v_res_2714_; 
v_useAfter_boxed_2710_ = lean_unbox(v_useAfter_2698_);
v___x_3434__boxed_2711_ = lean_unbox(v___x_2701_);
v_sz_boxed_2712_ = lean_unbox_usize(v_sz_2702_);
lean_dec(v_sz_2702_);
v_i_boxed_2713_ = lean_unbox_usize(v_i_2703_);
lean_dec(v_i_2703_);
v_res_2714_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7(v_useAfter_boxed_2710_, v_a_2699_, v___y_2700_, v___x_3434__boxed_2711_, v_sz_boxed_2712_, v_i_boxed_2713_, v_bs_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_);
lean_dec(v___y_2708_);
lean_dec_ref(v___y_2707_);
lean_dec(v___y_2706_);
lean_dec_ref(v___y_2705_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals(uint8_t v_useAfter_2715_, lean_object* v_info_2716_, lean_object* v_igs_u2081_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_, lean_object* v_a_2720_, lean_object* v_a_2721_){
_start:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; uint8_t v___x_2725_; lean_object* v___y_2727_; 
v___x_2723_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_2720_);
v___x_2724_ = l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff;
v___x_2725_ = l_Lean_Option_get___at___00Lean_Widget_diffInteractiveGoals_spec__0(v___x_2723_, v___x_2724_);
lean_dec_ref(v___x_2723_);
if (v___x_2725_ == 0)
{
lean_object* v___x_2759_; 
lean_dec_ref(v_info_2716_);
v___x_2759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2759_, 0, v_igs_u2081_2717_);
return v___x_2759_;
}
else
{
if (v_useAfter_2715_ == 0)
{
lean_object* v_goalsAfter_2760_; 
v_goalsAfter_2760_ = lean_ctor_get(v_info_2716_, 4);
lean_inc(v_goalsAfter_2760_);
v___y_2727_ = v_goalsAfter_2760_;
goto v___jp_2726_;
}
else
{
lean_object* v_goalsBefore_2761_; 
v_goalsBefore_2761_ = lean_ctor_get(v_info_2716_, 2);
lean_inc(v_goalsBefore_2761_);
v___y_2727_ = v_goalsBefore_2761_;
goto v___jp_2726_;
}
}
v___jp_2726_:
{
lean_object* v_goalsBefore_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; 
v_goalsBefore_2728_ = lean_ctor_get(v_info_2716_, 2);
lean_inc(v_goalsBefore_2728_);
lean_dec_ref(v_info_2716_);
v___x_2729_ = lean_box(1);
v___x_2730_ = l_List_foldlM___at___00Lean_Widget_diffInteractiveGoals_spec__1(v___x_2729_, v_goalsBefore_2728_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_);
if (lean_obj_tag(v___x_2730_) == 0)
{
lean_object* v_a_2731_; size_t v_sz_2732_; size_t v___x_2733_; lean_object* v___x_2734_; 
v_a_2731_ = lean_ctor_get(v___x_2730_, 0);
lean_inc(v_a_2731_);
lean_dec_ref_known(v___x_2730_, 1);
v_sz_2732_ = lean_array_size(v_igs_u2081_2717_);
v___x_2733_ = ((size_t)0ULL);
v___x_2734_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Widget_diffInteractiveGoals_spec__7(v_useAfter_2715_, v_a_2731_, v___y_2727_, v___x_2725_, v_sz_2732_, v___x_2733_, v_igs_u2081_2717_, v_a_2718_, v_a_2719_, v_a_2720_, v_a_2721_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2742_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2737_ = v___x_2734_;
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_a_2735_);
lean_dec(v___x_2734_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2740_; 
if (v_isShared_2738_ == 0)
{
v___x_2740_ = v___x_2737_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_a_2735_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
else
{
lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2750_; 
v_a_2743_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2745_ = v___x_2734_;
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v___x_2734_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2748_; 
if (v_isShared_2746_ == 0)
{
v___x_2748_ = v___x_2745_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_a_2743_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
return v___x_2748_;
}
}
}
}
else
{
lean_object* v_a_2751_; lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2758_; 
lean_dec(v___y_2727_);
lean_dec_ref(v_igs_u2081_2717_);
v_a_2751_ = lean_ctor_get(v___x_2730_, 0);
v_isSharedCheck_2758_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2758_ == 0)
{
v___x_2753_ = v___x_2730_;
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
else
{
lean_inc(v_a_2751_);
lean_dec(v___x_2730_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
lean_object* v___x_2756_; 
if (v_isShared_2754_ == 0)
{
v___x_2756_ = v___x_2753_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v_a_2751_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
return v___x_2756_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_diffInteractiveGoals___boxed(lean_object* v_useAfter_2762_, lean_object* v_info_2763_, lean_object* v_igs_u2081_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_){
_start:
{
uint8_t v_useAfter_boxed_2770_; lean_object* v_res_2771_; 
v_useAfter_boxed_2770_ = lean_unbox(v_useAfter_2762_);
v_res_2771_ = l_Lean_Widget_diffInteractiveGoals(v_useAfter_boxed_2770_, v_info_2763_, v_igs_u2081_2764_, v_a_2765_, v_a_2766_, v_a_2767_, v_a_2768_);
lean_dec(v_a_2768_);
lean_dec_ref(v_a_2767_);
lean_dec(v_a_2766_);
lean_dec_ref(v_a_2765_);
return v_res_2771_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2(lean_object* v_00_u03b4_2772_, lean_object* v_t_2773_, lean_object* v_k_2774_){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___redArg(v_t_2773_, v_k_2774_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2___boxed(lean_object* v_00_u03b4_2776_, lean_object* v_t_2777_, lean_object* v_k_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Widget_diffInteractiveGoals_spec__2(v_00_u03b4_2776_, v_t_2777_, v_k_2778_);
lean_dec(v_k_2778_);
lean_dec(v_t_2777_);
return v_res_2779_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3(lean_object* v_00_u03b2_2780_, lean_object* v_k_2781_, lean_object* v_t_2782_){
_start:
{
uint8_t v___x_2783_; 
v___x_2783_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___redArg(v_k_2781_, v_t_2782_);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3___boxed(lean_object* v_00_u03b2_2784_, lean_object* v_k_2785_, lean_object* v_t_2786_){
_start:
{
uint8_t v_res_2787_; lean_object* v_r_2788_; 
v_res_2787_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Widget_diffInteractiveGoals_spec__3(v_00_u03b2_2784_, v_k_2785_, v_t_2786_);
lean_dec(v_t_2786_);
lean_dec(v_k_2785_);
v_r_2788_ = lean_box(v_res_2787_);
return v_r_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6(lean_object* v_00_u03b1_2789_, lean_object* v_lctx_2790_, lean_object* v_localInsts_2791_, lean_object* v_x_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v___x_2798_; 
v___x_2798_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___redArg(v_lctx_2790_, v_localInsts_2791_, v_x_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6___boxed(lean_object* v_00_u03b1_2799_, lean_object* v_lctx_2800_, lean_object* v_localInsts_2801_, lean_object* v_x_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l_Lean_Meta_withLCtx___at___00Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6_spec__6(v_00_u03b1_2799_, v_lctx_2800_, v_localInsts_2801_, v_x_2802_, v___y_2803_, v___y_2804_, v___y_2805_, v___y_2806_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
lean_dec(v___y_2804_);
lean_dec_ref(v___y_2803_);
return v_res_2808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6(lean_object* v_00_u03b1_2809_, lean_object* v_goal_2810_, lean_object* v_action_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
lean_object* v___x_2817_; 
v___x_2817_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___redArg(v_goal_2810_, v_action_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6___boxed(lean_object* v_00_u03b1_2818_, lean_object* v_goal_2819_, lean_object* v_action_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
lean_object* v_res_2826_; 
v_res_2826_ = l_Lean_Widget_withGoalCtx___at___00Lean_Widget_diffInteractiveGoals_spec__6(v_00_u03b1_2818_, v_goal_2819_, v_action_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
lean_dec(v___y_2824_);
lean_dec_ref(v___y_2823_);
lean_dec(v___y_2822_);
lean_dec_ref(v___y_2821_);
return v_res_2826_;
}
}
lean_object* runtime_initialize_Lean_Widget_InteractiveGoal(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Widget_Diff(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Widget_InteractiveGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Widget_Diff_0__Lean_Widget_initFn_00___x40_Lean_Widget_Diff_2925400476____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Widget_Diff_0__Lean_Widget_showTacticDiff);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Widget_Diff(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Widget_InteractiveGoal(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Widget_Diff(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Widget_InteractiveGoal(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Widget_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Widget_Diff(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Widget_Diff(builtin);
}
#ifdef __cplusplus
}
#endif
